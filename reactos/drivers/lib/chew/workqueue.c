/*
 * COPYRIGHT:   See COPYING in the top level directory
 * PROJECT:     ReactOS TCP/IP protocol driver
 * FILE:        tcpip/main.c
 * PURPOSE:     Common Highlevel Executive Worker
 * PROGRAMMERS: Art Yerkes
 * REVISIONS:
 *   CSH 10/12-2005 Created
 */
#include <ntddk.h>
#include <chew/chew.h>

//#define NDEBUG

#define FOURCC(w,x,y,z) (((w) << 24) | ((x) << 16) | ((y) << 8) | (z))

PDEVICE_OBJECT WorkQueueDevice;
LIST_ENTRY     WorkQueue;
KSPIN_LOCK     WorkQueueLock;

typedef struct _WORK_ITEM {
    LIST_ENTRY Entry;
    PIO_WORKITEM WorkItem;
    VOID (*Worker)( PVOID Data );
    CHAR UserSpace[1];
} WORK_ITEM, *PWORK_ITEM;

VOID ChewInit( PDEVICE_OBJECT DeviceObject ) {
    WorkQueueDevice = DeviceObject;
    InitializeListHead( &WorkQueue );
    KeInitializeSpinLock( &WorkQueueLock );
}

VOID ChewShutdown() {
    KIRQL OldIrql;
    PLIST_ENTRY Entry;
    PWORK_ITEM WorkItem;

    KeAcquireSpinLock( &WorkQueueLock, &OldIrql );
    
    while( !IsListEmpty( &WorkQueue ) ) {
	Entry = RemoveHeadList( &WorkQueue );
	WorkItem = CONTAINING_RECORD( Entry, WORK_ITEM, Entry );
	IoFreeWorkItem( WorkItem->WorkItem );
	ExFreePool( WorkItem );
    }

    KeReleaseSpinLock( &WorkQueueLock, OldIrql );
}

VOID STDCALL ChewWorkItem( PDEVICE_OBJECT DeviceObject, PVOID ChewItem ) {
    PWORK_ITEM WorkItem = ChewItem;

    if( WorkItem->Worker ) 
	WorkItem->Worker( WorkItem->UserSpace );

    IoFreeWorkItem( WorkItem->WorkItem );
    ExFreePool( WorkItem );
}
    
BOOLEAN ChewCreate
( PVOID *ItemPtr, UINT Bytes, VOID (*Worker)( PVOID ), PVOID UserSpace ) {
    PWORK_ITEM Item;
    if( KeGetCurrentIrql() == PASSIVE_LEVEL ) {
	*ItemPtr = NULL;
	Worker(UserSpace);
	return TRUE;
    } else {
	Item = ExAllocatePoolWithTag
	    ( NonPagedPool, 
	      sizeof( WORK_ITEM ) + Bytes - 1, 
	      FOURCC('C','H','E','W') );
	
	if( Item ) {
	    Item->WorkItem = IoAllocateWorkItem( WorkQueueDevice );
	    if( !Item->WorkItem ) {
		ExFreePool( Item );
		return FALSE;
	    }
	    Item->Worker = Worker;
	    if( Bytes && UserSpace )
		RtlCopyMemory( Item->UserSpace, UserSpace, Bytes );
	    
	    ExInterlockedInsertTailList
		( &WorkQueue, &Item->Entry, &WorkQueueLock );
	    IoQueueWorkItem
		( Item->WorkItem, ChewWorkItem, CriticalWorkQueue, Item );

	    *ItemPtr = Item;

	    return TRUE;
	} else
	    return FALSE;
    }
}

VOID ChewRemove( PVOID Item ) {
    PWORK_ITEM WorkItem = Item;
    IoFreeWorkItem( WorkItem->WorkItem );
    ExFreePool( WorkItem );
}

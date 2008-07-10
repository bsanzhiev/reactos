struct IDNDL_ScriptSet { wchar_t const * scripts; int length; };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Arab = { L"Arab" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Armn = { L"Armn" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Beng = { L"Beng" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_BopoHani = { L"Bopo" L";" L"Hani" L";", 11 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Cyrl = { L"Cyrl" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Deva = { L"Deva" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Ethi = { L"Ethi" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Geor = { L"Geor" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Grek = { L"Grek" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Gujr = { L"Gujr" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Guru = { L"Guru" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_HangHani = { L"Hang" L";" L"Hani" L";", 11 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Hani = { L"Hani" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_HaniHiraKana = { L"Hani" L";" L"Hira" L";" L"Kana" L";", 16 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Hebr = { L"Hebr" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Khmr = { L"Khmr" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Knda = { L"Knda" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Latn = { L"Latn" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Mlym = { L"Mlym" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Orya = { L"Orya" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Taml = { L"Taml" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Telu = { L"Telu" L";", 6 };
static const IDNDL_ScriptSet IDNDL_ScriptSet_Thai = { L"Thai" L";", 6 };
static wchar_t const * const IDNDL_Locales [] = {
L"af",
L"af_NA",
L"af_ZA",
L"am",
L"am_ET",
L"ar",
L"ar_AE",
L"ar_BH",
L"ar_DZ",
L"ar_EG",
L"ar_IQ",
L"ar_JO",
L"ar_KW",
L"ar_LB",
L"ar_LY",
L"ar_MA",
L"ar_OM",
L"ar_QA",
L"ar_SA",
L"ar_SD",
L"ar_SY",
L"ar_TN",
L"ar_YE",
L"as",
L"as_IN",
L"az",
L"az_Cyrl",
L"az_Cyrl_AZ",
L"az_Latn",
L"az_Latn_AZ",
L"be",
L"be_BY",
L"bg",
L"bg_BG",
L"bn",
L"bn_BD",
L"bn_IN",
L"ca",
L"ca_ES",
L"cs",
L"cs_CZ",
L"cy",
L"cy_GB",
L"da",
L"da_DK",
L"de",
L"de_AT",
L"de_BE",
L"de_CH",
L"de_DE",
L"de_LI",
L"de_LU",
L"el",
L"el_CY",
L"el_GR",
L"en",
L"en_AU",
L"en_BE",
L"en_BW",
L"en_BZ",
L"en_CA",
L"en_GB",
L"en_HK",
L"en_IE",
L"en_IN",
L"en_JM",
L"en_MH",
L"en_MT",
L"en_NA",
L"en_NZ",
L"en_PH",
L"en_PK",
L"en_SG",
L"en_TT",
L"en_US",
L"en_US_POSIX",
L"en_VI",
L"en_ZA",
L"en_ZW",
L"eo",
L"es",
L"es_AR",
L"es_BO",
L"es_CL",
L"es_CO",
L"es_CR",
L"es_DO",
L"es_EC",
L"es_ES",
L"es_GT",
L"es_HN",
L"es_MX",
L"es_NI",
L"es_PA",
L"es_PE",
L"es_PR",
L"es_PY",
L"es_SV",
L"es_US",
L"es_UY",
L"es_VE",
L"et",
L"et_EE",
L"eu",
L"eu_ES",
L"fa",
L"fa_AF",
L"fa_IR",
L"fi",
L"fi_FI",
L"fo",
L"fo_FO",
L"fr",
L"fr_BE",
L"fr_CA",
L"fr_CH",
L"fr_FR",
L"fr_LU",
L"fr_MC",
L"ga",
L"ga_IE",
L"gl",
L"gl_ES",
L"gu",
L"gu_IN",
L"gv",
L"gv_GB",
L"haw",
L"haw_US",
L"he",
L"he_IL",
L"hi",
L"hi_IN",
L"hr",
L"hr_HR",
L"hu",
L"hu_HU",
L"hy",
L"hy_AM",
L"hy_AM_REVISED",
L"id",
L"id_ID",
L"is",
L"is_IS",
L"it",
L"it_CH",
L"it_IT",
L"ja",
L"ja_JP",
L"ka",
L"ka_GE",
L"kk",
L"kk_KZ",
L"kl",
L"kl_GL",
L"km",
L"km_KH",
L"kn",
L"kn_IN",
L"ko",
L"ko_KR",
L"kok",
L"kok_IN",
L"kw",
L"kw_GB",
L"lt",
L"lt_LT",
L"lv",
L"lv_LV",
L"mk",
L"mk_MK",
L"ml",
L"ml_IN",
L"mr",
L"mr_IN",
L"ms",
L"ms_BN",
L"ms_MY",
L"mt",
L"mt_MT",
L"nb",
L"nb_NO",
L"nl",
L"nl_BE",
L"nl_NL",
L"nn",
L"nn_NO",
L"om",
L"om_ET",
L"om_KE",
L"or",
L"or_IN",
L"pa",
L"pa_Guru",
L"pa_Guru_IN",
L"pl",
L"pl_PL",
L"ps",
L"ps_AF",
L"pt",
L"pt_BR",
L"pt_PT",
L"ro",
L"ro_RO",
L"ru",
L"ru_RU",
L"ru_UA",
L"sk",
L"sk_SK",
L"sl",
L"sl_SI",
L"so",
L"so_DJ",
L"so_ET",
L"so_KE",
L"so_SO",
L"sq",
L"sq_AL",
L"sr",
L"sr_Cyrl",
L"sr_Cyrl_BA",
L"sr_Cyrl_ME",
L"sr_Cyrl_RS",
L"sr_Latn",
L"sr_Latn_BA",
L"sr_Latn_ME",
L"sr_Latn_RS",
L"sv",
L"sv_FI",
L"sv_SE",
L"sw",
L"sw_KE",
L"sw_TZ",
L"ta",
L"ta_IN",
L"te",
L"te_IN",
L"th",
L"th_TH",
L"ti",
L"ti_ER",
L"ti_ET",
L"tr",
L"tr_TR",
L"uk",
L"uk_UA",
L"ur",
L"ur_IN",
L"ur_PK",
L"uz",
L"uz_Arab",
L"uz_Arab_AF",
L"uz_Cyrl",
L"uz_Cyrl_UZ",
L"uz_Latn",
L"uz_Latn_UZ",
L"vi",
L"vi_VN",
L"zh",
L"zh_Hans",
L"zh_Hans_CN",
L"zh_Hans_SG",
L"zh_Hant",
L"zh_Hant_HK",
L"zh_Hant_MO",
L"zh_Hant_TW",
};
static IDNDL_ScriptSet const * const IDNDL_ScriptSets [] = {
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Ethi,
&IDNDL_ScriptSet_Ethi,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Beng,
&IDNDL_ScriptSet_Beng,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Beng,
&IDNDL_ScriptSet_Beng,
&IDNDL_ScriptSet_Beng,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Grek,
&IDNDL_ScriptSet_Grek,
&IDNDL_ScriptSet_Grek,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Gujr,
&IDNDL_ScriptSet_Gujr,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Hebr,
&IDNDL_ScriptSet_Hebr,
&IDNDL_ScriptSet_Deva,
&IDNDL_ScriptSet_Deva,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Armn,
&IDNDL_ScriptSet_Armn,
&IDNDL_ScriptSet_Armn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_HaniHiraKana,
&IDNDL_ScriptSet_HaniHiraKana,
&IDNDL_ScriptSet_Geor,
&IDNDL_ScriptSet_Geor,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Khmr,
&IDNDL_ScriptSet_Khmr,
&IDNDL_ScriptSet_Knda,
&IDNDL_ScriptSet_Knda,
&IDNDL_ScriptSet_HangHani,
&IDNDL_ScriptSet_HangHani,
&IDNDL_ScriptSet_Deva,
&IDNDL_ScriptSet_Deva,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Mlym,
&IDNDL_ScriptSet_Mlym,
&IDNDL_ScriptSet_Deva,
&IDNDL_ScriptSet_Deva,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Orya,
&IDNDL_ScriptSet_Orya,
&IDNDL_ScriptSet_Guru,
&IDNDL_ScriptSet_Guru,
&IDNDL_ScriptSet_Guru,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Taml,
&IDNDL_ScriptSet_Taml,
&IDNDL_ScriptSet_Telu,
&IDNDL_ScriptSet_Telu,
&IDNDL_ScriptSet_Thai,
&IDNDL_ScriptSet_Thai,
&IDNDL_ScriptSet_Ethi,
&IDNDL_ScriptSet_Ethi,
&IDNDL_ScriptSet_Ethi,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Arab,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Cyrl,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Latn,
&IDNDL_ScriptSet_Hani,
&IDNDL_ScriptSet_Hani,
&IDNDL_ScriptSet_Hani,
&IDNDL_ScriptSet_Hani,
&IDNDL_ScriptSet_BopoHani,
&IDNDL_ScriptSet_BopoHani,
&IDNDL_ScriptSet_BopoHani,
&IDNDL_ScriptSet_BopoHani,
};
static const wchar_t * const IDNDL_ScriptNames[] = {
L"Zyyy",
L"Qaai",
L"Arab",
L"Armn",
L"Beng",
L"Bopo",
L"Cher",
L"Copt",
L"Cyrl",
L"Dsrt",
L"Deva",
L"Ethi",
L"Geor",
L"Goth",
L"Grek",
L"Gujr",
L"Guru",
L"Hani",
L"Hang",
L"Hebr",
L"Hira",
L"Knda",
L"Kana",
L"Khmr",
L"Laoo",
L"Latn",
L"Mlym",
L"Mong",
L"Mymr",
L"Ogam",
L"Ital",
L"Orya",
L"Runr",
L"Sinh",
L"Syrc",
L"Taml",
L"Telu",
L"Thaa",
L"Thai",
L"Tibt",
L"Cans",
L"Yiii",
L"Tglg",
L"Hano",
L"Buhd",
L"Tagb",
L"Brai",
L"Cprt",
L"Limb",
L"Linb",
L"Osma",
L"Shaw",
L"Tale",
L"Ugar",
L"Hrkt",
L"Bugi",
L"Glag",
L"Khar",
L"Sylo",
L"Talu",
L"Tfng",
L"Xpeo",
L"Bali",
L"Batk",
L"Blis",
L"Brah",
L"Cham",
L"Cirt",
L"Cyrs",
L"Egyd",
L"Egyh",
L"Egyp",
L"Geok",
L"Hans",
L"Hant",
L"Hmng",
L"Hung",
L"Inds",
L"Java",
L"Kali",
L"Latf",
L"Latg",
L"Lepc",
L"Lina",
L"Mand",
L"Maya",
L"Mero",
L"Nkoo",
L"Orkh",
L"Perm",
L"Phag",
L"Phnx",
L"Plrd",
L"Roro",
L"Sara",
L"Syre",
L"Syrj",
L"Syrn",
L"Teng",
L"Vaii",
L"Visp",
L"Xsux",
L"Zxxx",
L"Zzzz",
L"Cari",
L"Jpan",
L"Lana",
L"Lyci",
L"Lydi",
L"Olck",
L"Rjng",
L"Saur",
L"Sgnw",
L"Sund",
L"Moon",
L"Mtei",
};
struct IDNDL_CharRangeScript { int lbound; int ubound; int code; };
static const IDNDL_CharRangeScript IDNDL_CharRangeScripts[] = {
{ 0, 64, 0 },
{ 65, 90, 25 },
{ 91, 96, 0 },
{ 97, 122, 25 },
{ 123, 169, 0 },
{ 170, 170, 25 },
{ 171, 185, 0 },
{ 186, 186, 25 },
{ 187, 191, 0 },
{ 192, 214, 25 },
{ 215, 215, 0 },
{ 216, 246, 25 },
{ 247, 247, 0 },
{ 248, 696, 25 },
{ 697, 735, 0 },
{ 736, 740, 25 },
{ 741, 767, 0 },
{ 768, 879, 1 },
{ 884, 885, 14 },
{ 890, 893, 14 },
{ 894, 894, 0 },
{ 900, 902, 14 },
{ 903, 903, 0 },
{ 904, 906, 14 },
{ 908, 908, 14 },
{ 910, 929, 14 },
{ 931, 974, 14 },
{ 976, 993, 14 },
{ 994, 1007, 7 },
{ 1008, 1023, 14 },
{ 1024, 1158, 8 },
{ 1160, 1299, 8 },
{ 1329, 1366, 3 },
{ 1369, 1375, 3 },
{ 1377, 1415, 3 },
{ 1417, 1417, 0 },
{ 1418, 1418, 3 },
{ 1425, 1479, 19 },
{ 1488, 1514, 19 },
{ 1520, 1524, 19 },
{ 1536, 1539, 0 },
{ 1547, 1547, 2 },
{ 1548, 1548, 0 },
{ 1549, 1557, 2 },
{ 1563, 1563, 0 },
{ 1566, 1566, 2 },
{ 1567, 1567, 0 },
{ 1569, 1594, 2 },
{ 1600, 1600, 0 },
{ 1601, 1610, 2 },
{ 1611, 1621, 1 },
{ 1622, 1630, 2 },
{ 1632, 1641, 0 },
{ 1642, 1647, 2 },
{ 1648, 1648, 1 },
{ 1649, 1756, 2 },
{ 1757, 1757, 0 },
{ 1758, 1791, 2 },
{ 1792, 1805, 34 },
{ 1807, 1866, 34 },
{ 1869, 1871, 34 },
{ 1872, 1901, 2 },
{ 1920, 1969, 37 },
{ 1984, 2042, 87 },
{ 2305, 2361, 10 },
{ 2364, 2381, 10 },
{ 2384, 2388, 10 },
{ 2392, 2403, 10 },
{ 2404, 2405, 0 },
{ 2406, 2415, 10 },
{ 2416, 2416, 0 },
{ 2427, 2431, 10 },
{ 2433, 2435, 4 },
{ 2437, 2444, 4 },
{ 2447, 2448, 4 },
{ 2451, 2472, 4 },
{ 2474, 2480, 4 },
{ 2482, 2482, 4 },
{ 2486, 2489, 4 },
{ 2492, 2500, 4 },
{ 2503, 2504, 4 },
{ 2507, 2510, 4 },
{ 2519, 2519, 4 },
{ 2524, 2525, 4 },
{ 2527, 2531, 4 },
{ 2534, 2554, 4 },
{ 2561, 2563, 16 },
{ 2565, 2570, 16 },
{ 2575, 2576, 16 },
{ 2579, 2600, 16 },
{ 2602, 2608, 16 },
{ 2610, 2611, 16 },
{ 2613, 2614, 16 },
{ 2616, 2617, 16 },
{ 2620, 2620, 16 },
{ 2622, 2626, 16 },
{ 2631, 2632, 16 },
{ 2635, 2637, 16 },
{ 2649, 2652, 16 },
{ 2654, 2654, 16 },
{ 2662, 2676, 16 },
{ 2689, 2691, 15 },
{ 2693, 2701, 15 },
{ 2703, 2705, 15 },
{ 2707, 2728, 15 },
{ 2730, 2736, 15 },
{ 2738, 2739, 15 },
{ 2741, 2745, 15 },
{ 2748, 2757, 15 },
{ 2759, 2761, 15 },
{ 2763, 2765, 15 },
{ 2768, 2768, 15 },
{ 2784, 2787, 15 },
{ 2790, 2799, 15 },
{ 2801, 2801, 15 },
{ 2817, 2819, 31 },
{ 2821, 2828, 31 },
{ 2831, 2832, 31 },
{ 2835, 2856, 31 },
{ 2858, 2864, 31 },
{ 2866, 2867, 31 },
{ 2869, 2873, 31 },
{ 2876, 2883, 31 },
{ 2887, 2888, 31 },
{ 2891, 2893, 31 },
{ 2902, 2903, 31 },
{ 2908, 2909, 31 },
{ 2911, 2913, 31 },
{ 2918, 2929, 31 },
{ 2946, 2947, 35 },
{ 2949, 2954, 35 },
{ 2958, 2960, 35 },
{ 2962, 2965, 35 },
{ 2969, 2970, 35 },
{ 2972, 2972, 35 },
{ 2974, 2975, 35 },
{ 2979, 2980, 35 },
{ 2984, 2986, 35 },
{ 2990, 3001, 35 },
{ 3006, 3010, 35 },
{ 3014, 3016, 35 },
{ 3018, 3021, 35 },
{ 3031, 3031, 35 },
{ 3046, 3066, 35 },
{ 3073, 3075, 36 },
{ 3077, 3084, 36 },
{ 3086, 3088, 36 },
{ 3090, 3112, 36 },
{ 3114, 3123, 36 },
{ 3125, 3129, 36 },
{ 3134, 3140, 36 },
{ 3142, 3144, 36 },
{ 3146, 3149, 36 },
{ 3157, 3158, 36 },
{ 3168, 3169, 36 },
{ 3174, 3183, 36 },
{ 3202, 3203, 21 },
{ 3205, 3212, 21 },
{ 3214, 3216, 21 },
{ 3218, 3240, 21 },
{ 3242, 3251, 21 },
{ 3253, 3257, 21 },
{ 3260, 3268, 21 },
{ 3270, 3272, 21 },
{ 3274, 3277, 21 },
{ 3285, 3286, 21 },
{ 3294, 3294, 21 },
{ 3296, 3299, 21 },
{ 3302, 3311, 21 },
{ 3313, 3314, 21 },
{ 3330, 3331, 26 },
{ 3333, 3340, 26 },
{ 3342, 3344, 26 },
{ 3346, 3368, 26 },
{ 3370, 3385, 26 },
{ 3390, 3395, 26 },
{ 3398, 3400, 26 },
{ 3402, 3405, 26 },
{ 3415, 3415, 26 },
{ 3424, 3425, 26 },
{ 3430, 3439, 26 },
{ 3458, 3459, 33 },
{ 3461, 3478, 33 },
{ 3482, 3505, 33 },
{ 3507, 3515, 33 },
{ 3517, 3517, 33 },
{ 3520, 3526, 33 },
{ 3530, 3530, 33 },
{ 3535, 3540, 33 },
{ 3542, 3542, 33 },
{ 3544, 3551, 33 },
{ 3570, 3572, 33 },
{ 3585, 3642, 38 },
{ 3647, 3647, 0 },
{ 3648, 3675, 38 },
{ 3713, 3714, 24 },
{ 3716, 3716, 24 },
{ 3719, 3720, 24 },
{ 3722, 3722, 24 },
{ 3725, 3725, 24 },
{ 3732, 3735, 24 },
{ 3737, 3743, 24 },
{ 3745, 3747, 24 },
{ 3749, 3749, 24 },
{ 3751, 3751, 24 },
{ 3754, 3755, 24 },
{ 3757, 3769, 24 },
{ 3771, 3773, 24 },
{ 3776, 3780, 24 },
{ 3782, 3782, 24 },
{ 3784, 3789, 24 },
{ 3792, 3801, 24 },
{ 3804, 3805, 24 },
{ 3840, 3911, 39 },
{ 3913, 3946, 39 },
{ 3953, 3979, 39 },
{ 3984, 3991, 39 },
{ 3993, 4028, 39 },
{ 4030, 4044, 39 },
{ 4047, 4049, 39 },
{ 4096, 4129, 28 },
{ 4131, 4135, 28 },
{ 4137, 4138, 28 },
{ 4140, 4146, 28 },
{ 4150, 4153, 28 },
{ 4160, 4185, 28 },
{ 4256, 4293, 12 },
{ 4304, 4346, 12 },
{ 4347, 4347, 0 },
{ 4348, 4348, 12 },
{ 4352, 4441, 18 },
{ 4447, 4514, 18 },
{ 4520, 4601, 18 },
{ 4608, 4680, 11 },
{ 4682, 4685, 11 },
{ 4688, 4694, 11 },
{ 4696, 4696, 11 },
{ 4698, 4701, 11 },
{ 4704, 4744, 11 },
{ 4746, 4749, 11 },
{ 4752, 4784, 11 },
{ 4786, 4789, 11 },
{ 4792, 4798, 11 },
{ 4800, 4800, 11 },
{ 4802, 4805, 11 },
{ 4808, 4822, 11 },
{ 4824, 4880, 11 },
{ 4882, 4885, 11 },
{ 4888, 4954, 11 },
{ 4959, 4988, 11 },
{ 4992, 5017, 11 },
{ 5024, 5108, 6 },
{ 5121, 5750, 40 },
{ 5760, 5788, 29 },
{ 5792, 5866, 32 },
{ 5867, 5869, 0 },
{ 5870, 5872, 32 },
{ 5888, 5900, 42 },
{ 5902, 5908, 42 },
{ 5920, 5940, 43 },
{ 5941, 5942, 0 },
{ 5952, 5971, 44 },
{ 5984, 5996, 45 },
{ 5998, 6000, 45 },
{ 6002, 6003, 45 },
{ 6016, 6109, 23 },
{ 6112, 6121, 23 },
{ 6128, 6137, 23 },
{ 6144, 6145, 27 },
{ 6146, 6147, 0 },
{ 6148, 6148, 27 },
{ 6149, 6149, 0 },
{ 6150, 6158, 27 },
{ 6160, 6169, 27 },
{ 6176, 6263, 27 },
{ 6272, 6313, 27 },
{ 6400, 6428, 48 },
{ 6432, 6443, 48 },
{ 6448, 6459, 48 },
{ 6464, 6464, 48 },
{ 6468, 6479, 48 },
{ 6480, 6509, 52 },
{ 6512, 6516, 52 },
{ 6528, 6569, 59 },
{ 6576, 6601, 59 },
{ 6608, 6617, 59 },
{ 6622, 6623, 59 },
{ 6624, 6655, 23 },
{ 6656, 6683, 55 },
{ 6686, 6687, 55 },
{ 6912, 6987, 62 },
{ 6992, 7036, 62 },
{ 7424, 7461, 25 },
{ 7462, 7466, 14 },
{ 7467, 7467, 8 },
{ 7468, 7516, 25 },
{ 7517, 7521, 14 },
{ 7522, 7525, 25 },
{ 7526, 7530, 14 },
{ 7531, 7543, 25 },
{ 7544, 7544, 8 },
{ 7545, 7614, 25 },
{ 7615, 7615, 14 },
{ 7616, 7626, 1 },
{ 7678, 7679, 1 },
{ 7680, 7835, 25 },
{ 7840, 7929, 25 },
{ 7936, 7957, 14 },
{ 7960, 7965, 14 },
{ 7968, 8005, 14 },
{ 8008, 8013, 14 },
{ 8016, 8023, 14 },
{ 8025, 8025, 14 },
{ 8027, 8027, 14 },
{ 8029, 8029, 14 },
{ 8031, 8061, 14 },
{ 8064, 8116, 14 },
{ 8118, 8132, 14 },
{ 8134, 8147, 14 },
{ 8150, 8155, 14 },
{ 8157, 8175, 14 },
{ 8178, 8180, 14 },
{ 8182, 8190, 14 },
{ 8192, 8203, 0 },
{ 8204, 8205, 1 },
{ 8206, 8291, 0 },
{ 8298, 8304, 0 },
{ 8305, 8305, 25 },
{ 8308, 8318, 0 },
{ 8319, 8319, 25 },
{ 8320, 8334, 0 },
{ 8336, 8340, 25 },
{ 8352, 8373, 0 },
{ 8400, 8431, 1 },
{ 8448, 8485, 0 },
{ 8486, 8486, 14 },
{ 8487, 8489, 0 },
{ 8490, 8491, 25 },
{ 8492, 8497, 0 },
{ 8498, 8498, 25 },
{ 8499, 8525, 0 },
{ 8526, 8526, 25 },
{ 8531, 8579, 0 },
{ 8580, 8580, 25 },
{ 8592, 9191, 0 },
{ 9216, 9254, 0 },
{ 9280, 9290, 0 },
{ 9312, 9884, 0 },
{ 9888, 9906, 0 },
{ 9985, 9988, 0 },
{ 9990, 9993, 0 },
{ 9996, 10023, 0 },
{ 10025, 10059, 0 },
{ 10061, 10061, 0 },
{ 10063, 10066, 0 },
{ 10070, 10070, 0 },
{ 10072, 10078, 0 },
{ 10081, 10132, 0 },
{ 10136, 10159, 0 },
{ 10161, 10174, 0 },
{ 10176, 10186, 0 },
{ 10192, 10219, 0 },
{ 10224, 10239, 0 },
{ 10240, 10495, 46 },
{ 10496, 11034, 0 },
{ 11040, 11043, 0 },
{ 11264, 11310, 56 },
{ 11312, 11358, 56 },
{ 11360, 11372, 25 },
{ 11380, 11383, 25 },
{ 11392, 11498, 7 },
{ 11513, 11519, 7 },
{ 11520, 11557, 12 },
{ 11568, 11621, 60 },
{ 11631, 11631, 60 },
{ 11648, 11670, 11 },
{ 11680, 11686, 11 },
{ 11688, 11694, 11 },
{ 11696, 11702, 11 },
{ 11704, 11710, 11 },
{ 11712, 11718, 11 },
{ 11720, 11726, 11 },
{ 11728, 11734, 11 },
{ 11736, 11742, 11 },
{ 11776, 11799, 0 },
{ 11804, 11805, 0 },
{ 11904, 11929, 17 },
{ 11931, 12019, 17 },
{ 12032, 12245, 17 },
{ 12272, 12283, 0 },
{ 12288, 12292, 0 },
{ 12293, 12293, 17 },
{ 12294, 12294, 0 },
{ 12295, 12295, 17 },
{ 12296, 12320, 0 },
{ 12321, 12329, 17 },
{ 12330, 12335, 1 },
{ 12336, 12343, 0 },
{ 12344, 12347, 17 },
{ 12348, 12351, 0 },
{ 12353, 12438, 20 },
{ 12441, 12442, 1 },
{ 12443, 12444, 0 },
{ 12445, 12447, 20 },
{ 12448, 12448, 0 },
{ 12449, 12538, 22 },
{ 12539, 12540, 0 },
{ 12541, 12543, 22 },
{ 12549, 12588, 5 },
{ 12593, 12686, 18 },
{ 12688, 12703, 0 },
{ 12704, 12727, 5 },
{ 12736, 12751, 0 },
{ 12784, 12799, 22 },
{ 12800, 12830, 18 },
{ 12832, 12867, 0 },
{ 12880, 12895, 0 },
{ 12896, 12925, 18 },
{ 12926, 13054, 0 },
{ 13056, 13311, 0 },
{ 13312, 19893, 17 },
{ 19904, 19967, 0 },
{ 19968, 40891, 17 },
{ 40960, 42124, 41 },
{ 42128, 42182, 41 },
{ 42752, 42778, 0 },
{ 42784, 42785, 0 },
{ 43008, 43051, 58 },
{ 43072, 43127, 90 },
{ 44032, 55203, 18 },
{ 63744, 64045, 17 },
{ 64048, 64106, 17 },
{ 64112, 64217, 17 },
{ 64256, 64262, 25 },
{ 64275, 64279, 3 },
{ 64285, 64310, 19 },
{ 64312, 64316, 19 },
{ 64318, 64318, 19 },
{ 64320, 64321, 19 },
{ 64323, 64324, 19 },
{ 64326, 64335, 19 },
{ 64336, 64433, 2 },
{ 64467, 64829, 2 },
{ 64830, 64831, 0 },
{ 64848, 64911, 2 },
{ 64914, 64967, 2 },
{ 65008, 65020, 2 },
{ 65021, 65021, 0 },
{ 65024, 65039, 1 },
{ 65040, 65049, 0 },
{ 65056, 65059, 1 },
{ 65072, 65106, 0 },
{ 65108, 65126, 0 },
{ 65128, 65131, 0 },
{ 65136, 65140, 2 },
{ 65142, 65276, 2 },
{ 65279, 65279, 0 },
{ 65281, 65312, 0 },
{ 65313, 65338, 25 },
{ 65339, 65344, 0 },
{ 65345, 65370, 25 },
{ 65371, 65381, 0 },
{ 65382, 65391, 22 },
{ 65392, 65392, 0 },
{ 65393, 65437, 22 },
{ 65438, 65439, 0 },
{ 65440, 65470, 18 },
{ 65474, 65479, 18 },
{ 65482, 65487, 18 },
{ 65490, 65495, 18 },
{ 65498, 65500, 18 },
{ 65504, 65510, 0 },
{ 65512, 65518, 0 },
{ 65529, 65533, 0 },
{ 65536, 65547, 49 },
{ 65549, 65574, 49 },
{ 65576, 65594, 49 },
{ 65596, 65597, 49 },
{ 65599, 65613, 49 },
{ 65616, 65629, 49 },
{ 65664, 65786, 49 },
{ 65792, 65794, 0 },
{ 65799, 65843, 0 },
{ 65847, 65855, 0 },
{ 65856, 65930, 14 },
{ 66304, 66334, 30 },
{ 66336, 66339, 30 },
{ 66352, 66378, 13 },
{ 66432, 66461, 53 },
{ 66463, 66463, 53 },
{ 66464, 66499, 61 },
{ 66504, 66517, 61 },
{ 66560, 66639, 9 },
{ 66640, 66687, 51 },
{ 66688, 66717, 50 },
{ 66720, 66729, 50 },
{ 67584, 67589, 47 },
{ 67592, 67592, 47 },
{ 67594, 67637, 47 },
{ 67639, 67640, 47 },
{ 67644, 67644, 47 },
{ 67647, 67647, 47 },
{ 67840, 67865, 91 },
{ 67871, 67871, 91 },
{ 68096, 68099, 57 },
{ 68101, 68102, 57 },
{ 68108, 68115, 57 },
{ 68117, 68119, 57 },
{ 68121, 68147, 57 },
{ 68152, 68154, 57 },
{ 68159, 68167, 57 },
{ 68176, 68184, 57 },
{ 73728, 74606, 101 },
{ 74752, 74850, 101 },
{ 74864, 74867, 101 },
{ 118784, 119029, 0 },
{ 119040, 119078, 0 },
{ 119082, 119142, 0 },
{ 119143, 119145, 1 },
{ 119146, 119162, 0 },
{ 119163, 119170, 1 },
{ 119171, 119172, 0 },
{ 119173, 119179, 1 },
{ 119180, 119209, 0 },
{ 119210, 119213, 1 },
{ 119214, 119261, 0 },
{ 119296, 119365, 14 },
{ 119552, 119638, 0 },
{ 119648, 119665, 0 },
{ 119808, 119892, 0 },
{ 119894, 119964, 0 },
{ 119966, 119967, 0 },
{ 119970, 119970, 0 },
{ 119973, 119974, 0 },
{ 119977, 119980, 0 },
{ 119982, 119993, 0 },
{ 119995, 119995, 0 },
{ 119997, 120003, 0 },
{ 120005, 120069, 0 },
{ 120071, 120074, 0 },
{ 120077, 120084, 0 },
{ 120086, 120092, 0 },
{ 120094, 120121, 0 },
{ 120123, 120126, 0 },
{ 120128, 120132, 0 },
{ 120134, 120134, 0 },
{ 120138, 120144, 0 },
{ 120146, 120485, 0 },
{ 120488, 120779, 0 },
{ 120782, 120831, 0 },
{ 131072, 173782, 17 },
{ 194560, 195101, 17 },
{ 917505, 917505, 0 },
{ 917536, 917631, 0 },
{ 917760, 917999, 1 },
};

/*
 * gnDefs.h - Generated file. Do not edit.
 */

#ifndef GNDEFS_H
#define GNDEFS_H


/* Custom paper size Identifiers */
#define DMPAPER_EDGETOEDGE                      257
#define DMPAPER_WHITEBORDER                     258
#define DMPAPER_CR80                            261
#define DMPAPER_CR80_AOT                        259
#define DMPAPER_CR79                            260
#define DMPAPER_TAPE_4_INCH                     262
#define DMPAPER_TAPE_6_INCH                     263
#define DMPAPER_TAPE_8_INCH                     264
#define DMPAPER_TAPE_12_INCH                    265
#define _DMPAPER_CUSTOM                         266

/* Custom paper source Identifiers */
#define _DMBIN_CUSTOM                           257

/* Custom media type Identifiers */
#define _DMMEDIA_CUSTOM                         257

/* Custom render type Identifiers */
#define _DMDITHER_CUSTOM                        257

/* UICB Values for iOEM */
#define UICBVAL_OEM_RioTango                    0
#define UICBVAL_OEM_AOTA                        1
#define UICBVAL_OEM_Enduro                      2

/* UICB Values for iModel */
#define UICBVAL_Model_1                         0
#define UICBVAL_Model_2                         1
#define UICBVAL_Model_3                         2
#define UICBVAL_Model_4                         3
#define UICBVAL_Model_5                         4
#define UICBVAL_Model_6                         5
#define UICBVAL_Model_7                         6
#define UICBVAL_Model_8                         7
#define UICBVAL_Model_9                         8
#define UICBVAL_Model_10                        9
#define UICBVAL_Model_11                        10
#define UICBVAL_Model_12                        11
#define UICBVAL_Model_13                        12
#define UICBVAL_Model_14                        13
#define UICBVAL_Model_15                        14
#define UICBVAL_Model_16                        15
#define UICBVAL_Model_17                        16
#define UICBVAL_Model_26                        27

/* UICB Values for iPaperSize */
#define UICBVAL_PaperSize_EdgeToEdge            0
#define UICBVAL_PaperSize_CR80                  1
#define UICBVAL_PaperSize_CR80_AOT              2
#define UICBVAL_PaperSize_CR79                  3
#define UICBVAL_PaperSize_WhiteBorder           4
#define UICBVAL_PaperSize_ExtendedCard          5
#define UICBVAL_PaperSize_Tape_4Inch            6
#define UICBVAL_PaperSize_Tape_6Inch            7
#define UICBVAL_PaperSize_Tape_8Inch            8
#define UICBVAL_PaperSize_Tape_12Inch           9

/* UICB Values for iPaperSource */
#define UICBVAL_PaperSource_Hopper              0
#define UICBVAL_PaperSource_HandFeed            1

/* UICB Values for iMediaType */
#define UICBVAL_MediaType_PlasticCard           0

/* UICB Values for iOrientation */
#define UICBVAL_Portrait                        0
#define UICBVAL_Landscape                       1

/* UICB Values for iColour */
#define UICBVAL_Monochrome                      0
#define UICBVAL_Colour                          1

/* UICB Values for iICMMethod */
#define UICBVAL_ICMMethod_None                  0

/* UICB Values for iICMIntent */
#define UICBVAL_ICMIntent_Saturate              0
#define UICBVAL_ICMIntent_Contrast              1
#define UICBVAL_ICMIntent_ColorMetric           2

/* UICB Values for iRenderType */
#define UICBVAL_RenderType_LineArt              0

/* UICB Values for iResolution */
#define UICBVAL_Resolution_300                  0
#define UICBVAL_Resolution_400                  1

/* UICB Values for iDuplex */
#define UICBVAL_Duplex_Simplex                  0
#define UICBVAL_Duplex_Vertical                 1

/* UICB Values for iCollate */
#define UICBVAL_Collate_False                   0

/* UICB Values for iTTOption */
#define UICBVAL_TTOption_Bitmap                 0

/* UICB Values for eModel */
#define UICBVAL_Model_Rio                       0
#define UICBVAL_Model_Tango                     1
#define UICBVAL_Model_Laminator                 2

/* UICB Values for eColourCorrection */
#define UICBVAL_ColourCorrection_None           0
#define UICBVAL_ColourCorrection_Gamma1         1
#define UICBVAL_ColourCorrection_Gamma2         2
#define UICBVAL_ColourCorrection_ICC_Internal   3
#define UICBVAL_ColourCorrection_ICC_External   4

/* UICB Values for eTileRotate_Front */
#define UICBVAL_TileRotate_Front_0              0
#define UICBVAL_TileRotate_Front_90             1
#define UICBVAL_TileRotate_Front_180            2
#define UICBVAL_TileRotate_Front_270            3

/* UICB Values for ePageOrientation_Back */
#define UICBVAL_PageOrientation_Back_Portrait   0
#define UICBVAL_PageOrientation_Back_Landscape  1

/* UICB Values for ePageOrientation_Front */
#define UICBVAL_PageOrientation_Front_Portrait  0
#define UICBVAL_PageOrientation_Front_Landscape 1

/* UICB Values for eDuplex */
#define UICBVAL_Duplex_Front                    0
#define UICBVAL_Duplex_BothSides                1
#define UICBVAL_Duplex_Back                     2
#define UICBVAL_Duplex_Undefined                3

/* UICB Values for eTileRotate_Back */
#define UICBVAL_TileRotate_Back_0               0
#define UICBVAL_TileRotate_Back_90              1
#define UICBVAL_TileRotate_Back_180             2
#define UICBVAL_TileRotate_Back_270             3

/* UICB Values for eHalftoning */
#define UICBVAL_Halftoning_ErrorDiffusion       0
#define UICBVAL_Halftoning_LineArt              1

/* UICB Values for eChannelOption_Back */
#define UICBVAL_YMC_Back                        0
#define UICBVAL_YMCK_Back                       1
#define UICBVAL_KResin_Back                     2

/* UICB Values for eChannelOption_Front */
#define UICBVAL_YMC_Front                       0
#define UICBVAL_YMCK_Front                      1
#define UICBVAL_KResin_Front                    2

/* UICB Values for eChannelOption */
#define UICBVAL_YMC                             0
#define UICBVAL_YMCK                            1
#define UICBVAL_KResin                          2

/* UICB Values for eHalftoning_Front */
#define UICBVAL_Halftoning_Front_ErrorDiffusion 0
#define UICBVAL_Halftoning_Front_LineArt        1

/* UICB Values for eHalftoning_Back */
#define UICBVAL_Halftoning_Back_ErrorDiffusion  0
#define UICBVAL_Halftoning_Back_LineArt         1

/* UICB Values for eOrientation */
#define UICBVAL_Orientation_Portrait            0
#define UICBVAL_Orientation_Landscape           1

/* UICB Values for eOvercoatHoles_Front */
#define UICBVAL_NoHole                          0
#define UICBVAL_MagStripeNormal                 1
#define UICBVAL_MagStripeWide                   2
#define UICBVAL_ChipNormal                      3
#define UICBVAL_ChipLarge                       4
#define UICBVAL_UserDefined                     5

/* UICB Values for eOvercoatHoles_Back */
#define UICBVAL_NoHole_Back                     0
#define UICBVAL_MagStripeNormal_Back            1
#define UICBVAL_MagStripeWide_Back              2
#define UICBVAL_ChipNormal_Back                 3
#define UICBVAL_ChipLarge_Back                  4
#define UICBVAL_UserDefined_Back                5

/* UICB Values for eMagCoercivity */
#define UICBVAL_Coercivity_HiCo                 0
#define UICBVAL_Coercivity_LoCo                 1

/* UICB Values for eBitsPerChar_Track1 */
#define UICBVAL_BitsPerChar_Track1_7            0
#define UICBVAL_BitsPerChar_Track1_5            1
#define UICBVAL_BitsPerChar_Track1_1            2

/* UICB Values for eBitsPerChar_Track2 */
#define UICBVAL_BitsPerChar_Track2_7            0
#define UICBVAL_BitsPerChar_Track2_5            1
#define UICBVAL_BitsPerChar_Track2_1            2

/* UICB Values for eBitsPerChar_Track3 */
#define UICBVAL_BitsPerChar_Track3_7            0
#define UICBVAL_BitsPerChar_Track3_5            1
#define UICBVAL_BitsPerChar_Track3_1            2

/* UICB Values for eBitsPerInch_Track1 */
#define UICBVAL_BitsPerInch_Track1_210          0
#define UICBVAL_BitsPerInch_Track1_75           1

/* UICB Values for eBitsPerInch_Track2 */
#define UICBVAL_BitsPerInch_Track2_210          0
#define UICBVAL_BitsPerInch_Track2_75           1

/* UICB Values for eBitsPerInch_Track3 */
#define UICBVAL_BitsPerInch_Track3_210          0
#define UICBVAL_BitsPerInch_Track3_75           1

/* UICB Values for eEjectSide */
#define UICBVAL_EjectSide_Front                 0
#define UICBVAL_EjectSide_Back                  1

/* UICB Values for eSecurityType_Back */
#define UICBVAL_SecurityType_Back_HoloKote      0
#define UICBVAL_SecurityType_Back_UseWithLaminate 1
#define UICBVAL_SecurityType_Back_NoSecurity    2

/* UICB Values for eEncodingMethod */
#define UICBVAL_Encoding_UserDefined            0
#define UICBVAL_Encoding_AutoInsert             1

/* UICB Values for eBlackStartOption_Front */
#define UICBVAL_Start_K_Front                   0
#define UICBVAL_Start_YMC_Front                 1

/* UICB Values for eBlackStartOption_Back */
#define UICBVAL_Start_K_Back                    0
#define UICBVAL_Start_YMC_Back                  1

/* UICB Values for eBlackStartOption */
#define UICBVAL_Start_K                         0
#define UICBVAL_Start_YMC                       1

/* UICB Values for eLaminating */
#define UICBVAL_Laminating_None                 0
#define UICBVAL_Laminating_Front                1
#define UICBVAL_Laminating_Back                 2
#define UICBVAL_Laminating_Both                 3

/* UICB Values for eAvalonModel */
#define UICBVAL_Avalon_Solo                     0
#define UICBVAL_Avalon_Duo                      1

/* UICB Values for eES_PrintheadType */
#define UICBVAL_PrintheadType_KGE2              0
#define UICBVAL_PrintheadType_KEE1              1
#define UICBVAL_PrintheadType_KEE4              2

/* UICB Values for eLamProfile */
#define UICBVAL_Profile_Num1                    0
#define UICBVAL_Profile_Num2                    1
#define UICBVAL_Profile_Num3                    2
#define UICBVAL_Profile_Num4                    3
#define UICBVAL_Profile_Num5                    4
#define UICBVAL_Profile_Num6                    5
#define UICBVAL_Custom_Profile                  6

/* UICB Values for eHoloKoteImage_Rio_Front */
#define UICBVAL_HoloKote_Key_Rio_Front          0
#define UICBVAL_HoloKote_Rings_Rio_Front        1
#define UICBVAL_HoloKote_Flex_Rio_Front         2

/* UICB Values for eHoloKoteImage_Rio_Back */
#define UICBVAL_HoloKote_Key_Rio_Back           0
#define UICBVAL_HoloKote_Rings_Rio_Back         1
#define UICBVAL_HoloKote_Flex_Rio_Back          2

/* UICB Values for eHoloKoteImage_Enduro_Front */
#define UICBVAL_HoloKote_Key_Enduro_Front       0
#define UICBVAL_HoloKote_Rings_Enduro_Front     1
#define UICBVAL_HoloKote_Globe_Enduro_Front     2
#define UICBVAL_HoloKote_Waves_Enduro_Front     3
#define UICBVAL_HoloKote_Flex_Enduro_Front      4
#define UICBVAL_HoloKote_IDville_Logo_Enduro_Front 5
#define UICBVAL_HoloKote_IDville_Seal_Enduro_Front 6
#define UICBVAL_HoloKote_IDville_Eagle_Enduro_Front 7
#define UICBVAL_HoloKote_IDville_Globe_Enduro_Front 8
#define UICBVAL_HoloKote_Authentys_Enduro_Front 9
#define UICBVAL_HoloKote_Polaroid_Enduro_Front  10

/* UICB Values for eHoloKoteImage_Enduro_Back */
#define UICBVAL_HoloKote_Key_Enduro_Back        0
#define UICBVAL_HoloKote_Rings_Enduro_Back      1
#define UICBVAL_HoloKote_Globe_Enduro_Back      2
#define UICBVAL_HoloKote_Waves_Enduro_Back      3
#define UICBVAL_HoloKote_Flex_Enduro_Back       4
#define UICBVAL_HoloKote_IDville_Logo_Enduro_Back 5
#define UICBVAL_HoloKote_IDville_Seal_Enduro_Back 6
#define UICBVAL_HoloKote_IDville_Eagle_Enduro_Back 7
#define UICBVAL_HoloKote_IDville_Globe_Enduro_Back 8
#define UICBVAL_HoloKote_Authentys_Enduro_Back  9
#define UICBVAL_HoloKote_Polaroid_Enduro_Back   10

/* UICB Values for eES_CleanRequired */
#define UICBVAL_ES_NoClean                      0
#define UICBVAL_ES_CleanRequired                1

/* UICB Values for eProfile */
#define UICBVAL_Profile_Num1b                   0
#define UICBVAL_Profile_Num2b                   1
#define UICBVAL_Profile_Num3b                   2
#define UICBVAL_Profile_Num4b                   3
#define UICBVAL_Profile_Num5b                   4
#define UICBVAL_Profile_Num6b                   5
#define UICBVAL_Custom_Profileb                 6

/* UICB Values for eLamFilmType */
#define UICBVAL_LamFilm_Patch                   0
#define UICBVAL_LamFilm_Overlay                 1

/* UICB Values for eDyeFilmInstalled */
#define UICBVAL_DyeFilm_Auto                    0
#define UICBVAL_DyeFilm_LC1                     1
#define UICBVAL_DyeFilm_LC3                     2
#define UICBVAL_DyeFilm_LC6                     3
#define UICBVAL_DyeFilm_LC8                     4
#define UICBVAL_DyeFilm_AV1                     5

/* UICB Values for eXXL_ImageType */
#define UICBVAL_SingleImage                     0
#define UICBVAL_DoubleImage                     1
#define UICBVAL_Extended_Monochrome             2
#define UICBVAL_XLTape                          3

/* UICB Values for ePrintQuality */
#define UICBVAL_PrintQuality_Draft              0
#define UICBVAL_PrintQuality_High               1

/* UICB Values for eLanguage */
#define UICBVAL_Lang_English                    0
#define UICBVAL_Lang_French                     1
#define UICBVAL_Lang_German                     2
#define UICBVAL_Lang_Italian                    3
#define UICBVAL_Lang_Spanish                    4
#define UICBVAL_Lang_Portuguese                 5
#define UICBVAL_Lang_Simp_Chinese               6
#define UICBVAL_Lang_Polish                     7
#define UICBVAL_Lang_Russian                    8
#define UICBVAL_Lang_Turkish                    9
#define UICBVAL_Lang_Romanian                   10
#define UICBVAL_Lang_Korean                     11
#define UICBVAL_Lang_Trad_Chinese               12
#define UICBVAL_Lang_Japanese                   13
#define UICBVAL_Lang_Greek                      14

/* UICB Values for eXXL_TapeSize */
#define UICBVAL_Tape_4_Inch                     0
#define UICBVAL_Tape_6_Inch                     1
#define UICBVAL_Tape_8_Inch                     2
#define UICBVAL_Tape_12_Inch                    3

/* UICB Values for eResinQuality */
#define UICBVAL_HighSpeed                       0
#define UICBVAL_DefaultSpeed                    1
#define UICBVAL_HighQuality                     2

/* UICB Values for eHoloKoteImage_RioPro_Front */
#define UICBVAL_HoloKote_Key_RioPro_Front       0
#define UICBVAL_HoloKote_Rings_RioPro_Front     1
#define UICBVAL_HoloKote_Globe_RioPro_Front     2
#define UICBVAL_HoloKote_Cubes_RioPro_Front     3
#define UICBVAL_HoloKote_Flex_RioPro_Front      4
#define UICBVAL_HoloKote_IDville_Logo_RioPro_Front 5
#define UICBVAL_HoloKote_IDville_Seal_RioPro_Front 6
#define UICBVAL_HoloKote_IDville_Eagle_RioPro_Front 7
#define UICBVAL_HoloKote_IDville_Globe_RioPro_Front 8
#define UICBVAL_HoloKote_IDville_Flex_RioPro_Front 9
#define UICBVAL_HoloKote_Authentys_RioPro_Front 10

/* UICB Values for eHoloKoteImage_RioPro_Back */
#define UICBVAL_HoloKote_Key_RioPro_Back        0
#define UICBVAL_HoloKote_Rings_RioPro_Back      1
#define UICBVAL_HoloKote_Globe_RioPro_Back      2
#define UICBVAL_HoloKote_Cubes_RioPro_Back      3
#define UICBVAL_HoloKote_Flex_RioPro_Back       4
#define UICBVAL_HoloKote_IDville_Logo_RioPro_Back 5
#define UICBVAL_HoloKote_IDville_Seal_RioPro_Back 6
#define UICBVAL_HoloKote_IDville_Eagle_RioPro_Back 7
#define UICBVAL_HoloKote_IDville_Globe_RioPro_Back 8
#define UICBVAL_HoloKote_IDville_Flex_RioPro_Back 9
#define UICBVAL_HoloKote_Authentys_RioPro_Back  10

/* UICB Values for TreeView_AreasHoles */
#define UICBVAL_TVCN_BackHole2                  1
#define UICBVAL_TVCN_BackHole1                  2
#define UICBVAL_TVCN_BackArea2                  3
#define UICBVAL_TVCN_BackArea1                  4
#define UICBVAL_TVCN_FrontHole2                 5
#define UICBVAL_TVCN_FrontHole1                 6
#define UICBVAL_TVCN_FrontArea2                 7
#define UICBVAL_TVCN_FrontArea1                 8

/* Dependency function identifiers 
#define DEPFUNC_DF_Language                     (_DEPFUNC_DRIVERFUNC + 1)
#define DEPFUNC_DF_RemotePrinter                (_DEPFUNC_DRIVERFUNC + 2)
#define DEPFUNC_DF_EnduroFilmType               (_DEPFUNC_DRIVERFUNC + 3)
#define DEPFUNC_DF_ProfileSettings              (_DEPFUNC_DRIVERFUNC + 4)
#define DEPFUNC_DF_LaminatingOn_Warning         (_DEPFUNC_DRIVERFUNC + 5)
#define DEPFUNC_DF_Overcoat_Warning             (_DEPFUNC_DRIVERFUNC + 6)
#define DEPFUNC_DF_RioPro_Ethernet              (_DEPFUNC_DRIVERFUNC + 7)

#define DRV_DEVMODE_VERSION 316*/
#endif

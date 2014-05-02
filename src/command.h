/***************************************************************************/
/**                                                                       **/
/**                    ULTRA ELECTRONICS CARD SYSTEMS                     **/
/**                                                                       **/
/***************************************************************************/
/**                                                                       **/
/**  PROJECT      : UltraDriver                                           **/
/**                                                                       **/
/**  MODULE NAME  : Command.h                                             **/
/**                                                                       **/
/**  SIN No.      : 2076                                                  **/
/**                                                                       **/
/**  COPYRIGHT    : Ultra Electronics Card Systems                        **/
/**                                                                       **/
/***************************************************************************/

// Command strings for our device
// For page header and trailer
#define CMD_STR_LEADCHAR "\005"
#define CMD_STR_SOH      "\001,"
#define CMD_STR_ETX      "\003"

#define CMD_STR_NUMBEROFCOPY        "NOC%u,"
#define CMD_STR_NUMBEROFCOPY_MAG    "BBB%u,"
#define CMD_STR_DRIVERVERSION       "VER%s"
#define CMD_STR_FWVERSION           "-%s"
#define CMD_STR_LANGUAGE            "LAN%s,"
#define CMD_STR_CR79				"CR79,"
#define CMD_STR_BACKONLY			"BSO,"
#define CMD_STR_STARTMAGDATA        "MAG"
#define CMD_STR_MAGVERIFY           "MGVON,"
#define CMD_STR_HICOERCIVITY        "COEH,"
#define CMD_STR_LOCOERCIVITY        "COEL,"
#define CMD_STR_BITS_PER_CHAR       "MPC%u,"
  #define BITS_PER_CHAR_7           7
  #define BITS_PER_CHAR_5           5
  #define BITS_PER_CHAR_1           1
#define CMD_STR_BITS_PER_INCH       "BPI%u,"
  #define BITS_PER_INCH_210         210
  #define BITS_PER_INCH_75          75
#define CMD_STR_COLOURSURE          "SLW%s,"
#define CMD_STR_DUPLEX              "DPX%s,"
#define CMD_STR_BACKPAGEFORMAT      "BAC%s,"
#define CMD_STR_IMAGEFORMAT         "IMF%s,"
#define CMD_STR_CURRENTPAGE         "PAG%u,"
#define CMD_STR_ORIGIN              "XCO0,YCO0,"
#define CMD_STR_IMAGESIZE           "WID%u,HGT%u,"
#define CMD_STR_OVERCOAT            "OVR%s,"
#define CMD_STR_USEWITHLAMINATE     "NNN%s,"
#define CMD_STR_HOLOKOTE            "USF%s,"
#define CMD_STR_OVERCOAT_RIO        "PCT0,0,1025,641,"
#define CMD_STR_OVERCOAT_ALTO       "PCT0,0,999,641,"
#define CMD_STR_OVERCOAT_ENDURO     "PCT0,0,1015,641,"
#define CMD_STR_OVERCOAT_USER       "PCT%lu,%lu,%lu,%lu,"
#define CMD_STR_HOLOKOTE_ORIENT     "HOL%s,"
#define CMD_STR_HOLOPATCHPOS        "PAT%u,"
#define CMD_STR_TILEROTATE          "TRO%s,"
#define CMD_STR_HOLOPATCHHOLE       "HPH%s,"
#define CMD_STR_MAG_STRIP_NORMAL    "NCT0,420,1025,590,"
#define CMD_STR_MAG_STRIP_WIDE      "NCT0,400,1025,610,"
#define CMD_STR_CHIP_NORMAL         "NCT90,295,260,450,"
#define CMD_STR_CHIP_LARGE          "NCT75,275,280,470,"
#define CMD_STR_HOLE_USER_DEFINED   "NCT%lu,%lu,%lu,%lu,"
#define CMD_STR_PH_YMC              "CPW%u,"
#define CMD_STR_PH_K                "KPW%u,"
#define CMD_STR_PH_OVER             "OPW%u,"
#define CMD_STR_PH_POSITION         "DDD%u,"
#define CMD_STR_IS_POSITION         "SOI%u,"
#define CMD_STR_IE_POSITION         "EOI%u,"
#define CMD_STR_HANDFEED            "HFD%s,"
#define CMD_STR_EJECTSIDE           "ESS%u,"
#define CMD_STR_CARDREJECT          "REJ%s,"
#define CMD_STR_HOLOKOTE_IMAGE      "HKT%u,"
#define CMD_STR_HOLOKOTE_MAP        "HKM%s,"
#define CMD_STR_CUSTOMKEY_DISABLE   "CKI%s,"
#define CMD_STR_RIOTANGO2           "RT2,"
#define CMD_STR_LAMINATOR_COMMAND   "LAM%u,"
#define CMD_STR_ROLLER_TEMP         "LAM_DEG%u,"
#define CMD_STR_CARD_SPEED          "LAM_SPD%u,"
#define CMD_STR_PRELAM_DELAY        "LAM_DLY%u,"
#define CMD_STR_CARD_LENGTH         "LAM_LEN%u,"
#define CMD_STR_START_OFFSET        "LAM_STA%i,"
#define CMD_STR_END_OFFSET          "LAM_END%u,"
#define CMD_STR_FILM_TYPE           "LAM_FLM%u,"
#define CMD_STR_TIME_DATE           "TDT%s,"
#define CMD_STR_X_AXIS_ADJUST       "XPO%d,"
#define CMD_STR_XXL_IMAGE_TYPE      "XLI%d:%d,"
#define CMD_STR_ERASE_ON			"ERAON,"
#define CMD_STR_ERASE_START			"EAS%u,"
#define CMD_STR_ERASE_END			"EAE%u,"
#define CMD_STR_ERASE_WRITE			"EAW%u,"
#define CMD_STR_REWRITE_ERASE_AREA  "REA%u,%u,%u,%u,"
#define CMD_STR_RESIN_QUALITY		"RSP%s,"
#define CMD_STR_JIS2_ENCODING		"JIS2,"
#define CMD_STR_ICC					"ICC%u,"
#define CMD_STR_COMMA               ","
#define CMD_STR_HYPHEN				"-"

//Printhead definitions
//This command does not have a comma after it.  This overcomes a firmware
//issue in the parsing of the header where a fault arises if a comma is seen
//immediately before the File Separator and is a problem in Mag Encode Only
#define CMD_STR_PRINTHEAD_RIO         "KEE"
#define CMD_STR_PRINTHEAD_ALTO        "KGE"
#define CMD_STR_PRINTHEAD_ENDURO_KGE2 "KGE2"
#define CMD_STR_PRINTHEAD_ENDURO_KEE1 "KEE1"
#define CMD_STR_PRINTHEAD_ENDURO_KEE4 "KEE4"

// For plane data size
#define CMD_STR_CYANSIZE            "SZR%lu"
#define CMD_STR_MAGENTASIZE         "SZG%lu"
#define CMD_STR_YELLOWSIZE          "SZB%lu"
#define CMD_STR_KSIZE               "SZK%lu"

//For Dye Film Selection
#define CMD_STR_LC1					"LC1,"
#define CMD_STR_LC3					"LC3,"
#define CMD_STR_LC6					"LC6,"
#define CMD_STR_LC8					"LC8,"

// For plane output
#define CMD_STR_OUTPUT_C            "R:"
#define CMD_STR_OUTPUT_M            "G:"
#define CMD_STR_OUTPUT_Y            "B:"
#define CMD_STR_OUTPUT_K            "K:"

// Command parameters
#define CMD_STR_PARAM_ON            "ON"
#define CMD_STR_PARAM_OFF           "OFF"
#define CMD_STR_HOLOKOTE_PORTRAIT   "POR"
#define CMD_STR_HOLOKOTE_LANDSCAPE  "LAN"
#define CMD_STR_ROTATE_NONE         "0"
#define CMD_STR_ROTATE_90           "90"
#define CMD_STR_ROTATE_180          "180"
#define CMD_STR_ROTATE_270          "270"

// Command parameter for image format
#define CMD_STR_PARAM_CMYKO_BAC     "CKO"
#define CMD_STR_PARAM_CMYK_BAC      "CK"
#define CMD_STR_PARAM_CMYO_BAC      "CO"
#define CMD_STR_PARAM_CMY_BAC       "C"
#define CMD_STR_PARAM_KO_BAC        "KO"
#define CMD_STR_PARAM_K_BAC         "K"
#define CMD_STR_PARAM_O_BAC         "O"
#define CMD_STR_PARAM_CMYK          "BGRK"
#define CMD_STR_PARAM_CMY           "BGR"
#define CMD_STR_PARAM_K             "K"

// Command parameter for resin quality
#define CMD_STR_RESIN_QUALITY_DEFAULT "DEF"
#define CMD_STR_RESIN_QUALITY_FAST	  "FAST"
#define CMD_STR_RESIN_QUALITY_HIGH	  "HQ"

// Separator command
#define CMD_STR_FILE_SEPARATOR      "\x1C"

typedef enum {FRONT_AREA1, FRONT_AREA2,
              FRONT_HOLE1, FRONT_HOLE2,
	          BACK_AREA1,  BACK_AREA2,
	          BACK_HOLE1,  BACK_HOLE2,
} AREA_HOLE_ID;

enum {FRONT_PAGE = 1,
      BACK_PAGE
};

enum {OVERLAY_FILM,
	  PATCH_FILM
};

#define DEFAULT_PRINTHEAD_POWER_YMC      50
#define DEFAULT_PRINTHEAD_POWER_RESIN    50
#define DEFAULT_PRINTHEAD_POWER_OVERCOAT 50
#define DEFAULT_PRINTHEAD_POSITION       50
#define DEFAULT_IMAGE_START_POSITION     50
#define DEFAULT_IMAGE_END_POSITION       50

#define DEFAULT_ERASE_START_POWER		 50
#define DEFAULT_ERASE_END_POWER			 50
#define DEFAULT_ERASE_WRITE_POWER		 50

//#############################################################################
/*
VOID OutputHeaderCommand
(
    PDEVDATA pdev,        ///< Pointer to our PDEV
    BOOL bFrontPage        ///< TRUE = Front page (or simplex); FALSE = Back page
);

VOID OutputOptimaHeaderCommand
(
    PDEVDATA pdev,        ///< Pointer to our PDEV
    BOOL bFrontPage        ///< TRUE = Front page (or simplex); FALSE = Back page
);
VOID OutputPlaneDataSizeCommand
(
    PDEVDATA pdev,        ///< Pointer to our PDEV
    ULONG ulDataLen,       ///< The data length which is used as command parameter
    ULONG ulColour         ///< The colour to sent out. PLANE_Y, PLANE_M, PLANE_C, PLANE_K
);

VOID OutputPlaneCommand
(
    PDEVDATA pdev,        ///< Pointer to our PDEV
    PBYTE pPlane,          ///< Pointer to output plane data
    ULONG ulColour,        ///< The colour to send out. PLANE_Y, PLANE_M, PLANE_C, PLANE_K
    ULONG ulOutBufLen      ///< The data length in pPlane
);

VOID OutputComma
(
    PDEVDATA pdev         ///< Pointer to our PDEV
);

VOID OutputFileSeparator
(
    PDEVDATA pdev         ///< Pointer to our PDEV
);

VOID OutputETXCommand
(
    PDEVDATA pdev         ///< Pointer to our PDEV
);

*/
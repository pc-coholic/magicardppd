/***************************************************************************/
/**                                                                       **/
/**                    ULTRA ELECTRONICS CARD SYSTEMS                     **/
/**                                                                       **/
/***************************************************************************/
/**                                                                       **/
/**  PROJECT      : UltraLinux                                            **/
/**                                                                       **/
/**  MODULE NAME  : MagiGen.h                                             **/
/**                                                                       **/
/**  COPYRIGHT    : Ultra Electronics Card Systems                        **/
/**                                                                       **/
/***************************************************************************/

#ifndef MAGI_GENERAL
#define MAGI_GENERAL

#define MAX_CARD_WIDTH  1016
#define MAX_CARD_HEIGHT 642

#define FILTER_SIZE			60
#define BUFSIZE				512
#define STATUS_BUFFERSIZE   1024

#define MAX_LANGID 3

#define ENGLISH			TEXT("ENG")
#define FRENCH			TEXT("FRA")
#define GERMAN			TEXT("DEU")
#define ITALIAN			TEXT("ITA")
#define SPANISH			TEXT("SPA")
#define PORTUGUESE		TEXT("POR")
#define SIMP_CHINESE	TEXT("SCH")
#define POLISH			TEXT("POL")
#define RUSSIAN			TEXT("RUS")
#define TURKISH			TEXT("TUR")
#define ROMANIAN		TEXT("ROM")
#define KOREAN			TEXT("KOR")
#define TRAD_CHINESE	TEXT("TCH")
#define JAPANESE		TEXT("JPN")
#define GREEK			TEXT("GRK")
#define DANISH			TEXT("DAN")

// Port name
#define PORTNAME_LPT    L"LPT"
#define PORTNAME_USB    L"USB"
#define PORTNAME_TCPIP  L"IP_"
#define PORTNAME_FILE   L"FILE:"
#define PORTNAME_TS		L"TS"
#define PORTNAME_NE		L"NE"


//#############################################################################
typedef int16_t SHORT;
typedef uint16_t /*unsigned short*/ USHORT;
typedef uint8_t /*unsigned char*/ BYTE;
typedef uint8_t /*unsigned char */CHAR;
typedef uint8_t/*unsigned char*/ * PBYTE;
typedef uint8_t/*unsigned char*/ * LPBYTE;
typedef uint16_t/*unsigned short*/ WORD;
typedef uint32_t/*unsigned long*/ DWORD;
typedef DWORD *LPDWORD;
typedef uint16_t/*unsigned int*/ UINT;
typedef uint16_t/*unsigned int*/ INT;
typedef int32_t /*long*/ BOOL;
typedef uint32_t/*unsigned long*/ ULONG;
typedef int32_t/*long*/ LONG;
typedef uint8_t/*void*/ *PVOID;
typedef uint8_t/*void*/ *LPVOID;
typedef float FLOAT;
typedef uint16_t/*wchar_t*/ WCHAR;
typedef uint8_t/*wchar_t */* PWSTR;
typedef void VOID;
typedef DWORD COLORREF;

typedef struct _RECTL
    {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
    } 	RECTL;

typedef struct _RECTL *PRECTL;

typedef struct _RECTL *LPRECTL;

typedef struct _POINTL
    {
    LONG x;
    LONG y;
    } 	POINTL;

enum {REGKEY_FPP,
              REGKEY_ES_MODEL,
              REGKEY_ES_CLEAN,
              REGKEY_ES_COLOUR,
              REGKEY_ES_RESIN,
			  REGKEY_ES_OVERLAY,
			  REGKEY_ES_FWVERSION,
			  REGKEY_DEBUG,
			  REGKEY_PAUSING,
			  REGKEY_POLLING_DISABLE,
			  REGKEY_COUNT_05,
			  REGKEY_ES_DENSITY,
			  REGKEY_DRIVER_VERSION,
			  REGKEY_STATUS_FWCHECKDATE
};

enum {OFF, ON};

enum {FRONT, BACK};

#define GEN_DEBUG_FLAG		0x01
#define LM_DEBUG_FLAG		0x02
#define SM_DEBUG_FLAG		0x04
#define ETHERNET_DEBUG_FLAG	0x08
#define GFX_DEBUG_FLAG		0x10
#define ALL_DEBUG			(GEN_DEBUG_FLAG | LM_DEBUG_FLAG | SM_DEBUG_FLAG)

#define NUMBER_05S		64

/*#include "debug.h"
////#define MAGDEBUG
#ifdef LANG_MON
  #define LM_DEBUGGING(x) ((x) & LM_DEBUG_FLAG)
  #define ERROR_MSG(x)  {if (LM_DEBUGGING(iLM_Debug)) ErrorMsg(x);}
#else
#ifdef STATUS_MON
  #define ERROR_MSG(x) {if (bSM_Debug) ErrorMsg(x);}
#else
  #define ERROR_MSG(x, y) {if (DetermineDebugStatus((x))) OutputDebugString((y));}
#endif
#endif
*/

//#############################################################################

#define MAG_PRINTER	 0x01
#define DUO_PRINTER	 0x02
#define CHIP_PRINTER 0x10

enum {  
        //Printer Family assignment set to OEM value in devmode
        OEM_RIO, 
        OEM_AOTA=1,
        OEM_ENDURO,
        OEM_OPTIMA
};

              
enum {  
//Rio Printers
        RIO_TANGO, 
        XXL,
//AOTA Printers
        ALTO,         
        OPERA,        
        TEMPO,        
        AVALON,       
        DCP100,       
//Enduro Printers
        ENDURO,
        MC200,
        PRONTO,
        PRO,
        IDMAKER,
        AUTHENTYS,
        P4500S,
        P2500S,
        PPC_ID2000,
        PPC_ID2100,
        PPC_ID3100,
        IDM_VALUE,
        IDM_ADVANTAGE,
        IDM_SECURE,
        AUTHENTYS_PRO,
        RIO_PRO_XTENDED,
        JKE700C,
        FAGOO_P310E,
        ENDURO_PLUS,
        AUTHENTYS_PLUS,
        PPC_ID2300,
        IDM_ADVANT_PLUS, 
        P4500S_PLUS,
        PPC_ID3300,
		JKE160C,
		REWRITEPRINTER_A,
		REWRITEPRINTER_B,
//Optima Printers        
        OPTIMA
};              

/*//Rio Printers
#define RIO_TANGO		UICBVAL_Model_1
#define XXL				UICBVAL_Model_2
//AOTA Printers
#define ALTO			UICBVAL_Model_1
#define OPERA			UICBVAL_Model_2
#define TEMPO			UICBVAL_Model_3
#define AVALON			UICBVAL_Model_4
#define DCP100			UICBVAL_Model_5
//Enduro Printers
#define ENDURO			UICBVAL_Model_1
#define MC200			UICBVAL_Model_2
#define PRONTO			UICBVAL_Model_3
#define PRO				UICBVAL_Model_4
#define IDMAKER			UICBVAL_Model_5
#define AUTHENTYS		UICBVAL_Model_6
#define P4500S			UICBVAL_Model_7
#define P2500S			UICBVAL_Model_8
#define PPC_ID2000		UICBVAL_Model_9
#define PPC_ID2100		UICBVAL_Model_10
#define PPC_ID3100		UICBVAL_Model_11
#define IDM_VALUE		UICBVAL_Model_12
#define IDM_ADVANTAGE	UICBVAL_Model_13
#define IDM_SECURE		UICBVAL_Model_14
#define AUTHENTYS_PRO	UICBVAL_Model_15
#define RIO_PRO_XTENDED	UICBVAL_Model_16
#define AISINO_JKE700C	UICBVAL_Model_17
#define FAGOO_P310E		UICBVAL_Model_18
#define ENDURO_PLUS		UICBVAL_Model_19
#define AUTHENTYS_PLUS	UICBVAL_Model_20
#define PPC_ID2300		UICBVAL_Model_21
#define IDM_ADVANT_PLUS UICBVAL_Model_22
#define P4500S_PLUS		UICBVAL_Model_23
#define PPC_ID3300		UICBVAL_Model_24
#define AISINO_JKE160C	UICBVAL_Model_25
#define REWRITE_PRINTER_A UICBVAL_Model_26
#define REWRITE_PRINTER_B UICBVAL_Model_27
*/
#define RIO_OEM(x)          (x->OEM == OEM_RIO)
#define OPTIMA_OEM(x)       (x->OEM == OEM_OPTIMA)

#define MODEL(x)            (x->Printer)

#define RIO_MODEL(x)		(RIO_OEM((x)) \
							&& (MODEL((x)) == RIO_TANGO) \
                            && (x->TargetPrinter == 1))
#define TANGO_MODEL(x)		(RIO_OEM((x)) \
							&& (MODEL((x)) == RIO_TANGO) \
                            && (x->TargetPrinter == 2))
#define LAMINATOR_MODEL(x)	(RIO_OEM((x)) \
							&& (MODEL((x)) == RIO_TANGO) \
                            && (x->TargetPrinter == 3))
#define XXL_MODEL(x)        (RIO_OEM((x)) && (MODEL((x)) == XXL))

#define AOTA_OEM(x)      (x->OEM == OEM_AOTA)
#define ALTO_MODEL(x)	 (AOTA_OEM((x)) && (MODEL((x)) == ALTO))
#define OPERA_MODEL(x)	 (AOTA_OEM((x)) && (MODEL((x)) == OPERA))
#define TEMPO_MODEL(x)	 (AOTA_OEM((x)) && (MODEL((x)) == TEMPO))
#define AVALON_MODEL(x)	 (AOTA_OEM((x)) && (MODEL((x)) == AVALON))
#define DCP100_MODEL(x)	 (AOTA_OEM((x)) && (MODEL((x)) == DCP100))

#define ENDURO_OEM(x)        (x->OEM == OEM_ENDURO)
#define ENDURO_MODEL(x)	     (ENDURO_OEM((x)) && (MODEL((x)) == ENDURO))
#define MC200_MODEL(x)	     (ENDURO_OEM((x)) && (MODEL((x)) == MC200))
#define PRONTO_MODEL(x)	     (ENDURO_OEM((x)) && (MODEL((x)) == PRONTO))
#define RIOPRO_MODEL(x)	     (ENDURO_OEM((x)) && (MODEL((x)) == PRO))
#define IDMAKER_MODEL(x)     (ENDURO_OEM((x)) && (MODEL((x)) == IDMAKER))
#define AUTHENTYS_MODEL(x)   (ENDURO_OEM((x)) && (MODEL((x)) == AUTHENTYS))
#define P4500S_MODEL(x)      (ENDURO_OEM((x)) && (MODEL((x)) == P4500S))
#define P2500S_MODEL(x)      (ENDURO_OEM((x)) && (MODEL((x)) == P2500S))
#define PPC_ID2000_MODEL(x)  (ENDURO_OEM((x)) && (MODEL((x)) == PPC_ID2000))
#define PPC_ID2100_MODEL(x)  (ENDURO_OEM((x)) && (MODEL((x)) == PPC_ID2100))
#define PPC_ID3100_MODEL(x)  (ENDURO_OEM((x)) && (MODEL((x)) == PPC_ID3100))
#define IDM_VALUE_MODEL(x)   (ENDURO_OEM((x)) && (MODEL((x)) == IDM_VALUE))
#define IDM_ADVANTAGE_MODEL(x) (ENDURO_OEM((x)) && (MODEL((x)) == IDM_ADVANTAGE))
#define IDM_SECURE_MODEL(x)  (ENDURO_OEM((x)) && (MODEL((x)) == IDM_SECURE))
#define AUTHENTYS_PRO_MODEL(x) (ENDURO_OEM((x)) && (MODEL((x)) == AUTHENTYS_PRO))
#define RIO_PRO_X_MODEL(x)	  (ENDURO_OEM((x)) && (MODEL((x)) == RIO_PRO_XTENDED))
#define AISINO_JKE700C_MODEL(x)       (ENDURO_OEM((x)) && (MODEL((x)) == JKE700C))
#define FAGOO_P310E_MODEL(x)  (ENDURO_OEM((x)) && (MODEL((x)) == FAGOO_P310E))
#define ENDURO_PLUS_MODEL(x)  (ENDURO_OEM((x)) && (MODEL((x)) == ENDURO_PLUS))
#define AUTH_PLUS_MODEL(x)    (ENDURO_OEM((x)) && (MODEL((x)) == AUTHENTYS_PLUS))
#define PPC_ID2300_MODEL(x)   (ENDURO_OEM((x)) && (MODEL((x)) == PPC_ID2300))
#define P4500S_PLUS_MODEL(x)  (ENDURO_OEM((x)) && (MODEL((x)) == P4500S_PLUS))
#define IDM_ADV_PLUS_MODEL(x) (ENDURO_OEM((x)) && (MODEL((x)) == IDM_ADVANT_PLUS))
#define PPC_ID3300_MODEL(x)   (ENDURO_OEM((x)) && (MODEL((x)) == PPC_ID3300))
#define AISINO_JKE160C_MODEL(x) (ENDURO_OEM((x)) && (MODEL((x)) == JKE160C))
#define REWRITE_A_MODEL(x)    (ENDURO_OEM((x)) && (MODEL((x)) == REWRITEPRINTER_A))
#define REWRITE_B_MODEL(x)    (ENDURO_OEM((x)) && (MODEL((x)) == REWRITEPRINTER_B))
//#define OPTIMA_OEM(x)        (x.OEM == OEM_OPTIMA)
#define OPTIMA_MODEL(x)      (OPTIMA_OEM((x)) && (MODEL((x)) == OPTIMA))

#define POLAROID_TYPE(x)	(  P4500S_MODEL((x))      \
							|| P4500S_PLUS_MODEL((x)) \
							|| P2500S_MODEL((x)))
#define PPC_TYPE(x)			(  PPC_ID2000_MODEL((x)) \
							|| PPC_ID2100_MODEL((x)) \
							|| PPC_ID3100_MODEL((x)) \
							|| PPC_ID2300_MODEL((x)) \
							|| PPC_ID3300_MODEL((x)))
#define IDVILLE_TYPE(x)		(  IDMAKER_MODEL((x))       \
							|| IDM_VALUE_MODEL((x))     \
							|| IDM_ADVANTAGE_MODEL((x)) \
							|| IDM_SECURE_MODEL((x)))   \
							|| IDM_ADV_PLUS_MODEL((x))
#define AUTHENTYS_TYPE(x)	(  AUTHENTYS_MODEL((x))     \
							|| AUTHENTYS_PRO_MODEL((x)) \
							|| AUTH_PLUS_MODEL((x)))

#define ENDURO_TYPE(x)		(  ENDURO_MODEL((x))        \
							|| MC200_MODEL((x))         \
							|| IDMAKER_MODEL((x))       \
							|| AUTHENTYS_MODEL((x))     \
							|| P4500S_MODEL((x))        \
							|| PPC_ID2100_MODEL((x))    \
							|| IDM_ADVANTAGE_MODEL((x)) \
							|| REWRITE_B_MODEL((x))    \
							)
#define PRONTO_TYPE(x)	    (  PRONTO_MODEL((x))         \
							|| P2500S_MODEL((x))         \
							|| PPC_ID2000_MODEL((x))     \
							|| IDM_VALUE_MODEL((x))	     \
							|| AISINO_JKE700C_MODEL((x)) \
							|| REWRITE_A_MODEL((x))      \
							)
#define RIOPRO_TYPE(x)		(  RIOPRO_MODEL((x))       \
							|| PPC_ID3100_MODEL((x))    \
							|| IDM_SECURE_MODEL((x))    \
							|| AUTHENTYS_PRO_MODEL((x)) \
							|| RIO_PRO_X_MODEL((x))     \
							|| PPC_ID3300_MODEL((x))	\
							|| AISINO_JKE160C_MODEL((x)))
#define XXL_TYPE(x)			(  XXL_MODEL((x)) \
							|| RIO_PRO_X_MODEL((x)))
#define ENDURO_PLUS_TYPE(x)	(  ENDURO_PLUS_MODEL((x))  \
							|| AUTH_PLUS_MODEL((x))    \
							|| P4500S_PLUS_MODEL((x))  \
							|| PPC_ID2300_MODEL((x))   \
							|| IDM_ADV_PLUS_MODEL((x)) \
							|| FAGOO_P310E_MODEL((x)))

//#############################################################################

#define COLOUR_RED		RGB(255,0,0)
#define COLOUR_GREEN	RGB(0,255,0)
#define COLOUR_BLUE		RGB(0,0,255)
#define COLOUR_CYAN		RGB(0,255,255)
#define COLOUR_MAGENTA	RGB(255,0,255)
#define COLOUR_YELLOW	RGB(255,255,0)
#define COLOUR_WHITE	RGB(255,255,255)
#define COLOUR_BLACK	RGB(0,0,0)

enum {CARDDISPLAY_AREASHOLES, CARDDISPLAY_ERASEAREA};

//#############################################################################

#define SERIAL_SIZE          20
#define ENDURO_MAGNETIC_MASK 0x01
#define ENDURO_DUPLEX_MASK   0x02

#define DEFAULT_RIOPRO_DENSITY 3829
#define MAX_BLACK_AREAS		10

typedef struct tag_ENDURO_STATUS
{
	BOOL  bPrinterConnected;
	DWORD eModel;
	char  sModel[30];
	DWORD ePrintheadType;
	char  sPrinterSerial[SERIAL_SIZE];
	char  sPrintheadSerial[SERIAL_SIZE];
	char  sPCBSerial[SERIAL_SIZE];
	char  sFirmwareVersion[SERIAL_SIZE];

	//These elements were char sPCBVersion[SERIAL_SIZE], which was not used
	DWORD iDummy1;
	DWORD iDummy2;
	DWORD iDummy3;
	DWORD iBitFields;
	DWORD iES_Density;

	DWORD iHandFeed;
	DWORD iCardsPrinted;
	DWORD iCardsOnPrinthead;
	DWORD iDyePanelsPrinted;
	DWORD iCleansSinceShipped;
	DWORD iDyePanelsSinceClean;
	DWORD iCardsSinceClean;
	DWORD iCardsBetweenCleans;

	DWORD iPrintHeadPosn;
	DWORD iImageStartPosn;
	DWORD iImageEndPosn;
	DWORD iMajorError;
	DWORD iMinorError;

	char  sTagUID[20];
	DWORD iShotsOnFilm;
	DWORD iShotsUsed;
	char  sDyeFilmType[20];
	DWORD iColourLength;
	DWORD iResinLength;
	DWORD iOvercoatLength;
	DWORD eDyeFlags;
	DWORD iCommandCode;
	DWORD iDOB;
	DWORD eDyeFilmManuf;
	DWORD eDyeFilmProg;
} ENDURO_STATUS, *PENDURO_STATUS;

#define SEM_DEFAULT 0x00000001
#define SEM_PLATEN  0x00000002

enum tagDRVCALLBACKSTATUS
{
	DCBS_OK,
	DCBS_ABORTJOB,
	DCBS_FATALERROR
} DRVCALLBACKSTATUS;


// Used in several functions to know which plane we are processing
#define PLANE_Y    0
#define PLANE_M    1
#define PLANE_C    2
#define PLANE_K    3
#define PLANE_HALO 4

#define PLANE_MAX (PLANE_HALO + 1) // This is used for allocating memory

// Fixed value : we always send out scanlines to the device as this width
#define OUTPUT_DATA_WIDTH_RIO  504  //Rio/Tango 2 Data Width
#define OUTPUT_DATA_WIDTH_ALTO 576  //Alto/Opera/Tempo Data Width
#define OUTPUT_DATA_WIDTH_OPTIMA    1036 //Optima Data Width

typedef struct tagSPOOLMEMINFO
{
    PBYTE lpBuffer;        ///< plane data
    ULONG  ulDataSize;      ///< how many bytes we copied on lpBuffer
    ULONG  ulColour;        ///< one of PLANE_X
    BOOL   bDataInPlane;    ///< if lpBuffer has any color
}SPOOLMEMINFO;
typedef SPOOLMEMINFO* PSPOOLMEMINFO, * LPSPOOLMEMINFO;


// Track index in int
enum {MAG_TRACK_INDEX0,		//Dummy track for passing commands to the printer in the header
	  MAG_TRACK_INDEX1,
	  MAG_TRACK_INDEX2,
	  MAG_TRACK_INDEX3,
	  MAG_TRACK_INDEX4,
	  MAX_TRACK_NUMBER};

#define MAG_TRACK_NONE   -1
#define FIRST_MAG_TRACK	 MAG_TRACK_INDEX1
#define LAST_MAG_TRACK	 MAG_TRACK_INDEX3

//#define MAG_MAXBUFFERNUM  256  //RJE 22/1/09
#define MAG_MAXBUFFERNUM  750

typedef struct tagMAGTRACKINFO
{
    BOOL  bFoundSS;         // TRUE = Found the start sentinel
    BOOL  bFoundES;         // TRUE = Found the end sentinel
    BOOL  bComplete;        // TRUE = Saved full track data in TrackData
    BOOL  bBufferFull;      // TRUE = TrackData has max. no. of byte characters.
    char  TrackData[MAG_MAXBUFFERNUM]; ///< Recorded magnetic encoding data.
    ULONG ulTrackLength;    // Length from SS to ES in TrackData
    // Members below will be dependent on track number.
    // See MagEncd.C InitializeMagneticEncodeTrackInfo()
    WORD  wStartSentinel;   // Start Sentinel (SS) for the track
    WORD  wEndSentinel;     // End Sentinel (ES) for the track
	BOOL  bSSAutoInsert;    // Auto Insert setting for SS
	BOOL  bESAutoInsert;    // Auto Insert setting for ES
    WORD  wMinCharCode;     // Minimum character code for the track.
    WORD  wMaxCharCode;     // Maxmum character code for the track.
    ULONG ulMaxTrackLen;    // Max. no. of characters between SS and ES
    BOOL* pValidCharList;   // List of characters to be used between SS and ES
}MAGTRACKINFO;
typedef MAGTRACKINFO* PMAGTRACKINFO, * LPMAGTRACKINFO;

// Index for the buffers to be used detect adjacent colour option
#define BUFFER_PREV  0
#define BUFFER_CURR  1
#define BUFFER_NEXT  2

#endif // MAGI_GENERAL


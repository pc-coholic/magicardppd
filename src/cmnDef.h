/***************************************************************************/
/**                                                                       **/
/**                    ULTRA ELECTRONICS CARD SYSTEMS                     **/
/**                                                                       **/
/***************************************************************************/
/**                                                                       **/
/**  PROJECT      : UltraDriver                                           **/
/**                                                                       **/
/**  MODULE NAME  : cmnDef.h                                              **/
/**                                                                       **/
/**  SIN No.      : 2076                                                  **/
/**                                                                       **/
/**  COPYRIGHT    : Ultra Electronics Card Systems                        **/
/**                                                                       **/
/***************************************************************************/

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
    LPBYTE lpBuffer;        ///< plane data
    ULONG  ulDataSize;      ///< how many bytes we copied on lpBuffer
    ULONG  ulColour;        ///< one of PLANE_X
    BOOL   bDataInPlane;    ///< if lpBuffer has any color
}SPOOLMEMINFO;
typedef SPOOLMEMINFO* PSPOOLMEMINFO, FAR* LPSPOOLMEMINFO;


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
typedef MAGTRACKINFO* PMAGTRACKINFO, FAR* LPMAGTRACKINFO;

// Index for the buffers to be used detect adjacent colour option
#define BUFFER_PREV  0
#define BUFFER_CURR  1
#define BUFFER_NEXT  2

/***************************************************************************
 *  $Workfile::   COLRMTCH.c                                                  $
 *       
 *      Numerous colour matching routines
 *   
 *
 ****************************************************************************/

//#define DEBUG
//#include "magu.h"
//#include "oem.h"

//#define COLOURTABLE
#include "colortab.h"

//extern COLOURTABLE ColorMatchTable[];

//extern WORD YAdjust;
//extern WORD MAdjust;
//extern WORD CAdjust;


hsv rgb2hsv(rgb in) 
{ 
    hsv         out; 
    double      min, max, delta; 
 
    min = in.r < in.g ? in.r : in.g; 
    min = min  < in.b ? min  : in.b; 
 
    max = in.r > in.g ? in.r : in.g; 
    max = max  > in.b ? max  : in.b; 
    out.s = 0;
    out.v = max;                                // v 
    delta = max - min; 
    if( max > 0.0) { 
        out.s = (255 * delta) / max;            // s
    } else { 
        // r = g = b = 0                        // s = 0, v is undefined 
        out.s = 0.0; 
        out.h = 255.0;//NAN;                            // its now undefined 
        return out; 
    } 
    if( in.r >= max )                           // > is bogus, just keeps compilor happy 
    {
        out.h = (delta) ? ( in.g - in.b ) / delta : 0;        // between yellow & magenta 
    }
    else 
    if( in.g >= max ) 
        out.h = 2.0 + ( in.b - in.r ) / delta;  // between cyan & yellow 
    else 
        out.h = 4.0 + ( in.r - in.g ) / delta;  // between magenta & cyan 
 
    out.h *= 256;//60.0;                              // degrees 
 
    if( out.h < 0.0 ) 
        out.h += 1536;//360.0; 
 
    return out; 
} 

float error(int hsv, int initHSV, int altHSV, int initCMY, int altCMY) {
	// change in H, S, or V multiplied by its corresponding CMY line gradient
    if (hsv == initHSV)
        return 0;
        
	return (float)(hsv - initHSV) * (altCMY - initCMY) / (altHSV - initHSV);
}


int closestEntry(float hsv, float interval) {
	// find closest entry by rounding
	float entryIndex = hsv / interval;
	int closestEntryIndex = (int) (entryIndex + 0.5f);
	int closestEntry = (int)(closestEntryIndex * interval);
	
	if (interval == (float)16 && closestEntry == 256)
		return 255;
        
	return closestEntry;
}


int enclosingEntry(int hsv, int closestEntry, int interval) {
int ret=0;
	//255               //240           //16
    //238               //240           //16 ->224

    if (closestEntry - hsv < 0)
        ret=closestEntry + interval;
	else
		ret=closestEntry - interval;
        
    if ((float)interval == 16 && ret == 256)
		return 255;

return ret;
}

int lookUpC(int h, int s, int v, PCOLOURMATCHTABLE pct)
{
WORD tabley;

    tabley = (v > 240) ? 16 * 816 : (v / 16) * 816;
    if (v>256)
        tabley-=(16 * 816);
        
    //s batches of 48
    tabley += (s > 240) ? 16 * 48 : (s / 16) * 48;
    if (s>256)
        tabley-=(16 * 48);
        
    //h batches of 48
    tabley += (h / 32);    
    if (h==1536) 
        tabley-=48;
    pct += tabley;
return pct->C;

}

int lookUpM(int h, int s, int v, PCOLOURMATCHTABLE pct)
{
WORD tabley;
//{ 1504, 255, 224}	[028,210,198]		//[ 028, 000, 224]	[ 028, 210, 198, 000]
//{ 0000, 000, 240}	[039,052,048]		//[ 240, 240, 240]	[ 039, 052, 048, 000]
    tabley = (v > 240) ? 16 * 816 : (v / 16) * 816;
    if (v>256)
        tabley-=(16 * 816);
    
    //s batches of 48
    tabley += (s > 240) ? 16 * 48 : (s / 16) * 48;
    if (s>256)
        tabley-=(16 * 48);
        
    
    //h batches of 48
    //1536 passed 
    tabley += (h / 32);    
    
    if (h==1536) 
        tabley-=48;

    pct += tabley;

return pct->M;
}

int lookUpY(int h, int s, int v, PCOLOURMATCHTABLE pct)
{
WORD tabley;

    tabley = (v > 240) ? 16 * 816 : (v / 16) * 816;
    if (v>256)
        tabley-=(16 * 816);
    
    //s batches of 48
    tabley += (s > 240) ? 16 * 48 : (s / 16) * 48;
    if (s>256)
        tabley-=(16 * 48);
    
    //h batches of 48
    tabley += (h / 32);    
    if (h==1536) 
        tabley-=48;

    pct += tabley;

return pct->Y;
}


ULONG hsvToCMY(int h, int s, int v, PCOLOURMATCHTABLE pct) 
{
int initC, initM, initY, initH, initS, initV, altH, altS, altV;
int altC, altM, altY;
float hueErrorInC, hueErrorInM, hueErrorInY;
float satErrorInC, satErrorInM, satErrorInY;
float velErrorInC, velErrorInM, velErrorInY;
float c,m,y;
ULONG cmyk;

	// calculate closest HSV entries
	initH = closestEntry((float)h, 32);
	initS = closestEntry((float)s, 16);
	initV = closestEntry((float)v, 16);
	
	// calculate enclosing HSV entries
	altH = (h == initH) ? h : enclosingEntry(h, initH, 32);
	altS = (s == initS) ? s : enclosingEntry(s, initS, 16);
	altV = (v == initV) ? v : enclosingEntry(v, initV, 16);

    // look up closest HSV entries
    initC = lookUpC(initH, initS, initV, pct);
    initM = lookUpM(initH, initS, initV, pct);
    initY = lookUpY(initH, initS, initV, pct);

    // look up alternate CMY for changing hue
    altC = lookUpC(altH, initS, initV, pct);
    altM = lookUpM(altH, initS, initV, pct);
    altY = lookUpY(altH, initS, initV, pct);

    // calculate error in CMY from hue
    hueErrorInC = error(h, initH, altH, initC, altC);
    hueErrorInM = error(h, initH, altH, initM, altM);
    hueErrorInY = error(h, initH, altH, initY, altY);

    // look up alternate CMY for changing saturation
    altC = lookUpC(initH, altS, initV, pct);
    altM = lookUpM(initH, altS, initV, pct);
    altY = lookUpY(initH, altS, initV, pct);

    // calculate error in CMY from saturation
    satErrorInC = error(s, initS, altS, initC, altC);
    satErrorInM = error(s, initS, altS, initM, altM);
    satErrorInY = error(s, initS, altS, initY, altY);

    // look up alternate CMY for changing velocity
    altC = lookUpC(initH, initS, altV, pct);
    altM = lookUpM(initH, initS, altV, pct);
    altY = lookUpY(initH, initS, altV, pct);

    // calculate error in CMY from velocity
    velErrorInC = error(v, initV, altV, initC, altC);
    velErrorInM = error(v, initV, altV, initM, altM);
    velErrorInY = error(v, initV, altV, initY, altY);

    // calculate final CMY values
    c = initC + hueErrorInC + satErrorInC + velErrorInC + 0.5f;
    m = initM + hueErrorInM + satErrorInM + velErrorInM + 0.5f;
    y = initY + hueErrorInY + satErrorInY + velErrorInY + 0.5f;

    c = (WORD)c;
    m = (WORD)m;
    y = (WORD)y;
	//0xffff ffff
	
	cmyk = (ULONG)c << 24;
	cmyk += (ULONG)m << 16;
	cmyk += (ULONG)y << 8;
	//MAKELONG(MAKEWORD(c,m),MAKEWORD(y,0));
	//CMYK( (WORD)c, (WORD)m, (WORD)y, 0 );

    return (cmyk);

////#ifdef BUMPVERSION
    //increase the returned CMY value by registry adjustment values
//    c = (WORD)c * (float)CAdjust / (float)100;
//	if (c > 255) c=255;
//    m = (WORD)m * (float)MAdjust / (float)100;
//	if (m > 255) m=255;	
//    y = (WORD)y * (float)YAdjust / (float)100;
//    if (y > 255) y=255;	
//#else
//#endif	
    
}



/* END OF FILE */
/***************/


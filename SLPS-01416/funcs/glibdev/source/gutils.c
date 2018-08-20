// C:\DIABPSX\GLIBDEV\SOURCE\GUTILS.C

#include "types.h"

// address: 0x80020C98
unsigned char GU_InitModule();

// address: 0x80020CC4
void GU_SetRndSeed(unsigned long *Tab) {
	// register: 5
	register int f;
}


// address: 0x80020CF4
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x80020D84
long GU_GetSRnd();

// address: 0x80020DA4
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x80020DE0
unsigned int GU_AlignVal(unsigned int w, unsigned int round);


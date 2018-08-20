// C:\diabpsx\SOURCE\TRIGS.CPP

#include "types.h"

// address: 0x80075018
void InitVPTriggers__Fv() {
}


// address: 0x80075060
bool FindLevTrig__Fiii(int x, int y, int l) {
}


// address: 0x800750F8
void ScanMap__FPsi(short *list, int l) {
	// register: 19
	register int NoTrigs;
	{
		{
			// register: 18
			register int y;
			{
				{
					// register: 16
					register int x;
				}
			}
		}
	}
}


// address: 0x80075200
int FindBlock__Fii(int x, int y) {
	// register: 6
	// size: 0x4
	register struct BLOCK *ptr;
}


// address: 0x8007529C
void ChangeBlock__Fiii(int x, int y, int bl) {
	// register: 17
	// size: 0x4
	register struct BLOCK *ptr;
	// register: 18
	register short *list;
	{
		// register: 4
		register int b;
	}
}


// address: 0x800753E0
void ScanBlocks__FPs(short *list) {
	// register: 19
	// size: 0x4
	register struct BLOCK *ptr;
	{
		// register: 20
		register int bl;
		{
			// register: 18
			register int y;
			{
				{
					// register: 17
					register int x;
				}
			}
		}
	}
}


// address: 0x800754E8
void BuildLevTrigs__Fv() {
}


// address: 0x8007567C
void DrawFRIG__Fv() {
}


// address: 0x8007569C
unsigned char ForceTownTrig__Fv() {
}


// address: 0x80075888
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x80075A48
unsigned char ForceL2Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 3
	register int dy;
}


// address: 0x80075D48
unsigned char ForceL3Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80076054
unsigned char ForceL4Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80076390
void Freeupstairs__Fv() {
	// register: 8
	register int j;
	// register: 9
	register int tx;
	// register: 10
	register int ty;
	// register: 4
	register int xx;
	// register: 5
	register int yy;
}


// address: 0x80076440
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x800764CC
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x80076558
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x800765E4
void CheckTrigForce__Fv() {
	// register: 19
	register int ocursmx;
	// register: 18
	register int ocursmy;
	{
		{
			{
				// register: 17
				register int i;
				{
					{
						// register: 16
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x800768F0
void FadeGameOut__Fv() {
}


// address: 0x80076994
bool IsTrigger__Fii(int x, int y) {
	// register: 6
	register int i;
}


// address: 0x80076A8C
bool CheckTrigLevel__Fi(int level) {
}


// address: 0x80076AC8
void CheckTriggers__Fi(int pnum) {
	// register: 5
	register int x;
	// register: 6
	register int y;
	{
		// register: 30
		register int i;
		{
			{
				{
					{
						{
							// register: 16
							register unsigned char abortflag;
							// register: 18
							register int dx;
							// register: 17
							register int dy;
							// register: 19
							register char m;
						}
					}
				}
			}
		}
	}
}



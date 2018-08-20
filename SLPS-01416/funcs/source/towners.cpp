// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x80039F88
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80039FDC
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80039FFC
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x8003A04C
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x8003A1A4
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 7
		register int quest;
	}
}


// address: 0x8003A264
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003A394
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003A4CC
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003A600
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003A734
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003A868
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003A9A4
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003AAD8
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003AC0C
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003AD40
void InitCows__Fv() {
	// register: 20
	register int i;
	// register: 17
	register int x;
	// register: 19
	register int y;
	// register: 18
	register int d;
	// register: 17
	register int x2;
	// register: 2
	register int y2;
}


// address: 0x8003AFD8
void InitTowners__Fv() {
}


// address: 0x8003B064
void FreeTownerGFX__Fv() {
	// register: 17
	register int i;
	{
		{
			{
				{
					{
						{
							{
								{
									// register: 4
									register void *p__p;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8003B108
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8003B1F0
void TownBlackSmith__Fv() {
	// register: 16
	register int tidx;
}


// address: 0x8003B27C
void TownBarOwner__Fv() {
	// register: 16
	register int tidx;
}


// address: 0x8003B318
void TownDead__Fv() {
	// register: 16
	register int tidx;
}


// address: 0x8003B400
void TownHealer__Fv() {
}


// address: 0x8003B428
void TownStory__Fv() {
}


// address: 0x8003B450
void TownDrunk__Fv() {
}


// address: 0x8003B478
void TownBoy__Fv() {
}


// address: 0x8003B4A0
void TownWitch__Fv() {
}


// address: 0x8003B4C8
void TownBarMaid__Fv() {
}


// address: 0x8003B4F0
void TownCow__Fv() {
}


// address: 0x8003B518
void ProcessTowners__Fv() {
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x8003B768
// size: 0x6C
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x8003B83C
void CowSFX__Fi(int pnum) {
	// address: 0x801112CC
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8011B818
	static int snLastCowSFX;
}


// address: 0x8003B958
void TownerTalk__Fii(int first, int t) {
}


// address: 0x8003B998
void TalkToTowner__Fii(int p, int t) {
	// address: 0xFFFFFFE0
	auto int i;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 17
	// size: 0x6C
	register struct ItemStruct *Item;
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}



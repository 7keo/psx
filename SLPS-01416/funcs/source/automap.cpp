// C:\diabpsx\SOURCE\AUTOMAP.CPP

#include "types.h"

// address: 0x80161F58
void StartAutomap__Fv() {
}


// address: 0x80161F68
void AutomapUp__Fv() {
}


// address: 0x80161F88
void AutomapDown__Fv() {
}


// address: 0x80161FA8
void AutomapLeft__Fv() {
}


// address: 0x80161FC8
void AutomapRight__Fv() {
}


// address: 0x80161FE8
// size: 0x10
struct LINE_F2 *AMGetLine__FUcUcUc(unsigned char R, unsigned char G, unsigned char B) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct LINE_F2 *L2;
}


// address: 0x801620A0
void AmDrawPlayer__Fiiiii(int x0, int y0, int x1, int y1, int PNum) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
}


// address: 0x80162124
void DrawAutomapPlr__Fv() {
	// register: 18
	register int x;
	// register: 19
	register int y;
	// register: 23
	register int automaps3;
	// register: 22
	register int automaps4;
	// register: 21
	register int automaps5;
	{
		// register: 20
		register int pc;
	}
}


// address: 0x80162490
void DrawAutoMapVertDoor__Fii(int X, int Y) {
	// register: 8
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 22
	register int Ly;
	// register: 18
	register int Frac;
	// register: 22
	register int y0;
	// register: 21
	register int x1;
	// register: 19
	register int y1;
	// register: 16
	register int y2;
	// register: 20
	register int x3;
}


// address: 0x8016264C
void DrawAutoMapHorzDoor__Fii(int X, int Y) {
	// register: 9
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 20
	register int Ly;
	// register: 18
	register int Frac;
	// register: 20
	register int y0;
	// register: 17
	register int x1;
	// register: 21
	register int y1;
	// register: 22
	register int y2;
	// register: 19
	register int x3;
}


// address: 0x8016280C
void DrawAutoMapVertGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 4
	register int Ly;
}


// address: 0x801628A4
void DrawAutoMapHorzGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 4
	register int Ly;
}


// address: 0x8016293C
void DrawAutoMapSquare__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 17
	register int Ly;
	// register: 7
	register int Frac;
	// register: 21
	register int y0;
	// register: 20
	register int x1;
	// register: 19
	register int y1;
	// register: 17
	register int y2;
	// register: 18
	register int x3;
}


// address: 0x80162A70
void DrawVertArch__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 16
	register int Ly;
	// register: 2
	register int Frac;
	// register: 22
	register int x0;
	// register: 23
	register int y0;
	// register: 19
	register int x1;
	// register: 18
	register int y1;
	// register: 21
	register int x2;
	// register: 20
	register int y2;
	// register: 17
	register int x3;
	// register: 16
	register int y3;
}


// address: 0x80162BA4
void DrawHorzArch__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 16
	register int Ly;
	// register: 2
	register int Frac;
	// register: 22
	register int x0;
	// register: 23
	register int y0;
	// register: 19
	register int x1;
	// register: 18
	register int y1;
	// register: 21
	register int x2;
	// register: 20
	register int y2;
	// register: 17
	register int x3;
	// register: 16
	register int y3;
}


// address: 0x80162CD8
void DrawAutoMapStairs__Fii(int X, int Y) {
	// register: 3
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 19
	register int Ly;
	// register: 18
	register int Frac;
	// register: 20
	register int x1;
	// register: 21
	register int y1;
	// register: 19
	register int y2;
}


// address: 0x80162E50
void DrawAutomap__Fv() {
	// register: 6
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 5
	register int Lx;
	// register: 4
	register int Ly;
	// register: 3
	register int LineY;
	// register: 21
	register int MapX;
	// register: 20
	register int MapY;
	// address: 0xFFFFFF90
	auto int LLSx;
	// address: 0xFFFFFF98
	auto int LLSy;
	// address: 0xFFFFFFA0
	auto int LRSx;
	// address: 0xFFFFFFA8
	auto int LRSy;
	// address: 0xFFFFFFB0
	auto int LSx;
	// address: 0xFFFFFFB8
	auto int LSy;
	// address: 0xFFFFFFC0
	auto int RSx;
	// address: 0xFFFFFFC8
	auto int RSy;
	// register: 17
	register int LLen;
	// register: 19
	register int RLen;
	// register: 22
	register int LLLen;
	// register: 23
	register int LRLen;
	// register: 18
	register unsigned char AMLWallFlag;
	// register: 18
	register unsigned char AMRWallFlag;
	// address: 0xFFFFFF48
	auto unsigned short AmTile;
	// register: 16
	register unsigned char AmTileType;
	// address: 0xFFFFFFD0
	auto unsigned char *AmTileTypePtr;
	// register: 5
	register int P1x;
	// register: 6
	register int P1y;
	// register: 7
	register int P2x;
	// register: 8
	register int P2y;
	// address: 0xFFFFFF50
	// size: 0x40
	auto char levname[64];
	// register: 2
	register int len;
	{
		{
			{
				{
					// register: 3
					register int PAx;
					// register: 4
					register int PAy;
				}
			}
		}
	}
}



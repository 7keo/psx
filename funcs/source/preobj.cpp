// C:\diabpsx\SOURCE\PREOBJ.CPP

#include "types.h"

// address: 0x80155FD8
void AddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x801560C0
void AddSCambBook__Fi(int i) {
}


// address: 0x80156160
void AddChest__Fii(int i, int t) {
}


// address: 0x80156330
void AddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8015647C
void AddL3Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x80156510
void AddSarc__Fi(int i) {
	// register: 5
	register int x;
	// register: 3
	register int y;
}


// address: 0x801565D8
void AddFlameTrap__Fi(int i) {
}


// address: 0x80156634
void AddTrap__Fii(int i, int ot) {
	// register: 4
	register int mt;
}


// address: 0x80156728
void AddArmorStand__Fi(int i) {
}


// address: 0x801567B0
void AddObjLight__Fii(int i, int r) {
}


// address: 0x80156878
void AddBarrel__Fii(int i, int ot) {
}


// address: 0x80156920
void AddShrine__Fi(int i) {
	// register: 3
	register int st;
	// address: 0xFFFFFFD0
	// size: 0x1A
	auto unsigned char slist[26];
}


// address: 0x80156A68
void AddBookcase__Fi(int i) {
}


// address: 0x80156AC0
void AddBookstand__Fi(int i) {
}


// address: 0x80156B08
void AddBloodFtn__Fi(int i) {
}


// address: 0x80156B50
void AddPurifyingFountain__Fi(int i) {
	// register: 3
	register int x;
	// register: 5
	register int y;
}


// address: 0x80156C0C
void AddGoatShrine__Fi(int i) {
}


// address: 0x80156C54
void AddCauldron__Fi(int i) {
}


// address: 0x80156C9C
void AddMurkyFountain__Fi(int i) {
	// register: 3
	register int x;
	// register: 5
	register int y;
}


// address: 0x80156D58
void AddTearFountain__Fi(int i) {
}


// address: 0x80156DA0
void AddDecap__Fi(int i) {
}


// address: 0x80156E14
void AddVilebook__Fi(int i) {
}


// address: 0x80156E64
void AddMagicCircle__Fi(int i) {
}


// address: 0x80156ED8
void AddBrnCross__Fi(int i) {
}


// address: 0x80156F20
void AddPedistal__Fi(int i) {
}


// address: 0x80156FC8
void AddStoryBook__Fi(int i) {
	// register: 3
	register int bookframe;
}


// address: 0x80157148
void AddWeaponRack__Fi(int i) {
}


// address: 0x801571D0
void AddTorturedBody__Fi(int i) {
}


// address: 0x80157248
void AddFlameLvr__Fi(int i) {
}


// address: 0x80157288
void GetRndObjLoc__FiRiT1(int randarea, int *xx, int *yy) {
	// register: 17
	register int i;
	// register: 16
	register int j;
	// register: 3
	register unsigned char failed;
	{
		{
			// register: 19
			register int tries;
		}
	}
}


// address: 0x8015738C
void AddMushPatch__Fv() {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
	{
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x80157480
void AddSlainHero__Fv() {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x801574C0
unsigned char RndLocOk__Fii(int xp, int yp) {
}


// address: 0x801575D8
unsigned char TrapLocOk__Fii(int xp, int yp) {
}


// address: 0x8015762C
void InitRndLocObj__Fiii(int min, int max, int objtype) {
	// register: 20
	register int xp;
	// register: 21
	register int yp;
	// register: 23
	register int numobjs;
	{
		// register: 22
		register int i;
	}
}


// address: 0x801577AC
void InitRndLocBigObj__Fiii(int min, int max, int objtype) {
	// register: 18
	register int xp;
	// register: 21
	register int yp;
	// register: 23
	register int numobjs;
	{
		// register: 22
		register int i;
	}
}


// address: 0x8015796C
void InitRndLocObj5x5__Fiii(int min, int max, int objtype) {
	// register: 20
	register int xp;
	// register: 18
	register int yp;
	// register: 16
	register int xx;
	// register: 17
	register int yy;
	// register: 21
	register int cnt;
	// register: 19
	register unsigned char done;
	// register: 23
	register int numobjs;
	{
		// register: 22
		register int i;
	}
}


// address: 0x80157A88
void SetMapObjects__FPUcii(unsigned char *pMap, int startx, int starty) {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 19
	register int rw;
	// register: 20
	register int rh;
	// register: 17
	register unsigned char *lm;
	// register: 7
	register unsigned char *h;
	// register: 2
	register long mapoff;
	// register: 3
	register int ot;
	// address: 0xFFFFFF60
	// size: 0x38
	auto unsigned char fileload[56];
	// address: 0xFFFFFF98
	// size: 0x20
	auto char filestr[32];
}


// address: 0x80157D28
void ClrAllObjects__Fv() {
	// register: 4
	register int i;
}


// address: 0x80157E18
void AddTortures__Fv() {
	// register: 19
	register int yp;
	// register: 18
	register int xp;
}


// address: 0x80157F98
void AddCandles__Fv() {
	// register: 16
	register int xp;
	// register: 17
	register int yp;
}


// address: 0x80158020
void AddBookLever__Fiiiiiiiii(int lx1, int ly1, int lx2, int ly2, int x1, int y1, int x2, int y2, int msg) {
	// register: 20
	register int xp;
	// register: 19
	register int yp;
	// register: 16
	register int xx;
	// register: 17
	register int yy;
	// register: 21
	register int cnt;
	// register: 18
	register unsigned char done;
	// register: 16
	register int i;
}


// address: 0x80158214
void InitRndBarrels__Fv() {
	// register: 19
	register int xp;
	// register: 18
	register int yp;
	// register: 4
	register int o;
	// register: 20
	register int c;
	// register: 17
	register int t;
	// register: 30
	register int numobjs;
	{
		// register: 21
		register int i;
		{
			// register: 16
			register unsigned char found;
		}
	}
}


// address: 0x801583A0
void AddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x801584AC
void AddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x801585A8
void AddL3Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 17
	register int pn;
}


// address: 0x80158688
unsigned char WallTrapLocOk__Fii(int xp, int yp) {
}


// address: 0x801586E0
unsigned char TorchLocOK__Fii(int xp, int yp) {
}


// address: 0x80158710
void AddL2Torches__Fv() {
	// register: 16
	register int i;
	// register: 17
	register int j;
	// register: 18
	register int pn;
}


// address: 0x801588AC
void AddObjTraps__Fv() {
	// register: 18
	register int i;
	// register: 19
	register int j;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 21
	register int rndv;
	// register: 20
	register char oi;
}


// address: 0x80158B34
void AddChestTraps__Fv() {
	// register: 18
	register int i;
	// register: 19
	register int j;
}


// address: 0x80158C70
void LoadMapObjects__FPUciiiiiii(unsigned char *pMap, int startx, int starty, int x1, int y1, int w, int h, int leveridx) {
	// register: 17
	register int i;
	// register: 20
	register int j;
	// register: 21
	register int rw;
	// register: 22
	register int rh;
	// register: 16
	register int ox;
	// register: 19
	register int oy;
	// register: 18
	register unsigned char *lm;
	// register: 2
	register long mapoff;
}


// address: 0x80158DDC
void AddDiabObjs__Fv() {
	// register: 17
	register unsigned char *lpSetPiece;
	{
		{
			{
			}
		}
	}
}


// address: 0x80158F30
void AddStoryBooks__Fv() {
	// register: 19
	register int xp;
	// register: 20
	register int yp;
	// register: 16
	register int xx;
	// register: 17
	register int yy;
	// register: 21
	register int cnt;
	// register: 18
	register unsigned char done;
}


// address: 0x80159078
void AddHookedBodies__Fi(int freq) {
	// register: 23
	register int i;
	// address: 0xFFFFFFC8
	auto int j;
	// register: 19
	register int ii;
	// register: 17
	register int jj;
}


// address: 0x8015926C
void AddL4Goodies__Fv() {
}


// address: 0x8015931C
void AddLazStand__Fv() {
	// register: 19
	register int xp;
	// register: 20
	register int yp;
	// register: 16
	register int xx;
	// register: 17
	register int yy;
	// register: 21
	register int cnt;
	// register: 18
	register unsigned char done;
}


// address: 0x801594A8
void saveplrpos__Fv() {
}


// address: 0x80159564
void restoreplrpos__Fv() {
}


// address: 0x801595D4
void InitObjects__Fv() {
	// register: 17
	register int textdef;
	// register: 16
	register unsigned char *setp;
	{
		{
			{
				{
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
			}
		}
	}
}


// address: 0x80159C74
void PreObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}



// C:\diabpsx\SOURCE\THEMES.CPP

#include "types.h"

// address: 0x8015BC0C
unsigned char TFit_Shrine__Fi(int i) {
	// register: 17
	register int xp;
	// register: 21
	register int yp;
	// address: 0xFFFFFFB0
	auto int found;
}


// address: 0x8015BEFC
unsigned char TFit_Obj5__Fi(int t) {
	// register: 19
	register int xp;
	// register: 20
	register int yp;
	// register: 18
	register int i;
	// register: 22
	register int r;
	// register: 30
	register int rs;
	// register: 21
	register unsigned char found;
}


// address: 0x8015C0C0
unsigned char TFit_SkelRoom__Fi(int t) {
	// register: 16
	register int i;
}


// address: 0x8015C170
unsigned char TFit_GoatShrine__Fi(int t) {
	// register: 16
	register int i;
}


// address: 0x8015C208
unsigned char CheckThemeObj3__Fiiii(int xp, int yp, int t, int f) {
	{
		// register: 18
		register int i;
	}
}


// address: 0x8015C354
unsigned char TFit_Obj3__Fi(int t) {
	// register: 16
	register int xp;
	// register: 17
	register int yp;
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char objrnd[4];
}


// address: 0x8015C414
unsigned char CheckThemeReqs__Fi(int t) {
	// register: 5
	register unsigned char rv;
}


// address: 0x8015C4E0
unsigned char SpecialThemeFit__Fii(int i, int t) {
	// register: 3
	register unsigned char rv;
}


// address: 0x8015C6BC
unsigned char CheckThemeRoom__Fi(int tv) {
	// register: 16
	register int i;
	// register: 17
	register int j;
	// register: 4
	register int tarea;
}


// address: 0x8015C980
void InitThemes__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int t;
}


// address: 0x8015CCCC
void HoldThemeRooms__Fv() {
	// register: 6
	register int i;
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x8015CDB0
void PlaceThemeMonsts__Fii(int t, int f) {
	// register: 17
	register int xp;
	// register: 18
	register int yp;
	// register: 19
	register int mtype;
	// address: 0xFFFFFE18
	// size: 0x1BC
	auto int scattertypes[111];
	// register: 4
	register int numscattypes;
	// register: 3
	register int i;
}


// address: 0x8015CF34
void Theme_Barrel__Fi(int t) {
	// register: 16
	register int xp;
	// register: 17
	register int yp;
	// register: 4
	register int r;
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char barrnd[4];
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015D090
void Theme_Shrine__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015D178
void Theme_MonstPit__Fi(int t) {
	// register: 19
	register int r;
	// register: 16
	register int ixp;
	// register: 17
	register int iyp;
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015D2BC
void Theme_SkelRoom__Fi(int t) {
	// register: 16
	register int xp;
	// register: 18
	register int yp;
	// address: 0xFFFFFFE8
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015D5F8
void Theme_Treasure__Fi(int t) {
	// register: 16
	register int xp;
	// register: 18
	register int yp;
	// register: 4
	register int i;
	// address: 0xFFFFFFD0
	// size: 0x4
	auto char treasrnd[4];
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char monstrnd[4];
	{
		{
			{
				{
					{
						{
							// register: 17
							register int rv;
						}
					}
				}
			}
		}
	}
}


// address: 0x8015D83C
void Theme_Library__Fi(int t) {
	// register: 17
	register int xp;
	// register: 19
	register int yp;
	// register: 2
	register int oi;
	// address: 0xFFFFFFD0
	// size: 0x4
	auto char librnd[4];
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char monstrnd[4];
	{
		{
			{
				{
					{
						{
							// register: 16
							register int lnumobjects;
						}
					}
				}
			}
		}
	}
}


// address: 0x8015DAC0
void Theme_Torture__Fi(int t) {
	// register: 17
	register int xp;
	// register: 18
	register int yp;
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char tortrnd[4];
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015DC18
void Theme_BloodFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015DC8C
void Theme_Decap__Fi(int t) {
	// register: 17
	register int xp;
	// register: 18
	register int yp;
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char decaprnd[4];
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015DDE4
void Theme_PurifyingFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015DE58
void Theme_ArmorStand__Fi(int t) {
	// register: 17
	register int xp;
	// register: 18
	register int yp;
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char armorrnd[4];
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015DFD4
void Theme_GoatShrine__Fi(int t) {
	// register: 16
	register int xx;
	// register: 17
	register int yy;
}


// address: 0x8015E108
void Theme_Cauldron__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015E17C
void Theme_MurkyFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015E1F0
void Theme_TearFountain__Fi(int t) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015E264
void Theme_BrnCross__Fi(int t) {
	// register: 17
	register int xp;
	// register: 18
	register int yp;
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char monstrnd[4];
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char bcrossrnd[4];
}


// address: 0x8015E3C0
void Theme_WeaponRack__Fi(int t) {
	// register: 17
	register int xp;
	// register: 18
	register int yp;
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char weaponrnd[4];
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char monstrnd[4];
}


// address: 0x8015E53C
void UpdateL4Trans__Fv() {
	// register: 4
	register int i;
	// register: 5
	register int j;
}


// address: 0x8015E598
void CreateThemeRooms__Fv() {
	// register: 16
	register int i;
}



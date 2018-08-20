// C:\diabpsx\PSXSRC\GPANEL.CPP

#include "types.h"

// address: 0x800975CC
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x80097610
// size: 0x1C
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x80097674
void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 18
	register int HealthHeight;
	// register: 20
	register int ManaHeight;
	// address: 0xFFFFFFC8
	auto int HealthAnim;
	// address: 0xFFFFFFD0
	auto int ManaAnim;
	// register: 22
	register int BarY;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 21
	register int X;
	// register: 19
	register int Y;
	// register: 16
	register int xof;
}


// address: 0x80097AE8
unsigned char SpdTrimCol__Fs(short col) {
}


// address: 0x80097B20
void DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 18
	register int X;
	// register: 20
	register int Y;
	// register: 19
	register int Loop;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 21
	register int Bx;
	// register: 22
	register int By;
	{
		{
			// register: 16
			// size: 0x24
			register struct POLY_G4 *G4;
		}
	}
}


// address: 0x8009824C
void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 21
	register int X;
	// register: 20
	register int Y;
	// register: 2
	register int Anim;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	register int SpellNo;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto char YT[16];
}


// address: 0x800983E8
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x80098438
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 6
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	register unsigned char NewR;
	// register: 8
	register unsigned char NewG;
	// register: 4
	register unsigned char NewB;
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80098704
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x80098830
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}



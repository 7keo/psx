// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x8007EE64
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x8007EE6C
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x8007EE74
void ResetPal__Fv() {
}


// address: 0x8007EE7C
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x8007EEAC
bool GetFadeState__Fv() {
}


// address: 0x8007EEB8
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 6
	register unsigned char bright1;
	// register: 3
	register unsigned char bright2;
}


// address: 0x8007EFD4
void SmearScreen__Fv() {
}


// address: 0x8007EFDC
void DrawFadedScreen__Fv() {
	// register: 16
	// size: 0x70
	register struct TextDat *ThisDat;
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *GT4a;
}


// address: 0x8007F064
void BlackPalette__Fv() {
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007F160
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x8007F1F0
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x8007F248
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x8007F2F8
bool PaletteFadeOut__Fi(int fr) {
}



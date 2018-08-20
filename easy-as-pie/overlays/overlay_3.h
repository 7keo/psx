#include "types.h"

// === [ Overlay ID 3 ] ===

// address: 0x800A0F6C
// size: 0xC
extern char StrDate[12];

// address: 0x800A0F78
// size: 0x9
extern char StrTime[9];

// address: 0x800A0F84
// size: 0x1D8
extern char *Words[118];

// address: 0x800A115C
// size: 0x60
extern struct MONTH_DAYS MonDays[12];

// address: 0x800A0AE0
void VID_OpenModule__Fv() {
}


// address: 0x800A0BA0
void InitScreens__Fv() {
}


// address: 0x800A0C90
void MEM_SetupMem__Fv() {
}


// address: 0x800A0CBC
void SetupWorkRam__Fv() {
}


// address: 0x800A0D4C
void SYSI_Init__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x800A0E58
void GM_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A0E7C
void PA_Open__Fv() {
}


// address: 0x800A0EB4
void PAD_Open__Fv() {
}


// address: 0x800A0EF8
void OVR_Open__Fv() {
}


// address: 0x800A0F18
void SCR_Open__Fv() {
}


// address: 0x800A0F48
void DEC_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800A11BC
char *GetVersionString__FPc(char *VersionString2) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto char VersionString[40];
}


// address: 0x800A1290
char *GetWord__FPc(char *VStr) {
	// register: 18
	register bool Found;
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char MonStr[4];
	// register: 17
	register int DayCount;
	// register: 16
	register int Minutes;
	{
	}
}



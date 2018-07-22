#include "types.h"

// === [ Overlay ID 4 ] ===

// address: 0x800B07C8
// size: 0xC
extern char StrDate[12];

// address: 0x800B07D4
// size: 0x9
extern char StrTime[9];

// address: 0x800B07E0
// size: 0x1D8
extern char *Words[118];

// address: 0x800B09B8
// size: 0x60
extern struct MONTH_DAYS MonDays[12];

// address: 0x800B0320
void VID_OpenModule__Fv() {
}


// address: 0x800B03E0
void InitScreens__Fv() {
}


// address: 0x800B04D0
void MEM_SetupMem__Fv() {
}


// address: 0x800B04FC
void SetupWorkRam__Fv() {
}


// address: 0x800B059C
void SYSI_Init__Fv() {
	struct RECT clrRect;
}


// address: 0x800B06E4
void PA_Open__Fv() {
}


// address: 0x800B071C
void PAD_Open__Fv() {
}


// address: 0x800B0760
void GM_Open__Fv() {
	{
		int f;
	}
}


// address: 0x800B0784
void OVR_Open__Fv() {
}


// address: 0x800B07A4
void DEC_Open__Fv() {
	{
		int f;
	}
}


// address: 0x800B0A18
char *GetVersionString__FPc(char *VersionString2) {
	char VersionString[40];
}


// address: 0x800B0AEC
char *GetWord__FPc(char *VStr) {
	bool Found;
	char MonStr[4];
	int DayCount;
	int Minutes;
	{
	}
}



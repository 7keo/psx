// C:\diabpsx\PSXSRC\PAUSE.CPP

#include "types.h"

// address: 0x800B06E4
void PA_Open__Fv() {
}


// address: 0x800884C8
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80088518
int GetPausePad__Fv() {
	// register: 18
	register bool Done;
	// register: 19
	register int PadVal;
	{
		{
			{
				{
					// register: 16
					register int f;
					{
					}
				}
			}
		}
	}
}


// address: 0x80088640
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x8008866C
void DoPause__14CPauseMessagesi(struct CPauseMessages *this, int nPadNum) {
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8008887C
bool DoPausedMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 18
	register bool RetVal;
	// register: 17
	register bool Done;
	{
	}
}


// address: 0x800889B4
int DoQuitMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 20
	register int RetVal;
	// register: 19
	register bool Done;
	// register: 17
	register int Menu;
	{
		// register: 16
		register unsigned short PadVal;
	}
}


// address: 0x80088AD4
bool AreYouSureMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 20
	register bool RetVal;
	// register: 19
	register bool Done;
	// register: 17
	register int Menu;
	{
		// register: 16
		register unsigned short PadVal;
	}
}


// address: 0x80088BF4
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80088C04
bool PA_GetPauseOk__Fv() {
}


// address: 0x80088C10
void MY_PausePrint__17CTempPauseMessageiiiP4RECT(struct CTempPauseMessage *this, int s, int Txt, int Menu, struct RECT *PRect) {
	// register: 23
	register int y;
	// register: 30
	register int otpos;
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80088E50
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80088E58
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT PRect;
	// register: 16
	register int otpos;
	// register: 22
	register int oldDotpos;
	// register: 21
	register int oldTotpos;
}


// address: 0x80088FD0
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80088FD8
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80088FE0
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT PRect;
	// register: 16
	register int otpos;
	// register: 22
	register int oldDotpos;
	// register: 21
	register int oldTotpos;
}


// address: 0x80089158
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80089160
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80089168
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT PRect;
	// register: 16
	register int otpos;
	// register: 19
	register int oldDotpos;
	// register: 16
	register int oldTotpos;
}


// address: 0x800892B8
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800892C0
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x800892E8
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80089310
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x80089338
// size: 0xC
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x8008937C
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x800893B0
// size: 0x8
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}



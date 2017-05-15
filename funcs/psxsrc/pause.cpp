// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x800884C8
void PauseTask__FP4TASK(struct TASK *T) {
	struct CTempPauseMessage Cpm;
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x80088518
int GetPausePad__Fv() {
	unknown Done;
	int PadVal;
	int f;
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x80088640
unknown TryPadForPause__Fi(int PadNum) {
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x8008866C
void DoPause__14CPauseMessagesi(struct CPauseMessages *this, int nPadNum) {
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x8008887C
unknown DoPausedMessage__14CPauseMessages(struct CPauseMessages *this) {
	unknown RetVal;
	unknown Done;
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x800889B4
int DoQuitMessage__14CPauseMessages(struct CPauseMessages *this) {
	int RetVal;
	unknown Done;
	int Menu;
	unsigned short PadVal;
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x80088AD4
unknown AreYouSureMessage__14CPauseMessages(struct CPauseMessages *this) {
	unknown RetVal;
	unknown Done;
	int Menu;
	unsigned short PadVal;
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x80088BF4
unknown PA_SetPauseOk__Fb(unknown NewPause) {
	unknown Ret;
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x80088C04
unknown PA_GetPauseOk__Fv() {
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x80088C10
void MY_PausePrint__17CTempPauseMessageiiiP4RECT(struct CTempPauseMessage *this, int s, int Txt, int Menu, struct RECT *PRect) {
	struct RECT *PRect;
	int y;
	int otpos;
	int len;
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x80088E50
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x80088E58
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	struct RECT PRect;
	int otpos;
	int oldDotpos;
	int oldTotpos;
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x80088FD0
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x80088FD8
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x80088FE0
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	struct RECT PRect;
	int otpos;
	int oldDotpos;
	int oldTotpos;
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x80089158
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x80089160
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x80089168
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
	struct RECT PRect;
	int otpos;
	int oldDotpos;
	int oldTotpos;
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x800892B8
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x800892C0
void _._17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x800892E8
void _GLOBAL_.D.DoPause__14CPauseMessagesi() {
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x80089310
void _GLOBAL_.I.DoPause__14CPauseMessagesi() {
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x80089338
struct CTempPauseMessage* __17CTempPauseMessage(struct CTempPauseMessage *this) {
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x8008937C
void _._14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x800893B0
struct CPauseMessages* __14CPauseMessages(struct CPauseMessages *this) {
}

// Path: C:\diabpsx\PSXSRC\PAUSE.CPP
// Addr: 0x800B06E4
void PA_Open__Fv() {
}


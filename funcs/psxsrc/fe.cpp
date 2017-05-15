// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x80139C24
void FeInitBuffer__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x80139C50
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
	struct FeTable *MenuPtr;
	struct CFont *Font;
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x80139CD4
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	int Loop;
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x80139D50
void FeAddNameTable__FPUci(unsigned char *Table, int Count) {
	int YLoop;
	int XLoop;
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x80139E78
void FeDrawBuffer__Fv() {
	struct Dialog FeBack;
	struct RECT FeRect;
	struct RECT ARect;
	int X;
	int Y;
	enum TXT_JUST Just;
	struct TextDat *PanelGfx;
	int SelX;
	int SelY;
	char Text[2];
	int Loop;
	struct POLY_FT4 *Ft4;
	int Loop;
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013A4A4
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	struct FeTable *LastMenu;
	void (*FuncPtr)();
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013A524
void FePrevMenu__Fv() {
	void (*FuncPtr)();
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013A66C
void FeSelUp__Fi(int No) {
	int OldSel;
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013A754
void FeSelDown__Fi(int No) {
	int OldSel;
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013A83C
int FeGetCursor__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013A850
void FeSelect__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013A8A0
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013AA68
void InitDummyMenu__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013AA70
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013ABA4
void FeInitMainMenu__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013AC20
void FeInitNewGameMenu__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013ACB0
void FeNewGameMenuCtrl__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013AE64
void FeInitPlayer1ClassMenu__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013AEE8
void FeInitPlayer2ClassMenu__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013AF6C
void FePlayerClassMenuCtrl__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013AFB4
void FeDrawChrClass__Fv() {
	struct Dialog FeBack;
	struct RECT FeRect;
	char TempStr[4];
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013B43C
void FeInitNewP1NameMenu__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013B498
void FeInitNewP2NameMenu__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013B4EC
void FeNewNameMenuCtrl__Fv() {
	char asd[2];
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013BAB4
void FeCopyPlayerInfoForReturn__Fv() {
	int Loop;
	int i;
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013BBC8
void FeEnterGame__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013BBF0
void FeInitLoadMemcardSelect__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013BC70
void FeInitLoadChar1Menu__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013BCD8
void FeInitLoadChar2Menu__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013BD48
void FeInitDifficultyMenu__Fv() {
	int MaxLevel;
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013BDEC
void FeDifficultyMenuCtrl__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013BED0
void FeInitBackgroundMenu__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013BF1C
void FeInitBook1Menu__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013BF6C
void FeInitBook2Menu__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013BFBC
void FeBackBookMenuCtrl__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013C200
void PlayDemo__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013C214
void FadeFEOut__Fv() {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013C2D8
void DrawBackTSK__FP4TASK(struct TASK *T) {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013C460
void FeInitMainStuff__FP4TASK(struct TASK *T2) {
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013C50C
void FrontEndTask__FP4TASK(struct TASK *T) {
	int len;
	int Fefadeval;
	struct TASK *T2;
}

// Path: C:\diabpsx\PSXSRC\FE.CPP
// Addr: 0x8013C9B8
void DrawFeTwinkle__Fii(int TwinkX, int TwinkY) {
}


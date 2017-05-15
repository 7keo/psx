// Path: C:\diabpsx\PSXSRC\SCRATCH.CPP
// Addr: 0x8009AC78
unsigned short SCR_GetBlackClut__Fv() {
}

// Path: C:\diabpsx\PSXSRC\SCRATCH.CPP
// Addr: 0x8009AC84
void SCR_Open__Fv() {
}

// Path: C:\diabpsx\PSXSRC\SCRATCH.CPP
// Addr: 0x8009ACBC
void SCR_DumpClut__Fv() {
	struct RECT R;
	unsigned short ColVal;
	unsigned short BlankPal[64];
	int f;
}

// Path: C:\diabpsx\PSXSRC\SCRATCH.CPP
// Addr: 0x8009AD30
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}

// Path: C:\diabpsx\PSXSRC\SCRATCH.CPP
// Addr: 0x8009AD64
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	int f;
}

// Path: C:\diabpsx\PSXSRC\SCRATCH.CPP
// Addr: 0x8009ADF4
struct PalEntry* FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	struct PalEntry *RetPal;
}

// Path: C:\diabpsx\PSXSRC\SCRATCH.CPP
// Addr: 0x8009AED0
struct PalEntry* NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	struct PalEntry *RetPal;
}

// Path: C:\diabpsx\PSXSRC\SCRATCH.CPP
// Addr: 0x8009AF50
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	struct RECT SourceRect;
}

// Path: C:\diabpsx\PSXSRC\SCRATCH.CPP
// Addr: 0x8009AFF0
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	struct PalEntry *RetPal;
}

// Path: C:\diabpsx\PSXSRC\SCRATCH.CPP
// Addr: 0x8009B038
void UpdatePals__13PalCollection(struct PalCollection *this) {
	struct PalEntry *ThisPal;
	struct PalEntry *NextPal;
}

// Path: C:\diabpsx\PSXSRC\SCRATCH.CPP
// Addr: 0x8009B0AC
void SCR_Handler__Fv() {
}

// Path: C:\diabpsx\PSXSRC\SCRATCH.CPP
// Addr: 0x8009B22C
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}

// Path: C:\diabpsx\PSXSRC\SCRATCH.CPP
// Addr: 0x8009B240
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}

// Path: C:\diabpsx\PSXSRC\SCRATCH.CPP
// Addr: 0x8009B26C
unknown SetJustUsed__8PalEntryb(struct PalEntry *this, unknown NewVal) {
}

// Path: C:\diabpsx\PSXSRC\SCRATCH.CPP
// Addr: 0x8009B274
void Init__8PalEntry(struct PalEntry *this) {
}

// Path: C:\diabpsx\PSXSRC\SCRATCH.CPP
// Addr: 0x8009B27C
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}

// Path: C:\diabpsx\PSXSRC\SCRATCH.CPP
// Addr: 0x8009B288
unknown IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


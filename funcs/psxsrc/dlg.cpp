// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x80159590
int GetFileNumber__FiPc(int side, char *file_name) {
	int i;
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x80159650
int DoSaveOptions__Fv() {
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x80159678
int DoSaveGame__Fv() {
	char temp_name[32];
	char *Classes[3];
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x801597F0
void DoLoadGame__Fv() {
	int result;
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x80159894
int DoFrontEndLoadCharacter__Fi(int slot) {
	int result;
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x801598EC
void McInitLoadCard1Menu__Fv() {
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x8015992C
void McInitLoadCard2Menu__Fv() {
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x8015996C
void ChooseCardLoad__Fv() {
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x80159A08
void McInitLoadGameMenu__Fv() {
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x80159A6C
void McMainKeyCtrl__Fv() {
	struct RECT um;
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x80159D08
void McCharCardMenuCtrl__Fv() {
	struct CPad *P;
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x80159F50
void McMainCharKeyCtrl__Fv() {
	int Spacing;
	int yoff;
	int SelX;
	int len;
	struct RECT um;
	struct CPad *P;
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x8015A3BC
void ShowAlertBox__Fv() {
	struct Dialog SBack;
	struct RECT um;
	int W;
	int H;
	int X;
	int Y;
	int otpos;
	int oldBot;
	int oldTot;
	int lines;
	int yprintpos;
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x8015A5C8
unknown GetLoadStatusMessage__FPc(char *file_name) {
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x8015A67C
unknown GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	int i;
	int blocks;
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x8015A79C
void ShowGameFiles__FPciiG4RECTi(char *filename, int saveflag, int Spacing, struct RECT ORect, int yoff) {
	int yoff;
	int i;
	int FileNo;
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x8015A90C
void ShowCharacterFiles__FiiG4RECTi(int cs, int Spacing, struct RECT ORect, int yoff) {
	int yoff;
	int sn;
	int j;
	int fileno;
	int r;
	int g;
	int b;
	char TempStr[64];
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x8015AAEC
void PackItem__FP12PkItemStructPC10ItemStruct(struct PkItemStruct *id, struct ItemStruct *is) {
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x8015AB98
void PackPlayer__FP14PkPlayerStructi(struct PkPlayerStruct *pPack, int pnum) {
	int i;
	struct PkItemStruct *pki;
	struct ItemStruct *pi;
	struct PlayerStruct *pPlayer;
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x8015ADAC
void UnPackItem__FPC12PkItemStructP10ItemStruct(struct PkItemStruct *is, struct ItemStruct *id) {
	char AC;
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x8015AEE0
void VerifyGoldSeeds__FP12PlayerStruct(struct PlayerStruct *pPlayer) {
	int i;
	int j;
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x8015AFB8
void UnPackPlayer__FPC14PkPlayerStructiUc(struct PkPlayerStruct *pPack, int pnum, unsigned char killok) {
	struct ItemStruct *pi;
	struct PkItemStruct *pki;
	struct PlayerStruct *pPlayer;
	int i;
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x8015B284
void ConstructSlotName__FPci(char *TempStr, int slot) {
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x8015B37C
int GetSpinnerWidth__Fi(int j) {
	char TempStr[64];
	int len;
}

// Path: C:\diabpsx\PSXSRC\DLG.CPP
// Addr: 0x8015B420
char* ReconstructSlotName__Fii(int side, int file) {
	int i;
}


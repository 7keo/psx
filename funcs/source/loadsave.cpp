// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015B958
char* GetOptStr__Fv() {
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015B968
char* GetDiabloStr__Fv() {
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015B978
char BLoad__Fv() {
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015B994
int ILoad__Fv() {
	int rv;
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015B9E8
unsigned char OLoad__Fv() {
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015BA0C
void LoadQuest__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015BAD4
void BSave__Fc(char v) {
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015BAEC
void ISave__Fi(int v) {
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015BB4C
void OSave__FUc(unsigned char v) {
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015BB90
void SaveQuest__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015BC5C
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	int i;
	int result;
	int tries;
	unsigned char *SaveBuff;
	int SaveSize;
	int savesize;
	int delete_file_number;
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015C1BC
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	int result;
	unsigned char *LoadBuff;
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015C2E8
void PSX_CH_LoadGame__Fi(int slot) {
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015C388
int PSX_CH_LoadBlock__Fii(int card_number, int file) {
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015C3B0
int PSX_CH_SaveGame__Fii(int card_number, int slot) {
	int result;
	int tries;
	char TempStr[64];
	int delete_file_number;
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015C51C
void RestorePads__Fv() {
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015C5DC
void StorePads__Fv() {
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015C698
void GetIcon__Fv() {
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015C6D4
int PSX_OPT_LoadGame__Fiib(int card_number, int file, unknown KillHandler) {
	int result;
	unsigned char *LoadBuff;
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015C730
int PSX_OPT_SaveGame__FiPc(int card_number, char *filename) {
	int result;
	int tries;
	char TempStr[64];
	unsigned char *SaveBuff;
	int delete_file_number;
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015C850
void LoadOptions__Fv() {
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015C928
void SaveOptions__Fv() {
}

// Path: C:\diabpsx\SOURCE\LOADSAVE.CPP
// Addr: 0x8015C9CC
int RestoreLoadedData__Fb(unknown firstflag) {
	unsigned char *LoadBuff;
	int DataSize;
	int i;
}


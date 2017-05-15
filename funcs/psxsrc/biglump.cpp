// Path: C:\diabpsx\PSXSRC\BIGLUMP.CPP
// Addr: 0x8008725C
void BL_InitEAC__Fv() {
	long gunk1;
	long gunk2;
	void *ptr;
}

// Path: C:\diabpsx\PSXSRC\BIGLUMP.CPP
// Addr: 0x80087354
long BL_ReadFile__FPcUl(char *Name, unsigned long RamId) {
	int MemSize;
	char FileToLoad[50];
	long MyHnd;
	unsigned char *LoadAddr;
}

// Path: C:\diabpsx\PSXSRC\BIGLUMP.CPP
// Addr: 0x8008746C
long BL_AsyncReadFile__FPcUl(char *Name, unsigned long RamId) {
	int MemSize;
	char FileToLoad[50];
	long MyHnd;
	unsigned char *LoadAddr;
	int ah;
}

// Path: C:\diabpsx\PSXSRC\BIGLUMP.CPP
// Addr: 0x800875CC
void BL_LoadDirectory__Fv() {
	long BL_DirMHandle;
	char *AsyncAddr;
	unsigned char *BL_DirPtr;
	unsigned long DirId;
	unsigned long DirId2;
}

// Path: C:\diabpsx\PSXSRC\BIGLUMP.CPP
// Addr: 0x800876F4
void BL_LoadStreamDir__Fv() {
	long BL_DirMHandle;
	unsigned char *BL_DirPtr;
	unsigned long DirId;
	unsigned long DirId2;
	enum LANG_TYPE Lang;
}

// Path: C:\diabpsx\PSXSRC\BIGLUMP.CPP
// Addr: 0x80087984
struct STRHDR* BL_MakeFilePosTab__FPUcUl(unsigned char *BL_DirPtr, unsigned long NoStreamFiles) {
	struct STREAM *DirPtr;
	struct STRHDR *TFileTab;
	int j;
}

// Path: C:\diabpsx\PSXSRC\BIGLUMP.CPP
// Addr: 0x80087A6C
struct STRHDR* BL_FindStreamFile__FPcc(char *Name, char LumpID) {
	struct STRHDR *ptr;
	unsigned long NoFiles;
	int pos;
	int c;
	char fname[14];
	int size;
	int i;
	int i;
	int i;
	int s;
	int i;
	int i;
}

// Path: C:\diabpsx\PSXSRC\BIGLUMP.CPP
// Addr: 0x80087BF8
unknown BL_FileExists__FPcc(char *Name, char LumpID) {
}

// Path: C:\diabpsx\PSXSRC\BIGLUMP.CPP
// Addr: 0x80087C34
int BL_FileLength__FPcc(char *Name, char LumpID) {
	struct STRHDR *ptr;
}

// Path: C:\diabpsx\PSXSRC\BIGLUMP.CPP
// Addr: 0x80087CB4
unknown BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	struct STRHDR *sh;
	int ah;
}

// Path: C:\diabpsx\PSXSRC\BIGLUMP.CPP
// Addr: 0x80087E1C
unknown BL_AsyncLoadDone__Fv() {
}

// Path: C:\diabpsx\PSXSRC\BIGLUMP.CPP
// Addr: 0x80087E28
void BL_WaitForAsyncFinish__Fv() {
}

// Path: C:\diabpsx\PSXSRC\BIGLUMP.CPP
// Addr: 0x80087E6C
void BL_AsyncLoadCallBack__Fi(int ah) {
	unsigned long OldGp;
}

// Path: C:\diabpsx\PSXSRC\BIGLUMP.CPP
// Addr: 0x80087ED0
long BL_LoadFileAsync__FPcc(char *Name, char LumpID) {
	struct STRHDR *sh;
	int Size;
	long MyHnd;
	unsigned char *LoadAddr;
}

// Path: C:\diabpsx\PSXSRC\BIGLUMP.CPP
// Addr: 0x80088084
unknown BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	struct STRHDR *sh;
}

// Path: C:\diabpsx\PSXSRC\BIGLUMP.CPP
// Addr: 0x800881A0
struct STRHDR* BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	struct STRHDR *sh;
}

// Path: C:\diabpsx\PSXSRC\BIGLUMP.CPP
// Addr: 0x800881CC
unknown BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


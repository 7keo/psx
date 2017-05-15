void BL_InitEAC__Fv() {
	long gunk1;
	long gunk2;
	void* ptr;
}

long BL_ReadFile__FPcUl(char* Name, unsigned long RamId) {
	int MemSize;
	char FileToLoad[50];
	long MyHnd;
	unsigned char* LoadAddr;
}

long BL_AsyncReadFile__FPcUl(char* Name, unsigned long RamId) {
	int MemSize;
	char FileToLoad[50];
	long MyHnd;
	unsigned char* LoadAddr;
	int ah;
}

void BL_LoadDirectory__Fv() {
	long BL_DirMHandle;
	char* AsyncAddr;
	unsigned char* BL_DirPtr;
	unsigned long DirId;
	unsigned long DirId2;
}

void BL_LoadStreamDir__Fv() {
	long BL_DirMHandle;
	unsigned char* BL_DirPtr;
	unsigned long DirId;
	unsigned long DirId2;
	LANG_TYPE Lang;
}

STRHDR BL_MakeFilePosTab__FPUcUl(unsigned char* BL_DirPtr, unsigned long NoStreamFiles) {
	STREAM DirPtr;
	STRHDR TFileTab;
	int j;
}

STRHDR BL_FindStreamFile__FPcc(char* Name, char LumpID) {
	STRHDR ptr;
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

unknown BL_FileExists__FPcc(char* Name, char LumpID) {
}

int BL_FileLength__FPcc(char* Name, char LumpID) {
	STRHDR ptr;
}

unknown BL_LoadFileAtAddr__FPcPUcc(char* Name, unsigned char* Dest, char LumpID) {
	STRHDR sh;
	int ah;
}

unknown BL_AsyncLoadDone__Fv() {
}

void BL_WaitForAsyncFinish__Fv() {
}

void BL_AsyncLoadCallBack__Fi(int ah) {
	unsigned long OldGp;
}

long BL_LoadFileAsync__FPcc(char* Name, char LumpID) {
	STRHDR sh;
	int Size;
	long MyHnd;
	unsigned char* LoadAddr;
}

unknown BL_AsyncLoadFileAtAddr__FPcPUcc(char* Name, unsigned char* Dest, char LumpID) {
	STRHDR sh;
}

STRHDR BL_OpenStreamFile__FPcc(char* Name, char LumpID) {
	STRHDR sh;
}

unknown BL_CloseStreamFile__FP6STRHDR(STRHDR StreamHDR) {
}

void BL_InitEAC__Fv() {
	long gunk1;
	long gunk2;
	void* ptr;
}

long BL_ReadFile__FPcUl(char* Name, unsigned long RamId) {
	int MemSize;
	char FileToLoad[50];
	long MyHnd;
	unsigned char* LoadAddr;
}

long BL_AsyncReadFile__FPcUl(char* Name, unsigned long RamId) {
	int MemSize;
	char FileToLoad[50];
	long MyHnd;
	unsigned char* LoadAddr;
	int ah;
}

void BL_LoadDirectory__Fv() {
	long BL_DirMHandle;
	char* AsyncAddr;
	unsigned char* BL_DirPtr;
	unsigned long DirId;
	unsigned long DirId2;
}

void BL_LoadStreamDir__Fv() {
	long BL_DirMHandle;
	unsigned char* BL_DirPtr;
	unsigned long DirId;
	unsigned long DirId2;
	LANG_TYPE Lang;
}

STRHDR BL_MakeFilePosTab__FPUcUl(unsigned char* BL_DirPtr, unsigned long NoStreamFiles) {
	STREAM DirPtr;
	STRHDR TFileTab;
	int j;
}

STRHDR BL_FindStreamFile__FPcc(char* Name, char LumpID) {
	STRHDR ptr;
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

unknown BL_FileExists__FPcc(char* Name, char LumpID) {
}

int BL_FileLength__FPcc(char* Name, char LumpID) {
	STRHDR ptr;
}

unknown BL_LoadFileAtAddr__FPcPUcc(char* Name, unsigned char* Dest, char LumpID) {
	STRHDR sh;
	int ah;
}

unknown BL_AsyncLoadDone__Fv() {
}

void BL_WaitForAsyncFinish__Fv() {
}

void BL_AsyncLoadCallBack__Fi(int ah) {
	unsigned long OldGp;
}

long BL_LoadFileAsync__FPcc(char* Name, char LumpID) {
	STRHDR sh;
	int Size;
	long MyHnd;
	unsigned char* LoadAddr;
}

unknown BL_AsyncLoadFileAtAddr__FPcPUcc(char* Name, unsigned char* Dest, char LumpID) {
	STRHDR sh;
}

STRHDR BL_OpenStreamFile__FPcc(char* Name, char LumpID) {
	STRHDR sh;
}

unknown BL_CloseStreamFile__FP6STRHDR(STRHDR StreamHDR) {
}


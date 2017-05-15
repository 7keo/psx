// Path: C:\diabpsx\PSXSRC\FILEIO.CPP
// Addr: 0x8008587C
struct FileIO* __6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}

// Path: C:\diabpsx\PSXSRC\FILEIO.CPP
// Addr: 0x800858CC
void _._6FileIO(struct FileIO *this, int __in_chrg) {
}

// Path: C:\diabpsx\PSXSRC\FILEIO.CPP
// Addr: 0x80085920
long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId) {
	int MemSize;
	long MyHnd;
	unsigned char *LoadAddr;
}

// Path: C:\diabpsx\PSXSRC\FILEIO.CPP
// Addr: 0x80085A90
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}

// Path: C:\diabpsx\PSXSRC\FILEIO.CPP
// Addr: 0x80085AF4
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}

// Path: C:\diabpsx\PSXSRC\FILEIO.CPP
// Addr: 0x80085B14
unknown StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, unknown (*Func)(), int Offset, int Size) {
	int Offset;
	int Size;
}

// Path: C:\diabpsx\PSXSRC\FILEIO.CPP
// Addr: 0x80085BF4
unknown ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}

// Path: C:\diabpsx\PSXSRC\FILEIO.CPP
// Addr: 0x80085CB8
void DumpOldPath__6FileIO(struct FileIO *this) {
}

// Path: C:\diabpsx\PSXSRC\FILEIO.CPP
// Addr: 0x80085D1C
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}

// Path: C:\diabpsx\PSXSRC\FILEIO.CPP
// Addr: 0x80085DF8
unknown FindFile__6FileIOPCcPc(struct FileIO *this, char *Name, char *Buffa) {
	unknown Success;
	char *Path;
}

// Path: C:\diabpsx\PSXSRC\FILEIO.CPP
// Addr: 0x80085F0C
char* CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	char *Ptr;
	int Len;
}

// Path: C:\diabpsx\PSXSRC\FILEIO.CPP
// Addr: 0x80085FB4
void LockSearchPath__6FileIO(struct FileIO *this) {
}

// Path: C:\diabpsx\PSXSRC\FILEIO.CPP
// Addr: 0x8008600C
void UnlockSearchPath__6FileIO(struct FileIO *this) {
}

// Path: C:\diabpsx\PSXSRC\FILEIO.CPP
// Addr: 0x80086064
unknown SearchPathExists__6FileIO(struct FileIO *this) {
}

// Path: C:\diabpsx\PSXSRC\FILEIO.CPP
// Addr: 0x80086078
unknown Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


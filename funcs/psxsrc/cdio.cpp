// Path: C:\diabpsx\PSXSRC\CDIO.CPP
// Addr: 0x80086C40
struct CdIO* __4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}

// Path: C:\diabpsx\PSXSRC\CDIO.CPP
// Addr: 0x80086C84
void _._4CdIO(struct CdIO *this, int __in_chrg) {
}

// Path: C:\diabpsx\PSXSRC\CDIO.CPP
// Addr: 0x80086CDC
unknown FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}

// Path: C:\diabpsx\PSXSRC\CDIO.CPP
// Addr: 0x80086D00
unknown LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}

// Path: C:\diabpsx\PSXSRC\CDIO.CPP
// Addr: 0x80086D9C
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}

// Path: C:\diabpsx\PSXSRC\CDIO.CPP
// Addr: 0x80086DC0
unknown LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	int FileHnd;
}

// Path: C:\diabpsx\PSXSRC\CDIO.CPP
// Addr: 0x80086E94
unknown CD_GetCdlFILE__FPCcP7CdlFILE(char *Name, struct CdlFILE *RetFile) {
	char SearchBuffer[256];
}

// Path: C:\diabpsx\PSXSRC\CDIO.CPP
// Addr: 0x80086EE4
unknown LoStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, unknown (*Func)(), int Offset, int Size) {
	int Offset;
	int Size;
	unsigned char *Dest;
	int OrigSize;
	unsigned long Pos;
	struct STRHDR *sh;
	int ah;
	unsigned char Count;
	int Lumpfile;
	int SizeToRead;
	unsigned char *ptr;
}

// Path: C:\diabpsx\PSXSRC\CDIO.CPP
// Addr: 0x8008710C
unknown LoAsyncStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, unknown (*Func)(), int Offset, int Size) {
	int Size;
	long hndText;
	unsigned char *Dest;
	int OrigSize;
	int SizeToRead;
}


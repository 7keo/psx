// Path: C:\diabpsx\PSXSRC\DATIO.CPP
// Addr: 0x80086744
struct DatIO* __5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}

// Path: C:\diabpsx\PSXSRC\DATIO.CPP
// Addr: 0x80086780
void _._5DatIO(struct DatIO *this, int __in_chrg) {
}

// Path: C:\diabpsx\PSXSRC\DATIO.CPP
// Addr: 0x800867D8
unknown FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	int FileHnd;
}

// Path: C:\diabpsx\PSXSRC\DATIO.CPP
// Addr: 0x80086818
unknown LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	int FileHnd;
}

// Path: C:\diabpsx\PSXSRC\DATIO.CPP
// Addr: 0x800868D8
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	int FileHnd;
	int Len;
}

// Path: C:\diabpsx\PSXSRC\DATIO.CPP
// Addr: 0x8008698C
unknown LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	int FileHnd;
}

// Path: C:\diabpsx\PSXSRC\DATIO.CPP
// Addr: 0x80086A34
unknown LoStreamFile__5DatIOPCciPFPUciib_bii(struct DatIO *this, char *Name, int Slice, unknown (*Func)(), int Offset, int Size) {
	int Size;
	int FileHnd;
	long hnd;
	unsigned char *Dest;
	int OrigSize;
	int SizeToRead;
}


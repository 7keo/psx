// Path: C:\diabpsx\PSXSRC\PCIO.CPP
// Addr: 0x800860B4
struct PCIO* __4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}

// Path: C:\diabpsx\PSXSRC\PCIO.CPP
// Addr: 0x8008611C
void _._4PCIO(struct PCIO *this, int __in_chrg) {
}

// Path: C:\diabpsx\PSXSRC\PCIO.CPP
// Addr: 0x80086174
unknown FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	int FileHnd;
}

// Path: C:\diabpsx\PSXSRC\PCIO.CPP
// Addr: 0x800861B8
unknown LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	int FileHnd;
}

// Path: C:\diabpsx\PSXSRC\PCIO.CPP
// Addr: 0x8008627C
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	int FileHnd;
	int Len;
}

// Path: C:\diabpsx\PSXSRC\PCIO.CPP
// Addr: 0x80086334
unknown LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	int FileHnd;
}

// Path: C:\diabpsx\PSXSRC\PCIO.CPP
// Addr: 0x80086408
unknown LoStreamFile__4PCIOPCciPFPUciib_bii(struct PCIO *this, char *Name, int Slice, unknown (*Func)(), int Offset, int Size) {
	int Size;
	int FileHnd;
	long hnd;
	unsigned char *Dest;
	int OrigSize;
	int SizeToRead;
}


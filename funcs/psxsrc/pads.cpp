// Path: C:\diabpsx\PSXSRC\PADS.CPP
// Addr: 0x800894E0
unsigned long ReadPadStream__Fv() {
	unsigned char *p0;
	unsigned char *p1;
	unsigned long rval;
}

// Path: C:\diabpsx\PSXSRC\PADS.CPP
// Addr: 0x800895F8
void PAD_Handler__Fv() {
	unsigned long JVal;
	unsigned long v;
	unsigned char fin;
}

// Path: C:\diabpsx\PSXSRC\PADS.CPP
// Addr: 0x800897F4
struct CPad* PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}

// Path: C:\diabpsx\PSXSRC\PADS.CPP
// Addr: 0x800898A4
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
}

// Path: C:\diabpsx\PSXSRC\PADS.CPP
// Addr: 0x80089918
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
}

// Path: C:\diabpsx\PSXSRC\PADS.CPP
// Addr: 0x800899AC
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	unsigned short RetVal;
}

// Path: C:\diabpsx\PSXSRC\PADS.CPP
// Addr: 0x80089AD0
void Flush__4CPad(struct CPad *this) {
}

// Path: C:\diabpsx\PSXSRC\PADS.CPP
// Addr: 0x80089B24
void InitClickBits__FPUs(unsigned short *CountArray) {
	int f;
}

// Path: C:\diabpsx\PSXSRC\PADS.CPP
// Addr: 0x80089B44
unsigned short MakeClickBits__FiiiPUs(int Switch, int Closed, int Speed, unsigned short *CountArray) {
	unsigned short Click;
	unsigned short BitMask;
	int ResetSpeed;
}

// Path: C:\diabpsx\PSXSRC\PADS.CPP
// Addr: 0x80089BD0
void _GLOBAL_.I.Pad0() {
}

// Path: C:\diabpsx\PSXSRC\PADS.CPP
// Addr: 0x800B071C
void PAD_Open__Fv() {
}


// Path: C:\DIABPSX\GLIBDEV\SOURCE\PSX\GSYS.C
// Addr: 0x8002116C
struct MEM_INFO* GSYS_GetWorkMemInfo() {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\PSX\GSYS.C
// Addr: 0x8002117C
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\PSX\GSYS.C
// Addr: 0x800211B8
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\PSX\GSYS.C
// Addr: 0x800211C8
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\PSX\GSYS.C
// Addr: 0x800211E0
unsigned char GSYS_InitMachine() {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\PSX\GSYS.C
// Addr: 0x80021234
unsigned char GSYS_CheckPtr(void *Ptr) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\PSX\GSYS.C
// Addr: 0x80021268
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	unsigned long ThisSp;
}


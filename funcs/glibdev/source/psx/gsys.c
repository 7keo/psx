// C:\DIABPSX\GLIBDEV\SOURCE\PSX\GSYS.C

#include "types.h"

// address: 0x8002116C
// size: 0x8
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x8002117C
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x800211B8
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x800211C8
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x800211E0
unsigned char GSYS_InitMachine();

// address: 0x80021234
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x80021268
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}



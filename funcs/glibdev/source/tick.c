// C:\DIABPSX\GLIBDEV\SOURCE\TICK.C

#include "types.h"

// address: 0x80020BEC
void TICK_InitModule();

// address: 0x80020C0C
void TICK_Set(unsigned long Val);

// address: 0x80020C1C
unsigned long TICK_Get();

// address: 0x80020C2C
void TICK_Update();

// address: 0x80020C4C
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x80020C78
char *TICK_GetDateString();

// address: 0x80020C88
char *TICK_GetTimeString();


// C:\DIABPSX\GLIBDEV\SOURCE\PSX\GDEBUG.C

#include "types.h"

// address: 0x80020E54
unsigned char DBG_OpenModule();

// address: 0x80020E5C
void DBG_PollHost();

// address: 0x80020E64
void DBG_Halt();

// address: 0x80020E6C
void DBG_SendMessage(char *e);

// address: 0x80020E84
void DBG_SetMessageHandler(void (*Func)());

// address: 0x80020E94
void DBG_Error(char *Text, char *File, int Line);

// address: 0x80020EC8
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x80020ED8
void SendPsyqString(char *e);

// address: 0x80020EE0
void DBG_SetPollRoutine(void (*Func)());


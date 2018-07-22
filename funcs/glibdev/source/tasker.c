// C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C

#include "types.h"

// address: 0x8001FEFC
void DoEpi(struct TASK *T);

// address: 0x8001FF4C
void DoPro(struct TASK *T);

// address: 0x8001FF9C
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x80020010
// size: 0x5C
struct TASK *TSK_AddTask(unsigned long Id, void (*Main)(), int StackSize, int DataSize) {
	// register: 16
	// size: 0x5C
	register struct TASK *RetTask;
	// register: 17
	register long hndTask;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct GAL_STRUCT G[4];
}


// address: 0x800201F8
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x800203B8
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x80020494
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x8002051C
void TSK_Die();

// address: 0x80020548
void TSK_Kill(struct TASK *T);

// address: 0x80020598
// size: 0x5C
struct TASK *TSK_GetFirstActive();

// address: 0x800205A8
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x80020624
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8002066C
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x800206B0
// size: 0x5C
struct TASK *TSK_GetCurrentTask();

// address: 0x800206C0
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x800206D8
// size: 0x5C
struct TASK *TSK_Exist(struct TASK *T, unsigned long Id, unsigned long Mask) {
	// register: 3
	// size: 0x5C
	register struct TASK *ptrTask;
	// register: 7
	// size: 0x5C
	register struct TASK *RetTask;
}


// address: 0x80020730
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x80020748
void TSK_ClearExecFilter();

// address: 0x8002076C
int TSK_KillTasks(struct TASK *CallingT, unsigned long Id, unsigned long Mask) {
	// register: 17
	register int TasksKilled;
	// register: 4
	// size: 0x5C
	register struct TASK *T;
	// register: 18
	register unsigned char WasCurrentTaskKilled;
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8002086C
void TSK_IterateTasks(unsigned long Id, unsigned long Mask, void (*CallBack)()) {
	// register: 4
	// size: 0x5C
	register struct TASK *T;
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x800208E4
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x800208F8
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x8002090C
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x80020920
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x80020934
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x80020948
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x8002095C
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x800209A8
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x800209C8
void LoTskKill(struct TASK *T) {
}


// address: 0x80020A38
void ExecuteTask(struct TASK *T);

// address: 0x80020A88
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80020AA0
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80020AB8
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80020AD0
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80020AE8
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x80020B00
void TSK_ClearEpiProFilter();

// address: 0x80020B34
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x80020B44
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x80020B5C
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x80020B84
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x80020BB0
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}



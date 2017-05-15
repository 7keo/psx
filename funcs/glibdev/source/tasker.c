// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x8001FEFC
void DoEpi(struct TASK *T) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x8001FF4C
void DoPro(struct TASK *T) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x8001FF9C
unsigned char TSK_OpenModule(unsigned long MemType) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020010
struct TASK* TSK_AddTask(unsigned long Id, void (*Main)(), int StackSize, int DataSize) {
	struct TASK *RetTask;
	long hndTask;
	struct GAL_STRUCT G[4];
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x800201F8
void TSK_DoTasks() {
	struct TASK *NextT;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x800203B8
void TSK_Sleep(int Frames) {
	struct TASK *T;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020494
void ReturnToSchedulerIfCurrentTask(struct TASK *T) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x8002051C
void TSK_Die() {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020548
void TSK_Kill(struct TASK *T) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020598
struct TASK* TSK_GetFirstActive() {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x800205A8
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	int LongsOk;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020624
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	struct TASK *T;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x8002066C
void TSK_RepointProc(struct TASK *T, void (*Func)()) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x800206B0
struct TASK* TSK_GetCurrentTask() {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x800206C0
unsigned char TSK_IsCurrentTask(struct TASK *T) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x800206D8
struct TASK* TSK_Exist(struct TASK *T, unsigned long Id, unsigned long Mask) {
	struct TASK *ptrTask;
	struct TASK *RetTask;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020730
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020748
void TSK_ClearExecFilter() {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x8002076C
int TSK_KillTasks(struct TASK *CallingT, unsigned long Id, unsigned long Mask) {
	int TasksKilled;
	struct TASK *T;
	unsigned char WasCurrentTaskKilled;
	struct TASK *NextT;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x8002086C
void TSK_IterateTasks(unsigned long Id, unsigned long Mask, void (*CallBack)()) {
	struct TASK *T;
	struct TASK *NextT;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x800208E4
void TSK_MakeTaskInactive(struct TASK *T) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x800208F8
void TSK_MakeTaskActive(struct TASK *T) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x8002090C
void TSK_MakeTaskImmortal(struct TASK *T) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020920
void TSK_MakeTaskMortal(struct TASK *T) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020934
unsigned char TSK_IsTaskActive(struct TASK *T) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020948
unsigned char TSK_IsTaskMortal(struct TASK *T) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x8002095C
void DetachFromList(struct TASK **Head, struct TASK *ThisObj) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x800209A8
void AddToList(struct TASK **Head, struct TASK *ThisObj) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x800209C8
void LoTskKill(struct TASK *T) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020A38
void ExecuteTask(struct TASK *T) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020A88
void ()()* TSK_SetDoTasksPrologue(void (*Func)()) {
	void (*Old)();
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020AA0
void ()()* TSK_SetDoTasksEpilogue(void (*Func)()) {
	void (*Old)();
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020AB8
void ()()* TSK_SetTaskPrologue(void (*Pro)()) {
	void (*Old)();
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020AD0
void ()()* TSK_SetTaskEpilogue(void (*Epi)()) {
	void (*Old)();
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020AE8
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020B00
void TSK_ClearEpiProFilter() {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020B34
void TSK_SetExtraStackProtection(unsigned char OnOff) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020B44
void ()()* TSK_SetStackFloodCallback(void (*Func)()) {
	void (*OldFunc)();
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020B5C
int TSK_SetExtraStackSize(int Size) {
	int OldSize;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020B84
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	int f;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C
// Addr: 0x80020BB0
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	unsigned long f;
}


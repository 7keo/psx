// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x800212D4
void GAL_SetErrorChecking(unsigned char OnOff) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x800212E4
long GAL_SplitBlock(long CurBlock, unsigned long Size) {
	struct MEM_INIT_INFO *M;
	struct MEM_HDR *MemHdr;
	struct MEM_HDR *SplitBlock;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80021404
void GAL_InitModule() {
	int f;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x800214BC
unsigned char GAL_AddMemType(struct MEM_INIT_INFO *M) {
	struct MEM_INIT_INFO *P;
	struct MEM_HDR *FreeMemHdr;
	unsigned long Addr1;
	unsigned long Addr2;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x800215DC
long GAL_Alloc(unsigned long Size, unsigned long Type, char *Name) {
	struct MEM_HDR *Block;
	struct MEM_INIT_INFO *M;
	unsigned long FullSize;
	struct MEM_HDR *(*FRoute)();
	unsigned char High;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80021774
void* GAL_Lock(long Handle) {
	struct MEM_HDR *MemHdr;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x800217DC
unsigned char GAL_Unlock(long Handle) {
	struct MEM_HDR *MemHdr;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80021860
unsigned char GAL_Free(long Handle) {
	struct MEM_INIT_INFO *M;
	struct MEM_HDR *MemHdr;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80021908
unsigned long GAL_GetFreeMem(unsigned long Type) {
	unsigned long FreeMem;
	struct MEM_INIT_INFO *M;
	struct MEM_HDR *Block;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x8002197C
unsigned long GAL_GetUsedMem(unsigned long Type) {
	unsigned long FreeMem;
	struct MEM_INIT_INFO *M;
	struct MEM_HDR *Block;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x800219F0
unsigned long GAL_LargestFreeBlock(unsigned long Type) {
	unsigned long Largest;
	struct MEM_HDR *Index;
	struct MEM_INIT_INFO *MI;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80021A6C
void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80021A8C
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80021AD8
unsigned char IsActiveValidHandle(long Handle) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80021B10
void* AlignPtr(void *P, unsigned long Align) {
	unsigned long Addr;
	unsigned long Temp;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80021B40
unsigned long AlignSize(unsigned long Size, unsigned long Align) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80021B70
struct MEM_HDR* FindClosestSizedBlock(struct MEM_HDR *Head, unsigned long Size) {
	struct MEM_HDR *Closest;
	struct MEM_HDR *Index;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80021BC8
struct MEM_HDR* FindHighestMemBlock(struct MEM_HDR *Head, unsigned long Size) {
	struct MEM_HDR *Closest;
	struct MEM_HDR *Index;
	void *Highest;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80021C30
struct MEM_HDR* FindLowestMemBlock(struct MEM_HDR *Head, unsigned long Size) {
	struct MEM_HDR *Closest;
	struct MEM_HDR *Index;
	unsigned long Lowest;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80021C98
struct MEM_INIT_INFO* GetMemInitInfoBlockFromType(unsigned long Type) {
	struct MEM_INIT_INFO *P;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80021CD4
void MergeToEmptyList(struct MEM_INIT_INFO *MI, struct MEM_HDR *M) {
	struct MEM_HDR *Index;
	struct MEM_HDR *NextIndex;
	void *Start;
	void *End;
	void *ThisStart;
	void *ThisEnd;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80021DA8
long GAL_AllocAt(unsigned long Size, void *Addr, unsigned long Type, char *Name) {
	struct MEM_HDR *Block;
	struct MEM_INIT_INFO *M;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80021E84
long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name) {
	struct MEM_HDR *SplitBlock;
	unsigned long PhysSize;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x8002201C
struct MEM_HDR* FindBlockInTheseBounds(struct MEM_HDR *Head, void *Addr, unsigned long Size) {
	struct MEM_HDR *Index;
	unsigned char Done;
	unsigned long ThisStart;
	unsigned long ThisEnd;
	unsigned long Start;
	unsigned long End;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022088
struct MEM_HDR* GetFreeMemHdrBlock() {
	struct MEM_HDR *RetBlock;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022110
void ReleaseMemHdrBlock(struct MEM_HDR *Index) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022150
void GAL_IterateEmptyMem(unsigned long MemType, void (*Func)()) {
	struct MEM_INIT_INFO *M;
	struct MEM_HDR *Block;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x800221D4
void GAL_IterateUsedMem(unsigned long MemType, void (*Func)()) {
	struct MEM_INIT_INFO *M;
	struct MEM_HDR *Block;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022270
unsigned char GAL_SetMemName(long Hnd, char *Text) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x800222E0
unsigned long GAL_TotalMem(unsigned long Type) {
	unsigned long TotalMem;
	struct MEM_INIT_INFO *M;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022334
void* GAL_MemBase(unsigned long Type) {
	void *Ret;
	struct MEM_INIT_INFO *M;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022388
unsigned char GAL_DefragMem(unsigned long type) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x8002240C
unsigned char GSetError(enum GAL_ERROR_CODE Err) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022468
unsigned char GAL_CheckMem(unsigned long Type) {
	struct MEM_INIT_INFO *M;
	struct MEM_HDR *MemHdr;
	unsigned long TotalMem;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022564
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	struct MEM_HDR *CheckHdr;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022610
unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2) {
	unsigned long Addr1;
	unsigned long Addr2;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022668
char* GAL_GetErrorText(enum GAL_ERROR_CODE Err) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022698
enum GAL_ERROR_CODE GAL_GetLastErrorCode() {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x800226A8
char* GAL_GetLastErrorText() {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x800226D0
int GAL_HowManyEmptyRegions(unsigned long Type) {
	struct MEM_INIT_INFO *m;
	int Count;
	struct MEM_HDR *mh;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022738
int GAL_HowManyUsedRegions(unsigned long Type) {
	struct MEM_INIT_INFO *m;
	int Count;
	struct MEM_HDR *mh;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x800227A0
void GAL_SetTimeStamp(int Time) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x800227B0
void GAL_IncTimeStamp() {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x800227D0
int GAL_GetTimeStamp() {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x800227E0
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	struct MEM_INIT_INFO *Mi;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022830
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022880
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	unsigned int TotalMem;
	int f;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x8002292C
long GAL_GetSize(long hnd) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022988
unsigned char GazDefragMem(unsigned long MemType) {
	struct MEM_HDR *LockedBlocks;
	struct MEM_INIT_INFO *M;
	struct MEM_REG Reg;
	struct MEM_HDR *NewEmptyBlock;
	struct MEM_HDR *ListOfBlocksInRegion;
	unsigned long ShuffledSize;
	int GapSize;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022AF0
void PutBlocksInRegionIntoList(struct MEM_REG *Reg, struct MEM_HDR **ToList, struct MEM_HDR **FromList) {
	struct MEM_HDR *ThisBlock;
	struct MEM_HDR *NextBlock;
	struct MEM_REG MemReg;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022B94
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022BC8
void DeleteEmptyBlocks(struct MEM_INIT_INFO *M) {
	struct MEM_HDR *ThisBlock;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022C34
unsigned char GetRegion(struct MEM_REG *Reg, struct MEM_HDR *LockedBlocks, struct MEM_INIT_INFO *M) {
	struct MEM_HDR *FirstBlock;
	struct MEM_HDR *SecondBlock;
	struct MEM_REG NewReg;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022D2C
struct MEM_HDR* FindNextBlock(void *Addr, struct MEM_HDR *Blocks) {
	unsigned long BlockAddr;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022D68
unsigned long ShuffleBlocks(struct MEM_HDR *Blocks, struct MEM_REG *Reg, struct MEM_INIT_INFO *M) {
	unsigned long NewSize;
	void *MemBase;
	struct MEM_HDR *ThisBlock;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022DF8
void PutAllLockedBlocksOntoList(struct MEM_HDR **ToHead, struct MEM_HDR **FromHead) {
	struct MEM_HDR *CurHdr;
	struct MEM_HDR *NextCurHdr;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022E74
void SortMemHdrListByAddr(struct MEM_HDR **Head) {
	unsigned char DidASwap;
	struct MEM_HDR *CurHdr;
	struct MEM_HDR *NextHdr;
	struct MEM_HDR *OldPrev;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022F28
void GraftMemHdrList(struct MEM_HDR **ToList, struct MEM_HDR **FromList) {
	struct MEM_HDR *OldFirst;
	struct MEM_HDR *LastHdr;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022F84
void GAL_MemDump(unsigned long Type) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80022FF8
void GAL_SetVerbosity(enum GAL_VERB_LEV G) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80023008
int CountFreeBlocks() {
	struct MEM_HDR *RetBlock;
	int Count;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80023034
void SetBlockName(struct MEM_HDR *MemHdr, char *NewName) {
	int IndexSoFar;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x8002307C
int GAL_GetNumFreeHeaders() {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x8002308C
unsigned long GAL_GetLastTypeAlloced() {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x8002309C
void ()()* GAL_SetAllocFilter(void (*NewFilter)()) {
	void (*OldFilter)();
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x800230B4
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	struct MEM_INIT_INFO *M;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80023108
unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x80023118
unsigned char GAL_SortUsedRegionsByAddress(unsigned long MemType) {
	struct MEM_INIT_INFO *M;
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x8002316C
unsigned char SortAddr(struct MEM_HDR *B1, struct MEM_HDR *B2) {
}

// Path: C:\DIABPSX\GLIBDEV\SOURCE\GAL.C
// Addr: 0x8002317C
void SortMemHdrList(struct MEM_HDR **Head, unsigned char (*CompFunc)()) {
	unsigned char DidASwap;
	struct MEM_HDR *CurHdr;
	struct MEM_HDR *NextHdr;
	struct MEM_HDR *OldPrev;
}


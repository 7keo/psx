// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80091E54
struct TextDat* __7TextDat(struct TextDat *this) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80091E88
void OnceOnlyInit__7TextDat(struct TextDat *this) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80091EA8
void _._7TextDat(struct TextDat *this, int __in_chrg) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80091EF0
void ReloadTP__7TextDat(struct TextDat *this) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80091F30
void Use__7TextDatlbi(struct TextDat *this, long NewHndDat, unknown DatLoaded, int size) {
	char NameBuff[40];
	struct RECT R;
	int DecompSize;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80092170
unknown TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, unknown LastChunk) {
	struct RECT R;
	int Dx;
	int Dy;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80092218
void StreamLoadTP__7TextDat(struct TextDat *this) {
	char TheName[20];
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x800922D0
void FinishedUsing__7TextDat(struct TextDat *this) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80092368
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x800923B4
long MakeOffsetTab__C9CBlockHdr(struct CBlockHdr *this) {
	struct CBlock *MyBlock;
	long hndRet;
	int *Tab;
	unsigned int f;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x800924E0
void SetUVTp__7TextDatP9FRAME_HDRP8POLY_FT4ii(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4, int XFlip, int YFlip) {
	int YFlip;
	int Rotated;
	int Tpage;
	int U;
	int V;
	int W;
	int H;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x800925E0
unknown IsCompressed__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Dir, int Frame) {
	int Frame;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x8009262C
struct POLY_FT4* PrintMonster__7TextDatiiiiiii(struct TextDat *this, int Creature, int Action, int Dir, int Frame, int x, int y, int OtPos) {
	int Frame;
	int x;
	int y;
	int OtPos;
	int PhysFrame;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x800926D8
struct POLY_FT4* PrintMonsterA__7TextDatiiibi(struct TextDat *this, int Frm, int X, int Y, unknown XFlip, int OtPos) {
	unknown XFlip;
	int OtPos;
	struct POLY_FT4 *FT4;
	struct FRAME_HDR *Fr;
	int W;
	int H;
	unsigned char *Dest;
	int DecompSize;
	unsigned char *CompFrAddr;
	struct DR_LOAD2 *DrPtr;
	unsigned long NumOfPrims;
	int VH;
	int TpX;
	int TpY;
	int U;
	int V;
	int W;
	int H;
	int u0;
	int u1;
	int u2;
	int u3;
	unsigned int f;
	struct RECT mrect;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80092A80
void PrepareFt4__7TextDatP8POLY_FT4iiiii(struct TextDat *this, struct POLY_FT4 *FT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	int Y;
	int XFlip;
	struct FRAME_HDR *Fr;
	int W;
	int H;
	struct RECT R;
	unsigned char sw;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80092D14
unsigned char* GetDecompBufffer__7TextDati(struct TextDat *this, int Size) {
	long *DecArray;
	int DecIndex;
	long hnd;
	unsigned char *RetAddr;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80092E74
void SetUVTpGT4__7TextDatP9FRAME_HDRP8POLY_GT4ii(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT4 *FT4, int XFlip, int YFlip) {
	int YFlip;
	int Rotated;
	int Tpage;
	int U;
	int V;
	int W;
	int H;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80092F74
void PrepareGt4__7TextDatP8POLY_GT4iiiii(struct TextDat *this, struct POLY_GT4 *GT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	int Y;
	int XFlip;
	int YFlip;
	struct FRAME_HDR *Fr;
	int W;
	int H;
	unsigned char sw;
	struct PAL *Pal;
	struct RECT R;
	int DecX;
	int DecY;
	struct RECT R;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x800931CC
void SetUVTpGT3__7TextDatP9FRAME_HDRP8POLY_GT3(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT3 *GT3) {
	int Rotated;
	int Tpage;
	int U;
	int V;
	int W;
	int H;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80093250
void PrepareGt3__7TextDatP8POLY_GT3iii(struct TextDat *this, struct POLY_GT3 *GT3, int Frm, int X, int Y) {
	int Y;
	struct FRAME_HDR *Fr;
	int W;
	int H;
	struct PAL *Pal;
	struct RECT R;
	int DecX;
	int DecY;
	struct RECT R;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80093418
struct POLY_FT4* PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	int XFlip;
	int OtPos;
	int YFlip;
	struct POLY_FT4 *FT4;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x8009356C
struct POLY_GT4* PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	int XFlip;
	int OtPos;
	int YFlip;
	struct POLY_GT4 *GT4;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x800936C0
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	unsigned char *CompFrAddr;
	int DecompSize;
	unsigned char *Dest;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80093818
void MakeCreatureOffsetTab__7TextDat(struct TextDat *this) {
	int NumOfCreatures;
	unsigned char *ThisAddr;
	unsigned int f;
	int f;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80093958
void MakePalOffsetTab__7TextDat(struct TextDat *this) {
	struct PAL *ThisPal;
	unsigned int f;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80093A54
void InitData__7TextDat(struct TextDat *this) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80093A84
void DumpData__7TextDat(struct TextDat *this) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80093BAC
void DumpHdr__7TextDat(struct TextDat *this) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80093C10
struct TextDat* GM_UseTexData__Fi(int Id) {
	struct TextDat *Dat2Use;
	struct CTextFileInfo **Tab;
	int f;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80093D44
void GM_ForceTpLoad__Fi(int Id) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80093D80
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80093DD4
void SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4) {
	struct PAL *Pal;
	struct RECT R;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80093E98
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
	int Frame;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80093EEC
unknown IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80093F44
void DoDecompRequests__7TextDat(struct TextDat *this) {
	long *DecArray;
	int f;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80094068
void FindDecompArea__7TextDatR4RECT(struct TextDat *this, struct RECT *R) {
	int NumOfFrames;
	int Widest;
	int Tallest;
	int f;
	int w;
	int h;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80094140
struct CTextFileInfo* GetFileInfo__7TextDati(int Id) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80094190
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x800941B8
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	int LocFrame;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x800941E8
void InitDirRemap__15CCreatureAction(struct CCreatureAction *this) {
	unknown Dir2Remap[8];
	int f;
	int RemapNum;
	int OrigNum;
	int g;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x800942A8
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x800942EC
struct CCreatureAction* GetAction__C12CCreatureHdri(struct CCreatureHdr *this, int ActNum) {
	struct CCreatureAction *CAct;
	int f;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x8009437C
void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this) {
	struct CCreatureAction *CAct;
	int f;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x800943EC
int GetSize__C12CCreatureHdr(struct CCreatureHdr *this) {
	int Size;
	struct CCreatureAction *CAct;
	int f;
	int ThisSize;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80094458
void LoadDat__C13CTextFileInfoli(struct CTextFileInfo *this, long hnd, int size) {
	char FName[13];
	unsigned char *Dest;
	struct FileIO *MyFileIO;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x8009458C
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x800945E4
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x8009460C
void MakeFname__C13CTextFileInfoPcPCc(struct CTextFileInfo *this, char *Dest, char *Ext) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80094654
long GetFile__C13CTextFileInfoPcUl(struct CTextFileInfo *this, char *Ext, unsigned long RamId) {
	char FName[13];
	long hnd;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x800946F4
unknown HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	char FName[13];
	struct FileIO *MyFileIO;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80094788
void Un64__FPUcT0l(unsigned char *Src, unsigned char *Dest, long SizeBytes) {
	unsigned char *EndDest;
	unsigned long *BigDest;
	unsigned long Code;
	unsigned long Run;
	unsigned long BigCode;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x8009485C
struct CScreen* __7CScreen(struct CScreen *this) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80094890
void Load__7CScreeniii(struct CScreen *this, int Id, int tpx, int tpy) {
	unsigned char r;
	unsigned char g;
	unsigned char b;
	struct FRAME_HDR *Fr;
	struct RECT R;
	struct PAL *Pal;
	unsigned short MyPal[256];
	int i;
	int i;
	int i;
	int nocols;
	int v;
	unsigned short c;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80094BA4
void Unload__7CScreen(struct CScreen *this) {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80094BC8
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	int fadeval;
	struct POLY_FT4 *FT4;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80094EA8
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	struct FRAME_HDR *Fr;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80094F24
void GetBoundingBox__6CBlockR7TextDatR4RECT(struct CBlock *this, struct TextDat *TDat, struct RECT *R) {
	int left;
	int right;
	int top;
	int bottom;
	struct RECT Pr;
	unsigned int f;
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x80095080
void _GLOBAL_.D.DatPool() {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x800950D8
void _GLOBAL_.I.DatPool() {
}

// Path: C:\diabpsx\PSXSRC\GMAN.CPP
// Addr: 0x800B0760
void GM_Open__Fv() {
	int f;
}


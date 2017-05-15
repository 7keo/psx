TextDat __7TextDat(TextDat this) {
}

void OnceOnlyInit__7TextDat(TextDat this) {
}

void _._7TextDat(TextDat this, int __in_chrg) {
}

void ReloadTP__7TextDat(TextDat this) {
}

void Use__7TextDatlbi(TextDat this, long NewHndDat, unknown DatLoaded, int size) {
	char NameBuff[40];
	LPCRECT R;
	int DecompSize;
}

unknown TpLoadCallBack__FPUciib(unsigned char* Mem, int ReadSoFar, int Size, unknown LastChunk) {
	LPCRECT R;
	int Dx;
	int Dy;
}

void StreamLoadTP__7TextDat(TextDat this) {
	char TheName[20];
}

void FinishedUsing__7TextDat(TextDat this) {
}

void MakeBlockOffsetTab__7TextDat(TextDat this) {
}

long MakeOffsetTab__C9CBlockHdr(CBlockHdr this) {
	CBlock MyBlock;
	long hndRet;
	int* Tab;
	unsigned int f;
}

void SetUVTp__7TextDatP9FRAME_HDRP8POLY_FT4ii(TextDat this, FRAME_HDR Fr, OBJ_PFUNC FT4, int XFlip, int YFlip) {
	int YFlip;
	int Rotated;
	int Tpage;
	int U;
	int V;
	int W;
	int H;
}

unknown IsCompressed__7TextDatiiii(TextDat this, int Creature, int Action, int Dir, int Frame) {
	int Frame;
}

OBJ_PFUNC PrintMonster__7TextDatiiiiiii(TextDat this, int Creature, int Action, int Dir, int Frame, int x, int y, int OtPos) {
	int Frame;
	int x;
	int y;
	int OtPos;
	int PhysFrame;
}

OBJ_PFUNC PrintMonsterA__7TextDatiiibi(TextDat this, int Frm, int X, int Y, unknown XFlip, int OtPos) {
	unknown XFlip;
	int OtPos;
	OBJ_PFUNC FT4;
	FRAME_HDR Fr;
	int W;
	int H;
	unsigned char* Dest;
	int DecompSize;
	unsigned char* CompFrAddr;
	DR_LOAD2 DrPtr;
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
	LPCRECT mrect;
}

void PrepareFt4__7TextDatP8POLY_FT4iiiii(TextDat this, OBJ_PFUNC FT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	int Y;
	int XFlip;
	FRAME_HDR Fr;
	int W;
	int H;
	LPCRECT R;
	unsigned char sw;
}

unsigned char* GetDecompBufffer__7TextDati(TextDat this, int Size) {
	long* DecArray;
	int DecIndex;
	long hnd;
	unsigned char* RetAddr;
}

void SetUVTpGT4__7TextDatP9FRAME_HDRP8POLY_GT4ii(TextDat this, FRAME_HDR Fr, POLY_GT4 FT4, int XFlip, int YFlip) {
	int YFlip;
	int Rotated;
	int Tpage;
	int U;
	int V;
	int W;
	int H;
}

void PrepareGt4__7TextDatP8POLY_GT4iiiii(TextDat this, POLY_GT4 GT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	int Y;
	int XFlip;
	int YFlip;
	FRAME_HDR Fr;
	int W;
	int H;
	unsigned char sw;
	PAL Pal;
	LPCRECT R;
	int DecX;
	int DecY;
	LPCRECT R;
}

void SetUVTpGT3__7TextDatP9FRAME_HDRP8POLY_GT3(TextDat this, FRAME_HDR Fr, POLY_GT3 GT3) {
	int Rotated;
	int Tpage;
	int U;
	int V;
	int W;
	int H;
}

void PrepareGt3__7TextDatP8POLY_GT3iii(TextDat this, POLY_GT3 GT3, int Frm, int X, int Y) {
	int Y;
	FRAME_HDR Fr;
	int W;
	int H;
	PAL Pal;
	LPCRECT R;
	int DecX;
	int DecY;
	LPCRECT R;
}

OBJ_PFUNC PrintFt4__7TextDatiiiiii(TextDat this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	int XFlip;
	int OtPos;
	int YFlip;
	OBJ_PFUNC FT4;
}

POLY_GT4 PrintGt4__7TextDatiiiiii(TextDat this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	int XFlip;
	int OtPos;
	int YFlip;
	POLY_GT4 GT4;
}

void DecompFrame__7TextDatP9FRAME_HDR(TextDat this, FRAME_HDR Fr) {
	unsigned char* CompFrAddr;
	int DecompSize;
	unsigned char* Dest;
}

void MakeCreatureOffsetTab__7TextDat(TextDat this) {
	int NumOfCreatures;
	unsigned char* ThisAddr;
	unsigned int f;
	int f;
}

void MakePalOffsetTab__7TextDat(TextDat this) {
	PAL ThisPal;
	unsigned int f;
}

void InitData__7TextDat(TextDat this) {
}

void DumpData__7TextDat(TextDat this) {
}

void DumpHdr__7TextDat(TextDat this) {
}

TextDat GM_UseTexData__Fi(int Id) {
	TextDat Dat2Use;
	CTextFileInfo Tab;
	int f;
}

void GM_ForceTpLoad__Fi(int Id) {
}

void GM_FinishedUsing__FP7TextDat(TextDat Fin) {
}

void SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(TextDat this, FRAME_HDR Fr, OBJ_PFUNC FT4) {
	PAL Pal;
	LPCRECT R;
}

int GetFrNum__7TextDatiiii(TextDat this, int Creature, int Action, int Direction, int Frame) {
	int Frame;
}

unknown IsDirAliased__7TextDatiii(TextDat this, int Creature, int Action, int Direction) {
}

void DoDecompRequests__7TextDat(TextDat this) {
	long* DecArray;
	int f;
}

void FindDecompArea__7TextDatR4RECT(TextDat this, LPCRECT R) {
	int NumOfFrames;
	int Widest;
	int Tallest;
	int f;
	int w;
	int h;
}

CTextFileInfo GetFileInfo__7TextDati(int Id) {
}

int GetSize__C15CCreatureAction(CCreatureAction this) {
}

int GetFrNum__C15CCreatureActionii(CCreatureAction this, int Direction, int Frame) {
	int LocFrame;
}

void InitDirRemap__15CCreatureAction(CCreatureAction this) {
	unknown Dir2Remap[8];
	int f;
	int RemapNum;
	int OrigNum;
	int g;
}

int GetFrNum__C12CCreatureHdriii(CCreatureHdr this, int Action, int Direction, int Frame) {
}

CCreatureAction GetAction__C12CCreatureHdri(CCreatureHdr this, int ActNum) {
	CCreatureAction CAct;
	int f;
}

void InitActionDirRemaps__12CCreatureHdr(CCreatureHdr this) {
	CCreatureAction CAct;
	int f;
}

int GetSize__C12CCreatureHdr(CCreatureHdr this) {
	int Size;
	CCreatureAction CAct;
	int f;
	int ThisSize;
}

void LoadDat__C13CTextFileInfoli(CTextFileInfo this, long hnd, int size) {
	char FName[13];
	unsigned char* Dest;
	FileIO MyFileIO;
}

long LoadDat__C13CTextFileInfo(CTextFileInfo this) {
}

long LoadHdr__C13CTextFileInfo(CTextFileInfo this) {
}

void MakeFname__C13CTextFileInfoPcPCc(CTextFileInfo this, char* Dest, char* Ext) {
}

long GetFile__C13CTextFileInfoPcUl(CTextFileInfo this, char* Ext, unsigned long RamId) {
	char FName[13];
	long hnd;
}

unknown HasFile__C13CTextFileInfoPc(CTextFileInfo this, char* Ext) {
	char FName[13];
	FileIO MyFileIO;
}

void Un64__FPUcT0l(unsigned char* Src, unsigned char* Dest, long SizeBytes) {
	unsigned char* EndDest;
	unsigned long* BigDest;
	unsigned long Code;
	unsigned long Run;
	unsigned long BigCode;
}

CScreen __7CScreen(CScreen this) {
}

void Load__7CScreeniii(CScreen this, int Id, int tpx, int tpy) {
	unsigned char r;
	unsigned char g;
	unsigned char b;
	FRAME_HDR Fr;
	LPCRECT R;
	PAL Pal;
	unsigned short MyPal[256];
	int i;
	int i;
	int i;
	int nocols;
	int v;
	unsigned short c;
}

void Unload__7CScreen(CScreen this) {
}

void Display__7CScreeniiii(CScreen this, int Id, int tpx, int tpy, int fadeval) {
	int fadeval;
	OBJ_PFUNC FT4;
}

void SetRect__5CPartR7TextDatR4RECT(CPart this, TextDat TDat, LPCRECT R) {
	FRAME_HDR Fr;
}

void GetBoundingBox__6CBlockR7TextDatR4RECT(CBlock this, TextDat TDat, LPCRECT R) {
	int left;
	int right;
	int top;
	int bottom;
	LPCRECT Pr;
	unsigned int f;
}

void _GLOBAL_.D.DatPool() {
}

void _GLOBAL_.I.DatPool() {
}

TextDat __7TextDat(TextDat this) {
}

void OnceOnlyInit__7TextDat(TextDat this) {
}

void _._7TextDat(TextDat this, int __in_chrg) {
}

void ReloadTP__7TextDat(TextDat this) {
}

void Use__7TextDatlbi(TextDat this, long NewHndDat, unknown DatLoaded, int size) {
	char NameBuff[40];
	LPCRECT R;
	int DecompSize;
}

unknown TpLoadCallBack__FPUciib(unsigned char* Mem, int ReadSoFar, int Size, unknown LastChunk) {
	LPCRECT R;
	int Dx;
	int Dy;
}

void StreamLoadTP__7TextDat(TextDat this) {
	char TheName[20];
}

void FinishedUsing__7TextDat(TextDat this) {
}

void MakeBlockOffsetTab__7TextDat(TextDat this) {
}

long MakeOffsetTab__C9CBlockHdr(CBlockHdr this) {
	CBlock MyBlock;
	long hndRet;
	int* Tab;
	unsigned int f;
}

void SetUVTp__7TextDatP9FRAME_HDRP8POLY_FT4ii(TextDat this, FRAME_HDR Fr, OBJ_PFUNC FT4, int XFlip, int YFlip) {
	int YFlip;
	int Rotated;
	int Tpage;
	int U;
	int V;
	int W;
	int H;
}

unknown IsCompressed__7TextDatiiii(TextDat this, int Creature, int Action, int Dir, int Frame) {
	int Frame;
}

OBJ_PFUNC PrintMonster__7TextDatiiiiiii(TextDat this, int Creature, int Action, int Dir, int Frame, int x, int y, int OtPos) {
	int Frame;
	int x;
	int y;
	int OtPos;
	int PhysFrame;
}

OBJ_PFUNC PrintMonsterA__7TextDatiiibi(TextDat this, int Frm, int X, int Y, unknown XFlip, int OtPos) {
	unknown XFlip;
	int OtPos;
	OBJ_PFUNC FT4;
	FRAME_HDR Fr;
	int W;
	int H;
	unsigned char* Dest;
	int DecompSize;
	unsigned char* CompFrAddr;
	DR_LOAD2 DrPtr;
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
	LPCRECT mrect;
}

void PrepareFt4__7TextDatP8POLY_FT4iiiii(TextDat this, OBJ_PFUNC FT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	int Y;
	int XFlip;
	FRAME_HDR Fr;
	int W;
	int H;
	LPCRECT R;
	unsigned char sw;
}

unsigned char* GetDecompBufffer__7TextDati(TextDat this, int Size) {
	long* DecArray;
	int DecIndex;
	long hnd;
	unsigned char* RetAddr;
}

void SetUVTpGT4__7TextDatP9FRAME_HDRP8POLY_GT4ii(TextDat this, FRAME_HDR Fr, POLY_GT4 FT4, int XFlip, int YFlip) {
	int YFlip;
	int Rotated;
	int Tpage;
	int U;
	int V;
	int W;
	int H;
}

void PrepareGt4__7TextDatP8POLY_GT4iiiii(TextDat this, POLY_GT4 GT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	int Y;
	int XFlip;
	int YFlip;
	FRAME_HDR Fr;
	int W;
	int H;
	unsigned char sw;
	PAL Pal;
	LPCRECT R;
	int DecX;
	int DecY;
	LPCRECT R;
}

void SetUVTpGT3__7TextDatP9FRAME_HDRP8POLY_GT3(TextDat this, FRAME_HDR Fr, POLY_GT3 GT3) {
	int Rotated;
	int Tpage;
	int U;
	int V;
	int W;
	int H;
}

void PrepareGt3__7TextDatP8POLY_GT3iii(TextDat this, POLY_GT3 GT3, int Frm, int X, int Y) {
	int Y;
	FRAME_HDR Fr;
	int W;
	int H;
	PAL Pal;
	LPCRECT R;
	int DecX;
	int DecY;
	LPCRECT R;
}

OBJ_PFUNC PrintFt4__7TextDatiiiiii(TextDat this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	int XFlip;
	int OtPos;
	int YFlip;
	OBJ_PFUNC FT4;
}

POLY_GT4 PrintGt4__7TextDatiiiiii(TextDat this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	int XFlip;
	int OtPos;
	int YFlip;
	POLY_GT4 GT4;
}

void DecompFrame__7TextDatP9FRAME_HDR(TextDat this, FRAME_HDR Fr) {
	unsigned char* CompFrAddr;
	int DecompSize;
	unsigned char* Dest;
}

void MakeCreatureOffsetTab__7TextDat(TextDat this) {
	int NumOfCreatures;
	unsigned char* ThisAddr;
	unsigned int f;
	int f;
}

void MakePalOffsetTab__7TextDat(TextDat this) {
	PAL ThisPal;
	unsigned int f;
}

void InitData__7TextDat(TextDat this) {
}

void DumpData__7TextDat(TextDat this) {
}

void DumpHdr__7TextDat(TextDat this) {
}

TextDat GM_UseTexData__Fi(int Id) {
	TextDat Dat2Use;
	CTextFileInfo Tab;
	int f;
}

void GM_ForceTpLoad__Fi(int Id) {
}

void GM_FinishedUsing__FP7TextDat(TextDat Fin) {
}

void SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(TextDat this, FRAME_HDR Fr, OBJ_PFUNC FT4) {
	PAL Pal;
	LPCRECT R;
}

int GetFrNum__7TextDatiiii(TextDat this, int Creature, int Action, int Direction, int Frame) {
	int Frame;
}

unknown IsDirAliased__7TextDatiii(TextDat this, int Creature, int Action, int Direction) {
}

void DoDecompRequests__7TextDat(TextDat this) {
	long* DecArray;
	int f;
}

void FindDecompArea__7TextDatR4RECT(TextDat this, LPCRECT R) {
	int NumOfFrames;
	int Widest;
	int Tallest;
	int f;
	int w;
	int h;
}

CTextFileInfo GetFileInfo__7TextDati(int Id) {
}

int GetSize__C15CCreatureAction(CCreatureAction this) {
}

int GetFrNum__C15CCreatureActionii(CCreatureAction this, int Direction, int Frame) {
	int LocFrame;
}

void InitDirRemap__15CCreatureAction(CCreatureAction this) {
	unknown Dir2Remap[8];
	int f;
	int RemapNum;
	int OrigNum;
	int g;
}

int GetFrNum__C12CCreatureHdriii(CCreatureHdr this, int Action, int Direction, int Frame) {
}

CCreatureAction GetAction__C12CCreatureHdri(CCreatureHdr this, int ActNum) {
	CCreatureAction CAct;
	int f;
}

void InitActionDirRemaps__12CCreatureHdr(CCreatureHdr this) {
	CCreatureAction CAct;
	int f;
}

int GetSize__C12CCreatureHdr(CCreatureHdr this) {
	int Size;
	CCreatureAction CAct;
	int f;
	int ThisSize;
}

void LoadDat__C13CTextFileInfoli(CTextFileInfo this, long hnd, int size) {
	char FName[13];
	unsigned char* Dest;
	FileIO MyFileIO;
}

long LoadDat__C13CTextFileInfo(CTextFileInfo this) {
}

long LoadHdr__C13CTextFileInfo(CTextFileInfo this) {
}

void MakeFname__C13CTextFileInfoPcPCc(CTextFileInfo this, char* Dest, char* Ext) {
}

long GetFile__C13CTextFileInfoPcUl(CTextFileInfo this, char* Ext, unsigned long RamId) {
	char FName[13];
	long hnd;
}

unknown HasFile__C13CTextFileInfoPc(CTextFileInfo this, char* Ext) {
	char FName[13];
	FileIO MyFileIO;
}

void Un64__FPUcT0l(unsigned char* Src, unsigned char* Dest, long SizeBytes) {
	unsigned char* EndDest;
	unsigned long* BigDest;
	unsigned long Code;
	unsigned long Run;
	unsigned long BigCode;
}

CScreen __7CScreen(CScreen this) {
}

void Load__7CScreeniii(CScreen this, int Id, int tpx, int tpy) {
	unsigned char r;
	unsigned char g;
	unsigned char b;
	FRAME_HDR Fr;
	LPCRECT R;
	PAL Pal;
	unsigned short MyPal[256];
	int i;
	int i;
	int i;
	int nocols;
	int v;
	unsigned short c;
}

void Unload__7CScreen(CScreen this) {
}

void Display__7CScreeniiii(CScreen this, int Id, int tpx, int tpy, int fadeval) {
	int fadeval;
	OBJ_PFUNC FT4;
}

void SetRect__5CPartR7TextDatR4RECT(CPart this, TextDat TDat, LPCRECT R) {
	FRAME_HDR Fr;
}

void GetBoundingBox__6CBlockR7TextDatR4RECT(CBlock this, TextDat TDat, LPCRECT R) {
	int left;
	int right;
	int top;
	int bottom;
	LPCRECT Pr;
	unsigned int f;
}

void _GLOBAL_.D.DatPool() {
}

void _GLOBAL_.I.DatPool() {
}

void GM_Open__Fv() {
	int f;
}

void GM_Open__Fv() {
	int f;
}


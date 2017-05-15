// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008D41C
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008D45C
void CycleSelCols__Fv() {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008D614
int FindTownCreature__7CBlocksi(struct CBlocks *this, int GameEqu) {
	unsigned int f;
	int Creature;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008D688
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	unsigned int f;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008D6FC
struct CBlocks* __7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
	int Level;
	int List;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008D860
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008D898
void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List) {
	struct MonstLevel *MLev;
	struct MonstList *MList;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008D960
void _._7CBlocks(struct CBlocks *this, int __in_chrg) {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008D9E8
void DumpGt4s__7CBlocks(struct CBlocks *this) {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008DA50
void DumpRects__7CBlocks(struct CBlocks *this) {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008DAB8
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008DB14
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008DB64
void Load__7CBlocksi(struct CBlocks *this, int Id) {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008DC1C
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	unsigned char *MyBlocks;
	int *BlockOffsets;
	int f;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008DD70
void MakeGt4Table__7CBlocks(struct CBlocks *this) {
	unsigned int f;
	struct POLY_GT4 ThisGt4;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008DF54
void MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(struct CBlocks *this, struct POLY_GT4 *GT4, struct FRAME_HDR *Fr) {
	int H;
	int Rotated;
	int Tpage;
	int zU;
	int zV;
	int zW;
	int zH;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008E07C
void MyRoutine__FR7CBlocksii(struct CBlocks *B, int x, int y) {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008E0E4
void SetRandOffset__7CBlocksi(struct CBlocks *this, int QuakeAmount) {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008E140
void Print__7CBlocks(struct CBlocks *this) {
	int MxInt;
	int MyInt;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008E25C
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008E284
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008E29C
void InitColourCycling__7CBlocks(struct CBlocks *this) {
	int CycleIndex;
	int f;
	int f;
	int f;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008E3E8
void GetGCol__7CBlocksiiPUcP7RGBData(struct CBlocks *this, int x, int y, unsigned char *Rgb, struct RGBData *Data) {
	struct RGBData *Data;
	int rgb_itxr;
	int rgb_itxg;
	int rgb_itxb;
	int rgb_leftr;
	int rgb_leftg;
	int rgb_leftb;
	int rgb_rightr;
	int rgb_rightg;
	int rgb_rightb;
	int rgb_cordr;
	int rgb_cordg;
	int rgb_cordb;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008E528
void PrintMap__7CBlocksii(struct CBlocks *this, int x, int y) {
	int XPos;
	int YPos;
	int xx;
	int BlankBlock;
	unsigned char *MyBlocks;
	int *BlockOffsets;
	int XPix;
	int YPix;
	int nx;
	int ny;
	int CLeft;
	int CRight;
	int CTop;
	int CBottom;
	int ThisY;
	int ThisXPos;
	int ThisYPos;
	int Height;
	struct CPart *Parts;
	struct CBlock *MyBlock;
	int BlockNum;
	struct RGBData MyRgbData;
	int bx;
	int by;
	struct RECT *BlockR;
	int clipx;
	int clipy;
	int NumOfParts;
	unknown DoTrans;
	int OtPos;
	unknown PFlag;
	int f;
	struct POLY_GT4 *DestGt4;
	struct LittleGt4 *ThisGt4;
	unsigned char Flags;
	int W;
	int H;
	int r;
	int g;
	int b;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008F098
void IterateVisibleMap__7CBlocksiiPFP9CacheInfoP8map_infoii_ib(struct CBlocks *this, int x, int y, int (*Func)(), unknown VisCheck) {
	int XPos;
	int YPos;
	int xx;
	unknown Infra;
	int MyXShifter;
	int MyYShifter;
	int Total;
	unknown DoVisCheck;
	int XPix;
	int YPix;
	int CRight;
	int ThisXPos;
	int ThisYPos;
	int Height;
	struct map_info *p0;
	struct map_info *p1;
	struct map_info *p2;
	struct map_info *p3;
	int myx;
	int myy;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008F510
int AddMonst__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	int nMonster;
	int Index;
	int bFlags;
	struct MonsterStruct *MyMonst;
	int mi;
	int ThisIndex;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8008F5F8
void PrintMonsters__7CBlocksii(struct CBlocks *this, int x, int y) {
	struct TextDat *CMonstGraphics;
	int Total;
	int Wx;
	int Wy;
	int Cx;
	int Cy;
	struct TextDat *GolemGraphics;
	unknown MyInfraFlag;
	int f;
	int Index;
	struct MonsterStruct *MyMonst;
	int Frame;
	int Action;
	int Dir;
	int PhysFrame;
	int Creature;
	int ScrXOff;
	int ScrYOff;
	struct POLY_FT4 *Ft4;
	struct POLY_FT4 *ShadFt4;
	unknown StartAnim;
	int bx;
	int by;
	int Sx;
	int Sy;
	int OtPos;
	int blockr;
	int blockg;
	int blockb;
	int AVal;
	int DoCompress;
	int f;
	int MaxDecompress;
	int f;
	int Frame;
	int Action;
	int Dir;
	int Creature;
	int ScrXOff;
	int ScrYOff;
	struct RECT R;
	int GType;
	int Sx;
	int Sy;
	int Index;
	int transfile;
	int Mg;
	struct MonsterStruct *MyMonst;
	int bx;
	int by;
	int mx;
	int my;
	unknown PrintIt;
	unknown Compressed;
	unsigned int g;
	int OtPos;
	struct POLY_FT4 *Ft4;
	int blockr;
	int blockg;
	int blockb;
	struct POLY_FT4 *ShadFt4;
	int paloff;
	int Col;
	int SPal;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8009009C
int AddTowners__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	int nMonster;
	struct MonsterStruct *MyMonst;
	int mi;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x800900F8
void PrintTowners__7CBlocksii(struct CBlocks *this, int x, int y) {
	int Total;
	int Wx;
	int Wy;
	int Cx;
	int Cy;
	int f;
	int Creature;
	int mi;
	struct POLY_FT4 *Ft4;
	struct TextDat *ThisData;
	int PhysFrame;
	int GameFrame;
	int Dir;
	int Sx;
	int Sy;
	int OtPos;
	int Col;
	struct POLY_FT4 *ShadFt4;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x800904B0
int AddObject__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	int bObject;
	struct ObjectStruct *OStr;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8009050C
void PrintObjects__7CBlocksii(struct CBlocks *this, int x, int y) {
	int Total;
	int Wx;
	int Wy;
	int Cx;
	int Cy;
	int z;
	int f;
	int Sx;
	int Sy;
	int LoadIndex;
	struct ObjectStruct *OStr;
	unknown DoCreature;
	struct POLY_FT4 *(*PFunc)();
	int Index;
	int AnimFrame;
	int OtPos;
	struct POLY_FT4 *Ft4;
	int Creature;
	int PhysFrame;
	struct TextDat *ObjDat;
	int bx;
	int by;
	int Col;
	int blockr;
	int blockg;
	int blockb;
	struct POLY_FT4 *ShadFt4;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x80090968
int AddDead__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	int bDead;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x800909F4
void PrintDead__7CBlocksii(struct CBlocks *this, int x, int y) {
	int Total;
	int Wx;
	int Wy;
	int Cx;
	int Cy;
	int f;
	int bDead;
	int dx;
	int dy;
	int Frame;
	int Creature;
	struct POLY_FT4 *Ft4;
	int transfile;
	int Sx;
	int Sy;
	int Mg;
	struct CMonster *MyMonst;
	int bx;
	int by;
	int blockr;
	int blockg;
	int blockb;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x80090CB8
int AddItem__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	int bItem;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x80090D14
void PrintItems__7CBlocksii(struct CBlocks *this, int x, int y) {
	int Total;
	int Wx;
	int Wy;
	int Cx;
	int Cy;
	int z;
	unknown DoAnim;
	int f;
	int Sx;
	int Sy;
	struct ItemStruct *IStr;
	int OtPos;
	struct POLY_FT4 *Ft4;
	int Index;
	int bx;
	int by;
	int Col;
	int blockr;
	int blockg;
	int blockb;
	struct FRAME_HDR *Fr;
	int W;
	int H;
	short height;
	int it;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x800912D4
int AddMissile__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	int bFlags;
	int MissIndex;
	int dMiss;
	int nMiss;
	int MissIndex;
	int Index;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x800913EC
void PrintMissiles__7CBlocksii(struct CBlocks *this, int x, int y) {
	struct CachedInfoList *InfoList;
	int Wx;
	int Wy;
	int Cx;
	int Cy;
	int Total;
	int f;
	int Sx;
	int Sy;
	struct MissileStruct *MissStr;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x800915E4
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x800915F8
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8009160C
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x800916D0
void DoScroll__7CBlocks(struct CBlocks *this) {
	int XDiff;
	int YDiff;
	int divnum;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x800917BC
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x8009185C
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	int sxoff;
	int syoff;
	int Sx;
	int Sy;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x80091930
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	int H;
	int NewTop;
	int W;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x800919D0
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x800919D8
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x800919EC
struct CBlocks* BL_GetCurrentBlocks__Fv() {
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x800919F8
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
	unsigned short P12Col;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x80091ABC
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
	unsigned short P12Col;
}

// Path: C:\diabpsx\PSXSRC\BLOCK.CPP
// Addr: 0x80091BE4
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


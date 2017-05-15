void UpdateSel__FPUsUsPUc(unsigned short* Col, unsigned short Add, unsigned char* Count) {
}

void CycleSelCols__Fv() {
}

int FindTownCreature__7CBlocksi(CBlocks this, int GameEqu) {
	unsigned int f;
	int Creature;
}

int FindCreature__7CBlocksi(CBlocks this, int MgNum) {
	unsigned int f;
}

CBlocks __7CBlocksiiiii(CBlocks this, int BgId, int ObjId, int ItemId, int Level, int List) {
	int Level;
	int List;
}

void SetTownersGraphics__7CBlocks(CBlocks this) {
}

void SetMonsterGraphics__7CBlocksii(CBlocks this, int Level, int List) {
	MonstLevel MLev;
	MonstList MList;
}

void _._7CBlocks(CBlocks this, int __in_chrg) {
}

void DumpGt4s__7CBlocks(CBlocks this) {
}

void DumpRects__7CBlocks(CBlocks this) {
}

void SetGraphics__7CBlocksPP7TextDatPii(CBlocks this, TextDat TDat, int* pId, int Id) {
}

void DumpGraphics__7CBlocksPP7TextDatPi(CBlocks this, TextDat TDat, int* Id) {
}

void Load__7CBlocksi(CBlocks this, int Id) {
}

void MakeRectTable__7CBlocks(CBlocks this) {
	unsigned char* MyBlocks;
	int* BlockOffsets;
	int f;
}

void MakeGt4Table__7CBlocks(CBlocks this) {
	unsigned int f;
	POLY_GT4 ThisGt4;
}

void MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(CBlocks this, POLY_GT4 GT4, FRAME_HDR Fr) {
	int H;
	int Rotated;
	int Tpage;
	int zU;
	int zV;
	int zW;
	int zH;
}

void MyRoutine__FR7CBlocksii(CBlocks B, int x, int y) {
}

void SetRandOffset__7CBlocksi(CBlocks this, int QuakeAmount) {
}

void Print__7CBlocks(CBlocks this) {
	int MxInt;
	int MyInt;
}

void SetXY__7CBlocksii(CBlocks this, int nx, int ny) {
}

void GetXY__7CBlocksPiT1(CBlocks this, int* nx, int* ny) {
}

void InitColourCycling__7CBlocks(CBlocks this) {
	int CycleIndex;
	int f;
	int f;
	int f;
}

void GetGCol__7CBlocksiiPUcP7RGBData(CBlocks this, int x, int y, unsigned char* Rgb, RGBData Data) {
	RGBData Data;
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

void PrintMap__7CBlocksii(CBlocks this, int x, int y) {
	int XPos;
	int YPos;
	int xx;
	int BlankBlock;
	unsigned char* MyBlocks;
	int* BlockOffsets;
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
	CPart Parts;
	CBlock MyBlock;
	int BlockNum;
	RGBData MyRgbData;
	int bx;
	int by;
	LPCRECT BlockR;
	int clipx;
	int clipy;
	int NumOfParts;
	unknown DoTrans;
	int OtPos;
	unknown PFlag;
	int f;
	POLY_GT4 DestGt4;
	LittleGt4 ThisGt4;
	unsigned char Flags;
	int W;
	int H;
	int r;
	int g;
	int b;
}

void IterateVisibleMap__7CBlocksiiPFP9CacheInfoP8map_infoii_ib(CBlocks this, int x, int y, int* Func, unknown VisCheck) {
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
	map_info p0;
	map_info p1;
	map_info p2;
	map_info p3;
	int myx;
	int myy;
}

int AddMonst__FP9CacheInfoP8map_infoii(CacheInfo Info, map_info p0, int bx, int by) {
	int nMonster;
	int Index;
	int bFlags;
	MonsterStruct MyMonst;
	int mi;
	int ThisIndex;
}

void PrintMonsters__7CBlocksii(CBlocks this, int x, int y) {
	TextDat CMonstGraphics;
	int Total;
	int Wx;
	int Wy;
	int Cx;
	int Cy;
	TextDat GolemGraphics;
	unknown MyInfraFlag;
	int f;
	int Index;
	MonsterStruct MyMonst;
	int Frame;
	int Action;
	int Dir;
	int PhysFrame;
	int Creature;
	int ScrXOff;
	int ScrYOff;
	OBJ_PFUNC Ft4;
	OBJ_PFUNC ShadFt4;
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
	LPCRECT R;
	int GType;
	int Sx;
	int Sy;
	int Index;
	int transfile;
	int Mg;
	MonsterStruct MyMonst;
	int bx;
	int by;
	int mx;
	int my;
	unknown PrintIt;
	unknown Compressed;
	unsigned int g;
	int OtPos;
	OBJ_PFUNC Ft4;
	int blockr;
	int blockg;
	int blockb;
	OBJ_PFUNC ShadFt4;
	int paloff;
	int Col;
	int SPal;
}

int AddTowners__FP9CacheInfoP8map_infoii(CacheInfo Info, map_info p0, int bx, int by) {
	int nMonster;
	MonsterStruct MyMonst;
	int mi;
}

void PrintTowners__7CBlocksii(CBlocks this, int x, int y) {
	int Total;
	int Wx;
	int Wy;
	int Cx;
	int Cy;
	int f;
	int Creature;
	int mi;
	OBJ_PFUNC Ft4;
	TextDat ThisData;
	int PhysFrame;
	int GameFrame;
	int Dir;
	int Sx;
	int Sy;
	int OtPos;
	int Col;
	OBJ_PFUNC ShadFt4;
}

int AddObject__FP9CacheInfoP8map_infoii(CacheInfo Info, map_info p0, int bx, int by) {
	int bObject;
	ObjectStruct OStr;
}

void PrintObjects__7CBlocksii(CBlocks this, int x, int y) {
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
	ObjectStruct OStr;
	unknown DoCreature;
	OBJ_PFUNC PFunc;
	int Index;
	int AnimFrame;
	int OtPos;
	OBJ_PFUNC Ft4;
	int Creature;
	int PhysFrame;
	TextDat ObjDat;
	int bx;
	int by;
	int Col;
	int blockr;
	int blockg;
	int blockb;
	OBJ_PFUNC ShadFt4;
}

int AddDead__FP9CacheInfoP8map_infoii(CacheInfo Info, map_info p0, int bx, int by) {
	int bDead;
}

void PrintDead__7CBlocksii(CBlocks this, int x, int y) {
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
	OBJ_PFUNC Ft4;
	int transfile;
	int Sx;
	int Sy;
	int Mg;
	CMonster MyMonst;
	int bx;
	int by;
	int blockr;
	int blockg;
	int blockb;
}

int AddItem__FP9CacheInfoP8map_infoii(CacheInfo Info, map_info p0, int bx, int by) {
	int bItem;
}

void PrintItems__7CBlocksii(CBlocks this, int x, int y) {
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
	ItemStruct IStr;
	int OtPos;
	OBJ_PFUNC Ft4;
	int Index;
	int bx;
	int by;
	int Col;
	int blockr;
	int blockg;
	int blockb;
	FRAME_HDR Fr;
	int W;
	int H;
	short height;
	int it;
}

int AddMissile__FP9CacheInfoP8map_infoii(CacheInfo Info, map_info p0, int bx, int by) {
	int bFlags;
	int MissIndex;
	int dMiss;
	int nMiss;
	int MissIndex;
	int Index;
}

void PrintMissiles__7CBlocksii(CBlocks this, int x, int y) {
	CachedInfoList InfoList;
	int Wx;
	int Wy;
	int Cx;
	int Cy;
	int Total;
	int f;
	int Sx;
	int Sy;
	MissileStruct MissStr;
}

int ScrToWorldX__7CBlocksii(CBlocks this, int sx, int sy) {
}

int ScrToWorldY__7CBlocksii(CBlocks this, int sx, int sy) {
}

void SetScrollTarget__7CBlocksii(CBlocks this, int x, int y) {
}

void DoScroll__7CBlocks(CBlocks this) {
	int XDiff;
	int YDiff;
	int divnum;
}

void SetPlayerPosBlocks__7CBlocksiii(CBlocks this, int PlayerNum, int bx, int by) {
}

void GetScrXY__7CBlocksR4RECTiiii(CBlocks this, LPCRECT R, int x, int y, int sxoff, int syoff) {
	int sxoff;
	int syoff;
	int Sx;
	int Sy;
}

void ShadScaleSkew__7CBlocksP8POLY_FT4(OBJ_PFUNC Ft4) {
	int H;
	int NewTop;
	int W;
}

int WorldToScrX__7CBlocksii(CBlocks this, int x, int y) {
}

int WorldToScrY__7CBlocksii(CBlocks this, int x, int y) {
}

CBlocks BL_GetCurrentBlocks__Fv() {
}

int GetHighlightCol__FiPcUsUsUs(int Index, char* SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
	unsigned short P12Col;
}

int GetHighlightCol__FiPiUsUsUs(int Index, int* SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
	unsigned short P12Col;
}

int GetCreature__14TownToCreaturei(TownToCreature this, int GameCreature) {
}

void UpdateSel__FPUsUsPUc(unsigned short* Col, unsigned short Add, unsigned char* Count) {
}

void CycleSelCols__Fv() {
}

int FindTownCreature__7CBlocksi(CBlocks this, int GameEqu) {
	unsigned int f;
	int Creature;
}

int FindCreature__7CBlocksi(CBlocks this, int MgNum) {
	unsigned int f;
}

CBlocks __7CBlocksiiiii(CBlocks this, int BgId, int ObjId, int ItemId, int Level, int List) {
	int Level;
	int List;
}

void SetTownersGraphics__7CBlocks(CBlocks this) {
}

void SetMonsterGraphics__7CBlocksii(CBlocks this, int Level, int List) {
	MonstLevel MLev;
	MonstList MList;
}

void _._7CBlocks(CBlocks this, int __in_chrg) {
}

void DumpGt4s__7CBlocks(CBlocks this) {
}

void DumpRects__7CBlocks(CBlocks this) {
}

void SetGraphics__7CBlocksPP7TextDatPii(CBlocks this, TextDat TDat, int* pId, int Id) {
}

void DumpGraphics__7CBlocksPP7TextDatPi(CBlocks this, TextDat TDat, int* Id) {
}

void Load__7CBlocksi(CBlocks this, int Id) {
}

void MakeRectTable__7CBlocks(CBlocks this) {
	unsigned char* MyBlocks;
	int* BlockOffsets;
	int f;
}

void MakeGt4Table__7CBlocks(CBlocks this) {
	unsigned int f;
	POLY_GT4 ThisGt4;
}

void MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(CBlocks this, POLY_GT4 GT4, FRAME_HDR Fr) {
	int H;
	int Rotated;
	int Tpage;
	int zU;
	int zV;
	int zW;
	int zH;
}

void MyRoutine__FR7CBlocksii(CBlocks B, int x, int y) {
}

void SetRandOffset__7CBlocksi(CBlocks this, int QuakeAmount) {
}

void Print__7CBlocks(CBlocks this) {
	int MxInt;
	int MyInt;
}

void SetXY__7CBlocksii(CBlocks this, int nx, int ny) {
}

void GetXY__7CBlocksPiT1(CBlocks this, int* nx, int* ny) {
}

void InitColourCycling__7CBlocks(CBlocks this) {
	int CycleIndex;
	int f;
	int f;
	int f;
}

void GetGCol__7CBlocksiiPUcP7RGBData(CBlocks this, int x, int y, unsigned char* Rgb, RGBData Data) {
	RGBData Data;
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

void PrintMap__7CBlocksii(CBlocks this, int x, int y) {
	int XPos;
	int YPos;
	int xx;
	int BlankBlock;
	unsigned char* MyBlocks;
	int* BlockOffsets;
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
	CPart Parts;
	CBlock MyBlock;
	int BlockNum;
	RGBData MyRgbData;
	int bx;
	int by;
	LPCRECT BlockR;
	int clipx;
	int clipy;
	int NumOfParts;
	unknown DoTrans;
	int OtPos;
	unknown PFlag;
	int f;
	POLY_GT4 DestGt4;
	LittleGt4 ThisGt4;
	unsigned char Flags;
	int W;
	int H;
	int r;
	int g;
	int b;
}

void IterateVisibleMap__7CBlocksiiPFP9CacheInfoP8map_infoii_ib(CBlocks this, int x, int y, int* Func, unknown VisCheck) {
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
	map_info p0;
	map_info p1;
	map_info p2;
	map_info p3;
	int myx;
	int myy;
}

int AddMonst__FP9CacheInfoP8map_infoii(CacheInfo Info, map_info p0, int bx, int by) {
	int nMonster;
	int Index;
	int bFlags;
	MonsterStruct MyMonst;
	int mi;
	int ThisIndex;
}

void PrintMonsters__7CBlocksii(CBlocks this, int x, int y) {
	TextDat CMonstGraphics;
	int Total;
	int Wx;
	int Wy;
	int Cx;
	int Cy;
	TextDat GolemGraphics;
	unknown MyInfraFlag;
	int f;
	int Index;
	MonsterStruct MyMonst;
	int Frame;
	int Action;
	int Dir;
	int PhysFrame;
	int Creature;
	int ScrXOff;
	int ScrYOff;
	OBJ_PFUNC Ft4;
	OBJ_PFUNC ShadFt4;
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
	LPCRECT R;
	int GType;
	int Sx;
	int Sy;
	int Index;
	int transfile;
	int Mg;
	MonsterStruct MyMonst;
	int bx;
	int by;
	int mx;
	int my;
	unknown PrintIt;
	unknown Compressed;
	unsigned int g;
	int OtPos;
	OBJ_PFUNC Ft4;
	int blockr;
	int blockg;
	int blockb;
	OBJ_PFUNC ShadFt4;
	int paloff;
	int Col;
	int SPal;
}

int AddTowners__FP9CacheInfoP8map_infoii(CacheInfo Info, map_info p0, int bx, int by) {
	int nMonster;
	MonsterStruct MyMonst;
	int mi;
}

void PrintTowners__7CBlocksii(CBlocks this, int x, int y) {
	int Total;
	int Wx;
	int Wy;
	int Cx;
	int Cy;
	int f;
	int Creature;
	int mi;
	OBJ_PFUNC Ft4;
	TextDat ThisData;
	int PhysFrame;
	int GameFrame;
	int Dir;
	int Sx;
	int Sy;
	int OtPos;
	int Col;
	OBJ_PFUNC ShadFt4;
}

int AddObject__FP9CacheInfoP8map_infoii(CacheInfo Info, map_info p0, int bx, int by) {
	int bObject;
	ObjectStruct OStr;
}

void PrintObjects__7CBlocksii(CBlocks this, int x, int y) {
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
	ObjectStruct OStr;
	unknown DoCreature;
	OBJ_PFUNC PFunc;
	int Index;
	int AnimFrame;
	int OtPos;
	OBJ_PFUNC Ft4;
	int Creature;
	int PhysFrame;
	TextDat ObjDat;
	int bx;
	int by;
	int Col;
	int blockr;
	int blockg;
	int blockb;
	OBJ_PFUNC ShadFt4;
}

int AddDead__FP9CacheInfoP8map_infoii(CacheInfo Info, map_info p0, int bx, int by) {
	int bDead;
}

void PrintDead__7CBlocksii(CBlocks this, int x, int y) {
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
	OBJ_PFUNC Ft4;
	int transfile;
	int Sx;
	int Sy;
	int Mg;
	CMonster MyMonst;
	int bx;
	int by;
	int blockr;
	int blockg;
	int blockb;
}

int AddItem__FP9CacheInfoP8map_infoii(CacheInfo Info, map_info p0, int bx, int by) {
	int bItem;
}

void PrintItems__7CBlocksii(CBlocks this, int x, int y) {
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
	ItemStruct IStr;
	int OtPos;
	OBJ_PFUNC Ft4;
	int Index;
	int bx;
	int by;
	int Col;
	int blockr;
	int blockg;
	int blockb;
	FRAME_HDR Fr;
	int W;
	int H;
	short height;
	int it;
}

int AddMissile__FP9CacheInfoP8map_infoii(CacheInfo Info, map_info p0, int bx, int by) {
	int bFlags;
	int MissIndex;
	int dMiss;
	int nMiss;
	int MissIndex;
	int Index;
}

void PrintMissiles__7CBlocksii(CBlocks this, int x, int y) {
	CachedInfoList InfoList;
	int Wx;
	int Wy;
	int Cx;
	int Cy;
	int Total;
	int f;
	int Sx;
	int Sy;
	MissileStruct MissStr;
}

int ScrToWorldX__7CBlocksii(CBlocks this, int sx, int sy) {
}

int ScrToWorldY__7CBlocksii(CBlocks this, int sx, int sy) {
}

void SetScrollTarget__7CBlocksii(CBlocks this, int x, int y) {
}

void DoScroll__7CBlocks(CBlocks this) {
	int XDiff;
	int YDiff;
	int divnum;
}

void SetPlayerPosBlocks__7CBlocksiii(CBlocks this, int PlayerNum, int bx, int by) {
}

void GetScrXY__7CBlocksR4RECTiiii(CBlocks this, LPCRECT R, int x, int y, int sxoff, int syoff) {
	int sxoff;
	int syoff;
	int Sx;
	int Sy;
}

void ShadScaleSkew__7CBlocksP8POLY_FT4(OBJ_PFUNC Ft4) {
	int H;
	int NewTop;
	int W;
}

int WorldToScrX__7CBlocksii(CBlocks this, int x, int y) {
}

int WorldToScrY__7CBlocksii(CBlocks this, int x, int y) {
}

CBlocks BL_GetCurrentBlocks__Fv() {
}

int GetHighlightCol__FiPcUsUsUs(int Index, char* SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
	unsigned short P12Col;
}

int GetHighlightCol__FiPiUsUsUs(int Index, int* SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
	unsigned short P12Col;
}

int GetCreature__14TownToCreaturei(TownToCreature this, int GameCreature) {
}


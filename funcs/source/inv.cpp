// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x80157274
void FreeInvGFX__Fv() {
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015727C
void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	struct POLY_FT4 *Ft4;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x80157300
void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	unsigned char Flag;
	struct POLY_FT4 *Ft4;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x801575B8
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	int TransFlag;
	struct POLY_FT4 *Ft4;
	struct TextDat *TData;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x80157688
void InvDrawSlots__Fv() {
	int Bx;
	int By;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x801579A0
void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col) {
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x80157A6C
void DrawInvStats__Fv() {
	struct Dialog InvBack;
	char c;
	char chrstr[10];
	long mind;
	long maxd;
	int hper;
	int ac;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x80158588
void DrawInvBack__Fv() {
	struct Dialog InvBack;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x80158634
void DrawInvCursor__Fv() {
	int ItemX;
	int ItemY;
	int LoopX;
	int LoopY;
	struct POLY_FT4 *Ft4;
	struct TextDat *TData;
	int GoldAmount;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x80158C00
void DrawInvMsg__Fv() {
	struct POLY_FT4 *Ft4;
	struct RECT InfoRect;
	int InfoY;
	int InfoW;
	int InfoH;
	struct Dialog InvBack;
	int OldOt;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x80158DCC
void DrawInvHelpTxt__Fv() {
	char TempStr[128];
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x801590B4
void DrawInv__Fv() {
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x801590FC
void DrawInvTSK__FP4TASK(struct TASK *T) {
	int omp;
	int osel;
	struct CBlocks *BgBlocks;
	int ThisIsShit;
	int OldPad;
	int OldOt;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x80159714
void DoThatDrawInv__Fv() {
	int Loop;
	int ii;
	int ItemX;
	int ItemY;
	int ItemNo;
	struct RECT ClipRect;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x80159F24
unsigned char AutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag) {
	unsigned char saveflag;
	int i;
	int j;
	int xx;
	int yy;
	unsigned char done;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015A24C
unsigned char SpecialAutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag) {
	unsigned char saveflag;
	int i;
	int j;
	int xx;
	int yy;
	unsigned char done;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015A5F0
unsigned char GoldAutoPlace__Fi(int pnum) {
	int i;
	int ii;
	int xx;
	int yy;
	long gt;
	unsigned char done;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015AAC8
unsigned char WeaponAutoPlace__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015AD5C
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	struct ItemStruct h;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015AE70
void CheckInvPaste__Fiii(int pnum, int mx, int my) {
	int r;
	int sx;
	int sy;
	int i;
	int j;
	int xx;
	int yy;
	int ii;
	unsigned char done;
	unsigned char done2h;
	int il;
	int cn;
	int it;
	int iv;
	int ig;
	long gt;
	struct ItemStruct tempitem;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015CBF8
void CheckInvCut__Fiii(int pnum, int mx, int my) {
	int r;
	int ii;
	int iv;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015D6FC
void RemoveInvItem__Fii(int pnum, int iv) {
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015D9AC
void RemoveSpdBarItem__Fii(int pnum, int iv) {
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015DAA0
void CheckInvScrn__Fv() {
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015DB18
void CheckItemStats__Fi(int pnum) {
	struct PlayerStruct *p;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015DB9C
void CheckBookLevel__Fi(int pnum) {
	int slvl;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015DCD0
void CheckQuestItem__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015E180
void InvGetItem__Fii(int pnum, int ii) {
	int j;
	int jj;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015E45C
void AutoGetItem__Fii(int pnum, int ii) {
	int i;
	int g;
	int w;
	int h;
	int idx;
	unsigned char done;
	int j;
	int jj;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015EEB8
void SyncGetItem__FiiiUsi(int x, int y, int idx, unsigned short ci, int iseed) {
	int iseed;
	int ii;
	int j;
	int jj;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015F020
unsigned char TryInvPut__Fv() {
	int Dist;
	int d;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015F16C
int InvPutItem__Fiii(int pnum, int x, int y) {
	int ii;
	unsigned char done;
	int Dist;
	int d;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015F504
int SyncPutItem__FiiiiUsiUciiiiiUl(int pnum, int x, int y, int idx, int icreateinfo, int iseed, int Id, int dur, int mdur, int ch, int mch, int ivalue, unsigned long ibuff) {
	unsigned short icreateinfo;
	unsigned char Id;
	int ii;
	int d;
	int dy;
	unsigned char done;
	int l;
	int j;
	int yy;
	int i;
	int xx;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015FA64
char CheckInvHLight__Fv() {
	int r;
	char rv;
	struct ItemStruct *pi;
	struct PlayerStruct *p;
	int nGold;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015FDFC
void RemoveScroll__Fi(int pnum) {
	int i;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8015FFE0
unsigned char UseScroll__Fv() {
	int i;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x80160248
void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x801602AC
unsigned char UseStaff__Fv() {
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8016036C
void StartGoldDrop__Fv() {
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x80160470
unsigned char UseInvItem__Fii(int pnum, int cii) {
	int c;
	int idata;
	int it;
	struct ItemStruct *Item;
	unsigned char speedlist;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x80160A34
void DoTelekinesis__Fv() {
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x80160B64
long CalculateGold__Fi(int pnum) {
	int i;
	long gold;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x80160C9C
unsigned char DropItemBeforeTrig__Fv() {
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x80160CF4
void ControlInv__Fv() {
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x801610B0
void InvGetItemWH__Fi(int Pos) {
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x801611A8
void InvAlignObject__Fv() {
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x8016135C
void InvSetItemCurs__Fv() {
	int ItemNo;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x801614FC
void InvMoveCursLeft__Fv() {
	int ItemInc;
	int OldPos;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x801616A4
void InvMoveCursRight__Fv() {
	int ItemInc;
	int OldPos;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x80161958
void InvMoveCursUp__Fv() {
	int ItemInc;
	int OldPos;
}

// Path: C:\diabpsx\SOURCE\INV.CPP
// Addr: 0x80161B50
void InvMoveCursDown__Fv() {
	int ItemInc;
	int OldPos;
}


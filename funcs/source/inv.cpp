void FreeInvGFX__Fv() {
}

void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	OBJ_PFUNC Ft4;
}

void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	unsigned char Flag;
	OBJ_PFUNC Ft4;
}

void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	int TransFlag;
	OBJ_PFUNC Ft4;
	TextDat TData;
}

void InvDrawSlots__Fv() {
	int Bx;
	int By;
}

void PrintStat__FiiPcUc(int Y, int Txt0, char* Txt1, unsigned char Col) {
}

void DrawInvStats__Fv() {
	Dialog InvBack;
	char c;
	char chrstr[10];
	long mind;
	long maxd;
	int hper;
	int ac;
}

void DrawInvBack__Fv() {
	Dialog InvBack;
}

void DrawInvCursor__Fv() {
	int ItemX;
	int ItemY;
	int LoopX;
	int LoopY;
	OBJ_PFUNC Ft4;
	TextDat TData;
	int GoldAmount;
}

void DrawInvMsg__Fv() {
	OBJ_PFUNC Ft4;
	LPCRECT InfoRect;
	int InfoY;
	int InfoW;
	int InfoH;
	Dialog InvBack;
	int OldOt;
}

void DrawInvHelpTxt__Fv() {
	char TempStr[128];
}

void DrawInv__Fv() {
}

void DrawInvTSK__FP4TASK(TASK T) {
	int omp;
	int osel;
	CBlocks BgBlocks;
	int ThisIsShit;
	int OldPad;
	int OldOt;
}

void DoThatDrawInv__Fv() {
	int Loop;
	int ii;
	int ItemX;
	int ItemY;
	int ItemNo;
	LPCRECT ClipRect;
}

unsigned char AutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag) {
	unsigned char saveflag;
	int i;
	int j;
	int xx;
	int yy;
	unsigned char done;
}

unsigned char SpecialAutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag) {
	unsigned char saveflag;
	int i;
	int j;
	int xx;
	int yy;
	unsigned char done;
}

unsigned char GoldAutoPlace__Fi(int pnum) {
	int i;
	int ii;
	int xx;
	int yy;
	long gt;
	unsigned char done;
}

unsigned char WeaponAutoPlace__Fi(int pnum) {
}

int SwapItem__FP10ItemStructT0(ItemStruct a, ItemStruct b) {
	ItemStruct h;
}

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
	ItemStruct tempitem;
}

void CheckInvCut__Fiii(int pnum, int mx, int my) {
	int r;
	int ii;
	int iv;
}

void RemoveInvItem__Fii(int pnum, int iv) {
}

void RemoveSpdBarItem__Fii(int pnum, int iv) {
}

void CheckInvScrn__Fv() {
}

void CheckItemStats__Fi(int pnum) {
	PlayerStruct p;
}

void CheckBookLevel__Fi(int pnum) {
	int slvl;
}

void CheckQuestItem__Fi(int pnum) {
}

void InvGetItem__Fii(int pnum, int ii) {
	int j;
	int jj;
}

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

void SyncGetItem__FiiiUsi(int x, int y, int idx, unsigned short ci, int iseed) {
	int iseed;
	int ii;
	int j;
	int jj;
}

unsigned char TryInvPut__Fv() {
	int Dist;
	int d;
}

int InvPutItem__Fiii(int pnum, int x, int y) {
	int ii;
	unsigned char done;
	int Dist;
	int d;
}

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

char CheckInvHLight__Fv() {
	int r;
	char rv;
	ItemStruct pi;
	PlayerStruct p;
	int nGold;
}

void RemoveScroll__Fi(int pnum) {
	int i;
}

unsigned char UseScroll__Fv() {
	int i;
}

void UseStaffCharge__FP12PlayerStruct(PlayerStruct ptrplr) {
}

unsigned char UseStaff__Fv() {
}

void StartGoldDrop__Fv() {
}

unsigned char UseInvItem__Fii(int pnum, int cii) {
	int c;
	int idata;
	int it;
	ItemStruct Item;
	unsigned char speedlist;
}

void DoTelekinesis__Fv() {
}

long CalculateGold__Fi(int pnum) {
	int i;
	long gold;
}

unsigned char DropItemBeforeTrig__Fv() {
}

void ControlInv__Fv() {
}

void InvGetItemWH__Fi(int Pos) {
}

void InvAlignObject__Fv() {
}

void InvSetItemCurs__Fv() {
	int ItemNo;
}

void InvMoveCursLeft__Fv() {
	int ItemInc;
	int OldPos;
}

void InvMoveCursRight__Fv() {
	int ItemInc;
	int OldPos;
}

void InvMoveCursUp__Fv() {
	int ItemInc;
	int OldPos;
}

void InvMoveCursDown__Fv() {
	int ItemInc;
	int OldPos;
}

void FreeInvGFX__Fv() {
}

void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	OBJ_PFUNC Ft4;
}

void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	unsigned char Flag;
	OBJ_PFUNC Ft4;
}

void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	int TransFlag;
	OBJ_PFUNC Ft4;
	TextDat TData;
}

void InvDrawSlots__Fv() {
	int Bx;
	int By;
}

void PrintStat__FiiPcUc(int Y, int Txt0, char* Txt1, unsigned char Col) {
}

void DrawInvStats__Fv() {
	Dialog InvBack;
	char c;
	char chrstr[10];
	long mind;
	long maxd;
	int hper;
	int ac;
}

void DrawInvBack__Fv() {
	Dialog InvBack;
}

void DrawInvCursor__Fv() {
	int ItemX;
	int ItemY;
	int LoopX;
	int LoopY;
	OBJ_PFUNC Ft4;
	TextDat TData;
	int GoldAmount;
}

void DrawInvMsg__Fv() {
	OBJ_PFUNC Ft4;
	LPCRECT InfoRect;
	int InfoY;
	int InfoW;
	int InfoH;
	Dialog InvBack;
	int OldOt;
}

void DrawInvHelpTxt__Fv() {
	char TempStr[128];
}

void DrawInv__Fv() {
}

void DrawInvTSK__FP4TASK(TASK T) {
	int omp;
	int osel;
	CBlocks BgBlocks;
	int ThisIsShit;
	int OldPad;
	int OldOt;
}

void DoThatDrawInv__Fv() {
	int Loop;
	int ii;
	int ItemX;
	int ItemY;
	int ItemNo;
	LPCRECT ClipRect;
}

unsigned char AutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag) {
	unsigned char saveflag;
	int i;
	int j;
	int xx;
	int yy;
	unsigned char done;
}

unsigned char SpecialAutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag) {
	unsigned char saveflag;
	int i;
	int j;
	int xx;
	int yy;
	unsigned char done;
}

unsigned char GoldAutoPlace__Fi(int pnum) {
	int i;
	int ii;
	int xx;
	int yy;
	long gt;
	unsigned char done;
}

unsigned char WeaponAutoPlace__Fi(int pnum) {
}

int SwapItem__FP10ItemStructT0(ItemStruct a, ItemStruct b) {
	ItemStruct h;
}

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
	ItemStruct tempitem;
}

void CheckInvCut__Fiii(int pnum, int mx, int my) {
	int r;
	int ii;
	int iv;
}

void RemoveInvItem__Fii(int pnum, int iv) {
}

void RemoveSpdBarItem__Fii(int pnum, int iv) {
}

void CheckInvScrn__Fv() {
}

void CheckItemStats__Fi(int pnum) {
	PlayerStruct p;
}

void CheckBookLevel__Fi(int pnum) {
	int slvl;
}

void CheckQuestItem__Fi(int pnum) {
}

void InvGetItem__Fii(int pnum, int ii) {
	int j;
	int jj;
}

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

void SyncGetItem__FiiiUsi(int x, int y, int idx, unsigned short ci, int iseed) {
	int iseed;
	int ii;
	int j;
	int jj;
}

unsigned char TryInvPut__Fv() {
	int Dist;
	int d;
}

int InvPutItem__Fiii(int pnum, int x, int y) {
	int ii;
	unsigned char done;
	int Dist;
	int d;
}

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

char CheckInvHLight__Fv() {
	int r;
	char rv;
	ItemStruct pi;
	PlayerStruct p;
	int nGold;
}

void RemoveScroll__Fi(int pnum) {
	int i;
}

unsigned char UseScroll__Fv() {
	int i;
}

void UseStaffCharge__FP12PlayerStruct(PlayerStruct ptrplr) {
}

unsigned char UseStaff__Fv() {
}

void StartGoldDrop__Fv() {
}

unsigned char UseInvItem__Fii(int pnum, int cii) {
	int c;
	int idata;
	int it;
	ItemStruct Item;
	unsigned char speedlist;
}

void DoTelekinesis__Fv() {
}

long CalculateGold__Fi(int pnum) {
	int i;
	long gold;
}

unsigned char DropItemBeforeTrig__Fv() {
}

void ControlInv__Fv() {
}

void InvGetItemWH__Fi(int Pos) {
}

void InvAlignObject__Fv() {
}

void InvSetItemCurs__Fv() {
	int ItemNo;
}

void InvMoveCursLeft__Fv() {
	int ItemInc;
	int OldPos;
}

void InvMoveCursRight__Fv() {
	int ItemInc;
	int OldPos;
}

void InvMoveCursUp__Fv() {
	int ItemInc;
	int OldPos;
}

void InvMoveCursDown__Fv() {
	int ItemInc;
	int OldPos;
}


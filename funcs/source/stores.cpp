// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x800695A4
void FreeStoreMem__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x800695AC
void DrawSTextBack__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006961C
void DrawStoreArrows__Fv() {
	struct TextDat *PanelGfx;
	struct POLY_FT4 *Ft4;
	int OtPos;
	int Flagy;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006979C
void PrintSString__FiiUcPcci(int x, int y, unsigned char cjustflag, char *str, int col, int val) {
	char col;
	int val;
	int yy;
	char valstr[32];
	int SpinnerY;
	unsigned char R;
	unsigned char G;
	unsigned char B;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80069C44
void DrawSLine__Fi(int y) {
	int yy;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80069CD8
void ClearSText__Fii(int s, int e) {
	int i;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80069D70
void AddSLine__Fi(int y) {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80069DC0
void AddSTextVal__Fii(int y, int val) {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80069DE8
void OffsetSTextY__Fii(int y, int yo) {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80069E10
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
	char clr;
	unsigned char sel;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80069ECC
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	char sstr[128];
	int li;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006A408
unsigned char StoreAutoPlace__Fv() {
	int i;
	int w;
	int h;
	int idx;
	unsigned char done;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006AA50
void S_StartSmith__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006ABD8
void S_ScrollSBuy__Fi(int idx) {
	int l;
	int ls;
	char iclr;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006ADE0
void S_StartSBuy__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006AFB0
void S_ScrollSPBuy__Fi(int idx) {
	int l;
	char iclr;
	int boughtitems;
	char *StrPtr;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006B210
unsigned char S_StartSPBuy__Fv() {
	int i;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006B3D0
unsigned char SmithSellOk__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006B4B8
void S_ScrollSSell__Fi(int idx) {
	int l;
	int ls;
	int v;
	char iclr;
	int Jumpy;
	char *StrPtr;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006B70C
void S_StartSSell__Fv() {
	int i;
	unsigned char sellok;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006BB44
unsigned char SmithRepairOk__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006BBEC
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	int v;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006BDD4
void S_StartSRepair__Fv() {
	int i;
	unsigned char repairok;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006C2A4
void S_StartWitch__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006C42C
int CheckWitchItem__Fi(int idx) {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006C4D0
void S_ScrollWBuy__Fi(int idx) {
	int l;
	int ls;
	char iclr;
	int Jumpy;
	char *StrPtr;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006C714
void S_StartWBuy__Fv() {
	int i;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006CA68
unsigned char WitchSellOk__Fi(int i) {
	unsigned char rv;
	struct ItemStruct *pI;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006CBB4
void S_StartWSell__Fv() {
	int i;
	unsigned char sellok;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006D22C
unsigned char WitchRechargeOk__Fi(int i) {
	unsigned char rv;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006D2B8
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
	int i;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006D440
void S_StartWRecharge__Fv() {
	int i;
	unsigned char rechargeok;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006D870
void S_StartNoMoney__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006D8D8
void S_StartNoRoom__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006D938
void S_StartNoItems__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006D9EC
void S_StartConfirm__Fv() {
	char iclr;
	unsigned char idprint;
	char *StrPtr;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006DD54
void S_StartBoy__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006DEFC
void S_StartBBoy__Fv() {
	int iclr;
	char *StrPtr;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006E130
void S_StartHealer__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006E304
void S_ScrollHBuy__Fi(int idx) {
	int l;
	char *StrPtr;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006E4EC
void S_StartHBuy__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006E624
void S_StartStory__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006E714
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006E748
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
	int i;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006E824
void S_StartSIdentify__Fv() {
	int i;
	unsigned char idok;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006F2C4
void S_StartIdShow__Fv() {
	char iclr;
	char *StrPtr;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006F49C
void S_StartTalk__Fv() {
	int i;
	int tq;
	int sn;
	int la;
	int gl;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006F6CC
void S_StartTavern__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006F7C4
void S_StartBarMaid__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006F898
void S_StartDrunk__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006F96C
void StartStore__Fc(char s) {
	int i;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006FCC8
void DrawStoreHelpText__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006FD64
void DrawSText__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006FDA4
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8006FEAC
void DoThatDrawSText__Fv() {
	int i;
	int YOfs;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x800700B4
void STextESC__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80070258
void STextUp__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x800703DC
void STextDown__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80070570
void S_SmithEnter__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80070648
void SetGoldCurs__Fii(int pnum, int i) {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x800706C8
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80070748
void TakePlrsMoney__Fl(long cost) {
	int i;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80070B94
void SmithBuyItem__Fv() {
	int idx;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80070E14
void S_SBuyEnter__Fv() {
	int idx;
	int i;
	unsigned char done;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80071078
void SmithBuyPItem__Fv() {
	int idx;
	int i;
	int xx;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8007123C
void S_SPBuyEnter__Fv() {
	int idx;
	int i;
	unsigned char done;
	int xx;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x800714A8
unsigned char StoreGoldFit__Fi(int idx) {
	int sz;
	int numsqrs;
	int i;
	long cost;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80071760
void PlaceStoreGold__Fl(long v) {
	int i;
	int ii;
	int xx;
	int yy;
	unsigned char done;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80071A00
void StoreSellItem__Fv() {
	int idx;
	int i;
	long cost;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80071D44
void S_SSellEnter__Fv() {
	int idx;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80071E54
void SmithRepairItem__Fv() {
	int i;
	int idx;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x800720C8
void S_SRepairEnter__Fv() {
	int idx;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8007222C
void S_WitchEnter__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8007230C
void WitchBuyItem__Fv() {
	int idx;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80072590
void S_WBuyEnter__Fv() {
	int idx;
	int i;
	unsigned char done;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80072818
void S_WSellEnter__Fv() {
	int idx;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80072958
void WitchRechargeItem__Fv() {
	int i;
	int idx;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80072AD4
void S_WRechargeEnter__Fv() {
	int idx;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80072C38
void S_BoyEnter__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80072DD0
void BoyBuyItem__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80072E70
void HealerBuyItem__Fv() {
	int idx;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8007319C
void S_BBuyEnter__Fv() {
	int i;
	unsigned char done;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x800733B0
void StoryIdItem__Fv() {
	int i;
	int idx;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80073700
void S_ConfirmEnter__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x8007381C
void S_HealerEnter__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x800738B4
void S_HBuyEnter__Fv() {
	int idx;
	int i;
	unsigned char done;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80073AE8
void S_StoryEnter__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80073B84
void S_SIDEnter__Fv() {
	int idx;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80073D08
void S_TalkEnter__Fv() {
	int i;
	int tq;
	int sn;
	int la;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80073F08
void S_TavernEnter__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80073F7C
void S_BarmaidEnter__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80073FF0
void S_DrunkEnter__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80074064
void STextEnter__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80074228
void CheckStoreBtn__Fv() {
	struct CPad *Pad;
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80074314
void ReleaseStoreBtn__Fv() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80074328
void _GLOBAL_.D.pSTextBoxCels() {
}

// Path: C:\diabpsx\SOURCE\STORES.CPP
// Addr: 0x80074350
void _GLOBAL_.I.pSTextBoxCels() {
}


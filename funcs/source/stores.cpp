void FreeStoreMem__Fv() {
}

void DrawSTextBack__Fv() {
}

void DrawStoreArrows__Fv() {
	TextDat PanelGfx;
	OBJ_PFUNC Ft4;
	int OtPos;
	int Flagy;
}

void PrintSString__FiiUcPcci(int x, int y, unsigned char cjustflag, char* str, int col, int val) {
	char col;
	int val;
	int yy;
	char valstr[32];
	int SpinnerY;
	unsigned char R;
	unsigned char G;
	unsigned char B;
}

void DrawSLine__Fi(int y) {
	int yy;
}

void ClearSText__Fii(int s, int e) {
	int i;
}

void AddSLine__Fi(int y) {
}

void AddSTextVal__Fii(int y, int val) {
}

void OffsetSTextY__Fii(int y, int yo) {
}

void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char* str, int clr, int sel) {
	char clr;
	unsigned char sel;
}

void PrintStoreItem__FPC10ItemStructic(ItemStruct x, int l, char iclr) {
	char sstr[128];
	int li;
}

unsigned char StoreAutoPlace__Fv() {
	int i;
	int w;
	int h;
	int idx;
	unsigned char done;
}

void S_StartSmith__Fv() {
}

void S_ScrollSBuy__Fi(int idx) {
	int l;
	int ls;
	char iclr;
}

void S_StartSBuy__Fv() {
}

void S_ScrollSPBuy__Fi(int idx) {
	int l;
	char iclr;
	int boughtitems;
	char* StrPtr;
}

unsigned char S_StartSPBuy__Fv() {
	int i;
}

unsigned char SmithSellOk__Fi(int i) {
}

void S_ScrollSSell__Fi(int idx) {
	int l;
	int ls;
	int v;
	char iclr;
	int Jumpy;
	char* StrPtr;
}

void S_StartSSell__Fv() {
	int i;
	unsigned char sellok;
}

unsigned char SmithRepairOk__Fi(int i) {
}

void AddStoreHoldRepair__FP10ItemStructi(ItemStruct itm, int i) {
	int v;
}

void S_StartSRepair__Fv() {
	int i;
	unsigned char repairok;
}

void S_StartWitch__Fv() {
}

int CheckWitchItem__Fi(int idx) {
}

void S_ScrollWBuy__Fi(int idx) {
	int l;
	int ls;
	char iclr;
	int Jumpy;
	char* StrPtr;
}

void S_StartWBuy__Fv() {
	int i;
}

unsigned char WitchSellOk__Fi(int i) {
	unsigned char rv;
	ItemStruct pI;
}

void S_StartWSell__Fv() {
	int i;
	unsigned char sellok;
}

unsigned char WitchRechargeOk__Fi(int i) {
	unsigned char rv;
}

void AddStoreHoldRecharge__FG10ItemStructi(ItemStruct itm, int i) {
	int i;
}

void S_StartWRecharge__Fv() {
	int i;
	unsigned char rechargeok;
}

void S_StartNoMoney__Fv() {
}

void S_StartNoRoom__Fv() {
}

void S_StartNoItems__Fv() {
}

void S_StartConfirm__Fv() {
	char iclr;
	unsigned char idprint;
	char* StrPtr;
}

void S_StartBoy__Fv() {
}

void S_StartBBoy__Fv() {
	int iclr;
	char* StrPtr;
}

void S_StartHealer__Fv() {
}

void S_ScrollHBuy__Fi(int idx) {
	int l;
	char* StrPtr;
}

void S_StartHBuy__Fv() {
}

void S_StartStory__Fv() {
}

unsigned char IdItemOk__FP10ItemStruct(ItemStruct i) {
}

void AddStoreHoldId__FG10ItemStructi(ItemStruct itm, int i) {
	int i;
}

void S_StartSIdentify__Fv() {
	int i;
	unsigned char idok;
}

void S_StartIdShow__Fv() {
	char iclr;
	char* StrPtr;
}

void S_StartTalk__Fv() {
	int i;
	int tq;
	int sn;
	int la;
	int gl;
}

void S_StartTavern__Fv() {
}

void S_StartBarMaid__Fv() {
}

void S_StartDrunk__Fv() {
}

void StartStore__Fc(char s) {
	int i;
}

void DrawStoreHelpText__Fv() {
}

void DrawSText__Fv() {
}

void DrawSTextTSK__FP4TASK(TASK T) {
}

void DoThatDrawSText__Fv() {
	int i;
	int YOfs;
}

void STextESC__Fv() {
}

void STextUp__Fv() {
}

void STextDown__Fv() {
}

void S_SmithEnter__Fv() {
}

void SetGoldCurs__Fii(int pnum, int i) {
}

void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}

void TakePlrsMoney__Fl(long cost) {
	int i;
}

void SmithBuyItem__Fv() {
	int idx;
}

void S_SBuyEnter__Fv() {
	int idx;
	int i;
	unsigned char done;
}

void SmithBuyPItem__Fv() {
	int idx;
	int i;
	int xx;
}

void S_SPBuyEnter__Fv() {
	int idx;
	int i;
	unsigned char done;
	int xx;
}

unsigned char StoreGoldFit__Fi(int idx) {
	int sz;
	int numsqrs;
	int i;
	long cost;
}

void PlaceStoreGold__Fl(long v) {
	int i;
	int ii;
	int xx;
	int yy;
	unsigned char done;
}

void StoreSellItem__Fv() {
	int idx;
	int i;
	long cost;
}

void S_SSellEnter__Fv() {
	int idx;
}

void SmithRepairItem__Fv() {
	int i;
	int idx;
}

void S_SRepairEnter__Fv() {
	int idx;
}

void S_WitchEnter__Fv() {
}

void WitchBuyItem__Fv() {
	int idx;
}

void S_WBuyEnter__Fv() {
	int idx;
	int i;
	unsigned char done;
}

void S_WSellEnter__Fv() {
	int idx;
}

void WitchRechargeItem__Fv() {
	int i;
	int idx;
}

void S_WRechargeEnter__Fv() {
	int idx;
}

void S_BoyEnter__Fv() {
}

void BoyBuyItem__Fv() {
}

void HealerBuyItem__Fv() {
	int idx;
}

void S_BBuyEnter__Fv() {
	int i;
	unsigned char done;
}

void StoryIdItem__Fv() {
	int i;
	int idx;
}

void S_ConfirmEnter__Fv() {
}

void S_HealerEnter__Fv() {
}

void S_HBuyEnter__Fv() {
	int idx;
	int i;
	unsigned char done;
}

void S_StoryEnter__Fv() {
}

void S_SIDEnter__Fv() {
	int idx;
}

void S_TalkEnter__Fv() {
	int i;
	int tq;
	int sn;
	int la;
}

void S_TavernEnter__Fv() {
}

void S_BarmaidEnter__Fv() {
}

void S_DrunkEnter__Fv() {
}

void STextEnter__Fv() {
}

void CheckStoreBtn__Fv() {
	CPad Pad;
}

void ReleaseStoreBtn__Fv() {
}

void _GLOBAL_.D.pSTextBoxCels() {
}

void _GLOBAL_.I.pSTextBoxCels() {
}

void FreeStoreMem__Fv() {
}

void DrawSTextBack__Fv() {
}

void DrawStoreArrows__Fv() {
	TextDat PanelGfx;
	OBJ_PFUNC Ft4;
	int OtPos;
	int Flagy;
}

void PrintSString__FiiUcPcci(int x, int y, unsigned char cjustflag, char* str, int col, int val) {
	char col;
	int val;
	int yy;
	char valstr[32];
	int SpinnerY;
	unsigned char R;
	unsigned char G;
	unsigned char B;
}

void DrawSLine__Fi(int y) {
	int yy;
}

void ClearSText__Fii(int s, int e) {
	int i;
}

void AddSLine__Fi(int y) {
}

void AddSTextVal__Fii(int y, int val) {
}

void OffsetSTextY__Fii(int y, int yo) {
}

void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char* str, int clr, int sel) {
	char clr;
	unsigned char sel;
}

void PrintStoreItem__FPC10ItemStructic(ItemStruct x, int l, char iclr) {
	char sstr[128];
	int li;
}

unsigned char StoreAutoPlace__Fv() {
	int i;
	int w;
	int h;
	int idx;
	unsigned char done;
}

void S_StartSmith__Fv() {
}

void S_ScrollSBuy__Fi(int idx) {
	int l;
	int ls;
	char iclr;
}

void S_StartSBuy__Fv() {
}

void S_ScrollSPBuy__Fi(int idx) {
	int l;
	char iclr;
	int boughtitems;
	char* StrPtr;
}

unsigned char S_StartSPBuy__Fv() {
	int i;
}

unsigned char SmithSellOk__Fi(int i) {
}

void S_ScrollSSell__Fi(int idx) {
	int l;
	int ls;
	int v;
	char iclr;
	int Jumpy;
	char* StrPtr;
}

void S_StartSSell__Fv() {
	int i;
	unsigned char sellok;
}

unsigned char SmithRepairOk__Fi(int i) {
}

void AddStoreHoldRepair__FP10ItemStructi(ItemStruct itm, int i) {
	int v;
}

void S_StartSRepair__Fv() {
	int i;
	unsigned char repairok;
}

void S_StartWitch__Fv() {
}

int CheckWitchItem__Fi(int idx) {
}

void S_ScrollWBuy__Fi(int idx) {
	int l;
	int ls;
	char iclr;
	int Jumpy;
	char* StrPtr;
}

void S_StartWBuy__Fv() {
	int i;
}

unsigned char WitchSellOk__Fi(int i) {
	unsigned char rv;
	ItemStruct pI;
}

void S_StartWSell__Fv() {
	int i;
	unsigned char sellok;
}

unsigned char WitchRechargeOk__Fi(int i) {
	unsigned char rv;
}

void AddStoreHoldRecharge__FG10ItemStructi(ItemStruct itm, int i) {
	int i;
}

void S_StartWRecharge__Fv() {
	int i;
	unsigned char rechargeok;
}

void S_StartNoMoney__Fv() {
}

void S_StartNoRoom__Fv() {
}

void S_StartNoItems__Fv() {
}

void S_StartConfirm__Fv() {
	char iclr;
	unsigned char idprint;
	char* StrPtr;
}

void S_StartBoy__Fv() {
}

void S_StartBBoy__Fv() {
	int iclr;
	char* StrPtr;
}

void S_StartHealer__Fv() {
}

void S_ScrollHBuy__Fi(int idx) {
	int l;
	char* StrPtr;
}

void S_StartHBuy__Fv() {
}

void S_StartStory__Fv() {
}

unsigned char IdItemOk__FP10ItemStruct(ItemStruct i) {
}

void AddStoreHoldId__FG10ItemStructi(ItemStruct itm, int i) {
	int i;
}

void S_StartSIdentify__Fv() {
	int i;
	unsigned char idok;
}

void S_StartIdShow__Fv() {
	char iclr;
	char* StrPtr;
}

void S_StartTalk__Fv() {
	int i;
	int tq;
	int sn;
	int la;
	int gl;
}

void S_StartTavern__Fv() {
}

void S_StartBarMaid__Fv() {
}

void S_StartDrunk__Fv() {
}

void StartStore__Fc(char s) {
	int i;
}

void DrawStoreHelpText__Fv() {
}

void DrawSText__Fv() {
}

void DrawSTextTSK__FP4TASK(TASK T) {
}

void DoThatDrawSText__Fv() {
	int i;
	int YOfs;
}

void STextESC__Fv() {
}

void STextUp__Fv() {
}

void STextDown__Fv() {
}

void S_SmithEnter__Fv() {
}

void SetGoldCurs__Fii(int pnum, int i) {
}

void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}

void TakePlrsMoney__Fl(long cost) {
	int i;
}

void SmithBuyItem__Fv() {
	int idx;
}

void S_SBuyEnter__Fv() {
	int idx;
	int i;
	unsigned char done;
}

void SmithBuyPItem__Fv() {
	int idx;
	int i;
	int xx;
}

void S_SPBuyEnter__Fv() {
	int idx;
	int i;
	unsigned char done;
	int xx;
}

unsigned char StoreGoldFit__Fi(int idx) {
	int sz;
	int numsqrs;
	int i;
	long cost;
}

void PlaceStoreGold__Fl(long v) {
	int i;
	int ii;
	int xx;
	int yy;
	unsigned char done;
}

void StoreSellItem__Fv() {
	int idx;
	int i;
	long cost;
}

void S_SSellEnter__Fv() {
	int idx;
}

void SmithRepairItem__Fv() {
	int i;
	int idx;
}

void S_SRepairEnter__Fv() {
	int idx;
}

void S_WitchEnter__Fv() {
}

void WitchBuyItem__Fv() {
	int idx;
}

void S_WBuyEnter__Fv() {
	int idx;
	int i;
	unsigned char done;
}

void S_WSellEnter__Fv() {
	int idx;
}

void WitchRechargeItem__Fv() {
	int i;
	int idx;
}

void S_WRechargeEnter__Fv() {
	int idx;
}

void S_BoyEnter__Fv() {
}

void BoyBuyItem__Fv() {
}

void HealerBuyItem__Fv() {
	int idx;
}

void S_BBuyEnter__Fv() {
	int i;
	unsigned char done;
}

void StoryIdItem__Fv() {
	int i;
	int idx;
}

void S_ConfirmEnter__Fv() {
}

void S_HealerEnter__Fv() {
}

void S_HBuyEnter__Fv() {
	int idx;
	int i;
	unsigned char done;
}

void S_StoryEnter__Fv() {
}

void S_SIDEnter__Fv() {
	int idx;
}

void S_TalkEnter__Fv() {
	int i;
	int tq;
	int sn;
	int la;
}

void S_TavernEnter__Fv() {
}

void S_BarmaidEnter__Fv() {
}

void S_DrunkEnter__Fv() {
}

void STextEnter__Fv() {
}

void CheckStoreBtn__Fv() {
	CPad Pad;
}

void ReleaseStoreBtn__Fv() {
}

void _GLOBAL_.D.pSTextBoxCels() {
}

void _GLOBAL_.I.pSTextBoxCels() {
}


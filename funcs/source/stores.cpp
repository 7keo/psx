// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x800695A4
void FreeStoreMem__Fv() {
}


// address: 0x800695AC
void DrawSTextBack__Fv() {
}


// address: 0x8006961C
void DrawStoreArrows__Fv() {
	// register: 16
	// size: 0x70
	register struct TextDat *PanelGfx;
	// register: 6
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 17
	register int OtPos;
	// register: 5
	register int Flagy;
}


// address: 0x8006979C
void PrintSString__FiiUcPcci(int x, int y, unsigned char cjustflag, char *str, int col, int val) {
	// register: 16
	register int yy;
	// address: 0xFFFFFFA8
	// size: 0x20
	auto char valstr[32];
	// register: 30
	register int SpinnerY;
	// register: 19
	register unsigned char R;
	// register: 18
	register unsigned char G;
	// register: 17
	register unsigned char B;
	// address: 0x8011BAA8
	static unsigned char DaveFix;
}


// address: 0x80069C44
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80069CD8
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80069D70
void AddSLine__Fi(int y) {
}


// address: 0x80069DC0
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80069DE8
void OffsetSTextY__Fii(int y, int yo) {
}


// address: 0x80069E10
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80069ECC
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 22
	register int li;
}


// address: 0x8006A408
unsigned char StoreAutoPlace__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int w;
	// register: 19
	register int h;
	// register: 5
	register int idx;
	// register: 4
	register unsigned char done;
}


// address: 0x8006AA50
void S_StartSmith__Fv() {
}


// address: 0x8006ABD8
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 16
	register char iclr;
}


// address: 0x8006ADE0
void S_StartSBuy__Fv() {
}


// address: 0x8006AFB0
void S_ScrollSPBuy__Fi(int idx) {
	// register: 19
	register int l;
	// register: 18
	register char iclr;
	// register: 4
	register int boughtitems;
	{
		{
			{
				{
					// register: 16
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x8006B210
unsigned char S_StartSPBuy__Fv() {
	// register: 17
	register int i;
}


// address: 0x8006B3D0
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x8006B4B8
void S_ScrollSSell__Fi(int idx) {
	// register: 20
	register int l;
	// register: 23
	register int ls;
	// register: 19
	register int v;
	// register: 16
	register char iclr;
	// register: 30
	register int Jumpy;
	{
		{
			{
				{
					// register: 18
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x8006B70C
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x8006BB44
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x8006BBEC
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x8006BDD4
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x8006C2A4
void S_StartWitch__Fv() {
}


// address: 0x8006C42C
int CheckWitchItem__Fi(int idx) {
}


// address: 0x8006C4D0
void S_ScrollWBuy__Fi(int idx) {
	// register: 18
	register int l;
	// register: 21
	register int ls;
	// register: 16
	register char iclr;
	// register: 22
	register int Jumpy;
	{
		{
			{
				{
					// register: 17
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x8006C714
void S_StartWBuy__Fv() {
	// register: 17
	register int i;
}


// address: 0x8006CA68
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 4
	// size: 0x6C
	register struct ItemStruct *pI;
}


// address: 0x8006CBB4
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x8006D22C
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
}


// address: 0x8006D2B8
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006D440
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x8006D870
void S_StartNoMoney__Fv() {
}


// address: 0x8006D8D8
void S_StartNoRoom__Fv() {
}


// address: 0x8006D938
void S_StartNoItems__Fv() {
}


// address: 0x8006D9EC
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
	// register: 17
	register char *StrPtr;
}


// address: 0x8006DD54
void S_StartBoy__Fv() {
}


// address: 0x8006DEFC
void S_StartBBoy__Fv() {
	// register: 16
	register int iclr;
	// register: 17
	register char *StrPtr;
}


// address: 0x8006E130
void S_StartHealer__Fv() {
}


// address: 0x8006E304
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
	{
		{
			{
				{
					// register: 17
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x8006E4EC
void S_StartHBuy__Fv() {
}


// address: 0x8006E624
void S_StartStory__Fv() {
}


// address: 0x8006E714
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x8006E748
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006E824
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006F2C4
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006F49C
void S_StartTalk__Fv() {
	// register: 18
	register int i;
	// register: 5
	register int tq;
	// register: 17
	register int sn;
	// register: 22
	register int la;
	// register: 20
	register int gl;
}


// address: 0x8006F6CC
void S_StartTavern__Fv() {
}


// address: 0x8006F7C4
void S_StartBarMaid__Fv() {
}


// address: 0x8006F898
void S_StartDrunk__Fv() {
}


// address: 0x8006F96C
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x8006FCC8
void DrawStoreHelpText__Fv() {
}


// address: 0x8006FD64
void DrawSText__Fv() {
}


// address: 0x8006FDA4
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8006FEAC
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
	// register: 18
	register int YOfs;
}


// address: 0x800700B4
void STextESC__Fv() {
}


// address: 0x80070258
void STextUp__Fv() {
}


// address: 0x800703DC
void STextDown__Fv() {
}


// address: 0x80070570
void S_SmithEnter__Fv() {
}


// address: 0x80070648
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800706C8
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80070748
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80070B94
void SmithBuyItem__Fv() {
	// register: 9
	register int idx;
}


// address: 0x80070E14
void S_SBuyEnter__Fv() {
	// register: 9
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80071078
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 4
	register int xx;
}


// address: 0x8007123C
void S_SPBuyEnter__Fv() {
	// register: 9
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
	{
		// register: 4
		register int xx;
	}
}


// address: 0x800714A8
unsigned char StoreGoldFit__Fi(int idx) {
	// register: 18
	register int sz;
	// register: 16
	register int numsqrs;
	// register: 4
	register int i;
	// register: 17
	register long cost;
}


// address: 0x80071760
void PlaceStoreGold__Fl(long v) {
	// register: 16
	register int i;
	// register: 18
	register int ii;
	// register: 19
	register int xx;
	// register: 17
	register int yy;
	// register: 5
	register unsigned char done;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80071A00
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x80071D44
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80071E54
void SmithRepairItem__Fv() {
	// register: 4
	register int i;
	// register: 4
	register int idx;
}


// address: 0x800720C8
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8007222C
void S_WitchEnter__Fv() {
}


// address: 0x8007230C
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x80072590
void S_WBuyEnter__Fv() {
	// register: 8
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80072818
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80072958
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x80072AD4
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80072C38
void S_BoyEnter__Fv() {
}


// address: 0x80072DD0
void BoyBuyItem__Fv() {
}


// address: 0x80072E70
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8007319C
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x800733B0
void StoryIdItem__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int idx;
}


// address: 0x80073700
void S_ConfirmEnter__Fv() {
}


// address: 0x8007381C
void S_HealerEnter__Fv() {
}


// address: 0x800738B4
void S_HBuyEnter__Fv() {
	// register: 9
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80073AE8
void S_StoryEnter__Fv() {
}


// address: 0x80073B84
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80073D08
void S_TalkEnter__Fv() {
	// register: 16
	register int i;
	// register: 5
	register int tq;
	// register: 18
	register int sn;
	// register: 21
	register int la;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80073F08
void S_TavernEnter__Fv() {
}


// address: 0x80073F7C
void S_BarmaidEnter__Fv() {
}


// address: 0x80073FF0
void S_DrunkEnter__Fv() {
}


// address: 0x80074064
void STextEnter__Fv() {
}


// address: 0x80074228
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0xEC
	register struct CPad *Pad;
}


// address: 0x80074314
void ReleaseStoreBtn__Fv() {
}


// address: 0x80074328
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x80074350
void _GLOBAL__I_pSTextBoxCels() {
}



// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x800633E8
void FreeStoreMem__Fv() {
}


// address: 0x800633F0
void DrawSTextBack__Fv() {
}


// address: 0x80063460
void PrintSString__FiiUcPcci(int x, int y, unsigned char cjustflag, char *str, int col, int val) {
	// register: 21
	register int xx;
	// register: 19
	register int yy;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto char valstr[32];
	// register: 30
	register int SpinnerY;
	// register: 20
	register unsigned char R;
	// register: 18
	register unsigned char G;
	// register: 17
	register unsigned char B;
	// address: 0x8012B508
	static unsigned char DaveFix;
}


// address: 0x80063838
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x800638CC
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063964
void AddSLine__Fi(int y) {
}


// address: 0x800639B4
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x800639DC
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063A90
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x80063F18
void StoreAutoPlace__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int w;
	// register: 19
	register int h;
	// register: 3
	register int idx;
	// register: 4
	register unsigned char done;
}


// address: 0x80064538
void S_StartSmith__Fv() {
}


// address: 0x800646C0
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80064878
void S_StartSBuy__Fv() {
}


// address: 0x800649A8
void S_ScrollSPBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 22
	register int ls;
	// register: 16
	register char iclr;
	// register: 3
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


// address: 0x80064BC8
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064D18
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064DFC
void S_ScrollSSell__Fi(int idx) {
	// register: 19
	register int l;
	// register: 23
	register int ls;
	// register: 20
	register int v;
	// register: 18
	register char iclr;
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


// address: 0x80065024
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80065454
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x800654F8
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x800656D8
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065BA8
void S_StartWitch__Fv() {
}


// address: 0x80065CE8
void S_ScrollWBuy__Fi(int idx) {
	// register: 19
	register int l;
	// register: 21
	register int ls;
	// register: 18
	register char iclr;
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


// address: 0x80065EC0
void S_StartWBuy__Fv() {
}


// address: 0x80065FEC
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80066110
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80066768
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x800667F0
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066970
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066D90
void S_StartNoMoney__Fv() {
}


// address: 0x80066DF8
void S_StartNoRoom__Fv() {
}


// address: 0x80066E58
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x800671A8
void S_StartBoy__Fv() {
}


// address: 0x80067338
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x80067494
void S_StartHealer__Fv() {
}


// address: 0x80067668
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x800677D4
void S_StartHBuy__Fv() {
}


// address: 0x800678F4
void S_StartStory__Fv() {
}


// address: 0x800679E4
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067A18
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067AEC
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006854C
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80068720
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


// address: 0x80068950
void S_StartTavern__Fv() {
}


// address: 0x80068A48
void S_StartBarMaid__Fv() {
}


// address: 0x80068B1C
void S_StartDrunk__Fv() {
}


// address: 0x80068BF0
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80068EE0
void DrawSText__Fv() {
}


// address: 0x80068F20
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80068FE8
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80069194
void STextESC__Fv() {
}


// address: 0x80069310
void STextUp__Fv() {
}


// address: 0x80069498
void STextDown__Fv() {
}


// address: 0x80069630
void S_SmithEnter__Fv() {
}


// address: 0x80069704
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069780
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800697FC
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069C48
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80069E3C
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A060
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006A1E8
void S_SPBuyEnter__Fv() {
	// register: 5
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
	{
		// register: 3
		register int xx;
	}
}


// address: 0x8006A418
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


// address: 0x8006A6D0
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


// address: 0x8006A934
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006AC28
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006AD2C
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006AF9C
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B0F8
void S_WitchEnter__Fv() {
}


// address: 0x8006B1A8
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B3A8
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B594
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B698
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B810
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B96C
void S_BoyEnter__Fv() {
}


// address: 0x8006BAA4
void BoyBuyItem__Fv() {
}


// address: 0x8006BB28
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BDCC
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006BFA4
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006C2F0
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C40C
void S_HealerEnter__Fv() {
}


// address: 0x8006C4A4
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C6B0
void S_StoryEnter__Fv() {
}


// address: 0x8006C748
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C8C4
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


// address: 0x8006CABC
void S_TavernEnter__Fv() {
}


// address: 0x8006CB2C
void S_BarmaidEnter__Fv() {
}


// address: 0x8006CB9C
void S_DrunkEnter__Fv() {
}


// address: 0x8006CC0C
void STextEnter__Fv() {
}


// address: 0x8006CE0C
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006CF28
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006CF3C
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006CF64
void _GLOBAL__I_pSTextBoxCels() {
}



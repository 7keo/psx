// C:\diabpsx\PSXSRC\DAVEO.CPP

#include "types.h"

// address: 0x8008463C
void ReadPad__Fi(int NoDeb) {
	// register: 16
	// size: 0xEC
	register struct CPad *DPad;
	// register: 2
	register int New;
	// register: 4
	register int cmem;
	// register: 5
	register int p1mema;
	// register: 6
	register int p1memb;
	// register: 7
	register int p2mema;
	// register: 8
	register int p2memb;
	// register: 9
	register int diffm;
}


// address: 0x800847C4
void DummyPoll__Fv() {
}


// address: 0x800847CC
void DaveOwens__Fv() {
}


// address: 0x800847D4
void DaveCentreStuff__Fv() {
	// address: 0xFFFFFFC0
	// size: 0x28
	auto char TempStr[40];
}


// address: 0x8008491C
void PlaceStoreGold2__Fil(int myplr, long v) {
	// register: 17
	register int i;
	// register: 20
	register int ii;
	// register: 22
	register int xx;
	// register: 19
	register int yy;
	// register: 4
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


// address: 0x80084B44
void GivePlayerDosh__Fil(int PlayerNo, long cost) {
	// register: 18
	register int i;
}


// address: 0x80084CF8
int CalcItemVal__FP10ItemStruct(struct ItemStruct *Item) {
	// register: 2
	register int cost;
}


// address: 0x80084D54
void RemoveDupInvItem__Fii(int pnum, int iv) {
}


// address: 0x80084F44
long DetectDup__FP10ItemStructi(struct ItemStruct *Item, int PlayerNo) {
	// register: 6
	register long Value;
	// register: 3
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 17
	register int i;
	// register: 18
	register int InvItem;
	// register: 21
	register long DupSell;
	// register: 19
	register unsigned char Flag;
}


// address: 0x800851C0
void WinterSales__Fi(int PlayerNo) {
	// register: 16
	register int Value;
	// register: 17
	register int i;
	// register: 18
	register int InvItem;
	// register: 19
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 21
	register unsigned char Flag;
}


// address: 0x800853FC
int SpecUn__FP10ItemStruct(struct ItemStruct *pi) {
	// register: 5
	register int MrHappy;
}


// address: 0x800854D0
void EnableQuestItemsPleeeeeeeeeeeeeeeeeez__Fv() {
	// register: 3
	register int Uid;
}


// address: 0x80085518
void KeefDaFeef__Fi(int PlayerNo) {
	// register: 18
	register int i;
	// register: 20
	register int InvItem;
	// register: 16
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 19
	register unsigned char Flag;
}


// address: 0x800857F8
void ClearQuestFlags__Fv() {
}



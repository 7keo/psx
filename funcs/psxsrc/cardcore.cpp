// C:\diabpsx\PSXSRC\CARDCORE.CPP

#include "types.h"

// address: 0x800A5004
void init_mem_card__FPFii_vUc(void (*handler)(), unsigned char read_dir) {
}


// address: 0x800A523C
void memcard_event__Fii(int evt, int side) {
}


// address: 0x800A5274
void init_card__Fib(int card_number, bool read_dir) {
}


// address: 0x800A5340
int ping_card__Fi(int card_number) {
}


// address: 0x800A53D4
void DealWithCard__Fi(int side) {
}


// address: 0x800A5498
void CardUpdateTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int toggle;
}


// address: 0x800A54EC
void MemcardON__Fv() {
}


// address: 0x800A5558
void MemcardOFF__Fv() {
}


// address: 0x800A5590
void CheckSavedOptions__Fv() {
	// register: 2
	register int option_file;
}


// address: 0x800A5690
void card_removed__Fi(int card_number) {
}


// address: 0x800A56C8
int read_card_block__Fii(int card_number, int block) {
}


// address: 0x800A5710
int test_hw_event__Fv() {
}


// address: 0x800A5790
void ActivateMemcard__Fii(int card1, int card2) {
}


// address: 0x800A57CC
void ActivateCharacterMemcard__Fii(int card1, int card2) {
	{
		{
			// register: 5
			register int fileno;
			{
				{
				}
			}
		}
	}
}


// address: 0x800A5888
void ShowCardActionText__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT um;
	// register: 3
	register int X;
	// register: 17
	register int Y;
	// register: 18
	register int W;
	// register: 20
	register int H;
	// register: 16
	register int otpos;
	// address: 0xFFFFFFC8
	auto int oldBot;
	// register: 23
	register int oldTot;
	// register: 19
	register int lines;
	// register: 16
	register int yprintpos;
	{
		{
			{
			}
		}
	}
}


// address: 0x800A5B6C
int CountdownLoad__Fi(int Counter) {
	{
		{
			{
				// register: 3
				register int readstate;
				{
					{
						// register: 3
						register int readstate;
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x800A5D7C
int CountdownSave__Fi(int Counter) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto int cardstate[2];
}


// address: 0x800A5E5C
void ShowLoadingBox__Fi(int Text) {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT um;
	// register: 21
	register bool addwaitmsg;
	// register: 19
	register int W;
	// register: 20
	register int H;
	// register: 3
	register int X;
	// register: 18
	register int Y;
	// register: 16
	register int otpos;
	// address: 0xFFFFFFC8
	auto int oldBot;
	// register: 30
	register int oldTot;
	// register: 3
	register int lines;
	// register: 18
	register int topline;
	// register: 20
	register int yprintpos;
}


// address: 0x800A60E8
void KillItemDead__Fiii(int pnum, int InvPos, int Idx) {
	// register: 9
	register int ii;
	// register: 9
	register int iv;
}


// address: 0x800A672C
void ClearLoadCharItems__Fv() {
	// register: 16
	register int i;
}


// address: 0x800A67B4
void PantsDelay__Fv() {
	{
		// register: 16
		register int i;
	}
}



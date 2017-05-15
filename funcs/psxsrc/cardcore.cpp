// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A5004
void init_mem_card__FPFii_vUc(void (*handler)(), unsigned char read_dir) {
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A523C
void memcard_event__Fii(int evt, int side) {
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A5274
void init_card__Fib(int card_number, unknown read_dir) {
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A5340
int ping_card__Fi(int card_number) {
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A53D4
void DealWithCard__Fi(int side) {
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A5498
void CardUpdateTask__FP4TASK(struct TASK *T) {
	int toggle;
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A54EC
void MemcardON__Fv() {
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A5558
void MemcardOFF__Fv() {
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A5590
void CheckSavedOptions__Fv() {
	int option_file;
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A5690
void card_removed__Fi(int card_number) {
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A56C8
int read_card_block__Fii(int card_number, int block) {
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A5710
int test_hw_event__Fv() {
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A5790
void ActivateMemcard__Fii(int card1, int card2) {
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A57CC
void ActivateCharacterMemcard__Fii(int card1, int card2) {
	int fileno;
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A5888
void ShowCardActionText__Fv() {
	struct Dialog SBack;
	struct RECT um;
	int X;
	int Y;
	int W;
	int H;
	int otpos;
	int oldBot;
	int oldTot;
	int lines;
	int yprintpos;
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A5B6C
int CountdownLoad__Fi(int Counter) {
	int readstate;
	int readstate;
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A5D7C
int CountdownSave__Fi(int Counter) {
	int cardstate[2];
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A5E5C
void ShowLoadingBox__Fi(int Text) {
	struct Dialog SBack;
	struct RECT um;
	unknown addwaitmsg;
	int W;
	int H;
	int X;
	int Y;
	int otpos;
	int oldBot;
	int oldTot;
	int lines;
	int topline;
	int yprintpos;
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A60E8
void KillItemDead__Fiii(int pnum, int InvPos, int Idx) {
	int ii;
	int iv;
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A672C
void ClearLoadCharItems__Fv() {
	int i;
}

// Path: C:\diabpsx\PSXSRC\CARDCORE.CPP
// Addr: 0x800A67B4
void PantsDelay__Fv() {
	int i;
}


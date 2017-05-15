// Path: C:\diabpsx\PSXSRC\KANJI.CPP
// Addr: 0x800AD218
void LoadKanjiFont__FPc(char *name) {
	struct FileIO *Fs;
}

// Path: C:\diabpsx\PSXSRC\KANJI.CPP
// Addr: 0x800AD2C4
void FreeKanji__Fv() {
}

// Path: C:\diabpsx\PSXSRC\KANJI.CPP
// Addr: 0x800AD2D0
void ClearKanjiCount__Fv() {
	struct vbuffS *kl;
	int i;
}

// Path: C:\diabpsx\PSXSRC\KANJI.CPP
// Addr: 0x800AD308
void ClearKanjiBuffer__Fv() {
	struct vbuffS *kl;
	int i;
}

// Path: C:\diabpsx\PSXSRC\KANJI.CPP
// Addr: 0x800AD34C
void KANJI_SetCache__F10KANJI_FRMS(enum KANJI_FRMS ct) {
	struct CBlocks *BgBlocks;
	struct TextDat *Dat;
	struct TextDat *Dat;
}

// Path: C:\diabpsx\PSXSRC\KANJI.CPP
// Addr: 0x800AD5D8
void LoadKanji__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
}

// Path: C:\diabpsx\PSXSRC\KANJI.CPP
// Addr: 0x800AD708
unknown SetKanjiLoaded__Fb(unknown loaded) {
	unknown iret;
}

// Path: C:\diabpsx\PSXSRC\KANJI.CPP
// Addr: 0x800AD718
unknown IsKanjiLoaded__Fv() {
}

// Path: C:\diabpsx\PSXSRC\KANJI.CPP
// Addr: 0x800AD724
void KanjiSetTSK__FP4TASK(struct TASK *T) {
	struct DEF_ARGS *args;
	enum LANG_DB_NO NewLangDbNo;
}

// Path: C:\diabpsx\PSXSRC\KANJI.CPP
// Addr: 0x800AD77C
void KANJI_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	struct TASK *T;
	struct DEF_ARGS *args;
}

// Path: C:\diabpsx\PSXSRC\KANJI.CPP
// Addr: 0x800AD7F4
int inmem__Fs(short k) {
	struct vbuffS *kl;
	int i;
}

// Path: C:\diabpsx\PSXSRC\KANJI.CPP
// Addr: 0x800AD87C
unsigned short getb__FUs(unsigned short n) {
}

// Path: C:\diabpsx\PSXSRC\KANJI.CPP
// Addr: 0x800AD88C
void ShadeBuff__FPUcii(unsigned char *b, int col, int border) {
	int y;
	int x;
}

// Path: C:\diabpsx\PSXSRC\KANJI.CPP
// Addr: 0x800ADA34
void Crunch__FPUcT0(unsigned char *s, unsigned char *db) {
	int c;
	unsigned short *d;
	int y;
	int x;
}

// Path: C:\diabpsx\PSXSRC\KANJI.CPP
// Addr: 0x800ADAA8
void _get_font__FPUcUsT0(unsigned char *d, unsigned short num, unsigned char *abuff) {
	unsigned char *bp;
	long i;
	char bcy;
	char shift;
}

// Path: C:\diabpsx\PSXSRC\KANJI.CPP
// Addr: 0x800ADB68
int getfreekan__Fv() {
	unsigned char max;
	int n;
	struct vbuffS *kl;
	int i;
}

// Path: C:\diabpsx\PSXSRC\KANJI.CPP
// Addr: 0x800ADC20
enum KANJI_FRMS GetKanjiCacheFrm__Fv() {
}

// Path: C:\diabpsx\PSXSRC\KANJI.CPP
// Addr: 0x800ADC2C
struct POLY_FT4* GetKanjiFrm__FUs(unsigned short kan) {
	struct POLY_FT4 *ft4;
	int im;
	struct RECT r;
	unsigned char deBuff[144];
	unsigned char dekbuff[144];
	struct vbuffS *kl;
	struct TextDat *Dat;
	int TpX;
	int TpY;
	unsigned char *kbuff;
	unsigned char *kanjbuff;
	int U;
	int V;
}


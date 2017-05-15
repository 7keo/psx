// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800A68D0
void PrintSelectBack__FUs(unsigned short Str) {
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800A6960
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	int Y;
	int W;
	int H;
	struct Dialog DBack;
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800A6A44
void DrawSpinner__FiiUcUcUciiibiT8T8Uc(int x, int y, unsigned char SpinR, unsigned char SpinG, int SpinB, int spinradius, int spinbright, int angle, unknown Sparkle, int OtPos, unknown cross, unknown iso, int SinStep) {
	unsigned char SpinB;
	int spinradius;
	int spinbright;
	unknown Sparkle;
	unsigned char SinStep;
	struct POLY_FT4 *FT4;
	struct POLY_GT4 *GT4;
	struct TextDat *ThisDat;
	unsigned char rand;
	int f;
	unsigned short bright;
	unsigned short r;
	unsigned short g;
	unsigned short b;
	unsigned short r2;
	unsigned short g2;
	unsigned short b2;
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
	int radius;
	int i;
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800A70C0
void SetLoadedLang__F9LANG_TYPE(enum LANG_TYPE LoadLang) {
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800A7170
void ChangeLang__Fv() {
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800A7234
void DrawLeftRight__Fv() {
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800A723C
void PrintMono__Fi(int ypos) {
	char *String;
	int len;
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800A72F4
void DrawMenu__Fi(int MenuNo) {
	struct OMENULIST *mptr;
	struct OMENUITEM *iptr;
	int sh;
	struct POLY_G4 *G4;
	int yoff;
	int len;
	int depth;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	int mx;
	int my;
	int BARFRAC;
	int mptrx;
	int mptry;
	int i;
	int sxp;
	int syp;
	unsigned char barg;
	unsigned char barr;
	int cx;
	int cy;
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800A8314
int who_pressed__Fi(int pval) {
	struct CPad *Pad;
	struct CPad *Pad1;
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800A839C
void CharacterLoadPad__Fv() {
	struct CPad *P;
	struct OMENUITEM *iptr;
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800A88F0
void MemcardPad__Fv() {
	struct CPad *P;
	int move;
	struct OMENUITEM *iptr;
	int lcs;
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800A9214
void SwitchMONO__Fv() {
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800A9260
void SoundPad__Fv() {
	struct CPad *P;
	int move;
	struct OMENUITEM *iptr;
	int lcs;
	int l;
	int llen;
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800A9C68
void CentrePad__Fv() {
	struct CPad *P;
	struct OMENUITEM *iptr;
	int osx;
	int osy;
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800A9EAC
void CalcVolumes__Fv() {
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800AA008
void SetLoadedVolumes__Fv() {
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800AA0B8
void GetVolumes__Fv() {
	int i;
	struct OMENULIST *mptr;
	struct OMENUITEM *iptr;
	int s;
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800AA154
void AlterSpeedMenu__F9GM_SPEEDS(enum GM_SPEEDS gs) {
	struct OMENUITEM *it;
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800AA1A8
void GameSpeedPad__Fv() {
	int cp;
	unknown exit_flag;
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800AA2D0
void DrawOptions__FP4TASK(struct TASK *T) {
	struct CPad *P;
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800AA9CC
void ToggleOptions__Fv() {
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800AAB74
void FormatPad__Fv() {
	struct CPad *P;
	int sn;
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800AAE7C
void SaveOverwritePad__Fv() {
	struct CPad *P;
	int sn;
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800AB0B8
void CharCardSelectMemcardPad__Fv() {
	struct OMENUITEM *iptr;
	struct CPad *P;
}

// Path: C:\diabpsx\PSXSRC\OPTIONS.CPP
// Addr: 0x800AB300
void LAMBO_MovePad__FP4CPad(struct CPad *P) {
	struct OMENUITEM *iptr;
	int move;
	int lcs;
}


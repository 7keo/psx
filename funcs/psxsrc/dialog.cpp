// Path: C:\diabpsx\PSXSRC\DIALOG.CPP
// Addr: 0x8008AD90
unsigned char TrimCol__Fs(short col) {
}

// Path: C:\diabpsx\PSXSRC\DIALOG.CPP
// Addr: 0x8008ADC8
struct POLY_GT4* DialogPrint__Fiiiiiiiiii(int Frm, int X, int Y, int SW, int SH, int UW, int UH, int UOfs, int VOfs, int Trans) {
	int SH;
	int UOfs;
	int VOfs;
	struct FRAME_HDR *Fr;
	struct POLY_GT4 *GT4;
	struct POLY_FT4 *FT4;
	struct TP_LOAD_HDR *Tp;
	int x0;
	int x1;
	int x2;
	int x3;
	int y0;
	int y1;
	int y2;
	int y3;
	int u0;
	int u1;
	int u2;
	int u3;
	int v0;
	int v1;
	int v2;
	int v3;
	int U;
	int V;
	int W;
	int H;
	struct PAL *Pal;
	struct PAL *Pal;
	short G1;
	short G2;
	short G3;
	short G4;
}

// Path: C:\diabpsx\PSXSRC\DIALOG.CPP
// Addr: 0x8008B748
struct POLY_G4* GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	unsigned char g1;
	unsigned char b1;
	unsigned char r2;
	unsigned char g2;
	unsigned char b2;
	unsigned char r3;
	unsigned char g3;
	unsigned char b3;
	struct POLY_G4 *G4;
}

// Path: C:\diabpsx\PSXSRC\DIALOG.CPP
// Addr: 0x8008B880
void DropShadows__Fiiii(int x, int y, int w, int h) {
	struct POLY_G4 *G4;
	unsigned char dbr;
	unsigned char dbg;
	unsigned char dbb;
}

// Path: C:\diabpsx\PSXSRC\DIALOG.CPP
// Addr: 0x8008BB24
void InitDialog__Fv() {
	int i;
	int y;
	int i;
	unsigned char bits;
	int x;
	int i;
	int y;
	int i;
}

// Path: C:\diabpsx\PSXSRC\DIALOG.CPP
// Addr: 0x8008BC5C
void GetSizes__6Dialog(struct Dialog *this) {
	struct FRAME_HDR *Fr;
}

// Path: C:\diabpsx\PSXSRC\DIALOG.CPP
// Addr: 0x8008BEE0
void Back__6Dialogiiii(struct Dialog *this, int DX, int DY, int DW, int DH) {
	int X;
	int Y;
	int W;
	int H;
	int Bx;
	int By;
	int Xr;
	int Yr;
	int Xl;
	int Yl;
	struct POLY_FT4 *Ft4;
	struct RECT ClipRect;
	int c;
	int fw;
	int fh;
}

// Path: C:\diabpsx\PSXSRC\DIALOG.CPP
// Addr: 0x8008CFF8
void Line__6Dialogiii(struct Dialog *this, int DX, int DY, int DW) {
	int X;
	int Y;
	int W;
	int Bx;
	int Xr;
	int Xl;
	struct RECT ClipRect;
}

// Path: C:\diabpsx\PSXSRC\DIALOG.CPP
// Addr: 0x8008D228
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	int OldOT;
}


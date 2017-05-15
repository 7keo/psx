// Path: C:\diabpsx\PSXSRC\PRINTY.CPP
// Addr: 0x80089C60
void Set__7FontTab(struct FontTab *this) {
	int Loop;
	int f;
	int Loop;
}

// Path: C:\diabpsx\PSXSRC\PRINTY.CPP
// Addr: 0x80089CFC
void InitPrinty__Fv() {
	int otpos;
}

// Path: C:\diabpsx\PSXSRC\PRINTY.CPP
// Addr: 0x80089DAC
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}

// Path: C:\diabpsx\PSXSRC\PRINTY.CPP
// Addr: 0x80089DB4
int KanjiPrintChar__5CFontUsUsUsUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, unsigned short kan, int R, int G, int B) {
	unsigned char R;
	unsigned char G;
	unsigned char B;
}

// Path: C:\diabpsx\PSXSRC\PRINTY.CPP
// Addr: 0x80089EEC
int PrintChar__5CFontUsUsUcUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, unsigned char C, int R, int G, int B) {
	unsigned char R;
	unsigned char G;
	unsigned char B;
	int Cw;
}

// Path: C:\diabpsx\PSXSRC\PRINTY.CPP
// Addr: 0x8008A090
int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(struct CFont *this, int X, int Y, char *Str, enum TXT_JUST Justify, struct RECT *TextWindow, int R, int G, int B) {
	struct RECT *TextWindow;
	unsigned char R;
	unsigned char G;
	unsigned char B;
	int Cx;
	int Cy;
	int WrapCount;
	char *EndPtr;
	char *SpacePtr;
	int CharW;
	int SpaceW;
	int _WindowW;
	int WindowW;
	int WindowH;
	int WindowX;
	int WindowY;
	struct RECT ClipRect;
	unsigned short kan;
	char *OrigStr;
	unsigned char c;
	char c;
	char c;
}

// Path: C:\diabpsx\PSXSRC\PRINTY.CPP
// Addr: 0x8008A6C8
int GetWrap__5CFontPcP4RECT(struct CFont *this, char *Str, struct RECT *TextWindow) {
	int WrapCount;
	char *EndPtr;
	char *SpacePtr;
	char *LastSpacePtr;
	int CharW;
	int SpaceW;
	int WindowW;
	int _WindowW;
	unsigned char c;
	char c;
}

// Path: C:\diabpsx\PSXSRC\PRINTY.CPP
// Addr: 0x8008A938
int GetWrapWidth__5CFontPcP4RECT(struct CFont *this, char *Str, struct RECT *TextWindow) {
	char *EndPtr;
	char *SpacePtr;
	int CharW;
	int SpaceW;
	int WindowW;
	unsigned char c;
}

// Path: C:\diabpsx\PSXSRC\PRINTY.CPP
// Addr: 0x8008AAA4
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	int Width;
}

// Path: C:\diabpsx\PSXSRC\PRINTY.CPP
// Addr: 0x8008AB20
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}

// Path: C:\diabpsx\PSXSRC\PRINTY.CPP
// Addr: 0x8008ABA0
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	int OldOT;
}

// Path: C:\diabpsx\PSXSRC\PRINTY.CPP
// Addr: 0x8008ABAC
int GetCharWidth__5CFontUc(struct CFont *this, unsigned char ch) {
}

// Path: C:\diabpsx\PSXSRC\PRINTY.CPP
// Addr: 0x8008AC80
void _GLOBAL_.I.WHITER() {
}


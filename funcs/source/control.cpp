// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x8003017C
unsigned char TrimCol__Fs(short col) {
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x800301B4
void DrawSpellCel__FllUclUcc(long xp, long yp, unsigned char Trans, long nCel, int w, int sel) {
	unsigned char w;
	char sel;
	struct TextDat *ThisDat;
	struct FRAME_HDR *Fr;
	struct POLY_FT4 *Ft4;
	struct POLY_GT4 *GT4;
	struct TP_LOAD_HDR *Tp;
	int SpellW;
	int SpellH;
	unsigned char r;
	unsigned char g;
	unsigned char b;
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
	int otpos;
	int X;
	int Y;
	int SW;
	int SH;
	struct PAL *Pal;
	int st;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80030D38
void SetSpellTrans__Fc(char t) {
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80030D44
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	int CountDown;
	int i;
	int omp;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80030ED4
void DrawSpeedSpellTSK__FP4TASK(struct TASK *T) {
	struct DEF_ARGS *args;
	int pnum;
	unknown alive;
	int old_opts;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80031004
void ToggleSpell__Fi(int pnum) {
	struct DEF_ARGS *args;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x800310B8
void DrawSpellList__Fv() {
	int x;
	int y;
	int i;
	int j;
	int t;
	unsigned long mask;
	unsigned long spl;
	int s;
	int c;
	int v;
	int NoSpells;
	unsigned char trans;
	struct PlayerStruct *player;
	struct CPad *P;
	int lx;
	int ly;
	int NoYSpells;
	int NoXSpells;
	int PLEFT;
	int PRIGHT;
	unknown Flag;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80031D54
void SetSpell__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80031E60
void AddPanelString__FPCci(char *str, int just) {
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80031F20
void ClearPanel__Fv() {
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80031F50
void InitPanelStr__Fv() {
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80031F70
void InitControlPan__Fv() {
	int i;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x8003219C
void DrawCtrlPan__Fv() {
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x800321C8
void DoAutoMap__Fv() {
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80032228
void CheckPanelInfo__Fv() {
	int *_pSpell[1];
	int c;
	int s;
	int v;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80032948
void FreeControlPan__Fv() {
	void *p__p;
	void *p__p;
	void *p__p;
	void *p__p;
	void *p__p;
	void *p__p;
	void *p__p;
	void *p__p;
	void *p__p;
	void *p__p;
	void *p__p;
	void *p__p;
	void *p__p;
	void *p__p;
	void *p__p;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80032A58
int CPrintString__FiPci(int No, char *pszStr, int Just) {
	enum TXT_JUST Justify;
	unsigned char R;
	unsigned char G;
	unsigned char B;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80032B74
void PrintInfo__Fv() {
	int NoOfLines;
	int nOffset1;
	int nlines;
	int PageOffset;
	int i;
	int i;
	int i;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80032FA4
void DrawInfoBox__FP4RECT(struct RECT *InfoRect) {
	int pnum;
	int nGold;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x800336D8
void MY_PlrStringXY__Fv() {
	struct CSDATA *ptr;
	char r;
	char g;
	char b;
	int x;
	int y;
	int w;
	int len;
	struct RECT Angle;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80033DE8
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	struct CSDATA *ptr;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80033E90
void DrawPlus__Fii(int n, int pnum) {
	struct TextDat *ThisDat;
	struct POLY_FT4 *Ft4;
	int otpos;
	int x;
	int y;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80034028
void ChrCheckValidButton__Fi(int move) {
	int pc;
	int count;
	int i;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80034334
void DrawArrows__Fv() {
	struct TextDat *ThisDat;
	struct POLY_FT4 *Ft4;
	unsigned char flip;
	int x;
	int otpos;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80034434
void BuildChr__Fv() {
	char c;
	char chrstr[64];
	long mind;
	long maxd;
	int hper;
	int ac;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80035698
void DrawChr__Fv() {
	char chrstr[64];
	int pc;
	struct CPad *P;
	int llus;
	int move;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80035B48
void DrawChrTSK__FP4TASK(struct TASK *T) {
	int omp;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80035C58
void DrawLevelUpIcon__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80035CEC
void CheckChrBtns__Fv() {
	int pc;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80036074
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x800360F8
void RedBack__Fv() {
	struct TextDat *ThisDat;
	struct POLY_FT4 *FT4;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x800361F0
void PrintSBookStr__FiiiPCcUcUc(int x, int y, int cspel, char *pszStr, int bright, int Staff) {
	unsigned char bright;
	unsigned char Staff;
	unsigned char r;
	unsigned char g;
	unsigned char b;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80036478
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	char st;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x800366D8
void DrawSpellBook__Fb(unknown DrawBg) {
	int i;
	int ii;
	int x;
	int y;
	int mind;
	int maxd;
	int sx;
	int sy;
	unsigned long tspls;
	char st;
	char c;
	int v;
	unsigned char bright;
	char Num[4];
	int bw;
	struct CPad *P;
	int lsbooktab;
	int lcur_spel;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80037280
void CheckSBook__Fv() {
	unsigned long tspls;
	char st;
	int cspel;
	unknown splok;
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x8003751C
char* get_pieces_str__Fi(int nGold) {
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80037550
void _GLOBAL_.D.DrawLevelUpFlag() {
}

// Path: C:\diabpsx\SOURCE\CONTROL.CPP
// Addr: 0x80037578
void _GLOBAL_.I.DrawLevelUpFlag() {
}


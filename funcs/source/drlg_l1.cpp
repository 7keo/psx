// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013BCB0
void DRLG_PlaceDoor__Fii(int x, int y) {
	unsigned char c;
	unsigned char df;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013C190
void DRLG_L1Shadows__Fv() {
	int x;
	int y;
	int i;
	int patflag;
	unsigned char sd[2][2];
	unsigned char tnv3;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013C5A0
int DRLG_PlaceMiniSet__FPCUciiiiiii(unsigned char *miniset, int tmin, int tmax, int cx, int cy, int setview, int noquad, int ldir) {
	int cy;
	int noquad;
	int sx;
	int sy;
	int sw;
	int sh;
	int xx;
	int yy;
	int i;
	int ii;
	int numt;
	int found;
	int abort;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013CA08
void DRLG_SetWalls__Fv() {
	int i;
	int j;
	int yy;
	int v;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013CAC4
void DRLG_L1Floor__Fv() {
	int i;
	int j;
	long rv;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013CBA8
void DRLG_L1Pass3__Fv() {
	int i;
	int j;
	int xx;
	int yy;
	long v1;
	long v2;
	long v3;
	long v4;
	long lv;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013CDA0
void DRLG_LoadL1SP__Fv() {
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013CE7C
void DRLG_FreeL1SP__Fv() {
	void *p__p;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013CEAC
void DRLG_Init_Globals__Fv() {
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013CECC
void set_restore_lighting__Fv() {
	int x;
	int y;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013CF5C
void DRLG_InitL1Vals__Fv() {
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013CF64
void LoadL1Dungeon__FPcii(char *sFileName, int vx, int vy) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char *pLevelMap;
	unsigned char *lm;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013D138
void LoadPreL1Dungeon__FPcii(char *sFileName, int vx, int vy) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char *pLevelMap;
	unsigned char *lm;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013D2F8
void InitL5Dungeon__Fv() {
	int i;
	int j;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013D37C
void L5ClearFlags__Fv() {
	int i;
	int j;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013D3CC
void L5drawRoom__Fiiii(int x, int y, int w, int h) {
	int i;
	int j;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013D438
unsigned char L5checkRoom__Fiiii(int x, int y, int width, int height) {
	int i;
	int j;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013D4CC
void L5roomGen__Fiiiii(int x, int y, int w, int h, int dir) {
	int dir;
	int rx;
	int ry;
	int ry2;
	int height;
	int width;
	int cx1;
	int cy1;
	int cw;
	int ch;
	int num;
	int dirProb;
	int ran;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013D7FC
void L5firstRoom__Fv() {
	int x;
	int y;
	int xs;
	int xe;
	int ys;
	int ye;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013DB9C
long L5GetArea__Fv() {
	int i;
	int j;
	long rv;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013DBFC
void L5makeDungeon__Fv() {
	int i;
	int j;
	int l;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013DC88
void L5makeDmt__Fv() {
	int i;
	int j;
	int idx;
	int val;
	int dmty;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013DD70
int L5HWallOk__Fii(int i, int j) {
	int x;
	unsigned char wallok;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013DEAC
int L5VWallOk__Fii(int i, int j) {
	int y;
	unsigned char wallok;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013DFF4
void L5HorizWall__Fiici(int i, int j, char p, int dx) {
	int xx;
	char wt;
	char dt;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013E22C
void L5VertWall__Fiici(int i, int j, char p, int dy) {
	int yy;
	char wt;
	char dt;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013E458
void L5AddWall__Fv() {
	int i;
	int j;
	int x;
	int y;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013E6B4
void DRLG_L5GChamber__Fiiiiii(int sx, int sy, int topflag, int bottomflag, int leftflag, int rightflag) {
	int leftflag;
	int rightflag;
	int i;
	int j;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013E974
void DRLG_L5GHall__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013EA28
void L5tileFix__Fv() {
	int i;
	int j;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013F2EC
void DRLG_L5Subs__Fv() {
	int x;
	int y;
	int i;
	int rv;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013F4F8
void DRLG_L5SetRoom__Fii(int rx1, int ry1) {
	int rw;
	int rh;
	int i;
	int j;
	unsigned char *sp;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013F5F8
void L5FillChambers__Fv() {
	int c;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8013FCE4
void DRLG_L5FTVR__Fiiiii(int i, int j, int x, int y, int d) {
	int d;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x8014016C
void DRLG_L5FloodTVal__Fv() {
	int i;
	int j;
	int xx;
	int yy;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x80140264
void DRLG_L5TransFix__Fv() {
	int j;
	int yy;
	int v;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x801406A8
void DRLG_L5DirtFix__Fv() {
	int j;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x80140824
void DRLG_L5CornerFix__Fv() {
	int i;
	int j;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x80140930
void DRLG_L5__Fi(int entry) {
	long minarea;
	unsigned char doneflag;
	int i;
	int j;
	int yy;
}

// Path: C:\diabpsx\SOURCE\DRLG_L1.CPP
// Addr: 0x80140E64
void CreateL5Dungeon__FUii(unsigned int rseed, int entry) {
}


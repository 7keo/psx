// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004BC68
int veclen2__Fii(int ix, int iy) {
	int t;
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004BCD0
void set_light_bands__Fv() {
	int v;
	int y;
	unsigned char *l;
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004BD40
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
	unsigned char d_g;
	unsigned char d_b;
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004BDAC
void SetWeirdFX__Fv() {
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004BE20
void DoLighting__Fiiii(int nXPos, int nYPos, int nRadius, int Lnum) {
	int xoff;
	int yoff;
	int x;
	int y;
	int v;
	int colour_mask;
	int shift_mask;
	int shake;
	int light_x;
	int light_y;
	int block_x;
	int block_y;
	int dist_y;
	int max_x;
	int mult;
	int mult_st;
	int radius_block;
	int scr_x;
	int scr_y;
	int temp_x;
	int temp_y;
	int weirdy;
	int cont;
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004CAF4
void DoUnLight__Fv() {
	int x;
	int y;
	int max_x;
	int max_y;
	int nXPos;
	int nYPos;
	unsigned char *r;
	unsigned char *g;
	unsigned char *b;
	int radius_block_x;
	int radius_block_y;
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004CD38
void DoUnVision__Fiiii(int nXPos, int nYPos, int nRadius, int num) {
	int i;
	int j;
	int x1;
	int y1;
	int x2;
	int y2;
	int vis_flag;
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004CE40
void DoVision__FiiiUcUc(int nXPos, int nYPos, int nRadius, unsigned char doautomap, int visible) {
	int nCrawlX;
	int nCrawlY;
	int nLineLen;
	int nBlockerFlag;
	int j;
	int k;
	int v;
	int x1adj;
	int x2adj;
	int y1adj;
	int y2adj;
	int vis_flag;
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D268
void FreeLightTable__Fv() {
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D270
void InitLightTable__Fv() {
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D278
void MakeLightTable__Fv() {
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D280
void InitLightMax__Fv() {
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D2A4
void InitLighting__Fv() {
	int i;
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D2E8
int AddLight__Fiii(int x, int y, int r) {
	int lid;
	struct LightListStruct2 *ll;
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D340
void AddUnLight__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D364
void ChangeLightRadius__Fii(int i, int r) {
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D384
void ChangeLightXY__Fiii(int i, int x, int y) {
	struct LightListStruct2 *ll;
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D3B0
void light_fix__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D3B8
void ChangeLightOff__Fiii(int i, int x, int y) {
	struct LightListStruct2 *ll;
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D3E0
void ChangeLight__Fiiii(int i, int x, int y, int r) {
	struct LightListStruct2 *ll;
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D40C
void ChangeLightColour__Fii(int i, int c) {
	struct LightListStruct2 *ll;
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D434
void ProcessLightList__Fv() {
	int i;
	int j;
	unsigned char temp;
	struct LightListStruct2 *ll;
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D54C
void SavePreLighting__Fv() {
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D554
void InitVision__Fv() {
	int i;
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D5A8
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	int vid;
	struct LightListStruct *vl;
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D61C
void ChangeVisionRadius__Fii(int id, int r) {
	int i;
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D6D0
void ChangeVisionXY__Fiii(int id, int x, int y) {
	int i;
	struct LightListStruct *vl;
}

// Path: C:\diabpsx\SOURCE\LIGHTING.CPP
// Addr: 0x8004D754
void ProcessVisionList__Fv() {
	int i;
	unsigned char delflag;
	struct LightListStruct *vl;
}


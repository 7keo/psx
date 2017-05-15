unsigned char DRLG_L2PlaceMiniSet__FPUciiiiii(unsigned char* miniset, int tmin, int tmax, int cx, int cy, int setview, int ldir) {
	int cy;
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
	int randxy[128];
	int rcount;
	int failed;
}

void DRLG_L2PlaceRndSet__FPUci(unsigned char* miniset, int rndper) {
	int sx;
	int sy;
	int sw;
	int sh;
	int xx;
	int yy;
	int ii;
	int jj;
	int kk;
	int found;
}

void DRLG_L2Subs__Fv() {
	int x;
	int y;
	int i;
	int j;
	int k;
	int rv;
}

void DRLG_L2Shadows__Fv() {
	int x;
	int y;
	int i;
	int patflag;
	unsigned char sd[2][2];
}

void InitDungeon__Fv() {
	int i;
	int j;
}

void DRLG_LoadL2SP__Fv() {
}

void DRLG_FreeL2SP__Fv() {
	void* p__p;
}

void DRLG_L2SetRoom__Fii(int rx1, int ry1) {
	int rw;
	int rh;
	int i;
	int j;
	unsigned char* sp;
}

void DefineRoom__Fiiiii(int nX1, int nY1, int nX2, int nY2, int ForceHW) {
	int ForceHW;
	int i;
	int j;
	unsigned char ft;
}

void CreateDoorType__Fii(int nX, int nY) {
	unsigned char fDoneflag;
}

void PlaceHallExt__Fii(int nX, int nY) {
}

void AddHall__Fiiiii(int nX1, int nY1, int nX2, int nY2, int nHd) {
	int nHd;
	HALLNODE p1;
	HALLNODE p2;
}

void CreateRoom__Fiiiiiiiii(int nX1, int nY1, int nX2, int nY2, int nRDest, int nHDir, int ForceHW, int nH, int nW) {
	int nRDest;
	int ForceHW;
	int nAw;
	int nAh;
	int nRw;
	int nRh;
	int nRx1;
	int nRy1;
	int nRx2;
	int nRy2;
	int nHx1;
	int nHy1;
	int nHx2;
	int nHy2;
	int nRid;
}

void GetHall__FPiN40(int* nX1, int* nY1, int* nX2, int* nY2, int* nHd) {
	int* nHd;
	HALLNODE p1;
	void* p__p;
}

void ConnectHall__Fiiiii(int nX1, int nY1, int nX2, int nY2, int nHd) {
	int nHd;
	unsigned char fDoneflag;
	unsigned char fInroom;
	int nCurrd;
	int nDx;
	int nDy;
	int nRp;
	int nOrigX1;
	int nOrigY1;
	int fMinusFlag;
	int fPlusFlag;
}

void DoPatternCheck__Fii(int i, int j) {
	int k;
	int l;
	int x;
	int y;
	int nOk;
}

void L2TileFix__Fv() {
	int j;
}

unsigned char DL2_Cont__FUcUcUcUc(unsigned char x1f, unsigned char y1f, unsigned char x2f, unsigned char y2f) {
}

int DL2_NumNoChar__Fv() {
	int t;
	int ii;
	int jj;
}

void DL2_DrawRoom__Fiiii(int x1, int y1, int x2, int y2) {
	int ii;
	int jj;
}

void DL2_KnockWalls__Fiiii(int x1, int y1, int x2, int y2) {
	int ii;
	int jj;
}

unsigned char DL2_FillVoids__Fv() {
	int ii;
	int jj;
	int xx;
	int yy;
	int x1;
	int x2;
	int y1;
	int y2;
	unsigned char xf1;
	unsigned char xf2;
	unsigned char yf1;
	unsigned char yf2;
	int to;
}

unsigned char CreateDungeon__Fv() {
	int i;
	int j;
	int nHx1;
	int nHy1;
	int nHx2;
	int nHy2;
	int nHd;
	int ForceH;
	int ForceW;
	int ForceHW;
}

void DRLG_L2Pass3__Fv() {
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

void DRLG_L2FTVR__Fiiiii(int i, int j, int x, int y, int d) {
	int d;
}

void DRLG_L2FloodTVal__Fv() {
	int i;
	int j;
	int xx;
	int yy;
}

void DRLG_L2TransFix__Fv() {
	int j;
	int yy;
}

void L2DirtFix__Fv() {
	int j;
}

void L2LockoutFix__Fv() {
	int i;
	int j;
	unsigned char doorok;
}

void L2DoorFix__Fv() {
	int j;
}

void DRLG_L2SetWalls__Fv() {
	int i;
	int j;
	int yy;
	int v;
}

void DRLG_L2__Fi(int entry) {
	int i;
	int j;
	unsigned char doneflag;
}

void DRLG_InitL2Vals__Fv() {
}

void LoadL2Dungeon__FPcii(char* sFileName, int vx, int vy) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char* pLevelMap;
	unsigned char* lm;
}

void LoadPreL2Dungeon__FPcii(char* sFileName, int vx, int vy) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char* pLevelMap;
	unsigned char* lm;
}

void CreateL2Dungeon__FUii(unsigned int rseed, int entry) {
}

unsigned char DRLG_L2PlaceMiniSet__FPUciiiiii(unsigned char* miniset, int tmin, int tmax, int cx, int cy, int setview, int ldir) {
	int cy;
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
	int randxy[128];
	int rcount;
	int failed;
}

void DRLG_L2PlaceRndSet__FPUci(unsigned char* miniset, int rndper) {
	int sx;
	int sy;
	int sw;
	int sh;
	int xx;
	int yy;
	int ii;
	int jj;
	int kk;
	int found;
}

void DRLG_L2Subs__Fv() {
	int x;
	int y;
	int i;
	int j;
	int k;
	int rv;
}

void DRLG_L2Shadows__Fv() {
	int x;
	int y;
	int i;
	int patflag;
	unsigned char sd[2][2];
}

void InitDungeon__Fv() {
	int i;
	int j;
}

void DRLG_LoadL2SP__Fv() {
}

void DRLG_FreeL2SP__Fv() {
	void* p__p;
}

void DRLG_L2SetRoom__Fii(int rx1, int ry1) {
	int rw;
	int rh;
	int i;
	int j;
	unsigned char* sp;
}

void DefineRoom__Fiiiii(int nX1, int nY1, int nX2, int nY2, int ForceHW) {
	int ForceHW;
	int i;
	int j;
	unsigned char ft;
}

void CreateDoorType__Fii(int nX, int nY) {
	unsigned char fDoneflag;
}

void PlaceHallExt__Fii(int nX, int nY) {
}

void AddHall__Fiiiii(int nX1, int nY1, int nX2, int nY2, int nHd) {
	int nHd;
	HALLNODE p1;
	HALLNODE p2;
}

void CreateRoom__Fiiiiiiiii(int nX1, int nY1, int nX2, int nY2, int nRDest, int nHDir, int ForceHW, int nH, int nW) {
	int nRDest;
	int ForceHW;
	int nAw;
	int nAh;
	int nRw;
	int nRh;
	int nRx1;
	int nRy1;
	int nRx2;
	int nRy2;
	int nHx1;
	int nHy1;
	int nHx2;
	int nHy2;
	int nRid;
}

void GetHall__FPiN40(int* nX1, int* nY1, int* nX2, int* nY2, int* nHd) {
	int* nHd;
	HALLNODE p1;
	void* p__p;
}

void ConnectHall__Fiiiii(int nX1, int nY1, int nX2, int nY2, int nHd) {
	int nHd;
	unsigned char fDoneflag;
	unsigned char fInroom;
	int nCurrd;
	int nDx;
	int nDy;
	int nRp;
	int nOrigX1;
	int nOrigY1;
	int fMinusFlag;
	int fPlusFlag;
}

void DoPatternCheck__Fii(int i, int j) {
	int k;
	int l;
	int x;
	int y;
	int nOk;
}

void L2TileFix__Fv() {
	int j;
}

unsigned char DL2_Cont__FUcUcUcUc(unsigned char x1f, unsigned char y1f, unsigned char x2f, unsigned char y2f) {
}

int DL2_NumNoChar__Fv() {
	int t;
	int ii;
	int jj;
}

void DL2_DrawRoom__Fiiii(int x1, int y1, int x2, int y2) {
	int ii;
	int jj;
}

void DL2_KnockWalls__Fiiii(int x1, int y1, int x2, int y2) {
	int ii;
	int jj;
}

unsigned char DL2_FillVoids__Fv() {
	int ii;
	int jj;
	int xx;
	int yy;
	int x1;
	int x2;
	int y1;
	int y2;
	unsigned char xf1;
	unsigned char xf2;
	unsigned char yf1;
	unsigned char yf2;
	int to;
}

unsigned char CreateDungeon__Fv() {
	int i;
	int j;
	int nHx1;
	int nHy1;
	int nHx2;
	int nHy2;
	int nHd;
	int ForceH;
	int ForceW;
	int ForceHW;
}

void DRLG_L2Pass3__Fv() {
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

void DRLG_L2FTVR__Fiiiii(int i, int j, int x, int y, int d) {
	int d;
}

void DRLG_L2FloodTVal__Fv() {
	int i;
	int j;
	int xx;
	int yy;
}

void DRLG_L2TransFix__Fv() {
	int j;
	int yy;
}

void L2DirtFix__Fv() {
	int j;
}

void L2LockoutFix__Fv() {
	int i;
	int j;
	unsigned char doorok;
}

void L2DoorFix__Fv() {
	int j;
}

void DRLG_L2SetWalls__Fv() {
	int i;
	int j;
	int yy;
	int v;
}

void DRLG_L2__Fi(int entry) {
	int i;
	int j;
	unsigned char doneflag;
}

void DRLG_InitL2Vals__Fv() {
}

void LoadL2Dungeon__FPcii(char* sFileName, int vx, int vy) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char* pLevelMap;
	unsigned char* lm;
}

void LoadPreL2Dungeon__FPcii(char* sFileName, int vx, int vy) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char* pLevelMap;
	unsigned char* lm;
}

void CreateL2Dungeon__FUii(unsigned int rseed, int entry) {
}


void DRLG_PlaceDoor__Fii(int x, int y) {
	unsigned char c;
	unsigned char df;
}

void DRLG_L1Shadows__Fv() {
	int x;
	int y;
	int i;
	int patflag;
	unsigned char sd[2][2];
	unsigned char tnv3;
}

int DRLG_PlaceMiniSet__FPCUciiiiiii(unsigned char* miniset, int tmin, int tmax, int cx, int cy, int setview, int noquad, int ldir) {
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

void DRLG_SetWalls__Fv() {
	int i;
	int j;
	int yy;
	int v;
}

void DRLG_L1Floor__Fv() {
	int i;
	int j;
	long rv;
}

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

void DRLG_LoadL1SP__Fv() {
}

void DRLG_FreeL1SP__Fv() {
	void* p__p;
}

void DRLG_Init_Globals__Fv() {
}

void set_restore_lighting__Fv() {
	int x;
	int y;
}

void DRLG_InitL1Vals__Fv() {
}

void LoadL1Dungeon__FPcii(char* sFileName, int vx, int vy) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char* pLevelMap;
	unsigned char* lm;
}

void LoadPreL1Dungeon__FPcii(char* sFileName, int vx, int vy) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char* pLevelMap;
	unsigned char* lm;
}

void InitL5Dungeon__Fv() {
	int i;
	int j;
}

void L5ClearFlags__Fv() {
	int i;
	int j;
}

void L5drawRoom__Fiiii(int x, int y, int w, int h) {
	int i;
	int j;
}

unsigned char L5checkRoom__Fiiii(int x, int y, int width, int height) {
	int i;
	int j;
}

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

void L5firstRoom__Fv() {
	int x;
	int y;
	int xs;
	int xe;
	int ys;
	int ye;
}

long L5GetArea__Fv() {
	int i;
	int j;
	long rv;
}

void L5makeDungeon__Fv() {
	int i;
	int j;
	int l;
}

void L5makeDmt__Fv() {
	int i;
	int j;
	int idx;
	int val;
	int dmty;
}

int L5HWallOk__Fii(int i, int j) {
	int x;
	unsigned char wallok;
}

int L5VWallOk__Fii(int i, int j) {
	int y;
	unsigned char wallok;
}

void L5HorizWall__Fiici(int i, int j, char p, int dx) {
	int xx;
	char wt;
	char dt;
}

void L5VertWall__Fiici(int i, int j, char p, int dy) {
	int yy;
	char wt;
	char dt;
}

void L5AddWall__Fv() {
	int i;
	int j;
	int x;
	int y;
}

void DRLG_L5GChamber__Fiiiiii(int sx, int sy, int topflag, int bottomflag, int leftflag, int rightflag) {
	int leftflag;
	int rightflag;
	int i;
	int j;
}

void DRLG_L5GHall__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
}

void L5tileFix__Fv() {
	int i;
	int j;
}

void DRLG_L5Subs__Fv() {
	int x;
	int y;
	int i;
	int rv;
}

void DRLG_L5SetRoom__Fii(int rx1, int ry1) {
	int rw;
	int rh;
	int i;
	int j;
	unsigned char* sp;
}

void L5FillChambers__Fv() {
	int c;
}

void DRLG_L5FTVR__Fiiiii(int i, int j, int x, int y, int d) {
	int d;
}

void DRLG_L5FloodTVal__Fv() {
	int i;
	int j;
	int xx;
	int yy;
}

void DRLG_L5TransFix__Fv() {
	int j;
	int yy;
	int v;
}

void DRLG_L5DirtFix__Fv() {
	int j;
}

void DRLG_L5CornerFix__Fv() {
	int i;
	int j;
}

void DRLG_L5__Fi(int entry) {
	long minarea;
	unsigned char doneflag;
	int i;
	int j;
	int yy;
}

void CreateL5Dungeon__FUii(unsigned int rseed, int entry) {
}

void DRLG_PlaceDoor__Fii(int x, int y) {
	unsigned char c;
	unsigned char df;
}

void DRLG_L1Shadows__Fv() {
	int x;
	int y;
	int i;
	int patflag;
	unsigned char sd[2][2];
	unsigned char tnv3;
}

int DRLG_PlaceMiniSet__FPCUciiiiiii(unsigned char* miniset, int tmin, int tmax, int cx, int cy, int setview, int noquad, int ldir) {
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

void DRLG_SetWalls__Fv() {
	int i;
	int j;
	int yy;
	int v;
}

void DRLG_L1Floor__Fv() {
	int i;
	int j;
	long rv;
}

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

void DRLG_LoadL1SP__Fv() {
}

void DRLG_FreeL1SP__Fv() {
	void* p__p;
}

void DRLG_Init_Globals__Fv() {
}

void set_restore_lighting__Fv() {
	int x;
	int y;
}

void DRLG_InitL1Vals__Fv() {
}

void LoadL1Dungeon__FPcii(char* sFileName, int vx, int vy) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char* pLevelMap;
	unsigned char* lm;
}

void LoadPreL1Dungeon__FPcii(char* sFileName, int vx, int vy) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char* pLevelMap;
	unsigned char* lm;
}

void InitL5Dungeon__Fv() {
	int i;
	int j;
}

void L5ClearFlags__Fv() {
	int i;
	int j;
}

void L5drawRoom__Fiiii(int x, int y, int w, int h) {
	int i;
	int j;
}

unsigned char L5checkRoom__Fiiii(int x, int y, int width, int height) {
	int i;
	int j;
}

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

void L5firstRoom__Fv() {
	int x;
	int y;
	int xs;
	int xe;
	int ys;
	int ye;
}

long L5GetArea__Fv() {
	int i;
	int j;
	long rv;
}

void L5makeDungeon__Fv() {
	int i;
	int j;
	int l;
}

void L5makeDmt__Fv() {
	int i;
	int j;
	int idx;
	int val;
	int dmty;
}

int L5HWallOk__Fii(int i, int j) {
	int x;
	unsigned char wallok;
}

int L5VWallOk__Fii(int i, int j) {
	int y;
	unsigned char wallok;
}

void L5HorizWall__Fiici(int i, int j, char p, int dx) {
	int xx;
	char wt;
	char dt;
}

void L5VertWall__Fiici(int i, int j, char p, int dy) {
	int yy;
	char wt;
	char dt;
}

void L5AddWall__Fv() {
	int i;
	int j;
	int x;
	int y;
}

void DRLG_L5GChamber__Fiiiiii(int sx, int sy, int topflag, int bottomflag, int leftflag, int rightflag) {
	int leftflag;
	int rightflag;
	int i;
	int j;
}

void DRLG_L5GHall__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
}

void L5tileFix__Fv() {
	int i;
	int j;
}

void DRLG_L5Subs__Fv() {
	int x;
	int y;
	int i;
	int rv;
}

void DRLG_L5SetRoom__Fii(int rx1, int ry1) {
	int rw;
	int rh;
	int i;
	int j;
	unsigned char* sp;
}

void L5FillChambers__Fv() {
	int c;
}

void DRLG_L5FTVR__Fiiiii(int i, int j, int x, int y, int d) {
	int d;
}

void DRLG_L5FloodTVal__Fv() {
	int i;
	int j;
	int xx;
	int yy;
}

void DRLG_L5TransFix__Fv() {
	int j;
	int yy;
	int v;
}

void DRLG_L5DirtFix__Fv() {
	int j;
}

void DRLG_L5CornerFix__Fv() {
	int i;
	int j;
}

void DRLG_L5__Fi(int entry) {
	long minarea;
	unsigned char doneflag;
	int i;
	int j;
	int yy;
}

void CreateL5Dungeon__FUii(unsigned int rseed, int entry) {
}


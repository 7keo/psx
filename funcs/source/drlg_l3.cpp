// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x80148F98
void InitL3Dungeon__Fv() {
	int i;
	int j;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014901C
void SetBlankL3Dungeon__Fv() {
	int x;
	int y;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x80149078
void FixL3Dungeon__Fv() {
	int x;
	int y;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x801490EC
int DRLG_L3FillRoom__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
	int v;
	int rv;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014933C
void DRLG_L3CreateBlock__Fiiii(int x, int y, int obs, int dir) {
	int blksizex;
	int blksizey;
	int x1;
	int y1;
	int x2;
	int y2;
	int contflag;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x801495BC
void DRLG_L3FloorArea__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x80149624
void DRLG_L3FillDiags__Fv() {
	int j;
	int v;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x80149750
void DRLG_L3FillSingles__Fv() {
	int i;
	int j;
	int v;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014981C
void DRLG_L3FillStraights__Fv() {
	int i;
	int j;
	int xc;
	int xs;
	int yc;
	int ys;
	int k;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x80149BC8
void DRLG_L3Edges__Fv() {
	int j;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x80149C08
int DRLG_L3GetFloorArea__Fv() {
	int i;
	int j;
	int gfa;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x80149C58
void DRLG_L3MakeMegas__Fv() {
	int v;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x80149D94
void DRLG_L3River__Fv() {
	int rx;
	int ry;
	int px;
	int py;
	int dir;
	int pdir;
	int nodir;
	int nodir2;
	int dircheck;
	int river[3][100];
	int rivercnt;
	int riveramt;
	int i;
	int trys;
	int found;
	int bridge;
	int lpcnt;
	int bail;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014A7BC
int DRLG_L3SpawnEdge__FiiPi(int x, int y, int *totarea) {
	unsigned char i;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014AA48
int DRLG_L3Spawn__FiiPi(int x, int y, int *totarea) {
	unsigned char i;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014AC54
void DRLG_L3Pool__Fv() {
	int i;
	int j;
	int found;
	int dunx;
	int duny;
	int totarea;
	int poolchance;
	unsigned char k;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014AEA4
void DRLG_L3PoolFix__Fv() {
	int duny;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014B0C4
int DRLG_L3PlaceMiniSet__FPCUciiiiii(unsigned char *miniset, int tmin, int tmax, int cx, int cy, int setview, int ldir) {
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
	int trys;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014B430
void DRLG_L3PlaceRndSet__FPCUci(unsigned char *miniset, int rndper) {
	int sx;
	int sy;
	int sw;
	int sh;
	int xx;
	int yy;
	int ii;
	int kk;
	int found;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014B76C
unsigned char WoodVertU__Fii(int i, int y) {
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014B818
unsigned char WoodVertD__Fii(int i, int y) {
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014B8B4
unsigned char WoodHorizL__Fii(int x, int j) {
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014B948
unsigned char WoodHorizR__Fii(int x, int j) {
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014B9CC
void AddFenceDoors__Fv() {
	int j;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014BAB0
void FenceDoorFix__Fv() {
	int j;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014BCA4
void DRLG_L3Wood__Fv() {
	int i;
	int j;
	int x;
	int y;
	int xx;
	int yy;
	int rt;
	int rp;
	int skip;
	int x1;
	int y1;
	int x2;
	int y2;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014C478
int DRLG_L3Anvil__Fv() {
	int sx;
	int sy;
	int sw;
	int sh;
	int xx;
	int yy;
	int ii;
	int found;
	int trys;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014C6D0
void FixL3Warp__Fv() {
	int j;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014C7B8
void FixL3HallofHeroes__Fv() {
	int i;
	int j;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014C90C
void DRLG_L3LockRec__Fii(int x, int y) {
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014C9A8
unsigned char DRLG_L3Lockout__Fv() {
	int i;
	int j;
	int t;
	int fx;
	int fy;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014CA68
void DRLG_L3SetWalls__Fv() {
	int i;
	int j;
	int yy;
	int v;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014CB1C
void DRLG_L3__Fi(int entry) {
	int x1;
	int y1;
	int x2;
	int y2;
	int sx1;
	int i;
	int j;
	int found;
	unsigned char genok;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014D238
void DRLG_L3Pass3__Fv() {
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

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014D450
void CreateL3Dungeon__FUii(unsigned int rseed, int entry) {
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014D4C8
void LoadL3Dungeon__FPcii(char *sFileName, int vx, int vy) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char *pLevelMap;
	unsigned char *lm;
}

// Path: C:\diabpsx\SOURCE\DRLG_L3.CPP
// Addr: 0x8014D64C
void LoadPreL3Dungeon__FPcii(char *sFileName, int vx, int vy) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char *pLevelMap;
	unsigned char *lm;
}


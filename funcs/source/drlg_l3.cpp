void InitL3Dungeon__Fv() {
	int i;
	int j;
}

void SetBlankL3Dungeon__Fv() {
	int x;
	int y;
}

void FixL3Dungeon__Fv() {
	int x;
	int y;
}

int DRLG_L3FillRoom__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
	int v;
	int rv;
}

void DRLG_L3CreateBlock__Fiiii(int x, int y, int obs, int dir) {
	int blksizex;
	int blksizey;
	int x1;
	int y1;
	int x2;
	int y2;
	int contflag;
}

void DRLG_L3FloorArea__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
}

void DRLG_L3FillDiags__Fv() {
	int j;
	int v;
}

void DRLG_L3FillSingles__Fv() {
	int i;
	int j;
	int v;
}

void DRLG_L3FillStraights__Fv() {
	int i;
	int j;
	int xc;
	int xs;
	int yc;
	int ys;
	int k;
}

void DRLG_L3Edges__Fv() {
	int j;
}

int DRLG_L3GetFloorArea__Fv() {
	int i;
	int j;
	int gfa;
}

void DRLG_L3MakeMegas__Fv() {
	int v;
}

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

int DRLG_L3SpawnEdge__FiiPi(int x, int y, int* totarea) {
	unsigned char i;
}

int DRLG_L3Spawn__FiiPi(int x, int y, int* totarea) {
	unsigned char i;
}

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

void DRLG_L3PoolFix__Fv() {
	int duny;
}

int DRLG_L3PlaceMiniSet__FPCUciiiiii(unsigned char* miniset, int tmin, int tmax, int cx, int cy, int setview, int ldir) {
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

void DRLG_L3PlaceRndSet__FPCUci(unsigned char* miniset, int rndper) {
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

unsigned char WoodVertU__Fii(int i, int y) {
}

unsigned char WoodVertD__Fii(int i, int y) {
}

unsigned char WoodHorizL__Fii(int x, int j) {
}

unsigned char WoodHorizR__Fii(int x, int j) {
}

void AddFenceDoors__Fv() {
	int j;
}

void FenceDoorFix__Fv() {
	int j;
}

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

void FixL3Warp__Fv() {
	int j;
}

void FixL3HallofHeroes__Fv() {
	int i;
	int j;
}

void DRLG_L3LockRec__Fii(int x, int y) {
}

unsigned char DRLG_L3Lockout__Fv() {
	int i;
	int j;
	int t;
	int fx;
	int fy;
}

void DRLG_L3SetWalls__Fv() {
	int i;
	int j;
	int yy;
	int v;
}

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

void CreateL3Dungeon__FUii(unsigned int rseed, int entry) {
}

void LoadL3Dungeon__FPcii(char* sFileName, int vx, int vy) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char* pLevelMap;
	unsigned char* lm;
}

void LoadPreL3Dungeon__FPcii(char* sFileName, int vx, int vy) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char* pLevelMap;
	unsigned char* lm;
}

void InitL3Dungeon__Fv() {
	int i;
	int j;
}

void SetBlankL3Dungeon__Fv() {
	int x;
	int y;
}

void FixL3Dungeon__Fv() {
	int x;
	int y;
}

int DRLG_L3FillRoom__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
	int v;
	int rv;
}

void DRLG_L3CreateBlock__Fiiii(int x, int y, int obs, int dir) {
	int blksizex;
	int blksizey;
	int x1;
	int y1;
	int x2;
	int y2;
	int contflag;
}

void DRLG_L3FloorArea__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
}

void DRLG_L3FillDiags__Fv() {
	int j;
	int v;
}

void DRLG_L3FillSingles__Fv() {
	int i;
	int j;
	int v;
}

void DRLG_L3FillStraights__Fv() {
	int i;
	int j;
	int xc;
	int xs;
	int yc;
	int ys;
	int k;
}

void DRLG_L3Edges__Fv() {
	int j;
}

int DRLG_L3GetFloorArea__Fv() {
	int i;
	int j;
	int gfa;
}

void DRLG_L3MakeMegas__Fv() {
	int v;
}

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

int DRLG_L3SpawnEdge__FiiPi(int x, int y, int* totarea) {
	unsigned char i;
}

int DRLG_L3Spawn__FiiPi(int x, int y, int* totarea) {
	unsigned char i;
}

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

void DRLG_L3PoolFix__Fv() {
	int duny;
}

int DRLG_L3PlaceMiniSet__FPCUciiiiii(unsigned char* miniset, int tmin, int tmax, int cx, int cy, int setview, int ldir) {
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

void DRLG_L3PlaceRndSet__FPCUci(unsigned char* miniset, int rndper) {
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

unsigned char WoodVertU__Fii(int i, int y) {
}

unsigned char WoodVertD__Fii(int i, int y) {
}

unsigned char WoodHorizL__Fii(int x, int j) {
}

unsigned char WoodHorizR__Fii(int x, int j) {
}

void AddFenceDoors__Fv() {
	int j;
}

void FenceDoorFix__Fv() {
	int j;
}

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

void FixL3Warp__Fv() {
	int j;
}

void FixL3HallofHeroes__Fv() {
	int i;
	int j;
}

void DRLG_L3LockRec__Fii(int x, int y) {
}

unsigned char DRLG_L3Lockout__Fv() {
	int i;
	int j;
	int t;
	int fx;
	int fy;
}

void DRLG_L3SetWalls__Fv() {
	int i;
	int j;
	int yy;
	int v;
}

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

void CreateL3Dungeon__FUii(unsigned int rseed, int entry) {
}

void LoadL3Dungeon__FPcii(char* sFileName, int vx, int vy) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char* pLevelMap;
	unsigned char* lm;
}

void LoadPreL3Dungeon__FPcii(char* sFileName, int vx, int vy) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char* pLevelMap;
	unsigned char* lm;
}


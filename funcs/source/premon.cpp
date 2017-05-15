// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x8015F6E8
void SwapMonsterType__FPi(int *oldmt) {
	int mt;
}

// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x8015F75C
unsigned char MonstPlace__Fii(int xp, int yp) {
}

// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x8015F828
void InitMonsterGFX__Fi(int monst) {
	int anim;
	char strBuff[256];
	int mtype;
	struct MonsterData *pmonsterdata;
}

// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x8015F900
void PlaceMonster__Fiiii(int i, int mtype, int x, int y) {
}

// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x8015F98C
int AddMonsterType__Fii(int type, int placeflag) {
	int i;
	unsigned char done;
}

// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x8015FA88
void GetMonsterTypes__FUl(unsigned long QuestMask) {
	int typelist[190];
	int mt;
	int nt;
}

// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x8015FB48
void ClrAllMonsters__Fv() {
	int i;
	struct MonsterStruct *Monst;
}

// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x8015FC80
void InitLevelMonsters__Fv() {
	int i;
}

// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x8015FD04
void GetLevelMTypes__Fv() {
	int i;
	int minl;
	int maxl;
	int typelist[190];
	int mt;
	int nt;
	char mamask;
	unsigned long QuestMask;
	int skeltypes[111];
	int numskeltypes;
}

// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x801601D8
void PlaceQuestMonsters__Fv() {
	int skeltype;
	unsigned char *setp;
}

// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x8016059C
void LoadDiabMonsts__Fv() {
	unsigned char *lpSetPiece;
}

// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x801606AC
void PlaceGroup__FiiUci(int mtype, int num, unsigned char leaderf, int leader) {
	int xp;
	int yp;
	int x1;
	int y1;
	int j;
	int placed;
	int try1;
	int try2;
	int rd;
}

// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x80160CA0
void SetMapMonsters__FPUcii(unsigned char *pMap, int startx, int starty) {
	int i;
	int j;
	unsigned short rw;
	unsigned short rh;
	unsigned short *lm;
	int mt;
}

// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x80160ED4
void InitMonsters__Fv() {
	int i;
	int mtype;
	int na;
	int nt;
	int scattertypes[111];
	int numscattypes;
	long fv;
	long j;
	int numplacemonsters;
	int s;
	int t;
}

// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x80161288
void PlaceUniqueMonst__Fiii(int uniqindex, int miniontype, int unpackfilesize) {
	struct UniqMonstStruct *Uniq;
	struct MonsterStruct *Monst;
	int xp;
	int yp;
	int x;
	int y;
	unsigned char done;
	int count;
	int count2;
	char filestr[64];
	int uniqtype;
	int i;
	unsigned char zharflag;
	int mMinDamage;
	int mMaxDamage;
	int monstype;
}

// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x80161BCC
void PlaceUniques__Fv() {
	int u;
	int mt;
	unsigned char done;
	int monsttype;
}

// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x80161D5C
int PreSpawnSkeleton__Fv() {
	int i;
	int j;
	int skeltypes;
	int skel;
}

// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x80161E94
void decode_enemy__Fii(int m, int enemy) {
}

// Path: C:\diabpsx\SOURCE\PREMON.CPP
// Addr: 0x80161FB0
unsigned char IsGoat__Fi(int mt) {
}


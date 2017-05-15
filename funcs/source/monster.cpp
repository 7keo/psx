// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014AB74
void DeleteMonster__Fi(int i) {
	int temp;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014ABAC
int M_GetDir__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014AC10
void M_StartDelay__Fii(int i, int len) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014AC60
void M_StartRAttack__Fiii(int i, int missile_type, int dam) {
	int md;
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014AD80
void M_StartRSpAttack__Fiii(int i, int missile_type, int dam) {
	int md;
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014AEF4
void M_StartSpAttack__Fi(int i) {
	int md;
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014AFE4
void M_StartEat__Fi(int i) {
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014B0BC
void M_GetKnockback__Fii(int i, int d) {
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014B2D8
void M_StartHit__Fiii(int i, int pnum, int dam) {
	struct MonsterStruct *pmonster;
	int _moldx;
	int _moldy;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014B5C0
void M_DiabloDeath__FiUci(int i, unsigned char sendmsg, int pnum) {
	struct MonsterStruct *Monst;
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
	int steps;
	int j;
	int k;
	int _moldx;
	int _moldy;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014B8E8
void M2MStartHit__Fiii(int mid, int i, int dam) {
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014BBA4
void MonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg) {
	int md;
	struct MonsterStruct *Monst;
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
	int omp;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014BEC0
void SyncMonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg) {
	int md;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014C010
void M2MStartKill__Fii(int i, int mid) {
	int md;
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
	int omp;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014C3D8
void M_StartKill__Fii(int i, int pnum) {
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014C4E0
void M_SyncStartKill__Fiiii(int i, int x, int y, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014C5F0
void M_StartFadein__FiiUc(int i, int md, unsigned char backwards) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014C74C
void M_StartFadeout__FiiUc(int i, int md, unsigned char backwards) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014C89C
void M_StartHeal__Fi(int i) {
	struct MonsterStruct *Monst;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014C928
void M_ChangeLightOffset__Fi(int monst) {
	int lx;
	int ly;
	int xm;
	int ym;
	int x2;
	int y2;
	int ox;
	int oy;
	struct MonsterStruct *pmonster;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014CA90
int M_DoStand__Fi(int i) {
	struct MonsterStruct *Monst;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014CAF0
int M_DoWalk__Fi(int i) {
	int rv;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014CD60
int M_DoWalk2__Fi(int i) {
	int rv;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014CF4C
int M_DoWalk3__Fi(int i) {
	int rv;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014D1F0
void M_TryM2MHit__Fiiiii(int i, int mid, int hper, int mind, int maxd) {
	int maxd;
	int hit;
	int dam;
	unsigned char ret;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014D428
void M_TryH2HHit__Fiiiii(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	struct PlayerStruct *ptrplr;
	int hit;
	int hper;
	int tac;
	long dam;
	int dx;
	int dy;
	int blk;
	int blkper;
	int mdam;
	struct MonsterStruct *pMonster;
	int _mx;
	int _my;
	int _px;
	int _py;
	unknown KnockOk;
	int newx;
	int newy;
	struct PlayerStruct *plr2;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014DA3C
int M_DoAttack__Fi(int i) {
	struct MonsterStruct *Monst;
	unsigned char mMinDamage;
	unsigned char mMaxDamage;
	unsigned char mHit;
	int _menemy;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014DBE8
int M_DoRAttack__Fi(int i) {
	int multimissiles;
	int mi;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014DD70
int M_DoRSpAttack__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014DF78
int M_DoSAttack__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014E054
int M_DoFadein__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014E134
int M_DoFadeout__Fi(int i) {
	int mtype;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014E260
int M_DoHeal__Fi(int i) {
	struct MonsterStruct *Monst;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014E2FC
int M_DoTalk__Fi(int i) {
	int tren;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
	int mName;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014E8A0
void M_Teleport__Fi(int i) {
	struct MonsterStruct *Monst;
	unsigned char done;
	int mulx;
	int muly;
	int x;
	int y;
	int a;
	int b;
	int px;
	int py;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014EAB4
int M_DoGotHit__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014EB1C
void DoEnding__Fi(int p) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014EBC4
void PrepDoEnding__Fi(int pnum) {
	int i;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014ED0C
int M_DoDeath__Fi(int i) {
	struct MonsterStruct *pMonster;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014EED0
int M_DoSpStand__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014EF7C
int M_DoDelay__Fi(int i) {
	int tmp;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014F090
int M_DoStone__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014F10C
void M_WalkDir__Fii(int i, int md) {
	int mwi;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014F33C
void GroupUnity__Fi(int i) {
	int leader;
	int tmp;
	int m;
	struct MonsterStruct *pMonster;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014F750
unsigned char M_CallWalk__Fii(int i, int md) {
	int mdtemp;
	unsigned char ok;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014F8F0
unsigned char M_CallWalk2__Fii(int i, int md) {
	int mdtemp;
	unsigned char ok;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014F9E8
unsigned char M_DumbWalk__Fii(int i, int md) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014FA3C
unsigned char M_RoundWalk__FiiRi(int i, int md, int *dir) {
	int mdtemp;
	unsigned char ok;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014FB88
void MAI_Zombie__Fi(int i) {
	struct MonsterStruct *Monst;
	int mx;
	int my;
	int md;
	int v;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014FD88
void MAI_SkelSd__Fi(int i) {
	struct MonsterStruct *Monst;
	int mx;
	int my;
	int md;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8014FF38
void MAI_Snake__Fi(int i) {
	struct MonsterStruct *Monst;
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	int pnum;
	char pattern[6];
	int tmp;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80150334
void MAI_Bat__Fi(int i) {
	struct MonsterStruct *Monst;
	int mx;
	int my;
	int md;
	int v;
	int pnum;
	int fx;
	int fy;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x801506E8
void MAI_SkelBow__Fi(int i) {
	int mx;
	int my;
	int md;
	int fx;
	int fy;
	unsigned char walking;
	int v;
	struct MonsterStruct *Monst;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x801508DC
void MAI_Fat__Fi(int i) {
	int mx;
	int my;
	int md;
	int v;
	struct MonsterStruct *Monst;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80150AA4
void MAI_Sneak__Fi(int i) {
	int mx;
	int my;
	int md;
	int v;
	struct MonsterStruct *Monst;
	int dist;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80150E80
void MAI_Fireman__Fi(int i) {
	int mx;
	int my;
	int md;
	int pnum;
	int fx;
	int fy;
	struct MonsterStruct *Monst;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80151184
void MAI_Fallen__Fi(int i) {
	struct MonsterStruct *Monst;
	int x;
	int y;
	int xpos;
	int ypos;
	int m;
	int rad;
	int my;
	int aitype;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80151498
void MAI_Cleaver__Fi(int i) {
	struct MonsterStruct *Monst;
	int mx;
	int my;
	int md;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8015159C
void MAI_Round__FiUc(int i, unsigned char special) {
	int mx;
	int my;
	int md;
	int v;
	int fx;
	int fy;
	int dist;
	struct MonsterStruct *Monst;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x801519DC
void MAI_GoatMc__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x801519FC
void MAI_Ranged__FiiUc(int i, int missile_type, unsigned char special) {
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	struct MonsterStruct *Monst;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80151C20
void MAI_GoatBow__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80151C44
void MAI_Succ__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80151C68
void MAI_AcidUniq__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80151C8C
void MAI_Scav__Fi(int i) {
	struct MonsterStruct *Monst;
	int x;
	int y;
	unsigned char done;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80152050
void MAI_Garg__Fi(int i) {
	struct MonsterStruct *Monst;
	int mx;
	int my;
	int md;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80152230
void MAI_RoundRanged__FiiUciUc(int i, int missile_type, unsigned char checkdoors, int dam, int lessmissiles) {
	unsigned char lessmissiles;
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	int v;
	int dist;
	struct MonsterStruct *Monst;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80152720
void MAI_Magma__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8015274C
void MAI_Storm__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80152778
void MAI_Acid__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x801527A8
void MAI_Diablo__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x801527D4
void MAI_RR2__Fiii(int i, int mistype, int dam) {
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	int v;
	int dist;
	struct MonsterStruct *Monst;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80152CB8
void MAI_Mega__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80152CDC
void MAI_SkelKing__Fi(int i) {
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	int v;
	int dist;
	struct MonsterStruct *Monst;
	int nx;
	int ny;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80153218
void MAI_Rhino__Fi(int i) {
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	int v;
	int dist;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
	int mi;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x801536D4
void MAI_Counselor__Fi(int i) {
	int _mx;
	int _my;
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	int v;
	int dist;
	struct MonsterStruct *Monst;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80153B70
void MAI_Garbud__Fi(int i) {
	int md;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80153D80
void MAI_Zhar__Fi(int i) {
	int mx;
	int my;
	int md;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80153F7C
void MAI_SnotSpil__Fi(int i) {
	int md;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x801541CC
void MAI_Lazurus__Fi(int i) {
	int md;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80154470
void MAI_Lazhelp__Fi(int i) {
	int md;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x801545A8
void MAI_Lachdanan__Fi(int i) {
	int md;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80154758
void MAI_Warlord__Fi(int i) {
	int md;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x801548C0
void DeleteMonsterList__Fv() {
	int i;
	int mi;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x801549E4
void ProcessMonsters__Fv() {
	unknown DoWipe;
	struct MonsterStruct *Monst;
	int oldmode;
	int i;
	int mi;
	int raflag;
	int mx;
	int my;
	int _menemy;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80154FAC
unsigned char DirOK__Fii(int i, int mdir) {
	long fx;
	long fy;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80155158
unsigned char PosOkMissile__Fii(int x, int y) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x801551D0
unsigned char CheckNoSolid__Fii(int x, int y) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x801551F0
unsigned char LineClearF__FPFii_Uciiii(unsigned char (*Clear)(), int x1, int y1, int x2, int y2) {
	int y2;
	int dx;
	int dy;
	int d;
	int dincH;
	int dincD;
	int xincD;
	int yincD;
	int xorg;
	int yorg;
	unsigned char done;
	int tmp;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80155478
unsigned char LineClear__Fiiii(int x1, int y1, int x2, int y2) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x801554B8
unsigned char LineClearF1__FPFiii_Uciiiii(unsigned char (*Clear)(), int monst, int x1, int y1, int x2, int y2) {
	int x2;
	int y2;
	int dx;
	int dy;
	int d;
	int dincH;
	int dincD;
	int xincD;
	int yincD;
	int xorg;
	int yorg;
	unsigned char done;
	int tmp;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8015574C
void M_FallenFear__Fii(int x, int y) {
	int i;
	int mi;
	int rundist;
	int aitype;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80155934
void PrintMonstHistory__Fi(int mt) {
	int res;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80155BB8
void PrintUniqueHistory__Fv() {
	int res;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80155CE4
void MissToMonst__Fiii(int i, int x, int y) {
	int oldx;
	int oldy;
	int newx;
	int newy;
	struct MissileStruct *Miss;
	int m;
	struct MonsterStruct *Monst;
	int pnum;
	unknown KnockOk;
	struct PlayerStruct *ptrplr;
	struct PlayerStruct *plr2;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x801561B0
unsigned char PosOkMonst3__Fiii(int i, int x, int y) {
	unsigned char ret;
	int oi;
	int objtype;
	int mi;
	unsigned char fire;
	unsigned char isdoor;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8015648C
int M_SpawnSkel__Fiii(int x, int y, int dir) {
	int i;
	int j;
	int skeltypes;
	int skel;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x801565DC
void TalktoMonster__Fi(int i) {
	int pnum;
	int itm;
	struct MonsterStruct *Monst;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8015671C
void SpawnGolum__Fiiii(int i, int x, int y, int mi) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8015694C
unsigned char CanTalkToMonst__Fi(int m) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8015698C
unsigned char CheckMonsterHit__FiRUc(int m, unsigned char *ret) {
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80156A68
unknown gSameRoom__Fii(int m, int i) {
	struct MonsterStruct *m1;
	struct MonsterStruct *m2;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x80156B00
void MAI_Golum__Fi(int i) {
	int ok;
	int j;
	int k;
	int mid;
	int mx;
	int my;
	int md;
	int cursm;
	int sdata;
	int omp;
	struct MonsterStruct *Monst;
	struct MonsterStruct *pMonster;
	int nd;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8015702C
void M_StartAttack__Fi(int i) {
	int md;
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}

// Path: C:\diabpsx\SOURCE\MONSTER.CPP
// Addr: 0x8015711C
void M_StartWalk__Fiiiiii(int i, int xvel, int yvel, int xadd, int yadd, int EndDir) {
	int yadd;
	int EndDir;
	long fx;
	long fy;
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}


void DeleteMonster__Fi(int i) {
	int temp;
}

int M_GetDir__Fi(int i) {
}

void M_StartDelay__Fii(int i, int len) {
}

void M_StartRAttack__Fiii(int i, int missile_type, int dam) {
	int md;
	MonsterStruct pmonster;
	int _mx;
	int _my;
}

void M_StartRSpAttack__Fiii(int i, int missile_type, int dam) {
	int md;
	MonsterStruct pmonster;
	int _mx;
	int _my;
}

void M_StartSpAttack__Fi(int i) {
	int md;
	MonsterStruct pmonster;
	int _mx;
	int _my;
}

void M_StartEat__Fi(int i) {
	MonsterStruct pmonster;
	int _mx;
	int _my;
}

void M_GetKnockback__Fii(int i, int d) {
	MonsterStruct pmonster;
	int _mx;
	int _my;
}

void M_StartHit__Fiii(int i, int pnum, int dam) {
	MonsterStruct pmonster;
	int _moldx;
	int _moldy;
}

void M_DiabloDeath__FiUci(int i, unsigned char sendmsg, int pnum) {
	MonsterStruct Monst;
	MonsterStruct pmonster;
	int _mx;
	int _my;
	int steps;
	int j;
	int k;
	int _moldx;
	int _moldy;
}

void M2MStartHit__Fiii(int mid, int i, int dam) {
	MonsterStruct pmonster;
	int _mx;
	int _my;
}

void MonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg) {
	int md;
	MonsterStruct Monst;
	MonsterStruct pmonster;
	int _mx;
	int _my;
	int omp;
}

void SyncMonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg) {
	int md;
	MonsterStruct Monst;
	int _mx;
	int _my;
}

void M2MStartKill__Fii(int i, int mid) {
	int md;
	MonsterStruct pmonster;
	int _mx;
	int _my;
	int omp;
}

void M_StartKill__Fii(int i, int pnum) {
	MonsterStruct pmonster;
	int _mx;
	int _my;
}

void M_SyncStartKill__Fiiii(int i, int x, int y, int pnum) {
}

void M_StartFadein__FiiUc(int i, int md, unsigned char backwards) {
}

void M_StartFadeout__FiiUc(int i, int md, unsigned char backwards) {
}

void M_StartHeal__Fi(int i) {
	MonsterStruct Monst;
}

void M_ChangeLightOffset__Fi(int monst) {
	int lx;
	int ly;
	int xm;
	int ym;
	int x2;
	int y2;
	int ox;
	int oy;
	MonsterStruct pmonster;
}

int M_DoStand__Fi(int i) {
	MonsterStruct Monst;
}

int M_DoWalk__Fi(int i) {
	int rv;
}

int M_DoWalk2__Fi(int i) {
	int rv;
}

int M_DoWalk3__Fi(int i) {
	int rv;
}

void M_TryM2MHit__Fiiiii(int i, int mid, int hper, int mind, int maxd) {
	int maxd;
	int hit;
	int dam;
	unsigned char ret;
}

void M_TryH2HHit__Fiiiii(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	PlayerStruct ptrplr;
	int hit;
	int hper;
	int tac;
	long dam;
	int dx;
	int dy;
	int blk;
	int blkper;
	int mdam;
	MonsterStruct pMonster;
	int _mx;
	int _my;
	int _px;
	int _py;
	unknown KnockOk;
	int newx;
	int newy;
	PlayerStruct plr2;
}

int M_DoAttack__Fi(int i) {
	MonsterStruct Monst;
	unsigned char mMinDamage;
	unsigned char mMaxDamage;
	unsigned char mHit;
	int _menemy;
}

int M_DoRAttack__Fi(int i) {
	int multimissiles;
	int mi;
}

int M_DoRSpAttack__Fi(int i) {
}

int M_DoSAttack__Fi(int i) {
}

int M_DoFadein__Fi(int i) {
}

int M_DoFadeout__Fi(int i) {
	int mtype;
}

int M_DoHeal__Fi(int i) {
	MonsterStruct Monst;
}

int M_DoTalk__Fi(int i) {
	int tren;
	MonsterStruct Monst;
	int _mx;
	int _my;
	int mName;
}

void M_Teleport__Fi(int i) {
	MonsterStruct Monst;
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

int M_DoGotHit__Fi(int i) {
}

void DoEnding__Fi(int p) {
}

void PrepDoEnding__Fi(int pnum) {
	int i;
}

int M_DoDeath__Fi(int i) {
	MonsterStruct pMonster;
	int _mx;
	int _my;
}

int M_DoSpStand__Fi(int i) {
}

int M_DoDelay__Fi(int i) {
	int tmp;
}

int M_DoStone__Fi(int i) {
}

void M_WalkDir__Fii(int i, int md) {
	int mwi;
}

void GroupUnity__Fi(int i) {
	int leader;
	int tmp;
	int m;
	MonsterStruct pMonster;
	int _mx;
	int _my;
}

unsigned char M_CallWalk__Fii(int i, int md) {
	int mdtemp;
	unsigned char ok;
}

unsigned char M_CallWalk2__Fii(int i, int md) {
	int mdtemp;
	unsigned char ok;
}

unsigned char M_DumbWalk__Fii(int i, int md) {
}

unsigned char M_RoundWalk__FiiRi(int i, int md, int* dir) {
	int mdtemp;
	unsigned char ok;
}

void MAI_Zombie__Fi(int i) {
	MonsterStruct Monst;
	int mx;
	int my;
	int md;
	int v;
}

void MAI_SkelSd__Fi(int i) {
	MonsterStruct Monst;
	int mx;
	int my;
	int md;
}

void MAI_Snake__Fi(int i) {
	MonsterStruct Monst;
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	int pnum;
	char pattern[6];
	int tmp;
}

void MAI_Bat__Fi(int i) {
	MonsterStruct Monst;
	int mx;
	int my;
	int md;
	int v;
	int pnum;
	int fx;
	int fy;
}

void MAI_SkelBow__Fi(int i) {
	int mx;
	int my;
	int md;
	int fx;
	int fy;
	unsigned char walking;
	int v;
	MonsterStruct Monst;
}

void MAI_Fat__Fi(int i) {
	int mx;
	int my;
	int md;
	int v;
	MonsterStruct Monst;
}

void MAI_Sneak__Fi(int i) {
	int mx;
	int my;
	int md;
	int v;
	MonsterStruct Monst;
	int dist;
}

void MAI_Fireman__Fi(int i) {
	int mx;
	int my;
	int md;
	int pnum;
	int fx;
	int fy;
	MonsterStruct Monst;
}

void MAI_Fallen__Fi(int i) {
	MonsterStruct Monst;
	int x;
	int y;
	int xpos;
	int ypos;
	int m;
	int rad;
	int my;
	int aitype;
}

void MAI_Cleaver__Fi(int i) {
	MonsterStruct Monst;
	int mx;
	int my;
	int md;
}

void MAI_Round__FiUc(int i, unsigned char special) {
	int mx;
	int my;
	int md;
	int v;
	int fx;
	int fy;
	int dist;
	MonsterStruct Monst;
}

void MAI_GoatMc__Fi(int i) {
}

void MAI_Ranged__FiiUc(int i, int missile_type, unsigned char special) {
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	MonsterStruct Monst;
}

void MAI_GoatBow__Fi(int i) {
}

void MAI_Succ__Fi(int i) {
}

void MAI_AcidUniq__Fi(int i) {
}

void MAI_Scav__Fi(int i) {
	MonsterStruct Monst;
	int x;
	int y;
	unsigned char done;
}

void MAI_Garg__Fi(int i) {
	MonsterStruct Monst;
	int mx;
	int my;
	int md;
}

void MAI_RoundRanged__FiiUciUc(int i, int missile_type, unsigned char checkdoors, int dam, int lessmissiles) {
	unsigned char lessmissiles;
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	int v;
	int dist;
	MonsterStruct Monst;
}

void MAI_Magma__Fi(int i) {
}

void MAI_Storm__Fi(int i) {
}

void MAI_Acid__Fi(int i) {
}

void MAI_Diablo__Fi(int i) {
}

void MAI_RR2__Fiii(int i, int mistype, int dam) {
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	int v;
	int dist;
	MonsterStruct Monst;
}

void MAI_Mega__Fi(int i) {
}

void MAI_SkelKing__Fi(int i) {
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	int v;
	int dist;
	MonsterStruct Monst;
	int nx;
	int ny;
	int _mx;
	int _my;
}

void MAI_Rhino__Fi(int i) {
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	int v;
	int dist;
	MonsterStruct Monst;
	int _mx;
	int _my;
	int mi;
}

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
	MonsterStruct Monst;
}

void MAI_Garbud__Fi(int i) {
	int md;
	MonsterStruct Monst;
	int _mx;
	int _my;
}

void MAI_Zhar__Fi(int i) {
	int mx;
	int my;
	int md;
	MonsterStruct Monst;
	int _mx;
	int _my;
}

void MAI_SnotSpil__Fi(int i) {
	int md;
	MonsterStruct Monst;
	int _mx;
	int _my;
}

void MAI_Lazurus__Fi(int i) {
	int md;
	MonsterStruct Monst;
	int _mx;
	int _my;
}

void MAI_Lazhelp__Fi(int i) {
	int md;
	MonsterStruct Monst;
	int _mx;
	int _my;
}

void MAI_Lachdanan__Fi(int i) {
	int md;
	MonsterStruct Monst;
	int _mx;
	int _my;
}

void MAI_Warlord__Fi(int i) {
	int md;
	MonsterStruct Monst;
	int _mx;
	int _my;
}

void DeleteMonsterList__Fv() {
	int i;
	int mi;
}

void ProcessMonsters__Fv() {
	unknown DoWipe;
	MonsterStruct Monst;
	int oldmode;
	int i;
	int mi;
	int raflag;
	int mx;
	int my;
	int _menemy;
}

unsigned char DirOK__Fii(int i, int mdir) {
	long fx;
	long fy;
}

unsigned char PosOkMissile__Fii(int x, int y) {
}

unsigned char CheckNoSolid__Fii(int x, int y) {
}

unsigned char LineClearF__FPFii_Uciiii(unsigned char* Clear, int x1, int y1, int x2, int y2) {
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

unsigned char LineClear__Fiiii(int x1, int y1, int x2, int y2) {
}

unsigned char LineClearF1__FPFiii_Uciiiii(unsigned char* Clear, int monst, int x1, int y1, int x2, int y2) {
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

void M_FallenFear__Fii(int x, int y) {
	int i;
	int mi;
	int rundist;
	int aitype;
}

void PrintMonstHistory__Fi(int mt) {
	int res;
}

void PrintUniqueHistory__Fv() {
	int res;
}

void MissToMonst__Fiii(int i, int x, int y) {
	int oldx;
	int oldy;
	int newx;
	int newy;
	MissileStruct Miss;
	int m;
	MonsterStruct Monst;
	int pnum;
	unknown KnockOk;
	PlayerStruct ptrplr;
	PlayerStruct plr2;
}

unsigned char PosOkMonst3__Fiii(int i, int x, int y) {
	unsigned char ret;
	int oi;
	int objtype;
	int mi;
	unsigned char fire;
	unsigned char isdoor;
}

int M_SpawnSkel__Fiii(int x, int y, int dir) {
	int i;
	int j;
	int skeltypes;
	int skel;
}

void TalktoMonster__Fi(int i) {
	int pnum;
	int itm;
	MonsterStruct Monst;
}

void SpawnGolum__Fiiii(int i, int x, int y, int mi) {
}

unsigned char CanTalkToMonst__Fi(int m) {
}

unsigned char CheckMonsterHit__FiRUc(int m, unsigned char* ret) {
}

unknown gSameRoom__Fii(int m, int i) {
	MonsterStruct m1;
	MonsterStruct m2;
}

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
	MonsterStruct Monst;
	MonsterStruct pMonster;
	int nd;
}

void M_StartAttack__Fi(int i) {
	int md;
	MonsterStruct pmonster;
	int _mx;
	int _my;
}

void M_StartWalk__Fiiiiii(int i, int xvel, int yvel, int xadd, int yadd, int EndDir) {
	int yadd;
	int EndDir;
	long fx;
	long fy;
	MonsterStruct pmonster;
	int _mx;
	int _my;
}

void DeleteMonster__Fi(int i) {
	int temp;
}

int M_GetDir__Fi(int i) {
}

void M_StartDelay__Fii(int i, int len) {
}

void M_StartRAttack__Fiii(int i, int missile_type, int dam) {
	int md;
	MonsterStruct pmonster;
	int _mx;
	int _my;
}

void M_StartRSpAttack__Fiii(int i, int missile_type, int dam) {
	int md;
	MonsterStruct pmonster;
	int _mx;
	int _my;
}

void M_StartSpAttack__Fi(int i) {
	int md;
	MonsterStruct pmonster;
	int _mx;
	int _my;
}

void M_StartEat__Fi(int i) {
	MonsterStruct pmonster;
	int _mx;
	int _my;
}

void M_GetKnockback__Fii(int i, int d) {
	MonsterStruct pmonster;
	int _mx;
	int _my;
}

void M_StartHit__Fiii(int i, int pnum, int dam) {
	MonsterStruct pmonster;
	int _moldx;
	int _moldy;
}

void M_DiabloDeath__FiUci(int i, unsigned char sendmsg, int pnum) {
	MonsterStruct Monst;
	MonsterStruct pmonster;
	int _mx;
	int _my;
	int steps;
	int j;
	int k;
	int _moldx;
	int _moldy;
}

void M2MStartHit__Fiii(int mid, int i, int dam) {
	MonsterStruct pmonster;
	int _mx;
	int _my;
}

void MonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg) {
	int md;
	MonsterStruct Monst;
	MonsterStruct pmonster;
	int _mx;
	int _my;
	int omp;
}

void SyncMonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg) {
	int md;
	MonsterStruct Monst;
	int _mx;
	int _my;
}

void M2MStartKill__Fii(int i, int mid) {
	int md;
	MonsterStruct pmonster;
	int _mx;
	int _my;
	int omp;
}

void M_StartKill__Fii(int i, int pnum) {
	MonsterStruct pmonster;
	int _mx;
	int _my;
}

void M_SyncStartKill__Fiiii(int i, int x, int y, int pnum) {
}

void M_StartFadein__FiiUc(int i, int md, unsigned char backwards) {
}

void M_StartFadeout__FiiUc(int i, int md, unsigned char backwards) {
}

void M_StartHeal__Fi(int i) {
	MonsterStruct Monst;
}

void M_ChangeLightOffset__Fi(int monst) {
	int lx;
	int ly;
	int xm;
	int ym;
	int x2;
	int y2;
	int ox;
	int oy;
	MonsterStruct pmonster;
}

int M_DoStand__Fi(int i) {
	MonsterStruct Monst;
}

int M_DoWalk__Fi(int i) {
	int rv;
}

int M_DoWalk2__Fi(int i) {
	int rv;
}

int M_DoWalk3__Fi(int i) {
	int rv;
}

void M_TryM2MHit__Fiiiii(int i, int mid, int hper, int mind, int maxd) {
	int maxd;
	int hit;
	int dam;
	unsigned char ret;
}

void M_TryH2HHit__Fiiiii(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	PlayerStruct ptrplr;
	int hit;
	int hper;
	int tac;
	long dam;
	int dx;
	int dy;
	int blk;
	int blkper;
	int mdam;
	MonsterStruct pMonster;
	int _mx;
	int _my;
	int _px;
	int _py;
	unknown KnockOk;
	int newx;
	int newy;
	PlayerStruct plr2;
}

int M_DoAttack__Fi(int i) {
	MonsterStruct Monst;
	unsigned char mMinDamage;
	unsigned char mMaxDamage;
	unsigned char mHit;
	int _menemy;
}

int M_DoRAttack__Fi(int i) {
	int multimissiles;
	int mi;
}

int M_DoRSpAttack__Fi(int i) {
}

int M_DoSAttack__Fi(int i) {
}

int M_DoFadein__Fi(int i) {
}

int M_DoFadeout__Fi(int i) {
	int mtype;
}

int M_DoHeal__Fi(int i) {
	MonsterStruct Monst;
}

int M_DoTalk__Fi(int i) {
	int tren;
	MonsterStruct Monst;
	int _mx;
	int _my;
	int mName;
}

void M_Teleport__Fi(int i) {
	MonsterStruct Monst;
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

int M_DoGotHit__Fi(int i) {
}

void DoEnding__Fi(int p) {
}

void PrepDoEnding__Fi(int pnum) {
	int i;
}

int M_DoDeath__Fi(int i) {
	MonsterStruct pMonster;
	int _mx;
	int _my;
}

int M_DoSpStand__Fi(int i) {
}

int M_DoDelay__Fi(int i) {
	int tmp;
}

int M_DoStone__Fi(int i) {
}

void M_WalkDir__Fii(int i, int md) {
	int mwi;
}

void GroupUnity__Fi(int i) {
	int leader;
	int tmp;
	int m;
	MonsterStruct pMonster;
	int _mx;
	int _my;
}

unsigned char M_CallWalk__Fii(int i, int md) {
	int mdtemp;
	unsigned char ok;
}

unsigned char M_CallWalk2__Fii(int i, int md) {
	int mdtemp;
	unsigned char ok;
}

unsigned char M_DumbWalk__Fii(int i, int md) {
}

unsigned char M_RoundWalk__FiiRi(int i, int md, int* dir) {
	int mdtemp;
	unsigned char ok;
}

void MAI_Zombie__Fi(int i) {
	MonsterStruct Monst;
	int mx;
	int my;
	int md;
	int v;
}

void MAI_SkelSd__Fi(int i) {
	MonsterStruct Monst;
	int mx;
	int my;
	int md;
}

void MAI_Snake__Fi(int i) {
	MonsterStruct Monst;
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	int pnum;
	char pattern[6];
	int tmp;
}

void MAI_Bat__Fi(int i) {
	MonsterStruct Monst;
	int mx;
	int my;
	int md;
	int v;
	int pnum;
	int fx;
	int fy;
}

void MAI_SkelBow__Fi(int i) {
	int mx;
	int my;
	int md;
	int fx;
	int fy;
	unsigned char walking;
	int v;
	MonsterStruct Monst;
}

void MAI_Fat__Fi(int i) {
	int mx;
	int my;
	int md;
	int v;
	MonsterStruct Monst;
}

void MAI_Sneak__Fi(int i) {
	int mx;
	int my;
	int md;
	int v;
	MonsterStruct Monst;
	int dist;
}

void MAI_Fireman__Fi(int i) {
	int mx;
	int my;
	int md;
	int pnum;
	int fx;
	int fy;
	MonsterStruct Monst;
}

void MAI_Fallen__Fi(int i) {
	MonsterStruct Monst;
	int x;
	int y;
	int xpos;
	int ypos;
	int m;
	int rad;
	int my;
	int aitype;
}

void MAI_Cleaver__Fi(int i) {
	MonsterStruct Monst;
	int mx;
	int my;
	int md;
}

void MAI_Round__FiUc(int i, unsigned char special) {
	int mx;
	int my;
	int md;
	int v;
	int fx;
	int fy;
	int dist;
	MonsterStruct Monst;
}

void MAI_GoatMc__Fi(int i) {
}

void MAI_Ranged__FiiUc(int i, int missile_type, unsigned char special) {
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	MonsterStruct Monst;
}

void MAI_GoatBow__Fi(int i) {
}

void MAI_Succ__Fi(int i) {
}

void MAI_AcidUniq__Fi(int i) {
}

void MAI_Scav__Fi(int i) {
	MonsterStruct Monst;
	int x;
	int y;
	unsigned char done;
}

void MAI_Garg__Fi(int i) {
	MonsterStruct Monst;
	int mx;
	int my;
	int md;
}

void MAI_RoundRanged__FiiUciUc(int i, int missile_type, unsigned char checkdoors, int dam, int lessmissiles) {
	unsigned char lessmissiles;
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	int v;
	int dist;
	MonsterStruct Monst;
}

void MAI_Magma__Fi(int i) {
}

void MAI_Storm__Fi(int i) {
}

void MAI_Acid__Fi(int i) {
}

void MAI_Diablo__Fi(int i) {
}

void MAI_RR2__Fiii(int i, int mistype, int dam) {
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	int v;
	int dist;
	MonsterStruct Monst;
}

void MAI_Mega__Fi(int i) {
}

void MAI_SkelKing__Fi(int i) {
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	int v;
	int dist;
	MonsterStruct Monst;
	int nx;
	int ny;
	int _mx;
	int _my;
}

void MAI_Rhino__Fi(int i) {
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	int v;
	int dist;
	MonsterStruct Monst;
	int _mx;
	int _my;
	int mi;
}

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
	MonsterStruct Monst;
}

void MAI_Garbud__Fi(int i) {
	int md;
	MonsterStruct Monst;
	int _mx;
	int _my;
}

void MAI_Zhar__Fi(int i) {
	int mx;
	int my;
	int md;
	MonsterStruct Monst;
	int _mx;
	int _my;
}

void MAI_SnotSpil__Fi(int i) {
	int md;
	MonsterStruct Monst;
	int _mx;
	int _my;
}

void MAI_Lazurus__Fi(int i) {
	int md;
	MonsterStruct Monst;
	int _mx;
	int _my;
}

void MAI_Lazhelp__Fi(int i) {
	int md;
	MonsterStruct Monst;
	int _mx;
	int _my;
}

void MAI_Lachdanan__Fi(int i) {
	int md;
	MonsterStruct Monst;
	int _mx;
	int _my;
}

void MAI_Warlord__Fi(int i) {
	int md;
	MonsterStruct Monst;
	int _mx;
	int _my;
}

void DeleteMonsterList__Fv() {
	int i;
	int mi;
}

void ProcessMonsters__Fv() {
	unknown DoWipe;
	MonsterStruct Monst;
	int oldmode;
	int i;
	int mi;
	int raflag;
	int mx;
	int my;
	int _menemy;
}

unsigned char DirOK__Fii(int i, int mdir) {
	long fx;
	long fy;
}

unsigned char PosOkMissile__Fii(int x, int y) {
}

unsigned char CheckNoSolid__Fii(int x, int y) {
}

unsigned char LineClearF__FPFii_Uciiii(unsigned char* Clear, int x1, int y1, int x2, int y2) {
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

unsigned char LineClear__Fiiii(int x1, int y1, int x2, int y2) {
}

unsigned char LineClearF1__FPFiii_Uciiiii(unsigned char* Clear, int monst, int x1, int y1, int x2, int y2) {
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

void M_FallenFear__Fii(int x, int y) {
	int i;
	int mi;
	int rundist;
	int aitype;
}

void PrintMonstHistory__Fi(int mt) {
	int res;
}

void PrintUniqueHistory__Fv() {
	int res;
}

void MissToMonst__Fiii(int i, int x, int y) {
	int oldx;
	int oldy;
	int newx;
	int newy;
	MissileStruct Miss;
	int m;
	MonsterStruct Monst;
	int pnum;
	unknown KnockOk;
	PlayerStruct ptrplr;
	PlayerStruct plr2;
}

unsigned char PosOkMonst3__Fiii(int i, int x, int y) {
	unsigned char ret;
	int oi;
	int objtype;
	int mi;
	unsigned char fire;
	unsigned char isdoor;
}

int M_SpawnSkel__Fiii(int x, int y, int dir) {
	int i;
	int j;
	int skeltypes;
	int skel;
}

void TalktoMonster__Fi(int i) {
	int pnum;
	int itm;
	MonsterStruct Monst;
}

void SpawnGolum__Fiiii(int i, int x, int y, int mi) {
}

unsigned char CanTalkToMonst__Fi(int m) {
}

unsigned char CheckMonsterHit__FiRUc(int m, unsigned char* ret) {
}

unknown gSameRoom__Fii(int m, int i) {
	MonsterStruct m1;
	MonsterStruct m2;
}

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
	MonsterStruct Monst;
	MonsterStruct pMonster;
	int nd;
}

void M_StartAttack__Fi(int i) {
	int md;
	MonsterStruct pmonster;
	int _mx;
	int _my;
}

void M_StartWalk__Fiiiiii(int i, int xvel, int yvel, int xadd, int yadd, int EndDir) {
	int yadd;
	int EndDir;
	long fx;
	long fy;
	MonsterStruct pmonster;
	int _mx;
	int _my;
}


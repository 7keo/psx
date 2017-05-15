// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80139C04
void GetDamageAmt__FiPiT1(int i, int *mind, int *maxd) {
	int k;
	int sl;
	struct PlayerStruct *plr;
	int _pMagic;
	char _pLevel;
	char _pClass;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013A1FC
int CheckBlock__Fiiii(int fx, int fy, int tx, int ty) {
	int coll;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013A2B0
int FindClosest__Fiii(int sx, int sy, int rad) {
	int cr;
	int cidx;
	int cent;
	int cne;
	int mid;
	int tx;
	int ty;
	int CrawlNum[19];
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013A43C
int GetSpellLevel__Fii(int id, int sn) {
	int rv;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013A4B0
int GetDirection8__Fiiii(int x1, int y1, int x2, int y2) {
	unsigned char Dirs[16][16];
	unsigned char lrtoul[3];
	unsigned char urtoll[3];
	unsigned char lltour[3];
	unsigned char ultolr[3];
	int mx;
	int my;
	int md;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013A6CC
int GetDirection16__Fiiii(int x1, int y1, int x2, int y2) {
	unsigned char Dirs[16][16];
	unsigned char lrtoul[5];
	unsigned char urtoll[5];
	unsigned char lltour[5];
	unsigned char ultolr[5];
	int mx;
	int my;
	int md;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013A8E8
void DeleteMissile__Fii(int mi, int i) {
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013A988
void GetMissileVel__Fiiiiii(int i, int sx, int sy, int dx, int dy, int v) {
	int dy;
	int v;
	long dxp;
	long dyp;
	long dr;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013AB44
void PutMissile__Fi(int i) {
	int mx;
	int my;
	char m;
	char dMiss;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013ADA0
void GetMissilePos__Fi(int i) {
	long mx;
	long my;
	long dx;
	long dy;
	long lx;
	long ly;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013AED4
void MoveMissilePos__Fi(int i) {
	int dx;
	int dy;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013B04C
unsigned char MonsterTrapHit__FiiiiiUc(int m, int mindam, int maxdam, int dist, int t, int shift) {
	int t;
	unsigned char shift;
	int hit;
	int hper;
	long dam;
	int mor;
	int mir;
	unsigned char resist;
	unsigned char ret;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013B3D0
unsigned char MonsterMHit__FiiiiiiUc(int pnum, int m, int mindam, int maxdam, int dist, int t, int shift) {
	int dist;
	int t;
	unsigned char shift;
	int hit;
	int hper;
	long dam;
	int mor;
	int mir;
	unsigned char resist;
	unsigned char ret;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013BB90
unsigned char PlayerMHit__FiiiiiiUcUc(int pnum, int m, int dist, int mind, int maxd, int mtype, int shift, int earflag) {
	int mtype;
	unsigned char shift;
	unsigned char earflag;
	int hit;
	int hper;
	int tac;
	long dam;
	int blk;
	int blkper;
	int blkdir;
	int resper;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013C5EC
unsigned char Plr2PlrMHit__FiiiiiiUc(int pnum, int p, int mindam, int maxdam, int dist, int mtype, int shift) {
	int dist;
	int mtype;
	unsigned char shift;
	int hit;
	int hper;
	int tac;
	long dam;
	int blk;
	int blkper;
	int resper;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013CD88
void CheckMissileCol__FiiiUciiUcb(int i, int mindam, int maxdam, unsigned char shift, int mx, int my, int nodel, unknown HurtPlr) {
	int mx;
	int my;
	unsigned char nodel;
	int oi;
	struct MissileStruct *miss;
	struct map_info *dm;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013D2B8
unsigned char GetTableValue__FUci(unsigned char code, int dir) {
	unsigned char hicode;
	unsigned char locode;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013D34C
void SetMissAnim__Fii(int mi, int animtype) {
	int dir;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013D424
void SetMissDir__Fii(int mi, int dir) {
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013D470
void AddLArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	char mienemy;
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013D658
void AddArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	char mienemy;
	int id;
	int av;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013D818
void GetVileMissPos__Fiii(int mi, int dx, int dy) {
	int xx;
	int yy;
	int l;
	int j;
	int i;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013D954
void AddRndTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	char mienemy;
	int r1;
	int r2;
	unsigned char dirok;
	int nTries;
	int oi;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013DC98
void AddFirebolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	int dy;
	int midir;
	char micaster;
	int id;
	int sp;
	int i;
	int mx;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013DED0
void AddMagmaball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013DFEC
void AddTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int i;
	int k;
	int l;
	int j;
	int tx;
	int ty;
	int CrawlNum[6];
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013E228
void AddLightball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int id;
	int dam;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013E390
void AddFirewall__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int id;
	int i;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013E588
void AddFireball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	char mienemy;
	int id;
	int i;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013E7F4
void AddLightctrl__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int dam;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013E8E0
void AddLightning__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013EACC
void AddMisexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013ECF8
void AddWeapexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013EDF8
unsigned char CheckIfTrig__Fii(int x, int y) {
	int i;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013EFA0
void AddTown__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int i;
	int k;
	int l;
	int j;
	int tx;
	int ty;
	int mx;
	int CrawlNum[6];
	int omp;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013F420
void AddFlash__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
	int i;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013F64C
void AddFlash2__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
	int i;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013F83C
void AddManashield__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013F910
void AddFiremove__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013FA70
void AddGuardian__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
	int i;
	int k;
	int l;
	int j;
	int tx;
	int ty;
	int CrawlNum[6];
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013FEE4
void AddChain__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8013FF48
void AddRhino__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	int id;
	struct AnimStruct *anim;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x801400CC
void AddFlare__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	char mienemy;
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x801403DC
void AddAcid__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x801404F0
void AddAcidpud__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int monst;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x801405D4
void AddStone__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int id;
	int i;
	int j;
	int k;
	int l;
	int tx;
	int ty;
	int mid;
	int CrawlNum[6];
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80140904
void AddGolem__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
	int i;
	int mx;
	int CrawlNum[6];
	int k;
	int l;
	int j;
	int tx;
	int ty;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80140C44
void AddBoom__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int dam;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80140CE8
void AddHeal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
	int i;
	long l;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80140F14
void AddHealOther__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80140F84
void AddElement__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	int id;
	int i;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x801411B4
void AddIdentify__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80141258
void AddFirewallC__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int midir;
	int i;
	int k;
	int l;
	int j;
	int tx;
	int ty;
	int CrawlNum[6];
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80141518
void AddInfra__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	char mienemy;
	int id;
	int i;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80141624
void AddWave__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x801416B0
void AddNova__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	char mienemy;
	int id;
	int k;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x801418C0
void AddRepair__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80141978
void AddRecharge__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80141A30
void AddDisarm__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80141AA0
void AddApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
	int i;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80141D08
void AddFlame__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int seqno) {
	int dy;
	int midir;
	char mienemy;
	int id;
	int i;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80141F40
void AddFlamec__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	char mienemy;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80142038
void AddCbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	int dy;
	int midir;
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80142248
void AddHbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	int dy;
	int midir;
	int id;
	int sp;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80142414
void AddResurrect__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80142490
void AddResurrectBeam__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80142520
void AddTelekinesis__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80142590
void AddBoneSpirit__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	char mienemy;
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80142794
void AddRportal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int m2;
	struct MissileStruct *miss;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x801428C0
void AddDiabApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dam;
	int pnum;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80142A04
int AddMissile__Fiiiiiiciii(int sx, int sy, int v1, int v2, int midir, int mitype, int micaster, int id, int v3, int spllvl) {
	int midir;
	int mitype;
	char micaster;
	int id;
	int spllvl;
	int mi;
	int xyoffs[16];
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80142E90
int Sentfire__Fiii(int i, int sx, int sy) {
	int ex;
	int dir;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80143078
void MI_Dummy__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80143080
void MI_Golem__Fi(int i) {
	int id;
	int j;
	int k;
	int l;
	int m;
	int tx;
	int ty;
	int CrawlNum[6];
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x801432FC
void MI_SetManashield__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80143340
void MI_LArrow__Fi(int i) {
	int p;
	int mind;
	int maxd;
	int rst;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80143B54
void MI_Arrow__Fi(int i) {
	int p;
	int mind;
	int maxd;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80143D98
void MI_Firebolt__Fi(int i) {
	int omx;
	int omy;
	int d;
	int p;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x801444AC
void MI_Lightball__Fi(int i) {
	int j;
	int tx;
	int ty;
	int oi;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80144764
void MI_Acidpud__Fi(int i) {
	int range;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80144890
void MI_Firewall__Fi(int i) {
	int ExpLight[14];
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80144BAC
void MI_Fireball__Fi(int i) {
	int dam;
	int px;
	int py;
	int id;
	int mx;
	int my;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80145528
void MI_Lightctrl__Fi(int i) {
	int dam;
	int p;
	int mx;
	int my;
	struct MissileStruct *miss;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x801458E0
void MI_Lightning__Fi(int i) {
	int j;
	struct MissileStruct *miss;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x801459E0
void MI_Town__Fi(int i) {
	int p;
	int ExpLight[17];
	struct PlayerStruct *player;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80145D38
void MI_Flash__Fi(int i) {
	struct MissileStruct *miss;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x801460AC
void MI_Flash2__Fi(int i) {
	struct MissileStruct *miss;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80146288
void MI_Manashield__Fi(int i) {
	int j;
	int id;
	long diff;
	long pct;
	struct MissileStruct *miss;
	struct PlayerStruct *player;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80146588
void MI_Firemove__Fi(int i) {
	int j;
	int ExpLight[14];
	struct MissileStruct *miss;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80146828
void MI_Guardian__Fi(int i) {
	int j;
	int k;
	int sx1;
	int sy1;
	int ex;
	struct MissileStruct *miss;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80146AE0
void MI_Chain__Fi(int i) {
	struct MissileStruct *miss;
	int sx;
	int sy;
	int id;
	int l;
	int n;
	int m;
	int k;
	int rad;
	int tx;
	int ty;
	int CrawlNum[19];
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80146D48
void MI_Weapexp__Fi(int i) {
	int id;
	int mind;
	int maxd;
	int ExpLight[10];
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x801470A4
void MI_Misexp__Fi(int i) {
	int ExpLight[10];
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x801473C4
void MI_Acidsplat__Fi(int i) {
	int monst;
	int dam;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80147570
void MI_Teleport__Fi(int i) {
	int id;
	struct CBlocks *gblocks;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x801478DC
void MI_Stone__Fi(int i) {
	int m;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80147AB8
void RemoveStoneMissiles__Fiii(int mon, int mx, int my) {
	int i;
	int mi;
	struct MissileStruct *pmissile;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80147B40
void MI_Boom__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80147C44
void MI_Rhino__Fi(int i) {
	int mix;
	int miy;
	int mix2;
	int miy2;
	int omx;
	int omy;
	int monst;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80148054
void MI_FirewallC__Fi(int i) {
	struct MissileStruct *miss;
	int tx;
	int ty;
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80148288
void MI_Infra__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80148348
void MI_Apoca__Fi(int i) {
	int j;
	int k;
	int id;
	unsigned char exit;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80148600
void MI_Wave__Fi(int i) {
	int dira;
	int dirb;
	int nxa;
	int nya;
	int nxb;
	int nyb;
	int sd;
	int j;
	int f1;
	int f2;
	int id;
	int sx;
	int sy;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80148A9C
void MI_Nova__Fi(int i) {
	int k;
	int id;
	int sx;
	int sy;
	int dir;
	int en;
	int sx1;
	int sy1;
	int dam;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80148D78
void MI_Flame__Fi(int i) {
	int k;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80148F94
void MI_Flamec__Fi(int i) {
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80149210
void MI_Cbolt__Fi(int i) {
	int bpath[16];
	int sx;
	int sy;
	int dy;
	int md;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80149564
void MI_Hbolt__Fi(int i) {
	int dam;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80149890
void MI_Element__Fi(int i) {
	int mid;
	int sd;
	int dam;
	int cx;
	int cy;
	int px;
	int py;
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x80149FAC
void MI_Bonespirit__Fi(int i) {
	int mid;
	int sd;
	int dam;
	int cx;
	int cy;
	int id;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8014A3E0
void MI_ResurrectBeam__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8014A458
void MI_Rportal__Fi(int i) {
	int ExpLight[17];
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8014A694
void ProcessMissiles__Fv() {
	short i;
	short j;
	short mi;
	struct MissileStruct *miss;
	short *pmissileactive;
}

// Path: C:\diabpsx\SOURCE\MISSILES.CPP
// Addr: 0x8014AAC0
void ClearMissileSpot__Fi(int mi) {
}


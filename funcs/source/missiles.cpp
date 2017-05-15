void GetDamageAmt__FiPiT1(int i, int* mind, int* maxd) {
	int k;
	int sl;
	PlayerStruct plr;
	int _pMagic;
	char _pLevel;
	char _pClass;
}

int CheckBlock__Fiiii(int fx, int fy, int tx, int ty) {
	int coll;
}

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

int GetSpellLevel__Fii(int id, int sn) {
	int rv;
}

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

void DeleteMissile__Fii(int mi, int i) {
}

void GetMissileVel__Fiiiiii(int i, int sx, int sy, int dx, int dy, int v) {
	int dy;
	int v;
	long dxp;
	long dyp;
	long dr;
}

void PutMissile__Fi(int i) {
	int mx;
	int my;
	char m;
	char dMiss;
}

void GetMissilePos__Fi(int i) {
	long mx;
	long my;
	long dx;
	long dy;
	long lx;
	long ly;
}

void MoveMissilePos__Fi(int i) {
	int dx;
	int dy;
}

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

void CheckMissileCol__FiiiUciiUcb(int i, int mindam, int maxdam, unsigned char shift, int mx, int my, int nodel, unknown HurtPlr) {
	int mx;
	int my;
	unsigned char nodel;
	int oi;
	MissileStruct miss;
	map_info dm;
}

unsigned char GetTableValue__FUci(unsigned char code, int dir) {
	unsigned char hicode;
	unsigned char locode;
}

void SetMissAnim__Fii(int mi, int animtype) {
	int dir;
}

void SetMissDir__Fii(int mi, int dir) {
}

void AddLArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	char mienemy;
	int id;
}

void AddArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	char mienemy;
	int id;
	int av;
}

void GetVileMissPos__Fiii(int mi, int dx, int dy) {
	int xx;
	int yy;
	int l;
	int j;
	int i;
}

void AddRndTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	char mienemy;
	int r1;
	int r2;
	unsigned char dirok;
	int nTries;
	int oi;
}

void AddFirebolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	int dy;
	int midir;
	char micaster;
	int id;
	int sp;
	int i;
	int mx;
}

void AddMagmaball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
}

void AddTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int i;
	int k;
	int l;
	int j;
	int tx;
	int ty;
	int CrawlNum[6];
}

void AddLightball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int id;
	int dam;
}

void AddFirewall__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int id;
	int i;
}

void AddFireball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	char mienemy;
	int id;
	int i;
}

void AddLightctrl__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int dam;
}

void AddLightning__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	int id;
}

void AddMisexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

void AddWeapexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}

unsigned char CheckIfTrig__Fii(int x, int y) {
	int i;
}

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

void AddFlash__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
	int i;
}

void AddFlash2__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
	int i;
}

void AddManashield__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

void AddFiremove__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int id;
}

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

void AddChain__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
}

void AddRhino__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	int id;
	AnimStruct anim;
}

void AddFlare__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	char mienemy;
	int id;
}

void AddAcid__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int id;
}

void AddAcidpud__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int monst;
}

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

void AddBoom__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int dam;
}

void AddHeal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
	int i;
	long l;
}

void AddHealOther__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

void AddElement__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	int id;
	int i;
}

void AddIdentify__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

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

void AddInfra__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	char mienemy;
	int id;
	int i;
}

void AddWave__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
}

void AddNova__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	char mienemy;
	int id;
	int k;
}

void AddRepair__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

void AddRecharge__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

void AddDisarm__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

void AddApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
	int i;
}

void AddFlame__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int seqno) {
	int dy;
	int midir;
	char mienemy;
	int id;
	int i;
}

void AddFlamec__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	char mienemy;
}

void AddCbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	int dy;
	int midir;
	int id;
}

void AddHbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	int dy;
	int midir;
	int id;
	int sp;
}

void AddResurrect__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

void AddResurrectBeam__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
}

void AddTelekinesis__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

void AddBoneSpirit__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	char mienemy;
	int id;
}

void AddRportal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int m2;
	MissileStruct miss;
}

void AddDiabApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dam;
	int pnum;
}

int AddMissile__Fiiiiiiciii(int sx, int sy, int v1, int v2, int midir, int mitype, int micaster, int id, int v3, int spllvl) {
	int midir;
	int mitype;
	char micaster;
	int id;
	int spllvl;
	int mi;
	int xyoffs[16];
}

int Sentfire__Fiii(int i, int sx, int sy) {
	int ex;
	int dir;
}

void MI_Dummy__Fi(int i) {
}

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

void MI_SetManashield__Fi(int i) {
}

void MI_LArrow__Fi(int i) {
	int p;
	int mind;
	int maxd;
	int rst;
}

void MI_Arrow__Fi(int i) {
	int p;
	int mind;
	int maxd;
}

void MI_Firebolt__Fi(int i) {
	int omx;
	int omy;
	int d;
	int p;
}

void MI_Lightball__Fi(int i) {
	int j;
	int tx;
	int ty;
	int oi;
}

void MI_Acidpud__Fi(int i) {
	int range;
}

void MI_Firewall__Fi(int i) {
	int ExpLight[14];
}

void MI_Fireball__Fi(int i) {
	int dam;
	int px;
	int py;
	int id;
	int mx;
	int my;
}

void MI_Lightctrl__Fi(int i) {
	int dam;
	int p;
	int mx;
	int my;
	MissileStruct miss;
}

void MI_Lightning__Fi(int i) {
	int j;
	MissileStruct miss;
}

void MI_Town__Fi(int i) {
	int p;
	int ExpLight[17];
	PlayerStruct player;
}

void MI_Flash__Fi(int i) {
	MissileStruct miss;
}

void MI_Flash2__Fi(int i) {
	MissileStruct miss;
}

void MI_Manashield__Fi(int i) {
	int j;
	int id;
	long diff;
	long pct;
	MissileStruct miss;
	PlayerStruct player;
}

void MI_Firemove__Fi(int i) {
	int j;
	int ExpLight[14];
	MissileStruct miss;
}

void MI_Guardian__Fi(int i) {
	int j;
	int k;
	int sx1;
	int sy1;
	int ex;
	MissileStruct miss;
}

void MI_Chain__Fi(int i) {
	MissileStruct miss;
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

void MI_Weapexp__Fi(int i) {
	int id;
	int mind;
	int maxd;
	int ExpLight[10];
}

void MI_Misexp__Fi(int i) {
	int ExpLight[10];
}

void MI_Acidsplat__Fi(int i) {
	int monst;
	int dam;
}

void MI_Teleport__Fi(int i) {
	int id;
	CBlocks gblocks;
}

void MI_Stone__Fi(int i) {
	int m;
}

void RemoveStoneMissiles__Fiii(int mon, int mx, int my) {
	int i;
	int mi;
	MissileStruct pmissile;
}

void MI_Boom__Fi(int i) {
}

void MI_Rhino__Fi(int i) {
	int mix;
	int miy;
	int mix2;
	int miy2;
	int omx;
	int omy;
	int monst;
}

void MI_FirewallC__Fi(int i) {
	MissileStruct miss;
	int tx;
	int ty;
	int id;
}

void MI_Infra__Fi(int i) {
}

void MI_Apoca__Fi(int i) {
	int j;
	int k;
	int id;
	unsigned char exit;
}

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

void MI_Flame__Fi(int i) {
	int k;
}

void MI_Flamec__Fi(int i) {
	int id;
}

void MI_Cbolt__Fi(int i) {
	int bpath[16];
	int sx;
	int sy;
	int dy;
	int md;
}

void MI_Hbolt__Fi(int i) {
	int dam;
}

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

void MI_Bonespirit__Fi(int i) {
	int mid;
	int sd;
	int dam;
	int cx;
	int cy;
	int id;
}

void MI_ResurrectBeam__Fi(int i) {
}

void MI_Rportal__Fi(int i) {
	int ExpLight[17];
}

void ProcessMissiles__Fv() {
	short i;
	short j;
	short mi;
	MissileStruct miss;
	short* pmissileactive;
}

void ClearMissileSpot__Fi(int mi) {
}

void GetDamageAmt__FiPiT1(int i, int* mind, int* maxd) {
	int k;
	int sl;
	PlayerStruct plr;
	int _pMagic;
	char _pLevel;
	char _pClass;
}

int CheckBlock__Fiiii(int fx, int fy, int tx, int ty) {
	int coll;
}

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

int GetSpellLevel__Fii(int id, int sn) {
	int rv;
}

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

void DeleteMissile__Fii(int mi, int i) {
}

void GetMissileVel__Fiiiiii(int i, int sx, int sy, int dx, int dy, int v) {
	int dy;
	int v;
	long dxp;
	long dyp;
	long dr;
}

void PutMissile__Fi(int i) {
	int mx;
	int my;
	char m;
	char dMiss;
}

void GetMissilePos__Fi(int i) {
	long mx;
	long my;
	long dx;
	long dy;
	long lx;
	long ly;
}

void MoveMissilePos__Fi(int i) {
	int dx;
	int dy;
}

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

void CheckMissileCol__FiiiUciiUcb(int i, int mindam, int maxdam, unsigned char shift, int mx, int my, int nodel, unknown HurtPlr) {
	int mx;
	int my;
	unsigned char nodel;
	int oi;
	MissileStruct miss;
	map_info dm;
}

unsigned char GetTableValue__FUci(unsigned char code, int dir) {
	unsigned char hicode;
	unsigned char locode;
}

void SetMissAnim__Fii(int mi, int animtype) {
	int dir;
}

void SetMissDir__Fii(int mi, int dir) {
}

void AddLArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	char mienemy;
	int id;
}

void AddArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	char mienemy;
	int id;
	int av;
}

void GetVileMissPos__Fiii(int mi, int dx, int dy) {
	int xx;
	int yy;
	int l;
	int j;
	int i;
}

void AddRndTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	char mienemy;
	int r1;
	int r2;
	unsigned char dirok;
	int nTries;
	int oi;
}

void AddFirebolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	int dy;
	int midir;
	char micaster;
	int id;
	int sp;
	int i;
	int mx;
}

void AddMagmaball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
}

void AddTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int i;
	int k;
	int l;
	int j;
	int tx;
	int ty;
	int CrawlNum[6];
}

void AddLightball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int id;
	int dam;
}

void AddFirewall__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int id;
	int i;
}

void AddFireball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	char mienemy;
	int id;
	int i;
}

void AddLightctrl__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int dam;
}

void AddLightning__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	int id;
}

void AddMisexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

void AddWeapexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}

unsigned char CheckIfTrig__Fii(int x, int y) {
	int i;
}

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

void AddFlash__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
	int i;
}

void AddFlash2__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
	int i;
}

void AddManashield__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

void AddFiremove__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int id;
}

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

void AddChain__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
}

void AddRhino__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	int id;
	AnimStruct anim;
}

void AddFlare__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	char mienemy;
	int id;
}

void AddAcid__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int id;
}

void AddAcidpud__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int monst;
}

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

void AddBoom__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int dam;
}

void AddHeal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
	int i;
	long l;
}

void AddHealOther__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

void AddElement__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	int id;
	int i;
}

void AddIdentify__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

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

void AddInfra__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	char mienemy;
	int id;
	int i;
}

void AddWave__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
}

void AddNova__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	char mienemy;
	int id;
	int k;
}

void AddRepair__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

void AddRecharge__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

void AddDisarm__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

void AddApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
	int i;
}

void AddFlame__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int seqno) {
	int dy;
	int midir;
	char mienemy;
	int id;
	int i;
}

void AddFlamec__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	char mienemy;
}

void AddCbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	int dy;
	int midir;
	int id;
}

void AddHbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	int dy;
	int midir;
	int id;
	int sp;
}

void AddResurrect__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

void AddResurrectBeam__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
}

void AddTelekinesis__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int id;
}

void AddBoneSpirit__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dy;
	int midir;
	char mienemy;
	int id;
}

void AddRportal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int m2;
	MissileStruct miss;
}

void AddDiabApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int dam;
	int pnum;
}

int AddMissile__Fiiiiiiciii(int sx, int sy, int v1, int v2, int midir, int mitype, int micaster, int id, int v3, int spllvl) {
	int midir;
	int mitype;
	char micaster;
	int id;
	int spllvl;
	int mi;
	int xyoffs[16];
}

int Sentfire__Fiii(int i, int sx, int sy) {
	int ex;
	int dir;
}

void MI_Dummy__Fi(int i) {
}

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

void MI_SetManashield__Fi(int i) {
}

void MI_LArrow__Fi(int i) {
	int p;
	int mind;
	int maxd;
	int rst;
}

void MI_Arrow__Fi(int i) {
	int p;
	int mind;
	int maxd;
}

void MI_Firebolt__Fi(int i) {
	int omx;
	int omy;
	int d;
	int p;
}

void MI_Lightball__Fi(int i) {
	int j;
	int tx;
	int ty;
	int oi;
}

void MI_Acidpud__Fi(int i) {
	int range;
}

void MI_Firewall__Fi(int i) {
	int ExpLight[14];
}

void MI_Fireball__Fi(int i) {
	int dam;
	int px;
	int py;
	int id;
	int mx;
	int my;
}

void MI_Lightctrl__Fi(int i) {
	int dam;
	int p;
	int mx;
	int my;
	MissileStruct miss;
}

void MI_Lightning__Fi(int i) {
	int j;
	MissileStruct miss;
}

void MI_Town__Fi(int i) {
	int p;
	int ExpLight[17];
	PlayerStruct player;
}

void MI_Flash__Fi(int i) {
	MissileStruct miss;
}

void MI_Flash2__Fi(int i) {
	MissileStruct miss;
}

void MI_Manashield__Fi(int i) {
	int j;
	int id;
	long diff;
	long pct;
	MissileStruct miss;
	PlayerStruct player;
}

void MI_Firemove__Fi(int i) {
	int j;
	int ExpLight[14];
	MissileStruct miss;
}

void MI_Guardian__Fi(int i) {
	int j;
	int k;
	int sx1;
	int sy1;
	int ex;
	MissileStruct miss;
}

void MI_Chain__Fi(int i) {
	MissileStruct miss;
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

void MI_Weapexp__Fi(int i) {
	int id;
	int mind;
	int maxd;
	int ExpLight[10];
}

void MI_Misexp__Fi(int i) {
	int ExpLight[10];
}

void MI_Acidsplat__Fi(int i) {
	int monst;
	int dam;
}

void MI_Teleport__Fi(int i) {
	int id;
	CBlocks gblocks;
}

void MI_Stone__Fi(int i) {
	int m;
}

void RemoveStoneMissiles__Fiii(int mon, int mx, int my) {
	int i;
	int mi;
	MissileStruct pmissile;
}

void MI_Boom__Fi(int i) {
}

void MI_Rhino__Fi(int i) {
	int mix;
	int miy;
	int mix2;
	int miy2;
	int omx;
	int omy;
	int monst;
}

void MI_FirewallC__Fi(int i) {
	MissileStruct miss;
	int tx;
	int ty;
	int id;
}

void MI_Infra__Fi(int i) {
}

void MI_Apoca__Fi(int i) {
	int j;
	int k;
	int id;
	unsigned char exit;
}

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

void MI_Flame__Fi(int i) {
	int k;
}

void MI_Flamec__Fi(int i) {
	int id;
}

void MI_Cbolt__Fi(int i) {
	int bpath[16];
	int sx;
	int sy;
	int dy;
	int md;
}

void MI_Hbolt__Fi(int i) {
	int dam;
}

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

void MI_Bonespirit__Fi(int i) {
	int mid;
	int sd;
	int dam;
	int cx;
	int cy;
	int id;
}

void MI_ResurrectBeam__Fi(int i) {
}

void MI_Rportal__Fi(int i) {
	int ExpLight[17];
}

void ProcessMissiles__Fv() {
	short i;
	short j;
	short mi;
	MissileStruct miss;
	short* pmissileactive;
}

void ClearMissileSpot__Fi(int mi) {
}


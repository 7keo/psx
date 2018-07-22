#include "types.h"

// === [ Overlay ID d ] ===

// address: 0x80139BFC
void GameOnlyTestRoutine__Fv() {
}


// address: 0x80139C04
void GetDamageAmt__FiPiT1(int i, int *mind, int *maxd) {
	int k;
	int sl;
	struct PlayerStruct *plr;
	int _pMagic;
	char _pLevel;
	char _pClass;
}


// address: 0x8013A1FC
int CheckBlock__Fiiii(int fx, int fy, int tx, int ty) {
	int coll;
}


// address: 0x8013A2B0
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


// address: 0x8013A43C
int GetSpellLevel__Fii(int id, int sn) {
	int rv;
}


// address: 0x8013A4B0
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


// address: 0x8013A6CC
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


// address: 0x8013A8E8
void DeleteMissile__Fii(int mi, int i) {
}


// address: 0x8013A988
void GetMissileVel__Fiiiiii(int i, int sx, int sy, int dx, int dy, int v) {
	long dxp;
	long dyp;
	long dr;
}


// address: 0x8013AB44
void PutMissile__Fi(int i) {
	int mx;
	int my;
	char m;
	{
		{
			{
				{
					char dMiss;
				}
			}
		}
	}
}


// address: 0x8013ADA0
void GetMissilePos__Fi(int i) {
	long mx;
	long my;
	long dx;
	long dy;
	long lx;
	long ly;
}


// address: 0x8013AED4
void MoveMissilePos__Fi(int i) {
	int dx;
	int dy;
}


// address: 0x8013B04C
unsigned char MonsterTrapHit__FiiiiiUc(int m, int mindam, int maxdam, int dist, int t, int shift) {
	int hit;
	int hper;
	long dam;
	int mor;
	int mir;
	unsigned char resist;
	unsigned char ret;
}


// address: 0x8013B3D0
unsigned char MonsterMHit__FiiiiiiUc(int pnum, int m, int mindam, int maxdam, int dist, int t, int shift) {
	int hit;
	int hper;
	long dam;
	int mor;
	int mir;
	unsigned char resist;
	unsigned char ret;
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											{
												{
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8013BB90
unsigned char PlayerMHit__FiiiiiiUcUc(int pnum, int m, int dist, int mind, int maxd, int mtype, int shift, int earflag) {
	int hit;
	int hper;
	int tac;
	long dam;
	int blk;
	int blkper;
	int blkdir;
	int resper;
}


// address: 0x8013C5EC
unsigned char Plr2PlrMHit__FiiiiiiUc(int pnum, int p, int mindam, int maxdam, int dist, int mtype, int shift) {
	int hit;
	int hper;
	int tac;
	long dam;
	int blk;
	int blkper;
	int resper;
}


// address: 0x8013CD88
void CheckMissileCol__FiiiUciiUcb(int i, int mindam, int maxdam, unsigned char shift, int mx, int my, int nodel, bool HurtPlr) {
	int oi;
	struct MissileStruct *miss;
	struct map_info *dm;
}


// address: 0x8013D2B8
unsigned char GetTableValue__FUci(unsigned char code, int dir) {
	unsigned char hicode;
	unsigned char locode;
}


// address: 0x8013D34C
void SetMissAnim__Fii(int mi, int animtype) {
	int dir;
}


// address: 0x8013D424
void SetMissDir__Fii(int mi, int dir) {
}


// address: 0x8013D470
void AddLArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013D658
void AddArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int av;
}


// address: 0x8013D818
void GetVileMissPos__Fiii(int mi, int dx, int dy) {
	int xx;
	int yy;
	{
		int l;
		{
			{
				int j;
				{
					{
						int i;
					}
				}
			}
		}
	}
}


// address: 0x8013D954
void AddRndTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int r1;
	int r2;
	unsigned char dirok;
	int nTries;
	{
		{
			int oi;
		}
	}
}


// address: 0x8013DC98
void AddFirebolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	int sp;
	int i;
	int mx;
}


// address: 0x8013DED0
void AddMagmaball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013DFEC
void AddTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int i;
	int k;
	int l;
	int j;
	int tx;
	int ty;
	int CrawlNum[6];
}


// address: 0x8013E228
void AddLightball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013E390
void AddFirewall__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int i;
}


// address: 0x8013E588
void AddFireball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int i;
}


// address: 0x8013E7F4
void AddLightctrl__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013E8E0
void AddLightning__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013EACC
void AddMisexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013ECF8
void AddWeapexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013EDF8
unsigned char CheckIfTrig__Fii(int x, int y) {
	int i;
}


// address: 0x8013EFA0
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


// address: 0x8013F420
void AddFlash__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int i;
}


// address: 0x8013F64C
void AddFlash2__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int i;
}


// address: 0x8013F83C
void AddManashield__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013F910
void AddFiremove__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013FA70
void AddGuardian__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int i;
	int k;
	int l;
	int j;
	int tx;
	int ty;
	int CrawlNum[6];
}


// address: 0x8013FEE4
void AddChain__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013FF48
void AddRhino__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	struct AnimStruct *anim;
}


// address: 0x801400CC
void AddFlare__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801403DC
void AddAcid__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801404F0
void AddAcidpud__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int monst;
}


// address: 0x801405D4
void AddStone__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int i;
	int j;
	int k;
	int l;
	int tx;
	int ty;
	int mid;
	int CrawlNum[6];
}


// address: 0x80140904
void AddGolem__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int i;
	int mx;
	int CrawlNum[6];
	{
		int k;
		{
			int l;
			int j;
			{
				{
					int tx;
					int ty;
				}
			}
		}
	}
}


// address: 0x80140C44
void AddBoom__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80140CE8
void AddHeal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int i;
	long l;
}


// address: 0x80140F14
void AddHealOther__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80140F84
void AddElement__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int i;
}


// address: 0x801411B4
void AddIdentify__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80141258
void AddFirewallC__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int i;
	int k;
	int l;
	int j;
	int tx;
	int ty;
	int CrawlNum[6];
}


// address: 0x80141518
void AddInfra__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int i;
}


// address: 0x80141624
void AddWave__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801416B0
void AddNova__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int k;
}


// address: 0x801418C0
void AddRepair__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80141978
void AddRecharge__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80141A30
void AddDisarm__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80141AA0
void AddApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int i;
}


// address: 0x80141D08
void AddFlame__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int seqno) {
	int i;
}


// address: 0x80141F40
void AddFlamec__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80142038
void AddCbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
}


// address: 0x80142248
void AddHbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	int sp;
}


// address: 0x80142414
void AddResurrect__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80142490
void AddResurrectBeam__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80142520
void AddTelekinesis__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80142590
void AddBoneSpirit__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80142794
void AddRportal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int m2;
	{
		{
			struct MissileStruct *miss;
		}
	}
}


// address: 0x801428C0
void AddDiabApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	int pnum;
}


// address: 0x80142A04
int AddMissile__Fiiiiiiciii(int sx, int sy, int v1, int v2, int midir, int mitype, int micaster, int id, int v3, int spllvl) {
	int mi;
	int xyoffs[16];
}


// address: 0x80142E90
int Sentfire__Fiii(int i, int sx, int sy) {
	int ex;
	int dir;
}


// address: 0x80143078
void MI_Dummy__Fi(int i) {
}


// address: 0x80143080
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


// address: 0x801432FC
void MI_SetManashield__Fi(int i) {
}


// address: 0x80143340
void MI_LArrow__Fi(int i) {
	int p;
	int mind;
	int maxd;
	int rst;
}


// address: 0x80143B54
void MI_Arrow__Fi(int i) {
	int p;
	int mind;
	int maxd;
}


// address: 0x80143D98
void MI_Firebolt__Fi(int i) {
	int omx;
	int omy;
	int d;
	int p;
}


// address: 0x801444AC
void MI_Lightball__Fi(int i) {
	int j;
	int tx;
	int ty;
	int oi;
}


// address: 0x80144764
void MI_Acidpud__Fi(int i) {
	int range;
}


// address: 0x80144890
void MI_Firewall__Fi(int i) {
	int ExpLight[14];
}


// address: 0x80144BAC
void MI_Fireball__Fi(int i) {
	int dam;
	int px;
	int py;
	int id;
	int mx;
	int my;
}


// address: 0x80145528
void MI_Lightctrl__Fi(int i) {
	int dam;
	int p;
	int mx;
	int my;
	struct MissileStruct *miss;
}


// address: 0x801458E0
void MI_Lightning__Fi(int i) {
	int j;
	struct MissileStruct *miss;
}


// address: 0x801459E0
void MI_Town__Fi(int i) {
	int p;
	int ExpLight[17];
	{
		{
			struct PlayerStruct *player;
		}
	}
}


// address: 0x80145D38
void MI_Flash__Fi(int i) {
	struct MissileStruct *miss;
}


// address: 0x801460AC
void MI_Flash2__Fi(int i) {
	struct MissileStruct *miss;
}


// address: 0x80146288
void MI_Manashield__Fi(int i, int xoffset[8][3]) {
	int j;
	int id;
	long diff;
	long pct;
	struct MissileStruct *miss;
	struct PlayerStruct *player;
}


// address: 0x80146588
void MI_Firemove__Fi(int i) {
	int j;
	int ExpLight[14];
	struct MissileStruct *miss;
}


// address: 0x80146828
void MI_Guardian__Fi(int i) {
	int j;
	int k;
	int sx1;
	int sy1;
	int ex;
	struct MissileStruct *miss;
}


// address: 0x80146AE0
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


// address: 0x80146D48
void MI_Weapexp__Fi(int i) {
	int id;
	int mind;
	int maxd;
	int ExpLight[10];
}


// address: 0x801470A4
void MI_Misexp__Fi(int i) {
	int ExpLight[10];
}


// address: 0x801473C4
void MI_Acidsplat__Fi(int i) {
	int monst;
	int dam;
}


// address: 0x80147570
void MI_Teleport__Fi(int i) {
	int id;
	struct CBlocks *gblocks;
}


// address: 0x801478DC
void MI_Stone__Fi(int i) {
	int m;
}


// address: 0x80147AB8
void RemoveStoneMissiles__Fiii(int mon, int mx, int my) {
	{
		int i;
		{
			int mi;
			struct MissileStruct *pmissile;
		}
	}
}


// address: 0x80147B40
void MI_Boom__Fi(int i) {
}


// address: 0x80147C44
void MI_Rhino__Fi(int i) {
	int mix;
	int miy;
	int mix2;
	int miy2;
	int omx;
	int omy;
	int monst;
}


// address: 0x80148054
void MI_FirewallC__Fi(int i) {
	struct MissileStruct *miss;
	int tx;
	int ty;
	int id;
}


// address: 0x80148288
void MI_Infra__Fi(int i) {
}


// address: 0x80148348
void MI_Apoca__Fi(int i) {
	int j;
	int k;
	int id;
	unsigned char exit;
}


// address: 0x80148600
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


// address: 0x80148A9C
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


// address: 0x80148D78
void MI_Flame__Fi(int i) {
	int k;
}


// address: 0x80148F94
void MI_Flamec__Fi(int i) {
	int id;
}


// address: 0x80149210
void MI_Cbolt__Fi(int i) {
	int bpath[16];
	int sx;
	int sy;
	int dy;
	int md;
}


// address: 0x80149564
void MI_Hbolt__Fi(int i) {
	int dam;
}


// address: 0x80149890
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


// address: 0x80149FAC
void MI_Bonespirit__Fi(int i) {
	int mid;
	int sd;
	int dam;
	int cx;
	int cy;
	int id;
}


// address: 0x8014A3E0
void MI_ResurrectBeam__Fi(int i) {
}


// address: 0x8014A458
void MI_Rportal__Fi(int i) {
	int ExpLight[17];
}


// address: 0x8014A694
void ProcessMissiles__Fv() {
	short i;
	short j;
	short mi;
	struct MissileStruct *miss;
	short *pmissileactive;
}


// address: 0x8014AAC0
void ClearMissileSpot__Fi(int mi) {
}


// address: 0x8014AB60
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x8014AB74
void DeleteMonster__Fi(int i) {
	int temp;
}


// address: 0x8014ABAC
int M_GetDir__Fi(int i) {
}


// address: 0x8014AC10
void M_StartDelay__Fii(int i, int len) {
}


// address: 0x8014AC60
void M_StartRAttack__Fiii(int i, int missile_type, int dam) {
	int md;
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}


// address: 0x8014AD80
void M_StartRSpAttack__Fiii(int i, int missile_type, int dam) {
	int md;
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}


// address: 0x8014AEF4
void M_StartSpAttack__Fi(int i) {
	int md;
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}


// address: 0x8014AFE4
void M_StartEat__Fi(int i) {
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}


// address: 0x8014B0BC
void M_GetKnockback__Fii(int i, int d) {
	{
		{
			struct MonsterStruct *pmonster;
			int _mx;
			int _my;
		}
	}
}


// address: 0x8014B2D8
void M_StartHit__Fiii(int i, int pnum, int dam) {
	{
		{
			struct MonsterStruct *pmonster;
			int _moldx;
			int _moldy;
		}
	}
}


// address: 0x8014B5C0
void M_DiabloDeath__FiUci(int i, unsigned char sendmsg, int pnum) {
	struct MonsterStruct *Monst;
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
	int steps;
	{
		int j;
		{
			int k;
			{
				{
					int _moldx;
					int _moldy;
				}
			}
		}
	}
}


// address: 0x8014B8E8
void M2MStartHit__Fiii(int mid, int i, int dam) {
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}


// address: 0x8014BBA4
void MonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg) {
	int md;
	struct MonsterStruct *Monst;
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
	{
		{
			int omp;
		}
	}
}


// address: 0x8014BEC0
void SyncMonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg) {
	int md;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
}


// address: 0x8014C010
void M2MStartKill__Fii(int i, int mid) {
	int md;
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
	{
		{
			int omp;
		}
	}
}


// address: 0x8014C3D8
void M_StartKill__Fii(int i, int pnum) {
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}


// address: 0x8014C4E0
void M_SyncStartKill__Fiiii(int i, int x, int y, int pnum) {
}


// address: 0x8014C5F0
void M_StartFadein__FiiUc(int i, int md, unsigned char backwards) {
}


// address: 0x8014C74C
void M_StartFadeout__FiiUc(int i, int md, unsigned char backwards) {
}


// address: 0x8014C89C
void M_StartHeal__Fi(int i) {
	struct MonsterStruct *Monst;
}


// address: 0x8014C928
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


// address: 0x8014CA90
int M_DoStand__Fi(int i) {
	struct MonsterStruct *Monst;
}


// address: 0x8014CAF0
int M_DoWalk__Fi(int i) {
	int rv;
}


// address: 0x8014CD60
int M_DoWalk2__Fi(int i) {
	int rv;
}


// address: 0x8014CF4C
int M_DoWalk3__Fi(int i) {
	int rv;
}


// address: 0x8014D1F0
void M_TryM2MHit__Fiiiii(int i, int mid, int hper, int mind, int maxd) {
	int hit;
	int dam;
	unsigned char ret;
}


// address: 0x8014D428
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
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											bool KnockOk;
											int newx;
											int newy;
											{
												{
													struct PlayerStruct *plr2;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8014DA3C
int M_DoAttack__Fi(int i) {
	struct MonsterStruct *Monst;
	unsigned char mMinDamage;
	unsigned char mMaxDamage;
	unsigned char mHit;
	int _menemy;
}


// address: 0x8014DBE8
int M_DoRAttack__Fi(int i) {
	int multimissiles;
	int mi;
}


// address: 0x8014DD70
int M_DoRSpAttack__Fi(int i) {
}


// address: 0x8014DF78
int M_DoSAttack__Fi(int i) {
}


// address: 0x8014E054
int M_DoFadein__Fi(int i) {
}


// address: 0x8014E134
int M_DoFadeout__Fi(int i) {
	int mtype;
}


// address: 0x8014E260
int M_DoHeal__Fi(int i) {
	struct MonsterStruct *Monst;
}


// address: 0x8014E2FC
int M_DoTalk__Fi(int i) {
	int tren;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
	int mName;
}


// address: 0x8014E8A0
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


// address: 0x8014EAB4
int M_DoGotHit__Fi(int i) {
}


// address: 0x8014EB1C
void DoEnding__Fi(int p) {
}


// address: 0x8014EBC4
void PrepDoEnding__Fi(int pnum) {
	{
		int i;
	}
}


// address: 0x8014ED0C
int M_DoDeath__Fi(int i) {
	struct MonsterStruct *pMonster;
	int _mx;
	int _my;
	{
		{
		}
	}
}


// address: 0x8014EED0
int M_DoSpStand__Fi(int i) {
}


// address: 0x8014EF7C
int M_DoDelay__Fi(int i) {
	{
		{
			int tmp;
		}
	}
}


// address: 0x8014F090
int M_DoStone__Fi(int i) {
}


// address: 0x8014F10C
void M_WalkDir__Fii(int i, int md) {
	int mwi;
}


// address: 0x8014F33C
void GroupUnity__Fi(int i) {
	int leader;
	int tmp;
	int m;
	struct MonsterStruct *pMonster;
	int _mx;
	int _my;
}


// address: 0x8014F750
unsigned char M_CallWalk__Fii(int i, int md) {
	int mdtemp;
	unsigned char ok;
}


// address: 0x8014F8F0
unsigned char M_CallWalk2__Fii(int i, int md) {
	int mdtemp;
	unsigned char ok;
}


// address: 0x8014F9E8
unsigned char M_DumbWalk__Fii(int i, int md) {
}


// address: 0x8014FA3C
unsigned char M_RoundWalk__FiiRi(int i, int md, int *dir) {
	int mdtemp;
	unsigned char ok;
}


// address: 0x8014FB88
void MAI_Zombie__Fi(int i) {
	struct MonsterStruct *Monst;
	int mx;
	int my;
	int md;
	int v;
}


// address: 0x8014FD88
void MAI_SkelSd__Fi(int i) {
	struct MonsterStruct *Monst;
	int mx;
	int my;
	int md;
}


// address: 0x8014FF38
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


// address: 0x80150334
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


// address: 0x801506E8
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


// address: 0x801508DC
void MAI_Fat__Fi(int i) {
	int mx;
	int my;
	int md;
	int v;
	struct MonsterStruct *Monst;
}


// address: 0x80150AA4
void MAI_Sneak__Fi(int i) {
	int mx;
	int my;
	int md;
	int v;
	struct MonsterStruct *Monst;
	int dist;
}


// address: 0x80150E80
void MAI_Fireman__Fi(int i) {
	int mx;
	int my;
	int md;
	int pnum;
	int fx;
	int fy;
	struct MonsterStruct *Monst;
}


// address: 0x80151184
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


// address: 0x80151498
void MAI_Cleaver__Fi(int i) {
	struct MonsterStruct *Monst;
	int mx;
	int my;
	int md;
}


// address: 0x8015159C
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


// address: 0x801519DC
void MAI_GoatMc__Fi(int i) {
}


// address: 0x801519FC
void MAI_Ranged__FiiUc(int i, int missile_type, unsigned char special) {
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	struct MonsterStruct *Monst;
}


// address: 0x80151C20
void MAI_GoatBow__Fi(int i) {
}


// address: 0x80151C44
void MAI_Succ__Fi(int i) {
}


// address: 0x80151C68
void MAI_AcidUniq__Fi(int i) {
}


// address: 0x80151C8C
void MAI_Scav__Fi(int i) {
	struct MonsterStruct *Monst;
	int x;
	int y;
	unsigned char done;
}


// address: 0x80152050
void MAI_Garg__Fi(int i) {
	struct MonsterStruct *Monst;
	int mx;
	int my;
	int md;
}


// address: 0x80152230
void MAI_RoundRanged__FiiUciUc(int i, int missile_type, unsigned char checkdoors, int dam, int lessmissiles) {
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	int v;
	int dist;
	struct MonsterStruct *Monst;
}


// address: 0x80152720
void MAI_Magma__Fi(int i) {
}


// address: 0x8015274C
void MAI_Storm__Fi(int i) {
}


// address: 0x80152778
void MAI_Acid__Fi(int i) {
}


// address: 0x801527A8
void MAI_Diablo__Fi(int i) {
}


// address: 0x801527D4
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


// address: 0x80152CB8
void MAI_Mega__Fi(int i) {
}


// address: 0x80152CDC
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
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x80153218
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
	{
		{
			{
				{
					{
						{
							int mi;
						}
					}
				}
			}
		}
	}
}


// address: 0x801536D4
void MAI_Counselor__Fi(int i, unsigned char counsmiss[4], int _mx, int _my) {
	int fx;
	int fy;
	int mx;
	int my;
	int md;
	int v;
	int dist;
	struct MonsterStruct *Monst;
}


// address: 0x80153B70
void MAI_Garbud__Fi(int i) {
	int md;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
}


// address: 0x80153D80
void MAI_Zhar__Fi(int i) {
	int mx;
	int my;
	int md;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
}


// address: 0x80153F7C
void MAI_SnotSpil__Fi(int i) {
	int md;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x801541CC
void MAI_Lazurus__Fi(int i) {
	int md;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
}


// address: 0x80154470
void MAI_Lazhelp__Fi(int i) {
	int md;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
}


// address: 0x801545A8
void MAI_Lachdanan__Fi(int i) {
	int md;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
}


// address: 0x80154758
void MAI_Warlord__Fi(int i) {
	int md;
	struct MonsterStruct *Monst;
	int _mx;
	int _my;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x801548C0
void DeleteMonsterList__Fv() {
	int i;
	int mi;
}


// address: 0x801549E4
void ProcessMonsters__Fv(unsigned int WipeCount, bool DoWipe, struct MonsterStruct *Monst, int oldmode) {
	int i;
	int mi;
	int raflag;
	int mx;
	int my;
	int _menemy;
}


// address: 0x80154FAC
unsigned char DirOK__Fii(int i, int mdir) {
	long fx;
	long fy;
}


// address: 0x80155158
unsigned char PosOkMissile__Fii(int x, int y) {
}


// address: 0x801551D0
unsigned char CheckNoSolid__Fii(int x, int y) {
}


// address: 0x801551F0
unsigned char LineClearF__FPFii_Uciiii(unsigned char (*Clear)(), int x1, int y1, int x2, int y2) {
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


// address: 0x80155478
unsigned char LineClear__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x801554B8
unsigned char LineClearF1__FPFiii_Uciiiii(unsigned char (*Clear)(), int monst, int x1, int y1, int x2, int y2) {
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


// address: 0x8015574C
void M_FallenFear__Fii(int x, int y) {
	int i;
	int mi;
	int rundist;
	int aitype;
}


// address: 0x80155934
void PrintMonstHistory__Fi(int mt) {
	int res;
}


// address: 0x80155BB8
void PrintUniqueHistory__Fv() {
	int res;
}


// address: 0x80155CE4
void MissToMonst__Fiii(int i, int x, int y) {
	int oldx;
	int oldy;
	int newx;
	int newy;
	struct MissileStruct *Miss;
	int m;
	struct MonsterStruct *Monst;
	int pnum;
	{
		{
			{
				{
					{
						{
							bool KnockOk;
							{
								{
									struct PlayerStruct *ptrplr;
									struct PlayerStruct *plr2;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x801561B0
unsigned char PosOkMonst3__Fiii(int i, int x, int y) {
	unsigned char ret;
	int oi;
	int objtype;
	int mi;
	unsigned char fire;
	unsigned char isdoor;
}


// address: 0x8015648C
int M_SpawnSkel__Fiii(int x, int y, int dir) {
	int i;
	int j;
	int skeltypes;
	int skel;
}


// address: 0x801565DC
void TalktoMonster__Fi(int i) {
	int pnum;
	int itm;
	struct MonsterStruct *Monst;
}


// address: 0x8015671C
void SpawnGolum__Fiiii(int i, int x, int y, int mi) {
}


// address: 0x8015694C
unsigned char CanTalkToMonst__Fi(int m) {
}


// address: 0x8015698C
unsigned char CheckMonsterHit__FiRUc(int m, unsigned char *ret) {
}


// address: 0x80156A68
bool gSameRoom__Fii(int m, int i) {
	struct MonsterStruct *m1;
	struct MonsterStruct *m2;
}


// address: 0x80156B00
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
	{
		{
			{
				{
					{
						{
							{
								{
									int nd;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8015702C
void M_StartAttack__Fi(int i) {
	int md;
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}


// address: 0x8015711C
void M_StartWalk__Fiiiiii(int i, int xvel, int yvel, int xadd, int yadd, int EndDir) {
	long fx;
	long fy;
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}


// address: 0x80157274
void FreeInvGFX__Fv() {
}


// address: 0x8015727C
void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	struct POLY_FT4 *Ft4;
}


// address: 0x80157300
void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	struct POLY_FT4 *Ft4;
}


// address: 0x801575B8
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	struct POLY_FT4 *Ft4;
	struct TextDat *TData;
}


// address: 0x80157688
void InvDrawSlots__Fv() {
	int Bx;
	int By;
}


// address: 0x801579A0
void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col) {
}


// address: 0x80157A6C
void DrawInvStats__Fv() {
	struct Dialog InvBack;
	char c;
	char chrstr[10];
	long mind;
	long maxd;
	int hper;
	int ac;
}


// address: 0x80158588
void DrawInvBack__Fv() {
	struct Dialog InvBack;
}


// address: 0x80158634
void DrawInvCursor__Fv() {
	int ItemX;
	int ItemY;
	int LoopX;
	int LoopY;
	struct POLY_FT4 *Ft4;
	struct TextDat *TData;
	{
		{
			{
				{
					{
						{
							int GoldAmount;
						}
					}
				}
			}
		}
	}
}


// address: 0x80158C00
void DrawInvMsg__Fv() {
	struct POLY_FT4 *Ft4;
	struct RECT InfoRect;
	int InfoY;
	int InfoW;
	int InfoH;
	struct Dialog InvBack;
	int OldOt;
}


// address: 0x80158DCC
void DrawInvHelpTxt__Fv() {
	char TempStr[128];
}


// address: 0x801590B4
void DrawInv__Fv() {
}


// address: 0x801590FC
void DrawInvTSK__FP4TASK(struct TASK *T) {
	int omp;
	int osel;
	struct CBlocks *BgBlocks;
	int ThisIsShit;
	int OldPad;
	{
		{
			int OldOt;
		}
	}
}


// address: 0x80159714
void DoThatDrawInv__Fv() {
	int Loop;
	int ii;
	int ItemX;
	int ItemY;
	int ItemNo;
	struct RECT ClipRect;
}


// address: 0x80159F24
unsigned char AutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag) {
	int i;
	int j;
	int xx;
	int yy;
	unsigned char done;
}


// address: 0x8015A24C
unsigned char SpecialAutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag) {
	int i;
	int j;
	int xx;
	int yy;
	unsigned char done;
}


// address: 0x8015A5F0
unsigned char GoldAutoPlace__Fi(int pnum) {
	int i;
	int ii;
	int xx;
	int yy;
	long gt;
	unsigned char done;
}


// address: 0x8015AAC8
unsigned char WeaponAutoPlace__Fi(int pnum) {
}


// address: 0x8015AD5C
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	struct ItemStruct h;
}


// address: 0x8015AE70
void CheckInvPaste__Fiii(int pnum, int mx, int my) {
	int r;
	int sx;
	int sy;
	int i;
	int j;
	int xx;
	int yy;
	int ii;
	unsigned char done;
	unsigned char done2h;
	int il;
	int cn;
	int it;
	int iv;
	int ig;
	long gt;
	struct ItemStruct tempitem;
}


// address: 0x8015CBF8
void CheckInvCut__Fiii(int pnum, int mx, int my) {
	int r;
	int ii;
	int iv;
}


// address: 0x8015D6FC
void RemoveInvItem__Fii(int pnum, int iv) {
}


// address: 0x8015D9AC
void RemoveSpdBarItem__Fii(int pnum, int iv) {
}


// address: 0x8015DAA0
void CheckInvScrn__Fv() {
}


// address: 0x8015DB18
void CheckItemStats__Fi(int pnum) {
	struct PlayerStruct *p;
}


// address: 0x8015DB9C
void CheckBookLevel__Fi(int pnum) {
	int slvl;
}


// address: 0x8015DCD0
void CheckQuestItem__Fi(int pnum) {
}


// address: 0x8015E180
void InvGetItem__Fii(int pnum, int ii) {
	int j;
	int jj;
}


// address: 0x8015E45C
void AutoGetItem__Fii(int pnum, int ii) {
	int i;
	int g;
	int w;
	int h;
	int idx;
	unsigned char done;
	{
		{
			int j;
			int jj;
		}
	}
}


// address: 0x8015EEB8
void SyncGetItem__FiiiUsi(int x, int y, int idx, unsigned short ci, int iseed) {
	int ii;
	{
		{
			int j;
			int jj;
		}
	}
}


// address: 0x8015F020
unsigned char TryInvPut__Fv() {
	int Dist;
	{
		{
			int d;
			{
			}
		}
	}
}


// address: 0x8015F16C
int InvPutItem__Fiii(int pnum, int x, int y) {
	int ii;
	unsigned char done;
	{
		{
			{
				int Dist;
				{
					{
						int d;
					}
				}
			}
		}
	}
}


// address: 0x8015F504
int SyncPutItem__FiiiiUsiUciiiiiUl(int pnum, int x, int y, int idx, int icreateinfo, int iseed, int Id, int dur, int mdur, int ch, int mch, int ivalue, unsigned long ibuff) {
	int ii;
	int d;
	int dy;
	{
		{
			{
				{
					{
						{
							unsigned char done;
							{
								int l;
								{
									{
										int j;
										{
											int yy;
											{
												int i;
												{
													int xx;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8015FA64
char CheckInvHLight__Fv() {
	int r;
	char rv;
	struct ItemStruct *pi;
	struct PlayerStruct *p;
	{
		{
			int nGold;
		}
	}
}


// address: 0x8015FDFC
void RemoveScroll__Fi(int pnum) {
	int i;
}


// address: 0x8015FFE0
unsigned char UseScroll__Fv() {
	int i;
}


// address: 0x80160248
void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x801602AC
unsigned char UseStaff__Fv() {
}


// address: 0x8016036C
void StartGoldDrop__Fv() {
}


// address: 0x80160470
unsigned char UseInvItem__Fii(int pnum, int cii) {
	int c;
	int idata;
	int it;
	struct ItemStruct *Item;
	unsigned char speedlist;
}


// address: 0x80160A34
void DoTelekinesis__Fv() {
}


// address: 0x80160B64
long CalculateGold__Fi(int pnum) {
	int i;
	long gold;
}


// address: 0x80160C9C
unsigned char DropItemBeforeTrig__Fv() {
}


// address: 0x80160CF4
void ControlInv__Fv() {
}


// address: 0x801610B0
void InvGetItemWH__Fi(int Pos) {
}


// address: 0x801611A8
void InvAlignObject__Fv() {
}


// address: 0x8016135C
void InvSetItemCurs__Fv() {
	int ItemNo;
}


// address: 0x801614FC
void InvMoveCursLeft__Fv() {
	int ItemInc;
	int OldPos;
}


// address: 0x801616A4
void InvMoveCursRight__Fv() {
	int ItemInc;
	int OldPos;
}


// address: 0x80161958
void InvMoveCursUp__Fv() {
	int ItemInc;
	int OldPos;
}


// address: 0x80161B50
void InvMoveCursDown__Fv() {
	int ItemInc;
	int OldPos;
}


// address: 0x80161E58
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80161E78
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80161E80
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80161EA8
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80161F28
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x80161F50
int GetOverlayOtBase__7CBlocks() {
}


// address: 0x80161F58
void StartAutomap__Fv() {
}


// address: 0x80161F68
void AutomapUp__Fv() {
}


// address: 0x80161F88
void AutomapDown__Fv() {
}


// address: 0x80161FA8
void AutomapLeft__Fv() {
}


// address: 0x80161FC8
void AutomapRight__Fv() {
}


// address: 0x80161FE8
// size: 0x10
struct LINE_F2 *AMGetLine__FUcUcUc(unsigned char R, unsigned char G, unsigned char B) {
	struct LINE_F2 *L2;
}


// address: 0x801620A0
void AmDrawPlayer__Fiiiii(int x0, int y0, int x1, int y1, int PNum) {
	struct LINE_F2 *L2;
}


// address: 0x80162124
void DrawAutomapPlr__Fv() {
	int x;
	int y;
	int automaps3;
	int automaps4;
	int automaps5;
	{
		int pc;
	}
}


// address: 0x80162490
void DrawAutoMapVertDoor__Fii(int X, int Y) {
	struct LINE_F2 *L2;
	int Lx;
	int Ly;
	int Frac;
	int y0;
	int x1;
	int y1;
	int y2;
	int x3;
}


// address: 0x8016264C
void DrawAutoMapHorzDoor__Fii(int X, int Y) {
	struct LINE_F2 *L2;
	int Lx;
	int Ly;
	int Frac;
	int y0;
	int x1;
	int y1;
	int y2;
	int x3;
}


// address: 0x8016280C
void DrawAutoMapVertGrate__Fii(int X, int Y) {
	struct LINE_F2 *L2;
	int Lx;
	int Ly;
}


// address: 0x801628A4
void DrawAutoMapHorzGrate__Fii(int X, int Y) {
	struct LINE_F2 *L2;
	int Lx;
	int Ly;
}


// address: 0x8016293C
void DrawAutoMapSquare__Fii(int X, int Y) {
	struct LINE_F2 *L2;
	int Lx;
	int Ly;
	int Frac;
	int y0;
	int x1;
	int y1;
	int y2;
	int x3;
}


// address: 0x80162A70
void DrawVertArch__Fii(int X, int Y) {
	struct LINE_F2 *L2;
	int Lx;
	int Ly;
	int Frac;
	int x0;
	int y0;
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
}


// address: 0x80162BA4
void DrawHorzArch__Fii(int X, int Y) {
	struct LINE_F2 *L2;
	int Lx;
	int Ly;
	int Frac;
	int x0;
	int y0;
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
}


// address: 0x80162CD8
void DrawAutoMapStairs__Fii(int X, int Y) {
	struct LINE_F2 *L2;
	int Lx;
	int Ly;
	int Frac;
	int x1;
	int y1;
	int y2;
}


// address: 0x80162E50
void DrawAutomap__Fv() {
	struct LINE_F2 *L2;
	int Lx;
	int Ly;
	int LineY;
	int MapX;
	int MapY;
	int LLSx;
	int LLSy;
	int LRSx;
	int LRSy;
	int LSx;
	int LSy;
	int RSx;
	int RSy;
	int LLen;
	int RLen;
	int LLLen;
	int LRLen;
	unsigned char AMLWallFlag;
	unsigned char AMRWallFlag;
	unsigned short AmTile;
	unsigned char AmTileType;
	unsigned char *AmTileTypePtr;
	int P1x;
	int P1y;
	int P2x;
	int P2y;
	char levname[64];
	int len;
	{
		{
			{
				{
					int PAx;
					int PAy;
				}
			}
		}
	}
}


// address: 0x80163D9C
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x80163E18
int GetOverlayOtBase__7CBlocks_addr_80163E18() {
}



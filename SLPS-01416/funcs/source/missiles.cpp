// C:\diabpsx\SOURCE\MISSILES.CPP

#include "types.h"

// address: 0x80139C04
void GetDamageAmt__FiPiT1(int i, int *mind, int *maxd) {
	// register: 4
	register int k;
	// register: 5
	register int sl;
	// register: 5
	// size: 0x19E8
	register struct PlayerStruct *plr;
	// register: 9
	register int _pMagic;
	// register: 8
	register char _pLevel;
	// register: 10
	register char _pClass;
}


// address: 0x8013A1FC
int CheckBlock__Fiiii(int fx, int fy, int tx, int ty) {
	// register: 20
	register int coll;
}


// address: 0x8013A2B0
int FindClosest__Fiii(int sx, int sy, int rad) {
	// register: 19
	register int cr;
	// register: 2
	register int cidx;
	// register: 17
	register int cent;
	// register: 18
	register int cne;
	// register: 16
	register int mid;
	// register: 6
	register int tx;
	// register: 7
	register int ty;
	// address: 0xFFFFFF90
	// size: 0x4C
	auto int CrawlNum[19];
}


// address: 0x8013A43C
int GetSpellLevel__Fii(int id, int sn) {
	// register: 2
	register int rv;
}


// address: 0x8013A4B0
int GetDirection8__Fiiii(int x1, int y1, int x2, int y2) {
	// address: 0xFFFFFEB8
	// size: 0x100
	auto unsigned char Dirs[16][16];
	// address: 0xFFFFFFB8
	// size: 0x3
	auto unsigned char lrtoul[3];
	// address: 0xFFFFFFC0
	// size: 0x3
	auto unsigned char urtoll[3];
	// address: 0xFFFFFFC8
	// size: 0x3
	auto unsigned char lltour[3];
	// address: 0xFFFFFFD0
	// size: 0x3
	auto unsigned char ultolr[3];
	// register: 16
	register int mx;
	// register: 3
	register int my;
	// register: 3
	register int md;
}


// address: 0x8013A6CC
int GetDirection16__Fiiii(int x1, int y1, int x2, int y2) {
	// address: 0xFFFFFEB8
	// size: 0x100
	auto unsigned char Dirs[16][16];
	// address: 0xFFFFFFB8
	// size: 0x5
	auto unsigned char lrtoul[5];
	// address: 0xFFFFFFC0
	// size: 0x5
	auto unsigned char urtoll[5];
	// address: 0xFFFFFFC8
	// size: 0x5
	auto unsigned char lltour[5];
	// address: 0xFFFFFFD0
	// size: 0x5
	auto unsigned char ultolr[5];
	// register: 16
	register int mx;
	// register: 3
	register int my;
	// register: 3
	register int md;
}


// address: 0x8013A8E8
void DeleteMissile__Fii(int mi, int i) {
}


// address: 0x8013A988
void GetMissileVel__Fiiiiii(int i, int sx, int sy, int dx, int dy, int v) {
	// register: 16
	register long dxp;
	// register: 18
	register long dyp;
	// register: 20
	register long dr;
}


// address: 0x8013AB44
void PutMissile__Fi(int i) {
	// register: 7
	register int mx;
	// register: 8
	register int my;
	// register: 5
	register char m;
	{
		{
			{
				{
					// register: 6
					register char dMiss;
				}
			}
		}
	}
}


// address: 0x8013ADA0
void GetMissilePos__Fi(int i) {
	// register: 7
	register long mx;
	// register: 9
	register long my;
	// register: 5
	register long dx;
	// register: 6
	register long dy;
	// register: 10
	register long lx;
	// register: 8
	register long ly;
}


// address: 0x8013AED4
void MoveMissilePos__Fi(int i) {
	// register: 18
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x8013B04C
unsigned char MonsterTrapHit__FiiiiiUc(int m, int mindam, int maxdam, int dist, int t, int shift) {
	// register: 19
	register int hit;
	// register: 16
	register int hper;
	// register: 6
	register long dam;
	// register: 4
	register int mor;
	// register: 5
	register int mir;
	// register: 20
	register unsigned char resist;
	// address: 0xFFFFFFD0
	auto unsigned char ret;
}


// address: 0x8013B3D0
unsigned char MonsterMHit__FiiiiiiUc(int pnum, int m, int mindam, int maxdam, int dist, int t, int shift) {
	// register: 21
	register int hit;
	// register: 16
	register int hper;
	// register: 16
	register long dam;
	// register: 4
	register int mor;
	// register: 5
	register int mir;
	// register: 23
	register unsigned char resist;
	// address: 0xFFFFFFC8
	auto unsigned char ret;
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
	// address: 0xFFFFFFD0
	auto int hit;
	// register: 17
	register int hper;
	// register: 4
	register int tac;
	// register: 5
	register long dam;
	// register: 21
	register int blk;
	// register: 20
	register int blkper;
	// register: 2
	register int blkdir;
	// register: 19
	register int resper;
}


// address: 0x8013C5EC
unsigned char Plr2PlrMHit__FiiiiiiUc(int pnum, int p, int mindam, int maxdam, int dist, int mtype, int shift) {
	// register: 7
	register int hit;
	// register: 6
	register int hper;
	// register: 5
	register int tac;
	// register: 16
	register long dam;
	// register: 21
	register int blk;
	// register: 20
	register int blkper;
	// register: 23
	register int resper;
}


// address: 0x8013CD88
void CheckMissileCol__FiiiUciiUcb(int i, int mindam, int maxdam, unsigned char shift, int mx, int my, int nodel, bool HurtPlr) {
	// register: 5
	register int oi;
	// register: 17
	// size: 0x4C
	register struct MissileStruct *miss;
	// register: 30
	// size: 0x8
	register struct map_info *dm;
}


// address: 0x8013D2B8
unsigned char GetTableValue__FUci(unsigned char code, int dir) {
	// register: 3
	register unsigned char hicode;
	// register: 7
	register unsigned char locode;
}


// address: 0x8013D34C
void SetMissAnim__Fii(int mi, int animtype) {
	// register: 18
	register int dir;
}


// address: 0x8013D424
void SetMissDir__Fii(int mi, int dir) {
}


// address: 0x8013D470
void AddLArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013D658
void AddArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 3
	register int av;
}


// address: 0x8013D818
void GetVileMissPos__Fiii(int mi, int dx, int dy) {
	// register: 17
	register int xx;
	// register: 21
	register int yy;
	{
		// register: 18
		register int l;
		{
			{
				// register: 20
				register int j;
				{
					{
						// register: 16
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8013D954
void AddRndTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 19
	register int r1;
	// register: 18
	register int r2;
	// register: 17
	register unsigned char dirok;
	// register: 21
	register int nTries;
	{
		{
			// register: 3
			register int oi;
		}
	}
}


// address: 0x8013DC98
void AddFirebolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	// register: 3
	register int sp;
	// register: 4
	register int i;
	// register: 2
	register int mx;
}


// address: 0x8013DED0
void AddMagmaball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013DFEC
void AddTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 21
	register int i;
	// register: 22
	register int k;
	// register: 2
	register int l;
	// register: 20
	register int j;
	// register: 17
	register int tx;
	// register: 18
	register int ty;
	// address: 0xFFFFFFB8
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x8013E228
void AddLightball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013E390
void AddFirewall__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int i;
}


// address: 0x8013E588
void AddFireball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 17
	register int i;
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
	// register: 19
	register int i;
}


// address: 0x8013EFA0
void AddTown__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 22
	register int i;
	// register: 30
	register int k;
	// register: 2
	register int l;
	// register: 23
	register int j;
	// register: 20
	register int tx;
	// register: 21
	register int ty;
	// register: 4
	register int mx;
	// address: 0xFFFFFFA0
	// size: 0x18
	auto int CrawlNum[6];
	// register: 16
	register int omp;
}


// address: 0x8013F420
void AddFlash__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x8013F64C
void AddFlash2__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x8013F83C
void AddManashield__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013F910
void AddFiremove__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013FA70
void AddGuardian__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 19
	register int i;
	// register: 22
	register int k;
	// register: 2
	register int l;
	// register: 21
	register int j;
	// register: 17
	register int tx;
	// register: 18
	register int ty;
	// address: 0xFFFFFFA0
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x8013FEE4
void AddChain__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013FF48
void AddRhino__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	// size: 0x2
	register struct AnimStruct *anim;
}


// address: 0x801400CC
void AddFlare__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801403DC
void AddAcid__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801404F0
void AddAcidpud__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 17
	register int monst;
}


// address: 0x801405D4
void AddStone__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 6
	register int i;
	// register: 8
	register int j;
	// register: 10
	register int k;
	// register: 2
	register int l;
	// register: 9
	register int tx;
	// register: 11
	register int ty;
	// register: 4
	register int mid;
	// address: 0xFFFFFFE0
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x80140904
void AddGolem__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 19
	register int i;
	// register: 3
	register int mx;
	// address: 0xFFFFFFA0
	// size: 0x18
	auto int CrawlNum[6];
	{
		// register: 22
		register int k;
		{
			// register: 2
			register int l;
			// register: 20
			register int j;
			{
				{
					// register: 17
					register int tx;
					// register: 18
					register int ty;
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
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x80140F14
void AddHealOther__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80140F84
void AddElement__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int i;
}


// address: 0x801411B4
void AddIdentify__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80141258
void AddFirewallC__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 21
	register int i;
	// register: 22
	register int k;
	// register: 2
	register int l;
	// register: 20
	register int j;
	// register: 16
	register int tx;
	// register: 17
	register int ty;
	// address: 0xFFFFFFA8
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x80141518
void AddInfra__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int i;
}


// address: 0x80141624
void AddWave__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801416B0
void AddNova__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int k;
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
	// register: 16
	register int i;
}


// address: 0x80141D08
void AddFlame__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int seqno) {
	// register: 8
	register int i;
}


// address: 0x80141F40
void AddFlamec__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80142038
void AddCbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
}


// address: 0x80142248
void AddHbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	// register: 3
	register int sp;
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
	// register: 4
	register int m2;
	{
		{
			// register: 2
			// size: 0x4C
			register struct MissileStruct *miss;
		}
	}
}


// address: 0x801428C0
void AddDiabApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 19
	register int pnum;
}


// address: 0x80142A04
int AddMissile__Fiiiiiiciii(int sx, int sy, int v1, int v2, int midir, int mitype, int micaster, int id, int v3, int spllvl) {
	// register: 16
	register int mi;
	// address: 0xFFFFFF98
	// size: 0x40
	auto int xyoffs[16];
}


// address: 0x80142E90
int Sentfire__Fiii(int i, int sx, int sy) {
	// register: 21
	register int ex;
	// register: 16
	register int dir;
}


// address: 0x80143078
void MI_Dummy__Fi(int i) {
}


// address: 0x80143080
void MI_Golem__Fi(int i) {
	// register: 30
	register int id;
	// register: 20
	register int j;
	// register: 22
	register int k;
	// register: 2
	register int l;
	// register: 21
	register int m;
	// register: 17
	register int tx;
	// register: 18
	register int ty;
	// address: 0xFFFFFFB8
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x801432FC
void MI_SetManashield__Fi(int i) {
}


// address: 0x80143340
void MI_LArrow__Fi(int i) {
	// register: 17
	register int p;
	// register: 19
	register int mind;
	// register: 6
	register int maxd;
	// register: 20
	register int rst;
}


// address: 0x80143B54
void MI_Arrow__Fi(int i) {
	// register: 3
	register int p;
	// register: 5
	register int mind;
	// register: 6
	register int maxd;
}


// address: 0x80143D98
void MI_Firebolt__Fi(int i) {
	// register: 20
	register int omx;
	// register: 21
	register int omy;
	// register: 19
	register int d;
	// register: 17
	register int p;
}


// address: 0x801444AC
void MI_Lightball__Fi(int i) {
	// register: 20
	register int j;
	// register: 18
	register int tx;
	// register: 19
	register int ty;
	// register: 3
	register int oi;
}


// address: 0x80144764
void MI_Acidpud__Fi(int i) {
	// register: 16
	register int range;
}


// address: 0x80144890
void MI_Firewall__Fi(int i) {
	// address: 0xFFFFFFB8
	// size: 0x38
	auto int ExpLight[14];
}


// address: 0x80144BAC
void MI_Fireball__Fi(int i) {
	// register: 18
	register int dam;
	// register: 30
	register int px;
	// register: 23
	register int py;
	// register: 4
	register int id;
	// register: 19
	register int mx;
	// register: 20
	register int my;
}


// address: 0x80145528
void MI_Lightctrl__Fi(int i) {
	// register: 19
	register int dam;
	// register: 3
	register int p;
	// register: 16
	register int mx;
	// register: 18
	register int my;
	// register: 17
	// size: 0x4C
	register struct MissileStruct *miss;
}


// address: 0x801458E0
void MI_Lightning__Fi(int i) {
	// register: 18
	register int j;
	// register: 16
	// size: 0x4C
	register struct MissileStruct *miss;
}


// address: 0x801459E0
void MI_Town__Fi(int i) {
	// register: 4
	register int p;
	// address: 0xFFFFFFA8
	// size: 0x44
	auto int ExpLight[17];
	{
		{
			// register: 5
			// size: 0x19E8
			register struct PlayerStruct *player;
		}
	}
}


// address: 0x80145D38
void MI_Flash__Fi(int i) {
	// register: 17
	// size: 0x4C
	register struct MissileStruct *miss;
}


// address: 0x801460AC
void MI_Flash2__Fi(int i) {
	// register: 17
	// size: 0x4C
	register struct MissileStruct *miss;
}


// address: 0x80146288
void MI_Manashield__Fi(int i, int xoffset[8][3]) {
	// register: 3
	register int j;
	// register: 18
	register int id;
	// register: 5
	register long diff;
	// register: 4
	register long pct;
	// register: 17
	// size: 0x4C
	register struct MissileStruct *miss;
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80146588
void MI_Firemove__Fi(int i) {
	// register: 19
	register int j;
	// address: 0xFFFFFFA8
	// size: 0x38
	auto int ExpLight[14];
	// register: 17
	// size: 0x4C
	register struct MissileStruct *miss;
}


// address: 0x80146828
void MI_Guardian__Fi(int i) {
	// register: 18
	register int j;
	// register: 22
	register int k;
	// register: 30
	register int sx1;
	// register: 23
	register int sy1;
	// register: 3
	register int ex;
	// register: 17
	// size: 0x4C
	register struct MissileStruct *miss;
}


// address: 0x80146AE0
void MI_Chain__Fi(int i) {
	// register: 20
	// size: 0x4C
	register struct MissileStruct *miss;
	// register: 23
	register int sx;
	// register: 22
	register int sy;
	// address: 0xFFFFFFD0
	auto int id;
	// register: 18
	register int l;
	// register: 2
	register int n;
	// register: 21
	register int m;
	// register: 19
	register int k;
	// register: 30
	register int rad;
	// register: 16
	register int tx;
	// register: 17
	register int ty;
	// address: 0xFFFFFF80
	// size: 0x4C
	auto int CrawlNum[19];
}


// address: 0x80146D48
void MI_Weapexp__Fi(int i) {
	// register: 4
	register int id;
	// register: 7
	register int mind;
	// register: 6
	register int maxd;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto int ExpLight[10];
}


// address: 0x801470A4
void MI_Misexp__Fi(int i) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto int ExpLight[10];
}


// address: 0x801473C4
void MI_Acidsplat__Fi(int i) {
	// register: 3
	register int monst;
	// register: 8
	register int dam;
}


// address: 0x80147570
void MI_Teleport__Fi(int i) {
	// register: 18
	register int id;
	// register: 19
	// size: 0x108
	register struct CBlocks *gblocks;
}


// address: 0x801478DC
void MI_Stone__Fi(int i) {
	// register: 4
	register int m;
}


// address: 0x80147AB8
void RemoveStoneMissiles__Fiii(int mon, int mx, int my) {
	{
		// register: 6
		register int i;
		{
			// register: 2
			register int mi;
			// register: 3
			// size: 0x4C
			register struct MissileStruct *pmissile;
		}
	}
}


// address: 0x80147B40
void MI_Boom__Fi(int i) {
}


// address: 0x80147C44
void MI_Rhino__Fi(int i) {
	// register: 16
	register int mix;
	// register: 18
	register int miy;
	// register: 23
	register int mix2;
	// register: 22
	register int miy2;
	// register: 20
	register int omx;
	// register: 30
	register int omy;
	// register: 19
	register int monst;
}


// address: 0x80148054
void MI_FirewallC__Fi(int i) {
	// register: 16
	// size: 0x4C
	register struct MissileStruct *miss;
	// register: 18
	register int tx;
	// register: 19
	register int ty;
	// register: 17
	register int id;
}


// address: 0x80148288
void MI_Infra__Fi(int i) {
}


// address: 0x80148348
void MI_Apoca__Fi(int i) {
	// register: 19
	register int j;
	// register: 17
	register int k;
	// register: 21
	register int id;
	// register: 20
	register unsigned char exit;
}


// address: 0x80148600
void MI_Wave__Fi(int i) {
	// address: 0xFFFFFF88
	auto int dira;
	// address: 0xFFFFFF90
	auto int dirb;
	// register: 18
	register int nxa;
	// register: 17
	register int nya;
	// register: 20
	register int nxb;
	// register: 19
	register int nyb;
	// register: 2
	register int sd;
	// register: 21
	register int j;
	// address: 0xFFFFFF98
	auto int f1;
	// address: 0xFFFFFFA0
	auto int f2;
	// register: 22
	register int id;
	// register: 30
	register int sx;
	// address: 0xFFFFFFA8
	auto int sy;
}


// address: 0x80148A9C
void MI_Nova__Fi(int i) {
	// address: 0xFFFFFFC8
	auto int k;
	// register: 21
	register int id;
	// register: 19
	register int sx;
	// register: 18
	register int sy;
	// register: 22
	register int dir;
	// register: 2
	register int en;
	// register: 4
	register int sx1;
	// register: 5
	register int sy1;
	// address: 0xFFFFFFD0
	auto int dam;
}


// address: 0x80148D78
void MI_Flame__Fi(int i) {
	// register: 17
	register int k;
}


// address: 0x80148F94
void MI_Flamec__Fi(int i) {
	// register: 18
	register int id;
}


// address: 0x80149210
void MI_Cbolt__Fi(int i) {
	// address: 0xFFFFFFA8
	// size: 0x40
	auto int bpath[16];
	// register: 5
	register int sx;
	// register: 6
	register int sy;
	// register: 2
	register int dy;
	// register: 2
	register int md;
}


// address: 0x80149564
void MI_Hbolt__Fi(int i) {
	// register: 5
	register int dam;
}


// address: 0x80149890
void MI_Element__Fi(int i) {
	// register: 2
	register int mid;
	// register: 16
	register int sd;
	// register: 19
	register int dam;
	// register: 20
	register int cx;
	// register: 21
	register int cy;
	// register: 18
	register int px;
	// register: 22
	register int py;
	// register: 18
	register int id;
}


// address: 0x80149FAC
void MI_Bonespirit__Fi(int i) {
	// register: 2
	register int mid;
	// register: 16
	register int sd;
	// register: 18
	register int dam;
	// register: 19
	register int cx;
	// register: 20
	register int cy;
	// register: 21
	register int id;
}


// address: 0x8014A3E0
void MI_ResurrectBeam__Fi(int i) {
}


// address: 0x8014A458
void MI_Rportal__Fi(int i) {
	// address: 0xFFFFFFA8
	// size: 0x44
	auto int ExpLight[17];
}


// address: 0x8014A694
void ProcessMissiles__Fv() {
	// register: 17
	register short i;
	// register: 3
	register short j;
	// register: 3
	register short mi;
	// register: 16
	// size: 0x4C
	register struct MissileStruct *miss;
	// register: 18
	register short *pmissileactive;
}


// address: 0x8014AAC0
void ClearMissileSpot__Fi(int mi) {
}



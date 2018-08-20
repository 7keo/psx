#include "types.h"

// === [ Overlay ID d ] ===

// address: 0x80139BFC
void GameOnlyTestRoutine__Fv() {
}


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


// address: 0x8014AB60
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x8014AB74
void DeleteMonster__Fi(int i) {
	// register: 6
	register int temp;
}


// address: 0x8014ABAC
int M_GetDir__Fi(int i) {
}


// address: 0x8014AC10
void M_StartDelay__Fii(int i, int len) {
}


// address: 0x8014AC60
void M_StartRAttack__Fiii(int i, int missile_type, int dam) {
	// register: 18
	register int md;
	// register: 2
	// size: 0x68
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8014AD80
void M_StartRSpAttack__Fiii(int i, int missile_type, int dam) {
	// register: 21
	register int md;
	// register: 2
	// size: 0x68
	register struct MonsterStruct *pmonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x8014AEF4
void M_StartSpAttack__Fi(int i) {
	// register: 18
	register int md;
	// register: 2
	// size: 0x68
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8014AFE4
void M_StartEat__Fi(int i) {
	// register: 2
	// size: 0x68
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8014B0BC
void M_GetKnockback__Fii(int i, int d) {
	{
		{
			// register: 19
			// size: 0x68
			register struct MonsterStruct *pmonster;
			// register: 18
			register int _mx;
			// register: 17
			register int _my;
		}
	}
}


// address: 0x8014B2D8
void M_StartHit__Fiii(int i, int pnum, int dam) {
	{
		{
			// register: 2
			// size: 0x68
			register struct MonsterStruct *pmonster;
			// register: 17
			register int _moldx;
			// register: 16
			register int _moldy;
		}
	}
}


// address: 0x8014B5C0
void M_DiabloDeath__FiUci(int i, unsigned char sendmsg, int pnum) {
	// register: 22
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 30
	// size: 0x68
	register struct MonsterStruct *pmonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
	// register: 3
	register int steps;
	{
		// register: 20
		register int j;
		{
			// register: 19
			register int k;
			{
				{
					// register: 18
					register int _moldx;
					// register: 17
					register int _moldy;
				}
			}
		}
	}
}


// address: 0x8014B8E8
void M2MStartHit__Fiii(int mid, int i, int dam) {
	// register: 3
	// size: 0x68
	register struct MonsterStruct *pmonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x8014BBA4
void MonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg) {
	// register: 2
	register int md;
	// register: 17
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 3
	// size: 0x68
	register struct MonsterStruct *pmonster;
	// register: 16
	register int _mx;
	// register: 19
	register int _my;
	{
		{
			// register: 16
			register int omp;
		}
	}
}


// address: 0x8014BEC0
void SyncMonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg) {
	// register: 2
	register int md;
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x8014C010
void M2MStartKill__Fii(int i, int mid) {
	// register: 6
	register int md;
	// register: 23
	// size: 0x68
	register struct MonsterStruct *pmonster;
	// register: 21
	register int _mx;
	// register: 22
	register int _my;
	{
		{
			// register: 16
			register int omp;
		}
	}
}


// address: 0x8014C3D8
void M_StartKill__Fii(int i, int pnum) {
	// register: 3
	// size: 0x68
	register struct MonsterStruct *pmonster;
	// register: 17
	register int _mx;
	// register: 18
	register int _my;
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
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
}


// address: 0x8014C928
void M_ChangeLightOffset__Fi(int monst) {
	// register: 5
	register int lx;
	// register: 4
	register int ly;
	// register: 6
	register int xm;
	// register: 9
	register int ym;
	// register: 5
	register int x2;
	// register: 4
	register int y2;
	// register: 2
	register int ox;
	// register: 4
	register int oy;
	// register: 10
	// size: 0x68
	register struct MonsterStruct *pmonster;
}


// address: 0x8014CA90
int M_DoStand__Fi(int i) {
	// register: 4
	// size: 0x68
	register struct MonsterStruct *Monst;
}


// address: 0x8014CAF0
int M_DoWalk__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x8014CD60
int M_DoWalk2__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x8014CF4C
int M_DoWalk3__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x8014D1F0
void M_TryM2MHit__Fiiiii(int i, int mid, int hper, int mind, int maxd) {
	// register: 19
	register int hit;
	// register: 6
	register int dam;
	// address: 0xFFFFFFD0
	auto unsigned char ret;
}


// address: 0x8014D428
void M_TryH2HHit__Fiiiii(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	// register: 17
	// size: 0x19E8
	register struct PlayerStruct *ptrplr;
	// register: 22
	register int hit;
	// register: 16
	register int hper;
	// register: 4
	register int tac;
	// register: 16
	register long dam;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 6
	register int blk;
	// register: 3
	register int blkper;
	// register: 6
	register int mdam;
	// register: 2
	// size: 0x68
	register struct MonsterStruct *pMonster;
	// address: 0xFFFFFFC8
	auto int _mx;
	// address: 0xFFFFFFD0
	auto int _my;
	// register: 23
	register int _px;
	// register: 30
	register int _py;
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
											// register: 20
											register bool KnockOk;
											// register: 18
											register int newx;
											// register: 16
											register int newy;
											{
												{
													// register: 3
													// size: 0x19E8
													register struct PlayerStruct *plr2;
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
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 21
	register unsigned char mMinDamage;
	// register: 19
	register unsigned char mMaxDamage;
	// register: 20
	register unsigned char mHit;
	// register: 18
	register int _menemy;
}


// address: 0x8014DBE8
int M_DoRAttack__Fi(int i) {
	// register: 19
	register int multimissiles;
	// register: 17
	register int mi;
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
	// register: 2
	register int mtype;
}


// address: 0x8014E260
int M_DoHeal__Fi(int i) {
	// register: 4
	// size: 0x68
	register struct MonsterStruct *Monst;
}


// address: 0x8014E2FC
int M_DoTalk__Fi(int i) {
	// register: 16
	register int tren;
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 20
	register int _mx;
	// register: 21
	register int _my;
	// register: 19
	register int mName;
}


// address: 0x8014E8A0
void M_Teleport__Fi(int i) {
	// register: 21
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 22
	register unsigned char done;
	// address: 0xFFFFFFC0
	auto int mulx;
	// register: 3
	register int muly;
	// register: 19
	register int x;
	// register: 23
	register int y;
	// register: 18
	register int a;
	// register: 16
	register int b;
	// register: 16
	register int px;
	// address: 0xFFFFFFC8
	auto int py;
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
		// register: 6
		register int i;
	}
}


// address: 0x8014ED0C
int M_DoDeath__Fi(int i) {
	// register: 3
	// size: 0x68
	register struct MonsterStruct *pMonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
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
			// register: 16
			register int tmp;
		}
	}
}


// address: 0x8014F090
int M_DoStone__Fi(int i) {
}


// address: 0x8014F10C
void M_WalkDir__Fii(int i, int md) {
	// register: 3
	register int mwi;
}


// address: 0x8014F33C
void GroupUnity__Fi(int i) {
	// register: 19
	register int leader;
	// register: 3
	register int tmp;
	// register: 5
	register int m;
	// register: 23
	// size: 0x68
	register struct MonsterStruct *pMonster;
	// register: 22
	register int _mx;
	// register: 21
	register int _my;
}


// address: 0x8014F750
unsigned char M_CallWalk__Fii(int i, int md) {
	// register: 19
	register int mdtemp;
	// register: 16
	register unsigned char ok;
}


// address: 0x8014F8F0
unsigned char M_CallWalk2__Fii(int i, int md) {
	// register: 20
	register int mdtemp;
	// register: 16
	register unsigned char ok;
}


// address: 0x8014F9E8
unsigned char M_DumbWalk__Fii(int i, int md) {
}


// address: 0x8014FA3C
unsigned char M_RoundWalk__FiiRi(int i, int md, int *dir) {
	// register: 19
	register int mdtemp;
	// register: 17
	register unsigned char ok;
}


// address: 0x8014FB88
void MAI_Zombie__Fi(int i) {
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 17
	register int mx;
	// register: 19
	register int my;
	// register: 20
	register int md;
	// register: 22
	register int v;
}


// address: 0x8014FD88
void MAI_SkelSd__Fi(int i) {
	// register: 17
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 16
	register int md;
}


// address: 0x8014FF38
void MAI_Snake__Fi(int i) {
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 19
	register int fx;
	// register: 21
	register int fy;
	// register: 20
	register int mx;
	// register: 23
	register int my;
	// register: 22
	register int md;
	// register: 30
	register int pnum;
	// address: 0xFFFFFFD0
	// size: 0x6
	auto char pattern[6];
	// register: 3
	register int tmp;
}


// address: 0x80150334
void MAI_Bat__Fi(int i) {
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 23
	register int mx;
	// register: 30
	register int my;
	// register: 19
	register int md;
	// register: 20
	register int v;
	// address: 0xFFFFFFD0
	auto int pnum;
	// register: 17
	register int fx;
	// register: 21
	register int fy;
}


// address: 0x801506E8
void MAI_SkelBow__Fi(int i) {
	// register: 16
	register int mx;
	// register: 18
	register int my;
	// register: 21
	register int md;
	// register: 18
	register int fx;
	// register: 20
	register int fy;
	// register: 22
	register unsigned char walking;
	// register: 16
	register int v;
	// register: 17
	// size: 0x68
	register struct MonsterStruct *Monst;
}


// address: 0x801508DC
void MAI_Fat__Fi(int i) {
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 21
	register int md;
	// register: 16
	register int v;
	// register: 17
	// size: 0x68
	register struct MonsterStruct *Monst;
}


// address: 0x80150AA4
void MAI_Sneak__Fi(int i) {
	// register: 20
	register int mx;
	// register: 22
	register int my;
	// register: 18
	register int md;
	// register: 30
	register int v;
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 23
	register int dist;
}


// address: 0x80150E80
void MAI_Fireman__Fi(int i) {
	// register: 22
	register int mx;
	// register: 23
	register int my;
	// register: 20
	register int md;
	// register: 21
	register int pnum;
	// register: 18
	register int fx;
	// register: 19
	register int fy;
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
}


// address: 0x80151184
void MAI_Fallen__Fi(int i) {
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 5
	register int x;
	// register: 6
	register int y;
	// register: 4
	register int xpos;
	// register: 3
	register int ypos;
	// register: 3
	register int m;
	// register: 7
	register int rad;
	// register: 16
	register int my;
	// register: 2
	register int aitype;
}


// address: 0x80151498
void MAI_Cleaver__Fi(int i) {
	// register: 17
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 16
	register int md;
}


// address: 0x8015159C
void MAI_Round__FiUc(int i, unsigned char special) {
	// register: 20
	register int mx;
	// register: 21
	register int my;
	// register: 23
	register int md;
	// register: 30
	register int v;
	// register: 19
	register int fx;
	// register: 22
	register int fy;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x68
	register struct MonsterStruct *Monst;
}


// address: 0x801519DC
void MAI_GoatMc__Fi(int i) {
}


// address: 0x801519FC
void MAI_Ranged__FiiUc(int i, int missile_type, unsigned char special) {
	// register: 22
	register int fx;
	// register: 23
	register int fy;
	// register: 17
	register int mx;
	// register: 18
	register int my;
	// register: 20
	register int md;
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
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
	// register: 18
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 17
	register int x;
	// register: 16
	register int y;
	// register: 19
	register unsigned char done;
}


// address: 0x80152050
void MAI_Garg__Fi(int i) {
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 17
	register int mx;
	// register: 19
	register int my;
	// register: 20
	register int md;
}


// address: 0x80152230
void MAI_RoundRanged__FiiUciUc(int i, int missile_type, unsigned char checkdoors, int dam, int lessmissiles) {
	// register: 23
	register int fx;
	// register: 30
	register int fy;
	// register: 21
	register int mx;
	// register: 22
	register int my;
	// address: 0xFFFFFFD0
	auto int md;
	// register: 19
	register int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x68
	register struct MonsterStruct *Monst;
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
	// register: 22
	register int fx;
	// register: 23
	register int fy;
	// register: 18
	register int mx;
	// register: 19
	register int my;
	// register: 30
	register int md;
	// register: 21
	register int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x68
	register struct MonsterStruct *Monst;
}


// address: 0x80152CB8
void MAI_Mega__Fi(int i) {
}


// address: 0x80152CDC
void MAI_SkelKing__Fi(int i) {
	// register: 19
	register int fx;
	// address: 0xFFFFFFC8
	auto int fy;
	// register: 22
	register int mx;
	// register: 23
	register int my;
	// register: 21
	register int md;
	// register: 30
	register int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 18
	register int nx;
	// register: 16
	register int ny;
	// register: 18
	register int _mx;
	// address: 0xFFFFFFD0
	auto int _my;
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
	// register: 22
	register int fx;
	// address: 0xFFFFFFC8
	auto int fy;
	// register: 20
	register int mx;
	// register: 21
	register int my;
	// address: 0xFFFFFFD0
	auto int md;
	// register: 30
	register int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 19
	register int _mx;
	// register: 23
	register int _my;
	{
		{
			{
				{
					{
						{
							// register: 16
							register int mi;
						}
					}
				}
			}
		}
	}
}


// address: 0x801536D4
void MAI_Counselor__Fi(int i, unsigned char counsmiss[4], int _mx, int _my) {
	// register: 30
	register int fx;
	// address: 0xFFFFFFB8
	auto int fy;
	// register: 19
	register int mx;
	// register: 21
	register int my;
	// register: 20
	register int md;
	// address: 0xFFFFFFC0
	auto int v;
	// register: 23
	register int dist;
	// register: 17
	// size: 0x68
	register struct MonsterStruct *Monst;
}


// address: 0x80153B70
void MAI_Garbud__Fi(int i) {
	// register: 20
	register int md;
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x80153D80
void MAI_Zhar__Fi(int i) {
	// register: 20
	register int mx;
	// register: 18
	register int my;
	// register: 21
	register int md;
	// register: 17
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 16
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x80153F7C
void MAI_SnotSpil__Fi(int i) {
	// register: 20
	register int md;
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
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
	// register: 17
	register int md;
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 18
	register int _mx;
	// register: 17
	register int _my;
}


// address: 0x80154470
void MAI_Lazhelp__Fi(int i) {
	// register: 4
	register int md;
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 19
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x801545A8
void MAI_Lachdanan__Fi(int i) {
	// register: 20
	register int md;
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x80154758
void MAI_Warlord__Fi(int i) {
	// register: 18
	register int md;
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 19
	register int _mx;
	// register: 18
	register int _my;
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
	// register: 4
	register int i;
	// register: 2
	register int mi;
}


// address: 0x801549E4
void ProcessMonsters__Fv(unsigned int WipeCount, bool DoWipe, struct MonsterStruct *Monst, int oldmode) {
	// register: 22
	register int i;
	// register: 18
	register int mi;
	// register: 19
	register int raflag;
	// register: 20
	register int mx;
	// register: 21
	register int my;
	// register: 16
	register int _menemy;
}


// address: 0x80154FAC
unsigned char DirOK__Fii(int i, int mdir) {
	// register: 16
	register long fx;
	// register: 17
	register long fy;
}


// address: 0x80155158
unsigned char PosOkMissile__Fii(int x, int y) {
}


// address: 0x801551D0
unsigned char CheckNoSolid__Fii(int x, int y) {
}


// address: 0x801551F0
unsigned char LineClearF__FPFii_Uciiii(unsigned char (*Clear)(), int x1, int y1, int x2, int y2) {
	// register: 18
	register int dx;
	// register: 17
	register int dy;
	// register: 16
	register int d;
	// register: 22
	register int dincH;
	// register: 18
	register int dincD;
	// register: 17
	register int xincD;
	// register: 17
	register int yincD;
	// address: 0xFFFFFFC8
	auto int xorg;
	// address: 0xFFFFFFD0
	auto int yorg;
	// register: 21
	register unsigned char done;
	// register: 2
	register int tmp;
}


// address: 0x80155478
unsigned char LineClear__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x801554B8
unsigned char LineClearF1__FPFiii_Uciiiii(unsigned char (*Clear)(), int monst, int x1, int y1, int x2, int y2) {
	// register: 18
	register int dx;
	// register: 17
	register int dy;
	// register: 16
	register int d;
	// register: 22
	register int dincH;
	// register: 18
	register int dincD;
	// register: 17
	register int xincD;
	// register: 17
	register int yincD;
	// address: 0xFFFFFFC8
	auto int xorg;
	// address: 0xFFFFFFD0
	auto int yorg;
	// register: 21
	register unsigned char done;
	// register: 2
	register int tmp;
}


// address: 0x8015574C
void M_FallenFear__Fii(int x, int y) {
	// register: 20
	register int i;
	// register: 4
	register int mi;
	// register: 18
	register int rundist;
	// register: 3
	register int aitype;
}


// address: 0x80155934
void PrintMonstHistory__Fi(int mt) {
	// register: 16
	register int res;
}


// address: 0x80155BB8
void PrintUniqueHistory__Fv() {
	// register: 16
	register int res;
}


// address: 0x80155CE4
void MissToMonst__Fiii(int i, int x, int y) {
	// register: 20
	register int oldx;
	// register: 21
	register int oldy;
	// register: 16
	register int newx;
	// register: 18
	register int newy;
	// register: 3
	// size: 0x4C
	register struct MissileStruct *Miss;
	// register: 18
	register int m;
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 17
	register int pnum;
	{
		{
			{
				{
					{
						{
							// register: 22
							register bool KnockOk;
							{
								{
									// register: 5
									// size: 0x19E8
									register struct PlayerStruct *ptrplr;
									// register: 5
									// size: 0x19E8
									register struct PlayerStruct *plr2;
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
	// register: 18
	register unsigned char ret;
	// register: 3
	register int oi;
	// register: 4
	register int objtype;
	// register: 4
	register int mi;
	// register: 20
	register unsigned char fire;
	// register: 17
	register unsigned char isdoor;
}


// address: 0x8015648C
int M_SpawnSkel__Fiii(int x, int y, int dir) {
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 18
	register int skeltypes;
	// register: 16
	register int skel;
}


// address: 0x801565DC
void TalktoMonster__Fi(int i) {
	// register: 17
	register int pnum;
	// address: 0xFFFFFFE8
	auto int itm;
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
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
	// register: 2
	// size: 0x68
	register struct MonsterStruct *m1;
	// register: 3
	// size: 0x68
	register struct MonsterStruct *m2;
}


// address: 0x80156B00
void MAI_Golum__Fi(int i) {
	// register: 18
	register int ok;
	// register: 16
	register int j;
	// register: 5
	register int k;
	// register: 3
	register int mid;
	// register: 16
	register int mx;
	// register: 21
	register int my;
	// register: 17
	register int md;
	// register: 30
	register int cursm;
	// address: 0xFFFFFFC0
	auto int sdata;
	// register: 23
	register int omp;
	// register: 19
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 17
	// size: 0x68
	register struct MonsterStruct *pMonster;
	{
		{
			{
				{
					{
						{
							{
								{
									// register: 2
									register int nd;
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
	// register: 18
	register int md;
	// register: 2
	// size: 0x68
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8015711C
void M_StartWalk__Fiiiiii(int i, int xvel, int yvel, int xadd, int yadd, int EndDir) {
	// register: 8
	register long fx;
	// register: 11
	register long fy;
	// register: 2
	// size: 0x68
	register struct MonsterStruct *pmonster;
	// register: 9
	register int _mx;
	// register: 10
	register int _my;
}


// address: 0x80157274
void FreeInvGFX__Fv() {
}


// address: 0x8015727C
void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80157300
void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x801575B8
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x70
	register struct TextDat *TData;
}


// address: 0x80157688
void InvDrawSlots__Fv() {
	// register: 16
	register int Bx;
	// register: 17
	register int By;
}


// address: 0x801579A0
void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col) {
}


// address: 0x80157A6C
void DrawInvStats__Fv() {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct Dialog InvBack;
	// register: 18
	register char c;
	// address: 0xFFFFFFD8
	// size: 0xA
	auto char chrstr[10];
	// register: 17
	register long mind;
	// register: 16
	register long maxd;
	// register: 16
	register int hper;
	// register: 16
	register int ac;
}


// address: 0x80158588
void DrawInvBack__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x80158634
void DrawInvCursor__Fv() {
	// register: 17
	register int ItemX;
	// register: 16
	register int ItemY;
	// register: 4
	register int LoopX;
	// register: 5
	register int LoopY;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 18
	// size: 0x70
	register struct TextDat *TData;
	{
		{
			{
				{
					{
						{
							// register: 3
							register int GoldAmount;
						}
					}
				}
			}
		}
	}
}


// address: 0x80158C00
void DrawInvMsg__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT InfoRect;
	// register: 2
	register int InfoY;
	// register: 2
	register int InfoW;
	// register: 20
	register int InfoH;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct Dialog InvBack;
	// register: 17
	register int OldOt;
}


// address: 0x80158DCC
void DrawInvHelpTxt__Fv() {
	// address: 0xFFFFFF78
	// size: 0x80
	auto char TempStr[128];
}


// address: 0x801590B4
void DrawInv__Fv() {
}


// address: 0x801590FC
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 22
	register int omp;
	// register: 23
	register int osel;
	// register: 21
	// size: 0x108
	register struct CBlocks *BgBlocks;
	// register: 17
	register int ThisIsShit;
	// register: 20
	register int OldPad;
	{
		{
			// register: 16
			register int OldOt;
		}
	}
}


// address: 0x80159714
void DoThatDrawInv__Fv() {
	// register: 16
	register int Loop;
	// register: 3
	register int ii;
	// register: 8
	register int ItemX;
	// register: 5
	register int ItemY;
	// register: 6
	register int ItemNo;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT ClipRect;
}


// address: 0x80159F24
unsigned char AutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag) {
	// register: 5
	register int i;
	// register: 11
	register int j;
	// register: 4
	register int xx;
	// register: 10
	register int yy;
	// register: 16
	register unsigned char done;
}


// address: 0x8015A24C
unsigned char SpecialAutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag) {
	// register: 5
	register int i;
	// register: 11
	register int j;
	// register: 4
	register int xx;
	// register: 10
	register int yy;
	// register: 16
	register unsigned char done;
}


// address: 0x8015A5F0
unsigned char GoldAutoPlace__Fi(int pnum) {
	// register: 16
	register int i;
	// register: 19
	register int ii;
	// register: 10
	register int xx;
	// register: 8
	register int yy;
	// register: 3
	register long gt;
	// register: 6
	register unsigned char done;
}


// address: 0x8015AAC8
unsigned char WeaponAutoPlace__Fi(int pnum) {
}


// address: 0x8015AD5C
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF90
	// size: 0x6C
	auto struct ItemStruct h;
}


// address: 0x8015AE70
void CheckInvPaste__Fiii(int pnum, int mx, int my) {
	// register: 20
	register int r;
	// register: 22
	register int sx;
	// register: 23
	register int sy;
	// register: 16
	register int i;
	// register: 9
	register int j;
	// register: 7
	register int xx;
	// register: 10
	register int yy;
	// register: 8
	register int ii;
	// address: 0xFFFFFF68
	auto unsigned char done;
	// register: 17
	register unsigned char done2h;
	// register: 19
	register int il;
	// register: 21
	register int cn;
	// register: 2
	register int it;
	// register: 17
	register int iv;
	// register: 5
	register int ig;
	// register: 5
	register long gt;
	// address: 0xFFFFFEF8
	// size: 0x6C
	auto struct ItemStruct tempitem;
}


// address: 0x8015CBF8
void CheckInvCut__Fiii(int pnum, int mx, int my) {
	// register: 18
	register int r;
	// register: 8
	register int ii;
	// register: 8
	register int iv;
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
	// register: 4
	// size: 0x19E8
	register struct PlayerStruct *p;
}


// address: 0x8015DB9C
void CheckBookLevel__Fi(int pnum) {
	// register: 6
	register int slvl;
}


// address: 0x8015DCD0
void CheckQuestItem__Fi(int pnum) {
}


// address: 0x8015E180
void InvGetItem__Fii(int pnum, int ii) {
	// register: 5
	register int j;
	// register: 4
	register int jj;
}


// address: 0x8015E45C
void AutoGetItem__Fii(int pnum, int ii) {
	// register: 16
	register int i;
	// register: 2
	register int g;
	// register: 20
	register int w;
	// register: 21
	register int h;
	// register: 4
	register int idx;
	// register: 17
	register unsigned char done;
	{
		{
			// register: 5
			register int j;
			// register: 2
			register int jj;
		}
	}
}


// address: 0x8015EEB8
void SyncGetItem__FiiiUsi(int x, int y, int idx, unsigned short ci, int iseed) {
	// register: 16
	register int ii;
	{
		{
			// register: 5
			register int j;
			// register: 4
			register int jj;
		}
	}
}


// address: 0x8015F020
unsigned char TryInvPut__Fv() {
	// register: 17
	register int Dist;
	{
		{
			// register: 16
			register int d;
			{
			}
		}
	}
}


// address: 0x8015F16C
int InvPutItem__Fiii(int pnum, int x, int y) {
	// register: 16
	register int ii;
	// register: 18
	register unsigned char done;
	{
		{
			{
				// register: 17
				register int Dist;
				{
					{
						// register: 16
						register int d;
					}
				}
			}
		}
	}
}


// address: 0x8015F504
int SyncPutItem__FiiiiUsiUciiiiiUl(int pnum, int x, int y, int idx, int icreateinfo, int iseed, int Id, int dur, int mdur, int ch, int mch, int ivalue, unsigned long ibuff) {
	// register: 16
	register int ii;
	// register: 17
	register int d;
	// register: 16
	register int dy;
	{
		{
			{
				{
					{
						{
							// register: 21
							register unsigned char done;
							{
								// register: 18
								register int l;
								{
									{
										// register: 20
										register int j;
										{
											// register: 19
											register int yy;
											{
												// register: 17
												register int i;
												{
													// register: 16
													register int xx;
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
	// register: 16
	register int r;
	// register: 19
	register char rv;
	// register: 17
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *p;
	{
		{
			// register: 17
			register int nGold;
		}
	}
}


// address: 0x8015FDFC
void RemoveScroll__Fi(int pnum) {
	// register: 5
	register int i;
}


// address: 0x8015FFE0
unsigned char UseScroll__Fv() {
	// register: 5
	register int i;
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
	// register: 18
	register int c;
	// register: 3
	register int idata;
	// register: 3
	register int it;
	// register: 17
	// size: 0x6C
	register struct ItemStruct *Item;
	// register: 19
	register unsigned char speedlist;
}


// address: 0x80160A34
void DoTelekinesis__Fv() {
}


// address: 0x80160B64
long CalculateGold__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 9
	register long gold;
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
	// register: 6
	register int ItemNo;
}


// address: 0x801614FC
void InvMoveCursLeft__Fv() {
	// register: 5
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x801616A4
void InvMoveCursRight__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x80161958
void InvMoveCursUp__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x80161B50
void InvMoveCursDown__Fv() {
	// register: 17
	register int ItemInc;
	// register: 16
	register int OldPos;
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
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct LINE_F2 *L2;
}


// address: 0x801620A0
void AmDrawPlayer__Fiiiii(int x0, int y0, int x1, int y1, int PNum) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
}


// address: 0x80162124
void DrawAutomapPlr__Fv() {
	// register: 18
	register int x;
	// register: 19
	register int y;
	// register: 23
	register int automaps3;
	// register: 22
	register int automaps4;
	// register: 21
	register int automaps5;
	{
		// register: 20
		register int pc;
	}
}


// address: 0x80162490
void DrawAutoMapVertDoor__Fii(int X, int Y) {
	// register: 8
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 22
	register int Ly;
	// register: 18
	register int Frac;
	// register: 22
	register int y0;
	// register: 21
	register int x1;
	// register: 19
	register int y1;
	// register: 16
	register int y2;
	// register: 20
	register int x3;
}


// address: 0x8016264C
void DrawAutoMapHorzDoor__Fii(int X, int Y) {
	// register: 9
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 20
	register int Ly;
	// register: 18
	register int Frac;
	// register: 20
	register int y0;
	// register: 17
	register int x1;
	// register: 21
	register int y1;
	// register: 22
	register int y2;
	// register: 19
	register int x3;
}


// address: 0x8016280C
void DrawAutoMapVertGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 4
	register int Ly;
}


// address: 0x801628A4
void DrawAutoMapHorzGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 4
	register int Ly;
}


// address: 0x8016293C
void DrawAutoMapSquare__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 17
	register int Ly;
	// register: 7
	register int Frac;
	// register: 21
	register int y0;
	// register: 20
	register int x1;
	// register: 19
	register int y1;
	// register: 17
	register int y2;
	// register: 18
	register int x3;
}


// address: 0x80162A70
void DrawVertArch__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 16
	register int Ly;
	// register: 2
	register int Frac;
	// register: 22
	register int x0;
	// register: 23
	register int y0;
	// register: 19
	register int x1;
	// register: 18
	register int y1;
	// register: 21
	register int x2;
	// register: 20
	register int y2;
	// register: 17
	register int x3;
	// register: 16
	register int y3;
}


// address: 0x80162BA4
void DrawHorzArch__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 16
	register int Ly;
	// register: 2
	register int Frac;
	// register: 22
	register int x0;
	// register: 23
	register int y0;
	// register: 19
	register int x1;
	// register: 18
	register int y1;
	// register: 21
	register int x2;
	// register: 20
	register int y2;
	// register: 17
	register int x3;
	// register: 16
	register int y3;
}


// address: 0x80162CD8
void DrawAutoMapStairs__Fii(int X, int Y) {
	// register: 3
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 19
	register int Ly;
	// register: 18
	register int Frac;
	// register: 20
	register int x1;
	// register: 21
	register int y1;
	// register: 19
	register int y2;
}


// address: 0x80162E50
void DrawAutomap__Fv() {
	// register: 6
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 5
	register int Lx;
	// register: 4
	register int Ly;
	// register: 3
	register int LineY;
	// register: 21
	register int MapX;
	// register: 20
	register int MapY;
	// address: 0xFFFFFF90
	auto int LLSx;
	// address: 0xFFFFFF98
	auto int LLSy;
	// address: 0xFFFFFFA0
	auto int LRSx;
	// address: 0xFFFFFFA8
	auto int LRSy;
	// address: 0xFFFFFFB0
	auto int LSx;
	// address: 0xFFFFFFB8
	auto int LSy;
	// address: 0xFFFFFFC0
	auto int RSx;
	// address: 0xFFFFFFC8
	auto int RSy;
	// register: 17
	register int LLen;
	// register: 19
	register int RLen;
	// register: 22
	register int LLLen;
	// register: 23
	register int LRLen;
	// register: 18
	register unsigned char AMLWallFlag;
	// register: 18
	register unsigned char AMRWallFlag;
	// address: 0xFFFFFF48
	auto unsigned short AmTile;
	// register: 16
	register unsigned char AmTileType;
	// address: 0xFFFFFFD0
	auto unsigned char *AmTileTypePtr;
	// register: 5
	register int P1x;
	// register: 6
	register int P1y;
	// register: 7
	register int P2x;
	// register: 8
	register int P2y;
	// address: 0xFFFFFF50
	// size: 0x40
	auto char levname[64];
	// register: 2
	register int len;
	{
		{
			{
				{
					// register: 3
					register int PAx;
					// register: 4
					register int PAy;
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



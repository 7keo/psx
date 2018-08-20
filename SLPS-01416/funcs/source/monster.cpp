// C:\diabpsx\SOURCE\MONSTER.CPP

#include "types.h"

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



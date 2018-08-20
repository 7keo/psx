// C:\diabpsx\SOURCE\PLAYER.CPP

#include "types.h"

// address: 0x8005FD10
unsigned char IsDplayer__Fii(int x, int y) {
}


// address: 0x8005FD9C
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FDE0
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FDF4
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FE14
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FE1C
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x8005FE38
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FE54
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x80060090
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x80060498
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x80060500
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x8006067C
void AddPlrExperience__FP12PlayerStructil(struct PlayerStruct *ptrplr, int lvl, long exp) {
	// register: 19
	register int omp;
	// register: 2
	register unsigned long v;
	// register: 5
	register long e;
	{
		{
			// register: 4
			register long lLevel;
			// register: 3
			register long lMax;
			{
				{
					// register: 17
					register int l;
					{
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
	}
}


// address: 0x800608A0
void AddPlrMonstExper__Filc(int lvl, long exp, char pmask) {
	// register: 3
	register int totplrs;
	{
		// register: 4
		register int i;
		{
			{
			}
		}
	}
}


// address: 0x80060924
void InitPlayer__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char FirstTime) {
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80060C44
void InitMultiView__Fv() {
}


// address: 0x80060C4C
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80060C6C
void PlrClrTrans__Fii(int x, int y) {
	// register: 6
	register int i;
	// register: 7
	register int j;
}


// address: 0x80060CE4
void PlrDoTrans__Fii(int x, int y) {
	// register: 16
	register int i;
	// register: 18
	register int j;
}


// address: 0x80060DFC
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060E10
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x80060E9C
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060F00
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060F38
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060F64
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x800610A8
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x80061140
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x800612F4
void RemovePlrFromMap__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800612FC
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x80061448
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x800615DC
void PlrDeadItem__FP12PlayerStructP10ItemStructii(struct PlayerStruct *ptrplr, struct ItemStruct *itm, int xx, int yy) {
	// register: 19
	register int x;
	// register: 20
	register int y;
	{
		// register: 17
		register int l;
		{
			{
				// register: 18
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


// address: 0x800617AC
void StartPlayerDropItems__FP12PlayerStructi(struct PlayerStruct *ptrplr, int EarFlag) {
}


// address: 0x8006180C
void TryDropPlayerItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register unsigned char diablolevel;
	{
		{
			// register: 20
			// size: 0x19E8
			register struct PlayerStruct *p;
			// register: 17
			// size: 0x6C
			register struct ItemStruct *pi;
			// register: 16
			register int i;
			{
				{
					// register: 2
					register int pdd;
				}
			}
		}
	}
}


// address: 0x80061948
void StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// address: 0xFFFFFF78
	// size: 0x6C
	auto struct ItemStruct ear;
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *p;
}


// address: 0x80061B44
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 21
	register long hGold;
	// register: 20
	register int i;
	{
		{
			{
				{
					{
						{
							// register: 16
							register int newgold;
						}
					}
				}
			}
		}
	}
}


// address: 0x80061C54
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x80061DB0
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x80061DD0
void RemovePlrMissiles__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 16
	register int mx;
	{
		{
		}
	}
}


// address: 0x800620E8
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062198
void CheckPlrDead__Fi(int pnum) {
	// register: 4
	// size: 0x19E8
	register struct PlayerStruct *ptrplr;
}


// address: 0x800621EC
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
	// register: 20
	register bool oldpause;
}


// address: 0x800623A0
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062448
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
	// register: 19
	register bool oldpause;
}


// address: 0x80062560
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062568
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x80062618
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int owx;
	// register: 18
	register int owy;
}


// address: 0x80062828
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x800629EC
unsigned char PlrHitMonst__FP12PlayerStructi(struct PlayerStruct *ptrplr, int m) {
	// register: 18
	register int hit;
	// register: 16
	register int hper;
	// register: 16
	register int mind;
	// register: 4
	register int maxd;
	// register: 16
	register int ddp;
	// register: 18
	register long dam;
	// register: 20
	register long skdam;
	// register: 4
	register int phanditype;
	// register: 3
	register int tmac;
	// register: 21
	register unsigned char rv;
	// address: 0xFFFFFFD8
	auto unsigned char ret;
}


// address: 0x80063048
unsigned char PlrHitPlr__FP12PlayerStructc(struct PlayerStruct *ptrplr, char p) {
	// register: 20
	register int hit;
	// register: 16
	register int hper;
	// register: 16
	register int mind;
	// register: 4
	register int maxd;
	// register: 16
	register int ddp;
	// register: 17
	register long dam;
	// register: 4
	register long skdam;
	// register: 4
	register int tac;
	// register: 7
	register int blk;
	// register: 3
	register int blkper;
	// register: 21
	register unsigned char rv;
}


// address: 0x800633F0
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x80063470
int PM_DoAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int dx;
	// register: 18
	register int dy;
	// register: 5
	register int m;
	// register: 2
	register char p;
	// register: 19
	register unsigned char didhit;
	// register: 4
	register int frame;
}


// address: 0x80063804
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x80063904
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800639D8
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063A74
void do_spell_anim__FiiiP12PlayerStruct(int aframe, int spell, int clss, struct PlayerStruct *ptrplr) {
	// register: 16
	// size: 0x90
	register struct CPlayer *test;
	// register: 22
	register int OtPos;
	// register: 21
	register int ScrX;
	// register: 20
	register int ScrY;
	// register: 19
	// size: 0x70
	register struct TextDat *missdat;
	// register: 17
	// size: 0x70
	register struct TextDat *objdat;
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct POLY_FT4 *FT4a;
	// address: 0xFFFFFFD4
	// size: 0x28
	auto struct POLY_FT4 *FT4b;
	// register: 16
	register int frame;
}


// address: 0x80063F54
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80064320
void ArmorDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *p;
	// register: 5
	register int a;
	// register: 17
	// size: 0x6C
	register struct ItemStruct *pi;
}


// address: 0x80064428
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int rv;
}


// address: 0x800644B8
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int pnum;
	{
		{
			{
				{
					{
						{
							{
								{
									// register: 5
									register int vid;
									// register: 2
									// size: 0xE
									register struct LightListStruct *vl;
									{
										// register: 4
										register int i;
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


// address: 0x800646A0
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800646A8
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x80064B68
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x80064BD0
void ValidatePlayer__Fv() {
	// register: 5
	register int i;
	// register: 8
	register int gt;
	// register: 2
	register int pc;
	// register: 10
	register unsigned long msk;
	// register: 14
	register unsigned long b;
}


// address: 0x800650CC
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80065168
void ProcessPlayers__Fv() {
	// register: 16
	register int raflag;
	// register: 18
	register int pnum;
	// register: 21
	register int tplayer;
	{
		{
			// register: 17
			// size: 0x19E8
			register struct PlayerStruct *ptrplr;
		}
	}
}


// address: 0x8006544C
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80065474
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr, int px, int py) {
	// register: 2
	register int mi;
	// register: 16
	register int p;
	// register: 2
	register char bv;
	// register: 19
	// size: 0x8
	register struct map_info *dm;
}


// address: 0x8006564C
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x80065654
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 18
	// size: 0x48
	register struct SpellTarget *spl;
	// register: 16
	register unsigned char addflag;
	// register: 17
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int rspell;
	{
		{
			{
				{
					// register: 2
					register int SplLvl;
				}
			}
		}
	}
}


// address: 0x80065AB4
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register int i;
}


// address: 0x80065B9C
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80065BCC
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80065DA0
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80065EBC
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80065FA8
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8006608C
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80066168
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x800661AC
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80066288
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x800662F8
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x800663D4
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80066440
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066448
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80066778
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800667A0
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x800667E4
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80066818
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8006684C
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80066880
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x800668B4
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800668E8
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x80066920
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80066954
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006697C
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800669A4
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800669CC
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x80066A14
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066A3C
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066A64
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80066A98
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066AC0
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80066B04
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x80066B38
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80066B6C
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80066BB8
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x80066C04
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x80066C50
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x80066CA4
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x80066CF0
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80066D3C
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80066D8C
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80066DD8
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80066E24
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80066E70
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80066EBC
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80066F08
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80066F54
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80066FA4
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80066FF0
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80067040
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x8006708C
void CheckNewPath__Fi(int pnum) {
}


// address: 0x800670D8
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80067124
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80067170
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x800671BC
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80067208
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80067254
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x800672A0
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x800672EC
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80067338
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80067384
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}



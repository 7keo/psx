// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x8005FD10
unsigned char IsDplayer__Fii(int x, int y) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x8005FD9C
unknown ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x8005FDE0
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x8005FDF4
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x8005FE14
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x8005FE1C
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x8005FE38
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x8005FE54
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int gn;
	int pc;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80060090
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	int i;
	char vc;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80060498
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int c;
	int d;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80060500
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	long l;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x8006067C
void AddPlrExperience__FP12PlayerStructil(struct PlayerStruct *ptrplr, int lvl, long exp) {
	int omp;
	unsigned long v;
	long e;
	long lLevel;
	long lMax;
	int l;
	int i;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800608A0
void AddPlrMonstExper__Filc(int lvl, long exp, char pmask) {
	int totplrs;
	int i;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80060924
void InitPlayer__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char FirstTime) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80060C44
void InitMultiView__Fv() {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80060C4C
unsigned char SolidLoc__Fii(int x, int y) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80060C6C
void PlrClrTrans__Fii(int x, int y) {
	int i;
	int j;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80060CE4
void PlrDoTrans__Fii(int x, int y) {
	int i;
	int j;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80060DFC
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80060E10
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80060E9C
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80060F00
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80060F38
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80060F64
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	int co;
	unsigned char closeattack;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800610A8
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80061140
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800612F4
void RemovePlrFromMap__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800612FC
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80061448
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	int ii;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800615DC
void PlrDeadItem__FP12PlayerStructP10ItemStructii(struct PlayerStruct *ptrplr, struct ItemStruct *itm, int xx, int yy) {
	int x;
	int y;
	int l;
	int j;
	int i;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800617AC
void StartPlayerDropItems__FP12PlayerStructi(struct PlayerStruct *ptrplr, int EarFlag) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x8006180C
void TryDropPlayerItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	unsigned char diablolevel;
	struct PlayerStruct *p;
	struct ItemStruct *pi;
	int i;
	int pdd;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80061948
void StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	struct ItemStruct ear;
	struct PlayerStruct *p;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80061B44
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	long hGold;
	int i;
	int newgold;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80061C54
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	int i;
	int mx;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80061DB0
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80061DD0
void RemovePlrMissiles__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int i;
	int mx;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800620E8
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80062198
void CheckPlrDead__Fi(int pnum) {
	struct PlayerStruct *ptrplr;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800621EC
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
	unknown oldpause;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800623A0
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80062448
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
	unknown oldpause;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80062560
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80062568
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	int x;
	int y;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80062618
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int owx;
	int owy;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80062828
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800629EC
unsigned char PlrHitMonst__FP12PlayerStructi(struct PlayerStruct *ptrplr, int m) {
	int hit;
	int hper;
	int mind;
	int maxd;
	int ddp;
	long dam;
	long skdam;
	int phanditype;
	int tmac;
	unsigned char rv;
	unsigned char ret;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80063048
unsigned char PlrHitPlr__FP12PlayerStructc(struct PlayerStruct *ptrplr, char p) {
	int hit;
	int hper;
	int mind;
	int maxd;
	int ddp;
	long dam;
	long skdam;
	int tac;
	int blk;
	int blkper;
	unsigned char rv;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800633F0
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	int oi;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80063470
int PM_DoAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int dx;
	int dy;
	int m;
	char p;
	unsigned char didhit;
	int frame;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80063804
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int mistype;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80063904
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800639D8
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80063A74
void do_spell_anim__FiiiP12PlayerStruct(int aframe, int spell, int clss, struct PlayerStruct *ptrplr) {
	struct CPlayer *test;
	int OtPos;
	int ScrX;
	int ScrY;
	struct TextDat *missdat;
	struct TextDat *objdat;
	struct POLY_FT4 *FT4a;
	struct POLY_FT4 *FT4b;
	int frame;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80063F54
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80064320
void ArmorDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	struct PlayerStruct *p;
	int a;
	struct ItemStruct *pi;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80064428
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int rv;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800644B8
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int pnum;
	int vid;
	struct LightListStruct *vl;
	int i;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800646A0
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800646A8
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int i;
	int d;
	int oi;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80064B68
unsigned char PlrDeathModeOK__Fi(int p) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80064BD0
void ValidatePlayer__Fv() {
	int i;
	int gt;
	int pc;
	unsigned long msk;
	unsigned long b;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800650CC
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80065168
void ProcessPlayers__Fv() {
	int raflag;
	int pnum;
	int tplayer;
	struct PlayerStruct *ptrplr;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x8006544C
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80065474
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr, int px, int py) {
	int mi;
	int p;
	char bv;
	struct map_info *dm;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x8006564C
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80065654
void CheckPlrSpell__Fv() {
	int sd;
	struct SpellTarget *spl;
	unsigned char addflag;
	struct PlayerStruct *player;
	int rspell;
	int SplLvl;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80065AB4
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int i;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80065B9C
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80065BCC
void CheckStats__Fi(int p) {
	int c;
	int i;
	struct PlayerStruct *player;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80065DA0
void ModifyPlrStr__Fii(int p, int l) {
	struct PlayerStruct *player;
	int ms;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80065EBC
void ModifyPlrMag__Fii(int p, int l) {
	struct PlayerStruct *player;
	int ms;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80065FA8
void ModifyPlrDex__Fii(int p, int l) {
	struct PlayerStruct *player;
	int ms;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x8006608C
void ModifyPlrVit__Fii(int p, int l) {
	struct PlayerStruct *player;
	int ms;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066168
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800661AC
void SetPlrStr__Fii(int p, int v) {
	struct PlayerStruct *player;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066288
void SetPlrMag__Fii(int p, int v) {
	struct PlayerStruct *player;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800662F8
void SetPlrDex__Fii(int p, int v) {
	struct PlayerStruct *player;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800663D4
void SetPlrVit__Fii(int p, int v) {
	struct PlayerStruct *player;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066440
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066448
void PlayDungMsgs__Fv() {
	struct PlayerStruct *player;
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066778
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800667A0
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800667E4
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066818
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x8006684C
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066880
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800668B4
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800668E8
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066920
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066954
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x8006697C
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800669A4
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800669CC
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066A14
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066A3C
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066A64
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066A98
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066AC0
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066B04
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066B38
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066B6C
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066BB8
int CalcStatDiff__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066C04
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066C50
void CreatePlayer__Fic(int pnum, char c) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066CA4
void StartStand__Fii(int pnum, int dir) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066CF0
void SetPlayerHitPoints__Fii(int pnum, int val) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066D3C
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066D8C
void StartWarpLvl__Fii(int pnum, int pidx) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066DD8
void SyncPlrKill__Fii(int pnum, int earflag) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066E24
void StartPlrKill__Fii(int pnum, int val) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066E70
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066EBC
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066F08
void StartPlrBlock__Fii(int pnum, int dir) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066F54
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066FA4
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80066FF0
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80067040
void PM_ChangeLightOff__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x8006708C
void CheckNewPath__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800670D8
void FreePlayerGFX__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80067124
void InitDungMsgs__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80067170
void InitPlayerGFX__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800671BC
void SyncInitPlrPos__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80067208
void SetPlrAnims__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80067254
void ClrPlrPath__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800672A0
void SyncInitPlr__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x800672EC
void RestartTownLvl__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80067338
void SetPlayerOld__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\PLAYER.CPP
// Addr: 0x80067384
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


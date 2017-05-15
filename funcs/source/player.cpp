unsigned char IsDplayer__Fii(int x, int y) {
}

unknown ismyplr__FP12PlayerStruct(PlayerStruct ptrplr) {
}

int plrind__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void InitPlayerGFX__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void FreePlayerGFX__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void NewPlrAnim__FP12PlayerStructiii(PlayerStruct ptrplr, int Peq, int numFrames, int Delay) {
}

void ClearPlrPVars__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void SetPlrAnims__FP12PlayerStruct(PlayerStruct ptrplr) {
	int gn;
	int pc;
}

void CreatePlayer__FP12PlayerStructc(PlayerStruct ptrplr, char c) {
	int i;
	char vc;
}

int CalcStatDiff__FP12PlayerStruct(PlayerStruct ptrplr) {
	int c;
	int d;
}

void NextPlrLevel__FP12PlayerStruct(PlayerStruct ptrplr) {
	long l;
}

void AddPlrExperience__FP12PlayerStructil(PlayerStruct ptrplr, int lvl, long exp) {
	int omp;
	unsigned long v;
	long e;
	long lLevel;
	long lMax;
	int l;
	int i;
}

void AddPlrMonstExper__Filc(int lvl, long exp, char pmask) {
	int totplrs;
	int i;
}

void InitPlayer__FP12PlayerStructUc(PlayerStruct ptrplr, unsigned char FirstTime) {
}

void InitMultiView__Fv() {
}

unsigned char SolidLoc__Fii(int x, int y) {
}

void PlrClrTrans__Fii(int x, int y) {
	int i;
	int j;
}

void PlrDoTrans__Fii(int x, int y) {
	int i;
	int j;
}

void SetPlayerOld__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void StartStand__FP12PlayerStructi(PlayerStruct ptrplr, int dir) {
}

void StartWalkStand__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void PM_ChangeLightOff__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void PM_ChangeOffset__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void StartAttack__FP12PlayerStructi(PlayerStruct ptrplr, int d) {
	int co;
	unsigned char closeattack;
}

void StartPlrBlock__FP12PlayerStructi(PlayerStruct ptrplr, int dir) {
}

void StartSpell__FP12PlayerStructiii(PlayerStruct ptrplr, int d, int cx, int cy) {
}

void RemovePlrFromMap__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void StartPlrHit__FP12PlayerStructiUc(PlayerStruct ptrplr, int dam, unsigned char forcehit) {
}

void RespawnDeadItem__FP10ItemStructii(ItemStruct itm, int x, int y) {
	int ii;
}

void PlrDeadItem__FP12PlayerStructP10ItemStructii(PlayerStruct ptrplr, ItemStruct itm, int xx, int yy) {
	int x;
	int y;
	int l;
	int j;
	int i;
}

void StartPlayerDropItems__FP12PlayerStructi(PlayerStruct ptrplr, int EarFlag) {
}

void TryDropPlayerItems__FP12PlayerStruct(PlayerStruct ptrplr) {
	unsigned char diablolevel;
	PlayerStruct p;
	ItemStruct pi;
	int i;
	int pdd;
}

void StartPlayerKill__FP12PlayerStructi(PlayerStruct ptrplr, int earflag) {
	ItemStruct ear;
	PlayerStruct p;
}

void DropHalfPlayersGold__FP12PlayerStruct(PlayerStruct ptrplr) {
	long hGold;
	int i;
	int newgold;
}

void StartPlrKill__FP12PlayerStructi(PlayerStruct ptrplr, int earflag) {
	int i;
	int mx;
}

void SyncPlrKill__FP12PlayerStructi(PlayerStruct ptrplr, int earflag) {
}

void RemovePlrMissiles__FP12PlayerStruct(PlayerStruct ptrplr) {
	int i;
	int mx;
}

void InitLevelChange__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void CheckPlrDead__Fi(int pnum) {
	PlayerStruct ptrplr;
}

void StartNewLvl__FP12PlayerStructii(PlayerStruct ptrplr, int fom, int lvl) {
	unknown oldpause;
}

void RestartTownLvl__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void StartWarpLvl__FP12PlayerStructi(PlayerStruct ptrplr, int pidx) {
	unknown oldpause;
}

int PM_DoStand__FP12PlayerStruct(PlayerStruct ptrplr) {
}

unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	int x;
	int y;
}

int PM_DoWalk__FP12PlayerStruct(PlayerStruct ptrplr) {
	int owx;
	int owy;
}

unsigned char WeaponDur__FP12PlayerStructi(PlayerStruct ptrplr, int durrnd) {
}

unsigned char PlrHitMonst__FP12PlayerStructi(PlayerStruct ptrplr, int m) {
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

unsigned char PlrHitPlr__FP12PlayerStructc(PlayerStruct ptrplr, char p) {
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

unsigned char PlrHitObj__FP12PlayerStructii(PlayerStruct ptrplr, int mx, int my) {
	int oi;
}

int PM_DoAttack__FP12PlayerStruct(PlayerStruct ptrplr) {
	int dx;
	int dy;
	int m;
	char p;
	unsigned char didhit;
	int frame;
}

int PM_DoRangeAttack__FP12PlayerStruct(PlayerStruct ptrplr) {
	int mistype;
}

void ShieldDur__FP12PlayerStruct(PlayerStruct ptrplr) {
}

int PM_DoBlock__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void do_spell_anim__FiiiP12PlayerStruct(int aframe, int spell, int clss, PlayerStruct ptrplr) {
	CPlayer test;
	int OtPos;
	int ScrX;
	int ScrY;
	TextDat missdat;
	TextDat objdat;
	OBJ_PFUNC FT4a;
	OBJ_PFUNC FT4b;
	int frame;
}

int PM_DoSpell__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void ArmorDur__FP12PlayerStruct(PlayerStruct ptrplr) {
	PlayerStruct p;
	int a;
	ItemStruct pi;
}

int PM_DoGotHit__FP12PlayerStruct(PlayerStruct ptrplr) {
	int rv;
}

int PM_DoDeath__FP12PlayerStruct(PlayerStruct ptrplr) {
	int pnum;
	int vid;
	LightListStruct vl;
	int i;
}

int PM_DoNewLvl__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void CheckNewPath__FP12PlayerStruct(PlayerStruct ptrplr) {
	int i;
	int d;
	int oi;
}

unsigned char PlrDeathModeOK__Fi(int p) {
}

void ValidatePlayer__Fv() {
	int i;
	int gt;
	int pc;
	unsigned long msk;
	unsigned long b;
}

void CheckCheatStats__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void ProcessPlayers__Fv() {
	int raflag;
	int pnum;
	int tplayer;
	PlayerStruct ptrplr;
}

void ClrPlrPath__FP12PlayerStruct(PlayerStruct ptrplr) {
}

unsigned char PosOkPlayer__FP12PlayerStructii(PlayerStruct ptrplr, int px, int py) {
	int mi;
	int p;
	char bv;
	map_info dm;
}

void MakePlrPath__FP12PlayerStructiiUc(PlayerStruct ptrplr, int xx, int yy, unsigned char endspace) {
}

void CheckPlrSpell__Fv() {
	int sd;
	SpellTarget spl;
	unsigned char addflag;
	PlayerStruct player;
	int rspell;
	int SplLvl;
}

void SyncInitPlrPos__FP12PlayerStruct(PlayerStruct ptrplr) {
	int i;
}

void SyncInitPlr__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void CheckStats__Fi(int p) {
	int c;
	int i;
	PlayerStruct player;
}

void ModifyPlrStr__Fii(int p, int l) {
	PlayerStruct player;
	int ms;
}

void ModifyPlrMag__Fii(int p, int l) {
	PlayerStruct player;
	int ms;
}

void ModifyPlrDex__Fii(int p, int l) {
	PlayerStruct player;
	int ms;
}

void ModifyPlrVit__Fii(int p, int l) {
	PlayerStruct player;
	int ms;
}

void SetPlayerHitPoints__FP12PlayerStructi(PlayerStruct ptrplr, int newhp) {
}

void SetPlrStr__Fii(int p, int v) {
	PlayerStruct player;
}

void SetPlrMag__Fii(int p, int v) {
	PlayerStruct player;
}

void SetPlrDex__Fii(int p, int v) {
	PlayerStruct player;
}

void SetPlrVit__Fii(int p, int v) {
	PlayerStruct player;
}

void InitDungMsgs__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void PlayDungMsgs__Fv() {
	PlayerStruct player;
}

void CreatePlrItems__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void WorldToOffset__FP12PlayerStructii(PlayerStruct ptrplr, int x, int y) {
}

void SetSpdbarGoldCurs__FP12PlayerStructi(PlayerStruct ptrplr, int i) {
}

int GetSpellLevel__FP12PlayerStructi(PlayerStruct ptrplr, int val) {
}

void BreakObject__FP12PlayerStructi(PlayerStruct ptrplr, int val) {
}

void CalcPlrInv__FP12PlayerStructUc(PlayerStruct ptrplr, unsigned char bl) {
}

void RemoveSpdBarItem__FP12PlayerStructi(PlayerStruct ptrplr, int val) {
}

void M_StartKill__FiP12PlayerStruct(int m, PlayerStruct ptrplr) {
}

void SetGoldCurs__FP12PlayerStructi(PlayerStruct ptrplr, int i) {
}

void HealStart__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void HealotherStart__FP12PlayerStruct(PlayerStruct ptrplr) {
}

int CalculateGold__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void M_StartHit__FiP12PlayerStructi(int m, PlayerStruct ptrplr, int dam) {
}

void TeleStart__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void PhaseStart__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void RemoveInvItem__FP12PlayerStructi(PlayerStruct ptrplr, int i) {
}

void PhaseEnd__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void OperateObject__FP12PlayerStructiUc(PlayerStruct ptrplr, int oi, unsigned char bl) {
}

void TryDisarm__FP12PlayerStructi(PlayerStruct ptrplr, int oi) {
}

void TalkToTowner__FP12PlayerStructi(PlayerStruct ptrplr, int val) {
}

unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}

int CalcStatDiff__Fi(int pnum) {
}

void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}

void CreatePlayer__Fic(int pnum, char c) {
}

void StartStand__Fii(int pnum, int dir) {
}

void SetPlayerHitPoints__Fii(int pnum, int val) {
}

void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}

void StartWarpLvl__Fii(int pnum, int pidx) {
}

void SyncPlrKill__Fii(int pnum, int earflag) {
}

void StartPlrKill__Fii(int pnum, int val) {
}

void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}

void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}

void StartPlrBlock__Fii(int pnum, int dir) {
}

void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}

void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}

void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}

void PM_ChangeLightOff__Fi(int pnum) {
}

void CheckNewPath__Fi(int pnum) {
}

void FreePlayerGFX__Fi(int pnum) {
}

void InitDungMsgs__Fi(int pnum) {
}

void InitPlayerGFX__Fi(int pnum) {
}

void SyncInitPlrPos__Fi(int pnum) {
}

void SetPlrAnims__Fi(int pnum) {
}

void ClrPlrPath__Fi(int pnum) {
}

void SyncInitPlr__Fi(int pnum) {
}

void RestartTownLvl__Fi(int pnum) {
}

void SetPlayerOld__Fi(int pnum) {
}

void GetGoldSeed__FP12PlayerStructP10ItemStruct(PlayerStruct ptrplr, ItemStruct h) {
}

unsigned char IsDplayer__Fii(int x, int y) {
}

unknown ismyplr__FP12PlayerStruct(PlayerStruct ptrplr) {
}

int plrind__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void InitPlayerGFX__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void FreePlayerGFX__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void NewPlrAnim__FP12PlayerStructiii(PlayerStruct ptrplr, int Peq, int numFrames, int Delay) {
}

void ClearPlrPVars__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void SetPlrAnims__FP12PlayerStruct(PlayerStruct ptrplr) {
	int gn;
	int pc;
}

void CreatePlayer__FP12PlayerStructc(PlayerStruct ptrplr, char c) {
	int i;
	char vc;
}

int CalcStatDiff__FP12PlayerStruct(PlayerStruct ptrplr) {
	int c;
	int d;
}

void NextPlrLevel__FP12PlayerStruct(PlayerStruct ptrplr) {
	long l;
}

void AddPlrExperience__FP12PlayerStructil(PlayerStruct ptrplr, int lvl, long exp) {
	int omp;
	unsigned long v;
	long e;
	long lLevel;
	long lMax;
	int l;
	int i;
}

void AddPlrMonstExper__Filc(int lvl, long exp, char pmask) {
	int totplrs;
	int i;
}

void InitPlayer__FP12PlayerStructUc(PlayerStruct ptrplr, unsigned char FirstTime) {
}

void InitMultiView__Fv() {
}

unsigned char SolidLoc__Fii(int x, int y) {
}

void PlrClrTrans__Fii(int x, int y) {
	int i;
	int j;
}

void PlrDoTrans__Fii(int x, int y) {
	int i;
	int j;
}

void SetPlayerOld__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void StartStand__FP12PlayerStructi(PlayerStruct ptrplr, int dir) {
}

void StartWalkStand__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void PM_ChangeLightOff__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void PM_ChangeOffset__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void StartAttack__FP12PlayerStructi(PlayerStruct ptrplr, int d) {
	int co;
	unsigned char closeattack;
}

void StartPlrBlock__FP12PlayerStructi(PlayerStruct ptrplr, int dir) {
}

void StartSpell__FP12PlayerStructiii(PlayerStruct ptrplr, int d, int cx, int cy) {
}

void RemovePlrFromMap__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void StartPlrHit__FP12PlayerStructiUc(PlayerStruct ptrplr, int dam, unsigned char forcehit) {
}

void RespawnDeadItem__FP10ItemStructii(ItemStruct itm, int x, int y) {
	int ii;
}

void PlrDeadItem__FP12PlayerStructP10ItemStructii(PlayerStruct ptrplr, ItemStruct itm, int xx, int yy) {
	int x;
	int y;
	int l;
	int j;
	int i;
}

void StartPlayerDropItems__FP12PlayerStructi(PlayerStruct ptrplr, int EarFlag) {
}

void TryDropPlayerItems__FP12PlayerStruct(PlayerStruct ptrplr) {
	unsigned char diablolevel;
	PlayerStruct p;
	ItemStruct pi;
	int i;
	int pdd;
}

void StartPlayerKill__FP12PlayerStructi(PlayerStruct ptrplr, int earflag) {
	ItemStruct ear;
	PlayerStruct p;
}

void DropHalfPlayersGold__FP12PlayerStruct(PlayerStruct ptrplr) {
	long hGold;
	int i;
	int newgold;
}

void StartPlrKill__FP12PlayerStructi(PlayerStruct ptrplr, int earflag) {
	int i;
	int mx;
}

void SyncPlrKill__FP12PlayerStructi(PlayerStruct ptrplr, int earflag) {
}

void RemovePlrMissiles__FP12PlayerStruct(PlayerStruct ptrplr) {
	int i;
	int mx;
}

void InitLevelChange__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void CheckPlrDead__Fi(int pnum) {
	PlayerStruct ptrplr;
}

void StartNewLvl__FP12PlayerStructii(PlayerStruct ptrplr, int fom, int lvl) {
	unknown oldpause;
}

void RestartTownLvl__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void StartWarpLvl__FP12PlayerStructi(PlayerStruct ptrplr, int pidx) {
	unknown oldpause;
}

int PM_DoStand__FP12PlayerStruct(PlayerStruct ptrplr) {
}

unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	int x;
	int y;
}

int PM_DoWalk__FP12PlayerStruct(PlayerStruct ptrplr) {
	int owx;
	int owy;
}

unsigned char WeaponDur__FP12PlayerStructi(PlayerStruct ptrplr, int durrnd) {
}

unsigned char PlrHitMonst__FP12PlayerStructi(PlayerStruct ptrplr, int m) {
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

unsigned char PlrHitPlr__FP12PlayerStructc(PlayerStruct ptrplr, char p) {
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

unsigned char PlrHitObj__FP12PlayerStructii(PlayerStruct ptrplr, int mx, int my) {
	int oi;
}

int PM_DoAttack__FP12PlayerStruct(PlayerStruct ptrplr) {
	int dx;
	int dy;
	int m;
	char p;
	unsigned char didhit;
	int frame;
}

int PM_DoRangeAttack__FP12PlayerStruct(PlayerStruct ptrplr) {
	int mistype;
}

void ShieldDur__FP12PlayerStruct(PlayerStruct ptrplr) {
}

int PM_DoBlock__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void do_spell_anim__FiiiP12PlayerStruct(int aframe, int spell, int clss, PlayerStruct ptrplr) {
	CPlayer test;
	int OtPos;
	int ScrX;
	int ScrY;
	TextDat missdat;
	TextDat objdat;
	OBJ_PFUNC FT4a;
	OBJ_PFUNC FT4b;
	int frame;
}

int PM_DoSpell__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void ArmorDur__FP12PlayerStruct(PlayerStruct ptrplr) {
	PlayerStruct p;
	int a;
	ItemStruct pi;
}

int PM_DoGotHit__FP12PlayerStruct(PlayerStruct ptrplr) {
	int rv;
}

int PM_DoDeath__FP12PlayerStruct(PlayerStruct ptrplr) {
	int pnum;
	int vid;
	LightListStruct vl;
	int i;
}

int PM_DoNewLvl__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void CheckNewPath__FP12PlayerStruct(PlayerStruct ptrplr) {
	int i;
	int d;
	int oi;
}

unsigned char PlrDeathModeOK__Fi(int p) {
}

void ValidatePlayer__Fv() {
	int i;
	int gt;
	int pc;
	unsigned long msk;
	unsigned long b;
}

void CheckCheatStats__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void ProcessPlayers__Fv() {
	int raflag;
	int pnum;
	int tplayer;
	PlayerStruct ptrplr;
}

void ClrPlrPath__FP12PlayerStruct(PlayerStruct ptrplr) {
}

unsigned char PosOkPlayer__FP12PlayerStructii(PlayerStruct ptrplr, int px, int py) {
	int mi;
	int p;
	char bv;
	map_info dm;
}

void MakePlrPath__FP12PlayerStructiiUc(PlayerStruct ptrplr, int xx, int yy, unsigned char endspace) {
}

void CheckPlrSpell__Fv() {
	int sd;
	SpellTarget spl;
	unsigned char addflag;
	PlayerStruct player;
	int rspell;
	int SplLvl;
}

void SyncInitPlrPos__FP12PlayerStruct(PlayerStruct ptrplr) {
	int i;
}

void SyncInitPlr__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void CheckStats__Fi(int p) {
	int c;
	int i;
	PlayerStruct player;
}

void ModifyPlrStr__Fii(int p, int l) {
	PlayerStruct player;
	int ms;
}

void ModifyPlrMag__Fii(int p, int l) {
	PlayerStruct player;
	int ms;
}

void ModifyPlrDex__Fii(int p, int l) {
	PlayerStruct player;
	int ms;
}

void ModifyPlrVit__Fii(int p, int l) {
	PlayerStruct player;
	int ms;
}

void SetPlayerHitPoints__FP12PlayerStructi(PlayerStruct ptrplr, int newhp) {
}

void SetPlrStr__Fii(int p, int v) {
	PlayerStruct player;
}

void SetPlrMag__Fii(int p, int v) {
	PlayerStruct player;
}

void SetPlrDex__Fii(int p, int v) {
	PlayerStruct player;
}

void SetPlrVit__Fii(int p, int v) {
	PlayerStruct player;
}

void InitDungMsgs__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void PlayDungMsgs__Fv() {
	PlayerStruct player;
}

void CreatePlrItems__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void WorldToOffset__FP12PlayerStructii(PlayerStruct ptrplr, int x, int y) {
}

void SetSpdbarGoldCurs__FP12PlayerStructi(PlayerStruct ptrplr, int i) {
}

int GetSpellLevel__FP12PlayerStructi(PlayerStruct ptrplr, int val) {
}

void BreakObject__FP12PlayerStructi(PlayerStruct ptrplr, int val) {
}

void CalcPlrInv__FP12PlayerStructUc(PlayerStruct ptrplr, unsigned char bl) {
}

void RemoveSpdBarItem__FP12PlayerStructi(PlayerStruct ptrplr, int val) {
}

void M_StartKill__FiP12PlayerStruct(int m, PlayerStruct ptrplr) {
}

void SetGoldCurs__FP12PlayerStructi(PlayerStruct ptrplr, int i) {
}

void HealStart__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void HealotherStart__FP12PlayerStruct(PlayerStruct ptrplr) {
}

int CalculateGold__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void M_StartHit__FiP12PlayerStructi(int m, PlayerStruct ptrplr, int dam) {
}

void TeleStart__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void PhaseStart__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void RemoveInvItem__FP12PlayerStructi(PlayerStruct ptrplr, int i) {
}

void PhaseEnd__FP12PlayerStruct(PlayerStruct ptrplr) {
}

void OperateObject__FP12PlayerStructiUc(PlayerStruct ptrplr, int oi, unsigned char bl) {
}

void TryDisarm__FP12PlayerStructi(PlayerStruct ptrplr, int oi) {
}

void TalkToTowner__FP12PlayerStructi(PlayerStruct ptrplr, int val) {
}

unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}

int CalcStatDiff__Fi(int pnum) {
}

void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}

void CreatePlayer__Fic(int pnum, char c) {
}

void StartStand__Fii(int pnum, int dir) {
}

void SetPlayerHitPoints__Fii(int pnum, int val) {
}

void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}

void StartWarpLvl__Fii(int pnum, int pidx) {
}

void SyncPlrKill__Fii(int pnum, int earflag) {
}

void StartPlrKill__Fii(int pnum, int val) {
}

void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}

void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}

void StartPlrBlock__Fii(int pnum, int dir) {
}

void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}

void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}

void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}

void PM_ChangeLightOff__Fi(int pnum) {
}

void CheckNewPath__Fi(int pnum) {
}

void FreePlayerGFX__Fi(int pnum) {
}

void InitDungMsgs__Fi(int pnum) {
}

void InitPlayerGFX__Fi(int pnum) {
}

void SyncInitPlrPos__Fi(int pnum) {
}

void SetPlrAnims__Fi(int pnum) {
}

void ClrPlrPath__Fi(int pnum) {
}

void SyncInitPlr__Fi(int pnum) {
}

void RestartTownLvl__Fi(int pnum) {
}

void SetPlayerOld__Fi(int pnum) {
}

void GetGoldSeed__FP12PlayerStructP10ItemStruct(PlayerStruct ptrplr, ItemStruct h) {
}


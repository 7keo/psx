// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x80077F90
void ClrCursor__Fi(int num) {
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x80077FEC
void HappyMan__Fi(int n) {
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x80077FFC
void flyabout__7GamePad(struct GamePad *this) {
	int cp;
	int owx;
	int owy;
	int wx;
	int wy;
	struct CBlocks *gblocks;
	int step;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x800783F8
void CloseInvChr__Fv() {
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x80078440
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	int x;
	int y;
	struct PlayerStruct *player;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x800784C0
char pad_UpIsUpRight__Fic(int pval, char other) {
	int walk_dir;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x8007857C
struct GamePad* __7GamePadi(struct GamePad *this, int player_num) {
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x80078630
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x80078638
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x8007867C
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x800786C0
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	int i;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x80078928
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	int i;
	int oc;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x80078AE0
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x80078B3C
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x80078B78
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	int i;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x80078C64
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x8007907C
void TestButtons__7GamePad(struct GamePad *this) {
	int hand;
	int joydown;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x80079188
unknown CheckCentre__7GamePadi(struct GamePad *this, int dir) {
	int wx;
	int wy;
	int ret;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x80079280
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x800792B0
int CheckDirs__7GamePadiii(struct GamePad *this, int dir, int wx, int wy) {
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x800793B8
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x800793F8
unknown newDirOk__7GamePadi(struct GamePad *this, int dir) {
	int x;
	int y;
	int wx;
	int wy;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x800794A8
int CheckDiagBodge__7GamePadi(struct GamePad *this, int dir) {
	int x;
	int y;
	int lnd;
	int rnd;
	int wx;
	int wy;
	char *poffset_x;
	char *poffset_y;
	unknown pl;
	unknown pr;
	unknown pf;
	unknown pll;
	unknown prr;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x8007979C
int CheckIsoBodge__7GamePadi(struct GamePad *this, int dir) {
	int x;
	int y;
	int newdir;
	int wx;
	int wy;
	int lnd;
	int rnd;
	char *poffset_x;
	char *poffset_y;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x80079B08
int CheckBodge__7GamePadi(struct GamePad *this, int dir) {
	int fx;
	int fy;
	struct map_info *dm;
	int wx;
	int wy;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x80079C68
void walk__7GamePadi(struct GamePad *this, int cmd) {
	int xv;
	int yv;
	int dir;
	struct PlayerStruct *plr2;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x80079FB0
void check_around_player__7GamePad(struct GamePad *this) {
	int x;
	int y;
	struct ItemStruct *pi;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x8007A2EC
void show_combos__7GamePad(struct GamePad *this) {
	int y;
	struct RECT crect;
	enum TXT_JUST J;
	int i;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x8007A578
void Handle__7GamePad(struct GamePad *this) {
	int cp;
	int abut;
	int owait;
	int dir;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x8007AC34
void GamePadTask__FP4TASK(struct TASK *T) {
	int omp;
	int oms;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x8007AD2C
struct GamePad* GetGamePad__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x8007AD4C
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	struct GamePad *GP1;
	struct GamePad *GP2;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x8007AE50
void Init_GamePad__Fv() {
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x8007AE80
void InitGamePadVars__Fv() {
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x8007B00C
int SetWalkStyle__Fii(int pnum, int style) {
	int ret;
	struct KEY_ASSIGNS *ta;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x8007B07C
char GetPadStyle__Fi(int pnum) {
	struct GamePad *GPad;
}

// Path: C:\diabpsx\SOURCE\GAMEPAD.CPP
// Addr: 0x8007B0A0
void _GLOBAL_.I.flyflag() {
}


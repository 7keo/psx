// C:\diabpsx\SOURCE\GAMEPAD.CPP

#include "types.h"

// address: 0x80077F90
void ClrCursor__Fi(int num) {
}


// address: 0x80077FEC
void HappyMan__Fi(int n) {
}


// address: 0x80077FFC
void flyabout__7GamePad(struct GamePad *this) {
	// register: 16
	register int cp;
	// register: 20
	register int owx;
	// register: 21
	register int owy;
	// register: 17
	register int wx;
	// register: 18
	register int wy;
	// register: 23
	// size: 0x108
	register struct CBlocks *gblocks;
	// register: 4
	register int step;
}


// address: 0x800783F8
void CloseInvChr__Fv() {
}


// address: 0x80078440
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x800784C0
char pad_UpIsUpRight__Fic(int pval, char other) {
	// register: 3
	register int walk_dir;
}


// address: 0x8007857C
// size: 0xD4
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80078630
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80078638
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x8007867C
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800786C0
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x80078928
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80078AE0
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80078B3C
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x80078B78
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x80078C64
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8007907C
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 16
	register int hand;
	// register: 18
	register int joydown;
}


// address: 0x80079188
bool CheckCentre__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
	// register: 6
	register int ret;
}


// address: 0x80079280
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x800792B0
int CheckDirs__7GamePadiii(struct GamePad *this, int dir, int wx, int wy) {
}


// address: 0x800793B8
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x800793F8
bool newDirOk__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int x;
	// register: 6
	register int y;
	{
		{
			// register: 6
			register int wx;
			// register: 7
			register int wy;
		}
	}
}


// address: 0x800794A8
int CheckDiagBodge__7GamePadi(struct GamePad *this, int dir) {
	// address: 0xFFFFFF90
	auto int x;
	// address: 0xFFFFFF98
	auto int y;
	// register: 30
	register int lnd;
	// register: 23
	register int rnd;
	// address: 0xFFFFFFA0
	auto int wx;
	// address: 0xFFFFFFA8
	auto int wy;
	// register: 19
	register char *poffset_x;
	// register: 20
	register char *poffset_y;
	// register: 22
	register bool pl;
	// register: 21
	register bool pr;
	// address: 0xFFFFFFB0
	auto bool pf;
	// address: 0xFFFFFFB8
	auto bool pll;
	// address: 0xFFFFFFC0
	auto bool prr;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8007979C
int CheckIsoBodge__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int x;
	// register: 6
	register int y;
	// register: 17
	register int newdir;
	// register: 21
	register int wx;
	// register: 22
	register int wy;
	// address: 0xFFFFFFB0
	auto int lnd;
	// address: 0xFFFFFFB8
	auto int rnd;
	// register: 18
	register char *poffset_x;
	// register: 19
	register char *poffset_y;
	{
		{
		}
	}
}


// address: 0x80079B08
int CheckBodge__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int fx;
	// register: 6
	register int fy;
	// register: 4
	// size: 0x8
	register struct map_info *dm;
	{
		{
			// register: 5
			register int wx;
			// register: 6
			register int wy;
		}
	}
}


// address: 0x80079C68
void walk__7GamePadi(struct GamePad *this, int cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
	// register: 3
	// size: 0x19E8
	register struct PlayerStruct *plr2;
	{
		{
		}
	}
}


// address: 0x80079FB0
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 19
	register int x;
	// register: 18
	register int y;
	{
		{
			{
				{
					// register: 16
					// size: 0x6C
					register struct ItemStruct *pi;
				}
			}
		}
	}
}


// address: 0x8007A2EC
void show_combos__7GamePad(struct GamePad *this) {
	// register: 21
	register int y;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT crect;
	// register: 22
	// size: 0x4
	register enum TXT_JUST J;
	{
		// register: 20
		register int i;
	}
}


// address: 0x8007A578
void Handle__7GamePad(struct GamePad *this) {
	// register: 18
	register int cp;
	{
		{
			{
				{
					{
						{
							{
								{
									// register: 2
									register int abut;
									{
										{
											// register: 16
											register int owait;
											{
												{
													// register: 5
													register int dir;
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
	}
}


// address: 0x8007AC34
void GamePadTask__FP4TASK(struct TASK *T) {
	// register: 17
	register int omp;
	// register: 18
	register int oms;
}


// address: 0x8007AD2C
// size: 0xD4
struct GamePad *GetGamePad__Fi(int pnum) {
}


// address: 0x8007AD4C
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 3
	// size: 0xD4
	register struct GamePad *GP1;
	// register: 8
	// size: 0xD4
	register struct GamePad *GP2;
}


// address: 0x8007AE50
void Init_GamePad__Fv() {
}


// address: 0x8007AE80
void InitGamePadVars__Fv() {
}


// address: 0x8007B00C
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


// address: 0x8007B07C
char GetPadStyle__Fi(int pnum) {
	// register: 2
	// size: 0xD4
	register struct GamePad *GPad;
}


// address: 0x8007B0A0
void _GLOBAL__I_flyflag() {
}



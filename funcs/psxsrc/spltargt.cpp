// Path: C:\diabpsx\PSXSRC\SPLTARGT.CPP
// Addr: 0x800AF0F0
unknown IsAutoTarget__Fi(int Spell) {
	int i;
}

// Path: C:\diabpsx\PSXSRC\SPLTARGT.CPP
// Addr: 0x800AF128
int GetXOff__Fii(int wx, int wy) {
	int xo;
}

// Path: C:\diabpsx\PSXSRC\SPLTARGT.CPP
// Addr: 0x800AF170
int GetYOff__Fii(int wx, int wy) {
	int yo;
}

// Path: C:\diabpsx\PSXSRC\SPLTARGT.CPP
// Addr: 0x800AF1BC
void GetScrXY__FPiT0(int *wx, int *wy) {
	struct CBlocks *gblocks;
	struct RECT R;
	int plx;
	int ply;
	int xo;
	int x;
	int y;
}

// Path: C:\diabpsx\PSXSRC\SPLTARGT.CPP
// Addr: 0x800AF28C
void ClearTrails__11SpellTarget(struct SpellTarget *this) {
	int i;
}

// Path: C:\diabpsx\PSXSRC\SPLTARGT.CPP
// Addr: 0x800AF2B4
void Init__11SpellTargeti(struct SpellTarget *this, int plrn) {
	int SplLvl;
}

// Path: C:\diabpsx\PSXSRC\SPLTARGT.CPP
// Addr: 0x800AF518
void Remove__11SpellTarget(struct SpellTarget *this) {
}

// Path: C:\diabpsx\PSXSRC\SPLTARGT.CPP
// Addr: 0x800AF57C
void DrawArrow__11SpellTargetii(struct SpellTarget *this, int x1, int y1) {
	int bright;
	char r;
	char g;
	char b;
	int otpos;
	int ni;
	int i;
	int ni;
}

// Path: C:\diabpsx\PSXSRC\SPLTARGT.CPP
// Addr: 0x800AF7F8
void Show__11SpellTarget(struct SpellTarget *this) {
	int x;
	int y;
	struct CPad *Pad;
	int otx;
	int oty;
	int cp;
	int plx;
	int ply;
	struct MonsterStruct *Monst;
	int ops;
	int vis_flag;
	int inthatx;
	int inthaty;
	int d;
}

// Path: C:\diabpsx\PSXSRC\SPLTARGT.CPP
// Addr: 0x800AFD14
void ForceTarget__11SpellTargetiii(struct SpellTarget *this, int monst, int x, int y) {
}

// Path: C:\diabpsx\PSXSRC\SPLTARGT.CPP
// Addr: 0x800AFE68
unknown TargetActive__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\SPLTARGT.CPP
// Addr: 0x800AFE90
struct SpellTarget* GetSpellTarget__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\SPLTARGT.CPP
// Addr: 0x800AFEB0
void ArrowTask__FP4TASK(struct TASK *T) {
	struct DEF_ARGS *args;
	int pnum;
	int times;
	int bright;
	enum TARGET targ;
	struct RECT R;
	int angle;
	int r;
	int g;
	int b;
	int plx;
	int ply;
	int otpos;
	struct PlayerStruct *ptrplr;
	struct MonsterStruct *Monst;
	struct MissileStruct *Miss;
	int pxo;
	int pyo;
}

// Path: C:\diabpsx\PSXSRC\SPLTARGT.CPP
// Addr: 0x800B0260
void SPL_Arrow__F6TARGETiii(enum TARGET t, int pnum, int times, int size) {
	struct DEF_ARGS *args;
	struct TASK *T;
}


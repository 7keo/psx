// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A09DC
void SetQSpell__Fiii(int pnum, int Spell, int type) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A09FC
void release_spell__Fi(int pnum) {
	struct SpellTarget *spl;
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A0A60
void select_belt_item__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A0A68
unsigned char any_belt_items__Fv() {
	int i;
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A0AD0
void get_last_inv__Fv() {
	int i;
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A0BFC
void get_next_inv__Fv() {
	int i;
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A0D30
void pad_func_up__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A0D5C
void pad_func_down__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A0D88
void pad_func_left__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A0D90
void pad_func_right__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A0D98
void pad_func_select__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A0E5C
void SetFindMonsterXY__FP12PlayerStructi(struct PlayerStruct *p, int i) {
	struct MonsterStruct *m;
	struct TownerStruct *t;
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A0EEC
void pad_func_Attack__Fi(int pnum) {
	struct PlayerStruct *player;
	int x;
	int y;
	int fx;
	int fy;
	int fx;
	int fy;
	struct PlayerStruct *plr2;
	int oco;
	int fx;
	int fy;
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A13A0
void pad_func_Action__Fi(int pnum) {
	struct PlayerStruct *player;
	int x;
	int y;
	struct DEF_ARGS *args;
	int ox;
	int oy;
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A1758
void InitTargetCursor__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A178C
void RemoveTargetCursor__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A17D4
unknown TargetingSpell__Fi(int sp) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A181C
void pad_func_Cast_Spell__Fi(int pnum) {
	struct PlayerStruct *player;
	int sp;
	struct CBlocks *gblocks;
	int omp;
	unsigned char DoTarget;
	struct SpellTarget *spl;
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A1C44
void pad_func_Use_Item__Fi(int pnum) {
	struct PlayerStruct *player;
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A1E78
void pad_func_BeltList__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A1FE0
void pad_func_Chr__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A2114
void pad_func_Inv__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A2244
void pad_func_SplBook__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A2390
void pad_func_QLog__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A2484
void pad_func_SpellBook__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A255C
void pad_func_AutoMap__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A2618
void pad_func_Quick_Spell__Fi(int pnum) {
	struct PlayerStruct *player;
	int sp;
	char spt;
	int qps;
	int qst;
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A278C
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	int i;
	int ii;
	struct PlayerStruct *player;
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A2A0C
void pad_func_Quick_Use_Health__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A2A34
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A2A5C
unknown sort_gold__Fi(int pnum) {
	struct found_objects *fo;
	unknown ngold;
	int i;
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A2B64
void DrawObjSelector__FiP12PlayerStruct(int pnum, struct PlayerStruct *player) {
	char str[128];
	struct CPad *Pad;
	int cp;
	int list_size;
	int maxlen;
	struct found_objects *fo;
	int R;
	int G;
	int B;
	int i;
	int nwrap;
	int add_wrap;
	int nx;
	int ny;
	int nw;
	int nh;
	int ypos;
	int fx;
	int fy;
	int len;
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A336C
unknown SelectorActive__Fv() {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A3378
void DrawObjTask__FP4TASK(struct TASK *T) {
	struct DEF_ARGS *args;
	int pnum;
	unknown op;
	unknown oamap;
	struct PlayerStruct *player;
	int oseldata;
	int omp;
	unknown opan;
	int opause;
	int x;
	int y;
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A36B4
void add_area_find_object__Fiii(int index, int x, int y) {
	struct found_objects *fo;
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A3724
unsigned char CheckRangeObject__Fiii(int x, int y, int distance) {
	char co;
	struct map_info *dm;
	int nitem;
	int nmonster;
	int nobject;
	unknown ok;
	int vis_flag;
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A3A9C
unsigned char CheckArea__FiiiUci(int xx, int yy, int range, unsigned char allflag, int pnum) {
	int pnum;
	struct PlayerStruct *player;
	struct SpellTarget *spl;
	unknown is_myplr;
	int i;
	int dir;
	int cm;
	int ci;
	int x;
	int y;
	int dx;
	int dy;
	struct MonsterStruct *Monst;
	int j;
	int k;
	struct MonsterStruct *Monst;
	struct TownerStruct *Twn;
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A4080
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	unknown done;
	int nx;
	int ny;
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A41F8
void _GLOBAL_.D.gplayer() {
}

// Path: C:\diabpsx\PSXSRC\PADFUNCS.CPP
// Addr: 0x800A4220
void _GLOBAL_.I.gplayer() {
}


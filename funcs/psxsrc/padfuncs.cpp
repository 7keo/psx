void SetQSpell__Fiii(int pnum, int Spell, int type) {
}

void release_spell__Fi(int pnum) {
	SpellTarget spl;
}

void select_belt_item__Fi(int pnum) {
}

unsigned char any_belt_items__Fv() {
	int i;
}

void get_last_inv__Fv() {
	int i;
}

void get_next_inv__Fv() {
	int i;
}

void pad_func_up__Fi(int pnum) {
}

void pad_func_down__Fi(int pnum) {
}

void pad_func_left__Fi(int pnum) {
}

void pad_func_right__Fi(int pnum) {
}

void pad_func_select__Fi(int pnum) {
}

void SetFindMonsterXY__FP12PlayerStructi(PlayerStruct p, int i) {
	MonsterStruct m;
	TownerStruct t;
}

void pad_func_Attack__Fi(int pnum) {
	PlayerStruct player;
	int x;
	int y;
	int fx;
	int fy;
	int fx;
	int fy;
	PlayerStruct plr2;
	int oco;
	int fx;
	int fy;
}

void pad_func_Action__Fi(int pnum) {
	PlayerStruct player;
	int x;
	int y;
	DEF_ARGS args;
	int ox;
	int oy;
}

void InitTargetCursor__Fi(int pnum) {
}

void RemoveTargetCursor__Fi(int pnum) {
}

unknown TargetingSpell__Fi(int sp) {
}

void pad_func_Cast_Spell__Fi(int pnum) {
	PlayerStruct player;
	int sp;
	CBlocks gblocks;
	int omp;
	unsigned char DoTarget;
	SpellTarget spl;
}

void pad_func_Use_Item__Fi(int pnum) {
	PlayerStruct player;
}

void pad_func_BeltList__Fi(int pnum) {
}

void pad_func_Chr__Fi(int pnum) {
}

void pad_func_Inv__Fi(int pnum) {
}

void pad_func_SplBook__Fi(int pnum) {
}

void pad_func_QLog__Fi(int pnum) {
}

void pad_func_SpellBook__Fi(int pnum) {
}

void pad_func_AutoMap__Fi(int pnum) {
}

void pad_func_Quick_Spell__Fi(int pnum) {
	PlayerStruct player;
	int sp;
	char spt;
	int qps;
	int qst;
}

void check_inv__FiPci(int pnum, char* ilist, int entries) {
	int i;
	int ii;
	PlayerStruct player;
}

void pad_func_Quick_Use_Health__Fi(int pnum) {
}

void pad_func_Quick_Use_Mana__Fi(int pnum) {
}

unknown sort_gold__Fi(int pnum) {
	found_objects fo;
	unknown ngold;
	int i;
}

void DrawObjSelector__FiP12PlayerStruct(int pnum, PlayerStruct player) {
	char str[128];
	CPad Pad;
	int cp;
	int list_size;
	int maxlen;
	found_objects fo;
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

unknown SelectorActive__Fv() {
}

void DrawObjTask__FP4TASK(TASK T) {
	DEF_ARGS args;
	int pnum;
	unknown op;
	unknown oamap;
	PlayerStruct player;
	int oseldata;
	int omp;
	unknown opan;
	int opause;
	int x;
	int y;
}

void add_area_find_object__Fiii(int index, int x, int y) {
	found_objects fo;
}

unsigned char CheckRangeObject__Fiii(int x, int y, int distance) {
	char co;
	map_info dm;
	int nitem;
	int nmonster;
	int nobject;
	unknown ok;
	int vis_flag;
}

unsigned char CheckArea__FiiiUci(int xx, int yy, int range, unsigned char allflag, int pnum) {
	int pnum;
	PlayerStruct player;
	SpellTarget spl;
	unknown is_myplr;
	int i;
	int dir;
	int cm;
	int ci;
	int x;
	int y;
	int dx;
	int dy;
	MonsterStruct Monst;
	int j;
	int k;
	MonsterStruct Monst;
	TownerStruct Twn;
}

void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	unknown done;
	int nx;
	int ny;
}

void _GLOBAL_.D.gplayer() {
}

void _GLOBAL_.I.gplayer() {
}

void SetQSpell__Fiii(int pnum, int Spell, int type) {
}

void release_spell__Fi(int pnum) {
	SpellTarget spl;
}

void select_belt_item__Fi(int pnum) {
}

unsigned char any_belt_items__Fv() {
	int i;
}

void get_last_inv__Fv() {
	int i;
}

void get_next_inv__Fv() {
	int i;
}

void pad_func_up__Fi(int pnum) {
}

void pad_func_down__Fi(int pnum) {
}

void pad_func_left__Fi(int pnum) {
}

void pad_func_right__Fi(int pnum) {
}

void pad_func_select__Fi(int pnum) {
}

void SetFindMonsterXY__FP12PlayerStructi(PlayerStruct p, int i) {
	MonsterStruct m;
	TownerStruct t;
}

void pad_func_Attack__Fi(int pnum) {
	PlayerStruct player;
	int x;
	int y;
	int fx;
	int fy;
	int fx;
	int fy;
	PlayerStruct plr2;
	int oco;
	int fx;
	int fy;
}

void pad_func_Action__Fi(int pnum) {
	PlayerStruct player;
	int x;
	int y;
	DEF_ARGS args;
	int ox;
	int oy;
}

void InitTargetCursor__Fi(int pnum) {
}

void RemoveTargetCursor__Fi(int pnum) {
}

unknown TargetingSpell__Fi(int sp) {
}

void pad_func_Cast_Spell__Fi(int pnum) {
	PlayerStruct player;
	int sp;
	CBlocks gblocks;
	int omp;
	unsigned char DoTarget;
	SpellTarget spl;
}

void pad_func_Use_Item__Fi(int pnum) {
	PlayerStruct player;
}

void pad_func_BeltList__Fi(int pnum) {
}

void pad_func_Chr__Fi(int pnum) {
}

void pad_func_Inv__Fi(int pnum) {
}

void pad_func_SplBook__Fi(int pnum) {
}

void pad_func_QLog__Fi(int pnum) {
}

void pad_func_SpellBook__Fi(int pnum) {
}

void pad_func_AutoMap__Fi(int pnum) {
}

void pad_func_Quick_Spell__Fi(int pnum) {
	PlayerStruct player;
	int sp;
	char spt;
	int qps;
	int qst;
}

void check_inv__FiPci(int pnum, char* ilist, int entries) {
	int i;
	int ii;
	PlayerStruct player;
}

void pad_func_Quick_Use_Health__Fi(int pnum) {
}

void pad_func_Quick_Use_Mana__Fi(int pnum) {
}

unknown sort_gold__Fi(int pnum) {
	found_objects fo;
	unknown ngold;
	int i;
}

void DrawObjSelector__FiP12PlayerStruct(int pnum, PlayerStruct player) {
	char str[128];
	CPad Pad;
	int cp;
	int list_size;
	int maxlen;
	found_objects fo;
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

unknown SelectorActive__Fv() {
}

void DrawObjTask__FP4TASK(TASK T) {
	DEF_ARGS args;
	int pnum;
	unknown op;
	unknown oamap;
	PlayerStruct player;
	int oseldata;
	int omp;
	unknown opan;
	int opause;
	int x;
	int y;
}

void add_area_find_object__Fiii(int index, int x, int y) {
	found_objects fo;
}

unsigned char CheckRangeObject__Fiii(int x, int y, int distance) {
	char co;
	map_info dm;
	int nitem;
	int nmonster;
	int nobject;
	unknown ok;
	int vis_flag;
}

unsigned char CheckArea__FiiiUci(int xx, int yy, int range, unsigned char allflag, int pnum) {
	int pnum;
	PlayerStruct player;
	SpellTarget spl;
	unknown is_myplr;
	int i;
	int dir;
	int cm;
	int ci;
	int x;
	int y;
	int dx;
	int dy;
	MonsterStruct Monst;
	int j;
	int k;
	MonsterStruct Monst;
	TownerStruct Twn;
}

void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	unknown done;
	int nx;
	int ny;
}

void _GLOBAL_.D.gplayer() {
}

void _GLOBAL_.I.gplayer() {
}


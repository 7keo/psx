// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003E24C
void InitItemGFX__Fv() {
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003E254
unsigned char ItemPlace__Fii(int xp, int yp) {
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003E2F0
void AddInitItems__Fv() {
	int j;
	int i;
	int ii;
	int xx;
	int yy;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003E4F8
void InitItems__Fb(unknown re_init) {
	int i;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003E6B0
void CalcPlrItemVals__FiUc(int p, unsigned char Loadgfx) {
	int mind;
	int maxd;
	int tac;
	int g;
	int i;
	int mi;
	int bdam;
	int btohit;
	int bac;
	int sadd;
	int madd;
	int dadd;
	int vadd;
	int fr;
	int lr;
	int mr;
	int dmod;
	int ghit;
	int lrad;
	int ihp;
	int imana;
	int spllvladd;
	int enac;
	int fmin;
	int fmax;
	int lmin;
	int lmax;
	long iflgs;
	unsigned long spl;
	unsigned long t;
	struct PlayerStruct *ptrplr;
	struct ItemStruct *itm;
	int tmpac;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003F130
void CalcPlrScrolls__Fi(int p) {
	int i;
	unsigned long t;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003F4B0
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	unsigned long t;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003F57C
void CalcSelfItems__Fi(int pnum) {
	int i;
	struct PlayerStruct *p;
	unsigned char sf;
	unsigned char changeflag;
	int sa;
	int ma;
	int da;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003F6DC
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003F728
void SetItemMinStats__FPC12PlayerStructP10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003F754
void CalcPlrItemMin__Fi(int pnum) {
	int i;
	struct ItemStruct *pi;
	struct PlayerStruct *p;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003F834
void CalcPlrBookVals__Fi(int p) {
	int i;
	int slvl;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003FB18
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003FBC8
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	struct ItemDataStruct *pAllItem;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003FCE0
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003FD0C
void GetGoldSeed__FiP10ItemStruct(int pnum, struct ItemStruct *h) {
	int i;
	int ii;
	int s;
	unsigned char doneflag;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003FE74
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003FE7C
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8003FEAC
void CreatePlrItems__Fi(int p) {
	int i;
	struct ItemStruct *pi;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004040C
unsigned char ItemSpaceOk__Fii(int i, int j) {
	int oi;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004068C
unsigned char GetItemSpace__Fiic(int x, int y, char inum) {
	int i;
	int j;
	int xx;
	int yy;
	int rs;
	unsigned char savail;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x800408A4
void GetSuperItemSpace__Fiic(int x, int y, char inum) {
	int xx;
	int yy;
	int l;
	int j;
	int i;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x800409FC
void GetSuperItemLoc__FiiRiT2(int x, int y, int *xx, int *yy) {
	int l;
	int j;
	int i;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80040AC4
void CalcItemValue__Fi(int i) {
	int v;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80040B7C
void GetBookSpell__Fii(int i, int lvl) {
	int rv;
	int s;
	int bs;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80040DDC
void GetStaffPower__FiiiUc(int i, int lvl, int bs, unsigned char onlygood) {
	int l[256];
	int nl;
	int j;
	int preidx;
	char istr[128];
	unsigned char addok;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80040FC4
void GetStaffSpell__FiiUc(int i, int lvl, unsigned char onlygood) {
	int rv;
	int s;
	int l;
	int bs;
	int maxc;
	int minc;
	int v;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004129C
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	int rndv;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004180C
int RndPL__Fii(int param1, int param2) {
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80041840
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
	int maxv;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x800418B4
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	int minval;
	int maxval;
	int multval;
	int r;
	int r2;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80042FE4
void GetItemPower__FiiilUc(int i, int minlvl, int maxlvl, long flgs, int onlygood) {
	unsigned char onlygood;
	int pre;
	int post;
	int l[256];
	int nl;
	int j;
	int preidx;
	int sufidx;
	char istr[128];
	unsigned char goe;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80043434
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
	unsigned char onlygood;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80043530
void SetupItem__Fi(int i) {
	int it;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80043660
int RndItem__Fi(int m) {
	int ril[512];
	int ri;
	int i;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80043894
int RndUItem__Fi(int m) {
	int ril[512];
	int ri;
	int i;
	unsigned char okflag;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80043ADC
int RndAllItems__Fv() {
	int ril[512];
	int ri;
	int i;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80043C40
int RndTypeItems__Fii(int itype, int imid) {
	int ril[512];
	int ri;
	int i;
	unsigned char okflag;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80043DB0
int CheckUnique__FiiiUc(int i, int lvl, int uper, unsigned char recreate) {
	int j;
	int idata;
	unsigned char uok[128];
	int numu;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80043F54
void GetUniqueItem__Fii(int i, int _uid) {
	long uid;
	long OUid;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x800442B4
void SpawnUnique__Fiii(int uid, int x, int y) {
	int ii;
	int itype;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x800443F4
void ItemRndDur__Fi(int ii) {
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80044490
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int _iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	int uper;
	unsigned char onlygood;
	unsigned char recreate;
	unsigned char pregen;
	int iblvl;
	int uid;
	int iseed;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x800447C8
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	int ii;
	int idx;
	unsigned char onlygood;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80044A20
void CreateItem__Fiii(int uid, int x, int y) {
	int ii;
	int idx;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80044BD8
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	unsigned char delta;
	int ii;
	int idx;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80044D20
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	int idx;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80044E04
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	int ii;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80044EC4
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	unsigned char sendmsg;
	unsigned char delta;
	int ii;
	int idx;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80045008
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
	int dur;
	int mdur;
	int ch;
	int mch;
	int ivalue;
	int ibuff;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80045208
void SpawnQuestItem__Fiiiii(int itemid, int x, int y, int randarea, int selflag) {
	int selflag;
	int i;
	int j;
	unsigned char failed;
	int tries;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80045454
void SpawnRock__Fv() {
	int i;
	int ii;
	int ostand;
	int xx;
	unsigned char done;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80045600
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	int it;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x800457B8
void DeleteItem__Fii(int ii, int i) {
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004580C
void ItemDoppel__Fv() {
	int idoppelx;
	struct ItemStruct *i;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x800458CC
void ProcessItems__Fv() {
	int i;
	int ii;
	int numitemslist;
	int count;
	int j;
	int it;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80045B70
void FreeItemGFX__Fv() {
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80045B78
void GetItemStr__Fi(int i) {
	int nGold;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80045D20
void CheckIdentify__Fii(int pnum, int cii) {
	struct ItemStruct *pi;
	struct PlayerStruct *p;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80045E1C
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	int d;
	int rep;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80045F0C
void DoRepair__Fii(int pnum, int cii) {
	struct PlayerStruct *p;
	struct ItemStruct *pi;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80045FD0
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80046038
void DoRecharge__Fii(int pnum, int cii) {
	struct PlayerStruct *p;
	struct ItemStruct *pi;
	int r;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004615C
void PrintItemOil__Fc(char IDidx) {
	int StrVal;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80046258
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	int v;
	char *tstr;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80046A1C
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80046C7C
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
	char tsrt[40];
	char *tstr;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x800470F8
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
	char tsrt[40];
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80047464
void CastScroll__Fii(int pnum, int Spell) {
	struct PlayerStruct *ptrplr;
	int dx;
	int dy;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x800476F0
void UseItem__Fiii(int p, int Mid, int spl) {
	long l;
	unsigned long t;
	struct PlayerStruct *ptrplr;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80047D04
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	unsigned char sf;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80047D98
unsigned char PremiumItemOk__Fi(int i) {
	unsigned char rv;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80047E14
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	int ril[512];
	int ri;
	int i;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80047F18
void SpawnOnePremium__Fii(int i, int plvl) {
	int itype;
	int maxval;
	struct ItemStruct holditem;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004820C
void SpawnPremium__Fi(int lvl) {
	int i;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x800485AC
void WitchBookLevel__Fi(int ii) {
	int slvl;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80048788
void SpawnStoreGold__Fv() {
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80048858
void RecalcStoreStats__Fv() {
	int i;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80048B3C
int ItemNoFlippy__Fv() {
	int r;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80048BA0
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	unsigned char delta;
	int ii;
	int idx;
	unsigned char done;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80048D30
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	unsigned char sendmsg;
	unsigned char delta;
	int ii;
	int idx;
	unsigned char done;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80048EAC
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	unsigned char sendmsg;
	unsigned char delta;
	int ii;
	int idx;
	unsigned char done;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80049028
void DrawUniqueInfo__Fv() {
	int u;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80049198
char* MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	int PreIdx;
	int SufIdx;
	char PreStr[64];
	char ItemStr[64];
	char SufStr[64];
	char ltstr[64];
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80049608
unsigned char SmithItemOk__Fi(int i) {
	unsigned char rv;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004966C
int RndSmithItem__Fi(int lvl) {
	int ril[512];
	int ri;
	int i;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80049774
unsigned char WitchItemOk__Fi(int i) {
	unsigned char rv;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80049804
int RndWitchItem__Fi(int lvl) {
	int ril[512];
	int ri;
	int i;
	int pi;
	int is;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x800499B0
void BubbleSwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	struct ItemStruct h;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80049AB8
void SortWitch__Fv() {
	int j;
	int k;
	unsigned char sorted;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80049C48
int RndBoyItem__Fi(int lvl) {
	int ril[512];
	int ri;
	int i;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80049D64
unsigned char HealerItemOk__Fi(int i) {
	unsigned char rv;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x80049F18
int RndHealerItem__Fi(int lvl) {
	int ril[512];
	int ri;
	int i;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004A014
void RecreatePremiumItem__Fiiii(int ii, int idx, int plvl, int iseed) {
	int itype;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004A0F0
void RecreateWitchItem__Fiiii(int ii, int idx, int lvl, int iseed) {
	int itype;
	int iblvl;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004A258
void RecreateSmithItem__Fiiii(int ii, int idx, int lvl, int iseed) {
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004A308
void RecreateHealerItem__Fiiii(int ii, int idx, int lvl, int iseed) {
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004A3DC
void RecreateBoyItem__Fiiii(int ii, int idx, int lvl, int iseed) {
	int itype;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004A4B4
void RecreateTownItem__FiiUsii(int ii, int idx, unsigned short icreateinfo, int iseed, int ivalue) {
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004A540
void SpawnSmith__Fi(int lvl) {
	int i;
	int nsi;
	struct ItemStruct holditem;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004A86C
void SpawnWitch__Fi(int lvl) {
	int itype;
	int iblvl;
	int i;
	int nsi;
	struct ItemStruct holditem;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004AE5C
void SpawnHealer__Fi(int lvl) {
	int i;
	int nsi;
	int srnd;
	struct ItemStruct holditem;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004B3FC
void SpawnBoy__Fi(int lvl) {
	int itype;
	struct ItemStruct holditem;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004B700
void SortSmith__Fv() {
	int j;
	int k;
	unsigned char sorted;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004B884
void SortHealer__Fv() {
	int j;
	int k;
	unsigned char sorted;
}

// Path: C:\diabpsx\SOURCE\ITEMS.CPP
// Addr: 0x8004BA14
void RecreateItem__FiiUsiii(int ii, int idx, unsigned short icreateinfo, int iseed, int ivalue, int PlrCreate) {
	int ivalue;
	int PlrCreate;
	int OldFePlayerNo;
	int uper;
	unsigned char onlygood;
	unsigned char uavail;
	unsigned char pregen;
}


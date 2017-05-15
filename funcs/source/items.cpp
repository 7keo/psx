void InitItemGFX__Fv() {
}

unsigned char ItemPlace__Fii(int xp, int yp) {
}

void AddInitItems__Fv() {
	int j;
	int i;
	int ii;
	int xx;
	int yy;
}

void InitItems__Fb(unknown re_init) {
	int i;
}

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
	PlayerStruct ptrplr;
	ItemStruct itm;
	int tmpac;
}

void CalcPlrScrolls__Fi(int p) {
	int i;
	unsigned long t;
}

void CalcPlrStaff__FP12PlayerStruct(PlayerStruct ptrplr) {
	unsigned long t;
}

void CalcSelfItems__Fi(int pnum) {
	int i;
	PlayerStruct p;
	unsigned char sf;
	unsigned char changeflag;
	int sa;
	int ma;
	int da;
}

unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(PlayerStruct p, ItemStruct x) {
}

void SetItemMinStats__FPC12PlayerStructP10ItemStruct(PlayerStruct p, ItemStruct x) {
}

void CalcPlrItemMin__Fi(int pnum) {
	int i;
	ItemStruct pi;
	PlayerStruct p;
}

void CalcPlrBookVals__Fi(int p) {
	int i;
	int slvl;
}

void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}

void SetPlrHandItem__FP10ItemStructi(ItemStruct h, int idata) {
	ItemDataStruct pAllItem;
}

void GetPlrHandSeed__FP10ItemStruct(ItemStruct h) {
}

void GetGoldSeed__FiP10ItemStruct(int pnum, ItemStruct h) {
	int i;
	int ii;
	int s;
	unsigned char doneflag;
}

void SetPlrHandSeed__FP10ItemStructi(ItemStruct h, int iseed) {
}

void SetPlrHandGoldCurs__FP10ItemStruct(ItemStruct h) {
}

void CreatePlrItems__Fi(int p) {
	int i;
	ItemStruct pi;
}

unsigned char ItemSpaceOk__Fii(int i, int j) {
	int oi;
}

unsigned char GetItemSpace__Fiic(int x, int y, char inum) {
	int i;
	int j;
	int xx;
	int yy;
	int rs;
	unsigned char savail;
}

void GetSuperItemSpace__Fiic(int x, int y, char inum) {
	int xx;
	int yy;
	int l;
	int j;
	int i;
}

void GetSuperItemLoc__FiiRiT2(int x, int y, int* xx, int* yy) {
	int l;
	int j;
	int i;
}

void CalcItemValue__Fi(int i) {
	int v;
}

void GetBookSpell__Fii(int i, int lvl) {
	int rv;
	int s;
	int bs;
}

void GetStaffPower__FiiiUc(int i, int lvl, int bs, unsigned char onlygood) {
	int l[256];
	int nl;
	int j;
	int preidx;
	char istr[128];
	unsigned char addok;
}

void GetStaffSpell__FiiUc(int i, int lvl, unsigned char onlygood) {
	int rv;
	int s;
	int l;
	int bs;
	int maxc;
	int minc;
	int v;
}

void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	int rndv;
}

int RndPL__Fii(int param1, int param2) {
}

int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
	int maxv;
}

void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	int minval;
	int maxval;
	int multval;
	int r;
	int r2;
}

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

void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
	unsigned char onlygood;
}

void SetupItem__Fi(int i) {
	int it;
}

int RndItem__Fi(int m) {
	int ril[512];
	int ri;
	int i;
}

int RndUItem__Fi(int m) {
	int ril[512];
	int ri;
	int i;
	unsigned char okflag;
}

int RndAllItems__Fv() {
	int ril[512];
	int ri;
	int i;
}

int RndTypeItems__Fii(int itype, int imid) {
	int ril[512];
	int ri;
	int i;
	unsigned char okflag;
}

int CheckUnique__FiiiUc(int i, int lvl, int uper, unsigned char recreate) {
	int j;
	int idata;
	unsigned char uok[128];
	int numu;
}

void GetUniqueItem__Fii(int i, int _uid) {
	long uid;
	long OUid;
}

void SpawnUnique__Fiii(int uid, int x, int y) {
	int ii;
	int itype;
}

void ItemRndDur__Fi(int ii) {
}

void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int _iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	int uper;
	unsigned char onlygood;
	unsigned char recreate;
	unsigned char pregen;
	int iblvl;
	int uid;
	int iseed;
}

void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	int ii;
	int idx;
	unsigned char onlygood;
}

void CreateItem__Fiii(int uid, int x, int y) {
	int ii;
	int idx;
}

void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	unsigned char delta;
	int ii;
	int idx;
}

void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	int idx;
}

void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	int ii;
}

void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	unsigned char sendmsg;
	unsigned char delta;
	int ii;
	int idx;
}

void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
	int dur;
	int mdur;
	int ch;
	int mch;
	int ivalue;
	int ibuff;
}

void SpawnQuestItem__Fiiiii(int itemid, int x, int y, int randarea, int selflag) {
	int selflag;
	int i;
	int j;
	unsigned char failed;
	int tries;
}

void SpawnRock__Fv() {
	int i;
	int ii;
	int ostand;
	int xx;
	unsigned char done;
}

void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	int it;
}

void DeleteItem__Fii(int ii, int i) {
}

void ItemDoppel__Fv() {
	int idoppelx;
	ItemStruct i;
}

void ProcessItems__Fv() {
	int i;
	int ii;
	int numitemslist;
	int count;
	int j;
	int it;
}

void FreeItemGFX__Fv() {
}

void GetItemStr__Fi(int i) {
	int nGold;
}

void CheckIdentify__Fii(int pnum, int cii) {
	ItemStruct pi;
	PlayerStruct p;
}

void RepairItem__FP10ItemStructi(ItemStruct i, int lvl) {
	int d;
	int rep;
}

void DoRepair__Fii(int pnum, int cii) {
	PlayerStruct p;
	ItemStruct pi;
}

void RechargeItem__FP10ItemStructi(ItemStruct i, int r) {
}

void DoRecharge__Fii(int pnum, int cii) {
	PlayerStruct p;
	ItemStruct pi;
	int r;
}

void PrintItemOil__Fc(char IDidx) {
	int StrVal;
}

void PrintItemPower__FcPC10ItemStruct(char plidx, ItemStruct x) {
	int v;
	char* tstr;
}

void PrintItemMisc__FPC10ItemStruct(ItemStruct x) {
}

void PrintItemDetails__FPC10ItemStruct(ItemStruct x) {
	char tsrt[40];
	char* tstr;
}

void PrintItemDur__FPC10ItemStruct(ItemStruct x) {
	char tsrt[40];
}

void CastScroll__Fii(int pnum, int Spell) {
	PlayerStruct ptrplr;
	int dx;
	int dy;
}

void UseItem__Fiii(int p, int Mid, int spl) {
	long l;
	unsigned long t;
	PlayerStruct ptrplr;
}

unsigned char StoreStatOk__FP10ItemStruct(ItemStruct h) {
	unsigned char sf;
}

unsigned char PremiumItemOk__Fi(int i) {
	unsigned char rv;
}

int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	int ril[512];
	int ri;
	int i;
}

void SpawnOnePremium__Fii(int i, int plvl) {
	int itype;
	int maxval;
	ItemStruct holditem;
}

void SpawnPremium__Fi(int lvl) {
	int i;
}

void WitchBookLevel__Fi(int ii) {
	int slvl;
}

void SpawnStoreGold__Fv() {
}

void RecalcStoreStats__Fv() {
	int i;
}

int ItemNoFlippy__Fv() {
	int r;
}

void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	unsigned char delta;
	int ii;
	int idx;
	unsigned char done;
}

void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	unsigned char sendmsg;
	unsigned char delta;
	int ii;
	int idx;
	unsigned char done;
}

void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	unsigned char sendmsg;
	unsigned char delta;
	int ii;
	int idx;
	unsigned char done;
}

void DrawUniqueInfo__Fv() {
	int u;
}

char* MakeItemStr__FP10ItemStructUsUs(ItemStruct ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	int PreIdx;
	int SufIdx;
	char PreStr[64];
	char ItemStr[64];
	char SufStr[64];
	char ltstr[64];
}

unsigned char SmithItemOk__Fi(int i) {
	unsigned char rv;
}

int RndSmithItem__Fi(int lvl) {
	int ril[512];
	int ri;
	int i;
}

unsigned char WitchItemOk__Fi(int i) {
	unsigned char rv;
}

int RndWitchItem__Fi(int lvl) {
	int ril[512];
	int ri;
	int i;
	int pi;
	int is;
}

void BubbleSwapItem__FP10ItemStructT0(ItemStruct a, ItemStruct b) {
	ItemStruct h;
}

void SortWitch__Fv() {
	int j;
	int k;
	unsigned char sorted;
}

int RndBoyItem__Fi(int lvl) {
	int ril[512];
	int ri;
	int i;
}

unsigned char HealerItemOk__Fi(int i) {
	unsigned char rv;
}

int RndHealerItem__Fi(int lvl) {
	int ril[512];
	int ri;
	int i;
}

void RecreatePremiumItem__Fiiii(int ii, int idx, int plvl, int iseed) {
	int itype;
}

void RecreateWitchItem__Fiiii(int ii, int idx, int lvl, int iseed) {
	int itype;
	int iblvl;
}

void RecreateSmithItem__Fiiii(int ii, int idx, int lvl, int iseed) {
}

void RecreateHealerItem__Fiiii(int ii, int idx, int lvl, int iseed) {
}

void RecreateBoyItem__Fiiii(int ii, int idx, int lvl, int iseed) {
	int itype;
}

void RecreateTownItem__FiiUsii(int ii, int idx, unsigned short icreateinfo, int iseed, int ivalue) {
}

void SpawnSmith__Fi(int lvl) {
	int i;
	int nsi;
	ItemStruct holditem;
}

void SpawnWitch__Fi(int lvl) {
	int itype;
	int iblvl;
	int i;
	int nsi;
	ItemStruct holditem;
}

void SpawnHealer__Fi(int lvl) {
	int i;
	int nsi;
	int srnd;
	ItemStruct holditem;
}

void SpawnBoy__Fi(int lvl) {
	int itype;
	ItemStruct holditem;
}

void SortSmith__Fv() {
	int j;
	int k;
	unsigned char sorted;
}

void SortHealer__Fv() {
	int j;
	int k;
	unsigned char sorted;
}

void RecreateItem__FiiUsiii(int ii, int idx, unsigned short icreateinfo, int iseed, int ivalue, int PlrCreate) {
	int ivalue;
	int PlrCreate;
	int OldFePlayerNo;
	int uper;
	unsigned char onlygood;
	unsigned char uavail;
	unsigned char pregen;
}

void InitItemGFX__Fv() {
}

unsigned char ItemPlace__Fii(int xp, int yp) {
}

void AddInitItems__Fv() {
	int j;
	int i;
	int ii;
	int xx;
	int yy;
}

void InitItems__Fb(unknown re_init) {
	int i;
}

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
	PlayerStruct ptrplr;
	ItemStruct itm;
	int tmpac;
}

void CalcPlrScrolls__Fi(int p) {
	int i;
	unsigned long t;
}

void CalcPlrStaff__FP12PlayerStruct(PlayerStruct ptrplr) {
	unsigned long t;
}

void CalcSelfItems__Fi(int pnum) {
	int i;
	PlayerStruct p;
	unsigned char sf;
	unsigned char changeflag;
	int sa;
	int ma;
	int da;
}

unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(PlayerStruct p, ItemStruct x) {
}

void SetItemMinStats__FPC12PlayerStructP10ItemStruct(PlayerStruct p, ItemStruct x) {
}

void CalcPlrItemMin__Fi(int pnum) {
	int i;
	ItemStruct pi;
	PlayerStruct p;
}

void CalcPlrBookVals__Fi(int p) {
	int i;
	int slvl;
}

void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}

void SetPlrHandItem__FP10ItemStructi(ItemStruct h, int idata) {
	ItemDataStruct pAllItem;
}

void GetPlrHandSeed__FP10ItemStruct(ItemStruct h) {
}

void GetGoldSeed__FiP10ItemStruct(int pnum, ItemStruct h) {
	int i;
	int ii;
	int s;
	unsigned char doneflag;
}

void SetPlrHandSeed__FP10ItemStructi(ItemStruct h, int iseed) {
}

void SetPlrHandGoldCurs__FP10ItemStruct(ItemStruct h) {
}

void CreatePlrItems__Fi(int p) {
	int i;
	ItemStruct pi;
}

unsigned char ItemSpaceOk__Fii(int i, int j) {
	int oi;
}

unsigned char GetItemSpace__Fiic(int x, int y, char inum) {
	int i;
	int j;
	int xx;
	int yy;
	int rs;
	unsigned char savail;
}

void GetSuperItemSpace__Fiic(int x, int y, char inum) {
	int xx;
	int yy;
	int l;
	int j;
	int i;
}

void GetSuperItemLoc__FiiRiT2(int x, int y, int* xx, int* yy) {
	int l;
	int j;
	int i;
}

void CalcItemValue__Fi(int i) {
	int v;
}

void GetBookSpell__Fii(int i, int lvl) {
	int rv;
	int s;
	int bs;
}

void GetStaffPower__FiiiUc(int i, int lvl, int bs, unsigned char onlygood) {
	int l[256];
	int nl;
	int j;
	int preidx;
	char istr[128];
	unsigned char addok;
}

void GetStaffSpell__FiiUc(int i, int lvl, unsigned char onlygood) {
	int rv;
	int s;
	int l;
	int bs;
	int maxc;
	int minc;
	int v;
}

void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	int rndv;
}

int RndPL__Fii(int param1, int param2) {
}

int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
	int maxv;
}

void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	int minval;
	int maxval;
	int multval;
	int r;
	int r2;
}

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

void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
	unsigned char onlygood;
}

void SetupItem__Fi(int i) {
	int it;
}

int RndItem__Fi(int m) {
	int ril[512];
	int ri;
	int i;
}

int RndUItem__Fi(int m) {
	int ril[512];
	int ri;
	int i;
	unsigned char okflag;
}

int RndAllItems__Fv() {
	int ril[512];
	int ri;
	int i;
}

int RndTypeItems__Fii(int itype, int imid) {
	int ril[512];
	int ri;
	int i;
	unsigned char okflag;
}

int CheckUnique__FiiiUc(int i, int lvl, int uper, unsigned char recreate) {
	int j;
	int idata;
	unsigned char uok[128];
	int numu;
}

void GetUniqueItem__Fii(int i, int _uid) {
	long uid;
	long OUid;
}

void SpawnUnique__Fiii(int uid, int x, int y) {
	int ii;
	int itype;
}

void ItemRndDur__Fi(int ii) {
}

void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int _iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	int uper;
	unsigned char onlygood;
	unsigned char recreate;
	unsigned char pregen;
	int iblvl;
	int uid;
	int iseed;
}

void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	int ii;
	int idx;
	unsigned char onlygood;
}

void CreateItem__Fiii(int uid, int x, int y) {
	int ii;
	int idx;
}

void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	unsigned char delta;
	int ii;
	int idx;
}

void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	int idx;
}

void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	int ii;
}

void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	unsigned char sendmsg;
	unsigned char delta;
	int ii;
	int idx;
}

void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
	int dur;
	int mdur;
	int ch;
	int mch;
	int ivalue;
	int ibuff;
}

void SpawnQuestItem__Fiiiii(int itemid, int x, int y, int randarea, int selflag) {
	int selflag;
	int i;
	int j;
	unsigned char failed;
	int tries;
}

void SpawnRock__Fv() {
	int i;
	int ii;
	int ostand;
	int xx;
	unsigned char done;
}

void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	int it;
}

void DeleteItem__Fii(int ii, int i) {
}

void ItemDoppel__Fv() {
	int idoppelx;
	ItemStruct i;
}

void ProcessItems__Fv() {
	int i;
	int ii;
	int numitemslist;
	int count;
	int j;
	int it;
}

void FreeItemGFX__Fv() {
}

void GetItemStr__Fi(int i) {
	int nGold;
}

void CheckIdentify__Fii(int pnum, int cii) {
	ItemStruct pi;
	PlayerStruct p;
}

void RepairItem__FP10ItemStructi(ItemStruct i, int lvl) {
	int d;
	int rep;
}

void DoRepair__Fii(int pnum, int cii) {
	PlayerStruct p;
	ItemStruct pi;
}

void RechargeItem__FP10ItemStructi(ItemStruct i, int r) {
}

void DoRecharge__Fii(int pnum, int cii) {
	PlayerStruct p;
	ItemStruct pi;
	int r;
}

void PrintItemOil__Fc(char IDidx) {
	int StrVal;
}

void PrintItemPower__FcPC10ItemStruct(char plidx, ItemStruct x) {
	int v;
	char* tstr;
}

void PrintItemMisc__FPC10ItemStruct(ItemStruct x) {
}

void PrintItemDetails__FPC10ItemStruct(ItemStruct x) {
	char tsrt[40];
	char* tstr;
}

void PrintItemDur__FPC10ItemStruct(ItemStruct x) {
	char tsrt[40];
}

void CastScroll__Fii(int pnum, int Spell) {
	PlayerStruct ptrplr;
	int dx;
	int dy;
}

void UseItem__Fiii(int p, int Mid, int spl) {
	long l;
	unsigned long t;
	PlayerStruct ptrplr;
}

unsigned char StoreStatOk__FP10ItemStruct(ItemStruct h) {
	unsigned char sf;
}

unsigned char PremiumItemOk__Fi(int i) {
	unsigned char rv;
}

int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	int ril[512];
	int ri;
	int i;
}

void SpawnOnePremium__Fii(int i, int plvl) {
	int itype;
	int maxval;
	ItemStruct holditem;
}

void SpawnPremium__Fi(int lvl) {
	int i;
}

void WitchBookLevel__Fi(int ii) {
	int slvl;
}

void SpawnStoreGold__Fv() {
}

void RecalcStoreStats__Fv() {
	int i;
}

int ItemNoFlippy__Fv() {
	int r;
}

void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	unsigned char delta;
	int ii;
	int idx;
	unsigned char done;
}

void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	unsigned char sendmsg;
	unsigned char delta;
	int ii;
	int idx;
	unsigned char done;
}

void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	unsigned char sendmsg;
	unsigned char delta;
	int ii;
	int idx;
	unsigned char done;
}

void DrawUniqueInfo__Fv() {
	int u;
}

char* MakeItemStr__FP10ItemStructUsUs(ItemStruct ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	int PreIdx;
	int SufIdx;
	char PreStr[64];
	char ItemStr[64];
	char SufStr[64];
	char ltstr[64];
}

unsigned char SmithItemOk__Fi(int i) {
	unsigned char rv;
}

int RndSmithItem__Fi(int lvl) {
	int ril[512];
	int ri;
	int i;
}

unsigned char WitchItemOk__Fi(int i) {
	unsigned char rv;
}

int RndWitchItem__Fi(int lvl) {
	int ril[512];
	int ri;
	int i;
	int pi;
	int is;
}

void BubbleSwapItem__FP10ItemStructT0(ItemStruct a, ItemStruct b) {
	ItemStruct h;
}

void SortWitch__Fv() {
	int j;
	int k;
	unsigned char sorted;
}

int RndBoyItem__Fi(int lvl) {
	int ril[512];
	int ri;
	int i;
}

unsigned char HealerItemOk__Fi(int i) {
	unsigned char rv;
}

int RndHealerItem__Fi(int lvl) {
	int ril[512];
	int ri;
	int i;
}

void RecreatePremiumItem__Fiiii(int ii, int idx, int plvl, int iseed) {
	int itype;
}

void RecreateWitchItem__Fiiii(int ii, int idx, int lvl, int iseed) {
	int itype;
	int iblvl;
}

void RecreateSmithItem__Fiiii(int ii, int idx, int lvl, int iseed) {
}

void RecreateHealerItem__Fiiii(int ii, int idx, int lvl, int iseed) {
}

void RecreateBoyItem__Fiiii(int ii, int idx, int lvl, int iseed) {
	int itype;
}

void RecreateTownItem__FiiUsii(int ii, int idx, unsigned short icreateinfo, int iseed, int ivalue) {
}

void SpawnSmith__Fi(int lvl) {
	int i;
	int nsi;
	ItemStruct holditem;
}

void SpawnWitch__Fi(int lvl) {
	int itype;
	int iblvl;
	int i;
	int nsi;
	ItemStruct holditem;
}

void SpawnHealer__Fi(int lvl) {
	int i;
	int nsi;
	int srnd;
	ItemStruct holditem;
}

void SpawnBoy__Fi(int lvl) {
	int itype;
	ItemStruct holditem;
}

void SortSmith__Fv() {
	int j;
	int k;
	unsigned char sorted;
}

void SortHealer__Fv() {
	int j;
	int k;
	unsigned char sorted;
}

void RecreateItem__FiiUsiii(int ii, int idx, unsigned short icreateinfo, int iseed, int ivalue, int PlrCreate) {
	int ivalue;
	int PlrCreate;
	int OldFePlayerNo;
	int uper;
	unsigned char onlygood;
	unsigned char uavail;
	unsigned char pregen;
}


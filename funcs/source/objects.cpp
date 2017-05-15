// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80053080
void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80053168
void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x800532B4
void PostAddArmorStand__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005333C
void PostAddObjLight__Fii(int i, int r) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80053400
void PostAddWeaponRack__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80053488
void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80053524
void InitObjectGFX__Fv() {
	unsigned char fileload[56];
	int i;
	int t;
	char filestr[32];
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80053740
void FreeObjectGFX__Fv() {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005374C
void DeleteObject__Fii(int oi, int i) {
	int ox;
	int oy;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x800537F0
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	int ai;
	int j;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80053A70
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
	int y2;
	int v;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80053AD0
void SetBookMsg__Fii(int i, int msg) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80053AF8
void AddObject__Fiii(int ot, int ox, int oy) {
	int oi;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80053C08
void PostAddObject__Fiii(int ot, int ox, int oy) {
	int oi;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80054070
void Obj_Light__Fii(int i, int lr) {
	int ox;
	int oy;
	int dx;
	int dy;
	int p;
	int tr;
	unsigned char turnon;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80054290
void Obj_Circle__Fi(int i) {
	int px;
	int py;
	int ox;
	int oy;
	int v1;
	int v2;
	unknown done;
	int pnum;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x800545D4
void Obj_StopAnim__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80054638
void DrawExpl__Fiiiiiccc(int sx, int sy, int f, int ot, int scale, int rtint, int gtint, int btint) {
	int scale;
	char rtint;
	char gtint;
	char btint;
	struct POLY_FT4 *Ft4;
	int PhysFrame;
	struct TextDat *ObjDat;
	int temp;
	int bright;
	int W;
	int H;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80054930
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	int f;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x800549A0
void Obj_Door__Fi(int i) {
	int dx;
	int dy;
	unsigned char dok;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80054B10
void Obj_Sarc__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80054B5C
void ActivateTrapLine__Fii(int ttype, int tid) {
	int i;
	int oi;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80054C6C
void Obj_FlameTrap__Fi(int i) {
	int xp;
	int yp;
	int j;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80054F50
void Obj_Trap__Fi(int i) {
	int oti;
	unsigned char otrig;
	int sx;
	int sy;
	int dx;
	int dy;
	int x;
	int y;
	int ax;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80055294
void Obj_BCrossDamage__Fi(int i) {
	int resist;
	int damage[4];
	int pnum;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x800554DC
void ProcessObjects__Fv() {
	int i;
	int oi;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80055754
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x800558C4
void ObjSetMini__Fiii(int x, int y, int v) {
	long v2;
	long v3;
	long v4;
	int xx;
	int yy;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x800559AC
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x800559B4
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x800559BC
void DoorSet__Fiii(int oi, int dx, int dy) {
	int pn;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80055C20
void RedoPlayerVision__Fv() {
	int p;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80055CC4
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80056024
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x800563BC
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80056728
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80056A94
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80056D70
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005704C
void MonstCheckDoors__Fi(int m) {
	int i;
	int oi;
	int dpx;
	int dpy;
	int mx;
	int my;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80057520
void PostAddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
	int pn;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80057628
void PostAddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
	int pn;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80057724
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x800578DC
void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80057978
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80057AF0
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	int dpx;
	int dpy;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80057C4C
void OperateLever__Fii(int pnum, int i) {
	unsigned char mapflag;
	int j;
	int oi;
	int ot;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80057E30
void OperateBook__Fii(int pnum, int i) {
	int v1;
	int v2;
	int j;
	int oi;
	int ot;
	int itm;
	unsigned char found;
	unsigned char dowarp;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x800584FC
void OperateBookLever__Fii(int pnum, int i) {
	int x;
	int y;
	int tren;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80058994
void OperateSChambBk__Fii(int pnum, int i) {
	int textdef;
	int j;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80058BD0
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	int j;
	int mdir;
	int mtype;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80058F90
void OperateMushPatch__Fii(int pnum, int i) {
	int x;
	int y;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x800591A4
void OperateInnSignChest__Fii(int pnum, int i) {
	int x;
	int y;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005937C
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x800595CC
void OperateTrapLvr__Fi(int i) {
	int j;
	int oi;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005979C
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80059954
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	int dpx;
	int dpy;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80059AB0
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	int dpx;
	int dpy;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80059C0C
void LoadMapObjs__FPUcii(unsigned char *pMap, int startx, int starty) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char *lm;
	long mapoff;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x80059D14
void OperatePedistal__Fii(int pnum, int i) {
	int jstn;
	unknown JustOperated;
	unsigned char *setp;
	unsigned char *setp;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005A258
void TryDisarm__Fii(int pnum, int i) {
	int j;
	int oi;
	int oti;
	int trapdisper;
	unsigned char checkflag;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005A408
int ItemMiscIdIdx__Fi(int imiscid) {
	int i;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005A478
void OperateShrine__Fiii(int pnum, int i, int sType) {
	int r;
	int xx;
	int yy;
	int sc;
	int v1;
	int v2;
	int v3;
	int v4;
	unsigned long lv;
	unsigned long t;
	unsigned char done;
	int mypnum;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005C850
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005C9C8
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005CBE0
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005CCC8
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	int uniqueRnd;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005CE34
int FindValidShrine__Fi(int i) {
	int rv;
	unsigned char done;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005CF20
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005CFC8
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005D06C
unsigned char OperateFountains__Fii(int pnum, int i) {
	int ii;
	unsigned char rv;
	int rndVal;
	int statVal;
	int saveRnd;
	int status;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005D610
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	int weaponType;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005D7B8
void OperateStoryBook__Fii(int pnum, int i) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005D8AC
void OperateLazStand__Fii(int pnum, int i) {
	int x;
	int y;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005DA30
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	unsigned char senditemmsg;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005DE68
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	unsigned char opok;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005DF7C
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	unsigned char opok;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005E090
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	unsigned char opok;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005E1A4
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005E3B4
void BreakCrux__Fii(int pnum, int i) {
	int j;
	int ot;
	int oi;
	unsigned char mapflag;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005E5E8
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	unsigned char sendmsg;
	int x;
	int y;
	int oi;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005EB40
void BreakObject__Fii(int pnum, int oi) {
	int objdam;
	int mind;
	int maxd;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005ECA4
void SyncBreakObj__Fii(int pnum, int oi) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005ED20
void SyncL1Doors__Fi(int i) {
	int dx;
	int dy;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005EE38
void SyncCrux__Fi(int i) {
	int j;
	int ot;
	int oi;
	unsigned char mapflag;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005EF70
void SyncLever__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005EFF4
void SyncQSTLever__Fi(int i) {
	int tren;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005F0EC
void SyncPedistal__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005F0F4
void SyncL2Doors__Fi(int i) {
	int dx;
	int dy;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005F25C
void SyncL3Doors__Fi(int i) {
	int dx;
	int dy;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005F388
void SyncObjectAnim__Fi(int o) {
	int ai;
	int ot;
	int j;
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005F4C8
void GetObjectStr__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005F984
void AddLamp__Fiii(int x, int y, int r) {
}

// Path: C:\diabpsx\SOURCE\OBJECTS.CPP
// Addr: 0x8005F9C4
void RestoreObjectLight__Fv() {
	int i;
	int oi;
	int ox;
	int oy;
	struct MonsterStruct *Monst;
}


void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}

void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}

void PostAddArmorStand__Fi(int i) {
}

void PostAddObjLight__Fii(int i, int r) {
}

void PostAddWeaponRack__Fi(int i) {
}

void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}

void InitObjectGFX__Fv() {
	unsigned char fileload[56];
	int i;
	int t;
	char filestr[32];
}

void FreeObjectGFX__Fv() {
}

void DeleteObject__Fii(int oi, int i) {
	int ox;
	int oy;
}

void SetupObject__Fiiii(int i, int x, int y, int ot) {
	int ai;
	int j;
}

void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
	int y2;
	int v;
}

void SetBookMsg__Fii(int i, int msg) {
}

void AddObject__Fiii(int ot, int ox, int oy) {
	int oi;
}

void PostAddObject__Fiii(int ot, int ox, int oy) {
	int oi;
}

void Obj_Light__Fii(int i, int lr) {
	int ox;
	int oy;
	int dx;
	int dy;
	int p;
	int tr;
	unsigned char turnon;
}

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

void Obj_StopAnim__Fi(int i) {
}

void DrawExpl__Fiiiiiccc(int sx, int sy, int f, int ot, int scale, int rtint, int gtint, int btint) {
	int scale;
	char rtint;
	char gtint;
	char btint;
	OBJ_PFUNC Ft4;
	int PhysFrame;
	TextDat ObjDat;
	int temp;
	int bright;
	int W;
	int H;
}

void DrawObjExpl__FP12ObjectStructiii(ObjectStruct obj, int ScrX, int ScrY, int ot) {
	int f;
}

void Obj_Door__Fi(int i) {
	int dx;
	int dy;
	unsigned char dok;
}

void Obj_Sarc__Fi(int i) {
}

void ActivateTrapLine__Fii(int ttype, int tid) {
	int i;
	int oi;
}

void Obj_FlameTrap__Fi(int i) {
	int xp;
	int yp;
	int j;
}

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

void Obj_BCrossDamage__Fi(int i) {
	int resist;
	int damage[4];
	int pnum;
}

void ProcessObjects__Fv() {
	int i;
	int oi;
}

void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}

void ObjSetMini__Fiii(int x, int y, int v) {
	long v2;
	long v3;
	long v4;
	int xx;
	int yy;
}

void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}

void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}

void DoorSet__Fiii(int oi, int dx, int dy) {
	int pn;
}

void RedoPlayerVision__Fv() {
	int p;
}

void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}

void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}

void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}

void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}

void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}

void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}

void MonstCheckDoors__Fi(int m) {
	int i;
	int oi;
	int dpx;
	int dpy;
	int mx;
	int my;
}

void PostAddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
	int pn;
}

void PostAddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
	int pn;
}

void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
}

void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
}

void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
}

void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	int dpx;
	int dpy;
}

void OperateLever__Fii(int pnum, int i) {
	unsigned char mapflag;
	int j;
	int oi;
	int ot;
}

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

void OperateBookLever__Fii(int pnum, int i) {
	int x;
	int y;
	int tren;
}

void OperateSChambBk__Fii(int pnum, int i) {
	int textdef;
	int j;
}

void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	int j;
	int mdir;
	int mtype;
}

void OperateMushPatch__Fii(int pnum, int i) {
	int x;
	int y;
}

void OperateInnSignChest__Fii(int pnum, int i) {
	int x;
	int y;
}

void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}

void OperateTrapLvr__Fi(int i) {
	int j;
	int oi;
}

void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}

void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	int dpx;
	int dpy;
}

void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	int dpx;
	int dpy;
}

void LoadMapObjs__FPUcii(unsigned char* pMap, int startx, int starty) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char* lm;
	long mapoff;
}

void OperatePedistal__Fii(int pnum, int i) {
	int jstn;
	unknown JustOperated;
	unsigned char* setp;
	unsigned char* setp;
}

void TryDisarm__Fii(int pnum, int i) {
	int j;
	int oi;
	int oti;
	int trapdisper;
	unsigned char checkflag;
}

int ItemMiscIdIdx__Fi(int imiscid) {
	int i;
}

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

void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}

void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}

void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}

void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	int uniqueRnd;
}

int FindValidShrine__Fi(int i) {
	int rv;
	unsigned char done;
}

void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}

void OperateCauldron__Fiii(int pnum, int i, int sType) {
}

unsigned char OperateFountains__Fii(int pnum, int i) {
	int ii;
	unsigned char rv;
	int rndVal;
	int statVal;
	int saveRnd;
	int status;
}

void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	int weaponType;
}

void OperateStoryBook__Fii(int pnum, int i) {
}

void OperateLazStand__Fii(int pnum, int i) {
	int x;
	int y;
}

void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	unsigned char senditemmsg;
}

void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	unsigned char opok;
}

void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	unsigned char opok;
}

void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	unsigned char opok;
}

void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}

void BreakCrux__Fii(int pnum, int i) {
	int j;
	int ot;
	int oi;
	unsigned char mapflag;
}

void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	unsigned char sendmsg;
	int x;
	int y;
	int oi;
}

void BreakObject__Fii(int pnum, int oi) {
	int objdam;
	int mind;
	int maxd;
}

void SyncBreakObj__Fii(int pnum, int oi) {
}

void SyncL1Doors__Fi(int i) {
	int dx;
	int dy;
}

void SyncCrux__Fi(int i) {
	int j;
	int ot;
	int oi;
	unsigned char mapflag;
}

void SyncLever__Fi(int i) {
}

void SyncQSTLever__Fi(int i) {
	int tren;
}

void SyncPedistal__Fi(int i) {
}

void SyncL2Doors__Fi(int i) {
	int dx;
	int dy;
}

void SyncL3Doors__Fi(int i) {
	int dx;
	int dy;
}

void SyncObjectAnim__Fi(int o) {
	int ai;
	int ot;
	int j;
}

void GetObjectStr__Fi(int i) {
}

void AddLamp__Fiii(int x, int y, int r) {
}

void RestoreObjectLight__Fv() {
	int i;
	int oi;
	int ox;
	int oy;
	MonsterStruct Monst;
}

void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}

void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}

void PostAddArmorStand__Fi(int i) {
}

void PostAddObjLight__Fii(int i, int r) {
}

void PostAddWeaponRack__Fi(int i) {
}

void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}

void InitObjectGFX__Fv() {
	unsigned char fileload[56];
	int i;
	int t;
	char filestr[32];
}

void FreeObjectGFX__Fv() {
}

void DeleteObject__Fii(int oi, int i) {
	int ox;
	int oy;
}

void SetupObject__Fiiii(int i, int x, int y, int ot) {
	int ai;
	int j;
}

void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
	int y2;
	int v;
}

void SetBookMsg__Fii(int i, int msg) {
}

void AddObject__Fiii(int ot, int ox, int oy) {
	int oi;
}

void PostAddObject__Fiii(int ot, int ox, int oy) {
	int oi;
}

void Obj_Light__Fii(int i, int lr) {
	int ox;
	int oy;
	int dx;
	int dy;
	int p;
	int tr;
	unsigned char turnon;
}

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

void Obj_StopAnim__Fi(int i) {
}

void DrawExpl__Fiiiiiccc(int sx, int sy, int f, int ot, int scale, int rtint, int gtint, int btint) {
	int scale;
	char rtint;
	char gtint;
	char btint;
	OBJ_PFUNC Ft4;
	int PhysFrame;
	TextDat ObjDat;
	int temp;
	int bright;
	int W;
	int H;
}

void DrawObjExpl__FP12ObjectStructiii(ObjectStruct obj, int ScrX, int ScrY, int ot) {
	int f;
}

void Obj_Door__Fi(int i) {
	int dx;
	int dy;
	unsigned char dok;
}

void Obj_Sarc__Fi(int i) {
}

void ActivateTrapLine__Fii(int ttype, int tid) {
	int i;
	int oi;
}

void Obj_FlameTrap__Fi(int i) {
	int xp;
	int yp;
	int j;
}

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

void Obj_BCrossDamage__Fi(int i) {
	int resist;
	int damage[4];
	int pnum;
}

void ProcessObjects__Fv() {
	int i;
	int oi;
}

void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}

void ObjSetMini__Fiii(int x, int y, int v) {
	long v2;
	long v3;
	long v4;
	int xx;
	int yy;
}

void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}

void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}

void DoorSet__Fiii(int oi, int dx, int dy) {
	int pn;
}

void RedoPlayerVision__Fv() {
	int p;
}

void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}

void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}

void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}

void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}

void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}

void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}

void MonstCheckDoors__Fi(int m) {
	int i;
	int oi;
	int dpx;
	int dpy;
	int mx;
	int my;
}

void PostAddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
	int pn;
}

void PostAddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
	int pn;
}

void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
}

void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
}

void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
}

void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	int dpx;
	int dpy;
}

void OperateLever__Fii(int pnum, int i) {
	unsigned char mapflag;
	int j;
	int oi;
	int ot;
}

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

void OperateBookLever__Fii(int pnum, int i) {
	int x;
	int y;
	int tren;
}

void OperateSChambBk__Fii(int pnum, int i) {
	int textdef;
	int j;
}

void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	int j;
	int mdir;
	int mtype;
}

void OperateMushPatch__Fii(int pnum, int i) {
	int x;
	int y;
}

void OperateInnSignChest__Fii(int pnum, int i) {
	int x;
	int y;
}

void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}

void OperateTrapLvr__Fi(int i) {
	int j;
	int oi;
}

void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}

void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	int dpx;
	int dpy;
}

void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	int dpx;
	int dpy;
}

void LoadMapObjs__FPUcii(unsigned char* pMap, int startx, int starty) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char* lm;
	long mapoff;
}

void OperatePedistal__Fii(int pnum, int i) {
	int jstn;
	unknown JustOperated;
	unsigned char* setp;
	unsigned char* setp;
}

void TryDisarm__Fii(int pnum, int i) {
	int j;
	int oi;
	int oti;
	int trapdisper;
	unsigned char checkflag;
}

int ItemMiscIdIdx__Fi(int imiscid) {
	int i;
}

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

void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}

void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}

void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}

void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	int uniqueRnd;
}

int FindValidShrine__Fi(int i) {
	int rv;
	unsigned char done;
}

void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}

void OperateCauldron__Fiii(int pnum, int i, int sType) {
}

unsigned char OperateFountains__Fii(int pnum, int i) {
	int ii;
	unsigned char rv;
	int rndVal;
	int statVal;
	int saveRnd;
	int status;
}

void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	int weaponType;
}

void OperateStoryBook__Fii(int pnum, int i) {
}

void OperateLazStand__Fii(int pnum, int i) {
	int x;
	int y;
}

void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	unsigned char senditemmsg;
}

void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	unsigned char opok;
}

void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	unsigned char opok;
}

void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	unsigned char opok;
}

void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}

void BreakCrux__Fii(int pnum, int i) {
	int j;
	int ot;
	int oi;
	unsigned char mapflag;
}

void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	unsigned char sendmsg;
	int x;
	int y;
	int oi;
}

void BreakObject__Fii(int pnum, int oi) {
	int objdam;
	int mind;
	int maxd;
}

void SyncBreakObj__Fii(int pnum, int oi) {
}

void SyncL1Doors__Fi(int i) {
	int dx;
	int dy;
}

void SyncCrux__Fi(int i) {
	int j;
	int ot;
	int oi;
	unsigned char mapflag;
}

void SyncLever__Fi(int i) {
}

void SyncQSTLever__Fi(int i) {
	int tren;
}

void SyncPedistal__Fi(int i) {
}

void SyncL2Doors__Fi(int i) {
	int dx;
	int dy;
}

void SyncL3Doors__Fi(int i) {
	int dx;
	int dy;
}

void SyncObjectAnim__Fi(int o) {
	int ai;
	int ot;
	int j;
}

void GetObjectStr__Fi(int i) {
}

void AddLamp__Fiii(int x, int y, int r) {
}

void RestoreObjectLight__Fv() {
	int i;
	int oi;
	int ox;
	int oy;
	MonsterStruct Monst;
}


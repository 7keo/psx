// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004EA9C
void delta_init__Fv() {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004EAF4
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	struct DMonsterStr *p;
	struct DLevel *Dl;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004EB90
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	struct DMonsterStr *p;
	struct DLevel *Dl;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004EC0C
void delta_leave_sync__FUc(unsigned char bLevel) {
	struct DLevel *Dl;
	int i;
	int ii;
	struct DMonsterStr *pD;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004EF38
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	struct DLevel *Dl;
	struct DObjectStr *p;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004EF98
unsigned char delta_get_item__FPC9TCmdGItemUc(struct TCmdGItem *pI, unsigned char bLevel) {
	struct DLevel *Dl;
	struct TCmdPItem *pD;
	int i;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004F164
void delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI, int x, int y, unsigned char bLevel) {
	struct DLevel *Dl;
	struct TCmdPItem *pD;
	int i;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004F2F0
unsigned char delta_portal_inited__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004F314
unsigned char delta_quest_inited__Fi(int i) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004F338
void DeltaAddItem__Fi(int ii) {
	struct TCmdPItem *pD;
	struct TCmdPItem *OpD;
	struct DLevel *Dl;
	int i;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004F560
int DeltaExportData__FPc(char *Dst) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004F58C
int DeltaImportData__FPc(char *Src) {
	int osize;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004F5D4
void DeltaSaveLevel__Fv() {
	int i;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004F6D0
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	struct TCmd cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004F6F8
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	long hp;
	unsigned char cl;
	struct TCmdGolem cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004F744
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	struct TCmdLoc cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004F774
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	unsigned short wParam1;
	struct TCmdLocParam1 cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004F7AC
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	unsigned short wParam1;
	unsigned short wParam2;
	struct TCmdLocParam2 cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004F7EC
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	unsigned short wParam1;
	unsigned short wParam2;
	unsigned short wParam3;
	struct TCmdLocParam3 cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004F834
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	struct TCmdParam1 cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004F860
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	struct TCmdParam2 cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004F890
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	unsigned short wParam3;
	struct TCmdParam3 cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004F8C8
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	struct TCmdQuest cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004F93C
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	unsigned char ii;
	struct TCmdGItem cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004FA84
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	struct TCmdGItem *p;
	struct TCmdGItem cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004FB08
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	struct TCmdGItem cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004FB68
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	struct TCmdGItem cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004FBD8
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	struct TCmdPItem cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004FCF4
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	struct TCmdChItem cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004FD98
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	struct TCmdDelItem cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004FDC8
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	struct TCmdPItem cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004FEF0
unsigned char i_own_level__Fi(int nReqLevel) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004FEF8
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	struct TCmdDamage cmd;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004FF2C
void delta_close_portal__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004FF6C
void check_update_plr__Fi(int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004FF74
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8004FFF4
void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80050024
void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80050054
void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80050084
void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x800500B4
void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80050128
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x800501B0
void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	int ii;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x800502F0
void On_GETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	struct TCmdGItem *p;
	int nIndex;
	int hitem;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x800504C4
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8005054C
void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80050680
void On_AGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	struct TCmdGItem *p;
	int hitem;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8005084C
void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80050898
void On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	int ii;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80050978
void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	int ii;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80050A7C
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	struct TCmdPItem *p;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80050B98
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80050C24
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80050D0C
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80050DE4
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80050EC0
void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	struct TCmdLocParam1 *p;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80050FA0
void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	struct TCmdLocParam1 *p;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051080
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x800510CC
void On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	struct TCmdParam1 *p;
	int dx;
	int dy;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051208
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x800512D0
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051390
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051454
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051518
void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x800515D4
void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8005160C
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051634
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x800516BC
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x800516EC
void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051800
void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x800518B4
void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051920
void On_AWAKEGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	unsigned char addok;
	int i;
	int mi;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051A40
void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051B30
void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051B78
void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	struct PlayerStruct *player;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051C8C
void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051D08
void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051D84
void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051E00
void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051E7C
void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051EF4
void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051EFC
void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051F04
void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051F0C
void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80051F64
void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8005216C
void On_ACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x800521B0
void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80052210
void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80052248
void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80052288
void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x800522C8
void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80052308
void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80052348
void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80052390
void On_ENDSHIELD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	int i;
	int mi;
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80052468
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80052888
struct DLevel* GetDLevel__Fib(int LevNum, unknown SetLevel) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x800528D0
void ReleaseDLevel__FP6DLevel(struct DLevel *Dl) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x800528FC
void MSG_ClearOutCompMap__Fv() {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80052924
void _GLOBAL_.D.deltaload() {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x8005294C
void _GLOBAL_.I.deltaload() {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x800529AC
struct CrunchComp* __10CrunchComp(struct CrunchComp *this) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x800529E4
struct PakComp* __7PakComp(struct PakComp *this) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80052A1C
struct NoComp* __6NoComp(struct NoComp *this) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80052AA4
void DoDecomp__C10CrunchCompPUcPCUcii(struct CrunchComp *this, unsigned char *Dest, unsigned char *Src, int DstLen, int SrcLen) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80052ACC
int DoComp__C10CrunchCompPUcPCUci(struct CrunchComp *this, unsigned char *Dest, unsigned char *Src, int SrcLen) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80052AF4
void DoDecomp__C7PakCompPUcPCUcii(struct PakComp *this, unsigned char *Dest, unsigned char *Src, int DstLen, int SrcLen) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80052B18
int DoComp__C7PakCompPUcPCUci(struct PakComp *this, unsigned char *Dest, unsigned char *Src, int SrcLen) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80052B40
void DoDecomp__C6NoCompPUcPCUcii(struct NoComp *this, unsigned char *Dest, unsigned char *Src, int DstLen, int SrcLen) {
}

// Path: C:\diabpsx\SOURCE\MSG.CPP
// Addr: 0x80052B6C
int DoComp__C6NoCompPUcPCUci(struct NoComp *this, unsigned char *Dest, unsigned char *Src, int SrcLen) {
}


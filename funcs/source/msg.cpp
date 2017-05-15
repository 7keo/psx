void delta_init__Fv() {
}

void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	DMonsterStr p;
	DLevel Dl;
}

void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	DMonsterStr p;
	DLevel Dl;
}

void delta_leave_sync__FUc(unsigned char bLevel) {
	DLevel Dl;
	int i;
	int ii;
	DMonsterStr pD;
}

void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	DLevel Dl;
	DObjectStr p;
}

unsigned char delta_get_item__FPC9TCmdGItemUc(TCmdGItem pI, unsigned char bLevel) {
	DLevel Dl;
	TCmdPItem pD;
	int i;
}

void delta_put_item__FPC9TCmdPItemiiUc(TCmdPItem pI, int x, int y, unsigned char bLevel) {
	DLevel Dl;
	TCmdPItem pD;
	int i;
}

unsigned char delta_portal_inited__Fi(int i) {
}

unsigned char delta_quest_inited__Fi(int i) {
}

void DeltaAddItem__Fi(int ii) {
	TCmdPItem pD;
	TCmdPItem OpD;
	DLevel Dl;
	int i;
}

int DeltaExportData__FPc(char* Dst) {
}

int DeltaImportData__FPc(char* Src) {
	int osize;
}

void DeltaSaveLevel__Fv() {
	int i;
}

void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	TCmd cmd;
}

void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	long hp;
	unsigned char cl;
	TCmdGolem cmd;
}

void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	TCmdLoc cmd;
}

void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	unsigned short wParam1;
	TCmdLocParam1 cmd;
}

void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	unsigned short wParam1;
	unsigned short wParam2;
	TCmdLocParam2 cmd;
}

void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	unsigned short wParam1;
	unsigned short wParam2;
	unsigned short wParam3;
	TCmdLocParam3 cmd;
}

void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	TCmdParam1 cmd;
}

void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	TCmdParam2 cmd;
}

void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	unsigned short wParam3;
	TCmdParam3 cmd;
}

void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	TCmdQuest cmd;
}

void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	unsigned char ii;
	TCmdGItem cmd;
}

void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, TCmdGItem p) {
	TCmdGItem p;
	TCmdGItem cmd;
}

unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, TCmdGItem p) {
	TCmdGItem cmd;
}

void NetSendCmdExtra__FPC9TCmdGItem(TCmdGItem p) {
	TCmdGItem cmd;
}

void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	TCmdPItem cmd;
}

void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	TCmdChItem cmd;
}

void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	TCmdDelItem cmd;
}

void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	TCmdPItem cmd;
}

unsigned char i_own_level__Fi(int nReqLevel) {
}

void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	TCmdDamage cmd;
}

void delta_close_portal__Fi(int pnum) {
}

void check_update_plr__Fi(int pnum) {
}

void On_WALKXY__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_ADDSTR__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_ADDMAG__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_ADDDEX__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_ADDVIT__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_SBSPELL__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_GOTOGETITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_REQUESTGITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
	int ii;
}

void On_GETITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
	TCmdGItem p;
	int nIndex;
	int hitem;
}

void On_GOTOAGETITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_REQUESTAGITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_AGETITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
	TCmdGItem p;
	int hitem;
}

void On_ITEMEXTRA__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_PUTITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
	int ii;
}

void On_SYNCPUTITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
	int ii;
}

void On_RESPAWNITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
	TCmdPItem p;
}

void On_SATTACKXY__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_SPELLXYD__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_SPELLXY__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_TSPELLXY__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_OPOBJXY__FPC4TCmdi(TCmd pCmd, int pnum) {
	TCmdLocParam1 p;
}

void On_DISARMXY__FPC4TCmdi(TCmd pCmd, int pnum) {
	TCmdLocParam1 p;
}

void On_OPOBJT__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_ATTACKID__FPC4TCmdi(TCmd pCmd, int pnum) {
	TCmdParam1 p;
	int dx;
	int dy;
}

void On_SPELLID__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_SPELLPID__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_TSPELLID__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_TSPELLPID__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_KNOCKBACK__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_RESURRECT__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_HEALOTHER__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_TALKXY__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_NEWLVL__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_WARP__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_MONSTDEATH__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_KILLGOLEM__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_AWAKEGOLEM__FPC4TCmdi(TCmd pCmd, int pnum) {
	unsigned char addok;
	int i;
	int mi;
}

void On_MONSTDAMAGE__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_PLRDEAD__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_PLRDAMAGE__FPC4TCmdi(TCmd pCmd, int pnum) {
	PlayerStruct player;
}

void On_OPENDOOR__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_CLOSEDOOR__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_OPERATEOBJ__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_PLROPOBJ__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_BREAKOBJ__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_CHANGEPLRITEMS__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_DELPLRITEMS__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_PLRLEVEL__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_DROPITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_PLAYER_JOINLEVEL__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_ACTIVATEPORTAL__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_DEACTIVATEPORTAL__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_RETOWN__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_SETSTR__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_SETDEX__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_SETMAG__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_SETVIT__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_SYNCQUEST__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_ENDSHIELD__FPC4TCmdi(TCmd pCmd, int pnum) {
	int i;
	int mi;
}

unsigned long ParseCmd__FiPC4TCmd(int pnum, TCmd pCmd) {
}

DLevel GetDLevel__Fib(int LevNum, unknown SetLevel) {
}

void ReleaseDLevel__FP6DLevel(DLevel Dl) {
}

void MSG_ClearOutCompMap__Fv() {
}

void _GLOBAL_.D.deltaload() {
}

void _GLOBAL_.I.deltaload() {
}

CrunchComp __10CrunchComp(CrunchComp this) {
}

PakComp __7PakComp(PakComp this) {
}

NoComp __6NoComp(NoComp this) {
}

void DoDecomp__C10CrunchCompPUcPCUcii(CrunchComp this, unsigned char* Dest, unsigned char* Src, int DstLen, int SrcLen) {
}

int DoComp__C10CrunchCompPUcPCUci(CrunchComp this, unsigned char* Dest, unsigned char* Src, int SrcLen) {
}

void DoDecomp__C7PakCompPUcPCUcii(PakComp this, unsigned char* Dest, unsigned char* Src, int DstLen, int SrcLen) {
}

int DoComp__C7PakCompPUcPCUci(PakComp this, unsigned char* Dest, unsigned char* Src, int SrcLen) {
}

void DoDecomp__C6NoCompPUcPCUcii(NoComp this, unsigned char* Dest, unsigned char* Src, int DstLen, int SrcLen) {
}

int DoComp__C6NoCompPUcPCUci(NoComp this, unsigned char* Dest, unsigned char* Src, int SrcLen) {
}

void delta_init__Fv() {
}

void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	DMonsterStr p;
	DLevel Dl;
}

void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	DMonsterStr p;
	DLevel Dl;
}

void delta_leave_sync__FUc(unsigned char bLevel) {
	DLevel Dl;
	int i;
	int ii;
	DMonsterStr pD;
}

void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	DLevel Dl;
	DObjectStr p;
}

unsigned char delta_get_item__FPC9TCmdGItemUc(TCmdGItem pI, unsigned char bLevel) {
	DLevel Dl;
	TCmdPItem pD;
	int i;
}

void delta_put_item__FPC9TCmdPItemiiUc(TCmdPItem pI, int x, int y, unsigned char bLevel) {
	DLevel Dl;
	TCmdPItem pD;
	int i;
}

unsigned char delta_portal_inited__Fi(int i) {
}

unsigned char delta_quest_inited__Fi(int i) {
}

void DeltaAddItem__Fi(int ii) {
	TCmdPItem pD;
	TCmdPItem OpD;
	DLevel Dl;
	int i;
}

int DeltaExportData__FPc(char* Dst) {
}

int DeltaImportData__FPc(char* Src) {
	int osize;
}

void DeltaSaveLevel__Fv() {
	int i;
}

void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	TCmd cmd;
}

void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	long hp;
	unsigned char cl;
	TCmdGolem cmd;
}

void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	TCmdLoc cmd;
}

void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	unsigned short wParam1;
	TCmdLocParam1 cmd;
}

void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	unsigned short wParam1;
	unsigned short wParam2;
	TCmdLocParam2 cmd;
}

void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	unsigned short wParam1;
	unsigned short wParam2;
	unsigned short wParam3;
	TCmdLocParam3 cmd;
}

void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	TCmdParam1 cmd;
}

void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	TCmdParam2 cmd;
}

void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	unsigned short wParam3;
	TCmdParam3 cmd;
}

void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	TCmdQuest cmd;
}

void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	unsigned char ii;
	TCmdGItem cmd;
}

void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, TCmdGItem p) {
	TCmdGItem p;
	TCmdGItem cmd;
}

unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, TCmdGItem p) {
	TCmdGItem cmd;
}

void NetSendCmdExtra__FPC9TCmdGItem(TCmdGItem p) {
	TCmdGItem cmd;
}

void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	TCmdPItem cmd;
}

void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	TCmdChItem cmd;
}

void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	TCmdDelItem cmd;
}

void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	TCmdPItem cmd;
}

unsigned char i_own_level__Fi(int nReqLevel) {
}

void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	TCmdDamage cmd;
}

void delta_close_portal__Fi(int pnum) {
}

void check_update_plr__Fi(int pnum) {
}

void On_WALKXY__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_ADDSTR__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_ADDMAG__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_ADDDEX__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_ADDVIT__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_SBSPELL__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_GOTOGETITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_REQUESTGITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
	int ii;
}

void On_GETITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
	TCmdGItem p;
	int nIndex;
	int hitem;
}

void On_GOTOAGETITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_REQUESTAGITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_AGETITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
	TCmdGItem p;
	int hitem;
}

void On_ITEMEXTRA__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_PUTITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
	int ii;
}

void On_SYNCPUTITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
	int ii;
}

void On_RESPAWNITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
	TCmdPItem p;
}

void On_SATTACKXY__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_SPELLXYD__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_SPELLXY__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_TSPELLXY__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_OPOBJXY__FPC4TCmdi(TCmd pCmd, int pnum) {
	TCmdLocParam1 p;
}

void On_DISARMXY__FPC4TCmdi(TCmd pCmd, int pnum) {
	TCmdLocParam1 p;
}

void On_OPOBJT__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_ATTACKID__FPC4TCmdi(TCmd pCmd, int pnum) {
	TCmdParam1 p;
	int dx;
	int dy;
}

void On_SPELLID__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_SPELLPID__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_TSPELLID__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_TSPELLPID__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_KNOCKBACK__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_RESURRECT__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_HEALOTHER__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_TALKXY__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_NEWLVL__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_WARP__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_MONSTDEATH__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_KILLGOLEM__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_AWAKEGOLEM__FPC4TCmdi(TCmd pCmd, int pnum) {
	unsigned char addok;
	int i;
	int mi;
}

void On_MONSTDAMAGE__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_PLRDEAD__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_PLRDAMAGE__FPC4TCmdi(TCmd pCmd, int pnum) {
	PlayerStruct player;
}

void On_OPENDOOR__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_CLOSEDOOR__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_OPERATEOBJ__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_PLROPOBJ__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_BREAKOBJ__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_CHANGEPLRITEMS__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_DELPLRITEMS__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_PLRLEVEL__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_DROPITEM__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_PLAYER_JOINLEVEL__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_ACTIVATEPORTAL__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_DEACTIVATEPORTAL__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_RETOWN__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_SETSTR__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_SETDEX__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_SETMAG__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_SETVIT__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_SYNCQUEST__FPC4TCmdi(TCmd pCmd, int pnum) {
}

void On_ENDSHIELD__FPC4TCmdi(TCmd pCmd, int pnum) {
	int i;
	int mi;
}

unsigned long ParseCmd__FiPC4TCmd(int pnum, TCmd pCmd) {
}

DLevel GetDLevel__Fib(int LevNum, unknown SetLevel) {
}

void ReleaseDLevel__FP6DLevel(DLevel Dl) {
}

void MSG_ClearOutCompMap__Fv() {
}

void _GLOBAL_.D.deltaload() {
}

void _GLOBAL_.I.deltaload() {
}

CrunchComp __10CrunchComp(CrunchComp this) {
}

PakComp __7PakComp(PakComp this) {
}

NoComp __6NoComp(NoComp this) {
}

void DoDecomp__C10CrunchCompPUcPCUcii(CrunchComp this, unsigned char* Dest, unsigned char* Src, int DstLen, int SrcLen) {
}

int DoComp__C10CrunchCompPUcPCUci(CrunchComp this, unsigned char* Dest, unsigned char* Src, int SrcLen) {
}

void DoDecomp__C7PakCompPUcPCUcii(PakComp this, unsigned char* Dest, unsigned char* Src, int DstLen, int SrcLen) {
}

int DoComp__C7PakCompPUcPCUci(PakComp this, unsigned char* Dest, unsigned char* Src, int SrcLen) {
}

void DoDecomp__C6NoCompPUcPCUcii(NoComp this, unsigned char* Dest, unsigned char* Src, int DstLen, int SrcLen) {
}

int DoComp__C6NoCompPUcPCUci(NoComp this, unsigned char* Dest, unsigned char* Src, int SrcLen) {
}


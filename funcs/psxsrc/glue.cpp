// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009BA0C
void GLUE_SetMonsterList__Fi(int List) {
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009BA18
int GLUE_GetMonsterList__Fv() {
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009BA24
void GLUE_SuspendGame__Fv() {
	struct TASK *T;
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009BA78
void GLUE_ResumeGame__Fv() {
	struct TASK *T;
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009BACC
void GLUE_PreTown__Fv() {
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009BAFC
void GLUE_PreDun__Fv() {
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009BB04
unknown GLUE_Finished__Fv() {
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009BB10
void GLUE_SetFinished__Fb(unknown NewFinished) {
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009BB1C
void GLUE_StartBg__Fibi(int TextId, unknown IsTown, int Level) {
	struct DEF_ARGS *Args;
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009BB84
unknown GLUE_SetShowGameScreenFlag__Fb(unknown NewFlag) {
	unknown OldFlag;
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009BB94
unknown GLUE_GetShowGameScreenFlag__Fv() {
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009BBA0
unknown GLUE_SetHomingScrollFlag__Fb(unknown NewFlag) {
	unknown OldFlag;
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009BBB0
unknown GLUE_SetShowPanelFlag__Fb(unknown NewFlag) {
	unknown OldFlag;
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009BBC0
unknown GLUE_HasGameStarted__Fv() {
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009BBCC
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009BCA4
void GLUE_DoQuake__Fii(int Time, int Amount) {
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009BCB4
void BgTask__FP4TASK(struct TASK *T) {
	struct DEF_ARGS *Args;
	unknown IsTown;
	int TextId;
	int Level;
	int ObjId;
	int List;
	struct PlayerStruct *plr1;
	struct PlayerStruct *plr2;
	struct CBlocks MyBlocks;
	struct CPlayer MyPlayer;
	struct CPlayer MyPlayer2;
	struct GPanel P1Panel;
	struct GPanel P2Panel;
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009C160
struct PInf* FindPlayerChar__FPc(char *Id) {
	int f;
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009C1F8
struct PInf* FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	char TxBuff[20];
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009C254
struct PInf* FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009C284
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, unknown InTown) {
	struct PInf *Inf;
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009C350
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructbT2(struct CPlayer *Player, struct PlayerStruct *Plr, unknown InTown, unknown Blocking) {
	int Id;
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009C400
struct MonstList* GLUE_GetCurrentList__Fi(int Level) {
	struct MonstLevel *MLev;
	int List;
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009C4AC
void GLUE_StartGameExit__Fv() {
}

// Path: C:\diabpsx\PSXSRC\GLUE.CPP
// Addr: 0x8009C518
void GLUE_Init__Fv() {
}


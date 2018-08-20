// C:\diabpsx\PSXSRC\GLUE.CPP

#include "types.h"

// address: 0x8009BA0C
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x8009BA18
int GLUE_GetMonsterList__Fv() {
}


// address: 0x8009BA24
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8009BA78
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8009BACC
void GLUE_PreTown__Fv() {
}


// address: 0x8009BAFC
void GLUE_PreDun__Fv() {
}


// address: 0x8009BB04
bool GLUE_Finished__Fv() {
}


// address: 0x8009BB10
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x8009BB1C
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x8009BB84
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8009BB94
bool GLUE_GetShowGameScreenFlag__Fv() {
}


// address: 0x8009BBA0
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8009BBB0
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8009BBC0
bool GLUE_HasGameStarted__Fv() {
}


// address: 0x8009BBCC
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x8009BCA4
void GLUE_DoQuake__Fii(int Time, int Amount) {
}


// address: 0x8009BCB4
void BgTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
	// register: 18
	register bool IsTown;
	// register: 20
	register int TextId;
	// register: 16
	register int Level;
	// register: 17
	register int ObjId;
	// register: 19
	register int List;
	// register: 21
	// size: 0x19E8
	register struct PlayerStruct *plr1;
	// register: 22
	// size: 0x19E8
	register struct PlayerStruct *plr2;
	// address: 0xFFFFFD78
	// size: 0x108
	auto struct CBlocks MyBlocks;
	// address: 0xFFFFFE80
	// size: 0x90
	auto struct CPlayer MyPlayer;
	// address: 0xFFFFFF10
	// size: 0x90
	auto struct CPlayer MyPlayer2;
	// address: 0xFFFFFFA0
	// size: 0x1C
	auto struct GPanel P1Panel;
	// address: 0xFFFFFFC0
	// size: 0x1C
	auto struct GPanel P2Panel;
}


// address: 0x8009C160
// size: 0xC
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x8009C1F8
// size: 0xC
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x8009C254
// size: 0xC
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x8009C284
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	{
		{
			// register: 3
			// size: 0xC
			register struct PInf *Inf;
		}
	}
}


// address: 0x8009C350
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructbT2(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown, bool Blocking) {
	// register: 16
	register int Id;
}


// address: 0x8009C400
// size: 0x10
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x8009C4AC
void GLUE_StartGameExit__Fv() {
	{
	}
}


// address: 0x8009C518
void GLUE_Init__Fv() {
}



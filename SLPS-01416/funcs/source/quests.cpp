// C:\diabpsx\SOURCE\QUESTS.CPP

#include "types.h"

// address: 0x800674B4
void CheckRPortalOK__FPiT0(int *rx, int *ry) {
	// register: 6
	register int nx;
	// register: 3
	register int ny;
}


// address: 0x800674F4
void CheckQuests__Fv() {
	// register: 20
	register int i;
	// address: 0xFFFFFFD8
	auto int rportx;
	// address: 0xFFFFFFDC
	auto int rporty;
	// register: 21
	register int omp;
	{
		{
			{
				// register: 17
				register int pl;
				{
					// register: 4
					// size: 0x19E8
					register struct PlayerStruct *player;
				}
			}
		}
	}
}


// address: 0x800679CC
unsigned char ForceQuests__Fv() {
	{
		// register: 6
		register int i;
		{
			// register: 16
			register int ql;
			// register: 18
			register int qx;
			// register: 17
			register int qy;
			{
				// register: 4
				register int j;
			}
		}
	}
}


// address: 0x80067B70
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x80067C04
void CheckQuestKill__FiUc(int m, unsigned char sendmsg) {
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											// register: 16
											register int i;
											// register: 17
											register int j;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800681CC
void SetReturnLvlPos__Fv() {
}


// address: 0x800682DC
void GetReturnLvlPos__Fv() {
}


// address: 0x80068330
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x8006881C
void PrintQLString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
	// register: 10
	register unsigned char r;
	// register: 9
	register unsigned char g;
	// register: 8
	register unsigned char b;
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80068A70
void DrawQuestLog__Fv() {
	// register: 16
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
	// register: 18
	register int totlines;
}


// address: 0x80068C68
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80068D40
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80068E74
void QuestlogUp__Fv() {
}


// address: 0x80068F0C
void QuestlogDown__Fv() {
}


// address: 0x80068FC0
void RemoveQLog__Fv() {
}


// address: 0x80069078
void QuestlogEnter__Fv() {
	// register: 16
	register int q;
}


// address: 0x80069144
void QuestlogESC__Fv() {
}


// address: 0x8006916C
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x800691EC
void _GLOBAL__D_questlog() {
}


// address: 0x80069214
void _GLOBAL__I_questlog() {
}



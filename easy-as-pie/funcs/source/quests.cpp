// C:\diabpsx\SOURCE\QUESTS.CPP

#include "types.h"

// address: 0x800610DC
void TSK_Lava2Water__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFFB0
	// size: 0x20
	auto unsigned short LAVAPAL[16];
	// address: 0xFFFFFFD0
	// size: 0x20
	auto unsigned short WATERPAL[16];
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT ClutR;
	// register: 16
	register int clut;
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
	// register: 3
	// size: 0x8
	register struct PAL *Pal;
	// register: 2
	register unsigned short cx;
	// register: 3
	register unsigned short cy;
	// register: 16
	register bool ch;
	{
		{
			{
				// register: 4
				register int i;
				{
					{
						// register: 10
						register int i;
						{
							// register: 11
							register unsigned short col1;
							// register: 3
							register unsigned short col2;
							// register: 14
							register unsigned char sb;
							// register: 13
							register unsigned char sg;
							// register: 8
							register unsigned char dr;
							// register: 7
							register unsigned char dg;
							// register: 5
							register unsigned char db;
						}
					}
				}
			}
		}
	}
}


// address: 0x8006132C
void CheckQuests__Fv() {
	// register: 18
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
}


// address: 0x800617E8
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


// address: 0x8006198C
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x80061A20
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
											// register: 4
											register int i;
											// register: 7
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


// address: 0x80062000
void SetReturnLvlPos__Fv() {
}


// address: 0x80062110
void GetReturnLvlPos__Fv() {
}


// address: 0x80062164
void ResyncMPQuests__Fv() {
}


// address: 0x800622A0
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x80062800
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


// address: 0x80062A2C
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80062BE0
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80062C60
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80062D70
void QuestlogUp__Fv() {
}


// address: 0x80062DC8
void QuestlogDown__Fv() {
}


// address: 0x80062E30
void RemoveQLog__Fv() {
}


// address: 0x80062E9C
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x80062F38
void QuestlogESC__Fv() {
}


// address: 0x80062F60
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x80062FE0
void _GLOBAL__D_questlog() {
}


// address: 0x80063008
void _GLOBAL__I_questlog() {
}



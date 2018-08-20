// C:\diabpsx\PSXSRC\PSXHELP.CPP

#include "types.h"

// address: 0x800AE38C
void RemoveHelp__Fv() {
}


// address: 0x800AE3A0
void HelpPad__Fv() {
	// register: 16
	// size: 0xEC
	register struct CPad *Pad;
}


// address: 0x800AE648
int GetControlKey__FiPb(int str, bool *iscombo) {
	// register: 6
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 7
		register int i;
	}
}


// address: 0x800AE6F0
void InitHelp__Fv() {
}


// address: 0x800AE73C
int DrawHelpLine__FiiPccccP10HelpStruct(int x, int y, char *txt, char R, int G, int B, struct HelpStruct *hp) {
	// register: 2
	register int eln;
	{
		{
			// register: 16
			register int key;
			// address: 0xFFFFFFD8
			auto bool combo;
			{
				{
					// register: 2
					register int nkey;
				}
			}
		}
	}
}


// address: 0x800AE950
void DisplayHelp__Fv() {
	// register: 23
	// size: 0xC
	register struct HelpStruct *hp;
	// register: 22
	register int y;
	{
		// address: 0xFFFFFFB8
		auto int i;
		{
			// register: 16
			register char *txt;
			{
				{
					{
						{
							// register: 30
							register int nlen;
						}
					}
				}
			}
		}
	}
}


// address: 0x800AECD0
void DrawHelp__Fv() {
	// address: 0x80121C78
	// size: 0x10
	static struct Dialog txtBack;
	// register: 16
	register int otpos;
	// register: 19
	register int oldDot;
	// register: 20
	register int OldPrintOT;
}


// address: 0x800AEF48
void _GLOBAL__D_DrawHelp__Fv() {
}


// address: 0x800AEF88
void _GLOBAL__I_DrawHelp__Fv() {
}



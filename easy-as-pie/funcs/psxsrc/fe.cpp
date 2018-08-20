// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x801376AC
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x801376D4
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80137748
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x801377C4
void FeDrawBuffer__Fv() {
	// address: 0xFFFFFFA8
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT ARect;
	// register: 16
	register int X;
	// register: 17
	register int Y;
	// register: 18
	// size: 0x4
	register enum TXT_JUST Just;
	// register: 18
	register int SelX;
	// register: 20
	register int SelY;
	// address: 0xFFFFFFC8
	// size: 0x2
	auto char Text[2];
	{
		{
			{
				{
					{
						{
							{
								// register: 21
								register int Loop;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80137C9C
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80137D1C
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80137DA0
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80137E88
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80137F6C
int FeGetCursor__Fv() {
}


// address: 0x80137F80
void FeSelect__Fv() {
}


// address: 0x80137FC4
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x801381D0
void InitDummyMenu__Fv() {
}


// address: 0x801381D8
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80138298
void FeInitMainMenu__Fv() {
}


// address: 0x801382F4
void FeInitNewGameMenu__Fv() {
}


// address: 0x80138340
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80138434
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x801384A4
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80138514
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x8013855C
void FeDrawChrClass__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFC8
	// size: 0x4
	auto char TempStr[4];
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x801389F8
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80138A48
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80138A98
void FeNewNameMenuCtrl__Fv() {
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
											// address: 0xFFFFFFD8
											// size: 0x2
											auto char asd[2];
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


// address: 0x80138FDC
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x801390AC
void FeEnterGame__Fv() {
}


// address: 0x801390D4
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8013913C
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x801391A8
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80139214
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80139258
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80139310
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80139358
void FeInitBook1Menu__Fv() {
}


// address: 0x801393A4
void FeInitBook2Menu__Fv() {
}


// address: 0x801393F0
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x801395EC
void PlayDemo__Fv() {
}


// address: 0x80139600
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x8013969C
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen FeScreen;
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
											{
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
}


// address: 0x80139A58
void McMainCharKeyCtrl__Fv() {
	// register: 19
	register int j;
	// register: 22
	register int Spacing;
	// register: 3
	register int fileno;
	// register: 18
	register int sr;
	// register: 17
	register int sg;
	// register: 16
	register int sb;
}



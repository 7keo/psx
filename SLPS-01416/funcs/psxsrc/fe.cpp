// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80139C24
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80139C50
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80139CD4
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80139D50
void FeAddNameTable__FPUci(unsigned char *Table, int Count) {
	{
		// register: 21
		register int YLoop;
		{
			{
				// register: 3
				register int XLoop;
			}
		}
	}
}


// address: 0x80139E78
void FeDrawBuffer__Fv() {
	// address: 0xFFFFFF98
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT ARect;
	// register: 17
	register int X;
	// register: 19
	register int Y;
	// register: 20
	// size: 0x4
	register enum TXT_JUST Just;
	// address: 0xFFFFFFC0
	// size: 0x70
	auto struct TextDat *PanelGfx;
	// register: 4
	register int SelX;
	// register: 18
	register int SelY;
	// address: 0xFFFFFFB8
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
								{
									{
										{
											{
												{
													{
														{
															// register: 2
															// size: 0x28
															register struct POLY_FT4 *Ft4;
															{
																{
																	{
																		// register: 18
																		register int Loop;
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
					}
				}
			}
		}
	}
}


// address: 0x8013A4A4
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8013A524
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8013A66C
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013A754
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013A83C
int FeGetCursor__Fv() {
}


// address: 0x8013A850
void FeSelect__Fv() {
}


// address: 0x8013A8A0
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
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


// address: 0x8013AA68
void InitDummyMenu__Fv() {
}


// address: 0x8013AA70
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x8013ABA4
void FeInitMainMenu__Fv() {
}


// address: 0x8013AC20
void FeInitNewGameMenu__Fv() {
}


// address: 0x8013ACB0
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x8013AE64
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x8013AEE8
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x8013AF6C
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x8013AFB4
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


// address: 0x8013B43C
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x8013B498
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x8013B4EC
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
	}
}


// address: 0x8013BAB4
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
		{
			{
				{
					{
						// register: 2
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8013BBC8
void FeEnterGame__Fv() {
}


// address: 0x8013BBF0
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8013BC70
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013BCD8
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8013BD48
void FeInitDifficultyMenu__Fv() {
	// register: 4
	register int MaxLevel;
}


// address: 0x8013BDEC
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8013BED0
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8013BF1C
void FeInitBook1Menu__Fv() {
}


// address: 0x8013BF6C
void FeInitBook2Menu__Fv() {
}


// address: 0x8013BFBC
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8013C200
void PlayDemo__Fv() {
}


// address: 0x8013C214
void FadeFEOut__Fv() {
}


// address: 0x8013C2D8
void DrawBackTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8013C460
void FeInitMainStuff__FP4TASK(struct TASK *T2) {
}


// address: 0x8013C50C
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int len;
	// register: 17
	register int Fefadeval;
	// register: 19
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x8013C9B8
void DrawFeTwinkle__Fii(int TwinkX, int TwinkY) {
}



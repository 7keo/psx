#include "types.h"

// === [ Overlay ID b ] ===

// address: 0x8013CB74
// size: 0x2AC
extern struct Creds CreditsText[57];

// address: 0x8013CE20
// size: 0x380
extern int CreditsTable[224];

// address: 0x8013E1F8
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x8013E6F8
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x8013E158
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x801436EC
// size: 0x14000
extern unsigned char save_buffer[81920];

// address: 0x801576F0
// size: 0x1DE0
extern struct CharDataStructDef CharDataStruct;

// address: 0x801594D0
// size: 0x40
extern char TempStr[64];

// address: 0x80159510
// size: 0x80
extern char AlertStr[128];

// address: 0x8014364C
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x801435F8
// size: 0xC
extern int ClassStrTbl[3];

// address: 0x80143668
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x80143684
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x80139BFC
void PresOnlyTestRoutine__Fv() {
}


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


// address: 0x8013CA94
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8013CABC
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8013CB3C
int GetOverlayOtBase__7CBlocks() {
}


// address: 0x8013CB44
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x8013D1B4
void InitCredits__Fv() {
}


// address: 0x8013D248
int PrintCredits__Fiiiiii(int StrNo, int Y, int CharFade, int RFlag, int GFlag, int BFlag) {
	// register: 18
	register int CharHeight;
	// register: 16
	register int Loop;
	// register: 21
	register int Width;
	// address: 0xFFFFFF98
	auto char *EndPtr;
	// address: 0xFFFFFFA0
	auto int X;
	// register: 9
	register int x0;
	// register: 30
	register int x1;
	// register: 23
	register int x2;
	// register: 22
	register int x3;
	// register: 17
	register int Fade;
	// address: 0xFFFFFF78
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 5
	register int Col;
	// address: 0xFFFFFFA8
	auto int DoneFlag;
	// register: 19
	register char *Str;
}


// address: 0x8013DA78
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8013DB30
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x8013DBE8
int CredCountNL__Fi(int Str) {
	// register: 16
	register int Count;
	// register: 4
	register char *StrPtr;
}


// address: 0x8013DC54
void DoCredits__Fv() {
	// address: 0xFFFFFF58
	// size: 0x7C
	auto struct CScreen CreditsBack;
	// register: 8
	register int Y;
	// register: 19
	register int Fade;
	// register: 20
	register int Mode;
	// register: 21
	register unsigned short TextNo;
	// register: 30
	register unsigned long CreditsCount;
	{
		// register: 17
		register int YOfs;
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


// address: 0x8013E03C
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8013E0B8
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x8013E0DC
int GetCharHeight__5CFontUc(struct CFont *this, unsigned char ch) {
}


// address: 0x8013E11C
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8013E13C
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x801426F8
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x8014272C
void sjis_endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 2
	register unsigned char t;
}


// address: 0x80142774
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x801427F4
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8014287C
void ascii_to_sjis__FPUcPUs(unsigned char *asc, unsigned short *sjis) {
}


// address: 0x80142904
int is_sjis__FPUc(unsigned char *buf) {
}


// address: 0x80142910
int sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x80142998
void read_card_directory__Fi(int card_number) {
	// address: 0xFFFFFF78
	// size: 0x50
	auto char path[80];
	// register: 17
	// size: 0x28
	register struct DIRENTRY *dir;
	// register: 19
	register int i;
	// register: 17
	register int fh;
	// register: 18
	register int r;
}


// address: 0x80142BF4
int test_card_format__Fi(int card_number) {
}


// address: 0x80142CE4
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x80142D20
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x80142E18
int read_card_file__FiiiPc(int card_number, int file, int id, char *buf) {
	// register: 19
	register int okay;
	// register: 20
	register int tries;
	// register: 17
	register int fd;
	// register: 2
	register int r;
	// register: 16
	register int size;
	// register: 22
	register int checksumerror;
	// address: 0xFFFFFD90
	// size: 0x200
	auto struct file_header h;
	// address: 0xFFFFFF90
	// size: 0x50
	auto char path[80];
}


// address: 0x80142FF4
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x801430B8
int write_card_file__FiiPcT2PUcPUsiT4(int card_number, int id, char *name, char *title, unsigned char *icon, unsigned short *clut, int size, unsigned char *buf) {
	// address: 0xFFFFFD88
	// size: 0x200
	auto struct file_header h;
	// register: 16
	register int fd;
	// register: 19
	register int failed;
	// register: 20
	register int e;
	// address: 0xFFFFFF88
	// size: 0x50
	auto char path[80];
	{
		// register: 4
		register int Loop;
	}
}


// address: 0x8014340C
void new_card__Fi(int card_number) {
}


// address: 0x801434A0
void service_card__Fi(int card_number) {
	// register: 4
	register int last_status;
}


// address: 0x80159590
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x80159650
int DoSaveOptions__Fv() {
}


// address: 0x80159678
int DoSaveGame__Fv() {
	// address: 0xFFFFFFC0
	// size: 0x20
	auto char temp_name[32];
	// address: 0xFFFFFFE0
	// size: 0xC
	auto char *Classes[3];
}


// address: 0x801597F0
void DoLoadGame__Fv() {
	{
		{
			{
				// register: 3
				register int result;
			}
		}
	}
}


// address: 0x80159894
int DoFrontEndLoadCharacter__Fi(int slot) {
	// register: 16
	register int result;
	{
	}
}


// address: 0x801598EC
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8015992C
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8015996C
void ChooseCardLoad__Fv() {
}


// address: 0x80159A08
void McInitLoadGameMenu__Fv() {
}


// address: 0x80159A6C
void McMainKeyCtrl__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT um;
}


// address: 0x80159D08
void McCharCardMenuCtrl__Fv() {
	// register: 16
	// size: 0xEC
	register struct CPad *P;
}


// address: 0x80159F50
void McMainCharKeyCtrl__Fv() {
	// register: 19
	register int Spacing;
	// register: 17
	register int yoff;
	// register: 16
	register int SelX;
	// register: 17
	register int len;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT um;
	// register: 18
	// size: 0xEC
	register struct CPad *P;
}


// address: 0x8015A3BC
void ShowAlertBox__Fv() {
	// address: 0xFFFFFFA8
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT um;
	// register: 17
	register int W;
	// register: 30
	register int H;
	// register: 2
	register int X;
	// register: 2
	register int Y;
	// register: 16
	register int otpos;
	// address: 0xFFFFFFC0
	auto int oldBot;
	// address: 0xFFFFFFC8
	auto int oldTot;
	// register: 18
	register int lines;
	// register: 16
	register int yprintpos;
}


// address: 0x8015A5C8
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015A67C
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 4
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8015A79C
void ShowGameFiles__FPciiG4RECTi(char *filename, int saveflag, int Spacing, struct RECT ORect, int yoff) {
	{
		// register: 17
		register int i;
		{
			// register: 5
			register int FileNo;
		}
	}
}


// address: 0x8015A90C
void ShowCharacterFiles__FiiG4RECTi(int cs, int Spacing, struct RECT ORect, int yoff) {
	// register: 4
	register int sn;
	{
		// register: 19
		register int j;
		{
			// register: 3
			register int fileno;
			// register: 18
			register int r;
			// register: 17
			register int g;
			// register: 16
			register int b;
			// address: 0xFFFFFF90
			// size: 0x40
			auto char TempStr[64];
		}
	}
}


// address: 0x8015AAEC
void PackItem__FP12PkItemStructPC10ItemStruct(struct PkItemStruct *id, struct ItemStruct *is) {
}


// address: 0x8015AB98
void PackPlayer__FP14PkPlayerStructi(struct PkPlayerStruct *pPack, int pnum) {
	// register: 19
	register int i;
	// register: 17
	// size: 0x14
	register struct PkItemStruct *pki;
	// register: 16
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 20
	// size: 0x19E8
	register struct PlayerStruct *pPlayer;
}


// address: 0x8015ADAC
void UnPackItem__FPC12PkItemStructP10ItemStruct(struct PkItemStruct *is, struct ItemStruct *id) {
	// register: 2
	register char AC;
}


// address: 0x8015AEE0
void VerifyGoldSeeds__FP12PlayerStruct(struct PlayerStruct *pPlayer) {
	// register: 18
	register int i;
	// register: 5
	register int j;
}


// address: 0x8015AFB8
void UnPackPlayer__FPC14PkPlayerStructiUc(struct PkPlayerStruct *pPack, int pnum, unsigned char killok) {
	// register: 17
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 18
	// size: 0x14
	register struct PkItemStruct *pki;
	// register: 19
	// size: 0x19E8
	register struct PlayerStruct *pPlayer;
	// register: 16
	register int i;
}


// address: 0x8015B284
void ConstructSlotName__FPci(char *TempStr, int slot) {
}


// address: 0x8015B37C
int GetSpinnerWidth__Fi(int j) {
	// address: 0xFFFFFFB8
	// size: 0x40
	auto char TempStr[64];
	// register: 2
	register int len;
}


// address: 0x8015B420
char *ReconstructSlotName__Fii(int side, int file) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8015B818
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x8015B840
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x8015B868
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x8015B870
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x8015B878
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8015B898
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015B8A0
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015B8A8
void ___6Dialog_addr_8015B8A8(struct Dialog *this, int __in_chrg) {
}


// address: 0x8015B8D0
// size: 0x10
struct Dialog *__6Dialog_addr_8015B8D0(struct Dialog *this) {
}


// address: 0x8015B950
int GetOverlayOtBase__7CBlocks_addr_8015B950() {
}


// address: 0x8015B958
char *GetOptStr__Fv() {
}


// address: 0x8015B968
char *GetDiabloStr__Fv() {
}


// address: 0x8015B978
char BLoad__Fv() {
}


// address: 0x8015B994
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015B9E8
unsigned char OLoad__Fv() {
}


// address: 0x8015BA0C
void LoadQuest__Fi(int i) {
}


// address: 0x8015BAD4
void BSave__Fc(char v) {
}


// address: 0x8015BAEC
void ISave__Fi(int v) {
}


// address: 0x8015BB4C
void OSave__FUc(unsigned char v) {
}


// address: 0x8015BB90
void SaveQuest__Fi(int i) {
}


// address: 0x8015BC5C
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int i;
	// register: 3
	register int result;
	// register: 19
	register int tries;
	// register: 21
	register unsigned char *SaveBuff;
	// register: 16
	register int SaveSize;
	// register: 16
	register int savesize;
	{
		// register: 2
		register int delete_file_number;
	}
}


// address: 0x8015C1BC
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 2
	register int result;
	// register: 19
	register unsigned char *LoadBuff;
}


// address: 0x8015C2E8
void PSX_CH_LoadGame__Fi(int slot) {
}


// address: 0x8015C388
int PSX_CH_LoadBlock__Fii(int card_number, int file) {
}


// address: 0x8015C3B0
int PSX_CH_SaveGame__Fii(int card_number, int slot) {
	// register: 2
	register int result;
	// register: 17
	register int tries;
	// address: 0xFFFFFFA0
	// size: 0x40
	auto char TempStr[64];
	{
		// register: 2
		register int delete_file_number;
	}
}


// address: 0x8015C51C
void RestorePads__Fv() {
}


// address: 0x8015C5DC
void StorePads__Fv() {
}


// address: 0x8015C698
void GetIcon__Fv() {
}


// address: 0x8015C6D4
int PSX_OPT_LoadGame__Fiib(int card_number, int file, bool KillHandler) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015C730
int PSX_OPT_SaveGame__FiPc(int card_number, char *filename) {
	// register: 2
	register int result;
	// register: 16
	register int tries;
	// address: 0xFFFFFFA0
	// size: 0x40
	auto char TempStr[64];
	// register: 19
	register unsigned char *SaveBuff;
	{
		// register: 2
		register int delete_file_number;
	}
}


// address: 0x8015C850
void LoadOptions__Fv() {
}


// address: 0x8015C928
void SaveOptions__Fv() {
}


// address: 0x8015C9CC
int RestoreLoadedData__Fb(bool firstflag) {
	// register: 2
	register unsigned char *LoadBuff;
	// register: 18
	register int DataSize;
	// register: 16
	register int i;
}



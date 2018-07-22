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
		int Loop;
	}
}


// address: 0x80139D50
void FeAddNameTable__FPUci(unsigned char *Table, int Count) {
	{
		int YLoop;
		{
			{
				int XLoop;
			}
		}
	}
}


// address: 0x80139E78
void FeDrawBuffer__Fv() {
	struct Dialog FeBack;
	struct RECT FeRect;
	struct RECT ARect;
	int X;
	int Y;
	enum TXT_JUST Just;
	struct TextDat *PanelGfx;
	int SelX;
	int SelY;
	char Text[2];
	{
		{
			{
				{
					{
						{
							{
								int Loop;
								{
									{
										{
											{
												{
													{
														{
															struct POLY_FT4 *Ft4;
															{
																{
																	{
																		int Loop;
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
	struct FeTable *LastMenu;
	void (*FuncPtr)();
}


// address: 0x8013A524
void FePrevMenu__Fv() {
	void (*FuncPtr)();
}


// address: 0x8013A66C
void FeSelUp__Fi(int No) {
	int OldSel;
}


// address: 0x8013A754
void FeSelDown__Fi(int No) {
	int OldSel;
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
	struct Dialog FeBack;
	struct RECT FeRect;
	char TempStr[4];
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
													char asd[2];
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
		int Loop;
		{
			{
				{
					{
						int i;
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
	int MaxLevel;
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
	int len;
	int Fefadeval;
	struct TASK *T2;
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
	int CharHeight;
	int Loop;
	int Width;
	char *EndPtr;
	int X;
	int x0;
	int x1;
	int x2;
	int x3;
	int Fade;
	struct POLY_FT4 *Ft4;
	int Col;
	int DoneFlag;
	char *Str;
}


// address: 0x8013DA78
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8013DB30
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x8013DBE8
int CredCountNL__Fi(int Str) {
	int Count;
	char *StrPtr;
}


// address: 0x8013DC54
void DoCredits__Fv() {
	struct CScreen CreditsBack;
	int Y;
	int Fade;
	int Mode;
	unsigned short TextNo;
	unsigned long CreditsCount;
	{
		int YOfs;
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
	unsigned char t;
}


// address: 0x8014272C
void sjis_endian_swap__FPUci(unsigned char *b, int byts) {
	unsigned char t;
}


// address: 0x80142774
unsigned short to_sjis__Fc(char asc) {
	struct sjis *sp;
}


// address: 0x801427F4
char to_ascii__FUs(unsigned short sjis) {
	struct sjis *sp;
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
	char path[80];
	struct DIRENTRY *dir;
	int i;
	int fh;
	int r;
}


// address: 0x80142BF4
int test_card_format__Fi(int card_number) {
}


// address: 0x80142CE4
int checksum_data__FPci(char *buf, int size) {
	int chk;
}


// address: 0x80142D20
int delete_card_file__Fii(int card_number, int file) {
	char path[80];
}


// address: 0x80142E18
int read_card_file__FiiiPc(int card_number, int file, int id, char *buf) {
	int okay;
	int tries;
	int fd;
	int r;
	int size;
	int checksumerror;
	struct file_header h;
	char path[80];
}


// address: 0x80142FF4
int format_card__Fi(int card_number) {
	char path[80];
}


// address: 0x801430B8
int write_card_file__FiiPcT2PUcPUsiT4(int card_number, int id, char *name, char *title, unsigned char *icon, unsigned short *clut, int size, unsigned char *buf) {
	struct file_header h;
	int fd;
	int failed;
	int e;
	char path[80];
	{
		int Loop;
	}
}


// address: 0x8014340C
void new_card__Fi(int card_number) {
}


// address: 0x801434A0
void service_card__Fi(int card_number) {
	int last_status;
}


// address: 0x80159590
int GetFileNumber__FiPc(int side, char *file_name) {
	int i;
}


// address: 0x80159650
int DoSaveOptions__Fv() {
}


// address: 0x80159678
int DoSaveGame__Fv() {
	char temp_name[32];
	char *Classes[3];
}


// address: 0x801597F0
void DoLoadGame__Fv() {
	{
		{
			{
				int result;
			}
		}
	}
}


// address: 0x80159894
int DoFrontEndLoadCharacter__Fi(int slot) {
	int result;
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
	struct RECT um;
}


// address: 0x80159D08
void McCharCardMenuCtrl__Fv() {
	struct CPad *P;
}


// address: 0x80159F50
void McMainCharKeyCtrl__Fv() {
	int Spacing;
	int yoff;
	int SelX;
	int len;
	struct RECT um;
	struct CPad *P;
}


// address: 0x8015A3BC
void ShowAlertBox__Fv() {
	struct Dialog SBack;
	struct RECT um;
	int W;
	int H;
	int X;
	int Y;
	int otpos;
	int oldBot;
	int oldTot;
	int lines;
	int yprintpos;
}


// address: 0x8015A5C8
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015A67C
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	int i;
	int blocks;
}


// address: 0x8015A79C
void ShowGameFiles__FPciiG4RECTi(char *filename, int saveflag, int Spacing, struct RECT ORect, int yoff) {
	{
		int i;
		{
			int FileNo;
		}
	}
}


// address: 0x8015A90C
void ShowCharacterFiles__FiiG4RECTi(int cs, int Spacing, struct RECT ORect, int yoff) {
	int sn;
	{
		int j;
		{
			int fileno;
			int r;
			int g;
			int b;
			char TempStr[64];
		}
	}
}


// address: 0x8015AAEC
void PackItem__FP12PkItemStructPC10ItemStruct(struct PkItemStruct *id, struct ItemStruct *is) {
}


// address: 0x8015AB98
void PackPlayer__FP14PkPlayerStructi(struct PkPlayerStruct *pPack, int pnum) {
	int i;
	struct PkItemStruct *pki;
	struct ItemStruct *pi;
	struct PlayerStruct *pPlayer;
}


// address: 0x8015ADAC
void UnPackItem__FPC12PkItemStructP10ItemStruct(struct PkItemStruct *is, struct ItemStruct *id) {
	char AC;
}


// address: 0x8015AEE0
void VerifyGoldSeeds__FP12PlayerStruct(struct PlayerStruct *pPlayer) {
	int i;
	int j;
}


// address: 0x8015AFB8
void UnPackPlayer__FPC14PkPlayerStructiUc(struct PkPlayerStruct *pPack, int pnum, unsigned char killok) {
	struct ItemStruct *pi;
	struct PkItemStruct *pki;
	struct PlayerStruct *pPlayer;
	int i;
}


// address: 0x8015B284
void ConstructSlotName__FPci(char *TempStr, int slot) {
}


// address: 0x8015B37C
int GetSpinnerWidth__Fi(int j) {
	char TempStr[64];
	int len;
}


// address: 0x8015B420
char *ReconstructSlotName__Fii(int side, int file) {
	{
		int i;
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
	int rv;
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
	int i;
	int result;
	int tries;
	unsigned char *SaveBuff;
	int SaveSize;
	int savesize;
	{
		int delete_file_number;
	}
}


// address: 0x8015C1BC
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	int result;
	unsigned char *LoadBuff;
}


// address: 0x8015C2E8
void PSX_CH_LoadGame__Fi(int slot) {
}


// address: 0x8015C388
int PSX_CH_LoadBlock__Fii(int card_number, int file) {
}


// address: 0x8015C3B0
int PSX_CH_SaveGame__Fii(int card_number, int slot) {
	int result;
	int tries;
	char TempStr[64];
	{
		int delete_file_number;
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
	int result;
	unsigned char *LoadBuff;
}


// address: 0x8015C730
int PSX_OPT_SaveGame__FiPc(int card_number, char *filename) {
	int result;
	int tries;
	char TempStr[64];
	unsigned char *SaveBuff;
	{
		int delete_file_number;
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
	unsigned char *LoadBuff;
	int DataSize;
	int i;
}



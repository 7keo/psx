#include "types.h"

// === [ Overlay ID a ] ===

// address: 0x80139EDC
// size: 0x30
extern struct Creds CreditsTitle[6];

// address: 0x8013A084
// size: 0xE0
extern struct Creds CreditsSubTitle[28];

// address: 0x8013A520
// size: 0x118
extern struct Creds CreditsText[35];

// address: 0x8013A638
// size: 0x380
extern int CreditsTable[224];

// address: 0x8013B868
// size: 0x500
extern struct DIRENTRY card_dir[16][2];

// address: 0x8013BD68
// size: 0x4000
extern struct file_header card_header[16][2];

// address: 0x8013B78C
// size: 0x94
extern struct sjis sjis_table[37];

// address: 0x80140C54
// size: 0x1A000
extern unsigned char save_buffer[106496];

// address: 0x80140BD0
// size: 0x1C
extern struct FeTable McLoadGameMenu;

// address: 0x80140BB0
// size: 0x14
extern char *CharFileList[5];

// address: 0x80140BC4
// size: 0xC
extern char *Classes[3];

// address: 0x80140BEC
// size: 0x1C
extern struct FeTable McLoadCharMenu;

// address: 0x80140C08
// size: 0x1C
extern struct FeTable McLoadCard1Menu;

// address: 0x80140C24
// size: 0x1C
extern struct FeTable McLoadCard2Menu;

// address: 0x80137684
void PresOnlyTestRoutine__Fv() {
}


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


// address: 0x80139D84
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80139DAC
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80139E08
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8013A9CC
void InitCredits__Fv() {
}


// address: 0x8013AA08
int PrintCredits__FPciiiii(char *Str, int Y, int CharFade, int RFlag, int GFlag, int BFlag) {
	// register: 18
	register int CharHeight;
	// register: 16
	register int Loop;
	// register: 21
	register int Width;
	// address: 0xFFFFFFA8
	auto char *EndPtr;
	// address: 0xFFFFFFB0
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
	// address: 0xFFFFFF88
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 5
	register int Col;
	// address: 0xFFFFFFB8
	auto int DoneFlag;
}


// address: 0x8013B228
void DrawCreditsTitle__Fiiiii(int TitleNo, int TitleFade, int TitleMode, int NextTitleNo, int Y) {
}


// address: 0x8013B2F4
void DrawCreditsSubTitle__Fiiiii(int SubTitleNo, int SubTitleFade, int SubTitleMode, int NextSubTitleNo, int Y) {
}


// address: 0x8013B3D0
void DoCredits__Fv() {
	// address: 0xFFFFFF60
	// size: 0x78
	auto struct CScreen CreditsBack;
	// register: 2
	register int Y;
	// register: 18
	register int Fade;
	// register: 30
	register int Dx;
	// register: 19
	register int Mode;
	// register: 21
	register int TextNo;
	// register: 23
	register unsigned long CreditsCount;
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


// address: 0x8013B644
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x8013B6C0
int GetCharHeight__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013B6F8
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8013B750
void ___7CScreen_addr_8013B750(struct CScreen *this, int __in_chrg);

// address: 0x8013B770
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8013FD68
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x8013FD9C
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8013FE1C
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8013FE9C
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x8013FF30
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x8013FFB8
int test_hw_event__Fv() {
}


// address: 0x80140048
void read_card_directory__Fi(int card_number) {
	// address: 0xFFFFFF78
	// size: 0x50
	auto char path[80];
	// register: 17
	// size: 0x28
	register struct DIRENTRY *dir;
	// register: 20
	register int i;
	// register: 17
	register int fh;
	// register: 19
	register int r;
}


// address: 0x80140280
int test_card_format__Fi(int card_number) {
}


// address: 0x80140310
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x8014034C
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x80140444
int read_card_file__FiiiPc(int card_number, int file, int id, char *buf) {
	// register: 20
	register int okay;
	// register: 19
	register int tries;
	// register: 16
	register int fd;
	// register: 6
	register int size;
	// address: 0xFFFFFD90
	// size: 0x200
	auto struct file_header h;
	// address: 0xFFFFFF90
	// size: 0x50
	auto char path[80];
}


// address: 0x801405FC
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA8
	// size: 0x50
	auto char path[80];
}


// address: 0x801406AC
int write_card_file__FiiPcT2PUcPUsiT4(int card_number, int id, char *name, char *title, unsigned char *icon, unsigned short *clut, int size, unsigned char *buf) {
	// address: 0xFFFFFD88
	// size: 0x200
	auto struct file_header h;
	// register: 16
	register int fd;
	// register: 17
	register int failed;
	// register: 17
	register int e;
	// address: 0xFFFFFF88
	// size: 0x50
	auto char path[80];
}


// address: 0x801409F4
void new_card__Fi(int card_number) {
}


// address: 0x80140A70
void service_card__Fi(int card_number) {
	// register: 19
	register int old_status;
}


// address: 0x8015AC54
int GetFileNumber__FiPc(int side, char *file_name) {
	// register: 16
	register int i;
}


// address: 0x8015AD14
int DoSaveCharacter__FPc(char *savefilename) {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015ADDC
int DoSaveGame__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x20
	auto char temp_name[32];
	// register: 5
	register int delete_file_number;
}


// address: 0x8015AE9C
void DoLoadGame__Fv() {
}


// address: 0x8015AEDC
int DoFrontEndLoadCharacter__FPc(char *loadfilenameptr) {
	// register: 17
	register int result;
}


// address: 0x8015AF38
void McInitLoadCard1Menu__Fv() {
}


// address: 0x8015AF84
void McInitLoadCard2Menu__Fv() {
}


// address: 0x8015AFD0
void ChooseCardLoad__Fv() {
}


// address: 0x8015B084
void McInitLoadCharMenu__Fv() {
}


// address: 0x8015B0AC
void McInitLoadGameMenu__Fv() {
}


// address: 0x8015B108
void McMainKeyCtrl__Fv() {
	// register: 3
	register int FileNo;
	{
		{
			{
				{
					{
						// register: 17
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8015B2C4
void ShowAlertBox__Fv() {
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct Dialog SBack;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT um;
	// register: 2
	register int X;
	// register: 2
	register int Y;
	// register: 2
	register int W;
	// register: 16
	register int H;
	// register: 23
	register int oldBot;
	// register: 22
	register int oldTot;
	// register: 16
	register int lines;
}


// address: 0x8015B464
bool GetLoadStatusMessage__FPc(char *file_name) {
}


// address: 0x8015B4E4
bool GetSaveStatusMessage__FiPc(int fileblocks, char *file_name) {
	// register: 6
	register int i;
	// register: 7
	register int blocks;
}


// address: 0x8015B5BC
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8015B5DC
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015B5E4
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015B5EC
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8015B5F8
void ___6Dialog_addr_8015B5F8(struct Dialog *this, int __in_chrg) {
}


// address: 0x8015B620
// size: 0x10
struct Dialog *__6Dialog_addr_8015B620(struct Dialog *this) {
}


// address: 0x8015B67C
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x8015B6D0
void LoadQuest__Fi(int i) {
}


// address: 0x8015B798
void ISave__Fi(int v) {
}


// address: 0x8015B7F8
void SaveQuest__Fi(int i) {
}


// address: 0x8015B8C4
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 17
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x8015BB8C
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 17
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x8015BE88
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015BFB0
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


// address: 0x8015C130
void RestorePads__Fv() {
}


// address: 0x8015C1F0
void StorePads__Fv() {
}


// address: 0x8015C2AC
void GetIcon__Fv() {
}


// address: 0x8015C2E8
int PSX_OPT_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x8015C390
int PSX_OPT_SaveGame__Fi(int card_number) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}



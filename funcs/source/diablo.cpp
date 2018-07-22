// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x80037FAC
void FreeGameMem__Fv() {
}


// address: 0x80037FE4
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x800380D4
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80038148
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x8003820C
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x8003840C
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80038574
unsigned char TryIconCurs__Fv() {
}


// address: 0x80038894
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x8003889C
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80038930
void LoadLvlGFX__Fv() {
	// register: 16
	register char *LoadFile;
}


// address: 0x800389E8
void LoadMegaTiles__FPCc(char *LoadFile) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyIo;
}


// address: 0x80038A78
void LoadAllGFX__Fv() {
}


// address: 0x80038A98
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80038B90
void LoCreateLevel__FPv() {
	// register: 5
	register int lvldir;
}


// address: 0x80038CF4
void ClearOutDungeonMap__Fv() {
	// register: 17
	register bool istown;
	// register: 16
	register unsigned short val;
	{
		// register: 6
		register int x;
		{
			{
				// register: 4
				register int y;
				{
					// register: 7
					register int y;
					// register: 6
					register int x;
					{
						{
							// register: 4
							register int x;
							{
								// register: 5
								register int y;
								// register: 6
								register int x;
								{
									{
										// register: 4
										register int x;
										{
											// register: 5
											register int y;
											// register: 6
											register int x;
											{
												{
													// register: 4
													register int x;
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


// address: 0x80038EF4
void AddQuestItems__Fv() {
}


// address: 0x80038F94
void AllSolid__Fii(int x, int y) {
}


// address: 0x80038FD4
void FillCrapBits__Fv() {
	// register: 18
	// size: 0x14
	register struct QuestStruct *qs;
	{
		{
			{
				{
					// register: 16
					register int x;
					// register: 17
					register int y;
				}
			}
		}
	}
}


// address: 0x80039174
void Lsaveplrpos__Fv() {
}


// address: 0x80039220
void Lrestoreplrpos__Fv() {
}


// address: 0x80039270
void LoadGameLevel__FUci(unsigned char firstflag, int lvldir) {
	// register: 16
	register int i;
	// register: 4
	register int j;
	{
		{
			// register: 6
			register unsigned char visited;
		}
	}
}


// address: 0x80039BA8
void SetSpeed__F9GM_SPEEDS(enum GM_SPEEDS Speed) {
}


// address: 0x80039BBC
// size: 0x4
enum GM_SPEEDS GetSpeed__Fv() {
}


// address: 0x80039BC8
void game_logic__Fv() {
	// register: 17
	register int Frames;
	// register: 18
	register int ThisTick;
	// register: 16
	register int SinceLast;
}


// address: 0x80039DB0
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80039E58
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80039EB8
void alloc_plr__Fv() {
}


// address: 0x80039EC0
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80039EC8
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80039EE8
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80039F08
void app_fatal(char *pszFile) {
}


// address: 0x80039F38
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80039F60
void DoMemCardFromInGame__Fv() {
}



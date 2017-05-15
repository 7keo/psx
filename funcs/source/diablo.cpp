// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80037FAC
void FreeGameMem__Fv() {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80037FE4
void start_game__FUi(unsigned int uMsg) {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x800380D4
void free_game__Fv() {
	int i;
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80038148
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	unsigned char fExitProgram;
	unsigned int uMsg;
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x8003820C
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	unsigned char fExitProgram;
	unsigned int uMsg;
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x8003840C
void run_game_loop__FUi(unsigned int uMsg) {
	unsigned long (*saveProc)();
	struct MSG msg;
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80038574
unsigned char TryIconCurs__Fv() {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80038894
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x8003889C
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80038930
void LoadLvlGFX__Fv() {
	char *LoadFile;
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x800389E8
void LoadMegaTiles__FPCc(char *LoadFile) {
	struct FileIO *MyIo;
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80038A78
void LoadAllGFX__Fv() {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80038A98
void CreateLevel__Fi(int lvldir) {
	long hnd;
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80038B90
void LoCreateLevel__FPv() {
	int lvldir;
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80038CF4
void ClearOutDungeonMap__Fv() {
	unknown istown;
	unsigned short val;
	int x;
	int y;
	int y;
	int x;
	int x;
	int y;
	int y;
	int x;
	int x;
	int y;
	int y;
	int y;
	int x;
	int x;
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80038EF4
void AddQuestItems__Fv() {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80038F94
void AllSolid__Fii(int x, int y) {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80038FD4
void FillCrapBits__Fv() {
	struct QuestStruct *qs;
	int x;
	int y;
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80039174
void Lsaveplrpos__Fv() {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80039220
void Lrestoreplrpos__Fv() {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80039270
void LoadGameLevel__FUci(unsigned char firstflag, int lvldir) {
	int i;
	int j;
	unsigned char visited;
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80039BA8
void SetSpeed__F9GM_SPEEDS(enum GM_SPEEDS Speed) {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80039BBC
enum GM_SPEEDS GetSpeed__Fv() {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80039BC8
void game_logic__Fv() {
	int Frames;
	int ThisTick;
	int SinceLast;
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80039DB0
void timeout_cursor__FUc(unsigned char bTimeout) {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80039E58
void game_loop__FUc(unsigned char bStartup) {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80039EB8
void alloc_plr__Fv() {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80039EC0
void plr_encrypt__FUc(unsigned char bEncrypt) {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80039EC8
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80039EE8
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80039F08
void app_fatal(char *pszFile) {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80039F38
void DoMemCardFromFrontEnd__Fv() {
}

// Path: C:\diabpsx\SOURCE\DIABLO.CPP
// Addr: 0x80039F60
void DoMemCardFromInGame__Fv() {
}


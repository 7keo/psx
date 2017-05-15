// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x80098988
void PrintCDWaitTask__FP4TASK(struct TASK *T) {
	struct TextDat *CDGfxData;
	struct POLY_FT4 *Ft4;
	int cdx;
	int cdy;
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x80098AC4
void InitCDWaitIcon__Fv() {
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x80098AF8
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x80098B0C
void STR_SystemTask__FP4TASK(struct TASK *T) {
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x80098B3C
void STR_AllocBuffer__Fv() {
	int i;
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x80098B74
void STR_Init__Fv() {
	long vm;
	unsigned char *ptr;
	struct TASK *T;
	int i;
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x80098CA0
struct SFXHDR* STR_InitStream__Fc(char flag) {
	struct SFXHDR *sfh;
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x80098DC8
struct SFXHDR* STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	struct SFXHDR *sfh;
	char tstring[32];
	char Prefix[2];
	enum LANG_TYPE Lang;
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x80099010
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
	enum LANG_TYPE lang;
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x800990DC
void STR_setpitch__FP6SFXHDR(struct SFXHDR *sfh) {
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x80099128
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	int offs;
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x80099234
void STR_pauseall__Fv() {
	int i;
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x800992A8
void STR_resumeall__Fv() {
	int i;
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x8009931C
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x80099388
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x80099474
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x80099664
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	unsigned char *ptr;
	int DMA_off;
	int sec;
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x8009972C
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	int sec_num;
	unsigned char *dp;
	int i;
	int read;
	int osize;
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x800999AC
void STR_AsyncWeeTASK__FP4TASK(struct TASK *T) {
	struct DEF_ARGS *A;
	struct STRHDR *StreamHND;
	struct SFXHDR *sfh;
	char Done;
	int frame;
	int framediff;
	int AsyncHND;
	unsigned char *ptr;
	char OrigName[14];
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x80099C84
void STR_AsyncTASK__FP4TASK(struct TASK *T) {
	struct DEF_ARGS *A;
	struct STRHDR *StreamHND;
	struct SFXHDR *sfh;
	char Done;
	int latency;
	int frame;
	int framediff;
	int AsyncHND;
	unsigned char *ptr;
	char OrigName[14];
	unsigned long vol;
}

// Path: C:\diabpsx\PSXSRC\STREAM.CPP
// Addr: 0x8009A06C
void STR_StreamMainTask__FP6SFXHDRc(struct SFXHDR *sfh, char FileType) {
	struct STRHDR *sh;
	struct DEF_ARGS *A;
	struct TASK *T2;
}


// Path: C:\diabpsx\PSXSRC\SNDBANK.CPP
// Addr: 0x8009A198
void SND_Monitor__FP4TASK(struct TASK *T) {
	char status[24];
	int i;
}

// Path: C:\diabpsx\PSXSRC\SNDBANK.CPP
// Addr: 0x8009A224
void SPU_OnceOnlyInit__Fv() {
}

// Path: C:\diabpsx\PSXSRC\SNDBANK.CPP
// Addr: 0x8009A25C
void SPU_Init__Fv() {
	struct SpuCommonAttr common_attr;
	int i;
}

// Path: C:\diabpsx\PSXSRC\SNDBANK.CPP
// Addr: 0x8009A364
int SND_FindChannel__Fv() {
	char status[24];
	int count;
	int result;
}

// Path: C:\diabpsx\PSXSRC\SNDBANK.CPP
// Addr: 0x8009A3D0
void SND_ClearBank__Fv() {
}

// Path: C:\diabpsx\PSXSRC\SNDBANK.CPP
// Addr: 0x8009A440
unknown SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, unknown LastChunk) {
}

// Path: C:\diabpsx\PSXSRC\SNDBANK.CPP
// Addr: 0x8009A4B8
void SND_LoadBank__Fi(int lvlnum) {
	struct FileIO *MyFileIO;
	char BankFile[16];
}

// Path: C:\diabpsx\PSXSRC\SNDBANK.CPP
// Addr: 0x8009A5DC
int SND_FindSFX__FUs(unsigned short Name) {
	struct bank_entry *BankOffsets;
	int RetVal;
	int i;
}

// Path: C:\diabpsx\PSXSRC\SNDBANK.CPP
// Addr: 0x8009A6B8
void SND_StopSnd__Fi(int voice) {
}

// Path: C:\diabpsx\PSXSRC\SNDBANK.CPP
// Addr: 0x8009A6EC
unknown SND_IsSfxPlaying__Fi(int SFXNo) {
	int i;
}

// Path: C:\diabpsx\PSXSRC\SNDBANK.CPP
// Addr: 0x8009A728
int SND_RemapSnd__Fi(int SFXNo) {
	int i;
}

// Path: C:\diabpsx\PSXSRC\SNDBANK.CPP
// Addr: 0x8009A79C
int SND_PlaySnd__FUsiii(unsigned short Name, int vol, int pan, int pitchadj) {
	int RetVal;
	int sfxnum;
	int voice;
	struct bank_entry *BankOffsets;
	int Offset;
	struct SpuVoiceAttr voice_attr;
}


// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003CF34
unsigned char effect_is_playing__Fi(int nSFX) {
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003CF5C
void stream_stop__Fv() {
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003CFB8
void stream_pause__Fv() {
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003D01C
void stream_resume__Fv() {
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003D06C
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003D158
void stream_update__Fv() {
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003D160
void sfx_stop__Fv() {
	unsigned long d;
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003D17C
void InitMonsterSND__Fi(int monst) {
	int mtype;
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003D1D4
void FreeMonsterSnd__Fv() {
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003D1DC
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	char Temp[64];
	long volume;
	long pan;
	int scrx;
	int scry;
	struct CBlocks *gblocks;
	struct RECT R;
	long vol;
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003D3C4
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	long lPan;
	long lVolume;
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003D528
void PlayEffect__Fii(int i, int mode) {
	int mi;
	long lPan;
	long lVolume;
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003D670
int RndSFX__Fi(int psfx) {
	int nRand;
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003D718
void PlaySFX__Fi(int psfx) {
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003D784
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003D830
void sound_stop__Fv() {
	int mi;
	int mode;
	int nr;
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003D8C8
void sound_update__Fv() {
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003D8FC
void priv_sound_init__FUc(unsigned char bLoadMask) {
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003D940
void sound_init__Fv() {
	unsigned char bLoadMask;
}

// Path: C:\diabpsx\SOURCE\EFFECTS.CPP
// Addr: 0x8003D9E8
void stream_fade__Fv() {
}


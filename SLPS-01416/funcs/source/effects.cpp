// C:\diabpsx\SOURCE\EFFECTS.CPP

#include "types.h"

// address: 0x8003CF34
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x8003CF5C
void stream_stop__Fv() {
}


// address: 0x8003CFB8
void stream_pause__Fv() {
}


// address: 0x8003D01C
void stream_resume__Fv() {
}


// address: 0x8003D06C
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003D158
void stream_update__Fv() {
}


// address: 0x8003D160
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003D17C
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003D1D4
void FreeMonsterSnd__Fv() {
}


// address: 0x8003D1DC
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// address: 0xFFFFFFA0
	// size: 0x40
	auto char Temp[64];
	// register: 4294967295
	register long volume;
	// register: 6
	register long pan;
	// register: 5
	register int scrx;
	// register: 4
	register int scry;
	// register: 2
	// size: 0x108
	register struct CBlocks *gblocks;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register long vol;
}


// address: 0x8003D3C4
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003D528
void PlayEffect__Fii(int i, int mode) {
	// register: 3
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003D670
int RndSFX__Fi(int psfx) {
	// register: 4
	register int nRand;
}


// address: 0x8003D718
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003D784
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003D830
void sound_stop__Fv() {
	// register: 18
	register int mi;
	// register: 17
	register int mode;
	// register: 16
	register int nr;
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


// address: 0x8003D8C8
void sound_update__Fv() {
}


// address: 0x8003D8FC
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003D940
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


// address: 0x8003D9E8
void stream_fade__Fv() {
}



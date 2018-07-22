// C:\diabpsx\SOURCE\SOUND.CPP

#include "types.h"

// address: 0x80077D14
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80077D1C
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
	{
		// register: 16
		register int v;
	}
}


// address: 0x80077D58
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x80077DA0
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
	// register: 18
	register int padj;
}


// address: 0x80077E40
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80077E50
void music_stop__Fv() {
}


// address: 0x80077E90
void music_fade__Fv() {
}


// address: 0x80077ED0
void music_start__Fi(int nTrack) {
	{
		{
			// register: 3
			register int MusicVolume;
		}
	}
}


// address: 0x80077F70
unsigned char snd_playing__Fi(int SFXNo) {
}



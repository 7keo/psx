// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

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



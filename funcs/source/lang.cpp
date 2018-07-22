// C:\diabpsx\SOURCE\LANG.CPP

#include "types.h"

// address: 0x8007B348
// size: 0x4
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x8007B354
void LANG_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	{
		{
			// address: 0xFFFFFFC0
			// size: 0x28
			auto char FileNameBuffer[40];
			// register: 17
			// size: 0x14
			register struct FileIO *FIO;
			{
				// register: 4
				register int f;
			}
		}
	}
}


// address: 0x8007B528
char *GetStr__Fi(int StrId) {
}


// address: 0x8007B5A4
void LANG_ReloadMainTXT__Fv() {
}


// address: 0x8007B5E8
void LANG_SetLang__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
	{
		{
			// address: 0xFFFFFFC0
			// size: 0x28
			auto char FileNameBuffer[40];
			// register: 16
			// size: 0x14
			register struct FileIO *FIO;
			{
				// register: 4
				register int f;
			}
		}
	}
}


// address: 0x8007B700
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x8007B758
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x8007B764
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x8007B844
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}



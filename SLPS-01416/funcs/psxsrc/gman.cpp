// C:\diabpsx\PSXSRC\GMAN.CPP

#include "types.h"

// address: 0x800B0760
void GM_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80091E54
// size: 0x70
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x80091E88
void OnceOnlyInit__7TextDat(struct TextDat *this) {
}


// address: 0x80091EA8
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x80091EF0
void ReloadTP__7TextDat(struct TextDat *this) {
}


// address: 0x80091F30
void Use__7TextDatlbi(struct TextDat *this, long NewHndDat, bool DatLoaded, int size) {
	{
		{
			// address: 0xFFFFFFB0
			// size: 0x28
			auto char NameBuff[40];
			{
				{
					{
						{
							// address: 0xFFFFFFD8
							// size: 0x8
							auto struct RECT R;
							// register: 17
							register int DecompSize;
						}
					}
				}
			}
		}
	}
}


// address: 0x80092170
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8011C66C
	static int TpX;
	// address: 0x8011C670
	static int TpY;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
	// register: 2
	register int Dx;
	// register: 2
	register int Dy;
}


// address: 0x80092218
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x800922D0
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x80092368
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x800923B4
long MakeOffsetTab__C9CBlockHdr(struct CBlockHdr *this) {
	// register: 18
	// size: 0xC
	register struct CBlock *MyBlock;
	// register: 21
	register long hndRet;
	// register: 19
	register int *Tab;
	{
		// register: 16
		register unsigned int f;
	}
}


// address: 0x800924E0
void SetUVTp__7TextDatP9FRAME_HDRP8POLY_FT4ii(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4, int XFlip, int YFlip) {
	// register: 2
	register int Rotated;
	// register: 12
	register int Tpage;
	// register: 3
	register int U;
	// register: 9
	register int V;
	// register: 8
	register int W;
	// register: 10
	register int H;
}


// address: 0x800925E0
bool IsCompressed__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Dir, int Frame) {
}


// address: 0x8009262C
// size: 0x28
struct POLY_FT4 *PrintMonster__7TextDatiiiiiii(struct TextDat *this, int Creature, int Action, int Dir, int Frame, int x, int y, int OtPos) {
	// register: 16
	register int PhysFrame;
}


// address: 0x800926D8
// size: 0x28
struct POLY_FT4 *PrintMonsterA__7TextDatiiibi(struct TextDat *this, int Frm, int X, int Y, bool XFlip, int OtPos) {
	{
		{
			// address: 0xFFFFFFC8
			// size: 0x28
			auto struct POLY_FT4 *FT4;
			// register: 18
			// size: 0xC
			register struct FRAME_HDR *Fr;
			// register: 3
			register int W;
			// register: 7
			register int H;
			{
				{
					// register: 16
					register unsigned char *Dest;
					// register: 2
					register int DecompSize;
					// register: 16
					register unsigned char *CompFrAddr;
					// register: 17
					// size: 0x44
					register struct DR_LOAD2 *DrPtr;
					// register: 22
					register unsigned long NumOfPrims;
					// register: 3
					register int VH;
					// register: 5
					register int TpX;
					// register: 6
					register int TpY;
					// register: 5
					register int U;
					// register: 3
					register int V;
					// register: 2
					register int W;
					// register: 7
					register int H;
					// register: 4
					register int u0;
					// register: 5
					register int u1;
					// register: 6
					register int u2;
					// register: 8
					register int u3;
					{
						// register: 19
						register unsigned int f;
						{
							// address: 0xFFFFFFD0
							// size: 0x8
							auto struct RECT mrect;
						}
					}
				}
			}
		}
	}
}


// address: 0x80092A80
void PrepareFt4__7TextDatP8POLY_FT4iiiii(struct TextDat *this, struct POLY_FT4 *FT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 22
	register int W;
	// register: 21
	register int H;
	{
		{
			{
				{
					{
						{
							// address: 0xFFFFFFD0
							// size: 0x8
							auto struct RECT R;
							{
								{
									// register: 4
									register unsigned char sw;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80092D14
unsigned char *GetDecompBufffer__7TextDati(struct TextDat *this, int Size) {
	// register: 18
	register long *DecArray;
	// register: 19
	register int DecIndex;
	// register: 16
	register long hnd;
	// register: 20
	register unsigned char *RetAddr;
}


// address: 0x80092E74
void SetUVTpGT4__7TextDatP9FRAME_HDRP8POLY_GT4ii(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT4 *FT4, int XFlip, int YFlip) {
	// register: 2
	register int Rotated;
	// register: 12
	register int Tpage;
	// register: 3
	register int U;
	// register: 9
	register int V;
	// register: 8
	register int W;
	// register: 10
	register int H;
}


// address: 0x80092F74
void PrepareGt4__7TextDatP8POLY_GT4iiiii(struct TextDat *this, struct POLY_GT4 *GT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 22
	register int W;
	// register: 20
	register int H;
	// register: 4
	register unsigned char sw;
	// register: 17
	// size: 0x8
	register struct PAL *Pal;
	{
		{
			{
				// address: 0xFFFFFFD0
				// size: 0x8
				auto struct RECT R;
				{
					{
						// register: 2
						register int DecX;
						// register: 2
						register int DecY;
						// address: 0xFFFFFFD0
						// size: 0x8
						auto struct RECT R;
					}
				}
			}
		}
	}
}


// address: 0x800931CC
void SetUVTpGT3__7TextDatP9FRAME_HDRP8POLY_GT3(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT3 *GT3) {
	// register: 2
	register int Rotated;
	// register: 10
	register int Tpage;
	// register: 4
	register int U;
	// register: 9
	register int V;
	// register: 3
	register int W;
	// register: 8
	register int H;
}


// address: 0x80093250
void PrepareGt3__7TextDatP8POLY_GT3iii(struct TextDat *this, struct POLY_GT3 *GT3, int Frm, int X, int Y) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 22
	register int W;
	// register: 21
	register int H;
	// register: 16
	// size: 0x8
	register struct PAL *Pal;
	{
		{
			{
				// address: 0xFFFFFFD8
				// size: 0x8
				auto struct RECT R;
				{
					{
						// register: 2
						register int DecX;
						// register: 2
						register int DecY;
						// address: 0xFFFFFFD8
						// size: 0x8
						auto struct RECT R;
					}
				}
			}
		}
	}
}


// address: 0x80093418
// size: 0x28
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8009356C
// size: 0x34
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x800936C0
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x80093818
void MakeCreatureOffsetTab__7TextDat(struct TextDat *this) {
	// register: 17
	register int NumOfCreatures;
	{
		{
			// register: 16
			register unsigned char *ThisAddr;
			{
				// register: 17
				register unsigned int f;
				{
					// register: 16
					register int f;
					{
					}
				}
			}
		}
	}
}


// address: 0x80093958
void MakePalOffsetTab__7TextDat(struct TextDat *this) {
	// register: 5
	// size: 0x8
	register struct PAL *ThisPal;
	{
		// register: 6
		register unsigned int f;
	}
}


// address: 0x80093A54
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x80093A84
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x80093BAC
void DumpHdr__7TextDat(struct TextDat *this) {
}


// address: 0x80093C10
// size: 0x70
struct TextDat *GM_UseTexData__Fi(int Id) {
	{
		{
			// register: 18
			// size: 0x70
			register struct TextDat *Dat2Use;
			// register: 20
			// size: 0x4
			register struct CTextFileInfo **Tab;
			{
				// register: 17
				register int f;
			}
		}
	}
}


// address: 0x80093D44
void GM_ForceTpLoad__Fi(int Id) {
}


// address: 0x80093D80
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x80093DD4
void SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4) {
	// register: 17
	// size: 0x8
	register struct PAL *Pal;
	{
		{
			{
				// address: 0xFFFFFFE8
				// size: 0x8
				auto struct RECT R;
			}
		}
	}
}


// address: 0x80093E98
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x80093EEC
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x80093F44
void DoDecompRequests__7TextDat(struct TextDat *this) {
	// register: 17
	register long *DecArray;
	{
		// register: 18
		register int f;
		{
		}
	}
}


// address: 0x80094068
void FindDecompArea__7TextDatR4RECT(struct TextDat *this, struct RECT *R) {
	// register: 8
	register int NumOfFrames;
	// register: 4
	register int Widest;
	// register: 16
	register int Tallest;
	{
		// register: 7
		register int f;
		{
			// register: 5
			register int w;
			// register: 3
			register int h;
		}
	}
}


// address: 0x80094140
// size: 0x4
struct CTextFileInfo *GetFileInfo__7TextDati(int Id) {
}


// address: 0x80094190
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x800941B8
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x800941E8
void InitDirRemap__15CCreatureAction(struct CCreatureAction *this) {
	// address: 0xFFFFFFE0
	// size: 0x20
	auto bool Dir2Remap[8];
	// register: 7
	register int f;
	// register: 11
	register int RemapNum;
	{
		{
			{
				{
					// register: 9
					register int OrigNum;
					{
						// register: 6
						register int g;
					}
				}
			}
		}
	}
}


// address: 0x800942A8
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x800942EC
// size: 0xE
struct CCreatureAction *GetAction__C12CCreatureHdri(struct CCreatureHdr *this, int ActNum) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x8009437C
void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x800943EC
int GetSize__C12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 18
	register int Size;
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
		{
			// register: 2
			register int ThisSize;
		}
	}
}


// address: 0x80094458
void LoadDat__C13CTextFileInfoli(struct CTextFileInfo *this, long hnd, int size) {
	// address: 0xFFFFFFD8
	// size: 0xD
	auto char FName[13];
	// register: 16
	register unsigned char *Dest;
	// register: 17
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x8009458C
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x800945E4
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8009460C
void MakeFname__C13CTextFileInfoPcPCc(struct CTextFileInfo *this, char *Dest, char *Ext) {
}


// address: 0x80094654
long GetFile__C13CTextFileInfoPcUl(struct CTextFileInfo *this, char *Ext, unsigned long RamId) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	register long hnd;
}


// address: 0x800946F4
bool HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x80094788
void Un64__FPUcT0l(unsigned char *Src, unsigned char *Dest, long SizeBytes) {
	// register: 9
	register unsigned char *EndDest;
	// register: 7
	register unsigned long *BigDest;
	// register: 8
	register unsigned long Code;
	// register: 6
	register unsigned long Run;
	// register: 3
	register unsigned long BigCode;
}


// address: 0x8009485C
// size: 0x7C
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x80094890
void Load__7CScreeniii(struct CScreen *this, int Id, int tpx, int tpy) {
	// register: 8
	register unsigned char r;
	// register: 5
	register unsigned char g;
	// register: 6
	register unsigned char b;
	{
		{
			// register: 16
			// size: 0xC
			register struct FRAME_HDR *Fr;
			// address: 0xFFFFFDE0
			// size: 0x8
			auto struct RECT R;
			// register: 18
			// size: 0x8
			register struct PAL *Pal;
			// address: 0xFFFFFDE8
			// size: 0x200
			auto unsigned short MyPal[256];
			{
				// register: 5
				register int i;
				{
					// register: 16
					register int i;
					{
						// register: 11
						register int nocols;
						{
							// register: 10
							register int v;
							{
								// register: 2
								register unsigned short c;
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


// address: 0x80094BA4
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x80094BC8
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x80094EA8
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80094F24
void GetBoundingBox__6CBlockR7TextDatR4RECT(struct CBlock *this, struct TextDat *TDat, struct RECT *R) {
	// register: 18
	register int left;
	// register: 22
	register int right;
	// register: 17
	register int top;
	// register: 21
	register int bottom;
	{
		{
			// address: 0xFFFFFFC8
			// size: 0x8
			auto struct RECT Pr;
			{
				// register: 16
				register unsigned int f;
			}
		}
	}
}


// address: 0x80095080
void _GLOBAL__D_DatPool() {
}


// address: 0x800950D8
void _GLOBAL__I_DatPool() {
}



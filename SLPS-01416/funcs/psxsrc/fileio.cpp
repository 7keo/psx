// C:\diabpsx\PSXSRC\FILEIO.CPP

#include "types.h"

// address: 0x8008587C
// size: 0x14
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x800858CC
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x80085920
long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId) {
	// register: 17
	register int MemSize;
	// register: 17
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x80085A90
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x80085AF4
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x80085B14
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x80085BF4
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x80085CB8
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x80085D1C
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x80085DF8
bool FindFile__6FileIOPCcPc(struct FileIO *this, char *Name, char *Buffa) {
	{
		{
			// register: 19
			register bool Success;
			{
				{
					// register: 18
					register char *Path;
				}
			}
		}
	}
}


// address: 0x80085F0C
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x80085FB4
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8008600C
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x80086064
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x80086078
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}



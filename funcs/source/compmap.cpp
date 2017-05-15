// Path: C:\diabpsx\SOURCE\COMPMAP.CPP
// Addr: 0x80081608
struct CompLevelMaps* __13CompLevelMapsRC9CompClass(struct CompLevelMaps *this, struct CompClass *NewCompObj) {
}

// Path: C:\diabpsx\SOURCE\COMPMAP.CPP
// Addr: 0x80081674
void _._13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg) {
}

// Path: C:\diabpsx\SOURCE\COMPMAP.CPP
// Addr: 0x80081704
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
}

// Path: C:\diabpsx\SOURCE\COMPMAP.CPP
// Addr: 0x80081734
void InitAllMaps__13CompLevelMaps(struct CompLevelMaps *this) {
	int f;
}

// Path: C:\diabpsx\SOURCE\COMPMAP.CPP
// Addr: 0x80081788
struct DLevel* GetMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
}

// Path: C:\diabpsx\SOURCE\COMPMAP.CPP
// Addr: 0x80081804
void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Dl) {
}

// Path: C:\diabpsx\SOURCE\COMPMAP.CPP
// Addr: 0x800818A4
void ImportData__13CompLevelMapsP14CompressedLevs(struct CompLevelMaps *this, struct CompressedLevs *Levs) {
	int f;
}

// Path: C:\diabpsx\SOURCE\COMPMAP.CPP
// Addr: 0x80081950
int ExportData__13CompLevelMapsPUc(struct CompLevelMaps *this, unsigned char *U8Dest) {
	unsigned char *BinPtr;
	int f;
}

// Path: C:\diabpsx\SOURCE\COMPMAP.CPP
// Addr: 0x800819FC
void MakeSureMapXDecomped__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
	int f;
}

// Path: C:\diabpsx\SOURCE\COMPMAP.CPP
// Addr: 0x80081AA8
void Init__4AMap(struct AMap *this) {
}

// Path: C:\diabpsx\SOURCE\COMPMAP.CPP
// Addr: 0x80081B14
int WriteCompressed__4AMapPUcRC9CompClass(struct AMap *this, unsigned char *Dest, struct CompClass *CompObj) {
	unsigned char *Data;
}

// Path: C:\diabpsx\SOURCE\COMPMAP.CPP
// Addr: 0x80081B88
void SetCompData__4AMapPCUci(struct AMap *this, unsigned char *Data, int NewSize) {
	long NewHnd;
	unsigned char *Dest;
}

// Path: C:\diabpsx\SOURCE\COMPMAP.CPP
// Addr: 0x80081C78
struct DLevel* GetMap__4AMap(struct AMap *this) {
	struct DLevel *NewCurrLevel;
	long NewHnd;
}

// Path: C:\diabpsx\SOURCE\COMPMAP.CPP
// Addr: 0x80081D98
void ReleaseMap__4AMapP6DLevel(struct AMap *this, struct DLevel *Dl) {
}

// Path: C:\diabpsx\SOURCE\COMPMAP.CPP
// Addr: 0x80081E28
void CompressMap__4AMapRC9CompClass(struct AMap *this, struct CompClass *CompObj) {
	long NewHnd;
	unsigned char *Dest;
	struct DLevel *Dlev;
	long SplitHnd;
}

// Path: C:\diabpsx\SOURCE\COMPMAP.CPP
// Addr: 0x80081FEC
void DecompressMap__4AMapRC9CompClass(struct AMap *this, struct CompClass *CompObj) {
	long NewHnd;
	unsigned char *Dest;
	unsigned char *Src;
}


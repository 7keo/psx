// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x8009E3F4
void DaveLDummyPoll__Fv() {
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x8009E3FC
void DaveL__Fv() {
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x8009E424
void DoReflection__FP8POLY_FT4iii(struct POLY_FT4 *Ft4, int R, int G, int B) {
	unsigned char zV0;
	unsigned char zV2;
	unsigned char zH;
	unsigned char dH;
	unsigned char zV;
	unsigned char *s;
	unsigned char *d;
	unsigned char *Ft4m;
	short zX0;
	short zX1;
	int n;
	int xoffset;
	int yoffset;
	short zY;
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x8009E764
void mteleportfx__Fv() {
	int plr;
	int br;
	int OtPos;
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x8009EA78
void invistimer__Fv() {
	int plr;
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x8009EB50
void setUVparams__FP8POLY_FT4P9FRAME_HDR(struct POLY_FT4 *Ft4, struct FRAME_HDR *Fr) {
	int zU;
	int zV;
	int zW;
	int zH;
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x8009EBE0
void drawparticle__Fiiiiii(int x, int y, int scale, int anim, int colour, int OtPos) {
	int colour;
	struct TextDat *Dat;
	struct POLY_FT4 *Ft4;
	struct FRAME_HDR *Fr;
	unsigned char SpR;
	unsigned char SpG;
	unsigned char SpB;
	int w;
	int h;
	int f;
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x8009EDD8
void drawpolyF4__Fiiiiii(int x, int y, int w, int h, int colour, int OtPos) {
	int colour;
	int OtPos;
	struct POLY_F4 *F4;
	unsigned char SpR;
	unsigned char SpG;
	unsigned char SpB;
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x8009EF0C
void drawpolyG4__Fiiiiiiii(int x, int y, int w, int h1, int h2, int colour0, int colour1, int OtPos) {
	int colour0;
	int colour1;
	int OtPos;
	struct POLY_G4 *G4;
	unsigned char SpR0;
	unsigned char SpG0;
	unsigned char SpB0;
	unsigned char SpR1;
	unsigned char SpG1;
	unsigned char SpB1;
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x8009F0DC
void particlejump__Fii(int ScrX, int ScrY) {
	int n;
	int partactive;
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x8009F2AC
void doparticlejump__Fv() {
	int ScrX;
	int ScrY;
	int ScrXOff;
	int ScrYOff;
	int WorldX;
	int WorldY;
	struct CBlocks *gblocks;
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x8009F440
void StartPartJump__Fiiiii(int mi, int height, int scale, int colour, int OtPos) {
	int OtPos;
	int n;
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x8009F594
void MonstPartJump__Fi(int m) {
	int ScrYOff;
	int WorldX;
	int WorldY;
	struct CBlocks *gblocks;
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x8009F6B4
void doparticlechain__Fiiiiiiiiiiii(int sx, int sy, int dx, int dy, int count, int scale, int scaledec, int semitrans, int randomize, int colour, int OtPos, int source) {
	int scale;
	int randomize;
	int source;
	struct TextDat *Dat;
	struct POLY_FT4 *Ft4;
	unsigned char SpR;
	unsigned char SpG;
	unsigned char SpB;
	int x;
	int y;
	int br;
	int w;
	int h;
	int f;
	int c;
	int t;
	int rand;
	int xoffs;
	int yoffs;
	int xf;
	int yf;
	int dxf;
	int dyf;
	int dxabs;
	int dyabs;
	int divisor;
	int *partexecnum;
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x8009FA04
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
	int OtPos;
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x8009FAC0
void Teleportfx__Fiiiiiiii(int scrnx, int scrny, int width, int height, int scale, int colmask, int numpart, int OtPos) {
	int colmask;
	struct TextDat *Dat;
	struct POLY_FT4 *Ft4;
	unsigned char SpR;
	unsigned char SpG;
	unsigned char SpB;
	int w;
	int h;
	int x;
	int y;
	int f;
	int n;
	int randu;
	int randl;
	unsigned char Rmask;
	unsigned char Gmask;
	unsigned char Bmask;
	int rand[64];
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x8009FDC0
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	int t;
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x8009FFE8
void ParticleExp__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
	int OtPos;
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x800A0080
void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	struct RECT R;
	int ScrXOff;
	int ScrYOff;
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x800A01A4
void healFX__Fv() {
	int plr;
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x800A02E0
void HealStart__Fi(int plr) {
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x800A0314
void HealotherStart__Fi(int plr) {
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x800A034C
void TeleStart__Fi(int plr) {
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x800A040C
void TeleStop__Fi(int plr) {
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x800A0438
void PhaseStart__Fi(int plr) {
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x800A046C
void PhaseEnd__Fi(int plr) {
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x800A0498
void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	struct RECT R;
	struct CBlocks *TheBlocks;
	int ScrXOff;
	int ScrYOff;
	int OtPos;
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x800A0680
void ApocaStart__Fi(int plr) {
}

// Path: C:\diabpsx\PSXSRC\DAVEL.CPP
// Addr: 0x800A06E4
void DaveLTask__FP4TASK(struct TASK *T) {
}


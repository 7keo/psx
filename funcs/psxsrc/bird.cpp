// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800AB6B0
void SetBirdFrig__Fb(unknown f) {
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800AB6E4
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	int wx;
	int wy;
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800AB73C
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
	int offsx;
	int offsy;
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800AB894
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	int x;
	int y;
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800AB910
unknown CheckDist__Fii(int x, int y) {
	int x1;
	int y1;
	int i;
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800AB9F8
int BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	int scared;
	int p;
	int i;
	struct PlayerStruct *player;
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800ABB24
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	int n;
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800ABB78
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	int nd;
	int x;
	int y;
	struct Perch *p;
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800ABD4C
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800ABE50
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800ABEB8
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800ABF3C
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800ABFE0
void CheckDirOk__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	int x;
	int y;
	int ofx;
	int ofy;
	unknown posok;
	int d;
	int i;
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800AC0F0
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800AC190
void BIRD_StartFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	struct BIRDSTRUCT *leader;
	int i;
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800AC21C
void BIRD_DoFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	int pnum;
	int x;
	int y;
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800AC514
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800AC520
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800AC58C
void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	struct BIRDSTRUCT *b;
	int i;
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800AC674
void ProcessFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	struct BIRDSTRUCT *leader;
	int x;
	int y;
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800AC764
void InitBird__Fv() {
	struct BIRDSTRUCT *b;
	int i;
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800AC838
void ProcessBird__Fv() {
	struct BIRDSTRUCT *b;
	int i;
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800AC97C
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	int banim;
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800ACA14
void bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4, int height) {
	int x;
	int y;
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800ACB44
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	struct CBlocks *gb;
	struct POLY_FT4 *Ft4;
	struct TextDat *Dat;
	int ot;
}

// Path: C:\diabpsx\PSXSRC\BIRD.CPP
// Addr: 0x800ACC6C
void DrawLBird__Fv() {
	struct BIRDSTRUCT *ThisBird;
	struct POLY_FT4 *Ft4;
	struct CBlocks *gblock;
	int ScrXOff;
	int ScrYOff;
	int x;
	int y;
	struct RECT R;
	struct TextDat *Dat;
	int i;
	int ot;
}


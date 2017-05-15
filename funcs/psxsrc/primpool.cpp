// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x800837F4
unsigned char PRIM_Open__FiiiP10SCREEN_ENVUl(int Prims, int OtSize, int Depth, struct SCREEN_ENV *Scr, unsigned long MemType) {
	unsigned long MemType;
	int f;
}

// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x80083910
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}

// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x800839EC
void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth) {
	struct DR_MODE *DrArea;
	struct RECT RealRect;
}

// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x80083B14
unsigned char PRIM_GetCurrentScreen__Fv() {
}

// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x80083B20
void PRIM_FullScreen__Fi(int Depth) {
	struct RECT R;
}

// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x80083B5C
void PRIM_Flush__Fv() {
	struct PRIM_BUFFER *Pb;
}

// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x80083D8C
unsigned long* PRIM_GetCurrentOtList__Fv() {
}

// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x80083D98
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}

// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x80083DD4
unsigned char ClearedYet__Fv() {
}

// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x80083DE0
void PrimDrawSycnCallBack() {
}

// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x80083E00
void SendDispEnv__Fv() {
}

// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x80083E24
struct POLY_F4* PRIM_GetNextPolyF4__Fv() {
	struct POLY_F4 *RetPage;
}

// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x80083E3C
struct POLY_FT4* PRIM_GetNextPolyFt4__Fv() {
	struct POLY_FT4 *RetPage;
}

// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x80083E54
struct POLY_GT4* PRIM_GetNextPolyGt4__Fv() {
	struct POLY_GT4 *RetPage;
}

// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x80083E6C
struct POLY_G4* PRIM_GetNextPolyG4__Fv() {
	struct POLY_G4 *RetPage;
}

// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x80083E84
struct POLY_F3* PRIM_GetNextPolyF3__Fv() {
	struct POLY_F3 *RetPage;
}

// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x80083E9C
struct DR_MODE* PRIM_GetNextDrArea__Fv() {
	struct DR_MODE *RetPage;
}

// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x80083EB4
unknown ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}

// Path: C:\diabpsx\PSXSRC\PRIMPOOL.CPP
// Addr: 0x80083FC8
unknown IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


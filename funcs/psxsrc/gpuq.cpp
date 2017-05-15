// Path: C:\diabpsx\PSXSRC\GPUQ.CPP
// Addr: 0x800833B0
void CheckMaxArgs__Fv() {
}

// Path: C:\diabpsx\PSXSRC\GPUQ.CPP
// Addr: 0x800833E4
unsigned char GPUQ_InitModule__Fv() {
}

// Path: C:\diabpsx\PSXSRC\GPUQ.CPP
// Addr: 0x800833F0
void GPUQ_FlushQ__Fv() {
	int f;
	struct LOAD_IMAGE_ARGS *Img;
	void *ImgMem;
	unsigned char GalRet;
}

// Path: C:\diabpsx\PSXSRC\GPUQ.CPP
// Addr: 0x80083564
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	struct LOAD_IMAGE_ARGS *Args;
}

// Path: C:\diabpsx\PSXSRC\GPUQ.CPP
// Addr: 0x80083618
void GPUQ_DiscardHandle__Fl(long hnd) {
	int f;
}

// Path: C:\diabpsx\PSXSRC\GPUQ.CPP
// Addr: 0x800836B8
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	struct LOAD_IMAGE_ARGS *Args;
}

// Path: C:\diabpsx\PSXSRC\GPUQ.CPP
// Addr: 0x80083754
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	struct LOAD_IMAGE_ARGS *Args;
}


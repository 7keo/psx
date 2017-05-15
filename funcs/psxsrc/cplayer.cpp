// Path: C:\diabpsx\PSXSRC\CPLAYER.CPP
// Addr: 0x80095854
struct CPlayer* __7CPlayerbii(struct CPlayer *this, unknown Town, int mPlayerNum, int NewNumOfPlayers) {
	int SizeToAlloc;
	long hnd;
}

// Path: C:\diabpsx\PSXSRC\CPLAYER.CPP
// Addr: 0x800959AC
void _._7CPlayer(struct CPlayer *this, int __in_chrg) {
}

// Path: C:\diabpsx\PSXSRC\CPLAYER.CPP
// Addr: 0x80095A3C
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}

// Path: C:\diabpsx\PSXSRC\CPLAYER.CPP
// Addr: 0x80095AA8
void SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg) {
	int ScrX;
	int ScrY;
	int WorldX;
	int WorldY;
	int NWorldX;
	int NWorldY;
	int wtime;
	unknown ok;
}

// Path: C:\diabpsx\PSXSRC\CPLAYER.CPP
// Addr: 0x80095E8C
void Print__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg) {
	int ScrXOff;
	int ScrYOff;
	int Action;
	int WorldX;
	int WorldY;
	struct POLY_FT4 *Ft4;
	int Frame;
	int FrmNum;
	struct RECT R;
	struct POLY_FT4 *ShadFt4;
	int Frame;
	struct RECT R;
	int OtPos;
	struct POLY_FT4 *ShadFt4;
	int zX;
	int zY;
}

// Path: C:\diabpsx\PSXSRC\CPLAYER.CPP
// Addr: 0x800963C4
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	int RetVal;
}

// Path: C:\diabpsx\PSXSRC\CPLAYER.CPP
// Addr: 0x80096448
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}

// Path: C:\diabpsx\PSXSRC\CPLAYER.CPP
// Addr: 0x800964CC
void Init__7CPlayer(struct CPlayer *this) {
}

// Path: C:\diabpsx\PSXSRC\CPLAYER.CPP
// Addr: 0x800964D4
void Dump__7CPlayer(struct CPlayer *this) {
}

// Path: C:\diabpsx\PSXSRC\CPLAYER.CPP
// Addr: 0x800964DC
void LoadThis__7CPlayeri(struct CPlayer *this, int Id) {
}

// Path: C:\diabpsx\PSXSRC\CPLAYER.CPP
// Addr: 0x8009654C
void NonBlockingLoadNewGFX__7CPlayeri(struct CPlayer *this, int Id) {
	struct PlayerParam *Pp;
}

// Path: C:\diabpsx\PSXSRC\CPLAYER.CPP
// Addr: 0x800965B8
void FilthyTask__FP4TASK(struct TASK *T) {
	struct CPlayer *ThePlayer;
	char FName[15];
	int Id;
	struct PlayerParam *Pp;
}


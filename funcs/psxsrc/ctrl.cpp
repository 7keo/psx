// Path: C:\diabpsx\PSXSRC\CTRL.CPP
// Addr: 0x8009C548
void SetDemoKeys__FPi(int *buffer) {
	struct KEY_ASSIGNS *ta;
	int i;
}

// Path: C:\diabpsx\PSXSRC\CTRL.CPP
// Addr: 0x8009C620
void RestoreDemoKeys__FPi(int *buffer) {
	struct KEY_ASSIGNS *ta;
	int i;
}

// Path: C:\diabpsx\PSXSRC\CTRL.CPP
// Addr: 0x8009C6B0
char* get_action_str__Fii(int pval, int combo) {
	struct KEY_ASSIGNS *ac;
	int i;
}

// Path: C:\diabpsx\PSXSRC\CTRL.CPP
// Addr: 0x8009C728
int get_key_pad__Fi(int n) {
	int i;
	struct pad_assigns *pa;
}

// Path: C:\diabpsx\PSXSRC\CTRL.CPP
// Addr: 0x8009C760
unknown checkvalid__Fv() {
	int start;
	int end;
	int i;
}

// Path: C:\diabpsx\PSXSRC\CTRL.CPP
// Addr: 0x8009C7C4
unknown RemoveCtrlScreen__Fv() {
}

// Path: C:\diabpsx\PSXSRC\CTRL.CPP
// Addr: 0x8009C820
unsigned char Init_ctrl_pos__Fv() {
}

// Path: C:\diabpsx\PSXSRC\CTRL.CPP
// Addr: 0x8009C8D8
int remove_padval__Fi(int p) {
	int i;
}

// Path: C:\diabpsx\PSXSRC\CTRL.CPP
// Addr: 0x8009C918
int remove_comboval__Fib(int p, unknown all) {
	int n;
	int i;
}

// Path: C:\diabpsx\PSXSRC\CTRL.CPP
// Addr: 0x8009C960
unsigned char set_buttons__Fii(int cline, int n) {
	struct KEY_ASSIGNS *ta;
	int cval;
	int i;
	int p;
}

// Path: C:\diabpsx\PSXSRC\CTRL.CPP
// Addr: 0x8009CAD8
void restore_controller_settings__F8CTRL_SET(enum CTRL_SET s) {
	struct KEY_ASSIGNS *ta;
}

// Path: C:\diabpsx\PSXSRC\CTRL.CPP
// Addr: 0x8009CB7C
unknown only_one_button__Fi(int p) {
	int hand;
	int count;
}

// Path: C:\diabpsx\PSXSRC\CTRL.CPP
// Addr: 0x8009CBA8
unsigned char main_ctrl_setup__Fv() {
	struct CPad *Pad;
	int lv;
}

// Path: C:\diabpsx\PSXSRC\CTRL.CPP
// Addr: 0x8009D084
void PrintCtrlString__FiiUcic(int x, int y, unsigned char cjustflag, int str_num, int col) {
	struct KEY_ASSIGNS *ta;
	int i;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	int str;
	int len;
	int x1;
	int x2;
	int nlen;
	int otpos;
}

// Path: C:\diabpsx\PSXSRC\CTRL.CPP
// Addr: 0x8009D5D8
void DrawCtrlSetup__Fv() {
	int i;
	int pnum;
	int otpos;
	int oldDot;
	int OldPrintOT;
	int lena;
	int len;
}

// Path: C:\diabpsx\PSXSRC\CTRL.CPP
// Addr: 0x8009DAD8
void _GLOBAL_.D.ctrlflag() {
}

// Path: C:\diabpsx\PSXSRC\CTRL.CPP
// Addr: 0x8009DB00
void _GLOBAL_.I.ctrlflag() {
}


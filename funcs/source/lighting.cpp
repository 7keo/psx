int veclen2__Fii(int ix, int iy) {
	int t;
}

void set_light_bands__Fv() {
	int v;
	int y;
	unsigned char* l;
}

void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
	unsigned char d_g;
	unsigned char d_b;
}

void SetWeirdFX__Fv() {
}

void DoLighting__Fiiii(int nXPos, int nYPos, int nRadius, int Lnum) {
	int xoff;
	int yoff;
	int x;
	int y;
	int v;
	int colour_mask;
	int shift_mask;
	int shake;
	int light_x;
	int light_y;
	int block_x;
	int block_y;
	int dist_y;
	int max_x;
	int mult;
	int mult_st;
	int radius_block;
	int scr_x;
	int scr_y;
	int temp_x;
	int temp_y;
	int weirdy;
	int cont;
}

void DoUnLight__Fv() {
	int x;
	int y;
	int max_x;
	int max_y;
	int nXPos;
	int nYPos;
	unsigned char* r;
	unsigned char* g;
	unsigned char* b;
	int radius_block_x;
	int radius_block_y;
}

void DoUnVision__Fiiii(int nXPos, int nYPos, int nRadius, int num) {
	int i;
	int j;
	int x1;
	int y1;
	int x2;
	int y2;
	int vis_flag;
}

void DoVision__FiiiUcUc(int nXPos, int nYPos, int nRadius, unsigned char doautomap, int visible) {
	int nCrawlX;
	int nCrawlY;
	int nLineLen;
	int nBlockerFlag;
	int j;
	int k;
	int v;
	int x1adj;
	int x2adj;
	int y1adj;
	int y2adj;
	int vis_flag;
}

void FreeLightTable__Fv() {
}

void InitLightTable__Fv() {
}

void MakeLightTable__Fv() {
}

void InitLightMax__Fv() {
}

void InitLighting__Fv() {
	int i;
}

int AddLight__Fiii(int x, int y, int r) {
	int lid;
	LightListStruct2 ll;
}

void AddUnLight__Fi(int i) {
}

void ChangeLightRadius__Fii(int i, int r) {
}

void ChangeLightXY__Fiii(int i, int x, int y) {
	LightListStruct2 ll;
}

void light_fix__Fi(int i) {
}

void ChangeLightOff__Fiii(int i, int x, int y) {
	LightListStruct2 ll;
}

void ChangeLight__Fiiii(int i, int x, int y, int r) {
	LightListStruct2 ll;
}

void ChangeLightColour__Fii(int i, int c) {
	LightListStruct2 ll;
}

void ProcessLightList__Fv() {
	int i;
	int j;
	unsigned char temp;
	LightListStruct2 ll;
}

void SavePreLighting__Fv() {
}

void InitVision__Fv() {
	int i;
}

int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	int vid;
	LightListStruct vl;
}

void ChangeVisionRadius__Fii(int id, int r) {
	int i;
}

void ChangeVisionXY__Fiii(int id, int x, int y) {
	int i;
	LightListStruct vl;
}

void ProcessVisionList__Fv() {
	int i;
	unsigned char delflag;
	LightListStruct vl;
}

int veclen2__Fii(int ix, int iy) {
	int t;
}

void set_light_bands__Fv() {
	int v;
	int y;
	unsigned char* l;
}

void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
	unsigned char d_g;
	unsigned char d_b;
}

void SetWeirdFX__Fv() {
}

void DoLighting__Fiiii(int nXPos, int nYPos, int nRadius, int Lnum) {
	int xoff;
	int yoff;
	int x;
	int y;
	int v;
	int colour_mask;
	int shift_mask;
	int shake;
	int light_x;
	int light_y;
	int block_x;
	int block_y;
	int dist_y;
	int max_x;
	int mult;
	int mult_st;
	int radius_block;
	int scr_x;
	int scr_y;
	int temp_x;
	int temp_y;
	int weirdy;
	int cont;
}

void DoUnLight__Fv() {
	int x;
	int y;
	int max_x;
	int max_y;
	int nXPos;
	int nYPos;
	unsigned char* r;
	unsigned char* g;
	unsigned char* b;
	int radius_block_x;
	int radius_block_y;
}

void DoUnVision__Fiiii(int nXPos, int nYPos, int nRadius, int num) {
	int i;
	int j;
	int x1;
	int y1;
	int x2;
	int y2;
	int vis_flag;
}

void DoVision__FiiiUcUc(int nXPos, int nYPos, int nRadius, unsigned char doautomap, int visible) {
	int nCrawlX;
	int nCrawlY;
	int nLineLen;
	int nBlockerFlag;
	int j;
	int k;
	int v;
	int x1adj;
	int x2adj;
	int y1adj;
	int y2adj;
	int vis_flag;
}

void FreeLightTable__Fv() {
}

void InitLightTable__Fv() {
}

void MakeLightTable__Fv() {
}

void InitLightMax__Fv() {
}

void InitLighting__Fv() {
	int i;
}

int AddLight__Fiii(int x, int y, int r) {
	int lid;
	LightListStruct2 ll;
}

void AddUnLight__Fi(int i) {
}

void ChangeLightRadius__Fii(int i, int r) {
}

void ChangeLightXY__Fiii(int i, int x, int y) {
	LightListStruct2 ll;
}

void light_fix__Fi(int i) {
}

void ChangeLightOff__Fiii(int i, int x, int y) {
	LightListStruct2 ll;
}

void ChangeLight__Fiiii(int i, int x, int y, int r) {
	LightListStruct2 ll;
}

void ChangeLightColour__Fii(int i, int c) {
	LightListStruct2 ll;
}

void ProcessLightList__Fv() {
	int i;
	int j;
	unsigned char temp;
	LightListStruct2 ll;
}

void SavePreLighting__Fv() {
}

void InitVision__Fv() {
	int i;
}

int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	int vid;
	LightListStruct vl;
}

void ChangeVisionRadius__Fii(int id, int r) {
	int i;
}

void ChangeVisionXY__Fiii(int id, int x, int y) {
	int i;
	LightListStruct vl;
}

void ProcessVisionList__Fv() {
	int i;
	unsigned char delflag;
	LightListStruct vl;
}


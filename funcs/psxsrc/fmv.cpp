// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80155E1C
void _cd_seek(int sec) {
	struct CdlFILE RetFile;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80155E54
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80155E7C
void flush_cdstream() {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80155ED0
void reset_cdstream() {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80155F00
void kill_stream_handlers() {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80155F30
void stream_cdready_handler(unsigned char status, unsigned char *result) {
	unsigned long OldGp;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80156184
void install_stream_handlers() {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x801561C0
void cdstream_service() {
	int timeout_occured;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x801562B0
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x801563C8
int cdstream_is_last_chunk() {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x801563E0
void cdstream_discard_chunk() {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80156500
void close_cdstream() {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80156540
void wait_cdstream() {
	int start_wait;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x801565F8
int open_cdstream(char *fname, int secoffs, int seclen) {
	int len;
	struct CdlFILE RetFile;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80156720
int set_mdec_img_buffer(unsigned char *p) {
	int i;
	int tsz;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80156754
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
	int h;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x801568B0
void DCT_out_handler() {
	unsigned long OldGp;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80156960
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x801569D0
void init_mdec_buffer(char *buf, int size) {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x801569EC
int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct) {
	int xx;
	int x;
	int y;
	int xs;
	int ys;
	int w;
	int h;
	int n;
	int ox;
	int oy;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80156DD4
void rebuild_mdec_polys(int x, int y) {
	int px;
	int py;
	struct POLY_FT4 *p;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80156FA8
void clear_mdec_frame() {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80156FB4
void draw_mdec_polys(int bright) {
	int i;
	unsigned char cdbuf;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x8015732C
void invalidate_mdec_frame() {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80157340
int is_frame_decoded() {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x8015734C
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	int bx1;
	int by1;
	int bx2;
	int by2;
	int correct;
	struct RECT r;
	int i;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x801576DC
void set_mdec_poly_bright(int br) {
	int a;
	int b;
	int c;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80157744
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80157794
void init_mdec_audio(int rate) {
	struct SpuCommonAttr comm_attr;
	int f;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x801578AC
void kill_mdec_audio() {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x801578DC
void stop_mdec_audio() {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80157900
void play_mdec_audio(unsigned char *data, struct asec *h) {
	int i;
	int b;
	int offs;
	struct SpuVoiceAttr voice_attr;
	unsigned char *dp;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80157C34
void set_mdec_audio_volume(short vol) {
	int i;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80157D00
void resync_audio() {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80157D10
void stop_mdec_stream() {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80157D54
void dequeue_stream() {
	struct _mdecanim *a;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80157E40
void dequeue_animation() {
	struct _mdecanim *a;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80157FF0
void decode_mdec_stream(int frames_elapsed) {
	unsigned char *data;
	struct strheader *h;
	int req_frame;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x801581D0
void play_mdec_stream(char *filename, int speed, int start, int end) {
	struct _mdecanim *a;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x8015826C
void clear_mdec_queue() {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80158298
void StrClearVRAM() {
	struct RECT clrRect;
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x80158358
short PlayFMVOverLay(char *filename, int w, int h) {
}

// Path: C:\diabpsx\PSXSRC\FMV.CPP
// Addr: 0x801583E0
void LoPlayFMVOverLay() {
	int start;
	int end;
	int start_time;
	int br;
	int fade;
	int user_quit;
	struct RECT r;
	struct CPad *P1;
	struct CPad *P2;
	char *filename;
	int w;
	int h;
	long vm;
	int i;
}


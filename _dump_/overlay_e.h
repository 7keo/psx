#include "types.h"

// === [ Overlay ID e ] ===

// address: 0x8013B910
// size: 0x19000
extern unsigned char map_buf[102400];

// address: 0x80154910
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x80154964
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x80154FA4
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x801555E4
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x801555F4
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x80155C34
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x80155C5C
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x80155D9C
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

// address: 0x80155E1C
void _cd_seek(int sec) {
	struct CdlFILE RetFile;
}


// address: 0x80155E54
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x80155E7C
void flush_cdstream() {
}


// address: 0x80155ED0
void reset_cdstream() {
}


// address: 0x80155F00
void kill_stream_handlers() {
}


// address: 0x80155F30
void stream_cdready_handler(unsigned char status, unsigned char *result, int idx, int i, int sec, struct CdlLOC subcode[3], unsigned long OldGp) {
}


// address: 0x80156184
void install_stream_handlers() {
}


// address: 0x801561C0
void cdstream_service() {
	int timeout_occured;
}


// address: 0x801562B0
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
}


// address: 0x801563C8
int cdstream_is_last_chunk() {
}


// address: 0x801563E0
void cdstream_discard_chunk() {
}


// address: 0x80156500
void close_cdstream() {
}


// address: 0x80156540
void wait_cdstream() {
	int start_wait;
}


// address: 0x801565F8
int open_cdstream(char *fname, int secoffs, int seclen) {
	int len;
	struct CdlFILE RetFile;
}


// address: 0x80156720
int set_mdec_img_buffer(unsigned char *p) {
	int i;
	int tsz;
}


// address: 0x80156754
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
}


// address: 0x801568B0
void DCT_out_handler() {
	unsigned long OldGp;
}


// address: 0x80156960
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x801569D0
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x801569EC
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


// address: 0x80156DD4
void rebuild_mdec_polys(int x, int y) {
	int px;
	int py;
	struct POLY_FT4 *p;
}


// address: 0x80156FA8
void clear_mdec_frame() {
}


// address: 0x80156FB4
void draw_mdec_polys(int bright) {
	int i;
	unsigned char cdbuf;
}


// address: 0x8015732C
void invalidate_mdec_frame() {
}


// address: 0x80157340
int is_frame_decoded() {
}


// address: 0x8015734C
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	struct RECT r;
	int i;
}


// address: 0x801576DC
void set_mdec_poly_bright(int br) {
	int a;
	int b;
	int c;
}


// address: 0x80157744
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x80157794
void init_mdec_audio(int rate) {
	struct SpuCommonAttr comm_attr;
	{
		int f;
	}
}


// address: 0x801578AC
void kill_mdec_audio() {
}


// address: 0x801578DC
void stop_mdec_audio() {
}


// address: 0x80157900
void play_mdec_audio(unsigned char *data, struct asec *h) {
	int i;
	int b;
	int offs;
	struct SpuVoiceAttr voice_attr;
	unsigned char *dp;
}


// address: 0x80157C34
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	int i;
}


// address: 0x80157D00
void resync_audio() {
}


// address: 0x80157D10
void stop_mdec_stream() {
}


// address: 0x80157D54
void dequeue_stream() {
	struct _mdecanim *a;
}


// address: 0x80157E40
void dequeue_animation() {
	struct _mdecanim *a;
}


// address: 0x80157FF0
void decode_mdec_stream(int frames_elapsed) {
	unsigned char *data;
	struct strheader *h;
	int req_frame;
}


// address: 0x801581D0
void play_mdec_stream(char *filename, int speed, int start, int end) {
	struct _mdecanim *a;
}


// address: 0x8015826C
void clear_mdec_queue() {
}


// address: 0x80158298
void StrClearVRAM() {
	struct RECT clrRect;
}


// address: 0x80158358
short PlayFMVOverLay(char *filename, int w, int h) {
}


// address: 0x801583E0
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
	{
		int i;
	}
}


// address: 0x80158840
unsigned short GetDown__C4CPad(struct CPad *this) {
}



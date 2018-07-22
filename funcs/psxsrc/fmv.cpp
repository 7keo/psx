// C:\diabpsx\PSXSRC\FMV.CPP

#include "types.h"

// address: 0x80155E1C
void _cd_seek(int sec) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct CdlFILE RetFile;
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
	// register: 16
	register int timeout_occured;
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
	// address: 0xFFFFFFF0
	auto int start_wait;
}


// address: 0x801565F8
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
	// address: 0xFFFFFFD8
	// size: 0x18
	auto struct CdlFILE RetFile;
}


// address: 0x80156720
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x80156754
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
}


// address: 0x801568B0
void DCT_out_handler() {
	// register: 17
	register unsigned long OldGp;
}


// address: 0x80156960
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x801569D0
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x801569EC
int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct) {
	// register: 30
	register int xx;
	// register: 20
	register int x;
	// register: 22
	register int y;
	// register: 23
	register int xs;
	// address: 0xFFFFFFA8
	auto int ys;
	// register: 19
	register int w;
	// register: 21
	register int h;
	// address: 0xFFFFFFB0
	auto int n;
	// address: 0xFFFFFFB8
	auto int ox;
	// address: 0xFFFFFFC0
	auto int oy;
}


// address: 0x80156DD4
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x80156FA8
void clear_mdec_frame() {
}


// address: 0x80156FB4
void draw_mdec_polys(int bright) {
	// register: 10
	register int i;
	// register: 17
	register unsigned char cdbuf;
}


// address: 0x8015732C
void invalidate_mdec_frame() {
}


// address: 0x80157340
int is_frame_decoded() {
}


// address: 0x8015734C
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT r;
	// register: 9
	register int i;
}


// address: 0x801576DC
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x80157744
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x80157794
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
	{
		// register: 16
		register int f;
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
	// register: 16
	register int i;
	// register: 6
	register int b;
	// register: 19
	register int offs;
	// address: 0xFFFFFF98
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 4
	register unsigned char *dp;
}


// address: 0x80157C34
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x80157D00
void resync_audio() {
}


// address: 0x80157D10
void stop_mdec_stream() {
}


// address: 0x80157D54
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80157E40
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80157FF0
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x801581D0
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8015826C
void clear_mdec_queue() {
}


// address: 0x80158298
void StrClearVRAM() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x80158358
short PlayFMVOverLay(char *filename, int w, int h) {
}


// address: 0x801583E0
void LoPlayFMVOverLay() {
	// register: 23
	register int start;
	// register: 30
	register int end;
	// register: 20
	register int start_time;
	// register: 19
	register int br;
	// register: 21
	register int fade;
	// register: 2
	register int user_quit;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT r;
	// register: 17
	// size: 0xEC
	register struct CPad *P1;
	// register: 18
	// size: 0xEC
	register struct CPad *P2;
	// register: 17
	register char *filename;
	// register: 18
	register int w;
	// register: 22
	register int h;
	// register: 3
	register long vm;
	{
		// register: 16
		register int i;
	}
}



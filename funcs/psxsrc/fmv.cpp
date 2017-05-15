void _cd_seek(int sec) {
	CdlFILE RetFile;
}

void init_cdstream(int chunksize, unsigned char* buf, int bufsize) {
}

void flush_cdstream() {
}

void reset_cdstream() {
}

void kill_stream_handlers() {
}

void stream_cdready_handler(unsigned char status, unsigned char* result) {
	unsigned long OldGp;
}

void install_stream_handlers() {
}

void cdstream_service() {
	int timeout_occured;
}

int cdstream_get_chunk(unsigned char** data, strheader h) {
}

int cdstream_is_last_chunk() {
}

void cdstream_discard_chunk() {
}

void close_cdstream() {
}

void wait_cdstream() {
	int start_wait;
}

int open_cdstream(char* fname, int secoffs, int seclen) {
	int len;
	CdlFILE RetFile;
}

int set_mdec_img_buffer(unsigned char* p) {
	int i;
	int tsz;
}

void start_mdec_decode(unsigned char* data, int x, int y, int w, int h) {
	int h;
}

void DCT_out_handler() {
	unsigned long OldGp;
}

void init_mdec(unsigned char* vlc_buffer, unsigned char* vlc_table) {
}

void init_mdec_buffer(char* buf, int size) {
}

int split_poly_area(OBJ_PFUNC p, OBJ_PFUNC bp, int offs, LPCRECT r, int sx, int sy, int correct) {
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

void rebuild_mdec_polys(int x, int y) {
	int px;
	int py;
	OBJ_PFUNC p;
}

void clear_mdec_frame() {
}

void draw_mdec_polys(int bright) {
	int i;
	unsigned char cdbuf;
}

void invalidate_mdec_frame() {
}

int is_frame_decoded() {
}

void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	int bx1;
	int by1;
	int bx2;
	int by2;
	int correct;
	LPCRECT r;
	int i;
}

void set_mdec_poly_bright(int br) {
	int a;
	int b;
	int c;
}

int init_mdec_stream(unsigned char* buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}

void init_mdec_audio(int rate) {
	SpuCommonAttr comm_attr;
	int f;
}

void kill_mdec_audio() {
}

void stop_mdec_audio() {
}

void play_mdec_audio(unsigned char* data, asec h) {
	int i;
	int b;
	int offs;
	SpuVoiceAttr voice_attr;
	unsigned char* dp;
}

void set_mdec_audio_volume(short vol) {
	int i;
}

void resync_audio() {
}

void stop_mdec_stream() {
}

void dequeue_stream() {
	mdecanim a;
}

void dequeue_animation() {
	mdecanim a;
}

void decode_mdec_stream(int frames_elapsed) {
	unsigned char* data;
	strheader h;
	int req_frame;
}

void play_mdec_stream(char* filename, int speed, int start, int end) {
	mdecanim a;
}

void clear_mdec_queue() {
}

void StrClearVRAM() {
	LPCRECT clrRect;
}

short PlayFMVOverLay(char* filename, int w, int h) {
}

void LoPlayFMVOverLay() {
	int start;
	int end;
	int start_time;
	int br;
	int fade;
	int user_quit;
	LPCRECT r;
	CPad P1;
	CPad P2;
	char* filename;
	int w;
	int h;
	long vm;
	int i;
}

void _cd_seek(int sec) {
	CdlFILE RetFile;
}

void init_cdstream(int chunksize, unsigned char* buf, int bufsize) {
}

void flush_cdstream() {
}

void reset_cdstream() {
}

void kill_stream_handlers() {
}

void stream_cdready_handler(unsigned char status, unsigned char* result) {
	unsigned long OldGp;
}

void install_stream_handlers() {
}

void cdstream_service() {
	int timeout_occured;
}

int cdstream_get_chunk(unsigned char** data, strheader h) {
}

int cdstream_is_last_chunk() {
}

void cdstream_discard_chunk() {
}

void close_cdstream() {
}

void wait_cdstream() {
	int start_wait;
}

int open_cdstream(char* fname, int secoffs, int seclen) {
	int len;
	CdlFILE RetFile;
}

int set_mdec_img_buffer(unsigned char* p) {
	int i;
	int tsz;
}

void start_mdec_decode(unsigned char* data, int x, int y, int w, int h) {
	int h;
}

void DCT_out_handler() {
	unsigned long OldGp;
}

void init_mdec(unsigned char* vlc_buffer, unsigned char* vlc_table) {
}

void init_mdec_buffer(char* buf, int size) {
}

int split_poly_area(OBJ_PFUNC p, OBJ_PFUNC bp, int offs, LPCRECT r, int sx, int sy, int correct) {
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

void rebuild_mdec_polys(int x, int y) {
	int px;
	int py;
	OBJ_PFUNC p;
}

void clear_mdec_frame() {
}

void draw_mdec_polys(int bright) {
	int i;
	unsigned char cdbuf;
}

void invalidate_mdec_frame() {
}

int is_frame_decoded() {
}

void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	int bx1;
	int by1;
	int bx2;
	int by2;
	int correct;
	LPCRECT r;
	int i;
}

void set_mdec_poly_bright(int br) {
	int a;
	int b;
	int c;
}

int init_mdec_stream(unsigned char* buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}

void init_mdec_audio(int rate) {
	SpuCommonAttr comm_attr;
	int f;
}

void kill_mdec_audio() {
}

void stop_mdec_audio() {
}

void play_mdec_audio(unsigned char* data, asec h) {
	int i;
	int b;
	int offs;
	SpuVoiceAttr voice_attr;
	unsigned char* dp;
}

void set_mdec_audio_volume(short vol) {
	int i;
}

void resync_audio() {
}

void stop_mdec_stream() {
}

void dequeue_stream() {
	mdecanim a;
}

void dequeue_animation() {
	mdecanim a;
}

void decode_mdec_stream(int frames_elapsed) {
	unsigned char* data;
	strheader h;
	int req_frame;
}

void play_mdec_stream(char* filename, int speed, int start, int end) {
	mdecanim a;
}

void clear_mdec_queue() {
}

void StrClearVRAM() {
	LPCRECT clrRect;
}

short PlayFMVOverLay(char* filename, int w, int h) {
}

void LoPlayFMVOverLay() {
	int start;
	int end;
	int start_time;
	int br;
	int fade;
	int user_quit;
	LPCRECT r;
	CPad P1;
	CPad P2;
	char* filename;
	int w;
	int h;
	long vm;
	int i;
}


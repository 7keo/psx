void endian_swap__FPUci(unsigned char* b, int byts) {
	unsigned char t;
}

void sjis_endian_swap__FPUci(unsigned char* b, int byts) {
	unsigned char t;
}

unsigned short to_sjis__Fc(char asc) {
	sjis sp;
}

char to_ascii__FUs(unsigned short sjis) {
	sjis sp;
}

void ascii_to_sjis__FPUcPUs(unsigned char* asc, unsigned short* sjis) {
}

int is_sjis__FPUc(unsigned char* buf) {
}

int sjis_to_ascii__FPUsPc(unsigned short* sjis, char* asc) {
}

void read_card_directory__Fi(int card_number) {
	char path[80];
	DIRENTRY dir;
	int i;
	int fh;
	int r;
}

int test_card_format__Fi(int card_number) {
}

int checksum_data__FPci(char* buf, int size) {
	int chk;
}

int delete_card_file__Fii(int card_number, int file) {
	char path[80];
}

int read_card_file__FiiiPc(int card_number, int file, int id, char* buf) {
	int okay;
	int tries;
	int fd;
	int r;
	int size;
	int checksumerror;
	file_header h;
	char path[80];
}

int format_card__Fi(int card_number) {
	char path[80];
}

int write_card_file__FiiPcT2PUcPUsiT4(int card_number, int id, char* name, char* title, unsigned char* icon, unsigned short* clut, int size, unsigned char* buf) {
	unsigned short* clut;
	int size;
	unsigned char* buf;
	file_header h;
	int fd;
	int failed;
	int e;
	char path[80];
	int Loop;
}

void new_card__Fi(int card_number) {
}

void service_card__Fi(int card_number) {
	int last_status;
}

void endian_swap__FPUci(unsigned char* b, int byts) {
	unsigned char t;
}

void sjis_endian_swap__FPUci(unsigned char* b, int byts) {
	unsigned char t;
}

unsigned short to_sjis__Fc(char asc) {
	sjis sp;
}

char to_ascii__FUs(unsigned short sjis) {
	sjis sp;
}

void ascii_to_sjis__FPUcPUs(unsigned char* asc, unsigned short* sjis) {
}

int is_sjis__FPUc(unsigned char* buf) {
}

int sjis_to_ascii__FPUsPc(unsigned short* sjis, char* asc) {
}

void read_card_directory__Fi(int card_number) {
	char path[80];
	DIRENTRY dir;
	int i;
	int fh;
	int r;
}

int test_card_format__Fi(int card_number) {
}

int checksum_data__FPci(char* buf, int size) {
	int chk;
}

int delete_card_file__Fii(int card_number, int file) {
	char path[80];
}

int read_card_file__FiiiPc(int card_number, int file, int id, char* buf) {
	int okay;
	int tries;
	int fd;
	int r;
	int size;
	int checksumerror;
	file_header h;
	char path[80];
}

int format_card__Fi(int card_number) {
	char path[80];
}

int write_card_file__FiiPcT2PUcPUsiT4(int card_number, int id, char* name, char* title, unsigned char* icon, unsigned short* clut, int size, unsigned char* buf) {
	unsigned short* clut;
	int size;
	unsigned char* buf;
	file_header h;
	int fd;
	int failed;
	int e;
	char path[80];
	int Loop;
}

void new_card__Fi(int card_number) {
}

void service_card__Fi(int card_number) {
	int last_status;
}


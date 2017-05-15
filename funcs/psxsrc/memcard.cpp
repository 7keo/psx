// Path: C:\diabpsx\PSXSRC\MEMCARD.CPP
// Addr: 0x801426F8
void endian_swap__FPUci(unsigned char *b, int byts) {
	unsigned char t;
}

// Path: C:\diabpsx\PSXSRC\MEMCARD.CPP
// Addr: 0x8014272C
void sjis_endian_swap__FPUci(unsigned char *b, int byts) {
	unsigned char t;
}

// Path: C:\diabpsx\PSXSRC\MEMCARD.CPP
// Addr: 0x80142774
unsigned short to_sjis__Fc(char asc) {
	struct sjis *sp;
}

// Path: C:\diabpsx\PSXSRC\MEMCARD.CPP
// Addr: 0x801427F4
char to_ascii__FUs(unsigned short sjis) {
	struct sjis *sp;
}

// Path: C:\diabpsx\PSXSRC\MEMCARD.CPP
// Addr: 0x8014287C
void ascii_to_sjis__FPUcPUs(unsigned char *asc, unsigned short *sjis) {
}

// Path: C:\diabpsx\PSXSRC\MEMCARD.CPP
// Addr: 0x80142904
int is_sjis__FPUc(unsigned char *buf) {
}

// Path: C:\diabpsx\PSXSRC\MEMCARD.CPP
// Addr: 0x80142910
int sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}

// Path: C:\diabpsx\PSXSRC\MEMCARD.CPP
// Addr: 0x80142998
void read_card_directory__Fi(int card_number) {
	char path[80];
	struct DIRENTRY *dir;
	int i;
	int fh;
	int r;
}

// Path: C:\diabpsx\PSXSRC\MEMCARD.CPP
// Addr: 0x80142BF4
int test_card_format__Fi(int card_number) {
}

// Path: C:\diabpsx\PSXSRC\MEMCARD.CPP
// Addr: 0x80142CE4
int checksum_data__FPci(char *buf, int size) {
	int chk;
}

// Path: C:\diabpsx\PSXSRC\MEMCARD.CPP
// Addr: 0x80142D20
int delete_card_file__Fii(int card_number, int file) {
	char path[80];
}

// Path: C:\diabpsx\PSXSRC\MEMCARD.CPP
// Addr: 0x80142E18
int read_card_file__FiiiPc(int card_number, int file, int id, char *buf) {
	int okay;
	int tries;
	int fd;
	int r;
	int size;
	int checksumerror;
	struct file_header h;
	char path[80];
}

// Path: C:\diabpsx\PSXSRC\MEMCARD.CPP
// Addr: 0x80142FF4
int format_card__Fi(int card_number) {
	char path[80];
}

// Path: C:\diabpsx\PSXSRC\MEMCARD.CPP
// Addr: 0x801430B8
int write_card_file__FiiPcT2PUcPUsiT4(int card_number, int id, char *name, char *title, unsigned char *icon, unsigned short *clut, int size, unsigned char *buf) {
	unsigned short *clut;
	int size;
	unsigned char *buf;
	struct file_header h;
	int fd;
	int failed;
	int e;
	char path[80];
	int Loop;
}

// Path: C:\diabpsx\PSXSRC\MEMCARD.CPP
// Addr: 0x8014340C
void new_card__Fi(int card_number) {
}

// Path: C:\diabpsx\PSXSRC\MEMCARD.CPP
// Addr: 0x801434A0
void service_card__Fi(int card_number) {
	int last_status;
}


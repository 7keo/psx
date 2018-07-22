// C:\diabpsx\PSXSRC\MEMCARD.CPP

#include "types.h"

// address: 0x801426F8
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x8014272C
void sjis_endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 2
	register unsigned char t;
}


// address: 0x80142774
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x801427F4
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8014287C
void ascii_to_sjis__FPUcPUs(unsigned char *asc, unsigned short *sjis) {
}


// address: 0x80142904
int is_sjis__FPUc(unsigned char *buf) {
}


// address: 0x80142910
int sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x80142998
void read_card_directory__Fi(int card_number) {
	// address: 0xFFFFFF78
	// size: 0x50
	auto char path[80];
	// register: 17
	// size: 0x28
	register struct DIRENTRY *dir;
	// register: 19
	register int i;
	// register: 17
	register int fh;
	// register: 18
	register int r;
}


// address: 0x80142BF4
int test_card_format__Fi(int card_number) {
}


// address: 0x80142CE4
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x80142D20
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x80142E18
int read_card_file__FiiiPc(int card_number, int file, int id, char *buf) {
	// register: 19
	register int okay;
	// register: 20
	register int tries;
	// register: 17
	register int fd;
	// register: 2
	register int r;
	// register: 16
	register int size;
	// register: 22
	register int checksumerror;
	// address: 0xFFFFFD90
	// size: 0x200
	auto struct file_header h;
	// address: 0xFFFFFF90
	// size: 0x50
	auto char path[80];
}


// address: 0x80142FF4
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x801430B8
int write_card_file__FiiPcT2PUcPUsiT4(int card_number, int id, char *name, char *title, unsigned char *icon, unsigned short *clut, int size, unsigned char *buf) {
	// address: 0xFFFFFD88
	// size: 0x200
	auto struct file_header h;
	// register: 16
	register int fd;
	// register: 19
	register int failed;
	// register: 20
	register int e;
	// address: 0xFFFFFF88
	// size: 0x50
	auto char path[80];
	{
		// register: 4
		register int Loop;
	}
}


// address: 0x8014340C
void new_card__Fi(int card_number) {
}


// address: 0x801434A0
void service_card__Fi(int card_number) {
	// register: 4
	register int last_status;
}



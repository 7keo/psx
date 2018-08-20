// global_c.cpp

#include "types.h"

// address: 0x80139C68
// size: 0x3E8
extern struct THEME_LOC themeLoc[50];

// address: 0x8013A3B0
// size: 0x1900
extern unsigned char L5dungeon[80][80];

// address: 0x8013A050
// size: 0x103
static struct ShadowStruct SPATS[37];

// address: 0x8013A154
// size: 0xCE
static unsigned char BSTYPES[206];

// address: 0x8013A224
// size: 0xCE
static unsigned char L5BTYPES[206];

// address: 0x8013A2F4
// size: 0x22
static unsigned char STAIRSUP[34];

// address: 0x8013A318
// size: 0x22
static unsigned char L5STAIRSUP[34];

// address: 0x8013A33C
// size: 0x1A
static unsigned char STAIRSDOWN[26];

// address: 0x8013A358
// size: 0xA
static unsigned char LAMPS[10];

// address: 0x8013A364
// size: 0x4A
static unsigned char PWATERIN[74];

// address: 0x80139C58
// size: 0x10
extern unsigned char L5ConvTbl[16];

// address: 0x80142774
// size: 0x654
extern struct ROOMNODE RoomList[81];

// address: 0x80142DC8
// size: 0x640
extern unsigned char predungeon[40][40];

// address: 0x80140F04
// size: 0x14
extern int Dir_Xadd[5];

// address: 0x80140F18
// size: 0x14
extern int Dir_Yadd[5];

// address: 0x80140F2C
// size: 0xE
extern struct ShadowStruct SPATSL2[2];

// address: 0x80140F3C
// size: 0xA1
extern unsigned char BTYPESL2[161];

// address: 0x80140FE0
// size: 0xA1
extern unsigned char BSTYPESL2[161];

// address: 0x80141084
// size: 0x12
extern unsigned char VARCH1[18];

// address: 0x80141098
// size: 0x12
extern unsigned char VARCH2[18];

// address: 0x801410AC
// size: 0x12
extern unsigned char VARCH3[18];

// address: 0x801410C0
// size: 0x12
extern unsigned char VARCH4[18];

// address: 0x801410D4
// size: 0x12
extern unsigned char VARCH5[18];

// address: 0x801410E8
// size: 0x12
extern unsigned char VARCH6[18];

// address: 0x801410FC
// size: 0x12
extern unsigned char VARCH7[18];

// address: 0x80141110
// size: 0x12
extern unsigned char VARCH8[18];

// address: 0x80141124
// size: 0x12
extern unsigned char VARCH9[18];

// address: 0x80141138
// size: 0x12
extern unsigned char VARCH10[18];

// address: 0x8014114C
// size: 0x12
extern unsigned char VARCH11[18];

// address: 0x80141160
// size: 0x12
extern unsigned char VARCH12[18];

// address: 0x80141174
// size: 0x12
extern unsigned char VARCH13[18];

// address: 0x80141188
// size: 0x12
extern unsigned char VARCH14[18];

// address: 0x8014119C
// size: 0x12
extern unsigned char VARCH15[18];

// address: 0x801411B0
// size: 0x12
extern unsigned char VARCH16[18];

// address: 0x801411C4
// size: 0xE
extern unsigned char VARCH17[14];

// address: 0x801411D4
// size: 0xE
extern unsigned char VARCH18[14];

// address: 0x801411E4
// size: 0xE
extern unsigned char VARCH19[14];

// address: 0x801411F4
// size: 0xE
extern unsigned char VARCH20[14];

// address: 0x80141204
// size: 0xE
extern unsigned char VARCH21[14];

// address: 0x80141214
// size: 0xE
extern unsigned char VARCH22[14];

// address: 0x80141224
// size: 0xE
extern unsigned char VARCH23[14];

// address: 0x80141234
// size: 0xE
extern unsigned char VARCH24[14];

// address: 0x80141244
// size: 0x12
extern unsigned char VARCH25[18];

// address: 0x80141258
// size: 0x12
extern unsigned char VARCH26[18];

// address: 0x8014126C
// size: 0x12
extern unsigned char VARCH27[18];

// address: 0x80141280
// size: 0x12
extern unsigned char VARCH28[18];

// address: 0x80141294
// size: 0x12
extern unsigned char VARCH29[18];

// address: 0x801412A8
// size: 0x12
extern unsigned char VARCH30[18];

// address: 0x801412BC
// size: 0x12
extern unsigned char VARCH31[18];

// address: 0x801412D0
// size: 0x12
extern unsigned char VARCH32[18];

// address: 0x801412E4
// size: 0x12
extern unsigned char VARCH33[18];

// address: 0x801412F8
// size: 0x12
extern unsigned char VARCH34[18];

// address: 0x8014130C
// size: 0x12
extern unsigned char VARCH35[18];

// address: 0x80141320
// size: 0x12
extern unsigned char VARCH36[18];

// address: 0x80141334
// size: 0x12
extern unsigned char VARCH37[18];

// address: 0x80141348
// size: 0x12
extern unsigned char VARCH38[18];

// address: 0x8014135C
// size: 0x12
extern unsigned char VARCH39[18];

// address: 0x80141370
// size: 0x12
extern unsigned char VARCH40[18];

// address: 0x80141384
// size: 0xE
extern unsigned char HARCH1[14];

// address: 0x80141394
// size: 0xE
extern unsigned char HARCH2[14];

// address: 0x801413A4
// size: 0xE
extern unsigned char HARCH3[14];

// address: 0x801413B4
// size: 0xE
extern unsigned char HARCH4[14];

// address: 0x801413C4
// size: 0xE
extern unsigned char HARCH5[14];

// address: 0x801413D4
// size: 0xE
extern unsigned char HARCH6[14];

// address: 0x801413E4
// size: 0xE
extern unsigned char HARCH7[14];

// address: 0x801413F4
// size: 0xE
extern unsigned char HARCH8[14];

// address: 0x80141404
// size: 0xE
extern unsigned char HARCH9[14];

// address: 0x80141414
// size: 0xE
extern unsigned char HARCH10[14];

// address: 0x80141424
// size: 0xE
extern unsigned char HARCH11[14];

// address: 0x80141434
// size: 0xE
extern unsigned char HARCH12[14];

// address: 0x80141444
// size: 0xE
extern unsigned char HARCH13[14];

// address: 0x80141454
// size: 0xE
extern unsigned char HARCH14[14];

// address: 0x80141464
// size: 0xE
extern unsigned char HARCH15[14];

// address: 0x80141474
// size: 0xE
extern unsigned char HARCH16[14];

// address: 0x80141484
// size: 0xE
extern unsigned char HARCH17[14];

// address: 0x80141494
// size: 0xE
extern unsigned char HARCH18[14];

// address: 0x801414A4
// size: 0xE
extern unsigned char HARCH19[14];

// address: 0x801414B4
// size: 0xE
extern unsigned char HARCH20[14];

// address: 0x801414C4
// size: 0xE
extern unsigned char HARCH21[14];

// address: 0x801414D4
// size: 0xE
extern unsigned char HARCH22[14];

// address: 0x801414E4
// size: 0xE
extern unsigned char HARCH23[14];

// address: 0x801414F4
// size: 0xE
extern unsigned char HARCH24[14];

// address: 0x80141504
// size: 0xE
extern unsigned char HARCH25[14];

// address: 0x80141514
// size: 0xE
extern unsigned char HARCH26[14];

// address: 0x80141524
// size: 0xE
extern unsigned char HARCH27[14];

// address: 0x80141534
// size: 0xE
extern unsigned char HARCH28[14];

// address: 0x80141544
// size: 0xE
extern unsigned char HARCH29[14];

// address: 0x80141554
// size: 0xE
extern unsigned char HARCH30[14];

// address: 0x80141564
// size: 0xE
extern unsigned char HARCH31[14];

// address: 0x80141574
// size: 0xE
extern unsigned char HARCH32[14];

// address: 0x80141584
// size: 0xE
extern unsigned char HARCH33[14];

// address: 0x80141594
// size: 0xE
extern unsigned char HARCH34[14];

// address: 0x801415A4
// size: 0xE
extern unsigned char HARCH35[14];

// address: 0x801415B4
// size: 0xE
extern unsigned char HARCH36[14];

// address: 0x801415C4
// size: 0xE
extern unsigned char HARCH37[14];

// address: 0x801415D4
// size: 0xE
extern unsigned char HARCH38[14];

// address: 0x801415E4
// size: 0xE
extern unsigned char HARCH39[14];

// address: 0x801415F4
// size: 0xE
extern unsigned char HARCH40[14];

// address: 0x80141604
// size: 0x22
extern unsigned char USTAIRS[34];

// address: 0x80141628
// size: 0x22
extern unsigned char DSTAIRS[34];

// address: 0x8014164C
// size: 0x22
extern unsigned char WARPSTAIRS[34];

// address: 0x80141670
// size: 0x14
extern unsigned char CRUSHCOL[20];

// address: 0x80141684
// size: 0xA
extern unsigned char BIG1[10];

// address: 0x80141690
// size: 0xA
extern unsigned char BIG2[10];

// address: 0x8014169C
// size: 0xA
extern unsigned char BIG5[10];

// address: 0x801416A8
// size: 0xA
extern unsigned char BIG8[10];

// address: 0x801416B4
// size: 0xA
extern unsigned char BIG9[10];

// address: 0x801416C0
// size: 0xA
extern unsigned char BIG10[10];

// address: 0x801416CC
// size: 0x20
extern unsigned char PANCREAS1[32];

// address: 0x801416EC
// size: 0x20
extern unsigned char PANCREAS2[32];

// address: 0x8014170C
// size: 0x14
extern unsigned char CTRDOOR1[20];

// address: 0x80141720
// size: 0x14
extern unsigned char CTRDOOR2[20];

// address: 0x80141734
// size: 0x14
extern unsigned char CTRDOOR3[20];

// address: 0x80141748
// size: 0x14
extern unsigned char CTRDOOR4[20];

// address: 0x8014175C
// size: 0x14
extern unsigned char CTRDOOR5[20];

// address: 0x80141770
// size: 0x14
extern unsigned char CTRDOOR6[20];

// address: 0x80141784
// size: 0x14
extern unsigned char CTRDOOR7[20];

// address: 0x80141798
// size: 0x14
extern unsigned char CTRDOOR8[20];

// address: 0x801417AC
// size: 0xFA0
extern int Patterns[10][100];

// address: 0x80148958
// size: 0x640
extern unsigned char lockout[40][40];

// address: 0x801486E4
// size: 0x10
static unsigned char L3ConvTbl[16];

// address: 0x801486F4
// size: 0x14
static unsigned char L3UP[20];

// address: 0x80148708
// size: 0x14
static unsigned char L3DOWN[20];

// address: 0x8014871C
// size: 0x14
static unsigned char L3HOLDWARP[20];

// address: 0x80148730
// size: 0x22
static unsigned char L3TITE1[34];

// address: 0x80148754
// size: 0x22
static unsigned char L3TITE2[34];

// address: 0x80148778
// size: 0x22
static unsigned char L3TITE3[34];

// address: 0x8014879C
// size: 0x2A
static unsigned char L3TITE7[42];

// address: 0x801487C8
// size: 0x14
static unsigned char L3TITE8[20];

// address: 0x801487DC
// size: 0x14
static unsigned char L3TITE9[20];

// address: 0x801487F0
// size: 0x14
static unsigned char L3TITE10[20];

// address: 0x80148804
// size: 0x14
static unsigned char L3TITE11[20];

// address: 0x80148818
// size: 0xE
static unsigned char L3ISLE1[14];

// address: 0x80148828
// size: 0xE
static unsigned char L3ISLE2[14];

// address: 0x80148838
// size: 0xE
static unsigned char L3ISLE3[14];

// address: 0x80148848
// size: 0xE
static unsigned char L3ISLE4[14];

// address: 0x80148858
// size: 0xA
static unsigned char L3ISLE5[10];

// address: 0x80148864
// size: 0xF4
static unsigned char L3ANVIL[244];

// address: 0x8014D874
// size: 0x190
extern unsigned char dung[20][20];

// address: 0x8014DA04
// size: 0x14
extern unsigned char hallok[20];

// address: 0x8014DA18
// size: 0x1900
extern unsigned char L4dungeon[80][80];

// address: 0x8014F318
// size: 0x10
static unsigned char L4ConvTbl[16];

// address: 0x8014F328
// size: 0x2A
static unsigned char L4USTAIRS[42];

// address: 0x8014F354
// size: 0x2A
static unsigned char L4TWARP[42];

// address: 0x8014F380
// size: 0x34
static unsigned char L4DSTAIRS[52];

// address: 0x8014F3B4
// size: 0x34
static unsigned char L4PENTA[52];

// address: 0x8014F3E8
// size: 0x34
static unsigned char L4PENTA2[52];

// address: 0x8014F41C
// size: 0x8C
static unsigned char L4BTYPES[140];


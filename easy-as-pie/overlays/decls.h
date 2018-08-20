#include "types.h"

// address: 0x8012A6F4
extern int NumOfMonsterListLevels;

// address: 0x800A76AC
// size: 0x80
extern struct MonstLevel AllLevels[16];

// address: 0x8012A3F0
// size: 0x4
static unsigned char NumsLEV1M1A[4];

// address: 0x8012A3F4
// size: 0x4
static unsigned char NumsLEV1M1B[4];

// address: 0x8012A3F8
// size: 0x5
static unsigned char NumsLEV1M1C[5];

// address: 0x8012A400
// size: 0x4
static unsigned char NumsLEV2M2A[4];

// address: 0x8012A404
// size: 0x4
static unsigned char NumsLEV2M2B[4];

// address: 0x8012A408
// size: 0x3
static unsigned char NumsLEV2M2C[3];

// address: 0x8012A40C
// size: 0x4
static unsigned char NumsLEV2M2D[4];

// address: 0x8012A410
// size: 0x4
static unsigned char NumsLEV2M2QA[4];

// address: 0x8012A414
// size: 0x4
static unsigned char NumsLEV2M2QB[4];

// address: 0x8012A418
// size: 0x4
static unsigned char NumsLEV3M3A[4];

// address: 0x8012A41C
// size: 0x3
static unsigned char NumsLEV3M3QA[3];

// address: 0x8012A420
// size: 0x4
static unsigned char NumsLEV3M3B[4];

// address: 0x8012A424
// size: 0x4
static unsigned char NumsLEV3M3C[4];

// address: 0x8012A428
// size: 0x4
static unsigned char NumsLEV4M4A[4];

// address: 0x8012A42C
// size: 0x4
static unsigned char NumsLEV4M4QA[4];

// address: 0x8012A430
// size: 0x4
static unsigned char NumsLEV4M4B[4];

// address: 0x8012A434
// size: 0x5
static unsigned char NumsLEV4M4QB[5];

// address: 0x8012A43C
// size: 0x4
static unsigned char NumsLEV4M4C[4];

// address: 0x8012A440
// size: 0x5
static unsigned char NumsLEV4M4QC[5];

// address: 0x8012A448
// size: 0x4
static unsigned char NumsLEV4M4D[4];

// address: 0x8012A44C
// size: 0x4
static unsigned char NumsLEV5M5A[4];

// address: 0x8012A450
// size: 0x4
static unsigned char NumsLEV5M5B[4];

// address: 0x8012A454
// size: 0x4
static unsigned char NumsLEV5M5C[4];

// address: 0x8012A458
// size: 0x4
static unsigned char NumsLEV5M5D[4];

// address: 0x8012A45C
// size: 0x4
static unsigned char NumsLEV5M5E[4];

// address: 0x8012A460
// size: 0x3
static unsigned char NumsLEV5M5F[3];

// address: 0x8012A464
// size: 0x4
static unsigned char NumsLEV5M5QA[4];

// address: 0x8012A468
// size: 0x5
static unsigned char NumsLEV6M6A[5];

// address: 0x8012A470
// size: 0x3
static unsigned char NumsLEV6M6B[3];

// address: 0x8012A474
// size: 0x4
static unsigned char NumsLEV6M6C[4];

// address: 0x8012A478
// size: 0x3
static unsigned char NumsLEV6M6D[3];

// address: 0x8012A47C
// size: 0x3
static unsigned char NumsLEV6M6E[3];

// address: 0x8012A480
// size: 0x4
static unsigned char NumsLEV7M7A[4];

// address: 0x8012A484
// size: 0x4
static unsigned char NumsLEV7M7B[4];

// address: 0x8012A488
// size: 0x3
static unsigned char NumsLEV7M7C[3];

// address: 0x8012A48C
// size: 0x2
static unsigned char NumsLEV7M7D[2];

// address: 0x8012A490
// size: 0x2
static unsigned char NumsLEV7M7E[2];

// address: 0x8012A494
// size: 0x2
static unsigned char NumsLEV8M8QA[2];

// address: 0x8012A498
// size: 0x3
static unsigned char NumsLEV8M8A[3];

// address: 0x8012A49C
// size: 0x4
static unsigned char NumsLEV8M8B[4];

// address: 0x8012A4A0
// size: 0x3
static unsigned char NumsLEV8M8C[3];

// address: 0x8012A4A4
// size: 0x2
static unsigned char NumsLEV8M8D[2];

// address: 0x8012A4A8
// size: 0x2
static unsigned char NumsLEV8M8E[2];

// address: 0x8012A4AC
// size: 0x4
static unsigned char NumsLEV9M9A[4];

// address: 0x8012A4B0
// size: 0x3
static unsigned char NumsLEV9M9B[3];

// address: 0x8012A4B4
// size: 0x2
static unsigned char NumsLEV9M9C[2];

// address: 0x8012A4B8
// size: 0x2
static unsigned char NumsLEV9M9D[2];

// address: 0x8012A4BC
// size: 0x3
static unsigned char NumsLEV10M10A[3];

// address: 0x8012A4C0
// size: 0x2
static unsigned char NumsLEV10M10B[2];

// address: 0x8012A4C4
// size: 0x2
static unsigned char NumsLEV10M10C[2];

// address: 0x8012A4C8
// size: 0x2
static unsigned char NumsLEV10M10D[2];

// address: 0x8012A4CC
// size: 0x3
static unsigned char NumsLEV10M10QA[3];

// address: 0x8012A4D0
// size: 0x3
static unsigned char NumsLEV11M11A[3];

// address: 0x8012A4D4
// size: 0x3
static unsigned char NumsLEV11M11B[3];

// address: 0x8012A4D8
// size: 0x3
static unsigned char NumsLEV11M11C[3];

// address: 0x8012A4DC
// size: 0x3
static unsigned char NumsLEV11M11D[3];

// address: 0x8012A4E0
// size: 0x2
static unsigned char NumsLEV11M11E[2];

// address: 0x8012A4E4
// size: 0x3
static unsigned char NumsLEV12M12A[3];

// address: 0x8012A4E8
// size: 0x3
static unsigned char NumsLEV12M12B[3];

// address: 0x8012A4EC
// size: 0x3
static unsigned char NumsLEV12M12C[3];

// address: 0x8012A4F0
// size: 0x3
static unsigned char NumsLEV12M12D[3];

// address: 0x8012A4F4
// size: 0x3
static unsigned char NumsLEV13M13A[3];

// address: 0x8012A4F8
// size: 0x2
static unsigned char NumsLEV13M13B[2];

// address: 0x8012A4FC
// size: 0x3
static unsigned char NumsLEV13M13QB[3];

// address: 0x8012A500
// size: 0x3
static unsigned char NumsLEV13M13C[3];

// address: 0x8012A504
// size: 0x2
static unsigned char NumsLEV13M13D[2];

// address: 0x8012A508
// size: 0x3
static unsigned char NumsLEV14M14A[3];

// address: 0x8012A50C
// size: 0x3
static unsigned char NumsLEV14M14B[3];

// address: 0x8012A510
// size: 0x3
static unsigned char NumsLEV14M14QB[3];

// address: 0x8012A514
// size: 0x3
static unsigned char NumsLEV14M14C[3];

// address: 0x8012A518
// size: 0x3
static unsigned char NumsLEV14M14D[3];

// address: 0x8012A51C
// size: 0x2
static unsigned char NumsLEV14M14E[2];

// address: 0x8012A520
// size: 0x3
static unsigned char NumsLEV15M15A[3];

// address: 0x8012A524
// size: 0x3
static unsigned char NumsLEV15M15B[3];

// address: 0x8012A528
// size: 0x2
static unsigned char NumsLEV15M15C[2];

// address: 0x8012A52C
// size: 0x3
static unsigned char NumsLEV16M16D[3];

// address: 0x800A71EC
// size: 0x30
static struct MonstList ChoiceListLEV1[3];

// address: 0x800A721C
// size: 0x60
static struct MonstList ChoiceListLEV2[6];

// address: 0x800A727C
// size: 0x40
static struct MonstList ChoiceListLEV3[4];

// address: 0x800A72BC
// size: 0x70
static struct MonstList ChoiceListLEV4[7];

// address: 0x800A732C
// size: 0x70
static struct MonstList ChoiceListLEV5[7];

// address: 0x800A739C
// size: 0x50
static struct MonstList ChoiceListLEV6[5];

// address: 0x800A73EC
// size: 0x50
static struct MonstList ChoiceListLEV7[5];

// address: 0x800A743C
// size: 0x60
static struct MonstList ChoiceListLEV8[6];

// address: 0x800A749C
// size: 0x40
static struct MonstList ChoiceListLEV9[4];

// address: 0x800A74DC
// size: 0x50
static struct MonstList ChoiceListLEV10[5];

// address: 0x800A752C
// size: 0x50
static struct MonstList ChoiceListLEV11[5];

// address: 0x800A757C
// size: 0x40
static struct MonstList ChoiceListLEV12[4];

// address: 0x800A75BC
// size: 0x50
static struct MonstList ChoiceListLEV13[5];

// address: 0x800A760C
// size: 0x60
static struct MonstList ChoiceListLEV14[6];

// address: 0x800A766C
// size: 0x30
static struct MonstList ChoiceListLEV15[3];

// address: 0x800A769C
// size: 0x10
static struct MonstList ChoiceListLEV16[1];

// address: 0x8012BF90
// size: 0x5C
static struct TASK *GameTaskPtr;

// address: 0x800A772C
// size: 0x348
extern struct LOAD_IMAGE_ARGS AllArgs[30];

// address: 0x8012A704
extern int ArgsSoFar;

// address: 0x8012A714
extern unsigned long *ThisOt;

// address: 0x8012A718
// size: 0x28
extern struct POLY_FT4 *ThisPrimAddr;

// address: 0x8012BF94
static long hndPrimBuffers;

// address: 0x8012BF98
// size: 0x1C
static struct PRIM_BUFFER *PrimBuffers;

// address: 0x8012BF9C
static unsigned char BufferDepth;

// address: 0x8012BF9D
static unsigned char WorkRamId;

// address: 0x8012BF9E
static unsigned char ScrNum;

// address: 0x8012BFA0
// size: 0x70
static struct SCREEN_ENV *Screens;

// address: 0x8012BFA4
// size: 0x1C
static struct PRIM_BUFFER *PbToClear;

// address: 0x8012BFA8
static unsigned char BufferNum;

// address: 0x8012A71C
// size: 0x28
extern struct POLY_FT4 *AddrToAvoid;

// address: 0x8012BFA9
static unsigned char LastBuffer;

// address: 0x8012BFAC
// size: 0x14
static struct DISPENV *DispEnvToPut;

// address: 0x8012BFB0
static int ThisOtSize;

// address: 0x8012A720
// size: 0x8
static struct RECT ScrRect;

// address: 0x8012BFB4
static int VidWait;

// address: 0x8012C400
// size: 0xE0
static struct SCREEN_ENV screen[2];

// address: 0x8012BFB8
static void (*VbFunc)();

// address: 0x8012BFBC
static unsigned long VidTick;

// address: 0x8012BFC0
static int VXOff;

// address: 0x8012BFC4
static int VYOff;

// address: 0x8012A734
// size: 0x1C
extern struct LNK_OPTS *Gaz;

// address: 0x8012A738
extern int LastFmem;

// address: 0x8012A728
extern unsigned int GSYS_MemStart;

// address: 0x8012A72C
extern unsigned int GSYS_MemEnd;

// address: 0x800A7A74
// size: 0x28
static struct MEM_INIT_INFO PsxMem;

// address: 0x800A7A9C
// size: 0x28
static struct MEM_INIT_INFO PsxFastMem;

// address: 0x8012A730
extern int LowestFmem;

// address: 0x8012A748
extern int FileSYS;

// address: 0x8012BFC8
// size: 0x14
static struct FileIO *FileSystem;

// address: 0x8012BFCC
// size: 0x14
static struct FileIO *OverlayFileSystem;

// address: 0x8012A762
extern short DavesPad;

// address: 0x8012A764
extern short DavesPadDeb;

// address: 0x800A7AC4
// size: 0x32
extern char _6FileIO_FileToLoad[50];

// address: 0x8012C4E0
// size: 0x28
static struct POLY_FT4 MyFT4;

// address: 0x800A8368
// size: 0x474
extern struct TextDat *AllDats[285];

// address: 0x8012A7B4
extern int TpW;

// address: 0x8012A7B8
extern int TpH;

// address: 0x8012A7BC
extern int TpXDest;

// address: 0x8012A7C0
extern int TpYDest;

// address: 0x8012A7C4
// size: 0x8
extern struct RECT R;

// address: 0x800A87DC
// size: 0x34
extern struct POLY_GT4 MyGT4;

// address: 0x800A8810
// size: 0x28
extern struct POLY_GT3 MyGT3;

// address: 0x800A7AF8
// size: 0x870
extern struct TextDat DatPool[20];

// address: 0x8012A7D8
static bool ChunkGot;

// address: 0x800A8838
// size: 0x10
extern char STREAM_DIR[16];

// address: 0x800A8848
// size: 0x10
extern char STREAM_BIN[16];

// address: 0x800A8858
// size: 0x12C
extern unsigned char EAC_DirectoryCache[300];

// address: 0x8012A7EC
extern unsigned long BL_NoLumpFiles;

// address: 0x8012A7F0
extern unsigned long BL_NoStreamFiles;

// address: 0x8012A7F4
// size: 0x14
extern struct STRHDR *LFileTab;

// address: 0x8012A7F8
// size: 0x14
extern struct STRHDR *SFileTab;

// address: 0x8012A7FC
extern unsigned char FileLoaded;

// address: 0x8012A82C
extern int NoTAllocs;

// address: 0x800A8984
// size: 0x190
extern struct MEMSTRUCT MemBlock[50];

// address: 0x8012BFD8
static bool CanPause;

// address: 0x8012BFDC
static bool Paused;

// address: 0x8012C508
// size: 0x10
static struct Dialog PBack;

// address: 0x800A8BEC
// size: 0x22
extern unsigned char RawPadData0[34];

// address: 0x800A8C10
// size: 0x22
extern unsigned char RawPadData1[34];

// address: 0x800A8C34
// size: 0x384
extern unsigned char demo_buffer[900];

// address: 0x8012A858
extern int demo_pad_time;

// address: 0x8012A85C
extern int demo_pad_count;

// address: 0x800A8B14
// size: 0x6C
extern struct CPad Pad0;

// address: 0x800A8B80
// size: 0x6C
extern struct CPad Pad1;

// address: 0x8012A860
extern unsigned long demo_finish;

// address: 0x8012A864
extern int cac_pad;

// address: 0x8012A880
// size: 0x28
extern struct POLY_FT4 *CharFt4;

// address: 0x8012A884
extern int CharFrm;

// address: 0x8012A871
extern unsigned char WHITER;

// address: 0x8012A872
extern unsigned char WHITEG;

// address: 0x8012A873
extern unsigned char WHITEB;

// address: 0x8012A874
extern unsigned char BLUER;

// address: 0x8012A875
extern unsigned char BLUEG;

// address: 0x8012A876
extern unsigned char BLUEB;

// address: 0x8012A877
extern unsigned char REDR;

// address: 0x8012A878
extern unsigned char REDG;

// address: 0x8012A879
extern unsigned char REDB;

// address: 0x8012A87A
extern unsigned char GOLDR;

// address: 0x8012A87B
extern unsigned char GOLDG;

// address: 0x8012A87C
extern unsigned char GOLDB;

// address: 0x800A8FB8
// size: 0x218
extern struct CFont MediumFont;

// address: 0x800A91D0
// size: 0x218
extern struct CFont LargeFont;

// address: 0x800A93E8
// size: 0xB4
extern struct FontItem LFontTab[90];

// address: 0x800A949C
// size: 0x10
extern struct FontTab LFont;

// address: 0x800A94AC
// size: 0x136
extern struct FontItem MFontTab[155];

// address: 0x800A95E4
// size: 0x10
extern struct FontTab MFont;

// address: 0x8012A899
extern unsigned char DialogRed;

// address: 0x8012A89A
extern unsigned char DialogGreen;

// address: 0x8012A89B
extern unsigned char DialogBlue;

// address: 0x8012A89C
extern unsigned char DialogTRed;

// address: 0x8012A89D
extern unsigned char DialogTGreen;

// address: 0x8012A89E
extern unsigned char DialogTBlue;

// address: 0x8012A8A0
// size: 0x6C
extern struct TextDat *DialogTData;

// address: 0x8012A8A4
extern int DialogBackGfx;

// address: 0x8012A8A8
extern int DialogBackW;

// address: 0x8012A8AC
extern int DialogBackH;

// address: 0x8012A8B0
extern int DialogBorderGfx;

// address: 0x8012A8B4
extern int DialogBorderTLW;

// address: 0x8012A8B8
extern int DialogBorderTLH;

// address: 0x8012A8BC
extern int DialogBorderTRW;

// address: 0x8012A8C0
extern int DialogBorderTRH;

// address: 0x8012A8C4
extern int DialogBorderBLW;

// address: 0x8012A8C8
extern int DialogBorderBLH;

// address: 0x8012A8CC
extern int DialogBorderBRW;

// address: 0x8012A8D0
extern int DialogBorderBRH;

// address: 0x8012A8D4
extern int DialogBorderTW;

// address: 0x8012A8D8
extern int DialogBorderTH;

// address: 0x8012A8DC
extern int DialogBorderBW;

// address: 0x8012A8E0
extern int DialogBorderBH;

// address: 0x8012A8E4
extern int DialogBorderLW;

// address: 0x8012A8E8
extern int DialogBorderLH;

// address: 0x8012A8EC
extern int DialogBorderRW;

// address: 0x8012A8F0
extern int DialogBorderRH;

// address: 0x8012A8F4
extern int DialogBevelGfx;

// address: 0x8012A8F8
extern int DialogBevelCW;

// address: 0x8012A8FC
extern int DialogBevelCH;

// address: 0x8012A900
extern int DialogBevelLRW;

// address: 0x8012A904
extern int DialogBevelLRH;

// address: 0x8012A908
extern int DialogBevelUDW;

// address: 0x8012A90C
extern int DialogBevelUDH;

// address: 0x8012A910
extern int MY_DialogOTpos;

// address: 0x8012BFE0
static unsigned char DialogGBack;

// address: 0x8012BFE1
static char GShadeX;

// address: 0x8012BFE2
static char GShadeY;

// address: 0x8012BFE8
// size: 0x8
static unsigned char RandBTab[8];

// address: 0x800A9634
// size: 0x70
extern int Cxy[28];

// address: 0x8012A893
extern unsigned char BORDERR;

// address: 0x8012A894
extern unsigned char BORDERG;

// address: 0x8012A895
extern unsigned char BORDERB;

// address: 0x8012A896
extern unsigned char BACKR;

// address: 0x8012A897
extern unsigned char BACKG;

// address: 0x8012A898
extern unsigned char BACKB;

// address: 0x800A95F4
// size: 0x40
static char GShadeTab[64];

// address: 0x8012A891
static char GShadePX;

// address: 0x8012A892
static char GShadePY;

// address: 0x8012A91D
extern unsigned char PlayDemoFlag;

// address: 0x8012C518
// size: 0x30
static struct RGBPOLY rgbb;

// address: 0x8012C548
// size: 0x30
static struct RGBPOLY rgbt;

// address: 0x8012BFF0
static int blockr;

// address: 0x8012BFF4
static int blockg;

// address: 0x8012BFF8
static int blockb;

// address: 0x8012BFFC
static int InfraFlag;

// address: 0x8012C000
static unsigned char blank_bit;

// address: 0x8012A931
extern unsigned char P1ObjSelCount;

// address: 0x8012A932
extern unsigned char P2ObjSelCount;

// address: 0x8012A933
extern unsigned char P12ObjSelCount;

// address: 0x8012A934
extern unsigned char P1ItemSelCount;

// address: 0x8012A935
extern unsigned char P2ItemSelCount;

// address: 0x8012A936
extern unsigned char P12ItemSelCount;

// address: 0x8012A937
extern unsigned char P1MonstSelCount;

// address: 0x8012A938
extern unsigned char P2MonstSelCount;

// address: 0x8012A939
extern unsigned char P12MonstSelCount;

// address: 0x8012A93A
static unsigned short P1ObjSelCol;

// address: 0x8012A93C
static unsigned short P2ObjSelCol;

// address: 0x8012A93E
static unsigned short P12ObjSelCol;

// address: 0x8012A940
static unsigned short P1ItemSelCol;

// address: 0x8012A942
static unsigned short P2ItemSelCol;

// address: 0x8012A944
static unsigned short P12ItemSelCol;

// address: 0x8012A946
static unsigned short P1MonstSelCol;

// address: 0x8012A948
static unsigned short P2MonstSelCol;

// address: 0x8012A94A
static unsigned short P12MonstSelCol;

// address: 0x8012A94C
// size: 0xE0
extern struct CBlocks *CurrentBlocks;

// address: 0x801202C0
// size: 0x40
static short SinTab[32];

// address: 0x800A96A4
// size: 0x14
extern struct TownToCreature TownConv[10];

// address: 0x8012A968
// size: 0x4
extern enum OVER_TYPE CurrentOverlay;

// address: 0x80120360
// size: 0xC
static unsigned long HaltTab[3];

// address: 0x8012C578
// size: 0x10
static struct Overlay FrontEndOver;

// address: 0x8012C588
// size: 0x10
static struct Overlay PregameOver;

// address: 0x8012C598
// size: 0x10
static struct Overlay GameOver;

// address: 0x8012C5A8
// size: 0x10
static struct Overlay FmvOver;

// address: 0x8012C004
static int OWorldX;

// address: 0x8012C008
static int OWorldY;

// address: 0x8012C00C
static int WWorldX;

// address: 0x8012C010
static int WWorldY;

// address: 0x801203DC
// size: 0x20
static short TxyAdd[16];

// address: 0x8012A98C
extern int GXAdj2;

// address: 0x8012C014
static int TimePerFrame;

// address: 0x8012C018
static int CpuStart;

// address: 0x8012C01C
static int CpuTime;

// address: 0x8012C020
static int DrawTime;

// address: 0x8012C024
static int DrawStart;

// address: 0x8012C028
static int LastCpuTime;

// address: 0x8012C02C
static int LastDrawTime;

// address: 0x8012C030
static int DrawArea;

// address: 0x8012A994
extern bool ProfOn;

// address: 0x800A96B8
// size: 0x11
extern unsigned char LevPals[17];

// address: 0x80120544
// size: 0x32
static unsigned short Level2Bgdata[25];

// address: 0x800A96CC
// size: 0x54
extern struct PanelXY DefP1PanelXY;

// address: 0x800A9720
// size: 0x54
extern struct PanelXY DefP1PanelXY2;

// address: 0x800A9774
// size: 0x54
extern struct PanelXY DefP2PanelXY;

// address: 0x800A97C8
// size: 0x54
extern struct PanelXY DefP2PanelXY2;

// address: 0x800A981C
// size: 0xC8
extern unsigned int SpeedBarGfxTable[50];

// address: 0x8012A9BC
extern int hof;

// address: 0x8012A9C0
extern int mof;

// address: 0x800A98E4
// size: 0x100
extern struct SFXHDR SFXTab[2];

// address: 0x800A99E4
// size: 0x12000
extern unsigned long STR_Buffer[18432];

// address: 0x8012A9F0
extern unsigned long Time;

// address: 0x8012A9F4
extern bool CDWAIT;

// address: 0x800BB9E4
// size: 0x40
extern struct SpuVoiceAttr voice_attr;

// address: 0x800BBA24
// size: 0x80
extern struct SFXHDR STRSave;

// address: 0x8012A9CD
extern char NoActiveStreams;

// address: 0x8012A9D0
static bool STRInit;

// address: 0x8012A9D4
static unsigned char CDAngle;

// address: 0x8012AA18
extern char SFXNotPlayed;

// address: 0x8012AA19
extern char SFXNotInBank;

// address: 0x8012C5B8
// size: 0x108
static char spu_management[264];

// address: 0x8012C6C8
// size: 0x14
static struct SpuReverbAttr rev_attr;

// address: 0x8012C038
static unsigned short NoSfx;

// address: 0x8012AA04
// size: 0xC
extern struct bank_entry *BankOffsets;

// address: 0x8012AA08
static long OffsetHandle;

// address: 0x8012AA0C
static int BankBase;

// address: 0x8012AA10
static unsigned char SPU_Done;

// address: 0x801208E8
// size: 0x70
static unsigned short SFXRemapTab[56];

// address: 0x8012AA14
static int NoSNDRemaps;

// address: 0x800BBAA4
// size: 0x1EC
extern struct PalCollection ThePals;

// address: 0x8012098C
// size: 0x50
static struct InitPos InitialPositions[20];

// address: 0x8012AA60
extern int demo_level;

// address: 0x8012C6E0
// size: 0x20
static int buff[8];

// address: 0x8012AA64
extern int old_val;

// address: 0x8012AA68
// size: 0x5C
extern struct TASK *DemoTask;

// address: 0x8012AA6C
// size: 0x5C
extern struct TASK *DemoGameTask;

// address: 0x8012AA70
// size: 0x5C
extern struct TASK *tonys;

// address: 0x8012AA44
extern int demo_load;

// address: 0x8012AA48
extern int demo_record_load;

// address: 0x8012AA4C
extern int level_record;

// address: 0x8012AA50
extern char demo_fade_finished;

// address: 0x8012AA51
extern unsigned char demo_which;

// address: 0x800BBC90
// size: 0x14
extern unsigned long demolevel[5];

// address: 0x8012AA40
extern int moo_moo;

// address: 0x8012AA52
extern unsigned char demo_flash;

// address: 0x8012AA54
extern int tonys_Task;

// address: 0x8012ABCC
extern bool DoShowPanel;

// address: 0x8012ABD0
extern bool DoDrawBg;

// address: 0x8012C03C
static bool GlueFinished;

// address: 0x8012C040
static bool DoHomingScroll;

// address: 0x8012C044
// size: 0x6C
static struct TextDat *TownerGfx;

// address: 0x8012C048
static int CurrentMonsterList;

// address: 0x8012AA7D
extern char started_grtask;

// address: 0x800BBCA4
// size: 0x288
extern struct PInf PlayerInfo[81];

// address: 0x8012ABD4
// size: 0x4
static char ArmourChar[4];

// address: 0x80120A80
// size: 0xA
static char WepChar[10];

// address: 0x8012ABD8
// size: 0x4
static char CharChar[4];

// address: 0x8012C04C
static char ctrl_select_line;

// address: 0x8012C04D
static char ctrl_select_side;

// address: 0x8012C04E
static char ckeyheld;

// address: 0x8012C054
// size: 0x8
static struct RECT CtrlRect;

// address: 0x8012ABEC
extern unsigned char ctrlflag;

// address: 0x800BBFD4
// size: 0x130
extern struct KEY_ASSIGNS txt_actions[19];

// address: 0x800BBF2C
// size: 0xA8
extern struct pad_assigns pad_txt[14];

// address: 0x8012ABE8
static int toppos;

// address: 0x8012C700
// size: 0x10
static struct Dialog CtrlBack;

// address: 0x800BC104
// size: 0x98
static int controller_defaults[2][19];

// address: 0x8012AC5C
extern int gr_scrxoff;

// address: 0x8012AC60
extern int gr_scryoff;

// address: 0x8012AC68
extern unsigned short water_clut;

// address: 0x8012AC6C
extern char visible_level;

// address: 0x8012AC59
extern char last_type;

// address: 0x8012AC6E
extern char daylight;

// address: 0x8012AC6A
extern char cow_in_sight;

// address: 0x8012AC6B
extern char inn_in_sight;

// address: 0x8012AC64
extern unsigned int water_count;

// address: 0x8012AC6D
extern unsigned char lastrnd;

// address: 0x8012AC70
static int call_clock;

// address: 0x8012AC80
extern int TitleAnimCount;

// address: 0x8012AC84
static int flametick;

// address: 0x800BC1BC
// size: 0x90
extern struct SPELLFX_DAT SpellFXDat[2];

// address: 0x8012C710
// size: 0x240
static struct Particle PartArray[16];

// address: 0x8012C05C
static int partOtPos;

// address: 0x8012ACA0
extern int SetParticle;

// address: 0x8012ACA4
static int p1partexecnum;

// address: 0x8012ACA8
static int p2partexecnum;

// address: 0x800BC19C
// size: 0x20
static int JumpArray[8];

// address: 0x8012ACAC
static int partjumpflag;

// address: 0x8012ACB0
static int partglowflag;

// address: 0x8012ACB4
static int partcolour;

// address: 0x800BC24C
// size: 0x48
extern struct Spell_Target SplTarget[2];

// address: 0x8012ACD5
extern unsigned char select_flag;

// address: 0x8012C060
// size: 0x8
static struct RECT SelectRect;

// address: 0x8012C068
static char item_select;

// address: 0x8012ACD8
// size: 0x2
extern char QSpell[2];

// address: 0x8012ACDC
// size: 0x2
extern char _spltotype[2];

// address: 0x8012ACE0
// size: 0x8
extern bool force_attack[2];

// address: 0x8012ACC8
// size: 0x84
extern struct CPlayer *gplayer;

// address: 0x8012C950
// size: 0x10
static struct Dialog SelectBack;

// address: 0x8012ACCC
// size: 0x4
extern char mana_order[4];

// address: 0x8012ACD0
// size: 0x4
extern char health_order[4];

// address: 0x8012ACD4
extern unsigned char birdcheck;

// address: 0x8012C960
// size: 0x28
static struct TextDat *DecRequestors[10];

// address: 0x8012C06C
static unsigned short progress;

// address: 0x80120C04
// size: 0x2A
static unsigned short Level2CutScreen[21];

// address: 0x8012AD00
static char *CutString;

// address: 0x8012C988
// size: 0x78
static struct CScreen Scr;

// address: 0x8012AD04
// size: 0x5C
static struct TASK *CutScreenTSK;

// address: 0x8012AD08
static bool GameLoading;

// address: 0x8012CA08
// size: 0x10
static struct Dialog LBack;

// address: 0x8012AD18
extern unsigned int card_ev0;

// address: 0x8012AD1C
extern unsigned int card_ev1;

// address: 0x8012AD20
extern unsigned int card_ev2;

// address: 0x8012AD24
extern unsigned int card_ev3;

// address: 0x8012AD28
extern unsigned int card_ev10;

// address: 0x8012AD2C
extern unsigned int card_ev11;

// address: 0x8012AD30
extern unsigned int card_ev12;

// address: 0x8012AD34
extern unsigned int card_ev13;

// address: 0x8012AD38
// size: 0x8
extern int card_dirty[2];

// address: 0x8012AD40
// size: 0x5C
extern struct TASK *MemcardTask;

// address: 0x8012C070
static int card_event;

// address: 0x8012AD14
extern void (*mem_card_event_handler)();

// address: 0x8012AD0C
extern bool MemCardActive;

// address: 0x8012AD10
static int never_hooked_events;

// address: 0x8012AD90
extern unsigned long MasterVol;

// address: 0x8012AD94
extern unsigned long MusicVol;

// address: 0x8012AD98
extern unsigned long SoundVol;

// address: 0x8012AD9C
extern unsigned long VideoVol;

// address: 0x8012ADA0
extern unsigned long SpeechVol;

// address: 0x8012C074
// size: 0x6C
static struct TextDat *Slider;

// address: 0x8012C078
static int sw;

// address: 0x8012C07C
static int sx;

// address: 0x8012C080
static int sy;

// address: 0x8012C084
static unsigned char Adjust;

// address: 0x8012C085
static unsigned char qspin;

// address: 0x8012C086
static unsigned char lqspin;

// address: 0x8012C088
// size: 0x4
static enum LANG_TYPE OrigLang;

// address: 0x8012C08C
// size: 0x4
static enum LANG_TYPE OldLang;

// address: 0x8012C090
// size: 0x4
static enum LANG_TYPE NewLang;

// address: 0x8012ADA4
extern int ReturnMenu;

// address: 0x8012C094
// size: 0x8
static struct RECT ORect;

// address: 0x8012C09C
// size: 0x8
static char *McState[2];

// address: 0x8012ADA8
extern int they_pressed;

// address: 0x8012AD6C
extern bool optionsflag;

// address: 0x8012AD60
extern int cmenu;

// address: 0x8012AD74
extern int options_pad;

// address: 0x8012AD68
extern bool allspellsflag;

// address: 0x800BCC1C
// size: 0x80
extern short Circle[64];

// address: 0x8012AD50
extern bool goldcheat;

// address: 0x8012AD54
static int Spacing;

// address: 0x8012AD58
static int cs;

// address: 0x8012AD5C
static int lastcs;

// address: 0x8012AD64
static bool MemcardOverlay;

// address: 0x8012AD70
extern int saveflag;

// address: 0x8012AD80
static char *PrevTxt;

// address: 0x8012AD84
static char *SelTxt;

// address: 0x800BC294
// size: 0xA8
extern struct OMENUITEM MainMenu[7];

// address: 0x800BC33C
// size: 0xF0
extern struct OMENUITEM GameMenu[10];

// address: 0x800BC42C
// size: 0x90
extern struct OMENUITEM SoundMenu[6];

// address: 0x800BC4BC
// size: 0xA8
extern struct OMENUITEM CentreMenu[7];

// address: 0x800BC564
// size: 0xA8
extern struct OMENUITEM LangMenu[7];

// address: 0x800BC60C
// size: 0xA8
extern struct OMENUITEM MemcardMenu[7];

// address: 0x800BC6B4
// size: 0x60
extern struct OMENUITEM MemcardLoadGameMenu[4];

// address: 0x800BC714
// size: 0x60
extern struct OMENUITEM MemcardSaveGameMenu[4];

// address: 0x800BC774
// size: 0x60
extern struct OMENUITEM MemcardSaveOptionsMenu[4];

// address: 0x800BC7D4
// size: 0x60
extern struct OMENUITEM MemcardLoadOptionsMenu[4];

// address: 0x800BC834
// size: 0x60
extern struct OMENUITEM MemcardCharacterMenu[4];

// address: 0x800BC894
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard1[7];

// address: 0x800BC93C
// size: 0xA8
extern struct OMENUITEM MemcardSelectCard2[7];

// address: 0x800BC9E4
// size: 0x60
extern struct OMENUITEM MemcardFormatMenu[4];

// address: 0x800BCA44
// size: 0xD8
extern struct OMENUITEM CheatMenu[9];

// address: 0x800BCB1C
// size: 0x30
extern struct OMENUITEM InfoMenu[2];

// address: 0x800BCB4C
// size: 0x48
extern struct OMENUITEM MonstViewMenu[3];

// address: 0x800BCB94
// size: 0x88
extern struct OMENULIST MenuList[17];

// address: 0x8012AD88
static bool debounce;

// address: 0x8012AD8C
extern unsigned char Qfromoptions;

// address: 0x800BCC9C
// size: 0x180
extern struct BIRDSTRUCT BirdList[16];

// address: 0x8012ADB5
extern char hop_height;

// address: 0x8012ADB8
// size: 0x8
static struct Perch perches[4];

// address: 0x800BCE1C
// size: 0x30
extern struct FMVDAT FmvTab[6];

// address: 0x8012ADCC
static int CurMons;

// address: 0x8012ADD0
static int Frame;

// address: 0x8012ADD4
static int Action;

// address: 0x8012ADD8
static int Dir;

// address: 0x8012AE3C
extern int indsize;

// address: 0x8012AE1C
static unsigned char *kanjbuff;

// address: 0x8012AE20
// size: 0x4
static struct kindexS *kindex;

// address: 0x8012AE24
static long hndKanjBuff;

// address: 0x8012AE28
static long hndKanjIndex;

// address: 0x8012AE7C
extern int FeBackX;

// address: 0x8012AE80
extern int FeBackY;

// address: 0x8012AE84
extern int FeBackW;

// address: 0x8012AE88
extern int FeBackH;

// address: 0x8012AE8C
extern unsigned char FeFlag;

// address: 0x800BD9AC
// size: 0x780
extern struct FeStruct FeBuffer[80];

// address: 0x8012AE90
extern int FePlayerNo;

// address: 0x8012C0A4
// size: 0x24
static struct FE_CREATE *CStruct;

// address: 0x8012AE94
extern int FeBufferCount;

// address: 0x8012AE98
extern int FeNoOfPlayers;

// address: 0x8012AE9C
// size: 0x8
extern int FeChrClass[2];

// address: 0x800BE12C
// size: 0x16
extern char FePlayerName[11][2];

// address: 0x8012AEA4
// size: 0x1C
extern struct FeTable *FeCurMenu;

// address: 0x8012AEA8
// size: 0x2
extern unsigned char FePlayerNameFlag[2];

// address: 0x8012AEAC
extern unsigned long FeCount;

// address: 0x8012AEB0
extern int fileselect;

// address: 0x8012AEB4
extern int BookMenu;

// address: 0x8012AEB8
extern int FeAttractMode;

// address: 0x8012AEBC
extern int FMVPress;

// address: 0x8012AE4C
// size: 0x6C
extern struct TextDat *FeTData;

// address: 0x8012AE54
// size: 0x8
extern bool LoadedChar[2];

// address: 0x8012AE50
// size: 0x6C
extern struct TextDat *FlameTData;

// address: 0x8012AE5C
extern unsigned char FeIsAVirgin;

// address: 0x8012AE60
extern int FeMenuDelay;

// address: 0x800BCE4C
// size: 0x1C
extern struct FeTable DummyMenu;

// address: 0x800BCE68
// size: 0x1C
extern struct FeTable FeMainMenu;

// address: 0x800BCE84
// size: 0x1C
extern struct FeTable FeNewGameMenu;

// address: 0x800BCEA0
// size: 0x1C
extern struct FeTable FeNewP1ClassMenu;

// address: 0x800BCEBC
// size: 0x1C
extern struct FeTable FeNewP1NameMenu;

// address: 0x800BCED8
// size: 0x1C
extern struct FeTable FeNewP2ClassMenu;

// address: 0x800BCEF4
// size: 0x1C
extern struct FeTable FeNewP2NameMenu;

// address: 0x800BCF10
// size: 0x1C
extern struct FeTable FeDifficultyMenu;

// address: 0x800BCF2C
// size: 0x1C
extern struct FeTable FeBackgroundMenu;

// address: 0x800BCF48
// size: 0x1C
extern struct FeTable FeBook1Menu;

// address: 0x800BCF64
// size: 0x1C
extern struct FeTable FeBook2Menu;

// address: 0x800BCF80
// size: 0x1C
extern struct FeTable FeLoadCharMenu;

// address: 0x800BCF9C
// size: 0x1C
extern struct FeTable FeLoadChar1Menu;

// address: 0x800BCFB8
// size: 0x1C
extern struct FeTable FeLoadChar2Menu;

// address: 0x8012AE64
static int fadeval;

// address: 0x800BCFD4
// size: 0x78
extern struct FeMenuTable FeMainMenuTable[5];

// address: 0x800BD04C
// size: 0x48
extern struct FeMenuTable FeNewGameMenuTable[3];

// address: 0x800BD094
// size: 0x78
extern struct FeMenuTable FePlayerClassMenuTable[5];

// address: 0x800BD10C
// size: 0x6A8
extern struct FeMenuTable FeNameEngMenuTable[71];

// address: 0x800BD7B4
// size: 0x48
extern struct FeMenuTable FeMemcardMenuTable[3];

// address: 0x800BD7FC
// size: 0x60
extern struct FeMenuTable FeDifficultyMenuTable[4];

// address: 0x800BD85C
// size: 0x60
extern struct FeMenuTable FeBackgroundMenuTable[4];

// address: 0x800BD8BC
// size: 0x78
extern struct FeMenuTable FeBook1MenuTable[5];

// address: 0x800BD934
// size: 0x78
extern struct FeMenuTable FeBook2MenuTable[5];

// address: 0x8012AE70
extern unsigned long AttractTitleDelay;

// address: 0x8012AE74
extern unsigned long AttractMainDelay;

// address: 0x8012AE78
extern int FMVEndPad;

// address: 0x8012AEF0
extern int InCredits;

// address: 0x8012AEF4
extern int CreditTitleNo;

// address: 0x8012AEF8
extern int CreditSubTitleNo;

// address: 0x8012AF0C
// size: 0x8
extern int card_status[2];

// address: 0x8012AF14
// size: 0x8
extern int card_usable[2];

// address: 0x8012AF1C
// size: 0x8
extern int card_files[2];

// address: 0x8012AF24
// size: 0x8
extern int card_changed[2];

// address: 0x8012AF64
extern int AlertTxt;

// address: 0x8012AF68
extern int current_card;

// address: 0x8012AF6C
extern int LoadType;

// address: 0x8012AF70
extern int McMenuPos;

// address: 0x8012AF74
// size: 0x1C
extern struct FeTable *McCurMenu;

// address: 0x8012AF60
extern bool fileinfoflag;

// address: 0x8012AF38
extern char *DiabloGameFile;

// address: 0x8012AF58
// size: 0x8
extern char *McState_addr_8012AF58[2];

// address: 0x8012B048
// size: 0x8
extern int mdec_audio_buffer[2];

// address: 0x8012B050
extern int mdec_audio_sec;

// address: 0x8012B054
extern int mdec_audio_offs;

// address: 0x8012B058
extern int mdec_audio_playing;

// address: 0x8012B05C
extern int mdec_audio_rate_shift;

// address: 0x8012B060
// size: 0x8
extern char *vlcbuf[2];

// address: 0x8012B068
extern int slice_size;

// address: 0x8012B06C
// size: 0x8
extern struct RECT slice;

// address: 0x8012B074
extern int slice_inc;

// address: 0x8012B078
extern int area_pw;

// address: 0x8012B07C
extern int area_ph;

// address: 0x8012B080
// size: 0x2
extern char tmdc_pol_dirty[2];

// address: 0x8012B084
// size: 0x8
extern int num_pol[2];

// address: 0x8012B08C
extern int mdec_cx;

// address: 0x8012B090
extern int mdec_cy;

// address: 0x8012B094
extern int mdec_w;

// address: 0x8012B098
extern int mdec_h;

// address: 0x8012B09C
// size: 0x8
extern int mdec_pw[2];

// address: 0x8012B0A4
// size: 0x8
extern int mdec_ph[2];

// address: 0x8012B0AC
extern int move_x;

// address: 0x8012B0B0
extern int move_y;

// address: 0x8012B0B4
extern int move_scale;

// address: 0x8012B0B8
extern int stream_frames;

// address: 0x8012B0BC
extern int last_stream_frame;

// address: 0x8012B0C0
extern int mdec_framecount;

// address: 0x8012B0C4
extern int mdec_speed;

// address: 0x8012B0C8
extern int mdec_stream_starting;

// address: 0x8012B0CC
extern int mdec_last_frame;

// address: 0x8012B0D0
extern int mdec_sectors_per_frame;

// address: 0x8012B0D4
extern unsigned short *vlctab;

// address: 0x8012B0D8
extern unsigned char *mdc_buftop;

// address: 0x8012B0DC
extern unsigned char *mdc_bufstart;

// address: 0x8012B0E0
extern int mdc_bufleft;

// address: 0x8012B0E4
extern int mdc_buftotal;

// address: 0x8012B0E8
extern int ordertab_length;

// address: 0x8012B0EC
extern int time_in_frames;

// address: 0x8012B0F0
extern int stream_chunksize;

// address: 0x8012B0F4
extern int stream_bufsize;

// address: 0x8012B0F8
extern int stream_subsec;

// address: 0x8012B0FC
extern int stream_secnum;

// address: 0x8012B100
extern int stream_last_sector;

// address: 0x8012B104
extern int stream_startsec;

// address: 0x8012B108
extern int stream_opened;

// address: 0x8012B10C
extern int stream_last_chunk;

// address: 0x8012B110
extern int stream_got_chunks;

// address: 0x8012B114
extern int last_sector;

// address: 0x8012B118
extern int cdstream_resetsec;

// address: 0x8012B11C
extern int last_handler_event;

// address: 0x8012AFEC
extern bool user_start;

// address: 0x8012AF84
extern unsigned char *vlc_tab;

// address: 0x8012AF88
extern unsigned char *vlc_buf;

// address: 0x8012AF8C
extern unsigned char *img_buf;

// address: 0x8012AF90
extern int vbuf;

// address: 0x8012AF94
extern int last_fn;

// address: 0x8012AF98
extern int last_mdc;

// address: 0x8012AF9C
extern int slnum;

// address: 0x8012AFA0
extern int slices_to_do;

// address: 0x8012AFA4
extern int mbuf;

// address: 0x8012AFA8
extern int mfn;

// address: 0x8012AFAC
extern int last_move_mbuf;

// address: 0x8012AFB0
extern int move_request;

// address: 0x8012AFB4
extern int mdec_scale;

// address: 0x8012AFB8
extern int do_brightness;

// address: 0x8012AFBC
extern int frame_decoded;

// address: 0x8012AFC0
extern int mdec_streaming;

// address: 0x8012AFC4
extern int mdec_stream_size;

// address: 0x8012AFC8
extern int first_stream_frame;

// address: 0x8012AFCC
extern int stream_frames_played;

// address: 0x8012AFD0
extern int num_mdcs;

// address: 0x8012AFD4
extern int mdec_head;

// address: 0x8012AFD8
extern int mdec_tail;

// address: 0x8012AFDC
extern int mdec_waiting_tail;

// address: 0x8012AFE0
extern int mdecs_queued;

// address: 0x8012AFE4
extern int mdecs_waiting;

// address: 0x8012AFE8
extern int sfx_volume;

// address: 0x8012AFF0
extern int stream_chunks_in;

// address: 0x8012AFF4
extern int stream_chunks_total;

// address: 0x8012AFF8
extern int stream_in;

// address: 0x8012AFFC
extern int stream_out;

// address: 0x8012B000
extern int stream_stalled;

// address: 0x8012B004
extern int stream_ending;

// address: 0x8012B008
extern int stream_open;

// address: 0x8012B00C
extern int stream_handler_installed;

// address: 0x8012B010
extern int stream_chunks_borrowed;

// address: 0x8012B014
extern int _get_count;

// address: 0x8012B018
extern int _discard_count;

// address: 0x8012B01C
// size: 0x5C
extern struct TASK *CDTask;

// address: 0x8012B020
// size: 0x98
static struct cdstreamstruct *CDStream;

// address: 0x8012B024
extern int cdready_calls;

// address: 0x8012B028
extern int cdready_errors;

// address: 0x8012B02C
extern int cdready_out_of_sync;

// address: 0x8012B030
extern int cdstream_resetting;

// address: 0x8012B034
extern int sector_dma;

// address: 0x8012B038
extern int sector_dma_in;

// address: 0x8012B03C
extern unsigned long *chkaddr;

// address: 0x8012B040
// size: 0x8
extern struct chunkhdrstruct *chunk;

// address: 0x8012B044
extern int first_handler_event;

// address: 0x8012B1BC
extern unsigned char *pStatusPanel;

// address: 0x8012B1C0
extern unsigned char *pGBoxBuff;

// address: 0x8012B1C4
extern unsigned char dropGoldFlag;

// address: 0x8012B1C8
// size: 0x2
extern unsigned char _pinfoflag[2];

// address: 0x800BE724
// size: 0x200
extern char _infostr[256][2];

// address: 0x8012B1CC
// size: 0x2
extern char _infoclr[2];

// address: 0x800BE924
// size: 0x100
extern char tempstr[256];

// address: 0x8012B1CE
extern unsigned char drawhpflag;

// address: 0x8012B1CF
extern unsigned char drawmanaflag;

// address: 0x8012B1D0
extern unsigned char chrflag;

// address: 0x8012B1D1
extern unsigned char drawbtnflag;

// address: 0x8012B1D2
extern unsigned char panbtndown;

// address: 0x8012B1D3
extern unsigned char panelflag;

// address: 0x8012B1D4
extern unsigned char chrbtndown;

// address: 0x8012B1D5
extern unsigned char lvlbtndown;

// address: 0x8012B1D6
extern unsigned char sbookflag;

// address: 0x8012B1D7
extern unsigned char talkflag;

// address: 0x8012B1D8
extern int dropGoldValue;

// address: 0x8012B1DC
extern int initialDropGoldValue;

// address: 0x8012B1E0
extern int initialDropGoldIndex;

// address: 0x8012B1E4
extern unsigned char *pPanelButtons;

// address: 0x8012B1E8
extern unsigned char *pPanelText;

// address: 0x8012B1EC
extern unsigned char *pManaBuff;

// address: 0x8012B1F0
extern unsigned char *pLifeBuff;

// address: 0x8012B1F4
extern unsigned char *pChrPanel;

// address: 0x8012B1F8
extern unsigned char *pChrButtons;

// address: 0x8012B1FC
extern unsigned char *pSpellCels;

// address: 0x8012CA58
// size: 0x400
static char _panelstr[64][8][2];

// address: 0x8012CE58
// size: 0x40
static int _pstrjust[8][2];

// address: 0x8012C0B4
// size: 0x8
static int _pnumlines[2];

// address: 0x8012B200
// size: 0x8
extern struct RECT *InfoBoxRect;

// address: 0x8012B204
// size: 0x8
extern struct RECT CSRect;

// address: 0x8012C0C4
// size: 0x8
static int _pSpell[2];

// address: 0x8012C0CC
// size: 0x8
static int _pSplType[2];

// address: 0x8012C0D4
// size: 0x8
static unsigned char panbtn[8];

// address: 0x8012B20C
extern int numpanbtns;

// address: 0x8012B210
extern unsigned char *pDurIcons;

// address: 0x8012B214
extern unsigned char drawdurflag;

// address: 0x8012C0DC
// size: 0x4
static unsigned char chrbtn[4];

// address: 0x8012B215
extern unsigned char chrbtnactive;

// address: 0x8012B218
extern unsigned char *pSpellBkCel;

// address: 0x8012B21C
extern unsigned char *pSBkBtnCel;

// address: 0x8012B220
extern unsigned char *pSBkIconCels;

// address: 0x8012B224
extern int sbooktab;

// address: 0x8012B228
extern int cur_spel;

// address: 0x8012C0E0
static long talkofs;

// address: 0x8012CEA8
// size: 0x50
static char sgszTalkMsg[80];

// address: 0x8012C0E4
static unsigned char sgbTalkSavePos;

// address: 0x8012C0E5
static unsigned char sgbNextTalkSave;

// address: 0x8012C0E6
// size: 0x2
static unsigned char sgbPlrTalkTbl[2];

// address: 0x8012C0E8
static unsigned char *pTalkPanel;

// address: 0x8012C0EC
static unsigned char *pMultiBtns;

// address: 0x8012C0F0
static unsigned char *pTalkBtns;

// address: 0x8012C0F4
// size: 0x3
static unsigned char talkbtndown[3];

// address: 0x80120F6C
// size: 0x44
extern unsigned char fontkern[68];

// address: 0x800BE158
// size: 0x25
extern char SpellITbl[37];

// address: 0x8012B129
extern unsigned char DrawLevelUpFlag;

// address: 0x8012B150
// size: 0x8
extern struct TASK *_spselflag[2];

// address: 0x8012B14C
extern unsigned char spspelstate;

// address: 0x8012B18C
extern bool initchr;

// address: 0x8012B12C
static int SPLICONNO;

// address: 0x8012B130
static int SPLICONY;

// address: 0x8012C0BC
static int SPLICONRIGHT;

// address: 0x8012B134
static int scx;

// address: 0x8012B138
static int scy;

// address: 0x8012B13C
static int scx1;

// address: 0x8012B140
static int scy1;

// address: 0x8012B144
static int scx2;

// address: 0x8012B148
static int scy2;

// address: 0x8012B158
extern char SpellCol;

// address: 0x800BE144
// size: 0x12
extern unsigned char SpellColors[18];

// address: 0x800BE180
// size: 0xA0
extern int PanBtnPos[5][8];

// address: 0x800BE220
// size: 0x20
extern char *PanBtnHotKey[8];

// address: 0x800BE240
// size: 0x20
extern unsigned long PanBtnStr[8];

// address: 0x800BE260
// size: 0x64
extern int SpellPages[5][5];

// address: 0x8012B17C
static int lus;

// address: 0x8012B180
static int CsNo;

// address: 0x8012B184
static char plusanim;

// address: 0x8012CE98
// size: 0x10
static struct Dialog CSBack;

// address: 0x8012B188
static int CS_XOFF;

// address: 0x800BE2C4
// size: 0x460
extern struct CSDATA CS_Tab[28];

// address: 0x8012B190
extern int NoCSEntries;

// address: 0x8012B194
static int SPALOFF;

// address: 0x8012B198
static int paloffset1;

// address: 0x8012B19C
static int paloffset2;

// address: 0x8012B1A0
static int paloffset3;

// address: 0x8012B1A4
static int paloffset4;

// address: 0x8012B1A8
static int pinc1;

// address: 0x8012B1AC
static int pinc2;

// address: 0x8012B1B0
static int pinc3;

// address: 0x8012B1B4
static int pinc4;

// address: 0x8012B23C
// size: 0x8
extern int _pcurs[2];

// address: 0x8012B244
extern int cursW;

// address: 0x8012B248
extern int cursH;

// address: 0x8012B24C
extern int icursW;

// address: 0x8012B250
extern int icursH;

// address: 0x8012B254
extern int icursW28;

// address: 0x8012B258
extern int icursH28;

// address: 0x8012B25C
extern int cursmx;

// address: 0x8012B260
extern int cursmy;

// address: 0x8012B264
// size: 0x8
extern int _pcursmonst[2];

// address: 0x8012B26C
// size: 0x2
extern char _pcursobj[2];

// address: 0x8012B270
// size: 0x2
extern char _pcursitem[2];

// address: 0x8012B274
// size: 0x2
extern char _pcursinvitem[2];

// address: 0x8012B278
// size: 0x2
extern char _pcursplr[2];

// address: 0x8012B238
extern int sel_data;

// address: 0x800BEA24
// size: 0x174
extern struct DeadStruct dead[31];

// address: 0x8012B27C
extern int spurtndx;

// address: 0x8012B280
extern int stonendx;

// address: 0x8012B284
extern unsigned char *pSquareCel;

// address: 0x8012B2C4
extern unsigned long ghInst;

// address: 0x8012B2C8
extern unsigned char svgamode;

// address: 0x8012B2CC
extern int MouseX;

// address: 0x8012B2D0
extern int MouseY;

// address: 0x8012B2D4
extern long gv1;

// address: 0x8012B2D8
extern long gv2;

// address: 0x8012B2DC
extern long gv3;

// address: 0x8012B2E0
extern long gv4;

// address: 0x8012B2E4
extern long gv5;

// address: 0x8012B2E8
extern unsigned char gbProcessPlayers;

// address: 0x800BEB98
// size: 0x28
extern int DebugMonsters[10];

// address: 0x800BEBC0
// size: 0x44
extern unsigned long glSeedTbl[17];

// address: 0x800BEC04
// size: 0x44
extern int gnLevelTypeTbl[17];

// address: 0x8012B2E9
extern unsigned char gbDoEnding;

// address: 0x8012B2EA
extern unsigned char gbRunGame;

// address: 0x8012B2EB
extern unsigned char gbRunGameResult;

// address: 0x8012B2EC
extern unsigned char gbGameLoopStartup;

// address: 0x8012CEF8
// size: 0x44
static int glEndSeed[17];

// address: 0x8012CF48
// size: 0x44
static int glMid1Seed[17];

// address: 0x8012CF98
// size: 0x44
static int glMid2Seed[17];

// address: 0x8012CFE8
// size: 0x44
static int glMid3Seed[17];

// address: 0x8012C0F8
static long *sg_previousFilter;

// address: 0x800BEC48
// size: 0x30
extern int CreateEnv[12];

// address: 0x8012B2F0
extern int Passedlvldir;

// address: 0x8012B2F4
extern unsigned char *TempStack;

// address: 0x8012B294
extern unsigned long ghMainWnd;

// address: 0x8012B298
extern unsigned char fullscreen;

// address: 0x8012B29C
extern int force_redraw;

// address: 0x8012B2B0
extern unsigned char PauseMode;

// address: 0x8012B2B1
extern unsigned char FriendlyMode;

// address: 0x8012B2A1
extern unsigned char visiondebug;

// address: 0x8012B2A3
extern unsigned char light4flag;

// address: 0x8012B2A4
extern unsigned char leveldebug;

// address: 0x8012B2A5
extern unsigned char monstdebug;

// address: 0x8012B2AC
extern int debugmonsttypes;

// address: 0x8012B2A0
static unsigned char cineflag;

// address: 0x8012B2A2
extern unsigned char scrollflag;

// address: 0x8012B2A6
extern unsigned char trigdebug;

// address: 0x8012B2A8
extern int setseed;

// address: 0x8012B2B4
static int sgnTimeoutCurs;

// address: 0x8012B2B8
extern unsigned char sgbMouseDown;

// address: 0x800BF314
// size: 0xE00
extern struct TownerStruct towner[16];

// address: 0x8012B30C
extern int numtowners;

// address: 0x8012B310
extern unsigned char storeflag;

// address: 0x8012B311
extern unsigned char boyloadflag;

// address: 0x8012B312
extern unsigned char bannerflag;

// address: 0x8012B314
extern unsigned char *pCowCels;

// address: 0x8012C0FC
static unsigned long sgdwCowClicks;

// address: 0x8012C100
static int sgnCowMsg;

// address: 0x800BF054
// size: 0x2C0
extern int Qtalklist[16][11];

// address: 0x8012B304
extern unsigned long CowPlaying;

// address: 0x800BEC78
// size: 0x378
extern char AnimOrder[148][6];

// address: 0x800BEFF0
// size: 0xC
extern int TownCowX[3];

// address: 0x800BEFFC
// size: 0xC
extern int TownCowY[3];

// address: 0x800BF008
// size: 0xC
extern int TownCowDir[3];

// address: 0x800BF014
// size: 0x20
extern int cowoffx[8];

// address: 0x800BF034
// size: 0x20
extern int cowoffy[8];

// address: 0x8012B32C
extern int sfxdelay;

// address: 0x8012B330
extern int sfxdnum;

// address: 0x8012B324
// size: 0x80
extern struct SFXHDR *sghStream;

// address: 0x800C0114
// size: 0xF50
extern struct TSFX sgSFX[980];

// address: 0x8012B328
// size: 0x4
extern struct TSFX *sgpStreamSFX;

// address: 0x8012B334
extern long orgseed;

// address: 0x8012C104
static long sglGameSeed;

// address: 0x8012B338
extern int SeedCount;

// address: 0x8012C108
// size: 0x4
static struct CCritSect sgMemCrit;

// address: 0x8012C10C
static int sgnWidth;

// address: 0x8012B346
extern char msgflag;

// address: 0x8012B347
extern char msgdelay;

// address: 0x800C1114
// size: 0x50
extern char msgtable[80];

// address: 0x800C1064
// size: 0xB0
extern int MsgStrings[44];

// address: 0x8012B345
extern char msgcnt;

// address: 0x8012C110
static unsigned long sgdwProgress;

// address: 0x8012C114
static unsigned long sgdwXY;

// address: 0x800C1164
// size: 0x9D
extern unsigned char AllItemsUseable[157];

// address: 0x80121364
// size: 0x13A0
extern struct ItemDataStruct AllItemsList[157];

// address: 0x80122704
// size: 0xD20
extern struct PLStruct PL_Prefix[84];

// address: 0x80123424
// size: 0xF00
extern struct PLStruct PL_Suffix[96];

// address: 0x80124324
// size: 0x1DDC
extern struct UItemStruct UniqueItemList[91];

// address: 0x800C1378
// size: 0x4C00
extern struct ItemStruct item[128];

// address: 0x800C5F78
// size: 0x7F
extern char itemactive[127];

// address: 0x800C5FF8
// size: 0x7F
extern char itemavail[127];

// address: 0x800C6078
// size: 0x80
extern unsigned char UniqueItemFlag[128];

// address: 0x8012B380
extern unsigned char uitemflag;

// address: 0x8012C118
static int tem;

// address: 0x8012D030
// size: 0x98
static struct ItemStruct curruitem;

// address: 0x8012D0D0
// size: 0x9
static unsigned char itemhold[3][3];

// address: 0x8012B384
extern int ScrollType;

// address: 0x800C60F8
// size: 0x40
extern char ItemStr[64];

// address: 0x800C6138
// size: 0x40
extern char SufStr[64];

// address: 0x8012B360
extern long numitems;

// address: 0x8012B364
extern int gnNumGetRecords;

// address: 0x800C12D4
// size: 0x8C
extern int ItemInvSnds[35];

// address: 0x800C1204
// size: 0xA9
extern unsigned char ItemCAnimTbl[169];

// address: 0x80126168
// size: 0x46
static short Item2Frm[35];

// address: 0x800C12B0
// size: 0x23
extern unsigned char ItemAnimLs[35];

// address: 0x8012B368
extern int *ItemAnimSnds;

// address: 0x8012B36C
extern int idoppely;

// address: 0x8012B370
extern int ScrollFlag;

// address: 0x800C1360
// size: 0x18
extern int premiumlvladd[6];

// address: 0x800C6F24
// size: 0x140
extern struct LightListStruct2 LightList[40];

// address: 0x800C7064
// size: 0x28
extern unsigned char lightactive[40];

// address: 0x8012B398
extern int numlights;

// address: 0x8012B39C
extern char lightmax;

// address: 0x800C708C
// size: 0x1C0
extern struct LightListStruct VisionList[32];

// address: 0x8012B3A0
extern int numvision;

// address: 0x8012B3A4
extern unsigned char dovision;

// address: 0x8012B3A8
extern int visionid;

// address: 0x8012C11C
static int disp_mask;

// address: 0x8012C120
static int weird;

// address: 0x8012C124
static int disp_tab_r;

// address: 0x8012C128
static int dispy_r;

// address: 0x8012C12C
static int disp_tab_g;

// address: 0x8012C130
static int dispy_g;

// address: 0x8012C134
static int disp_tab_b;

// address: 0x8012C138
static int dispy_b;

// address: 0x8012C13C
static int radius;

// address: 0x8012C140
static int bright;

// address: 0x8012D0E0
// size: 0x80
static unsigned char mult_tab[128];

// address: 0x8012B388
extern int lightflag;

// address: 0x800C6C38
// size: 0x2B2
extern unsigned char vCrawlTable[30][23];

// address: 0x800C6EEC
// size: 0x17
extern unsigned char RadiusAdj[23];

// address: 0x800C6178
// size: 0xABD
extern char CrawlTable[2749];

// address: 0x8012B38C
extern int restore_r;

// address: 0x8012B390
extern int restore_g;

// address: 0x8012B394
extern int restore_b;

// address: 0x800C6F04
// size: 0x10
extern char radius_tab[16];

// address: 0x800C6F14
// size: 0x10
extern char bright_tab[16];

// address: 0x8012B3C9
extern unsigned char qtextflag;

// address: 0x8012B3CC
extern int qtextSpd;

// address: 0x8012C144
static unsigned char *pMedTextCels;

// address: 0x8012C148
static unsigned char *pTextBoxCels;

// address: 0x8012C14C
static char *qtextptr;

// address: 0x8012C150
static int qtexty;

// address: 0x8012C154
static unsigned long qtextDelay;

// address: 0x8012C158
static unsigned long sgLastScroll;

// address: 0x8012C15C
static unsigned long scrolltexty;

// address: 0x8012C160
static long sglMusicVolumeSave;

// address: 0x8012B3B8
static bool qtbodge;

// address: 0x800C724C
// size: 0x10
extern struct Dialog QBack;

// address: 0x800C725C
// size: 0x660
extern struct MissileData missiledata[68];

// address: 0x800C79CC
// size: 0xEB
extern struct MisFileData misfiledata[47];

// address: 0x800C78BC
// size: 0x110
extern void (*MissPrintRoutines[68])();

// address: 0x800C7AB8
// size: 0x13D4C
extern struct DLevel sgLevels[21];

// address: 0x800DB804
// size: 0x1068
extern struct LocalLevel sgLocals[21];

// address: 0x8012D160
// size: 0x16
static struct DJunk sgJunk;

// address: 0x8012C165
static unsigned char sgbRecvCmd;

// address: 0x8012C168
static unsigned long sgdwRecvOffset;

// address: 0x8012C16C
static unsigned char sgbDeltaChunks;

// address: 0x8012C16D
static unsigned char sgbDeltaChanged;

// address: 0x8012C170
static unsigned long sgdwOwnerWait;

// address: 0x8012C174
// size: 0x7D08
static struct TMegaPkt *sgpMegaPkt;

// address: 0x8012C178
// size: 0x7D08
static struct TMegaPkt *sgpCurrPkt;

// address: 0x8012C17C
static int sgnCurrMegaPlayer;

// address: 0x8012B3E5
extern unsigned char deltaload;

// address: 0x8012B3E6
extern unsigned char gbBufferMsgs;

// address: 0x8012B3E8
extern unsigned long dwRecCount;

// address: 0x8012B3EC
extern bool LevelOut;

// address: 0x8012B402
extern unsigned char gbMaxPlayers;

// address: 0x8012B403
extern unsigned char gbActivePlayers;

// address: 0x8012B404
extern unsigned char gbGameDestroyed;

// address: 0x8012B405
extern unsigned char gbDeltaSender;

// address: 0x8012B406
extern unsigned char gbSelectProvider;

// address: 0x8012B407
extern unsigned char gbSomebodyWonGameKludge;

// address: 0x8012C180
static unsigned char sgbSentThisCycle;

// address: 0x8012C184
static unsigned long sgdwGameLoops;

// address: 0x8012C188
// size: 0x4
static unsigned short sgwPackPlrOffsetTbl[2];

// address: 0x8012C18C
// size: 0x2
static unsigned char sgbPlayerLeftGameTbl[2];

// address: 0x8012C190
// size: 0x8
static unsigned long sgdwPlayerLeftReasonTbl[2];

// address: 0x8012C198
// size: 0x2
static unsigned char sgbSendDeltaTbl[2];

// address: 0x8012C1A0
// size: 0x8
static struct _gamedata sgGameInitInfo;

// address: 0x8012C1A8
static unsigned char sgbTimeout;

// address: 0x8012C1AC
static long sglTimeoutStart;

// address: 0x8012B3FC
// size: 0x5
extern char gszVersionNumber[5];

// address: 0x8012B401
static unsigned char sgbNetInited;

// address: 0x800DC86C
// size: 0x1C4
extern int ObjTypeConv[113];

// address: 0x800DCA30
// size: 0x6F6
extern struct ObjDataStruct AllObjects[99];

// address: 0x80126830
// size: 0xE0
extern struct OBJ_LOAD_INFO ObjMasterLoadList[56];

// address: 0x800DD210
// size: 0x15D4
extern struct ObjectStruct object[127];

// address: 0x8012B428
extern long numobjects;

// address: 0x800DE7E4
// size: 0x7F
extern char objectactive[127];

// address: 0x800DE864
// size: 0x7F
extern char objectavail[127];

// address: 0x8012B42C
extern unsigned char InitObjFlag;

// address: 0x8012B430
extern int trapid;

// address: 0x800DE8E4
// size: 0x28
extern char ObjFileList[40];

// address: 0x8012B434
extern int trapdir;

// address: 0x8012B438
extern int leverid;

// address: 0x8012B420
extern int numobjfiles;

// address: 0x800DD128
// size: 0x20
extern int bxadd[8];

// address: 0x800DD148
// size: 0x20
extern int byadd[8];

// address: 0x800DD1D0
// size: 0x1A
extern char shrineavail[26];

// address: 0x800DD168
// size: 0x68
extern int shrinestrs[26];

// address: 0x800DD1EC
// size: 0x24
extern int StoryBookName[9];

// address: 0x8012B424
extern int myscale;

// address: 0x8012B44C
extern unsigned char gbValidSaveFile;

// address: 0x8012B448
extern bool DoLoadedChar;

// address: 0x800DEB04
// size: 0x4750
extern struct PlayerStruct plr[2];

// address: 0x8012B46C
extern int myplr;

// address: 0x8012B470
extern int deathdelay;

// address: 0x8012B474
extern unsigned char deathflag;

// address: 0x8012B475
extern char light_rad;

// address: 0x8012B464
// size: 0x5
extern char light_level[5];

// address: 0x800DE9FC
// size: 0x30
extern int MaxStats[4][3];

// address: 0x8012B45C
static int PlrStructSize;

// address: 0x8012B460
static int ItemStructSize;

// address: 0x800DE90C
// size: 0x24
extern int plrxoff[9];

// address: 0x800DE930
// size: 0x24
extern int plryoff[9];

// address: 0x800DE954
// size: 0x24
extern int plrxoff2[9];

// address: 0x800DE978
// size: 0x24
extern int plryoff2[9];

// address: 0x800DE99C
// size: 0x21
extern char PlrGFXAnimLens[11][3];

// address: 0x800DE9C0
// size: 0xC
extern int StrengthTbl[3];

// address: 0x800DE9CC
// size: 0xC
extern int MagicTbl[3];

// address: 0x800DE9D8
// size: 0xC
extern int DexterityTbl[3];

// address: 0x800DE9E4
// size: 0xC
extern int VitalityTbl[3];

// address: 0x800DE9F0
// size: 0xC
extern int ToBlkTbl[3];

// address: 0x800DEA2C
// size: 0xCC
extern long ExpLvlsTbl[51];

// address: 0x800E338C
// size: 0x140
extern struct QuestStruct quests[16];

// address: 0x8012B4B4
extern unsigned char *pQLogCel;

// address: 0x8012B4B8
extern int ReturnLvlX;

// address: 0x8012B4BC
extern int ReturnLvlY;

// address: 0x8012B4C0
extern int ReturnLvl;

// address: 0x8012B4C4
extern int ReturnLvlT;

// address: 0x8012B4C8
extern unsigned char rporttest;

// address: 0x8012B4CC
extern int qline;

// address: 0x8012B4D0
extern int numqlines;

// address: 0x8012B4D4
extern int qtopline;

// address: 0x8012D178
// size: 0x40
static int qlist[16];

// address: 0x8012C1B0
// size: 0x8
static struct RECT QSRect;

// address: 0x8012B481
extern unsigned char questlog;

// address: 0x800E3254
// size: 0x100
extern struct QuestData questlist[16];

// address: 0x8012B484
extern int ALLQUESTS;

// address: 0x800E3368
// size: 0xC
extern int QuestGroup1[3];

// address: 0x800E3374
// size: 0xC
extern int QuestGroup2[3];

// address: 0x800E3380
// size: 0xC
extern int QuestGroup3[3];

// address: 0x8012B498
// size: 0x8
extern int QuestGroup4[2];

// address: 0x8012B4B0
extern bool WaterDone;

// address: 0x8012B488
// size: 0x7
static char questxoff[7];

// address: 0x8012B490
// size: 0x7
static char questyoff[7];

// address: 0x800E3354
// size: 0x14
extern int questtrigstr[5];

// address: 0x8012B4A0
static int QS_PX;

// address: 0x8012B4A4
static int QS_PY;

// address: 0x8012B4A8
static int QS_PW;

// address: 0x8012B4AC
static int QS_PH;

// address: 0x8012D1B8
// size: 0x10
static struct Dialog QSBack;

// address: 0x800E34CC
// size: 0x784
extern struct SpellData spelldata[37];

// address: 0x8012B50F
extern char stextflag;

// address: 0x800E3D74
// size: 0xBE0
extern struct ItemStruct smithitem[20];

// address: 0x800E4954
// size: 0x390
extern struct ItemStruct premiumitem[6];

// address: 0x8012B510
extern int numpremium;

// address: 0x8012B514
extern int premiumlevel;

// address: 0x800E4CE4
// size: 0xBE0
extern struct ItemStruct witchitem[20];

// address: 0x800E58C4
// size: 0x98
extern struct ItemStruct boyitem;

// address: 0x8012B518
extern int boylevel;

// address: 0x800E595C
// size: 0x98
extern struct ItemStruct golditem;

// address: 0x800E59F4
// size: 0xBE0
extern struct ItemStruct healitem[20];

// address: 0x8012B51C
extern char stextsize;

// address: 0x8012B51D
extern unsigned char stextscrl;

// address: 0x8012C1B8
static int stextsel;

// address: 0x8012C1BC
static int stextlhold;

// address: 0x8012C1C0
static int stextshold;

// address: 0x8012C1C4
static int stextvhold;

// address: 0x8012C1C8
static int stextsval;

// address: 0x8012C1CC
static int stextsmax;

// address: 0x8012C1D0
static int stextup;

// address: 0x8012C1D4
static int stextdown;

// address: 0x8012C1D8
static char stextscrlubtn;

// address: 0x8012C1D9
static char stextscrldbtn;

// address: 0x8012C1DA
static char SItemListFlag;

// address: 0x8012D1C8
// size: 0xD20
static struct STextStruct stext[24];

// address: 0x800E65D4
// size: 0x1C80
extern struct ItemStruct storehold[48];

// address: 0x800E8254
// size: 0x30
extern char storehidx[48];

// address: 0x8012C1DC
static int storenumh;

// address: 0x8012C1E0
static int gossipstart;

// address: 0x8012C1E4
static int gossipend;

// address: 0x8012C1E8
// size: 0x8
static struct RECT StoreBackRect;

// address: 0x8012C1F0
static int talker;

// address: 0x8012B4FC
extern unsigned char *pSTextBoxCels;

// address: 0x8012B500
extern unsigned char *pSTextSlidCels;

// address: 0x8012B504
extern int *SStringY;

// address: 0x800E3C50
// size: 0x10
extern struct Dialog SBack;

// address: 0x800E3C60
// size: 0x50
extern int SStringYNorm[20];

// address: 0x800E3CB0
// size: 0x50
extern int SStringYBuy0[20];

// address: 0x800E3D00
// size: 0x50
extern int SStringYBuy1[20];

// address: 0x800E3D50
// size: 0x24
extern int talkname[9];

// address: 0x8012B50E
extern unsigned char InStoreFlag;

// address: 0x80127A84
// size: 0xC9C
extern struct TextDataStruct alltext[269];

// address: 0x8012B52C
extern unsigned long gdwAllTextEntries;

// address: 0x8012C1F4
static unsigned char *P3Tiles;

// address: 0x8012B53C
extern int tile;

// address: 0x8012B54C
// size: 0x2
extern unsigned char _trigflag[2];

// address: 0x800E84BC
// size: 0x50
extern struct TriggerStruct trigs[5];

// address: 0x8012B550
extern int numtrigs;

// address: 0x8012B554
// size: 0x3
extern unsigned char townwarps[3];

// address: 0x8012B558
extern int TWarpFrom;

// address: 0x800E8284
// size: 0x2C
extern int TownDownList[11];

// address: 0x800E82B0
// size: 0x34
extern int TownWarp1List[13];

// address: 0x800E82E4
// size: 0x30
extern int L1UpList[12];

// address: 0x800E8314
// size: 0x28
extern int L1DownList[10];

// address: 0x800E833C
// size: 0xC
extern int L2UpList[3];

// address: 0x800E8348
// size: 0x14
extern int L2DownList[5];

// address: 0x800E835C
// size: 0xC
extern int L2TWarpUpList[3];

// address: 0x800E8368
// size: 0x3C
extern int L3UpList[15];

// address: 0x800E83A4
// size: 0x24
extern int L3DownList[9];

// address: 0x800E83C8
// size: 0x38
extern int L3TWarpUpList[14];

// address: 0x800E8400
// size: 0x10
extern int L4UpList[4];

// address: 0x800E8410
// size: 0x18
extern int L4DownList[6];

// address: 0x800E8428
// size: 0x10
extern int L4TWarpUpList[4];

// address: 0x800E8438
// size: 0x84
extern int L4PentaList[33];

// address: 0x80128814
// size: 0xA
static char cursoff[10];

// address: 0x8012B572
extern unsigned char gbMusicOn;

// address: 0x8012B573
extern unsigned char gbSoundOn;

// address: 0x8012B571
extern unsigned char gbSndInited;

// address: 0x8012B578
extern long sglMasterVolume;

// address: 0x8012B57C
extern long sglMusicVolume;

// address: 0x8012B580
extern long sglSoundVolume;

// address: 0x8012B584
extern long sglSpeechVolume;

// address: 0x8012B588
extern int sgnMusicTrack;

// address: 0x8012B574
extern unsigned char gbDupSounds;

// address: 0x8012B58C
// size: 0x80
extern struct SFXHDR *sghMusic;

// address: 0x801288C0
// size: 0xC
static unsigned short sgszMusicTracks[6];

// address: 0x8012B5B0
// size: 0x8
extern int _pcurr_inv[2];

// address: 0x800E850C
// size: 0x50
extern struct found_objects _pfind_list[10][2];

// address: 0x8012B5B8
// size: 0x2
extern char _pfind_index[2];

// address: 0x8012B5BC
// size: 0x2
extern char _pfindx[2];

// address: 0x8012B5C0
// size: 0x2
extern char _pfindy[2];

// address: 0x8012B5C2
extern unsigned char automapmoved;

// address: 0x8012B5A4
extern unsigned char flyflag;

// address: 0x8012B59C
// size: 0x8
extern char (*pad_styles[2])();

// address: 0x8012B5A5
extern char speed_type;

// address: 0x8012B5A6
extern char sel_speed;

// address: 0x8012C1F8
static unsigned long (*CurrentProc)();

// address: 0x80128A5C
// size: 0x60
static struct MESSAGE_STR AllMsgs[12];

// address: 0x8012B5FC
extern int NumOfStrings;

// address: 0x8012B5D0
// size: 0x4
extern enum LANG_TYPE LanguageType;

// address: 0x8012B5D4
extern long hndText;

// address: 0x8012B5D8
extern char **TextPtr;

// address: 0x8012B5DC
// size: 0x4
extern enum LANG_DB_NO LangDbNo;

// address: 0x8012B60C
// size: 0x6C
extern struct TextDat *MissDat;

// address: 0x8012B610
extern int CharFade;

// address: 0x8012B614
extern int rotateness;

// address: 0x8012B618
extern int spiralling_shape;

// address: 0x8012B61C
extern int down;

// address: 0x800E855C
// size: 0x10
extern char MlTab[16];

// address: 0x800E856C
// size: 0x10
extern char QlTab[16];

// address: 0x800E857C
// size: 0x188
extern struct POLY_FT4 *(*ObjPrintFuncs[98])();

// address: 0x8012B638
extern int MyXoff1;

// address: 0x8012B63C
extern int MyYoff1;

// address: 0x8012B640
extern int MyXoff2;

// address: 0x8012B644
extern int MyYoff2;

// address: 0x8012B654
extern bool iscflag;

// address: 0x8012B661
static unsigned char sgbFadedIn;

// address: 0x8012B662
static unsigned char screenbright;

// address: 0x8012B664
static int faderate;

// address: 0x8012B668
static bool fading;

// address: 0x8012B674
// size: 0x8
static unsigned char FadeCoords[8];

// address: 0x8012B66C
extern int st;

// address: 0x8012B670
extern int mode;

// address: 0x800E8704
// size: 0x18
extern struct PortalStruct portal[2];

// address: 0x8012B6A6
extern char portalindex;

// address: 0x8012B6A0
// size: 0x2
static char WarpDropX[2];

// address: 0x8012B6A4
// size: 0x2
static char WarpDropY[2];

// address: 0x800E871C
// size: 0x78
extern char MyVerString[120];

// address: 0x8012B818
extern int Year;

// address: 0x8012B81C
extern int Day;

// address: 0x8012C1FC
static unsigned char *tbuff;

// address: 0x800E8794
// size: 0x300
extern unsigned char IconBuffer[768];

// address: 0x8012C200
static unsigned char HR1;

// address: 0x8012C201
static unsigned char HR2;

// address: 0x8012C202
static unsigned char HR3;

// address: 0x8012C203
static unsigned char VR1;

// address: 0x8012C204
static unsigned char VR2;

// address: 0x8012C205
static unsigned char VR3;

// address: 0x8012B88C
// size: 0x18
extern struct NODE *pHallList;

// address: 0x8012B890
extern int nRoomCnt;

// address: 0x8012B894
extern int nSx1;

// address: 0x8012B898
extern int nSy1;

// address: 0x8012B89C
extern int nSx2;

// address: 0x8012B8A0
extern int nSy2;

// address: 0x8012B844
extern int Area_Min;

// address: 0x8012B848
extern int Room_Max;

// address: 0x8012B84C
extern int Room_Min;

// address: 0x8012B850
// size: 0x6
extern unsigned char BIG3[6];

// address: 0x8012B858
// size: 0x6
extern unsigned char BIG4[6];

// address: 0x8012B860
// size: 0x6
extern unsigned char BIG6[6];

// address: 0x8012B868
// size: 0x6
extern unsigned char BIG7[6];

// address: 0x8012B870
// size: 0x4
extern unsigned char RUINS1[4];

// address: 0x8012B874
// size: 0x4
extern unsigned char RUINS2[4];

// address: 0x8012B878
// size: 0x4
extern unsigned char RUINS3[4];

// address: 0x8012B87C
// size: 0x4
extern unsigned char RUINS4[4];

// address: 0x8012B880
// size: 0x4
extern unsigned char RUINS5[4];

// address: 0x8012B884
// size: 0x4
extern unsigned char RUINS6[4];

// address: 0x8012B888
// size: 0x4
extern unsigned char RUINS7[4];

// address: 0x8012C208
static int abyssx;

// address: 0x8012C20C
static unsigned char lavapool;

// address: 0x8012B92C
extern int lockoutcnt;

// address: 0x8012B8B0
// size: 0x6
static unsigned char L3TITE12[6];

// address: 0x8012B8B8
// size: 0x6
static unsigned char L3TITE13[6];

// address: 0x8012B8C0
// size: 0x6
static unsigned char L3CREV1[6];

// address: 0x8012B8C8
// size: 0x6
static unsigned char L3CREV2[6];

// address: 0x8012B8D0
// size: 0x6
static unsigned char L3CREV3[6];

// address: 0x8012B8D8
// size: 0x6
static unsigned char L3CREV4[6];

// address: 0x8012B8E0
// size: 0x6
static unsigned char L3CREV5[6];

// address: 0x8012B8E8
// size: 0x6
static unsigned char L3CREV6[6];

// address: 0x8012B8F0
// size: 0x6
static unsigned char L3CREV7[6];

// address: 0x8012B8F8
// size: 0x6
static unsigned char L3CREV8[6];

// address: 0x8012B900
// size: 0x6
static unsigned char L3CREV9[6];

// address: 0x8012B908
// size: 0x6
static unsigned char L3CREV10[6];

// address: 0x8012B910
// size: 0x6
static unsigned char L3CREV11[6];

// address: 0x8012B918
// size: 0x4
static unsigned char L3XTRA1[4];

// address: 0x8012B91C
// size: 0x4
static unsigned char L3XTRA2[4];

// address: 0x8012B920
// size: 0x4
static unsigned char L3XTRA3[4];

// address: 0x8012B924
// size: 0x4
static unsigned char L3XTRA4[4];

// address: 0x8012B928
// size: 0x4
static unsigned char L3XTRA5[4];

// address: 0x8012B930
extern int diabquad1x;

// address: 0x8012B934
extern int diabquad2x;

// address: 0x8012B938
extern int diabquad3x;

// address: 0x8012B93C
extern int diabquad4x;

// address: 0x8012B940
extern int diabquad1y;

// address: 0x8012B944
extern int diabquad2y;

// address: 0x8012B948
extern int diabquad3y;

// address: 0x8012B94C
extern int diabquad4y;

// address: 0x8012B950
extern int SP4x1;

// address: 0x8012B954
extern int SP4y1;

// address: 0x8012B958
extern int SP4x2;

// address: 0x8012B95C
extern int SP4y2;

// address: 0x8012B960
extern int l4holdx;

// address: 0x8012B964
extern int l4holdy;

// address: 0x8012C210
static unsigned char *lpSetPiece1;

// address: 0x8012C214
static unsigned char *lpSetPiece2;

// address: 0x8012C218
static unsigned char *lpSetPiece3;

// address: 0x8012C21C
static unsigned char *lpSetPiece4;

// address: 0x8012B974
// size: 0x8
static unsigned char SkelKingTrans1[8];

// address: 0x8012B97C
// size: 0x8
static unsigned char SkelKingTrans2[8];

// address: 0x800E8A94
// size: 0x14
static unsigned char SkelKingTrans3[20];

// address: 0x800E8AA8
// size: 0x1C
static unsigned char SkelKingTrans4[28];

// address: 0x800E8AC4
// size: 0x14
static unsigned char SkelChamTrans1[20];

// address: 0x8012B984
// size: 0x8
static unsigned char SkelChamTrans2[8];

// address: 0x800E8AD8
// size: 0x24
static unsigned char SkelChamTrans3[36];

// address: 0x8012BA78
static bool DoUiForChooseMonster;

// address: 0x800E8AFC
// size: 0x88
static char *MgToText[34];

// address: 0x800E8B84
// size: 0x24
extern int StoryText[3][3];

// address: 0x800E8BA8
// size: 0x1200
extern unsigned short dungeon[48][48];

// address: 0x800E9DA8
// size: 0x640
extern unsigned char pdungeon[40][40];

// address: 0x800EA3E8
// size: 0x640
extern unsigned char dflags[40][40];

// address: 0x8012BA9C
extern int setpc_x;

// address: 0x8012BAA0
extern int setpc_y;

// address: 0x8012BAA4
extern int setpc_w;

// address: 0x8012BAA8
extern int setpc_h;

// address: 0x8012BAAC
extern unsigned char setloadflag;

// address: 0x8012BAB0
extern unsigned char *pMegaTiles;

// address: 0x800EAA28
// size: 0x801
extern unsigned char nBlockTable[2049];

// address: 0x800EB22C
// size: 0x801
extern unsigned char nSolidTable[2049];

// address: 0x800EBA30
// size: 0x801
extern unsigned char nTransTable[2049];

// address: 0x800EC234
// size: 0x801
extern unsigned char nMissileTable[2049];

// address: 0x800ECA38
// size: 0x801
extern unsigned char nTrapTable[2049];

// address: 0x8012BAB4
extern int dminx;

// address: 0x8012BAB8
extern int dminy;

// address: 0x8012BABC
extern int dmaxx;

// address: 0x8012BAC0
extern int dmaxy;

// address: 0x8012BAC4
extern int gnDifficulty;

// address: 0x8012BAC8
extern unsigned char currlevel;

// address: 0x8012BAC9
extern unsigned char leveltype;

// address: 0x8012BACA
extern unsigned char setlevel;

// address: 0x8012BACB
extern unsigned char setlvlnum;

// address: 0x8012BACC
extern unsigned char setlvltype;

// address: 0x8012BAD0
extern int ViewX;

// address: 0x8012BAD4
extern int ViewY;

// address: 0x8012BAD8
extern int ViewDX;

// address: 0x8012BADC
extern int ViewDY;

// address: 0x8012BAE0
extern int ViewBX;

// address: 0x8012BAE4
extern int ViewBY;

// address: 0x800ED23C
// size: 0x14
extern struct ScrollStruct ScrollInfo;

// address: 0x8012BAE8
extern int LvlViewX;

// address: 0x8012BAEC
extern int LvlViewY;

// address: 0x8012BAF0
extern int btmbx;

// address: 0x8012BAF4
extern int btmby;

// address: 0x8012BAF8
extern int btmdx;

// address: 0x8012BAFC
extern int btmdy;

// address: 0x8012BB00
extern int MicroTileLen;

// address: 0x8012BB04
extern char TransVal;

// address: 0x800ED250
// size: 0x20
extern bool TransList[8];

// address: 0x8012BB08
extern int themeCount;

// address: 0x800ED270
// size: 0x222C0
extern struct map_info dung_map[108][108];

// address: 0x8010F530
// size: 0xB64
extern unsigned char dung_map_r[54][54];

// address: 0x80110094
// size: 0xB64
extern unsigned char dung_map_g[54][54];

// address: 0x80110BF8
// size: 0xB64
extern unsigned char dung_map_b[54][54];

// address: 0x8011175C
// size: 0xAA
extern struct MINIXY MinisetXY[17];

// address: 0x8012BA94
extern unsigned char *pSetPiece;

// address: 0x8012BA98
extern int DungSize;

// address: 0x80111928
// size: 0x190
extern struct ThemeStruct theme[50];

// address: 0x8012BB48
extern int numthemes;

// address: 0x8012BB4C
extern int zharlib;

// address: 0x8012BB50
extern unsigned char armorFlag;

// address: 0x8012BB51
extern unsigned char bCrossFlag;

// address: 0x8012BB52
extern unsigned char weaponFlag;

// address: 0x8012BB54
extern int themex;

// address: 0x8012BB58
extern int themey;

// address: 0x8012BB5C
extern int themeVar1;

// address: 0x8012BB60
extern unsigned char bFountainFlag;

// address: 0x8012BB61
extern unsigned char cauldronFlag;

// address: 0x8012BB62
extern unsigned char mFountainFlag;

// address: 0x8012BB63
extern unsigned char pFountainFlag;

// address: 0x8012BB64
extern unsigned char tFountainFlag;

// address: 0x8012BB65
extern unsigned char treasureFlag;

// address: 0x8012BB68
// size: 0x4
extern unsigned char ThemeGoodIn[4];

// address: 0x80111808
// size: 0x10
extern int ThemeGood[4];

// address: 0x80111818
// size: 0x64
extern int trm5x[25];

// address: 0x8011187C
// size: 0x64
extern int trm5y[25];

// address: 0x801118E0
// size: 0x24
extern int trm3x[9];

// address: 0x80111904
// size: 0x24
extern int trm3y[9];

// address: 0x8012BC20
extern int nummissiles;

// address: 0x80111B40
// size: 0x1F4
extern int missileactive[125];

// address: 0x80111D34
// size: 0x1F4
extern int missileavail[125];

// address: 0x8012BC24
extern unsigned char MissilePreFlag;

// address: 0x80111F28
// size: 0x2710
extern struct MissileStruct missile[125];

// address: 0x8012BC25
extern unsigned char ManashieldFlag;

// address: 0x8012BC26
extern unsigned char ManashieldFlag2;

// address: 0x80111AB8
// size: 0x20
extern int XDirAdd[8];

// address: 0x80111AD8
// size: 0x20
extern int YDirAdd[8];

// address: 0x8012BC0D
extern unsigned char fadetor;

// address: 0x8012BC0E
extern unsigned char fadetog;

// address: 0x8012BC0F
extern unsigned char fadetob;

// address: 0x80111AF8
// size: 0x10
extern unsigned char ValueTable[16];

// address: 0x80111B08
// size: 0x36
extern unsigned char StringTable[9][6];

// address: 0x801147D8
// size: 0x5780
extern struct MonsterStruct monster[200];

// address: 0x8012BC84
extern long nummonsters;

// address: 0x80119F58
// size: 0x190
extern short monstactive[200];

// address: 0x8011A0E8
// size: 0x190
extern short monstkills[200];

// address: 0x8011A278
// size: 0x1C0
extern struct CMonster Monsters[16];

// address: 0x8012BC88
extern long monstimgtot;

// address: 0x8012BC8C
extern char totalmonsters;

// address: 0x8012BC90
extern int uniquetrans;

// address: 0x8012C220
static unsigned char sgbSaveSoundOn;

// address: 0x8012BC58
// size: 0x8
extern char offset_x[8];

// address: 0x8012BC60
// size: 0x8
extern char offset_y[8];

// address: 0x8012BC40
// size: 0x8
extern char left[8];

// address: 0x8012BC48
// size: 0x8
extern char right[8];

// address: 0x8012BC50
// size: 0x8
extern char opposite[8];

// address: 0x8012BC34
extern int nummtypes;

// address: 0x8012BC38
// size: 0x7
extern char animletter[7];

// address: 0x80114638
// size: 0x120
extern int MWVel[3][24];

// address: 0x8012BC68
// size: 0x4
extern char rnd5[4];

// address: 0x8012BC6C
// size: 0x4
extern char rnd10[4];

// address: 0x8012BC70
// size: 0x4
extern char rnd20[4];

// address: 0x8012BC74
// size: 0x4
extern char rnd60[4];

// address: 0x80114758
// size: 0x80
extern void (*AiProc[32])();

// address: 0x8011A750
// size: 0x1A40
extern struct MonsterData monsterdata[112];

// address: 0x8011C190
// size: 0x80
extern char MonstConvTbl[128];

// address: 0x8011C210
// size: 0x70
extern char MonstAvailTbl[112];

// address: 0x8011C280
// size: 0x930
extern struct UniqMonstStruct UniqMonst[98];

// address: 0x8011A538
// size: 0x218
extern int TransPals[134];

// address: 0x8011A438
// size: 0x100
extern struct STONEPAL StonePals[32];

// address: 0x8012BCC0
extern unsigned char invflag;

// address: 0x8012BCC1
extern unsigned char drawsbarflag;

// address: 0x8012BCC4
extern int InvBackY;

// address: 0x8012BCC8
extern int InvCursPos;

// address: 0x8011D228
// size: 0x49
extern unsigned char InvSlotTable[73];

// address: 0x8012BCCC
extern int InvBackAY;

// address: 0x8012BCD0
extern int InvSel;

// address: 0x8012BCD4
extern int ItemW;

// address: 0x8012BCD8
extern int ItemH;

// address: 0x8012BCDC
extern int ItemNo;

// address: 0x8012BCE0
// size: 0x8
extern struct RECT BRect;

// address: 0x8012BCB0
// size: 0x6C
extern struct TextDat *InvPanelTData;

// address: 0x8012BCB4
// size: 0x6C
extern struct TextDat *InvGfxTData;

// address: 0x8012BCAC
extern int InvPageNo;

// address: 0x8011CBB0
// size: 0x28
extern int AP2x2Tbl[10];

// address: 0x8011CBD8
// size: 0x248
extern struct InvXY InvRect[73];

// address: 0x8011CE20
// size: 0x2A0
extern int InvGfxTable[168];

// address: 0x8011D0C0
// size: 0xB4
extern unsigned char InvItemWidth[180];

// address: 0x8011D174
// size: 0xB4
extern unsigned char InvItemHeight[180];

// address: 0x8012BCB8
static bool InvOn;

// address: 0x8012BCBC
static unsigned long sgdwLastTime;

// address: 0x8012BD0A
extern unsigned char automapflag;

// address: 0x8011D274
// size: 0xC8
extern unsigned char automapview[40][5];

// address: 0x8011D33C
// size: 0x400
extern unsigned short automaptype[512];

// address: 0x8012BD0B
extern unsigned char AMLWallFlag;

// address: 0x8012BD0C
extern unsigned char AMRWallFlag;

// address: 0x8012BD0D
extern unsigned char AMLLWallFlag;

// address: 0x8012BD0E
extern unsigned char AMLRWallFlag;

// address: 0x8012BD0F
extern unsigned char AMDirtFlag;

// address: 0x8012BD10
extern unsigned char AMColumnFlag;

// address: 0x8012BD11
extern unsigned char AMStairFlag;

// address: 0x8012BD12
extern unsigned char AMLDoorFlag;

// address: 0x8012BD13
extern unsigned char AMLGrateFlag;

// address: 0x8012BD14
extern unsigned char AMLArchFlag;

// address: 0x8012BD15
extern unsigned char AMRDoorFlag;

// address: 0x8012BD16
extern unsigned char AMRGrateFlag;

// address: 0x8012BD17
extern unsigned char AMRArchFlag;

// address: 0x8012BD18
extern int AutoMapX;

// address: 0x8012BD1C
extern int AutoMapY;

// address: 0x8012BD20
extern int AutoMapXOfs;

// address: 0x8012BD24
extern int AutoMapYOfs;

// address: 0x8012BD28
extern int AMPlayerX;

// address: 0x8012BD2C
extern int AMPlayerY;

// address: 0x8012BCF4
extern int AutoMapScale;

// address: 0x8012BCF8
extern unsigned char AutoMapPlayerR;

// address: 0x8012BCF9
extern unsigned char AutoMapPlayerG;

// address: 0x8012BCFA
extern unsigned char AutoMapPlayerB;

// address: 0x8012BCFB
extern unsigned char AutoMapWallR;

// address: 0x8012BCFC
extern unsigned char AutoMapWallG;

// address: 0x8012BCFD
extern unsigned char AutoMapWallB;

// address: 0x8012BCFE
extern unsigned char AutoMapDoorR;

// address: 0x8012BCFF
extern unsigned char AutoMapDoorG;

// address: 0x8012BD00
extern unsigned char AutoMapDoorB;

// address: 0x8012BD01
extern unsigned char AutoMapColumnR;

// address: 0x8012BD02
extern unsigned char AutoMapColumnG;

// address: 0x8012BD03
extern unsigned char AutoMapColumnB;

// address: 0x8012BD04
extern unsigned char AutoMapArchR;

// address: 0x8012BD05
extern unsigned char AutoMapArchG;

// address: 0x8012BD06
extern unsigned char AutoMapArchB;

// address: 0x8012BD07
extern unsigned char AutoMapStairR;

// address: 0x8012BD08
extern unsigned char AutoMapStairG;

// address: 0x8012BD09
extern unsigned char AutoMapStairB;

// address: 0x8012C37C
extern unsigned long GazTick;

// address: 0x80132CB8
// size: 0x18
extern unsigned long RndTabs[6];

// address: 0x800A64C0
// size: 0x18
extern unsigned long DefaultRnd[6];

// address: 0x8012C3A4
extern void (*PollFunc)();

// address: 0x8012C388
extern void (*MsgFunc)();

// address: 0x8012C3D4
extern void (*ErrorFunc)();

// address: 0x8012C2A8
// size: 0x5C
static struct TASK *ActiveTasks;

// address: 0x8012C2AC
// size: 0x5C
static struct TASK *CurrentTask;

// address: 0x8012C2B0
// size: 0x5C
static struct TASK *T;

// address: 0x8012C2B4
static unsigned long MemTypeForTasker;

// address: 0x801304E8
// size: 0x30
static int SchEnv[12];

// address: 0x8012C2B8
static unsigned long ExecId;

// address: 0x8012C2BC
static unsigned long ExecMask;

// address: 0x8012C2C0
static int TasksActive;

// address: 0x8012C2C4
static void (*EpiFunc)();

// address: 0x8012C2C8
static void (*ProFunc)();

// address: 0x8012C2CC
static unsigned long EpiProId;

// address: 0x8012C2D0
static unsigned long EpiProMask;

// address: 0x8012C2D4
static void (*DoTasksPrologue)();

// address: 0x8012C2D8
static void (*DoTasksEpilogue)();

// address: 0x8012C2DC
static void (*StackFloodCallback)();

// address: 0x8012C2E0
static unsigned char ExtraStackProtection;

// address: 0x8012C2E4
static int ExtraStackSizeLongs;

// address: 0x8012C390
extern void *LastPtr;

// address: 0x800A64F8
// size: 0x8
extern struct MEM_INFO WorkMemInfo;

// address: 0x8012C2E8
// size: 0x28
static struct MEM_INIT_INFO *MemInitBlocks;

// address: 0x80130518
// size: 0x1180
static struct MEM_HDR MemHdrBlocks[140];

// address: 0x8012C2EC
// size: 0x20
static struct MEM_HDR *FreeBlocks;

// address: 0x8012C2F0
// size: 0x4
static enum GAL_ERROR_CODE LastError;

// address: 0x8012C2F4
static int TimeStamp;

// address: 0x8012C2F8
static unsigned char FullErrorChecking;

// address: 0x8012C2FC
static unsigned long LastAttemptedAlloc;

// address: 0x8012C300
static unsigned long LastDeallocedBlock;

// address: 0x8012C304
// size: 0x4
static enum GAL_VERB_LEV VerbLev;

// address: 0x8012C308
static int NumOfFreeHdrs;

// address: 0x8012C30C
static unsigned long LastTypeAlloced;

// address: 0x8012C310
static void (*AllocFilter)();

// address: 0x800A6500
// size: 0x28
extern char *GalErrors[10];

// address: 0x800A6528
// size: 0x28
extern struct MEM_INIT_INFO PhantomMem;

// address: 0x80131698
// size: 0x1380
static char buf[4992];

// address: 0x800A6550
// size: 0x7
static char NULL_REP[7];

// address: 0x8007B848
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007B864
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007B870
void Remove96__Fv() {
}


// address: 0x8007B8A8
void AppMain() {
	{
		// register: 16
		register int option_file;
		{
			{
				// register: 16
				register int option_file;
			}
		}
	}
}


// address: 0x8007B9C8
void MAIN_RestartGameTask__Fv() {
}


// address: 0x8007B9F4
void GameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8007BADC
void MAIN_MainLoop__Fv() {
}


// address: 0x8007BB24
void CheckMaxArgs__Fv() {
}


// address: 0x8007BB58
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x8007BB64
void GPUQ_FlushQ__Fv() {
	// register: 18
	register int f;
	// register: 16
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Img;
	{
		{
			{
				{
					{
						{
							// register: 17
							register void *ImgMem;
							{
								{
									// register: 2
									register unsigned char GalRet;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8007BCD8
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	// register: 4
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007BD8C
void GPUQ_DiscardHandle__Fl(long hnd) {
	// register: 6
	register int f;
}


// address: 0x8007BE2C
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	// register: 3
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007BEC8
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	// register: 2
	// size: 0x1C
	register struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x8007BF68
unsigned char PRIM_Open__FiiiP10SCREEN_ENVUl(int Prims, int OtSize, int Depth, struct SCREEN_ENV *Scr, unsigned long MemType) {
	{
		{
			{
				{
					// register: 16
					register int f;
				}
			}
		}
	}
}


// address: 0x8007C084
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x8007C160
void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth) {
	// register: 16
	// size: 0xC
	register struct DR_MODE *DrArea;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT RealRect;
}


// address: 0x8007C288
unsigned char PRIM_GetCurrentScreen__Fv() {
}


// address: 0x8007C294
void PRIM_FullScreen__Fi(int Depth) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x8007C2D0
void PRIM_Flush__Fv() {
	// register: 16
	// size: 0x1C
	register struct PRIM_BUFFER *Pb;
}


// address: 0x8007C4E4
unsigned long *PRIM_GetCurrentOtList__Fv() {
}


// address: 0x8007C4F0
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x8007C52C
unsigned char ClearedYet__Fv() {
}


// address: 0x8007C538
void PrimDrawSycnCallBack() {
}


// address: 0x8007C558
void SendDispEnv__Fv() {
}


// address: 0x8007C57C
// size: 0x18
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	// register: 2
	// size: 0x18
	register struct POLY_F4 *RetPage;
}


// address: 0x8007C594
// size: 0x28
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *RetPage;
}


// address: 0x8007C5AC
// size: 0x34
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *RetPage;
}


// address: 0x8007C5C4
// size: 0x24
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *RetPage;
}


// address: 0x8007C5DC
// size: 0x14
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	// register: 2
	// size: 0x14
	register struct POLY_F3 *RetPage;
}


// address: 0x8007C5F4
// size: 0xC
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	// register: 2
	// size: 0xC
	register struct DR_MODE *RetPage;
}


// address: 0x8007C60C
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x8007C720
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x8007C788
void VID_AfterDisplay__Fv() {
}


// address: 0x8007C7A8
void VID_ScrOn__Fv() {
}


// address: 0x8007C7D0
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x8007C828
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x8007C834
unsigned long VID_GetTick__Fv() {
}


// address: 0x8007C840
void VID_DispEnvSend() {
}


// address: 0x8007C87C
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x8007C88C
int VID_GetXOff__Fv() {
}


// address: 0x8007C898
int VID_GetYOff__Fv() {
}


// address: 0x8007C8A4
void VID_SetDBuffer__Fb(bool DBuf) {
	{
		{
		}
	}
}


// address: 0x8007CA14
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x8007CA1C
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x8007CA3C
int GetTpY__FUs_addr_8007CA3C(unsigned short tpage) {
}


// address: 0x8007CA58
int GetTpX__FUs_addr_8007CA58(unsigned short tpage) {
}


// address: 0x8007CA64
// size: 0x14
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x8007CA70
// size: 0x14
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x8007CA7C
void SortOutFileSystem__Fv() {
}


// address: 0x8007CBB8
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x8007CBD8
void Spanker__Fv() {
}


// address: 0x8007CC18
void GaryLiddon__Fv() {
}


// address: 0x8007CC20
void ReadPad__Fi(int NoDeb) {
	// register: 2
	// size: 0x6C
	register struct CPad *Pad;
	// register: 2
	register int New;
	// register: 3
	register int cmem;
	// register: 4
	register int p1mema;
	// register: 5
	register int p1memb;
	// register: 6
	register int p2mema;
	// register: 7
	register int p2memb;
}


// address: 0x8007CCE4
void DummyPoll__Fv() {
}


// address: 0x8007CCEC
void DaveOwens__Fv() {
}


// address: 0x8007CD14
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x8007CD3C
int GetTpY__FUs_addr_8007CD3C(unsigned short tpage) {
}


// address: 0x8007CD58
int GetTpX__FUs_addr_8007CD58(unsigned short tpage) {
}


// address: 0x8007CD64
void TimSwann__Fv() {
}


// address: 0x8007CD6C
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x8007CD74
void eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8007CDA8
void leighbird__Fv() {
}


// address: 0x8007CDD0
// size: 0x14
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007CE20
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007CE74
long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId) {
	// register: 17
	register int MemSize;
	// register: 17
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x8007CFDC
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007D040
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007D060
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007D140
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007D204
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007D268
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007D344
bool FindFile__6FileIOPCcPc(struct FileIO *this, char *Name, char *Buffa) {
	{
		{
			// register: 19
			register bool Success;
			{
				{
					// register: 18
					register char *Path;
				}
			}
		}
	}
}


// address: 0x8007D458
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007D500
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007D558
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007D5B0
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007D5C4
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x8007D600
// size: 0x14
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8007D668
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x8007D6C0
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007D704
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007D7C8
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007D880
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007D954
bool LoStreamFile__4PCIOPCciPFPUciib_bii(struct PCIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 19
	register int FileHnd;
	// register: 21
	register long hnd;
	// register: 18
	register unsigned char *Dest;
	// register: 22
	register int OrigSize;
	{
		// register: 16
		register int SizeToRead;
	}
}


// address: 0x8007DB64
// size: 0x4
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x8007DB7C
void *__nw__6SysObji(int Amount) {
}


// address: 0x8007DBA8
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	// register: 16
	register long hnd;
	// register: 17
	register void *RetAddr;
}


// address: 0x8007DC24
void __dl__6SysObjPv(void *ptr) {
	// register: 16
	// size: 0x4
	register struct SysObj *This;
}


// address: 0x8007DC90
// size: 0x14
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x8007DCCC
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x8007DD24
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007DD64
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007DE24
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007DED8
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007DF80
bool LoStreamFile__5DatIOPCciPFPUciib_bii(struct DatIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 19
	register int FileHnd;
	// register: 21
	register long hnd;
	// register: 18
	register unsigned char *Dest;
	// register: 22
	register int OrigSize;
	{
		// register: 16
		register int SizeToRead;
	}
}


// address: 0x8007E18C
// size: 0x6C
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x8007E1CC
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x8007E214
void Use__7TextDat(struct TextDat *this) {
	{
		{
			// address: 0xFFFFFFC0
			// size: 0x28
			auto char NameBuff[40];
			{
				{
					// address: 0xFFFFFFE8
					// size: 0x8
					auto struct RECT R;
					// register: 18
					register int DecompSize;
				}
			}
		}
	}
}


// address: 0x8007E408
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012BFD0
	static int TpX;
	// address: 0x8012BFD4
	static int TpY;
	{
		// register: 16
		register int f;
		{
			// register: 3
			register int Dx;
			// register: 2
			register int Dy;
		}
	}
}


// address: 0x8007E4D8
void StreamLoadTP__7TextDat(struct TextDat *this) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TheName[20];
}


// address: 0x8007E590
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x8007E5EC
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x8007E65C
long MakeOffsetTab__C9CBlockHdr(struct CBlockHdr *this) {
	// register: 21
	register long hndRet;
	// register: 18
	// size: 0xC
	register struct CBlock *MyBlock;
	// register: 19
	register int *Tab;
	{
		// register: 16
		register unsigned int f;
	}
}


// address: 0x8007E788
void SetUVTp__7TextDatP9FRAME_HDRP8POLY_FT4ii(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4, int XFlip, int YFlip) {
	// register: 2
	register int Rotated;
	// register: 12
	register int Tpage;
	// register: 3
	register int U;
	// register: 9
	register int V;
	// register: 8
	register int W;
	// register: 10
	register int H;
}


// address: 0x8007E884
// size: 0x28
struct POLY_FT4 *PrintMonster__7TextDatiiibi(struct TextDat *this, int Frm, int X, int Y, bool XFlip, int OtPos) {
	{
		{
			// address: 0xFFFFFFC8
			// size: 0x28
			auto struct POLY_FT4 *FT4;
			// register: 18
			// size: 0xC
			register struct FRAME_HDR *Fr;
			// register: 7
			register int W;
			// register: 8
			register int H;
			{
				{
					// register: 16
					register unsigned char *Dest;
					// register: 17
					register int DecompSize;
					// register: 16
					register unsigned char *CompFrAddr;
					// register: 22
					register unsigned long NumOfPrims;
					// register: 17
					// size: 0x44
					register struct DR_LOAD2 *DrPtr;
					// register: 4
					register int TpX;
					// register: 5
					register int TpY;
					// register: 4
					register int U;
					// register: 5
					register int V;
					// register: 3
					register int W;
					// register: 8
					register int H;
					{
						// register: 19
						register unsigned int f;
						{
							// address: 0xFFFFFFD0
							// size: 0x8
							auto struct RECT mrect;
						}
					}
				}
			}
		}
	}
}


// address: 0x8007EC8C
void PrepareFt4__7TextDatP8POLY_FT4iiiii(struct TextDat *this, struct POLY_FT4 *FT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 21
	register int W;
	// register: 22
	register int H;
	{
		{
			{
				{
					// address: 0xFFFFFFD0
					// size: 0x8
					auto struct RECT R;
					{
						{
							// register: 4
							register unsigned char sw;
						}
					}
				}
			}
		}
	}
}


// address: 0x8007EEF8
unsigned char *GetDecompBufffer__7TextDati(struct TextDat *this, int Size) {
	// register: 18
	register long *DecArray;
	// register: 19
	register int DecIndex;
	// register: 16
	register long hnd;
	// register: 20
	register unsigned char *RetAddr;
}


// address: 0x8007F058
void SetUVTpGT4__7TextDatP9FRAME_HDRP8POLY_GT4ii(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT4 *FT4, int XFlip, int YFlip) {
	// register: 2
	register int Rotated;
	// register: 12
	register int Tpage;
	// register: 3
	register int U;
	// register: 9
	register int V;
	// register: 8
	register int W;
	// register: 10
	register int H;
}


// address: 0x8007F154
void PrepareGt4__7TextDatP8POLY_GT4iiiii(struct TextDat *this, struct POLY_GT4 *GT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 20
	register int W;
	// register: 22
	register int H;
	// register: 4
	register unsigned char sw;
	// register: 17
	// size: 0x8
	register struct PAL *Pal;
	{
		{
			{
				// address: 0xFFFFFFD0
				// size: 0x8
				auto struct RECT R;
				{
					{
						// register: 2
						register int DecX;
						// register: 2
						register int DecY;
						// address: 0xFFFFFFD0
						// size: 0x8
						auto struct RECT R;
					}
				}
			}
		}
	}
}


// address: 0x8007F3B0
void SetUVTpGT3__7TextDatP9FRAME_HDRP8POLY_GT3(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT3 *GT3) {
	// register: 2
	register int Rotated;
	// register: 10
	register int Tpage;
	// register: 4
	register int U;
	// register: 9
	register int V;
	// register: 7
	register int W;
	// register: 3
	register int H;
}


// address: 0x8007F430
void PrepareGt3__7TextDatP8POLY_GT3iii(struct TextDat *this, struct POLY_GT3 *GT3, int Frm, int X, int Y) {
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 21
	register int W;
	// register: 17
	register int H;
	// register: 16
	// size: 0x8
	register struct PAL *Pal;
	{
		{
			{
				// address: 0xFFFFFFD8
				// size: 0x8
				auto struct RECT R;
				{
					{
						// register: 2
						register int DecX;
						// register: 2
						register int DecY;
						// address: 0xFFFFFFD8
						// size: 0x8
						auto struct RECT R;
					}
				}
			}
		}
	}
}


// address: 0x8007F5F4
// size: 0x28
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x8007F748
// size: 0x34
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	// address: 0xFFFFFFD8
	// size: 0x34
	auto struct POLY_GT4 *GT4;
}


// address: 0x8007F89C
// size: 0x28
struct POLY_GT3 *PrintGt3__7TextDatiiii(struct TextDat *this, int Frm, int X, int Y, int OtPos) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_GT3 *GT3;
}


// address: 0x8007F980
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	// register: 18
	register unsigned char *CompFrAddr;
	// register: 20
	register int DecompSize;
	// register: 16
	register unsigned char *Dest;
}


// address: 0x8007FAD4
void MakeCreatureOffsetTab__7TextDat(struct TextDat *this) {
	// register: 17
	register int NumOfCreatures;
	{
		{
			// register: 16
			register unsigned char *ThisAddr;
			{
				// register: 17
				register unsigned int f;
				{
					// register: 16
					register int f;
					{
					}
				}
			}
		}
	}
}


// address: 0x8007FC14
void MakePalOffsetTab__7TextDat(struct TextDat *this) {
	// register: 5
	// size: 0x8
	register struct PAL *ThisPal;
	{
		// register: 6
		register unsigned int f;
	}
}


// address: 0x8007FD10
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x8007FD3C
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x8007FE84
// size: 0x6C
struct TextDat *GM_UseTexData__Fi(int Id) {
	{
		{
			// register: 18
			// size: 0x6C
			register struct TextDat *Dat2Use;
			// register: 20
			// size: 0x4
			register struct CTextFileInfo **Tab;
			{
				// register: 17
				register int f;
			}
		}
	}
}


// address: 0x8007FFA4
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x8007FFF8
void SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4) {
	// register: 17
	// size: 0x8
	register struct PAL *Pal;
	{
		{
			{
				// address: 0xFFFFFFE8
				// size: 0x8
				auto struct RECT R;
			}
		}
	}
}


// address: 0x800800C0
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x80080114
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x8008016C
void DoDecompRequests__7TextDat(struct TextDat *this) {
	// register: 17
	register long *DecArray;
	{
		// register: 18
		register int f;
		{
		}
	}
}


// address: 0x80080290
void FindDecompArea__7TextDatR4RECT(struct TextDat *this, struct RECT *R) {
	// register: 8
	register int NumOfFrames;
	// register: 4
	register int Widest;
	// register: 16
	register int Tallest;
	{
		// register: 7
		register int f;
		{
			// register: 3
			register int w;
			// register: 5
			register int h;
		}
	}
}


// address: 0x80080364
// size: 0x4
struct CTextFileInfo *GetFileInfo__7TextDati(struct TextDat *this, int Id) {
}


// address: 0x800803B4
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x800803DC
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	// register: 2
	register int LocFrame;
}


// address: 0x80080484
void InitDirRemap__15CCreatureAction(struct CCreatureAction *this) {
	// address: 0xFFFFFFE0
	// size: 0x20
	auto bool Dir2Remap[8];
	// register: 7
	register int f;
	// register: 11
	register int RemapNum;
	{
		{
			{
				{
					// register: 9
					register int OrigNum;
					{
						// register: 6
						register int g;
					}
				}
			}
		}
	}
}


// address: 0x80080544
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x80080588
// size: 0xE
struct CCreatureAction *GetAction__C12CCreatureHdri(struct CCreatureHdr *this, int ActNum) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x80080618
void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
	}
}


// address: 0x80080688
int GetSize__C12CCreatureHdr(struct CCreatureHdr *this) {
	// register: 18
	register int Size;
	// register: 17
	// size: 0xE
	register struct CCreatureAction *CAct;
	{
		// register: 16
		register int f;
		{
			// register: 2
			register int ThisSize;
		}
	}
}


// address: 0x800806F4
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80080744
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8008076C
long GetFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// register: 16
	register long hnd;
}


// address: 0x80080808
bool HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	// address: 0xFFFFFFE0
	// size: 0xD
	auto char FName[13];
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
}


// address: 0x80080870
void Un64__FPUcT0l(unsigned char *Src, unsigned char *Dest, long SizeBytes) {
	// register: 9
	register unsigned char *EndDest;
	// register: 7
	register unsigned long *BigDest;
	// register: 8
	register unsigned long Code;
	// register: 6
	register unsigned long Run;
	// register: 3
	register unsigned long BigCode;
}


// address: 0x80080944
// size: 0x78
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x80080978
void Load__7CScreeniii(struct CScreen *this, int Id, int tpx, int tpy) {
	// register: 8
	register unsigned char r;
	// register: 5
	register unsigned char g;
	// register: 6
	register unsigned char b;
	{
		{
			// register: 17
			// size: 0xC
			register struct FRAME_HDR *Fr;
			// address: 0xFFFFFFD8
			// size: 0x8
			auto struct RECT R;
			// register: 17
			// size: 0x8
			register struct PAL *Pal;
			{
				// register: 16
				register int i;
				{
					{
						// register: 10
						register int v;
						{
							// register: 2
							register unsigned short c;
						}
					}
				}
			}
		}
	}
}


// address: 0x80080BF4
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x80080C18
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	// address: 0xFFFFFFD8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
}


// address: 0x80080EF8
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x80080F70
void GetBoundingBox__6CBlockR7TextDatR4RECT(struct CBlock *this, struct TextDat *TDat, struct RECT *R) {
	// register: 18
	register int left;
	// register: 22
	register int right;
	// register: 17
	register int top;
	// register: 21
	register int bottom;
	{
		{
			// address: 0xFFFFFFC8
			// size: 0x8
			auto struct RECT Pr;
			{
				// register: 16
				register unsigned int f;
			}
		}
	}
}


// address: 0x800810CC
void _GLOBAL__D_DatPool() {
}


// address: 0x80081124
void _GLOBAL__I_DatPool() {
}


// address: 0x80081178
void PRIM_GetPrim__FPP8POLY_GT3(struct POLY_GT3 **Prim) {
}


// address: 0x800811F4
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x80081270
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x800812EC
bool CanXferFrame__C7TextDat(struct TextDat *this) {
}


// address: 0x80081314
bool CanXferPal__C7TextDat(struct TextDat *this) {
}


// address: 0x8008133C
bool IsLoaded__C7TextDat(struct TextDat *this) {
}


// address: 0x80081348
int GetTexNum__C7TextDat(struct TextDat *this) {
}


// address: 0x80081354
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x800813CC
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x800813E0
void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x800813EC
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x80081400
// size: 0x8
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x8008141C
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x80081438
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80081444
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8008146C
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80081494
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x800814A8
// size: 0x14
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x800814EC
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x80081544
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80081568
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x80081590
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x800815B4
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x80081694
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x800816A4
bool CD_GetCdlFILE__FPCcP7CdlFILE(char *Name, struct CdlFILE *RetFile) {
	// address: 0xFFFFFF98
	// size: 0x19
	auto char SearchBuffer[25];
	// register: 17
	register int pos;
	// register: 3
	register int c;
	// register: 16
	register int size;
	// address: 0xFFFFFFB8
	// size: 0x19
	auto char Monkey[25];
	{
		// register: 3
		register int i;
	}
}


// address: 0x800817F0
bool LoStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 23
	register unsigned char *Dest;
	// register: 30
	register int OrigSize;
	// register: 21
	register unsigned long Pos;
	// address: 0xFFFFFFC0
	// size: 0x14
	auto struct STRHDR *sh;
	// register: 17
	register int ah;
	// address: 0xFFFFFFC8
	auto unsigned char Count;
	{
		// register: 16
		register int SizeToRead;
		// register: 18
		register unsigned char *ptr;
		{
			// register: 17
			register int i;
		}
	}
}


// address: 0x80081AA8
bool LoAsyncStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 20
	register long hndText;
	// register: 18
	register unsigned char *Dest;
	// register: 21
	register int OrigSize;
	{
		// register: 16
		register int SizeToRead;
	}
}


// address: 0x80081BE4
void BL_InitEAC__Fv() {
	// address: 0xFFFFFFF0
	auto long gunk1;
	// address: 0xFFFFFFF4
	auto long gunk2;
	// register: 16
	register void *ptr;
}


// address: 0x80081CD0
long BL_ReadFile__FPcUl(char *Name, unsigned long RamId) {
	// register: 16
	register int MemSize;
	// address: 0xFFFFFFB8
	// size: 0x32
	auto char FileToLoad[50];
	// register: 16
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x80081DFC
long BL_AsyncReadFile__FPcUl(char *Name, unsigned long RamId) {
	// register: 16
	register int MemSize;
	// address: 0xFFFFFFB0
	// size: 0x32
	auto char FileToLoad[50];
	// register: 18
	register long MyHnd;
	// register: 19
	register unsigned char *LoadAddr;
	// register: 17
	register int ah;
}


// address: 0x80081F70
void BL_LoadDirectory__Fv() {
	// register: 18
	register long BL_DirMHandle;
	// register: 16
	register char *AsyncAddr;
	// register: 16
	register unsigned char *BL_DirPtr;
	// register: 17
	register unsigned long DirId;
	// register: 2
	register unsigned long DirId2;
	// register: 3
	register long vm;
}


// address: 0x800820DC
void BL_LoadStreamDir__Fv() {
	// register: 17
	register long BL_DirMHandle;
	// register: 16
	register unsigned char *BL_DirPtr;
	// register: 18
	register unsigned long DirId;
	// register: 2
	register unsigned long DirId2;
	// register: 3
	// size: 0x4
	register enum LANG_TYPE Lang;
}


// address: 0x800823BC
// size: 0x14
struct STRHDR *BL_MakeFilePosTab__FPUcUl(unsigned char *BL_DirPtr, unsigned long NoStreamFiles) {
	// register: 18
	// size: 0x14
	register struct STREAM *DirPtr;
	// register: 16
	// size: 0x14
	register struct STRHDR *TFileTab;
	{
		{
			{
				// register: 5
				register int j;
			}
		}
	}
}


// address: 0x800824BC
// size: 0x14
struct STRHDR *BL_FindStreamFile__FPcc(char *Name, char LumpID) {
	// register: 17
	// size: 0x14
	register struct STRHDR *ptr;
	// register: 21
	register unsigned long NoFiles;
	// register: 20
	register int pos;
	// register: 3
	register int c;
	// address: 0xFFFFFFC0
	// size: 0xE
	auto char fname[14];
	// register: 19
	register int size;
	{
		// register: 3
		register int i;
		{
			// register: 3
			register int i;
			{
				// register: 16
				register int s;
				// register: 3
				register int i;
				{
					{
					}
				}
			}
		}
	}
}


// address: 0x80082658
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x8008267C
int BL_FileLength__FPcc(char *Name, char LumpID) {
	// register: 3
	// size: 0x14
	register struct STRHDR *ptr;
}


// address: 0x800826B0
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
}


// address: 0x80082798
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x800827A4
void BL_AsyncLoadTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int ah;
}


// address: 0x80082810
long BL_LoadFileAsync__FPcc(char *Name, char LumpID) {
	// register: 17
	// size: 0x14
	register struct STRHDR *sh;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int Size;
	// register: 16
	register int ah;
	// register: 18
	register long MyHnd;
	// register: 16
	register unsigned char *LoadAddr;
}


// address: 0x800829B4
bool BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	// register: 16
	// size: 0x14
	register struct STRHDR *sh;
	// register: 3
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 16
	register int ah;
}


// address: 0x80082A7C
// size: 0x14
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	// register: 2
	// size: 0x14
	register struct STRHDR *sh;
}


// address: 0x80082AA8
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x80082AE0
int LZNP_Decode__FPUcT0(unsigned char *in, unsigned char *out) {
	// register: 6
	register int i;
	// register: 3
	register int j;
	// register: 7
	register unsigned int flags;
	// register: 8
	register unsigned char *OriginalOut;
}


// address: 0x80082BB4
void *Tmalloc__Fi(int MemSize) {
	// register: 17
	register long MyHnd;
	// register: 16
	register void *Addr;
}


// address: 0x80082CD8
void Tfree__FPv(void *Addr) {
}


// address: 0x80082D88
void InitTmalloc__Fv() {
}


// address: 0x80082DB0
void strupr__FPc(char *Buffa) {
	// register: 4
	register char *TempBuf;
	// register: 3
	register char TempChar;
}


// address: 0x80082E04
void PauseTask__FP4TASK(struct TASK *T) {
	{
		// address: 0xFFFFFFE8
		// size: 0xC
		auto struct CTempPauseMessage Cpm;
	}
}


// address: 0x80082E50
int GetPausePad__Fv() {
	// register: 18
	register bool Done;
	// register: 19
	register int PadVal;
	{
		{
			{
				{
					// register: 16
					register int f;
					{
					}
				}
			}
		}
	}
}


// address: 0x80082F3C
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x80082F68
void DoPause__14CPauseMessagesi(struct CPauseMessages *this, int nPadNum) {
	{
		{
			{
				{
					// register: 19
					register bool oldsflag;
					// register: 18
					register bool oldpflag;
					{
						{
							{
								{
									{
										{
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800831D4
bool DoPausedMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 20
	register bool RetVal;
	// register: 19
	register bool Done;
	// register: 16
	register int lvlchange;
	// address: 0xFFFFFFD0
	auto int newx;
	// register: 30
	register int newy;
	{
		// register: 17
		// size: 0x6C
		register struct CPad *P;
		{
			{
				{
					// register: 5
					register int y;
					{
						{
							// register: 4
							register int x;
						}
					}
				}
			}
		}
	}
}


// address: 0x800834EC
int DoQuitMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 20
	register int RetVal;
	// register: 19
	register bool Done;
	// register: 17
	register int Menu;
	{
		// register: 16
		register unsigned short PadVal;
	}
}


// address: 0x8008360C
bool AreYouSureMessage__14CPauseMessages(struct CPauseMessages *this) {
	// register: 20
	register bool RetVal;
	// register: 19
	register bool Done;
	// register: 17
	register int Menu;
	{
		// register: 16
		register unsigned short PadVal;
	}
}


// address: 0x80083710
bool PA_SetPauseOk__Fb(bool NewPause) {
	// register: 2
	register bool Ret;
}


// address: 0x80083720
bool PA_GetPauseOk__Fv() {
}


// address: 0x8008372C
void MY_PausePrint__17CTempPauseMessageiPci(struct CTempPauseMessage *this, int s, char *Txt, int Menu) {
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT PRect;
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80083878
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083880
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80083980
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80083988
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083990
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80083A90
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80083A98
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083AA0
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x80083BCC
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083BD4
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x80083BFC
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80083C24
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x80083C4C
// size: 0xC
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80083C90
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x80083CC4
// size: 0x8
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x80083CD8
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80083CF8
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80083D00
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80083D08
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x80083D30
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80083D8C
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x80083DB4
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x80083DDC
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x80083DE8
unsigned long ReadPadStream__Fv() {
	// register: 19
	register unsigned char *p0;
	// register: 18
	register unsigned char *p1;
	// register: 16
	register unsigned long rval;
}


// address: 0x80083F00
void PAD_Handler__Fv() {
	// register: 16
	register unsigned long JVal;
	// register: 3
	register unsigned long v;
	// register: 17
	register unsigned char fin;
}


// address: 0x800840B8
// size: 0x6C
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x80084154
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x8008428C
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
	{
		// register: 7
		register int i;
		{
		}
	}
}


// address: 0x800843E8
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	// register: 2
	register unsigned short RetVal;
}


// address: 0x8008450C
void _GLOBAL__I_Pad0() {
}


// address: 0x80084544
void SetPadType__4CPadUc(struct CPad *this, unsigned char val) {
}


// address: 0x8008454C
unsigned char CheckActive__4CPad_addr_8008454C(struct CPad *this) {
}


// address: 0x80084558
void SetActive__4CPadUc(struct CPad *this, unsigned char a) {
}


// address: 0x80084560
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x80084568
// size: 0x6C
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x8008459C
void Flush__4CPad(struct CPad *this) {
}


// address: 0x800845C0
void Set__7FontTab(struct FontTab *this) {
	{
		// register: 16
		register int Loop;
		{
			// register: 16
			register int f;
			// register: 16
			register int Loop;
		}
	}
}


// address: 0x8008465C
void InitPrinty__Fv() {
}


// address: 0x800846E4
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x800846EC
int PrintChar__5CFontUsUscUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, char C, int R, int G, int B) {
	// register: 20
	register int Cw;
}


// address: 0x8008486C
int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(struct CFont *this, int X, int Y, char *Str, enum TXT_JUST Justify, struct RECT *TextWindow, int R, int G, int B) {
	// register: 16
	register int Cx;
	// register: 20
	register int Cy;
	// address: 0xFFFFFF68
	auto int WrapCount;
	// register: 19
	register char *EndPtr;
	// register: 21
	register char *SpacePtr;
	// register: 3
	register int CharW;
	// register: 16
	register int SpaceW;
	// address: 0xFFFFFF70
	auto int WindowW;
	// address: 0xFFFFFF78
	auto int WindowH;
	// address: 0xFFFFFF80
	auto int WindowX;
	// address: 0xFFFFFF88
	auto int WindowY;
	// address: 0xFFFFFF90
	auto bool JapLang;
	// address: 0xFFFFFF98
	auto unsigned short col;
	{
		{
			// register: 5
			register char c;
			{
				{
					{
						{
							// register: 6
							register unsigned char h;
							{
								{
									// register: 6
									register unsigned char h;
									{
										{
											// register: 6
											register unsigned char h;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80084E8C
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	// register: 19
	register int Width;
	// register: 18
	register char c;
}


// address: 0x80084F40
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x80084FA4
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80084FB0
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x80084FD4
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x80084FF4
int GetCharFrameNum__5CFontc(struct CFont *this, char ch) {
}


// address: 0x8008500C
int GetCharWidth__5CFontc(struct CFont *this, char ch) {
}


// address: 0x80085064
void Init__5CFont(struct CFont *this) {
}


// address: 0x80085098
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80085098(struct TextDat *this, int FrNum) {
}


// address: 0x800850B4
unsigned char TrimCol__Fs(short col) {
}


// address: 0x800850EC
// size: 0x34
struct POLY_GT4 *DialogPrint__Fiiiiiiiiii(int Frm, int X, int Y, int SW, int SH, int UW, int UH, int UOfs, int VOfs, int Trans) {
	// address: 0xFFFFFF78
	// size: 0xC
	auto struct FRAME_HDR *Fr;
	// register: 17
	// size: 0x34
	register struct POLY_GT4 *GT4;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *FT4;
	// address: 0xFFFFFF80
	// size: 0x4
	auto struct TP_LOAD_HDR *Tp;
	// address: 0xFFFFFF88
	auto int x0;
	// address: 0xFFFFFF90
	auto int x1;
	// address: 0xFFFFFF98
	auto int x2;
	// address: 0xFFFFFFA0
	auto int x3;
	// address: 0xFFFFFFA8
	auto int y0;
	// address: 0xFFFFFFB0
	auto int y1;
	// address: 0xFFFFFFB8
	auto int y2;
	// address: 0xFFFFFFC0
	auto int y3;
	// register: 18
	register int u0;
	// register: 19
	register int u1;
	// register: 23
	register int u2;
	// register: 30
	register int u3;
	// register: 21
	register int v0;
	// register: 20
	register int v1;
	// register: 22
	register int v2;
	// address: 0xFFFFFFC8
	auto int v3;
	// register: 6
	register int U;
	// register: 5
	register int V;
	// register: 4
	register int W;
	// register: 7
	register int H;
	{
		{
			{
				{
					// register: 3
					// size: 0x8
					register struct PAL *Pal;
					{
						{
							{
								// register: 3
								// size: 0x8
								register struct PAL *Pal;
								// register: 16
								register short G1;
								// register: 18
								register short G2;
								// register: 19
								register short G3;
								// register: 20
								register short G4;
								{
									{
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80085A64
// size: 0x24
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
}


// address: 0x80085B9C
void DropShadows__Fiiii(int x, int y, int w, int h) {
	// register: 2
	// size: 0x24
	register struct POLY_G4 *G4;
	// register: 19
	register unsigned char dbr;
	// register: 17
	register unsigned char dbg;
	// register: 16
	register unsigned char dbb;
}


// address: 0x80085E40
void InitDialog__Fv() {
	{
		// register: 16
		register int i;
		{
			// register: 18
			register int y;
			// register: 16
			register int i;
			{
				// register: 16
				register unsigned char bits;
				{
					// register: 17
					register int x;
					{
						// register: 18
						register int i;
						// register: 18
						register int y;
					}
				}
			}
		}
	}
}


// address: 0x80085F78
void GetSizes__6Dialog(struct Dialog *this) {
	// register: 3
	// size: 0xC
	register struct FRAME_HDR *Fr;
}


// address: 0x800861D0
void Back__6Dialogiiii(struct Dialog *this, int DX, int DY, int DW, int DH) {
	// register: 30
	register int X;
	// register: 23
	register int Y;
	// address: 0xFFFFFF70
	auto int W;
	// address: 0xFFFFFF78
	auto int H;
	// register: 18
	register int Bx;
	// register: 20
	register int By;
	// register: 19
	register int Xr;
	// register: 22
	register int Yr;
	// register: 17
	register int Xl;
	// register: 21
	register int Yl;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// address: 0xFFFFFF68
	// size: 0x8
	auto struct RECT ClipRect;
	// address: 0xFFFFFF90
	auto char trans;
	{
		{
			{
				{
					{
						// register: 16
						register int c;
						{
							// register: 2
							// size: 0xC
							register struct FRAME_HDR *Fr;
							// register: 3
							register int fw;
							// register: 5
							register int fh;
						}
					}
				}
			}
		}
	}
}


// address: 0x80087390
void Line__6Dialogiii(struct Dialog *this, int DX, int DY, int DW) {
	// register: 20
	register int X;
	// register: 23
	register int Y;
	// register: 19
	register int W;
	// register: 17
	register int Bx;
	// register: 16
	register int Xr;
	// register: 16
	register int Xl;
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct RECT ClipRect;
	// register: 21
	register char trans;
}


// address: 0x800875A8
// size: 0x8
struct PAL *GetPal__7TextDati_addr_800875A8(struct TextDat *this, int PalNum) {
}


// address: 0x800875C4
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800875C4(struct TextDat *this, int FrNum) {
}


// address: 0x800875E0
void ATT_DoAttract__Fv() {
	// address: 0xFFFFFFD0
	// size: 0x24
	auto struct FE_CREATE CStruct;
}


// address: 0x80087730
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x800877CC
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x8008780C
void CycleSelCols__Fv() {
}


// address: 0x8008799C
int FindTownCreature__7CBlocksi(struct CBlocks *this, int GameEqu) {
	{
		// register: 17
		register unsigned int f;
		{
			// register: 2
			register int Creature;
		}
	}
}


// address: 0x80087A10
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80087A64
// size: 0xE0
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x80087BB8
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x80087BF0
void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List) {
	// register: 16
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	// size: 0x10
	register struct MonstList *MList;
}


// address: 0x80087CB8
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x80087D40
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80087DA8
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x80087E10
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x80087E6C
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x80087EBC
void PrintBlockOutline__7CBlocksiiiii(struct CBlocks *this, int x, int y, int r, int g, int b) {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct LINE_F2 *F2;
}


// address: 0x80088208
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x800882B4
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	{
		// register: 16
		register int f;
	}
}


// address: 0x80088388
void MakeGt4Table__7CBlocks(struct CBlocks *this) {
	{
		// register: 17
		register unsigned int f;
		{
			// address: 0xFFFFFFB8
			// size: 0x34
			auto struct POLY_GT4 ThisGt4;
		}
	}
}


// address: 0x80088490
void MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(struct CBlocks *this, struct POLY_GT4 *GT4, struct FRAME_HDR *Fr) {
	// register: 3
	register int W;
	// register: 2
	register int Rotated;
	// register: 9
	register int Tpage;
	// register: 4
	register int zU;
	// register: 7
	register int zV;
	// register: 6
	register int zW;
	// register: 8
	register int zH;
}


// address: 0x800885CC
// size: 0xC
struct CBlock *GetBlock__7CBlocksi(struct CBlocks *this, int num) {
}


// address: 0x80088644
void Print__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008866C
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x80088694
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x800886AC
void PrintMap__7CBlocksii(struct CBlocks *this, int x, int y) {
	// address: 0xFFFFFF08
	auto int XPos;
	// address: 0xFFFFFF10
	auto int YPos;
	// address: 0xFFFFFF18
	auto int xx;
	// address: 0xFFFFFF20
	auto int block_trans;
	// address: 0xFFFFFF28
	auto unsigned short nlval1;
	// address: 0xFFFFFF30
	auto int BlankBlock;
	// register: 16
	register int XPix;
	// register: 17
	register int YPix;
	// address: 0xFFFFFF38
	auto int CLeft;
	// address: 0xFFFFFF40
	auto int CRight;
	// address: 0xFFFFFF48
	auto int CTop;
	// address: 0xFFFFFF50
	auto int CBottom;
	{
		// address: 0xFFFFFF58
		auto int ThisY;
		// address: 0xFFFFFF60
		auto int OtPos;
		// address: 0xFFFFFF68
		auto int ThisXPos;
		// register: 8
		register int ThisYPos;
		// address: 0xFFFFFF70
		auto int Height;
		{
			// register: 23
			// size: 0x8
			register struct CPart *Parts;
			// register: 5
			// size: 0xC
			register struct CBlock *MyBlock;
			// register: 16
			register int BlockNum;
			// address: 0xFFFFFF78
			auto bool Hi;
			// register: 6
			register int bx;
			// register: 7
			register int by;
			{
				{
					{
						{
							{
								{
									{
										{
											{
												// register: 11
												register int MyOt;
												// register: 16
												// size: 0x8
												register struct RECT *BlockR;
												// register: 4
												register int clipx;
												// register: 3
												register int clipy;
												{
													{
														// register: 13
														register int NumOfParts;
														{
															// register: 12
															register int f;
															{
																// register: 18
																register int X;
																// register: 16
																register int Y;
																// register: 19
																register int W;
																// register: 20
																register int H;
																// address: 0xFFFFFEF0
																// size: 0x34
																auto struct POLY_GT4 *DestGt4;
																{
																	{
																		// register: 17
																		// size: 0x10
																		register struct LittleGt4 *ThisGt4;
																		{
																			{
																				// address: 0xFFFFFF80
																				auto int MyOt;
																				// register: 16
																				// size: 0x8
																				register struct RECT *BlockR;
																				// register: 4
																				register int clipx;
																				// register: 3
																				register int clipy;
																				{
																					{
																						// register: 10
																						register int NumOfParts;
																						{
																							// register: 22
																							register int f;
																							{
																								// register: 18
																								register int X;
																								// register: 17
																								register int Y;
																								// register: 19
																								register int W;
																								// register: 20
																								register int H;
																								// address: 0xFFFFFEF4
																								// size: 0x34
																								auto struct POLY_GT4 *DestGt4;
																								{
																									{
																										// register: 16
																										// size: 0x10
																										register struct LittleGt4 *ThisGt4;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80089BD0
void PrintGameSprites__7CBlocksiiiii(struct CBlocks *this, int ThisXPos, int ThisYPos, int OtPos, int ScrX, int ScrY) {
	// register: 17
	// size: 0xC
	register struct map_info *p1;
	// register: 18
	// size: 0xC
	register struct map_info *p2;
	// register: 16
	// size: 0xC
	register struct map_info *p3;
}


// address: 0x80089D40
void PrintGameSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks *this, struct map_info *piece, int OtPos, int ScrX, int ScrY, int R, int G, int B) {
	// address: 0xFFFFFFA0
	auto int nMonster;
	// register: 20
	register int bItem;
	// register: 2
	register int bObject;
	// address: 0xFFFFFFA8
	auto int bFlags;
	// address: 0xFFFFFFB0
	auto int vFlags;
	// address: 0xFFFFFFB8
	auto int bDead;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *ShadFt4;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			// register: 16
			// size: 0x6C
			register struct TextDat *ObjDat;
			{
				{
					// register: 18
					register int ObjIndex;
					// register: 17
					// size: 0x2C
					register struct ObjectStruct *OStr;
					// register: 2
					register int LoadIndex;
					// register: 3
					register int TexDat;
					{
						{
							// register: 5
							register int Col;
							{
								{
									// register: 16
									// size: 0x98
									register struct ItemStruct *pItem;
									{
										{
											// register: 23
											// size: 0xC
											register struct FRAME_HDR *Fr;
											// register: 18
											register int W;
											// register: 19
											register int H;
											// register: 4
											register short height;
											{
												{
													// register: 2
													register int it;
													{
														// register: 5
														register int Col;
														{
															{
																// register: 2
																register int gnMI;
																{
																	{
																		// register: 5
																		register int ScrXOff;
																		// register: 6
																		register int ScrYOff;
																		{
																			{
																				{
																					{
																						// register: 18
																						// size: 0x70
																						register struct MonsterStruct *MyMonst;
																						// register: 21
																						// size: 0x6C
																						register struct TextDat *CMonstGraphics;
																						// address: 0xFFFFFFC0
																						auto int mi;
																						{
																							{
																								// register: 16
																								register int Frame;
																								// register: 19
																								register int Action;
																								// register: 20
																								register int Dir;
																								// register: 16
																								register int PhysFrame;
																								// register: 17
																								register int Creature;
																								// register: 30
																								register int ScrXOff;
																								// register: 23
																								register int ScrYOff;
																								{
																									{
																										// register: 2
																										register char transfile;
																										// register: 5
																										register int Col;
																										{
																											{
																												// register: 2
																												register int MG_No;
																												// register: 5
																												register int SPal;
																												{
																													{
																														// register: 18
																														// size: 0x1C
																														register struct CMonster *MyMonst;
																														// register: 2
																														register int Frame;
																														// register: 16
																														register int PhysFrame;
																														// register: 17
																														register int Creature;
																														// register: 2
																														register char transfile;
																														{
																															{
																															}
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8008AAB8
void PrintSprites__7CBlocksP8map_infoiiiiiii(struct CBlocks *this, struct map_info *piece, int OtPos, int ScrX, int ScrY, int R, int G, int B) {
	// address: 0xFFFFFFC8
	auto int Monster;
	// register: 20
	register int bItem;
	// address: 0xFFFFFFD0
	auto int bFlags;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			// register: 17
			// size: 0x98
			register struct ItemStruct *pItem;
			{
				{
					// register: 2
					// size: 0xC
					register struct FRAME_HDR *Fr;
					// register: 19
					register int W;
					// register: 21
					register int H;
					// register: 4
					register short height;
					{
						{
							// register: 2
							register int it;
							{
								// register: 5
								register int Col;
								{
									{
										// register: 2
										register int gnMI;
										{
											{
												// register: 5
												register int ScrXOff;
												// register: 6
												register int ScrYOff;
												{
													{
														// register: 20
														register int Creature;
														// register: 18
														register int mi;
														// address: 0xFFFFFFB8
														// size: 0x28
														auto struct POLY_FT4 *Ft4;
														// register: 17
														// size: 0x6C
														register struct TextDat *ThisData;
														// register: 16
														register int PhysFrame;
														// register: 19
														register int GameFrame;
														// register: 16
														register int Dir;
														{
															{
																// register: 5
																register int Col;
																{
																	{
																		// register: 16
																		// size: 0x28
																		register struct POLY_FT4 *ShadFt4;
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8008B17C
void PrintSprites__7CBlocksiiiii(struct CBlocks *this, int ThisXPos, int ThisYPos, int OtPos, int ScrX, int ScrY) {
	// register: 17
	// size: 0xC
	register struct map_info *p1;
	// register: 18
	// size: 0xC
	register struct map_info *p2;
	// register: 16
	// size: 0xC
	register struct map_info *p3;
}


// address: 0x8008B2EC
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008B300
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8008B314
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008B3D8
void DoScroll__7CBlocks(struct CBlocks *this) {
	// register: 3
	register int YDiff;
}


// address: 0x8008B440
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x8008B4E0
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x8008B5B4
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 6
	register int W;
}


// address: 0x8008B634
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008B63C
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x8008B650
// size: 0xE0
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x8008B65C
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008B65C(struct POLY_FT4 **Prim) {
}


// address: 0x8008B6D8
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008B720
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008B75C
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x8008B7A4
void PRIM_GetPrim__FPP8POLY_GT4_addr_8008B7A4(struct POLY_GT4 **Prim) {
}


// address: 0x8008B820
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x8008B89C
void PRIM_CopyPrim__FP8POLY_FT4T0(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008B8C4
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x8008B8E0
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008B908
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x8008B930
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008B954
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008B978
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008B9A0
int GetNumOfBlocks__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008B9AC
void CopyToGt4__9LittleGt4P8POLY_GT4(struct LittleGt4 *this, struct POLY_GT4 *Gt4) {
}


// address: 0x8008BA44
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x8008BAD4
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008BB0C
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8008BB0C(struct TextDat *this, int Creature) {
}


// address: 0x8008BB84
int GetNumOfCreatures__7TextDat_addr_8008BB84(struct TextDat *this) {
}


// address: 0x8008BB98
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008BB98(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008BBA4
// size: 0x8
struct PAL *GetPal__7TextDati_addr_8008BBA4(struct TextDat *this, int PalNum) {
}


// address: 0x8008BBC0
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8008BBC0(struct TextDat *this, int FrNum) {
}


// address: 0x8008BBDC
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x8008BC08
void OVR_LoadPregame__Fv() {
}


// address: 0x8008BC30
void OVR_LoadFrontend__Fv() {
}


// address: 0x8008BC58
void OVR_LoadGame__Fv() {
}


// address: 0x8008BC80
void OVR_LoadFmv__Fv() {
}


// address: 0x8008BCA8
void OVR_LoadMemcard__Fv() {
}


// address: 0x8008BCD4
void ClearOutOverlays__Fv() {
}


// address: 0x8008BD2C
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x8008BDF0
void Load__7Overlay(struct Overlay *this) {
	// address: 0xFFFFFEF8
	// size: 0x100
	auto char OverlayFile[256];
}


// address: 0x8008BE60
// size: 0x4
enum OVER_TYPE OVR_GetCurrentOverlay__Fv() {
}


// address: 0x8008BE6C
void LoadOver__FR7Overlay(struct Overlay *Ovr) {
}


// address: 0x8008BEC0
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x8008C030
// size: 0x4
enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this) {
}


// address: 0x8008C03C
void StevesDummyPoll__Fv() {
}


// address: 0x8008C044
void Lambo__Fv() {
}


// address: 0x8008C04C
// size: 0x84
struct CPlayer *__7CPlayerbi(struct CPlayer *this, bool Town, int mPlayerNum) {
}


// address: 0x8008C130
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
}


// address: 0x8008C188
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x8008C1E4
void SetBlockXY__7CPlayerR7CBlocksR12PlayerStruct(struct CPlayer *this, struct CBlocks *Bg, struct PlayerStruct *Plr) {
	// register: 17
	register int ScrX;
	// register: 16
	register int ScrY;
	// register: 16
	register int WorldX;
	// register: 7
	register int WorldY;
}


// address: 0x8008C330
void SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg) {
	// register: 17
	register int ScrX;
	// register: 16
	register int ScrY;
	// register: 17
	register int NWorldX;
	// register: 16
	register int NWorldY;
	// register: 3
	register int pdir;
	// register: 4
	register int wtime;
}


// address: 0x8008C75C
int GetNumOfSpellAnims__FR12PlayerStruct(struct PlayerStruct *Plr) {
}


// address: 0x8008C7DC
void Print__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg) {
	// address: 0xFFFFFFD0
	auto int ScrXOff;
	// register: 30
	register int ScrYOff;
	// register: 16
	register int Action;
	// register: 23
	register int WorldX;
	// register: 22
	register int WorldY;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	{
		{
			// register: 16
			register int Frame;
			{
				{
					// register: 2
					register int FrmNum;
					// address: 0xFFFFFFC0
					// size: 0x8
					auto struct RECT R;
					// register: 17
					register int pOtPos;
					// register: 16
					// size: 0x28
					register struct POLY_FT4 *ShadFt4;
					{
						{
							{
								{
									{
										// register: 20
										register int Frame;
										{
											{
												// register: 19
												register int FrmNum;
												// address: 0xFFFFFFC0
												// size: 0x8
												auto struct RECT R;
												// register: 17
												register int pOtPos;
												// register: 16
												// size: 0x28
												register struct POLY_FT4 *ShadFt4;
												{
													{
														// register: 3
														register int SpellFr;
														{
															{
																// register: 17
																register int zX;
																// register: 16
																register int zY;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8008CCD0
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	// register: 2
	register int RetVal;
}


// address: 0x8008CD4C
// size: 0x4
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x8008CDC8
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008CDD0
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x8008CDD8
void PRIM_GetPrim__FPP8POLY_FT4_addr_8008CDD8(struct POLY_FT4 **Prim) {
}


// address: 0x8008CE54
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8008CE54(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x8008CE90
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8008CE90(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x8008CEB8
int GetPlrOt__7CBlocksi(struct CBlocks *this, int PlayerNum) {
}


// address: 0x8008CECC
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x8008CEE4
int GetNumOfFrames__7TextDatii_addr_8008CEE4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8008CF1C
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x8008CF40
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8008CF40(struct TextDat *this, int Creature) {
}


// address: 0x8008CFB8
int GetNumOfCreatures__7TextDat_addr_8008CFB8(struct TextDat *this) {
}


// address: 0x8008CFCC
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8008CFCC(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8008CFD8
void PROF_Open__Fv() {
}


// address: 0x8008D018
bool PROF_State__Fv() {
}


// address: 0x8008D024
void PROF_On__Fv() {
}


// address: 0x8008D034
void PROF_Off__Fv() {
}


// address: 0x8008D040
void PROF_CpuEnd__Fv() {
}


// address: 0x8008D070
void PROF_CpuStart__Fv() {
}


// address: 0x8008D094
void PROF_DrawStart__Fv() {
}


// address: 0x8008D0B8
void PROF_DrawEnd__Fv() {
}


// address: 0x8008D0E8
void PROF_Draw__FPUl(unsigned long *Ot) {
	{
		{
			// register: 2
			// size: 0x18
			register struct POLY_F4 *F4;
			// register: 22
			register int XCent;
			{
				// register: 23
				register int f;
				{
					// register: 2
					// size: 0x14
					register struct POLY_F3 *F3;
				}
			}
		}
	}
}


// address: 0x8008D2DC
void PROF_Restart__Fv() {
}


// address: 0x8008D2FC
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008D3F4
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8008D4A4
void GoBackLevel__Fv() {
}


// address: 0x8008D51C
void GoWarpLevel__Fv() {
}


// address: 0x8008D554
void PostLoadGame__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008D5F0
void GoLoadGame__Fv() {
}


// address: 0x8008D678
void PostNewLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008D714
void GoNewLevel__Fv() {
}


// address: 0x8008D768
void PostGoBackLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008D800
void GoForwardLevel__Fv() {
}


// address: 0x8008D858
void PostGoForwardLevel__Fv() {
	// register: 16
	register int palnum;
}


// address: 0x8008D8F0
void GoNewGame__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008D940
void PostNewGame__Fv() {
}


// address: 0x8008D978
void LevelToLevelInit__Fv() {
}


// address: 0x8008D9D0
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x8008DA14
// size: 0x10
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x8008DA6C
void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 22
	register int ManaHeight;
	// address: 0xFFFFFFC8
	auto int HealthAnim;
	// address: 0xFFFFFFD0
	auto int ManaAnim;
	// register: 23
	register int BarY;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 21
	register int X;
	// register: 19
	register int Y;
	// register: 16
	register int xof;
}


// address: 0x8008DEEC
void DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 17
	register int X;
	// register: 19
	register int Y;
	// register: 21
	register int Loop;
	// register: 6
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 22
	register int Bx;
	// register: 23
	register int By;
}


// address: 0x8008E370
void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 21
	register int X;
	// register: 19
	register int Y;
	// register: 2
	register int Anim;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 3
	register int SpellNo;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto char YT[16];
}


// address: 0x8008E4DC
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT MsgRect;
}


// address: 0x8008E528
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 7
	// size: 0x18
	register struct POLY_F4 *F4;
}


// address: 0x8008E8E4
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	// register: 5
	register int X;
	// register: 6
	register int Y;
}


// address: 0x8008E9D8
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x8008EADC
// size: 0x8
struct PAL *GetPal__7TextDati_addr_8008EADC(struct TextDat *this, int PalNum) {
}


// address: 0x8008EAF8
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8008EAF8(struct TextDat *this, int FrNum) {
}


// address: 0x8008EB14
void PrintCDWaitTask__FP4TASK(struct TASK *T) {
	// register: 17
	// size: 0x6C
	register struct TextDat *CDGfxData;
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8008EBF8
void InitCDWaitIcon__Fv() {
}


// address: 0x8008EC2C
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x8008EC40
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x8008EC88
void STR_AllocBuffer__Fv() {
	{
		{
			{
				// register: 3
				register int i;
			}
		}
	}
}


// address: 0x8008ECDC
void STR_Init__Fv() {
	{
		{
			// register: 4
			register unsigned char *ptr;
			// register: 16
			// size: 0x5C
			register struct TASK *T;
			{
			}
		}
	}
}


// address: 0x8008EDA8
// size: 0x80
struct SFXHDR *STR_InitStream__Fv() {
	// register: 18
	// size: 0x80
	register struct SFXHDR *sfh;
	{
		// register: 17
		register int s;
	}
}


// address: 0x8008EEE0
// size: 0x80
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto char tstring[32];
}


// address: 0x8008F01C
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F074
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 5
	register int offs;
}


// address: 0x8008F180
void STR_pauseall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008F1D0
void STR_resumeall__Fv() {
	{
		// register: 17
		register int i;
	}
}


// address: 0x8008F220
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F28C
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x8008F398
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8008F544
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
	// register: 20
	register int DMA_off;
	// register: 18
	register int sec;
}


// address: 0x8008F60C
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	// register: 19
	register int sec_num;
	// register: 17
	register unsigned char *dp;
	// register: 3
	register int i;
}


// address: 0x8008F7E8
void STR_AsyncWeeTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 19
	// size: 0x14
	register struct STRHDR *StreamHND;
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// register: 17
	register char Done;
	// register: 18
	register int frame;
	// register: 20
	register int framediff;
	// register: 21
	register int AsyncHND;
	// register: 2
	register unsigned char *ptr;
	// address: 0xFFFFFFD0
	// size: 0xE
	auto char OrigName[14];
}


// address: 0x8008FAE0
void STR_AsyncTASK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 21
	// size: 0x14
	register struct STRHDR *StreamHND;
	// register: 16
	// size: 0x80
	register struct SFXHDR *sfh;
	// register: 18
	register char Done;
	// register: 17
	register int latency;
	// register: 19
	register int frame;
	// register: 22
	register int framediff;
	// register: 20
	register int AsyncHND;
	// register: 2
	register unsigned char *ptr;
	// address: 0xFFFFFFD0
	// size: 0xE
	auto char OrigName[14];
}


// address: 0x8008FF0C
void STR_StreamMainTask__FP6SFXHDRc(struct SFXHDR *sfh, char FileType) {
	// register: 18
	// size: 0x14
	register struct STRHDR *sh;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	{
		{
			// register: 16
			// size: 0x5C
			register struct TASK *T2;
		}
	}
}


// address: 0x8009001C
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFD0
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
	}
}


// address: 0x800900EC
int SND_FindChannel__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto char status[24];
	// register: 3
	register int count;
	// register: 16
	register int result;
}


// address: 0x80090158
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x800901D0
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012C034
	static int DestAddr;
}


// address: 0x80090248
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x8009037C
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800903D0
void SND_StopSnd__Fi(int voice) {
}


// address: 0x800903F4
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80090458
int SND_PlaySnd__FUsiii(unsigned short Name, int vol, int pan, int pitchadj) {
	// address: 0xFFFFFFA0
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 19
	register int Offset;
	// register: 3
	register int sfxnum;
	// register: 17
	register int voice;
}


// address: 0x8009060C
void AS_CallBack0__Fi(int handle) {
}


// address: 0x80090620
void AS_CallBack1__Fi(int handle) {
}


// address: 0x80090634
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register unsigned char *ptr;
}


// address: 0x80090710
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 16
	register int ah;
}


// address: 0x800907B0
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x800907BC
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x800907E8
int AS_LoopStream__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	// register: 17
	register unsigned char *ptr;
}


// address: 0x80090908
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x8009093C
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x800909CC
// size: 0x18
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80090AA8
// size: 0x18
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80090B28
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x80090BC8
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x80090C5C
void UpdatePals__13PalCollection(struct PalCollection *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *ThisPal;
	{
		// register: 17
		// size: 0x18
		register struct PalEntry *NextPal;
	}
}


// address: 0x80090CD0
void SCR_Handler__Fv() {
}


// address: 0x80090CF8
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x80090D00
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x80090D3C
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x80090DA0
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80090DF8
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80090E50
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x80090E64
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x80090E90
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x80090E98
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x80090EA0
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x80090EAC
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x80090EE4
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x80090EF0
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80090F10
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80090F5C
void stub__FPcPv_addr_80090F5C(char *e, void *argptr) {
}


// address: 0x80090F64
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x80090F98
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x80091020
void SetAmbientLight__Fv() {
}


// address: 0x800910A4
void print_demo_task__FP4TASK(struct TASK *T) {
	{
		{
			// register: 3
			register int x;
		}
	}
}


// address: 0x800912A8
void TonysDummyPoll__Fv() {
}


// address: 0x800912CC
void load_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x8009132C
void save_demo_pad_data__FUl(unsigned long demo_num) {
	// register: 4
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x8009138C
void set_pad_record_play__Fi(int level) {
}


// address: 0x80091400
void start_demo__Fv() {
}


// address: 0x8009149C
void tony__Fv() {
}


// address: 0x800914D4
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x800914E0
int GLUE_GetMonsterList__Fv() {
}


// address: 0x800914EC
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80091540
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80091594
void GLUE_PreTown__Fv() {
}


// address: 0x800915F8
void GLUE_PreDun__Fv() {
}


// address: 0x80091644
bool GLUE_Finished__Fv() {
}


// address: 0x80091650
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x8009165C
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x800916E0
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x800916F0
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091700
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091710
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x800917E8
void BgTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
	// register: 19
	register bool IsTown;
	// register: 16
	register int TextId;
	// register: 17
	register int Level;
	// register: 18
	register int ObjId;
	// register: 20
	register int List;
	// address: 0xFFFFFDD0
	// size: 0xE0
	auto struct CBlocks MyBlocks;
	// address: 0xFFFFFEB0
	// size: 0x84
	auto struct CPlayer MyPlayer;
	// address: 0xFFFFFF38
	// size: 0x84
	auto struct CPlayer MyPlayer2;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct GPanel P1Panel;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct GPanel P2Panel;
}


// address: 0x80091CAC
// size: 0x8
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
	}
}


// address: 0x80091D34
// size: 0x8
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x80091D90
// size: 0x8
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x80091DC0
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x80091E00
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80091E54
// size: 0x10
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x80091F00
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x80091F0C
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x80091F14
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x80091F28
void SetDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 4
		register int i;
	}
}


// address: 0x80092000
void RestoreDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 3
		register int i;
	}
}


// address: 0x80092090
char *get_action_str__Fii(int pval, int combo) {
	// register: 4
	// size: 0x10
	register struct KEY_ASSIGNS *ac;
	{
		// register: 6
		register int i;
	}
}


// address: 0x80092108
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns *pa;
}


// address: 0x80092140
void RemoveCtrlScreen__Fv() {
}


// address: 0x80092184
unsigned char Init_ctrl_pos__Fv() {
}


// address: 0x8009223C
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8009227C
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x800922BC
unsigned char set_buttons__Fii(int cline, int n) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	// register: 3
	register int cval;
	// register: 4
	register int i;
	// register: 18
	register int p;
}


// address: 0x80092410
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x80092458
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x800928F0
void PrintCtrlString__FiiUcic(int x, int y, unsigned char cjustflag, int str_num, int col) {
	// register: 18
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	// register: 2
	register int i;
	// address: 0xFFFFFFC8
	auto unsigned char r;
	// address: 0xFFFFFFD0
	auto unsigned char g;
	// register: 23
	register unsigned char b;
	// register: 19
	register int str;
	// register: 21
	register int len;
	{
		{
			// register: 4
			register int x1;
			// register: 22
			register int x2;
			// register: 5
			register int nlen;
		}
	}
}


// address: 0x80092E2C
void DrawCtrlSetup__Fv() {
	// register: 16
	register int i;
	// register: 20
	register int pnum;
	{
		{
			{
				{
					// register: 17
					register int lena;
					// register: 2
					register int len;
					{
						{
							// register: 19
							register int oldDot;
							// register: 18
							register int OldPrintOT;
						}
					}
				}
			}
		}
	}
}


// address: 0x800932E4
void _GLOBAL__D_ctrlflag() {
}


// address: 0x8009330C
void _GLOBAL__I_ctrlflag() {
}


// address: 0x80093334
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x8009335C
unsigned short GetDown__C4CPad_addr_8009335C(struct CPad *this) {
}


// address: 0x80093384
unsigned short GetUp__C4CPad_addr_80093384(struct CPad *this) {
}


// address: 0x800933AC
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x800933B4
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x800933BC
void SetRGB__6DialogUcUcUc_addr_800933BC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800933DC
void SetBorder__6Dialogi_addr_800933DC(struct Dialog *this, int Type) {
}


// address: 0x800933E4
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x800933F0
void ___6Dialog_addr_800933F0(struct Dialog *this, int __in_chrg) {
}


// address: 0x80093418
// size: 0x10
struct Dialog *__6Dialog_addr_80093418(struct Dialog *this) {
}


// address: 0x80093474
void switchnight__FP4TASK(struct TASK *T) {
}


// address: 0x800934C0
void city_lights__FP4TASK(struct TASK *T) {
}


// address: 0x80093640
void color_cycle__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF70
	// size: 0x8
	auto struct RECT ClutR;
	// register: 2
	register unsigned short cx;
	// register: 3
	register unsigned short cy;
	// address: 0xFFFFFF78
	// size: 0x40
	auto unsigned long VRAMPal[16];
	// address: 0xFFFFFFB8
	// size: 0x40
	auto unsigned long CLUTPal[16];
	{
		{
			{
				{
					// register: 6
					register int i;
					{
						// register: 4
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x80093784
void DrawFlameLogo__Fv() {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *FT4;
	// register: 16
	register int diff;
}


// address: 0x800939D4
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80093A28
bool TryCreaturePrint__Fiiiiiii(int nMonster, int blockr, int blockg, int blockb, int OtPos, int ScrX, int ScrY) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *ShadFt4;
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			// register: 18
			// size: 0x70
			register struct MonsterStruct *MyMonst;
			// register: 19
			// size: 0x6C
			register struct TextDat *CMonstGraphics;
			// register: 2
			register int Frame;
			// register: 17
			register int Action;
			// register: 16
			register int Dir;
			// register: 16
			register int PhysFrame;
			// register: 21
			register int ScrXOff;
			// register: 20
			register int ScrYOff;
		}
	}
}


// address: 0x80093C8C
void TryWater__FiiP8POLY_GT4i(int BlockBase, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x80093E64
void nightgfx__FibiP8POLY_GT4i(int BlockBase, bool water, int BlockNum, struct POLY_GT4 *DestGt4, int MyOt) {
}


// address: 0x80093EF0
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80093EF0(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80093F2C
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80093F2C(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80093F54
void PRIM_GetPrim__FPP8POLY_FT4_addr_80093F54(struct POLY_FT4 **Prim) {
}


// address: 0x80093FD0
int GetNumOfActions__7TextDati_addr_80093FD0(struct TextDat *this, int Creature) {
}


// address: 0x80093FF4
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80093FF4(struct TextDat *this, int Creature) {
}


// address: 0x8009406C
int GetNumOfCreatures__7TextDat_addr_8009406C(struct TextDat *this) {
}


// address: 0x80094080
void DaveLDummyPoll__Fv() {
}


// address: 0x80094088
void DaveL__Fv() {
}


// address: 0x800940B0
void DoReflection__FP8POLY_FT4iii(struct POLY_FT4 *Ft4, int R, int G, int B) {
	// register: 3
	register unsigned char zV0;
	// register: 2
	register unsigned char zV2;
	// register: 2
	register unsigned char zH;
	// register: 22
	register unsigned char dH;
	// register: 17
	register unsigned char zV;
	// register: 3
	register unsigned char *s;
	// register: 4
	register unsigned char *d;
	// register: 19
	register unsigned char *Ft4m;
	// register: 23
	register short zX0;
	// register: 30
	register short zX1;
	// address: 0x8012ACB8
	static int count;
	// register: 21
	register int n;
	// register: 16
	register int xoffset;
	// register: 4
	register int yoffset;
	// register: 18
	register short zY;
}


// address: 0x80094390
void mteleportfx__Fv() {
	// register: 19
	register int plr;
	// register: 16
	register int br;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8009466C
void invistimer__Fv() {
	// register: 7
	register int plr;
}


// address: 0x80094738
void setUVparams__FP8POLY_FT4P9FRAME_HDR(struct POLY_FT4 *Ft4, struct FRAME_HDR *Fr) {
	// register: 5
	register int zU;
	// register: 7
	register int zV;
	// register: 3
	register int zW;
	// register: 8
	register int zH;
}


// address: 0x800947C0
void drawparticle__Fiiiiii(int x, int y, int scale, int anim, int colour, int OtPos) {
	// register: 30
	// size: 0x6C
	register struct TextDat *Dat;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 23
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 16
	register unsigned char SpR;
	// register: 17
	register unsigned char SpG;
	// register: 18
	register unsigned char SpB;
	// register: 19
	register int w;
	// register: 21
	register int h;
	// address: 0xFFFFFFD0
	auto int f;
}


// address: 0x800949B0
void drawpolyF4__Fiiiiii(int x, int y, int w, int h, int colour, int OtPos) {
	// address: 0xFFFFFFD0
	// size: 0x18
	auto struct POLY_F4 *F4;
	// register: 21
	register unsigned char SpR;
	// register: 23
	register unsigned char SpG;
	// register: 18
	register unsigned char SpB;
}


// address: 0x80094AE4
void drawpolyG4__Fiiiiiiii(int x, int y, int w, int h1, int h2, int colour0, int colour1, int OtPos) {
	// address: 0xFFFFFFC0
	// size: 0x24
	auto struct POLY_G4 *G4;
	// register: 30
	register unsigned char SpR0;
	// register: 23
	register unsigned char SpG0;
	// register: 18
	register unsigned char SpB0;
	// address: 0xFFFFFFC8
	auto unsigned char SpR1;
	// address: 0xFFFFFFD0
	auto unsigned char SpG1;
	// register: 22
	register unsigned char SpB1;
}


// address: 0x80094CB4
void particlejump__Fv() {
	// register: 23
	register int n;
	// register: 30
	register int partactive;
}


// address: 0x80094E54
void particleglow__Fv() {
	// register: 17
	register int n;
}


// address: 0x80094F38
void doparticlejump__Fv() {
}


// address: 0x80094F78
void StartPartJump__Fiiiiii(int sx, int sy, int height, int scale, int colour, int OtPos) {
	// register: 17
	register int n;
}


// address: 0x800950E0
void doparticlechain__Fiiiiiiiiiiii(int sx, int sy, int dx, int dy, int count, int scale, int scaledec, int semitrans, int randomize, int colour, int OtPos, int source) {
	// address: 0xFFFFFF90
	// size: 0x6C
	auto struct TextDat *Dat;
	// address: 0xFFFFFF88
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 30
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 21
	register unsigned char SpR;
	// register: 23
	register unsigned char SpG;
	// register: 22
	register unsigned char SpB;
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 3
	register int br;
	// register: 16
	register int w;
	// register: 19
	register int h;
	// register: 20
	register int f;
	// address: 0xFFFFFF98
	auto int c;
	// address: 0xFFFFFFA0
	auto int t;
	// register: 2
	register int rand;
	// register: 3
	register int xoffs;
	// register: 2
	register int yoffs;
	// address: 0xFFFFFFA8
	auto int xf;
	// address: 0xFFFFFFB0
	auto int yf;
	// address: 0xFFFFFFB8
	auto int dxf;
	// address: 0xFFFFFFC0
	auto int dyf;
	// register: 5
	register int dxabs;
	// register: 4
	register int dyabs;
	// register: 4
	register int divisor;
	// register: 8
	register int *partexecnum;
}


// address: 0x800954D8
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x80095598
void Teleportfx__Fiiiiiii(int scrnx, int scrny, int width, int height, int scale, int colmask, int numpart) {
	// register: 30
	// size: 0x6C
	register struct TextDat *Dat;
	// address: 0xFFFFFF78
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 2
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 22
	register unsigned char SpR;
	// register: 23
	register unsigned char SpG;
	// register: 17
	register unsigned char SpB;
	// register: 16
	register int w;
	// register: 20
	register int h;
	// register: 18
	register int x;
	// register: 19
	register int y;
	// address: 0xFFFFFFA0
	auto int f;
	// address: 0xFFFFFFA8
	auto int n;
	// register: 21
	register int rand;
	// register: 17
	register int randu;
	// register: 2
	register int randl;
	// address: 0xFFFFFFB0
	auto unsigned char Rmask;
	// address: 0xFFFFFFB8
	auto unsigned char Gmask;
	// address: 0xFFFFFFC0
	auto unsigned char Bmask;
}


// address: 0x80095840
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	// register: 18
	register int t;
}


// address: 0x80095A64
void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x80095B88
void healFX__Fv() {
	// register: 19
	register int plr;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80095CA0
void HealStart__Fi(int plr) {
}


// address: 0x80095CD4
void HealotherStart__Fi(int plr) {
}


// address: 0x80095D0C
void TeleStart__Fi(int plr) {
}


// address: 0x80095D68
void PhaseStart__Fi(int plr) {
}


// address: 0x80095D9C
void InvisStart__Fi(int plr) {
}


// address: 0x80095DD0
void PhaseEnd__Fi(int plr) {
}


// address: 0x80095DFC
void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT R;
	// register: 3
	register int ScrXOff;
	// register: 3
	register int ScrYOff;
}


// address: 0x80095F9C
void ApocUpdate__11SPELLFX_DAT(struct SPELLFX_DAT *this) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT R;
}


// address: 0x80096008
void ApocaStart__Fi(int plr) {
}


// address: 0x80096060
void doapocaFX__Fv() {
	// register: 17
	register int plr;
}


// address: 0x80096178
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x800961DC
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x80096258
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x800962D4
void PRIM_GetPrim__FPP8POLY_FT4_addr_800962D4(struct POLY_FT4 **Prim) {
}


// address: 0x80096350
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80096350(struct TextDat *this, int FrNum) {
}


// address: 0x8009636C
void DrawArrow__Fii(int x1, int y1) {
	// register: 22
	// size: 0x24
	register struct Spell_Target *spl;
	// register: 20
	register char r;
	// register: 18
	register char b;
	{
		// register: 6
		register int ni;
		{
			// register: 30
			register int i;
			// register: 6
			register int ni;
		}
	}
}


// address: 0x80096570
void show_spell_dir__Fi(int pnum) {
	// register: 23
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 16
	register int cp;
	// register: 19
	// size: 0x24
	register struct Spell_Target *spl;
	// address: 0xFFFFFFB8
	auto int otx;
	// register: 30
	register int oty;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT R;
	// address: 0xFFFFFFC0
	// size: 0xE0
	auto struct CBlocks *gblocks;
	// register: 16
	register int ops;
}


// address: 0x800969E4
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x80096A58
void select_belt_item__Fi(int pnum) {
}


// address: 0x80096A60
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80096AC8
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80096BF8
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80096D30
void pad_func_up__Fi(int pnum) {
}


// address: 0x80096D5C
void pad_func_down__Fi(int pnum) {
}


// address: 0x80096D88
void pad_func_left__Fi(int pnum) {
}


// address: 0x80096D90
void pad_func_right__Fi(int pnum) {
}


// address: 0x80096D98
void pad_func_select__Fi(int pnum) {
}


// address: 0x80096E54
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 20
	register int x;
	// register: 21
	register int y;
}


// address: 0x80097270
void pad_func_Action__Fi(int pnum) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 19
	register int x;
	// register: 20
	register int y;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80097584
void InitTargetCursor__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
	{
		// register: 5
		register int i;
	}
}


// address: 0x8009768C
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x8009771C
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 17
	register int sp;
	// register: 19
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 21
	register int omp;
	// register: 5
	// size: 0x6C
	register struct CPad *pad;
	// register: 20
	register unsigned char DoTarget;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80097C9C
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80097D5C
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x80097E64
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x80097F50
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x8009803C
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x800980C0
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x80098158
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80098214
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x80098290
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 2
	register int ii;
	// register: 20
	// size: 0x23A8
	register struct PlayerStruct *player;
	{
	}
}


// address: 0x80098458
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x80098480
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x800984A8
int get_max_find_size__FPici(int *lsize, char mask, int pnum) {
	// register: 19
	register int maxlen;
	// register: 18
	register int size;
	{
		// register: 17
		register int i;
		{
			{
				{
					// register: 3
					register int l;
				}
			}
		}
	}
}


// address: 0x800985E8
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x800986F4
void DrawObjSelector__Fi(int pnum) {
	// register: 23
	// size: 0x23A8
	register struct PlayerStruct *player;
	// address: 0xFFFFFF40
	// size: 0x1E
	auto char str[30];
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 18
	register int cp;
	// address: 0xFFFFFF60
	auto int list_size;
	// address: 0xFFFFFF68
	auto int maxlen;
	// register: 2
	register int cgold;
	{
		// register: 21
		register int i;
		{
			// register: 9
			register int R;
			// register: 8
			register int G;
			// register: 3
			register int B;
			{
				{
					// register: 17
					register int len;
				}
			}
		}
	}
}


// address: 0x80098FB8
void DrawObjTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 17
	register int pnum;
	{
		// register: 16
		register int oseldata;
	}
}


// address: 0x80099094
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x800991A0
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x80099560
unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum) {
	// register: 2
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 18
	register int x;
	// register: 20
	register int y;
	// register: 16
	register int dir;
	// register: 19
	register int front_range;
	{
		{
			// register: 17
			register int i;
			{
				// register: 17
				register int l;
				{
					{
						// register: 19
						register int j;
						{
							{
								// register: 16
								register int i;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800997B4
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x800999D8
void _GLOBAL__D_gplayer() {
}


// address: 0x80099A00
void _GLOBAL__I_gplayer() {
}


// address: 0x80099A28
void SetRGB__6DialogUcUcUc_addr_80099A28(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80099A48
void SetBack__6Dialogi_addr_80099A48(struct Dialog *this, int Type) {
}


// address: 0x80099A50
void SetBorder__6Dialogi_addr_80099A50(struct Dialog *this, int Type) {
}


// address: 0x80099A58
void ___6Dialog_addr_80099A58(struct Dialog *this, int __in_chrg) {
}


// address: 0x80099A80
// size: 0x10
struct Dialog *__6Dialog_addr_80099A80(struct Dialog *this) {
}


// address: 0x80099ADC
void MoveToScrollTarget__7CBlocks_addr_80099ADC(struct CBlocks *this) {
}


// address: 0x80099AF0
unsigned short GetDown__C4CPad_addr_80099AF0(struct CPad *this) {
}


// address: 0x80099B18
unsigned short GetCur__C4CPad_addr_80099B18(struct CPad *this) {
}


// address: 0x80099B40
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x80099BBC
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	// register: 16
	register int TdIndex;
}


// address: 0x80099C14
void DEC_DoDecompRequests__Fv() {
	{
		// register: 17
		register int f;
	}
}


// address: 0x80099C70
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80099CA8
int FindEmptyIndex__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80099CE0
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80099D40
bool IsGameLoading__Fv() {
}


// address: 0x80099D4C
void PutUpCutScreenTSK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
	// address: 0xFFFFFFD0
	auto int lev;
	// address: 0xFFFFFFC8
	// size: 0x24
	auto struct POLY_G4 *G4;
	// register: 16
	register unsigned char barr;
	// register: 21
	register unsigned char barg;
	// register: 17
	register unsigned short prog;
}


// address: 0x8009A1B4
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x8009A264
void TakeDownCutScreen__Fv() {
}


// address: 0x8009A2F0
void FinishProgress__Fv() {
}


// address: 0x8009A340
void PRIM_GetPrim__FPP7POLY_G4_addr_8009A340(struct POLY_G4 **Prim) {
}


// address: 0x8009A3BC
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x8009A3F4
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}


// address: 0x8009A42C
void SetRGB__6DialogUcUcUc_addr_8009A42C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009A44C
void SetBack__6Dialogi_addr_8009A44C(struct Dialog *this, int Type) {
}


// address: 0x8009A454
void SetBorder__6Dialogi_addr_8009A454(struct Dialog *this, int Type) {
}


// address: 0x8009A45C
void ___6Dialog_addr_8009A45C(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009A484
// size: 0x10
struct Dialog *__6Dialog_addr_8009A484(struct Dialog *this) {
}


// address: 0x8009A4E0
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x8009A500
void init_mem_card__FPFii_v(void (*handler)()) {
}


// address: 0x8009A71C
void memcard_event__Fii(int evt, int side) {
}


// address: 0x8009A724
void init_card__Fi(int card_number) {
}


// address: 0x8009A758
int ping_card__Fi(int card_number) {
}


// address: 0x8009A7EC
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009A824
void MemcardON__Fv() {
}


// address: 0x8009A894
void MemcardOFF__Fv() {
}


// address: 0x8009A8E4
void PrintSelectBack__FbT0(bool S, bool B) {
	// register: 2
	register int len;
}


// address: 0x8009AA38
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct Dialog DBack;
}


// address: 0x8009AB1C
void DrawSpinner__FiiUcUcUciiibiT8(int x, int y, unsigned char SpinR, unsigned char SpinG, int SpinB, int spinradius, int spinbright, int angle, bool Sparkle, int OtPos, bool cross) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
	// register: 16
	// size: 0x34
	register struct POLY_GT4 *GT4;
	// register: 6
	// size: 0x28
	register struct POLY_GT3 *GT3;
	// address: 0xFFFFFFD0
	// size: 0x6C
	auto struct TextDat *ThisDat;
	// register: 16
	register unsigned char rand;
	// register: 5
	register int f;
	// register: 2
	register unsigned short bright;
	// register: 30
	register unsigned short r;
	// register: 23
	register unsigned short g;
	// register: 22
	register unsigned short b;
	// register: 3
	register int xr1;
	// register: 5
	register int yr1;
	// register: 7
	register int xr2;
	// register: 4
	register int yr2;
	// register: 2
	register int yr3;
	// register: 20
	register int radius;
	{
		// register: 17
		register int i;
		{
			{
				{
					// register: 17
					register char flip;
					{
						// register: 16
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8009AFE4
void DrawMenu__Fi(int MenuNo) {
	// address: 0xFFFFFF80
	// size: 0x8
	auto struct OMENULIST *mptr;
	// address: 0xFFFFFF88
	// size: 0x18
	auto struct OMENUITEM *iptr;
	// address: 0xFFFFFF90
	auto int sh;
	// address: 0xFFFFFF68
	// size: 0x24
	auto struct POLY_G4 *G4;
	// address: 0xFFFFFF98
	auto int yoff;
	// register: 18
	register int len;
	// address: 0xFFFFFFA0
	auto unsigned char r;
	// address: 0xFFFFFFA8
	auto unsigned char g;
	// address: 0xFFFFFFB0
	auto unsigned char b;
	// address: 0xFFFFFFB8
	auto int mx;
	// address: 0xFFFFFFC0
	auto int my;
	// register: 17
	register int mptrx;
	// register: 16
	register int mptry;
	{
		// register: 30
		register int i;
		{
			{
				{
					// register: 20
					register int sxp;
					// register: 22
					register int syp;
					{
						{
							// register: 18
							register int len;
							// register: 19
							register int cx;
							// register: 20
							register int cy;
							{
								{
									// register: 3
									register int fi;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8009BAC0
int who_pressed__Fi(int pval) {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 16
	// size: 0x6C
	register struct CPad *Pad1;
}


// address: 0x8009BB48
// size: 0x6C
struct CPad *PAD_GetOptionsPad__Fi(int p) {
}


// address: 0x8009BB84
void ShowCharacterFiles__Fv() {
	// register: 19
	register int j;
	// register: 23
	register int yoff;
	// register: 20
	register int move;
	// register: 6
	register int fileno;
	// register: 21
	// size: 0x6C
	register struct CPad *P;
	// register: 22
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 5
	register int lcs;
	{
		{
			// address: 0xFFFFFFC0
			// size: 0x10
			auto struct Dialog SBack;
			// address: 0xFFFFFFD0
			// size: 0x8
			auto struct RECT um;
			// register: 2
			register int X;
			// register: 2
			register int Y;
			// register: 2
			register int W;
			// register: 17
			register int H;
			// register: 19
			register int oldBot;
			// register: 18
			register int oldTot;
			{
				{
					// register: 18
					register int r;
					// register: 17
					register int g;
					// register: 16
					register int b;
				}
			}
		}
	}
}


// address: 0x8009C200
void MemcardPad__Fv() {
	// register: 17
	// size: 0x6C
	register struct CPad *P;
	// register: 16
	register int move;
	// register: 4
	register int save_blocks;
	// register: 18
	// size: 0x18
	register struct OMENUITEM *iptr;
	{
		{
			// register: 5
			register int lcs;
			{
				{
					// address: 0xFFFFFFD0
					// size: 0x10
					auto struct Dialog SBack;
					// address: 0xFFFFFFE0
					// size: 0x8
					auto struct RECT um;
					// register: 2
					register int X;
					// register: 2
					register int Y;
					// register: 2
					register int W;
					// register: 17
					register int H;
					// register: 19
					register int oldBot;
					// register: 18
					register int oldTot;
				}
			}
		}
	}
}


// address: 0x8009C7D0
void SoundPad__Fv() {
	// register: 18
	// size: 0x6C
	register struct CPad *P;
	// register: 16
	register int move;
	// register: 17
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 6
	register int lcs;
	{
		{
			{
				// register: 3
				register int l;
				{
					{
						{
							{
								// register: 16
								register int llen;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8009CDEC
void CentrePad__Fv() {
	// register: 17
	// size: 0x6C
	register struct CPad *P;
	// register: 16
	register int move;
	// register: 18
	// size: 0x18
	register struct OMENUITEM *iptr;
	{
		{
			// register: 5
			register int lcs;
			{
				// register: 16
				register int osx;
				// register: 19
				register int osy;
			}
		}
	}
}


// address: 0x8009D210
void CalcVolumes__Fv() {
}


// address: 0x8009D350
void GetVolumes__Fv() {
	{
		// register: 8
		register int i;
		{
			// register: 5
			// size: 0x8
			register struct OMENULIST *mptr;
			// register: 3
			// size: 0x18
			register struct OMENUITEM *iptr;
			{
				// register: 4
				register int s;
			}
		}
	}
}


// address: 0x8009D458
void PrintInfoMenu__Fv() {
	// address: 0xFFFFFEE0
	// size: 0x100
	auto char temp[256];
	// register: 16
	register int ypos;
}


// address: 0x8009D600
void DrawOptions__FP4TASK(struct TASK *T) {
	// register: 16
	register int old_pad;
	// register: 18
	// size: 0x6C
	register struct CPad *P;
	{
		{
			{
				// register: 4
				register int x;
				{
					{
						{
							{
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8009DD58
void ToggleOptions__Fv() {
}


// address: 0x8009DE00
void FormatPad__Fv() {
	// register: 16
	register int move;
	// register: 17
	// size: 0x6C
	register struct CPad *P;
	// register: 18
	// size: 0x18
	register struct OMENUITEM *iptr;
	// register: 5
	register int lcs;
}


// address: 0x8009E0E0
void ActivateMemcard__Fv() {
}


// address: 0x8009E114
void ShowGameFiles__FPc(char *filename) {
	// register: 22
	register int yoff;
	{
		{
			{
				// register: 17
				register int i;
				{
					// register: 3
					register int FileNo;
				}
			}
		}
	}
}


// address: 0x8009E260
void PRIM_GetPrim__FPP7POLY_G4_addr_8009E260(struct POLY_G4 **Prim) {
}


// address: 0x8009E2DC
unsigned short GetTick__C4CPad_addr_8009E2DC(struct CPad *this) {
}


// address: 0x8009E304
unsigned short GetDown__C4CPad_addr_8009E304(struct CPad *this) {
}


// address: 0x8009E32C
unsigned short GetUp__C4CPad_addr_8009E32C(struct CPad *this) {
}


// address: 0x8009E354
void SetPadTickMask__4CPadUs_addr_8009E354(struct CPad *this, unsigned short mask) {
}


// address: 0x8009E35C
void SetPadTick__4CPadUs_addr_8009E35C(struct CPad *this, unsigned short tick) {
}


// address: 0x8009E364
void SetRGB__6DialogUcUcUc_addr_8009E364(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009E384
void SetBack__6Dialogi_addr_8009E384(struct Dialog *this, int Type) {
}


// address: 0x8009E38C
void SetBorder__6Dialogi_addr_8009E38C(struct Dialog *this, int Type) {
}


// address: 0x8009E394
int SetOTpos__6Dialogi_addr_8009E394(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8009E3A0
void ___6Dialog_addr_8009E3A0(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009E3C8
// size: 0x10
struct Dialog *__6Dialog_addr_8009E3C8(struct Dialog *this) {
}


// address: 0x8009E424
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8009E424(struct TextDat *this, int FrNum) {
}


// address: 0x8009E440
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	// register: 16
	register int wx;
	// register: 3
	register int wy;
}


// address: 0x8009E498
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
	// register: 18
	register int offsx;
	// register: 19
	register int offsy;
}


// address: 0x8009E674
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	// register: 7
	register int x;
	// register: 3
	register int y;
}


// address: 0x8009E6F0
int BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int scared;
	// register: 2
	register int type;
	// register: 4
	register int i;
}


// address: 0x8009E7D0
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		// register: 3
		register int n;
	}
}


// address: 0x8009E824
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 17
	register int nd;
	// register: 9
	register int x;
	// register: 8
	register int y;
}


// address: 0x8009E98C
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009EA90
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009EACC
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009EB50
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009EBFC
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009ECA0
void BIRD_StartFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 16
	// size: 0x18
	register struct BIRDSTRUCT *leader;
	{
		{
			{
				// register: 16
				register int i;
			}
		}
	}
}


// address: 0x8009ED44
void BIRD_DoFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 20
	register int pnum;
	{
		{
			{
				{
					{
						{
							// register: 17
							register int x;
							// register: 18
							register int y;
						}
					}
				}
			}
		}
	}
}


// address: 0x8009EFF0
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009EFFC
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x8009F04C
void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 18
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009F138
void ProcessFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	// register: 19
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 20
		register int i;
		{
			{
				{
					// register: 17
					register int x;
					// register: 18
					register int y;
				}
			}
		}
	}
}


// address: 0x8009F268
void InitBird__Fv() {
	// register: 17
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 19
		register int i;
	}
}


// address: 0x8009F340
void ProcessBird__Fv() {
	// register: 16
	// size: 0x18
	register struct BIRDSTRUCT *b;
	{
		// register: 18
		register int i;
	}
}


// address: 0x8009F498
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	// register: 5
	register int banim;
}


// address: 0x8009F534
void bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4, int height) {
	// register: 17
	register int x;
	// register: 4
	register int y;
}


// address: 0x8009F664
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// register: 19
	// size: 0x6C
	register struct TextDat *Dat;
}


// address: 0x8009F770
void DrawLBird__Fv() {
	// register: 19
	// size: 0x18
	register struct BIRDSTRUCT *ThisBird;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct POLY_FT4 *Ft4;
	// address: 0xFFFFFFD0
	// size: 0xE0
	auto struct CBlocks *gblock;
	// register: 2
	register int ScrXOff;
	// register: 2
	register int ScrYOff;
	// register: 17
	register int x;
	// register: 18
	register int y;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT R;
	// register: 30
	// size: 0x6C
	register struct TextDat *Dat;
	{
		{
			{
				// register: 21
				register int i;
			}
		}
	}
}


// address: 0x8009F97C
void PRIM_GetPrim__FPP8POLY_FT4_addr_8009F97C(struct POLY_FT4 **Prim) {
}


// address: 0x8009F9F8
short PlayFMV__FPcii(char *str, int w, int h) {
	// register: 16
	register short RetVal;
	// register: 19
	// size: 0x4
	register enum OVER_TYPE CurrentOver;
}


// address: 0x8009FAB8
void play_movie(char *pszMovie) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8009FB74
void DisplayMonsterTypes__Fv() {
	// address: 0xFFFFFED8
	// size: 0x100
	auto char Text[256];
	// register: 17
	// size: 0xE0
	register struct CBlocks *MBlocks;
	// register: 20
	// size: 0x1C
	register struct CMonster *MyCMonst;
	// register: 18
	// size: 0x3C
	register struct MonsterData *MyMonst;
	// register: 17
	// size: 0x6C
	register struct TextDat *CMonstGraphics;
	// register: 19
	// size: 0x6C
	register struct TextDat *ObjGraphics;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 21
	register int NumMons;
	// register: 16
	register int PhysFrame;
	// register: 16
	register int Creature;
	// register: 16
	// size: 0x6C
	register struct CPad *P;
	{
		{
			{
				{
					// register: 2
					register char transfile;
				}
			}
		}
	}
}


// address: 0x800A0010
unsigned short GetDown__C4CPad_addr_800A0010(struct CPad *this) {
}


// address: 0x800A0038
int GetNumOfFrames__7TextDatii_addr_800A0038(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800A0070
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_800A0070(struct TextDat *this, int Creature) {
}


// address: 0x800A00E8
int GetNumOfCreatures__7TextDat_addr_800A00E8(struct TextDat *this) {
}


// address: 0x800A00FC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800A00FC(struct TextDat *this, int FrNum) {
}


// address: 0x800A0118
void LoadKanjiFont__FPc(char *name) {
}


// address: 0x800A01AC
void LoadKanjiIndex__FPc(char *name) {
	// register: 16
	// size: 0x14
	register struct FileIO *Fs;
}


// address: 0x800A0260
void FreeKanji__Fv() {
}


// address: 0x800A02E8
void LoadKanji__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto char tmp[40];
	// register: 16
	register char *bname;
}


// address: 0x800A03BC
unsigned short *getb__FUs(unsigned short n) {
	// register: 4
	// size: 0x4
	register struct kindexS *ii;
	// register: 3
	register int i;
	// register: 16
	register int off;
}


// address: 0x800A042C
void _get_font__FPUsUsUs(unsigned short *into, unsigned short num, unsigned short col) {
	// register: 8
	register unsigned short *p;
	// register: 16
	register unsigned short *d;
	// register: 5
	register long i;
	// register: 3
	register long j;
	// register: 6
	register short by;
}


// address: 0x800A04FC
int KPrintChar__FUsUsUcUcUs(unsigned short Cx, unsigned short Cy, unsigned char h, unsigned char l, int col) {
	// address: 0xFFFFFFE0
	// size: 0x28
	auto struct POLY_FT4 *ft4;
	// address: 0xFFFFFE80
	// size: 0x152
	auto unsigned short buff[169];
	// register: 5
	register unsigned short kan;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT r;
}


// address: 0x800A0670
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A0670(struct POLY_FT4 **Prim) {
}


// address: 0x800A06EC
void writeblock__FP5block(struct block *theblock) {
	{
		{
			{
				{
					{
						// register: 18
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x800A07D4
int PAK_DoPak__FPUcT0i(unsigned char *Dest, unsigned char *buffer, int insize) {
	// register: 3
	register long begin;
	// register: 19
	register long end;
	// register: 17
	register long bestlength;
	// register: 20
	register int offset;
	// register: 23
	register int bestoffset;
	// register: 22
	register unsigned char *theptr;
	// register: 18
	register unsigned char *ptr1;
	// register: 5
	register unsigned char *ptr2;
	// register: 4
	register unsigned char *ptr3;
	// address: 0xFFFFFDB0
	// size: 0x214
	auto struct block theblock;
	// register: 21
	register int inpos;
}


// address: 0x800A0A14
int PAK_DoUnpak__FPUcT0(unsigned char *Dest, unsigned char *Source) {
	// register: 19
	register int outsize;
	{
		// register: 5
		register unsigned char *From;
		// register: 17
		register int size;
		// register: 3
		register int ch;
	}
}


// address: 0x800A0AB4
void fputc__5blockUc(struct block *this, unsigned char Val) {
}


// address: 0x8002E8A0
unsigned char TrimCol__Fs_addr_8002E8A0(short col) {
}


// address: 0x8002E8D8
void DrawSpellCel__FllUclUc(long xp, long yp, unsigned char Trans, long nCel, int w) {
	// address: 0xFFFFFF78
	// size: 0x6C
	auto struct TextDat *ThisDat;
	// register: 17
	// size: 0xC
	register struct FRAME_HDR *Fr;
	// register: 6
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 19
	// size: 0x34
	register struct POLY_GT4 *GT4;
	// address: 0xFFFFFF80
	// size: 0x4
	auto struct TP_LOAD_HDR *Tp;
	// register: 19
	register int SpellW;
	// register: 20
	register int SpellH;
	// register: 18
	register unsigned char r;
	// address: 0xFFFFFF88
	auto unsigned char g;
	// address: 0xFFFFFF90
	auto unsigned char b;
	// register: 13
	register int x0;
	// register: 12
	register int x1;
	// register: 16
	register int x2;
	// register: 15
	register int x3;
	// register: 24
	register int y0;
	// register: 11
	register int y1;
	// register: 9
	register int y2;
	// register: 14
	register int y3;
	// register: 4
	register int u0;
	// register: 5
	register int u1;
	// register: 10
	register int u2;
	// register: 8
	register int u3;
	// register: 6
	register int v0;
	// register: 7
	register int v1;
	// register: 3
	register int v2;
	// register: 2
	register int v3;
	{
		{
			{
				{
					// register: 22
					register int X;
					// address: 0xFFFFFFC8
					auto int Y;
					// register: 20
					register int SW;
					// register: 23
					register int SH;
					// register: 3
					// size: 0x8
					register struct PAL *Pal;
					// address: 0xFFFFFFD0
					auto int st;
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x8002F3F4
void SetSpellTrans__Fc(char t) {
}


// address: 0x8002F400
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	{
		// register: 16
		register int omp;
	}
}


// address: 0x8002F498
void DrawSpeedSpellTSK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 17
	register int pnum;
	{
		// register: 16
		register int old_opts;
	}
}


// address: 0x8002F510
void ToggleSpell__Fi(int pnum) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x8002F5C4
void DrawSpellList__Fv() {
	// register: 18
	register int x;
	// register: 20
	register int y;
	// register: 22
	register int i;
	// register: 19
	register int j;
	// register: 4
	register int t;
	// address: 0xFFFFFFA8
	auto unsigned long mask;
	// address: 0xFFFFFFB0
	auto unsigned long spl;
	// register: 5
	register int s;
	// register: 17
	register int c;
	// register: 23
	register int v;
	// address: 0xFFFFFFB8
	auto int NoSpells;
	// register: 6
	register unsigned char trans;
	// register: 21
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 16
	// size: 0x6C
	register struct CPad *P;
	// register: 19
	register int lx;
	// register: 20
	register int ly;
	// register: 17
	register int NoYSpells;
	// register: 18
	register int NoXSpells;
	{
		{
			{
				{
					{
						{
							// register: 4
							register bool Flag;
						}
					}
				}
			}
		}
	}
}


// address: 0x8003014C
void SetSpell__Fi(int pnum) {
}


// address: 0x80030220
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x800302D0
void ClearPanel__Fv() {
}


// address: 0x80030300
void InitPanelStr__Fv() {
}


// address: 0x80030320
void InitControlPan__Fv() {
	// register: 4
	register int i;
}


// address: 0x80030568
void DrawCtrlPan__Fv() {
}


// address: 0x80030594
void DoAutoMap__Fv() {
}


// address: 0x80030608
void CheckPanelInfo__Fv() {
	// register: 18
	register int i;
	// register: 6
	register int x2;
	// register: 7
	register int y2;
	// register: 20
	// size: 0x4
	register int (*_pSpell)[1];
	// register: 16
	register int c;
	// register: 5
	register int s;
	// register: 16
	register int v;
	// address: 0xFFFFFFC0
	auto int pnum;
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											{
												{
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80030ECC
void FreeControlPan__Fv() {
	{
		// register: 4
		register void *p__p;
		{
			// register: 4
			register void *p__p;
			{
				// register: 4
				register void *p__p;
				{
					// register: 4
					register void *p__p;
					{
						// register: 4
						register void *p__p;
						{
							// register: 4
							register void *p__p;
							{
								// register: 4
								register void *p__p;
								{
									// register: 4
									register void *p__p;
									{
										// register: 4
										register void *p__p;
										{
											// register: 4
											register void *p__p;
											{
												// register: 4
												register void *p__p;
												{
													// register: 4
													register void *p__p;
													{
														// register: 4
														register void *p__p;
														{
															// register: 4
															register void *p__p;
															{
																// register: 4
																register void *p__p;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80030FDC
int CPrintString__FiPci(int No, char *pszStr, int Just) {
	// register: 6
	// size: 0x4
	register enum TXT_JUST Justify;
	// register: 8
	register unsigned char R;
	// register: 5
	register unsigned char G;
	// register: 3
	register unsigned char B;
}


// address: 0x800310F8
void PrintInfo__Fv() {
	// register: 19
	register int nOffset1;
	// register: 20
	register int w;
	// register: 18
	register int nlines;
	{
		{
			{
				// register: 16
				register int i;
				{
					// register: 16
					register int i;
				}
			}
		}
	}
}


// address: 0x80031334
void DrawInfoBox__FP4RECT(struct RECT *InfoRect) {
	// register: 16
	register int pnum;
	{
		{
			{
				{
					{
						{
							// register: 17
							register int nGold;
							{
								{
									{
										{
											{
												{
													{
														{
															{
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800319E8
void MY_PlrStringXY__Fv() {
	// register: 21
	// size: 0x28
	register struct CSDATA *ptr;
	// address: 0xFFFFFFC0
	auto char r;
	// address: 0xFFFFFFC8
	auto char g;
	// register: 30
	register char b;
	// register: 22
	register int x;
	// register: 23
	register int y;
	// address: 0xFFFFFFD0
	auto int w;
	// register: 20
	register int len;
}


// address: 0x80031F34
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	// register: 16
	// size: 0x28
	register struct CSDATA *ptr;
}


// address: 0x80031FDC
void DrawPlus__Fii(int n, int pnum) {
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 3
	register int x;
	// register: 7
	register int y;
}


// address: 0x80032144
void ChrCheckValidButton__Fi(int move) {
}


// address: 0x80032218
void DrawArrows__Fv() {
	// register: 18
	// size: 0x6C
	register struct TextDat *ThisDat;
	// register: 10
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 16
	register unsigned char flip;
	// register: 17
	register int x;
}


// address: 0x80032310
void BuildChr__Fv() {
	// register: 18
	register char c;
	// address: 0xFFFFFFB0
	// size: 0x40
	auto char chrstr[64];
	// register: 17
	register long mind;
	// register: 16
	register long maxd;
	// register: 16
	register int hper;
	// register: 16
	register int ac;
	{
		{
		}
	}
}


// address: 0x800335E8
void DrawChr__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x40
	auto char chrstr[64];
	// register: 2
	register int pc;
	// register: 17
	// size: 0x6C
	register struct CPad *P;
	{
		{
			// register: 18
			register int llus;
			// register: 16
			register int move;
		}
	}
}


// address: 0x80033A40
void DrawChrTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80033AF0
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x80033B84
void CheckChrBtns__Fv() {
	// register: 16
	register int move;
	// register: 5
	register int pc;
}


// address: 0x80033DE8
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x80033E6C
void RedBack__Fv() {
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80033F54
void PrintSBookStr__FiiUcPCcUc(int x, int y, unsigned char cjustflag, char *pszStr, int bright) {
}


// address: 0x80033FEC
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	// register: 16
	register char st;
}


// address: 0x80034204
void DrawSpellBook__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int ii;
	// register: 19
	register int x;
	// register: 20
	register int y;
	// address: 0xFFFFFFC8
	auto int mind;
	// address: 0xFFFFFFCC
	auto int maxd;
	// register: 23
	register int sx;
	// register: 22
	register int sy;
	// address: 0xFFFFFFD0
	auto unsigned long tspls;
	// register: 17
	register char c;
	// register: 16
	register int v;
	// register: 19
	register unsigned char bright;
	// address: 0xFFFFFFC0
	// size: 0x4
	auto char Num[4];
	// register: 22
	register int bw;
	// register: 16
	// size: 0x6C
	register struct CPad *P;
	// register: 17
	register int lsbooktab;
	// register: 18
	register int lcur_spel;
}


// address: 0x80034B90
void CheckSBook__Fv() {
	// register: 6
	register unsigned long tspls;
	// register: 10
	register char st;
}


// address: 0x80034DF4
char *get_pieces_str__Fi(int nGold) {
}


// address: 0x80034E28
void _GLOBAL__D_fontkern() {
}


// address: 0x80034E50
void _GLOBAL__I_fontkern() {
}


// address: 0x80034E8C
unsigned short GetTick__C4CPad_addr_80034E8C(struct CPad *this) {
}


// address: 0x80034EB4
unsigned short GetDown__C4CPad_addr_80034EB4(struct CPad *this) {
}


// address: 0x80034EDC
void SetPadTickMask__4CPadUs_addr_80034EDC(struct CPad *this, unsigned short mask) {
}


// address: 0x80034EE4
void SetPadTick__4CPadUs_addr_80034EE4(struct CPad *this, unsigned short tick) {
}


// address: 0x80034EEC
void SetRGB__6DialogUcUcUc_addr_80034EEC(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80034F0C
void SetBack__6Dialogi_addr_80034F0C(struct Dialog *this, int Type) {
}


// address: 0x80034F14
void SetBorder__6Dialogi_addr_80034F14(struct Dialog *this, int Type) {
}


// address: 0x80034F1C
void ___6Dialog_addr_80034F1C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80034F44
// size: 0x10
struct Dialog *__6Dialog_addr_80034F44(struct Dialog *this) {
}


// address: 0x80034FA0
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80034FA0(struct TextDat *this, int PalNum) {
}


// address: 0x80034FBC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80034FBC(struct TextDat *this, int FrNum) {
}


// address: 0x80034FD8
void InitCursor__Fv() {
}


// address: 0x80034FE0
void FreeCursor__Fv() {
}


// address: 0x80034FE8
void SetICursor__Fi(int i) {
}


// address: 0x80035044
void SetCursor__Fi(int i) {
}


// address: 0x800350A8
void NewCursor__Fi(int i) {
}


// address: 0x800350C8
void InitLevelCursor__Fv() {
}


// address: 0x80035128
void CheckTown__Fv() {
	{
		// register: 18
		register int i;
		{
			// register: 17
			register int mx;
		}
	}
}


// address: 0x80035380
void CheckRportal__Fv() {
	{
		// register: 17
		register int i;
		{
			// register: 16
			register int mx;
		}
	}
}


// address: 0x800355A8
void CheckCursMove__Fv() {
}


// address: 0x800355B0
void InitDead__Fv() {
	// register: 6
	register int nd;
	// register: 7
	register int i;
	// register: 2
	register int mi;
	// address: 0xFFFFFCD0
	// size: 0x320
	auto int mtypes[200];
}


// address: 0x800357AC
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
	// register: 6
	register char tdv;
}


// address: 0x800357F4
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x80035844
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x800358A0
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x80035914
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x800359D8
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80035BC0
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035D30
unsigned char TryIconCurs__Fv() {
}


// address: 0x8003610C
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036114
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800361C4
void LoadLvlGFX__Fv() {
}


// address: 0x80036260
void LoadAllGFX__Fv() {
}


// address: 0x80036280
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80036378
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x80036500
void ClearOutDungeonMap__Fv() {
	// register: 11
	register unsigned short val;
	{
		// register: 10
		register int x;
		{
			{
				// register: 6
				register int y;
			}
		}
	}
}


// address: 0x800365DC
void LoadGameLevel__FUci(unsigned char firstflag, int lvldir) {
	// register: 16
	register int i;
	// register: 4
	register int j;
	{
		{
			// register: 6
			register unsigned char visited;
		}
	}
}


// address: 0x80036F60
void game_logic__Fv() {
}


// address: 0x8003706C
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80037114
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x8003714C
void alloc_plr__Fv() {
}


// address: 0x80037154
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x8003715C
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x8003717C
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x8003719C
void app_fatal(char *pszFile) {
}


// address: 0x800371CC
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x800371F4
void DoMemCardFromInGame__Fv() {
}


// address: 0x8003721C
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80037270
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037290
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x800372D8
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x80037438
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x800374F0
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003761C
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037750
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037880
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800379B0
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037AE0
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037C18
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037D48
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037E78
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037FA8
void InitCows__Fv() {
	// register: 20
	register int i;
	// register: 17
	register int x;
	// register: 19
	register int y;
	// register: 18
	register int d;
	// register: 17
	register int x2;
	// register: 3
	register int y2;
}


// address: 0x8003826C
void InitTowners__Fv() {
}


// address: 0x800382F8
void FreeTownerGFX__Fv() {
	// register: 17
	register int i;
	{
		{
			{
				{
					{
						{
							{
								{
									// register: 4
									register void *p__p;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8003839C
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x800384BC
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800384F0
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80038524
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x8003860C
void TownHealer__Fv() {
}


// address: 0x80038634
void TownStory__Fv() {
}


// address: 0x8003865C
void TownDrunk__Fv() {
}


// address: 0x80038684
void TownBoy__Fv() {
}


// address: 0x800386AC
void TownWitch__Fv() {
}


// address: 0x800386D4
void TownBarMaid__Fv() {
}


// address: 0x800386FC
void TownCow__Fv() {
}


// address: 0x80038724
void ProcessTowners__Fv() {
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x80038974
// size: 0x98
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80038A48
void CowSFX__Fi(int pnum) {
	// address: 0x80121288
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012B308
	static int snLastCowSFX;
}


// address: 0x80038B64
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038BA4
void TalkToTowner__Fii(int p, int t) {
	// address: 0xFFFFFFE0
	auto int i;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 17
	// size: 0x98
	register struct ItemStruct *Item;
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x80039FCC
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x80039FD4
void stream_stop__Fv() {
}


// address: 0x8003A01C
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003A0E0
void stream_update__Fv() {
}


// address: 0x8003A0E8
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003A104
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003A15C
void FreeMonsterSnd__Fv() {
}


// address: 0x8003A164
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003A268
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003A378
void PlayEffect__Fii(int i, int mode) {
	// register: 16
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003A4A4
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003A53C
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003A57C
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003A5D0
void sound_stop__Fv() {
	// register: 18
	register int mi;
	// register: 17
	register int mode;
	// register: 16
	register int nr;
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x8003A668
void sound_update__Fv() {
}


// address: 0x8003A69C
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003A6E0
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


// address: 0x8003A788
int GetDirection__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 6
	register int mx;
	// register: 7
	register int my;
	// register: 3
	register int md;
}


// address: 0x8003A82C
void SetRndSeed__Fl(long s) {
}


// address: 0x8003A83C
long GetRndSeed__Fv() {
}


// address: 0x8003A884
long random__Fil(int idx, long v) {
}


// address: 0x8003A8F0
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003A93C
void mem_free_dbg__FPv(void *p) {
}


// address: 0x8003A98C
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x8003A994
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003AA24
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x8003AA2C
void InitDiabloMsg__Fc(char e) {
	// register: 3
	register int i;
}


// address: 0x8003AAC0
void ClrDiabloMsg__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003AAEC
void DrawDiabloMsg__Fv() {
	// address: 0xFFFFFEE8
	// size: 0x100
	auto char tempstr[256];
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT MsgBox;
}


// address: 0x8003ABF8
void interface_msg_pump__Fv() {
}


// address: 0x8003AC00
void ShowProgress__FUi(unsigned int uMsg) {
	// register: 17
	register int nol;
	// register: 18
	register unsigned long (*saveProc)();
	{
		{
		}
	}
}


// address: 0x8003B0EC
void InitAllItemsUseable__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8003B124
void InitItemGFX__Fv() {
}


// address: 0x8003B150
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003B218
void AddInitItems__Fv() {
	// register: 22
	register int j;
	{
		// register: 20
		register int i;
		{
			// register: 19
			register int ii;
			// register: 18
			register int xx;
			// register: 17
			register int yy;
		}
	}
}


// address: 0x8003B430
void InitItems__Fv() {
	// register: 4
	register int i;
	{
		{
		}
	}
}


// address: 0x8003B5F4
void CalcPlrItemVals__FiUc(int p, unsigned char Loadgfx) {
	// register: 11
	register int mind;
	// register: 10
	register int maxd;
	// register: 15
	register int tac;
	// register: 5
	register int g;
	// address: 0xFFFFFFD0
	auto int i;
	// register: 2
	register int mi;
	// register: 24
	register int bdam;
	// register: 25
	register int btohit;
	// address: 0xFFFFFF60
	auto int bac;
	// address: 0xFFFFFF68
	auto int sadd;
	// register: 19
	register int madd;
	// address: 0xFFFFFF70
	auto int dadd;
	// register: 18
	register int vadd;
	// register: 23
	register int fr;
	// register: 30
	register int lr;
	// register: 22
	register int mr;
	// register: 13
	register int dmod;
	// register: 14
	register int ghit;
	// register: 17
	register int lrad;
	// address: 0xFFFFFF78
	auto int ihp;
	// address: 0xFFFFFF80
	auto int imana;
	// address: 0xFFFFFF88
	auto int spllvladd;
	// address: 0xFFFFFF90
	auto int enac;
	// address: 0xFFFFFF98
	auto int fmin;
	// address: 0xFFFFFFA0
	auto int fmax;
	// address: 0xFFFFFFA8
	auto int lmin;
	// address: 0xFFFFFFB0
	auto int lmax;
	// address: 0xFFFFFFB8
	auto long iflgs;
	// register: 20
	register unsigned long spl;
	// register: 6
	register unsigned long t;
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *ptrplr;
	{
		{
			// register: 5
			// size: 0x98
			register struct ItemStruct *itm;
			{
				{
					// register: 3
					register int tmpac;
				}
			}
		}
	}
}


// address: 0x8003C0A4
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003C424
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003C4C0
void CalcSelfItems__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 7
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 5
	register unsigned char sf;
	// register: 11
	register unsigned char changeflag;
	// register: 10
	register int sa;
	// register: 9
	register int ma;
	// register: 8
	register int da;
}


// address: 0x8003C620
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003C66C
void CalcPlrItemMin__Fi(int pnum) {
	// register: 16
	register int i;
	// register: 17
	// size: 0x98
	register struct ItemStruct *pi;
	// register: 19
	// size: 0x23A8
	register struct PlayerStruct *p;
}


// address: 0x8003C74C
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003C9E0
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003CAA4
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003CBBC
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003CBE8
void GetGoldSeed__FiP10ItemStruct(int pnum, struct ItemStruct *h) {
	// register: 4
	register int i;
	// register: 2
	register int ii;
	// register: 7
	register int s;
	// register: 17
	register unsigned char doneflag;
}


// address: 0x8003CD64
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003CD6C
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003CD9C
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8003D1D8
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003D4B0
unsigned char GetItemSpace__Fiic(int x, int y, char inum) {
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 5
	register int xx;
	// register: 18
	register int yy;
	// register: 4
	register int rs;
	// register: 16
	register unsigned char savail;
}


// address: 0x8003D6DC
void GetSuperItemSpace__Fiic(int x, int y, char inum) {
	// register: 16
	register int xx;
	// register: 18
	register int yy;
	{
		// register: 19
		register int l;
		{
			{
				// register: 21
				register int j;
				{
					{
						// register: 17
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8003D844
void GetSuperItemLoc__FiiRiT2(int x, int y, int *xx, int *yy) {
	{
		// register: 17
		register int l;
		{
			{
				// register: 18
				register int j;
				{
					{
						// register: 16
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8003D90C
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003D9C4
void GetBookSpell__Fii(int i, int lvl) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int bs;
}


// address: 0x8003DC2C
void GetStaffPower__FiiiUc(int i, int lvl, int bs, unsigned char onlygood) {
	// address: 0xFFFFFB68
	// size: 0x400
	auto int l[256];
	// register: 5
	register int nl;
	// register: 6
	register int j;
	// register: 17
	register int preidx;
	// address: 0xFFFFFF68
	// size: 0x80
	auto char istr[128];
	// register: 2
	register unsigned char addok;
}


// address: 0x8003DE1C
void GetStaffSpell__FiiUc(int i, int lvl, unsigned char onlygood) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int l;
	// register: 19
	register int bs;
	// register: 5
	register int maxc;
	// register: 17
	register int minc;
	{
		{
			// register: 8
			register int v;
		}
	}
}


// address: 0x8003E0D0
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x8003E61C
int RndPL__Fii(int param1, int param2) {
}


// address: 0x8003E654
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x8003E6C8
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x8003FDF4
void GetItemPower__FiiilUc(int i, int minlvl, int maxlvl, long flgs, int onlygood) {
	// register: 16
	register int pre;
	// register: 23
	register int post;
	// address: 0xFFFFFB48
	// size: 0x400
	auto int l[256];
	// register: 5
	register int nl;
	// register: 7
	register int j;
	// register: 20
	register int preidx;
	// register: 30
	register int sufidx;
	// address: 0xFFFFFF48
	// size: 0x80
	auto char istr[128];
	// register: 21
	register unsigned char goe;
}


// address: 0x8004025C
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x80040358
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x8004046C
int RndItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 7
	register int i;
}


// address: 0x800406B0
int RndUItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 8
	register int i;
	// register: 6
	register unsigned char okflag;
}


// address: 0x800408F0
int RndAllItems__Fv() {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 6
	register int i;
}


// address: 0x80040A64
int RndTypeItems__Fii(int itype, int imid) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 9
	register int i;
	// register: 6
	register unsigned char okflag;
}


// address: 0x80040B64
int CheckUnique__FiiiUc(int i, int lvl, int uper, unsigned char recreate) {
	// register: 4
	register int j;
	// register: 2
	register int idata;
	// address: 0xFFFFFF68
	// size: 0x80
	auto unsigned char uok[128];
	// register: 16
	register int numu;
}


// address: 0x80040D14
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x80040FBC
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x800410C8
void ItemRndDur__Fi(int ii) {
}


// address: 0x80041158
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x80041464
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x800416AC
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x800417DC
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80041924
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x800419FC
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x80041ABC
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80041C00
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x80041DEC
void SpawnQuestItem__Fiiiii(int itemid, int x, int y, int randarea, int selflag) {
	// register: 17
	register int i;
	// register: 16
	register int j;
	// register: 3
	register unsigned char failed;
	{
		{
			// register: 21
			register int tries;
		}
	}
}


// address: 0x80042018
void SpawnRock__Fv() {
	// register: 3
	register int i;
	// register: 17
	register int ii;
	// register: 5
	register int ostand;
	// register: 5
	register int xx;
	// register: 2
	register int yy;
	// register: 4
	register unsigned char done;
}


// address: 0x800421D8
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x8004239C
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x800423F0
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x98
	register struct ItemStruct *i;
}


// address: 0x800424B8
void ProcessItems__Fv() {
	// register: 6
	register int i;
	// register: 5
	register int ii;
}


// address: 0x800425FC
void FreeItemGFX__Fv() {
}


// address: 0x80042604
void GetItemStr__Fi(int i) {
	{
		{
			{
				// register: 17
				register int nGold;
			}
		}
	}
}


// address: 0x80042794
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x80042884
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x80042954
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x80042A18
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x80042A88
void DoRecharge__Fii(int pnum, int cii) {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 16
	// size: 0x98
	register struct ItemStruct *pi;
	{
		{
			// register: 2
			register int r;
		}
	}
}


// address: 0x80042B88
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x80042C7C
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x80043330
void PrintUString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
}


// address: 0x80043338
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800435C4
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043934
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80043C44
void CastScroll__Fii(int pnum, int Spell) {
}


// address: 0x80043C54
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 4
	register long l;
	// register: 4
	register unsigned long t;
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *ptrplr;
}


// address: 0x8004426C
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x80044300
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x8004437C
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x80044484
void SpawnOnePremium__Fii(int i, int plvl) {
	// register: 16
	register int itype;
	// register: 20
	register int maxval;
	// address: 0xFFFFFF50
	// size: 0x98
	auto struct ItemStruct holditem;
}


// address: 0x800446A4
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x800448E8
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x80044A38
void SpawnStoreGold__Fv() {
}


// address: 0x80044ABC
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x80044C5C
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x80044CC0
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x80044E50
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80044FCC
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80045148
void DrawUniqueInfo__Fv() {
	// register: 3
	register int u;
}


// address: 0x800452BC
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 3
	register int PreIdx;
	// register: 19
	register int SufIdx;
}


// address: 0x80045454
int veclen2__Fii(int ix, int iy) {
	// register: 4
	register int t;
}


// address: 0x800454BC
void set_light_bands__Fv() {
	// register: 2
	register int v;
	// register: 5
	register int y;
	// register: 4
	register int c;
}


// address: 0x80045530
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x8004559C
void DoLighting__Fiiii(int nXPos, int nYPos, int nRadius, int Lnum) {
	// register: 9
	register int xoff;
	// register: 10
	register int yoff;
	// register: 20
	register int x;
	// register: 30
	register int y;
	// register: 4
	register int v;
	// register: 22
	register int colour_mask;
	// register: 17
	register int shift_mask;
	// register: 12
	register int shake;
	// address: 0xFFFFFFA8
	auto int light_x;
	// address: 0xFFFFFFB0
	auto int light_y;
	// address: 0xFFFFFFB8
	auto int block_x;
	// register: 9
	register int block_y;
	// register: 23
	register int dist_y;
	// register: 11
	register int max_x;
	// register: 6
	register int mult;
	// register: 7
	register int mult_st;
	// register: 21
	register int radius_block;
	// register: 7
	register int scr_x;
	// register: 8
	register int scr_y;
	// register: 6
	register int temp_x;
	// register: 5
	register int temp_y;
	// register: 19
	register int weirdy;
	// register: 11
	register int cont;
}


// address: 0x8004624C
void DoUnLight__Fv() {
	// register: 6
	register int x;
	// register: 7
	register int y;
	// register: 11
	register int max_x;
	// register: 16
	register int max_y;
	// register: 14
	register int radius_block;
	// register: 13
	register int nXPos;
	// register: 12
	register int nYPos;
}


// address: 0x80046490
void DoUnVision__Fiii(int nXPos, int nYPos, int nRadius) {
	// register: 4
	register int i;
	// register: 6
	register int j;
	// register: 3
	register int x1;
	// register: 9
	register int y1;
	// register: 8
	register int x2;
	// register: 5
	register int y2;
}


// address: 0x80046554
void DoVision__FiiiUcUc(int nXPos, int nYPos, int nRadius, unsigned char doautomap, int visible) {
	// register: 16
	register int nCrawlX;
	// register: 19
	register int nCrawlY;
	// register: 9
	register int nLineLen;
	// register: 21
	register int nBlockerFlag;
	// register: 8
	register int j;
	// register: 20
	register int k;
	// register: 2
	register int v;
	// register: 5
	register int x1adj;
	// register: 7
	register int x2adj;
	// register: 4
	register int y1adj;
	// register: 6
	register int y2adj;
}


// address: 0x80046A64
void FreeLightTable__Fv() {
}


// address: 0x80046A6C
void InitLightTable__Fv() {
}


// address: 0x80046A74
void MakeLightTable__Fv() {
}


// address: 0x80046A7C
void InitLightMax__Fv() {
}


// address: 0x80046AA0
void InitLighting__Fv() {
	// register: 2
	register int i;
}


// address: 0x80046AE4
int AddLight__Fiii(int x, int y, int r) {
	// register: 7
	register int lid;
}


// address: 0x80046B78
void AddUnLight__Fi(int i) {
}


// address: 0x80046BA8
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x80046BD4
void ChangeLightXY__Fiii(int i, int x, int y) {
}


// address: 0x80046C0C
void light_fix__Fi(int i) {
}


// address: 0x80046C14
void ChangeLightOff__Fiii(int i, int x, int y) {
}


// address: 0x80046C4C
void ChangeLight__Fiiii(int i, int x, int y, int r) {
}


// address: 0x80046C90
void ChangeLightColour__Fii(int i, int c) {
}


// address: 0x80046CC0
void ProcessLightList__Fv() {
	// register: 7
	register int i;
	// register: 16
	register int j;
	// register: 4
	register unsigned char temp;
}


// address: 0x80046DEC
void SavePreLighting__Fv() {
}


// address: 0x80046DF4
void InitVision__Fv() {
	// register: 4
	register int i;
}


// address: 0x80046E44
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	// register: 8
	register int vid;
}


// address: 0x80046F48
void ChangeVisionRadius__Fii(int id, int r) {
	// register: 8
	register int i;
}


// address: 0x80046FFC
void ChangeVisionXY__Fiii(int id, int x, int y) {
	// register: 10
	register int i;
}


// address: 0x800470B4
void ProcessVisionList__Fv() {
	// register: 17
	register int i;
	// register: 4
	register unsigned char delflag;
}


// address: 0x80047314
void FreeQuestText__Fv() {
}


// address: 0x8004731C
void InitQuestText__Fv() {
}


// address: 0x80047328
void CalcTextSpeed__FPCc(char *Name) {
	// register: 16
	register char *ptr;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto char SpeechName[16];
	// register: 19
	register unsigned long SfxFrames;
	// register: 2
	register unsigned long TextHeight;
	// register: 18
	register int NoLines;
	// register: 17
	register int cw;
}


// address: 0x80047468
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto char Name[8];
}


// address: 0x8004757C
void DrawQTextBack__Fv() {
}


// address: 0x800475EC
void DrawQTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x800476BC
void DrawQText__Fv() {
	// register: 18
	register char *p;
	// address: 0xFFFFFFC0
	auto char *pnl;
	// register: 21
	register char *SpacePtr;
	// address: 0xFFFFFF38
	// size: 0x80
	auto char tempstr[128];
	// register: 30
	register int ty;
	// register: 19
	register int l;
	// register: 17
	register int i;
	// register: 23
	register unsigned char doneflag;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT ClipRect;
	// register: 4
	register unsigned long currTime;
	// register: 20
	register int LetterCount;
}


// address: 0x80047A04
void _GLOBAL__D_QBack() {
}


// address: 0x80047A2C
void _GLOBAL__I_QBack() {
}


// address: 0x80047A54
void SetRGB__6DialogUcUcUc_addr_80047A54(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80047A74
void SetBorder__6Dialogi_addr_80047A74(struct Dialog *this, int Type) {
}


// address: 0x80047A7C
void ___6Dialog_addr_80047A7C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80047AA4
// size: 0x10
struct Dialog *__6Dialog_addr_80047AA4(struct Dialog *this) {
}


// address: 0x80047B00
int GetCharWidth__5CFontc_addr_80047B00(struct CFont *this, char ch) {
}


// address: 0x80047B58
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80047B58(struct TextDat *this, int FrNum) {
}


// address: 0x80047B74
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80047B7C
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80047B84
void delta_init__Fv() {
}


// address: 0x80047BE4
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	// register: 5
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047C80
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	// register: 3
	// size: 0x6
	register struct DMonsterStr *p;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
}


// address: 0x80047D04
void delta_sync_golem__FPC9TCmdGolemiUc(struct TCmdGolem *pG, int pnum, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x6
	register struct DMonsterStr *pD;
}


// address: 0x80047D94
void delta_leave_sync__FUc(unsigned char bLevel) {
	// register: 20
	// size: 0xF1C
	register struct DLevel *Dl;
	{
		// register: 19
		register int i;
		{
			// register: 4
			register int ii;
			// register: 16
			// size: 0x6
			register struct DMonsterStr *pD;
		}
	}
}


// address: 0x800480C0
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	// register: 2
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 2
	// size: 0x1
	register struct DObjectStr *p;
}


// address: 0x80048120
unsigned char delta_get_item__FPC9TCmdGItemUc(struct TCmdGItem *pI, unsigned char bLevel) {
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 15
	// size: 0x14
	register struct TCmdPItem *pD;
	// register: 7
	register int i;
}


// address: 0x800482E4
void delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI, int x, int y, unsigned char bLevel) {
	// register: 9
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 7
	// size: 0x14
	register struct TCmdPItem *pD;
	// register: 8
	register int i;
}


// address: 0x8004846C
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x80048490
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x800484B4
void DeltaAddItem__Fi(int ii) {
	// register: 7
	// size: 0x14
	register struct TCmdPItem *pD;
	// register: 10
	// size: 0x14
	register struct TCmdPItem *OpD;
	// register: 4
	// size: 0xF1C
	register struct DLevel *Dl;
	// register: 8
	register int i;
}


// address: 0x800486C8
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x800486F8
int DeltaImportData__FPc(char *Src) {
}


// address: 0x8004872C
void DeltaSaveLevel__Fv() {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80048828
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	// address: 0xFFFFFFF0
	// size: 0x1
	auto struct TCmd cmd;
}


// address: 0x80048850
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdGolem cmd;
}


// address: 0x8004889C
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFF0
	// size: 0x3
	auto struct TCmdLoc cmd;
}


// address: 0x800488CC
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdLocParam1 cmd;
}


// address: 0x80048904
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdLocParam2 cmd;
}


// address: 0x80048944
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	// address: 0xFFFFFFE8
	// size: 0xA
	auto struct TCmdLocParam3 cmd;
}


// address: 0x8004898C
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	// address: 0xFFFFFFF0
	// size: 0x4
	auto struct TCmdParam1 cmd;
}


// address: 0x800489B8
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	// address: 0xFFFFFFF0
	// size: 0x6
	auto struct TCmdParam2 cmd;
}


// address: 0x800489E8
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdParam3 cmd;
}


// address: 0x80048A20
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	// address: 0xFFFFFFF0
	// size: 0x5
	auto struct TCmdQuest cmd;
}


// address: 0x80048A94
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048BC8
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048C44
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	// address: 0xFFFFFFE0
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048C9C
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct TCmdGItem cmd;
}


// address: 0x80048D04
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80048E0C
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct TCmdChItem cmd;
}


// address: 0x80048EB0
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	// address: 0xFFFFFFF0
	// size: 0x2
	auto struct TCmdDelItem cmd;
}


// address: 0x80048EE0
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto struct TCmdPItem cmd;
}


// address: 0x80048FF4
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x80048FFC
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct TCmdDamage cmd;
}


// address: 0x80049030
void delta_open_portal__FiUcUcUcUcUc(int pnum, unsigned char x, unsigned char y, unsigned char bLevel, int bLType, int bSetLvl) {
}


// address: 0x8004908C
void delta_close_portal__Fi(int pnum) {
}


// address: 0x800490CC
void check_update_plr__Fi(int pnum) {
}


// address: 0x800490D4
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049178
void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800491A8
void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800491D8
void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049208
void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049238
void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800492AC
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049350
void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 18
			register int ii;
		}
	}
}


// address: 0x80049490
void On_GETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x1C
	register struct TCmdGItem *p;
	// register: 21
	register int nIndex;
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											// register: 5
											register int hitem;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80049660
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049704
void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049838
void On_AGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0x1C
	register struct TCmdGItem *p;
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											// register: 5
											register int hitem;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80049A00
void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80049A9C
void On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 16
	// size: 0x14
	register struct TCmdPItem *p;
	{
		{
			// register: 3
			register int ii;
		}
	}
}


// address: 0x80049C4C
void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 3
			register int ii;
		}
	}
}


// address: 0x80049D88
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 16
	// size: 0x14
	register struct TCmdPItem *p;
}


// address: 0x80049EA0
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80049F4C
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A054
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A14C
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A248
void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004A370
void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 17
			// size: 0x6
			register struct TCmdLocParam1 *p;
		}
	}
}


// address: 0x8004A498
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A500
void On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			// register: 19
			// size: 0x4
			register struct TCmdParam1 *p;
			// register: 16
			register int dx;
			// register: 2
			register int dy;
		}
	}
}


// address: 0x8004A654
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A73C
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A81C
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A900
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004A9E4
void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AA70
void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004AAA8
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AB18
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004ABBC
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004ABF4
void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004ACD8
void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004AD44
void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004ADB0
void On_AWAKEGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				{
					// register: 6
					register unsigned char addok;
					{
						// register: 5
						register int i;
						{
							// register: 2
							register int mi;
						}
					}
				}
			}
		}
	}
}


// address: 0x8004AF20
void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B024
void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B06C
void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B228
void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B2C0
void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B358
void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B3F0
void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B484
void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B518
void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B520
void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B528
void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B530
void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B588
void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004B81C
void On_ACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	// register: 17
	// size: 0xA
	register struct TCmdLocParam3 *p;
	{
		{
			{
				{
					{
						{
							// register: 4
							register int i;
							// register: 2
							register int mi;
							// register: 6
							register unsigned char addok;
						}
					}
				}
			}
		}
	}
}


// address: 0x8004B9AC
void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004B9FC
void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BA44
void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BA84
void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BAC4
void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BB04
void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004BB44
void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8004BB8C
void On_ENDSHIELD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				// register: 17
				register int i;
				{
					// register: 16
					register int mi;
				}
			}
		}
	}
}


// address: 0x8004BCA8
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	// address: 0x8012C164
	static unsigned char sbLastCmd;
}


// address: 0x8004C0C8
// size: 0xF1C
struct DLevel *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x8004C158
void ReleaseDLevel__FP6DLevel(struct DLevel *Dl) {
}


// address: 0x8004C190
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x8004C1BC
int InitLevelType__Fi(int l) {
}


// address: 0x8004C208
void SetupLocalCoords__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x8004C398
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004C40C
unsigned char NetInit__FUcPUc(unsigned char bSinglePlayer, unsigned char *pfExitProgram) {
	// address: 0xFFFFFF50
	// size: 0x80
	auto char szPlayerDescript[128];
	{
		{
			// address: 0xFFFFFFD0
			// size: 0x28
			auto struct _uiheroinfo heroinfo;
			{
				{
				}
			}
		}
	}
}


// address: 0x8004C634
void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C76C
void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x8004C8B8
void PostAddArmorStand__Fi(int i) {
}


// address: 0x8004C940
unsigned char PostTorchLocOK__Fii(int xp, int yp) {
}


// address: 0x8004C980
void PostAddObjLight__Fii(int i, int r) {
}


// address: 0x8004CA24
void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


// address: 0x8004CAD8
void InitObjectGFX__Fv() {
	// address: 0xFFFFFF88
	// size: 0x38
	auto unsigned char fileload[56];
	// register: 3
	register int i;
	// register: 5
	register int t;
	{
		{
			{
				{
					// address: 0xFFFFFFC0
					// size: 0x20
					auto char filestr[32];
				}
			}
		}
	}
}


// address: 0x8004CCF4
void FreeObjectGFX__Fv() {
}


// address: 0x8004CD00
void DeleteObject__Fii(int oi, int i) {
	// register: 5
	register int ox;
	// register: 5
	register int oy;
}


// address: 0x8004CDB8
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	// register: 4
	register int ai;
	// register: 3
	register int j;
}


// address: 0x8004D03C
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x8004D09C
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x8004D0C4
void AddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004D1D0
void PostAddObject__Fiii(int ot, int ox, int oy) {
	// register: 16
	register int oi;
}


// address: 0x8004D2DC
void Obj_Light__Fii(int i, int lr) {
	// register: 23
	register int ox;
	// register: 22
	register int oy;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 19
	register int p;
	// register: 21
	register int tr;
	// register: 20
	register unsigned char turnon;
}


// address: 0x8004D4EC
void Obj_Circle__Fi(int i) {
	// register: 3
	register int px;
	// register: 2
	register int py;
	// register: 6
	register int ox;
	// register: 7
	register int oy;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8004D810
void Obj_StopAnim__Fi(int i) {
}


// address: 0x8004D874
void DrawExpl__Fiiiiiccc(int sx, int sy, int f, int ot, int scale, int rtint, int gtint, int btint) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 30
	register int PhysFrame;
	// register: 21
	// size: 0x6C
	register struct TextDat *ObjDat;
	// register: 5
	register int temp;
	// register: 17
	register int bright;
	// register: 2
	register int W;
	// register: 2
	register int H;
}


// address: 0x8004DB50
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	// register: 6
	register int f;
}


// address: 0x8004DBC0
void Obj_Door__Fi(int i) {
	// register: 5
	register int dx;
	// register: 7
	register int dy;
	// register: 6
	register unsigned char dok;
}


// address: 0x8004DD54
void Obj_Sarc__Fi(int i) {
}


// address: 0x8004DDA0
void ActivateTrapLine__Fii(int ttype, int tid) {
	// register: 17
	register int i;
	// register: 2
	register int oi;
}


// address: 0x8004DEB0
void Obj_FlameTrap__Fi(int i) {
	// register: 5
	register int xp;
	// register: 6
	register int yp;
	// register: 7
	register int j;
}


// address: 0x8004E180
void Obj_Trap__Fi(int i) {
	// register: 16
	register int oti;
	// register: 5
	register unsigned char otrig;
	// register: 20
	register int sx;
	// register: 21
	register int sy;
	// register: 18
	register int dx;
	// register: 17
	register int dy;
	// register: 3
	register int x;
	// register: 5
	register int y;
	// register: 8
	register int ax;
	// register: 9
	register int ay;
}


// address: 0x8004E4D0
void Obj_BCrossDamage__Fi(int i) {
	// register: 2
	register int resist;
	// address: 0xFFFFFFE8
	// size: 0x10
	auto int damage[4];
}


// address: 0x8004E760
void ProcessObjects__Fv() {
	// register: 17
	register int i;
	// register: 16
	register int oi;
}


// address: 0x8004EA00
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x8004EA38
void ObjSetMini__Fiii(int x, int y, int v) {
	// register: 16
	register long v2;
	// register: 17
	register long v3;
	// register: 18
	register long v4;
	// register: 22
	register int xx;
	// register: 21
	register int yy;
}


// address: 0x8004EB0C
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004EB14
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8004EB1C
void DoorSet__Fiii(int oi, int dx, int dy) {
	// register: 18
	register int pn;
}


// address: 0x8004ED9C
void RedoPlayerVision__Fv() {
	// register: 17
	register int p;
}


// address: 0x8004EE40
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F1E4
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 17
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F5BC
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004F954
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 18
	register int dx;
	// register: 19
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FCEC
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x8004FFF4
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	// register: 16
	register int dx;
	// register: 18
	register int dy;
	// register: 4
	register unsigned char dok;
}


// address: 0x800502FC
void MonstCheckDoors__Fi(int m) {
	// register: 20
	register int i;
	// register: 16
	register int oi;
	// register: 19
	register int dpx;
	// register: 18
	register int dpy;
	// register: 21
	register int mx;
	// register: 22
	register int my;
}


// address: 0x800507F8
void PostAddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x80050930
void PostAddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 17
	register int i;
	// register: 18
	register int j;
	// register: 16
	register int pn;
}


// address: 0x80050A44
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80050BFC
void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 3
	register int i;
	// register: 5
	register int j;
}


// address: 0x80050CA8
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	// register: 20
	register int i;
	// register: 18
	register int j;
}


// address: 0x80050E18
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80050F74
void OperateLever__Fii(int pnum, int i) {
	// register: 6
	register unsigned char mapflag;
	// register: 5
	register int j;
	// register: 2
	register int oi;
	// register: 2
	register int ot;
}


// address: 0x80051160
void OperateBook__Fii(int pnum, int i) {
	// register: 21
	register int v1;
	// register: 19
	register int v2;
	// register: 16
	register int j;
	// register: 3
	register int oi;
	// register: 3
	register int ot;
	// register: 16
	register int itm;
	{
		{
			// register: 6
			register unsigned char found;
			// register: 5
			register unsigned char dowarp;
			{
				{
				}
			}
		}
	}
}


// address: 0x80051654
void OperateBookLever__Fii(int pnum, int i) {
	// register: 19
	register int x;
	// register: 18
	register int y;
	// register: 16
	register int tren;
}


// address: 0x800519FC
void OperateSChambBk__Fii(int pnum, int i) {
	// register: 18
	register int textdef;
	// register: 16
	register int j;
}


// address: 0x80051BD4
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int j;
	// register: 8
	register int mdir;
	// register: 21
	register int mtype;
}


// address: 0x80051FA4
void OperateMushPatch__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80052168
void OperateInnSignChest__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80052300
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80052554
void OperateTrapLvr__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int oi;
}


// address: 0x80052724
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800528DC
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052A38
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	// register: 16
	register int dpx;
	// register: 20
	register int dpy;
}


// address: 0x80052B94
void LoadMapObjs__FPUcii(unsigned char *pMap, int startx, int starty) {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 19
	register int rw;
	// register: 20
	register int rh;
	// register: 17
	register unsigned char *lm;
	// register: 2
	register long mapoff;
}


// address: 0x80052C9C
void OperatePedistal__Fii(int pnum, int i) {
	// address: 0xFFFFFFE8
	auto int jstn;
	{
		{
			{
				{
					// register: 16
					register unsigned char *setp;
					{
					}
				}
			}
		}
	}
}


// address: 0x80052F54
void TryDisarm__Fii(int pnum, int i) {
	// register: 6
	register int j;
	// register: 3
	register int oi;
	// register: 2
	register int oti;
	// register: 16
	register int trapdisper;
	// register: 2
	register unsigned char checkflag;
}


// address: 0x80053118
int ItemMiscIdIdx__Fi(int imiscid) {
	// register: 5
	register int i;
}


// address: 0x80053188
void OperateShrine__Fiii(int pnum, int i, int sType) {
	// register: 18
	register int r;
	// register: 4
	register int xx;
	// register: 5
	register int yy;
	// register: 6
	register int sc;
	// register: 16
	register int v1;
	// register: 20
	register int v2;
	// register: 21
	register int v3;
	// register: 17
	register int v4;
	// register: 16
	register unsigned long lv;
	// register: 6
	register unsigned long t;
	// register: 21
	register unsigned char done;
}


// address: 0x80055764
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800558E0
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055AB0
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80055B98
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 6
	register int uniqueRnd;
}


// address: 0x80055D08
int FindValidShrine__Fi(int i) {
	// register: 4
	register int rv;
	// register: 16
	register unsigned char done;
}


// address: 0x80055DF8
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x80055EA0
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x80055F54
unsigned char OperateFountains__Fii(int pnum, int i) {
	// register: 21
	register int ii;
	// register: 19
	register unsigned char rv;
	{
		{
			{
				{
					// register: 16
					register int rndVal;
					// register: 19
					register int statVal;
					// register: 20
					register int saveRnd;
					// register: 22
					register int status;
				}
			}
		}
	}
}


// address: 0x80056500
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	// register: 17
	register int weaponType;
}


// address: 0x800566AC
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x800567B0
void OperateLazStand__Fii(int pnum, int i) {
	// address: 0xFFFFFFF0
	auto int x;
	// address: 0xFFFFFFF4
	auto int y;
}


// address: 0x80056890
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	// register: 3
	register unsigned char senditemmsg;
}


// address: 0x80056CC8
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80056DDC
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80056EF0
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	// register: 4
	register unsigned char opok;
}


// address: 0x80057004
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x800571E4
void BreakCrux__Fi(int i) {
	// register: 5
	register int j;
	// register: 3
	register int ot;
	// register: 2
	register int oi;
	// register: 6
	register unsigned char mapflag;
}


// address: 0x800573D4
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	// register: 5
	register int oi;
}


// address: 0x80057928
void BreakObject__Fii(int pnum, int oi) {
	// register: 6
	register int objdam;
	// register: 17
	register int mind;
	// register: 5
	register int maxd;
}


// address: 0x80057A88
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x80057AE4
void SyncL1Doors__Fi(int i) {
	// register: 16
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x80057BFC
void SyncCrux__Fi(int i) {
	// register: 6
	register int j;
	// register: 3
	register int ot;
	// register: 2
	register int oi;
	// register: 7
	register unsigned char mapflag;
}


// address: 0x80057D34
void SyncLever__Fi(int i) {
}


// address: 0x80057DB0
void SyncQSTLever__Fi(int i) {
	// register: 16
	register int tren;
}


// address: 0x80057EA8
void SyncPedistal__Fi(int i) {
	// register: 16
	register unsigned char *setp;
	{
		{
			{
			}
		}
	}
}


// address: 0x80058004
void SyncL2Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x8005816C
void SyncL3Doors__Fi(int i) {
	// register: 7
	register int dx;
	// register: 5
	register int dy;
}


// address: 0x80058298
void SyncObjectAnim__Fi(int o) {
	// register: 5
	register int ai;
	// register: 3
	register int ot;
	// register: 3
	register int j;
}


// address: 0x800583D8
void GetObjectStr__Fi(int i) {
}


// address: 0x800587F4
void RestoreObjectLight__Fv() {
	// register: 16
	register int i;
	// register: 2
	register int oi;
	// register: 4
	register int ox;
	// register: 5
	register int oy;
}


// address: 0x80058A48
int GetNumOfFrames__7TextDatii_addr_80058A48(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80058A80
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80058A80(struct TextDat *this, int Creature) {
}


// address: 0x80058AF8
int GetNumOfCreatures__7TextDat_addr_80058AF8(struct TextDat *this) {
}


// address: 0x80058B0C
int FindPath__FPFiii_UciiiiiPc(unsigned char (*PosOk)(), int PosOkArg, int sx, int sy, int dx, int dy, char *path) {
}


// address: 0x80058B14
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x80058B40
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x80058BF4
void SetupLocalPlayer__Fv() {
}


// address: 0x80058C14
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058C58
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058C6C
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058C8C
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058C94
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058CB0
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058CD4
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x80058F10
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x8005932C
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x80059394
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80059504
void AddPlrExperience__FP12PlayerStructil(struct PlayerStruct *ptrplr, int lvl, long exp) {
	// register: 19
	register int omp;
	// register: 4294967295
	register long v;
	// register: 6
	register long e;
	{
		{
			// register: 4
			register long lLevel;
			// register: 3
			register long lMax;
			{
				{
					// register: 17
					register int l;
					{
						{
							{
								// register: 16
								register int i;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80059710
void AddPlrMonstExper__Filc(int lvl, long exp, char pmask) {
	// register: 3
	register int totplrs;
	{
		// register: 4
		register int i;
		{
			{
			}
		}
	}
}


// address: 0x80059794
void InitPlayer__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char FirstTime) {
	{
		{
			{
				{
					// register: 17
					register int i;
				}
			}
		}
	}
}


// address: 0x80059B60
void InitMultiView__Fv() {
}


// address: 0x80059B68
bool CheckLeighSolid__Fii(int x, int y) {
	// address: 0xFFFFFFB0
	// size: 0x50
	auto struct bbssbb bodge[10];
	{
		// register: 4
		register int i;
	}
}


// address: 0x80059C00
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80059C88
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059D1C
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059E10
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059E24
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x80059EB0
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059F14
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800DEAF8
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x80059F50
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059F7C
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x8005A0B4
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A14C
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005A2E8
void RemovePlrFromMap__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 13
	register int pp;
	// register: 4
	register int pn;
	// register: 5
	register int x;
	// register: 10
	register int y;
}


// address: 0x8005A408
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x8005A528
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005A6C4
void PlrDeadItem__FP12PlayerStructP10ItemStructii(struct PlayerStruct *ptrplr, struct ItemStruct *itm, int xx, int yy) {
	// register: 19
	register int x;
	// register: 20
	register int y;
	{
		// register: 17
		register int l;
		{
			{
				// register: 18
				register int j;
				{
					{
						// register: 16
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8005A88C
void StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 18
	// size: 0x98
	register struct ItemStruct *pi;
	// address: 0xFFFFFF50
	// size: 0x98
	auto struct ItemStruct ear;
	// register: 16
	register int i;
	// register: 19
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 20
	register unsigned char diablolevel;
	{
		{
			{
				{
					{
						// register: 2
						register int pdd;
					}
				}
			}
		}
	}
}


// address: 0x8005ABA4
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005AFEC
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005B130
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005B150
void RemovePlrMissiles__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 16
	register int mx;
	{
		{
		}
	}
}


// address: 0x8005B438
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B4F4
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005B638
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B6C8
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005B784
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B78C
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005B814
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005BB80
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005BD20
unsigned char PlrHitMonst__FP12PlayerStructi(struct PlayerStruct *ptrplr, int m) {
	// register: 18
	register int hit;
	// register: 16
	register int hper;
	// register: 16
	register int mind;
	// register: 5
	register int maxd;
	// register: 16
	register int ddp;
	// register: 18
	register long dam;
	// register: 20
	register long skdam;
	// register: 4
	register int phanditype;
	// register: 3
	register int tmac;
	// register: 21
	register unsigned char rv;
	// address: 0xFFFFFFD8
	auto unsigned char ret;
}


// address: 0x8005C350
unsigned char PlrHitPlr__FP12PlayerStructc(struct PlayerStruct *ptrplr, char p) {
	// register: 20
	register int hit;
	// register: 16
	register int hper;
	// register: 16
	register int mind;
	// register: 5
	register int maxd;
	// register: 16
	register int ddp;
	// register: 17
	register long dam;
	// register: 4
	register long skdam;
	// register: 4
	register int tac;
	// register: 7
	register int blk;
	// register: 3
	register int blkper;
	// register: 21
	register unsigned char rv;
}


// address: 0x8005C700
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005C790
int PM_DoAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int dx;
	// register: 18
	register int dy;
	// register: 5
	register int m;
	// register: 5
	register char p;
	// register: 19
	register unsigned char didhit;
	// register: 4
	register int frame;
}


// address: 0x8005CB1C
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005CC1C
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CCDC
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CD7C
void do_spell_anim__FiiiP12PlayerStruct(int aframe, int spell, int clss, struct PlayerStruct *ptrplr) {
	// register: 16
	// size: 0x84
	register struct CPlayer *test;
	// register: 30
	register int OtPos;
	// register: 23
	register int ScrX;
	// register: 18
	register int ScrY;
	// register: 20
	// size: 0x6C
	register struct TextDat *missdat;
	// register: 16
	// size: 0x6C
	register struct TextDat *objdat;
	// register: 21
	register int otad;
	// address: 0xFFFFFF88
	// size: 0x28
	auto struct POLY_FT4 *FT4a;
	// address: 0xFFFFFF8C
	// size: 0x28
	auto struct POLY_FT4 *FT4b;
	// address: 0xFFFFFF90
	// size: 0x28
	auto struct POLY_FT4 *FT4c;
	// register: 19
	register int frame;
	// register: 2
	register unsigned int rnd;
	// register: 18
	register unsigned int rot;
}


// address: 0x8005DD40
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E0B0
void ArmorDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 4
	register int a;
	// register: 17
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8005E1AC
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005E228
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E368
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E370
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005E7B0
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005E818
void ValidatePlayer__Fv() {
	// register: 5
	register int i;
	// register: 7
	register int gt;
	// register: 2
	register int pc;
	// register: 10
	register unsigned long msk;
	// register: 14
	register unsigned long b;
}


// address: 0x8005ECF4
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005ED90
void ProcessPlayers__Fv() {
	// register: 16
	register int raflag;
	// register: 18
	register int pnum;
	// register: 20
	register int tplayer;
	{
		{
			// register: 17
			// size: 0x23A8
			register struct PlayerStruct *ptrplr;
		}
	}
}


// address: 0x8005F0C4
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F0EC
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr, int px, int py) {
	// register: 2
	register int mi;
	// register: 16
	register int p;
	// register: 2
	register char bv;
	// register: 17
	// size: 0xC
	register struct map_info *dm;
}


// address: 0x8005F294
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005F29C
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 18
	// size: 0x24
	register struct Spell_Target *spl;
	// register: 7
	register unsigned char addflag;
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int rspell;
}


// address: 0x8005F6A4
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x8005F7E0
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F810
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005F9AC
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FAC8
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FBB4
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FC98
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FD74
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x8005FDB8
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FE94
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FF04
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FFE0
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8006004C
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060054
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80060384
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800603AC
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x800603F0
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060424
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060458
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8006048C
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x800604C0
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800604F4
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x8006052C
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060560
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060588
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800605B0
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800605D8
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x80060620
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060648
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060670
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800606A4
void InvisStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800606CC
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800606F4
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80060738
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x8006076C
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800607A0
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x800607EC
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x80060838
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x80060884
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x800608D8
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x80060924
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80060970
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x800609C0
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80060A0C
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80060A58
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80060AA4
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80060AF0
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80060B3C
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80060B88
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80060BD8
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80060C24
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80060C74
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80060CC0
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80060D0C
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80060D58
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80060DA4
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80060DF0
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80060E3C
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80060E88
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80060ED4
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80060F20
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80060F6C
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80060FB8
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x80060FEC
void PRIM_GetPrim__FPP8POLY_FT4_addr_80060FEC(struct POLY_FT4 **Prim) {
}


// address: 0x80061068
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x800610B8
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800610C4
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800610D0
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800610DC
void TSK_Lava2Water__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFFB0
	// size: 0x20
	auto unsigned short LAVAPAL[16];
	// address: 0xFFFFFFD0
	// size: 0x20
	auto unsigned short WATERPAL[16];
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT ClutR;
	// register: 16
	register int clut;
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
	// register: 3
	// size: 0x8
	register struct PAL *Pal;
	// register: 2
	register unsigned short cx;
	// register: 3
	register unsigned short cy;
	// register: 16
	register bool ch;
	{
		{
			{
				// register: 4
				register int i;
				{
					{
						// register: 10
						register int i;
						{
							// register: 11
							register unsigned short col1;
							// register: 3
							register unsigned short col2;
							// register: 14
							register unsigned char sb;
							// register: 13
							register unsigned char sg;
							// register: 8
							register unsigned char dr;
							// register: 7
							register unsigned char dg;
							// register: 5
							register unsigned char db;
						}
					}
				}
			}
		}
	}
}


// address: 0x8006132C
void CheckQuests__Fv() {
	// register: 18
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
}


// address: 0x800617E8
unsigned char ForceQuests__Fv() {
	{
		// register: 6
		register int i;
		{
			// register: 16
			register int ql;
			// register: 18
			register int qx;
			// register: 17
			register int qy;
			{
				// register: 4
				register int j;
			}
		}
	}
}


// address: 0x8006198C
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x80061A20
void CheckQuestKill__FiUc(int m, unsigned char sendmsg) {
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											// register: 4
											register int i;
											// register: 7
											register int j;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80062000
void SetReturnLvlPos__Fv() {
}


// address: 0x80062110
void GetReturnLvlPos__Fv() {
}


// address: 0x80062164
void ResyncMPQuests__Fv() {
}


// address: 0x800622A0
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x80062800
void PrintQLString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
	// register: 10
	register unsigned char r;
	// register: 9
	register unsigned char g;
	// register: 8
	register unsigned char b;
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80062A2C
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80062BE0
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80062C60
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80062D70
void QuestlogUp__Fv() {
}


// address: 0x80062DC8
void QuestlogDown__Fv() {
}


// address: 0x80062E30
void RemoveQLog__Fv() {
}


// address: 0x80062E9C
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x80062F38
void QuestlogESC__Fv() {
}


// address: 0x80062F60
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x80062FE0
void _GLOBAL__D_questlog() {
}


// address: 0x80063008
void _GLOBAL__I_questlog() {
}


// address: 0x80063030
// size: 0x6C
struct TextDat *GetBlockTexDat__7CBlocks(struct CBlocks *this) {
}


// address: 0x8006303C
void SetRGB__6DialogUcUcUc_addr_8006303C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006305C
void SetBack__6Dialogi_addr_8006305C(struct Dialog *this, int Type) {
}


// address: 0x80063064
void SetBorder__6Dialogi_addr_80063064(struct Dialog *this, int Type) {
}


// address: 0x8006306C
void ___6Dialog_addr_8006306C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80063094
// size: 0x10
struct Dialog *__6Dialog_addr_80063094(struct Dialog *this) {
}


// address: 0x800630F0
// size: 0x8
struct PAL *GetPal__7TextDati_addr_800630F0(struct TextDat *this, int PalNum) {
}


// address: 0x8006310C
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8006310C(struct TextDat *this, int FrNum) {
}


// address: 0x80063128
void DrawView__Fii(int StartX, int StartY) {
}


// address: 0x800632F0
void DrawAndBlit__Fv() {
	// register: 16
	register unsigned char ctrlPan;
}


// address: 0x800633E8
void FreeStoreMem__Fv() {
}


// address: 0x800633F0
void DrawSTextBack__Fv() {
}


// address: 0x80063460
void PrintSString__FiiUcPcci(int x, int y, unsigned char cjustflag, char *str, int col, int val) {
	// register: 21
	register int xx;
	// register: 19
	register int yy;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto char valstr[32];
	// register: 30
	register int SpinnerY;
	// register: 20
	register unsigned char R;
	// register: 18
	register unsigned char G;
	// register: 17
	register unsigned char B;
	// address: 0x8012B508
	static unsigned char DaveFix;
}


// address: 0x80063838
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x800638CC
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063964
void AddSLine__Fi(int y) {
}


// address: 0x800639B4
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x800639DC
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063A90
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x80063F18
void StoreAutoPlace__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int w;
	// register: 19
	register int h;
	// register: 3
	register int idx;
	// register: 4
	register unsigned char done;
}


// address: 0x80064538
void S_StartSmith__Fv() {
}


// address: 0x800646C0
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80064878
void S_StartSBuy__Fv() {
}


// address: 0x800649A8
void S_ScrollSPBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 22
	register int ls;
	// register: 16
	register char iclr;
	// register: 3
	register int boughtitems;
	{
		{
			{
				{
					// register: 16
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x80064BC8
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064D18
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064DFC
void S_ScrollSSell__Fi(int idx) {
	// register: 19
	register int l;
	// register: 23
	register int ls;
	// register: 20
	register int v;
	// register: 18
	register char iclr;
	{
		{
			{
				{
					// register: 17
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x80065024
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80065454
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x800654F8
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x800656D8
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065BA8
void S_StartWitch__Fv() {
}


// address: 0x80065CE8
void S_ScrollWBuy__Fi(int idx) {
	// register: 19
	register int l;
	// register: 21
	register int ls;
	// register: 18
	register char iclr;
	{
		{
			{
				{
					// register: 17
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x80065EC0
void S_StartWBuy__Fv() {
}


// address: 0x80065FEC
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80066110
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80066768
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x800667F0
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066970
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066D90
void S_StartNoMoney__Fv() {
}


// address: 0x80066DF8
void S_StartNoRoom__Fv() {
}


// address: 0x80066E58
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x800671A8
void S_StartBoy__Fv() {
}


// address: 0x80067338
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x80067494
void S_StartHealer__Fv() {
}


// address: 0x80067668
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x800677D4
void S_StartHBuy__Fv() {
}


// address: 0x800678F4
void S_StartStory__Fv() {
}


// address: 0x800679E4
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067A18
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067AEC
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006854C
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80068720
void S_StartTalk__Fv() {
	// register: 18
	register int i;
	// register: 5
	register int tq;
	// register: 17
	register int sn;
	// register: 22
	register int la;
	// register: 20
	register int gl;
}


// address: 0x80068950
void S_StartTavern__Fv() {
}


// address: 0x80068A48
void S_StartBarMaid__Fv() {
}


// address: 0x80068B1C
void S_StartDrunk__Fv() {
}


// address: 0x80068BF0
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80068EE0
void DrawSText__Fv() {
}


// address: 0x80068F20
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80068FE8
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80069194
void STextESC__Fv() {
}


// address: 0x80069310
void STextUp__Fv() {
}


// address: 0x80069498
void STextDown__Fv() {
}


// address: 0x80069630
void S_SmithEnter__Fv() {
}


// address: 0x80069704
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069780
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800697FC
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069C48
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80069E3C
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A060
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006A1E8
void S_SPBuyEnter__Fv() {
	// register: 5
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
	{
		// register: 3
		register int xx;
	}
}


// address: 0x8006A418
unsigned char StoreGoldFit__Fi(int idx) {
	// register: 18
	register int sz;
	// register: 16
	register int numsqrs;
	// register: 4
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006A6D0
void PlaceStoreGold__Fl(long v) {
	// register: 16
	register int i;
	// register: 18
	register int ii;
	// register: 19
	register int xx;
	// register: 17
	register int yy;
	// register: 5
	register unsigned char done;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8006A934
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006AC28
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006AD2C
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006AF9C
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B0F8
void S_WitchEnter__Fv() {
}


// address: 0x8006B1A8
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B3A8
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B594
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B698
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B810
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B96C
void S_BoyEnter__Fv() {
}


// address: 0x8006BAA4
void BoyBuyItem__Fv() {
}


// address: 0x8006BB28
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BDCC
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006BFA4
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006C2F0
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C40C
void S_HealerEnter__Fv() {
}


// address: 0x8006C4A4
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C6B0
void S_StoryEnter__Fv() {
}


// address: 0x8006C748
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C8C4
void S_TalkEnter__Fv() {
	// register: 16
	register int i;
	// register: 5
	register int tq;
	// register: 18
	register int sn;
	// register: 21
	register int la;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8006CABC
void S_TavernEnter__Fv() {
}


// address: 0x8006CB2C
void S_BarmaidEnter__Fv() {
}


// address: 0x8006CB9C
void S_DrunkEnter__Fv() {
}


// address: 0x8006CC0C
void STextEnter__Fv() {
}


// address: 0x8006CE0C
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006CF28
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006CF3C
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006CF64
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x8006CF8C
unsigned short GetDown__C4CPad_addr_8006CF8C(struct CPad *this) {
}


// address: 0x8006CFB4
void SetRGB__6DialogUcUcUc_addr_8006CFB4(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006CFD4
void SetBorder__6Dialogi_addr_8006CFD4(struct Dialog *this, int Type) {
}


// address: 0x8006CFDC
void ___6Dialog_addr_8006CFDC(struct Dialog *this, int __in_chrg) {
}


// address: 0x8006D004
// size: 0x10
struct Dialog *__6Dialog_addr_8006D004(struct Dialog *this) {
}


// address: 0x8006D060
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x8006D1D4
void T_FillSector__FPUcT0iiiib(unsigned char *P3Tiles, unsigned char *pSector, int xi, int yi, int w, int h, bool AddSec) {
	// register: 9
	register int i;
	// register: 14
	register int j;
	// register: 3
	register int xx;
	// register: 5
	register int yy;
	// register: 7
	register long v1;
	// register: 4
	register long v2;
	// register: 3
	register long v3;
	// register: 8
	register long v4;
	// register: 25
	register long ii;
	{
		{
			// register: 12
			register unsigned short *Map;
			{
				{
					{
						{
							// register: 2
							register long Dave;
						}
					}
				}
			}
		}
	}
}


// address: 0x8006D3CC
void T_FillTile__FPUciii(unsigned char *P3Tiles, int xx, int yy, int t) {
	// register: 4
	register long v1;
	// register: 9
	register long v2;
	// register: 9
	register long v3;
	// register: 3
	register long v4;
}


// address: 0x8006D4BC
void T_Pass3__Fv() {
	// register: 19
	register unsigned char *pSector;
	// register: 16
	register int xx;
	// register: 10
	register int yy;
	{
		// register: 5
		register int y;
		{
			{
				// register: 4
				register int x;
				{
					{
						{
							{
								{
									// register: 4
									register void *p__p;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8006D87C
void CreateTown__Fi(int entry) {
	{
		// register: 6
		register int y;
		{
			{
				// register: 4
				register int x;
			}
		}
	}
}


// address: 0x8006D9E4
unsigned char *GRL_LoadFileInMemSig__FPCcPUl(char *Name, unsigned long *Len) {
	// register: 18
	// size: 0x14
	register struct FileIO *MyIo;
	// address: 0xFFFFFFD8
	// size: 0x14
	auto char SmallName[20];
	// register: 16
	register unsigned char *Dest;
	// register: 16
	register int FileLen;
}


// address: 0x8006DAC8
void GRL_StripDir__FPcPCc(char *Dest, char *Src) {
	// register: 17
	register char *BSlash;
	// register: 3
	register char *FSlash;
	{
		{
			// register: 5
			register char *Last;
		}
	}
}


// address: 0x8006DB60
unsigned char ForceTownTrig__Fv() {
	// register: 5
	register int i;
}


// address: 0x8006DE78
unsigned char ForceL1Trig__Fv() {
	// register: 3
	register int j;
}


// address: 0x8006E128
unsigned char ForceL2Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 3
	register int dy;
}


// address: 0x8006E588
unsigned char ForceL3Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006EA04
unsigned char ForceL4Trig__Fv() {
	// register: 17
	register int j;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8006EF10
void Freeupstairs__Fv() {
	// register: 8
	register int j;
	// register: 9
	register int tx;
	// register: 10
	register int ty;
	// register: 4
	register int xx;
	// register: 5
	register int yy;
}


// address: 0x8006EFD0
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x8006F0C4
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x8006F1B8
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x8006F2AC
void CheckTrigForce__Fv() {
	// register: 21
	register int ocursmx;
	// register: 20
	register int ocursmy;
	{
		{
			{
				// register: 19
				register int i;
				{
					{
						// register: 19
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8006F5C8
void FadeGameOut__Fv() {
}


// address: 0x8006F664
bool IsTrigger__Fii(int x, int y) {
	{
	}
}


// address: 0x8006F6C8
void CheckTriggers__Fi(int pnum) {
	// register: 17
	register int x;
	// register: 16
	register int y;
	{
		// register: 23
		register int i;
		{
			{
				{
					{
						{
							// register: 4
							register unsigned char abortflag;
							// register: 17
							register int dx;
							// register: 16
							register int dy;
							// register: 19
							register char m;
						}
					}
				}
			}
		}
	}
}


// address: 0x8006FBD8
int GetManaAmount__Fii(int id, int sn) {
	// register: 3
	register int i;
	// register: 8
	register int sl;
	// register: 6
	register int ma;
	// register: 7
	register int adj;
}


// address: 0x8006FEA0
void UseMana__Fii(int id, int sn) {
	// register: 2
	register int ma;
}


// address: 0x8006FFE4
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x80070084
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	// register: 17
	register int i;
	// register: 21
	register int dir;
}


// address: 0x80070330
void DoResurrect__Fii(int pnum, int rid) {
}


// address: 0x800705E4
void DoHealOther__Fii(int pnum, int rid) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x80070848
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80070850
void snd_get_volume__FPCcPl(char *pszKey, long *plVolume) {
	// register: 2
	register unsigned long dwTemp;
}


// address: 0x800708B8
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
}


// address: 0x800708D8
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x80070948
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
}


// address: 0x800709E4
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80070A40
void music_stop__Fv() {
}


// address: 0x80070A84
void music_fade__Fv() {
}


// address: 0x80070AC4
void music_start__Fi(int nTrack) {
	{
		{
			// register: 6
			register int MusicVolume;
		}
	}
}


// address: 0x80070B50
void music_hold__Fv() {
}


// address: 0x80070BB0
void music_release__Fv() {
}


// address: 0x80070C00
void flyabout__7GamePad(struct GamePad *this) {
	// register: 16
	register int cp;
	// register: 20
	register int owx;
	// register: 21
	register int owy;
	// register: 18
	register int wx;
	// register: 19
	register int wy;
	// register: 23
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 4
	register int step;
}


// address: 0x800710BC
void CloseInvChr__Fv() {
}


// address: 0x80071104
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x800711B0
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071220
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071290
// size: 0x9C
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x800713C0
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80071400
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071444
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071488
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x800716F8
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x800718B8
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80071914
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x80071950
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x800719F0
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
}


// address: 0x80071DC4
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 16
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80071E98
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80071FB0
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x80071FF4
int CheckBodge__7GamePadi(struct GamePad *this, int dir) {
	// register: 20
	register int x;
	// register: 21
	register int y;
	// register: 16
	register int lnd;
	// register: 17
	register int rnd;
	// register: 22
	register int newdir;
	// register: 17
	register int fx;
	// register: 16
	register int fy;
}


// address: 0x800722F8
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80072604
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 17
	register int x;
	// register: 18
	register int y;
	{
		{
			// register: 16
			// size: 0x98
			register struct ItemStruct *pi;
		}
	}
}


// address: 0x8007295C
void show_combos__7GamePad(struct GamePad *this) {
	// register: 22
	register int x;
	// register: 21
	register int y;
	{
		// register: 19
		register int i;
	}
}


// address: 0x80072B10
void Handle__7GamePad(struct GamePad *this) {
	// register: 17
	register int cp;
	{
		{
			{
				{
					{
						// register: 6
						register unsigned long msk;
						{
							{
								{
									{
										{
											{
												{
													{
														{
															{
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80073174
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEA8
	// size: 0x9C
	auto struct GamePad GPad1;
	// address: 0xFFFFFF48
	// size: 0x9C
	auto struct GamePad GPad2;
	// register: 18
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80073378
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 2
	// size: 0x5C
	register struct TASK *gtask;
	// register: 16
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80073428
void Init_GamePad__Fv() {
}


// address: 0x80073458
void InitGamePadVars__Fv() {
}


// address: 0x800734E8
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


// address: 0x80073558
void MoveToScrollTarget__7CBlocks_addr_80073558(struct CBlocks *this) {
}


// address: 0x8007356C
unsigned short GetDown__C4CPad_addr_8007356C(struct CPad *this) {
}


// address: 0x80073594
unsigned short GetUp__C4CPad_addr_80073594(struct CPad *this) {
}


// address: 0x800735BC
unsigned short GetCur__C4CPad_addr_800735BC(struct CPad *this) {
}


// address: 0x800735E4
void DoGameTestStuff__Fv() {
}


// address: 0x80073610
void DoInitGameStuff__Fv() {
}


// address: 0x80073644
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80073664
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x80073684
void GRL_InitGwin__Fv() {
}


// address: 0x80073690
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	// register: 2
	register unsigned long (*OldProc)();
}


// address: 0x800736A0
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x800736C8
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80073774
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x800737BC
// size: 0x4
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x800737C8
void LANG_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	{
		{
			// address: 0xFFFFFFC0
			// size: 0x28
			auto char FileNameBuffer[40];
			// register: 17
			// size: 0x14
			register struct FileIO *FIO;
			{
				// register: 4
				register int f;
			}
		}
	}
}


// address: 0x80073948
char *GetStr__Fi(int StrId) {
}


// address: 0x800739B0
void LANG_SetLang__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
	{
		{
			// address: 0xFFFFFFC0
			// size: 0x28
			auto char FileNameBuffer[40];
			// register: 16
			// size: 0x14
			register struct FileIO *FIO;
			{
				// register: 4
				register int f;
			}
		}
	}
}


// address: 0x80073B28
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x80073B80
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x80073B8C
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	// register: 17
	register char *Ext;
}


// address: 0x80073CAC
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x80073D2C
void TempPrintMissile__FiiiiiiiiccUcUcUcc(int ScrX, int ScrY, int OtPos, int spell, int aframe, int direction, int anim, int sfx, int xflip, int yflip, int red, int grn, int blu, int semi) {
	// address: 0xFFFFFFA8
	// size: 0x28
	auto struct POLY_FT4 *FT4;
	// address: 0xFFFFFFAC
	// size: 0x28
	auto struct POLY_FT4 *FT5;
	// register: 17
	// size: 0x6C
	register struct TextDat *missdat;
	// register: 16
	register int frame;
	// register: 5
	register int tv1;
	{
		{
			{
				{
					// register: 16
					register int yness;
					// register: 16
					register int shape;
					// register: 19
					register int redness;
					// register: 18
					register int bluness;
					{
						// register: 21
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x80074270
void FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x800743F0
void FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 16
	register int anim;
	// register: 2
	// size: 0x18
	register struct POLY_F4 *F4;
	// register: 3
	register int tv1;
}


// address: 0x80074550
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x800745E8
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80074698
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800746FC
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074814
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x800748AC
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 3
	register int frame;
}


// address: 0x80074944
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800749AC
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 3
	register int frame;
}


// address: 0x80074A40
void FuncFARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 11
			register char xflip;
			// register: 10
			register char yflip;
			// register: 8
			register int frame;
		}
	}
}


// address: 0x80074B20
void FuncLARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 11
			register char xflip;
			// register: 10
			register char yflip;
			// register: 8
			register int frame;
		}
	}
}


// address: 0x80074BF8
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80074C88
void FuncBONESPIRIT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 22
	register char xflip;
	// register: 23
	register char yflip;
	// register: 16
	register int frame;
	// register: 21
	register int sfx;
}


// address: 0x80074DA4
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 10
	register char xflip;
	// register: 9
	register char yflip;
	// register: 8
	register int frame;
}


// address: 0x80074E40
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074EA8
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80074F10
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 17
	register unsigned char red;
	// register: 18
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80075044
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	// register: 18
	register unsigned char red;
	// register: 19
	register unsigned char grn;
	// register: 16
	register unsigned char blu;
}


// address: 0x80075188
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x800751F0
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075248
void FuncELEMENT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			// register: 9
			register char xflip;
			// register: 3
			register int frame;
		}
	}
}


// address: 0x80075314
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075378
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075380
void FuncFLASH__FP13MissileStructiii(struct MissileStruct *Ms, int x, int y, int OtPos) {
	// register: 16
	register int size;
	{
		{
			// register: 16
			// size: 0x84
			register struct CPlayer *test;
			// register: 16
			register int rot;
			{
				{
					// register: 5
					// size: 0x34
					register struct POLY_GT4 *GT4;
					// address: 0xFFFFFFC0
					// size: 0x6C
					auto struct TextDat *ThisDat;
					// register: 4
					register int xr1;
					// register: 3
					register int yr1;
					// register: 6
					register int xr2;
					// register: 7
					register int yr2;
					// register: 17
					register int radius;
					// address: 0xFFFFFFC8
					auto int angle;
					// register: 3
					register unsigned int bright;
					// register: 21
					register unsigned int r;
					// register: 23
					register unsigned int g;
					// register: 20
					register unsigned int b;
					// register: 22
					register char flip;
					{
						// register: 16
						register int i;
						{
							// register: 16
							register int i;
						}
					}
				}
			}
		}
	}
}


// address: 0x800758A8
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075950
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x80075958
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007598C
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007598C(struct POLY_FT4 **Prim) {
}


// address: 0x80075A08
// size: 0x84
struct CPlayer *GetPlayer__7CPlayeri_addr_80075A08(int PNum) {
}


// address: 0x80075A58
int GetLastOtPos__C7CPlayer_addr_80075A58(struct CPlayer *this) {
}


// address: 0x80075A64
int GetLastScrY__C7CPlayer_addr_80075A64(struct CPlayer *this) {
}


// address: 0x80075A70
int GetLastScrX__C7CPlayer_addr_80075A70(struct CPlayer *this) {
}


// address: 0x80075A7C
int GetNumOfFrames__7TextDat_addr_80075A7C(struct TextDat *this) {
}


// address: 0x80075A90
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80075A90(struct TextDat *this, int FrNum) {
}


// address: 0x80075AAC
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80075AE4
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x80075B64
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x80075BFC
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x80075CAC
int ML_GetPresetMonsters__FiPiUl(int currlevel, int *typelist, unsigned long QuestsNeededMask) {
	// register: 10
	// size: 0x10
	register struct MonstList *Mlist;
	// register: 18
	register int NumOfMonsters;
	// register: 16
	register int ThisList;
	{
		// register: 9
		register unsigned int f;
		{
			{
				{
					{
						// register: 7
						register int i;
						{
							{
								{
									// register: 4
									register int minl;
									// register: 2
									register int maxl;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80075E68
// size: 0x28
struct POLY_FT4 *DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos, int XOffSet, int YOffSet) {
	// register: 16
	register int AnimFrame;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 2
	register int LoadIndex;
	// register: 17
	register int Creature;
	{
		{
			// register: 16
			register int PhysFrame;
			{
				{
					// register: 16
					// size: 0x28
					register struct POLY_FT4 *ShadFt4;
				}
			}
		}
	}
}


// address: 0x80075FFC
// size: 0x28
struct POLY_FT4 *LightObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 19
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x800760B4
// size: 0x28
struct POLY_FT4 *DoorObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 22
	register int AnimFrame;
	// register: 18
	register int XOffSet;
	// register: 17
	register int YOffSet;
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 19
	// size: 0xC
	register struct FRAME_HDR *PalFr;
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
	// register: 3
	register int LoadIndex;
	// register: 23
	register int Creature;
	{
		{
		}
	}
}


// address: 0x80076348
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x80076420
// size: 0x28
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800764A8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800764D4
// size: 0x28
struct POLY_FT4 *PrintOBJ_LEVER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076500
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007652C
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076558
// size: 0x28
struct POLY_FT4 *PrintOBJ_CHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076584
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800765A8
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800765CC
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLEO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800765F8
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076624
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERM__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076650
// size: 0x28
struct POLY_FT4 *PrintOBJ_BANNERR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007667C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKPILE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800766A8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800766D4
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076700
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007672C
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076758
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKSTICK5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076784
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800767B0
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800767DC
// size: 0x28
struct POLY_FT4 *PrintOBJ_CRUX3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076808
// size: 0x28
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076834
// size: 0x28
struct POLY_FT4 *PrintOBJ_ANGEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076860
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOK2L__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007688C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800768B8
// size: 0x28
struct POLY_FT4 *PrintOBJ_NUDEW2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800768E4
// size: 0x28
struct POLY_FT4 *PrintOBJ_SWITCHSKL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076910
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007693C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076968
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076994
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEM4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769C0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800769EC
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A18
// size: 0x28
struct POLY_FT4 *PrintOBJ_TNUDEW3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A44
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A70
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076A9C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076AC8
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE4__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076AF4
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORTURE5__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B20
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOK2R__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076B4C
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
}


// address: 0x80076BE0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076C70
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076D00
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076D90
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80076E20
// size: 0x28
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E4C
// size: 0x28
struct POLY_FT4 *PrintOBJ_FLAMEHOLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076E78
// size: 0x28
struct POLY_FT4 *PrintOBJ_FLAMELVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076EA4
// size: 0x28
struct POLY_FT4 *PrintOBJ_WATER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076ED0
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKLVR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076EFC
// size: 0x28
struct POLY_FT4 *PrintOBJ_TRAPL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F28
// size: 0x28
struct POLY_FT4 *PrintOBJ_TRAPR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F54
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKSHELF__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076F80
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076FAC
// size: 0x28
struct POLY_FT4 *PrintOBJ_BARREL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80076FD8
// size: 0x28
struct POLY_FT4 *PrintOBJ_BARRELEX__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	register int AnimFrame;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	{
		{
			// register: 16
			register int PhysFrame;
			{
				{
					// register: 16
					// size: 0x28
					register struct POLY_FT4 *ShadFt4;
				}
			}
		}
	}
}


// address: 0x80077130
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x800771FC
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 3
	register int AnimFrame;
}


// address: 0x800772C8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKELBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800772F4
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCASEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077320
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCASER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007734C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077378
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007739C
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLOODFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800773C8
// size: 0x28
struct POLY_FT4 *PrintOBJ_DECAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800773F4
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077420
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007744C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TCHEST3__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077478
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLINDBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800774A4
// size: 0x28
struct POLY_FT4 *PrintOBJ_BLOODBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800774D0
// size: 0x28
struct POLY_FT4 *PrintOBJ_PEDISTAL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800774FC
// size: 0x28
struct POLY_FT4 *PrintOBJ_PURIFYINGFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077528
// size: 0x28
struct POLY_FT4 *PrintOBJ_ARMORSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077554
// size: 0x28
struct POLY_FT4 *PrintOBJ_ARMORSTANDN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077580
// size: 0x28
struct POLY_FT4 *PrintOBJ_GOATSHRINE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800775AC
// size: 0x28
struct POLY_FT4 *PrintOBJ_CAULDRON__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800775D8
// size: 0x28
struct POLY_FT4 *PrintOBJ_MURKYFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077604
// size: 0x28
struct POLY_FT4 *PrintOBJ_TEARFTN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077630
// size: 0x28
struct POLY_FT4 *PrintOBJ_ALTBOY__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007765C
// size: 0x28
struct POLY_FT4 *PrintOBJ_MCIRCLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 19
	register int AnimFrame;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 2
	register int LoadIndex;
	// register: 5
	register int Creature;
	{
		// register: 20
		register int PhysFrame;
		{
			{
				// register: 16
				// size: 0x28
				register struct POLY_FT4 *ShadFt4;
			}
		}
	}
}


// address: 0x800777F0
// size: 0x28
struct POLY_FT4 *PrintOBJ_STORYBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	// register: 16
	register int AnimFrame;
	// register: 17
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 2
	register int LoadIndex;
	// register: 17
	register int Creature;
	// register: 16
	register int PhysFrame;
	{
		{
			// register: 16
			// size: 0x28
			register struct POLY_FT4 *ShadFt4;
		}
	}
}


// address: 0x80077978
// size: 0x28
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007799C
// size: 0x28
struct POLY_FT4 *PrintOBJ_STEELTOME__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800779C8
// size: 0x28
struct POLY_FT4 *PrintOBJ_WARARMOR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x800779F4
// size: 0x28
struct POLY_FT4 *PrintOBJ_WARWEAP__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A20
// size: 0x28
struct POLY_FT4 *PrintOBJ_TBCROSS__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A4C
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPONRACK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077A78
// size: 0x28
struct POLY_FT4 *PrintOBJ_WEAPONRACKN__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077AA4
// size: 0x28
struct POLY_FT4 *PrintOBJ_MUSHPATCH__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077AD0
// size: 0x28
struct POLY_FT4 *PrintOBJ_LAZSTAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077AFC
// size: 0x28
struct POLY_FT4 *PrintOBJ_SLAINHERO__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077B28
// size: 0x28
struct POLY_FT4 *PrintOBJ_SIGNCHEST__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x80077B54
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_80077B54(struct POLY_FT4 *Prim) {
	// address: 0xFFFFFFF0
	// size: 0x28
	auto struct POLY_FT4 *RetPrim;
}


// address: 0x80077B90
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_80077B90(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	// register: 4
	register unsigned long *Dest32;
	// register: 5
	register unsigned long *Source32;
	{
		// register: 3
		register unsigned int f;
	}
}


// address: 0x80077BB8
void PRIM_GetPrim__FPP8POLY_FT4_addr_80077BB8(struct POLY_FT4 **Prim) {
}


// address: 0x80077C34
// size: 0x6C
struct TextDat *GetBlockTexDat__7CBlocks_addr_80077C34(struct CBlocks *this) {
}


// address: 0x80077C40
int GetNumOfFrames__7TextDatii_addr_80077C40(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80077C78
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80077C78(struct TextDat *this, int Creature) {
}


// address: 0x80077CF0
int GetNumOfCreatures__7TextDat_addr_80077CF0(struct TextDat *this) {
}


// address: 0x80077D04
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80077D04(struct TextDat *this, int FrNum) {
}


// address: 0x80077D20
void gamemenu_on__Fv() {
}


// address: 0x80077D28
void gamemenu_off__Fv() {
}


// address: 0x80077D30
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x80077D38
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x80077D40
void ResetPal__Fv() {
}


// address: 0x80077D48
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x80077D78
bool GetFadeState__Fv() {
}


// address: 0x80077D84
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 3
	register unsigned char bright2;
}


// address: 0x80077E88
void SmearScreen__Fv() {
}


// address: 0x80077E90
void DrawFadedScreen__Fv() {
}


// address: 0x80077EE4
void BlackPalette__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x80077FA0
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80078030
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x80078088
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x80078138
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x8007818C
void M_CheckEFlag__Fi(int i) {
}


// address: 0x800781AC
void M_ClearSquares__Fi(int i) {
	// register: 8
	register int mx;
	// register: 10
	register int my;
	// register: 12
	register int mt;
	// register: 11
	register int mt2;
	{
		// register: 5
		register int y;
		{
			{
				// register: 3
				register int x;
			}
		}
	}
}


// address: 0x80078318
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x80078354
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x800783A0
unsigned char M_Ranged__Fi(int i) {
}


// address: 0x800783E8
unsigned char M_Talker__Fi(int i) {
	// register: 4
	register unsigned char _mAi;
}


// address: 0x80078448
void M_Enemy__Fi(int i) {
	// address: 0xFFFFFFA8
	auto int j;
	// register: 19
	register int mi;
	// register: 21
	register int pnum;
	// address: 0xFFFFFFB0
	auto int closest;
	// register: 3
	register int dist;
	// address: 0xFFFFFFB8
	auto int bestdist;
	// register: 20
	register unsigned char sameroom;
	// address: 0xFFFFFFC0
	auto unsigned char bestsameroom;
	// register: 22
	// size: 0x70
	register struct MonsterStruct *Monst;
	// address: 0xFFFFFFC8
	auto unsigned char enemyx;
	// address: 0xFFFFFFD0
	auto unsigned char enemyy;
	// register: 23
	register int _mxi;
	// register: 30
	register int _myi;
	{
		{
			// register: 17
			register int _mx;
			// register: 21
			register int _my;
		}
	}
}


// address: 0x800789DC
void ClearMVars__Fi(int i) {
}


// address: 0x80078A50
void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y) {
	// register: 17
	// size: 0x1C
	register struct CMonster *monst;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *pmonster;
}


// address: 0x80078E9C
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x80078F4C
void M_StartStand__Fii(int i, int md) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 6
	register int _mx;
	// register: 3
	register int _my;
}


// address: 0x80079090
void M_UpdateLeader__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x80079188
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x80079230
unsigned char SpawnSkeleton__Fiii(int ii, int x, int y) {
	// address: 0xFFFFFF98
	// size: 0x24
	auto int monstok[3][3];
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 16
	register int xx;
	// register: 18
	register int yy;
	// register: 4
	register int rs;
	// register: 20
	register unsigned char savail;
}


// address: 0x80079420
void M_StartSpStand__Fii(int i, int md) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80079500
unsigned char PosOkMonst__Fiii(int i, int x, int y) {
	// register: 18
	register unsigned char ret;
	// register: 3
	register int oi;
	// register: 4
	register int mi;
	// register: 19
	register unsigned char fire;
}


// address: 0x8007977C
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x80079A84
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	// register: 5
	register unsigned short rv;
	// register: 4
	register unsigned char f;
}


// address: 0x80079D80
void SetAutomapView__Fii(int x, int y) {
	// register: 16
	register int xx;
	// register: 17
	register int yy;
	// register: 2
	register unsigned short s;
	// register: 3
	register unsigned short d;
}


// address: 0x8007A1D0
int lAddMissile__Fiiici(int sx, int sy, int midir, char micaster, int id) {
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
	// register: 18
	register int mi;
}


// address: 0x8007A3A4
void AddWarpMissile__Fiii(int i, int x, int y) {
	// register: 3
	register int mi;
}


// address: 0x8007A4EC
void SyncPortals__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8007A5F4
void AddInTownPortal__Fi(int i) {
}


// address: 0x8007A62C
void ActivatePortal__FiiiiiUc(int i, int x, int y, int lvl, int lvltype, int sp) {
}


// address: 0x8007A69C
void DeactivatePortal__Fi(int i) {
}


// address: 0x8007A6BC
unsigned char PortalOnLevel__Fi(int i) {
}


// address: 0x8007A6F4
void DelMis__Fii(int mi, int i) {
}


// address: 0x8007A754
void RemovePortalMissile__Fi(int id) {
	// register: 17
	register int i;
	// register: 18
	register int mi;
	// register: 16
	// size: 0x50
	register struct MissileStruct *m;
}


// address: 0x8007A8D0
void SetCurrentPortal__Fi(int p) {
}


// address: 0x8007A8DC
void GetPortalLevel__Fv() {
}


// address: 0x8007AA80
void GetPortalLvlPos__Fv() {
}


// address: 0x8007AB30
// size: 0xB8
struct CompLevelMaps *__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x8007AB5C
void ___13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg) {
}


// address: 0x8007AB84
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8007ABB4
void Dump__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		{
			{
				// register: 16
				register int f;
			}
		}
	}
}


// address: 0x8007AC58
void DumpMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
	{
		{
		}
	}
}


// address: 0x8007ACC0
// size: 0xF1C
struct DLevel *UseMap__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x8007AD94
void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Map) {
}


// address: 0x8007AE04
bool IsMapCached__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x8007AE78
void WriteBackCachedMap__13CompLevelMaps(struct CompLevelMaps *this) {
	// register: 16
	register unsigned char *DecDest;
	// register: 19
	register long hndDec;
	// register: 18
	register int CompSize;
	{
		{
			// register: 16
			register long hndSplit;
		}
	}
}


// address: 0x8007B08C
void DecompToCached__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
	// register: 17
	// size: 0xF1C
	register struct DLevel *DPtr;
	{
		{
			// register: 19
			register unsigned char *SrcPtr;
		}
	}
}


// address: 0x8007B22C
void BuildCompLevelImage__13CompLevelMapsP17CompLevelMemImage(struct CompLevelMaps *this, struct CompLevelMemImage *Dest) {
	// register: 20
	register unsigned char *DestPtr;
	{
		// register: 22
		register int f;
		{
			// register: 16
			register long hnd;
			{
				{
					// register: 17
					register unsigned char *MyData;
				}
			}
		}
	}
}


// address: 0x8007B38C
void InitFromCompLevelImage__13CompLevelMapsP17CompLevelMemImage(struct CompLevelMaps *this, struct CompLevelMemImage *Src) {
	{
		// register: 20
		register int f;
		{
			{
				{
					// register: 17
					register long hnd;
					// register: 16
					register unsigned char *DestData;
					// register: 21
					register int Offset;
				}
			}
		}
	}
}


// address: 0x8007B4CC
int DoComp__13CompLevelMapsPUcT1i(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int SourceSize) {
}


// address: 0x8007B504
int DoDecomp__13CompLevelMapsPUcT1ii(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int DestSize, int SourceSize) {
}


// address: 0x8007B53C
void GO_DoGameOver__Fv() {
}


// address: 0x8007B580
void GameOverTask__FP4TASK(struct TASK *T) {
	// register: 17
	register bool OldPause;
	{
		// register: 16
		register int f;
	}
}


// address: 0x8007B63C
void PrintGameOver__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct Dialog PBack;
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT PRect;
}


// address: 0x8007B718
void SetRGB__6DialogUcUcUc_addr_8007B718(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8007B738
void SetBack__6Dialogi_addr_8007B738(struct Dialog *this, int Type) {
}


// address: 0x8007B740
void SetBorder__6Dialogi_addr_8007B740(struct Dialog *this, int Type) {
}


// address: 0x8007B748
void ___6Dialog_addr_8007B748(struct Dialog *this, int __in_chrg) {
}


// address: 0x8007B770
// size: 0x10
struct Dialog *__6Dialog_addr_8007B770(struct Dialog *this) {
}


// address: 0x8007B7CC
void VER_InitVersion__Fv() {
	// address: 0xFFFFFF80
	// size: 0x78
	auto char VerString[120];
}


// address: 0x8007B810
char *VER_GetVerString__Fv() {
}


// address: 0x8007B820
int CharPair2Num__FPc(char *Str) {
}


// address: 0x8001E698
void TICK_InitModule();

// address: 0x8001E6B8
void TICK_Set(unsigned long Val);

// address: 0x8001E6C8
unsigned long TICK_Get();

// address: 0x8001E6D8
void TICK_Update();

// address: 0x8001E6F8
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x8001E724
char *TICK_GetDateString();

// address: 0x8001E734
char *TICK_GetTimeString();

// address: 0x8001E744
unsigned char GU_InitModule();

// address: 0x8001E770
void GU_SetRndSeed(unsigned long *Tab) {
	// register: 5
	register int f;
}


// address: 0x8001E7A0
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x8001E830
long GU_GetSRnd();

// address: 0x8001E850
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x8001E88C
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

// address: 0x8001E8B0
void main();

// address: 0x8001E900
unsigned char DBG_OpenModule();

// address: 0x8001E908
void DBG_PollHost();

// address: 0x8001E910
void DBG_Halt();

// address: 0x8001E918
void DBG_SendMessage(char *e);

// address: 0x8001E930
void DBG_SetMessageHandler(void (*Func)());

// address: 0x8001E940
void DBG_Error(char *Text, char *File, int Line);

// address: 0x8001E96C
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x8001E97C
void SendPsyqString(char *e);

// address: 0x8001E984
void DBG_SetPollRoutine(void (*Func)());

// address: 0x8001E994
unsigned long GTIMSYS_GetTimer();

// address: 0x8001E9B8
void GTIMSYS_ResetTimer();

// address: 0x8001E9DC
unsigned long GTIMSYS_InitTimer() {
	// register: 17
	register int f;
	// register: 16
	register unsigned long Total;
}


// address: 0x8001EC10
void DoEpi(struct TASK *T);

// address: 0x8001EC60
void DoPro(struct TASK *T);

// address: 0x8001ECB0
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x8001ED24
// size: 0x5C
struct TASK *TSK_AddTask(unsigned long Id, void (*Main)(), int StackSize, int DataSize) {
	// register: 16
	// size: 0x5C
	register struct TASK *RetTask;
	// register: 17
	register long hndTask;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct GAL_STRUCT G[4];
}


// address: 0x8001EF0C
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8001F0CC
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x8001F1A8
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x8001F230
void TSK_Die();

// address: 0x8001F25C
void TSK_Kill(struct TASK *T);

// address: 0x8001F2AC
// size: 0x5C
struct TASK *TSK_GetFirstActive();

// address: 0x8001F2BC
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x8001F338
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8001F380
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x8001F3C4
// size: 0x5C
struct TASK *TSK_GetCurrentTask();

// address: 0x8001F3D4
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x8001F3EC
// size: 0x5C
struct TASK *TSK_Exist(struct TASK *T, unsigned long Id, unsigned long Mask) {
	// register: 3
	// size: 0x5C
	register struct TASK *ptrTask;
	// register: 7
	// size: 0x5C
	register struct TASK *RetTask;
}


// address: 0x8001F444
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F45C
void TSK_ClearExecFilter();

// address: 0x8001F480
int TSK_KillTasks(struct TASK *CallingT, unsigned long Id, unsigned long Mask) {
	// register: 17
	register int TasksKilled;
	// register: 4
	// size: 0x5C
	register struct TASK *T;
	// register: 18
	register unsigned char WasCurrentTaskKilled;
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8001F580
void TSK_IterateTasks(unsigned long Id, unsigned long Mask, void (*CallBack)()) {
	// register: 4
	// size: 0x5C
	register struct TASK *T;
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8001F5F8
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x8001F60C
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x8001F620
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x8001F634
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x8001F648
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x8001F65C
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x8001F670
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F6BC
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F6DC
void LoTskKill(struct TASK *T) {
}


// address: 0x8001F74C
void ExecuteTask(struct TASK *T);

// address: 0x8001F79C
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7B4
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7CC
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7E4
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7FC
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F814
void TSK_ClearEpiProFilter();

// address: 0x8001F848
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x8001F858
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x8001F870
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x8001F898
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x8001F8C4
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


// address: 0x8001F900
// size: 0x8
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x8001F910
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x8001F94C
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F95C
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F974
unsigned char GSYS_InitMachine();

// address: 0x8001F9C8
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x8001F9FC
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


// address: 0x8001FA78
void GAL_SetErrorChecking(unsigned char OnOff);

// address: 0x8001FA88
long GAL_SplitBlock(long CurBlock, unsigned long Size) {
	// register: 19
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *MemHdr;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *SplitBlock;
}


// address: 0x8001FBBC
void GAL_InitModule() {
	// register: 17
	register int f;
}


// address: 0x8001FC74
unsigned char GAL_AddMemType(struct MEM_INIT_INFO *M) {
	// register: 4
	// size: 0x28
	register struct MEM_INIT_INFO *P;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *FreeMemHdr;
	// register: 5
	register unsigned long Addr1;
	// register: 3
	register unsigned long Addr2;
}


// address: 0x8001FD94
long GAL_Alloc(unsigned long Size, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *Block;
	// register: 18
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 19
	register unsigned long FullSize;
	// register: 20
	// size: 0x20
	register struct MEM_HDR *(*FRoute)();
	// register: 23
	register unsigned char High;
	{
	}
}


// address: 0x8001FF2C
void *GAL_Lock(long Handle) {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x8001FF8C
unsigned char GAL_Unlock(long Handle) {
	// register: 4
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x80020008
unsigned char GAL_Free(long Handle) {
	// register: 16
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *MemHdr;
}


// address: 0x800200A8
unsigned long GAL_GetFreeMem(unsigned long Type) {
	// register: 16
	register unsigned long FreeMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *Block;
	}
}


// address: 0x8002011C
unsigned long GAL_GetUsedMem(unsigned long Type) {
	// register: 16
	register unsigned long FreeMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *Block;
	}
}


// address: 0x80020190
unsigned long GAL_LargestFreeBlock(unsigned long Type) {
	// register: 5
	register unsigned long Largest;
	// register: 3
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *MI;
}


// address: 0x8002020C
void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x8002022C
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80020278
unsigned char IsActiveValidHandle(long Handle) {
}


// address: 0x800202A8
void *AlignPtr(void *P, unsigned long Align) {
	// register: 4
	register unsigned long Addr;
	// register: 2
	register unsigned long Temp;
}


// address: 0x800202D8
unsigned long AlignSize(unsigned long Size, unsigned long Align);

// address: 0x80020308
// size: 0x20
struct MEM_HDR *FindClosestSizedBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
}


// address: 0x80020360
// size: 0x20
struct MEM_HDR *FindHighestMemBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 7
	register void *Highest;
}


// address: 0x800203C8
// size: 0x20
struct MEM_HDR *FindLowestMemBlock(struct MEM_HDR *Head, unsigned long Size) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *Closest;
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 7
	register unsigned long Lowest;
}


// address: 0x80020430
// size: 0x28
struct MEM_INIT_INFO *GetMemInitInfoBlockFromType(unsigned long Type) {
	// register: 3
	// size: 0x28
	register struct MEM_INIT_INFO *P;
}


// address: 0x8002046C
void MergeToEmptyList(struct MEM_INIT_INFO *MI, struct MEM_HDR *M) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 18
	// size: 0x20
	register struct MEM_HDR *NextIndex;
	// register: 19
	register void *Start;
	// register: 21
	register void *End;
	{
		// register: 2
		register void *ThisStart;
		// register: 4
		register void *ThisEnd;
	}
}


// address: 0x80020540
long GAL_AllocAt(unsigned long Size, void *Addr, unsigned long Type, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *Block;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x8002061C
long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *SplitBlock;
	// register: 20
	register unsigned long PhysSize;
}


// address: 0x800207B4
// size: 0x20
struct MEM_HDR *FindBlockInTheseBounds(struct MEM_HDR *Head, void *Addr, unsigned long Size) {
	// register: 4
	// size: 0x20
	register struct MEM_HDR *Index;
	// register: 7
	register unsigned char Done;
	// register: 3
	register unsigned long ThisStart;
	// register: 2
	register unsigned long ThisEnd;
	// register: 5
	register unsigned long Start;
	// register: 6
	register unsigned long End;
}


// address: 0x80020820
// size: 0x20
struct MEM_HDR *GetFreeMemHdrBlock() {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *RetBlock;
}


// address: 0x800208A8
void ReleaseMemHdrBlock(struct MEM_HDR *Index);

// address: 0x800208E8
void GAL_IterateEmptyMem(unsigned long MemType, void (*Func)()) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *Block;
	}
}


// address: 0x8002096C
void GAL_IterateUsedMem(unsigned long MemType, void (*Func)()) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *Block;
	}
}


// address: 0x80020A08
unsigned char GAL_SetMemName(long Hnd, char *Text);

// address: 0x80020A70
unsigned long GAL_TotalMem(unsigned long Type) {
	// register: 16
	register unsigned long TotalMem;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020AC4
void *GAL_MemBase(unsigned long Type) {
	// register: 16
	register void *Ret;
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80020B18
unsigned char GAL_DefragMem(unsigned long type) {
}


// address: 0x80020B9C
unsigned char GSetError(enum GAL_ERROR_CODE Err);

// address: 0x80020BF8
unsigned char GAL_CheckMem(unsigned long Type) {
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *MemHdr;
	// register: 18
	register unsigned long TotalMem;
}


// address: 0x80020CF4
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CheckHdr;
}


// address: 0x80020DA0
unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2) {
	// register: 5
	register unsigned long Addr1;
	// register: 6
	register unsigned long Addr2;
}


// address: 0x80020DF8
char *GAL_GetErrorText(enum GAL_ERROR_CODE Err);

// address: 0x80020E28
// size: 0x4
enum GAL_ERROR_CODE GAL_GetLastErrorCode();

// address: 0x80020E38
char *GAL_GetLastErrorText();

// address: 0x80020E60
int GAL_HowManyEmptyRegions(unsigned long Type) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *m;
	// register: 3
	register int Count;
	{
		// register: 2
		// size: 0x20
		register struct MEM_HDR *mh;
	}
}


// address: 0x80020EC8
int GAL_HowManyUsedRegions(unsigned long Type) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *m;
	// register: 3
	register int Count;
	{
		// register: 2
		// size: 0x20
		register struct MEM_HDR *mh;
	}
}


// address: 0x80020F30
void GAL_SetTimeStamp(int Time);

// address: 0x80020F40
void GAL_IncTimeStamp();

// address: 0x80020F60
int GAL_GetTimeStamp();

// address: 0x80020F70
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *Mi;
}


// address: 0x80020FC0
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}


// address: 0x80021010
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	// register: 17
	register unsigned int TotalMem;
	// register: 18
	register int f;
}


// address: 0x800210BC
long GAL_GetSize(long hnd) {
}


// address: 0x80021110
unsigned char GazDefragMem(unsigned long MemType) {
	// address: 0xFFFFFFE0
	// size: 0x20
	auto struct MEM_HDR *LockedBlocks;
	// register: 17
	// size: 0x28
	register struct MEM_INIT_INFO *M;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct MEM_REG Reg;
	{
		// register: 5
		// size: 0x20
		register struct MEM_HDR *NewEmptyBlock;
		// address: 0xFFFFFFE4
		// size: 0x20
		auto struct MEM_HDR *ListOfBlocksInRegion;
		// register: 18
		register unsigned long ShuffledSize;
		// register: 16
		register int GapSize;
	}
}


// address: 0x80021278
void PutBlocksInRegionIntoList(struct MEM_REG *Reg, struct MEM_HDR **ToList, struct MEM_HDR **FromList) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *ThisBlock;
	{
		// register: 17
		// size: 0x20
		register struct MEM_HDR *NextBlock;
		// address: 0xFFFFFFE0
		// size: 0x8
		auto struct MEM_REG MemReg;
	}
}


// address: 0x8002131C
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2);

// address: 0x80021350
void DeleteEmptyBlocks(struct MEM_INIT_INFO *M) {
	{
		// register: 16
		// size: 0x20
		register struct MEM_HDR *ThisBlock;
	}
}


// address: 0x800213BC
unsigned char GetRegion(struct MEM_REG *Reg, struct MEM_HDR *LockedBlocks, struct MEM_INIT_INFO *M) {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *FirstBlock;
	// register: 2
	// size: 0x20
	register struct MEM_HDR *SecondBlock;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct MEM_REG NewReg;
}


// address: 0x800214B4
// size: 0x20
struct MEM_HDR *FindNextBlock(void *Addr, struct MEM_HDR *Blocks) {
	{
		// register: 2
		register unsigned long BlockAddr;
	}
}


// address: 0x800214F0
unsigned long ShuffleBlocks(struct MEM_HDR *Blocks, struct MEM_REG *Reg, struct MEM_INIT_INFO *M) {
	// register: 18
	register unsigned long NewSize;
	// register: 17
	register void *MemBase;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *ThisBlock;
}


// address: 0x80021580
void PutAllLockedBlocksOntoList(struct MEM_HDR **ToHead, struct MEM_HDR **FromHead) {
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CurHdr;
	{
		// register: 17
		// size: 0x20
		register struct MEM_HDR *NextCurHdr;
	}
}


// address: 0x800215FC
void SortMemHdrListByAddr(struct MEM_HDR **Head) {
	// register: 7
	register unsigned char DidASwap;
	// register: 5
	// size: 0x20
	register struct MEM_HDR *CurHdr;
	// register: 6
	// size: 0x20
	register struct MEM_HDR *NextHdr;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *OldPrev;
	}
}


// address: 0x800216B0
void GraftMemHdrList(struct MEM_HDR **ToList, struct MEM_HDR **FromList) {
	// register: 6
	// size: 0x20
	register struct MEM_HDR *OldFirst;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *LastHdr;
	}
}


// address: 0x8002170C
void GAL_MemDump(unsigned long Type);

// address: 0x80021780
void GAL_SetVerbosity(enum GAL_VERB_LEV G);

// address: 0x80021790
int CountFreeBlocks() {
	// register: 3
	// size: 0x20
	register struct MEM_HDR *RetBlock;
	// register: 2
	register int Count;
}


// address: 0x800217BC
void SetBlockName(struct MEM_HDR *MemHdr, char *NewName) {
	// register: 6
	register int IndexSoFar;
}


// address: 0x80021804
int GAL_GetNumFreeHeaders();

// address: 0x80021814
unsigned long GAL_GetLastTypeAlloced();

// address: 0x80021824
void (*GAL_SetAllocFilter(void (*NewFilter)()))() {
	// register: 2
	register void (*OldFilter)();
}


// address: 0x8002183C
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	// register: 2
	// size: 0x28
	register struct MEM_INIT_INFO *M;
}


// address: 0x80021890
unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x800218A0
void SortMemHdrList(struct MEM_HDR **Head, unsigned char (*CompFunc)()) {
	// register: 18
	register unsigned char DidASwap;
	// register: 16
	// size: 0x20
	register struct MEM_HDR *CurHdr;
	// register: 17
	// size: 0x20
	register struct MEM_HDR *NextHdr;
	{
		// register: 3
		// size: 0x20
		register struct MEM_HDR *OldPrev;
	}
}


// address: 0x80023C5C
int vsprintf(char *str, char *fmt, char *ap) {
	// address: 0xFFFFFFD8
	// size: 0x1C
	auto struct FILE f;
}


// address: 0x80023CA8
int _doprnt(char *fmt0, char *argp, struct FILE *fp) {
	// register: 22
	register char *fmt;
	// register: 4
	register int ch;
	// address: 0xFFFFFFA8
	auto int cnt;
	// register: 16
	register int n;
	// register: 17
	register char *t;
	// register: 3
	register unsigned long _ulong;
	// register: 5
	register int base;
	// address: 0xFFFFFFB0
	auto int dprec;
	// register: 30
	register int fieldsz;
	// register: 19
	register int flags;
	// address: 0xFFFFFFB8
	auto int fpprec;
	// register: 20
	register int prec;
	// register: 20
	register int realsz;
	// register: 23
	register int size;
	// address: 0xFFFFFFC0
	auto int width;
	// register: 6
	register char sign;
	// address: 0xFFFFFFC8
	auto char *digs;
	// address: 0x80023DFC
	bool rflag;
	// address: 0x80024164
	bool nosign;
	// address: 0x80024210
	bool pforw;
	{
		// register: 2
		register char c;
		{
			{
				// register: 2
				register char *p;
			}
		}
	}
}



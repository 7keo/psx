#include "types.h"

// address: 0x8011AA94
extern int NumOfMonsterListLevels;

// address: 0x800B7558
// size: 0x80
extern struct MonstLevel AllLevels[16];

// address: 0x8011A780
// size: 0x4
static unsigned char NumsLEV1M1A[4];

// address: 0x8011A784
// size: 0x4
static unsigned char NumsLEV1M1B[4];

// address: 0x8011A788
// size: 0x5
static unsigned char NumsLEV1M1C[5];

// address: 0x8011A790
// size: 0x4
static unsigned char NumsLEV2M2A[4];

// address: 0x8011A794
// size: 0x4
static unsigned char NumsLEV2M2B[4];

// address: 0x8011A798
// size: 0x3
static unsigned char NumsLEV2M2C[3];

// address: 0x8011A79C
// size: 0x4
static unsigned char NumsLEV2M2D[4];

// address: 0x8011A7A0
// size: 0x4
static unsigned char NumsLEV2M2QA[4];

// address: 0x8011A7A4
// size: 0x4
static unsigned char NumsLEV2M2QB[4];

// address: 0x8011A7A8
// size: 0x4
static unsigned char NumsLEV3M3A[4];

// address: 0x8011A7AC
// size: 0x4
static unsigned char NumsLEV3M3B[4];

// address: 0x8011A7B0
// size: 0x4
static unsigned char NumsLEV3M3C[4];

// address: 0x8011A7B4
// size: 0x4
static unsigned char NumsLEV3M3QA[4];

// address: 0x8011A7B8
// size: 0x4
static unsigned char NumsLEV4M4A[4];

// address: 0x8011A7BC
// size: 0x4
static unsigned char NumsLEV4M4B[4];

// address: 0x8011A7C0
// size: 0x4
static unsigned char NumsLEV4M4C[4];

// address: 0x8011A7C4
// size: 0x4
static unsigned char NumsLEV4M4D[4];

// address: 0x8011A7C8
// size: 0x4
static unsigned char NumsLEV4M4QA[4];

// address: 0x8011A7CC
// size: 0x5
static unsigned char NumsLEV4M4QB[5];

// address: 0x8011A7D4
// size: 0x5
static unsigned char NumsLEV4M4QC[5];

// address: 0x8011A7DC
// size: 0x4
static unsigned char NumsLEV5M5A[4];

// address: 0x8011A7E0
// size: 0x4
static unsigned char NumsLEV5M5B[4];

// address: 0x8011A7E4
// size: 0x4
static unsigned char NumsLEV5M5C[4];

// address: 0x8011A7E8
// size: 0x4
static unsigned char NumsLEV5M5D[4];

// address: 0x8011A7EC
// size: 0x4
static unsigned char NumsLEV5M5E[4];

// address: 0x8011A7F0
// size: 0x3
static unsigned char NumsLEV5M5F[3];

// address: 0x8011A7F4
// size: 0x4
static unsigned char NumsLEV5M5QA[4];

// address: 0x8011A7F8
// size: 0x5
static unsigned char NumsLEV6M6A[5];

// address: 0x8011A800
// size: 0x3
static unsigned char NumsLEV6M6B[3];

// address: 0x8011A804
// size: 0x4
static unsigned char NumsLEV6M6C[4];

// address: 0x8011A808
// size: 0x3
static unsigned char NumsLEV6M6D[3];

// address: 0x8011A80C
// size: 0x3
static unsigned char NumsLEV6M6E[3];

// address: 0x8011A810
// size: 0x3
static unsigned char NumsLEV6M6QA[3];

// address: 0x8011A814
// size: 0x4
static unsigned char NumsLEV7M7A[4];

// address: 0x8011A818
// size: 0x4
static unsigned char NumsLEV7M7B[4];

// address: 0x8011A81C
// size: 0x4
static unsigned char NumsLEV7M7C[4];

// address: 0x8011A820
// size: 0x3
static unsigned char NumsLEV7M7D[3];

// address: 0x8011A824
// size: 0x3
static unsigned char NumsLEV7M7E[3];

// address: 0x8011A828
// size: 0x2
static unsigned char NumsLEV8M8A[2];

// address: 0x8011A82C
// size: 0x4
static unsigned char NumsLEV8M8B[4];

// address: 0x8011A830
// size: 0x3
static unsigned char NumsLEV8M8C[3];

// address: 0x8011A834
// size: 0x2
static unsigned char NumsLEV8M8D[2];

// address: 0x8011A838
// size: 0x2
static unsigned char NumsLEV8M8QA[2];

// address: 0x8011A83C
// size: 0x4
static unsigned char NumsLEV9M9A[4];

// address: 0x8011A840
// size: 0x3
static unsigned char NumsLEV9M9B[3];

// address: 0x8011A844
// size: 0x2
static unsigned char NumsLEV9M9C[2];

// address: 0x8011A848
// size: 0x2
static unsigned char NumsLEV9M9D[2];

// address: 0x8011A84C
// size: 0x3
static unsigned char NumsLEV10M10A[3];

// address: 0x8011A850
// size: 0x3
static unsigned char NumsLEV10M10B[3];

// address: 0x8011A854
// size: 0x2
static unsigned char NumsLEV10M10C[2];

// address: 0x8011A858
// size: 0x2
static unsigned char NumsLEV10M10D[2];

// address: 0x8011A85C
// size: 0x3
static unsigned char NumsLEV10M10QA[3];

// address: 0x8011A860
// size: 0x3
static unsigned char NumsLEV11M11A[3];

// address: 0x8011A864
// size: 0x3
static unsigned char NumsLEV11M11B[3];

// address: 0x8011A868
// size: 0x3
static unsigned char NumsLEV11M11C[3];

// address: 0x8011A86C
// size: 0x2
static unsigned char NumsLEV11M11D[2];

// address: 0x8011A870
// size: 0x2
static unsigned char NumsLEV11M11E[2];

// address: 0x8011A874
// size: 0x3
static unsigned char NumsLEV12M12A[3];

// address: 0x8011A878
// size: 0x3
static unsigned char NumsLEV12M12B[3];

// address: 0x8011A87C
// size: 0x3
static unsigned char NumsLEV12M12C[3];

// address: 0x8011A880
// size: 0x3
static unsigned char NumsLEV12M12D[3];

// address: 0x8011A884
// size: 0x3
static unsigned char NumsLEV13M13A[3];

// address: 0x8011A888
// size: 0x2
static unsigned char NumsLEV13M13B[2];

// address: 0x8011A88C
// size: 0x2
static unsigned char NumsLEV13M13C[2];

// address: 0x8011A890
// size: 0x3
static unsigned char NumsLEV13M13D[3];

// address: 0x8011A894
// size: 0x3
static unsigned char NumsLEV13M13QB[3];

// address: 0x8011A898
// size: 0x3
static unsigned char NumsLEV14M14A[3];

// address: 0x8011A89C
// size: 0x3
static unsigned char NumsLEV14M14B[3];

// address: 0x8011A8A0
// size: 0x2
static unsigned char NumsLEV14M14C[2];

// address: 0x8011A8A4
// size: 0x2
static unsigned char NumsLEV14M14D[2];

// address: 0x8011A8A8
// size: 0x2
static unsigned char NumsLEV14M14E[2];

// address: 0x8011A8AC
// size: 0x3
static unsigned char NumsLEV14M14QB[3];

// address: 0x8011A8B0
// size: 0x2
static unsigned char NumsLEV15M15A[2];

// address: 0x8011A8B4
// size: 0x3
static unsigned char NumsLEV15M15B[3];

// address: 0x8011A8B8
// size: 0x2
static unsigned char NumsLEV15M15C[2];

// address: 0x8011A8BC
// size: 0x2
static unsigned char NumsLEV15M15QA[2];

// address: 0x8011A8C0
// size: 0x3
static unsigned char NumsLEV16M16D[3];

// address: 0x800B7088
// size: 0x30
static struct MonstList ChoiceListLEV1[3];

// address: 0x800B70B8
// size: 0x60
static struct MonstList ChoiceListLEV2[6];

// address: 0x800B7118
// size: 0x40
static struct MonstList ChoiceListLEV3[4];

// address: 0x800B7158
// size: 0x70
static struct MonstList ChoiceListLEV4[7];

// address: 0x800B71C8
// size: 0x70
static struct MonstList ChoiceListLEV5[7];

// address: 0x800B7238
// size: 0x60
static struct MonstList ChoiceListLEV6[6];

// address: 0x800B7298
// size: 0x50
static struct MonstList ChoiceListLEV7[5];

// address: 0x800B72E8
// size: 0x50
static struct MonstList ChoiceListLEV8[5];

// address: 0x800B7338
// size: 0x40
static struct MonstList ChoiceListLEV9[4];

// address: 0x800B7378
// size: 0x50
static struct MonstList ChoiceListLEV10[5];

// address: 0x800B73C8
// size: 0x50
static struct MonstList ChoiceListLEV11[5];

// address: 0x800B7418
// size: 0x40
static struct MonstList ChoiceListLEV12[4];

// address: 0x800B7458
// size: 0x50
static struct MonstList ChoiceListLEV13[5];

// address: 0x800B74A8
// size: 0x60
static struct MonstList ChoiceListLEV14[6];

// address: 0x800B7508
// size: 0x40
static struct MonstList ChoiceListLEV15[4];

// address: 0x800B7548
// size: 0x10
static struct MonstList ChoiceListLEV16[1];

// address: 0x8011C604
// size: 0x5C
static struct TASK *GameTaskPtr;

// address: 0x800B75D8
// size: 0x348
extern struct LOAD_IMAGE_ARGS AllArgs[30];

// address: 0x8011AAA4
extern int ArgsSoFar;

// address: 0x8011AAB4
extern unsigned long *ThisOt;

// address: 0x8011AAB8
// size: 0x28
extern struct POLY_FT4 *ThisPrimAddr;

// address: 0x8011C608
static long hndPrimBuffers;

// address: 0x8011C60C
// size: 0x1C
static struct PRIM_BUFFER *PrimBuffers;

// address: 0x8011C610
static unsigned char BufferDepth;

// address: 0x8011C611
static unsigned char WorkRamId;

// address: 0x8011C612
static unsigned char ScrNum;

// address: 0x8011C614
// size: 0x70
static struct SCREEN_ENV *Screens;

// address: 0x8011C618
// size: 0x1C
static struct PRIM_BUFFER *PbToClear;

// address: 0x8011C61C
static unsigned char BufferNum;

// address: 0x8011AABC
// size: 0x28
extern struct POLY_FT4 *AddrToAvoid;

// address: 0x8011C61D
static unsigned char LastBuffer;

// address: 0x8011C620
// size: 0x14
static struct DISPENV *DispEnvToPut;

// address: 0x8011C624
static int ThisOtSize;

// address: 0x8011AAC0
// size: 0x8
static struct RECT ScrRect;

// address: 0x8011C628
static int VidWait;

// address: 0x8011CAE0
// size: 0xE0
static struct SCREEN_ENV screen[2];

// address: 0x8011C62C
static void (*VbFunc)();

// address: 0x8011C630
static unsigned long VidTick;

// address: 0x8011C634
static int VXOff;

// address: 0x8011C638
static int VYOff;

// address: 0x8011AAC8
static bool DBufferFlag;

// address: 0x8011AAD8
// size: 0x20
extern struct LNK_OPTS *Gaz;

// address: 0x8011AADC
extern int LastFmem;

// address: 0x8011AACC
extern unsigned int GSYS_MemStart;

// address: 0x8011AAD0
extern unsigned int GSYS_MemEnd;

// address: 0x800B7920
// size: 0x28
static struct MEM_INIT_INFO PsxMem;

// address: 0x800B7948
// size: 0x28
static struct MEM_INIT_INFO PsxFastMem;

// address: 0x8011AAD4
extern int LowestFmem;

// address: 0x8011AAEC
extern int FileSYS;

// address: 0x8011C63C
// size: 0x14
static struct FileIO *FileSystem;

// address: 0x8011C640
// size: 0x14
static struct FileIO *OverlayFileSystem;

// address: 0x8011AAFC
extern unsigned long LastAddr;

// address: 0x8011AB12
extern short DavesPad;

// address: 0x8011AB14
extern short DavesPadDeb;

// address: 0x8011AB18
// size: 0x8
extern long PDosh[2];

// address: 0x8011AB0C
extern int DaveDebCount;

// address: 0x800B7970
// size: 0x32
extern char _6FileIO_FileToLoad[50];

// address: 0x800B79A4
// size: 0x10
extern char STREAM_DIR[16];

// address: 0x800B79B4
// size: 0x10
extern char STREAM_BIN[16];

// address: 0x800B79C4
// size: 0x190
extern unsigned char EAC_DirectoryCache[400];

// address: 0x8011AB60
extern unsigned long BL_NoLumpFiles;

// address: 0x8011AB64
extern unsigned long BL_NoStreamFiles;

// address: 0x8011AB68
// size: 0x14
extern struct STRHDR *LFileTab;

// address: 0x8011AB6C
// size: 0x14
extern struct STRHDR *SFileTab;

// address: 0x8011AB70
extern unsigned char FileLoaded;

// address: 0x8011AB71
extern unsigned char NoQuedAsyncs;

// address: 0x8011AB72
extern unsigned char CurrAsync;

// address: 0x8011AB94
extern int NoTAllocs;

// address: 0x800B7B54
// size: 0x1E0
extern struct MEMSTRUCT MemBlock[60];

// address: 0x8011C644
static bool CanPause;

// address: 0x8011C648
static bool Paused;

// address: 0x8011ABA4
// size: 0x5C
extern struct TASK *TPtr;

// address: 0x8011CBC0
// size: 0x10
static struct Dialog PBack;

// address: 0x800B7F0C
// size: 0x22
extern unsigned char RawPadData0[34];

// address: 0x800B7F30
// size: 0x22
extern unsigned char RawPadData1[34];

// address: 0x800B7F54
// size: 0x384
extern unsigned char demo_buffer[900];

// address: 0x8011ABB4
extern int demo_pad_time;

// address: 0x8011ABB8
extern int demo_pad_count;

// address: 0x800B7D34
// size: 0xEC
extern struct CPad Pad0;

// address: 0x800B7E20
// size: 0xEC
extern struct CPad Pad1;

// address: 0x8011ABBC
extern unsigned long demo_finish;

// address: 0x8011ABC0
extern int demo_start;

// address: 0x8011ABC4
extern int cac_pad;

// address: 0x8011ABE4
// size: 0x28
extern struct POLY_FT4 *CharFt4;

// address: 0x8011ABE8
extern int CharFrm;

// address: 0x8011ABD1
extern unsigned char WHITER;

// address: 0x8011ABD2
extern unsigned char WHITEG;

// address: 0x8011ABD3
extern unsigned char WHITEB;

// address: 0x8011ABD4
extern unsigned char BLUER;

// address: 0x8011ABD5
extern unsigned char BLUEG;

// address: 0x8011ABD6
extern unsigned char BLUEB;

// address: 0x8011ABD7
extern unsigned char REDR;

// address: 0x8011ABD8
extern unsigned char REDG;

// address: 0x8011ABD9
extern unsigned char REDB;

// address: 0x8011ABDA
extern unsigned char GOLDR;

// address: 0x8011ABDB
extern unsigned char GOLDG;

// address: 0x8011ABDC
extern unsigned char GOLDB;

// address: 0x800B82D8
// size: 0x21C
extern struct CFont MediumFont;

// address: 0x800B84F4
// size: 0x21C
extern struct CFont LargeFont;

// address: 0x8011ABE0
extern bool buttoncol;

// address: 0x800B8710
// size: 0x1C8
extern struct FontItem LFontTab[114];

// address: 0x800B88D8
// size: 0x10
extern struct FontTab LFont;

// address: 0x800B88E8
// size: 0x1D8
extern struct FontItem MFontTab[118];

// address: 0x800B8AC0
// size: 0x10
extern struct FontTab MFont;

// address: 0x8011ABFD
extern unsigned char DialogRed;

// address: 0x8011ABFE
extern unsigned char DialogGreen;

// address: 0x8011ABFF
extern unsigned char DialogBlue;

// address: 0x8011AC00
extern unsigned char DialogTRed;

// address: 0x8011AC01
extern unsigned char DialogTGreen;

// address: 0x8011AC02
extern unsigned char DialogTBlue;

// address: 0x8011AC04
// size: 0x70
extern struct TextDat *DialogTData;

// address: 0x8011AC08
extern int DialogBackGfx;

// address: 0x8011AC0C
extern int DialogBackW;

// address: 0x8011AC10
extern int DialogBackH;

// address: 0x8011AC14
extern int DialogBorderGfx;

// address: 0x8011AC18
extern int DialogBorderTLW;

// address: 0x8011AC1C
extern int DialogBorderTLH;

// address: 0x8011AC20
extern int DialogBorderTRW;

// address: 0x8011AC24
extern int DialogBorderTRH;

// address: 0x8011AC28
extern int DialogBorderBLW;

// address: 0x8011AC2C
extern int DialogBorderBLH;

// address: 0x8011AC30
extern int DialogBorderBRW;

// address: 0x8011AC34
extern int DialogBorderBRH;

// address: 0x8011AC38
extern int DialogBorderTW;

// address: 0x8011AC3C
extern int DialogBorderTH;

// address: 0x8011AC40
extern int DialogBorderBW;

// address: 0x8011AC44
extern int DialogBorderBH;

// address: 0x8011AC48
extern int DialogBorderLW;

// address: 0x8011AC4C
extern int DialogBorderLH;

// address: 0x8011AC50
extern int DialogBorderRW;

// address: 0x8011AC54
extern int DialogBorderRH;

// address: 0x8011AC58
extern int DialogBevelGfx;

// address: 0x8011AC5C
extern int DialogBevelCW;

// address: 0x8011AC60
extern int DialogBevelCH;

// address: 0x8011AC64
extern int DialogBevelLRW;

// address: 0x8011AC68
extern int DialogBevelLRH;

// address: 0x8011AC6C
extern int DialogBevelUDW;

// address: 0x8011AC70
extern int DialogBevelUDH;

// address: 0x8011AC74
extern int MY_DialogOTpos;

// address: 0x8011C64C
static unsigned char DialogGBack;

// address: 0x8011C64D
static char GShadeX;

// address: 0x8011C64E
static char GShadeY;

// address: 0x8011C654
// size: 0x8
static unsigned char RandBTab[8];

// address: 0x800B8B10
// size: 0x70
extern int Cxy[28];

// address: 0x8011ABF7
extern unsigned char BORDERR;

// address: 0x8011ABF8
extern unsigned char BORDERG;

// address: 0x8011ABF9
extern unsigned char BORDERB;

// address: 0x8011ABFA
extern unsigned char BACKR;

// address: 0x8011ABFB
extern unsigned char BACKG;

// address: 0x8011ABFC
extern unsigned char BACKB;

// address: 0x800B8AD0
// size: 0x40
static char GShadeTab[64];

// address: 0x8011ABF5
static char GShadePX;

// address: 0x8011ABF6
static char GShadePY;

// address: 0x8011AC81
extern unsigned char PlayDemoFlag;

// address: 0x8011CBE0
// size: 0xC
static int dx[3];

// address: 0x8011CBF0
// size: 0xC
static int dy[3];

// address: 0x8011C65C
static bool InfraFlag;

// address: 0x8011C660
static int blockr;

// address: 0x8011C664
static int blockg;

// address: 0x8011C668
static int blockb;

// address: 0x8011ACE0
extern int OldSp;

// address: 0x8011ACE4
extern int ax;

// address: 0x8011ACE8
extern int ay;

// address: 0x8011ACAC
extern int PosAdj;

// address: 0x8011AC8D
extern unsigned char P1ObjSelCount;

// address: 0x8011AC8E
extern unsigned char P2ObjSelCount;

// address: 0x8011AC8F
extern unsigned char P12ObjSelCount;

// address: 0x8011AC90
extern unsigned char P1ItemSelCount;

// address: 0x8011AC91
extern unsigned char P2ItemSelCount;

// address: 0x8011AC92
extern unsigned char P12ItemSelCount;

// address: 0x8011AC93
extern unsigned char P1MonstSelCount;

// address: 0x8011AC94
extern unsigned char P2MonstSelCount;

// address: 0x8011AC95
extern unsigned char P12MonstSelCount;

// address: 0x8011AC96
static unsigned short P1ObjSelCol;

// address: 0x8011AC98
static unsigned short P2ObjSelCol;

// address: 0x8011AC9A
static unsigned short P12ObjSelCol;

// address: 0x8011AC9C
static unsigned short P1ItemSelCol;

// address: 0x8011AC9E
static unsigned short P2ItemSelCol;

// address: 0x8011ACA0
static unsigned short P12ItemSelCol;

// address: 0x8011ACA2
static unsigned short P1MonstSelCol;

// address: 0x8011ACA4
static unsigned short P2MonstSelCol;

// address: 0x8011ACA6
static unsigned short P12MonstSelCol;

// address: 0x8011ACA8
// size: 0x108
extern struct CBlocks *CurrentBlocks;

// address: 0x8011ACB0
static int LightMethod;

// address: 0x800B8B80
// size: 0x14
extern struct TownToCreature TownConv[10];

// address: 0x8011ACC4
extern int OtShift;

// address: 0x8011ACC8
extern int OldLighting;

// address: 0x8011ACCC
extern int GMXAdj2;

// address: 0x8011ACD0
extern int GMYAdj2;

// address: 0x8011ACD4
extern int Adjust;

// address: 0x8011CC00
// size: 0x28
static struct POLY_FT4 MyFT4;

// address: 0x800B9454
// size: 0x5D0
extern struct TextDat *AllDats[372];

// address: 0x8011AD1C
extern int TpW;

// address: 0x8011AD20
extern int TpH;

// address: 0x8011AD24
extern int TpXDest;

// address: 0x8011AD28
extern int TpYDest;

// address: 0x800B9A24
// size: 0x34
extern struct POLY_GT4 MyGT4;

// address: 0x800B8B94
// size: 0x8C0
extern struct TextDat DatPool[20];

// address: 0x8011AD10
extern int wank;

// address: 0x8011AD34
// size: 0x4
extern enum OVER_TYPE CurrentOverlay;

// address: 0x801105F8
// size: 0xC
static unsigned long HaltTab[3];

// address: 0x8011CC28
// size: 0x10
static struct Overlay FrontEndOver;

// address: 0x8011CC38
// size: 0x10
static struct Overlay PregameOver;

// address: 0x8011CC48
// size: 0x10
static struct Overlay GameOver;

// address: 0x8011CC58
// size: 0x10
static struct Overlay FmvOver;

// address: 0x8011C674
static int OWorldX;

// address: 0x8011C678
static int OWorldY;

// address: 0x8011C67C
static int WWorldX;

// address: 0x8011C680
static int WWorldY;

// address: 0x8011C684
static int TimePerFrame;

// address: 0x8011C688
static int CpuStart;

// address: 0x8011C68C
static int CpuTime;

// address: 0x8011C690
static int DrawTime;

// address: 0x8011C694
static int DrawStart;

// address: 0x8011C698
static int LastCpuTime;

// address: 0x8011C69C
static int LastDrawTime;

// address: 0x8011C6A0
static int DrawArea;

// address: 0x8011AD60
extern bool ProfOn;

// address: 0x8011073C
// size: 0x32
static unsigned short Level2Bgdata[25];

// address: 0x800B9A58
// size: 0x11
extern unsigned char LevPals[17];

// address: 0x8011AD7C
static int CutScreen;

// address: 0x800B9A6C
// size: 0x58
extern struct PanelXY DefP1PanelXY;

// address: 0x800B9AC4
// size: 0x58
extern struct PanelXY DefP1PanelXY2;

// address: 0x800B9B1C
// size: 0x58
extern struct PanelXY DefP2PanelXY;

// address: 0x800B9B74
// size: 0x58
extern struct PanelXY DefP2PanelXY2;

// address: 0x8011AD8C
extern int hof;

// address: 0x8011AD90
extern int mof;

// address: 0x8011AD94
static int SpdCol0;

// address: 0x8011AD98
static int SpdCol1;

// address: 0x8011AD9C
static int SpdCol2;

// address: 0x8011ADA0
static int SpdCol3;

// address: 0x8011ADA4
static int SpdColInc0;

// address: 0x8011ADA8
static int SpdColInc1;

// address: 0x8011ADAC
static int SpdColInc2;

// address: 0x8011ADB0
static int SpdColInc3;

// address: 0x800B9BCC
// size: 0x12
static unsigned char DurColors[3][6];

// address: 0x800B9BE0
// size: 0x108
extern struct SFXHDR SFXTab[2];

// address: 0x800B9CE8
// size: 0x12000
extern unsigned long STR_Buffer[18432];

// address: 0x8011ADE8
extern unsigned long Time;

// address: 0x8011ADEC
extern bool CDWAIT;

// address: 0x800CBCE8
// size: 0x40
extern struct SpuVoiceAttr voice_attr;

// address: 0x800CBD28
// size: 0x84
extern struct SFXHDR STRSave;

// address: 0x8011C6A4
static bool SavePause;

// address: 0x8011ADBD
extern char NoActiveStreams;

// address: 0x8011ADC0
static bool STRInit;

// address: 0x8011ADC4
static int frame_rate;

// address: 0x8011ADC8
static unsigned char CDAngle;

// address: 0x8011ADCC
extern int my_spurate;

// address: 0x8011AE08
extern char SFXNotPlayed;

// address: 0x8011AE09
extern char SFXNotInBank;

// address: 0x8011CC68
// size: 0x108
static char spu_management[264];

// address: 0x8011CD78
// size: 0x14
static struct SpuReverbAttr rev_attr;

// address: 0x8011C6AC
static unsigned short NoSfx;

// address: 0x8011CD98
// size: 0x30
static unsigned short CHStatus[24];

// address: 0x8011ADFC
static long OffsetHandle;

// address: 0x8011AE00
static int BankBase;

// address: 0x801109C8
// size: 0x78
static unsigned short SFXRemapTab[60];

// address: 0x8011AE04
static int NoSNDRemaps;

// address: 0x800CBDAC
// size: 0x1EC
extern struct PalCollection ThePals;

// address: 0x8011AE24
extern unsigned short ShadClut;

// address: 0x80110A74
// size: 0x50
static struct InitPos InitialPositions[20];

// address: 0x8011AE88
extern int demo_level;

// address: 0x8011AE8C
// size: 0x4
extern enum GM_SPEEDS speedstore;

// address: 0x8011CDC8
// size: 0x28
static int buff[10];

// address: 0x8011AE90
extern int old_val;

// address: 0x8011AE94
// size: 0x5C
extern struct TASK *DemoTask;

// address: 0x8011AE98
// size: 0x5C
extern struct TASK *DemoGameTask;

// address: 0x8011AE9C
// size: 0x5C
extern struct TASK *tonys;

// address: 0x8011AE3C
extern int demo_load;

// address: 0x8011AE40
extern int demo_record_load;

// address: 0x8011AE44
extern int level_record;

// address: 0x8011AE48
extern char demo_fade_finished;

// address: 0x8011AE49
extern unsigned char demo_which;

// address: 0x8011AE4C
// size: 0x5
extern unsigned char demo_level_num[5];

// address: 0x8011AE54
// size: 0x5
extern unsigned char demo_level_player[5];

// address: 0x8011AE5C
// size: 0x5
extern unsigned char demo_level_spell1[5];

// address: 0x8011AE64
// size: 0x5
extern unsigned char demo_level_spell2[5];

// address: 0x8011AE6C
// size: 0x5
extern unsigned char demo_level_clothe[5];

// address: 0x8011AE4A
extern unsigned char quest_cheat_num;

// address: 0x8011AE4B
extern unsigned char cheat_quest_flag;

// address: 0x8011AE34
extern int tony_poll;

// address: 0x8011AE38
extern int moo_moo;

// address: 0x8011AE74
// size: 0x5
extern unsigned char demo_level_dam[5];

// address: 0x8011AE7C
// size: 0x5
extern unsigned char demo_level_dex[5];

// address: 0x8011AE81
extern unsigned char demo_flash;

// address: 0x8011AE84
extern int tonys_Task;

// address: 0x8011B000
extern bool DoShowPanel;

// address: 0x8011B004
extern bool DoDrawBg;

// address: 0x8011C6B0
static bool GlueFinished;

// address: 0x8011C6B4
static bool DoHomingScroll;

// address: 0x8011C6B8
// size: 0x70
static struct TextDat *TownerGfx;

// address: 0x8011C6BC
static int CurrentMonsterList;

// address: 0x8011C6C0
static int QuakeTime;

// address: 0x8011C6C4
static int QuakeAmount;

// address: 0x800CBF98
// size: 0x3CC
extern struct PInf PlayerInfo[81];

// address: 0x8011B008
// size: 0x4
static char ArmourChar[4];

// address: 0x80110B68
// size: 0xA
static char WepChar[10];

// address: 0x8011B00C
// size: 0x4
static char CharChar[4];

// address: 0x8011AFF0
static unsigned char JustLoadedPlayer;

// address: 0x8011AFF4
static bool GameStarted;

// address: 0x8011C6C8
static char ctrl_select_line;

// address: 0x8011C6C9
static char ctrl_select_side;

// address: 0x8011C6CA
static char ckeyheld;

// address: 0x8011C6D0
// size: 0x8
static struct RECT CtrlRect;

// address: 0x8011B020
extern unsigned char ctrlflag;

// address: 0x800CC40C
// size: 0x140
extern struct KEY_ASSIGNS txt_actions[20];

// address: 0x800CC364
// size: 0xA8
extern struct pad_assigns pad_txt[14];

// address: 0x8011B01C
static int toppos;

// address: 0x8011CDF0
// size: 0x10
static struct Dialog CtrlBack;

// address: 0x800CC54C
// size: 0xA0
static int AdvancedDefaults[2][20];

// address: 0x800CC5EC
// size: 0xA0
static int BeginnerDefaults[2][20];

// address: 0x8011B06C
static bool waitnomore;

// address: 0x8011B0B0
extern bool penta_cycle;

// address: 0x8011B098
extern int gr_scrxoff;

// address: 0x8011B09C
extern int gr_scryoff;

// address: 0x8011B0A4
extern unsigned short water_clut;

// address: 0x8011B0A8
extern char visible_level;

// address: 0x8011B095
extern char last_type;

// address: 0x8011B0A0
extern unsigned int water_count;

// address: 0x8011B0A6
extern unsigned short penta_clut;

// address: 0x8011B0A9
extern char daylight;

// address: 0x8011B0AC
extern int daytimer;

// address: 0x8011B0C0
static int TitleAnimCount;

// address: 0x8011B0C4
static int flametick;

// address: 0x800CC68C
// size: 0x18
static int frmlist[6];

// address: 0x800CC6A4
// size: 0x18
static int xoff[6];

// address: 0x8011B0C8
extern int flamecol;

// address: 0x800CC6DC
// size: 0x90
extern struct SPELLFX_DAT SpellFXDat[2];

// address: 0x8011CE00
// size: 0x240
static struct Particle PartArray[16];

// address: 0x8011C6D8
static int partOtPos;

// address: 0x8011C6DC
static int partmonst;

// address: 0x8011B0E4
extern int SetParticle;

// address: 0x8011B0E8
static int p1partexecnum;

// address: 0x8011B0EC
static int p2partexecnum;

// address: 0x800CC6BC
// size: 0x20
static int JumpArray[8];

// address: 0x8011B0F0
static int partjumpflag;

// address: 0x8011B0F4
static int partglowflag;

// address: 0x8011B0F8
static int partcolour;

// address: 0x8011B0FC
static bool anyfuckingmenus;

// address: 0x8011B11D
extern unsigned char select_flag;

// address: 0x8011C6E0
// size: 0x8
static struct RECT SelectRect;

// address: 0x8011C6E8
static char item_select;

// address: 0x8011B120
// size: 0x2
extern char QSpell[2];

// address: 0x8011B124
// size: 0x2
extern char _spltotype[2];

// address: 0x8011B110
// size: 0x90
extern struct CPlayer *gplayer;

// address: 0x8011D040
// size: 0x10
static struct Dialog SelectBack;

// address: 0x8011B114
// size: 0x4
static char mana_order[4];

// address: 0x8011B118
// size: 0x5
static char health_order[5];

// address: 0x8011D050
// size: 0x28
static struct TextDat *DecRequestors[10];

// address: 0x8011C6EC
static unsigned short progress;

// address: 0x800CC76C
// size: 0x7C
extern struct CScreen CutScr;

// address: 0x8011B140
extern bool TitleFlag;

// address: 0x80110CA8
// size: 0x18
static unsigned short Level2CutScreen[12];

// address: 0x8011B144
// size: 0x5C
static struct TASK *CutScreenTSK;

// address: 0x8011B148
static bool GameLoading;

// address: 0x8011B14C
static bool BootScreen;

// address: 0x8011B150
static int ThisLev;

// address: 0x800CC7E8
// size: 0x80
extern unsigned char block_buf[128];

// address: 0x8011B1C8
extern unsigned int card_ev0;

// address: 0x8011B1CC
extern unsigned int card_ev1;

// address: 0x8011B1D0
extern unsigned int card_ev2;

// address: 0x8011B1D4
extern unsigned int card_ev3;

// address: 0x8011B1D8
extern unsigned int card_ev10;

// address: 0x8011B1DC
extern unsigned int card_ev11;

// address: 0x8011B1E0
extern unsigned int card_ev12;

// address: 0x8011B1E4
extern unsigned int card_ev13;

// address: 0x8011B1E8
// size: 0x8
extern int card_dirty[2];

// address: 0x8011B1F0
// size: 0x5C
extern struct TASK *MemcardTask;

// address: 0x8011B1F4
extern int save_blocks;

// address: 0x8011B1F8
extern int card_event;

// address: 0x8011B1FC
extern int cardondelay;

// address: 0x8011B200
// size: 0x8
extern int card_active[2];

// address: 0x8011B208
extern char *Savefilename;

// address: 0x8011B20C
extern char *Loadfilename;

// address: 0x8011B210
// size: 0x8
extern bool new_card_flag[2];

// address: 0x8011B174
extern void (*mem_card_event_handler)();

// address: 0x8011B160
extern bool MemCardActive;

// address: 0x8011B184
extern bool DoLoadedGame;

// address: 0x8011B164
extern bool MemcardOverlay;

// address: 0x8011B178
extern int saveflag;

// address: 0x8011B17C
extern int loadflag;

// address: 0x8011B180
extern int formatflag;

// address: 0x8011B16C
extern int countdownloadcharblock;

// address: 0x8011B188
// size: 0x8
extern int card_side_empty[2];

// address: 0x8011B190
// size: 0x8
extern int card_side_read[2];

// address: 0x8011B198
// size: 0x8
extern int card_side_nogame[2];

// address: 0x8011B1A0
// size: 0x8
extern int card_side_noopt[2];

// address: 0x8011B1A8
// size: 0x8
extern int card_side_nocha[2];

// address: 0x8011B1B8
// size: 0x8
extern int card_side_load[2];

// address: 0x8011B1B0
// size: 0x8
extern int card_side_save[2];

// address: 0x8011B1C0
// size: 0x8
extern int card_side_format[2];

// address: 0x8011B168
extern int NewCardFlag;

// address: 0x8011B170
static int never_hooked_events;

// address: 0x8011B278
extern unsigned long MasterVol;

// address: 0x8011B27C
extern unsigned long MusicVol;

// address: 0x8011B280
extern unsigned long SoundVol;

// address: 0x8011B284
extern unsigned long VideoVol;

// address: 0x8011B288
extern unsigned long SpeechVol;

// address: 0x8011C6F0
// size: 0x70
static struct TextDat *Slider;

// address: 0x8011C6F4
static int sw;

// address: 0x8011C6F8
static int sx;

// address: 0x8011C6FC
static int sy;

// address: 0x8011C700
static unsigned char Adjust_addr_8011C700;

// address: 0x8011C701
static unsigned char qspin;

// address: 0x8011C702
static unsigned char lqspin;

// address: 0x8011C704
// size: 0x4
static enum LANG_TYPE OrigLang;

// address: 0x8011C708
// size: 0x4
static enum LANG_TYPE OldLang;

// address: 0x8011C70C
// size: 0x4
static enum LANG_TYPE NewLang;

// address: 0x8011B28C
extern int ReturnMenu;

// address: 0x8011C710
// size: 0x8
static struct RECT ORect;

// address: 0x8011C718
// size: 0x8
static char *McState[2];

// address: 0x8011B290
extern int they_pressed;

// address: 0x8011B248
extern bool optionsflag;

// address: 0x8011B23C
extern int cmenu;

// address: 0x8011B250
extern int options_pad;

// address: 0x8011B244
extern bool allspellsflag;

// address: 0x800CD2E0
// size: 0x80
extern short Circle[64];

// address: 0x8011B224
extern bool goldcheat;

// address: 0x8011B254
extern int OptionsSeed;

// address: 0x8011B258
extern bool OptionsSetSeed;

// address: 0x8011B240
extern bool CharacterBlockLoaded;

// address: 0x8011B228
extern unsigned char Qfromoptions;

// address: 0x8011B22C
static int Spacing;

// address: 0x8011B230
static int cs;

// address: 0x8011B234
static int lastcs;

// address: 0x8011B238
static int lastlastcs;

// address: 0x8011B24C
extern int ReturnCards;

// address: 0x8011B25C
extern bool DiabloDieFlag;

// address: 0x8011B260
extern bool PadFrig;

// address: 0x8011B264
// size: 0x5C
extern struct TASK *DrawOptionsTask;

// address: 0x800CC868
// size: 0xA8
extern struct OMENUITEM MainMenu[7];

// address: 0x800CC910
// size: 0x120
extern struct OMENUITEM GameMenu[12];

// address: 0x800CCA30
// size: 0x60
extern struct OMENUITEM GameSpeedMenu[4];

// address: 0x800CCA90
// size: 0x48
extern struct OMENUITEM GameOverMenu[3];

// address: 0x800CCAD8
// size: 0x60
extern struct OMENUITEM MemcardLoadGameOverMenu[4];

// address: 0x800CCB38
// size: 0xA8
extern struct OMENUITEM SoundMenu[7];

// address: 0x800CCBE0
// size: 0x48
extern struct OMENUITEM CentreMenu[3];

// address: 0x800CCC28
// size: 0x90
extern struct OMENUITEM LangMenu[6];

// address: 0x800CCCB8
// size: 0x60
extern struct OMENUITEM QuitMenu[4];

// address: 0x800CCD18
// size: 0x60
extern struct OMENUITEM AreYouSureMenu[4];

// address: 0x800CCD78
// size: 0xA8
extern struct OMENUITEM MemcardMenu[7];

// address: 0x800CCE20
// size: 0x60
extern struct OMENUITEM MemcardLoadGameMenu[4];

// address: 0x800CCE80
// size: 0x60
extern struct OMENUITEM MemcardSaveGameMenu[4];

// address: 0x800CCEE0
// size: 0x60
extern struct OMENUITEM MemcardSaveOptionsMenu[4];

// address: 0x800CCF40
// size: 0x60
extern struct OMENUITEM MemcardLoadOptionsMenu[4];

// address: 0x800CCFA0
// size: 0x60
extern struct OMENUITEM MemcardCharacterMenu[4];

// address: 0x800CD000
// size: 0xC0
extern struct OMENUITEM MemcardSelectCard1[8];

// address: 0x800CD0C0
// size: 0xC0
extern struct OMENUITEM MemcardSelectCard2[8];

// address: 0x800CD180
// size: 0x60
extern struct OMENUITEM MemcardFormatMenu[4];

// address: 0x800CD1E0
// size: 0x60
extern struct OMENUITEM SaveConfirmMenu[4];

// address: 0x800CD240
// size: 0xA0
extern struct OMENULIST MenuList[20];

// address: 0x8011B268
extern int MonoX;

// address: 0x8011B26C
static bool debounce;

// address: 0x8011B270
static unsigned char KeyPos;

// address: 0x800CD360
// size: 0x14
static unsigned short KeyTab[10];

// address: 0x8011B274
extern int old_pad;

// address: 0x800CD374
// size: 0x180
extern struct BIRDSTRUCT BirdList[16];

// address: 0x8011C720
// size: 0x8
static int last_seenx[2];

// address: 0x8011C728
// size: 0x8
static int last_seeny[2];

// address: 0x8011B29D
extern char hop_height;

// address: 0x8011B2A0
// size: 0x8
static struct Perch perches[4];

// address: 0x8011B2A8
static bool BirdFrig;

// address: 0x800CD4F4
// size: 0x30
extern struct FMVDAT FmvTab[6];

// address: 0x8011C730
// size: 0x4
static enum KANJI_FRMS KanjiCacheType;

// address: 0x8011D078
// size: 0x320
static struct vbuffS KanjiList[200];

// address: 0x8011C734
// size: 0xC
static struct ALL_DECOMP_BUFFERS *KanjiBuffers;

// address: 0x8011C738
// size: 0xC
static struct FRAME_HDR *KanjiPalFrame;

// address: 0x8011D398
// size: 0x48DA
static unsigned char KanjiFontData[18650];

// address: 0x8011B2C4
// size: 0x70
static struct TextDat *KanjiGfxTData;

// address: 0x8011B2C8
// size: 0x4
static struct vbuffS *KanjiCache;

// address: 0x8011B2CC
static int CacheLen;

// address: 0x8011B2D0
static bool KanjiLoaded;

// address: 0x8011C73C
// size: 0x8
static struct RECT HelpRect;

// address: 0x8011C744
static unsigned char HelpTop;

// address: 0x8011C745
static char help_select_line;

// address: 0x8011B2F8
extern bool displayinghelp;

// address: 0x80121C88
// size: 0x10
static struct Dialog HelpBack;

// address: 0x8011B2E0
static bool helpflag;

// address: 0x800CD524
// size: 0x12C
static struct HelpStruct HelpList[25];

// address: 0x800CD650
// size: 0x30
static int AutoSpellList[12];

// address: 0x8011B364
extern int FeBackX;

// address: 0x8011B368
extern int FeBackY;

// address: 0x8011B36C
extern int FeBackW;

// address: 0x8011B370
extern int FeBackH;

// address: 0x8011B374
extern unsigned char FeFlag;

// address: 0x800CDB78
// size: 0x780
extern struct FeStruct FeBuffer[80];

// address: 0x8011B378
extern int FePlayerNo;

// address: 0x8011C748
// size: 0x24
static struct FE_CREATE *CStruct;

// address: 0x8011B37C
extern int FeBufferCount;

// address: 0x8011B380
extern int FeMaxBufferCount;

// address: 0x8011B384
extern int FeNoOfPlayers;

// address: 0x8011B388
// size: 0x2
extern unsigned char FePadInTab[2];

// address: 0x8011B38A
extern unsigned char FePadInFlag;

// address: 0x8011B38C
// size: 0x8
extern int FeChrClass[2];

// address: 0x800CE2F8
// size: 0x16
extern char FePlayerName[11][2];

// address: 0x8011B394
// size: 0x1C
extern struct FeTable *FeCurMenu;

// address: 0x8011B398
extern int FeEnterLang;

// address: 0x8011B39C
// size: 0x2
extern unsigned char FePlayerNameFlag[2];

// address: 0x8011B3A0
extern unsigned long FeCount;

// address: 0x8011B3A4
extern int fileselect;

// address: 0x8011B3A8
extern int BookMenu;

// address: 0x8011B3AC
extern int FMVPress;

// address: 0x8011B320
// size: 0x70
extern struct TextDat *FeTData;

// address: 0x8011B338
extern bool JustQuitQText;

// address: 0x8011B328
// size: 0x8
extern bool LoadedChar[2];

// address: 0x8011B324
// size: 0x70
extern struct TextDat *FlameTData;

// address: 0x8011B330
extern unsigned char FeIsAVirgin;

// address: 0x8011B334
extern int FeMenuDelay;

// address: 0x800CD680
// size: 0x1C
extern struct FeTable DummyMenu;

// address: 0x800CD69C
// size: 0x1C
extern struct FeTable FeMainMenu;

// address: 0x800CD6B8
// size: 0x1C
extern struct FeTable FeNewGameMenu;

// address: 0x800CD6D4
// size: 0x1C
extern struct FeTable FeNewP1ClassMenu;

// address: 0x800CD6F0
// size: 0x1C
extern struct FeTable FeNewP1NameMenu;

// address: 0x800CD70C
// size: 0x1C
extern struct FeTable FeNewP2ClassMenu;

// address: 0x800CD728
// size: 0x1C
extern struct FeTable FeNewP2NameMenu;

// address: 0x800CD744
// size: 0x1C
extern struct FeTable FeDifficultyMenu;

// address: 0x800CD760
// size: 0x1C
extern struct FeTable FeBackgroundMenu;

// address: 0x800CD77C
// size: 0x1C
extern struct FeTable FeBook1Menu;

// address: 0x800CD798
// size: 0x1C
extern struct FeTable FeBook2Menu;

// address: 0x800CD7B4
// size: 0x1C
extern struct FeTable FeLoadCharMenu;

// address: 0x800CD7D0
// size: 0x1C
extern struct FeTable FeLoadChar1Menu;

// address: 0x800CD7EC
// size: 0x1C
extern struct FeTable FeLoadChar2Menu;

// address: 0x8011B33C
static int fadeval;

// address: 0x800CD808
// size: 0x78
extern struct FeMenuTable FeMainMenuTable[5];

// address: 0x800CD880
// size: 0x48
extern struct FeMenuTable FeNewGameMenuTable[3];

// address: 0x800CD8C8
// size: 0x78
extern struct FeMenuTable FePlayerClassMenuTable[5];

// address: 0x800CD940
// size: 0x28
extern unsigned char FeNameEngMenuTable[40];

// address: 0x800CD968
// size: 0x48
extern struct FeMenuTable FeMemcardMenuTable[3];

// address: 0x800CD9B0
// size: 0x60
extern struct FeMenuTable FeDifficultyMenuTable[4];

// address: 0x800CDA10
// size: 0x60
extern struct FeMenuTable FeBackgroundMenuTable[4];

// address: 0x800CDA70
// size: 0x78
extern struct FeMenuTable FeBook1MenuTable[5];

// address: 0x800CDAE8
// size: 0x90
extern struct FeMenuTable FeBook2MenuTable[6];

// address: 0x8011B348
static bool DrawBackOn;

// address: 0x8011B34C
extern int FeAttractMode;

// address: 0x8011B350
extern int AttractNo;

// address: 0x8011B354
extern unsigned long AttractTitleDelay;

// address: 0x8011B358
extern unsigned long AttractMainDelay;

// address: 0x8011B35C
extern int FMVEndPad;

// address: 0x8011B360
static int JustInCredits;

// address: 0x8011B3BC
extern int InCredits;

// address: 0x8011B3C0
extern int CreditTitleNo;

// address: 0x8011B3C4
extern int CreditSubTitleNo;

// address: 0x8011B3DC
// size: 0x8
extern int card_status[2];

// address: 0x8011B3E4
// size: 0x8
extern int card_usable[2];

// address: 0x8011B3EC
// size: 0x8
extern int card_files[2];

// address: 0x8011B3F4
// size: 0x8
extern int card_changed[2];

// address: 0x8011B3FC
// size: 0x8
extern int last_card_status[2];

// address: 0x8011B3C8
extern int to_ascii_invalid_char;

// address: 0x8011B3DB
extern char dirflag;

// address: 0x8011B458
extern int AlertTxt;

// address: 0x8011B45C
extern int StatusTxt;

// address: 0x8011B460
extern int current_card;

// address: 0x8011B464
extern int LoadType;

// address: 0x8011B468
extern int McMenuPos;

// address: 0x8011B46C
// size: 0x1C
extern struct FeTable *McCurMenu;

// address: 0x8011B428
extern bool fileinfoflag;

// address: 0x8011B410
extern char *DiabloGameFile;

// address: 0x8011B414
extern char *DiabloOptionFile;

// address: 0x8011B418
extern char *DiabloCharacterFile;

// address: 0x8011B420
// size: 0x8
extern char *McState_addr_8011B420[2];

// address: 0x8011B540
// size: 0x8
extern int mdec_audio_buffer[2];

// address: 0x8011B548
extern int mdec_audio_sec;

// address: 0x8011B54C
extern int mdec_audio_offs;

// address: 0x8011B550
extern int mdec_audio_playing;

// address: 0x8011B554
extern int mdec_audio_rate_shift;

// address: 0x8011B558
// size: 0x8
extern char *vlcbuf[2];

// address: 0x8011B560
extern int slice_size;

// address: 0x8011B564
// size: 0x8
extern struct RECT slice;

// address: 0x8011B56C
extern int slice_inc;

// address: 0x8011B570
extern int area_pw;

// address: 0x8011B574
extern int area_ph;

// address: 0x8011B578
// size: 0x2
extern char tmdc_pol_dirty[2];

// address: 0x8011B57C
// size: 0x8
extern int num_pol[2];

// address: 0x8011B584
extern int mdec_cx;

// address: 0x8011B588
extern int mdec_cy;

// address: 0x8011B58C
extern int mdec_w;

// address: 0x8011B590
extern int mdec_h;

// address: 0x8011B594
// size: 0x8
extern int mdec_pw[2];

// address: 0x8011B59C
// size: 0x8
extern int mdec_ph[2];

// address: 0x8011B5A4
extern int move_x;

// address: 0x8011B5A8
extern int move_y;

// address: 0x8011B5AC
extern int move_scale;

// address: 0x8011B5B0
extern int stream_frames;

// address: 0x8011B5B4
extern int last_stream_frame;

// address: 0x8011B5B8
extern int mdec_framecount;

// address: 0x8011B5BC
extern int mdec_speed;

// address: 0x8011B5C0
extern int mdec_stream_starting;

// address: 0x8011B5C4
extern int mdec_last_frame;

// address: 0x8011B5C8
extern int mdec_sectors_per_frame;

// address: 0x8011B5CC
extern unsigned short *vlctab;

// address: 0x8011B5D0
extern unsigned char *mdc_buftop;

// address: 0x8011B5D4
extern unsigned char *mdc_bufstart;

// address: 0x8011B5D8
extern int mdc_bufleft;

// address: 0x8011B5DC
extern int mdc_buftotal;

// address: 0x8011B5E0
extern int ordertab_length;

// address: 0x8011B5E4
extern int time_in_frames;

// address: 0x80121CE8
// size: 0x20
static char FMVName[32];

// address: 0x8011B5E8
extern int stream_chunksize;

// address: 0x8011B5EC
extern int stream_bufsize;

// address: 0x8011B5F0
extern int stream_subsec;

// address: 0x8011B5F4
extern int stream_secnum;

// address: 0x8011B5F8
extern int stream_last_sector;

// address: 0x8011B5FC
extern int stream_startsec;

// address: 0x8011B600
extern int stream_opened;

// address: 0x8011B604
extern int stream_last_chunk;

// address: 0x8011B608
extern int stream_got_chunks;

// address: 0x8011B60C
extern int stream_subcode;

// address: 0x8011B610
extern int streampos;

// address: 0x8011B614
extern int last_sector;

// address: 0x8011B618
extern int cdstream_resetsec;

// address: 0x8011B61C
extern int last_handler_event;

// address: 0x80121D08
// size: 0x30
static int CreateEnv[12];

// address: 0x8011C758
static char *Passedfilename;

// address: 0x8011C75C
static int Passedw;

// address: 0x8011C760
static int Passedh;

// address: 0x80121D38
// size: 0xC800
static unsigned char TempStack[51200];

// address: 0x8011B4E4
extern bool user_start;

// address: 0x8011B47C
extern unsigned char *vlc_tab;

// address: 0x8011B480
extern unsigned char *vlc_buf;

// address: 0x8011B484
extern unsigned char *img_buf;

// address: 0x8011B488
extern int vbuf;

// address: 0x8011B48C
extern int last_fn;

// address: 0x8011B490
extern int last_mdc;

// address: 0x8011B494
extern int slnum;

// address: 0x8011B498
extern int slices_to_do;

// address: 0x8011B49C
extern int mbuf;

// address: 0x8011B4A0
extern int mfn;

// address: 0x8011B4A4
extern int last_move_mbuf;

// address: 0x8011B4A8
extern int move_request;

// address: 0x8011B4AC
extern int mdec_scale;

// address: 0x8011B4B0
extern int do_brightness;

// address: 0x8011B4B4
extern int frame_decoded;

// address: 0x8011B4B8
extern int mdec_streaming;

// address: 0x8011B4BC
extern int mdec_stream_size;

// address: 0x8011B4C0
extern int first_stream_frame;

// address: 0x8011B4C4
extern int stream_frames_played;

// address: 0x8011B4C8
extern int num_mdcs;

// address: 0x8011B4CC
extern int mdec_head;

// address: 0x8011B4D0
extern int mdec_tail;

// address: 0x8011B4D4
extern int mdec_waiting_tail;

// address: 0x8011B4D8
extern int mdecs_queued;

// address: 0x8011B4DC
extern int mdecs_waiting;

// address: 0x8011B4E0
extern int sfx_volume;

// address: 0x8011B4E8
static unsigned char DiabEnd;

// address: 0x8011B4EC
// size: 0x4
extern int (*stream_buf)[504];

// address: 0x8011B4F0
// size: 0x20
extern struct strheader *stream_bufh;

// address: 0x8011B4F4
extern int stream_chunks_in;

// address: 0x8011B4F8
extern int stream_chunks_total;

// address: 0x8011B4FC
extern int stream_in;

// address: 0x8011B500
extern int stream_out;

// address: 0x8011B504
extern int stream_stalled;

// address: 0x8011B508
extern int stream_ending;

// address: 0x8011B50C
extern int stream_open;

// address: 0x8011B510
extern int stream_handler_installed;

// address: 0x8011B514
extern int stream_chunks_borrowed;

// address: 0x8011B518
extern int _get_count;

// address: 0x8011B51C
extern int _discard_count;

// address: 0x8011B520
extern void (*old_cdready_handler)();

// address: 0x8011B524
extern int cdready_calls;

// address: 0x8011B528
extern int cdready_errors;

// address: 0x8011B52C
extern int cdready_out_of_sync;

// address: 0x8011B530
extern int cdstream_resetting;

// address: 0x8011B534
extern int sector_dma;

// address: 0x8011B538
extern int sector_dma_in;

// address: 0x8011B53C
extern int first_handler_event;

// address: 0x8011B6AC
extern unsigned char *pStatusPanel;

// address: 0x8011B6B0
extern unsigned char *pGBoxBuff;

// address: 0x8011B6B4
extern unsigned char dropGoldFlag;

// address: 0x8011B6B8
// size: 0x2
extern unsigned char _pinfoflag[2];

// address: 0x800CE810
// size: 0x200
extern char _infostr[256][2];

// address: 0x8011B6BC
// size: 0x2
extern char _infoclr[2];

// address: 0x800CEA10
// size: 0x100
extern char tempstr[256];

// address: 0x8011B6BE
extern unsigned char drawhpflag;

// address: 0x8011B6BF
extern unsigned char drawmanaflag;

// address: 0x8011B6C0
extern unsigned char chrflag;

// address: 0x8011B6C1
extern unsigned char drawbtnflag;

// address: 0x8011B6C2
extern unsigned char panbtndown;

// address: 0x8011B6C3
extern unsigned char panelflag;

// address: 0x8011B6C4
extern unsigned char chrbtndown;

// address: 0x8011B6C5
extern unsigned char lvlbtndown;

// address: 0x8011B6C6
extern unsigned char sbookflag;

// address: 0x8011B6C7
extern unsigned char talkflag;

// address: 0x8011B6C8
extern int dropGoldValue;

// address: 0x8011B6CC
extern int initialDropGoldValue;

// address: 0x8011B6D0
extern int initialDropGoldIndex;

// address: 0x8011B6D4
extern unsigned char *pPanelButtons;

// address: 0x8011B6D8
extern unsigned char *pPanelText;

// address: 0x8011B6DC
extern unsigned char *pManaBuff;

// address: 0x8011B6E0
extern unsigned char *pLifeBuff;

// address: 0x8011B6E4
extern unsigned char *pChrPanel;

// address: 0x8011B6E8
extern unsigned char *pChrButtons;

// address: 0x8011B6EC
extern unsigned char *pSpellCels;

// address: 0x8012E538
// size: 0x500
static char _panelstr[64][10][2];

// address: 0x8012EA38
// size: 0x50
static int _pstrjust[10][2];

// address: 0x8011C764
// size: 0x8
static int _pnumlines[2];

// address: 0x8011B6F0
// size: 0x8
extern struct RECT *InfoBoxRect;

// address: 0x8011B6F4
// size: 0x8
extern struct RECT CSRect;

// address: 0x8011C774
// size: 0x8
static int _pSpell[2];

// address: 0x8011C77C
// size: 0x8
static int _pSplType[2];

// address: 0x8011B6FC
extern int numpanbtns;

// address: 0x8011B700
extern unsigned char *pDurIcons;

// address: 0x8011B704
extern unsigned char drawdurflag;

// address: 0x8011C784
// size: 0x8
static unsigned char chrbtn[4][2];

// address: 0x8011B705
extern unsigned char chrbtnactive;

// address: 0x8011B708
extern unsigned char *pSpellBkCel;

// address: 0x8011B70C
extern unsigned char *pSBkBtnCel;

// address: 0x8011B710
extern unsigned char *pSBkIconCels;

// address: 0x8011B714
extern int sbooktab;

// address: 0x8011B718
// size: 0x8
extern int cur_spel[2];

// address: 0x8011C78C
// size: 0x8
static int my_cur_spel[2];

// address: 0x8011C794
static long talkofs;

// address: 0x8012EA98
// size: 0x50
static char sgszTalkMsg[80];

// address: 0x8011C798
static unsigned char sgbTalkSavePos;

// address: 0x8011C799
static unsigned char sgbNextTalkSave;

// address: 0x8011C79A
// size: 0x2
static unsigned char sgbPlrTalkTbl[2];

// address: 0x8011C79C
static unsigned char *pTalkPanel;

// address: 0x8011C7A0
static unsigned char *pMultiBtns;

// address: 0x8011C7A4
static unsigned char *pTalkBtns;

// address: 0x8011C7A8
// size: 0x3
static unsigned char talkbtndown[3];

// address: 0x800CE324
// size: 0x25
extern char SpellITbl[37];

// address: 0x8011B629
extern unsigned char DrawLevelUpFlag;

// address: 0x8011B650
// size: 0x8
extern struct TASK *_spselflag[2];

// address: 0x8011B64C
extern unsigned char spspelstate;

// address: 0x8011B66C
extern bool initchr;

// address: 0x8011B62C
static int SPLICONNO;

// address: 0x8011B630
static int SPLICONY;

// address: 0x8011C76C
static int SPLICONRIGHT;

// address: 0x8011B634
static int scx;

// address: 0x8011B638
static int scy;

// address: 0x8011B63C
static int scx1;

// address: 0x8011B640
static int scy1;

// address: 0x8011B644
static int scx2;

// address: 0x8011B648
static int scy2;

// address: 0x8011B658
extern char SpellCol;

// address: 0x800CE310
// size: 0x12
extern unsigned char SpellColors[18];

// address: 0x800CE34C
// size: 0x64
extern int SpellPages[5][5];

// address: 0x8011B65C
static int lus;

// address: 0x8011B660
static int CsNo;

// address: 0x8011B664
static char plusanim;

// address: 0x8012EA88
// size: 0x10
static struct Dialog CSBack;

// address: 0x8011B668
static int CS_XOFF;

// address: 0x800CE3B0
// size: 0x460
extern struct CSDATA CS_Tab[28];

// address: 0x8011B670
extern int NoCSEntries;

// address: 0x8011B674
static int SPALOFF;

// address: 0x8011B678
static int paloffset1;

// address: 0x8011B67C
static int paloffset2;

// address: 0x8011B680
static int paloffset3;

// address: 0x8011B684
static int paloffset4;

// address: 0x8011B688
static int pinc1;

// address: 0x8011B68C
static int pinc2;

// address: 0x8011B690
static int pinc3;

// address: 0x8011B694
static int pinc4;

// address: 0x8011B6A0
// size: 0x2
static unsigned char CrossCount[2];

// address: 0x8011B730
// size: 0x8
extern int _pcurs[2];

// address: 0x8011B738
extern int cursW;

// address: 0x8011B73C
extern int cursH;

// address: 0x8011B740
extern int icursW;

// address: 0x8011B744
extern int icursH;

// address: 0x8011B748
extern int icursW28;

// address: 0x8011B74C
extern int icursH28;

// address: 0x8011B750
extern int cursmx;

// address: 0x8011B754
extern int cursmy;

// address: 0x8011B758
// size: 0x8
extern int _pcursmonst[2];

// address: 0x8011B760
// size: 0x2
extern char _pcursobj[2];

// address: 0x8011B764
// size: 0x2
extern char _pcursitem[2];

// address: 0x8011B768
// size: 0x2
extern char _pcursinvitem[2];

// address: 0x8011B76C
// size: 0x2
extern char _pcursplr[2];

// address: 0x8011B72C
extern int sel_data;

// address: 0x800CEB10
// size: 0x174
extern struct DeadStruct dead[31];

// address: 0x8011B770
extern int spurtndx;

// address: 0x8011B774
extern int stonendx;

// address: 0x8011B778
extern unsigned char *pSquareCel;

// address: 0x8011B7E0
extern unsigned char svgamode;

// address: 0x8011B7E4
extern int MouseX;

// address: 0x8011B7E8
extern int MouseY;

// address: 0x8011B7EC
extern long gv1;

// address: 0x8011B7F0
extern long gv2;

// address: 0x8011B7F4
extern long gv3;

// address: 0x8011B7F8
extern long gv4;

// address: 0x8011B7FC
extern long gv5;

// address: 0x8011B800
extern unsigned char gbProcessPlayers;

// address: 0x800CEC84
// size: 0x28
extern int DebugMonsters[10];

// address: 0x800CECAC
// size: 0xAB0
extern unsigned char pMegaTiles[2736];

// address: 0x800CF75C
// size: 0x44
extern unsigned long glSeedTbl[17];

// address: 0x800CF7A0
// size: 0x44
extern int gnLevelTypeTbl[17];

// address: 0x8011B801
extern unsigned char gbDoEnding;

// address: 0x8011B802
extern unsigned char gbRunGame;

// address: 0x8011B803
extern unsigned char gbRunGameResult;

// address: 0x8011B804
extern unsigned char gbGameLoopStartup;

// address: 0x8012EAE8
// size: 0x44
static int glEndSeed[17];

// address: 0x8012EB38
// size: 0x44
static int glMid1Seed[17];

// address: 0x8012EB88
// size: 0x44
static int glMid2Seed[17];

// address: 0x8012EBD8
// size: 0x44
static int glMid3Seed[17];

// address: 0x8011C7AC
static long *sg_previousFilter;

// address: 0x8012EC28
// size: 0x30
static int CreateEnv_addr_8012EC28[12];

// address: 0x8011C7B0
static int Passedlvldir;

// address: 0x8011C7B4
static unsigned char *TempStack_addr_8011C7B4;

// address: 0x8011C7B8
static bool pauseo;

// address: 0x8011B788
extern unsigned long ghMainWnd;

// address: 0x8011B78C
extern unsigned char fullscreen;

// address: 0x8011B790
extern int force_redraw;

// address: 0x8011B7A4
extern unsigned char PauseMode;

// address: 0x8011B7A5
extern unsigned char FriendlyMode;

// address: 0x8011B795
extern unsigned char visiondebug;

// address: 0x8011B797
extern unsigned char light4flag;

// address: 0x8011B798
extern unsigned char leveldebug;

// address: 0x8011B799
extern unsigned char monstdebug;

// address: 0x8011B7A0
extern int debugmonsttypes;

// address: 0x8011B794
static unsigned char cineflag;

// address: 0x8011B796
extern unsigned char scrollflag;

// address: 0x8011B79A
extern unsigned char trigdebug;

// address: 0x8011B79C
extern int setseed;

// address: 0x8011B7A8
static int sgnTimeoutCurs;

// address: 0x8011B7AC
extern unsigned char sgbMouseDown;

// address: 0x8011B7D8
extern int LastFrCount;

// address: 0x8011B7DC
// size: 0x4
extern enum GM_SPEEDS GameSpeed;

// address: 0x800CFE80
// size: 0xC40
extern struct TownerStruct towner[16];

// address: 0x8011B81C
extern int numtowners;

// address: 0x8011B820
extern unsigned char storeflag;

// address: 0x8011B821
extern unsigned char boyloadflag;

// address: 0x8011B822
extern unsigned char bannerflag;

// address: 0x8011B824
extern unsigned char *pCowCels;

// address: 0x8011C7BC
static unsigned long sgdwCowClicks;

// address: 0x8011C7C0
static int sgnCowMsg;

// address: 0x800CFBC0
// size: 0x2C0
extern int Qtalklist[16][11];

// address: 0x8011B814
extern unsigned long CowPlaying;

// address: 0x800CF7E4
// size: 0x378
extern char AnimOrder[148][6];

// address: 0x800CFB5C
// size: 0xC
extern int TownCowX[3];

// address: 0x800CFB68
// size: 0xC
extern int TownCowY[3];

// address: 0x800CFB74
// size: 0xC
extern int TownCowDir[3];

// address: 0x800CFB80
// size: 0x20
extern int cowoffx[8];

// address: 0x800CFBA0
// size: 0x20
extern int cowoffy[8];

// address: 0x8011B850
extern int sfxdelay;

// address: 0x8011B854
extern int sfxdnum;

// address: 0x8011B834
// size: 0x84
extern struct SFXHDR *sghStream;

// address: 0x800D0AC0
// size: 0xF80
extern struct TSFX sgSFX[992];

// address: 0x8011B838
// size: 0x4
extern struct TSFX *sgpStreamSFX;

// address: 0x8011B83C
static int SFXX;

// address: 0x8011B840
static int SFXY;

// address: 0x8011B844
static int SFXW;

// address: 0x8011B848
static int SFXH;

// address: 0x8011B84C
extern int mypan;

// address: 0x8011B858
extern long orgseed;

// address: 0x8011C7C4
static long sglGameSeed;

// address: 0x8011B85C
extern int SeedCount;

// address: 0x8011C7C8
// size: 0x4
static struct CCritSect sgMemCrit;

// address: 0x8011C7CC
static int sgnWidth;

// address: 0x8011B86B
extern char msgflag;

// address: 0x8011B86C
extern char msgdelay;

// address: 0x800D1AF0
// size: 0x50
extern char msgtable[80];

// address: 0x800D1A40
// size: 0xB0
extern int MsgStrings[44];

// address: 0x8011B869
extern char msgholdflag;

// address: 0x8011B86A
extern char msgcnt;

// address: 0x8011C7D0
static unsigned long sgdwProgress;

// address: 0x8011C7D4
static unsigned long sgdwXY;

// address: 0x800D1B40
// size: 0x9D
extern unsigned char AllItemsUseable[157];

// address: 0x801113A4
// size: 0x13A0
extern struct ItemDataStruct AllItemsList[157];

// address: 0x80112744
// size: 0xD20
extern struct PLStruct PL_Prefix[84];

// address: 0x80113464
// size: 0xF00
extern struct PLStruct PL_Suffix[96];

// address: 0x80114364
// size: 0x1DDC
extern struct UItemStruct UniqueItemList[91];

// address: 0x800D1D54
// size: 0x3600
extern struct ItemStruct item[128];

// address: 0x800D5354
// size: 0x7F
extern char itemactive[127];

// address: 0x800D53D4
// size: 0x7F
extern char itemavail[127];

// address: 0x800D5454
// size: 0x80
extern unsigned char UniqueItemFlag[128];

// address: 0x8011B8DC
extern unsigned char uitemflag;

// address: 0x8011C7D8
static int tem;

// address: 0x8012EC58
// size: 0x6C
static struct ItemStruct curruitem;

// address: 0x8012ECC8
// size: 0x9
static unsigned char itemhold[3][3];

// address: 0x8012ECD8
// size: 0x7F
static char itemactivelist[127];

// address: 0x8011B8E0
extern int ScrollType;

// address: 0x800D54D4
// size: 0x80
extern char OutStr[128];

// address: 0x8011B8E4
// size: 0x20
extern struct ItemDataStruct *itemsave;

// address: 0x8011B888
extern long numitems;

// address: 0x8011B88C
extern int gnNumGetRecords;

// address: 0x800D1CB0
// size: 0x8C
extern int ItemInvSnds[35];

// address: 0x800D1BE0
// size: 0xA9
extern unsigned char ItemCAnimTbl[169];

// address: 0x80116178
// size: 0x40
extern short SinTab[32];

// address: 0x801161F4
// size: 0x46
static short Item2Frm[35];

// address: 0x800D1C8C
// size: 0x23
extern unsigned char ItemAnimLs[35];

// address: 0x8011B890
extern int *ItemAnimSnds;

// address: 0x8011B894
extern int idoppely;

// address: 0x8011B8B8
// size: 0x8
extern int ScrollFlag[2];

// address: 0x800D1D3C
// size: 0x18
extern int premiumlvladd[6];

// address: 0x8011B8D8
extern bool FIRSTTIME;

// address: 0x800D6300
// size: 0x280
extern struct LightListStruct2 LightList[80];

// address: 0x800D6580
// size: 0x50
extern unsigned char lightactive[80];

// address: 0x8011B914
extern int numlights;

// address: 0x8011B918
extern char lightmax;

// address: 0x800D65D0
// size: 0x1C0
extern struct LightListStruct VisionList[32];

// address: 0x8011B91C
extern int numvision;

// address: 0x8011B920
extern unsigned char dovision;

// address: 0x8011B924
extern int visionid;

// address: 0x8011C7DC
static int disp_mask;

// address: 0x8011C7E0
static int weird;

// address: 0x8011C7E4
static int disp_tab_r;

// address: 0x8011C7E8
static int dispy_r;

// address: 0x8011C7EC
static int disp_tab_g;

// address: 0x8011C7F0
static int dispy_g;

// address: 0x8011C7F4
static int disp_tab_b;

// address: 0x8011C7F8
static int dispy_b;

// address: 0x8011C7FC
static int radius;

// address: 0x8011C800
static int bright;

// address: 0x8011C804
static int max_bright;

// address: 0x8012ED58
// size: 0x80
static unsigned char mult_tab[128];

// address: 0x800D6014
// size: 0x2B2
extern unsigned char vCrawlTable[30][23];

// address: 0x800D62C8
// size: 0x17
extern unsigned char RadiusAdj[23];

// address: 0x800D5554
// size: 0xABD
extern char CrawlTable[2749];

// address: 0x8011B8F8
extern int restore_r;

// address: 0x8011B8FC
extern int restore_g;

// address: 0x8011B900
extern int restore_b;

// address: 0x8011B904
// size: 0x5
extern char light_level[5];

// address: 0x8011B90C
// size: 0x5
extern char level_lamp[5];

// address: 0x8011B8F4
extern int weird_cheat;

// address: 0x800D62E0
// size: 0x10
static char radius_tab[16];

// address: 0x800D62F0
// size: 0x10
static char bright_tab[16];

// address: 0x8011B960
extern unsigned char qtextflag;

// address: 0x8011B964
extern int qtextSpd;

// address: 0x8011C808
static unsigned char *pMedTextCels;

// address: 0x8011C80C
static unsigned char *pTextBoxCels;

// address: 0x8011C810
static char *qtextptr;

// address: 0x8011C814
static int qtexty;

// address: 0x8011C818
static unsigned long qtextDelay;

// address: 0x8011C81C
static unsigned long sgLastScroll;

// address: 0x8011C820
static unsigned long scrolltexty;

// address: 0x800D67A0
// size: 0x50
extern char MtPrevText[80];

// address: 0x8011C824
static int TextNum;

// address: 0x8011C828
static bool qtextonflag;

// address: 0x8011B934
static bool qtbodge;

// address: 0x800D6790
// size: 0x10
extern struct Dialog QBack;

// address: 0x8011B938
static int textadj;

// address: 0x8011B93C
static int fetextadj;

// address: 0x8011B940
static char FadeState;

// address: 0x8011B944
static bool MusicFading;

// address: 0x8011B948
static int iBookName;

// address: 0x8011B954
extern int mytx;

// address: 0x8011B958
extern int myty;

// address: 0x8011B95C
extern int TextWait;

// address: 0x800D67F0
// size: 0x660
extern struct MissileData missiledata[68];

// address: 0x800D6F60
// size: 0xEB
extern struct MisFileData misfiledata[47];

// address: 0x800D6E50
// size: 0x110
extern void (*MissPrintRoutines[68])();

// address: 0x800D71BC
// size: 0x1130
extern struct LocalLevel sgLocals[22];

// address: 0x8012EDD8
// size: 0x20
static struct DJunk sgJunk;

// address: 0x8011C82D
static unsigned char sgbRecvCmd;

// address: 0x8011C830
static unsigned long sgdwRecvOffset;

// address: 0x8011C834
static unsigned char sgbDeltaChunks;

// address: 0x8011C835
static unsigned char sgbDeltaChanged;

// address: 0x8011C838
static unsigned long sgdwOwnerWait;

// address: 0x8011C83C
// size: 0x7D08
static struct TMegaPkt *sgpMegaPkt;

// address: 0x8011C840
// size: 0x7D08
static struct TMegaPkt *sgpCurrPkt;

// address: 0x8011C844
static int sgnCurrMegaPlayer;

// address: 0x8011B97D
extern unsigned char deltaload;

// address: 0x8011B97E
extern unsigned char gbBufferMsgs;

// address: 0x8011B980
// size: 0x4
extern struct NoComp CompNoComp;

// address: 0x8011B984
// size: 0x4
extern struct PakComp CompPakComp;

// address: 0x8011B988
// size: 0x4
extern struct CrunchComp CompCrunchComp;

// address: 0x800D704C
// size: 0x170
extern struct CompLevelMaps GameMaps;

// address: 0x8011B98C
extern unsigned long dwRecCount;

// address: 0x8011B9A2
extern unsigned char gbMaxPlayers;

// address: 0x8011B9A3
extern unsigned char gbActivePlayers;

// address: 0x8011B9A4
extern unsigned char gbGameDestroyed;

// address: 0x8011B9A5
extern unsigned char gbDeltaSender;

// address: 0x8011B9A6
extern unsigned char gbSelectProvider;

// address: 0x8011B9A7
extern unsigned char gbSomebodyWonGameKludge;

// address: 0x8011C848
static unsigned char sgbSentThisCycle;

// address: 0x8011C84C
static unsigned long sgdwGameLoops;

// address: 0x8011C850
// size: 0x4
static unsigned short sgwPackPlrOffsetTbl[2];

// address: 0x8011C854
// size: 0x2
static unsigned char sgbPlayerLeftGameTbl[2];

// address: 0x8011C858
// size: 0x8
static unsigned long sgdwPlayerLeftReasonTbl[2];

// address: 0x8011C860
// size: 0x2
static unsigned char sgbSendDeltaTbl[2];

// address: 0x8011C868
// size: 0x8
static struct _gamedata sgGameInitInfo;

// address: 0x8011C870
static unsigned char sgbTimeout;

// address: 0x8011C874
static long sglTimeoutStart;

// address: 0x8011B99C
// size: 0x5
extern char gszVersionNumber[5];

// address: 0x8011B9A1
static unsigned char sgbNetInited;

// address: 0x800D82EC
// size: 0x1C4
extern int ObjTypeConv[113];

// address: 0x800D84B0
// size: 0x6F6
extern struct ObjDataStruct AllObjects[99];

// address: 0x801169F0
// size: 0xE0
extern struct OBJ_LOAD_INFO ObjMasterLoadList[56];

// address: 0x800D8C4C
// size: 0x15D4
extern struct ObjectStruct object[127];

// address: 0x8011B9CC
extern long numobjects;

// address: 0x800DA220
// size: 0x7F
extern char objectactive[127];

// address: 0x800DA2A0
// size: 0x7F
extern char objectavail[127];

// address: 0x8011B9D0
extern unsigned char InitObjFlag;

// address: 0x8011B9D4
extern int trapid;

// address: 0x800DA320
// size: 0x28
extern char ObjFileList[40];

// address: 0x8011B9D8
extern int trapdir;

// address: 0x8011B9DC
extern int leverid;

// address: 0x8011B9C0
extern int numobjfiles;

// address: 0x800D8BA8
// size: 0x20
extern int bxadd[8];

// address: 0x800D8BC8
// size: 0x20
extern int byadd[8];

// address: 0x800D8C1C
// size: 0x1A
extern char shrineavail[26];

// address: 0x800D8BE8
// size: 0x34
extern unsigned short shrinestrs[26];

// address: 0x800D8C38
// size: 0x12
extern unsigned short StoryBookName[9];

// address: 0x8011B9C4
extern int myscale;

// address: 0x8011B9F0
extern unsigned char gbValidSaveFile;

// address: 0x8011B9EC
extern bool DoLoadedChar;

// address: 0x800DA538
// size: 0x33D0
extern struct PlayerStruct plr[2];

// address: 0x8011BA08
extern int myplr;

// address: 0x8011BA0C
extern unsigned char deathflag;

// address: 0x8011C878
// size: 0x2
static char deathdelay2[2];

// address: 0x8011BA0D
extern char light_rad;

// address: 0x8011BA10
// size: 0x8
extern int PlayerDeathCount[2];

// address: 0x8011BA18
// size: 0x8
extern int PlayerEar[2];

// address: 0x800DA438
// size: 0x30
extern int MaxStats[4][3];

// address: 0x8011BA00
static int PlrStructSize;

// address: 0x8011BA04
static int ItemStructSize;

// address: 0x800DA348
// size: 0x24
extern int plrxoff[9];

// address: 0x800DA36C
// size: 0x24
extern int plryoff[9];

// address: 0x800DA390
// size: 0x24
extern int plrxoff2[9];

// address: 0x800DA3B4
// size: 0x24
extern int plryoff2[9];

// address: 0x800DA3D8
// size: 0x21
extern char PlrGFXAnimLens[11][3];

// address: 0x800DA3FC
// size: 0xC
extern int StrengthTbl[3];

// address: 0x800DA408
// size: 0xC
extern int MagicTbl[3];

// address: 0x800DA414
// size: 0xC
extern int DexterityTbl[3];

// address: 0x800DA420
// size: 0xC
extern int VitalityTbl[3];

// address: 0x800DA42C
// size: 0xC
extern int ToBlkTbl[3];

// address: 0x800DA468
// size: 0xCC
extern long ExpLvlsTbl[51];

// address: 0x800DDA40
// size: 0x140
extern struct QuestStruct quests[16];

// address: 0x8011BA50
extern unsigned char *pQLogCel;

// address: 0x8011BA54
extern int ReturnLvlX;

// address: 0x8011BA58
extern int ReturnLvlY;

// address: 0x8011BA5C
extern int ReturnLvl;

// address: 0x8011BA60
extern int ReturnLvlT;

// address: 0x8011BA64
extern unsigned char rporttest;

// address: 0x8011BA68
extern int qline;

// address: 0x8011BA6C
extern int numqlines;

// address: 0x8011BA70
extern int qtopline;

// address: 0x8012EDF8
// size: 0x40
static int qlist[16];

// address: 0x8011C87C
// size: 0x8
static struct RECT QSRect;

// address: 0x8011BA29
extern unsigned char questlog;

// address: 0x800DD908
// size: 0x100
extern struct QuestData questlist[16];

// address: 0x8011BA2C
extern int ALLQUESTS;

// address: 0x800DDA1C
// size: 0xC
extern int QuestGroup1[3];

// address: 0x800DDA28
// size: 0xC
extern int QuestGroup2[3];

// address: 0x800DDA34
// size: 0xC
extern int QuestGroup3[3];

// address: 0x8011BA30
// size: 0x8
extern int QuestGroup4[2];

// address: 0x8011BA48
extern bool WaterDone;

// address: 0x800DDA08
// size: 0x14
extern int questtrigstr[5];

// address: 0x8011BA38
static int QS_PX;

// address: 0x8011BA3C
static int QS_PY;

// address: 0x8011BA40
static int QS_PW;

// address: 0x8011BA44
static int QS_PH;

// address: 0x8012EE38
// size: 0x10
static struct Dialog QSBack;

// address: 0x8011BA4C
static int qtoffset;

// address: 0x800DDB80
// size: 0x784
extern struct SpellData spelldata[37];

// address: 0x8011BAB4
extern int StorePlrNo;

// address: 0x800DE428
// size: 0x10E0
extern struct ItemStruct _smithitem[20][2];

// address: 0x800DF508
// size: 0x510
extern struct ItemStruct _premiumitem[6][2];

// address: 0x8011BAB8
// size: 0x8
extern int _numpremium[2];

// address: 0x8011BAC0
// size: 0x8
extern int _premiumlevel[2];

// address: 0x800DFA18
// size: 0x10E0
extern struct ItemStruct _witchitem[20][2];

// address: 0x8011BAC8
// size: 0x8
extern int _NoWitchItems[2];

// address: 0x8011BAD0
// size: 0x8
extern int _WitchIdxOfs[2];

// address: 0x800E0AF8
// size: 0xD8
extern struct ItemStruct _boyitem[2];

// address: 0x8011BAD8
// size: 0x8
extern int _boylevel[2];

// address: 0x800E0BD0
// size: 0x10E0
extern struct ItemStruct _healitem[20][2];

// address: 0x800E1CB0
// size: 0xD8
extern struct ItemStruct _golditem[2];

// address: 0x8011BAE0
extern char stextflag;

// address: 0x8011BAE1
extern char stextsize;

// address: 0x8011BAE2
extern unsigned char stextscrl;

// address: 0x8011C884
static int stextsel;

// address: 0x8011C888
static int stextlhold;

// address: 0x8011C88C
static int stextshold;

// address: 0x8011C890
static int stextvhold;

// address: 0x8011C894
static int stextsval;

// address: 0x8011C898
static int stextsmax;

// address: 0x8011C89C
static int stextup;

// address: 0x8011C8A0
static int stextdown;

// address: 0x8011C8A4
static char stextscrlubtn;

// address: 0x8011C8A5
static char stextscrldbtn;

// address: 0x8011C8A6
static char SItemListFlag;

// address: 0x8012EE48
// size: 0xD20
static struct STextStruct stext[24];

// address: 0x8011C8A8
static int storenumh;

// address: 0x8011C8AC
static int gossipstart;

// address: 0x8011C8B0
static int gossipend;

// address: 0x8011C8B4
// size: 0x8
static struct RECT StoreBackRect;

// address: 0x8011C8BC
// size: 0x8
static struct RECT StoreBackRectClipper;

// address: 0x8011BAE4
extern int SmithItemCount;

// address: 0x800E1D88
// size: 0x1440
extern struct ItemStruct storehold[48];

// address: 0x800E31C8
// size: 0x30
extern char storehidx[48];

// address: 0x8011BAE8
extern int SellIdx;

// address: 0x8011C8C4
static int talker;

// address: 0x8011BAEC
extern int SWrapCount;

// address: 0x8011BA98
extern unsigned char *pSTextBoxCels;

// address: 0x8011BA9C
extern unsigned char *pSTextSlidCels;

// address: 0x8011BAA4
extern int *SStringY;

// address: 0x800DE304
// size: 0x10
extern struct Dialog SBack;

// address: 0x8011BAA0
extern char WStaffFlag;

// address: 0x8011BAA1
extern char WFlag;

// address: 0x800DE314
// size: 0x50
extern int SStringYNorm[20];

// address: 0x800DE364
// size: 0x50
extern int SStringYBuy0[20];

// address: 0x800DE3B4
// size: 0x50
extern int SStringYBuy1[20];

// address: 0x800DE404
// size: 0x24
extern int talkname[9];

// address: 0x8011BAB3
extern unsigned char InStoreFlag;

// address: 0x80117C20
// size: 0xC9C
extern struct TextDataStruct alltext[269];

// address: 0x8011BAFC
extern unsigned long gdwAllTextEntries;

// address: 0x8011C8C8
static unsigned char *P3Tiles;

// address: 0x8011BB0C
extern int tile;

// address: 0x8011BB74
// size: 0x2
extern unsigned char _trigflag[2];

// address: 0x800E33CC
// size: 0x50
extern struct TriggerStruct trigs[5];

// address: 0x8011BB78
extern int numtrigs;

// address: 0x8011BB7C
// size: 0x3
extern unsigned char townwarps[3];

// address: 0x8011BB80
extern int TWarpFrom;

// address: 0x800E341C
// size: 0x200
extern short TrigList[64][4];

// address: 0x800E361C
// size: 0x280
extern struct BLOCK BlockList[160];

// address: 0x8011BB48
extern bool FRIGFLAG;

// address: 0x800E31F8
// size: 0x16
extern short TownDownList[11];

// address: 0x800E3210
// size: 0x1A
extern short TownWarp1List[13];

// address: 0x800E322C
// size: 0x2E
extern short TownWarp2List[23];

// address: 0x800E325C
// size: 0x22
extern short TownWarp3List[17];

// address: 0x800E3280
// size: 0x18
extern short L1UpList[12];

// address: 0x800E3298
// size: 0x14
extern short L1DownList[10];

// address: 0x8011BB1C
// size: 0x6
extern short L2UpList[3];

// address: 0x800E32AC
// size: 0xA
extern short L2DownList[5];

// address: 0x8011BB24
// size: 0x6
extern short L2TWarpUpList[3];

// address: 0x800E32B8
// size: 0x1E
extern short L3UpList[15];

// address: 0x800E32D8
// size: 0x12
extern short L3DownList[9];

// address: 0x800E32EC
// size: 0x1C
extern short L3TWarpUpList[14];

// address: 0x8011BB2C
// size: 0x8
extern short L4UpList[4];

// address: 0x800E3308
// size: 0xC
extern short L4DownList[6];

// address: 0x8011BB34
// size: 0x8
extern short L4TWarpUpList[4];

// address: 0x800E3314
// size: 0x42
extern short L4PentaList[33];

// address: 0x800E3358
// size: 0x52
extern short L1BlockList[41];

// address: 0x800E33AC
// size: 0x12
extern short L2BlockList[9];

// address: 0x800E33C0
// size: 0xA
extern short L3BlockList[5];

// address: 0x8011BB3C
// size: 0x4
extern short L4BlockList[2];

// address: 0x8011BB40
static int NoBlocks;

// address: 0x8011BB44
static short *levlist;

// address: 0x8011BB4C
static int FRIGCheat;

// address: 0x8011BB50
static int FRIGTime;

// address: 0x8011BB54
static int FRIGState;

// address: 0x8011BB58
static int FRIGFlip;

// address: 0x8011BB5C
static int FRIGFlipit;

// address: 0x8011BB60
static int FRIGFirst;

// address: 0x8011BB64
extern int FRIGX;

// address: 0x8011BB68
extern int FRIGY;

// address: 0x8011BB6C
extern int FRIGZ;

// address: 0x8011BB70
extern int fot;

// address: 0x8011BB99
extern unsigned char gbSndInited;

// address: 0x8011BB9C
extern long sglMasterVolume;

// address: 0x8011BBA0
extern long sglMusicVolume;

// address: 0x8011BBA4
extern long sglSoundVolume;

// address: 0x8011BBA8
extern long sglSpeechVolume;

// address: 0x8011BBAC
extern int sgnMusicTrack;

// address: 0x8011BBB0
extern bool MONO;

// address: 0x8011BB9A
extern unsigned char gbDupSounds;

// address: 0x8011BBB4
// size: 0x84
extern struct SFXHDR *sghMusic;

// address: 0x800E389C
// size: 0xC
extern unsigned short sgszMusicTracks[6];

// address: 0x8011BBD4
// size: 0x8
extern int _pcurr_inv[2];

// address: 0x800E38A8
// size: 0x3C
extern struct found_objects _pfind_list[10][2];

// address: 0x8011BBDC
// size: 0x2
extern char _pfind_index[2];

// address: 0x8011BBDE
extern unsigned char automapmoved;

// address: 0x8011BBC1
extern unsigned char flyflag;

// address: 0x8011BBC4
// size: 0x2
extern unsigned char _SpdBeltSelFlag[2];

// address: 0x8011BBD0
extern bool ignore_buttons;

// address: 0x8012FB68
// size: 0xD4
static struct GamePad GPad1;

// address: 0x8012FC48
// size: 0xD4
static struct GamePad GPad2;

// address: 0x8011BBC8
static int HappyManFlag;

// address: 0x8011BBCC
static char seen_combo;

// address: 0x8011C8CC
static unsigned long (*CurrentProc)();

// address: 0x80118BD8
// size: 0x58
static struct MESSAGE_STR AllMsgs[11];

// address: 0x8011BC18
extern int NumOfStrings;

// address: 0x8011BBF4
extern char **TextPtr;

// address: 0x8011BBEC
// size: 0x4
extern enum LANG_TYPE LanguageType;

// address: 0x8011BBF0
extern long hndText;

// address: 0x8011BBF8
// size: 0x4
extern enum LANG_DB_NO LangDbNo;

// address: 0x8011BC28
// size: 0x70
extern struct TextDat *MissDat;

// address: 0x800E39C4
// size: 0x10
extern char MlTab[16];

// address: 0x800E39D4
// size: 0x10
extern char QlTab[16];

// address: 0x8012FD20
// size: 0x60
static struct CINDER Cinders[16];

// address: 0x800E39E4
// size: 0x188
extern struct POLY_FT4 *(*ObjPrintFuncs[98])();

// address: 0x8011BC44
static int lasttick;

// address: 0x8011BC48
static bool FireInit;

// address: 0x8011BC4C
static bool FirstFire;

// address: 0x800E3B6C
// size: 0x40
extern struct DoorOff DoorOffsets[4][4];

// address: 0x8011BC50
extern int lox;

// address: 0x8011BC54
extern int loy;

// address: 0x8011BC58
extern int lot;

// address: 0x8011BC65
static unsigned char sgbFadedIn;

// address: 0x8011BC66
static unsigned char screenbright;

// address: 0x8011BC68
static int faderate;

// address: 0x8011BC6C
static bool fading;

// address: 0x8011BC70
static int FADE_OT;

// address: 0x8011BC7C
// size: 0x8
static unsigned char FadeCoords[8];

// address: 0x8011BC84
// size: 0x8
static unsigned char FadeCoords2[8];

// address: 0x8011BC74
extern int st;

// address: 0x8011BC78
extern int mode;

// address: 0x800E3BAC
// size: 0x10
extern unsigned char AmLTab[16];

// address: 0x800E3BBC
// size: 0x10
extern unsigned char AmRTab[16];

// address: 0x800E3BEC
// size: 0x30
extern struct PortalStruct portal[4];

// address: 0x8011C8D0
static int portalindex;

// address: 0x800E3BCC
// size: 0x10
static int WarpDropX[4];

// address: 0x800E3BDC
// size: 0x10
static int WarpDropY[4];

// address: 0x800E3C1C
// size: 0x78
extern char MyVerString[120];

// address: 0x8011BE14
extern int Year;

// address: 0x8011BE18
extern int Day;

// address: 0x8011BE34
extern bool iscflag;

// address: 0x8011BE44
extern short *dPiece;

// address: 0x8011C8D4
static unsigned char *tbuff;

// address: 0x800E3CC0
// size: 0x300
extern unsigned char IconBuffer[768];

// address: 0x800E3C94
// size: 0xB
static char DiabloStr[11];

// address: 0x800E3CA0
// size: 0x13
static char SaveCharName[19];

// address: 0x800E3CB4
// size: 0xB
static char OptSaveName[11];

// address: 0x8011BE5A
extern unsigned char ADirtyFlagThatGaryWillLove;

// address: 0x8011BE5C
extern int DirtyVidx;

// address: 0x8011BE60
extern int DirtyVidY;

// address: 0x8011C8D8
static unsigned char HR1;

// address: 0x8011C8D9
static unsigned char HR2;

// address: 0x8011C8DA
static unsigned char HR3;

// address: 0x8011C8DB
static unsigned char VR1;

// address: 0x8011C8DC
static unsigned char VR2;

// address: 0x8011C8DD
static unsigned char VR3;

// address: 0x8011BEC8
// size: 0x18
extern struct NODE *pHallList;

// address: 0x8011BECC
extern int nRoomCnt;

// address: 0x8011BED0
extern int nSx1;

// address: 0x8011BED4
extern int nSy1;

// address: 0x8011BED8
extern int nSx2;

// address: 0x8011BEDC
extern int nSy2;

// address: 0x8011BE7C
extern int Area_Min;

// address: 0x8011BE80
extern int Room_Max;

// address: 0x8011BE84
extern int Room_Min;

// address: 0x8011BE88
// size: 0x6
extern unsigned char BIG3[6];

// address: 0x8011BE90
// size: 0x6
extern unsigned char BIG4[6];

// address: 0x8011BE98
// size: 0x6
extern unsigned char BIG6[6];

// address: 0x8011BEA0
// size: 0x6
extern unsigned char BIG7[6];

// address: 0x8011BEA8
// size: 0x4
extern unsigned char RUINS1[4];

// address: 0x8011BEAC
// size: 0x4
extern unsigned char RUINS2[4];

// address: 0x8011BEB0
// size: 0x4
extern unsigned char RUINS3[4];

// address: 0x8011BEB4
// size: 0x4
extern unsigned char RUINS4[4];

// address: 0x8011BEB8
// size: 0x4
extern unsigned char RUINS5[4];

// address: 0x8011BEBC
// size: 0x4
extern unsigned char RUINS6[4];

// address: 0x8011BEC0
// size: 0x4
extern unsigned char RUINS7[4];

// address: 0x8011BEC4
extern int myk;

// address: 0x8011C8E0
static int abyssx;

// address: 0x8011C8E4
static unsigned char lavapool;

// address: 0x8011BF68
extern int lockoutcnt;

// address: 0x8011BEEC
// size: 0x6
static unsigned char L3TITE12[6];

// address: 0x8011BEF4
// size: 0x6
static unsigned char L3TITE13[6];

// address: 0x8011BEFC
// size: 0x6
static unsigned char L3CREV1[6];

// address: 0x8011BF04
// size: 0x6
static unsigned char L3CREV2[6];

// address: 0x8011BF0C
// size: 0x6
static unsigned char L3CREV3[6];

// address: 0x8011BF14
// size: 0x6
static unsigned char L3CREV4[6];

// address: 0x8011BF1C
// size: 0x6
static unsigned char L3CREV5[6];

// address: 0x8011BF24
// size: 0x6
static unsigned char L3CREV6[6];

// address: 0x8011BF2C
// size: 0x6
static unsigned char L3CREV7[6];

// address: 0x8011BF34
// size: 0x6
static unsigned char L3CREV8[6];

// address: 0x8011BF3C
// size: 0x6
static unsigned char L3CREV9[6];

// address: 0x8011BF44
// size: 0x6
static unsigned char L3CREV10[6];

// address: 0x8011BF4C
// size: 0x6
static unsigned char L3CREV11[6];

// address: 0x8011BF54
// size: 0x4
static unsigned char L3XTRA1[4];

// address: 0x8011BF58
// size: 0x4
static unsigned char L3XTRA2[4];

// address: 0x8011BF5C
// size: 0x4
static unsigned char L3XTRA3[4];

// address: 0x8011BF60
// size: 0x4
static unsigned char L3XTRA4[4];

// address: 0x8011BF64
// size: 0x4
static unsigned char L3XTRA5[4];

// address: 0x8011BF7C
extern int diabquad1x;

// address: 0x8011BF80
extern int diabquad2x;

// address: 0x8011BF84
extern int diabquad3x;

// address: 0x8011BF88
extern int diabquad4x;

// address: 0x8011BF8C
extern int diabquad1y;

// address: 0x8011BF90
extern int diabquad2y;

// address: 0x8011BF94
extern int diabquad3y;

// address: 0x8011BF98
extern int diabquad4y;

// address: 0x8011BF9C
extern int SP4x1;

// address: 0x8011BFA0
extern int SP4y1;

// address: 0x8011BFA4
extern int SP4x2;

// address: 0x8011BFA8
extern int SP4y2;

// address: 0x8011BFAC
extern int l4holdx;

// address: 0x8011BFB0
extern int l4holdy;

// address: 0x8011C8E8
static unsigned char *lpSetPiece1;

// address: 0x8011C8EC
static unsigned char *lpSetPiece2;

// address: 0x8011C8F0
static unsigned char *lpSetPiece3;

// address: 0x8011C8F4
static unsigned char *lpSetPiece4;

// address: 0x8011C8F8
static unsigned char *lppSetPiece2;

// address: 0x8011C8FC
static unsigned char *lppSetPiece3;

// address: 0x8011C900
static unsigned char *lppSetPiece4;

// address: 0x8011BF78
static int recurs;

// address: 0x8011BFC0
// size: 0x8
static unsigned char SkelKingTrans1[8];

// address: 0x8011BFC8
// size: 0x8
static unsigned char SkelKingTrans2[8];

// address: 0x800E3FC0
// size: 0x14
static unsigned char SkelKingTrans3[20];

// address: 0x800E3FD4
// size: 0x1C
static unsigned char SkelKingTrans4[28];

// address: 0x800E3FF0
// size: 0x14
static unsigned char SkelChamTrans1[20];

// address: 0x8011BFD0
// size: 0x8
static unsigned char SkelChamTrans2[8];

// address: 0x800E4004
// size: 0x24
static unsigned char SkelChamTrans3[36];

// address: 0x8011C0BC
static bool DoUiForChooseMonster;

// address: 0x800E4028
// size: 0x88
static char *MgToText[34];

// address: 0x800E40B0
// size: 0x12
extern unsigned short StoryText[3][3];

// address: 0x800E40C4
// size: 0x1200
extern unsigned short dungeon[48][48];

// address: 0x800E52C4
// size: 0x640
extern unsigned char pdungeon[40][40];

// address: 0x8011C0E4
extern int setpc_x;

// address: 0x8011C0E8
extern int setpc_y;

// address: 0x8011C0EC
extern int setpc_w;

// address: 0x8011C0F0
extern int setpc_h;

// address: 0x8011C0F4
extern unsigned char setloadflag;

// address: 0x800E5904
// size: 0x801
extern unsigned char nBlockTable[2049];

// address: 0x800E6108
// size: 0x801
extern unsigned char nSolidTable[2049];

// address: 0x800E690C
// size: 0x801
extern unsigned char nMissileTable[2049];

// address: 0x800E7110
// size: 0x801
extern unsigned char nTrapTable[2049];

// address: 0x8011C0F8
extern int dminx;

// address: 0x8011C0FC
extern int dminy;

// address: 0x8011C100
extern int dmaxx;

// address: 0x8011C104
extern int dmaxy;

// address: 0x8011C108
extern int gnDifficulty;

// address: 0x8011C10C
extern unsigned char currlevel;

// address: 0x8011C10D
extern unsigned char leveltype;

// address: 0x8011C10E
extern unsigned char setlevel;

// address: 0x8011C10F
extern unsigned char setlvlnum;

// address: 0x8011C110
extern unsigned char setlvltype;

// address: 0x8011C114
extern int ViewX;

// address: 0x8011C118
extern int ViewY;

// address: 0x8011C11C
extern int ViewDX;

// address: 0x8011C120
extern int ViewDY;

// address: 0x8011C124
extern int ViewBX;

// address: 0x8011C128
extern int ViewBY;

// address: 0x800E7914
// size: 0x14
extern struct ScrollStruct ScrollInfo;

// address: 0x8011C12C
extern int LvlViewX;

// address: 0x8011C130
extern int LvlViewY;

// address: 0x8011C134
extern int btmbx;

// address: 0x8011C138
extern int btmby;

// address: 0x8011C13C
extern int btmdx;

// address: 0x8011C140
extern int btmdy;

// address: 0x8011C144
extern int MicroTileLen;

// address: 0x8011C148
extern char TransVal;

// address: 0x800E7928
// size: 0x100
extern unsigned char TransList[256];

// address: 0x8011C14C
extern int themeCount;

// address: 0x800E7A28
// size: 0x18800
extern struct map_info dung_map[112][112];

// address: 0x80100228
// size: 0xC40
extern unsigned char dung_map_r[56][56];

// address: 0x80100E68
// size: 0xC40
extern unsigned char dung_map_g[56][56];

// address: 0x80101AA8
// size: 0xC40
extern unsigned char dung_map_b[56][56];

// address: 0x801026E8
// size: 0x40
extern int nSxy[16];

// address: 0x8011C0D8
extern unsigned char *mydflags;

// address: 0x8011C0DC
extern unsigned char *pSetPiece;

// address: 0x8011C0E0
extern int DungSize;

// address: 0x80102848
// size: 0x190
extern struct ThemeStruct theme[50];

// address: 0x8011C18C
extern int numthemes;

// address: 0x8011C190
extern int zharlib;

// address: 0x8011C194
extern unsigned char armorFlag;

// address: 0x8011C195
extern unsigned char bCrossFlag;

// address: 0x8011C196
extern unsigned char weaponFlag;

// address: 0x8011C198
extern int themex;

// address: 0x8011C19C
extern int themey;

// address: 0x8011C1A0
extern int themeVar1;

// address: 0x8011C1A4
extern unsigned char bFountainFlag;

// address: 0x8011C1A5
extern unsigned char cauldronFlag;

// address: 0x8011C1A6
extern unsigned char mFountainFlag;

// address: 0x8011C1A7
extern unsigned char pFountainFlag;

// address: 0x8011C1A8
extern unsigned char tFountainFlag;

// address: 0x8011C1A9
extern unsigned char treasureFlag;

// address: 0x8011C1AC
// size: 0x4
extern unsigned char ThemeGoodIn[4];

// address: 0x80102728
// size: 0x10
extern int ThemeGood[4];

// address: 0x80102738
// size: 0x64
extern int trm5x[25];

// address: 0x8010279C
// size: 0x64
extern int trm5y[25];

// address: 0x80102800
// size: 0x24
extern int trm3x[9];

// address: 0x80102824
// size: 0x24
extern int trm3y[9];

// address: 0x8011C200
// size: 0x70
extern struct TextDat *AutoMapTData;

// address: 0x8012FD80
// size: 0x200
static unsigned char AmpBuffer[512];

// address: 0x8011C288
extern int nummissiles;

// address: 0x80102A60
// size: 0xFA
extern short missileactive[125];

// address: 0x80102B5C
// size: 0xFA
extern short missileavail[125];

// address: 0x8011C28C
extern unsigned char MissilePreFlag;

// address: 0x80102C58
// size: 0x251C
extern struct MissileStruct missile[125];

// address: 0x8011C28D
extern unsigned char ManashieldFlag;

// address: 0x8011C28E
extern unsigned char ManashieldFlag2;

// address: 0x80105174
// size: 0x80
extern char dMissArray[4][32];

// address: 0x801029D8
// size: 0x20
extern int XDirAdd[8];

// address: 0x801029F8
// size: 0x20
extern int YDirAdd[8];

// address: 0x8011C255
extern unsigned char fadetor;

// address: 0x8011C256
extern unsigned char fadetog;

// address: 0x8011C257
extern unsigned char fadetob;

// address: 0x80102A18
// size: 0x10
extern unsigned char ValueTable[16];

// address: 0x80102A28
// size: 0x36
extern unsigned char StringTable[9][6];

// address: 0x80105394
// size: 0x4D30
extern struct MonsterStruct monster[190];

// address: 0x8011C2CC
extern long nummonsters;

// address: 0x8010A0C4
// size: 0x17C
extern short monstactive[190];

// address: 0x8010A240
// size: 0x17C
extern short monstkills[190];

// address: 0x8010A3BC
// size: 0x1C0
extern struct CMonster Monsters[16];

// address: 0x8011C2D0
extern long monstimgtot;

// address: 0x8011C2D4
extern unsigned char totalmonsters;

// address: 0x8011C2D8
extern int uniquetrans;

// address: 0x8011C904
static unsigned char sgbSaveSoundOn;

// address: 0x8011C2A8
// size: 0x8
extern char offset_x[8];

// address: 0x8011C2B0
// size: 0x8
extern char offset_y[8];

// address: 0x8011C29C
extern int nummtypes;

// address: 0x8011C2A0
// size: 0x7
extern char animletter[7];

// address: 0x801051F4
// size: 0x120
extern int MWVel[3][24];

// address: 0x80105314
// size: 0x80
extern void (*AiProc[32])();

// address: 0x8010A794
// size: 0x308
extern int UniqTransPals[194];

// address: 0x8010AB9C
// size: 0x1A7C
extern struct MonsterData monsterdata[113];

// address: 0x8010C618
// size: 0x80
extern char MonstConvTbl[128];

// address: 0x8010C698
// size: 0x70
extern char MonstAvailTbl[112];

// address: 0x8010C708
// size: 0x900
extern struct UniqMonstStruct UniqMonst[96];

// address: 0x8010A57C
// size: 0x218
extern int TransPals[134];

// address: 0x8010AA9C
// size: 0x100
extern struct STONEPAL StonePals[32];

// address: 0x8011C32C
extern unsigned char invflag;

// address: 0x8011C32D
extern unsigned char drawsbarflag;

// address: 0x8011C330
extern int InvBackY;

// address: 0x8011C334
extern int InvCursPos;

// address: 0x8011C338
extern int InvPageNo;

// address: 0x8011C33C
extern int InvPageFlag;

// address: 0x8010D680
// size: 0x49
extern unsigned char InvSlotTable[73];

// address: 0x8011C340
extern int InvBackAY;

// address: 0x8011C344
extern int InvSel;

// address: 0x8011C348
extern int ItemW;

// address: 0x8011C34C
extern int ItemH;

// address: 0x8011C350
extern int ItemNo;

// address: 0x8011C354
// size: 0x8
extern struct RECT BRect;

// address: 0x8011C308
// size: 0x70
extern struct TextDat *InvPanelTData;

// address: 0x8011C30C
// size: 0x70
extern struct TextDat *InvGfxTData;

// address: 0x8010D278
// size: 0x2A0
extern int InvGfxTable[168];

// address: 0x8011C2F4
static int clipit;

// address: 0x8011C2F8
static int backot;

// address: 0x8011C2FC
static int slotot;

// address: 0x8011C300
static int slotbackot;

// address: 0x8011C304
static int itemot;

// address: 0x8010D008
// size: 0x28
extern int AP2x2Tbl[10];

// address: 0x8010D030
// size: 0x248
extern struct InvXY InvRect[73];

// address: 0x8010D518
// size: 0xB4
extern unsigned char InvItemWidth[180];

// address: 0x8010D5CC
// size: 0xB4
extern unsigned char InvItemHeight[180];

// address: 0x8011C310
extern int CursGlow;

// address: 0x8011C314
extern int CursGlowDx;

// address: 0x8011C324
static bool InvOn;

// address: 0x8011C328
static unsigned long sgdwLastTime;

// address: 0x8011C37B
extern unsigned char automapflag;

// address: 0x8010D6E4
// size: 0xC8
extern unsigned char automapview[40][5];

// address: 0x8010D7AC
// size: 0x400
extern unsigned short automaptype[512];

// address: 0x8011C37C
extern int AutoMapX;

// address: 0x8011C380
extern int AutoMapY;

// address: 0x8011C384
extern int AutoMapXOfs;

// address: 0x8011C388
extern int AutoMapYOfs;

// address: 0x8011C38C
extern int AMPlayerX;

// address: 0x8011C390
extern int AMPlayerY;

// address: 0x8011C394
// size: 0x8
extern int AMPx[2];

// address: 0x8011C39C
// size: 0x8
extern int AMPy[2];

// address: 0x8011C368
extern int AutoMapScale;

// address: 0x8011C36C
static int AutoMapOt;

// address: 0x8010D6CC
// size: 0x18
static int SetLevelName[6];

// address: 0x8011C98C
// size: 0x5C
static struct TASK *ActiveTasks;

// address: 0x8011C990
// size: 0x5C
static struct TASK *CurrentTask;

// address: 0x8011C994
// size: 0x5C
static struct TASK *T;

// address: 0x8011C998
static unsigned long MemTypeForTasker;

// address: 0x801325A0
// size: 0x30
static int SchEnv[12];

// address: 0x8011C99C
static unsigned long ExecId;

// address: 0x8011C9A0
static unsigned long ExecMask;

// address: 0x8011C9A4
static int TasksActive;

// address: 0x8011C9A8
static void (*EpiFunc)();

// address: 0x8011C9AC
static void (*ProFunc)();

// address: 0x8011C9B0
static unsigned long EpiProId;

// address: 0x8011C9B4
static unsigned long EpiProMask;

// address: 0x8011C9B8
static void (*DoTasksPrologue)();

// address: 0x8011C9BC
static void (*DoTasksEpilogue)();

// address: 0x8011C9C0
static void (*StackFloodCallback)();

// address: 0x8011C9C4
static unsigned char ExtraStackProtection;

// address: 0x8011C9C8
static int ExtraStackSizeLongs;

// address: 0x8011CA60
extern unsigned long GazTick;

// address: 0x801351E8
// size: 0x18
extern unsigned long RndTabs[6];

// address: 0x800B635C
// size: 0x18
extern unsigned long DefaultRnd[6];

// address: 0x8011CA88
extern void (*PollFunc)();

// address: 0x8011CA6C
extern void (*MsgFunc)();

// address: 0x8011CAB8
extern void (*ErrorFunc)();

// address: 0x8011CA74
extern void *LastPtr;

// address: 0x800B6394
// size: 0x8
extern struct MEM_INFO WorkMemInfo;

// address: 0x8011C9CC
// size: 0x28
static struct MEM_INIT_INFO *MemInitBlocks;

// address: 0x801325D0
// size: 0x15E0
static struct MEM_HDR MemHdrBlocks[200];

// address: 0x8011C9D0
// size: 0x1C
static struct MEM_HDR *FreeBlocks;

// address: 0x8011C9D4
// size: 0x4
static enum GAL_ERROR_CODE LastError;

// address: 0x8011C9D8
static int TimeStamp;

// address: 0x8011C9DC
static unsigned char FullErrorChecking;

// address: 0x8011C9E0
static unsigned long LastAttemptedAlloc;

// address: 0x8011C9E4
static unsigned long LastDeallocedBlock;

// address: 0x8011C9E8
// size: 0x4
static enum GAL_VERB_LEV VerbLev;

// address: 0x8011C9EC
static int NumOfFreeHdrs;

// address: 0x8011C9F0
static unsigned long LastTypeAlloced;

// address: 0x8011C9F4
static void (*AllocFilter)();

// address: 0x800B639C
// size: 0x28
extern char *GalErrors[10];

// address: 0x800B63C4
// size: 0x28
extern struct MEM_INIT_INFO PhantomMem;

// address: 0x80133BB0
// size: 0x1380
static char buf[4992];

// address: 0x800B63EC
// size: 0x7
static char NULL_REP[7];

// address: 0x80083100
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8008311C
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x80083128
void Remove96__Fv() {
}


// address: 0x80083160
void AppMain() {
}


// address: 0x80083224
void MAIN_RestartGameTask__Fv() {
}


// address: 0x80083250
void GameTask__FP4TASK(struct TASK *T) {
	{
		{
			{
			}
		}
	}
}


// address: 0x8008335C
void MAIN_MainLoop__Fv() {
}


// address: 0x800833B0
void CheckMaxArgs__Fv() {
}


// address: 0x800833E4
unsigned char GPUQ_InitModule__Fv() {
}


// address: 0x800833F0
void GPUQ_FlushQ__Fv() {
	int f;
	struct LOAD_IMAGE_ARGS *Img;
	{
		{
			{
				{
					{
						{
							void *ImgMem;
							{
								{
									unsigned char GalRet;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80083564
void GPUQ_LoadImage__FP4RECTli(struct RECT *Rect, long ImgHandle, int Offset) {
	struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x80083618
void GPUQ_DiscardHandle__Fl(long hnd) {
	int f;
}


// address: 0x800836B8
void GPUQ_LoadClutAddr__FiiiPv(int X, int Y, int Cols, void *Addr) {
	struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x80083754
void GPUQ_MoveImage__FP4RECTii(struct RECT *R, int x, int y) {
	struct LOAD_IMAGE_ARGS *Args;
}


// address: 0x800837F4
unsigned char PRIM_Open__FiiiP10SCREEN_ENVUl(int Prims, int OtSize, int Depth, struct SCREEN_ENV *Scr, unsigned long MemType) {
	{
		{
			{
				{
					int f;
				}
			}
		}
	}
}


// address: 0x80083910
unsigned char InitPrimBuffer__FP11PRIM_BUFFERii(struct PRIM_BUFFER *Pr, int Prims, int OtSize) {
}


// address: 0x800839EC
void PRIM_Clip__FP4RECTi(struct RECT *R, int Depth) {
	struct DR_MODE *DrArea;
	struct RECT RealRect;
}


// address: 0x80083B14
unsigned char PRIM_GetCurrentScreen__Fv() {
}


// address: 0x80083B20
void PRIM_FullScreen__Fi(int Depth) {
	struct RECT R;
}


// address: 0x80083B5C
void PRIM_Flush__Fv() {
	struct PRIM_BUFFER *Pb;
	{
		{
		}
	}
}


// address: 0x80083D8C
unsigned long *PRIM_GetCurrentOtList__Fv() {
}


// address: 0x80083D98
void ClearPbOnDrawSync(struct PRIM_BUFFER *Pb) {
}


// address: 0x80083DD4
unsigned char ClearedYet__Fv() {
}


// address: 0x80083DE0
void PrimDrawSycnCallBack() {
}


// address: 0x80083E00
void SendDispEnv__Fv() {
}


// address: 0x80083E24
// size: 0x18
struct POLY_F4 *PRIM_GetNextPolyF4__Fv() {
	struct POLY_F4 *RetPage;
}


// address: 0x80083E3C
// size: 0x28
struct POLY_FT4 *PRIM_GetNextPolyFt4__Fv() {
	struct POLY_FT4 *RetPage;
}


// address: 0x80083E54
// size: 0x34
struct POLY_GT4 *PRIM_GetNextPolyGt4__Fv() {
	struct POLY_GT4 *RetPage;
}


// address: 0x80083E6C
// size: 0x24
struct POLY_G4 *PRIM_GetNextPolyG4__Fv() {
	struct POLY_G4 *RetPage;
}


// address: 0x80083E84
// size: 0x14
struct POLY_F3 *PRIM_GetNextPolyF3__Fv() {
	struct POLY_F3 *RetPage;
}


// address: 0x80083E9C
// size: 0xC
struct DR_MODE *PRIM_GetNextDrArea__Fv() {
	struct DR_MODE *RetPage;
}


// address: 0x80083EB4
bool ClipRect__FRC4RECTR4RECT(struct RECT *ClipRect, struct RECT *RectToClip) {
}


// address: 0x80083FC8
bool IsColiding__FRC4RECTT0(struct RECT *ClipRect, struct RECT *NewRect) {
}


// address: 0x80084030
void VID_AfterDisplay__Fv() {
}


// address: 0x80084058
void VID_ScrOn__Fv() {
}


// address: 0x80084094
void VID_DoThisNextSync__FPFv_v(void (*Func)()) {
}


// address: 0x800840EC
unsigned char VID_NextSyncRoutHasExecuted__Fv() {
}


// address: 0x800840F8
unsigned long VID_GetTick__Fv() {
}


// address: 0x80084104
void VID_DispEnvSend() {
	unsigned long OldGp;
}


// address: 0x8008415C
void VID_SetXYOff__Fii(int x, int y) {
}


// address: 0x8008416C
int VID_GetXOff__Fv() {
}


// address: 0x80084178
int VID_GetYOff__Fv() {
}


// address: 0x80084184
bool VID_IsDbuffer__Fv() {
}


// address: 0x80084190
void VID_SetDBuffer__Fb(bool DBuf) {
	{
		{
		}
	}
}


// address: 0x80084424
void MyFilter__FUlUlPCc(unsigned long MemType, unsigned long Size, char *Name) {
}


// address: 0x8008442C
void SlowMemMove__FPvT0Ul(void *Dest, void *Source, unsigned long size) {
}


// address: 0x8008444C
int GetTpY__FUs_addr_8008444C(unsigned short tpage) {
}


// address: 0x80084468
int GetTpX__FUs_addr_80084468(unsigned short tpage) {
}


// address: 0x80084474
// size: 0x14
struct FileIO *SYSI_GetFs__Fv() {
}


// address: 0x80084480
// size: 0x14
struct FileIO *SYSI_GetOverlayFs__Fv() {
}


// address: 0x8008448C
void SortOutFileSystem__Fv() {
	char *SearchPath;
}


// address: 0x800845BC
void MemCb__FlPvUlPCcii(long hnd, void *Addr, unsigned long Size, char *Name, int Users, int TimeStamp) {
}


// address: 0x800845E0
void Spanker__Fv() {
}


// address: 0x80084634
void GaryLiddon__Fv() {
}


// address: 0x8008463C
void ReadPad__Fi(int NoDeb) {
	struct CPad *DPad;
	int New;
	int cmem;
	int p1mema;
	int p1memb;
	int p2mema;
	int p2memb;
	int diffm;
}


// address: 0x800847C4
void DummyPoll__Fv() {
}


// address: 0x800847CC
void DaveOwens__Fv() {
}


// address: 0x800847D4
void DaveCentreStuff__Fv() {
	char TempStr[40];
}


// address: 0x8008491C
void PlaceStoreGold2__Fil(int myplr, long v) {
	int i;
	int ii;
	int xx;
	int yy;
	unsigned char done;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80084B44
void GivePlayerDosh__Fil(int PlayerNo, long cost) {
	int i;
}


// address: 0x80084CF8
int CalcItemVal__FP10ItemStruct(struct ItemStruct *Item) {
	int cost;
}


// address: 0x80084D54
void RemoveDupInvItem__Fii(int pnum, int iv) {
}


// address: 0x80084F44
long DetectDup__FP10ItemStructi(struct ItemStruct *Item, int PlayerNo) {
	long Value;
	struct ItemStruct *pi;
	int i;
	int InvItem;
	long DupSell;
	unsigned char Flag;
}


// address: 0x800851C0
void WinterSales__Fi(int PlayerNo) {
	int Value;
	int i;
	int InvItem;
	struct ItemStruct *pi;
	unsigned char Flag;
}


// address: 0x800853FC
int SpecUn__FP10ItemStruct(struct ItemStruct *pi) {
	int MrHappy;
}


// address: 0x800854D0
void EnableQuestItemsPleeeeeeeeeeeeeeeeeez__Fv() {
	int Uid;
}


// address: 0x80085518
void KeefDaFeef__Fi(int PlayerNo) {
	int i;
	int InvItem;
	struct ItemStruct *pi;
	unsigned char Flag;
}


// address: 0x800857F8
void ClearQuestFlags__Fv() {
}


// address: 0x80085818
unsigned short GetCur__C4CPad(struct CPad *this) {
}


// address: 0x80085840
unsigned char CheckActive__4CPad(struct CPad *this) {
}


// address: 0x8008584C
int GetTpY__FUs_addr_8008584C(unsigned short tpage) {
}


// address: 0x80085868
int GetTpX__FUs_addr_80085868(unsigned short tpage) {
}


// address: 0x80085874
void TimSwann__Fv() {
}


// address: 0x8008587C
// size: 0x14
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x800858CC
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x80085920
long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId) {
	int MemSize;
	long MyHnd;
	unsigned char *LoadAddr;
}


// address: 0x80085A90
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x80085AF4
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x80085B14
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x80085BF4
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x80085CB8
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x80085D1C
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x80085DF8
bool FindFile__6FileIOPCcPc(struct FileIO *this, char *Name, char *Buffa) {
	{
		{
			bool Success;
			{
				{
					char *Path;
				}
			}
		}
	}
}


// address: 0x80085F0C
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	char *Ptr;
	int Len;
}


// address: 0x80085FB4
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8008600C
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x80086064
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x80086078
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


// address: 0x800860B4
// size: 0x14
struct PCIO *__4PCIOUl(struct PCIO *this, unsigned long OurMemId) {
}


// address: 0x8008611C
void ___4PCIO(struct PCIO *this, int __in_chrg) {
}


// address: 0x80086174
bool FileExists__4PCIOPCc(struct PCIO *this, char *Name) {
	int FileHnd;
}


// address: 0x800861B8
bool LoReadFileAtAddr__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Dest, int Len) {
	int FileHnd;
}


// address: 0x8008627C
int GetFileLength__4PCIOPCc(struct PCIO *this, char *Name) {
	int FileHnd;
	int Len;
}


// address: 0x80086334
bool LoSave__4PCIOPCcPUci(struct PCIO *this, char *Name, unsigned char *Addr, int Len) {
	int FileHnd;
}


// address: 0x80086408
bool LoStreamFile__4PCIOPCciPFPUciib_bii(struct PCIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	int FileHnd;
	long hnd;
	unsigned char *Dest;
	int OrigSize;
	{
		int SizeToRead;
	}
}


// address: 0x80086618
// size: 0x4
struct SysObj *__6SysObj(struct SysObj *this) {
}


// address: 0x80086630
void *__nw__6SysObji(int Amount) {
}


// address: 0x8008665C
void *__nw__6SysObjiUl(int Amount, unsigned long RamID) {
	long hnd;
	void *RetAddr;
}


// address: 0x800866D8
void __dl__6SysObjPv(void *ptr) {
	struct SysObj *This;
}


// address: 0x80086744
// size: 0x14
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x80086780
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x800867D8
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	int FileHnd;
}


// address: 0x80086818
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	int FileHnd;
}


// address: 0x800868D8
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	int FileHnd;
	int Len;
}


// address: 0x8008698C
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	int FileHnd;
}


// address: 0x80086A34
bool LoStreamFile__5DatIOPCciPFPUciib_bii(struct DatIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	int FileHnd;
	long hnd;
	unsigned char *Dest;
	int OrigSize;
	{
		int SizeToRead;
	}
}


// address: 0x80086C40
// size: 0x14
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x80086C84
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x80086CDC
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80086D00
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x80086D9C
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80086DC0
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	int FileHnd;
}


// address: 0x80086E94
bool CD_GetCdlFILE__FPCcP7CdlFILE(char *Name, struct CdlFILE *RetFile) {
	char SearchBuffer[256];
}


// address: 0x80086EE4
bool LoStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	unsigned char *Dest;
	int OrigSize;
	unsigned long Pos;
	struct STRHDR *sh;
	int ah;
	unsigned char Count;
	int Lumpfile;
	{
		int SizeToRead;
		unsigned char *ptr;
	}
}


// address: 0x8008710C
bool LoAsyncStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	long hndText;
	unsigned char *Dest;
	int OrigSize;
	{
		int SizeToRead;
	}
}


// address: 0x8008725C
void BL_InitEAC__Fv() {
	long gunk1;
	long gunk2;
	void *ptr;
}


// address: 0x80087354
long BL_ReadFile__FPcUl(char *Name, unsigned long RamId) {
	int MemSize;
	char FileToLoad[50];
	long MyHnd;
	unsigned char *LoadAddr;
}


// address: 0x8008746C
long BL_AsyncReadFile__FPcUl(char *Name, unsigned long RamId) {
	int MemSize;
	char FileToLoad[50];
	long MyHnd;
	unsigned char *LoadAddr;
	int ah;
}


// address: 0x800875CC
void BL_LoadDirectory__Fv() {
	long BL_DirMHandle;
	char *AsyncAddr;
	unsigned char *BL_DirPtr;
	unsigned long DirId;
	unsigned long DirId2;
}


// address: 0x800876F4
void BL_LoadStreamDir__Fv() {
	long BL_DirMHandle;
	unsigned char *BL_DirPtr;
	unsigned long DirId;
	unsigned long DirId2;
	enum LANG_TYPE Lang;
}


// address: 0x80087984
// size: 0x14
struct STRHDR *BL_MakeFilePosTab__FPUcUl(unsigned char *BL_DirPtr, unsigned long NoStreamFiles) {
	struct STREAM *DirPtr;
	struct STRHDR *TFileTab;
	{
		{
			{
				int j;
			}
		}
	}
}


// address: 0x80087A6C
// size: 0x14
struct STRHDR *BL_FindStreamFile__FPcc(char *Name, char LumpID) {
	struct STRHDR *ptr;
	unsigned long NoFiles;
	int pos;
	int c;
	char fname[14];
	int size;
	{
		int i;
		{
			int i;
			{
				int s;
				int i;
				{
					{
					}
				}
			}
		}
	}
}


// address: 0x80087BF8
bool BL_FileExists__FPcc(char *Name, char LumpID) {
}


// address: 0x80087C34
int BL_FileLength__FPcc(char *Name, char LumpID) {
	struct STRHDR *ptr;
}


// address: 0x80087CB4
bool BL_LoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	struct STRHDR *sh;
	int ah;
}


// address: 0x80087E1C
bool BL_AsyncLoadDone__Fv() {
}


// address: 0x80087E28
void BL_WaitForAsyncFinish__Fv() {
}


// address: 0x80087E6C
void BL_AsyncLoadCallBack__Fi(int ah) {
	unsigned long OldGp;
}


// address: 0x80087ED0
long BL_LoadFileAsync__FPcc(char *Name, char LumpID) {
	struct STRHDR *sh;
	int Size;
	long MyHnd;
	unsigned char *LoadAddr;
}


// address: 0x80088084
bool BL_AsyncLoadFileAtAddr__FPcPUcc(char *Name, unsigned char *Dest, char LumpID) {
	struct STRHDR *sh;
}


// address: 0x800881A0
// size: 0x14
struct STRHDR *BL_OpenStreamFile__FPcc(char *Name, char LumpID) {
	struct STRHDR *sh;
}


// address: 0x800881CC
bool BL_CloseStreamFile__FP6STRHDR(struct STRHDR *StreamHDR) {
}


// address: 0x800881D4
int LZNP_Decode__FPUcT0(unsigned char *in, unsigned char *out) {
	int i;
	int j;
	unsigned int flags;
	unsigned char *OriginalOut;
}


// address: 0x800882A8
void *Tmalloc__Fi(int MemSize) {
	long MyHnd;
	void *Addr;
}


// address: 0x8008839C
void Tfree__FPv(void *Addr) {
}


// address: 0x8008844C
void InitTmalloc__Fv() {
}


// address: 0x80088474
void strupr__FPc(char *Buffa) {
	char *TempBuf;
	char TempChar;
}


// address: 0x800884C8
void PauseTask__FP4TASK(struct TASK *T) {
	{
		struct CTempPauseMessage Cpm;
	}
}


// address: 0x80088518
int GetPausePad__Fv() {
	bool Done;
	int PadVal;
	{
		{
			{
				{
					int f;
					{
					}
				}
			}
		}
	}
}


// address: 0x80088640
bool TryPadForPause__Fi(int PadNum) {
}


// address: 0x8008866C
void DoPause__14CPauseMessagesi(struct CPauseMessages *this, int nPadNum) {
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8008887C
bool DoPausedMessage__14CPauseMessages(struct CPauseMessages *this) {
	bool RetVal;
	bool Done;
	{
	}
}


// address: 0x800889B4
int DoQuitMessage__14CPauseMessages(struct CPauseMessages *this) {
	int RetVal;
	bool Done;
	int Menu;
	{
		unsigned short PadVal;
	}
}


// address: 0x80088AD4
bool AreYouSureMessage__14CPauseMessages(struct CPauseMessages *this) {
	bool RetVal;
	bool Done;
	int Menu;
	{
		unsigned short PadVal;
	}
}


// address: 0x80088BF4
bool PA_SetPauseOk__Fb(bool NewPause) {
	bool Ret;
}


// address: 0x80088C04
bool PA_GetPauseOk__Fv() {
}


// address: 0x80088C10
void MY_PausePrint__17CTempPauseMessageiiiP4RECT(struct CTempPauseMessage *this, int s, int Txt, int Menu, struct RECT *PRect) {
	int y;
	int otpos;
	{
		{
			int len;
		}
	}
}


// address: 0x80088E50
void InitPrintQuitMessage__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80088E58
void PrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	struct RECT PRect;
	int otpos;
	int oldDotpos;
	int oldTotpos;
}


// address: 0x80088FD0
void LeavePrintQuitMessage__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80088FD8
void InitPrintAreYouSure__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80088FE0
void PrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
	struct RECT PRect;
	int otpos;
	int oldDotpos;
	int oldTotpos;
}


// address: 0x80089158
void LeavePrintAreYouSure__17CTempPauseMessagei(struct CTempPauseMessage *this, int Menu) {
}


// address: 0x80089160
void InitPrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x80089168
void PrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
	struct RECT PRect;
	int otpos;
	int oldDotpos;
	int oldTotpos;
}


// address: 0x800892B8
void LeavePrintPaused__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x800892C0
void ___17CTempPauseMessage(struct CTempPauseMessage *this, int __in_chrg) {
}


// address: 0x800892E8
void _GLOBAL__D_DoPause__14CPauseMessagesi() {
}


// address: 0x80089310
void _GLOBAL__I_DoPause__14CPauseMessagesi() {
}


// address: 0x80089338
// size: 0xC
struct CTempPauseMessage *__17CTempPauseMessage(struct CTempPauseMessage *this) {
}


// address: 0x8008937C
void ___14CPauseMessages(struct CPauseMessages *this, int __in_chrg) {
}


// address: 0x800893B0
// size: 0x8
struct CPauseMessages *__14CPauseMessages(struct CPauseMessages *this) {
}


// address: 0x800893C4
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800893E4
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x800893EC
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x800893F4
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8008941C
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8008949C
int GetOverlayOtBase__7CBlocks() {
}


// address: 0x800894A4
int GetMaxOtPos__7CBlocks() {
}


// address: 0x800894AC
unsigned short GetDown__C4CPad(struct CPad *this) {
}


// address: 0x800894D4
unsigned char CheckActive__4CPad_addr_800894D4(struct CPad *this) {
}


// address: 0x800894E0
unsigned long ReadPadStream__Fv() {
	unsigned char *p0;
	unsigned char *p1;
	unsigned long rval;
}


// address: 0x800895F8
void PAD_Handler__Fv() {
	unsigned long JVal;
	unsigned long v;
	unsigned char fin;
}


// address: 0x800897F4
// size: 0xEC
struct CPad *PAD_GetPad__FiUc(int PadNum, unsigned char both) {
}


// address: 0x800898A4
void NewVal__4CPadUs(struct CPad *this, unsigned short New) {
}


// address: 0x80089918
void BothNewVal__4CPadUsUs(struct CPad *this, unsigned short New, unsigned short New2) {
}


// address: 0x800899AC
unsigned short Trans__4CPadUs(struct CPad *this, unsigned short PadVal) {
	unsigned short RetVal;
}


// address: 0x80089AD0
void Flush__4CPad(struct CPad *this) {
}


// address: 0x80089B24
void InitClickBits__FPUs(unsigned short *CountArray) {
	int f;
}


// address: 0x80089B44
unsigned short MakeClickBits__FiiiPUs(int Switch, int Closed, int Speed, unsigned short *CountArray) {
	unsigned short Click;
	unsigned short BitMask;
	{
		{
			int ResetSpeed;
		}
	}
}


// address: 0x80089BD0
void _GLOBAL__I_Pad0() {
}


// address: 0x80089C08
void SetPadType__4CPadUc(struct CPad *this, unsigned char val) {
}


// address: 0x80089C10
unsigned char CheckActive__4CPad_addr_80089C10(struct CPad *this) {
}


// address: 0x80089C1C
void SetActive__4CPadUc(struct CPad *this, unsigned char a) {
}


// address: 0x80089C24
void SetBothFlag__4CPadUc(struct CPad *this, unsigned char fl) {
}


// address: 0x80089C2C
// size: 0xEC
struct CPad *__4CPadi(struct CPad *this, int PhysStick) {
}


// address: 0x80089C60
void Set__7FontTab(struct FontTab *this) {
	{
		int Loop;
		{
			int f;
			int Loop;
		}
	}
}


// address: 0x80089CFC
void InitPrinty__Fv() {
	int otpos;
}


// address: 0x80089DAC
void SetTextDat__5CFontP7TextDat(struct CFont *this, struct TextDat *NewDat) {
}


// address: 0x80089DB4
int KanjiPrintChar__5CFontUsUsUsUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, unsigned short kan, int R, int G, int B) {
}


// address: 0x80089EEC
int PrintChar__5CFontUsUsUcUcUcUc(struct CFont *this, unsigned short Cx, unsigned short Cy, unsigned char C, int R, int G, int B) {
	int Cw;
}


// address: 0x8008A090
int Print__5CFontiiPc8TXT_JUSTP4RECTUcUcUc(struct CFont *this, int X, int Y, char *Str, enum TXT_JUST Justify, struct RECT *TextWindow, int R, int G, int B) {
	int Cx;
	int Cy;
	int WrapCount;
	char *EndPtr;
	char *SpacePtr;
	int CharW;
	int SpaceW;
	int _WindowW;
	int WindowW;
	int WindowH;
	int WindowX;
	int WindowY;
	struct RECT ClipRect;
	unsigned short kan;
	char *OrigStr;
	{
		{
			unsigned char c;
			{
				{
					{
						{
							char c;
							{
								{
									{
										char c;
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


// address: 0x8008A6C8
int GetWrap__5CFontPcP4RECT(struct CFont *this, char *Str, struct RECT *TextWindow) {
	int WrapCount;
	char *EndPtr;
	char *SpacePtr;
	char *LastSpacePtr;
	int CharW;
	int SpaceW;
	int WindowW;
	int _WindowW;
	{
		{
			unsigned char c;
			{
				{
					{
						{
							char c;
						}
					}
				}
			}
		}
	}
}


// address: 0x8008A938
int GetWrapWidth__5CFontPcP4RECT(struct CFont *this, char *Str, struct RECT *TextWindow) {
	char *EndPtr;
	char *SpacePtr;
	int CharW;
	int SpaceW;
	int WindowW;
	{
		unsigned char c;
	}
}


// address: 0x8008AAA4
int GetStrWidth__5CFontPc(struct CFont *this, char *Str) {
	int Width;
}


// address: 0x8008AB20
void SetChar__5CFontiUs(struct CFont *this, int ch, unsigned short Frm) {
}


// address: 0x8008ABA0
int SetOTpos__5CFonti(struct CFont *this, int OT) {
	int OldOT;
}


// address: 0x8008ABAC
int GetCharWidth__5CFontUc(struct CFont *this, unsigned char ch) {
}


// address: 0x8008AC80
void _GLOBAL__I_WHITER() {
}


// address: 0x8008ACDC
int GetOverlayOtBase__7CBlocks_addr_8008ACDC() {
}


// address: 0x8008ACE4
void ClearFont__5CFont(struct CFont *this) {
}


// address: 0x8008AD08
bool IsDefined__5CFontUc(struct CFont *this, unsigned char C) {
}


// address: 0x8008AD28
int GetCharFrameNum__5CFontUc(struct CFont *this, unsigned char ch) {
}


// address: 0x8008AD40
void Init__5CFont(struct CFont *this) {
}


// address: 0x8008AD74
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati(struct TextDat *this, int FrNum) {
}


// address: 0x8008AD90
unsigned char TrimCol__Fs(short col) {
}


// address: 0x8008ADC8
// size: 0x34
struct POLY_GT4 *DialogPrint__Fiiiiiiiiii(int Frm, int X, int Y, int SW, int SH, int UW, int UH, int UOfs, int VOfs, int Trans) {
	struct FRAME_HDR *Fr;
	struct POLY_GT4 *GT4;
	struct POLY_FT4 *FT4;
	struct TP_LOAD_HDR *Tp;
	int x0;
	int x1;
	int x2;
	int x3;
	int y0;
	int y1;
	int y2;
	int y3;
	int u0;
	int u1;
	int u2;
	int u3;
	int v0;
	int v1;
	int v2;
	int v3;
	int U;
	int V;
	int W;
	int H;
	{
		{
			{
				{
					struct PAL *Pal;
					{
						{
							{
								struct PAL *Pal;
								short G1;
								short G2;
								short G3;
								short G4;
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


// address: 0x8008B748
// size: 0x24
struct POLY_G4 *GetDropShadowG4__FUcUcUcUcUcUcUcUcUcUcUcUc(unsigned char r0, unsigned char g0, unsigned char b0, unsigned char r1, int g1, int b1, int r2, int g2, int b2, int r3, int g3, int b3) {
	struct POLY_G4 *G4;
}


// address: 0x8008B880
void DropShadows__Fiiii(int x, int y, int w, int h) {
	struct POLY_G4 *G4;
	unsigned char dbr;
	unsigned char dbg;
	unsigned char dbb;
}


// address: 0x8008BB24
void InitDialog__Fv() {
	{
		int i;
		{
			int y;
			int i;
			{
				unsigned char bits;
				{
					int x;
					{
						int i;
						int y;
					}
				}
			}
		}
	}
}


// address: 0x8008BC5C
void GetSizes__6Dialog(struct Dialog *this) {
	struct FRAME_HDR *Fr;
}


// address: 0x8008BEE0
void Back__6Dialogiiii(struct Dialog *this, int DX, int DY, int DW, int DH) {
	int X;
	int Y;
	int W;
	int H;
	int Bx;
	int By;
	int Xr;
	int Yr;
	int Xl;
	int Yl;
	struct POLY_FT4 *Ft4;
	struct RECT ClipRect;
	{
		{
			{
				{
					{
						int c;
						{
							int fw;
							int fh;
						}
					}
				}
			}
		}
	}
}


// address: 0x8008CFF8
void Line__6Dialogiii(struct Dialog *this, int DX, int DY, int DW) {
	int X;
	int Y;
	int W;
	int Bx;
	int Xr;
	int Xl;
	struct RECT ClipRect;
}


// address: 0x8008D228
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	int OldOT;
}


// address: 0x8008D23C
// size: 0x8
struct PAL *GetPal__7TextDati(struct TextDat *this, int PalNum) {
}


// address: 0x8008D258
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8008D258(struct TextDat *this, int FrNum) {
}


// address: 0x8008D274
void ATT_DoAttract__Fv() {
	struct FE_CREATE CStruct;
	{
		{
		}
	}
}


// address: 0x8008D33C
void CustomPlayerInit__FR12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x8008D344
void CreatePlayersFromFeData__FR9FE_CREATE(struct FE_CREATE *CStruct) {
	{
		int Loop;
	}
}


// address: 0x8008D41C
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x8008D45C
void CycleSelCols__Fv() {
}


// address: 0x8008D614
int FindTownCreature__7CBlocksi(struct CBlocks *this, int GameEqu) {
	{
		unsigned int f;
		{
			int Creature;
		}
	}
}


// address: 0x8008D688
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		unsigned int f;
	}
}


// address: 0x8008D6FC
// size: 0x108
struct CBlocks *__7CBlocksiiiii(struct CBlocks *this, int BgId, int ObjId, int ItemId, int Level, int List) {
}


// address: 0x8008D860
void SetTownersGraphics__7CBlocks(struct CBlocks *this) {
}


// address: 0x8008D898
void SetMonsterGraphics__7CBlocksii(struct CBlocks *this, int Level, int List) {
	struct MonstLevel *MLev;
	struct MonstList *MList;
}


// address: 0x8008D960
void ___7CBlocks(struct CBlocks *this, int __in_chrg) {
}


// address: 0x8008D9E8
void DumpGt4s__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x8008DA50
void DumpRects__7CBlocks(struct CBlocks *this) {
	{
		{
		}
	}
}


// address: 0x8008DAB8
void SetGraphics__7CBlocksPP7TextDatPii(struct CBlocks *this, struct TextDat **TDat, int *pId, int Id) {
}


// address: 0x8008DB14
void DumpGraphics__7CBlocksPP7TextDatPi(struct CBlocks *this, struct TextDat **TDat, int *Id) {
}


// address: 0x8008DB64
void Load__7CBlocksi(struct CBlocks *this, int Id) {
	{
		{
		}
	}
}


// address: 0x8008DC1C
void MakeRectTable__7CBlocks(struct CBlocks *this) {
	unsigned char *MyBlocks;
	int *BlockOffsets;
	{
		int f;
	}
}


// address: 0x8008DD70
void MakeGt4Table__7CBlocks(struct CBlocks *this) {
	{
		unsigned int f;
		{
			struct POLY_GT4 ThisGt4;
		}
	}
}


// address: 0x8008DF54
void MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(struct CBlocks *this, struct POLY_GT4 *GT4, struct FRAME_HDR *Fr) {
	int H;
	int Rotated;
	int Tpage;
	int zU;
	int zV;
	int zW;
	int zH;
}


// address: 0x8008E07C
void MyRoutine__FR7CBlocksii(struct CBlocks *B, int x, int y) {
}


// address: 0x8008E0E4
void SetRandOffset__7CBlocksi(struct CBlocks *this, int QuakeAmount) {
}


// address: 0x8008E140
void Print__7CBlocks(struct CBlocks *this) {
	int MxInt;
	int MyInt;
}


// address: 0x8008E25C
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x8008E284
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x8008E29C
void InitColourCycling__7CBlocks(struct CBlocks *this) {
	int CycleIndex;
	{
		int f;
		{
			{
				{
					{
						int f;
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


// address: 0x8008E3E8
void GetGCol__7CBlocksiiPUcP7RGBData(struct CBlocks *this, int x, int y, unsigned char *Rgb, struct RGBData *Data) {
	int rgb_itxr;
	int rgb_itxg;
	int rgb_itxb;
	int rgb_leftr;
	int rgb_leftg;
	int rgb_leftb;
	int rgb_rightr;
	int rgb_rightg;
	int rgb_rightb;
	int rgb_cordr;
	int rgb_cordg;
	int rgb_cordb;
}


// address: 0x8008E528
void PrintMap__7CBlocksii(struct CBlocks *this, int x, int y) {
	int XPos;
	int YPos;
	int xx;
	int BlankBlock;
	unsigned char *MyBlocks;
	int *BlockOffsets;
	int XPix;
	int YPix;
	int nx;
	int ny;
	int CLeft;
	int CRight;
	int CTop;
	int CBottom;
	{
		int ThisY;
		int ThisXPos;
		int ThisYPos;
		int Height;
		{
			struct CPart *Parts;
			struct CBlock *MyBlock;
			int BlockNum;
			struct RGBData MyRgbData;
			int bx;
			int by;
			{
				{
					struct RECT *BlockR;
					int clipx;
					int clipy;
					{
						{
							int NumOfParts;
							bool DoTrans;
							int OtPos;
							bool PFlag;
							{
								{
									{
										{
											int f;
											{
												struct POLY_GT4 *DestGt4;
												struct LittleGt4 *ThisGt4;
												unsigned char Flags;
												int W;
												int H;
												{
													{
														int r;
														int g;
														int b;
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


// address: 0x8008F098
void IterateVisibleMap__7CBlocksiiPFP9CacheInfoP8map_infoii_ib(struct CBlocks *this, int x, int y, int (*Func)(), bool VisCheck) {
	int XPos;
	int YPos;
	int xx;
	bool Infra;
	int MyXShifter;
	int MyYShifter;
	int Total;
	bool DoVisCheck;
	int XPix;
	int YPix;
	int CRight;
	{
		int ThisXPos;
		int ThisYPos;
		int Height;
		{
			{
				{
					struct map_info *p0;
					struct map_info *p1;
					struct map_info *p2;
					struct map_info *p3;
					int myx;
					int myy;
				}
			}
		}
	}
}


// address: 0x8008F510
int AddMonst__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	int nMonster;
	int Index;
	int bFlags;
	{
		{
			struct MonsterStruct *MyMonst;
			int mi;
			{
				{
					{
						{
							{
								{
									int ThisIndex;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8008F5F8
void PrintMonsters__7CBlocksii(struct CBlocks *this, int x, int y) {
	struct TextDat *CMonstGraphics;
	int Total;
	int Wx;
	int Wy;
	int Cx;
	int Cy;
	struct TextDat *GolemGraphics;
	bool MyInfraFlag;
	{
		int f;
		{
			int Index;
			{
				{
					struct MonsterStruct *MyMonst;
					int Frame;
					int Action;
					int Dir;
					int PhysFrame;
					int Creature;
					int ScrXOff;
					int ScrYOff;
					struct POLY_FT4 *Ft4;
					struct POLY_FT4 *ShadFt4;
					bool StartAnim;
					int AddVal[4];
					int bx;
					int by;
					int Sx;
					int Sy;
					int OtPos;
					{
						{
							int blockr;
							int blockg;
							int blockb;
							{
								{
									int AVal;
									{
										int DoCompress;
										int f;
										{
											int MaxDecompress;
											{
												int f;
												{
													int Frame;
													int Action;
													int Dir;
													int Creature;
													int ScrXOff;
													int ScrYOff;
													struct RECT R;
													int GType;
													int Sx;
													int Sy;
													int Index;
													int transfile;
													int Mg;
													{
														{
															struct MonsterStruct *MyMonst;
															{
																{
																	int bx;
																	int by;
																	int mx;
																	int my;
																	bool PrintIt;
																	bool Compressed;
																	{
																		unsigned int g;
																		{
																			{
																				int OtPos;
																				struct POLY_FT4 *Ft4;
																				int blockr;
																				int blockg;
																				int blockb;
																				struct POLY_FT4 *ShadFt4;
																				int paloff;
																				int Col;
																				{
																					{
																						{
																							{
																								{
																									{
																										int SPal;
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


// address: 0x8009009C
int AddTowners__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	int nMonster;
	{
		{
			struct MonsterStruct *MyMonst;
			int mi;
		}
	}
}


// address: 0x800900F8
void PrintTowners__7CBlocksii(struct CBlocks *this, int x, int y) {
	int YPos;
	int YVel;
	int Total;
	int Wx;
	int Wy;
	int Cx;
	int Cy;
	{
		int f;
		{
			int Creature;
			int mi;
			struct POLY_FT4 *Ft4;
			struct TextDat *ThisData;
			int PhysFrame;
			int GameFrame;
			int Dir;
			int Sx;
			int Sy;
			int OtPos;
			int Col;
			{
				{
					struct POLY_FT4 *ShadFt4;
				}
			}
		}
	}
}


// address: 0x800904B0
int AddObject__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	int bObject;
	{
		{
			struct ObjectStruct *OStr;
		}
	}
}


// address: 0x8009050C
void PrintObjects__7CBlocksii(struct CBlocks *this, int x, int y) {
	int Total;
	int Wx;
	int Wy;
	int Cx;
	int Cy;
	{
		int z;
		{
			{
				int f;
				{
					int Sx;
					int Sy;
					int LoadIndex;
					struct ObjectStruct *OStr;
					bool DoCreature;
					struct POLY_FT4 *(*PFunc)();
					int Index;
					{
						{
							int AnimFrame;
							int OtPos;
							struct POLY_FT4 *Ft4;
							int Creature;
							int PhysFrame;
							struct TextDat *ObjDat;
							int bx;
							int by;
							int Col;
							int blockr;
							int blockg;
							int blockb;
							{
								{
									{
										{
											struct POLY_FT4 *ShadFt4;
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


// address: 0x80090968
int AddDead__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	int bDead;
}


// address: 0x800909F4
void PrintDead__7CBlocksii(struct CBlocks *this, int x, int y) {
	int Total;
	int Wx;
	int Wy;
	int Cx;
	int Cy;
	{
		int f;
		{
			int bDead;
			int dx;
			int dy;
			int Frame;
			int Creature;
			struct POLY_FT4 *Ft4;
			int transfile;
			int Sx;
			int Sy;
			int Mg;
			struct CMonster *MyMonst;
			{
				{
					int bx;
					int by;
					int blockr;
					int blockg;
					int blockb;
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x80090CB8
int AddItem__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	int bItem;
}


// address: 0x80090D14
void PrintItems__7CBlocksii(struct CBlocks *this, int x, int y) {
	int Total;
	int Wx;
	int Wy;
	int Cx;
	int Cy;
	{
		int z;
		{
			bool DoAnim;
			{
				int f;
				{
					int Sx;
					int Sy;
					struct ItemStruct *IStr;
					int OtPos;
					struct POLY_FT4 *Ft4;
					int Index;
					int bx;
					int by;
					int Col;
					int blockr;
					int blockg;
					int blockb;
					{
						{
							{
								{
									struct FRAME_HDR *Fr;
									int W;
									int H;
									short height;
									{
										{
											int it;
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


// address: 0x800912D4
int AddMissile__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	int bFlags;
	{
		{
			{
				{
					int MissIndex;
					{
						{
							int dMiss;
							int nMiss;
							int MissIndex;
							int Index;
						}
					}
				}
			}
		}
	}
}


// address: 0x800913EC
void PrintMissiles__7CBlocksii(struct CBlocks *this, int x, int y) {
	struct CachedInfoList *InfoList;
	int Wx;
	int Wy;
	int Cx;
	int Cy;
	int Total;
	{
		int f;
		{
			int Sx;
			int Sy;
			struct MissileStruct *MissStr;
		}
	}
}


// address: 0x800915E4
int ScrToWorldX__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x800915F8
int ScrToWorldY__7CBlocksii(struct CBlocks *this, int sx, int sy) {
}


// address: 0x8009160C
void SetScrollTarget__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x800916D0
void DoScroll__7CBlocks(struct CBlocks *this) {
	int XDiff;
	int YDiff;
	int divnum;
}


// address: 0x800917BC
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x8009185C
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	int Sx;
	int Sy;
}


// address: 0x80091930
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	int H;
	int NewTop;
	int W;
}


// address: 0x800919D0
int WorldToScrX__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x800919D8
int WorldToScrY__7CBlocksii(struct CBlocks *this, int x, int y) {
}


// address: 0x800919EC
// size: 0x108
struct CBlocks *BL_GetCurrentBlocks__Fv() {
}


// address: 0x800919F8
int GetHighlightCol__FiPcUsUsUs(int Index, char *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x80091A40
void PRIM_GetPrim__FPP8POLY_FT4(struct POLY_FT4 **Prim) {
}


// address: 0x80091ABC
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x80091B04
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4(struct POLY_FT4 *Prim) {
	struct POLY_FT4 *RetPrim;
}


// address: 0x80091B40
void PRIM_GetPrim__FPP8POLY_GT4(struct POLY_GT4 **Prim) {
}


// address: 0x80091BBC
void PRIM_CopyPrim__FP8POLY_FT4T0(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	unsigned long *Dest32;
	unsigned long *Source32;
	{
		unsigned int f;
	}
}


// address: 0x80091BE4
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}


// address: 0x80091C00
void SetItemGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x80091C28
void SetObjGraphics__7CBlocksi(struct CBlocks *this, int Id) {
}


// address: 0x80091C50
void DumpItems__7CBlocks(struct CBlocks *this) {
}


// address: 0x80091C74
void DumpObjs__7CBlocks(struct CBlocks *this) {
}


// address: 0x80091C98
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x80091CC0
int GetOtPos__7CBlocksi(struct CBlocks *this, int LogicalY) {
	int OtPos;
}


// address: 0x80091CF8
void InitFromGt4__9LittleGt4P8POLY_GT4ii(struct LittleGt4 *this, struct POLY_GT4 *Gt4, int nw, int nh) {
}


// address: 0x80091D84
int GetNumOfFrames__7TextDatii(struct TextDat *this, int Creature, int Action) {
}


// address: 0x80091DBC
int GetNumOfActions__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x80091DE0
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati(struct TextDat *this, int Creature) {
}


// address: 0x80091DFC
void SetFileInfo__7TextDatPC13CTextFileInfoi(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x80091E08
int GetNumOfFrames__7TextDat(struct TextDat *this) {
}


// address: 0x80091E1C
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80091E1C(struct TextDat *this, int PalNum) {
}


// address: 0x80091E38
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80091E38(struct TextDat *this, int FrNum) {
}


// address: 0x80091E54
// size: 0x70
struct TextDat *__7TextDat(struct TextDat *this) {
}


// address: 0x80091E88
void OnceOnlyInit__7TextDat(struct TextDat *this) {
}


// address: 0x80091EA8
void ___7TextDat(struct TextDat *this, int __in_chrg) {
}


// address: 0x80091EF0
void ReloadTP__7TextDat(struct TextDat *this) {
}


// address: 0x80091F30
void Use__7TextDatlbi(struct TextDat *this, long NewHndDat, bool DatLoaded, int size) {
	{
		{
			char NameBuff[40];
			{
				{
					{
						{
							struct RECT R;
							int DecompSize;
						}
					}
				}
			}
		}
	}
}


// address: 0x80092170
bool TpLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	int TpX;
	int TpY;
	struct RECT R;
	int Dx;
	int Dy;
}


// address: 0x80092218
void StreamLoadTP__7TextDat(struct TextDat *this) {
	char TheName[20];
}


// address: 0x800922D0
void FinishedUsing__7TextDat(struct TextDat *this) {
}


// address: 0x80092368
void MakeBlockOffsetTab__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x800923B4
long MakeOffsetTab__C9CBlockHdr(struct CBlockHdr *this) {
	struct CBlock *MyBlock;
	long hndRet;
	int *Tab;
	{
		unsigned int f;
	}
}


// address: 0x800924E0
void SetUVTp__7TextDatP9FRAME_HDRP8POLY_FT4ii(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4, int XFlip, int YFlip) {
	int Rotated;
	int Tpage;
	int U;
	int V;
	int W;
	int H;
}


// address: 0x800925E0
bool IsCompressed__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Dir, int Frame) {
}


// address: 0x8009262C
// size: 0x28
struct POLY_FT4 *PrintMonster__7TextDatiiiiiii(struct TextDat *this, int Creature, int Action, int Dir, int Frame, int x, int y, int OtPos) {
	int PhysFrame;
}


// address: 0x800926D8
// size: 0x28
struct POLY_FT4 *PrintMonsterA__7TextDatiiibi(struct TextDat *this, int Frm, int X, int Y, bool XFlip, int OtPos) {
	{
		{
			struct POLY_FT4 *FT4;
			struct FRAME_HDR *Fr;
			int W;
			int H;
			{
				{
					unsigned char *Dest;
					int DecompSize;
					unsigned char *CompFrAddr;
					struct DR_LOAD2 *DrPtr;
					unsigned long NumOfPrims;
					int VH;
					int TpX;
					int TpY;
					int U;
					int V;
					int W;
					int H;
					int u0;
					int u1;
					int u2;
					int u3;
					{
						unsigned int f;
						{
							struct RECT mrect;
						}
					}
				}
			}
		}
	}
}


// address: 0x80092A80
void PrepareFt4__7TextDatP8POLY_FT4iiiii(struct TextDat *this, struct POLY_FT4 *FT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	struct FRAME_HDR *Fr;
	int W;
	int H;
	{
		{
			{
				{
					{
						{
							struct RECT R;
							{
								{
									unsigned char sw;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80092D14
unsigned char *GetDecompBufffer__7TextDati(struct TextDat *this, int Size) {
	long *DecArray;
	int DecIndex;
	long hnd;
	unsigned char *RetAddr;
}


// address: 0x80092E74
void SetUVTpGT4__7TextDatP9FRAME_HDRP8POLY_GT4ii(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT4 *FT4, int XFlip, int YFlip) {
	int Rotated;
	int Tpage;
	int U;
	int V;
	int W;
	int H;
}


// address: 0x80092F74
void PrepareGt4__7TextDatP8POLY_GT4iiiii(struct TextDat *this, struct POLY_GT4 *GT4, int Frm, int X, int Y, int XFlip, int YFlip) {
	struct FRAME_HDR *Fr;
	int W;
	int H;
	unsigned char sw;
	struct PAL *Pal;
	{
		{
			{
				struct RECT R;
				{
					{
						int DecX;
						int DecY;
						struct RECT R;
					}
				}
			}
		}
	}
}


// address: 0x800931CC
void SetUVTpGT3__7TextDatP9FRAME_HDRP8POLY_GT3(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_GT3 *GT3) {
	int Rotated;
	int Tpage;
	int U;
	int V;
	int W;
	int H;
}


// address: 0x80093250
void PrepareGt3__7TextDatP8POLY_GT3iii(struct TextDat *this, struct POLY_GT3 *GT3, int Frm, int X, int Y) {
	struct FRAME_HDR *Fr;
	int W;
	int H;
	struct PAL *Pal;
	{
		{
			{
				struct RECT R;
				{
					{
						int DecX;
						int DecY;
						struct RECT R;
					}
				}
			}
		}
	}
}


// address: 0x80093418
// size: 0x28
struct POLY_FT4 *PrintFt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	struct POLY_FT4 *FT4;
}


// address: 0x8009356C
// size: 0x34
struct POLY_GT4 *PrintGt4__7TextDatiiiiii(struct TextDat *this, int Frm, int X, int Y, int XFlip, int OtPos, int YFlip) {
	struct POLY_GT4 *GT4;
}


// address: 0x800936C0
void DecompFrame__7TextDatP9FRAME_HDR(struct TextDat *this, struct FRAME_HDR *Fr) {
	unsigned char *CompFrAddr;
	int DecompSize;
	unsigned char *Dest;
}


// address: 0x80093818
void MakeCreatureOffsetTab__7TextDat(struct TextDat *this) {
	int NumOfCreatures;
	{
		{
			unsigned char *ThisAddr;
			{
				unsigned int f;
				{
					int f;
					{
					}
				}
			}
		}
	}
}


// address: 0x80093958
void MakePalOffsetTab__7TextDat(struct TextDat *this) {
	struct PAL *ThisPal;
	{
		unsigned int f;
	}
}


// address: 0x80093A54
void InitData__7TextDat(struct TextDat *this) {
}


// address: 0x80093A84
void DumpData__7TextDat(struct TextDat *this) {
}


// address: 0x80093BAC
void DumpHdr__7TextDat(struct TextDat *this) {
}


// address: 0x80093C10
// size: 0x70
struct TextDat *GM_UseTexData__Fi(int Id) {
	{
		{
			struct TextDat *Dat2Use;
			struct CTextFileInfo **Tab;
			{
				int f;
			}
		}
	}
}


// address: 0x80093D44
void GM_ForceTpLoad__Fi(int Id) {
}


// address: 0x80093D80
void GM_FinishedUsing__FP7TextDat(struct TextDat *Fin) {
}


// address: 0x80093DD4
void SetPal__7TextDatP9FRAME_HDRP8POLY_FT4(struct TextDat *this, struct FRAME_HDR *Fr, struct POLY_FT4 *FT4) {
	struct PAL *Pal;
	{
		{
			{
				struct RECT R;
			}
		}
	}
}


// address: 0x80093E98
int GetFrNum__7TextDatiiii(struct TextDat *this, int Creature, int Action, int Direction, int Frame) {
}


// address: 0x80093EEC
bool IsDirAliased__7TextDatiii(struct TextDat *this, int Creature, int Action, int Direction) {
}


// address: 0x80093F44
void DoDecompRequests__7TextDat(struct TextDat *this) {
	long *DecArray;
	{
		int f;
		{
		}
	}
}


// address: 0x80094068
void FindDecompArea__7TextDatR4RECT(struct TextDat *this, struct RECT *R) {
	int NumOfFrames;
	int Widest;
	int Tallest;
	{
		int f;
		{
			int w;
			int h;
		}
	}
}


// address: 0x80094140
// size: 0x4
struct CTextFileInfo *GetFileInfo__7TextDati(int Id) {
}


// address: 0x80094190
int GetSize__C15CCreatureAction(struct CCreatureAction *this) {
}


// address: 0x800941B8
int GetFrNum__C15CCreatureActionii(struct CCreatureAction *this, int Direction, int Frame) {
	int LocFrame;
}


// address: 0x800941E8
void InitDirRemap__15CCreatureAction(struct CCreatureAction *this) {
	bool Dir2Remap[8];
	int f;
	int RemapNum;
	{
		{
			{
				{
					int OrigNum;
					{
						int g;
					}
				}
			}
		}
	}
}


// address: 0x800942A8
int GetFrNum__C12CCreatureHdriii(struct CCreatureHdr *this, int Action, int Direction, int Frame) {
}


// address: 0x800942EC
// size: 0xE
struct CCreatureAction *GetAction__C12CCreatureHdri(struct CCreatureHdr *this, int ActNum) {
	struct CCreatureAction *CAct;
	{
		int f;
	}
}


// address: 0x8009437C
void InitActionDirRemaps__12CCreatureHdr(struct CCreatureHdr *this) {
	struct CCreatureAction *CAct;
	{
		int f;
	}
}


// address: 0x800943EC
int GetSize__C12CCreatureHdr(struct CCreatureHdr *this) {
	int Size;
	struct CCreatureAction *CAct;
	{
		int f;
		{
			int ThisSize;
		}
	}
}


// address: 0x80094458
void LoadDat__C13CTextFileInfoli(struct CTextFileInfo *this, long hnd, int size) {
	char FName[13];
	unsigned char *Dest;
	struct FileIO *MyFileIO;
}


// address: 0x8009458C
long LoadDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x800945E4
long LoadHdr__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x8009460C
void MakeFname__C13CTextFileInfoPcPCc(struct CTextFileInfo *this, char *Dest, char *Ext) {
}


// address: 0x80094654
long GetFile__C13CTextFileInfoPcUl(struct CTextFileInfo *this, char *Ext, unsigned long RamId) {
	char FName[13];
	long hnd;
}


// address: 0x800946F4
bool HasFile__C13CTextFileInfoPc(struct CTextFileInfo *this, char *Ext) {
	char FName[13];
	struct FileIO *MyFileIO;
}


// address: 0x80094788
void Un64__FPUcT0l(unsigned char *Src, unsigned char *Dest, long SizeBytes) {
	unsigned char *EndDest;
	unsigned long *BigDest;
	unsigned long Code;
	unsigned long Run;
	unsigned long BigCode;
}


// address: 0x8009485C
// size: 0x7C
struct CScreen *__7CScreen(struct CScreen *this) {
}


// address: 0x80094890
void Load__7CScreeniii(struct CScreen *this, int Id, int tpx, int tpy) {
	unsigned char r;
	unsigned char g;
	unsigned char b;
	{
		{
			struct FRAME_HDR *Fr;
			struct RECT R;
			struct PAL *Pal;
			unsigned short MyPal[256];
			{
				int i;
				{
					int i;
					{
						int nocols;
						{
							int v;
							{
								unsigned short c;
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


// address: 0x80094BA4
void Unload__7CScreen(struct CScreen *this) {
}


// address: 0x80094BC8
void Display__7CScreeniiii(struct CScreen *this, int Id, int tpx, int tpy, int fadeval) {
	struct POLY_FT4 *FT4;
}


// address: 0x80094EA8
void SetRect__5CPartR7TextDatR4RECT(struct CPart *this, struct TextDat *TDat, struct RECT *R) {
	struct FRAME_HDR *Fr;
}


// address: 0x80094F24
void GetBoundingBox__6CBlockR7TextDatR4RECT(struct CBlock *this, struct TextDat *TDat, struct RECT *R) {
	int left;
	int right;
	int top;
	int bottom;
	{
		{
			struct RECT Pr;
			{
				unsigned int f;
			}
		}
	}
}


// address: 0x80095080
void _GLOBAL__D_DatPool() {
}


// address: 0x800950D8
void _GLOBAL__I_DatPool() {
}


// address: 0x8009512C
void PRIM_GetPrim__FPP8POLY_GT4_addr_8009512C(struct POLY_GT4 **Prim) {
}


// address: 0x800951A8
void PRIM_GetPrim__FPP8POLY_FT4_addr_800951A8(struct POLY_FT4 **Prim) {
}


// address: 0x80095224
void DumpDatFile__7TextDat(struct TextDat *this) {
	{
		{
		}
	}
}


// address: 0x80095298
bool CanXferFrame__C7TextDat(struct TextDat *this) {
}


// address: 0x800952C0
bool CanXferPal__C7TextDat(struct TextDat *this) {
}


// address: 0x800952E8
bool IsLoaded__C7TextDat(struct TextDat *this) {
}


// address: 0x800952F4
int GetTexNum__C7TextDat(struct TextDat *this) {
}


// address: 0x80095300
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80095300(struct TextDat *this, int Creature) {
}


// address: 0x8009531C
int GetNumOfCreatures__7TextDat(struct TextDat *this) {
}


// address: 0x80095330
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_80095330(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x8009533C
int GetNumOfFrames__7TextDat_addr_8009533C(struct TextDat *this) {
}


// address: 0x80095350
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80095350(struct TextDat *this, int PalNum) {
}


// address: 0x8009536C
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8009536C(struct TextDat *this, int FrNum) {
}


// address: 0x80095388
char *GetName__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x80095394
bool HasDat__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x800953BC
bool HasTp__C13CTextFileInfo(struct CTextFileInfo *this) {
}


// address: 0x800953E4
int GetSize__C6CBlock(struct CBlock *this) {
}


// address: 0x800953F8
bool OVR_IsMemcardOverlayBlank__Fv() {
}


// address: 0x80095424
void OVR_LoadPregame__Fv() {
}


// address: 0x8009544C
void OVR_LoadFrontend__Fv() {
}


// address: 0x80095474
void OVR_LoadGame__Fv() {
}


// address: 0x8009549C
void OVR_LoadFmv__Fv() {
}


// address: 0x800954C4
void OVR_LoadMemcard__Fv() {
}


// address: 0x800954F0
void ClearOutOverlays__Fv() {
}


// address: 0x80095548
void ClearOut__7Overlay(struct Overlay *this) {
}


// address: 0x8009560C
void Load__7Overlay(struct Overlay *this) {
	char OverlayFile[256];
}


// address: 0x80095668
// size: 0x4
enum OVER_TYPE OVR_GetCurrentOverlay__Fv() {
}


// address: 0x80095674
void LoadOver__FR7Overlay(struct Overlay *Ovr) {
}


// address: 0x800956C8
void _GLOBAL__I_OVR_Open__Fv() {
}


// address: 0x80095838
// size: 0x4
enum OVER_TYPE GetOverType__7Overlay(struct Overlay *this) {
}


// address: 0x80095844
void StevesDummyPoll__Fv() {
}


// address: 0x8009584C
void Lambo__Fv() {
}


// address: 0x80095854
// size: 0x90
struct CPlayer *__7CPlayerbii(struct CPlayer *this, bool Town, int mPlayerNum, int NewNumOfPlayers) {
	int SizeToAlloc;
	{
		{
			long hnd;
		}
	}
}


// address: 0x800959AC
void ___7CPlayer(struct CPlayer *this, int __in_chrg) {
	{
		{
		}
	}
}


// address: 0x80095A3C
void Load__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x80095AA8
void SetScrollTarget__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg) {
	int ScrX;
	int ScrY;
	int WorldX;
	int WorldY;
	int NWorldX;
	int NWorldY;
	int wtime;
	bool ok;
}


// address: 0x80095E8C
void Print__7CPlayerR12PlayerStructR7CBlocks(struct CPlayer *this, struct PlayerStruct *Plr, struct CBlocks *Bg) {
	int ScrXOff;
	int ScrYOff;
	int Action;
	int WorldX;
	int WorldY;
	struct POLY_FT4 *Ft4;
	{
		{
			int Frame;
			{
				{
					int FrmNum;
					struct RECT R;
					struct POLY_FT4 *ShadFt4;
					{
						{
							{
								int Frame;
								{
									{
										{
											{
												struct RECT R;
												int OtPos;
												struct POLY_FT4 *ShadFt4;
												{
													{
														int zX;
														int zY;
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


// address: 0x800963C4
int FindAction__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
	int RetVal;
}


// address: 0x80096448
// size: 0x4
enum PACTION FindActionEnum__7CPlayerR12PlayerStruct(struct CPlayer *this, struct PlayerStruct *Plr) {
}


// address: 0x800964CC
void Init__7CPlayer(struct CPlayer *this) {
}


// address: 0x800964D4
void Dump__7CPlayer(struct CPlayer *this) {
}


// address: 0x800964DC
void LoadThis__7CPlayeri(struct CPlayer *this, int Id) {
}


// address: 0x8009654C
void NonBlockingLoadNewGFX__7CPlayeri(struct CPlayer *this, int Id) {
	{
		{
			struct PlayerParam *Pp;
		}
	}
}


// address: 0x800965B8
void FilthyTask__FP4TASK(struct TASK *T) {
	struct CPlayer *ThePlayer;
	char FName[15];
	int Id;
	struct PlayerParam *Pp;
}


// address: 0x80096640
void PRIM_GetPrim__FPP8POLY_FT4_addr_80096640(struct POLY_FT4 **Prim) {
}


// address: 0x800966BC
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_800966BC(struct POLY_FT4 *Prim) {
	struct POLY_FT4 *RetPrim;
}


// address: 0x800966F8
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_800966F8(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	unsigned long *Dest32;
	unsigned long *Source32;
	{
		unsigned int f;
	}
}


// address: 0x80096720
int GetDatMaxSize__7CPlayer(struct CPlayer *this) {
}


// address: 0x80096760
int GetOtPos__7CBlocksi_addr_80096760(struct CBlocks *this, int LogicalY) {
	int OtPos;
}


// address: 0x8009679C
void SetDecompArea__7TextDatiiii(struct TextDat *this, int nDecX, int nDecY, int nPalX, int nPalY) {
}


// address: 0x800967B4
int GetNumOfFrames__7TextDatii_addr_800967B4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x800967EC
int GetNumOfActions__7TextDati_addr_800967EC(struct TextDat *this, int Creature) {
}


// address: 0x80096810
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_80096810(struct TextDat *this, int Creature) {
}


// address: 0x8009682C
void SetFileInfo__7TextDatPC13CTextFileInfoi_addr_8009682C(struct TextDat *this, struct CTextFileInfo *NewInfo, int NewTexNum) {
}


// address: 0x80096838
void PROF_Open__Fv() {
}


// address: 0x80096878
bool PROF_State__Fv() {
}


// address: 0x80096884
void PROF_On__Fv() {
}


// address: 0x80096894
void PROF_Off__Fv() {
}


// address: 0x800968A0
void PROF_CpuEnd__Fv() {
}


// address: 0x800968D0
void PROF_CpuStart__Fv() {
}


// address: 0x800968F4
void PROF_DrawStart__Fv() {
}


// address: 0x80096918
void PROF_DrawEnd__Fv() {
}


// address: 0x80096948
void PROF_Draw__FPUl(unsigned long *Ot) {
	{
		{
			struct POLY_F4 *F4;
			int XCent;
			{
				int f;
				{
					struct POLY_F3 *F3;
				}
			}
		}
	}
}


// address: 0x80096B3C
void PROF_Restart__Fv() {
}


// address: 0x80096B5C
void PSX_WndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80096EE0
void PSX_PostWndProc__FUilUl(unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x80096F98
void GoSetLevel__Fv() {
}


// address: 0x80097030
void GoBackLevel__Fv() {
}


// address: 0x8009708C
void GoWarpLevel__Fv() {
}


// address: 0x800970B8
void PostLoadGame__Fv() {
}


// address: 0x80097130
void GoLoadGame__Fv() {
	{
		int p;
		{
			{
				{
					{
						int i;
					}
				}
			}
		}
	}
}


// address: 0x80097288
void PostNewLevel__Fv() {
	int palnum;
}


// address: 0x8009733C
void GoNewLevel__Fv() {
}


// address: 0x80097384
void PostGoBackLevel__Fv() {
	int palnum;
}


// address: 0x80097430
void GoForwardLevel__Fv() {
}


// address: 0x80097484
void PostGoForwardLevel__Fv() {
	int palnum;
}


// address: 0x80097530
void GoNewGame__Fv() {
}


// address: 0x80097554
void PostNewGame__Fv() {
}


// address: 0x8009757C
void LevelToLevelInit__Fv() {
}


// address: 0x800975CC
unsigned int GetPal__6GPaneli(struct GPanel *this, int Frm) {
}


// address: 0x80097610
// size: 0x1C
struct GPanel *__6GPaneli(struct GPanel *this, int Ofs) {
}


// address: 0x80097674
void DrawFlask__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	int HealthHeight;
	int ManaHeight;
	int HealthAnim;
	int ManaAnim;
	int BarY;
	struct POLY_FT4 *Ft4;
	int X;
	int Y;
	int xof;
}


// address: 0x80097AE8
unsigned char SpdTrimCol__Fs(short col) {
}


// address: 0x80097B20
void DrawSpeedBar__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	int X;
	int Y;
	int Loop;
	struct POLY_FT4 *Ft4;
	int Bx;
	int By;
	{
		{
			struct POLY_G4 *G4;
		}
	}
}


// address: 0x8009824C
void DrawSpell__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	int X;
	int Y;
	int Anim;
	struct POLY_FT4 *Ft4;
	int SpellNo;
	char YT[16];
}


// address: 0x800983E8
void DrawMsgWindow__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x80098438
int DrawDurThingy__6GPaneliiP10ItemStructi(struct GPanel *this, int X, int Y, struct ItemStruct *Item, int ItemType) {
	struct POLY_FT4 *Ft4;
	unsigned char NewR;
	unsigned char NewG;
	unsigned char NewB;
	{
		int Loop;
	}
}


// address: 0x80098704
void DrawDurIcon__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
	int X;
	int Y;
}


// address: 0x80098830
void Print__6GPanelP7PanelXYP12PlayerStruct(struct GPanel *this, struct PanelXY *XY, struct PlayerStruct *Plr) {
}


// address: 0x80098948
int GetMaxOtPos__7CBlocks_addr_80098948() {
}


// address: 0x80098950
// size: 0x8
struct PAL *GetPal__7TextDati_addr_80098950(struct TextDat *this, int PalNum) {
}


// address: 0x8009896C
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8009896C(struct TextDat *this, int FrNum) {
}


// address: 0x80098988
void PrintCDWaitTask__FP4TASK(struct TASK *T) {
	struct TextDat *CDGfxData;
	struct POLY_FT4 *Ft4;
	{
		{
			{
				int cdx;
				int cdy;
			}
		}
	}
}


// address: 0x80098AC4
void InitCDWaitIcon__Fv() {
}


// address: 0x80098AF8
void STR_Debug__FP6SFXHDRPce(struct SFXHDR *sfh, char *e) {
}


// address: 0x80098B0C
void STR_SystemTask__FP4TASK(struct TASK *T) {
}


// address: 0x80098B3C
void STR_AllocBuffer__Fv() {
	{
		{
			{
				int i;
			}
		}
	}
}


// address: 0x80098B74
void STR_Init__Fv() {
	{
		{
			long vm;
			unsigned char *ptr;
			struct TASK *T;
			{
				int i;
			}
		}
	}
}


// address: 0x80098CA0
// size: 0x84
struct SFXHDR *STR_InitStream__Fc(char flag) {
	struct SFXHDR *sfh;
}


// address: 0x80098DC8
// size: 0x84
struct SFXHDR *STR_PlaySound__FUscic(unsigned short Name, char flag, int volume, char loop) {
	struct SFXHDR *sfh;
	char tstring[32];
	char Prefix[2];
	{
		{
			enum LANG_TYPE Lang;
		}
	}
}


// address: 0x80099010
void STR_setvolume__FP6SFXHDR(struct SFXHDR *sfh) {
	enum LANG_TYPE lang;
}


// address: 0x800990DC
void STR_setpitch__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x80099128
void STR_PlaySFX__FP6SFXHDR(struct SFXHDR *sfh) {
	int offs;
}


// address: 0x80099234
void STR_pauseall__Fv() {
	{
		int i;
	}
}


// address: 0x800992A8
void STR_resumeall__Fv() {
	{
		int i;
	}
}


// address: 0x8009931C
void STR_CloseStream__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x80099388
void STR_SoundCommand__FP6SFXHDRi(struct SFXHDR *sfh, int Command) {
}


// address: 0x80099474
char STR_Command__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x80099664
void STR_DMAControl__FP6SFXHDR(struct SFXHDR *sfh) {
	unsigned char *ptr;
	int DMA_off;
	int sec;
}


// address: 0x8009972C
void STR_PlayStream__FP6SFXHDRPUci(struct SFXHDR *sfh, unsigned char *Src, int size) {
	int sec_num;
	unsigned char *dp;
	int i;
	int read;
	int osize;
}


// address: 0x800999AC
void STR_AsyncWeeTASK__FP4TASK(struct TASK *T) {
	struct DEF_ARGS *A;
	struct STRHDR *StreamHND;
	struct SFXHDR *sfh;
	char Done;
	int frame;
	int framediff;
	int AsyncHND;
	unsigned char *ptr;
	char OrigName[14];
	{
		{
			{
			}
		}
	}
}


// address: 0x80099C84
void STR_AsyncTASK__FP4TASK(struct TASK *T) {
	struct DEF_ARGS *A;
	struct STRHDR *StreamHND;
	struct SFXHDR *sfh;
	char Done;
	int latency;
	int frame;
	int framediff;
	int AsyncHND;
	unsigned char *ptr;
	char OrigName[14];
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
												unsigned long vol;
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


// address: 0x8009A06C
void STR_StreamMainTask__FP6SFXHDRc(struct SFXHDR *sfh, char FileType) {
	struct STRHDR *sh;
	struct DEF_ARGS *A;
	{
		{
			struct TASK *T2;
		}
	}
}


// address: 0x8009A198
void SND_Monitor__FP4TASK(struct TASK *T) {
	char status[24];
	{
		{
			int i;
		}
	}
}


// address: 0x8009A224
void SPU_OnceOnlyInit__Fv() {
}


// address: 0x8009A25C
void SPU_Init__Fv() {
	{
		struct SpuCommonAttr common_attr;
		{
			int i;
		}
	}
}


// address: 0x8009A364
int SND_FindChannel__Fv() {
	char status[24];
	int count;
	int result;
}


// address: 0x8009A3D0
void SND_ClearBank__Fv() {
	{
		{
		}
	}
}


// address: 0x8009A440
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	int DestAddr;
}


// address: 0x8009A4B8
void SND_LoadBank__Fi(int lvlnum) {
	struct FileIO *MyFileIO;
	char BankFile[16];
}


// address: 0x8009A5DC
int SND_FindSFX__FUs(unsigned short Name) {
	struct bank_entry *BankOffsets;
	int RetVal;
	{
		int i;
	}
}


// address: 0x8009A6B8
void SND_StopSnd__Fi(int voice) {
}


// address: 0x8009A6EC
bool SND_IsSfxPlaying__Fi(int SFXNo) {
	{
		int i;
	}
}


// address: 0x8009A728
int SND_RemapSnd__Fi(int SFXNo) {
	{
		int i;
	}
}


// address: 0x8009A79C
int SND_PlaySnd__FUsiii(unsigned short Name, int vol, int pan, int pitchadj) {
	int RetVal;
	{
		{
			int sfxnum;
			{
				{
					int voice;
					{
						{
							struct bank_entry *BankOffsets;
							int Offset;
							struct SpuVoiceAttr voice_attr;
						}
					}
				}
			}
		}
	}
}


// address: 0x8009A9B4
void AS_CallBack0__Fi(int ah) {
	unsigned long OldGp;
}


// address: 0x8009AA20
void AS_CallBack1__Fi(int ah) {
	unsigned long OldGp;
}


// address: 0x8009AA8C
void AS_WasLastBlock__FiP6STRHDRP6SFXHDR(int ah, struct STRHDR *sh, struct SFXHDR *sfh) {
	unsigned char *ptr;
}


// address: 0x8009AB54
int AS_OpenStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
	int ah;
}


// address: 0x8009ABF4
char AS_GetBlock__FP6SFXHDR(struct SFXHDR *sfh) {
}


// address: 0x8009AC24
void AS_CloseStream__FP6STRHDRP6SFXHDR(struct STRHDR *sh, struct SFXHDR *sfh) {
}


// address: 0x8009AC78
unsigned short SCR_GetBlackClut__Fv() {
}


// address: 0x8009AC84
void SCR_Open__Fv() {
}


// address: 0x8009ACBC
void SCR_DumpClut__Fv() {
	struct RECT R;
	unsigned short ColVal;
	unsigned short BlankPal[64];
	{
		int f;
	}
}


// address: 0x8009AD30
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x8009AD64
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		int f;
	}
}


// address: 0x8009ADF4
// size: 0x18
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	struct PalEntry *RetPal;
}


// address: 0x8009AED0
// size: 0x18
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	struct PalEntry *RetPal;
}


// address: 0x8009AF50
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	struct RECT SourceRect;
}


// address: 0x8009AFF0
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	struct PalEntry *RetPal;
}


// address: 0x8009B038
void UpdatePals__13PalCollection(struct PalCollection *this) {
	struct PalEntry *ThisPal;
	{
		struct PalEntry *NextPal;
	}
}


// address: 0x8009B0AC
void SCR_Handler__Fv() {
}


// address: 0x8009B0D4
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x8009B0DC
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	struct PalEntry *RetObj;
}


// address: 0x8009B118
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		int f;
	}
}


// address: 0x8009B17C
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8009B1D4
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8009B22C
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8009B240
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x8009B26C
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x8009B274
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x8009B27C
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x8009B288
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8009B2C0
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x8009B2CC
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8009B2EC
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8009B338
void stub__FPcPv(char *e, void *argptr) {
}


// address: 0x8009B340
void new_eprint__FPcT0i(char *Text, char *File, int Line) {
}


// address: 0x8009B374
void TonysGameTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009B3FC
void SetAmbientLight__Fv() {
	int x;
	int y;
}


// address: 0x8009B4BC
void SetDemoPlayer__Fv() {
}


// address: 0x8009B4EC
void print_demo_task__FP4TASK(struct TASK *T) {
	{
		int demo_char;
		{
			int x;
		}
	}
}


// address: 0x8009B82C
void TonysDummyPoll__Fv() {
}


// address: 0x8009B858
void SetTonyPoll__Fv() {
}


// address: 0x8009B864
void ClearTonyPoll__Fv() {
}


// address: 0x8009B870
void load_demo_pad_data__FUl(unsigned long demo_num) {
	struct FileIO *Fs;
}


// address: 0x8009B8D0
void save_demo_pad_data__FUl(unsigned long demo_num) {
	struct FileIO *Fs;
}


// address: 0x8009B930
void set_pad_record_play__Fi(int level) {
}


// address: 0x8009B9A4
void start_demo__Fv() {
}


// address: 0x8009B9B4
void SetQuest__Fv() {
}


// address: 0x8009B9BC
void DrawManaShield__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8009B9C4
void ManaTask__FP4TASK(struct TASK *T) {
}


// address: 0x8009B9CC
void tony__Fv() {
}


// address: 0x8009BA0C
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x8009BA18
int GLUE_GetMonsterList__Fv() {
}


// address: 0x8009BA24
void GLUE_SuspendGame__Fv() {
	struct TASK *T;
}


// address: 0x8009BA78
void GLUE_ResumeGame__Fv() {
	struct TASK *T;
}


// address: 0x8009BACC
void GLUE_PreTown__Fv() {
}


// address: 0x8009BAFC
void GLUE_PreDun__Fv() {
}


// address: 0x8009BB04
bool GLUE_Finished__Fv() {
}


// address: 0x8009BB10
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x8009BB1C
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	struct DEF_ARGS *Args;
}


// address: 0x8009BB84
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	bool OldFlag;
}


// address: 0x8009BB94
bool GLUE_GetShowGameScreenFlag__Fv() {
}


// address: 0x8009BBA0
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	bool OldFlag;
}


// address: 0x8009BBB0
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	bool OldFlag;
}


// address: 0x8009BBC0
bool GLUE_HasGameStarted__Fv() {
}


// address: 0x8009BBCC
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x8009BCA4
void GLUE_DoQuake__Fii(int Time, int Amount) {
}


// address: 0x8009BCB4
void BgTask__FP4TASK(struct TASK *T) {
	struct DEF_ARGS *Args;
	bool IsTown;
	int TextId;
	int Level;
	int ObjId;
	int List;
	struct PlayerStruct *plr1;
	struct PlayerStruct *plr2;
	struct CBlocks MyBlocks;
	struct CPlayer MyPlayer;
	struct CPlayer MyPlayer2;
	struct GPanel P1Panel;
	struct GPanel P2Panel;
}


// address: 0x8009C160
// size: 0xC
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
		int f;
	}
}


// address: 0x8009C1F8
// size: 0xC
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	char TxBuff[20];
}


// address: 0x8009C254
// size: 0xC
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x8009C284
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	{
		{
			struct PInf *Inf;
		}
	}
}


// address: 0x8009C350
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructbT2(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown, bool Blocking) {
	int Id;
}


// address: 0x8009C400
// size: 0x10
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	struct MonstLevel *MLev;
	int List;
}


// address: 0x8009C4AC
void GLUE_StartGameExit__Fv() {
	{
	}
}


// address: 0x8009C518
void GLUE_Init__Fv() {
}


// address: 0x8009C520
int GetTexId__7CPlayer(struct CPlayer *this) {
}


// address: 0x8009C52C
void SetTown__7CBlocksb(struct CBlocks *this, bool Val) {
}


// address: 0x8009C534
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x8009C548
void SetDemoKeys__FPi(int *buffer) {
	struct KEY_ASSIGNS *ta;
	{
		int i;
	}
}


// address: 0x8009C620
void RestoreDemoKeys__FPi(int *buffer) {
	struct KEY_ASSIGNS *ta;
	{
		int i;
	}
}


// address: 0x8009C6B0
char *get_action_str__Fii(int pval, int combo) {
	struct KEY_ASSIGNS *ac;
	{
		int i;
	}
}


// address: 0x8009C728
int get_key_pad__Fi(int n) {
	int i;
	struct pad_assigns *pa;
}


// address: 0x8009C760
bool checkvalid__Fv() {
	int start;
	int end;
	{
		int i;
	}
}


// address: 0x8009C7C4
bool RemoveCtrlScreen__Fv() {
}


// address: 0x8009C820
unsigned char Init_ctrl_pos__Fv() {
}


// address: 0x8009C8D8
int remove_padval__Fi(int p) {
	{
		int i;
	}
}


// address: 0x8009C918
int remove_comboval__Fib(int p, bool all) {
	int n;
	{
		int i;
	}
}


// address: 0x8009C960
unsigned char set_buttons__Fii(int cline, int n) {
	struct KEY_ASSIGNS *ta;
	int cval;
	int i;
	int p;
}


// address: 0x8009CAD8
void restore_controller_settings__F8CTRL_SET(enum CTRL_SET s) {
	struct KEY_ASSIGNS *ta;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8009CB7C
bool only_one_button__Fi(int p) {
	int hand;
	int count;
}


// address: 0x8009CBA8
unsigned char main_ctrl_setup__Fv() {
	struct CPad *Pad;
	int lv;
}


// address: 0x8009D084
void PrintCtrlString__FiiUcic(int x, int y, unsigned char cjustflag, int str_num, int col) {
	struct KEY_ASSIGNS *ta;
	int i;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	int str;
	int len;
	{
		{
			int x1;
			int x2;
			int nlen;
			int otpos;
		}
	}
}


// address: 0x8009D5D8
void DrawCtrlSetup__Fv() {
	int i;
	int pnum;
	{
		{
			int otpos;
			int oldDot;
			int OldPrintOT;
			{
				{
					int lena;
					int len;
				}
			}
		}
	}
}


// address: 0x8009DAD8
void _GLOBAL__D_ctrlflag() {
}


// address: 0x8009DB00
void _GLOBAL__I_ctrlflag() {
}


// address: 0x8009DB28
unsigned short GetTick__C4CPad(struct CPad *this) {
}


// address: 0x8009DB50
unsigned short GetDown__C4CPad_addr_8009DB50(struct CPad *this) {
}


// address: 0x8009DB78
unsigned short GetUp__C4CPad(struct CPad *this) {
}


// address: 0x8009DBA0
unsigned short GetCur__C4CPad_addr_8009DBA0(struct CPad *this) {
}


// address: 0x8009DBC8
void SetPadTickMask__4CPadUs(struct CPad *this, unsigned short mask) {
}


// address: 0x8009DBD0
void SetPadTick__4CPadUs(struct CPad *this, unsigned short tick) {
}


// address: 0x8009DBD8
void SetRGB__6DialogUcUcUc_addr_8009DBD8(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8009DBF8
void SetBorder__6Dialogi_addr_8009DBF8(struct Dialog *this, int Type) {
}


// address: 0x8009DC00
void ___6Dialog_addr_8009DC00(struct Dialog *this, int __in_chrg) {
}


// address: 0x8009DC28
// size: 0x10
struct Dialog *__6Dialog_addr_8009DC28(struct Dialog *this) {
}


// address: 0x8009DCA8
int GetOverlayOtBase__7CBlocks_addr_8009DCA8() {
}


// address: 0x8009DCB0
void color_cycle__FP4TASK(struct TASK *T) {
	struct RECT ClutR;
	int cx;
	int cy;
	unsigned short ORIGPal[16];
	unsigned short VRAMPal[16];
	unsigned short CLUTPal[16];
	int paloffset;
	int y;
	bool ch;
	{
		{
			unsigned short col1;
			unsigned char r;
			unsigned char g;
			unsigned char b;
			{
				{
					{
						{
							{
								{
									int i;
									{
										unsigned short col1;
										unsigned short col2;
										unsigned char sb;
										unsigned char sg;
										unsigned char dr;
										unsigned char dg;
										unsigned char db;
										{
											int i;
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


// address: 0x8009E070
void penta_cycle_task__FP4TASK(struct TASK *T) {
	struct RECT ClutR;
	int cx;
	int cy;
	int RVal;
	{
		{
			{
				unsigned short Pal[16];
				int Col;
				{
					int f;
				}
			}
		}
	}
}


// address: 0x8009E1F0
void DrawFlameLogo__Fv() {
	struct POLY_FT4 *FT4;
	int diff;
	int x;
	int *frm;
	int *xp;
	{
		int i;
	}
}


// address: 0x8009E3A0
void TitleScreen__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x8009E3F4
void DaveLDummyPoll__Fv() {
}


// address: 0x8009E3FC
void DaveL__Fv() {
}


// address: 0x8009E424
void DoReflection__FP8POLY_FT4iii(struct POLY_FT4 *Ft4, int R, int G, int B) {
	unsigned char zV0;
	unsigned char zV2;
	unsigned char zH;
	unsigned char dH;
	unsigned char zV;
	unsigned char *s;
	unsigned char *d;
	unsigned char *Ft4m;
	short zX0;
	short zX1;
	int count;
	int n;
	int xoffset;
	int yoffset;
	short zY;
}


// address: 0x8009E764
void mteleportfx__Fv() {
	int plr;
	int br;
	{
		{
			{
				{
					int OtPos;
				}
			}
		}
	}
}


// address: 0x8009EA78
void invistimer__Fv() {
	int plr;
}


// address: 0x8009EB50
void setUVparams__FP8POLY_FT4P9FRAME_HDR(struct POLY_FT4 *Ft4, struct FRAME_HDR *Fr) {
	int zU;
	int zV;
	int zW;
	int zH;
}


// address: 0x8009EBE0
void drawparticle__Fiiiiii(int x, int y, int scale, int anim, int colour, int OtPos) {
	struct TextDat *Dat;
	struct POLY_FT4 *Ft4;
	struct FRAME_HDR *Fr;
	unsigned char SpR;
	unsigned char SpG;
	unsigned char SpB;
	int w;
	int h;
	int f;
}


// address: 0x8009EDD8
void drawpolyF4__Fiiiiii(int x, int y, int w, int h, int colour, int OtPos) {
	struct POLY_F4 *F4;
	unsigned char SpR;
	unsigned char SpG;
	unsigned char SpB;
}


// address: 0x8009EF0C
void drawpolyG4__Fiiiiiiii(int x, int y, int w, int h1, int h2, int colour0, int colour1, int OtPos) {
	struct POLY_G4 *G4;
	unsigned char SpR0;
	unsigned char SpG0;
	unsigned char SpB0;
	unsigned char SpR1;
	unsigned char SpG1;
	unsigned char SpB1;
}


// address: 0x8009F0DC
void particlejump__Fii(int ScrX, int ScrY) {
	int n;
	int partactive;
}


// address: 0x8009F2AC
void doparticlejump__Fv() {
	int ScrX;
	int ScrY;
	int ScrXOff;
	int ScrYOff;
	int WorldX;
	int WorldY;
	struct CBlocks *gblocks;
}


// address: 0x8009F440
void StartPartJump__Fiiiii(int mi, int height, int scale, int colour, int OtPos) {
	int n;
}


// address: 0x8009F594
void MonstPartJump__Fi(int m) {
	int ScrYOff;
	int WorldX;
	int WorldY;
	struct CBlocks *gblocks;
}


// address: 0x8009F6B4
void doparticlechain__Fiiiiiiiiiiii(int sx, int sy, int dx, int dy, int count, int scale, int scaledec, int semitrans, int randomize, int colour, int OtPos, int source) {
	struct TextDat *Dat;
	struct POLY_FT4 *Ft4;
	unsigned char SpR;
	unsigned char SpG;
	unsigned char SpB;
	int x;
	int y;
	int br;
	int w;
	int h;
	int f;
	int c;
	int t;
	int rand;
	int xoffs;
	int yoffs;
	int xf;
	int yf;
	int dxf;
	int dyf;
	int dxabs;
	int dyabs;
	int divisor;
	int *partexecnum;
}


// address: 0x8009FA04
void ParticleMissile__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x8009FAC0
void Teleportfx__Fiiiiiiii(int scrnx, int scrny, int width, int height, int scale, int colmask, int numpart, int OtPos) {
	struct TextDat *Dat;
	struct POLY_FT4 *Ft4;
	unsigned char SpR;
	unsigned char SpG;
	unsigned char SpB;
	int w;
	int h;
	int x;
	int y;
	int f;
	int n;
	int randu;
	int randl;
	unsigned char Rmask;
	unsigned char Gmask;
	unsigned char Bmask;
	int rand[64];
}


// address: 0x8009FDC0
void ResurrectFX__Fiiii(int x, int height, int scale, int OtPos) {
	int t;
}


// address: 0x8009FFE8
void ParticleExp__FP13MissileStructiiii(struct MissileStruct *Ms, int ScrX, int ScrY, int colour, int OtPos) {
}


// address: 0x800A0080
void GetPlrPos__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	struct RECT R;
	int ScrXOff;
	int ScrYOff;
}


// address: 0x800A01A4
void healFX__Fv() {
	int plr;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x800A02E0
void HealStart__Fi(int plr) {
}


// address: 0x800A0314
void HealotherStart__Fi(int plr) {
}


// address: 0x800A034C
void TeleStart__Fi(int plr) {
}


// address: 0x800A040C
void TeleStop__Fi(int plr) {
}


// address: 0x800A0438
void PhaseStart__Fi(int plr) {
}


// address: 0x800A046C
void PhaseEnd__Fi(int plr) {
}


// address: 0x800A0498
void ApocInit__11SPELLFX_DATP12PlayerStruct(struct SPELLFX_DAT *this, struct PlayerStruct *ptrplr) {
	struct RECT R;
	struct CBlocks *TheBlocks;
	int ScrXOff;
	int ScrYOff;
	int OtPos;
}


// address: 0x800A0680
void ApocaStart__Fi(int plr) {
}


// address: 0x800A06E4
void DaveLTask__FP4TASK(struct TASK *T) {
}


// address: 0x800A07B4
void PRIM_GetPrim__FPP7POLY_G4(struct POLY_G4 **Prim) {
}


// address: 0x800A0830
void PRIM_GetPrim__FPP7POLY_F4(struct POLY_F4 **Prim) {
}


// address: 0x800A08AC
void PRIM_GetPrim__FPP8POLY_FT4_addr_800A08AC(struct POLY_FT4 **Prim) {
}


// address: 0x800A0928
// size: 0x90
struct CPlayer *GetPlayer__7CPlayeri(int PNum) {
}


// address: 0x800A0978
int GetLastOtPos__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800A0984
int GetOtPos__7CBlocksi_addr_800A0984(struct CBlocks *this, int LogicalY) {
	int OtPos;
}


// address: 0x800A09C0
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800A09C0(struct TextDat *this, int FrNum) {
}


// address: 0x800A09DC
void SetQSpell__Fiii(int pnum, int Spell, int type) {
}


// address: 0x800A09FC
void release_spell__Fi(int pnum) {
	struct SpellTarget *spl;
}


// address: 0x800A0A60
void select_belt_item__Fi(int pnum) {
}


// address: 0x800A0A68
unsigned char any_belt_items__Fv() {
	int i;
}


// address: 0x800A0AD0
void get_last_inv__Fv() {
	int i;
}


// address: 0x800A0BFC
void get_next_inv__Fv() {
	int i;
}


// address: 0x800A0D30
void pad_func_up__Fi(int pnum) {
}


// address: 0x800A0D5C
void pad_func_down__Fi(int pnum) {
}


// address: 0x800A0D88
void pad_func_left__Fi(int pnum) {
}


// address: 0x800A0D90
void pad_func_right__Fi(int pnum) {
}


// address: 0x800A0D98
void pad_func_select__Fi(int pnum) {
}


// address: 0x800A0E5C
void SetFindMonsterXY__FP12PlayerStructi(struct PlayerStruct *p, int i) {
	{
		{
			struct MonsterStruct *m;
			{
				struct TownerStruct *t;
			}
		}
	}
}


// address: 0x800A0EEC
void pad_func_Attack__Fi(int pnum) {
	struct PlayerStruct *player;
	int x;
	int y;
	{
		{
			{
				{
					int fx;
					int fy;
					{
						{
							{
								int fx;
								int fy;
								struct PlayerStruct *plr2;
								{
									int oco;
									{
										{
											{
												int fx;
												int fy;
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


// address: 0x800A13A0
void pad_func_Action__Fi(int pnum) {
	struct PlayerStruct *player;
	int x;
	int y;
	struct DEF_ARGS *args;
	{
		{
			{
				{
					{
						{
							int ox;
							int oy;
						}
					}
				}
			}
		}
	}
}


// address: 0x800A1758
void InitTargetCursor__Fi(int pnum) {
}


// address: 0x800A178C
void RemoveTargetCursor__Fi(int pnum) {
}


// address: 0x800A17D4
bool TargetingSpell__Fi(int sp) {
}


// address: 0x800A181C
void pad_func_Cast_Spell__Fi(int pnum) {
	struct PlayerStruct *player;
	int sp;
	struct CBlocks *gblocks;
	int omp;
	unsigned char DoTarget;
	{
		{
			{
				{
					struct SpellTarget *spl;
				}
			}
		}
	}
}


// address: 0x800A1C44
void pad_func_Use_Item__Fi(int pnum) {
	{
		{
			struct PlayerStruct *player;
		}
	}
}


// address: 0x800A1E78
void pad_func_BeltList__Fi(int pnum) {
}


// address: 0x800A1FE0
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x800A2114
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x800A2244
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x800A2390
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x800A2484
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x800A255C
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x800A2618
void pad_func_Quick_Spell__Fi(int pnum) {
	struct PlayerStruct *player;
	int sp;
	char spt;
	int qps;
	int qst;
}


// address: 0x800A278C
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	int i;
	int ii;
	struct PlayerStruct *player;
	{
	}
}


// address: 0x800A2A0C
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x800A2A34
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x800A2A5C
bool sort_gold__Fi(int pnum) {
	struct found_objects *fo;
	bool ngold;
	{
		int i;
	}
}


// address: 0x800A2B64
void DrawObjSelector__FiP12PlayerStruct(int pnum, struct PlayerStruct *player) {
	char str[128];
	struct CPad *Pad;
	int cp;
	int list_size;
	int maxlen;
	struct found_objects *fo;
	int R;
	int G;
	int B;
	int i;
	int nwrap;
	int add_wrap;
	int nx;
	int ny;
	int nw;
	int nh;
	int ypos;
	{
		{
			int fx;
			int fy;
			{
				{
					{
						{
							int len;
						}
					}
				}
			}
		}
	}
}


// address: 0x800A336C
bool SelectorActive__Fv() {
}


// address: 0x800A3378
void DrawObjTask__FP4TASK(struct TASK *T) {
	struct DEF_ARGS *args;
	int pnum;
	bool op;
	bool oamap;
	struct PlayerStruct *player;
	int oseldata;
	int omp;
	bool opan;
	int opause;
	{
		{
			int x;
			int y;
		}
	}
}


// address: 0x800A36B4
void add_area_find_object__Fiii(int index, int x, int y) {
	{
		{
			struct found_objects *fo;
		}
	}
}


// address: 0x800A3724
unsigned char CheckRangeObject__Fiii(int x, int y, int distance) {
	char co;
	struct map_info *dm;
	int nitem;
	int nmonster;
	int nobject;
	bool ok;
	{
		{
			int vis_flag;
		}
	}
}


// address: 0x800A3A9C
unsigned char CheckArea__FiiiUci(int xx, int yy, int range, unsigned char allflag, int pnum) {
	struct PlayerStruct *player;
	struct SpellTarget *spl;
	bool is_myplr;
	int i;
	int dir;
	int cm;
	int ci;
	int x;
	int y;
	{
		{
			int dx;
			int dy;
			{
				{
					{
						{
							struct MonsterStruct *Monst;
							{
								{
									{
										int j;
										{
											{
												int k;
												{
													{
														{
															{
																{
																	{
																		{
																			{
																				{
																					struct MonsterStruct *Monst;
																					{
																						struct TownerStruct *Twn;
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


// address: 0x800A4080
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	{
		{
			bool done;
			int nx;
			int ny;
			{
			}
		}
	}
}


// address: 0x800A41F8
void _GLOBAL__D_gplayer() {
}


// address: 0x800A4220
void _GLOBAL__I_gplayer() {
}


// address: 0x800A4248
void SetRGB__6DialogUcUcUc_addr_800A4248(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800A4268
void SetBack__6Dialogi_addr_800A4268(struct Dialog *this, int Type) {
}


// address: 0x800A4270
void SetBorder__6Dialogi_addr_800A4270(struct Dialog *this, int Type) {
}


// address: 0x800A4278
void ___6Dialog_addr_800A4278(struct Dialog *this, int __in_chrg) {
}


// address: 0x800A42A0
// size: 0x10
struct Dialog *__6Dialog_addr_800A42A0(struct Dialog *this) {
}


// address: 0x800A4320
bool Active__11SpellTarget(struct SpellTarget *this) {
}


// address: 0x800A432C
int GetOverlayOtBase__7CBlocks_addr_800A432C() {
}


// address: 0x800A4334
unsigned short GetDown__C4CPad_addr_800A4334(struct CPad *this) {
}


// address: 0x800A435C
unsigned short GetCur__C4CPad_addr_800A435C(struct CPad *this) {
}


// address: 0x800A4384
void DEC_AddAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	int TdIndex;
}


// address: 0x800A4400
void DEC_RemoveAsDecRequestor__FP7TextDat(struct TextDat *Td) {
	int TdIndex;
}


// address: 0x800A4458
void DEC_DoDecompRequests__Fv() {
	{
		int f;
	}
}


// address: 0x800A44B4
int FindThisTd__FP7TextDat(struct TextDat *Td) {
	{
		int f;
	}
}


// address: 0x800A44EC
int FindEmptyIndex__Fv() {
	{
		int f;
	}
}


// address: 0x800A4524
void MY_TSK_Sleep__Fi(int time) {
	{
		int i;
	}
}


// address: 0x800A457C
void UPDATEPROGRESS__Fi(int inc) {
	{
		{
			{
				int i;
			}
		}
	}
}


// address: 0x800A4648
bool IsGameLoading__Fv() {
}


// address: 0x800A4654
void DrawCutScreen__Fi(int lev) {
	unsigned char barr;
	unsigned char barg;
	unsigned short prog;
	struct Dialog LBack;
	int tx;
	struct POLY_G4 *G4;
	int BarOt;
	int oldDot;
	int oldTot;
}


// address: 0x800A4A90
void PutUpCutScreenTSK__FP4TASK(struct TASK *T) {
	struct DEF_ARGS *Args;
	int lev;
	int tpx;
}


// address: 0x800A4B58
void PutUpCutScreen__Fi(int lev) {
	struct DEF_ARGS *A;
	{
		{
			{
				int f;
			}
		}
	}
}


// address: 0x800A4CA8
void TakeDownCutScreen__Fv() {
}


// address: 0x800A4D4C
void FinishBootProgress__Fv() {
}


// address: 0x800A4DD8
void FinishProgress__Fv() {
}


// address: 0x800A4E38
void PRIM_GetPrim__FPP7POLY_G4_addr_800A4E38(struct POLY_G4 **Prim) {
}


// address: 0x800A4EB4
void _GLOBAL__D_CutScr() {
}


// address: 0x800A4EDC
void _GLOBAL__I_CutScr() {
}


// address: 0x800A4F04
void SetRGB__6DialogUcUcUc_addr_800A4F04(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800A4F24
void SetBack__6Dialogi_addr_800A4F24(struct Dialog *this, int Type) {
}


// address: 0x800A4F2C
void SetBorder__6Dialogi_addr_800A4F2C(struct Dialog *this, int Type) {
}


// address: 0x800A4F34
void ___6Dialog_addr_800A4F34(struct Dialog *this, int __in_chrg) {
}


// address: 0x800A4F5C
// size: 0x10
struct Dialog *__6Dialog_addr_800A4F5C(struct Dialog *this) {
}


// address: 0x800A4FDC
int GetOverlayOtBase__7CBlocks_addr_800A4FDC() {
}


// address: 0x800A4FE4
void ___7CScreen(struct CScreen *this, int __in_chrg);

// address: 0x800A5004
void init_mem_card__FPFii_vUc(void (*handler)(), unsigned char read_dir) {
}


// address: 0x800A523C
void memcard_event__Fii(int evt, int side) {
}


// address: 0x800A5274
void init_card__Fib(int card_number, bool read_dir) {
}


// address: 0x800A5340
int ping_card__Fi(int card_number) {
}


// address: 0x800A53D4
void DealWithCard__Fi(int side) {
}


// address: 0x800A5498
void CardUpdateTask__FP4TASK(struct TASK *T) {
	int toggle;
}


// address: 0x800A54EC
void MemcardON__Fv() {
}


// address: 0x800A5558
void MemcardOFF__Fv() {
}


// address: 0x800A5590
void CheckSavedOptions__Fv() {
	int option_file;
}


// address: 0x800A5690
void card_removed__Fi(int card_number) {
}


// address: 0x800A56C8
int read_card_block__Fii(int card_number, int block) {
}


// address: 0x800A5710
int test_hw_event__Fv() {
}


// address: 0x800A5790
void ActivateMemcard__Fii(int card1, int card2) {
}


// address: 0x800A57CC
void ActivateCharacterMemcard__Fii(int card1, int card2) {
	{
		{
			int fileno;
			{
				{
				}
			}
		}
	}
}


// address: 0x800A5888
void ShowCardActionText__Fv() {
	struct Dialog SBack;
	struct RECT um;
	int X;
	int Y;
	int W;
	int H;
	int otpos;
	int oldBot;
	int oldTot;
	int lines;
	int yprintpos;
	{
		{
			{
			}
		}
	}
}


// address: 0x800A5B6C
int CountdownLoad__Fi(int Counter) {
	{
		{
			{
				int readstate;
				{
					{
						int readstate;
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x800A5D7C
int CountdownSave__Fi(int Counter) {
	int cardstate[2];
}


// address: 0x800A5E5C
void ShowLoadingBox__Fi(int Text) {
	struct Dialog SBack;
	struct RECT um;
	bool addwaitmsg;
	int W;
	int H;
	int X;
	int Y;
	int otpos;
	int oldBot;
	int oldTot;
	int lines;
	int topline;
	int yprintpos;
}


// address: 0x800A60E8
void KillItemDead__Fiii(int pnum, int InvPos, int Idx) {
	int ii;
	int iv;
}


// address: 0x800A672C
void ClearLoadCharItems__Fv() {
	int i;
}


// address: 0x800A67B4
void PantsDelay__Fv() {
	{
		int i;
	}
}


// address: 0x800A67F0
void SetRGB__6DialogUcUcUc_addr_800A67F0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800A6810
void SetBack__6Dialogi_addr_800A6810(struct Dialog *this, int Type) {
}


// address: 0x800A6818
void SetBorder__6Dialogi_addr_800A6818(struct Dialog *this, int Type) {
}


// address: 0x800A6820
void ___6Dialog_addr_800A6820(struct Dialog *this, int __in_chrg) {
}


// address: 0x800A6848
// size: 0x10
struct Dialog *__6Dialog_addr_800A6848(struct Dialog *this) {
}


// address: 0x800A68C8
int GetOverlayOtBase__7CBlocks_addr_800A68C8() {
}


// address: 0x800A68D0
void PrintSelectBack__FUs(unsigned short Str) {
}


// address: 0x800A6960
void DrawDialogBox__FiiP4RECTiiii(int e, int f, struct RECT *DRect, int X, int Y, int W, int H) {
	struct Dialog DBack;
}


// address: 0x800A6A44
void DrawSpinner__FiiUcUcUciiibiT8T8Uc(int x, int y, unsigned char SpinR, unsigned char SpinG, int SpinB, int spinradius, int spinbright, int angle, bool Sparkle, int OtPos, bool cross, bool iso, int SinStep) {
	struct POLY_FT4 *FT4;
	struct POLY_GT4 *GT4;
	struct TextDat *ThisDat;
	unsigned char rand;
	int f;
	unsigned short bright;
	unsigned short r;
	unsigned short g;
	unsigned short b;
	unsigned short r2;
	unsigned short g2;
	unsigned short b2;
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
	int radius;
	{
		int i;
	}
}


// address: 0x800A70C0
void SetLoadedLang__F9LANG_TYPE(enum LANG_TYPE LoadLang) {
}


// address: 0x800A7170
void ChangeLang__Fv() {
}


// address: 0x800A7234
void DrawLeftRight__Fv() {
}


// address: 0x800A723C
void PrintMono__Fi(int ypos) {
	char *String;
	int len;
}


// address: 0x800A72F4
void DrawMenu__Fi(int MenuNo) {
	struct OMENULIST *mptr;
	struct OMENUITEM *iptr;
	int sh;
	struct POLY_G4 *G4;
	int yoff;
	int len;
	int depth;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	int mx;
	int my;
	int BARFRAC;
	int mptrx;
	int mptry;
	{
		int i;
		{
			{
				{
					int sxp;
					int syp;
					unsigned char barg;
					unsigned char barr;
					{
						{
							int cx;
							int cy;
						}
					}
				}
			}
		}
	}
}


// address: 0x800A8314
int who_pressed__Fi(int pval) {
	struct CPad *Pad;
	struct CPad *Pad1;
}


// address: 0x800A839C
void CharacterLoadPad__Fv() {
	struct CPad *P;
	struct OMENUITEM *iptr;
}


// address: 0x800A88F0
void MemcardPad__Fv() {
	struct CPad *P;
	int move;
	struct OMENUITEM *iptr;
	{
		{
			int lcs;
		}
	}
}


// address: 0x800A9214
void SwitchMONO__Fv() {
}


// address: 0x800A9260
void SoundPad__Fv() {
	struct CPad *P;
	int move;
	struct OMENUITEM *iptr;
	int lcs;
	{
		{
			{
				int l;
				{
					{
						{
							{
								int llen;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800A9C68
void CentrePad__Fv() {
	struct CPad *P;
	struct OMENUITEM *iptr;
	int osx;
	int osy;
}


// address: 0x800A9EAC
void CalcVolumes__Fv() {
}


// address: 0x800AA008
void SetLoadedVolumes__Fv() {
}


// address: 0x800AA0B8
void GetVolumes__Fv() {
	{
		int i;
		{
			struct OMENULIST *mptr;
			struct OMENUITEM *iptr;
			{
				int s;
			}
		}
	}
}


// address: 0x800AA154
void AlterSpeedMenu__F9GM_SPEEDS(enum GM_SPEEDS gs) {
	struct OMENUITEM *it;
}


// address: 0x800AA1A8
void GameSpeedPad__Fv() {
	int cp;
	bool exit_flag;
}


// address: 0x800AA2D0
void DrawOptions__FP4TASK(struct TASK *T) {
	struct CPad *P;
}


// address: 0x800AA9CC
void ToggleOptions__Fv() {
}


// address: 0x800AAB74
void FormatPad__Fv() {
	struct CPad *P;
	int sn;
}


// address: 0x800AAE7C
void SaveOverwritePad__Fv() {
	struct CPad *P;
	int sn;
}


// address: 0x800AB0B8
void CharCardSelectMemcardPad__Fv() {
	struct OMENUITEM *iptr;
	struct CPad *P;
}


// address: 0x800AB300
void LAMBO_MovePad__FP4CPad(struct CPad *P) {
	struct OMENUITEM *iptr;
	int move;
	int lcs;
}


// address: 0x800AB4B0
void PRIM_GetPrim__FPP7POLY_G4_addr_800AB4B0(struct POLY_G4 **Prim) {
}


// address: 0x800AB52C
unsigned short GetTick__C4CPad_addr_800AB52C(struct CPad *this) {
}


// address: 0x800AB554
unsigned short GetDown__C4CPad_addr_800AB554(struct CPad *this) {
}


// address: 0x800AB57C
unsigned short GetUp__C4CPad_addr_800AB57C(struct CPad *this) {
}


// address: 0x800AB5A4
void SetPadTickMask__4CPadUs_addr_800AB5A4(struct CPad *this, unsigned short mask) {
}


// address: 0x800AB5AC
void SetPadTick__4CPadUs_addr_800AB5AC(struct CPad *this, unsigned short tick) {
}


// address: 0x800AB5B4
void SetRGB__6DialogUcUcUc_addr_800AB5B4(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800AB5D4
void SetBack__6Dialogi_addr_800AB5D4(struct Dialog *this, int Type) {
}


// address: 0x800AB5DC
void SetBorder__6Dialogi_addr_800AB5DC(struct Dialog *this, int Type) {
}


// address: 0x800AB5E4
void ___6Dialog_addr_800AB5E4(struct Dialog *this, int __in_chrg) {
}


// address: 0x800AB60C
// size: 0x10
struct Dialog *__6Dialog_addr_800AB60C(struct Dialog *this) {
}


// address: 0x800AB68C
int GetOverlayOtBase__7CBlocks_addr_800AB68C() {
}


// address: 0x800AB694
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800AB694(struct TextDat *this, int FrNum) {
}


// address: 0x800AB6B0
void SetBirdFrig__Fb(bool f) {
}


// address: 0x800AB6E4
unsigned char BirdDistanceOK__Fiiii(int WorldXa, int WorldYa, int WorldXb, int WorldYb) {
	int wx;
	int wy;
}


// address: 0x800AB73C
void AlterBirdPos__FP10BIRDSTRUCTUc(struct BIRDSTRUCT *b, unsigned char rnd) {
	int offsx;
	int offsy;
}


// address: 0x800AB894
void BirdWorld__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int wx, int wy) {
	int x;
	int y;
}


// address: 0x800AB910
bool CheckDist__Fii(int x, int y) {
	int x1;
	int y1;
	{
		int i;
	}
}


// address: 0x800AB9F8
int BirdScared__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	int scared;
	int p;
	int i;
	{
		{
			struct PlayerStruct *player;
		}
	}
}


// address: 0x800ABB24
int GetPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	{
		int n;
	}
}


// address: 0x800ABB78
void BIRD_StartHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	int nd;
	int x;
	int y;
	{
		{
			struct Perch *p;
		}
	}
}


// address: 0x800ABD4C
void BIRD_DoHop__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800ABE50
void BIRD_StartPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800ABEB8
void BIRD_DoPerch__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800ABF3C
void BIRD_DoScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800ABFE0
void CheckDirOk__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	int x;
	int y;
	int ofx;
	int ofy;
	bool posok;
	{
		int d;
		{
			{
				int i;
			}
		}
	}
}


// address: 0x800AC0F0
void BIRD_StartScatter__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800AC190
void BIRD_StartFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	struct BIRDSTRUCT *leader;
	{
		{
			{
				int i;
			}
		}
	}
}


// address: 0x800AC21C
void BIRD_DoFly__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	int pnum;
	{
		{
			{
				{
					{
						{
							int x;
							int y;
						}
					}
				}
			}
		}
	}
}


// address: 0x800AC514
void BIRD_StartLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800AC520
void BIRD_DoLanding__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
}


// address: 0x800AC58C
void PlaceFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *leader) {
	struct BIRDSTRUCT *b;
	{
		int i;
	}
}


// address: 0x800AC674
void ProcessFlock__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	struct BIRDSTRUCT *leader;
	{
		{
			int x;
			int y;
		}
	}
}


// address: 0x800AC764
void InitBird__Fv() {
	struct BIRDSTRUCT *b;
	{
		int i;
	}
}


// address: 0x800AC838
void ProcessBird__Fv() {
	struct BIRDSTRUCT *b;
	{
		int i;
	}
}


// address: 0x800AC97C
int GetBirdFrame__FP10BIRDSTRUCT(struct BIRDSTRUCT *b) {
	int banim;
}


// address: 0x800ACA14
void bscale__FP8POLY_FT4i(struct POLY_FT4 *Ft4, int height) {
	int x;
	int y;
}


// address: 0x800ACB44
void doshadow__FP10BIRDSTRUCTii(struct BIRDSTRUCT *b, int x, int y) {
	struct CBlocks *gb;
	struct POLY_FT4 *Ft4;
	struct TextDat *Dat;
	{
		{
			int ot;
		}
	}
}


// address: 0x800ACC6C
void DrawLBird__Fv() {
	struct BIRDSTRUCT *ThisBird;
	struct POLY_FT4 *Ft4;
	struct CBlocks *gblock;
	int ScrXOff;
	int ScrYOff;
	int x;
	int y;
	struct RECT R;
	struct TextDat *Dat;
	{
		{
			{
				int i;
				{
					{
						{
							int ot;
						}
					}
				}
			}
		}
	}
}


// address: 0x800ACEA0
void PRIM_GetPrim__FPP8POLY_FT4_addr_800ACEA0(struct POLY_FT4 **Prim) {
}


// address: 0x800ACF1C
int GetOtPos__7CBlocksi_addr_800ACF1C(struct CBlocks *this, int LogicalY) {
	int OtPos;
}


// address: 0x800ACF58
short PlayFMV__FPcii(char *str, int w, int h) {
	short RetVal;
	enum OVER_TYPE CurrentOver;
}


// address: 0x800AD128
void play_movie(char *pszMovie) {
	{
		{
			{
			}
		}
	}
}


// address: 0x800AD1F0
int GetTpY__FUs_addr_800AD1F0(unsigned short tpage) {
}


// address: 0x800AD20C
int GetTpX__FUs_addr_800AD20C(unsigned short tpage) {
}


// address: 0x800AD218
void LoadKanjiFont__FPc(char *name) {
	struct FileIO *Fs;
}


// address: 0x800AD2C4
void FreeKanji__Fv() {
}


// address: 0x800AD2D0
void ClearKanjiCount__Fv() {
	struct vbuffS *kl;
	int i;
}


// address: 0x800AD308
void ClearKanjiBuffer__Fv() {
	struct vbuffS *kl;
	int i;
}


// address: 0x800AD34C
void KANJI_SetCache__F10KANJI_FRMS(enum KANJI_FRMS ct) {
	struct CBlocks *BgBlocks;
	{
		{
			struct TextDat *Dat;
			{
				struct TextDat *Dat;
				{
					{
					}
				}
			}
		}
	}
}


// address: 0x800AD5D8
void LoadKanji__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
}


// address: 0x800AD708
bool SetKanjiLoaded__Fb(bool loaded) {
	bool iret;
}


// address: 0x800AD718
bool IsKanjiLoaded__Fv() {
}


// address: 0x800AD724
void KanjiSetTSK__FP4TASK(struct TASK *T) {
	struct DEF_ARGS *args;
	enum LANG_DB_NO NewLangDbNo;
}


// address: 0x800AD77C
void KANJI_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	struct TASK *T;
	struct DEF_ARGS *args;
}


// address: 0x800AD7F4
int inmem__Fs(short k) {
	struct vbuffS *kl;
	{
		int i;
	}
}


// address: 0x800AD87C
unsigned short getb__FUs(unsigned short n) {
}


// address: 0x800AD88C
void ShadeBuff__FPUcii(unsigned char *b, int col, int border) {
	{
		int y;
		{
			{
				int x;
			}
		}
	}
}


// address: 0x800ADA34
void Crunch__FPUcT0(unsigned char *s, unsigned char *db) {
	int c;
	unsigned short *d;
	{
		int y;
		{
			{
				int x;
			}
		}
	}
}


// address: 0x800ADAA8
void _get_font__FPUcUsT0(unsigned char *d, unsigned short num, unsigned char *abuff) {
	unsigned char *bp;
	long i;
	char bcy;
	char shift;
}


// address: 0x800ADB68
int getfreekan__Fv() {
	unsigned char max;
	int n;
	struct vbuffS *kl;
	{
		int i;
	}
}


// address: 0x800ADC20
// size: 0x4
enum KANJI_FRMS GetKanjiCacheFrm__Fv() {
}


// address: 0x800ADC2C
// size: 0x28
struct POLY_FT4 *GetKanjiFrm__FUs(unsigned short kan) {
	struct POLY_FT4 *ft4;
	int im;
	struct RECT r;
	unsigned char deBuff[144];
	unsigned char dekbuff[144];
	struct vbuffS *kl;
	struct TextDat *Dat;
	int TpX;
	int TpY;
	unsigned char *kbuff;
	unsigned char *kanjbuff;
	int U;
	int V;
}


// address: 0x800ADEB8
void PRIM_GetPrim__FPP8POLY_FT4_addr_800ADEB8(struct POLY_FT4 **Prim) {
}


// address: 0x800ADF34
void DumpMonsters__7CBlocks_addr_800ADF34(struct CBlocks *this) {
}


// address: 0x800ADF5C
// size: 0xC
struct ALL_DECOMP_BUFFERS *GetDecompBuffers__7TextDat(struct TextDat *this) {
}


// address: 0x800ADF80
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_800ADF80(struct TextDat *this, int FrNum) {
}


// address: 0x800ADF9C
void writeblock__FP5block(struct block *theblock) {
	{
		{
			{
				{
					{
						int i;
					}
				}
			}
		}
	}
}


// address: 0x800AE084
int PAK_DoPak__FPUcPCUci(unsigned char *Dest, unsigned char *buffer, int insize) {
	long begin;
	long end;
	long bestlength;
	int offset;
	int bestoffset;
	unsigned char *theptr;
	unsigned char *ptr1;
	unsigned char *ptr2;
	unsigned char *ptr3;
	struct block theblock;
	int inpos;
}


// address: 0x800AE2C4
int PAK_DoUnpak__FPUcPCUc(unsigned char *Dest, unsigned char *Source) {
	int outsize;
	{
		unsigned char *From;
		int size;
		int ch;
	}
}


// address: 0x800AE364
void fputc__5blockUc(struct block *this, unsigned char Val) {
}


// address: 0x800AE38C
void RemoveHelp__Fv() {
}


// address: 0x800AE3A0
void HelpPad__Fv() {
	struct CPad *Pad;
}


// address: 0x800AE648
int GetControlKey__FiPb(int str, bool *iscombo) {
	struct KEY_ASSIGNS *ta;
	{
		int i;
	}
}


// address: 0x800AE6F0
void InitHelp__Fv() {
}


// address: 0x800AE73C
int DrawHelpLine__FiiPccccP10HelpStruct(int x, int y, char *txt, char R, int G, int B, struct HelpStruct *hp) {
	int eln;
	{
		{
			int key;
			bool combo;
			{
				{
					int nkey;
				}
			}
		}
	}
}


// address: 0x800AE950
void DisplayHelp__Fv() {
	struct HelpStruct *hp;
	int y;
	{
		int i;
		{
			char *txt;
			{
				{
					{
						{
							int nlen;
						}
					}
				}
			}
		}
	}
}


// address: 0x800AECD0
void DrawHelp__Fv() {
	struct Dialog txtBack;
	int otpos;
	int oldDot;
	int OldPrintOT;
}


// address: 0x800AEF48
void _GLOBAL__D_DrawHelp__Fv() {
}


// address: 0x800AEF88
void _GLOBAL__I_DrawHelp__Fv() {
}


// address: 0x800AEFB0
void SetRGB__6DialogUcUcUc_addr_800AEFB0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800AEFD0
void SetBorder__6Dialogi_addr_800AEFD0(struct Dialog *this, int Type) {
}


// address: 0x800AEFD8
void ___6Dialog_addr_800AEFD8(struct Dialog *this, int __in_chrg) {
}


// address: 0x800AF000
// size: 0x10
struct Dialog *__6Dialog_addr_800AF000(struct Dialog *this) {
}


// address: 0x800AF080
int GetOverlayOtBase__7CBlocks_addr_800AF080() {
}


// address: 0x800AF088
unsigned short GetTick__C4CPad_addr_800AF088(struct CPad *this) {
}


// address: 0x800AF0B0
unsigned short GetDown__C4CPad_addr_800AF0B0(struct CPad *this) {
}


// address: 0x800AF0D8
void SetPadTickMask__4CPadUs_addr_800AF0D8(struct CPad *this, unsigned short mask) {
}


// address: 0x800AF0E0
void SetPadTick__4CPadUs_addr_800AF0E0(struct CPad *this, unsigned short tick) {
}


// address: 0x800AF0E8
void DisplayMonsterTypes__Fv() {
}


// address: 0x800AF0F0
bool IsAutoTarget__Fi(int Spell) {
	{
		int i;
	}
}


// address: 0x800AF128
int GetXOff__Fii(int wx, int wy) {
	int xo;
}


// address: 0x800AF170
int GetYOff__Fii(int wx, int wy) {
	int yo;
}


// address: 0x800AF1BC
void GetScrXY__FPiT0(int *wx, int *wy) {
	struct CBlocks *gblocks;
	struct RECT R;
	int plx;
	int ply;
	int xo;
	int x;
	int y;
}


// address: 0x800AF28C
void ClearTrails__11SpellTarget(struct SpellTarget *this) {
	{
		int i;
	}
}


// address: 0x800AF2B4
void Init__11SpellTargeti(struct SpellTarget *this, int plrn) {
	{
		{
			{
				{
					{
						{
							int SplLvl;
						}
					}
				}
			}
		}
	}
}


// address: 0x800AF518
void Remove__11SpellTarget(struct SpellTarget *this) {
}


// address: 0x800AF57C
void DrawArrow__11SpellTargetii(struct SpellTarget *this, int x1, int y1) {
	int bright;
	char r;
	char g;
	char b;
	int otpos;
	{
		int ni;
		{
			int i;
			int ni;
		}
	}
}


// address: 0x800AF7F8
void Show__11SpellTarget(struct SpellTarget *this) {
	int x;
	int y;
	struct CPad *Pad;
	int otx;
	int oty;
	int cp;
	int plx;
	int ply;
	struct MonsterStruct *Monst;
	int ops;
	{
		{
			int vis_flag;
			int inthatx;
			int inthaty;
			{
				{
					{
						int d;
					}
				}
			}
		}
	}
}


// address: 0x800AFD14
void ForceTarget__11SpellTargetiii(struct SpellTarget *this, int monst, int x, int y) {
}


// address: 0x800AFE68
bool TargetActive__Fi(int pnum) {
}


// address: 0x800AFE90
// size: 0x48
struct SpellTarget *GetSpellTarget__Fi(int pnum) {
}


// address: 0x800AFEB0
void ArrowTask__FP4TASK(struct TASK *T) {
	struct DEF_ARGS *args;
	int pnum;
	int times;
	int bright;
	enum TARGET targ;
	struct RECT R;
	int angle;
	int r;
	int g;
	int b;
	{
		{
			{
				int plx;
				int ply;
				int otpos;
				{
					{
						{
							struct PlayerStruct *ptrplr;
							{
								struct MonsterStruct *Monst;
								{
									struct MissileStruct *Miss;
									int pxo;
									int pyo;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800B0260
void SPL_Arrow__F6TARGETiii(enum TARGET t, int pnum, int times, int size) {
	struct DEF_ARGS *args;
	struct TASK *T;
}


// address: 0x800B02E0
bool Active__11SpellTarget_addr_800B02E0(struct SpellTarget *this) {
}


// address: 0x800B02EC
int GetOverlayOtBase__7CBlocks_addr_800B02EC() {
}


// address: 0x800B02F4
unsigned short GetCur__C4CPad_addr_800B02F4(struct CPad *this) {
}


// address: 0x8003017C
unsigned char TrimCol__Fs_addr_8003017C(short col) {
}


// address: 0x800301B4
void DrawSpellCel__FllUclUcc(long xp, long yp, unsigned char Trans, long nCel, int w, int sel) {
	struct TextDat *ThisDat;
	struct FRAME_HDR *Fr;
	struct POLY_FT4 *Ft4;
	struct POLY_GT4 *GT4;
	struct TP_LOAD_HDR *Tp;
	int SpellW;
	int SpellH;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	int x0;
	int x1;
	int x2;
	int x3;
	int y0;
	int y1;
	int y2;
	int y3;
	int u0;
	int u1;
	int u2;
	int u3;
	int v0;
	int v1;
	int v2;
	int v3;
	int otpos;
	{
		{
			{
				{
					int X;
					int Y;
					int SW;
					int SH;
					struct PAL *Pal;
					int st;
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x80030D38
void SetSpellTrans__Fc(char t) {
}


// address: 0x80030D44
void DrawSpellBookTSK__FP4TASK(struct TASK *T) {
	int CountDown;
	int i;
	{
		int omp;
	}
}


// address: 0x80030ED4
void DrawSpeedSpellTSK__FP4TASK(struct TASK *T) {
	struct DEF_ARGS *args;
	int pnum;
	bool alive;
	{
		int old_opts;
	}
}


// address: 0x80031004
void ToggleSpell__Fi(int pnum) {
	struct DEF_ARGS *args;
}


// address: 0x800310B8
void DrawSpellList__Fv() {
	int x;
	int y;
	int i;
	int j;
	int t;
	unsigned long mask;
	unsigned long spl;
	int s;
	int c;
	int v;
	int NoSpells;
	unsigned char trans;
	struct PlayerStruct *player;
	struct CPad *P;
	int lx;
	int ly;
	int NoYSpells;
	int NoXSpells;
	int PLEFT;
	int PRIGHT;
	{
		{
			{
				{
					{
						{
							bool Flag;
						}
					}
				}
			}
		}
	}
}


// address: 0x80031D54
void SetSpell__Fi(int pnum) {
}


// address: 0x80031E60
void AddPanelString__FPCci(char *str, int just) {
}


// address: 0x80031F20
void ClearPanel__Fv() {
}


// address: 0x80031F50
void InitPanelStr__Fv() {
}


// address: 0x80031F70
void InitControlPan__Fv() {
	int i;
}


// address: 0x8003219C
void DrawCtrlPan__Fv() {
}


// address: 0x800321C8
void DoAutoMap__Fv() {
}


// address: 0x80032228
void CheckPanelInfo__Fv() {
	int (*_pSpell)[1];
	int c;
	int s;
	int v;
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


// address: 0x80032948
void FreeControlPan__Fv() {
	{
		void *p__p;
		{
			void *p__p;
			{
				void *p__p;
				{
					void *p__p;
					{
						void *p__p;
						{
							void *p__p;
							{
								void *p__p;
								{
									void *p__p;
									{
										void *p__p;
										{
											void *p__p;
											{
												void *p__p;
												{
													void *p__p;
													{
														void *p__p;
														{
															void *p__p;
															{
																void *p__p;
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


// address: 0x80032A58
int CPrintString__FiPci(int No, char *pszStr, int Just) {
	enum TXT_JUST Justify;
	unsigned char R;
	unsigned char G;
	unsigned char B;
}


// address: 0x80032B74
void PrintInfo__Fv() {
	int NoOfLines;
	int nOffset1;
	int nlines;
	int PageOffset;
	{
		{
			{
				int i;
				{
					{
						{
							{
								int i;
								{
									int i;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80032FA4
void DrawInfoBox__FP4RECT(struct RECT *InfoRect) {
	int pnum;
	{
		{
			{
				{
					{
						{
							int nGold;
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


// address: 0x800336D8
void MY_PlrStringXY__Fv() {
	struct CSDATA *ptr;
	char r;
	char g;
	char b;
	int x;
	int y;
	int w;
	int len;
	struct RECT Angle;
}


// address: 0x80033DE8
void ADD_PlrStringXY__FPCcc(char *pszStr, char col) {
	struct CSDATA *ptr;
}


// address: 0x80033E90
void DrawPlus__Fii(int n, int pnum) {
	struct TextDat *ThisDat;
	struct POLY_FT4 *Ft4;
	int otpos;
	int x;
	int y;
}


// address: 0x80034028
void ChrCheckValidButton__Fi(int move) {
	int pc;
	int count;
	{
		int i;
	}
}


// address: 0x80034334
void DrawArrows__Fv() {
	struct TextDat *ThisDat;
	struct POLY_FT4 *Ft4;
	unsigned char flip;
	int x;
	int otpos;
}


// address: 0x80034434
void BuildChr__Fv() {
	char c;
	char chrstr[64];
	long mind;
	long maxd;
	int hper;
	int ac;
	{
		{
		}
	}
}


// address: 0x80035698
void DrawChr__Fv() {
	char chrstr[64];
	int pc;
	struct CPad *P;
	{
		{
			int llus;
			int move;
		}
	}
}


// address: 0x80035B48
void DrawChrTSK__FP4TASK(struct TASK *T) {
	int omp;
}


// address: 0x80035C58
void DrawLevelUpIcon__Fi(int pnum) {
}


// address: 0x80035CEC
void CheckChrBtns__Fv() {
	int pc;
}


// address: 0x80036074
int DrawDurIcon4Item__FPC10ItemStructii(struct ItemStruct *pItem, int x, int c) {
}


// address: 0x800360F8
void RedBack__Fv() {
	struct TextDat *ThisDat;
	struct POLY_FT4 *FT4;
}


// address: 0x800361F0
void PrintSBookStr__FiiiPCcUcUc(int x, int y, int cspel, char *pszStr, int bright, int Staff) {
	unsigned char r;
	unsigned char g;
	unsigned char b;
}


// address: 0x80036478
char GetSBookTrans__FiUc(int ii, unsigned char townok) {
	char st;
}


// address: 0x800366D8
void DrawSpellBook__Fb(bool DrawBg) {
	int i;
	int ii;
	int x;
	int y;
	int mind;
	int maxd;
	int sx;
	int sy;
	unsigned long tspls;
	char st;
	char c;
	int v;
	unsigned char bright;
	char Num[4];
	int bw;
	struct CPad *P;
	int lsbooktab;
	int lcur_spel;
}


// address: 0x80037280
void CheckSBook__Fv() {
	unsigned long tspls;
	char st;
	int cspel;
	{
		{
			{
				bool splok;
			}
		}
	}
}


// address: 0x8003751C
char *get_pieces_str__Fi(int nGold) {
}


// address: 0x80037550
void _GLOBAL__D_DrawLevelUpFlag() {
}


// address: 0x80037578
void _GLOBAL__I_DrawLevelUpFlag() {
}


// address: 0x800375B4
unsigned short GetTick__C4CPad_addr_800375B4(struct CPad *this) {
}


// address: 0x800375DC
unsigned short GetDown__C4CPad_addr_800375DC(struct CPad *this) {
}


// address: 0x80037604
void SetPadTickMask__4CPadUs_addr_80037604(struct CPad *this, unsigned short mask) {
}


// address: 0x8003760C
void SetPadTick__4CPadUs_addr_8003760C(struct CPad *this, unsigned short tick) {
}


// address: 0x80037614
void SetRGB__6DialogUcUcUc_addr_80037614(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x80037634
void SetBack__6Dialogi_addr_80037634(struct Dialog *this, int Type) {
}


// address: 0x8003763C
void SetBorder__6Dialogi_addr_8003763C(struct Dialog *this, int Type) {
}


// address: 0x80037644
void ___6Dialog_addr_80037644(struct Dialog *this, int __in_chrg) {
}


// address: 0x8003766C
// size: 0x10
struct Dialog *__6Dialog_addr_8003766C(struct Dialog *this) {
}


// address: 0x800376EC
int GetOverlayOtBase__7CBlocks_addr_800376EC() {
}


// address: 0x800376F4
int GetMaxOtPos__7CBlocks_addr_800376F4() {
}


// address: 0x800376FC
// size: 0x8
struct PAL *GetPal__7TextDati_addr_800376FC(struct TextDat *this, int PalNum) {
}


// address: 0x80037718
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_80037718(struct TextDat *this, int FrNum) {
}


// address: 0x80037734
void InitCursor__Fv() {
}


// address: 0x8003773C
void FreeCursor__Fv() {
}


// address: 0x80037744
void SetICursor__Fi(int i) {
}


// address: 0x800377A0
void SetCursor__Fi(int i) {
}


// address: 0x80037804
void NewCursor__Fi(int i) {
}


// address: 0x80037824
void InitLevelCursor__Fv() {
}


// address: 0x80037884
void CheckTown__Fv() {
	int ocursmx;
	int ocursmy;
	{
		int i;
		{
			int mx;
			{
				{
					{
						int dir;
					}
				}
			}
		}
	}
}


// address: 0x80037B18
void CheckRportal__Fv() {
	int ocursmx;
	int ocursmy;
	{
		int i;
		{
			int mx;
			{
				{
					{
						int dir;
					}
				}
			}
		}
	}
}


// address: 0x80037D80
void CheckCursMove__Fv() {
}


// address: 0x80037D88
void InitDead__Fv() {
	int nd;
	int i;
	int mi;
	int mtypes[190];
}


// address: 0x80037F8C
void AddDead__Fiici(int dx, int dy, char dv, int ddir) {
}


// address: 0x80037FAC
void FreeGameMem__Fv() {
}


// address: 0x80037FE4
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x800380D4
void free_game__Fv() {
	{
		int i;
	}
}


// address: 0x80038148
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	unsigned char fExitProgram;
	unsigned int uMsg;
}


// address: 0x8003820C
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		unsigned char fExitProgram;
		unsigned int uMsg;
	}
}


// address: 0x8003840C
void run_game_loop__FUi(unsigned int uMsg) {
	unsigned long (*saveProc)();
	struct MSG msg;
}


// address: 0x80038574
unsigned char TryIconCurs__Fv() {
}


// address: 0x80038894
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x8003889C
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80038930
void LoadLvlGFX__Fv() {
	char *LoadFile;
}


// address: 0x800389E8
void LoadMegaTiles__FPCc(char *LoadFile) {
	struct FileIO *MyIo;
}


// address: 0x80038A78
void LoadAllGFX__Fv() {
}


// address: 0x80038A98
void CreateLevel__Fi(int lvldir) {
	long hnd;
}


// address: 0x80038B90
void LoCreateLevel__FPv() {
	int lvldir;
}


// address: 0x80038CF4
void ClearOutDungeonMap__Fv() {
	bool istown;
	unsigned short val;
	{
		int x;
		{
			{
				int y;
				{
					int y;
					int x;
					{
						{
							int x;
							{
								int y;
								int x;
								{
									{
										int x;
										{
											int y;
											int x;
											{
												{
													int x;
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


// address: 0x80038EF4
void AddQuestItems__Fv() {
}


// address: 0x80038F94
void AllSolid__Fii(int x, int y) {
}


// address: 0x80038FD4
void FillCrapBits__Fv() {
	struct QuestStruct *qs;
	{
		{
			{
				{
					int x;
					int y;
				}
			}
		}
	}
}


// address: 0x80039174
void Lsaveplrpos__Fv() {
}


// address: 0x80039220
void Lrestoreplrpos__Fv() {
}


// address: 0x80039270
void LoadGameLevel__FUci(unsigned char firstflag, int lvldir) {
	int i;
	int j;
	{
		{
			unsigned char visited;
		}
	}
}


// address: 0x80039BA8
void SetSpeed__F9GM_SPEEDS(enum GM_SPEEDS Speed) {
}


// address: 0x80039BBC
// size: 0x4
enum GM_SPEEDS GetSpeed__Fv() {
}


// address: 0x80039BC8
void game_logic__Fv() {
	int Frames;
	int ThisTick;
	int SinceLast;
}


// address: 0x80039DB0
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x80039E58
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x80039EB8
void alloc_plr__Fv() {
}


// address: 0x80039EC0
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x80039EC8
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x80039EE8
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x80039F08
void app_fatal(char *pszFile) {
}


// address: 0x80039F38
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x80039F60
void DoMemCardFromInGame__Fv() {
}


// address: 0x80039F88
int GetActiveTowner__Fi(int t) {
	{
		int i;
	}
}


// address: 0x80039FDC
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	int i;
}


// address: 0x80039FFC
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x8003A04C
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x8003A1A4
void InitQstSnds__Fi(int i) {
	int j;
	{
		int quest;
	}
}


// address: 0x8003A264
void InitSmith__Fv() {
	{
		int i;
	}
}


// address: 0x8003A394
void InitBarOwner__Fv() {
	{
		int i;
	}
}


// address: 0x8003A4CC
void InitTownDead__Fv() {
	{
		int i;
	}
}


// address: 0x8003A600
void InitWitch__Fv() {
	{
		int i;
	}
}


// address: 0x8003A734
void InitBarmaid__Fv() {
	{
		int i;
	}
}


// address: 0x8003A868
void InitBoy__Fv() {
	{
		int i;
	}
}


// address: 0x8003A9A4
void InitHealer__Fv() {
	{
		int i;
	}
}


// address: 0x8003AAD8
void InitTeller__Fv() {
	{
		int i;
	}
}


// address: 0x8003AC0C
void InitDrunk__Fv() {
	{
		int i;
	}
}


// address: 0x8003AD40
void InitCows__Fv() {
	int i;
	int x;
	int y;
	int d;
	int x2;
	int y2;
}


// address: 0x8003AFD8
void InitTowners__Fv() {
}


// address: 0x8003B064
void FreeTownerGFX__Fv() {
	int i;
	{
		{
			{
				{
					{
						{
							{
								{
									void *p__p;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8003B108
void TownCtrlMsg__Fi(int i) {
	int p;
	int dx;
	int dy;
}


// address: 0x8003B1F0
void TownBlackSmith__Fv() {
	int tidx;
}


// address: 0x8003B27C
void TownBarOwner__Fv() {
	int tidx;
}


// address: 0x8003B318
void TownDead__Fv() {
	int tidx;
}


// address: 0x8003B400
void TownHealer__Fv() {
}


// address: 0x8003B428
void TownStory__Fv() {
}


// address: 0x8003B450
void TownDrunk__Fv() {
}


// address: 0x8003B478
void TownBoy__Fv() {
}


// address: 0x8003B4A0
void TownWitch__Fv() {
}


// address: 0x8003B4C8
void TownBarMaid__Fv() {
}


// address: 0x8003B4F0
void TownCow__Fv() {
}


// address: 0x8003B518
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


// address: 0x8003B768
// size: 0x6C
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x8003B83C
void CowSFX__Fi(int pnum) {
	int snSFX[3][3];
	int snLastCowSFX;
}


// address: 0x8003B958
void TownerTalk__Fii(int first, int t) {
}


// address: 0x8003B998
void TalkToTowner__Fii(int p, int t) {
	int i;
	int dx;
	int dy;
	struct ItemStruct *Item;
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


// address: 0x8003CF34
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x8003CF5C
void stream_stop__Fv() {
}


// address: 0x8003CFB8
void stream_pause__Fv() {
}


// address: 0x8003D01C
void stream_resume__Fv() {
}


// address: 0x8003D06C
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003D158
void stream_update__Fv() {
}


// address: 0x8003D160
void sfx_stop__Fv() {
	{
		unsigned long d;
	}
}


// address: 0x8003D17C
void InitMonsterSND__Fi(int monst) {
	int mtype;
}


// address: 0x8003D1D4
void FreeMonsterSnd__Fv() {
}


// address: 0x8003D1DC
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	char Temp[64];
	long volume;
	long pan;
	int scrx;
	int scry;
	struct CBlocks *gblocks;
	struct RECT R;
	long vol;
}


// address: 0x8003D3C4
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	long lPan;
	long lVolume;
}


// address: 0x8003D528
void PlayEffect__Fii(int i, int mode) {
	int mi;
	long lPan;
	long lVolume;
}


// address: 0x8003D670
int RndSFX__Fi(int psfx) {
	int nRand;
}


// address: 0x8003D718
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003D784
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003D830
void sound_stop__Fv() {
	int mi;
	int mode;
	int nr;
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


// address: 0x8003D8C8
void sound_update__Fv() {
}


// address: 0x8003D8FC
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003D940
void sound_init__Fv() {
	unsigned char bLoadMask;
}


// address: 0x8003D9E8
void stream_fade__Fv() {
}


// address: 0x8003DA28
int GetDirection__Fiiii(int x1, int y1, int x2, int y2) {
	int mx;
	int my;
	int md;
}


// address: 0x8003DACC
void SetRndSeed__Fl(long s) {
}


// address: 0x8003DADC
long GetRndSeed__Fv() {
}


// address: 0x8003DB24
long ENG_random__Fl(long v) {
}


// address: 0x8003DB90
unsigned char *DiabloAllocPtr__FUl(unsigned long dwBytes) {
}


// address: 0x8003DBDC
void mem_free_dbg__FPv(void *p) {
}


// address: 0x8003DC2C
unsigned char *LoadFileInMem__FPCcPUl(char *pszName, unsigned long *pdwFileLen) {
}


// address: 0x8003DC34
void PlayInGameMovie__FPCc(char *pszMovie) {
}


// address: 0x8003DC3C
void Enter__9CCritSect(struct CCritSect *this) {
}


// address: 0x8003DC44
void InitDiabloMsg__Fc(char e) {
	int i;
}


// address: 0x8003DCD8
void ClrDiabloMsg__Fv() {
	{
		int i;
	}
}


// address: 0x8003DD04
void DrawDiabloMsg__Fv() {
	struct RECT MsgBox;
}


// address: 0x8003DE38
void interface_msg_pump__Fv() {
}


// address: 0x8003DE40
void ShowProgress__FUi(unsigned int uMsg) {
	unsigned long (*saveProc)();
}


// address: 0x8003E214
void InitAllItemsUseable__Fv() {
	{
		int f;
	}
}


// address: 0x8003E24C
void InitItemGFX__Fv() {
}


// address: 0x8003E254
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003E2F0
void AddInitItems__Fv() {
	int j;
	{
		int i;
		{
			int ii;
			int xx;
			int yy;
		}
	}
}


// address: 0x8003E4F8
void InitItems__Fb(bool re_init) {
	int i;
}


// address: 0x8003E6B0
void CalcPlrItemVals__FiUc(int p, unsigned char Loadgfx) {
	int mind;
	int maxd;
	int tac;
	int g;
	int i;
	int mi;
	int bdam;
	int btohit;
	int bac;
	int sadd;
	int madd;
	int dadd;
	int vadd;
	int fr;
	int lr;
	int mr;
	int dmod;
	int ghit;
	int lrad;
	int ihp;
	int imana;
	int spllvladd;
	int enac;
	int fmin;
	int fmax;
	int lmin;
	int lmax;
	long iflgs;
	unsigned long spl;
	unsigned long t;
	struct PlayerStruct *ptrplr;
	{
		{
			struct ItemStruct *itm;
			{
				{
					int tmpac;
				}
			}
		}
	}
}


// address: 0x8003F130
void CalcPlrScrolls__Fi(int p) {
	int i;
	unsigned long t;
}


// address: 0x8003F4B0
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			unsigned long t;
		}
	}
}


// address: 0x8003F57C
void CalcSelfItems__Fi(int pnum) {
	int i;
	struct PlayerStruct *p;
	unsigned char sf;
	unsigned char changeflag;
	int sa;
	int ma;
	int da;
}


// address: 0x8003F6DC
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003F728
void SetItemMinStats__FPC12PlayerStructP10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003F754
void CalcPlrItemMin__Fi(int pnum) {
	int i;
	struct ItemStruct *pi;
	struct PlayerStruct *p;
}


// address: 0x8003F834
void CalcPlrBookVals__Fi(int p) {
	int i;
	int slvl;
}


// address: 0x8003FB18
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003FBC8
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	struct ItemDataStruct *pAllItem;
}


// address: 0x8003FCE0
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003FD0C
void GetGoldSeed__FiP10ItemStruct(int pnum, struct ItemStruct *h) {
	int i;
	int ii;
	int s;
	unsigned char doneflag;
}


// address: 0x8003FE74
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003FE7C
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003FEAC
void CreatePlrItems__Fi(int p) {
	int i;
	struct ItemStruct *pi;
}


// address: 0x8004040C
unsigned char ItemSpaceOk__Fii(int i, int j) {
	int oi;
}


// address: 0x8004068C
unsigned char GetItemSpace__Fiic(int x, int y, char inum) {
	int i;
	int j;
	int xx;
	int yy;
	int rs;
	unsigned char savail;
}


// address: 0x800408A4
void GetSuperItemSpace__Fiic(int x, int y, char inum) {
	int xx;
	int yy;
	{
		int l;
		{
			{
				int j;
				{
					{
						int i;
					}
				}
			}
		}
	}
}


// address: 0x800409FC
void GetSuperItemLoc__FiiRiT2(int x, int y, int *xx, int *yy) {
	{
		int l;
		{
			{
				int j;
				{
					{
						int i;
					}
				}
			}
		}
	}
}


// address: 0x80040AC4
void CalcItemValue__Fi(int i) {
	int v;
}


// address: 0x80040B7C
void GetBookSpell__Fii(int i, int lvl) {
	int rv;
	int s;
	int bs;
}


// address: 0x80040DDC
void GetStaffPower__FiiiUc(int i, int lvl, int bs, unsigned char onlygood) {
	int l[256];
	int nl;
	int j;
	int preidx;
	char istr[128];
	unsigned char addok;
}


// address: 0x80040FC4
void GetStaffSpell__FiiUc(int i, int lvl, unsigned char onlygood) {
	int rv;
	int s;
	int l;
	int bs;
	int maxc;
	int minc;
	{
		{
			int v;
		}
	}
}


// address: 0x8004129C
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	int rndv;
}


// address: 0x8004180C
int RndPL__Fii(int param1, int param2) {
}


// address: 0x80041840
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x800418B4
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	int r;
	int r2;
}


// address: 0x80042FE4
void GetItemPower__FiiilUc(int i, int minlvl, int maxlvl, long flgs, int onlygood) {
	int pre;
	int post;
	int l[256];
	int nl;
	int j;
	int preidx;
	int sufidx;
	char istr[128];
	unsigned char goe;
}


// address: 0x80043434
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x80043530
void SetupItem__Fi(int i) {
	int it;
}


// address: 0x80043660
int RndItem__Fi(int m) {
	int ril[512];
	int ri;
	int i;
}


// address: 0x80043894
int RndUItem__Fi(int m) {
	int ril[512];
	int ri;
	int i;
	unsigned char okflag;
}


// address: 0x80043ADC
int RndAllItems__Fv() {
	int ril[512];
	int ri;
	int i;
}


// address: 0x80043C40
int RndTypeItems__Fii(int itype, int imid) {
	int ril[512];
	int ri;
	int i;
	unsigned char okflag;
}


// address: 0x80043DB0
int CheckUnique__FiiiUc(int i, int lvl, int uper, unsigned char recreate) {
	int j;
	int idata;
	unsigned char uok[128];
	int numu;
}


// address: 0x80043F54
void GetUniqueItem__Fii(int i, int _uid) {
	long uid;
	long OUid;
}


// address: 0x800442B4
void SpawnUnique__Fiii(int uid, int x, int y) {
	int ii;
	int itype;
}


// address: 0x800443F4
void ItemRndDur__Fi(int ii) {
}


// address: 0x80044490
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int _iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	int iblvl;
	int uid;
	int iseed;
}


// address: 0x800447C8
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	int ii;
	int idx;
	unsigned char onlygood;
}


// address: 0x80044A20
void CreateItem__Fiii(int uid, int x, int y) {
	int ii;
	int idx;
}


// address: 0x80044BD8
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	int ii;
	int idx;
}


// address: 0x80044D20
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	int idx;
}


// address: 0x80044E04
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	int ii;
}


// address: 0x80044EC4
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	int ii;
	int idx;
}


// address: 0x80045008
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x80045208
void SpawnQuestItem__Fiiiii(int itemid, int x, int y, int randarea, int selflag) {
	int i;
	int j;
	unsigned char failed;
	{
		{
			int tries;
		}
	}
}


// address: 0x80045454
void SpawnRock__Fv() {
	int i;
	int ii;
	int ostand;
	int xx;
	unsigned char done;
}


// address: 0x80045600
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	int it;
}


// address: 0x800457B8
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x8004580C
void ItemDoppel__Fv() {
	int idoppelx;
	struct ItemStruct *i;
}


// address: 0x800458CC
void ProcessItems__Fv() {
	int i;
	int ii;
	int numitemslist;
	int count;
	{
		{
			{
				int j;
				{
					{
						{
							{
								{
									{
										{
											{
												int it;
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


// address: 0x80045B70
void FreeItemGFX__Fv() {
}


// address: 0x80045B78
void GetItemStr__Fi(int i) {
	{
		{
			{
				int nGold;
			}
		}
	}
}


// address: 0x80045D20
void CheckIdentify__Fii(int pnum, int cii) {
	struct ItemStruct *pi;
	struct PlayerStruct *p;
}


// address: 0x80045E1C
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	int d;
	int rep;
}


// address: 0x80045F0C
void DoRepair__Fii(int pnum, int cii) {
	struct PlayerStruct *p;
	struct ItemStruct *pi;
}


// address: 0x80045FD0
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x80046038
void DoRecharge__Fii(int pnum, int cii) {
	struct PlayerStruct *p;
	struct ItemStruct *pi;
	{
		{
			int r;
		}
	}
}


// address: 0x8004615C
void PrintItemOil__Fc(char IDidx) {
	int StrVal;
}


// address: 0x80046258
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	int v;
	char *tstr;
}


// address: 0x80046A1C
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80046C7C
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
	{
		{
			{
				{
					char tsrt[40];
					{
						{
							{
								{
									{
										{
											char *tstr;
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


// address: 0x800470F8
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
	{
		{
			{
				{
					char tsrt[40];
				}
			}
		}
	}
}


// address: 0x80047464
void CastScroll__Fii(int pnum, int Spell) {
	struct PlayerStruct *ptrplr;
	{
		{
			int dx;
			int dy;
		}
	}
}


// address: 0x800476F0
void UseItem__Fiii(int p, int Mid, int spl) {
	long l;
	unsigned long t;
	struct PlayerStruct *ptrplr;
}


// address: 0x80047D04
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	unsigned char sf;
}


// address: 0x80047D98
unsigned char PremiumItemOk__Fi(int i) {
	unsigned char rv;
}


// address: 0x80047E14
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	int ril[512];
	int ri;
	int i;
}


// address: 0x80047F18
void SpawnOnePremium__Fii(int i, int plvl) {
	int itype;
	int maxval;
	struct ItemStruct holditem;
}


// address: 0x8004820C
void SpawnPremium__Fi(int lvl) {
	int i;
}


// address: 0x800485AC
void WitchBookLevel__Fi(int ii) {
	int slvl;
}


// address: 0x80048788
void SpawnStoreGold__Fv() {
}


// address: 0x80048858
void RecalcStoreStats__Fv() {
	int i;
}


// address: 0x80048B3C
int ItemNoFlippy__Fv() {
	int r;
}


// address: 0x80048BA0
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	int ii;
	int idx;
	unsigned char done;
}


// address: 0x80048D30
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	int ii;
	int idx;
	unsigned char done;
}


// address: 0x80048EAC
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	int ii;
	int idx;
	unsigned char done;
}


// address: 0x80049028
void DrawUniqueInfo__Fv() {
	int u;
}


// address: 0x80049198
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	int PreIdx;
	int SufIdx;
	char PreStr[64];
	char ItemStr[64];
	char SufStr[64];
	char ltstr[64];
}


// address: 0x80049608
unsigned char SmithItemOk__Fi(int i) {
	unsigned char rv;
}


// address: 0x8004966C
int RndSmithItem__Fi(int lvl) {
	int ril[512];
	int ri;
	int i;
}


// address: 0x80049774
unsigned char WitchItemOk__Fi(int i) {
	unsigned char rv;
}


// address: 0x80049804
int RndWitchItem__Fi(int lvl) {
	int ril[512];
	int ri;
	int i;
	int pi;
	{
		{
			{
				{
					int is;
				}
			}
		}
	}
}


// address: 0x800499B0
void BubbleSwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	struct ItemStruct h;
}


// address: 0x80049AB8
void SortWitch__Fv() {
	int j;
	int k;
	unsigned char sorted;
}


// address: 0x80049C48
int RndBoyItem__Fi(int lvl) {
	int ril[512];
	int ri;
	int i;
}


// address: 0x80049D64
unsigned char HealerItemOk__Fi(int i) {
	unsigned char rv;
}


// address: 0x80049F18
int RndHealerItem__Fi(int lvl) {
	int ril[512];
	int ri;
	int i;
}


// address: 0x8004A014
void RecreatePremiumItem__Fiiii(int ii, int idx, int plvl, int iseed) {
	int itype;
}


// address: 0x8004A0F0
void RecreateWitchItem__Fiiii(int ii, int idx, int lvl, int iseed) {
	{
		{
			int itype;
			int iblvl;
		}
	}
}


// address: 0x8004A258
void RecreateSmithItem__Fiiii(int ii, int idx, int lvl, int iseed) {
}


// address: 0x8004A308
void RecreateHealerItem__Fiiii(int ii, int idx, int lvl, int iseed) {
	{
		{
		}
	}
}


// address: 0x8004A3DC
void RecreateBoyItem__Fiiii(int ii, int idx, int lvl, int iseed) {
	int itype;
}


// address: 0x8004A4B4
void RecreateTownItem__FiiUsii(int ii, int idx, unsigned short icreateinfo, int iseed, int ivalue) {
}


// address: 0x8004A540
void SpawnSmith__Fi(int lvl) {
	int i;
	int nsi;
	struct ItemStruct holditem;
}


// address: 0x8004A86C
void SpawnWitch__Fi(int lvl) {
	int itype;
	int iblvl;
	int i;
	int nsi;
	struct ItemStruct holditem;
}


// address: 0x8004AE5C
void SpawnHealer__Fi(int lvl) {
	int i;
	int nsi;
	int srnd;
	struct ItemStruct holditem;
}


// address: 0x8004B3FC
void SpawnBoy__Fi(int lvl) {
	int itype;
	struct ItemStruct holditem;
}


// address: 0x8004B700
void SortSmith__Fv() {
	int j;
	int k;
	unsigned char sorted;
}


// address: 0x8004B884
void SortHealer__Fv() {
	int j;
	int k;
	unsigned char sorted;
}


// address: 0x8004BA14
void RecreateItem__FiiUsiii(int ii, int idx, unsigned short icreateinfo, int iseed, int ivalue, int PlrCreate) {
	int OldFePlayerNo;
	int uper;
	unsigned char onlygood;
	unsigned char uavail;
	unsigned char pregen;
}


// address: 0x8004BC68
int veclen2__Fii(int ix, int iy) {
	int t;
}


// address: 0x8004BCD0
void set_light_bands__Fv() {
	int v;
	int y;
	unsigned char *l;
}


// address: 0x8004BD40
void SetLightFX__FiisssUcUcUc(int x, int y, short s_r, short s_g, int s_b, int d_r, int d_g, int d_b) {
}


// address: 0x8004BDAC
void SetWeirdFX__Fv() {
}


// address: 0x8004BE20
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


// address: 0x8004CAF4
void DoUnLight__Fv() {
	int x;
	int y;
	int max_x;
	int max_y;
	int nXPos;
	int nYPos;
	unsigned char *r;
	unsigned char *g;
	unsigned char *b;
	int radius_block_x;
	int radius_block_y;
}


// address: 0x8004CD38
void DoUnVision__Fiiii(int nXPos, int nYPos, int nRadius, int num) {
	int i;
	int j;
	int x1;
	int y1;
	int x2;
	int y2;
	int vis_flag;
}


// address: 0x8004CE40
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


// address: 0x8004D268
void FreeLightTable__Fv() {
}


// address: 0x8004D270
void InitLightTable__Fv() {
}


// address: 0x8004D278
void MakeLightTable__Fv() {
}


// address: 0x8004D280
void InitLightMax__Fv() {
}


// address: 0x8004D2A4
void InitLighting__Fv() {
	int i;
}


// address: 0x8004D2E8
int AddLight__Fiii(int x, int y, int r) {
	int lid;
	struct LightListStruct2 *ll;
}


// address: 0x8004D340
void AddUnLight__Fi(int i) {
}


// address: 0x8004D364
void ChangeLightRadius__Fii(int i, int r) {
}


// address: 0x8004D384
void ChangeLightXY__Fiii(int i, int x, int y) {
	struct LightListStruct2 *ll;
}


// address: 0x8004D3B0
void light_fix__Fi(int i) {
}


// address: 0x8004D3B8
void ChangeLightOff__Fiii(int i, int x, int y) {
	struct LightListStruct2 *ll;
}


// address: 0x8004D3E0
void ChangeLight__Fiiii(int i, int x, int y, int r) {
	struct LightListStruct2 *ll;
}


// address: 0x8004D40C
void ChangeLightColour__Fii(int i, int c) {
	struct LightListStruct2 *ll;
}


// address: 0x8004D434
void ProcessLightList__Fv() {
	int i;
	int j;
	unsigned char temp;
	struct LightListStruct2 *ll;
}


// address: 0x8004D54C
void SavePreLighting__Fv() {
}


// address: 0x8004D554
void InitVision__Fv() {
	int i;
}


// address: 0x8004D5A8
int AddVision__FiiiUc(int x, int y, int r, unsigned char mine) {
	int vid;
	{
		{
			struct LightListStruct *vl;
		}
	}
}


// address: 0x8004D61C
void ChangeVisionRadius__Fii(int id, int r) {
	int i;
}


// address: 0x8004D6D0
void ChangeVisionXY__Fiii(int id, int x, int y) {
	int i;
	struct LightListStruct *vl;
}


// address: 0x8004D754
void ProcessVisionList__Fv() {
	int i;
	unsigned char delflag;
	struct LightListStruct *vl;
}


// address: 0x8004D95C
void FreeQuestText__Fv() {
}


// address: 0x8004D964
void InitQuestText__Fv() {
}


// address: 0x8004D970
void CalcTextSpeed__FPCc(char *Name) {
	char *ptr;
	char SpeechName[16];
	unsigned long SfxFrames;
	unsigned long TextHeight;
	{
		{
			enum LANG_TYPE Lang;
			char Prefix[2];
			struct RECT Window;
		}
	}
}


// address: 0x8004DB2C
void FadeMusicTSK__FP4TASK(struct TASK *T) {
	long MusicVolume;
}


// address: 0x8004DC78
void InitQTextMsg__Fi(int m) {
	{
		int i;
		{
			{
				struct DEF_ARGS *args;
			}
		}
	}
}


// address: 0x8004DECC
void DrawQTextBack__Fv() {
	{
		{
			{
				{
					char BookName[80];
					struct RECT ClipRect;
					int oldot;
				}
			}
		}
	}
}


// address: 0x8004E068
void DrawQTextTSK__FP4TASK(struct TASK *T) {
	struct DEF_ARGS *args;
	int pnum;
	char Name[14];
	char stextflagsave;
}


// address: 0x8004E350
int KANJI_strlen__FPc(char *str) {
	int l;
}


// address: 0x8004E390
void DrawQText__Fv() {
	char *p;
	char *pnl;
	char *SpacePtr;
	int ty;
	int l;
	unsigned char doneflag;
	struct RECT ClipRect;
	unsigned long currTime;
	int LetterCount;
	int KanjiCount;
	char *t;
	int textot;
	int OldDOt;
	int OldOt;
	int TextYSize;
	{
		{
			{
				{
					{
						int diff;
						{
							{
								int diff;
								{
									{
										{
											int diff;
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


// address: 0x8004E93C
void _GLOBAL__D_QBack() {
}


// address: 0x8004E964
void _GLOBAL__I_QBack() {
}


// address: 0x8004E98C
void SetRGB__6DialogUcUcUc_addr_8004E98C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8004E9AC
void SetBorder__6Dialogi_addr_8004E9AC(struct Dialog *this, int Type) {
}


// address: 0x8004E9B4
void ___6Dialog_addr_8004E9B4(struct Dialog *this, int __in_chrg) {
}


// address: 0x8004E9DC
// size: 0x10
struct Dialog *__6Dialog_addr_8004E9DC(struct Dialog *this) {
}


// address: 0x8004EA5C
int GetOverlayOtBase__7CBlocks_addr_8004EA5C() {
}


// address: 0x8004EA64
unsigned short GetDown__C4CPad_addr_8004EA64(struct CPad *this) {
}


// address: 0x8004EA8C
void nullmissile__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8004EA94
void FuncNULL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8004EA9C
void delta_init__Fv() {
}


// address: 0x8004EAF4
void delta_kill_monster__FiUcUcUc(int mi, unsigned char x, unsigned char y, unsigned char bLevel) {
	struct DMonsterStr *p;
	struct DLevel *Dl;
}


// address: 0x8004EB90
void delta_monster_hp__FilUc(int mi, long hp, unsigned char bLevel) {
	struct DMonsterStr *p;
	struct DLevel *Dl;
}


// address: 0x8004EC0C
void delta_leave_sync__FUc(unsigned char bLevel) {
	struct DLevel *Dl;
	{
		int i;
		{
			int ii;
			struct DMonsterStr *pD;
		}
	}
}


// address: 0x8004EF38
void delta_sync_object__FiUcUc(int oi, unsigned char bCmd, unsigned char bLevel) {
	struct DLevel *Dl;
	struct DObjectStr *p;
}


// address: 0x8004EF98
unsigned char delta_get_item__FPC9TCmdGItemUc(struct TCmdGItem *pI, unsigned char bLevel) {
	struct DLevel *Dl;
	struct TCmdPItem *pD;
	int i;
}


// address: 0x8004F164
void delta_put_item__FPC9TCmdPItemiiUc(struct TCmdPItem *pI, int x, int y, unsigned char bLevel) {
	struct DLevel *Dl;
	struct TCmdPItem *pD;
	int i;
}


// address: 0x8004F2F0
unsigned char delta_portal_inited__Fi(int i) {
}


// address: 0x8004F314
unsigned char delta_quest_inited__Fi(int i) {
}


// address: 0x8004F338
void DeltaAddItem__Fi(int ii) {
	struct TCmdPItem *pD;
	struct TCmdPItem *OpD;
	struct DLevel *Dl;
	int i;
}


// address: 0x8004F560
int DeltaExportData__FPc(char *Dst) {
}


// address: 0x8004F58C
int DeltaImportData__FPc(char *Src) {
	int osize;
}


// address: 0x8004F5D4
void DeltaSaveLevel__Fv() {
	{
		int i;
	}
}


// address: 0x8004F6D0
void NetSendCmd__FUcUc(unsigned char bHiPri, unsigned char bCmd) {
	struct TCmd cmd;
}


// address: 0x8004F6F8
void NetSendCmdGolem__FUcUcUcUclUc(unsigned char mx, unsigned char my, unsigned char dir, unsigned char menemy, long hp, int cl) {
	struct TCmdGolem cmd;
}


// address: 0x8004F744
void NetSendCmdLoc__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	struct TCmdLoc cmd;
}


// address: 0x8004F774
void NetSendCmdLocParam1__FUcUcUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1) {
	struct TCmdLocParam1 cmd;
}


// address: 0x8004F7AC
void NetSendCmdLocParam2__FUcUcUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2) {
	struct TCmdLocParam2 cmd;
}


// address: 0x8004F7EC
void NetSendCmdLocParam3__FUcUcUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y, int wParam1, int wParam2, int wParam3) {
	struct TCmdLocParam3 cmd;
}


// address: 0x8004F834
void NetSendCmdParam1__FUcUcUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1) {
	struct TCmdParam1 cmd;
}


// address: 0x8004F860
void NetSendCmdParam2__FUcUcUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2) {
	struct TCmdParam2 cmd;
}


// address: 0x8004F890
void NetSendCmdParam3__FUcUcUsUsUs(unsigned char bHiPri, unsigned char bCmd, unsigned short wParam1, unsigned short wParam2, int wParam3) {
	struct TCmdParam3 cmd;
}


// address: 0x8004F8C8
void NetSendCmdQuest__FUcUc(unsigned char bHiPri, unsigned char q) {
	struct TCmdQuest cmd;
}


// address: 0x8004F93C
void NetSendCmdGItem__FUcUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char mast, unsigned char pnum, int ii) {
	struct TCmdGItem cmd;
}


// address: 0x8004FA84
void NetSendCmdGItem2__FUcUcUcUcPC9TCmdGItem(unsigned char usonly, unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	struct TCmdGItem cmd;
}


// address: 0x8004FB08
unsigned char NetSendCmdReq2__FUcUcUcPC9TCmdGItem(unsigned char bCmd, unsigned char mast, unsigned char pnum, struct TCmdGItem *p) {
	struct TCmdGItem cmd;
}


// address: 0x8004FB68
void NetSendCmdExtra__FPC9TCmdGItem(struct TCmdGItem *p) {
	struct TCmdGItem cmd;
}


// address: 0x8004FBD8
void NetSendCmdPItem__FUcUcUcUc(unsigned char bHiPri, unsigned char bCmd, unsigned char x, unsigned char y) {
	struct TCmdPItem cmd;
}


// address: 0x8004FCF4
void NetSendCmdChItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	struct TCmdChItem cmd;
}


// address: 0x8004FD98
void NetSendCmdDelItem__FUcUc(unsigned char bHiPri, unsigned char bLoc) {
	struct TCmdDelItem cmd;
}


// address: 0x8004FDC8
void NetSendCmdDItem__FUci(unsigned char bHiPri, int ii) {
	struct TCmdPItem cmd;
}


// address: 0x8004FEF0
unsigned char i_own_level__Fi(int nReqLevel) {
}


// address: 0x8004FEF8
void NetSendCmdDamage__FUcUcUl(unsigned char bHiPri, unsigned char bPlr, unsigned long dwDam) {
	struct TCmdDamage cmd;
}


// address: 0x8004FF2C
void delta_close_portal__Fi(int pnum) {
}


// address: 0x8004FF6C
void check_update_plr__Fi(int pnum) {
}


// address: 0x8004FF74
void On_WALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8004FFF4
void On_ADDSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80050024
void On_ADDMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80050054
void On_ADDDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80050084
void On_ADDVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800500B4
void On_SBSPELL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80050128
void On_GOTOGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800501B0
void On_REQUESTGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			int ii;
		}
	}
}


// address: 0x800502F0
void On_GETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	struct TCmdGItem *p;
	int nIndex;
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
											int hitem;
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


// address: 0x800504C4
void On_GOTOAGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8005054C
void On_REQUESTAGITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80050680
void On_AGETITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	struct TCmdGItem *p;
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
											int hitem;
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


// address: 0x8005084C
void On_ITEMEXTRA__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80050898
void On_PUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	int ii;
}


// address: 0x80050978
void On_SYNCPUTITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	int ii;
}


// address: 0x80050A7C
void On_RESPAWNITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	struct TCmdPItem *p;
}


// address: 0x80050B98
void On_SATTACKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80050C24
void On_SPELLXYD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80050D0C
void On_SPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80050DE4
void On_TSPELLXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80050EC0
void On_OPOBJXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	struct TCmdLocParam1 *p;
}


// address: 0x80050FA0
void On_DISARMXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	struct TCmdLocParam1 *p;
}


// address: 0x80051080
void On_OPOBJT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800510CC
void On_ATTACKID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	struct TCmdParam1 *p;
	int dx;
	int dy;
}


// address: 0x80051208
void On_SPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800512D0
void On_SPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051390
void On_TSPELLID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051454
void On_TSPELLPID__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051518
void On_KNOCKBACK__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800515D4
void On_RESURRECT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x8005160C
void On_HEALOTHER__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051634
void On_TALKXY__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800516BC
void On_NEWLVL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800516EC
void On_WARP__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051800
void On_MONSTDEATH__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x800518B4
void On_KILLGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80051920
void On_AWAKEGOLEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				unsigned char addok;
				{
					int i;
					{
						int mi;
					}
				}
			}
		}
	}
}


// address: 0x80051A40
void On_MONSTDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80051B30
void On_PLRDEAD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80051B78
void On_PLRDAMAGE__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	struct PlayerStruct *player;
}


// address: 0x80051C8C
void On_OPENDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051D08
void On_CLOSEDOOR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051D84
void On_OPERATEOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051E00
void On_PLROPOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051E7C
void On_BREAKOBJ__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051EF4
void On_CHANGEPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051EFC
void On_DELPLRITEMS__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051F04
void On_PLRLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051F0C
void On_DROPITEM__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80051F64
void On_PLAYER_JOINLEVEL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x8005216C
void On_ACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800521B0
void On_DEACTIVATEPORTAL__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80052210
void On_RETOWN__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80052248
void On_SETSTR__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80052288
void On_SETDEX__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x800522C8
void On_SETMAG__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80052308
void On_SETVIT__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
}


// address: 0x80052348
void On_SYNCQUEST__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
		}
	}
}


// address: 0x80052390
void On_ENDSHIELD__FPC4TCmdi(struct TCmd *pCmd, int pnum) {
	{
		{
			{
				int i;
				{
					int mi;
				}
			}
		}
	}
}


// address: 0x80052468
unsigned long ParseCmd__FiPC4TCmd(int pnum, struct TCmd *pCmd) {
	unsigned char sbLastCmd;
}


// address: 0x80052888
// size: 0x1258
struct DLevel *GetDLevel__Fib(int LevNum, bool SetLevel) {
}


// address: 0x800528D0
void ReleaseDLevel__FP6DLevel(struct DLevel *Dl) {
}


// address: 0x800528FC
void MSG_ClearOutCompMap__Fv() {
}


// address: 0x80052924
void _GLOBAL__D_deltaload() {
}


// address: 0x8005294C
void _GLOBAL__I_deltaload() {
}


// address: 0x800529AC
// size: 0x4
struct CrunchComp *__10CrunchComp(struct CrunchComp *this);

// address: 0x800529E4
// size: 0x4
struct PakComp *__7PakComp(struct PakComp *this);

// address: 0x80052A1C
// size: 0x4
struct NoComp *__6NoComp(struct NoComp *this);

// address: 0x80052A54
int GetSize__14CompressedLevs(struct CompressedLevs *this) {
}


// address: 0x80052A90
// size: 0x4
struct CompClass *__9CompClass(struct CompClass *this);

// address: 0x80052AA4
void DoDecomp__C10CrunchCompPUcPCUcii(struct CrunchComp *this, unsigned char *Dest, unsigned char *Src, int DstLen, int SrcLen) {
}


// address: 0x80052ACC
int DoComp__C10CrunchCompPUcPCUci(struct CrunchComp *this, unsigned char *Dest, unsigned char *Src, int SrcLen) {
}


// address: 0x80052AF4
void DoDecomp__C7PakCompPUcPCUcii(struct PakComp *this, unsigned char *Dest, unsigned char *Src, int DstLen, int SrcLen) {
}


// address: 0x80052B18
int DoComp__C7PakCompPUcPCUci(struct PakComp *this, unsigned char *Dest, unsigned char *Src, int SrcLen) {
}


// address: 0x80052B40
void DoDecomp__C6NoCompPUcPCUcii(struct NoComp *this, unsigned char *Dest, unsigned char *Src, int DstLen, int SrcLen) {
}


// address: 0x80052B6C
int DoComp__C6NoCompPUcPCUci(struct NoComp *this, unsigned char *Dest, unsigned char *Src, int SrcLen) {
}


// address: 0x80052BA4
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x80052BD0
int InitLevelType__Fi(int l) {
}


// address: 0x80052C1C
void SetupLocalCoords__Fv() {
	int x;
	int y;
}


// address: 0x80052D7C
void InitNewSeed__Fl(long newseed) {
	{
		int i;
	}
}


// address: 0x80052DF0
unsigned char NetInit__FUcPUc(unsigned char bSinglePlayer, unsigned char *pfExitProgram) {
	char szPlayerDescript[128];
	long time;
	{
		{
			struct _uiheroinfo heroinfo;
			{
				{
				}
			}
		}
	}
}


// address: 0x80053080
void PostAddL1Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x80053168
void PostAddL2Door__Fiiii(int i, int x, int y, int ot) {
}


// address: 0x800532B4
void PostAddArmorStand__Fi(int i) {
}


// address: 0x8005333C
void PostAddObjLight__Fii(int i, int r) {
}


// address: 0x80053400
void PostAddWeaponRack__Fi(int i) {
}


// address: 0x80053488
void PostObjObjAddSwitch__Fiiii(int ot, int ox, int oy, int oi) {
}


// address: 0x80053524
void InitObjectGFX__Fv() {
	unsigned char fileload[56];
	int i;
	int t;
	{
		{
			{
				{
					char filestr[32];
				}
			}
		}
	}
}


// address: 0x80053740
void FreeObjectGFX__Fv() {
}


// address: 0x8005374C
void DeleteObject__Fii(int oi, int i) {
	int ox;
	int oy;
}


// address: 0x800537F0
void SetupObject__Fiiii(int i, int x, int y, int ot) {
	int ai;
	int j;
}


// address: 0x80053A70
void SetObjMapRange__Fiiiiii(int i, int x1, int y1, int x2, int y2, int v) {
}


// address: 0x80053AD0
void SetBookMsg__Fii(int i, int msg) {
}


// address: 0x80053AF8
void AddObject__Fiii(int ot, int ox, int oy) {
	int oi;
}


// address: 0x80053C08
void PostAddObject__Fiii(int ot, int ox, int oy) {
	int oi;
}


// address: 0x80054070
void Obj_Light__Fii(int i, int lr) {
	int ox;
	int oy;
	int dx;
	int dy;
	int p;
	int tr;
	unsigned char turnon;
}


// address: 0x80054290
void Obj_Circle__Fi(int i) {
	int px;
	int py;
	int ox;
	int oy;
	int v1;
	int v2;
	bool done;
	{
		int pnum;
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


// address: 0x800545D4
void Obj_StopAnim__Fi(int i) {
}


// address: 0x80054638
void DrawExpl__Fiiiiiccc(int sx, int sy, int f, int ot, int scale, int rtint, int gtint, int btint) {
	struct POLY_FT4 *Ft4;
	int PhysFrame;
	struct TextDat *ObjDat;
	int temp;
	int bright;
	int W;
	int H;
}


// address: 0x80054930
void DrawObjExpl__FP12ObjectStructiii(struct ObjectStruct *obj, int ScrX, int ScrY, int ot) {
	int f;
}


// address: 0x800549A0
void Obj_Door__Fi(int i) {
	int dx;
	int dy;
	unsigned char dok;
}


// address: 0x80054B10
void Obj_Sarc__Fi(int i) {
}


// address: 0x80054B5C
void ActivateTrapLine__Fii(int ttype, int tid) {
	int i;
	int oi;
}


// address: 0x80054C6C
void Obj_FlameTrap__Fi(int i) {
	int xp;
	int yp;
	int j;
}


// address: 0x80054F50
void Obj_Trap__Fi(int i) {
	int oti;
	unsigned char otrig;
	int sx;
	int sy;
	int dx;
	int dy;
	int x;
	int y;
	int ax;
}


// address: 0x80055294
void Obj_BCrossDamage__Fi(int i) {
	int resist;
	int damage[4];
	{
		int pnum;
	}
}


// address: 0x800554DC
void ProcessObjects__Fv() {
	int i;
	int oi;
}


// address: 0x80055754
void ObjSetMicro__Fiii(int dx, int dy, int pn) {
}


// address: 0x800558C4
void ObjSetMini__Fiii(int x, int y, int v) {
	long v2;
	long v3;
	long v4;
	int xx;
	int yy;
}


// address: 0x800559AC
void ObjL1Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x800559B4
void ObjL2Special__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x800559BC
void DoorSet__Fiii(int oi, int dx, int dy) {
	int pn;
}


// address: 0x80055C20
void RedoPlayerVision__Fv() {
	int p;
}


// address: 0x80055CC4
void OperateL1RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}


// address: 0x80056024
void OperateL1LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}


// address: 0x800563BC
void OperateL2RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}


// address: 0x80056728
void OperateL2LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}


// address: 0x80056A94
void OperateL3RDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}


// address: 0x80056D70
void OperateL3LDoor__FiiUc(int pnum, int oi, unsigned char sendflag) {
	int dx;
	int dy;
	unsigned char dok;
}


// address: 0x8005704C
void MonstCheckDoors__Fi(int m) {
	int i;
	int oi;
	int dpx;
	int dpy;
	int mx;
	int my;
}


// address: 0x80057520
void PostAddL1Objs__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
	int pn;
}


// address: 0x80057628
void PostAddL2Objs__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
	int pn;
}


// address: 0x80057724
void ObjChangeMap__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
}


// address: 0x800578DC
void DRLG_MRectTrans__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
}


// address: 0x80057978
void ObjChangeMapResync__Fiiii(int x1, int y1, int x2, int y2) {
	int i;
	int j;
}


// address: 0x80057AF0
void OperateL1Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	int dpx;
	int dpy;
}


// address: 0x80057C4C
void OperateLever__Fii(int pnum, int i) {
	unsigned char mapflag;
	int j;
	int oi;
	int ot;
}


// address: 0x80057E30
void OperateBook__Fii(int pnum, int i) {
	int v1;
	int v2;
	int j;
	int oi;
	int ot;
	int itm;
	{
		{
			unsigned char found;
			{
				{
					unsigned char dowarp;
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x800584FC
void OperateBookLever__Fii(int pnum, int i) {
	int x;
	int y;
	int tren;
}


// address: 0x80058994
void OperateSChambBk__Fii(int pnum, int i) {
	int textdef;
	int j;
}


// address: 0x80058BD0
void OperateChest__FiiUc(int pnum, int i, unsigned char sendmsg) {
	int j;
	int mdir;
	int mtype;
}


// address: 0x80058F90
void OperateMushPatch__Fii(int pnum, int i) {
	int x;
	int y;
}


// address: 0x800591A4
void OperateInnSignChest__Fii(int pnum, int i) {
	int x;
	int y;
}


// address: 0x8005937C
void OperateSlainHero__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x800595CC
void OperateTrapLvr__Fi(int i) {
	int j;
	int oi;
}


// address: 0x8005979C
void OperateSarc__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x80059954
void OperateL2Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	int dpx;
	int dpy;
}


// address: 0x80059AB0
void OperateL3Door__FiiUc(int pnum, int i, unsigned char sendflag) {
	int dpx;
	int dpy;
}


// address: 0x80059C0C
void LoadMapObjs__FPUcii(unsigned char *pMap, int startx, int starty) {
	int i;
	int j;
	int rw;
	int rh;
	unsigned char *lm;
	long mapoff;
}


// address: 0x80059D14
void OperatePedistal__Fii(int pnum, int i) {
	int jstn;
	bool JustOperated;
	{
		{
			{
				{
					{
						{
							unsigned char *setp;
							{
								{
									{
										{
											unsigned char *setp;
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


// address: 0x8005A258
void TryDisarm__Fii(int pnum, int i) {
	int j;
	int oi;
	int oti;
	int trapdisper;
	unsigned char checkflag;
}


// address: 0x8005A408
int ItemMiscIdIdx__Fi(int imiscid) {
	int i;
}


// address: 0x8005A478
void OperateShrine__Fiii(int pnum, int i, int sType) {
	int r;
	int xx;
	int yy;
	int sc;
	int v1;
	int v2;
	int v3;
	int v4;
	unsigned long lv;
	unsigned long t;
	unsigned char done;
	{
		{
			{
				{
					int mypnum;
				}
			}
		}
	}
}


// address: 0x8005C850
void OperateSkelBook__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005C9C8
void OperateBookCase__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005CBE0
void OperateDecap__FiiUc(int pnum, int i, unsigned char sendmsg) {
}


// address: 0x8005CCC8
void OperateArmorStand__FiiUc(int pnum, int i, unsigned char sendmsg) {
	int uniqueRnd;
}


// address: 0x8005CE34
int FindValidShrine__Fi(int i) {
	int rv;
	unsigned char done;
}


// address: 0x8005CF20
void OperateGoatShrine__Fiii(int pnum, int i, int sType) {
}


// address: 0x8005CFC8
void OperateCauldron__Fiii(int pnum, int i, int sType) {
}


// address: 0x8005D06C
unsigned char OperateFountains__Fii(int pnum, int i) {
	int ii;
	unsigned char rv;
	{
		{
			{
				{
					int rndVal;
					int statVal;
					int saveRnd;
					int status;
				}
			}
		}
	}
}


// address: 0x8005D610
void OperateWeaponRack__FiiUc(int pnum, int i, unsigned char sendmsg) {
	int weaponType;
}


// address: 0x8005D7B8
void OperateStoryBook__Fii(int pnum, int i) {
}


// address: 0x8005D8AC
void OperateLazStand__Fii(int pnum, int i) {
	int x;
	int y;
}


// address: 0x8005DA30
void OperateObject__FiiUc(int pnum, int i, unsigned char TeleFlag) {
	unsigned char senditemmsg;
}


// address: 0x8005DE68
void SyncOpL1Door__Fiii(int pnum, int cmd, int i) {
	unsigned char opok;
}


// address: 0x8005DF7C
void SyncOpL2Door__Fiii(int pnum, int cmd, int i) {
	unsigned char opok;
}


// address: 0x8005E090
void SyncOpL3Door__Fiii(int pnum, int cmd, int i) {
	unsigned char opok;
}


// address: 0x8005E1A4
void SyncOpObject__Fiii(int pnum, int cmd, int i) {
}


// address: 0x8005E3B4
void BreakCrux__Fii(int pnum, int i) {
	int j;
	int ot;
	int oi;
	unsigned char mapflag;
}


// address: 0x8005E5E8
void BreakBarrel__FiiiUcUc(int pnum, int i, int dam, unsigned char forcebreak, int sendmsg) {
	int x;
	int y;
	int oi;
}


// address: 0x8005EB40
void BreakObject__Fii(int pnum, int oi) {
	int objdam;
	int mind;
	int maxd;
}


// address: 0x8005ECA4
void SyncBreakObj__Fii(int pnum, int oi) {
}


// address: 0x8005ED20
void SyncL1Doors__Fi(int i) {
	int dx;
	int dy;
}


// address: 0x8005EE38
void SyncCrux__Fi(int i) {
	int j;
	int ot;
	int oi;
	unsigned char mapflag;
}


// address: 0x8005EF70
void SyncLever__Fi(int i) {
}


// address: 0x8005EFF4
void SyncQSTLever__Fi(int i) {
	int tren;
}


// address: 0x8005F0EC
void SyncPedistal__Fi(int i) {
}


// address: 0x8005F0F4
void SyncL2Doors__Fi(int i) {
	int dx;
	int dy;
}


// address: 0x8005F25C
void SyncL3Doors__Fi(int i) {
	int dx;
	int dy;
}


// address: 0x8005F388
void SyncObjectAnim__Fi(int o) {
	int ai;
	int ot;
	int j;
}


// address: 0x8005F4C8
void GetObjectStr__Fi(int i) {
}


// address: 0x8005F984
void AddLamp__Fiii(int x, int y, int r) {
}


// address: 0x8005F9C4
void RestoreObjectLight__Fv() {
	int i;
	int oi;
	int ox;
	int oy;
	struct MonsterStruct *Monst;
}


// address: 0x8005FB90
int GetOtPos__7CBlocksi_addr_8005FB90(struct CBlocks *this, int LogicalY) {
	int OtPos;
}


// address: 0x8005FBCC
int GetNumOfFrames__7TextDatii_addr_8005FBCC(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8005FC04
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8005FC04(struct TextDat *this, int Creature) {
}


// address: 0x8005FC20
unsigned char game_2_ui_class__FPC12PlayerStruct(struct PlayerStruct *p) {
}


// address: 0x8005FC4C
void game_2_ui_player__FPC12PlayerStructP11_uiheroinfoUc(struct PlayerStruct *p, struct _uiheroinfo *heroinfo, unsigned char bHasSaveFile) {
}


// address: 0x8005FD00
void SetupLocalPlayer__Fv() {
}


// address: 0x8005FD10
unsigned char IsDplayer__Fii(int x, int y) {
}


// address: 0x8005FD9C
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FDE0
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FDF4
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FE14
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FE1C
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x8005FE38
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FE54
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int gn;
	int pc;
}


// address: 0x80060090
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	int i;
	char vc;
}


// address: 0x80060498
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int c;
	int d;
}


// address: 0x80060500
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	long l;
}


// address: 0x8006067C
void AddPlrExperience__FP12PlayerStructil(struct PlayerStruct *ptrplr, int lvl, long exp) {
	int omp;
	unsigned long v;
	long e;
	{
		{
			long lLevel;
			long lMax;
			{
				{
					int l;
					{
						{
							{
								int i;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800608A0
void AddPlrMonstExper__Filc(int lvl, long exp, char pmask) {
	int totplrs;
	{
		int i;
		{
			{
			}
		}
	}
}


// address: 0x80060924
void InitPlayer__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char FirstTime) {
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80060C44
void InitMultiView__Fv() {
}


// address: 0x80060C4C
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80060C6C
void PlrClrTrans__Fii(int x, int y) {
	int i;
	int j;
}


// address: 0x80060CE4
void PlrDoTrans__Fii(int x, int y) {
	int i;
	int j;
}


// address: 0x80060DFC
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060E10
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x80060E9C
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060F00
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060F38
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060F64
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	int co;
	unsigned char closeattack;
}


// address: 0x800610A8
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x80061140
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x800612F4
void RemovePlrFromMap__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800612FC
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x80061448
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	int ii;
}


// address: 0x800615DC
void PlrDeadItem__FP12PlayerStructP10ItemStructii(struct PlayerStruct *ptrplr, struct ItemStruct *itm, int xx, int yy) {
	int x;
	int y;
	{
		int l;
		{
			{
				int j;
				{
					{
						int i;
					}
				}
			}
		}
	}
}


// address: 0x800617AC
void StartPlayerDropItems__FP12PlayerStructi(struct PlayerStruct *ptrplr, int EarFlag) {
}


// address: 0x8006180C
void TryDropPlayerItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	unsigned char diablolevel;
	{
		{
			struct PlayerStruct *p;
			struct ItemStruct *pi;
			int i;
			{
				{
					int pdd;
				}
			}
		}
	}
}


// address: 0x80061948
void StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	struct ItemStruct ear;
	struct PlayerStruct *p;
}


// address: 0x80061B44
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	long hGold;
	int i;
	{
		{
			{
				{
					{
						{
							int newgold;
						}
					}
				}
			}
		}
	}
}


// address: 0x80061C54
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	int i;
	int mx;
}


// address: 0x80061DB0
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x80061DD0
void RemovePlrMissiles__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int i;
	int mx;
	{
		{
		}
	}
}


// address: 0x800620E8
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062198
void CheckPlrDead__Fi(int pnum) {
	struct PlayerStruct *ptrplr;
}


// address: 0x800621EC
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
	bool oldpause;
}


// address: 0x800623A0
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062448
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
	bool oldpause;
}


// address: 0x80062560
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062568
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	int x;
	int y;
}


// address: 0x80062618
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int owx;
	int owy;
}


// address: 0x80062828
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x800629EC
unsigned char PlrHitMonst__FP12PlayerStructi(struct PlayerStruct *ptrplr, int m) {
	int hit;
	int hper;
	int mind;
	int maxd;
	int ddp;
	long dam;
	long skdam;
	int phanditype;
	int tmac;
	unsigned char rv;
	unsigned char ret;
}


// address: 0x80063048
unsigned char PlrHitPlr__FP12PlayerStructc(struct PlayerStruct *ptrplr, char p) {
	int hit;
	int hper;
	int mind;
	int maxd;
	int ddp;
	long dam;
	long skdam;
	int tac;
	int blk;
	int blkper;
	unsigned char rv;
}


// address: 0x800633F0
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	int oi;
}


// address: 0x80063470
int PM_DoAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int dx;
	int dy;
	int m;
	char p;
	unsigned char didhit;
	int frame;
}


// address: 0x80063804
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int mistype;
}


// address: 0x80063904
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800639D8
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063A74
void do_spell_anim__FiiiP12PlayerStruct(int aframe, int spell, int clss, struct PlayerStruct *ptrplr) {
	struct CPlayer *test;
	int OtPos;
	int ScrX;
	int ScrY;
	struct TextDat *missdat;
	struct TextDat *objdat;
	struct POLY_FT4 *FT4a;
	struct POLY_FT4 *FT4b;
	int frame;
}


// address: 0x80063F54
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80064320
void ArmorDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	struct PlayerStruct *p;
	int a;
	struct ItemStruct *pi;
}


// address: 0x80064428
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int rv;
}


// address: 0x800644B8
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int pnum;
	{
		{
			{
				{
					{
						{
							{
								{
									int vid;
									struct LightListStruct *vl;
									{
										int i;
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


// address: 0x800646A0
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800646A8
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int i;
	int d;
	int oi;
}


// address: 0x80064B68
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x80064BD0
void ValidatePlayer__Fv() {
	int i;
	int gt;
	int pc;
	unsigned long msk;
	unsigned long b;
}


// address: 0x800650CC
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80065168
void ProcessPlayers__Fv() {
	int raflag;
	int pnum;
	int tplayer;
	{
		{
			struct PlayerStruct *ptrplr;
		}
	}
}


// address: 0x8006544C
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80065474
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr, int px, int py) {
	int mi;
	int p;
	char bv;
	struct map_info *dm;
}


// address: 0x8006564C
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x80065654
void CheckPlrSpell__Fv() {
	int sd;
	struct SpellTarget *spl;
	unsigned char addflag;
	struct PlayerStruct *player;
	int rspell;
	{
		{
			{
				{
					int SplLvl;
				}
			}
		}
	}
}


// address: 0x80065AB4
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	int i;
}


// address: 0x80065B9C
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80065BCC
void CheckStats__Fi(int p) {
	int c;
	int i;
	struct PlayerStruct *player;
}


// address: 0x80065DA0
void ModifyPlrStr__Fii(int p, int l) {
	struct PlayerStruct *player;
	int ms;
}


// address: 0x80065EBC
void ModifyPlrMag__Fii(int p, int l) {
	struct PlayerStruct *player;
	int ms;
}


// address: 0x80065FA8
void ModifyPlrDex__Fii(int p, int l) {
	struct PlayerStruct *player;
	int ms;
}


// address: 0x8006608C
void ModifyPlrVit__Fii(int p, int l) {
	struct PlayerStruct *player;
	int ms;
}


// address: 0x80066168
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x800661AC
void SetPlrStr__Fii(int p, int v) {
	struct PlayerStruct *player;
}


// address: 0x80066288
void SetPlrMag__Fii(int p, int v) {
	struct PlayerStruct *player;
}


// address: 0x800662F8
void SetPlrDex__Fii(int p, int v) {
	struct PlayerStruct *player;
}


// address: 0x800663D4
void SetPlrVit__Fii(int p, int v) {
	struct PlayerStruct *player;
}


// address: 0x80066440
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066448
void PlayDungMsgs__Fv() {
	struct PlayerStruct *player;
}


// address: 0x80066778
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800667A0
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x800667E4
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80066818
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8006684C
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80066880
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x800668B4
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800668E8
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x80066920
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80066954
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006697C
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800669A4
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800669CC
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x80066A14
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066A3C
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066A64
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80066A98
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066AC0
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80066B04
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x80066B38
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80066B6C
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80066BB8
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x80066C04
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x80066C50
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x80066CA4
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x80066CF0
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80066D3C
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80066D8C
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80066DD8
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80066E24
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80066E70
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80066EBC
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80066F08
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80066F54
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80066FA4
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80066FF0
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80067040
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x8006708C
void CheckNewPath__Fi(int pnum) {
}


// address: 0x800670D8
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80067124
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80067170
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x800671BC
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80067208
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80067254
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x800672A0
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x800672EC
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80067338
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80067384
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


// address: 0x800673B8
void PRIM_GetPrim__FPP8POLY_FT4_addr_800673B8(struct POLY_FT4 **Prim) {
}


// address: 0x80067434
bool Active__11SpellTarget_addr_80067434(struct SpellTarget *this) {
}


// address: 0x80067440
// size: 0x90
struct CPlayer *GetPlayer__7CPlayeri_addr_80067440(int PNum) {
}


// address: 0x80067490
int GetLastOtPos__C7CPlayer_addr_80067490(struct CPlayer *this) {
}


// address: 0x8006749C
int GetLastScrY__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800674A8
int GetLastScrX__C7CPlayer(struct CPlayer *this) {
}


// address: 0x800674B4
void CheckRPortalOK__FPiT0(int *rx, int *ry) {
	int nx;
	int ny;
}


// address: 0x800674F4
void CheckQuests__Fv() {
	int i;
	int rportx;
	int rporty;
	int omp;
	{
		{
			{
				int pl;
				{
					struct PlayerStruct *player;
				}
			}
		}
	}
}


// address: 0x800679CC
unsigned char ForceQuests__Fv() {
	{
		int i;
		{
			int ql;
			int qx;
			int qy;
			{
				int j;
			}
		}
	}
}


// address: 0x80067B70
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x80067C04
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
											int i;
											int j;
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


// address: 0x800681CC
void SetReturnLvlPos__Fv() {
}


// address: 0x800682DC
void GetReturnLvlPos__Fv() {
}


// address: 0x80068330
void ResyncQuests__Fv() {
	int i;
	int tren;
}


// address: 0x8006881C
void PrintQLString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
	unsigned char r;
	unsigned char g;
	unsigned char b;
	{
		{
			int len;
		}
	}
}


// address: 0x80068A70
void DrawQuestLog__Fv() {
	int i;
	int l;
	int q;
	int totlines;
}


// address: 0x80068C68
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80068D40
void StartQuestlog__Fv() {
	int i;
}


// address: 0x80068E74
void QuestlogUp__Fv() {
}


// address: 0x80068F0C
void QuestlogDown__Fv() {
}


// address: 0x80068FC0
void RemoveQLog__Fv() {
}


// address: 0x80069078
void QuestlogEnter__Fv() {
	int q;
}


// address: 0x80069144
void QuestlogESC__Fv() {
}


// address: 0x8006916C
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x800691EC
void _GLOBAL__D_questlog() {
}


// address: 0x80069214
void _GLOBAL__I_questlog() {
}


// address: 0x8006923C
void SetRGB__6DialogUcUcUc_addr_8006923C(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8006925C
void SetBack__6Dialogi_addr_8006925C(struct Dialog *this, int Type) {
}


// address: 0x80069264
void SetBorder__6Dialogi_addr_80069264(struct Dialog *this, int Type) {
}


// address: 0x8006926C
void ___6Dialog_addr_8006926C(struct Dialog *this, int __in_chrg) {
}


// address: 0x80069294
// size: 0x10
struct Dialog *__6Dialog_addr_80069294(struct Dialog *this) {
}


// address: 0x80069314
int GetOverlayOtBase__7CBlocks_addr_80069314() {
}


// address: 0x8006931C
void DrawView__Fii(int StartX, int StartY) {
}


// address: 0x800694D0
void DrawAndBlit__Fv() {
}


// address: 0x800695A4
void FreeStoreMem__Fv() {
}


// address: 0x800695AC
void DrawSTextBack__Fv() {
}


// address: 0x8006961C
void DrawStoreArrows__Fv() {
	struct TextDat *PanelGfx;
	struct POLY_FT4 *Ft4;
	int OtPos;
	int Flagy;
}


// address: 0x8006979C
void PrintSString__FiiUcPcci(int x, int y, unsigned char cjustflag, char *str, int col, int val) {
	int yy;
	char valstr[32];
	int SpinnerY;
	unsigned char R;
	unsigned char G;
	unsigned char B;
	unsigned char DaveFix;
}


// address: 0x80069C44
void DrawSLine__Fi(int y) {
	int yy;
}


// address: 0x80069CD8
void ClearSText__Fii(int s, int e) {
	int i;
}


// address: 0x80069D70
void AddSLine__Fi(int y) {
}


// address: 0x80069DC0
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80069DE8
void OffsetSTextY__Fii(int y, int yo) {
}


// address: 0x80069E10
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80069ECC
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	char sstr[128];
	int li;
}


// address: 0x8006A408
unsigned char StoreAutoPlace__Fv() {
	int i;
	int w;
	int h;
	int idx;
	unsigned char done;
}


// address: 0x8006AA50
void S_StartSmith__Fv() {
}


// address: 0x8006ABD8
void S_ScrollSBuy__Fi(int idx) {
	int l;
	int ls;
	char iclr;
}


// address: 0x8006ADE0
void S_StartSBuy__Fv() {
}


// address: 0x8006AFB0
void S_ScrollSPBuy__Fi(int idx) {
	int l;
	char iclr;
	int boughtitems;
	{
		{
			{
				{
					char *StrPtr;
				}
			}
		}
	}
}


// address: 0x8006B210
unsigned char S_StartSPBuy__Fv() {
	int i;
}


// address: 0x8006B3D0
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x8006B4B8
void S_ScrollSSell__Fi(int idx) {
	int l;
	int ls;
	int v;
	char iclr;
	int Jumpy;
	{
		{
			{
				{
					char *StrPtr;
				}
			}
		}
	}
}


// address: 0x8006B70C
void S_StartSSell__Fv() {
	int i;
	unsigned char sellok;
}


// address: 0x8006BB44
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x8006BBEC
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	int v;
}


// address: 0x8006BDD4
void S_StartSRepair__Fv() {
	int i;
	unsigned char repairok;
}


// address: 0x8006C2A4
void S_StartWitch__Fv() {
}


// address: 0x8006C42C
int CheckWitchItem__Fi(int idx) {
}


// address: 0x8006C4D0
void S_ScrollWBuy__Fi(int idx) {
	int l;
	int ls;
	char iclr;
	int Jumpy;
	{
		{
			{
				{
					char *StrPtr;
				}
			}
		}
	}
}


// address: 0x8006C714
void S_StartWBuy__Fv() {
	int i;
}


// address: 0x8006CA68
unsigned char WitchSellOk__Fi(int i) {
	unsigned char rv;
	struct ItemStruct *pI;
}


// address: 0x8006CBB4
void S_StartWSell__Fv() {
	int i;
	unsigned char sellok;
}


// address: 0x8006D22C
unsigned char WitchRechargeOk__Fi(int i) {
	unsigned char rv;
}


// address: 0x8006D2B8
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006D440
void S_StartWRecharge__Fv() {
	int i;
	unsigned char rechargeok;
}


// address: 0x8006D870
void S_StartNoMoney__Fv() {
}


// address: 0x8006D8D8
void S_StartNoRoom__Fv() {
}


// address: 0x8006D938
void S_StartNoItems__Fv() {
}


// address: 0x8006D9EC
void S_StartConfirm__Fv() {
	char iclr;
	unsigned char idprint;
	char *StrPtr;
}


// address: 0x8006DD54
void S_StartBoy__Fv() {
}


// address: 0x8006DEFC
void S_StartBBoy__Fv() {
	int iclr;
	char *StrPtr;
}


// address: 0x8006E130
void S_StartHealer__Fv() {
}


// address: 0x8006E304
void S_ScrollHBuy__Fi(int idx) {
	int l;
	{
		{
			{
				{
					char *StrPtr;
				}
			}
		}
	}
}


// address: 0x8006E4EC
void S_StartHBuy__Fv() {
}


// address: 0x8006E624
void S_StartStory__Fv() {
}


// address: 0x8006E714
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x8006E748
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006E824
void S_StartSIdentify__Fv() {
	int i;
	unsigned char idok;
}


// address: 0x8006F2C4
void S_StartIdShow__Fv() {
	char iclr;
	char *StrPtr;
}


// address: 0x8006F49C
void S_StartTalk__Fv() {
	int i;
	int tq;
	int sn;
	int la;
	int gl;
}


// address: 0x8006F6CC
void S_StartTavern__Fv() {
}


// address: 0x8006F7C4
void S_StartBarMaid__Fv() {
}


// address: 0x8006F898
void S_StartDrunk__Fv() {
}


// address: 0x8006F96C
void StartStore__Fc(char s) {
	int i;
}


// address: 0x8006FCC8
void DrawStoreHelpText__Fv() {
}


// address: 0x8006FD64
void DrawSText__Fv() {
}


// address: 0x8006FDA4
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8006FEAC
void DoThatDrawSText__Fv() {
	int i;
	int YOfs;
}


// address: 0x800700B4
void STextESC__Fv() {
}


// address: 0x80070258
void STextUp__Fv() {
}


// address: 0x800703DC
void STextDown__Fv() {
}


// address: 0x80070570
void S_SmithEnter__Fv() {
}


// address: 0x80070648
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800706C8
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80070748
void TakePlrsMoney__Fl(long cost) {
	int i;
}


// address: 0x80070B94
void SmithBuyItem__Fv() {
	int idx;
}


// address: 0x80070E14
void S_SBuyEnter__Fv() {
	int idx;
	int i;
	unsigned char done;
}


// address: 0x80071078
void SmithBuyPItem__Fv() {
	int idx;
	int i;
	int xx;
}


// address: 0x8007123C
void S_SPBuyEnter__Fv() {
	int idx;
	int i;
	unsigned char done;
	{
		int xx;
	}
}


// address: 0x800714A8
unsigned char StoreGoldFit__Fi(int idx) {
	int sz;
	int numsqrs;
	int i;
	long cost;
}


// address: 0x80071760
void PlaceStoreGold__Fl(long v) {
	int i;
	int ii;
	int xx;
	int yy;
	unsigned char done;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80071A00
void StoreSellItem__Fv() {
	int idx;
	int i;
	long cost;
}


// address: 0x80071D44
void S_SSellEnter__Fv() {
	int idx;
}


// address: 0x80071E54
void SmithRepairItem__Fv() {
	int i;
	int idx;
}


// address: 0x800720C8
void S_SRepairEnter__Fv() {
	int idx;
}


// address: 0x8007222C
void S_WitchEnter__Fv() {
}


// address: 0x8007230C
void WitchBuyItem__Fv() {
	int idx;
}


// address: 0x80072590
void S_WBuyEnter__Fv() {
	int idx;
	int i;
	unsigned char done;
}


// address: 0x80072818
void S_WSellEnter__Fv() {
	int idx;
}


// address: 0x80072958
void WitchRechargeItem__Fv() {
	int i;
	int idx;
}


// address: 0x80072AD4
void S_WRechargeEnter__Fv() {
	int idx;
}


// address: 0x80072C38
void S_BoyEnter__Fv() {
}


// address: 0x80072DD0
void BoyBuyItem__Fv() {
}


// address: 0x80072E70
void HealerBuyItem__Fv() {
	int idx;
}


// address: 0x8007319C
void S_BBuyEnter__Fv() {
	int i;
	unsigned char done;
}


// address: 0x800733B0
void StoryIdItem__Fv() {
	int i;
	int idx;
}


// address: 0x80073700
void S_ConfirmEnter__Fv() {
}


// address: 0x8007381C
void S_HealerEnter__Fv() {
}


// address: 0x800738B4
void S_HBuyEnter__Fv() {
	int idx;
	int i;
	unsigned char done;
}


// address: 0x80073AE8
void S_StoryEnter__Fv() {
}


// address: 0x80073B84
void S_SIDEnter__Fv() {
	int idx;
}


// address: 0x80073D08
void S_TalkEnter__Fv() {
	int i;
	int tq;
	int sn;
	int la;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80073F08
void S_TavernEnter__Fv() {
}


// address: 0x80073F7C
void S_BarmaidEnter__Fv() {
}


// address: 0x80073FF0
void S_DrunkEnter__Fv() {
}


// address: 0x80074064
void STextEnter__Fv() {
}


// address: 0x80074228
void CheckStoreBtn__Fv() {
	struct CPad *Pad;
}


// address: 0x80074314
void ReleaseStoreBtn__Fv() {
}


// address: 0x80074328
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x80074350
void _GLOBAL__I_pSTextBoxCels() {
}


// address: 0x80074378
unsigned short GetDown__C4CPad_addr_80074378(struct CPad *this) {
}


// address: 0x800743A0
void SetRGB__6DialogUcUcUc_addr_800743A0(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800743C0
void SetBorder__6Dialogi_addr_800743C0(struct Dialog *this, int Type) {
}


// address: 0x800743C8
void ___6Dialog_addr_800743C8(struct Dialog *this, int __in_chrg) {
}


// address: 0x800743F0
// size: 0x10
struct Dialog *__6Dialog_addr_800743F0(struct Dialog *this) {
}


// address: 0x80074470
int GetOverlayOtBase__7CBlocks_addr_80074470() {
}


// address: 0x80074478
void T_DrawView__Fii(int StartX, int StartY) {
}


// address: 0x80074628
void T_FillSector__FPUcT0iiiib(unsigned char *P3Tiles, unsigned char *pSector, int xi, int yi, int w, int h, bool AddSec) {
	int i;
	int j;
	int xx;
	int yy;
	long v1;
	long v2;
	long v3;
	long v4;
	long ii;
	{
		{
			unsigned short *Map;
			{
				{
					{
						{
							long Dave;
						}
					}
				}
			}
		}
	}
}


// address: 0x8007486C
void T_FillTile__FPUciii(unsigned char *P3Tiles, int xx, int yy, int t) {
	long v1;
	long v2;
	long v3;
	long v4;
}


// address: 0x8007497C
void TownFixupBodges__Fv() {
}


// address: 0x800749BC
void T_Pass3__Fv() {
	unsigned char *pSector;
	int xx;
	int yy;
	{
		int y;
		{
			{
				int x;
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


// address: 0x80074D48
void CreateTown__Fi(int entry) {
	{
		int y;
		{
			{
				int x;
			}
		}
	}
}


// address: 0x80074E9C
unsigned char *GRL_LoadFileInMemSig__FPCcPUl(char *Name, unsigned long *Len) {
	struct FileIO *MyIo;
	char SmallName[20];
	unsigned char *Dest;
	int FileLen;
}


// address: 0x80074F80
void GRL_StripDir__FPcPCc(char *Dest, char *Src) {
	char *BSlash;
	char *FSlash;
	{
		{
			char *Last;
		}
	}
}


// address: 0x80075018
void InitVPTriggers__Fv() {
}


// address: 0x80075060
bool FindLevTrig__Fiii(int x, int y, int l) {
}


// address: 0x800750F8
void ScanMap__FPsi(short *list, int l) {
	int NoTrigs;
	{
		{
			int y;
			{
				{
					int x;
				}
			}
		}
	}
}


// address: 0x80075200
int FindBlock__Fii(int x, int y) {
	struct BLOCK *ptr;
}


// address: 0x8007529C
void ChangeBlock__Fiii(int x, int y, int bl) {
	struct BLOCK *ptr;
	short *list;
	{
		int b;
	}
}


// address: 0x800753E0
void ScanBlocks__FPs(short *list) {
	struct BLOCK *ptr;
	{
		int bl;
		{
			int y;
			{
				{
					int x;
				}
			}
		}
	}
}


// address: 0x800754E8
void BuildLevTrigs__Fv() {
}


// address: 0x8007567C
void DrawFRIG__Fv() {
}


// address: 0x8007569C
unsigned char ForceTownTrig__Fv() {
}


// address: 0x80075888
unsigned char ForceL1Trig__Fv() {
	int j;
}


// address: 0x80075A48
unsigned char ForceL2Trig__Fv() {
	int j;
	int dx;
	int dy;
}


// address: 0x80075D48
unsigned char ForceL3Trig__Fv() {
	int j;
	int dx;
	int dy;
}


// address: 0x80076054
unsigned char ForceL4Trig__Fv() {
	int j;
	int dx;
	int dy;
}


// address: 0x80076390
void Freeupstairs__Fv() {
	int j;
	int tx;
	int ty;
	int xx;
	int yy;
}


// address: 0x80076440
unsigned char ForceSKingTrig__Fv() {
}


// address: 0x800764CC
unsigned char ForceSChambTrig__Fv() {
}


// address: 0x80076558
unsigned char ForcePWaterTrig__Fv() {
}


// address: 0x800765E4
void CheckTrigForce__Fv() {
	int ocursmx;
	int ocursmy;
	{
		{
			{
				int i;
				{
					{
						int i;
					}
				}
			}
		}
	}
}


// address: 0x800768F0
void FadeGameOut__Fv() {
}


// address: 0x80076994
bool IsTrigger__Fii(int x, int y) {
	int i;
}


// address: 0x80076A8C
bool CheckTrigLevel__Fi(int level) {
}


// address: 0x80076AC8
void CheckTriggers__Fi(int pnum) {
	int x;
	int y;
	{
		int i;
		{
			{
				{
					{
						{
							unsigned char abortflag;
							int dx;
							int dy;
							char m;
						}
					}
				}
			}
		}
	}
}


// address: 0x80077054
int GetManaAmount__Fii(int id, int sn) {
	int i;
	int sl;
	int ma;
	int adj;
}


// address: 0x80077308
void UseMana__Fii(int id, int sn) {
	int ma;
}


// address: 0x80077498
unsigned char CheckSpell__FiicUc(int id, int sn, char st, unsigned char manaonly) {
}


// address: 0x80077538
void CastSpell__Fiiiiiiii(int id, int spl, int sx, int sy, int dx, int dy, int caster, int spllvl) {
	int i;
	int dir;
}


// address: 0x80077850
void DoResurrect__Fii(int pnum, int rid) {
	struct PlayerStruct *ptrplr;
}


// address: 0x80077AB8
void DoHealOther__Fii(int pnum, int rid) {
	int i;
	long l;
}


// address: 0x80077D14
void snd_update__FUc(unsigned char bStopAll) {
}


// address: 0x80077D1C
void snd_stop_snd__FP4TSnd(struct TSnd *pSnd) {
	{
		int v;
	}
}


// address: 0x80077D58
void snd_play_snd__FP4TSFXll(struct TSFX *pSnd, long lVolume, long lPan) {
}


// address: 0x80077DA0
void snd_play_msnd__FUsll(unsigned short pszName, long lVolume, long lPan) {
	int padj;
}


// address: 0x80077E40
void snd_init__FUl(unsigned long hWnd) {
}


// address: 0x80077E50
void music_stop__Fv() {
}


// address: 0x80077E90
void music_fade__Fv() {
}


// address: 0x80077ED0
void music_start__Fi(int nTrack) {
	{
		{
			int MusicVolume;
		}
	}
}


// address: 0x80077F70
unsigned char snd_playing__Fi(int SFXNo) {
}


// address: 0x80077F90
void ClrCursor__Fi(int num) {
}


// address: 0x80077FEC
void HappyMan__Fi(int n) {
}


// address: 0x80077FFC
void flyabout__7GamePad(struct GamePad *this) {
	int cp;
	int owx;
	int owy;
	int wx;
	int wy;
	struct CBlocks *gblocks;
	int step;
}


// address: 0x800783F8
void CloseInvChr__Fv() {
}


// address: 0x80078440
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	int x;
	int y;
	struct PlayerStruct *player;
}


// address: 0x800784C0
char pad_UpIsUpRight__Fic(int pval, char other) {
	int walk_dir;
}


// address: 0x8007857C
// size: 0xD4
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80078630
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80078638
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x8007867C
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800786C0
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	int i;
}


// address: 0x80078928
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	int i;
	int oc;
}


// address: 0x80078AE0
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80078B3C
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x80078B78
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	int i;
}


// address: 0x80078C64
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8007907C
void TestButtons__7GamePad(struct GamePad *this) {
	int hand;
	int joydown;
}


// address: 0x80079188
bool CheckCentre__7GamePadi(struct GamePad *this, int dir) {
	int wx;
	int wy;
	int ret;
}


// address: 0x80079280
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x800792B0
int CheckDirs__7GamePadiii(struct GamePad *this, int dir, int wx, int wy) {
}


// address: 0x800793B8
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x800793F8
bool newDirOk__7GamePadi(struct GamePad *this, int dir) {
	int x;
	int y;
	{
		{
			int wx;
			int wy;
		}
	}
}


// address: 0x800794A8
int CheckDiagBodge__7GamePadi(struct GamePad *this, int dir) {
	int x;
	int y;
	int lnd;
	int rnd;
	int wx;
	int wy;
	char *poffset_x;
	char *poffset_y;
	bool pl;
	bool pr;
	bool pf;
	bool pll;
	bool prr;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8007979C
int CheckIsoBodge__7GamePadi(struct GamePad *this, int dir) {
	int x;
	int y;
	int newdir;
	int wx;
	int wy;
	int lnd;
	int rnd;
	char *poffset_x;
	char *poffset_y;
	{
		{
		}
	}
}


// address: 0x80079B08
int CheckBodge__7GamePadi(struct GamePad *this, int dir) {
	int fx;
	int fy;
	struct map_info *dm;
	{
		{
			int wx;
			int wy;
		}
	}
}


// address: 0x80079C68
void walk__7GamePadi(struct GamePad *this, int cmd) {
	int xv;
	int yv;
	int dir;
	struct PlayerStruct *plr2;
	{
		{
		}
	}
}


// address: 0x80079FB0
void check_around_player__7GamePad(struct GamePad *this) {
	int x;
	int y;
	{
		{
			{
				{
					struct ItemStruct *pi;
				}
			}
		}
	}
}


// address: 0x8007A2EC
void show_combos__7GamePad(struct GamePad *this) {
	int y;
	struct RECT crect;
	enum TXT_JUST J;
	{
		int i;
	}
}


// address: 0x8007A578
void Handle__7GamePad(struct GamePad *this) {
	int cp;
	{
		{
			{
				{
					{
						{
							{
								{
									int abut;
									{
										{
											int owait;
											{
												{
													int dir;
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


// address: 0x8007AC34
void GamePadTask__FP4TASK(struct TASK *T) {
	int omp;
	int oms;
}


// address: 0x8007AD2C
// size: 0xD4
struct GamePad *GetGamePad__Fi(int pnum) {
}


// address: 0x8007AD4C
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	struct GamePad *GP1;
	struct GamePad *GP2;
}


// address: 0x8007AE50
void Init_GamePad__Fv() {
}


// address: 0x8007AE80
void InitGamePadVars__Fv() {
}


// address: 0x8007B00C
int SetWalkStyle__Fii(int pnum, int style) {
	int ret;
	struct KEY_ASSIGNS *ta;
}


// address: 0x8007B07C
char GetPadStyle__Fi(int pnum) {
	struct GamePad *GPad;
}


// address: 0x8007B0A0
void _GLOBAL__I_flyflag() {
}


// address: 0x8007B0D8
bool Active__11SpellTarget_addr_8007B0D8(struct SpellTarget *this) {
}


// address: 0x8007B0E4
void MoveToScrollTarget__7CBlocks_addr_8007B0E4(struct CBlocks *this) {
}


// address: 0x8007B0F8
unsigned short GetDown__C4CPad_addr_8007B0F8(struct CPad *this) {
}


// address: 0x8007B120
unsigned short GetUp__C4CPad_addr_8007B120(struct CPad *this) {
}


// address: 0x8007B148
unsigned short GetCur__C4CPad_addr_8007B148(struct CPad *this) {
}


// address: 0x8007B170
void DoGameTestStuff__Fv() {
}


// address: 0x8007B19C
void DoInitGameStuff__Fv() {
}


// address: 0x8007B1D0
void *SMemAlloc(unsigned long bytes, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x8007B1F0
unsigned char SMemFree(void *ptr, char *filename, int linenumber, unsigned long flags) {
}


// address: 0x8007B210
void GRL_InitGwin__Fv() {
}


// address: 0x8007B21C
unsigned long (*GRL_SetWindowProc__FPFUlUilUl_Ul(unsigned long (*NewProc)()))() {
	unsigned long (*OldProc)();
}


// address: 0x8007B22C
void GRL_CallWindowProc__FUlUilUl(unsigned long hw, unsigned int msg, long wp, unsigned long lp) {
}


// address: 0x8007B254
unsigned char GRL_PostMessage__FUlUilUl(unsigned long hWnd, unsigned int Msg, long wParam, unsigned long lParam) {
}


// address: 0x8007B300
char *Msg2Txt__Fi(int Msg) {
	{
	}
}


// address: 0x8007B348
// size: 0x4
enum LANG_TYPE LANG_GetLang__Fv() {
}


// address: 0x8007B354
void LANG_SetDb__F10LANG_DB_NO(enum LANG_DB_NO NewLangDbNo) {
	{
		{
			char FileNameBuffer[40];
			struct FileIO *FIO;
			{
				int f;
			}
		}
	}
}


// address: 0x8007B528
char *GetStr__Fi(int StrId) {
}


// address: 0x8007B5A4
void LANG_ReloadMainTXT__Fv() {
}


// address: 0x8007B5E8
void LANG_SetLang__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
	{
		{
			char FileNameBuffer[40];
			struct FileIO *FIO;
			{
				int f;
			}
		}
	}
}


// address: 0x8007B700
void DumpCurrentText__Fv() {
	{
		{
		}
	}
}


// address: 0x8007B758
int CalcNumOfStrings__FPPc(char **TPtr) {
}


// address: 0x8007B764
void GetLangFileName__F9LANG_TYPEPc(enum LANG_TYPE NewLanguageType, char *Dest) {
	char *Ext;
}


// address: 0x8007B844
char *GetLangFileNameExt__F9LANG_TYPE(enum LANG_TYPE NewLanguageType) {
}


// address: 0x8007B8C4
void DoPortalFX__FP8POLY_FT4iiii(struct POLY_FT4 *Ft4, int R, int G, int B, int OtPos) {
	unsigned char zU;
	unsigned char *s;
	unsigned char *d;
	unsigned char *Ft4m;
	short zX0;
	short zX1;
	short zY;
	int n;
	int xoffset[56];
}


// address: 0x8007BC34
// size: 0x28
struct POLY_FT4 *TempPrintMissile__FiiiiiiiiccUcUcUcc(int ScrX, int ScrY, int OtPos, int spell, int aframe, int direction, int anim, int sfx, int xflip, int yflip, int red, int grn, int blu, int semi) {
	struct POLY_FT4 *FT4;
	struct TextDat *missdat;
	int frame;
	int tv1;
	int dw;
	int dh;
}


// address: 0x8007C01C
void FuncTOWN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	int anim;
	struct POLY_FT4 *FT4;
	struct TextDat *missdat;
	int frame;
}


// address: 0x8007C1BC
void FuncRPORTAL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	int anim;
	struct POLY_FT4 *FT4;
	struct TextDat *missdat;
	int frame;
}


// address: 0x8007C2D8
void FuncFIREBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			int frame;
		}
	}
}


// address: 0x8007C380
void FuncHBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			int frame;
		}
	}
}


// address: 0x8007C438
void FuncLIGHTNING__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007C4A0
void FuncGUARDIAN__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007C5C4
void FuncFIREWALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	int frame;
}


// address: 0x8007C65C
void FuncFIREMOVE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	int frame;
}


// address: 0x8007C6F4
void FuncFLAME__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007C760
void FuncARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	char xflip;
	char yflip;
	int frame;
}


// address: 0x8007C810
void FuncFARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			char xflip;
			char yflip;
			int frame;
			int nframe;
		}
	}
}


// address: 0x8007C908
void FuncLARROW__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			char xflip;
			char yflip;
			int frame;
			int nframe;
		}
	}
}


// address: 0x8007C9F8
void FuncMAGMABALL__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	char xflip;
	char yflip;
	int frame;
}


// address: 0x8007CA94
void FuncBONESPIRIT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	char xflip;
	char yflip;
	int frame;
	int sfx;
}


// address: 0x8007CBB8
void FuncACID__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	char xflip;
	char yflip;
	int frame;
}


// address: 0x8007CC60
void FuncACIDSPLAT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007CCC8
void FuncACIDPUD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007CD30
void FuncFLARE__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	unsigned char red;
	unsigned char grn;
	unsigned char blu;
	struct POLY_FT4 *FT4;
}


// address: 0x8007CEBC
void FuncFLAREXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	unsigned char red;
	unsigned char grn;
	unsigned char blu;
	unsigned long bright;
}


// address: 0x8007D038
void FuncCBOLT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007D0A4
void FuncBOOM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007D104
void FuncELEMENT__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	{
		{
			char xflip;
			int frame;
		}
	}
}


// address: 0x8007D1D8
void FuncMISEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007D244
void FuncRHINO__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007D24C
void FuncFLASH__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
	int size;
	{
		{
			int xoffset[8][3];
			int id;
			struct CPlayer *test;
			struct PlayerStruct *player;
		}
	}
}


// address: 0x8007D3AC
void FuncMANASHIELD__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007D40C
void FuncFLASH2__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007D414
void FuncRESURRECTBEAM__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007D448
void FuncWEAPEXP__FP13MissileStructiii(struct MissileStruct *Ms, int ScrX, int ScrY, int OtPos) {
}


// address: 0x8007D4E4
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007D4E4(struct POLY_FT4 **Prim) {
}


// address: 0x8007D560
// size: 0x90
struct CPlayer *GetPlayer__7CPlayeri_addr_8007D560(int PNum) {
}


// address: 0x8007D5B0
int GetLastScrY__C7CPlayer_addr_8007D5B0(struct CPlayer *this) {
}


// address: 0x8007D5BC
int GetLastScrX__C7CPlayer_addr_8007D5BC(struct CPlayer *this) {
}


// address: 0x8007D5C8
int GetNumOfFrames__7TextDat_addr_8007D5C8(struct TextDat *this) {
}


// address: 0x8007D5DC
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8007D5DC(struct TextDat *this, int FrNum) {
}


// address: 0x8007D5F8
void ML_Init__Fv() {
	{
		int f;
	}
}


// address: 0x8007D630
int ML_GetList__Fi(int Level) {
	int RetVal;
}


// address: 0x8007D6B0
int ML_SetRandomList__Fi(int Level) {
	int NumOfLists;
}


// address: 0x8007D748
int ML_SetList__Fii(int Level, int List) {
	int NumOfLists;
}


// address: 0x8007D7F8
int ML_GetPresetMonsters__FiPiUl(int currlevel, int *typelist, unsigned long QuestsNeededMask) {
	struct MonstList *Mlist;
	int NumOfMonsters;
	int ThisList;
	int Index[10];
	{
		unsigned int f;
		{
			{
				{
					{
						int i;
						{
							{
								{
									int minl;
									int maxl;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8007D9E8
// size: 0x28
struct POLY_FT4 *DefaultObjPrint__FP12ObjectStructiiP7TextDatiii(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos, int XOffSet, int YOffSet) {
	int AnimFrame;
	struct POLY_FT4 *Ft4;
	int LoadIndex;
	int Creature;
	{
		{
			int PhysFrame;
			{
				{
					struct POLY_FT4 *ShadFt4;
				}
			}
		}
	}
}


// address: 0x8007DB7C
// size: 0x28
struct POLY_FT4 *LightObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	struct POLY_FT4 *Ft4;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8007DC40
// size: 0x28
struct POLY_FT4 *PrintOBJ_SARC__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	struct POLY_FT4 *Ft4;
	int AnimFrame;
	int LoadIndex;
	int Creature;
}


// address: 0x8007DD08
void ResetFlames__Fv() {
	{
		{
			{
				int i;
			}
		}
	}
}


// address: 0x8007DDD0
void PrintOBJ_FIRE__Fiii(int ScrX, int ScrY, int OtPos) {
	struct POLY_FT4 *Ft4a;
	struct TextDat *ThisDat;
	int diff;
	struct CINDER *C;
	{
		int i;
		{
			unsigned short fx;
			unsigned short fy;
			unsigned short fyi;
		}
	}
}


// address: 0x8007DF88
// size: 0x28
struct POLY_FT4 *DoorObjPrint__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	int AnimFrame;
	struct POLY_FT4 *Ft4;
	struct TextDat *ThisDat;
	struct DoorOff *DrOff;
	int LoadIndex;
	int Creature;
	int OpenClosed;
	int Dir;
	int Type;
}


// address: 0x8007E1C4
void DrawLightSpark__Fiii(int xo, int yo, int ot) {
}


// address: 0x8007E2A4
// size: 0x28
struct POLY_FT4 *PrintOBJ_L1LIGHT__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E304
void PrintTorchStick__Fiiii(int x, int y, int f, int OtPos) {
	struct TextDat *ThisDat;
}


// address: 0x8007E398
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E41C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E4A0
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHL2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E52C
// size: 0x28
struct POLY_FT4 *PrintOBJ_TORCHR2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E5B8
// size: 0x28
struct POLY_FT4 *PrintOBJ_BARRELEX__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	int AnimFrame;
	struct POLY_FT4 *Ft4;
	{
		{
			int PhysFrame;
			{
				{
					struct POLY_FT4 *ShadFt4;
				}
			}
		}
	}
}


// address: 0x8007E710
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINEL__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	int AnimFrame;
}


// address: 0x8007E7E8
// size: 0x28
struct POLY_FT4 *PrintOBJ_SHRINER__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	int AnimFrame;
}


// address: 0x8007E8C0
// size: 0x28
struct POLY_FT4 *PrintOBJ_BOOKCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007E8E4
// size: 0x28
struct POLY_FT4 *PrintOBJ_MCIRCLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	int AnimFrame;
	struct POLY_FT4 *Ft4;
	int ot;
	int LoadIndex;
	int Creature;
	int PhysFrame;
	{
		{
			struct POLY_FT4 *ShadFt4;
		}
	}
}


// address: 0x8007EA80
// size: 0x28
struct POLY_FT4 *PrintOBJ_STORYBOOK__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	int AnimFrame;
	struct POLY_FT4 *Ft4;
	int LoadIndex;
	int Creature;
	int PhysFrame;
	{
		{
			struct POLY_FT4 *ShadFt4;
		}
	}
}


// address: 0x8007EC08
// size: 0x28
struct POLY_FT4 *PrintOBJ_STORYCANDLE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007EC2C
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE1__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007EC50
// size: 0x28
struct POLY_FT4 *PrintOBJ_CANDLE2__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
}


// address: 0x8007EC74
// size: 0x28
struct POLY_FT4 *PrintOBJ_STAND__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	int ot;
}


// address: 0x8007ECB0
// size: 0x28
struct POLY_FT4 *PrintOBJ_SKFIRE__FP12ObjectStructiiP7TextDati(struct ObjectStruct *OStr, int ScrX, int ScrY, struct TextDat *ObjDat, int OtPos) {
	struct POLY_FT4 *FT4;
}


// address: 0x8007ED14
// size: 0x28
struct POLY_FT4 *PRIM_GetCopy__FP8POLY_FT4_addr_8007ED14(struct POLY_FT4 *Prim) {
	struct POLY_FT4 *RetPrim;
}


// address: 0x8007ED50
void PRIM_CopyPrim__FP8POLY_FT4T0_addr_8007ED50(struct POLY_FT4 *Dest, struct POLY_FT4 *Source) {
	unsigned long *Dest32;
	unsigned long *Source32;
	{
		unsigned int f;
	}
}


// address: 0x8007ED78
void PRIM_GetPrim__FPP8POLY_FT4_addr_8007ED78(struct POLY_FT4 **Prim) {
}


// address: 0x8007EDF4
int GetNumOfFrames__7TextDatii_addr_8007EDF4(struct TextDat *this, int Creature, int Action) {
}


// address: 0x8007EE2C
// size: 0x14
struct CCreatureHdr *GetCreature__7TextDati_addr_8007EE2C(struct TextDat *this, int Creature) {
}


// address: 0x8007EE48
// size: 0xC
struct FRAME_HDR *GetFr__7TextDati_addr_8007EE48(struct TextDat *this, int FrNum) {
}


// address: 0x8007EE64
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x8007EE6C
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x8007EE74
void ResetPal__Fv() {
}


// address: 0x8007EE7C
void SetFadeLevel__Fi(int fadeval) {
	int nval;
}


// address: 0x8007EEAC
bool GetFadeState__Fv() {
}


// address: 0x8007EEB8
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	unsigned char bright1;
	unsigned char bright2;
}


// address: 0x8007EFD4
void SmearScreen__Fv() {
}


// address: 0x8007EFDC
void DrawFadedScreen__Fv() {
	struct TextDat *ThisDat;
	struct POLY_GT4 *GT4a;
}


// address: 0x8007F064
void BlackPalette__Fv() {
	struct POLY_FT4 *FT4;
}


// address: 0x8007F160
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	int i;
	{
	}
}


// address: 0x8007F1F0
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x8007F248
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	int i;
	{
	}
}


// address: 0x8007F2F8
bool PaletteFadeOut__Fi(int fr) {
}


// address: 0x8007F34C
int GetMaxOtPos__7CBlocks_addr_8007F34C() {
}


// address: 0x8007F354
void M_CheckEFlag__Fi(int i) {
}


// address: 0x8007F35C
void M_ClearSquares__Fi(int i) {
	int mx;
	int my;
	int mt;
	int mt2;
	{
		int y;
		{
			{
				int x;
			}
		}
	}
}


// address: 0x8007F49C
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x8007F4FC
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	struct MonsterStruct *Monst;
}


// address: 0x8007F550
unsigned char M_Talker__Fi(int i) {
	unsigned char _mAi;
}


// address: 0x8007F5B8
void M_Enemy__Fi(int i) {
	struct MonsterStruct *Monst;
	int closest;
	int _mx;
	int _my;
	int _menemy;
	struct PlayerStruct *plr1;
	struct PlayerStruct *plr2;
	{
		{
			{
				{
					struct PlayerStruct *enemy;
					int y;
					{
						{
							int x1;
							int y1;
							int x2;
							int y2;
						}
					}
				}
			}
		}
	}
}


// address: 0x8007F7D0
void ClearMVars__Fi(int i) {
}


// address: 0x8007F84C
void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y) {
	struct CMonster *monst;
	struct MonsterStruct *pmonster;
	{
		{
			int slvl;
		}
	}
}


// address: 0x8007FDD0
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	int i;
}


// address: 0x8007FE70
void M_StartStand__Fii(int i, int md) {
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}


// address: 0x8007FFD4
void M_UpdateLeader__Fi(int i) {
	int x;
	int tmp;
}


// address: 0x800800E4
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x80080184
unsigned char SpawnSkeleton__Fiii(int ii, int x, int y) {
	int monstok[3][3];
	int i;
	int j;
	int xx;
	int yy;
	int rs;
	unsigned char savail;
}


// address: 0x80080374
void M_StartSpStand__Fii(int i, int md) {
	struct MonsterStruct *pmonster;
	int _mx;
	int _my;
}


// address: 0x8008045C
unsigned char PosOkMonst__Fiii(int i, int x, int y) {
	unsigned char ret;
	int oi;
	int mi;
	unsigned char fire;
}


// address: 0x800806C0
unsigned char CanPut__Fii(int i, int j) {
	int oi;
}


// address: 0x80080974
int encode_enemy__Fi(int m) {
}


// address: 0x800809D4
unsigned short GetAutomapType__FiiUc(int x, int y, unsigned char view) {
	unsigned short rv;
	unsigned char f;
	unsigned char AMLWallFlag;
	unsigned char AMRWallFlag;
}


// address: 0x80080AA8
void SetAutomapView__Fii(int x, int y) {
	int xx;
	int yy;
	unsigned short s;
	unsigned short d;
}


// address: 0x80080EF8
void AddWarpMissile__Fiii(int i, int x, int y) {
	int mi;
}


// address: 0x80080FE8
void SyncPortals__Fv() {
	{
		int i;
		{
			{
				{
					{
						{
							{
								int x;
								{
									{
										int y;
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


// address: 0x8008113C
void ActivatePortal__FiiiiiUc(int i, int x, int y, int lvl, int lvltype, int sp) {
}


// address: 0x800811C8
void DeactivatePortal__Fi(int i) {
}


// address: 0x800811E8
unsigned char PortalOnLevel__Fi(int i) {
}


// address: 0x80081220
void DelMis__Fii(int mi, int i) {
}


// address: 0x80081280
void RemovePortalMissile__Fi(int id) {
	int i;
	int mi;
	struct MissileStruct *m;
}


// address: 0x800813E4
void SetCurrentPortal__Fi(int p) {
}


// address: 0x800813F0
void GetPortalLevel__Fv() {
}


// address: 0x80081554
void GetPortalLvlPos__Fv() {
}


// address: 0x80081608
// size: 0x170
struct CompLevelMaps *__13CompLevelMapsRC9CompClass(struct CompLevelMaps *this, struct CompClass *NewCompObj) {
}


// address: 0x80081674
void ___13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg) {
}


// address: 0x80081704
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x80081734
void InitAllMaps__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		int f;
	}
}


// address: 0x80081788
// size: 0x1258
struct DLevel *GetMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
}


// address: 0x80081804
void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Dl) {
}


// address: 0x800818A4
void ImportData__13CompLevelMapsP14CompressedLevs(struct CompLevelMaps *this, struct CompressedLevs *Levs) {
	{
		int f;
		{
		}
	}
}


// address: 0x80081950
int ExportData__13CompLevelMapsPUc(struct CompLevelMaps *this, unsigned char *U8Dest) {
	unsigned char *BinPtr;
	{
		int f;
	}
}


// address: 0x800819FC
void MakeSureMapXDecomped__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
	{
		int f;
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80081AA8
void Init__4AMap(struct AMap *this) {
	{
		{
		}
	}
}


// address: 0x80081B14
int WriteCompressed__4AMapPUcRC9CompClass(struct AMap *this, unsigned char *Dest, struct CompClass *CompObj) {
	unsigned char *Data;
}


// address: 0x80081B88
void SetCompData__4AMapPCUci(struct AMap *this, unsigned char *Data, int NewSize) {
	long NewHnd;
	unsigned char *Dest;
}


// address: 0x80081C78
// size: 0x1258
struct DLevel *GetMap__4AMap(struct AMap *this) {
	struct DLevel *NewCurrLevel;
	{
		{
			long NewHnd;
		}
	}
}


// address: 0x80081D98
void ReleaseMap__4AMapP6DLevel(struct AMap *this, struct DLevel *Dl) {
}


// address: 0x80081E28
void CompressMap__4AMapRC9CompClass(struct AMap *this, struct CompClass *CompObj) {
	long NewHnd;
	unsigned char *Dest;
	struct DLevel *Dlev;
	long SplitHnd;
}


// address: 0x80081FEC
void DecompressMap__4AMapRC9CompClass(struct AMap *this, struct CompClass *CompObj) {
	long NewHnd;
	unsigned char *Dest;
	unsigned char *Src;
}


// address: 0x80082120
void CheckMapNum__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
}


// address: 0x80082154
bool IsCompressed__4AMap(struct AMap *this) {
}


// address: 0x80082160
void ___4AMap(struct AMap *this, int __in_chrg) {
}


// address: 0x800821A8
// size: 0x10
struct AMap *__4AMap(struct AMap *this) {
}


// address: 0x800821DC
bool IS_GameOver__Fv() {
}


// address: 0x80082204
void GO_DoGameOver__Fv() {
}


// address: 0x8008224C
void GameOverTask__FP4TASK(struct TASK *T) {
	bool TimeOut;
	int TimeOutTime;
	int lasttick;
	{
		{
			{
				struct CPad *Pad;
				{
					{
						int ntick;
						{
							int f;
						}
					}
				}
			}
		}
	}
}


// address: 0x80082450
void PrintGameOver__Fv() {
	struct Dialog PBack;
	struct RECT PRect;
	int otpos;
	int oldDotpos;
	int oldTotpos;
}


// address: 0x80082590
unsigned short GetDown__C4CPad_addr_80082590(struct CPad *this) {
}


// address: 0x800825B8
void SetRGB__6DialogUcUcUc_addr_800825B8(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x800825D8
void SetBack__6Dialogi_addr_800825D8(struct Dialog *this, int Type) {
}


// address: 0x800825E0
void SetBorder__6Dialogi_addr_800825E0(struct Dialog *this, int Type) {
}


// address: 0x800825E8
void ___6Dialog_addr_800825E8(struct Dialog *this, int __in_chrg) {
}


// address: 0x80082610
// size: 0x10
struct Dialog *__6Dialog_addr_80082610(struct Dialog *this) {
}


// address: 0x80082690
int GetOverlayOtBase__7CBlocks_addr_80082690() {
}


// address: 0x80082698
int GetMaxOtPos__7CBlocks_addr_80082698() {
}


// address: 0x800826A0
void VER_InitVersion__Fv() {
	char VerString[120];
}


// address: 0x800826E4
char *VER_GetVerString__Fv() {
}


// address: 0x800826F4
int CharPair2Num__FPc(char *Str) {
}


// address: 0x8008271C
int FindGetItem__FiUsi(int idx, unsigned short ci, int iseed) {
	int i;
	int ii;
}


// address: 0x800827D0
void gamemenu_off__Fv() {
}


// address: 0x800827D8
void DPIECE_ERROR__Fv() {
}


// address: 0x800827E0
void AllocdPiece__Fv() {
	{
		int i;
	}
}


// address: 0x80082838
void FreedPiece__Fv() {
}


// address: 0x8008287C
void ConvertdPiece__Fv() {
	{
		int y;
		{
			{
				int x;
				{
					short dp;
				}
			}
		}
	}
}


// address: 0x80082A44
short GetDPiece__Fii(int x, int y) {
}


// address: 0x80082ACC
void SetDPiece__Fiis(int x, int y, short v) {
}


// address: 0x80082B60
void SetdDead__FiiUc(int x, int y, unsigned char v) {
}


// address: 0x80082BA0
unsigned char GetdDead__Fii(int x, int y) {
}


// address: 0x80082BC8
void SetSOLID__Fii(int x, int y) {
}


// address: 0x80082C54
void ClearSOLID__Fii(int x, int y) {
}


// address: 0x80082CE0
bool GetSOLID__Fii(int x, int y) {
}


// address: 0x80082D28
void SetMISSILE__Fii(int x, int y) {
}


// address: 0x80082DB4
void ClearMISSILE__Fii(int x, int y) {
}


// address: 0x80082E40
bool GetMISSILE__Fii(int x, int y) {
}


// address: 0x80082E70
void SetBLOCK__Fii(int x, int y) {
}


// address: 0x80082EFC
void ClearBLOCK__Fii(int x, int y) {
}


// address: 0x80082F88
bool GetBLOCK__Fii(int x, int y) {
}


// address: 0x80082FB8
void SetTRAP__Fii(int x, int y) {
}


// address: 0x80083044
void ClearTRAP__Fii(int x, int y) {
}


// address: 0x800830D0
bool GetTRAP__Fii(int x, int y) {
}


// address: 0x8001FEFC
void DoEpi(struct TASK *T);

// address: 0x8001FF4C
void DoPro(struct TASK *T);

// address: 0x8001FF9C
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x80020010
// size: 0x5C
struct TASK *TSK_AddTask(unsigned long Id, void (*Main)(), int StackSize, int DataSize) {
	struct TASK *RetTask;
	long hndTask;
	struct GAL_STRUCT G[4];
}


// address: 0x800201F8
void TSK_DoTasks() {
	{
		struct TASK *NextT;
	}
}


// address: 0x800203B8
void TSK_Sleep(int Frames) {
	struct TASK *T;
}


// address: 0x80020494
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x8002051C
void TSK_Die();

// address: 0x80020548
void TSK_Kill(struct TASK *T);

// address: 0x80020598
// size: 0x5C
struct TASK *TSK_GetFirstActive();

// address: 0x800205A8
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		int LongsOk;
	}
}


// address: 0x80020624
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	struct TASK *T;
}


// address: 0x8002066C
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x800206B0
// size: 0x5C
struct TASK *TSK_GetCurrentTask();

// address: 0x800206C0
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x800206D8
// size: 0x5C
struct TASK *TSK_Exist(struct TASK *T, unsigned long Id, unsigned long Mask) {
	struct TASK *ptrTask;
	struct TASK *RetTask;
}


// address: 0x80020730
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x80020748
void TSK_ClearExecFilter();

// address: 0x8002076C
int TSK_KillTasks(struct TASK *CallingT, unsigned long Id, unsigned long Mask) {
	int TasksKilled;
	struct TASK *T;
	unsigned char WasCurrentTaskKilled;
	{
		struct TASK *NextT;
	}
}


// address: 0x8002086C
void TSK_IterateTasks(unsigned long Id, unsigned long Mask, void (*CallBack)()) {
	struct TASK *T;
	{
		struct TASK *NextT;
	}
}


// address: 0x800208E4
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x800208F8
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x8002090C
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x80020920
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x80020934
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x80020948
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x8002095C
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x800209A8
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x800209C8
void LoTskKill(struct TASK *T) {
}


// address: 0x80020A38
void ExecuteTask(struct TASK *T);

// address: 0x80020A88
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	void (*Old)();
}


// address: 0x80020AA0
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	void (*Old)();
}


// address: 0x80020AB8
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	void (*Old)();
}


// address: 0x80020AD0
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	void (*Old)();
}


// address: 0x80020AE8
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x80020B00
void TSK_ClearEpiProFilter();

// address: 0x80020B34
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x80020B44
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	void (*OldFunc)();
}


// address: 0x80020B5C
int TSK_SetExtraStackSize(int Size) {
	int OldSize;
}


// address: 0x80020B84
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	int f;
}


// address: 0x80020BB0
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	unsigned long f;
}


// address: 0x80020BEC
void TICK_InitModule();

// address: 0x80020C0C
void TICK_Set(unsigned long Val);

// address: 0x80020C1C
unsigned long TICK_Get();

// address: 0x80020C2C
void TICK_Update();

// address: 0x80020C4C
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x80020C78
char *TICK_GetDateString();

// address: 0x80020C88
char *TICK_GetTimeString();

// address: 0x80020C98
unsigned char GU_InitModule();

// address: 0x80020CC4
void GU_SetRndSeed(unsigned long *Tab) {
	int f;
}


// address: 0x80020CF4
unsigned long GU_GetRnd() {
	unsigned long RetVal;
}


// address: 0x80020D84
long GU_GetSRnd();

// address: 0x80020DA4
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x80020DE0
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

// address: 0x80020E04
void main();

// address: 0x80020E54
unsigned char DBG_OpenModule();

// address: 0x80020E5C
void DBG_PollHost();

// address: 0x80020E64
void DBG_Halt();

// address: 0x80020E6C
void DBG_SendMessage(char *e);

// address: 0x80020E84
void DBG_SetMessageHandler(void (*Func)());

// address: 0x80020E94
void DBG_Error(char *Text, char *File, int Line);

// address: 0x80020EC8
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x80020ED8
void SendPsyqString(char *e);

// address: 0x80020EE0
void DBG_SetPollRoutine(void (*Func)());

// address: 0x80020EF0
unsigned long GTIMSYS_GetTimer();

// address: 0x80020F14
void GTIMSYS_ResetTimer();

// address: 0x80020F38
unsigned long GTIMSYS_InitTimer() {
	int f;
	unsigned long Total;
}


// address: 0x8002116C
// size: 0x8
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x8002117C
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x800211B8
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x800211C8
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x800211E0
unsigned char GSYS_InitMachine();

// address: 0x80021234
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x80021268
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	unsigned long ThisSp;
}


// address: 0x800212D4
void GAL_SetErrorChecking(unsigned char OnOff);

// address: 0x800212E4
long GAL_SplitBlock(long CurBlock, unsigned long Size) {
	struct MEM_INIT_INFO *M;
	struct MEM_HDR *MemHdr;
	struct MEM_HDR *SplitBlock;
}


// address: 0x80021404
void GAL_InitModule() {
	int f;
}


// address: 0x800214BC
unsigned char GAL_AddMemType(struct MEM_INIT_INFO *M) {
	struct MEM_INIT_INFO *P;
	struct MEM_HDR *FreeMemHdr;
	unsigned long Addr1;
	unsigned long Addr2;
}


// address: 0x800215DC
long GAL_Alloc(unsigned long Size, unsigned long Type, char *Name) {
	struct MEM_HDR *Block;
	struct MEM_INIT_INFO *M;
	unsigned long FullSize;
	struct MEM_HDR *(*FRoute)();
	unsigned char High;
	{
	}
}


// address: 0x80021774
void *GAL_Lock(long Handle) {
	struct MEM_HDR *MemHdr;
}


// address: 0x800217DC
unsigned char GAL_Unlock(long Handle) {
	struct MEM_HDR *MemHdr;
}


// address: 0x80021860
unsigned char GAL_Free(long Handle) {
	struct MEM_INIT_INFO *M;
	struct MEM_HDR *MemHdr;
}


// address: 0x80021908
unsigned long GAL_GetFreeMem(unsigned long Type) {
	unsigned long FreeMem;
	struct MEM_INIT_INFO *M;
	{
		struct MEM_HDR *Block;
	}
}


// address: 0x8002197C
unsigned long GAL_GetUsedMem(unsigned long Type) {
	unsigned long FreeMem;
	struct MEM_INIT_INFO *M;
	{
		struct MEM_HDR *Block;
	}
}


// address: 0x800219F0
unsigned long GAL_LargestFreeBlock(unsigned long Type) {
	unsigned long Largest;
	struct MEM_HDR *Index;
	struct MEM_INIT_INFO *MI;
}


// address: 0x80021A6C
void AttachHdrToList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80021A8C
void DetachHdrFromList(struct MEM_HDR **Head, struct MEM_HDR *Block);

// address: 0x80021AD8
unsigned char IsActiveValidHandle(long Handle) {
}


// address: 0x80021B10
void *AlignPtr(void *P, unsigned long Align) {
	unsigned long Addr;
	unsigned long Temp;
}


// address: 0x80021B40
unsigned long AlignSize(unsigned long Size, unsigned long Align);

// address: 0x80021B70
// size: 0x1C
struct MEM_HDR *FindClosestSizedBlock(struct MEM_HDR *Head, unsigned long Size) {
	struct MEM_HDR *Closest;
	struct MEM_HDR *Index;
}


// address: 0x80021BC8
// size: 0x1C
struct MEM_HDR *FindHighestMemBlock(struct MEM_HDR *Head, unsigned long Size) {
	struct MEM_HDR *Closest;
	struct MEM_HDR *Index;
	void *Highest;
}


// address: 0x80021C30
// size: 0x1C
struct MEM_HDR *FindLowestMemBlock(struct MEM_HDR *Head, unsigned long Size) {
	struct MEM_HDR *Closest;
	struct MEM_HDR *Index;
	unsigned long Lowest;
}


// address: 0x80021C98
// size: 0x28
struct MEM_INIT_INFO *GetMemInitInfoBlockFromType(unsigned long Type) {
	struct MEM_INIT_INFO *P;
}


// address: 0x80021CD4
void MergeToEmptyList(struct MEM_INIT_INFO *MI, struct MEM_HDR *M) {
	struct MEM_HDR *Index;
	struct MEM_HDR *NextIndex;
	void *Start;
	void *End;
	{
		void *ThisStart;
		void *ThisEnd;
	}
}


// address: 0x80021DA8
long GAL_AllocAt(unsigned long Size, void *Addr, unsigned long Type, char *Name) {
	struct MEM_HDR *Block;
	struct MEM_INIT_INFO *M;
}


// address: 0x80021E84
long LoAlloc(struct MEM_INIT_INFO *M, struct MEM_HDR *Block, void *Addr, unsigned long Size, char *Name) {
	struct MEM_HDR *SplitBlock;
	unsigned long PhysSize;
}


// address: 0x8002201C
// size: 0x1C
struct MEM_HDR *FindBlockInTheseBounds(struct MEM_HDR *Head, void *Addr, unsigned long Size) {
	struct MEM_HDR *Index;
	unsigned char Done;
	unsigned long ThisStart;
	unsigned long ThisEnd;
	unsigned long Start;
	unsigned long End;
}


// address: 0x80022088
// size: 0x1C
struct MEM_HDR *GetFreeMemHdrBlock() {
	struct MEM_HDR *RetBlock;
}


// address: 0x80022110
void ReleaseMemHdrBlock(struct MEM_HDR *Index);

// address: 0x80022150
void GAL_IterateEmptyMem(unsigned long MemType, void (*Func)()) {
	struct MEM_INIT_INFO *M;
	{
		struct MEM_HDR *Block;
	}
}


// address: 0x800221D4
void GAL_IterateUsedMem(unsigned long MemType, void (*Func)()) {
	struct MEM_INIT_INFO *M;
	{
		struct MEM_HDR *Block;
	}
}


// address: 0x80022270
unsigned char GAL_SetMemName(long Hnd, char *Text);

// address: 0x800222E0
unsigned long GAL_TotalMem(unsigned long Type) {
	unsigned long TotalMem;
	struct MEM_INIT_INFO *M;
}


// address: 0x80022334
void *GAL_MemBase(unsigned long Type) {
	void *Ret;
	struct MEM_INIT_INFO *M;
}


// address: 0x80022388
unsigned char GAL_DefragMem(unsigned long type) {
}


// address: 0x8002240C
unsigned char GSetError(enum GAL_ERROR_CODE Err);

// address: 0x80022468
unsigned char GAL_CheckMem(unsigned long Type) {
	struct MEM_INIT_INFO *M;
	struct MEM_HDR *MemHdr;
	unsigned long TotalMem;
}


// address: 0x80022564
unsigned char CheckCollisions(struct MEM_INIT_INFO *M, struct MEM_HDR *MemHdr) {
	struct MEM_HDR *CheckHdr;
}


// address: 0x80022610
unsigned char AreBlocksColliding(struct MEM_HDR *Hdr1, struct MEM_HDR *Hdr2) {
	unsigned long Addr1;
	unsigned long Addr2;
}


// address: 0x80022668
char *GAL_GetErrorText(enum GAL_ERROR_CODE Err);

// address: 0x80022698
// size: 0x4
enum GAL_ERROR_CODE GAL_GetLastErrorCode();

// address: 0x800226A8
char *GAL_GetLastErrorText();

// address: 0x800226D0
int GAL_HowManyEmptyRegions(unsigned long Type) {
	struct MEM_INIT_INFO *m;
	int Count;
	{
		struct MEM_HDR *mh;
	}
}


// address: 0x80022738
int GAL_HowManyUsedRegions(unsigned long Type) {
	struct MEM_INIT_INFO *m;
	int Count;
	{
		struct MEM_HDR *mh;
	}
}


// address: 0x800227A0
void GAL_SetTimeStamp(int Time);

// address: 0x800227B0
void GAL_IncTimeStamp();

// address: 0x800227D0
int GAL_GetTimeStamp();

// address: 0x800227E0
long GAL_AlignSizeToType(unsigned long Size, unsigned long MemType) {
	struct MEM_INIT_INFO *Mi;
}


// address: 0x80022830
long GAL_AllocMultiStruct(struct GAL_STRUCT *G, unsigned long Type, char *Name) {
}


// address: 0x80022880
unsigned int GAL_ProcessMultiStruct(struct GAL_STRUCT *G, unsigned long Type) {
	unsigned int TotalMem;
	int f;
}


// address: 0x8002292C
long GAL_GetSize(long hnd) {
}


// address: 0x80022988
unsigned char GazDefragMem(unsigned long MemType) {
	struct MEM_HDR *LockedBlocks;
	struct MEM_INIT_INFO *M;
	struct MEM_REG Reg;
	{
		struct MEM_HDR *NewEmptyBlock;
		struct MEM_HDR *ListOfBlocksInRegion;
		unsigned long ShuffledSize;
		int GapSize;
	}
}


// address: 0x80022AF0
void PutBlocksInRegionIntoList(struct MEM_REG *Reg, struct MEM_HDR **ToList, struct MEM_HDR **FromList) {
	struct MEM_HDR *ThisBlock;
	{
		struct MEM_HDR *NextBlock;
		struct MEM_REG MemReg;
	}
}


// address: 0x80022B94
unsigned char CollideRegions(struct MEM_REG *Reg1, struct MEM_REG *Reg2);

// address: 0x80022BC8
void DeleteEmptyBlocks(struct MEM_INIT_INFO *M) {
	{
		struct MEM_HDR *ThisBlock;
	}
}


// address: 0x80022C34
unsigned char GetRegion(struct MEM_REG *Reg, struct MEM_HDR *LockedBlocks, struct MEM_INIT_INFO *M) {
	struct MEM_HDR *FirstBlock;
	struct MEM_HDR *SecondBlock;
	struct MEM_REG NewReg;
}


// address: 0x80022D2C
// size: 0x1C
struct MEM_HDR *FindNextBlock(void *Addr, struct MEM_HDR *Blocks) {
	{
		unsigned long BlockAddr;
	}
}


// address: 0x80022D68
unsigned long ShuffleBlocks(struct MEM_HDR *Blocks, struct MEM_REG *Reg, struct MEM_INIT_INFO *M) {
	unsigned long NewSize;
	void *MemBase;
	struct MEM_HDR *ThisBlock;
}


// address: 0x80022DF8
void PutAllLockedBlocksOntoList(struct MEM_HDR **ToHead, struct MEM_HDR **FromHead) {
	struct MEM_HDR *CurHdr;
	{
		struct MEM_HDR *NextCurHdr;
	}
}


// address: 0x80022E74
void SortMemHdrListByAddr(struct MEM_HDR **Head) {
	unsigned char DidASwap;
	struct MEM_HDR *CurHdr;
	struct MEM_HDR *NextHdr;
	{
		struct MEM_HDR *OldPrev;
	}
}


// address: 0x80022F28
void GraftMemHdrList(struct MEM_HDR **ToList, struct MEM_HDR **FromList) {
	struct MEM_HDR *OldFirst;
	{
		struct MEM_HDR *LastHdr;
	}
}


// address: 0x80022F84
void GAL_MemDump(unsigned long Type);

// address: 0x80022FF8
void GAL_SetVerbosity(enum GAL_VERB_LEV G);

// address: 0x80023008
int CountFreeBlocks() {
	struct MEM_HDR *RetBlock;
	int Count;
}


// address: 0x80023034
void SetBlockName(struct MEM_HDR *MemHdr, char *NewName) {
	int IndexSoFar;
}


// address: 0x8002307C
int GAL_GetNumFreeHeaders();

// address: 0x8002308C
unsigned long GAL_GetLastTypeAlloced();

// address: 0x8002309C
void (*GAL_SetAllocFilter(void (*NewFilter)()))() {
	void (*OldFilter)();
}


// address: 0x800230B4
unsigned char GAL_SortUsedRegionsBySize(unsigned long MemType) {
	struct MEM_INIT_INFO *M;
}


// address: 0x80023108
unsigned char SortSize(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x80023118
unsigned char GAL_SortUsedRegionsByAddress(unsigned long MemType) {
	struct MEM_INIT_INFO *M;
}


// address: 0x8002316C
unsigned char SortAddr(struct MEM_HDR *B1, struct MEM_HDR *B2);

// address: 0x8002317C
void SortMemHdrList(struct MEM_HDR **Head, unsigned char (*CompFunc)()) {
	unsigned char DidASwap;
	struct MEM_HDR *CurHdr;
	struct MEM_HDR *NextHdr;
	{
		struct MEM_HDR *OldPrev;
	}
}


// address: 0x80025538
int vsprintf(char *str, char *fmt, char *ap) {
	struct FILE f;
}


// address: 0x80025584
int _doprnt(char *fmt0, char *argp, struct FILE *fp) {
	char *fmt;
	int ch;
	int cnt;
	int n;
	char *t;
	unsigned long _ulong;
	int base;
	int dprec;
	int fieldsz;
	int flags;
	int fpprec;
	int prec;
	int realsz;
	int size;
	int width;
	char sign;
	char *digs;
	bool rflag;
	bool nosign;
	bool pforw;
	{
		char c;
		{
			{
				char *p;
			}
		}
	}
}



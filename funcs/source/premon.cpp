// C:\diabpsx\SOURCE\PREMON.CPP

#include "types.h"

// address: 0x8015F6E8
void SwapMonsterType__FPi(int *oldmt) {
	// register: 5
	register int mt;
}


// address: 0x8015F75C
unsigned char MonstPlace__Fii(int xp, int yp) {
}


// address: 0x8015F828
void InitMonsterGFX__Fi(int monst) {
	// register: 6
	register int anim;
	// address: 0xFFFFFF00
	// size: 0x100
	auto char strBuff[256];
	// register: 3
	register int mtype;
	// register: 7
	// size: 0x3C
	register struct MonsterData *pmonsterdata;
}


// address: 0x8015F900
void PlaceMonster__Fiiii(int i, int mtype, int x, int y) {
}


// address: 0x8015F98C
int AddMonsterType__Fii(int type, int placeflag) {
	// register: 16
	register int i;
	// register: 4
	register unsigned char done;
}


// address: 0x8015FA88
void GetMonsterTypes__FUl(unsigned long QuestMask) {
	// address: 0xFFFFFCE8
	// size: 0x2F8
	auto int typelist[190];
	// address: 0xFFFFFFE0
	auto int mt;
	// register: 17
	register int nt;
}


// address: 0x8015FB48
void ClrAllMonsters__Fv() {
	// register: 17
	register int i;
	// register: 16
	// size: 0x68
	register struct MonsterStruct *Monst;
}


// address: 0x8015FC80
void InitLevelMonsters__Fv() {
	// register: 3
	register int i;
}


// address: 0x8015FD04
void GetLevelMTypes__Fv() {
	// register: 17
	register int i;
	// register: 4
	register int minl;
	// register: 2
	register int maxl;
	// address: 0xFFFFFB20
	// size: 0x2F8
	auto int typelist[190];
	// address: 0xFFFFFFD8
	auto int mt;
	// register: 17
	register int nt;
	// register: 20
	register char mamask;
	// register: 18
	register unsigned long QuestMask;
	{
		{
			{
				{
					// address: 0xFFFFFE18
					// size: 0x1BC
					auto int skeltypes[111];
					// register: 19
					register int numskeltypes;
				}
			}
		}
	}
}


// address: 0x801601D8
void PlaceQuestMonsters__Fv() {
	// register: 16
	register int skeltype;
	// register: 16
	register unsigned char *setp;
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
				}
			}
		}
	}
}


// address: 0x8016059C
void LoadDiabMonsts__Fv() {
	// register: 16
	register unsigned char *lpSetPiece;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x801606AC
void PlaceGroup__FiiUci(int mtype, int num, unsigned char leaderf, int leader) {
	// register: 16
	register int xp;
	// register: 18
	register int yp;
	// register: 21
	register int x1;
	// register: 23
	register int y1;
	// register: 20
	register int j;
	// register: 19
	register int placed;
	// address: 0xFFFFFFA8
	auto int try1;
	// register: 22
	register int try2;
	// register: 2
	register int rd;
}


// address: 0x80160CA0
void SetMapMonsters__FPUcii(unsigned char *pMap, int startx, int starty) {
	// register: 16
	register int i;
	// register: 18
	register int j;
	// register: 2
	register unsigned short rw;
	// register: 20
	register unsigned short rh;
	// register: 17
	register unsigned short *lm;
	// address: 0xFFFFFFC8
	auto int mt;
}


// address: 0x80160ED4
void InitMonsters__Fv() {
	// register: 18
	register int i;
	// register: 16
	register int mtype;
	// register: 5
	register int na;
	// register: 20
	register int nt;
	// address: 0xFFFFFE08
	// size: 0x1BC
	auto int scattertypes[111];
	// register: 21
	register int numscattypes;
	// register: 17
	register long fv;
	// register: 16
	register long j;
	// register: 4
	register int numplacemonsters;
	// register: 17
	register int s;
	// register: 16
	register int t;
}


// address: 0x80161288
void PlaceUniqueMonst__Fiii(int uniqindex, int miniontype, int unpackfilesize) {
	// address: 0xFFFFFFA0
	// size: 0x18
	auto struct UniqMonstStruct *Uniq;
	// register: 20
	// size: 0x68
	register struct MonsterStruct *Monst;
	// register: 23
	register int xp;
	// register: 18
	register int yp;
	// register: 17
	register int x;
	// register: 16
	register int y;
	// register: 3
	register unsigned char done;
	// register: 19
	register int count;
	// address: 0xFFFFFFA8
	auto int count2;
	// address: 0xFFFFFF40
	// size: 0x40
	auto char filestr[64];
	// address: 0xFFFFFFB0
	auto int uniqtype;
	// register: 5
	register int i;
	// address: 0xFFFFFFB8
	auto unsigned char zharflag;
	// register: 16
	register int mMinDamage;
	// register: 17
	register int mMaxDamage;
	{
		{
			// address: 0xFFFFFF80
			auto int monstype;
		}
	}
}


// address: 0x80161BCC
void PlaceUniques__Fv() {
	// register: 17
	register int u;
	// register: 5
	register int mt;
	// register: 16
	register unsigned char done;
	{
		{
			{
				{
					// address: 0xFFFFFFE0
					auto int monsttype;
				}
			}
		}
	}
}


// address: 0x80161D5C
int PreSpawnSkeleton__Fv() {
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 18
	register int skeltypes;
	// register: 16
	register int skel;
}


// address: 0x80161E94
void decode_enemy__Fii(int m, int enemy) {
}


// address: 0x80161FB0
unsigned char IsGoat__Fi(int mt) {
}



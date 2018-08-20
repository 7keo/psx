// C:\diabpsx\PSXSRC\BLOCK.CPP

#include "types.h"

// address: 0x8008D41C
void UpdateSel__FPUsUsPUc(unsigned short *Col, unsigned short Add, unsigned char *Count) {
}


// address: 0x8008D45C
void CycleSelCols__Fv() {
}


// address: 0x8008D614
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


// address: 0x8008D688
int FindCreature__7CBlocksi(struct CBlocks *this, int MgNum) {
	{
		// register: 3
		register unsigned int f;
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
	// register: 16
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	// size: 0x10
	register struct MonstList *MList;
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
	// register: 19
	register unsigned char *MyBlocks;
	// register: 18
	register int *BlockOffsets;
	{
		// register: 16
		register int f;
	}
}


// address: 0x8008DD70
void MakeGt4Table__7CBlocks(struct CBlocks *this) {
	{
		// register: 19
		register unsigned int f;
		{
			// address: 0xFFFFFFB0
			// size: 0x34
			auto struct POLY_GT4 ThisGt4;
		}
	}
}


// address: 0x8008DF54
void MakeGt4__7CBlocksP8POLY_GT4P9FRAME_HDR(struct CBlocks *this, struct POLY_GT4 *GT4, struct FRAME_HDR *Fr) {
	// register: 2
	register int H;
	// register: 3
	register int Rotated;
	// register: 9
	register int Tpage;
	// register: 7
	register int zU;
	// register: 8
	register int zV;
	// register: 4
	register int zW;
	// register: 5
	register int zH;
}


// address: 0x8008E07C
void MyRoutine__FR7CBlocksii(struct CBlocks *B, int x, int y) {
}


// address: 0x8008E0E4
void SetRandOffset__7CBlocksi(struct CBlocks *this, int QuakeAmount) {
}


// address: 0x8008E140
void Print__7CBlocks(struct CBlocks *this) {
	// register: 18
	register int MxInt;
	// register: 17
	register int MyInt;
}


// address: 0x8008E25C
void SetXY__7CBlocksii(struct CBlocks *this, int nx, int ny) {
}


// address: 0x8008E284
void GetXY__7CBlocksPiT1(struct CBlocks *this, int *nx, int *ny) {
}


// address: 0x8008E29C
void InitColourCycling__7CBlocks(struct CBlocks *this) {
	// register: 16
	register int CycleIndex;
	{
		// register: 19
		register int f;
		{
			{
				{
					{
						// register: 19
						register int f;
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
	// register: 2
	register int rgb_itxr;
	// register: 2
	register int rgb_itxg;
	// register: 2
	register int rgb_itxb;
	// register: 7
	register int rgb_leftr;
	// register: 6
	register int rgb_leftg;
	// register: 5
	register int rgb_leftb;
	// register: 2
	register int rgb_rightr;
	// register: 2
	register int rgb_rightg;
	// register: 2
	register int rgb_rightb;
	// register: 4
	register int rgb_cordr;
	// register: 3
	register int rgb_cordg;
	// register: 2
	register int rgb_cordb;
}


// address: 0x8008E528
void PrintMap__7CBlocksii(struct CBlocks *this, int x, int y) {
	// address: 0xFFFFFF50
	auto int XPos;
	// address: 0xFFFFFF58
	auto int YPos;
	// address: 0xFFFFFF60
	auto int xx;
	// address: 0xFFFFFF68
	auto int BlankBlock;
	// address: 0xFFFFFF70
	auto unsigned char *MyBlocks;
	// address: 0xFFFFFF78
	auto int *BlockOffsets;
	// register: 20
	register int XPix;
	// register: 21
	register int YPix;
	// register: 19
	register int nx;
	// register: 16
	register int ny;
	// address: 0xFFFFFF80
	auto int CLeft;
	// address: 0xFFFFFF88
	auto int CRight;
	// address: 0xFFFFFF90
	auto int CTop;
	// address: 0xFFFFFF98
	auto int CBottom;
	{
		// address: 0xFFFFFFA0
		auto int ThisY;
		// address: 0xFFFFFFA8
		auto int ThisXPos;
		// register: 21
		register int ThisYPos;
		// address: 0xFFFFFFB0
		auto int Height;
		{
			// register: 22
			// size: 0x8
			register struct CPart *Parts;
			// register: 18
			// size: 0xC
			register struct CBlock *MyBlock;
			// register: 6
			register int BlockNum;
			// address: 0xFFFFFF08
			// size: 0x28
			auto struct RGBData MyRgbData;
			// register: 16
			register int bx;
			// register: 17
			register int by;
			{
				{
					// register: 5
					// size: 0x8
					register struct RECT *BlockR;
					// register: 4
					register int clipx;
					// register: 3
					register int clipy;
					{
						{
							// address: 0xFFFFFFB8
							auto int NumOfParts;
							// register: 7
							register bool DoTrans;
							// register: 20
							register int OtPos;
							// address: 0xFFFFFFC0
							auto bool PFlag;
							{
								{
									{
										{
											// address: 0xFFFFFFC8
											auto int f;
											{
												// address: 0xFFFFFF30
												// size: 0x34
												auto struct POLY_GT4 *DestGt4;
												// register: 16
												// size: 0x10
												register struct LittleGt4 *ThisGt4;
												// register: 3
												register unsigned char Flags;
												// register: 19
												register int W;
												// register: 16
												register int H;
												{
													{
														// register: 3
														register int r;
														// register: 4
														register int g;
														// register: 5
														register int b;
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
	// address: 0xFFFFFF90
	auto int XPos;
	// address: 0xFFFFFF98
	auto int YPos;
	// address: 0xFFFFFFA0
	auto int xx;
	// register: 2
	register bool Infra;
	// address: 0xFFFFFFA8
	auto int MyXShifter;
	// address: 0xFFFFFFB0
	auto int MyYShifter;
	// register: 18
	register int Total;
	// address: 0xFFFFFFB8
	auto bool DoVisCheck;
	// register: 7
	register int XPix;
	// register: 5
	register int YPix;
	// address: 0xFFFFFFC0
	auto int CRight;
	{
		// register: 30
		register int ThisXPos;
		// register: 23
		register int ThisYPos;
		// address: 0xFFFFFFC8
		auto int Height;
		{
			{
				{
					// register: 5
					// size: 0x8
					register struct map_info *p0;
					// register: 19
					// size: 0x8
					register struct map_info *p1;
					// register: 22
					// size: 0x8
					register struct map_info *p2;
					// address: 0xFFFFFFD0
					// size: 0x8
					auto struct map_info *p3;
					// register: 21
					register int myx;
					// register: 20
					register int myy;
				}
			}
		}
	}
}


// address: 0x8008F510
int AddMonst__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	// register: 2
	register int nMonster;
	// register: 8
	register int Index;
	// register: 9
	register int bFlags;
	{
		{
			// register: 3
			// size: 0x68
			register struct MonsterStruct *MyMonst;
			// register: 2
			register int mi;
			{
				{
					{
						{
							{
								{
									// register: 4
									register int ThisIndex;
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
	// address: 0xFFFFFEE8
	// size: 0x70
	auto struct TextDat *CMonstGraphics;
	// address: 0xFFFFFEF0
	auto int Total;
	// address: 0xFFFFFEF8
	auto int Wx;
	// address: 0xFFFFFF00
	auto int Wy;
	// address: 0xFFFFFF08
	auto int Cx;
	// address: 0xFFFFFF10
	auto int Cy;
	// address: 0xFFFFFF18
	// size: 0x70
	auto struct TextDat *GolemGraphics;
	// address: 0xFFFFFF68
	auto bool MyInfraFlag;
	{
		// address: 0xFFFFFF20
		auto int f;
		{
			// address: 0xFFFFFF28
			auto int Index;
			{
				{
					// register: 22
					// size: 0x68
					register struct MonsterStruct *MyMonst;
					// register: 21
					register int Frame;
					// register: 20
					register int Action;
					// register: 16
					register int Dir;
					// register: 16
					register int PhysFrame;
					// register: 30
					register int Creature;
					// register: 16
					register int ScrXOff;
					// register: 17
					register int ScrYOff;
					// register: 5
					// size: 0x28
					register struct POLY_FT4 *Ft4;
					// register: 16
					// size: 0x28
					register struct POLY_FT4 *ShadFt4;
					// address: 0xFFFFFF30
					auto bool StartAnim;
					// address: 0x8011CBD0
					// size: 0x10
					static int AddVal[4];
					// address: 0xFFFFFF38
					auto int bx;
					// register: 23
					register int by;
					// address: 0xFFFFFF48
					auto int Sx;
					// address: 0xFFFFFF50
					auto int Sy;
					// address: 0xFFFFFF58
					auto int OtPos;
					{
						{
							// register: 17
							register int blockr;
							// register: 18
							register int blockg;
							// register: 19
							register int blockb;
							{
								{
									// register: 6
									register int AVal;
									{
										// address: 0xFFFFFF70
										auto int DoCompress;
										// address: 0xFFFFFF20
										auto int f;
										{
											// address: 0xFFFFFF78
											auto int MaxDecompress;
											{
												// address: 0xFFFFFF80
												auto int f;
												{
													// register: 20
													register int Frame;
													// address: 0xFFFFFF88
													auto int Action;
													// address: 0xFFFFFF90
													auto int Dir;
													// register: 19
													register int Creature;
													// address: 0xFFFFFF98
													auto int ScrXOff;
													// address: 0xFFFFFFA0
													auto int ScrYOff;
													// address: 0xFFFFFED8
													// size: 0x8
													auto struct RECT R;
													// register: 6
													register int GType;
													// register: 17
													register int Sx;
													// register: 16
													register int Sy;
													// address: 0xFFFFFFA8
													auto int Index;
													// register: 5
													register int transfile;
													// address: 0xFFFFFFB0
													auto int Mg;
													{
														{
															// register: 18
															// size: 0x68
															register struct MonsterStruct *MyMonst;
															{
																{
																	// register: 30
																	register int bx;
																	// register: 23
																	register int by;
																	// register: 21
																	register int mx;
																	// register: 22
																	register int my;
																	// register: 3
																	register bool PrintIt;
																	// register: 2
																	register bool Compressed;
																	{
																		// register: 4
																		register unsigned int g;
																		{
																			{
																				// register: 19
																				register int OtPos;
																				// register: 17
																				// size: 0x28
																				register struct POLY_FT4 *Ft4;
																				// register: 6
																				register int blockr;
																				// register: 5
																				register int blockg;
																				// register: 2
																				register int blockb;
																				// register: 16
																				// size: 0x28
																				register struct POLY_FT4 *ShadFt4;
																				// register: 4
																				register int paloff;
																				// register: 5
																				register int Col;
																				{
																					{
																						{
																							{
																								{
																									{
																										// register: 5
																										register int SPal;
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
	// register: 3
	register int nMonster;
	{
		{
			// register: 4
			// size: 0x68
			register struct MonsterStruct *MyMonst;
			// register: 3
			register int mi;
		}
	}
}


// address: 0x800900F8
void PrintTowners__7CBlocksii(struct CBlocks *this, int x, int y) {
	// address: 0x8011ACD8
	static int YPos;
	// address: 0x8011ACDC
	static int YVel;
	// address: 0xFFFFFFB0
	auto int Total;
	// address: 0xFFFFFFB8
	auto int Wx;
	// address: 0xFFFFFFC0
	auto int Wy;
	// address: 0xFFFFFFC8
	auto int Cx;
	// address: 0xFFFFFFD0
	auto int Cy;
	{
		// register: 23
		register int f;
		{
			// register: 30
			register int Creature;
			// register: 20
			register int mi;
			// address: 0xFFFFFFA8
			// size: 0x28
			auto struct POLY_FT4 *Ft4;
			// register: 19
			// size: 0x70
			register struct TextDat *ThisData;
			// register: 18
			register int PhysFrame;
			// register: 17
			register int GameFrame;
			// register: 18
			register int Dir;
			// register: 17
			register int Sx;
			// register: 16
			register int Sy;
			// register: 16
			register int OtPos;
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


// address: 0x800904B0
int AddObject__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	// register: 6
	register int bObject;
	{
		{
			// register: 3
			// size: 0x2C
			register struct ObjectStruct *OStr;
		}
	}
}


// address: 0x8009050C
void PrintObjects__7CBlocksii(struct CBlocks *this, int x, int y) {
	// address: 0xFFFFFF78
	auto int Total;
	// address: 0xFFFFFF80
	auto int Wx;
	// address: 0xFFFFFF88
	auto int Wy;
	// address: 0xFFFFFF90
	auto int Cx;
	// address: 0xFFFFFF98
	auto int Cy;
	{
		// address: 0xFFFFFFA0
		auto int z;
		{
			{
				// address: 0xFFFFFFA8
				auto int f;
				{
					// register: 22
					register int Sx;
					// register: 20
					register int Sy;
					// register: 3
					register int LoadIndex;
					// register: 18
					// size: 0x2C
					register struct ObjectStruct *OStr;
					// register: 2
					register bool DoCreature;
					// register: 23
					// size: 0x28
					register struct POLY_FT4 *(*PFunc)();
					// address: 0xFFFFFFB0
					auto int Index;
					{
						{
							// register: 16
							register int AnimFrame;
							// register: 21
							register int OtPos;
							// register: 17
							// size: 0x28
							register struct POLY_FT4 *Ft4;
							// register: 17
							register int Creature;
							// register: 16
							register int PhysFrame;
							// register: 19
							// size: 0x70
							register struct TextDat *ObjDat;
							// address: 0xFFFFFFB8
							auto int bx;
							// address: 0xFFFFFFC0
							auto int by;
							// register: 5
							register int Col;
							// register: 3
							register int blockr;
							// register: 4
							register int blockg;
							// register: 2
							register int blockb;
							{
								{
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


// address: 0x80090968
int AddDead__FP9CacheInfoP8map_infoii(struct CacheInfo *Info, struct map_info *p0, int bx, int by) {
	// register: 16
	register int bDead;
}


// address: 0x800909F4
void PrintDead__7CBlocksii(struct CBlocks *this, int x, int y) {
	// address: 0xFFFFFFA8
	auto int Total;
	// address: 0xFFFFFFB0
	auto int Wx;
	// address: 0xFFFFFFB8
	auto int Wy;
	// address: 0xFFFFFFC0
	auto int Cx;
	// address: 0xFFFFFFC8
	auto int Cy;
	{
		// address: 0xFFFFFFD0
		auto int f;
		{
			// register: 3
			register int bDead;
			// register: 18
			register int dx;
			// register: 19
			register int dy;
			// register: 20
			register int Frame;
			// register: 21
			register int Creature;
			// register: 16
			// size: 0x28
			register struct POLY_FT4 *Ft4;
			// register: 3
			register int transfile;
			// register: 17
			register int Sx;
			// register: 16
			register int Sy;
			// register: 5
			register int Mg;
			// register: 30
			// size: 0x1C
			register struct CMonster *MyMonst;
			{
				{
					// register: 2
					register int bx;
					// register: 6
					register int by;
					// register: 5
					register int blockr;
					// register: 4
					register int blockg;
					// register: 3
					register int blockb;
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
	// register: 6
	register int bItem;
}


// address: 0x80090D14
void PrintItems__7CBlocksii(struct CBlocks *this, int x, int y) {
	// address: 0xFFFFFF80
	auto int Total;
	// address: 0xFFFFFF88
	auto int Wx;
	// address: 0xFFFFFF90
	auto int Wy;
	// address: 0xFFFFFF98
	auto int Cx;
	// address: 0xFFFFFFA0
	auto int Cy;
	{
		// address: 0xFFFFFFA8
		auto int z;
		{
			// address: 0xFFFFFFB0
			auto bool DoAnim;
			{
				// address: 0xFFFFFFB8
				auto int f;
				{
					// register: 21
					register int Sx;
					// register: 20
					register int Sy;
					// register: 19
					// size: 0x6C
					register struct ItemStruct *IStr;
					// register: 30
					register int OtPos;
					// register: 18
					// size: 0x28
					register struct POLY_FT4 *Ft4;
					// address: 0xFFFFFFC0
					auto int Index;
					// address: 0xFFFFFFC8
					auto int bx;
					// address: 0xFFFFFFD0
					auto int by;
					// register: 5
					register int Col;
					// register: 5
					register int blockr;
					// register: 4
					register int blockg;
					// register: 3
					register int blockb;
					{
						{
							{
								{
									// register: 23
									// size: 0xC
									register struct FRAME_HDR *Fr;
									// register: 17
									register int W;
									// register: 16
									register int H;
									// register: 4
									register short height;
									{
										{
											// register: 2
											register int it;
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
	// register: 2
	register int bFlags;
	{
		{
			{
				{
					// register: 6
					register int MissIndex;
					{
						{
							// register: 5
							register int dMiss;
							// register: 8
							register int nMiss;
							// register: 2
							register int MissIndex;
							// register: 7
							register int Index;
						}
					}
				}
			}
		}
	}
}


// address: 0x800913EC
void PrintMissiles__7CBlocksii(struct CBlocks *this, int x, int y) {
	// register: 23
	// size: 0x8
	register struct CachedInfoList *InfoList;
	// address: 0xFFFFFFB8
	auto int Wx;
	// address: 0xFFFFFFC0
	auto int Wy;
	// address: 0xFFFFFFC8
	auto int Cx;
	// register: 30
	register int Cy;
	// address: 0xFFFFFFD0
	auto int Total;
	{
		// register: 21
		register int f;
		{
			// register: 19
			register int Sx;
			// register: 16
			register int Sy;
			// register: 18
			// size: 0x4C
			register struct MissileStruct *MissStr;
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
	// register: 12
	register int XDiff;
	// register: 8
	register int YDiff;
	// register: 5
	register int divnum;
}


// address: 0x800917BC
void SetPlayerPosBlocks__7CBlocksiii(struct CBlocks *this, int PlayerNum, int bx, int by) {
}


// address: 0x8009185C
void GetScrXY__7CBlocksR4RECTiiii(struct CBlocks *this, struct RECT *R, int x, int y, int sxoff, int syoff) {
	// register: 16
	register int Sx;
	// register: 3
	register int Sy;
}


// address: 0x80091930
void ShadScaleSkew__7CBlocksP8POLY_FT4(struct POLY_FT4 *Ft4) {
	// register: 5
	register int H;
	// register: 3
	register int NewTop;
	// register: 4
	register int W;
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


// address: 0x80091ABC
int GetHighlightCol__FiPiUsUsUs(int Index, int *SelList, unsigned short P1Col, unsigned short P2Col, int P12Col) {
}


// address: 0x80091BE4
int GetCreature__14TownToCreaturei(struct TownToCreature *this, int GameCreature) {
}



// C:\diabpsx\SOURCE\CHOOSEM.CPP

#include "types.h"

// address: 0x80155A04
unsigned long CM_QuestToBitPattern__Fi(int QuestNum) {
	// register: 16
	register unsigned long RetVal;
}


// address: 0x80155ADC
void CM_ShowMonsterList__Fii(int Level, int List) {
}


// address: 0x80155AE4
int CM_ChooseMonsterList__FiUl(int Level, unsigned long QuestsNeededMask) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	{
		{
			// address: 0xFFFFFFE8
			auto int ListChosen;
		}
	}
}


// address: 0x80155B84
int NoUiListChoose__FiUl(int Level, unsigned long QuestsNeededMask) {
}


// address: 0x80155B8C
void ChooseTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// register: 18
	register int *List;
	// register: 16
	register int Level;
	// register: 16
	register unsigned int NumOfLists;
	// register: 17
	register unsigned long QuestsNeededMask;
	// address: 0xFFFFFFB8
	// size: 0x32
	auto unsigned char ListsToChooseFrom[50];
	// register: 2
	register unsigned int Selection;
}


// address: 0x80155C5C
void ShowTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// address: 0xFFFFFFC8
	auto int List;
	// register: 16
	register int Level;
	// register: 20
	register bool Finished;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct MonstLevel *ThisLev;
	// address: 0xFFFFFF60
	// size: 0x64
	auto char Buffer[100];
	{
		// register: 16
		register unsigned int f;
		// register: 18
		// size: 0x10
		register struct MonstList *ThisList;
	}
}


// address: 0x80155E8C
int GetListsAvailable__FiUlPUc(int Level, unsigned long QuestsNeededMask, unsigned char *ListofLists) {
	// register: 17
	register int NumOfChoices;
	// register: 19
	register int NumOfLists;
	// register: 20
	// size: 0x8
	register struct MonstLevel *ThisLev;
	{
		// register: 16
		register int f;
	}
}



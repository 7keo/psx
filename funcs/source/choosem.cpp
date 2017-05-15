// Path: C:\diabpsx\SOURCE\CHOOSEM.CPP
// Addr: 0x80155A04
unsigned long CM_QuestToBitPattern__Fi(int QuestNum) {
	unsigned long RetVal;
}

// Path: C:\diabpsx\SOURCE\CHOOSEM.CPP
// Addr: 0x80155ADC
void CM_ShowMonsterList__Fii(int Level, int List) {
}

// Path: C:\diabpsx\SOURCE\CHOOSEM.CPP
// Addr: 0x80155AE4
int CM_ChooseMonsterList__FiUl(int Level, unsigned long QuestsNeededMask) {
	struct DEF_ARGS *A;
	int ListChosen;
}

// Path: C:\diabpsx\SOURCE\CHOOSEM.CPP
// Addr: 0x80155B84
int NoUiListChoose__FiUl(int Level, unsigned long QuestsNeededMask) {
}

// Path: C:\diabpsx\SOURCE\CHOOSEM.CPP
// Addr: 0x80155B8C
void ChooseTask__FP4TASK(struct TASK *T) {
	struct DEF_ARGS *A;
	int *List;
	int Level;
	unsigned int NumOfLists;
	unsigned long QuestsNeededMask;
	unsigned char ListsToChooseFrom[50];
	unsigned int Selection;
}

// Path: C:\diabpsx\SOURCE\CHOOSEM.CPP
// Addr: 0x80155C5C
void ShowTask__FP4TASK(struct TASK *T) {
	struct DEF_ARGS *A;
	int List;
	int Level;
	unknown Finished;
	struct MonstLevel *ThisLev;
	char Buffer[100];
	unsigned int f;
	struct MonstList *ThisList;
}

// Path: C:\diabpsx\SOURCE\CHOOSEM.CPP
// Addr: 0x80155E8C
int GetListsAvailable__FiUlPUc(int Level, unsigned long QuestsNeededMask, unsigned char *ListofLists) {
	int NumOfChoices;
	int NumOfLists;
	struct MonstLevel *ThisLev;
	int f;
}


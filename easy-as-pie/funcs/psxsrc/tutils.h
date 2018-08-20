// C:\diabpsx\PSXSRC\TUTILS.H

#include "types.h"

// address: 0x8007B848
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007B864
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007CA3C
int GetTpY__FUs_addr_8007CA3C(unsigned short tpage) {
}


// address: 0x8007CA58
int GetTpX__FUs_addr_8007CA58(unsigned short tpage) {
}


// address: 0x8007CD3C
int GetTpY__FUs_addr_8007CD3C(unsigned short tpage) {
}


// address: 0x8007CD58
int GetTpX__FUs_addr_8007CD58(unsigned short tpage) {
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



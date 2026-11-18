// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// IsValid @ 14bd06830

bool __thiscall FDS_ItemSlotInfo::IsValid(FDS_ItemSlotInfo *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FDS_ItemSlotStateTableRow *pFVar4;
  
  pFVar4 = FDS_ItemSlotStateTableRow::Get((ulonglong)this->SlotType,true);
  if (pFVar4 == (FDS_ItemSlotStateTableRow *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8848847233626406789>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Slot\\DS_CommonSlotInfo.h"
                       ,0x7b,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else if ((pFVar4->IsDrag != false) && ((0 < this->ItemUID || (0 < this->ItemTID)))) {
    return true;
  }
  return false;
}

// Reset @ 14bd1ace0

void __thiscall FDS_ItemSlotInfo::Reset(FDS_ItemSlotInfo *this)

{
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->SlotType = None;
  this->TemplateType = None;
  this->ItemType = None;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->ItemUID = 0;
  this->ItemTID = 0;
  return;
}


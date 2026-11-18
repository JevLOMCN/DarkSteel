// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// Slot @ 1430f0400

FSlotArguments * __cdecl
SResponsiveGridPanel::Slot(FSlotArguments *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlot *pFVar3;
  FSlotArguments *pFVar4;
  
  pFVar3 = ::operator_new(0x68);
  if (pFVar3 == (FSlot *)0x0) {
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
  }
  else {
    pFVar3 = FSlot::FSlot(pFVar3,param_1);
    __return_storage_ptr__->_padding_ = (longlong)pFVar3;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->_padding_ = 0;
    if (pFVar3 != (FSlot *)0x0) goto LAB_1430f046f;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Slot.Get()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                     ,0x9b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FSlotArguments *)(*pcVar1)();
    return pFVar4;
  }
LAB_1430f046f:
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
  (__return_storage_ptr__->ColumnLayouts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ColumnLayouts).ArrayNum = 0;
  (__return_storage_ptr__->ColumnLayouts).ArrayMax = 0;
  return __return_storage_ptr__;
}


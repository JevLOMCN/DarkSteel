// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// Slot @ 14300e620

FSlotArguments * __cdecl SUniformWrapPanel::Slot(FSlotArguments *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FSlotBase *this;
  FSlotArguments *pFVar3;
  
  this = ::operator_new(0x28);
  if (this == (FSlotBase *)0x0) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Slot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                       ,0x9b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlotArguments *)(*pcVar1)();
      return pFVar3;
    }
  }
  else {
    this->_padding_ = 0;
    this->Owner = (FChildren *)0x0;
    (this->Widget).Object = (SWidget *)0x0;
    (this->Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FSlotBase::FSlotBase(this);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7FSlot_SUniformWrapPanel__6B_;
    *(FSlotBase **)__return_storage_ptr__ = this;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  __return_storage_ptr__->field_0x1c = 0;
  __return_storage_ptr__->field_0x24 = 0;
  return __return_storage_ptr__;
}


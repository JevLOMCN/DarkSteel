// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// Construct @ 1425d27c0

void __thiscall
SBoxPanel::TSlot<SBoxPanel::FSlot>::Construct
          (TSlot<SBoxPanel::FSlot> *this,FChildren *param_1,FSlotArguments *param_2)

{
  undefined4 *puVar1;
  TSlot<SBoxPanel::FSlot> *pTVar2;
  
  TWidgetSlotWithAttributeSupport<SBoxPanel::FSlot>::Construct
            ((TWidgetSlotWithAttributeSupport<SBoxPanel::FSlot> *)this,param_1,
             (FSlotArguments *)param_2);
  if (param_2->field_0x28 != '\0') {
    pTVar2 = this;
    if (&this->field_0x28 == (undefined1 *)0x0) {
      pTVar2 = (TSlot<SBoxPanel::FSlot> *)0x0;
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)&this->field_0x28,(ISlateAttributeContainer *)&pTVar2->field_0x20,
             (TAttribute<FMargin> *)&param_2->field_0x18,None);
  }
  puVar1 = (undefined4 *)&param_2->field_0x48;
  if (param_2->field_0x4c == '\0') {
    puVar1 = (undefined4 *)&this->field_0x38;
  }
  *(undefined4 *)&this->field_0x38 = *puVar1;
  puVar1 = (undefined4 *)&param_2->field_0x50;
  if (param_2->field_0x54 == '\0') {
    puVar1 = (undefined4 *)&this->field_0x3c;
  }
  *(undefined4 *)&this->field_0x3c = *puVar1;
  TResizingWidgetSlotMixin<SBoxPanel::FSlot>::ConstructMixin
            ((TResizingWidgetSlotMixin<SBoxPanel::FSlot> *)&this->field_0x40,param_1,
             (FSlotArgumentsMixin *)&param_2->field_0x58);
  return;
}


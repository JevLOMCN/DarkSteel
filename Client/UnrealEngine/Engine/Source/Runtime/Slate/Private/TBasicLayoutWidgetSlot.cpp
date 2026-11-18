// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// Construct @ 1429d0210

void __thiscall
TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::Construct
          (TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot> *this,FChildren *param_1,
          FSlotArguments *param_2)

{
  undefined4 *puVar1;
  TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot> *pTVar2;
  
  TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot>::Construct
            ((TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot> *)this,param_1,
             (FSlotArguments *)param_2);
  if (param_2->field_0x28 != '\0') {
    pTVar2 = this;
    if (&this->field_0x28 == (undefined1 *)0x0) {
      pTVar2 = (TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot> *)0x0;
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
  return;
}


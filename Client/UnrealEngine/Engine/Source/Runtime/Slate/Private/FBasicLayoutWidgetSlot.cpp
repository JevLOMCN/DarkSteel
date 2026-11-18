// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// FBasicLayoutWidgetSlot @ 1428b8820

FBasicLayoutWidgetSlot * __thiscall
FBasicLayoutWidgetSlot::FBasicLayoutWidgetSlot(FBasicLayoutWidgetSlot *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FBasicLayoutWidgetSlot *pFVar4;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  FSlotBase::FSlotBase((FSlotBase *)this);
  puVar1 = &this->field_0x28;
  *(undefined ***)this =
       &TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot>::
        _vftable__for__TSlotBase<FBasicLayoutWidgetSlot>__;
  *(undefined ***)&this->field_0x20 =
       &TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot>::
        _vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  pFVar4 = this;
  if (puVar1 == (undefined1 *)0x0) {
    pFVar4 = (FBasicLayoutWidgetSlot *)0x0;
  }
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  if ((puVar1 < pFVar4) || (pFVar4 + 1 <= puVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Container && (UPTRINT)&Self < (UPTRINT)&Container + sizeof(ContainerType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeContained.inl"
                       ,0x1b,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FBasicLayoutWidgetSlot *)(*pcVar2)();
      return pFVar4;
    }
  }
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined ***)this = &_vftable__for__TSlotBase<FBasicLayoutWidgetSlot>__;
  *(undefined ***)&this->field_0x20 =
       &_vftable__for__SlateAttributePrivate__ISlateAttributeContainer__;
  return this;
}


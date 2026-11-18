// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 3

// GetHorizontalAlignment @ 1430c93e0

EHorizontalAlignment __thiscall
TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::GetHorizontalAlignment
          (TAlignmentWidgetSlotMixin<SVerticalBox::FSlot> *this)

{
  return this->HAlignment;
}

// SetHorizontalAlignment @ 1430edfa0

void __thiscall
TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::SetHorizontalAlignment
          (TAlignmentWidgetSlotMixin<SVerticalBox::FSlot> *this,EHorizontalAlignment param_1)

{
  if (this->HAlignment != param_1) {
    this->HAlignment = param_1;
    FSlotBase::Invalidate((FSlotBase *)(this + -7),Layout);
    return;
  }
  return;
}

// SetVerticalAlignment @ 1430f02a0

void __thiscall
TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::SetVerticalAlignment
          (TAlignmentWidgetSlotMixin<SVerticalBox::FSlot> *this,EVerticalAlignment param_1)

{
  FSlotBase *this_00;
  
  if (this->VAlignment != param_1) {
    this->VAlignment = param_1;
    this_00 = (FSlotBase *)(this + -7);
    if (this == (TAlignmentWidgetSlotMixin<SVerticalBox::FSlot> *)0x0) {
      this_00 = (FSlotBase *)0x0;
    }
    FSlotBase::Invalidate(this_00,Layout);
    return;
  }
  return;
}


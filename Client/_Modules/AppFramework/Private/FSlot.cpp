// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// FSlot @ 142f36b80

FSlot * __thiscall SSegmentedControl<int>::FSlot::FSlot(FSlot *this,int *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FSlotBase::FSlotBase((FSlotBase *)this);
  this->_padding_ = 2;
  this->_padding_ = (longlong)&___7FSlot___SSegmentedControl_H__6B_;
  FText::FText(&(this->_Text).Value);
  (this->_Text).bIsSet = false;
  *(undefined8 *)&(this->_Text).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Text).Getter = 0;
  *(undefined8 *)&(this->_Text).Getter.field_0x8 = 0;
  FText::FText(&(this->_Tooltip).Value);
  (this->_Tooltip).bIsSet = false;
  *(undefined8 *)&(this->_Tooltip).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Tooltip).Getter = 0;
  *(undefined8 *)&(this->_Tooltip).Getter.field_0x8 = 0;
  (this->_ToolTipWidget).Value.Object = (IToolTip *)0x0;
  (this->_ToolTipWidget).Value.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ToolTipWidget).bIsSet = false;
  *(undefined8 *)&(this->_ToolTipWidget).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ToolTipWidget).Getter = 0;
  *(undefined8 *)&(this->_ToolTipWidget).Getter.field_0x8 = 0;
  (this->_Icon).Value = (FSlateBrush *)0x0;
  (this->_Icon).bIsSet = true;
  *(undefined8 *)&(this->_Icon).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Icon).Getter = 0;
  *(undefined8 *)&(this->_Icon).Getter.field_0x8 = 0;
  this->_Value = *param_1;
  (this->_CheckBox).Object = (SCheckBox *)0x0;
  (this->_CheckBox).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}


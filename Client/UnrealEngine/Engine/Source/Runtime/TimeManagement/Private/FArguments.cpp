// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 2

// FArguments @ 14603f120

FArguments * __thiscall SErrorHint::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  FText::FText(&this->_ErrorText);
  return this;
}

// FArguments @ 14603f150

FArguments * __thiscall SFrameRateEntryBox::FArguments::FArguments(FArguments *this)

{
  ISlateStyle *pIVar1;
  FName *pFVar2;
  FEditableTextBoxStyle *pFVar3;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Value).Value.Numerator = 60000;
  (this->_Value).Value.Denominator = 1;
  (this->_Value).bIsSet = false;
  *(undefined8 *)&(this->_Value).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Value).Getter = 0;
  *(undefined8 *)&(this->_Value).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnValueChanged).field_0x10 = 0;
  (this->_HasMultipleValues).Value = false;
  (this->_HasMultipleValues).bIsSet = false;
  *(undefined8 *)&(this->_HasMultipleValues).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_HasMultipleValues).Getter = 0;
  *(undefined8 *)&(this->_HasMultipleValues).Getter.field_0x8 = 0;
  pIVar1 = FAppStyle::Get();
  pFVar2 = ::FName::FName(&local_res8,"NormalEditableTextBox");
  pFVar3 = (FEditableTextBoxStyle *)
           (**(code **)((longlong)*pIVar1 + 0xa0))
                     (pIVar1,FEditableTextBoxStyle::TypeName,*pFVar2,0,1);
  if (pFVar3 == (FEditableTextBoxStyle *)0x0) {
    pFVar3 = FEditableTextBoxStyle::GetDefault();
  }
  this->_Style = pFVar3;
  FSlateFontInfo::FSlateFontInfo(&(this->_Font).Value);
  (this->_Font).bIsSet = false;
  *(undefined8 *)&(this->_Font).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Font).Getter = 0;
  *(undefined8 *)&(this->_Font).Getter.field_0x8 = 0;
  (this->_ForegroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->_ForegroundColor).bIsSet = false;
  *(undefined8 *)&(this->_ForegroundColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->_ForegroundColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->_ForegroundColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->_ForegroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ForegroundColor).Getter = 0;
  *(undefined8 *)&(this->_ForegroundColor).Getter.field_0x8 = 0;
  return this;
}


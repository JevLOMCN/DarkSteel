// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraUIRenderer
// Functions: 1

// FArguments @ 14d292680

FArguments * __thiscall SNiagaraUISystemWidget::FArguments::FArguments(FArguments *this)

{
  FLinearColor FVar1;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_DesiredSize).Value.field0_0x0._s_0.X = 256.0;
  (this->_DesiredSize).Value.field0_0x0._s_0.Y = 256.0;
  (this->_DesiredSize).bIsSet = true;
  *(undefined8 *)&(this->_DesiredSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_DesiredSize).Getter = 0;
  *(undefined8 *)&(this->_DesiredSize).Getter.field_0x8 = 0;
  FVar1 = FLinearColor::White;
  (this->_ColorAndOpacity).Value.ColorUseRule = UseColor_Specified;
  (this->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_ColorAndOpacity).bIsSet = true;
  *(undefined8 *)&(this->_ColorAndOpacity).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ColorAndOpacity).Getter = 0;
  *(undefined8 *)&(this->_ColorAndOpacity).Getter.field_0x8 = 0;
  return this;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// SetColorAndOpacity @ 1430edcf0

FTextBlockStyle * __thiscall
FTextBlockStyle::SetColorAndOpacity(FTextBlockStyle *this,FSlateColor *param_1)

{
  undefined8 uVar1;
  EStyleColor EVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  *(undefined8 *)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->ColorAndOpacity).SpecifiedColor.field0_0x0 + 8) = uVar1;
  EVar2 = param_1->ColorTableId;
  uVar3 = *(undefined2 *)&param_1->field_0x12;
  (this->ColorAndOpacity).ColorUseRule = param_1->ColorUseRule;
  (this->ColorAndOpacity).ColorTableId = EVar2;
  *(undefined2 *)&(this->ColorAndOpacity).field_0x12 = uVar3;
  return this;
}


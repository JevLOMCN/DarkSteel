// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FExpressionInput @ 1472ac800

FExpressionInput * __thiscall FExpressionInput::FExpressionInput(FExpressionInput *this)

{
  this->OutputIndex = 0;
  (this->InputName).ComparisonIndex = 0;
  *(undefined8 *)&(this->InputName).Number = 0;
  this->MaskR = 0;
  this->MaskG = 0;
  this->MaskB = 0;
  this->MaskA = 0;
  this->Expression = (UMaterialExpression *)0x0;
  return this;
}

// Serialize @ 147f86130

bool __thiscall FExpressionInput::Serialize(FExpressionInput *this,FArchive *param_1)

{
  bool bVar1;
  
  bVar1 = SerializeExpressionInput(param_1,this);
  return bVar1;
}


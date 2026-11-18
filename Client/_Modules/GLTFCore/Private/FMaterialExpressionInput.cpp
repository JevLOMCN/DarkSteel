// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 1

// FMaterialExpressionInput @ 14e62acc0

FMaterialExpressionInput * __thiscall
GLTF::FMaterialExpressionInput::FMaterialExpressionInput
          (FMaterialExpressionInput *this,FString *param_1)

{
  ::FString::FString(&this->Name,param_1);
  this->Expression = (FMaterialExpression *)0x0;
  this->OutputIndex = -1;
  return this;
}


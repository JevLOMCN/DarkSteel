// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Serialize @ 147f862b0

bool __thiscall
FMaterialAttributesInput::Serialize(FMaterialAttributesInput *this,FArchive *param_1)

{
  bool bVar1;
  
  bVar1 = SerializeExpressionInput(param_1,(FExpressionInput *)this);
  return bVar1;
}


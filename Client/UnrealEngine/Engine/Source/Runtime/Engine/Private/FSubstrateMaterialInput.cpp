// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Serialize @ 147f86c30

bool __thiscall FSubstrateMaterialInput::Serialize(FSubstrateMaterialInput *this,FArchive *param_1)

{
  bool bVar1;
  
  bVar1 = SerializeMaterialInput<unsigned_int>(param_1,(FMaterialInput<unsigned_int> *)this);
  return bVar1;
}


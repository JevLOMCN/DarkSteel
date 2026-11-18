// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// FTypeHandle @ 1471dc630

FTypeHandle * __thiscall
UE::Mass::FTypeHandle::FTypeHandle(FTypeHandle *this,TObjectKey<UStruct_const_> param_1)

{
  (this->TypeKey).ObjectKey = param_1.ObjectKey;
  return this;
}


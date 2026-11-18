// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 2

// FValueTag @ 142c98a60

FValueTag * __thiscall UE::Editor::DataStorage::FValueTag::FValueTag(FValueTag *this,FName *param_1)

{
  this->Name = *param_1;
  return this;
}

// GetName @ 142cae4f0

FName * __thiscall UE::Editor::DataStorage::FValueTag::GetName(FValueTag *this)

{
  return &this->Name;
}


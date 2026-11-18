// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ToString @ 141a97220

FString * __thiscall
FMemoryImageName::ToString(FMemoryImageName *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0].ComparisonIndex = (*this).ComparisonIndex;
  local_res8[0].Number = (*this).Number;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}


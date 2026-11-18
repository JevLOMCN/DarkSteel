// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ToString @ 141a97510

FString * __thiscall FScriptName::ToString(FScriptName *this,FString *__return_storage_ptr__)

{
  undefined4 uVar1;
  FName local_res8 [4];
  uint local_18;
  
  uVar1 = this->ComparisonIndex;
  local_res8[0].Number = this->Number;
  local_res8[0].ComparisonIndex.Value = uVar1;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}


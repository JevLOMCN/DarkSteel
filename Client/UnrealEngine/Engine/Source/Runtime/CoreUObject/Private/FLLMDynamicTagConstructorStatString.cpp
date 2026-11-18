// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// GetStatName @ 1422713a0

FString * __thiscall
FLLMDynamicTagConstructorStatString::GetStatName
          (FLLMDynamicTagConstructorStatString *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->StatName);
  return __return_storage_ptr__;
}


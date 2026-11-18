// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 1

// ToString @ 14de29ec0

FString * __thiscall
UE::Math::TIntRect<int>::ToString(TIntRect<int> *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"X=%d Y=%d");
  ::FString::PrintfImpl(&local_28,L"X=%d Y=%d");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Min=(%s) Max=(%s)");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}


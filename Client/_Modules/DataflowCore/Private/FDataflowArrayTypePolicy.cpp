// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 1

// SupportsTypeStatic @ 144466710

bool __cdecl FDataflowArrayTypePolicy::SupportsTypeStatic(FName param_1)

{
  bool bVar1;
  FString *this;
  size_t sVar2;
  FName local_res8 [4];
  FString local_18;
  
  local_res8[0] = param_1;
  this = ::FName::ToString(local_res8,&local_18);
  sVar2 = wcslen(L"TArray<");
  bVar1 = ::FString::StartsWith(this,L"TArray<",(int)sVar2,IgnoreCase);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}


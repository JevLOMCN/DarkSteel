// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// ToName @ 142837480

FName __cdecl EMultiBlockLocation::ToName(FName param_1,Type param_2)

{
  FString *pFVar1;
  uint in_register_00000014;
  char *pcVar2;
  ForAnyElementType FVar3;
  int in_R8D;
  FName local_res20;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res20.Number = in_register_00000014;
  local_res20.ComparisonIndex.Value = param_2;
  if (in_R8D == 0) {
    pcVar2 = ".Start";
  }
  else if (in_R8D == 1) {
    pcVar2 = ".Middle";
  }
  else {
    if (in_R8D != 2) {
      *(FName *)param_1 = local_res20;
      return param_1;
    }
    pcVar2 = ".End";
  }
  ::FString::FString(&local_28,pcVar2);
  pFVar1 = ::FName::ToString(&local_res20,&local_18);
  ::FString::ConcatFF(&local_38,pFVar1,&local_28);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)param_1,(wchar_t *)FVar3.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return param_1;
}


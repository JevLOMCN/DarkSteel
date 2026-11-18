// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FBoolConfigValueHelper @ 141853930

FBoolConfigValueHelper * __thiscall
FBoolConfigValueHelper::FBoolConfigValueHelper
          (FBoolConfigValueHelper *this,wchar_t *param_1,wchar_t *param_2,FString *param_3)

{
  bool bVar1;
  ForAnyElementType FVar2;
  FString local_18;
  
  this->bValue = false;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = FConfigCacheIni::GetString(GConfig,param_1,param_2,&local_18,param_3);
  if (bVar1) {
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    bVar1 = FToBoolHelper::FromCStringWide((wchar_t *)FVar2.Data);
    this->bValue = bVar1;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return this;
    }
  }
  else if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}


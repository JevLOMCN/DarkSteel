// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 1

// ToDisplayString @ 14e50ac20

FString * __thiscall
UInterchangeSourceData::ToDisplayString
          (UInterchangeSourceData *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar1 = &this->Filename;
  if ((this->Filename).Data.ArrayNum < 2) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    FPaths::FileExists(pFVar1);
    FPaths::GetCleanFilename(&local_18,pFVar1);
    FPaths::GetPath(&local_78,pFVar1);
    iVar4 = 0;
    iVar2 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar2 = iVar4;
    }
    if (0x2b < iVar2) {
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar3.Data = local_78.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_28,(wchar_t *)(FVar3.Data + (longlong)iVar2 * 2 + -0x28));
      iVar2 = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        iVar2 = iVar4;
      }
      if (0x14 < iVar2) {
        iVar2 = 0x14;
      }
      if (0 < iVar2) {
        iVar4 = iVar2;
      }
      FVar3.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar3.Data = local_78.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_38,(wchar_t *)FVar3.Data,iVar4);
      ::FString::ConcatFC(&local_48,&local_38,L"...");
      ::FString::ConcatFF(&local_68,&local_48,&local_28);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_78.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      local_78.Data.ArrayNum = local_68.Data.ArrayNum;
      local_78.Data.ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    ::FString::ConcatFC(&local_28,&local_78,L"/");
    ::FString::ConcatFF(&local_58,&local_28,&local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}


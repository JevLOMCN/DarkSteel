// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 1

// GetObjectPtrInnerType @ 1462dd6e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FDataflowUObjectConvertibleTypePolicy::GetObjectPtrInnerType(FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString *pFVar3;
  int iVar4;
  int iVar5;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar2 = ::FString::StartsWith(param_1,L"TObjectPtr<U",0xc,IgnoreCase);
  if (bVar2) {
    pFVar3 = ::FString::RightChop(param_1,&local_18,0xc);
    iVar4 = (pFVar3->Data).ArrayNum;
    iVar5 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    if (iVar5 + -1 < iVar5) {
      iVar5 = iVar5 + -1;
    }
    iVar4 = 0;
    if (0 < iVar5) {
      iVar4 = iVar5;
    }
    ::FString::RemoveAt(pFVar3,iVar4,1,No);
    local_38.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = (pFVar3->Data).ArrayNum;
    local_38.Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    pFVar3 = ::FString::TrimStartAndEnd(&local_38,&local_28);
    if (param_2 != pFVar3) {
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (param_2->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return true;
  }
  return false;
}


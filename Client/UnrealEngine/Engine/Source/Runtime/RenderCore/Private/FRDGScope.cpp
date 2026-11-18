// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// GetFullPath @ 145db96e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FString * __thiscall
FRDGScope::GetFullPath(FRDGScope *this,FString *__return_storage_ptr__,FRDGEventName *param_1)

{
  FRDGScope *pFVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  wchar_t *pwVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FRDGEventName *pFVar7;
  int iVar8;
  undefined1 auStack_178 [32];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_158;
  FString local_148;
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar7 = (FRDGEventName *)&param_1->FormattedEventName;
  if ((param_1->FormattedEventName).Data.ArrayNum < 2) {
    pFVar7 = param_1;
  }
  ::FString::FString(__return_storage_ptr__,pFVar7->EventFormat);
  for (pFVar1 = this->Parent; pFVar1 != (FRDGScope *)0x0; pFVar1 = pFVar1->Parent) {
    if (((pFVar1->Impl).Impl.TypeIndex == '\x02') &&
       (&pFVar1->Impl != (TStorage<FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive> *)0x0)) {
      plVar2 = (longlong *)(pFVar1->Impl).Impl._padding_;
      pwVar4 = (wchar_t *)(**(code **)(*plVar2 + 0x10))(plVar2,local_138);
      iVar8 = (__return_storage_ptr__->Data).ArrayNum;
      if (iVar8 == 0) {
        iVar8 = 1;
      }
      pTVar5 = &::FString::FString(&local_148,pwVar4)->Data;
      if ((pTVar5->ArrayNum != 0) || (iVar6 = 1, iVar8 == 0)) {
        iVar6 = 0;
      }
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_158,pTVar5,iVar6 + iVar8);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      iVar6 = (__return_storage_ptr__->Data).ArrayNum;
      iVar8 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar8 = 0;
      }
      ::FString::PathAppend
                ((FString *)&local_158,
                 (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data,iVar8);
      if (&__return_storage_ptr__->Data != &local_158) {
        pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_158.AllocatorInstance.Data;
        (__return_storage_ptr__->Data).ArrayNum = local_158.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_158.ArrayMax;
        local_158.ArrayNum = 0;
        local_158.ArrayMax = 0;
        local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}


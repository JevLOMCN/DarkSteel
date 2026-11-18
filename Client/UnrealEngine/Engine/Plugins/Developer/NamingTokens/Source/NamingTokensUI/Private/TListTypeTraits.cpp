// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 2

// DebugDump @ 14d0feb30

FString * __cdecl
TListTypeTraits<TSharedPtr<FNamingTokenDataTreeItem,1>,void>::DebugDump
          (FString *__return_storage_ptr__,TSharedPtr<FNamingTokenDataTreeItem,1> *param_1)

{
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  bVar2 = param_1->Object == (FNamingTokenDataTreeItem *)0x0;
  if (bVar2) {
    pFVar1 = ::FString::FString(&local_18,L"nullptr");
  }
  else {
    ::FString::PrintfImpl(&local_28,L"0x%08llx");
    pFVar1 = &local_28;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// ResetPtr @ 14d118a10

void __cdecl
TListTypeTraits<TSharedPtr<FNamingTokenDataTreeItem,1>,void>::ResetPtr
          (TSharedPtr<FNamingTokenDataTreeItem,1> *param_1)

{
  TSharedPtr<FNamingTokenDataTreeItem,1> local_18;
  
  local_18.Object = (FNamingTokenDataTreeItem *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 != &local_18) {
    param_1->Object = (FNamingTokenDataTreeItem *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}


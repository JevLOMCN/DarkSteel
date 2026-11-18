// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 8

// DebugDump @ 142e6e460

FString * __cdecl
TListTypeTraits<TSharedPtr<int,1>,void>::DebugDump
          (FString *__return_storage_ptr__,TSharedPtr<int,1> *param_1)

{
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  bVar2 = param_1->Object == (int *)0x0;
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

// DebugDump @ 142e6e530

FString * __cdecl
TListTypeTraits<TSharedPtr<FNavigationSimulationWidgetNode,1>,void>::DebugDump
          (FString *__return_storage_ptr__,TSharedPtr<FNavigationSimulationWidgetNode,1> *param_1)

{
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  bVar2 = param_1->Object == (FNavigationSimulationWidgetNode *)0x0;
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

// DebugDump @ 142e6e600

FString * __cdecl
TListTypeTraits<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,void>::DebugDump
          (FString *__return_storage_ptr__,
          TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *param_1)

{
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  bVar2 = param_1->Object == (FWidgetSnapshotTarget *)0x0;
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

// DebugDump @ 142e6e6d0

FString * __cdecl
TListTypeTraits<TSharedPtr<FWidgetReflectorNodeBase,1>,void>::DebugDump
          (FString *__return_storage_ptr__,TSharedPtr<FWidgetReflectorNodeBase,1> *param_1)

{
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  bVar2 = param_1->Object == (FWidgetReflectorNodeBase *)0x0;
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

// DebugDump @ 142e6e7a0

FString * __cdecl
TListTypeTraits<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,void>::DebugDump
          (FString *__return_storage_ptr__,
          TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"0x%08llx");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// DebugDump @ 142e6e7e0

FString * __cdecl
TListTypeTraits<TSharedRef<FWidgetReflectorNodeBase,1>,void>::DebugDump
          (FString *__return_storage_ptr__,TSharedRef<FWidgetReflectorNodeBase,1> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"0x%08llx");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// NullableItemTypeConvertToItemType @ 142ec59c0

TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> * __cdecl
TListTypeTraits<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,void>::
NullableItemTypeConvertToItemType
          (TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *__return_storage_ptr__,
          TSharedPtr<WidgetHittestGridInternal::FIntermediateResultNode,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *pTVar4;
  
  if (param_1->Object == (FIntermediateResultNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FIntermediateResultNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ResetPtr @ 142efa200

void __cdecl
TListTypeTraits<TSharedRef<FWidgetReflectorNodeBase,1>,void>::ResetPtr
          (TSharedPtr<FWidgetReflectorNodeBase,1> *param_1)

{
  TSharedPtr<FWidgetReflectorNodeBase,1> local_18;
  
  local_18.Object = (FWidgetReflectorNodeBase *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 != &local_18) {
    param_1->Object = (FWidgetReflectorNodeBase *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}


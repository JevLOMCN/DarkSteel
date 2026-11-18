// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// Get<TComponentInterfaceIterator<IStaticMeshComponent>_> @ 148080c30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectCacheIterator<IStaticMeshComponent> * __thiscall
FObjectCacheContext::TComponentTypeCache<IStaticMeshComponent,UStaticMesh>::
Get<TComponentInterfaceIterator<IStaticMeshComponent>_>
          (TComponentTypeCache<IStaticMeshComponent,UStaticMesh> *this,
          TObjectCacheIterator<IStaticMeshComponent> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  TObjectCacheIterator<IStaticMeshComponent> *pTVar7;
  bool bVar8;
  undefined8 local_58;
  TOptional<TArray<IStaticMeshComponent_*,TSizedDefaultAllocator<32>_>_>_u_0 local_50;
  FScriptContainerElement *local_40;
  undefined4 uStack_34;
  TComponentInterfaceIterator<IStaticMeshComponent> local_30;
  
  if ((this->Components).field0_0x0.TypedValue.ArrayMax == -1) {
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_class_TObjectCacheIterator<IStaticMeshComponent>___cdecl_FObjectCacheContext::TComponentTypeCache<IStaticMeshComponent,UStaticMesh>::Get<TComponentInterfaceIterator<IStaticMeshComponent>_>(void)___ptr64'
                  ::__l5::__CpuProfilerEventSpecId773,"ComputeSkinnedMeshComponents",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ObjectCacheContext.cpp"
                 ,0x305);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_class_TObjectCacheIterator<IStaticMeshComponent>___cdecl_FObjectCacheContext::TComponentTypeCache<IStaticMeshComponent,UStaticMesh>::Get<TComponentInterfaceIterator<IStaticMeshComponent>_>(void)___ptr64'
                 ::__l5::__CpuProfilerEventSpecId773);
    }
    local_50.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_50._8_8_ = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x1000,&local_50.TypedValue.AllocatorInstance,0,&local_50.TypedValue.ArrayMax);
    TComponentInterfaceIterator<IStaticMeshComponent>::
    TComponentInterfaceIterator<IStaticMeshComponent>
              (&local_30,RF_ClassDefaultObject,true,
               Unreachable|AsyncLoadingPhase2|Async|AsyncLoadingPhase1|Garbage);
    for (; (iVar1 = local_30.Index, -1 < local_30.Index &&
           (local_30.Index < local_30.Interfaces.ArrayNum)); local_30.Index = local_30.Index + 1) {
      uVar5 = 0;
      if (local_30.Index < local_30.Interfaces.ArrayNum) {
        uVar5 = (uint)~local_30.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TObjectCacheIterator<IStaticMeshComponent> *)(*pcVar3)();
        return pTVar7;
      }
      local_58 = *(undefined8 *)(local_30.Interfaces.AllocatorInstance.Data + (longlong)iVar1 * 8);
      if ((((ulonglong)local_50.TypedValue.AllocatorInstance.Data <=
            (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           (FScriptContainerElement *)
           ((longlong)local_50.TypedValue.AllocatorInstance.Data +
           (longlong)local_50.TypedValue.ArrayMax * 8))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TObjectCacheIterator<IStaticMeshComponent> *)(*pcVar3)();
        return pTVar7;
      }
      uVar6 = local_50.TypedValue.ArrayNum;
      if (local_50.TypedValue.ArrayNum == local_50.TypedValue.ArrayMax) {
        uVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_50.TypedValue.AllocatorInstance,
                           &local_50.TypedValue.ArrayMax);
      }
      local_50.TypedValue.ArrayNum = uVar6 + 1;
      *(undefined8 *)
       ((longlong)local_50.TypedValue.AllocatorInstance.Data + (longlong)(int)uVar6 * 8) = local_58;
    }
    if (local_30.Interfaces.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Interfaces.AllocatorInstance.Data);
    }
    if (&local_50 !=
        (TOptional<TArray<IStaticMeshComponent_*,TSizedDefaultAllocator<32>_>_>_u_0 *)this) {
      pFVar2 = (this->Components).field0_0x0.TypedValue.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      *(ForAnyElementType *)&(this->Components).field0_0x0 =
           local_50.TypedValue.AllocatorInstance.Data;
      (this->Components).field0_0x0.TypedValue.ArrayNum = local_50.TypedValue.ArrayNum;
      uVar6 = local_50.TypedValue.ArrayMax;
      local_50.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0
      ;
      (this->Components).field0_0x0.TypedValue.ArrayMax = local_50.TypedValue.ArrayMax;
      local_50._8_8_ = 0;
      if ((uVar6 == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TObjectCacheIterator<IStaticMeshComponent> *)(*pcVar3)();
        return pTVar7;
      }
    }
    if (local_50.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_50.TypedValue.AllocatorInstance.Data);
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (((this->Components).field0_0x0.TypedValue.ArrayMax == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TObjectCacheIterator<IStaticMeshComponent> *)(*pcVar3)();
    return pTVar7;
  }
  local_40 = (this->Components).field0_0x0.TypedValue.AllocatorInstance.Data;
  iVar1 = (this->Components).field0_0x0.TypedValue.ArrayNum;
  if ((iVar1 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TObjectCacheIterator<IStaticMeshComponent> *)(*pcVar3)();
    return pTVar7;
  }
  (__return_storage_ptr__->OwnedArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OwnedArray).ArrayNum = 0;
  (__return_storage_ptr__->OwnedArray).ArrayMax = 0;
  (__return_storage_ptr__->ArrayView).DataPtr = (IStaticMeshComponent **)local_40;
  *(ulonglong *)&(__return_storage_ptr__->ArrayView).ArrayNum = CONCAT44(uStack_34,iVar1);
  return __return_storage_ptr__;
}

// Get<TObjectIterator<UInstancedSkinnedMeshComponent>_> @ 148080f30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectCacheIterator<UInstancedSkinnedMeshComponent> * __thiscall
FObjectCacheContext::TComponentTypeCache<UInstancedSkinnedMeshComponent,UTransformProviderData>::
Get<TObjectIterator<UInstancedSkinnedMeshComponent>_>
          (TComponentTypeCache<UInstancedSkinnedMeshComponent,UTransformProviderData> *this,
          TObjectCacheIterator<UInstancedSkinnedMeshComponent> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  undefined4 uVar7;
  UClass *pUVar8;
  TObjectCacheIterator<UInstancedSkinnedMeshComponent> *pTVar9;
  longlong lVar10;
  bool bVar11;
  undefined8 local_58;
  TOptional<TArray<UInstancedSkinnedMeshComponent_*,TSizedDefaultAllocator<32>_>_>_u_0 local_50;
  FScriptContainerElement *local_40;
  undefined4 uStack_34;
  TObjectIterator<UInstancedSkinnedMeshComponent> local_30;
  
  if ((this->Components).field0_0x0.TypedValue.ArrayMax == -1) {
    bVar11 = -1 < CpuChannel->Enabled;
    if (bVar11) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_class_TObjectCacheIterator<UInstancedSkinnedMeshComponent>___cdecl_FObjectCacheContext::TComponentTypeCache<UInstancedSkinnedMeshComponent,UTransformProviderData>::Get<TObjectIterator<UInstancedSkinnedMeshComponent>_>(void)___ptr64'
                  ::__l5::__CpuProfilerEventSpecId773,"ComputeSkinnedMeshComponents",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ObjectCacheContext.cpp"
                 ,0x305);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_class_TObjectCacheIterator<UInstancedSkinnedMeshComponent>___cdecl_FObjectCacheContext::TComponentTypeCache<UInstancedSkinnedMeshComponent,UTransformProviderData>::Get<TObjectIterator<UInstancedSkinnedMeshComponent>_>(void)___ptr64'
                 ::__l5::__CpuProfilerEventSpecId773);
    }
    local_50.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_50._8_8_ = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x1000,&local_50.TypedValue.AllocatorInstance,0,&local_50.TypedValue.ArrayMax);
    local_30.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.ObjectArray.ArrayNum = 0;
    local_30.ObjectArray.ArrayMax = 0;
    local_30.Index = 0xffffffff;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar8 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister();
    GetObjectsOfClass(pUVar8,&local_30.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|AsyncLoadingPhase2|Async|
                               AsyncLoadingPhase1|Garbage|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UInstancedSkinnedMeshComponent>::Advance(&local_30);
      lVar10 = (longlong)local_30.Index;
      if ((local_30.Index < 0) || (local_30.ObjectArray.ArrayNum <= local_30.Index)) break;
      uVar6 = 0;
      if (local_30.Index < local_30.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_30.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TObjectCacheIterator<UInstancedSkinnedMeshComponent> *)(*pcVar3)();
        return pTVar9;
      }
      local_58 = *(undefined8 *)(local_30.ObjectArray.AllocatorInstance.Data + lVar10 * 8);
      if ((((ulonglong)local_50.TypedValue.AllocatorInstance.Data <=
            (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           (FScriptContainerElement *)
           ((longlong)local_50.TypedValue.AllocatorInstance.Data +
           (longlong)local_50.TypedValue.ArrayMax * 8))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TObjectCacheIterator<UInstancedSkinnedMeshComponent> *)(*pcVar3)();
        return pTVar9;
      }
      uVar7 = local_50.TypedValue.ArrayNum;
      if (local_50.TypedValue.ArrayNum == local_50.TypedValue.ArrayMax) {
        uVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_50.TypedValue.AllocatorInstance,
                           &local_50.TypedValue.ArrayMax);
      }
      local_50.TypedValue.ArrayNum = uVar7 + 1;
      *(undefined8 *)
       ((longlong)local_50.TypedValue.AllocatorInstance.Data + (longlong)(int)uVar7 * 8) = local_58;
    }
    if (local_30.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.ObjectArray.AllocatorInstance.Data);
    }
    if (&local_50 !=
        (TOptional<TArray<UInstancedSkinnedMeshComponent_*,TSizedDefaultAllocator<32>_>_>_u_0 *)this
       ) {
      pFVar2 = (this->Components).field0_0x0.TypedValue.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      *(ForAnyElementType *)&(this->Components).field0_0x0 =
           local_50.TypedValue.AllocatorInstance.Data;
      (this->Components).field0_0x0.TypedValue.ArrayNum = local_50.TypedValue.ArrayNum;
      uVar7 = local_50.TypedValue.ArrayMax;
      local_50.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0
      ;
      (this->Components).field0_0x0.TypedValue.ArrayMax = local_50.TypedValue.ArrayMax;
      local_50._8_8_ = 0;
      if ((uVar7 == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TObjectCacheIterator<UInstancedSkinnedMeshComponent> *)(*pcVar3)();
        return pTVar9;
      }
    }
    if (local_50.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_50.TypedValue.AllocatorInstance.Data);
    }
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (((this->Components).field0_0x0.TypedValue.ArrayMax == -1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar11)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TObjectCacheIterator<UInstancedSkinnedMeshComponent> *)(*pcVar3)();
    return pTVar9;
  }
  local_40 = (this->Components).field0_0x0.TypedValue.AllocatorInstance.Data;
  iVar1 = (this->Components).field0_0x0.TypedValue.ArrayNum;
  if ((iVar1 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TObjectCacheIterator<UInstancedSkinnedMeshComponent> *)(*pcVar3)();
    return pTVar9;
  }
  (__return_storage_ptr__->OwnedArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OwnedArray).ArrayNum = 0;
  (__return_storage_ptr__->OwnedArray).ArrayMax = 0;
  (__return_storage_ptr__->ArrayView).DataPtr = (UInstancedSkinnedMeshComponent **)local_40;
  *(ulonglong *)&(__return_storage_ptr__->ArrayView).ArrayNum = CONCAT44(uStack_34,iVar1);
  return __return_storage_ptr__;
}

// Get<TObjectIterator<USkinnedMeshComponent>_> @ 148081250

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TObjectCacheIterator<USkinnedMeshComponent> * __thiscall
FObjectCacheContext::TComponentTypeCache<USkinnedMeshComponent,USkinnedAsset>::
Get<TObjectIterator<USkinnedMeshComponent>_>
          (TComponentTypeCache<USkinnedMeshComponent,USkinnedAsset> *this,
          TObjectCacheIterator<USkinnedMeshComponent> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  undefined4 uVar7;
  UClass *pUVar8;
  TObjectCacheIterator<USkinnedMeshComponent> *pTVar9;
  longlong lVar10;
  bool bVar11;
  undefined8 local_58;
  TOptional<TArray<USkinnedMeshComponent_*,TSizedDefaultAllocator<32>_>_>_u_0 local_50;
  FScriptContainerElement *local_40;
  undefined4 uStack_34;
  TObjectIterator<USkinnedMeshComponent> local_30;
  
  if ((this->Components).field0_0x0.TypedValue.ArrayMax == -1) {
    bVar11 = -1 < CpuChannel->Enabled;
    if (bVar11) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_class_TObjectCacheIterator<USkinnedMeshComponent>___cdecl_FObjectCacheContext::TComponentTypeCache<USkinnedMeshComponent,USkinnedAsset>::Get<TObjectIterator<USkinnedMeshComponent>_>(void)___ptr64'
                  ::__l5::__CpuProfilerEventSpecId773,"ComputeSkinnedMeshComponents",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ObjectCacheContext.cpp"
                 ,0x305);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_class_TObjectCacheIterator<USkinnedMeshComponent>___cdecl_FObjectCacheContext::TComponentTypeCache<USkinnedMeshComponent,USkinnedAsset>::Get<TObjectIterator<USkinnedMeshComponent>_>(void)___ptr64'
                 ::__l5::__CpuProfilerEventSpecId773);
    }
    local_50.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_50._8_8_ = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x1000,&local_50.TypedValue.AllocatorInstance,0,&local_50.TypedValue.ArrayMax);
    local_30.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.ObjectArray.ArrayNum = 0;
    local_30.ObjectArray.ArrayMax = 0;
    local_30.Index = 0xffffffff;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar8 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
    GetObjectsOfClass(pUVar8,&local_30.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|AsyncLoadingPhase2|Async|
                               AsyncLoadingPhase1|Garbage|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<USkinnedMeshComponent>::Advance(&local_30);
      lVar10 = (longlong)local_30.Index;
      if ((local_30.Index < 0) || (local_30.ObjectArray.ArrayNum <= local_30.Index)) break;
      uVar6 = 0;
      if (local_30.Index < local_30.ObjectArray.ArrayNum) {
        uVar6 = (uint)~local_30.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TObjectCacheIterator<USkinnedMeshComponent> *)(*pcVar3)();
        return pTVar9;
      }
      local_58 = *(undefined8 *)(local_30.ObjectArray.AllocatorInstance.Data + lVar10 * 8);
      if ((((ulonglong)local_50.TypedValue.AllocatorInstance.Data <=
            (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           (FScriptContainerElement *)
           ((longlong)local_50.TypedValue.AllocatorInstance.Data +
           (longlong)local_50.TypedValue.ArrayMax * 8))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TObjectCacheIterator<USkinnedMeshComponent> *)(*pcVar3)();
        return pTVar9;
      }
      uVar7 = local_50.TypedValue.ArrayNum;
      if (local_50.TypedValue.ArrayNum == local_50.TypedValue.ArrayMax) {
        uVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_50.TypedValue.AllocatorInstance,
                           &local_50.TypedValue.ArrayMax);
      }
      local_50.TypedValue.ArrayNum = uVar7 + 1;
      *(undefined8 *)
       ((longlong)local_50.TypedValue.AllocatorInstance.Data + (longlong)(int)uVar7 * 8) = local_58;
    }
    if (local_30.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.ObjectArray.AllocatorInstance.Data);
    }
    if (&local_50 !=
        (TOptional<TArray<USkinnedMeshComponent_*,TSizedDefaultAllocator<32>_>_>_u_0 *)this) {
      pFVar2 = (this->Components).field0_0x0.TypedValue.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      *(ForAnyElementType *)&(this->Components).field0_0x0 =
           local_50.TypedValue.AllocatorInstance.Data;
      (this->Components).field0_0x0.TypedValue.ArrayNum = local_50.TypedValue.ArrayNum;
      uVar7 = local_50.TypedValue.ArrayMax;
      local_50.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0
      ;
      (this->Components).field0_0x0.TypedValue.ArrayMax = local_50.TypedValue.ArrayMax;
      local_50._8_8_ = 0;
      if ((uVar7 == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TObjectCacheIterator<USkinnedMeshComponent> *)(*pcVar3)();
        return pTVar9;
      }
    }
    if (local_50.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_50.TypedValue.AllocatorInstance.Data);
    }
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (((this->Components).field0_0x0.TypedValue.ArrayMax == -1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar11)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TObjectCacheIterator<USkinnedMeshComponent> *)(*pcVar3)();
    return pTVar9;
  }
  local_40 = (this->Components).field0_0x0.TypedValue.AllocatorInstance.Data;
  iVar1 = (this->Components).field0_0x0.TypedValue.ArrayNum;
  if ((iVar1 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TObjectCacheIterator<USkinnedMeshComponent> *)(*pcVar3)();
    return pTVar9;
  }
  (__return_storage_ptr__->OwnedArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->OwnedArray).ArrayNum = 0;
  (__return_storage_ptr__->OwnedArray).ArrayMax = 0;
  (__return_storage_ptr__->ArrayView).DataPtr = (USkinnedMeshComponent **)local_40;
  *(ulonglong *)&(__return_storage_ptr__->ArrayView).ArrayNum = CONCAT44(uStack_34,iVar1);
  return __return_storage_ptr__;
}


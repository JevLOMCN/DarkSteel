// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 12

// BindKeyPress<FGameplayDebuggerExtension_HUD> @ 146d3b8c0

bool __thiscall
FGameplayDebuggerAddonBase::BindKeyPress<FGameplayDebuggerExtension_HUD>
          (FGameplayDebuggerAddonBase *this,FGameplayDebuggerInputHandlerConfig *param_1,
          FGameplayDebuggerExtension_HUD *param_2,pmf_92f67812 *param_3,
          EGameplayDebuggerInputMode param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FName *pFVar11;
  FName local_98;
  FGameplayDebuggerInputModifier local_90;
  undefined1 local_88 [8];
  FDelegateAllocation FStack_80;
  EGameplayDebuggerInputMode local_70;
  FKey local_68;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  local_98 = param_1->KeyName;
  uVar4 = *(undefined8 *)param_3;
  uVar5 = *(undefined8 *)&param_3->field_0x8;
  local_90 = param_1->Modifier;
  FStack_80.DelegateSize = 0;
  local_88 = (undefined1  [8])0x0;
  FStack_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_38);
  local_20 = &FStack_80;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&FStack_80);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGameplayDebuggerExtension_HUD____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[3] = param_2;
    puVar9[4] = uVar4;
    puVar9[5] = uVar5;
    if ((param_2 == (FGameplayDebuggerExtension_HUD *)0x0) || (puVar9[4] == 0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  local_70 = param_4;
  local_68.KeyName = local_98;
  local_68.KeyDetails.Object = (FKeyDetails *)0x0;
  local_68.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar6 = FKey::IsValid(&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.KeyDetails.SharedReferenceCount.ReferenceController);
  if (bVar6) {
    pFVar11 = (FName *)(this->InputHandlers).AllocatorInstance.Data;
    if ((pFVar11 <= &local_98) &&
       (&local_98 < pFVar11 + (longlong)(this->InputHandlers).ArrayMax * 6)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    iVar8 = (this->InputHandlers).ArrayNum;
    piVar1 = &(this->InputHandlers).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(this->InputHandlers).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->InputHandlers).AllocatorInstance.Data;
    (this->InputHandlers).ArrayNum = iVar8 + 1;
    pFVar11 = (FName *)(pFVar2 + (longlong)iVar8 * 0x30);
    *pFVar11 = local_98;
    pFVar11[1].ComparisonIndex.Value = (uint)local_90;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar11 + 2),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_88);
    *(EGameplayDebuggerInputMode *)&pFVar11[5].ComparisonIndex.Value = local_70;
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_50);
  if ((FStack_80.DelegateSize != 0) &&
     (FStack_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_80,0,0,0x10);
    FStack_80.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (FStack_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_80.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  return bVar6;
}

// BindKeyPress<FGameplayDebuggerExtension_Spectator> @ 146d3bb30

bool __thiscall
FGameplayDebuggerAddonBase::BindKeyPress<FGameplayDebuggerExtension_Spectator>
          (FGameplayDebuggerAddonBase *this,FGameplayDebuggerInputHandlerConfig *param_1,
          FGameplayDebuggerExtension_Spectator *param_2,pmf_d98c9b5a *param_3,
          EGameplayDebuggerInputMode param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FName *pFVar11;
  FName local_98;
  FGameplayDebuggerInputModifier local_90;
  undefined1 local_88 [8];
  FDelegateAllocation FStack_80;
  EGameplayDebuggerInputMode local_70;
  FKey local_68;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  local_98 = param_1->KeyName;
  uVar4 = *(undefined8 *)param_3;
  uVar5 = *(undefined8 *)&param_3->field_0x8;
  local_90 = param_1->Modifier;
  FStack_80.DelegateSize = 0;
  local_88 = (undefined1  [8])0x0;
  FStack_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_38);
  local_20 = &FStack_80;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&FStack_80);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFGameplayDebuggerExtension_Spectator____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar9[3] = param_2;
    puVar9[4] = uVar4;
    puVar9[5] = uVar5;
    if ((param_2 == (FGameplayDebuggerExtension_Spectator *)0x0) || (puVar9[4] == 0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  local_70 = param_4;
  local_68.KeyName = local_98;
  local_68.KeyDetails.Object = (FKeyDetails *)0x0;
  local_68.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar6 = FKey::IsValid(&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.KeyDetails.SharedReferenceCount.ReferenceController);
  if (bVar6) {
    pFVar11 = (FName *)(this->InputHandlers).AllocatorInstance.Data;
    if ((pFVar11 <= &local_98) &&
       (&local_98 < pFVar11 + (longlong)(this->InputHandlers).ArrayMax * 6)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
    }
    iVar8 = (this->InputHandlers).ArrayNum;
    piVar1 = &(this->InputHandlers).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(this->InputHandlers).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->InputHandlers).AllocatorInstance.Data;
    (this->InputHandlers).ArrayNum = iVar8 + 1;
    pFVar11 = (FName *)(pFVar2 + (longlong)iVar8 * 0x30);
    *pFVar11 = local_98;
    pFVar11[1].ComparisonIndex.Value = (uint)local_90;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pFVar11 + 2),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_88);
    *(EGameplayDebuggerInputMode *)&pFVar11[5].ComparisonIndex.Value = local_70;
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_50);
  if ((FStack_80.DelegateSize != 0) &&
     (FStack_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_80.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_80,0,0,0x10);
    FStack_80.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (FStack_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_80.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  return bVar6;
}

// ~FGameplayDebuggerAddonBase @ 146d410a0

void __thiscall
FGameplayDebuggerAddonBase::~FGameplayDebuggerAddonBase(FGameplayDebuggerAddonBase *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FGameplayDebuggerAddonBase__6B_;
  DestructItems<FGameplayDebuggerInputHandler,int>
            ((FGameplayDebuggerInputHandler *)(this->InputHandlers).AllocatorInstance.Data,
             (this->InputHandlers).ArrayNum);
  pFVar3 = (this->InputHandlers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146d410f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// FindLocalDebugActor @ 146d4bf20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall
FGameplayDebuggerAddonBase::FindLocalDebugActor(FGameplayDebuggerAddonBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  AActor *pAVar3;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->RepOwner).WeakPtr);
  if (pUVar2 == (UObject *)0x0) {
    return (AActor *)0x0;
  }
  bVar1 = FWeakObjectPtr::IsStale((FWeakObjectPtr *)&pUVar2[0x12].field_0x18,true,false);
  if (bVar1) {
    return (AActor *)0x0;
  }
  pAVar3 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar2[0x12].field_0x18);
  return pAVar3;
}

// GetDataWorld @ 146d4c1d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
FGameplayDebuggerAddonBase::GetDataWorld
          (FGameplayDebuggerAddonBase *this,APlayerController *param_1,AActor *param_2)

{
  UWorld *pUVar1;
  AActor *this_00;
  
  if ((param_1 != (APlayerController *)0x0) &&
     (pUVar1 = AActor::GetWorld((AActor *)param_1), pUVar1 != (UWorld *)0x0)) {
    return pUVar1;
  }
  if ((param_2 != (AActor *)0x0) && (pUVar1 = AActor::GetWorld(param_2), pUVar1 != (UWorld *)0x0)) {
    return pUVar1;
  }
  this_00 = (AActor *)FWeakObjectPtr::Get(&(this->RepOwner).WeakPtr);
  if (this_00 == (AActor *)0x0) {
    return (UWorld *)0x0;
  }
  pUVar1 = AActor::GetWorld(this_00);
  return pUVar1;
}

// GetInputHandler @ 146d4c830

FGameplayDebuggerInputHandler * __thiscall
FGameplayDebuggerAddonBase::GetInputHandler(FGameplayDebuggerAddonBase *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FGameplayDebuggerInputHandler *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->InputHandlers).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FGameplayDebuggerInputHandler *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FGameplayDebuggerInputHandler *)
         ((this->InputHandlers).AllocatorInstance.Data + (longlong)param_1 * 0x30);
}

// GetInputHandlerDescription @ 146d4c8b0

FString * __thiscall
FGameplayDebuggerAddonBase::GetInputHandlerDescription
          (FGameplayDebuggerAddonBase *this,FString *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  if ((param_1 < 0) || ((this->InputHandlers).ArrayNum <= param_1)) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5 = &local_28;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    bVar2 = false;
    bVar3 = true;
  }
  else {
    uVar4 = 0;
    if (param_1 < (this->InputHandlers).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar5 = FGameplayDebuggerInputHandler::ToString
                       ((FGameplayDebuggerInputHandler *)
                        ((this->InputHandlers).AllocatorInstance.Data + (longlong)param_1 * 0x30),
                        &local_18);
    bVar2 = true;
    bVar3 = false;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  if (bVar3) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetReplicator @ 146d4dbb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AGameplayDebuggerCategoryReplicator * __thiscall
FGameplayDebuggerAddonBase::GetReplicator(FGameplayDebuggerAddonBase *this)

{
  AGameplayDebuggerCategoryReplicator *pAVar1;
  
  pAVar1 = (AGameplayDebuggerCategoryReplicator *)FWeakObjectPtr::Get(&(this->RepOwner).WeakPtr);
  return pAVar1;
}

// GetWorldFromReplicator @ 146d4e370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
FGameplayDebuggerAddonBase::GetWorldFromReplicator(FGameplayDebuggerAddonBase *this)

{
  AActor *this_00;
  UWorld *pUVar1;
  
  this_00 = (AActor *)FWeakObjectPtr::Get(&(this->RepOwner).WeakPtr);
  if (this_00 != (AActor *)0x0) {
    pUVar1 = AActor::GetWorld(this_00);
    return pUVar1;
  }
  return (UWorld *)0x0;
}

// IsSimulateInEditor @ 146d4f730

bool __cdecl FGameplayDebuggerAddonBase::IsSimulateInEditor(void)

{
  return false;
}

// OnGameplayDebuggerActivated @ 146d560b0

void __thiscall
FGameplayDebuggerAddonBase::OnGameplayDebuggerActivated(FGameplayDebuggerAddonBase *this)

{
  return;
}

// OnGameplayDebuggerDeactivated @ 146d56100

void __thiscall
FGameplayDebuggerAddonBase::OnGameplayDebuggerDeactivated(FGameplayDebuggerAddonBase *this)

{
  return;
}


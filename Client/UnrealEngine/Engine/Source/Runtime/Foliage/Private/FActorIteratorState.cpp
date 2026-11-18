// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 3

// FActorIteratorState @ 145ed8450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FActorIteratorState * __thiscall
FActorIteratorState::FActorIteratorState
          (FActorIteratorState *this,UWorld *param_1,TSubclassOf<AActor> param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FActorIteratorState *pFVar6;
  UClass *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FDelegateHandle FVar10;
  UClass *pUVar11;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar11 = (UClass *)0x0;
  this->CurrentWorld = param_1;
  (this->ActorArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorArray).ArrayNum = 0;
  (this->ActorArray).ArrayMax = 0;
  this->ReachedEnd = false;
  this->ConsideredCount = 0;
  this->CurrentActor = (AActor *)0x0;
  (this->SpawnedActorArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnedActorArray).ArrayNum = 0;
  (this->SpawnedActorArray).ArrayMax = 0;
  this->Index = -1;
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  pUVar7 = pUVar11;
  if ((lVar2 != 0) && (pUVar5 = Z_Construct_UClass_AActor_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar7 = *(UClass **)param_2.Class.field0_0x0;
    }
  }
  this->DesiredClass = pUVar7;
  (this->ActorSpawnedDelegateHandle).ID = 0;
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\EngineUtils.h"
                         ,0xb8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FActorIteratorState *)(*pcVar3)();
    return pFVar6;
  }
  if ((this->CurrentWorld == (UWorld *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentWorld",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\EngineUtils.h"
                         ,0xb9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FActorIteratorState *)(*pcVar3)();
    return pFVar6;
  }
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar7 = Z_Construct_UClass_AActor_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar11 = *(UClass **)param_2.Class.field0_0x0;
    }
  }
  GetObjectsOfClass(pUVar11,(TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&this->ActorArray,true,
                    RF_ClassDefaultObject,Garbage);
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFActorIteratorState____A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar8[4] = OnActorSpawned;
    puVar8[3] = this;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  FVar10 = UWorld::AddOnActorSpawnedHandler
                     (this->CurrentWorld,
                      (TDelegate<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> *)
                      &stack0x00000008);
                    /* WARNING: Load size is inaccurate */
  (this->ActorSpawnedDelegateHandle).ID = *FVar10.ID;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return this;
}

// GetActorChecked @ 145ee2dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AActor * __thiscall FActorIteratorState::GetActorChecked(FActorIteratorState *this)

{
  code *pcVar1;
  bool bVar2;
  AActor *pAVar3;
  FUObjectItem *pFVar4;
  FString local_18;
  
  if ((this->CurrentActor == (AActor *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentActor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\EngineUtils.h"
                         ,0x115,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pAVar3 = (AActor *)(*pcVar1)();
    return pAVar3;
  }
  pFVar4 = FUObjectArray::IndexToObject
                     (&GUObjectArray,*(int *)((longlong)&this->CurrentActor->_padding_ + 4));
  if (((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)this->CurrentActor,&local_18,(UObject *)0x0,None);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CurrentActor->IsUnreachable()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\EngineUtils.h"
                       ,0x116,L"%s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pAVar3 = (AActor *)(*pcVar1)();
      return pAVar3;
    }
  }
  return this->CurrentActor;
}

// OnActorSpawned @ 145ee7d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FActorIteratorState::OnActorSpawned(FActorIteratorState *this,AActor *param_1)

{
  int iVar1;
  AActor *local_res10 [3];
  
  iVar1 = (int)this->DesiredClass->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &this->DesiredClass->_padding_)) {
    local_res10[0] = param_1;
    TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*_const_&>
              (&this->SpawnedActorArray,local_res10);
  }
  return;
}


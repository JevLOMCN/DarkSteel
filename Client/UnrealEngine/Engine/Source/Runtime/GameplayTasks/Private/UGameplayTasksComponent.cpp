// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTasks
// Functions: 53

// StaticClass @ 146ceb0f0

UClass * __cdecl UGameplayTasksComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTasksComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTasksComponent",
               &Z_Registration_Info_UClass_UGameplayTasksComponent.InnerSingleton,
               StaticRegisterNativesUGameplayTasksComponent,0x150,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGameplayTasksComponent>,
               InternalVTableHelperCtorCaller<UGameplayTasksComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTasksComponent.InnerSingleton;
}

// UGameplayTasksComponent @ 146cedd70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGameplayTasksComponent * __thiscall
UGameplayTasksComponent::UGameplayTasksComponent
          (UGameplayTasksComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  (this->CurrentlyClaimedResources).Flags = 0;
  (this->TaskPriorityQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskPriorityQueue).ArrayNum = 0;
  (this->TaskPriorityQueue).ArrayMax = 0;
  (this->TaskEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskEvents).ArrayNum = 0;
  (this->TaskEvents).ArrayMax = 0;
  (this->TickingTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TickingTasks).ArrayNum = 0;
  (this->TickingTasks).ArrayMax = 0;
  (this->KnownTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KnownTasks).ArrayNum = 0;
  (this->KnownTasks).ArrayMax = 0;
  *(undefined8 *)&this->OnClaimedResourcesChange = 0;
  *(undefined8 *)&(this->OnClaimedResourcesChange).field_0x8 = 0;
  *(undefined8 *)&(this->OnClaimedResourcesChange).field_0x10 = 0;
  (this->SimulatedTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimulatedTasks).ArrayNum = 0;
  (this->SimulatedTasks).ArrayMax = 0;
  (this->PreviousOnRepSimulatedTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousOnRepSimulatedTasks).ArrayNum = 0;
  (this->PreviousOnRepSimulatedTasks).ArrayMax = 0;
  return this;
}

// UGameplayTasksComponent @ 146cede40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UGameplayTasksComponent * __thiscall
UGameplayTasksComponent::UGameplayTasksComponent
          (UGameplayTasksComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  (this->CurrentlyClaimedResources).Flags = 0;
  (this->TaskPriorityQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskPriorityQueue).ArrayNum = 0;
  (this->TaskPriorityQueue).ArrayMax = 0;
  (this->TaskEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskEvents).ArrayNum = 0;
  (this->TaskEvents).ArrayMax = 0;
  (this->TickingTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TickingTasks).ArrayNum = 0;
  (this->TickingTasks).ArrayMax = 0;
  (this->KnownTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KnownTasks).ArrayNum = 0;
  (this->KnownTasks).ArrayMax = 0;
  *(undefined8 *)&this->OnClaimedResourcesChange = 0;
  *(undefined8 *)&(this->OnClaimedResourcesChange).field_0x8 = 0;
  *(undefined8 *)&(this->OnClaimedResourcesChange).field_0x10 = 0;
  (this->SimulatedTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimulatedTasks).ArrayNum = 0;
  (this->SimulatedTasks).ArrayMax = 0;
  (this->PreviousOnRepSimulatedTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousOnRepSimulatedTasks).ArrayNum = 0;
  (this->PreviousOnRepSimulatedTasks).ArrayMax = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfb;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  *(undefined1 *)&this->_padding_ = 2;
  UActorComponent::SetIsReplicatedByDefault((UActorComponent *)this,true);
  this->bInEventProcessingInProgress = '\0';
  this->TopActivePriority = '\0';
  return this;
}

// ~UGameplayTasksComponent @ 146cee330

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UGameplayTasksComponent::~UGameplayTasksComponent(UGameplayTasksComponent *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  pFVar1 = (this->PreviousOnRepSimulatedTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SimulatedTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OnClaimedResourcesChange).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClaimedResourcesChange);
  pFVar1 = (this->KnownTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TickingTasks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TaskEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TaskPriorityQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IVisualLoggerDebugSnapshotInterface__6B_;
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// AddSimulatedTask @ 146cef6c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UGameplayTasksComponent::AddSimulatedTask(UGameplayTasksComponent *this,UGameplayTask *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UGameplayTask>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  UGameplayTask *local_18 [2];
  
  if (param_1 == (UGameplayTask *)0x0) {
    return false;
  }
  pTVar2 = &this->SimulatedTasks;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  pFVar8 = pFVar3;
  do {
    if (pFVar8 == pFVar3 + (longlong)(this->SimulatedTasks).ArrayNum * 8) {
LAB_146cef735:
      local_18[0] = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar3 + (longlong)(this->SimulatedTasks).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar7 = (this->SimulatedTasks).ArrayNum;
      piVar1 = &(this->SimulatedTasks).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->SimulatedTasks).ArrayNum = iVar7 + 1;
      *(UGameplayTask **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_18[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_18[0] != (UGameplayTask *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_18[0]);
      }
      if (((this->_padding_ & 0x40) != 0) && ((this->_padding_ & 0x10000000) != 0)) {
        UActorComponent::AddReplicatedSubObject
                  ((UActorComponent *)this,(UObject *)param_1,COND_SkipOwner);
      }
      return true;
    }
    if (*(UGameplayTask **)pFVar8 == param_1) {
      if ((int)((longlong)pFVar8 - (longlong)pFVar3 >> 3) != -1) {
        return false;
      }
      goto LAB_146cef735;
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// AddTaskReadyForActivation @ 146cef850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UGameplayTasksComponent::AddTaskReadyForActivation
          (UGameplayTasksComponent *this,UGameplayTask *param_1)

{
  int *piVar1;
  TArray<FGameplayTaskEventData,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName local_res8;
  FScriptContainerElement local_28;
  undefined7 uStack_27;
  UGameplayTask *pUStack_20;
  FString local_18;
  
  if (FVisualLogger::bIsRecording != 0) {
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogGameplayTasks.field_0x4,Log,
               L"AddTaskReadyForActivation %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((((param_1->bCaresAboutPriority == 0) && ((param_1->RequiredResources).Flags == 0)) &&
      ((param_1->ClaimedResources).Flags == 0)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3689787317158936915>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTasksComponent.cpp"
                         ,0x153,"NewTask.RequiresPriorityOrResourceManagement() == true"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar2 = &this->TaskEvents;
  local_28 = (FScriptContainerElement)0x0;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  pUStack_20 = param_1;
  if (((pFVar3 <= &local_28) && (&local_28 < pFVar3 + (longlong)(this->TaskEvents).ArrayMax * 0x10))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->TaskEvents).ArrayNum;
  piVar1 = &(this->TaskEvents).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TaskEvents).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar3 = CONCAT71(uStack_27,local_28);
  *(UGameplayTask **)(pFVar3 + 8) = pUStack_20;
  if ((((this->TaskEvents).ArrayNum == 1) && (this->bInEventProcessingInProgress == 0)) &&
     (this->EventLockCounter == 0)) {
    ProcessTaskEvents(this);
  }
  return;
}

// AddTaskToPriorityQueue @ 146cefa00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UGameplayTasksComponent::AddTaskToPriorityQueue
          (UGameplayTasksComponent *this,UGameplayTask *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UGameplayTask>,TSizedDefaultAllocator<32>_> *pTVar2;
  byte bVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  ForElementType<UGameplayTask_*> FVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ForElementType<UGameplayTask_*> FVar17;
  UGameplayTasksComponent *pUVar18;
  undefined1 auStack_d8 [32];
  UGameplayTask **local_b8;
  ForElementType<UGameplayTask_*> local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_88;
  undefined1 local_87 [7];
  UGameplayTask *local_80;
  UGameplayTask *local_78;
  UGameplayTask *local_70;
  UGameplayTasksComponent *local_68;
  ForElementType<UGameplayTask_*> local_60;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_68 = this;
  if ((param_1->ResourceOverlapPolicy == RequestCancelAndStartOnTop) ||
     (param_1->ResourceOverlapPolicy == RequestCancelAndStartAtEnd)) {
    pFVar16 = (this->TaskPriorityQueue).AllocatorInstance.Data;
    FVar17 = (ForElementType<UGameplayTask_*>)0x0;
    iVar10 = (this->TaskPriorityQueue).ArrayNum;
    iVar8 = 0;
    uVar4 = (param_1->ClaimedResources).Flags;
    local_60.SecondaryData = (ForElementType<UGameplayTask_*>)0x0;
    local_48 = 0;
    pFVar12 = pFVar16 + (longlong)iVar10 * 8;
    local_44 = 2;
    while( true ) {
      if ((this->TaskPriorityQueue).ArrayNum != iVar10) {
        local_88 = 0;
        `TCheckedPointerIterator<TObjectPtr<UGameplayTask>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_88);
        FVar17 = local_60.SecondaryData;
        iVar8 = local_48;
      }
      if (pFVar16 == pFVar12) break;
      local_70 = *(UGameplayTask **)pFVar16;
      if (((local_70 != (UGameplayTask *)0x0) && (local_70->Priority <= param_1->Priority)) &&
         (((local_70->ClaimedResources).Flags & uVar4) != 0)) {
        FVar14 = (ForElementType<UGameplayTask_*>)&local_60;
        if (FVar17 != (ForElementType<UGameplayTask_*>)0x0) {
          FVar14 = FVar17;
        }
        if ((ulonglong)FVar14 <= &local_70) {
          FVar14 = (ForElementType<UGameplayTask_*>)&local_60;
          if (FVar17 != (ForElementType<UGameplayTask_*>)0x0) {
            FVar14 = FVar17;
          }
          if ((FScriptContainerElement *)&local_70 <
              (FScriptContainerElement *)((longlong)FVar14 + (longlong)local_44 * 8)) {
            local_a0 = (longlong)iVar8;
            local_98 = 8;
            local_b8 = &local_70;
            local_b0 = (ForElementType<UGameplayTask_*>)&local_60;
            if (FVar17 != (ForElementType<UGameplayTask_*>)0x0) {
              local_b0 = FVar17;
            }
            local_a8 = (longlong)local_44;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            FVar17 = local_60.SecondaryData;
            iVar8 = local_48;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
        if (iVar8 == local_44) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UGameplayTask_*>_>
                            (0x808,&local_60,&local_44);
          FVar17 = local_60.SecondaryData;
        }
        local_48 = iVar8 + 1;
        FVar14 = (ForElementType<UGameplayTask_*>)&local_60;
        if (FVar17 != (ForElementType<UGameplayTask_*>)0x0) {
          FVar14 = FVar17;
        }
        *(UGameplayTask **)((longlong)FVar14 + (longlong)iVar8 * 8) = local_70;
        FVar17 = local_60.SecondaryData;
        iVar8 = local_48;
      }
      pFVar16 = pFVar16 + 8;
    }
    FVar14 = (ForElementType<UGameplayTask_*>)&local_60;
    if (FVar17 != (ForElementType<UGameplayTask_*>)0x0) {
      FVar14 = FVar17;
    }
    FVar17 = (ForElementType<UGameplayTask_*>)((longlong)FVar14 + (longlong)iVar8 * 8);
    iVar10 = iVar8;
    while( true ) {
      if (iVar10 != iVar8) {
        local_87[0] = 0;
        `TCheckedPointerIterator<UGameplayTask_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_87);
      }
      if (FVar14 == FVar17) break;
      (**(code **)(**(longlong **)FVar14 + 0x2d0))();
      FVar14 = (ForElementType<UGameplayTask_*>)((longlong)FVar14 + 8);
      iVar10 = local_48;
    }
    if (local_60.SecondaryData != (ForElementType<UGameplayTask_*>)0x0) {
      FMemory::Free((void *)local_60.SecondaryData);
    }
  }
  if ((param_1->ResourceOverlapPolicy == StartOnTop) ||
     (param_1->ResourceOverlapPolicy == RequestCancelAndStartOnTop)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  uVar15 = 0;
  pUVar18 = this;
  if (0 < (this->TaskPriorityQueue).ArrayNum) {
    pTVar2 = &this->TaskPriorityQueue;
    lVar11 = 0;
    do {
      iVar10 = (this->TaskPriorityQueue).ArrayNum;
      uVar13 = ~uVar15 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar15 < iVar10) {
        uVar9 = uVar13;
      }
      if (uVar9 == 0) {
        local_b8 = (UGameplayTask **)(longlong)(int)uVar15;
        local_b0 = (ForElementType<UGameplayTask_*>)(longlong)iVar10;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (*(longlong *)((pTVar2->AllocatorInstance).Data + lVar11) != 0) {
        iVar10 = (this->TaskPriorityQueue).ArrayNum;
        if (bVar6) {
          bVar3 = param_1->Priority;
          uVar9 = 0;
          if ((int)uVar15 < iVar10) {
            uVar9 = uVar13;
          }
          if (uVar9 == 0) {
            local_b8 = (UGameplayTask **)(longlong)(int)uVar15;
            local_b0 = (ForElementType<UGameplayTask_*>)(longlong)iVar10;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pUVar18 = local_68;
          if (*(byte *)(*(longlong *)((pTVar2->AllocatorInstance).Data + lVar11) + 0x38) <= bVar3) {
LAB_146cefcf2:
            local_80 = param_1;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            FVar17 = (ForElementType<UGameplayTask_*>)(pTVar2->AllocatorInstance).Data;
            if (((ulonglong)FVar17 <= &local_80) &&
               (lVar11 = (longlong)(this->TaskPriorityQueue).ArrayMax,
               (FScriptContainerElement *)&local_80 <
               (FScriptContainerElement *)((longlong)FVar17 + lVar11 * 8))) {
              local_a0 = (longlong)(this->TaskPriorityQueue).ArrayNum;
              local_98 = 8;
              local_b8 = &local_80;
              local_b0 = FVar17;
              local_a8 = lVar11;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar10 = (this->TaskPriorityQueue).ArrayNum;
            piVar1 = &(this->TaskPriorityQueue).ArrayMax;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar2->AllocatorInstance,piVar1);
            }
            pFVar12 = (pTVar2->AllocatorInstance).Data;
            (this->TaskPriorityQueue).ArrayNum = iVar10 + 1;
            pFVar12 = pFVar12 + (longlong)(int)uVar15 * 8;
            memmove(pFVar12 + 8,pFVar12,(longlong)(int)(iVar10 - uVar15) << 3);
            *(UGameplayTask **)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar15 * 8) =
                 local_80;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_80 != (UGameplayTask *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_80);
            }
            if (uVar15 != 0xffffffff) {
              return;
            }
            break;
          }
        }
        else {
          uVar9 = 0;
          if ((int)uVar15 < iVar10) {
            uVar9 = uVar13;
          }
          if (uVar9 == 0) {
            local_b8 = (UGameplayTask **)(longlong)(int)uVar15;
            local_b0 = (ForElementType<UGameplayTask_*>)(longlong)iVar10;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (*(byte *)(*(longlong *)((pTVar2->AllocatorInstance).Data + lVar11) + 0x38) <
              param_1->Priority) goto LAB_146cefcf2;
        }
      }
      uVar15 = uVar15 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar15 < (pUVar18->TaskPriorityQueue).ArrayNum);
  }
  pTVar2 = &pUVar18->TaskPriorityQueue;
  local_78 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FVar17 = (ForElementType<UGameplayTask_*>)(pTVar2->AllocatorInstance).Data;
  if (((ulonglong)FVar17 <= &local_78) &&
     (lVar11 = (longlong)(pUVar18->TaskPriorityQueue).ArrayMax,
     (FScriptContainerElement *)&local_78 <
     (FScriptContainerElement *)((longlong)FVar17 + lVar11 * 8))) {
    local_a0 = (longlong)(pUVar18->TaskPriorityQueue).ArrayNum;
    local_98 = 8;
    local_b8 = &local_78;
    local_b0 = FVar17;
    local_a8 = lVar11;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar10 = (pUVar18->TaskPriorityQueue).ArrayNum;
  piVar1 = &(pUVar18->TaskPriorityQueue).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (pUVar18->TaskPriorityQueue).ArrayNum = iVar10 + 1;
  *(UGameplayTask **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_78;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UGameplayTask *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_78);
  }
  return;
}

// DescribeSelfToVisLog @ 146cf08c0

void __thiscall
UGameplayTasksComponent::DescribeSelfToVisLog
          (UGameplayTasksComponent *this,FVisualLogEntry *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  UGameplayTask *this_00;
  longlong *plVar3;
  UObject *pUVar4;
  FVisualLogStatusCategory *pFVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  bool bVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  int *piVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_128 [4];
  uint local_124;
  FString local_120;
  FString local_110;
  FVisualLogStatusCategory local_100;
  FScriptContainerElement *local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  void *local_80 [2];
  FString local_70;
  void *local_60 [2];
  FString local_50;
  
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar12 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&CategoryName,L"GameplayTasks");
    atexit(`UGameplayTasksComponent::DescribeSelfToVisLog'::__l2::
           _dynamic_atexit_destructor_for__CategoryName__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar12 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FString::FString(&PriorityQueueName,L"Priority Queue");
    atexit(`UGameplayTasksComponent::DescribeSelfToVisLog'::__l2::
           _dynamic_atexit_destructor_for__PriorityQueueName__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar12 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FString::FString(&OtherTasksName,L"Other tasks");
    atexit(`UGameplayTasksComponent::DescribeSelfToVisLog'::__l2::
           _dynamic_atexit_destructor_for__OtherTasksName__);
    _Init_thread_footer(&::_TSS2);
  }
  bVar7 = IsThisNotNull(this,"UGameplayTasksComponent::DescribeSelfToVisLog");
  if (bVar7) {
    if ((this == (UGameplayTasksComponent *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
      pFVar13 = (this->KnownTasks).AllocatorInstance.Data;
      iVar15 = (this->KnownTasks).ArrayNum;
      local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_120.Data.ArrayNum = 0;
      local_120.Data.ArrayMax = 0;
      pFVar16 = pFVar13 + (longlong)iVar15 * 8;
      while( true ) {
        if ((this->KnownTasks).ArrayNum != iVar15) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UGameplayTask>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar13 == pFVar16) break;
        this_00 = *(UGameplayTask **)pFVar13;
        if (this_00 == (UGameplayTask *)0x0) {
          ::FString::AppendChars(&local_120,L"\nNULL",5);
          pFVar13 = pFVar13 + 8;
        }
        else {
          if (((this_00->bCaresAboutPriority == 0) && ((this_00->RequiredResources).Flags == 0)) &&
             ((this_00->ClaimedResources).Flags == 0)) {
            UGameplayTask::GetDebugDescription(this_00);
            GetTaskStateName(&local_90,*(EGameplayTaskState *)(*(longlong *)pFVar13 + 0x39));
            ::FString::PrintfImpl(&local_c0,L"\n%s %s %s %s");
            iVar14 = local_c0.Data.ArrayNum + -1;
            if (local_c0.Data.ArrayNum == 0) {
              iVar14 = 0;
            }
            ::FString::AppendChars
                      (&local_120,(wchar_t *)local_c0.Data.AllocatorInstance.Data,iVar14);
            if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            }
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
          }
          pFVar13 = pFVar13 + 8;
        }
      }
      local_124 = (this->SimulatedTasks).ArrayNum;
      uVar10 = (ulonglong)(int)local_124;
      pFVar16 = (this->SimulatedTasks).AllocatorInstance.Data;
      local_c8 = pFVar16 + uVar10 * 8;
      while( true ) {
        pFVar13 = local_c8;
        if ((this->SimulatedTasks).ArrayNum != (int)uVar10) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UGameplayTask>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        _Src.Data = CategoryName.Data.AllocatorInstance.Data;
        if (pFVar16 == pFVar13) break;
        plVar3 = *(longlong **)pFVar16;
        if (plVar3 != (longlong *)0x0) {
          pFVar11 = (this->KnownTasks).AllocatorInstance.Data;
          pFVar13 = pFVar11 + (longlong)(this->KnownTasks).ArrayNum * 8;
          for (; pFVar11 != pFVar13; pFVar11 = pFVar11 + 8) {
            if (*(longlong **)pFVar11 == plVar3) goto LAB_146cf0c85;
          }
          if ((int)plVar3[0xe] < 2) {
            plVar8 = (longlong *)(**(code **)(*plVar3 + 0x308))(plVar3,local_80);
            plVar1 = plVar3 + 0xd;
            if (plVar1 != plVar8) {
              if ((void *)*plVar1 != (void *)0x0) {
                FMemory::Free((void *)*plVar1);
              }
              *plVar1 = *plVar8;
              *plVar8 = 0;
              *(int *)(plVar3 + 0xe) = (int)plVar8[1];
              *(undefined4 *)((longlong)plVar3 + 0x74) = *(undefined4 *)((longlong)plVar8 + 0xc);
              plVar8[1] = 0;
            }
            if (local_80[0] != (void *)0x0) {
              FMemory::Free(local_80[0]);
            }
          }
          GetTaskStateName(&local_70,*(EGameplayTaskState *)(*(longlong *)pFVar16 + 0x39));
          ::FString::PrintfImpl(&local_b0,L"\n%s %s %s %s");
          iVar15 = local_b0.Data.ArrayNum + -1;
          if (local_b0.Data.ArrayNum == 0) {
            iVar15 = 0;
          }
          ::FString::AppendChars(&local_120,(wchar_t *)local_b0.Data.AllocatorInstance.Data,iVar15);
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
        }
LAB_146cf0c85:
        uVar10 = (ulonglong)local_124;
        pFVar16 = pFVar16 + 8;
      }
      local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.Data.ArrayNum = 0;
      local_100.Data.ArrayMax = 0;
      local_100.Category.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar15 = CategoryName.Data.ArrayNum;
      local_100.Category.Data.ArrayNum = iVar15;
      if (iVar15 == 0) {
        local_100.Category.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar15,0,(ForAnyElementType *)&local_100.Category,iVar15,
                   &local_100.Category.Data.ArrayMax);
        memcpy(local_100.Category.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar15 * 2);
      }
      local_100.UniqueId = -1;
      local_100.Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.Children.ArrayNum = 0;
      local_100.Children.ArrayMax = 0;
      FVisualLogStatusCategory::Add(&local_100,&OtherTasksName,&local_120);
      pFVar13 = (this->TaskPriorityQueue).AllocatorInstance.Data;
      iVar15 = (this->TaskPriorityQueue).ArrayNum;
      local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_110.Data.ArrayNum = 0;
      local_110.Data.ArrayMax = 0;
      pFVar16 = pFVar13 + (longlong)iVar15 * 8;
      do {
        while( true ) {
          if ((this->TaskPriorityQueue).ArrayNum != iVar15) {
            local_128[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<UGameplayTask>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_128);
          }
          if (pFVar13 == pFVar16) {
            FVisualLogStatusCategory::Add(&local_100,&PriorityQueueName,&local_110);
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
            pFVar5 = (FVisualLogStatusCategory *)(param_1->Status).AllocatorInstance.Data;
            if (((pFVar5 <= &local_100) && (&local_100 < pFVar5 + (param_1->Status).ArrayMax)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar15 = (param_1->Status).ArrayNum;
            piVar12 = &(param_1->Status).ArrayMax;
            if (iVar15 == *piVar12) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x838,&(param_1->Status).AllocatorInstance,piVar12);
            }
            (param_1->Status).ArrayNum = iVar15 + 1;
            FVisualLogStatusCategory::FVisualLogStatusCategory
                      ((FVisualLogStatusCategory *)
                       ((param_1->Status).AllocatorInstance.Data + (longlong)iVar15 * 0x38),
                       &local_100);
            TArray<FVisualLogStatusCategory,TSizedDefaultAllocator<32>_>::
            ~TArray<FVisualLogStatusCategory,TSizedDefaultAllocator<32>_>(&local_100.Children);
            if (local_100.Category.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.Category.Data.AllocatorInstance.Data);
            }
            DestructItems<FString,int>
                      ((FString *)local_100.Data.AllocatorInstance.Data,local_100.Data.ArrayNum);
            if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.Data.AllocatorInstance.Data);
            }
            if (local_120.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return;
            }
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
            return;
          }
          pUVar4 = *(UObject **)pFVar13;
          if (UE::GC::GIsIncrementalReachabilityPending != false) break;
          if (pUVar4 != (UObject *)0x0) goto LAB_146cf0d8d;
LAB_146cf0e71:
          ::FString::AppendChars(&local_110,L"\nNULL",5);
LAB_146cf0e88:
          pFVar13 = pFVar13 + 8;
        }
        if (pUVar4 == (UObject *)0x0) goto LAB_146cf0e71;
        UE::GC::MarkAsReachable(pUVar4);
LAB_146cf0d8d:
        if (*(int *)&pUVar4[2].field_0x20 < 2) {
          puVar9 = (undefined8 *)(**(code **)(*(longlong *)pUVar4 + 0x308))(pUVar4,local_60);
          puVar2 = &pUVar4[2].field_0x18;
          if ((undefined8 *)puVar2 != puVar9) {
            if (*(void **)puVar2 != (void *)0x0) {
              FMemory::Free(*(void **)puVar2);
            }
            *(undefined8 *)puVar2 = *puVar9;
            *puVar9 = 0;
            *(undefined4 *)&pUVar4[2].field_0x20 = *(undefined4 *)(puVar9 + 1);
            *(undefined4 *)&pUVar4[2].field_0x24 = *(undefined4 *)((longlong)puVar9 + 0xc);
            puVar9[1] = 0;
          }
          if (local_60[0] != (void *)0x0) {
            FMemory::Free(local_60[0]);
          }
        }
        GetTaskStateName(&local_50,pUVar4[1].field_0x11);
        ::FString::PrintfImpl(&local_a0,L"\n%s %s");
        iVar14 = local_a0.Data.ArrayNum + -1;
        if (local_a0.Data.ArrayNum == 0) {
          iVar14 = 0;
        }
        ::FString::AppendChars(&local_110,(wchar_t *)local_a0.Data.AllocatorInstance.Data,iVar14);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        goto LAB_146cf0e88;
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
        pFVar13 = pFVar13 + 8;
      } while( true );
    }
  }
  return;
}

// EndAllResourceConsumingTasksOwnedBy @ 146cf11f0

void __thiscall
UGameplayTasksComponent::EndAllResourceConsumingTasksOwnedBy
          (UGameplayTasksComponent *this,IGameplayTaskOwnerInterface *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  IGameplayTaskOwnerInterface *pIVar7;
  uint uVar8;
  longlong lVar9;
  
  if (this != (UGameplayTasksComponent *)0x0) {
    this->EventLockCounter = this->EventLockCounter + 1;
  }
  uVar8 = 0;
  if (0 < (this->TaskPriorityQueue).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->TaskPriorityQueue).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)((this->TaskPriorityQueue).AllocatorInstance.Data + lVar9) != 0) {
        uVar5 = 0;
        if ((int)uVar8 < (this->TaskPriorityQueue).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)((this->TaskPriorityQueue).AllocatorInstance.Data + lVar9);
        if ((*(longlong *)(lVar2 + 0x50) == 0) ||
           (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar2 + 0x48)), !bVar4)) {
          pIVar7 = (IGameplayTaskOwnerInterface *)0x0;
        }
        else {
          if (((*(longlong *)(lVar2 + 0x50) == 0) ||
              (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar2 + 0x48)), !bVar4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                                 ,0x84,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pIVar7 = *(IGameplayTaskOwnerInterface **)(lVar2 + 0x50);
        }
        if (pIVar7 == param_1) {
          uVar5 = 0;
          if ((int)uVar8 < (this->TaskPriorityQueue).ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          UGameplayTask::TaskOwnerEnded
                    (*(UGameplayTask **)((this->TaskPriorityQueue).AllocatorInstance.Data + lVar9));
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->TaskPriorityQueue).ArrayNum);
  }
  iVar6 = this->EventLockCounter + -1;
  iVar1 = (this->TaskEvents).ArrayNum;
  this->EventLockCounter = iVar6;
  if (((iVar1 != 0) && (this->bInEventProcessingInProgress == 0)) && (iVar6 == 0)) {
    ProcessTaskEvents(this);
    return;
  }
  return;
}

// FindAllResourceConsumingTasksOwnedBy @ 146cf1970

bool __thiscall
UGameplayTasksComponent::FindAllResourceConsumingTasksOwnedBy
          (UGameplayTasksComponent *this,IGameplayTaskOwnerInterface *param_1,
          TArray<UGameplayTask_*,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  IGameplayTaskOwnerInterface *pIVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 local_28 [2];
  
  iVar9 = 0;
  uVar10 = 0;
  if (0 < (this->TaskPriorityQueue).ArrayNum) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->TaskPriorityQueue).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(longlong *)((this->TaskPriorityQueue).AllocatorInstance.Data + lVar11) != 0) {
        uVar6 = 0;
        if ((int)uVar10 < (this->TaskPriorityQueue).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        lVar1 = *(longlong *)((this->TaskPriorityQueue).AllocatorInstance.Data + lVar11);
        if ((*(longlong *)(lVar1 + 0x50) == 0) ||
           (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x48)), !bVar4)) {
          pIVar8 = (IGameplayTaskOwnerInterface *)0x0;
        }
        else {
          if (((*(longlong *)(lVar1 + 0x50) == 0) ||
              (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x48)), !bVar4)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                                 ,0x84,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pIVar8 = *(IGameplayTaskOwnerInterface **)(lVar1 + 0x50);
        }
        if (pIVar8 == param_1) {
          uVar6 = 0;
          if ((int)uVar10 < (this->TaskPriorityQueue).ArrayNum) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          local_28[0] = *(undefined8 *)((this->TaskPriorityQueue).AllocatorInstance.Data + lVar11);
          pFVar2 = (param_2->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
              ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)param_2->ArrayMax * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar7 = param_2->ArrayNum;
          if (iVar7 == param_2->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          iVar9 = iVar9 + 1;
          param_2->ArrayNum = iVar7 + 1;
          *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_28[0];
        }
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < (this->TaskPriorityQueue).ArrayNum);
  }
  return 0 < iVar9;
}

// FindResourceConsumingTaskByName @ 146cf1c00

UGameplayTask * __thiscall
UGameplayTasksComponent::FindResourceConsumingTaskByName
          (UGameplayTasksComponent *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UGameplayTask *pUVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  uVar7 = uVar6;
  if (0 < (this->TaskPriorityQueue).ArrayNum) {
    do {
      uVar5 = (uint)uVar6;
      uVar3 = 0;
      if ((int)uVar5 < (this->TaskPriorityQueue).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UGameplayTask *)(*pcVar1)();
        return pUVar4;
      }
      if (*(longlong *)((this->TaskPriorityQueue).AllocatorInstance.Data + uVar7) != 0) {
        uVar3 = 0;
        if ((int)uVar5 < (this->TaskPriorityQueue).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pUVar4 = (UGameplayTask *)(*pcVar1)();
          return pUVar4;
        }
        if (*(FName *)(*(longlong *)((this->TaskPriorityQueue).AllocatorInstance.Data + uVar7) +
                      0x30) == param_1) {
          uVar3 = 0;
          if ((int)uVar5 < (this->TaskPriorityQueue).ArrayNum) {
            uVar3 = ~uVar5 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            pUVar4 = (UGameplayTask *)(*pcVar1)();
            return pUVar4;
          }
          return *(UGameplayTask **)
                  ((this->TaskPriorityQueue).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
        }
      }
      uVar6 = (ulonglong)(uVar5 + 1);
      uVar7 = uVar7 + 8;
    } while ((int)(uVar5 + 1) < (this->TaskPriorityQueue).ArrayNum);
  }
  return (UGameplayTask *)0x0;
}

// GetGameplayTaskAvatar @ 146cf27e0

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
UGameplayTasksComponent::GetGameplayTaskAvatar(UGameplayTasksComponent *this,UGameplayTask *param_1)

{
  return *(AActor **)&this[-1].SimulatedTasks.ArrayNum;
}

// GetGameplayTaskOwner @ 146cf2960

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
UGameplayTasksComponent::GetGameplayTaskOwner(UGameplayTasksComponent *this,UGameplayTask *param_1)

{
  return *(AActor **)&this[-1].SimulatedTasks.ArrayNum;
}

// GetGameplayTasksComponent @ 146cf29e0

UGameplayTasksComponent * __thiscall
UGameplayTasksComponent::GetGameplayTasksComponent
          (UGameplayTasksComponent *this,UGameplayTask *param_1)

{
  return (UGameplayTasksComponent *)&this[-1]._padding_;
}

// GetKnownTaskIterator @ 146cf29f0

TIndexedContainerIterator<TArray<TObjectPtr<UGameplayTask>,TSizedDefaultAllocator<32>_>_const_,TObjectPtr<UGameplayTask>_const_,int>
* __thiscall
UGameplayTasksComponent::GetKnownTaskIterator
          (UGameplayTasksComponent *this,
          TIndexedContainerIterator<TArray<TObjectPtr<UGameplayTask>,TSizedDefaultAllocator<32>_>_const_,TObjectPtr<UGameplayTask>_const_,int>
          *__return_storage_ptr__)

{
  __return_storage_ptr__->Index = 0;
  __return_storage_ptr__->Container = &this->KnownTasks;
  return __return_storage_ptr__;
}

// GetKnownTasksDescription @ 146cf2a10

FString * __thiscall
UGameplayTasksComponent::GetKnownTasksDescription
          (UGameplayTasksComponent *this,FString *__return_storage_ptr__)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  undefined1 local_res8 [8];
  FString local_58;
  void *local_48 [2];
  FString local_38;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar6 = (this->KnownTasks).AllocatorInstance.Data;
  iVar3 = (this->KnownTasks).ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  do {
    while( true ) {
      if ((this->KnownTasks).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UGameplayTask>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar2) {
        return __return_storage_ptr__;
      }
      plVar4 = *(longlong **)pFVar6;
      if (plVar4 != (longlong *)0x0) break;
      ::FString::AppendChars(__return_storage_ptr__,L"\nNULL",5);
LAB_146cf2b83:
      pFVar6 = pFVar6 + 8;
    }
    if ((int)plVar4[0xe] < 2) {
      plVar5 = (longlong *)(**(code **)(*plVar4 + 0x308))(plVar4,local_48);
      plVar1 = plVar4 + 0xd;
      if (plVar1 != plVar5) {
        if ((void *)*plVar1 != (void *)0x0) {
          FMemory::Free((void *)*plVar1);
        }
        *plVar1 = *plVar5;
        *plVar5 = 0;
        *(int *)(plVar4 + 0xe) = (int)plVar5[1];
        *(undefined4 *)((longlong)plVar4 + 0x74) = *(undefined4 *)((longlong)plVar5 + 0xc);
        plVar5[1] = 0;
      }
      if (local_48[0] != (void *)0x0) {
        FMemory::Free(local_48[0]);
      }
    }
    GetTaskStateName(&local_38,*(EGameplayTaskState *)(*(longlong *)pFVar6 + 0x39));
    ::FString::PrintfImpl(&local_58,L"\n%s %s");
    iVar7 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar7);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_146cf2b83;
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// GetLifetimeReplicatedProps @ 146cf2bc0

void __thiscall
UGameplayTasksComponent::GetLifetimeReplicatedProps
          (UGameplayTasksComponent *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FRepClassDescriptor local_38;
  FDoRepLifetimeParams local_28;
  
  local_38.StartRepIndex = 0;
  local_38.EndRepIndex = 1;
  local_38.ClassName = L"Super";
  DisableAllReplicatedPropertiesOfClass(&local_38,IncludeSuper,param_1);
  local_28.Condition = COND_SkipOwner;
  local_38.ClassName = L"SimulatedTasks";
  local_28.RepNotifyCondition = REPNOTIFY_Always;
  local_28.bIsPushBased = true;
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38.StartRepIndex = 2;
  local_38.EndRepIndex = 1;
  RegisterReplicatedLifetimeProperty((FRepPropertyDescriptor *)&local_38,param_1,&local_28);
  return;
}

// GetPriorityQueueIterator @ 146cf2d20

TIndexedContainerIterator<TArray<TObjectPtr<UGameplayTask>,TSizedDefaultAllocator<32>_>_const_,TObjectPtr<UGameplayTask>_const_,int>
* __thiscall
UGameplayTasksComponent::GetPriorityQueueIterator
          (UGameplayTasksComponent *this,
          TIndexedContainerIterator<TArray<TObjectPtr<UGameplayTask>,TSizedDefaultAllocator<32>_>_const_,TObjectPtr<UGameplayTask>_const_,int>
          *__return_storage_ptr__)

{
  __return_storage_ptr__->Index = 0;
  __return_storage_ptr__->Container = &this->TaskPriorityQueue;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146cf3260

UClass * __cdecl UGameplayTasksComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTasksComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTasksComponent",
               &Z_Registration_Info_UClass_UGameplayTasksComponent.InnerSingleton,
               StaticRegisterNativesUGameplayTasksComponent,0x150,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UGameplayTasksComponent>,
               InternalVTableHelperCtorCaller<UGameplayTasksComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTasksComponent.InnerSingleton;
}

// GetShouldTick @ 146cf3460

bool __thiscall UGameplayTasksComponent::GetShouldTick(UGameplayTasksComponent *this)

{
  return 0 < (this->TickingTasks).ArrayNum;
}

// GetSimulatedTaskIterator @ 146cf3480

TIndexedContainerIterator<TArray<TObjectPtr<UGameplayTask>,TSizedDefaultAllocator<32>_>_const_,TObjectPtr<UGameplayTask>_const_,int>
* __thiscall
UGameplayTasksComponent::GetSimulatedTaskIterator
          (UGameplayTasksComponent *this,
          TIndexedContainerIterator<TArray<TObjectPtr<UGameplayTask>,TSizedDefaultAllocator<32>_>_const_,TObjectPtr<UGameplayTask>_const_,int>
          *__return_storage_ptr__)

{
  __return_storage_ptr__->Index = 0;
  __return_storage_ptr__->Container = &this->SimulatedTasks;
  return __return_storage_ptr__;
}

// GetTaskStateName @ 146cf3600

FString * __cdecl
UGameplayTasksComponent::GetTaskStateName
          (FString *__return_storage_ptr__,EGameplayTaskState param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  UPackage *pUVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (Z_Registration_Info_UEnum_EGameplayTaskState.OuterSingleton == (UEnum *)0x0) {
        pUVar4 = Z_Construct_UPackage__Script_GameplayTasks();
        Z_Registration_Info_UEnum_EGameplayTaskState.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_GameplayTasks_EGameplayTaskState,(UObject *)pUVar4,
                           L"EGameplayTaskState");
      }
      Enum = Z_Registration_Info_UEnum_EGameplayTaskState.OuterSingleton;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (Enum == (UEnum *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Enum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTasksComponent.cpp"
                       ,0x29b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  UEnum::GetNameStringByValue(Enum,__return_storage_ptr__,(ulonglong)param_1);
  return __return_storage_ptr__;
}

// GetTasksPriorityQueueDescription @ 146cf36f0

FString * __thiscall
UGameplayTasksComponent::GetTasksPriorityQueueDescription
          (UGameplayTasksComponent *this,FString *__return_storage_ptr__)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObject *pUVar4;
  undefined8 *puVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FString local_58;
  void *local_48 [2];
  FString local_38;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar7 = (this->TaskPriorityQueue).AllocatorInstance.Data;
  iVar3 = (this->TaskPriorityQueue).ArrayNum;
  pFVar2 = pFVar7 + (longlong)iVar3 * 8;
  do {
    while( true ) {
      if ((this->TaskPriorityQueue).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UGameplayTask>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar2) {
        return __return_storage_ptr__;
      }
      pUVar4 = *(UObject **)pFVar7;
      if (UE::GC::GIsIncrementalReachabilityPending == false) break;
      if (pUVar4 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar4);
        goto LAB_146cf3777;
      }
LAB_146cf3863:
      ::FString::AppendChars(__return_storage_ptr__,L"\nNULL",5);
LAB_146cf3878:
      pFVar7 = pFVar7 + 8;
    }
    if (pUVar4 == (UObject *)0x0) goto LAB_146cf3863;
LAB_146cf3777:
    if (*(int *)&pUVar4[2].field_0x20 < 2) {
      puVar5 = (undefined8 *)(**(code **)(*(longlong *)pUVar4 + 0x308))(pUVar4,local_48);
      puVar1 = &pUVar4[2].field_0x18;
      if ((undefined8 *)puVar1 != puVar5) {
        if (*(void **)puVar1 != (void *)0x0) {
          FMemory::Free(*(void **)puVar1);
        }
        *(undefined8 *)puVar1 = *puVar5;
        *puVar5 = 0;
        *(undefined4 *)&pUVar4[2].field_0x20 = *(undefined4 *)(puVar5 + 1);
        *(undefined4 *)&pUVar4[2].field_0x24 = *(undefined4 *)((longlong)puVar5 + 0xc);
        puVar5[1] = 0;
      }
      if (local_48[0] != (void *)0x0) {
        FMemory::Free(local_48[0]);
      }
    }
    GetTaskStateName(&local_38,pUVar4[1].field_0x11);
    ::FString::PrintfImpl(&local_58,L"\n%s %s");
    iVar6 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_146cf3878;
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// GetTickingTaskIterator @ 146cf38b0

TIndexedContainerIterator<TArray<TObjectPtr<UGameplayTask>,TSizedDefaultAllocator<32>_>_const_,TObjectPtr<UGameplayTask>_const_,int>
* __thiscall
UGameplayTasksComponent::GetTickingTaskIterator
          (UGameplayTasksComponent *this,
          TIndexedContainerIterator<TArray<TObjectPtr<UGameplayTask>,TSizedDefaultAllocator<32>_>_const_,TObjectPtr<UGameplayTask>_const_,int>
          *__return_storage_ptr__)

{
  __return_storage_ptr__->Index = 0;
  __return_storage_ptr__->Container = &this->TickingTasks;
  return __return_storage_ptr__;
}

// GetTickingTasksDescription @ 146cf38d0

FString * __thiscall
UGameplayTasksComponent::GetTickingTasksDescription
          (UGameplayTasksComponent *this,FString *__return_storage_ptr__)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  undefined1 local_res8 [8];
  FString local_58;
  void *local_48 [2];
  FString local_38;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar6 = (this->TickingTasks).AllocatorInstance.Data;
  iVar3 = (this->TickingTasks).ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  do {
    while( true ) {
      if ((this->TickingTasks).ArrayNum != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UGameplayTask>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar2) {
        return __return_storage_ptr__;
      }
      plVar4 = *(longlong **)pFVar6;
      if (plVar4 != (longlong *)0x0) break;
      ::FString::AppendChars(__return_storage_ptr__,L"\nNULL",5);
LAB_146cf3a43:
      pFVar6 = pFVar6 + 8;
    }
    if ((int)plVar4[0xe] < 2) {
      plVar5 = (longlong *)(**(code **)(*plVar4 + 0x308))(plVar4,local_48);
      plVar1 = plVar4 + 0xd;
      if (plVar1 != plVar5) {
        if ((void *)*plVar1 != (void *)0x0) {
          FMemory::Free((void *)*plVar1);
        }
        *plVar1 = *plVar5;
        *plVar5 = 0;
        *(int *)(plVar4 + 0xe) = (int)plVar5[1];
        *(undefined4 *)((longlong)plVar4 + 0x74) = *(undefined4 *)((longlong)plVar5 + 0xc);
        plVar5[1] = 0;
      }
      if (local_48[0] != (void *)0x0) {
        FMemory::Free(local_48[0]);
      }
    }
    GetTaskStateName(&local_38,*(EGameplayTaskState *)(*(longlong *)pFVar6 + 0x39));
    ::FString::PrintfImpl(&local_58,L"\n%s %s");
    iVar7 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar7);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_146cf3a43;
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// GrabDebugSnapshot @ 146cf3af0

void __thiscall
UGameplayTasksComponent::GrabDebugSnapshot(UGameplayTasksComponent *this,FVisualLogEntry *param_1)

{
  DescribeSelfToVisLog((UGameplayTasksComponent *)&this[-1]._padding_,param_1);
  return;
}

// HasActiveTasks @ 146cf3b10

bool __thiscall
UGameplayTasksComponent::HasActiveTasks(UGameplayTasksComponent *this,UClass *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  if (0 < (this->KnownTasks).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->KnownTasks).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(longlong *)((this->KnownTasks).AllocatorInstance.Data + lVar8) != 0) {
        uVar6 = 0;
        if ((int)uVar7 < (this->KnownTasks).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        lVar2 = *(longlong *)
                 (*(longlong *)((this->KnownTasks).AllocatorInstance.Data + lVar8) + 0x10);
        iVar1 = (int)param_1->_padding_;
        if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
            &param_1->_padding_)) {
          return true;
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (this->KnownTasks).ArrayNum);
  }
  return false;
}

// K2_RunGameplayTask @ 146cf3f30

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

EGameplayTaskRunResult __cdecl
UGameplayTasksComponent::K2_RunGameplayTask
          (TScriptInterface<IGameplayTaskOwnerInterface> *param_1,UGameplayTask *param_2,
          uchar param_3,
          TArray<TSubclassOf<UGameplayTaskResource>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<TSubclassOf<UGameplayTaskResource>,TSizedDefaultAllocator<32>_> *param_5)

{
  EGameplayTaskState EVar1;
  IGameplayTaskOwnerInterface *pIVar2;
  bool bVar3;
  bool bVar4;
  FMessageLog *pFVar5;
  longlong lVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  IGameplayTaskOwnerInterface *pIVar10;
  FScriptContainerElement *pFVar11;
  EGameplayTaskRunResult EVar12;
  TRefCountPtr<ITextData> TVar13;
  FName local_res8;
  FName local_e8;
  FText local_e0;
  FText local_d0;
  TSharedRef<FTokenizedMessage,1> local_c0;
  FText local_b0;
  TSharedRef<FTokenizedMessage,1> local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FMessageLog local_60;
  FTextFormat local_30;
  
  local_res8.ComparisonIndex.Value = 0;
  FText::FromString(&local_e0,L"None");
  if ((*(longlong *)param_1 == 0) ||
     (pIVar2 = *(IGameplayTaskOwnerInterface **)&param_1->field_0x8,
     pIVar2 == (IGameplayTaskOwnerInterface *)0x0)) {
    ::FName::FName(&local_e8,"PIE");
    pFVar5 = FMessageLog::FMessageLog(&local_60,&local_e8);
    TVar13.Reference = local_e0.TextData.Reference;
    if (param_2 == (UGameplayTask *)0x0) {
      local_d0.TextData.Reference = local_e0.TextData.Reference;
      if (local_e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0.TextData.Reference + 8))
                  (local_e0.TextData.Reference,&local_res8);
      }
      pFVar7 = &local_d0;
      local_d0.Flags = local_e0.Flags;
      bVar4 = false;
      bVar3 = true;
    }
    else {
      local_b0.TextData.Reference = (ITextData *)param_2->_padding_;
      pFVar7 = FText::FromName(&local_80,(FName *)&local_b0);
      bVar4 = true;
      bVar3 = false;
      TVar13.Reference = local_d0.TextData.Reference;
    }
    local_c0.Object = (FTokenizedMessage *)(pFVar7->TextData).Reference;
    if (local_c0.Object != (FTokenizedMessage *)0x0) {
      (**(code **)((local_c0.Object)->_padding_ + 8))(local_c0.Object,&local_res8);
    }
    local_c0.SharedReferenceCount.ReferenceController._0_4_ = pFVar7->Flags;
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_90,L"GameplayTasksComponent",L"RunGameplayTaskNullOwner",
                        L"Tried running a gameplay task {0} while owner is None!");
    pFVar9 = FTextFormat::FTextFormat(&local_30,pFVar7,Default);
    pFVar7 = FText::Format<FText>(&local_70,pFVar9,(FText *)&local_c0);
    FMessageLog::Error(pFVar5,&local_a0,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.SharedReferenceCount.ReferenceController);
    if (local_70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
    }
    if (local_90.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
    }
    if ((bVar3) && (TVar13.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*TVar13.Reference + 0x10))(TVar13.Reference);
    }
    if ((bVar4) && (local_80.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
  }
  else {
    if (param_2 != (UGameplayTask *)0x0) {
      EVar1 = param_2->TaskState;
      if ((EVar1 == Paused) || (EVar1 == Active)) {
        ::FName::FName(&local_res8,"PIE");
        pFVar5 = FMessageLog::FMessageLog(&local_60,&local_res8);
        lVar6 = (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
        local_e8 = *(FName *)(lVar6 + 0x18);
        ::FName::ToString(&local_e8,(FString *)&local_d0);
        pFVar7 = FText::FromString(&local_80,(FString *)&local_d0);
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_b0,L"GameplayTasksComponent",L"RunNullGameplayTask",
                            L"Tried running a None task for {0}");
        pFVar9 = FTextFormat::FTextFormat((FTextFormat *)&local_90,pFVar8,Default);
        pFVar7 = FText::Format<FText>((FText *)&local_c0,pFVar9,pFVar7);
        FMessageLog::Warning(pFVar5,&local_a0,pFVar7);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a0.SharedReferenceCount.ReferenceController);
        if (local_c0.Object != (FTokenizedMessage *)0x0) {
          (**(code **)((local_c0.Object)->_padding_ + 0x10))();
        }
        if (local_b0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
        }
        if (local_d0.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_d0.TextData.Reference);
        }
        FMessageLog::~FMessageLog(&local_60);
        pIVar10 = UGameplayTask::GetTaskOwner(param_2);
        if (pIVar10 == pIVar2) {
          EVar12 = (param_2->TaskState != Paused) + Success_Paused;
        }
        else {
          EVar12 = Error;
        }
        if (local_e0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
        }
        pFVar11 = (param_4->AllocatorInstance).Data;
        if (pFVar11 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar11);
        }
        pFVar11 = (param_5->AllocatorInstance).Data;
        if (pFVar11 == (FScriptContainerElement *)0x0) {
          return EVar12;
        }
        FMemory::Free(pFVar11);
        return EVar12;
      }
      if (EVar1 == Uninitialized) {
        UGameplayTask::InitTask(param_2,pIVar2,param_3);
      }
      UGameplayTask::AddRequiredResourceSet(param_2,param_4);
      UGameplayTask::AddClaimedResourceSet(param_2,param_5);
      UGameplayTask::ReadyForActivation(param_2);
      EVar1 = param_2->TaskState;
      if ((EVar1 == AwaitingActivation) || (EVar1 == Paused)) {
        if (local_e0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
        }
        pFVar11 = (param_4->AllocatorInstance).Data;
        if (pFVar11 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar11);
        }
        pFVar11 = (param_5->AllocatorInstance).Data;
        if (pFVar11 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar11);
        }
        return Success_Paused;
      }
      if ((EVar1 == Active) || (EVar1 == Finished)) {
        if (local_e0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
        }
        pFVar11 = (param_4->AllocatorInstance).Data;
        if (pFVar11 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar11);
        }
        pFVar11 = (param_5->AllocatorInstance).Data;
        if (pFVar11 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar11);
        }
        return Success_Active;
      }
      if (local_e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
      }
      pFVar11 = (param_4->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      pFVar11 = (param_5->AllocatorInstance).Data;
      goto LAB_146cf43e0;
    }
    ::FName::FName(&local_res8,"PIE");
    pFVar5 = FMessageLog::FMessageLog(&local_60,&local_res8);
    lVar6 = (**(code **)((longlong)*pIVar2 + 8))(pIVar2);
    local_e8 = *(FName *)(lVar6 + 0x18);
    ::FName::ToString(&local_e8,(FString *)&local_d0);
    pFVar7 = FText::FromString(&local_80,(FString *)&local_d0);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_a0,L"GameplayTasksComponent",L"RunNullGameplayTask",
                        L"Tried running a None task for {0}");
    pFVar9 = FTextFormat::FTextFormat((FTextFormat *)&local_90,pFVar8,Default);
    pFVar7 = FText::Format<FText>(&local_b0,pFVar9,pFVar7);
    FMessageLog::Error(pFVar5,&local_c0,pFVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_c0.SharedReferenceCount.ReferenceController._4_4_,
                        (uint)local_c0.SharedReferenceCount.ReferenceController));
    if (local_b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
    }
    if (local_a0.Object != (FTokenizedMessage *)0x0) {
      (**(code **)((local_a0.Object)->_padding_ + 0x10))();
    }
    if (local_d0.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_d0.TextData.Reference);
    }
  }
  FMessageLog::~FMessageLog(&local_60);
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
  }
  pFVar11 = (param_4->AllocatorInstance).Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  pFVar11 = (param_5->AllocatorInstance).Data;
LAB_146cf43e0:
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  return Error;
}

// OnGameplayTaskActivated @ 146cf47b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGameplayTasksComponent::OnGameplayTaskActivated
          (UGameplayTasksComponent *this,UGameplayTask *param_1)

{
  int *piVar1;
  longlong *this_00;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  IGameplayTaskOwnerInterface *pIVar7;
  longlong *plVar8;
  longlong *plVar9;
  UGameplayTask *local_28;
  UGameplayTask *local_20;
  UGameplayTask *local_18 [2];
  
  this_00 = &this[-1]._padding_;
  if (this_00 != (longlong *)0x0) {
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  }
  local_28 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UGameplayTask *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if ((((UGameplayTask **)this->_padding_ <= &local_28) &&
      (&local_28 < (UGameplayTask **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar6 + 1;
  *(UGameplayTask **)(this->_padding_ + (longlong)iVar6 * 8) = local_28;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UGameplayTask *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28);
  }
  if (param_1->bTickingTask != 0) {
    plVar8 = (longlong *)this->_padding_;
    plVar2 = plVar8 + (int)this->_padding_;
    for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
      if ((UGameplayTask *)*plVar8 == (UGameplayTask *)0x0) {
        bVar4 = param_1 == (UGameplayTask *)0x0;
      }
      else {
        bVar4 = (UGameplayTask *)*plVar8 == param_1;
      }
      if (bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TickingTasks.Contains(&Task) == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTasksComponent.cpp"
                           ,0x58,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      }
    }
    local_20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((((UGameplayTask **)this->_padding_ <= &local_20) &&
        (&local_20 < (UGameplayTask **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4)))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar6 + 1;
    *(UGameplayTask **)(this->_padding_ + (longlong)iVar6 * 8) = local_20;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UGameplayTask *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_20);
    }
    if (((int)this->_padding_ == 1) &&
       (bVar5 = (**(code **)(*this_00 + 0x4f8))(this_00),
       ((byte)this[-1].OnClaimedResourcesChange.field_0x12 >> 4 & 1) != bVar5)) {
      (**(code **)(*this_00 + 0x2c8))(this_00,bVar5,0);
    }
  }
  if (param_1->bSimulatedTask != 0) {
    plVar2 = &this->_padding_;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    plVar8 = (longlong *)*plVar2;
    for (plVar9 = plVar8; plVar9 != plVar8 + (int)this->_padding_; plVar9 = plVar9 + 1) {
      if ((UGameplayTask *)*plVar9 == param_1) {
        if ((int)((longlong)plVar9 - (longlong)plVar8 >> 3) != -1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bWasAdded == true",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTasksComponent.cpp"
                             ,0x65,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          goto LAB_146cf4b42;
        }
        break;
      }
    }
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((((UGameplayTask **)*plVar2 <= local_18) &&
        (local_18 < (UGameplayTask **)*plVar2 + *(int *)((longlong)&this->_padding_ + 4))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)plVar2,piVar1);
    }
    *(int *)&this->_padding_ = iVar6 + 1;
    *(UGameplayTask **)(*plVar2 + (longlong)iVar6 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (UGameplayTask *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
    if (((this[-1].OnClaimedResourcesChange.field_0x10 & 0x40) != 0) &&
       ((this[-1].OnClaimedResourcesChange.field_0x13 & 0x10) != 0)) {
      UActorComponent::AddReplicatedSubObject
                ((UActorComponent *)this_00,(UObject *)param_1,COND_SkipOwner);
    }
  }
LAB_146cf4b42:
  pIVar7 = UGameplayTask::GetTaskOwner(param_1);
  if ((param_1->bOwnedByTasksComponent == 0) && (pIVar7 != (IGameplayTaskOwnerInterface *)0x0)) {
    (**(code **)((longlong)*pIVar7 + 0x38))(pIVar7,param_1);
  }
  if (this_00 != (longlong *)0x0) {
    iVar6 = (int)this->_padding_ + -1;
    *(int *)&this->_padding_ = iVar6;
    if ((((int)this->_padding_ != 0) && ((this->_padding_ & 0x100000000) == 0)) && (iVar6 == 0)) {
      ProcessTaskEvents((UGameplayTasksComponent *)this_00);
    }
  }
  return;
}

// OnGameplayTaskDeactivated @ 146cf4f00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGameplayTasksComponent::OnGameplayTaskDeactivated
          (UGameplayTasksComponent *this,UGameplayTask *param_1)

{
  int *piVar1;
  longlong *this_00;
  undefined8 *puVar2;
  EGameplayTaskState EVar3;
  UGameplayTask *this_01;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  IGameplayTaskOwnerInterface *pIVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  TObjectPtr<UGameplayTask>_u_0 local_res8;
  FName local_res10;
  FScriptContainerElement local_58;
  undefined7 uStack_57;
  UGameplayTask *pUStack_50;
  FString local_48;
  
  this_00 = &this[-1]._padding_;
  if (this_00 != (longlong *)0x0) {
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  }
  this_01 = (param_1->ChildTask).field0_0x0.DebugPtr;
  EVar3 = param_1->TaskState;
  if ((this_01 != (UGameplayTask *)0x0) && (EVar3 == Finished)) {
    if (param_1->bOwnerFinished == 0) {
      UGameplayTask::EndTask(this_01);
    }
    else {
      UGameplayTask::TaskOwnerEnded(this_01);
    }
  }
  if (param_1->bTickingTask != 0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    plVar4 = (longlong *)this->_padding_;
    iVar8 = (int)this->_padding_;
    for (plVar13 = plVar4; plVar13 != plVar4 + iVar8; plVar13 = plVar13 + 1) {
      if ((UGameplayTask *)*plVar13 == param_1) {
        uVar12 = (uint)((longlong)plVar13 - (longlong)plVar4 >> 3);
        if (uVar12 != 0xffffffff) {
          uVar10 = 0;
          if ((int)(uVar12 + 1) <= iVar8) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar11 = (int)this->_padding_;
          iVar8 = iVar11 + ~uVar12;
          if (1 < iVar8) {
            iVar8 = 1;
          }
          if (iVar8 != 0) {
            memmove((void *)(this->_padding_ + (longlong)(int)uVar12 * 8),
                    (void *)(this->_padding_ + (longlong)(iVar11 - iVar8) * 8),(longlong)iVar8 << 3)
            ;
          }
          *(int *)&this->_padding_ = (int)this->_padding_ + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)&this->_padding_,(int)this->_padding_,
                     (int *)((longlong)&this->_padding_ + 4));
        }
        break;
      }
    }
  }
  if (EVar3 == Finished) {
    local_res8.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<UGameplayTask>,TSizedDefaultAllocator<32>_>::RemoveSwap
              ((TArray<TObjectPtr<UGameplayTask>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               (TObjectPtr<UGameplayTask> *)&local_res8.ObjectPtr,Default);
  }
  if (param_1->bSimulatedTask != 0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    plVar4 = (longlong *)this->_padding_;
    iVar8 = (int)this->_padding_;
    for (plVar13 = plVar4; plVar13 != plVar4 + iVar8; plVar13 = plVar13 + 1) {
      if ((UGameplayTask *)*plVar13 == param_1) {
        iVar11 = (int)((longlong)plVar13 - (longlong)plVar4 >> 3);
        if (iVar11 != -1) {
          memmove(plVar4 + iVar11,plVar4 + iVar11 + 1,(longlong)((iVar8 - iVar11) + -1) << 3);
          *(int *)&this->_padding_ = (int)this->_padding_ + -1;
          if ((this[-1].OnClaimedResourcesChange.field_0x10 & 0x40) != 0) {
            UActorComponent::RemoveReplicatedSubObject
                      ((UActorComponent *)this_00,(UObject *)param_1);
          }
        }
        break;
      }
    }
  }
  if ((((param_1->bCaresAboutPriority != 0) || ((param_1->RequiredResources).Flags != 0)) ||
      ((param_1->ClaimedResources).Flags != 0)) && (EVar3 == Finished)) {
    if (((param_1->bCaresAboutPriority == 0) && ((param_1->RequiredResources).Flags == 0)) &&
       (((param_1->ClaimedResources).Flags == 0 &&
        (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<3689787317158936741>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTasksComponent.cpp"
                            ,0xa5,"Task.RequiresPriorityOrResourceManagement() == true"), bVar6))))
    {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (FVisualLogger::bIsRecording != 0) {
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_48);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this_00,(FName *)&LogGameplayTasks.field_0x4,Log,
                 L"RemoveResourceConsumingTask %s");
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    plVar4 = &this->_padding_;
    local_58 = (FScriptContainerElement)0x1;
    pUStack_50 = param_1;
    if ((((FScriptContainerElement *)*plVar4 <= &local_58) &&
        (&local_58 <
         (FScriptContainerElement *)*plVar4 +
         (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)plVar4,piVar1);
    }
    *(int *)&this->_padding_ = iVar8 + 1;
    puVar2 = (undefined8 *)(*plVar4 + (longlong)iVar8 * 0x10);
    *puVar2 = CONCAT71(uStack_57,local_58);
    puVar2[1] = pUStack_50;
    if ((((int)this->_padding_ == 1) && ((this->_padding_ & 0x100000000) == 0)) &&
       ((int)this->_padding_ == 0)) {
      ProcessTaskEvents((UGameplayTasksComponent *)this_00);
    }
  }
  pIVar9 = UGameplayTask::GetTaskOwner(param_1);
  if (((param_1->bOwnedByTasksComponent == 0) && (-1 < (char)(param_1->bOwnerFinished << 7))) &&
     (pIVar9 != (IGameplayTaskOwnerInterface *)0x0)) {
    (**(code **)((longlong)*pIVar9 + 0x40))(pIVar9,param_1);
  }
  bVar7 = (**(code **)(*this_00 + 0x4f8))(this_00);
  if (((byte)this[-1].OnClaimedResourcesChange.field_0x12 >> 4 & 1) != bVar7) {
    (**(code **)(*this_00 + 0x2c8))(this_00,bVar7,0);
  }
  if (this_00 != (longlong *)0x0) {
    iVar8 = (int)this->_padding_ + -1;
    *(int *)&this->_padding_ = iVar8;
    if ((((int)this->_padding_ != 0) && ((this->_padding_ & 0x100000000) == 0)) && (iVar8 == 0)) {
      ProcessTaskEvents((UGameplayTasksComponent *)this_00);
    }
  }
  return;
}

// OnRep_SimulatedTasks @ 146cf5530

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UGameplayTasksComponent::OnRep_SimulatedTasks(UGameplayTasksComponent *this)

{
  int *piVar1;
  int *piVar2;
  TArray<TObjectPtr<UGameplayTask>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TWeakObjectPtr<UGameplayTask,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  FWeakObjectPtr *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  byte bVar11;
  int iVar12;
  UObject *pUVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FWeakObjectPtr *pFVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_58;
  UObject *local_50 [2];
  
  if ((this->_padding_ & 0x40) != 0) {
    pFVar16 = (FWeakObjectPtr *)(this->PreviousOnRepSimulatedTasks).AllocatorInstance.Data;
    iVar7 = (this->PreviousOnRepSimulatedTasks).ArrayNum;
    pFVar5 = pFVar16 + iVar7;
    while( true ) {
      if ((this->PreviousOnRepSimulatedTasks).ArrayNum != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UGameplayTask,FWeakObjectPtr>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar16 == pFVar5) break;
      local_res20 = *pFVar16;
      pUVar13 = FWeakObjectPtr::Get(&local_res20);
      if (pUVar13 == (UObject *)0x0) {
LAB_146cf560d:
        pFVar16 = pFVar16 + 1;
      }
      else {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        pFVar8 = (this->SimulatedTasks).AllocatorInstance.Data;
        pFVar14 = pFVar8;
        if (pFVar8 == pFVar8 + (longlong)(this->SimulatedTasks).ArrayNum * 8) {
LAB_146cf5602:
          UActorComponent::RemoveReplicatedSubObject((UActorComponent *)this,pUVar13);
          goto LAB_146cf560d;
        }
        do {
          if (*(UObject **)pFVar14 == pUVar13) {
            if ((int)((longlong)pFVar14 - (longlong)pFVar8 >> 3) != -1) goto LAB_146cf560d;
            goto LAB_146cf5602;
          }
          pFVar14 = pFVar14 + 8;
        } while (pFVar14 != pFVar8 + (longlong)(this->SimulatedTasks).ArrayNum * 8);
        UActorComponent::RemoveReplicatedSubObject((UActorComponent *)this,pUVar13);
        pFVar16 = pFVar16 + 1;
      }
    }
  }
  pFVar14 = (this->SimulatedTasks).AllocatorInstance.Data;
  iVar7 = (this->SimulatedTasks).ArrayNum;
  pFVar8 = pFVar14 + (longlong)iVar7 * 8;
  do {
    if ((this->SimulatedTasks).ArrayNum != iVar7) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UGameplayTask_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar14 == pFVar8) {
      pTVar4 = &this->PreviousOnRepSimulatedTasks;
      piVar1 = &(this->PreviousOnRepSimulatedTasks).ArrayMax;
      piVar2 = &(this->PreviousOnRepSimulatedTasks).ArrayNum;
      *piVar2 = 0;
      if ((this->PreviousOnRepSimulatedTasks).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&pTVar4->AllocatorInstance,0,piVar1);
      }
      if ((pTVar4 == (TArray<TWeakObjectPtr<UGameplayTask,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                      *)&this->SimulatedTasks) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar7 = (this->SimulatedTasks).ArrayNum;
      if (iVar7 != 0) {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,4,iVar7,&pTVar4->AllocatorInstance,piVar2,piVar1);
        ConstructItems<TWeakObjectPtr<UGameplayTask,FWeakObjectPtr>,TObjectPtr<UGameplayTask>,int>
                  ((pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 8,
                   (TObjectPtr<UGameplayTask> *)(this->SimulatedTasks).AllocatorInstance.Data,iVar7)
        ;
      }
      return;
    }
    pUVar13 = *(UObject **)pFVar14;
    if (pUVar13 != (UObject *)0x0) {
      if ((pUVar13[1].field_0x14 & 1) != 0) {
        pTVar3 = &this->TickingTasks;
        pFVar15 = (pTVar3->AllocatorInstance).Data;
        pFVar6 = pFVar15 + (longlong)(this->TickingTasks).ArrayNum * 8;
        for (; pFVar15 != pFVar6; pFVar15 = pFVar15 + 8) {
          if ((*(UObject **)pFVar15 != (UObject *)0x0) && (*(UObject **)pFVar15 == pUVar13))
          goto LAB_146cf57b5;
        }
        (**(code **)(*(longlong *)pUVar13 + 0x2b8))(pUVar13,this);
        local_58 = pUVar13;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        pFVar6 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 <
             pFVar6 + (longlong)(this->TickingTasks).ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar12 = (this->TickingTasks).ArrayNum;
        piVar1 = &(this->TickingTasks).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->TickingTasks).ArrayNum = iVar12 + 1;
        *(UObject **)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_58;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_58);
        }
        if (((this->TickingTasks).ArrayNum == 1) &&
           (bVar11 = (**(code **)(this->_padding_ + 0x4f8))(this),
           (*(byte *)((longlong)&this->_padding_ + 2) >> 4 & 1) != bVar11)) {
          (**(code **)(this->_padding_ + 0x2c8))(this,bVar11);
        }
      }
LAB_146cf57b5:
      if ((this->_padding_ & 0x40) != 0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        local_res18.ObjectIndex = 0;
        local_res18.ObjectSerialNumber = 0;
        local_50[0] = pUVar13;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_50);
        pFVar6 = (this->PreviousOnRepSimulatedTasks).AllocatorInstance.Data;
        iVar12 = (this->PreviousOnRepSimulatedTasks).ArrayNum;
        for (pFVar15 = pFVar6; pFVar15 != pFVar6 + (longlong)iVar12 * 8; pFVar15 = pFVar15 + 8) {
          bVar10 = TWeakObjectPtr<UGameplayTask,FWeakObjectPtr>::UEOpEquals<UGameplayTask,bool>
                             ((TWeakObjectPtr<UGameplayTask,FWeakObjectPtr> *)pFVar15,
                              (TWeakObjectPtr<UGameplayTask,FWeakObjectPtr> *)&local_res18);
          if (bVar10) {
            if ((int)((longlong)pFVar15 - (longlong)pFVar6 >> 3) != -1) goto LAB_146cf586c;
            break;
          }
        }
        UActorComponent::AddReplicatedSubObject((UActorComponent *)this,pUVar13,COND_SkipOwner);
      }
    }
LAB_146cf586c:
    pFVar14 = pFVar14 + 8;
  } while( true );
}

// OnTaskEnded @ 146cf5940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UGameplayTasksComponent::OnTaskEnded(UGameplayTasksComponent *this,UGameplayTask *param_1)

{
  int *piVar1;
  TArray<FGameplayTaskEventData,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName local_res8;
  FScriptContainerElement local_28;
  undefined7 uStack_27;
  UGameplayTask *pUStack_20;
  FString local_18;
  
  if ((((param_1->bCaresAboutPriority == 0) && ((param_1->RequiredResources).Flags == 0)) &&
      ((param_1->ClaimedResources).Flags == 0)) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3689787317158936741>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTasksComponent.cpp"
                         ,0xa5,"Task.RequiresPriorityOrResourceManagement() == true"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (FVisualLogger::bIsRecording != 0) {
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogGameplayTasks.field_0x4,Log,
               L"RemoveResourceConsumingTask %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pTVar2 = &this->TaskEvents;
  local_28 = (FScriptContainerElement)0x1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  pUStack_20 = param_1;
  if (((pFVar3 <= &local_28) && (&local_28 < pFVar3 + (longlong)(this->TaskEvents).ArrayMax * 0x10))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->TaskEvents).ArrayNum;
  piVar1 = &(this->TaskEvents).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TaskEvents).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar3 = CONCAT71(uStack_27,local_28);
  *(UGameplayTask **)(pFVar3 + 8) = pUStack_20;
  if ((((this->TaskEvents).ArrayNum == 1) && (this->bInEventProcessingInProgress == 0)) &&
     (this->EventLockCounter == 0)) {
    ProcessTaskEvents(this);
  }
  return;
}

// ProcessTaskEvents @ 146cf62b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTasksComponent::ProcessTaskEvents(UGameplayTasksComponent *this)

{
  FScriptContainerElement FVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  TArray<FGameplayTaskEventData,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  FName local_res10;
  FName local_res18;
  FString local_58;
  FString local_48;
  
  this->bInEventProcessingInProgress = '\x01';
  uVar14 = 0;
  iVar2 = (this->TaskEvents).ArrayNum;
  uVar10 = uVar14;
  do {
    if (iVar2 < 1) {
LAB_146cf680a:
      this->bInEventProcessingInProgress = '\0';
      return;
    }
    pTVar12 = &this->TaskEvents;
    uVar13 = (int)uVar10 + 1;
    if (0x10 < (int)uVar13) {
      if (FVisualLogger::bIsRecording != 0) {
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogGameplayTasks.field_0x4,Error,
                   L"UGameplayTasksComponent::ProcessTaskEvents has exceeded allowes number of iterations. Check your GameplayTasks for logic loops!"
                  );
      }
      (this->TaskEvents).ArrayNum = 0;
      if ((this->TaskEvents).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar12->AllocatorInstance,0,&(this->TaskEvents).ArrayMax);
      }
      goto LAB_146cf680a;
    }
    uVar10 = uVar14;
    uVar15 = uVar14;
    if (iVar2 != 0) {
      do {
        uVar9 = (uint)uVar10;
        uVar8 = 0;
        if (FVisualLogger::bIsRecording != 0) {
          uVar6 = 0;
          if ((int)uVar9 < (this->TaskEvents).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar6 = uVar8;
          if ((int)uVar9 < (this->TaskEvents).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_res10 = *(FName *)(*(longlong *)((pTVar12->AllocatorInstance).Data + uVar15 + 8) +
                                  0x18);
          ::FName::ToString(&local_res10,&local_58);
          FVisualLogger::CategorizedLogfImpl
                    ((UObject *)this,(FName *)&LogGameplayTasks.field_0x4,Verbose,
                     L"UGameplayTasksComponent::ProcessTaskEvents: %s event %s");
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        uVar11 = ~uVar9 >> 0x1f;
        uVar6 = uVar8;
        if ((int)uVar9 < (this->TaskEvents).ArrayNum) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = *(longlong *)((pTVar12->AllocatorInstance).Data + uVar15 + 8);
        uVar6 = 0;
        if ((lVar3 == 0) || ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0)) {
          if (FVisualLogger::bIsRecording != 0) {
            if ((int)uVar9 < (this->TaskEvents).ArrayNum) {
              uVar8 = uVar11;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_res18 = *(FName *)(*(longlong *)((pTVar12->AllocatorInstance).Data + uVar15 + 8) +
                                    0x18);
            ::FName::ToString(&local_res18,&local_48);
            FVisualLogger::CategorizedLogfImpl
                      ((UObject *)this,(FName *)&LogGameplayTasks.field_0x4,Verbose,L"%s is invalid"
                      );
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
LAB_146cf66dc:
          if ((int)uVar9 < (this->TaskEvents).ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          RemoveTaskFromPriorityQueue
                    (this,*(UGameplayTask **)((pTVar12->AllocatorInstance).Data + uVar15 + 8));
        }
        else {
          uVar7 = uVar6;
          if ((int)uVar9 < (this->TaskEvents).ArrayNum) {
            uVar7 = uVar11;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar1 = (pTVar12->AllocatorInstance).Data[uVar15];
          if (FVar1 == (FScriptContainerElement)0x0) {
            if ((int)uVar9 < (this->TaskEvents).ArrayNum) {
              uVar6 = uVar11;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (*(char *)(*(longlong *)((pTVar12->AllocatorInstance).Data + uVar15 + 8) + 0x39) ==
                '\x04') {
              if (FVisualLogger::bIsRecording != 0) {
                FVisualLogger::CategorizedLogfImpl
                          ((UObject *)this,(FName *)&LogGameplayTasks.field_0x4,Error,
                           L"UGameplayTasksComponent::ProcessTaskEvents trying to add a finished task to priority queue!"
                          );
              }
            }
            else {
              if ((int)uVar9 < (this->TaskEvents).ArrayNum) {
                uVar8 = uVar11;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              AddTaskToPriorityQueue
                        (this,*(UGameplayTask **)((pTVar12->AllocatorInstance).Data + uVar15 + 8));
            }
          }
          else {
            if (FVar1 == (FScriptContainerElement)0x1) goto LAB_146cf66dc;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTasksComponent.cpp"
                               ,0x1cd,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar15 = uVar15 + 0x10;
      } while ((int)(uVar9 + 1) < (this->TaskEvents).ArrayNum);
    }
    uVar10 = (ulonglong)uVar13;
    (this->TaskEvents).ArrayNum = 0;
    if ((this->TaskEvents).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->TaskEvents).AllocatorInstance,0,&(this->TaskEvents).ArrayMax);
    }
    UpdateTaskActivations(this);
    iVar2 = (this->TaskEvents).ArrayNum;
  } while( true );
}

// ReadyForReplication @ 146cf6a40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UGameplayTasksComponent::ReadyForReplication(UGameplayTasksComponent *this)

{
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FVisualLogger *this_00;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18 [2];
  FString local_48;
  FString local_38;
  
  UActorComponent::ReadyForReplication((UActorComponent *)this);
  pUVar5 = (UObject *)this->_padding_;
  this_00 = FVisualLogger::Get();
  SRWLock = &this_00->RedirectRWLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pUVar5 = FVisualLogger::RedirectInternal(this_00,(UObject *)this,pUVar5);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  if (((FVisualLogger::bIsRecording != 0) && (pUVar5 != (UObject *)0x0)) &&
     (FVisualLogger::bIsRecording != 0)) {
    local_res10.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
    local_res10.Number = *(uint *)&pUVar5->field_0x1c;
    ::FName::ToString(&local_res10,&local_38);
    local_res18[0] = (FName)this->_padding_;
    ::FName::ToString(local_res18,&local_48);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogVisual.field_0x4,Log,L"Redirected \'%s\' to \'%s\'");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((this->_padding_ & 0x40) != 0) {
    pFVar6 = (this->SimulatedTasks).AllocatorInstance.Data;
    iVar2 = (this->SimulatedTasks).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->SimulatedTasks).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UGameplayTask>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar1) break;
      if (*(UObject **)pFVar6 != (UObject *)0x0) {
        UActorComponent::AddReplicatedSubObject
                  ((UActorComponent *)this,*(UObject **)pFVar6,COND_SkipOwner);
      }
      pFVar6 = pFVar6 + 8;
    }
  }
  return;
}

// RemoveResourceConsumingTask @ 146cf6e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UGameplayTasksComponent::RemoveResourceConsumingTask
          (UGameplayTasksComponent *this,UGameplayTask *param_1)

{
  int *piVar1;
  TArray<FGameplayTaskEventData,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName local_res8;
  FScriptContainerElement local_28;
  undefined7 uStack_27;
  UGameplayTask *pUStack_20;
  FString local_18;
  
  if (FVisualLogger::bIsRecording != 0) {
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this,(FName *)&LogGameplayTasks.field_0x4,Log,
               L"RemoveResourceConsumingTask %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pTVar2 = &this->TaskEvents;
  local_28 = (FScriptContainerElement)0x1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  pUStack_20 = param_1;
  if (((pFVar3 <= &local_28) && (&local_28 < pFVar3 + (longlong)(this->TaskEvents).ArrayMax * 0x10))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->TaskEvents).ArrayNum;
  piVar1 = &(this->TaskEvents).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TaskEvents).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar3 = CONCAT71(uStack_27,local_28);
  *(UGameplayTask **)(pFVar3 + 8) = pUStack_20;
  if ((((this->TaskEvents).ArrayNum == 1) && (this->bInEventProcessingInProgress == 0)) &&
     (this->EventLockCounter == 0)) {
    ProcessTaskEvents(this);
  }
  return;
}

// RemoveSimulatedTask @ 146cf6f80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGameplayTasksComponent::RemoveSimulatedTask(UGameplayTasksComponent *this,UGameplayTask *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UGameplayTask *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (this->SimulatedTasks).AllocatorInstance.Data;
  iVar2 = (this->SimulatedTasks).ArrayNum;
  pFVar5 = pFVar3;
  if (pFVar3 != pFVar3 + (longlong)iVar2 * 8) {
    while (*(UGameplayTask **)pFVar5 != param_1) {
      pFVar5 = pFVar5 + 8;
      if (pFVar5 == pFVar3 + (longlong)iVar2 * 8) {
        return;
      }
    }
    iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar3 >> 3);
    if (iVar4 != -1) {
      memmove(pFVar3 + (longlong)iVar4 * 8,pFVar3 + (longlong)iVar4 * 8 + 8,
              (longlong)((iVar2 - iVar4) + -1) << 3);
      piVar1 = &(this->SimulatedTasks).ArrayNum;
      *piVar1 = *piVar1 + -1;
      if ((this->_padding_ & 0x40) != 0) {
        UActorComponent::RemoveReplicatedSubObject((UActorComponent *)this,(UObject *)param_1);
      }
    }
  }
  return;
}

// RemoveTaskFromPriorityQueue @ 146cf7240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UGameplayTasksComponent::RemoveTaskFromPriorityQueue
          (UGameplayTasksComponent *this,UGameplayTask *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FName local_res8;
  FString local_18;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UGameplayTask *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->TaskPriorityQueue).AllocatorInstance.Data;
  iVar6 = (this->TaskPriorityQueue).ArrayNum;
  pFVar8 = pFVar2;
  do {
    if (pFVar8 == pFVar2 + (longlong)iVar6 * 8) {
LAB_146cf7293:
      if (FVisualLogger::bIsRecording != 0) {
        local_res8 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res8,&local_18);
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogGameplayTasks.field_0x4,Verbose,
                   L"RemoveTaskFromPriorityQueue for %s called, but it\'s not in the queue. Might have been already removed"
                  );
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      return;
    }
    if (*(UGameplayTask **)pFVar8 == param_1) {
      uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
      if (uVar7 != 0xffffffff) {
        uVar5 = 0;
        if ((int)uVar7 < iVar6) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->TaskPriorityQueue).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
        iVar6 = (this->TaskPriorityQueue).ArrayNum + ~uVar7;
        if (iVar6 != 0) {
          memmove(pFVar2,pFVar2 + 8,(longlong)iVar6 << 3);
        }
        piVar1 = &(this->TaskPriorityQueue).ArrayNum;
        *piVar1 = *piVar1 + -1;
        return;
      }
      goto LAB_146cf7293;
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// ReplicateSubobjects @ 146cf73a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UGameplayTasksComponent::ReplicateSubobjects
          (UGameplayTasksComponent *this,UActorChannel *param_1,FOutBunch *param_2,
          FReplicationFlags *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_38 [16];
  
  bVar4 = UActorChannel::CanIgnoreDeprecatedReplicateSubObjects();
  if (!bVar4) {
    bVar4 = UActorComponent::ReplicateSubobjects((UActorComponent *)this,param_1,param_2,param_3);
    if ((*(byte *)&param_3->field0_0x0 & 1) == 0) {
      pFVar6 = (this->SimulatedTasks).AllocatorInstance.Data;
      iVar2 = (this->SimulatedTasks).ArrayNum;
      pFVar1 = pFVar6 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->SimulatedTasks).ArrayNum != iVar2) {
          `TCheckedPointerIterator<UGameplayTask_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_38);
        }
        if (pFVar6 == pFVar1) break;
        pUVar3 = *(UObject **)pFVar6;
        if ((pUVar3 != (UObject *)0x0) && ((*(uint *)&pUVar3->field_0x8 >> 0x1e & 1) == 0)) {
          bVar5 = UActorChannel::ReplicateSubobject
                            (param_1,pUVar3,param_2,
                             *(FReplicationFlags *)&(param_3->field0_0x0)._s_0);
          bVar4 = (bool)(bVar4 | bVar5);
        }
        pFVar6 = pFVar6 + 8;
      }
    }
    return bVar4;
  }
  return false;
}

// RequestTicking @ 146cf7480

void __thiscall UGameplayTasksComponent::RequestTicking(UGameplayTasksComponent *this)

{
  if ((this->_padding_ & 0x100000) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146cf7491. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2c8))(this,1,0);
    return;
  }
  return;
}

// RunGameplayTask @ 146cf7690

EGameplayTaskRunResult __cdecl
UGameplayTasksComponent::RunGameplayTask
          (IGameplayTaskOwnerInterface *param_1,UGameplayTask *param_2,uchar param_3,
          FGameplayResourceSet param_4,FGameplayResourceSet param_5)

{
  EGameplayTaskState EVar1;
  IGameplayTaskOwnerInterface *pIVar2;
  EGameplayTaskRunResult EVar3;
  FText local_18;
  
  FText::FromString(&local_18,L"None");
  EVar1 = param_2->TaskState;
  if ((EVar1 == Paused) || (EVar1 == Active)) {
    pIVar2 = UGameplayTask::GetTaskOwner(param_2);
    if (pIVar2 == param_1) {
      EVar3 = (param_2->TaskState != Paused) + Success_Paused;
      goto LAB_146cf7732;
    }
  }
  else {
    if (EVar1 == Uninitialized) {
      UGameplayTask::InitTask(param_2,param_1,param_3);
    }
    (param_2->ClaimedResources).Flags = (param_2->ClaimedResources).Flags | param_5.Flags;
    (param_2->RequiredResources).Flags = (param_2->RequiredResources).Flags | param_4.Flags;
    UGameplayTask::ReadyForActivation(param_2);
    EVar1 = param_2->TaskState;
    if ((EVar1 == AwaitingActivation) || (EVar1 == Paused)) {
      EVar3 = Success_Paused;
      goto LAB_146cf7732;
    }
    if ((EVar1 == Active) || (EVar1 == Finished)) {
      EVar3 = Success_Active;
      goto LAB_146cf7732;
    }
  }
  EVar3 = Error;
LAB_146cf7732:
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return EVar3;
}

// SetCurrentlyClaimedResources @ 146cf7760

void __thiscall
UGameplayTasksComponent::SetCurrentlyClaimedResources
          (UGameplayTasksComponent *this,FGameplayResourceSet param_1)

{
  ushort uVar1;
  ushort local_res10;
  ushort local_res12;
  
  uVar1 = (this->CurrentlyClaimedResources).Flags;
  if (uVar1 != param_1.Flags) {
    (this->CurrentlyClaimedResources).Flags = param_1.Flags;
    local_res12 = ~param_1.Flags & uVar1;
    local_res10 = ~uVar1 & param_1.Flags;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnClaimedResourcesChange,&local_res10);
  }
  return;
}

// SetSimulatedTasks @ 146cf77c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGameplayTasksComponent::SetSimulatedTasks
          (UGameplayTasksComponent *this,
          TArray<UGameplayTask_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UGameplayTask>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  uint uVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  UObject *local_48 [2];
  
  if (((this->_padding_ & 0x40) == 0) || ((this->_padding_ & 0x10000000) == 0)) {
    iVar4 = param_1->ArrayNum;
    pFVar3 = (param_1->AllocatorInstance).Data;
    piVar1 = &(this->SimulatedTasks).ArrayMax;
    (this->SimulatedTasks).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,*piVar1,&(this->SimulatedTasks).AllocatorInstance,iVar4,piVar1);
    ConstructItems<TObjectPtr<UGameplayTask>,UGameplayTask_*,int>
              ((this->SimulatedTasks).AllocatorInstance.Data,(UGameplayTask **)pFVar3,iVar4);
    return;
  }
  pTVar2 = &this->SimulatedTasks;
  pFVar11 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->SimulatedTasks).ArrayNum;
  pFVar3 = pFVar11 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->SimulatedTasks).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UGameplayTask>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar3) break;
    if (*(UObject **)pFVar11 != (UObject *)0x0) {
      UActorComponent::RemoveReplicatedSubObject((UActorComponent *)this,*(UObject **)pFVar11);
    }
    pFVar11 = pFVar11 + 8;
  }
  uVar5 = param_1->ArrayNum;
  if (-1 < (int)uVar5) {
    piVar1 = &(this->SimulatedTasks).ArrayMax;
    (this->SimulatedTasks).ArrayNum = 0;
    if ((this->SimulatedTasks).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar5,&pTVar2->AllocatorInstance,0,piVar1);
    }
    pFVar11 = (param_1->AllocatorInstance).Data;
    iVar4 = param_1->ArrayNum;
    pFVar3 = pFVar11 + (longlong)iVar4 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UGameplayTask_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar11 == pFVar3) break;
      pUVar6 = *(UObject **)pFVar11;
      if (pUVar6 != (UObject *)0x0) {
        UActorComponent::AddReplicatedSubObject((UActorComponent *)this,pUVar6,COND_SkipOwner);
        local_48[0] = pUVar6;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        pFVar7 = (pTVar2->AllocatorInstance).Data;
        if ((pFVar7 <= (FScriptContainerElement *)local_48) &&
           ((FScriptContainerElement *)local_48 < pFVar7 + (longlong)*piVar1 * 8)) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        iVar10 = (this->SimulatedTasks).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->SimulatedTasks).ArrayNum = iVar10 + 1;
        *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_48[0];
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48[0] != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_48[0]);
        }
      }
      pFVar11 = pFVar11 + 8;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// SetSimulatedTasksNetDirty @ 146cf7a40

void __thiscall UGameplayTasksComponent::SetSimulatedTasksNetDirty(UGameplayTasksComponent *this)

{
  return;
}

// StaticRegisterNativesUGameplayTasksComponent @ 146cf7d40

void __cdecl UGameplayTasksComponent::StaticRegisterNativesUGameplayTasksComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UGameplayTasksComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 146cf7f70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UGameplayTasksComponent::TickComponent
          (UGameplayTasksComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_TickGameplayTasks> FVar14;
  FNameEntryId FVar15;
  FName FVar16;
  int iVar17;
  ForAnyElementType FVar18;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_68 [2];
  FName local_60;
  FName local_58;
  FName local_50;
  
  iVar17 = 0;
  FVar14 = StatPtr_STAT_TickGameplayTasks;
  if (StatPtr_STAT_TickGameplayTasks == (FThreadSafeStaticStat<FStat_STAT_TickGameplayTasks>)0x0) {
    pFVar13 = ::FName::FName(&local_58,"STAT_TickGameplayTasks");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_TickGameplayTasks>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TickGameplayTasks,*pFVar13,
                        L"TickGameplayTasks","STATGROUP_GameplayTasks","STATCAT_Advanced",
                        L"GameplayTasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar14;
  bVar5 = false;
  bVar7 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar10 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar10 == 0)) {
LAB_146cf80c8:
    bVar6 = false;
    FVar16 = local_50;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_68[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_68[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_60.ComparisonIndex.Value = FVar15.Value;
        local_60.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_60,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTasksComponent.cpp"
                   ,0x104);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146cf80c8;
    local_res8 = FVar15.Value;
    uStackX_c = uVar10;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar6 = true;
  }
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  iVar12 = (this->TickingTasks).ArrayNum;
  if (iVar12 != 0) {
    if (iVar12 == 1) {
      plVar3 = *(longlong **)(this->TickingTasks).AllocatorInstance.Data;
      if ((plVar3 != (longlong *)0x0) && ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0)) {
        (**(code **)(*plVar3 + 0x2c0))(plVar3,param_1);
        goto LAB_146cf82eb;
      }
    }
    else {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          atexit(`UGameplayTasksComponent::TickComponent'::__l9::
                 _dynamic_atexit_destructor_for__LocalTickingTasks__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      LocalTickingTasks.ArrayNum = 0;
      if ((LocalTickingTasks.ArrayMax < 0) && (LocalTickingTasks.ArrayMax != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&LocalTickingTasks.AllocatorInstance,0,&LocalTickingTasks.ArrayMax);
      }
      if (&this->TickingTasks ==
          (TArray<TObjectPtr<UGameplayTask>,TSizedDefaultAllocator<32>_> *)&LocalTickingTasks) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar12 = (this->TickingTasks).ArrayNum;
      if (iVar12 != 0) {
        iVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar12,&LocalTickingTasks.AllocatorInstance,
                            &LocalTickingTasks.ArrayNum,&LocalTickingTasks.ArrayMax);
        ConstructItems<UGameplayTask_*,TObjectPtr<UGameplayTask>,int>
                  (LocalTickingTasks.AllocatorInstance.Data + (longlong)iVar11 * 8,
                   (TObjectPtr<UGameplayTask> *)(this->TickingTasks).AllocatorInstance.Data,iVar12);
      }
      iVar12 = LocalTickingTasks.ArrayNum;
      pFVar2 = LocalTickingTasks.AllocatorInstance.Data + (longlong)LocalTickingTasks.ArrayNum * 8;
      FVar18.Data = LocalTickingTasks.AllocatorInstance.Data;
      while( true ) {
        if (LocalTickingTasks.ArrayNum != iVar12) {
          `TCheckedPointerIterator<UGameplayTask_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res8);
        }
        if (FVar18.Data == pFVar2) break;
        plVar3 = *(longlong **)FVar18.Data;
        if ((plVar3 != (longlong *)0x0) && ((*(uint *)(plVar3 + 1) >> 0x1e & 1) == 0)) {
          (**(code **)(*plVar3 + 0x2c0))(plVar3,param_1);
          iVar17 = iVar17 + 1;
        }
        FVar18.Data = FVar18.Data + 8;
      }
      if (iVar17 != 0) goto LAB_146cf82eb;
    }
  }
  piVar1 = &(this->TickingTasks).ArrayNum;
  iVar17 = *piVar1;
  if (iVar17 < 0) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,-iVar17,&(this->TickingTasks).AllocatorInstance,piVar1,
                        &(this->TickingTasks).ArrayMax);
    memset((this->TickingTasks).AllocatorInstance.Data + (longlong)iVar12 * 8,0,
           (longlong)-iVar17 << 3);
  }
  else if (0 < iVar17) {
    *piVar1 = *piVar1 - iVar17;
  }
  bVar9 = (**(code **)(this->_padding_ + 0x4f8))(this);
  if ((*(byte *)((longlong)&this->_padding_ + 2) >> 4 & 1) != bVar9) {
    (**(code **)(this->_padding_ + 0x2c8))(this,bVar9,0);
  }
LAB_146cf82eb:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  return;
}

// UpdateShouldTick @ 146cf8650

void __thiscall UGameplayTasksComponent::UpdateShouldTick(UGameplayTasksComponent *this)

{
  code *UNRECOVERED_JUMPTABLE;
  byte bVar1;
  
  bVar1 = (**(code **)(this->_padding_ + 0x4f8))();
  if ((*(byte *)((longlong)&this->_padding_ + 2) >> 4 & 1) != bVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x2c8);
                    /* WARNING: Could not recover jumptable at 0x000146cf868b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(this,bVar1,0,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// UpdateTaskActivations @ 146cf86a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTasksComponent::UpdateTaskActivations(UGameplayTasksComponent *this)

{
  char cVar1;
  EGameplayTaskState EVar2;
  ushort uVar3;
  ushort uVar4;
  longlong *plVar5;
  UGameplayTask *this_00;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  UObject *pUVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  ushort uVar15;
  ushort uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  bool bVar23;
  ushort local_res18;
  ushort local_res1a;
  longlong local_res20;
  undefined8 local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  
  iVar9 = (this->TaskPriorityQueue).ArrayNum;
  bVar23 = false;
  uVar15 = 0;
  if (0 < iVar9) {
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar9,&local_88,0,(int *)((longlong)&local_80 + 4));
    uVar21 = 0;
    uVar16 = 0;
    bVar23 = false;
    if (0 < (this->TaskPriorityQueue).ArrayNum) {
      local_res20 = 0;
      do {
        lVar14 = local_res20;
        uVar20 = ~uVar21 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar21 < (this->TaskPriorityQueue).ArrayNum) {
          uVar13 = uVar20;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(longlong *)((this->TaskPriorityQueue).AllocatorInstance.Data + lVar14) == 0) {
          bVar23 = true;
          if (FVisualLogger::bIsRecording != 0) {
            FVisualLogger::CategorizedLogfImpl
                      ((UObject *)this,(FName *)&LogGameplayTasks.field_0x4,Warning,
                       L"UpdateTaskActivations found null entry in task queue at index:%d!");
          }
        }
        else {
          uVar13 = 0;
          if ((int)uVar21 < (this->TaskPriorityQueue).ArrayNum) {
            uVar13 = uVar20;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar3 = *(ushort *)
                   (*(longlong *)((this->TaskPriorityQueue).AllocatorInstance.Data + lVar14) + 0x40)
          ;
          uVar13 = 0;
          if ((int)uVar21 < (this->TaskPriorityQueue).ArrayNum) {
            uVar13 = uVar20;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar9 = (this->TaskPriorityQueue).ArrayNum;
          uVar4 = *(ushort *)
                   (*(longlong *)((this->TaskPriorityQueue).AllocatorInstance.Data + lVar14) + 0x42)
          ;
          if ((uVar16 & uVar3) == 0) {
            uVar13 = 0;
            if ((int)uVar21 < iVar9) {
              uVar13 = uVar20;
            }
            if ((uVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_a8 = *(undefined8 *)
                        ((this->TaskPriorityQueue).AllocatorInstance.Data + local_res20);
            if (((local_88.Data <= (FScriptContainerElement *)&local_a8) &&
                ((FScriptContainerElement *)&local_a8 < local_88.Data + (longlong)local_80._4_4_ * 8
                )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar9 = (int)local_80;
            if ((int)local_80 == local_80._4_4_) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_88,(int *)((longlong)&local_80 + 4));
            }
            uVar15 = uVar15 | uVar4;
            local_80 = CONCAT44(local_80._4_4_,iVar9 + 1);
            uVar16 = uVar16 | uVar4;
            *(undefined8 *)(local_88.Data + (longlong)iVar9 * 8) = local_a8;
            lVar14 = local_res20;
          }
          else {
            uVar13 = 0;
            if ((int)uVar21 < iVar9) {
              uVar13 = uVar20;
            }
            if ((uVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            plVar5 = *(longlong **)((this->TaskPriorityQueue).AllocatorInstance.Data + local_res20);
            cVar1 = *(char *)((longlong)plVar5 + 0x39);
            if (cVar1 == '\0') {
              if (FVisualLogger::bIsRecording != 0) {
                local_98 = *(FName *)(plVar5 + 3);
                ::FName::ToString(&local_98,&local_68);
                pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(plVar5 + 0xb));
                FVisualLogger::CategorizedLogfImpl
                          (pUVar10,(FName *)&LogGameplayTasks.field_0x4,Error,
                           L"UGameplayTask::PauseInTaskQueue Task %s passed for pausing withouth having InitTask called on it!"
                          );
                FVar11.Data = local_68.Data.AllocatorInstance.Data;
LAB_146cf8ae0:
                if (FVar11.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar11.Data);
                }
              }
            }
            else if ((cVar1 != '\x01') && (cVar1 != '\x02')) {
              if (cVar1 == '\x03') {
                (**(code **)(*plVar5 + 0x2f8))(plVar5);
                uVar16 = uVar16 | uVar4;
                lVar14 = local_res20;
                goto LAB_146cf8b21;
              }
              if (cVar1 == '\x04') {
                if (FVisualLogger::bIsRecording != 0) {
                  local_a0 = *(FName *)(plVar5 + 3);
                  ::FName::ToString(&local_a0,&local_78);
                  pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(plVar5 + 0xb));
                  FVisualLogger::CategorizedLogfImpl
                            (pUVar10,(FName *)&LogGameplayTasks.field_0x4,Log,
                             L"UGameplayTask::PauseInTaskQueue Task %s being pause while already marked as Finished"
                            );
                  FVar11.Data = local_78.Data.AllocatorInstance.Data;
                  goto LAB_146cf8ae0;
                }
              }
              else {
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!\"Enclosing block should never be called\"",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTask.cpp"
                                   ,0x187,L"");
                if (bVar8) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
            }
            uVar16 = uVar16 | uVar4;
            lVar14 = local_res20;
          }
        }
LAB_146cf8b21:
        local_res20 = lVar14 + 8;
        uVar21 = uVar21 + 1;
      } while ((int)uVar21 < (this->TaskPriorityQueue).ArrayNum);
    }
    uVar12 = 0;
    uVar22 = uVar12;
    if (0 < (int)local_80) {
      do {
        uVar20 = (uint)uVar12;
        uVar13 = ~uVar20 >> 0x1f;
        uVar21 = 0;
        if ((int)uVar20 < (int)local_80) {
          uVar21 = uVar13;
        }
        if ((uVar21 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((*(longlong *)(local_88.Data + uVar22) != 0) &&
           ((*(uint *)(*(longlong *)(local_88.Data + uVar22) + 8) >> 0x1e & 1) == 0)) {
          uVar21 = 0;
          if ((int)uVar20 < (int)local_80) {
            uVar21 = uVar13;
          }
          if ((uVar21 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(char *)(*(longlong *)(local_88.Data + uVar22) + 0x39) != '\x04') {
            uVar21 = 0;
            if ((int)uVar20 < (int)local_80) {
              uVar21 = uVar13;
            }
            if ((uVar21 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            this_00 = *(UGameplayTask **)(local_88.Data + uVar22);
            EVar2 = this_00->TaskState;
            if (EVar2 == Uninitialized) {
              if (FVisualLogger::bIsRecording != 0) {
                local_90 = (FName)this_00->_padding_;
                ::FName::ToString(&local_90,&local_58);
                pUVar10 = FWeakObjectPtr::Get(&(this_00->TasksComponent).WeakPtr);
                FVisualLogger::CategorizedLogfImpl
                          (pUVar10,(FName *)&LogGameplayTasks.field_0x4,Error,
                           L"UGameplayTask::ActivateInTaskQueue Task %s passed for activation withouth having InitTask called on it!"
                          );
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
              }
            }
            else if (EVar2 == AwaitingActivation) {
LAB_146cf8cbd:
              UGameplayTask::PerformActivation(this_00);
            }
            else if (EVar2 == Paused) {
              (**(code **)(this_00->_padding_ + 0x300))(this_00);
            }
            else if (EVar2 != Active) {
              if (EVar2 == Finished) goto LAB_146cf8cbd;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTask.cpp"
                                 ,0x168,L"");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
          }
        }
        uVar12 = (ulonglong)(uVar20 + 1);
        uVar22 = uVar22 + 8;
      } while ((int)(uVar20 + 1) < (int)local_80);
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  uVar16 = (this->CurrentlyClaimedResources).Flags;
  if (uVar16 != uVar15) {
    (this->CurrentlyClaimedResources).Flags = uVar15;
    local_res1a = ~uVar15 & uVar16;
    local_res18 = ~uVar16 & uVar15;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnClaimedResourcesChange,&local_res18);
  }
  if ((bVar23) && (iVar9 = (this->TaskPriorityQueue).ArrayNum, iVar9 != 0)) {
    pFVar6 = (this->TaskPriorityQueue).AllocatorInstance.Data;
    iVar19 = 0;
    bVar23 = *(longlong *)pFVar6 != 0;
    lVar14 = 0;
    iVar17 = 0;
    do {
      iVar18 = iVar17;
      do {
        lVar14 = lVar14 + 1;
        iVar18 = iVar18 + 1;
        if (iVar9 <= lVar14) break;
      } while (bVar23 == (*(longlong *)(pFVar6 + lVar14 * 8) != 0));
      if (bVar23 != false) {
        if (iVar19 != iVar17) {
          memmove(pFVar6 + (longlong)iVar19 * 8,pFVar6 + (longlong)iVar17 * 8,
                  (longlong)(iVar18 - iVar17) << 3);
        }
        iVar19 = iVar19 + (iVar18 - iVar17);
      }
      bVar23 = (bool)(bVar23 ^ 1);
      iVar17 = iVar18;
    } while (lVar14 < iVar9);
    (this->TaskPriorityQueue).ArrayNum = iVar19;
  }
  return;
}

// ValidateGeneratedRepEnums @ 146cf8e40

void __thiscall
UGameplayTasksComponent::ValidateGeneratedRepEnums
          (UGameplayTasksComponent *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_SimulatedTasks,L"SimulatedTasks");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1->ArrayNum < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0x20);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  else {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  if (Name_SimulatedTasks != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\GameplayTasks\\UHT\\GameplayTasksComponent.gen.cpp"
                       ,0x1b8,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGameplayTasksComponent"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// _getUObject @ 146cf9140

UObject * __thiscall UGameplayTasksComponent::_getUObject(UGameplayTasksComponent *this)

{
  return (UObject *)&this[-1].OnClaimedResourcesChange.field_0x10;
}

// _getUObject`adjustor{152}' @ 146cf914c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGameplayTasksComponent::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall
UGameplayTasksComponent::_getUObject_adjustor_152__(UGameplayTasksComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGameplayTasksComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{160}' @ 146cf9160

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UGameplayTasksComponent::_getUObject`adjustor{160}' (void)const __ptr64 */

UObject * __thiscall
UGameplayTasksComponent::_getUObject_adjustor_160__(UGameplayTasksComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UGameplayTasksComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// execK2_RunGameplayTask @ 146cf9990

void __cdecl
UGameplayTasksComponent::execK2_RunGameplayTask(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar uVar2;
  UGameplayTask *pUVar3;
  TSubclassOf<UGameplayTaskResource> *pTVar4;
  int iVar5;
  EGameplayTaskRunResult EVar6;
  uchar local_res10 [8];
  UGameplayTask *local_res18;
  TSubclassOf<UGameplayTaskResource> *local_78;
  undefined8 local_70;
  TSubclassOf<UGameplayTaskResource> *local_68;
  undefined8 local_60;
  TArray<TSubclassOf<UGameplayTaskResource>,TSizedDefaultAllocator<32>_> local_58;
  TArray<TSubclassOf<UGameplayTaskResource>,TSizedDefaultAllocator<32>_> local_48;
  UObject *local_38;
  undefined8 uStack_30;
  UObject *local_28 [2];
  
  local_38 = (UObject *)0x0;
  uStack_30 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res18 = (UGameplayTask *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_68 = (TSubclassOf<UGameplayTaskResource> *)0x0;
  local_60 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78 = (TSubclassOf<UGameplayTaskResource> *)0x0;
  local_70 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar4 = local_78;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar5 = (int)local_70;
  local_58.ArrayNum = (int)local_70;
  if ((int)local_70 == 0) {
    local_58.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_70,0,&local_58.AllocatorInstance,(int)local_70,&local_58.ArrayMax);
    ConstructItems<TSubclassOf<UGameplayTaskResource>,TSubclassOf<UGameplayTaskResource>,int>
              (local_58.AllocatorInstance.Data,pTVar4,iVar5);
  }
  pTVar4 = local_68;
  iVar5 = (int)local_60;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = (int)local_60;
  if ((int)local_60 == 0) {
    local_48.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_60,0,&local_48.AllocatorInstance,(int)local_60,&local_48.ArrayMax);
    ConstructItems<TSubclassOf<UGameplayTaskResource>,TSubclassOf<UGameplayTaskResource>,int>
              (local_48.AllocatorInstance.Data,pTVar4,iVar5);
  }
  pUVar3 = local_res18;
  uVar2 = local_res10[0];
  local_28[0] = local_38;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_38);
  }
  local_28[1] = (UObject *)uStack_30;
  EVar6 = K2_RunGameplayTask((TScriptInterface<IGameplayTaskOwnerInterface> *)local_28,pUVar3,uVar2,
                             &local_48,&local_58);
  *(EGameplayTaskRunResult *)param_3 = EVar6;
  if (local_78 != (TSubclassOf<UGameplayTaskResource> *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != (TSubclassOf<UGameplayTaskResource> *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execOnRep_SimulatedTasks @ 146cf9c30

void __cdecl
UGameplayTasksComponent::execOnRep_SimulatedTasks(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnRep_SimulatedTasks((UGameplayTasksComponent *)param_1);
  return;
}


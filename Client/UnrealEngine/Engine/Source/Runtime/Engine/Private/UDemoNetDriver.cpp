// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 150

// StaticClass @ 147aa7e30

UClass * __cdecl UDemoNetDriver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDemoNetDriver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetDriver::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DemoNetDriver",
               &Z_Registration_Info_UClass_UDemoNetDriver.InnerSingleton,
               StaticRegisterNativesUDemoNetDriver,0x1720,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDemoNetDriver>,InternalVTableHelperCtorCaller<UDemoNetDriver>,
               local_res8,UNetDriver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDemoNetDriver.InnerSingleton;
}

// UDemoNetDriver @ 147abd490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDemoNetDriver * __thiscall
UDemoNetDriver::UDemoNetDriver(UDemoNetDriver *this,FVTableHelper *param_1)

{
  UNetDriver::UNetDriver((UNetDriver *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  (this->ReplayStreamer).Object = (INetworkReplayStreamer *)0x0;
  (this->ReplayStreamer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->RollbackNetStartupActors = 0;
  *(undefined8 *)&(this->RollbackNetStartupActors).field_0x8 = 0;
  *(undefined8 *)&(this->RollbackNetStartupActors).field_0x20 = 0;
  *(undefined4 *)&(this->RollbackNetStartupActors).field_0x28 = 0;
  *(undefined4 *)&(this->RollbackNetStartupActors).field_0x2c = 0x80;
  *(undefined4 *)&(this->RollbackNetStartupActors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RollbackNetStartupActors).field_0x34 = 0;
  *(undefined8 *)&(this->RollbackNetStartupActors).field_0x40 = 0;
  *(undefined4 *)&(this->RollbackNetStartupActors).field_0x48 = 0;
  (this->PlaybackDeltaCheckpointData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlaybackDeltaCheckpointData).ArrayNum = 0;
  (this->PlaybackDeltaCheckpointData).ArrayMax = 0;
  (this->PlaylistTracker).Object = (FReplayPlaylistTracker *)0x0;
  (this->PlaylistTracker).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PlaybackPackets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlaybackPackets).ArrayNum = 0;
  (this->PlaybackPackets).ArrayMax = 0;
  (this->PendingRecordFailure).bIsSet = false;
  (this->NonQueuedGUIDsForScrubbing).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonQueuedGUIDsForScrubbing).ArrayNum = 0;
  (this->NonQueuedGUIDsForScrubbing).ArrayMax = 0;
  (this->QueuedReplayTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedReplayTasks).ArrayNum = 0;
  (this->QueuedReplayTasks).ArrayMax = 0;
  (this->ActiveReplayTask).Object = (FQueuedReplayTask *)0x0;
  (this->ActiveReplayTask).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ActiveScrubReplayTask).Object = (FQueuedReplayTask *)0x0;
  (this->ActiveScrubReplayTask).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnGotoTimeDelegate_Transient = 0;
  *(undefined8 *)&(this->OnGotoTimeDelegate_Transient).field_0x8 = 0;
  *(undefined4 *)&(this->OnGotoTimeDelegate_Transient).field_0x10 = 0;
  (this->DemoSessionID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DemoSessionID).Data.ArrayNum = 0;
  (this->DemoSessionID).Data.ArrayMax = 0;
  (this->ViewerOverride).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PrioritizedActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrioritizedActors).ArrayNum = 0;
  (this->PrioritizedActors).ArrayMax = 0;
  (this->MulticastRecordOptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MulticastRecordOptions).ArrayNum = 0;
  (this->MulticastRecordOptions).ArrayMax = 0;
  (this->SpectatorControllers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpectatorControllers).ArrayNum = 0;
  (this->SpectatorControllers).ArrayMax = 0;
  (this->LevelIntervals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelIntervals).ArrayNum = 0;
  (this->LevelIntervals).ArrayMax = 0;
  *(undefined8 *)&(this->TrackedRewindActorsByGUID).Elements = 0;
  *(undefined8 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x34 = 0;
  (this->TrackedRewindActorsByGUID).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TrackedRewindActorsByGUID).HashSize = 0;
  (this->DelegateHandleActorPreDestroy).ID = 0;
  (this->QueuedPacketsBeforeTravel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedPacketsBeforeTravel).ArrayNum = 0;
  (this->QueuedPacketsBeforeTravel).ArrayMax = 0;
  (this->BudgetLogHelper).Ptr = (FDemoBudgetLogHelper *)0x0;
  this->LastReplayFrameFidelity = (TAtomic<float>)0x0;
  FReplayHelper::FReplayHelper(&this->ReplayHelper);
  this->bSkipStartupActorRollback = false;
  InitDefaults(this);
  return this;
}

// UDemoNetDriver @ 147abd660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDemoNetDriver * __thiscall
UDemoNetDriver::UDemoNetDriver(UDemoNetDriver *this,FObjectInitializer *param_1)

{
  UNetDriver::UNetDriver((UNetDriver *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  (this->ReplayStreamer).Object = (INetworkReplayStreamer *)0x0;
  (this->ReplayStreamer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->RollbackNetStartupActors = 0;
  *(undefined8 *)&(this->RollbackNetStartupActors).field_0x8 = 0;
  *(undefined8 *)&(this->RollbackNetStartupActors).field_0x20 = 0;
  *(undefined4 *)&(this->RollbackNetStartupActors).field_0x28 = 0;
  *(undefined4 *)&(this->RollbackNetStartupActors).field_0x2c = 0x80;
  *(undefined4 *)&(this->RollbackNetStartupActors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RollbackNetStartupActors).field_0x34 = 0;
  *(undefined8 *)&(this->RollbackNetStartupActors).field_0x40 = 0;
  *(undefined4 *)&(this->RollbackNetStartupActors).field_0x48 = 0;
  (this->PlaybackDeltaCheckpointData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlaybackDeltaCheckpointData).ArrayNum = 0;
  (this->PlaybackDeltaCheckpointData).ArrayMax = 0;
  (this->PlaylistTracker).Object = (FReplayPlaylistTracker *)0x0;
  (this->PlaylistTracker).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PlaybackPackets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlaybackPackets).ArrayNum = 0;
  (this->PlaybackPackets).ArrayMax = 0;
  (this->PendingRecordFailure).bIsSet = false;
  (this->NonQueuedGUIDsForScrubbing).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonQueuedGUIDsForScrubbing).ArrayNum = 0;
  (this->NonQueuedGUIDsForScrubbing).ArrayMax = 0;
  (this->QueuedReplayTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedReplayTasks).ArrayNum = 0;
  (this->QueuedReplayTasks).ArrayMax = 0;
  (this->ActiveReplayTask).Object = (FQueuedReplayTask *)0x0;
  (this->ActiveReplayTask).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ActiveScrubReplayTask).Object = (FQueuedReplayTask *)0x0;
  (this->ActiveScrubReplayTask).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnGotoTimeDelegate_Transient = 0;
  *(undefined8 *)&(this->OnGotoTimeDelegate_Transient).field_0x8 = 0;
  *(undefined4 *)&(this->OnGotoTimeDelegate_Transient).field_0x10 = 0;
  (this->DemoSessionID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DemoSessionID).Data.ArrayNum = 0;
  (this->DemoSessionID).Data.ArrayMax = 0;
  (this->ViewerOverride).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PrioritizedActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrioritizedActors).ArrayNum = 0;
  (this->PrioritizedActors).ArrayMax = 0;
  (this->MulticastRecordOptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MulticastRecordOptions).ArrayNum = 0;
  (this->MulticastRecordOptions).ArrayMax = 0;
  (this->SpectatorControllers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpectatorControllers).ArrayNum = 0;
  (this->SpectatorControllers).ArrayMax = 0;
  (this->LevelIntervals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelIntervals).ArrayNum = 0;
  (this->LevelIntervals).ArrayMax = 0;
  *(undefined8 *)&(this->TrackedRewindActorsByGUID).Elements = 0;
  *(undefined8 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x34 = 0;
  (this->TrackedRewindActorsByGUID).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TrackedRewindActorsByGUID).HashSize = 0;
  (this->DelegateHandleActorPreDestroy).ID = 0;
  (this->QueuedPacketsBeforeTravel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedPacketsBeforeTravel).ArrayNum = 0;
  (this->QueuedPacketsBeforeTravel).ArrayMax = 0;
  (this->BudgetLogHelper).Ptr = (FDemoBudgetLogHelper *)0x0;
  this->LastReplayFrameFidelity = (TAtomic<float>)0x0;
  FReplayHelper::FReplayHelper(&this->ReplayHelper);
  this->bSkipStartupActorRollback = false;
  InitDefaults(this);
  return this;
}

// ~UDemoNetDriver @ 147abf770

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::~UDemoNetDriver(UDemoNetDriver *this)

{
  FDemoBudgetLogHelper *pFVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  void *pvVar4;
  FString *pFVar5;
  longlong lVar6;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  FReplayHelper::~FReplayHelper(&this->ReplayHelper);
  pFVar1 = (this->BudgetLogHelper).Ptr;
  if (pFVar1 != (FDemoBudgetLogHelper *)0x0) {
    pFVar2 = (pFVar1->Identifier).Data.AllocatorInstance.Data;
    pFVar5 = &pFVar1->Identifier;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    lVar6 = 2;
    do {
      pFVar2 = pFVar5[-1].Data.AllocatorInstance.Data;
      pFVar5 = pFVar5 + -1;
      lVar6 = lVar6 + -1;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    } while (lVar6 != 0);
    ::operator_delete(pFVar1,0x50);
  }
  DestructItems<FQueuedDemoPacket,int>
            ((FQueuedDemoPacket *)(this->QueuedPacketsBeforeTravel).AllocatorInstance.Data,
             (this->QueuedPacketsBeforeTravel).ArrayNum);
  pFVar2 = (this->QueuedPacketsBeforeTravel).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->TrackedRewindActorsByGUID).HashSize = 0;
  FVar3 = (this->TrackedRewindActorsByGUID).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TrackedRewindActorsByGUID).Elements);
  pFVar2 = (this->LevelIntervals).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SpectatorControllers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FMulticastRecordOptions,int>
            ((FMulticastRecordOptions *)(this->MulticastRecordOptions).AllocatorInstance.Data,
             (this->MulticastRecordOptions).ArrayNum);
  pFVar2 = (this->MulticastRecordOptions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PrioritizedActors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DemoSessionID).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGotoTimeDelegate_Transient);
  pvVar4 = *(void **)&(this->OnGotoTimeDelegate_Transient).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGotoTimeDelegate_Transient);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveScrubReplayTask).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveReplayTask).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<FQueuedReplayTask,1>,int>
            ((TSharedRef<FQueuedReplayTask,1> *)(this->QueuedReplayTasks).AllocatorInstance.Data,
             (this->QueuedReplayTasks).ArrayNum);
  pFVar2 = (this->QueuedReplayTasks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NonQueuedGUIDsForScrubbing).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((this->PendingRecordFailure).bIsSet != false) {
    lVar6 = *(longlong *)&(this->PendingRecordFailure).TypedValue.field_0x28;
    if (lVar6 != 0) {
      (**(code **)(lVar6 + -0x10))(lVar6 + -0x10);
    }
    pvVar4 = *(void **)&(this->PendingRecordFailure).TypedValue.field_0x18;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
  }
  DestructItems<FPlaybackPacket,int>
            ((FPlaybackPacket *)(this->PlaybackPackets).AllocatorInstance.Data,
             (this->PlaybackPackets).ArrayNum);
  pFVar2 = (this->PlaybackPackets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PlaylistTracker).SharedReferenceCount.ReferenceController);
  DestructItems<TUniquePtr<FDeltaCheckpointData,TDefaultDelete<FDeltaCheckpointData>_>,int>
            ((TUniquePtr<FDeltaCheckpointData,TDefaultDelete<FDeltaCheckpointData>_> *)
             (this->PlaybackDeltaCheckpointData).AllocatorInstance.Data,
             (this->PlaybackDeltaCheckpointData).ArrayNum);
  pFVar2 = (this->PlaybackDeltaCheckpointData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->RollbackNetStartupActors).field_0x48 = 0;
  pvVar4 = *(void **)&(this->RollbackNetStartupActors).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FRollbackNetStartupActorInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FRollbackNetStartupActorInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FRollbackNetStartupActorInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RollbackNetStartupActors);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ReplayStreamer).SharedReferenceCount.ReferenceController);
  UNetDriver::~UNetDriver((UNetDriver *)this);
  return;
}

// operator() @ 147ac1810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UDemoNetDriver::DiffActorProperties'::__l2::<lambda_1>::operator()
          (void *this,FObjectReplicator *param_1)

{
  FReceivingRepState *pFVar1;
  TRepDataBufferBase<1,unsigned_char> TVar2;
  code *pcVar3;
  bool bVar4;
  TRepDataBufferBase<0,unsigned_char_const_> TVar5;
  
  TVar5.Data = (uchar *)param_1->ObjectPtr;
  if (((UObject *)TVar5.Data == (UObject *)0x0) &&
     (TVar5.Data = (uchar *)FWeakObjectPtr::Get(&(param_1->WeakObjectPtr).WeakPtr),
     (UObject *)TVar5.Data == (UObject *)0x0)) {
    return;
  }
  pFVar1 = (((param_1->RepState).Ptr)->ReceivingRepState).Ptr;
  TVar2.Data = (uchar *)(pFVar1->StaticBuffer).Buffer.AllocatorInstance.Data;
  if (((param_1->RepLayout).Object == (FRepLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRepLayout::DiffProperties<1,0>((param_1->RepLayout).Object,&pFVar1->RepNotifies,TVar2,TVar5,Sync)
  ;
  return;
}

// operator() @ 147ac2110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `UDemoNetDriver::TickDemoRecordFrame'::__l27::<lambda_2>::operator()(void *this)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  double *pdVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ForAnyElementType *pFVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  LARGE_INTEGER local_res8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  UObject *local_78;
  undefined1 local_70 [12];
  uint local_64;
  longlong local_60;
  uint local_58;
  int local_54;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Green,"UDemoNetDriver_PrioritizeDestroyedOrDormantActors");
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1917,"UDemoNetDriver_PrioritizeDestroyedOrDormantActors",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
               ,0x77d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1917);
  }
  pTVar8 = DemoNetDriverRecordingPrivate::CVarDemoDestructionInfoPriority.Ref;
  lVar15 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = (FWeakObjectPtr *)0x0;
  bVar9 = IsInParallelGameThread();
  if (!bVar9) {
    bVar9 = IsInGameThread();
    lVar11 = 4;
    if (!bVar9) goto LAB_147ac21ba;
  }
  lVar11 = lVar15;
LAB_147ac21ba:
  local_98 = *(undefined4 *)((longlong)pTVar8->ShadowedValue + lVar11);
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::TIterator::TIterator
            ((TIterator *)local_70,
             (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
             (*(longlong *)this + 0x1558));
  dVar7 = __real_4170000000000000;
  if (local_54 < *(int *)(local_60 + 0x18)) {
    do {
      lVar12 = *(longlong *)((longlong)this + 8);
      uVar2 = *(ulonglong *)(*(longlong *)local_70._0_8_ + (longlong)local_54 * 0x10);
      lVar11 = lVar15;
      if (*(int *)(lVar12 + 0x450) != *(int *)(lVar12 + 0x47c)) {
        lVar14 = lVar12 + 0x480;
        if (*(longlong *)(lVar12 + 0x488) != 0) {
          lVar14 = *(longlong *)(lVar12 + 0x488);
        }
        iVar10 = *(int *)(lVar14 + ((uVar2 >> 0x20) * 0x17 + uVar2 &
                                   (ulonglong)(*(int *)(lVar12 + 0x490) - 1)) * 4);
        if (iVar10 != -1) {
          do {
            lVar11 = *(longlong *)(lVar12 + 0x448) + (longlong)iVar10 * 0x18;
            if (*(ulonglong *)(*(longlong *)(lVar12 + 0x448) + (longlong)iVar10 * 0x18) == uVar2) {
              if (lVar11 != 0) goto LAB_147ac22b1;
              break;
            }
            iVar10 = *(int *)(lVar11 + 0x10);
            lVar11 = lVar15;
          } while (iVar10 != -1);
        }
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
LAB_147ac22b1:
      uStack_80 = *(FWeakObjectPtr **)(lVar11 + 8);
      if (*(char *)(*(longlong *)((longlong)this + 8) + 0xe3f) == '\0') {
        local_78 = (UObject *)0x0;
      }
      else {
        local_78 = FWeakObjectPtr::Get(uStack_80);
      }
      lVar11 = *(longlong *)((longlong)this + 8);
      pFVar13 = (ForAnyElementType *)(lVar11 + 0xbd8);
      if (((pFVar13->Data <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 <
           pFVar13->Data + (longlong)*(int *)(lVar11 + 0xbe4) * 0x28)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = *(int *)(lVar11 + 0xbe0);
      if (iVar10 == *(int *)(lVar11 + 0xbe4)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,pFVar13,(int *)(lVar11 + 0xbe4));
      }
      lVar12 = (longlong)iVar10;
      *(int *)(lVar11 + 0xbe0) = iVar10 + 1;
      pFVar3 = pFVar13->Data;
      *(ulonglong *)(pFVar3 + lVar12 * 0x28) = CONCAT44(uStack_94,local_98);
      *(undefined8 *)(pFVar3 + lVar12 * 0x28 + 8) = uStack_90;
      pFVar1 = pFVar3 + lVar12 * 0x28 + 0x10;
      *(undefined4 *)pFVar1 = (undefined4)uStack_88;
      *(undefined4 *)(pFVar1 + 4) = uStack_88._4_4_;
      *(undefined4 *)(pFVar1 + 8) = (undefined4)uStack_80;
      *(undefined4 *)(pFVar1 + 0xc) = uStack_80._4_4_;
      *(UObject **)(pFVar3 + lVar12 * 0x28 + 0x20) = local_78;
      pdVar4 = *(double **)((longlong)this + 0x10);
      if ((0.0 < pdVar4[2]) &&
         (QueryPerformanceCounter(&local_res8),
         dVar6 = ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7) -
                 pdVar4[1], *pdVar4 <= dVar6 && dVar6 != *pdVar4)) {
        if (5 < (byte)LogDemo._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
        }
        break;
      }
      local_58 = local_58 & ~local_64;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_70 + 8));
    } while (local_54 < *(int *)(local_60 + 0x18));
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// AddEvent @ 147ac47f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::AddEvent
          (UDemoNetDriver *this,FString *param_1,FString *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FReplayHelper::AddOrUpdateEvent(&this->ReplayHelper,&local_18,param_1,param_2,param_3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddNonQueuedActorForScrubbing @ 147ac4840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::AddNonQueuedActorForScrubbing(UDemoNetDriver *this,AActor *param_1)

{
  int *piVar1;
  TArray<FNetworkGUID,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *pTVar8;
  longlong *plVar9;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  undefined8 local_28 [2];
  
  lVar3 = *(longlong *)&this->field_0x100;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  pTVar8 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                   *)(lVar3 + 0x14d0),(TWeakObjectPtr<AActor_const_,FWeakObjectPtr>)local_res8);
  plVar9 = (longlong *)&pTVar8->field_0x8;
  if (pTVar8 == (TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  if ((plVar9 != (longlong *)0x0) && (*plVar9 != 0)) {
    local_28[0] = *(undefined8 *)(*plVar9 + 0x70);
    pTVar2 = &this->NonQueuedGUIDsForScrubbing;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 <
        pFVar4 + (longlong)(this->NonQueuedGUIDsForScrubbing).ArrayMax * 8)) {
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
    iVar7 = (this->NonQueuedGUIDsForScrubbing).ArrayNum;
    piVar1 = &(this->NonQueuedGUIDsForScrubbing).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->NonQueuedGUIDsForScrubbing).ArrayNum = iVar7 + 1;
    *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_28[0];
  }
  return;
}

// AddNonQueuedGUIDForScrubbing @ 147ac49b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::AddNonQueuedGUIDForScrubbing(UDemoNetDriver *this,FNetworkGUID param_1)

{
  int *piVar1;
  TArray<FNetworkGUID,TSizedDefaultAllocator<32>_> *pTVar2;
  FNetworkGUID_u_0 *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNetworkGUID_u_0 local_res10 [3];
  
  if (param_1.field0_0x0 != 0) {
    pTVar2 = &this->NonQueuedGUIDsForScrubbing;
    pFVar3 = (FNetworkGUID_u_0 *)(pTVar2->AllocatorInstance).Data;
    local_res10[0] = param_1.field0_0x0;
    if ((pFVar3 <= local_res10) &&
       (local_res10 < pFVar3 + (this->NonQueuedGUIDsForScrubbing).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->NonQueuedGUIDsForScrubbing).ArrayNum;
    piVar1 = &(this->NonQueuedGUIDsForScrubbing).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->NonQueuedGUIDsForScrubbing).ArrayNum = iVar6 + 1;
    *(FNetworkGUID_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10[0];
  }
  return;
}

// AddOrUpdateEvent @ 147ac4a80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::AddOrUpdateEvent
          (UDemoNetDriver *this,FString *param_1,FString *param_2,FString *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  FReplayHelper::AddOrUpdateEvent(&this->ReplayHelper,param_1,param_2,param_3,param_4);
  return;
}

// AddReplayTask @ 147ac5140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::AddReplayTask(UDemoNetDriver *this,FQueuedReplayTask *param_1)

{
  int *piVar1;
  int iVar2;
  FName *this_00;
  undefined1 local_res8 [8];
  FString local_18;
  
  if (5 < (byte)LogDemo._0_1_) {
    this_00 = (FName *)(**(code **)(param_1->_padding_ + 0x18))(param_1,local_res8);
    ::FName::ToString(this_00,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  iVar2 = (this->QueuedReplayTasks).ArrayNum;
  piVar1 = &(this->QueuedReplayTasks).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->QueuedReplayTasks).AllocatorInstance,piVar1);
  }
  (this->QueuedReplayTasks).ArrayNum = iVar2 + 1;
  TSharedRef<FQueuedReplayTask,1>::TSharedRef<FQueuedReplayTask,1><FQueuedReplayTask>
            ((TSharedRef<FQueuedReplayTask,1> *)
             ((this->QueuedReplayTasks).AllocatorInstance.Data + (longlong)iVar2 * 0x10),param_1);
  if (((this->QueuedReplayTasks).ArrayNum < 1) &&
     ((this->ActiveReplayTask).Object == (FQueuedReplayTask *)0x0)) {
    ProcessReplayTasks(this);
  }
  return;
}

// AddUserToReplay @ 147ac5b70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::AddUserToReplay(UDemoNetDriver *this,FString *param_1)

{
  INetworkReplayStreamer *pIVar1;
  
  pIVar1 = (this->ReplayHelper).ReplayStreamer.Object;
  if (pIVar1 != (INetworkReplayStreamer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ac5b7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar1->_padding_ + 0x180))();
    return;
  }
  return;
}

// AdjustConsiderTime @ 147ac5b90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::AdjustConsiderTime(UDemoNetDriver *this,float param_1)

{
  float fVar1;
  TConsoleVariableData<float> *pTVar2;
  TConsoleVariableData<float> *pTVar3;
  bool bVar4;
  longlong lVar5;
  FStaticBasicLogRecord *pFVar6;
  longlong lVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  pTVar3 = CVarDemoDecreaseRepPrioritizeThreshold.Ref;
  if (this->MaxDesiredRecordTimeMS <= 0.0) {
    return;
  }
  bVar4 = IsInParallelGameThread();
  lVar7 = 4;
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  pTVar2 = CVarDemoIncreaseRepPrioritizeThreshold.Ref;
  fVar8 = *(float *)((longlong)pTVar3->ShadowedValue + lVar5);
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  pTVar3 = CVarDemoMinimumRepPrioritizeTime.Ref;
  fVar12 = *(float *)((longlong)pTVar2->ShadowedValue + lVar5);
  fVar13 = fVar12;
  if (fVar12 <= fVar8) {
    fVar13 = fVar8;
  }
  if (fVar8 <= fVar12) {
    fVar12 = fVar8;
  }
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  pTVar2 = CVarDemoMaximumRepPrioritizeTime.Ref;
  fVar8 = *(float *)((longlong)pTVar3->ShadowedValue + lVar5);
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar7 = 0;
  }
  fVar11 = *(float *)((longlong)pTVar2->ShadowedValue + lVar7);
  fVar1 = fVar11;
  if (fVar8 <= fVar11) {
    fVar1 = fVar8;
  }
  if (fVar11 <= fVar8) {
    fVar11 = fVar8;
  }
  dVar10 = (double)fVar1;
  if (__real_3ff0000000000000 <= (double)fVar1) {
    dVar10 = __real_3ff0000000000000;
  }
  dVar9 = (double)fVar11;
  if (__real_3ff0000000000000 <= (double)fVar11) {
    dVar9 = __real_3ff0000000000000;
  }
  if (dVar10 <= __real_3fb999999999999a) {
    dVar10 = __real_3fb999999999999a;
  }
  if (dVar9 <= __real_3fb999999999999a) {
    dVar9 = __real_3fb999999999999a;
  }
  if (param_1 <= fVar13) {
    if ((fVar12 <= param_1) ||
       (this->RecordBuildConsiderAndPrioritizeTimeSlice =
             (__real_3f800000 - param_1) * __real_3f000000 *
             this->RecordBuildConsiderAndPrioritizeTimeSlice, (byte)LogDemo._0_1_ < 6))
    goto LAB_147ac5d40;
    pFVar6 = &::LOG_Static;
  }
  else {
    this->RecordBuildConsiderAndPrioritizeTimeSlice =
         this->RecordBuildConsiderAndPrioritizeTimeSlice + __real_3dcccccd;
    if ((byte)LogDemo._0_1_ < 6) goto LAB_147ac5d40;
    pFVar6 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<6>(pFVar6,(FLogCategoryBase *)&LogDemo);
LAB_147ac5d40:
  fVar8 = this->RecordBuildConsiderAndPrioritizeTimeSlice;
  if ((float)dVar9 <= this->RecordBuildConsiderAndPrioritizeTimeSlice) {
    fVar8 = (float)dVar9;
  }
  if (fVar8 <= (float)dVar10) {
    fVar8 = (float)dVar10;
  }
  this->RecordBuildConsiderAndPrioritizeTimeSlice = fVar8;
  return;
}

// BuildSortedLevelPriorityOnLevels @ 147ac8d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::BuildSortedLevelPriorityOnLevels
          (UDemoNetDriver *this,
          TArray<UDemoNetDriver::FDemoActorPriority,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UDemoNetDriver::FLevelnterval,TSizedDefaultAllocator<32>_> *param_2)

{
  TMap<ULevel_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULevel_const_*,int,0>_>
  *this_00;
  ULevel *pUVar1;
  undefined1 *puVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  FString *pFVar10;
  FLevelStatus *pFVar11;
  uint *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  ULevel *pUVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  undefined1 auStackY_f8 [32];
  FIdentityFunctor local_a8 [4];
  int local_a4;
  TPairInitializer<ULevel_const_*_&&,int_const_&> local_a0;
  longlong local_90;
  UDemoNetDriver *local_88;
  FScriptContainerElement *local_80;
  int **local_78;
  int *local_70;
  FString local_68;
  undefined4 local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  param_2->ArrayNum = 0;
  lVar14 = 4;
  local_88 = this;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  pTVar4 = DemoNetDriverRecordingPrivate::CVarDemoForcePersistentLevelPriority.Ref;
  pFVar19 = (param_1->AllocatorInstance).Data;
  lVar16 = (longlong)param_1->ArrayNum;
  local_80 = pFVar19;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar14 = 0;
  }
  local_a4 = *(int *)((longlong)pTVar4->ShadowedValue + lVar14);
  iVar20 = 0;
  lVar14 = 0;
  local_90 = lVar16;
  if (0 < lVar16) {
    do {
      pFVar19 = pFVar19 + lVar14 * 0x28;
      pUVar1 = *(ULevel **)(pFVar19 + 0x20);
      pFVar18 = pFVar19 + 0x20;
      if ((local_a4 == 0) || (*(longlong *)&this->field_0x1b8 == 0)) {
LAB_147ac8e21:
        local_58 = *(undefined4 *)pFVar19;
      }
      else {
        pUVar17 = *(ULevel **)(*(longlong *)&this->field_0x1b8 + 0x30);
        if (pUVar17 == (ULevel *)0x0) {
          bVar5 = pUVar1 == (ULevel *)0x0;
        }
        else {
          bVar5 = pUVar17 == pUVar1;
        }
        if (!bVar5) goto LAB_147ac8e21;
        local_58 = 0x7fffffff;
      }
      iStack_54 = iVar20;
      if (pUVar1 == (ULevel *)0x0) {
        iStack_4c = 0;
      }
      else {
        pUVar9 = Z_Construct_UClass_ULevel_NoRegister();
        iVar8 = (int)pUVar9->_padding_;
        if ((*(int *)(pUVar1->_padding_ + 0x38) < iVar8) ||
           (pUVar17 = pUVar1,
           (longlong *)
           *(undefined1 **)(*(longlong *)(pUVar1->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
           &pUVar9->_padding_)) {
          pUVar17 = (ULevel *)0x0;
        }
        this_00 = &(this->ReplayHelper).LevelStatusIndexByLevel;
        uVar6 = ((uint)((ulonglong)pUVar17 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar17 >> 4)) *
                -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        if (*(int *)&(this->ReplayHelper).LevelStatusIndexByLevel.field_0x8 !=
            *(int *)&(this->ReplayHelper).LevelStatusIndexByLevel.field_0x34) {
          puVar2 = *(undefined1 **)&(this->ReplayHelper).LevelStatusIndexByLevel.field_0x40;
          puVar13 = &(this->ReplayHelper).LevelStatusIndexByLevel.field_0x38;
          if (puVar2 != (undefined1 *)0x0) {
            puVar13 = puVar2;
          }
          iVar8 = *(int *)(puVar13 +
                          (ulonglong)
                          (*(int *)&(this->ReplayHelper).LevelStatusIndexByLevel.field_0x48 - 1U &
                          (uVar6 >> 0x10 ^ uVar6)) * 4);
          if (iVar8 != -1) {
            lVar16 = *(longlong *)&this_00->field_0x0;
            do {
              if (*(ULevel **)(lVar16 + (longlong)iVar8 * 0x18) == pUVar17) {
                if (((iVar8 != -1) && (lVar16 = lVar16 + (longlong)iVar8 * 0x18, lVar16 != 0)) &&
                   (puVar12 = (uint *)(lVar16 + 8), puVar12 != (uint *)0x0)) {
                  uVar6 = *puVar12;
                  uVar7 = 0;
                  if ((int)uVar6 < (this->ReplayHelper).AllLevelStatuses.ArrayNum) {
                    uVar7 = ~uVar6 >> 0x1f;
                  }
                  if ((uVar7 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pFVar11 = (FLevelStatus *)
                            ((this->ReplayHelper).AllLevelStatuses.AllocatorInstance.Data +
                            (longlong)(int)uVar6 * 0x18);
                  goto LAB_147ac8f51;
                }
                break;
              }
              iVar8 = *(int *)(lVar16 + 0x10 + (longlong)iVar8 * 0x18);
            } while (iVar8 != -1);
          }
        }
        pFVar10 = FReplayHelper::GetLevelPackageName(&local_68,pUVar17);
        pFVar11 = FReplayHelper::FindOrAddLevelStatus(&this->ReplayHelper,pFVar10);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        local_70 = &pFVar11->LevelIndex;
        local_78 = &local_a0.Value;
        local_a0.Value = (int *)pUVar17;
        TSet<TTuple<ULevel_const_*,int>,TDefaultMapHashableKeyFuncs<ULevel_const_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<ULevel_const_*_&&,int_const_&>_>
                  ((TSet<TTuple<ULevel_const_*,int>,TDefaultMapHashableKeyFuncs<ULevel_const_*,int,0>,FDefaultSetAllocator>
                    *)this_00,&local_a0,(bool *)&local_78);
LAB_147ac8f51:
        iStack_4c = pFVar11->LevelIndex + 1;
        lVar16 = local_90;
        this = local_88;
      }
      piVar15 = &param_2->ArrayMax;
      for (; (lVar14 < lVar16 && (*(ULevel **)pFVar18 == pUVar1)); pFVar18 = pFVar18 + 0x28) {
        iVar20 = iVar20 + 1;
        lVar14 = lVar14 + 1;
      }
      pFVar19 = (param_2->AllocatorInstance).Data;
      iStack_50 = iVar20 - iStack_54;
      if (((pFVar19 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar19 + (longlong)*piVar15 * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = param_2->ArrayNum;
      if (iVar8 == *piVar15) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&param_2->AllocatorInstance,piVar15);
      }
      pFVar19 = (param_2->AllocatorInstance).Data;
      param_2->ArrayNum = iVar8 + 1;
      pFVar19 = pFVar19 + (longlong)iVar8 * 0x10;
      *(ulonglong *)pFVar19 = CONCAT44(iStack_54,local_58);
      *(ulonglong *)(pFVar19 + 8) = CONCAT44(iStack_4c,iStack_50);
      pFVar19 = local_80;
    } while (lVar14 < lVar16);
  }
  AlgoImpl::
  IntroSortInternal<UDemoNetDriver::FLevelnterval,int,FIdentityFunctor,TDereferenceWrapper<UDemoNetDriver::FLevelnterval,_UDemoNetDriver::BuildSortedLevelPriorityOnLevels_::__l2::<lambda_1>_>_>
            ((FLevelnterval *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,local_a8[0],
             (<lambda_1> *)local_a8);
  return;
}

// CleanUpSplitscreenConnections @ 147aca3c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall UDemoNetDriver::CleanUpSplitscreenConnections(UDemoNetDriver *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  UNetConnection *this_00;
  UClass *pUVar5;
  UEnum *pUVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  UEnum *local_res8;
  FNetResult local_68;
  
  iVar8 = 0;
  pFVar7 = (this->SpectatorControllers).AllocatorInstance.Data;
  iVar2 = (this->SpectatorControllers).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->SpectatorControllers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<APlayerController>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar7 == pFVar1) break;
    lVar4 = *(longlong *)pFVar7;
    if ((lVar4 != 0) &&
       (this_00 = *(UNetConnection **)(lVar4 + 0x560), this_00 != (UNetConnection *)0x0)) {
      pUVar5 = Z_Construct_UClass_UChildConnection_NoRegister();
      iVar3 = (int)pUVar5->_padding_;
      if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar5->_padding_)) {
        iVar8 = iVar8 + 1;
        if (!param_1) {
          (this_00->OwningActor).field0_0x0.DebugPtr = (AActor *)0x0;
        }
        pUVar6 = StaticEnum<enum_ENetCloseResult>();
        local_68.Result = 0xe;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        local_68.ResultEnumObj.WeakPtr.ObjectIndex = 0;
        local_68.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
        local_res8 = pUVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        FWeakObjectPtr::operator=(&local_68.ResultEnumObj.WeakPtr,(FObjectPtr)&local_res8);
        local_68.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.ErrorContext.Data.ArrayNum = 0;
        local_68.ErrorContext.Data.ArrayMax = 0;
        local_68.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
        local_68.RawResultEnumObj = pUVar6;
        UNetConnection::Close(this_00,&local_68);
        if (local_68.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
          (**(code **)((longlong)local_68.NextResult + -0x10))
                    ((longlong)local_68.NextResult + -0x10);
        }
        if (local_68.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.ErrorContext.Data.AllocatorInstance.Data);
        }
        (**(code **)(this_00->_padding_ + 0x348))(this_00);
        *(undefined8 *)(lVar4 + 0x560) = 0;
      }
    }
    pFVar7 = pFVar7 + 8;
  }
  if (4 < (byte)LogDemo._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
  }
  return iVar8;
}

// CleanupOutstandingRewindActors @ 147aca5c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::CleanupOutstandingRewindActors(UDemoNetDriver *this)

{
  FWeakObjectPtr *this_00;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *pTVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  FNetworkGUID FVar6;
  code *pcVar7;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  AActor *pAVar13;
  UClass *pUVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  FNetworkGUID_u_0 *pFVar19;
  int iVar20;
  undefined1 *puVar21;
  int iVar22;
  uint *puVar23;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  FWeakObjectPtr local_res20;
  undefined4 uStack_ac;
  FNetworkGUID_u_0 *local_a8;
  FString local_a0;
  FString local_90;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  iVar20 = 0;
  if (*(longlong *)&this->field_0x1b8 != 0) {
    pTVar1 = &this->TrackedRewindActorsByGUID;
    iVar4 = *(int *)&(this->TrackedRewindActorsByGUID).Elements.field_0x28;
    puVar3 = &(this->TrackedRewindActorsByGUID).Elements.field_0x10;
    uVar10 = 1;
    iVar22 = 0;
    iVar11 = 0;
    if (iVar4 != 0) {
      puVar23 = *(uint **)&(this->TrackedRewindActorsByGUID).Elements.field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar3;
      }
      uVar18 = *puVar23;
      iVar22 = 0;
      while (uVar18 == 0) {
        iVar20 = iVar20 + 1;
        iVar22 = iVar22 + 0x20;
        iVar11 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_147aca67c;
        uVar18 = puVar23[iVar20];
      }
      uVar10 = ~(uVar18 - 1) & uVar18;
      uVar2 = (ulonglong)uVar10 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res10 = (int)lVar12;
      iVar11 = local_res10 + -1 + iVar22;
      if (iVar4 < iVar11) {
        iVar11 = iVar4;
      }
    }
LAB_147aca67c:
    uVar18 = *(uint *)&(this->TrackedRewindActorsByGUID).Elements.field_0x28;
    uVar17 = uVar18 & 0xffffffe0;
    TStack_78._padding_ = CONCAT44(uVar10,iVar20);
    TStack_78.CurrentBitIndex = iVar11;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar20 = (int)uVar18 >> 5;
    TStack_78._28_4_ = iVar11;
    TStack_78.BaseBitIndex = iVar22;
    uStack_58 = CONCAT44(uStack_ac,
                         *(int *)&(this->TrackedRewindActorsByGUID).Elements.field_0x8 -
                         *(int *)&(this->TrackedRewindActorsByGUID).Elements.field_0x34);
    local_80 = pTVar1;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
    if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar10 = *(uint *)&(this->TrackedRewindActorsByGUID).Elements.field_0x28;
    if (uVar18 != uVar10) {
      puVar5 = *(undefined1 **)&(this->TrackedRewindActorsByGUID).Elements.field_0x20;
      puVar21 = puVar3;
      if (puVar5 != (undefined1 *)0x0) {
        puVar21 = puVar5;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar20 * 4);
      while (uVar18 == 0) {
        iVar20 = iVar20 + 1;
        uVar17 = uVar17 + 0x20;
        uVar18 = uVar10;
        if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar20)
        goto LAB_147aca780;
        uVar18 = *(uint *)(puVar21 + (longlong)iVar20 * 4);
      }
      uVar2 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res18 = (int)lVar12;
      uVar18 = local_res18 + -1 + uVar17;
      if ((int)uVar10 < (int)uVar18) {
        uVar18 = uVar10;
      }
    }
LAB_147aca780:
    while( true ) {
      pTVar8 = local_80;
      if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
          (int)uStack_58) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_78.CurrentBitIndex == uVar18) &&
          (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar8 == pTVar1)
         ) break;
      pFVar19 = (FNetworkGUID_u_0 *)
                ((longlong)TStack_78.CurrentBitIndex * 0x10 + *(longlong *)&pTVar8->Elements);
      if ((*(longlong *)&this->field_0x1c8 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar12 = *(longlong *)&this->field_0x1c8;
      FVar6.field0_0x0 = (FNetworkGUID_u_0)pFVar19->ObjectId;
      if (*(int *)(lVar12 + 0x10) != *(int *)(lVar12 + 0x3c)) {
        lVar16 = lVar12 + 0x40;
        if (*(longlong *)(lVar12 + 0x48) != 0) {
          lVar16 = *(longlong *)(lVar12 + 0x48);
        }
        iVar20 = *(int *)(lVar16 + ((ulonglong)(*(int *)(lVar12 + 0x50) - 1) &
                                   ((ulonglong)FVar6.field0_0x0 >> 0x20) * 0x17 +
                                   (longlong)FVar6.field0_0x0) * 4);
        if (iVar20 != -1) {
          lVar12 = *(longlong *)(lVar12 + 8);
          do {
            if ((FNetworkGUID_u_0)((FNetworkGUID_u_0 *)((longlong)iVar20 * 0x40 + lVar12))->ObjectId
                == FVar6.field0_0x0) {
              if (((iVar20 != -1) && (lVar12 = (longlong)iVar20 * 0x40 + lVar12, lVar12 != 0)) &&
                 (this_00 = (FWeakObjectPtr *)(lVar12 + 8), this_00 != (FWeakObjectPtr *)0x0)) {
                pAVar13 = (AActor *)FWeakObjectPtr::Get(this_00);
                if (pAVar13 != (AActor *)0x0) {
                  pUVar14 = Z_Construct_UClass_AActor_NoRegister();
                  iVar20 = (int)pUVar14->_padding_;
                  if ((iVar20 <= *(int *)(pAVar13->_padding_ + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(pAVar13->_padding_ + 0x30) + (longlong)iVar20 * 8) ==
                      &pUVar14->_padding_)) {
                    UWorld::DestroyActor(*(UWorld **)&this->field_0x1b8,pAVar13,true,true);
                    if ((*(longlong *)&this->field_0x1c8 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar9)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    lVar16 = *(longlong *)&this->field_0x1c8;
                    local_res20 = *this_00;
                    if ((*(int *)(lVar16 + 0x60) == *(int *)(lVar16 + 0x8c)) ||
                       (iVar20 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                                 ::RemoveImpl<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                                           ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                                             *)(lVar16 + 0x58),
                                            local_res20.ObjectSerialNumber ^ local_res20.ObjectIndex
                                            ,(TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)
                                             &local_res20), iVar20 < 1)) {
                      local_a8 = pFVar19;
                      `UDemoNetDriver::CleanupOutstandingRewindActors'::__l15::<lambda_1>::
                      operator()(&local_a8);
                    }
                    if ((*(longlong *)&this->field_0x1c8 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar9)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
                    ::Remove((TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
                              *)(*(longlong *)&this->field_0x1c8 + 8),(FNetworkGUID *)pFVar19);
                    *(byte *)(lVar12 + 0x30) = *(byte *)(lVar12 + 0x30) & 0xfe;
                    goto LAB_147aca8a5;
                  }
                }
                if ((byte)LogDemo._0_1_ < 3) goto LAB_147aca8a5;
                ::FString::PrintfImpl(&local_a0,L"%llu");
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
                FVar15.Data = local_a0.Data.AllocatorInstance.Data;
                goto LAB_147aca89b;
              }
              break;
            }
            iVar20 = *(int *)((longlong)iVar20 * 0x40 + 0x38 + lVar12);
          } while (iVar20 != -1);
        }
      }
      if (2 < (byte)LogDemo._0_1_) {
        ::FString::PrintfImpl(&local_90,L"%llu");
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
        FVar15.Data = local_90.Data.AllocatorInstance.Data;
LAB_147aca89b:
        if (FVar15.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar15.Data);
        }
      }
LAB_147aca8a5:
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
  }
  pTVar1 = &this->TrackedRewindActorsByGUID;
  bVar9 = 1 < (this->TrackedRewindActorsByGUID).HashSize;
  if (!bVar9) {
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::UnhashElements(pTVar1);
  }
  iVar20 = *(int *)&(this->TrackedRewindActorsByGUID).Elements.field_0xc;
  *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x8 = 0;
  if (iVar20 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)pTVar1,0,
               (int *)&(this->TrackedRewindActorsByGUID).Elements.field_0xc);
  }
  *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x30 = 0xffffffff;
  iVar20 = *(int *)&(this->TrackedRewindActorsByGUID).Elements.field_0x2c;
  *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x28 = 0;
  if ((iVar20 < 0) || (0x80 < iVar20)) {
    *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->TrackedRewindActorsByGUID).Elements.field_0x10,0);
  }
  if (bVar9) {
    (this->TrackedRewindActorsByGUID).HashSize = 1;
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Rehash(pTVar1);
  }
  return;
}

// ClearReplayTasks @ 147acae40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::ClearReplayTasks(UDemoNetDriver *this)

{
  int *piVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  DestructItems<TSharedRef<FQueuedReplayTask,1>,int>
            ((TSharedRef<FQueuedReplayTask,1> *)(this->QueuedReplayTasks).AllocatorInstance.Data,
             (this->QueuedReplayTasks).ArrayNum);
  piVar1 = &(this->QueuedReplayTasks).ArrayMax;
  (this->QueuedReplayTasks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->QueuedReplayTasks).AllocatorInstance,0,piVar1);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ActiveReplayTask != (TSharedPtr<FQueuedReplayTask,1> *)&local_18) {
    (this->ActiveReplayTask).Object = (FQueuedReplayTask *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ActiveReplayTask).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// ComparePropertyState @ 147acb3c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::ComparePropertyState
          (UDemoNetDriver *this,
          TArray<FDemoSavedRepObjectState,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FWeakObjectPtr FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TRepDataBufferBase<0,unsigned_char> TVar6;
  bool bVar7;
  FWeakObjectPtr *this_00;
  FWeakObjectPtr *pFVar8;
  undefined1 local_res18 [16];
  
  bVar7 = false;
  bVar4 = IsRecording(this);
  if (bVar4) {
    this_00 = (FWeakObjectPtr *)(param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    pFVar8 = this_00 + (longlong)iVar1 * 7;
    bVar7 = false;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FDemoSavedRepObjectState_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (this_00 == pFVar8) break;
      TVar6.Data = (uchar *)FWeakObjectPtr::Get(this_00);
      if (TVar6.Data == (uchar *)0x0) {
        if (2 < (byte)LogDemo._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
        }
        bVar7 = true;
LAB_147acb4a9:
        this_00 = this_00 + 7;
      }
      else {
        FVar2 = this_00[3];
        if ((this_00[1] == (FWeakObjectPtr)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        bVar4 = FRepLayout::DiffProperties<0,1>
                          ((FRepLayout *)this_00[1],
                           (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)0x0,TVar6,
                           (TRepDataBufferBase<1,unsigned_char_const_>)FVar2,
                           IncludeConditionalProperties);
        if (!bVar4) goto LAB_147acb4a9;
        bVar7 = true;
        this_00 = this_00 + 7;
      }
    }
  }
  return bVar7;
}

// ConditionallyProcessPlaybackPackets @ 147acb5d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::ConditionallyProcessPlaybackPackets(UDemoNetDriver *this)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FPlaybackPacket *pFVar8;
  
  uVar2 = this->PlaybackPacketIndex;
  if (((int)uVar2 < 0) || ((this->PlaybackPackets).ArrayNum <= (int)uVar2)) {
    PauseChannels(this,true);
  }
  else {
    uVar7 = 0;
    if ((int)uVar2 < (this->PlaybackPackets).ArrayNum) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    pFVar8 = (FPlaybackPacket *)
             ((this->PlaybackPackets).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x20);
    pfVar1 = &(this->ReplayHelper).DemoCurrentTime;
    if (pFVar8->TimeSeconds < *pfVar1 || pFVar8->TimeSeconds == *pfVar1) {
      if ((double)pFVar8->LevelIndex != (double)(this->ReplayHelper).CurrentLevelIndex) {
        (**(code **)(**(longlong **)(*(longlong *)&this->field_0x1b8 + 0x230) + 0x358))();
        iVar3 = pFVar8->LevelIndex;
        (this->ReplayHelper).CurrentLevelIndex = iVar3;
        ProcessSeamlessTravel(this,iVar3);
        return false;
      }
      this->PlaybackPacketIndex = this->PlaybackPacketIndex + 1;
      bVar5 = ProcessPacket(this,pFVar8);
      return bVar5;
    }
  }
  return false;
}

// ConditionallyReadDemoFrameIntoPlaybackPackets @ 147acb6e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::ConditionallyReadDemoFrameIntoPlaybackPackets
          (UDemoNetDriver *this,FArchive *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  
  iVar3 = (this->PlaybackPackets).ArrayNum;
  if (0 < iVar3) {
    uVar7 = 0;
    if ((int)(iVar3 - 1U) < iVar3) {
      uVar7 = ~(iVar3 - 1U) >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    fVar1 = (this->ReplayHelper).DemoCurrentTime;
    fVar2 = *(float *)((this->PlaybackPackets).AllocatorInstance.Data +
                      (longlong)(this->PlaybackPackets).ArrayNum * 0x20 + -0x10);
    if ((fVar1 < fVar2) && (__real_40a00000 < fVar2 - fVar1)) {
      return false;
    }
  }
  bVar5 = FReplayHelper::ReadDemoFrame
                    (&this->ReplayHelper,*(UNetConnection **)&this->field_0x100,param_1,
                     &this->PlaybackPackets,false,this->MaxArchiveReadPos,(float *)0x0);
  return bVar5;
}

// ContinueListen @ 147acbd00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::ContinueListen(UDemoNetDriver *this,FURL *param_1)

{
  int *piVar1;
  code *pcVar2;
  TConsoleVariableData<float> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  
  bVar4 = IsRecording(this);
  if (bVar4) {
    if ((this->ReplayHelper).bPauseRecording != false) {
      (this->ReplayHelper).bPauseRecording = false;
      (this->ReplayHelper).CurrentLevelIndex =
           (int)((double)(this->ReplayHelper).CurrentLevelIndex + __real_3ff0000000000000);
      if (this->SpectatorController != (APlayerController *)0x0) {
        (this->SpectatorController->Player).field0_0x0.DebugPtr = (UPlayer *)0x0;
        UWorld::DestroyActor
                  (*(UWorld **)&this->field_0x1b8,(AActor *)this->SpectatorController,true,true);
        piVar1 = &(this->SpectatorControllers).ArrayMax;
        (this->SpectatorControllers).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->SpectatorControllers).AllocatorInstance,0,piVar1);
        }
        this->SpectatorController = (APlayerController *)0x0;
      }
      if (*(int *)&this->field_0x110 < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      SpawnDemoRecSpectator(this,(UNetConnection *)**(undefined8 **)&this->field_0x108,param_1);
      pTVar3 = CVarCheckpointUploadDelayInSeconds.Ref;
      bVar4 = IsInParallelGameThread();
      if (!bVar4) {
        bVar4 = IsInGameThread();
        if (!bVar4) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
        }
      }
      (this->ReplayHelper).LastCheckpointTime =
           (double)(float)((uint)pTVar3->ShadowedValue[0] ^ __xmm_80000000800000008000000080000000);
      return true;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7792372165998806236>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                       ,0x4dc,"IsRecordingPaused()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return false;
}

// DemoReplicateActor @ 147acfcc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::DemoReplicateActor
          (UDemoNetDriver *this,AActor *param_1,UNetConnection *param_2,bool param_3)

{
  bool bVar1;
  
  bVar1 = FReplayHelper::ReplicateActor(&this->ReplayHelper,param_1,param_2,param_3);
  return bVar1;
}

// DiffActorProperties @ 147ad03e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::DiffActorProperties(UDemoNetDriver *this,UActorChannel *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  TRepDataBufferBase<1,unsigned_char> TVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FObjectReplicator *pFVar10;
  UObject *pUVar11;
  UObject *pUVar12;
  TRepDataBufferBase<0,unsigned_char_const_> TVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((param_1 != (UActorChannel *)0x0) && ((param_1->Actor).field0_0x0.DebugPtr != (AActor *)0x0))
  {
    pFVar10 = UActorChannel::GetActorReplicationData(param_1);
    `UDemoNetDriver::DiffActorProperties'::__l2::<lambda_1>::operator()(local_res18,pFVar10);
    iVar17 = 0;
    puVar1 = &(param_1->ReplicationMap).field_0x10;
    iVar3 = *(int *)&(param_1->ReplicationMap).field_0x28;
    uVar8 = 1;
    iVar19 = 0;
    iVar9 = 0;
    if (iVar3 != 0) {
      puVar20 = *(uint **)&(param_1->ReplicationMap).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puVar1;
      }
      uVar16 = *puVar20;
      while (uVar16 == 0) {
        lVar14 = (longlong)iVar17;
        iVar19 = iVar19 + 0x20;
        iVar17 = iVar17 + 1;
        iVar9 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_147ad04bf;
        uVar16 = puVar20[lVar14 + 1];
      }
      uVar8 = -uVar16 & uVar16;
      uVar2 = (ulonglong)uVar8 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res20 = (int)lVar14;
      iVar9 = iVar19 + -1 + local_res20;
      if (iVar3 < iVar9) {
        iVar9 = iVar3;
      }
    }
LAB_147ad04bf:
    uVar16 = *(uint *)&(param_1->ReplicationMap).field_0x28;
    uVar15 = uVar16 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar8,iVar17);
    TStack_60.CurrentBitIndex = iVar9;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar16 >> 5;
    TStack_60._28_4_ = iVar9;
    TStack_60.BaseBitIndex = iVar19;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(param_1->ReplicationMap).field_0x8 -
                         *(int *)&(param_1->ReplicationMap).field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = *(uint *)&(param_1->ReplicationMap).field_0x28;
    if (uVar16 != uVar8) {
      puVar18 = *(undefined1 **)&(param_1->ReplicationMap).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar1;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
      while (uVar16 == 0) {
        lVar14 = (longlong)iVar17;
        uVar15 = uVar15 + 0x20;
        iVar17 = iVar17 + 1;
        uVar16 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_147ad05c0;
        uVar16 = *(uint *)(puVar18 + lVar14 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar16 = (int)lVar14 + -1 + uVar15;
      if ((int)uVar8 < (int)uVar16) {
        uVar16 = uVar8;
      }
    }
LAB_147ad05c0:
    while( true ) {
      if (*(int *)&(param_1->ReplicationMap).field_0x8 -
          *(int *)&(param_1->ReplicationMap).field_0x34 != (int)uStack_40) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_60.CurrentBitIndex == uVar16) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      pUVar11 = pFVar10->ObjectPtr;
      lVar14 = *(longlong *)
                ((longlong)TStack_60.CurrentBitIndex * 0x20 + 8 +
                *(longlong *)&param_1->ReplicationMap);
      if (pUVar11 == (UObject *)0x0) {
        pUVar11 = FWeakObjectPtr::Get(&(pFVar10->WeakObjectPtr).WeakPtr);
      }
      pUVar12 = *(UObject **)(lVar14 + 0x48);
      if (pUVar12 == (UObject *)0x0) {
        pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar14 + 0xd8));
      }
      if ((pUVar11 != pUVar12) &&
         ((TVar13.Data = *(uchar **)(lVar14 + 0x48), TVar13.Data != (uchar *)0x0 ||
          (TVar13.Data = (uchar *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar14 + 0xd8)),
          (UObject *)TVar13.Data != (UObject *)0x0)))) {
        puVar4 = (undefined8 *)**(longlong **)(lVar14 + 0x30);
        TVar5.Data = (uchar *)*puVar4;
        if ((*(longlong *)(lVar14 + 0x20) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FRepLayout::DiffProperties<1,0>
                  (*(FRepLayout **)(lVar14 + 0x20),
                   (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)(puVar4 + 0xe),TVar5,TVar13,
                   Sync);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// DoesSupportEncryption @ 147ad0e50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::DoesSupportEncryption(UDemoNetDriver *this)

{
  return false;
}

// EnumerateEvents @ 147ad6550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::EnumerateEvents
          (UDemoNetDriver *this,FString *param_1,
          TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  INetworkReplayStreamer *pIVar1;
  
  pIVar1 = (this->ReplayHelper).ReplayStreamer.Object;
  if (pIVar1 != (INetworkReplayStreamer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ad655f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar1->_padding_ + 0xa8))();
    return;
  }
  return;
}

// EnumerateEventsForActiveReplay @ 147ad6570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::EnumerateEventsForActiveReplay
          (UDemoNetDriver *this,FString *param_1,
          TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  INetworkReplayStreamer *pIVar1;
  
  pIVar1 = (this->ReplayHelper).ReplayStreamer.Object;
  if (pIVar1 != (INetworkReplayStreamer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ad6592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar1->_padding_ + 0xa0))
              (pIVar1,&(this->ReplayHelper).ActiveReplayName,param_1,param_2);
    return;
  }
  return;
}

// EnumerateEventsForActiveReplay @ 147ad65a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::EnumerateEventsForActiveReplay
          (UDemoNetDriver *this,FString *param_1,int param_2,
          TDelegate<void___cdecl(FEnumerateEventsResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  INetworkReplayStreamer *pIVar1;
  
  pIVar1 = (this->ReplayHelper).ReplayStreamer.Object;
  if (pIVar1 != (INetworkReplayStreamer *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x98))
              (pIVar1,&(this->ReplayHelper).ActiveReplayName,param_1,param_2,param_3);
  }
  return;
}

// FastForwardLevels @ 147adafe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::FastForwardLevels(UDemoNetDriver *this,FGotoResult *param_1)

{
  TArray<TUniquePtr<FDeltaCheckpointData,TDefaultDelete<FDeltaCheckpointData>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  bool *pbVar2;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  undefined1 *puVar3;
  TSet<ULevel_*,DefaultKeyFuncs<ULevel_*,0>,FDefaultSetAllocator> *pTVar4;
  FNetworkGUID *pFVar5;
  int *piVar6;
  uint uVar7;
  INetworkReplayStreamer *pIVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  FWeakObjectPtr this_01;
  UObject *pUVar11;
  UChannel *this_02;
  UActorChannel *pUVar12;
  AActor *this_03;
  code *pcVar13;
  FReplayHelper *pFVar14;
  UDemoNetConnection *pUVar15;
  undefined8 uVar16;
  bool bVar17;
  undefined1 uVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  FNameEntryId FVar25;
  TStatId TVar26;
  FArchive *pFVar27;
  FName *pFVar28;
  UPackageMapClient *pUVar29;
  longlong lVar30;
  undefined8 *puVar31;
  longlong lVar32;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar33;
  FString *pFVar34;
  uint *puVar35;
  UNetConnection *pUVar36;
  TTuple<FNetworkGUID,UActorChannel_*> *pTVar37;
  ULevel *pUVar38;
  TArrayView<FPlaybackPacket,int> *pTVar39;
  undefined4 extraout_var;
  ulonglong uVar40;
  wchar_t *pwVar41;
  ForElementType<FSetElementId> FVar42;
  uint uVar43;
  uint uVar44;
  int iVar45;
  TReferenceControllerBase<1> *pTVar46;
  uint uVar47;
  FReplayHelper *pFVar48;
  longlong *plVar49;
  undefined8 *puVar50;
  ForAnyElementType FVar51;
  TBitArray<FDefaultBitArrayAllocator> *pTVar52;
  undefined1 auStackY_5a8 [32];
  undefined1 local_556;
  undefined1 local_555;
  undefined1 local_554;
  undefined1 local_553;
  undefined1 local_552;
  undefined1 local_551;
  undefined1 local_550 [8];
  ForAnyElementType local_548;
  undefined8 local_540;
  uint local_538 [2];
  ForAnyElementType local_530;
  undefined8 local_528;
  TBitArray<FDefaultBitArrayAllocator> *local_520;
  undefined1 local_518 [4];
  uint local_514;
  ulong64 local_510;
  FReplayHelper *local_508;
  FWeakObjectPtr local_500;
  FPlaybackPacket *local_4f8;
  int iStack_4f0;
  undefined4 uStack_4ec;
  UDemoNetConnection *local_4e8;
  undefined1 local_4e0 [8];
  TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_> local_4d8;
  UDemoNetDriver *local_4c8;
  float local_4c0;
  undefined8 local_4bc;
  undefined1 local_4b0 [16];
  FWeakObjectPtr local_4a0;
  FWeakObjectPtr local_498;
  FWeakObjectPtr local_490;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_488;
  UDemoNetConnection *local_478;
  int local_470;
  uint uStack_46c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_468;
  undefined1 local_460 [32];
  undefined4 local_440;
  int iStack_43c;
  int iStack_438;
  int iStack_434;
  FName local_430;
  byte local_428;
  FName local_420;
  UDemoNetDriver *local_418;
  ForAnyElementType local_410;
  longlong lStack_408;
  ForAnyElementType FStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  uint local_3e8;
  uint uStack_3e4;
  ULevel *local_3e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3d8;
  undefined4 local_3b8;
  int local_3b4;
  undefined1 local_3b0 [8];
  undefined8 local_3a8;
  int local_3a0;
  undefined1 local_39c [4];
  int local_398;
  int local_394;
  int local_390;
  FWeakObjectPtr local_388;
  ForAnyElementType local_380;
  UObject *local_378;
  AActor *local_370;
  FWeakObjectPtr local_368;
  double local_360;
  FSharedReferencer<1> FStack_358;
  TReferenceControllerBase<1> *local_350;
  FReplayHelper *local_348;
  undefined1 auStack_340 [20];
  uint uStack_32c;
  undefined8 local_328;
  undefined1 auStack_320 [16];
  undefined1 auStack_310 [8];
  TBitArray<FDefaultBitArrayAllocator> *local_308;
  ForAnyElementType FStack_300;
  undefined8 local_2f8;
  int iStack_2f0;
  TSet<ULevel_*,DefaultKeyFuncs<ULevel_*,0>,FDefaultSetAllocator> *local_2e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e0;
  ForAnyElementType FStack_2c0;
  FSourceLocation local_2b8;
  code *local_298;
  undefined1 *local_290;
  undefined1 local_288 [40];
  int local_260;
  undefined4 uStack_25c;
  FString local_250;
  FString local_240;
  TArrayView<FPlaybackPacket,int> local_228;
  FString local_218 [2];
  TArrayView<FPlaybackPacket,int> local_1f8;
  undefined1 local_1e8 [40];
  longlong local_1c0;
  undefined1 local_1b8 [40];
  longlong local_190;
  TArrayView<FPlaybackPacket,int> local_188;
  TSet<ULevel_*,DefaultKeyFuncs<ULevel_*,0>,FDefaultSetAllocator> local_178;
  undefined1 local_128 [40];
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  ForElementType<FSetElementId> local_e8;
  int local_e0;
  undefined1 local_d8 [40];
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  undefined1 local_88 [40];
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  bVar22 = false;
  local_4f8 = (FPlaybackPacket *)((ulonglong)local_4f8 & 0xffffffff00000000);
  local_418 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FThreadSafeStaticStatInner<`UDemoNetDriver::FastForwardLevels'::__l2::FStat_STAT_FastForwardLevelTime,1>
    ::GetStatId(&StatPtr_STAT_FastForwardLevelTime);
    _Init_thread_footer(&::_TSS0);
  }
  TVar26 = FThreadSafeStaticStatInner<`UDemoNetDriver::FastForwardLevels'::__l2::FStat_STAT_FastForwardLevelTime,1>
           ::GetStatId(&StatPtr_STAT_FastForwardLevelTime);
  local_2b8.Impl._Line = 0xe3f;
  local_2b8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp";
  local_2b8.Impl._Column = 2;
  local_2b8.Impl._Function =
       "bool __cdecl UDemoNetDriver::FastForwardLevels(const struct FGotoResult &)";
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_430,*(TStatIdData **)&(TVar26.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_2b8);
  pTVar46 = (this->ReplayStreamer).SharedReferenceCount.ReferenceController;
  pIVar8 = (this->ReplayStreamer).Object;
  if (pTVar46 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar46->SharedReferenceCount = (atomic<int>)((int)pTVar46->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pIVar8 == (INetworkReplayStreamer *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar13 = (code *)swi(3);
    uVar18 = (*pcVar13)();
    return (bool)uVar18;
  }
  pFVar27 = (FArchive *)(**(code **)(pIVar8->_padding_ + 0x28))(pIVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar46);
  PauseChannels(this,false);
  if ((this->QueuedReplayTasks).ArrayNum < 1) {
    pFVar28 = &local_420;
    local_420.ComparisonIndex.Value = 0;
    local_420.Number = 0;
  }
  else {
    plVar9 = *(longlong **)(this->QueuedReplayTasks).AllocatorInstance.Data;
    pFVar28 = (FName *)(**(code **)(*plVar9 + 0x18))(plVar9);
  }
  if (*pFVar28 == ReplayTaskNames::GotoTimeInSecondsTask) {
    local_360 = 0.0;
    FStack_358.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ActiveReplayTask != (TSharedPtr<FQueuedReplayTask,1> *)&local_360) {
      (this->ActiveReplayTask).Object = (FQueuedReplayTask *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ActiveReplayTask).SharedReferenceCount,&FStack_358);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_358.ReferenceController);
    bVar22 = false;
  }
  else {
    pFVar48 = &this->ReplayHelper;
    local_d8._0_8_ = (FScriptContainerElement *)0x0;
    local_d8._8_8_ = 0;
    local_d8._32_8_ = (ForElementType<unsigned_int>)0x0;
    local_b0 = 0;
    local_ac = 0x80;
    local_a8 = -1;
    local_a4 = 0;
    local_98 = (ForElementType<FSetElementId>)0x0;
    local_90 = 0;
    local_128._0_8_ = (FScriptContainerElement *)0x0;
    local_128._8_8_ = 0;
    local_128._32_8_ = (ForElementType<unsigned_int>)0x0;
    local_100 = 0;
    local_fc = 0x80;
    local_f8 = -1;
    local_f4 = 0;
    local_e8 = (ForElementType<FSetElementId>)0x0;
    local_e0 = 0;
    local_178.Elements._0_8_ = 0;
    local_178.Elements._8_8_ = 0;
    local_178.Elements._32_8_ = 0;
    local_178.Elements._40_4_ = 0;
    local_178.Elements._44_4_ = 0x80;
    local_178.Elements._48_4_ = 0xffffffff;
    local_178.Elements._52_4_ = 0;
    local_178.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_178.HashSize = 0;
    uVar43 = *(int *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0x8 -
             *(int *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0x34;
    local_508 = pFVar48;
    if (uVar43 != 0) {
      if ((int)uVar43 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar43);
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_d8,uVar43);
      if (uVar43 < 4) {
        iVar23 = 1;
      }
      else {
        uVar40 = (ulonglong)((uVar43 >> 1) + 7) * 2 + 1;
        lVar30 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        local_3a8._4_4_ = (undefined4)lVar30;
        iVar23 = 1 << ((byte)lVar30 & 0x1f);
      }
      if ((local_90 == 0) || (local_90 < iVar23)) {
        local_90 = iVar23;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_d8);
      }
    }
    uVar43 = *(int *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0x8 -
             *(int *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0x34;
    uVar44 = uVar43 * 4;
    if ((uint)(local_128._8_4_ - local_f4) < uVar44) {
      if ((int)(uVar43 * 4) < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar44);
      }
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_128,uVar44);
      if (uVar44 < 4) {
        iVar23 = 1;
      }
      else {
        uVar40 = (ulonglong)((uVar43 & 0x3fffffff) * 2 + 7) * 2 + 1;
        lVar30 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        local_3b8 = (undefined4)lVar30;
        iVar23 = 1 << ((byte)lVar30 & 0x1f);
      }
      if ((local_e0 == 0) || (local_e0 < iVar23)) {
        local_e0 = iVar23;
        TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  *)local_128);
      }
    }
    local_4c0 = this->LastProcessedPacketTime;
    local_4d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4d8.ArrayNum = 0;
    local_4d8.ArrayMax = 0;
    local_4bc = 0;
    local_4b0._0_8_ = 0;
    local_4b0[8] = '\0';
    local_4c8 = this;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Empty
              (&(this->ReplayHelper).PlaybackDeletedNetStartupActors,0);
    pTVar1 = &this->PlaybackDeltaCheckpointData;
    DestructItems<TUniquePtr<FDeltaCheckpointData,TDefaultDelete<FDeltaCheckpointData>_>,int>
              ((TUniquePtr<FDeltaCheckpointData,TDefaultDelete<FDeltaCheckpointData>_> *)
               (pTVar1->AllocatorInstance).Data,(this->PlaybackDeltaCheckpointData).ArrayNum);
    piVar6 = &(this->PlaybackDeltaCheckpointData).ArrayMax;
    (this->PlaybackDeltaCheckpointData).ArrayNum = 0;
    if (*piVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar1->AllocatorInstance,0,piVar6);
    }
    bVar17 = (this->ReplayHelper).bHasDeltaCheckpoints;
    local_548.Data = (FScriptContainerElement *)0x0;
    local_540 = 0;
    pUVar29 = Cast<UPackageMapClient,UPackageMap>
                        ((TObjectPtr<UPackageMap> *)(*(longlong *)&this->field_0x100 + 0x68));
    pbVar2 = &pUVar29->bIgnoreReceivedExportGUIDs;
    local_4f8 = ::operator_new(0x10);
    if (local_4f8 == (FPlaybackPacket *)0x0) {
      local_4f8 = (FPlaybackPacket *)0x0;
    }
    else {
      (local_4f8->Data).AllocatorInstance.Data = (FScriptContainerElement *)pbVar2;
      *(bool *)&(local_4f8->Data).ArrayNum = *pbVar2;
      *pbVar2 = true;
    }
    lVar30 = (**(code **)(*(longlong *)pFVar27 + 0x30))(pFVar27);
    if (lVar30 != 0) {
      FReplayHelper::SetPlaybackNetworkVersions(pFVar48,pFVar27);
      *(undefined8 *)&pFVar27->field_0x38 = 0x1000000;
      bVar20 = (this->ReplayHelper).bIsLoadingCheckpoint;
      (this->ReplayHelper).bIsLoadingCheckpoint = true;
      FReplayHelper::GetPlaybackReplayVersion(pFVar48);
      local_4e8 = (UDemoNetConnection *)&pFVar27->field_0x8;
      local_478 = local_4e8;
      do {
        pUVar15 = local_478;
        lVar30 = 0;
        if (bVar17 != false) {
          plVar9 = (longlong *)local_478->_padding_;
          local_538[0] = 0;
          if ((uint *)plVar9[1] < (uint *)*plVar9 + 1) {
            if ((pFVar27->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)pFVar27 + 0x188))(pFVar27,local_538,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(pFVar27,local_538);
            }
          }
          else {
            local_538[0] = *(uint *)*plVar9;
            *plVar9 = *plVar9 + 4;
          }
          uVar40 = (ulonglong)local_538[0];
          lVar30 = (**(code **)(*(longlong *)pFVar27 + 0x28))(pFVar27);
          lVar30 = lVar30 + uVar40;
          local_4e8 = pUVar15;
        }
        pUVar15 = local_4e8;
        local_520 = (TBitArray<FDefaultBitArrayAllocator> *)this->MaxArchiveReadPos;
        puVar50 = (undefined8 *)0x0;
        this->MaxArchiveReadPos = lVar30;
        local_510 = 0;
        plVar9 = (longlong *)local_4e8->_padding_;
        if ((ulong64 *)plVar9[1] < (ulong64 *)*plVar9 + 1) {
          if ((pFVar27->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar27 + 0x188))(pFVar27,&local_510,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar27,&local_510);
          }
        }
        else {
          local_510 = *(ulong64 *)*plVar9;
          *plVar9 = *plVar9 + 8;
        }
        lVar30 = (**(code **)(*(longlong *)pFVar27 + 0x28))(pFVar27);
        local_510 = local_510 + lVar30;
        plVar9 = (longlong *)pUVar15->_padding_;
        local_514 = 0xffffffff;
        if ((uint *)plVar9[1] < (uint *)*plVar9 + 1) {
          if ((pFVar27->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar27 + 0x188))(pFVar27,&local_514,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar27,&local_514);
          }
        }
        else {
          local_514 = *(uint *)*plVar9;
          *plVar9 = *plVar9 + 4;
        }
        if (bVar17 == false) {
          this_00 = &(this->ReplayHelper).PlaybackDeletedNetStartupActors;
          if ((this->ReplayHelper).PlaybackDeletedNetStartupActors.HashSize < 2) {
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(this_00);
            TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Empty(&this_00->Elements,0);
          }
          else {
            TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Empty(&this_00->Elements,0);
            (this->ReplayHelper).PlaybackDeletedNetStartupActors.HashSize = 1;
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(this_00);
          }
          FReplayHelper::ReadDeletedStartupActors
                    (&this->ReplayHelper,*(UNetConnection **)&this->field_0x100,pFVar27,this_00);
          (**(code **)(*(longlong *)pFVar27 + 0x1b8))(pFVar27,local_510);
          iVar23 = -1;
        }
        else {
          puVar31 = ::operator_new(0x100);
          if (puVar31 != (undefined8 *)0x0) {
            puVar31[4] = 0;
            puVar31[5] = 0;
            puVar31[9] = 0;
            puVar31[0xb] = 0;
            puVar31[0xe] = 0;
            puVar31[0xf] = 0;
            puVar31[0x13] = 0;
            puVar31[0x15] = 0;
            puVar31[0x18] = 0;
            puVar31[0x19] = 0;
            puVar31[0x1d] = 0;
            puVar31[0x1f] = 0;
            *puVar31 = 0;
            puVar31[1] = 0;
            puVar31[2] = 0;
            puVar31[3] = 0;
            puVar31[6] = 0;
            *(undefined4 *)(puVar31 + 7) = 0;
            *(undefined4 *)((longlong)puVar31 + 0x3c) = 0x80;
            *(undefined4 *)(puVar31 + 8) = 0xffffffff;
            *(undefined4 *)((longlong)puVar31 + 0x44) = 0;
            puVar31[10] = 0;
            puVar31[0xc] = 0;
            puVar31[0xd] = 0;
            puVar31[0x10] = 0;
            *(undefined4 *)(puVar31 + 0x11) = 0;
            *(undefined4 *)((longlong)puVar31 + 0x8c) = 0x80;
            *(undefined4 *)(puVar31 + 0x12) = 0xffffffff;
            *(undefined4 *)((longlong)puVar31 + 0x94) = 0;
            puVar31[0x14] = 0;
            puVar31[0x16] = 0;
            puVar31[0x17] = 0;
            puVar31[0x1a] = 0;
            *(undefined4 *)(puVar31 + 0x1b) = 0;
            *(undefined4 *)((longlong)puVar31 + 0xdc) = 0x80;
            *(undefined4 *)(puVar31 + 0x1c) = 0xffffffff;
            *(undefined4 *)((longlong)puVar31 + 0xe4) = 0;
            puVar31[0x1e] = 0;
            puVar50 = puVar31;
          }
          iVar23 = (this->PlaybackDeltaCheckpointData).ArrayNum;
          if (iVar23 == (this->PlaybackDeltaCheckpointData).ArrayMax) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar1->AllocatorInstance,
                                &(this->PlaybackDeltaCheckpointData).ArrayMax);
          }
          pFVar10 = (pTVar1->AllocatorInstance).Data;
          (this->PlaybackDeltaCheckpointData).ArrayNum = iVar23 + 1;
          lVar30 = (longlong)iVar23;
          *(undefined8 **)(pFVar10 + lVar30 * 8) = puVar50;
          FReplayHelper::ReadDeletedStartupActors
                    (&this->ReplayHelper,*(UNetConnection **)&this->field_0x100,pFVar27,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(puVar50 + 2))
          ;
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
          Append<FDefaultSetAllocator>
                    (&(this->ReplayHelper).PlaybackDeletedNetStartupActors,
                     (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                     (*(longlong *)(pFVar10 + lVar30 * 8) + 0x10));
          TSetPrivateFriend::
          Serialize<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>
                    (pFVar27,(TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>
                              *)(*(longlong *)(pFVar10 + lVar30 * 8) + 0x60));
          TSetPrivateFriend::
          Serialize<TTuple<FNetworkGUID,enum_EChannelCloseReason>,TDefaultMapHashableKeyFuncs<FNetworkGUID,enum_EChannelCloseReason,0>,FDefaultSetAllocator>
                    (pFVar27,(TSet<TTuple<FNetworkGUID,EChannelCloseReason>,TDefaultMapHashableKeyFuncs<FNetworkGUID,EChannelCloseReason,0>,FDefaultSetAllocator>
                              *)(*(longlong *)(pFVar10 + lVar30 * 8) + 0xb0));
          (**(code **)(*(longlong *)pFVar27 + 0x1b8))(pFVar27,local_510);
          iVar23 = local_4d8.ArrayNum;
        }
        local_4b0._0_8_ = (**(code **)(*(longlong *)pFVar27 + 0x28))(pFVar27);
        local_4bc._0_4_ = local_4d8.ArrayNum;
        bVar19 = FReplayHelper::ReadDemoFrame
                           (&local_4c8->ReplayHelper,*(UNetConnection **)&local_4c8->field_0x100,
                            pFVar27,&local_4d8,true,local_4c8->MaxArchiveReadPos,
                            (float *)((longlong)&local_4bc + 4));
        if (!bVar19) {
          local_4b0[8] = '\x01';
LAB_147adbaa8:
          if (2 < (byte)LogDemo._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
          }
          UE::Net::TNetResult<enum_EReplayResult>::TNetResult<enum_EReplayResult>(local_1e8,Unknown)
          ;
          FReplayHelper::NotifyReplayError
                    (&this->ReplayHelper,(TNetResult<EReplayResult> *)local_1e8);
          if (local_1c0 != 0) {
            (**(code **)(local_1c0 + -0x10))(local_1c0 + -0x10);
          }
          if ((void *)local_1e8._24_8_ != (void *)0x0) {
            FMemory::Free((void *)local_1e8._24_8_);
          }
          this->MaxArchiveReadPos = (long64)local_520;
          (this->ReplayHelper).bIsLoadingCheckpoint = bVar20;
          goto LAB_147adbbb7;
        }
        if (local_4c0 < local_4bc._4_4_) {
          (**(code **)(*(longlong *)pFVar27 + 0x1b8))(pFVar27);
          uVar43 = (uint)local_4bc;
          if ((uint)local_4bc == 0) {
            bVar19 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<7792372165998808692>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                                ,0xe74,"NumPackets != 0");
            if (bVar19) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
          }
          else {
            uVar47 = local_4d8.ArrayNum - (uint)local_4bc;
            uVar44 = 0;
            if ((int)(uVar47 + (uint)local_4bc) <= local_4d8.ArrayNum) {
              uVar44 = ~(uVar47 | (uint)local_4bc) >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar19)) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
            if (uVar47 != 0) {
              TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                        (&local_4d8,uVar43,uVar47);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,&local_4d8.AllocatorInstance,local_4d8.ArrayNum,&local_4d8.ArrayMax)
              ;
            }
          }
          if (local_4b0[8] != '\0') goto LAB_147adbaa8;
        }
        if (bVar17 != false) {
          iVar45 = local_4d8.ArrayNum + -1;
          if (iVar23 <= iVar45) {
            iVar24 = (int)local_540;
            if ((int)local_540 == local_540._4_4_) {
              iVar24 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_548,(int *)((longlong)&local_540 + 4));
            }
            local_540 = CONCAT44(local_540._4_4_,iVar24 + 1);
            *(int *)(local_548.Data + (longlong)iVar24 * 8) = iVar23;
            *(int *)(local_548.Data + (longlong)iVar24 * 8 + 4) = iVar45;
          }
        }
        this->MaxArchiveReadPos = (long64)local_520;
        if ((pFVar27->field_0x29 & 2) != 0) break;
        pcVar13 = *(code **)(*(longlong *)pFVar27 + 0x28);
        lVar30 = (**(code **)(*(longlong *)pFVar27 + 0x30))(pFVar27);
        lVar32 = (*pcVar13)(pFVar27);
      } while (lVar32 < lVar30);
      (this->ReplayHelper).bIsLoadingCheckpoint = bVar20;
    }
    pTVar46 = (this->ReplayStreamer).SharedReferenceCount.ReferenceController;
    pIVar8 = (this->ReplayStreamer).Object;
    if (pTVar46 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar46->SharedReferenceCount = (atomic<int>)((int)pTVar46->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar8 == (INetworkReplayStreamer *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar13 = (code *)swi(3);
      uVar18 = (*pcVar13)();
      return (bool)uVar18;
    }
    pFVar27 = (FArchive *)(**(code **)(pIVar8->_padding_ + 0x20))(pIVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar46);
    if ((pFVar27 == (FArchive *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("StreamingAr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                            ,0xeed,L""), bVar20)) {
      pcVar13 = (code *)swi(3);
      uVar18 = (*pcVar13)();
      return (bool)uVar18;
    }
    FReplayHelper::SetPlaybackNetworkVersions(&this->ReplayHelper,pFVar27);
    pTVar46 = local_350;
    iVar23 = -1;
    if (bVar17 != false) {
      iVar23 = local_4d8.ArrayNum;
    }
    do {
      cVar21 = (**(code **)(*(longlong *)pFVar27 + 0x38))(pFVar27);
      if (cVar21 == '\0') {
        pTVar46 = (this->ReplayStreamer).SharedReferenceCount.ReferenceController;
        bVar22 = true;
        pIVar8 = (this->ReplayStreamer).Object;
        if (pTVar46 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar46->SharedReferenceCount = (atomic<int>)((int)pTVar46->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pIVar8 == (INetworkReplayStreamer *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar20)) {
          pcVar13 = (code *)swi(3);
          uVar18 = (*pcVar13)();
          return (bool)uVar18;
        }
        cVar21 = (**(code **)(pIVar8->_padding_ + 0x68))(pIVar8);
        if ((cVar21 == '\0') ||
           (bVar20 = `UDemoNetDriver::FastForwardLevels'::__l2::FLocalReadPacketsHelper::ReadPackets
                               (&local_4d8,pFVar27), !bVar20)) goto LAB_147adbb2b;
        bVar20 = true;
      }
      else {
LAB_147adbb2b:
        bVar20 = false;
      }
      if (bVar22) {
        bVar22 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar46)
        ;
      }
    } while (bVar20);
    if (local_4b0[8] == '\0') {
      if (bVar17 != false) {
        iVar45 = local_4d8.ArrayNum + -1;
        if (iVar23 <= iVar45) {
          iVar24 = (int)local_540;
          if ((int)local_540 == local_540._4_4_) {
            iVar24 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_548,(int *)((longlong)&local_540 + 4));
          }
          local_540 = CONCAT44(local_540._4_4_,iVar24 + 1);
          *(int *)(local_548.Data + (longlong)iVar24 * 8) = iVar23;
          *(int *)(local_548.Data + (longlong)iVar24 * 8 + 4) = iVar45;
        }
      }
      if (local_4f8 != (FPlaybackPacket *)0x0) {
        *(local_4f8->Data).AllocatorInstance.Data =
             *(FScriptContainerElement *)&(local_4f8->Data).ArrayNum;
        ::operator_delete(local_4f8,0x10);
      }
      if ((local_4d8.ArrayNum < 1) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("ReadPacketsHelper.Packets.Num() > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                              ,0xf0b,L""), bVar22)) {
        pcVar13 = (code *)swi(3);
        uVar18 = (*pcVar13)();
        return (bool)uVar18;
      }
      bVar22 = this->bIsRestoringStartupActors;
      puVar3 = &(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0x10;
      this->bIsRestoringStartupActors = true;
      pTVar4 = &(this->ReplayHelper).LevelsPendingFastForward;
      local_3d8._padding_._0_4_ = 0;
      local_3d8._padding_._4_4_ = 1;
      local_3d8.UnvisitedBitMask = 0xffffffff;
      local_3d8.CurrentBitIndex = 0;
      local_3d8.BaseBitIndex = 0;
      local_3d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
      if (*(int *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3d8);
      }
      TStack_2e0._padding_ = CONCAT44(local_3d8._padding_._4_4_,(undefined4)local_3d8._padding_);
      TStack_2e0.CurrentBitIndex = local_3d8.CurrentBitIndex;
      TStack_2e0.UnvisitedBitMask = local_3d8.UnvisitedBitMask;
      TStack_2e0._28_4_ = local_3d8._28_4_;
      TStack_2e0.BaseBitIndex = local_3d8.BaseBitIndex;
      local_260 = *(int *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0x8 -
                  *(int *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0x34;
      local_288._16_8_ = local_3d8.Array;
      FStack_2c0.Data = (FScriptContainerElement *)CONCAT44(uStack_25c,local_260);
      TStack_2e0.Array = local_3d8.Array;
      local_2e8 = pTVar4;
      local_288._0_8_ = pTVar4;
      local_288._8_8_ = TStack_2e0._padding_;
      local_288._24_8_ = TStack_2e0._16_8_;
      local_288._32_8_ = TStack_2e0._24_8_;
      pTVar33 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_288,
                           (TBitArray<FDefaultBitArrayAllocator> *)puVar3,
                           *(int *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.
                                    field_0x28);
      lStack_408 = pTVar33->_padding_;
      local_520 = pTVar33->Array;
      uStack_3f0._0_4_ = pTVar33->BaseBitIndex;
      uStack_3f0._4_4_ = *(int *)&pTVar33->field_0x1c;
      uStack_3f8._4_4_ =
           (int)((ulonglong)*(FScriptContainerElement **)&pTVar33->UnvisitedBitMask >> 0x20);
      local_4f8 = (FPlaybackPacket *)CONCAT44(local_4f8._4_4_,uStack_3f8._4_4_);
      iVar23 = uStack_3f8._4_4_;
      FStack_400.Data = (FScriptContainerElement *)local_520;
      uStack_3f8 = *(FScriptContainerElement **)&pTVar33->UnvisitedBitMask;
      while( true ) {
        pTVar4 = local_2e8;
        uVar43 = 0;
        if (*(int *)&(local_2e8->Elements).field_0x8 - *(int *)&(local_2e8->Elements).field_0x34 !=
            (int)FStack_2c0.Data) {
          local_556 = 0;
          `TSparseArray<TSparseSetElement<ULevel_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_556);
        }
        if (((TStack_2e0.CurrentBitIndex == iVar23) && (TStack_2e0.Array == local_520)) &&
           (pTVar4 == &(this->ReplayHelper).LevelsPendingFastForward)) break;
        pUVar38 = *(ULevel **)
                   (*(longlong *)&pTVar4->Elements + (longlong)TStack_2e0.CurrentBitIndex * 0x10);
        local_3e0 = pUVar38;
        pFVar34 = FReplayHelper::GetLevelPackageName(&local_250,pUVar38);
        puVar35 = (uint *)TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                          ::FindChecked((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                                         *)&(this->ReplayHelper).LevelStatusesByName,pFVar34);
        uVar43 = *puVar35;
        uVar44 = 0;
        if ((int)uVar43 < (this->ReplayHelper).AllLevelStatuses.ArrayNum) {
          uVar44 = ~uVar43 >> 0x1f;
        }
        if ((uVar44 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          uVar18 = (*pcVar13)();
          return (bool)uVar18;
        }
        pFVar10 = (this->ReplayHelper).AllLevelStatuses.AllocatorInstance.Data;
        if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_250.Data.AllocatorInstance.Data);
        }
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_d8,&local_3b4,
                   (bool *)(pFVar10 + (longlong)(int)uVar43 * 0x18 + 0x10));
        pFVar10[(longlong)(int)uVar43 * 0x18 + 0x14] = (FScriptContainerElement)0x1;
        local_88._0_8_ = 0;
        local_88._8_8_ = 0;
        local_88._32_8_ = (ForElementType<FSetElementId>)0x0;
        local_60 = 0;
        local_5c = 0x80;
        local_58 = 0xffffffff;
        local_54 = 0;
        local_48 = (void *)0x0;
        local_40 = 0;
        pFVar48 = (FReplayHelper *)(pUVar38->Actors).AllocatorInstance.Data;
        iVar23 = (pUVar38->Actors).ArrayNum;
        local_508 = (FReplayHelper *)
                    (&(pFVar48->OnReplayRecordError).field_0x0 + (longlong)iVar23 * 8);
        while( true ) {
          pFVar14 = local_508;
          if ((pUVar38->Actors).ArrayNum != iVar23) {
            local_555 = 0;
            `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_555);
          }
          if (pFVar48 == pFVar14) break;
          this_01.ObjectIndex = *(int *)&(pFVar48->OnReplayRecordError).field_0x0;
          this_01.ObjectSerialNumber = *(int *)&(pFVar48->OnReplayRecordError).field_0x4;
          if ((this_01 == (FWeakObjectPtr)0x0) ||
             (bVar20 = AActor::IsNetStartupActor((AActor *)this_01), !bVar20)) {
LAB_147adc06b:
            pFVar48 = (FReplayHelper *)&(pFVar48->OnReplayRecordError).field_0x8;
          }
          else {
            pFVar34 = UObjectBaseUtility::GetFullName
                                ((UObjectBaseUtility *)this_01,&local_240,(UObject *)0x0,None);
            iVar45 = (pFVar34->Data).ArrayNum;
            if (iVar45 == 0) {
              pwVar41 = L"";
              iVar45 = 0;
            }
            else {
              pwVar41 = (wchar_t *)(pFVar34->Data).AllocatorInstance.Data;
              iVar45 = iVar45 + -1;
            }
            uVar43 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar45,pwVar41);
            iVar45 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                     FindIndexByHash<FString>
                               (&(this->ReplayHelper).PlaybackDeletedNetStartupActors,uVar43,pFVar34
                               );
            if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_240.Data.AllocatorInstance.Data);
            }
            if (iVar45 == -1) {
              pFVar34 = UObjectBaseUtility::GetFullName
                                  ((UObjectBaseUtility *)this_01,local_218,(UObject *)0x0,None);
              iVar45 = (pFVar34->Data).ArrayNum;
              if (iVar45 == 0) {
                pwVar41 = L"";
                iVar45 = 0;
              }
              else {
                pwVar41 = (wchar_t *)(pFVar34->Data).AllocatorInstance.Data;
                iVar45 = iVar45 + -1;
              }
              uVar43 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar45,pwVar41);
              iVar45 = TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<FString>
                                 ((TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
                                   *)&this->RollbackNetStartupActors,uVar43,pFVar34);
              if (local_218[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218[0].Data.AllocatorInstance.Data);
              }
              if (iVar45 == -1) {
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this_01);
                }
                local_490.ObjectIndex = 0;
                local_490.ObjectSerialNumber = 0;
                local_388 = this_01;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)this_01);
                }
                FWeakObjectPtr::operator=(&local_490,(FObjectPtr)&local_388);
                TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                ::Emplace<TWeakObjectPtr<AActor,FWeakObjectPtr>_>
                          ((TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                            *)local_128,(TWeakObjectPtr<AActor,FWeakObjectPtr> *)local_3b0,
                           (bool *)&local_490);
                goto LAB_147adc06b;
              }
            }
            else {
              (**(code **)(*(longlong *)this + 0x500))(this,this_01);
            }
            UWorld::DestroyActor(*(UWorld **)&this->field_0x1b8,(AActor *)this_01,true,true);
            pFVar48 = (FReplayHelper *)&(pFVar48->OnReplayRecordError).field_0x8;
          }
        }
        local_488.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_488.ArrayNum = 0;
        local_488.ArrayMax = 0;
        RespawnNecessaryNetStartupActors(this,&local_488,pUVar38);
        iVar23 = local_488.ArrayNum;
        uVar40 = (ulonglong)local_488.ArrayNum;
        pFVar10 = local_488.AllocatorInstance.Data + uVar40 * 8;
        FVar51.Data = local_488.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar40 != iVar23) {
            local_554 = 0;
            `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_554);
          }
          if (FVar51.Data == pFVar10) break;
          pUVar11 = *(UObject **)FVar51.Data;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar11);
          }
          local_498.ObjectIndex = 0;
          local_498.ObjectSerialNumber = 0;
          local_380.Data = (FScriptContainerElement *)pUVar11;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar11);
          }
          FWeakObjectPtr::operator=(&local_498,(FObjectPtr)&local_380);
          TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Emplace<TWeakObjectPtr<AActor,FWeakObjectPtr>_>
                    ((TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)local_128,(TWeakObjectPtr<AActor,FWeakObjectPtr> *)(local_3b0 + 4),
                     (bool *)&local_498);
          uVar40 = local_488._8_8_ & 0xffffffff;
          FVar51.Data = FVar51.Data + 8;
        }
        TSet<ULevel_*,DefaultKeyFuncs<ULevel_*,0>,FDefaultSetAllocator>::Emplace<ULevel_*_const_&>
                  (&local_178,(ULevel **)&local_3a8,(bool *)&local_3e0);
        if (local_488.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_488.AllocatorInstance.Data);
        }
        local_40 = 0;
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
        TSparseArray<TSparseSetElement<TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_88);
        TStack_2e0.UnvisitedBitMask = TStack_2e0.UnvisitedBitMask & ~TStack_2e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e0);
        iVar23 = (int)local_4f8;
      }
      pTVar4 = &(this->ReplayHelper).LevelsPendingFastForward;
      this->bIsRestoringStartupActors = bVar22;
      if (*(int *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0x8 !=
          *(int *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0x34) {
        TSet<ULevel_*,DefaultKeyFuncs<ULevel_*,0>,FDefaultSetAllocator>::UnhashElements(pTVar4);
        iVar23 = *(int *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0xc;
        *(undefined4 *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0x8 = 0;
        if (iVar23 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)pTVar4,0,
                     (int *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0xc);
        }
        *(undefined4 *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0x30 =
             0xffffffff;
        *(undefined4 *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0x34 = 0;
        *(undefined4 *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0x28 = 0;
      }
      bVar22 = this->bIsFastForwarding;
      this->bIsFastForwarding = true;
      pUVar11 = *(UObject **)&this->field_0x100;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar11);
      }
      local_500.ObjectIndex = 0;
      local_500.ObjectSerialNumber = 0;
      local_378 = pUVar11;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar11);
      }
      FWeakObjectPtr::operator=(&local_500,(FObjectPtr)&local_378);
      bVar20 = FWeakObjectPtr::IsValid(&local_500);
      if (bVar20) {
        pUVar36 = (UNetConnection *)FWeakObjectPtr::Get(&local_500);
        UNetConnection::SetAllowExistingChannelIndex(pUVar36,true);
      }
      if (bVar17 == false) {
        pTVar39 = TArrayView<FPlaybackPacket,int>::
                  TArrayView<FPlaybackPacket,int><TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_>_&,TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_>_>
                            (&local_188,&local_4d8);
        local_1f8.DataPtr = pTVar39->DataPtr;
        local_1f8.ArrayNum = pTVar39->ArrayNum;
        local_1f8._12_4_ = *(undefined4 *)&pTVar39->field_0xc;
        ProcessFastForwardPackets
                  (this,&local_1f8,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_d8
                  );
      }
      else {
        local_478 = CastChecked<UDemoNetConnection,UNetConnection>
                              ((TObjectPtr<UNetConnection> *)&this->field_0x100,NullChecked);
        if (0 < (int)local_540) {
          local_520 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
          local_4e8 = (UDemoNetConnection *)0x0;
          do {
            pUVar15 = local_4e8;
            pTVar52 = local_520;
            if ((-1 < (int)uVar43) && ((int)uVar43 < (this->PlaybackDeltaCheckpointData).ArrayNum))
            {
              uVar44 = 0;
              if ((int)uVar43 < (this->PlaybackDeltaCheckpointData).ArrayNum) {
                uVar44 = ~uVar43 >> 0x1f;
              }
              if ((uVar44 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar13 = (code *)swi(3);
                uVar18 = (*pcVar13)();
                return (bool)uVar18;
              }
              if ((*(longlong *)
                    ((this->PlaybackDeltaCheckpointData).AllocatorInstance.Data + (longlong)pUVar15)
                   == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("PlaybackDeltaCheckpointData[i].IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                                      ,0xf4b,L""), bVar17)) {
                pcVar13 = (code *)swi(3);
                uVar18 = (*pcVar13)();
                return (bool)uVar18;
              }
              uVar44 = 0;
              if ((int)uVar43 < (this->PlaybackDeltaCheckpointData).ArrayNum) {
                uVar44 = ~uVar43 >> 0x1f;
              }
              if ((uVar44 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar13 = (code *)swi(3);
                uVar18 = (*pcVar13)();
                return (bool)uVar18;
              }
              local_470 = 0;
              uStack_46c = 1;
              lVar30 = *(longlong *)
                        ((this->PlaybackDeltaCheckpointData).AllocatorInstance.Data +
                        (longlong)pTVar52 * 8);
              local_460._4_4_ = 0;
              local_460._8_4_ = 0;
              pTStack_468 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar30 + 0xc0);
              iVar23 = *(int *)(lVar30 + 0xd8);
              local_508 = (FReplayHelper *)(lVar30 + 0xb0);
              if (iVar23 != 0) {
                pTVar52 = pTStack_468;
                if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar30 + 0xd0) !=
                    (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                  pTVar52 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar30 + 0xd0);
                }
                uVar44 = *(uint *)(pTVar52->AllocatorInstance).InlineData;
                while (uVar44 == 0) {
                  local_460._8_4_ = local_460._8_4_ + 0x20;
                  lVar32 = (longlong)local_470;
                  local_470 = local_470 + 1;
                  if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < local_470)
                  goto LAB_147adc46e;
                  uVar44 = *(uint *)((pTVar52->AllocatorInstance).InlineData + lVar32 * 4 + 4);
                }
                uStack_46c = -uVar44 & uVar44;
                uVar40 = (ulonglong)uStack_46c * 2 + 1;
                lVar32 = 0x3f;
                if (uVar40 != 0) {
                  for (; uVar40 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                  }
                }
                local_390 = (int)lVar32;
                local_460._4_4_ = local_460._8_4_ + -1 + local_390;
                if (iVar23 < (int)local_460._4_4_) {
LAB_147adc46e:
                  local_460._4_4_ = iVar23;
                }
              }
              local_460._0_4_ = 0xffffffff;
              uVar44 = *(uint *)(lVar30 + 0xd8);
              local_3e8 = *(int *)(lVar30 + 0xb8) - *(int *)(lVar30 + 0xe4);
              lStack_408 = CONCAT44(uStack_46c,local_470);
              uStack_3f8 = (FScriptContainerElement *)CONCAT44(local_460._4_4_,0xffffffff);
              uStack_3f0._4_4_ = local_460._12_4_;
              uStack_3f0._0_4_ = local_460._8_4_;
              iVar23 = (int)uVar44 >> 5;
              uVar47 = uVar44 & 0xffffffe0;
              unique0x10001836 = uStack_3e4;
              iStack_2f0 = local_3e8;
              local_410.Data = (FScriptContainerElement *)local_508;
              FStack_400.Data = (FScriptContainerElement *)pTStack_468;
              auStack_320._8_8_ = local_508;
              auStack_310 = (undefined1  [8])lStack_408;
              local_308 = pTStack_468;
              FStack_300.Data = uStack_3f8;
              local_2f8 = uStack_3f0;
              if (((int)uVar44 < 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x7af,L""), bVar17)) {
                pcVar13 = (code *)swi(3);
                uVar18 = (*pcVar13)();
                return (bool)uVar18;
              }
              pUVar15 = local_478;
              pFVar48 = local_508;
              uVar7 = *(uint *)(lVar30 + 0xd8);
              if (uVar44 != uVar7) {
                pTVar52 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar30 + 0xc0);
                if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar30 + 0xd0) !=
                    (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                  pTVar52 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar30 + 0xd0);
                }
                uVar44 = -1 << ((byte)uVar44 & 0x1f) &
                         *(uint *)((pTVar52->AllocatorInstance).InlineData + (longlong)iVar23 * 4);
                while (uVar44 == 0) {
                  lVar32 = (longlong)iVar23;
                  uVar47 = uVar47 + 0x20;
                  iVar23 = iVar23 + 1;
                  uVar44 = uVar7;
                  if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
                  goto LAB_147adc5a0;
                  uVar44 = *(uint *)((pTVar52->AllocatorInstance).InlineData + lVar32 * 4 + 4);
                }
                uVar40 = (ulonglong)(-uVar44 & uVar44) * 2 + 1;
                lVar32 = 0x3f;
                if (uVar40 != 0) {
                  for (; uVar40 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                  }
                }
                local_3a0 = (int)lVar32;
                uVar44 = (uVar47 - 1) + local_3a0;
                if ((int)uVar7 < (int)uVar44) {
                  uVar44 = uVar7;
                }
              }
LAB_147adc5a0:
              while( true ) {
                uVar16 = auStack_320._8_8_;
                if (*(int *)&((TDelegate<void___cdecl(UE::Net::TNetResult<EReplayResult>_const_&),FDefaultDelegateUserPolicy>
                               *)auStack_320._8_8_)->field_0x8 -
                    *(int *)&((TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
                               *)(auStack_320._8_8_ + 0x30))->field_0x4 != iStack_2f0) {
                  local_553 = 0;
                  `TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,enum_EChannelCloseReason>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_553);
                }
                if (((FStack_300.Data._4_4_ == uVar44) &&
                    (local_308 == (TBitArray<FDefaultBitArrayAllocator> *)(lVar30 + 0xc0))) &&
                   (this = local_418, (FReplayHelper *)uVar16 == pFVar48)) break;
                pFVar5 = (FNetworkGUID *)
                         (*(longlong *)
                           (TDelegate<void___cdecl(UE::Net::TNetResult<EReplayResult>_const_&),FDefaultDelegateUserPolicy>
                            *)uVar16 + (longlong)(int)FStack_300.Data._4_4_ * 0x18);
                pTVar37 = TSet<TTuple<FNetworkGUID,UActorChannel_*>,TDefaultMapHashableKeyFuncs<FNetworkGUID,UActorChannel_*,0>,FDefaultSetAllocator>
                          ::Find((TSet<TTuple<FNetworkGUID,UActorChannel_*>,TDefaultMapHashableKeyFuncs<FNetworkGUID,UActorChannel_*,0>,FDefaultSetAllocator>
                                  *)&pUVar15->OpenChannelMap,pFVar5);
                if (((pTVar37 != (TTuple<FNetworkGUID,UActorChannel_*> *)0x0) &&
                    (this_02 = *(UChannel **)&pTVar37->field_0x8, this_02 != (UChannel *)0x0)) &&
                   ((AActor *)this_02[1]._padding_ != (AActor *)0x0)) {
                  pUVar38 = AActor::GetLevel((AActor *)this_02[1]._padding_);
                  uVar47 = ((uint)((ulonglong)pUVar38 >> 0x14) & 0xffff ^
                           (uint)((ulonglong)pUVar38 >> 4)) * -0x7a143595;
                  uVar47 = (uVar47 >> 0xd ^ uVar47) * -0x3d4d51cb;
                  if (local_178.Elements._8_4_ != local_178.Elements._52_4_) {
                    FVar42 = (ForElementType<FSetElementId>)&local_178.Hash;
                    if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                      FVar42 = local_178.Hash.SecondaryData;
                    }
                    for (iVar23 = *(int *)((longlong)FVar42 +
                                          (ulonglong)
                                          (local_178.HashSize - 1U & (uVar47 >> 0x10 ^ uVar47)) * 4)
                        ; iVar23 != -1;
                        iVar23 = *(int *)(local_178.Elements._0_8_ + 8 + (longlong)iVar23 * 0x10)) {
                      if (*(ULevel **)(local_178.Elements._0_8_ + (longlong)iVar23 * 0x10) ==
                          pUVar38) {
                        UChannel::ConditionalCleanUp
                                  (this_02,true,*(EChannelCloseReason *)&pFVar5[1].field0_0x0);
                        break;
                      }
                    }
                  }
                }
                FStack_300.Data._0_4_ = (uint)FStack_300.Data & ~auStack_310._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_310);
              }
            }
            pUVar15 = local_4e8;
            pTVar52 = local_520;
            uVar47 = 0;
            uVar44 = uVar47;
            if ((int)uVar43 < (int)local_540) {
              uVar44 = ~uVar43 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
            if ((*(int *)(local_548.Data + (longlong)pTVar52 * 8 + 4) <
                 *(int *)(local_548.Data + (longlong)pTVar52 * 8)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("DeltaCheckpointPacketIntervals[i].IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                                    ,0xf5c,L""), bVar17)) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
            uVar44 = uVar47;
            if ((int)uVar43 < (int)local_540) {
              uVar44 = ~uVar43 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
            if (((*(int *)(local_548.Data + (longlong)pTVar52 * 8) < 0) ||
                (local_4d8.ArrayNum <= *(int *)(local_548.Data + (longlong)pTVar52 * 8))) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ReadPacketsHelper.Packets.IsValidIndex(DeltaCheckpointPacketIntervals[i].Min)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                                    ,0xf5d,L""), bVar17)) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
            uVar44 = uVar47;
            if ((int)uVar43 < (int)local_540) {
              uVar44 = ~uVar43 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
            iVar23 = *(int *)(local_548.Data + (longlong)pTVar52 * 8 + 4);
            iVar45 = *(int *)(local_548.Data + (longlong)pTVar52 * 8);
            uVar44 = uVar47;
            if ((int)uVar43 < (int)local_540) {
              uVar44 = ~uVar43 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
            iVar23 = *(int *)(local_548.Data + (longlong)pTVar52 * 8) + (iVar23 - iVar45);
            if (((iVar23 < 0) || (local_4d8.ArrayNum <= iVar23)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ReadPacketsHelper.Packets.IsValidIndex(DeltaCheckpointPacketIntervals[i].Min + DeltaCheckpointPacketIntervals[i].Size())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                                    ,0xf5e,L""), bVar17)) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
            uVar44 = uVar47;
            if ((int)uVar43 < (int)local_540) {
              uVar44 = ~uVar43 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
            iVar23 = (*(int *)(local_548.Data + (longlong)pTVar52 * 8 + 4) -
                     *(int *)(local_548.Data + (longlong)pTVar52 * 8)) + 1;
            uVar44 = uVar47;
            if ((int)uVar43 < (int)local_540) {
              uVar44 = ~uVar43 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
            uVar44 = *(uint *)(local_548.Data + (longlong)pTVar52 * 8);
            if ((int)uVar44 < local_4d8.ArrayNum) {
              uVar47 = ~uVar44 >> 0x1f;
            }
            if ((uVar47 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
            local_4f8 = (FPlaybackPacket *)
                        (local_4d8.AllocatorInstance.Data + (longlong)(int)uVar44 * 0x20);
            iStack_4f0 = iVar23;
            if ((iVar23 < 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ArrayNum >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xfe,L""), bVar17)) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
            local_228._12_4_ = uStack_4ec;
            local_228.ArrayNum = iStack_4f0;
            local_228.DataPtr = local_4f8;
            ProcessFastForwardPackets
                      (this,&local_228,
                       (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_d8);
            local_520 = (TBitArray<FDefaultBitArrayAllocator> *)
                        ((pTVar52->AllocatorInstance).InlineData + 1);
            local_4e8 = (UDemoNetConnection *)((longlong)pUVar15 + 8);
            uVar43 = uVar43 + 1;
          } while ((int)uVar43 < (int)local_540);
        }
      }
      bVar17 = FWeakObjectPtr::IsValid(&local_500);
      if (bVar17) {
        pUVar36 = (UNetConnection *)FWeakObjectPtr::Get(&local_500);
        UNetConnection::SetAllowExistingChannelIndex(pUVar36,false);
      }
      this->bIsFastForwarding = bVar22;
      if (*(longlong *)&this->field_0x100 == 0) {
        bVar22 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7792372165998808937>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                            ,0xf69,"ServerConnection != nullptr");
        if (bVar22) {
          pcVar13 = (code *)swi(3);
          uVar18 = (*pcVar13)();
          return (bool)uVar18;
        }
      }
      else {
        uVar43 = local_128._8_4_ - local_f4;
        local_530.Data = (FScriptContainerElement *)0x0;
        local_528 = 0;
        if ((int)uVar43 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar43);
        }
        if (0 < (int)uVar43) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar43,&local_530,0,(int *)((longlong)&local_528 + 4));
        }
        lVar30 = *(longlong *)&this->field_0x100;
        plVar49 = *(longlong **)(lVar30 + 0x70);
        iVar23 = *(int *)(lVar30 + 0x78);
        plVar9 = plVar49 + iVar23;
        while( true ) {
          if (*(int *)(lVar30 + 0x78) != iVar23) {
            local_552 = 0;
            `TCheckedPointerIterator<TObjectPtr<UChannel>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_552);
          }
          if (plVar49 == plVar9) break;
          pUVar12 = (UActorChannel *)*plVar49;
          if (((pUVar12 != (UActorChannel *)0x0) &&
              (uVar40 = pUVar12->_padding_, FVar25 = FNameEntryId::FromValidEName((EName)local_39c),
              uVar40 == *(uint *)CONCAT44(extraout_var,FVar25.Value))) &&
             (this_03 = (pUVar12->Actor).field0_0x0.DebugPtr, local_4e0 = (undefined1  [8])pUVar12,
             this_03 != (AActor *)0x0)) {
            bVar22 = AActor::IsNetStartupActor(this_03);
            if (!bVar22) {
              pUVar38 = AActor::GetLevel(this_03);
              uVar43 = ((uint)((ulonglong)pUVar38 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)pUVar38 >> 4)) * -0x7a143595;
              uVar43 = (uVar43 >> 0xd ^ uVar43) * -0x3d4d51cb;
              if (local_178.Elements._8_4_ != local_178.Elements._52_4_) {
                FVar42 = (ForElementType<FSetElementId>)&local_178.Hash;
                if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar42 = local_178.Hash.SecondaryData;
                }
                for (iVar45 = *(int *)((longlong)FVar42 +
                                      (ulonglong)
                                      (local_178.HashSize - 1U & (uVar43 >> 0x10 ^ uVar43)) * 4);
                    iVar45 != -1;
                    iVar45 = *(int *)(local_178.Elements._0_8_ + 8 + (longlong)iVar45 * 0x10)) {
                  if (*(ULevel **)(local_178.Elements._0_8_ + (longlong)iVar45 * 0x10) == pUVar38)
                  goto LAB_147adcc86;
                }
              }
            }
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_03);
            }
            local_4a0.ObjectIndex = 0;
            local_4a0.ObjectSerialNumber = 0;
            local_370 = this_03;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_03);
            }
            FWeakObjectPtr::operator=(&local_4a0,(FObjectPtr)&local_370);
            local_368 = local_4a0;
            iVar45 = TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>_>
                               ((TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                 *)local_128,local_4a0.ObjectSerialNumber ^ local_4a0.ObjectIndex,
                                (TWeakObjectPtr<AActor_const_,FWeakObjectPtr> *)&local_368);
            if (iVar45 != -1) {
LAB_147adcc86:
              if (((local_530.Data <= (FReplayHelper *)local_4e0) &&
                  ((FScriptContainerElement *)local_4e0 <
                   local_530.Data + (longlong)local_528._4_4_ * 8)) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar22)) {
                pcVar13 = (code *)swi(3);
                uVar18 = (*pcVar13)();
                return (bool)uVar18;
              }
              iVar45 = (int)local_528;
              if ((int)local_528 == local_528._4_4_) {
                iVar45 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_530,(int *)((longlong)&local_528 + 4));
              }
              local_528 = CONCAT44(local_528._4_4_,iVar45 + 1);
              *(undefined1 (*) [8])(local_530.Data + (longlong)iVar45 * 8) = local_4e0;
              DiffActorProperties(this,(UActorChannel *)local_4e0);
            }
          }
          plVar49 = plVar49 + 1;
        }
        uVar40 = (ulonglong)(int)local_528;
        local_4f8 = (FPlaybackPacket *)CONCAT44(local_4f8._4_4_,(int)local_528);
        local_508 = (FReplayHelper *)(local_530.Data + uVar40 * 8);
        FVar51.Data = local_530.Data;
        while( true ) {
          pFVar48 = local_508;
          if ((int)local_528 != (int)uVar40) {
            local_551 = 0;
            `TCheckedPointerIterator<UActorChannel_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_551);
          }
          if ((FReplayHelper *)FVar51.Data == pFVar48) break;
          lVar30 = *(longlong *)&((FReplayHelper *)FVar51.Data)->OnReplayRecordError;
          local_460._16_4_ = 0;
          local_460._20_4_ = 1;
          local_460._24_8_ = lVar30 + 0xb8;
          iStack_43c = 0;
          iStack_438 = 0;
          iVar23 = *(int *)(lVar30 + 0xd0);
          pFVar48 = (FReplayHelper *)(lVar30 + 0xa8);
          if (iVar23 != 0) {
            pTVar52 = (TBitArray<FDefaultBitArrayAllocator> *)local_460._24_8_;
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar30 + 200) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar52 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar30 + 200);
            }
            uVar43 = *(uint *)(pTVar52->AllocatorInstance).InlineData;
            local_460._16_4_ = 0;
            while (uVar43 == 0) {
              iStack_438 = iStack_438 + 0x20;
              lVar32 = (longlong)(int)local_460._16_4_;
              local_460._16_4_ = local_460._16_4_ + 1;
              if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_460._16_4_)
              goto LAB_147adce1e;
              uVar43 = *(uint *)((pTVar52->AllocatorInstance).InlineData + lVar32 * 4 + 4);
            }
            local_460._20_4_ = -uVar43 & uVar43;
            uVar40 = (ulonglong)(uint)local_460._20_4_ * 2 + 1;
            lVar32 = 0x3f;
            if (uVar40 != 0) {
              for (; uVar40 >> lVar32 == 0; lVar32 = lVar32 + -1) {
              }
            }
            local_398 = (int)lVar32;
            iStack_43c = iStack_438 + -1 + local_398;
            if (iVar23 < iStack_43c) {
LAB_147adce1e:
              iStack_43c = iVar23;
            }
          }
          local_440 = 0xffffffff;
          uVar43 = *(uint *)(lVar30 + 0xd0);
          lStack_408 = CONCAT44(local_460._20_4_,local_460._16_4_);
          local_3e8 = *(int *)(lVar30 + 0xb0) - *(int *)(lVar30 + 0xdc);
          uStack_3f8 = (FScriptContainerElement *)CONCAT44(iStack_43c,0xffffffff);
          uStack_3f0._4_4_ = iStack_434;
          uStack_3f0._0_4_ = iStack_438;
          iVar23 = (int)uVar43 >> 5;
          uVar44 = uVar43 & 0xffffffe0;
          auStack_320._4_4_ = uStack_3e4;
          auStack_320._0_4_ = local_3e8;
          local_410.Data = (FScriptContainerElement *)pFVar48;
          FStack_400.Data = (FScriptContainerElement *)local_460._24_8_;
          local_348 = pFVar48;
          auStack_340._0_8_ = lStack_408;
          auStack_340._8_8_ = local_460._24_8_;
          unique0x10003183 = uStack_3f8;
          local_328 = uStack_3f0;
          if (((int)uVar43 < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar22)) {
            pcVar13 = (code *)swi(3);
            uVar18 = (*pcVar13)();
            return (bool)uVar18;
          }
          uVar47 = *(uint *)(lVar30 + 0xd0);
          if (uVar43 != uVar47) {
            pTVar52 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar30 + 0xb8);
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar30 + 200) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar52 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar30 + 200);
            }
            uVar43 = -1 << ((byte)uVar43 & 0x1f) &
                     *(uint *)((pTVar52->AllocatorInstance).InlineData + (longlong)iVar23 * 4);
            while (uVar43 == 0) {
              lVar32 = (longlong)iVar23;
              uVar44 = uVar44 + 0x20;
              iVar23 = iVar23 + 1;
              uVar43 = uVar47;
              if ((int)((uVar47 - 1) + ((int)(uVar47 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
              goto LAB_147adcf40;
              uVar43 = *(uint *)((pTVar52->AllocatorInstance).InlineData + lVar32 * 4 + 4);
            }
            uVar40 = (ulonglong)(-uVar43 & uVar43) * 2 + 1;
            lVar32 = 0x3f;
            if (uVar40 != 0) {
              for (; uVar40 >> lVar32 == 0; lVar32 = lVar32 + -1) {
              }
            }
            local_394 = (int)lVar32;
            uVar43 = (uVar44 - 1) + local_394;
            if ((int)uVar47 < (int)uVar43) {
              uVar43 = uVar47;
            }
          }
LAB_147adcf40:
          while( true ) {
            pFVar14 = local_348;
            if (*(int *)&(local_348->OnReplayRecordError).field_0x8 -
                *(int *)&(local_348->ObjectsWithExternalDataMap).field_0x4 != auStack_320._0_4_) {
              local_550[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_550);
            }
            if (((uStack_32c == uVar43) &&
                ((TBitArray<FDefaultBitArrayAllocator> *)auStack_340._8_8_ ==
                 (TBitArray<FDefaultBitArrayAllocator> *)(lVar30 + 0xb8))) && (pFVar14 == pFVar48))
            break;
            FObjectReplicator::CallRepNotifies
                      (*(FObjectReplicator **)
                        ((longlong)(int)uStack_32c * 0x20 + 8 +
                        *(longlong *)&pFVar14->OnReplayRecordError),true);
            auStack_340._16_4_ = auStack_340._16_4_ & ~auStack_340._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_340);
          }
          uVar40 = (ulonglong)local_4f8 & 0xffffffff;
          FVar51.Data = (FScriptContainerElement *)
                        &(((FReplayHelper *)FVar51.Data)->OnReplayRecordError).field_0x8;
        }
        local_290 = local_518;
        local_298 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UDemoNetDriver::FastForwardLevels'::__l176::<lambda_1>,void,FObjectKey,FObjectKey,TSharedRef<FObjectReplicator,1>_const_&>
                    ::Call;
        UNetConnection::ExecuteOnAllDormantReplicators
                  (*(UNetConnection **)&local_418->field_0x100,
                   (TFunctionRef<void___cdecl(FObjectKey,FObjectKey,TSharedRef<FObjectReplicator,1>_const_&)>
                    *)&local_298);
        if ((FReplayHelper *)local_530.Data != (FReplayHelper *)0x0) {
          FMemory::Free(local_530.Data);
        }
      }
      bVar22 = true;
    }
    else {
      if (2 < (byte)LogDemo._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      }
      UE::Net::TNetResult<enum_EReplayResult>::TNetResult<enum_EReplayResult>
                (local_1b8,Serialization);
      FReplayHelper::NotifyReplayError(local_508,(TNetResult<EReplayResult> *)local_1b8);
      if (local_190 != 0) {
        (**(code **)(local_190 + -0x10))(local_190 + -0x10);
      }
      if ((void *)local_1b8._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1b8._24_8_);
      }
LAB_147adbbb7:
      if (local_4f8 != (FPlaybackPacket *)0x0) {
        *(local_4f8->Data).AllocatorInstance.Data =
             *(FScriptContainerElement *)&(local_4f8->Data).ArrayNum;
        ::operator_delete(local_4f8,0x10);
      }
      bVar22 = false;
    }
    if (local_548.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data);
    }
    DestructItems<FPlaybackPacket,int>
              ((FPlaybackPacket *)local_4d8.AllocatorInstance.Data,local_4d8.ArrayNum);
    if ((FPlaybackPacket *)local_4d8.AllocatorInstance.Data != (FPlaybackPacket *)0x0) {
      FMemory::Free(local_4d8.AllocatorInstance.Data);
    }
    local_178.HashSize = 0;
    if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_178.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<ULevel_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<ULevel_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_178.Elements);
    local_e0 = 0;
    if (local_e8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8);
    }
    TSparseArray<TSparseSetElement<TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TWeakObjectPtr<AActor,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_128);
    local_90 = 0;
    if (local_98 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_d8);
  }
  if ((local_428 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_428 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_428 & 4) != 0) {
    FThreadStats::AddMessage(local_430,CycleScopeEnd);
  }
  return bVar22;
}

// FinalizeFastForward @ 147add170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::FinalizeFastForward(UDemoNetDriver *this,double param_1)

{
  undefined8 *puVar1;
  FWeakObjectPtr *this_00;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FName FVar5;
  longlong lVar6;
  UActorChannel *pUVar7;
  AActor *this_01;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:_void___cdecl_UDemoNetDriver::FinalizeFastForward(double)_::_2_::FStat_Demo_FinalizeFastForward>
  FVar12;
  UClass *pUVar13;
  TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *pTVar14;
  byte bVar15;
  longlong *plVar16;
  int iVar17;
  longlong *plVar18;
  FNameEntryId FVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint *puVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  uint uVar24;
  longlong *plVar25;
  undefined1 uVar26;
  longlong *plVar27;
  TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
  *this_02;
  uint uVar28;
  undefined1 auStackY_298 [32];
  undefined1 local_238;
  undefined1 local_237;
  undefined1 local_236;
  undefined1 local_235;
  FName local_230;
  byte local_228;
  undefined1 local_220 [4];
  uint local_21c;
  FColor_u_0 local_218 [2];
  uint local_210;
  uint uStack_20c;
  FName local_208;
  longlong *local_200;
  uint uStack_1f8;
  uint uStack_1f4;
  TBitArray<FDefaultBitArrayAllocator> *local_1f0;
  undefined4 uStack_1e8;
  uint uStack_1e4;
  uint local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
  *local_1c0;
  UDemoNetDriver *local_1b8;
  LARGE_INTEGER local_1b0;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  TBitArray<FDefaultBitArrayAllocator> *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  uint local_188;
  uint uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  longlong *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  longlong *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  code *local_118;
  undefined1 *local_110;
  FName local_108;
  FName local_100;
  FReadAccessScope local_f8 [2];
  undefined4 local_c4;
  undefined1 local_b8 [32];
  uint *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  ForElementType<FSetElementId> local_78;
  int local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_298;
  plVar18 = (longlong *)0x0;
  local_1b8 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_Demo_FinalizeFastForward ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UDemoNetDriver::FinalizeFastForward(double)_::_2_::FStat_Demo_FinalizeFastForward>
         )0x0) {
      pFVar11 = ::FName::FName(&local_108,"Demo_FinalizeFastForward");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_Demo_FinalizeFastForward,*pFVar11,
                 L"Demo_FinalizeFastForward","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_Demo_FinalizeFastForward;
  if (StatPtr_Demo_FinalizeFastForward ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UDemoNetDriver::FinalizeFastForward(double)_::_2_::FStat_Demo_FinalizeFastForward>
       )0x0) {
    pFVar11 = ::FName::FName(&local_100,"Demo_FinalizeFastForward");
    FVar12 = (FThreadSafeStaticStat<_public:_void___cdecl_UDemoNetDriver::FinalizeFastForward(double)_::_2_::FStat_Demo_FinalizeFastForward>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_Demo_FinalizeFastForward,*pFVar11,
                          L"Demo_FinalizeFastForward","STATGROUP_Net","STATCAT_Advanced",L"Net",true
                          ,true,ST_int64,true,false,MCR_Invalid);
  }
  local_230.ComparisonIndex.Value = 0;
  local_230.Number = 0;
  local_228 = 0;
  FVar5 = *(FName *)FVar12;
  FVar19 = FVar5.ComparisonIndex.Value;
  uVar20 = FVar5.Number;
  if ((FVar19.Value != 0) || (uVar20 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_218[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_218[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      local_228 = local_228 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_208.ComparisonIndex.Value = FVar19.Value;
        local_208.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_208,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                   ,0xbb6);
        local_228 = local_228 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_230 = FVar5;
      local_210 = FVar19.Value;
      uStack_20c = uVar20;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      local_228 = local_228 | 4;
    }
  }
  uVar26 = this->bIsFinalizingFastForward;
  this->bIsFastForwarding = false;
  this->bIsFinalizingFastForward = true;
  if (*(longlong *)&this->field_0x1b8 != 0) {
    plVar18 = *(longlong **)(*(longlong *)&this->field_0x1b8 + 0x1b0);
  }
  bVar15 = this->field_0xb13;
  local_235 = uVar26;
  if (this->bIsFastForwardingForCheckpoint != '\0') {
    CleanupOutstandingRewindActors(this);
    bVar15 = this->field_0xb13;
  }
  if (plVar18 != (longlong *)0x0) {
    if ((bVar15 & 2) != 0) {
      plVar18[0x5e] =
           (longlong)((double)this->SavedSecondsToSkip + this->SavedReplicatedWorldTimeSeconds);
    }
    (**(code **)(*plVar18 + 0x7e8))(plVar18);
    bVar15 = this->field_0xb13;
  }
  lVar6 = *(longlong *)&this->field_0x100;
  if ((lVar6 != 0) && ((bVar15 & 2) != 0)) {
    puVar21 = *(undefined8 **)(lVar6 + 0x70);
    iVar17 = *(int *)(lVar6 + 0x78);
    puVar1 = puVar21 + iVar17;
    while( true ) {
      if (*(int *)(lVar6 + 0x78) != iVar17) {
        local_238 = 0;
        `TCheckedPointerIterator<TObjectPtr<UChannel>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_238);
      }
      if (puVar21 == puVar1) break;
      pUVar7 = (UActorChannel *)*puVar21;
      if (pUVar7 != (UActorChannel *)0x0) {
        pUVar13 = Z_Construct_UClass_UActorChannel_NoRegister();
        iVar3 = (int)pUVar13->_padding_;
        if ((((iVar3 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar13->_padding_)) &&
            (this_01 = (pUVar7->Actor).field0_0x0.DebugPtr, this_01 != (AActor *)0x0)) &&
           (bVar10 = AActor::IsNetStartupActor(this_01), bVar10)) {
          DiffActorProperties(this,pUVar7);
        }
      }
      puVar21 = puVar21 + 1;
    }
  }
  uVar20 = 0;
  if (*(longlong *)&this->field_0x100 != 0) {
    this_02 = (TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
               *)(*(longlong *)&this->field_0x100 + 0x14d0);
    local_b8._0_8_ = 0;
    local_b8._8_8_ = 0;
    local_98 = (uint *)0x0;
    uVar24 = 0;
    local_90 = 0;
    local_8c = 0x80;
    local_88 = 0xffffffff;
    local_84 = 0;
    local_78 = (ForElementType<FSetElementId>)0x0;
    local_70 = 0;
    local_1c0 = this_02;
    TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                 *)local_b8,this_02);
    uVar28 = local_90;
    uStack_1f4 = 1;
    uStack_1e4 = uVar24;
    uStack_1f8 = uVar20;
    if (local_90 != 0) {
      puVar22 = (uint *)(local_b8 + 0x10);
      if (local_98 != (uint *)0x0) {
        puVar22 = local_98;
      }
      uVar4 = *puVar22;
      uVar24 = uVar20;
      while (uVar4 == 0) {
        uStack_1f8 = uStack_1f8 + 1;
        uVar24 = uVar24 + 0x20;
        uStack_1e4 = local_90;
        if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1f8)
        goto LAB_147add50f;
        uVar4 = puVar22[(int)uStack_1f8];
      }
      uStack_1f4 = -uVar4 & uVar4;
      uVar2 = (ulonglong)uStack_1f4 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_1d0 = (int)lVar6;
      uStack_1e4 = local_1d0 + -1 + uVar24;
      if ((int)local_90 < (int)uStack_1e4) {
        uStack_1e4 = local_90;
      }
    }
LAB_147add50f:
    local_200 = (longlong *)local_b8;
    uStack_1dc = local_c4;
    local_1f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
    uVar20 = local_90 & 0xffffffe0;
    iStack_1d8 = local_b8._8_4_ - local_84;
    TStack_140._padding_ = CONCAT44(uStack_1f4,uStack_1f8);
    uStack_1e8 = 0xffffffff;
    TStack_140.CurrentBitIndex = uStack_1e4;
    TStack_140.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)local_90 >> 5;
    TStack_140._28_4_ = local_c4;
    TStack_140.BaseBitIndex = uVar24;
    uStack_120 = CONCAT44(uStack_1d4,iStack_1d8);
    bVar15 = (byte)local_90;
    local_21c = local_90;
    local_1e0 = uVar24;
    local_148 = local_200;
    TStack_140.Array = local_1f0;
    if (((int)local_90 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (uVar28 != local_90) {
      puVar22 = (uint *)(local_b8 + 0x10);
      if (local_98 != (uint *)0x0) {
        puVar22 = local_98;
      }
      uVar24 = -1 << (bVar15 & 0x1f) & puVar22[iVar17];
      while (uVar24 == 0) {
        iVar17 = iVar17 + 1;
        uVar20 = uVar20 + 0x20;
        if ((int)(((int)(local_90 - 1) >> 0x1f & 0x1fU) + (local_90 - 1)) >> 5 < iVar17) {
          local_21c = local_90;
          uVar28 = local_90;
          goto LAB_147add633;
        }
        uVar24 = puVar22[iVar17];
      }
      uVar2 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_1cc = (int)lVar6;
      local_21c = local_1cc + -1 + uVar20;
      uVar28 = local_21c;
      if ((int)local_90 < (int)local_21c) {
        uVar28 = local_90;
        local_21c = local_90;
      }
    }
LAB_147add633:
    plVar18 = (longlong *)0x0;
    while( true ) {
      plVar16 = local_148;
      if ((int)local_148[1] - *(int *)((longlong)local_148 + 0x34) != (int)uStack_120) {
        local_237 = 0;
        `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_237);
      }
      this = local_1b8;
      if (((TStack_140.CurrentBitIndex == uVar28) &&
          (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10))) &&
         (plVar16 == (longlong *)local_b8)) break;
      this_00 = (FWeakObjectPtr *)(*plVar16 + (longlong)TStack_140.CurrentBitIndex * 0x18);
      bVar10 = FWeakObjectPtr::IsValid(this_00);
      if (bVar10) {
        pTVar14 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                  ::Find(this_02,(TWeakObjectPtr<AActor_const_,FWeakObjectPtr>)*this_00);
        plVar16 = (longlong *)&pTVar14->field_0x8;
        if (pTVar14 == (TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *)0x0) {
          plVar16 = plVar18;
        }
        if (plVar16 != (longlong *)0x0) {
          lVar6 = *plVar16;
          local_188 = 0;
          plVar27 = (longlong *)(lVar6 + 0xa8);
          uStack_19c = 1;
          uVar20 = *(uint *)(lVar6 + 0xd0);
          local_198 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar6 + 0xb8);
          plVar16 = plVar18;
          uStack_18c = local_188;
          if (uVar20 != 0) {
            pTVar23 = local_198;
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar6 + 200) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar6 + 200);
            }
            plVar25 = plVar18;
            local_188 = 0;
            for (uVar24 = *(uint *)(pTVar23->AllocatorInstance).InlineData; uVar24 == 0;
                uVar24 = *(uint *)((pTVar23->AllocatorInstance).InlineData +
                                  (longlong)(int)uVar24 * 4)) {
              uVar24 = (int)plVar16 + 1;
              plVar16 = (longlong *)(ulonglong)uVar24;
              local_188 = (int)plVar25 + 0x20;
              plVar25 = (longlong *)(ulonglong)local_188;
              uStack_18c = uVar20;
              if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
              goto LAB_147add74e;
            }
            uStack_19c = -uVar24 & uVar24;
            uVar2 = (ulonglong)uStack_19c * 2 + 1;
            lVar8 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            local_1c8 = (int)lVar8;
            uStack_18c = local_1c8 + -1 + local_188;
            if ((int)uVar20 < (int)uStack_18c) {
              uStack_18c = uVar20;
            }
          }
LAB_147add74e:
          uVar20 = *(uint *)(lVar6 + 0xd0);
          uStack_184 = uStack_1e4;
          uVar24 = uVar20 & 0xffffffe0;
          iStack_180 = *(int *)(lVar6 + 0xb0) - *(int *)(lVar6 + 0xdc);
          uStack_1a0 = SUB84(plVar16,0);
          TStack_170._padding_ = CONCAT44(uStack_19c,uStack_1a0);
          uStack_190 = 0xffffffff;
          TStack_170.CurrentBitIndex = uStack_18c;
          TStack_170.UnvisitedBitMask = 0xffffffff;
          iVar17 = (int)uVar20 >> 5;
          TStack_170._28_4_ = uStack_1e4;
          TStack_170.BaseBitIndex = local_188;
          uStack_150 = CONCAT44(uStack_17c,iStack_180);
          local_1a8 = plVar27;
          local_178 = plVar27;
          TStack_170.Array = local_198;
          if ((((int)uVar20 < 0) || (*(int *)(lVar6 + 0xd0) < (int)uVar20)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar28 = *(uint *)(lVar6 + 0xd0);
          if (uVar20 != uVar28) {
            pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar6 + 0xb8);
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar6 + 200) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar6 + 200);
            }
            uVar20 = -1 << ((byte)uVar20 & 0x1f) &
                     *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
            while (uVar20 == 0) {
              iVar17 = iVar17 + 1;
              uVar24 = uVar24 + 0x20;
              uVar20 = uVar28;
              if ((int)(((int)(uVar28 - 1) >> 0x1f & 0x1fU) + (uVar28 - 1)) >> 5 < iVar17)
              goto LAB_147add850;
              uVar20 = *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
            }
            uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
            lVar8 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            local_210 = (uint)lVar8;
            uVar20 = (local_210 - 1) + uVar24;
            if ((int)uVar28 < (int)uVar20) {
              uVar20 = uVar28;
            }
          }
LAB_147add850:
          while( true ) {
            plVar16 = local_178;
            if ((int)local_178[1] - *(int *)((longlong)local_178 + 0x34) != (int)uStack_150) {
              local_236 = 0;
              `TSparseArray<TSparseSetElement<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_236);
            }
            if (((TStack_170.CurrentBitIndex == uVar20) &&
                (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)(lVar6 + 0xb8))) &&
               (this_02 = local_1c0, uVar28 = local_21c, plVar16 == plVar27)) break;
            FObjectReplicator::CallRepNotifies
                      (*(FObjectReplicator **)
                        ((longlong)TStack_170.CurrentBitIndex * 0x20 + 8 + *plVar16),true);
            TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
          }
        }
      }
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    }
    local_110 = local_220;
    local_118 = UE::Core::Private::Function::
                TFunctionRefCaller<`UDemoNetDriver::FinalizeFastForward'::__l30::<lambda_1>,void,FObjectKey,FObjectKey,TSharedRef<FObjectReplicator,1>_const_&>
                ::Call;
    UNetConnection::ExecuteOnAllDormantReplicators
              (*(UNetConnection **)&local_1b8->field_0x100,
               (TFunctionRef<void___cdecl(FObjectKey,FObjectKey,TSharedRef<FObjectReplicator,1>_const_&)>
                *)&local_118);
    local_70 = 0;
    if (local_78 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_78);
    }
    TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_b8);
    uVar26 = local_235;
  }
  this->bIsFastForwardingForCheckpoint = '\0';
  (this->NonQueuedGUIDsForScrubbing).ArrayNum = 0;
  if ((this->NonQueuedGUIDsForScrubbing).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->NonQueuedGUIDsForScrubbing).AllocatorInstance,0,
               &(this->NonQueuedGUIDsForScrubbing).ArrayMax);
  }
  QueryPerformanceCounter(&local_1b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnGotoTimeDelegate_Transient,local_f8);
  if ((*(int *)&(this->OnGotoTimeDelegate_Transient).field_0x10 != 0) &&
     (plVar18 = *(longlong **)&(this->OnGotoTimeDelegate_Transient).field_0x8,
     plVar18 != (longlong *)0x0)) {
    (**(code **)(*plVar18 + 0x68))(plVar18,1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGotoTimeDelegate_Transient);
  TMulticastDelegate<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::Broadcast
            (&FNetworkReplayDelegates::OnReplayScrubComplete,*(UWorld **)&this->field_0x1b8);
  if (4 < (byte)LogDemo._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
  }
  this->bIsFinalizingFastForward = (bool)uVar26;
  if ((local_228 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_228 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_228 & 4) != 0) {
    FThreadStats::AddMessage(local_230,CycleScopeEnd);
  }
  return;
}

// FinishDestroy @ 147adf9c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::FinishDestroy(UDemoNetDriver *this)

{
  bool bVar1;
  EConnectionState EVar2;
  
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) goto LAB_147adfa03;
  bVar1 = IsRecording(this);
  if ((!bVar1) && ((this->ReplayHelper).bIsLoadingCheckpoint == false)) {
    if (*(UNetConnection **)&this->field_0x100 == (UNetConnection *)0x0) goto LAB_147adfa03;
    EVar2 = UNetConnection::GetConnectionState(*(UNetConnection **)&this->field_0x100);
    if (EVar2 == USOCK_Closed) goto LAB_147adfa03;
  }
  StopDemo(this);
LAB_147adfa03:
  CleanUpSplitscreenConnections(this,true);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreUObjectDelegates::PostLoadMapWithWorld,this);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReplayHelper);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ReplayHelper).OnReplayPlaybackError);
  if (*(UWorld **)&this->field_0x1b8 != (UWorld *)0x0) {
    UWorld::RemoveOnActorDestroyedHandler
              (*(UWorld **)&this->field_0x1b8,
               (FDelegateHandle)(this->DelegateHandleActorPreDestroy).ID);
  }
  UNetDriver::FinishDestroy((UNetDriver *)this);
  return;
}

// ForceNetUpdate @ 147adfaa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::ForceNetUpdate(UDemoNetDriver *this,AActor *param_1)

{
  FNetworkObjectInfo *pFVar1;
  
  if (*(longlong **)&this->field_0x9a0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147adfabd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&this->field_0x9a0 + 0x2f8))();
    return;
  }
  pFVar1 = UNetDriver::FindNetworkObjectInfo((UNetDriver *)this,param_1);
  if (pFVar1 != (FNetworkObjectInfo *)0x0) {
    pFVar1->NextUpdateTime = (double)((this->ReplayHelper).DemoCurrentTime - __real_3c23d70a);
  }
  return;
}

// GetActorForGUID @ 147ae2aa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AActor * __thiscall UDemoNetDriver::GetActorForGUID(UDemoNetDriver *this,FNetworkGUID param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  AActor *pAVar4;
  UClass *pUVar5;
  longlong lVar6;
  FNetworkGUID_u_0 local_res10 [3];
  
  lVar6 = *(longlong *)&this->field_0x100;
  local_res10[0] = param_1.field0_0x0;
  if (0 < *(int *)&this->field_0x110) {
    if ((*(int *)&this->field_0x110 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pAVar4 = (AActor *)(*pcVar2)();
      return pAVar4;
    }
    lVar6 = **(longlong **)&this->field_0x108;
  }
  if (lVar6 == 0) {
    return (AActor *)0x0;
  }
  pAVar4 = (AActor *)
           (**(code **)(**(longlong **)(lVar6 + 0x68) + 0x330))
                     (*(longlong **)(lVar6 + 0x68),local_res10,1);
  if (pAVar4 != (AActor *)0x0) {
    pUVar5 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pAVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return pAVar4;
    }
  }
  return (AActor *)0x0;
}

// GetCreateReplicationChangelistMgrFlags @ 147ae5130

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ECreateReplicationChangelistMgrFlags __thiscall
UDemoNetDriver::GetCreateReplicationChangelistMgrFlags(UDemoNetDriver *this)

{
  return SkipDeltaCustomState;
}

// GetDemoPath @ 147ae61e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
UDemoNetDriver::GetDemoPath(UDemoNetDriver *this,FString *__return_storage_ptr__)

{
  INetworkReplayStreamer *pIVar1;
  int iVar2;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  pIVar1 = (this->ReplayHelper).ReplayStreamer.Object;
  if (pIVar1 != (INetworkReplayStreamer *)0x0) {
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = 0;
    iVar2 = (**(code **)(pIVar1->_padding_ + 0x1a0))(pIVar1,&local_18);
    if (iVar2 == 0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data;
      (__return_storage_ptr__->Data).ArrayNum = (int)local_10;
      (__return_storage_ptr__->Data).ArrayMax = local_10._4_4_;
      return __return_storage_ptr__;
    }
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetExternalDataArrayForObject @ 147ae82d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_> * __thiscall
UDemoNetDriver::GetExternalDataArrayForObject(UDemoNetDriver *this,UObject *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 *puVar9;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  FWeakObjectPtr local_res18;
  
  if ((*(longlong *)&this->field_0x1c8 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
  lVar1 = *(longlong *)&this->field_0x1c8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  pFVar8 = (FScriptContainerElement *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_res18 = local_res8;
  iVar4 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                      *)(lVar1 + 0x58),local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                     (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res18);
  pFVar6 = pFVar8;
  if ((iVar4 != -1) && (lVar1 = *(longlong *)(lVar1 + 0x58) + (longlong)iVar4 * 0x18, lVar1 != 0)) {
    pFVar6 = *(FScriptContainerElement **)(lVar1 + 8);
  }
  if (pFVar6 == (FScriptContainerElement *)0x0) {
    return (TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_> *)0x0;
  }
  pFVar7 = pFVar8;
  if (*(int *)&(this->ReplayHelper).ExternalDataToObjectMap.field_0x8 !=
      *(int *)&(this->ReplayHelper).ExternalDataToObjectMap.field_0x34) {
    puVar9 = *(undefined1 **)&(this->ReplayHelper).ExternalDataToObjectMap.field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ReplayHelper).ExternalDataToObjectMap.field_0x38;
    }
    iVar4 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->ReplayHelper).ExternalDataToObjectMap.field_0x48 - 1U
                              & (int)((ulonglong)pFVar6 >> 0x20) * 0x17 + (int)pFVar6) * 4);
    if (iVar4 != -1) {
      do {
        pFVar7 = (FScriptContainerElement *)
                 ((longlong)iVar4 * 0x20 +
                 *(longlong *)&(this->ReplayHelper).ExternalDataToObjectMap);
        if ((((TArray<void_*,TSizedDefaultAllocator<32>_> *)&pFVar7->field_0x0)->AllocatorInstance).
            Data == pFVar6) break;
        iVar4 = *(int *)&pFVar7[0x18].field_0x0;
        pFVar7 = pFVar8;
      } while (iVar4 != -1);
    }
  }
  pFVar6 = pFVar7 + 8;
  if (pFVar7 == (FScriptContainerElement *)0x0) {
    pFVar6 = pFVar8;
  }
  return (TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_> *)pFVar6;
}

// GetGUIDForActor @ 147ae86f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNetworkGUID __thiscall UDemoNetDriver::GetGUIDForActor(UDemoNetDriver *this,AActor *param_1)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  lVar1 = *(longlong *)&this->field_0x100;
  if (0 < *(int *)&this->field_0x110) {
    lVar1 = **(longlong **)&this->field_0x108;
  }
  if (lVar1 == 0) {
    param_1->_padding_ = 0;
    return (FNetworkGUID)(FNetworkGUID_u_0)param_1;
  }
  (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x338))(*(longlong **)(lVar1 + 0x68),local_res8);
  param_1->_padding_ = local_res8[0];
  return (FNetworkGUID)(FNetworkGUID_u_0)param_1;
}

// GetNextQueuedTaskName @ 147aea0f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall UDemoNetDriver::GetNextQueuedTaskName(UDemoNetDriver *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  FName in_RDX;
  undefined1 local_res8 [32];
  
  if (0 < (this->QueuedReplayTasks).ArrayNum) {
    plVar1 = *(longlong **)(this->QueuedReplayTasks).AllocatorInstance.Data;
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x18))(plVar1,local_res8);
    *(undefined8 *)in_RDX = *puVar2;
    return in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetPrivateStaticClass @ 147aeb7d0

UClass * __cdecl UDemoNetDriver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDemoNetDriver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetDriver::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DemoNetDriver",
               &Z_Registration_Info_UClass_UDemoNetDriver.InnerSingleton,
               StaticRegisterNativesUDemoNetDriver,0x1720,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDemoNetDriver>,InternalVTableHelperCtorCaller<UDemoNetDriver>,
               local_res8,UNetDriver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDemoNetDriver.InnerSingleton;
}

// GetSocketSubsystem @ 147aed370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ISocketSubsystem * __thiscall UDemoNetDriver::GetSocketSubsystem(UDemoNetDriver *this)

{
  return (ISocketSubsystem *)0x0;
}

// GotoTimeInSeconds @ 147aef280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::GotoTimeInSeconds
          (UDemoNetDriver *this,float param_1,
          TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_2)

{
  int iVar1;
  longlong *plVar2;
  FName *pFVar3;
  FQueuedReplayTask *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  UDemoNetDriver *local_res8;
  undefined1 local_res20 [8];
  FReadAccessScope local_48 [2];
  
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnGotoTimeDelegate_Transient,param_2);
  pFVar4 = (this->ActiveReplayTask).Object;
  if ((pFVar4 == (FQueuedReplayTask *)0x0) ||
     (pFVar3 = (FName *)(**(code **)(pFVar4->_padding_ + 0x18))(pFVar4,&local_res8),
     *pFVar3 != ReplayTaskNames::GotoTimeInSecondsTask)) {
    iVar1 = (this->QueuedReplayTasks).ArrayNum;
    pFVar5 = (this->QueuedReplayTasks).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->QueuedReplayTasks).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedRef<FQueuedReplayTask,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar5 == pFVar6) break;
      pFVar3 = (FName *)(**(code **)(**(longlong **)pFVar5 + 0x18))
                                  (*(longlong **)pFVar5,local_res20);
      if (*pFVar3 == ReplayTaskNames::GotoTimeInSecondsTask) goto LAB_147aef3f3;
      pFVar5 = pFVar5 + 0x10;
    }
    if (this->bIsFastForwarding == false) {
      if (4 < (byte)LogDemo._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      }
      pFVar4 = ::operator_new(0x50);
      if (pFVar4 != (FQueuedReplayTask *)0x0) {
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = (longlong)&___7FQueuedReplayTask__6B_;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        (pFVar4->Driver).WeakPtr = (FWeakObjectPtr)0x0;
        local_res8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&(pFVar4->Driver).WeakPtr,(FObjectPtr)&local_res8);
        *(float *)((longlong)&pFVar4[1]._padding_ + 4) = param_1;
        pFVar4->_padding_ = (longlong)&___7FGotoTimeInSecondsTask__6B_;
        *(undefined1 *)&pFVar4[2]._padding_ = 0;
        AddReplayTask(this,pFVar4);
        return;
      }
      AddReplayTask(this,(FQueuedReplayTask *)0x0);
      return;
    }
  }
LAB_147aef3f3:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnGotoTimeDelegate_Transient,local_48);
  if ((*(int *)&(this->OnGotoTimeDelegate_Transient).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnGotoTimeDelegate_Transient).field_0x8,
     plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_48);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGotoTimeDelegate_Transient);
  return;
}

// InitBase @ 147af0bf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::InitBase
          (UDemoNetDriver *this,bool param_1,FNetworkNotify *param_2,FURL *param_3,bool param_4,
          FString *param_5)

{
  undefined1 *puVar1;
  FReplayHelper *this_00;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  TSharedPtr<INetworkReplayStreamer,1> *pTVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  double dVar10;
  FWeakObjectPtr local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  TSharedPtr<INetworkReplayStreamer,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  bVar3 = UNetDriver::InitBase((UNetDriver *)this,param_1,param_2,param_3,param_4,param_5);
  if (!bVar3) {
    return false;
  }
  this->bChannelsArePaused = '\0';
  this->bIsFastForwardingForCheckpoint = '\0';
  this->bWasStartStreamingSuccessful = '\x01';
  *(undefined8 *)&this->field_0x320 = 0;
  this->bIsFastForwarding = false;
  this->bIsRestoringStartupActors = false;
  this->SavedReplicatedWorldTimeSeconds = 0.0;
  this->SavedSecondsToSkip = 0.0;
  local_68.ObjectIndex = 0;
  local_68.ObjectSerialNumber = 0;
  local_58.Object = (INetworkReplayStreamer *)0x0;
  this->MaxDesiredRecordTimeMS = -1.0;
  FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_58);
  this->bPrioritizeActors = '\0';
  (this->ViewerOverride).WeakPtr = local_68;
  this->PlaybackPacketIndex = 0;
  this->CheckpointSaveMaxMSPerFrame = -1.0;
  pwVar5 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar5,L"skipreplayrollback");
  if (bVar3) {
    this->bSkipStartupActorRollback = true;
  }
  pTVar2 = CVarDemoMaximumRepPrioritizeTime.Ref;
  bVar3 = IsInParallelGameThread();
  if (bVar3) {
LAB_147af0cf9:
    lVar6 = 0;
  }
  else {
    bVar3 = IsInGameThread();
    lVar6 = 4;
    if (bVar3) goto LAB_147af0cf9;
  }
  this->RecordBuildConsiderAndPrioritizeTimeSlice =
       *(float *)((longlong)pTVar2->ShadowedValue + lVar6);
  pTVar2 = DemoNetDriverRecordingPrivate::CVarDemoMaximumRecDestructionInfoTime.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar6 = 4;
    if (!bVar3) goto LAB_147af0d22;
  }
  lVar6 = 0;
LAB_147af0d22:
  this->RecordDestructionInfoReplicationTimeSlice =
       *(float *)((longlong)pTVar2->ShadowedValue + lVar6);
  if (*(float *)&this->field_0xe4 == 0.0) {
    *(undefined4 *)&this->field_0xe4 = 0x40a00000;
  }
  ResetDemoState(this);
  bVar3 = FURL::HasOption(param_3,L"MaxDesiredReplayRecordTimeMS");
  if (bVar3) {
    pwVar5 = FURL::GetOption(param_3,L"MaxDesiredReplayRecordTimeMS=",(wchar_t *)0x0);
    dVar10 = _wtof(pwVar5);
    this->MaxDesiredRecordTimeMS = (float)dVar10;
  }
  bVar3 = FURL::HasOption(param_3,L"CheckpointSaveMaxMSPerFrame");
  if (bVar3) {
    pwVar5 = FURL::GetOption(param_3,L"CheckpointSaveMaxMSPerFrame=",(wchar_t *)0x0);
    dVar10 = _wtof(pwVar5);
    this->CheckpointSaveMaxMSPerFrame = (float)dVar10;
  }
  bVar3 = FURL::HasOption(param_3,L"ActorPrioritizationEnabled");
  if (bVar3) {
    pwVar5 = FURL::GetOption(param_3,L"ActorPrioritizationEnabled=",(wchar_t *)0x0);
    iVar4 = _wtoi(pwVar5);
    this->bPrioritizeActors = (byte)-(iVar4 != 0) >> 3;
  }
  this_00 = &this->ReplayHelper;
  pTVar7 = FReplayHelper::Init(this_00,&local_58,param_3);
  if (&this->ReplayStreamer != pTVar7) {
    (this->ReplayStreamer).Object = pTVar7->Object;
    pTVar7->Object = (INetworkReplayStreamer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ReplayStreamer).SharedReferenceCount,&pTVar7->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  local_58.Object = *(INetworkReplayStreamer **)&this->field_0x198;
  local_58.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x1a0;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FReplayHelper::SetAnalyticsProvider(this_00,(TSharedPtr<IAnalyticsProvider,1> *)&local_58);
  (this->ReplayHelper).CheckpointSaveMaxMSPerFrame = this->CheckpointSaveMaxMSPerFrame;
  uStack_60 = 0;
  local_68 = (FWeakObjectPtr)NotifyDemoRecordFailure;
  uStack_5c = local_58.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->ReplayHelper).OnReplayRecordError.field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TNetResult_W4EReplayResult___Net_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDemoNetDriver____A6AXAEBU__TNetResult_W4EReplayResult___Net_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[3] = 0;
    local_58.Object = (INetworkReplayStreamer *)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_58);
    *(FWeakObjectPtr *)(puVar8 + 4) = local_68;
    puVar8[5] = CONCAT44(uStack_5c,uStack_60);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  uStack_60 = 0;
  local_68 = (FWeakObjectPtr)NotifyDemoPlaybackError;
  uStack_5c = local_58.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->ReplayHelper).OnReplayPlaybackError,(FWriteAccessScope *)&local_48);
  local_30 = &(this->ReplayHelper).OnReplayPlaybackError.field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBU__TNetResult_W4EReplayResult___Net_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDemoNetDriver____A6AXAEBU__TNetResult_W4EReplayResult___Net_UE___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[3] = 0;
    local_58.Object = (INetworkReplayStreamer *)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_58);
    *(FWeakObjectPtr *)(puVar8 + 4) = local_68;
    puVar8[5] = CONCAT44(uStack_5c,uStack_60);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return true;
}

// InitConnect @ 147af1030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::InitConnect
          (UDemoNetDriver *this,FNetworkNotify *param_1,FURL *param_2,FString *param_3)

{
  undefined1 *puVar1;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar2;
  INetworkReplayStreamer *pIVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  FNetGUIDCache *pFVar12;
  UClass *pUVar13;
  UPackage *pUVar14;
  UNetConnection *pUVar15;
  wchar_t *pwVar16;
  FLevelCollection *pFVar17;
  FNetworkReplayVersion *pFVar18;
  undefined8 *puVar19;
  ulong64 uVar20;
  UEnum *pUVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong in_stack_fffffffffffffe58;
  ulonglong uVar24;
  ForAnyElementType local_178;
  undefined8 local_170;
  undefined4 local_168 [2];
  TIndexedContainerIterator<TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_>_const_,ULocalPlayer_*_const,int>
  local_160;
  FString local_148;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FDelegateAllocation local_130;
  ForAnyElementType local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  FScriptContainerElement *local_f8;
  undefined8 local_f0;
  FScriptContainerElement *local_e8;
  undefined8 local_e0;
  FNetworkReplayVersion local_d8;
  undefined1 local_c0;
  undefined1 local_b8 [8];
  FWeakObjectPtr local_b0;
  UEnum *local_a8;
  FString local_a0;
  longlong local_90;
  UDemoNetDriver *local_88;
  UEnum *local_80;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  FNetworkReplayVersion local_40;
  
  lVar23 = *(longlong *)&this->field_0x1b8;
  (this->ReplayHelper).bRecording = false;
  if (((lVar23 == 0) || (*(longlong *)(lVar23 + 0x230) == 0)) ||
     (cVar8 = (**(code **)(*(longlong *)this + 0x2d8))
                        (this,1,param_1,param_2,in_stack_fffffffffffffe58 & 0xffffffffffffff00,
                         param_3), cVar8 == '\0')) {
    pUVar21 = StaticEnum<enum_EReplayResult>();
    local_b8 = (undefined1  [8])0x5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar21);
    }
    local_b0.ObjectIndex = 0;
    local_b0.ObjectSerialNumber = 0;
    local_80 = pUVar21;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar21);
    }
    FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_80);
    local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.Data.ArrayNum = 0;
    local_a0.Data.ArrayMax = 0;
    local_90 = 0;
    local_a8 = pUVar21;
    pwVar16 = ::LexToString(InitConnect);
    ::FString::operator=(&local_a0,pwVar16);
    FReplayHelper::NotifyReplayError(&this->ReplayHelper,(TNetResult<EReplayResult> *)local_b8);
    if (local_90 != 0) {
      (**(code **)(local_90 + -0x10))(local_90 + -0x10);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    return false;
  }
  pFVar12 = TSharedPtr<FNetGUIDCache,1>::operator->
                      ((TSharedPtr<FNetGUIDCache,1> *)&this->field_0x1c8);
  FNetGUIDCache::SetNetworkChecksumMode(pFVar12,SaveButIgnore);
  pTVar5 = CVarForceDisableAsyncPackageMapLoading.Ref;
  bVar9 = IsInParallelGameThread();
  if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  iVar11 = pTVar5->ShadowedValue[0];
  pFVar12 = TSharedPtr<FNetGUIDCache,1>::operator->
                      ((TSharedPtr<FNetGUIDCache,1> *)&this->field_0x1c8);
  FNetGUIDCache::SetAsyncLoadMode(pFVar12,0 < iVar11);
  pUVar13 = Z_Construct_UClass_UDemoNetConnection_NoRegister();
  pUVar14 = GetTransientPackage();
  uVar24 = (ulonglong)param_3 & 0xffffffffffffff00;
  pUVar15 = NewObject<UNetConnection>
                      ((UObject *)pUVar14,pUVar13,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UNetConnection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  *(UNetConnection **)&this->field_0x100 = pUVar15;
  (**(code **)(pUVar15->_padding_ + 0x368))
            (pUVar15,this,2,param_2,1000000,uVar24 & 0xffffffff00000000);
  pwVar16 = FURL::GetOption(param_2,L"LevelPrefixOverride=",(wchar_t *)0x0);
  if (pwVar16 != (wchar_t *)0x0) {
    iVar11 = _wtoi(pwVar16);
    *(int *)&this->field_0x9ec = iVar11;
  }
  pFVar17 = UWorld::FindCollectionByType
                      (*(UWorld **)&this->field_0x1b8,*(int *)&this->field_0x9ec != -1);
  if (pFVar17 != (FLevelCollection *)0x0) {
    (pFVar17->DemoNetDriver).field0_0x0.DebugPtr = this;
  }
  this->bWasStartStreamingSuccessful = '\x01';
  this->bIsWaitingForStream = '\x01';
  ::FString::operator=(&(this->ReplayHelper).ActiveReplayName,&param_2->Map);
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  UEngine::GetLocalPlayerIterator(GEngine,&local_160,*(UWorld **)&this->field_0x1b8);
  for (; (pTVar6 = local_160.Container, lVar23 = (longlong)local_160.Index, -1 < local_160.Index &&
         (local_160.Index < (local_160.Container)->ArrayNum)); local_160.Index = local_160.Index + 1
      ) {
    if ((local_160.Index < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    if (*(longlong *)((pTVar6->AllocatorInstance).Data + lVar23 * 8) != 0) break;
  }
  do {
    pTVar6 = local_160.Container;
    lVar23 = (longlong)local_160.Index;
    if ((local_160.Index < 0) || ((local_160.Container)->ArrayNum <= local_160.Index)) {
      local_118.Data = (FScriptContainerElement *)0x0;
      local_110 = 0;
      local_108 = (void *)0x0;
      local_100 = 0;
      local_f8 = (void *)0x0;
      local_f0 = 0;
      local_e8 = (void *)0x0;
      local_e0 = 0;
      local_d8.AppString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.AppString.Data.ArrayNum = 0;
      local_d8.AppString.Data.ArrayMax = 0;
      local_d8.NetworkVersion = 0;
      local_d8.Changelist = 0;
      if ((FString *)&local_118 != &param_2->Map) {
        uVar22 = (param_2->Map).Data.ArrayNum;
        _Src = (param_2->Map).Data.AllocatorInstance.Data;
        local_110 = (ulonglong)uVar22;
        if (uVar22 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar22,0,&local_118,uVar22,(int *)((longlong)&local_110 + 4));
          memcpy(local_118.Data,_Src,(longlong)(int)uVar22 * 2);
        }
      }
      FURL::ToString(&(this->ReplayHelper).DemoURL,&local_148,false);
      if (local_f8 != (void *)0x0) {
        FMemory::Free(local_f8);
      }
      local_f8 = local_148.Data.AllocatorInstance.Data;
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_e8 != (void *)0x0) {
        FMemory::Free(local_e8);
      }
      local_e8 = local_178.Data;
      local_e0 = local_170;
      local_170 = 0;
      local_178.Data = (FScriptContainerElement *)0x0;
      local_c0 = 0;
      pFVar18 = FNetworkVersion::GetReplayVersion(&local_40);
      if (&local_d8 != pFVar18) {
        if (local_d8.AppString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.AppString.Data.AllocatorInstance.Data);
        }
        local_d8.AppString.Data.AllocatorInstance.Data =
             (pFVar18->AppString).Data.AllocatorInstance.Data;
        (pFVar18->AppString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.AppString.Data.ArrayNum = (pFVar18->AppString).Data.ArrayNum;
        local_d8.AppString.Data.ArrayMax = (pFVar18->AppString).Data.ArrayMax;
        (pFVar18->AppString).Data.ArrayNum = 0;
        (pFVar18->AppString).Data.ArrayMax = 0;
      }
      local_d8.NetworkVersion = pFVar18->NetworkVersion;
      local_d8.Changelist = pFVar18->Changelist;
      if (local_40.AppString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.AppString.Data.AllocatorInstance.Data);
      }
      pTVar2 = (this->ReplayStreamer).SharedReferenceCount.ReferenceController;
      pIVar3 = (this->ReplayStreamer).Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pIVar3 == (INetworkReplayStreamer *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      pcVar4 = *(code **)(pIVar3->_padding_ + 8);
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)ReplayStreamingReady;
      local_148.Data._8_8_ = local_148.Data._8_8_ & 0xffffffff00000000;
      local_130.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_138,(FWriteAccessScope *)&local_60);
      local_48 = &local_130;
      puVar19 = UE::Core::Private::DelegateAllocate(0x30,&local_130);
      if (puVar19 != (undefined8 *)0x0) {
        *puVar19 = &
                   ___7__TCommonDelegateInstanceState___A6AXAEBUFStartStreamingResult___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar20 = FDelegateHandle::GenerateNewID();
        puVar19[2] = uVar20;
        *puVar19 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDemoNetDriver____A6AXAEBUFStartStreamingResult___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar19[3] = 0;
        local_88 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar19 + 3),(FObjectPtr)&local_88);
        puVar19[4] = local_148.Data.AllocatorInstance.Data;
        puVar19[5] = local_148.Data._8_8_;
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
      (*pcVar4)(pIVar3,&local_118);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_138,(FWriteAccessScope *)&local_78);
      if ((local_130.DelegateSize != 0) &&
         (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_130,0,0,0x10);
        local_130.DelegateSize = 0;
      }
      if (local_78.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
      }
      if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_130.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      bVar9 = this->bWasStartStreamingSuccessful;
      if (local_d8.AppString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.AppString.Data.AllocatorInstance.Data);
      }
      if (local_e8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8);
      }
      if (local_f8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8);
      }
      if (local_108 != (void *)0x0) {
        FMemory::Free(local_108);
      }
      if (local_118.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data);
      }
      if (local_178.Data == (FScriptContainerElement *)0x0) {
        return bVar9;
      }
      FMemory::Free(local_178.Data);
      return bVar9;
    }
    if ((local_160.Index < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    iVar11 = local_160.Index;
    pTVar7 = local_160.Container;
    if (*(longlong *)((pTVar6->AllocatorInstance).Data + lVar23 * 8) != 0) {
      uVar22 = 0;
      if (local_160.Index < (local_160.Container)->ArrayNum) {
        uVar22 = (uint)~local_160.Index >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      local_168[0] = *(undefined4 *)
                      (*(longlong *)((pTVar7->AllocatorInstance).Data + (longlong)iVar11 * 8) + 0xf0
                      );
      if (((local_178.Data <= (FScriptContainerElement *)local_168) &&
          ((FScriptContainerElement *)local_168 < local_178.Data + (longlong)local_170._4_4_ * 4))
         && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      iVar11 = (int)local_170;
      if ((int)local_170 == local_170._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_178,(int *)((longlong)&local_170 + 4));
      }
      local_170 = CONCAT44(local_170._4_4_,iVar11 + 1);
      *(undefined4 *)(local_178.Data + (longlong)iVar11 * 4) = local_168[0];
    }
    do {
      pTVar6 = local_160.Container;
      uVar22 = local_160.Index + 1;
      local_160.Index = uVar22;
      if (((int)uVar22 < 0) || ((local_160.Container)->ArrayNum <= (int)uVar22)) break;
      if (((int)uVar22 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
    } while (*(longlong *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar22 * 8) == 0);
  } while( true );
}

// InitConnectInternal @ 147af18a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall UDemoNetDriver::InitConnectInternal(UDemoNetDriver *this,FString *param_1)

{
  int *piVar1;
  TArray<FLevelNameAndTime,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FLevelNameAndTime,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FLevelNameAndTime *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  wchar_t *pwVar12;
  UEnum *pUVar13;
  FWorldContext *pFVar14;
  UObject *pUVar15;
  UClass *pUVar16;
  UPendingNetGame *pUVar17;
  ForAnyElementType FVar18;
  longlong *plVar19;
  int iVar20;
  undefined1 auStackY_218 [32];
  undefined1 local_1c8 [8];
  FWeakObjectPtr local_1c0;
  UEnum *local_1b8;
  FString local_1b0;
  longlong local_1a0;
  undefined1 local_198 [8];
  FWeakObjectPtr local_190;
  UEnum *local_188;
  FString local_180;
  longlong local_170;
  UEnum *local_168;
  UEnum *local_160;
  FURL local_158;
  FString local_e8;
  undefined1 local_d8 [24];
  UObject *local_c0;
  longlong local_88;
  longlong local_78 [3];
  longlong *local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  ResetDemoState(this);
  bVar10 = FReplayHelper::ReadPlaybackDemoHeader(&this->ReplayHelper,param_1);
  if (bVar10) {
    FReplayHelper::SetPlaybackNetworkVersions
              (&this->ReplayHelper,*(UNetConnection **)&this->field_0x100);
    UNetDriver::CreateInitialClientChannels((UNetDriver *)this);
    pTVar9 = CVarDemoAsyncLoadWorld.Ref;
    bVar10 = IsInParallelGameThread();
    if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    bVar10 = 0 < pTVar9->ShadowedValue[0];
    pwVar12 = FURL::GetOption(&(this->ReplayHelper).DemoURL,L"AsyncLoadWorldOverride=",
                              (wchar_t *)0x0);
    if (pwVar12 != (wchar_t *)0x0) {
      bVar10 = FToBoolHelper::FromCStringWide(pwVar12);
    }
    TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
    AddUObject<UDemoNetDriver>
              ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *)
               &FCoreUObjectDelegates::PostLoadMapWithWorld,(UDemoNetDriver *)local_d8,
               (pmf_280c2742 *)this);
    if (*(int *)&this->field_0x9ec != -1) {
      FReplayHelper::ResetLevelStatuses(&this->ReplayHelper);
      FReplayHelper::ResetLevelMap(&this->ReplayHelper);
      return true;
    }
    if ((bVar10 != false) && (*(char *)(*(longlong *)&this->field_0x1b8 + 0x18a) != '\x03')) {
      pTVar2 = &(this->ReplayHelper).PlaybackDemoHeader.LevelNamesAndTimes;
      pTVar3 = &(this->ReplayHelper).LevelNamesAndTimes;
      if (pTVar3 != pTVar2) {
        DestructItems<FLevelNameAndTime,int>
                  ((FLevelNameAndTime *)(pTVar3->AllocatorInstance).Data,
                   (this->ReplayHelper).LevelNamesAndTimes.ArrayNum);
        iVar5 = (this->ReplayHelper).PlaybackDemoHeader.LevelNamesAndTimes.ArrayNum;
        piVar1 = &(this->ReplayHelper).LevelNamesAndTimes.ArrayMax;
        pFVar6 = (FLevelNameAndTime *)(pTVar2->AllocatorInstance).Data;
        iVar20 = *piVar1;
        (this->ReplayHelper).LevelNamesAndTimes.ArrayNum = iVar5;
        if ((iVar5 == 0) && (iVar20 == 0)) {
          *piVar1 = 0;
          ProcessSeamlessTravel(this,0);
          return true;
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar5,iVar20,&pTVar3->AllocatorInstance,iVar5,piVar1);
        ConstructItems<FLevelNameAndTime,FLevelNameAndTime,int>
                  ((pTVar3->AllocatorInstance).Data,pFVar6,iVar5);
      }
      ProcessSeamlessTravel(this,0);
      return true;
    }
    FURL::FURL(&local_158,(wchar_t *)0x0);
    if (((this->ReplayHelper).PlaybackDemoHeader.LevelNamesAndTimes.ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    pFVar7 = (this->ReplayHelper).PlaybackDemoHeader.LevelNamesAndTimes.AllocatorInstance.Data;
    iVar5 = *(int *)(pFVar7 + 8);
    iVar20 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar20 = 0;
    }
    ::FString::AssignRange(&local_158.Map,*(wchar_t **)pFVar7,iVar20);
    bVar10 = UEngine::MakeSureMapNameIsValid(GEngine,&local_158.Map);
    if (bVar10) {
      pFVar14 = UEngine::GetWorldContextFromWorld(GEngine,*(UWorld **)&this->field_0x1b8);
      if (pFVar14 != (FWorldContext *)0x0) {
        UWorld::ClearDemoNetDriver(*(UWorld **)&this->field_0x1b8);
        (**(code **)(*(longlong *)this + 0x410))(this,0);
        pUVar15 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar15,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar16 = Z_Construct_UClass_UDemoPendingNetGame_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)(local_d8 + 0x10),pUVar16);
        local_c0 = pUVar15;
        pUVar17 = (UPendingNetGame *)
                  StaticConstructObject_Internal
                            ((FStaticConstructObjectParameters *)(local_d8 + 0x10));
        if (local_88 != 0) {
          plVar19 = local_78;
          if (local_60 != (longlong *)0x0) {
            plVar19 = local_60;
          }
          (**(code **)(*plVar19 + 0x10))();
        }
        (pUVar17->DemoNetDriver).field0_0x0.DebugPtr = this;
        ::FString::operator=(&(pUVar17->URL).Protocol,&local_158.Protocol);
        ::FString::operator=(&(pUVar17->URL).Host,&local_158.Host);
        (pUVar17->URL).Port = local_158.Port;
        (pUVar17->URL).Valid = local_158.Valid;
        ::FString::operator=(&(pUVar17->URL).Map,&local_158.Map);
        ::FString::operator=(&(pUVar17->URL).RedirectURL,&local_158.RedirectURL);
        pTVar4 = &(pUVar17->URL).Op;
        if (pTVar4 != &local_158.Op) {
          DestructItems<FString,int>
                    ((FString *)(pTVar4->AllocatorInstance).Data,(pUVar17->URL).Op.ArrayNum);
          piVar1 = &(pUVar17->URL).Op.ArrayMax;
          iVar5 = *piVar1;
          (pUVar17->URL).Op.ArrayNum = local_158.Op.ArrayNum;
          if ((local_158.Op.ArrayNum == 0) && (iVar5 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_158.Op.ArrayNum,iVar5,&pTVar4->AllocatorInstance,
                       local_158.Op.ArrayNum,piVar1);
            ConstructItems<FString,FString,int>
                      ((pTVar4->AllocatorInstance).Data,
                       (FString *)local_158.Op.AllocatorInstance.Data,local_158.Op.ArrayNum);
          }
        }
        ::FString::operator=(&(pUVar17->URL).Portal,&local_158.Portal);
        pUVar17->bSuccessfullyConnected = true;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar17);
        }
        (pFVar14->PendingNetGame).field0_0x0.DebugPtr = pUVar17;
        FURL::~FURL(&local_158);
        return true;
      }
      ::FString::PrintfImpl(&local_e8,L"No world context");
      ::FString::operator=(param_1,&local_e8);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (1 < (byte)LogDemo._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      }
      pUVar13 = StaticEnum<enum_EReplayResult>();
      local_198 = (undefined1  [8])0x5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      local_190.ObjectIndex = 0;
      local_190.ObjectSerialNumber = 0;
      local_160 = pUVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      FWeakObjectPtr::operator=(&local_190,(FObjectPtr)&local_160);
      local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_180.Data.ArrayNum = 0;
      local_180.Data.ArrayMax = 0;
      local_170 = 0;
      local_188 = pUVar13;
      pwVar12 = ::LexToString(InitConnect);
      ::FString::operator=(&local_180,pwVar12);
      FReplayHelper::NotifyReplayError(&this->ReplayHelper,(TNetResult<EReplayResult> *)local_198);
      FVar18.Data = local_180.Data.AllocatorInstance.Data;
      if (local_170 != 0) {
        (**(code **)(local_170 + -0x10))(local_170 + -0x10);
        FVar18.Data = local_180.Data.AllocatorInstance.Data;
      }
    }
    else {
      pUVar13 = StaticEnum<enum_EReplayResult>();
      local_1c8 = (undefined1  [8])0x6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      local_1c0.ObjectIndex = 0;
      local_1c0.ObjectSerialNumber = 0;
      local_168 = pUVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      FWeakObjectPtr::operator=(&local_1c0,(FObjectPtr)&local_168);
      local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b0.Data.ArrayNum = 0;
      local_1b0.Data.ArrayMax = 0;
      local_1a0 = 0;
      local_1b8 = pUVar13;
      pwVar12 = ::LexToString(LoadMap);
      ::FString::operator=(&local_1b0,pwVar12);
      FReplayHelper::NotifyReplayError(&this->ReplayHelper,(TNetResult<EReplayResult> *)local_1c8);
      FVar18.Data = local_1b0.Data.AllocatorInstance.Data;
      if (local_1a0 != 0) {
        (**(code **)(local_1a0 + -0x10))(local_1a0 + -0x10);
        FVar18.Data = local_1b0.Data.AllocatorInstance.Data;
      }
    }
    if (FVar18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar18.Data);
    }
    if (local_158.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Portal.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_158.Op.AllocatorInstance.Data,local_158.Op.ArrayNum)
    ;
    if (local_158.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Op.AllocatorInstance.Data);
    }
    if (local_158.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.RedirectURL.Data.AllocatorInstance.Data);
    }
    if (local_158.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Map.Data.AllocatorInstance.Data);
    }
    if (local_158.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Host.Data.AllocatorInstance.Data);
    }
    if (local_158.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Protocol.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// InitDefaults @ 147af1fa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::InitDefaults(UDemoNetDriver *this)

{
  FString *pFVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TConsoleVariableData<float> *pTVar5;
  bool bVar6;
  float fVar7;
  FGuid *this_00;
  FString *pFVar8;
  FString local_38;
  FString local_28;
  FGuid local_18;
  
  this_00 = FGuid::NewGuid(&local_18);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FGuid::AppendString(this_00,&local_38,Digits);
  pFVar8 = ::FString::ToLower(&local_38,&local_28);
  pFVar1 = &this->DemoSessionID;
  if (pFVar1 != pFVar8) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DemoSessionID).Data.ArrayNum = (pFVar8->Data).ArrayNum;
    (this->DemoSessionID).Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this->bIsWaitingForHeaderDownload = '\0';
  this->bIsWaitingForStream = '\0';
  this->field_0x32a = this->field_0x32a | 1;
  this->field_0x329 = this->field_0x329 | 0x60;
  (this->ReplayHelper).CurrentLevelIndex = 0;
  this->MaxArchiveReadPos = 0;
  this->bSkipStartupActorRollback = false;
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    if ((this->LevelIntervals).ArrayMax < 0x200) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0x200,&(this->LevelIntervals).AllocatorInstance,
                 (this->LevelIntervals).ArrayNum,&(this->LevelIntervals).ArrayMax);
    }
    FNetworkDemoHeader::SetDefaultNetworkVersions(&(this->ReplayHelper).PlaybackDemoHeader);
  }
  pTVar5 = CVarDemoMaximumRepPrioritizeTime.Ref;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    if (!bVar6) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  this->RecordBuildConsiderAndPrioritizeTimeSlice = pTVar5->ShadowedValue[0];
  pTVar5 = DemoNetDriverRecordingPrivate::CVarDemoMaximumRecDestructionInfoTime.Ref;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    if (!bVar6) {
      fVar7 = pTVar5->ShadowedValue[1];
      goto LAB_147af2123;
    }
  }
  fVar7 = pTVar5->ShadowedValue[0];
LAB_147af2123:
  this->RecordDestructionInfoReplicationTimeSlice = fVar7;
  return;
}

// InitDestroyedStartupActors @ 147af2300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::InitDestroyedStartupActors(UDemoNetDriver *this)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  FDeltaCheckpointData *pFVar3;
  int iVar4;
  ULevel *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TArray<ULevel_*,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  int iVar9;
  TArray<FReplicatedStaticActorDestructionInfo,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  TIndexedContainerIterator<TArray<ULevel_*,TSizedDefaultAllocator<32>_>_const_,ULevel_*_const,int>
  local_38;
  
  UNetDriver::InitDestroyedStartupActors((UNetDriver *)this);
  if (*(longlong *)&this->field_0x1b8 != 0) {
    if (((this->ReplayHelper).RecordingDeletedNetStartupActors.ArrayNum != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReplayHelper.RecordingDeletedNetStartupActors.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                           ,0x13e9,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((this->ReplayHelper).RecordingDeltaCheckpointData.RecordingDeletedNetStartupActors.ArrayNum
         != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReplayHelper.RecordingDeltaCheckpointData.RecordingDeletedNetStartupActors.Num() == 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                           ,0x13ea,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    UWorld::GetLevelIterator(*(UWorld **)&this->field_0x1b8,&local_38);
    for (; (pTVar7 = local_38.Container, lVar11 = (longlong)local_38.Index, -1 < local_38.Index &&
           (local_38.Index < (local_38.Container)->ArrayNum)); local_38.Index = local_38.Index + 1)
    {
      if ((local_38.Index < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = *(ULevel **)((pTVar7->AllocatorInstance).Data + lVar11 * 8);
      if (this_00 != (ULevel *)0x0) {
        pTVar10 = ULevel::GetDestroyedReplicatedStaticActors(this_00);
        pFVar13 = (pTVar10->AllocatorInstance).Data;
        iVar4 = pTVar10->ArrayNum;
        pFVar12 = pFVar13 + (longlong)iVar4 * 0x40;
        pFVar14 = pFVar13 + 8;
        while( true ) {
          if (pTVar10->ArrayNum != iVar4) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FReplicatedStaticActorDestructionInfo_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (pFVar13 == pFVar12) break;
          pTVar2 = &(this->ReplayHelper).RecordingDeletedNetStartupActors;
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar5 <= pFVar14) &&
              (pFVar14 < pFVar5 + (longlong)
                                  (this->ReplayHelper).RecordingDeletedNetStartupActors.ArrayMax *
                                  0x10)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar9 = (this->ReplayHelper).RecordingDeletedNetStartupActors.ArrayNum;
          piVar1 = &(this->ReplayHelper).RecordingDeletedNetStartupActors.ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->ReplayHelper).RecordingDeletedNetStartupActors.ArrayNum = iVar9 + 1;
          ::FString::FString((FString *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10),
                             (FString *)pFVar14);
          pFVar3 = &(this->ReplayHelper).RecordingDeltaCheckpointData;
          pFVar5 = (pFVar3->RecordingDeletedNetStartupActors).AllocatorInstance.Data;
          if (((pFVar5 <= pFVar14) &&
              (pFVar14 < pFVar5 + (longlong)
                                  (this->ReplayHelper).RecordingDeltaCheckpointData.
                                  RecordingDeletedNetStartupActors.ArrayMax * 0x10)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar9 = (this->ReplayHelper).RecordingDeltaCheckpointData.RecordingDeletedNetStartupActors
                  .ArrayNum;
          piVar1 = &(this->ReplayHelper).RecordingDeltaCheckpointData.
                    RecordingDeletedNetStartupActors.ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,(ForAnyElementType *)pFVar3,piVar1);
          }
          (this->ReplayHelper).RecordingDeltaCheckpointData.RecordingDeletedNetStartupActors.
          ArrayNum = iVar9 + 1;
          ::FString::FString((FString *)
                             ((pFVar3->RecordingDeletedNetStartupActors).AllocatorInstance.Data +
                             (longlong)iVar9 * 0x10),(FString *)pFVar14);
          pFVar13 = pFVar13 + 0x40;
          pFVar14 = pFVar14 + 0x40;
        }
      }
    }
  }
  return;
}

// InitListen @ 147af25f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::InitListen
          (UDemoNetDriver *this,FNetworkNotify *param_1,FURL *param_2,bool param_3,FString *param_4)

{
  TUniquePtr<FDemoBudgetLogHelper,TDefaultDelete<FDemoBudgetLogHelper>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  AWorldSettings *pAVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  UNetConnection *this_00;
  UPackage *pUVar10;
  FString *pFVar11;
  FDemoBudgetLogHelper *pFVar12;
  FDemoBudgetLogHelper *pFVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  FString *local_f0;
  longlong local_e8;
  FString local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  lVar14 = *(longlong *)this;
  local_f0 = param_4;
  local_f8 = CONCAT31(local_f8._1_3_,param_3);
  (this->ReplayHelper).bRecording = true;
  cVar4 = (**(code **)(lVar14 + 0x2d8))(this,0,param_1,param_2);
  if (cVar4 == '\0') {
    return false;
  }
  if ((*(longlong *)&this->field_0x1b8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("World != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                         ,0x46a,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pAVar7 = UWorld::GetWorldSettings(*(UWorld **)&this->field_0x1b8,false,true);
  if (pAVar7 == (AWorldSettings *)0x0) {
    ::FString::operator=(param_4,L"No WorldSettings!!");
    return false;
  }
  pUVar8 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar8,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = Z_Construct_UClass_UDemoNetConnection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar9);
  local_c8._8_8_ = pUVar8;
  this_00 = (UNetConnection *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar15 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar15 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  pFVar13 = (FDemoBudgetLogHelper *)0x0;
  local_f0 = (FString *)((ulonglong)local_f0 & 0xffffffff00000000);
  local_f8 = 1000000;
  (**(code **)(this_00->_padding_ + 0x368))(this_00,this,3,param_2);
  UNetDriver::AddClientConnection((UNetDriver *)this,this_00);
  pUVar10 = UObjectBaseUtility::GetOutermost(*(UObjectBaseUtility **)&this->field_0x1b8);
  UNetConnection::SetClientWorldPackageName(this_00,(FName)pUVar10->_padding_);
  pFVar11 = ::FName::ToString((FName *)&this->field_0x218,&local_e0);
  pFVar12 = ::operator_new(0x50);
  if (pFVar12 != (FDemoBudgetLogHelper *)0x0) {
    pFVar12->bOverBudgetThisFrame = false;
    pFVar12->FirstWarningTime = 0.0;
    pFVar12->LogSamplesByBudget[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar12->LogSamplesByBudget[0].Data.ArrayNum = 0;
    pFVar12->LogSamplesByBudget[0].Data.ArrayMax = 0;
    pFVar12->LogSamplesByBudget[1].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar12->LogSamplesByBudget[1].Data.ArrayNum = 0;
    pFVar12->LogSamplesByBudget[1].Data.ArrayMax = 0;
    (pFVar12->Identifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar12->Identifier).Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar12->Identifier).Data.ArrayNum = (pFVar11->Data).ArrayNum;
    (pFVar12->Identifier).Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
    FDemoBudgetLogHelper::ResetCounters(pFVar12);
    pFVar13 = pFVar12;
  }
  pTVar1 = &this->BudgetLogHelper;
  if (pTVar1 == (TUniquePtr<FDemoBudgetLogHelper,TDefaultDelete<FDemoBudgetLogHelper>_> *)&local_e8)
  {
    if (pFVar13 == (FDemoBudgetLogHelper *)0x0) goto LAB_147af2877;
    pFVar2 = (pFVar13->Identifier).Data.AllocatorInstance.Data;
    pFVar11 = &pFVar13->Identifier;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    lVar14 = 2;
    do {
      pFVar2 = pFVar11[-1].Data.AllocatorInstance.Data;
      pFVar11 = pFVar11 + -1;
      lVar14 = lVar14 + -1;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar12 = pFVar13;
    } while (lVar14 != 0);
  }
  else {
    pFVar12 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar13;
    if (pFVar12 == (FDemoBudgetLogHelper *)0x0) goto LAB_147af2877;
    pFVar2 = (pFVar12->Identifier).Data.AllocatorInstance.Data;
    pFVar11 = &pFVar12->Identifier;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    lVar14 = 2;
    do {
      pFVar2 = pFVar11[-1].Data.AllocatorInstance.Data;
      pFVar11 = pFVar11 + -1;
      lVar14 = lVar14 + -1;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    } while (lVar14 != 0);
  }
  ::operator_delete(pFVar12,0x50);
LAB_147af2877:
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  FReplayHelper::StartRecording(&this->ReplayHelper,this_00);
  SpawnDemoRecSpectator(this,this_00,param_2);
  return true;
}

// InternalCreateChannelByName @ 147af4680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UChannel * __thiscall
UDemoNetDriver::InternalCreateChannelByName(UDemoNetDriver *this,FName *param_1)

{
  UChannel *pUVar1;
  FUObjectItem *this_00;
  
  pUVar1 = UNetDriver::InternalCreateChannelByName((UNetDriver *)this,param_1);
  if (pUVar1 != (UChannel *)0x0) {
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&pUVar1->_padding_ + 4));
    FUObjectItem::ClearRootFlags(this_00,Async);
  }
  return pUVar1;
}

// IsAnyTaskPending @ 147af4740

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::IsAnyTaskPending(UDemoNetDriver *this)

{
  if (((this->QueuedReplayTasks).ArrayNum < 1) &&
     ((this->ActiveReplayTask).Object == (FQueuedReplayTask *)0x0)) {
    return false;
  }
  return true;
}

// IsAvailable @ 147af4760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::IsAvailable(UDemoNetDriver *this)

{
  return true;
}

// IsLevelInitializedForActor @ 147af48f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::IsLevelInitializedForActor
          (UDemoNetDriver *this,AActor *param_1,UNetConnection *param_2)

{
  bool bVar1;
  
  if ((this->ReplayHelper).DemoFrameNum < 3) {
    bVar1 = UNetDriver::IsLevelInitializedForActor((UNetDriver *)this,param_1,param_2);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// IsNamedTaskInQueue @ 147af4920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::IsNamedTaskInQueue(UDemoNetDriver *this,FName *param_1)

{
  int iVar1;
  FQueuedReplayTask *pFVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  pFVar2 = (this->ActiveReplayTask).Object;
  if ((pFVar2 == (FQueuedReplayTask *)0x0) ||
     (pFVar3 = (FName *)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,local_res8),
     *pFVar3 != *param_1)) {
    iVar1 = (this->QueuedReplayTasks).ArrayNum;
    pFVar4 = (this->QueuedReplayTasks).AllocatorInstance.Data;
    pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->QueuedReplayTasks).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedRef<FQueuedReplayTask,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar5) {
        return false;
      }
      pFVar3 = (FName *)(**(code **)(**(longlong **)pFVar4 + 0x18))
                                  (*(longlong **)pFVar4,local_res18);
      if (*pFVar3 == *param_1) break;
      pFVar4 = pFVar4 + 0x10;
    }
  }
  return true;
}

// IsNetResourceValid @ 147af49e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::IsNetResourceValid(UDemoNetDriver *this)

{
  return true;
}

// IsPlaying @ 147af4a10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::IsPlaying(UDemoNetDriver *this)

{
  EConnectionState EVar1;
  
  if ((this->ReplayHelper).bIsLoadingCheckpoint != false) {
    return true;
  }
  if ((*(UNetConnection **)&this->field_0x100 != (UNetConnection *)0x0) &&
     (EVar1 = UNetConnection::GetConnectionState(*(UNetConnection **)&this->field_0x100),
     EVar1 != USOCK_Closed)) {
    return true;
  }
  return false;
}

// IsPlayingClientReplay @ 147af4a50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::IsPlayingClientReplay(UDemoNetDriver *this)

{
  EConnectionState EVar1;
  
  if ((this->ReplayHelper).bIsLoadingCheckpoint == false) {
    if (*(UNetConnection **)&this->field_0x100 == (UNetConnection *)0x0) {
      return false;
    }
    EVar1 = UNetConnection::GetConnectionState(*(UNetConnection **)&this->field_0x100);
    if (EVar1 == USOCK_Closed) {
      return false;
    }
  }
  if (((this->ReplayHelper).PlaybackDemoHeader.HeaderFlags & ClientRecorded) == None) {
    return false;
  }
  return true;
}

// IsRecording @ 147af4ac0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::IsRecording(UDemoNetDriver *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EConnectionState EVar4;
  
  if ((0 < *(int *)&this->field_0x110) && (**(longlong **)&this->field_0x108 != 0)) {
    if (*(int *)&this->field_0x110 < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    EVar4 = UNetConnection::GetConnectionState
                      ((UNetConnection *)**(undefined8 **)&this->field_0x108);
    if (EVar4 != USOCK_Closed) {
      return true;
    }
  }
  return false;
}

// IsRecordingPaused @ 147af4b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::IsRecordingPaused(UDemoNetDriver *this)

{
  return (this->ReplayHelper).bPauseRecording;
}

// IsSavingCheckpoint @ 147af4d60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::IsSavingCheckpoint(UDemoNetDriver *this)

{
  if ((0 < *(int *)&this->field_0x110) && (**(longlong **)&this->field_0x108 != 0)) {
    return *(char *)(**(longlong **)&this->field_0x108 + 0x17c8) != '\0';
  }
  return false;
}

// IsServer @ 147af4d90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::IsServer(UDemoNetDriver *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EConnectionState EVar4;
  
  if (*(longlong *)&this->field_0x100 == 0) {
    return true;
  }
  if ((0 < *(int *)&this->field_0x110) && (**(longlong **)&this->field_0x108 != 0)) {
    if ((*(int *)&this->field_0x110 < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    EVar4 = UNetConnection::GetConnectionState
                      ((UNetConnection *)**(undefined8 **)&this->field_0x108);
    if (EVar4 != USOCK_Closed) {
      return true;
    }
  }
  return false;
}

// JumpToEndOfLiveReplay @ 147af57d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::JumpToEndOfLiveReplay(UDemoNetDriver *this)

{
  TReferenceControllerBase<1> *pTVar1;
  INetworkReplayStreamer *pIVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  ulonglong local_38;
  FDestructionSentinel local_30;
  
  if (4 < (byte)LogDemo._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
  }
  pTVar1 = (this->ReplayStreamer).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->ReplayStreamer).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (INetworkReplayStreamer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = (**(code **)(pIVar2->_padding_ + 0x60))(pIVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  fVar4 = __real_3a83126f;
  (this->ReplayHelper).DemoTotalTime = (float)uVar6 * __real_3a83126f;
  pTVar1 = (this->ReplayStreamer).SharedReferenceCount.ReferenceController;
  pIVar2 = (this->ReplayStreamer).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar2 == (INetworkReplayStreamer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = (**(code **)(pIVar2->_padding_ + 0x60))(pIVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (iVar7 - 5000U != 0) {
    local_38 = 0;
    local_48 = (undefined1  [8])0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    GotoTimeInSeconds(this,(float)(iVar7 - 5000U) * fVar4,
                      (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    if (((int)local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = local_38 & 0xffffffff00000000;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_48);
  }
  return;
}

// LoadCheckpoint @ 147af5d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::LoadCheckpoint(UDemoNetDriver *this,FGotoResult *param_1)

{
  int *piVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar2;
  TArray<TUniquePtr<FDeltaCheckpointData,TDefaultDelete<FDeltaCheckpointData>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FNetworkGUID *pFVar4;
  char cVar5;
  uint uVar6;
  TReferenceControllerBase<1> *pTVar7;
  INetworkReplayStreamer *pIVar8;
  UWorld *pUVar9;
  UActorChannel *this_00;
  APlayerController *pAVar10;
  FFastPathLoadBuffer *pFVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  TConsoleVariableData<int> *pTVar14;
  FGotoResult *pFVar15;
  FGotoResult *pFVar16;
  bool bVar17;
  undefined1 uVar18;
  bool bVar19;
  bool bVar20;
  Type TVar21;
  int iVar22;
  int iVar23;
  TStatId TVar24;
  FArchiveState *pFVar25;
  longlong lVar26;
  FActorIteratorState *pFVar27;
  AActor *pAVar28;
  FNetGUIDCache *pFVar29;
  UClass *pUVar30;
  UPackage *pUVar31;
  UNetConnection *pUVar32;
  FNetworkGUID FVar33;
  TObjectPtr<AActor>_u_0 this_01;
  TObjectPtr<AActor>_u_0 TVar34;
  TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID> *pTVar35;
  FString *pFVar36;
  ulonglong uVar37;
  FNetGuidCacheObject *this_02;
  undefined8 *puVar38;
  FName *pFVar39;
  longlong lVar40;
  ulonglong uVar41;
  TTuple<FNetworkGUID,UActorChannel_*> *pTVar42;
  UObject *pUVar43;
  uint uVar44;
  uint uVar45;
  AActor **ppAVar46;
  ForElementType<FSetElementId> FVar47;
  ForAnyElementType FVar48;
  wchar_t *pwVar49;
  int iVar50;
  FScriptContainerElement *pFVar51;
  TMap<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *this_03;
  uint uVar52;
  wchar_t *pwVar53;
  TBitArray<FDefaultBitArrayAllocator> *pTVar54;
  uint *puVar55;
  FNetworkGUID_u_0 *pFVar56;
  FArchiveState *pFVar57;
  float fVar58;
  undefined1 auStackY_6b8 [32];
  uchar local_667;
  byte local_666;
  undefined1 local_665;
  undefined1 local_664;
  undefined1 local_663;
  undefined1 local_662;
  undefined1 local_661;
  uint local_660 [2];
  ForAnyElementType local_658;
  undefined8 local_650;
  int local_648;
  uint local_644;
  FString local_640;
  ForAnyElementType local_630;
  undefined8 local_628;
  uint local_620 [2];
  FArchiveState *local_618;
  ulonglong local_610;
  ForAnyElementType local_608;
  undefined8 local_600;
  uint local_5f8 [2];
  FGotoResult *local_5f0;
  FString local_5e8;
  uint local_5d8 [2];
  TObjectPtr<AActor>_u_0 local_5d0;
  FWeakObjectPtr local_5c8;
  FWeakObjectPtr local_5c0;
  ulong64 local_5b8;
  FNetworkGUID_u_0 local_5b0;
  FWeakObjectPtr local_5a8;
  FWeakObjectPtr local_5a0;
  FName local_598;
  byte local_590;
  undefined8 local_588;
  longlong local_580;
  FName local_578;
  undefined8 local_570;
  undefined4 local_568;
  uint uStack_564;
  undefined4 uStack_560;
  uint uStack_55c;
  undefined8 local_558;
  undefined8 local_550;
  FName local_548;
  uint local_540 [2];
  undefined8 local_538;
  byte local_530;
  FString local_528;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_518;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_508;
  undefined1 local_4f8 [16];
  char *local_4e8;
  undefined1 local_4e0 [8];
  undefined1 local_4d8 [8];
  int local_4d0;
  UObject *local_4c8;
  TObjectPtr<AActor>_u_0 local_4c0;
  UObject *local_4b8;
  APlayerController *local_4b0;
  long64 local_4a8;
  int local_4a0;
  FGotoResult *local_498;
  int iStack_490;
  uint uStack_48c;
  uint *local_488;
  undefined4 uStack_480;
  int iStack_47c;
  int local_478;
  undefined4 uStack_474;
  int iStack_470;
  undefined4 uStack_46c;
  FGotoResult *local_468;
  undefined1 auStack_460 [16];
  uint uStack_450;
  uint uStack_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 *local_438;
  undefined8 *local_430;
  FPlaybackPacket *local_428;
  int iStack_420;
  undefined4 uStack_41c;
  FPlaybackPacket *local_418;
  int iStack_410;
  undefined4 uStack_40c;
  FName local_400;
  FString local_3f8;
  FString local_3e8;
  TArrayView<FPlaybackPacket,int> local_3d8;
  TArrayView<FPlaybackPacket,int> local_3c8;
  longlong local_3b8;
  ulonglong uStack_3b0;
  undefined1 local_3a8 [8];
  undefined1 local_3a0 [8];
  source_location local_398;
  FName local_378 [2];
  TActorIteratorBase<FActorIterator> local_368;
  FURL local_308;
  TActorIteratorBase<FActorIterator> local_298;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  TActorIteratorBase<FActorIterator> local_1e8;
  TActorIteratorBase<FActorIterator> local_188;
  FURL local_128;
  undefined4 local_9c;
  TSet<AActor_const_*,DefaultKeyFuncs<AActor_const_*,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_6b8;
  local_5f0 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FThreadSafeStaticStatInner<`UDemoNetDriver::LoadCheckpoint'::__l2::FStat_STAT_ReplayCheckpointLoadTime,1>
    ::GetStatId(&StatPtr_STAT_ReplayCheckpointLoadTime);
    _Init_thread_footer(&::_TSS0);
  }
  local_4f8._0_4_ = 4000;
  local_4e8 = "bool __cdecl UDemoNetDriver::LoadCheckpoint(const struct FGotoResult &)";
  local_4f8._8_8_ =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp";
  local_4f8._4_4_ = 2;
  TVar24 = FThreadSafeStaticStatInner<`UDemoNetDriver::LoadCheckpoint'::__l2::FStat_STAT_ReplayCheckpointLoadTime,1>
           ::GetStatId(&StatPtr_STAT_ReplayCheckpointLoadTime);
  local_398._Column = local_4f8._4_4_;
  local_398._Line = local_4f8._0_4_;
  local_398._File = (char *)local_4f8._8_8_;
  local_398._Function = local_4e8;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_598,*(TStatIdData **)&(TVar24.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,(FSourceLocation *)&local_398);
  pTVar7 = (this->ReplayStreamer).SharedReferenceCount.ReferenceController;
  pIVar8 = (this->ReplayStreamer).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pIVar8 == (INetworkReplayStreamer *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar13 = (code *)swi(3);
    uVar18 = (*pcVar13)();
    return (bool)uVar18;
  }
  pFVar25 = (FArchiveState *)(**(code **)(pIVar8->_padding_ + 0x28))(pIVar8);
  local_618 = pFVar25;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if ((pFVar25 == (FArchiveState *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("GotoCheckpointArchive != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                          ,0xfa4,L""), bVar17)) {
    pcVar13 = (code *)swi(3);
    uVar18 = (*pcVar13)();
    return (bool)uVar18;
  }
  if ((this->bIsFastForwardingForCheckpoint != '\0') &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bIsFastForwardingForCheckpoint",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                          ,0xfa5,L""), bVar17)) {
    pcVar13 = (code *)swi(3);
    uVar18 = (*pcVar13)();
    return (bool)uVar18;
  }
  if ((this->bIsFastForwarding != false) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bIsFastForwarding",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                          ,0xfa6,L""), bVar17)) {
    pcVar13 = (code *)swi(3);
    uVar18 = (*pcVar13)();
    return (bool)uVar18;
  }
  FReplayHelper::SetPlaybackNetworkVersions(&this->ReplayHelper,(FArchive *)pFVar25);
  pFVar25->ArMaxSerializeSize = 0x1000000;
  bVar17 = (this->ReplayHelper).bHasDeltaCheckpoints;
  local_648 = 0;
  if ((bVar17 != false) && (lVar26 = (**(code **)(pFVar25->_padding_ + 0x30))(pFVar25), 0 < lVar26))
  {
    local_5d8[0] = 0;
    ::operator<<((FArchive *)pFVar25,local_5d8);
  }
  if ((this->ReplayHelper).bHasLevelStreamingFixes != false) {
    lVar26 = (**(code **)(pFVar25->_padding_ + 0x30))(pFVar25);
    if (0 < lVar26) {
      local_4a8 = 0;
      ::operator<<((FArchive *)pFVar25,&local_4a8);
    }
    FReplayHelper::ResetLevelStatuses(&this->ReplayHelper);
  }
  FReplayHelper::ResetLevelMap(&this->ReplayHelper);
  this->LastProcessedPacketTime = 0.0;
  (this->ReplayHelper).LatestReadFrameTime = 0.0;
  TVar21 = FReplayHelper::GetPlaybackReplayVersion(&this->ReplayHelper);
  local_610 = CONCAT44(local_610._4_4_,TVar21);
  lVar26 = (**(code **)(pFVar25->_padding_ + 0x30))(pFVar25);
  if (0 < lVar26) {
    ::operator<<((FArchive *)pFVar25,&local_648);
  }
  if ((*(longlong *)&this->field_0x1b8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("World",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                          ,0xfd1,L""), bVar19)) {
    pcVar13 = (code *)swi(3);
    uVar18 = (*pcVar13)();
    return (bool)uVar18;
  }
  if ((double)local_648 != (double)(this->ReplayHelper).CurrentLevelIndex) {
    (**(code **)(**(longlong **)(*(longlong *)&this->field_0x1b8 + 0x230) + 0x358))();
    FActorIterator::FActorIterator
              ((FActorIterator *)&local_1e8,*(UWorld **)&this->field_0x1b8,
               OnlyActiveLevels|SkipPendingKill);
    pFVar27 = TOptional<FActorIteratorState>::operator->(&local_1e8.State);
    cVar5 = pFVar27->ReachedEnd;
    while (cVar5 == '\0') {
      pUVar9 = *(UWorld **)&this->field_0x1b8;
      pFVar27 = TOptional<FActorIteratorState>::operator->(&local_1e8.State);
      pAVar28 = FActorIteratorState::GetActorChecked(pFVar27);
      UWorld::DestroyActor(pUVar9,pAVar28,true,true);
      TActorIteratorBase<FActorIterator>::operator++(&local_1e8);
      pFVar27 = TOptional<FActorIteratorState>::operator->(&local_1e8.State);
      cVar5 = pFVar27->ReachedEnd;
    }
    TOptional<FActorIteratorState>::~TOptional<FActorIteratorState>(&local_1e8.State);
    pFVar29 = TSharedPtr<FNetGUIDCache,1>::operator->
                        ((TSharedPtr<FNetGUIDCache,1> *)&this->field_0x1c8);
    FNetGUIDCache::ResetCacheForDemo(pFVar29);
    iVar22 = CleanUpSplitscreenConnections(this,true);
    TArray<TObjectPtr<APlayerController>,TSizedDefaultAllocator<32>_>::Empty
              (&this->SpectatorControllers,iVar22 + 1);
    this->SpectatorController = (APlayerController *)0x0;
    UNetConnection::Close(*(UNetConnection **)&this->field_0x100);
    (**(code **)(**(longlong **)&this->field_0x100 + 0x348))();
    local_588 = 0;
    pUVar30 = Z_Construct_UClass_UDemoNetConnection_NoRegister();
    pUVar31 = GetTransientPackage();
    pUVar32 = NewObject<UNetConnection>
                        ((UObject *)pUVar31,pUVar30,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                         (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar32 != (UNetConnection *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar32);
    }
    *(UNetConnection **)&this->field_0x100 = pUVar32;
    FURL::FURL(&local_128,(wchar_t *)0x0);
    iVar22 = (this->ReplayHelper).DemoURL.Map.Data.ArrayNum;
    iVar50 = iVar22 + -1;
    if (iVar22 == 0) {
      iVar50 = 0;
    }
    ::FString::AssignRange
              (&local_128.Map,
               (wchar_t *)(this->ReplayHelper).DemoURL.Map.Data.AllocatorInstance.Data,iVar50);
    (**(code **)(**(longlong **)&this->field_0x100 + 0x368))
              (*(longlong **)&this->field_0x100,this,2,&local_128);
    UEngine::ForceGarbageCollection(GEngine,true);
    ProcessSeamlessTravel(this,local_648);
    (this->ReplayHelper).CurrentLevelIndex = local_648;
    lVar26 = (**(code **)(pFVar25->_padding_ + 0x30))(pFVar25);
    if ((lVar26 != 0) && (lVar26 = (**(code **)(pFVar25->_padding_ + 0x30))(pFVar25), lVar26 != -1))
    {
      (**(code **)(pFVar25->_padding_ + 0x1b8))(pFVar25,0);
    }
    FURL::~FURL(&local_128);
    bVar17 = false;
    goto LAB_147af8531;
  }
  if (this->SpectatorController != (APlayerController *)0x0) {
    AddNonQueuedActorForScrubbing(this,(AActor *)this->SpectatorController);
  }
  local_5b0.ObjectId = 0;
  if ((this->SpectatorController != (APlayerController *)0x0) &&
     (lVar26 = (**(code **)(this->SpectatorController->_padding_ + 0x7e0))(), lVar26 != 0)) {
    pFVar29 = TSharedPtr<FNetGUIDCache,1>::operator->
                        ((TSharedPtr<FNetGUIDCache,1> *)&this->field_0x1c8);
    local_4c8 = (UObject *)(**(code **)(this->SpectatorController->_padding_ + 0x7e0))();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_4c8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_4c8);
    }
    local_5a8.ObjectIndex = 0;
    local_5a8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_4c8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_4c8);
    }
    FWeakObjectPtr::operator=(&local_5a8,(FObjectPtr)&local_4c8);
    FVar33 = TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
             ::FindRef((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
                        *)&pFVar29->NetGUIDLookup,
                       (TWeakObjectPtr<UObject_const_,FWeakObjectPtr>)local_3a8);
                    /* WARNING: Load size is inaccurate */
    local_5b0.ObjectId = *FVar33.field0_0x0;
    if (local_5b0.ObjectId != 0) {
      pAVar28 = (AActor *)(**(code **)(this->SpectatorController->_padding_ + 0x7e0))();
      AddNonQueuedActorForScrubbing(this,pAVar28);
    }
  }
  PauseChannels(this,false);
  TMulticastDelegate<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::Broadcast
            (&FNetworkReplayDelegates::OnPreScrub,*(UWorld **)&this->field_0x1b8);
  (this->ReplayHelper).bIsLoadingCheckpoint = true;
  local_608.Data = (FScriptContainerElement *)0x0;
  local_600 = 0;
  if (*(int *)&(this->TrackedRewindActorsByGUID).Elements.field_0x8 !=
      *(int *)&(this->TrackedRewindActorsByGUID).Elements.field_0x34) {
    local_665 = 0;
    bVar19 = `UDemoNetDriver::LoadCheckpoint'::__l63::<lambda_1>::operator()(&local_665);
    if (!bVar19) {
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty
                (&this->TrackedRewindActorsByGUID,0);
    }
  }
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  FActorIterator::FActorIterator
            ((FActorIterator *)&local_188,*(UWorld **)&this->field_0x1b8,
             OnlyActiveLevels|SkipPendingKill);
  pFVar27 = TOptional<FActorIteratorState>::operator->(&local_188.State);
  cVar5 = pFVar27->ReachedEnd;
  while (cVar5 == '\0') {
    pFVar27 = TOptional<FActorIteratorState>::operator->(&local_188.State);
    this_01.DebugPtr = FActorIteratorState::GetActorChecked(pFVar27);
    local_5d0.DebugPtr = this_01.DebugPtr;
    if (this_01->bAlwaysRelevant != '\0') {
      AddNonQueuedActorForScrubbing(this,this_01.DebugPtr);
    }
    pFVar51 = (this->SpectatorControllers).AllocatorInstance.Data;
    iVar22 = (this->SpectatorControllers).ArrayNum;
    pFVar12 = pFVar51 + (longlong)iVar22 * 8;
    while( true ) {
      if ((this->SpectatorControllers).ArrayNum != iVar22) {
        local_664 = 0;
        `TCheckedPointerIterator<TObjectPtr<APlayerController>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_664);
      }
      if (pFVar51 == pFVar12) break;
      pAVar28 = *(AActor **)pFVar51;
      if ((pAVar28 != (AActor *)0x0) && (((uint)pAVar28->_padding_ >> 0x1e & 1) == 0)) {
        if ((this_01.DebugPtr == pAVar28) ||
           (TVar34.DebugPtr = this_01.DebugPtr,
           this_01.DebugPtr == (AActor *)pAVar28[2].InputComponent.field0_0x0.DebugPtr)) {
LAB_147af6497:
          bVar19 = true;
          goto LAB_147af649d;
        }
        do {
          if (TVar34.DebugPtr == pAVar28) goto LAB_147af6497;
          TVar34 = (TObjectPtr<AActor>_u_0)((TVar34.DebugPtr)->Owner).field0_0x0.DebugPtr;
        } while (TVar34.DebugPtr != (AActor *)0x0);
      }
      pFVar51 = pFVar51 + 8;
    }
    bVar19 = false;
LAB_147af649d:
    if ((!(bool)this_01->bReplayRewindable) ||
       (bVar20 = AActor::IsNetStartupActor(this_01.DebugPtr), bVar20)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if ((bVar19) || (bVar20)) {
      if ((*(longlong *)&this->field_0x1c8 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar19)) {
        pcVar13 = (code *)swi(3);
        uVar18 = (*pcVar13)();
        return (bool)uVar18;
      }
      lVar26 = *(longlong *)&this->field_0x1c8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_01.DebugPtr != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
      }
      local_5a0.ObjectIndex = 0;
      local_5a0.ObjectSerialNumber = 0;
      local_4c0.DebugPtr = this_01.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_01.DebugPtr != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01.DebugPtr);
      }
      FWeakObjectPtr::operator=(&local_5a0,(FObjectPtr)&local_4c0);
      pTVar35 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                        *)(lVar26 + 0x58),(TWeakObjectPtr<UObject_const_,FWeakObjectPtr>)local_5a0);
      if (pTVar35 == (TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID> *)0x0) {
        local_580 = 0;
      }
      else {
        lVar26 = *(longlong *)&pTVar35->field_0x8;
        local_580 = lVar26;
        if (lVar26 != 0) {
          iVar22 = (int)local_600;
          if ((int)local_600 == local_600._4_4_) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_608,(int *)((longlong)&local_600 + 4));
          }
          local_600 = CONCAT44(local_600._4_4_,iVar22 + 1);
          *(longlong *)(local_608.Data + (longlong)iVar22 * 0x10) = lVar26;
          ((TObjectPtr<AActor>_u_0 *)(local_608.Data + (longlong)iVar22 * 0x10 + 8))->DebugPtr =
               (AActor *)this_01;
          if (bVar20) {
            TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
            Emplace<FNetworkGUID_const_&>
                      (&this->TrackedRewindActorsByGUID,(FNetworkGUID *)(local_4e0 + 4),
                       (bool *)&local_580);
          }
        }
      }
      ppAVar46 = (AActor **)local_4d8;
LAB_147af6608:
      TSet<AActor_const_*,DefaultKeyFuncs<AActor_const_*,0>,FDefaultSetAllocator>::
      Emplace<AActor_const_*_const_&>(&local_98,ppAVar46,(bool *)&local_5d0);
    }
    else {
      bVar19 = AActor::IsNetStartupActor(this_01.DebugPtr);
      if (bVar19) {
        if ((bool)this_01->bReplayRewindable) {
          (**(code **)((this_01.DebugPtr)->_padding_ + 800))(this_01.DebugPtr);
        }
        ppAVar46 = (AActor **)local_4e0;
        goto LAB_147af6608;
      }
      UWorld::DestroyActor(*(UWorld **)&this->field_0x1b8,this_01.DebugPtr,true,true);
    }
    TActorIteratorBase<FActorIterator>::operator++(&local_188);
    pFVar27 = TOptional<FActorIteratorState>::operator->(&local_188.State);
    pFVar25 = local_618;
    cVar5 = pFVar27->ReachedEnd;
  }
  TOptional<FActorIteratorState>::~TOptional<FActorIteratorState>(&local_188.State);
  UWorld::HandleTimelineScrubbed(*(UWorld **)&this->field_0x1b8);
  iVar22 = *(int *)(*(longlong *)&this->field_0x100 + 0x78) + -1;
  if (-1 < iVar22) {
    lVar26 = (longlong)iVar22 * 8;
    do {
      lVar40 = *(longlong *)&this->field_0x100;
      if ((*(int *)(lVar40 + 0x78) <= iVar22) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar13 = (code *)swi(3);
        uVar18 = (*pcVar13)();
        return (bool)uVar18;
      }
      this_00 = *(UActorChannel **)(lVar26 + *(longlong *)(lVar40 + 0x70));
      if (this_00 != (UActorChannel *)0x0) {
        pUVar30 = Z_Construct_UClass_UActorChannel_NoRegister();
        iVar50 = (int)pUVar30->_padding_;
        if ((iVar50 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar50 * 8) ==
            &pUVar30->_padding_)) {
          pAVar28 = (this_00->Actor).field0_0x0.DebugPtr;
          uVar44 = ((uint)((ulonglong)pAVar28 >> 0x14) & 0xffff ^ (uint)((ulonglong)pAVar28 >> 4)) *
                   -0x7a143595;
          uVar44 = (uVar44 >> 0xd ^ uVar44) * -0x3d4d51cb;
          if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
            FVar47 = (ForElementType<FSetElementId>)&local_98.Hash;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar47 = local_98.Hash.SecondaryData;
            }
            for (iVar50 = *(int *)((longlong)FVar47 +
                                  (ulonglong)(local_98.HashSize - 1U & (uVar44 >> 0x10 ^ uVar44)) *
                                  4); iVar50 != -1;
                iVar50 = *(int *)(local_98.Elements._0_8_ + 8 + (longlong)iVar50 * 0x10)) {
              if (*(AActor **)(local_98.Elements._0_8_ + (longlong)iVar50 * 0x10) == pAVar28) {
                UActorChannel::ReleaseReferences(this_00,false);
                break;
              }
            }
          }
        }
      }
      lVar26 = lVar26 + -8;
      iVar22 = iVar22 + -1;
    } while (-1 < iVar22);
  }
  pAVar10 = *(APlayerController **)(*(longlong *)&this->field_0x100 + 0x98);
  if (pAVar10 == (APlayerController *)0x0) {
    bVar19 = this->SpectatorController == (APlayerController *)0x0;
  }
  else {
    bVar19 = pAVar10 == this->SpectatorController;
  }
  if (bVar19) {
    *(undefined8 *)(*(longlong *)&this->field_0x100 + 0x98) = 0;
  }
  TSet<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&(this->ReplayHelper).ExternalDataToObjectMap,0);
  DestructItems<FPlaybackPacket,int>
            ((FPlaybackPacket *)(this->PlaybackPackets).AllocatorInstance.Data,
             (this->PlaybackPackets).ArrayNum);
  piVar1 = &(this->PlaybackPackets).ArrayMax;
  (this->PlaybackPackets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->PlaybackPackets).AllocatorInstance,0,piVar1);
  }
  TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
           *)&(this->ReplayHelper).PlaybackFrames,0);
  bVar19 = this->bIsRestoringStartupActors;
  this->bIsRestoringStartupActors = true;
  FActorIterator::FActorIterator
            ((FActorIterator *)&local_298,*(UWorld **)&this->field_0x1b8,
             OnlyActiveLevels|SkipPendingKill);
  pFVar27 = TOptional<FActorIteratorState>::operator->(&local_298.State);
  cVar5 = pFVar27->ReachedEnd;
  while (cVar5 == '\0') {
    pFVar27 = TOptional<FActorIteratorState>::operator->(&local_298.State);
    pAVar28 = FActorIteratorState::GetActorChecked(pFVar27);
    pFVar36 = UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)pAVar28,&local_3f8,(UObject *)0x0,None);
    iVar22 = (pFVar36->Data).ArrayNum;
    if (iVar22 == 0) {
      pwVar49 = L"";
      iVar22 = 0;
    }
    else {
      pwVar49 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
      iVar22 = iVar22 + -1;
    }
    uVar44 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar22,pwVar49);
    iVar22 = TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
                         *)&this->RollbackNetStartupActors,uVar44,pFVar36);
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
    if (iVar22 != -1) {
      pUVar9 = *(UWorld **)&this->field_0x1b8;
      pFVar27 = TOptional<FActorIteratorState>::operator->(&local_298.State);
      pAVar28 = FActorIteratorState::GetActorChecked(pFVar27);
      UWorld::DestroyActor(pUVar9,pAVar28,true,true);
    }
    TActorIteratorBase<FActorIterator>::operator++(&local_298);
    pFVar27 = TOptional<FActorIteratorState>::operator->(&local_298.State);
    pFVar25 = local_618;
    cVar5 = pFVar27->ReachedEnd;
  }
  TOptional<FActorIteratorState>::~TOptional<FActorIteratorState>(&local_298.State);
  this->bIsRestoringStartupActors = bVar19;
  CleanUpSplitscreenConnections(this,false);
  UNetConnection::Close(*(UNetConnection **)&this->field_0x100);
  (**(code **)(**(longlong **)&this->field_0x100 + 0x348))();
  TMulticastDelegate<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::Broadcast
            (&FNetworkReplayDelegates::OnScrubTeardown,*(UWorld **)&this->field_0x1b8);
  pTVar14 = CVarDemoLoadCheckpointGarbageCollect.Ref;
  bVar19 = IsInParallelGameThread();
  if (((!bVar19) && (bVar19 = IsInGameThread(), !bVar19)) &&
     (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar19)) {
    pcVar13 = (code *)swi(3);
    uVar18 = (*pcVar13)();
    return (bool)uVar18;
  }
  if (pTVar14->ShadowedValue[0] != 0) {
    UEngine::ForceGarbageCollection(GEngine,true);
  }
  FURL::FURL(&local_308,(wchar_t *)0x0);
  iVar22 = (this->ReplayHelper).DemoURL.Map.Data.ArrayNum;
  iVar50 = iVar22 + -1;
  if (iVar22 == 0) {
    iVar50 = 0;
  }
  ::FString::AssignRange
            (&local_308.Map,(wchar_t *)(this->ReplayHelper).DemoURL.Map.Data.AllocatorInstance.Data,
             iVar50);
  local_578.ComparisonIndex.Value = 0;
  local_578.Number = 0;
  pUVar30 = Z_Construct_UClass_UDemoNetConnection_NoRegister();
  pUVar31 = GetTransientPackage();
  pUVar32 = NewObject<UNetConnection>
                      ((UObject *)pUVar31,pUVar30,local_578,RF_NoFlags,(UObject *)0x0,false,
                       (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar32 != (UNetConnection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar32);
  }
  *(UNetConnection **)&this->field_0x100 = pUVar32;
  (**(code **)(pUVar32->_padding_ + 0x368))(pUVar32,this,2,&local_308);
  FReplayHelper::SetPlaybackNetworkVersions
            (&this->ReplayHelper,*(UNetConnection **)&this->field_0x100);
  UNetDriver::CreateInitialClientChannels((UNetDriver *)this);
  pFVar51 = (this->SpectatorControllers).AllocatorInstance.Data;
  iVar22 = (this->SpectatorControllers).ArrayNum;
  pFVar12 = pFVar51 + (longlong)iVar22 * 8;
  while( true ) {
    if ((this->SpectatorControllers).ArrayNum != iVar22) {
      local_663 = 0;
      `TCheckedPointerIterator<TObjectPtr<APlayerController>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_663);
    }
    if (pFVar51 == pFVar12) break;
    pAVar10 = *(APlayerController **)pFVar51;
    if (pAVar10 != this->SpectatorController) {
      pUVar32 = (UNetConnection *)
                (**(code **)(*(longlong *)this + 0x3f0))(this,*(undefined8 *)&this->field_0x100);
      RestoreConnectionPostScrub(this,pAVar10,pUVar32);
    }
    pFVar51 = pFVar51 + 8;
  }
  pFVar29 = TSharedPtr<FNetGUIDCache,1>::operator->
                      ((TSharedPtr<FNetGUIDCache,1> *)&this->field_0x1c8);
  local_4b0 = this->SpectatorController;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_4b0 != (APlayerController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_4b0);
  }
  local_5c8.ObjectIndex = 0;
  local_5c8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_4b0 != (APlayerController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_4b0);
  }
  FWeakObjectPtr::operator=(&local_5c8,(FObjectPtr)&local_4b0);
  pAVar10 = this->SpectatorController;
  FVar33 = TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
           ::FindRef((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
                      *)&pFVar29->NetGUIDLookup,
                     (TWeakObjectPtr<UObject_const_,FWeakObjectPtr>)local_3a0);
  if ((*(longlong *)FVar33.field0_0x0 != 0) != (pAVar10 != (APlayerController *)0x0)) {
    bVar19 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<7792372165998809279>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                        ,0x10bf,
                        "GetNetGuidCache()->NetGUIDLookup.FindRef(SpectatorController).IsValid() == (SpectatorController != nullptr)"
                       );
    if (bVar19) {
      pcVar13 = (code *)swi(3);
      uVar18 = (*pcVar13)();
      return (bool)uVar18;
    }
    if (4 < (byte)LogDemo._0_1_) {
      pAVar10 = this->SpectatorController;
      if ((pAVar10 == (APlayerController *)0x0) || (pAVar10->_padding_ == 0)) {
        ::FString::FString(&local_528,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)pAVar10,&local_528,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_528.Data.AllocatorInstance.Data);
      }
    }
  }
  FlushAsyncLoading(-1);
  pFVar29 = TSharedPtr<FNetGUIDCache,1>::operator->
                      ((TSharedPtr<FNetGUIDCache,1> *)&this->field_0x1c8);
  FNetGUIDCache::ResetCacheForDemo(pFVar29);
  iVar22 = (int)local_600;
  uVar37 = (ulonglong)(int)local_600;
  pFVar56 = (FNetworkGUID_u_0 *)(local_608.Data + uVar37 * 0x10);
  FVar48.Data = local_608.Data;
  while( true ) {
    if ((int)uVar37 != iVar22) {
      local_662 = 0;
      `TCheckedPointerIterator<`UDemoNetDriver::LoadCheckpoint'::__l2::FPreservedNetworkGUIDEntry,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_662);
    }
    if ((FNetworkGUID_u_0 *)FVar48.Data == pFVar56) break;
    if ((*(FNetworkGUID_u_0 *)FVar48.Data == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("PreservedEntry.NetGUID.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                            ,0x10cc,L""), bVar19)) {
      pcVar13 = (code *)swi(3);
      uVar18 = (*pcVar13)();
      return (bool)uVar18;
    }
    if ((*(longlong *)&this->field_0x1c8 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar13 = (code *)swi(3);
      uVar18 = (*pcVar13)();
      return (bool)uVar18;
    }
    this_02 = TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
              ::FindOrAddImpl<FNetworkGUID_const_&>
                        ((TMapBase<FNetworkGUID,FNetGuidCacheObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>_>
                          *)(*(longlong *)&this->field_0x1c8 + 8),
                         (int)(*(ulong64 *)FVar48.Data >> 0x20) * 0x17 +
                         (int)*(ulong64 *)FVar48.Data,(FNetworkGUID *)FVar48.Data);
    pUVar43 = (UObject *)((FNetworkGUID_u_0 *)((longlong)FVar48.Data + 8))->ObjectId;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar43 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar43);
    }
    local_5c0.ObjectIndex = 0;
    local_5c0.ObjectSerialNumber = 0;
    local_4b8 = pUVar43;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar43 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar43);
    }
    FWeakObjectPtr::operator=(&local_5c0,(FObjectPtr)&local_4b8);
    (this_02->Object).WeakPtr = local_5c0;
    bVar19 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals(&this_02->Object,(void *)0x0);
    if ((bVar19) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("CacheObject.Object != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                            ,0x10d1,L""), bVar19)) {
      pcVar13 = (code *)swi(3);
      uVar18 = (*pcVar13)();
      return (bool)uVar18;
    }
    this_02->bNoLoad = '\x01';
    if ((*(longlong *)&this->field_0x1c8 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar13 = (code *)swi(3);
      uVar18 = (*pcVar13)();
      return (bool)uVar18;
    }
    TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
    ::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&,FNetworkGUID_const_&>
              ((TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>_>
                *)(*(longlong *)&this->field_0x1c8 + 0x58),&this_02->Object,
               (FNetworkGUID *)FVar48.Data);
    uVar37 = local_600 & 0xffffffff;
    FVar48.Data = FVar48.Data + 0x10;
  }
  lVar26 = (**(code **)(pFVar25->_padding_ + 0x30))(pFVar25);
  if ((lVar26 == 0) || (lVar26 = (**(code **)(pFVar25->_padding_ + 0x30))(pFVar25), lVar26 == -1)) {
    pTVar2 = &(this->ReplayHelper).PlaybackDeletedNetStartupActors;
    if ((this->ReplayHelper).PlaybackDeletedNetStartupActors.HashSize < 2) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(pTVar2);
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(&pTVar2->Elements,0);
    }
    else {
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(&pTVar2->Elements,0);
      (this->ReplayHelper).PlaybackDeletedNetStartupActors.HashSize = 1;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(pTVar2);
    }
    local_508.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_508.ArrayNum = 0;
    local_508.ArrayMax = 0;
    RespawnNecessaryNetStartupActors(this,&local_508,(ULevel *)0x0);
    (this->ReplayHelper).DemoCurrentTime = 0.0;
    (this->ReplayHelper).bIsLoadingCheckpoint = false;
    if (local_5f0->ExtraTimeMS == -1) {
      CleanupOutstandingRewindActors(this);
    }
    else {
      SkipTimeInternal(this,(float)local_5f0->ExtraTimeMS * __real_3a83126f,true,true);
    }
    if (local_508.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_508.AllocatorInstance.Data);
    }
  }
  else {
    (**(code **)(pFVar25->_padding_ + 0x1b8))(pFVar25);
    pTVar2 = &(this->ReplayHelper).PlaybackDeletedNetStartupActors;
    if ((this->ReplayHelper).PlaybackDeletedNetStartupActors.HashSize < 2) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(pTVar2);
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(&pTVar2->Elements,0);
    }
    else {
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(&pTVar2->Elements,0);
      (this->ReplayHelper).PlaybackDeletedNetStartupActors.HashSize = 1;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(pTVar2);
    }
    pTVar3 = &this->PlaybackDeltaCheckpointData;
    DestructItems<TUniquePtr<FDeltaCheckpointData,TDefaultDelete<FDeltaCheckpointData>_>,int>
              ((TUniquePtr<FDeltaCheckpointData,TDefaultDelete<FDeltaCheckpointData>_> *)
               (pTVar3->AllocatorInstance).Data,(this->PlaybackDeltaCheckpointData).ArrayNum);
    piVar1 = &(this->PlaybackDeltaCheckpointData).ArrayMax;
    (this->PlaybackDeltaCheckpointData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
    local_658.Data = (FScriptContainerElement *)0x0;
    pTVar2 = &(this->ReplayHelper).PlaybackDeletedNetStartupActors;
    local_650 = 0;
    local_630.Data = (FScriptContainerElement *)0x0;
    local_628 = 0;
    do {
      lVar26 = 0;
      if (bVar17 != false) {
        pFVar11 = pFVar25->ActiveFPLB;
        local_644 = 0;
        if (pFVar11->EndFastPathLoadBuffer <
            (uint *)((longlong)pFVar11->StartFastPathLoadBuffer + 4)) {
          if (pFVar25->ArForceByteSwapping == 0) {
            (**(code **)(pFVar25->_padding_ + 0x188))(pFVar25,&local_644,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)pFVar25,&local_644);
          }
        }
        else {
          local_644 = *(uint *)pFVar11->StartFastPathLoadBuffer;
          pFVar11->StartFastPathLoadBuffer = pFVar11->StartFastPathLoadBuffer + 4;
        }
        uVar37 = (ulonglong)local_644;
        lVar26 = (**(code **)(pFVar25->_padding_ + 0x28))(pFVar25);
        lVar26 = lVar26 + uVar37;
      }
      pFVar57 = (FArchiveState *)this->MaxArchiveReadPos;
      this->MaxArchiveReadPos = lVar26;
      local_618 = pFVar57;
      if ((this->ReplayHelper).bHasLevelStreamingFixes != false) {
        pFVar11 = pFVar25->ActiveFPLB;
        local_5b8 = 0;
        if (pFVar11->EndFastPathLoadBuffer <
            (ulong64 *)((longlong)pFVar11->StartFastPathLoadBuffer + 8)) {
          if (pFVar25->ArForceByteSwapping == 0) {
            (**(code **)(pFVar25->_padding_ + 0x188))(pFVar25,&local_5b8,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)pFVar25,&local_5b8);
          }
        }
        else {
          local_5b8 = *(ulong64 *)pFVar11->StartFastPathLoadBuffer;
          pFVar11->StartFastPathLoadBuffer = pFVar11->StartFastPathLoadBuffer + 8;
        }
      }
      pFVar11 = pFVar25->ActiveFPLB;
      local_620[0] = 0xffffffff;
      if (pFVar11->EndFastPathLoadBuffer < (uint *)((longlong)pFVar11->StartFastPathLoadBuffer + 4))
      {
        if (pFVar25->ArForceByteSwapping == 0) {
          (**(code **)(pFVar25->_padding_ + 0x188))(pFVar25,local_620,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)pFVar25,local_620);
        }
      }
      else {
        local_620[0] = *(uint *)pFVar11->StartFastPathLoadBuffer;
        pFVar11->StartFastPathLoadBuffer = pFVar11->StartFastPathLoadBuffer + 4;
      }
      if (bVar17 == false) {
        if ((this->ReplayHelper).PlaybackDeletedNetStartupActors.HashSize < 2) {
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(pTVar2);
          TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Empty(&pTVar2->Elements,0);
        }
        else {
          TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Empty(&pTVar2->Elements,0);
          (this->ReplayHelper).PlaybackDeletedNetStartupActors.HashSize = 1;
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(pTVar2);
        }
        FReplayHelper::ReadDeletedStartupActors
                  (&this->ReplayHelper,*(UNetConnection **)&this->field_0x100,(FArchive *)pFVar25,
                   pTVar2);
      }
      else {
        puVar38 = ::operator_new(0x100);
        if (puVar38 == (undefined8 *)0x0) {
          puVar38 = (undefined8 *)0x0;
        }
        else {
          puVar38[4] = 0;
          puVar38[5] = 0;
          puVar38[9] = 0;
          puVar38[0xb] = 0;
          puVar38[0xe] = 0;
          puVar38[0xf] = 0;
          puVar38[0x13] = 0;
          puVar38[0x15] = 0;
          puVar38[0x18] = 0;
          puVar38[0x19] = 0;
          puVar38[0x1d] = 0;
          puVar38[0x1f] = 0;
          *puVar38 = 0;
          puVar38[1] = 0;
          puVar38[2] = 0;
          puVar38[3] = 0;
          puVar38[6] = 0;
          *(undefined4 *)(puVar38 + 7) = 0;
          *(undefined4 *)((longlong)puVar38 + 0x3c) = 0x80;
          *(undefined4 *)(puVar38 + 8) = 0xffffffff;
          *(undefined4 *)((longlong)puVar38 + 0x44) = 0;
          puVar38[10] = 0;
          puVar38[0xc] = 0;
          puVar38[0xd] = 0;
          puVar38[0x10] = 0;
          *(undefined4 *)(puVar38 + 0x11) = 0;
          *(undefined4 *)((longlong)puVar38 + 0x8c) = 0x80;
          *(undefined4 *)(puVar38 + 0x12) = 0xffffffff;
          *(undefined4 *)((longlong)puVar38 + 0x94) = 0;
          puVar38[0x14] = 0;
          puVar38[0x16] = 0;
          puVar38[0x17] = 0;
          puVar38[0x1a] = 0;
          *(undefined4 *)(puVar38 + 0x1b) = 0;
          *(undefined4 *)((longlong)puVar38 + 0xdc) = 0x80;
          *(undefined4 *)(puVar38 + 0x1c) = 0xffffffff;
          *(undefined4 *)((longlong)puVar38 + 0xe4) = 0;
          puVar38[0x1e] = 0;
        }
        iVar22 = (this->PlaybackDeltaCheckpointData).ArrayNum;
        if (iVar22 == (this->PlaybackDeltaCheckpointData).ArrayMax) {
          iVar22 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar3->AllocatorInstance,
                              &(this->PlaybackDeltaCheckpointData).ArrayMax);
        }
        pFVar12 = (pTVar3->AllocatorInstance).Data;
        (this->PlaybackDeltaCheckpointData).ArrayNum = iVar22 + 1;
        lVar26 = (longlong)iVar22;
        *(undefined8 **)(pFVar12 + lVar26 * 8) = puVar38;
        FReplayHelper::ReadDeletedStartupActors
                  (&this->ReplayHelper,*(UNetConnection **)&this->field_0x100,(FArchive *)pFVar25,
                   (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(puVar38 + 2));
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                  (pTVar2,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                          (*(longlong *)(pFVar12 + lVar26 * 8) + 0x10));
        TSetPrivateFriend::
        Serialize<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>
                  ((FArchive *)pFVar25,
                   (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
                   (*(longlong *)(pFVar12 + lVar26 * 8) + 0x60));
        TSetPrivateFriend::
        Serialize<TTuple<FNetworkGUID,enum_EChannelCloseReason>,TDefaultMapHashableKeyFuncs<FNetworkGUID,enum_EChannelCloseReason,0>,FDefaultSetAllocator>
                  ((FArchive *)pFVar25,
                   (TSet<TTuple<FNetworkGUID,EChannelCloseReason>,TDefaultMapHashableKeyFuncs<FNetworkGUID,EChannelCloseReason,0>,FDefaultSetAllocator>
                    *)(*(longlong *)(pFVar12 + lVar26 * 8) + 0xb0));
        pFVar57 = local_618;
      }
      pFVar11 = pFVar25->ActiveFPLB;
      iVar22 = 0;
      local_660[0] = 0;
      if (pFVar11->EndFastPathLoadBuffer < (uint *)((longlong)pFVar11->StartFastPathLoadBuffer + 4))
      {
        if (pFVar25->ArForceByteSwapping == 0) {
          (**(code **)(pFVar25->_padding_ + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)pFVar25,local_660);
        }
      }
      else {
        local_660[0] = *(uint *)pFVar11->StartFastPathLoadBuffer;
        pFVar11->StartFastPathLoadBuffer = pFVar11->StartFastPathLoadBuffer + 4;
      }
      if (0 < (int)local_660[0]) {
        do {
          local_570 = 0;
          (**(code **)(pFVar25->_padding_ + 0x1a8))(pFVar25,&local_570);
          local_538 = 0;
          local_530 = local_530 & 0xf0 | 0x10;
          local_558 = 0;
          local_550 = 0;
          local_548.ComparisonIndex.Value = 0;
          local_548.Number = 0;
          local_540[0] = 0;
          (**(code **)(pFVar25->_padding_ + 0x1a8))(pFVar25,&local_550);
          local_640.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_640.Data.ArrayNum = 0;
          local_640.Data.ArrayMax = 0;
          if ((int)local_610 < 0xf) {
            ::operator<<((FArchive *)pFVar25,&local_640);
          }
          else {
            pFVar11 = pFVar25->ActiveFPLB;
            local_667 = '\0';
            if (pFVar11->EndFastPathLoadBuffer < pFVar11->StartFastPathLoadBuffer + 1) {
              (**(code **)(pFVar25->_padding_ + 0x188))(pFVar25,&local_667);
            }
            else {
              local_667 = *pFVar11->StartFastPathLoadBuffer;
              pFVar11->StartFastPathLoadBuffer = pFVar11->StartFastPathLoadBuffer + 1;
            }
            if (local_667 == '\x01') {
              ::operator<<((FArchive *)pFVar25,&local_640);
              FVar48.Data = (FScriptContainerElement *)L"";
              if (local_640.Data.ArrayNum != 0) {
                FVar48.Data = local_640.Data.AllocatorInstance.Data;
              }
              pFVar39 = ::FName::FName(local_378,(wchar_t *)FVar48.Data);
              if (((local_630.Data <= pFVar39) &&
                  (pFVar39 < (FName *)(local_630.Data + (longlong)local_628._4_4_ * 8))) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar19)) {
                pcVar13 = (code *)swi(3);
                uVar18 = (*pcVar13)();
                return (bool)uVar18;
              }
              iVar50 = (int)local_628;
              if ((int)local_628 == local_628._4_4_) {
                iVar50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&local_630,(int *)((longlong)&local_628 + 4));
              }
              local_628 = CONCAT44(local_628._4_4_,iVar50 + 1);
              *(FName *)(local_630.Data + (longlong)iVar50 * 8) = *pFVar39;
            }
            else {
              local_5f8[0] = 0;
              (**(code **)(pFVar25->_padding_ + 0x1a0))(pFVar25,local_5f8);
              lVar26 = (longlong)(int)local_5f8[0];
              if (((int)local_5f8[0] < 0) || ((int)local_628 <= (int)local_5f8[0])) {
                FArchiveState::SetError(pFVar25);
                if (1 < (byte)LogDemo._0_1_) {
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
                }
                if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_640.Data.AllocatorInstance.Data);
                }
                break;
              }
              uVar44 = 0;
              if ((int)local_5f8[0] < (int)local_628) {
                uVar44 = ~local_5f8[0] >> 0x1f;
              }
              if ((uVar44 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar13 = (code *)swi(3);
                uVar18 = (*pcVar13)();
                return (bool)uVar18;
              }
              pFVar36 = ::FName::ToString((FName *)(local_630.Data + lVar26 * 8),&local_3e8);
              if (&local_640 != pFVar36) {
                if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_640.Data.AllocatorInstance.Data);
                }
                local_640.Data.AllocatorInstance.Data = (pFVar36->Data).AllocatorInstance.Data;
                (pFVar36->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_640.Data.ArrayNum = (pFVar36->Data).ArrayNum;
                local_640.Data.ArrayMax = (pFVar36->Data).ArrayMax;
                (pFVar36->Data).ArrayNum = 0;
                (pFVar36->Data).ArrayMax = 0;
              }
              if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
              }
            }
          }
          (**(code **)(GEngine->_padding_ + 0x498))
                    (GEngine,*(undefined8 *)&this->field_0x100,&local_640,1);
          FVar48.Data = (FScriptContainerElement *)L"";
          if (local_640.Data.ArrayNum != 0) {
            FVar48.Data = local_640.Data.AllocatorInstance.Data;
          }
          pFVar39 = ::FName::FName(&local_400,(wchar_t *)FVar48.Data);
          local_548 = *pFVar39;
          if ((int)local_610 < 0x10) {
            pFVar11 = pFVar25->ActiveFPLB;
            if (pFVar11->EndFastPathLoadBuffer <
                (uint *)((longlong)pFVar11->StartFastPathLoadBuffer + 4)) {
              if (pFVar25->ArForceByteSwapping == 0) {
                (**(code **)(pFVar25->_padding_ + 0x188))(pFVar25,local_540,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)pFVar25,local_540);
              }
            }
            else {
              local_540[0] = *(uint *)pFVar11->StartFastPathLoadBuffer;
              pFVar11->StartFastPathLoadBuffer = pFVar11->StartFastPathLoadBuffer + 4;
            }
          }
          pFVar11 = pFVar25->ActiveFPLB;
          local_666 = 0;
          if (pFVar11->EndFastPathLoadBuffer < pFVar11->StartFastPathLoadBuffer + 1) {
            (**(code **)(pFVar25->_padding_ + 0x188))(pFVar25,&local_666,1);
          }
          else {
            local_666 = *pFVar11->StartFastPathLoadBuffer;
            pFVar11->StartFastPathLoadBuffer = pFVar11->StartFastPathLoadBuffer + 1;
          }
          local_530 = local_530 & 0xfc | local_666 & 3;
          if ((*(longlong *)&this->field_0x1c8 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar19)) {
            pcVar13 = (code *)swi(3);
            uVar18 = (*pcVar13)();
            return (bool)uVar18;
          }
          local_438 = &local_570;
          local_430 = &local_558;
          TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FNetworkGUID_const_&,FNetGuidCacheObject_const_&>_>
                    ((TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
                      *)(*(longlong *)&this->field_0x1c8 + 8),
                     (TPairInitializer<FNetworkGUID_const_&,FNetGuidCacheObject_const_&> *)
                     (local_4d8 + 4),(bool *)&local_438);
          if (pFVar25->ArIsError != '\0') {
            if (1 < (byte)LogDemo._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
            }
            if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_640.Data.AllocatorInstance.Data);
            }
            this->MaxArchiveReadPos = (long64)pFVar57;
            goto LAB_147af83b0;
          }
          if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_640.Data.AllocatorInstance.Data);
          }
          iVar22 = iVar22 + 1;
        } while (iVar22 < (int)local_660[0]);
      }
      iVar22 = -1;
      lVar26 = *(longlong *)&this->field_0x100;
      if (bVar17 == false) {
        if (*(longlong *)(lVar26 + 0x68) == 0) {
          pFVar36 = GetTypeName<UPackageMapClient>((FString *)local_4f8);
          if ((pFVar36->Data).ArrayNum == 0) {
            pwVar49 = L"";
          }
          else {
            pwVar49 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar49);
        }
        pUVar30 = Z_Construct_UClass_UPackageMapClient_NoRegister();
        bVar19 = FObjectPtr::IsA((FObjectPtr *)(lVar26 + 0x68),pUVar30);
        if ((!bVar19) || (*(UPackageMapClient **)(lVar26 + 0x68) == (UPackageMapClient *)0x0)) {
          pFVar36 = GetTypeName<UPackageMapClient>(&local_1f8);
          pwVar49 = L"";
          if ((pFVar36->Data).ArrayNum == 0) {
            pwVar53 = L"";
          }
          else {
            pwVar53 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
          }
          pFVar36 = GetFullNameForCastLogError<UPackageMap>
                              (&local_208,*(UPackageMap **)(lVar26 + 0x68));
          if ((pFVar36->Data).ArrayNum != 0) {
            pwVar49 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar49,pwVar53);
        }
        UPackageMapClient::SerializeNetFieldExportGroupMap
                  (*(UPackageMapClient **)(lVar26 + 0x68),(FArchive *)pFVar25,true);
      }
      else {
        if (*(longlong *)(lVar26 + 0x68) == 0) {
          pFVar36 = GetTypeName<UPackageMapClient>(&local_228);
          if ((pFVar36->Data).ArrayNum == 0) {
            pwVar49 = L"";
          }
          else {
            pwVar49 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar49);
        }
        pUVar30 = Z_Construct_UClass_UPackageMapClient_NoRegister();
        bVar19 = FObjectPtr::IsA((FObjectPtr *)(lVar26 + 0x68),pUVar30);
        if ((!bVar19) || (*(UPackageMapClient **)(lVar26 + 0x68) == (UPackageMapClient *)0x0)) {
          pFVar36 = GetTypeName<UPackageMapClient>(&local_218);
          pwVar49 = L"";
          if ((pFVar36->Data).ArrayNum == 0) {
            pwVar53 = L"";
          }
          else {
            pwVar53 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
          }
          pFVar36 = GetFullNameForCastLogError<UPackageMap>
                              (&local_238,*(UPackageMap **)(lVar26 + 0x68));
          if ((pFVar36->Data).ArrayNum != 0) {
            pwVar49 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar49,pwVar53);
        }
        UPackageMapClient::SerializeNetFieldExportDelta
                  (*(UPackageMapClient **)(lVar26 + 0x68),(FArchive *)pFVar25);
        iVar22 = (this->PlaybackPackets).ArrayNum;
        iVar50 = (this->ReplayHelper).SeenLevelStatuses.ArrayMax;
        (this->ReplayHelper).SeenLevelStatuses.ArrayNum = 0;
        if (iVar50 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&(this->ReplayHelper).SeenLevelStatuses.AllocatorInstance,0,
                     &(this->ReplayHelper).SeenLevelStatuses.ArrayMax);
        }
      }
      FReplayHelper::ReadDemoFrame
                (&this->ReplayHelper,*(UNetConnection **)&this->field_0x100,(FArchive *)pFVar25,
                 &this->PlaybackPackets,false,this->MaxArchiveReadPos,(float *)0x0);
      if ((bVar17 != false) && (iVar50 = (this->PlaybackPackets).ArrayNum + -1, iVar22 <= iVar50)) {
        iVar23 = (int)local_650;
        if ((int)local_650 == local_650._4_4_) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_658,(int *)((longlong)&local_650 + 4));
        }
        local_650 = CONCAT44(local_650._4_4_,iVar23 + 1);
        *(int *)(local_658.Data + (longlong)iVar23 * 8) = iVar22;
        *(int *)(local_658.Data + (longlong)iVar23 * 8 + 4) = iVar50;
      }
      this->MaxArchiveReadPos = (long64)pFVar57;
      if (pFVar25->ArIsError != '\0') break;
      pcVar13 = *(code **)(pFVar25->_padding_ + 0x30);
      lVar26 = (**(code **)(pFVar25->_padding_ + 0x28))(pFVar25);
      lVar40 = (*pcVar13)(pFVar25);
    } while (lVar26 < lVar40);
    if (*(UWorld **)&this->field_0x1b8 != (UWorld *)0x0) {
      bVar19 = this->bIsRestoringStartupActors;
      this->bIsRestoringStartupActors = true;
      FActorIterator::FActorIterator
                ((FActorIterator *)&local_368,*(UWorld **)&this->field_0x1b8,
                 OnlyActiveLevels|SkipPendingKill);
      while( true ) {
        if ((local_368.State.bIsSet == false) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          uVar18 = (*pcVar13)();
          return (bool)uVar18;
        }
        if (local_368.State.TypedValue.ReachedEnd != false) break;
        if ((local_368.State.bIsSet == false) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar20)) {
          pcVar13 = (code *)swi(3);
          uVar18 = (*pcVar13)();
          return (bool)uVar18;
        }
        pAVar28 = FActorIteratorState::GetActorChecked(&local_368.State.TypedValue);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)pAVar28,&local_5e8,(UObject *)0x0,None);
        pwVar49 = L"";
        if (local_5e8.Data.ArrayNum == 0) {
          iVar22 = 0;
        }
        else {
          iVar22 = local_5e8.Data.ArrayNum + -1;
          pwVar49 = (wchar_t *)local_5e8.Data.AllocatorInstance.Data;
        }
        uVar44 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar22,pwVar49);
        iVar22 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                 FindIndexByHash<FString>
                           (&(this->ReplayHelper).PlaybackDeletedNetStartupActors,uVar44,&local_5e8)
        ;
        if (iVar22 != -1) {
          if ((bool)pAVar28->bReplayRewindable) {
            if (2 < (byte)LogDemo._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
            }
          }
          else {
            (**(code **)(*(longlong *)this + 0x500))(this,pAVar28);
            if (5 < (byte)LogDemo._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
            }
            UWorld::DestroyActor(*(UWorld **)&this->field_0x1b8,pAVar28,true,true);
          }
        }
        if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
        }
        TActorIteratorBase<FActorIterator>::operator++(&local_368);
      }
      if (local_368.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_368.State.TypedValue.CurrentWorld,
                   local_368.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_368.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_368.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_368.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_368.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
      local_518.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_518.ArrayNum = 0;
      local_518.ArrayMax = 0;
      RespawnNecessaryNetStartupActors(this,&local_518,(ULevel *)0x0);
      if (local_518.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_518.AllocatorInstance.Data);
      }
      this->bIsRestoringStartupActors = bVar19;
    }
    uVar37 = 0;
    fVar58 = 0.0;
    if (0 < (this->PlaybackPackets).ArrayNum) {
      iVar22 = (this->PlaybackPackets).ArrayNum;
      uVar45 = iVar22 - 1;
      uVar44 = 0;
      if ((int)uVar45 < iVar22) {
        uVar44 = ~uVar45 >> 0x1f;
      }
      if ((uVar44 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar13 = (code *)swi(3);
        uVar18 = (*pcVar13)();
        return (bool)uVar18;
      }
      fVar58 = *(float *)((this->PlaybackPackets).AllocatorInstance.Data +
                         (longlong)(this->PlaybackPackets).ArrayNum * 0x20 + -0x10);
    }
    (this->ReplayHelper).DemoCurrentTime = fVar58;
    if (local_5f0->ExtraTimeMS == -1) {
      CleanupOutstandingRewindActors(this);
    }
    else {
      SkipTimeInternal(this,(float)local_5f0->ExtraTimeMS * __real_3a83126f,true,true);
    }
    if (bVar17 == false) {
      local_418 = (FPlaybackPacket *)(this->PlaybackPackets).AllocatorInstance.Data;
      iVar22 = (this->PlaybackPackets).ArrayNum;
      if ((iVar22 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        uVar18 = (*pcVar13)();
        return (bool)uVar18;
      }
      local_3c8._12_4_ = uStack_40c;
      local_3c8.ArrayNum = iVar22;
      local_3c8.DataPtr = local_418;
      iStack_410 = iVar22;
      ProcessPlaybackPackets(this,&local_3c8);
      DestructItems<FPlaybackPacket,int>
                ((FPlaybackPacket *)(this->PlaybackPackets).AllocatorInstance.Data,
                 (this->PlaybackPackets).ArrayNum);
      (this->PlaybackPackets).ArrayNum = 0;
      if ((this->PlaybackPackets).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&(this->PlaybackPackets).AllocatorInstance,0,
                   &(this->PlaybackPackets).ArrayMax);
      }
      if (1 < *(int *)&(this->ReplayHelper).PlaybackFrames.field_0x48) goto LAB_147af823e;
      bVar17 = false;
      TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
                        *)&(this->ReplayHelper).PlaybackFrames);
    }
    else {
      uVar41 = uVar37;
      if (*(longlong *)&this->field_0x100 != 0) {
        pUVar30 = Z_Construct_UClass_UDemoNetConnection_NoRegister();
        bVar17 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x100,pUVar30);
        if (bVar17) {
          uVar41 = *(ulonglong *)&this->field_0x100;
        }
      }
      local_610 = uVar41;
      if (0 < (int)local_650) {
        local_618 = (FArchiveState *)0x0;
        do {
          pFVar25 = local_618;
          uVar44 = (uint)uVar37;
          if (((local_610 != 0) && (-1 < (int)uVar44)) &&
             ((int)uVar44 < (this->PlaybackDeltaCheckpointData).ArrayNum)) {
            if ((*(longlong *)
                  ((this->PlaybackDeltaCheckpointData).AllocatorInstance.Data + (longlong)local_618)
                 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PlaybackDeltaCheckpointData[i].IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                                    ,0x11cc,L""), bVar17)) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
            if (((this->PlaybackDeltaCheckpointData).ArrayNum <= (int)uVar44) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
            uStack_48c = 1;
            local_478 = 0;
            lVar26 = *(longlong *)
                      ((this->PlaybackDeltaCheckpointData).AllocatorInstance.Data +
                      (longlong)pFVar25);
            local_5f0 = (FGotoResult *)(lVar26 + 0xb0);
            iVar22 = *(int *)(lVar26 + 0xd8);
            local_488 = (uint *)(lVar26 + 0xc0);
            iStack_47c = local_478;
            iStack_490 = 0;
            if (iVar22 != 0) {
              puVar55 = local_488;
              if (*(uint **)(lVar26 + 0xd0) != (uint *)0x0) {
                puVar55 = *(uint **)(lVar26 + 0xd0);
              }
              uVar45 = *puVar55;
              local_478 = 0;
              while (uVar45 == 0) {
                iStack_490 = iStack_490 + 1;
                local_478 = local_478 + 0x20;
                iStack_47c = iVar22;
                if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_490)
                goto LAB_147af7c02;
                uVar45 = puVar55[iStack_490];
              }
              uStack_48c = ~(uVar45 - 1) & uVar45;
              uVar37 = (ulonglong)uStack_48c * 2 + 1;
              lVar40 = 0x3f;
              if (uVar37 != 0) {
                for (; uVar37 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                }
              }
              local_4d0 = (int)lVar40;
              iStack_47c = local_478 + -1 + local_4d0;
              if (iVar22 < iStack_47c) {
                iStack_47c = iVar22;
              }
            }
LAB_147af7c02:
            uVar45 = *(uint *)(lVar26 + 0xd8);
            uStack_474 = local_9c;
            iStack_470 = *(int *)(lVar26 + 0xb8) - *(int *)(lVar26 + 0xe4);
            uVar52 = uVar45 & 0xffffffe0;
            auStack_460._0_8_ = CONCAT44(uStack_48c,iStack_490);
            uStack_480 = 0xffffffff;
            uStack_450 = 0xffffffff;
            auStack_460._8_8_ = local_488;
            uStack_44c = iStack_47c;
            iVar22 = (int)uVar45 >> 5;
            local_448._4_4_ = local_9c;
            local_448._0_4_ = local_478;
            uStack_440 = CONCAT44(uStack_46c,iStack_470);
            local_498 = local_5f0;
            local_468 = local_5f0;
            if ((((int)uVar45 < 0) || (*(int *)(lVar26 + 0xd8) < (int)uVar45)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar17)) {
              pcVar13 = (code *)swi(3);
              uVar18 = (*pcVar13)();
              return (bool)uVar18;
            }
            pFVar15 = local_5f0;
            uVar37 = local_610;
            uVar6 = *(uint *)(lVar26 + 0xd8);
            if (uVar45 != uVar6) {
              pTVar54 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar26 + 0xc0);
              if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar26 + 0xd0) !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar54 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar26 + 0xd0);
              }
              uVar45 = -1 << ((byte)uVar45 & 0x1f) &
                       *(uint *)((pTVar54->AllocatorInstance).InlineData + (longlong)iVar22 * 4);
              while (uVar45 == 0) {
                iVar22 = iVar22 + 1;
                uVar52 = uVar52 + 0x20;
                uVar45 = uVar6;
                if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar22)
                goto LAB_147af7d40;
                uVar45 = *(uint *)((pTVar54->AllocatorInstance).InlineData + (longlong)iVar22 * 4);
              }
              uVar41 = (ulonglong)(~(uVar45 - 1) & uVar45) * 2 + 1;
              lVar40 = 0x3f;
              if (uVar41 != 0) {
                for (; uVar41 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                }
              }
              local_4a0 = (int)lVar40;
              uVar45 = local_4a0 + -1 + uVar52;
              if ((int)uVar6 < (int)uVar45) {
                uVar45 = uVar6;
              }
            }
LAB_147af7d40:
            while( true ) {
              pFVar16 = local_468;
              if ((int)local_468->_padding_ - *(int *)((longlong)&local_468[1].ExtraTimeMS + 4) !=
                  (int)uStack_440) {
                local_661 = 0;
                `TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,enum_EChannelCloseReason>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_661);
              }
              if (((uStack_44c == uVar45) &&
                  ((TBitArray<FDefaultBitArrayAllocator> *)auStack_460._8_8_ ==
                   (TBitArray<FDefaultBitArrayAllocator> *)(lVar26 + 0xc0))) && (pFVar16 == pFVar15)
                 ) break;
              pFVar4 = (FNetworkGUID *)(pFVar16->_padding_ + (longlong)(int)uStack_44c * 0x18);
              pTVar42 = TSet<TTuple<FNetworkGUID,UActorChannel_*>,TDefaultMapHashableKeyFuncs<FNetworkGUID,UActorChannel_*,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<FNetworkGUID,UActorChannel_*>,TDefaultMapHashableKeyFuncs<FNetworkGUID,UActorChannel_*,0>,FDefaultSetAllocator>
                                *)(uVar37 + 0x1f80),pFVar4);
              if ((pTVar42 != (TTuple<FNetworkGUID,UActorChannel_*> *)0x0) &&
                 (*(UChannel **)&pTVar42->field_0x8 != (UChannel *)0x0)) {
                UChannel::ConditionalCleanUp
                          (*(UChannel **)&pTVar42->field_0x8,true,
                           *(EChannelCloseReason *)&pFVar4[1].field0_0x0);
              }
              uStack_450 = uStack_450 & ~auStack_460._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_460);
            }
          }
          pFVar25 = local_618;
          uVar45 = 0;
          if ((int)uVar44 < (int)local_650) {
            uVar45 = ~uVar44 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            uVar18 = (*pcVar13)();
            return (bool)uVar18;
          }
          if ((*(int *)(local_658.Data + (longlong)pFVar25 + 4) <
               *(int *)(local_658.Data + (longlong)pFVar25)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("DeltaCheckpointPacketIntervals[i].IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                                  ,0x11d7,L""), bVar17)) {
            pcVar13 = (code *)swi(3);
            uVar18 = (*pcVar13)();
            return (bool)uVar18;
          }
          uVar45 = 0;
          if ((int)uVar44 < (int)local_650) {
            uVar45 = ~uVar44 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            uVar18 = (*pcVar13)();
            return (bool)uVar18;
          }
          if (((*(int *)(local_658.Data + (longlong)pFVar25) < 0) ||
              ((this->PlaybackPackets).ArrayNum <= *(int *)(local_658.Data + (longlong)pFVar25))) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PlaybackPackets.IsValidIndex(DeltaCheckpointPacketIntervals[i].Min)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                                  ,0x11d8,L""), bVar17)) {
            pcVar13 = (code *)swi(3);
            uVar18 = (*pcVar13)();
            return (bool)uVar18;
          }
          uVar45 = 0;
          if ((int)uVar44 < (int)local_650) {
            uVar45 = ~uVar44 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            uVar18 = (*pcVar13)();
            return (bool)uVar18;
          }
          FVar48.Data = local_658.Data;
          uVar45 = 0;
          if ((int)uVar44 < (int)local_650) {
            uVar45 = ~uVar44 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            uVar18 = (*pcVar13)();
            return (bool)uVar18;
          }
          iVar22 = (*(int *)(local_658.Data + (longlong)pFVar25 + 4) -
                   *(int *)(local_658.Data + (longlong)pFVar25)) +
                   *(int *)(FVar48.Data + (longlong)pFVar25);
          if (((iVar22 < 0) || ((this->PlaybackPackets).ArrayNum <= iVar22)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PlaybackPackets.IsValidIndex(DeltaCheckpointPacketIntervals[i].Min + DeltaCheckpointPacketIntervals[i].Size())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                                  ,0x11d9,L""), bVar17)) {
            pcVar13 = (code *)swi(3);
            uVar18 = (*pcVar13)();
            return (bool)uVar18;
          }
          uVar45 = 0;
          if ((int)uVar44 < (int)local_650) {
            uVar45 = ~uVar44 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            uVar18 = (*pcVar13)();
            return (bool)uVar18;
          }
          iVar22 = (*(int *)(local_658.Data + (longlong)pFVar25 + 4) -
                   *(int *)(local_658.Data + (longlong)pFVar25)) + 1;
          uVar45 = 0;
          if ((int)uVar44 < (int)local_650) {
            uVar45 = ~uVar44 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            uVar18 = (*pcVar13)();
            return (bool)uVar18;
          }
          uVar45 = *(uint *)(local_658.Data + (longlong)pFVar25);
          uVar52 = 0;
          if ((int)uVar45 < (this->PlaybackPackets).ArrayNum) {
            uVar52 = ~uVar45 >> 0x1f;
          }
          if ((uVar52 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            uVar18 = (*pcVar13)();
            return (bool)uVar18;
          }
          local_428 = (FPlaybackPacket *)
                      ((this->PlaybackPackets).AllocatorInstance.Data + (longlong)(int)uVar45 * 0x20
                      );
          iStack_420 = iVar22;
          if ((iVar22 < 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar17)) {
            pcVar13 = (code *)swi(3);
            uVar18 = (*pcVar13)();
            return (bool)uVar18;
          }
          local_3d8._12_4_ = uStack_41c;
          local_3d8.ArrayNum = iStack_420;
          local_3d8.DataPtr = local_428;
          ProcessPlaybackPackets(this,&local_3d8);
          local_618 = (FArchiveState *)((longlong)pFVar25 + 8);
          uVar37 = (ulonglong)(uVar44 + 1);
        } while ((int)(uVar44 + 1) < (int)local_650);
      }
      DestructItems<FPlaybackPacket,int>
                ((FPlaybackPacket *)(this->PlaybackPackets).AllocatorInstance.Data,
                 (this->PlaybackPackets).ArrayNum);
      (this->PlaybackPackets).ArrayNum = 0;
      if ((this->PlaybackPackets).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&(this->PlaybackPackets).AllocatorInstance,0,
                   &(this->PlaybackPackets).ArrayMax);
      }
      if (*(int *)&(this->ReplayHelper).PlaybackFrames.field_0x48 < 2) {
        bVar17 = false;
        TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
                          *)&(this->ReplayHelper).PlaybackFrames);
      }
      else {
LAB_147af823e:
        bVar17 = true;
      }
    }
    this_03 = &(this->ReplayHelper).PlaybackFrames;
    TSparseArray<TSparseSetElement<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_03,0,*(int *)&(this->ReplayHelper).PlaybackFrames.field_0x8);
    iVar22 = *(int *)&(this->ReplayHelper).PlaybackFrames.field_0xc;
    *(undefined4 *)&(this->ReplayHelper).PlaybackFrames.field_0x8 = 0;
    if (iVar22 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,(ForAnyElementType *)this_03,0,
                 (int *)&(this->ReplayHelper).PlaybackFrames.field_0xc);
    }
    *(undefined4 *)&(this->ReplayHelper).PlaybackFrames.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ReplayHelper).PlaybackFrames.field_0x34 = 0;
    iVar22 = *(int *)&(this->ReplayHelper).PlaybackFrames.field_0x2c;
    *(undefined4 *)&(this->ReplayHelper).PlaybackFrames.field_0x28 = 0;
    if ((iVar22 < 0) || (0x80 < iVar22)) {
      *(undefined4 *)&(this->ReplayHelper).PlaybackFrames.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->ReplayHelper).PlaybackFrames.field_0x10,0);
    }
    if (bVar17) {
      *(undefined4 *)&(this->ReplayHelper).PlaybackFrames.field_0x48 = 1;
      TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
                *)this_03);
    }
    lVar26 = *(longlong *)&this->field_0x1b8;
    (this->ReplayHelper).bIsLoadingCheckpoint = false;
    if ((lVar26 != 0) && (lVar26 = *(longlong *)(lVar26 + 0x1b0), lVar26 != 0)) {
      this->SavedReplicatedWorldTimeSeconds = *(double *)(lVar26 + 0x2f0);
    }
    if ((this->SpectatorController != (APlayerController *)0x0) && (local_5b0.ObjectId != 0)) {
      if ((*(longlong *)&this->field_0x1c8 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        uVar18 = (*pcVar13)();
        return (bool)uVar18;
      }
      pUVar43 = FNetGUIDCache::GetObjectFromNetGUID
                          (*(FNetGUIDCache **)&this->field_0x1c8,(FNetworkGUID *)&local_5b0,false);
      if (pUVar43 != (UObject *)0x0) {
        pUVar30 = Z_Construct_UClass_AActor_NoRegister();
        iVar22 = (int)pUVar30->_padding_;
        if ((iVar22 <= *(int *)(*(longlong *)&pUVar43->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar43->field_0x10 + 0x30) + (longlong)iVar22 * 8) ==
            &pUVar30->_padding_)) {
          local_568 = 0;
          uStack_564 = CONCAT31(uStack_564._1_3_,1);
          uStack_560 = 0x40000000;
          local_3b8 = (ulonglong)uStack_564 << 0x20;
          uStack_3b0 = CONCAT44(uStack_55c,0x40000000) & 0xfffffffeffffffff;
          uStack_55c = uStack_55c & 0xfffffffe;
          (**(code **)(this->SpectatorController->_padding_ + 0xef8))
                    (this->SpectatorController,pUVar43,&local_3b8);
        }
      }
    }
LAB_147af83b0:
    if ((FName *)local_630.Data != (FName *)0x0) {
      FMemory::Free(local_630.Data);
    }
    if (local_658.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data);
    }
  }
  bVar17 = true;
  if (local_308.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Portal.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_308.Op.AllocatorInstance.Data,local_308.Op.ArrayNum);
  if (local_308.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Op.AllocatorInstance.Data);
  }
  if (local_308.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.RedirectURL.Data.AllocatorInstance.Data);
  }
  if (local_308.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Map.Data.AllocatorInstance.Data);
  }
  if (local_308.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Host.Data.AllocatorInstance.Data);
  }
  if (local_308.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Protocol.Data.AllocatorInstance.Data);
  }
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<AActor_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<AActor_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  if ((FNetworkGUID_u_0 *)local_608.Data != (FNetworkGUID_u_0 *)0x0) {
    FMemory::Free(local_608.Data);
  }
LAB_147af8531:
  if ((local_590 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_590 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_590 & 4) != 0) {
    FThreadStats::AddMessage(local_598,CycleScopeEnd);
  }
  return bVar17;
}

// LowLevelGetNetworkNumber @ 147af91d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
UDemoNetDriver::LowLevelGetNetworkNumber(UDemoNetDriver *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// LowLevelSend @ 147af9540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::LowLevelSend
          (UDemoNetDriver *this,TSharedPtr<FInternetAddr_const_,1> *param_1,void *param_2,
          int param_3,FOutPacketTraits *param_4)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// NotifyActorChannelCleanedUp @ 147afa440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::NotifyActorChannelCleanedUp
          (UDemoNetDriver *this,UActorChannel *param_1,EChannelCloseReason param_2)

{
  bool bVar1;
  EChannelCloseReason local_res18 [16];
  FNetworkGUID *local_18;
  EChannelCloseReason *local_10;
  
  local_res18[0] = param_2;
  bVar1 = IsRecording(this);
  if ((((bVar1) && ((this->ReplayHelper).bHasDeltaCheckpoints != false)) &&
      ((this->ReplayHelper).CheckpointSaveContext.CheckpointSaveState == Idle)) &&
     ((param_1 != (UActorChannel *)0x0 && ((param_1->_padding_ & 0x2000) != 0)))) {
    local_18 = &param_1->ActorNetGUID;
    local_10 = local_res18;
    TSet<TTuple<FNetworkGUID,enum_EChannelCloseReason>,TDefaultMapHashableKeyFuncs<FNetworkGUID,enum_EChannelCloseReason,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FNetworkGUID_const_&,enum_EChannelCloseReason_const_&>_>
              (&(this->ReplayHelper).RecordingDeltaCheckpointData.ChannelsToClose,
               (TPairInitializer<FNetworkGUID_const_&,EChannelCloseReason_const_&> *)
               (local_res18 + 8),(bool *)&local_18);
  }
  UNetDriver::NotifyActorChannelCleanedUp((UNetDriver *)this,param_1,local_res18[0]);
  return;
}

// NotifyActorChannelOpen @ 147afa4e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::NotifyActorChannelOpen(UDemoNetDriver *this,UActorChannel *param_1,AActor *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined1 local_res10 [8];
  
  if (param_1 == (UActorChannel *)0x0) {
    bVar1 = `UDemoNetDriver::NotifyActorChannelOpen'::__l2::<lambda_1>::operator()(local_res10);
    if (bVar1) goto LAB_147afa515;
    bVar1 = false;
  }
  else {
LAB_147afa515:
    bVar1 = true;
  }
  if (param_2 == (AActor *)0x0) {
    bVar2 = `UDemoNetDriver::NotifyActorChannelOpen'::__l2::<lambda_2>::operator()(local_res10);
    if (!bVar2) goto LAB_147afa52d;
  }
  bVar2 = true;
LAB_147afa52d:
  if ((bVar1) && (bVar2 != false)) {
    iVar3 = TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
                      (&this->TrackedRewindActorsByGUID,&param_1->ActorNetGUID);
    if (0 < iVar3) {
      (**(code **)(param_2->_padding_ + 800))(param_2);
    }
    bVar1 = IsRecording(this);
    if ((bVar1) && ((this->ReplayHelper).bHasDeltaCheckpoints != false)) {
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
                (&(this->ReplayHelper).RecordingDeltaCheckpointData.DestroyedDynamicActors,
                 &param_1->ActorNetGUID);
    }
  }
  return;
}

// NotifyActorClientDormancyChanged @ 147afa5a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::NotifyActorClientDormancyChanged
          (UDemoNetDriver *this,AActor *param_1,ENetDormancy param_2)

{
  code *pcVar1;
  bool bVar2;
  FNetworkObjectList *pFVar3;
  
  bVar2 = IsRecording(this);
  if ((bVar2) && ((param_1->NetDormancy).Value < 2)) {
    (**(code **)(*(longlong *)this + 0x3b0))(this,param_1);
    UNetDriver::FlushActorDormancy((UNetDriver *)this,param_1,false);
    pFVar3 = UNetDriver::GetNetworkObjectList((UNetDriver *)this);
    if (*(int *)&this->field_0x110 < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FNetworkObjectList::MarkActive
              (pFVar3,param_1,(UNetConnection *)**(undefined8 **)&this->field_0x108,
               (UNetDriver *)this);
    pFVar3 = UNetDriver::GetNetworkObjectList((UNetDriver *)this);
    if (*(int *)&this->field_0x110 < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FNetworkObjectList::ClearRecentlyDormantConnection
              (pFVar3,param_1,(UNetConnection *)**(undefined8 **)&this->field_0x108,
               (UNetDriver *)this);
  }
  return;
}

// NotifyActorDestroyed @ 147afa6d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::NotifyActorDestroyed
          (UDemoNetDriver *this,AActor *param_1,bool param_2,EChannelCloseReason param_3)

{
  longlong lVar1;
  UActorChannel *this_00;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FNetGUIDCache *pFVar7;
  AActor *pAVar8;
  TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *pTVar9;
  FNetworkObjectList *this_01;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ForElementType<FSetElementId> FVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  AActor *local_90;
  FWeakObjectPtr local_88;
  FWeakObjectPtr local_80;
  AActor *local_78;
  FWeakObjectPtr local_70;
  longlong *local_68;
  AActor *local_60;
  FName local_58;
  FString local_50;
  ulonglong uVar13;
  
  if ((param_1 == (AActor *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Actor != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                         ,0x1408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = IsRecording(this);
  bVar5 = AActor::IsNetStartupActor(param_1);
  if ((!(bool)param_1->bReplayRewindable) || (param_2)) {
    if (!bVar4) goto LAB_147afabe1;
  }
  else if (!bVar4) {
    if (!bVar5) {
      pFVar7 = TSharedPtr<FNetGUIDCache,1>::operator->
                         ((TSharedPtr<FNetGUIDCache,1> *)&this->field_0x1c8);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      uVar10 = 0;
      local_88.ObjectIndex = 0;
      local_88.ObjectSerialNumber = 0;
      local_78 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_88,(FObjectPtr)&local_78);
      local_70 = local_88;
      iVar6 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                        ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FNetworkGUID,0>,FDefaultSetAllocator>
                          *)&pFVar7->NetGUIDLookup,
                         local_88.ObjectSerialNumber ^ local_88.ObjectIndex,
                         (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_70);
      if ((iVar6 != -1) &&
         (lVar1 = *(longlong *)&(pFVar7->NetGUIDLookup).field_0x0 + (longlong)iVar6 * 0x18,
         lVar1 != 0)) {
        uVar10 = *(ulonglong *)(lVar1 + 8);
      }
      if (*(int *)&(this->TrackedRewindActorsByGUID).Elements.field_0x8 !=
          *(int *)&(this->TrackedRewindActorsByGUID).Elements.field_0x34) {
        FVar14 = (this->TrackedRewindActorsByGUID).Hash.SecondaryData;
        if (FVar14 == (ForElementType<FSetElementId>)0x0) {
          FVar14 = (ForElementType<FSetElementId>)&(this->TrackedRewindActorsByGUID).Hash;
        }
        iVar6 = *(int *)((longlong)FVar14 +
                        ((uVar10 >> 0x20) * 0x17 + uVar10 &
                        (ulonglong)((this->TrackedRewindActorsByGUID).HashSize - 1)) * 4);
        if (iVar6 != -1) {
          lVar1 = *(longlong *)&(this->TrackedRewindActorsByGUID).Elements;
          do {
            if (*(ulonglong *)(lVar1 + (longlong)iVar6 * 0x10) == uVar10) goto LAB_147afabe1;
            iVar6 = *(int *)(lVar1 + 8 + (longlong)iVar6 * 0x10);
          } while (iVar6 != -1);
        }
      }
    }
    if (2 < (byte)LogDemo._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_50,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_147afabe1;
  }
  if (bVar5) {
    if (param_2) {
      uVar10 = 0;
      if ((*(int *)&this->field_0x110 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar17 = (longlong *)**(longlong **)&this->field_0x108;
      local_68 = plVar17;
      if (plVar17 != (longlong *)0x0) {
        if (param_1->bNetTemporary != 0) {
          local_90 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          if ((((AActor **)plVar17[0x10] <= &local_90) &&
              (&local_90 < (AActor **)plVar17[0x10] + *(int *)((longlong)plVar17 + 0x8c))) &&
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
          iVar6 = (int)plVar17[0x11];
          if (iVar6 != 0) {
            plVar17 = (longlong *)plVar17[0x10];
            bVar4 = (AActor *)*plVar17 != local_90;
            pAVar8 = local_90;
            uVar13 = uVar10;
            uVar16 = uVar10;
            do {
              uVar11 = (uint)uVar13;
              uVar12 = uVar11;
              do {
                uVar10 = uVar10 + 1;
                uVar12 = uVar12 + 1;
                uVar13 = (ulonglong)uVar12;
                if ((longlong)iVar6 <= (longlong)uVar10) break;
              } while (bVar4 == ((AActor *)plVar17[uVar10] != pAVar8));
              if (bVar4 != false) {
                uVar15 = (uint)uVar16;
                if (uVar15 != uVar11) {
                  memmove(plVar17 + (int)uVar15,plVar17 + (int)uVar11,
                          (longlong)(int)(uVar12 - uVar11) << 3);
                  pAVar8 = local_90;
                }
                uVar16 = (ulonglong)(uVar15 + (uVar12 - uVar11));
              }
              bVar4 = (bool)(bVar4 ^ 1);
            } while ((longlong)uVar10 < (longlong)iVar6);
            *(int *)(local_68 + 0x11) = (int)uVar16;
            plVar17 = local_68;
          }
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_80.ObjectIndex = 0;
        local_80.ObjectSerialNumber = 0;
        local_60 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_80,(FObjectPtr)&local_60);
        pTVar9 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                         *)(plVar17 + 0x29a),(TWeakObjectPtr<AActor_const_,FWeakObjectPtr>)local_80)
        ;
        if ((pTVar9 != (TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *)0x0) &&
           (this_00 = *(UActorChannel **)&pTVar9->field_0x8, this_00 != (UActorChannel *)0x0)) {
          if (((this_00->_padding_ & 0x1000) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Channel->OpenedLocally",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                                 ,0x142a,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_00->bClearRecentActorRefs = 0;
          (**(code **)(this_00->_padding_ + 0x2c0))(this_00);
          UActorChannel::ReleaseReferences(this_00,false);
        }
        (**(code **)(*plVar17 + 1000))(plVar17,param_1,1);
      }
      this_01 = UNetDriver::GetNetworkObjectList((UNetDriver *)this);
      FNetworkObjectList::Remove(this_01,param_1);
      FVar2 = (FName)param_1->_padding_;
      if (*(int *)&this->field_0x590 == *(int *)&this->field_0x5bc) {
        return;
      }
      local_58 = FVar2;
      uVar12 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
      RemoveImpl<FName>((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                         *)&this->field_0x588,FVar2.Number + uVar12,&local_58);
      return;
    }
  }
  else if (param_2) goto LAB_147afabe1;
  if ((*(int *)&this->field_0x110 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FReplayHelper::NotifyActorDestroyed
            (&this->ReplayHelper,(UNetConnection *)**(undefined8 **)&this->field_0x108,param_1);
LAB_147afabe1:
  UNetDriver::NotifyActorDestroyed((UNetDriver *)this,param_1,param_2,param_3);
  return;
}

// NotifyActorLevelUnloaded @ 147afac10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::NotifyActorLevelUnloaded(UDemoNetDriver *this,AActor *param_1)

{
  longlong lVar1;
  UActorChannel *this_00;
  TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *pTVar2;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  lVar1 = *(longlong *)&this->field_0x100;
  if (lVar1 != 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res8 = (FWeakObjectPtr)param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
    pTVar2 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                     *)(lVar1 + 0x14d0),(TWeakObjectPtr<AActor_const_,FWeakObjectPtr>)local_res18);
    if ((pTVar2 != (TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *)0x0) &&
       (this_00 = *(UActorChannel **)&pTVar2->field_0x8, this_00 != (UActorChannel *)0x0)) {
      lVar1 = *(longlong *)&this->field_0x100;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res20 = (FWeakObjectPtr)param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      local_res20 = local_res8;
      if (*(int *)(lVar1 + 0x14d8) != *(int *)(lVar1 + 0x1504)) {
        TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>_>
                  ((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                    *)(lVar1 + 0x14d0),local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                   (TWeakObjectPtr<AActor_const_,FWeakObjectPtr> *)&local_res20);
      }
      if (*(longlong **)(lVar1 + 0x1520) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar1 + 0x1520) + 0x2b8))();
      }
      UActorChannel::ReleaseReferences(this_00,false);
      UChannel::ConditionalCleanUp((UChannel *)this_00,false,LevelUnloaded);
    }
  }
  UNetDriver::NotifyActorLevelUnloaded((UNetDriver *)this,param_1);
  return;
}

// NotifyActorTornOff @ 147afadf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::NotifyActorTornOff(UDemoNetDriver *this,AActor *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsRecording(this);
  if (((bVar2) && (param_1 != (AActor *)0x0)) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    UNetDriver::ForcePropertyCompare((UNetDriver *)this,param_1);
    if (*(int *)&this->field_0x110 < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FReplayHelper::ReplicateActor
              (&this->ReplayHelper,param_1,(UNetConnection *)**(undefined8 **)&this->field_0x108,
               true);
    if (*(int *)&this->field_0x110 < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FReplayHelper::RemoveActorFromCheckpoint
              (&this->ReplayHelper,(UNetConnection *)**(undefined8 **)&this->field_0x108,param_1);
  }
  UNetDriver::NotifyActorTornOff((UNetDriver *)this,param_1);
  return;
}

// NotifyDemoPlaybackError @ 147afaf10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::NotifyDemoPlaybackError(UDemoNetDriver *this,TNetResult<EReplayResult> *param_1)

{
  longlong *plVar1;
  bool bVar2;
  EConnectionState EVar3;
  
  if ((this->ReplayHelper).bIsLoadingCheckpoint == false) {
    if (*(UNetConnection **)&this->field_0x100 != (UNetConnection *)0x0) {
      EVar3 = UNetConnection::GetConnectionState(*(UNetConnection **)&this->field_0x100);
      if (EVar3 != USOCK_Closed) goto LAB_147afaf49;
    }
    bVar2 = false;
  }
  else {
LAB_147afaf49:
    bVar2 = true;
  }
  TMulticastDelegate<void___cdecl(UWorld_*,enum_EDemoPlayFailure::Type),FDefaultDelegateUserPolicy>
  ::Broadcast(&FNetworkReplayDelegates::OnReplayStartFailure,*(UWorld **)&this->field_0x1b8,Generic)
  ;
  TMulticastDelegate<void___cdecl(UWorld_*,UE::Net::TNetResult<enum_EReplayResult>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&FNetworkReplayDelegates::OnReplayPlaybackFailure,*(UWorld **)&this->field_0x1b8,
              param_1);
  StopDemo(this);
  if (((bVar2) && (*(longlong *)&this->field_0x1b8 != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)&this->field_0x1b8 + 0x230), plVar1 != (longlong *)0x0))
  {
    (**(code **)(*plVar1 + 0x340))(plVar1,param_1);
  }
  return;
}

// NotifyDemoPlaybackFailure @ 147afafc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::NotifyDemoPlaybackFailure(UDemoNetDriver *this,Type param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  EConnectionState EVar4;
  UEnum *pUVar5;
  UEnum *local_res8;
  undefined1 local_48 [8];
  FWeakObjectPtr local_40;
  UEnum *local_38;
  void *local_30;
  undefined8 local_28;
  longlong local_20;
  
  if (2 < (byte)LogDemo._0_1_) {
    switch(param_1) {
    case Generic:
      break;
    case DemoNotFound:
      break;
    case Corrupt:
      break;
    case InvalidVersion:
      break;
    case InitBase:
      break;
    case GameSpecificHeader:
      break;
    case ReplayStreamerInternal:
      break;
    case LoadMap:
      break;
    case Serialization:
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
  }
  if (((this->ReplayHelper).bIsLoadingCheckpoint == false) &&
     ((*(UNetConnection **)&this->field_0x100 == (UNetConnection *)0x0 ||
      (EVar4 = UNetConnection::GetConnectionState(*(UNetConnection **)&this->field_0x100),
      EVar4 == USOCK_Closed)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TMulticastDelegate<void___cdecl(UWorld_*,enum_EDemoPlayFailure::Type),FDefaultDelegateUserPolicy>
  ::Broadcast(&FNetworkReplayDelegates::OnReplayStartFailure,*(UWorld **)&this->field_0x1b8,param_1)
  ;
  pUVar5 = StaticEnum<enum_EReplayResult>();
  local_48 = (undefined1  [8])0xb;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  local_40.ObjectIndex = 0;
  local_40.ObjectSerialNumber = 0;
  local_res8 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  FWeakObjectPtr::operator=(&local_40,(FObjectPtr)&local_res8);
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = 0;
  local_38 = pUVar5;
  TMulticastDelegate<void___cdecl(UWorld_*,UE::Net::TNetResult<enum_EReplayResult>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&FNetworkReplayDelegates::OnReplayPlaybackFailure,*(UWorld **)&this->field_0x1b8,
              (TNetResult<EReplayResult> *)local_48);
  if (local_20 != 0) {
    (**(code **)(local_20 + -0x10))(local_20 + -0x10);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  StopDemo(this);
  if (((bVar3) && (*(longlong *)&this->field_0x1b8 != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)&this->field_0x1b8 + 0x230), plVar1 != (longlong *)0x0))
  {
    pcVar2 = *(code **)(*plVar1 + 0x340);
    pUVar5 = StaticEnum<enum_EReplayResult>();
    local_48 = (undefined1  [8])0xb;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    local_40.ObjectIndex = 0;
    local_40.ObjectSerialNumber = 0;
    local_res8 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FWeakObjectPtr::operator=(&local_40,(FObjectPtr)&local_res8);
    local_30 = (void *)0x0;
    local_28 = 0;
    local_20 = 0;
    local_38 = pUVar5;
    (*pcVar2)(plVar1,local_48);
    if (local_20 != 0) {
      (**(code **)(local_20 + -0x10))(local_20 + -0x10);
    }
    if (local_30 != (void *)0x0) {
      FMemory::Free(local_30);
    }
  }
  return;
}

// NotifyDemoRecordFailure @ 147afb260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::NotifyDemoRecordFailure(UDemoNetDriver *this,TNetResult<EReplayResult> *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = IsRecording(this);
  StopDemo(this);
  if ((bVar1) && ((this->PendingRecordFailure).bIsSet == false)) {
    *(undefined8 *)&(this->PendingRecordFailure).TypedValue = *(undefined8 *)param_1;
    *(undefined8 *)&(this->PendingRecordFailure).TypedValue.field_0x8 =
         *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)&(this->PendingRecordFailure).TypedValue.field_0x10 =
         *(undefined8 *)&param_1->field_0x10;
    ::FString::FString((FString *)&(this->PendingRecordFailure).TypedValue.field_0x18,
                       (FString *)&param_1->field_0x18);
    *(undefined8 *)&(this->PendingRecordFailure).TypedValue.field_0x28 = 0;
    if (*(longlong *)&param_1->field_0x28 != 0) {
      uVar2 = (**(code **)(*(longlong *)&param_1->field_0x28 + -8))();
      *(undefined8 *)&(this->PendingRecordFailure).TypedValue.field_0x28 = uVar2;
    }
    (this->PendingRecordFailure).bIsSet = true;
  }
  return;
}

// NotifyGotoTimeFinished @ 147afb300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::NotifyGotoTimeFinished(UDemoNetDriver *this,bool param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnGotoTimeDelegate_Transient,&local_28);
  if ((*(int *)&(this->OnGotoTimeDelegate_Transient).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnGotoTimeDelegate_Transient).field_0x8,
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGotoTimeDelegate_Transient);
  if (param_1) {
    TMulticastDelegate<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::Broadcast
              (&FNetworkReplayDelegates::OnReplayScrubComplete,*(UWorld **)&this->field_0x1b8);
  }
  return;
}

// NotifyStreamingLevelUnload @ 147afb390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::NotifyStreamingLevelUnload(UDemoNetDriver *this,ULevel *param_1)

{
  TMap<FString,FRollbackNetStartupActorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>_>
  *pTVar1;
  longlong lVar2;
  EConnectionState EVar3;
  int iVar4;
  UPackage *pUVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  if ((((param_1 != (ULevel *)0x0) && (param_1->bClientOnlyVisible == '\0')) &&
      ((this->ReplayHelper).bHasLevelStreamingFixes != false)) &&
     (((this->ReplayHelper).bIsLoadingCheckpoint != false ||
      ((*(UNetConnection **)&this->field_0x100 != (UNetConnection *)0x0 &&
       (EVar3 = UNetConnection::GetConnectionState(*(UNetConnection **)&this->field_0x100),
       EVar3 != USOCK_Closed)))))) {
    pUVar5 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
    pTVar1 = &this->RollbackNetStartupActors;
    lVar2 = pUVar5->_padding_;
    TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
                *)pTVar1);
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_10 = 0;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar6 = local_78._24_8_ >> 0x20;
    uVar7 = local_78._28_4_;
    local_18 = (TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
                *)pTVar1;
    if ((int)uVar7 < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        if (*(longlong *)((longlong)(int)uVar6 * 0xe8 + 0x68 + *local_48) == lVar2) {
          TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_20,uVar7);
          local_10 = CONCAT11(local_10._1_1_,1);
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar6 = (ulonglong)uStack_2c;
        uVar7 = uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
        uVar7 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar7 < 4) {
          iVar4 = 1;
        }
        else {
          uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar4 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar7) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
          local_18->HashSize = iVar4;
          TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
  }
  UNetDriver::NotifyStreamingLevelUnload((UNetDriver *)this,param_1);
  return;
}

// OnActorPreDestroy @ 147afb880

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::OnActorPreDestroy(UDemoNetDriver *this,AActor *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (AActor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestroyedActor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                       ,0x13fe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = IsRecording(this);
  if (bVar2) {
    if (*(int *)&this->field_0x110 < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FReplayHelper::RemoveActorFromCheckpoint
              (&this->ReplayHelper,(UNetConnection *)**(undefined8 **)&this->field_0x108,param_1);
  }
  return;
}

// OnPostLoadMapWithWorld @ 147afbf50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::OnPostLoadMapWithWorld(UDemoNetDriver *this,UWorld *param_1)

{
  EConnectionState EVar1;
  
  if (((param_1 != (UWorld *)0x0) && (*(UWorld **)&this->field_0x1b8 != (UWorld *)0x0)) &&
     (*(UWorld **)&this->field_0x1b8 == param_1)) {
    if ((this->ReplayHelper).bHasLevelStreamingFixes != false) {
      if (((this->ReplayHelper).bIsLoadingCheckpoint == false) &&
         ((*(UNetConnection **)&this->field_0x100 == (UNetConnection *)0x0 ||
          (EVar1 = UNetConnection::GetConnectionState(*(UNetConnection **)&this->field_0x100),
          EVar1 == USOCK_Closed)))) {
        FReplayHelper::ClearLevelStreamingState(&this->ReplayHelper);
      }
      else {
        FReplayHelper::ResetLevelStatuses(&this->ReplayHelper);
      }
    }
    if (((this->ReplayHelper).bIsLoadingCheckpoint == false) &&
       ((*(UNetConnection **)&this->field_0x100 == (UNetConnection *)0x0 ||
        (EVar1 = UNetConnection::GetConnectionState(*(UNetConnection **)&this->field_0x100),
        EVar1 == USOCK_Closed)))) {
      FReplayHelper::ClearLevelMap(&this->ReplayHelper);
      return;
    }
    FReplayHelper::ResetLevelMap(&this->ReplayHelper);
  }
  return;
}

// OnRefreshHeaderCompletePrivate @ 147afc100

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::OnRefreshHeaderCompletePrivate
          (UDemoNetDriver *this,FDownloadHeaderResult *param_1,int param_2)

{
  bool bVar1;
  UEnum *pUVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  UEnum *local_res8;
  FString local_58;
  undefined1 local_48 [8];
  FWeakObjectPtr local_40;
  UEnum *local_38;
  FString local_30;
  longlong local_20;
  
  this->bIsWaitingForHeaderDownload = '\0';
  if (*(int *)&param_1->field_0x8 == 0) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    bVar1 = FReplayHelper::ReadPlaybackDemoHeader(&this->ReplayHelper,&local_58);
    if (bVar1) {
      if ((param_2 < 0) ||
         ((this->ReplayHelper).PlaybackDemoHeader.LevelNamesAndTimes.ArrayNum <= param_2)) {
        if (1 < (byte)LogDemo._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
        }
        pUVar2 = StaticEnum<enum_EReplayResult>();
        local_48 = (undefined1  [8])0x2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        local_40.ObjectIndex = 0;
        local_40.ObjectSerialNumber = 0;
        local_res8 = pUVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar2);
        }
        FWeakObjectPtr::operator=(&local_40,(FObjectPtr)&local_res8);
        local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_30.Data.ArrayNum = 0;
        local_30.Data.ArrayMax = 0;
        local_20 = 0;
        local_38 = pUVar2;
        pwVar3 = ::LexToString(Corrupt);
        ::FString::operator=(&local_30,pwVar3);
        FReplayHelper::NotifyReplayError(&this->ReplayHelper,(TNetResult<EReplayResult> *)local_48);
        if (local_20 != 0) {
          (**(code **)(local_20 + -0x10))(local_20 + -0x10);
        }
        FVar4.Data = local_58.Data.AllocatorInstance.Data;
        if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_30.Data.AllocatorInstance.Data);
          FVar4.Data = local_58.Data.AllocatorInstance.Data;
        }
      }
      else {
        ProcessSeamlessTravel(this,param_2);
        FVar4.Data = local_58.Data.AllocatorInstance.Data;
      }
    }
    else {
      FVar4.Data = local_58.Data.AllocatorInstance.Data;
      if (1 < (byte)LogDemo._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
        FVar4.Data = local_58.Data.AllocatorInstance.Data;
      }
    }
  }
  else {
    if (1 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    pUVar2 = StaticEnum<enum_EReplayResult>();
    local_48 = (undefined1  [8])0x2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    local_40.ObjectIndex = 0;
    local_40.ObjectSerialNumber = 0;
    local_res8 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    FWeakObjectPtr::operator=(&local_40,(FObjectPtr)&local_res8);
    local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.Data.ArrayNum = 0;
    local_30.Data.ArrayMax = 0;
    local_20 = 0;
    local_38 = pUVar2;
    pwVar3 = ::LexToString(Corrupt);
    ::FString::operator=(&local_30,pwVar3);
    FReplayHelper::NotifyReplayError(&this->ReplayHelper,(TNetResult<EReplayResult> *)local_48);
    FVar4.Data = local_30.Data.AllocatorInstance.Data;
    if (local_20 != 0) {
      (**(code **)(local_20 + -0x10))(local_20 + -0x10);
      FVar4.Data = local_30.Data.AllocatorInstance.Data;
    }
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  return;
}

// OnSeamlessTravelStartDuringRecording @ 147afc380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::OnSeamlessTravelStartDuringRecording(UDemoNetDriver *this,FString *param_1)

{
  if (0 < *(int *)&this->field_0x110) {
    FReplayHelper::OnSeamlessTravelStart
              (&this->ReplayHelper,*(UWorld **)&this->field_0x1b8,param_1,
               (UNetConnection *)**(undefined8 **)&this->field_0x108);
    return;
  }
  return;
}

// PauseChannels @ 147afc710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::PauseChannels(UDemoNetDriver *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined4 uVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  longlong lVar14;
  UClass *pUVar15;
  FScriptContainerElement *pFVar16;
  undefined1 *puVar17;
  int iVar18;
  undefined4 uVar19;
  FDestructionSentinel local_58 [2];
  
  pTVar10 = CVarDemoInternalPauseChannels.Ref;
  if (param_1 != this->bChannelsArePaused) {
    bVar11 = IsInParallelGameThread();
    if ((bVar11) || (bVar11 = IsInGameThread(), bVar11)) {
      lVar14 = 0;
    }
    else {
      lVar14 = 4;
    }
    uVar9 = __real_3f800000;
    if ((0 < *(int *)((longlong)pTVar10->ShadowedValue + lVar14)) &&
       (iVar18 = *(int *)(*(longlong *)&this->field_0x100 + 0x78) + -1, -1 < iVar18)) {
      lVar14 = (longlong)iVar18 * 8;
      do {
        lVar4 = *(longlong *)&this->field_0x100;
        if ((*(int *)(lVar4 + 0x78) <= iVar18) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar4 = *(longlong *)(lVar14 + *(longlong *)(lVar4 + 0x70));
        if (lVar4 != 0) {
          pUVar15 = Z_Construct_UClass_UActorChannel_NoRegister();
          iVar3 = (int)pUVar15->_padding_;
          if ((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar15->_padding_)) {
            uVar19 = uVar9;
            if (param_1) {
              uVar19 = 0;
            }
            lVar5 = *(longlong *)(lVar4 + 0x68);
            *(undefined4 *)(lVar4 + 0x78) = uVar19;
            if (lVar5 != 0) {
              pFVar16 = (this->SpectatorControllers).AllocatorInstance.Data;
              pFVar1 = pFVar16 + (longlong)(this->SpectatorControllers).ArrayNum * 8;
              for (; pFVar16 != pFVar1; pFVar16 = pFVar16 + 8) {
                if ((*(longlong *)pFVar16 != 0) && (*(longlong *)pFVar16 == lVar5))
                goto LAB_147afc871;
              }
              *(undefined4 *)(lVar5 + 0x68) = uVar19;
            }
          }
        }
LAB_147afc871:
        lVar14 = lVar14 + -8;
        iVar18 = iVar18 + -1;
      } while (-1 < iVar18);
    }
    puVar17 = &this->field_0xb13;
    *puVar17 = *puVar17 & 0xfe | param_1;
    if (5 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    uVar6 = *(undefined8 *)&this->field_0x1b8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FNetworkReplayDelegates::OnPauseChannelsChanged,(FWriteAccessScope *)local_58);
    bVar11 = false;
    FNetworkReplayDelegates::OnPauseChannelsChanged._28_4_ =
         FNetworkReplayDelegates::OnPauseChannelsChanged._28_4_ + 1;
    iVar18 = FNetworkReplayDelegates::OnPauseChannelsChanged._16_4_ + -1;
    if (-1 < iVar18) {
      lVar14 = (longlong)iVar18 << 4;
      bVar11 = false;
      do {
        if (((int)FNetworkReplayDelegates::OnPauseChannelsChanged._16_4_ <= iVar18) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (((*(int *)(lVar14 + 8 + FNetworkReplayDelegates::OnPauseChannelsChanged._8_8_) == 0) ||
            (plVar7 = *(longlong **)(lVar14 + FNetworkReplayDelegates::OnPauseChannelsChanged._8_8_)
            , plVar7 == (longlong *)0x0)) ||
           (cVar13 = (**(code **)(*plVar7 + 0x68))(plVar7,uVar6,this->bChannelsArePaused),
           cVar13 == '\0')) {
          bVar11 = true;
        }
        lVar14 = lVar14 + -0x10;
        iVar18 = iVar18 + -1;
      } while (-1 < iVar18);
    }
    FNetworkReplayDelegates::OnPauseChannelsChanged._28_4_ =
         FNetworkReplayDelegates::OnPauseChannelsChanged._28_4_ + -1;
    if (bVar11) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FNetworkReplayDelegates::OnPauseChannelsChanged,false);
    }
    if (local_58[0].bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58[0].Accessor,local_58);
    }
  }
  return;
}

// PauseRecording @ 147afc9f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::PauseRecording(UDemoNetDriver *this,bool param_1)

{
  (this->ReplayHelper).bPauseRecording = param_1;
  return;
}

// PostTickFlush @ 147afecf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::PostTickFlush(UDemoNetDriver *this)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  void *pvVar4;
  undefined1 local_38 [24];
  void *local_20;
  longlong local_10;
  
  UNetDriver::PostTickFlush((UNetDriver *)this);
  if ((this->PendingRecordFailure).bIsSet != false) {
    if ((*(longlong *)&this->field_0x1b8 != 0) &&
       (plVar1 = *(longlong **)(*(longlong *)&this->field_0x1b8 + 0x230), plVar1 != (longlong *)0x0)
       ) {
      pcVar2 = *(code **)(*plVar1 + 0x350);
      UE::Net::TNetResult<enum_EReplayResult>::TNetResult<enum_EReplayResult>
                (local_38,*(EReplayResult *)&(this->PendingRecordFailure).TypedValue);
      (*pcVar2)(plVar1,local_38);
      if (local_10 != 0) {
        (**(code **)(local_10 + -0x10))(local_10 + -0x10);
      }
      if (local_20 != (void *)0x0) {
        FMemory::Free(local_20);
      }
    }
    if ((this->PendingRecordFailure).bIsSet != false) {
      lVar3 = *(longlong *)&(this->PendingRecordFailure).TypedValue.field_0x28;
      if (lVar3 != 0) {
        (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
      }
      pvVar4 = *(void **)&(this->PendingRecordFailure).TypedValue.field_0x18;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      (this->PendingRecordFailure).bIsSet = false;
    }
  }
  return;
}

// PrepFastForwardLevels @ 147afeec0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::PrepFastForwardLevels(UDemoNetDriver *this)

{
  undefined1 *this_00;
  TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *this_01;
  TSet<ULevel_*,DefaultKeyFuncs<ULevel_*,0>,FDefaultSetAllocator> *this_02;
  ulonglong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  code *pcVar6;
  TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  int iVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  FQueuedReplayTask *pFVar12;
  FString *pFVar13;
  byte bVar14;
  ForElementType<FSetElementId> FVar15;
  int iVar16;
  FQueuedReplayTask *pFVar17;
  uint uVar18;
  uint uVar19;
  wchar_t *pwVar20;
  undefined1 *puVar21;
  uint *puVar22;
  wchar_t *pwVar23;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  int local_res20;
  UObject *local_128;
  ULevel *local_120;
  UDemoNetDriver *local_118;
  TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_110;
  int iStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80 [2];
  undefined4 local_54;
  
  if (((this->ReplayHelper).bHasLevelStreamingFixes != false) &&
     (this_01 = &(this->ReplayHelper).NewStreamingLevelsThisFrame,
     *(int *)&(this->ReplayHelper).NewStreamingLevelsThisFrame.Elements.field_0x8 !=
     *(int *)&(this->ReplayHelper).NewStreamingLevelsThisFrame.Elements.field_0x34)) {
    pwVar23 = L"";
    if ((this->bIsFastForwarding != false) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsFastForwarding",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                           ,0xdef,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((this->ReplayHelper).bIsLoadingCheckpoint != false) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ReplayHelper.bIsLoadingCheckpoint",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                           ,0xdf0,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = *(int *)&(this->ReplayHelper).NewStreamingLevelsThisFrame.Elements.field_0x28;
    this_00 = &(this->ReplayHelper).NewStreamingLevelsThisFrame.Elements.field_0x10;
    iStack_108 = 0;
    local_f0 = 0;
    uStack_104 = 1;
    iStack_f4 = 0;
    if (iVar9 != 0) {
      puVar22 = *(uint **)&(this->ReplayHelper).NewStreamingLevelsThisFrame.Elements.field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)this_00;
      }
      uVar18 = *puVar22;
      while (uVar18 == 0) {
        iStack_108 = iStack_108 + 1;
        local_f0 = local_f0 + 0x20;
        iStack_f4 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_108) goto LAB_147afefec;
        uVar18 = puVar22[iStack_108];
      }
      uStack_104 = ~(uVar18 - 1) & uVar18;
      uVar1 = (ulonglong)uStack_104 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_res18 = (int)lVar5;
      iStack_f4 = local_res18 + -1 + local_f0;
      if (iVar9 < iStack_f4) {
        iStack_f4 = iVar9;
      }
    }
LAB_147afefec:
    uStack_ec = local_54;
    iStack_e8 = *(int *)&(this->ReplayHelper).NewStreamingLevelsThisFrame.Elements.field_0x8 -
                *(int *)&(this->ReplayHelper).NewStreamingLevelsThisFrame.Elements.field_0x34;
    local_res10 = *(uint *)&(this->ReplayHelper).NewStreamingLevelsThisFrame.Elements.field_0x28;
    uStack_f8 = 0xffffffff;
    uVar18 = local_res10 & 0xffffffe0;
    TStack_d8._padding_ = CONCAT44(uStack_104,iStack_108);
    TStack_d8.CurrentBitIndex = iStack_f4;
    TStack_d8.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)local_res10 >> 5;
    bVar14 = (byte)local_res10;
    TStack_d8._28_4_ = local_54;
    TStack_d8.BaseBitIndex = local_f0;
    uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
    local_110 = this_01;
    local_100 = this_00;
    local_e0 = this_01;
    TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
    if ((((int)local_res10 < 0) || (iVar9 < (int)local_res10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar2 = *(uint *)&(this->ReplayHelper).NewStreamingLevelsThisFrame.Elements.field_0x28;
    uVar19 = local_res10;
    if (local_res10 != uVar2) {
      puVar3 = *(undefined1 **)&(this->ReplayHelper).NewStreamingLevelsThisFrame.Elements.field_0x20
      ;
      puVar21 = this_00;
      if (puVar3 != (undefined1 *)0x0) {
        puVar21 = puVar3;
      }
      uVar19 = -1 << (bVar14 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar16 * 4);
      while (uVar19 == 0) {
        iVar16 = iVar16 + 1;
        uVar18 = uVar18 + 0x20;
        local_res10 = uVar2;
        uVar19 = uVar2;
        if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar16)
        goto LAB_147aff110;
        uVar19 = *(uint *)(puVar21 + (longlong)iVar16 * 4);
      }
      uVar1 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_res20 = (int)lVar5;
      local_res10 = local_res20 + -1 + uVar18;
      uVar19 = local_res10;
      if ((int)uVar2 < (int)local_res10) {
        local_res10 = uVar2;
        uVar19 = uVar2;
      }
    }
LAB_147aff110:
    while( true ) {
      pTVar7 = local_e0;
      if (*(int *)&(local_e0->Elements).field_0x8 - *(int *)&(local_e0->Elements).field_0x34 !=
          (int)uStack_b8) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_d8.CurrentBitIndex == uVar19) &&
          (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)this_00)) &&
         (pTVar7 == this_01)) break;
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((longlong)TStack_d8.CurrentBitIndex * 0x10 +
                                    *(longlong *)&pTVar7->Elements));
      if (pUVar10 == (UObject *)0x0) {
        pFVar13 = GetTypeName<ULevel>(local_80);
        if ((pFVar13->Data).ArrayNum != 0) {
          pwVar23 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar23);
      }
      pUVar11 = Z_Construct_UClass_ULevel_NoRegister();
      iVar9 = (int)pUVar11->_padding_;
      if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar9) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
          &pUVar11->_padding_)) {
        pFVar13 = GetTypeName<ULevel>(&local_a0);
        if ((pFVar13->Data).ArrayNum == 0) {
          pwVar20 = L"";
        }
        else {
          pwVar20 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
        pFVar13 = GetFullNameForCastLogError<UObject>(&local_90,pUVar10);
        if ((pFVar13->Data).ArrayNum != 0) {
          pwVar23 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar23,pwVar20);
      }
      this_02 = &(this->ReplayHelper).LevelsPendingFastForward;
      uVar18 = ((uint)((ulonglong)pUVar10 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar10 >> 4)) *
               -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      local_128 = pUVar10;
      if (*(int *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0x8 !=
          *(int *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0x34) {
        FVar4 = (this->ReplayHelper).LevelsPendingFastForward.Hash.SecondaryData;
        FVar15 = (ForElementType<FSetElementId>)&(this->ReplayHelper).LevelsPendingFastForward.Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar15 = FVar4;
        }
        iVar9 = *(int *)((longlong)FVar15 +
                        (ulonglong)
                        ((this->ReplayHelper).LevelsPendingFastForward.HashSize - 1U &
                        (uVar18 >> 0x10 ^ uVar18)) * 4);
        if (iVar9 != -1) {
          lVar5 = *(longlong *)&this_02->Elements;
          do {
            if (*(UObject **)(lVar5 + (longlong)iVar9 * 0x10) == pUVar10) {
              bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<7792372165998808568>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                                 ,0xdf8,"!ReplayHelper.LevelsPendingFastForward.Contains(Level)");
              if (bVar8) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (2 < (byte)LogDemo._0_1_) {
                UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_b0,pUVar10,None);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
                if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                }
              }
              goto LAB_147aff21a;
            }
            iVar9 = *(int *)(lVar5 + 8 + (longlong)iVar9 * 0x10);
          } while (iVar9 != -1);
        }
      }
      TSet<ULevel_*,DefaultKeyFuncs<ULevel_*,0>,FDefaultSetAllocator>::Emplace<ULevel_*_const_&>
                (this_02,&local_120,(bool *)&local_128);
LAB_147aff21a:
      TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    }
    bVar8 = 1 < (this->ReplayHelper).NewStreamingLevelsThisFrame.HashSize;
    if (!bVar8) {
      TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::UnhashElements(this_01);
    }
    pFVar17 = (FQueuedReplayTask *)0x0;
    puVar3 = &(this->ReplayHelper).NewStreamingLevelsThisFrame.Elements.field_0xc;
    *(undefined4 *)&(this->ReplayHelper).NewStreamingLevelsThisFrame.Elements.field_0x8 = 0;
    if (*(int *)puVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this_01,0,(int *)puVar3);
    }
    *(undefined4 *)&(this->ReplayHelper).NewStreamingLevelsThisFrame.Elements.field_0x30 =
         0xffffffff;
    *(undefined4 *)&(this->ReplayHelper).NewStreamingLevelsThisFrame.Elements.field_0x34 = 0;
    iVar9 = *(int *)&(this->ReplayHelper).NewStreamingLevelsThisFrame.Elements.field_0x2c;
    *(undefined4 *)&(this->ReplayHelper).NewStreamingLevelsThisFrame.Elements.field_0x28 = 0;
    if ((iVar9 < 0) || (0x80 < iVar9)) {
      *(undefined4 *)&(this->ReplayHelper).NewStreamingLevelsThisFrame.Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,0);
    }
    if (bVar8) {
      (this->ReplayHelper).NewStreamingLevelsThisFrame.HashSize = 1;
      TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Rehash(this_01);
    }
    if ((((*(int *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0x8 !=
           *(int *)&(this->ReplayHelper).LevelsPendingFastForward.Elements.field_0x34) &&
         (this->LastProcessedPacketTime != 0.0)) &&
        (bVar8 = IsNamedTaskInQueue(this,&ReplayTaskNames::GotoTimeInSecondsTask), !bVar8)) &&
       (bVar8 = IsNamedTaskInQueue(this,&ReplayTaskNames::FastForwardLevelsTask), !bVar8)) {
      pFVar12 = ::operator_new(0x50);
      if (pFVar12 != (FQueuedReplayTask *)0x0) {
        pFVar12->_padding_ = 0;
        pFVar12->_padding_ = 0;
        pFVar12->_padding_ = (longlong)&___7FQueuedReplayTask__6B_;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        (pFVar12->Driver).WeakPtr = (FWeakObjectPtr)0x0;
        local_118 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&(pFVar12->Driver).WeakPtr,(FObjectPtr)&local_118);
        *(undefined4 *)&pFVar12[1]._padding_ = 0;
        pFVar12->_padding_ = (longlong)&___7FFastForwardLevelsTask__6B_;
        *(undefined1 *)&pFVar12[2]._padding_ = 0;
        *(undefined1 *)((longlong)&pFVar12[1]._padding_ + 4) = 0;
        pFVar17 = pFVar12;
      }
      AddReplayTask(this,pFVar17);
    }
  }
  return;
}

// ProcessAllPlaybackPackets @ 147aff4b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::ProcessAllPlaybackPackets(UDemoNetDriver *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_> *pTVar3;
  TMap<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *this_00;
  int iVar4;
  FPlaybackPacket *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined4 uStack_1c;
  TArrayView<FPlaybackPacket,int> local_18;
  
  pTVar3 = &this->PlaybackPackets;
  pFVar5 = (FPlaybackPacket *)(pTVar3->AllocatorInstance).Data;
  iVar4 = (this->PlaybackPackets).ArrayNum;
  if ((iVar4 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar4;
  local_18.DataPtr = pFVar5;
  ProcessPlaybackPackets(this,&local_18);
  DestructItems<FPlaybackPacket,int>
            ((FPlaybackPacket *)(pTVar3->AllocatorInstance).Data,(this->PlaybackPackets).ArrayNum);
  piVar1 = &(this->PlaybackPackets).ArrayMax;
  (this->PlaybackPackets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  this_00 = &(this->ReplayHelper).PlaybackFrames;
  bVar7 = 1 < *(int *)&(this->ReplayHelper).PlaybackFrames.field_0x48;
  if (!bVar7) {
    TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->ReplayHelper).PlaybackFrames.field_0x8);
  puVar2 = &(this->ReplayHelper).PlaybackFrames.field_0xc;
  *(undefined4 *)&(this->ReplayHelper).PlaybackFrames.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->ReplayHelper).PlaybackFrames.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReplayHelper).PlaybackFrames.field_0x34 = 0;
  iVar4 = *(int *)&(this->ReplayHelper).PlaybackFrames.field_0x2c;
  *(undefined4 *)&(this->ReplayHelper).PlaybackFrames.field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ReplayHelper).PlaybackFrames.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ReplayHelper).PlaybackFrames.field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->ReplayHelper).PlaybackFrames.field_0x48 = 1;
    TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// ProcessFastForwardPackets @ 147aff650

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::ProcessFastForwardPackets
          (UDemoNetDriver *this,TArrayView<FPlaybackPacket,int> *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  ForElementType<FSetElementId> FVar1;
  bool bVar2;
  int iVar3;
  FLevelStatus *pFVar4;
  FStaticBasicLogRecord *pFVar5;
  ForElementType<FSetElementId> FVar6;
  FPlaybackPacket *pFVar7;
  FPlaybackPacket *pFVar8;
  UDemoNetDriver *local_18;
  FPlaybackPacket *local_10;
  
  pFVar7 = param_1->DataPtr;
  pFVar8 = pFVar7 + param_1->ArrayNum;
  do {
    if (pFVar7 == pFVar8) {
      return true;
    }
    if (pFVar7->SeenLevelIndex == 0) {
      if (2 < (byte)LogDemo._0_1_) {
        pFVar5 = &::LOG_Static;
LAB_147aff77c:
        UE::Logging::Private::BasicLog<3>(pFVar5,(FLogCategoryBase *)&LogDemo);
      }
    }
    else {
      if (((this->ReplayHelper).DemoCurrentTime < pFVar7->TimeSeconds) &&
         (local_18 = this, local_10 = pFVar7,
         bVar2 = `UDemoNetDriver::ProcessFastForwardPackets'::__l28::<lambda_1>::operator()
                           (&local_18), !bVar2)) {
        return true;
      }
      iVar3 = pFVar7->SeenLevelIndex - 1;
      if ((iVar3 < 0) || ((this->ReplayHelper).SeenLevelStatuses.ArrayNum <= iVar3)) {
        if (2 < (byte)LogDemo._0_1_) {
          pFVar5 = &::LOG_Static;
          goto LAB_147aff77c;
        }
      }
      else {
        pFVar4 = FReplayHelper::GetLevelStatus(&this->ReplayHelper,pFVar7->SeenLevelIndex);
        if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
          FVar1 = (param_2->Hash).SecondaryData;
          FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
          if (FVar1 != (ForElementType<FSetElementId>)0x0) {
            FVar6 = FVar1;
          }
          iVar3 = *(int *)((longlong)FVar6 +
                          (ulonglong)(param_2->HashSize - 1U & pFVar4->LevelIndex) * 4);
          if (iVar3 != -1) {
            do {
              if (*(uint *)(*(longlong *)&param_2->Elements + (longlong)iVar3 * 0xc) ==
                  pFVar4->LevelIndex) {
                bVar2 = ProcessPacket(this,(uchar *)(pFVar7->Data).AllocatorInstance.Data,
                                      (pFVar7->Data).ArrayNum);
                if (!bVar2) {
                  if (2 < (byte)LogDemo._0_1_) {
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
                  }
                  return false;
                }
                break;
              }
              iVar3 = *(int *)(*(longlong *)&param_2->Elements + 4 + (longlong)iVar3 * 0xc);
            } while (iVar3 != -1);
          }
        }
      }
    }
    pFVar7 = pFVar7 + 1;
  } while( true );
}

// ProcessLocalClientPackets @ 147aff7c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::ProcessLocalClientPackets(UDemoNetDriver *this)

{
  return;
}

// ProcessLocalServerPackets @ 147aff7d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::ProcessLocalServerPackets(UDemoNetDriver *this)

{
  return;
}

// ProcessPacket @ 147aff7e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::ProcessPacket(UDemoNetDriver *this,FPlaybackPacket *param_1)

{
  uint uVar1;
  bool bVar2;
  FLevelStatus *pFVar3;
  
  if (((this->ReplayHelper).bHasLevelStreamingFixes != false) &&
     (uVar1 = param_1->SeenLevelIndex, uVar1 != 0)) {
    if (((int)(uVar1 - 1) < 0) ||
       ((this->ReplayHelper).SeenLevelStatuses.ArrayNum <= (int)(uVar1 - 1))) {
      if (2 < (byte)LogDemo._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      }
    }
    else {
      pFVar3 = FReplayHelper::GetLevelStatus(&this->ReplayHelper,uVar1);
      pFVar3->bHasBeenSeen = true;
      if (pFVar3->bIsReady == false) {
        return true;
      }
    }
  }
  bVar2 = ProcessPacket(this,(uchar *)(param_1->Data).AllocatorInstance.Data,
                        (param_1->Data).ArrayNum);
  if (bVar2) {
    return true;
  }
  return false;
}

// ProcessPacket @ 147aff880

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::ProcessPacket(UDemoNetDriver *this,uchar *param_1,int param_2)

{
  longlong *plVar1;
  EConnectionState EVar2;
  UEnum *pUVar3;
  wchar_t *pwVar4;
  UEnum *local_res8;
  undefined1 local_38 [8];
  FWeakObjectPtr local_30;
  UEnum *local_28;
  FString local_20;
  longlong local_10;
  
  PauseChannels(this,false);
  plVar1 = *(longlong **)&this->field_0x100;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x3b0))(plVar1,param_1,param_2);
  }
  if (*(UNetConnection **)&this->field_0x100 != (UNetConnection *)0x0) {
    EVar2 = UNetConnection::GetConnectionState(*(UNetConnection **)&this->field_0x100);
    if (EVar2 != USOCK_Closed) {
      return true;
    }
  }
  if (1 < (byte)LogDemo._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
  }
  pUVar3 = StaticEnum<enum_EReplayResult>();
  local_38 = (undefined1  [8])0x9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  local_30.ObjectIndex = 0;
  local_30.ObjectSerialNumber = 0;
  local_res8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FWeakObjectPtr::operator=(&local_30,(FObjectPtr)&local_res8);
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_10 = 0;
  local_28 = pUVar3;
  pwVar4 = ::LexToString(ConnectionClosed);
  ::FString::operator=(&local_20,pwVar4);
  FReplayHelper::NotifyReplayError(&this->ReplayHelper,(TNetResult<EReplayResult> *)local_38);
  if (local_10 != 0) {
    (**(code **)(local_10 + -0x10))(local_10 + -0x10);
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return false;
}

// ProcessPlaybackPackets @ 147affc20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::ProcessPlaybackPackets
          (UDemoNetDriver *this,TArrayView<FPlaybackPacket,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLevelStatus *pFVar4;
  uint uVar5;
  FPlaybackPacket *pFVar6;
  FPlaybackPacket *pFVar7;
  
  if (0 < param_1->ArrayNum) {
    pFVar6 = param_1->DataPtr;
    pFVar7 = pFVar6 + param_1->ArrayNum;
    for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 1) {
      if (((this->ReplayHelper).bHasLevelStreamingFixes == false) ||
         (uVar3 = pFVar6->SeenLevelIndex, uVar3 == 0)) {
LAB_147affcb3:
        ProcessPacket(this,(uchar *)(pFVar6->Data).AllocatorInstance.Data,(pFVar6->Data).ArrayNum);
      }
      else {
        if (((int)(uVar3 - 1) < 0) ||
           ((this->ReplayHelper).SeenLevelStatuses.ArrayNum <= (int)(uVar3 - 1))) {
          if (2 < (byte)LogDemo._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
          }
          goto LAB_147affcb3;
        }
        pFVar4 = FReplayHelper::GetLevelStatus(&this->ReplayHelper,uVar3);
        pFVar4->bHasBeenSeen = true;
        if (pFVar4->bIsReady != false) goto LAB_147affcb3;
      }
    }
    uVar5 = param_1->ArrayNum - 1;
    uVar3 = 0;
    if ((int)uVar5 < param_1->ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this->LastProcessedPacketTime = param_1->DataPtr[(longlong)param_1->ArrayNum + -1].TimeSeconds;
  }
  return;
}

// ProcessRemoteFunction @ 147affd50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::ProcessRemoteFunction
          (UDemoNetDriver *this,AActor *param_1,UFunction *param_2,void *param_3,
          FOutParmRec *param_4,FFrame *param_5,UObject *param_6)

{
  longlong *plVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  undefined1 uVar6;
  char local_res8 [8];
  FScopedActorRoleSwap local_48;
  FReadAccessScope local_40;
  
  local_res8[0] = '\0';
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x748,&local_40)
  ;
  if ((*(int *)&this->field_0x758 != 0) &&
     (plVar1 = *(longlong **)&this->field_0x750, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2,param_3,param_4,param_5,param_6,local_res8)
    ;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  if (local_res8[0] == '\0') {
    bVar4 = IsRecording(this);
    if (bVar4) {
      if (DemoNetDriverRecordingPrivate::RecordUnicastRPCs == false) {
        bVar5 = (byte)(param_2->FunctionFlags >> 0xe) & 1;
      }
      else {
        bVar5 = (**(code **)(*(longlong *)this + 0x478))(this,param_1,param_2);
      }
      if ((bVar5 != 0) &&
         ((param_1->bOnlyRelevantToOwner == '\0' ||
          (FVar2.ComparisonIndex.Value = *(uint *)&this->field_0x218,
          FVar2.Number = *(uint *)&this->field_0x21c, param_1->NetDriverName == FVar2)))) {
        FScopedActorRoleSwap::FScopedActorRoleSwap(&local_48,param_1);
        pcVar3 = *(code **)(*(longlong *)this + 0x2b0);
        uVar6 = (**(code **)(*(longlong *)this + 0x3f8))(this);
        if (*(int *)&this->field_0x110 < 1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        (*pcVar3)(this,param_1,param_6,**(undefined8 **)&this->field_0x108,param_2,param_3,param_4,
                  param_5,uVar6);
        FScopedActorRoleSwap::~FScopedActorRoleSwap(&local_48);
      }
    }
  }
  return;
}

// ProcessReplayTasks @ 147afff30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::ProcessReplayTasks(UDemoNetDriver *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FQueuedReplayTask *pFVar3;
  FQueuedReplayTask *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  FName *this_00;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TSharedPtr<FQueuedReplayTask,1> *pTVar12;
  undefined1 local_res8 [8];
  FQueuedReplayTask *local_48;
  FSharedReferencer<1> local_40;
  longlong local_38;
  FSharedReferencer<1> FStack_30;
  FString local_28;
  
  pTVar12 = &this->ActiveReplayTask;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if ((pTVar12->Object == (FQueuedReplayTask *)0x0) && (0 < (this->QueuedReplayTasks).ArrayNum)) {
    pFVar2 = (this->QueuedReplayTasks).AllocatorInstance.Data;
    local_40.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar2 + 8);
    local_48 = *(FQueuedReplayTask **)pFVar2;
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar12 != (TSharedPtr<FQueuedReplayTask,1> *)&local_48) {
      pTVar12->Object = local_48;
      local_48 = (FQueuedReplayTask *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ActiveReplayTask).SharedReferenceCount,&local_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
    pTVar10 = (this->ActiveReplayTask).SharedReferenceCount.ReferenceController;
    pFVar3 = pTVar12->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (((this->QueuedReplayTasks).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar2 = (this->QueuedReplayTasks).AllocatorInstance.Data;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar2 + 8));
    iVar9 = (this->QueuedReplayTasks).ArrayNum + -1;
    if (iVar9 != 0) {
      memmove(pFVar2,pFVar2 + 0x10,(longlong)iVar9 << 4);
    }
    piVar1 = &(this->QueuedReplayTasks).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->QueuedReplayTasks).AllocatorInstance,
               (this->QueuedReplayTasks).ArrayNum,&(this->QueuedReplayTasks).ArrayMax);
    if (5 < (byte)LogDemo._0_1_) {
      if (((this->ActiveReplayTask).Object == (FQueuedReplayTask *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar4 = (this->ActiveReplayTask).Object;
      this_00 = (FName *)(**(code **)(pFVar4->_padding_ + 0x18))(pFVar4,local_res8);
      ::FName::ToString(this_00,&local_28);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if ((pFVar3 == (FQueuedReplayTask *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    (**(code **)(pFVar3->_padding_ + 8))(pFVar3);
  }
  pTVar12 = &this->ActiveReplayTask;
  pFVar3 = pTVar12->Object;
  pTVar11 = pTVar10;
  if (pFVar3 != (FQueuedReplayTask *)0x0) {
    pTVar11 = (this->ActiveReplayTask).SharedReferenceCount.ReferenceController;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    cVar8 = (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
    if (cVar8 == '\0') {
      cVar8 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
      bVar6 = cVar8 == '\0';
      goto LAB_147b001ba;
    }
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar12 != (TSharedPtr<FQueuedReplayTask,1> *)&local_38) {
      pTVar12->Object = (FQueuedReplayTask *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ActiveReplayTask).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
  }
  bVar6 = true;
LAB_147b001ba:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return bVar6;
}

// ProcessSeamlessTravel @ 147b00d20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::ProcessSeamlessTravel(UDemoNetDriver *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  UWorld *this_00;
  INetworkReplayStreamer *pIVar2;
  code *pcVar3;
  TArray<TWeakObjectPtr<AController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  int iVar11;
  ulonglong uVar12;
  AActor *pAVar13;
  ForAnyElementType FVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  AActor *local_d8;
  UObject *local_d0;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<AController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<AController,FWeakObjectPtr>_const_,int>
  local_c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FDelegateAllocation local_b0;
  uint local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  UDemoNetDriver *local_88;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  UWorld::GetControllerIterator(*(UWorld **)&this->field_0x1b8,&local_c8);
  for (; (iVar7 = local_c8.Index, pTVar4 = local_c8.Container, -1 < local_c8.Index &&
         (local_c8.Index < (local_c8.Container)->ArrayNum)); local_c8.Index = local_c8.Index + 1) {
    uVar6 = 0;
    if (local_c8.Index < (local_c8.Container)->ArrayNum) {
      uVar6 = (uint)~local_c8.Index >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_d0 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar4->AllocatorInstance).Data + (longlong)iVar7 * 8));
    if (((local_e8.Data <= (FScriptContainerElement *)&local_d0) &&
        ((FScriptContainerElement *)&local_d0 < local_e8.Data + (longlong)local_e0._4_4_ * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = (uint)local_e0;
    if ((uint)local_e0 == local_e0._4_4_) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_e8,(int *)((longlong)&local_e0 + 4));
    }
    local_e0 = CONCAT44(local_e0._4_4_,iVar7 + 1);
    *(UObject **)(local_e8.Data + (longlong)iVar7 * 8) = local_d0;
  }
  if (1 < (this->SpectatorControllers).ArrayNum) {
    CleanUpSplitscreenConnections(this,false);
  }
  uVar12 = (ulonglong)(int)(uint)local_e0;
  local_a0 = (uint)local_e0;
  pFVar18 = local_e8.Data + uVar12 * 8;
  FVar14.Data = local_e8.Data;
  local_90 = pFVar18;
  do {
    local_98 = FVar14.Data;
    if ((uint)local_e0 != (int)uVar12) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<AController_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar14.Data == pFVar18) {
      (this->SpectatorControllers).ArrayNum = 0;
      if ((this->SpectatorControllers).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->SpectatorControllers).AllocatorInstance,0,
                   &(this->SpectatorControllers).ArrayMax);
      }
      this->SpectatorController = (APlayerController *)0x0;
      if ((param_1 < 0) ||
         ((this->ReplayHelper).PlaybackDemoHeader.LevelNamesAndTimes.ArrayNum <= param_1)) {
        this->bIsWaitingForHeaderDownload = '\x01';
        if (((this->ReplayHelper).ReplayStreamer.Object == (INetworkReplayStreamer *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pIVar2 = (this->ReplayHelper).ReplayStreamer.Object;
        local_c8.Index = 0;
        local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_b0.DelegateSize = 0;
        pcVar3 = *(code **)(pIVar2->_padding_ + 0xf0);
        local_c8.Container =
             (TArray<TWeakObjectPtr<AController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
             OnRefreshHeaderCompletePrivate;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_b8,(FWriteAccessScope *)&local_68);
        local_50 = &local_b0;
        puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_b0);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBUFDownloadHeaderResult___ZUFDefaultDelegateUserPolicy__H__6B_
          ;
          *(int *)(puVar9 + 1) = param_1;
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[2] = uVar10;
          *puVar9 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDemoNetDriver____A6AXAEBUFDownloadHeaderResult___ZUFDefaultDelegateUserPolicy__H__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar9[3] = 0;
          local_88 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_88);
          puVar9[4] = local_c8.Container;
          puVar9[5] = CONCAT44(local_c8._12_4_,local_c8.Index);
        }
        if (local_68.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
        }
        (*pcVar3)(pIVar2,&local_b8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_b8,(FWriteAccessScope *)&local_80);
        if ((local_b0.DelegateSize != 0) &&
           (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_b0,0,0,0x10);
          local_b0.DelegateSize = 0;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_b0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
      }
      else {
        this_00 = *(UWorld **)&this->field_0x1b8;
        if (((this->ReplayHelper).PlaybackDemoHeader.LevelNamesAndTimes.ArrayNum <= param_1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UWorld::SeamlessTravel
                  (this_00,(FString *)
                           ((this->ReplayHelper).PlaybackDemoHeader.LevelNamesAndTimes.
                            AllocatorInstance.Data + (longlong)param_1 * 0x18),true);
      }
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      return;
    }
    pAVar13 = *(AActor **)FVar14.Data;
    if (pAVar13 != (AActor *)0x0) {
      AActor::Destroy(pAVar13,true,true);
      pUVar8 = Z_Construct_UClass_APlayerController_NoRegister();
      iVar7 = (int)pUVar8->_padding_;
      if ((*(int *)(pAVar13->_padding_ + 0x38) < iVar7) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar13->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar8->_padding_)) {
        pAVar13 = (AActor *)0x0;
      }
      local_d8 = pAVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar13 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar13);
      }
      pFVar1 = (this->SpectatorControllers).AllocatorInstance.Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 <
           pFVar1 + (longlong)(this->SpectatorControllers).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = (this->SpectatorControllers).ArrayNum;
      if (iVar7 != 0) {
        pFVar18 = (this->SpectatorControllers).AllocatorInstance.Data;
        iVar11 = 0;
        local_res20 = 0;
        lVar17 = 0;
        bVar5 = *(AActor **)pFVar18 != local_d8;
        pAVar13 = local_d8;
        iVar15 = 0;
        do {
          iVar16 = iVar15;
          do {
            lVar17 = lVar17 + 1;
            iVar16 = iVar16 + 1;
            if (iVar7 <= lVar17) break;
            iVar11 = local_res20;
          } while (bVar5 == (*(AActor **)(pFVar18 + lVar17 * 8) != pAVar13));
          if (bVar5 != false) {
            if (iVar11 != iVar15) {
              memmove(pFVar18 + (longlong)iVar11 * 8,pFVar18 + (longlong)iVar15 * 8,
                      (longlong)(iVar16 - iVar15) << 3);
              pAVar13 = local_d8;
              iVar11 = local_res20;
            }
            iVar11 = iVar11 + (iVar16 - iVar15);
            local_res20 = iVar11;
          }
          bVar5 = (bool)(bVar5 ^ 1);
          iVar15 = iVar16;
        } while (lVar17 < iVar7);
        (this->SpectatorControllers).ArrayNum = iVar11;
        pFVar18 = local_90;
      }
    }
    uVar12 = (ulonglong)local_a0;
    FVar14.Data = local_98 + 8;
  } while( true );
}

// QueueNetStartupActorForRollbackViaDeletion @ 147b01320

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::QueueNetStartupActorForRollbackViaDeletion(UDemoNetDriver *this,AActor *param_1)

{
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  USceneComponent *pUVar4;
  FObjectReplicator *pFVar5;
  UNetConnection *pUVar6;
  TRepDataBufferBase<1,unsigned_char> TVar7;
  code *pcVar8;
  double dVar9;
  TRepDataBufferBase<0,unsigned_char_const_> this_00;
  bool bVar10;
  EConnectionState EVar11;
  uint uVar12;
  int iVar13;
  UObject *pUVar14;
  TRotator<double> *pTVar15;
  TVector<double> *pTVar16;
  ULevel *this_01;
  UPackage *pUVar17;
  TSharedRef<FObjectReplicator,1> *pTVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar22;
  longlong lVar23;
  FRepState *pFVar24;
  int iVar25;
  FScriptContainerElement *pFVar26;
  undefined8 *puVar27;
  uint uVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  longlong lVar30;
  undefined1 *puVar31;
  uint *puVar32;
  longlong lVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined8 uVar38;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1d8 [8];
  FRepLayout *local_1d0;
  TBitArray<FDefaultBitArrayAllocator> *local_1c8;
  TKeyInitializer<FString_&&> local_1c0;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_1b8;
  FRepState *local_1b0;
  FSharedReferencer<1> local_1a8;
  TSharedPtr<FRepState,1> local_1a0;
  FString local_190;
  int local_180;
  int local_17c;
  TPairInitializer<FString_&&,TSharedPtr<FRepState,1>_&&> local_178;
  TRepDataBufferBase<0,unsigned_char_const_> local_168;
  FRepLayout *local_160;
  TReferenceControllerBase<1> *local_158;
  FRepState *local_150;
  TReferenceControllerBase<1> *local_148;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  FString *local_e0;
  FRepState **local_d8;
  TSharedRef<FObjectReplicator,1> local_d0;
  TSharedRef<FObjectReplicator,1> local_c0;
  FString local_b0;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  double local_90;
  TRotator<double> local_88;
  TVector<double> local_70 [2];
  undefined4 local_3c;
  
  if ((((this->ReplayHelper).bIsLoadingCheckpoint != false) ||
      ((*(UNetConnection **)&this->field_0x100 != (UNetConnection *)0x0 &&
       (EVar11 = UNetConnection::GetConnectionState(*(UNetConnection **)&this->field_0x100),
       EVar11 != USOCK_Closed)))) && (this->bSkipStartupActorRollback == false)) {
    if ((param_1 == (AActor *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Actor != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                            ,0x14bc,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar10 = AActor::IsNetStartupActor(param_1);
    if (bVar10) {
      if ((bool)param_1->bReplayRewindable) {
        if ((byte)LogDemo._0_1_ < 3) {
          return;
        }
        if (param_1->_padding_ == 0) {
          ::FString::FString(&local_190,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_190,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_1,(FString *)&local_1a0,(UObject *)0x0,None);
        pFVar24 = (FRepState *)L"";
        if ((int)local_1a0.SharedReferenceCount.ReferenceController != 0) {
          pFVar24 = local_1a0.Object;
        }
        iVar13 = (int)local_1a0.SharedReferenceCount.ReferenceController + -1;
        if ((int)local_1a0.SharedReferenceCount.ReferenceController == 0) {
          iVar13 = 0;
        }
        uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)pFVar24);
        iVar13 = TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
                             *)&this->RollbackNetStartupActors,uVar12,(FString *)&local_1a0);
        local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_1a0.Object;
        if (iVar13 == -1) {
          local_178.Value = &local_1a0;
          TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<FString_&&>_>
                    ((TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
                      *)&this->RollbackNetStartupActors,&local_1c0,(bool *)&local_178.Value);
          lVar33 = (longlong)(int)local_1c0.Key * 0xe8 +
                   *(longlong *)&this->RollbackNetStartupActors;
          *(longlong *)(lVar33 + 0x10) = param_1->_padding_;
          pUVar14 = UObject::GetArchetype((UObject *)param_1);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar14);
          }
          *(UObject **)(lVar33 + 0x18) = pUVar14;
          pUVar4 = (param_1->RootComponent).field0_0x0.DebugPtr;
          uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          if (pUVar4 != (USceneComponent *)0x0) {
            local_90 = (pUVar4->ComponentToWorld).Translation.ZW.m128d_f64[0];
            local_a0 = *(undefined4 *)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64;
            uStack_9c = *(undefined4 *)
                         ((longlong)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 4);
            uStack_98 = *(undefined4 *)((pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 1);
            uStack_94 = *(undefined4 *)
                         ((longlong)(pUVar4->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
            uVar34 = local_a0;
            uVar35 = uStack_9c;
            uVar36 = uStack_98;
            uVar37 = uStack_94;
            uVar38 = local_90;
          }
          *(undefined4 *)(lVar33 + 0x20) = uVar34;
          *(undefined4 *)(lVar33 + 0x24) = uVar35;
          *(undefined4 *)(lVar33 + 0x28) = uVar36;
          *(undefined4 *)(lVar33 + 0x2c) = uVar37;
          *(undefined8 *)(lVar33 + 0x30) = uVar38;
          pTVar15 = AActor::GetActorRotation(param_1,&local_88);
          dVar9 = pTVar15->Yaw;
          *(double *)(lVar33 + 0x38) = pTVar15->Pitch;
          *(double *)(lVar33 + 0x40) = dVar9;
          *(double *)(lVar33 + 0x48) = pTVar15->Roll;
          pTVar16 = AActor::GetActorScale3D(param_1,local_70);
          dVar9 = (pTVar16->field0_0x0)._s_0.Y;
          *(double *)(lVar33 + 0x50) = (pTVar16->field0_0x0)._s_0.X;
          *(double *)(lVar33 + 0x58) = dVar9;
          *(double *)(lVar33 + 0x60) = (pTVar16->field0_0x0)._s_0.Z;
          this_01 = AActor::GetLevel(param_1);
          if (this_01 != (ULevel *)0x0) {
            pUVar17 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_01);
            *(longlong *)(lVar33 + 0x68) = pUVar17->_padding_;
          }
          local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_1a0.Object;
          if (GDemoSaveRollbackActorState != 0) {
            pTVar18 = MakeShared<FObjectReplicator,1>(&local_d0);
            pFVar5 = pTVar18->Object;
            local_1b8 = (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
                         *)(pTVar18->SharedReferenceCount).ReferenceController;
            if (local_1b8 !=
                (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *
                )0x0) {
              LOCK();
              ((TReferenceControllerBase<1> *)local_1b8)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)((TReferenceControllerBase<1> *)local_1b8)->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d0.SharedReferenceCount.ReferenceController);
            if ((pFVar5 == (FObjectReplicator *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pUVar6 = *(UNetConnection **)&this->field_0x100;
            pUVar14 = UObject::GetArchetype((UObject *)param_1);
            FObjectReplicator::InitWithObject(pFVar5,pUVar14,pUVar6,false);
            if ((pFVar5 == (FObjectReplicator *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((pFVar5->RepLayout).Object != (FRepLayout *)0x0) {
              if ((pFVar5 == (FObjectReplicator *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar24 = (pFVar5->RepState).Ptr;
              if (pFVar24 != (FRepState *)0x0) {
                TVar7.Data = (uchar *)(((pFVar24->ReceivingRepState).Ptr)->StaticBuffer).Buffer.
                                      AllocatorInstance.Data;
                local_1d0 = TSharedPtr<FRepLayout,1>::operator->(&pFVar5->RepLayout);
                pTVar1 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(lVar33 + 0xd0);
                pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)(pTVar1->AllocatorInstance).Data;
                iVar13 = *(int *)(lVar33 + 0xd8);
                pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)
                          ((pTVar29->AllocatorInstance).InlineData + (longlong)iVar13 * 8);
                local_1c8 = pTVar19;
                while( true ) {
                  if (*(int *)(lVar33 + 0xd8) != iVar13) {
                    local_res18[0] = 0;
                    `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(local_res18);
                    pTVar19 = local_1c8;
                  }
                  if (pTVar29 == pTVar19) break;
                  pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)
                            ((pTVar29->AllocatorInstance).InlineData + 8);
                }
                bVar10 = FRepLayout::DiffStableProperties<1,0>
                                   (local_1d0,(TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)0x0
                                    ,pTVar1,TVar7,
                                    (TRepDataBufferBase<0,unsigned_char_const_>)param_1);
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  pFVar26 = (pTVar1->AllocatorInstance).Data;
                  iVar13 = 0;
                  if (0 < *(int *)(lVar33 + 0xd8)) {
                    do {
                      if (*(UObject **)pFVar26 != (UObject *)0x0) {
                        UE::GC::MarkAsReachable(*(UObject **)pFVar26);
                      }
                      iVar13 = iVar13 + 1;
                      pFVar26 = pFVar26 + 8;
                    } while (iVar13 < *(int *)(lVar33 + 0xd8));
                  }
                }
                pTVar21 = (TReferenceControllerBase<1> *)0x0;
                if (bVar10) {
                  pFVar24 = (pFVar5->RepState).Ptr;
                  (pFVar5->RepState).Ptr = (FRepState *)0x0;
                  local_1b0 = pFVar24;
                  pTVar20 = ::operator_new(0x18);
                  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
                    pTVar20->SharedReferenceCount = (atomic<int>)0x1;
                    pTVar20->_padding_ =
                         (longlong)
                         &
                         ___7__TReferenceControllerWithDeleter_VFRepState__U__DefaultDeleter_VFRepState___SharedPointerInternals___00_SharedPointerInternals__6B_
                    ;
                    pTVar20->WeakReferenceCount = (atomic<int>)0x1;
                    pTVar20[1]._padding_ = (longlong)pFVar24;
                    pTVar21 = pTVar20;
                  }
                  local_1a8.ReferenceController = pTVar21;
                  if ((FRepState **)(lVar33 + 0x70) != &local_1b0) {
                    *(FRepState **)(lVar33 + 0x70) = pFVar24;
                    local_1b0 = (FRepState *)0x0;
                    SharedPointerInternals::FSharedReferencer<1>::operator=
                              ((FSharedReferencer<1> *)(lVar33 + 0x78),&local_1a8);
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_1a8.ReferenceController);
                }
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_1b8);
            pTVar22 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                                (&param_1->OwnedComponents);
            iVar13 = *(int *)&(pTVar22->Elements).field_0x28;
            iStack_138 = 0;
            uStack_134 = 1;
            pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar22->Elements).field_0x10;
            iStack_124 = iStack_138;
            local_120 = iStack_138;
            if (iVar13 != 0) {
              puVar32 = *(uint **)&(pTVar22->Elements).field_0x20;
              if (puVar32 == (uint *)0x0) {
                puVar32 = (uint *)pTVar19;
              }
              uVar12 = *puVar32;
              while (uVar12 == 0) {
                lVar23 = (longlong)iStack_138;
                local_120 = local_120 + 0x20;
                iStack_138 = iStack_138 + 1;
                iStack_124 = iVar13;
                if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_138)
                goto LAB_147b0183d;
                uVar12 = puVar32[lVar23 + 1];
              }
              uStack_134 = -uVar12 & uVar12;
              uVar2 = (ulonglong)uStack_134 * 2 + 1;
              lVar23 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                }
              }
              local_180 = (int)lVar23;
              iStack_124 = local_120 + -1 + local_180;
              if (iVar13 < iStack_124) {
                iStack_124 = iVar13;
              }
            }
LAB_147b0183d:
            uVar12 = *(uint *)&(pTVar22->Elements).field_0x28;
            uStack_11c = local_3c;
            iStack_118 = *(int *)&(pTVar22->Elements).field_0x8 -
                         *(int *)&(pTVar22->Elements).field_0x34;
            uVar28 = uVar12 & 0xffffffe0;
            uStack_128 = 0xffffffff;
            TStack_108._padding_ = CONCAT44(uStack_134,iStack_138);
            TStack_108.CurrentBitIndex = iStack_124;
            TStack_108.UnvisitedBitMask = 0xffffffff;
            iVar25 = (int)uVar12 >> 5;
            TStack_108._28_4_ = local_3c;
            TStack_108.BaseBitIndex = local_120;
            uStack_e8 = CONCAT44(uStack_114,iStack_118);
            local_1d0 = (FRepLayout *)CONCAT44(local_1d0._4_4_,uVar12);
            local_1c8 = pTVar19;
            local_1b8 = pTVar22;
            local_140 = pTVar22;
            local_130 = (undefined1 *)pTVar19;
            local_110 = pTVar22;
            TStack_108.Array = pTVar19;
            if ((((int)uVar12 < 0) || (iVar13 < (int)uVar12)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar3 = *(uint *)&(pTVar22->Elements).field_0x28;
            if (uVar12 != uVar3) {
              puVar31 = *(undefined1 **)&(pTVar22->Elements).field_0x20;
              local_1d0 = (FRepLayout *)CONCAT44(local_1d0._4_4_,uVar3);
              if (puVar31 == (undefined1 *)0x0) {
                puVar31 = (undefined1 *)pTVar19;
              }
              uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar25 * 4);
              while (uVar12 == 0) {
                lVar23 = (longlong)iVar25;
                uVar28 = uVar28 + 0x20;
                iVar25 = iVar25 + 1;
                uVar12 = uVar3;
                if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
                goto LAB_147b01941;
                uVar12 = *(uint *)(puVar31 + lVar23 * 4 + 4);
              }
              uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
              lVar23 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                }
              }
              local_17c = (int)lVar23;
              uVar12 = (uVar28 - 1) + local_17c;
              if ((int)uVar3 < (int)uVar12) {
                uVar12 = uVar3;
              }
              local_1d0 = (FRepLayout *)CONCAT44(local_1d0._4_4_,uVar12);
            }
LAB_147b01941:
            while( true ) {
              pTVar22 = local_110;
              if (*(int *)&(local_110->Elements).field_0x8 -
                  *(int *)&(local_110->Elements).field_0x34 != (int)uStack_e8) {
                local_res20[0] = 0;
                `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
              }
              if (((TStack_108.CurrentBitIndex == uVar12) && (TStack_108.Array == pTVar19)) &&
                 (local_190.Data.AllocatorInstance.Data =
                       (FScriptContainerElement *)local_1a0.Object, pTVar22 == local_1b8)) break;
              pUVar14 = *(UObject **)
                         (*(longlong *)&pTVar22->Elements +
                         (longlong)TStack_108.CurrentBitIndex * 0x10);
              local_168.Data = (uchar *)pUVar14;
              if (pUVar14 != (UObject *)0x0) {
                pTVar18 = MakeShared<FObjectReplicator,1>(&local_c0);
                pFVar5 = pTVar18->Object;
                local_158 = (pTVar18->SharedReferenceCount).ReferenceController;
                if (local_158 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_158->SharedReferenceCount =
                       (atomic<int>)((int)local_158->SharedReferenceCount + 1);
                  UNLOCK();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_c0.SharedReferenceCount.ReferenceController);
                if ((pFVar5 == (FObjectReplicator *)0x0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pUVar6 = *(UNetConnection **)&this->field_0x100;
                pUVar14 = UObject::GetArchetype(pUVar14);
                FObjectReplicator::InitWithObject(pFVar5,pUVar14,pUVar6,false);
                if ((pFVar5 == (FObjectReplicator *)0x0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                if (((pFVar5->RepLayout).Object != (FRepLayout *)0x0) &&
                   (pFVar24 = (pFVar5->RepState).Ptr, pFVar24 != (FRepState *)0x0)) {
                  lVar30 = *(longlong *)(lVar33 + 0xd0);
                  iVar13 = *(int *)(lVar33 + 0xd8);
                  local_160 = (pFVar5->RepLayout).Object;
                  TVar7.Data = (uchar *)(((pFVar24->ReceivingRepState).Ptr)->StaticBuffer).Buffer.
                                        AllocatorInstance.Data;
                  lVar23 = lVar30 + (longlong)iVar13 * 8;
                  while( true ) {
                    if (*(int *)(lVar33 + 0xd8) != iVar13) {
                      local_1d8[0] = 0;
                      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2
                      ::<lambda_1>::operator()(local_1d8);
                    }
                    this_00.Data = local_168.Data;
                    if (lVar30 == lVar23) break;
                    lVar30 = lVar30 + 8;
                  }
                  bVar10 = FRepLayout::DiffStableProperties<1,0>
                                     (local_160,
                                      (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)0x0,
                                      (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)
                                      (lVar33 + 0xd0),TVar7,local_168);
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    puVar27 = *(undefined8 **)(lVar33 + 0xd0);
                    iVar13 = 0;
                    if (0 < *(int *)(lVar33 + 0xd8)) {
                      do {
                        if ((UObject *)*puVar27 != (UObject *)0x0) {
                          UE::GC::MarkAsReachable((UObject *)*puVar27);
                        }
                        iVar13 = iVar13 + 1;
                        puVar27 = puVar27 + 1;
                      } while (iVar13 < *(int *)(lVar33 + 0xd8));
                    }
                  }
                  pTVar19 = local_1c8;
                  if (bVar10) {
                    pFVar24 = (pFVar5->RepState).Ptr;
                    (pFVar5->RepState).Ptr = (FRepState *)0x0;
                    local_150 = pFVar24;
                    local_148 = ::operator_new(0x18);
                    if (local_148 != (TReferenceControllerBase<1> *)0x0) {
                      local_148->SharedReferenceCount = (atomic<int>)0x1;
                      local_148->_padding_ =
                           (longlong)
                           &
                           ___7__TReferenceControllerWithDeleter_VFRepState__U__DefaultDeleter_VFRepState___SharedPointerInternals___00_SharedPointerInternals__6B_
                      ;
                      local_148->WeakReferenceCount = (atomic<int>)0x1;
                      local_148[1]._padding_ = (longlong)pFVar24;
                    }
                    local_e0 = UObjectBaseUtility::GetFullName
                                         ((UObjectBaseUtility *)this_00.Data,&local_b0,
                                          (UObject *)0x0,None);
                    local_d8 = &local_150;
                    TSet<TTuple<FString,TSharedPtr<FRepState,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FRepState,1>,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FRepState,1>_&&>_>
                              ((TSet<TTuple<FString,TSharedPtr<FRepState,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FRepState,1>,0>,FDefaultSetAllocator>
                                *)(lVar33 + 0x80),&local_178,(bool *)&local_e0);
                    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(local_148);
                    pTVar19 = local_1c8;
                  }
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_158);
                uVar12 = (uint)local_1d0;
              }
              TStack_108.UnvisitedBitMask =
                   TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
            }
          }
        }
      }
      if ((FRepState *)local_190.Data.AllocatorInstance.Data != (FRepState *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ReadDemoFrameIntoPlaybackPackets @ 147b02fa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::ReadDemoFrameIntoPlaybackPackets
          (UDemoNetDriver *this,FArchive *param_1,
          TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_> *param_2,bool param_3,float *param_4)

{
  bool bVar1;
  
  bVar1 = FReplayHelper::ReadDemoFrame
                    (&this->ReplayHelper,*(UNetConnection **)&this->field_0x100,param_1,param_2,
                     param_3,this->MaxArchiveReadPos,param_4);
  return bVar1;
}

// RemoveSplitscreenViewer @ 147b0c270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::RemoveSplitscreenViewer
          (UDemoNetDriver *this,APlayerController *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  UNetConnection *this_00;
  FScriptContainerElement *pFVar2;
  TObjectPtr<APlayerController>_u_0 local_res10;
  
  if (4 < (byte)LogDemo._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
  }
  if (param_1 != (APlayerController *)0x0) {
    pFVar2 = (this->SpectatorControllers).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)(this->SpectatorControllers).ArrayNum * 8;
    for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 8) {
      if ((*(APlayerController **)pFVar2 != (APlayerController *)0x0) &&
         (*(APlayerController **)pFVar2 == param_1)) {
        if (param_1 == this->SpectatorController) {
          return false;
        }
        local_res10.DebugPtr = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        TArray<TObjectPtr<APlayerController>,TSizedDefaultAllocator<32>_>::Remove
                  (&this->SpectatorControllers,
                   (TObjectPtr<APlayerController> *)&local_res10.ObjectPtr);
        this_00 = (param_1->NetConnection).field0_0x0.DebugPtr;
        if (!param_2) {
          (this_00->OwningActor).field0_0x0.DebugPtr = (AActor *)0x0;
        }
        UNetConnection::Close(this_00);
        (**(code **)(this_00->_padding_ + 0x348))(this_00);
        (param_1->NetConnection).field0_0x0.DebugPtr = (UNetConnection *)0x0;
        return true;
      }
    }
  }
  return false;
}

// ReplayStreamingReady @ 147b0c370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::ReplayStreamingReady(UDemoNetDriver *this,FStartStreamingResult *param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TConsoleVariableData<int> *pTVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  Type TVar13;
  UEnum *pUVar14;
  wchar_t *pwVar15;
  FGotoTimeInSecondsTask *pFVar16;
  INetworkReplayStreamer *pIVar17;
  FQueuedReplayTask *pFVar18;
  UObject *pUVar19;
  size_t sVar20;
  uint uVar21;
  EReplayHeaderFlags EVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  UEnum *local_res8;
  UEnum *local_res10;
  LARGE_INTEGER local_res18;
  UDemoNetDriver *local_res20;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  undefined1 local_108 [8];
  FWeakObjectPtr local_100;
  UEnum *local_f8;
  FString local_f0;
  longlong local_e0;
  undefined1 local_d8 [8];
  FWeakObjectPtr local_d0;
  UEnum *local_c8;
  FString local_c0;
  longlong local_b0;
  LARGE_INTEGER local_a8;
  FGuid local_a0;
  FString local_90;
  FGuid local_80 [4];
  
  this->bIsWaitingForStream = '\0';
  iVar12 = 0;
  iVar1 = (int)param_1->_padding_;
  bVar7 = 0;
  bVar8 = bVar7;
  if (iVar1 == 0) {
    bVar8 = 4;
  }
  this->field_0xb13 = bVar8 | this->field_0xb13 & 0xfb;
  if (iVar1 == 0) {
    if (param_1->bRecording == false) {
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
      QueryPerformanceCounter(&local_res18);
      dVar5 = __real_4170000000000000;
      dVar4 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
      bVar9 = InitConnectInternal(this,&local_118);
      if (bVar9) {
        if ((int)param_1->_padding_ == 0) {
          bVar7 = 4;
        }
        this->field_0xb13 = bVar7 | this->field_0xb13 & 0xfb;
        pwVar15 = FURL::GetOption(&(this->ReplayHelper).DemoURL,L"SkipToLevelIndex=",(wchar_t *)0x0)
        ;
        if (pwVar15 != (wchar_t *)0x0) {
          uVar11 = _wtoi(pwVar15);
          if (((int)uVar11 < 0) || ((this->ReplayHelper).LevelNamesAndTimes.ArrayNum <= (int)uVar11)
             ) {
            if (2 < (byte)LogDemo._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
            }
          }
          else {
            pFVar16 = ::operator_new(0x50);
            if (pFVar16 == (FGotoTimeInSecondsTask *)0x0) {
              AddReplayTask(this,(FQueuedReplayTask *)0x0);
            }
            else {
              uVar21 = 0;
              if ((int)uVar11 < (this->ReplayHelper).LevelNamesAndTimes.ArrayNum) {
                uVar21 = ~uVar11 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar16 = FGotoTimeInSecondsTask::FGotoTimeInSecondsTask
                                  (pFVar16,this,
                                   (float)*(uint *)((this->ReplayHelper).LevelNamesAndTimes.
                                                    AllocatorInstance.Data +
                                                   (longlong)(int)uVar11 * 0x18 + 0x10) *
                                   __real_3a83126f);
              AddReplayTask(this,(FQueuedReplayTask *)pFVar16);
            }
          }
        }
        pTVar6 = CVarDemoJumpToEndOfLiveReplay.Ref;
        bVar9 = IsInParallelGameThread();
        if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
           (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pTVar6->ShadowedValue[0] != 0) {
          pIVar17 = TSharedPtr<INetworkReplayStreamer,1>::operator->
                              (&(this->ReplayHelper).ReplayStreamer);
          cVar10 = (**(code **)(pIVar17->_padding_ + 0x128))(pIVar17);
          if (cVar10 != '\0') {
            pIVar17 = TSharedPtr<INetworkReplayStreamer,1>::operator->
                                (&(this->ReplayHelper).ReplayStreamer);
            uVar11 = (**(code **)(pIVar17->_padding_ + 0x60))(pIVar17);
            if (15000 < uVar11) {
              dVar3 = FWindowsPlatformTime::Seconds();
              if (__real_4024000000000000 <= dVar3 - dVar4) {
                if (4 < (byte)LogDemo._0_1_) {
                  UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
                }
                pFVar18 = ::operator_new(0x30);
                if (pFVar18 == (FQueuedReplayTask *)0x0) {
                  pFVar18 = (FQueuedReplayTask *)0x0;
                }
                else {
                  pFVar18->_padding_ = 0;
                  pFVar18->_padding_ = 0;
                  pFVar18->_padding_ = (longlong)&___7FQueuedReplayTask__6B_;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)this);
                  }
                  (pFVar18->Driver).WeakPtr = (FWeakObjectPtr)0x0;
                  local_res20 = this;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)this);
                  }
                  FWeakObjectPtr::operator=(&(pFVar18->Driver).WeakPtr,(FObjectPtr)&local_res20);
                  pFVar18->_padding_ = (longlong)&___7FJumpToLiveReplayTask__6B_;
                  bVar9 = FWeakObjectPtr::IsValid(&(pFVar18->Driver).WeakPtr);
                  if (bVar9) {
                    pUVar19 = FWeakObjectPtr::Get(&(pFVar18->Driver).WeakPtr);
                    *(undefined4 *)&pFVar18[1]._padding_ = *(undefined4 *)&pUVar19[0x5a].field_0x1c;
                    QueryPerformanceCounter(&local_a8);
                    pFVar18[1]._padding_ =
                         (longlong)
                         ((double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5)
                    ;
                  }
                }
                AddReplayTask(this,pFVar18);
              }
              else {
                JumpToEndOfLiveReplay(this);
              }
            }
          }
        }
        if (4 < (byte)LogDemo._0_1_) {
          local_148.Data.ArrayNum = 0;
          lVar24 = 0x20;
          local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          EVar22 = ClientRecorded;
          local_148.Data.ArrayMax = 0;
          do {
            if (((this->ReplayHelper).PlaybackDemoHeader.HeaderFlags & EVar22) != None) {
              pwVar15 = L"|";
              if (iVar12 < 2) {
                pwVar15 = L"";
              }
              sVar20 = wcslen(pwVar15);
              ::FString::AppendChars(&local_148,pwVar15,(int)sVar20);
              pwVar15 = ::LexToString(EVar22);
              sVar20 = wcslen(pwVar15);
              ::FString::AppendChars(&local_148,pwVar15,(int)sVar20);
              iVar12 = local_148.Data.ArrayNum;
            }
            EVar22 = EVar22 << 1 | (uint)((int)EVar22 < 0);
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          if (4 < (byte)LogDemo._0_1_) {
            FEngineVersion::ToString
                      (&(this->ReplayHelper).PlaybackDemoHeader.EngineVersion,&local_90,Branch);
            local_a0.A = (this->ReplayHelper).PlaybackDemoHeader.Guid.A;
            local_a0.B = (this->ReplayHelper).PlaybackDemoHeader.Guid.B;
            local_a0.C = (this->ReplayHelper).PlaybackDemoHeader.Guid.C;
            local_a0.D = (this->ReplayHelper).PlaybackDemoHeader.Guid.D;
            local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_138.Data.ArrayNum = 0;
            local_138.Data.ArrayMax = 0;
            FGuid::AppendString(&local_a0,&local_138,Digits);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
            if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.Data.AllocatorInstance.Data);
            }
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
          }
          TVar13 = FReplayHelper::GetPlaybackReplayVersion(&this->ReplayHelper);
          if ((0x11 < (int)TVar13) && (4 < (byte)LogDemo._0_1_)) {
            ::LexToString((this->ReplayHelper).PlaybackDemoHeader.BuildTarget);
            ::LexToString((this->ReplayHelper).PlaybackDemoHeader.BuildConfig);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
          }
          local_80[0].A = (this->ReplayHelper).PlaybackDemoHeader.Guid.A;
          local_80[0].B = (this->ReplayHelper).PlaybackDemoHeader.Guid.B;
          local_80[0].C = (this->ReplayHelper).PlaybackDemoHeader.Guid.C;
          local_80[0].D = (this->ReplayHelper).PlaybackDemoHeader.Guid.D;
          local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.Data.ArrayNum = 0;
          local_128.Data.ArrayMax = 0;
          FGuid::AppendString(local_80,&local_128,Digits);
          FVar23.Data = (FScriptContainerElement *)L"";
          if (local_128.Data.ArrayNum != 0) {
            FVar23.Data = local_128.Data.AllocatorInstance.Data;
          }
          FCsvProfiler::SetMetadata(L"ReplayID",(wchar_t *)FVar23.Data);
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
        }
        TMulticastDelegate<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::Broadcast
                  (&FNetworkReplayDelegates::OnReplayStarted,*(UWorld **)&this->field_0x1b8);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_1->bRecording == false) {
    pUVar14 = StaticEnum<enum_EReplayResult>();
    local_d8 = (undefined1  [8])0x1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    local_d0.ObjectIndex = 0;
    local_d0.ObjectSerialNumber = 0;
    local_res10 = pUVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    FWeakObjectPtr::operator=(&local_d0,(FObjectPtr)&local_res10);
    local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.Data.ArrayNum = 0;
    local_c0.Data.ArrayMax = 0;
    local_b0 = 0;
    local_c8 = pUVar14;
    pwVar15 = ::LexToString(ReplayNotFound);
    ::FString::operator=(&local_c0,pwVar15);
    FReplayHelper::NotifyReplayError(&this->ReplayHelper,(TNetResult<EReplayResult> *)local_d8);
    if (local_b0 != 0) {
      (**(code **)(local_b0 + -0x10))(local_b0 + -0x10);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    pUVar14 = StaticEnum<enum_EReplayResult>();
    local_108 = (undefined1  [8])0x8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    local_100.ObjectIndex = 0;
    local_100.ObjectSerialNumber = 0;
    local_res8 = pUVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_res8);
    local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.Data.ArrayNum = 0;
    local_f0.Data.ArrayMax = 0;
    local_e0 = 0;
    local_f8 = pUVar14;
    pwVar15 = ::LexToString(StreamerError);
    ::FString::operator=(&local_f0,pwVar15);
    FReplayHelper::NotifyReplayError(&this->ReplayHelper,(TNetResult<EReplayResult> *)local_108);
    if (local_e0 != 0) {
      (**(code **)(local_e0 + -0x10))(local_e0 + -0x10);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// ReplicatePrioritizedActor @ 147b0cb40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::ReplicatePrioritizedActor
          (UDemoNetDriver *this,FActorPriority *param_1,FRepActorsParams *param_2)

{
  float *pfVar1;
  double dVar2;
  FActorDestructionInfo *pFVar3;
  UDemoNetConnection *pUVar4;
  AActor *this_00;
  FDemoBudgetLogHelper *pFVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  LARGE_INTEGER this_01;
  bool bVar8;
  bool bVar9;
  FNameEntryId FVar10;
  uint uVar11;
  undefined4 extraout_var;
  TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *pTVar12;
  UActorChannel *pUVar13;
  FString *pFVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  FNetworkObjectInfo *local_res20;
  FName local_d8;
  FString local_d0;
  FString local_c0 [8];
  
  pFVar3 = param_1->DestructionInfo;
  local_res20 = param_1->ActorInfo;
  QueryPerformanceCounter(&local_res10);
  bVar9 = param_2->bDoCheckDormancy;
  pUVar13 = (UActorChannel *)0x0;
  local_res18.s.LowPart._0_1_ = param_2->bDoFindActorChannel;
  dVar16 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  if ((pFVar3 == (FActorDestructionInfo *)0x0) || (local_res20 != (FNetworkObjectInfo *)0x0)) {
    local_res10.QuadPart = (ulonglong)(uint7)local_res10.QuadPart._1_7_ << 8;
    if ((local_res20 == (FNetworkObjectInfo *)0x0) || (pFVar3 != (FActorDestructionInfo *)0x0)) {
      if (2 < (byte)LogDemo._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      }
    }
    else {
      bVar8 = FWeakObjectPtr::IsValid(&(local_res20->WeakActor).WeakPtr);
      if (!bVar8) {
        local_d8 = (FName)&local_res20;
        bVar8 = `UDemoNetDriver::ReplicatePrioritizedActor'::__l34::<lambda_1>::operator()
                          (&local_d8);
        if (!bVar8) goto LAB_147b0cf9f;
      }
      param_2->NumActorsReplicated = param_2->NumActorsReplicated + 1;
      this_00 = local_res20->Actor;
      if (bVar9 != false) {
        if (local_res18.s.LowPart._0_1_ == '\0') {
          pUVar13 = param_1->Channel;
        }
        else {
          pTVar12 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                            *)&param_2->Connection->_padding_,
                           (TWeakObjectPtr<AActor_const_,FWeakObjectPtr>)
                           (local_res20->WeakActor).WeakPtr);
          if (pTVar12 != (TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *)0x0) {
            pUVar13 = *(UActorChannel **)&pTVar12->field_0x8;
          }
        }
        if (((pUVar13 != (UActorChannel *)0x0) && (1 < (this_00->NetDormancy).Value)) &&
           ((pUVar13->_padding_ & 0x84) == 0)) {
          (**(code **)(pUVar13->_padding_ + 0x328))();
        }
      }
      fVar21 = param_2->MaxRecordHz;
      fVar17 = param_2->MinRecordHz;
      fVar15 = AActor::GetNetUpdateFrequency(this_00);
      if (fVar21 <= fVar15) {
        fVar15 = fVar21;
      }
      pfVar1 = &(this->ReplayHelper).DemoCurrentTime;
      if (fVar15 <= fVar17) {
        fVar15 = fVar17;
      }
      dVar2 = __real_3ff0000000000000 / (double)fVar15;
      fVar21 = (float)dVar2;
      if (local_res20->LastNetReplicateTime == 0.0) {
        local_res20->LastNetReplicateTime = (double)*pfVar1;
        local_res20->OptimalNetUpdateDelta = fVar21;
      }
      fVar19 = (float)((double)*pfVar1 - local_res20->LastNetReplicateTime);
      fVar15 = AActor::GetMinNetUpdateFrequency(this_00);
      fVar17 = __real_40000000;
      if (fVar15 != 0.0) {
        fVar17 = AActor::GetMinNetUpdateFrequency(this_00);
      }
      fVar15 = __real_3f800000;
      fVar20 = __real_3f800000 / fVar17;
      if (__real_3f800000 / fVar17 <= fVar21) {
        fVar20 = fVar21;
      }
      if (__real_40000000 < fVar19) {
        fVar17 = (fVar19 - __real_40000000) * __real_3e4ccccd;
        if (__real_3f800000 <= fVar17) {
          fVar17 = __real_3f800000;
        }
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
        }
        local_res20->OptimalNetUpdateDelta = fVar17 * (fVar20 - fVar21) + fVar21;
      }
      dVar18 = dVar2;
      if (param_2->bUseAdapativeNetFrequency != false) {
        dVar18 = (double)local_res20->OptimalNetUpdateDelta;
      }
      fVar17 = *pfVar1;
      uVar11 = *(int *)&this->field_0x984 * 0xbb38435 + 0x3619636b;
      dVar7 = (double)fVar17 - local_res20->NextUpdateTime;
      *(uint *)&this->field_0x984 = uVar11;
      if (dVar2 <= dVar7) {
        dVar7 = dVar2;
      }
      if (dVar7 <= 0.0) {
        dVar7 = 0.0;
      }
      local_res20->NextUpdateTime =
           ((double)((float)(uVar11 >> 9 | 0x3f800000) - fVar15) - __real_3fe0000000000000) *
           (double)param_2->ServerTickTime + (((double)fVar17 + dVar18) - dVar7);
      bVar9 = FReplayHelper::ReplicateActor
                        (&this->ReplayHelper,this_00,(UNetConnection *)param_2->Connection,false);
      if (bVar9) {
        fVar17 = fVar19 * __real_3f333333;
        if (fVar20 <= fVar19 * __real_3f333333) {
          fVar17 = fVar20;
        }
        if (fVar17 <= fVar21) {
          fVar17 = fVar21;
        }
        local_res20->OptimalNetUpdateDelta = fVar17;
        local_res20->LastNetReplicateTime = (double)(this->ReplayHelper).DemoCurrentTime;
      }
    }
  }
  else {
    dVar2 = param_2->DestructionInfoTimeLimitSeconds;
    local_res10.s.LowPart._0_1_ = 1;
    if ((dVar2 <= 0.0) ||
       (dVar2 < param_2->TotalDestructionInfoRecordTime ||
        dVar2 == param_2->TotalDestructionInfoRecordTime)) {
      param_2->NumDestructionInfosReplicated = param_2->NumDestructionInfosReplicated + 1;
      pUVar4 = param_2->Connection;
      FVar10 = FNameEntryId::FromValidEName((EName)&local_res18);
      local_d8.Number = 0;
      local_d8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar10.Value);
      local_res18 = (LARGE_INTEGER)
                    UNetConnection::CreateChannelByName
                              ((UNetConnection *)pUVar4,&local_d8,OpenedLocally,-1);
      if ((UChannel *)local_res18.QuadPart != (UChannel *)0x0) {
        if (5 < (byte)LogDemo._0_1_) {
          ::FString::PrintfImpl(local_c0,L"%llu");
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
          if (local_c0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0[0].Data.AllocatorInstance.Data);
          }
        }
        this_01 = local_res18;
        UNetDriver::SendDestructionInfo
                  ((UNetDriver *)this,(UNetConnection *)param_2->Connection,pFVar3);
        pUVar4 = param_2->Connection;
        if ((pUVar4->_padding_ == 0) || (*(longlong *)(pUVar4->_padding_ + 0x9b0) == 0)) {
          if ((longlong *)pUVar4->_padding_ != (longlong *)0x0) {
            (**(code **)(*(longlong *)pUVar4->_padding_ + 0x2d8))();
            UChannel::ConditionalCleanUp((UChannel *)this_01,false,pFVar3->Reason);
            goto LAB_147b0cf9f;
          }
          TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
                    ((TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
                     &pUVar4->_padding_,&pFVar3->NetGUID);
        }
        UChannel::ConditionalCleanUp((UChannel *)this_01,false,pFVar3->Reason);
      }
    }
  }
LAB_147b0cf9f:
  if (0.0 < param_2->TimeLimitSeconds) {
    QueryPerformanceCounter(&local_res18);
    dVar2 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    dVar16 = dVar2 - dVar16;
    if (local_res10.s.LowPart._0_1_ != '\0') {
      param_2->TotalDestructionInfoRecordTime = dVar16 + param_2->TotalDestructionInfoRecordTime;
    }
    if ((((local_res20 != (FNetworkObjectInfo *)0x0) && (local_res20->Actor != (AActor *)0x0)) &&
        (param_2->TimeLimitSeconds * ___real_3fee666660000000 < dVar16)) &&
       (5 < (byte)LogDemo._0_1_)) {
      local_res10 = (LARGE_INTEGER)local_res20->Actor->_padding_;
      ::FName::ToString((FName *)&local_res10.s,local_c0);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      if (local_c0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0[0].Data.AllocatorInstance.Data);
      }
    }
    dVar2 = dVar2 - param_2->ReplicationStartTimeSeconds;
    if (param_2->TimeLimitSeconds <= dVar2 && dVar2 != param_2->TimeLimitSeconds) {
      pFVar5 = (this->BudgetLogHelper).Ptr;
      if (4 < (byte)LogDemo._0_1_) {
        if (DemoNetDriverRecordingPrivate::WarningTimeInterval == 0.0) {
          ::FString::PrintfImpl
                    (local_c0,
                     L"Exceeded maximum desired recording time (during Actor Replication).  Max: %.3fms."
                    );
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_FDemoBudgetLogHelper::MarkFrameOverBudget<float>(FDemoBudgetLogHelper::EBudgetCategory,UE::Core::Private::FormatStringSan::TCheckedFormatStringPrivate<wchar_t,float>,float)___ptr64'
                      ::__l9::LOG_Static,(FLogCategoryBase *)&LogDemo);
          if (local_c0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0[0].Data.AllocatorInstance.Data);
            return false;
          }
        }
        else {
          if (pFVar5->bOverBudgetThisFrame == false) {
            pFVar5->NumFramesOverBudget = pFVar5->NumFramesOverBudget + 1;
            pFVar5->bOverBudgetThisFrame = true;
            if (pFVar5->FirstWarningTime == 0.0) {
              dVar16 = FWindowsPlatformTime::Seconds();
              pFVar5->FirstWarningTime = dVar16;
            }
          }
          pFVar5->NumFramesOverBudgetByCategory[1] = pFVar5->NumFramesOverBudgetByCategory[1] + 1;
          if (pFVar5->LogSamplesByBudget[1].Data.ArrayNum < 2) {
            ::FString::PrintfImpl
                      (&local_d0,
                       L"Exceeded maximum desired recording time (during Actor Replication).  Max: %.3fms."
                      );
            pFVar14 = pFVar5->LogSamplesByBudget + 1;
            if (pFVar14 != &local_d0) {
              pFVar6 = (pFVar14->Data).AllocatorInstance.Data;
              if (pFVar6 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar6);
              }
              (pFVar14->Data).AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
              pFVar5->LogSamplesByBudget[1].Data.ArrayNum = local_d0.Data.ArrayNum;
              pFVar5->LogSamplesByBudget[1].Data.ArrayMax = local_d0.Data.ArrayMax;
              local_d0.Data.ArrayNum = 0;
              local_d0.Data.ArrayMax = 0;
              local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data.AllocatorInstance.Data);
            }
          }
        }
      }
      return false;
    }
  }
  return true;
}

// ReplicatePrioritizedActors @ 147b0d1f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::ReplicatePrioritizedActors
          (UDemoNetDriver *this,FDemoActorPriority *param_1,uint param_2,FRepActorsParams *param_3)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (param_2 == 0) {
    bVar1 = true;
  }
  else {
    do {
      bVar1 = ReplicatePrioritizedActor(this,&param_1[uVar3].ActorPriority,param_3);
      if (!bVar1) {
        return bVar1;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < param_2);
  }
  return bVar1;
}

// RequestCheckpoint @ 147b0d270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::RequestCheckpoint(UDemoNetDriver *this)

{
  bool bVar1;
  
  bVar1 = IsRecording(this);
  if (bVar1) {
    FReplayHelper::RequestCheckpoint(&this->ReplayHelper);
    return;
  }
  return;
}

// RequestEventData @ 147b0d2a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::RequestEventData
          (UDemoNetDriver *this,FString *param_1,
          TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  INetworkReplayStreamer *pIVar1;
  
  pIVar1 = (this->ReplayHelper).ReplayStreamer.Object;
  if (pIVar1 != (INetworkReplayStreamer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b0d2af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar1->_padding_ + 0xc0))();
    return;
  }
  return;
}

// RequestEventDataForActiveReplay @ 147b0d2c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::RequestEventDataForActiveReplay
          (UDemoNetDriver *this,FString *param_1,
          TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  INetworkReplayStreamer *pIVar1;
  
  pIVar1 = (this->ReplayHelper).ReplayStreamer.Object;
  if (pIVar1 != (INetworkReplayStreamer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b0d2e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar1->_padding_ + 0xb8))
              (pIVar1,&(this->ReplayHelper).ActiveReplayName,param_1,param_2);
    return;
  }
  return;
}

// RequestEventDataForActiveReplay @ 147b0d2f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::RequestEventDataForActiveReplay
          (UDemoNetDriver *this,FString *param_1,int param_2,
          TDelegate<void___cdecl(FRequestEventDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  INetworkReplayStreamer *pIVar1;
  
  pIVar1 = (this->ReplayHelper).ReplayStreamer.Object;
  if (pIVar1 != (INetworkReplayStreamer *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0xb0))
              (pIVar1,&(this->ReplayHelper).ActiveReplayName,param_1,param_2,param_3);
  }
  return;
}

// RequestEventGroupDataForActiveReplay @ 147b0d330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::RequestEventGroupDataForActiveReplay
          (UDemoNetDriver *this,FString *param_1,
          TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  INetworkReplayStreamer *pIVar1;
  
  pIVar1 = (this->ReplayHelper).ReplayStreamer.Object;
  if (pIVar1 != (INetworkReplayStreamer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b0d352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar1->_padding_ + 0xd0))
              (pIVar1,&(this->ReplayHelper).ActiveReplayName,param_1,param_2);
    return;
  }
  return;
}

// RequestEventGroupDataForActiveReplay @ 147b0d360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::RequestEventGroupDataForActiveReplay
          (UDemoNetDriver *this,FString *param_1,int param_2,
          TDelegate<void___cdecl(FRequestEventGroupDataResult_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  INetworkReplayStreamer *pIVar1;
  
  pIVar1 = (this->ReplayHelper).ReplayStreamer.Object;
  if (pIVar1 != (INetworkReplayStreamer *)0x0) {
    (**(code **)(pIVar1->_padding_ + 200))
              (pIVar1,&(this->ReplayHelper).ActiveReplayName,param_1,param_2,param_3);
  }
  return;
}

// ResetDemoState @ 147b0d670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::ResetDemoState(UDemoNetDriver *this)

{
  int *piVar1;
  undefined1 *puVar2;
  
  this->bIsFastForwardingForCheckpoint = '\0';
  this->bIsWaitingForStream = '\0';
  this->bIsWaitingForHeaderDownload = '\0';
  this->bWasStartStreamingSuccessful = '\0';
  (this->ReplayHelper).DemoCurrentTime = 0.0;
  (this->ReplayHelper).DemoTotalTime = 0.0;
  this->LastProcessedPacketTime = 0.0;
  this->PlaybackPacketIndex = 0;
  this->bIsFastForwarding = false;
  this->bIsFinalizingFastForward = false;
  this->bIsRestoringStartupActors = false;
  DestructItems<FPlaybackPacket,int>
            ((FPlaybackPacket *)(this->PlaybackPackets).AllocatorInstance.Data,
             (this->PlaybackPackets).ArrayNum);
  piVar1 = &(this->PlaybackPackets).ArrayMax;
  (this->PlaybackPackets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->PlaybackPackets).AllocatorInstance,0,piVar1);
  }
  FReplayHelper::ResetState(&this->ReplayHelper);
  return;
}

// RespawnNecessaryNetStartupActors @ 147b0d990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDemoNetDriver::RespawnNecessaryNetStartupActors
          (UDemoNetDriver *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,
          ULevel *param_2)

{
  undefined1 *puVar1;
  TMap<FString,FRollbackNetStartupActorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>_>
  *pTVar2;
  undefined8 uVar3;
  FName FVar4;
  code *pcVar5;
  AActor *pAVar6;
  FRepState *pFVar7;
  TRepDataBufferBase<1,unsigned_char_const_> TVar8;
  uint *puVar9;
  undefined1 *puVar10;
  UActorComponent *pUVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  UObjectBaseUtility *this_00;
  FScriptContainerElement *pFVar14;
  UDemoNetDriver *this_01;
  void *pvVar15;
  TRepDataBufferBase<0,unsigned_char> TVar16;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar17;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  FName *pFVar22;
  TStatId TVar23;
  UPackage *pUVar24;
  FLevelStatus *pFVar25;
  TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_> *pTVar26;
  ULevel *pUVar27;
  UClass *pUVar28;
  FUObjectItem *pFVar29;
  TQuat<double> *pTVar30;
  longlong lVar31;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar32;
  TEventRef<unsigned_int> TVar33;
  FWriteBuffer *pFVar34;
  TTuple<FString,TSharedPtr<FRepState,1>_> *pTVar35;
  byte bVar36;
  int iVar37;
  ulonglong uVar38;
  longlong *plVar39;
  ForElementType<FSetElementId> FVar40;
  uint uVar41;
  FString *pFVar42;
  FScriptContainerElement *pFVar43;
  uint uVar44;
  undefined8 *puVar45;
  longlong lVar46;
  TBitArray<FDefaultBitArrayAllocator> *pTVar47;
  TReferenceControllerBase<1> *pTVar48;
  wchar_t *pwVar49;
  int iVar50;
  undefined1 *puVar51;
  uint *puVar52;
  FReceivingRepState *pFVar53;
  wchar_t *pwVar54;
  FRollbackNetStartupActorInfo *pFVar55;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_02;
  char cVar56;
  FName FVar57;
  undefined1 auStackY_5a8 [32];
  TRepDataBufferBase<0,unsigned_char> local_548;
  char local_540;
  undefined1 local_53f;
  undefined1 local_53e;
  undefined1 local_53d;
  undefined1 local_53c;
  bool local_53b;
  uint local_538;
  FLLMScope local_534;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_530;
  undefined8 uStack_528;
  TBitArray<FDefaultBitArrayAllocator> *local_520;
  uint uStack_518;
  int iStack_514;
  int local_510;
  undefined4 uStack_50c;
  int iStack_508;
  undefined4 uStack_504;
  UObject *local_500;
  UDemoNetDriver *local_4f8;
  FWeakObjectPtr local_4f0;
  FReceivingRepState *local_4e8;
  FString local_4e0;
  TSharedPtr<FRepLayout,1> local_4d0;
  FName local_4c0;
  byte local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  FRollbackNetStartupActorInfo *local_4a0;
  FName local_498;
  undefined8 local_490;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_488;
  longlong *local_468;
  undefined1 auStack_460 [16];
  uint uStack_450;
  uint uStack_44c;
  longlong local_448;
  TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
  *pTStack_440;
  TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
  *local_438;
  undefined2 local_430;
  TSharedPtr<FRepLayout,1> local_428;
  FString local_418;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_408;
  UActorComponent *local_3e8;
  longlong local_3e0;
  undefined8 local_3d8;
  longlong local_3d0;
  FMemScope local_3c8;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *local_3c0;
  UObject **local_3b8;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  int local_3a4;
  UActorComponent *local_3a0;
  ULevel *local_398;
  FRollbackNetStartupActorInfo *local_390;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_388;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_380;
  undefined8 uStack_360;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_358;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_350;
  undefined8 uStack_330;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_328;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_320;
  undefined8 uStack_300;
  FSourceLocation local_2f8;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FName local_290;
  FName local_288;
  FName local_280;
  FName local_278;
  undefined1 local_270 [32];
  longlong local_250;
  TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
  *pTStack_248;
  FString local_240;
  FString local_230;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  FString local_1f8;
  TQuat<double> local_1e8;
  undefined4 local_1ac;
  undefined4 local_18c;
  undefined1 local_188 [112];
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> local_118;
  undefined4 *local_c8;
  longlong local_c0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  FVar57.ComparisonIndex.Value = 0;
  FVar57.Number = 0;
  local_538 = 0;
  local_4f8 = this;
  local_3c0 = param_1;
  local_398 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_RespawnNecessaryNetStartupActors =
         (FThreadSafeStaticStat<_public:_void___cdecl_UDemoNetDriver::RespawnNecessaryNetStartupActors(TArray<AActor_*,TSizedDefaultAllocator<32>_>_&,ULevel_*)_::_2_::FStat_STAT_RespawnNecessaryNetStartupActors>
          )0x0;
    pFVar22 = ::FName::FName(&local_290,"STAT_RespawnNecessaryNetStartupActors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RespawnNecessaryNetStartupActors,*pFVar22,
               L"STAT_RespawnNecessaryNetStartupActors","STATGROUP_Quick","STATCAT_Advanced",
               L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  TVar23 = FThreadSafeStaticStatInner<`UDemoNetDriver::RespawnNecessaryNetStartupActors'::__l2::FStat_STAT_RespawnNecessaryNetStartupActors,1>
           ::GetStatId(&StatPtr_STAT_RespawnNecessaryNetStartupActors);
  local_2f8.Impl._Line = 0xd1d;
  local_2f8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp";
  local_2f8.Impl._Column = 2;
  local_2f8.Impl._Function =
       "void __cdecl UDemoNetDriver::RespawnNecessaryNetStartupActors(class TArray<class AActor *,class TSizedDefaultAllocator<32> > &,class ULevel *)"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_4c0,*(TStatIdData **)&(TVar23.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_2f8);
  local_53b = this->bIsRestoringStartupActors;
  this->bIsRestoringStartupActors = true;
  local_498 = FVar57;
  if (param_2 != (ULevel *)0x0) {
    pUVar24 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_2);
    local_498 = (FName)pUVar24->_padding_;
  }
  pTVar2 = &this->RollbackNetStartupActors;
  TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_270,
             (TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
              *)pTVar2);
  local_430 = 0;
  stack0xfffffffffffffba8 = local_270._16_16_;
  local_468 = (longlong *)local_270._0_8_;
  auStack_460._0_8_ = local_270._8_8_;
  local_448 = local_250;
  pTStack_440 = pTStack_248;
  uVar38 = local_270._24_8_ >> 0x20;
  local_438 = (TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
               *)pTVar2;
  if (local_270._28_4_ < *(int *)(local_270._16_8_ + 0x18)) {
    this_02 = &(this->ReplayHelper).PlaybackDeletedNetStartupActors;
    do {
      plVar39 = local_468;
      pwVar54 = L"";
      lVar46 = (longlong)(int)uVar38 * 0xe8;
      pFVar42 = (FString *)(*local_468 + lVar46);
      iVar37 = (pFVar42->Data).ArrayNum;
      if (iVar37 == 0) {
        pwVar49 = L"";
        iVar37 = 0;
      }
      else {
        pwVar49 = (wchar_t *)(pFVar42->Data).AllocatorInstance.Data;
        iVar37 = iVar37 + -1;
      }
      uVar21 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar37,pwVar49);
      iVar37 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
               FindIndexByHash<FString>(this_02,uVar21,pFVar42);
      if (iVar37 == -1) {
        pFVar55 = (FRollbackNetStartupActorInfo *)(*plVar39 + 0x10 + lVar46);
        local_4a0 = pFVar55;
        if ((local_398 == (ULevel *)0x0) || (pFVar55->LevelName == local_498)) {
          if ((this->ReplayHelper).bHasLevelStreamingFixes == false) {
LAB_147b0dce6:
            pTVar26 = TSet<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                              *)&(this->ReplayHelper).WeakLevelsByName,pFVar55->LevelName);
            local_4f0.ObjectIndex = 0;
            local_4f0.ObjectSerialNumber = 0;
            if (pTVar26 != (TTuple<FName,TWeakObjectPtr<ULevel,FWeakObjectPtr>_> *)0x0) {
              local_4f0.ObjectIndex = *(int *)&pTVar26->field_0x8;
              local_4f0.ObjectSerialNumber = *(int *)&pTVar26->field_0xc;
            }
            pUVar27 = (ULevel *)FWeakObjectPtr::Get(&local_4f0);
            if ((pUVar27 != (ULevel *)0x0) ||
               (local_390 = pFVar55,
               bVar19 = `UDemoNetDriver::RespawnNecessaryNetStartupActors'::__l20::<lambda_1>::
                        operator()(&local_390), bVar19)) {
              FVar4 = pFVar55->Name;
              pUVar28 = Z_Construct_UClass_AActor_NoRegister();
              local_500 = StaticFindObjectFast
                                    (pUVar28,(UObject *)pUVar27,FVar4,None,RF_NoFlags,Borrowed);
              if (local_500 != (UObject *)0x0) {
                if (((*(uint *)&local_500->field_0x8 >> 0x1e & 1) == 0) &&
                   (pFVar29 = FUObjectArray::IndexToObject
                                        (&GUObjectArray,*(int *)&local_500->field_0xc),
                   ((uint)((ulonglong)(pFVar29->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
                  local_3b8 = &local_500;
                  `UDemoNetDriver::RespawnNecessaryNetStartupActors'::__l25::<lambda_2>::operator()
                            (&local_3b8);
                }
                pcVar5 = *(code **)(*(longlong *)local_500 + 0x170);
                pUVar24 = GetTransientPackage();
                (*pcVar5)(local_500,0,pUVar24,0x10);
              }
              FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_188);
              if ((pFVar55->Archetype).field0_0x0.DebugPtr == (UObject *)0x0) {
                pFVar42 = GetTypeName<AActor>(&local_1f8);
                if ((pFVar42->Data).ArrayNum != 0) {
                  pwVar54 = (wchar_t *)(pFVar42->Data).AllocatorInstance.Data;
                }
                    /* WARNING: Subroutine does not return */
                CastLogError(L"nullptr",pwVar54);
              }
              pUVar28 = Z_Construct_UClass_AActor_NoRegister();
              bVar19 = FObjectPtr::IsA((FObjectPtr *)&pFVar55->Archetype,pUVar28);
              if ((!bVar19) ||
                 (pAVar6 = (AActor *)(pFVar55->Archetype).field0_0x0.DebugPtr,
                 pAVar6 == (AActor *)0x0)) {
                pFVar42 = GetTypeName<AActor>(&local_240);
                if ((pFVar42->Data).ArrayNum == 0) {
                  pwVar49 = L"";
                }
                else {
                  pwVar49 = (wchar_t *)(pFVar42->Data).AllocatorInstance.Data;
                }
                pFVar42 = GetFullNameForCastLogError<UObject>
                                    (&local_230,(pFVar55->Archetype).field0_0x0.DebugPtr);
                if ((pFVar42->Data).ArrayNum != 0) {
                  pwVar54 = (wchar_t *)(pFVar42->Data).AllocatorInstance.Data;
                }
                    /* WARNING: Subroutine does not return */
                CastLogError(pwVar54,pwVar49);
              }
              local_188[0x32] = local_188[0x32] | 6;
              local_188[0x30] = AlwaysSpawn;
              local_188._0_8_ = pFVar55->Name;
              local_188._8_8_ = pAVar6;
              local_188._32_8_ = pUVar27;
              pTVar30 = UE::Math::TRotator<double>::Quaternion(&pFVar55->Rotation,&local_1e8);
              local_218 = pTVar30->X;
              dStack_210 = pTVar30->Y;
              local_208 = pTVar30->Z;
              dStack_200 = pTVar30->W;
              local_b8.Translation.ZW.m128d_f64[0] = (pFVar55->Location).field0_0x0._s_0.Z;
              uVar3 = *(undefined8 *)((longlong)&(pFVar55->Location).field0_0x0 + 8);
              local_b8.Translation.XY.m128d_f64[0]._0_4_ =
                   *(undefined4 *)&(pFVar55->Location).field0_0x0;
              local_b8.Translation.XY.m128d_f64[0]._4_4_ =
                   *(undefined4 *)((longlong)&(pFVar55->Location).field0_0x0 + 4);
              local_b8.Translation.ZW.m128d_f64[1] = 0.0;
              local_b8.Translation.XY.m128d_f64[1]._0_4_ = (undefined4)uVar3;
              local_b8.Translation.XY.m128d_f64[1]._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
              local_b8.Scale3D.ZW.m128d_f64[0] = (pFVar55->Scale3D).field0_0x0._s_0.Z;
              local_b8.Scale3D.XY.m128d_f64[0] = (pFVar55->Scale3D).field0_0x0._s_0.X;
              local_b8.Scale3D.XY.m128d_f64[1] = (pFVar55->Scale3D).field0_0x0._s_0.Y;
              local_b8.Scale3D.ZW.m128d_f64[1] = 0.0;
              local_b8.Rotation.XY.m128d_f64[0] = local_218;
              local_b8.Rotation.XY.m128d_f64[1] = dStack_210;
              local_b8.Rotation.ZW.m128d_f64[0] = local_208;
              local_b8.Rotation.ZW.m128d_f64[1] = dStack_200;
              local_548.Data =
                   (uchar *)UWorld::SpawnActor(*(UWorld **)&this->field_0x1b8,
                                               *(UClass **)
                                                &((pFVar55->Archetype).field0_0x0.DebugPtr)->
                                                 field_0x10,&local_b8,
                                               (FActorSpawnParameters *)local_188);
              if ((AActor *)local_548.Data != (AActor *)0x0) {
                lVar31 = (longlong)(int)uStack_44c;
                lVar46 = *plVar39;
                pFVar42 = UObjectBaseUtility::GetFullName
                                    ((UObjectBaseUtility *)local_548.Data,&local_2c0,(UObject *)0x0,
                                     None);
                iVar37 = *(int *)(lVar31 * 0xe8 + 8 + lVar46);
                iVar50 = (pFVar42->Data).ArrayNum;
                if (iVar50 == iVar37) {
                  if (1 < iVar50) {
                    iVar37 = FGenericPlatformStricmp::Stricmp
                                       ((wchar_t *)(pFVar42->Data).AllocatorInstance.Data,
                                        *(wchar_t **)(lVar31 * 0xe8 + lVar46));
                    bVar19 = iVar37 == 0;
                    goto LAB_147b0df32;
                  }
LAB_147b0df6e:
                  bVar19 = false;
                }
                else {
                  bVar19 = iVar37 + iVar50 == 1;
LAB_147b0df32:
                  if (bVar19) goto LAB_147b0df6e;
                  bVar19 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<7792372165998808416>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                                      ,0xd60,"Actor->GetFullName() == RollbackIt.Key()");
                  if (bVar19) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  bVar19 = true;
                }
                local_538 = FVar57.ComparisonIndex.Value.Value & 0xfffffffe;
                if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
                }
                if ((bVar19) && (4 < (byte)LogDemo._0_1_)) {
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)local_548.Data,&local_2b0,(UObject *)0x0,None);
                  UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
                  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
                  }
                }
                pFVar43 = (pFVar55->ObjReferences).AllocatorInstance.Data;
                bVar19 = true;
                iVar37 = (pFVar55->ObjReferences).ArrayNum;
                local_540 = '\x01';
                pFVar14 = pFVar43 + (longlong)iVar37 * 8;
                while( true ) {
                  if ((pFVar55->ObjReferences).ArrayNum != iVar37) {
                    local_53f = 0;
                    `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(&local_53f);
                  }
                  if (pFVar43 == pFVar14) goto LAB_147b0e0d7;
                  if ((*(longlong *)pFVar43 == 0) ||
                     ((*(uint *)(*(longlong *)pFVar43 + 8) >> 0x1e & 1) != 0)) break;
                  pFVar43 = pFVar43 + 8;
                }
                bVar19 = false;
                local_540 = '\0';
                if (2 < (byte)LogDemo._0_1_) {
                  if (((AActor *)local_548.Data == (AActor *)0x0) ||
                     (*(longlong *)((longlong)local_548.Data + 0x10) == 0)) {
                    ::FString::FString(&local_418,L"None");
                  }
                  else {
                    UObjectBaseUtility::GetFullName
                              ((UObjectBaseUtility *)local_548.Data,&local_418,(UObject *)0x0,None);
                  }
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
                  if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_418.Data.AllocatorInstance.Data);
                  }
                }
LAB_147b0e0d7:
                UNetDriver::GetObjectClassRepLayout
                          ((UNetDriver *)this,&local_4d0,
                           *(UClass **)((longlong)local_548.Data + 0x10));
                TVar16.Data = local_548.Data;
                pFVar7 = (pFVar55->RepState).Object;
                if (pFVar7 == (FRepState *)0x0) {
                  pFVar53 = (FReceivingRepState *)0x0;
                }
                else {
                  pFVar53 = (pFVar7->ReceivingRepState).Ptr;
                }
                local_4e8 = pFVar53;
                if (((local_4d0.Object != (FRepLayout *)0x0) &&
                    (pFVar53 != (FReceivingRepState *)0x0)) && (bVar19)) {
                  TVar8.Data = (uchar *)(pFVar53->StaticBuffer).Buffer.AllocatorInstance.Data;
                  bVar36 = local_548.Data[0x168];
                  if ((local_4d0.Object == (FRepLayout *)0x0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar20)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  FRepLayout::DiffStableProperties<0,1>
                            (local_4d0.Object,&pFVar53->RepNotifies,
                             (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0,TVar16,TVar8);
                  AActor::SetRole((AActor *)local_548.Data,(uint)bVar36);
                }
                if ((((TEnumAsByte<ENetRole> *)((longlong)local_548.Data + 0x60))->Value == '\x03')
                   && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Actor->GetRemoteRole() != ROLE_Authority",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                                           ,0xd81,L""), bVar20)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                (local_548.Data)->bNetStartup = '\x01';
                if (((TEnumAsByte<ENetRole> *)((longlong)local_548.Data + 0x168))->Value == '\x03')
                {
                  AActor::SwapRoles((AActor *)local_548.Data);
                }
                local_118.Elements._44_4_ = 0x80;
                local_118.Elements._0_8_ = 0;
                local_118.Elements._8_8_ = 0;
                local_118.Elements._32_8_ = 0;
                local_118.Elements._40_4_ = 0;
                local_118.Elements._48_4_ = 0xffffffff;
                local_118.Elements._52_4_ = 0;
                local_118.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
                local_118.HashSize = 0;
                if (bVar19) {
                  pTVar32 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                                      ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                                        *)((longlong)local_548.Data + 0x248));
                  local_408._padding_._0_4_ = 0;
                  local_408._padding_._4_4_ = 1;
                  local_408.UnvisitedBitMask = 0xffffffff;
                  pTVar47 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar32->Elements).field_0x10;
                  local_408.CurrentBitIndex = 0;
                  local_408.BaseBitIndex = 0;
                  local_408.Array = pTVar47;
                  if (*(int *)&(pTVar32->Elements).field_0x28 != 0) {
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_408);
                  }
                  uVar21 = *(uint *)&(pTVar32->Elements).field_0x28;
                  uStack_528 = CONCAT44(local_408._padding_._4_4_,(undefined4)local_408._padding_);
                  bVar36 = (byte)uVar21 & 0x1f;
                  iStack_508 = *(int *)&(pTVar32->Elements).field_0x8 -
                               *(int *)&(pTVar32->Elements).field_0x34;
                  iStack_514 = local_408.CurrentBitIndex;
                  uStack_518 = local_408.UnvisitedBitMask;
                  uStack_50c = local_408._28_4_;
                  local_510 = local_408.BaseBitIndex;
                  local_488._padding_._0_4_ = (int)uVar21 >> 5;
                  local_488._padding_._4_4_ = 1 << bVar36;
                  local_488.UnvisitedBitMask = -1 << bVar36;
                  local_520 = local_408.Array;
                  local_488.BaseBitIndex = uVar21 & 0xffffffe0;
                  uStack_360 = CONCAT44(uStack_504,iStack_508);
                  TStack_380.Array = local_408.Array;
                  local_530 = pTVar32;
                  local_488.Array = pTVar47;
                  local_488.CurrentBitIndex = uVar21;
                  local_388 = pTVar32;
                  TStack_380._padding_ = uStack_528;
                  TStack_380._16_8_ = _uStack_518;
                  TStack_380._24_8_ = _local_510;
                  if (((int)uVar21 < 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x7af,L""), bVar20)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  this_01 = local_4f8;
                  if (uVar21 != *(uint *)&(pTVar32->Elements).field_0x28) {
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_488);
                    this_01 = local_4f8;
                    uVar21 = local_488.CurrentBitIndex;
                    pTVar47 = local_488.Array;
                  }
                  while( true ) {
                    pTVar18 = local_388;
                    if (*(int *)&(local_388->Elements).field_0x8 -
                        *(int *)&(local_388->Elements).field_0x34 != (int)uStack_360) {
                      local_53e = 0;
                      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()
                                (&local_53e);
                    }
                    if (((TStack_380.CurrentBitIndex == uVar21) && (TStack_380.Array == pTVar47)) &&
                       (pFVar53 = local_4e8, pTVar18 == pTVar32)) break;
                    local_3e8 = *(UActorComponent **)
                                 (*(longlong *)&pTVar18->Elements +
                                 (longlong)TStack_380.CurrentBitIndex * 0x10);
                    if (local_3e8 != (UActorComponent *)0x0) {
                      RestoreComponentState(this_01,local_3e8,pFVar55);
                      TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
                      ::Emplace<UActorComponent_*_const_&>(&local_118,&local_3a0,(bool *)&local_3e8)
                      ;
                    }
                    TStack_380.UnvisitedBitMask =
                         TStack_380.UnvisitedBitMask & ~TStack_380._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_380);
                  }
                }
                iVar37 = 0;
                AActor::UpdateComponentTransforms((AActor *)local_548.Data);
                AActor::FinishSpawning
                          ((AActor *)local_548.Data,&local_b8,true,
                           (FComponentInstanceDataCache *)0x0,OverrideRootScale);
                cVar56 = '\0';
                if (bVar19) {
                  pTVar32 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                                      ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                                        *)((longlong)local_548.Data + 0x248));
                  iVar50 = *(int *)&(pTVar32->Elements).field_0x28;
                  local_510 = 0;
                  uVar21 = 1;
                  local_520 = (TBitArray<FDefaultBitArrayAllocator> *)
                              &(pTVar32->Elements).field_0x10;
                  iStack_514 = 0;
                  if (iVar50 != 0) {
                    puVar9 = *(uint **)&(pTVar32->Elements).field_0x20;
                    puVar52 = (uint *)local_520;
                    if (puVar9 != (uint *)0x0) {
                      puVar52 = puVar9;
                    }
                    uVar41 = *puVar52;
                    while (uVar41 == 0) {
                      lVar46 = (longlong)iVar37;
                      local_510 = local_510 + 0x20;
                      iVar37 = iVar37 + 1;
                      iStack_514 = iVar50;
                      if ((int)(iVar50 + -1 + (iVar50 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar37)
                      goto LAB_147b0e4a1;
                      uVar41 = puVar52[lVar46 + 1];
                    }
                    uVar21 = ~(uVar41 - 1) & uVar41;
                    uVar38 = (ulonglong)uVar21 * 2 + 1;
                    lVar46 = 0x3f;
                    if (uVar38 != 0) {
                      for (; uVar38 >> lVar46 == 0; lVar46 = lVar46 + -1) {
                      }
                    }
                    local_3b0 = (int)lVar46;
                    iStack_514 = (int)lVar46 + -1 + local_510;
                    if (iVar50 < iStack_514) {
                      iStack_514 = iVar50;
                    }
                  }
LAB_147b0e4a1:
                  uVar41 = *(uint *)&(pTVar32->Elements).field_0x28;
                  puVar1 = &(pTVar32->Elements).field_0x10;
                  iStack_508 = *(int *)&(pTVar32->Elements).field_0x8 -
                               *(int *)&(pTVar32->Elements).field_0x34;
                  uVar44 = uVar41 & 0xffffffe0;
                  uStack_528 = CONCAT44(uVar21,iVar37);
                  uStack_518 = 0xffffffff;
                  uStack_50c = local_1ac;
                  local_358 = pTVar32;
                  TStack_350._padding_ = uStack_528;
                  iVar37 = (int)uVar41 >> 5;
                  TStack_350.Array = local_520;
                  TStack_350.UnvisitedBitMask = 0xffffffff;
                  TStack_350.CurrentBitIndex = iStack_514;
                  TStack_350.BaseBitIndex = local_510;
                  TStack_350._28_4_ = local_1ac;
                  uStack_330 = CONCAT44(uStack_504,iStack_508);
                  local_530 = pTVar32;
                  if (((int)uVar41 < 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x7af,L""), bVar19)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  pFVar55 = local_4a0;
                  uVar21 = *(uint *)&(pTVar32->Elements).field_0x28;
                  if (uVar41 != uVar21) {
                    puVar10 = *(undefined1 **)&(pTVar32->Elements).field_0x20;
                    puVar51 = puVar1;
                    if (puVar10 != (undefined1 *)0x0) {
                      puVar51 = puVar10;
                    }
                    uVar41 = -1 << ((byte)uVar41 & 0x1f) & *(uint *)(puVar51 + (longlong)iVar37 * 4)
                    ;
                    while (uVar41 == 0) {
                      lVar46 = (longlong)iVar37;
                      uVar44 = uVar44 + 0x20;
                      iVar37 = iVar37 + 1;
                      uVar41 = uVar21;
                      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar37)
                      goto LAB_147b0e5c0;
                      uVar41 = *(uint *)(puVar51 + lVar46 * 4 + 4);
                    }
                    uVar38 = (ulonglong)(~(uVar41 - 1) & uVar41) * 2 + 1;
                    lVar46 = 0x3f;
                    if (uVar38 != 0) {
                      for (; uVar38 >> lVar46 == 0; lVar46 = lVar46 + -1) {
                      }
                    }
                    uVar41 = (uVar44 - 1) + (int)lVar46;
                    local_3ac = (int)lVar46;
                    if ((int)uVar21 < (int)uVar41) {
                      uVar41 = uVar21;
                    }
                  }
LAB_147b0e5c0:
                  while( true ) {
                    pTVar18 = local_358;
                    if (*(int *)&(local_358->Elements).field_0x8 -
                        *(int *)&(local_358->Elements).field_0x34 != (int)uStack_330) {
                      local_53d = 0;
                      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()
                                (&local_53d);
                    }
                    if (((TStack_350.CurrentBitIndex == uVar41) &&
                        (TStack_350.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
                       (pFVar53 = local_4e8, cVar56 = local_540, pTVar18 == pTVar32)) break;
                    pUVar11 = *(UActorComponent **)
                               (*(longlong *)&pTVar18->Elements +
                               (longlong)TStack_350.CurrentBitIndex * 0x10);
                    if (pUVar11 != (UActorComponent *)0x0) {
                      uVar21 = ((uint)((ulonglong)pUVar11 >> 0x14) & 0xffff ^
                               (uint)((ulonglong)pUVar11 >> 4)) * -0x7a143595;
                      uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
                      if (local_118.Elements._8_4_ != local_118.Elements._52_4_) {
                        FVar40 = (ForElementType<FSetElementId>)&local_118.Hash;
                        if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                          FVar40 = local_118.Hash.SecondaryData;
                        }
                        for (iVar37 = *(int *)((longlong)FVar40 +
                                              (ulonglong)
                                              (local_118.HashSize - 1U & (uVar21 >> 0x10 ^ uVar21))
                                              * 4); iVar37 != -1;
                            iVar37 = *(int *)(local_118.Elements._0_8_ + 8 + (longlong)iVar37 * 0x10
                                             )) {
                          if (*(UActorComponent **)
                               (local_118.Elements._0_8_ + (longlong)iVar37 * 0x10) == pUVar11)
                          goto LAB_147b0e6a6;
                        }
                      }
                      RestoreComponentState(local_4f8,pUVar11,pFVar55);
                    }
LAB_147b0e6a6:
                    TStack_350.UnvisitedBitMask =
                         TStack_350.UnvisitedBitMask & ~TStack_350._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_350);
                  }
                }
                AActor::UpdateComponentTransforms((AActor *)local_548.Data);
                AActor::MarkComponentsRenderStateDirty((AActor *)local_548.Data);
                pvVar15 = ThreadLocalStoragePointer;
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
                  ::FName::FName(&LLMScope_Name3507,L"UObject/NetworkPostInit");
                  _Init_thread_footer(&::_TSS4);
                }
                FLLMScope::FLLMScope(&local_534,LLMScope_Name3507,false,None,Default,true);
                FMemScope::FMemScope(&local_3c8,&LLMScope_Name3507,true);
                if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
                  TVar33 = (TEventRef<unsigned_int>)&local_490;
                  local_490 = 0;
                }
                else {
                  local_3e0 = *(longlong *)((longlong)local_548.Data + 0x18);
                  TVar33 = FStringTrace::GetNameRef(&local_288);
                }
                uVar3 = *(undefined8 *)TVar33;
                if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
                  local_4b0 = 0;
                  TVar33 = (TEventRef<unsigned_int>)&local_4b0;
                }
                else {
                  local_3d8 = *(undefined8 *)(*(longlong *)((longlong)local_548.Data + 0x10) + 0x18)
                  ;
                  TVar33 = FStringTrace::GetNameRef(&local_280);
                }
                uVar12 = *(undefined8 *)TVar33;
                if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
                  local_4a8 = 0;
                  TVar33 = (TEventRef<unsigned_int>)&local_4a8;
                }
                else {
                  pUVar24 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)local_548.Data);
                  local_3d0 = pUVar24->_padding_;
                  TVar33 = FStringTrace::GetNameRef(&local_278);
                }
                uVar13 = *(undefined8 *)TVar33;
                if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
                  (**(code **)(*(longlong *)local_548.Data + 0x4d8))();
                }
                else {
                  UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>
                            ((TLogScope<0> *)&local_c8);
                  *local_c8 = (int)uVar3;
                  local_c8[1] = (int)uVar12;
                  local_c8[2] = (int)uVar13;
                  *(undefined8 *)(local_c0 + 0x28) = *(undefined8 *)(local_c0 + 0x20);
                  (**(code **)(*(longlong *)local_548.Data + 0x4d8))();
                  lVar46 = *(longlong *)((longlong)pvVar15 + (ulonglong)_tls_index * 8);
                  if (*(char *)(lVar46 + 0x9d48) == '\0') {
                    __dyn_tls_on_demand_init();
                  }
                  pFVar34 = *(FWriteBuffer **)(lVar46 + 0x20);
                  if ((int)pFVar34 - *(int *)&pFVar34->Cursor < 1) {
                    pFVar34 = UE::Trace::Private::Writer_NextBuffer();
                  }
                  *pFVar34->Cursor = '\n';
                  pFVar34->Cursor = pFVar34->Cursor + 1;
                  pFVar34->Committed = pFVar34->Cursor;
                }
                FMemScope::~FMemScope(&local_3c8);
                FLLMScope::~FLLMScope(&local_534);
                if (((local_4d0.Object != (FRepLayout *)0x0) &&
                    (pFVar53 != (FReceivingRepState *)0x0)) && (0 < (pFVar53->RepNotifies).ArrayNum)
                   ) {
                  if ((local_4d0.Object == (FRepLayout *)0x0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar19)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  FRepLayout::CallRepNotifies(local_4d0.Object,pFVar53,(UObject *)local_548.Data);
                  (**(code **)(*(longlong *)local_548.Data + 0x230))();
                }
                if (cVar56 != '\0') {
                  pTVar32 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                                      ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                                        *)((longlong)local_548.Data + 0x248));
                  iVar37 = *(int *)&(pTVar32->Elements).field_0x28;
                  iVar50 = 0;
                  local_510 = 0;
                  uVar21 = 1;
                  local_520 = (TBitArray<FDefaultBitArrayAllocator> *)
                              &(pTVar32->Elements).field_0x10;
                  iStack_514 = 0;
                  if (iVar37 != 0) {
                    puVar9 = *(uint **)&(pTVar32->Elements).field_0x20;
                    puVar52 = (uint *)local_520;
                    if (puVar9 != (uint *)0x0) {
                      puVar52 = puVar9;
                    }
                    uVar41 = *puVar52;
                    while (uVar41 == 0) {
                      lVar46 = (longlong)iVar50;
                      local_510 = local_510 + 0x20;
                      iVar50 = iVar50 + 1;
                      iStack_514 = iVar37;
                      if ((int)(iVar37 + -1 + (iVar37 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar50)
                      goto LAB_147b0ea50;
                      uVar41 = puVar52[lVar46 + 1];
                    }
                    uVar21 = -uVar41 & uVar41;
                    uVar38 = (ulonglong)uVar21 * 2 + 1;
                    lVar46 = 0x3f;
                    if (uVar38 != 0) {
                      for (; uVar38 >> lVar46 == 0; lVar46 = lVar46 + -1) {
                      }
                    }
                    local_3a8 = (int)lVar46;
                    iStack_514 = local_3a8 + -1 + local_510;
                    if (iVar37 < iStack_514) {
                      iStack_514 = iVar37;
                    }
                  }
LAB_147b0ea50:
                  uVar41 = *(uint *)&(pTVar32->Elements).field_0x28;
                  puVar1 = &(pTVar32->Elements).field_0x10;
                  iStack_508 = *(int *)&(pTVar32->Elements).field_0x8 -
                               *(int *)&(pTVar32->Elements).field_0x34;
                  uVar44 = uVar41 & 0xffffffe0;
                  uStack_528 = CONCAT44(uVar21,iVar50);
                  uStack_518 = 0xffffffff;
                  uStack_50c = local_18c;
                  TStack_320._padding_ = uStack_528;
                  iVar37 = (int)uVar41 >> 5;
                  uStack_300 = CONCAT44(uStack_504,iStack_508);
                  TStack_320.UnvisitedBitMask = 0xffffffff;
                  TStack_320.CurrentBitIndex = iStack_514;
                  TStack_320.BaseBitIndex = local_510;
                  TStack_320._28_4_ = local_18c;
                  local_530 = pTVar32;
                  local_328 = pTVar32;
                  TStack_320.Array = local_520;
                  if (((int)uVar41 < 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x7af,L""), bVar19)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  pFVar55 = local_4a0;
                  uVar21 = *(uint *)&(pTVar32->Elements).field_0x28;
                  if (uVar41 != uVar21) {
                    puVar10 = *(undefined1 **)&(pTVar32->Elements).field_0x20;
                    puVar51 = puVar1;
                    if (puVar10 != (undefined1 *)0x0) {
                      puVar51 = puVar10;
                    }
                    uVar41 = -1 << ((byte)uVar41 & 0x1f) & *(uint *)(puVar51 + (longlong)iVar37 * 4)
                    ;
                    while (uVar41 == 0) {
                      lVar46 = (longlong)iVar37;
                      uVar44 = uVar44 + 0x20;
                      iVar37 = iVar37 + 1;
                      uVar41 = uVar21;
                      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar37)
                      goto LAB_147b0eb70;
                      uVar41 = *(uint *)(puVar51 + lVar46 * 4 + 4);
                    }
                    uVar38 = (ulonglong)(-uVar41 & uVar41) * 2 + 1;
                    lVar46 = 0x3f;
                    if (uVar38 != 0) {
                      for (; uVar38 >> lVar46 == 0; lVar46 = lVar46 + -1) {
                      }
                    }
                    local_3a4 = (int)lVar46;
                    uVar41 = (uVar44 - 1) + local_3a4;
                    if ((int)uVar21 < (int)uVar41) {
                      uVar41 = uVar21;
                    }
                  }
LAB_147b0eb70:
                  while( true ) {
                    pTVar18 = local_328;
                    if (*(int *)&(local_328->Elements).field_0x8 -
                        *(int *)&(local_328->Elements).field_0x34 != (int)uStack_300) {
                      local_53c = 0;
                      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()
                                (&local_53c);
                    }
                    if (((TStack_320.CurrentBitIndex == uVar41) &&
                        (TStack_320.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
                       (pTVar18 == pTVar32)) break;
                    this_00 = *(UObjectBaseUtility **)
                               (*(longlong *)&pTVar18->Elements +
                               (longlong)TStack_320.CurrentBitIndex * 0x10);
                    if (this_00 != (UObjectBaseUtility *)0x0) {
                      UNetDriver::GetObjectClassRepLayout
                                ((UNetDriver *)local_4f8,&local_428,*(UClass **)&this_00->field_0x10
                                );
                      if (local_428.Object != (FRepLayout *)0x0) {
                        pFVar42 = UObjectBaseUtility::GetFullName
                                            (this_00,&local_2a0,(UObject *)0x0,None);
                        pTVar35 = TSet<TTuple<FString,TSharedPtr<FRepState,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FRepState,1>,0>,FDefaultSetAllocator>
                                  ::Find((TSet<TTuple<FString,TSharedPtr<FRepState,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FRepState,1>,0>,FDefaultSetAllocator>
                                          *)&pFVar55->SubObjRepState,pFVar42);
                        if (pTVar35 == (TTuple<FString,TSharedPtr<FRepState,1>_> *)0x0) {
                          puVar45 = (undefined8 *)0x0;
                          pTVar48 = (TReferenceControllerBase<1> *)0x0;
                        }
                        else {
                          pTVar48 = *(TReferenceControllerBase<1> **)&pTVar35->field_0x18;
                          puVar45 = *(undefined8 **)&pTVar35->field_0x10;
                          if (pTVar48 != (TReferenceControllerBase<1> *)0x0) {
                            LOCK();
                            pTVar48->SharedReferenceCount =
                                 (atomic<int>)((int)pTVar48->SharedReferenceCount + 1);
                            UNLOCK();
                          }
                        }
                        if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
                        }
                        if (((puVar45 != (undefined8 *)0x0) &&
                            (pFVar53 = (FReceivingRepState *)*puVar45,
                            pFVar53 != (FReceivingRepState *)0x0)) &&
                           (0 < (pFVar53->RepNotifies).ArrayNum)) {
                          if ((local_428.Object == (FRepLayout *)0x0) &&
                             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("IsValid()",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar19)) {
                            pcVar5 = (code *)swi(3);
                            (*pcVar5)();
                            return;
                          }
                          FRepLayout::CallRepNotifies(local_428.Object,pFVar53,(UObject *)this_00);
                          (**(code **)(*(longlong *)this_00 + 0x230))(this_00);
                        }
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(pTVar48);
                      }
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_428.SharedReferenceCount.ReferenceController);
                    }
                    TStack_320.UnvisitedBitMask =
                         TStack_320.UnvisitedBitMask & ~TStack_320._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_320);
                  }
                }
                if ((((TEnumAsByte<ENetRole> *)((longlong)local_548.Data + 0x60))->Value != '\x03')
                   && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Actor->GetRemoteRole() == ROLE_Authority",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                                           ,0xddd,L""), bVar19)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pTVar17 = local_3c0;
                pFVar14 = (local_3c0->AllocatorInstance).Data;
                if (((pFVar14 <= (FScriptContainerElement *)&local_548) &&
                    ((FScriptContainerElement *)&local_548 <
                     pFVar14 + (longlong)local_3c0->ArrayMax * 8)) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar19)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar37 = pTVar17->ArrayNum;
                if (iVar37 == pTVar17->ArrayMax) {
                  iVar37 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&pTVar17->AllocatorInstance,&pTVar17->ArrayMax);
                }
                pTVar17->ArrayNum = iVar37 + 1;
                *(uchar **)((pTVar17->AllocatorInstance).Data + (longlong)iVar37 * 8) =
                     local_548.Data;
                local_118.HashSize = 0;
                if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_118.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_118.Elements);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_4d0.SharedReferenceCount.ReferenceController);
                FVar57.Number = 0;
                FVar57.ComparisonIndex.Value = local_538;
                this = local_4f8;
              }
              TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
              ::RemoveByIndex(pTStack_440,uStack_44c);
              local_430 = CONCAT11(local_430._1_1_,1);
              if (local_188._64_8_ != 0) {
                plVar39 = (longlong *)(local_188 + 0x50);
                if ((longlong *)local_188._104_8_ != (longlong *)0x0) {
                  plVar39 = (longlong *)local_188._104_8_;
                }
                (**(code **)(*plVar39 + 0x10))();
              }
            }
          }
          else {
            pFVar42 = ::FName::ToString(&pFVar55->LevelName,&local_2d0);
            UWorld::RemovePIEPrefix(&local_4e0,pFVar42,(int *)0x0);
            if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
            }
            if (local_4e0.Data.ArrayNum == 0) {
              pwVar49 = L"";
              iVar37 = 0;
            }
            else {
              iVar37 = local_4e0.Data.ArrayNum + -1;
              pwVar49 = (wchar_t *)local_4e0.Data.AllocatorInstance.Data;
            }
            uVar21 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar37,pwVar49);
            iVar37 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FString>
                               ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                                 *)&(this->ReplayHelper).LevelStatusesByName,uVar21,&local_4e0);
            if (iVar37 == -1) {
              if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
              }
            }
            else {
              pFVar25 = FReplayHelper::GetLevelStatus(&this->ReplayHelper,&local_4e0);
              if (pFVar25->bIsReady != false) {
                if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
                }
                goto LAB_147b0dce6;
              }
              if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        this_02 = &(this->ReplayHelper).PlaybackDeletedNetStartupActors;
      }
      uStack_450 = uStack_450 & ~auStack_460._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_460);
      uVar38 = (ulonglong)uStack_44c;
    } while ((int)uStack_44c < *(int *)(auStack_460._8_8_ + 0x18));
    if (((char)local_430 != '\0') && (local_430._1_1_ != '\0')) {
      iVar37 = 1;
      uVar21 = *(int *)&(local_438->Elements).field_0x8 - *(int *)&(local_438->Elements).field_0x34;
      if (3 < uVar21) {
        uVar38 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
        lVar46 = 0x3f;
        if (uVar38 != 0) {
          for (; uVar38 >> lVar46 == 0; lVar46 = lVar46 + -1) {
          }
        }
        iVar37 = 1 << ((byte)lVar46 & 0x1f);
      }
      if (((0 < (int)uVar21) && (local_438->HashSize < iVar37)) || (iVar37 < local_438->HashSize)) {
        local_438->HashSize = iVar37;
        TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_438);
      }
    }
  }
  TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
  ::Compact((TSet<TTuple<FString,FRollbackNetStartupActorInfo>,TDefaultMapHashableKeyFuncs<FString,FRollbackNetStartupActorInfo,0>,FDefaultSetAllocator>
             *)&this->RollbackNetStartupActors);
  this->bIsRestoringStartupActors = local_53b;
  if ((local_4b8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_4b8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_4b8 & 4) != 0) {
    FThreadStats::AddMessage(local_4c0,CycleScopeEnd);
  }
  return;
}

// RestoreComponentState @ 147b0ef90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::RestoreComponentState
          (UDemoNetDriver *this,UActorComponent *param_1,FRollbackNetStartupActorInfo *param_2)

{
  undefined8 *puVar1;
  TRepDataBufferBase<1,unsigned_char_const_> TVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  TTuple<FString,TSharedPtr<FRepState,1>_> *pTVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedPtr<FRepLayout,1> local_28;
  FString local_18;
  
  UNetDriver::GetObjectClassRepLayout((UNetDriver *)this,&local_28,(UClass *)param_1->_padding_);
  if (local_28.Object != (FRepLayout *)0x0) {
    pFVar5 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0,None);
    pTVar6 = TSet<TTuple<FString,TSharedPtr<FRepState,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FRepState,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,TSharedPtr<FRepState,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FRepState,1>,0>,FDefaultSetAllocator>
                     *)&param_2->SubObjRepState,pFVar5);
    if (pTVar6 == (TTuple<FString,TSharedPtr<FRepState,1>_> *)0x0) {
      plVar7 = (longlong *)0x0;
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar8 = *(TReferenceControllerBase<1> **)&pTVar6->field_0x18;
      plVar7 = *(longlong **)&pTVar6->field_0x10;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if ((plVar7 != (longlong *)0x0) && (puVar1 = (undefined8 *)*plVar7, puVar1 != (undefined8 *)0x0)
       ) {
      TVar2.Data = (uchar *)*puVar1;
      if ((local_28.Object == (FRepLayout *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FRepLayout::DiffStableProperties<0,1>
                (local_28.Object,(TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)(puVar1 + 0xe),
                 (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0,
                 (TRepDataBufferBase<0,unsigned_char>)param_1,TVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// RestoreConnectionPostScrub @ 147b0f0a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::RestoreConnectionPostScrub
          (UDemoNetDriver *this,APlayerController *param_1,UNetConnection *param_2)

{
  code *pcVar1;
  bool bVar2;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  if (param_2 == (UNetConnection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NetConnection != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                       ,0x12be,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == (APlayerController *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PC != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                       ,0x12bf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AActor::SetRole((AActor *)param_1,ROLE_AutonomousProxy);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNetConnection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (param_1->NetConnection).field0_0x0.DebugPtr = param_2;
  param_2->LastReceiveTime = *(double *)&this->field_0x320;
  QueryPerformanceCounter(&local_res8);
  param_2->LastReceiveRealtime =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  QueryPerformanceCounter(&local_res10);
  param_2->LastGoodPacketRealtime =
       (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  UNetConnection::SetConnectionState(param_2,USOCK_Open);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  param_2->_padding_ = (longlong)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (param_2->OwningActor).field0_0x0.DebugPtr = (AActor *)param_1;
  return;
}

// SavePropertyState @ 147b0fd50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FDemoSavedRepObjectState,TSizedDefaultAllocator<32>_> * __thiscall
UDemoNetDriver::SavePropertyState
          (UDemoNetDriver *this,
          TArray<FDemoSavedRepObjectState,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ulonglong uVar1;
  uint uVar2;
  FWeakObjectPtr FVar3;
  FWeakObjectPtr FVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  TArray<FDemoSavedRepObjectState,TSizedDefaultAllocator<32>_> *pTVar11;
  TRepDataBufferBase<0,unsigned_char_const_> TVar12;
  FRepStateStaticBuffer *pFVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  FWeakObjectPtr *pFVar17;
  int iVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  int iVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  undefined4 uStack_11c;
  FWeakObjectPtr local_118;
  int local_110;
  int local_10c;
  longlong *local_108;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  longlong *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  FRepStateStaticBuffer local_a0;
  undefined4 local_64;
  undefined4 local_44;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar7 = IsRecording(this);
  if (!bVar7) {
    return __return_storage_ptr__;
  }
  if ((*(int *)&this->field_0x110 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TArray<FDemoSavedRepObjectState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar11;
  }
  iVar18 = 0;
  iVar20 = 0;
  uVar8 = 1;
  lVar14 = **(longlong **)&this->field_0x108;
  local_f8 = (longlong *)(lVar14 + 0x14d0);
  iVar10 = *(int *)(lVar14 + 0x14f8);
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0x14e0);
  TStack_f0.CurrentBitIndex = 0;
  if (iVar10 != 0) {
    pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x14f0);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 0x14f0) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar21 = TStack_f0.Array;
    }
    uVar16 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar18;
      iVar20 = iVar20 + 0x20;
      iVar18 = iVar18 + 1;
      TStack_f0.CurrentBitIndex = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_147b0fe70;
      uVar16 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar14 * 4 + 4);
    }
    uVar8 = -uVar16 & uVar16;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res20 = (int)lVar14;
    TStack_f0.CurrentBitIndex = iVar20 + -1 + local_res20;
    if (iVar10 < TStack_f0.CurrentBitIndex) {
      TStack_f0.CurrentBitIndex = iVar10;
    }
  }
LAB_147b0fe70:
  TStack_f0._padding_ = CONCAT44(uVar8,iVar18);
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  TStack_f0._28_4_ = local_64;
  TStack_f0.BaseBitIndex = iVar20;
  if (TStack_f0.CurrentBitIndex < iVar10) {
    do {
      lVar14 = *(longlong *)(*local_f8 + 8 + (longlong)TStack_f0.CurrentBitIndex * 0x18);
      if (lVar14 != 0) {
        TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0xb8);
        iVar18 = 0;
        iVar10 = *(int *)(lVar14 + 0xd0);
        local_108 = (longlong *)(lVar14 + 0xa8);
        iVar20 = 0;
        uVar8 = 1;
        iVar9 = 0;
        if (iVar10 != 0) {
          pTVar21 = TStack_c8.Array;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 200) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 200);
          }
          uVar16 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
          while (uVar16 == 0) {
            lVar15 = (longlong)iVar18;
            iVar20 = iVar20 + 0x20;
            iVar18 = iVar18 + 1;
            iVar9 = iVar10;
            if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18)
            goto LAB_147b0ff7f;
            uVar16 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar15 * 4 + 4);
          }
          uVar8 = -uVar16 & uVar16;
          uVar1 = (ulonglong)uVar8 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_110 = (int)lVar15;
          iVar9 = iVar20 + -1 + local_110;
          if (iVar10 < iVar9) {
            iVar9 = iVar10;
          }
        }
LAB_147b0ff7f:
        pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar14 + 0xb8);
        uVar16 = *(uint *)(lVar14 + 0xd0);
        TStack_c8._padding_ = CONCAT44(uVar8,iVar18);
        uVar8 = uVar16 & 0xffffffe0;
        TStack_c8.CurrentBitIndex = iVar9;
        TStack_c8.UnvisitedBitMask = 0xffffffff;
        iVar18 = (int)uVar16 >> 5;
        TStack_c8._28_4_ = local_44;
        TStack_c8.BaseBitIndex = iVar20;
        uStack_a8 = CONCAT44(uStack_11c,*(int *)(lVar14 + 0xb0) - *(int *)(lVar14 + 0xdc));
        local_res18 = uVar16;
        local_100 = pTVar21;
        local_d0 = local_108;
        if ((((int)uVar16 < 0) || (iVar10 < (int)uVar16)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TArray<FDemoSavedRepObjectState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar11;
        }
        uVar2 = *(uint *)(lVar14 + 0xd0);
        if (uVar16 != uVar2) {
          pTVar19 = pTVar21;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 200) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar14 + 200);
          }
          uVar16 = -1 << ((byte)uVar16 & 0x1f) &
                   *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
          while (uVar16 == 0) {
            lVar14 = (longlong)iVar18;
            uVar8 = uVar8 + 0x20;
            iVar18 = iVar18 + 1;
            uVar16 = uVar2;
            local_res18 = uVar2;
            if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
            goto LAB_147b100c0;
            uVar16 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar14 * 4 + 4);
          }
          uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_10c = (int)lVar14;
          uVar16 = local_10c + -1 + uVar8;
          local_res18 = uVar16;
          if ((int)uVar2 < (int)uVar16) {
            uVar16 = uVar2;
            local_res18 = uVar2;
          }
        }
LAB_147b100c0:
        while( true ) {
          plVar6 = local_d0;
          if ((int)local_d0[1] - *(int *)((longlong)local_d0 + 0x34) != (int)uStack_a8) {
            local_res10[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<UObject_*,TSharedRef<FObjectReplicator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (((TStack_c8.CurrentBitIndex == uVar16) && (TStack_c8.Array == pTVar21)) &&
             (plVar6 == local_108)) break;
          lVar14 = (longlong)TStack_c8.CurrentBitIndex * 0x20 + *plVar6;
          local_118 = *(FWeakObjectPtr *)(*(longlong *)(lVar14 + 8) + 0xd8);
          TVar12.Data = (uchar *)FWeakObjectPtr::Get(&local_118);
          if (TVar12.Data != (uchar *)0x0) {
            lVar14 = *(longlong *)(lVar14 + 8);
            if ((*(longlong *)(lVar14 + 0x20) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x408,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              pTVar11 = (TArray<FDemoSavedRepObjectState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
              return pTVar11;
            }
            FVar3 = *(FWeakObjectPtr *)(lVar14 + 0x20);
            FVar4 = *(FWeakObjectPtr *)(lVar14 + 0x28);
            if (FVar4 != (FWeakObjectPtr)0x0) {
              LOCK();
              *(atomic<int> *)((longlong)FVar4 + 8) =
                   (atomic<int>)((int)*(atomic<int> *)((longlong)FVar4 + 8) + 1);
              UNLOCK();
            }
            if ((FVar3 == (FWeakObjectPtr)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x25d,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              pTVar11 = (TArray<FDemoSavedRepObjectState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
              return pTVar11;
            }
            if (FVar4 != (FWeakObjectPtr)0x0) {
              LOCK();
              *(atomic<int> *)((longlong)FVar4 + 8) =
                   (atomic<int>)((int)*(atomic<int> *)((longlong)FVar4 + 8) + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)FVar4);
            pFVar13 = FRepLayout::CreateShadowBuffer((FRepLayout *)FVar3,&local_a0,TVar12);
            iVar10 = __return_storage_ptr__->ArrayNum;
            if (iVar10 == __return_storage_ptr__->ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x838,&__return_storage_ptr__->AllocatorInstance,
                                  &__return_storage_ptr__->ArrayMax);
            }
            pFVar17 = (FWeakObjectPtr *)
                      ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0x38);
            __return_storage_ptr__->ArrayNum = iVar10 + 1;
            *pFVar17 = local_118;
            pFVar17[1] = FVar3;
            pFVar17[2] = FVar4;
            if (FVar4 != (FWeakObjectPtr)0x0) {
              LOCK();
              *(atomic<int> *)((longlong)FVar4 + 8) =
                   (atomic<int>)((int)*(atomic<int> *)((longlong)FVar4 + 8) + 1);
              UNLOCK();
            }
            pFVar17[3].ObjectIndex = 0;
            pFVar17[3].ObjectSerialNumber = 0;
            pFVar17[3] = (FWeakObjectPtr)(pFVar13->Buffer).AllocatorInstance.Data;
            (pFVar13->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            pFVar17[4].ObjectIndex = (pFVar13->Buffer).ArrayNum;
            pFVar17[4].ObjectSerialNumber = (pFVar13->Buffer).ArrayMax;
            (pFVar13->Buffer).ArrayNum = 0;
            (pFVar13->Buffer).ArrayMax = 0;
            pFVar17[5] = (FWeakObjectPtr)(pFVar13->RepLayout).Object;
            FVar3 = (FWeakObjectPtr)(pFVar13->RepLayout).SharedReferenceCount.ReferenceController;
            pFVar17[6] = FVar3;
            if (FVar3 != (FWeakObjectPtr)0x0) {
              LOCK();
              *(atomic<int> *)((longlong)FVar3 + 8) =
                   (atomic<int>)((int)*(atomic<int> *)((longlong)FVar3 + 8) + 1);
              UNLOCK();
            }
            FRepStateStaticBuffer::~FRepStateStaticBuffer(&local_a0);
            FVar3 = pFVar17[3];
            if ((pFVar17[1] == (FWeakObjectPtr)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              pTVar11 = (TArray<FDemoSavedRepObjectState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
              return pTVar11;
            }
            FRepLayout::DiffProperties<1,0>
                      ((FRepLayout *)pFVar17[1],
                       (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)0x0,
                       (TRepDataBufferBase<1,unsigned_char>)FVar3,TVar12,
                       IncludeConditionalProperties|Sync);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)FVar4);
            uVar16 = local_res18;
          }
          TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
          pTVar21 = local_100;
        }
      }
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    } while (TStack_f0.CurrentBitIndex < (TStack_f0.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Serialize @ 147b10f60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::Serialize(UDemoNetDriver *this,FArchive *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  FString local_58;
  FScopeMarker local_48;
  
  ::FString::FString(&local_58,"UDemoNetDriver::Serialize");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker(&local_48,param_1,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
  UNetDriver::Serialize((UNetDriver *)this,param_1);
  ::FString::FString(&local_58,"Super");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((param_1->field_0x2b & 4) != 0) {
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->PlaybackPackets).ArrayNum << 5,
               (longlong)(this->PlaybackPackets).ArrayMax << 5);
    iVar1 = (this->PlaybackPackets).ArrayNum;
    pFVar2 = (this->PlaybackPackets).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((this->PlaybackPackets).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPlaybackPacket,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar2 == pFVar3) break;
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)*(int *)(pFVar2 + 8),(longlong)*(int *)(pFVar2 + 0xc));
      pFVar2 = pFVar2 + 0x20;
    }
    ::FString::FString(&local_58,"PlaybackPackets");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->NonQueuedGUIDsForScrubbing).ArrayNum << 3,
               (longlong)(this->NonQueuedGUIDsForScrubbing).ArrayMax << 3);
    ::FString::FString(&local_58,"NonQueuedGUIDsForScrubbing");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->QueuedReplayTasks).ArrayNum << 4,
               (longlong)(this->QueuedReplayTasks).ArrayMax << 4);
    ::FString::FString(&local_58,"QueuedReplayTasks");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->DemoSessionID).Data.ArrayNum * 2,
               (longlong)(this->DemoSessionID).Data.ArrayMax * 2);
    ::FString::FString(&local_58,"DemoSessionID");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->PrioritizedActors).ArrayNum * 0x28,
               (longlong)(this->PrioritizedActors).ArrayMax * 0x28);
    ::FString::FString(&local_58,"PrioritizedActors");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->LevelIntervals).ArrayNum << 4,
               (longlong)(this->LevelIntervals).ArrayMax << 4);
    ::FString::FString(&local_58,"LevelInternals");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::CountBytes
              (&this->TrackedRewindActorsByGUID,param_1);
    ::FString::FString(&local_58,"TrackedRewindActorsByGUID");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_48);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->QueuedPacketsBeforeTravel).ArrayNum * 0x28,
               (longlong)(this->QueuedPacketsBeforeTravel).ArrayMax * 0x28);
    iVar1 = (this->QueuedPacketsBeforeTravel).ArrayNum;
    pFVar3 = (this->QueuedPacketsBeforeTravel).AllocatorInstance.Data;
    pFVar2 = pFVar3 + (longlong)iVar1 * 0x28;
    while( true ) {
      if ((this->QueuedPacketsBeforeTravel).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FQueuedDemoPacket,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar3 == pFVar2) break;
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)*(int *)(pFVar3 + 8),(longlong)*(int *)(pFVar3 + 0xc));
      pFVar3 = pFVar3 + 0x28;
    }
    ::FString::FString(&local_58,"QueuedPacketsBeforeTravel");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_48,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FReplayHelper::Serialize(&this->ReplayHelper,param_1);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_48);
  return;
}

// Serialize @ 147b11360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::Serialize(UDemoNetDriver *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetAnalyticsProvider @ 147b11900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::SetAnalyticsProvider(UDemoNetDriver *this,TSharedPtr<IAnalyticsProvider,1> *param_1)

{
  TSharedPtr<IAnalyticsProvider,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UNetDriver::SetAnalyticsProvider((UNetDriver *)this,&local_18);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FReplayHelper::SetAnalyticsProvider(&this->ReplayHelper,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetExternalDataForObject @ 147b13230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::SetExternalDataForObject
          (UDemoNetDriver *this,UObject *param_1,uchar *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = IsRecording(this);
  if (bVar2) {
    if (*(int *)&this->field_0x110 < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = FReplayHelper::SetExternalDataForObject
                      (&this->ReplayHelper,(UNetConnection *)**(undefined8 **)&this->field_0x108,
                       param_1,param_2,param_3);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// SetSpectatorController @ 147b13f40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::SetSpectatorController(UDemoNetDriver *this,APlayerController *param_1)

{
  TObjectPtr<APlayerController>_u_0 local_res8 [4];
  
  this->SpectatorController = param_1;
  if (param_1 != (APlayerController *)0x0) {
    local_res8[0].DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<APlayerController>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<APlayerController>_>
              (&this->SpectatorControllers,(TObjectPtr<APlayerController> *)&local_res8[0].ObjectPtr
              );
  }
  return;
}

// SetWorld @ 147b14070

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::SetWorld(UDemoNetDriver *this,UWorld *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDelegateHandle FVar3;
  UDemoNetDriver *local_res8 [2];
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  if (*(UWorld **)&this->field_0x1b8 != (UWorld *)0x0) {
    UWorld::RemoveOnActorDestroyedHandler
              (*(UWorld **)&this->field_0x1b8,
               (FDelegateHandle)(this->DelegateHandleActorPreDestroy).ID);
  }
  UNetDriver::SetWorld((UNetDriver *)this,param_1);
  local_res8[0] = (UDemoNetDriver *)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->ReplayHelper).World.WeakPtr,(FObjectPtr)local_res8);
  if (param_1 != (UWorld *)0x0) {
    local_88 = OnActorPreDestroy;
    uStack_80 = 0;
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDemoNetDriver____A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res8[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)local_res8);
      puVar1[4] = local_88;
      puVar1[5] = CONCAT44(uStack_7c,uStack_80);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    FVar3 = UWorld::AddOnActorDestroyedHandler
                      (param_1,(TDelegate<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> *)
                               (local_res8 + 1));
                    /* WARNING: Load size is inaccurate */
    (this->DelegateHandleActorPreDestroy).ID = *FVar3.ID;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_88);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_78 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                 (FDestructionSentinel *)&local_88);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  }
  return;
}

// ShouldClientDestroyTearOffActors @ 147b14f10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::ShouldClientDestroyTearOffActors(UDemoNetDriver *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = CVarDemoFastForwardDestroyTearOffActors.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
  }
  if (pTVar2->ShadowedValue[0] != 0) {
    return this->bIsFastForwarding;
  }
  return false;
}

// ShouldForwardFunction @ 147b15060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::ShouldForwardFunction
          (UDemoNetDriver *this,AActor *param_1,UFunction *param_2,void *param_3)

{
  return false;
}

// ShouldIgnoreRPCs @ 147b15070

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::ShouldIgnoreRPCs(UDemoNetDriver *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarDemoFastForwardIgnoreRPCs.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 4;
      goto LAB_147b1509f;
    }
  }
  lVar3 = 0;
LAB_147b1509f:
  if ((*(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 0) &&
     (((this->ReplayHelper).bIsLoadingCheckpoint != false || (this->bIsFastForwarding != false)))) {
    return true;
  }
  return false;
}

// ShouldQueueBunchesForActorGUID @ 147b15180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::ShouldQueueBunchesForActorGUID(UDemoNetDriver *this,FNetworkGUID param_1)

{
  FNetworkGUID_u_0 *pFVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  FNetworkGUID_u_0 *pFVar6;
  
  pTVar3 = CVarDemoQueueCheckpointChannels.Ref;
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((pTVar3->ShadowedValue[0] != 0) && (this->bIsFastForwardingForCheckpoint != '\0')) {
    pFVar6 = (FNetworkGUID_u_0 *)(this->NonQueuedGUIDsForScrubbing).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (this->NonQueuedGUIDsForScrubbing).ArrayNum;
    while( true ) {
      if (pFVar6 == pFVar1) {
        return true;
      }
      if ((FNetworkGUID_u_0)pFVar6->ObjectId == param_1.field0_0x0) break;
      pFVar6 = pFVar6 + 1;
    }
  }
  return false;
}

// ShouldReceiveRepNotifiesForObject @ 147b15240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::ShouldReceiveRepNotifiesForObject(UDemoNetDriver *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if ((((this->ReplayHelper).bIsLoadingCheckpoint != false) ||
      (this->bIsFastForwardingForCheckpoint != '\0')) && (param_1 != (UObject *)0x0)) {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      bVar2 = AActor::IsNetStartupActor((AActor *)param_1);
      if (bVar2) {
        return false;
      }
    }
  }
  return true;
}

// ShouldReplicateActor @ 147b152b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::ShouldReplicateActor(UDemoNetDriver *this,AActor *param_1)

{
  FName FVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FName FVar4;
  undefined1 local_res10 [24];
  
  if ((param_1 == (AActor *)0x0) || ((param_1->bReplicates == '\0' && (param_1->bTearOff == 0)))) {
    return false;
  }
  bVar2 = UNetDriver::ShouldReplicateActor((UNetDriver *)this,param_1);
  if ((!bVar2) &&
     (FVar1 = param_1->NetDriverName, FVar3 = FNameEntryId::FromValidEName((EName)local_res10),
     FVar4.Number = 0, FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value),
     FVar1 != FVar4)) {
    return false;
  }
  return true;
}

// ShouldReplicateFunction @ 147b15310

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::ShouldReplicateFunction(UDemoNetDriver *this,AActor *param_1,UFunction *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  ForAnyElementType local_48;
  uint local_40;
  int local_3c;
  FString local_38;
  
  if (((param_2 != (UFunction *)0x0) && ((param_2->FunctionFlags & FUNC_NetMulticast) != FUNC_None))
     && (bVar4 = IsRecording(this), bVar4)) {
    bVar4 = true;
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_38,(UObject *)0x0);
    FVar11.Data = local_38.Data.AllocatorInstance.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    uVar8 = local_38.Data.ArrayNum;
    local_40 = uVar8;
    if (uVar8 == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar8,0,&local_48,uVar8,&local_3c);
      memcpy(local_48.Data,FVar11.Data,(longlong)(int)uVar8 * 2);
      local_38.Data._8_8_ = ZEXT48(local_40);
    }
    pFVar2 = (this->MulticastRecordOptions).AllocatorInstance.Data;
    iVar1 = (this->MulticastRecordOptions).ArrayNum;
    FVar11.Data = local_48.Data;
    for (pFVar9 = pFVar2; pFVar9 != pFVar2 + (longlong)iVar1 * 0x18; pFVar9 = pFVar9 + 0x18) {
      iVar6 = *(int *)(pFVar9 + 8);
      if (iVar6 == (int)local_38.Data._8_8_) {
        if (1 < iVar6) {
          iVar6 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)pFVar9,(wchar_t *)FVar11.Data);
          bVar12 = iVar6 == 0;
          local_38.Data._8_8_ = ZEXT48(local_40);
          FVar11.Data = local_48.Data;
          goto LAB_147b1543d;
        }
LAB_147b154bc:
        lVar7 = ((longlong)pFVar9 - (longlong)pFVar2) / 6 +
                ((longlong)pFVar9 - (longlong)pFVar2 >> 0x3f);
        uVar8 = (int)(lVar7 >> 2) - (int)(lVar7 >> 0x3f);
        if (FVar11.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar11.Data);
        }
        if (uVar8 != 0xffffffff) {
          if ((*(UWorld **)&this->field_0x1b8 == (UWorld *)0x0) ||
             (bVar4 = UWorld::IsRecordingClientReplay(*(UWorld **)&this->field_0x1b8), !bVar4)) {
            uVar10 = 0;
            if ((int)uVar8 < (this->MulticastRecordOptions).ArrayNum) {
              uVar10 = ~uVar8 >> 0x1f;
            }
            if ((uVar10 == 0) &&
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
            bVar4 = (this->MulticastRecordOptions).AllocatorInstance.Data
                    [(longlong)(int)uVar8 * 0x18 + 0x10] == (FScriptContainerElement)0x0;
          }
          else {
            uVar10 = 0;
            if ((int)uVar8 < (this->MulticastRecordOptions).ArrayNum) {
              uVar10 = ~uVar8 >> 0x1f;
            }
            if ((uVar10 == 0) &&
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
            bVar4 = (this->MulticastRecordOptions).AllocatorInstance.Data
                    [(longlong)(int)uVar8 * 0x18 + 0x11] == (FScriptContainerElement)0x0;
          }
        }
        goto LAB_147b1545a;
      }
      bVar12 = iVar6 + (int)local_38.Data._8_8_ == 1;
LAB_147b1543d:
      if (bVar12) goto LAB_147b154bc;
    }
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar11.Data);
    }
LAB_147b1545a:
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      return true;
    }
  }
  bVar4 = UNetDriver::ShouldReplicateFunction((UNetDriver *)this,param_1,param_2);
  if (bVar4) {
    return true;
  }
  return false;
}

// ShouldSkipPlaybackPacket @ 147b155f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::ShouldSkipPlaybackPacket(UDemoNetDriver *this,FPlaybackPacket *param_1)

{
  uint uVar1;
  FLevelStatus *pFVar2;
  
  if (((this->ReplayHelper).bHasLevelStreamingFixes != false) &&
     (uVar1 = param_1->SeenLevelIndex, uVar1 != 0)) {
    if ((-1 < (int)(uVar1 - 1)) &&
       ((int)(uVar1 - 1) < (this->ReplayHelper).SeenLevelStatuses.ArrayNum)) {
      pFVar2 = FReplayHelper::GetLevelStatus(&this->ReplayHelper,uVar1);
      pFVar2->bHasBeenSeen = true;
      return pFVar2->bIsReady == false;
    }
    if (2 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
  }
  return false;
}

// ShouldSkipRepNotifies @ 147b15660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::ShouldSkipRepNotifies(UDemoNetDriver *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarDemoFastForwardSkipRepNotifies.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 4;
      goto LAB_147b1568f;
    }
  }
  lVar3 = 0;
LAB_147b1568f:
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 0) {
    return this->bIsFastForwarding;
  }
  return false;
}

// ShouldTickFlushAsyncEndOfFrame @ 147b156c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDemoNetDriver::ShouldTickFlushAsyncEndOfFrame(UDemoNetDriver *this)

{
  TConsoleVariableData<int> *pTVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  
  if (GEngine == (UEngine *)0x0) {
    return false;
  }
  cVar2 = (**(code **)(GEngine->_padding_ + 0x550))();
  pTVar1 = CVarDemoClientRecordAsyncEndOfFrame.Ref;
  if (cVar2 != '\0') {
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
      lVar4 = 0;
    }
    else {
      lVar4 = 4;
    }
    if (((*(int *)((longlong)pTVar1->ShadowedValue + lVar4) != 0) &&
        (*(UWorld **)&this->field_0x1b8 != (UWorld *)0x0)) &&
       (bVar3 = UWorld::IsRecordingClientReplay(*(UWorld **)&this->field_0x1b8), bVar3)) {
      return true;
    }
    return false;
  }
  return false;
}

// SkipTime @ 147b15a00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::SkipTime(UDemoNetDriver *this,float param_1)

{
  int iVar1;
  FName *pFVar2;
  FQueuedReplayTask *pFVar3;
  FScriptContainerElement *pFVar4;
  FQueuedReplayTask *pFVar5;
  FScriptContainerElement *pFVar6;
  UDemoNetDriver *local_res8;
  undefined1 local_res18 [8];
  
  pFVar5 = (this->ActiveReplayTask).Object;
  if ((pFVar5 == (FQueuedReplayTask *)0x0) ||
     (pFVar2 = (FName *)(**(code **)(pFVar5->_padding_ + 0x18))(pFVar5,&local_res8),
     *pFVar2 != ReplayTaskNames::SkipTimeInSecondsTask)) {
    pFVar4 = (this->QueuedReplayTasks).AllocatorInstance.Data;
    iVar1 = (this->QueuedReplayTasks).ArrayNum;
    pFVar6 = pFVar4 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->QueuedReplayTasks).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedRef<FQueuedReplayTask,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar4 == pFVar6) break;
      pFVar2 = (FName *)(**(code **)(**(longlong **)pFVar4 + 0x18))
                                  (*(longlong **)pFVar4,local_res18);
      if (*pFVar2 == ReplayTaskNames::SkipTimeInSecondsTask) {
        return;
      }
      pFVar4 = pFVar4 + 0x10;
    }
    pFVar3 = ::operator_new(0x28);
    pFVar5 = (FQueuedReplayTask *)0x0;
    if (pFVar3 != (FQueuedReplayTask *)0x0) {
      pFVar3->_padding_ = 0;
      pFVar3->_padding_ = 0;
      pFVar3->_padding_ = (longlong)&___7FQueuedReplayTask__6B_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      (pFVar3->Driver).WeakPtr = (FWeakObjectPtr)0x0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&(pFVar3->Driver).WeakPtr,(FObjectPtr)&local_res8);
      pFVar3->_padding_ = (longlong)&___7FSkipTimeInSecondsTask__6B_;
      *(float *)&pFVar3[1]._padding_ = param_1;
      pFVar5 = pFVar3;
    }
    AddReplayTask(this,pFVar5);
  }
  return;
}

// SkipTimeInternal @ 147b15b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::SkipTimeInternal(UDemoNetDriver *this,float param_1,bool param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (this->bIsFastForwarding != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsFastForwarding",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                       ,0xa58,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bIsFastForwardingForCheckpoint != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsFastForwardingForCheckpoint",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                       ,0xa59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar3 = (this->ReplayHelper).DemoTotalTime - __real_3c23d70a;
  this->bIsFastForwardingForCheckpoint = '\0';
  this->field_0xb13 = this->field_0xb13 | param_3 * '\x02';
  this->SavedSecondsToSkip = param_1;
  fVar4 = param_1 + (this->ReplayHelper).DemoCurrentTime;
  this->bIsFastForwarding = param_2;
  if (fVar4 <= fVar3) {
    fVar3 = fVar4;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  (this->ReplayHelper).DemoCurrentTime = fVar3;
  return;
}

// SpawnDemoRecSpectator @ 147b15c40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::SpawnDemoRecSpectator(UDemoNetDriver *this,UNetConnection *param_1,FURL *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TObjectPtr<APlayerController>,TSizedDefaultAllocator<32>_> *pTVar6;
  APlayerController *local_18 [2];
  
  local_18[0] = FReplayHelper::CreateSpectatorController(&this->ReplayHelper,param_1);
  this->SpectatorController = local_18[0];
  if (local_18[0] != (APlayerController *)0x0) {
    pTVar6 = &this->SpectatorControllers;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
    pFVar2 = (pTVar6->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar2 + (longlong)(this->SpectatorControllers).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->SpectatorControllers).ArrayNum;
    piVar1 = &(this->SpectatorControllers).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar6->AllocatorInstance,piVar1);
    }
    (this->SpectatorControllers).ArrayNum = iVar5 + 1;
    *(APlayerController **)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (APlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
  }
  return;
}

// SpawnSplitscreenViewer @ 147b160c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDemoNetDriver::SpawnSplitscreenViewer(UDemoNetDriver *this,ULocalPlayer *param_1,UWorld *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<APlayerController>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  TObjectPtr<AActor>_u_0 *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  FNameEntryId FVar9;
  int iVar10;
  UNetConnection *pUVar11;
  TObjectPtr<AActor>_u_0 TVar12;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar13;
  undefined4 extraout_var;
  uchar uVar14;
  FStaticBasicLogRecord *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined8 *puVar17;
  undefined1 local_res10 [8];
  TObjectPtr<AActor>_u_0 local_28 [2];
  
  if ((param_1 == (ULocalPlayer *)0x0) || (param_2 == (UWorld *)0x0)) {
    if ((byte)LogDemo._0_1_ < 3) {
      return false;
    }
    pFVar15 = &::LOG_Static;
  }
  else {
    puVar17 = (undefined8 *)&this->field_0x100;
    if ((*(int *)&this->field_0x110 == 0) && (*puVar17 == 0)) {
      if ((byte)LogDemo._0_1_ < 2) {
        return false;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      return false;
    }
    if (0 < *(int *)&this->field_0x110) {
      puVar17 = *(undefined8 **)&this->field_0x108;
    }
    pUVar11 = (UNetConnection *)(**(code **)(*(longlong *)this + 0x3f0))(this,*puVar17);
    TVar12.DebugPtr =
         (AActor *)FReplayHelper::CreateSpectatorController(&this->ReplayHelper,pUVar11);
    if ((APlayerController *)TVar12.DebugPtr != (APlayerController *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (((TObjectPtr<UPlayer> *)&TVar12.DebugPtr[1].AttachmentReplication.RotationOffset.Roll)->
      field0_0x0).DebugPtr = (UPlayer *)param_1;
      pTVar13 = UEngine::GetGamePlayers(GEngine,param_2);
      pFVar3 = (pTVar13->AllocatorInstance).Data;
      pFVar16 = pFVar3;
      do {
        if (pFVar16 == pFVar3 + (longlong)pTVar13->ArrayNum * 8) {
          uVar14 = 0xff;
LAB_147b161c4:
          lVar4 = (TVar12.DebugPtr)->_padding_;
          *(uchar *)((longlong)&TVar12.DebugPtr[1].ReplicatedComponents.AllocatorInstance.Data + 4)
               = uVar14;
          pcVar5 = *(code **)(lVar4 + 0x7a0);
          FVar9 = FNameEntryId::FromValidEName((EName)local_res10);
          (*pcVar5)(TVar12.DebugPtr,*(undefined4 *)CONCAT44(extraout_var,FVar9.Value));
          *(undefined4 *)&param_1->_padding_ = 0;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar12.DebugPtr);
          }
          param_1->_padding_ = (longlong)TVar12;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar12.DebugPtr);
          }
          pUVar11->_padding_ = (longlong)TVar12;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar12.DebugPtr);
          }
          (pUVar11->OwningActor).field0_0x0.DebugPtr = (AActor *)TVar12;
          (**(code **)((TVar12.DebugPtr)->_padding_ + 0xdf0))(TVar12.DebugPtr,param_1);
          pTVar2 = &this->SpectatorControllers;
          local_28[0].DebugPtr = TVar12.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar12.DebugPtr);
          }
          pTVar6 = (TObjectPtr<AActor>_u_0 *)(pTVar2->AllocatorInstance).Data;
          if (((pTVar6 <= local_28) && (local_28 < pTVar6 + (this->SpectatorControllers).ArrayMax))
             && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          iVar10 = (this->SpectatorControllers).ArrayNum;
          piVar1 = &(this->SpectatorControllers).ArrayMax;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->SpectatorControllers).ArrayNum = iVar10 + 1;
          ((TObjectPtr<AActor>_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8))->
          DebugPtr = (AActor *)local_28[0];
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((APlayerController *)local_28[0].DebugPtr != (APlayerController *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_28[0].DebugPtr);
          }
          return true;
        }
        if (*(ULocalPlayer **)pFVar16 == param_1) {
          uVar14 = (uchar)((longlong)pFVar16 - (longlong)pFVar3 >> 3);
          goto LAB_147b161c4;
        }
        pFVar16 = pFVar16 + 8;
      } while( true );
    }
    if ((byte)LogDemo._0_1_ < 3) {
      return false;
    }
    pFVar15 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar15,(FLogCategoryBase *)&LogDemo);
  return false;
}

// StaticRegisterNativesUDemoNetDriver @ 147b172e0

void __cdecl UDemoNetDriver::StaticRegisterNativesUDemoNetDriver(void)

{
  return;
}

// StopDemo @ 147b17360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::StopDemo(UDemoNetDriver *this)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  EConnectionState EVar5;
  UNetConnection *this_00;
  
  bVar4 = IsRecording(this);
  if (((!bVar4) && ((this->ReplayHelper).bIsLoadingCheckpoint == false)) &&
     ((*(UNetConnection **)&this->field_0x100 == (UNetConnection *)0x0 ||
      (EVar5 = UNetConnection::GetConnectionState(*(UNetConnection **)&this->field_0x100),
      EVar5 == USOCK_Closed)))) {
    if (4 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    ClearReplayTasks(this);
    ::FString::Empty(&(this->ReplayHelper).ActiveReplayName);
    ResetDemoState(this);
    return;
  }
  if (4 < (byte)LogDemo._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
  }
  plVar2 = *(longlong **)&this->field_0x100;
  if (plVar2 == (longlong *)0x0) {
    if ((*(int *)&this->field_0x110 < 1) || (**(longlong **)&this->field_0x108 == 0))
    goto LAB_147b174ad;
    if ((*(int *)&this->field_0x110 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (UNetConnection *)**(undefined8 **)&this->field_0x108;
  }
  else {
    (**(code **)(*plVar2 + 0x308))(plVar2,0);
    UNetConnection::SetConnectionState(*(UNetConnection **)&this->field_0x100,USOCK_Closed);
    this_00 = *(UNetConnection **)&this->field_0x100;
  }
  UNetConnection::Close(this_00);
LAB_147b174ad:
  FReplayHelper::StopReplay(&this->ReplayHelper);
  piVar1 = &(this->SpectatorControllers).ArrayMax;
  (this->SpectatorControllers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SpectatorControllers).AllocatorInstance,0,piVar1);
  }
  this->SpectatorController = (APlayerController *)0x0;
  ClearReplayTasks(this);
  ResetDemoState(this);
  bVar4 = IsRecording(this);
  if ((((bVar4) || ((this->ReplayHelper).bIsLoadingCheckpoint != false)) ||
      ((*(UNetConnection **)&this->field_0x100 != (UNetConnection *)0x0 &&
       (EVar5 = UNetConnection::GetConnectionState(*(UNetConnection **)&this->field_0x100),
       EVar5 != USOCK_Closed)))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsRecording() && !IsPlaying()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                         ,0x63e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// TickDemoPlayback @ 147b182e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::TickDemoPlayback(UDemoNetDriver *this,float param_1)

{
  float *pfVar1;
  TMap<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>_>
  *pTVar2;
  float fVar3;
  float fVar4;
  TReferenceControllerBase<1> *pTVar5;
  FReplayPlaylistTracker *this_00;
  code *pcVar6;
  TConsoleVariableData<float> *pTVar7;
  TConsoleVariableData<float> *pTVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  bool bVar13;
  EConnectionState EVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  FCsvProfiler *pFVar18;
  FNetGUIDCache *this_01;
  undefined8 uVar19;
  INetworkReplayStreamer *pIVar20;
  longlong *plVar21;
  AWorldSettings *pAVar22;
  longlong lVar23;
  FArchive *pFVar24;
  FName *pFVar25;
  TStatId TVar26;
  int *piVar27;
  longlong lVar28;
  UDemoNetDriver *pUVar29;
  longlong lVar30;
  uint uVar31;
  FPlaybackPacket *pFVar32;
  wchar_t *pwVar33;
  ulonglong uVar34;
  int *piVar35;
  bool bVar36;
  float fVar37;
  double dVar38;
  FLLMScope local_res20 [2];
  wchar_t *pwVar39;
  undefined1 local_298 [8];
  ForAnyElementType local_290;
  ulonglong local_288;
  undefined1 local_280 [8];
  ForAnyElementType local_278;
  ulonglong local_270;
  undefined1 local_268 [8];
  ForAnyElementType local_260;
  ulonglong local_258;
  undefined1 local_250 [8];
  ForAnyElementType local_248;
  ulonglong local_240;
  FName local_238;
  byte local_230;
  undefined8 local_228;
  undefined8 local_220;
  FString local_218;
  FString local_208;
  longlong *local_1f8;
  undefined1 auStack_1f0 [16];
  uint uStack_1e0;
  uint uStack_1dc;
  longlong local_1d8;
  TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  *pTStack_1d0;
  TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  *local_1c8;
  undefined2 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  FMemScope local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined8 local_198;
  undefined1 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 local_180;
  undefined8 local_17c;
  undefined1 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  int local_168 [2];
  char *local_160;
  char *local_158;
  FDestructionSentinel local_148;
  FDestructionSentinel local_130;
  FDestructionSentinel local_118;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FName local_d0;
  FName local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [12];
  undefined1 local_94 [12];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  *pTStack_60;
  
  pwVar39 = (wchar_t *)0x1;
  FLLMScope::FLLMScope(local_res20,Replays,false,None,Default,true);
  FMemScope::FMemScope(&local_1a8,Replays,true);
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Purple,"UDemoNetDriver_TickDemoPlayback");
  bVar36 = -1 < CpuChannel->Enabled;
  if (bVar36) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2755,"UDemoNetDriver_TickDemoPlayback",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
               ,0xac3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2755);
  }
  if ((*(UWorld **)&this->field_0x1b8 != (UWorld *)0x0) &&
     (bVar10 = UWorld::IsInSeamlessTravel(*(UWorld **)&this->field_0x1b8), bVar10))
  goto LAB_147b1963c;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    CsvDemoSettings.bCaptureCsv = false;
    CsvDemoSettings.StartTime = -1;
    CsvDemoSettings.EndTime = -1;
    CsvDemoSettings.FrameCount = 0;
    CsvDemoSettings.bStopAfterProfile = false;
    CsvDemoSettings.bStopCsvAtReplayEnd = false;
    pwVar33 = FCommandLine::Get();
    CsvDemoSettings.bCaptureCsv =
         FParse::Value(pwVar33,L"-csvdemostarttime=",&CsvDemoSettings.StartTime);
    if (CsvDemoSettings.bCaptureCsv) {
      pwVar33 = FCommandLine::Get();
      bVar10 = FParse::Value(pwVar33,L"-csvdemoendtime=",&CsvDemoSettings.EndTime);
      if (!bVar10) {
        CsvDemoSettings.EndTime = -1;
      }
      pwVar33 = FCommandLine::Get();
      bVar10 = FParse::Value(pwVar33,L"-csvdemoframecount=",&CsvDemoSettings.FrameCount);
      if (!bVar10) {
        CsvDemoSettings.FrameCount = -1;
      }
    }
    pwVar33 = FCommandLine::Get();
    bVar10 = FParse::Param(pwVar33,L"csvDemoStopAfterProfile");
    CsvDemoSettings.bStopAfterProfile = bVar10;
    pwVar33 = FCommandLine::Get();
    bVar10 = FParse::Param(pwVar33,L"csvDemoStopCsvAtReplayEnd");
    CsvDemoSettings.bStopCsvAtReplayEnd = bVar10;
    _Init_thread_footer(&::_TSS0);
  }
  if (CsvDemoSettings.bCaptureCsv != false) {
    if (((this->ReplayHelper).bIsLoadingCheckpoint == false) &&
       ((*(UNetConnection **)&this->field_0x100 == (UNetConnection *)0x0 ||
        (EVar14 = UNetConnection::GetConnectionState(*(UNetConnection **)&this->field_0x100),
        EVar14 == USOCK_Closed)))) {
LAB_147b18444:
      bVar10 = false;
    }
    else {
      fVar3 = (this->ReplayHelper).DemoCurrentTime;
      if ((fVar3 < (float)CsvDemoSettings.StartTime) ||
         (((float)CsvDemoSettings.EndTime < fVar3 && (-1 < (longlong)CsvDemoSettings._4_8_))))
      goto LAB_147b18444;
      bVar10 = true;
    }
    if (bStartedCsvRecording == false) {
      if (bVar10) {
        pFVar18 = FCsvProfiler::Get();
        local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.Data.ArrayNum = 0;
        local_208.Data.ArrayMax = 0;
        local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_218.Data.ArrayNum = 0;
        local_218.Data.ArrayMax = 0;
        FCsvProfiler::BeginCapture(pFVar18,CsvDemoSettings.FrameCount,&local_218,&local_208,None);
        if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        bStartedCsvRecording = true;
      }
    }
    else if (!bVar10) {
      pFVar18 = FCsvProfiler::Get();
      local_1b8 = 0;
      FCsvProfiler::EndCapture
                (pFVar18,(TSharedFuture<FString> *)local_c0,(FBaseGraphTask *)&local_1b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_c0._8_8_);
      bStartedCsvRecording = false;
    }
  }
  if (((this->ReplayHelper).bIsLoadingCheckpoint == false) &&
     ((*(UNetConnection **)&this->field_0x100 == (UNetConnection *)0x0 ||
      (EVar14 = UNetConnection::GetConnectionState(*(UNetConnection **)&this->field_0x100),
      EVar14 == USOCK_Closed)))) goto LAB_147b1963c;
  if (__CsvProfilerStat2789 == false) {
    FCsvProfilerTrace::OutputInlineStat("Time",_GCsvCategory_Demo.Index);
    __CsvProfilerStat2789 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("Time",_GCsvCategory_Demo.Index,param_1 + (this->ReplayHelper).DemoCurrentTime,Set);
  pTVar9 = CVarForceDisableAsyncPackageMapLoading.Ref;
  if (this->bIsWaitingForHeaderDownload != '\0') goto LAB_147b1963c;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar15 = pTVar9->ShadowedValue[0];
  this_01 = TSharedPtr<FNetGUIDCache,1>::operator->
                      ((TSharedPtr<FNetGUIDCache,1> *)&this->field_0x1c8);
  FNetGUIDCache::SetAsyncLoadMode(this_01,0 < iVar15);
  pTVar7 = CVarGotoTimeInSeconds.Ref;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar8 = CVarGotoTimeInSeconds.Ref;
  if (0.0 < pTVar7->ShadowedValue[0] || pTVar7->ShadowedValue[0] == 0.0) {
    local_288 = 0;
    local_298 = (undefined1  [8])0x0;
    local_290.Data = (FScriptContainerElement *)0x0;
    bVar10 = IsInParallelGameThread();
    if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    GotoTimeInSeconds(this,pTVar8->ShadowedValue[0],
                      (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_298);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_298,
               (FWriteAccessScope *)&local_148);
    if (((int)local_288 != 0) && (local_290.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_290.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_290,0,0,0x10);
      local_288 = local_288 & 0xffffffff00000000;
    }
    if (local_148.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
    }
    if (local_290.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_298);
    lVar28 = CVarGotoTimeInSeconds._padding_;
    local_228 = 0;
    local_1a0 = 0xf000000;
    local_19c = 0;
    lVar23 = *(longlong *)CVarGotoTimeInSeconds._padding_;
    local_198 = 0;
    local_190 = 0;
    local_18c = 0xf000000;
    local_188 = 0x1000000;
    uVar19 = (**(code **)(lVar23 + 0xa8))(CVarGotoTimeInSeconds._padding_,local_a0,&local_1a0);
    (**(code **)(lVar23 + 0xb0))(lVar28,L"-1",uVar19);
  }
  pTVar7 = CVarDemoSkipTime.Ref;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar8 = CVarDemoSkipTime.Ref;
  if (0.0 < (float)((uint)pTVar7->ShadowedValue[0] & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    local_270 = 0;
    local_280 = (undefined1  [8])0x0;
    local_278.Data = (FScriptContainerElement *)0x0;
    bVar10 = IsInParallelGameThread();
    if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    GotoTimeInSeconds(this,(this->ReplayHelper).DemoCurrentTime + pTVar8->ShadowedValue[0],
                      (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_280);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_280,
               (FWriteAccessScope *)&local_130);
    if (((int)local_270 != 0) && (local_278.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_278.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_278,0,0,0x10);
      local_270 = local_270 & 0xffffffff00000000;
    }
    if (local_130.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
    }
    if (local_278.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_280);
    lVar28 = CVarDemoSkipTime._padding_;
    local_220 = 0;
    local_184 = 0xf000000;
    local_180 = 0;
    lVar23 = *(longlong *)CVarDemoSkipTime._padding_;
    local_17c = 0;
    local_174 = 0;
    local_170 = 0xf000000;
    local_16c = 0x1000000;
    uVar19 = (**(code **)(lVar23 + 0xa8))(CVarDemoSkipTime._padding_,local_94,&local_184);
    (**(code **)(lVar23 + 0xb0))(lVar28,&u_0,uVar19);
  }
  PrepFastForwardLevels(this);
  pIVar20 = TSharedPtr<INetworkReplayStreamer,1>::operator->(&(this->ReplayHelper).ReplayStreamer);
  iVar15 = (**(code **)(pIVar20->_padding_ + 0x60))(pIVar20);
  if (iVar15 != 0) {
    pIVar20 = TSharedPtr<INetworkReplayStreamer,1>::operator->(&(this->ReplayHelper).ReplayStreamer)
    ;
    uVar16 = (**(code **)(pIVar20->_padding_ + 0x60))(pIVar20);
    (this->ReplayHelper).DemoTotalTime = (float)uVar16 * __real_3a83126f;
  }
  bVar10 = ProcessReplayTasks(this);
  if (!bVar10) goto LAB_147b1963c;
  pTVar5 = (this->ReplayStreamer).SharedReferenceCount.ReferenceController;
  pIVar20 = (this->ReplayStreamer).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pIVar20 == (INetworkReplayStreamer *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  cVar11 = (**(code **)(pIVar20->_padding_ + 0x68))(pIVar20);
  if ((cVar11 == '\0') && ((this->ReplayHelper).DemoFrameNum == 0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    goto LAB_147b1963c;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pIVar20 = TSharedPtr<INetworkReplayStreamer,1>::operator->(&(this->ReplayHelper).ReplayStreamer);
  plVar21 = (longlong *)(**(code **)(pIVar20->_padding_ + 0x20))(pIVar20);
  if (plVar21 != (longlong *)0x0) {
    cVar11 = (**(code **)(*plVar21 + 0x38))(plVar21);
    if ((cVar11 == '\0') ||
       (((this->PlaybackPackets).ArrayNum != 0 &&
        (param_1 + (this->ReplayHelper).DemoCurrentTime < (this->ReplayHelper).DemoTotalTime)))) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    pFVar18 = FCsvProfiler::Get();
    bVar12 = FCsvProfiler::IsCapturing(pFVar18);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      bCsvProfilingEnabledPreviousTick = bVar12;
      _Init_thread_footer(&::_TSS1);
    }
    if (((CsvDemoSettings.bStopAfterProfile == false) || (bVar12)) ||
       (bCsvProfilingEnabledPreviousTick == false)) {
      if (((bVar10) && (bVar12)) && (CsvDemoSettings.bStopCsvAtReplayEnd != false)) {
        pFVar18 = FCsvProfiler::Get();
        local_1b0 = 0;
        FCsvProfiler::EndCapture
                  (pFVar18,(TSharedFuture<FString> *)local_b0,(FBaseGraphTask *)&local_1b0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_b0._8_8_);
      }
    }
    else {
      bVar10 = true;
    }
    bCsvProfilingEnabledPreviousTick = bVar12;
    pIVar20 = TSharedPtr<INetworkReplayStreamer,1>::operator->(&(this->ReplayHelper).ReplayStreamer)
    ;
    cVar11 = (**(code **)(pIVar20->_padding_ + 0x128))(pIVar20);
    if ((cVar11 == '\0') && (bVar10)) {
      TMulticastDelegate<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::Broadcast
                (&FNetworkReplayDelegates::OnReplayPlaybackComplete,*(UWorld **)&this->field_0x1b8);
      this_00 = (this->PlaylistTracker).Object;
      FCsvProfiler::SetMetadata(L"ReplayID",(wchar_t *)0x0);
      if (GDemoLoopCount < 2) {
        pwVar33 = FCommandLine::Get();
        bVar10 = FParse::Param(pwVar33,L"ExitAfterReplay");
        pTVar9 = CVarLoopDemo.Ref;
        if ((bVar10) &&
           ((this_00 == (FReplayPlaylistTracker *)0x0 ||
            (this_00->CurrentReplay == (this_00->Playlist).ArrayNum)))) {
          FWindowsPlatformMisc::RequestExit(false,L"DemoNetDriver");
        }
        else {
          bVar10 = IsInParallelGameThread();
          if ((!bVar10) &&
             ((bVar10 = IsInGameThread(), !bVar10 &&
              (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<6409875433831007945>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                   ,0x6c9,"GetShadowIndex() == 0"), bVar10)))) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (0 < pTVar9->ShadowedValue[0]) {
            if (this_00 == (FReplayPlaylistTracker *)0x0) {
              local_240 = 0;
              local_250 = (undefined1  [8])0x0;
              local_248.Data = (FScriptContainerElement *)0x0;
              GotoTimeInSeconds(this,0.0,(TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *
                                         )local_250);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_250,
                         (FWriteAccessScope *)&local_100);
              if (((int)local_240 != 0) && (local_248.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)local_248.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_248,0,0,0x10);
                local_240 = local_240 & 0xffffffff00000000;
              }
              if (local_100.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
              }
              if (local_248.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_248.Data);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_250);
            }
            else if (this_00->CurrentReplay == (this_00->Playlist).ArrayNum) goto LAB_147b18cea;
          }
        }
      }
      else if (this_00 == (FReplayPlaylistTracker *)0x0) {
        GDemoLoopCount = GDemoLoopCount + -1;
        local_258 = 0;
        local_268 = (undefined1  [8])0x0;
        local_260.Data = (FScriptContainerElement *)0x0;
        GotoTimeInSeconds(this,0.0,(TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
                                   local_268);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_268,
                   (FWriteAccessScope *)&local_118);
        if (((int)local_258 != 0) && (local_260.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_260.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_260,0,0,0x10);
          local_258 = local_258 & 0xffffffff00000000;
        }
        if (local_118.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
        }
        if (local_260.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_260.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_268);
      }
      else if (this_00->CurrentReplay == (this_00->Playlist).ArrayNum) {
        GDemoLoopCount = GDemoLoopCount + -1;
LAB_147b18cea:
        FReplayPlaylistTracker::Restart(this_00);
      }
    }
  }
  if (((*(UWorld **)&this->field_0x1b8 != (UWorld *)0x0) &&
      (pAVar22 = UWorld::GetWorldSettings(*(UWorld **)&this->field_0x1b8,false,true),
      pAVar22 != (AWorldSettings *)0x0)) &&
     (pAVar22 = UWorld::GetWorldSettings(*(UWorld **)&this->field_0x1b8,false,true),
     (pAVar22->PauserPlayerState).field0_0x0.DebugPtr == (APlayerState *)0x0)) {
    (this->ReplayHelper).DemoCurrentTime = param_1 + (this->ReplayHelper).DemoCurrentTime;
  }
  fVar37 = (this->ReplayHelper).DemoTotalTime + __real_3c23d70a;
  fVar3 = (this->ReplayHelper).DemoCurrentTime;
  if (fVar3 <= fVar37) {
    fVar37 = fVar3;
  }
  if (fVar37 <= 0.0) {
    fVar37 = 0.0;
  }
  (this->ReplayHelper).DemoCurrentTime = fVar37;
  pIVar20 = TSharedPtr<INetworkReplayStreamer,1>::operator->(&(this->ReplayHelper).ReplayStreamer);
  fVar3 = __real_447a0000;
  (**(code **)(pIVar20->_padding_ + 0x58))(pIVar20);
  pUVar29 = this;
  lVar23 = 0;
  if ((this->PlaybackPackets).ArrayNum < 1) {
    pUVar29 = (UDemoNetDriver *)(this->ReplayStreamer).SharedReferenceCount.ReferenceController;
    pIVar20 = (this->ReplayStreamer).Object;
    if (pUVar29 != (UDemoNetDriver *)0x0) {
      LOCK();
      *(int *)&pUVar29->field_0x8 = *(int *)&pUVar29->field_0x8 + 1;
      UNLOCK();
    }
    if ((pIVar20 == (INetworkReplayStreamer *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    cVar11 = (**(code **)(pIVar20->_padding_ + 0x68))(pIVar20);
    lVar23 = 2;
    if (cVar11 != '\0') goto LAB_147b18e00;
    bVar10 = false;
LAB_147b18e08:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar29);
  }
  else {
LAB_147b18e00:
    bVar10 = true;
    if ((int)lVar23 != 0) goto LAB_147b18e08;
  }
  pTVar9 = CVarFastForwardLevelsPausePlayback.Ref;
  bVar12 = false;
  bVar13 = IsInParallelGameThread();
  if (bVar13) {
LAB_147b18e31:
    lVar23 = 0;
  }
  else {
    bVar13 = IsInGameThread();
    lVar23 = 4;
    if (bVar13) goto LAB_147b18e31;
  }
  if (*(int *)((longlong)pTVar9->ShadowedValue + lVar23) == 0) {
    uVar34 = (ulonglong)((this->ReplayHelper).DemoCurrentTime * fVar3);
    pUVar29 = this;
    if (bVar10) {
LAB_147b18eba:
      bVar10 = true;
    }
    else {
      pUVar29 = (UDemoNetDriver *)(this->ReplayStreamer).SharedReferenceCount.ReferenceController;
      bVar12 = true;
      pIVar20 = (this->ReplayStreamer).Object;
      if (pUVar29 != (UDemoNetDriver *)0x0) {
        LOCK();
        *(int *)&pUVar29->field_0x8 = *(int *)&pUVar29->field_0x8 + 1;
        UNLOCK();
      }
      if ((pIVar20 == (INetworkReplayStreamer *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      cVar11 = (**(code **)(pIVar20->_padding_ + 0x78))
                         (pIVar20,uVar34 & 0xffffffff,uVar34 & 0xffffffff);
      if (cVar11 != '\0') goto LAB_147b18eba;
      bVar10 = false;
    }
    if (bVar12) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pUVar29);
    }
  }
  if (bVar10) {
    PauseChannels(this,false);
    dVar38 = FWindowsPlatformTime::Seconds();
    pTVar5 = (this->ReplayStreamer).SharedReferenceCount.ReferenceController;
    pIVar20 = (this->ReplayStreamer).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar20 == (INetworkReplayStreamer *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar24 = (FArchive *)(**(code **)(pIVar20->_padding_ + 0x20))(pIVar20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    fVar3 = __real_40a00000;
    if (pFVar24 != (FArchive *)0x0) {
      FReplayHelper::SetPlaybackNetworkVersions(&this->ReplayHelper,pFVar24);
      fVar3 = __real_40a00000;
    }
    do {
      pTVar5 = (this->ReplayStreamer).SharedReferenceCount.ReferenceController;
      pIVar20 = (this->ReplayStreamer).Object;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pIVar20 == (INetworkReplayStreamer *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar24 = (FArchive *)(**(code **)(pIVar20->_padding_ + 0x20))(pIVar20);
      iVar15 = (this->PlaybackPackets).ArrayNum;
      pwVar33 = (wchar_t *)(longlong)iVar15;
      if (0 < iVar15) {
        uVar16 = 0;
        if ((int)(iVar15 - 1U) < iVar15) {
          uVar16 = ~(iVar15 - 1U) >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), pwVar39 = pwVar33, bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar37 = (this->ReplayHelper).DemoCurrentTime;
        fVar4 = *(float *)((this->PlaybackPackets).AllocatorInstance.Data +
                          (longlong)(this->PlaybackPackets).ArrayNum * 0x20 + -0x10);
        if ((fVar37 < fVar4) && (fVar3 < fVar4 - fVar37)) goto LAB_147b19079;
      }
      pwVar39 = (wchar_t *)this->MaxArchiveReadPos;
      bVar10 = FReplayHelper::ReadDemoFrame
                         (&this->ReplayHelper,*(UNetConnection **)&this->field_0x100,pFVar24,
                          &this->PlaybackPackets,false,(long64)pwVar39,(float *)0x0);
      if (!bVar10) goto LAB_147b19079;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    } while( true );
  }
  PauseChannels(this,true);
LAB_147b1963c:
  if (bVar36) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FMemScope::~FMemScope(&local_1a8);
  FLLMScope::~FLLMScope(local_res20);
  return;
LAB_147b19079:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    if (StatPtr_TickDemoPlayback_ProcessPackets ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UDemoNetDriver::TickDemoPlayback(float)_::_103_::FStat_TickDemoPlayback_ProcessPackets>
         )0x0) {
      pFVar25 = ::FName::FName(&local_d0,"TickDemoPlayback_ProcessPackets");
      pwVar39 = L"Net";
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_TickDemoPlayback_ProcessPackets,*pFVar25,
                 L"TickDemoPlayback_ProcessPackets","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS2);
  }
  TVar26.StatIdPtr = (TStatIdData *)StatPtr_TickDemoPlayback_ProcessPackets;
  if (StatPtr_TickDemoPlayback_ProcessPackets ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UDemoNetDriver::TickDemoPlayback(float)_::_103_::FStat_TickDemoPlayback_ProcessPackets>
       )0x0) {
    pFVar25 = ::FName::FName(&local_c8,"TickDemoPlayback_ProcessPackets");
    pwVar39 = L"Net";
    TVar26.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_TickDemoPlayback_ProcessPackets,*pFVar25,
                    L"TickDemoPlayback_ProcessPackets","STATGROUP_Net","STATCAT_Advanced",L"Net",
                    true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_168[0] = 0xb8b;
  local_160 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp";
  local_168[1] = 3;
  local_158 = "void __cdecl UDemoNetDriver::TickDemoPlayback(float)";
  piVar27 = local_168;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_238,TVar26,CycleStat|ClearEveryFrame,false,
             (FSourceLocation *)piVar27);
  while( true ) {
    uVar16 = this->PlaybackPacketIndex;
    uVar17 = 0;
    if (((int)uVar16 < 0) || ((this->PlaybackPackets).ArrayNum <= (int)uVar16)) break;
    iVar15 = (this->PlaybackPackets).ArrayNum;
    pwVar33 = (wchar_t *)(longlong)iVar15;
    uVar31 = uVar17;
    if ((int)uVar16 < iVar15) {
      uVar31 = ~uVar16 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (piVar27 = (int *)(longlong)(int)uVar16,
       bVar10 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       pwVar39 = pwVar33, bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar32 = (FPlaybackPacket *)
              ((this->PlaybackPackets).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x20);
    pfVar1 = &(this->ReplayHelper).DemoCurrentTime;
    if (*pfVar1 <= pFVar32->TimeSeconds && pFVar32->TimeSeconds != *pfVar1) goto LAB_147b19263;
    if ((double)pFVar32->LevelIndex != (double)(this->ReplayHelper).CurrentLevelIndex) {
      (**(code **)(**(longlong **)(*(longlong *)&this->field_0x1b8 + 0x230) + 0x358))();
      iVar15 = pFVar32->LevelIndex;
      (this->ReplayHelper).CurrentLevelIndex = iVar15;
      ProcessSeamlessTravel(this,iVar15);
      goto LAB_147b19263;
    }
    this->PlaybackPacketIndex = this->PlaybackPacketIndex + 1;
    bVar10 = ProcessPacket(this,pFVar32);
    if (!bVar10) goto LAB_147b19263;
    piVar35 = &(this->ReplayHelper).DemoFrameNum;
    *piVar35 = *piVar35 + 1;
  }
  PauseChannels(this,true);
LAB_147b19263:
  if (0 < this->PlaybackPacketIndex) {
    iVar15 = (this->PlaybackPackets).ArrayNum;
    pwVar33 = (wchar_t *)(longlong)iVar15;
    uVar31 = this->PlaybackPacketIndex - 1;
    uVar16 = uVar17;
    if ((int)uVar31 < iVar15) {
      uVar16 = ~uVar31 >> 0x1f;
    }
    if (uVar16 == 0) {
      piVar27 = (int *)(longlong)(int)uVar31;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      pwVar39 = pwVar33;
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar16 = this->PlaybackPacketIndex;
    pwVar33 = (wchar_t *)(longlong)(int)uVar16;
    this->LastProcessedPacketTime =
         *(float *)((this->PlaybackPackets).AllocatorInstance.Data +
                   (longlong)(int)uVar31 * 0x20 + 0x10);
    if ((int)uVar16 <= (this->PlaybackPackets).ArrayNum) {
      uVar17 = ~uVar16 >> 0x1f;
    }
    if (uVar17 == 0) {
      piVar27 = (int *)0x0;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      pwVar39 = pwVar33;
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (uVar16 != 0) {
      TArray<FPlaybackPacket,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (&this->PlaybackPackets,0,uVar16);
      piVar27 = &(this->PlaybackPackets).ArrayMax;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,&(this->PlaybackPackets).AllocatorInstance,(this->PlaybackPackets).ArrayNum,
                 piVar27);
    }
    this->PlaybackPacketIndex = 0;
  }
  pTVar2 = &(this->ReplayHelper).PlaybackFrames;
  TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
              *)pTVar2);
  local_1c0 = 0;
  stack0xfffffffffffffe18 = local_88._16_16_;
  local_1f8 = (longlong *)local_88._0_8_;
  auStack_1f0._0_8_ = local_88._8_8_;
  local_1d8 = local_68;
  pTStack_1d0 = pTStack_60;
  uVar34 = local_88._24_8_ >> 0x20;
  local_1c8 = (TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
               *)pTVar2;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lVar28 = (longlong)(int)uVar34 * 0x60;
      lVar23 = *local_1f8;
      fVar3 = *(float *)(lVar28 + lVar23);
      pfVar1 = &(this->ReplayHelper).DemoCurrentTime;
      if (fVar3 < *pfVar1 || fVar3 == *pfVar1) {
        if (this->bIsFastForwarding == false) {
          uVar19 = *(undefined8 *)&this->field_0x1b8;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &FNetworkReplayDelegates::OnProcessGameSpecificFrameData,
                     (FWriteAccessScope *)&local_e8);
          bVar10 = false;
          FNetworkReplayDelegates::OnProcessGameSpecificFrameData._28_4_ =
               FNetworkReplayDelegates::OnProcessGameSpecificFrameData._28_4_ + 1;
          uVar16 = FNetworkReplayDelegates::OnProcessGameSpecificFrameData._16_4_ - 1;
          if (-1 < (int)uVar16) {
            piVar35 = (int *)(longlong)(int)uVar16;
            lVar30 = (longlong)piVar35 << 4;
            do {
              pwVar33 = (wchar_t *)
                        (longlong)
                        (int)FNetworkReplayDelegates::OnProcessGameSpecificFrameData._16_4_;
              uVar17 = 0;
              if ((int)uVar16 < (int)FNetworkReplayDelegates::OnProcessGameSpecificFrameData._16_4_)
              {
                uVar17 = ~uVar16 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (piVar27 = piVar35,
                 bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 pwVar39 = pwVar33, bVar12)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (((*(int *)(FNetworkReplayDelegates::OnProcessGameSpecificFrameData._8_8_ + 8 +
                            lVar30) == 0) ||
                  (plVar21 = *(longlong **)
                              (FNetworkReplayDelegates::OnProcessGameSpecificFrameData._8_8_ +
                              lVar30), plVar21 == (longlong *)0x0)) ||
                 (cVar11 = (**(code **)(*plVar21 + 0x68))
                                     (plVar21,uVar19,fVar3,lVar28 + lVar23 + 8,piVar27,pwVar39),
                 cVar11 == '\0')) {
                bVar10 = true;
              }
              piVar35 = (int *)((longlong)piVar35 + -1);
              lVar30 = lVar30 + -0x10;
              uVar16 = uVar16 - 1;
            } while (-1 < (int)uVar16);
          }
          FNetworkReplayDelegates::OnProcessGameSpecificFrameData._28_4_ =
               FNetworkReplayDelegates::OnProcessGameSpecificFrameData._28_4_ + -1;
          if (bVar10) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &FNetworkReplayDelegates::OnProcessGameSpecificFrameData,false);
          }
          if (local_e8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
          }
        }
        TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_1d0,uStack_1dc);
        local_1c0 = CONCAT11(local_1c0._1_1_,1);
      }
      uStack_1e0 = uStack_1e0 & ~auStack_1f0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1f0);
      uVar34 = (ulonglong)uStack_1dc;
    } while ((int)uStack_1dc < *(int *)(auStack_1f0._8_8_ + 0x18));
    if (((char)local_1c0 != '\0') && (local_1c0._1_1_ != '\0')) {
      uVar16 = *(int *)&(local_1c8->Elements).field_0x8 - *(int *)&(local_1c8->Elements).field_0x34;
      if (uVar16 < 4) {
        iVar15 = 1;
      }
      else {
        uVar34 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
        lVar23 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar15 = 1 << ((byte)lVar23 & 0x1f);
      }
      if (((0 < (int)uVar16) && (local_1c8->HashSize < iVar15)) || (iVar15 < local_1c8->HashSize)) {
        local_1c8->HashSize = iVar15;
        TSet<TTuple<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<float,TMap<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_1c8);
      }
    }
  }
  if ((local_230 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_230 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_230 & 4) != 0) {
    FThreadStats::AddMessage(local_238,CycleScopeEnd);
  }
  if (this->bIsFastForwarding != false) {
    FinalizeFastForward(this,dVar38);
  }
  goto LAB_147b1963c;
}

// TickDemoRecord @ 147b19850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::TickDemoRecord(UDemoNetDriver *this,float param_1)

{
  float fVar1;
  INetworkReplayStreamer *pIVar2;
  code *pcVar3;
  uint uVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  longlong lVar7;
  float fVar8;
  
  bVar6 = IsRecording(this);
  if ((bVar6) && ((this->ReplayHelper).bPauseRecording == false)) {
    if (__CsvProfilerStat1753 == false) {
      FCsvProfilerTrace::OutputInlineStat("DemoRecordTime",_GCsvCategory_Demo.Index);
      __CsvProfilerStat1753 = true;
    }
    uVar4 = _GCsvCategory_Demo.Index;
    FCsvProfiler::BeginStat("DemoRecordTime",_GCsvCategory_Demo.Index,"CSV_DemoRecordTime");
    fVar1 = (this->ReplayHelper).DemoCurrentTime;
    fVar8 = FReplayHelper::GetClampedDeltaSeconds(*(UWorld **)&this->field_0x1b8,param_1);
    (this->ReplayHelper).DemoCurrentTime = fVar8 + fVar1;
    if (((this->ReplayHelper).ReplayStreamer.Object == (INetworkReplayStreamer *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = (this->ReplayHelper).ReplayStreamer.Object;
    (**(code **)(pIVar2->_padding_ + 0x50))
              (pIVar2,(longlong)((this->ReplayHelper).DemoCurrentTime * __real_447a0000));
    if ((this->ReplayHelper).CheckpointSaveContext.CheckpointSaveState == Idle) {
      TickDemoRecordFrame(this,param_1);
      pTVar5 = CVarEnableCheckpoints.Ref;
      bVar6 = IsInParallelGameThread();
      if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
        lVar7 = 0;
      }
      else {
        lVar7 = 4;
      }
      if (*(int *)((longlong)pTVar5->ShadowedValue + lVar7) == 1) {
        if (((this->ReplayHelper).CheckpointSaveContext.CheckpointSaveState != Idle) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ReplayHelper.GetCheckpointSaveState() == FReplayHelper::ECheckpointSaveState::Idle"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                               ,0x6ed,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar6 = FReplayHelper::ShouldSaveCheckpoint(&this->ReplayHelper);
        if (bVar6) {
          if ((*(int *)&this->field_0x110 < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FReplayHelper::SaveCheckpoint
                    (&this->ReplayHelper,(UNetConnection *)**(undefined8 **)&this->field_0x108);
        }
      }
    }
    else {
      if ((*(int *)&this->field_0x110 < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FReplayHelper::TickCheckpoint
                (&this->ReplayHelper,(UNetConnection *)**(undefined8 **)&this->field_0x108);
    }
    FCsvProfiler::EndStat("DemoRecordTime",uVar4);
  }
  return;
}

// TickDemoRecordFrame @ 147b19ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::TickDemoRecordFrame(UDemoNetDriver *this,float param_1)

{
  undefined8 *puVar1;
  ForElementType<FReplayViewer> FVar2;
  ForElementType<AActor_*> FVar3;
  int *piVar4;
  TArray<UDemoNetDriver::FDemoActorPriority,TSizedDefaultAllocator<32>_> *pTVar5;
  float fVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  FDemoBudgetLogHelper *pFVar9;
  USceneComponent *pUVar10;
  undefined1 *puVar11;
  code *pcVar12;
  bool bVar13;
  TAtomic<float> TVar14;
  TConsoleVariableData<float> *pTVar15;
  TConsoleVariableData<float> *pTVar16;
  TConsoleVariableData<int> *pTVar17;
  TConsoleVariableData<int> *pTVar18;
  AActor *pAVar19;
  char cVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  INetworkReplayStreamer *pIVar26;
  FArchive *pFVar27;
  UDemoNetConnection *this_00;
  FNetworkObjectList *pFVar28;
  TRotator<double> *this_01;
  TVector<double> *pTVar29;
  longlong lVar30;
  TStatId TVar31;
  longlong lVar32;
  TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *pTVar33;
  FName *pFVar34;
  FThreadSafeStaticStat<_private:_void___cdecl_UDemoNetDriver::TickDemoRecordFrame(float)_::_168_::FStat_STAT_ReplayLevelSorting>
  FVar35;
  ulonglong uVar36;
  FThreadSafeStaticStat<_private:_void___cdecl_UDemoNetDriver::TickDemoRecordFrame(float)_::_216_::FStat_STAT_ReplayReplicateActors>
  FVar37;
  byte bVar38;
  UObject *pUVar39;
  FStaticBasicLogRecord *pFVar40;
  FName FVar41;
  FName FVar42;
  longlong *plVar43;
  ForElementType<FReplayViewer> FVar44;
  longlong *plVar45;
  FString *pFVar46;
  FName FVar47;
  uint uVar48;
  uint uVar49;
  undefined8 *puVar50;
  UObject *pUVar51;
  AActor *pAVar52;
  ForElementType<AActor_*> FVar53;
  ulonglong uVar54;
  uint uVar55;
  ulonglong uVar56;
  uint *puVar57;
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *pTVar58;
  FScriptContainerElement *pFVar59;
  undefined1 *puVar60;
  longlong *plVar61;
  FScriptContainerElement *pFVar62;
  bool bVar63;
  float fVar64;
  undefined4 uVar65;
  float fVar66;
  undefined4 uVar70;
  double dVar67;
  double dVar68;
  double dVar69;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  TAtomic<float> TVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auStackY_ba8 [32];
  byte local_b48;
  AActor *local_b40;
  char local_b38;
  undefined1 local_b37;
  undefined1 local_b36;
  undefined1 local_b35;
  undefined1 local_b34;
  char local_b33;
  byte local_b32;
  char local_b31;
  undefined1 local_b30;
  undefined1 local_b2f;
  FIdentityFunctor local_b2e;
  FIdentityFunctor local_b2d;
  int local_b2c;
  FName local_b28;
  int local_b20;
  uint local_b1c;
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *local_b18;
  FWeakObjectPtr local_b10;
  int local_b08;
  float local_b04;
  UDemoNetConnection *local_b00;
  longlong *local_af8;
  FString local_af0;
  double local_ae0;
  double local_ad8;
  FName local_ad0;
  int local_ac8;
  uint uStack_ac4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_ac0;
  uint local_ab8;
  uint uStack_ab4;
  uint uStack_ab0;
  undefined4 uStack_aac;
  FColor_u_0 local_aa8;
  FColor_u_0 local_aa4;
  FName local_aa0;
  byte local_a98;
  APlayerController *local_a90;
  FNetworkObjectList *local_a88;
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *local_a80;
  undefined8 uStack_a78;
  TBitArray<FDefaultBitArrayAllocator> *local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  int iStack_a58;
  undefined4 uStack_a54;
  AActor *local_a50;
  double local_a48;
  FName local_a40;
  FName local_a38;
  FName local_a30;
  FName local_a20;
  int local_a10;
  undefined4 uStack_a0c;
  longlong *plStack_a08;
  longlong *plStack_a00;
  undefined8 uStack_9f8;
  longlong local_9f0;
  FRepActorsParams local_9e8;
  UObject *local_9a8;
  longlong lStack_9a0;
  undefined4 local_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  undefined8 local_988;
  undefined1 local_980 [8];
  int local_978;
  int local_974;
  LARGE_INTEGER local_970;
  LARGE_INTEGER local_968;
  LARGE_INTEGER local_960;
  LARGE_INTEGER local_958;
  FArchive *local_950;
  LARGE_INTEGER local_948;
  UObject *local_940;
  FString local_938;
  FString local_928;
  FWeakObjectPtr local_918;
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *local_910;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_908;
  undefined8 uStack_8e8;
  FSourceLocation local_8d8;
  double local_8b8;
  double dStack_8b0;
  double local_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  double local_890;
  UDemoNetConnection *local_888;
  UDemoNetDriver *local_880;
  double *local_878;
  TSharedPtr<INetworkReplayStreamer,1> local_870;
  FName local_858;
  FName local_850;
  FName local_848;
  FName local_840;
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *local_838;
  undefined8 uStack_830;
  TBitArray<FDefaultBitArrayAllocator> *local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  FName local_808;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  double local_7f0;
  undefined4 local_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  undefined8 local_7d8;
  TRotator<double> local_7d0;
  TVector<double> local_7b8 [2];
  undefined4 local_784;
  ForElementType<AActor_*> local_780;
  uint local_378;
  uint local_374;
  ForElementType<FReplayViewer> local_370;
  uint local_e8;
  uint local_e4;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_ba8;
  pTVar8 = (this->ReplayStreamer).SharedReferenceCount.ReferenceController;
  local_870.Object = (this->ReplayStreamer).Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b04 = param_1;
  local_870.SharedReferenceCount.ReferenceController = pTVar8;
  pIVar26 = TSharedPtr<INetworkReplayStreamer,1>::operator->(&local_870);
  pFVar27 = (FArchive *)(**(code **)(pIVar26->_padding_ + 0x20))(pIVar26);
  local_950 = pFVar27;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (pFVar27 == (FArchive *)0x0) {
    return;
  }
  QueryPerformanceCounter(&local_948);
  dVar68 = __real_4170000000000000;
  FVar47 = (FName)(double)(this->MaxDesiredRecordTimeMS * __real_3a83126f);
  dVar69 = (double)local_948.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  local_b28 = FVar47;
  local_a48 = dVar69;
  if ((this->ReplayHelper).bHasLevelStreamingFixes == false) {
    lVar30 = *(longlong *)&this->field_0x1b8;
    puVar50 = *(undefined8 **)(lVar30 + 0x90);
    iVar25 = *(int *)(lVar30 + 0x98);
    puVar1 = puVar50 + iVar25;
    while( true ) {
      if (*(int *)(lVar30 + 0x98) != iVar25) {
        local_b37 = 0;
        `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_b37);
      }
      if (puVar50 == puVar1) break;
      pUVar51 = (UObject *)*puVar50;
      if (((pUVar51 != (UObject *)0x0) &&
          (cVar20 = (**(code **)(*(longlong *)pUVar51 + 0x2e8))(pUVar51), cVar20 != '\0')) &&
         (cVar20 = (**(code **)(*(longlong *)pUVar51 + 0x300))(pUVar51), cVar20 == '\0')) {
        local_b10.ObjectIndex = 0;
        local_b10.ObjectSerialNumber = 0;
        local_940 = pUVar51;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar51);
        }
        FWeakObjectPtr::operator=(&local_b10,(FObjectPtr)&local_940);
        local_918 = local_b10;
        iVar23 = TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                           (&(this->ReplayHelper).UniqueStreamingLevels,
                            local_b10.ObjectSerialNumber ^ local_b10.ObjectIndex,
                            (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_918);
        if (iVar23 == -1) {
          TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                    (&(this->ReplayHelper).UniqueStreamingLevels,
                     (TWeakObjectPtr<UObject,FWeakObjectPtr> *)local_980,(bool *)&local_b10);
          TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                    (&(this->ReplayHelper).NewStreamingLevelsThisFrame,
                     (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(local_980 + 4),(bool *)&local_b10);
        }
      }
      puVar50 = puVar50 + 1;
    }
  }
  pFVar9 = (this->BudgetLogHelper).Ptr;
  piVar4 = &(this->ReplayHelper).DemoFrameNum;
  *piVar4 = *piVar4 + 1;
  *(int *)&this->field_0x5d8 = *(int *)&this->field_0x5d8 + 1;
  FDemoBudgetLogHelper::NewFrame(pFVar9);
  if ((*(int *)&this->field_0x110 < 1) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  this_00 = CastChecked<UDemoNetConnection,UNetConnection>
                      (*(TObjectPtr<UNetConnection> **)&this->field_0x108,NullChecked);
  local_b00 = this_00;
  FReplayHelper::FlushNetChecked((UNetConnection *)this_00);
  fVar64 = (float)(**(code **)(GEngine->_padding_ + 0x310))(GEngine,param_1,1);
  TVar14 = __real_3f800000;
  if (fVar64 != 0.0) {
    local_b04 = (float)__real_3f800000 / fVar64;
  }
  pFVar28 = UNetDriver::GetNetworkObjectList((UNetDriver *)this);
  pTVar58 = &pFVar28->ActiveNetworkObjects;
  local_b1c = *(int *)&(pFVar28->ActiveNetworkObjects).Elements.field_0x8 -
              *(int *)&(pFVar28->ActiveNetworkObjects).Elements.field_0x34;
  local_b18 = pTVar58;
  local_a88 = pFVar28;
  if ((int)local_b1c < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_b1c);
  }
  (this->PrioritizedActors).ArrayNum = 0;
  if ((this->PrioritizedActors).ArrayMax < (int)local_b1c) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,local_b1c,&(this->PrioritizedActors).AllocatorInstance,0,
               &(this->PrioritizedActors).ArrayMax);
  }
  local_8b8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                               UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  dStack_8b0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  local_890 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_8a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_8a0 = local_8b8;
  uStack_898 = dStack_8b0;
  local_a90 = (APlayerController *)FWeakObjectPtr::Get(&(this->ViewerOverride).WeakPtr);
  if ((local_a90 == (APlayerController *)0x0) &&
     (local_a90 = UPlayer::GetPlayerController((UPlayer *)this_00,*(UWorld **)&this->field_0x1b8),
     local_a90 == (APlayerController *)0x0)) {
    local_a50 = (AActor *)0x0;
  }
  else {
    local_a50 = (AActor *)(**(code **)(local_a90->_padding_ + 0x7e0))();
    if (local_a50 != (AActor *)0x0) {
      pUVar10 = (local_a50->RootComponent).field0_0x0.DebugPtr;
      if (pUVar10 == (USceneComponent *)0x0) {
        uVar65 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar70 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar71 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar72 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar73 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar74 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
      else {
        local_7f0 = (pUVar10->ComponentToWorld).Translation.ZW.m128d_f64[0];
        local_800 = *(undefined4 *)(pUVar10->ComponentToWorld).Translation.XY.m128d_f64;
        uStack_7fc = *(undefined4 *)
                      ((longlong)(pUVar10->ComponentToWorld).Translation.XY.m128d_f64 + 4);
        uStack_7f8 = *(undefined4 *)((pUVar10->ComponentToWorld).Translation.XY.m128d_f64 + 1);
        uStack_7f4 = *(undefined4 *)
                      ((longlong)(pUVar10->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
        uVar65 = SUB84(local_7f0,0);
        uVar70 = (undefined4)((ulonglong)local_7f0 >> 0x20);
        uVar71 = local_800;
        uVar72 = uStack_7fc;
        uVar73 = uStack_7f8;
        uVar74 = uStack_7f4;
      }
      local_890 = (double)CONCAT44(uVar70,uVar65);
      local_8a0 = (double)CONCAT44(uVar72,uVar71);
      uStack_898 = (double)CONCAT44(uVar74,uVar73);
      this_01 = AActor::GetActorRotation(local_a50,&local_7d0);
      pTVar29 = UE::Math::TRotator<double>::Vector(this_01,local_7b8);
      local_8b8 = (pTVar29->field0_0x0)._s_0.X;
      dStack_8b0 = (pTVar29->field0_0x0)._s_0.Y;
      local_8a8 = (pTVar29->field0_0x0)._s_0.Z;
    }
  }
  pTVar17 = CVarDemoLateActorDormancyCheck.Ref;
  bVar21 = IsInParallelGameThread();
  if (bVar21) {
LAB_147b19f48:
    lVar30 = 0;
  }
  else {
    bVar21 = IsInGameThread();
    lVar30 = 4;
    if (bVar21) goto LAB_147b19f48;
  }
  pTVar18 = DemoNetDriverRecordingPrivate::CVarDemoLateDestructionInfoPrioritize.Ref;
  iVar25 = *(int *)((longlong)pTVar17->ShadowedValue + lVar30);
  local_b08 = iVar25;
  bVar21 = IsInParallelGameThread();
  if ((bVar21) || (bVar21 = IsInGameThread(), bVar21)) {
    lVar30 = 0;
  }
  else {
    lVar30 = 4;
  }
  local_b2c = *(int *)((longlong)pTVar18->ShadowedValue + lVar30);
  local_b32 = this->field_0xb13 & 8;
  if ((this->bPrioritizeActors != '\0') || (local_b48 = 0, iVar25 == 0)) {
    local_b48 = 1;
  }
  uVar56 = (ulonglong)_tls_index;
  local_b20 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar56 * 8) + 0x9d4c) < ::_TSS1)
     && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (StatPtr_STAT_ReplayPrioritizeTime ==
        (FThreadSafeStaticStat<_private:_void___cdecl_UDemoNetDriver::TickDemoRecordFrame(float)_::_27_::FStat_STAT_ReplayPrioritizeTime>
         )0x0) {
      pFVar34 = ::FName::FName(&local_808,"STAT_ReplayPrioritizeTime");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayPrioritizeTime,*pFVar34,
                 L"Replay prioritize time","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS1);
  }
  TVar31 = FThreadSafeStaticStatInner<`UDemoNetDriver::TickDemoRecordFrame'::__l27::FStat_STAT_ReplayPrioritizeTime,1>
           ::GetStatId(&StatPtr_STAT_ReplayPrioritizeTime);
  local_8d8.Impl._Line = 0x773;
  local_8d8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp";
  local_8d8.Impl._Column = 3;
  local_8d8.Impl._Function = "void __cdecl UDemoNetDriver::TickDemoRecordFrame(float)";
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_aa0,*(TStatIdData **)&(TVar31.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_8d8);
  local_888 = local_b00;
  local_878 = &local_ae0;
  local_ae0 = (double)this->RecordBuildConsiderAndPrioritizeTimeSlice * (double)FVar47;
  local_ad8 = dVar69;
  local_ad0 = FVar47;
  local_880 = this;
  if (local_b2c == 0) {
    `UDemoNetDriver::TickDemoRecordFrame'::__l27::<lambda_2>::operator()(&local_888);
    local_b20 = (this->PrioritizedActors).ArrayNum;
  }
  fVar64 = __real_3f000000;
  if (((double)local_ad0 <= 0.0) ||
     (QueryPerformanceCounter(&local_970),
     ((double)local_970.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar68) - local_ad8 <=
     local_ae0)) {
    pTVar17 = CVarDemoUseNetRelevancy.Ref;
    local_370.SecondaryData = (ForElementType<FReplayViewer>)0x0;
    local_e8 = 0;
    local_e4 = 0x10;
    bVar21 = IsInParallelGameThread();
    if (bVar21) {
LAB_147b1a115:
      lVar30 = 0;
    }
    else {
      bVar21 = IsInGameThread();
      lVar30 = 4;
      if (bVar21) goto LAB_147b1a115;
    }
    if (((*(int *)((longlong)pTVar17->ShadowedValue + lVar30) < 1) ||
        (plVar43 = *(longlong **)(*(longlong *)&this->field_0x1b8 + 0x38),
        plVar43 == (longlong *)0x0)) || (cVar20 = (**(code **)(*plVar43 + 0x3f8))(), cVar20 == '\0')
       ) {
      local_b38 = '\0';
    }
    else {
      uVar65 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar70 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      local_b38 = '\x01';
      lVar30 = *(longlong *)(*(longlong *)&this->field_0x1b8 + 0x38);
      plVar61 = *(longlong **)(lVar30 + 0x108);
      iVar25 = *(int *)(lVar30 + 0x110);
      plVar43 = plVar61 + iVar25;
      uVar71 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar72 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar73 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar74 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_af8 = plVar43;
      while( true ) {
        if (*(int *)(lVar30 + 0x110) != iVar25) {
          local_b36 = 0;
          `TCheckedPointerIterator<TObjectPtr<UNetConnection>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_b36);
          uVar65 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar70 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar71 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar72 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar73 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar74 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        }
        pTVar58 = local_b18;
        pFVar28 = local_a88;
        if (plVar61 == plVar43) break;
        lVar32 = *plVar61;
        pUVar51 = *(UObject **)(lVar32 + 0x30);
        pUVar39 = pUVar51;
        if (pUVar51 == (UObject *)0x0) {
          pUVar51 = *(UObject **)(lVar32 + 0x98);
          plVar43 = local_af8;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar51 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar51);
            pUVar39 = *(UObject **)(lVar32 + 0x30);
            uVar65 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar70 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            plVar43 = local_af8;
            uVar71 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar72 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uVar73 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uVar74 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          }
        }
        else if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar51);
          uVar65 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar70 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          pUVar39 = *(UObject **)(lVar32 + 0x30);
          uVar71 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar72 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar73 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar74 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        }
        local_9a8 = pUVar51;
        if (pUVar39 == (UObject *)0x0) {
          lStack_9a0 = *(longlong *)(lVar32 + 0x98);
        }
        else {
          lStack_9a0 = (**(code **)(*(longlong *)pUVar39 + 0x7e0))();
          uVar65 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar70 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar71 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar72 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar73 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar74 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        }
        local_998 = uVar71;
        uStack_994 = uVar72;
        uStack_990 = uVar73;
        uStack_98c = uVar74;
        uVar75 = uVar65;
        uVar76 = uVar70;
        if ((lStack_9a0 != 0) && (lVar32 = *(longlong *)(lStack_9a0 + 0x1b8), lVar32 != 0)) {
          local_7d8 = *(undefined8 *)(lVar32 + 0x220);
          local_7e8 = *(undefined4 *)(lVar32 + 0x210);
          uStack_7e4 = *(undefined4 *)(lVar32 + 0x214);
          uStack_7e0 = *(undefined4 *)(lVar32 + 0x218);
          uStack_7dc = *(undefined4 *)(lVar32 + 0x21c);
          local_998 = local_7e8;
          uStack_994 = uStack_7e4;
          uStack_990 = uStack_7e0;
          uStack_98c = uStack_7dc;
          uVar75 = (int)local_7d8;
          uVar76 = (int)((ulonglong)local_7d8 >> 0x20);
        }
        local_988 = CONCAT44(uVar76,uVar75);
        if (lStack_9a0 != 0) {
          FVar44 = (ForElementType<FReplayViewer>)&local_370;
          if (local_370.SecondaryData != (ForElementType<FReplayViewer>)0x0) {
            FVar44 = local_370.SecondaryData;
          }
          if ((ulonglong)FVar44 <= &local_9a8) {
            FVar44 = (ForElementType<FReplayViewer>)&local_370;
            if (local_370.SecondaryData != (ForElementType<FReplayViewer>)0x0) {
              FVar44 = local_370.SecondaryData;
            }
            if ((&local_9a8 < (UObject **)((longlong)FVar44 + (longlong)(int)local_e4 * 0x28)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
          if (local_e8 == local_e4) {
            local_e8 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FReplayViewer>_>
                                 (0x828,&local_370,(int *)&local_e4);
          }
          FVar44 = (ForElementType<FReplayViewer>)&local_370;
          if (local_370.SecondaryData != (ForElementType<FReplayViewer>)0x0) {
            FVar44 = local_370.SecondaryData;
          }
          lVar32 = (longlong)(int)local_e8;
          puVar1 = (undefined8 *)((longlong)FVar44 + lVar32 * 0x28);
          local_e8 = local_e8 + 1;
          *puVar1 = local_9a8;
          puVar1[1] = lStack_9a0;
          *(ulonglong *)((uchar *)((longlong)FVar44 + 0x10) + lVar32 * 0x28) =
               CONCAT44(uStack_994,local_998);
          *(ulonglong *)((uchar *)((longlong)FVar44 + 0x10) + lVar32 * 0x28 + 8) =
               CONCAT44(uStack_98c,uStack_990);
          *(undefined8 *)((uchar *)((longlong)FVar44 + 0x20) + lVar32 * 0x28) = local_988;
          uVar65 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar70 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar71 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar72 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar73 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar74 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        }
        plVar61 = plVar61 + 1;
      }
    }
    uVar56 = 0;
    bVar21 = IsInParallelGameThread();
    if (!bVar21) {
      IsInGameThread();
    }
    pTVar16 = CVarDemoRecordHzWhenNotRelevant.Ref;
    bVar21 = IsInParallelGameThread();
    if (!bVar21) {
      bVar21 = IsInGameThread();
      uVar36 = 4;
      if (!bVar21) goto LAB_147b1a449;
    }
    uVar36 = uVar56;
LAB_147b1a449:
    fVar79 = *(float *)((longlong)pTVar16->ShadowedValue + uVar36);
    if (0.0 < fVar79) {
      fVar64 = (float)TVar14 / fVar79;
    }
    local_b31 = (this->ReplayHelper).bHasDeltaCheckpoints;
    fVar79 = (this->ReplayHelper).DemoCurrentTime;
    uVar55 = 0;
    local_780.SecondaryData = (ForElementType<AActor_*>)0x0;
    local_378 = 0;
    local_a60._0_4_ = 0;
    local_a10 = 0;
    uStack_9f8 = 0;
    local_b18 = (TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>
                 *)((ulonglong)local_b18 & 0xffffffff00000000);
    puVar60 = &(pFVar28->ActiveNetworkObjects).Elements.field_0x10;
    plStack_a08 = (longlong *)0x0;
    plStack_a00 = (longlong *)0x0;
    local_374 = 0x80;
    iVar25 = *(int *)&(pFVar28->ActiveNetworkObjects).Elements.field_0x28;
    uVar24 = 1;
    uStack_a68._4_4_ = 0;
    if (iVar25 != 0) {
      puVar57 = *(uint **)&(pFVar28->ActiveNetworkObjects).Elements.field_0x20;
      if (puVar57 == (uint *)0x0) {
        puVar57 = (uint *)puVar60;
      }
      uVar24 = *puVar57;
      while (uVar55 = (uint)uVar56, uVar24 == 0) {
        lVar30 = (longlong)(int)uVar55;
        local_a60._0_4_ = (int)local_a60 + 0x20;
        uVar55 = uVar55 + 1;
        uVar56 = (ulonglong)uVar55;
        uVar24 = 1;
        uStack_a68._4_4_ = iVar25;
        if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar55)
        goto LAB_147b1a531;
        uVar24 = puVar57[lVar30 + 1];
      }
      uVar24 = ~(uVar24 - 1) & uVar24;
      uVar56 = (ulonglong)uVar24 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar56 != 0) {
        for (; uVar56 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      local_978 = (int)lVar30;
      uStack_a68._4_4_ = (int)local_a60 + -1 + local_978;
      if (iVar25 < uStack_a68._4_4_) {
        uStack_a68._4_4_ = iVar25;
      }
    }
LAB_147b1a531:
    iStack_a58 = *(int *)&(pFVar28->ActiveNetworkObjects).Elements.field_0x8 -
                 *(int *)&(pFVar28->ActiveNetworkObjects).Elements.field_0x34;
    uVar7 = *(uint *)&(pFVar28->ActiveNetworkObjects).Elements.field_0x28;
    bVar38 = (byte)uVar7 & 0x1f;
    uStack_ac4 = 1 << bVar38;
    uVar49 = uVar7 & 0xffffffe0;
    iVar23 = (int)uVar7 >> 5;
    uVar48 = -1 << bVar38;
    uStack_a78 = CONCAT44(uVar24,uVar55);
    uStack_a68._0_4_ = 0xffffffff;
    local_a60._4_4_ = local_784;
    TStack_908._padding_ = uStack_a78;
    uStack_8e8 = CONCAT44(uStack_a54,iStack_a58);
    TStack_908.UnvisitedBitMask = 0xffffffff;
    TStack_908.CurrentBitIndex = uStack_a68._4_4_;
    TStack_908.BaseBitIndex = (int)local_a60;
    TStack_908._28_4_ = local_784;
    local_ac8 = iVar23;
    pTStack_ac0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar60;
    local_ab8 = uVar48;
    uStack_ab4 = uVar7;
    uStack_ab0 = uVar49;
    local_910 = pTVar58;
    TStack_908.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar60;
    if ((((int)uVar7 < 0) || (iVar25 < (int)uVar7)) &&
       (local_a80 = pTVar58, local_a70 = (TBitArray<FDefaultBitArrayAllocator> *)puVar60,
       bVar21 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar21)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    fVar6 = __real_47800000;
    fVar78 = __real_cf000000;
    fVar80 = __real_4f000000;
    dVar69 = __real_3f1a36e2e0000000;
    uVar24 = *(uint *)&(pFVar28->ActiveNetworkObjects).Elements.field_0x28;
    if (uVar7 != uVar24) {
      puVar11 = *(undefined1 **)&(pFVar28->ActiveNetworkObjects).Elements.field_0x20;
      if (puVar11 != (undefined1 *)0x0) {
        puVar60 = puVar11;
      }
      uVar48 = uVar48 & *(uint *)(puVar60 + (longlong)iVar23 * 4);
      while (uVar48 == 0) {
        uStack_ab0 = uVar49 + 0x20;
        local_ac8 = iVar23 + 1;
        uStack_ab4 = uVar24;
        if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < local_ac8)
        goto LAB_147b1a672;
        uVar48 = *(uint *)(puVar60 + (longlong)iVar23 * 4 + 4);
        local_ab8 = 0xffffffff;
        uVar49 = uStack_ab0;
        iVar23 = local_ac8;
      }
      uStack_ac4 = ~(uVar48 - 1) & uVar48;
      uVar56 = (ulonglong)uStack_ac4 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar56 != 0) {
        for (; uVar56 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      local_974 = (int)lVar30;
      uStack_ab4 = local_974 + -1 + uVar49;
      if ((int)uVar24 < (int)uStack_ab4) {
        uStack_ab4 = uVar24;
      }
    }
LAB_147b1a672:
    uStack_a78 = CONCAT44(uStack_ac4,local_ac8);
    uStack_a68 = CONCAT44(uStack_ab4,local_ab8);
    local_a60 = CONCAT44(uStack_aac,uStack_ab0);
    iStack_a58 = *(int *)&(local_a88->ActiveNetworkObjects).Elements.field_0x8 -
                 *(int *)&(local_a88->ActiveNetworkObjects).Elements.field_0x34;
    local_a70 = pTStack_ac0;
    uStack_810 = CONCAT44(uStack_a54,iStack_a58);
    local_828 = pTStack_ac0;
    local_a80 = pTVar58;
    local_838 = pTVar58;
    uStack_830 = uStack_a78;
    uStack_820 = uStack_a68;
    local_818 = local_a60;
    do {
      pTVar58 = local_910;
      if (*(int *)&(local_910->Elements).field_0x8 - *(int *)&(local_910->Elements).field_0x34 !=
          (int)uStack_8e8) {
        local_b35 = 0;
        `TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_b35);
      }
      if (((TStack_908.CurrentBitIndex == uStack_820._4_4_) && (TStack_908.Array == local_828)) &&
         (pTVar58 == local_838)) goto LAB_147b1af29;
      dVar67 = (double)(this->ReplayHelper).DemoCurrentTime;
      plVar43 = *(longlong **)
                 (*(longlong *)&pTVar58->Elements + (longlong)TStack_908.CurrentBitIndex * 0x18);
      local_b18 = (TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>
                   *)CONCAT44(local_b18._4_4_,(int)local_b18 + 1);
      local_af8 = plVar43;
      if (dVar67 < (double)plVar43[2] || dVar67 == (double)plVar43[2]) {
LAB_147b1ae9f:
        if ((0.0 < (double)local_ad0) &&
           (QueryPerformanceCounter(&local_968),
           local_ae0 <
           ((double)local_968.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar68) - local_ad8
           )) goto LAB_147b1aefb;
      }
      else {
        local_b40 = (AActor *)*plVar43;
        bVar21 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(plVar43 + 1));
        if (bVar21) {
          if (((local_b40->RemoteRole).Value == '\0') && (local_b40->bTearOff == 0)) {
            FVar53 = (ForElementType<AActor_*>)&local_780;
            if (local_780.SecondaryData != (ForElementType<AActor_*>)0x0) {
              FVar53 = local_780.SecondaryData;
            }
            if ((ulonglong)FVar53 <= &local_b40) {
              FVar53 = (ForElementType<AActor_*>)&local_780;
              if (local_780.SecondaryData != (ForElementType<AActor_*>)0x0) {
                FVar53 = local_780.SecondaryData;
              }
              if ((&local_b40 < (AActor **)((longlong)FVar53 + (longlong)(int)local_374 * 8)) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar21)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
            }
            if (local_378 == local_374) {
              local_378 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                                    (0x808,&local_780,(int *)&local_374);
            }
            FVar53 = (ForElementType<AActor_*>)&local_780;
            if (local_780.SecondaryData != (ForElementType<AActor_*>)0x0) {
              FVar53 = local_780.SecondaryData;
            }
            lVar30 = (longlong)(int)local_378;
            local_378 = local_378 + 1;
            *(AActor **)((longlong)FVar53 + lVar30 * 8) = local_b40;
          }
          else {
            bVar21 = UNetDriver::IsDormInitialStartupActor(local_b40);
            uVar24 = local_e8;
            if (bVar21) goto LAB_147b1a77c;
            if (local_b40->bRelevantForNetworkReplays == '\0') {
              FVar53 = (ForElementType<AActor_*>)&local_780;
              if (local_780.SecondaryData != (ForElementType<AActor_*>)0x0) {
                FVar53 = local_780.SecondaryData;
              }
              if ((ulonglong)FVar53 <= &local_b40) {
                FVar53 = (ForElementType<AActor_*>)&local_780;
                if (local_780.SecondaryData != (ForElementType<AActor_*>)0x0) {
                  FVar53 = local_780.SecondaryData;
                }
                if ((&local_b40 < (AActor **)((longlong)FVar53 + (longlong)(int)local_374 * 8)) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar21)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
              }
              if (local_378 == local_374) {
                local_378 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                                      (0x808,&local_780,(int *)&local_374);
              }
              FVar53 = (ForElementType<AActor_*>)&local_780;
              if (local_780.SecondaryData != (ForElementType<AActor_*>)0x0) {
                FVar53 = local_780.SecondaryData;
              }
              lVar30 = (longlong)(int)local_378;
              local_378 = local_378 + 1;
              *(AActor **)((longlong)FVar53 + lVar30 * 8) = local_b40;
            }
            else {
              if ((UE::Net::bNetReplicateOnlyBeginPlay == false) ||
                 (local_b40->ActorHasBegunPlay == HasBegunPlay)) {
                if (((double)plVar43[5] < dVar69) ||
                   (*(double *)&this->field_0x320 - (double)plVar43[5] <
                    (double)*(float *)&this->field_0xe4)) {
                  bVar21 = true;
                }
                else {
                  bVar21 = false;
                }
                if ((local_b38 == '\0') || (local_b40->bAlwaysRelevant != '\0')) {
LAB_147b1ac66:
                  plVar61 = plVar43;
                  cVar20 = '\x01';
                }
                else {
                  if ((AActor *)local_b00->_padding_ == (AActor *)0x0) {
                    bVar63 = local_b40 == (AActor *)0x0;
                  }
                  else {
                    bVar63 = (AActor *)local_b00->_padding_ == local_b40;
                  }
                  if ((bVar63) ||
                     (*(uint *)&this->field_0x5d8 <= *(uint *)((longlong)plVar43 + 0xd4)))
                  goto LAB_147b1ac66;
                  uVar56 = (ulonglong)(int)local_e8;
                  local_b33 = '\0';
                  FVar44 = (ForElementType<FReplayViewer>)&local_370;
                  if (local_370.SecondaryData != (ForElementType<FReplayViewer>)0x0) {
                    FVar44 = local_370.SecondaryData;
                  }
                  FVar2 = (ForElementType<FReplayViewer>)((longlong)FVar44 + uVar56 * 0x28);
                  while( true ) {
                    if ((uint)uVar56 != uVar24) {
                      local_b34 = 0;
                      `TCheckedPointerIterator<FReplayViewer,int,0>::operator!='::__l2::<lambda_1>::
                      operator()(&local_b34);
                    }
                    if (FVar44 == FVar2) {
                      plVar61 = local_af8;
                      cVar20 = local_b33;
                      if (bVar21) goto LAB_147b1ac74;
                      local_af8[2] = (longlong)(double)(fVar79 + fVar64);
                      goto LAB_147b1aedc;
                    }
                    cVar20 = (**(code **)(local_b40->_padding_ + 0x530))
                                       (local_b40,*(undefined8 *)FVar44,
                                        *(undefined8 *)((longlong)FVar44 + 8));
                    if (cVar20 != '\0') break;
                    uVar56 = (ulonglong)local_e8;
                    FVar44 = (ForElementType<FReplayViewer>)((longlong)FVar44 + 0x28);
                  }
                  plVar61 = local_af8;
                  cVar20 = '\x01';
                }
LAB_147b1ac74:
                pAVar52 = local_b40;
                plVar45 = (longlong *)0x0;
                if (local_b48 != 0) {
                  pTVar33 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                            ::Find((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                                    *)&local_b00->_padding_,
                                   (TWeakObjectPtr<AActor_const_,FWeakObjectPtr>)
                                   *(FWeakObjectPtr *)(plVar43 + 1));
                  if (pTVar33 !=
                      (TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *)0x0) {
                    plVar45 = *(longlong **)&pTVar33->field_0x8;
                  }
                  if ((((local_b08 == 0) && (plVar45 != (longlong *)0x0)) &&
                      (1 < (pAVar52->NetDormancy).Value)) && ((*(byte *)(plVar45 + 6) & 0x84) == 0))
                  {
                    (**(code **)(*plVar45 + 0x328))(plVar45);
                    pAVar52 = local_b40;
                  }
                }
                pAVar19 = local_a50;
                local_9f0 = pAVar52->_padding_;
                plStack_a08 = plVar61;
                plStack_a00 = plVar45;
                if (local_b32 != 0) {
                  fVar66 = (float)(**(code **)(pAVar52->_padding_ + 0x478))
                                            (pAVar52,&local_8a0,&local_8b8);
                  pTVar16 = DemoNetDriverRecordingPrivate::CVarDemoViewTargetPriorityScale.Ref;
                  fVar66 = fVar66 * fVar6;
                  if (local_b40 == pAVar19) {
                    bVar21 = IsInParallelGameThread();
                    if ((bVar21) || (bVar21 = IsInGameThread(), bVar21)) {
                      lVar30 = 0;
                    }
                    else {
                      lVar30 = 4;
                    }
                    fVar66 = fVar66 * *(float *)((longlong)pTVar16->ShadowedValue + lVar30);
                  }
                  if (fVar80 <= fVar66) {
                    fVar66 = fVar80;
                  }
                  if (fVar66 <= fVar78) {
                    fVar66 = fVar78;
                  }
                  local_a10 = (int)ROUND(fVar66 + fVar66 + __real_3f000000) >> 1;
                  dVar68 = __real_4170000000000000;
                }
                pTVar5 = &this->PrioritizedActors;
                pFVar62 = (pTVar5->AllocatorInstance).Data;
                if (((pFVar62 <= (FScriptContainerElement *)&local_a10) &&
                    ((FScriptContainerElement *)&local_a10 <
                     pFVar62 + (longlong)(this->PrioritizedActors).ArrayMax * 0x28)) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar21)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                iVar25 = (this->PrioritizedActors).ArrayNum;
                if (iVar25 == (this->PrioritizedActors).ArrayMax) {
                  iVar25 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x828,&pTVar5->AllocatorInstance,
                                      &(this->PrioritizedActors).ArrayMax);
                }
                lVar30 = (longlong)iVar25;
                (this->PrioritizedActors).ArrayNum = iVar25 + 1;
                pFVar62 = (pTVar5->AllocatorInstance).Data;
                *(ulonglong *)(pFVar62 + lVar30 * 0x28) = CONCAT44(uStack_a0c,local_a10);
                *(longlong **)(pFVar62 + lVar30 * 0x28 + 8) = plStack_a08;
                *(longlong **)(pFVar62 + lVar30 * 0x28 + 0x10) = plStack_a00;
                *(undefined8 *)(pFVar62 + lVar30 * 0x28 + 0x10 + 8) = uStack_9f8;
                *(longlong *)(pFVar62 + lVar30 * 0x28 + 0x20) = local_9f0;
                *(byte *)(plVar61 + 0x1a) =
                     (local_b31 * '\x02' ^ *(byte *)(plVar61 + 0x1a)) & 2 ^
                     *(byte *)(plVar61 + 0x1a);
                if (cVar20 != '\0') {
                  plVar61[5] = *(longlong *)&this->field_0x320;
                }
                goto LAB_147b1ae9f;
              }
              if (5 < (byte)LogNet._0_1_) {
                UObjectBaseUtility::GetPathName
                          ((UObjectBaseUtility *)local_b40,&local_938,(UObject *)0x0);
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_938.Data.AllocatorInstance.Data);
                }
              }
            }
          }
        }
        else {
LAB_147b1a77c:
          FVar53 = (ForElementType<AActor_*>)&local_780;
          if (local_780.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar53 = local_780.SecondaryData;
          }
          if ((ulonglong)FVar53 <= &local_b40) {
            FVar53 = (ForElementType<AActor_*>)&local_780;
            if (local_780.SecondaryData != (ForElementType<AActor_*>)0x0) {
              FVar53 = local_780.SecondaryData;
            }
            if ((&local_b40 < (AActor **)((longlong)FVar53 + (longlong)(int)local_374 * 8)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
          if (local_378 == local_374) {
            local_378 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                                  (0x808,&local_780,(int *)&local_374);
          }
          lVar30 = (longlong)(int)local_378;
          FVar53 = (ForElementType<AActor_*>)&local_780;
          if (local_780.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar53 = local_780.SecondaryData;
          }
          local_378 = local_378 + 1;
          *(AActor **)((longlong)FVar53 + lVar30 * 8) = local_b40;
        }
      }
LAB_147b1aedc:
      TStack_908.UnvisitedBitMask = TStack_908.UnvisitedBitMask & ~TStack_908._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_908);
    } while( true );
  }
  goto LAB_147b1b03b;
LAB_147b1aefb:
  if (5 < (byte)LogDemo._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
  }
LAB_147b1af29:
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UDemoNetDriver_PrioritizeRemoveActors");
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&DAT_1552037ac,"UDemoNetDriver_PrioritizeRemoveActors",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
               ,0x832);
    FCpuProfilerTrace::OutputBeginEvent(DAT_1552037ac);
  }
  uVar24 = local_378;
  uVar56 = (ulonglong)(int)local_378;
  FVar53 = (ForElementType<AActor_*>)&local_780;
  if (local_780.SecondaryData != (ForElementType<AActor_*>)0x0) {
    FVar53 = local_780.SecondaryData;
  }
  FVar3 = (ForElementType<AActor_*>)((longlong)FVar53 + uVar56 * 8);
  while( true ) {
    if ((uint)uVar56 != uVar24) {
      local_b30 = 0;
      `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_b30);
    }
    if (FVar53 == FVar3) break;
    (**(code **)(*(longlong *)this + 0x3d0))(this,*(undefined8 *)FVar53);
    uVar56 = (ulonglong)local_378;
    FVar53 = (ForElementType<AActor_*>)((longlong)FVar53 + 8);
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_780.SecondaryData != (ForElementType<AActor_*>)0x0) {
    FMemory::Free((void *)local_780.SecondaryData);
  }
  if (local_370.SecondaryData != (ForElementType<FReplayViewer>)0x0) {
    FMemory::Free((void *)local_370.SecondaryData);
  }
  uVar56 = (ulonglong)_tls_index;
  fVar64 = __real_3f000000;
  FVar47 = local_b28;
  dVar69 = local_a48;
LAB_147b1b03b:
  iVar25 = (this->PrioritizedActors).ArrayNum;
  if (local_b2c == 0) {
    iVar25 = iVar25 - local_b20;
    iVar23 = local_b20;
  }
  else if (((double)local_ad0 <= 0.0) ||
          (QueryPerformanceCounter(&local_960),
          ((double)local_960.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar68) - local_ad8
          <= local_ae0)) {
    `UDemoNetDriver::TickDemoRecordFrame'::__l27::<lambda_2>::operator()(&local_888);
    iVar23 = (this->PrioritizedActors).ArrayNum;
  }
  else {
    iVar23 = local_b20;
    if (5 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      iVar23 = local_b20;
    }
  }
  if ((local_a98 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_a98 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_a98 & 4) != 0) {
    FThreadStats::AddMessage(local_aa0,CycleScopeEnd);
  }
  local_a98 = 0;
  if ((this->ReplayHelper).bHasLevelStreamingFixes == false) {
    if (this->bPrioritizeActors != '\0') {
      AlgoImpl::
      IntroSortInternal<UDemoNetDriver::FDemoActorPriority,int,FIdentityFunctor,TDereferenceWrapper<UDemoNetDriver::FDemoActorPriority,_UDemoNetDriver::TickDemoRecordFrame_::__l193::<lambda_4>_>_>
                ((FDemoActorPriority *)(this->PrioritizedActors).AllocatorInstance.Data,
                 (this->PrioritizedActors).ArrayNum,local_b2d,(<lambda_4> *)&local_b2d);
    }
  }
  else {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UDemoNetDriver_PrioritizeLevelSort");
    bVar21 = -1 < CpuChannel->Enabled;
    if (bVar21) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2130,"UDemoNetDriver_PrioritizeLevelSort",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                 ,0x852);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2130);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar56 * 8) + 0x9d4c) <
         ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
      if (StatPtr_STAT_ReplayLevelSorting ==
          (FThreadSafeStaticStat<_private:_void___cdecl_UDemoNetDriver::TickDemoRecordFrame(float)_::_168_::FStat_STAT_ReplayLevelSorting>
           )0x0) {
        pFVar34 = ::FName::FName(&local_840,"STAT_ReplayLevelSorting");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayLevelSorting,*pFVar34,
                   L"Replay actor level sorting time.","STATGROUP_Net","STATCAT_Advanced",L"Net",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS6);
    }
    FVar35 = StatPtr_STAT_ReplayLevelSorting;
    if (StatPtr_STAT_ReplayLevelSorting ==
        (FThreadSafeStaticStat<_private:_void___cdecl_UDemoNetDriver::TickDemoRecordFrame(float)_::_168_::FStat_STAT_ReplayLevelSorting>
         )0x0) {
      pFVar34 = ::FName::FName(&local_848,"STAT_ReplayLevelSorting");
      FVar35 = (FThreadSafeStaticStat<_private:_void___cdecl_UDemoNetDriver::TickDemoRecordFrame(float)_::_168_::FStat_STAT_ReplayLevelSorting>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayLevelSorting,*pFVar34,
                            L"Replay actor level sorting time.","STATGROUP_Net","STATCAT_Advanced",
                            L"Net",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar42 = *(FName *)FVar35;
    local_a20.ComparisonIndex.Value = 0;
    local_a20.Number = 0;
    bVar13 = false;
    bVar63 = false;
    if ((FVar42.ComparisonIndex.Value.Value == 0) && (FVar42.Number == 0)) {
LAB_147b1b2af:
      bVar22 = false;
      FVar42 = local_a20;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_aa8.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_aa8._s_0,(char *)*(FName *)((longlong)FVar35 + 0x10));
        bVar13 = false;
        bVar63 = true;
        if (-1 < CpuChannel->Enabled) {
          local_a40.ComparisonIndex.Value = FVar42.ComparisonIndex.Value.Value;
          local_a40.Number = FVar42.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_a40,(wchar_t *)*(FName *)((longlong)FVar35 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                     ,0x853);
          bVar13 = true;
          bVar63 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_147b1b2af;
      local_b28 = FVar42;
      FThreadStats::AddMessage(FVar42,CycleScopeStart);
      bVar13 = false;
      bVar22 = true;
    }
    if ((this->bPrioritizeActors != '\0') && (5 < (byte)LogDemo._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    AlgoImpl::
    IntroSortInternal<UDemoNetDriver::FDemoActorPriority,int,FIdentityFunctor,TDereferenceWrapper<UDemoNetDriver::FDemoActorPriority,_UDemoNetDriver::TickDemoRecordFrame_::__l168::<lambda_3>_>_>
              ((FDemoActorPriority *)(this->PrioritizedActors).AllocatorInstance.Data,
               (this->PrioritizedActors).ArrayNum,local_b2e,(<lambda_3> *)&local_b2e);
    BuildSortedLevelPriorityOnLevels(this,&this->PrioritizedActors,&this->LevelIntervals);
    if (bVar63) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar22) {
      FThreadStats::AddMessage(FVar42,CycleScopeEnd);
    }
    if (bVar21) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  QueryPerformanceCounter(&local_958);
  dVar67 = ((double)local_958.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000) - dVar69;
  dVar68 = dVar67 * __real_408f400000000000;
  if (__CsvProfilerStat2156 == false) {
    FCsvProfilerTrace::OutputInlineStat("DemoPrioritizeTime",_GCsvCategory_Demo.Index);
    __CsvProfilerStat2156 = true;
  }
  FCsvProfiler::RecordCustomStat("DemoPrioritizeTime",_GCsvCategory_Demo.Index,(float)dVar68,Set);
  if (__CsvProfilerStat2157 == false) {
    FCsvProfilerTrace::OutputInlineStat("DemoNumActiveObjects",_GCsvCategory_Demo.Index);
    __CsvProfilerStat2157 = true;
  }
  FCsvProfiler::RecordCustomStat("DemoNumActiveObjects",_GCsvCategory_Demo.Index,local_b1c,Set);
  if (__CsvProfilerStat2158 == false) {
    FCsvProfilerTrace::OutputInlineStat("DemoPrioritizedActors",_GCsvCategory_Demo.Index);
    __CsvProfilerStat2158 = true;
  }
  FCsvProfiler::RecordCustomStat("DemoPrioritizedActors",_GCsvCategory_Demo.Index,iVar25,Set);
  if (__CsvProfilerStat2159 == false) {
    FCsvProfilerTrace::OutputInlineStat("DemoPrioritizedDestInfos",_GCsvCategory_Demo.Index);
    __CsvProfilerStat2159 = true;
  }
  FCsvProfiler::RecordCustomStat("DemoPrioritizedDestInfos",_GCsvCategory_Demo.Index,iVar23,Set);
  local_b2c = (this->PrioritizedActors).ArrayNum;
  if (((0.0 < (double)FVar47) && ((double)FVar47 < dVar67)) &&
     (pFVar9 = (this->BudgetLogHelper).Ptr, 4 < (byte)LogDemo._0_1_)) {
    if (DemoNetDriverRecordingPrivate::WarningTimeInterval == 0.0) {
      ::FString::PrintfImpl
                (&local_928,
                 L"Exceeded maximum desired recording time (during Prioritization).  Max: %.3fms, TimeSpent: %.3fms, Active Actors: %d, Prioritized Actors: %d"
                );
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_FDemoBudgetLogHelper::MarkFrameOverBudget<float,float,int,int>(FDemoBudgetLogHelper::EBudgetCategory,UE::Core::Private::FormatStringSan::TCheckedFormatStringPrivate<wchar_t,float,float,int,int>,float,float,int,int)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    else {
      if (pFVar9->bOverBudgetThisFrame == false) {
        pFVar9->NumFramesOverBudget = pFVar9->NumFramesOverBudget + 1;
        pFVar9->bOverBudgetThisFrame = true;
        if (pFVar9->FirstWarningTime == 0.0) {
          dVar68 = FWindowsPlatformTime::Seconds();
          pFVar9->FirstWarningTime = dVar68;
        }
      }
      pFVar9->NumFramesOverBudgetByCategory[0] = pFVar9->NumFramesOverBudgetByCategory[0] + 1;
      if (1 < pFVar9->LogSamplesByBudget[0].Data.ArrayNum) goto LAB_147b1b5ec;
      ::FString::PrintfImpl
                (&local_af0,
                 L"Exceeded maximum desired recording time (during Prioritization).  Max: %.3fms, TimeSpent: %.3fms, Active Actors: %d, Prioritized Actors: %d"
                );
      pFVar46 = pFVar9->LogSamplesByBudget;
      local_928.Data.AllocatorInstance.Data = local_af0.Data.AllocatorInstance.Data;
      if (pFVar46 != &local_af0) {
        pFVar62 = (pFVar46->Data).AllocatorInstance.Data;
        if (pFVar62 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar62);
        }
        local_928.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar46->Data).AllocatorInstance.Data = local_af0.Data.AllocatorInstance.Data;
        pFVar9->LogSamplesByBudget[0].Data.ArrayNum = local_af0.Data.ArrayNum;
        pFVar9->LogSamplesByBudget[0].Data.ArrayMax = local_af0.Data.ArrayMax;
        local_af0.Data.ArrayNum = 0;
        local_af0.Data.ArrayMax = 0;
        local_af0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
    }
    if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_928.Data.AllocatorInstance.Data);
    }
  }
LAB_147b1b5ec:
  pTVar16 = CVarDemoMinRecordHz.Ref;
  bVar21 = IsInParallelGameThread();
  if ((bVar21) || (bVar21 = IsInGameThread(), bVar21)) {
    lVar30 = 0;
  }
  else {
    lVar30 = 4;
  }
  pTVar15 = CVarDemoRecordHz.Ref;
  uVar56 = 0;
  fVar79 = *(float *)((longlong)pTVar16->ShadowedValue + lVar30);
  bVar21 = IsInParallelGameThread();
  if (bVar21) {
LAB_147b1b63d:
    uVar36 = uVar56;
  }
  else {
    bVar21 = IsInGameThread();
    uVar36 = 4;
    if (bVar21) goto LAB_147b1b63d;
  }
  pTVar17 = CVarUseAdaptiveReplayUpdateFrequency.Ref;
  fVar80 = *(float *)((longlong)pTVar15->ShadowedValue + uVar36);
  fVar78 = fVar79;
  if (fVar80 < fVar79) {
    fVar78 = fVar80;
    fVar80 = fVar79;
  }
  dVar68 = (double)this->RecordDestructionInfoReplicationTimeSlice * (double)FVar47;
  bVar21 = IsInParallelGameThread();
  if (bVar21) {
LAB_147b1b682:
    uVar36 = uVar56;
  }
  else {
    bVar21 = IsInGameThread();
    uVar36 = 4;
    if (bVar21) goto LAB_147b1b682;
  }
  local_9e8.bUseAdapativeNetFrequency = 0 < *(int *)((longlong)pTVar17->ShadowedValue + uVar36);
  local_9e8.bDoFindActorChannel = (bool)(local_b48 ^ 1);
  local_9e8.bDoCheckDormancy = local_b08 != 0;
  local_9e8.Connection = local_b00;
  local_9e8.TotalDestructionInfoRecordTime = 0.0;
  local_9e8.ServerTickTime = local_b04;
  local_9e8.NumActorsReplicated = 0;
  local_9e8.NumDestructionInfosReplicated = 0;
  local_9e8.MinRecordHz = fVar78;
  local_9e8.MaxRecordHz = fVar80;
  local_9e8.ReplicationStartTimeSeconds = dVar69;
  local_9e8.TimeLimitSeconds = (double)FVar47;
  local_9e8.DestructionInfoTimeLimitSeconds = dVar68;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
    if (StatPtr_STAT_ReplayReplicateActors ==
        (FThreadSafeStaticStat<_private:_void___cdecl_UDemoNetDriver::TickDemoRecordFrame(float)_::_216_::FStat_STAT_ReplayReplicateActors>
         )0x0) {
      pFVar34 = ::FName::FName(&local_858,"STAT_ReplayReplicateActors");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayReplicateActors,*pFVar34,
                 L"Replay actor replication time","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS7);
  }
  FVar37 = StatPtr_STAT_ReplayReplicateActors;
  if (StatPtr_STAT_ReplayReplicateActors ==
      (FThreadSafeStaticStat<_private:_void___cdecl_UDemoNetDriver::TickDemoRecordFrame(float)_::_216_::FStat_STAT_ReplayReplicateActors>
       )0x0) {
    pFVar34 = ::FName::FName(&local_850,"STAT_ReplayReplicateActors");
    FVar37 = (FThreadSafeStaticStat<_private:_void___cdecl_UDemoNetDriver::TickDemoRecordFrame(float)_::_216_::FStat_STAT_ReplayReplicateActors>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayReplicateActors,*pFVar34,
                          L"Replay actor replication time","STATGROUP_Net","STATCAT_Advanced",L"Net"
                          ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar47 = *(FName *)FVar37;
  bVar21 = false;
  bVar13 = false;
  local_a30.ComparisonIndex.Value = 0;
  local_a30.Number = 0;
  bVar63 = false;
  bVar22 = false;
  if ((FVar47.ComparisonIndex.Value.Value == 0) && (FVar47.Number == 0)) {
LAB_147b1b864:
    bVar13 = bVar22;
    bVar21 = bVar63;
    bVar63 = false;
    FVar47 = local_a30;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_aa4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_aa4._s_0,(char *)*(FName *)((longlong)FVar37 + 0x10));
      bVar21 = false;
      bVar13 = true;
      bVar63 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a38.ComparisonIndex.Value = FVar47.ComparisonIndex.Value.Value;
        local_a38.Number = FVar47.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a38,(wchar_t *)*(FName *)((longlong)FVar37 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                   ,0x894);
        bVar21 = true;
        bVar13 = true;
        bVar63 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147b1b864;
    local_b28 = FVar47;
    FThreadStats::AddMessage(FVar47,CycleScopeStart);
    bVar63 = true;
  }
  if (__CsvProfilerStat2197 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("ReplayReplicateActors");
    __CsvProfilerStat2197 = true;
  }
  FCsvProfiler::BeginExclusiveStat("ReplayReplicateActors","CSV_ReplayReplicateActors");
  if ((this->ReplayHelper).bHasLevelStreamingFixes == false) {
    uVar24 = (this->PrioritizedActors).ArrayNum;
    uVar54 = 0;
    pFVar62 = (this->PrioritizedActors).AllocatorInstance.Data;
    uVar36 = uVar56;
    if (uVar24 != 0) {
      do {
        bVar22 = ReplicatePrioritizedActor
                           (this,(FActorPriority *)(pFVar62 + uVar54 * 0x28),&local_9e8);
        if (!bVar22) break;
        uVar55 = (int)uVar54 + 1;
        uVar54 = (ulonglong)uVar55;
      } while (uVar55 < uVar24);
      goto LAB_147b1b975;
    }
  }
  else {
    local_b1c = (this->LevelIntervals).ArrayNum;
    uVar56 = (ulonglong)(int)local_b1c;
    FVar42 = (FName)(this->PrioritizedActors).AllocatorInstance.Data;
    pFVar62 = (this->LevelIntervals).AllocatorInstance.Data;
    pFVar59 = pFVar62 + uVar56 * 0x10;
    local_b28 = FVar42;
    while( true ) {
      FVar41 = FVar42;
      if ((this->LevelIntervals).ArrayNum != (int)uVar56) {
        local_b2f = 0;
        `TCheckedPointerIterator<UDemoNetDriver::FLevelnterval,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_b2f);
        FVar41 = local_b28;
      }
      if (pFVar62 == pFVar59) break;
      iVar25 = *(int *)(pFVar62 + 4);
      uVar56 = 0;
      uVar24 = *(uint *)(pFVar62 + 8);
      FVar42 = FVar41;
      if (uVar24 != 0) {
        do {
          bVar22 = ReplicatePrioritizedActor
                             (this,(FActorPriority *)
                                   ((longlong)FVar41 + (longlong)iVar25 * 0x28 + uVar56 * 0x28),
                              &local_9e8);
          if (!bVar22) goto LAB_147b1b975;
          uVar55 = (int)uVar56 + 1;
          uVar56 = (ulonglong)uVar55;
          FVar42 = local_b28;
        } while (uVar55 < uVar24);
      }
      uVar56 = (ulonglong)local_b1c;
      pFVar62 = pFVar62 + 0x10;
    }
LAB_147b1b975:
    uVar56 = (ulonglong)local_9e8._12_8_ >> 0x20;
    uVar36 = local_9e8._12_8_ & 0xffffffff;
  }
  FCsvProfiler::EndExclusiveStat("ReplayReplicateActors");
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar63) {
    FThreadStats::AddMessage(FVar47,CycleScopeEnd);
  }
  if (__CsvProfilerStat2218 == false) {
    FCsvProfilerTrace::OutputInlineStat("DemoNumReplicatedActors",_GCsvCategory_Demo.Index);
    __CsvProfilerStat2218 = true;
  }
  FCsvProfiler::RecordCustomStat("DemoNumReplicatedActors",_GCsvCategory_Demo.Index,(int)uVar36,Set)
  ;
  if (__CsvProfilerStat2219 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("DemoNumReplicatedDestructionInfos",_GCsvCategory_Demo.Index);
    __CsvProfilerStat2219 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("DemoNumReplicatedDestructionInfos",_GCsvCategory_Demo.Index,(int)uVar56,Set);
  FReplayHelper::FlushNetChecked((UNetConnection *)local_b00);
  fVar79 = (this->ReplayHelper).DemoCurrentTime;
  if ((*(int *)&this->field_0x110 < 1) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  FReplayHelper::WriteDemoFrame
            (&this->ReplayHelper,(UNetConnection *)**(undefined8 **)&this->field_0x108,local_950,
             &(this->ReplayHelper).QueuedDemoPackets,fVar79,None);
  pTVar16 = CVarDemoDecreaseRepPrioritizeThreshold.Ref;
  TVar77 = TVar14;
  if (local_b2c != 0) {
    TVar77 = (TAtomic<float>)((float)((int)uVar36 + (int)uVar56) / (float)local_b2c);
  }
  if (this->MaxDesiredRecordTimeMS <= 0.0) goto LAB_147b1bc80;
  bVar21 = IsInParallelGameThread();
  if ((bVar21) || (bVar21 = IsInGameThread(), bVar21)) {
    lVar30 = 0;
  }
  else {
    lVar30 = 4;
  }
  pTVar15 = CVarDemoIncreaseRepPrioritizeThreshold.Ref;
  lVar32 = 4;
  fVar79 = *(float *)((longlong)pTVar16->ShadowedValue + lVar30);
  bVar21 = IsInParallelGameThread();
  if ((bVar21) || (bVar21 = IsInGameThread(), bVar21)) {
    lVar30 = 0;
  }
  else {
    lVar30 = 4;
  }
  pTVar16 = CVarDemoMinimumRepPrioritizeTime.Ref;
  fVar80 = *(float *)((longlong)pTVar15->ShadowedValue + lVar30);
  fVar78 = fVar79;
  if (fVar80 < fVar79) {
    fVar78 = fVar80;
    fVar80 = fVar79;
  }
  bVar21 = IsInParallelGameThread();
  if ((bVar21) || (bVar21 = IsInGameThread(), bVar21)) {
    lVar30 = 0;
  }
  else {
    lVar30 = 4;
  }
  pTVar15 = CVarDemoMaximumRepPrioritizeTime.Ref;
  fVar79 = *(float *)((longlong)pTVar16->ShadowedValue + lVar30);
  bVar21 = IsInParallelGameThread();
  if ((bVar21) || (bVar21 = IsInGameThread(), bVar21)) {
    lVar32 = 0;
  }
  fVar6 = *(float *)((longlong)pTVar15->ShadowedValue + lVar32);
  fVar66 = fVar6;
  if (fVar6 < fVar79) {
    fVar66 = fVar79;
    fVar79 = fVar6;
  }
  dVar69 = (double)fVar79;
  if (__real_3ff0000000000000 <= (double)fVar79) {
    dVar69 = __real_3ff0000000000000;
  }
  if (dVar69 <= __real_3fb999999999999a) {
    dVar69 = __real_3fb999999999999a;
  }
  dVar68 = (double)fVar66;
  if (__real_3ff0000000000000 <= (double)fVar66) {
    dVar68 = __real_3ff0000000000000;
  }
  if (dVar68 <= __real_3fb999999999999a) {
    dVar68 = __real_3fb999999999999a;
  }
  if ((float)TVar77 <= fVar80) {
    if (((float)TVar77 < fVar78) &&
       (this->RecordBuildConsiderAndPrioritizeTimeSlice =
             ((float)TVar14 - (float)TVar77) * fVar64 *
             this->RecordBuildConsiderAndPrioritizeTimeSlice, 5 < (byte)LogDemo._0_1_)) {
      pFVar40 = &::LOG_Static;
      goto LAB_147b1bc56;
    }
  }
  else {
    this->RecordBuildConsiderAndPrioritizeTimeSlice =
         this->RecordBuildConsiderAndPrioritizeTimeSlice + __real_3dcccccd;
    if (5 < (byte)LogDemo._0_1_) {
      pFVar40 = &::LOG_Static;
LAB_147b1bc56:
      UE::Logging::Private::BasicLog<6>(pFVar40,(FLogCategoryBase *)&LogDemo);
    }
  }
  fVar64 = (float)dVar68;
  if (this->RecordBuildConsiderAndPrioritizeTimeSlice <= (float)dVar68) {
    fVar64 = this->RecordBuildConsiderAndPrioritizeTimeSlice;
  }
  if (fVar64 <= (float)dVar69) {
    fVar64 = (float)dVar69;
  }
  this->RecordBuildConsiderAndPrioritizeTimeSlice = fVar64;
LAB_147b1bc80:
  LOCK();
  this->LastReplayFrameFidelity = TVar77;
  UNLOCK();
  return;
}

// TickDispatch @ 147b1bf10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::TickDispatch(UDemoNetDriver *this,float param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  float fVar3;
  int iVar4;
  UWorld *pUVar5;
  FScriptContainerElement *pFVar6;
  INetworkReplayStreamer *pIVar7;
  TReferenceControllerBase<1> *pTVar8;
  ULevelStreaming *this_00;
  ULevel *this_01;
  code *pcVar9;
  float fVar10;
  TConsoleVariableData<float> *pTVar11;
  TConsoleVariableData<float> *pTVar12;
  bool bVar13;
  char cVar14;
  EConnectionState EVar15;
  uint uVar16;
  UEnum *pUVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  UPackage *this_02;
  AWorldSettings *pAVar20;
  UClass *pUVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  undefined8 *puVar24;
  float fVar25;
  float fVar26;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  FLLMScope local_res20 [2];
  undefined1 local_f8 [8];
  FWeakObjectPtr local_f0;
  UEnum *local_e8;
  FString local_e0;
  longlong local_d0;
  undefined1 local_c8 [8];
  FWeakObjectPtr local_c0;
  UEnum *local_b8;
  FString local_b0;
  longlong local_a0;
  UEnum *local_98;
  UEnum *local_90;
  FMemScope local_88;
  FScopedLevelCollectionContextSwitch local_80 [4];
  
  FLLMScope::FLLMScope(local_res20,Replays,false,None,Default,true);
  FMemScope::FMemScope(&local_88,Replays,true);
  pUVar5 = *(UWorld **)&this->field_0x1b8;
  if (pUVar5 != (UWorld *)0x0) {
    pFVar6 = (pUVar5->LevelCollections).AllocatorInstance.Data;
    for (pFVar22 = pFVar6; pFVar22 != pFVar6 + (longlong)(pUVar5->LevelCollections).ArrayNum * 0x78;
        pFVar22 = pFVar22 + 0x78) {
      if (*(UDemoNetDriver **)(pFVar22 + 0x18) == this) {
        lVar19 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar22 - (longlong)pFVar6)
                        ,8) + ((longlong)pFVar22 - (longlong)pFVar6);
        iVar23 = (int)(lVar19 >> 6) - (int)(lVar19 >> 0x3f);
        goto LAB_147b1bf98;
      }
    }
  }
  iVar23 = -1;
LAB_147b1bf98:
  FScopedLevelCollectionContextSwitch::FScopedLevelCollectionContextSwitch(local_80,iVar23,pUVar5);
  UNetDriver::TickDispatch((UNetDriver *)this,param_1);
  if ((((this->ReplayHelper).bIsLoadingCheckpoint != false) ||
      ((*(UNetConnection **)&this->field_0x100 != (UNetConnection *)0x0 &&
       (EVar15 = UNetConnection::GetConnectionState(*(UNetConnection **)&this->field_0x100),
       EVar15 != USOCK_Closed)))) && (this->bIsWaitingForStream == '\0')) {
    pIVar7 = (this->ReplayStreamer).Object;
    pTVar8 = (this->ReplayStreamer).SharedReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar7 == (INetworkReplayStreamer *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    cVar14 = (**(code **)(pIVar7->_padding_ + 0x170))(pIVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    if (cVar14 == '\x01') {
      pUVar17 = StaticEnum<enum_EReplayResult>();
      local_f8 = (undefined1  [8])0x8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar17);
      }
      local_f0.ObjectIndex = 0;
      local_f0.ObjectSerialNumber = 0;
      local_98 = pUVar17;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar17);
      }
      FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)&local_98);
      local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.Data.ArrayNum = 0;
      local_e0.Data.ArrayMax = 0;
      local_d0 = 0;
      local_e8 = pUVar17;
      pwVar18 = ::LexToString(StreamerError);
      ::FString::operator=(&local_e0,pwVar18);
      FReplayHelper::NotifyReplayError(&this->ReplayHelper,(TNetResult<EReplayResult> *)local_f8);
      if (local_d0 != 0) {
        (**(code **)(local_d0 + -0x10))(local_d0 + -0x10);
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
    }
    else {
      pTVar8 = (this->ReplayStreamer).SharedReferenceCount.ReferenceController;
      pIVar7 = (this->ReplayStreamer).Object;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pIVar7 == (INetworkReplayStreamer *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar19 = (**(code **)(pIVar7->_padding_ + 0x20))(pIVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      if (lVar19 == 0) {
        if (1 < (byte)LogDemo._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
        }
        pUVar17 = StaticEnum<enum_EReplayResult>();
        local_c8 = (undefined1  [8])0xa;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar17);
        }
        local_c0.ObjectIndex = 0;
        local_c0.ObjectSerialNumber = 0;
        local_90 = pUVar17;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar17);
        }
        FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_90);
        local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b0.Data.ArrayNum = 0;
        local_b0.Data.ArrayMax = 0;
        local_a0 = 0;
        local_b8 = pUVar17;
        pwVar18 = ::LexToString(MissingArchive);
        ::FString::operator=(&local_b0,pwVar18);
        FReplayHelper::NotifyReplayError(&this->ReplayHelper,(TNetResult<EReplayResult> *)local_c8);
        if (local_a0 != 0) {
          (**(code **)(local_a0 + -0x10))(local_a0 + -0x10);
        }
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
      else {
        if ((this->ReplayHelper).bHasLevelStreamingFixes == false) {
          lVar19 = *(longlong *)&this->field_0x1b8;
          puVar24 = *(undefined8 **)(lVar19 + 0x90);
          iVar23 = *(int *)(lVar19 + 0x98);
          puVar2 = puVar24 + iVar23;
          do {
            if (*(int *)(lVar19 + 0x98) != iVar23) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(local_res8);
            }
            if (puVar24 == puVar2) break;
            this_00 = (ULevelStreaming *)*puVar24;
            if ((this_00 != (ULevelStreaming *)0x0) &&
               (cVar14 = (**(code **)(this_00->_padding_ + 0x2e8))(this_00), cVar14 != '\0')) {
              this_01 = (this_00->LoadedLevel).field0_0x0.DebugPtr;
              if (this_01 == (ULevel *)0x0) goto LAB_147b1c54e;
              this_02 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_01);
              bVar13 = UPackage::IsFullyLoaded(this_02);
              if ((!bVar13) || (bVar13 = ULevelStreaming::IsLevelVisible(this_00), !bVar13))
              goto LAB_147b1c54e;
            }
            puVar24 = puVar24 + 1;
          } while( true );
        }
        pTVar11 = CVarDemoTimeDilation.Ref;
        bVar13 = IsInParallelGameThread();
        if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
           (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007945>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar12 = CVarDemoTimeDilation.Ref;
        if (0.0 < pTVar11->ShadowedValue[0] || pTVar11->ShadowedValue[0] == 0.0) {
          bVar13 = IsInParallelGameThread();
          if (((!bVar13) && (bVar13 = IsInGameThread(), !bVar13)) &&
             (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<6409875433831007945>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                  ,0x6c9,"GetShadowIndex() == 0"), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          fVar3 = pTVar12->ShadowedValue[0];
          pAVar20 = UWorld::GetWorldSettings(*(UWorld **)&this->field_0x1b8,false,true);
          pAVar20->DemoPlayTimeDilation = fVar3;
        }
        fVar25 = FReplayHelper::GetClampedDeltaSeconds(*(UWorld **)&this->field_0x1b8,param_1);
        fVar10 = __real_3f800000;
        fVar3 = __real_38d1b717;
        pFVar22 = (this->SpectatorControllers).AllocatorInstance.Data;
        iVar23 = (this->SpectatorControllers).ArrayNum;
        pFVar6 = pFVar22 + (longlong)iVar23 * 8;
        while( true ) {
          if ((this->SpectatorControllers).ArrayNum != iVar23) {
            `TCheckedPointerIterator<TObjectPtr<APlayerController>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res18);
          }
          if (pFVar22 == pFVar6) break;
          lVar19 = *(longlong *)pFVar22;
          if (lVar19 != 0) {
            pAVar20 = UWorld::GetWorldSettings(*(UWorld **)&this->field_0x1b8,false,true);
            fVar26 = fVar10;
            if (fVar3 < pAVar20->DemoPlayTimeDilation) {
              pAVar20 = UWorld::GetWorldSettings(*(UWorld **)&this->field_0x1b8,false,true);
              fVar26 = fVar10 / pAVar20->DemoPlayTimeDilation;
            }
            *(float *)(lVar19 + 0x68) = fVar26;
            if (*(longlong *)(lVar19 + 0x6f8) != 0) {
              *(float *)(*(longlong *)(lVar19 + 0x6f8) + 0x68) = fVar26;
              pbVar1 = (byte *)(*(longlong *)(lVar19 + 0x6f8) + 0x32);
              *pbVar1 = *pbVar1 | 1;
              lVar19 = (**(code **)(**(longlong **)(lVar19 + 0x6f8) + 0x760))();
              if (lVar19 != 0) {
                pUVar21 = Z_Construct_UClass_USpectatorPawnMovement_NoRegister();
                iVar4 = (int)pUVar21->_padding_;
                if ((iVar4 <= *(int *)(*(longlong *)(lVar19 + 0x10) + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
                    &pUVar21->_padding_)) {
                  *(byte *)(lVar19 + 0x42) = *(byte *)(lVar19 + 0x42) | 1;
                }
              }
            }
          }
          pFVar22 = pFVar22 + 8;
        }
        TickDemoPlayback(this,fVar25);
        fVar3 = this->LastProcessedPacketTime;
        uVar16 = FEngineVersionBase::GetChangelist
                           ((FEngineVersionBase *)
                            &(this->ReplayHelper).PlaybackDemoHeader.EngineVersion);
        ConditionallyDisplayBurnInTime(uVar16,fVar3);
      }
    }
  }
LAB_147b1c54e:
  FScopedLevelCollectionContextSwitch::~FScopedLevelCollectionContextSwitch(local_80);
  FMemScope::~FMemScope(&local_88);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// TickFlush @ 147b1c590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::TickFlush(UDemoNetDriver *this,float param_1)

{
  bool bVar1;
  
  bVar1 = ShouldTickFlushAsyncEndOfFrame(this);
  if (!bVar1) {
    TickFlushInternal(this,param_1);
  }
  return;
}

// TickFlushAsyncEndOfFrame @ 147b1c5d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::TickFlushAsyncEndOfFrame(UDemoNetDriver *this,float param_1)

{
  bool bVar1;
  
  bVar1 = ShouldTickFlushAsyncEndOfFrame(this);
  if (bVar1) {
    TickFlushInternal(this,param_1);
    this->field_0x328 = 0;
  }
  return;
}

// TickFlushInternal @ 147b1c610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDemoNetDriver::TickFlushInternal(UDemoNetDriver *this,float param_1)

{
  float fVar1;
  UWorld *pUVar2;
  FScriptContainerElement *pFVar3;
  INetworkReplayStreamer *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  UEnum *pUVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  FName *pFVar16;
  TStatId TVar17;
  FEngineVersion *this_00;
  FScriptContainerElement *pFVar18;
  double dVar19;
  double dVar20;
  FLLMScope local_res8 [2];
  LARGE_INTEGER local_res18;
  UEnum *local_res20;
  FName local_148;
  byte local_140;
  undefined1 local_138 [8];
  FWeakObjectPtr local_130;
  UEnum *local_128;
  FString local_120;
  longlong local_110;
  undefined1 local_108 [8];
  FWeakObjectPtr local_100;
  UEnum *local_f8;
  FString local_f0;
  longlong local_e0;
  UEnum *local_d8;
  LARGE_INTEGER local_d0;
  FMemScope local_c8 [2];
  FSourceLocation local_b8;
  FName local_98;
  FName local_90;
  FScopedLevelCollectionContextSwitch local_88 [6];
  
  FLLMScope::FLLMScope(local_res8,Replays,false,None,Default,true);
  FMemScope::FMemScope(local_c8,Replays,true);
  if (__CsvProfilerStat1332 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("DemoRecording");
    __CsvProfilerStat1332 = true;
  }
  FCsvProfiler::BeginExclusiveStat("DemoRecording","CSV_DemoRecording");
  GTickFlushDemoDriverTimeSeconds = 0.0;
  QueryPerformanceCounter(&local_res18);
  pUVar2 = *(UWorld **)&this->field_0x1b8;
  dVar7 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if (pUVar2 != (UWorld *)0x0) {
    pFVar3 = (pUVar2->LevelCollections).AllocatorInstance.Data;
    for (pFVar18 = pFVar3; pFVar18 != pFVar3 + (longlong)(pUVar2->LevelCollections).ArrayNum * 0x78;
        pFVar18 = pFVar18 + 0x78) {
      if (*(UDemoNetDriver **)(pFVar18 + 0x18) == this) {
        lVar15 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar18 - (longlong)pFVar3)
                        ,8) + ((longlong)pFVar18 - (longlong)pFVar3);
        iVar12 = (int)(lVar15 >> 6) - (int)(lVar15 >> 0x3f);
        goto LAB_147b1c6fc;
      }
    }
  }
  iVar12 = -1;
LAB_147b1c6fc:
  FScopedLevelCollectionContextSwitch::FScopedLevelCollectionContextSwitch(local_88,iVar12,pUVar2);
  UNetDriver::TickFlush((UNetDriver *)this,param_1);
  bVar9 = IsRecording(this);
  if ((bVar9) && (this->bIsWaitingForStream == '\0')) {
    pIVar4 = (this->ReplayStreamer).Object;
    pTVar5 = (this->ReplayStreamer).SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pIVar4 == (INetworkReplayStreamer *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    cVar10 = (**(code **)(pIVar4->_padding_ + 0x170))(pIVar4,&(this->ReplayHelper).ResultManager);
    if (cVar10 == '\x01') {
      pUVar13 = StaticEnum<enum_EReplayResult>();
      local_138 = (undefined1  [8])0x8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      local_130.ObjectIndex = 0;
      local_130.ObjectSerialNumber = 0;
      local_res20 = pUVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UEnum *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      FWeakObjectPtr::operator=(&local_130,(FObjectPtr)&local_res20);
      local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_120.Data.ArrayNum = 0;
      local_120.Data.ArrayMax = 0;
      local_110 = 0;
      local_128 = pUVar13;
      pwVar14 = ::LexToString(StreamerError);
      ::FString::operator=(&local_120,pwVar14);
      FReplayHelper::NotifyReplayError(&this->ReplayHelper,(TNetResult<EReplayResult> *)local_138);
      if (local_110 != 0) {
        (**(code **)(local_110 + -0x10))(local_110 + -0x10);
      }
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
    else if ((this->ReplayHelper).bPauseRecording == false) {
      if ((pIVar4 == (INetworkReplayStreamer *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar15 = (**(code **)(pIVar4->_padding_ + 0x20))(pIVar4);
      if (lVar15 == 0) {
        if (1 < (byte)LogDemo._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
        }
        pUVar13 = StaticEnum<enum_EReplayResult>();
        local_108 = (undefined1  [8])0xa;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        local_100.ObjectIndex = 0;
        local_100.ObjectSerialNumber = 0;
        local_d8 = pUVar13;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_d8);
        local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f0.Data.ArrayNum = 0;
        local_f0.Data.ArrayMax = 0;
        local_e0 = 0;
        local_f8 = pUVar13;
        pwVar14 = ::LexToString(MissingArchive);
        ::FString::operator=(&local_f0,pwVar14);
        FReplayHelper::NotifyReplayError(&this->ReplayHelper,(TNetResult<EReplayResult> *)local_108)
        ;
        if (local_e0 != 0) {
          (**(code **)(local_e0 + -0x10))(local_e0 + -0x10);
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
      else {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          if (StatPtr_STAT_ReplayRecordTime ==
              (FThreadSafeStaticStat<_private:_void___cdecl_UDemoNetDriver::TickFlushInternal(float)_::_2_::FStat_STAT_ReplayRecordTime>
               )0x0) {
            pFVar16 = ::FName::FName(&local_98,"STAT_ReplayRecordTime");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayRecordTime,*pFVar16,
                       L"Net replay record time","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true
                       ,ST_int64,true,false,MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS0);
        }
        TVar17.StatIdPtr = (TStatIdData *)StatPtr_STAT_ReplayRecordTime;
        if (StatPtr_STAT_ReplayRecordTime ==
            (FThreadSafeStaticStat<_private:_void___cdecl_UDemoNetDriver::TickFlushInternal(float)_::_2_::FStat_STAT_ReplayRecordTime>
             )0x0) {
          pFVar16 = ::FName::FName(&local_90,"STAT_ReplayRecordTime");
          TVar17.StatIdPtr =
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ReplayRecordTime,*pFVar16,
                          L"Net replay record time","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
                          true,ST_int64,true,false,MCR_Invalid);
        }
        local_b8.Impl._Line = 0x55f;
        local_b8.Impl._File =
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
        ;
        local_b8.Impl._Column = 2;
        local_b8.Impl._Function = "void __cdecl UDemoNetDriver::TickFlushInternal(float)";
        FScopeCycleCounter::FScopeCycleCounter
                  ((FScopeCycleCounter *)&local_148,TVar17,CycleStat|ClearEveryFrame,false,&local_b8
                  );
        dVar19 = FWindowsPlatformTime::Seconds();
        TickDemoRecord(this,param_1);
        dVar20 = FWindowsPlatformTime::Seconds();
        dVar19 = dVar20 - dVar19;
        fVar1 = (this->ReplayHelper).DemoCurrentTime;
        this_00 = FEngineVersion::Current();
        uVar11 = FEngineVersionBase::GetChangelist((FEngineVersionBase *)this_00);
        ConditionallyDisplayBurnInTime(uVar11,fVar1);
        dVar8 = dVar19;
        if (dVar19 <= this->MaxRecordTime) {
          dVar8 = this->MaxRecordTime;
        }
        dVar19 = dVar19 + this->AccumulatedRecordTime;
        iVar12 = this->RecordCountSinceFlush + 1;
        this->RecordCountSinceFlush = iVar12;
        this->MaxRecordTime = dVar8;
        this->AccumulatedRecordTime = dVar19;
        if ((__real_4000000000000000 < dVar20 - this->LastRecordAvgFlush) && (0 < iVar12)) {
          if ((__real_41000000 < (float)((dVar19 / (double)iVar12) * __real_408f400000000000)) &&
             (5 < (byte)LogDemo._0_1_)) {
            UNetDriver::GetNetworkObjectList((UNetDriver *)this);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
          }
          this->LastRecordAvgFlush = dVar20;
          this->AccumulatedRecordTime = 0.0;
          this->MaxRecordTime = 0.0;
          this->RecordCountSinceFlush = 0;
        }
        if ((local_140 & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_140 & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((local_140 & 4) != 0) {
          FThreadStats::AddMessage(local_148,CycleScopeEnd);
        }
        local_140 = 0;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  FScopedLevelCollectionContextSwitch::~FScopedLevelCollectionContextSwitch(local_88);
  QueryPerformanceCounter(&local_d0);
  GTickFlushDemoDriverTimeSeconds =
       GTickFlushDemoDriverTimeSeconds +
       ((double)local_d0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar7);
  FCsvProfiler::EndExclusiveStat("DemoRecording");
  FMemScope::~FMemScope(local_c8);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// WriteDemoFrameFromQueuedDemoPackets @ 147b23820

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::WriteDemoFrameFromQueuedDemoPackets
          (UDemoNetDriver *this,FArchive *param_1,
          TArray<FQueuedDemoPacket,TSizedDefaultAllocator<32>_> *param_2,float param_3,
          EWriteDemoFrameFlags param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(int *)&this->field_0x110 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FReplayHelper::WriteDemoFrame
            (&this->ReplayHelper,(UNetConnection *)**(undefined8 **)&this->field_0x108,param_1,
             param_2,param_3,param_4);
  return;
}

// WritePacket @ 147b238d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::WritePacket(UDemoNetDriver *this,FArchive *param_1,uchar *param_2,int param_3)

{
  FReplayHelper::WritePacket(param_1,param_2,param_3);
  return;
}

// __DefaultConstructor @ 147b24910

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UDemoNetDriver::__DefaultConstructor(FObjectInitializer *param_1)

{
  UDemoNetDriver *this;
  
  this = (UDemoNetDriver *)param_1->Obj;
  if (this != (UDemoNetDriver *)0x0) {
    UNetDriver::UNetDriver((UNetDriver *)this,param_1);
    *(undefined ***)this = &_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
    (this->ReplayStreamer).Object = (INetworkReplayStreamer *)0x0;
    (this->ReplayStreamer).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&this->RollbackNetStartupActors = 0;
    *(undefined8 *)&(this->RollbackNetStartupActors).field_0x8 = 0;
    *(undefined8 *)&(this->RollbackNetStartupActors).field_0x20 = 0;
    *(undefined4 *)&(this->RollbackNetStartupActors).field_0x28 = 0;
    *(undefined4 *)&(this->RollbackNetStartupActors).field_0x2c = 0x80;
    *(undefined4 *)&(this->RollbackNetStartupActors).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->RollbackNetStartupActors).field_0x34 = 0;
    *(undefined8 *)&(this->RollbackNetStartupActors).field_0x40 = 0;
    *(undefined4 *)&(this->RollbackNetStartupActors).field_0x48 = 0;
    (this->PlaybackDeltaCheckpointData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PlaybackDeltaCheckpointData).ArrayNum = 0;
    (this->PlaybackDeltaCheckpointData).ArrayMax = 0;
    (this->PlaylistTracker).Object = (FReplayPlaylistTracker *)0x0;
    (this->PlaylistTracker).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this->PlaybackPackets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PlaybackPackets).ArrayNum = 0;
    (this->PlaybackPackets).ArrayMax = 0;
    (this->PendingRecordFailure).bIsSet = false;
    (this->NonQueuedGUIDsForScrubbing).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NonQueuedGUIDsForScrubbing).ArrayNum = 0;
    (this->NonQueuedGUIDsForScrubbing).ArrayMax = 0;
    (this->QueuedReplayTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->QueuedReplayTasks).ArrayNum = 0;
    (this->QueuedReplayTasks).ArrayMax = 0;
    (this->ActiveReplayTask).Object = (FQueuedReplayTask *)0x0;
    (this->ActiveReplayTask).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this->ActiveScrubReplayTask).Object = (FQueuedReplayTask *)0x0;
    (this->ActiveScrubReplayTask).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&this->OnGotoTimeDelegate_Transient = 0;
    *(undefined8 *)&(this->OnGotoTimeDelegate_Transient).field_0x8 = 0;
    *(undefined4 *)&(this->OnGotoTimeDelegate_Transient).field_0x10 = 0;
    (this->DemoSessionID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DemoSessionID).Data.ArrayNum = 0;
    (this->DemoSessionID).Data.ArrayMax = 0;
    (this->ViewerOverride).WeakPtr = (FWeakObjectPtr)0x0;
    (this->PrioritizedActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrioritizedActors).ArrayNum = 0;
    (this->PrioritizedActors).ArrayMax = 0;
    (this->MulticastRecordOptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MulticastRecordOptions).ArrayNum = 0;
    (this->MulticastRecordOptions).ArrayMax = 0;
    (this->SpectatorControllers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SpectatorControllers).ArrayNum = 0;
    (this->SpectatorControllers).ArrayMax = 0;
    (this->LevelIntervals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LevelIntervals).ArrayNum = 0;
    (this->LevelIntervals).ArrayMax = 0;
    *(undefined8 *)&(this->TrackedRewindActorsByGUID).Elements = 0;
    *(undefined8 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x8 = 0;
    *(undefined8 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x20 = 0;
    *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x28 = 0;
    *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x34 = 0;
    (this->TrackedRewindActorsByGUID).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (this->TrackedRewindActorsByGUID).HashSize = 0;
    (this->DelegateHandleActorPreDestroy).ID = 0;
    (this->QueuedPacketsBeforeTravel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->QueuedPacketsBeforeTravel).ArrayNum = 0;
    (this->QueuedPacketsBeforeTravel).ArrayMax = 0;
    (this->BudgetLogHelper).Ptr = (FDemoBudgetLogHelper *)0x0;
    this->LastReplayFrameFidelity = (TAtomic<float>)0x0;
    FReplayHelper::FReplayHelper(&this->ReplayHelper);
    this->bSkipStartupActorRollback = false;
    InitDefaults(this);
    return;
  }
  return;
}

// __VTableCtorCaller @ 147b24af0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl UDemoNetDriver::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDemoNetDriver *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDemoNetDriver *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDemoNetDriver *)0x0) {
    UNetDriver::UNetDriver((UNetDriver *)this,param_1);
    *(undefined ***)this = &_vftable__for__UObject__;
    (this->ReplayStreamer).Object = (INetworkReplayStreamer *)0x0;
    *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
    (this->ReplayStreamer).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&this->RollbackNetStartupActors = 0;
    *(undefined8 *)&(this->RollbackNetStartupActors).field_0x8 = 0;
    *(undefined8 *)&(this->RollbackNetStartupActors).field_0x20 = 0;
    *(undefined4 *)&(this->RollbackNetStartupActors).field_0x28 = 0;
    *(undefined4 *)&(this->RollbackNetStartupActors).field_0x2c = 0x80;
    *(undefined4 *)&(this->RollbackNetStartupActors).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->RollbackNetStartupActors).field_0x34 = 0;
    *(undefined8 *)&(this->RollbackNetStartupActors).field_0x40 = 0;
    *(undefined4 *)&(this->RollbackNetStartupActors).field_0x48 = 0;
    (this->PlaybackDeltaCheckpointData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PlaybackDeltaCheckpointData).ArrayNum = 0;
    (this->PlaybackDeltaCheckpointData).ArrayMax = 0;
    (this->PlaylistTracker).Object = (FReplayPlaylistTracker *)0x0;
    (this->PlaylistTracker).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this->PlaybackPackets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PlaybackPackets).ArrayNum = 0;
    (this->PlaybackPackets).ArrayMax = 0;
    (this->PendingRecordFailure).bIsSet = false;
    (this->NonQueuedGUIDsForScrubbing).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NonQueuedGUIDsForScrubbing).ArrayNum = 0;
    (this->NonQueuedGUIDsForScrubbing).ArrayMax = 0;
    (this->QueuedReplayTasks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->QueuedReplayTasks).ArrayNum = 0;
    (this->QueuedReplayTasks).ArrayMax = 0;
    (this->ActiveReplayTask).Object = (FQueuedReplayTask *)0x0;
    (this->ActiveReplayTask).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this->ActiveScrubReplayTask).Object = (FQueuedReplayTask *)0x0;
    (this->ActiveScrubReplayTask).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&this->OnGotoTimeDelegate_Transient = 0;
    *(undefined8 *)&(this->OnGotoTimeDelegate_Transient).field_0x8 = 0;
    *(undefined4 *)&(this->OnGotoTimeDelegate_Transient).field_0x10 = 0;
    (this->DemoSessionID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DemoSessionID).Data.ArrayNum = 0;
    (this->DemoSessionID).Data.ArrayMax = 0;
    (this->ViewerOverride).WeakPtr = (FWeakObjectPtr)0x0;
    (this->PrioritizedActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrioritizedActors).ArrayNum = 0;
    (this->PrioritizedActors).ArrayMax = 0;
    (this->MulticastRecordOptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->MulticastRecordOptions).ArrayNum = 0;
    (this->MulticastRecordOptions).ArrayMax = 0;
    (this->SpectatorControllers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SpectatorControllers).ArrayNum = 0;
    (this->SpectatorControllers).ArrayMax = 0;
    (this->LevelIntervals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->LevelIntervals).ArrayNum = 0;
    (this->LevelIntervals).ArrayMax = 0;
    *(undefined8 *)&(this->TrackedRewindActorsByGUID).Elements = 0;
    *(undefined8 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x8 = 0;
    *(undefined8 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x20 = 0;
    *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x28 = 0;
    *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->TrackedRewindActorsByGUID).Elements.field_0x34 = 0;
    (this->TrackedRewindActorsByGUID).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (this->TrackedRewindActorsByGUID).HashSize = 0;
    (this->DelegateHandleActorPreDestroy).ID = 0;
    (this->QueuedPacketsBeforeTravel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->QueuedPacketsBeforeTravel).ArrayNum = 0;
    (this->QueuedPacketsBeforeTravel).ArrayMax = 0;
    (this->BudgetLogHelper).Ptr = (FDemoBudgetLogHelper *)0x0;
    this->LastReplayFrameFidelity = (TAtomic<float>)0x0;
    FReplayHelper::FReplayHelper(&this->ReplayHelper);
    this->bSkipStartupActorRollback = false;
    InitDefaults(this);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// SetPlayingPlaylist @ 1480d3900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDemoNetDriver::SetPlayingPlaylist
          (UDemoNetDriver *this,TSharedPtr<FReplayPlaylistTracker,1> *param_1)

{
  FReplayPlaylistTracker *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->PlaylistTracker).SharedReferenceCount.ReferenceController;
  (this->PlaylistTracker).Object = pFVar1;
  (this->PlaylistTracker).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 150518c40

bool __thiscall `UDemoNetDriver::NotifyActorChannelOpen'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7792372165998810228>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7792372165998810228>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150518cd0

bool __thiscall
`UDemoNetDriver::RespawnNecessaryNetStartupActors'::__l20::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7792372165998808390>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7792372165998808390>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150518d37;
    }
  }
  bVar2 = false;
LAB_150518d37:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150518d70

bool __thiscall
`UDemoNetDriver::ProcessFastForwardPackets'::__l28::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7792372165998808607>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7792372165998808607>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 150518de0

bool __thiscall
`UDemoNetDriver::ReplicatePrioritizedActor'::__l34::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7792372165998807261>);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(**(longlong **)this + 8),true);
    if (pUVar4 == (UObject *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0].ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_res10[0].Number = *(uint *)&pUVar4->field_0x1c;
      ::FName::ToString(local_res10,&local_18);
    }
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7792372165998807261>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150518e7b;
    }
  }
  bVar2 = false;
LAB_150518e7b:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150518eb0

bool __thiscall `UDemoNetDriver::LoadCheckpoint'::__l63::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7792372165998809124>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7792372165998809124>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150518ef0

bool __thiscall
`UDemoNetDriver::CleanupOutstandingRewindActors'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7792372165998810206>);
  if (bVar2) {
    ::FString::PrintfImpl(&local_18,L"%llu");
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7792372165998810206>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150518f61;
    }
  }
  bVar2 = false;
LAB_150518f61:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150518f90

bool __thiscall `UDemoNetDriver::NotifyActorChannelOpen'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7792372165998810229>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7792372165998810229>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150518fd0

bool __thiscall
`UDemoNetDriver::RespawnNecessaryNetStartupActors'::__l25::<lambda_2>::operator()(void *this)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7792372165998808398>);
  if (bVar2) {
    this_00 = (UObjectBaseUtility *)**(undefined8 **)this;
    if ((this_00 == (UObjectBaseUtility *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(this_00,&local_18,(UObject *)0x0,None);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7792372165998808398>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15051905e;
    }
  }
  bVar2 = false;
LAB_15051905e:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}


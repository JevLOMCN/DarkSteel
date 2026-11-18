// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 93

// GetSubsystem<UReplaySubsystem> @ 147bb08d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UReplaySubsystem * __thiscall UGameInstance::GetSubsystem<UReplaySubsystem>(UGameInstance *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UReplaySubsystem *pUVar5;
  
  pUVar3 = Z_Construct_UClass_UReplaySubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_147bb0902;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_147bb0902:
    pUVar4 = Z_Construct_UClass_UReplaySubsystem_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_147bb0932;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_147bb0932:
  pUVar5 = (UReplaySubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&this->SubsystemCollection,pUVar3);
  return pUVar5;
}

// UGameInstance @ 147bbca90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameInstance * __thiscall UGameInstance::UGameInstance(UGameInstance *this,FVTableHelper *param_1)

{
  UClass *pUVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&(this->NotifyPreClientTravelDelegates).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  (this->LocalPlayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalPlayers).ArrayNum = 0;
  (this->LocalPlayers).ArrayMax = 0;
  (this->OnlineSession).field0_0x0.DebugPtr = (UOnlineSession *)0x0;
  (this->ReferencedObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedObjects).ArrayNum = 0;
  (this->ReferencedObjects).ArrayMax = 0;
  *(undefined8 *)&this->NotifyPreClientTravelDelegates = 0;
  *(undefined8 *)&(this->NotifyPreClientTravelDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->NotifyPreClientTravelDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnPawnControllerChangedDelegates = 0;
  *(undefined8 *)&(this->OnPawnControllerChangedDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnPawnControllerChangedDelegates).field_0x10 = 0;
  (this->OnPlayTogetherEventReceivedDelegateHandle).ID = 0;
  (this->PIEMapName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PIEMapName).Data.ArrayNum = 0;
  (this->PIEMapName).Data.ArrayMax = 0;
  *(undefined8 *)&this->OnInputDeviceConnectionChange = 0;
  *(undefined8 *)&(this->OnInputDeviceConnectionChange).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputDeviceConnectionChange).field_0x10 = 0;
  *(undefined8 *)&this->OnUserInputDevicePairingChange = 0;
  *(undefined8 *)&(this->OnUserInputDevicePairingChange).field_0x8 = 0;
  *(undefined8 *)&(this->OnUserInputDevicePairingChange).field_0x10 = 0;
  *(undefined8 *)&this->OnLocalPlayerAddedEvent = 0;
  *(undefined8 *)&(this->OnLocalPlayerAddedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnLocalPlayerAddedEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnLocalPlayerRemovedEvent = 0;
  *(undefined8 *)&(this->OnLocalPlayerRemovedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnLocalPlayerRemovedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnLocalPlayerAddedEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnLocalPlayerRemovedEvent).field_0x18 = 2;
  pUVar1 = Z_Construct_UClass_UGameInstanceSubsystem_NoRegister();
  FSubsystemCollectionBase::FSubsystemCollectionBase
            ((FSubsystemCollectionBase *)&this->SubsystemCollection,pUVar1);
  *(undefined ***)&this->SubsystemCollection =
       &___7__FObjectSubsystemCollection_VUGameInstanceSubsystem____6B_;
  return this;
}

// UGameInstance @ 147bbcbb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameInstance * __thiscall
UGameInstance::UGameInstance(UGameInstance *this,FObjectInitializer *param_1)

{
  FTimerManager *this_00;
  FTimerManager *pFVar1;
  FTimerManager *pFVar2;
  UClass *pUVar3;
  
  UObject::UObject((UObject *)this,param_1);
  pFVar2 = (FTimerManager *)0x0;
  *(undefined8 *)&(this->NotifyPreClientTravelDelegates).field_0x18 = 2;
  (this->LocalPlayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->LocalPlayers).ArrayNum = 0;
  (this->LocalPlayers).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  (this->OnlineSession).field0_0x0.DebugPtr = (UOnlineSession *)0x0;
  (this->ReferencedObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedObjects).ArrayNum = 0;
  (this->ReferencedObjects).ArrayMax = 0;
  *(undefined8 *)&this->NotifyPreClientTravelDelegates = 0;
  *(undefined8 *)&(this->NotifyPreClientTravelDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->NotifyPreClientTravelDelegates).field_0x10 = 0;
  *(undefined8 *)&this->OnPawnControllerChangedDelegates = 0;
  *(undefined8 *)&(this->OnPawnControllerChangedDelegates).field_0x8 = 0;
  *(undefined8 *)&(this->OnPawnControllerChangedDelegates).field_0x10 = 0;
  (this->OnPlayTogetherEventReceivedDelegateHandle).ID = 0;
  (this->PIEMapName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PIEMapName).Data.ArrayNum = 0;
  (this->PIEMapName).Data.ArrayMax = 0;
  *(undefined8 *)&this->OnInputDeviceConnectionChange = 0;
  *(undefined8 *)&(this->OnInputDeviceConnectionChange).field_0x8 = 0;
  *(undefined8 *)&(this->OnInputDeviceConnectionChange).field_0x10 = 0;
  *(undefined8 *)&this->OnUserInputDevicePairingChange = 0;
  *(undefined8 *)&(this->OnUserInputDevicePairingChange).field_0x8 = 0;
  *(undefined8 *)&(this->OnUserInputDevicePairingChange).field_0x10 = 0;
  *(undefined8 *)&this->OnLocalPlayerAddedEvent = 0;
  *(undefined8 *)&(this->OnLocalPlayerAddedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnLocalPlayerAddedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnLocalPlayerAddedEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnLocalPlayerRemovedEvent = 0;
  *(undefined8 *)&(this->OnLocalPlayerRemovedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnLocalPlayerRemovedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnLocalPlayerRemovedEvent).field_0x18 = 2;
  this_00 = ::operator_new(0x168);
  pFVar1 = pFVar2;
  if (this_00 != (FTimerManager *)0x0) {
    pFVar1 = FTimerManager::FTimerManager(this_00,this);
  }
  this->TimerManager = pFVar1;
  pFVar1 = ::operator_new(0x60);
  if (pFVar1 != (FTimerManager *)0x0) {
    *(undefined8 *)&(pFVar1->Timers).field_0x8 = 0;
    *(undefined8 *)&(pFVar1->Timers).field_0x10 = 0;
    *(undefined8 *)&(pFVar1->Timers).field_0x30 = 0;
    (pFVar1->ActiveTimerHeap).ArrayNum = 0;
    (pFVar1->ActiveTimerHeap).ArrayMax = 0;
    pFVar1->_padding_ = 0;
    *(undefined8 *)&pFVar1->Timers = 0;
    *(undefined8 *)&(pFVar1->Timers).field_0x18 = 0;
    *(undefined4 *)&(pFVar1->Timers).field_0x20 = 0;
    *(undefined4 *)&(pFVar1->Timers).field_0x24 = 0x80;
    *(undefined4 *)&(pFVar1->Timers).field_0x28 = 0xffffffff;
    *(undefined4 *)&(pFVar1->Timers).field_0x2c = 0;
    (pFVar1->ActiveTimerHeap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)&(pFVar1->PausedTimerSet).Elements = 0;
    *(undefined8 *)&(pFVar1->PausedTimerSet).Elements.field_0x8 = 0;
    pFVar2 = pFVar1;
  }
  this->LatentActionManager = (FLatentActionManager *)pFVar2;
  pUVar3 = Z_Construct_UClass_UGameInstanceSubsystem_NoRegister();
  FSubsystemCollectionBase::FSubsystemCollectionBase
            ((FSubsystemCollectionBase *)&this->SubsystemCollection,pUVar3);
  *(undefined ***)&this->SubsystemCollection =
       &___7__FObjectSubsystemCollection_VUGameInstanceSubsystem____6B_;
  return this;
}

// ~UGameInstance @ 147bbf500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::~UGameInstance(UGameInstance *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  FSubsystemCollectionBase::~FSubsystemCollectionBase
            ((FSubsystemCollectionBase *)&this->SubsystemCollection);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLocalPlayerRemovedEvent).field_0x8,
             *(int *)&(this->OnLocalPlayerRemovedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnLocalPlayerRemovedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLocalPlayerRemovedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLocalPlayerAddedEvent).field_0x8,
             *(int *)&(this->OnLocalPlayerAddedEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnLocalPlayerAddedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLocalPlayerAddedEvent);
  pvVar1 = *(void **)&(this->OnUserInputDevicePairingChange).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUserInputDevicePairingChange);
  pvVar1 = *(void **)&(this->OnInputDeviceConnectionChange).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputDeviceConnectionChange);
  pFVar2 = (this->PIEMapName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->OnPawnControllerChangedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPawnControllerChangedDelegates);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NotifyPreClientTravelDelegates).field_0x8,
             *(int *)&(this->NotifyPreClientTravelDelegates).field_0x10);
  pvVar1 = *(void **)&(this->NotifyPreClientTravelDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NotifyPreClientTravelDelegates);
  pFVar2 = (this->ReferencedObjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LocalPlayers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FExec::~FExec((FExec *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// AddLocalPlayer @ 147bc8c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UGameInstance::AddLocalPlayer(UGameInstance *this,ULocalPlayer *param_1,FPlatformUserId param_2)

{
  code *pcVar1;
  int iVar2;
  UGameViewportClient *pUVar3;
  UGameViewportClient *pUVar4;
  TObjectPtr<ULocalPlayer>_u_0 local_res10;
  FString local_38;
  
  if (param_1 == (ULocalPlayer *)0x0) {
    return -1;
  }
  local_res10.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  iVar2 = TArray<TObjectPtr<ULocalPlayer>,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<TObjectPtr<ULocalPlayer>_>
                    (&this->LocalPlayers,(TObjectPtr<ULocalPlayer> *)&local_res10.ObjectPtr);
  pUVar4 = (UGameViewportClient *)0x0;
  pcVar1 = *(code **)(param_1->_padding_ + 0x2e8);
  if (this->WorldContext == (FWorldContext *)0x0) {
    pUVar3 = (UGameViewportClient *)0x0;
  }
  else {
    pUVar3 = (this->WorldContext->GameViewport).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UGameViewportClient *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  (*pcVar1)(param_1,pUVar3,param_2.InternalId);
  if ((this->WorldContext != (FWorldContext *)0x0) &&
     (pUVar3 = (this->WorldContext->GameViewport).field0_0x0.DebugPtr,
     pUVar3 != (UGameViewportClient *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    if (((this->WorldContext != (FWorldContext *)0x0) &&
        (pUVar4 = (this->WorldContext->GameViewport).field0_0x0.DebugPtr,
        UE::GC::GIsIncrementalReachabilityPending != false)) &&
       (pUVar4 != (UGameViewportClient *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (**(code **)(pUVar4->_padding_ + 0x390))(pUVar4,iVar2,param_1);
  }
  if (4 < (byte)LogPlayerManagement._0_1_) {
    local_res10 = (TObjectPtr<ULocalPlayer>_u_0)param_1->_padding_;
    ::FName::ToString((FName *)&local_res10.ObjectPtr,&local_38);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  TMulticastDelegate<void___cdecl(ULocalPlayer_*),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnLocalPlayerAddedEvent,param_1);
  return iVar2;
}

// AddReferencedObjects @ 147bc8e10

void __cdecl UGameInstance::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UGameInstance>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    FSubsystemCollectionBase::AddReferencedObjects
              ((FSubsystemCollectionBase *)&param_1[7].field_0x18,param_1,param_2);
    UObject::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar3 = GetTypeName<UGameInstance>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// AddUserToReplay @ 147bc92c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::AddUserToReplay(UGameInstance *this,FString *param_1)

{
  UReplaySubsystem *this_00;
  
  this_00 = GetSubsystem<UReplaySubsystem>(this);
  if (this_00 != (UReplaySubsystem *)0x0) {
    UReplaySubsystem::AddUserToReplay(this_00,param_1);
    return;
  }
  return;
}

// BroadcastOnStart @ 147bcb570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::BroadcastOnStart(UGameInstance *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FWorldDelegates::OnStartGameInstance,(FWriteAccessScope *)&local_28);
  bVar3 = false;
  FWorldDelegates::OnStartGameInstance._28_4_ = FWorldDelegates::OnStartGameInstance._28_4_ + 1;
  uVar7 = FWorldDelegates::OnStartGameInstance._16_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)FWorldDelegates::OnStartGameInstance._16_4_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + FWorldDelegates::OnStartGameInstance._8_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + FWorldDelegates::OnStartGameInstance._8_8_),
          plVar1 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,this), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  FWorldDelegates::OnStartGameInstance._28_4_ = FWorldDelegates::OnStartGameInstance._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnStartGameInstance,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
                    /* WARNING: Could not recover jumptable at 0x000147bcb6a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x428))(this);
  return;
}

// CleanupGameViewport @ 147bcc0d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::CleanupGameViewport(UGameInstance *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (this->LocalPlayers).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->LocalPlayers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)((this->LocalPlayers).AllocatorInstance.Data + lVar6);
      if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x78), lVar1 != 0)) &&
         (*(longlong *)(lVar1 + 0x128) == 0)) {
        (**(code **)(this->_padding_ + 0x338))(this);
      }
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return;
}

// ClientTravelToSession @ 147bcc260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameInstance::ClientTravelToSession(UGameInstance *this,int param_1,FName param_2)

{
  char cVar1;
  UOnlineEngineInterface *pUVar2;
  ULocalPlayer *pUVar3;
  bool bVar4;
  UWorld *pUVar5;
  FName local_res18 [2];
  FString local_28;
  ForAnyElementType local_18;
  undefined8 uStack_10;
  
  pUVar5 = (UWorld *)0x0;
  if (this->WorldContext != (FWorldContext *)0x0) {
    pUVar5 = (this->WorldContext->ThisCurrentWorld).field0_0x0.DebugPtr;
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_res18[0] = param_2;
  pUVar2 = UOnlineEngineInterface::Get();
  cVar1 = (**(code **)(*(longlong *)pUVar2 + 0x368))(pUVar2,pUVar5,local_res18[0]);
  if (cVar1 == '\0') {
    if (2 < (byte)LogGameSession._0_1_) {
      ::FName::ToString(local_res18,(FString *)&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameSession);
      if (local_18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data);
      }
    }
  }
  else {
    pUVar3 = UEngine::GetLocalPlayerFromControllerId(GEngine,pUVar5,param_1);
    if ((pUVar3 != (ULocalPlayer *)0x0) &&
       ((APlayerController *)pUVar3->_padding_ != (APlayerController *)0x0)) {
      local_18.Data = (FScriptContainerElement *)0x0;
      uStack_10._0_4_ = 0;
      uStack_10._4_4_ = 0;
      APlayerController::ClientTravel
                ((APlayerController *)pUVar3->_padding_,&local_28,TRAVEL_Absolute,false,
                 (FGuid *)&local_18);
      bVar4 = true;
      goto LAB_147bcc37e;
    }
    if (2 < (byte)LogGameSession._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameSession);
    }
  }
  bVar4 = false;
LAB_147bcc37e:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// CreateGameModeForURL @ 147bd0910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

AGameModeBase * __thiscall
UGameInstance::CreateGameModeForURL(UGameInstance *this,FURL *param_1,UWorld *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  AGameModeBase *pAVar6;
  AWorldSettings *pAVar7;
  UClass *pUVar8;
  size_t sVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  FString *pFVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  UEngine *pUVar17;
  UEngine *pUVar18;
  int iVar19;
  longlong lVar20;
  wchar_t *pwVar21;
  uint uVar22;
  UEngine *pUVar23;
  wchar_t *pwVar24;
  undefined1 auStackY_308 [32];
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  UClass *local_250;
  FName local_248;
  FString local_240;
  wchar_t *local_228;
  undefined8 uStack_220;
  FScriptContainerElement *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  wchar_t *local_208;
  undefined8 uStack_200;
  FScriptContainerElement *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *local_1e8;
  undefined8 uStack_1e0;
  FScriptContainerElement *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  undefined1 local_188 [16];
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  FString local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  undefined1 local_b8 [112];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_308;
  pUVar23 = (UEngine *)0x0;
  pwVar24 = L"";
  uVar22 = 0;
  local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_260.Data.ArrayNum = 0;
  local_260.Data.ArrayMax = 0;
  local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.Data.ArrayNum = 0;
  local_270.Data.ArrayMax = 0;
  pUVar17 = pUVar23;
  pUVar18 = pUVar23;
  if (0 < (param_1->Op).ArrayNum) {
    do {
      ::FString::AppendChars(&local_260,L"?",1);
      uVar16 = (uint)pUVar17;
      uVar5 = uVar22;
      if ((int)uVar16 < (param_1->Op).ArrayNum) {
        uVar5 = ~uVar16 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pAVar6 = (AGameModeBase *)(*pcVar3)();
        return pAVar6;
      }
      pFVar2 = (param_1->Op).AllocatorInstance.Data;
      iVar19 = *(int *)((longlong)&pUVar18->_padding_ + (longlong)pFVar2);
      uVar5 = iVar19 - 1;
      if (iVar19 == 0) {
        uVar5 = uVar22;
      }
      ::FString::AppendChars
                (&local_260,*(wchar_t **)((longlong)&pUVar18->_padding_ + (longlong)pFVar2),uVar5);
      uVar5 = uVar22;
      if ((int)uVar16 < (param_1->Op).ArrayNum) {
        uVar5 = ~uVar16 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pAVar6 = (AGameModeBase *)(*pcVar3)();
        return pAVar6;
      }
      pFVar2 = (param_1->Op).AllocatorInstance.Data;
      if (*(int *)((longlong)&pUVar18->_padding_ + (longlong)pFVar2) == 0) {
        pwVar21 = L"";
      }
      else {
        pwVar21 = *(wchar_t **)((longlong)&pUVar18->_padding_ + (longlong)pFVar2);
      }
      FParse::Value(pwVar21,L"GAME=",&local_270,true,(wchar_t **)0x0);
      pUVar17 = (UEngine *)(ulonglong)(uVar16 + 1);
      pUVar18 = (UEngine *)&pUVar18->_padding_;
    } while ((int)(uVar16 + 1) < (param_1->Op).ArrayNum);
  }
  if (param_2 == (UWorld *)0x0) {
    if (this->WorldContext == (FWorldContext *)0x0) {
      param_2 = (UWorld *)0x0;
    }
    else {
      param_2 = (this->WorldContext->ThisCurrentWorld).field0_0x0.DebugPtr;
    }
  }
  pAVar7 = UWorld::GetWorldSettings(param_2,false,true);
  pUVar17 = GEngine;
  if (GEngine == (UEngine *)0x0) {
LAB_147bd0adf:
    pUVar17 = pUVar23;
  }
  else {
    pUVar8 = UGameEngine::StaticClass();
    lVar20 = pUVar17->_padding_;
    iVar19 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar20 + 0x38) < iVar19) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar20 + 0x30) + (longlong)iVar19 * 8) !=
        &pUVar8->_padding_)) goto LAB_147bd0adf;
  }
  pUVar8 = (pAVar7->DefaultGameMode).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  pUVar10 = pUVar8;
  if (1 < local_270.Data.ArrayNum) {
    UGameMapsSettings::GetGameModeForName(&local_2a0,&local_270);
    if (pUVar17 != (UEngine *)0x0) {
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_2a0.Data.ArrayNum != 0) {
        FVar15.Data = local_2a0.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_1c8,(wchar_t *)FVar15.Data);
      UEngine::LoadPackagesFully(pUVar17,param_2,FULLYLOAD_Game_PreLoadClass,&local_1c8);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
    }
    uStack_220._0_4_ = 0;
    uStack_220._4_4_ = 0;
    local_228 = (wchar_t *)0x0;
    if (local_2a0.Data.ArrayNum == 0) {
      local_218 = (FScriptContainerElement *)0x15060d16c;
LAB_147bd0b7f:
      sVar9 = wcslen((wchar_t *)local_218);
      iStack_210 = (int)sVar9;
    }
    else {
      iStack_210 = 0;
      local_218 = local_2a0.Data.AllocatorInstance.Data;
      if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_147bd0b7f;
    }
    pUVar10 = Z_Construct_UClass_AGameModeBase_NoRegister();
    local_168._12_4_ = uStack_20c;
    local_168.Size = iStack_210;
    local_178.DataPtr = local_228;
    local_178.Size = (int)uStack_220;
    local_178._12_4_ = uStack_220._4_4_;
    local_168.DataPtr = (wchar_t *)local_218;
    pUVar10 = StaticLoadClass(pUVar10,(UObject *)0x0,&local_168,&local_178,0,(UPackageMap *)0x0);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar10 != (UClass *)0x0) goto LAB_147bd0be6;
LAB_147bd0c2a:
      pUVar10 = pUVar8;
      if (2 < (byte)LogLoad._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
      }
    }
    else {
      if (pUVar10 == (UClass *)0x0) goto LAB_147bd0c2a;
      UE::GC::MarkAsReachable((UObject *)pUVar10);
LAB_147bd0be6:
      pUVar11 = Z_Construct_UClass_AGameModeBase_NoRegister();
      if (pUVar11 == (UClass *)0x0) goto LAB_147bd0c2a;
      iVar19 = (int)pUVar11->_padding_;
      if (((int)pUVar10->_padding_ < iVar19) ||
         ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar19 * 8) !=
          &pUVar11->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_147bd0c2a;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
    }
    if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    }
  }
  pUVar8 = pUVar10;
  if ((pUVar10 == (UClass *)0x0) ||
     (pUVar11 = Z_Construct_UClass_AGameModeBase_NoRegister(), pUVar11 == (UClass *)0x0)) {
LAB_147bd0c9a:
    local_2b0.Data.ArrayNum = (param_1->Map).Data.ArrayNum;
    lVar20 = (longlong)local_2b0.Data.ArrayNum;
    local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar2 = (param_1->Map).Data.AllocatorInstance.Data;
    if (local_2b0.Data.ArrayNum == 0) {
      local_2b0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_2b0.Data.ArrayNum,0,(ForAnyElementType *)&local_2b0,
                 local_2b0.Data.ArrayNum,&local_2b0.Data.ArrayMax);
      memcpy(local_2b0.Data.AllocatorInstance.Data,pFVar2,lVar20 * 2);
    }
    FPaths::GetBaseFilename(&local_280,&local_2b0,true);
    bVar4 = ::FString::StartsWith(&local_280,L"UEDPIE",6,IgnoreCase);
    if (bVar4) {
      pFVar12 = UWorld::BuildPIEPackagePrefix(&local_158,this->WorldContext->PIEInstance);
      iVar1 = (pFVar12->Data).ArrayNum;
      iVar19 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar19 = 0;
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      ::FString::RemoveAt(&local_280,0,iVar19,No);
    }
    FVar15.Data = local_280.Data.AllocatorInstance.Data;
    local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_290.Data.ArrayNum = local_280.Data.ArrayNum;
    if (local_280.Data.ArrayNum == 0) {
      local_290.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_280.Data.ArrayNum,0,(ForAnyElementType *)&local_290,
                 local_280.Data.ArrayNum,&local_290.Data.ArrayMax);
      memcpy(local_290.Data.AllocatorInstance.Data,FVar15.Data,(longlong)local_280.Data.ArrayNum * 2
            );
    }
    UGameMapsSettings::GetGameModeForMapName(&local_2c0,&local_290);
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
    if (1 < local_2c0.Data.ArrayNum) {
      if (pUVar17 != (UEngine *)0x0) {
        FVar15.Data = (FScriptContainerElement *)L"";
        if (local_2c0.Data.ArrayNum != 0) {
          FVar15.Data = local_2c0.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_1b8,(wchar_t *)FVar15.Data);
        UEngine::LoadPackagesFully(pUVar17,param_2,FULLYLOAD_Game_PreLoadClass,&local_1b8);
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
      }
      uStack_200._0_4_ = 0;
      uStack_200._4_4_ = 0;
      local_208 = (wchar_t *)0x0;
      iStack_1f0 = 0;
      if (local_2c0.Data.ArrayNum == 0) {
        local_1f8 = (FScriptContainerElement *)0x15060d16c;
LAB_147bd0e64:
        sVar9 = wcslen((wchar_t *)local_1f8);
        iStack_1f0 = (int)sVar9;
      }
      else {
        local_1f8 = local_2c0.Data.AllocatorInstance.Data;
        if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_147bd0e64;
      }
      pUVar8 = Z_Construct_UClass_AGameModeBase_NoRegister();
      local_138._12_4_ = uStack_1ec;
      local_138.Size = iStack_1f0;
      local_148.DataPtr = local_208;
      local_148.Size = (int)uStack_200;
      local_148._12_4_ = uStack_200._4_4_;
      local_138.DataPtr = (wchar_t *)local_1f8;
      pUVar8 = StaticLoadClass(pUVar8,(UObject *)0x0,&local_138,&local_148,0,(UPackageMap *)0x0);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar8 != (UClass *)0x0) goto LAB_147bd0ecb;
      }
      else if (pUVar8 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_147bd0ecb:
        pUVar11 = Z_Construct_UClass_AGameModeBase_NoRegister();
        if (pUVar11 != (UClass *)0x0) {
          iVar19 = (int)pUVar11->_padding_;
          if (((int)pUVar8->_padding_ < iVar19) ||
             ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar19 * 8) !=
              &pUVar11->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar8);
            }
            goto LAB_147bd0f45;
          }
        }
      }
      pUVar8 = pUVar10;
      if (2 < (byte)LogLoad._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
      }
    }
LAB_147bd0f45:
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
    }
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
    if (pUVar8 != (UClass *)0x0) goto LAB_147bd0f76;
LAB_147bd0fa8:
    uStack_1e0._0_4_ = 0;
    uStack_1e0._4_4_ = 0;
    local_1e8 = (wchar_t *)0x0;
    pFVar12 = UGameMapsSettings::GetGlobalDefaultGameMode(&local_108);
    iStack_1d0 = 0;
    if ((pFVar12->Data).ArrayNum == 0) {
      local_1d8 = (FScriptContainerElement *)0x15060d16c;
LAB_147bd0fde:
      sVar9 = wcslen((wchar_t *)local_1d8);
      iStack_1d0 = (int)sVar9;
    }
    else {
      local_1d8 = (pFVar12->Data).AllocatorInstance.Data;
      if (local_1d8 != (FScriptContainerElement *)0x0) goto LAB_147bd0fde;
    }
    pUVar8 = Z_Construct_UClass_AGameModeBase_NoRegister();
    local_118._12_4_ = uStack_1cc;
    local_118.Size = iStack_1d0;
    local_128.DataPtr = local_1e8;
    local_128.Size = (int)uStack_1e0;
    local_128._12_4_ = uStack_1e0._4_4_;
    local_118.DataPtr = (wchar_t *)local_1d8;
    pUVar8 = StaticLoadClass(pUVar8,(UObject *)0x0,&local_118,&local_128,0,(UPackageMap *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (pUVar8 != (UClass *)0x0) goto LAB_147bd1058;
LAB_147bd1146:
    pUVar8 = Z_Construct_UClass_AGameModeBase_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
  }
  else {
    iVar19 = (int)pUVar11->_padding_;
    if (((int)pUVar10->_padding_ < iVar19) ||
       ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar19 * 8) !=
        &pUVar11->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_147bd0c9a;
LAB_147bd0f76:
    pUVar10 = Z_Construct_UClass_AGameModeBase_NoRegister();
    if (pUVar10 == (UClass *)0x0) goto LAB_147bd0fa8;
    iVar19 = (int)pUVar10->_padding_;
    if (((int)pUVar8->_padding_ < iVar19) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar19 * 8) !=
        &pUVar10->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_147bd0fa8;
LAB_147bd1058:
    pUVar10 = Z_Construct_UClass_AGameModeBase_NoRegister();
    if (pUVar10 == (UClass *)0x0) goto LAB_147bd1146;
    iVar19 = (int)pUVar10->_padding_;
    if (((int)pUVar8->_padding_ < iVar19) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar19 * 8) !=
        &pUVar10->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_147bd1146;
    pcVar3 = *(code **)(this->_padding_ + 0x3c8);
    if ((param_1->Portal).Data.ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(param_1->Portal).Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_1a8,pwVar21);
    FPaths::GetBaseFilename(&local_f8,&param_1->Map,true);
    local_250 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    puVar13 = (undefined8 *)(*pcVar3)(this,local_188);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)*puVar13 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)*puVar13);
    }
    pUVar8 = (UClass *)*puVar13;
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
  }
  if (pUVar17 != (UEngine *)0x0) {
    if ((pUVar8 == (UClass *)0x0) ||
       (pUVar10 = Z_Construct_UClass_AGameModeBase_NoRegister(), pUVar10 == (UClass *)0x0)) {
LAB_147bd11a8:
      pUVar10 = (UClass *)0x0;
    }
    else {
      iVar19 = (int)pUVar10->_padding_;
      if (((int)pUVar8->_padding_ < iVar19) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar19 * 8) !=
          &pUVar10->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pUVar10 = pUVar8;
      if (!bVar4) goto LAB_147bd11a8;
    }
    pFVar12 = UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)pUVar10,&local_e8,(UObject *)0x0);
    UEngine::LoadPackagesFully(pUVar17,param_2,FULLYLOAD_Game_PostLoadClass,pFVar12);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_198,L"LoadForAllGameModes");
    UEngine::LoadPackagesFully(pUVar17,param_2,FULLYLOAD_Game_PostLoadClass,&local_198);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  if (4 < (byte)LogLoad._0_1_) {
    if ((pUVar8 == (UClass *)0x0) ||
       (pUVar10 = Z_Construct_UClass_AGameModeBase_NoRegister(), pUVar10 == (UClass *)0x0)) {
LAB_147bd1261:
      pUVar10 = (UClass *)0x0;
    }
    else {
      iVar19 = (int)pUVar10->_padding_;
      if (((int)pUVar8->_padding_ < iVar19) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar19 * 8) !=
          &pUVar10->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      pUVar10 = pUVar8;
      if (!bVar4) goto LAB_147bd1261;
    }
    local_248 = (FName)pUVar10->_padding_;
    ::FName::ToString(&local_248,&local_240);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
    if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data.AllocatorInstance.Data);
    }
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_b8);
  local_b8._52_4_ = local_b8._52_4_ | RF_Transient;
  local_b8[0x30] = AlwaysSpawn;
  if ((pUVar8 != (UClass *)0x0) &&
     (pUVar10 = Z_Construct_UClass_AGameModeBase_NoRegister(), pUVar10 != (UClass *)0x0)) {
    iVar19 = (int)pUVar10->_padding_;
    if (((int)pUVar8->_padding_ < iVar19) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar19 * 8) !=
        &pUVar10->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_147bd12f6;
  }
  pUVar8 = (UClass *)0x0;
LAB_147bd12f6:
  pAVar6 = (AGameModeBase *)
           UWorld::SpawnActor(param_2,pUVar8,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                              (FActorSpawnParameters *)local_b8);
  if (pAVar6 == (AGameModeBase *)0x0) {
    pAVar6 = (AGameModeBase *)0x0;
  }
  else {
    pUVar8 = Z_Construct_UClass_AGameModeBase_NoRegister();
    iVar19 = (int)pUVar8->_padding_;
    if ((*(int *)(pAVar6->_padding_ + 0x38) < iVar19) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar6->_padding_ + 0x30) + (longlong)iVar19 * 8)
        != &pUVar8->_padding_)) {
      pFVar12 = GetTypeName<AGameModeBase>(&local_d8);
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar21 = L"";
      }
      else {
        pwVar21 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      pFVar12 = GetFullNameForCastLogError<AActor>(&local_c8,(AActor *)pAVar6);
      if ((pFVar12->Data).ArrayNum != 0) {
        pwVar24 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar24,pwVar21);
    }
  }
  if (local_b8._64_8_ != 0) {
    plVar14 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  FURL::~FURL(param_1);
  return pAVar6;
}

// CreateInitialPlayer @ 147bd3ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall UGameInstance::CreateInitialPlayer(UGameInstance *this,FString *param_1)

{
  IPlatformInputDeviceMapper *pIVar1;
  int *piVar2;
  ULocalPlayer *pUVar3;
  undefined1 local_res18 [16];
  
  pIVar1 = IPlatformInputDeviceMapper::Get();
  piVar2 = (int *)(**(code **)(pIVar1->_padding_ + 0x50))(pIVar1,local_res18);
  pUVar3 = CreateLocalPlayer(this,(FPlatformUserId)*piVar2,param_1,false);
  return pUVar3;
}

// CreateLocalPlayer @ 147bd3d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall
UGameInstance::CreateLocalPlayer(UGameInstance *this,int param_1,FString *param_2,bool param_3)

{
  IPlatformInputDeviceMapper *pIVar1;
  ULocalPlayer *pUVar2;
  FPlatformUserId local_18;
  undefined4 local_14 [3];
  
  FGenericPlatformMisc::GetPlatformUserForUserIndex((int)&local_18);
  local_14[0] = 0xffffffff;
  pIVar1 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar1->_padding_ + 0xb0))(pIVar1,param_1,&local_18,local_14);
  pUVar2 = CreateLocalPlayer(this,local_18,param_2,param_3);
  return pUVar2;
}

// CreateLocalPlayer @ 147bd3db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

ULocalPlayer * __thiscall
UGameInstance::CreateLocalPlayer
          (UGameInstance *this,FPlatformUserId param_1,FString *param_2,bool param_3)

{
  int iVar1;
  UGameViewportClient *pUVar2;
  UDemoNetDriver *this_00;
  code *pcVar3;
  int iVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  char cVar8;
  ENetMode EVar9;
  int iVar10;
  UEngine *pUVar11;
  UClass *pUVar12;
  ULocalPlayer *pUVar13;
  IPlatformInputDeviceMapper *pIVar14;
  UClass *pUVar15;
  TObjectPtr<UClass>_u_0 this_01;
  longlong *plVar16;
  wchar_t *pwVar17;
  FScriptContainerElement *pFVar18;
  TObjectPtr<UClass>_u_0 this_02;
  TObjectPtr<UClass>_u_0 TVar19;
  undefined1 auStackY_178 [32];
  undefined1 local_148;
  char local_147;
  int local_144;
  FString local_140;
  TObjectPtr<UClass>_u_0 local_130;
  undefined8 local_128;
  TObjectPtr<UClass>_u_0 local_120;
  undefined8 local_118;
  int local_110 [2];
  FString *local_108;
  undefined8 local_100;
  FScriptContainerElement *local_f8;
  FName local_f0;
  FString *local_e8;
  FString local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_147 = param_3;
  local_e8 = param_2;
  pUVar11 = GetEngine(this);
  pUVar15 = (pUVar11->LocalPlayerClass).Class.field0_0x0.DebugPtr;
  if ((pUVar15 == (UClass *)0x0) ||
     (pUVar12 = Z_Construct_UClass_ULocalPlayer_NoRegister(), pUVar12 == (UClass *)0x0)) {
LAB_147bd3e3e:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetEngine()->LocalPlayerClass != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameInstance.cpp"
                       ,0x347,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pUVar13 = (ULocalPlayer *)(*pcVar3)();
      return pUVar13;
    }
  }
  else {
    iVar10 = (int)pUVar12->_padding_;
    if (((int)pUVar15->_padding_ < iVar10) ||
       ((longlong *)*(undefined1 **)(pUVar15->_padding_ + (longlong)iVar10 * 8) !=
        &pUVar12->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((!bVar7) || ((pUVar11->LocalPlayerClass).Class.field0_0x0.DebugPtr == (UClass *)0x0))
    goto LAB_147bd3e3e;
  }
  this_02.DebugPtr = (UClass *)0x0;
  if (this->WorldContext == (FWorldContext *)0x0) {
LAB_147bd3ea6:
    if ((this->WorldContext != (FWorldContext *)0x0) &&
       (this->WorldContext->RunAsDedicated != false)) {
      ::FString::PrintfImpl(&local_140,L"Dedicated servers cannot have local players");
      if (param_2 != &local_140) {
        pFVar18 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar18 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar18);
        }
        (param_2->Data).AllocatorInstance.Data = local_140.Data.AllocatorInstance.Data;
        (param_2->Data).ArrayNum = local_140.Data.ArrayNum;
        (param_2->Data).ArrayMax = local_140.Data.ArrayMax;
        local_140.Data.ArrayNum = 0;
        local_140.Data.ArrayMax = 0;
        local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      return (ULocalPlayer *)0x0;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7374835335475233615>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameInstance.cpp"
                       ,0x34f,"IsDedicatedServerInstance()");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pUVar13 = (ULocalPlayer *)(*pcVar3)();
      return pUVar13;
    }
    iVar10 = 1;
  }
  else {
    pUVar2 = (this->WorldContext->GameViewport).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar2 == (UGameViewportClient *)0x0) goto LAB_147bd3ea6;
      iVar10 = pUVar2->MaxSplitscreenPlayers;
    }
    else {
      if (pUVar2 == (UGameViewportClient *)0x0) goto LAB_147bd3ea6;
      UE::GC::MarkAsReachable((UObject *)pUVar2);
      iVar10 = pUVar2->MaxSplitscreenPlayers;
    }
  }
  local_144 = iVar10;
  pUVar13 = FindLocalPlayerFromPlatformUserId(this,param_1);
  iVar4 = local_144;
  if (pUVar13 == (ULocalPlayer *)0x0) {
    if ((this->LocalPlayers).ArrayNum < iVar10) {
      if (param_1.InternalId == -1) {
        TVar19.DebugPtr = this_02.DebugPtr;
        if (0 < iVar10) {
          do {
            pIVar14 = IPlatformInputDeviceMapper::Get();
            (**(code **)(pIVar14->_padding_ + 0xb8))(pIVar14,local_110,TVar19.DebugPtr);
            pFVar18 = (this->LocalPlayers).AllocatorInstance.Data;
            iVar1 = (this->LocalPlayers).ArrayNum;
            if (local_110[0] != -1) {
              param_1.InternalId = local_110[0];
            }
            local_f8 = pFVar18 + (longlong)iVar1 * 8;
            while( true ) {
              if ((this->LocalPlayers).ArrayNum != iVar1) {
                local_148 = 0;
                `TCheckedPointerIterator<TObjectPtr<ULocalPlayer>_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_148);
              }
              param_2 = local_e8;
              iVar10 = local_144;
              if (pFVar18 == local_f8) goto LAB_147bd4080;
              if ((*(longlong *)pFVar18 != 0) &&
                 (*(int *)(*(longlong *)pFVar18 + 0xf0) == TVar19._0_4_)) break;
              pFVar18 = pFVar18 + 8;
            }
            TVar19._0_4_ = TVar19._0_4_ + 1;
            TVar19._4_4_ = 0;
          } while ((int)TVar19._0_4_ < iVar4);
        }
LAB_147bd4080:
        if ((iVar10 <= param_1.InternalId) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("UserId.GetInternalId() < MaxSplitscreenPlayers",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameInstance.cpp"
                               ,0x370,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          pUVar13 = (ULocalPlayer *)(*pcVar3)();
          return pUVar13;
        }
      }
      else if ((iVar10 <= param_1.InternalId) && (2 < (byte)LogPlayerManagement._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
      }
      local_f0.ComparisonIndex.Value = 0;
      local_f0.Number = 0;
      pUVar11 = GetEngine(this);
      pUVar15 = (pUVar11->LocalPlayerClass).Class.field0_0x0.DebugPtr;
      TVar19.DebugPtr = this_02.DebugPtr;
      if ((pUVar15 != (UClass *)0x0) &&
         (pUVar12 = Z_Construct_UClass_ULocalPlayer_NoRegister(), pUVar12 != (UClass *)0x0)) {
        iVar10 = (int)pUVar12->_padding_;
        if (((int)pUVar15->_padding_ < iVar10) ||
           ((longlong *)*(undefined1 **)(pUVar15->_padding_ + (longlong)iVar10 * 8) !=
            &pUVar12->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          TVar19.DebugPtr = (pUVar11->LocalPlayerClass).Class.field0_0x0.DebugPtr;
        }
      }
      pUVar11 = GetEngine(this);
      FVar5 = local_f0;
      if (local_f0 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar11,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar15 = Z_Construct_UClass_ULocalPlayer_NoRegister();
      CheckIsClassChildOf_Internal(pUVar15,TVar19.DebugPtr);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,TVar19.DebugPtr);
      FVar6 = local_f0;
      local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_c8._56_8_ = (UPackage *)0x0;
      local_f0.ComparisonIndex = FVar5.ComparisonIndex.Value;
      local_f0.Number = FVar5.Number;
      local_c8._16_4_ = local_f0.ComparisonIndex.Value;
      local_c8._20_4_ = local_f0.Number;
      local_c8._24_4_ = RF_NoFlags;
      local_c8._40_8_ = (UObject *)0x0;
      local_c8[0x20] = false;
      local_f0 = FVar6;
      local_c8._8_8_ = pUVar11;
      this_01.DebugPtr =
           (UClass *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar16 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar16 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      ULocalPlayer::SetConnectionIdentifier
                ((ULocalPlayer *)this_01.DebugPtr,NextLocalPlayerIdentifier);
      NextLocalPlayerIdentifier = NextLocalPlayerIdentifier + 1;
      iVar10 = (**(code **)(this->_padding_ + 0x330))(this,this_01.DebugPtr,param_1.InternalId);
      if (this->WorldContext != (FWorldContext *)0x0) {
        this_02 = (TObjectPtr<UClass>_u_0)(this->WorldContext->ThisCurrentWorld).field0_0x0.DebugPtr
        ;
      }
      if (((local_147 == '\0') || (iVar10 == -1)) || ((UWorld *)this_02.DebugPtr == (UWorld *)0x0))
      goto LAB_147bd4251;
      EVar9 = UWorld::InternalGetNetMode((UWorld *)this_02.DebugPtr);
      if (EVar9 == NM_Client) {
        bVar7 = UWorld::IsPlayingReplay((UWorld *)this_02.DebugPtr);
        if (!bVar7) {
          local_108 = (FString *)0x0;
          local_100 = 0;
          (**(code **)((this_01.DebugPtr)->_padding_ + 800))(this_01.DebugPtr,&local_108);
          DestructItems<FString,int>(local_108,(int)local_100);
          if (local_108 != (FString *)0x0) {
            FMemory::Free(local_108);
          }
          goto LAB_147bd4251;
        }
        this_00 = (((TObjectPtr<UDemoNetDriver> *)&((this_02.DebugPtr)->FuncMap).field_0x10)->
                  field0_0x0).DebugPtr;
        if (this_00 == (UDemoNetDriver *)0x0) goto LAB_147bd4251;
        cVar8 = UDemoNetDriver::SpawnSplitscreenViewer
                          (this_00,(ULocalPlayer *)this_01.DebugPtr,(UWorld *)this_02.DebugPtr);
      }
      else {
        pcVar3 = *(code **)((this_01.DebugPtr)->_padding_ + 0x308);
        ::FString::FString(&local_e0,"");
        cVar8 = (*pcVar3)(this_01.DebugPtr,&local_e0,param_2,this_02.DebugPtr);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
      }
      if (cVar8 == '\0') {
        (**(code **)(this->_padding_ + 0x338))(this,this_01.DebugPtr);
        this_01.DebugPtr = (UClass *)0x0;
      }
      goto LAB_147bd4251;
    }
    ::FString::PrintfImpl
              ((FString *)&local_120.ObjectPtr,
               L"Maximum number of players (%d) already created.  Unable to create more.");
    TVar19 = local_120;
    if ((TObjectPtr<UClass>_u_0 *)param_2 != &local_120) {
      pFVar18 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_120;
      (param_2->Data).ArrayNum = (int)local_118;
      (param_2->Data).ArrayMax = local_118._4_4_;
      local_118 = 0;
      local_120.DebugPtr = (UClass *)0x0;
      TVar19.DebugPtr = this_02.DebugPtr;
    }
  }
  else {
    ::FString::PrintfImpl
              ((FString *)&local_130.ObjectPtr,
               L"A local player already exists for PlatformUserId %d,");
    TVar19 = local_130;
    if ((TObjectPtr<UClass>_u_0 *)param_2 != &local_130) {
      pFVar18 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_130;
      (param_2->Data).ArrayNum = (int)local_128;
      (param_2->Data).ArrayMax = local_128._4_4_;
      local_128 = 0;
      local_130.DebugPtr = (UClass *)0x0;
      TVar19.DebugPtr = this_02.DebugPtr;
    }
  }
  this_01.DebugPtr = this_02.DebugPtr;
  if ((UWorld *)TVar19.DebugPtr != (UWorld *)0x0) {
    FMemory::Free(TVar19.DebugPtr);
    this_01.DebugPtr = (UClass *)0x0;
  }
LAB_147bd4251:
  if ((param_2->Data).ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar10 = FGenericPlatformStricmp::Stricmp(pwVar17,L"");
  if ((iVar10 != 0) && (4 < (byte)LogPlayerManagement._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
  }
  return (ULocalPlayer *)this_01.DebugPtr;
}

// CreateMinimalNetRPCWorld @ 147bd43a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __cdecl
UGameInstance::CreateMinimalNetRPCWorld(FName param_1,UPackage **param_2,UWorld **param_3)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UPackage *pUVar4;
  UWorld *pUVar5;
  longlong *plVar6;
  undefined1 auStack_178 [32];
  FName local_158;
  FWorldInitializationValues local_150;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (param_1 == (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InPackageName.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameInstance.cpp"
                       ,0xdf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FPackageName::GetShortFName(&local_158);
  if (param_1 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)0x0,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar3 = Z_Construct_UClass_UPackage_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_138,pUVar3);
  local_138._8_8_ = (UObject *)0x0;
  local_138._48_8_ = (FObjectInstancingGraph *)0x0;
  local_138._56_8_ = (UPackage *)0x0;
  local_138._24_4_ = RF_Transient;
  local_138._40_8_ = (UObject *)0x0;
  local_138[0x20] = false;
  local_138._16_8_ = param_1;
  pUVar4 = (UPackage *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138)
  ;
  if (local_138._64_8_ != 0) {
    plVar6 = (longlong *)(local_138 + 0x50);
    if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_138._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  *param_2 = pUVar4;
  if ((atomic<unsigned_int>)((uint)pUVar4->PackageFlagsPrivate | 0x20000) !=
      pUVar4->PackageFlagsPrivate) {
    LOCK();
    pUVar4->PackageFlagsPrivate =
         (atomic<unsigned_int>)((uint)pUVar4->PackageFlagsPrivate | 0x20000);
    UNLOCK();
  }
  pUVar4 = *param_2;
  if (local_158 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar3);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = local_158.ComparisonIndex.Value;
  local_b8._20_4_ = local_158.Number;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = pUVar4;
  pUVar5 = (UWorld *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  *param_3 = pUVar5;
  local_150._0_4_ = local_150._0_4_ & 0xffffe000 ^ 0x1000;
  (pUVar5->WorldType).Value = '\x06';
  local_150.DefaultGameMode.Class.field0_0x0 = (TObjectPtr<UClass>)(TObjectPtr<UClass>_u_0)0x0;
  UWorld::InitializeNewWorld(*param_3,&local_150,false);
  return;
}

// DebugCreatePlayer @ 147bd4860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::DebugCreatePlayer(UGameInstance *this,int param_1)

{
  IPlatformInputDeviceMapper *pIVar1;
  ULocalPlayer *pUVar2;
  int *piVar3;
  int iVar4;
  FPlatformUserId local_res18 [2];
  int local_res20 [2];
  undefined1 local_28 [8];
  FString local_20;
  
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  FGenericPlatformMisc::GetPlatformUserForUserIndex((int)local_res18);
  local_res20[0] = -1;
  pIVar1 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar1->_padding_ + 0xb0))(pIVar1,param_1,local_res18,local_res20);
  pUVar2 = CreateLocalPlayer(this,local_res18[0],&local_20,true);
  iVar4 = local_20.Data.ArrayNum + -1;
  if (local_20.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if ((iVar4 < 1) && (pUVar2 != (ULocalPlayer *)0x0)) {
    local_res20[0] = (pUVar2->PlatformUserId).InternalId;
    local_res18[0].InternalId = -1;
    pIVar1 = IPlatformInputDeviceMapper::Get();
    (**(code **)(pIVar1->_padding_ + 0xb0))(pIVar1,param_1,local_res20,local_res18);
    piVar3 = (int *)(**(code **)(pIVar1->_padding_ + 0x68))
                              (pIVar1,local_28,local_res18[0].InternalId);
    if (*piVar3 == -1) {
      (**(code **)(pIVar1->_padding_ + 0x88))(pIVar1,local_res18[0].InternalId,local_res20[0],3);
    }
  }
  else if (1 < (byte)LogPlayerManagement._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

// DebugRemovePlayer @ 147bd49a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::DebugRemovePlayer(UGameInstance *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->LocalPlayers).AllocatorInstance.Data;
  iVar2 = (this->LocalPlayers).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->LocalPlayers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULocalPlayer>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((*(longlong *)pFVar3 != 0) && (*(int *)(*(longlong *)pFVar3 + 0xf0) == param_1)) {
      (**(code **)(this->_padding_ + 0x338))(this);
      return;
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// DelayCompletionOfPendingNetGameTravel @ 147bd4cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameInstance::DelayCompletionOfPendingNetGameTravel(UGameInstance *this)

{
  return false;
}

// DelayPendingNetGameTravel @ 147bd4ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameInstance::DelayPendingNetGameTravel(UGameInstance *this)

{
  return false;
}

// EnableListenServer @ 147bd8b10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameInstance::EnableListenServer(UGameInstance *this,bool param_1,int param_2)

{
  UWorld *this_00;
  bool bVar1;
  ENetMode EVar2;
  FURL local_78;
  
  if ((((this->WorldContext == (FWorldContext *)0x0) ||
       (this_00 = (this->WorldContext->ThisCurrentWorld).field0_0x0.DebugPtr,
       this_00 == (UWorld *)0x0)) || (bVar1 = UWorld::IsGameWorld(this_00), !bVar1)) ||
     (EVar2 = UWorld::InternalGetNetMode(this_00), EVar2 == NM_Client)) {
    return false;
  }
  if (param_1) {
    if (param_2 != 0) {
      (this->WorldContext->LastURL).Port = param_2;
    }
    FURL::AddOption(&this->WorldContext->LastURL,L"Listen");
    if ((this_00->NetDriver).field0_0x0.DebugPtr == (UNetDriver *)0x0) {
      FURL::FURL(&local_78,&this->WorldContext->LastURL);
      bVar1 = UWorld::Listen(this_00,&local_78);
      FURL::~FURL(&local_78);
      return bVar1;
    }
  }
  else {
    if (EVar2 == NM_DedicatedServer) {
      if ((byte)LogGameSession._0_1_ < 3) {
        return false;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameSession);
      return false;
    }
    FURL::RemoveOption(&this->WorldContext->LastURL,L"Listen",(wchar_t *)0x0,&GGameIni);
    (this->WorldContext->LastURL).Port = FURL::UrlConfig.DefaultPort;
    if ((EVar2 == NM_ListenServer) && (2 < (byte)LogGameSession._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGameSession);
    }
  }
  return true;
}

// Exec @ 147bd9ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameInstance::Exec(UGameInstance *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  wchar_t *local_res18 [2];
  
  local_res18[0] = param_2;
  bVar1 = FParse::Command(local_res18,L"OPEN",true);
  if (bVar1) {
    uVar2 = (**(code **)(*(longlong *)&this[-1].SubsystemCollection.field_0xa0 + 0x2b0))
                      (&this[-1].SubsystemCollection.field_0xa0,local_res18[0],param_3,param_1);
    return (bool)uVar2;
  }
  bVar1 = FParse::Command(local_res18,L"DISCONNECT",true);
  if (bVar1) {
    uVar2 = (**(code **)(*(longlong *)&this[-1].SubsystemCollection.field_0xa0 + 0x2b8))
                      (&this[-1].SubsystemCollection.field_0xa0,local_res18[0],param_3,param_1);
    return (bool)uVar2;
  }
  bVar1 = FParse::Command(local_res18,L"RECONNECT",true);
  if (bVar1) {
    uVar2 = (**(code **)(*(longlong *)&this[-1].SubsystemCollection.field_0xa0 + 0x2c0))
                      (&this[-1].SubsystemCollection.field_0xa0,local_res18[0],param_3,param_1);
    return (bool)uVar2;
  }
  bVar1 = FParse::Command(local_res18,L"TRAVEL",true);
  if (bVar1) {
    uVar2 = (**(code **)(*(longlong *)&this[-1].SubsystemCollection.field_0xa0 + 0x2c8))
                      (&this[-1].SubsystemCollection.field_0xa0,local_res18[0],param_3,param_1);
    return (bool)uVar2;
  }
  return false;
}

// FindLocalPlayerFromControllerId @ 147bdc7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall
UGameInstance::FindLocalPlayerFromControllerId(UGameInstance *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ULocalPlayer *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->LocalPlayers).AllocatorInstance.Data;
  iVar2 = (this->LocalPlayers).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->LocalPlayers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULocalPlayer>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pUVar3 = *(ULocalPlayer **)pFVar4;
    if ((pUVar3 != (ULocalPlayer *)0x0) && (pUVar3->ControllerId == param_1)) {
      return pUVar3;
    }
    pFVar4 = pFVar4 + 8;
  }
  return (ULocalPlayer *)0x0;
}

// FindLocalPlayerFromDeviceId @ 147bdc850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall
UGameInstance::FindLocalPlayerFromDeviceId(UGameInstance *this,FInputDeviceId param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ULocalPlayer *pUVar3;
  IPlatformInputDeviceMapper *pIVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  int local_res18 [2];
  
  pIVar4 = IPlatformInputDeviceMapper::Get();
  (**(code **)(pIVar4->_padding_ + 0x68))(pIVar4,local_res18,param_1.InternalId);
  pFVar5 = (this->LocalPlayers).AllocatorInstance.Data;
  iVar2 = (this->LocalPlayers).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->LocalPlayers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULocalPlayer>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    pUVar3 = *(ULocalPlayer **)pFVar5;
    if ((pUVar3 != (ULocalPlayer *)0x0) && ((pUVar3->PlatformUserId).InternalId == local_res18[0]))
    {
      return pUVar3;
    }
    pFVar5 = pFVar5 + 8;
  }
  return (ULocalPlayer *)0x0;
}

// FindLocalPlayerFromPlatformUserId @ 147bdc8e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall
UGameInstance::FindLocalPlayerFromPlatformUserId(UGameInstance *this,FPlatformUserId param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ULocalPlayer *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->LocalPlayers).AllocatorInstance.Data;
  iVar2 = (this->LocalPlayers).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->LocalPlayers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<ULocalPlayer>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pUVar3 = *(ULocalPlayer **)pFVar4;
    if ((pUVar3 != (ULocalPlayer *)0x0) &&
       ((pUVar3->PlatformUserId).InternalId == param_1.InternalId)) {
      return pUVar3;
    }
    pFVar4 = pFVar4 + 8;
  }
  return (ULocalPlayer *)0x0;
}

// FindLocalPlayerFromUniqueNetId @ 147bdc950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall
UGameInstance::FindLocalPlayerFromUniqueNetId(UGameInstance *this,FUniqueNetIdRepl *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FUniqueNetId *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  ULocalPlayer *pUVar7;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar8;
  FUniqueNetId *pFVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  TSharedPtr<FUniqueNetId_const_,1> local_70;
  FUniqueNetIdWrapper local_60;
  void *local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar11 = (this->LocalPlayers).AllocatorInstance.Data;
  iVar2 = (this->LocalPlayers).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 8;
  do {
    if ((this->LocalPlayers).ArrayNum != iVar2) {
      local_78[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<ULocalPlayer>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_78);
    }
    if (pFVar11 == pFVar1) {
      return (ULocalPlayer *)0x0;
    }
    pUVar7 = *(ULocalPlayer **)pFVar11;
    if (pUVar7 != (ULocalPlayer *)0x0) {
      (**(code **)(pUVar7->_padding_ + 0x360))(pUVar7,&local_60);
      uVar10 = (ulonglong)local_60.Variant.TypeIndex;
      if ((1 < uVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (ULocalPlayer *)(*pcVar4)();
        return pUVar7;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar10 + 4) == '\0') {
        if ((local_60.Variant.TypeIndex != 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pUVar7 = (ULocalPlayer *)(*pcVar4)();
          return pUVar7;
        }
        if (((uint)local_60.Variant._padding_ & 0xffffff) != 0) goto LAB_147bdca8f;
      }
      else {
        if ((local_60.Variant.TypeIndex != 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pUVar7 = (ULocalPlayer *)(*pcVar4)();
          return pUVar7;
        }
        if (((longlong *)CONCAT44(local_60.Variant._padding_._4_4_,(uint)local_60.Variant._padding_)
             != (longlong *)0x0) &&
           (cVar6 = (**(code **)(*(longlong *)
                                  CONCAT44(local_60.Variant._padding_._4_4_,
                                           (uint)local_60.Variant._padding_) + 0x28))(),
           cVar6 != '\0')) {
LAB_147bdca8f:
          pTVar8 = FUniqueNetIdWrapper::GetV1(&local_60,&local_70);
          if ((pTVar8->Object == (FUniqueNetId *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            pUVar7 = (ULocalPlayer *)(*pcVar4)();
            return pUVar7;
          }
          pFVar3 = pTVar8->Object;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_70.SharedReferenceCount.ReferenceController);
          bVar5 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
          cVar6 = (**(code **)(*(longlong *)pFVar3 + 0x28))(pFVar3);
          if (bVar5 == (bool)cVar6) {
            if (!bVar5) {
LAB_147bdcbcb:
              local_60._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
              if (local_40 != (void *)0x0) {
                FMemory::Free(local_40);
              }
              if ((1 < local_60.Variant.TypeIndex) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0xd4,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                pUVar7 = (ULocalPlayer *)(*pcVar4)();
                return pUVar7;
              }
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[local_60.Variant.TypeIndex])(&local_60.Variant);
              return pUVar7;
            }
            uVar10 = (ulonglong)(byte)param_1->_padding_;
            if ((1 < uVar10) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              pUVar7 = (ULocalPlayer *)(*pcVar4)();
              return pUVar7;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar10 + 4) != '\0') {
              pTVar8 = FUniqueNetIdWrapper::GetV1Unsafe((FUniqueNetIdWrapper *)param_1);
              pFVar9 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(pTVar8);
              cVar6 = (*(code *)**(undefined8 **)pFVar9)(pFVar9,pFVar3);
              if (cVar6 != '\0') goto LAB_147bdcbcb;
            }
          }
        }
      }
      local_60._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
      if (local_40 != (void *)0x0) {
        FMemory::Free(local_40);
      }
      uVar10 = (ulonglong)local_60.Variant.TypeIndex;
      if ((1 < local_60.Variant.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pUVar7 = (ULocalPlayer *)(*pcVar4)();
        return pUVar7;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar10])(&local_60.Variant);
    }
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// FindLocalPlayerFromUniqueNetId @ 147bdcc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall
UGameInstance::FindLocalPlayerFromUniqueNetId(UGameInstance *this,FUniqueNetId *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  ULocalPlayer *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  FUniqueNetIdRepl local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pTVar4 = *(TReferenceControllerBase<1> **)&param_1->field_0x10;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = pTVar4;
  pTVar8 = pTVar7;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      pTVar6 = pTVar7;
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_147bdccc5;
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar10 = aVar2 == aVar3;
      if (bVar10) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar10);
    pTVar6 = pTVar4;
    pTVar8 = *(TReferenceControllerBase<1> **)&param_1->field_0x8;
  }
LAB_147bdccc5:
  pTVar4 = (TReferenceControllerBase<1> *)&pTVar8->SharedReferenceCount;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = pTVar7;
  }
  if ((pTVar4 != (TReferenceControllerBase<1> *)&param_1->field_0x8) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x69a,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    pUVar5 = (ULocalPlayer *)(*pcVar1)();
    return pUVar5;
  }
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (ULocalPlayer *)(*pcVar1)();
      return pUVar5;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (ULocalPlayer *)(*pcVar1)();
      return pUVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48._padding_._0_1_ = 0;
  local_48._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  local_48.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ReplicationBytes.ArrayNum = 0;
  local_48.ReplicationBytes.ArrayMax = 0;
  local_48._padding_ = (longlong)pTVar8;
  local_48._padding_ = (longlong)pTVar6;
  pUVar5 = FindLocalPlayerFromUniqueNetId(this,&local_48);
  local_48._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  if (local_48.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ReplicationBytes.AllocatorInstance.Data);
  }
  uVar9 = (ulonglong)(byte)local_48._padding_;
  if ((1 < (byte)local_48._padding_) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    pUVar5 = (ULocalPlayer *)(*pcVar1)();
    return pUVar5;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_48._padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(&local_48._padding_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return pUVar5;
}

// FindLocalPlayerFromUniqueNetId @ 147bdce50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall
UGameInstance::FindLocalPlayerFromUniqueNetId
          (UGameInstance *this,TSharedPtr<FUniqueNetId_const_,1> *param_1)

{
  ULocalPlayer *pUVar1;
  
  if (param_1->Object == (FUniqueNetId *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return (ULocalPlayer *)0x0;
  }
  pUVar1 = FindLocalPlayerFromUniqueNetId(this,param_1->Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pUVar1;
}

// FinishDestroy @ 147bdd580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::FinishDestroy(UGameInstance *this)

{
  FTimerManager *pFVar1;
  FLatentActionManager *this_00;
  
  pFVar1 = this->TimerManager;
  if (pFVar1 != (FTimerManager *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->TimerManager = (FTimerManager *)0x0;
  }
  this_00 = this->LatentActionManager;
  if (this_00 != (FLatentActionManager *)0x0) {
    FLatentActionManager::~FLatentActionManager(this_00);
    ::operator_delete(this_00,0x60);
    this->LatentActionManager = (FLatentActionManager *)0x0;
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetDesiredReplicationSystem @ 147bdf8e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EReplicationSystem __thiscall
UGameInstance::GetDesiredReplicationSystem(UGameInstance *this,FName param_1)

{
  UWorld *pUVar1;
  AGameModeBase *pAVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FName FVar4;
  undefined1 local_res10 [24];
  
  FVar3 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  if ((((param_1 == FVar4) && (this->WorldContext != (FWorldContext *)0x0)) &&
      (pUVar1 = (this->WorldContext->ThisCurrentWorld).field0_0x0.DebugPtr, pUVar1 != (UWorld *)0x0)
      ) && (pAVar2 = (pUVar1->AuthorityGameMode).field0_0x0.DebugPtr, pAVar2 != (AGameModeBase *)0x0
           )) {
    return pAVar2->GameNetDriverReplicationSystem;
  }
  return Default;
}

// GetEngine @ 147bdfd60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UEngine * __thiscall UGameInstance::GetEngine(UGameInstance *this)

{
  int iVar1;
  UEngine *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar2 = (UEngine *)this->_padding_;
  if (pUVar2 == (UEngine *)0x0) {
    pFVar4 = GetTypeName<UEngine>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = Z_Construct_UClass_UEngine_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    return pUVar2;
  }
  pFVar4 = GetTypeName<UEngine>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar2);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetFirstGamePlayer @ 147be0470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall UGameInstance::GetFirstGamePlayer(UGameInstance *this)

{
  ULocalPlayer *pUVar1;
  
  if (0 < (this->LocalPlayers).ArrayNum) {
    pUVar1 = *(ULocalPlayer **)(this->LocalPlayers).AllocatorInstance.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (ULocalPlayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (ULocalPlayer *)0x0;
}

// GetFirstLocalPlayerController @ 147be04c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall
UGameInstance::GetFirstLocalPlayerController(UGameInstance *this,UWorld *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  char cVar6;
  APlayerController *pAVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  if ((param_1 == (UWorld *)0x0) ||
     ((this->WorldContext != (FWorldContext *)0x0 &&
      (param_1 == (this->WorldContext->ThisCurrentWorld).field0_0x0.DebugPtr)))) {
    pFVar8 = (this->LocalPlayers).AllocatorInstance.Data;
    iVar2 = (this->LocalPlayers).ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->LocalPlayers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<ULocalPlayer>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar8 == pFVar1) goto LAB_147be05dc;
      if ((*(longlong *)pFVar8 != 0) &&
         (pAVar7 = *(APlayerController **)(*(longlong *)pFVar8 + 0x30),
         pAVar7 != (APlayerController *)0x0)) break;
      pFVar8 = pFVar8 + 8;
    }
  }
  else {
    UWorld::GetPlayerControllerIterator(param_1,&local_18);
    for (; (iVar2 = local_18.Index, pTVar4 = local_18.Container, -1 < local_18.Index &&
           (local_18.Index < (local_18.Container)->ArrayNum)); local_18.Index = local_18.Index + 1)
    {
      if ((local_18.Index < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pAVar7 = (APlayerController *)(*pcVar3)();
        return pAVar7;
      }
      pAVar7 = (APlayerController *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar4->AllocatorInstance).Data + (longlong)iVar2 * 8));
      if ((pAVar7 != (APlayerController *)0x0) &&
         (cVar6 = (**(code **)(pAVar7->_padding_ + 0x7f0))(pAVar7), cVar6 != '\0')) {
        return pAVar7;
      }
    }
LAB_147be05dc:
    pAVar7 = (APlayerController *)0x0;
  }
  return pAVar7;
}

// GetGameViewportClient @ 147be0650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameViewportClient * __thiscall UGameInstance::GetGameViewportClient(UGameInstance *this)

{
  UGameViewportClient *pUVar1;
  
  if (this->WorldContext != (FWorldContext *)0x0) {
    pUVar1 = (this->WorldContext->GameViewport).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UGameViewportClient *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UGameViewportClient *)0x0;
}

// GetLocalPlayerByIndex @ 147be29b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall UGameInstance::GetLocalPlayerByIndex(UGameInstance *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ULocalPlayer *pUVar4;
  
  if ((-1 < param_1) && (param_1 < (this->LocalPlayers).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->LocalPlayers).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (ULocalPlayer *)(*pcVar1)();
        return pUVar4;
      }
    }
    return *(ULocalPlayer **)((this->LocalPlayers).AllocatorInstance.Data + (longlong)param_1 * 8);
  }
  return (ULocalPlayer *)0x0;
}

// GetLocalPlayerIterator @ 147be2a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TIndexedContainerIterator<TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_>_const_,ULocalPlayer_*_const,int>
* __thiscall
UGameInstance::GetLocalPlayerIterator
          (UGameInstance *this,
          TIndexedContainerIterator<TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_>_const_,ULocalPlayer_*_const,int>
          *__return_storage_ptr__)

{
  __return_storage_ptr__->Index = 0;
  __return_storage_ptr__->Container =
       (TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *)&this->LocalPlayers;
  return __return_storage_ptr__;
}

// GetLocalPlayers @ 147be2a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> * __thiscall
UGameInstance::GetLocalPlayers(UGameInstance *this)

{
  return (TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *)&this->LocalPlayers;
}

// GetMapOverrideName @ 147be2c60

bool __cdecl UGameInstance::GetMapOverrideName(wchar_t *param_1,FString *param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ForAnyElementType FVar5;
  int iVar6;
  int iVar7;
  wchar_t *local_res8;
  FString local_18;
  
  wVar1 = *param_1;
  local_res8 = param_1;
  do {
    if (wVar1 == L'\0') {
      return false;
    }
    FParse::Token(&local_18,&local_res8,false);
    iVar6 = local_18.Data.ArrayNum;
    if (1 < iVar6) {
      iVar7 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar7 = 0;
      }
      if (iVar7 < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        iVar6 = local_18.Data.ArrayNum;
      }
      if (*(wchar_t *)local_18.Data.AllocatorInstance.Data != L'-') {
        iVar7 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar7 = 0;
        }
        ::FString::AssignRange(param_2,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar7);
LAB_147be2d56:
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        return true;
      }
      FVar5.Data = (FScriptContainerElement *)L"";
      if (iVar6 != 0) {
        FVar5.Data = local_18.Data.AllocatorInstance.Data;
      }
      bVar3 = FParse::Value((wchar_t *)FVar5.Data,L"-map=",param_2,true,(wchar_t **)0x0);
      if (bVar3) goto LAB_147be2d56;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    wVar1 = *local_res8;
  } while( true );
}

// GetNumLocalPlayers @ 147be3820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall UGameInstance::GetNumLocalPlayers(UGameInstance *this)

{
  return (this->LocalPlayers).ArrayNum;
}

// GetOnlinePlatformName @ 147be39d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall UGameInstance::GetOnlinePlatformName(UGameInstance *this)

{
  UOnlineEngineInterface *pUVar1;
  FName in_RDX;
  
  pUVar1 = UOnlineEngineInterface::Get();
  (**(code **)(*(longlong *)pUVar1 + 0x2d8))(pUVar1);
  return in_RDX;
}

// GetOnlineSessionClass @ 147be3a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSubclassOf<UOnlineSession> __thiscall UGameInstance::GetOnlineSessionClass(UGameInstance *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_UOnlineSession_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UOnlineSession>)in_RDX.field0_0x0;
}

// GetPrimaryPlayerController @ 147be44b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall
UGameInstance::GetPrimaryPlayerController(UGameInstance *this,bool param_1)

{
  UWorld *this_00;
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  APlayerController *pAVar5;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_18;
  
  if ((this->WorldContext == (FWorldContext *)0x0) ||
     (this_00 = (this->WorldContext->ThisCurrentWorld).field0_0x0.DebugPtr, this_00 == (UWorld *)0x0
     )) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7374835335475233888>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameInstance.cpp"
                       ,0x460,"World");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pAVar5 = (APlayerController *)(*pcVar1)();
      return pAVar5;
    }
    return (APlayerController *)0x0;
  }
  UWorld::GetPlayerControllerIterator(this_00,&local_18);
  while( true ) {
    iVar3 = local_18.Index;
    pTVar2 = local_18.Container;
    if ((local_18.Index < 0) || ((local_18.Container)->ArrayNum <= local_18.Index)) {
      return (APlayerController *)0x0;
    }
    if ((local_18.Index < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    pAVar5 = (APlayerController *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
    if (((pAVar5 != (APlayerController *)0x0) && (pAVar5->_padding_ != 0)) &&
       (bVar4 = APlayerController::IsPrimaryPlayer(pAVar5), bVar4)) {
      if (!param_1) {
        return pAVar5;
      }
      bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)(pAVar5->_padding_ + 0x2d0));
      if (bVar4) {
        return pAVar5;
      }
    }
    local_18.Index = local_18.Index + 1;
  }
  pcVar1 = (code *)swi(3);
  pAVar5 = (APlayerController *)(*pcVar1)();
  return pAVar5;
}

// GetPrimaryPlayerUniqueIdRepl @ 147be4600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FUniqueNetIdRepl * __thiscall
UGameInstance::GetPrimaryPlayerUniqueIdRepl
          (UGameInstance *this,FUniqueNetIdRepl *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FUniqueNetIdRepl *pFVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined **local_68;
  undefined1 local_60 [16];
  byte local_50;
  void *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  plVar7 = (longlong *)0x0;
  plVar8 = plVar7;
  while ((uVar6 = (uint)plVar7, -1 < (int)uVar6 &&
         (iVar1 = (this->LocalPlayers).ArrayNum, (int)uVar6 < iVar1))) {
    if ((int)uVar6 < 0) {
      local_78 = (longlong)(int)uVar6;
      local_70 = (longlong)iVar1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FUniqueNetIdRepl *)(*pcVar2)();
        return pFVar5;
      }
    }
    lVar9 = (longlong)(int)uVar6;
    if (*(longlong *)((this->LocalPlayers).AllocatorInstance.Data + lVar9 * 8) == 0) break;
    iVar1 = (this->LocalPlayers).ArrayNum;
    uVar4 = 0;
    if ((int)uVar6 < iVar1) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      local_78 = lVar9;
      local_70 = (longlong)iVar1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FUniqueNetIdRepl *)(*pcVar2)();
        return pFVar5;
      }
    }
    plVar8 = *(longlong **)((this->LocalPlayers).AllocatorInstance.Data + lVar9 * 8);
    if ((plVar8 != (longlong *)0x0) && ((APlayerController *)plVar8[6] != (APlayerController *)0x0))
    {
      bVar3 = APlayerController::IsPrimaryPlayer((APlayerController *)plVar8[6]);
      if (bVar3) break;
    }
    plVar7 = (longlong *)(ulonglong)(uVar6 + 1);
  }
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->ReplicationBytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ReplicationBytes).ArrayNum = 0;
  (__return_storage_ptr__->ReplicationBytes).ArrayMax = 0;
  __return_storage_ptr__->_padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  if (plVar8 != (longlong *)0x0) {
    pFVar5 = (FUniqueNetIdRepl *)(**(code **)(*plVar8 + 0x360))(plVar8,&local_68);
    FUniqueNetIdRepl::operator=(__return_storage_ptr__,pFVar5);
    local_68 = &___7FUniqueNetIdRepl__6B_;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    if (1 < local_50) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FUniqueNetIdRepl *)(*pcVar2)();
        return pFVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50])(local_60);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147be52d0

UClass * __cdecl UGameInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"GameInstance",
               &Z_Registration_Info_UClass_UGameInstance.InnerSingleton,
               StaticRegisterNativesUGameInstance,0x1f8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Game",InternalConstructor<UGameInstance>,
               InternalVTableHelperCtorCaller<UGameInstance>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameInstance.InnerSingleton;
}

// GetWorld @ 147becec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UGameInstance::GetWorld(UGameInstance *this)

{
  if (this->WorldContext != (FWorldContext *)0x0) {
    return (this->WorldContext->ThisCurrentWorld).field0_0x0.DebugPtr;
  }
  return (UWorld *)0x0;
}

// HandleDemoPlaybackFailure @ 147bed050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameInstance::HandleDemoPlaybackFailure(UGameInstance *this,TNetResult<EReplayResult> *param_1)

{
  return;
}

// HandleDemoPlaybackFailure @ 147bed060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameInstance::HandleDemoPlaybackFailure(UGameInstance *this,Type param_1,FString *param_2)

{
  return;
}

// HandleDemoRecordFailure @ 147bed070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameInstance::HandleDemoRecordFailure(UGameInstance *this,TNetResult<EReplayResult> *param_1)

{
  return;
}

// HandleDisconnectCommand @ 147bed090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameInstance::HandleDisconnectCommand
          (UGameInstance *this,wchar_t *param_1,FOutputDevice *param_2,UWorld *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEngine *pUVar4;
  
  if ((this->WorldContext == (FWorldContext *)0x0) ||
     ((this->WorldContext->ThisCurrentWorld).field0_0x0.DebugPtr != param_3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldContext && WorldContext->World() == InWorld",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameInstance.cpp"
                       ,0x308,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = GetEngine(this);
                    /* WARNING: Could not recover jumptable at 0x000147bed11a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(pUVar4->_padding_ + 0x4c0))(pUVar4,param_1,param_2,param_3);
  return (bool)uVar3;
}

// HandleGameNetControlMessage @ 147bed170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameInstance::HandleGameNetControlMessage
          (UGameInstance *this,UNetConnection *param_1,uchar param_2,FString *param_3)

{
  return;
}

// HandleInputDeviceConnectionChange @ 147bed1d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameInstance::HandleInputDeviceConnectionChange
          (UGameInstance *this,EInputDeviceConnectionState param_1,FPlatformUserId param_2,
          FInputDeviceId param_3)

{
  EInputDeviceConnectionState local_18 [4];
  int local_14;
  int local_10;
  
  local_18[0] = param_1;
  local_14 = param_2.InternalId;
  local_10 = param_3.InternalId;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnInputDeviceConnectionChange,local_18);
  return;
}

// HandleInputDevicePairingChange @ 147bed200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameInstance::HandleInputDevicePairingChange
          (UGameInstance *this,FInputDeviceId param_1,FPlatformUserId param_2,
          FPlatformUserId param_3)

{
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = param_1.InternalId;
  local_14 = param_2.InternalId;
  local_10 = param_3.InternalId;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnUserInputDevicePairingChange,&local_18);
  return;
}

// HandleNetworkError @ 147bed8b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::HandleNetworkError(UGameInstance *this,Type param_1,bool param_2)

{
  UFunction *pUVar1;
  undefined1 local_res18;
  undefined1 local_res19;
  
  local_res18 = (undefined1)param_1;
  local_res19 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UGameInstance_HandleNetworkError);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_res18);
  return;
}

// HandleOpenCommand @ 147bed980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameInstance::HandleOpenCommand
          (UGameInstance *this,wchar_t *param_1,FOutputDevice *param_2,UWorld *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEngine *pUVar4;
  
  if ((this->WorldContext == (FWorldContext *)0x0) ||
     ((this->WorldContext->ThisCurrentWorld).field0_0x0.DebugPtr != param_3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldContext && WorldContext->World() == InWorld",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameInstance.cpp"
                       ,0x300,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = GetEngine(this);
                    /* WARNING: Could not recover jumptable at 0x000147beda0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(pUVar4->_padding_ + 0x4a0))(pUVar4,param_1,param_2,param_3);
  return (bool)uVar3;
}

// HandleReconnectCommand @ 147bedd40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameInstance::HandleReconnectCommand
          (UGameInstance *this,wchar_t *param_1,FOutputDevice *param_2,UWorld *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEngine *pUVar4;
  
  if ((this->WorldContext == (FWorldContext *)0x0) ||
     ((this->WorldContext->ThisCurrentWorld).field0_0x0.DebugPtr != param_3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldContext && WorldContext->World() == InWorld",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameInstance.cpp"
                       ,0x310,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = GetEngine(this);
                    /* WARNING: Could not recover jumptable at 0x000147beddca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(pUVar4->_padding_ + 0x4c8))(pUVar4,param_1,param_2,param_3);
  return (bool)uVar3;
}

// HandleTravelCommand @ 147bee1e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameInstance::HandleTravelCommand
          (UGameInstance *this,wchar_t *param_1,FOutputDevice *param_2,UWorld *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEngine *pUVar4;
  
  if ((this->WorldContext == (FWorldContext *)0x0) ||
     ((this->WorldContext->ThisCurrentWorld).field0_0x0.DebugPtr != param_3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldContext && WorldContext->World() == InWorld",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameInstance.cpp"
                       ,0x318,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pUVar4 = GetEngine(this);
                    /* WARNING: Could not recover jumptable at 0x000147bee26a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(pUVar4->_padding_ + 0x4a8))(pUVar4,param_1,param_2,param_3);
  return (bool)uVar3;
}

// HandleTravelError @ 147bee280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::HandleTravelError(UGameInstance *this,Type param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = (undefined1)param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UGameInstance_HandleTravelError);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// Init @ 147bef3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall UGameInstance::Init(UGameInstance *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  GenericApplication *pGVar5;
  FSharedReferencer<1> FVar6;
  UFunction *pUVar7;
  longlong *plVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  UClass *pUVar13;
  bool bVar14;
  undefined1 auStack_148 [32];
  undefined1 local_128 [32];
  UGameInstance *local_108;
  longlong lStack_100;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  FDelegateAllocation local_f0;
  FDestructionSentinel local_e0;
  FDelegateAllocation *local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId98,"UGameInstance::Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameInstance.cpp"
               ,0x62);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId98);
  }
  pUVar7 = UObject::FindFunctionChecked((UObject *)this,NAME_UGameInstance_ReceiveInit);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar7);
  if (PRIVATE_GIsRunningCommandlet != false) goto LAB_147befa2a;
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 1000))(this,local_128);
  pUVar13 = (UClass *)0x0;
  lVar2 = *plVar8;
  if ((lVar2 != 0) &&
     (pUVar9 = Z_Construct_UClass_UOnlineSession_NoRegister(), pUVar9 != (UClass *)0x0)) {
    iVar1 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar9->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar13 = (UClass *)*plVar8;
    }
  }
  local_108 = (UGameInstance *)0x0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = Z_Construct_UClass_UOnlineSession_NoRegister();
  CheckIsClassChildOf_Internal(pUVar9,pUVar13);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar13);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = this;
  pUVar10 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar8 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar10 == (UObject *)0x0)) {
    (this->OnlineSession).field0_0x0.DebugPtr = (UOnlineSession *)pUVar10;
    if (pUVar10 != (UObject *)0x0) goto LAB_147bef59b;
  }
  else {
    UE::GC::MarkAsReachable(pUVar10);
    (this->OnlineSession).field0_0x0.DebugPtr = (UOnlineSession *)pUVar10;
LAB_147bef59b:
    (**(code **)(*(longlong *)pUVar10 + 0x2b0))(pUVar10);
  }
  if ((this->WorldContext == (FWorldContext *)0x0) || (this->WorldContext->RunAsDedicated == false))
  {
    FSlateApplication::Get();
    FVar6 = FSlateApplicationBase::PlatformApplication.SharedReferenceCount;
    pGVar5 = FSlateApplicationBase::PlatformApplication.Object;
    if (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FSlateApplicationBase::PlatformApplication.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(FSlateApplicationBase::PlatformApplication.SharedReferenceCount.
                 ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pGVar5 != (GenericApplication *)0x0) {
      local_128._8_4_ = 0;
      local_f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      pcVar3 = *(code **)(pGVar5->_padding_ + 0xa0);
      local_128._0_8_ = OnConsoleInput;
      local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_f0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_f8,(FWriteAccessScope *)&local_e0);
      local_c8[0] = &local_f0;
      puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_f0);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &
                   ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar11[2] = uVar12;
        *puVar11 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameInstance____A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar11[3] = 0;
        local_108 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_108);
        puVar11[4] = local_128._0_8_;
        puVar11[5] = CONCAT44(local_128._12_4_,local_128._8_4_);
      }
      if (local_e0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
      }
      (*pcVar3)(pGVar5,&local_f8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_f8,(FWriteAccessScope *)local_128);
      if ((local_f0.DelegateSize != 0) &&
         (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_f0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_f0,0,0,0x10);
        local_f0.DelegateSize = 0;
      }
      if (local_128[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(local_128._12_4_,local_128._8_4_),
                   (FDestructionSentinel *)local_128);
      }
      if (local_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_f0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar6.ReferenceController);
  }
  local_128._8_4_ = 0;
  local_128._0_8_ = _vcall__920__flat______;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNetDelegates::OnReceivedNetworkEncryptionToken,(FWriteAccessScope *)&local_e0);
  local_c8[0] = (FDelegateAllocation *)0x155228c78;
  puVar11 = UE::Core::Private::DelegateAllocate
                      (0x30,(FDelegateAllocation *)
                            &FNetDelegates::OnReceivedNetworkEncryptionToken.field_0x8);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFString__AEBV__TDelegate___A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameInstance____A6AXAEBVFString__AEBV__TDelegate___A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_108 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_108);
    puVar11[4] = local_128._0_8_;
    puVar11[5] = CONCAT44(local_128._12_4_,local_128._8_4_);
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  local_128._8_4_ = 0;
  local_128._0_8_ = _vcall__928__flat______;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNetDelegates::OnReceivedNetworkEncryptionAck,(FWriteAccessScope *)&local_e0);
  local_c8[0] = (FDelegateAllocation *)0x155228c90;
  puVar11 = UE::Core::Private::DelegateAllocate
                      (0x30,(FDelegateAllocation *)
                            &FNetDelegates::OnReceivedNetworkEncryptionAck.field_0x8);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TDelegate___A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameInstance____A6AXAEBV__TDelegate___A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy_____ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_108 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_108);
    puVar11[4] = local_128._0_8_;
    puVar11[5] = CONCAT44(local_128._12_4_,local_128._8_4_);
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  local_128._8_4_ = 0;
  local_128._0_8_ = _vcall__936__flat______;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNetDelegates::OnReceivedNetworkEncryptionFailure,(FWriteAccessScope *)&local_e0);
  local_c8[0] = (FDelegateAllocation *)&FNetDelegates::OnReceivedNetworkEncryptionFailure.field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate
                      (0x30,(FDelegateAllocation *)
                            &FNetDelegates::OnReceivedNetworkEncryptionFailure.field_0x8);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4EEncryptionFailureAction__PEAVUNetConnection___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUGameInstance____A6A_AW4EEncryptionFailureAction__PEAVUNetConnection___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_108 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_108);
    puVar11[4] = local_128._0_8_;
    puVar11[5] = CONCAT44(local_128._12_4_,local_128._8_4_);
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  IPlatformInputDeviceMapper::Get();
  local_128._8_4_ = 0;
  local_128._0_8_ = _vcall__736__flat______;
  lStack_100 = (ulonglong)(uint)local_128._12_4_ << 0x20;
  local_108 = (UGameInstance *)_vcall__736__flat______;
  TMulticastDelegateRegistration<void___cdecl(enum_EInputDeviceConnectionState,FPlatformUserId,FInputDeviceId),FDefaultDelegateUserPolicy>
  ::AddUObject<UGameInstance>
            (&IPlatformInputDeviceMapper::OnInputDeviceConnectionChange,(UGameInstance *)local_128,
             (pmf_44365ad6 *)this);
  local_128._8_4_ = 0;
  local_128._0_8_ = _vcall__744__flat______;
  lStack_100 = (ulonglong)(uint)local_128._12_4_ << 0x20;
  local_108 = (UGameInstance *)_vcall__744__flat______;
  TMulticastDelegateRegistration<void___cdecl(FInputDeviceId,FPlatformUserId,FPlatformUserId),FDefaultDelegateUserPolicy>
  ::AddUObject<UGameInstance>
            ((TMulticastDelegateRegistration<void___cdecl(FInputDeviceId,FPlatformUserId,FPlatformUserId),FDefaultDelegateUserPolicy>
              *)&IPlatformInputDeviceMapper::OnInputDevicePairingChange,(UGameInstance *)local_128,
             (pmf_1232b7b9 *)this);
LAB_147befa2a:
  FSubsystemCollectionBase::Initialize
            ((FSubsystemCollectionBase *)&this->SubsystemCollection,(UObject *)this);
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitializeForMinimalNetRPC @ 147beffd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::InitializeForMinimalNetRPC(UGameInstance *this,FName param_1)

{
  code *pcVar1;
  UWorld *pUVar2;
  bool bVar3;
  UEngine *this_00;
  FWorldContext *pFVar4;
  UWorld *local_res8;
  UPackage *local_res10;
  
  if (param_1 == (FName)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InPackageName.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameInstance.cpp"
                       ,0xcd,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = GetEngine(this);
  pFVar4 = UEngine::CreateNewWorldContext(this_00,GameRPC);
  this->WorldContext = pFVar4;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (pFVar4->OwningGameInstance).field0_0x0.DebugPtr = this;
  local_res10 = (UPackage *)0x0;
  local_res8 = (UWorld *)0x0;
  CreateMinimalNetRPCWorld(param_1,&local_res10,&local_res8);
  pUVar2 = local_res8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (pUVar2->OwningGameInstance).field0_0x0.DebugPtr = this;
  FWorldContext::SetCurrentWorld(this->WorldContext,pUVar2);
                    /* WARNING: Could not recover jumptable at 0x000147bf00a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d0))(this);
  return;
}

// InitializeStandalone @ 147bf0130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameInstance::InitializeStandalone(UGameInstance *this,FName param_1,UPackage *param_2)

{
  UEngine *this_00;
  FWorldContext *pFVar1;
  UWorld *pUVar2;
  
  this_00 = GetEngine(this);
  pFVar1 = UEngine::CreateNewWorldContext(this_00,Game);
  this->WorldContext = pFVar1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (pFVar1->OwningGameInstance).field0_0x0.DebugPtr = this;
  pUVar2 = UWorld::CreateWorld(Game,false,param_1,param_2,true,Num,(FWorldInitializationValues *)0x0
                               ,false);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (pUVar2->OwningGameInstance).field0_0x0.DebugPtr = this;
  FWorldContext::SetCurrentWorld(this->WorldContext,pUVar2);
                    /* WARNING: Could not recover jumptable at 0x000147bf01ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d0))(this);
  return;
}

// IsDedicatedServerInstance @ 147bf07d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameInstance::IsDedicatedServerInstance(UGameInstance *this)

{
  if (this->WorldContext != (FWorldContext *)0x0) {
    return this->WorldContext->RunAsDedicated;
  }
  return false;
}

// IsReplayDeferred @ 147bf1150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameInstance::IsReplayDeferred(UGameInstance *this,FString *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  UReplaySubsystem *pUVar2;
  
  pUVar2 = GetSubsystem<UReplaySubsystem>(this);
  if (pUVar2 != (UReplaySubsystem *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar2->_padding_ + 0x2c8);
                    /* WARNING: Could not recover jumptable at 0x000147bf1178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(pUVar2,param_1,UNRECOVERED_JUMPTABLE);
    return (bool)uVar1;
  }
  return false;
}

// JoinSession @ 147bf17e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameInstance::JoinSession
          (UGameInstance *this,ULocalPlayer *param_1,FOnlineSessionSearchResult *param_2)

{
  return false;
}

// JoinSession @ 147bf17f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameInstance::JoinSession(UGameInstance *this,ULocalPlayer *param_1,int param_2)

{
  return false;
}

// LoadComplete @ 147bf1980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::LoadComplete(UGameInstance *this,float param_1,FString *param_2)

{
  return;
}

// ModifyClientTravelLevelURL @ 147bf2cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::ModifyClientTravelLevelURL(UGameInstance *this,FString *param_1)

{
  return;
}

// NotifyPreClientTravel @ 147bf4e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameInstance::NotifyPreClientTravel
          (UGameInstance *this,FString *param_1,ETravelType param_2,bool param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->NotifyPreClientTravelDelegates,(FWriteAccessScope *)&local_48);
  puVar1 = &(this->NotifyPreClientTravelDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->NotifyPreClientTravelDelegates).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->NotifyPreClientTravelDelegates).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->NotifyPreClientTravelDelegates).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2,param_3), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->NotifyPreClientTravelDelegates).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->NotifyPreClientTravelDelegates,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// OnConsoleInput @ 147bf5470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::OnConsoleInput(UGameInstance *this,FString *param_1)

{
  longlong *plVar1;
  UGameViewportClient *pUVar2;
  UConsole *pUVar3;
  code *UNRECOVERED_JUMPTABLE;
  FOutputDeviceRedirector *pFVar4;
  UWorld *pUVar5;
  wchar_t *pwVar6;
  
  pUVar2 = (GEngine->GameViewport).field0_0x0.DebugPtr;
  if ((pUVar2 != (UGameViewportClient *)0x0) &&
     (pUVar3 = (pUVar2->ViewportConsole).field0_0x0.DebugPtr, pUVar3 != (UConsole *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x000147bf54ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,param_1);
    return;
  }
  plVar1 = &GEngine->_padding_;
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 8);
  pFVar4 = GetGlobalLogSingleton();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  if (this->WorldContext == (FWorldContext *)0x0) {
    pUVar5 = (UWorld *)0x0;
  }
  else {
    pUVar5 = (this->WorldContext->ThisCurrentWorld).field0_0x0.DebugPtr;
  }
                    /* WARNING: Could not recover jumptable at 0x000147bf5529. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,pUVar5,pwVar6,pFVar4);
  return;
}

// OnSeamlessTravelDuringReplay @ 147bf6150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::OnSeamlessTravelDuringReplay(UGameInstance *this)

{
  return;
}

// OnStart @ 147bf6160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::OnStart(UGameInstance *this)

{
  return;
}

// OnWorldChanged @ 147bf6320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::OnWorldChanged(UGameInstance *this,UWorld *param_1,UWorld *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FWorldContext *pFVar7;
  uint uVar8;
  longlong lVar9;
  FName local_res18 [2];
  FString local_78;
  FString local_68;
  FString local_58;
  FDestructionSentinel local_48;
  
  if (param_2 == (UWorld *)0x0) {
    this->WorldContext = (FWorldContext *)0x0;
  }
  else {
    pFVar7 = UEngine::GetWorldContextFromWorld(GEngine,param_2);
    if (this->WorldContext == (FWorldContext *)0x0) {
      this->WorldContext = pFVar7;
    }
    else if (this->WorldContext != pFVar7) {
      if (2 < (byte)LogLoad._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_58,(UObject *)0x0);
        if (param_1 == (UWorld *)0x0) {
          ::FString::FString(&local_78,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0);
        }
        local_res18[0] = (FName)this->_padding_;
        ::FName::ToString(local_res18,&local_68);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      this->WorldContext = pFVar7;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FWorldDelegates::OnGameInstanceWorldChanged,(FWriteAccessScope *)&local_48);
  bVar3 = false;
  FWorldDelegates::OnGameInstanceWorldChanged._28_4_ =
       FWorldDelegates::OnGameInstanceWorldChanged._28_4_ + 1;
  uVar8 = FWorldDelegates::OnGameInstanceWorldChanged._16_4_ - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (int)FWorldDelegates::OnGameInstanceWorldChanged._16_4_) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar9 + 8 + FWorldDelegates::OnGameInstanceWorldChanged._8_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar9 + FWorldDelegates::OnGameInstanceWorldChanged._8_8_),
          plVar1 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,this,param_1,param_2), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  FWorldDelegates::OnGameInstanceWorldChanged._28_4_ =
       FWorldDelegates::OnGameInstanceWorldChanged._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnGameInstanceWorldChanged,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

// OverrideGameModeClass @ 147bf6aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSubclassOf<AGameModeBase> __thiscall
UGameInstance::OverrideGameModeClass
          (UGameInstance *this,TSubclassOf<AGameModeBase> param_1,FString *param_2,FString *param_3,
          FString *param_4)

{
  UObject *pUVar1;
  
  pUVar1 = (UObject *)(param_2->Data).AllocatorInstance.Data;
  *(UObject **)param_1.Class.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return (TSubclassOf<AGameModeBase>)(TSubclassOf<AGameModeBase>)param_1.Class.field0_0x0;
}

// OverrideIrisReplicationSystemConfig @ 147bf6ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameInstance::OverrideIrisReplicationSystemConfig
          (UGameInstance *this,FNetDriverReplicationSystemConfig *param_1,bool param_2)

{
  return;
}

// PlayReplay @ 147bf6b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameInstance::PlayReplay
          (UGameInstance *this,FString *param_1,UWorld *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  bool bVar1;
  UReplaySubsystem *this_00;
  
  this_00 = GetSubsystem<UReplaySubsystem>(this);
  if (this_00 != (UReplaySubsystem *)0x0) {
    bVar1 = UReplaySubsystem::PlayReplay(this_00,param_1,param_2,param_3);
    return bVar1;
  }
  return false;
}

// PlayReplayPlaylist @ 147bf6b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UGameInstance::PlayReplayPlaylist(UGameInstance *this,FReplayPlaylistParams *param_1)

{
  bool bVar1;
  FReplayPlaylistTracker *this_00;
  FReplayPlaylistTracker *pFVar2;
  TSharedRef<FReplayPlaylistTracker,1> *pTVar3;
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  TSharedRef<FReplayPlaylistTracker,1> local_18;
  
  FLLMScope::FLLMScope(local_res18,Replays,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,Replays,true);
  this_00 = ::operator_new(0x80);
  pFVar2 = (FReplayPlaylistTracker *)0x0;
  if (this_00 != (FReplayPlaylistTracker *)0x0) {
    pFVar2 = FReplayPlaylistTracker::FReplayPlaylistTracker(this_00,param_1,this);
  }
  pTVar3 = TSharedRef<FReplayPlaylistTracker,1>::
           TSharedRef<FReplayPlaylistTracker,1><FReplayPlaylistTracker>(&local_18,pFVar2);
  bVar1 = FReplayPlaylistTracker::Start(pTVar3->Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res18);
  return bVar1;
}

// PreloadContentForURL @ 147bf7470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::PreloadContentForURL(UGameInstance *this,FURL *param_1)

{
  FURL::~FURL(param_1);
  return;
}

// ReceiveInit @ 147bfa560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::ReceiveInit(UGameInstance *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UGameInstance_ReceiveInit);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000147bfa58d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// ReceiveShutdown @ 147bfa5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::ReceiveShutdown(UGameInstance *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UGameInstance_ReceiveShutdown);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000147bfa5cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// ReceivedNetworkEncryptionAck @ 147bfa5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameInstance::ReceivedNetworkEncryptionAck
          (UGameInstance *this,
          TDelegate<void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  longlong *plVar1;
  void *_Src;
  void *local_78;
  int local_70;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_44;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  
  ::FString::FString((FString *)&local_78,L"ReceivedNetworkEncryptionAck not implemented");
  _Src = local_78;
  local_58[0] = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  if (local_70 == 0) {
    local_44 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_70,0,&local_50,local_70,&local_44);
    memcpy(local_50.Data,_Src,(longlong)local_70 * 2);
  }
  local_40 = (void *)0x0;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  if (local_78 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FReadAccessScope *)&local_78);
  if ((*(int *)&param_1->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,local_58);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_78);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return;
}

// ReceivedNetworkEncryptionFailure @ 147bfa720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EEncryptionFailureAction __thiscall
UGameInstance::ReceivedNetworkEncryptionFailure(UGameInstance *this,UNetConnection *param_1)

{
  return Default;
}

// ReceivedNetworkEncryptionToken @ 147bfa730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameInstance::ReceivedNetworkEncryptionToken
          (UGameInstance *this,FString *param_1,
          TDelegate<void___cdecl(FEncryptionKeyResponse_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  longlong *plVar1;
  void *_Src;
  void *local_78;
  int local_70;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_44;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  
  ::FString::FString((FString *)&local_78,L"ReceivedNetworkEncryptionToken not implemented");
  _Src = local_78;
  local_58[0] = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  if (local_70 == 0) {
    local_44 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_70,0,&local_50,local_70,&local_44);
    memcpy(local_50.Data,_Src,(longlong)local_70 * 2);
  }
  local_40 = (void *)0x0;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  if (local_78 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)&local_78);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,local_58);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_78);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return;
}

// RegisterReferencedObject @ 147bfb230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::RegisterReferencedObject(UGameInstance *this,UObject *param_1)

{
  TObjectPtr<UObject>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<UObject>_>
            (&this->ReferencedObjects,(TObjectPtr<UObject> *)&local_res8[0].ObjectPtr);
  return;
}

// RemoveLocalPlayer @ 147bfd180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UGameInstance::RemoveLocalPlayer(UGameInstance *this,ULocalPlayer *param_1)

{
  int *piVar1;
  longlong *plVar2;
  UWorld *this_00;
  UDemoNetDriver *this_01;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  UGameViewportClient *pUVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  FName local_res8;
  FName local_res10;
  FString local_48;
  FString local_38;
  
  plVar2 = (longlong *)param_1->_padding_;
  if (plVar2 != (longlong *)0x0) {
    lVar5 = plVar2[0x2d];
    (**(code **)(*plVar2 + 0xe98))();
    if (((this->WorldContext == (FWorldContext *)0x0) ||
        (this_00 = (this->WorldContext->ThisCurrentWorld).field0_0x0.DebugPtr,
        this_00 == (UWorld *)0x0)) || (bVar6 = UWorld::IsPlayingReplay(this_00), !bVar6)) {
      if ((char)lVar5 != '\x03') goto LAB_147bfd285;
    }
    else {
      this_01 = (this_00->DemoNetDriver).field0_0x0.DebugPtr;
      if (((this_01 != (UDemoNetDriver *)0x0) &&
          (bVar6 = UDemoNetDriver::RemoveSplitscreenViewer
                             (this_01,(APlayerController *)param_1->_padding_,false), !bVar6)) &&
         (2 < (byte)LogPlayerManagement._0_1_)) {
        local_res8 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res8,&local_48);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
    }
    AActor::Destroy((AActor *)param_1->_padding_,true,true);
  }
LAB_147bfd285:
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar3 = (this->LocalPlayers).AllocatorInstance.Data;
  pFVar12 = pFVar3;
  do {
    if (pFVar12 == pFVar3 + (longlong)(this->LocalPlayers).ArrayNum * 8) {
LAB_147bfd2c7:
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7374835335475233769>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameInstance.cpp"
                         ,0x3e9,"OldIndex != INDEX_NONE");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
LAB_147bfd2f4:
      (param_1->ViewportClient).field0_0x0.DebugPtr = (UGameViewportClient *)0x0;
      if (4 < (byte)LogPlayerManagement._0_1_) {
        local_res10 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res10,&local_38);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerManagement);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      TMulticastDelegate<void___cdecl(ULocalPlayer_*),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnLocalPlayerRemovedEvent,param_1);
      if (UObjectBaseUtility::bGarbageEliminationEnabled == false) {
        UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)param_1);
        UEngine::ForceGarbageCollection(GEngine,false);
      }
      return true;
    }
    if (*(ULocalPlayer **)pFVar12 == param_1) {
      uVar13 = (longlong)pFVar12 - (longlong)pFVar3 >> 3;
      uVar11 = (uint)uVar13;
      if (uVar11 != 0xffffffff) {
        (**(code **)(param_1->_padding_ + 0x300))(param_1);
        uVar8 = 0;
        if ((int)uVar11 < (this->LocalPlayers).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pFVar3 = (this->LocalPlayers).AllocatorInstance.Data + (longlong)(int)uVar11 * 8;
        iVar9 = (this->LocalPlayers).ArrayNum + ~uVar11;
        if (iVar9 != 0) {
          memmove(pFVar3,pFVar3 + 8,(longlong)iVar9 << 3);
        }
        piVar1 = &(this->LocalPlayers).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->LocalPlayers).AllocatorInstance,(this->LocalPlayers).ArrayNum,
                   &(this->LocalPlayers).ArrayMax);
        if ((this->WorldContext != (FWorldContext *)0x0) &&
           (pUVar10 = (this->WorldContext->GameViewport).field0_0x0.DebugPtr,
           pUVar10 != (UGameViewportClient *)0x0)) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          pUVar10 = (UGameViewportClient *)0x0;
          if (((this->WorldContext != (FWorldContext *)0x0) &&
              (pUVar10 = (this->WorldContext->GameViewport).field0_0x0.DebugPtr,
              UE::GC::GIsIncrementalReachabilityPending != false)) &&
             (pUVar10 != (UGameViewportClient *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          (**(code **)(pUVar10->_padding_ + 0x398))(pUVar10,uVar13 & 0xffffffff,param_1);
        }
        goto LAB_147bfd2f4;
      }
      goto LAB_147bfd2c7;
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// ReturnToMainMenu @ 147bfe180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::ReturnToMainMenu(UGameInstance *this)

{
  UOnlineSession *pUVar1;
  bool bVar2;
  UEngine *this_00;
  UWorld *pUVar3;
  undefined1 local_res8 [8];
  
  pUVar3 = (UWorld *)0x0;
  if (((this->WorldContext == (FWorldContext *)0x0) ||
      (pUVar3 = (this->WorldContext->ThisCurrentWorld).field0_0x0.DebugPtr, pUVar3 == (UWorld *)0x0)
      ) && (bVar2 = `UGameInstance::ReturnToMainMenu'::__l3::<lambda_1>::operator()(local_res8),
           !bVar2)) {
    return;
  }
  pUVar1 = (this->OnlineSession).field0_0x0.DebugPtr;
  if (pUVar1 == (UOnlineSession *)0x0) {
    this_00 = GetEngine(this);
    UEngine::HandleDisconnect(this_00,pUVar3,(pUVar3->NetDriver).field0_0x0.DebugPtr);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147bfe1cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1,pUVar3,(pUVar3->NetDriver).field0_0x0.DebugPtr);
  return;
}

// SetPersistentTravelURL @ 147c01740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::SetPersistentTravelURL(UGameInstance *this,FURL *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FWorldContext *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  
  if ((this->WorldContext == (FWorldContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorldContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameInstance.cpp"
                         ,0x52c,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar5 = this->WorldContext;
  ::FString::operator=(&(pFVar5->LastURL).Protocol,&param_1->Protocol);
  ::FString::operator=(&(pFVar5->LastURL).Host,&param_1->Host);
  (pFVar5->LastURL).Port = param_1->Port;
  (pFVar5->LastURL).Valid = param_1->Valid;
  ::FString::operator=(&(pFVar5->LastURL).Map,&param_1->Map);
  ::FString::operator=(&(pFVar5->LastURL).RedirectURL,&param_1->RedirectURL);
  pTVar1 = &(pFVar5->LastURL).Op;
  if (pTVar1 != &param_1->Op) {
    DestructItems<FString,int>
              ((FString *)(pTVar1->AllocatorInstance).Data,(pFVar5->LastURL).Op.ArrayNum);
    iVar3 = (param_1->Op).ArrayNum;
    piVar2 = &(pFVar5->LastURL).Op.ArrayMax;
    pFVar6 = (param_1->Op).AllocatorInstance.Data;
    iVar4 = *piVar2;
    (pFVar5->LastURL).Op.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,iVar4,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar6,iVar3);
    }
  }
  ::FString::operator=(&(pFVar5->LastURL).Portal,&param_1->Portal);
  FURL::~FURL(param_1);
  return;
}

// Shutdown @ 147c01fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::Shutdown(UGameInstance *this)

{
  UOnlineSession *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UFunction *pUVar5;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_38;
  FDestructionSentinel local_20;
  
  pUVar5 = UObject::FindFunctionChecked((UObject *)this,NAME_UGameInstance_ReceiveShutdown);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar5);
  pUVar1 = (this->OnlineSession).field0_0x0.DebugPtr;
  if (pUVar1 != (UOnlineSession *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x2b8))();
    (this->OnlineSession).field0_0x0.DebugPtr = (UOnlineSession *)0x0;
  }
  uVar6 = (this->LocalPlayers).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->LocalPlayers).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)((this->LocalPlayers).AllocatorInstance.Data + lVar7) != 0) {
        (**(code **)(this->_padding_ + 0x338))(this);
      }
      lVar7 = lVar7 + -8;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  FSubsystemCollectionBase::Deinitialize((FSubsystemCollectionBase *)&this->SubsystemCollection);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNetDelegates::OnReceivedNetworkEncryptionToken,(FWriteAccessScope *)&local_38);
  if ((FNetDelegates::OnReceivedNetworkEncryptionToken._16_4_ != 0) &&
     (FNetDelegates::OnReceivedNetworkEncryptionToken._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FNetDelegates::OnReceivedNetworkEncryptionToken._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FNetDelegates::OnReceivedNetworkEncryptionToken.field_0x8,0,0,
               0x10);
    FNetDelegates::OnReceivedNetworkEncryptionToken._16_4_ = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FNetDelegates::OnReceivedNetworkEncryptionAck,(FWriteAccessScope *)&local_20);
  if ((FNetDelegates::OnReceivedNetworkEncryptionAck._16_4_ != 0) &&
     (FNetDelegates::OnReceivedNetworkEncryptionAck._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FNetDelegates::OnReceivedNetworkEncryptionAck._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FNetDelegates::OnReceivedNetworkEncryptionAck.field_0x8,0,0,
               0x10);
    FNetDelegates::OnReceivedNetworkEncryptionAck._16_4_ = 0;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  IPlatformInputDeviceMapper::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &IPlatformInputDeviceMapper::OnInputDeviceConnectionChange,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &IPlatformInputDeviceMapper::OnInputDevicePairingChange,this);
  this->WorldContext = (FWorldContext *)0x0;
  return;
}

// StartGameInstance @ 147c024e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall UGameInstance::StartGameInstance(UGameInstance *this)

{
  wchar_t wVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  Type TVar8;
  uint uVar9;
  UEngine *pUVar10;
  wchar_t *pwVar11;
  FReplayPlaylistTracker *this_00;
  FReplayPlaylistTracker *pFVar12;
  TSharedRef<FReplayPlaylistTracker,1> *pTVar13;
  UClass *this_01;
  FURL *pFVar14;
  FText *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  int iVar18;
  ForAnyElementType FVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  uint uVar22;
  bool bVar23;
  FLLMScope local_res10 [2];
  wchar_t *local_res18;
  FMemScope local_res20;
  FString local_3e8;
  FString local_3d8;
  void *local_3c8;
  undefined8 local_3c0;
  undefined1 local_3b8 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3a8;
  ForAnyElementType FStack_3a0;
  int local_398;
  bool local_388;
  TOptional<TArray<FString,TSizedDefaultAllocator<32>_>_>_u_0 local_380;
  FString local_370;
  FString local_360;
  FString *local_350;
  undefined8 local_348;
  FString local_340;
  FString local_330;
  FString local_320;
  FText local_310;
  FString local_300;
  FText local_2f0;
  FText local_2e0;
  FDestructionSentinel local_2d0;
  FDestructionSentinel local_2b8;
  FDestructionSentinel local_2a0;
  FURL local_288;
  TSharedRef<FReplayPlaylistTracker,1> local_218;
  FText local_208;
  FText local_1f8;
  FText local_1e8;
  FURL local_1d8;
  FText local_168;
  FTextFormat local_158;
  FText local_148;
  FTextFormat local_138;
  FText local_128;
  FTextFormat local_118;
  FURL local_108;
  FURL local_a0;
  
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId627,"UGameInstance::StartGameInstance",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameInstance.cpp"
               ,0x273);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId627);
  }
  pUVar10 = GetEngine(this);
  FURL::FURL(&local_1d8,(wchar_t *)0x0);
  FURL::LoadURLConfig(&local_1d8,L"DefaultPlayer",&GGameIni);
  pFVar12 = (FReplayPlaylistTracker *)0x0;
  local_3c8 = (void *)0x0;
  local_3c0 = 0;
  pwVar11 = FCommandLine::Get();
  local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_360.Data.ArrayNum = 0;
  local_360.Data.ArrayMax = 0;
  bVar4 = FParse::Value(pwVar11,L"-REPLAY=",&local_360,true,(wchar_t **)0x0);
  if (bVar4) {
    local_350 = (FString *)0x0;
    local_348 = 0;
    cVar5 = (**(code **)(this->_padding_ + 0x370))(this,&local_360,0,&local_350);
    DestructItems<FString,int>(local_350,(int)local_348);
    if (local_350 != (FString *)0x0) {
      FMemory::Free(local_350);
    }
    if (cVar5 != '\0') goto LAB_147c02f41;
LAB_147c02860:
    this_01 = Z_Construct_UClass_UGameMapsSettings_NoRegister();
    if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_01);
    }
    pUVar2 = (this_01->ClassDefaultObject).field0_0x0.DebugPtr;
    UGameMapsSettings::GetGameDefaultMap(&local_3d8,Default);
    local_3e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3e8.Data.ArrayNum = 0;
    local_3e8.Data.ArrayMax = 0;
    wVar1 = *pwVar11;
    local_res18 = pwVar11;
    while (wVar1 != L'\0') {
      FParse::Token(&local_370,&local_res18,false);
      iVar7 = local_370.Data.ArrayNum;
      if (1 < iVar7) {
        iVar18 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar18 = 0;
        }
        if (iVar18 < 1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = local_370.Data.ArrayNum;
        }
        if (*(wchar_t *)local_370.Data.AllocatorInstance.Data == L'-') {
          FVar19.Data = (FScriptContainerElement *)L"";
          if (iVar7 != 0) {
            FVar19.Data = local_370.Data.AllocatorInstance.Data;
          }
          bVar4 = FParse::Value((wchar_t *)FVar19.Data,L"-map=",&local_3e8,true,(wchar_t **)0x0);
          if (!bVar4) goto LAB_147c02964;
        }
        else {
          iVar18 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar18 = 0;
          }
          ::FString::AssignRange(&local_3e8,(wchar_t *)local_370.Data.AllocatorInstance.Data,iVar18)
          ;
        }
        if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_370.Data.AllocatorInstance.Data);
        }
        goto LAB_147c029c5;
      }
LAB_147c02964:
      if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_370.Data.AllocatorInstance.Data);
      }
      wVar1 = *local_res18;
    }
    ::FString::ConcatFF(&local_340,&local_3d8,(FString *)(pUVar2 + 1));
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
    local_3e8.Data.AllocatorInstance.Data = local_340.Data.AllocatorInstance.Data;
    local_3e8.Data.ArrayNum = local_340.Data.ArrayNum;
    local_3e8.Data.ArrayMax = local_340.Data.ArrayMax;
    local_340.Data.ArrayNum = 0;
    local_340.Data.ArrayMax = 0;
    local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_147c029c5:
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_3e8.Data.ArrayNum != 0) {
      FVar19.Data = local_3e8.Data.AllocatorInstance.Data;
    }
    FURL::FURL(&local_288,&local_1d8,(wchar_t *)FVar19.Data,TRAVEL_Partial);
    if (local_288.Valid == 0) {
LAB_147c02a2e:
      if (1 < (byte)LogLoad._0_1_) {
        ::FString::PrintfImpl
                  (&local_330,L"Failed to enter %s: %s. Please check the log for errors.");
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
        if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_330.Data.AllocatorInstance.Data);
        }
      }
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_3d8.Data.ArrayNum != 0) {
        FVar19.Data = local_3d8.Data.AllocatorInstance.Data;
      }
      FVar20.Data = (FScriptContainerElement *)L"";
      if (local_3e8.Data.ArrayNum != 0) {
        FVar20.Data = local_3e8.Data.AllocatorInstance.Data;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar20.Data,(wchar_t *)FVar19.Data);
      if (iVar7 == 0) {
        pFVar15 = FText::FromString(&local_128,&local_288.Map);
        pFVar16 = FText::AsLocalizable_Advanced_LocText
                            (&local_1e8,L"Engine",L"MapNotFoundNoFallback",
                             L"The map specified on the commandline \'{0}\' could not be found. Exiting."
                            );
        pFVar17 = FTextFormat::FTextFormat(&local_118,pFVar16,Default);
        FText::Format<FText>(&local_2e0,pFVar17,pFVar15);
        if (local_1e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
        }
        FMessageDialog::Open(Ok,&local_2e0);
        FWindowsPlatformMisc::RequestExit(false,L"UGameInstance::StartGameInstance.MapNotFound");
        local_310.TextData.Reference = local_2e0.TextData.Reference;
      }
      else {
        pFVar15 = FText::FromString(&local_168,&local_288.Map);
        pFVar16 = FText::AsLocalizable_Advanced_LocText
                            (&local_208,L"Engine",L"MapNotFound",
                             L"The map specified on the commandline \'{0}\' could not be found. Would you like to load the default map instead?"
                            );
        pFVar17 = FTextFormat::FTextFormat(&local_158,pFVar16,Default);
        FText::Format<FText>(&local_310,pFVar17,pFVar15);
        if (local_208.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
        }
        FVar19.Data = (FScriptContainerElement *)L"";
        if (local_3d8.Data.ArrayNum != 0) {
          FVar19.Data = local_3d8.Data.AllocatorInstance.Data;
        }
        FVar20.Data = (FScriptContainerElement *)L"";
        if (local_288.Map.Data.ArrayNum != 0) {
          FVar20.Data = local_288.Map.Data.AllocatorInstance.Data;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar20.Data,(wchar_t *)FVar19.Data);
        if ((iVar7 == 0) || (TVar8 = FMessageDialog::Open(OkCancel,&local_310), TVar8 == Ok)) {
          pcVar3 = *(code **)(pUVar10->_padding_ + 0x4d0);
          ::FString::ConcatFF(&local_320,&local_3d8,(FString *)(pUVar2 + 1));
          FVar19.Data = (FScriptContainerElement *)L"";
          if (local_320.Data.ArrayNum != 0) {
            FVar19.Data = local_320.Data.AllocatorInstance.Data;
          }
          pFVar14 = FURL::FURL(&local_a0,&local_1d8,(wchar_t *)FVar19.Data,TRAVEL_Partial);
          iVar7 = (*pcVar3)(pUVar10,this->WorldContext,pFVar14,&local_3c8);
          if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_320.Data.AllocatorInstance.Data);
          }
          if (local_310.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_310.TextData.Reference + 0x10))();
          }
          if (iVar7 != 1) goto LAB_147c02d10;
          if (1 < (byte)LogLoad._0_1_) {
            ::FString::PrintfImpl
                      (&local_300,L"Failed to enter %s: %s. Please check the log for errors.");
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
            if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_300.Data.AllocatorInstance.Data);
            }
          }
          pFVar15 = FText::FromString(&local_148,&local_3d8);
          pFVar16 = FText::AsLocalizable_Advanced_LocText
                              (&local_1f8,L"Engine",L"DefaultMapNotFound",
                               L"The default map \'{0}\' could not be found. Exiting.");
          pFVar17 = FTextFormat::FTextFormat(&local_138,pFVar16,Default);
          FText::Format<FText>(&local_2f0,pFVar17,pFVar15);
          if (local_1f8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
          }
          FMessageDialog::Open(Ok,&local_2f0);
          FWindowsPlatformMisc::RequestExit(false,L"UGameInstance::StartGameInstance.BrowseFailure")
          ;
          local_310.TextData.Reference = local_2f0.TextData.Reference;
        }
        else {
          FWindowsPlatformMisc::RequestExit(false,L"UGameInstance::StartGameInstance.Cancelled");
        }
      }
      if (local_310.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_310.TextData.Reference + 0x10))();
      }
    }
    else {
      pcVar3 = *(code **)(pUVar10->_padding_ + 0x4d0);
      pFVar14 = FURL::FURL(&local_108,&local_288);
      iVar7 = (*pcVar3)(pUVar10,this->WorldContext,pFVar14,&local_3c8);
      if (iVar7 == 1) goto LAB_147c02a2e;
LAB_147c02d10:
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FWorldDelegates::OnStartGameInstance,(FWriteAccessScope *)&local_2a0);
      bVar4 = false;
      FWorldDelegates::OnStartGameInstance._28_4_ = FWorldDelegates::OnStartGameInstance._28_4_ + 1;
      uVar22 = FWorldDelegates::OnStartGameInstance._16_4_ - 1;
      if (-1 < (int)uVar22) {
        lVar21 = (longlong)(int)uVar22 << 4;
        bVar4 = false;
        do {
          uVar9 = 0;
          if ((int)uVar22 < (int)FWorldDelegates::OnStartGameInstance._16_4_) {
            uVar9 = ~uVar22 >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          if (((*(int *)(FWorldDelegates::OnStartGameInstance._8_8_ + 8 + lVar21) == 0) ||
              (*(longlong **)(FWorldDelegates::OnStartGameInstance._8_8_ + lVar21) ==
               (longlong *)0x0)) ||
             (cVar5 = (**(code **)(**(longlong **)
                                     (FWorldDelegates::OnStartGameInstance._8_8_ + lVar21) + 0x68))
                                (), cVar5 == '\0')) {
            bVar4 = true;
          }
          lVar21 = lVar21 + -0x10;
          uVar22 = uVar22 - 1;
        } while (-1 < (int)uVar22);
      }
      FWorldDelegates::OnStartGameInstance._28_4_ = FWorldDelegates::OnStartGameInstance._28_4_ + -1
      ;
      if (bVar4) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FWorldDelegates::OnStartGameInstance,false);
      }
      if (local_2a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a0.Accessor,&local_2a0);
      }
      (**(code **)(this->_padding_ + 0x428))(this);
    }
    if (local_288.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Portal.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_288.Op.AllocatorInstance.Data,local_288.Op.ArrayNum)
    ;
    if (local_288.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Op.AllocatorInstance.Data);
    }
    if (local_288.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.RedirectURL.Data.AllocatorInstance.Data);
    }
    if (local_288.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Map.Data.AllocatorInstance.Data);
    }
    if (local_288.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Host.Data.AllocatorInstance.Data);
    }
    if (local_288.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Protocol.Data.AllocatorInstance.Data);
    }
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar4 = FParse::Value(pwVar11,L"-REPLAYPLAYLIST=",&local_360,false,(wchar_t **)0x0);
    if (!bVar4) goto LAB_147c02860;
    local_3b8._0_8_ = (FScriptContainerElement *)0x0;
    local_3b8._8_4_ = 0;
    local_3b8._12_4_ = 0;
    local_398 = 0;
    local_388 = false;
    local_380.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_3a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_3a0.Data = (FScriptContainerElement *)0x0;
    local_380.TypedValue.ArrayNum = 0;
    local_380.TypedValue.ArrayMax = -1;
    iVar7 = ::FString::ParseIntoArray
                      (&local_360,(TArray<FString,TSizedDefaultAllocator<32>_> *)local_3b8,L",",true
                      );
    if (iVar7 == 0) {
LAB_147c027b6:
      if ((local_380.TypedValue.ArrayMax != -1) &&
         (DestructItems<FString,int>
                    ((FString *)local_380.TypedValue.AllocatorInstance.Data,
                     local_380.TypedValue.ArrayNum),
         local_380.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_380.TypedValue.AllocatorInstance.Data);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_3a8,(FWriteAccessScope *)&local_2b8);
      if ((local_398 != 0) && (FStack_3a0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_3a0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3a0,0,0,0x10);
        local_398 = 0;
      }
      if (local_2b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b8.Accessor,&local_2b8);
      }
      if (FStack_3a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_3a0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3a8.AccessDetector);
      DestructItems<FString,int>((FString *)local_3b8._0_8_,local_3b8._8_4_);
      if ((FScriptContainerElement *)local_3b8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3b8._0_8_);
      }
      goto LAB_147c02860;
    }
    FLLMScope::FLLMScope(local_res10,Replays,false,None,Default,true);
    FMemScope::FMemScope(&local_res20,Replays,true);
    this_00 = ::operator_new(0x80);
    if (this_00 != (FReplayPlaylistTracker *)0x0) {
      pFVar12 = FReplayPlaylistTracker::FReplayPlaylistTracker
                          (this_00,(FReplayPlaylistParams *)local_3b8,this);
    }
    pTVar13 = TSharedRef<FReplayPlaylistTracker,1>::
              TSharedRef<FReplayPlaylistTracker,1><FReplayPlaylistTracker>(&local_218,pFVar12);
    bVar4 = FReplayPlaylistTracker::Start(pTVar13->Object);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_218.SharedReferenceCount.ReferenceController);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
    if (!bVar4) goto LAB_147c027b6;
    if ((local_380.TypedValue.ArrayMax != -1) &&
       (DestructItems<FString,int>
                  ((FString *)local_380.TypedValue.AllocatorInstance.Data,
                   local_380.TypedValue.ArrayNum),
       local_380.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_380.TypedValue.AllocatorInstance.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_3a8,(FWriteAccessScope *)&local_2d0);
    if ((local_398 != 0) && (FStack_3a0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_3a0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3a0,0,0,0x10);
      local_398 = 0;
    }
    if (local_2d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d0.Accessor,&local_2d0);
    }
    if (FStack_3a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3a0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3a8.AccessDetector);
    DestructItems<FString,int>((FString *)local_3b8._0_8_,local_3b8._8_4_);
    local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_3b8._0_8_;
  }
  if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
LAB_147c02f41:
  if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data.AllocatorInstance.Data);
  }
  if (local_3c8 != (void *)0x0) {
    FMemory::Free(local_3c8);
  }
  if (local_1d8.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Portal.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_1d8.Op.AllocatorInstance.Data,local_1d8.Op.ArrayNum);
  if (local_1d8.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Op.AllocatorInstance.Data);
  }
  if (local_1d8.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.RedirectURL.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Map.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Host.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Protocol.Data.AllocatorInstance.Data);
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// StartRecordingReplay @ 147c030e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UGameInstance::StartRecordingReplay
          (UGameInstance *this,FString *param_1,FString *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TSharedPtr<IAnalyticsProvider,1> *param_4)

{
  UReplaySubsystem *this_00;
  TSharedPtr<IAnalyticsProvider,1> local_18;
  
  this_00 = GetSubsystem<UReplaySubsystem>(this);
  if (this_00 != (UReplaySubsystem *)0x0) {
    local_18.Object = param_4->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_4->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UReplaySubsystem::RecordReplay(this_00,param_1,param_2,param_3,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return;
}

// StaticRegisterNativesUGameInstance @ 147c03600

void __cdecl UGameInstance::StaticRegisterNativesUGameInstance(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UGameInstance_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopRecordingReplay @ 147c039a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::StopRecordingReplay(UGameInstance *this)

{
  UReplaySubsystem *this_00;
  
  this_00 = GetSubsystem<UReplaySubsystem>(this);
  if (this_00 != (UReplaySubsystem *)0x0) {
    UReplaySubsystem::StopReplay(this_00);
    return;
  }
  return;
}

// UnregisterReferencedObject @ 147c09a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UGameInstance::UnregisterReferencedObject(UGameInstance *this,UObject *param_1)

{
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  pTVar1 = &this->ReferencedObjects;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  iVar7 = (this->ReferencedObjects).ArrayNum;
  pFVar10 = pFVar4;
  if (pFVar4 != pFVar4 + (longlong)iVar7 * 8) {
    while (*(UObject **)pFVar10 != param_1) {
      pFVar10 = pFVar10 + 8;
      if (pFVar10 == pFVar4 + (longlong)iVar7 * 8) {
        return;
      }
    }
    uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar4 >> 3);
    if (uVar9 != 0xffffffff) {
      uVar8 = 0;
      if ((int)(uVar9 + 1) <= iVar7) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar3 = (this->ReferencedObjects).ArrayNum;
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      iVar7 = iVar3 + ~uVar9;
      if (1 < iVar7) {
        iVar7 = 1;
      }
      if (iVar7 != 0) {
        memmove(pFVar4 + (longlong)(int)uVar9 * 8,pFVar4 + (longlong)(iVar3 - iVar7) * 8,
                (longlong)iVar7 << 3);
      }
      piVar2 = &(this->ReferencedObjects).ArrayNum;
      *piVar2 = *piVar2 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar1->AllocatorInstance,(this->ReferencedObjects).ArrayNum,
                 &(this->ReferencedObjects).ArrayMax);
    }
  }
  return;
}

// execDebugCreatePlayer @ 147c13970

void __cdecl UGameInstance::execDebugCreatePlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x318))(param_1,local_res8[0]);
  return;
}

// execDebugRemovePlayer @ 147c13a00

void __cdecl UGameInstance::execDebugRemovePlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 800))(param_1,local_res8[0]);
  return;
}

// operator() @ 150519fa0

bool __thiscall `UGameInstance::ReturnToMainMenu'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7374835335475234255>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7374835335475234255>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 56

// StaticClass @ 14ec48330

UClass * __cdecl APartyBeaconClient::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APartyBeaconClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"PartyBeaconClient",
               &Z_Registration_Info_UClass_APartyBeaconClient.InnerSingleton,
               StaticRegisterNativesAPartyBeaconClient,0x438,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APartyBeaconClient>,
               InternalVTableHelperCtorCaller<APartyBeaconClient>,local_res8,
               AOnlineBeaconClient::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APartyBeaconClient.InnerSingleton;
}

// APartyBeaconClient @ 14ec51d90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APartyBeaconClient * __thiscall
APartyBeaconClient::APartyBeaconClient(APartyBeaconClient *this,FVTableHelper *param_1)

{
  AOnlineBeaconClient::AOnlineBeaconClient((AOnlineBeaconClient *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  (this->PendingReservation).PartyLeader._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  *(undefined8 *)&this->ReservationRequestComplete = 0;
  *(undefined8 *)&(this->ReservationRequestComplete).field_0x8 = 0;
  *(undefined4 *)&(this->ReservationRequestComplete).field_0x10 = 0;
  *(undefined8 *)&this->ReservationCountUpdate = 0;
  *(undefined8 *)&(this->ReservationCountUpdate).field_0x8 = 0;
  *(undefined4 *)&(this->ReservationCountUpdate).field_0x10 = 0;
  *(undefined8 *)&this->ReservationFull = 0;
  *(undefined8 *)&(this->ReservationFull).field_0x8 = 0;
  *(undefined4 *)&(this->ReservationFull).field_0x10 = 0;
  (this->DestSessionId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestSessionId).Data.ArrayNum = 0;
  (this->DestSessionId).Data.ArrayMax = 0;
  (this->PendingReservation).TeamNum = -1;
  (this->PendingReservation).PartyLeader._padding_ = 0;
  (this->PendingReservation).PartyLeader._padding_ = 0;
  *(undefined1 *)&(this->PendingReservation).PartyLeader._padding_ = 0;
  (this->PendingReservation).PartyLeader.ReplicationBytes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PendingReservation).PartyLeader.ReplicationBytes.ArrayNum = 0;
  (this->PendingReservation).PartyLeader.ReplicationBytes.ArrayMax = 0;
  (this->PendingReservation).PartyMembers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingReservation).PartyMembers.ArrayNum = 0;
  (this->PendingReservation).PartyMembers.ArrayMax = 0;
  (this->PendingReservation).RemovedPartyMembers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PendingReservation).RemovedPartyMembers.ArrayNum = 0;
  (this->PendingReservation).RemovedPartyMembers.ArrayMax = 0;
  (this->CancelRPCFailsafe).Handle = 0;
  (this->PendingResponseTimerHandle).Handle = 0;
  (this->PendingCancelResponseTimerHandle).Handle = 0;
  (this->PendingReservationUpdateTimerHandle).Handle = 0;
  (this->PendingReservationFullTimerHandle).Handle = 0;
  return this;
}

// APartyBeaconClient @ 14ec51e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APartyBeaconClient * __thiscall
APartyBeaconClient::APartyBeaconClient(APartyBeaconClient *this,FObjectInitializer *param_1)

{
  AOnlineBeaconClient::AOnlineBeaconClient((AOnlineBeaconClient *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  (this->PendingReservation).PartyLeader._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  *(undefined8 *)&this->ReservationRequestComplete = 0;
  *(undefined8 *)&(this->ReservationRequestComplete).field_0x8 = 0;
  *(undefined4 *)&(this->ReservationRequestComplete).field_0x10 = 0;
  *(undefined8 *)&this->ReservationCountUpdate = 0;
  *(undefined8 *)&(this->ReservationCountUpdate).field_0x8 = 0;
  *(undefined4 *)&(this->ReservationCountUpdate).field_0x10 = 0;
  *(undefined8 *)&this->ReservationFull = 0;
  *(undefined8 *)&(this->ReservationFull).field_0x8 = 0;
  *(undefined4 *)&(this->ReservationFull).field_0x10 = 0;
  (this->DestSessionId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestSessionId).Data.ArrayNum = 0;
  (this->DestSessionId).Data.ArrayMax = 0;
  (this->PendingReservation).TeamNum = -1;
  (this->PendingReservation).PartyLeader._padding_ = 0;
  (this->PendingReservation).PartyLeader._padding_ = 0;
  *(undefined1 *)&(this->PendingReservation).PartyLeader._padding_ = 0;
  (this->PendingReservation).PartyLeader.ReplicationBytes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PendingReservation).PartyLeader.ReplicationBytes.ArrayNum = 0;
  (this->PendingReservation).PartyLeader.ReplicationBytes.ArrayMax = 0;
  (this->PendingReservation).PartyMembers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingReservation).PartyMembers.ArrayNum = 0;
  (this->PendingReservation).PartyMembers.ArrayMax = 0;
  (this->PendingReservation).RemovedPartyMembers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PendingReservation).RemovedPartyMembers.ArrayNum = 0;
  (this->PendingReservation).RemovedPartyMembers.ArrayMax = 0;
  this->RequestType = NonePending;
  this->bPendingReservationSent = false;
  this->bCancelReservation = false;
  (this->CancelRPCFailsafe).Handle = 0;
  (this->PendingResponseTimerHandle).Handle = 0;
  (this->PendingCancelResponseTimerHandle).Handle = 0;
  (this->PendingReservationUpdateTimerHandle).Handle = 0;
  (this->PendingReservationFullTimerHandle).Handle = 0;
  return this;
}

// ~APartyBeaconClient @ 14ec55b60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APartyBeaconClient::~APartyBeaconClient(APartyBeaconClient *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  DestructItems<FPlayerReservation,int>
            ((FPlayerReservation *)
             (this->PendingReservation).RemovedPartyMembers.AllocatorInstance.Data,
             (this->PendingReservation).RemovedPartyMembers.ArrayNum);
  pFVar1 = (this->PendingReservation).RemovedPartyMembers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPlayerReservation,int>
            ((FPlayerReservation *)(this->PendingReservation).PartyMembers.AllocatorInstance.Data,
             (this->PendingReservation).PartyMembers.ArrayNum);
  pFVar1 = (this->PendingReservation).PartyMembers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FUniqueNetIdRepl::~FUniqueNetIdRepl(&(this->PendingReservation).PartyLeader);
  pFVar1 = (this->DestSessionId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationFull);
  pvVar2 = *(void **)&(this->ReservationFull).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ReservationFull);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationCountUpdate);
  pvVar2 = *(void **)&(this->ReservationCountUpdate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ReservationCountUpdate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationRequestComplete);
  pvVar2 = *(void **)&(this->ReservationRequestComplete).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ReservationRequestComplete);
  AOnlineBeaconClient::~AOnlineBeaconClient((AOnlineBeaconClient *)this);
  return;
}

// BeginDestroy @ 14ec60cd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APartyBeaconClient::BeginDestroy(APartyBeaconClient *this)

{
  ClearTimers(this,true);
  AActor::BeginDestroy((AActor *)this);
  return;
}

// CancelReservation @ 14ec61c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APartyBeaconClient::CancelReservation(APartyBeaconClient *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UWorld *this_00;
  FTimerManager *this_01;
  FStaticBasicLogRecord *pFVar5;
  APartyBeaconClient *local_res8;
  FDelegateAllocation local_38;
  code *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  undefined8 local_10;
  
  bVar2 = FUniqueNetIdWrapper::IsValid
                    ((FUniqueNetIdWrapper *)&(this->PendingReservation).PartyLeader);
  if (bVar2) {
    this->bCancelReservation = true;
    ClearTimers(this,false);
    if (this->bPendingReservationSent != false) {
      if (5 < (byte)LogPartyBeacon._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
      }
      (**(code **)(this->_padding_ + 0x888))(this,&(this->PendingReservation).PartyLeader);
      local_28 = OnCancelledFailsafe;
      uStack_1c = local_10._4_4_;
      local_18 = 0;
      local_10 = &local_38;
      local_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_38.DelegateSize = 0;
      uStack_20 = 0;
      puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_38);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VAPartyBeaconClient____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar3[3] = 0;
        local_res8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res8);
        puVar3[4] = local_28;
        puVar3[5] = CONCAT44(uStack_1c,uStack_20);
      }
      this_00 = AActor::GetWorld((AActor *)this);
      if ((this_00 == (UWorld *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("World",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconClient.cpp"
                             ,0x14a,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_01 = UWorld::GetTimerManager(this_00);
      FTimerManager::SetTimer
                (this_01,&this->CancelRPCFailsafe,
                 (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &local_38,__real_40a00000,false,__real_bf800000);
      if ((local_38.DelegateSize != 0) &&
         (local_38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_38.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_38,0,0,0x10);
        local_38.DelegateSize = 0;
      }
      if (local_38.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        return;
      }
      FMemory::Free((void *)local_38.DelegateAllocator);
      return;
    }
    if ((byte)LogPartyBeacon._0_1_ < 6) goto LAB_14ec61e87;
    pFVar5 = &::LOG_Static;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5062737019927527111>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconClient.cpp"
                       ,0x139,"PendingReservation.PartyLeader.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((byte)LogPartyBeacon._0_1_ < 6) goto LAB_14ec61e87;
    pFVar5 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<6>(pFVar5,(FLogCategoryBase *)&LogPartyBeacon);
LAB_14ec61e87:
  OnCancelledComplete(this);
  return;
}

// ClearTimers @ 14ec62890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APartyBeaconClient::ClearTimers(APartyBeaconClient *this,bool param_1)

{
  FTimerHandle *pFVar1;
  FTimerHandle *pFVar2;
  FTimerHandle *pFVar3;
  FTimerHandle *pFVar4;
  FTimerHandle *pFVar5;
  UWorld *pUVar6;
  FTimerManager *pFVar7;
  FTimerData *pFVar8;
  
  if ((param_1) && ((this->CancelRPCFailsafe).Handle != 0)) {
    if (5 < (byte)LogBeacon._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    }
    pUVar6 = AActor::GetWorld((AActor *)this);
    if (pUVar6 != (UWorld *)0x0) {
      pFVar7 = UWorld::GetTimerManager(pUVar6);
      pFVar8 = FTimerManager::FindTimer(pFVar7,&this->CancelRPCFailsafe);
      if (pFVar8 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer(pFVar7,(FTimerHandle)(this->CancelRPCFailsafe).Handle);
      }
      (this->CancelRPCFailsafe).Handle = 0;
    }
    (**(code **)(this->_padding_ + 0x800))(this,0xc);
  }
  pUVar6 = AActor::GetWorld((AActor *)this);
  if (pUVar6 != (UWorld *)0x0) {
    pFVar1 = &this->PendingResponseTimerHandle;
    if ((pFVar1->Handle != 0) && (5 < (byte)LogPartyBeacon._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
    pFVar2 = &this->PendingCancelResponseTimerHandle;
    if ((pFVar2->Handle != 0) && (5 < (byte)LogPartyBeacon._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
    pFVar3 = &this->PendingReservationUpdateTimerHandle;
    if ((pFVar3->Handle != 0) && (5 < (byte)LogPartyBeacon._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
    pFVar4 = &this->PendingReservationFullTimerHandle;
    if ((pFVar4->Handle != 0) && (5 < (byte)LogPartyBeacon._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
    pFVar5 = &this->CancelRPCFailsafe;
    if ((pFVar5->Handle != 0) && (5 < (byte)LogPartyBeacon._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
    pFVar7 = UWorld::GetTimerManager(pUVar6);
    pFVar8 = FTimerManager::FindTimer(pFVar7,pFVar1);
    if (pFVar8 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar7,(FTimerHandle)pFVar1->Handle);
    }
    pFVar1->Handle = 0;
    pFVar8 = FTimerManager::FindTimer(pFVar7,pFVar2);
    if (pFVar8 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar7,(FTimerHandle)pFVar2->Handle);
    }
    pFVar2->Handle = 0;
    pFVar8 = FTimerManager::FindTimer(pFVar7,pFVar3);
    if (pFVar8 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar7,(FTimerHandle)pFVar3->Handle);
    }
    pFVar3->Handle = 0;
    pFVar8 = FTimerManager::FindTimer(pFVar7,pFVar4);
    if (pFVar8 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar7,(FTimerHandle)pFVar4->Handle);
    }
    pFVar4->Handle = 0;
    pFVar8 = FTimerManager::FindTimer(pFVar7,pFVar5);
    if (pFVar8 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar7,(FTimerHandle)pFVar5->Handle);
    }
    pFVar1->Handle = 0;
    pFVar2->Handle = 0;
    pFVar5->Handle = 0;
    pFVar3->Handle = 0;
    pFVar4->Handle = 0;
  }
  return;
}

// ClientCancelReservationResponse @ 14ec62b90

void __thiscall
APartyBeaconClient::ClientCancelReservationResponse(APartyBeaconClient *this,Type param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = (undefined1)param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_APartyBeaconClient_ClientCancelReservationResponse);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// ClientCancelReservationResponse_Implementation @ 14ec62bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
APartyBeaconClient::ClientCancelReservationResponse_Implementation
          (APartyBeaconClient *this,Type param_1)

{
  float fVar1;
  code *pcVar2;
  TConsoleVariableData<float> *pTVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UWorld *this_00;
  FTimerManager *this_01;
  ForAnyElementType FVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_e0;
  int local_d8;
  FDelegateAllocation local_d0;
  FTimerHandle local_c0;
  APartyBeaconClient *local_b8;
  Type TStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8;
  FDelegateAllocation *local_a0;
  FTimerUnifiedDelegate local_98;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if ((this->bCancelReservation == false) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5062737019927526874>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconClient.cpp"
                         ,0x226,"bCancelReservation"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ClearTimers(this,false);
  pTVar3 = BeaconConsoleVariables::CVarDelayCancellationResponse.Ref;
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar1 = pTVar3->ShadowedValue[0];
  if (fVar1 <= 0.0) {
    ProcessCancelReservationResponse(this,param_1);
    return;
  }
  if (5 < (byte)LogPartyBeacon._0_1_) {
    EPartyReservationResult::ToString(param_1);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  local_a8 = 0;
  local_a0 = &local_d0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  local_b8 = this;
  TStack_b0 = param_1;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_d0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`APartyBeaconClient::ClientCancelReservationResponse_Implementation'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = local_b8;
    puVar5[4] = CONCAT44(uStack_ac,TStack_b0);
  }
  local_c0.Handle = 0;
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 == (UWorld *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5062737019927526756>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconClient.cpp"
                       ,0x29c,"World != nullptr");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_14ec62f37;
  }
  this_01 = UWorld::GetTimerManager(this_00);
  local_98.VariantDelegate._0_8_ = (undefined8 *)0x0;
  local_d8 = 0;
  local_98.VariantDelegate._8_4_ = 0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  FVar7.Data = (FScriptContainerElement *)0x0;
  iVar9 = 0;
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x48))
              (local_d0.DelegateAllocator,&local_e0);
    FVar7.Data = local_e0.Data;
    iVar9 = local_d8;
  }
  local_d8 = 0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  if (local_98.VariantDelegate._8_4_ == 0) {
LAB_14ec62e23:
    if ((undefined8 *)local_98.VariantDelegate._0_8_ != (undefined8 *)0x0) {
      FMemory::Free((void *)local_98.VariantDelegate._0_8_);
    }
  }
  else if ((undefined8 *)local_98.VariantDelegate._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_98.VariantDelegate._0_8_)(local_98.VariantDelegate._0_8_);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_98.VariantDelegate._8_4_ = 0;
    goto LAB_14ec62e23;
  }
  local_98.VariantDelegate._0_8_ = FVar7.Data;
  local_98.VariantDelegate._8_4_ = iVar9;
  if (local_d8 == 0) {
LAB_14ec62e71:
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
  }
  else if (local_e0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e0,0,0,0x10);
    local_d8 = 0;
    goto LAB_14ec62e71;
  }
  local_98.VariantDelegate.TypeIndex = 1;
  FTimerManager::InternalSetTimer(this_01,&local_c0,&local_98,fVar1,false,__real_bf800000);
  uVar8 = (ulonglong)local_98.VariantDelegate.TypeIndex;
  if ((3 < local_98.VariantDelegate.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_98.VariantDelegate._8_4_ != 0) {
      if ((FScriptContainerElement *)local_98.VariantDelegate._0_8_ ==
          (FScriptContainerElement *)0x0) goto LAB_14ec62f37;
      (*(code *)**(undefined8 **)local_98.VariantDelegate._0_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_98,0,0,0x10);
      local_98.VariantDelegate._8_4_ = 0;
    }
    if ((FScriptContainerElement *)local_98.VariantDelegate._0_8_ != (FScriptContainerElement *)0x0)
    {
      FMemory::Free((void *)local_98.VariantDelegate._0_8_);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_98);
  }
LAB_14ec62f37:
  (this->PendingCancelResponseTimerHandle).Handle = local_c0.Handle;
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  return;
}

// ClientReservationResponse @ 14ec63100

void __thiscall APartyBeaconClient::ClientReservationResponse(APartyBeaconClient *this,Type param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = (undefined1)param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_APartyBeaconClient_ClientReservationResponse);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// ClientReservationResponse_Implementation @ 14ec63140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
APartyBeaconClient::ClientReservationResponse_Implementation(APartyBeaconClient *this,Type param_1)

{
  float fVar1;
  code *pcVar2;
  TConsoleVariableData<float> *pTVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UWorld *this_00;
  FTimerManager *this_01;
  ForAnyElementType FVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_e0;
  int local_d8;
  FDelegateAllocation local_d0;
  FTimerHandle local_c0;
  APartyBeaconClient *local_b8;
  Type TStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8;
  FDelegateAllocation *local_a0;
  FTimerUnifiedDelegate local_98;
  ulonglong local_58;
  
  pTVar3 = BeaconConsoleVariables::CVarDelayReservationResponse.Ref;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (this->bCancelReservation != false) {
    if ((byte)LogPartyBeacon._0_1_ < 6) {
      return;
    }
    EPartyReservationResult::ToString(param_1);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    return;
  }
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar1 = pTVar3->ShadowedValue[0];
  if (fVar1 <= 0.0) {
    ProcessReservationResponse(this,param_1);
    return;
  }
  if (5 < (byte)LogPartyBeacon._0_1_) {
    EPartyReservationResult::ToString(param_1);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  local_a8 = 0;
  local_a0 = &local_d0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  local_b8 = this;
  TStack_b0 = param_1;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_d0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`APartyBeaconClient::ClientReservationResponse_Implementation'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = local_b8;
    puVar5[4] = CONCAT44(uStack_ac,TStack_b0);
  }
  local_c0.Handle = 0;
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 == (UWorld *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5062737019927526756>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconClient.cpp"
                       ,0x29c,"World != nullptr");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_14ec63475;
  }
  this_01 = UWorld::GetTimerManager(this_00);
  local_98.VariantDelegate._0_8_ = (undefined8 *)0x0;
  local_d8 = 0;
  local_98.VariantDelegate._8_4_ = 0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  FVar7.Data = (FScriptContainerElement *)0x0;
  iVar9 = 0;
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_d0.DelegateAllocator + 0x48))
              (local_d0.DelegateAllocator,&local_e0);
    FVar7.Data = local_e0.Data;
    iVar9 = local_d8;
  }
  local_d8 = 0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  if (local_98.VariantDelegate._8_4_ == 0) {
LAB_14ec63361:
    if ((undefined8 *)local_98.VariantDelegate._0_8_ != (undefined8 *)0x0) {
      FMemory::Free((void *)local_98.VariantDelegate._0_8_);
    }
  }
  else if ((undefined8 *)local_98.VariantDelegate._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_98.VariantDelegate._0_8_)(local_98.VariantDelegate._0_8_);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_98.VariantDelegate._8_4_ = 0;
    goto LAB_14ec63361;
  }
  local_98.VariantDelegate._0_8_ = FVar7.Data;
  local_98.VariantDelegate._8_4_ = iVar9;
  if (local_d8 == 0) {
LAB_14ec633af:
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
  }
  else if (local_e0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e0,0,0,0x10);
    local_d8 = 0;
    goto LAB_14ec633af;
  }
  local_98.VariantDelegate.TypeIndex = 1;
  FTimerManager::InternalSetTimer(this_01,&local_c0,&local_98,fVar1,false,__real_bf800000);
  uVar8 = (ulonglong)local_98.VariantDelegate.TypeIndex;
  if ((3 < local_98.VariantDelegate.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_98.VariantDelegate._8_4_ != 0) {
      if ((FScriptContainerElement *)local_98.VariantDelegate._0_8_ ==
          (FScriptContainerElement *)0x0) goto LAB_14ec63475;
      (*(code *)**(undefined8 **)local_98.VariantDelegate._0_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_98,0,0,0x10);
      local_98.VariantDelegate._8_4_ = 0;
    }
    if ((FScriptContainerElement *)local_98.VariantDelegate._0_8_ != (FScriptContainerElement *)0x0)
    {
      FMemory::Free((void *)local_98.VariantDelegate._0_8_);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_98);
  }
LAB_14ec63475:
  (this->PendingResponseTimerHandle).Handle = local_c0.Handle;
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  return;
}

// ClientSendReservationFull @ 14ec63530

void __thiscall APartyBeaconClient::ClientSendReservationFull(APartyBeaconClient *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_APartyBeaconClient_ClientSendReservationFull);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014ec6355d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// ClientSendReservationFull_Implementation @ 14ec63570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
APartyBeaconClient::ClientSendReservationFull_Implementation(APartyBeaconClient *this)

{
  float fVar1;
  code *pcVar2;
  TConsoleVariableData<float> *pTVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UWorld *this_00;
  FTimerManager *this_01;
  ForAnyElementType FVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStackY_e8 [32];
  ForAnyElementType local_b0;
  int local_a8;
  FDelegateAllocation local_a0;
  FTimerHandle local_90;
  undefined1 local_88;
  FDelegateAllocation *local_80;
  FTimerUnifiedDelegate local_78;
  ulonglong local_38;
  
  pTVar3 = BeaconConsoleVariables::CVarDelayFullResponse.Ref;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (this->bCancelReservation != false) {
    return;
  }
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar1 = pTVar3->ShadowedValue[0];
  if (fVar1 <= 0.0) {
    ProcessReservationFull(this);
    return;
  }
  if (5 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  local_88 = 0;
  local_80 = &local_a0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`APartyBeaconClient::ClientSendReservationFull_Implementation'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = this;
  }
  local_90.Handle = 0;
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 == (UWorld *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5062737019927526756>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconClient.cpp"
                       ,0x29c,"World != nullptr");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_14ec6387e;
  }
  this_01 = UWorld::GetTimerManager(this_00);
  local_78.VariantDelegate._0_8_ = (undefined8 *)0x0;
  local_a8 = 0;
  local_78.VariantDelegate._8_4_ = 0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  FVar7.Data = (FScriptContainerElement *)0x0;
  iVar9 = 0;
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_a0.DelegateAllocator + 0x48))
              (local_a0.DelegateAllocator,&local_b0);
    FVar7.Data = local_b0.Data;
    iVar9 = local_a8;
  }
  local_a8 = 0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  if (local_78.VariantDelegate._8_4_ == 0) {
LAB_14ec63766:
    if ((undefined8 *)local_78.VariantDelegate._0_8_ != (undefined8 *)0x0) {
      FMemory::Free((void *)local_78.VariantDelegate._0_8_);
    }
  }
  else if ((undefined8 *)local_78.VariantDelegate._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_78.VariantDelegate._0_8_)(local_78.VariantDelegate._0_8_);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_78,0,0,0x10);
    local_78.VariantDelegate._8_4_ = 0;
    goto LAB_14ec63766;
  }
  local_78.VariantDelegate._0_8_ = FVar7.Data;
  local_78.VariantDelegate._8_4_ = iVar9;
  if (local_a8 == 0) {
LAB_14ec637b8:
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
  }
  else if (local_b0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b0,0,0,0x10);
    local_a8 = 0;
    goto LAB_14ec637b8;
  }
  local_78.VariantDelegate.TypeIndex = 1;
  FTimerManager::InternalSetTimer(this_01,&local_90,&local_78,fVar1,false,__real_bf800000);
  uVar8 = (ulonglong)local_78.VariantDelegate.TypeIndex;
  if ((3 < local_78.VariantDelegate.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_78.VariantDelegate._8_4_ != 0) {
      if ((FScriptContainerElement *)local_78.VariantDelegate._0_8_ ==
          (FScriptContainerElement *)0x0) goto LAB_14ec6387e;
      (*(code *)**(undefined8 **)local_78.VariantDelegate._0_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_78,0,0,0x10);
      local_78.VariantDelegate._8_4_ = 0;
    }
    if ((FScriptContainerElement *)local_78.VariantDelegate._0_8_ != (FScriptContainerElement *)0x0)
    {
      FMemory::Free((void *)local_78.VariantDelegate._0_8_);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_78);
  }
LAB_14ec6387e:
  (this->PendingReservationFullTimerHandle).Handle = local_90.Handle;
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  return;
}

// ClientSendReservationUpdates @ 14ec63910

void __thiscall
APartyBeaconClient::ClientSendReservationUpdates(APartyBeaconClient *this,int param_1)

{
  UFunction *pUVar1;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_APartyBeaconClient_ClientSendReservationUpdates);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// ClientSendReservationUpdates_Implementation @ 14ec63950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
APartyBeaconClient::ClientSendReservationUpdates_Implementation
          (APartyBeaconClient *this,int param_1)

{
  float fVar1;
  code *pcVar2;
  TConsoleVariableData<float> *pTVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UWorld *this_00;
  FTimerManager *this_01;
  ForAnyElementType FVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStackY_108 [32];
  ForAnyElementType local_d0;
  int local_c8;
  FDelegateAllocation local_c0;
  FTimerHandle local_b0;
  APartyBeaconClient *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  FDelegateAllocation *local_90;
  FTimerUnifiedDelegate local_88;
  ulonglong local_48;
  
  pTVar3 = BeaconConsoleVariables::CVarDelayUpdateResponse.Ref;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if (this->bCancelReservation != false) {
    return;
  }
  bVar4 = IsInParallelGameThread();
  if (((!bVar4) && (bVar4 = IsInGameThread(), !bVar4)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar1 = pTVar3->ShadowedValue[0];
  if (fVar1 <= 0.0) {
    ProcessReservationUpdate(this,param_1);
    return;
  }
  if (5 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  local_98 = 0;
  local_90 = &local_c0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  local_a8 = this;
  iStack_a0 = param_1;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_c0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`APartyBeaconClient::ClientSendReservationUpdates_Implementation'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = local_a8;
    puVar5[4] = CONCAT44(uStack_9c,iStack_a0);
  }
  local_b0.Handle = 0;
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 == (UWorld *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5062737019927526756>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconClient.cpp"
                       ,0x29c,"World != nullptr");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_14ec63c5f;
  }
  this_01 = UWorld::GetTimerManager(this_00);
  local_88.VariantDelegate._0_8_ = (undefined8 *)0x0;
  local_c8 = 0;
  local_88.VariantDelegate._8_4_ = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  FVar7.Data = (FScriptContainerElement *)0x0;
  iVar9 = 0;
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_c0.DelegateAllocator + 0x48))
              (local_c0.DelegateAllocator,&local_d0);
    FVar7.Data = local_d0.Data;
    iVar9 = local_c8;
  }
  local_c8 = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  if (local_88.VariantDelegate._8_4_ == 0) {
LAB_14ec63b4f:
    if ((undefined8 *)local_88.VariantDelegate._0_8_ != (undefined8 *)0x0) {
      FMemory::Free((void *)local_88.VariantDelegate._0_8_);
    }
  }
  else if ((undefined8 *)local_88.VariantDelegate._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_88.VariantDelegate._0_8_)(local_88.VariantDelegate._0_8_);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_88,0,0,0x10);
    local_88.VariantDelegate._8_4_ = 0;
    goto LAB_14ec63b4f;
  }
  local_88.VariantDelegate._0_8_ = FVar7.Data;
  local_88.VariantDelegate._8_4_ = iVar9;
  if (local_c8 == 0) {
LAB_14ec63b99:
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
  }
  else if (local_d0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_14ec63b99;
  }
  local_88.VariantDelegate.TypeIndex = 1;
  FTimerManager::InternalSetTimer(this_01,&local_b0,&local_88,fVar1,false,__real_bf800000);
  uVar8 = (ulonglong)local_88.VariantDelegate.TypeIndex;
  if ((3 < local_88.VariantDelegate.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8] ==
      UE::Core::Private::
      TDestructorCaller<TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>_>::
      Destruct) {
    if (local_88.VariantDelegate._8_4_ != 0) {
      if ((FScriptContainerElement *)local_88.VariantDelegate._0_8_ ==
          (FScriptContainerElement *)0x0) goto LAB_14ec63c5f;
      (*(code *)**(undefined8 **)local_88.VariantDelegate._0_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_88,0,0,0x10);
      local_88.VariantDelegate._8_4_ = 0;
    }
    if ((FScriptContainerElement *)local_88.VariantDelegate._0_8_ != (FScriptContainerElement *)0x0)
    {
      FMemory::Free((void *)local_88.VariantDelegate._0_8_);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_88);
  }
LAB_14ec63c5f:
  (this->PendingReservationUpdateTimerHandle).Handle = local_b0.Handle;
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  return;
}

// DelayResponse @ 14ec6b840

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FTimerHandle __thiscall
APartyBeaconClient::DelayResponse
          (APartyBeaconClient *this,
          TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *param_1,
          float param_2)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  FTimerHandle FVar3;
  FTimerManager *this_01;
  TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *in_R8;
  float in_XMM3_Da;
  
  *(undefined8 *)param_1 = 0;
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 == (UWorld *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5062737019927526756>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconClient.cpp"
                       ,0x29c,"World != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar3.Handle = (*pcVar1)();
      return (FTimerHandle)FVar3.Handle;
    }
  }
  else {
    this_01 = UWorld::GetTimerManager(this_00);
    FTimerManager::SetTimer(this_01,(FTimerHandle *)param_1,in_R8,in_XMM3_Da,false,__real_bf800000);
  }
  return (FTimerHandle)(ulong64)param_1;
}

// GetPrivateStaticClass @ 14ec77580

UClass * __cdecl APartyBeaconClient::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APartyBeaconClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"PartyBeaconClient",
               &Z_Registration_Info_UClass_APartyBeaconClient.InnerSingleton,
               StaticRegisterNativesAPartyBeaconClient,0x438,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APartyBeaconClient>,
               InternalVTableHelperCtorCaller<APartyBeaconClient>,local_res8,
               AOnlineBeaconClient::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APartyBeaconClient.InnerSingleton;
}

// OnCancelledComplete @ 14ec84d40

void __thiscall APartyBeaconClient::OnCancelledComplete(APartyBeaconClient *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ReservationRequestComplete,&local_28);
  if ((*(int *)&(this->ReservationRequestComplete).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ReservationRequestComplete).field_0x8,
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,0xc);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  this->RequestType = NonePending;
  this->bCancelReservation = false;
  return;
}

// OnCancelledFailsafe @ 14ec84db0

void __thiscall APartyBeaconClient::OnCancelledFailsafe(APartyBeaconClient *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ec84db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x800))(this,0xc);
  return;
}

// OnConnected @ 14ec865c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall APartyBeaconClient::OnConnected(APartyBeaconClient *this)

{
  EClientRequestType EVar1;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (this->bCancelReservation == false) {
    EVar1 = this->RequestType;
    if (EVar1 == AddOrUpdateReservation) {
      if (5 < (byte)LogPartyBeacon._0_1_) {
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"APartyBeaconClient::OnConnected",0x1f,Yes);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
      (**(code **)(this->_padding_ + 0x878))(this,&this->DestSessionId,&this->PendingReservation);
      this->bPendingReservationSent = true;
    }
    else if (EVar1 == ExistingSessionReservation) {
      if (5 < (byte)LogPartyBeacon._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
      }
      (**(code **)(this->_padding_ + 0x868))(this,&this->DestSessionId,&this->PendingReservation);
      this->bPendingReservationSent = true;
    }
    else if (EVar1 == ReservationUpdate) {
      if (5 < (byte)LogPartyBeacon._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
      }
      (**(code **)(this->_padding_ + 0x870))(this,&this->DestSessionId,&this->PendingReservation);
      this->bPendingReservationSent = true;
    }
    else if (EVar1 == ReservationRemoveMembers) {
      if (5 < (byte)LogPartyBeacon._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
      }
      (**(code **)(this->_padding_ + 0x880))(this,&this->DestSessionId,&this->PendingReservation);
      this->bPendingReservationSent = true;
    }
    else {
      if (2 < (byte)LogPartyBeacon._0_1_) {
        switch(EVar1) {
        case NonePending:
          break;
        case ExistingSessionReservation:
          break;
        case ReservationUpdate:
          break;
        case EmptyServerReservation:
          break;
        case Reconnect:
          break;
        default:
          break;
        case ReservationRemoveMembers:
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
      }
      (**(code **)(this->_padding_ + 0x778))(this);
    }
  }
  else {
    if (5 < (byte)LogPartyBeacon._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
    OnCancelledComplete(this);
  }
  return;
}

// OnFailure @ 14ec879a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall APartyBeaconClient::OnFailure(APartyBeaconClient *this)

{
  FName local_res8;
  FReadAccessScope local_28;
  
  ClearTimers(this,true);
  this->RequestType = NonePending;
  if (5 < (byte)LogBeacon._0_1_) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,(FString *)&local_28);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    if ((void *)local_28.DestructionSentinel._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28.DestructionSentinel._0_8_);
    }
  }
  *(undefined1 *)&this->_padding_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28);
  if (((int)this->_padding_ != 0) && ((longlong *)this->_padding_ != (longlong *)0x0)) {
    (**(code **)(*(longlong *)this->_padding_ + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (this->_padding_ != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&GEngine->NetworkFailureEvent,
               (FDelegateHandle)this->_padding_);
  }
  AOnlineBeacon::CleanupNetDriver((AOnlineBeacon *)this);
  return;
}

// ProcessCancelReservationResponse @ 14ec8db90

void __thiscall
APartyBeaconClient::ProcessCancelReservationResponse(APartyBeaconClient *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 != ReservationRequestCanceled) && (param_1 != ReservationNotFound)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5062737019927526843>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconClient.cpp"
                       ,0x245,
                       "ReservationResponse == EPartyReservationResult::ReservationRequestCanceled || ReservationResponse == EPartyReservationResult::ReservationNotFound"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bCancelReservation == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5062737019927526842>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconClient.cpp"
                       ,0x246,"bCancelReservation");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  OnCancelledComplete(this);
  return;
}

// ProcessReservationFull @ 14ec8eb20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall APartyBeaconClient::ProcessReservationFull(APartyBeaconClient *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  if (5 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ReservationFull,
             &local_28);
  if ((*(int *)&(this->ReservationFull).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ReservationFull).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// ProcessReservationResponse @ 14ec8eb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
APartyBeaconClient::ProcessReservationResponse(APartyBeaconClient *this,Type param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  if (this->bCancelReservation == false) {
    if (5 < (byte)LogPartyBeacon._0_1_) {
      EPartyReservationResult::ToString(param_1);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->ReservationRequestComplete,&local_28);
    if ((*(int *)&(this->ReservationRequestComplete).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->ReservationRequestComplete).field_0x8,
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    this->RequestType = NonePending;
    return;
  }
  if (5 < (byte)LogPartyBeacon._0_1_) {
    EPartyReservationResult::ToString(param_1);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  return;
}

// ProcessReservationUpdate @ 14ec8ec60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall APartyBeaconClient::ProcessReservationUpdate(APartyBeaconClient *this,int param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  if (5 < (byte)LogPartyBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ReservationCountUpdate
             ,&local_28);
  if ((*(int *)&(this->ReservationCountUpdate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->ReservationCountUpdate).field_0x8, plVar1 != (longlong *)0x0))
  {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// RequestAddOrUpdateReservation @ 14ec91c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
APartyBeaconClient::RequestAddOrUpdateReservation
          (APartyBeaconClient *this,FString *param_1,FString *param_2,FUniqueNetIdRepl *param_3,
          TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *param_4)

{
  bool bVar1;
  bool bVar2;
  wchar_t *pwVar3;
  undefined1 auStack_208 [32];
  FString local_1e8;
  FURL local_1d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  bVar2 = false;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FURL::FURL(&local_1d8,(FURL *)0x0,pwVar3,TRAVEL_Absolute);
  bVar1 = AOnlineBeaconClient::InitClient((AOnlineBeaconClient *)this,&local_1d8);
  if (bVar1) {
    ::FString::operator=(&this->DestSessionId,param_2);
    FUniqueNetIdRepl::operator=(&(this->PendingReservation).PartyLeader,param_3);
    TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
              (&(this->PendingReservation).PartyMembers,param_4);
    this->RequestType = AddOrUpdateReservation;
    this->bPendingReservationSent = false;
    bVar2 = true;
  }
  else {
    if (2 < (byte)LogPartyBeacon._0_1_) {
      FURL::ToString(&local_1d8,&local_1e8,false);
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"APartyBeaconClient::RequestAddOrUpdateReservation",0x31,Yes);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
    }
    this->RequestType = NonePending;
    (**(code **)(this->_padding_ + 0x778))(this);
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
  return bVar2;
}

// RequestReservation @ 14ec91e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
APartyBeaconClient::RequestReservation
          (APartyBeaconClient *this,FOnlineSessionSearchResult *param_1,FUniqueNetIdRepl *param_2,
          TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FNameEntryId FVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservation(FOnlineSessionSearchResult_const_&,FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservation_ThreeParams>
  FVar11;
  FOnlineSubsystemModule *pFVar12;
  longlong *plVar13;
  undefined4 extraout_var;
  FOnlineSessionInfo *pFVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar15;
  int *piVar16;
  FColor_u_0 local_res10 [2];
  FUniqueNetIdRepl *local_res18;
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *local_res20;
  uint local_c8;
  uint uStack_c4;
  void *local_c0;
  undefined8 local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  TReferenceControllerBase<1> *local_90;
  FName local_88;
  LARGE_INTEGER local_78;
  FStatMessage local_70;
  void *local_60 [2];
  FName local_50;
  FName local_48 [2];
  
  piVar16 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  local_res18 = param_2;
  local_res20 = param_3;
  if ((*piVar16 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_PartyBeaconClient_RequestReservation_ThreeParams ==
        (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservation(FOnlineSessionSearchResult_const_&,FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservation_ThreeParams>
         )0x0) {
      pFVar10 = ::FName::FName(&local_50,"STAT_PartyBeaconClient_RequestReservation_ThreeParams");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_PartyBeaconClient_RequestReservation_ThreeParams,*pFVar10,
                 L"STAT_PartyBeaconClient_RequestReservation_ThreeParams","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_PartyBeaconClient_RequestReservation_ThreeParams;
  if (StatPtr_STAT_PartyBeaconClient_RequestReservation_ThreeParams ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservation(FOnlineSessionSearchResult_const_&,FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservation_ThreeParams>
       )0x0) {
    pFVar10 = ::FName::FName(local_48,"STAT_PartyBeaconClient_RequestReservation_ThreeParams");
    FVar11 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservation(FOnlineSessionSearchResult_const_&,FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservation_ThreeParams>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_PartyBeaconClient_RequestReservation_ThreeParams,*pFVar10,
                          L"STAT_PartyBeaconClient_RequestReservation_ThreeParams","STATGROUP_Quick"
                          ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar2 = false;
  bVar4 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar9 = FVar15.ComparisonIndex.Value;
  uVar8 = FVar15.Number;
  if ((FVar9.Value == 0) && (uVar8 == 0)) {
LAB_14ec91f8d:
    bVar3 = false;
    FVar15 = local_88;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b0.ComparisonIndex.Value = FVar9.Value;
        local_b0.Number = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconClient.cpp"
                   ,0xae);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ec91f8d;
    local_c8 = FVar9.Value;
    uStack_c4 = uVar8;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar3 = true;
  }
  if ((((param_1->Session).OwningUserId.Object != (FUniqueNetId *)0x0) &&
      (pFVar14 = (param_1->Session).SessionInfo.Object, pFVar14 != (FOnlineSessionInfo *)0x0)) &&
     (cVar5 = (**(code **)((longlong)*pFVar14 + 0x20))(), cVar5 != '\0')) {
    AActor::GetWorld((AActor *)this);
    local_a8 = 0;
    if ((*piVar16 <
         `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                      ::__l2::OnlineSubsystemModuleName,L"OnlineSubsystem");
      _Init_thread_footer(&`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pFVar12 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                        (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                         ::__l2::OnlineSubsystemModuleName);
    plVar13 = (longlong *)(**(code **)(pFVar12->_padding_ + 0x50))(pFVar12,local_a8);
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x20))(plVar13,&local_98);
      if (local_98 != (longlong *)0x0) {
        local_c0 = (void *)0x0;
        local_b8 = 0;
        plVar13 = local_98;
        if ((local_98 == (longlong *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), plVar13 = local_98, bVar6)) {
          pcVar1 = (code *)swi(3);
          uVar7 = (*pcVar1)();
          return (bool)uVar7;
        }
        pcVar1 = *(code **)(*plVar13 + 0x370);
        FVar9 = FNameEntryId::FromValidEName((EName)&local_c8);
        uStack_9c = 0;
        local_a0 = *(undefined4 *)CONCAT44(extraout_var,FVar9.Value);
        cVar5 = (*pcVar1)(plVar13,param_1,local_a0,&local_c0);
        if (cVar5 != '\0') {
          pFVar14 = TSharedPtr<FOnlineSessionInfo,1>::operator->(&(param_1->Session).SessionInfo);
          plVar13 = (longlong *)(**(code **)((longlong)*pFVar14 + 0x38))(pFVar14);
          (**(code **)(*plVar13 + 0x30))(plVar13,local_60);
          uVar7 = (**(code **)(this->_padding_ + 0x818))
                            (this,&local_c0,local_60,local_res18,local_res20);
          if (local_60[0] != (void *)0x0) {
            FMemory::Free(local_60[0]);
          }
          if (local_c0 != (void *)0x0) {
            FMemory::Free(local_c0);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_90);
          goto LAB_14ec92124;
        }
        if (local_c0 != (void *)0x0) {
          FMemory::Free(local_c0);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    }
  }
  (**(code **)(this->_padding_ + 0x778))(this);
  uVar7 = 0;
LAB_14ec92124:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_70);
      piVar16 = &this_00->ScopeCount;
      *piVar16 = *piVar16 + -1;
      if (*piVar16 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return (bool)uVar7;
}

// RequestReservation @ 14ec922e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
APartyBeaconClient::RequestReservation
          (APartyBeaconClient *this,FString *param_1,FString *param_2,FUniqueNetIdRepl *param_3,
          TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservation(FString_const_&,FString_const_&,FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservation_FourParams>
  FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  bool bVar11;
  wchar_t *pwVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res10;
  FString *local_res18;
  FUniqueNetIdRepl *local_res20;
  FStatMessage local_c8;
  FName local_b8;
  FURL local_a8;
  
  FVar13.Value = 0;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_PartyBeaconClient_RequestReservation_FourParams ==
        (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservation(FString_const_&,FString_const_&,FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservation_FourParams>
         )0x0) {
      pFVar6 = ::FName::FName((FName *)&local_res10.s,
                              "STAT_PartyBeaconClient_RequestReservation_FourParams");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_PartyBeaconClient_RequestReservation_FourParams,*pFVar6,
                 L"STAT_PartyBeaconClient_RequestReservation_FourParams","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar7 = StatPtr_STAT_PartyBeaconClient_RequestReservation_FourParams;
  if (StatPtr_STAT_PartyBeaconClient_RequestReservation_FourParams ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservation(FString_const_&,FString_const_&,FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservation_FourParams>
       )0x0) {
    pFVar6 = ::FName::FName((FName *)&local_c8,
                            "STAT_PartyBeaconClient_RequestReservation_FourParams");
    FVar7 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservation(FString_const_&,FString_const_&,FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservation_FourParams>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_PartyBeaconClient_RequestReservation_FourParams,*pFVar6,
                         L"STAT_PartyBeaconClient_RequestReservation_FourParams","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar9.Value;
        local_res10.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconClient.cpp"
                   ,0x90);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar9.Value;
      local_res10.s.HighPart = uVar8;
      local_b8 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar13.Value = local_b8.ComparisonIndex.Value;
      goto LAB_14ec92457;
    }
  }
  bVar3 = false;
  FVar10 = local_b8;
LAB_14ec92457:
  bVar11 = false;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FURL::FURL(&local_a8,(FURL *)0x0,pwVar12,TRAVEL_Absolute);
  bVar5 = AOnlineBeaconClient::InitClient((AOnlineBeaconClient *)this,&local_a8);
  if (bVar5) {
    ::FString::operator=(&this->DestSessionId,local_res18);
    FUniqueNetIdRepl::operator=(&(this->PendingReservation).PartyLeader,local_res20);
    TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
              (&(this->PendingReservation).PartyMembers,param_4);
    this->RequestType = ExistingSessionReservation;
    this->bPendingReservationSent = false;
    bVar11 = true;
  }
  else {
    if (2 < (byte)LogPartyBeacon._0_1_) {
      FURL::ToString(&local_a8,(FString *)&local_c8,false);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
      if (local_c8.StatData.Pad != (uchar  [8])0x0) {
        FMemory::Free((void *)local_c8.StatData.Pad);
      }
    }
    this->RequestType = NonePending;
    (**(code **)(this->_padding_ + 0x778))(this);
  }
  if (local_a8.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Portal.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_a8.Op.AllocatorInstance.Data,local_a8.Op.ArrayNum);
  if (local_a8.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Op.AllocatorInstance.Data);
  }
  if (local_a8.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.RedirectURL.Data.AllocatorInstance.Data);
  }
  if (local_a8.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Map.Data.AllocatorInstance.Data);
  }
  if (local_a8.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Host.Data.AllocatorInstance.Data);
  }
  if (local_a8.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Protocol.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_c8.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_c8.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res10);
      local_c8.StatData.Pad[4] = '\0';
      local_c8.StatData.Pad[5] = '\0';
      local_c8.StatData.Pad[6] = '\0';
      local_c8.StatData.Pad[7] = '\0';
      local_c8.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_c8.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_c8.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_c8.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar11;
}

// RequestReservationUpdate @ 14ec92710

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
APartyBeaconClient::RequestReservationUpdate
          (APartyBeaconClient *this,FUniqueNetIdRepl *param_1,
          TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservationUpdate(FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservationUpdate_ThreeParams>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  bool bVar13;
  FColor_u_0 local_res8 [2];
  FName local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FStatMessage local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_PartyBeaconClient_RequestReservationUpdate_ThreeParams ==
          (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservationUpdate(FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservationUpdate_ThreeParams>
           )0x0) {
        pFVar8 = ::FName::FName(&local_58,
                                "STAT_PartyBeaconClient_RequestReservationUpdate_ThreeParams");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_PartyBeaconClient_RequestReservationUpdate_ThreeParams,*pFVar8,
                   L"STAT_PartyBeaconClient_RequestReservationUpdate_ThreeParams","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar9 = StatPtr_STAT_PartyBeaconClient_RequestReservationUpdate_ThreeParams;
  if (StatPtr_STAT_PartyBeaconClient_RequestReservationUpdate_ThreeParams ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservationUpdate(FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservationUpdate_ThreeParams>
       )0x0) {
    pFVar8 = ::FName::FName(&local_50,"STAT_PartyBeaconClient_RequestReservationUpdate_ThreeParams")
    ;
    FVar9 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservationUpdate(FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservationUpdate_ThreeParams>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_PartyBeaconClient_RequestReservationUpdate_ThreeParams,
                         *pFVar8,L"STAT_PartyBeaconClient_RequestReservationUpdate_ThreeParams",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.ComparisonIndex.Value = FVar11.Value;
        local_68.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_68,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconClient.cpp"
                   ,0xd0);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_60.s.LowPart = FVar11.Value;
      local_60.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_14ec92896;
    }
  }
  bVar4 = false;
  FVar12 = local_48;
LAB_14ec92896:
  bVar13 = false;
  if ((char)this->_padding_ == '\x03') {
    this->RequestType = param_3 * '\x04' + ReservationUpdate;
    FUniqueNetIdRepl::operator=(&(this->PendingReservation).PartyLeader,param_1);
    TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
              (&(this->PendingReservation).PartyMembers,param_2);
    (**(code **)(this->_padding_ + 0x870))(this,&this->DestSessionId);
    this->bPendingReservationSent = true;
    bVar13 = true;
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5062737019927527211>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconClient.cpp"
                       ,0xd5,"MyConnectionState == EBeaconConnectionState::Open");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_60);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar13;
}

// RequestReservationUpdate @ 14ec92ac0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
APartyBeaconClient::RequestReservationUpdate
          (APartyBeaconClient *this,FOnlineSessionSearchResult *param_1,FUniqueNetIdRepl *param_2,
          TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *param_3,bool param_4)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservationUpdate(FOnlineSessionSearchResult_const_&,FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservationUpdate_FourParams>
  FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FStatMessage local_48;
  FName local_38;
  
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_PartyBeaconClient_RequestReservationUpdate_FourParams ==
          (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservationUpdate(FOnlineSessionSearchResult_const_&,FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservationUpdate_FourParams>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_res8.s,
                                "STAT_PartyBeaconClient_RequestReservationUpdate_FourParams");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_PartyBeaconClient_RequestReservationUpdate_FourParams,*pFVar6,
                   L"STAT_PartyBeaconClient_RequestReservationUpdate_FourParams","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_PartyBeaconClient_RequestReservationUpdate_FourParams;
  if (StatPtr_STAT_PartyBeaconClient_RequestReservationUpdate_FourParams ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservationUpdate(FOnlineSessionSearchResult_const_&,FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservationUpdate_FourParams>
       )0x0) {
    pFVar6 = ::FName::FName((FName *)&local_48,
                            "STAT_PartyBeaconClient_RequestReservationUpdate_FourParams");
    FVar7 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservationUpdate(FOnlineSessionSearchResult_const_&,FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservationUpdate_FourParams>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_PartyBeaconClient_RequestReservationUpdate_FourParams,*pFVar6
                         ,L"STAT_PartyBeaconClient_RequestReservationUpdate_FourParams",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconClient.cpp"
                   ,0x104);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      local_38 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_38.ComparisonIndex.Value;
      goto LAB_14ec92c56;
    }
  }
  bVar3 = false;
  FVar10 = local_38;
LAB_14ec92c56:
  cVar5 = '\0';
  if ((char)this->_padding_ == '\x03') {
    (**(code **)(this->_padding_ + 0x830))(this,param_2,param_3,param_4);
  }
  else {
    cVar5 = (**(code **)(this->_padding_ + 0x810))(this,param_1,param_2,param_3);
    if (cVar5 != '\0') {
      this->RequestType = param_4 * '\x04' + ReservationUpdate;
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return (bool)cVar5;
}

// RequestReservationUpdate @ 14ec92e50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
APartyBeaconClient::RequestReservationUpdate
          (APartyBeaconClient *this,FString *param_1,FString *param_2,FUniqueNetIdRepl *param_3,
          TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> *param_4,bool param_5)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservationUpdate(FString_const_&,FString_const_&,FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservationUpdate_FiveParams>
  FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res10;
  FStatMessage local_48;
  FName local_38;
  
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_PartyBeaconClient_RequestReservationUpdate_FiveParams ==
        (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservationUpdate(FString_const_&,FString_const_&,FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservationUpdate_FiveParams>
         )0x0) {
      pFVar6 = ::FName::FName((FName *)&local_res10.s,
                              "STAT_PartyBeaconClient_RequestReservationUpdate_FiveParams");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_PartyBeaconClient_RequestReservationUpdate_FiveParams,*pFVar6,
                 L"STAT_PartyBeaconClient_RequestReservationUpdate_FiveParams","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar7 = StatPtr_STAT_PartyBeaconClient_RequestReservationUpdate_FiveParams;
  if (StatPtr_STAT_PartyBeaconClient_RequestReservationUpdate_FiveParams ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservationUpdate(FString_const_&,FString_const_&,FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservationUpdate_FiveParams>
       )0x0) {
    pFVar6 = ::FName::FName((FName *)&local_48,
                            "STAT_PartyBeaconClient_RequestReservationUpdate_FiveParams");
    FVar7 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_APartyBeaconClient::RequestReservationUpdate(FString_const_&,FString_const_&,FUniqueNetIdRepl_const_&,TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>_const_&,bool)_::_2_::FStat_STAT_PartyBeaconClient_RequestReservationUpdate_FiveParams>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_PartyBeaconClient_RequestReservationUpdate_FiveParams,*pFVar6
                         ,L"STAT_PartyBeaconClient_RequestReservationUpdate_FiveParams",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar9.Value;
        local_res10.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\PartyBeaconClient.cpp"
                   ,0xe4);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar9.Value;
      local_res10.s.HighPart = uVar8;
      local_38 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_38.ComparisonIndex.Value;
      goto LAB_14ec92fe6;
    }
  }
  bVar3 = false;
  FVar10 = local_38;
LAB_14ec92fe6:
  cVar5 = '\0';
  if (((param_1->Data).ArrayNum < 2) || ((param_2->Data).ArrayNum < 2)) {
    if (2 < (byte)LogPartyBeacon._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPartyBeacon);
    }
  }
  else if ((char)this->_padding_ == '\x03') {
    cVar5 = (**(code **)(this->_padding_ + 0x830))(this,param_3,param_4,param_5);
  }
  else {
    cVar5 = (**(code **)(this->_padding_ + 0x818))(this,param_1,param_2,param_3,param_4);
    if (cVar5 != '\0') {
      this->RequestType = param_5 * '\x04' + ReservationUpdate;
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res10);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return (bool)cVar5;
}

// ServerAddOrUpdateReservationRequest @ 14ec96600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
APartyBeaconClient::ServerAddOrUpdateReservationRequest
          (APartyBeaconClient *this,FString *param_1,FPartyReservation *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  UFunction *pUVar4;
  ulonglong uVar5;
  undefined1 auStackY_d8 [32];
  FString local_98;
  int local_88;
  FUniqueNetIdRepl local_80;
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> local_50;
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_80._padding_._0_1_ = 0;
  local_80.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ReplicationBytes.ArrayNum = 0;
  local_80.ReplicationBytes.ArrayMax = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_80._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  local_88 = 0xffffffff;
  local_80._padding_ = 0;
  local_80._padding_ = 0;
  if (&local_98 != param_1) {
    uVar1 = (param_1->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_98.Data.ArrayMax = 0;
    local_98.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_98,uVar1,&local_98.Data.ArrayMax);
      memcpy(local_98.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  local_88 = param_2->TeamNum;
  FUniqueNetIdRepl::operator=(&local_80,&param_2->PartyLeader);
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
            (&local_50,&param_2->PartyMembers);
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
            (&local_40,&param_2->RemovedPartyMembers);
  pUVar4 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_APartyBeaconClient_ServerAddOrUpdateReservationRequest);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_98);
  DestructItems<FPlayerReservation,int>
            ((FPlayerReservation *)local_40.AllocatorInstance.Data,local_40.ArrayNum);
  if ((FPlayerReservation *)local_40.AllocatorInstance.Data != (FPlayerReservation *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  DestructItems<FPlayerReservation,int>
            ((FPlayerReservation *)local_50.AllocatorInstance.Data,local_50.ArrayNum);
  if ((FPlayerReservation *)local_50.AllocatorInstance.Data != (FPlayerReservation *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  local_80._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  if (local_80.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.ReplicationBytes.AllocatorInstance.Data);
  }
  uVar5 = (ulonglong)(byte)local_80._padding_;
  if ((1 < (byte)local_80._padding_) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_80._padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_80._padding_);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// ServerAddOrUpdateReservationRequest_Implementation @ 14ec96810

void __thiscall
APartyBeaconClient::ServerAddOrUpdateReservationRequest_Implementation
          (APartyBeaconClient *this,FString *param_1,FPartyReservation *param_2)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_APartyBeaconHost_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      (this->PendingReservation).TeamNum = param_2->TeamNum;
      FUniqueNetIdRepl::operator=(&(this->PendingReservation).PartyLeader,&param_2->PartyLeader);
      TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
                (&(this->PendingReservation).PartyMembers,&param_2->PartyMembers);
      TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
                (&(this->PendingReservation).RemovedPartyMembers,&param_2->RemovedPartyMembers);
      this->RequestType = ExistingSessionReservation;
      (**(code **)(*plVar2 + 0x840))(plVar2,this,param_1,param_2);
    }
  }
  return;
}

// ServerAddOrUpdateReservationRequest_Validate @ 14ec968d0

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
APartyBeaconClient::ServerAddOrUpdateReservationRequest_Validate
          (APartyBeaconClient *this,FString *param_1,FPartyReservation *param_2)

{
  bool bVar1;
  FUniqueNetIdRepl *pFVar2;
  
  pFVar2 = AOnlineBeaconClient::GetUniqueId((AOnlineBeaconClient *)this);
  bVar1 = ::`anonymous_namespace'::IsRPCInitiatorValid(pFVar2,&param_2->PartyLeader);
  if ((bVar1) && (1 < (param_1->Data).ArrayNum)) {
    bVar1 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&param_2->PartyLeader);
    if ((bVar1) && (0 < (param_2->PartyMembers).ArrayNum)) {
      return true;
    }
  }
  return false;
}

// ServerCancelReservationRequest @ 14ec96940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
APartyBeaconClient::ServerCancelReservationRequest
          (APartyBeaconClient *this,FUniqueNetIdRepl *param_1)

{
  code *pcVar1;
  bool bVar2;
  UFunction *pUVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  FUniqueNetIdRepl local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48._padding_._0_1_ = 0;
  local_48.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ReplicationBytes.ArrayNum = 0;
  local_48.ReplicationBytes.ArrayMax = 0;
  local_48._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  local_48._padding_ = 0;
  local_48._padding_ = 0;
  FUniqueNetIdRepl::operator=(&local_48,param_1);
  pUVar3 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_APartyBeaconClient_ServerCancelReservationRequest);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_48);
  local_48._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  if (local_48.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ReplicationBytes.AllocatorInstance.Data);
  }
  uVar4 = (ulonglong)(byte)local_48._padding_;
  if (1 < (byte)local_48._padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_48._padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(&local_48._padding_);
  }
  return;
}

// ServerCancelReservationRequest_Implementation @ 14ec96a50

void __thiscall
APartyBeaconClient::ServerCancelReservationRequest_Implementation
          (APartyBeaconClient *this,FUniqueNetIdRepl *param_1)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_APartyBeaconHost_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      this->bCancelReservation = true;
      (**(code **)(*plVar2 + 0x848))(plVar2,this,param_1);
    }
  }
  return;
}

// ServerCancelReservationRequest_Validate @ 14ec96ad0

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
APartyBeaconClient::ServerCancelReservationRequest_Validate
          (APartyBeaconClient *this,FUniqueNetIdRepl *param_1)

{
  bool bVar1;
  FUniqueNetIdRepl *pFVar2;
  
  pFVar2 = AOnlineBeaconClient::GetUniqueId((AOnlineBeaconClient *)this);
  bVar1 = ::`anonymous_namespace'::IsRPCInitiatorValid(pFVar2,param_1);
  if (bVar1) {
    bVar1 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// ServerRemoveMemberFromReservationRequest @ 14ec96b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
APartyBeaconClient::ServerRemoveMemberFromReservationRequest
          (APartyBeaconClient *this,FString *param_1,FPartyReservation *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  UFunction *pUVar4;
  ulonglong uVar5;
  undefined1 auStackY_d8 [32];
  FString local_98;
  int local_88;
  FUniqueNetIdRepl local_80;
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> local_50;
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_80._padding_._0_1_ = 0;
  local_80.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ReplicationBytes.ArrayNum = 0;
  local_80.ReplicationBytes.ArrayMax = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_80._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  local_88 = 0xffffffff;
  local_80._padding_ = 0;
  local_80._padding_ = 0;
  if (&local_98 != param_1) {
    uVar1 = (param_1->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_98.Data.ArrayMax = 0;
    local_98.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_98,uVar1,&local_98.Data.ArrayMax);
      memcpy(local_98.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  local_88 = param_2->TeamNum;
  FUniqueNetIdRepl::operator=(&local_80,&param_2->PartyLeader);
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
            (&local_50,&param_2->PartyMembers);
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
            (&local_40,&param_2->RemovedPartyMembers);
  pUVar4 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_APartyBeaconClient_ServerRemoveMemberFromReservationRequest);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_98);
  DestructItems<FPlayerReservation,int>
            ((FPlayerReservation *)local_40.AllocatorInstance.Data,local_40.ArrayNum);
  if ((FPlayerReservation *)local_40.AllocatorInstance.Data != (FPlayerReservation *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  DestructItems<FPlayerReservation,int>
            ((FPlayerReservation *)local_50.AllocatorInstance.Data,local_50.ArrayNum);
  if ((FPlayerReservation *)local_50.AllocatorInstance.Data != (FPlayerReservation *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  local_80._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  if (local_80.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.ReplicationBytes.AllocatorInstance.Data);
  }
  uVar5 = (ulonglong)(byte)local_80._padding_;
  if ((1 < (byte)local_80._padding_) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_80._padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_80._padding_);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// ServerRemoveMemberFromReservationRequest_Implementation @ 14ec96d20

void __thiscall
APartyBeaconClient::ServerRemoveMemberFromReservationRequest_Implementation
          (APartyBeaconClient *this,FString *param_1,FPartyReservation *param_2)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_APartyBeaconHost_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      (this->PendingReservation).TeamNum = param_2->TeamNum;
      FUniqueNetIdRepl::operator=(&(this->PendingReservation).PartyLeader,&param_2->PartyLeader);
      TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
                (&(this->PendingReservation).PartyMembers,&param_2->PartyMembers);
      TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
                (&(this->PendingReservation).RemovedPartyMembers,&param_2->RemovedPartyMembers);
      this->RequestType = ReservationRemoveMembers;
      (**(code **)(*plVar2 + 0x838))(plVar2,this,param_1,param_2,1);
    }
  }
  return;
}

// ServerRemoveMemberFromReservationRequest_Validate @ 14ec96df0

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
APartyBeaconClient::ServerRemoveMemberFromReservationRequest_Validate
          (APartyBeaconClient *this,FString *param_1,FPartyReservation *param_2)

{
  bool bVar1;
  FUniqueNetIdRepl *pFVar2;
  
  pFVar2 = AOnlineBeaconClient::GetUniqueId((AOnlineBeaconClient *)this);
  bVar1 = ::`anonymous_namespace'::IsRPCInitiatorValid(pFVar2,&param_2->PartyLeader);
  if ((bVar1) && (1 < (param_1->Data).ArrayNum)) {
    bVar1 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&param_2->PartyLeader);
    if ((bVar1) && (0 < (param_2->PartyMembers).ArrayNum)) {
      return true;
    }
  }
  return false;
}

// ServerReservationRequest @ 14ec96e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
APartyBeaconClient::ServerReservationRequest
          (APartyBeaconClient *this,FString *param_1,FPartyReservation *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  UFunction *pUVar4;
  ulonglong uVar5;
  undefined1 auStackY_d8 [32];
  FString local_98;
  int local_88;
  FUniqueNetIdRepl local_80;
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> local_50;
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_80._padding_._0_1_ = 0;
  local_80.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ReplicationBytes.ArrayNum = 0;
  local_80.ReplicationBytes.ArrayMax = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_80._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  local_88 = 0xffffffff;
  local_80._padding_ = 0;
  local_80._padding_ = 0;
  if (&local_98 != param_1) {
    uVar1 = (param_1->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_98.Data.ArrayMax = 0;
    local_98.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_98,uVar1,&local_98.Data.ArrayMax);
      memcpy(local_98.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  local_88 = param_2->TeamNum;
  FUniqueNetIdRepl::operator=(&local_80,&param_2->PartyLeader);
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
            (&local_50,&param_2->PartyMembers);
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
            (&local_40,&param_2->RemovedPartyMembers);
  pUVar4 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_APartyBeaconClient_ServerReservationRequest);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_98);
  DestructItems<FPlayerReservation,int>
            ((FPlayerReservation *)local_40.AllocatorInstance.Data,local_40.ArrayNum);
  if ((FPlayerReservation *)local_40.AllocatorInstance.Data != (FPlayerReservation *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  DestructItems<FPlayerReservation,int>
            ((FPlayerReservation *)local_50.AllocatorInstance.Data,local_50.ArrayNum);
  if ((FPlayerReservation *)local_50.AllocatorInstance.Data != (FPlayerReservation *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  local_80._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  if (local_80.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.ReplicationBytes.AllocatorInstance.Data);
  }
  uVar5 = (ulonglong)(byte)local_80._padding_;
  if ((1 < (byte)local_80._padding_) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_80._padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_80._padding_);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// ServerReservationRequest_Implementation @ 14ec97070

void __thiscall
APartyBeaconClient::ServerReservationRequest_Implementation
          (APartyBeaconClient *this,FString *param_1,FPartyReservation *param_2)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_APartyBeaconHost_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      (this->PendingReservation).TeamNum = param_2->TeamNum;
      FUniqueNetIdRepl::operator=(&(this->PendingReservation).PartyLeader,&param_2->PartyLeader);
      TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
                (&(this->PendingReservation).PartyMembers,&param_2->PartyMembers);
      TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
                (&(this->PendingReservation).RemovedPartyMembers,&param_2->RemovedPartyMembers);
      this->RequestType = ExistingSessionReservation;
      (**(code **)(*plVar2 + 0x830))(plVar2,this,param_1,param_2);
    }
  }
  return;
}

// ServerReservationRequest_Validate @ 14ec97130

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
APartyBeaconClient::ServerReservationRequest_Validate
          (APartyBeaconClient *this,FString *param_1,FPartyReservation *param_2)

{
  bool bVar1;
  FUniqueNetIdRepl *pFVar2;
  
  pFVar2 = AOnlineBeaconClient::GetUniqueId((AOnlineBeaconClient *)this);
  bVar1 = ::`anonymous_namespace'::IsRPCInitiatorValid(pFVar2,&param_2->PartyLeader);
  if ((bVar1) && (1 < (param_1->Data).ArrayNum)) {
    bVar1 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&param_2->PartyLeader);
    if ((bVar1) && (0 < (param_2->PartyMembers).ArrayNum)) {
      return true;
    }
  }
  return false;
}

// ServerUpdateReservationRequest @ 14ec971a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
APartyBeaconClient::ServerUpdateReservationRequest
          (APartyBeaconClient *this,FString *param_1,FPartyReservation *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  UFunction *pUVar4;
  ulonglong uVar5;
  undefined1 auStackY_d8 [32];
  FString local_98;
  int local_88;
  FUniqueNetIdRepl local_80;
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> local_50;
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_> local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_80._padding_._0_1_ = 0;
  local_80.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ReplicationBytes.ArrayNum = 0;
  local_80.ReplicationBytes.ArrayMax = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_80._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  local_88 = 0xffffffff;
  local_80._padding_ = 0;
  local_80._padding_ = 0;
  if (&local_98 != param_1) {
    uVar1 = (param_1->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_98.Data.ArrayMax = 0;
    local_98.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_98,uVar1,&local_98.Data.ArrayMax);
      memcpy(local_98.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  local_88 = param_2->TeamNum;
  FUniqueNetIdRepl::operator=(&local_80,&param_2->PartyLeader);
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
            (&local_50,&param_2->PartyMembers);
  TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
            (&local_40,&param_2->RemovedPartyMembers);
  pUVar4 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_APartyBeaconClient_ServerUpdateReservationRequest);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_98);
  DestructItems<FPlayerReservation,int>
            ((FPlayerReservation *)local_40.AllocatorInstance.Data,local_40.ArrayNum);
  if ((FPlayerReservation *)local_40.AllocatorInstance.Data != (FPlayerReservation *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  DestructItems<FPlayerReservation,int>
            ((FPlayerReservation *)local_50.AllocatorInstance.Data,local_50.ArrayNum);
  if ((FPlayerReservation *)local_50.AllocatorInstance.Data != (FPlayerReservation *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  local_80._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  if (local_80.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.ReplicationBytes.AllocatorInstance.Data);
  }
  uVar5 = (ulonglong)(byte)local_80._padding_;
  if ((1 < (byte)local_80._padding_) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_80._padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_80._padding_);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// ServerUpdateReservationRequest_Implementation @ 14ec973b0

void __thiscall
APartyBeaconClient::ServerUpdateReservationRequest_Implementation
          (APartyBeaconClient *this,FString *param_1,FPartyReservation *param_2)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_APartyBeaconHost_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      (this->PendingReservation).TeamNum = param_2->TeamNum;
      FUniqueNetIdRepl::operator=(&(this->PendingReservation).PartyLeader,&param_2->PartyLeader);
      TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
                (&(this->PendingReservation).PartyMembers,&param_2->PartyMembers);
      TArray<FPlayerReservation,TSizedDefaultAllocator<32>_>::operator=
                (&(this->PendingReservation).RemovedPartyMembers,&param_2->RemovedPartyMembers);
      this->RequestType = ReservationUpdate;
      (**(code **)(*plVar2 + 0x838))(plVar2,this,param_1,param_2,0);
    }
  }
  return;
}

// ServerUpdateReservationRequest_Validate @ 14ec97480

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
APartyBeaconClient::ServerUpdateReservationRequest_Validate
          (APartyBeaconClient *this,FString *param_1,FPartyReservation *param_2)

{
  bool bVar1;
  FUniqueNetIdRepl *pFVar2;
  
  pFVar2 = AOnlineBeaconClient::GetUniqueId((AOnlineBeaconClient *)this);
  bVar1 = ::`anonymous_namespace'::IsRPCInitiatorValid(pFVar2,&param_2->PartyLeader);
  if ((bVar1) && (1 < (param_1->Data).ArrayNum)) {
    bVar1 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&param_2->PartyLeader);
    if ((bVar1) && (0 < (param_2->PartyMembers).ArrayNum)) {
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesAPartyBeaconClient @ 14ec99510

void __cdecl APartyBeaconClient::StaticRegisterNativesAPartyBeaconClient(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_APartyBeaconClient_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execClientCancelReservationResponse @ 14eca1590

void __cdecl
APartyBeaconClient::execClientCancelReservationResponse
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x800))(param_1,local_res8[0]);
  return;
}

// execClientReservationResponse @ 14eca1650

void __cdecl
APartyBeaconClient::execClientReservationResponse(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x808))(param_1,local_res8[0]);
  return;
}

// execClientSendReservationFull @ 14eca16e0

void __cdecl
APartyBeaconClient::execClientSendReservationFull(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014eca16f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x7f0))();
  return;
}

// execClientSendReservationUpdates @ 14eca1710

void __cdecl
APartyBeaconClient::execClientSendReservationUpdates(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x7f8))(param_1,local_res8[0]);
  return;
}

// execServerAddOrUpdateReservationRequest @ 14eca6810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
APartyBeaconClient::execServerAddOrUpdateReservationRequest
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  void *local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined **local_70;
  undefined8 local_68;
  TReferenceControllerBase<1> *pTStack_60;
  byte local_58;
  void *local_50;
  undefined8 local_48;
  FPlayerReservation *local_40;
  undefined8 local_38;
  FPlayerReservation *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = (void *)0x0;
  local_80 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_78[0] = 0xffffffff;
  local_58 = 0;
  local_68 = 0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  local_70 = &___7FUniqueNetIdRepl__6B_;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = (FPlayerReservation *)0x0;
  local_38 = 0;
  local_30 = (FPlayerReservation *)0x0;
  local_28 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar3 = (**(code **)(*(longlong *)param_1 + 0x7c0))(param_1,&local_88,local_78);
  if (cVar3 == '\0') {
    RPC_ValidateFailed(L"ServerAddOrUpdateReservationRequest_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x7c8))(param_1,&local_88,local_78);
  }
  DestructItems<FPlayerReservation,int>(local_30,(int)local_28);
  if (local_30 != (FPlayerReservation *)0x0) {
    FMemory::Free(local_30);
  }
  DestructItems<FPlayerReservation,int>(local_40,(int)local_38);
  if (local_40 != (FPlayerReservation *)0x0) {
    FMemory::Free(local_40);
  }
  local_70 = &___7FUniqueNetIdRepl__6B_;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  uVar5 = (ulonglong)local_58;
  if (1 < local_58) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_68);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// execServerCancelReservationRequest @ 14eca6a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
APartyBeaconClient::execServerCancelReservationRequest
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  TReferenceControllerBase<1> *pTStack_48;
  byte local_40;
  void *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_50 = 0;
  pTStack_48 = (TReferenceControllerBase<1> *)0x0;
  local_58 = &___7FUniqueNetIdRepl__6B_;
  local_38 = (void *)0x0;
  local_30 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar3 = (**(code **)(*(longlong *)param_1 + 0x7a0))(param_1,&local_58);
  if (cVar3 == '\0') {
    RPC_ValidateFailed(L"ServerCancelReservationRequest_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x7a8))(param_1,&local_58);
  }
  local_58 = &___7FUniqueNetIdRepl__6B_;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar5 = (ulonglong)local_40;
  if (1 < local_40) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_50);
  }
  return;
}

// execServerRemoveMemberFromReservationRequest @ 14eca6b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
APartyBeaconClient::execServerRemoveMemberFromReservationRequest
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  void *local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined **local_70;
  undefined8 local_68;
  TReferenceControllerBase<1> *pTStack_60;
  byte local_58;
  void *local_50;
  undefined8 local_48;
  FPlayerReservation *local_40;
  undefined8 local_38;
  FPlayerReservation *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = (void *)0x0;
  local_80 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_78[0] = 0xffffffff;
  local_58 = 0;
  local_68 = 0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  local_70 = &___7FUniqueNetIdRepl__6B_;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = (FPlayerReservation *)0x0;
  local_38 = 0;
  local_30 = (FPlayerReservation *)0x0;
  local_28 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar3 = (**(code **)(*(longlong *)param_1 + 0x7b0))(param_1,&local_88,local_78);
  if (cVar3 == '\0') {
    RPC_ValidateFailed(L"ServerRemoveMemberFromReservationRequest_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x7b8))(param_1,&local_88,local_78);
  }
  DestructItems<FPlayerReservation,int>(local_30,(int)local_28);
  if (local_30 != (FPlayerReservation *)0x0) {
    FMemory::Free(local_30);
  }
  DestructItems<FPlayerReservation,int>(local_40,(int)local_38);
  if (local_40 != (FPlayerReservation *)0x0) {
    FMemory::Free(local_40);
  }
  local_70 = &___7FUniqueNetIdRepl__6B_;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  uVar5 = (ulonglong)local_58;
  if (1 < local_58) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_68);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// execServerReservationRequest @ 14eca6d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
APartyBeaconClient::execServerReservationRequest(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  void *local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined **local_70;
  undefined8 local_68;
  TReferenceControllerBase<1> *pTStack_60;
  byte local_58;
  void *local_50;
  undefined8 local_48;
  FPlayerReservation *local_40;
  undefined8 local_38;
  FPlayerReservation *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = (void *)0x0;
  local_80 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_78[0] = 0xffffffff;
  local_58 = 0;
  local_68 = 0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  local_70 = &___7FUniqueNetIdRepl__6B_;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = (FPlayerReservation *)0x0;
  local_38 = 0;
  local_30 = (FPlayerReservation *)0x0;
  local_28 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar3 = (**(code **)(*(longlong *)param_1 + 0x7e0))(param_1,&local_88,local_78);
  if (cVar3 == '\0') {
    RPC_ValidateFailed(L"ServerReservationRequest_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x7e8))(param_1,&local_88,local_78);
  }
  DestructItems<FPlayerReservation,int>(local_30,(int)local_28);
  if (local_30 != (FPlayerReservation *)0x0) {
    FMemory::Free(local_30);
  }
  DestructItems<FPlayerReservation,int>(local_40,(int)local_38);
  if (local_40 != (FPlayerReservation *)0x0) {
    FMemory::Free(local_40);
  }
  local_70 = &___7FUniqueNetIdRepl__6B_;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  uVar5 = (ulonglong)local_58;
  if (1 < local_58) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_68);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// execServerUpdateReservationRequest @ 14eca6f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
APartyBeaconClient::execServerUpdateReservationRequest
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  void *local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined **local_70;
  undefined8 local_68;
  TReferenceControllerBase<1> *pTStack_60;
  byte local_58;
  void *local_50;
  undefined8 local_48;
  FPlayerReservation *local_40;
  undefined8 local_38;
  FPlayerReservation *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = (void *)0x0;
  local_80 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_78[0] = 0xffffffff;
  local_58 = 0;
  local_68 = 0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  local_70 = &___7FUniqueNetIdRepl__6B_;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = (FPlayerReservation *)0x0;
  local_38 = 0;
  local_30 = (FPlayerReservation *)0x0;
  local_28 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar3 = (**(code **)(*(longlong *)param_1 + 2000))(param_1,&local_88,local_78);
  if (cVar3 == '\0') {
    RPC_ValidateFailed(L"ServerUpdateReservationRequest_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x7d8))(param_1,&local_88,local_78);
  }
  DestructItems<FPlayerReservation,int>(local_30,(int)local_28);
  if (local_30 != (FPlayerReservation *)0x0) {
    FMemory::Free(local_30);
  }
  DestructItems<FPlayerReservation,int>(local_40,(int)local_38);
  if (local_40 != (FPlayerReservation *)0x0) {
    FMemory::Free(local_40);
  }
  local_70 = &___7FUniqueNetIdRepl__6B_;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  uVar5 = (ulonglong)local_58;
  if (1 < local_58) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_68);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}


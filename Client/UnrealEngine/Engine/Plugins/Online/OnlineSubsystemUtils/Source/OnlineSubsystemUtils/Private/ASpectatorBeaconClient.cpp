// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 40

// StaticClass @ 14eca9400

UClass * __cdecl ASpectatorBeaconClient::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASpectatorBeaconClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"SpectatorBeaconClient",
               &Z_Registration_Info_UClass_ASpectatorBeaconClient.InnerSingleton,
               StaticRegisterNativesASpectatorBeaconClient,0x468,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ASpectatorBeaconClient>,
               InternalVTableHelperCtorCaller<ASpectatorBeaconClient>,local_res8,
               AOnlineBeaconClient::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASpectatorBeaconClient.InnerSingleton;
}

// ASpectatorBeaconClient @ 14ecac9b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ASpectatorBeaconClient * __thiscall
ASpectatorBeaconClient::ASpectatorBeaconClient(ASpectatorBeaconClient *this,FVTableHelper *param_1)

{
  AOnlineBeaconClient::AOnlineBeaconClient((AOnlineBeaconClient *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  (this->PendingReservation).SpectatorId._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  (this->PendingReservation).Spectator.UniqueId._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
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
  (this->PendingReservation).SpectatorId._padding_ = 0;
  (this->PendingReservation).SpectatorId._padding_ = 0;
  *(undefined1 *)&(this->PendingReservation).SpectatorId._padding_ = 0;
  (this->PendingReservation).SpectatorId.ReplicationBytes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PendingReservation).SpectatorId.ReplicationBytes.ArrayNum = 0;
  (this->PendingReservation).SpectatorId.ReplicationBytes.ArrayMax = 0;
  (this->PendingReservation).Spectator.UniqueId._padding_ = 0;
  (this->PendingReservation).Spectator.UniqueId._padding_ = 0;
  *(undefined1 *)&(this->PendingReservation).Spectator.UniqueId._padding_ = 0;
  (this->PendingReservation).Spectator.UniqueId.ReplicationBytes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PendingReservation).Spectator.UniqueId.ReplicationBytes.ArrayNum = 0;
  (this->PendingReservation).Spectator.UniqueId.ReplicationBytes.ArrayMax = 0;
  (this->PendingReservation).Spectator.ValidationStr.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PendingReservation).Spectator.ValidationStr.Data.ArrayNum = 0;
  (this->PendingReservation).Spectator.ValidationStr.Data.ArrayMax = 0;
  (this->PendingReservation).Spectator.Platform.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PendingReservation).Spectator.Platform.Data.ArrayNum = 0;
  (this->PendingReservation).Spectator.Platform.Data.ArrayMax = 0;
  (this->PendingReservation).Spectator.bAllowCrossplay = false;
  (this->PendingReservation).Spectator.ElapsedTime = 0.0;
  (this->CancelRPCFailsafe).Handle = 0;
  (this->PendingResponseTimerHandle).Handle = 0;
  (this->PendingCancelResponseTimerHandle).Handle = 0;
  (this->PendingReservationUpdateTimerHandle).Handle = 0;
  (this->PendingReservationFullTimerHandle).Handle = 0;
  return this;
}

// ASpectatorBeaconClient @ 14ecacae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ASpectatorBeaconClient * __thiscall
ASpectatorBeaconClient::ASpectatorBeaconClient
          (ASpectatorBeaconClient *this,FObjectInitializer *param_1)

{
  AOnlineBeaconClient::AOnlineBeaconClient((AOnlineBeaconClient *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  (this->PendingReservation).SpectatorId._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  (this->PendingReservation).Spectator.UniqueId._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
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
  (this->PendingReservation).SpectatorId._padding_ = 0;
  (this->PendingReservation).SpectatorId._padding_ = 0;
  *(undefined1 *)&(this->PendingReservation).SpectatorId._padding_ = 0;
  (this->PendingReservation).SpectatorId.ReplicationBytes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PendingReservation).SpectatorId.ReplicationBytes.ArrayNum = 0;
  (this->PendingReservation).SpectatorId.ReplicationBytes.ArrayMax = 0;
  (this->PendingReservation).Spectator.UniqueId._padding_ = 0;
  (this->PendingReservation).Spectator.UniqueId._padding_ = 0;
  *(undefined1 *)&(this->PendingReservation).Spectator.UniqueId._padding_ = 0;
  (this->PendingReservation).Spectator.UniqueId.ReplicationBytes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PendingReservation).Spectator.UniqueId.ReplicationBytes.ArrayNum = 0;
  (this->PendingReservation).Spectator.UniqueId.ReplicationBytes.ArrayMax = 0;
  (this->PendingReservation).Spectator.ValidationStr.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PendingReservation).Spectator.ValidationStr.Data.ArrayNum = 0;
  (this->PendingReservation).Spectator.ValidationStr.Data.ArrayMax = 0;
  (this->PendingReservation).Spectator.Platform.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PendingReservation).Spectator.Platform.Data.ArrayNum = 0;
  (this->PendingReservation).Spectator.Platform.Data.ArrayMax = 0;
  (this->PendingReservation).Spectator.bAllowCrossplay = false;
  (this->PendingReservation).Spectator.ElapsedTime = 0.0;
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

// ~ASpectatorBeaconClient @ 14ecad940

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASpectatorBeaconClient::~ASpectatorBeaconClient(ASpectatorBeaconClient *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  pFVar1 = (this->PendingReservation).Spectator.Platform.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PendingReservation).Spectator.ValidationStr.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FUniqueNetIdRepl::~FUniqueNetIdRepl(&(this->PendingReservation).Spectator.UniqueId);
  FUniqueNetIdRepl::~FUniqueNetIdRepl(&(this->PendingReservation).SpectatorId);
  pFVar1 = (this->DestSessionId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationFull);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationCountUpdate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReservationRequestComplete);
  AOnlineBeaconClient::~AOnlineBeaconClient((AOnlineBeaconClient *)this);
  return;
}

// BeginDestroy @ 14ecb06b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASpectatorBeaconClient::BeginDestroy(ASpectatorBeaconClient *this)

{
  ClearTimers(this,true);
  AActor::BeginDestroy((AActor *)this);
  return;
}

// CancelReservation @ 14ecb0950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASpectatorBeaconClient::CancelReservation(ASpectatorBeaconClient *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UWorld *this_00;
  FTimerManager *this_01;
  FStaticBasicLogRecord *pFVar5;
  ASpectatorBeaconClient *local_res8;
  FDelegateAllocation local_38;
  code *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  undefined8 local_10;
  
  bVar2 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&this->PendingReservation);
  if (bVar2) {
    this->bCancelReservation = true;
    ClearTimers(this,false);
    if (this->bPendingReservationSent != false) {
      if (5 < (byte)LogSpectatorBeacon._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
      }
      (**(code **)(this->_padding_ + 0x820))(this,&this->PendingReservation);
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
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VASpectatorBeaconClient____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
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
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\SpectatorBeaconClient.cpp"
                             ,0xcc,L""), bVar2)) {
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
    if ((byte)LogSpectatorBeacon._0_1_ < 6) goto LAB_14ecb0b97;
    pFVar5 = &::LOG_Static;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8806006382252785851>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\SpectatorBeaconClient.cpp"
                       ,0xbb,"PendingReservation.SpectatorId.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((byte)LogSpectatorBeacon._0_1_ < 6) goto LAB_14ecb0b97;
    pFVar5 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<6>(pFVar5,(FLogCategoryBase *)&LogSpectatorBeacon);
LAB_14ecb0b97:
  OnCancelledComplete(this);
  return;
}

// ClearTimers @ 14ecb1120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASpectatorBeaconClient::ClearTimers(ASpectatorBeaconClient *this,bool param_1)

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
    (**(code **)(this->_padding_ + 2000))(this,0xc);
  }
  pUVar6 = AActor::GetWorld((AActor *)this);
  if (pUVar6 != (UWorld *)0x0) {
    pFVar1 = &this->PendingResponseTimerHandle;
    if ((pFVar1->Handle != 0) && (5 < (byte)LogSpectatorBeacon._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    }
    pFVar2 = &this->PendingCancelResponseTimerHandle;
    if ((pFVar2->Handle != 0) && (5 < (byte)LogSpectatorBeacon._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    }
    pFVar3 = &this->PendingReservationUpdateTimerHandle;
    if ((pFVar3->Handle != 0) && (5 < (byte)LogSpectatorBeacon._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    }
    pFVar4 = &this->PendingReservationFullTimerHandle;
    if ((pFVar4->Handle != 0) && (5 < (byte)LogSpectatorBeacon._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    }
    pFVar5 = &this->CancelRPCFailsafe;
    if ((pFVar5->Handle != 0) && (5 < (byte)LogSpectatorBeacon._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
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

// ClientCancelReservationResponse @ 14ecb1370

void __thiscall
ASpectatorBeaconClient::ClientCancelReservationResponse(ASpectatorBeaconClient *this,Type param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = (undefined1)param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ASpectatorBeaconClient_ClientCancelReservationResponse);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// ClientCancelReservationResponse_Implementation @ 14ecb13b0

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
ASpectatorBeaconClient::ClientCancelReservationResponse_Implementation
          (ASpectatorBeaconClient *this,Type param_1)

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
  ASpectatorBeaconClient *local_b8;
  Type TStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8;
  FDelegateAllocation *local_a0;
  FTimerUnifiedDelegate local_98;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if ((this->bCancelReservation == false) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8806006382252786013>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\SpectatorBeaconClient.cpp"
                         ,0x15d,"bCancelReservation"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ClearTimers(this,false);
  pTVar3 = SpectatorBeaconConsoleVariables::CVarDelayCancellationResponse.Ref;
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
  if (5 < (byte)LogSpectatorBeacon._0_1_) {
    ESpectatorReservationResult::ToString(param_1);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
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
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`ASpectatorBeaconClient::ClientCancelReservationResponse_Implementation'::`5'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = local_b8;
    puVar5[4] = CONCAT44(uStack_ac,TStack_b0);
  }
  local_c0.Handle = 0;
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 == (UWorld *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8806006382252786131>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\SpectatorBeaconClient.cpp"
                       ,0x1d3,"World != nullptr");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_14ecb1717;
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
LAB_14ecb1603:
    if ((undefined8 *)local_98.VariantDelegate._0_8_ != (undefined8 *)0x0) {
      FMemory::Free((void *)local_98.VariantDelegate._0_8_);
    }
  }
  else if ((undefined8 *)local_98.VariantDelegate._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_98.VariantDelegate._0_8_)(local_98.VariantDelegate._0_8_);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_98.VariantDelegate._8_4_ = 0;
    goto LAB_14ecb1603;
  }
  local_98.VariantDelegate._0_8_ = FVar7.Data;
  local_98.VariantDelegate._8_4_ = iVar9;
  if (local_d8 == 0) {
LAB_14ecb1651:
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
  }
  else if (local_e0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e0,0,0,0x10);
    local_d8 = 0;
    goto LAB_14ecb1651;
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
          (FScriptContainerElement *)0x0) goto LAB_14ecb1717;
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
LAB_14ecb1717:
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

// ClientReservationResponse @ 14ecb1820

void __thiscall
ASpectatorBeaconClient::ClientReservationResponse(ASpectatorBeaconClient *this,Type param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = (undefined1)param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ASpectatorBeaconClient_ClientReservationResponse);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// ClientReservationResponse_Implementation @ 14ecb1860

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
ASpectatorBeaconClient::ClientReservationResponse_Implementation
          (ASpectatorBeaconClient *this,Type param_1)

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
  ASpectatorBeaconClient *local_b8;
  Type TStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8;
  FDelegateAllocation *local_a0;
  FTimerUnifiedDelegate local_98;
  ulonglong local_58;
  
  pTVar3 = SpectatorBeaconConsoleVariables::CVarDelayReservationResponse.Ref;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (this->bCancelReservation != false) {
    if ((byte)LogSpectatorBeacon._0_1_ < 6) {
      return;
    }
    ESpectatorReservationResult::ToString(param_1);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
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
  if (5 < (byte)LogSpectatorBeacon._0_1_) {
    ESpectatorReservationResult::ToString(param_1);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
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
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`ASpectatorBeaconClient::ClientReservationResponse_Implementation'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = local_b8;
    puVar5[4] = CONCAT44(uStack_ac,TStack_b0);
  }
  local_c0.Handle = 0;
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 == (UWorld *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8806006382252786131>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\SpectatorBeaconClient.cpp"
                       ,0x1d3,"World != nullptr");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_14ecb1b95;
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
LAB_14ecb1a81:
    if ((undefined8 *)local_98.VariantDelegate._0_8_ != (undefined8 *)0x0) {
      FMemory::Free((void *)local_98.VariantDelegate._0_8_);
    }
  }
  else if ((undefined8 *)local_98.VariantDelegate._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_98.VariantDelegate._0_8_)(local_98.VariantDelegate._0_8_);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_98,0,0,0x10);
    local_98.VariantDelegate._8_4_ = 0;
    goto LAB_14ecb1a81;
  }
  local_98.VariantDelegate._0_8_ = FVar7.Data;
  local_98.VariantDelegate._8_4_ = iVar9;
  if (local_d8 == 0) {
LAB_14ecb1acf:
    if (local_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data);
    }
  }
  else if (local_e0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e0,0,0,0x10);
    local_d8 = 0;
    goto LAB_14ecb1acf;
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
          (FScriptContainerElement *)0x0) goto LAB_14ecb1b95;
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
LAB_14ecb1b95:
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

// ClientSendReservationFull @ 14ecb1c50

void __thiscall ASpectatorBeaconClient::ClientSendReservationFull(ASpectatorBeaconClient *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ASpectatorBeaconClient_ClientSendReservationFull);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014ecb1c7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// ClientSendReservationFull_Implementation @ 14ecb1c90

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
ASpectatorBeaconClient::ClientSendReservationFull_Implementation(ASpectatorBeaconClient *this)

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
  
  pTVar3 = SpectatorBeaconConsoleVariables::CVarDelayFullResponse.Ref;
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
  if (5 < (byte)LogSpectatorBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
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
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`ASpectatorBeaconClient::ClientSendReservationFull_Implementation'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = this;
  }
  local_90.Handle = 0;
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 == (UWorld *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8806006382252786131>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\SpectatorBeaconClient.cpp"
                       ,0x1d3,"World != nullptr");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_14ecb1f9e;
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
LAB_14ecb1e86:
    if ((undefined8 *)local_78.VariantDelegate._0_8_ != (undefined8 *)0x0) {
      FMemory::Free((void *)local_78.VariantDelegate._0_8_);
    }
  }
  else if ((undefined8 *)local_78.VariantDelegate._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_78.VariantDelegate._0_8_)(local_78.VariantDelegate._0_8_);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_78,0,0,0x10);
    local_78.VariantDelegate._8_4_ = 0;
    goto LAB_14ecb1e86;
  }
  local_78.VariantDelegate._0_8_ = FVar7.Data;
  local_78.VariantDelegate._8_4_ = iVar9;
  if (local_a8 == 0) {
LAB_14ecb1ed8:
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
  }
  else if (local_b0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b0,0,0,0x10);
    local_a8 = 0;
    goto LAB_14ecb1ed8;
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
          (FScriptContainerElement *)0x0) goto LAB_14ecb1f9e;
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
LAB_14ecb1f9e:
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

// ClientSendReservationUpdates @ 14ecb2030

void __thiscall
ASpectatorBeaconClient::ClientSendReservationUpdates(ASpectatorBeaconClient *this,int param_1)

{
  UFunction *pUVar1;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ASpectatorBeaconClient_ClientSendReservationUpdates);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// ClientSendReservationUpdates_Implementation @ 14ecb2070

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
ASpectatorBeaconClient::ClientSendReservationUpdates_Implementation
          (ASpectatorBeaconClient *this,int param_1)

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
  ASpectatorBeaconClient *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  FDelegateAllocation *local_90;
  FTimerUnifiedDelegate local_88;
  ulonglong local_48;
  
  pTVar3 = SpectatorBeaconConsoleVariables::CVarDelayUpdateResponse.Ref;
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
  if (5 < (byte)LogSpectatorBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
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
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy,`ASpectatorBeaconClient::ClientSendReservationUpdates_Implementation'::`8'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = local_a8;
    puVar5[4] = CONCAT44(uStack_9c,iStack_a0);
  }
  local_b0.Handle = 0;
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 == (UWorld *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8806006382252786131>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\SpectatorBeaconClient.cpp"
                       ,0x1d3,"World != nullptr");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_14ecb237f;
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
LAB_14ecb226f:
    if ((undefined8 *)local_88.VariantDelegate._0_8_ != (undefined8 *)0x0) {
      FMemory::Free((void *)local_88.VariantDelegate._0_8_);
    }
  }
  else if ((undefined8 *)local_88.VariantDelegate._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_88.VariantDelegate._0_8_)(local_88.VariantDelegate._0_8_);
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_88,0,0,0x10);
    local_88.VariantDelegate._8_4_ = 0;
    goto LAB_14ecb226f;
  }
  local_88.VariantDelegate._0_8_ = FVar7.Data;
  local_88.VariantDelegate._8_4_ = iVar9;
  if (local_c8 == 0) {
LAB_14ecb22b9:
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
  }
  else if (local_d0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_14ecb22b9;
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
          (FScriptContainerElement *)0x0) goto LAB_14ecb237f;
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
LAB_14ecb237f:
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

// DelayResponse @ 14ecb59e0

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
ASpectatorBeaconClient::DelayResponse
          (ASpectatorBeaconClient *this,
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
                      (&bGEnsureHasExecuted<8806006382252786131>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\SpectatorBeaconClient.cpp"
                       ,0x1d3,"World != nullptr");
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

// GetPrivateStaticClass @ 14ecbb1f0

UClass * __cdecl ASpectatorBeaconClient::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASpectatorBeaconClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"SpectatorBeaconClient",
               &Z_Registration_Info_UClass_ASpectatorBeaconClient.InnerSingleton,
               StaticRegisterNativesASpectatorBeaconClient,0x468,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ASpectatorBeaconClient>,
               InternalVTableHelperCtorCaller<ASpectatorBeaconClient>,local_res8,
               AOnlineBeaconClient::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASpectatorBeaconClient.InnerSingleton;
}

// OnCancelledComplete @ 14ecbea60

void __thiscall ASpectatorBeaconClient::OnCancelledComplete(ASpectatorBeaconClient *this)

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

// OnCancelledFailsafe @ 14ecbead0

void __thiscall ASpectatorBeaconClient::OnCancelledFailsafe(ASpectatorBeaconClient *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ecbead8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 2000))(this,0xc);
  return;
}

// OnConnected @ 14ecbeb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ASpectatorBeaconClient::OnConnected(ASpectatorBeaconClient *this)

{
  if (this->bCancelReservation != false) {
    if (5 < (byte)LogSpectatorBeacon._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    }
    OnCancelledComplete(this);
    return;
  }
  if (this->RequestType == ExistingSessionReservation) {
    if (5 < (byte)LogSpectatorBeacon._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    }
    (**(code **)(this->_padding_ + 0x818))(this,&this->DestSessionId,&this->PendingReservation);
    this->bPendingReservationSent = true;
    return;
  }
  if (2 < (byte)LogSpectatorBeacon._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
  }
                    /* WARNING: Could not recover jumptable at 0x00014ecbec29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x778))(this);
  return;
}

// OnFailure @ 14ecbf500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASpectatorBeaconClient::OnFailure(ASpectatorBeaconClient *this)

{
  ClearTimers(this,true);
  this->RequestType = NonePending;
  AOnlineBeaconClient::OnFailure((AOnlineBeaconClient *)this);
  return;
}

// ProcessCancelReservationResponse @ 14ecc36b0

void __thiscall
ASpectatorBeaconClient::ProcessCancelReservationResponse(ASpectatorBeaconClient *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 != ReservationRequestCanceled) && (param_1 != ReservationNotFound)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8806006382252786044>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\SpectatorBeaconClient.cpp"
                       ,0x17c,
                       "ReservationResponse == ESpectatorReservationResult::ReservationRequestCanceled || ReservationResponse == ESpectatorReservationResult::ReservationNotFound"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bCancelReservation == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8806006382252786045>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\SpectatorBeaconClient.cpp"
                       ,0x17d,"bCancelReservation");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  OnCancelledComplete(this);
  return;
}

// ProcessReservationFull @ 14ecc3a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ASpectatorBeaconClient::ProcessReservationFull(ASpectatorBeaconClient *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  if (5 < (byte)LogSpectatorBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
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

// ProcessReservationResponse @ 14ecc3fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ASpectatorBeaconClient::ProcessReservationResponse(ASpectatorBeaconClient *this,Type param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  if (this->bCancelReservation == false) {
    if (5 < (byte)LogSpectatorBeacon._0_1_) {
      ESpectatorReservationResult::ToString(param_1);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
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
  if (5 < (byte)LogSpectatorBeacon._0_1_) {
    ESpectatorReservationResult::ToString(param_1);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
  }
  return;
}

// ProcessReservationUpdate @ 14ecc4070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ASpectatorBeaconClient::ProcessReservationUpdate(ASpectatorBeaconClient *this,int param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  if (5 < (byte)LogSpectatorBeacon._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
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

// RequestReservation @ 14ecc78c0

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
ASpectatorBeaconClient::RequestReservation
          (ASpectatorBeaconClient *this,FOnlineSessionSearchResult *param_1,
          FUniqueNetIdRepl *param_2,FPlayerReservation *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  FNameEntryId FVar5;
  FOnlineSubsystemModule *pFVar6;
  longlong *plVar7;
  undefined4 extraout_var;
  FOnlineSessionInfo *pFVar8;
  undefined1 local_res10 [8];
  void *local_58;
  undefined8 local_50;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  void *local_38 [2];
  
  if ((((param_1->Session).OwningUserId.Object != (FUniqueNetId *)0x0) &&
      (pFVar8 = (param_1->Session).SessionInfo.Object, pFVar8 != (FOnlineSessionInfo *)0x0)) &&
     (cVar2 = (**(code **)((longlong)*pFVar8 + 0x20))(), cVar2 != '\0')) {
    AActor::GetWorld((AActor *)this);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
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
    pFVar6 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>
                       (`public:_static_class_IOnlineSubsystem*___ptr64___cdecl_IOnlineSubsystem::Get(FName_const&___ptr64)'
                        ::__l2::OnlineSubsystemModuleName);
    plVar7 = (longlong *)(**(code **)(pFVar6->_padding_ + 0x50))(pFVar6,0);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_48);
      if (local_48 != (longlong *)0x0) {
        local_58 = (void *)0x0;
        local_50 = 0;
        plVar7 = local_48;
        if ((local_48 == (longlong *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), plVar7 = local_48, bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        pcVar1 = *(code **)(*plVar7 + 0x370);
        FVar5 = FNameEntryId::FromValidEName((EName)local_res10);
        cVar2 = (*pcVar1)(plVar7,param_1,*(undefined4 *)CONCAT44(extraout_var,FVar5.Value),&local_58
                         );
        if (cVar2 != '\0') {
          pFVar8 = TSharedPtr<FOnlineSessionInfo,1>::operator->(&(param_1->Session).SessionInfo);
          plVar7 = (longlong *)(**(code **)((longlong)*pFVar8 + 0x38))(pFVar8);
          (**(code **)(*plVar7 + 0x30))(plVar7,local_38);
          uVar4 = (**(code **)(this->_padding_ + 0x7e8))(this,&local_58,local_38,param_2,param_3);
          if (local_38[0] != (void *)0x0) {
            FMemory::Free(local_38[0]);
          }
          if (local_58 != (void *)0x0) {
            FMemory::Free(local_58);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40);
          return (bool)uVar4;
        }
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    }
  }
  (**(code **)(this->_padding_ + 0x778))(this);
  return false;
}

// RequestReservation @ 14ecc7b10

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
ASpectatorBeaconClient::RequestReservation
          (ASpectatorBeaconClient *this,FString *param_1,FString *param_2,FUniqueNetIdRepl *param_3,
          FPlayerReservation *param_4)

{
  bool bVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FString local_88;
  FURL local_78;
  
  bVar2 = false;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  FURL::FURL(&local_78,(FURL *)0x0,pwVar3,TRAVEL_Absolute);
  if (5 < (byte)LogSpectatorBeacon._0_1_) {
    FURL::ToString(&local_78,&local_88,false);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  bVar1 = AOnlineBeaconClient::InitClient((AOnlineBeaconClient *)this,&local_78);
  if (bVar1) {
    ::FString::operator=(&this->DestSessionId,param_2);
    FUniqueNetIdRepl::operator=(&(this->PendingReservation).SpectatorId,param_3);
    FUniqueNetIdRepl::operator=(&(this->PendingReservation).Spectator.UniqueId,&param_4->UniqueId);
    ::FString::operator=
              (&(this->PendingReservation).Spectator.ValidationStr,&param_4->ValidationStr);
    ::FString::operator=(&(this->PendingReservation).Spectator.Platform,&param_4->Platform);
    bVar2 = true;
    (this->PendingReservation).Spectator.bAllowCrossplay = param_4->bAllowCrossplay;
    (this->PendingReservation).Spectator.ElapsedTime = param_4->ElapsedTime;
    this->RequestType = ExistingSessionReservation;
    this->bPendingReservationSent = false;
  }
  else {
    if (2 < (byte)LogSpectatorBeacon._0_1_) {
      FURL::ToString(&local_78,&local_88,false);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSpectatorBeacon);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    this->RequestType = NonePending;
    (**(code **)(this->_padding_ + 0x778))(this);
  }
  if (local_78.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Portal.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_78.Op.AllocatorInstance.Data,local_78.Op.ArrayNum);
  if (local_78.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Op.AllocatorInstance.Data);
  }
  if (local_78.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.RedirectURL.Data.AllocatorInstance.Data);
  }
  if (local_78.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Map.Data.AllocatorInstance.Data);
  }
  if (local_78.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Host.Data.AllocatorInstance.Data);
  }
  if (local_78.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Protocol.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// ServerCancelReservationRequest @ 14ecc8a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ASpectatorBeaconClient::ServerCancelReservationRequest
          (ASpectatorBeaconClient *this,FUniqueNetIdRepl *param_1)

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
                     ((UObject *)this,NAME_ASpectatorBeaconClient_ServerCancelReservationRequest);
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

// ServerCancelReservationRequest_Implementation @ 14ecc8b10

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
ASpectatorBeaconClient::ServerCancelReservationRequest_Implementation
          (ASpectatorBeaconClient *this,FUniqueNetIdRepl *param_1)

{
  int iVar1;
  AOnlineBeaconHostObject *pAVar2;
  UClass *pUVar3;
  
  pAVar2 = AOnlineBeaconClient::GetBeaconOwner((AOnlineBeaconClient *)this);
  if (pAVar2 != (AOnlineBeaconHostObject *)0x0) {
    pUVar3 = ASpectatorBeaconHost::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      this->bCancelReservation = true;
      (**(code **)(pAVar2->_padding_ + 0x7e0))(pAVar2,this,param_1);
    }
  }
  return;
}

// ServerCancelReservationRequest_Validate @ 14ecc8b90

bool __thiscall
ASpectatorBeaconClient::ServerCancelReservationRequest_Validate
          (ASpectatorBeaconClient *this,FUniqueNetIdRepl *param_1)

{
  return true;
}

// ServerReservationRequest @ 14ecc8c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ASpectatorBeaconClient::ServerReservationRequest
          (ASpectatorBeaconClient *this,FString *param_1,FSpectatorReservation *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  UFunction *pUVar4;
  ulonglong uVar5;
  undefined1 auStackY_108 [32];
  FString local_c8;
  FUniqueNetIdRepl local_b8;
  FUniqueNetIdRepl local_88;
  FString local_58;
  FString local_48;
  undefined1 local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  local_b8._padding_._0_1_ = 0;
  local_b8.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ReplicationBytes.ArrayNum = 0;
  local_b8.ReplicationBytes.ArrayMax = 0;
  local_88._padding_._0_1_ = 0;
  local_88.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ReplicationBytes.ArrayNum = 0;
  local_88.ReplicationBytes.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_38 = 0;
  local_34 = 0.0;
  local_b8._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  local_88._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_88._padding_ = 0;
  local_88._padding_ = 0;
  if (&local_c8 != param_1) {
    uVar1 = (param_1->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_c8.Data.ArrayMax = 0;
    local_c8.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_c8,uVar1,&local_c8.Data.ArrayMax);
      memcpy(local_c8.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  FUniqueNetIdRepl::operator=(&local_b8,&param_2->SpectatorId);
  FUniqueNetIdRepl::operator=(&local_88,&(param_2->Spectator).UniqueId);
  ::FString::operator=(&local_58,&(param_2->Spectator).ValidationStr);
  ::FString::operator=(&local_48,&(param_2->Spectator).Platform);
  local_38 = (param_2->Spectator).bAllowCrossplay;
  local_34 = (param_2->Spectator).ElapsedTime;
  pUVar4 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ASpectatorBeaconClient_ServerReservationRequest);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_c8);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_88._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  if (local_88.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ReplicationBytes.AllocatorInstance.Data);
  }
  uVar5 = (ulonglong)(byte)local_88._padding_;
  if (1 < (byte)local_88._padding_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_88._padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_88._padding_);
  }
  local_b8._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  if (local_b8.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ReplicationBytes.AllocatorInstance.Data);
  }
  uVar5 = (ulonglong)(byte)local_b8._padding_;
  if (1 < (byte)local_b8._padding_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b8._padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_b8._padding_);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return;
}

// ServerReservationRequest_Implementation @ 14ecc8e90

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
ASpectatorBeaconClient::ServerReservationRequest_Implementation
          (ASpectatorBeaconClient *this,FString *param_1,FSpectatorReservation *param_2)

{
  int iVar1;
  AOnlineBeaconHostObject *pAVar2;
  UClass *pUVar3;
  
  pAVar2 = AOnlineBeaconClient::GetBeaconOwner((AOnlineBeaconClient *)this);
  if (pAVar2 != (AOnlineBeaconHostObject *)0x0) {
    pUVar3 = ASpectatorBeaconHost::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pAVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      FSpectatorReservation::operator=(&this->PendingReservation,param_2);
      this->RequestType = ExistingSessionReservation;
      (**(code **)(pAVar2->_padding_ + 0x7d8))(pAVar2,this,param_1,param_2);
    }
  }
  return;
}

// ServerReservationRequest_Validate @ 14ecc8f30

bool __thiscall
ASpectatorBeaconClient::ServerReservationRequest_Validate
          (ASpectatorBeaconClient *this,FString *param_1,FSpectatorReservation *param_2)

{
  bool bVar1;
  
  if (1 < (param_1->Data).ArrayNum) {
    bVar1 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesASpectatorBeaconClient @ 14ecca390

void __cdecl ASpectatorBeaconClient::StaticRegisterNativesASpectatorBeaconClient(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_ASpectatorBeaconClient_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execClientCancelReservationResponse @ 14ecd3590

void __cdecl
ASpectatorBeaconClient::execClientCancelReservationResponse
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
  (**(code **)(*(longlong *)param_1 + 2000))(param_1,local_res8[0]);
  return;
}

// execClientReservationResponse @ 14ecd3650

void __cdecl
ASpectatorBeaconClient::execClientReservationResponse
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
  (**(code **)(*(longlong *)param_1 + 0x7d8))(param_1,local_res8[0]);
  return;
}

// execClientSendReservationFull @ 14ecd36e0

void __cdecl
ASpectatorBeaconClient::execClientSendReservationFull
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014ecd36f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x7c0))();
  return;
}

// execClientSendReservationUpdates @ 14ecd3710

void __cdecl
ASpectatorBeaconClient::execClientSendReservationUpdates
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x7c8))(param_1,local_res8[0]);
  return;
}

// execServerCancelReservationRequest @ 14ecd3a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ASpectatorBeaconClient::execServerCancelReservationRequest
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

// execServerReservationRequest @ 14ecd3c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ASpectatorBeaconClient::execServerReservationRequest(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [32];
  void *local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  TReferenceControllerBase<1> *pTStack_98;
  byte local_90;
  void *local_88;
  undefined8 local_80;
  undefined **local_78;
  undefined8 local_70;
  TReferenceControllerBase<1> *pTStack_68;
  byte local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_90 = 0;
  local_88 = (void *)0x0;
  local_a0 = 0;
  pTStack_98 = (TReferenceControllerBase<1> *)0x0;
  local_a8 = &___7FUniqueNetIdRepl__6B_;
  local_70 = 0;
  pTStack_68 = (TReferenceControllerBase<1> *)0x0;
  local_78 = &___7FUniqueNetIdRepl__6B_;
  local_80 = 0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar3 = (**(code **)(*(longlong *)param_1 + 0x7b0))(param_1,&local_b8,&local_a8);
  if (cVar3 == '\0') {
    RPC_ValidateFailed(L"ServerReservationRequest_Validate");
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x7b8))(param_1,&local_b8,&local_a8);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  local_78 = &___7FUniqueNetIdRepl__6B_;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  uVar5 = (ulonglong)local_60;
  if (1 < local_60) {
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
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_68);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_70);
  }
  local_a8 = &___7FUniqueNetIdRepl__6B_;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  uVar5 = (ulonglong)local_90;
  if (1 < local_90) {
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
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_98);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_a0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 33

// StaticClass @ 14ec43320

UClass * __cdecl AOnlineBeaconClient::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeaconClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconClient",
               &Z_Registration_Info_UClass_AOnlineBeaconClient.InnerSingleton,
               StaticRegisterNativesAOnlineBeaconClient,0x358,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeaconClient>,
               InternalVTableHelperCtorCaller<AOnlineBeaconClient>,local_res8,
               AOnlineBeacon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconClient.InnerSingleton;
}

// AOnlineBeaconClient @ 14ec51900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AOnlineBeaconClient * __thiscall
AOnlineBeaconClient::AOnlineBeaconClient(AOnlineBeaconClient *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->BeaconOwner).field0_0x0.DebugPtr = (AOnlineBeaconHostObject *)0x0;
  (this->BeaconConnection).field0_0x0.DebugPtr = (UNetConnection *)0x0;
  *(undefined8 *)&this->HostConnectionFailure = 0;
  *(undefined8 *)&(this->HostConnectionFailure).field_0x8 = 0;
  *(undefined4 *)&(this->HostConnectionFailure).field_0x10 = 0;
  (this->TimerHandle_OnFailure).Handle = 0;
  (this->EncryptionData).Key.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EncryptionData).Key.ArrayNum = 0;
  (this->EncryptionData).Key.ArrayMax = 0;
  (this->EncryptionData).Fingerprint.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EncryptionData).Fingerprint.ArrayNum = 0;
  (this->EncryptionData).Fingerprint.ArrayMax = 0;
  (this->EncryptionData).Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EncryptionData).Identifier.Data.ArrayNum = 0;
  (this->EncryptionData).Identifier.Data.ArrayMax = 0;
  return this;
}

// AOnlineBeaconClient @ 14ec519a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AOnlineBeaconClient * __thiscall
AOnlineBeaconClient::AOnlineBeaconClient(AOnlineBeaconClient *this,FObjectInitializer *param_1)

{
  byte bVar1;
  FName FVar2;
  FName *pFVar3;
  FName local_res8 [4];
  
  AOnlineBeacon::AOnlineBeacon((AOnlineBeacon *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  (this->BeaconOwner).field0_0x0.DebugPtr = (AOnlineBeaconHostObject *)0x0;
  (this->BeaconConnection).field0_0x0.DebugPtr = (UNetConnection *)0x0;
  this->ConnectionState = Invalid;
  *(undefined8 *)&this->HostConnectionFailure = 0;
  *(undefined8 *)&(this->HostConnectionFailure).field_0x8 = 0;
  *(undefined4 *)&(this->HostConnectionFailure).field_0x10 = 0;
  (this->TimerHandle_OnFailure).Handle = 0;
  (this->EncryptionData).Key.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EncryptionData).Key.ArrayNum = 0;
  (this->EncryptionData).Key.ArrayMax = 0;
  (this->EncryptionData).Fingerprint.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EncryptionData).Fingerprint.ArrayNum = 0;
  (this->EncryptionData).Fingerprint.ArrayMax = 0;
  (this->EncryptionData).Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EncryptionData).Identifier.Data.ArrayNum = 0;
  (this->EncryptionData).Identifier.Data.ArrayMax = 0;
  pFVar3 = ::FName::FName(local_res8,L"BeaconDriverClient");
  FVar2 = *pFVar3;
  bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 4;
  this->_padding_ = (longlong)FVar2;
  *(byte *)((longlong)&this->_padding_ + 2) = bVar1 & 0xf7 | 6;
  return this;
}

// ~AOnlineBeaconClient @ 14ec55970

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeaconClient::~AOnlineBeaconClient(AOnlineBeaconClient *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  pFVar1 = (this->EncryptionData).Identifier.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EncryptionData).Fingerprint.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EncryptionData).Key.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->HostConnectionFailure);
  pvVar2 = *(void **)&(this->HostConnectionFailure).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HostConnectionFailure);
  this->_padding_ = (longlong)&AOnlineBeacon::_vftable__for__AActor__;
  this->_padding_ = (longlong)&AOnlineBeacon::_vftable__for__FNetworkNotify__;
  AActor::~AActor((AActor *)this);
  return;
}

// ClientOnConnected @ 14ec62fc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeaconClient::ClientOnConnected(AOnlineBeaconClient *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_AOnlineBeaconClient_ClientOnConnected);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014ec62fed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// ClientOnConnected_Implementation @ 14ec63000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeaconClient::ClientOnConnected_Implementation(AOnlineBeaconClient *this)

{
  UNetConnection *this_00;
  FTimerManager *this_01;
  FTimerData *pFVar1;
  FName local_res8;
  FString local_18;
  
  if (5 < (byte)LogBeacon._0_1_) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  this_00 = (this->BeaconConnection).field0_0x0.DebugPtr;
  this->ConnectionState = Open;
  UNetConnection::SetConnectionState(this_00,USOCK_Open);
  AActor::SetRole((AActor *)this,ROLE_Authority);
  AActor::SetReplicates((AActor *)this,true);
  AActor::SetAutonomousProxy((AActor *)this,true,true);
  this_01 = AActor::GetWorldTimerManager((AActor *)this);
  pFVar1 = FTimerManager::FindTimer(this_01,&this->TimerHandle_OnFailure);
  if (pFVar1 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(this_01,(FTimerHandle)(this->TimerHandle_OnFailure).Handle);
  }
  (this->TimerHandle_OnFailure).Handle = 0;
                    /* WARNING: Could not recover jumptable at 0x00014ec630f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x788))(this);
  return;
}

// DestroyBeacon @ 14ec6bc40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeaconClient::DestroyBeacon(AOnlineBeaconClient *this)

{
  UWorld *pUVar1;
  FTimerManager *this_00;
  FTimerData *pFVar2;
  FString *pFVar3;
  bool bVar4;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  bVar4 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  this->ConnectionState = Closed;
  (**(code **)(this->_padding_ + 0x4a8))(this,0);
  pUVar1 = AActor::GetWorld((AActor *)this);
  if (pUVar1 != (UWorld *)0x0) {
    this_00 = AActor::GetWorldTimerManager((AActor *)this);
    pFVar2 = FTimerManager::FindTimer(this_00,&this->TimerHandle_OnFailure);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->TimerHandle_OnFailure).Handle);
    }
    (this->TimerHandle_OnFailure).Handle = 0;
  }
  if (5 < (byte)LogBeacon._0_1_) {
    if ((UNetDriver *)this->_padding_ != (UNetDriver *)0x0) {
      pFVar3 = UNetDriver::GetDescription((UNetDriver *)this->_padding_,&local_18);
      if ((pFVar3->Data).ArrayNum == 0) {
        bVar4 = true;
      }
      else {
        bVar4 = true;
      }
    }
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (this->_padding_ != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&GEngine->NetworkFailureEvent,
               (FDelegateHandle)this->_padding_);
  }
  AOnlineBeacon::CleanupNetDriver((AOnlineBeacon *)this);
  AActor::Destroy((AActor *)this,false,true);
  return;
}

// DestroyNetworkActorHandled @ 14ec6c560

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AOnlineBeaconClient::DestroyNetworkActorHandled(AOnlineBeaconClient *this)

{
  undefined1 *puVar1;
  UNetDriver *pUVar2;
  EConnectionState EVar3;
  UNetConnection *this_00;
  
  this_00 = (this->BeaconConnection).field0_0x0.DebugPtr;
  if (this_00 != (UNetConnection *)0x0) {
    pUVar2 = (this_00->Driver).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UNetDriver *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
      this_00 = (this->BeaconConnection).field0_0x0.DebugPtr;
    }
    if (this_00 != (UNetConnection *)0x0) {
      EVar3 = UNetConnection::GetConnectionState(this_00);
      if (((EVar3 != USOCK_Closed) && (pUVar2 != (UNetDriver *)0x0)) &&
         (pUVar2->bPendingDestruction == 0)) {
        ((this->BeaconConnection).field0_0x0.DebugPtr)->bPendingDestroy = 1;
        return true;
      }
    }
  }
  return false;
}

// FinalizeEncryptedConnection @ 14ec724e0

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
AOnlineBeaconClient::FinalizeEncryptedConnection
          (AOnlineBeaconClient *this,FEncryptionKeyResponse *param_1,
          TWeakObjectPtr<UNetConnection,FWeakObjectPtr> param_2)

{
  EConnectionState EVar1;
  UNetConnection *this_00;
  wchar_t *pwVar2;
  FWeakObjectPtr local_res18 [2];
  FString local_18;
  
  local_res18[0] = param_2.WeakPtr;
  this_00 = (UNetConnection *)FWeakObjectPtr::Get(local_res18);
  if (this_00 == (UNetConnection *)0x0) {
    if (2 < (byte)LogBeacon._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    }
  }
  else {
    EVar1 = UNetConnection::GetConnectionState(this_00);
    if (((EVar1 != USOCK_Invalid) &&
        (EVar1 = UNetConnection::GetConnectionState(this_00), EVar1 != USOCK_Closed)) &&
       ((this_00->Driver).field0_0x0.DebugPtr != (UNetDriver *)0x0)) {
      if (param_1->Response == Success) {
        UNetConnection::EnableEncryption(this_00,&param_1->EncryptionData);
        return;
      }
      pwVar2 = ::LexToString(param_1->Response);
      ::FString::FString(&local_18,pwVar2);
      if (2 < (byte)LogBeacon._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      }
      (**(code **)(this->_padding_ + 0x778))(this);
      if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
    if (2 < (byte)LogBeacon._0_1_) {
      (**(code **)(this_00->_padding_ + 0x2e0))(this_00,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  (**(code **)(this->_padding_ + 0x778))(this);
  return;
}

// GetAuthTicketInternal @ 14ec734f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
AOnlineBeaconClient::GetAuthTicketInternal
          (AOnlineBeaconClient *this,FString *__return_storage_ptr__,FUniqueNetIdRepl *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  IOnlineSubsystem *pIVar4;
  longlong *plVar5;
  FString *pFVar6;
  FUniqueNetId *pFVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  TReferenceControllerBase<1> *pTVar10;
  FName local_res20;
  longlong *local_58;
  TReferenceControllerBase<1> *local_50;
  TReferenceControllerBase<1> *local_40;
  void *local_38 [4];
  
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  AActor::GetWorld((AActor *)this);
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  pIVar4 = IOnlineSubsystem::Get(&local_res20);
  if (pIVar4 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    plVar5 = (longlong *)(**(code **)(pIVar4->_padding_ + 0x80))(pIVar4);
    plVar1 = (longlong *)*plVar5;
    pTVar10 = (TReferenceControllerBase<1> *)plVar5[1];
    plVar5[1] = 0;
    *plVar5 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    if (plVar1 != (longlong *)0x0) {
      bVar3 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_1);
      if (bVar3) {
        pcVar2 = *(code **)(*plVar1 + 0x100);
        pFVar7 = FUniqueNetIdWrapper::operator*((FUniqueNetIdWrapper *)param_1);
        (*pcVar2)(plVar1,&local_58,pFVar7);
        if (local_58 != (longlong *)0x0) {
          pwVar9 = L"";
          if ((local_58 == (longlong *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar2)();
            return pFVar6;
          }
          puVar8 = (undefined8 *)(**(code **)(*local_58 + 0x30))(local_58,local_38);
          if (*(int *)(puVar8 + 1) != 0) {
            pwVar9 = (wchar_t *)*puVar8;
          }
          ::FString::operator=(__return_storage_ptr__,pwVar9);
          if (local_38[0] != (void *)0x0) {
            FMemory::Free(local_38[0]);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<591254088549663293>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineBeaconClient.cpp"
                           ,0x23d,"PlayerId.IsValid()");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar2)();
          return pFVar6;
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetBeaconOwner @ 14ec73960

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AOnlineBeaconHostObject * __thiscall AOnlineBeaconClient::GetBeaconOwner(AOnlineBeaconClient *this)

{
  return (this->BeaconOwner).field0_0x0.DebugPtr;
}

// GetBeaconType @ 14ec739c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
AOnlineBeaconClient::GetBeaconType(AOnlineBeaconClient *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = *(FName *)(this->_padding_ + 0x18);
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetConnectionState @ 14ec74b50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EBeaconConnectionState __thiscall AOnlineBeaconClient::GetConnectionState(AOnlineBeaconClient *this)

{
  return this->ConnectionState;
}

// GetLoginOptions @ 14ec75c60

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

FString * __thiscall
AOnlineBeaconClient::GetLoginOptions
          (AOnlineBeaconClient *this,FString *__return_storage_ptr__,FUniqueNetIdRepl *param_1)

{
  FUniqueNetId *pFVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar4;
  FString *pFVar5;
  TSharedRef<FUniqueNetId_const_,1> *pTVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  undefined1 auStack_148 [32];
  FString local_128;
  FString local_118;
  TSharedPtr<FUniqueNetId_const_,1> local_108;
  TSharedRef<FUniqueNetId_const_,1> local_f8;
  FURL local_e8;
  FUniqueNetIdRepl local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar4 = FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)param_1,&local_108);
  if (pTVar4->Object == (FUniqueNetId *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar1 = pTVar4->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  local_78._padding_._0_1_ = 0;
  local_78._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  local_78._padding_ = 0;
  local_78._padding_ = 0;
  pTVar6 = TSharedFromThis<FUniqueNetId,1>::AsShared
                     ((TSharedFromThis<FUniqueNetId,1> *)&pFVar1->field_0x8,&local_f8);
  uVar7 = (ulonglong)(byte)local_78._padding_;
  if (1 < (byte)local_78._padding_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar7] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_78._padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar7])(&local_78._padding_);
  }
  local_78._padding_ = (longlong)pTVar6->Object;
  local_78._padding_ = (longlong)(pTVar6->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_78._padding_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_78._padding_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_78._padding_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78._padding_._0_1_ = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  local_78.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ReplicationBytes.ArrayNum = 0;
  local_78.ReplicationBytes.ArrayMax = 0;
  local_78._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  GetAuthTicketInternal(this,&local_118,&local_78);
  local_78._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  if (local_78.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ReplicationBytes.AllocatorInstance.Data);
  }
  uVar7 = (ulonglong)(byte)local_78._padding_;
  if (1 < (byte)local_78._padding_) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar7] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_78._padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar7])(&local_78._padding_);
  }
  FURL::FURL(&local_e8,(FURL *)0x0,L"",TRAVEL_Absolute);
  if (1 < local_118.Data.ArrayNum) {
    ::FString::PrintfImpl(&local_128,L"AuthTicket=%s");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar8.Data = local_128.Data.AllocatorInstance.Data;
    }
    FURL::AddOption(&local_e8,(wchar_t *)FVar8.Data);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
  }
  FURL::ToString(&local_e8,__return_storage_ptr__,false);
  if (local_e8.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Portal.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_e8.Op.AllocatorInstance.Data,local_e8.Op.ArrayNum);
  if (local_e8.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Op.AllocatorInstance.Data);
  }
  if (local_e8.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.RedirectURL.Data.AllocatorInstance.Data);
  }
  if (local_e8.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Map.Data.AllocatorInstance.Data);
  }
  if (local_e8.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Host.Data.AllocatorInstance.Data);
  }
  if (local_e8.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Protocol.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetNetConnection @ 14ec75f20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNetConnection * __thiscall AOnlineBeaconClient::GetNetConnection(AOnlineBeaconClient *this)

{
  return (this->BeaconConnection).field0_0x0.DebugPtr;
}

// GetNetOwner @ 14ec75f70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall AOnlineBeaconClient::GetNetOwner(AOnlineBeaconClient *this)

{
  return (AActor *)(this->BeaconOwner).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14ec77340

UClass * __cdecl AOnlineBeaconClient::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeaconClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconClient",
               &Z_Registration_Info_UClass_AOnlineBeaconClient.InnerSingleton,
               StaticRegisterNativesAOnlineBeaconClient,0x358,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeaconClient>,
               InternalVTableHelperCtorCaller<AOnlineBeaconClient>,local_res8,
               AOnlineBeacon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconClient.InnerSingleton;
}

// GetUniqueId @ 14ec79580

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FUniqueNetIdRepl * __thiscall AOnlineBeaconClient::GetUniqueId(AOnlineBeaconClient *this)

{
  UNetConnection *pUVar1;
  
  pUVar1 = (this->BeaconConnection).field0_0x0.DebugPtr;
  if (pUVar1 != (UNetConnection *)0x0) {
    return &pUVar1->PlayerId;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`AOnlineBeaconClient::GetUniqueId'::__l2::_dynamic_atexit_destructor_for__EmptyId__);
      _Init_thread_footer(&::_TSS0);
      return &EmptyId;
    }
  }
  return &EmptyId;
}

// InitClient @ 14ec7f1e0

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

bool __thiscall AOnlineBeaconClient::InitClient(AOnlineBeaconClient *this,FURL *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  UObject *pUVar5;
  UNetConnection *pUVar6;
  PacketHandler *this_00;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_bool___cdecl_AOnlineBeaconClient::InitClient(FURL_&)_::_2_::FStat_STAT_OnlineBeaconClient_InitClient>
  FVar14;
  UWorld *pUVar15;
  FUniqueNetIdRepl *pFVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FStaticBasicLogRecord *pFVar19;
  FName FVar20;
  bool bVar21;
  undefined1 auStackY_188 [32];
  FColor_u_0 local_128 [2];
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  void *local_e8;
  undefined8 local_e0;
  FStatMessage local_d8;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  longlong *local_b0;
  LARGE_INTEGER local_a8;
  FDestructionSentinel local_a0;
  FDelegateAllocation *local_88;
  FName local_80;
  FUniqueNetIdRepl local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar11 = false;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_OnlineBeaconClient_InitClient ==
        (FThreadSafeStaticStat<_public:_bool___cdecl_AOnlineBeaconClient::InitClient(FURL_&)_::_2_::FStat_STAT_OnlineBeaconClient_InitClient>
         )0x0) {
      pFVar13 = ::FName::FName(&local_80,"STAT_OnlineBeaconClient_InitClient");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OnlineBeaconClient_InitClient,*pFVar13,
                 L"STAT_OnlineBeaconClient_InitClient","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                 ,true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_OnlineBeaconClient_InitClient;
  if (StatPtr_STAT_OnlineBeaconClient_InitClient ==
      (FThreadSafeStaticStat<_public:_bool___cdecl_AOnlineBeaconClient::InitClient(FURL_&)_::_2_::FStat_STAT_OnlineBeaconClient_InitClient>
       )0x0) {
    pFVar13 = ::FName::FName(&local_f8,"STAT_OnlineBeaconClient_InitClient");
    FVar14 = (FThreadSafeStaticStat<_public:_bool___cdecl_AOnlineBeaconClient::InitClient(FURL_&)_::_2_::FStat_STAT_OnlineBeaconClient_InitClient>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OnlineBeaconClient_InitClient,
                          *pFVar13,L"STAT_OnlineBeaconClient_InitClient","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar14;
  bVar7 = false;
  bVar9 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  if ((FVar20.ComparisonIndex.Value.Value == 0) && (FVar20.Number == 0)) {
LAB_14ec7f35b:
    bVar8 = false;
    FVar20 = local_110;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_118.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineBeaconClient.cpp"
                   ,0x94);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ec7f35b;
    local_120 = FVar20;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar8 = true;
  }
  bVar21 = false;
  if (((param_1->Valid == 0) ||
      (cVar10 = (**(code **)(this->_padding_ + 0x770))(this), cVar10 == '\0')) ||
     (plVar2 = (longlong *)this->_padding_, bVar21 = bVar11, plVar2 == (longlong *)0x0))
  goto LAB_14ec7f663;
  pcVar3 = *(code **)(*plVar2 + 0x410);
  pUVar15 = AActor::GetWorld((AActor *)this);
  (*pcVar3)(plVar2,pUVar15);
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_b0 = &this->_padding_;
  if (this == (AOnlineBeaconClient *)0x0) {
    local_b0 = (longlong *)0x0;
  }
  cVar10 = (**(code **)(*(longlong *)this->_padding_ + 0x2e0))();
  if (cVar10 == '\0') {
    if (4 < (byte)LogBeacon._0_1_) {
      pFVar19 = &::LOG_Static;
LAB_14ec7f62e:
      UE::Logging::Private::BasicLog<5>(pFVar19,(FLogCategoryBase *)&LogBeacon);
    }
LAB_14ec7f63a:
    this->ConnectionState = Invalid;
    (**(code **)(this->_padding_ + 0x778))(this);
  }
  else {
    if ((*(longlong *)(this->_padding_ + 0x100) == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NetDriver->ServerConnection",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineBeaconClient.cpp"
                            ,0xa1,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      uVar12 = (*pcVar3)();
      return (bool)uVar12;
    }
    pUVar15 = AActor::GetWorld((AActor *)this);
    if (pUVar15 == (UWorld *)0x0) {
      if (4 < (byte)LogBeacon._0_1_) {
        pFVar19 = &::LOG_Static;
        goto LAB_14ec7f62e;
      }
      goto LAB_14ec7f63a;
    }
    lVar4 = this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 = *(UObject **)(lVar4 + 0x100), pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    (this->BeaconConnection).field0_0x0 = *(TObjectPtr<UNetConnection>_u_0 *)(lVar4 + 0x100);
    pFVar16 = ::`anonymous_namespace'::GetFirstPlayerAccountId(&local_78,pUVar15);
    FUniqueNetIdRepl::operator=(&((this->BeaconConnection).field0_0x0.DebugPtr)->PlayerId,pFVar16);
    FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_78);
    if (1 < (this->EncryptionData).Identifier.Data.ArrayNum) {
      UNetConnection::SetEncryptionData
                ((this->BeaconConnection).field0_0x0.DebugPtr,&this->EncryptionData);
    }
    pUVar6 = (this->BeaconConnection).field0_0x0.DebugPtr;
    bVar11 = false;
    this->ConnectionState = Pending;
    this_00 = (pUVar6->Handler).Ptr;
    if (this_00 != (PacketHandler *)0x0) {
      local_f8 = (FName)SendInitialJoin;
      uStack_f0 = 0;
      local_c8 = (undefined1  [8])0x0;
      local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_c0.DelegateSize = 0;
      iStack_ec = local_d8.NameAndInfo.Number;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
                 (FWriteAccessScope *)&local_a0);
      local_88 = &local_c0;
      puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_c0);
      if (puVar17 != (undefined8 *)0x0) {
        *puVar17 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar18 = FDelegateHandle::GenerateNewID();
        puVar17[2] = uVar18;
        *puVar17 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconClient____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar17[3] = 0;
        local_120 = (FName)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_120);
        *(FName *)(puVar17 + 4) = local_f8;
        puVar17[5] = CONCAT44(iStack_ec,uStack_f0);
      }
      if (local_a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
      }
      PacketHandler::BeginHandshaking
                (this_00,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_c8);
      bVar11 = true;
    }
    if (this->_padding_ == 0) {
      if (2 < (byte)LogBeacon._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      }
      if (this->ConnectionState == Pending) goto LAB_14ec7f63a;
    }
    else {
      *(longlong **)(this->_padding_ + 0x318) = local_b0;
      *(int *)(this->_padding_ + 0xec) = (int)this->_padding_;
      *(undefined4 *)(this->_padding_ + 0xf0) = *(undefined4 *)((longlong)&this->_padding_ + 4);
      if (!bVar11) {
        SendInitialJoin(this);
      }
      bVar21 = true;
    }
  }
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
LAB_14ec7f663:
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_d8.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_d8.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_d8.StatData.Pad[4] = '\0';
      local_d8.StatData.Pad[5] = '\0';
      local_d8.StatData.Pad[6] = '\0';
      local_d8.StatData.Pad[7] = '\0';
      local_d8.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
      local_d8.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
      local_d8.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
      local_d8.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_d8);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return bVar21;
}

// NotifyControlMessage @ 14ec83790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
AOnlineBeaconClient::NotifyControlMessage
          (AOnlineBeaconClient *this,UNetConnection *param_1,uchar param_2,FInBunch *param_3)

{
  UNetConnection *pUVar1;
  UGameInstance *pUVar2;
  UNetDriver *this_00;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  FWorldContext *pFVar6;
  FName *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FTimerManager *this_01;
  FText *this_02;
  FString *pFVar10;
  longlong *plVar11;
  FStaticBasicLogRecord *pFVar12;
  ulonglong uVar13;
  float fVar14;
  undefined1 auStackY_338 [32];
  EEngineNetworkRuntimeFeatures local_304 [2];
  uint local_300;
  undefined1 local_2fc [4];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2f8;
  FDelegateAllocation local_2f0;
  FDelegateAllocation local_2e0;
  FString local_2d0;
  FWeakObjectPtr local_2c0;
  FWeakObjectPtr local_2b8;
  FName local_2b0;
  FString local_2a8;
  FString local_298;
  FEncryptionKeyResponse local_288;
  FName local_238;
  FName local_230;
  UNetConnection *local_228;
  UNetConnection *local_220;
  longlong *local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  longlong *local_1e8;
  FString local_1e0;
  wchar_t *local_1d0;
  int local_1c8;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FText local_190;
  FString local_180;
  FString local_170;
  FNetIDVariant local_160;
  FString local_150;
  FDestructionSentinel local_140;
  FDestructionSentinel local_128;
  FDelegateAllocation *local_110;
  undefined1 local_108 [8];
  FReadAccessScope local_100;
  FURL local_e8;
  FNetIDVariant local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_338;
  plVar11 = &this[-1]._padding_;
  pUVar1 = *(UNetConnection **)(this->_padding_ + 0x100);
  if (pUVar1 == (UNetConnection *)0x0) {
    return;
  }
  if ((pUVar1 != param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Connection == NetDriver->ServerConnection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineBeaconClient.cpp"
                         ,0x185,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (4 < (byte)LogBeacon._0_1_) {
    FNetControlMessageInfo::GetName(param_2);
    local_238 = (FName)param_1->_padding_;
    ::FName::ToString(&local_238,&local_298);
    local_230 = (FName)this[-1]._padding_;
    ::FName::ToString(&local_230,&local_1e0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
  }
  switch(param_2) {
  case '\x02':
    plVar11 = (longlong *)param_3->_padding_;
    local_300 = 0;
    local_304[0] = None;
    if ((uint *)plVar11[1] < (uint *)*plVar11 + 1) {
      if ((param_3->_padding_ & 0x10000) == 0) {
        (**(code **)(param_3->_padding_ + 0x188))(param_3,&local_300,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_3,&local_300);
      }
    }
    else {
      local_300 = *(uint *)*plVar11;
      *plVar11 = *plVar11 + 4;
    }
    plVar11 = (longlong *)param_3->_padding_;
    if ((EEngineNetworkRuntimeFeatures *)plVar11[1] < (EEngineNetworkRuntimeFeatures *)*plVar11 + 1)
    {
      if ((param_3->_padding_ & 0x10000) == 0) {
        (**(code **)(param_3->_padding_ + 0x188))(param_3,local_304,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_3,local_304);
      }
    }
    else {
      local_304[0] = *(EEngineNetworkRuntimeFeatures *)*plVar11;
      *plVar11 = *plVar11 + 2;
    }
    if ((param_3->_padding_ & 0x200) != 0) {
      return;
    }
    bVar4 = UNetConnection::HandleReceiveNetUpgrade(param_1,local_300,local_304[0],ControlChannel);
    if (!bVar4) {
      return;
    }
    `AOnlineBeaconClient::NotifyControlMessage'::__l173::<lambda_1>::operator()(local_2fc);
    return;
  case '\x03':
    ::operator<<((FArchive *)param_3,&param_1->Challenge);
    if ((param_3->_padding_ & 0x200) == 0) {
      FURL::FURL(&local_e8,(FURL *)0x0,L"",TRAVEL_Absolute);
      (**(code **)(*plVar11 + 0x790))(plVar11,&local_1d0);
      if (1 < local_1c8) {
        FURL::AddOption(&local_e8,local_1d0);
      }
      FURL::ToString(&local_e8,&local_170,false);
      local_2b0.ComparisonIndex.Value = 0;
      local_2b0.Number = 0;
      pUVar5 = AActor::GetWorld((AActor *)plVar11);
      pFVar6 = UEngine::GetWorldContextFromWorld(GEngine,pUVar5);
      if ((pFVar6 != (FWorldContext *)0x0) &&
         (pUVar2 = (pFVar6->OwningGameInstance).field0_0x0.DebugPtr, pUVar2 != (UGameInstance *)0x0)
         ) {
        pFVar7 = (FName *)(**(code **)(pUVar2->_padding_ + 0x3f0))(pUVar2,local_108);
        local_2b0 = *pFVar7;
      }
      ::FName::ToString(&local_2b0,&local_180);
      ::FString::operator=(&param_1->ClientResponse,L"0");
      UE::Net::TNetControlMessageImpl<5,FString,FString,FUniqueNetIdRepl,FString>::Send
                (param_1,&param_1->ClientResponse,&local_170,&param_1->PlayerId,&local_180);
      (**(code **)(param_1->_padding_ + 0x308))(param_1,0);
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      if (local_1d0 != (wchar_t *)0x0) {
        FMemory::Free(local_1d0);
      }
      FURL::~FURL(&local_e8);
      return;
    }
    if (2 < (byte)LogBeacon._0_1_) {
      local_208 = (FName)param_1->_padding_;
      ::FName::ToString(&local_208,&local_1c0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14ec842f9;
  default:
    if ((byte)LogBeacon._0_1_ < 5) goto LAB_14ec842f9;
    pFVar12 = &::LOG_Static;
    break;
  case '\x06':
    local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d0.Data.ArrayNum = 0;
    local_2d0.Data.ArrayMax = 0;
    ::operator<<((FArchive *)param_3,&local_2d0);
    if ((param_3->_padding_ & 0x200) == 0) {
      if (local_2d0.Data.ArrayNum < 2) {
        this_02 = FText::AsLocalizable_Advanced_LocText
                            (&local_190,L"NetworkErrors",L"GenericBeaconConnectionFailed",
                             L"Beacon Connection Failed.");
        pFVar10 = FText::ToString(this_02);
        ::FString::operator=(&local_2d0,pFVar10);
        if (local_190.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
        }
      }
      if (4 < (byte)LogBeacon._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      }
      (**(code **)(*plVar11 + 0x778))(plVar11);
    }
    if (local_2d0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
    return;
  case '\x15':
    if (1 < (int)this->_padding_) {
      local_288.Response = Success;
      local_288.ErrorMsg.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_288.ErrorMsg.Data.ArrayNum = 0;
      local_288.ErrorMsg.Data.ArrayMax = 0;
      local_288.EncryptionData.Key.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_288.EncryptionData.Key.ArrayNum = 0;
      local_288.EncryptionData.Key.ArrayMax = 0;
      local_288.EncryptionData.Fingerprint.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_288.EncryptionData.Fingerprint.ArrayNum = 0;
      local_288.EncryptionData.Fingerprint.ArrayMax = 0;
      local_288.EncryptionData.Identifier.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_288.EncryptionData.Identifier.Data.ArrayNum = 0;
      local_288.EncryptionData.Identifier.Data.ArrayMax = 0;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                (&local_288.EncryptionData.Key,
                 (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this->_padding_);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                (&local_288.EncryptionData.Fingerprint,
                 (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this->_padding_);
      ::FString::operator=(&local_288.EncryptionData.Identifier,(FString *)&this->_padding_);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNetConnection *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_2c0.ObjectIndex = 0;
      local_2c0.ObjectSerialNumber = 0;
      local_228 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNetConnection *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_2c0,(FObjectPtr)&local_228);
      FinalizeEncryptedConnection
                ((AOnlineBeaconClient *)plVar11,&local_288,
                 (TWeakObjectPtr<UNetConnection,FWeakObjectPtr>)local_2c0);
      if (local_288.EncryptionData.Identifier.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.EncryptionData.Identifier.Data.AllocatorInstance.Data);
      }
      if (local_288.EncryptionData.Fingerprint.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.EncryptionData.Fingerprint.AllocatorInstance.Data);
      }
      if (local_288.EncryptionData.Key.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.EncryptionData.Key.AllocatorInstance.Data);
      }
      if (local_288.ErrorMsg.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_288.ErrorMsg.Data.AllocatorInstance.Data);
      return;
    }
    bVar4 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &FNetDelegates::OnReceivedNetworkEncryptionAck);
    if (bVar4) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNetConnection *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_2b8.ObjectIndex = 0;
      local_2b8.ObjectSerialNumber = 0;
      local_220 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNetConnection *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_2b8,(FObjectPtr)&local_220);
      local_298.Data.ArrayNum = 0;
      local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)FinalizeEncryptedConnection
      ;
      local_298.Data.ArrayMax = local_190._12_4_;
      local_2f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_2f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_2f0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2f8,(FWriteAccessScope *)&local_128);
      local_110 = &local_2f0;
      puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_2f0);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUNetConnection__UFWeakObjectPtr______6B_
        ;
        *(FWeakObjectPtr *)(puVar8 + 1) = local_2b8;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconClient____A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUNetConnection__UFWeakObjectPtr______6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar11 != (longlong *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)plVar11);
        }
        puVar8[3] = 0;
        local_218 = plVar11;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar11 != (longlong *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)plVar11);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_218);
        puVar8[4] = local_298.Data.AllocatorInstance.Data;
        puVar8[5] = CONCAT44(local_298.Data.ArrayMax,local_298.Data.ArrayNum);
      }
      if (local_128.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FNetDelegates::OnReceivedNetworkEncryptionAck,&local_100);
      plVar11 = (longlong *)0x0;
      if (FNetDelegates::OnReceivedNetworkEncryptionAck._16_4_ != 0) {
        plVar11 = (longlong *)FNetDelegates::OnReceivedNetworkEncryptionAck._8_8_;
      }
      (**(code **)(*plVar11 + 0x60))(plVar11,&local_2f8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_100);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2f8,(FWriteAccessScope *)&local_140);
      if ((local_2f0.DelegateSize != 0) &&
         (local_2f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_2f0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_2f0,0,0,0x10);
        local_2f0.DelegateSize = 0;
      }
      if (local_140.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
      }
      if (local_2f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_2f0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f8.AccessDetector);
      return;
    }
    if (2 < (byte)LogBeacon._0_1_) {
      local_210 = (FName)param_1->_padding_;
      ::FName::ToString(&local_210,&local_1a0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_14ec842f9;
  case '\x19':
    ::FString::operator=(&param_1->ClientResponse,L"0");
    UE::Net::TNetControlMessageImpl<4,int>::Send(param_1,(int *)&param_1->_padding_);
    local_200 = *(FName *)(this[-1]._padding_ + 0x18);
    ::FName::ToString(&local_200,&local_1b0);
    if (local_1b0.Data.ArrayNum < 2) {
      if (4 < (byte)LogBeacon._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      }
      (**(code **)(*plVar11 + 0x778))(plVar11);
    }
    else {
      UE::Net::TNetControlMessageImpl<26,FString,FUniqueNetIdRepl>::Send
                (param_1,&local_1b0,&param_1->PlayerId);
      (**(code **)(param_1->_padding_ + 0x308))(param_1,0);
    }
    if (local_1b0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    return;
  case '\x1b':
    local_78.Variant.TypeIndex = 0;
    UE::Net::operator<<((FArchive *)param_3,&local_78);
    if ((param_3->_padding_ & 0x200) != 0) {
      return;
    }
    bVar4 = UE::Net::FNetIDVariant::IsValid(&local_78);
    if (bVar4) {
      uVar13 = (ulonglong)local_78.Variant.TypeIndex;
      this_00 = (param_1->Driver).field0_0x0.DebugPtr;
      local_160.Variant.TypeIndex = local_78.Variant.TypeIndex;
      if ((2 < local_78.Variant.TypeIndex) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xec,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<UE::Net::FNetIDVariant::FEmptyID,FNetworkGUID,UE::Net::FNetRefHandle>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar13] !=
          UE::Core::Private::TCopyConstructorCaller<UE::Net::FNetIDVariant::FEmptyID>::Construct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<UE::Net::FNetIDVariant::FEmptyID,FNetworkGUID,UE::Net::FNetRefHandle>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar13])(&local_160,&local_78);
      }
      UNetDriver::AssignNetIDToObject(this_00,&local_160,(UObject *)plVar11);
      local_1f8 = *(FName *)(this[-1]._padding_ + 0x18);
      ::FName::ToString(&local_1f8,&local_150);
      UE::Net::TNetControlMessageImpl<28,FString>::Send(param_1,&local_150);
      (**(code **)(param_1->_padding_ + 0x308))(param_1,0);
      if (!(bool)((param_1->Driver).field0_0x0.DebugPtr)->bNoTimeouts) {
        fVar14 = (float)(**(code **)(param_1->_padding_ + 0x3d8))(param_1);
        if (5 < (byte)LogBeacon._0_1_) {
          local_1f0 = (FName)this[-1]._padding_;
          ::FName::ToString(&local_1f0,&local_2a8);
          UE::Logging::Private::BasicLog<6>
                    ((FStaticBasicLogRecord *)&PTR_u__s__Waiting_for_1530694d0,
                     (FLogCategoryBase *)&LogBeacon);
          if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
          }
        }
        local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)_vcall__1912__flat______;
        local_2a8.Data.ArrayMax = local_190._12_4_;
        local_2a8.Data.ArrayNum = 0;
        local_2e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_2e0.DelegateSize = 0;
        puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_2e0);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconClient____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar11 != (longlong *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)plVar11);
          }
          puVar8[3] = 0;
          local_1e8 = plVar11;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar11 != (longlong *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)plVar11);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_1e8);
          puVar8[4] = local_2a8.Data.AllocatorInstance.Data;
          puVar8[5] = CONCAT44(local_2a8.Data.ArrayMax,local_2a8.Data.ArrayNum);
        }
        this_01 = AActor::GetWorldTimerManager((AActor *)plVar11);
        FTimerManager::SetTimer
                  (this_01,(FTimerHandle *)&this->_padding_,
                   (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                   &local_2e0,fVar14,false,__real_bf800000);
        if (local_2e0.DelegateSize != 0) {
          if (local_2e0.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
          goto LAB_14ec84120;
          (*(code *)**(undefined8 **)local_2e0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_2e0,0,0,0x10);
          local_2e0.DelegateSize = 0;
        }
        if (local_2e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_2e0.DelegateAllocator);
        }
      }
LAB_14ec84120:
      if (local_150.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
      return;
    }
    if ((byte)LogBeacon._0_1_ < 5) goto LAB_14ec842f9;
    pFVar12 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<5>(pFVar12,(FLogCategoryBase *)&LogBeacon);
LAB_14ec842f9:
  (**(code **)(*plVar11 + 0x778))(plVar11);
  return;
}

// OnConnected @ 14ec865b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeaconClient::OnConnected(AOnlineBeaconClient *this)

{
  return;
}

// OnFailure @ 14ec878c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeaconClient::OnFailure(AOnlineBeaconClient *this)

{
  longlong *plVar1;
  FName local_res8;
  FReadAccessScope local_28;
  
  if (5 < (byte)LogBeacon._0_1_) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,(FString *)&local_28);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    if ((void *)local_28.DestructionSentinel._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28.DestructionSentinel._0_8_);
    }
  }
  this->ConnectionState = Invalid;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->HostConnectionFailure,
             &local_28);
  if ((*(int *)&(this->HostConnectionFailure).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->HostConnectionFailure).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
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

// OnNetCleanup @ 14ec891a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeaconClient::OnNetCleanup(AOnlineBeaconClient *this,UNetConnection *param_1)

{
  UNetConnection *pUVar1;
  AOnlineBeaconHostObject *pAVar2;
  code *pcVar3;
  bool bVar4;
  
  if (this->_padding_ != 0) {
    pUVar1 = (this->BeaconConnection).field0_0x0.DebugPtr;
    if (pUVar1 == (UNetConnection *)0x0) {
      bVar4 = param_1 == (UNetConnection *)0x0;
    }
    else {
      bVar4 = pUVar1 == param_1;
    }
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<591254088549663092>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineBeaconClient.cpp"
                         ,0x174,"NetDriver == nullptr || Connection == BeaconConnection");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  pAVar2 = (this->BeaconOwner).field0_0x0.DebugPtr;
  this->ConnectionState = Closed;
  if (pAVar2 != (AOnlineBeaconHostObject *)0x0) {
    (**(code **)(pAVar2->_padding_ + 0x778))(pAVar2,this);
  }
  (this->BeaconConnection).field0_0x0.DebugPtr = (UNetConnection *)0x0;
  AActor::Destroy((AActor *)this,true,true);
  return;
}

// SendInitialJoin @ 14ec94810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeaconClient::SendInitialJoin(AOnlineBeaconClient *this)

{
  FString *this_00;
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  longlong *plVar8;
  uchar local_res8 [8];
  EEngineNetworkRuntimeFeatures local_res10 [4];
  uint local_res18 [4];
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  if (this->_padding_ != 0) {
    pUVar2 = *(UObject **)(this->_padding_ + 0x100);
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar2 == (UObject *)0x0) goto LAB_14ec94a30;
      UE::GC::MarkAsReachable(pUVar2);
    }
    else if (pUVar2 == (UObject *)0x0) goto LAB_14ec94a30;
    pTVar4 = CVarNetAllowEncryption.Ref;
    local_res8[0] = '\x01';
    bVar5 = IsInParallelGameThread();
    if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = pTVar4->ShadowedValue[0];
    local_res18[0] = FNetworkVersion::GetLocalNetworkVersion(true);
    this_00 = &(this->EncryptionData).Identifier;
    if (iVar1 == 0) {
      ::FString::Empty(this_00);
    }
    if ((this->EncryptionData).Identifier.Data.ArrayNum < 2) {
      cVar7 = '\0';
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FNetDelegates::OnReceivedNetworkEncryptionFailure,&local_58);
      if (((FNetDelegates::OnReceivedNetworkEncryptionFailure._16_4_ == 0) ||
          (FNetDelegates::OnReceivedNetworkEncryptionFailure._8_8_ == 0)) ||
         (cVar6 = (**(code **)(*(longlong *)FNetDelegates::OnReceivedNetworkEncryptionFailure._8_8_
                              + 0x38))(), cVar6 == '\0')) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      if (bVar5) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &FNetDelegates::OnReceivedNetworkEncryptionFailure,&local_40);
        plVar8 = (longlong *)0x0;
        if (FNetDelegates::OnReceivedNetworkEncryptionFailure._16_4_ != 0) {
          plVar8 = (longlong *)FNetDelegates::OnReceivedNetworkEncryptionFailure._8_8_;
        }
        cVar7 = (**(code **)(*plVar8 + 0x60))(plVar8,pUVar2);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_40);
      }
      cVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x4e8))();
      if ((cVar6 != '\0') && (cVar7 != '\x02')) {
        if (this->ConnectionState != Pending) {
          return;
        }
        if (1 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        this->ConnectionState = Invalid;
        (**(code **)(this->_padding_ + 0x778))(this);
        return;
      }
    }
    local_res10[0] = UNetDriver::GetNetworkRuntimeFeatures((UNetDriver *)this->_padding_);
    UE::Net::
    TNetControlMessageImpl<0,unsigned_char,unsigned_int,FString,enum_EEngineNetworkRuntimeFeatures>
    ::Send(*(UNetConnection **)(this->_padding_ + 0x100),local_res8,local_res18,this_00,local_res10)
    ;
    (**(code **)(*(longlong *)pUVar2 + 0x308))(pUVar2,0);
    return;
  }
LAB_14ec94a30:
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<591254088549662991>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineBeaconClient.cpp"
                     ,0x10f,"ServerConn != nullptr");
  if (!bVar5) {
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// SetBeaconOwner @ 14ec974f0

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
AOnlineBeaconClient::SetBeaconOwner(AOnlineBeaconClient *this,AOnlineBeaconHostObject *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AOnlineBeaconHostObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->BeaconOwner).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->BeaconOwner).field0_0x0.DebugPtr = param_1;
  return;
}

// SetConnectionState @ 14ec97540

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
AOnlineBeaconClient::SetConnectionState(AOnlineBeaconClient *this,EBeaconConnectionState param_1)

{
  this->ConnectionState = param_1;
  return;
}

// SetEncryptionData @ 14ec97550

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
AOnlineBeaconClient::SetEncryptionData(AOnlineBeaconClient *this,FEncryptionData *param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  
  pTVar2 = CVarNetAllowEncryption.Ref;
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
        (*pcVar1)();
        return;
      }
    }
  }
  if (pTVar2->ShadowedValue[0] != 0) {
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              (&(this->EncryptionData).Key,&param_1->Key);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              (&(this->EncryptionData).Fingerprint,&param_1->Fingerprint);
    ::FString::operator=(&(this->EncryptionData).Identifier,&param_1->Identifier);
  }
  return;
}

// SetNetConnection @ 14ec97a00

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
AOnlineBeaconClient::SetNetConnection(AOnlineBeaconClient *this,UNetConnection *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UNetConnection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->BeaconConnection).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->BeaconConnection).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesAOnlineBeaconClient @ 14ec994b0

void __cdecl AOnlineBeaconClient::StaticRegisterNativesAOnlineBeaconClient(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_AOnlineBeaconClient_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 14ec99f80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeaconClient::Tick(AOnlineBeaconClient *this,float param_1)

{
  UNetConnection *this_00;
  EConnectionState EVar1;
  FName local_res8 [4];
  FString local_18;
  
  if ((((this->_padding_ != 0) &&
       (this_00 = *(UNetConnection **)(this->_padding_ + 0x100), this_00 != (UNetConnection *)0x0))
      && ((this->ConnectionState == Pending || (this->ConnectionState == Open)))) &&
     (EVar1 = UNetConnection::GetConnectionState(this_00), EVar1 == USOCK_Closed)) {
    if (5 < (byte)LogBeacon._0_1_) {
      local_res8[0] = (FName)this->_padding_;
      ::FName::ToString(local_res8,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014ec9a022. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x778))(this);
    return;
  }
  return;
}

// UseShortConnectTimeout @ 14ec9fd90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AOnlineBeaconClient::UseShortConnectTimeout(AOnlineBeaconClient *this)

{
  return this->ConnectionState == Open;
}

// execClientOnConnected @ 14eca1620

void __cdecl
AOnlineBeaconClient::execClientOnConnected(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014eca1638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x780))();
  return;
}

// operator() @ 15059da80

bool __thiscall
`AOnlineBeaconClient::NotifyControlMessage'::__l173::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<591254088549663246>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<591254088549663246>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


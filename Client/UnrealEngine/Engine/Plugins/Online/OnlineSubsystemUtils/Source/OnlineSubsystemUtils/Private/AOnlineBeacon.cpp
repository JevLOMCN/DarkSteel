// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 23

// StaticClass @ 14ec47580

UClass * __cdecl AOnlineBeacon::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeacon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeacon",
               &Z_Registration_Info_UClass_AOnlineBeacon.InnerSingleton,
               StaticRegisterNativesAOnlineBeacon,0x2f0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeacon>,InternalVTableHelperCtorCaller<AOnlineBeacon>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeacon.InnerSingleton;
}

// AOnlineBeacon @ 14ec51800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AOnlineBeacon * __thiscall AOnlineBeacon::AOnlineBeacon(AOnlineBeacon *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  (this->NetDriver).field0_0x0.DebugPtr = (UNetDriver *)0x0;
  (this->HandleNetworkFailureDelegateHandle).ID = 0;
  (this->NetDriverDefinitionName).ComparisonIndex = 0;
  (this->NetDriverDefinitionName).Number = 0;
  return this;
}

// AOnlineBeacon @ 14ec51850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AOnlineBeacon * __thiscall
AOnlineBeacon::AOnlineBeacon(AOnlineBeacon *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  uint uVar2;
  FName FVar3;
  FNameEntryId FVar4;
  FName *pFVar5;
  undefined4 extraout_var;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->BeaconState = DenyRequests;
  (this->NetDriver).field0_0x0.DebugPtr = (UNetDriver *)0x0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  (this->HandleNetworkFailureDelegateHandle).ID = 0;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  (this->NetDriverDefinitionName).ComparisonIndex = 0;
  (this->NetDriverDefinitionName).Number = 0;
  pFVar5 = ::FName::FName(&local_res8,L"BeaconDriver");
  this->_padding_ = (longlong)*pFVar5;
  FVar4 = FNameEntryId::FromValidEName((EName)&local_res8);
  uVar2 = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xdf;
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = uVar2;
  this->NetDriverDefinitionName = FVar3;
  return this;
}

// ~AOnlineBeacon @ 14ec55940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeacon::~AOnlineBeacon(AOnlineBeacon *this)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  AActor::~AActor((AActor *)this);
  return;
}

// CleanupNetDriver @ 14ec622d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeacon::CleanupNetDriver(AOnlineBeacon *this)

{
  UNetDriver *this_00;
  FName FVar1;
  UWorld *pUVar2;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  this_00 = (this->NetDriver).field0_0x0.DebugPtr;
  if (this_00 != (UNetDriver *)0x0) {
    if ((this_00->World).field0_0x0.DebugPtr == (UWorld *)0x0) {
      if (4 < (byte)LogBeacon._0_1_) {
        UNetDriver::GetDescription(this_00,&local_18);
        local_res8 = (FName)this->_padding_;
        ::FName::ToString(&local_res8,&local_28);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      FVar1 = (FName)this->_padding_;
      pUVar2 = AActor::GetWorld((AActor *)this);
      UEngine::DestroyNamedNetDriver(GEngine,pUVar2,FVar1);
    }
    else {
      if (4 < (byte)LogBeacon._0_1_) {
        UNetDriver::GetDescription(this_00,&local_18);
        local_res8 = (FName)this->_padding_;
        ::FName::ToString(&local_res8,&local_28);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      UNetDriver::RequestNetDriverDestruction((this->NetDriver).field0_0x0.DebugPtr);
    }
    ((this->NetDriver).field0_0x0.DebugPtr)->Notify = (FNetworkNotify *)0x0;
    (this->NetDriver).field0_0x0.DebugPtr = (UNetDriver *)0x0;
  }
  return;
}

// DestroyBeacon @ 14ec6bb20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeacon::DestroyBeacon(AOnlineBeacon *this)

{
  UNetDriver *this_00;
  FDelegateHandle FVar1;
  FString *pFVar2;
  bool bVar3;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (5 < (byte)LogBeacon._0_1_) {
    this_00 = (this->NetDriver).field0_0x0.DebugPtr;
    if (this_00 != (UNetDriver *)0x0) {
      pFVar2 = UNetDriver::GetDescription(this_00,&local_18);
      if ((pFVar2->Data).ArrayNum == 0) {
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
    }
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  FVar1.ID = (this->HandleNetworkFailureDelegateHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&GEngine->NetworkFailureEvent,
               FVar1);
  }
  CleanupNetDriver(this);
  AActor::Destroy((AActor *)this,false,true);
  return;
}

// EndPlay @ 14ec6dcf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeacon::EndPlay(AOnlineBeacon *this,Type param_1)

{
  CleanupNetDriver(this);
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// GetNetConnection @ 14ec75f10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNetConnection * __thiscall AOnlineBeacon::GetNetConnection(AOnlineBeacon *this)

{
  return (UNetConnection *)0x0;
}

// GetNetOwner @ 14ec75f60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall AOnlineBeacon::GetNetOwner(AOnlineBeacon *this)

{
  return (AActor *)0x0;
}

// GetPrivateStaticClass @ 14ec77280

UClass * __cdecl AOnlineBeacon::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeacon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeacon",
               &Z_Registration_Info_UClass_AOnlineBeacon.InnerSingleton,
               StaticRegisterNativesAOnlineBeacon,0x2f0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeacon>,InternalVTableHelperCtorCaller<AOnlineBeacon>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeacon.InnerSingleton;
}

// HandleNetworkFailure @ 14ec7ca10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AOnlineBeacon::HandleNetworkFailure
          (AOnlineBeacon *this,UWorld *param_1,UNetDriver *param_2,Type param_3,FString *param_4)

{
  FName local_res18 [2];
  FString local_18;
  
  if ((param_2 != (UNetDriver *)0x0) && (param_2->NetDriverName == (FName)this->_padding_)) {
    if (5 < (byte)LogBeacon._0_1_) {
      switch(param_3) {
      case NetDriverAlreadyExists:
        break;
      case NetDriverCreateFailure:
        break;
      case NetDriverListenFailure:
        break;
      case ConnectionLost:
        break;
      case ConnectionTimeout:
        break;
      case FailureReceived:
        break;
      case OutdatedClient:
        break;
      case OutdatedServer:
        break;
      case PendingConnectionFailure:
        break;
      case NetGuidMismatch:
        break;
      case NetChecksumMismatch:
      }
      local_res18[0] = (FName)this->_padding_;
      ::FName::ToString(local_res18,&local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(this->_padding_ + 0x778))(this);
  }
  return;
}

// HasNetOwner @ 14ec7dd70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AOnlineBeacon::HasNetOwner(AOnlineBeacon *this)

{
  return true;
}

// InitBase @ 14ec7e580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AOnlineBeacon::InitBase(AOnlineBeacon *this)

{
  FName FVar1;
  UWorld *pUVar2;
  UNetDriver *pUVar3;
  FDelegateHandle FVar4;
  
  FVar1 = this->NetDriverDefinitionName;
  pUVar2 = AActor::GetWorld((AActor *)this);
  pUVar3 = UEngine::CreateNetDriver(GEngine,pUVar2,FVar1);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UNetDriver *)0x0)) {
    (this->NetDriver).field0_0x0.DebugPtr = pUVar3;
    if (pUVar3 == (UNetDriver *)0x0) {
      return false;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    (this->NetDriver).field0_0x0.DebugPtr = pUVar3;
  }
  FVar4 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,UNetDriver_*,enum_ENetworkFailure::Type,FString_const_&),FDefaultDelegateUserPolicy>
          ::AddUObject<AOnlineBeacon>
                    (&GEngine->NetworkFailureEvent,(AOnlineBeacon *)&stack0x00000008,
                     (pmf_6055294a *)this);
                    /* WARNING: Load size is inaccurate */
  (this->HandleNetworkFailureDelegateHandle).ID = *FVar4.ID;
  AActor::SetNetDriverName((AActor *)this,((this->NetDriver).field0_0x0.DebugPtr)->NetDriverName);
  return true;
}

// IsLevelBoundsRelevant @ 14ec81570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AOnlineBeacon::IsLevelBoundsRelevant(AOnlineBeacon *this)

{
  return false;
}

// IsNetRelevantFor @ 14ec81910

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AOnlineBeacon::IsNetRelevantFor
          (AOnlineBeacon *this,AActor *param_1,AActor *param_2,TVector<double> *param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x570))();
  lVar3 = (**(code **)(param_2->_padding_ + 0x570))(param_2);
  bVar1 = this->_padding_ == param_1->_padding_;
  if ((this->_padding_ & 4) != 0) {
    bVar1 = lVar2 == lVar3;
  }
  return bVar1;
}

// IsRelevancyOwnerFor @ 14ec81a60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AOnlineBeacon::IsRelevancyOwnerFor
          (AOnlineBeacon *this,AActor *param_1,AActor *param_2,AActor *param_3)

{
  return param_3 == param_1;
}

// NotifyAcceptedConnection @ 14ec83060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeacon::NotifyAcceptedConnection(AOnlineBeacon *this,UNetConnection *param_1)

{
  code *pcVar1;
  bool bVar2;
  FName local_res8;
  FString local_28;
  void *local_18 [2];
  
  if ((this->_padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NetDriver != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineBeacon.cpp"
                         ,0x93,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(longlong *)(this->_padding_ + 0x100) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NetDriver->ServerConnection == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineBeacon.cpp"
                         ,0x94,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (4 < (byte)LogNet._0_1_) {
    (**(code **)(param_1->_padding_ + 0x2e0))(param_1,local_18);
    FGenericPlatformTime::StrTimestamp();
    local_res8 = (FName)this[-1]._padding_;
    ::FName::ToString(&local_res8,&local_28);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return;
}

// NotifyAcceptingChannel @ 14ec83190

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AOnlineBeacon::NotifyAcceptingChannel(AOnlineBeacon *this,UChannel *param_1)

{
  UNetDriver *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FChannelDefinition *pFVar5;
  FName local_res8;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((param_1 == (UChannel *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Channel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineBeacon.cpp"
                         ,0x9a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (((param_1->Connection).field0_0x0.DebugPtr == (UNetConnection *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Channel->Connection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineBeacon.cpp"
                         ,0x9b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (((((param_1->Connection).field0_0x0.DebugPtr)->Driver).field0_0x0.DebugPtr ==
       (UNetDriver *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Channel->Connection->Driver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineBeacon.cpp"
                         ,0x9c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pUVar1 = (((param_1->Connection).field0_0x0.DebugPtr)->Driver).field0_0x0.DebugPtr;
  if ((UNetDriver *)this->_padding_ == (UNetDriver *)0x0) {
    bVar3 = pUVar1 == (UNetDriver *)0x0;
  }
  else {
    bVar3 = (UNetDriver *)this->_padding_ == pUVar1;
  }
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NetDriver == Driver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineBeacon.cpp"
                         ,0x9e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((pUVar1->ServerConnection).field0_0x0.DebugPtr == (UNetConnection *)0x0) {
    pFVar5 = TMapBase<FName,FChannelDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelDefinition,0>_>
             ::FindChecked((TMapBase<FName,FChannelDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelDefinition,0>_>
                            *)&pUVar1->ChannelDefinitionMap,param_1->ChName);
    if (pFVar5->bClientOpen == '\0') {
      if ((byte)LogNet._0_1_ < 5) {
        return false;
      }
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)&this[-1]._padding_,&local_28,(UObject *)0x0,None);
      ::FName::ToString(&param_1->ChName,&local_38);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      local_58.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        local_58.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      }
      goto LAB_14ec834ad;
    }
    if ((byte)LogNet._0_1_ < 5) {
      return true;
    }
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)&this[-1]._padding_,&local_48,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  }
  else {
    if (4 < (byte)LogNet._0_1_) {
      local_res8 = (FName)this[-1]._padding_;
      ::FName::ToString(&local_res8,&local_88);
      ::FName::ToString(&param_1->ChName,&local_78);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = TMapBase<FName,FChannelDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelDefinition,0>_>
             ::FindChecked((TMapBase<FName,FChannelDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelDefinition,0>_>
                            *)&pUVar1->ChannelDefinitionMap,param_1->ChName);
    if (pFVar5->bServerOpen == '\0') {
      if ((byte)LogNet._0_1_ < 5) {
        return false;
      }
      ::FName::ToString(&param_1->ChName,&local_58);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
LAB_14ec834ad:
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      return false;
    }
    if ((byte)LogNet._0_1_ < 5) {
      return true;
    }
    ::FName::ToString(&param_1->ChName,&local_68);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return true;
}

// NotifyAcceptingConnection @ 14ec834e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

Type __thiscall AOnlineBeacon::NotifyAcceptingConnection(AOnlineBeacon *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  FName local_res8;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NetDriver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineBeacon.cpp"
                         ,0x7c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar4 = (*pcVar2)();
    return TVar4;
  }
  lVar1 = this->_padding_;
  if (*(longlong *)(lVar1 + 0x100) == 0) {
    if ((int)this->_padding_ != 1) {
      if (((4 < (byte)LogNet._0_1_) && (*(char *)(lVar1 + 0x7e9) == '\0')) &&
         ((*(char *)(lVar1 + 0x7c0) == '\0' ||
          (*(int *)(lVar1 + 0x7f0) = *(int *)(lVar1 + 0x7f0) + 1,
          *(int *)(lVar1 + 0x7f0) <= *(int *)(lVar1 + 0x7ec))))) {
        local_res10 = (FName)this[-1]._padding_;
        ::FName::ToString(&local_res10,&local_18);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      return Accept;
    }
    if (4 < (byte)LogNet._0_1_) {
      local_res8 = (FName)this[-1]._padding_;
      ::FName::ToString(&local_res8,&local_28);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (4 < (byte)LogNet._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    return Reject;
  }
  return Reject;
}

// NotifyControlMessage @ 14ec83780

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AOnlineBeacon::NotifyControlMessage
          (AOnlineBeacon *this,UNetConnection *param_1,uchar param_2,FInBunch *param_3)

{
  return;
}

// OnActorChannelOpen @ 14ec845e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AOnlineBeacon::OnActorChannelOpen(AOnlineBeacon *this,FInBunch *param_1,UNetConnection *param_2)

{
  UReplicationSystem *this_00;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (AOnlineBeacon *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (param_2->OwningActor).field0_0x0.DebugPtr = (AActor *)this;
  this_00 = ((param_2->Driver).field0_0x0.DebugPtr)->ReplicationSystem;
  if (this_00 != (UReplicationSystem *)0x0) {
    UReplicationSystem::SetReplicationEnabledForConnection
              (this_00,(param_2->ConnectionHandle).ParentConnectionId,true);
  }
  return;
}

// OnFailure @ 14ec87880

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeacon::OnFailure(AOnlineBeacon *this)

{
  FDelegateHandle FVar1;
  
  FVar1.ID = (this->HandleNetworkFailureDelegateHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&GEngine->NetworkFailureEvent,
               FVar1);
  }
  CleanupNetDriver(this);
  return;
}

// StaticRegisterNativesAOnlineBeacon @ 14ec994a0

void __cdecl AOnlineBeacon::StaticRegisterNativesAOnlineBeacon(void)

{
  return;
}


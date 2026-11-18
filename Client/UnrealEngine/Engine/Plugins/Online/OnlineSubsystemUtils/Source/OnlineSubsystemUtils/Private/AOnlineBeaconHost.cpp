// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 31

// StaticClass @ 14ec48270

UClass * __cdecl AOnlineBeaconHost::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeaconHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconHost",
               &Z_Registration_Info_UClass_AOnlineBeaconHost.InnerSingleton,
               StaticRegisterNativesAOnlineBeaconHost,0x400,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeaconHost>,
               InternalVTableHelperCtorCaller<AOnlineBeaconHost>,local_res8,
               AOnlineBeacon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconHost.InnerSingleton;
}

// AOnlineBeaconHost @ 14ec51a60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AOnlineBeaconHost * __thiscall
AOnlineBeaconHost::AOnlineBeaconHost(AOnlineBeaconHost *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->MaxAuthTokenSize = 0x400;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->bReuseAddressAndPort = false;
  this->bAuthRequired = false;
  *(undefined8 *)&this->ConnectionState = 0;
  *(undefined8 *)&(this->ConnectionState).field_0x8 = 0;
  *(undefined8 *)&(this->ConnectionState).field_0x20 = 0;
  *(undefined4 *)&(this->ConnectionState).field_0x28 = 0;
  *(undefined4 *)&(this->ConnectionState).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConnectionState).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConnectionState).field_0x34 = 0;
  *(undefined8 *)&(this->ConnectionState).field_0x40 = 0;
  *(undefined4 *)&(this->ConnectionState).field_0x48 = 0;
  (this->ClientActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClientActors).ArrayNum = 0;
  (this->ClientActors).ArrayMax = 0;
  *(undefined8 *)&this->OnBeaconSpawnedMapping = 0;
  *(undefined8 *)&(this->OnBeaconSpawnedMapping).field_0x8 = 0;
  *(undefined8 *)&(this->OnBeaconSpawnedMapping).field_0x20 = 0;
  *(undefined4 *)&(this->OnBeaconSpawnedMapping).field_0x28 = 0;
  *(undefined4 *)&(this->OnBeaconSpawnedMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnBeaconSpawnedMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnBeaconSpawnedMapping).field_0x34 = 0;
  *(undefined8 *)&(this->OnBeaconSpawnedMapping).field_0x40 = 0;
  *(undefined4 *)&(this->OnBeaconSpawnedMapping).field_0x48 = 0;
  *(undefined8 *)&this->OnBeaconConnectedMapping = 0;
  *(undefined8 *)&(this->OnBeaconConnectedMapping).field_0x8 = 0;
  *(undefined8 *)&(this->OnBeaconConnectedMapping).field_0x20 = 0;
  *(undefined4 *)&(this->OnBeaconConnectedMapping).field_0x28 = 0;
  *(undefined4 *)&(this->OnBeaconConnectedMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnBeaconConnectedMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnBeaconConnectedMapping).field_0x34 = 0;
  *(undefined8 *)&(this->OnBeaconConnectedMapping).field_0x40 = 0;
  *(undefined4 *)&(this->OnBeaconConnectedMapping).field_0x48 = 0;
  return this;
}

// AOnlineBeaconHost @ 14ec51ba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AOnlineBeaconHost * __thiscall
AOnlineBeaconHost::AOnlineBeaconHost(AOnlineBeaconHost *this,FObjectInitializer *param_1)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  AOnlineBeacon::AOnlineBeacon((AOnlineBeacon *)this,param_1);
  this->bReuseAddressAndPort = false;
  this->bAuthRequired = false;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->MaxAuthTokenSize = 0x400;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  *(undefined8 *)&this->ConnectionState = 0;
  *(undefined8 *)&(this->ConnectionState).field_0x8 = 0;
  *(undefined8 *)&(this->ConnectionState).field_0x20 = 0;
  *(undefined4 *)&(this->ConnectionState).field_0x28 = 0;
  *(undefined4 *)&(this->ConnectionState).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConnectionState).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConnectionState).field_0x34 = 0;
  *(undefined8 *)&(this->ConnectionState).field_0x40 = 0;
  *(undefined4 *)&(this->ConnectionState).field_0x48 = 0;
  (this->ClientActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClientActors).ArrayNum = 0;
  (this->ClientActors).ArrayMax = 0;
  *(undefined8 *)&this->OnBeaconSpawnedMapping = 0;
  *(undefined8 *)&(this->OnBeaconSpawnedMapping).field_0x8 = 0;
  *(undefined8 *)&(this->OnBeaconSpawnedMapping).field_0x20 = 0;
  *(undefined4 *)&(this->OnBeaconSpawnedMapping).field_0x28 = 0;
  *(undefined4 *)&(this->OnBeaconSpawnedMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnBeaconSpawnedMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnBeaconSpawnedMapping).field_0x34 = 0;
  *(undefined8 *)&(this->OnBeaconSpawnedMapping).field_0x40 = 0;
  *(undefined4 *)&(this->OnBeaconSpawnedMapping).field_0x48 = 0;
  *(undefined8 *)&this->OnBeaconConnectedMapping = 0;
  *(undefined8 *)&(this->OnBeaconConnectedMapping).field_0x8 = 0;
  *(undefined8 *)&(this->OnBeaconConnectedMapping).field_0x20 = 0;
  *(undefined4 *)&(this->OnBeaconConnectedMapping).field_0x28 = 0;
  *(undefined4 *)&(this->OnBeaconConnectedMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnBeaconConnectedMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnBeaconConnectedMapping).field_0x34 = 0;
  *(undefined8 *)&(this->OnBeaconConnectedMapping).field_0x40 = 0;
  *(undefined4 *)&(this->OnBeaconConnectedMapping).field_0x48 = 0;
  pFVar1 = ::FName::FName(local_res8,L"BeaconDriverHost");
  this->_padding_ = (longlong)*pFVar1;
  return this;
}

// ~AOnlineBeaconHost @ 14ec55a30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeaconHost::~AOnlineBeaconHost(AOnlineBeaconHost *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FNetworkNotify__;
  *(undefined4 *)&(this->OnBeaconConnectedMapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnBeaconConnectedMapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnBeaconConnectedMapping);
  *(undefined4 *)&(this->OnBeaconSpawnedMapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnBeaconSpawnedMapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnBeaconSpawnedMapping);
  pFVar2 = (this->ClientActors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ConnectionState).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ConnectionState).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConnectionState);
  this->_padding_ = (longlong)&AOnlineBeacon::_vftable__for__AActor__;
  this->_padding_ = (longlong)&AOnlineBeacon::_vftable__for__FNetworkNotify__;
  AActor::~AActor((AActor *)this);
  return;
}

// CloseHandshakeConnection @ 14ec63f70

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
AOnlineBeaconHost::CloseHandshakeConnection(AOnlineBeaconHost *this,UNetConnection *param_1)

{
  EConnectionState EVar1;
  FName local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((param_1 != (UNetConnection *)0x0) &&
     (EVar1 = UNetConnection::GetConnectionState(param_1), EVar1 != USOCK_Closed)) {
    if (5 < (byte)LogBeacon._0_1_) {
      FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)&param_1->PlayerId,&local_28);
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_48);
      local_res10 = (FName)this->_padding_;
      ::FName::ToString(&local_res10,&local_58);
      ::FString::PrintfImpl(&local_38,L"%s[%s]");
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    OnConnectionClosed(this,param_1);
    (param_1->OwningActor).field0_0x0.DebugPtr = (AActor *)0x0;
    (**(code **)(param_1->_padding_ + 0x308))(param_1,1);
    UNetConnection::Close(param_1);
    if (5 < (byte)LogBeacon._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    }
  }
  return;
}

// DisconnectClient @ 14ec6c900

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
AOnlineBeaconHost::DisconnectClient(AOnlineBeaconHost *this,AOnlineBeaconClient *param_1)

{
  UNetDriver *pUVar1;
  EConnectionState EVar2;
  UNetConnection *this_00;
  bool bVar3;
  FName local_res10;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (param_1 != (AOnlineBeaconClient *)0x0) {
    bVar3 = false;
    local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
    if ((((uint)param_1->_padding_ >> 0x1e & 1) == 0) && (param_1->ConnectionState != Closed)) {
      param_1->ConnectionState = Closed;
      this_00 = (UNetConnection *)(**(code **)(param_1->_padding_ + 0x570))(param_1);
      if (4 < (byte)LogBeacon._0_1_) {
        if (this_00 != (UNetConnection *)0x0) {
          UNetConnection::GetConnectionState(this_00);
          pUVar1 = (this_00->Driver).field0_0x0.DebugPtr;
          if (pUVar1 == (UNetDriver *)0x0) {
            ::FString::FString(&local_78,L"None");
          }
          else {
            local_res10 = (FName)pUVar1->_padding_;
            ::FName::ToString(&local_res10,&local_78);
          }
          bVar3 = true;
        }
        local_res10 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res10,&local_48);
        if (this_00 == (UNetConnection *)0x0) {
          ::FString::FString(&local_88,L"None");
        }
        else {
          local_res10 = (FName)this_00->_padding_;
          ::FName::ToString(&local_res10,&local_88);
        }
        local_res10 = (FName)this->_padding_;
        ::FName::ToString(&local_res10,&local_68);
        ::FString::PrintfImpl(&local_58,L"%s[%s]");
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if ((bVar3) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      if ((this_00 != (UNetConnection *)0x0) &&
         (EVar2 = UNetConnection::GetConnectionState(this_00), EVar2 != USOCK_Closed)) {
        (**(code **)(this_00->_padding_ + 0x308))(this_00,1);
        UNetConnection::Close(this_00);
      }
    }
  }
  return;
}

// FinishHandshake @ 14ec72c20

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
AOnlineBeaconHost::FinishHandshake(AOnlineBeaconHost *this,UNetConnection *param_1,FString *param_2)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  AActor *this_00;
  TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
  *this_01;
  UFunction *pUVar4;
  uint uVar5;
  bool bVar6;
  FText *pFVar7;
  bool bVar8;
  FName local_res8;
  undefined1 local_48 [40];
  longlong local_20;
  
  bVar6 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  this_00 = (AActor *)(**(code **)(this->_padding_ + 0x7a0))();
  if (this_00 == (AActor *)0x0) {
LAB_14ec72cab:
    bVar8 = true;
  }
  else {
    local_res8 = *(FName *)(this_00->_padding_ + 0x18);
    ::FName::ToString(&local_res8,(FString *)local_48);
    bVar6 = true;
    iVar3 = (param_2->Data).ArrayNum;
    if (iVar3 == local_48._8_4_) {
      if (1 < iVar3) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                           (wchar_t *)local_48._0_8_);
        bVar8 = iVar3 == 0;
        goto LAB_14ec72c9f;
      }
    }
    else {
      bVar8 = iVar3 + local_48._8_4_ == 1;
LAB_14ec72c9f:
      if (!bVar8) goto LAB_14ec72cab;
    }
    bVar8 = false;
  }
  if ((bVar6) && ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48._0_8_);
  }
  if (bVar8) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FText::AsLocalizable_Advanced_LocText
                (&ErrorTxt,L"NetworkErrors",L"BeaconSpawnNetGUIDAckError2",
                 L"Join failure, no actor at NetGUIDAck.");
      atexit(`AOnlineBeaconHost::FinishHandshake'::__l5::_dynamic_atexit_destructor_for__ErrorTxt__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (local_48,BeaconSpawnNetGUIDAckNoActor);
    pFVar7 = &ErrorTxt;
  }
  else {
    this_01 = TMapBase<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,0>_>
              ::Find((TMapBase<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,0>_>
                      *)&this->OnBeaconConnectedMapping,param_2);
    if (this_01 !=
        (TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
         *)0x0) {
      local_res8 = (FName)param_1;
      if (*(int *)&(this->ConnectionState).field_0x8 != *(int *)&(this->ConnectionState).field_0x34)
      {
        uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        TSet<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>,FDefaultSetAllocator>
        ::RemoveImpl<UNetConnection_const_*>
                  ((TSet<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>,FDefaultSetAllocator>
                    *)&this->ConnectionState,uVar5 >> 0x10 ^ uVar5,(UNetConnection **)&local_res8);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      (param_1->OwningActor).field0_0x0.DebugPtr = this_00;
      AActor::SetReplicates(this_00,true);
      AActor::SetAutonomousProxy(this_00,true,true);
      *(undefined1 *)&this_00[1].PrimaryActorTick._padding_ = 3;
      pUVar4 = UObject::FindFunctionChecked
                         ((UObject *)this_00,NAME_AOnlineBeaconClient_ClientOnConnected);
      (**(code **)(this_00->_padding_ + 0x260))(this_00,pUVar4,0);
      (**(code **)(param_1->_padding_ + 0x308))(param_1,1);
      if (4 < (byte)LogBeacon._0_1_) {
        GetDebugName(this,(FString *)local_48,param_1);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
        if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_48._0_8_);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
                 (FReadAccessScope *)local_48);
      if ((*(int *)&this_01->field_0x10 != 0) &&
         (plVar1 = *(longlong **)&this_01->field_0x8, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x68))(plVar1,this_00,param_1);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)local_48);
      goto LAB_14ec72edd;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      FText::AsLocalizable_Advanced_LocText
                (&ErrorTxt,L"NetworkErrors",L"BeaconSpawnNetGUIDAckError1",
                 L"Join failure, no host object at NetGUIDAck.");
      atexit(`AOnlineBeaconHost::FinishHandshake'::__l8::_dynamic_atexit_destructor_for__ErrorTxt__)
      ;
      _Init_thread_footer(&::_TSS1);
    }
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (local_48,BeaconSpawnNetGUIDAckNoHost);
    pFVar7 = &ErrorTxt;
  }
  SendFailurePacket(this,param_1,(TNetResult<ENetCloseResult> *)local_48,pFVar7);
  if (local_20 != 0) {
    (**(code **)(local_20 + -0x10))(local_20 + -0x10);
  }
  if ((void *)local_48._24_8_ != (void *)0x0) {
    FMemory::Free((void *)local_48._24_8_);
  }
  CloseHandshakeConnection(this,param_1);
LAB_14ec72edd:
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// GetClientActor @ 14ec74450

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
AOnlineBeaconHost::GetClientActor(AOnlineBeaconHost *this,UNetConnection *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  AOnlineBeaconClient *pAVar4;
  UNetConnection *pUVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar7 = 0;
  uVar9 = uVar7;
  if (0 < (this->ClientActors).ArrayNum) {
    do {
      uVar6 = (uint)uVar7;
      uVar8 = ~uVar6 >> 0x1f;
      uVar3 = 0;
      if ((int)uVar6 < (this->ClientActors).ArrayNum) {
        uVar3 = uVar8;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pAVar4 = (AOnlineBeaconClient *)(*pcVar1)();
        return pAVar4;
      }
      if (*(longlong *)((this->ClientActors).AllocatorInstance.Data + uVar9) == 0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7294475238941655662>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineBeaconHost.cpp"
                           ,0x26e,"ClientActors[ClientIdx]");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pAVar4 = (AOnlineBeaconClient *)(*pcVar1)();
          return pAVar4;
        }
      }
      else {
        uVar3 = 0;
        if ((int)uVar6 < (this->ClientActors).ArrayNum) {
          uVar3 = uVar8;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pAVar4 = (AOnlineBeaconClient *)(*pcVar1)();
          return pAVar4;
        }
        pUVar5 = (UNetConnection *)
                 (**(code **)(**(longlong **)((this->ClientActors).AllocatorInstance.Data + uVar9) +
                             0x570))();
        if (pUVar5 == param_1) {
          uVar3 = 0;
          if ((int)uVar6 < (this->ClientActors).ArrayNum) {
            uVar3 = uVar8;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            pAVar4 = (AOnlineBeaconClient *)(*pcVar1)();
            return pAVar4;
          }
          return *(AOnlineBeaconClient **)
                  ((this->ClientActors).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
        }
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar9 = uVar9 + 8;
    } while ((int)(uVar6 + 1) < (this->ClientActors).ArrayNum);
  }
  return (AOnlineBeaconClient *)0x0;
}

// GetConnectionDataForUniqueNetId @ 14ec74840

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
AOnlineBeaconHost::GetConnectionDataForUniqueNetId
          (AOnlineBeaconHost *this,FUniqueNetId *param_1,UNetConnection **param_2,
          FConnectionState **param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  TSharedPtr<FUniqueNetId_const_,1> *this_00;
  FUniqueNetId *pFVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  int iVar19;
  undefined1 local_res8 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar19 = 0;
  puVar1 = &(this->ConnectionState).field_0x10;
  iVar5 = *(int *)&(this->ConnectionState).field_0x28;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar5 != 0) {
    puVar18 = *(uint **)&(this->ConnectionState).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar15 = *puVar18;
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar19;
      iVar16 = iVar16 + 0x20;
      iVar19 = iVar19 + 1;
      iVar11 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14ec748fd;
      uVar15 = puVar18[lVar13 + 1];
    }
    uVar10 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar11 = (int)lVar13 + -1 + iVar16;
    if (iVar5 < iVar11) {
      iVar11 = iVar5;
    }
  }
LAB_14ec748fd:
  uVar15 = *(uint *)&(this->ConnectionState).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar19);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar15 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar16;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ConnectionState).field_0x8 -
                       *(int *)&(this->ConnectionState).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  uVar10 = *(uint *)&(this->ConnectionState).field_0x28;
  if (uVar15 != uVar10) {
    puVar17 = *(undefined1 **)&(this->ConnectionState).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar19 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar19;
      uVar14 = uVar14 + 0x20;
      iVar19 = iVar19 + 1;
      uVar15 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_14ec74a00;
      uVar15 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar15 = (int)lVar13 + -1 + uVar14;
    if ((int)uVar10 < (int)uVar15) {
      uVar15 = uVar10;
    }
  }
LAB_14ec74a00:
  do {
    if (*(int *)&(this->ConnectionState).field_0x8 - *(int *)&(this->ConnectionState).field_0x34 !=
        (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar15) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return false;
    }
    lVar13 = *(longlong *)
              (*(longlong *)&this->ConnectionState + (longlong)TStack_68.CurrentBitIndex * 0x28);
    puVar2 = (undefined8 *)
             (*(longlong *)&this->ConnectionState + (longlong)TStack_68.CurrentBitIndex * 0x28);
    bVar7 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)(lVar13 + 0x1b8));
    cVar9 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    if (bVar7 == (bool)cVar9) {
      if (!bVar7) {
LAB_14ec74aec:
        *param_2 = (UNetConnection *)*puVar2;
        *param_3 = (FConnectionState *)(puVar2 + 1);
        return true;
      }
      bVar4 = *(byte *)(lVar13 + 0x1d0);
      if ((1 < (ulonglong)bVar4) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + (ulonglong)bVar4 + 4) != '\0') {
        this_00 = FUniqueNetIdWrapper::GetV1Unsafe((FUniqueNetIdWrapper *)(lVar13 + 0x1b8));
        pFVar12 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(this_00);
        cVar9 = (*(code *)**(undefined8 **)pFVar12)(pFVar12,param_1);
        if (cVar9 != '\0') goto LAB_14ec74aec;
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// GetDebugName @ 14ec74e70

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
AOnlineBeaconHost::GetDebugName
          (AOnlineBeaconHost *this,FString *__return_storage_ptr__,UNetConnection *param_1)

{
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNetConnection *)0x0) {
    ::FString::FString(&local_28,L"None");
  }
  else {
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,&local_28);
  }
  local_res8 = (FName)this->_padding_;
  ::FName::ToString(&local_res8,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s[%s]");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetHost @ 14ec75760

AOnlineBeaconHostObject * __thiscall
AOnlineBeaconHost::GetHost(AOnlineBeaconHost *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  AOnlineBeaconHostObject *pAVar6;
  UClass *pUVar7;
  uint uVar8;
  longlong lVar9;
  FObjectPtr_u_0 *this_00;
  
  uVar8 = 0;
  if (0 < (int)this->_padding_) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pAVar6 = (AOnlineBeaconHostObject *)(*pcVar2)();
        return pAVar6;
      }
      this_00 = (FObjectPtr_u_0 *)(this->_padding_ + lVar9);
      if (this_00->Handle != (UObject *)0x0) {
        pUVar7 = AOnlineBeaconHostObject::StaticClass();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar7);
        if ((bVar3) &&
           (pAVar6 = (AOnlineBeaconHostObject *)this_00->Handle,
           pAVar6 != (AOnlineBeaconHostObject *)0x0)) {
          iVar5 = (pAVar6->BeaconTypeName).Data.ArrayNum;
          iVar1 = (param_1->Data).ArrayNum;
          if (iVar5 == iVar1) {
            if (iVar5 < 2) {
              return pAVar6;
            }
            iVar5 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)(pAVar6->BeaconTypeName).Data.AllocatorInstance.Data,
                               (wchar_t *)(param_1->Data).AllocatorInstance.Data);
            bVar3 = iVar5 == 0;
          }
          else {
            bVar3 = iVar5 + iVar1 == 1;
          }
          if (bVar3) {
            return pAVar6;
          }
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (int)this->_padding_);
  }
  return (AOnlineBeaconHostObject *)0x0;
}

// GetListenPort @ 14ec75880

int __thiscall AOnlineBeaconHost::GetListenPort(AOnlineBeaconHost *this)

{
  return this->ListenPort;
}

// GetPrivateStaticClass @ 14ec77400

UClass * __cdecl AOnlineBeaconHost::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeaconHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconHost",
               &Z_Registration_Info_UClass_AOnlineBeaconHost.InnerSingleton,
               StaticRegisterNativesAOnlineBeaconHost,0x400,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeaconHost>,
               InternalVTableHelperCtorCaller<AOnlineBeaconHost>,local_res8,
               AOnlineBeacon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconHost.InnerSingleton;
}

// HandleControlMessage @ 14ec7a0d0

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
AOnlineBeaconHost::HandleControlMessage
          (AOnlineBeaconHost *this,UNetConnection *param_1,uchar param_2,FInBunch *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TConsoleVariableData<FString> *pTVar6;
  UNetConnection *pUVar7;
  FWeakObjectPtr FVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  EEncryptionFailureAction EVar12;
  int iVar13;
  FConnectionState *pFVar14;
  FTimerManager *pFVar15;
  FTimerData *pFVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  undefined8 *puVar19;
  ulong64 uVar20;
  FUniqueNetId *pFVar21;
  FString *pFVar22;
  FText *pFVar23;
  UWorld *this_00;
  UPackage *pUVar24;
  TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy> *this_01;
  AActor *this_02;
  FName *pFVar25;
  uint uVar26;
  TReferenceControllerBase<1> *pTVar27;
  ForAnyElementType FVar28;
  uint uVar29;
  ulonglong uVar30;
  TArray<TObjectPtr<AOnlineBeaconClient>,TSizedDefaultAllocator<32>_> *pTVar31;
  TReferenceControllerBase<1> *pTVar32;
  longlong lVar33;
  float fVar34;
  undefined1 auStackY_d48 [32];
  UNetConnection *local_cf8;
  undefined1 local_cf0 [4];
  EEngineNetworkRuntimeFeatures local_cec [2];
  EEngineNetworkRuntimeFeatures local_ce8 [2];
  uint local_ce4;
  FString local_ce0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_cd0;
  FDelegateAllocation local_cc8;
  uint local_cb8 [2];
  FString local_cb0;
  FString local_ca0;
  uint local_c90;
  undefined1 local_c8c [4];
  AActor *local_c88;
  FString local_c78;
  FString local_c68;
  AOnlineBeaconHost *local_c58;
  FTimerHandle local_c50;
  undefined8 local_c48;
  ForAnyElementType local_c40;
  int local_c38;
  int local_c34;
  FWeakObjectPtr local_c30;
  FWeakObjectPtr local_c28 [2];
  FString local_c18;
  undefined1 local_c08 [8];
  FDelegateAllocation local_c00;
  FDelegateAllocation local_bf0;
  AOnlineBeaconHost *local_be0;
  FName local_bd8;
  UNetConnection *local_bd0;
  AOnlineBeaconHost *local_bc8;
  UNetConnection *local_bc0;
  AOnlineBeaconHost *local_bb8;
  FString local_bb0;
  FString local_ba0;
  FString local_b90;
  UNetConnection **local_b80;
  AOnlineBeaconHost **local_b78;
  FDestructionSentinel local_b70;
  FDestructionSentinel local_b58;
  FDestructionSentinel local_b40;
  FDelegateAllocation *local_b28;
  FDestructionSentinel local_b20;
  FDelegateAllocation *local_b08;
  FText local_b00;
  FString local_af0;
  FString local_ae0;
  FString local_ad0;
  FText local_ac0;
  FString local_ab0;
  FString local_aa0;
  FString local_a90;
  FString local_a80;
  FName local_a70;
  FText local_a68;
  FText local_a58;
  FString local_a48;
  FString local_a38;
  FString local_a28;
  FText local_a18;
  FText local_a08;
  FString local_9f8;
  FText local_9e8;
  FText local_9d8;
  FString local_9c8;
  FText local_9b8;
  FText local_9a8;
  FText local_998;
  FTextFormat local_988;
  FTextFormat local_978;
  FText local_968;
  FString local_958;
  FString local_948;
  FText local_938;
  FText local_928;
  FString local_918;
  FReadAccessScope local_908;
  undefined1 local_8f0 [40];
  longlong local_8c8;
  FReadAccessScope local_8c0;
  undefined1 local_8a8 [40];
  longlong local_880;
  undefined1 local_878 [40];
  longlong local_850;
  undefined1 local_848 [40];
  longlong local_820;
  undefined1 local_818 [40];
  longlong local_7f0;
  undefined1 local_7e8 [40];
  longlong local_7c0;
  undefined1 local_7b8 [40];
  longlong local_790;
  undefined1 local_788 [40];
  longlong local_760;
  undefined1 local_758 [40];
  longlong local_730;
  undefined1 local_728 [40];
  longlong local_700;
  undefined1 local_6f8 [40];
  longlong local_6d0;
  undefined1 local_6c8 [40];
  longlong local_6a0;
  undefined1 local_698 [40];
  longlong local_670;
  undefined1 local_668 [40];
  longlong local_640;
  undefined1 local_638 [40];
  longlong local_610;
  undefined1 local_608 [40];
  longlong local_5e0;
  undefined1 local_5d8 [40];
  longlong local_5b0;
  undefined1 local_5a8 [40];
  longlong local_580;
  undefined1 local_578 [40];
  longlong local_550;
  undefined1 local_548 [40];
  longlong local_520;
  undefined1 local_518 [40];
  longlong local_4f0;
  undefined1 local_4e8 [40];
  longlong local_4c0;
  FTextFormat local_4b8;
  FText local_4a8;
  FTextFormat local_498;
  FText local_488;
  FText local_478;
  FTextFormat local_468;
  FText local_458;
  FText local_448;
  FTextFormat local_438;
  FText local_428;
  FTextFormat local_418;
  FText local_408;
  FTextFormat local_3f8;
  FString local_3e8;
  FText local_3d8;
  FText local_3c8;
  FTextFormat local_3b8;
  FText local_3a8;
  FTextFormat local_398;
  FText local_388;
  FTextFormat local_378;
  FText local_368;
  FTextFormat local_358;
  FText local_348;
  FText local_338;
  FTextFormat local_328;
  FText local_318;
  FUniqueNetIdRepl local_308;
  FUniqueNetIdRepl local_2d8;
  FNetIDVariant local_2a8;
  TStringBuilderBase<wchar_t> local_298;
  wchar_t local_278 [128];
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [128];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_d48;
  pTVar32 = (TReferenceControllerBase<1> *)0x0;
  local_c8c = (undefined1  [4])0x0;
  local_cf8 = param_1;
  pFVar14 = TMapBase<UNetConnection_*,AOnlineBeaconHost::FConnectionState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>_>
            ::Find((TMapBase<UNetConnection_*,AOnlineBeaconHost::FConnectionState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>_>
                    *)&this->ConnectionState,param_1);
  if (pFVar14 == (FConnectionState *)0x0) {
    if ((param_2 != '\0') || ((param_1->OwningActor).field0_0x0.DebugPtr != (AActor *)0x0)) {
      pFVar17 = FText::FromString(&local_338,L"NMT_Hello");
      pFVar18 = FTextFormat::FTextFormat(&local_328,&Error_ControlFlow,Default);
      pFVar17 = FText::Format<FText>(&local_a18,pFVar18,pFVar17);
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (local_8a8,BeaconControlFlowError);
      SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_8a8,pFVar17);
      if (local_880 != 0) {
        (**(code **)(local_880 + -0x10))(local_880 + -0x10);
      }
      if ((void *)local_8a8._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_8a8._24_8_);
      }
      if (local_a18.TextData.Reference == (ITextData *)0x0) {
        return false;
      }
      (**(code **)((longlong)*local_a18.TextData.Reference + 0x10))();
      return false;
    }
    local_b80 = &local_cf8;
    local_b78 = &local_c58;
    local_c50.Handle = 0;
    local_c48 = 0;
    local_c58 = this;
    TSet<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UNetConnection_*_const_&,AOnlineBeaconHost::FConnectionState_&&>_>
              ((TSet<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>,FDefaultSetAllocator>
                *)&this->ConnectionState,
               (TPairInitializer<UNetConnection_*_const_&,AOnlineBeaconHost::FConnectionState_&&> *)
               local_c8c,(bool *)&local_b80);
    pFVar14 = (FConnectionState *)
              (*(longlong *)&this->ConnectionState + ((longlong)(int)local_c8c * 5 + 1) * 8);
    pFVar15 = AActor::GetWorldTimerManager((AActor *)local_c58);
    pFVar16 = FTimerManager::FindTimer(pFVar15,&local_c50);
    if (pFVar16 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar15,local_c50);
    }
    pUVar7 = local_cf8;
    local_c50.Handle = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (AOnlineBeaconHost *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    (pUVar7->OwningActor).field0_0x0.DebugPtr = (AActor *)this;
    if ((pFVar14 == (FConnectionState *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ConnState != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineBeaconHost.cpp"
                           ,0xad,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
  }
  if (param_2 == '\0') {
    if (pFVar14->bHasSentHello != false) {
      pFVar17 = FText::FromString(&local_368,L"NMT_Hello");
      pFVar18 = FTextFormat::FTextFormat(&local_358,&Error_ControlFlow,Default);
      pFVar17 = FText::Format<FText>(&local_9d8,pFVar18,pFVar17);
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (local_578,BeaconControlFlowError);
      SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_578,pFVar17);
      if (local_550 != 0) {
        (**(code **)(local_550 + -0x10))(local_550 + -0x10);
      }
      if ((void *)local_578._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_578._24_8_);
      }
      if (local_9d8.TextData.Reference == (ITextData *)0x0) {
        return false;
      }
      (**(code **)((longlong)*local_9d8.TextData.Reference + 0x10))();
      return false;
    }
    pFVar14->bHasSentHello = true;
    if (4 < (byte)LogBeacon._0_1_) {
      GetDebugName(this,&local_9c8,local_cf8);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
      }
    }
    local_cf0[0] = 0;
    local_ce4 = 0;
    local_c78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c78.Data.ArrayNum = 0;
    local_c78.Data.ArrayMax = 0;
    local_ce8[0] = UNetDriver::GetNetworkRuntimeFeatures((UNetDriver *)this->_padding_);
    plVar3 = (longlong *)param_3->_padding_;
    local_cec[0] = None;
    if ((undefined1 *)plVar3[1] < (undefined1 *)*plVar3 + 1) {
      (**(code **)(param_3->_padding_ + 0x188))(param_3,local_cf0,1);
    }
    else {
      local_cf0[0] = *(undefined1 *)*plVar3;
      *plVar3 = *plVar3 + 1;
    }
    plVar3 = (longlong *)param_3->_padding_;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_3->_padding_ & 0x10000) == 0) {
        (**(code **)(param_3->_padding_ + 0x188))(param_3,&local_ce4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_3,&local_ce4);
      }
    }
    else {
      local_ce4 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    ::operator<<((FArchive *)param_3,&local_c78);
    plVar3 = (longlong *)param_3->_padding_;
    if ((EEngineNetworkRuntimeFeatures *)plVar3[1] < (EEngineNetworkRuntimeFeatures *)*plVar3 + 1) {
      if ((param_3->_padding_ & 0x10000) == 0) {
        (**(code **)(param_3->_padding_ + 0x188))(param_3,local_cec,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_3,local_cec);
      }
    }
    else {
      local_cec[0] = *(EEngineNetworkRuntimeFeatures *)*plVar3;
      *plVar3 = *plVar3 + 2;
    }
    if ((param_3->_padding_ & 0x200) != 0) {
      pFVar17 = FText::FromString(&local_348,L"NMT_Hello");
      pFVar18 = FTextFormat::FTextFormat(&local_988,&Error_UnableToParsePacket,Default);
      pFVar17 = FText::Format<FText>(&local_9b8,pFVar18,pFVar17);
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (local_548,BeaconUnableToParsePacket);
      SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_548,pFVar17);
      if (local_520 != 0) {
        (**(code **)(local_520 + -0x10))(local_520 + -0x10);
      }
      if ((void *)local_548._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_548._24_8_);
      }
      local_878._24_8_ = local_c78.Data.AllocatorInstance.Data;
      if (local_9b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_9b8.TextData.Reference + 0x10))();
        local_878._24_8_ = local_c78.Data.AllocatorInstance.Data;
      }
      goto LAB_14ec7c594;
    }
    local_c90 = FNetworkVersion::GetLocalNetworkVersion(true);
    bVar9 = FNetworkVersion::IsNetworkCompatible(local_c90,local_ce4);
    if ((!bVar9) ||
       (bVar9 = FNetworkVersion::AreNetworkRuntimeFeaturesCompatible(local_ce8[0],local_cec[0]),
       !bVar9)) {
      local_178.Base = local_158;
      local_178.CurPos = local_158;
      local_178.bIsDynamic = false;
      local_178.bIsExternal = false;
      local_178.End = (wchar_t *)local_58;
      local_298.Base = local_278;
      local_298.CurPos = local_278;
      local_298.End = (wchar_t *)&local_178;
      local_298.bIsDynamic = false;
      local_298.bIsExternal = false;
      FNetworkVersion::DescribeNetworkRuntimeFeaturesBitset(local_ce8[0],&local_178);
      FNetworkVersion::DescribeNetworkRuntimeFeaturesBitset(local_cec[0],&local_298);
      if (1 < (byte)LogBeacon._0_1_) {
        if (local_298.End < (TStringBuilderBase<wchar_t> *)(local_298.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_298,1);
        }
        *local_298.CurPos = L'\0';
        if (local_178.End < local_178.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_178,1);
        }
        *local_178.CurPos = L'\0';
        GetDebugName(this,&local_918,local_cf8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
        if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_918.Data.AllocatorInstance.Data);
        }
      }
      UE::Net::TNetControlMessageImpl<2,unsigned_int,enum_EEngineNetworkRuntimeFeatures>::Send
                (local_cf8,&local_c90,local_ce8);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_298);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
      local_878._24_8_ = local_c78.Data.AllocatorInstance.Data;
      goto LAB_14ec7c594;
    }
    if (local_c78.Data.ArrayNum < 2) {
      EVar12 = Default;
      bVar9 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                         &FNetDelegates::OnReceivedNetworkEncryptionFailure);
      if (bVar9) {
        EVar12 = TDelegate<enum_EEncryptionFailureAction___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
                 ::Execute(&FNetDelegates::OnReceivedNetworkEncryptionFailure,local_cf8);
      }
      if ((((longlong *)this->_padding_ != (longlong *)0x0) &&
          (cVar11 = (**(code **)(*(longlong *)this->_padding_ + 0x4e8))(), cVar11 != '\0')) &&
         (EVar12 != AllowConnection)) {
        pFVar17 = FText::FromString(&local_9a8,L"Encryption token missing");
        UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                  (local_518,EncryptionTokenMissing);
        SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_518,pFVar17);
        if (local_4f0 != 0) {
          (**(code **)(local_4f0 + -0x10))(local_4f0 + -0x10);
        }
        if ((void *)local_518._24_8_ != (void *)0x0) {
          FMemory::Free((void *)local_518._24_8_);
        }
        local_878._24_8_ = local_c78.Data.AllocatorInstance.Data;
        if (local_9a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_9a8.TextData.Reference + 0x10))();
          local_878._24_8_ = local_c78.Data.AllocatorInstance.Data;
        }
        goto LAB_14ec7c594;
      }
      OnHelloSequenceComplete(this,local_cf8);
      local_9f8.Data.AllocatorInstance.Data = local_c78.Data.AllocatorInstance.Data;
    }
    else {
      bVar9 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                         &FNetDelegates::OnReceivedNetworkEncryptionToken);
      pUVar7 = local_cf8;
      if (!bVar9) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          FText::AsLocalizable_Advanced_LocText
                    (&ErrorTxt,L"NetworkErrors",L"BeaconEncryptionNotBoundError",
                     L"Encryption failure");
          atexit(`AOnlineBeaconHost::HandleControlMessage'::__l79::
                 _dynamic_atexit_destructor_for__ErrorTxt__);
          _Init_thread_footer(&::_TSS0);
        }
        UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                  (local_4e8,EncryptionFailure);
        SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_4e8,&ErrorTxt);
        if (local_4c0 != 0) {
          (**(code **)(local_4c0 + -0x10))(local_4c0 + -0x10);
        }
        local_878._24_8_ = local_c78.Data.AllocatorInstance.Data;
        if ((void *)local_4e8._24_8_ != (void *)0x0) {
          FMemory::Free((void *)local_4e8._24_8_);
          local_878._24_8_ = local_c78.Data.AllocatorInstance.Data;
        }
        goto LAB_14ec7c594;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_cf8 != (UNetConnection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_cf8);
      }
      local_c28[0].ObjectIndex = 0;
      local_c28[0].ObjectSerialNumber = 0;
      local_bc0 = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UNetConnection *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      FWeakObjectPtr::operator=(local_c28,(FObjectPtr)&local_bc0);
      local_c18.Data.ArrayNum = 0;
      local_c18.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnEncryptionResponse;
      local_c18.Data.ArrayMax =
           local_988.TextFormatData.SharedReferenceCount.ReferenceController._4_4_;
      local_c08 = (undefined1  [8])0x0;
      local_c00.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_c00.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c08,
                 (FWriteAccessScope *)&local_b40);
      local_b28 = &local_c00;
      puVar19 = UE::Core::Private::DelegateAllocate(0x30,&local_c00);
      if (puVar19 != (undefined8 *)0x0) {
        *puVar19 = &
                   ___7__TCommonDelegateInstanceState___A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUNetConnection__UFWeakObjectPtr______6B_
        ;
        *(FWeakObjectPtr *)(puVar19 + 1) = local_c28[0];
        uVar20 = FDelegateHandle::GenerateNewID();
        puVar19[2] = uVar20;
        *puVar19 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconHost____A6AXAEBUFEncryptionKeyResponse___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUNetConnection__UFWeakObjectPtr______6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar19[3] = 0;
        local_bb8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar19 + 3),(FObjectPtr)&local_bb8);
        puVar19[4] = local_c18.Data.AllocatorInstance.Data;
        puVar19[5] = CONCAT44(local_c18.Data.ArrayMax,local_c18.Data.ArrayNum);
      }
      if (local_b40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b40.Accessor,&local_b40);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FNetDelegates::OnReceivedNetworkEncryptionToken,&local_908);
      if (FNetDelegates::OnReceivedNetworkEncryptionToken._16_4_ != 0) {
        pTVar32 = (TReferenceControllerBase<1> *)
                  FNetDelegates::OnReceivedNetworkEncryptionToken._8_8_;
      }
      (**(code **)(pTVar32->_padding_ + 0x60))(pTVar32,&local_c78,local_c08);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_908);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c08);
      if (local_c00.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_c00.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_c08);
      local_9f8.Data.AllocatorInstance.Data = local_c78.Data.AllocatorInstance.Data;
    }
    goto LAB_14ec7c3f8;
  }
  if (param_2 == '\x04') {
    if ((pFVar14->bHasSentWelcome == false) || (pFVar14->bHasSetNetspeed != false)) {
      pFVar17 = FText::FromString(&local_388,L"NMT_Netspeed");
      pFVar18 = FTextFormat::FTextFormat(&local_378,&Error_ControlFlow,Default);
      pFVar17 = FText::Format<FText>(&local_9e8,pFVar18,pFVar17);
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (local_5a8,BeaconControlFlowError);
      SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_5a8,pFVar17);
      if (local_580 != 0) {
        (**(code **)(local_580 + -0x10))(local_580 + -0x10);
      }
      if ((void *)local_5a8._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_5a8._24_8_);
      }
      if (local_9e8.TextData.Reference == (ITextData *)0x0) {
        return false;
      }
      (**(code **)((longlong)*local_9e8.TextData.Reference + 0x10))();
      return false;
    }
    pFVar14->bHasSetNetspeed = true;
    plVar3 = (longlong *)param_3->_padding_;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_3->_padding_ & 0x10000) == 0) {
        (**(code **)(param_3->_padding_ + 0x188))(param_3,local_cb8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_3,local_cb8);
      }
    }
    else {
      local_cb8[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    if ((param_3->_padding_ & 0x200) != 0) {
      pFVar17 = FText::FromString(&local_3a8,L"NMT_Netspeed");
      pFVar18 = FTextFormat::FTextFormat(&local_398,&Error_UnableToParsePacket,Default);
      pFVar17 = FText::Format<FText>(&local_a08,pFVar18,pFVar17);
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (local_5d8,BeaconUnableToParsePacket);
      SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_5d8,pFVar17);
      if (local_5b0 != 0) {
        (**(code **)(local_5b0 + -0x10))(local_5b0 + -0x10);
      }
      if ((void *)local_5d8._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_5d8._24_8_);
      }
      if (local_a08.TextData.Reference == (ITextData *)0x0) {
        return false;
      }
      (**(code **)((longlong)*local_a08.TextData.Reference + 0x10))();
      return false;
    }
    uVar26 = *(uint *)(this->_padding_ + 0xd8);
    if ((int)local_cb8[0] < (int)uVar26) {
      uVar26 = local_cb8[0];
    }
    uVar29 = 0x708;
    if (0x708 < (int)uVar26) {
      uVar29 = uVar26;
    }
    *(uint *)&local_cf8->_padding_ = uVar29;
    if ((byte)LogBeacon._0_1_ < 5) {
      return true;
    }
    GetDebugName(this,&local_9f8,local_cf8);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    goto LAB_14ec7c3f8;
  }
  if (param_2 != '\x05') {
    if (param_2 == '\x1a') {
      if (((pFVar14->bHasSetNetspeed == false) || (pFVar14->bHasJoined != false)) ||
         ((this->bAuthRequired != false && (pFVar14->bHasAuthenticated == false)))) {
        pFVar17 = FText::FromString(&local_428,L"NMT_BeaconJoin");
        pFVar18 = FTextFormat::FTextFormat(&local_418,&Error_ControlFlow,Default);
        pFVar17 = FText::Format<FText>(&local_a68,pFVar18,pFVar17);
        UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                  (local_6c8,BeaconControlFlowError);
        SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_6c8,pFVar17);
        if (local_6a0 != 0) {
          (**(code **)(local_6a0 + -0x10))(local_6a0 + -0x10);
        }
        if ((void *)local_6c8._24_8_ != (void *)0x0) {
          FMemory::Free((void *)local_6c8._24_8_);
        }
        if (local_a68.TextData.Reference == (ITextData *)0x0) {
          return false;
        }
        (**(code **)((longlong)*local_a68.TextData.Reference + 0x10))();
        return false;
      }
      pFVar14->bHasJoined = true;
      local_cb0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_308._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
      local_cb0.Data.ArrayNum = 0;
      local_cb0.Data.ArrayMax = 0;
      local_308._padding_ = 0;
      local_308._padding_ = 0;
      local_308._padding_._0_1_ = 0;
      local_308.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_308.ReplicationBytes.ArrayNum = 0;
      local_308.ReplicationBytes.ArrayMax = 0;
      ::operator<<((FArchive *)param_3,&local_cb0);
      ::operator<<((FArchive *)param_3,&local_308);
      if ((param_3->_padding_ & 0x200) == 0) {
        if (this->bAuthRequired == false) {
          if (4 < (byte)LogBeacon._0_1_) {
            FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)&local_308,&local_a80);
            GetDebugName(this,&local_a90,local_cf8);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
            if (local_a90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a90.Data.AllocatorInstance.Data);
            }
LAB_14ec7ad09:
            if (local_a80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a80.Data.AllocatorInstance.Data);
            }
          }
LAB_14ec7ad13:
          if (local_cf8->ClientWorldPackageName == (FName)0x0) {
            lVar33 = (**(code **)(this->_padding_ + 0x7a0))(this);
            if (lVar33 == 0) {
              this_00 = AActor::GetWorld((AActor *)this);
              pUVar24 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00);
              UNetConnection::SetClientWorldPackageName(local_cf8,(FName)pUVar24->_padding_);
              this_01 = TMapBase<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,0>_>
                        ::Find((TMapBase<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,0>_>
                                *)&this->OnBeaconSpawnedMapping,&local_cb0);
              if ((this_01 ==
                   (TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
                    *)0x0) ||
                 (bVar9 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01),
                 pUVar7 = local_cf8, !bVar9)) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c) < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
                  FText::AsLocalizable_Advanced_LocText
                            (&ErrorTxt,L"NetworkErrors",L"BeaconSpawnFailureError.UnknownSpawner",
                             L"Join failure, Couldn\'t spawn client beacon actor (unknown beacon spawner)."
                            );
                  atexit(`AOnlineBeaconHost::HandleControlMessage'::__l203::
                         _dynamic_atexit_destructor_for__ErrorTxt__);
                  _Init_thread_footer(&::_TSS7);
                }
                UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                          (local_6f8,BeaconSpawnFailureError);
                SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_6f8,&ErrorTxt)
                ;
                local_728._24_8_ = local_6f8._24_8_;
                if (local_6d0 != 0) {
                  (**(code **)(local_6d0 + -0x10))(local_6d0 + -0x10);
                  local_728._24_8_ = local_6f8._24_8_;
                }
              }
              else {
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
                           &local_8c0);
                pTVar27 = pTVar32;
                if (*(int *)&this_01->field_0x10 != 0) {
                  pTVar27 = *(TReferenceControllerBase<1> **)&this_01->field_0x8;
                }
                this_02 = (AActor *)(**(code **)(pTVar27->_padding_ + 0x60))(pTVar27,pUVar7);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                ~FReadAccessScope(&local_8c0);
                if (this_02 == (AActor *)0x0) {
LAB_14ec7af03:
                  bVar9 = true;
                }
                else {
                  local_bd8 = *(FName *)(this_02->_padding_ + 0x18);
                  ::FName::ToString(&local_bd8,&local_ba0);
                  if (local_cb0.Data.ArrayNum == local_ba0.Data.ArrayNum) {
                    if (1 < local_cb0.Data.ArrayNum) {
                      iVar13 = FGenericPlatformStricmp::Stricmp
                                         ((wchar_t *)local_cb0.Data.AllocatorInstance.Data,
                                          (wchar_t *)local_ba0.Data.AllocatorInstance.Data);
                      bVar9 = iVar13 == 0;
                      goto LAB_14ec7aeed;
                    }
                  }
                  else {
                    bVar9 = local_cb0.Data.ArrayNum + local_ba0.Data.ArrayNum == 1;
LAB_14ec7aeed:
                    pTVar32 = (TReferenceControllerBase<1> *)&DAT_00000001;
                    if (!bVar9) goto LAB_14ec7af03;
                  }
                  bVar9 = false;
                  pTVar32 = (TReferenceControllerBase<1> *)&DAT_00000001;
                }
                if ((pTVar32 != (TReferenceControllerBase<1> *)0x0) &&
                   (local_ba0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_ba0.Data.AllocatorInstance.Data);
                }
                if (!bVar9) {
                  (**(code **)(local_cf8->_padding_ + 0x3d0))(local_cf8,3);
                  *(undefined1 *)&this_02[1].PrimaryActorTick._padding_ = 2;
                  UNetDriver::CreateNetIDForObject
                            ((local_cf8->Driver).field0_0x0.DebugPtr,&local_2a8,(UObject *)this_02);
                  (**(code **)(this_02->_padding_ + 0x798))(this_02,local_cf8);
                  FUniqueNetIdRepl::operator=(&local_cf8->PlayerId,&local_308);
                  AActor::SetRole(this_02,ROLE_Authority);
                  AActor::SetReplicates(this_02,false);
                  if ((this->_padding_ != *(longlong *)(this->_padding_ + 0x218)) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("NetDriverName == NetDriver->NetDriverName",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\OnlineBeaconHost.cpp"
                                         ,0x1ca,L""), bVar9)) {
                    pcVar4 = (code *)swi(3);
                    uVar10 = (*pcVar4)();
                    return (bool)uVar10;
                  }
                  AActor::SetNetDriverName(this_02,(FName)this->_padding_);
                  pTVar31 = &this->ClientActors;
                  local_c88 = this_02;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)this_02);
                  }
                  pFVar2 = (pTVar31->AllocatorInstance).Data;
                  if (((pFVar2 <= (FScriptContainerElement *)(local_c8c + 4)) &&
                      ((FScriptContainerElement *)(local_c8c + 4) <
                       pFVar2 + (longlong)(this->ClientActors).ArrayMax * 8)) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
                    pcVar4 = (code *)swi(3);
                    uVar10 = (*pcVar4)();
                    return (bool)uVar10;
                  }
                  iVar13 = (this->ClientActors).ArrayNum;
                  piVar1 = &(this->ClientActors).ArrayMax;
                  if (iVar13 == *piVar1) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&pTVar31->AllocatorInstance,piVar1);
                  }
                  (this->ClientActors).ArrayNum = iVar13 + 1;
                  *(AActor **)((pTVar31->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_c88
                  ;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_c88 != (AActor *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)local_c88);
                  }
                  UE::Net::TNetControlMessageImpl<27,UE::Net::FNetIDVariant>::Send
                            (local_cf8,&local_2a8);
                  (**(code **)(local_cf8->_padding_ + 0x308))(local_cf8,1);
                  FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_308);
                  local_9f8.Data.AllocatorInstance.Data = local_cb0.Data.AllocatorInstance.Data;
                  goto LAB_14ec7c3f8;
                }
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c) < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
                  FText::AsLocalizable_Advanced_LocText
                            (&ErrorTxt,L"NetworkErrors",L"BeaconSpawnFailureError",
                             L"Join failure, Couldn\'t spawn client beacon actor.");
                  atexit(`AOnlineBeaconHost::HandleControlMessage'::__l206::
                         _dynamic_atexit_destructor_for__ErrorTxt__);
                  _Init_thread_footer(&::_TSS8);
                }
                UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                          (local_728,BeaconSpawnFailureError);
                SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_728,&ErrorTxt)
                ;
                if (local_700 != 0) {
                  (**(code **)(local_700 + -0x10))(local_700 + -0x10);
                }
              }
            }
            else {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
                FText::AsLocalizable_Advanced_LocText
                          (&ErrorTxt,L"NetworkErrors",L"BeaconSpawnExistingActorError",
                           L"Join failure, existing beacon actor.");
                atexit(`AOnlineBeaconHost::HandleControlMessage'::__l198::
                       _dynamic_atexit_destructor_for__ErrorTxt__);
                _Init_thread_footer(&::_TSS6);
              }
              UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                        (local_8f0,BeaconSpawnExistingActorError);
              SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_8f0,&ErrorTxt);
              local_728._24_8_ = local_8f0._24_8_;
              if (local_8c8 != 0) {
                (**(code **)(local_8c8 + -0x10))(local_8c8 + -0x10);
                local_728._24_8_ = local_8f0._24_8_;
              }
            }
          }
          else {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
              FText::AsLocalizable_Advanced_LocText
                        (&ErrorTxt,L"NetworkErrors",L"BeaconSpawnClientWorldPackageNameError",
                         L"Join failure, existing ClientWorldPackageName.");
              atexit(`AOnlineBeaconHost::HandleControlMessage'::__l195::
                     _dynamic_atexit_destructor_for__ErrorTxt__);
              _Init_thread_footer(&::_TSS5);
            }
            UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                      (local_758,BeaconSpawnClientWorldPackageNameError);
            SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_758,&ErrorTxt);
            local_728._24_8_ = local_758._24_8_;
            if (local_730 != 0) {
              (**(code **)(local_730 + -0x10))(local_730 + -0x10);
              local_728._24_8_ = local_758._24_8_;
            }
          }
        }
        else {
          bVar9 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&local_308);
          if ((bVar9) &&
             (bVar9 = ::operator==((FUniqueNetIdWrapper *)&local_308,
                                   (FUniqueNetIdWrapper *)&local_cf8->PlayerId), bVar9)) {
            pcVar4 = *(code **)(this->_padding_ + 0x7b8);
            pFVar21 = FUniqueNetIdWrapper::operator*((FUniqueNetIdWrapper *)&local_308);
            cVar11 = (*pcVar4)(this,pFVar21,&local_cb0);
            if (cVar11 != '\0') {
              if (4 < (byte)LogBeacon._0_1_) {
                FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)&local_308,&local_ad0);
                GetDebugName(this,&local_ae0,local_cf8);
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
                local_a80.Data.AllocatorInstance.Data = local_ad0.Data.AllocatorInstance.Data;
                if (local_ae0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_ae0.Data.AllocatorInstance.Data);
                  local_a80.Data.AllocatorInstance.Data = local_ad0.Data.AllocatorInstance.Data;
                }
                goto LAB_14ec7ad09;
              }
              goto LAB_14ec7ad13;
            }
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
              FText::AsLocalizable_Advanced_LocText
                        (&AuthErrorText,L"NetworkErrors",L"BeaconAuthVerifyError",
                         L"Unable to authenticate for beacon. Verifying auth for beacon type {0} failed for connection owned by {1}"
                        );
              atexit(`AOnlineBeaconHost::HandleControlMessage'::__l154::
                     _dynamic_atexit_destructor_for__AuthErrorText__);
              _Init_thread_footer(&::_TSS4);
            }
            pFVar22 = FUniqueNetIdWrapper::ToDebugString
                                ((FUniqueNetIdWrapper *)&local_cf8->PlayerId,&local_af0);
            pFVar17 = FText::FromString(&local_488,pFVar22);
            pFVar23 = FText::FromString(&local_478,&local_cb0);
            pFVar18 = FTextFormat::FTextFormat(&local_468,&AuthErrorText,Default);
            pFVar17 = FText::Format<FText,FText>(&local_b00,pFVar18,pFVar23,pFVar17);
            UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                      (local_7b8,BeaconAuthError);
            SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_7b8,pFVar17);
            if (local_790 != 0) {
              (**(code **)(local_790 + -0x10))(local_790 + -0x10);
            }
            if ((void *)local_7b8._24_8_ != (void *)0x0) {
              FMemory::Free((void *)local_7b8._24_8_);
            }
            local_728._24_8_ = local_af0.Data.AllocatorInstance.Data;
            if (local_b00.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_b00.TextData.Reference + 0x10))();
              local_728._24_8_ = local_af0.Data.AllocatorInstance.Data;
            }
          }
          else {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
              FText::AsLocalizable_Advanced_LocText
                        (&AuthErrorText,L"NetworkErrors",L"BeaconAuthError",
                         L"Unable to authenticate for beacon. {0} is not valid for connection owned by {1}"
                        );
              atexit(`AOnlineBeaconHost::HandleControlMessage'::__l151::
                     _dynamic_atexit_destructor_for__AuthErrorText__);
              _Init_thread_footer(&::_TSS3);
            }
            pFVar22 = FUniqueNetIdWrapper::ToDebugString
                                ((FUniqueNetIdWrapper *)&local_cf8->PlayerId,&local_aa0);
            pFVar17 = FText::FromString(&local_458,pFVar22);
            pFVar22 = FUniqueNetIdWrapper::ToDebugString
                                ((FUniqueNetIdWrapper *)&local_308,&local_ab0);
            pFVar23 = FText::FromString(&local_448,pFVar22);
            pFVar18 = FTextFormat::FTextFormat(&local_438,&AuthErrorText,Default);
            pFVar17 = FText::Format<FText,FText>(&local_ac0,pFVar18,pFVar23,pFVar17);
            UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                      (local_788,BeaconAuthError);
            SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_788,pFVar17);
            if (local_760 != 0) {
              (**(code **)(local_760 + -0x10))(local_760 + -0x10);
            }
            if ((void *)local_788._24_8_ != (void *)0x0) {
              FMemory::Free((void *)local_788._24_8_);
            }
            if (local_ac0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_ac0.TextData.Reference + 0x10))();
            }
            local_728._24_8_ = local_aa0.Data.AllocatorInstance.Data;
            if (local_ab0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_ab0.Data.AllocatorInstance.Data);
              local_728._24_8_ = local_aa0.Data.AllocatorInstance.Data;
            }
          }
        }
        if ((FScriptContainerElement *)local_728._24_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_728._24_8_);
        }
      }
      else {
        pFVar17 = FText::FromString(&local_4a8,L"NMT_BeaconJoin");
        pFVar18 = FTextFormat::FTextFormat(&local_498,&Error_UnableToParsePacket,Default);
        pFVar17 = FText::Format<FText>(&local_928,pFVar18,pFVar17);
        UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                  (local_7e8,BeaconUnableToParsePacket);
        SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_7e8,pFVar17);
        if (local_7c0 != 0) {
          (**(code **)(local_7c0 + -0x10))(local_7c0 + -0x10);
        }
        if ((void *)local_7e8._24_8_ != (void *)0x0) {
          FMemory::Free((void *)local_7e8._24_8_);
        }
        if (local_928.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_928.TextData.Reference + 0x10))();
        }
      }
      local_308._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
      if (local_308.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.ReplicationBytes.AllocatorInstance.Data);
      }
      uVar30 = (ulonglong)(byte)local_308._padding_;
      if ((1 < (byte)local_308._padding_) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar30] ==
          UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_308._padding_);
        local_878._24_8_ = local_cb0.Data.AllocatorInstance.Data;
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar30])(&local_308._padding_);
        local_878._24_8_ = local_cb0.Data.AllocatorInstance.Data;
      }
LAB_14ec7c594:
      if ((FScriptContainerElement *)local_878._24_8_ == (FScriptContainerElement *)0x0) {
        return false;
      }
      FMemory::Free((void *)local_878._24_8_);
      return false;
    }
    if (param_2 != '\x1c') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
        FText::AsLocalizable_Advanced_LocText
                  (&ErrorTxt,L"NetworkErrors",L"BeaconSpawnUnexpectedError",
                   L"Join failure, unexpected control message.");
        atexit(`AOnlineBeaconHost::HandleControlMessage'::__l266::
               _dynamic_atexit_destructor_for__ErrorTxt__);
        _Init_thread_footer(&::_TSS9);
      }
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (local_878,BeaconSpawnUnexpectedError);
      SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_878,&ErrorTxt);
      if (local_850 != 0) {
        (**(code **)(local_850 + -0x10))(local_850 + -0x10);
      }
      goto LAB_14ec7c594;
    }
    if ((pFVar14->bHasJoined == false) || (pFVar14->bHasCompletedAck != false)) {
      pFVar17 = FText::FromString(&local_318,L"NMT_BeaconNetGUIDAck");
      pFVar18 = FTextFormat::FTextFormat(&local_4b8,&Error_ControlFlow,Default);
      pFVar17 = FText::Format<FText>(&local_938,pFVar18,pFVar17);
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (local_818,BeaconControlFlowError);
      SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_818,pFVar17);
      if (local_7f0 != 0) {
        (**(code **)(local_7f0 + -0x10))(local_7f0 + -0x10);
      }
      if ((void *)local_818._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_818._24_8_);
      }
      if (local_938.TextData.Reference == (ITextData *)0x0) {
        return false;
      }
      (**(code **)((longlong)*local_938.TextData.Reference + 0x10))();
      return false;
    }
    pFVar14->bHasCompletedAck = true;
    local_ce0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_ce0.Data.ArrayNum = 0;
    local_ce0.Data.ArrayMax = 0;
    ::operator<<((FArchive *)param_3,&local_ce0);
    if ((param_3->_padding_ & 0x200) != 0) {
      pFVar17 = FText::FromString(&local_3d8,L"NMT_BeaconNetGUIDAck");
      pFVar18 = FTextFormat::FTextFormat(&local_978,&Error_UnableToParsePacket,Default);
      pFVar17 = FText::Format<FText>(&local_968,pFVar18,pFVar17);
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (local_848,BeaconUnableToParsePacket);
      SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_848,pFVar17);
      if (local_820 != 0) {
        (**(code **)(local_820 + -0x10))(local_820 + -0x10);
      }
      if ((void *)local_848._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_848._24_8_);
      }
      local_878._24_8_ = local_ce0.Data.AllocatorInstance.Data;
      if (local_968.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_968.TextData.Reference + 0x10))();
        local_878._24_8_ = local_ce0.Data.AllocatorInstance.Data;
      }
      goto LAB_14ec7c594;
    }
    fVar34 = TAutoConsoleVariable<float>::GetValueOnGameThread
                       (&BeaconConsoleVariables::CVarDelayFinishHandshake);
    pTVar6 = BeaconConsoleVariables::CVarDelayFinishHandshakeType.Ref;
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
    local_c40.Data = (FScriptContainerElement *)0x0;
    local_c38 = pTVar6->ShadowedValue[0].Data.ArrayNum;
    lVar33 = (longlong)local_c38;
    pFVar2 = pTVar6->ShadowedValue[0].Data.AllocatorInstance.Data;
    if (local_c38 == 0) {
      local_c34 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_c38,0,&local_c40,local_c38,&local_c34);
      memcpy(local_c40.Data,pFVar2,lVar33 * 2);
    }
    iVar13 = local_ce0.Data.ArrayNum;
    if (local_c38 < 2) {
LAB_14ec7a538:
      bVar5 = true;
    }
    else {
      if (local_c38 == local_ce0.Data.ArrayNum) {
        iVar13 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_c40.Data,
                            (wchar_t *)local_ce0.Data.AllocatorInstance.Data);
        bVar9 = iVar13 == 0;
      }
      else {
        bVar9 = local_c38 + local_ce0.Data.ArrayNum == 1;
      }
      bVar5 = false;
      iVar13 = local_ce0.Data.ArrayNum;
      if (bVar9) goto LAB_14ec7a538;
    }
    if ((fVar34 == 0.0) || (!bVar5)) {
      local_bb0.Data.AllocatorInstance.Data = local_ce0.Data.AllocatorInstance.Data;
      local_bb0.Data.ArrayMax = local_ce0.Data.ArrayMax;
      local_ce0.Data.ArrayNum = 0;
      local_ce0.Data.ArrayMax = 0;
      local_ce0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_bb0.Data.ArrayNum = iVar13;
      FinishHandshake(this,local_cf8,&local_bb0);
    }
    else if (fVar34 <= 0.0) {
      if (5 < (byte)LogBeacon._0_1_) {
        GetDebugName(this,&local_948,local_cf8);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
        if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_948.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (5 < (byte)LogBeacon._0_1_) {
        GetDebugName(this,&local_958,local_cf8);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
        if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_958.Data.AllocatorInstance.Data);
        }
      }
      local_c78.Data.AllocatorInstance.Data = (FScriptContainerElement *)FinishHandshake;
      local_c78.Data._8_8_ =
           (ulonglong)local_978.TextFormatData.SharedReferenceCount.ReferenceController._4_4_ <<
           0x20;
      local_bf0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_bf0.DelegateSize = 0;
      puVar19 = UE::Core::Private::DelegateAllocate(0x40,&local_bf0);
      if (puVar19 != (undefined8 *)0x0) {
        *puVar19 = &
                   ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUNetConnection__VFString____6B_
        ;
        puVar19[2] = 0;
        puVar19[1] = local_cf8;
        puVar19[2] = local_ce0.Data.AllocatorInstance.Data;
        local_ce0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(puVar19 + 3) = local_ce0.Data.ArrayNum;
        *(int *)((longlong)puVar19 + 0x1c) = local_ce0.Data.ArrayMax;
        local_ce0.Data.ArrayNum = 0;
        local_ce0.Data.ArrayMax = 0;
        uVar20 = FDelegateHandle::GenerateNewID();
        puVar19[4] = uVar20;
        *puVar19 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconHost____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUNetConnection__VFString____6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (AOnlineBeaconHost *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar19[5] = 0;
        local_be0 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (AOnlineBeaconHost *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar19 + 5),(FObjectPtr)&local_be0);
        puVar19[6] = local_c78.Data.AllocatorInstance.Data;
        puVar19[7] = local_c78.Data._8_8_;
      }
      pFVar15 = AActor::GetWorldTimerManager((AActor *)this);
      FTimerManager::SetTimer
                (pFVar15,&pFVar14->FinishHandshakeTimerHandle,
                 (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &local_bf0,fVar34,false,__real_bf800000);
      TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>::
      ~TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                 &local_bf0);
    }
    local_9f8.Data.AllocatorInstance.Data = local_ce0.Data.AllocatorInstance.Data;
    if (local_c40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c40.Data);
      local_9f8.Data.AllocatorInstance.Data = local_ce0.Data.AllocatorInstance.Data;
    }
LAB_14ec7c3f8:
    if (local_9f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9f8.Data.AllocatorInstance.Data);
    }
    return true;
  }
  if ((pFVar14->bHasSentChallenge == false) || (pFVar14->bHasSentLogin != false)) {
    pFVar17 = FText::FromString(&local_3c8,L"NMT_Login");
    pFVar18 = FTextFormat::FTextFormat(&local_3b8,&Error_ControlFlow,Default);
    pFVar17 = FText::Format<FText>(&local_998,pFVar18,pFVar17);
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (local_608,BeaconControlFlowError);
    SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_608,pFVar17);
    if (local_5e0 != 0) {
      (**(code **)(local_5e0 + -0x10))(local_5e0 + -0x10);
    }
    if ((void *)local_608._24_8_ != (void *)0x0) {
      FMemory::Free((void *)local_608._24_8_);
    }
    if (local_998.TextData.Reference == (ITextData *)0x0) {
      return false;
    }
    (**(code **)((longlong)*local_998.TextData.Reference + 0x10))();
    return false;
  }
  pFVar14->bHasSentLogin = true;
  param_3->_padding_ = param_3->_padding_ + (ulonglong)this->MaxAuthTokenSize;
  local_2d8._padding_ = 0;
  local_2d8._padding_ = 0;
  pFVar22 = &local_cf8->RequestURL;
  local_2d8._padding_._0_1_ = 0;
  local_2d8._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  local_2d8.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.ReplicationBytes.ArrayNum = 0;
  local_2d8.ReplicationBytes.ArrayMax = 0;
  local_c68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c68.Data.ArrayNum = 0;
  local_c68.Data.ArrayMax = 0;
  ::operator<<((FArchive *)param_3,&local_cf8->ClientResponse);
  ::operator<<((FArchive *)param_3,pFVar22);
  ::operator<<((FArchive *)param_3,&local_2d8);
  ::operator<<((FArchive *)param_3,&local_c68);
  param_3->_padding_ = param_3->_padding_ - (ulonglong)this->MaxAuthTokenSize;
  if ((param_3->_padding_ & 0x200) != 0) {
    pFVar17 = FText::FromString(&local_408,L"NMT_Login");
    pFVar18 = FTextFormat::FTextFormat(&local_3f8,&Error_UnableToParsePacket,Default);
    pFVar17 = FText::Format<FText>(&local_a58,pFVar18,pFVar17);
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (local_698,BeaconUnableToParsePacket);
    SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_698,pFVar17);
    if (local_670 != 0) {
      (**(code **)(local_670 + -0x10))(local_670 + -0x10);
    }
    if ((void *)local_698._24_8_ != (void *)0x0) {
      FMemory::Free((void *)local_698._24_8_);
    }
    if (local_a58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a58.TextData.Reference + 0x10))();
    }
    goto LAB_14ec7b9f3;
  }
  bVar9 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&local_2d8);
  if (!bVar9) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      FText::AsLocalizable_Advanced_LocText
                (&ErrorTxt,L"NetworkErrors",L"BeaconLoginInvalidIdError",
                 L"Login Failure. Invalid ID.");
      atexit(`AOnlineBeaconHost::HandleControlMessage'::__l89::
             _dynamic_atexit_destructor_for__ErrorTxt__);
      _Init_thread_footer(&::_TSS1);
    }
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (local_668,BeaconLoginInvalidIdError);
    SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_668,&ErrorTxt);
    if (local_640 != 0) {
      (**(code **)(local_640 + -0x10))(local_640 + -0x10);
    }
    if ((void *)local_668._24_8_ != (void *)0x0) {
      FMemory::Free((void *)local_668._24_8_);
    }
    goto LAB_14ec7b9f3;
  }
  local_ca0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ca0.Data.ArrayNum = 0;
  local_ca0.Data.ArrayMax = 0;
  iVar13 = ::FString::Find(&local_cf8->RequestURL,L"?",1,IgnoreCase,FromStart,-1);
  if (iVar13 != -1) {
    pFVar22 = ::FString::RightChop(&local_cf8->RequestURL,&local_a48,iVar13);
    if (&local_ca0 != pFVar22) {
      if (local_ca0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ca0.Data.AllocatorInstance.Data);
      }
      local_ca0.Data.AllocatorInstance.Data = (pFVar22->Data).AllocatorInstance.Data;
      (pFVar22->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_ca0.Data.ArrayNum = (pFVar22->Data).ArrayNum;
      local_ca0.Data.ArrayMax = (pFVar22->Data).ArrayMax;
      (pFVar22->Data).ArrayNum = 0;
      (pFVar22->Data).ArrayMax = 0;
    }
    if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a48.Data.AllocatorInstance.Data);
    }
  }
  if (4 < (byte)LogBeacon._0_1_) {
    FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)&local_2d8,&local_a28);
    GetDebugName(this,&local_a38,local_cf8);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a38.Data.AllocatorInstance.Data);
    }
    if (local_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a28.Data.AllocatorInstance.Data);
    }
  }
  FUniqueNetIdRepl::operator=(&local_cf8->PlayerId,&local_2d8);
  FVar28.Data = (FScriptContainerElement *)L"";
  if (local_c68.Data.ArrayNum != 0) {
    FVar28.Data = local_c68.Data.AllocatorInstance.Data;
  }
  pFVar25 = ::FName::FName(&local_a70,(wchar_t *)FVar28.Data);
  UNetConnection::SetPlayerOnlinePlatformName(local_cf8,*pFVar25);
  ::FString::FString(&local_b90,L"AuthTicket");
  pFVar22 = ::FString::FString(&local_3e8,&local_ca0);
  UGameplayStatics::ParseOption(&local_c18,pFVar22,&local_b90);
  if (local_b90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b90.Data.AllocatorInstance.Data);
  }
  pUVar7 = local_cf8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_cf8 != (UNetConnection *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_cf8);
  }
  local_c30.ObjectIndex = 0;
  local_c30.ObjectSerialNumber = 0;
  local_bd0 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UNetConnection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=(&local_c30,(FObjectPtr)&local_bd0);
  FVar8 = local_c30;
  local_cd0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_cc8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_cc8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_cd0,(FWriteAccessScope *)&local_b20);
  local_b08 = &local_cc8;
  puVar19 = UE::Core::Private::DelegateAllocate(0x30,&local_cc8);
  if (puVar19 != (undefined8 *)0x0) {
    *puVar19 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar20 = FDelegateHandle::GenerateNewID();
    puVar19[2] = uVar20;
    *puVar19 = &TWeakBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`AOnlineBeaconHost::HandleControlMessage'::`80'::<lambda_1>_>
                ::_vftable_;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar19[3] = 0;
    local_bc8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar19 + 3),(FObjectPtr)&local_bc8);
    puVar19[4] = this;
    *(FWeakObjectPtr *)(puVar19 + 5) = FVar8;
  }
  if (local_b20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b20.Accessor,&local_b20);
  }
  uVar30 = (ulonglong)(byte)local_2d8._padding_;
  pcVar4 = *(code **)(this->_padding_ + 0x7b0);
  if ((1 < uVar30) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar30 + 4) == '\0') {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8098327459864248868>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Public\\Online\\CoreOnline.h"
                       ,0x224,"IsV1()");
    pTVar27 = pTVar32;
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
LAB_14ec7b88d:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
  }
  else {
    if (((byte)local_2d8._padding_ != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    pTVar32 = (TReferenceControllerBase<1> *)local_2d8._padding_;
    pTVar27 = (TReferenceControllerBase<1> *)local_2d8._padding_;
    if ((TReferenceControllerBase<1> *)local_2d8._padding_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_2d8._padding_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_2d8._padding_ + 8) + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pTVar27 == (TReferenceControllerBase<1> *)0x0) goto LAB_14ec7b88d;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  cVar11 = (*pcVar4)(this,pTVar27,&local_ca0,&local_c18);
  if (cVar11 != '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_cd0,(FWriteAccessScope *)&local_b58);
    if ((local_cc8.DelegateSize != 0) &&
       (local_cc8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_cc8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_cc8,0,0,0x10);
      local_cc8.DelegateSize = 0;
    }
    if (local_b58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b58.Accessor,&local_b58);
    }
    if (local_cc8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_cc8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_cd0.AccessDetector);
    if (local_c18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c18.Data.AllocatorInstance.Data);
    }
    if (local_ca0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ca0.Data.AllocatorInstance.Data);
    }
    if (local_c68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c68.Data.AllocatorInstance.Data);
    }
    FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_2d8);
    return true;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&ErrorTxt,L"NetworkErrors",L"BeaconLoginInvalidAuthHandlerError",
               L"Login Failure. Unable to process authentication.");
    atexit(`AOnlineBeaconHost::HandleControlMessage'::__l113::
           _dynamic_atexit_destructor_for__ErrorTxt__);
    _Init_thread_footer(&::_TSS2);
  }
  UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
            (local_638,BeaconLoginInvalidAuthHandlerError);
  SendFailurePacket(this,local_cf8,(TNetResult<ENetCloseResult> *)local_638,&ErrorTxt);
  if (local_610 != 0) {
    (**(code **)(local_610 + -0x10))(local_610 + -0x10);
  }
  if ((void *)local_638._24_8_ != (void *)0x0) {
    FMemory::Free((void *)local_638._24_8_);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_cd0,(FWriteAccessScope *)&local_b70);
  if ((local_cc8.DelegateSize != 0) &&
     (local_cc8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_cc8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_cc8,0,0,0x10);
    local_cc8.DelegateSize = 0;
  }
  if (local_b70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b70.Accessor,&local_b70);
  }
  if (local_cc8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_cc8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_cd0.AccessDetector);
  if (local_c18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c18.Data.AllocatorInstance.Data);
  }
  if (local_ca0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ca0.Data.AllocatorInstance.Data);
  }
LAB_14ec7b9f3:
  if (local_c68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c68.Data.AllocatorInstance.Data);
  }
  local_2d8._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  if (local_2d8.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.ReplicationBytes.AllocatorInstance.Data);
  }
  uVar30 = (ulonglong)(byte)local_2d8._padding_;
  if ((1 < (byte)local_2d8._padding_) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar30] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_2d8._padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar30])(&local_2d8._padding_);
  }
  return false;
}

// HandleNetworkFailure @ 14ec7cb70

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
AOnlineBeaconHost::HandleNetworkFailure
          (AOnlineBeaconHost *this,UWorld *param_1,UNetDriver *param_2,Type param_3,FString *param_4
          )

{
  FName local_res18 [2];
  FString local_18;
  
  if (((param_2 != (UNetDriver *)0x0) && (param_2->NetDriverName == (FName)this->_padding_)) &&
     (param_3 != ConnectionTimeout)) {
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

// InitHost @ 14ec801f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall AOnlineBeaconHost::InitHost(AOnlineBeaconHost *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  wchar_t *pwVar4;
  UWorld *pUVar5;
  longlong *plVar6;
  int local_res8 [2];
  FName local_res10;
  void *local_a8;
  undefined8 local_a0;
  FString local_98;
  FURL local_88;
  
  FURL::FURL(&local_88,(FURL *)0x0,L"",TRAVEL_Absolute);
  pwVar4 = FCommandLine::Get();
  bVar2 = FParse::Value(pwVar4,L"BeaconPort=",local_res8);
  if ((bVar2) && (local_res8[0] != 0)) {
    this->ListenPort = local_res8[0];
  }
  local_88.Port = this->ListenPort;
  if (((local_88.Valid != 0) &&
      (cVar3 = (**(code **)(this->_padding_ + 0x770))(this), cVar3 != '\0')) &&
     (plVar6 = (longlong *)this->_padding_, plVar6 != (longlong *)0x0)) {
    pcVar1 = *(code **)(*plVar6 + 0x410);
    pUVar5 = AActor::GetWorld((AActor *)this);
    (*pcVar1)(plVar6,pUVar5);
    local_a8 = (void *)0x0;
    local_a0 = 0;
    plVar6 = &this->_padding_;
    if (this == (AOnlineBeaconHost *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    cVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x2e8))
                      ((longlong *)this->_padding_,plVar6,&local_88,this->bReuseAddressAndPort,
                       &local_a8);
    if (cVar3 != '\0') {
      this->ListenPort = local_88.Port;
      *(longlong **)(this->_padding_ + 0x318) = plVar6;
      *(int *)(this->_padding_ + 0xec) = (int)this->_padding_;
      *(undefined4 *)(this->_padding_ + 0xf0) = *(undefined4 *)((longlong)&this->_padding_ + 4);
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      bVar2 = true;
      goto LAB_14ec803a6;
    }
    if (4 < (byte)LogBeacon._0_1_) {
      local_res10 = (FName)this->_padding_;
      ::FName::ToString(&local_res10,&local_98);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(this->_padding_ + 0x778))(this);
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
  }
  bVar2 = false;
LAB_14ec803a6:
  if (local_88.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Portal.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_88.Op.AllocatorInstance.Data,local_88.Op.ArrayNum);
  if (local_88.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Op.AllocatorInstance.Data);
  }
  if (local_88.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.RedirectURL.Data.AllocatorInstance.Data);
  }
  if (local_88.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Map.Data.AllocatorInstance.Data);
  }
  if (local_88.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Host.Data.AllocatorInstance.Data);
  }
  if (local_88.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Protocol.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// NotifyControlMessage @ 14ec84380

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
AOnlineBeaconHost::NotifyControlMessage
          (AOnlineBeaconHost *this,UNetConnection *param_1,uchar param_2,FInBunch *param_3)

{
  longlong *this_00;
  bool bVar1;
  FString local_18;
  
  this_00 = &this[-1]._padding_;
  if ((*(longlong *)(this->_padding_ + 0x100) == 0) && (param_1 != (UNetConnection *)0x0)) {
    if (5 < (byte)LogBeacon._0_1_) {
      FNetControlMessageInfo::GetName(param_2);
      GetDebugName((AOnlineBeaconHost *)this_00,&local_18,param_1);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    bVar1 = HandleControlMessage((AOnlineBeaconHost *)this_00,param_1,param_2,param_3);
    if (!bVar1) {
      CloseHandshakeConnection((AOnlineBeaconHost *)this_00,param_1);
    }
  }
  return;
}

// OnAuthenticationVerificationComplete @ 14ec84640

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
AOnlineBeaconHost::OnAuthenticationVerificationComplete
          (AOnlineBeaconHost *this,UNetConnection *param_1,FOnlineError *param_2)

{
  FConnectionState *pFVar1;
  FStaticBasicLogRecord *pFVar2;
  FName local_res8;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  undefined1 local_48 [40];
  longlong local_20;
  
  pFVar1 = TMapBase<UNetConnection_*,AOnlineBeaconHost::FConnectionState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>_>
           ::Find((TMapBase<UNetConnection_*,AOnlineBeaconHost::FConnectionState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>_>
                   *)&this->ConnectionState,param_1);
  if (pFVar1 == (FConnectionState *)0x0) {
    if ((byte)LogBeacon._0_1_ < 3) {
      return;
    }
    FOnlineError::ToLogString(param_2,&local_58);
    if (param_1 == (UNetConnection *)0x0) {
      ::FString::FString(&local_88,L"None");
    }
    else {
      local_res8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res8,&local_88);
    }
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_68);
    ::FString::PrintfImpl(&local_78,L"%s[%s]");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pFVar2 = &::LOG_Static;
  }
  else {
    if ((pFVar1->bHasSentLogin != false) && (pFVar1->bHasSentWelcome == false)) {
      if ((param_2->bSucceeded == false) && (param_2->Result != Success)) {
        if (4 < (byte)LogBeacon._0_1_) {
          FOnlineError::ToLogString(param_2,&local_58);
          if (param_1 == (UNetConnection *)0x0) {
            ::FString::FString(&local_88,L"None");
          }
          else {
            local_res8 = (FName)param_1->_padding_;
            ::FName::ToString(&local_res8,&local_88);
          }
          local_res8 = (FName)this->_padding_;
          ::FName::ToString(&local_res8,&local_78);
          ::FString::PrintfImpl(&local_68,L"%s[%s]");
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                  (local_48,BeaconAuthenticationFailure);
        SendFailurePacket(this,param_1,(TNetResult<ENetCloseResult> *)local_48,&Error_Authentication
                         );
        if (local_20 != 0) {
          (**(code **)(local_20 + -0x10))(local_20 + -0x10);
        }
        if ((void *)local_48._24_8_ != (void *)0x0) {
          FMemory::Free((void *)local_48._24_8_);
        }
        CloseHandshakeConnection(this,param_1);
        return;
      }
      pFVar1->bHasAuthenticated = true;
      if (5 < (byte)LogBeacon._0_1_) {
        GetDebugName(this,&local_58,param_1);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      pFVar1->bHasSentWelcome = true;
      UE::Net::TNetControlMessageImpl<25>::Send(param_1);
      (**(code **)(param_1->_padding_ + 0x308))(param_1,0);
      return;
    }
    if ((byte)LogBeacon._0_1_ < 3) {
      return;
    }
    FOnlineError::ToLogString(param_2,&local_58);
    if (param_1 == (UNetConnection *)0x0) {
      ::FString::FString(&local_88,L"None");
    }
    else {
      local_res8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res8,&local_88);
    }
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_68);
    ::FString::PrintfImpl(&local_78,L"%s[%s]");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    pFVar2 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar2,(FLogCategoryBase *)&LogBeacon);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// OnBeaconConnected @ 14ec84b40

TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy> *
__thiscall AOnlineBeaconHost::OnBeaconConnected(AOnlineBeaconHost *this,FString *param_1)

{
  TMap<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,0>_>
  *this_00;
  TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy> *pTVar1
  ;
  FString *local_38;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_30;
  bool local_28;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType local_18;
  int local_10;
  
  this_00 = &this->OnBeaconConnectedMapping;
  pTVar1 = TMapBase<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,0>_>
           ::Find((TMapBase<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,0>_>
                   *)this_00,param_1);
  if (pTVar1 == (TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
                 *)0x0) {
    local_30 = &local_20;
    local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = 0;
    local_38 = param_1;
    TSet<TTuple<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_const_&,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_const_&>_>
              ((TSet<TTuple<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                *)this_00,
               (TPairInitializer<FString_const_&,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_const_&>
                *)&stack0x00000008,(bool *)&local_38);
    pTVar1 = TMapBase<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,0>_>
             ::Find((TMapBase<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,0>_>
                     *)this_00,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_20,(FWriteAccessScope *)&local_38);
    if ((local_10 != 0) && (local_18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_18,0,0,0x10);
      local_10 = 0;
    }
    if (local_28 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (&local_30->AccessDetector,(FDestructionSentinel *)&local_38);
    }
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  }
  return pTVar1;
}

// OnBeaconSpawned @ 14ec84c40

TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy> * __thiscall
AOnlineBeaconHost::OnBeaconSpawned(AOnlineBeaconHost *this,FString *param_1)

{
  TMap<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,0>_>
  *this_00;
  TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy> *pTVar1;
  FString *local_38;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_30;
  bool local_28;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType local_18;
  int local_10;
  
  this_00 = &this->OnBeaconSpawnedMapping;
  pTVar1 = TMapBase<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,0>_>
           ::Find((TMapBase<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,0>_>
                   *)this_00,param_1);
  if (pTVar1 == (TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
                 *)0x0) {
    local_30 = &local_20;
    local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = 0;
    local_38 = param_1;
    TSet<TTuple<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_const_&,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_const_&>_>
              ((TSet<TTuple<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                *)this_00,
               (TPairInitializer<FString_const_&,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_const_&>
                *)&stack0x00000008,(bool *)&local_38);
    pTVar1 = TMapBase<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,0>_>
             ::Find((TMapBase<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,0>_>
                     *)this_00,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_20,(FWriteAccessScope *)&local_38);
    if ((local_10 != 0) && (local_18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_18,0,0,0x10);
      local_10 = 0;
    }
    if (local_28 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (&local_30->AccessDetector,(FDestructionSentinel *)&local_38);
    }
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  }
  return pTVar1;
}

// OnConnectionClosed @ 14ec86830

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
AOnlineBeaconHost::OnConnectionClosed(AOnlineBeaconHost *this,UNetConnection *param_1)

{
  longlong lVar1;
  AOnlineBeaconHostObject *pAVar2;
  uint uVar3;
  FName local_res8;
  FScriptContainerElement *local_res10;
  FScriptContainerElement *local_res18;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  lVar1 = (**(code **)(this->_padding_ + 0x7a0))();
  if (lVar1 != 0) {
    local_res8 = *(FName *)(*(longlong *)(lVar1 + 0x10) + 0x18);
    ::FName::ToString(&local_res8,&local_48);
    pAVar2 = GetHost(this,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (5 < (byte)LogBeacon._0_1_) {
      if (pAVar2 == (AOnlineBeaconHostObject *)0x0) {
        ::FString::FString(&local_98,L"None");
      }
      else {
        local_res8 = (FName)pAVar2->_padding_;
        ::FName::ToString(&local_res8,&local_98);
      }
      local_res8 = *(FName *)(lVar1 + 0x18);
      ::FName::ToString(&local_res8,&local_58);
      local_res10 = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        local_res10 = local_58.Data.AllocatorInstance.Data;
      }
      local_res8 = *(FName *)(*(longlong *)(lVar1 + 0x10) + 0x18);
      ::FName::ToString(&local_res8,&local_68);
      local_res18 = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        local_res18 = local_68.Data.AllocatorInstance.Data;
      }
      if (param_1 == (UNetConnection *)0x0) {
        ::FString::FString(&local_a8,L"None");
      }
      else {
        local_res8 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res8,&local_a8);
      }
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,&local_88);
      ::FString::PrintfImpl(&local_78,L"%s[%s]");
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    if (pAVar2 != (AOnlineBeaconHostObject *)0x0) {
      (**(code **)(pAVar2->_padding_ + 0x778))(pAVar2,lVar1);
    }
    (**(code **)(this->_padding_ + 0x7a8))(this,lVar1);
  }
  if (*(int *)&(this->ConnectionState).field_0x8 != *(int *)&(this->ConnectionState).field_0x34) {
    uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    local_res8 = (FName)param_1;
    TSet<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>,FDefaultSetAllocator>
    ::RemoveImpl<UNetConnection_const_*>
              ((TSet<TTuple<UNetConnection_*,AOnlineBeaconHost::FConnectionState>,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>,FDefaultSetAllocator>
                *)&this->ConnectionState,uVar3 >> 0x10 ^ uVar3,(UNetConnection **)&local_res8);
  }
  return;
}

// OnEncryptionResponse @ 14ec87060

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
AOnlineBeaconHost::OnEncryptionResponse
          (AOnlineBeaconHost *this,FEncryptionKeyResponse *param_1,
          TWeakObjectPtr<UNetConnection,FWeakObjectPtr> param_2)

{
  EConnectionState EVar1;
  UNetConnection *this_00;
  wchar_t *pwVar2;
  FWeakObjectPtr local_res18;
  FName local_res20;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FNetResult local_58;
  
  local_res18 = param_2.WeakPtr;
  this_00 = (UNetConnection *)FWeakObjectPtr::Get(&local_res18);
  if (this_00 == (UNetConnection *)0x0) {
    if (2 < (byte)LogBeacon._0_1_) {
      ::FString::FString(&local_78,L"None");
      local_res20 = (FName)this->_padding_;
      ::FName::ToString(&local_res20,&local_68);
      ::FString::PrintfImpl(&local_88,L"%s[%s]");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    EVar1 = UNetConnection::GetConnectionState(this_00);
    if (((EVar1 == USOCK_Invalid) ||
        (EVar1 = UNetConnection::GetConnectionState(this_00), EVar1 == USOCK_Closed)) ||
       ((this_00->Driver).field0_0x0.DebugPtr == (UNetDriver *)0x0)) {
      if ((byte)LogBeacon._0_1_ < 3) {
        return;
      }
      (**(code **)(this_00->_padding_ + 0x2e0))(this_00,&local_98);
      local_res20 = (FName)this_00->_padding_;
      ::FName::ToString(&local_res20,&local_78);
      local_res20 = (FName)this->_padding_;
      ::FName::ToString(&local_res20,&local_68);
      ::FString::PrintfImpl(&local_88,L"%s[%s]");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    }
    else {
      if (param_1->Response == Success) {
        UNetConnection::EnableEncryptionServer(this_00,&param_1->EncryptionData);
        OnHelloSequenceComplete(this,this_00);
        return;
      }
      pwVar2 = ::LexToString(param_1->Response);
      ::FString::FString(&local_98,pwVar2);
      if (2 < (byte)LogBeacon._0_1_) {
        local_res20 = (FName)this_00->_padding_;
        ::FName::ToString(&local_res20,&local_78);
        local_res20 = (FName)this->_padding_;
        ::FName::ToString(&local_res20,&local_88);
        ::FString::PrintfImpl(&local_68,L"%s[%s]");
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (&local_58,EncryptionFailure);
      UNetConnection::SendCloseReason(this_00,&local_58);
      if (local_58.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_58.NextResult + -0x10))((longlong)local_58.NextResult + -0x10);
      }
      if (local_58.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.ErrorContext.Data.AllocatorInstance.Data);
      }
      UE::Net::TNetControlMessageImpl<6,FString>::Send(this_00,&local_98);
      (**(code **)(this_00->_padding_ + 0x308))(this_00,1);
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (&local_58,EncryptionFailure);
      UNetConnection::Close(this_00,&local_58);
      local_88.Data.AllocatorInstance.Data = local_58.ErrorContext.Data.AllocatorInstance.Data;
      if (local_58.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_58.NextResult + -0x10))((longlong)local_58.NextResult + -0x10);
        local_88.Data.AllocatorInstance.Data = local_58.ErrorContext.Data.AllocatorInstance.Data;
      }
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnHelloSequenceComplete @ 14ec87ae0

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
AOnlineBeaconHost::OnHelloSequenceComplete(AOnlineBeaconHost *this,UNetConnection *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EConnectionState EVar3;
  FConnectionState *pFVar4;
  LARGE_INTEGER local_res10;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FScriptContainerElement *local_28 [2];
  
  if (param_1 == (UNetConnection *)0x0) {
    if ((byte)LogBeacon._0_1_ < 5) {
      return;
    }
    ::FString::FString(&local_48,L"None");
    local_res10 = (LARGE_INTEGER)this->_padding_;
    ::FName::ToString((FName *)&local_res10.s,&local_58);
    ::FString::PrintfImpl(&local_38,L"%s[%s]");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
    return;
  }
  EVar3 = UNetConnection::GetConnectionState(param_1);
  if (((EVar3 == USOCK_Invalid) ||
      (EVar3 = UNetConnection::GetConnectionState(param_1), EVar3 == USOCK_Closed)) ||
     ((param_1->Driver).field0_0x0.DebugPtr == (UNetDriver *)0x0)) {
    if ((byte)LogBeacon._0_1_ < 5) {
      return;
    }
    (**(code **)(param_1->_padding_ + 0x2e0))(param_1,local_28);
    local_res10 = (LARGE_INTEGER)param_1->_padding_;
    ::FName::ToString((FName *)&local_res10.s,&local_48);
    local_res10 = (LARGE_INTEGER)this->_padding_;
    ::FName::ToString((FName *)&local_res10.s,&local_38);
    ::FString::PrintfImpl(&local_58,L"%s[%s]");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    local_38.Data.AllocatorInstance.Data = local_28[0];
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
      local_38.Data.AllocatorInstance.Data = local_28[0];
    }
  }
  else {
    pFVar4 = TMapBase<UNetConnection_*,AOnlineBeaconHost::FConnectionState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>_>
             ::Find((TMapBase<UNetConnection_*,AOnlineBeaconHost::FConnectionState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>_>
                     *)&this->ConnectionState,param_1);
    if (pFVar4 == (FConnectionState *)0x0) {
      if ((byte)LogBeacon._0_1_ < 5) {
        return;
      }
      GetDebugName(this,&local_38,param_1);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    }
    else {
      if (pFVar4->bHasSentWelcome == false) {
        if (this->bAuthRequired != false) {
          if (5 < (byte)LogBeacon._0_1_) {
            GetDebugName(this,&local_38,param_1);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
          }
          pFVar4->bHasSentChallenge = true;
          (**(code **)(param_1->_padding_ + 0x3d0))(param_1,1);
          UNetConnection::SendChallengeControlMessage(param_1);
          (**(code **)(param_1->_padding_ + 0x308))(param_1,0);
          return;
        }
        if (5 < (byte)LogBeacon._0_1_) {
          GetDebugName(this,&local_38,param_1);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        QueryPerformanceCounter(&local_res10);
        ::FString::PrintfImpl(&local_68,L"%08X");
        pFVar1 = &param_1->Challenge;
        if (pFVar1 != &local_68) {
          pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (pFVar1->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
          (param_1->Challenge).Data.ArrayNum = local_68.Data.ArrayNum;
          (param_1->Challenge).Data.ArrayMax = local_68.Data.ArrayMax;
          local_68.Data.ArrayNum = 0;
          local_68.Data.ArrayMax = 0;
          local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        pFVar4->bHasSentWelcome = true;
        UE::Net::TNetControlMessageImpl<25>::Send(param_1);
        (**(code **)(param_1->_padding_ + 0x308))(param_1,0);
        return;
      }
      if ((byte)LogBeacon._0_1_ < 5) {
        return;
      }
      local_res10 = (LARGE_INTEGER)param_1->_padding_;
      ::FName::ToString((FName *)&local_res10.s,&local_48);
      local_res10 = (LARGE_INTEGER)this->_padding_;
      ::FName::ToString((FName *)&local_res10.s,&local_38);
      ::FString::PrintfImpl(&local_58,L"%s[%s]");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// OnNetCleanup @ 14ec89240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AOnlineBeaconHost::OnNetCleanup(AOnlineBeaconHost *this,UNetConnection *param_1)

{
  FName local_res18;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (4 < (byte)LogBeacon._0_1_) {
    if (param_1 == (UNetConnection *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res18 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res18,&local_38);
    }
    local_res18 = (FName)this->_padding_;
    ::FName::ToString(&local_res18,&local_28);
    ::FString::PrintfImpl(&local_18,L"%s[%s]");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  OnConnectionClosed(this,param_1);
  return;
}

// RegisterHost @ 14ec8fd80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AOnlineBeaconHost::RegisterHost(AOnlineBeaconHost *this,AOnlineBeaconHostObject *param_1)

{
  AOnlineBeaconHostObject *pAVar1;
  TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy> *this_00;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
  *this_01;
  FName local_res10;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  pAVar1 = GetHost(this,&param_1->BeaconTypeName);
  if (pAVar1 == (AOnlineBeaconHostObject *)0x0) {
    (**(code **)(param_1->_padding_ + 0x500))(param_1,this);
    this_00 = OnBeaconSpawned(this,&param_1->BeaconTypeName);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_38);
    local_20 = &this_00->field_0x8;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6APEAVAOnlineBeaconClient__PEAVUNetConnection___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconHostObject____A6APEAVAOnlineBeaconClient__PEAVUNetConnection___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      puVar2[3] = 0;
      local_res10 = (FName)param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = AOnlineBeaconHostObject::_vcall__1888__flat______;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_38.Accessor._4_4_,local_38.Accessor._0_4_),&local_38);
    }
    this_01 = OnBeaconConnected(this,&param_1->BeaconTypeName);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
               (FWriteAccessScope *)&local_38);
    local_20 = &this_01->field_0x8;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_20);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVAOnlineBeaconClient__PEAVUNetConnection___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VAOnlineBeaconHostObject____A6AXPEAVAOnlineBeaconClient__PEAVUNetConnection___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      puVar2[3] = 0;
      local_res10 = (FName)param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = AOnlineBeaconHostObject::_vcall__1896__flat______;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_38.Accessor._4_4_,local_38.Accessor._0_4_),&local_38);
      return;
    }
  }
  else if (2 < (byte)LogBeacon._0_1_) {
    local_res10 = (FName)this->_padding_;
    ::FName::ToString(&local_res10,(FString *)&local_38);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
    if ((void *)local_38._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  return;
}

// RemoveClientActor @ 14ec91510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
AOnlineBeaconHost::RemoveClientActor(AOnlineBeaconHost *this,AOnlineBeaconClient *param_1)

{
  TObjectPtr<AOnlineBeaconClient>_u_0 local_res10 [3];
  
  if (param_1 != (AOnlineBeaconClient *)0x0) {
    local_res10[0].DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<AOnlineBeaconClient>,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
              (&this->ClientActors,(TObjectPtr<AOnlineBeaconClient> *)&local_res10[0].ObjectPtr,
               Default);
    if (((param_1->_padding_ & 0x20000000000) == 0) && (((uint)param_1->_padding_ >> 0x1e & 1) == 0)
       ) {
      AActor::Destroy((AActor *)param_1,false,true);
    }
  }
  return;
}

// SendFailurePacket @ 14ec945f0

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
AOnlineBeaconHost::SendFailurePacket
          (AOnlineBeaconHost *this,UNetConnection *param_1,TNetResult<ENetCloseResult> *param_2,
          FText *param_3)

{
  FScriptContainerElement *_Src;
  FString *pFVar1;
  longlong lVar2;
  FName local_res10;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FNetResult local_58;
  
  if (param_1 != (UNetConnection *)0x0) {
    pFVar1 = FText::ToString(param_3);
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = (pFVar1->Data).ArrayNum;
    lVar2 = (longlong)local_98.Data.ArrayNum;
    _Src = (pFVar1->Data).AllocatorInstance.Data;
    if (local_98.Data.ArrayNum == 0) {
      local_98.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)&local_98,local_98.Data.ArrayNum,
                 &local_98.Data.ArrayMax);
      memcpy(local_98.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
    }
    local_58.Result = *(ulong64 *)param_2;
    local_58.ResultEnumObj.WeakPtr.ObjectIndex = *(int *)&param_2->field_0x8;
    local_58.ResultEnumObj.WeakPtr.ObjectSerialNumber = *(int *)&param_2->field_0xc;
    local_58.RawResultEnumObj = *(void **)&param_2->field_0x10;
    ::FString::FString(&local_58.ErrorContext,(FString *)&param_2->field_0x18);
    local_58.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    if (*(longlong *)&param_2->field_0x28 != 0) {
      local_58.NextResult =
           (TPimplPtr<UE::Net::FNetResult,1>)(**(code **)(*(longlong *)&param_2->field_0x28 + -8))()
      ;
    }
    if (4 < (byte)LogBeacon._0_1_) {
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_78);
      local_res10 = (FName)this->_padding_;
      ::FName::ToString(&local_res10,&local_88);
      ::FString::PrintfImpl(&local_68,L"%s[%s]");
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    UNetConnection::SendCloseReason(param_1,&local_58);
    UE::Net::TNetControlMessageImpl<6,FString>::Send(param_1,&local_98);
    (**(code **)(param_1->_padding_ + 0x308))(param_1,1);
    UNetConnection::Close(param_1,(FNetResult *)param_2);
    if (local_58.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_58.NextResult + -0x10))((longlong)local_58.NextResult + -0x10);
    }
    if (local_58.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.ErrorContext.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StartVerifyAuthentication @ 14ec99390

bool __thiscall
AOnlineBeaconHost::StartVerifyAuthentication
          (AOnlineBeaconHost *this,FUniqueNetId *param_1,FString *param_2,FString *param_3,
          TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *param_4)

{
  return false;
}

// StaticRegisterNativesAOnlineBeaconHost @ 14ec994f0

void __cdecl AOnlineBeaconHost::StaticRegisterNativesAOnlineBeaconHost(void)

{
  return;
}

// UnregisterHost @ 14ec9f450

void __thiscall AOnlineBeaconHost::UnregisterHost(AOnlineBeaconHost *this,FString *param_1)

{
  AOnlineBeaconHostObject *pAVar1;
  TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
  *this_01;
  
  pAVar1 = GetHost(this,param_1);
  if (pAVar1 != (AOnlineBeaconHostObject *)0x0) {
    (**(code **)(pAVar1->_padding_ + 0x780))(pAVar1);
  }
  this_00 = OnBeaconSpawned(this,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  this_01 = OnBeaconConnected(this,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
  return;
}

// VerifyJoinForBeaconType @ 14ec9fdb0

bool __thiscall
AOnlineBeaconHost::VerifyJoinForBeaconType
          (AOnlineBeaconHost *this,FUniqueNetId *param_1,FString *param_2)

{
  return true;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 178

// GetAddrPort @ 14726ec80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall UNetConnection::GetAddrPort(UNetConnection *this)

{
  FInternetAddr *pFVar1;
  int iVar2;
  
  pFVar1 = (this->RemoteAddr).Object;
  if (pFVar1 != (FInternetAddr *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014726ec8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)((longlong)*pFVar1 + 0x38))();
    return iVar2;
  }
  return 0;
}

// GetRemoteAddr @ 147270320

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FInternetAddr_const_,1> * __thiscall
UNetConnection::GetRemoteAddr
          (UNetConnection *this,TSharedPtr<FInternetAddr_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->RemoteAddr).Object;
  pTVar1 = (this->RemoteAddr).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetUChildConnection @ 1472703c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChildConnection * __thiscall UNetConnection::GetUChildConnection(UNetConnection *this)

{
  return (UChildConnection *)0x0;
}

// GracefulClose @ 1472703d0

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
UNetConnection::GracefulClose(UNetConnection *this,TNetResult<ENetCloseResult> *param_1)

{
  uint uVar1;
  UNetDriver *pUVar2;
  code *pcVar3;
  bool bVar4;
  TPimplPtr<UE::Net::FNetResult,1> TVar5;
  ulong64 uStackX_8;
  FString FStack_28;
  void *apvStack_18 [2];
  
  this->bPendingDestroy = 1;
  if (((this->Channels).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(longlong *)(this->Channels).AllocatorInstance.Data != 0) && (this->State != USOCK_Closed))
  {
    if ((UE::Net::Connection::Private::bGracefulCloseEnabled != false) &&
       (this->State != USOCK_Closing)) {
      if (4 < (byte)LogNet._0_1_) {
        (**(code **)(this->_padding_ + 0x2e0))(this,apvStack_18);
        UE::Net::FNetResult::DynamicToString((FNetResult *)param_1,&FStack_28,WithChain);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
        }
        if (apvStack_18[0] != (void *)0x0) {
          FMemory::Free(apvStack_18[0]);
        }
      }
      TVar5 = MakePimpl<UE::Net::FNetResult,1,UE::Net::FNetResult>((FNetResult *)&uStackX_8);
      TPimplPtr<UE::Net::FNetResult,1>::operator=
                (&this->PendingGracefulCloseResult,(TPimplPtr<UE::Net::FNetResult,1> *)TVar5);
      if (uStackX_8 != 0) {
        (**(code **)(uStackX_8 - 0x10))(uStackX_8 - 0x10);
      }
      uVar1 = (this->ConnectionHandle).ParentConnectionId;
      this->State = USOCK_Closing;
      FNetTrace::TraceConnectionStateUpdated(this->NetTraceId,uVar1,'\x04');
      pUVar2 = (this->Driver).field0_0x0.DebugPtr;
      this->GracefulCloseTimeoutDeadline =
           (double)pUVar2->GracefulCloseConnectionTimeout + pUVar2->ElapsedTime;
      if (pUVar2->ReplicationSystem != (UReplicationSystem *)0x0) {
        UReplicationSystem::SetConnectionGracefullyClosing
                  (pUVar2->ReplicationSystem,(this->ConnectionHandle).ParentConnectionId);
      }
      TryClosePendingGracefulClose(this);
      return;
    }
    Close(this,(FNetResult *)param_1);
  }
  return;
}

// IsReplayReady @ 147270500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UNetConnection::IsReplayReady(UNetConnection *this)

{
  return false;
}

// NotifyActorNetGUID @ 147270580

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::NotifyActorNetGUID(UNetConnection *this,UActorChannel *param_1)

{
  return;
}

// RemoteAddressToString @ 1472706f0

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
UNetConnection::RemoteAddressToString(UNetConnection *this,FString *__return_storage_ptr__)

{
  FInternetAddr *pFVar1;
  
  pFVar1 = (this->RemoteAddr).Object;
  if (pFVar1 != (FInternetAddr *)0x0) {
    (**(code **)((longlong)*pFVar1 + 0x80))(pFVar1,__return_storage_ptr__,1);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"Invalid");
  return __return_storage_ptr__;
}

// StaticClass @ 1472708f0

UClass * __cdecl UNetConnection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNetConnection.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetConnection",
               &Z_Registration_Info_UClass_UNetConnection.InnerSingleton,
               StaticRegisterNativesUNetConnection,0x1f80,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetConnection>,InternalVTableHelperCtorCaller<UNetConnection>,
               aFStackX_8,UPlayer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetConnection.InnerSingleton;
}

// Close @ 147a38610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::Close(UNetConnection *this)

{
  UEnum *pUVar1;
  UEnum *local_res10;
  FNetResult local_38;
  
  pUVar1 = StaticEnum<enum_ENetCloseResult>();
  local_38.Result = 0xe;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_38.ResultEnumObj.WeakPtr.ObjectIndex = 0;
  local_38.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
  local_res10 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_38.ResultEnumObj.WeakPtr,(FObjectPtr)&local_res10);
  local_38.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ErrorContext.Data.ArrayNum = 0;
  local_38.ErrorContext.Data.ArrayMax = 0;
  local_38.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
  local_38.RawResultEnumObj = pUVar1;
  Close(this,&local_38);
  if (local_38.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    (**(code **)((longlong)local_38.NextResult + -0x10))((longlong)local_38.NextResult + -0x10);
  }
  if (local_38.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ErrorContext.Data.AllocatorInstance.Data);
  }
  return;
}

// RemoveActorChannel @ 147a7a540

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::RemoveActorChannel(UNetConnection *this,AActor *param_1)

{
  UReplicationConnectionDriver *pUVar1;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = (FWeakObjectPtr)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_res10 = local_res8;
  if (*(int *)&(this->ActorChannels).field_0x8 != *(int *)&(this->ActorChannels).field_0x34) {
    TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>_>
              ((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                *)&this->ActorChannels,local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
               (TWeakObjectPtr<AActor_const_,FWeakObjectPtr> *)&local_res10);
  }
  pUVar1 = this->ReplicationConnectionDriver;
  if (pUVar1 != (UReplicationConnectionDriver *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x2b8))(pUVar1,param_1);
  }
  return;
}

// <lambda_invoker_cdecl> @ 147f91d40

EHandleNetResult __cdecl
`UNetConnection::InitBase'::__l22::<lambda_1>::<lambda_invoker_cdecl>(FNetResult *param_1)

{
  EHandleNetResult EVar1;
  undefined1 local_res10 [24];
  
  EVar1 = operator()(local_res10,param_1);
  return EVar1;
}

// UNetConnection @ 147fa6250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNetConnection * __thiscall
UNetConnection::UNetConnection(UNetConnection *this,FVTableHelper *param_1)

{
  FWrittenChannelsRecord *this_00;
  
  UPlayer::UPlayer((UPlayer *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  (this->Driver).field0_0x0.DebugPtr = (UNetDriver *)0x0;
  (this->PackageMapClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PackageMap).field0_0x0.DebugPtr = (UPackageMap *)0x0;
  (this->OpenChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenChannels).ArrayNum = 0;
  (this->OpenChannels).ArrayMax = 0;
  (this->SentTemporaries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SentTemporaries).ArrayNum = 0;
  (this->SentTemporaries).ArrayMax = 0;
  (this->ViewTarget).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->OwningActor).field0_0x0.DebugPtr = (AActor *)0x0;
  *(undefined8 *)&this->ChildrenLookup = 0;
  *(undefined8 *)&(this->ChildrenLookup).field_0x8 = 0;
  *(undefined8 *)&(this->ChildrenLookup).field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  *(undefined4 *)&(this->ChildrenLookup).field_0x28 = 0;
  *(undefined4 *)&(this->ChildrenLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChildrenLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChildrenLookup).field_0x34 = 0;
  *(undefined8 *)&(this->ChildrenLookup).field_0x40 = 0;
  *(undefined4 *)&(this->ChildrenLookup).field_0x48 = 0;
  this->NextServerNetPlayerIndex = 1;
  FURL::FURL(&this->URL,(wchar_t *)0x0);
  (this->RemoteAddr).Object = (FInternetAddr *)0x0;
  (this->PlayerId)._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  (this->RemoteAddr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->ClientHandshakeId = 0;
  (this->Handler).Ptr = (PacketHandler *)0x0;
  (this->StatelessConnectComponent).Object = (StatelessConnectHandlerComponent *)0x0;
  (this->StatelessConnectComponent).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PlayerId)._padding_ = 0;
  (this->PlayerId)._padding_ = 0;
  *(undefined1 *)&(this->PlayerId)._padding_ = 0;
  (this->PlayerId).ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerId).ReplicationBytes.ArrayNum = 0;
  (this->PlayerId).ReplicationBytes.ArrayMax = 0;
  (this->Challenge).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Challenge).Data.ArrayNum = 0;
  (this->Challenge).Data.ArrayMax = 0;
  (this->ClientResponse).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClientResponse).Data.ArrayNum = 0;
  (this->ClientResponse).Data.ArrayMax = 0;
  (this->RequestURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestURL).Data.ArrayNum = 0;
  (this->RequestURL).Data.ArrayMax = 0;
  (this->LastOSReceiveTime).Timestamp.Ticks = 0;
  this->bSendBufferHasDummyPacketInfo = false;
  (this->HeaderMarkForPacketInfo).Overflowed = false;
  (this->HeaderMarkForPacketInfo).Num = 0;
  (this->LastStart).Overflowed = false;
  (this->LastStart).Num = 0;
  (this->LastEnd).Overflowed = false;
  (this->LastEnd).Num = 0;
  FOutBunch::FOutBunch(&this->LastOut);
  FBitWriter::FBitWriter(&this->SendBunchHeader);
  this->RawPingInSeconds = 0.0;
  this->InPacketsThisFrame = 0;
  this->OutPacketsThisFrame = 0;
  this->TotalDelayedRPCs = 0;
  this->TotalDelayedRPCsFrameCount = 0;
  this->GracefulCloseTimeoutDeadline = 0.0;
  (this->InPacketsLossPercentage).LossSamples[0] = 0.0;
  (this->InPacketsLossPercentage).LossSamples[1] = 0.0;
  (this->InPacketsLossPercentage).LossSamples[2] = 0.0;
  (this->InPacketsLossPercentage).TotalPacketsAtPeriodStart = 0;
  (this->InPacketsLossPercentage).LossPercentage = 0.0;
  *(undefined8 *)&(this->InPacketsLossPercentage).AvgLossPercentage = 0;
  (this->OutPacketsLossPercentage).LossSamples[1] = 0.0;
  (this->OutPacketsLossPercentage).LossSamples[2] = 0.0;
  (this->OutPacketsLossPercentage).TotalPacketsAtPeriodStart = 0;
  (this->OutPacketsLossPercentage).LossPercentage = 0.0;
  (this->OutPacketsLossPercentage).AvgLossPercentage = 0.0;
  FNetConnAnalyticsVars::FNetConnAnalyticsVars(&this->AnalyticsVars);
  (this->NetAnalyticsData).Object = (FNetConnAnalyticsData *)0x0;
  (this->NetAnalyticsData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FBitWriter::FBitWriter(&this->SendBuffer);
  this->OutFirstAckPacketId = -1;
  (this->Channels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Channels).ArrayNum = 0;
  (this->Channels).ArrayMax = 0;
  (this->OutReliable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutReliable).ArrayNum = 0;
  (this->OutReliable).ArrayMax = 0;
  (this->InReliable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InReliable).ArrayNum = 0;
  (this->InReliable).ArrayMax = 0;
  (this->PendingOutRec).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingOutRec).ArrayNum = 0;
  (this->PendingOutRec).ArrayMax = 0;
  (this->NetworkCustomVersions).Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetworkCustomVersions).Versions.ArrayNum = 0;
  (this->NetworkCustomVersions).Versions.ArrayMax = 0;
  *(undefined8 *)&this->ActorChannels = 0;
  *(undefined8 *)&(this->ActorChannels).field_0x8 = 0;
  *(undefined8 *)&(this->ActorChannels).field_0x20 = 0;
  *(undefined4 *)&(this->ActorChannels).field_0x28 = 0;
  *(undefined4 *)&(this->ActorChannels).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActorChannels).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActorChannels).field_0x34 = 0;
  *(undefined8 *)&(this->ActorChannels).field_0x40 = 0;
  *(undefined4 *)&(this->ActorChannels).field_0x48 = 0;
  (this->PackageVersionUE).FileVersionUE4 = 0;
  (this->PackageVersionUE).FileVersionUE5 = 0;
  *(undefined4 *)&(this->EngineVersion)._padding_ = 0;
  *(undefined2 *)((longlong)&(this->EngineVersion)._padding_ + 4) = 0;
  *(undefined4 *)&(this->EngineVersion)._padding_ = 0;
  (this->EngineVersion).Branch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineVersion).Branch.Data.ArrayNum = 0;
  (this->EngineVersion).Branch.Data.ArrayMax = 0;
  *(undefined8 *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements = 0;
  *(undefined8 *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0x34 = 0;
  (this->DestroyedStartupOrDormantActorGUIDs).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->DestroyedStartupOrDormantActorGUIDs).HashSize = 0;
  *(undefined8 *)&(this->ClientMakingVisibleLevelNames).Elements = 0;
  *(undefined8 *)&(this->ClientMakingVisibleLevelNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ClientMakingVisibleLevelNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ClientMakingVisibleLevelNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ClientMakingVisibleLevelNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ClientMakingVisibleLevelNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClientMakingVisibleLevelNames).Elements.field_0x34 = 0;
  (this->ClientMakingVisibleLevelNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ClientMakingVisibleLevelNames).HashSize = 0;
  *(undefined8 *)&this->KeepProcessingActorChannelBunchesMap = 0;
  *(undefined8 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x8 = 0;
  *(undefined8 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x20 = 0;
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x28 = 0;
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x34 = 0;
  *(undefined8 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x40 = 0;
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x48 = 0;
  *(undefined8 *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements = 0;
  *(undefined8 *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x34 = 0;
  (this->DormantReplicatorSet).ActorReplicatorSet.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->DormantReplicatorSet).ActorReplicatorSet.HashSize = 0;
  *(undefined8 *)&(this->DormantReplicatorSet).FlushedObjectMap = 0;
  *(undefined8 *)&(this->DormantReplicatorSet).FlushedObjectMap.field_0x8 = 0;
  *(undefined8 *)&(this->DormantReplicatorSet).FlushedObjectMap.field_0x20 = 0;
  *(undefined4 *)&(this->DormantReplicatorSet).FlushedObjectMap.field_0x28 = 0;
  *(undefined4 *)&(this->DormantReplicatorSet).FlushedObjectMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->DormantReplicatorSet).FlushedObjectMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DormantReplicatorSet).FlushedObjectMap.field_0x34 = 0;
  *(undefined8 *)&(this->DormantReplicatorSet).FlushedObjectMap.field_0x40 = 0;
  *(undefined4 *)&(this->DormantReplicatorSet).FlushedObjectMap.field_0x48 = 0;
  *(undefined8 *)&(this->ClientVisibleLevelNames).Elements = 0;
  *(undefined8 *)&(this->ClientVisibleLevelNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ClientVisibleLevelNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ClientVisibleLevelNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ClientVisibleLevelNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ClientVisibleLevelNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClientVisibleLevelNames).Elements.field_0x34 = 0;
  (this->ClientVisibleLevelNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ClientVisibleLevelNames).HashSize = 0;
  (this->PacketSimulationSettings).PktLoss = 0;
  (this->PacketSimulationSettings).PktLossMaxSize = 0;
  (this->PacketSimulationSettings).PktLossMinSize = 0;
  (this->PacketSimulationSettings).PktOrder = 0;
  (this->PacketSimulationSettings).PktDup = 0;
  (this->PacketSimulationSettings).PktLag = 0;
  (this->PacketSimulationSettings).PktLagVariance = 0;
  (this->PacketSimulationSettings).PktLagMin = 0;
  (this->PacketSimulationSettings).PktLagMax = 0;
  (this->PacketSimulationSettings).PktIncomingLagMin = 0;
  (this->PacketSimulationSettings).PktIncomingLagMax = 0;
  (this->PacketSimulationSettings).PktIncomingLoss = 0;
  (this->PacketSimulationSettings).PktJitter = 0;
  (this->PacketSimulationSettings).PktFrameDelay = 0;
  (this->PacketSimulationSettings).PktIncomingFrameDelay = 0;
  (this->PacketSimulationSettings).PktBufferBloatInMS = 0;
  (this->PacketSimulationSettings).PktIncomingBufferBloatInMS = 0;
  (this->Delayed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Delayed).ArrayNum = 0;
  (this->Delayed).ArrayMax = 0;
  (this->DelayedIncomingPackets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DelayedIncomingPackets).ArrayNum = 0;
  (this->DelayedIncomingPackets).ArrayMax = 0;
  this->bSendDelayedPacketsOutofOrder = false;
  this->bIsReinjectingDelayedPackets = false;
  this->NextBufferBloatFlushOut = 0.0;
  this->NextBufferBloatFlushIn = 0.0;
  this->NextBufferBloatActiveTimeOut = 0.0;
  this->NextBufferBloatActiveTimeIn = 0.0;
  *(undefined8 *)&this->ReceivedRawPacketDel = 0;
  *(undefined8 *)&(this->ReceivedRawPacketDel).field_0x8 = 0;
  *(undefined4 *)&(this->ReceivedRawPacketDel).field_0x10 = 0;
  *(undefined8 *)&this->LowLevelSendDel = 0;
  *(undefined8 *)&(this->LowLevelSendDel).field_0x8 = 0;
  *(undefined4 *)&(this->LowLevelSendDel).field_0x10 = 0;
  *(undefined8 *)&this->OnConnectionOpened = 0;
  *(undefined8 *)&(this->OnConnectionOpened).field_0x8 = 0;
  *(undefined8 *)&(this->OnConnectionOpened).field_0x10 = 0;
  *(undefined8 *)&(this->OnConnectionOpened).field_0x18 = 2;
  *(undefined8 *)&this->PlayerConnectionFunction = 0;
  *(undefined8 *)&(this->PlayerConnectionFunction).field_0x28 = 0;
  (this->ChannelsToTick).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelsToTick).ArrayNum = 0;
  (this->ChannelsToTick).ArrayMax = 0;
  (this->NetConnectionHistogram).Bins.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetConnectionHistogram).Bins.ArrayNum = 0;
  (this->NetConnectionHistogram).Bins.ArrayMax = 0;
  (this->PlayerOnlinePlatformName).ComparisonIndex = 0;
  (this->PlayerOnlinePlatformName).Number = 0;
  *(undefined8 *)&this->ClientVisibleActorOuters = 0;
  *(undefined8 *)&(this->ClientVisibleActorOuters).field_0x8 = 0;
  *(undefined8 *)&(this->ClientVisibleActorOuters).field_0x20 = 0;
  *(undefined4 *)&(this->ClientVisibleActorOuters).field_0x28 = 0;
  *(undefined4 *)&(this->ClientVisibleActorOuters).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClientVisibleActorOuters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClientVisibleActorOuters).field_0x34 = 0;
  *(undefined8 *)&(this->ClientVisibleActorOuters).field_0x40 = 0;
  *(undefined4 *)&(this->ClientVisibleActorOuters).field_0x48 = 0;
  *(undefined8 *)&this->PendingUpdateLevelVisibility = 0;
  *(undefined8 *)&(this->PendingUpdateLevelVisibility).field_0x8 = 0;
  *(undefined8 *)&(this->PendingUpdateLevelVisibility).field_0x20 = 0;
  *(undefined4 *)&(this->PendingUpdateLevelVisibility).field_0x28 = 0;
  *(undefined4 *)&(this->PendingUpdateLevelVisibility).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingUpdateLevelVisibility).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingUpdateLevelVisibility).field_0x34 = 0;
  *(undefined8 *)&(this->PendingUpdateLevelVisibility).field_0x40 = 0;
  *(undefined4 *)&(this->PendingUpdateLevelVisibility).field_0x48 = 0;
  *(undefined8 *)&this->ClientPendingStreamingStatusRequest = 0;
  *(undefined8 *)&(this->ClientPendingStreamingStatusRequest).field_0x8 = 0;
  *(undefined8 *)&(this->ClientPendingStreamingStatusRequest).field_0x20 = 0;
  *(undefined4 *)&(this->ClientPendingStreamingStatusRequest).field_0x28 = 0;
  *(undefined4 *)&(this->ClientPendingStreamingStatusRequest).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClientPendingStreamingStatusRequest).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClientPendingStreamingStatusRequest).field_0x34 = 0;
  *(undefined8 *)&(this->ClientPendingStreamingStatusRequest).field_0x40 = 0;
  *(undefined4 *)&(this->ClientPendingStreamingStatusRequest).field_0x48 = 0;
  (this->ClientWorldPackageName).ComparisonIndex = 0;
  (this->ClientWorldPackageName).Number = 0;
  *(undefined8 *)&this->ActorsStarvedByClassTimeMap = 0;
  *(undefined8 *)&(this->ActorsStarvedByClassTimeMap).field_0x8 = 0;
  *(undefined8 *)&(this->ActorsStarvedByClassTimeMap).field_0x20 = 0;
  *(undefined4 *)&(this->ActorsStarvedByClassTimeMap).field_0x28 = 0;
  *(undefined4 *)&(this->ActorsStarvedByClassTimeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActorsStarvedByClassTimeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActorsStarvedByClassTimeMap).field_0x34 = 0;
  *(undefined8 *)&(this->ActorsStarvedByClassTimeMap).field_0x40 = 0;
  *(undefined4 *)&(this->ActorsStarvedByClassTimeMap).field_0x48 = 0;
  *(undefined8 *)&this->IgnoringChannels = 0;
  *(undefined8 *)&(this->IgnoringChannels).field_0x8 = 0;
  *(undefined8 *)&(this->IgnoringChannels).field_0x20 = 0;
  *(undefined4 *)&(this->IgnoringChannels).field_0x28 = 0;
  *(undefined4 *)&(this->IgnoringChannels).field_0x2c = 0x80;
  *(undefined4 *)&(this->IgnoringChannels).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IgnoringChannels).field_0x34 = 0;
  *(undefined8 *)&(this->IgnoringChannels).field_0x40 = 0;
  *(undefined4 *)&(this->IgnoringChannels).field_0x48 = 0;
  *(undefined8 *)&this->ChannelIndexMap = 0;
  *(undefined8 *)&(this->ChannelIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChannelIndexMap).field_0x20 = 0;
  this_00 = &this->ChannelRecord;
  *(undefined4 *)&(this->ChannelIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->ChannelIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChannelIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChannelIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->ChannelIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->ChannelIndexMap).field_0x48 = 0;
  *(undefined8 *)&(this->IgnoredBunchGuids).Elements = 0;
  *(undefined8 *)&(this->IgnoredBunchGuids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->IgnoredBunchGuids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->IgnoredBunchGuids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->IgnoredBunchGuids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->IgnoredBunchGuids).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IgnoredBunchGuids).Elements.field_0x34 = 0;
  (this->IgnoredBunchGuids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->IgnoredBunchGuids).HashSize = 0;
  *(undefined8 *)&(this->IgnoredBunchChannels).Elements = 0;
  *(undefined8 *)&(this->IgnoredBunchChannels).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->IgnoredBunchChannels).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->IgnoredBunchChannels).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->IgnoredBunchChannels).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->IgnoredBunchChannels).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IgnoredBunchChannels).Elements.field_0x34 = 0;
  (this->IgnoredBunchChannels).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->IgnoredBunchChannels).HashSize = 0;
  *(undefined8 *)&(this->ReservedChannels).Elements = 0;
  *(undefined8 *)&(this->ReservedChannels).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReservedChannels).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReservedChannels).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReservedChannels).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReservedChannels).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReservedChannels).Elements.field_0x34 = 0;
  (this->ReservedChannels).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReservedChannels).HashSize = 0;
  (this->OutgoingBunches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutgoingBunches).ArrayNum = 0;
  (this->OutgoingBunches).ArrayMax = 0;
  (this_00->ChannelRecord).Head = 0;
  (this_00->ChannelRecord).Tail = 0;
  (this->ChannelRecord).ChannelRecord.IndexMask = 0;
  (this->ChannelRecord).ChannelRecord.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ChannelRecord).ChannelRecord.Storage.ArrayNum = 0;
  (this->ChannelRecord).ChannelRecord.Storage.ArrayMax = 0;
  TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>::
  SetCapacity(&this_00->ChannelRecord,0x400);
  (this->ChannelRecord).LastPacketId = -1;
  FNetPacketNotify::FNetPacketNotify(&this->PacketNotify);
  (this->PacketAnalytics).bSawPacketLossBurstThisFrame = false;
  this->TotalOutOfOrderPacketsLost = 0;
  this->TotalOutOfOrderPacketsRecovered = 0;
  this->TotalOutOfOrderPacketsDuplicate = 0;
  (this->PacketOrderCache).bIsSet = false;
  (this->SaturationAnalytics).NumberOfTrackedFrames = 0;
  (this->SaturationAnalytics).NumberOfSaturatedFrames = 0;
  (this->SaturationAnalytics).LongestRunOfSaturatedFrames = 0;
  (this->SaturationAnalytics).NumberOfReplications = 0;
  (this->SaturationAnalytics).NumberOfSaturatedReplications = 0;
  (this->SaturationAnalytics).LongestRunOfSaturatedReplications = 0;
  (this->SaturationAnalytics).CurrentRunOfSaturatedFrames = 0;
  (this->SaturationAnalytics).CurrentRunOfSaturatedReplications = 0;
  (this->PacketAnalytics).NumberOfAcksThisFrame = 0;
  (this->PacketAnalytics).NumberOfNaksThisFrame = 0;
  (this->PacketAnalytics).NumberOfMissingPacketsThisFrame = 0;
  (this->PacketAnalytics).NumberOfPacketsThisFrame = 0;
  (this->PacketAnalytics).CurrentRunOfDroppedOutPackets = 0;
  (this->PacketAnalytics).LongestRunOfDroppedOutPackets = 0;
  (this->PacketAnalytics).LongestRunOfDroppedInPackets = 0;
  (this->PacketAnalytics).NumberOfFramesWithBurstsOfPacketLoss = 0;
  (this->PacketAnalytics).NumberOfFramesWithNoPackets = 0;
  (this->PacketAnalytics).NumberOfTrackedFrames = 0;
  (this->ConnectionHandle).ParentConnectionId = 0;
  (this->ConnectionHandle).ChildConnectionId = 0;
  this->InTraceCollector = (FNetTraceCollector *)0x0;
  this->OutTraceCollector = (FNetTraceCollector *)0x0;
  this->NetTraceId = 0;
  this->bFlushedNetThisFrame = false;
  this->bLoggedFlushNetQueuedBitsOverflow = false;
  (this->RPCDoS).Ptr = (FRPCDoSDetection *)0x0;
  (this->FaultRecovery).Ptr = (FNetConnectionFaultRecovery *)0x0;
  this->bReceivedCloseReason = false;
  this->PendingGracefulCloseResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
  (this->NetPing).Ptr = (FNetPing *)0x0;
  (this->NetworkCongestionControl).bIsSet = false;
  return this;
}

// UNetConnection @ 147fa6b00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNetConnection * __thiscall
UNetConnection::UNetConnection(UNetConnection *this,FObjectInitializer *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  FCustomVersionContainer *pFVar3;
  FWrittenChannelsRecord *this_00;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  UClass *pUVar6;
  FCustomVersionContainer *pFVar7;
  
  UPlayer::UPlayer((UPlayer *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  (this->Driver).field0_0x0.DebugPtr = (UNetDriver *)0x0;
  pUVar6 = Z_Construct_UClass_UPackageMapClient_NoRegister();
  (this->PackageMapClass).Class.field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->PackageMap).field0_0x0.DebugPtr = (UPackageMap *)0x0;
  (this->OpenChannels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenChannels).ArrayNum = 0;
  (this->OpenChannels).ArrayMax = 0;
  (this->SentTemporaries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SentTemporaries).ArrayNum = 0;
  (this->SentTemporaries).ArrayMax = 0;
  (this->ViewTarget).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->OwningActor).field0_0x0.DebugPtr = (AActor *)0x0;
  *(undefined8 *)&this->ChildrenLookup = 0;
  *(undefined8 *)&(this->ChildrenLookup).field_0x8 = 0;
  *(undefined8 *)&(this->ChildrenLookup).field_0x20 = 0;
  this->MaxPacket = 0;
  *(undefined4 *)&(this->ChildrenLookup).field_0x28 = 0;
  *(undefined4 *)&(this->ChildrenLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChildrenLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChildrenLookup).field_0x34 = 0;
  *(undefined8 *)&(this->ChildrenLookup).field_0x40 = 0;
  *(undefined4 *)&(this->ChildrenLookup).field_0x48 = 0;
  this->bInternalAck = 0;
  this->bUnlimitedBunchSizeAllowed = 0;
  this->bForceInitialDirty = 0;
  this->bReplay = 0;
  this->NextServerNetPlayerIndex = 1;
  FURL::FURL(&this->URL,(wchar_t *)0x0);
  (this->RemoteAddr).Object = (FInternetAddr *)0x0;
  (this->PlayerId)._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  (this->RemoteAddr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Handler).Ptr = (PacketHandler *)0x0;
  (this->StatelessConnectComponent).Object = (StatelessConnectHandlerComponent *)0x0;
  (this->StatelessConnectComponent).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PlayerId)._padding_ = 0;
  (this->PlayerId)._padding_ = 0;
  *(undefined1 *)&(this->PlayerId)._padding_ = 0;
  (this->PlayerId).ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerId).ReplicationBytes.ArrayNum = 0;
  (this->PlayerId).ReplicationBytes.ArrayMax = 0;
  (this->Challenge).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Challenge).Data.ArrayNum = 0;
  (this->Challenge).Data.ArrayMax = 0;
  (this->ClientResponse).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClientResponse).Data.ArrayNum = 0;
  (this->ClientResponse).Data.ArrayMax = 0;
  (this->RequestURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestURL).Data.ArrayNum = 0;
  (this->RequestURL).Data.ArrayMax = 0;
  this->MaxPacketHandlerBits = 0;
  this->State = USOCK_Invalid;
  this->ClientHandshakeId = 0;
  this->PacketOverhead = 0;
  this->ResponseId = 0;
  this->QueuedBits = 0;
  this->TickCount = 0;
  this->LastProcessedFrame = 0;
  (this->LastOSReceiveTime).Timestamp.Ticks = 0;
  this->bIsOSReceiveTimeLocal = false;
  this->bSendBufferHasDummyPacketInfo = false;
  (this->HeaderMarkForPacketInfo).Overflowed = false;
  (this->HeaderMarkForPacketInfo).Num = 0;
  this->PreviousJitterTimeDelta = 0;
  this->PreviousPacketSendTimeInS = 0.0;
  (this->LastStart).Overflowed = false;
  (this->LastStart).Num = 0;
  (this->LastEnd).Overflowed = false;
  (this->LastEnd).Num = 0;
  this->AllowMerge = false;
  this->TimeSensitive = false;
  this->LastOutBunch = (FOutBunch *)0x0;
  FOutBunch::FOutBunch(&this->LastOut);
  FBitWriter::FBitWriter(&this->SendBunchHeader,0x100,false);
  this->StatPeriod = 1.0;
  this->AvgLag = 0.0;
  this->LagAcc = 0.0;
  this->LagCount = 0;
  this->LastTime = 0.0;
  this->FrameTime = 0.0;
  this->CumulativeTime = 0.0;
  this->AverageFrameTime = 0.0;
  this->RawPingInSeconds = 0.0;
  this->CountedFrames = 0;
  this->InBytes = 0;
  this->OutBytes = 0;
  this->InTotalBytes = 0;
  this->OutTotalBytes = 0;
  this->InPackets = 0;
  this->OutPackets = 0;
  this->InPacketsThisFrame = 0;
  this->OutPacketsThisFrame = 0;
  this->InTotalPackets = 0;
  this->OutTotalPackets = 0;
  this->InBytesPerSecond = 0;
  this->OutBytesPerSecond = 0;
  this->InPacketsPerSecond = 0;
  this->OutPacketsPerSecond = 0;
  this->InTotalPacketsLost = 0;
  this->OutTotalPacketsLost = 0;
  this->OutTotalAcks = 0;
  this->TotalDelayedRPCs = 0;
  this->TotalDelayedRPCsFrameCount = 0;
  this->GracefulCloseTimeoutDeadline = 0.0;
  (this->InPacketsLossPercentage).LossSamples[0] = 0.0;
  (this->InPacketsLossPercentage).LossSamples[1] = 0.0;
  (this->InPacketsLossPercentage).LossSamples[2] = 0.0;
  (this->InPacketsLossPercentage).TotalPacketsAtPeriodStart = 0;
  (this->InPacketsLossPercentage).LossPercentage = 0.0;
  *(undefined8 *)&(this->InPacketsLossPercentage).AvgLossPercentage = 0;
  (this->OutPacketsLossPercentage).LossSamples[1] = 0.0;
  (this->OutPacketsLossPercentage).LossSamples[2] = 0.0;
  (this->OutPacketsLossPercentage).TotalPacketsAtPeriodStart = 0;
  (this->OutPacketsLossPercentage).LossPercentage = 0.0;
  *(undefined8 *)&(this->OutPacketsLossPercentage).AvgLossPercentage = 0;
  this->AverageJitterInMS = 0.0;
  FNetConnAnalyticsVars::FNetConnAnalyticsVars(&this->AnalyticsVars);
  (this->NetAnalyticsData).Object = (FNetConnAnalyticsData *)0x0;
  (this->NetAnalyticsData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FBitWriter::FBitWriter(&this->SendBuffer,0,false);
  (this->Channels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar3 = &this->NetworkCustomVersions;
  (this->NetworkCustomVersions).Versions.ArrayMax = 0;
  piVar1 = &(this->NetworkCustomVersions).Versions.ArrayMax;
  (this->Channels).ArrayNum = 0;
  (this->Channels).ArrayMax = 0;
  (this->OutReliable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutReliable).ArrayNum = 0;
  (this->OutReliable).ArrayMax = 0;
  (this->InReliable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InReliable).ArrayNum = 0;
  (this->InReliable).ArrayMax = 0;
  (this->PendingOutRec).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingOutRec).ArrayNum = 0;
  (this->PendingOutRec).ArrayMax = 0;
  (pFVar3->Versions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetworkCustomVersions).Versions.ArrayNum = 0;
  *(undefined8 *)&this->ActorChannels = 0;
  *(undefined8 *)&(this->ActorChannels).field_0x8 = 0;
  *(undefined8 *)&(this->ActorChannels).field_0x20 = 0;
  this->InPacketId = -1;
  this->OutPacketId = 0;
  this->OutAckPacketId = -1;
  this->OutFirstAckPacketId = -1;
  this->bLastHasServerFrameTime = false;
  this->DefaultMaxChannelSize = 0x7fff;
  this->InitOutReliable = 0;
  this->InitInReliable = 0;
  *(undefined4 *)&(this->ActorChannels).field_0x28 = 0;
  *(undefined4 *)&(this->ActorChannels).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActorChannels).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActorChannels).field_0x34 = 0;
  *(undefined8 *)&(this->ActorChannels).field_0x40 = 0;
  *(undefined4 *)&(this->ActorChannels).field_0x48 = 0;
  this->PackageVersionUE = GPackageFileUEVersion;
  this->PackageVersionLicenseeUE = GPackageFileLicenseeUEVersion;
  *(undefined4 *)&(this->EngineVersion)._padding_ = 0;
  *(undefined2 *)((longlong)&(this->EngineVersion)._padding_ + 4) = 0;
  *(undefined4 *)&(this->EngineVersion)._padding_ = 0;
  (this->EngineVersion).Branch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineVersion).Branch.Data.ArrayNum = 0;
  (this->EngineVersion).Branch.Data.ArrayMax = 0;
  *(undefined8 *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements = 0;
  *(undefined8 *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0x34 = 0;
  (this->DestroyedStartupOrDormantActorGUIDs).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->DestroyedStartupOrDormantActorGUIDs).HashSize = 0;
  *(undefined8 *)&(this->ClientMakingVisibleLevelNames).Elements = 0;
  *(undefined8 *)&(this->ClientMakingVisibleLevelNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ClientMakingVisibleLevelNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ClientMakingVisibleLevelNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ClientMakingVisibleLevelNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ClientMakingVisibleLevelNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClientMakingVisibleLevelNames).Elements.field_0x34 = 0;
  (this->ClientMakingVisibleLevelNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ClientMakingVisibleLevelNames).HashSize = 0;
  *(undefined8 *)&this->KeepProcessingActorChannelBunchesMap = 0;
  *(undefined8 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x8 = 0;
  *(undefined8 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x20 = 0;
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x28 = 0;
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x34 = 0;
  *(undefined8 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x40 = 0;
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x48 = 0;
  *(undefined8 *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements = 0;
  *(undefined8 *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x34 = 0;
  (this->DormantReplicatorSet).ActorReplicatorSet.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->DormantReplicatorSet).ActorReplicatorSet.HashSize = 0;
  *(undefined8 *)&(this->DormantReplicatorSet).FlushedObjectMap = 0;
  *(undefined8 *)&(this->DormantReplicatorSet).FlushedObjectMap.field_0x8 = 0;
  *(undefined8 *)&(this->DormantReplicatorSet).FlushedObjectMap.field_0x20 = 0;
  *(undefined4 *)&(this->DormantReplicatorSet).FlushedObjectMap.field_0x28 = 0;
  *(undefined4 *)&(this->DormantReplicatorSet).FlushedObjectMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->DormantReplicatorSet).FlushedObjectMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DormantReplicatorSet).FlushedObjectMap.field_0x34 = 0;
  *(undefined8 *)&(this->DormantReplicatorSet).FlushedObjectMap.field_0x40 = 0;
  *(undefined4 *)&(this->DormantReplicatorSet).FlushedObjectMap.field_0x48 = 0;
  *(undefined8 *)&(this->ClientVisibleLevelNames).Elements = 0;
  *(undefined8 *)&(this->ClientVisibleLevelNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ClientVisibleLevelNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ClientVisibleLevelNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ClientVisibleLevelNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ClientVisibleLevelNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClientVisibleLevelNames).Elements.field_0x34 = 0;
  (this->ClientVisibleLevelNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ClientVisibleLevelNames).HashSize = 0;
  (this->PacketSimulationSettings).PktLoss = 0;
  (this->PacketSimulationSettings).PktLossMaxSize = 0;
  (this->PacketSimulationSettings).PktLossMinSize = 0;
  (this->PacketSimulationSettings).PktOrder = 0;
  (this->PacketSimulationSettings).PktDup = 0;
  (this->PacketSimulationSettings).PktLag = 0;
  (this->PacketSimulationSettings).PktLagVariance = 0;
  (this->PacketSimulationSettings).PktLagMin = 0;
  (this->PacketSimulationSettings).PktLagMax = 0;
  (this->PacketSimulationSettings).PktIncomingLagMin = 0;
  (this->PacketSimulationSettings).PktIncomingLagMax = 0;
  (this->PacketSimulationSettings).PktIncomingLoss = 0;
  (this->PacketSimulationSettings).PktJitter = 0;
  (this->PacketSimulationSettings).PktFrameDelay = 0;
  (this->PacketSimulationSettings).PktIncomingFrameDelay = 0;
  (this->PacketSimulationSettings).PktBufferBloatInMS = 0;
  (this->PacketSimulationSettings).PktIncomingBufferBloatInMS = 0;
  (this->Delayed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Delayed).ArrayNum = 0;
  (this->Delayed).ArrayMax = 0;
  (this->DelayedIncomingPackets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DelayedIncomingPackets).ArrayNum = 0;
  (this->DelayedIncomingPackets).ArrayMax = 0;
  this->bSendDelayedPacketsOutofOrder = false;
  this->bIsReinjectingDelayedPackets = false;
  this->NextBufferBloatFlushOut = 0.0;
  this->NextBufferBloatFlushIn = 0.0;
  this->NextBufferBloatActiveTimeOut = 0.0;
  this->NextBufferBloatActiveTimeIn = 0.0;
  this->ResendAllDataState = None;
  *(undefined8 *)&(this->ReceivedRawPacketDel).field_0x10 = 0;
  *(undefined8 *)&this->ReceivedRawPacketDel = 0;
  *(undefined8 *)&(this->ReceivedRawPacketDel).field_0x8 = 0;
  *(undefined8 *)&this->LowLevelSendDel = 0;
  *(undefined8 *)&(this->LowLevelSendDel).field_0x8 = 0;
  *(undefined4 *)&(this->LowLevelSendDel).field_0x10 = 0;
  *(undefined8 *)&this->OnConnectionOpened = 0;
  *(undefined8 *)&(this->OnConnectionOpened).field_0x8 = 0;
  *(undefined8 *)&(this->OnConnectionOpened).field_0x10 = 0;
  *(undefined8 *)&(this->OnConnectionOpened).field_0x18 = 2;
  *(undefined8 *)&this->PlayerConnectionFunction = 0;
  *(undefined8 *)&(this->PlayerConnectionFunction).field_0x28 = 0;
  (this->ChannelsToTick).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelsToTick).ArrayNum = 0;
  (this->ChannelsToTick).ArrayMax = 0;
  (this->NetConnectionHistogram).Bins.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetConnectionHistogram).Bins.ArrayNum = 0;
  (this->NetConnectionHistogram).Bins.ArrayMax = 0;
  (this->PlayerOnlinePlatformName).ComparisonIndex = 0;
  (this->PlayerOnlinePlatformName).Number = 0;
  *(undefined8 *)&this->ClientVisibleActorOuters = 0;
  *(undefined8 *)&(this->ClientVisibleActorOuters).field_0x8 = 0;
  *(undefined8 *)&(this->ClientVisibleActorOuters).field_0x20 = 0;
  *(undefined4 *)&(this->ClientVisibleActorOuters).field_0x28 = 0;
  *(undefined4 *)&(this->ClientVisibleActorOuters).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClientVisibleActorOuters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClientVisibleActorOuters).field_0x34 = 0;
  *(undefined8 *)&(this->ClientVisibleActorOuters).field_0x40 = 0;
  *(undefined4 *)&(this->ClientVisibleActorOuters).field_0x48 = 0;
  *(undefined8 *)&this->PendingUpdateLevelVisibility = 0;
  *(undefined8 *)&(this->PendingUpdateLevelVisibility).field_0x8 = 0;
  *(undefined8 *)&(this->PendingUpdateLevelVisibility).field_0x20 = 0;
  *(undefined4 *)&(this->PendingUpdateLevelVisibility).field_0x28 = 0;
  *(undefined4 *)&(this->PendingUpdateLevelVisibility).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingUpdateLevelVisibility).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingUpdateLevelVisibility).field_0x34 = 0;
  this_00 = &this->ChannelRecord;
  *(undefined8 *)&(this->PendingUpdateLevelVisibility).field_0x40 = 0;
  *(undefined4 *)&(this->PendingUpdateLevelVisibility).field_0x48 = 0;
  *(undefined8 *)&this->ClientPendingStreamingStatusRequest = 0;
  *(undefined8 *)&(this->ClientPendingStreamingStatusRequest).field_0x8 = 0;
  *(undefined8 *)&(this->ClientPendingStreamingStatusRequest).field_0x20 = 0;
  *(undefined4 *)&(this->ClientPendingStreamingStatusRequest).field_0x28 = 0;
  *(undefined4 *)&(this->ClientPendingStreamingStatusRequest).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClientPendingStreamingStatusRequest).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClientPendingStreamingStatusRequest).field_0x34 = 0;
  *(undefined8 *)&(this->ClientPendingStreamingStatusRequest).field_0x40 = 0;
  *(undefined4 *)&(this->ClientPendingStreamingStatusRequest).field_0x48 = 0;
  (this->ClientWorldPackageName).ComparisonIndex = 0;
  (this->ClientWorldPackageName).Number = 0;
  *(undefined8 *)&this->ActorsStarvedByClassTimeMap = 0;
  *(undefined8 *)&(this->ActorsStarvedByClassTimeMap).field_0x8 = 0;
  *(undefined8 *)&(this->ActorsStarvedByClassTimeMap).field_0x20 = 0;
  *(undefined4 *)&(this->ActorsStarvedByClassTimeMap).field_0x28 = 0;
  *(undefined4 *)&(this->ActorsStarvedByClassTimeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActorsStarvedByClassTimeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActorsStarvedByClassTimeMap).field_0x34 = 0;
  *(undefined8 *)&(this->ActorsStarvedByClassTimeMap).field_0x40 = 0;
  *(undefined4 *)&(this->ActorsStarvedByClassTimeMap).field_0x48 = 0;
  *(undefined8 *)&this->IgnoringChannels = 0;
  *(undefined8 *)&(this->IgnoringChannels).field_0x8 = 0;
  *(undefined8 *)&(this->IgnoringChannels).field_0x20 = 0;
  *(undefined4 *)&(this->IgnoringChannels).field_0x28 = 0;
  *(undefined4 *)&(this->IgnoringChannels).field_0x2c = 0x80;
  *(undefined4 *)&(this->IgnoringChannels).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IgnoringChannels).field_0x34 = 0;
  *(undefined8 *)&(this->IgnoringChannels).field_0x40 = 0;
  *(undefined4 *)&(this->IgnoringChannels).field_0x48 = 0;
  *(undefined8 *)&this->ChannelIndexMap = 0;
  *(undefined8 *)&(this->ChannelIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChannelIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->ChannelIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->ChannelIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChannelIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChannelIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->ChannelIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->ChannelIndexMap).field_0x48 = 0;
  *(undefined8 *)&(this->IgnoredBunchGuids).Elements = 0;
  *(undefined8 *)&(this->IgnoredBunchGuids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->IgnoredBunchGuids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->IgnoredBunchGuids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->IgnoredBunchGuids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->IgnoredBunchGuids).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IgnoredBunchGuids).Elements.field_0x34 = 0;
  (this->IgnoredBunchGuids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->IgnoredBunchGuids).HashSize = 0;
  *(undefined8 *)&(this->IgnoredBunchChannels).Elements = 0;
  *(undefined8 *)&(this->IgnoredBunchChannels).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->IgnoredBunchChannels).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->IgnoredBunchChannels).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->IgnoredBunchChannels).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->IgnoredBunchChannels).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IgnoredBunchChannels).Elements.field_0x34 = 0;
  (this->IgnoredBunchChannels).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->IgnoredBunchChannels).HashSize = 0;
  *(undefined8 *)&(this->ReservedChannels).Elements = 0;
  *(undefined8 *)&(this->ReservedChannels).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReservedChannels).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReservedChannels).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReservedChannels).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReservedChannels).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReservedChannels).Elements.field_0x34 = 0;
  (this->ReservedChannels).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReservedChannels).HashSize = 0;
  (this->OutgoingBunches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutgoingBunches).ArrayNum = 0;
  (this->OutgoingBunches).ArrayMax = 0;
  (this_00->ChannelRecord).Head = 0;
  (this_00->ChannelRecord).Tail = 0;
  (this->ChannelRecord).ChannelRecord.IndexMask = 0;
  (this->ChannelRecord).ChannelRecord.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ChannelRecord).ChannelRecord.Storage.ArrayNum = 0;
  (this->ChannelRecord).ChannelRecord.Storage.ArrayMax = 0;
  TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>::
  SetCapacity(&this_00->ChannelRecord,0x400);
  (this->ChannelRecord).LastPacketId = -1;
  FNetPacketNotify::FNetPacketNotify(&this->PacketNotify);
  this->LastNotifiedPacketId = -1;
  (this->PacketAnalytics).bSawPacketLossBurstThisFrame = false;
  this->OutTotalNotifiedPackets = 0;
  this->HasDirtyAcks = 0;
  this->bHasWarnedAboutChannelLimit = false;
  this->bConnectionPendingCloseDueToSocketSendFailure = false;
  this->TotalOutOfOrderPacketsLost = 0;
  this->TotalOutOfOrderPacketsRecovered = 0;
  this->TotalOutOfOrderPacketsDuplicate = 0;
  (this->PacketOrderCache).bIsSet = false;
  this->PacketOrderCacheStartIdx = 0;
  this->PacketOrderCacheCount = 0;
  (this->SaturationAnalytics).NumberOfTrackedFrames = 0;
  (this->SaturationAnalytics).NumberOfSaturatedFrames = 0;
  (this->SaturationAnalytics).LongestRunOfSaturatedFrames = 0;
  (this->SaturationAnalytics).NumberOfReplications = 0;
  (this->SaturationAnalytics).NumberOfSaturatedReplications = 0;
  (this->SaturationAnalytics).LongestRunOfSaturatedReplications = 0;
  (this->SaturationAnalytics).CurrentRunOfSaturatedFrames = 0;
  (this->SaturationAnalytics).CurrentRunOfSaturatedReplications = 0;
  (this->PacketAnalytics).NumberOfAcksThisFrame = 0;
  (this->PacketAnalytics).NumberOfNaksThisFrame = 0;
  (this->PacketAnalytics).NumberOfMissingPacketsThisFrame = 0;
  (this->PacketAnalytics).NumberOfPacketsThisFrame = 0;
  (this->PacketAnalytics).CurrentRunOfDroppedOutPackets = 0;
  (this->PacketAnalytics).LongestRunOfDroppedOutPackets = 0;
  (this->PacketAnalytics).LongestRunOfDroppedInPackets = 0;
  (this->PacketAnalytics).NumberOfFramesWithBurstsOfPacketLoss = 0;
  (this->PacketAnalytics).NumberOfFramesWithNoPackets = 0;
  (this->PacketAnalytics).NumberOfTrackedFrames = 0;
  this->bFlushingPacketOrderCache = false;
  (this->ConnectionHandle).ParentConnectionId = 0;
  (this->ConnectionHandle).ChildConnectionId = 0;
  this->InTraceCollector = (FNetTraceCollector *)0x0;
  this->OutTraceCollector = (FNetTraceCollector *)0x0;
  this->NetTraceId = 0;
  this->bFlushedNetThisFrame = false;
  this->bLoggedFlushNetQueuedBitsOverflow = false;
  (this->RPCDoS).Ptr = (FRPCDoSDetection *)0x0;
  (this->FaultRecovery).Ptr = (FNetConnectionFaultRecovery *)0x0;
  this->bReceivedCloseReason = false;
  this->PendingGracefulCloseResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
  (this->NetPing).Ptr = (FNetPing *)0x0;
  (this->NetworkCongestionControl).bIsSet = false;
  pFVar7 = FNetworkVersion::GetNetworkCustomVersions();
  if (pFVar3 != pFVar7) {
    iVar4 = (pFVar7->Versions).ArrayNum;
    iVar5 = *piVar1;
    _Src = (pFVar7->Versions).AllocatorInstance.Data;
    (this->NetworkCustomVersions).Versions.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar4,iVar5,(ForAnyElementType *)pFVar3,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pFVar3->Versions).AllocatorInstance.Data,_Src,(longlong)iVar4 * 0x28);
      }
    }
  }
  return this;
}

// ~UNetConnection @ 147fa97f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::~UNetConnection(UNetConnection *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FNetPing *pFVar3;
  TPimplPtr<UE::Net::FNetResult,1> TVar4;
  FNetConnectionFaultRecovery *this_00;
  FScriptContainerElement *pFVar5;
  FRPCDoSDetection *pFVar6;
  ForElementType<FSetElementId> FVar7;
  void *pvVar8;
  longlong *plVar9;
  TReferenceControllerBase<1> *pTVar10;
  PacketHandler *this_01;
  longlong *plVar11;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  if ((this->NetworkCongestionControl).bIsSet != false) {
    FNetworkCongestionControl::~FNetworkCongestionControl
              (&(this->NetworkCongestionControl).TypedValue);
  }
  pFVar3 = (this->NetPing).Ptr;
  if (pFVar3 != (FNetPing *)0x0) {
    (**(code **)&pFVar3[-1].OverridePingUDPQoSAddress.Data.ArrayNum)
              (&pFVar3[-1].OverridePingUDPQoSAddress.Data.ArrayNum);
  }
  TVar4 = this->PendingGracefulCloseResult;
  if (TVar4 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    (**(code **)((longlong)TVar4 + -0x10))((longlong)TVar4 + -0x10);
  }
  this_00 = (this->FaultRecovery).Ptr;
  if (this_00 != (FNetConnectionFaultRecovery *)0x0) {
    pFVar5 = (this_00->ConfigContext).Data.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    UE::Net::FNetConnectionFaultRecoveryBase::~FNetConnectionFaultRecoveryBase
              ((FNetConnectionFaultRecoveryBase *)this_00);
    ::operator_delete(this_00,0x140);
  }
  pFVar6 = (this->RPCDoS).Ptr;
  if (pFVar6 != (FRPCDoSDetection *)0x0) {
    (**(code **)pFVar6->_padding_)(pFVar6,1);
  }
  if ((this->PacketOrderCache).bIsSet != false) {
    DestructItems<TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_>,int>
              ((TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_> *)
               (this->PacketOrderCache).TypedValue.Elements.AllocatorInstance.Data,
               (this->PacketOrderCache).TypedValue.Elements.ArrayNum);
    pFVar5 = (this->PacketOrderCache).TypedValue.Elements.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
  }
  FNetPacketNotify::~FNetPacketNotify(&this->PacketNotify);
  TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>::
  ~TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>
            (&(this->ChannelRecord).ChannelRecord);
  pFVar5 = (this->OutgoingBunches).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  (this->ReservedChannels).HashSize = 0;
  FVar7 = (this->ReservedChannels).Hash.SecondaryData;
  if (FVar7 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReservedChannels).Elements);
  (this->IgnoredBunchChannels).HashSize = 0;
  FVar7 = (this->IgnoredBunchChannels).Hash.SecondaryData;
  if (FVar7 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->IgnoredBunchChannels).Elements);
  (this->IgnoredBunchGuids).HashSize = 0;
  FVar7 = (this->IgnoredBunchGuids).Hash.SecondaryData;
  if (FVar7 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->IgnoredBunchGuids).Elements);
  *(undefined4 *)&(this->ChannelIndexMap).field_0x48 = 0;
  pvVar8 = *(void **)&(this->ChannelIndexMap).field_0x40;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChannelIndexMap);
  *(undefined4 *)&(this->IgnoringChannels).field_0x48 = 0;
  pvVar8 = *(void **)&(this->IgnoringChannels).field_0x40;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FNetworkGUID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FNetworkGUID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FNetworkGUID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IgnoringChannels);
  *(undefined4 *)&(this->ActorsStarvedByClassTimeMap).field_0x48 = 0;
  pvVar8 = *(void **)&(this->ActorsStarvedByClassTimeMap).field_0x40;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActorsStarvedByClassTimeMap);
  *(undefined4 *)&(this->ClientPendingStreamingStatusRequest).field_0x48 = 0;
  pvVar8 = *(void **)&(this->ClientPendingStreamingStatusRequest).field_0x40;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FNetLevelVisibilityTransactionId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FNetLevelVisibilityTransactionId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FNetLevelVisibilityTransactionId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClientPendingStreamingStatusRequest);
  *(undefined4 *)&(this->PendingUpdateLevelVisibility).field_0x48 = 0;
  pvVar8 = *(void **)&(this->PendingUpdateLevelVisibility).field_0x40;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FUpdateLevelVisibilityLevelInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FUpdateLevelVisibilityLevelInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FUpdateLevelVisibilityLevelInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingUpdateLevelVisibility);
  *(undefined4 *)&(this->ClientVisibleActorOuters).field_0x48 = 0;
  pvVar8 = *(void **)&(this->ClientVisibleActorOuters).field_0x40;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClientVisibleActorOuters);
  pFVar5 = (this->NetConnectionHistogram).Bins.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->ChannelsToTick).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  if (*(longlong *)&this->PlayerConnectionFunction != 0) {
    plVar9 = *(longlong **)&(this->PlayerConnectionFunction).field_0x28;
    plVar11 = (longlong *)&(this->PlayerConnectionFunction).field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar11 = plVar9;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnConnectionOpened).field_0x8,*(int *)&(this->OnConnectionOpened).field_0x10);
  pvVar8 = *(void **)&(this->OnConnectionOpened).field_0x8;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnConnectionOpened);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->LowLevelSendDel);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReceivedRawPacketDel);
  DestructItems<FDelayedIncomingPacket,int>
            ((FDelayedIncomingPacket *)(this->DelayedIncomingPackets).AllocatorInstance.Data,
             (this->DelayedIncomingPackets).ArrayNum);
  pFVar5 = (this->DelayedIncomingPackets).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FDelayedPacket,int>
            ((FDelayedPacket *)(this->Delayed).AllocatorInstance.Data,(this->Delayed).ArrayNum);
  pFVar5 = (this->Delayed).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  (this->ClientVisibleLevelNames).HashSize = 0;
  FVar7 = (this->ClientVisibleLevelNames).Hash.SecondaryData;
  if (FVar7 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ClientVisibleLevelNames).Elements);
  *(undefined4 *)&(this->DormantReplicatorSet).FlushedObjectMap.field_0x48 = 0;
  pvVar8 = *(void **)&(this->DormantReplicatorSet).FlushedObjectMap.field_0x40;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DormantReplicatorSet).FlushedObjectMap);
  (this->DormantReplicatorSet).ActorReplicatorSet.HashSize = 0;
  FVar7 = (this->DormantReplicatorSet).ActorReplicatorSet.Hash.SecondaryData;
  if (FVar7 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  TSparseArray<TSparseSetElement<UE::Net::Private::FActorDormantReplicators>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Net::Private::FActorDormantReplicators>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UE::Net::Private::FActorDormantReplicators>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DormantReplicatorSet);
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x48 = 0;
  pvVar8 = *(void **)&(this->KeepProcessingActorChannelBunchesMap).field_0x40;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeepProcessingActorChannelBunchesMap);
  (this->ClientMakingVisibleLevelNames).HashSize = 0;
  FVar7 = (this->ClientMakingVisibleLevelNames).Hash.SecondaryData;
  if (FVar7 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ClientMakingVisibleLevelNames).Elements);
  (this->DestroyedStartupOrDormantActorGUIDs).HashSize = 0;
  FVar7 = (this->DestroyedStartupOrDormantActorGUIDs).Hash.SecondaryData;
  if (FVar7 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DestroyedStartupOrDormantActorGUIDs).Elements);
  pFVar5 = (this->EngineVersion).Branch.Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined4 *)&(this->ActorChannels).field_0x48 = 0;
  pvVar8 = *(void **)&(this->ActorChannels).field_0x40;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActorChannels);
  pFVar5 = (this->NetworkCustomVersions).Versions.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->PendingOutRec).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->InReliable).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->OutReliable).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->Channels).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FBitWriter::~FBitWriter(&this->SendBuffer);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NetAnalyticsData).SharedReferenceCount.ReferenceController);
  FNetConnAnalyticsVars::~FNetConnAnalyticsVars(&this->AnalyticsVars);
  FBitWriter::~FBitWriter(&this->SendBunchHeader);
  FOutBunch::~FOutBunch(&this->LastOut);
  pFVar5 = (this->RequestURL).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->ClientResponse).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->Challenge).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FUniqueNetIdRepl::~FUniqueNetIdRepl(&this->PlayerId);
  pTVar10 = (this->StatelessConnectComponent).WeakReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar10->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
    }
  }
  this_01 = (this->Handler).Ptr;
  if (this_01 != (PacketHandler *)0x0) {
    PacketHandler::~PacketHandler(this_01);
    ::operator_delete(this_01,0x270);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RemoteAddr).SharedReferenceCount.ReferenceController);
  FURL::~FURL(&this->URL);
  *(undefined4 *)&(this->ChildrenLookup).field_0x48 = 0;
  pvVar8 = *(void **)&(this->ChildrenLookup).field_0x40;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UChildConnection>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UChildConnection>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UChildConnection>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChildrenLookup);
  pFVar5 = (this->SentTemporaries).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->OpenChannels).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->Children).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  UPlayer::~UPlayer((UPlayer *)this);
  return;
}

// operator() @ 147fadf90

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
`UNetConnection::CleanupDormantReplicatorsForActor'::__l8::<lambda_1>::operator()
          (void *this,FObjectKey param_1,FObjectKey param_2,TSharedRef<FObjectReplicator,1> *param_3
          )

{
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar5;
  FWeakObjectPtr local_18 [2];
  
  if ((param_1.ObjectIndex != param_2.ObjectIndex) ||
     (param_1.ObjectSerialNumber != param_2.ObjectSerialNumber)) {
    FVar1 = *(ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *)this;
    local_18[0] = (param_3->Object->WeakObjectPtr).WeakPtr;
    FVar5 = *(ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *)((longlong)FVar1 + 0x80);
    if (*(ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *)((longlong)FVar1 + 0x80) ==
        (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      FVar5 = FVar1;
    }
    if (((ulonglong)FVar5 <= local_18) &&
       (local_18 <
        (FWeakObjectPtr *)((longlong)FVar5 + (longlong)*(int *)((longlong)FVar1 + 0x8c) * 8))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = *(int *)((longlong)FVar1 + 0x88);
    if (iVar4 == *(int *)((longlong)FVar1 + 0x8c)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                        (0x408,(ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *)FVar1,
                         (int *)((longlong)FVar1 + 0x8c));
    }
    *(int *)((longlong)FVar1 + 0x88) = iVar4 + 1;
    FVar5 = *(ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *)((longlong)FVar1 + 0x80);
    if (*(ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *)((longlong)FVar1 + 0x80) ==
        (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      FVar5 = FVar1;
    }
    *(FWeakObjectPtr *)((longlong)FVar5 + (longlong)iVar4 * 8) = local_18[0];
  }
  return;
}

// operator() @ 147fae090

/* WARNING: Enum "Type": Some values do not have unique names */

EHandleNetResult __thiscall
`UNetConnection::InitBase'::__l22::<lambda_1>::operator()(void *this,FNetResult *param_1)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_res10 [6];
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(``UNetConnection::InitBase'::__l22::<lambda_1>::operator()'::__l2::
           _dynamic_atexit_destructor_for__LoggedResults__);
    _Init_thread_footer(&::_TSS0);
  }
  pTVar2 = CVarLogUnhandledFaults.Ref;
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 4;
  }
  iVar1 = *(int *)((longlong)pTVar2->ShadowedValue + lVar4);
  uVar6 = ((uint)((ulonglong)param_1->RawResultEnumObj >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->RawResultEnumObj >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  uVar8 = ((int)(param_1->Result >> 0x20) * 0x17 - uVar6) + (int)param_1->Result ^ uVar6 >> 0xd;
  uVar7 = (-0x61c88647 - uVar8) - uVar6 ^ uVar8 << 8;
  uVar9 = (uVar6 - uVar7) - uVar8 ^ uVar7 >> 0xd;
  uVar8 = (uVar8 - uVar9) - uVar7 ^ uVar9 >> 0xc;
  uVar6 = (uVar7 - uVar8) - uVar9 ^ uVar8 << 0x10;
  uVar9 = (uVar9 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar7 = (uVar8 - uVar9) - uVar6 ^ uVar9 >> 3;
  uVar6 = (uVar6 - uVar7) - uVar9 ^ uVar7 << 10;
  local_res10[0] = (uVar9 - uVar6) - uVar7 ^ uVar6 >> 0xf;
  if (iVar1 != 2) {
    if (iVar1 != 1) {
      return NotHandled;
    }
    for (FVar5.Data = LoggedResults.AllocatorInstance.Data;
        FVar5.Data != LoggedResults.AllocatorInstance.Data + (longlong)LoggedResults.ArrayNum * 4;
        FVar5.Data = FVar5.Data + 4) {
      if (*(uint *)FVar5.Data == local_res10[0]) {
        return NotHandled;
      }
    }
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_int_const_&>
              (&LoggedResults,local_res10);
  }
  if (2 < (byte)LogNet._0_1_) {
    UE::Net::FNetResult::DynamicToString(param_1,&local_18,WithChain);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return NotHandled;
}

// operator() @ 147fae830

FString * __thiscall
`UNetConnection::InitBase'::__l36::<lambda_4>::operator()
          (void *this,FString *__return_storage_ptr__)

{
  UObject *pUVar1;
  bool bVar2;
  bool bVar3;
  FString *pFVar4;
  FString local_28;
  FString local_18;
  
  if ((*(longlong *)(*(longlong *)this + 0x30) == 0) ||
     (pUVar1 = *(UObject **)(*(longlong *)(*(longlong *)this + 0x30) + 0x2c8),
     pUVar1 == (UObject *)0x0)) {
    pFVar4 = ::FString::FString(&local_28,L"");
    bVar3 = false;
    bVar2 = true;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    pFVar4 = FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)(pUVar1 + 0x12),&local_18);
    bVar3 = true;
    bVar2 = false;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 147fae910

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall `UNetConnection::InitBase'::__l36::<lambda_5>::operator()(void *this)

{
  UNetConnection *this_00;
  UEnum *pUVar1;
  wchar_t *pwVar2;
  UEnum *local_res8;
  FNetResult local_38;
  
  this_00 = *(UNetConnection **)this;
  pUVar1 = StaticEnum<enum_ENetCloseResult>();
  local_38.Result = 0x18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_38.ResultEnumObj.WeakPtr.ObjectIndex = 0;
  local_38.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_38.ResultEnumObj.WeakPtr,(FObjectPtr)&local_res8);
  local_38.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ErrorContext.Data.ArrayNum = 0;
  local_38.ErrorContext.Data.ArrayMax = 0;
  local_38.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
  local_38.RawResultEnumObj = pUVar1;
  pwVar2 = ::LexToString(RPCDoS);
  ::FString::operator=(&local_38.ErrorContext,pwVar2);
  UNetConnection::Close(this_00,&local_38);
  if (local_38.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    (**(code **)((longlong)local_38.NextResult + -0x10))((longlong)local_38.NextResult + -0x10);
  }
  if (local_38.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ErrorContext.Data.AllocatorInstance.Data);
  }
  return;
}

// AddReferencedObjects @ 147fb2210

void __cdecl UNetConnection::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  UClass *pUVar5;
  FString *pFVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  int iStack_9c;
  longlong local_98;
  TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_88;
  undefined2 local_80;
  FString local_78;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_40;
  FString local_38;
  
  if (param_1 == (UObject *)0x0) {
    pFVar6 = GetTypeName<UNetConnection>(&local_78);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar8);
  }
  pUVar5 = GetPrivateStaticClass();
  iVar4 = (int)pUVar5->_padding_;
  if ((iVar4 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
      &pUVar5->_padding_)) {
    lVar7 = *(longlong *)&param_1[0x82].field_0x18;
    iVar4 = *(int *)&param_1[0x82].field_0x20;
    lVar2 = lVar7 + (longlong)iVar4 * 8;
    while( true ) {
      if (*(int *)&param_1[0x82].field_0x20 != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<UChannel>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (lVar7 == lVar2) break;
      (**(code **)(param_2->_padding_ + 0x88))(param_2,lVar7,param_1);
      lVar7 = lVar7 + 8;
    }
    puVar1 = &param_1[0x8c].field_0x18;
    TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_68,
               (TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)puVar1);
    local_80 = 0;
    stack0xffffffffffffff58 = local_68._16_16_;
    auStack_b0._0_8_ = local_68._8_8_;
    local_98 = local_48;
    pTStack_90 = pTStack_40;
    iVar4 = local_68._28_4_;
    local_88 = (TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)puVar1;
    if (iVar4 < *(int *)(local_68._16_8_ + 0x18)) {
      do {
        lVar9 = (longlong)iVar4 * 0x20 + *(longlong *)local_68._0_8_;
        lVar7 = *(longlong *)(lVar9 + 8);
        iVar4 = *(int *)(lVar9 + 0x10);
        lVar2 = lVar7 + (longlong)iVar4 * 8;
        while( true ) {
          if (*(int *)(lVar9 + 0x10) != iVar4) {
            `TCheckedPointerIterator<TObjectPtr<UActorChannel>,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res8);
          }
          if (lVar7 == lVar2) break;
          (**(code **)(param_2->_padding_ + 0x88))(param_2,lVar7,param_1,0);
          lVar7 = lVar7 + 8;
        }
        uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
        iVar4 = iStack_9c;
      } while (iStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
      if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
        uVar11 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
        if (uVar11 < 4) {
          iVar4 = 1;
        }
        else {
          uVar3 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar4 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar11) && (local_88->HashSize < iVar4)) || (iVar4 < local_88->HashSize)) {
          local_88->HashSize = iVar4;
          TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::Rehash(local_88);
        }
      }
    }
    UObject::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar6 = GetTypeName<UNetConnection>(&local_78);
  pwVar8 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UObject>(&local_38,param_1);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar8,pwVar10);
}

// AssertValid @ 147fb3ec0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::AssertValid(UNetConnection *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->State != USOCK_Closing) && (2 < this->State - USOCK_Closed)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsClosingOrClosed() || GetConnectionState() == USOCK_Pending || GetConnectionState() == USOCK_Open"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                       ,0x69a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// CheckIncomingPacketEmulation @ 147fb7cf0

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
UNetConnection::CheckIncomingPacketEmulation
          (UNetConnection *this,double param_1,FBitReader *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  FDelayedIncomingPacket *pFVar6;
  FBitReader *pFVar7;
  FBitReader *pFVar8;
  FBitReader *pFVar9;
  FBitReader *pFVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  undefined1 local_48 [16];
  
  if (((this->PacketSimulationSettings).PktIncomingLoss != 0) &&
     (uVar4 = rand(),
     (float)(uVar4 & 0x7fff) * __real_3b480190 <
     (float)(this->PacketSimulationSettings).PktIncomingLoss)) {
    if ((byte)LogNet._0_1_ < 7) {
      return true;
    }
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    return true;
  }
  pFVar8 = (FBitReader *)0x0;
  piVar1 = &(this->PacketSimulationSettings).PktIncomingLagMax;
  if (((this->PacketSimulationSettings).PktIncomingLagMin < 1) && (*piVar1 < 1)) {
    pFVar7 = pFVar8;
    if ((this->PacketSimulationSettings).PktIncomingFrameDelay != 0) {
      pFVar6 = TArray<FDelayedIncomingPacket,TSizedDefaultAllocator<32>_>::AddDefaulted_GetRef
                         (&this->DelayedIncomingPackets);
      pFVar7 = ::operator_new(0xb0);
      if (pFVar7 != (FBitReader *)0x0) {
        pFVar8 = FBitReader::FBitReader(pFVar7,param_2);
      }
      if (pFVar6 == (FDelayedIncomingPacket *)local_48) {
        if (pFVar8 == (FBitReader *)0x0) goto LAB_147fb7dfe;
        puVar11 = (undefined8 *)pFVar8->_padding_;
      }
      else {
        pFVar7 = (pFVar6->PacketData).Ptr;
        (pFVar6->PacketData).Ptr = pFVar8;
        if (pFVar7 == (FBitReader *)0x0) goto LAB_147fb7dfe;
        puVar11 = (undefined8 *)pFVar7->_padding_;
        pFVar8 = pFVar7;
      }
      (*(code *)*puVar11)(pFVar8,1);
LAB_147fb7dfe:
      pFVar6->ReinjectionFrameCount = (this->PacketSimulationSettings).PktIncomingFrameDelay;
      if (6 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      return true;
    }
  }
  else {
    uVar4 = rand();
    iVar3 = (this->PacketSimulationSettings).PktIncomingLagMin;
    piVar2 = &(this->DelayedIncomingPackets).ArrayMax;
    iVar5 = (this->DelayedIncomingPackets).ArrayNum;
    dVar13 = ((double)(*piVar1 - iVar3) * (double)((float)(uVar4 & 0x7fff) * __real_38000100) +
             (double)iVar3) * __real_3f50624dd2f1a9fc;
    if (iVar5 == *piVar2) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->DelayedIncomingPackets).AllocatorInstance,piVar2);
    }
    (this->DelayedIncomingPackets).ArrayNum = iVar5 + 1;
    pFVar7 = (FBitReader *)
             ((this->DelayedIncomingPackets).AllocatorInstance.Data + (longlong)iVar5 * 0x18);
    DefaultConstructItems<FDelayedIncomingPacket,int>(pFVar7,1);
    pFVar9 = ::operator_new(0xb0);
    pFVar10 = pFVar8;
    if (pFVar9 != (FBitReader *)0x0) {
      pFVar10 = FBitReader::FBitReader(pFVar9,param_2);
    }
    if (pFVar7 == (FBitReader *)(local_48 + 8)) {
      if (pFVar10 != (FBitReader *)0x0) {
        puVar11 = (undefined8 *)pFVar10->_padding_;
        goto LAB_147fb7f0f;
      }
    }
    else {
      pFVar9 = (FBitReader *)pFVar7->_padding_;
      pFVar7->_padding_ = (longlong)pFVar10;
      if (pFVar9 != (FBitReader *)0x0) {
        puVar11 = (undefined8 *)pFVar9->_padding_;
        pFVar10 = pFVar9;
LAB_147fb7f0f:
        (*(code *)*puVar11)(pFVar10,1);
      }
    }
    pFVar7->_padding_ = (longlong)(dVar13 + param_1);
    if (6 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  if ((this->PacketSimulationSettings).PktIncomingBufferBloatInMS < 1) goto LAB_147fb801c;
  if (pFVar7 == (FBitReader *)0x0) {
    pFVar7 = (FBitReader *)
             TArray<FDelayedIncomingPacket,TSizedDefaultAllocator<32>_>::AddDefaulted_GetRef
                       (&this->DelayedIncomingPackets);
    pFVar10 = ::operator_new(0xb0);
    if (pFVar10 != (FBitReader *)0x0) {
      pFVar8 = FBitReader::FBitReader(pFVar10,param_2);
    }
    if (pFVar7 == (FBitReader *)&stack0xffffffffffffffc8) {
      if (pFVar8 != (FBitReader *)0x0) {
        puVar11 = (undefined8 *)pFVar8->_padding_;
        goto LAB_147fb7fad;
      }
    }
    else {
      pFVar10 = (FBitReader *)pFVar7->_padding_;
      pFVar7->_padding_ = (longlong)pFVar8;
      if (pFVar10 != (FBitReader *)0x0) {
        puVar11 = (undefined8 *)pFVar10->_padding_;
        pFVar8 = pFVar10;
LAB_147fb7fad:
        (*(code *)*puVar11)(pFVar8,1);
      }
    }
  }
  dVar13 = this->NextBufferBloatFlushIn;
  if ((dVar13 < param_1) && (this->NextBufferBloatActiveTimeIn <= param_1)) {
    dVar13 = (double)((float)(this->PacketSimulationSettings).PktIncomingBufferBloatInMS *
                     __real_3a83126f) + param_1;
    this->NextBufferBloatFlushIn = dVar13;
    this->NextBufferBloatActiveTimeIn =
         (double)BufferBloatCooldownTimeInMS * __real_3f50624dd2f1a9fc + dVar13;
  }
  dVar12 = (double)pFVar7->_padding_;
  if ((double)pFVar7->_padding_ <= dVar13) {
    dVar12 = dVar13;
  }
  pFVar7->_padding_ = (longlong)dVar12;
LAB_147fb801c:
  return pFVar7 != (FBitReader *)0x0;
}

// CheckOutgoingPacketEmulation @ 147fb8050

/* WARNING: Removing unreachable block (ram,0x000147fb822a) */
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
UNetConnection::CheckOutgoingPacketEmulation
          (UNetConnection *this,double param_1,FOutPacketTraits *param_2)

{
  int *piVar1;
  TArray<FDelayedPacket,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  undefined4 uVar4;
  long64 lVar5;
  code *pcVar6;
  undefined8 uVar7;
  float fVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uchar *puVar16;
  FDelayedPacket *pFVar17;
  int iVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  double dVar26;
  ForAnyElementType local_188;
  int local_180 [3];
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined8 local_160;
  undefined4 local_158;
  FScriptContainerElement local_154;
  longlong local_150;
  FScriptContainerElement *local_148;
  code *local_140;
  FDelayedPacket local_138;
  FDelayedPacket local_100;
  FDelayedPacket local_c8;
  FDelayedPacket local_90;
  
  lVar5 = (this->SendBuffer).Num;
  bVar9 = UNetDriver::IsSimulatingPacketLossBurst((this->Driver).field0_0x0.DebugPtr);
  if (bVar9) {
LAB_147fb8a10:
    if (6 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    return true;
  }
  if (0 < (this->PacketSimulationSettings).PktLoss) {
    iVar13 = (this->PacketSimulationSettings).PktLossMaxSize;
    iVar18 = (int)lVar5;
    if ((iVar13 == 0) || (iVar18 < iVar13 * 8)) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if ((((this->PacketSimulationSettings).PktLossMinSize << 3 < iVar18) && (bVar9)) &&
       (uVar12 = rand(),
       (float)(uVar12 & 0x7fff) * __real_3b480190 < (float)(this->PacketSimulationSettings).PktLoss)
       ) goto LAB_147fb8a10;
  }
  dVar23 = __real_3f50624dd2f1a9fc;
  if (0 < (this->PacketSimulationSettings).PktFrameDelay) {
    iVar18 = (int)(this->SendBuffer).Num;
    puVar16 = FBitWriter::GetData(&this->SendBuffer);
    local_174._0_1_ = param_2->bAllowCompression;
    local_174._1_3_ = *(undefined3 *)&param_2->field_0x1;
    local_174._4_4_ = param_2->NumAckBits;
    uStack_16c._0_4_ = param_2->NumBunchBits;
    uStack_16c._4_1_ = param_2->bIsKeepAlive;
    uStack_16c._5_1_ = param_2->bIsCompressed;
    uStack_16c._6_2_ = *(undefined2 *)&param_2->field_0xe;
    iVar13 = iVar18 + 7;
    local_188.Data = (FScriptContainerElement *)0x0;
    local_180[0] = 0;
    local_180[1] = 0;
    local_158 = 0;
    iVar13 = (int)(iVar13 + (iVar13 >> 0x1f & 7U)) >> 3;
    local_154 = (FScriptContainerElement)0x0;
    local_160 = 0;
    local_180[2] = iVar18;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar13,&local_188,local_180,local_180 + 1);
    memcpy(local_188.Data,puVar16,(longlong)iVar13);
    iVar13 = (this->Delayed).ArrayNum;
    piVar1 = &(this->Delayed).ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x838,&(this->Delayed).AllocatorInstance,piVar1);
    }
    pFVar20 = (this->Delayed).AllocatorInstance.Data;
    (this->Delayed).ArrayNum = iVar13 + 1;
    lVar19 = (longlong)iVar13 * 0x38;
    *(undefined8 *)(pFVar20 + lVar19) = 0;
    *(FScriptContainerElement **)(pFVar20 + lVar19) = local_188.Data;
    *(int *)(pFVar20 + lVar19 + 8) = local_180[0];
    *(int *)(pFVar20 + lVar19 + 0xc) = local_180[1];
    *(int *)(pFVar20 + lVar19 + 0x10) = local_180[2];
    *(undefined8 *)(pFVar20 + lVar19 + 0x14) = local_174;
    *(undefined8 *)(pFVar20 + lVar19 + 0x14 + 8) = uStack_16c;
    *(undefined8 *)(pFVar20 + lVar19 + 0x28) = local_160;
    *(undefined4 *)(pFVar20 + lVar19 + 0x30) = local_158;
    pFVar20[lVar19 + 0x34] = local_154;
    *(int *)(pFVar20 + lVar19 + 0x30) = (this->PacketSimulationSettings).PktFrameDelay;
    return true;
  }
  if ((this->PacketSimulationSettings).PktOrder != 0) {
    pTVar2 = &this->Delayed;
    lVar5 = (this->SendBuffer).Num;
    if ((((this->SendBuffer)._padding_ & 0x200) != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsError()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                           ,0x49,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    iVar13 = (this->Delayed).ArrayNum;
    pFVar20 = (this->SendBuffer).Buffer.AllocatorInstance.Data;
    if (iVar13 == (this->Delayed).ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x838,&pTVar2->AllocatorInstance,&(this->Delayed).ArrayMax);
    }
    (this->Delayed).ArrayNum = iVar13 + 1;
    FDelayedPacket::FDelayedPacket
              ((FDelayedPacket *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x38),
               (uchar *)pFVar20,(int)lVar5,param_2);
    fVar8 = __real_3f000000;
    fVar25 = __real_38000100;
    uVar12 = (this->Delayed).ArrayNum - 1;
    if ((int)uVar12 < 0) {
      return true;
    }
    lVar19 = (longlong)(int)uVar12;
    lVar21 = lVar19 * 0x38;
    do {
      local_150 = lVar19;
      uVar14 = rand();
      if (fVar8 < (float)(uVar14 & 0x7fff) * fVar25) {
        uVar14 = ~uVar12 >> 0x1f;
        cVar11 = (**(code **)(((this->Driver).field0_0x0.DebugPtr)->_padding_ + 0x420))();
        if (cVar11 != '\0') {
          local_140 = *(code **)(this->_padding_ + 0x2e8);
          uVar15 = 0;
          if ((int)uVar12 < (this->Delayed).ArrayNum) {
            uVar15 = uVar14;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          local_148 = (pTVar2->AllocatorInstance).Data + lVar21 + 0x14;
          uVar15 = 0;
          if ((int)uVar12 < (this->Delayed).ArrayNum) {
            uVar15 = uVar14;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          uVar4 = *(undefined4 *)((pTVar2->AllocatorInstance).Data + lVar21 + 0x10);
          uVar15 = 0;
          if ((int)uVar12 < (this->Delayed).ArrayNum) {
            uVar15 = uVar14;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          pFVar20 = (pTVar2->AllocatorInstance).Data;
          if ((*(int *)(pFVar20 + lVar21 + 8) < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          (*local_140)(this,*(undefined8 *)(pFVar20 + lVar21),uVar4,local_148);
          lVar19 = local_150;
        }
        uVar15 = 0;
        if ((int)uVar12 < (this->Delayed).ArrayNum) {
          uVar15 = uVar14;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        pFVar20 = (pTVar2->AllocatorInstance).Data + lVar21;
        if (*(void **)pFVar20 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar20);
        }
        iVar13 = ~uVar12 + (this->Delayed).ArrayNum;
        if (iVar13 != 0) {
          memmove(pFVar20,pFVar20 + 0x38,(longlong)iVar13 * 0x38);
        }
        piVar1 = &(this->Delayed).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,&pTVar2->AllocatorInstance,(this->Delayed).ArrayNum,
                   &(this->Delayed).ArrayMax);
      }
      lVar19 = lVar19 + -1;
      lVar21 = lVar21 + -0x38;
      uVar12 = uVar12 - 1;
      if ((int)uVar12 < 0) {
        return true;
      }
    } while( true );
  }
  pFVar20 = (FScriptContainerElement *)0x0;
  if ((this->PacketSimulationSettings).PktJitter == 0) {
    if ((this->PacketSimulationSettings).PktLag == 0) {
      piVar1 = &(this->PacketSimulationSettings).PktLagMax;
      if (((this->PacketSimulationSettings).PktLagMin < 1) && (*piVar1 < 1)) goto LAB_147fb88db;
      lVar5 = (this->SendBuffer).Num;
      puVar16 = FBitWriter::GetData(&this->SendBuffer);
      pFVar17 = FDelayedPacket::FDelayedPacket(&local_c8,puVar16,(int)lVar5,param_2);
      piVar3 = &(this->Delayed).ArrayMax;
      iVar13 = (this->Delayed).ArrayNum;
      if (iVar13 == *piVar3) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&(this->Delayed).AllocatorInstance,piVar3);
      }
      (this->Delayed).ArrayNum = iVar13 + 1;
      pFVar20 = (this->Delayed).AllocatorInstance.Data + (longlong)iVar13 * 0x38;
      *(undefined8 *)pFVar20 = 0;
      *(FScriptContainerElement **)pFVar20 = (pFVar17->Data).AllocatorInstance.Data;
      (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar20 + 8) = (pFVar17->Data).ArrayNum;
      *(int *)(pFVar20 + 0xc) = (pFVar17->Data).ArrayMax;
      (pFVar17->Data).ArrayNum = 0;
      (pFVar17->Data).ArrayMax = 0;
      *(int *)(pFVar20 + 0x10) = pFVar17->SizeBits;
      uVar7 = *(undefined8 *)&(pFVar17->Traits).NumBunchBits;
      *(undefined8 *)(pFVar20 + 0x14) = *(undefined8 *)&pFVar17->Traits;
      *(undefined8 *)(pFVar20 + 0x1c) = uVar7;
      *(double *)(pFVar20 + 0x28) = pFVar17->SendTime;
      *(uint *)(pFVar20 + 0x30) = pFVar17->DelayFrameCount;
      pFVar20[0x34] = (FScriptContainerElement)pFVar17->bSent;
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      uVar12 = rand();
      iVar13 = (this->PacketSimulationSettings).PktLagMin;
      dVar24 = (double)iVar13;
      dVar26 = (double)(*piVar1 - iVar13);
      dVar22 = (double)((float)(uVar12 & 0x7fff) * __real_38000100);
    }
    else {
      lVar5 = (this->SendBuffer).Num;
      puVar16 = FBitWriter::GetData(&this->SendBuffer);
      pFVar17 = FDelayedPacket::FDelayedPacket(&local_100,puVar16,(int)lVar5,param_2);
      piVar1 = &(this->Delayed).ArrayMax;
      iVar13 = (this->Delayed).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&(this->Delayed).AllocatorInstance,piVar1);
      }
      (this->Delayed).ArrayNum = iVar13 + 1;
      pFVar20 = (this->Delayed).AllocatorInstance.Data + (longlong)iVar13 * 0x38;
      *(undefined8 *)pFVar20 = 0;
      *(FScriptContainerElement **)pFVar20 = (pFVar17->Data).AllocatorInstance.Data;
      (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar20 + 8) = (pFVar17->Data).ArrayNum;
      *(int *)(pFVar20 + 0xc) = (pFVar17->Data).ArrayMax;
      (pFVar17->Data).ArrayNum = 0;
      (pFVar17->Data).ArrayMax = 0;
      *(int *)(pFVar20 + 0x10) = pFVar17->SizeBits;
      uVar7 = *(undefined8 *)&(pFVar17->Traits).NumBunchBits;
      *(undefined8 *)(pFVar20 + 0x14) = *(undefined8 *)&pFVar17->Traits;
      *(undefined8 *)(pFVar20 + 0x1c) = uVar7;
      *(double *)(pFVar20 + 0x28) = pFVar17->SendTime;
      *(uint *)(pFVar20 + 0x30) = pFVar17->DelayFrameCount;
      pFVar20[0x34] = (FScriptContainerElement)pFVar17->bSent;
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      uVar12 = rand();
      dVar22 = (double)(this->PacketSimulationSettings).PktLagVariance;
      fVar25 = (float)(uVar12 & 0x7fff) * __real_38000100;
      dVar26 = (double)(((fVar25 - __real_3f000000) + fVar25) - __real_3f000000);
      dVar24 = (double)(this->PacketSimulationSettings).PktLag;
    }
LAB_147fb88c6:
    dVar24 = dVar26 * dVar22 + dVar24;
  }
  else {
    lVar5 = (this->SendBuffer).Num;
    this->bSendDelayedPacketsOutofOrder = true;
    puVar16 = FBitWriter::GetData(&this->SendBuffer);
    pFVar17 = FDelayedPacket::FDelayedPacket(&local_138,puVar16,(int)lVar5,param_2);
    piVar1 = &(this->Delayed).ArrayMax;
    iVar13 = (this->Delayed).ArrayNum;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x838,&(this->Delayed).AllocatorInstance,piVar1);
    }
    (this->Delayed).ArrayNum = iVar13 + 1;
    pFVar20 = (this->Delayed).AllocatorInstance.Data + (longlong)iVar13 * 0x38;
    *(undefined8 *)pFVar20 = 0;
    *(FScriptContainerElement **)pFVar20 = (pFVar17->Data).AllocatorInstance.Data;
    (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar20 + 8) = (pFVar17->Data).ArrayNum;
    *(int *)(pFVar20 + 0xc) = (pFVar17->Data).ArrayMax;
    (pFVar17->Data).ArrayNum = 0;
    (pFVar17->Data).ArrayMax = 0;
    *(int *)(pFVar20 + 0x10) = pFVar17->SizeBits;
    uVar7 = *(undefined8 *)&(pFVar17->Traits).NumBunchBits;
    *(undefined8 *)(pFVar20 + 0x14) = *(undefined8 *)&pFVar17->Traits;
    *(undefined8 *)(pFVar20 + 0x1c) = uVar7;
    *(double *)(pFVar20 + 0x28) = pFVar17->SendTime;
    *(uint *)(pFVar20 + 0x30) = pFVar17->DelayFrameCount;
    pFVar20[0x34] = (FScriptContainerElement)pFVar17->bSent;
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if ((this->OutPacketId & 1) == 0) {
      uVar12 = rand();
      dVar22 = (double)(this->PacketSimulationSettings).PktLagVariance;
      fVar25 = (float)(uVar12 & 0x7fff) * __real_38000100;
      dVar26 = (double)(((fVar25 - __real_3f000000) + fVar25) - __real_3f000000);
      dVar24 = (double)(this->PacketSimulationSettings).PktLagMin;
      goto LAB_147fb88c6;
    }
    uVar12 = rand();
    fVar25 = (float)(uVar12 & 0x7fff) * __real_38000100;
    dVar24 = (double)(((fVar25 - __real_3f000000) + fVar25) - __real_3f000000) *
             (double)(this->PacketSimulationSettings).PktLagVariance +
             (double)((this->PacketSimulationSettings).PktJitter +
                     (this->PacketSimulationSettings).PktLagMin);
  }
  *(double *)(pFVar20 + 0x28) = dVar24 * dVar23 + param_1;
LAB_147fb88db:
  if (0 < (this->PacketSimulationSettings).PktBufferBloatInMS) {
    if (pFVar20 == (FScriptContainerElement *)0x0) {
      lVar5 = (this->SendBuffer).Num;
      puVar16 = FBitWriter::GetData(&this->SendBuffer);
      pFVar17 = FDelayedPacket::FDelayedPacket(&local_90,puVar16,(int)lVar5,param_2);
      piVar1 = &(this->Delayed).ArrayMax;
      iVar13 = (this->Delayed).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&(this->Delayed).AllocatorInstance,piVar1);
      }
      (this->Delayed).ArrayNum = iVar13 + 1;
      pFVar20 = (this->Delayed).AllocatorInstance.Data + (longlong)iVar13 * 0x38;
      *(undefined8 *)pFVar20 = 0;
      *(FScriptContainerElement **)pFVar20 = (pFVar17->Data).AllocatorInstance.Data;
      (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar20 + 8) = (pFVar17->Data).ArrayNum;
      *(int *)(pFVar20 + 0xc) = (pFVar17->Data).ArrayMax;
      (pFVar17->Data).ArrayNum = 0;
      (pFVar17->Data).ArrayMax = 0;
      *(int *)(pFVar20 + 0x10) = pFVar17->SizeBits;
      uVar7 = *(undefined8 *)&(pFVar17->Traits).NumBunchBits;
      *(undefined8 *)(pFVar20 + 0x14) = *(undefined8 *)&pFVar17->Traits;
      *(undefined8 *)(pFVar20 + 0x1c) = uVar7;
      *(double *)(pFVar20 + 0x28) = pFVar17->SendTime;
      *(uint *)(pFVar20 + 0x30) = pFVar17->DelayFrameCount;
      pFVar20[0x34] = (FScriptContainerElement)pFVar17->bSent;
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
    }
    dVar22 = this->NextBufferBloatFlushOut;
    if ((dVar22 < param_1) && (this->NextBufferBloatActiveTimeOut <= param_1)) {
      dVar22 = (double)(this->PacketSimulationSettings).PktBufferBloatInMS * dVar23 + param_1;
      this->NextBufferBloatFlushOut = dVar22;
      this->NextBufferBloatActiveTimeOut = (double)BufferBloatCooldownTimeInMS * dVar23 + dVar22;
    }
    dVar23 = *(double *)(pFVar20 + 0x28);
    if (*(double *)(pFVar20 + 0x28) <= dVar22) {
      dVar23 = dVar22;
    }
    *(double *)(pFVar20 + 0x28) = dVar23;
  }
  return pFVar20 != (FScriptContainerElement *)0x0;
}

// CleanUp @ 147fb8ae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::CleanUp(UNetConnection *this)

{
  int *piVar1;
  TMap<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  undefined8 *puVar3;
  UNetDriver *pUVar4;
  UNetConnection *pUVar5;
  UChannel *this_00;
  undefined1 *puVar6;
  UReplicationSystem *this_01;
  PacketHandler *this_02;
  code *pcVar7;
  TMap<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar8;
  bool bVar9;
  UEnum *pUVar10;
  wchar_t *pwVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  FNetResult local_118;
  UEnum *local_e8;
  TMap<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>_>
  *local_e0;
  TMap<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>_>
  *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  TMap<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  void *local_78 [5];
  undefined4 local_4c;
  ulonglong uVar17;
  
  uVar17 = 0;
  uVar14 = uVar17;
  uVar22 = uVar17;
  if (0 < (this->Children).ArrayNum) {
    do {
      uVar16 = (uint)uVar14;
      uVar12 = 0;
      if ((int)uVar16 < (this->Children).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (**(code **)(**(longlong **)((this->Children).AllocatorInstance.Data + uVar22) + 0x348))();
      uVar14 = (ulonglong)(uVar16 + 1);
      uVar22 = uVar22 + 8;
    } while ((int)(uVar16 + 1) < (this->Children).ArrayNum);
  }
  piVar1 = &(this->Children).ArrayMax;
  (this->Children).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Children).AllocatorInstance,0,piVar1);
  }
  if ((4 < (byte)LogNet._0_1_) &&
     ((GCVarLogAllConnectionCleanup != false || (this->State != USOCK_Closed)))) {
    (**(code **)(this->_padding_ + 0x2e0))(this,local_78);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_78[0] != (void *)0x0) {
      FMemory::Free(local_78[0]);
    }
  }
  pUVar10 = StaticEnum<enum_ENetCloseResult>();
  local_118.Result = 0x19;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_118.ResultEnumObj.WeakPtr.ObjectIndex = 0;
  local_118.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
  local_e8 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  FWeakObjectPtr::operator=(&local_118.ResultEnumObj.WeakPtr,(FObjectPtr)&local_e8);
  local_118.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ErrorContext.Data.ArrayNum = 0;
  local_118.ErrorContext.Data.ArrayMax = 0;
  local_118.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
  local_118.RawResultEnumObj = pUVar10;
  pwVar11 = ::LexToString(Cleanup);
  ::FString::operator=(&local_118.ErrorContext,pwVar11);
  Close(this,&local_118);
  if (local_118.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    (**(code **)((longlong)local_118.NextResult + -0x10))((longlong)local_118.NextResult + -0x10);
  }
  if (local_118.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.ErrorContext.Data.AllocatorInstance.Data);
  }
  pUVar4 = (this->Driver).field0_0x0.DebugPtr;
  if (pUVar4 != (UNetDriver *)0x0) {
    pUVar5 = (pUVar4->ServerConnection).field0_0x0.DebugPtr;
    if (pUVar5 == (UNetConnection *)0x0) {
      UNetDriver::RemoveClientConnection(pUVar4,this);
    }
    else {
      if ((pUVar5 != this) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Driver->ServerConnection == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                             ,0x568,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (((this->Driver).field0_0x0.DebugPtr)->ServerConnection).field0_0x0.DebugPtr =
           (UNetConnection *)0x0;
    }
  }
  uVar12 = (this->OpenChannels).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar23 = (longlong)(int)uVar12 * 8;
    do {
      uVar16 = 0;
      if ((int)uVar12 < (this->OpenChannels).ArrayNum) {
        uVar16 = ~uVar12 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this_00 = *(UChannel **)((this->OpenChannels).AllocatorInstance.Data + lVar23);
      if (this_00 != (UChannel *)0x0) {
        UChannel::ConditionalCleanUp(this_00,true,Destroyed);
      }
      lVar23 = lVar23 + -8;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  local_c8 = &(this->KeepProcessingActorChannelBunchesMap).field_0x10;
  uVar12 = *(uint *)&(this->KeepProcessingActorChannelBunchesMap).field_0x28;
  local_e0 = &this->KeepProcessingActorChannelBunchesMap;
  uStack_cc = 1;
  local_b8 = 0;
  uStack_bc = local_b8;
  if (uVar12 != 0) {
    puVar19 = *(uint **)&(this->KeepProcessingActorChannelBunchesMap).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)local_c8;
    }
    uVar16 = *puVar19;
    uVar14 = uVar17;
    local_b8 = 0;
    while (uVar16 == 0) {
      iVar13 = (int)uVar17;
      local_b8 = (int)uVar14 + 0x20;
      uVar14 = (ulonglong)local_b8;
      uVar16 = iVar13 + 1;
      uVar17 = (ulonglong)uVar16;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_147fb8e25;
      uVar16 = puVar19[(longlong)iVar13 + 1];
    }
    uStack_cc = -uVar16 & uVar16;
    uVar14 = (ulonglong)uStack_cc * 2 + 1;
    lVar23 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_res20 = (int)lVar23;
    uStack_bc = (local_b8 - 1) + local_res20;
    if ((int)uVar12 < (int)uStack_bc) {
LAB_147fb8e25:
      uStack_bc = uVar12;
    }
  }
  puVar20 = &(this->KeepProcessingActorChannelBunchesMap).field_0x10;
  uVar16 = *(uint *)&(this->KeepProcessingActorChannelBunchesMap).field_0x28;
  uStack_b4 = local_4c;
  iStack_b0 = *(int *)&(this->KeepProcessingActorChannelBunchesMap).field_0x8 -
              *(int *)&(this->KeepProcessingActorChannelBunchesMap).field_0x34;
  uVar21 = uVar16 & 0xffffffe0;
  uStack_c0 = 0xffffffff;
  TStack_a0.CurrentBitIndex = uStack_bc;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  uStack_d0 = (undefined4)uVar17;
  TStack_a0._padding_ = CONCAT44(uStack_cc,uStack_d0);
  iVar13 = (int)uVar16 >> 5;
  TStack_a0._28_4_ = local_4c;
  TStack_a0.BaseBitIndex = local_b8;
  uStack_80 = CONCAT44(uStack_ac,iStack_b0);
  local_d8 = local_e0;
  local_a8 = local_e0;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c8;
  if ((((int)uVar16 < 0) || ((int)uVar12 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar2 = local_e0;
  uVar12 = *(uint *)&(this->KeepProcessingActorChannelBunchesMap).field_0x28;
  if (uVar16 != uVar12) {
    puVar6 = *(undefined1 **)&(this->KeepProcessingActorChannelBunchesMap).field_0x20;
    puVar18 = puVar20;
    if (puVar6 != (undefined1 *)0x0) {
      puVar18 = puVar6;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar23 = (longlong)iVar13;
      uVar21 = uVar21 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_147fb8f30;
      uVar16 = *(uint *)(puVar18 + lVar23 * 4 + 4);
    }
    uVar17 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar16 = (int)lVar23 + -1 + uVar21;
    if ((int)uVar12 < (int)uVar16) {
      uVar16 = uVar12;
    }
  }
LAB_147fb8f30:
  while( true ) {
    pTVar8 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      `TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_a0.CurrentBitIndex == uVar16) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar20)) && (pTVar8 == pTVar2))
    break;
    lVar23 = (longlong)TStack_a0.CurrentBitIndex * 0x20 + *(longlong *)pTVar8;
    puVar15 = *(undefined8 **)(lVar23 + 8);
    iVar13 = *(int *)(lVar23 + 0x10);
    puVar3 = puVar15 + iVar13;
    while( true ) {
      if (*(int *)(lVar23 + 0x10) != iVar13) {
        `TCheckedPointerIterator<TObjectPtr<UActorChannel>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (puVar15 == puVar3) break;
      UChannel::ConditionalCleanUp((UChannel *)*puVar15,true,Destroyed);
      puVar15 = puVar15 + 1;
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  uVar12 = (this->ConnectionHandle).ParentConnectionId;
  if ((uVar12 != 0) && ((this->ConnectionHandle).ChildConnectionId == 0)) {
    FNetTrace::TraceConnectionClosed(this->NetTraceId,uVar12);
  }
  pUVar4 = (this->Driver).field0_0x0.DebugPtr;
  if (((pUVar4 != (UNetDriver *)0x0) &&
      (uVar12 = (this->ConnectionHandle).ParentConnectionId, uVar12 != 0)) &&
     ((this->ConnectionHandle).ChildConnectionId == 0)) {
    this_01 = pUVar4->ReplicationSystem;
    if (this_01 != (UReplicationSystem *)0x0) {
      UReplicationSystem::RemoveConnection(this_01,uVar12);
    }
    FNetConnectionIdHandler::Free
              (&((this->Driver).field0_0x0.DebugPtr)->ConnectionIdHandler,
               (this->ConnectionHandle).ParentConnectionId);
  }
  pTVar2 = &this->KeepProcessingActorChannelBunchesMap;
  bVar9 = 1 < *(int *)&(this->KeepProcessingActorChannelBunchesMap).field_0x48;
  if (!bVar9) {
    TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)pTVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)pTVar2,0,*(int *)&(this->KeepProcessingActorChannelBunchesMap).field_0x8);
  puVar20 = &(this->KeepProcessingActorChannelBunchesMap).field_0xc;
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x8 = 0;
  if (*(int *)puVar20 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)pTVar2,0,(int *)puVar20);
  }
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x34 = 0;
  iVar13 = *(int *)&(this->KeepProcessingActorChannelBunchesMap).field_0x2c;
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x28 = 0;
  if ((iVar13 < 0) || (0x80 < iVar13)) {
    *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->KeepProcessingActorChannelBunchesMap).field_0x10,0);
  }
  if (bVar9) {
    *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x48 = 1;
    TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)pTVar2);
  }
  (this->PackageMap).field0_0x0.DebugPtr = (UPackageMap *)0x0;
  if (GIsRunning != false) {
    (**(code **)(this->_padding_ + 0x3f8))(this);
  }
  ClearDormantReplicatorsReference(this);
  UE::Net::Private::FDormantReplicatorHolder::EmptySet(&this->DormantReplicatorSet);
  this_02 = (this->Handler).Ptr;
  if (this_02 != (PacketHandler *)0x0) {
    (this->Handler).Ptr = (PacketHandler *)0x0;
    PacketHandler::~PacketHandler(this_02);
    ::operator_delete(this_02,0x270);
  }
  (**(code **)(this->_padding_ + 0x3d0))(this,4);
  (this->Driver).field0_0x0.DebugPtr = (UNetDriver *)0x0;
  UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this);
  FNetTrace::DestroyTraceCollector(this->InTraceCollector);
  FNetTrace::DestroyTraceCollector(this->OutTraceCollector);
  this->InTraceCollector = (FNetTraceCollector *)0x0;
  this->OutTraceCollector = (FNetTraceCollector *)0x0;
  return;
}

// CleanupDormantActorState @ 147fb9170

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::CleanupDormantActorState(UNetConnection *this)

{
  ClearDormantReplicatorsReference(this);
  UE::Net::Private::FDormantReplicatorHolder::EmptySet(&this->DormantReplicatorSet);
  return;
}

// CleanupDormantReplicatorsForActor @ 147fb91a0

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

void __thiscall
UNetConnection::CleanupDormantReplicatorsForActor(UNetConnection *this,AActor *param_1)

{
  code *pcVar1;
  bool bVar2;
  FNetworkObjectList *this_00;
  undefined1 auStack_118 [32];
  FWeakObjectPtr local_f8;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *local_f0;
  AActor *local_e8;
  code *local_e0;
  TWeakObjectPtr<UObject,FWeakObjectPtr> **local_d8;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_d0;
  TWeakObjectPtr<UObject,FWeakObjectPtr> local_b8 [16];
  TWeakObjectPtr<UObject,FWeakObjectPtr> *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  if (param_1 != (AActor *)0x0) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
    if ((this->Driver).field0_0x0.DebugPtr != (UNetDriver *)0x0) {
      local_f0 = local_b8;
      local_d8 = &local_f0;
      local_2c = 0x10;
      local_38 = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
      local_e0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UNetConnection::CleanupDormantReplicatorsForActor'::__l8::<lambda_1>,void,FObjectKey,FObjectKey,TSharedRef<FObjectReplicator,1>_const_&>
                 ::Call;
      local_30 = 0;
      UE::Net::Private::FDormantReplicatorHolder::ForEachDormantReplicatorOfActor
                (&this->DormantReplicatorSet,param_1,
                 (TFunctionRef<void___cdecl(FObjectKey,FObjectKey,TSharedRef<FObjectReplicator,1>_const_&)>
                  *)&local_e0);
      if (0 < local_30) {
        this_00 = UNetDriver::GetNetworkObjectList((this->Driver).field0_0x0.DebugPtr);
        local_d0.ArrayNum = local_30;
        local_d0.DataPtr = local_b8;
        if (local_38 != (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0) {
          local_d0.DataPtr = local_38;
        }
        if (local_30 < 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_f8.ObjectIndex = 0;
        local_f8.ObjectSerialNumber = 0;
        local_e8 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_e8);
        FNetworkObjectList::RemoveMultipleSubObjectChannelReference
                  (this_00,(FObjectKey)local_f8,&local_d0,(UObject *)this);
      }
      if (local_38 != (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0) {
        FMemory::Free(local_38);
      }
    }
    UE::Net::Private::FDormantReplicatorHolder::CleanupAllReplicatorsOfActor
              (&this->DormantReplicatorSet,param_1);
  }
  return;
}

// CleanupStaleDormantReplicators @ 147fb9350

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::CleanupStaleDormantReplicators(UNetConnection *this)

{
  UNetDriver *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  pUVar1 = (this->Driver).field0_0x0.DebugPtr;
  if (pUVar1 == (UNetDriver *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5435733364554340128>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                       ,0x1720,"Driver");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pUVar1->NetworkObjects).Object == (FNetworkObjectList *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Net::Private::FDormantReplicatorHolder::CleanupStaleObjects
              (&this->DormantReplicatorSet,(pUVar1->NetworkObjects).Object,(UObject *)this);
  }
  return;
}

// ClearDormantFlushedObjectsForActor @ 147fb9410

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
UNetConnection::ClearDormantFlushedObjectsForActor(UNetConnection *this,AActor *param_1)

{
  UE::Net::Private::FDormantReplicatorHolder::ClearFlushedObjectsForActor
            (&this->DormantReplicatorSet,param_1);
  return;
}

// ClearDormantReplicatorsReference @ 147fb9430

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

void __thiscall UNetConnection::ClearDormantReplicatorsReference(UNetConnection *this)

{
  ulonglong uVar1;
  FObjectKey FVar2;
  int iVar3;
  uint uVar4;
  FObjectKey FVar5;
  UNetDriver *pUVar6;
  FNetworkObjectList *this_00;
  code *pcVar7;
  FObjectKey *pFVar8;
  UNetConnection *pUVar9;
  FDormantReplicatorHolder *pFVar10;
  bool bVar11;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  FObjectKey FVar18;
  uint *puVar19;
  FDormantReplicatorHolder *pFVar20;
  FObjectKey *pFVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  undefined1 auStackY_258 [32];
  undefined1 local_208;
  undefined1 local_207 [3];
  uint local_204;
  uchar local_200 [8];
  FDormantReplicatorHolder *local_1f8;
  int iStack_1f0;
  uint uStack_1ec;
  undefined1 *local_1e8;
  uchar auStack_1e0 [4];
  int iStack_1dc;
  int local_1d8;
  int iStack_1d0;
  uchar auStack_1cc [4];
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  FObjectKey local_1b8;
  FObjectKey *local_1b0;
  UNetConnection *local_1a8;
  FObjectKey *local_1a0;
  TBitArray<FDefaultBitArrayAllocator> *local_198;
  FDormantReplicatorHolder *local_190;
  FObjectKey *local_188;
  int iStack_180;
  uint uStack_17c;
  FObjectKey local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  int iStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  FObjectKey *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  FDormantReplicatorHolder *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_f8 [2];
  undefined4 local_cc;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> local_c8;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if ((this->Driver).field0_0x0.DebugPtr != (UNetDriver *)0x0) {
    iStack_1f0 = 0;
    uStack_1ec = 1;
    pFVar20 = &this->DormantReplicatorSet;
    pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)
              &(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x10;
    local_c8.SecondaryData = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0;
    local_40 = 0;
    local_1d8 = 0;
    local_3c = 0x10;
    iVar3 = *(int *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x28;
    iStack_1dc = 0;
    if (iVar3 != 0) {
      puVar19 = *(uint **)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)pTVar22;
      }
      uVar16 = *puVar19;
      iStack_1f0 = 0;
      local_1d8 = 0;
      while (uVar16 == 0) {
        lVar13 = (longlong)iStack_1f0;
        local_1d8 = local_1d8 + 0x20;
        iStack_1f0 = iStack_1f0 + 1;
        iStack_1dc = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1f0) goto LAB_147fb952d;
        uVar16 = puVar19[lVar13 + 1];
      }
      uStack_1ec = -uVar16 & uVar16;
      uVar1 = (ulonglong)uStack_1ec * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_1c8 = (int)lVar13;
      iStack_1dc = local_1d8 + -1 + local_1c8;
      if (iVar3 < iStack_1dc) {
        iStack_1dc = iVar3;
      }
    }
LAB_147fb952d:
    iStack_1d0 = *(int *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x8 -
                 *(int *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x34;
    uVar16 = *(uint *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x28;
    uVar15 = uVar16 & 0xffffffe0;
    TStack_120._padding_ = CONCAT44(uStack_1ec,iStack_1f0);
    auStack_1e0[0] = 0xff;
    auStack_1e0[1] = 0xff;
    auStack_1e0[2] = 0xff;
    auStack_1e0[3] = 0xff;
    TStack_120.CurrentBitIndex = iStack_1dc;
    TStack_120.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar16 >> 5;
    TStack_120._28_4_ = local_cc;
    TStack_120.BaseBitIndex = local_1d8;
    uStack_100 = CONCAT44(auStack_1cc,iStack_1d0);
    local_204 = uVar16;
    local_1f8 = pFVar20;
    local_1e8 = (undefined1 *)pTVar22;
    local_1a8 = this;
    local_198 = pTVar22;
    local_190 = pFVar20;
    local_128 = pFVar20;
    TStack_120.Array = pTVar22;
    if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar4 = *(uint *)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x28;
    if (uVar16 != uVar4) {
      puVar17 = *(undefined1 **)&(this->DormantReplicatorSet).ActorReplicatorSet.Elements.field_0x20
      ;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = (undefined1 *)pTVar22;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
      while (uVar16 == 0) {
        lVar13 = (longlong)iVar14;
        uVar15 = uVar15 + 0x20;
        iVar14 = iVar14 + 1;
        uVar16 = uVar4;
        local_204 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_147fb9651;
        uVar16 = *(uint *)(puVar17 + lVar13 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_1c4 = (int)lVar13;
      uVar16 = local_1c4 + -1 + uVar15;
      local_204 = uVar16;
      if ((int)uVar4 < (int)uVar16) {
        uVar16 = uVar4;
        local_204 = uVar4;
      }
    }
LAB_147fb9651:
    while( true ) {
      pFVar10 = local_128;
      if (*(int *)&(local_128->ActorReplicatorSet).Elements.field_0x8 -
          *(int *)&(local_128->ActorReplicatorSet).Elements.field_0x34 != (int)uStack_100) {
        local_208 = 0;
        `TSparseArray<TSparseSetElement<UE::Net::Private::FActorDormantReplicators>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_208);
      }
      if (((TStack_120.CurrentBitIndex == uVar16) && (TStack_120.Array == pTVar22)) &&
         (pFVar10 == pFVar20)) break;
      iStack_180 = 0;
      pFVar21 = (FObjectKey *)
                ((longlong)TStack_120.CurrentBitIndex * 0x60 +
                *(longlong *)&(pFVar10->ActorReplicatorSet).Elements);
      local_168 = 0;
      iVar3 = pFVar21[6].ObjectIndex;
      FVar2 = (FObjectKey)(pFVar21 + 3);
      uStack_17c = 1;
      FVar5 = *pFVar21;
      local_1b0 = pFVar21 + 1;
      iStack_16c = 0;
      if (iVar3 != 0) {
        FVar18 = FVar2;
        if (pFVar21[5] != (FObjectKey)0x0) {
          FVar18 = pFVar21[5];
        }
        uVar16 = *(uint *)FVar18;
        while (uVar16 == 0) {
          lVar13 = (longlong)iStack_180;
          local_168 = local_168 + 0x20;
          iStack_180 = iStack_180 + 1;
          iStack_16c = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180)
          goto LAB_147fb972e;
          uVar16 = ((int *)((longlong)FVar18 + 4))[lVar13];
        }
        uStack_17c = -uVar16 & uVar16;
        uVar1 = (ulonglong)uStack_17c * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_1c0 = (int)lVar13;
        iStack_16c = local_168 + -1 + local_1c0;
        if (iVar3 < iStack_16c) {
          iStack_16c = iVar3;
        }
      }
LAB_147fb972e:
      iStack_164 = iStack_1dc;
      iStack_160 = pFVar21[2].ObjectIndex - pFVar21[7].ObjectSerialNumber;
      uVar16 = pFVar21[6].ObjectIndex;
      uVar15 = uVar16 & 0xffffffe0;
      TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
      uStack_170 = 0xffffffff;
      TStack_150.CurrentBitIndex = iStack_16c;
      TStack_150.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar16 >> 5;
      TStack_150._28_4_ = iStack_1dc;
      TStack_150.BaseBitIndex = local_168;
      uStack_130 = CONCAT44(uStack_15c,iStack_160);
      local_1b8 = FVar5;
      local_1a0 = pFVar21;
      local_188 = local_1b0;
      local_178 = FVar2;
      local_158 = local_1b0;
      TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
      if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar8 = local_1b0;
      uVar4 = pFVar21[6].ObjectIndex;
      if (uVar16 != uVar4) {
        FVar18 = FVar2;
        if (pFVar21[5] != (FObjectKey)0x0) {
          FVar18 = pFVar21[5];
        }
        uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)FVar18 + (longlong)iVar14 * 4);
        while (uVar16 == 0) {
          lVar13 = (longlong)iVar14;
          uVar15 = uVar15 + 0x20;
          iVar14 = iVar14 + 1;
          uVar16 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_147fb983f;
          uVar16 = ((int *)((longlong)FVar18 + 4))[lVar13];
        }
        uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_1bc = (int)lVar13;
        uVar16 = local_1bc + -1 + uVar15;
        if ((int)uVar4 < (int)uVar16) {
          uVar16 = uVar4;
        }
      }
LAB_147fb983f:
      iVar3 = local_1b8.ObjectSerialNumber;
      while( true ) {
        pFVar21 = local_158;
        if (local_158[1].ObjectIndex - local_158[6].ObjectSerialNumber != (int)uStack_130) {
          local_207[0] = 0;
          `TSparseArray<TSparseSetElement<UE::Net::Private::FDormantObjectReplicator>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_207);
        }
        pUVar9 = local_1a8;
        if (((TStack_150.CurrentBitIndex == uVar16) && ((FObjectKey)TStack_150.Array == FVar2)) &&
           (pFVar21 == pFVar8)) break;
        FVar18 = *pFVar21;
        lVar13 = (longlong)TStack_150.CurrentBitIndex * 0x20;
        if ((*(int *)(lVar13 + (longlong)FVar18) != FVar5.ObjectIndex) ||
           (*(int *)(lVar13 + 4 + (longlong)FVar18) != iVar3)) {
          local_200 = *(uchar (*) [8])(*(longlong *)(lVar13 + 8 + (longlong)FVar18) + 0xd8);
          FVar12 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_c8;
          if (local_c8.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0
             ) {
            FVar12 = local_c8.SecondaryData;
          }
          if ((ulonglong)FVar12 <= local_200) {
            FVar12 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_c8;
            if (local_c8.SecondaryData !=
                (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
              FVar12 = local_c8.SecondaryData;
            }
            if ((local_200 < (uchar *)((longlong)FVar12 + (longlong)local_3c * 8)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (local_40 == local_3c) {
            local_40 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                                 (0x408,&local_c8,&local_3c);
          }
          lVar13 = (longlong)local_40;
          FVar12 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&local_c8;
          if (local_c8.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0
             ) {
            FVar12 = local_c8.SecondaryData;
          }
          local_40 = local_40 + 1;
          *(uchar (*) [8])((longlong)FVar12 + lVar13 * 8) = local_200;
        }
        TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
      }
      if (local_40 != 0) {
        pUVar6 = (local_1a8->Driver).field0_0x0.DebugPtr;
        if (((pUVar6->NetworkObjects).Object == (FNetworkObjectList *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar3 = local_40;
        this_00 = (pUVar6->NetworkObjects).Object;
        local_f8[0].DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_c8;
        if (local_c8.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0)
        {
          local_f8[0].DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)local_c8.SecondaryData;
        }
        if ((local_40 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_f8[0].ArrayNum = iVar3;
        FNetworkObjectList::RemoveMultipleSubObjectChannelReference
                  (this_00,*local_1a0,local_f8,(UObject *)pUVar9);
        local_40 = 0;
        if ((local_3c < 0) && (local_3c != 0)) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                    (8,4,0,&local_c8,0,&local_3c);
        }
      }
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      pFVar20 = local_190;
      pTVar22 = local_198;
      uVar16 = local_204;
    }
    if (local_c8.SecondaryData != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      FMemory::Free((void *)local_c8.SecondaryData);
    }
  }
  return;
}

// ClientHasInitializedLevel @ 147fb9d90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UNetConnection::ClientHasInitializedLevel(UNetConnection *this,ULevel *param_1)

{
  longlong lVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UPackage *pUVar6;
  undefined1 *puVar7;
  FName local_res8;
  
  pUVar6 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  FVar2 = (FName)pUVar6->_padding_;
  local_res8 = FVar2;
  uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (*(int *)&(this->ClientVisibleActorOuters).field_0x8 !=
      *(int *)&(this->ClientVisibleActorOuters).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ClientVisibleActorOuters).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ClientVisibleActorOuters).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->ClientVisibleActorOuters).field_0x48 - 1U &
                              FVar2.Number + uVar4) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)&this->ClientVisibleActorOuters + (longlong)iVar5 * 0x14;
        if (*(FName *)(*(longlong *)&this->ClientVisibleActorOuters + (longlong)iVar5 * 0x14) ==
            FVar2) {
          puVar7 = (undefined1 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar7 = (undefined1 *)0x0;
          }
          if (puVar7 != (undefined1 *)0x0) {
            return (bool)*puVar7;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0xc);
      } while (iVar5 != -1);
    }
  }
  bVar3 = UpdateCachedLevelVisibility(this,&local_res8);
  return bVar3;
}

// ClientHasInitializedLevelFor @ 147fb9e70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UNetConnection::ClientHasInitializedLevelFor(UNetConnection *this,AActor *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  ULevel *pUVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x3a0);
  pUVar2 = AActor::GetLevel(param_1);
                    /* WARNING: Could not recover jumptable at 0x000147fb9ea2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(this,pUVar2);
  return (bool)uVar1;
}

// Close @ 147fba6d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
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
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall UNetConnection::Close(UNetConnection *this,FNetResult *param_1)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  int iVar2;
  uint uVar3;
  PacketHandler *pPVar4;
  FNetConnAnalyticsData *pFVar5;
  FRPCDoSDetection *this_01;
  FNetPing *pFVar6;
  code *pcVar7;
  bool bVar8;
  FString *pFVar9;
  void *pvVar10;
  longlong *plVar11;
  size_t sVar12;
  FDateTime this_02;
  byte bVar13;
  ForAnyElementType FVar14;
  ulong64 uVar15;
  wchar_t *_Str;
  wchar_t *_Str_00;
  int iVar16;
  undefined1 auStackY_1138 [32];
  FName local_1108;
  LARGE_INTEGER local_1100 [2];
  FString local_10f0;
  FString local_10e0;
  FString local_10d0;
  FString local_10c0;
  FString local_10b0;
  void *local_1098 [2];
  void *local_1088 [2];
  FString local_1078;
  TStringBuilderBase<wchar_t> local_1068;
  wchar_t local_1048 [2048];
  ulonglong local_48 [2];
  
  local_48[1] = 0x147fba6ed;
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_1138;
  _Str_00 = L"";
  bVar13 = this->bInternalAck;
  iVar16 = 0;
  if (bVar13 != 0) {
    this->bReserveDestroyedChannels = false;
    if ((bVar13 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInternalAck()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                           ,0x108d,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_00 = &this->ReservedChannels;
    this->bIgnoreReservedChannels = false;
    bVar8 = 1 < (this->ReservedChannels).HashSize;
    if (!bVar8) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
    }
    puVar1 = &(this->ReservedChannels).Elements.field_0xc;
    *(undefined4 *)&(this->ReservedChannels).Elements.field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->ReservedChannels).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ReservedChannels).Elements.field_0x34 = 0;
    iVar2 = *(int *)&(this->ReservedChannels).Elements.field_0x2c;
    *(undefined4 *)&(this->ReservedChannels).Elements.field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->ReservedChannels).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->ReservedChannels).Elements.field_0x10,0);
    }
    if (bVar8) {
      (this->ReservedChannels).HashSize = 1;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
    }
  }
  if (((this->Driver).field0_0x0.DebugPtr == (UNetDriver *)0x0) || (this->State == USOCK_Closed))
  goto LAB_147fbacd9;
  if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
     (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
    if (__CsvProfilerStat1084 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
      __CsvProfilerStat1084 = true;
    }
    FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
    pFVar9 = (FString *)(**(code **)(this->_padding_ + 0x2d0))(this,local_1098,0);
    local_1108 = (FName)this->_padding_;
    ::FName::ToString(&local_1108,&local_10b0);
    ::FString::ConcatFC(&local_10c0,&local_10b0,L" ");
    ::FString::ConcatFF(&local_10f0,&local_10c0,pFVar9);
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_10f0.Data.ArrayNum != 0) {
      FVar14.Data = local_10f0.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_10d0,(wchar_t *)FVar14.Data);
    ::FString::FString(&local_10e0,L"CLOSE");
    FNetworkProfiler::TrackEvent(&GNetworkProfiler,&local_10e0,&local_10d0,this);
    if (local_10e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10e0.Data.AllocatorInstance.Data);
    }
    if (local_10d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10d0.Data.AllocatorInstance.Data);
    }
    if (local_10f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10f0.Data.AllocatorInstance.Data);
    }
    if (local_10c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10c0.Data.AllocatorInstance.Data);
    }
    if (local_10b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_10b0.Data.AllocatorInstance.Data);
    }
    if (local_1098[0] != (void *)0x0) {
      FMemory::Free(local_1098[0]);
    }
    FCsvProfiler::EndExclusiveStat("NetworkProfiler");
  }
  local_1068.Base = local_1048;
  local_1068.bIsDynamic = false;
  local_1068.bIsExternal = false;
  local_1068.CurPos = local_1048;
  local_1068.End = (wchar_t *)local_48;
  pvVar10 = FGenericPlatformString::Memcpy(local_1048,L"UNetConnection::Close: ",0x2e);
  local_1068.CurPos = (wchar_t *)((longlong)pvVar10 + 0x2e);
  plVar11 = (longlong *)(**(code **)(this->_padding_ + 0x2e0))(this,local_1088);
  if ((int)plVar11[1] == 0) {
    _Str = L"";
LAB_147fba9a3:
    sVar12 = wcslen(_Str);
    iVar16 = (int)sVar12;
  }
  else {
    _Str = (wchar_t *)*plVar11;
    if (_Str != (wchar_t *)0x0) goto LAB_147fba9a3;
  }
  uVar15 = (ulong64)iVar16;
  if (local_1068.End < local_1068.CurPos + uVar15) {
    TStringBuilderBase<wchar_t>::Extend(&local_1068,uVar15);
  }
  if (iVar16 != 0) {
    pvVar10 = FGenericPlatformString::Memcpy(local_1068.CurPos,_Str,uVar15 * 2);
    local_1068.CurPos = (wchar_t *)((longlong)pvVar10 + uVar15 * 2);
  }
  if (local_1088[0] != (void *)0x0) {
    FMemory::Free(local_1088[0]);
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_1068,L", Channels: %i, Time: ");
  this_02 = FDateTime::UtcNow();
  pFVar9 = FDateTime::ToString((FDateTime *)this_02.Ticks,&local_1078,L"%Y.%m.%d-%H.%M.%S");
  if ((pFVar9->Data).ArrayNum == 0) {
LAB_147fbaa42:
    sVar12 = wcslen(_Str_00);
    iVar16 = (int)sVar12;
  }
  else {
    _Str_00 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    iVar16 = 0;
    if ((FScriptContainerElement *)_Str_00 != (FScriptContainerElement *)0x0) goto LAB_147fbaa42;
  }
  uVar15 = (ulong64)iVar16;
  if (local_1068.End < local_1068.CurPos + uVar15) {
    TStringBuilderBase<wchar_t>::Extend(&local_1068,uVar15);
  }
  if (iVar16 != 0) {
    pvVar10 = FGenericPlatformString::Memcpy(local_1068.CurPos,_Str_00,uVar15 * 2);
    local_1068.CurPos = (wchar_t *)((longlong)pvVar10 + uVar15 * 2);
  }
  if (local_1078.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1078.Data.AllocatorInstance.Data);
  }
  if (GNetCloseTimingDebug != 0) {
    QueryPerformanceCounter(local_1100);
    TStringBuilderBase<wchar_t>::AppendfImpl
              (&local_1068,
               L", TimeSinceTickDispatch: %f, TimeSinceRecv: %f, TimeSinceTickFlush: %f, TimeSinceSend: %f"
              );
  }
  if (4 < (byte)LogNet._0_1_) {
    if (local_1068.End < local_1068.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_1068,1);
    }
    *local_1068.CurPos = L'\0';
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  SendCloseReason(this,param_1);
  if (((this->Channels).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(longlong *)(this->Channels).AllocatorInstance.Data != 0) {
    if (((this->Channels).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar11 = *(longlong **)(this->Channels).AllocatorInstance.Data;
    (**(code **)(*plVar11 + 0x2c8))(plVar11,0);
  }
  uVar3 = (this->ConnectionHandle).ParentConnectionId;
  this->State = USOCK_Closed;
  FNetTrace::TraceConnectionStateUpdated(this->NetTraceId,uVar3,'\x01');
  pPVar4 = (this->Handler).Ptr;
  if (((pPVar4 == (PacketHandler *)0x0) || (pPVar4->State == Initialized)) &&
     (bVar8 = HasReceivedClientPacket(this), bVar8)) {
    (**(code **)(this->_padding_ + 0x308))(this,0);
  }
  pFVar5 = (this->NetAnalyticsData).Object;
  if (pFVar5 != (FNetConnAnalyticsData *)0x0) {
    FNetConnAnalyticsVars::CommitAnalytics
              (&this->AnalyticsVars,(FNetConnAnalyticsVars *)&pFVar5->field_0x20);
  }
  this_01 = (this->RPCDoS).Ptr;
  if (this_01 != (FRPCDoSDetection *)0x0) {
    FRPCDoSDetection::NotifyClose(this_01);
  }
  pFVar6 = (this->NetPing).Ptr;
  if (pFVar6 != (FNetPing *)0x0) {
    (this->NetPing).Ptr = (FNetPing *)0x0;
    (**(code **)&pFVar6[-1].OverridePingUDPQoSAddress.Data.ArrayNum)();
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1068);
LAB_147fbacd9:
  this->LogCallLastTime = 0.0;
  this->LogCallCount = 0;
  this->LogSustainedCount = 0;
  return;
}

// ConsumePacketAnalytics @ 147fbb700

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
UNetConnection::ConsumePacketAnalytics(UNetConnection *this,FNetConnectionPacketAnalytics *param_1)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FNetConnectionPacketAnalytics *this_00;
  
  this_00 = &this->PacketAnalytics;
  uVar2 = this_00->NumberOfAcksThisFrame;
  uVar3 = (this->PacketAnalytics).NumberOfNaksThisFrame;
  uVar4 = (this->PacketAnalytics).NumberOfMissingPacketsThisFrame;
  *(undefined4 *)&param_1->field_0x0 = *(undefined4 *)&this_00->field_0x0;
  param_1->NumberOfAcksThisFrame = uVar2;
  param_1->NumberOfNaksThisFrame = uVar3;
  param_1->NumberOfMissingPacketsThisFrame = uVar4;
  uVar2 = (this->PacketAnalytics).CurrentRunOfDroppedOutPackets;
  uVar3 = (this->PacketAnalytics).LongestRunOfDroppedOutPackets;
  uVar4 = (this->PacketAnalytics).LongestRunOfDroppedInPackets;
  param_1->NumberOfPacketsThisFrame = (this->PacketAnalytics).NumberOfPacketsThisFrame;
  param_1->CurrentRunOfDroppedOutPackets = uVar2;
  param_1->LongestRunOfDroppedOutPackets = uVar3;
  param_1->LongestRunOfDroppedInPackets = uVar4;
  uVar2 = (this->PacketAnalytics).NumberOfFramesWithNoPackets;
  uVar1 = (this->PacketAnalytics).NumberOfTrackedFrames;
  param_1->NumberOfFramesWithBurstsOfPacketLoss =
       (this->PacketAnalytics).NumberOfFramesWithBurstsOfPacketLoss;
  param_1->NumberOfFramesWithNoPackets = uVar2;
  param_1->NumberOfTrackedFrames = uVar1;
  FNetConnectionPacketAnalytics::Reset(this_00);
  return;
}

// ConsumeQueuedActorDelinquencyAnalytics @ 147fbb730

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
UNetConnection::ConsumeQueuedActorDelinquencyAnalytics
          (UNetConnection *this,FNetQueuedActorDelinquencyAnalytics *param_1)

{
  UPackageMapClient *this_00;
  bool bVar1;
  UClass *pUVar2;
  
  if ((this->PackageMap).field0_0x0.DebugPtr != (UPackageMap *)0x0) {
    pUVar2 = Z_Construct_UClass_UPackageMapClient_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->PackageMap,pUVar2);
    if ((bVar1) &&
       (this_00 = (UPackageMapClient *)(this->PackageMap).field0_0x0.DebugPtr,
       this_00 != (UPackageMapClient *)0x0)) {
      UPackageMapClient::ConsumeQueuedActorDelinquencyAnalytics(this_00,param_1);
      return;
    }
  }
  FDelinquencyAnalytics::Reset(&param_1->DelinquentQueuedActors);
  param_1->MaxConcurrentQueuedActors = 0;
  return;
}

// ConsumeSaturationAnalytics @ 147fbb7a0

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
UNetConnection::ConsumeSaturationAnalytics
          (UNetConnection *this,FNetConnectionSaturationAnalytics *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FNetConnectionSaturationAnalytics *this_00;
  
  this_00 = &this->SaturationAnalytics;
  uVar1 = this_00->NumberOfSaturatedFrames;
  uVar2 = (this->SaturationAnalytics).LongestRunOfSaturatedFrames;
  uVar3 = (this->SaturationAnalytics).NumberOfReplications;
  param_1->NumberOfTrackedFrames = this_00->NumberOfTrackedFrames;
  param_1->NumberOfSaturatedFrames = uVar1;
  param_1->LongestRunOfSaturatedFrames = uVar2;
  param_1->NumberOfReplications = uVar3;
  uVar1 = (this->SaturationAnalytics).LongestRunOfSaturatedReplications;
  uVar2 = (this->SaturationAnalytics).CurrentRunOfSaturatedFrames;
  uVar3 = (this->SaturationAnalytics).CurrentRunOfSaturatedReplications;
  param_1->NumberOfSaturatedReplications = (this->SaturationAnalytics).NumberOfSaturatedReplications
  ;
  param_1->LongestRunOfSaturatedReplications = uVar1;
  param_1->CurrentRunOfSaturatedFrames = uVar2;
  param_1->CurrentRunOfSaturatedReplications = uVar3;
  FNetConnectionSaturationAnalytics::Reset(this_00);
  return;
}

// CreateChannelByName @ 147fbfc10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChannel * __thiscall
UNetConnection::CreateChannelByName
          (UNetConnection *this,FName *param_1,EChannelCreateFlags param_2,int param_3)

{
  int *piVar1;
  AActor *pAVar2;
  FScriptContainerElement *pFVar3;
  TObjectPtr<UChannel>_u_0 *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_class_UChannel_*___cdecl_UNetConnection::CreateChannelByName(FName_const_&,EChannelCreateFlags,int)_::_2_::FStat_STAT_NetConnection_CreateChannelByName>
  FVar13;
  UChannel *pUVar14;
  longlong lVar15;
  TObjectPtr<UChannel>_u_0 TVar16;
  FChannelDefinition *pFVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar18;
  FName FVar19;
  FColor_u_0 local_res8 [2];
  FName *local_res10;
  EChannelCreateFlags local_res18;
  FLLMScope local_res20 [2];
  TObjectPtr<UChannel>_u_0 local_f8;
  uint local_f0;
  uint uStack_ec;
  FName local_e8;
  FName local_e0;
  FString local_d0;
  FName local_c0;
  FName local_b8;
  TObjectPtr<UChannel>_u_0 local_b0;
  LARGE_INTEGER local_a8;
  FMemScope local_a0;
  FStatMessage local_98;
  FName local_88;
  FName local_80;
  FString local_78;
  void *local_68 [2];
  FString local_58;
  
  local_res10 = param_1;
  local_res18 = param_2;
  FLLMScope::FLLMScope
            (local_res20,LLMTagDeclaration_NetConnection.UniqueName,false,None,Default,true);
  local_c0 = LLMTagDeclaration_NetConnection.UniqueName;
  FMemScope::FMemScope(&local_a0,&local_c0,true);
  TVar16.DebugPtr = (UChannel *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_NetConnection_CreateChannelByName ==
        (FThreadSafeStaticStat<_public:_class_UChannel_*___cdecl_UNetConnection::CreateChannelByName(FName_const_&,EChannelCreateFlags,int)_::_2_::FStat_STAT_NetConnection_CreateChannelByName>
         )0x0) {
      pFVar12 = ::FName::FName(&local_88,"STAT_NetConnection_CreateChannelByName");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetConnection_CreateChannelByName,
                 *pFVar12,L"STAT_NetConnection_CreateChannelByName","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_NetConnection_CreateChannelByName;
  if (StatPtr_STAT_NetConnection_CreateChannelByName ==
      (FThreadSafeStaticStat<_public:_class_UChannel_*___cdecl_UNetConnection::CreateChannelByName(FName_const_&,EChannelCreateFlags,int)_::_2_::FStat_STAT_NetConnection_CreateChannelByName>
       )0x0) {
    pFVar12 = ::FName::FName(&local_80,"STAT_NetConnection_CreateChannelByName");
    FVar13 = (FThreadSafeStaticStat<_public:_class_UChannel_*___cdecl_UNetConnection::CreateChannelByName(FName_const_&,EChannelCreateFlags,int)_::_2_::FStat_STAT_NetConnection_CreateChannelByName>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_NetConnection_CreateChannelByName,*pFVar12,
                          L"STAT_NetConnection_CreateChannelByName","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar10 = FVar19.Number;
  if ((FVar18.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.ComparisonIndex.Value = FVar18.Value;
        local_e8.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                   ,0x11c7);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f0 = FVar18.Value;
      uStack_ec = uVar10;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar7 = true;
      goto LAB_147fbfdbd;
    }
  }
  bVar7 = false;
  FVar19 = local_e0;
LAB_147fbfdbd:
  pFVar12 = local_res10;
  bVar9 = UNetDriver::IsKnownChannelName((this->Driver).field0_0x0.DebugPtr,local_res10);
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Driver->IsKnownChannelName(ChName)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0x11c9,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    pUVar14 = (UChannel *)(*pcVar5)();
    return pUVar14;
  }
  lVar15 = (**(code **)(this->_padding_ + 0x2c8))(this);
  if (lVar15 != 0) {
    (**(code **)(this->_padding_ + 0x2e0))(this,local_68);
    ::FName::ToString(local_res10,&local_78);
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetUChildConnection() == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                       ,0x11ca,
                       L"Creating channels on child connections is unsupported: ChName: %s ChIndex: %d Connection: %s"
                      );
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    pFVar12 = local_res10;
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pUVar14 = (UChannel *)(*pcVar5)();
      return pUVar14;
    }
  }
  (**(code **)(this->_padding_ + 0x300))(this);
  if ((param_3 == -1) && (param_3 = GetFreeChannelIndex(this,pFVar12), param_3 == 0xffffffff)) {
    if ((this->bHasWarnedAboutChannelLimit == false) &&
       (this->bHasWarnedAboutChannelLimit = true, 2 < (byte)LogNetTraffic._0_1_)) {
      pAVar2 = (this->OwningActor).field0_0x0.DebugPtr;
      if (pAVar2 == (AActor *)0x0) {
        ::FString::FString(&local_d0,L"None");
      }
      else {
        local_b8 = (FName)pAVar2->_padding_;
        ::FName::ToString(&local_b8,&local_d0);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
        TVar16.DebugPtr = (UChannel *)0x0;
      }
    }
  }
  else {
    if (((param_3 < 0) || ((this->Channels).ArrayNum <= param_3)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Channels.IsValidIndex(ChIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                           ,0x11e0,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pUVar14 = (UChannel *)(*pcVar5)();
      return pUVar14;
    }
    local_f0 = (uint)~param_3 >> 0x1f;
    uVar10 = 0;
    if (param_3 < (this->Channels).ArrayNum) {
      uVar10 = local_f0;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      pUVar14 = (UChannel *)(*pcVar5)();
      return pUVar14;
    }
    if ((*(longlong *)((this->Channels).AllocatorInstance.Data + (longlong)param_3 * 8) != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Channels[ChIndex] == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                           ,0x11e1,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pUVar14 = (UChannel *)(*pcVar5)();
      return pUVar14;
    }
    TVar16.DebugPtr =
         UNetDriver::GetOrCreateChannelByName((this->Driver).field0_0x0.DebugPtr,pFVar12);
    if ((TVar16.DebugPtr == (UChannel *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Channel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                           ,0x11e5,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      pUVar14 = (UChannel *)(*pcVar5)();
      return pUVar14;
    }
    (**(code **)((TVar16.DebugPtr)->_padding_ + 0x2b0))(TVar16.DebugPtr,this,param_3,local_res18);
    uVar10 = 0;
    if (param_3 < (this->Channels).ArrayNum) {
      uVar10 = local_f0;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      pUVar14 = (UChannel *)(*pcVar5)();
      return pUVar14;
    }
    pFVar3 = (this->Channels).AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar16.DebugPtr);
    }
    ((TObjectPtr<UChannel>_u_0 *)(pFVar3 + (longlong)param_3 * 8))->DebugPtr = (UChannel *)TVar16;
    local_f8.DebugPtr = TVar16.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar16.DebugPtr);
    }
    pTVar4 = (TObjectPtr<UChannel>_u_0 *)(this->OpenChannels).AllocatorInstance.Data;
    if (((pTVar4 <= &local_f8) && (&local_f8 < pTVar4 + (this->OpenChannels).ArrayMax)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      pUVar14 = (UChannel *)(*pcVar5)();
      return pUVar14;
    }
    iVar11 = (this->OpenChannels).ArrayNum;
    piVar1 = &(this->OpenChannels).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(this->OpenChannels).AllocatorInstance,piVar1);
    }
    (this->OpenChannels).ArrayNum = iVar11 + 1;
    ((TObjectPtr<UChannel>_u_0 *)
    ((this->OpenChannels).AllocatorInstance.Data + (longlong)iVar11 * 8))->DebugPtr =
         (UChannel *)local_f8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_f8.DebugPtr != (UChannel *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_f8.DebugPtr);
    }
    pFVar12 = local_res10;
    pFVar17 = TMapBase<FName,FChannelDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelDefinition,0>_>
              ::FindChecked((TMapBase<FName,FChannelDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelDefinition,0>_>
                             *)&((this->Driver).field0_0x0.DebugPtr)->ChannelDefinitionMap,
                            *local_res10);
    if (pFVar17->bTickOnCreate != 0) {
      local_b0.DebugPtr = TVar16.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar16.DebugPtr);
      }
      TArray<TObjectPtr<UChannel>,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TObjectPtr<UChannel>_>
                (&this->ChannelsToTick,(TObjectPtr<UChannel> *)&local_b0.ObjectPtr);
    }
    if (4 < (byte)LogNetTraffic._0_1_) {
      ::FName::ToString(pFVar12,&local_58);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_98.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_98.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_98);
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
  FMemScope::~FMemScope(&local_a0);
  FLLMScope::~FLLMScope(local_res20);
  return TVar16.DebugPtr;
}

// CreateChild @ 147fc03b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChildConnection * __thiscall UNetConnection::CreateChild(UNetConnection *this,int *param_1)

{
  int iVar1;
  UNetDriver *pUVar2;
  UChildConnection *pUVar3;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  iVar1 = this->NextServerNetPlayerIndex;
  this->NextServerNetPlayerIndex = iVar1 + 1;
  if (4 < (byte)LogNet._0_1_) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    pUVar2 = (this->Driver).field0_0x0.DebugPtr;
    if (pUVar2 == (UNetDriver *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res8 = (FName)pUVar2->_padding_;
      ::FName::ToString(&local_res8,&local_38);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pUVar3 = CreateChildWithNetPlayerIndex(this,iVar1);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar1;
  }
  return pUVar3;
}

// CreateChildWithNetPlayerIndex @ 147fc04c0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UChildConnection * __thiscall
UNetConnection::CreateChildWithNetPlayerIndex(UNetConnection *this,int param_1)

{
  int *piVar1;
  UClass *pUVar2;
  UNetDriver *pUVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UChildConnection *pUVar9;
  UPackage *pUVar10;
  UClass *pUVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  undefined1 *puVar14;
  undefined1 auStackY_188 [32];
  uint local_138 [2];
  UChildConnection *local_130;
  undefined8 local_128;
  FString local_120;
  undefined1 local_110 [12];
  FName local_104;
  FName local_fc;
  UChildConnection *local_f0;
  FString local_e8;
  FString local_d8;
  uint *local_c8;
  UChildConnection **local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_138[0] = param_1;
  if ((param_1 < 1) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5435733364554339437>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0x146d,"NetPlayerIndex > 0"), bVar7)) {
    pcVar6 = (code *)swi(3);
    pUVar9 = (UChildConnection *)(*pcVar6)();
    return pUVar9;
  }
  local_128 = 0;
  pUVar2 = (((this->Driver).field0_0x0.DebugPtr)->ChildNetConnectionClass).field0_0x0.DebugPtr;
  pUVar10 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar10,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar11 = Z_Construct_UClass_UChildConnection_NoRegister();
  CheckIsClassChildOf_Internal(pUVar11,pUVar2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar2);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = pUVar10;
  pUVar9 = (UChildConnection *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar12 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  (**(code **)(*(longlong *)pUVar9 + 0x410))(pUVar9,(this->Driver).field0_0x0.DebugPtr,this);
  if (4 < (byte)LogNet._0_1_) {
    local_110._4_8_ = *(undefined8 *)&pUVar9->field_0x18;
    ::FName::ToString((FName *)(local_110 + 4),&local_d8);
    local_104 = (FName)this->_padding_;
    ::FName::ToString(&local_104,&local_e8);
    pUVar3 = (this->Driver).field0_0x0.DebugPtr;
    if (pUVar3 == (UNetDriver *)0x0) {
      ::FString::FString(&local_120,L"None");
    }
    else {
      local_fc = (FName)pUVar3->_padding_;
      ::FName::ToString(&local_fc,&local_120);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  pFVar4 = (this->Children).AllocatorInstance.Data;
  for (pFVar13 = pFVar4; pFVar13 != pFVar4 + (longlong)(this->Children).ArrayNum * 8;
      pFVar13 = pFVar13 + 8) {
    if (*(UChildConnection **)pFVar13 == pUVar9) {
      if (((int)((longlong)pFVar13 - (longlong)pFVar4 >> 3) != -1) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5435733364554339444>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                             ,0x1474,"Children.Find(ChildConnection) == INDEX_NONE"), bVar7)) {
        pcVar6 = (code *)swi(3);
        pUVar9 = (UChildConnection *)(*pcVar6)();
        return pUVar9;
      }
      break;
    }
  }
  local_130 = pUVar9;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  pFVar4 = (this->Children).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_130) &&
      ((FScriptContainerElement *)&local_130 < pFVar4 + (longlong)(this->Children).ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pUVar9 = (UChildConnection *)(*pcVar6)();
    return pUVar9;
  }
  iVar8 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  (this->Children).ArrayNum = iVar8 + 1;
  *(UChildConnection **)((this->Children).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_130;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_130 != (UChildConnection *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_130);
  }
  if (*(int *)&(this->ChildrenLookup).field_0x8 != *(int *)&(this->ChildrenLookup).field_0x34) {
    puVar14 = *(undefined1 **)&(this->ChildrenLookup).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->ChildrenLookup).field_0x38;
    }
    iVar8 = *(int *)(puVar14 +
                    (ulonglong)(*(int *)&(this->ChildrenLookup).field_0x48 - 1U & local_138[0]) * 4)
    ;
    if (iVar8 != -1) {
      lVar5 = *(longlong *)&(this->ChildrenLookup).field_0x0;
      do {
        if (*(uint *)(lVar5 + (longlong)iVar8 * 0x18) == local_138[0]) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5435733364554339447>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                             ,0x1477,"!ChildrenLookup.Contains(NetPlayerIndex)");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            pUVar9 = (UChildConnection *)(*pcVar6)();
            return pUVar9;
          }
          break;
        }
        iVar8 = *(int *)(lVar5 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  local_f0 = pUVar9;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  local_c8 = local_138;
  local_c0 = &local_f0;
  TSet<TTuple<int,TObjectPtr<UChildConnection>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UChildConnection>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,TObjectPtr<UChildConnection>_&&>_>
            ((TSet<TTuple<int,TObjectPtr<UChildConnection>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UChildConnection>,0>,FDefaultSetAllocator>
              *)&this->ChildrenLookup,
             (TPairInitializer<int_const_&,TObjectPtr<UChildConnection>_&&> *)local_110,
             (bool *)&local_c8);
  return pUVar9;
}

// CreateReplicatorForNewActorChannel @ 147fc12e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FObjectReplicator,1> * __thiscall
UNetConnection::CreateReplicatorForNewActorChannel
          (UNetConnection *this,TSharedPtr<FObjectReplicator,1> *__return_storage_ptr__,
          UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  FObjectReplicator *this_00;
  TSharedPtr<FObjectReplicator,1> *pTVar3;
  TRawPtrProxy<FObjectReplicator> local_res10;
  
  this_00 = ::operator_new(0xf0);
  local_res10.Object = (FObjectReplicator *)0x0;
  if (this_00 != (FObjectReplicator *)0x0) {
    local_res10.Object = FObjectReplicator::FObjectReplicator(this_00);
  }
  TSharedPtr<FObjectReplicator,1>::TSharedPtr<FObjectReplicator,1><FObjectReplicator>
            (__return_storage_ptr__,&local_res10);
  if (__return_storage_ptr__->Object == (FObjectReplicator *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FObjectReplicator,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FObjectReplicator::InitWithObject(__return_storage_ptr__->Object,param_1,this,true);
  return __return_storage_ptr__;
}

// Describe @ 147fc1500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall UNetConnection::Describe(UNetConnection *this,FString *__return_storage_ptr__)

{
  AActor *pAVar1;
  longlong lVar2;
  UNetDriver *pUVar3;
  bool bVar4;
  char cVar5;
  FName local_res18;
  FName local_res20;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  void *local_90 [2];
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  (**(code **)(this->_padding_ + 0x2d0))(this,local_90,1);
  FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)&this->PlayerId,local_60);
  pAVar1 = (this->OwningActor).field0_0x0.DebugPtr;
  if (pAVar1 != (AActor *)0x0) {
    local_res18 = (FName)pAVar1->_padding_;
    ::FName::ToString(&local_res18,&local_a0);
  }
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    local_res18 = *(FName *)(lVar2 + 0x18);
    ::FName::ToString(&local_res18,&local_b0);
  }
  bVar4 = false;
  pUVar3 = (this->Driver).field0_0x0.DebugPtr;
  if (pUVar3 != (UNetDriver *)0x0) {
    cVar5 = (**(code **)(pUVar3->_padding_ + 0x3f8))();
    local_res18 = (FName)0x1511653f8;
    if (cVar5 != '\0') goto LAB_147fc15f1;
  }
  local_res18 = (FName)0x151165400;
LAB_147fc15f1:
  pUVar3 = (this->Driver).field0_0x0.DebugPtr;
  if (pUVar3 != (UNetDriver *)0x0) {
    bVar4 = true;
    local_res20 = (FName)pUVar3->_padding_;
    ::FName::ToString(&local_res20,&local_e0);
    local_res20 = (FName)L"";
    if (local_e0.Data.ArrayNum != 0) {
      local_res20 = (FName)local_e0.Data.AllocatorInstance.Data;
    }
    ::FName::ToString(&pUVar3->NetDriverDefinition,&local_70);
    ::FName::ToString(&pUVar3->NetDriverName,&local_80);
    ::FString::PrintfImpl(&local_c0,L"Name:%s Def:%s %s%s");
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if ((FName)local_e0.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  local_res20 = (FName)this->_padding_;
  ::FName::ToString(&local_res20,&local_d0);
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"[UNetConnection] RemoteAddr: %s, Name: %s, Driver: %s, IsServer: %s, PC: %s, Owner: %s, UniqueId: %s"
            );
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if ((lVar2 != 0) && (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if ((pAVar1 != (AActor *)0x0) &&
     (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
  }
  if (local_90[0] != (void *)0x0) {
    FMemory::Free(local_90[0]);
  }
  return __return_storage_ptr__;
}

// DestroyIgnoredActor @ 147fc2420

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::DestroyIgnoredActor(UNetConnection *this,AActor *param_1)

{
  UNetDriver *pUVar1;
  UWorld *this_00;
  
  pUVar1 = (this->Driver).field0_0x0.DebugPtr;
  if ((pUVar1 != (UNetDriver *)0x0) &&
     (this_00 = (pUVar1->World).field0_0x0.DebugPtr, this_00 != (UWorld *)0x0)) {
    UWorld::DestroyActor(this_00,param_1,true,true);
    return;
  }
  return;
}

// DestroyOwningActor @ 147fc2490

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::DestroyOwningActor(UNetConnection *this)

{
  undefined1 *puVar1;
  AActor *pAVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  FGameDelegates *pFVar10;
  uint uVar11;
  longlong lVar12;
  void *local_48 [2];
  FDestructionSentinel local_38;
  
  pAVar2 = (this->OwningActor).field0_0x0.DebugPtr;
  if (pAVar2 != (AActor *)0x0) {
    if ((pAVar2->_padding_ & 0x18000) == 0) {
      pAVar2 = (this->OwningActor).field0_0x0.DebugPtr;
      (**(code **)(pAVar2->_padding_ + 0x4a0))(pAVar2,this);
    }
    (this->OwningActor).field0_0x0.DebugPtr = (AActor *)0x0;
    this->_padding_ = 0;
    return;
  }
  if ((int)this->ClientLoginState < 3) {
    if (4 < (byte)LogNet._0_1_) {
      (**(code **)(this->_padding_ + 0x2e0))(this,local_48);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_48[0] != (void *)0x0) {
        FMemory::Free(local_48[0]);
      }
    }
    pFVar10 = FGameDelegates::Get();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar10->PendingConnectionLostDelegate,(FWriteAccessScope *)&local_38);
    puVar1 = &(pFVar10->PendingConnectionLostDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    uVar11 = *(int *)&(pFVar10->PendingConnectionLostDelegate).field_0x10 - 1;
    if (-1 < (int)uVar11) {
      lVar12 = (longlong)(int)uVar11 << 4;
      bVar6 = false;
      do {
        uVar9 = 0;
        if ((int)uVar11 < *(int *)&(pFVar10->PendingConnectionLostDelegate).field_0x10) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(pFVar10->PendingConnectionLostDelegate).field_0x8;
        if (((*(int *)(lVar3 + 8 + lVar12) == 0) ||
            (plVar4 = *(longlong **)(lVar3 + lVar12), plVar4 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar4 + 0x68))(), cVar8 == '\0')) {
          bVar6 = true;
        }
        lVar12 = lVar12 + -0x10;
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
    puVar1 = &(pFVar10->PendingConnectionLostDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pFVar10->PendingConnectionLostDelegate,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// DispatchPacket @ 147fc2710

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

void __thiscall
UNetConnection::DispatchPacket
          (UNetConnection *this,FBitReader *param_1,int param_2,bool *param_3,bool *param_4)

{
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  UNetDriver *pUVar3;
  undefined1 *puVar4;
  long64 lVar5;
  FNetTraceCollector *pFVar6;
  ForElementType<FSetElementId> FVar7;
  FNetworkNotify *pFVar8;
  code *pcVar9;
  FName FVar10;
  ulonglong uVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  FName FVar15;
  FName FVar16;
  FName FVar17;
  FName FVar18;
  FName FVar19;
  FName FVar20;
  FName FVar21;
  FName FVar22;
  bool bVar23;
  UNetConnection *pUVar24;
  EChannelCloseReason EVar25;
  char cVar26;
  uchar uVar27;
  int iVar28;
  FNameEntryId FVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UClass *pUVar33;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  FNetGUIDCache *this_01;
  UObject *pUVar34;
  uint *puVar35;
  FChannelDefinition *pFVar36;
  undefined4 extraout_var_05;
  UChannel *this_02;
  FNetResult *pFVar37;
  byte bVar38;
  UNetConnection *pUVar39;
  UPackageMapClient *this_03;
  FScriptContainerElement *pFVar40;
  ForAnyElementType FVar41;
  FNetTraceBunchInfo *pFVar42;
  FInBunch *pFVar43;
  undefined1 *puVar44;
  ForElementType<FSetElementId> FVar45;
  bool bVar46;
  byte bVar47;
  longlong lVar48;
  uint uVar49;
  FBitReader *pFVar50;
  undefined1 auStackY_868 [32];
  bool local_817 [3];
  uint local_814;
  byte local_810;
  FBitReader *local_808;
  uint local_800;
  uint local_7f8;
  undefined1 local_7f4 [4];
  int local_7f0;
  int local_7ec;
  undefined1 local_7e8 [216];
  uint local_710;
  FName FStack_70c;
  uint local_704;
  byte local_700;
  byte local_6ff;
  EChannelCloseReason local_6fe;
  undefined4 local_6f8;
  uint local_6f4;
  uint local_6f0;
  int local_6ec;
  int local_6e8;
  int local_6e4;
  UNetConnection *local_6e0;
  UNetConnection *local_6d8;
  uint local_6d0 [2];
  uint local_6c8 [2];
  uint local_6c0 [2];
  FName local_6b8;
  FNetworkGUID_u_0 local_6b0;
  UNetConnection *local_6a8;
  undefined8 local_6a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_698;
  uint local_688;
  undefined4 uStack_684;
  undefined8 local_680;
  undefined8 local_678;
  uint local_670;
  undefined4 uStack_66c;
  uint local_668;
  undefined4 uStack_664;
  uint local_660;
  undefined4 uStack_65c;
  uint local_658;
  undefined4 uStack_654;
  undefined1 local_650 [52];
  undefined1 local_61c [4];
  int local_618 [6];
  FInBunch *local_600;
  FInBunch *local_5f0;
  FInBunch *local_5e8;
  UNetConnection *local_5e0;
  FInBunch *local_5d8;
  UNetConnection *local_5d0;
  FInBunch *local_5c8;
  UNetConnection *local_5c0;
  FInBunch *local_5b8;
  UNetConnection *local_5b0;
  FInBunch *local_5a8;
  UNetConnection *local_5a0;
  FInBunch *local_598;
  UNetConnection *local_590;
  FInBunch *local_588;
  UNetConnection *local_580;
  undefined1 local_578 [16];
  FNetTraceBunchInfo local_568;
  FNetTraceBunchInfo local_560;
  FNetTraceBunchInfo local_558;
  FNetTraceBunchInfo local_550;
  FNetTraceBunchInfo local_548;
  FNetTraceBunchInfo local_540;
  FNetTraceBunchInfo local_538;
  FNetTraceBunchInfo local_530;
  bool *local_528;
  TObjectPtr<UNetConnection>_u_0 local_520;
  FNetTraceBunchInfo local_518;
  FInBunch *local_510;
  FNetTraceBunchInfo local_508;
  undefined1 local_500 [8];
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  undefined1 local_4c8 [8];
  uint *local_4c0;
  uint *local_4b8;
  uint *local_4b0;
  undefined1 *local_4a8;
  FString local_4a0;
  FString local_490;
  FString local_480;
  FString local_470;
  void *local_460 [2];
  void *local_450 [2];
  void *local_440 [2];
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  void *local_3e0 [3];
  FNetResult local_3c8;
  FNetResult local_398;
  FNetResult local_368;
  FNetResult local_338;
  FNetResult local_308;
  FNetResult local_2d8;
  undefined1 local_2a8 [40];
  longlong local_280;
  undefined1 local_278 [40];
  longlong local_250;
  FNetResult local_248;
  FNetResult local_218;
  FNetResult local_1e8;
  FOutBunch local_1b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_868;
  local_528 = param_4;
  local_698.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_698.ArrayNum = 0;
  local_698.ArrayMax = 0;
  pUVar3 = (this->Driver).field0_0x0.DebugPtr;
  local_520 = (pUVar3->ServerConnection).field0_0x0;
  local_808 = param_1;
  local_7f8 = param_2;
  local_6a8 = this;
  local_650._8_8_ = param_3;
  local_810 = (**(code **)(pUVar3->_padding_ + 0x440))();
  local_7f0 = (**(code **)(param_1->_padding_ + 0x48))(param_1);
  if ((this->bInternalAck == 0) || (bVar23 = false, 0x23 < local_7f0)) {
    bVar23 = true;
  }
  cVar26 = (**(code **)(param_1->_padding_ + 0x38))(param_1);
  if (cVar26 == '\0') {
    pUVar39 = (UNetConnection *)&param_1->Pos;
    pFVar43 = (FInBunch *)((longlong)&param_1->_padding_ + 1);
    do {
      local_6e0 = pUVar39;
      local_6d8 = pUVar39;
      local_6a0 = pFVar43;
      local_600 = pFVar43;
      local_5f0 = pFVar43;
      local_5e8 = pFVar43;
      local_5e0 = pUVar39;
      local_5d8 = pFVar43;
      local_5d0 = pUVar39;
      local_5c8 = pFVar43;
      local_5c0 = pUVar39;
      local_5b8 = pFVar43;
      local_5b0 = pUVar39;
      local_5a8 = pFVar43;
      local_5a0 = pUVar39;
      local_598 = pFVar43;
      local_590 = pUVar39;
      local_588 = pFVar43;
      local_580 = pUVar39;
      if (this->State == USOCK_Closed) break;
      if (((this->bInternalAck != 0) && (local_7f0 < 8)) && ((pFVar43->_padding_ & 2) == 0)) {
        if (pUVar39->_padding_ < param_1->Num) {
          uVar30 = (uint)(pUVar39->_padding_ >> 3);
          uVar31 = 0;
          if ((int)uVar30 < (param_1->Buffer).ArrayNum) {
            uVar31 = ~uVar30 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar46)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pUVar39->_padding_ = pUVar39->_padding_ + 1;
        }
        else {
          FBitReader::SetOverflowed(param_1,1);
        }
      }
      local_814 = (uint)pUVar39->_padding_;
      FInBunch::FInBunch((FInBunch *)local_7e8,this,(uchar *)0x0,0);
      local_7ec = (int)pUVar39->_padding_;
      bVar46 = false;
      local_510 = pFVar43;
      if ((pFVar43->_padding_ & 2) == 0) {
        lVar48 = pUVar39->_padding_;
        if (lVar48 < local_808->Num) {
          uVar30 = (uint)(lVar48 >> 3);
          uVar31 = 0;
          if ((int)uVar30 < (local_808->Buffer).ArrayNum) {
            uVar31 = ~uVar30 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar46)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          bVar46 = ((byte)(local_808->Buffer).AllocatorInstance.Data[(int)uVar30] &
                   '\x01' << ((byte)lVar48 & 7)) != 0;
          pUVar39->_padding_ = pUVar39->_padding_ + 1;
          goto LAB_147fc2a72;
        }
        FBitReader::SetOverflowed(local_808,1);
LAB_147fc2995:
        local_700 = local_700 & 0xfe;
        local_7e8._192_4_ = local_7f8;
LAB_147fc2999:
        bVar46 = false;
      }
      else {
LAB_147fc2a72:
        pFVar50 = local_808;
        local_7e8._192_4_ = local_7f8;
        if (!bVar46) goto LAB_147fc2995;
        bVar46 = false;
        if ((pFVar43->_padding_ & 2) == 0) {
          lVar48 = pUVar39->_padding_;
          if (lVar48 < local_808->Num) {
            uVar30 = (uint)(lVar48 >> 3);
            uVar31 = 0;
            if ((int)uVar30 < (local_808->Buffer).ArrayNum) {
              uVar31 = ~uVar30 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar46)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar2 = (pFVar50->Buffer).AllocatorInstance.Data[(int)uVar30];
            pUVar39->_padding_ = pUVar39->_padding_ + 1;
            bVar46 = ('\x01' << ((byte)lVar48 & 7) & (byte)FVar2) != 0;
          }
          else {
            FBitReader::SetOverflowed(local_808,1);
            bVar46 = false;
          }
        }
        local_700 = local_700 & 0xfe | bVar46;
        bVar46 = false;
        if ((pFVar43->_padding_ & 2) == 0) {
          lVar48 = pUVar39->_padding_;
          if (lVar48 < pFVar50->Num) {
            uVar30 = (uint)(lVar48 >> 3);
            uVar31 = 0;
            if ((int)uVar30 < (pFVar50->Buffer).ArrayNum) {
              uVar31 = ~uVar30 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar46)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar2 = (pFVar50->Buffer).AllocatorInstance.Data[(int)uVar30];
            pUVar39->_padding_ = pUVar39->_padding_ + 1;
            bVar46 = ('\x01' << ((byte)lVar48 & 7) & (byte)FVar2) != 0;
            goto LAB_147fc299b;
          }
          FBitReader::SetOverflowed(pFVar50,1);
          goto LAB_147fc2999;
        }
      }
LAB_147fc299b:
      iVar32 = local_7f0;
      pFVar50 = local_808;
      local_700 = bVar46 * '\x02' | local_700 & 0xfd;
      if (local_7f0 < 7) {
        EVar25 = Destroyed;
        if ((bVar46 != false) && ((pFVar43->_padding_ & 2) == 0)) {
          lVar48 = pUVar39->_padding_;
          if (lVar48 < local_808->Num) {
            uVar30 = (uint)(lVar48 >> 3);
            uVar31 = 0;
            if ((int)uVar30 < (local_808->Buffer).ArrayNum) {
              uVar31 = ~uVar30 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar46)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar2 = (pFVar50->Buffer).AllocatorInstance.Data[(int)uVar30];
            pUVar39->_padding_ = pUVar39->_padding_ + 1;
            pFVar50 = local_808;
            EVar25 = ((byte)FVar2 & '\x01' << ((byte)lVar48 & 7)) != 0;
          }
          else {
            FBitReader::SetOverflowed(local_808,1);
            local_6fe = Destroyed;
            pFVar50 = local_808;
            EVar25 = local_6fe;
          }
        }
      }
      else if (bVar46 == false) {
        local_6fe = Destroyed;
        EVar25 = local_6fe;
      }
      else {
        local_6f8 = 0;
        (**(code **)(local_808->_padding_ + 0x198))(local_808,&local_6f8);
        local_6fe = (EChannelCloseReason)local_6f8;
        EVar25 = local_6fe;
      }
      local_6fe = EVar25;
      bVar46 = false;
      if ((local_600->_padding_ & 2) == 0) {
        lVar48 = pUVar39->_padding_;
        if (lVar48 < pFVar50->Num) {
          uVar30 = (uint)(lVar48 >> 3);
          uVar31 = 0;
          if ((int)uVar30 < (pFVar50->Buffer).ArrayNum) {
            uVar31 = ~uVar30 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar46)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          bVar46 = ((byte)(pFVar50->Buffer).AllocatorInstance.Data[(int)uVar30] &
                   '\x01' << ((byte)lVar48 & 7)) != 0;
          pUVar39->_padding_ = pUVar39->_padding_ + 1;
        }
        else {
          FBitReader::SetOverflowed(pFVar50,1);
        }
      }
      local_700 = bVar46 << 2 | local_700 & 0xfb;
      bVar46 = false;
      if ((local_5f0->_padding_ & 2) == 0) {
        lVar48 = pUVar39->_padding_;
        if (lVar48 < pFVar50->Num) {
          uVar30 = (uint)(lVar48 >> 3);
          uVar31 = 0;
          if ((int)uVar30 < (pFVar50->Buffer).ArrayNum) {
            uVar31 = ~uVar30 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar46)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          bVar46 = ((byte)(pFVar50->Buffer).AllocatorInstance.Data[(int)uVar30] &
                   '\x01' << ((byte)lVar48 & 7)) != 0;
          pUVar39->_padding_ = pUVar39->_padding_ + 1;
        }
        else {
          FBitReader::SetOverflowed(pFVar50,1);
        }
      }
      local_700 = bVar46 << 3 | local_700 & 0xf7;
      if (2 < iVar32) {
        (**(code **)(pFVar50->_padding_ + 0x1a0))(pFVar50,local_6d0);
        pUVar24 = local_6a8;
        uVar31 = local_6d0[0];
        if (local_6d0[0] < (uint)(local_6a8->Channels).ArrayNum) goto LAB_147fc2e48;
        if (2 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                  (&local_248,BunchBadChannelIndex);
        Close(pUVar24,&local_248);
        if (local_248.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
          (**(code **)((longlong)local_248.NextResult + -0x10))
                    ((longlong)local_248.NextResult + -0x10);
        }
LAB_147fc56d6:
        if (local_248.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.ErrorContext.Data.AllocatorInstance.Data);
        }
        goto LAB_147fc56e0;
      }
      local_6f4 = 0;
      (**(code **)(pFVar50->_padding_ + 0x198))(pFVar50,&local_6f4);
      uVar31 = local_6f4;
LAB_147fc2e48:
      pUVar24 = local_6a8;
      local_710 = uVar31;
      if (((local_6a8->bInternalAck == 0) || (local_6a8->bAllowExistingChannelIndex == false)) ||
         (iVar32 < 0x10)) {
LAB_147fc300e:
        pUVar39 = local_5e0;
        bVar46 = false;
        if ((local_5e8->_padding_ & 2) == 0) {
          lVar48 = local_5e0->_padding_;
          if (lVar48 < pFVar50->Num) {
            uVar49 = (uint)(lVar48 >> 3);
            uVar30 = 0;
            if ((int)uVar49 < (pFVar50->Buffer).ArrayNum) {
              uVar30 = ~uVar49 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar46)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            bVar46 = ((byte)(pFVar50->Buffer).AllocatorInstance.Data[(int)uVar49] &
                     '\x01' << ((byte)lVar48 & 7)) != 0;
            pUVar39->_padding_ = pUVar39->_padding_ + 1;
          }
          else {
            FBitReader::SetOverflowed(pFVar50,1);
          }
        }
        pUVar39 = local_5d0;
        local_700 = bVar46 << 7 | local_700 & 0x7f;
        bVar46 = false;
        if ((local_5d8->_padding_ & 2) == 0) {
          lVar48 = local_5d0->_padding_;
          if (lVar48 < pFVar50->Num) {
            uVar49 = (uint)(lVar48 >> 3);
            uVar30 = 0;
            if ((int)uVar49 < (pFVar50->Buffer).ArrayNum) {
              uVar30 = ~uVar49 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar46)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            bVar46 = ((byte)(pFVar50->Buffer).AllocatorInstance.Data[(int)uVar49] &
                     '\x01' << ((byte)lVar48 & 7)) != 0;
            pUVar39->_padding_ = pUVar39->_padding_ + 1;
          }
          else {
            FBitReader::SetOverflowed(pFVar50,1);
          }
        }
        pUVar39 = local_5c0;
        local_6ff = local_6ff & 0xfe | bVar46;
        bVar46 = false;
        if ((local_5c8->_padding_ & 2) == 0) {
          lVar48 = local_5c0->_padding_;
          if (lVar48 < pFVar50->Num) {
            uVar49 = (uint)(lVar48 >> 3);
            uVar30 = 0;
            if ((int)uVar49 < (pFVar50->Buffer).ArrayNum) {
              uVar30 = ~uVar49 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar46)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            bVar46 = ((byte)(pFVar50->Buffer).AllocatorInstance.Data[(int)uVar49] &
                     '\x01' << ((byte)lVar48 & 7)) != 0;
            pUVar39->_padding_ = pUVar39->_padding_ + 1;
          }
          else {
            FBitReader::SetOverflowed(pFVar50,1);
          }
        }
        bVar47 = bVar46 << 4 | local_700 & 0xef;
        if ((local_700 & 8) == 0) {
          local_704 = 0;
          local_700 = bVar47;
          if (bVar46 != false) {
            local_704 = local_7f8;
          }
        }
        else {
          lVar48 = (longlong)(int)local_710;
          iVar28 = (pUVar24->InReliable).ArrayNum;
          if (pUVar24->bInternalAck == 0) {
            uVar30 = 0;
            if ((int)local_710 < iVar28) {
              uVar30 = ~local_710 >> 0x1f;
            }
            local_700 = bVar47;
            if ((uVar30 == 0) &&
               (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar46)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_6ec = 0;
            iVar28 = *(int *)((pUVar24->InReliable).AllocatorInstance.Data + lVar48 * 4);
            (**(code **)(pFVar50->_padding_ + 0x198))(pFVar50,&local_6ec,0x400);
            local_704 = (((local_6ec - iVar28) - 0x200U & 0x3ff) - 0x200) + iVar28;
          }
          else {
            uVar30 = 0;
            if ((int)local_710 < iVar28) {
              uVar30 = ~local_710 >> 0x1f;
            }
            local_700 = bVar47;
            if ((uVar30 == 0) &&
               (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar46)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_704 = *(int *)((pUVar24->InReliable).AllocatorInstance.Data + lVar48 * 4) + 1;
          }
        }
        pUVar39 = local_5b0;
        bVar46 = false;
        if (((local_700 & 0x10) != 0) && (bVar46 = false, (local_5b8->_padding_ & 2) == 0)) {
          lVar48 = local_5b0->_padding_;
          if (lVar48 < pFVar50->Num) {
            uVar49 = (uint)(lVar48 >> 3);
            uVar30 = 0;
            if ((int)uVar49 < (pFVar50->Buffer).ArrayNum) {
              uVar30 = ~uVar49 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar46)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar2 = (pFVar50->Buffer).AllocatorInstance.Data[(int)uVar49];
            pUVar39->_padding_ = pUVar39->_padding_ + 1;
            bVar46 = ('\x01' << ((byte)lVar48 & 7) & (byte)FVar2) != 0;
          }
          else {
            FBitReader::SetOverflowed(pFVar50,1);
            bVar46 = false;
          }
        }
        pUVar39 = local_5a0;
        bVar38 = bVar46 << 5 | local_700 & 0xdf;
        bVar47 = local_700 & 0x10;
        local_700 = bVar38;
        if ((bVar47 == 0) || (!bVar23)) {
LAB_147fc347a:
          bVar46 = false;
        }
        else {
          bVar46 = false;
          if ((local_5a8->_padding_ & 2) == 0) {
            lVar48 = local_5a0->_padding_;
            if (pFVar50->Num <= lVar48) {
              FBitReader::SetOverflowed(pFVar50,1);
              goto LAB_147fc347a;
            }
            uVar49 = (uint)(lVar48 >> 3);
            uVar30 = 0;
            if ((int)uVar49 < (pFVar50->Buffer).ArrayNum) {
              uVar30 = ~uVar49 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar46)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar2 = (pFVar50->Buffer).AllocatorInstance.Data[(int)uVar49];
            pUVar39->_padding_ = pUVar39->_padding_ + 1;
            bVar46 = ('\x01' << ((byte)lVar48 & 7) & (byte)FVar2) != 0;
          }
        }
        pUVar39 = local_590;
        local_6ff = bVar46 * '\x02' | local_6ff & 0xfd;
        bVar46 = false;
        if (((local_700 & 0x10) != 0) && (bVar46 = false, (local_598->_padding_ & 2) == 0)) {
          lVar48 = local_590->_padding_;
          if (lVar48 < pFVar50->Num) {
            uVar49 = (uint)(lVar48 >> 3);
            uVar30 = 0;
            if ((int)uVar49 < (pFVar50->Buffer).ArrayNum) {
              uVar30 = ~uVar49 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar46)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar2 = (pFVar50->Buffer).AllocatorInstance.Data[(int)uVar49];
            pUVar39->_padding_ = pUVar39->_padding_ + 1;
            bVar46 = ('\x01' << ((byte)lVar48 & 7) & (byte)FVar2) != 0;
          }
          else {
            FBitReader::SetOverflowed(pFVar50,1);
            bVar46 = false;
          }
        }
        bVar38 = bVar46 << 6 | local_700 & 0xbf;
        bVar47 = local_700 & 9;
        local_700 = bVar38;
        if (iVar32 < 6) {
          if (bVar47 != 0) {
            local_6e8 = 0;
            (**(code **)(pFVar50->_padding_ + 0x198))(pFVar50,&local_6e8,8);
            if (local_6e8 == 1) {
              FVar29 = FNameEntryId::FromValidEName((int)local_650 + Editor);
              local_650._28_4_ = 0;
              FStack_70c.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar29.Value);
              FStack_70c.Number = 0;
              local_650._24_4_ = FStack_70c.ComparisonIndex.Value;
            }
            else if (local_6e8 == 2) {
              FVar29 = FNameEntryId::FromValidEName((EName)local_4c8);
              uStack_684 = 0;
              FStack_70c.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar29.Value);
              FStack_70c.Number = 0;
              local_688 = FStack_70c.ComparisonIndex.Value;
            }
            else if (local_6e8 == 4) {
              FVar29 = FNameEntryId::FromValidEName((EName)local_500);
              local_650._20_4_ = 0;
              FStack_70c.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar29.Value);
              FStack_70c.Number = 0;
              local_650._16_4_ = FStack_70c.ComparisonIndex.Value;
            }
          }
LAB_147fc36e7:
          lVar48 = (longlong)(int)local_710;
          uVar30 = 0;
          if ((int)local_710 < (pUVar24->Channels).ArrayNum) {
            uVar30 = ~local_710 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar46)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          this_02 = *(UChannel **)((pUVar24->Channels).AllocatorInstance.Data + lVar48 * 8);
          if (this_02 != (UChannel *)0x0) {
            FVar10.Number = FStack_70c.Number;
            FVar10.ComparisonIndex.Value = FStack_70c.ComparisonIndex.Value;
            local_678 = 0;
            if ((FVar10 != (FName)0x0) && (FVar10 != this_02->ChName)) {
              if (1 < (byte)LogNet._0_1_) {
                ::FName::ToString(&FStack_70c,&local_420);
                ::FName::ToString(&this_02->ChName,&local_430);
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_430.Data.AllocatorInstance.Data);
                }
                if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_420.Data.AllocatorInstance.Data);
                }
              }
              UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                        (&local_3c8,BunchWrongChannelType);
              Close(pUVar24,&local_3c8);
              local_248.ErrorContext.Data.AllocatorInstance.Data =
                   local_3c8.ErrorContext.Data.AllocatorInstance.Data;
              if (local_3c8.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
                (**(code **)((longlong)local_3c8.NextResult + -0x10))
                          ((longlong)local_3c8.NextResult + -0x10);
                local_248.ErrorContext.Data.AllocatorInstance.Data =
                     local_3c8.ErrorContext.Data.AllocatorInstance.Data;
              }
              goto LAB_147fc56d6;
            }
          }
          local_6e4 = 0;
          (**(code **)(pFVar50->_padding_ + 0x198))(pFVar50,&local_6e4,pUVar24->MaxPacket << 3);
          if ((((local_700 & 2) != 0) || ((local_700 & 1) != 0)) && (6 < (byte)LogNetDormancy._0_1_)
             ) {
            FInBunch::ToString((FInBunch *)local_7e8,&local_4a0);
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNetDormancy);
            if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
            }
          }
          if (6 < (byte)LogNetTraffic._0_1_) {
            FInBunch::ToString((FInBunch *)local_7e8,&local_490);
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
            if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_490.Data.AllocatorInstance.Data);
            }
          }
          pFVar43 = local_6a0;
          iVar32 = (int)local_580->_padding_;
          if ((local_6a0->_padding_ & 2) == 0) {
            pFVar6 = pUVar24->InTraceCollector;
            local_800 = iVar32 - local_814;
            if (pFVar6 != (FNetTraceCollector *)0x0) {
              FNetTrace::BeginBunch(pFVar6);
            }
            iVar28 = local_6e4;
            FBitReader::ResetData
                      ((FBitReader *)local_7e8,local_808,(longlong)local_6e4,
                       (longlong)(local_6e4 + 0x1f) & 0xffffffffffffffe0);
            if ((pFVar43->_padding_ & 2) != 0) {
              if (2 < (byte)LogNet._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              }
              HandleNetResultOrClose(pUVar24,BunchDataOverflow);
              goto LAB_147fc555c;
            }
            if ((local_700 & 0x80) != 0) {
              cVar26 = (**(code **)(((pUVar24->Driver).field0_0x0.DebugPtr)->_padding_ + 0x3f8))();
              if (cVar26 != '\0') {
                if (1 < (byte)LogNetTraffic._0_1_) {
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                }
                UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                          (&local_398,BunchServerPackageMapExports);
                Close(pUVar24,&local_398);
                if (local_398.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
                  (**(code **)((longlong)local_398.NextResult + -0x10))
                            ((longlong)local_398.NextResult + -0x10);
                }
                if (local_398.ErrorContext.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_398.ErrorContext.Data.AllocatorInstance.Data);
                }
                goto LAB_147fc555c;
              }
              puVar35 = &((pUVar24->Driver).field0_0x0.DebugPtr)->NetGUIDInBytes;
              *puVar35 = *puVar35 + ((iVar28 - local_7ec) + iVar32 >> 3);
              if (pUVar24->bInternalAck == 0) goto LAB_147fc393a;
              if ((pUVar24->PackageMap).field0_0x0.DebugPtr == (UPackageMap *)0x0) {
LAB_147fc3902:
                this_03 = (UPackageMapClient *)0x0;
              }
              else {
                pUVar33 = Z_Construct_UClass_UPackageMapClient_NoRegister();
                bVar46 = FObjectPtr::IsA((FObjectPtr *)&pUVar24->PackageMap,pUVar33);
                if (!bVar46) goto LAB_147fc3902;
                this_03 = (UPackageMapClient *)(pUVar24->PackageMap).field0_0x0.DebugPtr;
              }
              UPackageMapClient::ReceiveNetGUIDBunch(this_03,(FInBunch *)local_7e8);
              if (((local_7e8[0x29] & 2) != 0) && (1 < (byte)LogNetTraffic._0_1_)) {
                UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
              }
            }
LAB_147fc393a:
            if ((local_700 & 8) == 0) {
              if (5 < (byte)LogNetTraffic._0_1_) {
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
              }
            }
            else if (5 < (byte)LogNetTraffic._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
            }
            if (((local_700 & 1) != 0) && (5 < (byte)LogNetTraffic._0_1_)) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
            }
            lVar48 = (longlong)(int)local_710;
            uVar49 = 0;
            uVar30 = uVar49;
            if ((int)local_710 < (pUVar24->Channels).ArrayNum) {
              uVar30 = ~local_710 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar46)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (*(longlong *)((pUVar24->Channels).AllocatorInstance.Data + lVar48 * 8) == 0) {
              if (local_710 == 0) {
                uVar11 = CONCAT44(FStack_70c.Number,FStack_70c.ComparisonIndex.Value);
                FVar29 = FNameEntryId::FromValidEName((int)local_650 + Utf8StrProperty);
                uStack_66c = 0;
                local_670 = *(uint *)CONCAT44(extraout_var_02,FVar29.Value);
                if (uVar11 == local_670) goto LAB_147fc3b84;
              }
              if (((pUVar24->Channels).ArrayNum < 1) &&
                 (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar46)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if (*(longlong *)(pUVar24->Channels).AllocatorInstance.Data == 0) {
                if (4 < (byte)LogNetTraffic._0_1_) {
                  ::FName::ToString(&FStack_70c,&local_400);
                  UE::Logging::Private::BasicLog<5>
                            (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                  if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_400.Data.AllocatorInstance.Data);
                  }
                }
                UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                          (&local_338,BunchPrematureControlChannel);
                Close(pUVar24,&local_338);
                if (local_338.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
                  (**(code **)((longlong)local_338.NextResult + -0x10))
                            ((longlong)local_338.NextResult + -0x10);
                }
                if (local_338.ErrorContext.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_338.ErrorContext.Data.AllocatorInstance.Data);
                }
                goto LAB_147fc555c;
              }
              if (pUVar24->_padding_ == 0) {
                pUVar3 = (pUVar24->Driver).field0_0x0.DebugPtr;
                pFVar40 = (pUVar3->ClientConnections).AllocatorInstance.Data;
                pFVar1 = pFVar40 + (longlong)(pUVar3->ClientConnections).ArrayNum * 8;
                for (; pFVar40 != pFVar1; pFVar40 = pFVar40 + 8) {
                  if (*(UNetConnection **)pFVar40 == (UNetConnection *)0x0) {
                    bVar46 = pUVar24 == (UNetConnection *)0x0;
                  }
                  else {
                    bVar46 = *(UNetConnection **)pFVar40 == pUVar24;
                  }
                  if (bVar46) {
                    if (2 < (byte)LogNet._0_1_) {
                      ::FName::ToString(&FStack_70c,&local_410);
                      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                      if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_410.Data.AllocatorInstance.Data);
                      }
                    }
                    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                              (&local_368,BunchPrematureChannel);
                    Close(pUVar24,&local_368);
                    if (local_368.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
                      (**(code **)((longlong)local_368.NextResult + -0x10))
                                ((longlong)local_368.NextResult + -0x10);
                    }
                    if (local_368.ErrorContext.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_368.ErrorContext.Data.AllocatorInstance.Data);
                    }
                    goto LAB_147fc555c;
                  }
                }
              }
            }
LAB_147fc3b84:
            if (local_710 == 0) {
              if (((pUVar24->Channels).ArrayNum < 1) &&
                 (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar46)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if ((*(longlong *)(pUVar24->Channels).AllocatorInstance.Data == 0) &&
                 ((local_700 & 2) != 0)) {
                uVar11 = CONCAT44(FStack_70c.Number,FStack_70c.ComparisonIndex.Value);
                FVar29 = FNameEntryId::FromValidEName((int)local_650 + (Editor|DoubleProperty));
                uStack_664 = 0;
                local_668 = *(uint *)CONCAT44(extraout_var_03,FVar29.Value);
                if (uVar11 == local_668) {
                  if (4 < (byte)LogNetTraffic._0_1_) {
                    UE::Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                  }
                  UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                            (&local_308,BunchPrematureControlClose);
                  Close(pUVar24,&local_308);
                  if (local_308.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
                    (**(code **)((longlong)local_308.NextResult + -0x10))
                              ((longlong)local_308.NextResult + -0x10);
                  }
                  if (local_308.ErrorContext.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_308.ErrorContext.Data.AllocatorInstance.Data);
                  }
                  goto LAB_147fc555c;
                }
              }
            }
            if ((pUVar24->bInternalAck != 0) && (pUVar24->bAllowExistingChannelIndex != false)) {
              if (local_7f0 < 0x10) {
                if (this_02 != (UChannel *)0x0) {
                  if ((local_700 & 1) != 0) {
                    uVar11 = CONCAT44(FStack_70c.Number,FStack_70c.ComparisonIndex.Value);
                    FVar29 = FNameEntryId::FromValidEName((int)local_650 + (Editor|RotatorProperty))
                    ;
                    uStack_65c = 0;
                    local_660 = *(uint *)CONCAT44(extraout_var_04,FVar29.Value);
                    if ((uVar11 == local_660) &&
                       (((local_700 & 0x10) == 0 || ((local_700 & 0x20) != 0)))) {
                      GetActorGUIDFromOpenBunch(pUVar24,(FInBunch *)(local_578 + 8));
                      if ((local_7e8[0x29] & 2) == 0) {
                        local_4b0 = &local_710;
                        local_4a8 = local_578 + 8;
                        TSet<TTuple<int,FNetworkGUID>,TDefaultMapHashableKeyFuncs<int,FNetworkGUID,0>,FDefaultSetAllocator>
                        ::Emplace<TPairInitializer<int_const_&,FNetworkGUID_const_&>_>
                                  ((TSet<TTuple<int,FNetworkGUID>,TDefaultMapHashableKeyFuncs<int,FNetworkGUID,0>,FDefaultSetAllocator>
                                    *)&pUVar24->IgnoringChannels,
                                   (TPairInitializer<int_const_&,FNetworkGUID_const_&> *)
                                   (local_650 + 0x30),(bool *)&local_4b0);
                      }
                      else if (1 < (byte)LogNetTraffic._0_1_) {
                        UE::Logging::Private::BasicLog<2>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                      }
                    }
                  }
                  if (*(int *)&(pUVar24->IgnoringChannels).field_0x8 !=
                      *(int *)&(pUVar24->IgnoringChannels).field_0x34) {
                    puVar4 = *(undefined1 **)&(pUVar24->IgnoringChannels).field_0x40;
                    puVar44 = &(pUVar24->IgnoringChannels).field_0x38;
                    if (puVar4 != (undefined1 *)0x0) {
                      puVar44 = puVar4;
                    }
                    iVar32 = *(int *)(puVar44 +
                                     (ulonglong)
                                     (*(int *)&(pUVar24->IgnoringChannels).field_0x48 - 1U &
                                     local_710) * 4);
                    if (iVar32 != -1) {
                      do {
                        if (*(uint *)(*(longlong *)&pUVar24->IgnoringChannels +
                                     (longlong)iVar32 * 0x18) == local_710) {
                          if (((local_700 & 2) == 0) ||
                             ((((local_700 & 0x10) != 0 && ((local_700 & 0x40) == 0)) ||
                              (TMap<int,FNetworkGUID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNetworkGUID,0>_>
                               ::FindAndRemoveChecked(&pUVar24->IgnoringChannels,(int)&local_6b0),
                              (local_6b0.Value._0_1_ & 1) == 0)))) {
LAB_147fc3e87:
                            if (4 < (byte)LogNetTraffic._0_1_) {
                              UE::Logging::Private::BasicLog<5>
                                        (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                            }
                          }
                          else {
                            this_01 = TSharedPtr<FNetGUIDCache,1>::operator->
                                                (&((pUVar24->Driver).field0_0x0.DebugPtr)->GuidCache
                                                );
                            pUVar34 = FNetGUIDCache::GetObjectFromNetGUID
                                                (this_01,(FNetworkGUID *)&local_6b0,false);
                            if (pUVar34 != (UObject *)0x0) {
                              pUVar33 = Z_Construct_UClass_AActor_NoRegister();
                              iVar32 = (int)pUVar33->_padding_;
                              if ((iVar32 <= *(int *)(*(longlong *)&pUVar34->field_0x10 + 0x38)) &&
                                 ((longlong *)
                                  *(undefined1 **)
                                   (*(longlong *)(*(longlong *)&pUVar34->field_0x10 + 0x30) +
                                   (longlong)iVar32 * 8) == &pUVar33->_padding_)) {
                                (**(code **)(pUVar24->_padding_ + 0x400))(pUVar24,pUVar34);
                                goto LAB_147fc3e87;
                              }
                              bVar46 = UE::Assert::Private::ExecCheckImplInternal
                                                 (&bGEnsureHasExecuted<5435733364554338085>,false,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                                                  ,0xf25,"FoundObject == nullptr");
                              if (bVar46) {
                                pcVar9 = (code *)swi(3);
                                (*pcVar9)();
                                return;
                              }
                            }
                            if (4 < (byte)LogNetTraffic._0_1_) {
                              ::FString::PrintfImpl(&local_4f8,L"%llu");
                              UE::Logging::Private::BasicLog<5>
                                        (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                              if (local_4f8.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
                              }
                              goto LAB_147fc3e87;
                            }
                          }
                          uVar31 = local_7e8._160_4_;
                          if (pFVar6 == (FNetTraceCollector *)0x0) goto LAB_147fc4ff8;
                          uVar30 = (uint)local_700;
                          FVar12.Number = FStack_70c.Number;
                          FVar12.ComparisonIndex.Value = FStack_70c.ComparisonIndex.Value;
                          local_568.Value =
                               ((((((((ulonglong)(local_6ff & 1) << 4 | (ulonglong)(uVar30 & 3)) * 2
                                    | (ulonglong)(local_700 & 8)) << 2 | (ulonglong)(uVar30 & 4)) *
                                   2 | (ulonglong)(uVar30 & 0x80) | (ulonglong)(local_6ff & 2)) << 4
                                 | (ulonglong)(uVar30 & 0x40)) * 2 | (ulonglong)(local_6fe & 0xf) |
                                (ulonglong)(uVar30 & 0x30)) << 0xc | (ulonglong)(local_704 & 0xfff))
                               << 0x14 | (ulonglong)(local_710 & 0xfffff);
                          uVar30 = FNetTrace::TraceName(FVar12);
                          pFVar42 = &local_568;
                          goto LAB_147fc4fdb;
                        }
                        iVar32 = *(int *)(*(longlong *)&pUVar24->IgnoringChannels + 0x10 +
                                         (longlong)iVar32 * 0x18);
                      } while (iVar32 != -1);
                    }
                  }
                }
              }
              else if (((local_700 & 2) != 0) &&
                      ((((local_700 & 0x10) == 0 || ((local_700 & 0x40) != 0)) &&
                       (local_6c8[0] = uVar31,
                       iVar32 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                                ::FindIndexByHash<int>
                                          ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                                            *)&pUVar24->ChannelIndexMap,uVar31,(int *)local_6c8),
                       iVar32 != -1)))) {
                puVar35 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                  ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                                 *)&pUVar24->ChannelIndexMap,uVar31);
                if ((*puVar35 != local_710) &&
                   (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ChannelIndexMap[CachedChIndex] == Bunch.ChIndex",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                                        ,0xf39,L""), bVar46)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if (5 < (byte)LogNetTraffic._0_1_) {
                  UE::Logging::Private::BasicLog<6>
                            (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                }
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
                Remove((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        *)&pUVar24->ChannelIndexMap,uVar31);
              }
            }
            if ((local_700 & 8) != 0) {
              lVar48 = (longlong)(int)local_710;
              uVar31 = uVar49;
              if ((int)local_710 < (pUVar24->InReliable).ArrayNum) {
                uVar31 = ~local_710 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar46)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if (*(int *)((pUVar24->InReliable).AllocatorInstance.Data + lVar48 * 4) <
                  (int)local_704) goto LAB_147fc41b9;
              if (4 < (byte)LogNetTraffic._0_1_) {
                if ((int)local_710 < (pUVar24->InReliable).ArrayNum) {
                  uVar49 = ~local_710 >> 0x1f;
                }
                if ((uVar49 == 0) &&
                   (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar46)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
              }
              if ((pUVar24->bInternalAck != 0) &&
                 (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!IsInternalAck()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                                      ,0xf47,L""), bVar46)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar31 = local_7e8._160_4_;
              if (pFVar6 == (FNetTraceCollector *)0x0) goto LAB_147fc4ff8;
              uVar30 = (uint)local_700;
              FVar13.Number = FStack_70c.Number;
              FVar13.ComparisonIndex.Value = FStack_70c.ComparisonIndex.Value;
              local_560.Value =
                   ((((((((ulonglong)(local_6ff & 1) << 4 | (ulonglong)(uVar30 & 3)) * 2 |
                        (ulonglong)(local_700 & 8)) << 2 | (ulonglong)(uVar30 & 4)) * 2 |
                       (ulonglong)(uVar30 & 0x80) | (ulonglong)(local_6ff & 2)) << 4 |
                     (ulonglong)(uVar30 & 0x40)) * 2 | (ulonglong)(local_6fe & 0xf) |
                    (ulonglong)(uVar30 & 0x30)) << 0xc | (ulonglong)(local_704 & 0xfff)) << 0x14 |
                   (ulonglong)(local_710 & 0xfffff);
              uVar30 = FNetTrace::TraceName(FVar13);
              pFVar42 = &local_560;
LAB_147fc4fdb:
              FNetTrace::EndBunch(pFVar6,uVar30,local_814,local_800,uVar31,pFVar42);
LAB_147fc4ff8:
              FNetBitReader::~FNetBitReader((FNetBitReader *)local_7e8);
              pFVar50 = local_808;
              goto LAB_147fc5006;
            }
LAB_147fc41b9:
            if (this_02 == (UChannel *)0x0) {
              if (((local_700 & 8) == 0) &&
                 (((local_700 & 1) == 0 || (((local_700 & 2) == 0 && ((local_700 & 0x10) == 0))))))
              {
                if (pUVar24->bInternalAck == 0) {
                  if (4 < (byte)LogNetTraffic._0_1_) {
                    if ((int)local_710 < (pUVar24->InReliable).ArrayNum) {
                      uVar49 = ~local_710 >> 0x1f;
                    }
                    if ((uVar49 == 0) &&
                       (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar46)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    UE::Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                  }
                }
                else if (1 < (byte)LogNetTraffic._0_1_) {
                  if ((int)local_710 < (pUVar24->InReliable).ArrayNum) {
                    uVar49 = ~local_710 >> 0x1f;
                  }
                  if ((uVar49 == 0) &&
                     (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar46)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                }
                uVar31 = local_7e8._160_4_;
                *(bool *)local_650._8_8_ = true;
                if (pFVar6 != (FNetTraceCollector *)0x0) {
                  uVar30 = (uint)local_700;
                  FVar14.Number = FStack_70c.Number;
                  FVar14.ComparisonIndex.Value = FStack_70c.ComparisonIndex.Value;
                  local_558.Value =
                       ((((((((ulonglong)(local_6ff & 1) << 4 | (ulonglong)(uVar30 & 3)) * 2 |
                            (ulonglong)(local_700 & 8)) << 2 | (ulonglong)(uVar30 & 4)) * 2 |
                           (ulonglong)(uVar30 & 0x80) | (ulonglong)(local_6ff & 2)) << 4 |
                         (ulonglong)(uVar30 & 0x40)) * 2 | (ulonglong)(local_6fe & 0xf) |
                        (ulonglong)(uVar30 & 0x30)) << 0xc | (ulonglong)(local_704 & 0xfff)) << 0x14
                       | (ulonglong)(local_710 & 0xfffff);
                  uVar30 = FNetTrace::TraceName(FVar14);
                  pFVar42 = &local_558;
                  goto LAB_147fc4fdb;
                }
                goto LAB_147fc4ff8;
              }
              for (FVar41.Data = local_698.AllocatorInstance.Data;
                  FVar41.Data != local_698.AllocatorInstance.Data + (longlong)local_698.ArrayNum * 4
                  ; FVar41.Data = FVar41.Data + 4) {
                if (*(uint *)FVar41.Data == local_710) {
                  if (4 < (byte)LogNetTraffic._0_1_) {
                    UE::Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                  }
                  uVar31 = local_7e8._160_4_;
                  if (pFVar6 == (FNetTraceCollector *)0x0) goto LAB_147fc4ff8;
                  uVar30 = (uint)local_700;
                  FVar15.Number = FStack_70c.Number;
                  FVar15.ComparisonIndex.Value = FStack_70c.ComparisonIndex.Value;
                  local_550.Value =
                       ((((((((ulonglong)(local_6ff & 1) << 4 | (ulonglong)(uVar30 & 3)) * 2 |
                            (ulonglong)(local_700 & 8)) << 2 | (ulonglong)(uVar30 & 4)) * 2 |
                           (ulonglong)(uVar30 & 0x80) | (ulonglong)(local_6ff & 2)) << 4 |
                         (ulonglong)(uVar30 & 0x40)) * 2 | (ulonglong)(local_6fe & 0xf) |
                        (ulonglong)(uVar30 & 0x30)) << 0xc | (ulonglong)(local_704 & 0xfff)) << 0x14
                       | (ulonglong)(local_710 & 0xfffff);
                  uVar30 = FNetTrace::TraceName(FVar15);
                  pFVar42 = &local_550;
                  goto LAB_147fc4fdb;
                }
              }
              pFVar43 = (FInBunch *)CONCAT44(FStack_70c.Number,FStack_70c.ComparisonIndex.Value);
              pUVar3 = (pUVar24->Driver).field0_0x0.DebugPtr;
              local_6a0 = pFVar43;
              uVar31 = ::GetTypeHash(FStack_70c.ComparisonIndex);
              if (*(int *)&(pUVar3->ChannelDefinitionMap).field_0x8 !=
                  *(int *)&(pUVar3->ChannelDefinitionMap).field_0x34) {
                puVar4 = *(undefined1 **)&(pUVar3->ChannelDefinitionMap).field_0x40;
                puVar44 = &(pUVar3->ChannelDefinitionMap).field_0x38;
                if (puVar4 != (undefined1 *)0x0) {
                  puVar44 = puVar4;
                }
                iVar32 = *(int *)(puVar44 +
                                 (ulonglong)
                                 (*(int *)&(pUVar3->ChannelDefinitionMap).field_0x48 - 1U &
                                 uVar31 + local_6a0._4_4_) * 4);
                if (iVar32 != -1) {
                  while (*(FInBunch **)
                          (*(longlong *)&pUVar3->ChannelDefinitionMap + (longlong)iVar32 * 0x30) !=
                         pFVar43) {
                    iVar32 = *(int *)(*(longlong *)&pUVar3->ChannelDefinitionMap + 0x28 +
                                     (longlong)iVar32 * 0x30);
                    if (iVar32 == -1) goto LAB_147fc443d;
                  }
                  cVar26 = (**(code **)(((pUVar24->Driver).field0_0x0.DebugPtr)->_padding_ + 0x3f8))
                                     ();
                  if ((cVar26 != '\0') &&
                     (FVar16.Number = FStack_70c.Number,
                     FVar16.ComparisonIndex.Value = FStack_70c.ComparisonIndex.Value,
                     pFVar36 = TMapBase<FName,FChannelDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelDefinition,0>_>
                               ::FindChecked((TMapBase<FName,FChannelDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelDefinition,0>_>
                                              *)&((pUVar24->Driver).field0_0x0.DebugPtr)->
                                                 ChannelDefinitionMap,FVar16),
                     pFVar36->bClientOpen == '\0')) {
                    if (2 < (byte)LogNetTraffic._0_1_) {
                      ::FName::ToString(&FStack_70c,&local_480);
                      UE::Logging::Private::BasicLog<3>
                                (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                      if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_480.Data.AllocatorInstance.Data);
                      }
                    }
                    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                              (&local_698,(int *)&local_710);
                    uVar31 = local_7e8._160_4_;
                    if (pFVar6 != (FNetTraceCollector *)0x0) {
                      uVar30 = (uint)local_700;
                      FVar17.Number = FStack_70c.Number;
                      FVar17.ComparisonIndex.Value = FStack_70c.ComparisonIndex.Value;
                      local_548.Value =
                           ((((((((ulonglong)(local_6ff & 1) << 4 | (ulonglong)(uVar30 & 3)) * 2 |
                                (ulonglong)(local_700 & 8)) << 2 | (ulonglong)(uVar30 & 4)) * 2 |
                               (ulonglong)(uVar30 & 0x80) | (ulonglong)(local_6ff & 2)) << 4 |
                             (ulonglong)(uVar30 & 0x40)) * 2 | (ulonglong)(local_6fe & 0xf) |
                            (ulonglong)(uVar30 & 0x30)) << 0xc | (ulonglong)(local_704 & 0xfff)) <<
                           0x14 | (ulonglong)(local_710 & 0xfffff);
                      uVar30 = FNetTrace::TraceName(FVar17);
                      pFVar42 = &local_548;
                      goto LAB_147fc4fdb;
                    }
                    goto LAB_147fc4ff8;
                  }
                  if ((pUVar24->bInternalAck != 0) && (pUVar24->bIgnoreActorBunches != false)) {
                    uVar30 = (uint)local_700;
                    if (((local_700 & 1) != 0) &&
                       (((local_700 & 0x10) == 0 || ((local_700 & 0x20) != 0)))) {
                      uVar11 = CONCAT44(FStack_70c.Number,FStack_70c.ComparisonIndex.Value);
                      FVar29 = FNameEntryId::FromValidEName((EName)local_61c);
                      uStack_654 = 0;
                      local_658 = *(uint *)CONCAT44(extraout_var_05,FVar29.Value);
                      if (uVar11 == local_658) {
                        GetActorGUIDFromOpenBunch(pUVar24,(FInBunch *)local_650);
                        if ((ulonglong)local_650._0_8_ < 2) {
                          if (2 < (byte)LogNetTraffic._0_1_) {
                            UE::Logging::Private::BasicLog<3>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                          }
                        }
                        else {
                          if (*(int *)&(pUVar24->IgnoredBunchGuids).Elements.field_0x8 !=
                              *(int *)&(pUVar24->IgnoredBunchGuids).Elements.field_0x34) {
                            FVar7 = (pUVar24->IgnoredBunchGuids).Hash.SecondaryData;
                            FVar45 = (ForElementType<FSetElementId>)
                                     &(pUVar24->IgnoredBunchGuids).Hash;
                            if (FVar7 != (ForElementType<FSetElementId>)0x0) {
                              FVar45 = FVar7;
                            }
                            iVar32 = *(int *)((longlong)FVar45 +
                                             (ulonglong)
                                             ((pUVar24->IgnoredBunchGuids).HashSize - 1U &
                                             SUB84(local_650._0_8_,4) * 0x17 + (int)local_650._0_8_)
                                             * 4);
                            if (iVar32 != -1) {
                              lVar48 = *(longlong *)&(pUVar24->IgnoredBunchGuids).Elements;
                              do {
                                if (*(ulonglong *)(lVar48 + (longlong)iVar32 * 0x10) ==
                                    local_650._0_8_) {
                                  if (5 < (byte)LogNetTraffic._0_1_) {
                                    ::FString::PrintfImpl(&local_4e8,L"%llu");
                                    UE::Logging::Private::BasicLog<6>
                                              (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                                    if (local_4e8.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
                                    }
                                  }
                                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                                  Emplace<int_const_&>
                                            (&pUVar24->IgnoredBunchChannels,local_618,
                                             (bool *)&local_710);
                                  uVar31 = local_7e8._160_4_;
                                  if (pFVar6 == (FNetTraceCollector *)0x0) goto LAB_147fc4ff8;
                                  uVar30 = (uint)local_700;
                                  FVar18.Number = FStack_70c.Number;
                                  FVar18.ComparisonIndex.Value = FStack_70c.ComparisonIndex.Value;
                                  local_540.Value =
                                       ((((((((ulonglong)(local_6ff & 1) << 4 |
                                             (ulonglong)(uVar30 & 3)) * 2 |
                                            (ulonglong)(local_700 & 8)) << 2 |
                                           (ulonglong)(uVar30 & 4)) * 2 | (ulonglong)(uVar30 & 0x80)
                                          | (ulonglong)(local_6ff & 2)) << 4 |
                                         (ulonglong)(uVar30 & 0x40)) * 2 |
                                         (ulonglong)(local_6fe & 0xf) | (ulonglong)(uVar30 & 0x30))
                                        << 0xc | (ulonglong)(local_704 & 0xfff)) << 0x14 |
                                       (ulonglong)(local_710 & 0xfffff);
                                  uVar30 = FNetTrace::TraceName(FVar18);
                                  pFVar42 = &local_540;
                                  goto LAB_147fc4fdb;
                                }
                                iVar32 = *(int *)(lVar48 + 8 + (longlong)iVar32 * 0x10);
                              } while (iVar32 != -1);
                            }
                          }
                          local_6c0[0] = local_710;
                          if (((*(int *)&(pUVar24->IgnoredBunchChannels).Elements.field_0x8 !=
                                *(int *)&(pUVar24->IgnoredBunchChannels).Elements.field_0x34) &&
                              (iVar32 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                                        RemoveImpl<int>(&pUVar24->IgnoredBunchChannels,local_710,
                                                        (int *)local_6c0), iVar32 != 0)) &&
                             (5 < (byte)LogNetTraffic._0_1_)) {
                            ::FString::PrintfImpl(&local_4d8,L"%llu");
                            UE::Logging::Private::BasicLog<6>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                            if (local_4d8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
                            }
                          }
                        }
                        goto LAB_147fc4842;
                      }
                      uVar30 = (uint)local_700;
                    }
                    if (*(int *)&(pUVar24->IgnoredBunchChannels).Elements.field_0x8 !=
                        *(int *)&(pUVar24->IgnoredBunchChannels).Elements.field_0x34) {
                      FVar7 = (pUVar24->IgnoredBunchChannels).Hash.SecondaryData;
                      FVar45 = (ForElementType<FSetElementId>)&(pUVar24->IgnoredBunchChannels).Hash;
                      if (FVar7 != (ForElementType<FSetElementId>)0x0) {
                        FVar45 = FVar7;
                      }
                      iVar32 = *(int *)((longlong)FVar45 +
                                       (ulonglong)
                                       ((pUVar24->IgnoredBunchChannels).HashSize - 1U & local_710) *
                                       4);
                      if (iVar32 != -1) {
                        lVar48 = *(longlong *)&(pUVar24->IgnoredBunchChannels).Elements;
                        do {
                          if (*(uint *)(lVar48 + (longlong)iVar32 * 0xc) == local_710) {
                            if (5 < (byte)LogNetTraffic._0_1_) {
                              UE::Logging::Private::BasicLog<6>
                                        (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                              uVar30 = (uint)local_700;
                            }
                            uVar31 = local_7e8._160_4_;
                            if (pFVar6 == (FNetTraceCollector *)0x0) goto LAB_147fc4ff8;
                            FVar19.Number = FStack_70c.Number;
                            FVar19.ComparisonIndex.Value = FStack_70c.ComparisonIndex.Value;
                            local_538.Value =
                                 ((((((((ulonglong)(local_6ff & 1) << 4 | (ulonglong)(uVar30 & 3)) *
                                       2 | (ulonglong)(uVar30 & 8)) << 2 | (ulonglong)(uVar30 & 4))
                                     * 2 | (ulonglong)(uVar30 & 0x80) | (ulonglong)(local_6ff & 2))
                                    << 4 | (ulonglong)(uVar30 & 0x40)) * 2 |
                                   (ulonglong)(local_6fe & 0xf) | (ulonglong)(uVar30 & 0x30)) << 0xc
                                 | (ulonglong)(local_704 & 0xfff)) << 0x14 |
                                 (ulonglong)(local_710 & 0xfffff);
                            uVar30 = FNetTrace::TraceName(FVar19);
                            pFVar42 = &local_538;
                            goto LAB_147fc4fdb;
                          }
                          iVar32 = *(int *)(lVar48 + 4 + (longlong)iVar32 * 0xc);
                        } while (iVar32 != -1);
                      }
                    }
                  }
LAB_147fc4842:
                  if (4 < (byte)LogNetTraffic._0_1_) {
                    ::FName::ToString(&FStack_70c,&local_470);
                    UE::Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                    if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_470.Data.AllocatorInstance.Data);
                    }
                  }
                  this_02 = CreateChannelByName(pUVar24,&FStack_70c,None,local_710);
                  pFVar8 = ((pUVar24->Driver).field0_0x0.DebugPtr)->Notify;
                  if ((pFVar8 != (FNetworkNotify *)0x0) &&
                     (cVar26 = (**(code **)((longlong)*pFVar8 + 0x10))(pFVar8,this_02),
                     cVar26 != '\0')) goto LAB_147fc4db7;
                  if (5 < (byte)LogNet._0_1_) {
                    (**(code **)(this_02->_padding_ + 0x2d0))(this_02,local_460);
                    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                    if (local_460[0] != (void *)0x0) {
                      FMemory::Free(local_460[0]);
                    }
                  }
                  TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                            (&local_698,(int *)&local_710);
                  FOutBunch::FOutBunch(&local_1b8,this_02,true);
                  if (((local_1b8._padding_._1_1_ & 2) != 0) &&
                     (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                         ("!CloseBunch.IsError()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                                          ,0xfca,L""), bVar46)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  if ((local_1b8.bClose == '\0') &&
                     (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                         ("CloseBunch.bClose",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                                          ,0xfcb,L""), bVar46)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  local_1b8.bReliable = '\x01';
                  (**(code **)(this_02->_padding_ + 0x318))(this_02);
                  (**(code **)(pUVar24->_padding_ + 0x308))(pUVar24);
                  UChannel::ConditionalCleanUp(this_02,false,Destroyed);
                  if (local_710 == 0) {
                    if (4 < (byte)LogNetTraffic._0_1_) {
                      UE::Logging::Private::BasicLog<5>
                                (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                    }
                    uVar31 = (pUVar24->ConnectionHandle).ParentConnectionId;
                    pUVar24->State = USOCK_Closed;
                    FNetTrace::TraceConnectionStateUpdated(pUVar24->NetTraceId,uVar31,'\x01');
                  }
                  FOutBunch::~FOutBunch(&local_1b8);
                  uVar31 = local_7e8._160_4_;
                  if (pFVar6 != (FNetTraceCollector *)0x0) {
                    uVar30 = (uint)local_700;
                    FVar20.Number = FStack_70c.Number;
                    FVar20.ComparisonIndex.Value = FStack_70c.ComparisonIndex.Value;
                    local_530.Value =
                         ((((((((ulonglong)(local_6ff & 1) << 4 | (ulonglong)(uVar30 & 3)) * 2 |
                              (ulonglong)(local_700 & 8)) << 2 | (ulonglong)(uVar30 & 4)) * 2 |
                             (ulonglong)(uVar30 & 0x80) | (ulonglong)(local_6ff & 2)) << 4 |
                           (ulonglong)(uVar30 & 0x40)) * 2 | (ulonglong)(local_6fe & 0xf) |
                          (ulonglong)(uVar30 & 0x30)) << 0xc | (ulonglong)(local_704 & 0xfff)) <<
                         0x14 | (ulonglong)(local_710 & 0xfffff);
                    uVar30 = FNetTrace::TraceName(FVar20);
                    pFVar42 = &local_530;
                    goto LAB_147fc4fdb;
                  }
                  goto LAB_147fc4ff8;
                }
              }
LAB_147fc443d:
              if (2 < (byte)LogNet._0_1_) {
                ::FName::ToString(&FStack_70c,&local_3f0);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
                }
              }
              UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                        (&local_2d8,UnknownChannelType);
              Close(pUVar24,&local_2d8);
              if (local_2d8.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
                (**(code **)((longlong)local_2d8.NextResult + -0x10))
                          ((longlong)local_2d8.NextResult + -0x10);
              }
              if (local_2d8.ErrorContext.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2d8.ErrorContext.Data.AllocatorInstance.Data);
              }
            }
            else {
LAB_147fc4db7:
              local_817[0] = false;
              local_6ff = (local_810 & 1) << 2 | local_6ff & 0xfb;
              if ((this_02 != (UChannel *)0x0) &&
                 (UChannel::ReceivedRawBunch(this_02,(FInBunch *)local_7e8,local_817),
                 local_817[0] != false)) {
                *(bool *)local_650._8_8_ = true;
              }
              puVar35 = &((pUVar24->Driver).field0_0x0.DebugPtr)->InBunches;
              *puVar35 = *puVar35 + 1;
              puVar35 = &((pUVar24->Driver).field0_0x0.DebugPtr)->InTotalBunches;
              *puVar35 = *puVar35 + 1;
              puVar35 = &((pUVar24->Driver).field0_0x0.DebugPtr)->InTotalReliableBunches;
              *puVar35 = *puVar35 + (local_700 >> 3 & 1);
              if (((local_7e8[0x29] & 4) == 0) && ((local_7e8[0x29] & 2) == 0)) {
LAB_147fc4eb9:
                if ((((pUVar24->bInternalAck != 0) && ((local_7e8[0x29] & 2) != 0)) &&
                    (this_02 != (UChannel *)0x0)) &&
                   (this_02->OpenAcked == 0 && this_02->OpenedLocally == 0)) {
                  if (2 < (byte)LogNetTraffic._0_1_) {
                    (**(code **)(this_02->_padding_ + 0x2d0))(this_02,local_440);
                    UE::Logging::Private::BasicLog<3>
                              (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                    if (local_440[0] != (void *)0x0) {
                      FMemory::Free(local_440[0]);
                    }
                  }
                  UChannel::ConditionalCleanUp(this_02,true,Destroyed);
                }
                uVar31 = local_7e8._160_4_;
                if (pFVar6 != (FNetTraceCollector *)0x0) {
                  uVar30 = (uint)local_700;
                  FVar21.Number = FStack_70c.Number;
                  FVar21.ComparisonIndex.Value = FStack_70c.ComparisonIndex.Value;
                  local_518.Value =
                       ((((((((ulonglong)(local_6ff & 1) << 4 | (ulonglong)(uVar30 & 3)) * 2 |
                            (ulonglong)(local_700 & 8)) << 2 | (ulonglong)(uVar30 & 4)) * 2 |
                           (ulonglong)(uVar30 & 0x80) | (ulonglong)(local_6ff & 2)) << 4 |
                         (ulonglong)(uVar30 & 0x40)) * 2 | (ulonglong)(local_6fe & 0xf) |
                        (ulonglong)(uVar30 & 0x30)) << 0xc | (ulonglong)(local_704 & 0xfff)) << 0x14
                       | (ulonglong)(local_710 & 0xfffff);
                  uVar30 = FNetTrace::TraceName(FVar21);
                  pFVar42 = &local_518;
                  goto LAB_147fc4fdb;
                }
                goto LAB_147fc4ff8;
              }
              *local_528 = true;
              if (local_520.DebugPtr == (UNetConnection *)0x0) {
                if (1 < (byte)LogNetTraffic._0_1_) {
                  (**(code **)(pUVar24->_padding_ + 0x2d0))(pUVar24,local_3e0,0);
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                  if (local_3e0[0] != (void *)0x0) {
                    FMemory::Free(local_3e0[0]);
                  }
                }
                UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                          (local_278,CorruptData);
                pFVar37 = UE::Net::AddToAndConsumeChainResultPtr
                                    (&local_1e8,
                                     (TPimplPtr<UE::Net::FNetResult,1> *)(local_7e8 + 0xb8),
                                     (TNetResult<ENetCloseResult> *)local_278);
                Close(pUVar24,pFVar37);
                if (local_1e8.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
                  (**(code **)((longlong)local_1e8.NextResult + -0x10))
                            ((longlong)local_1e8.NextResult + -0x10);
                }
                if (local_1e8.ErrorContext.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1e8.ErrorContext.Data.AllocatorInstance.Data);
                }
                if (local_250 != 0) {
                  (**(code **)(local_250 + -0x10))(local_250 + -0x10);
                }
                if ((void *)local_278._24_8_ != (void *)0x0) {
                  FMemory::Free((void *)local_278._24_8_);
                }
              }
              else {
                if (1 < (byte)LogNetTraffic._0_1_) {
                  (**(code **)(pUVar24->_padding_ + 0x2d0))(pUVar24,local_450,0);
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
                  if (local_450[0] != (void *)0x0) {
                    FMemory::Free(local_450[0]);
                  }
                }
                if (((pUVar24->Driver).field0_0x0.DebugPtr)->ReplicationSystem ==
                    (UReplicationSystem *)0x0) goto LAB_147fc4eb9;
                `UNetConnection::DispatchPacket'::__l908::<lambda_1>::operator()(local_7f4);
                UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                          (local_2a8,CorruptData);
                pFVar37 = UE::Net::AddToAndConsumeChainResultPtr
                                    (&local_218,
                                     (TPimplPtr<UE::Net::FNetResult,1> *)(local_7e8 + 0xb8),
                                     (TNetResult<ENetCloseResult> *)local_2a8);
                Close(pUVar24,pFVar37);
                if (local_218.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
                  (**(code **)((longlong)local_218.NextResult + -0x10))
                            ((longlong)local_218.NextResult + -0x10);
                }
                if (local_218.ErrorContext.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_218.ErrorContext.Data.AllocatorInstance.Data);
                }
                if (local_280 != 0) {
                  (**(code **)(local_280 + -0x10))(local_280 + -0x10);
                }
                if ((void *)local_2a8._24_8_ != (void *)0x0) {
                  FMemory::Free((void *)local_2a8._24_8_);
                }
              }
            }
LAB_147fc555c:
            if (pFVar6 != (FNetTraceCollector *)0x0) {
              uVar31 = (uint)local_700;
              FVar22.Number = FStack_70c.Number;
              FVar22.ComparisonIndex.Value = FStack_70c.ComparisonIndex.Value;
              local_508.Value =
                   ((((((((ulonglong)(local_6ff & 1) << 4 | (ulonglong)(uVar31 & 3)) * 2 |
                        (ulonglong)(local_700 & 8)) << 2 | (ulonglong)(uVar31 & 4)) * 2 |
                       (ulonglong)(uVar31 & 0x80) | (ulonglong)(local_6ff & 2)) << 4 |
                     (ulonglong)(uVar31 & 0x40)) * 2 | (ulonglong)(local_6fe & 0xf) |
                    (ulonglong)(uVar31 & 0x30)) << 0xc | (ulonglong)(local_704 & 0xfff)) << 0x14 |
                   (ulonglong)(local_710 & 0xfffff);
              uVar31 = FNetTrace::TraceName(FVar22);
              FNetTrace::EndBunch(pFVar6,uVar31,local_814,local_800,local_7e8._160_4_,&local_508);
            }
          }
          else {
            if (2 < (byte)LogNet._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            }
            HandleNetResultOrClose(pUVar24,BunchHeaderOverflow);
          }
        }
        else {
          if (bVar47 == 0) {
            local_680 = 0;
            FStack_70c.ComparisonIndex.Value = 0;
            FStack_70c.Number = 0;
            goto LAB_147fc36e7;
          }
          UPackageMap::StaticSerializeName((FArchive *)pFVar50,&FStack_70c);
          if ((local_588->_padding_ & 2) == 0) goto LAB_147fc36e7;
          if (2 < (byte)LogNet._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)&PTR_u_Channel_name_se_1519ce718,
                       (FLogCategoryBase *)&LogNet);
          }
          HandleNetResultOrClose(pUVar24,BunchChannelNameFail);
        }
LAB_147fc56e0:
        FNetBitReader::~FNetBitReader((FNetBitReader *)local_7e8);
        break;
      }
      this_00 = &local_6a8->ChannelIndexMap;
      if (*(int *)&(local_6a8->ChannelIndexMap).field_0x8 !=
          *(int *)&(local_6a8->ChannelIndexMap).field_0x34) {
        puVar4 = *(undefined1 **)&(local_6a8->ChannelIndexMap).field_0x40;
        puVar44 = &(local_6a8->ChannelIndexMap).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar44 = puVar4;
        }
        iVar28 = *(int *)(puVar44 +
                         (ulonglong)(*(int *)&(local_6a8->ChannelIndexMap).field_0x48 - 1U & uVar31)
                         * 4);
        if (iVar28 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar28 * 0x10) == uVar31) {
              puVar35 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                               *)this_00,uVar31);
              local_710 = *puVar35;
              goto LAB_147fc300e;
            }
            iVar28 = *(int *)(*(longlong *)&this_00->field_0x0 + 8 + (longlong)iVar28 * 0x10);
          } while (iVar28 != -1);
        }
      }
      uVar30 = 0;
      if ((int)uVar31 < (local_6a8->Channels).ArrayNum) {
        uVar30 = ~uVar31 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar46)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (((*(longlong *)((pUVar24->Channels).AllocatorInstance.Data + (longlong)(int)uVar31 * 8) ==
            0) || ((local_700 & 1) == 0)) ||
         (((local_700 & 0x10) != 0 && ((local_700 & 0x20) == 0)))) goto LAB_147fc300e;
      lVar5 = pUVar39->_padding_;
      FBitReader::ReadBit(pFVar50);
      FBitReader::ReadBit(pFVar50);
      uVar27 = FBitReader::ReadBit(pFVar50);
      if (uVar27 != '\0') {
        FBitReader::ReadBit(pFVar50);
        if (bVar23) {
          FBitReader::ReadBit(pFVar50);
        }
        FBitReader::ReadBit(pFVar50);
      }
      local_6b8.ComparisonIndex.Value = 0;
      local_6b8.Number = 0;
      UPackageMap::StaticSerializeName((FArchive *)pFVar50,&local_6b8);
      pUVar39->_padding_ = lVar5;
      local_6f0 = GetFreeChannelIndex(pUVar24,&local_6b8);
      if (local_6f0 != 0xffffffff) {
        if (5 < (byte)LogNetTraffic._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
        }
        local_4c0 = &local_710;
        local_4b8 = &local_6f0;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)this_00,(TPairInitializer<int_const_&,int_const_&> *)local_578,
                   (bool *)&local_4c0);
        local_710 = local_6f0;
        goto LAB_147fc300e;
      }
      if (2 < (byte)LogNetTraffic._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
      }
      FNetBitReader::~FNetBitReader((FNetBitReader *)local_7e8);
LAB_147fc5006:
      cVar26 = (**(code **)(pFVar50->_padding_ + 0x38))(pFVar50);
      param_1 = local_808;
      pUVar39 = local_6d8;
      pFVar43 = local_510;
      this = local_6a8;
    } while (cVar26 == '\0');
  }
  if (local_698.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.AllocatorInstance.Data);
  }
  return;
}

// EnableEncryption @ 147fc6910

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::EnableEncryption(UNetConnection *this,FEncryptionData *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FEncryptionComponent,1> local_28;
  void *local_18 [2];
  
  if ((this->Handler).Ptr != (PacketHandler *)0x0) {
    if (5 < (byte)LogNet._0_1_) {
      (**(code **)(this->_padding_ + 0x2e0))(this,local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
    }
    PacketHandler::GetEncryptionComponent((this->Handler).Ptr,&local_28);
    if (local_28.Object == (FEncryptionComponent *)0x0) {
      if (2 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
    }
    else {
      if ((local_28.Object == (FEncryptionComponent *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(*(longlong *)local_28.Object + 0xa8))(local_28.Object,param_1);
      if ((local_28.Object == (FEncryptionComponent *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(*(longlong *)local_28.Object + 0x88))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// EnableEncryption @ 147fc6a50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::EnableEncryption(UNetConnection *this)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FEncryptionComponent,1> local_28;
  void *local_18 [2];
  
  if ((this->Handler).Ptr != (PacketHandler *)0x0) {
    if (5 < (byte)LogNet._0_1_) {
      (**(code **)(this->_padding_ + 0x2e0))(this,local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
    }
    PacketHandler::GetEncryptionComponent((this->Handler).Ptr,&local_28);
    if (local_28.Object != (FEncryptionComponent *)0x0) {
      if ((local_28.Object == (FEncryptionComponent *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(*(longlong *)local_28.Object + 0x88))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      return;
    }
    if (2 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// EnableEncryptionServer @ 147fc6b50

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
UNetConnection::EnableEncryptionServer(UNetConnection *this,FEncryptionData *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FEncryptionComponent,1> local_38;
  void *local_28 [2];
  void *local_18 [2];
  
  if (((this->State == USOCK_Invalid) || (this->State == USOCK_Closed)) ||
     ((this->Driver).field0_0x0.DebugPtr == (UNetDriver *)0x0)) {
    if (4 < (byte)LogNet._0_1_) {
      (**(code **)(this->_padding_ + 0x2e0))(this,local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
    }
  }
  else {
    UE::Net::TNetControlMessageImpl<21>::Send(this);
    (**(code **)(this->_padding_ + 0x308))(this,0);
    if ((this->Handler).Ptr != (PacketHandler *)0x0) {
      if (5 < (byte)LogNet._0_1_) {
        (**(code **)(this->_padding_ + 0x2e0))(this,local_28);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_28[0] != (void *)0x0) {
          FMemory::Free(local_28[0]);
        }
      }
      PacketHandler::GetEncryptionComponent((this->Handler).Ptr,&local_38);
      if (local_38.Object == (FEncryptionComponent *)0x0) {
        if (2 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        return;
      }
      if ((local_38.Object == (FEncryptionComponent *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(*(longlong *)local_38.Object + 0xa8))(local_38.Object,param_1);
      if ((local_38.Object == (FEncryptionComponent *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(*(longlong *)local_38.Object + 0x88))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      return;
    }
  }
  return;
}

// Exec @ 147fc6da0

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
UNetConnection::Exec(UNetConnection *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = UPlayer::Exec((UPlayer *)this,param_1,param_2,param_3);
  if (!bVar1) {
    cVar2 = (**(code **)(GEngine->_padding_ + 8))(&GEngine->_padding_,param_1,param_2,param_3);
    return cVar2 != '\0';
  }
  return true;
}

// ExecuteOnAllDormantReplicators @ 147fc81e0

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
UNetConnection::ExecuteOnAllDormantReplicators
          (UNetConnection *this,
          TFunctionRef<void___cdecl(FObjectKey,FObjectKey,TSharedRef<FObjectReplicator,1>_const_&)>
          *param_1)

{
  TFunctionRef<void___cdecl(FObjectKey,FObjectKey,TSharedRef<FObjectReplicator,1>_const_&)> local_18
  ;
  
  local_18._0_8_ = *(undefined8 *)param_1;
  local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
  UE::Net::Private::FDormantReplicatorHolder::ForEachDormantReplicator
            (&this->DormantReplicatorSet,&local_18);
  return;
}

// ExecuteOnAllDormantReplicatorsOfActor @ 147fc8220

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
UNetConnection::ExecuteOnAllDormantReplicatorsOfActor
          (UNetConnection *this,AActor *param_1,
          TFunctionRef<void___cdecl(FObjectKey,FObjectKey,TSharedRef<FObjectReplicator,1>_const_&)>
          *param_2)

{
  TFunctionRef<void___cdecl(FObjectKey,FObjectKey,TSharedRef<FObjectReplicator,1>_const_&)> local_18
  ;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  UE::Net::Private::FDormantReplicatorHolder::ForEachDormantReplicatorOfActor
            (&this->DormantReplicatorSet,param_1,&local_18);
  return;
}

// FindAndRemoveDormantReplicator @ 147fcba70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FObjectReplicator,1> * __thiscall
UNetConnection::FindAndRemoveDormantReplicator
          (UNetConnection *this,TSharedPtr<FObjectReplicator,1> *__return_storage_ptr__,
          AActor *param_1,UObject *param_2)

{
  FObjectReplicator *pFVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  TSharedPtr<FObjectReplicator,1> *pTVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  FWeakObjectPtr local_res20;
  UObject *local_38;
  TSharedPtr<FObjectReplicator,1> local_30;
  
  if (param_2 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  }
  UE::Net::Private::FDormantReplicatorHolder::FindAndRemoveReplicator
            (&this->DormantReplicatorSet,__return_storage_ptr__,param_1,param_2);
  if (__return_storage_ptr__->Object != (FObjectReplicator *)0x0) {
    local_res20 = (__return_storage_ptr__->Object->WeakObjectPtr).WeakPtr;
    pUVar4 = FWeakObjectPtr::Get(&local_res20);
    if (pUVar4 != (UObject *)0x0) {
      if (__return_storage_ptr__->Object == (FObjectReplicator *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TSharedPtr<FObjectReplicator,1> *)(*pcVar2)();
          return pTVar5;
        }
      }
      pFVar1 = __return_storage_ptr__->Object;
      pFVar1->ObjectPtr = pUVar4;
      local_38 = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      FWeakObjectPtr::operator=(&(pFVar1->WeakObjectPtr).WeakPtr,(FObjectPtr)&local_38);
      return __return_storage_ptr__;
    }
    local_30.Object = (FObjectReplicator *)0x0;
    local_30.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (__return_storage_ptr__ != &local_30) {
      __return_storage_ptr__->Object = (FObjectReplicator *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_30.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// FinishDestroy @ 147fcd950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::FinishDestroy(UNetConnection *this)

{
  if ((this->_padding_ & 0x10) == 0) {
    (**(code **)(this->_padding_ + 0x348))();
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// FlushDormancy @ 147fcda20

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

void __thiscall UNetConnection::FlushDormancy(UNetConnection *this,AActor *param_1)

{
  FSubObjectRegistry *pFVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  UNetDriver *pUVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  code *pcVar9;
  byte bVar10;
  AActor *pAVar11;
  UObject *pUVar12;
  bool bVar13;
  int iVar14;
  ulonglong uVar15;
  UNetConnection *pUVar16;
  UClass *pUVar17;
  UWorld *pUVar18;
  UClass *pUVar19;
  USubsystem *pUVar20;
  FScriptContainerElement *pFVar21;
  TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
  *this_00;
  TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *pTVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  char cVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  TArray<UE::Net::FReplicatedComponentInfo,TSizedDefaultAllocator<32>_> *pTVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  ForElementType<unsigned_int> FVar32;
  UClass *pUVar33;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [8];
  AActor *local_1a0;
  TArray<UE::Net::FReplicatedComponentInfo,TSizedDefaultAllocator<32>_> *local_198;
  UObject *local_190;
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  uint local_178;
  uint uStack_174;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_170;
  undefined4 local_168;
  undefined8 uStack_164;
  undefined4 uStack_15c;
  undefined1 local_158 [16];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_148;
  undefined4 local_128;
  int local_124;
  undefined1 local_120 [12];
  FName local_114;
  AActor **local_108;
  UObject *local_100;
  AActor *local_f8;
  FString local_f0;
  FString local_e0;
  UObject **local_d0;
  AActor **local_c8;
  undefined8 *local_c0;
  FWeakObjectPtr *local_b8;
  void *local_b0 [2];
  TStaticBitArray<17> local_a0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_1a0 = param_1;
  if (5 < (byte)LogNetDormancy._0_1_) {
    local_120._4_8_ = this->_padding_;
    ::FName::ToString((FName *)(local_120 + 4),&local_e0);
    local_114 = (FName)local_1a0->_padding_;
    ::FName::ToString(&local_114,&local_f0);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetDormancy);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  pUVar5 = (this->Driver).field0_0x0.DebugPtr;
  if (((pUVar5->NetworkObjects).Object == (FNetworkObjectList *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar13 = FNetworkObjectList::MarkActive
                     ((pUVar5->NetworkObjects).Object,local_1a0,this,
                      (this->Driver).field0_0x0.DebugPtr);
  pUVar33 = (UClass *)0x0;
  if (!bVar13) goto LAB_147fce2a5;
  FlushDormancyForObject(this,local_1a0,(UObject *)local_1a0);
  uVar30 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  pTVar28 = &local_1a0->ReplicatedComponentsInfo;
  local_70 = 0;
  pFVar1 = &local_1a0->ReplicatedSubObjects;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_198 = pTVar28;
  if ((UE::Net::Connection::Private::bTrackFlushedDormantObjects != 0) &&
     (uVar26 = (local_1a0->ReplicatedComponentsInfo).ArrayNum +
               (local_1a0->ReplicatedSubObjects).Registry.ArrayNum, uVar26 != 0)) {
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar26);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98,uVar26);
    if (uVar26 < 4) {
      uVar26 = 1;
    }
    else {
      uVar31 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_128 = (undefined4)lVar8;
      uVar26 = 1 << ((byte)lVar8 & 0x1f);
    }
    if ((local_50 == 0) || ((int)local_50 < (int)uVar26)) {
      local_50 = uVar26;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar26 != 0) {
        uVar29 = uVar26;
        if (uVar26 < 2) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar29 = 0;
            goto LAB_147fcdc37;
          }
        }
        else {
LAB_147fcdc37:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar29,4)
          ;
        }
        if (0 < (int)uVar26) {
          uVar31 = (ulonglong)uVar26;
          pUVar17 = pUVar33;
          do {
            FVar23.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar23.Data = local_58.Data;
            }
            uVar15 = (ulonglong)pUVar17 & (longlong)(int)uVar26 - 1U;
            pUVar17 = (UClass *)((longlong)&pUVar17->_padding_ + 1);
            *(undefined4 *)(FVar23.Data + uVar15 * 4) = 0xffffffff;
            uVar31 = uVar31 - 1;
          } while (uVar31 != 0);
        }
      }
      if (local_50 != 0) {
        pTStack_170 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        local_178 = 0;
        uStack_174 = 1;
        uStack_164 = 0;
        if (local_70 != 0) {
          FVar32 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar32 = local_78;
          }
          uVar26 = *(uint *)FVar32;
          pUVar17 = pUVar33;
          pUVar19 = pUVar33;
          while (uVar26 == 0) {
            uVar30 = (int)pUVar19 + 0x20;
            pUVar19 = (UClass *)(ulonglong)uVar30;
            iVar14 = (int)pUVar17;
            local_178 = iVar14 + 1;
            pUVar17 = (UClass *)(ulonglong)local_178;
            uStack_164 = (ulonglong)uVar30 << 0x20;
            if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_178) {
              uStack_164 = CONCAT44(uVar30,local_70);
              goto LAB_147fcdd47;
            }
            uVar26 = ((uint *)((longlong)FVar32 + 4))[iVar14];
          }
          uStack_174 = ~(uVar26 - 1) & uVar26;
          uVar31 = (ulonglong)uStack_174 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar31 != 0) {
            for (; uVar31 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          local_124 = (int)lVar8;
          iVar14 = (uVar30 - 1) + local_124;
          if (local_70 < iVar14) {
            iVar14 = local_70;
          }
          uStack_164._4_4_ = (int)((ulonglong)uStack_164 >> 0x20);
          uStack_164 = CONCAT44(uStack_164._4_4_,iVar14);
        }
LAB_147fcdd47:
        local_168 = 0xffffffff;
        local_158._8_8_ = local_98;
        local_148._padding_ = CONCAT44(uStack_174,local_178);
        local_148.UnvisitedBitMask = 0xffffffff;
        local_148.CurrentBitIndex = (int)uStack_164;
        local_148.BaseBitIndex = uStack_164._4_4_;
        local_148._28_4_ = uStack_15c;
        local_148.Array = pTStack_170;
        if ((int)uStack_164 < local_70) {
          do {
            lVar8 = *(longlong *)local_158._8_8_ + (longlong)local_148.CurrentBitIndex * 0x18;
            uVar6 = *(undefined8 *)
                     (*(longlong *)local_158._8_8_ + (longlong)local_148.CurrentBitIndex * 0x18);
            uVar30 = (int)((ulonglong)uVar6 >> 0x20) * 0x17 + (int)uVar6 & local_50 - 1;
            *(uint *)(lVar8 + 0x14) = uVar30;
            FVar23.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar23.Data = local_58.Data;
            }
            lVar24 = (longlong)(int)(local_50 - 1 & uVar30);
            *(undefined4 *)(lVar8 + 0x10) = *(undefined4 *)(FVar23.Data + lVar24 * 4);
            *(int *)(FVar23.Data + lVar24 * 4) = local_148.CurrentBitIndex;
            local_148.UnvisitedBitMask = local_148.UnvisitedBitMask & ~local_148._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_148);
          } while (local_148.CurrentBitIndex < (local_148.Array)->NumBits);
        }
      }
    }
  }
  local_a0.Words[0] = (ulong64  [1])0;
  if (UE::Net::Connection::Private::bEnableFlushDormantSubObjectsCheckConditions != 0) {
    pUVar16 = (UNetConnection *)(**(code **)(local_1a0->_padding_ + 0x570))();
    if (pUVar16 == this) {
LAB_147fcde93:
      bVar10 = 1;
    }
    else {
      if (pUVar16 != (UNetConnection *)0x0) {
        pUVar17 = Z_Construct_UClass_UChildConnection_NoRegister();
        iVar14 = (int)pUVar17->_padding_;
        if ((iVar14 <= *(int *)(pUVar16->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
            &pUVar17->_padding_)) {
          if ((UNetConnection *)pUVar16[1]._padding_ == (UNetConnection *)0x0) {
            bVar13 = this == (UNetConnection *)0x0;
          }
          else {
            bVar13 = (UNetConnection *)pUVar16[1]._padding_ == this;
          }
          if (bVar13) goto LAB_147fcde93;
        }
      }
      bVar10 = 0;
    }
    bVar13 = (local_1a0->RemoteRole).Value == '\x01';
    uVar31 = (ulonglong)bVar10 * 4 + 3;
    uVar15 = uVar31 | 8;
    if (bVar10 != 0) {
      uVar15 = uVar31;
    }
    cVar25 = this->bReplay;
    uVar31 = uVar15;
    if ((bVar13) && (uVar31 = uVar15 | 0x10, cVar25 == '\0')) {
      uVar31 = uVar15 | 0x810;
LAB_147fcdf20:
      uVar15 = uVar31 | 0x40;
      if (((bVar13) || ((local_1a0->ReplicatedMovement).bRepPhysics != '\0')) && (cVar25 == '\0')) {
        uVar15 = uVar31 | 0x1040;
      }
    }
    else if ((bVar13) ||
            (uVar15 = uVar31 | 0x20, uVar31 = uVar15,
            (local_1a0->ReplicatedMovement).bRepPhysics != '\0')) goto LAB_147fcdf20;
    if ((cVar25 == '\0') && (bVar10 == 0)) {
      uVar31 = uVar15 | 0x80;
LAB_147fcdf4a:
      uVar31 = uVar31 | 0x2000;
    }
    else {
      uVar31 = uVar15 | 0x280;
      if (cVar25 == '\0') goto LAB_147fcdf4a;
      uVar31 = uVar15 | 0x680;
    }
    local_a0.Words[0] = (ulong64  [1])(uVar31 | 0x4100);
    pUVar18 = AActor::GetWorld(local_1a0);
    if (pUVar18 != (UWorld *)0x0) {
      pUVar17 = Z_Construct_UClass_UNetworkSubsystem_NoRegister();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar17 != (UClass *)0x0) goto LAB_147fcdfb5;
LAB_147fcdfe3:
        pUVar17 = pUVar33;
      }
      else {
        if (pUVar17 == (UClass *)0x0) goto LAB_147fcdfe3;
        UE::GC::MarkAsReachable((UObject *)pUVar17);
LAB_147fcdfb5:
        pUVar19 = Z_Construct_UClass_UNetworkSubsystem_NoRegister();
        if (pUVar19 == (UClass *)0x0) goto LAB_147fcdfe3;
        iVar14 = (int)pUVar19->_padding_;
        if (((int)pUVar17->_padding_ < iVar14) ||
           ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar14 * 8) !=
            &pUVar19->_padding_)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if (!bVar13) goto LAB_147fcdfe3;
      }
      pUVar20 = FSubsystemCollectionBase::GetSubsystemInternal
                          ((FSubsystemCollectionBase *)&pUVar18->SubsystemCollection,pUVar17);
      if ((pUVar20 != (USubsystem *)0x0) &&
         (pUVar33 = (UClass *)&pUVar20[1]._padding_, pTVar28 = local_198, pUVar33 != (UClass *)0x0))
      goto LAB_147fce016;
    }
    local_108 = &local_1a0;
    `UNetConnection::FlushDormancy'::__l29::<lambda_1>::operator()(&local_108);
    pTVar28 = local_198;
  }
LAB_147fce016:
  if (UE::Net::Connection::Private::bEnableFlushDormantSubObjects != 0) {
    UE::Net::Connection::Private::FlushDormancyForSubObjects
              (this,local_1a0,pFVar1,
               (TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
                *)local_98,&local_a0,(FNetConditionGroupManager *)pUVar33);
  }
  iVar14 = pTVar28->ArrayNum;
  pFVar27 = (pTVar28->AllocatorInstance).Data;
  pFVar3 = pFVar27 + (longlong)iVar14 * 0x28;
  while( true ) {
    if (pTVar28->ArrayNum != iVar14) {
      local_1a8[0] = 0;
      `TCheckedPointerIterator<UE::Net::FReplicatedComponentInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_1a8);
    }
    if (pFVar27 == pFVar3) break;
    local_190 = *(UObject **)pFVar27;
    if ((local_190 == (UObject *)0x0) || ((*(uint *)&local_190->field_0x8 >> 0x1e & 1) != 0)) {
      local_d0 = &local_190;
      local_c8 = &local_1a0;
      bVar13 = `UNetConnection::FlushDormancy'::__l37::<lambda_2>::operator()(&local_d0);
      if (bVar13) goto LAB_147fce0a8;
LAB_147fce233:
      pFVar27 = pFVar27 + 0x28;
    }
    else {
LAB_147fce0a8:
      if (((UE::Net::Connection::Private::bEnableFlushDormantSubObjectsCheckConditions != 0) &&
          (pUVar33 != (UClass *)0x0)) &&
         (bVar13 = UActorChannel::CanSubObjectReplicateToClient
                             ((APlayerController *)this->_padding_,
                              *(ELifetimeCondition *)(pFVar27 + 0x10),*(FObjectKey *)(pFVar27 + 8),
                              &local_a0,(FNetConditionGroupManager *)pUVar33), !bVar13))
      goto LAB_147fce233;
      FlushDormancyForObject(this,local_1a0,local_190);
      pUVar12 = local_190;
      pUVar5 = (this->Driver).field0_0x0.DebugPtr;
      if (UE::Net::Connection::Private::bTrackFlushedDormantObjects != 0) {
        if (((pUVar5->GuidCache).Object == (FNetGUIDCache *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FNetGUIDCache::GetNetGUID((pUVar5->GuidCache).Object,(UObject *)local_158);
        if (local_158._0_8_ != 0) {
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar12);
          }
          local_100 = pUVar12;
          local_188.ObjectIndex = 0;
          local_188.ObjectSerialNumber = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar12);
          }
          FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_100);
          local_c0 = (undefined8 *)local_158;
          local_b8 = &local_188;
          TSet<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FNetworkGUID_const_&,TWeakObjectPtr<UObject,FWeakObjectPtr>_&&>_>
                    ((TSet<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      *)local_98,
                     (TPairInitializer<FNetworkGUID_const_&,TWeakObjectPtr<UObject,FWeakObjectPtr>_&&>
                      *)local_120,(bool *)&local_c0);
        }
      }
      pTVar28 = local_198;
      if (UE::Net::Connection::Private::bEnableFlushDormantSubObjects == 0) goto LAB_147fce233;
      pFVar21 = (local_1a0->ReplicatedComponentsInfo).AllocatorInstance.Data;
      pFVar4 = pFVar21 + (longlong)(local_1a0->ReplicatedComponentsInfo).ArrayNum * 0x28;
      if (pFVar21 == pFVar4) goto LAB_147fce233;
      do {
        if (*(UObject **)pFVar21 == local_190) {
          if ((pFVar21 != (FScriptContainerElement *)0x0) &&
             (pFVar21 + 0x18 != (FScriptContainerElement *)0x0)) {
            UE::Net::Connection::Private::FlushDormancyForSubObjects
                      (this,local_1a0,(FSubObjectRegistry *)(pFVar21 + 0x18),
                       (TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
                        *)local_98,&local_a0,(FNetConditionGroupManager *)pUVar33);
            pTVar28 = local_198;
          }
          goto LAB_147fce233;
        }
        pFVar21 = pFVar21 + 0x28;
      } while (pFVar21 != pFVar4);
      pFVar27 = pFVar27 + 0x28;
    }
  }
  if ((UE::Net::Connection::Private::bTrackFlushedDormantObjects != 0) &&
     (local_98._8_4_ != local_64)) {
    this_00 = UE::Net::Private::FDormantReplicatorHolder::FindOrAddFlushedObjectsForActor
                        (&this->DormantReplicatorSet,local_1a0);
    TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
    ::Append<FDefaultSetAllocator>
              (this_00,(TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
                        *)local_98);
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
LAB_147fce2a5:
  pAVar11 = local_1a0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a0 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1a0);
  }
  local_180.ObjectIndex = 0;
  local_180.ObjectSerialNumber = 0;
  local_f8 = pAVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar11 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar11);
  }
  FWeakObjectPtr::operator=(&local_180,(FObjectPtr)&local_f8);
  pTVar22 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                    *)&this->ActorChannels,(TWeakObjectPtr<AActor_const_,FWeakObjectPtr>)local_180);
  if ((pTVar22 != (TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *)0x0) &&
     (plVar7 = *(longlong **)&pTVar22->field_0x8, plVar7 != (longlong *)0x0)) {
    if (5 < (byte)LogNetDormancy._0_1_) {
      (**(code **)(*plVar7 + 0x2d0))(plVar7,local_b0);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetDormancy);
      if (local_b0[0] != (void *)0x0) {
        FMemory::Free(local_b0[0]);
      }
    }
    *(uint *)(plVar7 + 6) = *(uint *)(plVar7 + 6) & 0xfffffffb;
    *(uint *)(plVar7 + 6) = *(uint *)(plVar7 + 6) & 0xfffffe7f;
  }
  return;
}

// FlushDormancyForObject @ 147fce3c0

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
UNetConnection::FlushDormancyForObject(UNetConnection *this,AActor *param_1,UObject *param_2)

{
  int *piVar1;
  int iVar2;
  UNetDriver *pUVar3;
  UPackageMap *pUVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_void___cdecl_UNetConnection::FlushDormancyForObject(AActor_*,UObject_*)_::_2_::FStat_STAT_NetConnection_FlushDormancyForObject>
  FVar13;
  ULevel *pUVar14;
  FNetworkObjectList *this_00;
  UClass *pUVar15;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FString *pFVar16;
  FName FVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  uint local_res20;
  uint uStackX_24;
  FName local_c8;
  FColor_u_0 local_c0 [2];
  FName local_b8;
  TSharedPtr<FObjectReplicator,1> local_a8;
  LARGE_INTEGER local_98;
  FStatMessage local_90;
  FName local_80;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_NetConnection_FlushDormancyForObject ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UNetConnection::FlushDormancyForObject(AActor_*,UObject_*)_::_2_::FStat_STAT_NetConnection_FlushDormancyForObject>
         )0x0) {
      pFVar12 = ::FName::FName(&local_80,"STAT_NetConnection_FlushDormancyForObject");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetConnection_FlushDormancyForObject,
                 *pFVar12,L"STAT_NetConnection_FlushDormancyForObject","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_NetConnection_FlushDormancyForObject;
  if (StatPtr_STAT_NetConnection_FlushDormancyForObject ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UNetConnection::FlushDormancyForObject(AActor_*,UObject_*)_::_2_::FStat_STAT_NetConnection_FlushDormancyForObject>
       )0x0) {
    pFVar12 = ::FName::FName(&local_78,"STAT_NetConnection_FlushDormancyForObject");
    FVar13 = (FThreadSafeStaticStat<_public:_void___cdecl_UNetConnection::FlushDormancyForObject(AActor_*,UObject_*)_::_2_::FStat_STAT_NetConnection_FlushDormancyForObject>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_NetConnection_FlushDormancyForObject,*pFVar12,
                          L"STAT_NetConnection_FlushDormancyForObject","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c0[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8 = FVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                   ,0x15e1);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar17.ComparisonIndex.Value.Value;
      uStackX_24 = FVar17.Number;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar7 = true;
      goto LAB_147fce52c;
    }
  }
  bVar7 = false;
  FVar17 = local_b8;
LAB_147fce52c:
  bVar11 = false;
  if (((GbNetReuseReplicatorsForDormantObjects != false) &&
      (pUVar3 = (this->Driver).field0_0x0.DebugPtr, pUVar3 != (UNetDriver *)0x0)) &&
     (cVar9 = (**(code **)(pUVar3->_padding_ + 0x3f8))(), bVar11 = false, cVar9 != '\0')) {
    bVar11 = true;
  }
  pwVar19 = L"";
  if (GNetDormancyValidate == 1) {
    UE::Net::Private::FDormantReplicatorHolder::FindReplicator
              (&this->DormantReplicatorSet,&local_a8,param_1,param_2);
    if (local_a8.Object != (FObjectReplicator *)0x0) {
      if ((local_a8.Object == (FObjectReplicator *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FObjectReplicator::ValidateAgainstState(local_a8.Object,param_2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  if ((!bVar11) ||
     (bVar11 = UE::Net::Private::FDormantReplicatorHolder::DoesReplicatorExist
                         (&this->DormantReplicatorSet,param_1,param_2), !bVar11)) {
    local_res20 = local_res20 & 0xffffff00;
    local_c8 = (FName)UE::Net::Private::FDormantReplicatorHolder::CreateAndStoreReplicator
                                (&this->DormantReplicatorSet,param_1,param_2,(bool *)&local_res20);
    bVar11 = false;
    if (UE::Net::Connection::Private::bFlushDormancyUseDefaultStateForUnloadedLevels != 0) {
      pcVar5 = *(code **)(this->_padding_ + 0x3a0);
      pUVar14 = AActor::GetLevel(param_1);
      cVar9 = (*pcVar5)(this,pUVar14);
      bVar11 = cVar9 == '\0';
    }
    FObjectReplicator::InitWithObject(*(FObjectReplicator **)local_c8,param_2,this,bVar11);
    pUVar3 = (this->Driver).field0_0x0.DebugPtr;
    if (((pUVar3 != (UNetDriver *)0x0) && (param_1 != (AActor *)param_2)) &&
       (local_res20._0_1_ == false)) {
      this_00 = UNetDriver::GetNetworkObjectList(pUVar3);
      FNetworkObjectList::AddSubObjectChannelReference(this_00,param_1,param_2,(UObject *)this);
    }
    if ((this->PackageMap).field0_0x0.DebugPtr == (UPackageMap *)0x0) {
      pFVar16 = GetTypeName<UPackageMapClient>(&local_50);
      if ((pFVar16->Data).ArrayNum != 0) {
        pwVar19 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar19);
    }
    pUVar15 = Z_Construct_UClass_UPackageMapClient_NoRegister();
    bVar11 = FObjectPtr::IsA((FObjectPtr *)&this->PackageMap,pUVar15);
    if ((!bVar11) || (pUVar4 = (this->PackageMap).field0_0x0.DebugPtr, pUVar4 == (UPackageMap *)0x0)
       ) {
      pFVar16 = GetTypeName<UPackageMapClient>(&local_70);
      if ((pFVar16->Data).ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
      pFVar16 = GetFullNameForCastLogError<UPackageMap>
                          (&local_60,(this->PackageMap).field0_0x0.DebugPtr);
      if ((pFVar16->Data).ArrayNum != 0) {
        pwVar19 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar19,pwVar18);
    }
    iVar2 = *(int *)&pUVar4[3].TrackedMappedDynamicNetGuids.Elements.field_0xc;
    *(undefined4 *)&pUVar4[3].TrackedMappedDynamicNetGuids.Elements.field_0x8 = 0;
    if (iVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&pUVar4[3].TrackedMappedDynamicNetGuids,0,
                 (int *)&pUVar4[3].TrackedMappedDynamicNetGuids.Elements.field_0xc);
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_90.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_90.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_98);
      local_90.StatData.Pad[4] = '\0';
      local_90.StatData.Pad[5] = '\0';
      local_90.StatData.Pad[6] = '\0';
      local_90.StatData.Pad[7] = '\0';
      local_90.StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_90.StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_90.StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_90.StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_90);
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
  return;
}

// FlushNet @ 147fcec30

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
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall UNetConnection::FlushNet(UNetConnection *this,bool param_1)

{
  FBitWriter *this_00;
  ulong64 *puVar1;
  FWrittenChannelsRecord *this_01;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  PacketHandler *this_02;
  code *pcVar5;
  double dVar6;
  long64 lVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  uchar *puVar13;
  uchar uVar14;
  ulong64 uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  UNetDriver *pUVar19;
  longlong lVar20;
  double dVar21;
  undefined1 auStack_118 [32];
  FOutPacketTraits local_e8;
  LARGE_INTEGER local_d0;
  undefined1 local_c8;
  uint7 uStack_c7;
  undefined8 uStack_c0;
  byte local_b8;
  undefined7 uStack_b7;
  longlong lStack_b0;
  void *local_a8 [2];
  void *local_98 [2];
  FNetResult local_88;
  FSeqSample local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (!__CsvProfilerStat2340) {
    FCsvProfilerTrace::OutputInlineStatExclusive("FlushNet");
    __CsvProfilerStat2340 = true;
  }
  FCsvProfiler::BeginExclusiveStat("FlushNet","CSV_FlushNet");
  if (((this->Driver).field0_0x0.DebugPtr == (UNetDriver *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Driver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0x926,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (**(code **)(this->_padding_ + 0x2f0))(this);
  lVar16 = (this->SendBuffer).Num;
  this_00 = &this->SendBuffer;
  local_c8 = 0;
  uStack_c0 = 0;
  this->TimeSensitive = false;
  *(ulonglong *)&this->LastEnd = (ulonglong)uStack_c7 << 8;
  (this->LastEnd).Num = 0;
  if (((lVar16 == 0) && (this->HasDirtyAcks == 0)) &&
     ((pUVar19 = (this->Driver).field0_0x0.DebugPtr,
      pUVar19->ElapsedTime - this->LastSendTime <= (double)pUVar19->KeepAliveTime ||
      ((this->bInternalAck != 0 || (this->State == USOCK_Closed)))))) goto LAB_147fcf397;
  bVar9 = HasReceivedClientPacket(this);
  pTVar8 = CVarRandomizeSequence.Ref;
  lVar16 = 4;
  if (!bVar9) {
    bVar9 = IsInParallelGameThread();
    if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
      lVar20 = 0;
    }
    else {
      lVar20 = 4;
    }
    if (*(int *)((longlong)pTVar8->ShadowedValue + lVar20) != 0) {
      if (4 < (byte)LogNet._0_1_) {
        (**(code **)(this->_padding_ + 0x2e0))(this,local_a8);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_a8[0] != (void *)0x0) {
          FMemory::Free(local_a8[0]);
        }
      }
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                (&local_88,PrematureSend);
      Close(this,&local_88);
      if (local_88.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_88.NextResult + -0x10))((longlong)local_88.NextResult + -0x10);
      }
      if (local_88.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.ErrorContext.Data.AllocatorInstance.Data);
      }
      (**(code **)(this->_padding_ + 0x2f8))(this);
      goto LAB_147fcf397;
    }
  }
  lVar20 = 1;
  local_e8.bAllowCompression = true;
  local_e8.bIsKeepAlive = false;
  local_e8.bIsCompressed = false;
  if ((this->SendBuffer).Num == 0) {
    PrepareWriteBitsToSendBuffer(this,0,0);
    lStack_b0 = (this->SendBuffer).Num;
    bVar10 = *(byte *)((longlong)&(this->SendBuffer)._padding_ + 1) >> 1;
    local_b8 = bVar10 & 1;
    iVar17 = 0x135;
    if (0 < lStack_b0) {
      iVar17 = 1;
    }
    iVar17 = (int)(this->SendBuffer).Max - iVar17;
    iVar18 = (int)lStack_b0;
    *(ulonglong *)&this->LastStart = CONCAT71(uStack_b7,bVar10) & 0xffffffffffffff01;
    (this->LastStart).Num = lStack_b0;
    if ((iVar17 - iVar18 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumberOfFreeBits >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                           ,0x1112,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar8 = CVarForceNetFlush.Ref;
    if (iVar17 == iVar18) {
LAB_147fceee1:
      (**(code **)(this->_padding_ + 0x308))(this,0);
    }
    else {
      bVar9 = IsInParallelGameThread();
      if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
        lVar16 = 0;
      }
      if (*(int *)((longlong)pTVar8->ShadowedValue + lVar16) != 0) goto LAB_147fceee1;
    }
    puVar1 = &(this->AnalyticsVars).OutKeepAliveCount;
    *puVar1 = *puVar1 + 1;
    local_e8.bIsKeepAlive = true;
  }
  this_02 = (this->Handler).Ptr;
  if (this_02 != (PacketHandler *)0x0) {
    PacketHandler::OutgoingHigh(this_02,this_00);
  }
  QueryPerformanceCounter(&local_d0);
  dVar6 = (double)local_d0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  FBitWriter::WriteBit(this_00,'\x01');
  if (this->bInternalAck == 0) {
    WritePacketHeader(this,this_00);
    WriteFinalPacketInfo(this,this_00,dVar6);
  }
  (**(code **)(this->_padding_ + 0x2f0))(this);
  local_e8.NumAckBits = this->NumAckBits;
  local_e8.NumBunchBits = this->NumBunchBits;
  if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
     (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
    if (__CsvProfilerStat2408 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
      __CsvProfilerStat2408 = true;
    }
    FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
    FNetworkProfiler::FlushOutgoingBunches(&GNetworkProfiler,this);
    FCsvProfiler::EndExclusiveStat("NetworkProfiler");
  }
  if (this->OutTraceCollector != (FNetTraceCollector *)0x0) {
    FNetTrace::TraceCollectedEvents
              (this->OutTraceCollector,this->NetTraceId,(this->ConnectionHandle).ParentConnectionId,
               Outgoing);
    FNetTrace::DestroyTraceCollector(this->OutTraceCollector);
    this->OutTraceCollector = (FNetTraceCollector *)0x0;
  }
  if (GNetTraceRuntimeVerbosity != 0) {
    FNetTrace::TracePacket
              (this->NetTraceId,(this->ConnectionHandle).ParentConnectionId,this->OutPacketId,
               (uint)(this->SendBuffer).Num,Outgoing);
  }
  if ((((this->State == USOCK_Closed) || (GIsGarbageCollecting != false)) || (param_1)) ||
     ((this->bInternalAck != 0 ||
      (bVar9 = CheckOutgoingPacketEmulation(this,dVar6,&local_e8), !bVar9)))) {
    cVar11 = (**(code **)(((this->Driver).field0_0x0.DebugPtr)->_padding_ + 0x420))();
    if (cVar11 != '\0') {
      lVar7 = (this->SendBuffer).Num;
      pcVar5 = *(code **)(this->_padding_ + 0x2e8);
      puVar13 = FBitWriter::GetData(this_00);
      (*pcVar5)(this,puVar13,(int)lVar7,&local_e8);
    }
    if ((((this->PacketSimulationSettings).PktDup != 0) &&
        (uVar12 = rand(),
        (float)(uVar12 & 0x7fff) * __real_3b480190 < (float)(this->PacketSimulationSettings).PktDup)
        ) && (cVar11 = (**(code **)(((this->Driver).field0_0x0.DebugPtr)->_padding_ + 0x420))(),
             cVar11 != '\0')) {
      lVar7 = (this->SendBuffer).Num;
      pcVar5 = *(code **)(this->_padding_ + 0x2e8);
      puVar13 = FBitWriter::GetData(this_00);
      (*pcVar5)(this,puVar13,(int)lVar7,&local_e8);
    }
  }
  uVar12 = this->OutPacketId & 0xff;
  this->OutLagPacketId[uVar12] = this->OutPacketId;
  this->OutLagTime[uVar12] = dVar6;
  iVar17 = (int)(this->OutBytesPerSecond + (this->OutBytesPerSecond >> 0x1f & 0x3ffU)) >> 10;
  uVar14 = 0xff;
  if (iVar17 < 0xff) {
    uVar14 = (uchar)iVar17;
  }
  this->OutBytesPerSecondHistory[uVar12] = uVar14;
  if (this->bInternalAck == 0) {
    FNetPacketNotify::CommitAndIncrementOutSeq(&this->PacketNotify);
  }
  uVar12 = this->OutPacketId;
  this_01 = &this->ChannelRecord;
  if (uVar12 != (this->ChannelRecord).LastPacketId) {
    uVar15 = (ulonglong)((this_01->ChannelRecord).Head - (this->ChannelRecord).ChannelRecord.Tail) +
             1;
    if ((ulonglong)(longlong)(this->ChannelRecord).ChannelRecord.Storage.ArrayNum < uVar15) {
      TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>
      ::SetCapacity(&this_01->ChannelRecord,uVar15);
    }
    uVar3 = (this_01->ChannelRecord).Head;
    uVar4 = (this->ChannelRecord).ChannelRecord.IndexMask;
    (this_01->ChannelRecord).Head = uVar3 + 1;
    *(uint *)((this->ChannelRecord).ChannelRecord.Storage.AllocatorInstance.Data +
             (ulonglong)(uVar4 & uVar3) * 4) = uVar12 | 0x80000000;
    (this->ChannelRecord).LastPacketId = uVar12;
  }
  pUVar19 = (this->Driver).field0_0x0.DebugPtr;
  this->OutPackets = this->OutPackets + 1;
  this->OutPacketsThisFrame = this->OutPacketsThisFrame + 1;
  this->OutTotalPackets = this->OutTotalPackets + 1;
  puVar2 = &pUVar19->OutPackets;
  *puVar2 = *puVar2 + 1;
  puVar2 = &((this->Driver).field0_0x0.DebugPtr)->OutTotalPackets;
  *puVar2 = *puVar2 + 1;
  if (this->bFlushedNetThisFrame == false) {
    dVar21 = (((this->Driver).field0_0x0.DebugPtr)->ElapsedTime - this->LastSendTime) *
             __real_408f400000000000;
    FHistogram::AddMeasurement(&this->NetConnectionHistogram,dVar21,dVar21);
  }
  pUVar19 = (this->Driver).field0_0x0.DebugPtr;
  iVar17 = (int)((this->SendBuffer).Num + 7 >> 3) + this->PacketOverhead;
  bVar9 = (this->NetworkCongestionControl).bIsSet;
  this->LastSendTime = pUVar19->ElapsedTime;
  if (bVar9 != false) {
    local_58.Seq = this->OutPacketId;
    local_58.Timestamp = dVar6;
    local_58.PacketSize = iVar17;
    FNetworkCongestionControl::OnSend(&(this->NetworkCongestionControl).TypedValue,&local_58);
    pUVar19 = (this->Driver).field0_0x0.DebugPtr;
  }
  this->OutPacketId = this->OutPacketId + 1;
  if (this->bReplay == 0) {
    iVar18 = 0x7fffffff;
    lVar16 = (longlong)(iVar17 * 8) + (longlong)this->QueuedBits;
    if (lVar16 < 0x80000000) {
      if (lVar16 < -0x80000000) {
        iVar18 = -0x80000000;
        goto LAB_147fcf2bd;
      }
      iVar18 = (int)lVar16;
    }
    else {
LAB_147fcf2bd:
      if (this->bLoggedFlushNetQueuedBitsOverflow == false) {
        if (4 < (byte)LogNet._0_1_) {
          (**(code **)(this->_padding_ + 0x2e0))(this,local_98);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          if (local_98[0] != (void *)0x0) {
            FMemory::Free(local_98[0]);
          }
        }
        pUVar19 = (this->Driver).field0_0x0.DebugPtr;
        this->bLoggedFlushNetQueuedBitsOverflow = true;
      }
    }
    this->QueuedBits = iVar18;
  }
  this->OutBytes = this->OutBytes + iVar17;
  this->OutTotalBytes = this->OutTotalBytes + iVar17;
  pUVar19->OutBytes = pUVar19->OutBytes + iVar17;
  puVar2 = &((this->Driver).field0_0x0.DebugPtr)->OutTotalBytes;
  *puVar2 = *puVar2 + iVar17;
  GNetOutBytes = GNetOutBytes + iVar17;
  if ((this->NumAckBits < 1) || (this->NumBunchBits != 0)) {
    lVar20 = 0;
  }
  (this->AnalyticsVars).OutAckOnlyCount = (this->AnalyticsVars).OutAckOnlyCount + lVar20;
  this->bFlushedNetThisFrame = true;
  (**(code **)(this->_padding_ + 0x2f8))(this);
LAB_147fcf397:
  FCsvProfiler::EndExclusiveStat("FlushNet");
  return;
}

// FlushPacketOrderCache @ 147fcf3d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::FlushPacketOrderCache(UNetConnection *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  
  if (((this->PacketOrderCache).bIsSet != false) && (0 < this->PacketOrderCacheCount)) {
    uVar10 = this->PacketOrderCacheStartIdx - 1U & (this->PacketOrderCache).TypedValue.IndexMask;
    uVar9 = 0;
    if ((int)uVar10 < (this->PacketOrderCache).TypedValue.Elements.ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar3 = *(longlong *)
             ((this->PacketOrderCache).TypedValue.Elements.AllocatorInstance.Data +
             (longlong)(int)uVar10 * 8);
    this->bFlushingPacketOrderCache = true;
    if ((param_1) || (lVar3 != 0)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    iVar2 = this->PacketOrderCacheCount;
    while (0 < iVar2) {
      uVar10 = this->PacketOrderCacheStartIdx & (this->PacketOrderCache).TypedValue.IndexMask;
      uVar9 = 0;
      if ((int)uVar10 < (this->PacketOrderCache).TypedValue.Elements.ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->PacketOrderCache).TypedValue.Elements.AllocatorInstance.Data;
      pFVar1 = pFVar4 + (longlong)(int)uVar10 * 8;
      if (*(longlong *)(pFVar4 + (longlong)(int)uVar10 * 8) == 0) {
        if (!bVar7) break;
      }
      else {
        if (6 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        bVar8 = this->bIsReinjectingDelayedPackets;
        this->bIsReinjectingDelayedPackets = true;
        (**(code **)(this->_padding_ + 0x3b8))(this,*(longlong *)pFVar1,1);
        puVar5 = *(undefined8 **)pFVar1;
        if (puVar5 != (undefined8 *)0x0) {
          *(longlong *)pFVar1 = 0;
          (**(code **)*puVar5)(puVar5,1);
        }
        this->PacketOrderCacheCount = this->PacketOrderCacheCount + -1;
        this->bIsReinjectingDelayedPackets = bVar8;
      }
      if (((this->PacketOrderCache).bIsSet == false) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this->PacketOrderCacheStartIdx =
           this->PacketOrderCacheStartIdx + 1U & (this->PacketOrderCache).TypedValue.IndexMask;
      iVar2 = this->PacketOrderCacheCount;
    }
    this->bFlushingPacketOrderCache = false;
  }
  return;
}

// ForcePropertyCompare @ 147fcf600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::ForcePropertyCompare(UNetConnection *this,AActor *param_1)

{
  uint *puVar1;
  TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *pTVar2;
  FWeakObjectPtr local_res8;
  AActor *local_res10;
  
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
  pTVar2 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                   *)&this->ActorChannels,(TWeakObjectPtr<AActor_const_,FWeakObjectPtr>)local_res8);
  if ((pTVar2 != (TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*> *)0x0) &&
     (*(longlong *)&pTVar2->field_0x8 != 0)) {
    puVar1 = (uint *)(*(longlong *)&pTVar2->field_0x8 + 0x90);
    *puVar1 = *puVar1 | 2;
  }
  return;
}

// GetActorGUIDFromOpenBunch @ 147fd0c90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetworkGUID __thiscall
UNetConnection::GetActorGUIDFromOpenBunch(UNetConnection *this,FInBunch *param_1)

{
  longlong *plVar1;
  int iVar2;
  FArchive *in_R8;
  ushort local_res10 [4];
  undefined8 local_res18;
  
  iVar2 = 0;
  if ((in_R8[1].field_0x59 & 1) != 0) {
    plVar1 = *(longlong **)&in_R8->field_0x8;
    local_res10[0] = 0;
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((in_R8->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)in_R8 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(in_R8,local_res10);
      }
    }
    else {
      local_res10[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    if (local_res10[0] != 0) {
      do {
        local_res18 = 0;
        (**(code **)(*(longlong *)in_R8 + 0x1a8))();
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)local_res10[0]);
    }
  }
  param_1->_padding_ = 0;
  (**(code **)(*(longlong *)in_R8 + 0x1a8))();
  return (FNetworkGUID)(FNetworkGUID_u_0)param_1;
}

// GetChildConnectionWithNetPlayerIndex @ 147fd1260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChildConnection * __thiscall
UNetConnection::GetChildConnectionWithNetPlayerIndex(UNetConnection *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UChildConnection *pUVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  
  if (*(int *)&(this->ChildrenLookup).field_0x8 != *(int *)&(this->ChildrenLookup).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ChildrenLookup).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ChildrenLookup).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->ChildrenLookup).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->ChildrenLookup + (longlong)iVar4 * 0x18;
        if (*(int *)(*(longlong *)&this->ChildrenLookup + (longlong)iVar4 * 0x18) == param_1) {
          plVar6 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar6 = (longlong *)0x0;
          }
          if (plVar6 == (longlong *)0x0) {
            return (UChildConnection *)0x0;
          }
          pUVar5 = (UChildConnection *)*plVar6;
          lVar1 = *(longlong *)&pUVar5->field_0x30;
          if (((lVar1 != 0) && ((uint)*(byte *)(lVar1 + 0x4fc) != param_1)) &&
             (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<5435733364554339393>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                                 ,0x1441,
                                 "!ChildConnection->PlayerController || (ChildConnection->PlayerController && ChildConnection->PlayerController->NetPlayerIndex == NetPlayerIndex)"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pUVar5 = (UChildConnection *)(*pcVar2)();
            return pUVar5;
          }
          return pUVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (UChildConnection *)0x0;
}

// GetClientHandshakeId @ 147fd1360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall UNetConnection::GetClientHandshakeId(UNetConnection *this)

{
  return this->ClientHandshakeId;
}

// GetConnectionState @ 147fd16a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EConnectionState __thiscall UNetConnection::GetConnectionState(UNetConnection *this)

{
  return this->State;
}

// GetConnectionViewTarget @ 147fd16b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UNetConnection::GetConnectionViewTarget(UNetConnection *this)

{
  AActor *this_00;
  UWorld *pUVar1;
  
  if ((((longlong *)this->_padding_ != (longlong *)0x0) &&
      (this_00 = (AActor *)(**(code **)(*(longlong *)this->_padding_ + 0x7e0))(),
      this_00 != (AActor *)0x0)) && (pUVar1 = AActor::GetWorld(this_00), pUVar1 != (UWorld *)0x0)) {
    return this_00;
  }
  return (this->OwningActor).field0_0x0.DebugPtr;
}

// GetDormantFlushedObjectsForActor @ 147fd1dd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
* __thiscall UNetConnection::GetDormantFlushedObjectsForActor(UNetConnection *this,AActor *param_1)

{
  TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
  *pTVar1;
  
  pTVar1 = UE::Net::Private::FDormantReplicatorHolder::FindFlushedObjectsForActor
                     (&this->DormantReplicatorSet,param_1);
  return pTVar1;
}

// GetFreeChannelIndex @ 147fd28b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall UNetConnection::GetFreeChannelIndex(UNetConnection *this,FName *param_1)

{
  ForElementType<FSetElementId> FVar1;
  longlong lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FChannelDefinition *pFVar10;
  ForElementType<FSetElementId> FVar11;
  undefined1 *puVar12;
  uint uVar13;
  longlong lVar14;
  
  pFVar10 = TMapBase<FName,FChannelDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelDefinition,0>_>
            ::FindChecked((TMapBase<FName,FChannelDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelDefinition,0>_>
                           *)&((this->Driver).field0_0x0.DebugPtr)->ChannelDefinitionMap,*param_1);
  uVar13 = 1;
  if (pFVar10->StaticChannelIndex != -1) {
    uVar13 = pFVar10->StaticChannelIndex;
  }
  if ((int)uVar13 < (this->Channels).ArrayNum) {
    lVar14 = (longlong)(int)uVar13 * 8;
    do {
      if ((this->bIgnoreReservedChannels != false) &&
         (*(int *)&(this->ReservedChannels).Elements.field_0x8 !=
          *(int *)&(this->ReservedChannels).Elements.field_0x34)) {
        FVar1 = (this->ReservedChannels).Hash.SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&(this->ReservedChannels).Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar1;
        }
        iVar9 = *(int *)((longlong)FVar11 +
                        (ulonglong)((this->ReservedChannels).HashSize - 1U & uVar13) * 4);
        if (iVar9 != -1) {
          lVar2 = *(longlong *)&(this->ReservedChannels).Elements;
          do {
            if (*(uint *)(lVar2 + (longlong)iVar9 * 0xc) == uVar13) {
              bVar5 = true;
              goto LAB_147fd296c;
            }
            iVar9 = *(int *)(lVar2 + 4 + (longlong)iVar9 * 0xc);
          } while (iVar9 != -1);
        }
      }
      bVar5 = false;
LAB_147fd296c:
      if ((this->bAllowExistingChannelIndex != false) &&
         (*(int *)&(this->ChannelIndexMap).field_0x8 != *(int *)&(this->ChannelIndexMap).field_0x34)
         ) {
        puVar3 = *(undefined1 **)&(this->ChannelIndexMap).field_0x40;
        puVar12 = &(this->ChannelIndexMap).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar12 = puVar3;
        }
        iVar9 = *(int *)(puVar12 +
                        (ulonglong)(*(int *)&(this->ChannelIndexMap).field_0x48 - 1U & uVar13) * 4);
        if (iVar9 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this->ChannelIndexMap + (longlong)iVar9 * 0x10) == uVar13) {
              bVar6 = true;
              goto LAB_147fd29cb;
            }
            iVar9 = *(int *)(*(longlong *)&this->ChannelIndexMap + 8 + (longlong)iVar9 * 0x10);
          } while (iVar9 != -1);
        }
      }
      bVar6 = false;
LAB_147fd29cb:
      uVar8 = 0;
      if ((int)uVar13 < (this->Channels).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
      if (((*(longlong *)((this->Channels).AllocatorInstance.Data + lVar14) == 0) && (!bVar5)) &&
         (!bVar6)) break;
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 8;
    } while ((int)uVar13 < (this->Channels).ArrayNum);
  }
  if (uVar13 == (this->Channels).ArrayNum) {
    uVar13 = 0xffffffff;
  }
  return uVar13;
}

// GetFreeSendBufferBits @ 147fd2a90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

long64 __thiscall UNetConnection::GetFreeSendBufferBits(UNetConnection *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  long64 lVar4;
  int iVar5;
  
  lVar1 = (this->SendBuffer).Num;
  iVar5 = 0x135;
  if (0 < lVar1) {
    iVar5 = 1;
  }
  iVar5 = ((int)(this->SendBuffer).Max - iVar5) - (int)lVar1;
  if (iVar5 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumberOfFreeBits >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                       ,0x1112,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      lVar4 = (*pcVar2)();
      return lVar4;
    }
  }
  return (longlong)iVar5;
}

// GetLastNotifiedPacketId @ 147fd31b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall UNetConnection::GetLastNotifiedPacketId(UNetConnection *this)

{
  return this->LastNotifiedPacketId;
}

// GetLocalPlayerFunction @ 147fd3550

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TFunction<ULocalPlayer_*___cdecl(UNetConnection_*,APlayerController_*)> * __thiscall
UNetConnection::GetLocalPlayerFunction
          (UNetConnection *this,
          TFunction<ULocalPlayer_*___cdecl(UNetConnection_*,APlayerController_*)>
          *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)&this->PlayerConnectionFunction;
  *(longlong *)__return_storage_ptr__ = lVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(this->PlayerConnectionFunction).field_0x28;
    puVar3 = (undefined8 *)&(this->PlayerConnectionFunction).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)*puVar3)();
  }
  return __return_storage_ptr__;
}

// GetNetPlayerIndex @ 147fd3bc0

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
UNetConnection::GetNetPlayerIndex(UNetConnection *this,UChildConnection *param_1,int *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UChildConnection *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res20 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if (param_2 != (int *)0x0) {
    iVar15 = 0;
    puVar1 = &(this->ChildrenLookup).field_0x10;
    iVar3 = *(int *)&(this->ChildrenLookup).field_0x28;
    uVar8 = 1;
    iVar13 = 0;
    iVar9 = 0;
    if (iVar3 != 0) {
      puVar16 = *(uint **)&(this->ChildrenLookup).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar12 = *puVar16;
      while (uVar12 == 0) {
        lVar10 = (longlong)iVar15;
        iVar13 = iVar13 + 0x20;
        iVar15 = iVar15 + 1;
        iVar9 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_147fd3c7d;
        uVar12 = puVar16[lVar10 + 1];
      }
      uVar8 = -uVar12 & uVar12;
      uVar2 = (ulonglong)uVar8 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = (int)lVar10 + -1 + iVar13;
      if (iVar3 < iVar9) {
        iVar9 = iVar3;
      }
    }
LAB_147fd3c7d:
    uVar12 = *(uint *)&(this->ChildrenLookup).field_0x28;
    uVar11 = uVar12 & 0xffffffe0;
    TStack_68._padding_ = CONCAT44(uVar8,iVar15);
    TStack_68.CurrentBitIndex = iVar9;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar12 >> 5;
    TStack_68._28_4_ = iVar9;
    TStack_68.BaseBitIndex = iVar13;
    uStack_48 = CONCAT44(uStack_74,
                         *(int *)&(this->ChildrenLookup).field_0x8 -
                         *(int *)&(this->ChildrenLookup).field_0x34);
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar8 = *(uint *)&(this->ChildrenLookup).field_0x28;
    if (uVar12 != uVar8) {
      puVar14 = *(undefined1 **)&(this->ChildrenLookup).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar15 * 4);
      while (uVar12 == 0) {
        lVar10 = (longlong)iVar15;
        uVar11 = uVar11 + 0x20;
        iVar15 = iVar15 + 1;
        uVar12 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_147fd3d90;
        uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar12 = (int)lVar10 + -1 + uVar11;
      if ((int)uVar8 < (int)uVar12) {
        uVar12 = uVar8;
      }
    }
LAB_147fd3d90:
    while( true ) {
      if (*(int *)&(this->ChildrenLookup).field_0x8 - *(int *)&(this->ChildrenLookup).field_0x34 !=
          (int)uStack_48) {
        `TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UChildConnection>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if ((TStack_68.CurrentBitIndex == uVar12) &&
         (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      pUVar4 = *(UChildConnection **)
                (*(longlong *)&this->ChildrenLookup + 8 + (longlong)TStack_68.CurrentBitIndex * 0x18
                );
      if (pUVar4 == (UChildConnection *)0x0) {
        bVar6 = param_1 == (UChildConnection *)0x0;
      }
      else {
        bVar6 = pUVar4 == param_1;
      }
      if (bVar6) {
        *param_2 = *(int *)(*(longlong *)&this->ChildrenLookup +
                           (longlong)TStack_68.CurrentBitIndex * 0x18);
        return true;
      }
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    }
  }
  return false;
}

// GetNetworkCustomVersion @ 147fd3e30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall UNetConnection::GetNetworkCustomVersion(UNetConnection *this,FGuid *param_1)

{
  FCustomVersion *pFVar1;
  FGuid local_18;
  
  local_18.A = param_1->A;
  local_18.B = param_1->B;
  local_18.C = param_1->C;
  local_18.D = param_1->D;
  pFVar1 = FCustomVersionContainer::GetVersion(&this->NetworkCustomVersions,&local_18);
  if (pFVar1 != (FCustomVersion *)0x0) {
    return pFVar1->Version;
  }
  return 0;
}

// GetPacketAnalytics @ 147fd5000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetConnectionPacketAnalytics * __thiscall UNetConnection::GetPacketAnalytics(UNetConnection *this)

{
  return &this->PacketAnalytics;
}

// GetParentConnectionId @ 147fd5ea0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall UNetConnection::GetParentConnectionId(UNetConnection *this)

{
  return (this->ConnectionHandle).ParentConnectionId;
}

// GetPrivateStaticClass @ 147fd64f0

UClass * __cdecl UNetConnection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetConnection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetConnection",
               &Z_Registration_Info_UClass_UNetConnection.InnerSingleton,
               StaticRegisterNativesUNetConnection,0x1f80,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetConnection>,InternalVTableHelperCtorCaller<UNetConnection>,
               local_res8,UPlayer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetConnection.InnerSingleton;
}

// GetQueuedActorDelinquencyAnalytics @ 147fd6670

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetQueuedActorDelinquencyAnalytics * __thiscall
UNetConnection::GetQueuedActorDelinquencyAnalytics(UNetConnection *this)

{
  UPackageMapClient *this_00;
  bool bVar1;
  UClass *pUVar2;
  FNetQueuedActorDelinquencyAnalytics *pFVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FDelinquencyAnalytics::FDelinquencyAnalytics(&::Empty.DelinquentQueuedActors,0);
      ::Empty.MaxConcurrentQueuedActors = 0;
      atexit(`UNetConnection::GetQueuedActorDelinquencyAnalytics'::__l2::
             _dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((this->PackageMap).field0_0x0.DebugPtr != (UPackageMap *)0x0) {
    pUVar2 = Z_Construct_UClass_UPackageMapClient_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->PackageMap,pUVar2);
    if ((bVar1) &&
       (this_00 = (UPackageMapClient *)(this->PackageMap).field0_0x0.DebugPtr,
       this_00 != (UPackageMapClient *)0x0)) {
      pFVar3 = UPackageMapClient::GetQueuedActorDelinquencyAnalytics(this_00);
      return pFVar3;
    }
  }
  return &::Empty;
}

// GetSaturationAnalytics @ 147fd6ac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetConnectionSaturationAnalytics * __thiscall
UNetConnection::GetSaturationAnalytics(UNetConnection *this)

{
  return &this->SaturationAnalytics;
}

// GetTimeoutValue @ 147fd98d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UNetConnection::GetTimeoutValue(UNetConnection *this)

{
  UNetDriver *pUVar1;
  AActor *pAVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  wchar_t *pwVar6;
  float fVar7;
  float fVar8;
  
  if (((this->Driver).field0_0x0.DebugPtr == (UNetDriver *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Driver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0x1208,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar7 = (float)(*pcVar3)();
    return fVar7;
  }
  pUVar1 = (this->Driver).field0_0x0.DebugPtr;
  if (!(bool)pUVar1->bNoTimeouts) {
    fVar7 = pUVar1->InitialConnectTimeout;
    fVar8 = fVar7;
    if ((((this->State != USOCK_Pending) && (fVar8 = __real_40000000, this->bPendingDestroy == 0))
        && (pAVar2 = (this->OwningActor).field0_0x0.DebugPtr, fVar8 = fVar7, pAVar2 != (AActor *)0x0
           )) && ((cVar5 = (**(code **)(pAVar2->_padding_ + 0x490))(), cVar5 != '\0' &&
                  (fVar8 = __real_40000000, this->bPendingDestroy == 0)))) {
      fVar8 = ((this->Driver).field0_0x0.DebugPtr)->ConnectionTimeout;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pwVar6 = FCommandLine::Get();
      LongTimeouts = FParse::Param(pwVar6,L"longtimeouts");
      _Init_thread_footer(&::_TSS0);
    }
    fVar7 = ((this->Driver).field0_0x0.DebugPtr)->TimeoutMultiplierForUnoptimizedBuilds;
    if ((0.0 < fVar7) && (LongTimeouts != false)) {
      fVar8 = fVar8 * fVar7;
    }
    return fVar8;
  }
  if (this->bPendingDestroy == 0) {
    return __real_7f7fffff;
  }
  return __real_40000000;
}

// GetVoiceChannel @ 147fdc0a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UVoiceChannel * __thiscall UNetConnection::GetVoiceChannel(UNetConnection *this)

{
  FObjectPtr_u_0 *this_00;
  UNetDriver *pUVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  FNameEntryId FVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  UVoiceChannel *pUVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FChannelDefinition *pFVar12;
  undefined4 extraout_var_01;
  UClass *pUVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStackX_24;
  FObjectPtr_u_0 FVar16;
  
  if ((this->Driver).field0_0x0.DebugPtr == (UNetDriver *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Driver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                       ,0x11f9,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pUVar11 = (UVoiceChannel *)(*pcVar4)();
      return pUVar11;
    }
  }
  pUVar1 = (this->Driver).field0_0x0.DebugPtr;
  FVar7 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar7.Value = *(uint *)CONCAT44(extraout_var,FVar7.Value);
  uVar8 = ::GetTypeHash(FVar7);
  if (*(int *)&(pUVar1->ChannelDefinitionMap).field_0x8 !=
      *(int *)&(pUVar1->ChannelDefinitionMap).field_0x34) {
    puVar17 = *(undefined1 **)&(pUVar1->ChannelDefinitionMap).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(pUVar1->ChannelDefinitionMap).field_0x38;
    }
    iVar9 = *(int *)(puVar17 +
                    (ulonglong)(*(int *)&(pUVar1->ChannelDefinitionMap).field_0x48 - 1U & uVar8) * 4
                    );
    if (iVar9 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&pUVar1->ChannelDefinitionMap + (longlong)iVar9 * 0x30) ==
            (ulonglong)FVar7.Value) {
          pUVar1 = (this->Driver).field0_0x0.DebugPtr;
          FVar7 = FNameEntryId::FromValidEName((EName)local_res10);
          uVar15 = 0;
          FVar16.Handle = (UObject *)0x0;
          uStackX_24 = 0;
          local_res20 = *(uint *)CONCAT44(extraout_var_00,FVar7.Value);
          FVar5.Number = 0;
          FVar5.ComparisonIndex.Value = local_res20;
          pFVar12 = TMapBase<FName,FChannelDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelDefinition,0>_>
                    ::FindChecked((TMapBase<FName,FChannelDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelDefinition,0>_>
                                   *)&pUVar1->ChannelDefinitionMap,FVar5);
          uVar8 = pFVar12->StaticChannelIndex;
          lVar14 = (longlong)(int)uVar8;
          if (((int)uVar8 < 0) || ((this->Channels).ArrayNum <= (int)uVar8)) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Channels.IsValidIndex(VoiceChannelIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                               ,0x1200,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pUVar11 = (UVoiceChannel *)(*pcVar4)();
              return pUVar11;
            }
          }
          uVar18 = ~uVar8 >> 0x1f;
          uVar10 = uVar15;
          if ((int)uVar8 < (this->Channels).ArrayNum) {
            uVar10 = uVar18;
          }
          if (uVar10 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pUVar11 = (UVoiceChannel *)(*pcVar4)();
              return pUVar11;
            }
          }
          if (*(longlong *)((this->Channels).AllocatorInstance.Data + lVar14 * 8) != 0) {
            uVar10 = uVar15;
            if ((int)uVar8 < (this->Channels).ArrayNum) {
              uVar10 = uVar18;
            }
            if (uVar10 == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                pUVar11 = (UVoiceChannel *)(*pcVar4)();
                return pUVar11;
              }
            }
            uVar2 = *(ulonglong *)
                     (*(longlong *)((this->Channels).AllocatorInstance.Data + lVar14 * 8) + 0x40);
            FVar7 = FNameEntryId::FromValidEName((EName)local_res18);
            if (uVar2 == *(uint *)CONCAT44(extraout_var_01,FVar7.Value)) {
              if ((int)uVar8 < (this->Channels).ArrayNum) {
                uVar15 = uVar18;
              }
              if (uVar15 == 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar4 = (code *)swi(3);
                  pUVar11 = (UVoiceChannel *)(*pcVar4)();
                  return pUVar11;
                }
              }
              pFVar3 = (this->Channels).AllocatorInstance.Data;
              this_00 = (FObjectPtr_u_0 *)(pFVar3 + lVar14 * 8);
              if (*(longlong *)(pFVar3 + lVar14 * 8) != 0) {
                pUVar13 = Z_Construct_UClass_UVoiceChannel_NoRegister();
                bVar6 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar13);
                if (bVar6) {
                  FVar16 = (FObjectPtr_u_0)this_00->Handle;
                }
              }
            }
          }
          return (UVoiceChannel *)FVar16.Handle;
        }
        iVar9 = *(int *)(*(longlong *)&pUVar1->ChannelDefinitionMap + 0x28 + (longlong)iVar9 * 0x30)
        ;
      } while (iVar9 != -1);
    }
  }
  return (UVoiceChannel *)0x0;
}

// GetWorld @ 147fdc340

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWorld * __thiscall UNetConnection::GetWorld(UNetConnection *this)

{
  UNetDriver *pUVar1;
  TObjectPtr<AActor>_u_0 this_00;
  bool bVar2;
  FUObjectItem *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UWorld *pUVar6;
  TObjectPtr<AActor>_u_0 aTStackX_8 [4];
  
  pUVar1 = (this->Driver).field0_0x0.DebugPtr;
  pUVar6 = (UWorld *)0x0;
  if (((pUVar1 == (UNetDriver *)0x0) ||
      (pUVar6 = (pUVar1->World).field0_0x0.DebugPtr, pUVar6 == (UWorld *)0x0)) &&
     (this_00 = (TObjectPtr<AActor>_u_0)(this->OwningActor).field0_0x0.DebugPtr,
     this_00.DebugPtr != (AActor *)0x0)) {
    if (((this_00.DebugPtr)->_padding_ & 0x10) == 0) {
      if (((this_00.DebugPtr)->_padding_ == 0) &&
         (aTStackX_8[0] = this_00,
         bVar2 = `AActor::GetWorld'::__l3::<lambda_1>::operator()(aTStackX_8), !bVar2)) {
        return (UWorld *)0x0;
      }
      if (((*(uint *)((this_00.DebugPtr)->_padding_ + 8) >> 0xf & 1) == 0) &&
         (pFVar3 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((this_00.DebugPtr)->_padding_ + 0xc)),
         ((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        pUVar4 = Z_Construct_UClass_ULevel_NoRegister();
        pUVar5 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00.DebugPtr,pUVar4);
        if (pUVar5 != (UObject *)0x0) {
          return *(UWorld **)&pUVar5[4].field_0x20;
        }
      }
    }
    return (UWorld *)0x0;
  }
  return pUVar6;
}

// GracefulClose @ 147fdc390

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::GracefulClose(UNetConnection *this,FNetResult *param_1)

{
  uint uVar1;
  UNetDriver *pUVar2;
  code *pcVar3;
  bool bVar4;
  TPimplPtr<UE::Net::FNetResult,1> TVar5;
  ulong64 local_res8;
  FString local_28;
  void *local_18 [2];
  
  this->bPendingDestroy = 1;
  if (((this->Channels).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(longlong *)(this->Channels).AllocatorInstance.Data != 0) && (this->State != USOCK_Closed))
  {
    if ((UE::Net::Connection::Private::bGracefulCloseEnabled != false) &&
       (this->State != USOCK_Closing)) {
      if (4 < (byte)LogNet._0_1_) {
        (**(code **)(this->_padding_ + 0x2e0))(this,local_18);
        UE::Net::FNetResult::DynamicToString(param_1,&local_28,WithChain);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_18[0] != (void *)0x0) {
          FMemory::Free(local_18[0]);
        }
      }
      TVar5 = MakePimpl<UE::Net::FNetResult,1,UE::Net::FNetResult>((FNetResult *)&local_res8);
      TPimplPtr<UE::Net::FNetResult,1>::operator=
                (&this->PendingGracefulCloseResult,(TPimplPtr<UE::Net::FNetResult,1> *)TVar5);
      if (local_res8 != 0) {
        (**(code **)(local_res8 - 0x10))(local_res8 - 0x10);
      }
      uVar1 = (this->ConnectionHandle).ParentConnectionId;
      this->State = USOCK_Closing;
      FNetTrace::TraceConnectionStateUpdated(this->NetTraceId,uVar1,'\x04');
      pUVar2 = (this->Driver).field0_0x0.DebugPtr;
      this->GracefulCloseTimeoutDeadline =
           (double)pUVar2->GracefulCloseConnectionTimeout + pUVar2->ElapsedTime;
      if (pUVar2->ReplicationSystem != (UReplicationSystem *)0x0) {
        UReplicationSystem::SetConnectionGracefullyClosing
                  (pUVar2->ReplicationSystem,(this->ConnectionHandle).ParentConnectionId);
      }
      TryClosePendingGracefulClose(this);
      return;
    }
    Close(this,param_1);
  }
  return;
}

// HandleClientPlayer @ 147fdce70

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

void __thiscall
UNetConnection::HandleClientPlayer
          (UNetConnection *this,APlayerController *param_1,UNetConnection *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  UReplicationSystem *this_00;
  code *pcVar4;
  APlayerController *this_01;
  APlayerController *pAVar5;
  UNetConnection *pUVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ULevel *pUVar12;
  ULevel *pUVar13;
  UWorld *pUVar14;
  FUpdateLevelVisibilityLevelInfo *pFVar15;
  FName FVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar20;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  undefined1 local_168 [8];
  TIndexedContainerIterator<TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_>_const_,ULocalPlayer_*_const,int>
  local_160;
  longlong local_150;
  TArray<FUpdateLevelVisibilityLevelInfo,TSizedDefaultAllocator<32>_> local_148;
  int local_138 [2];
  APlayerController *local_130;
  UNetConnection *local_128;
  TIndexedContainerIterator<TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_>_const_,ULocalPlayer_*_const,int>
  local_120;
  FString *local_110;
  undefined8 local_108;
  APlayerController *local_100;
  UNetConnection *local_f8;
  FName local_f0;
  FName local_e8;
  UNetConnection *local_e0;
  FString local_d8;
  FString local_c8;
  undefined1 local_b8 [16];
  code *local_a8;
  longlong local_98 [3];
  longlong *local_80;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_130 = param_1;
  local_128 = param_2;
  local_e0 = this;
  if (((((this->Driver).field0_0x0.DebugPtr)->World).field0_0x0.DebugPtr == (UWorld *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Driver->GetWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0x13d5,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_150 = 0;
  local_78 = *(longlong *)&this->PlayerConnectionFunction;
  local_50 = (longlong *)0x0;
  bVar7 = *(longlong *)&this->PlayerConnectionFunction == 0;
  if (!bVar7) {
    puVar3 = *(undefined8 **)&(this->PlayerConnectionFunction).field_0x28;
    puVar17 = (undefined8 *)&(this->PlayerConnectionFunction).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar17 = puVar3;
    }
    (**(code **)*puVar17)(puVar17,local_68);
    bVar7 = local_78 == 0;
  }
  if (local_78 != 0) {
    plVar18 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar18 = local_50;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if (bVar7) {
    UEngine::GetLocalPlayerIterator
              (GEngine,&local_120,(((this->Driver).field0_0x0.DebugPtr)->World).field0_0x0.DebugPtr)
    ;
    pTVar20 = local_120.Container;
    for (; lVar19 = (longlong)local_120.Index, lVar11 = local_150, -1 < local_120.Index;
        local_120.Index = local_120.Index + 1) {
      pTVar21 = pTVar20;
      if (pTVar20->ArrayNum <= local_120.Index) {
LAB_147fdd077:
        iVar2 = local_120.Index;
        lVar11 = local_150;
        if ((-1 < local_120.Index) && (local_120.Index < pTVar21->ArrayNum)) {
          if (local_120.Index < 0) {
            local_178 = (longlong)local_120.Index;
            local_170 = (longlong)pTVar21->ArrayNum;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          lVar11 = *(longlong *)((pTVar21->AllocatorInstance).Data + (longlong)iVar2 * 8);
          local_150 = lVar11;
          goto LAB_147fdd0d0;
        }
        break;
      }
      if ((local_120.Index < 0) &&
         (local_178 = lVar19, local_170 = (longlong)pTVar20->ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         pTVar21 = local_120.Container, bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(longlong *)((pTVar20->AllocatorInstance).Data + lVar19 * 8) != 0) goto LAB_147fdd077;
      pTVar20 = pTVar21;
    }
  }
  else {
    local_a8 = *(code **)&this->PlayerConnectionFunction;
    local_80 = (longlong *)0x0;
    if (local_a8 != (code *)0x0) {
      puVar3 = *(undefined8 **)&(this->PlayerConnectionFunction).field_0x28;
      puVar17 = (undefined8 *)&(this->PlayerConnectionFunction).field_0x10;
      if (puVar3 != (undefined8 *)0x0) {
        puVar17 = puVar3;
      }
      (**(code **)*puVar17)(puVar17,local_98);
    }
    local_100 = param_1;
    local_f8 = param_2;
    UE::Core::Private::Function::CheckCallable(local_a8);
    pcVar4 = local_a8;
    plVar18 = local_98;
    if (local_80 != (longlong *)0x0) {
      plVar18 = local_80;
    }
    uVar10 = (**(code **)(*plVar18 + 8))();
    lVar11 = (*pcVar4)(uVar10,&local_f8);
    local_150 = lVar11;
    if (local_a8 != (code *)0x0) {
      plVar18 = local_98;
      if (local_80 != (longlong *)0x0) {
        plVar18 = local_80;
      }
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
LAB_147fdd0d0:
    if (lVar11 != 0) goto LAB_147fdd0fe;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("LocalPlayer",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                     ,0x13e6,L"");
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_147fdd0fe:
  if (*(AActor **)(lVar11 + 0x30) != (AActor *)0x0) {
    pUVar12 = AActor::GetLevel(*(AActor **)(lVar11 + 0x30));
    pUVar13 = AActor::GetLevel((AActor *)param_1);
    if (pUVar12 == pUVar13) {
      if (((*(AActor **)(lVar11 + 0x30))->Role).Value == '\x03') {
        pUVar14 = AActor::GetWorld(*(AActor **)(lVar11 + 0x30));
        UWorld::DestroyActor(pUVar14,*(AActor **)(lVar11 + 0x30),false,true);
      }
      else {
        local_138[0] = -1;
        UE::Net::TNetControlMessageImpl<15,int>::Send(this,local_138);
      }
      *(undefined8 *)(*(longlong *)(lVar11 + 0x30) + 0x378) = 0;
      *(undefined8 *)(*(longlong *)(lVar11 + 0x30) + 0x560) = 0;
      *(undefined8 *)(lVar11 + 0x30) = 0;
    }
  }
  uVar9 = 0;
  *(int *)(lVar11 + 0x38) = (int)this->_padding_;
  AActor::SetRole((AActor *)param_1,ROLE_AutonomousProxy);
  pUVar6 = local_128;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_128 != (UNetConnection *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_128);
  }
  (param_1->NetConnection).field0_0x0.DebugPtr = pUVar6;
  (**(code **)(param_1->_padding_ + 0xdf0))(param_1,lVar11);
  if (5 < (byte)LogNet._0_1_) {
    local_f0 = *(FName *)(lVar11 + 0x18);
    ::FName::ToString(&local_f0,&local_c8);
    local_e8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_e8,&local_d8);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  uVar8 = (this->ConnectionHandle).ParentConnectionId;
  this->LastReceiveTime = ((this->Driver).field0_0x0.DebugPtr)->ElapsedTime;
  this->State = USOCK_Open;
  FNetTrace::TraceConnectionStateUpdated(this->NetTraceId,uVar8,'\x03');
  uVar8 = APlayerController::GetClientHandshakeId(param_1);
  this->ClientHandshakeId = uVar8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->_padding_ = (longlong)param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->OwningActor).field0_0x0.DebugPtr = (AActor *)param_1;
  this_00 = ((this->Driver).field0_0x0.DebugPtr)->ReplicationSystem;
  if (this_00 != (UReplicationSystem *)0x0) {
    UReplicationSystem::SetReplicationEnabledForConnection
              (this_00,(this->ConnectionHandle).ParentConnectionId,true);
  }
  local_148.ArrayNum = 0;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayMax = 0;
  pUVar14 = AActor::GetWorld((AActor *)this->_padding_);
  this_01 = local_130;
  pFVar22 = (pUVar14->StreamingLevels).AllocatorInstance.Data;
  iVar2 = (pUVar14->StreamingLevels).ArrayNum;
  pFVar1 = pFVar22 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pUVar14->StreamingLevels).ArrayNum != iVar2) {
      local_168[0] = 0;
      `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_168);
      uVar9 = local_148.ArrayNum;
    }
    pUVar6 = local_e0;
    pAVar5 = local_130;
    if (pFVar22 == pFVar1) break;
    if ((((*(longlong *)pFVar22 != 0) &&
         (pUVar12 = *(ULevel **)(*(longlong *)pFVar22 + 0x1b0), pUVar12 != (ULevel *)0x0)) &&
        (pUVar12->bIsVisible != '\0')) && (pUVar12->bClientOnlyVisible == '\0')) {
      if (uVar9 == local_148.ArrayMax) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x418,&local_148.AllocatorInstance,&local_148.ArrayMax);
      }
      local_148.ArrayNum = uVar9 + 1;
      uVar8 = 0;
      if ((int)uVar9 < local_148.ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        local_170 = (longlong)local_148.ArrayNum;
        local_178 = (longlong)(int)uVar9;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((FUpdateLevelVisibilityLevelInfo *)
          (local_148.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x18) ==
          (FUpdateLevelVisibilityLevelInfo *)0x0) {
        pFVar15 = (FUpdateLevelVisibilityLevelInfo *)0x0;
      }
      else {
        pFVar15 = FUpdateLevelVisibilityLevelInfo::FUpdateLevelVisibilityLevelInfo
                            ((FUpdateLevelVisibilityLevelInfo *)
                             (local_148.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x18),
                             pUVar12,true,false);
      }
      FVar16 = APlayerController::NetworkRemapPath
                         (this_01,(FName)local_b8,(pFVar15->PackageName).ComparisonIndex);
      pFVar15->PackageName = *(FName *)FVar16;
      uVar9 = local_148.ArrayNum;
    }
    pFVar22 = pFVar22 + 8;
  }
  if (0 < (int)uVar9) {
    APlayerController::ServerUpdateMultipleLevelsVisibility(local_130,&local_148);
  }
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  UEngine::GetLocalPlayerIterator
            (GEngine,&local_160,(((pUVar6->Driver).field0_0x0.DebugPtr)->World).field0_0x0.DebugPtr)
  ;
  for (; (pTVar20 = local_160.Container, lVar19 = (longlong)local_160.Index, lVar11 = local_150,
         -1 < local_160.Index && (local_160.Index < (local_160.Container)->ArrayNum));
      local_160.Index = local_160.Index + 1) {
    if ((local_160.Index < 0) &&
       (local_178 = lVar19, local_170 = (longlong)(local_160.Container)->ArrayNum,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar11 = local_150;
    if (*(longlong *)((pTVar20->AllocatorInstance).Data + lVar19 * 8) != 0) break;
  }
  do {
    pTVar20 = local_160.Container;
    lVar19 = (longlong)local_160.Index;
    if ((local_160.Index < 0) || ((local_160.Container)->ArrayNum <= local_160.Index)) {
      TMulticastDelegate<void___cdecl(UNetConnection_*,APlayerController_*,UNetConnection_*),FDefaultDelegateUserPolicy>
      ::Broadcast(&local_128->OnConnectionOpened,pUVar6,pAVar5,local_128);
      NotifyConnectionUpdated(pUVar6);
      return;
    }
    if ((local_160.Index < 0) &&
       (local_178 = lVar19, local_170 = (longlong)(local_160.Container)->ArrayNum,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar21 = local_160.Container;
    if (*(longlong *)((pTVar20->AllocatorInstance).Data + lVar19 * 8) != lVar11) {
      lVar19 = (longlong)local_160.Index;
      local_110 = (FString *)0x0;
      local_108 = 0;
      uVar9 = 0;
      if (local_160.Index < (local_160.Container)->ArrayNum) {
        uVar9 = (uint)~local_160.Index >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (local_178 = lVar19, local_170 = (longlong)(local_160.Container)->ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar18 = *(longlong **)((pTVar21->AllocatorInstance).Data + lVar19 * 8);
      (**(code **)(*plVar18 + 800))(plVar18,&local_110);
      DestructItems<FString,int>(local_110,(int)local_108);
      if (local_110 != (FString *)0x0) {
        FMemory::Free(local_110);
      }
    }
    do {
      pTVar20 = local_160.Container;
      uVar9 = local_160.Index + 1;
      local_160.Index = uVar9;
      if (((int)uVar9 < 0) || ((local_160.Container)->ArrayNum <= (int)uVar9)) break;
      if ((int)uVar9 < 0) {
        local_178 = (longlong)(int)uVar9;
        local_170 = (longlong)(local_160.Container)->ArrayNum;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    } while (*(longlong *)((pTVar20->AllocatorInstance).Data + (longlong)(int)uVar9 * 8) == 0);
  } while( true );
}

// HandleConnectionTimeout @ 147fdd6f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::HandleConnectionTimeout(UNetConnection *this,FString *param_1)

{
  UNetDriver *pUVar1;
  UEnum *pUVar2;
  wchar_t *pwVar3;
  UEnum *local_res8;
  FNetResult local_38;
  
  if (this->bPendingDestroy == 0) {
    pUVar1 = (this->Driver).field0_0x0.DebugPtr;
    UEngine::BroadcastNetworkFailure
              (GEngine,(pUVar1->World).field0_0x0.DebugPtr,pUVar1,ConnectionTimeout,param_1);
  }
  pUVar2 = StaticEnum<enum_ENetCloseResult>();
  local_38.Result = 4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  local_38.ResultEnumObj.WeakPtr.ObjectIndex = 0;
  local_38.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FWeakObjectPtr::operator=(&local_38.ResultEnumObj.WeakPtr,(FObjectPtr)&local_res8);
  local_38.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ErrorContext.Data.ArrayNum = 0;
  local_38.ErrorContext.Data.ArrayMax = 0;
  local_38.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
  local_38.RawResultEnumObj = pUVar2;
  pwVar3 = ::LexToString(ConnectionTimeout);
  ::FString::operator=(&local_38.ErrorContext,pwVar3);
  Close(this,&local_38);
  if (local_38.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    (**(code **)((longlong)local_38.NextResult + -0x10))((longlong)local_38.NextResult + -0x10);
  }
  if (local_38.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ErrorContext.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleNetResultOrClose @ 147fdd820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::HandleNetResultOrClose(UNetConnection *this,ENetCloseResult param_1)

{
  FNetConnectionFaultRecovery *this_00;
  EHandleNetResult EVar1;
  FNetResult local_38;
  
  this_00 = (this->FaultRecovery).Ptr;
  if (this_00 == (FNetConnectionFaultRecovery *)0x0) {
    EVar1 = NotHandled;
  }
  else {
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>(&local_38,param_1);
    EVar1 = UE::Net::FNetConnectionFaultRecoveryBase::HandleNetResult
                      ((FNetConnectionFaultRecoveryBase *)this_00,
                       (TNetResult<ENetCloseResult> *)&local_38);
    if (local_38.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_38.NextResult + -0x10))((longlong)local_38.NextResult + -0x10);
    }
    if (local_38.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ErrorContext.Data.AllocatorInstance.Data);
    }
  }
  if (EVar1 == NotHandled) {
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>(&local_38,param_1);
    Close(this,&local_38);
    if (local_38.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_38.NextResult + -0x10))((longlong)local_38.NextResult + -0x10);
    }
    if (local_38.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ErrorContext.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// HandleReceiveCloseReason @ 147fdd8f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::HandleReceiveCloseReason(UNetConnection *this,FString *param_1)

{
  ushort uVar1;
  int iVar2;
  UNetDriver *pUVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  void *local_28 [2];
  
  if (this->bReceivedCloseReason == false) {
    pFVar4 = (param_1->Data).AllocatorInstance.Data;
    iVar2 = (param_1->Data).ArrayNum;
    pFVar5 = pFVar4 + (longlong)iVar2 * 2 + -2;
    if (iVar2 == 0) {
      pFVar5 = pFVar4 + (longlong)iVar2 * 2;
    }
    while( true ) {
      if ((param_1->Data).ArrayNum != iVar2) {
        `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar4 == pFVar5) {
        pUVar3 = (this->Driver).field0_0x0.DebugPtr;
        if (((pUVar3 != (UNetDriver *)0x0) &&
            ((pUVar3->ServerConnection).field0_0x0.DebugPtr != (UNetConnection *)0x0)) ||
           (pTVar6 = &(this->AnalyticsVars).ClientCloseReasons,
           (this->NetAnalyticsData).Object == (FNetConnAnalyticsData *)0x0)) {
          pTVar6 = &local_38;
        }
        local_38.ArrayNum = 0;
        local_38.ArrayMax = 0;
        local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        ::FString::ParseIntoArray(param_1,pTVar6,L",",true);
        if (pTVar6->ArrayNum < 0x80) {
          if (4 < (byte)LogNet._0_1_) {
            (**(code **)(this->_padding_ + 0x2d0))(this,local_28,1);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            if (local_28[0] != (void *)0x0) {
              FMemory::Free(local_28[0]);
            }
          }
          iVar2 = pTVar6->ArrayNum;
          pFVar4 = (pTVar6->AllocatorInstance).Data;
          pFVar5 = pFVar4 + (longlong)iVar2 * 0x10;
          while( true ) {
            if (pTVar6->ArrayNum != iVar2) {
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res8);
            }
            if (pFVar4 == pFVar5) break;
            if (4 < (byte)LogNet._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            }
            pFVar4 = pFVar4 + 0x10;
          }
        }
        else {
          DestructItems<FString,int>((FString *)(pTVar6->AllocatorInstance).Data,pTVar6->ArrayNum);
          pTVar6->ArrayNum = 0;
          if (pTVar6->ArrayMax != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&pTVar6->AllocatorInstance,0,&pTVar6->ArrayMax);
          }
        }
        this->bReceivedCloseReason = true;
        DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
        if (local_38.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_38.AllocatorInstance.Data);
        return;
      }
      uVar1 = *(ushort *)pFVar4;
      if ((((uVar1 < 0x41) || (0x5a < uVar1)) &&
          ((0x19 < (ushort)(uVar1 - 0x61) && ((9 < (ushort)(uVar1 - 0x30) && (uVar1 != 0x5f)))))) &&
         (uVar1 != 0x2c)) break;
      pFVar4 = pFVar4 + 2;
    }
  }
  return;
}

// HandleReceiveNetUpgrade @ 147fddb40

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

bool __thiscall
UNetConnection::HandleReceiveNetUpgrade
          (UNetConnection *this,uint param_1,EEngineNetworkRuntimeFeatures param_2,
          ENetUpgradeSource param_3)

{
  UNetDriver *pUVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  EEngineNetworkRuntimeFeatures EVar3;
  uint uVar4;
  FText *this_00;
  FString *pFVar5;
  UWorld *pUVar6;
  longlong lVar7;
  undefined1 auStackY_318 [32];
  FString local_2d8;
  FText local_2c8;
  FNetResult local_2b8;
  TStringBuilderBase<wchar_t> local_288;
  wchar_t local_268 [128];
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_318;
  uVar4 = FNetworkVersion::GetLocalNetworkVersion(true);
  bVar2 = FNetworkVersion::IsNetworkCompatible(uVar4,param_1);
  if ((bVar2) && (pUVar1 = (this->Driver).field0_0x0.DebugPtr, pUVar1 != (UNetDriver *)0x0)) {
    UNetDriver::TryUpgradeNetworkFeatures(pUVar1,param_2);
    EVar3 = UNetDriver::GetNetworkRuntimeFeatures((this->Driver).field0_0x0.DebugPtr);
    if (EVar3 == param_2) {
      return true;
    }
  }
  pUVar1 = (this->Driver).field0_0x0.DebugPtr;
  EVar3 = None;
  if (pUVar1 != (UNetDriver *)0x0) {
    EVar3 = UNetDriver::GetNetworkRuntimeFeatures(pUVar1);
  }
  local_168.Base = local_148;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  local_168.CurPos = local_148;
  local_288.bIsDynamic = false;
  local_288.bIsExternal = false;
  local_168.End = (wchar_t *)local_48;
  local_288.Base = local_268;
  local_288.CurPos = local_268;
  local_288.End = (wchar_t *)&local_168;
  FNetworkVersion::DescribeNetworkRuntimeFeaturesBitset(EVar3,&local_168);
  FNetworkVersion::DescribeNetworkRuntimeFeaturesBitset(param_2,&local_288);
  if (1 < (byte)LogNet._0_1_) {
    if (local_168.End < local_168.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_168,1);
    }
    *local_168.CurPos = L'\0';
    if (local_288.End < (TStringBuilderBase<wchar_t> *)(local_288.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_288,1);
    }
    *local_288.CurPos = L'\0';
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  this_00 = FText::AsLocalizable_Advanced_LocText
                      (&local_2c8,L"Engine",L"ClientOutdated",
                       L"The match you are trying to join is running an incompatible version of the game.  Please try upgrading your game version."
                      );
  pFVar5 = FText::ToString(this_00);
  local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  lVar7 = (longlong)local_2d8.Data.ArrayNum;
  _Src = (pFVar5->Data).AllocatorInstance.Data;
  if (local_2d8.Data.ArrayNum == 0) {
    local_2d8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_2d8.Data.ArrayNum,0,(ForAnyElementType *)&local_2d8,local_2d8.Data.ArrayNum
               ,&local_2d8.Data.ArrayMax);
    memcpy(local_2d8.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
  }
  if (local_2c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
  }
  pUVar1 = (this->Driver).field0_0x0.DebugPtr;
  pUVar6 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  UEngine::BroadcastNetworkFailure(GEngine,pUVar6,pUVar1,OutdatedClient,&local_2d8);
  if (param_3 == StatelessHandshake) {
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (&local_2b8,OutdatedClient);
    Close(this,&local_2b8);
    if (local_2b8.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_2b8.NextResult + -0x10))((longlong)local_2b8.NextResult + -0x10);
    }
    if (local_2b8.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.ErrorContext.Data.AllocatorInstance.Data);
    }
  }
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_288);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
  return false;
}

// HasReceivedClientPacket @ 147fddf70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UNetConnection::HasReceivedClientPacket(UNetConnection *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->bInternalAck == 0) &&
     ((((this->Driver).field0_0x0.DebugPtr)->ServerConnection).field0_0x0.DebugPtr ==
      (UNetConnection *)0x0)) {
    if ((this->InReliable).ArrayNum < 1) {
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
    if (*(int *)(this->InReliable).AllocatorInstance.Data == this->InitInReliable) {
      return false;
    }
  }
  return true;
}

// InitBase @ 147fde330

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UNetConnection::InitBase
          (UNetConnection *this,UNetDriver *param_1,FSocket *param_2,FURL *param_3,
          EConnectionState param_4,int param_5,int param_6)

{
  TUniquePtr<UE::Net::FNetConnectionFaultRecovery,TDefaultDelete<UE::Net::FNetConnectionFaultRecovery>_>
  *pTVar1;
  TUniquePtr<FRPCDoSDetection,TDefaultDelete<FRPCDoSDetection>_> *pTVar2;
  TPimplPtr<UE::Net::FNetPing,0> *pTVar3;
  undefined4 uVar4;
  uint uVar5;
  UNetDriver *pUVar6;
  FNetAnalyticsAggregator *this_00;
  PacketHandler *this_01;
  FRPCDoSDetection *this_02;
  void *pvVar7;
  FScriptContainerElement *pFVar8;
  FNetTokenStore *this_03;
  UWorld *pUVar9;
  FNetPing *pFVar10;
  UReplicationSystem *this_04;
  code *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  FConnectionHandle FVar14;
  undefined4 uVar15;
  TConsoleVariableData<int> *pTVar16;
  FName FVar17;
  FName FVar18;
  bool bVar19;
  char cVar20;
  int iVar21;
  FString *pFVar22;
  FNetConnAnalyticsData *this_05;
  TSharedRef<FNetAnalyticsData,1> *pTVar23;
  TSharedPtr<FNetAnalyticsData,1> *pTVar24;
  FNetConnectionFaultRecovery *pFVar25;
  FRPCDoSDetection *pFVar26;
  UClass *pUVar27;
  UClass *pUVar28;
  UPackageMapClient *this_06;
  FRPCDoSDetection *pFVar29;
  undefined8 *puVar30;
  TPimplPtr<UE::Net::FNetPing,0> TVar31;
  int iVar32;
  longlong *plVar33;
  FSharedReferencer<1> FVar34;
  StatelessConnectHandlerComponent *pSVar35;
  undefined ***pppuVar36;
  ForAnyElementType FVar37;
  wchar_t *pwVar38;
  undefined1 auStackY_2e8 [32];
  FWeakObjectPtr local_2a4;
  uint local_29c;
  undefined4 uStack_298;
  FName local_290;
  FNetConnAnalyticsData *local_288;
  FSharedReferencer<1> local_280;
  FName local_278;
  FName local_270;
  UNetDriver *local_268;
  UWorld *local_260;
  TSharedPtr<FNetAnalyticsAggregator,1> *local_258;
  undefined1 local_250 [16];
  int local_240;
  int local_23c;
  TSharedPtr<FNetGUIDCache,1> local_238;
  TObjectPtr<UClass>_u_0 local_228;
  TObjectPtr<UClass>_u_0 local_220;
  TRawPtrProxyWithDeleter<FNetConnAnalyticsData,FNetAnalyticsDataDeleter> local_218;
  TSharedPtr<FNetAnalyticsData,1> local_208;
  FString local_1f8;
  FString local_1e8;
  code *local_1d8 [2];
  undefined **local_1c8;
  code *local_1c0;
  undefined8 local_1b0;
  FString local_1a8;
  TSharedRef<FNetAnalyticsData,1> local_198;
  undefined1 local_188 [128];
  ForAnyElementType local_108;
  undefined1 local_f8 [24];
  FSharedReferencer<1> local_e0;
  code *local_d8 [2];
  undefined **local_c8;
  UNetConnection *local_c0;
  StatelessConnectHandlerComponent *local_b0;
  FWeakReferencer<1> local_a8;
  undefined **local_98;
  UNetConnection *local_90;
  undefined ***local_80;
  ForAnyElementType local_78;
  undefined **local_68;
  ForAnyElementType local_60;
  ForAnyElementType local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_2a4 = (FWeakObjectPtr)((ulonglong)local_2a4 & 0xffffffff00000000);
  local_268 = param_1;
  if ((0x400 < param_5) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InMaxPacket <= MAX_PACKET_SIZE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                          ,0x1d5,L""), bVar19)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  (this->Driver).field0_0x0.DebugPtr = param_1;
  InitChannelData(this);
  this->NetTraceId = ((this->Driver).field0_0x0.DebugPtr)->NetTraceId;
  local_29c = FNetConnectionIdHandler::Allocate(&param_1->ConnectionIdHandler);
  pUVar6 = (this->Driver).field0_0x0.DebugPtr;
  uStack_298 = 0;
  FVar14.ChildConnectionId = 0;
  FVar14.ParentConnectionId = local_29c;
  this->ConnectionHandle = FVar14;
  uVar12 = *(undefined4 *)&pUVar6->ElapsedTime;
  uVar13 = *(undefined4 *)((longlong)&pUVar6->ElapsedTime + 4);
  this->LastReceiveRealtime = 0.0;
  this->LastGoodPacketRealtime = 0.0;
  this->LastTime = 0.0;
  *(undefined4 *)&this->StatUpdateTime = uVar12;
  *(undefined4 *)((longlong)&this->StatUpdateTime + 4) = uVar13;
  *(undefined4 *)&this->LastReceiveTime = uVar12;
  *(undefined4 *)((longlong)&this->LastReceiveTime + 4) = uVar13;
  *(undefined4 *)&this->LastSendTime = uVar12;
  *(undefined4 *)((longlong)&this->LastSendTime + 4) = uVar13;
  *(undefined4 *)&this->LastTickTime = uVar12;
  *(undefined4 *)((longlong)&this->LastTickTime + 4) = uVar13;
  *(undefined4 *)&this->LastRecvAckTimestamp = uVar12;
  *(undefined4 *)((longlong)&this->LastRecvAckTimestamp + 4) = uVar13;
  *(undefined4 *)&this->ConnectTimestamp = uVar12;
  *(undefined4 *)((longlong)&this->ConnectTimestamp + 4) = uVar13;
  local_258 = &pUVar6->AnalyticsAggregator;
  cVar20 = (**(code **)(pUVar6->_padding_ + 0x3f8))();
  this_00 = (pUVar6->AnalyticsAggregator).Object;
  if ((this_00 != (FNetAnalyticsAggregator *)0x0) && (this->bReplay == 0)) {
    pFVar22 = ::FString::FString(&local_1a8,L"FNetConnAnalyticsData");
    pwVar38 = L"Core.ClientNetConn";
    if (cVar20 != '\0') {
      pwVar38 = L"Core.ServerNetConn";
    }
    ::FName::FName(&local_278,pwVar38);
    this_05 = ::operator_new(0xe0);
    if (this_05 == (FNetConnAnalyticsData *)0x0) {
      this_05 = (FNetConnAnalyticsData *)0x0;
    }
    else {
      memset(this_05,0,0xe0);
      FNetAnalyticsData::FNetAnalyticsData((FNetAnalyticsData *)this_05);
      FNetConnAnalyticsVars::FNetConnAnalyticsVars((FNetConnAnalyticsVars *)&this_05->field_0x20);
      *(undefined ***)this_05 = &___7FNetConnAnalyticsData__6B_;
      if ((((*(longlong *)&this_05->field_0x8 != 0) && (*(longlong *)&this_05->field_0x10 != 0)) &&
          (0 < *(int *)(*(longlong *)&this_05->field_0x10 + 8))) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7bd,L"Trying to share an already-shared object"), bVar19)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    local_218.Object = this_05;
    pTVar23 = TSharedRef<FNetAnalyticsData,1>::
              TSharedRef<FNetAnalyticsData,1><FNetConnAnalyticsData,FNetAnalyticsDataDeleter>
                        (&local_198,&local_218);
    pTVar24 = FNetAnalyticsAggregator::RegisterAnalyticsData_Internal
                        (this_00,&local_208,pTVar23,&local_278,pFVar22);
    local_280.ReferenceController = (pTVar24->SharedReferenceCount).ReferenceController;
    local_288 = (FNetConnAnalyticsData *)pTVar24->Object;
    if (local_280.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_280.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_280.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->NetAnalyticsData != (TSharedPtr<FNetConnAnalyticsData,1> *)&local_288) {
      (this->NetAnalyticsData).Object = local_288;
      local_288 = (FNetConnAnalyticsData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->NetAnalyticsData).SharedReferenceCount,&local_280);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_280.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_208.SharedReferenceCount.ReferenceController);
  }
  FHistogram::InitHitchTracking(&this->NetConnectionHistogram);
  uVar5 = (this->ConnectionHandle).ParentConnectionId;
  this->State = param_4;
  FNetTrace::TraceConnectionStateUpdated(this->NetTraceId,uVar5,(uchar)param_4);
  FURL::operator=(&this->URL,param_3);
  this->PacketOverhead = param_6;
  this->MaxPacket = param_5;
  if (((param_5 < 1) || (param_6 < 1)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaxPacket > 0 && PacketOverhead > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                          ,0x207,L""), bVar19)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  this->bLoggedFlushNetQueuedBitsOverflow = false;
  pFVar29 = (FRPCDoSDetection *)0x0;
  this_01 = (this->Handler).Ptr;
  if (this_01 != (PacketHandler *)0x0) {
    (this->Handler).Ptr = (PacketHandler *)0x0;
    PacketHandler::~PacketHandler(this_01);
    ::operator_delete(this_01,0x270);
  }
  (**(code **)(this->_padding_ + 0x370))(this);
  pFVar25 = ::operator_new(0x140);
  pFVar26 = pFVar29;
  if (pFVar25 != (FNetConnectionFaultRecovery *)0x0) {
    memset(pFVar25,0,0x140);
    pFVar26 = (FRPCDoSDetection *)
              UE::Net::FNetConnectionFaultRecovery::FNetConnectionFaultRecovery(pFVar25);
  }
  pTVar1 = &this->FaultRecovery;
  if ((TObjectPtr<UClass>_u_0 *)pTVar1 == &local_228) {
    if (pFVar26 != (FRPCDoSDetection *)0x0) {
      pFVar8 = *(FScriptContainerElement **)
                &((FString *)
                 ((longlong)((pFVar26->SequentialRPCScopePrivate).LightweightRPCTracking.RPC + 7) +
                 8))->Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      UE::Net::FNetConnectionFaultRecoveryBase::~FNetConnectionFaultRecoveryBase
                ((FNetConnectionFaultRecoveryBase *)pFVar26);
      goto LAB_147fde6dc;
    }
  }
  else {
    this_02 = (FRPCDoSDetection *)pTVar1->Ptr;
    pTVar1->Ptr = (FNetConnectionFaultRecovery *)pFVar26;
    if (this_02 != (FRPCDoSDetection *)0x0) {
      pvVar7 = *(void **)((longlong)
                          ((this_02->SequentialRPCScopePrivate).LightweightRPCTracking.RPC + 7) + 8)
      ;
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      UE::Net::FNetConnectionFaultRecoveryBase::~FNetConnectionFaultRecoveryBase
                ((FNetConnectionFaultRecoveryBase *)this_02);
      pFVar26 = this_02;
LAB_147fde6dc:
      ::operator_delete(pFVar26,0x140);
    }
  }
  pUVar6 = (this->Driver).field0_0x0.DebugPtr;
  pFVar25 = pTVar1->Ptr;
  bVar19 = pUVar6 == (UNetDriver *)0x0;
  if (bVar19) {
    pFVar22 = ::FString::FString(&local_1f8,L"");
  }
  else {
    local_270 = pUVar6->NetDriverDefinition;
    pFVar22 = ::FName::ToString(&local_270,&local_1e8);
  }
  local_250._8_8_ = (pFVar22->Data).AllocatorInstance.Data;
  (pFVar22->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_240 = (pFVar22->Data).ArrayNum;
  local_23c = (pFVar22->Data).ArrayMax;
  (pFVar22->Data).ArrayNum = 0;
  (pFVar22->Data).ArrayMax = 0;
  UE::Net::FNetConnectionFaultRecovery::InitDefaults(pFVar25,(FString *)(local_250 + 8),this);
  if ((bVar19) && (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if ((!bVar19) && (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  pTVar16 = CVarLogUnhandledFaults.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_147fde79f:
    pFVar26 = pFVar29;
  }
  else {
    bVar19 = IsInGameThread();
    pFVar26 = (FRPCDoSDetection *)0x4;
    if (bVar19) goto LAB_147fde79f;
  }
  if (*(int *)((longlong)pTVar16->ShadowedValue + (longlong)&pFVar26->_padding_) != 0) {
    local_1c8 = &
                ___7__TFunction_OwnedObject_P6A_AW4EHandleNetResult_Net_UE____QEAUFNetResult_23__Z_00_0A__Function_Private_Core_UE__6B_
    ;
    local_1b0 = 0;
    local_1c0 = `UNetConnection::InitBase'::__l22::<lambda_1>::<lambda_invoker_cdecl>;
    local_1d8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<enum_UE::Net::EHandleNetResult_(__cdecl*)(UE::Net::FNetResult_&&),enum_UE::Net::EHandleNetResult,UE::Net::FNetResult_&&>
                   ::Call;
    UE::Net::FNetResultManager::SetUnhandledResultCallback
              ((FNetResultManager *)&pTVar1->Ptr->field_0x60,
               (TUniqueFunction<UE::Net::EHandleNetResult___cdecl(UE::Net::FNetResult_&&)> *)
               local_1d8);
  }
  UpdatePacketSimulationSettings(this);
  bVar19 = FURL::HasOption(&this->URL,L"LAN");
  if (bVar19) {
    pUVar27 = Z_Construct_UClass_UPlayer_NoRegister();
    if ((pUVar27->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar27);
    }
    iVar32 = *(int *)&(pUVar27->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x18;
  }
  else {
    pUVar27 = Z_Construct_UClass_UPlayer_NoRegister();
    if ((pUVar27->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar27);
    }
    iVar32 = *(int *)&(pUVar27->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x14;
  }
  if (iVar32 == 0) {
    iVar21 = 0xa28;
  }
  else {
    iVar21 = 0x708;
    if (0x708 < iVar32) {
      iVar21 = iVar32;
    }
  }
  *(int *)&this->_padding_ = iVar21;
  this_03 = (((this->Driver).field0_0x0.DebugPtr)->NetTokenStore).Ptr;
  if (this_03 != (FNetTokenStore *)0x0) {
    UE::Net::FNetTokenStore::InitRemoteNetTokenStoreState
              (this_03,(this->ConnectionHandle).ParentConnectionId);
  }
  pUVar27 = (this->PackageMapClass).Class.field0_0x0.DebugPtr;
  local_290.ComparisonIndex.Value = 0;
  local_290.Number = 0;
  pFVar26 = pFVar29;
  if ((pUVar27 != (UClass *)0x0) &&
     (pUVar28 = Z_Construct_UClass_UPackageMap_NoRegister(), pUVar28 != (UClass *)0x0)) {
    iVar32 = (int)pUVar28->_padding_;
    if (((int)pUVar27->_padding_ < iVar32) ||
       ((longlong *)*(undefined1 **)(pUVar27->_padding_ + (longlong)iVar32 * 8) !=
        &pUVar28->_padding_)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    if (bVar19) {
      pFVar26 = (FRPCDoSDetection *)(this->PackageMapClass).Class.field0_0x0.DebugPtr;
    }
  }
  FVar17 = local_290;
  if (local_290 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar27 = Z_Construct_UClass_UPackageMapClient_NoRegister();
  CheckIsClassChildOf_Internal(pUVar27,(UClass *)pFVar26);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_188,(UClass *)pFVar26);
  FVar18 = local_290;
  local_188._48_8_ = (FObjectInstancingGraph *)0x0;
  local_188._56_8_ = (UPackage *)0x0;
  local_290.ComparisonIndex = FVar17.ComparisonIndex.Value;
  local_290.Number = FVar17.Number;
  local_188._16_4_ = local_290.ComparisonIndex.Value;
  local_188._20_4_ = local_290.Number;
  local_188._24_4_ = RF_NoFlags;
  local_188._40_8_ = (UObject *)0x0;
  local_188[0x20] = false;
  local_290 = FVar18;
  local_188._8_8_ = this;
  this_06 = (UPackageMapClient *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_188);
  if (local_188._64_8_ != 0) {
    plVar33 = (longlong *)(local_188 + 0x50);
    if ((longlong *)local_188._104_8_ != (longlong *)0x0) {
      plVar33 = (longlong *)local_188._104_8_;
    }
    (**(code **)(*plVar33 + 0x10))();
  }
  if (this_06 == (UPackageMapClient *)0x0) {
    bVar19 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5435733364554334792>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                        ,0x248,"PackageMapClient != nullptr");
    if (bVar19) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  else {
    pUVar6 = (this->Driver).field0_0x0.DebugPtr;
    local_238.Object = (pUVar6->GuidCache).Object;
    local_238.SharedReferenceCount.ReferenceController =
         (pUVar6->GuidCache).SharedReferenceCount.ReferenceController;
    if (local_238.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UPackageMapClient::Initialize(this_06,this,&local_238);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_06);
    }
    (this->PackageMap).field0_0x0.DebugPtr = (UPackageMap *)this_06;
  }
  if ((cVar20 == '\0') || (this->bReplay != 0)) goto LAB_147fdec1c;
  pFVar26 = ::operator_new(0x1430);
  if (pFVar26 != (FRPCDoSDetection *)0x0) {
    memset(pFVar26,0,0x1430);
    pFVar29 = FRPCDoSDetection::FRPCDoSDetection(pFVar26);
  }
  pTVar2 = &this->RPCDoS;
  if ((TObjectPtr<UClass>_u_0 *)pTVar2 == &local_220) {
    if (pFVar29 != (FRPCDoSDetection *)0x0) {
      puVar30 = (undefined8 *)pFVar29->_padding_;
      goto LAB_147fdea39;
    }
  }
  else {
    pFVar26 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar29;
    if (pFVar26 != (FRPCDoSDetection *)0x0) {
      puVar30 = (undefined8 *)pFVar26->_padding_;
      pFVar29 = pFVar26;
LAB_147fdea39:
      (*(code *)*puVar30)(pFVar29,1);
    }
  }
  pFVar29 = pTVar2->Ptr;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNetConnection::InitBase'::`36'::<lambda_5>,1,0>::_vftable_;
  local_78.Data =
       (FScriptContainerElement *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UNetConnection::InitBase'::__l36::<lambda_5>,void>::Call;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNetConnection::InitBase'::`36'::<lambda_4>,1,0>::_vftable_;
  pUVar9 = (local_268->World).field0_0x0.DebugPtr;
  local_a8.ReferenceController =
       (TReferenceControllerBase<1> *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UNetConnection::InitBase'::__l36::<lambda_4>,FString>::Call;
  local_c8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNetConnection::InitBase'::`36'::<lambda_3>,1,0>::_vftable_;
  local_d8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNetConnection::InitBase'::__l36::<lambda_3>,FString>::Call;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_80 = (undefined ***)0x0;
  local_b0 = (StatelessConnectHandlerComponent *)0x0;
  local_c0 = this;
  local_90 = this;
  local_60.Data = (FScriptContainerElement *)this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  local_2a4.ObjectIndex = 0;
  local_2a4.ObjectSerialNumber = 0;
  local_260 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  FWeakObjectPtr::operator=(&local_2a4,(FObjectPtr)&local_260);
  local_f8._0_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UNetConnection::InitBase'::`36'::<lambda_2>,1,0>::_vftable_;
  local_f8._8_4_ = local_2a4.ObjectIndex;
  local_f8._12_4_ = local_2a4.ObjectSerialNumber;
  local_108.Data =
       (FScriptContainerElement *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UNetConnection::InitBase'::__l36::<lambda_2>,UWorld_*>::Call;
  local_e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FRPCDoSDetection::Init
            (pFVar29,((this->Driver).field0_0x0.DebugPtr)->NetDriverDefinition,local_258,
             (TUniqueFunction<UWorld_*___cdecl(void)> *)&local_108,
             (TUniqueFunction<FString___cdecl(void)> *)local_d8,
             (TUniqueFunction<FString___cdecl(void)> *)&local_a8,
             (TUniqueFunction<void___cdecl(void)> *)&local_78);
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FVar34.ReferenceController = (TReferenceControllerBase<1> *)local_f8;
    if (local_e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      FVar34.ReferenceController = local_e0.ReferenceController;
    }
    (**(code **)((FVar34.ReferenceController)->_padding_ + 0x10))();
  }
  if (local_d8[0] != (code *)0x0) {
    pSVar35 = (StatelessConnectHandlerComponent *)&local_c8;
    if (local_b0 != (StatelessConnectHandlerComponent *)0x0) {
      pSVar35 = local_b0;
    }
    (*(code *)(*(undefined ***)pSVar35)[2])();
  }
  if (local_a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    pppuVar36 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar36 = local_80;
    }
    (*(code *)(*pppuVar36)[2])();
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FVar37.Data = (FScriptContainerElement *)&local_68;
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FVar37.Data = local_50.Data;
    }
    (*(code *)(*(undefined ***)FVar37.Data)[2])();
  }
LAB_147fdec1c:
  TVar31 = UE::Net::FNetPing::CreateNetPing((UNetConnection *)local_250);
  pTVar3 = &this->NetPing;
  if (TVar31.Ptr != (FNetPing *)pTVar3) {
    pFVar10 = pTVar3->Ptr;
    pTVar3->Ptr = (FNetPing *)((TVar31.Ptr)->Owner).field0_0x0;
    ((TVar31.Ptr)->Owner).field0_0x0.DebugPtr = (UNetConnection *)0x0;
    if (pFVar10 != (FNetPing *)0x0) {
      (**(code **)&pFVar10[-1].OverridePingUDPQoSAddress.Data.ArrayNum)
                (&pFVar10[-1].OverridePingUDPQoSAddress.Data.ArrayNum);
    }
  }
  if (local_250._0_8_ != 0) {
    (**(code **)(local_250._0_8_ + -0x10))(local_250._0_8_ + -0x10);
  }
  FNetTrace::TraceConnectionCreated(this->NetTraceId,(this->ConnectionHandle).ParentConnectionId);
  FNetTrace::TraceConnectionStateUpdated
            (this->NetTraceId,(this->ConnectionHandle).ParentConnectionId,(char)this->State);
  this_04 = ((this->Driver).field0_0x0.DebugPtr)->ReplicationSystem;
  if (this_04 != (UReplicationSystem *)0x0) {
    UReplicationSystem::AddConnection(this_04,(this->ConnectionHandle).ParentConnectionId);
    UReplicationSystem::SetConnectionUserData
              (this_04,(this->ConnectionHandle).ParentConnectionId,(UObject *)this);
  }
  return;
}

// InitChannelData @ 147fdecf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::InitChannelData(UNetConnection *this)

{
  int *piVar1;
  size_t _Size;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FName local_res20;
  FMemScope local_48;
  FString local_40;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_NetConnection.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_NetConnection.UniqueName;
  FMemScope::FMemScope(&local_48,&local_res18,true);
  piVar1 = &(this->Channels).ArrayNum;
  if (*piVar1 != 0) {
    local_res8[0] = 0;
    bVar4 = `UNetConnection::InitChannelData'::__l3::<lambda_1>::operator()(local_res8);
    if (!bVar4) goto LAB_147fdef95;
  }
  if (((this->Driver).field0_0x0.DebugPtr == (UNetDriver *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Driver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0x1a7,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->_padding_ & 0x30) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasAnyFlags(EObjectFlags::RF_ClassDefaultObject | EObjectFlags::RF_ArchetypeObject)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0x1a8,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = CVarMaxChannelSize.Ref;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 4;
  }
  iVar6 = *(int *)((longlong)pTVar3->ShadowedValue + lVar7);
  if (iVar6 < 1) {
    iVar5 = ((this->Driver).field0_0x0.DebugPtr)->MaxChannelsOverride;
    iVar6 = this->DefaultMaxChannelSize;
    if (0 < iVar5) {
      iVar6 = iVar5;
    }
  }
  if (4 < (byte)LogNet._0_1_) {
    local_res20 = (FName)this->_padding_;
    ::FName::ToString(&local_res20,&local_40);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar6,&(this->Channels).AllocatorInstance,piVar1,&(this->Channels).ArrayMax
                    );
  memset((this->Channels).AllocatorInstance.Data + (longlong)iVar5 * 8,0,(longlong)iVar6 * 8);
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar6,&(this->OutReliable).AllocatorInstance,&(this->OutReliable).ArrayNum,
                     &(this->OutReliable).ArrayMax);
  _Size = (longlong)iVar6 * 4;
  memset((this->OutReliable).AllocatorInstance.Data + (longlong)iVar5 * 4,0,_Size);
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar6,&(this->InReliable).AllocatorInstance,&(this->InReliable).ArrayNum,
                     &(this->InReliable).ArrayMax);
  memset((this->InReliable).AllocatorInstance.Data + (longlong)iVar5 * 4,0,_Size);
  if (this->bInternalAck == 0) {
    TArray<int,TSizedDefaultAllocator<32>_>::AddDefaulted(&this->PendingOutRec,iVar6);
  }
  FNetPacketNotify::Init
            (&this->PacketNotify,
             (TSequenceNumber<14,unsigned_short>)((ushort)this->InPacketId & 0x3fff),
             (TSequenceNumber<14,unsigned_short>)((ushort)this->OutPacketId & 0x3fff));
LAB_147fdef95:
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// InitConnection @ 147fdf110

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UNetConnection::InitConnection
          (UNetConnection *this,UNetDriver *param_1,EConnectionState param_2,FURL *param_3,
          int param_4,int param_5)

{
  TUniquePtr<UE::Net::FNetConnectionFaultRecovery,TDefaultDelete<UE::Net::FNetConnectionFaultRecovery>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  UNetDriver *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  FNetConnectionFaultRecovery *pFVar6;
  FNetConnectionFaultRecovery *pFVar7;
  FString *pFVar8;
  UPackageMapClient *this_00;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_108 [32];
  FName local_e8;
  TSharedPtr<FNetGUIDCache,1> local_e0;
  undefined8 local_d0;
  FString local_c8;
  FString local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  pFVar7 = (FNetConnectionFaultRecovery *)0x0;
  local_e8 = (FName)((ulonglong)local_e8 & 0xffffffff00000000);
  (this->Driver).field0_0x0.DebugPtr = param_1;
  InitChannelData(this);
  this->NetTraceId = ((this->Driver).field0_0x0.DebugPtr)->NetTraceId;
  local_e8.ComparisonIndex.Value = FNetConnectionIdHandler::Allocate(&param_1->ConnectionIdHandler);
  local_e8.Number = 0;
  (this->ConnectionHandle).ParentConnectionId = local_e8.ComparisonIndex.Value;
  (this->ConnectionHandle).ChildConnectionId = 0;
  if ((param_5 == 0) || (0x400 < param_5)) {
    param_5 = 0x400;
  }
  this->MaxPacket = param_5;
  this->PacketOverhead = 0;
  this->State = param_2;
  FNetTrace::TraceConnectionStateUpdated
            (this->NetTraceId,local_e8.ComparisonIndex.Value,(uchar)param_2);
  UpdatePacketSimulationSettings(this);
  if (param_4 == 0) {
    bVar4 = FURL::HasOption(&this->URL,L"LAN");
    if (bVar4) {
      pUVar5 = Z_Construct_UClass_UPlayer_NoRegister();
      if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar5);
      }
      iVar10 = *(int *)&(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x18;
    }
    else {
      pUVar5 = Z_Construct_UClass_UPlayer_NoRegister();
      if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar5);
      }
      iVar10 = *(int *)&(pUVar5->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x14;
    }
    *(int *)&this->_padding_ = iVar10;
    if (iVar10 == 0) {
      param_4 = 0xa28;
    }
    else {
      param_4 = 0x708;
      if (0x708 < iVar10) {
        param_4 = iVar10;
      }
    }
  }
  *(int *)&this->_padding_ = param_4;
  pFVar6 = ::operator_new(0x140);
  if (pFVar6 != (FNetConnectionFaultRecovery *)0x0) {
    memset(pFVar6,0,0x140);
    pFVar7 = UE::Net::FNetConnectionFaultRecovery::FNetConnectionFaultRecovery(pFVar6);
  }
  pTVar1 = &this->FaultRecovery;
  if (pTVar1 == (TUniquePtr<UE::Net::FNetConnectionFaultRecovery,TDefaultDelete<UE::Net::FNetConnectionFaultRecovery>_>
                 *)&local_d0) {
    if (pFVar7 == (FNetConnectionFaultRecovery *)0x0) goto LAB_147fdf2e6;
    pFVar2 = (pFVar7->ConfigContext).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    UE::Net::FNetConnectionFaultRecoveryBase::~FNetConnectionFaultRecoveryBase
              ((FNetConnectionFaultRecoveryBase *)pFVar7);
  }
  else {
    pFVar6 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar7;
    if (pFVar6 == (FNetConnectionFaultRecovery *)0x0) goto LAB_147fdf2e6;
    pFVar2 = (pFVar6->ConfigContext).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    UE::Net::FNetConnectionFaultRecoveryBase::~FNetConnectionFaultRecoveryBase
              ((FNetConnectionFaultRecoveryBase *)pFVar6);
    pFVar7 = pFVar6;
  }
  ::operator_delete(pFVar7,0x140);
LAB_147fdf2e6:
  pUVar3 = (this->Driver).field0_0x0.DebugPtr;
  pFVar7 = pTVar1->Ptr;
  bVar4 = pUVar3 == (UNetDriver *)0x0;
  if (bVar4) {
    pFVar8 = ::FString::FString(&local_c8,L"");
  }
  else {
    local_e8 = pUVar3->NetDriverDefinition;
    pFVar8 = ::FName::ToString(&local_e8,&local_b8);
  }
  local_e0.Object = (FNetGUIDCache *)(pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&(pFVar8->Data).ArrayNum;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  UE::Net::FNetConnectionFaultRecovery::InitDefaults(pFVar7,(FString *)&local_e0,this);
  if ((bVar4) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((!bVar4) && (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = Z_Construct_UClass_UPackageMapClient_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar5);
  local_a8._8_8_ = this;
  this_00 = (UPackageMapClient *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar9 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  pUVar3 = (this->Driver).field0_0x0.DebugPtr;
  local_e0.Object = (pUVar3->GuidCache).Object;
  local_e0.SharedReferenceCount.ReferenceController =
       (pUVar3->GuidCache).SharedReferenceCount.ReferenceController;
  if (local_e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UPackageMapClient::Initialize(this_00,this,&local_e0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UPackageMapClient *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->PackageMap).field0_0x0.DebugPtr = (UPackageMap *)this_00;
  FNetTrace::TraceConnectionCreated(this->NetTraceId,(this->ConnectionHandle).ParentConnectionId);
  FNetTrace::TraceConnectionStateUpdated
            (this->NetTraceId,(this->ConnectionHandle).ParentConnectionId,(char)this->State);
  return;
}

// InitHandler @ 147fdf4a0

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

void __thiscall UNetConnection::InitHandler(UNetConnection *this)

{
  atomic<int> *paVar1;
  TUniquePtr<PacketHandler,TDefaultDelete<PacketHandler>_> *pTVar2;
  atomic<int> aVar3;
  UNetConnection *pUVar4;
  UNetDriver *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  FName FVar7;
  code *pcVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  atomic<int> aVar11;
  int iVar12;
  wchar_t *pwVar13;
  PacketHandler *pPVar14;
  PacketHandler *pPVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_MaxPacket> FVar19;
  FThreadStats *pFVar20;
  FThreadStatsPool *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_MaxPacketMinusReserved> FVar22;
  FThreadSafeStaticStat<FStat_STAT_PacketReservedTotal> FVar23;
  FThreadSafeStaticStat<FStat_STAT_PacketReservedNetConnection> FVar24;
  FThreadSafeStaticStat<FStat_STAT_PacketReservedPacketHandler> FVar25;
  undefined ***pppuVar26;
  PacketHandler *this_00;
  uint uVar27;
  uint uVar28;
  uchar auVar29 [8];
  undefined1 auStackY_2a8 [32];
  FName local_248;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_240;
  FDelegateAllocation local_238;
  FLLMScope local_228 [5];
  FName local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 local_208 [8];
  FDelegateAllocation local_200;
  UNetConnection *local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FMemScope local_1c8;
  FStatMessage local_1c0;
  FStatMessage local_1b0;
  FStatMessage local_1a0;
  undefined1 local_190 [8];
  void *local_188;
  int local_180;
  TSharedPtr<HandlerComponent,1> local_178;
  FStatMessage local_168;
  FStatMessage local_158;
  TSharedPtr<IAnalyticsProvider,1> local_148;
  FString local_138;
  TSharedPtr<IAnalyticsProvider,1> local_128;
  TSharedPtr<FNetAnalyticsAggregator,1> local_118;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  longlong local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  code *local_68 [2];
  undefined **local_58;
  UNetConnection *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  FLLMScope::FLLMScope(local_228,LLMTagDeclaration_NetConnection.UniqueName,false,None,Default,true)
  ;
  local_248 = LLMTagDeclaration_NetConnection.UniqueName;
  FMemScope::FMemScope(&local_1c8,&local_248,true);
  pTVar2 = &this->Handler;
  if ((pTVar2->Ptr != (PacketHandler *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Handler.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                          ,700,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pwVar13 = FCommandLine::Get();
  bVar10 = FParse::Param(pwVar13,L"NoPacketHandler");
  this_00 = (PacketHandler *)0x0;
  if (bVar10) goto LAB_147fdfa42;
  pPVar14 = ::operator_new(0x270);
  pPVar15 = this_00;
  if (pPVar14 != (PacketHandler *)0x0) {
    pPVar15 = PacketHandler::PacketHandler(pPVar14,(FDDoSDetection *)0x0);
  }
  if (pTVar2 == (TUniquePtr<PacketHandler,TDefaultDelete<PacketHandler>_> *)&local_98) {
    if (pPVar15 != (PacketHandler *)0x0) {
      PacketHandler::~PacketHandler(pPVar15);
      goto LAB_147fdf5bf;
    }
  }
  else {
    pPVar14 = pTVar2->Ptr;
    pTVar2->Ptr = pPVar15;
    if (pPVar14 != (PacketHandler *)0x0) {
      PacketHandler::~PacketHandler(pPVar14);
      pPVar15 = pPVar14;
LAB_147fdf5bf:
      ::operator_delete(pPVar15,0x270);
    }
  }
  if (pTVar2->Ptr != (PacketHandler *)0x0) {
    pUVar4 = (((this->Driver).field0_0x0.DebugPtr)->ServerConnection).field0_0x0.DebugPtr;
    local_240.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_238.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_238.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_240,(FWriteAccessScope *)&local_d8);
    local_c0 = &local_238;
    puVar16 = UE::Core::Private::DelegateAllocate(0x20,&local_238);
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEAV__TSharedPtr_VHandlerComponent___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar17 = FDelegateHandle::GenerateNewID();
      puVar16[2] = uVar17;
      *puVar16 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<HandlerComponent,1>_&),FDefaultDelegateUserPolicy,`UNetConnection::InitHandler'::`15'::<lambda_1>_>
                  ::_vftable_;
      puVar16[3] = this;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    pPVar15 = pTVar2->Ptr;
    local_190 = (undefined1  [8])0x0;
    local_188 = (void *)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_240,(FWriteAccessScope *)&local_108);
    if (local_188 != (void *)0x0) {
      FMemory::Free(local_188);
    }
    local_188 = (void *)local_238.DelegateAllocator;
    local_180 = local_238.DelegateSize;
    local_238.DelegateSize = 0;
    local_238.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    if (local_108.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
    }
    uStack_210 = 0;
    local_218 = (FName)_vcall__744__flat______;
    uStack_20c = local_128.SharedReferenceCount.ReferenceController._4_4_;
    local_208 = (undefined1  [8])0x0;
    local_200.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_200.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_208,
               (FWriteAccessScope *)&local_b8);
    local_a0 = &local_200;
    puVar16 = UE::Core::Private::DelegateAllocate(0x30,&local_200);
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = &
                 ___7__TCommonDelegateInstanceState___A6AXPEAXHAEAUFOutPacketTraits___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar17 = FDelegateHandle::GenerateNewID();
      puVar16[2] = uVar17;
      *puVar16 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUNetConnection____A6AXPEAXHAEAUFOutPacketTraits___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar16[3] = 0;
      local_1f0 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar16 + 3),(FObjectPtr)&local_1f0);
      *(FName *)(puVar16 + 4) = local_218;
      puVar16[5] = CONCAT44(uStack_20c,uStack_210);
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    PacketHandler::InitializeDelegates
              (pPVar15,(TDelegate<void___cdecl(void_*,int,FOutPacketTraits_&),FDefaultDelegateUserPolicy>
                        *)local_208,
               (TDelegate<void___cdecl(TSharedPtr<HandlerComponent,1>_&),FDefaultDelegateUserPolicy>
                *)local_190);
    pUVar5 = (this->Driver).field0_0x0.DebugPtr;
    pPVar15 = pTVar2->Ptr;
    local_118.Object = (pUVar5->AnalyticsAggregator).Object;
    local_118.SharedReferenceCount.ReferenceController =
         (pUVar5->AnalyticsAggregator).SharedReferenceCount.ReferenceController;
    if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar5 = (this->Driver).field0_0x0.DebugPtr;
    local_148.Object = (pUVar5->AnalyticsProvider).Object;
    local_148.SharedReferenceCount.ReferenceController =
         (pUVar5->AnalyticsProvider).SharedReferenceCount.ReferenceController;
    if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    PacketHandler::NotifyAnalyticsProvider(pPVar15,&local_148,&local_118);
    local_128.Object = (IAnalyticsProvider *)0x0;
    local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    PacketHandler::Initialize
              (pTVar2->Ptr,pUVar4 == (UNetConnection *)0x0,this->MaxPacket << 3,false,&local_128,
               (FDDoSDetection *)0x0,((this->Driver).field0_0x0.DebugPtr)->NetDriverDefinition);
    pPVar15 = pTVar2->Ptr;
    ::FString::FString(&local_138,
                       L"Engine.EngineHandlerComponentFactory(StatelessConnectHandlerComponent)");
    PacketHandler::AddHandler(pPVar15,&local_178,&local_138,true);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    FVar9.ReferenceController = local_178.SharedReferenceCount.ReferenceController;
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (this->StatelessConnectComponent).Object = (StatelessConnectHandlerComponent *)local_178.Object;
    if (local_178.SharedReferenceCount.ReferenceController !=
        (this->StatelessConnectComponent).WeakReferenceCount.ReferenceController) {
      if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_178.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_178.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar6 = (this->StatelessConnectComponent).WeakReferenceCount.ReferenceController;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar6->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
      (this->StatelessConnectComponent).WeakReferenceCount.ReferenceController =
           FVar9.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar9.ReferenceController);
    if ((((this->StatelessConnectComponent).Object != (StatelessConnectHandlerComponent *)0x0) &&
        (pTVar6 = (this->StatelessConnectComponent).WeakReferenceCount.ReferenceController,
        pTVar6 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar6->SharedReferenceCount)) {
      pPVar15 = (PacketHandler *)
                (this->StatelessConnectComponent).WeakReferenceCount.ReferenceController;
      pPVar14 = pPVar15;
      if (pPVar15 != (PacketHandler *)0x0) {
        aVar3 = *(atomic<int> *)&pPVar15->DDoS;
        do {
          pPVar14 = this_00;
          if (aVar3 == (atomic<int>)0x0) goto LAB_147fdf935;
          LOCK();
          aVar11 = *(atomic<int> *)&pPVar15->DDoS;
          bVar10 = aVar3 == aVar11;
          if (bVar10) {
            *(atomic<int> *)&pPVar15->DDoS = (atomic<int>)((int)aVar3 + 1);
            aVar11 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar11;
        } while (!bVar10);
        this_00 = (PacketHandler *)(this->StatelessConnectComponent).Object;
        pPVar14 = pPVar15;
      }
LAB_147fdf935:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pPVar14);
      StatelessConnectHandlerComponent::SetDriver
                ((StatelessConnectHandlerComponent *)this_00,(this->Driver).field0_0x0.DebugPtr);
      local_40 = (undefined ***)0x0;
      local_58 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UNetConnection::InitHandler'::`18'::<lambda_2>,1,0>::
                  _vftable_;
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNetConnection::InitHandler'::__l18::<lambda_2>,void,UE::Net::FStatelessHandshakeFailureInfo>
                    ::Call;
      local_50 = this;
      StatelessConnectHandlerComponent::SetHandshakeFailureCallback
                ((StatelessConnectHandlerComponent *)this_00,
                 (TUniqueFunction<void___cdecl(UE::Net::FStatelessHandshakeFailureInfo)> *)local_68)
      ;
      if (local_68[0] != (code *)0x0) {
        pppuVar26 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar26 = local_40;
        }
        (*(code *)(*pppuVar26)[2])();
      }
    }
    PacketHandler::InitializeComponents(pTVar2->Ptr);
    iVar12 = PacketHandler::GetTotalReservedPacketBits(pTVar2->Ptr);
    this->MaxPacketHandlerBits = iVar12;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_240,(FWriteAccessScope *)&local_f0);
    if ((local_238.DelegateSize != 0) &&
       (local_238.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_238.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_238,0,0,0x10);
      local_238.DelegateSize = 0;
    }
    if (local_f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
    }
    if (local_238.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_238.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_240.AccessDetector);
  }
LAB_147fdfa42:
  uVar27 = this->MaxPacketHandlerBits + 0x135;
  uVar28 = this->MaxPacket * 8;
  FVar19 = StatPtr_STAT_MaxPacket;
  if (StatPtr_STAT_MaxPacket == (FThreadSafeStaticStat<FStat_STAT_MaxPacket>)0x0) {
    pFVar18 = ::FName::FName(&local_90,"STAT_MaxPacket");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_MaxPacket>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MaxPacket,*pFVar18,
                        L"Max Packet (bits)","STATGROUP_Packet","STATCAT_Advanced",L"Packet",true,
                        false,ST_int64,false,false,MCR_Invalid);
  }
  FVar7 = *(FName *)FVar19;
  local_248 = FVar7;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    local_168.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
    local_168.StatData.Pad[4] = '\0';
    local_168.StatData.Pad[5] = '\0';
    local_168.StatData.Pad[6] = '\0';
    local_168.StatData.Pad[7] = '\0';
    local_168.StatData.Pad._0_4_ = uVar28;
    local_1e8 = FVar7;
    local_168.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar20,&local_168);
    FStatsTrace::Set(&local_1e8,(ulonglong)uVar28);
    if (pFVar20->ScopeCount == 0) {
      FThreadStats::Flush(pFVar20,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar20,false,false);
    }
  }
  FVar22 = StatPtr_STAT_MaxPacketMinusReserved;
  if (StatPtr_STAT_MaxPacketMinusReserved ==
      (FThreadSafeStaticStat<FStat_STAT_MaxPacketMinusReserved>)0x0) {
    pFVar18 = ::FName::FName(&local_88,"STAT_MaxPacketMinusReserved");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_MaxPacketMinusReserved>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MaxPacketMinusReserved,*pFVar18,
                        L"Max Packet Minus Reserved (bits)","STATGROUP_Packet","STATCAT_Advanced",
                        L"Packet",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar7 = *(FName *)FVar22;
  auVar29._0_4_ = uVar28 - uVar27;
  auVar29[4] = '\0';
  auVar29[5] = '\0';
  auVar29[6] = '\0';
  auVar29[7] = '\0';
  local_248 = FVar7;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    local_158.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
    local_1e0 = FVar7;
    local_158.StatData.Pad = auVar29;
    local_158.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar20,&local_158);
    FStatsTrace::Set(&local_1e0,(long64)auVar29);
    if (pFVar20->ScopeCount == 0) {
      FThreadStats::Flush(pFVar20,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar20,false,false);
    }
  }
  FVar23 = StatPtr_STAT_PacketReservedTotal;
  if (StatPtr_STAT_PacketReservedTotal == (FThreadSafeStaticStat<FStat_STAT_PacketReservedTotal>)0x0
     ) {
    pFVar18 = ::FName::FName(&local_80,"STAT_PacketReservedTotal");
    FVar23 = (FThreadSafeStaticStat<FStat_STAT_PacketReservedTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PacketReservedTotal,*pFVar18,
                        L"Reserved Total (bits)","STATGROUP_Packet","STATCAT_Advanced",L"Packet",
                        true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar7 = *(FName *)FVar23;
  local_248 = FVar7;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    local_1c0.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
    local_1c0.StatData.Pad[4] = '\0';
    local_1c0.StatData.Pad[5] = '\0';
    local_1c0.StatData.Pad[6] = '\0';
    local_1c0.StatData.Pad[7] = '\0';
    local_1c0.StatData.Pad._0_4_ = uVar27;
    local_1d8 = FVar7;
    local_1c0.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar20,&local_1c0);
    FStatsTrace::Set(&local_1d8,(ulonglong)uVar27);
    if (pFVar20->ScopeCount == 0) {
      FThreadStats::Flush(pFVar20,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar20,false,false);
    }
  }
  FVar24 = StatPtr_STAT_PacketReservedNetConnection;
  if (StatPtr_STAT_PacketReservedNetConnection ==
      (FThreadSafeStaticStat<FStat_STAT_PacketReservedNetConnection>)0x0) {
    pFVar18 = ::FName::FName(&local_70,"STAT_PacketReservedNetConnection");
    FVar24 = (FThreadSafeStaticStat<FStat_STAT_PacketReservedNetConnection>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PacketReservedNetConnection,
                        *pFVar18,L"Reserved NetConnection (bits)","STATGROUP_Packet",
                        "STATCAT_Advanced",L"Packet",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar7 = *(FName *)FVar24;
  local_248 = FVar7;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    local_1b0.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
    local_1b0.StatData.Pad[0] = '5';
    local_1b0.StatData.Pad[1] = '\x01';
    local_1b0.StatData.Pad[2] = '\0';
    local_1b0.StatData.Pad[3] = '\0';
    local_1b0.StatData.Pad[4] = '\0';
    local_1b0.StatData.Pad[5] = '\0';
    local_1b0.StatData.Pad[6] = '\0';
    local_1b0.StatData.Pad[7] = '\0';
    local_1d0 = FVar7;
    local_1b0.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar20,&local_1b0);
    FStatsTrace::Set(&local_1d0,0x135);
    if (pFVar20->ScopeCount == 0) {
      FThreadStats::Flush(pFVar20,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar20,false,false);
    }
  }
  FVar25 = StatPtr_STAT_PacketReservedPacketHandler;
  if (StatPtr_STAT_PacketReservedPacketHandler ==
      (FThreadSafeStaticStat<FStat_STAT_PacketReservedPacketHandler>)0x0) {
    pFVar18 = ::FName::FName(&local_78,"STAT_PacketReservedPacketHandler");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_PacketReservedPacketHandler>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PacketReservedPacketHandler,
                        *pFVar18,L"Reserved PacketHandler Total (bits)","STATGROUP_Packet",
                        "STATCAT_Advanced",L"Packet",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar7 = *(FName *)FVar25;
  iVar12 = this->MaxPacketHandlerBits;
  local_248 = FVar7;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    local_1a0.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
    local_218 = FVar7;
    local_1a0.StatData.Pad = (uchar  [8])(longlong)iVar12;
    local_1a0.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar20,&local_1a0);
    FStatsTrace::Set(&local_218,(longlong)iVar12);
    if (pFVar20->ScopeCount == 0) {
      FThreadStats::Flush(pFVar20,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar20,false,false);
    }
  }
  FMemScope::~FMemScope(&local_1c8);
  FLLMScope::~FLLMScope(local_228);
  return;
}

// InitLocalConnection @ 147fe00b0

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
UNetConnection::InitLocalConnection
          (UNetConnection *this,UNetDriver *param_1,FSocket *param_2,FURL *param_3,
          EConnectionState param_4,int param_5,int param_6)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\NetConnection.h"
             ,0x4c0,L"Pure virtual not implemented (%s)");
  return;
}

// InitRemoteConnection @ 147fe0240

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
UNetConnection::InitRemoteConnection
          (UNetConnection *this,UNetDriver *param_1,FSocket *param_2,FURL *param_3,
          FInternetAddr *param_4,EConnectionState param_5,int param_6,int param_7)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\NetConnection.h"
             ,0x4b3,L"Pure virtual not implemented (%s)");
  return;
}

// InitSendBuffer @ 147fe0280

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::InitSendBuffer(UNetConnection *this)

{
  code *pcVar1;
  bool bVar2;
  FBitWriter *pFVar3;
  longlong lVar4;
  FBitWriter local_c8;
  
  if (this->MaxPacket < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxPacket > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                       ,0x7f1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar4 = (longlong)(this->MaxPacket * 8 - this->MaxPacketHandlerBits);
  if (lVar4 == (this->SendBuffer).Max) {
    (**(code **)((this->SendBuffer)._padding_ + 0xc0))(&this->SendBuffer);
  }
  else {
    pFVar3 = FBitWriter::FBitWriter(&local_c8,lVar4,false);
    FBitWriter::operator=(&this->SendBuffer,pFVar3);
    FBitWriter::~FBitWriter(&local_c8);
  }
  (this->HeaderMarkForPacketInfo).Overflowed = false;
  (this->HeaderMarkForPacketInfo).Num = 0;
  this->NumPacketIdBits = 0;
  this->NumBunchBits = 0;
  this->NumAckBits = 0;
  this->NumPaddingBits = 0;
                    /* WARNING: Could not recover jumptable at 0x000147fe034a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f0))(this);
  return;
}

// InitSequence @ 147fe0360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::InitSequence(UNetConnection *this,int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  
  if ((((this->InReliable).ArrayNum < 1) || ((this->OutReliable).ArrayNum < 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InReliable.Num() > 0 && OutReliable.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0x2fd,L"InitChannelData must be called prior to InitSequence."), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->InPacketId != -1) {
    if (((((this->Driver).field0_0x0.DebugPtr)->ServerConnection).field0_0x0.DebugPtr ==
         (UNetConnection *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InPacketId == -1 || Driver->ServerConnection != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                           ,0x300,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (this->InPacketId != -1) {
      return;
    }
  }
  pTVar3 = CVarRandomizeSequence.Ref;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  if (0 < *(int *)((longlong)pTVar3->ShadowedValue + lVar5)) {
    iVar1 = (this->InReliable).ArrayNum;
    this->InPacketId = param_1 + -1;
    this->OutAckPacketId = param_2 + -1;
    this->LastNotifiedPacketId = param_2 + -1;
    this->OutPacketId = param_2;
    this->InitInReliable = param_1 & 0x3ff;
    this->InitOutReliable = param_2 & 0x3ff;
    TArray<int,TSizedDefaultAllocator<32>_>::Init(&this->InReliable,&this->InitInReliable,iVar1);
    TArray<int,TSizedDefaultAllocator<32>_>::Init
              (&this->OutReliable,&this->InitOutReliable,(this->OutReliable).ArrayNum);
    FNetPacketNotify::Init
              (&this->PacketNotify,
               (TSequenceNumber<14,unsigned_short>)((ushort)this->InPacketId & 0x3fff),
               (TSequenceNumber<14,unsigned_short>)((ushort)this->OutPacketId & 0x3fff));
    if (5 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  return;
}

// IsClientMsgTypeValid @ 147fe23b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UNetConnection::IsClientMsgTypeValid(UNetConnection *this,uchar param_1)

{
  longlong lVar1;
  FStaticBasicLogRecord *pFVar2;
  void *local_18 [3];
  
  if (this->ClientLoginState == LoggingIn) {
    if (param_1 == this->ExpectedClientLoginMsgType) {
      return true;
    }
    if ((byte)LogNet._0_1_ < 5) {
      return false;
    }
    lVar1 = (**(code **)(this->_padding_ + 0x2d0))(this,local_18,0);
    if (*(int *)(lVar1 + 8) == 0) {
      pFVar2 = &::LOG_Static;
    }
    else {
      pFVar2 = &::LOG_Static;
    }
  }
  else {
    if ((param_1 != '\0') && (param_1 != '\x05')) {
      return true;
    }
    if ((byte)LogNet._0_1_ < 5) {
      return false;
    }
    (**(code **)(this->_padding_ + 0x2d0))(this,local_18,0);
    pFVar2 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<5>(pFVar2,(FLogCategoryBase *)&LogNet);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return false;
}

// IsClosingOrClosed @ 147fe2470

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UNetConnection::IsClosingOrClosed(UNetConnection *this)

{
  if ((this->State != USOCK_Closing) && (this->State != USOCK_Closed)) {
    return false;
  }
  return true;
}

// IsEncryptionEnabled @ 147fe2760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UNetConnection::IsEncryptionEnabled(UNetConnection *this)

{
  PacketHandler *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FEncryptionComponent,1> local_18;
  
  this_00 = (this->Handler).Ptr;
  if (this_00 != (PacketHandler *)0x0) {
    PacketHandler::GetEncryptionComponent(this_00,&local_18);
    if (local_18.Object != (FEncryptionComponent *)0x0) {
      if ((local_18.Object == (FEncryptionComponent *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      uVar3 = (**(code **)(*(longlong *)local_18.Object + 0x98))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return (bool)uVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return false;
}

// IsNetReady @ 147fe2fe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall UNetConnection::IsNetReady(UNetConnection *this,bool param_1)

{
  byte bVar1;
  
  if ((this->bReplay == 0) && (param_1)) {
    this->QueuedBits = -(int)(this->SendBuffer).Num;
  }
  bVar1 = (**(code **)(this->_padding_ + 0x318))();
  return (int)bVar1;
}

// IsNetReady @ 147fe3020

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UNetConnection::IsNetReady(UNetConnection *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarDisableBandwithThrottling.Ref;
  if (this->bReplay != 0) {
    return true;
  }
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 4;
  }
  if (0 < *(int *)((longlong)pTVar1->ShadowedValue + lVar3)) {
    return true;
  }
  if ((this->NetworkCongestionControl).bIsSet == false) {
    return (longlong)this->QueuedBits + (this->SendBuffer).Num < 1;
  }
  bVar2 = FNetworkCongestionControl::IsReadyToSend
                    (&(this->NetworkCongestionControl).TypedValue,
                     ((this->Driver).field0_0x0.DebugPtr)->ElapsedTime);
  return bVar2;
}

// IsPacketSequenceWindowFull @ 147fe3190

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UNetConnection::IsPacketSequenceWindowFull(UNetConnection *this,uint param_1)

{
  ushort uVar1;
  
  uVar1 = (this->PacketNotify).OutSeq.Value - (this->PacketNotify).OutAckSeq.Value & 0x3fff;
  if ((((uVar1 == 0x100) || (0x1fff < (uVar1 - 0x100 & 0x3fff))) && (param_1 < 0x100)) &&
     ((uint)uVar1 <= 0x100 - param_1)) {
    return false;
  }
  return true;
}

// LowLevelDescribe @ 147fe42d0

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
UNetConnection::LowLevelDescribe(UNetConnection *this,FString *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\NetConnection.h"
             ,0x408,L"Pure virtual not implemented (%s)");
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// LowLevelGetRemoteAddress @ 147fe4350

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
UNetConnection::LowLevelGetRemoteAddress
          (UNetConnection *this,FString *__return_storage_ptr__,bool param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\NetConnection.h"
             ,0x405,L"Pure virtual not implemented (%s)");
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// LowLevelSend @ 147fe43c0

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
UNetConnection::LowLevelSend
          (UNetConnection *this,void *param_1,int param_2,FOutPacketTraits *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\NetConnection.h"
             ,0x416,L"Pure virtual not implemented (%s)");
  return;
}

// NotifyActorChannelCleanedUp @ 147fe4b40

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
UNetConnection::NotifyActorChannelCleanedUp
          (UNetConnection *this,UActorChannel *param_1,EChannelCloseReason param_2)

{
  if (this->ReplicationConnectionDriver != (UReplicationConnectionDriver *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147fe4b4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->ReplicationConnectionDriver + 0x2c0))();
    return;
  }
  return;
}

// NotifyActorDestroyed @ 147fe4b60

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

void __thiscall
UNetConnection::NotifyActorDestroyed(UNetConnection *this,AActor *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FNetworkObjectList *this_00;
  undefined1 auStack_118 [32];
  FWeakObjectPtr local_f8;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *local_f0;
  AActor *local_e8;
  code *local_e0;
  TWeakObjectPtr<UObject,FWeakObjectPtr> **local_d8;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_d0;
  TWeakObjectPtr<UObject,FWeakObjectPtr> local_b8 [16];
  TWeakObjectPtr<UObject,FWeakObjectPtr> *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (param_1 != (AActor *)0x0) {
    if ((this->Driver).field0_0x0.DebugPtr != (UNetDriver *)0x0) {
      local_f0 = local_b8;
      local_d8 = &local_f0;
      local_2c = 0x10;
      local_38 = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
      local_e0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UNetConnection::CleanupDormantReplicatorsForActor'::__l8::<lambda_1>,void,FObjectKey,FObjectKey,TSharedRef<FObjectReplicator,1>_const_&>
                 ::Call;
      local_30 = 0;
      UE::Net::Private::FDormantReplicatorHolder::ForEachDormantReplicatorOfActor
                (&this->DormantReplicatorSet,param_1,
                 (TFunctionRef<void___cdecl(FObjectKey,FObjectKey,TSharedRef<FObjectReplicator,1>_const_&)>
                  *)&local_e0);
      if (0 < local_30) {
        this_00 = UNetDriver::GetNetworkObjectList((this->Driver).field0_0x0.DebugPtr);
        local_d0.ArrayNum = local_30;
        local_d0.DataPtr = local_b8;
        if (local_38 != (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0) {
          local_d0.DataPtr = local_38;
        }
        if ((local_30 < 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_f8.ObjectIndex = 0;
        local_f8.ObjectSerialNumber = 0;
        local_e8 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_e8);
        FNetworkObjectList::RemoveMultipleSubObjectChannelReference
                  (this_00,(FObjectKey)local_f8,&local_d0,(UObject *)this);
      }
      if (local_38 != (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0) {
        FMemory::Free(local_38);
      }
    }
    UE::Net::Private::FDormantReplicatorHolder::CleanupAllReplicatorsOfActor
              (&this->DormantReplicatorSet,param_1);
  }
  UE::Net::Private::FDormantReplicatorHolder::ClearFlushedObjectsForActor
            (&this->DormantReplicatorSet,param_1);
  return;
}

// NotifyAnalyticsProvider @ 147fe4d20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::NotifyAnalyticsProvider(UNetConnection *this)

{
  PacketHandler *this_00;
  UNetDriver *pUVar1;
  TSharedPtr<FNetAnalyticsAggregator,1> local_28;
  TSharedPtr<IAnalyticsProvider,1> local_18;
  
  this_00 = (this->Handler).Ptr;
  if (this_00 != (PacketHandler *)0x0) {
    pUVar1 = (this->Driver).field0_0x0.DebugPtr;
    local_28.Object = (pUVar1->AnalyticsAggregator).Object;
    local_28.SharedReferenceCount.ReferenceController =
         (pUVar1->AnalyticsAggregator).SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar1 = (this->Driver).field0_0x0.DebugPtr;
    local_18.Object = (pUVar1->AnalyticsProvider).Object;
    local_18.SharedReferenceCount.ReferenceController =
         (pUVar1->AnalyticsProvider).SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    PacketHandler::NotifyAnalyticsProvider(this_00,&local_18,&local_28);
  }
  return;
}

// NotifyConnectionUpdated @ 147fe4da0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::NotifyConnectionUpdated(UNetConnection *this)

{
  AActor *pAVar1;
  FInternetAddr *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  FName local_res8;
  FString local_28;
  void *local_18 [2];
  
  if ((((this->ConnectionHandle).ParentConnectionId != 0) &&
      (pAVar1 = (this->OwningActor).field0_0x0.DebugPtr, pAVar1 != (AActor *)0x0)) &&
     ((this->RemoteAddr).Object != (FInternetAddr *)0x0)) {
    local_res8 = (FName)pAVar1->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    pwVar7 = L"";
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar6.Data = local_28.Data.AllocatorInstance.Data;
    }
    if ((this->RemoteAddr).Object == (FInternetAddr *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->RemoteAddr).Object;
    puVar5 = (undefined8 *)(**(code **)((longlong)*pFVar2 + 0x80))(pFVar2,local_18,1);
    if (*(int *)(puVar5 + 1) != 0) {
      pwVar7 = (wchar_t *)*puVar5;
    }
    FNetTrace::TraceConnectionUpdated(this->NetTraceId,1,pwVar7,(wchar_t *)FVar6.Data);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnStatelessHandshakeFailure @ 147fe4f60

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
UNetConnection::OnStatelessHandshakeFailure
          (UNetConnection *this,FStatelessHandshakeFailureInfo *param_1)

{
  StatelessConnectHandlerComponent *pSVar1;
  atomic<int> aVar2;
  bool bVar3;
  atomic<int> aVar4;
  StatelessConnectHandlerComponent *pSVar5;
  StatelessConnectHandlerComponent *pSVar6;
  
  if ((param_1->FailureReason == WrongVersion) &&
     (bVar3 = HandleReceiveNetUpgrade
                        (this,param_1->RemoteNetworkVersion,param_1->RemoteNetworkFeatures,
                         StatelessHandshake), bVar3)) {
    pSVar5 = (StatelessConnectHandlerComponent *)0x0;
    pSVar1 = (StatelessConnectHandlerComponent *)
             (this->StatelessConnectComponent).WeakReferenceCount.ReferenceController;
    pSVar6 = pSVar1;
    if (pSVar1 != (StatelessConnectHandlerComponent *)0x0) {
      aVar2 = *(atomic<int> *)&pSVar1->field_0x8;
      do {
        pSVar6 = pSVar5;
        if (aVar2 == (atomic<int>)0x0) goto LAB_147fe4fb1;
        LOCK();
        aVar4 = *(atomic<int> *)&pSVar1->field_0x8;
        bVar3 = aVar2 == aVar4;
        if (bVar3) {
          *(atomic<int> *)&pSVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar3);
      pSVar5 = (this->StatelessConnectComponent).Object;
      pSVar6 = pSVar1;
    }
LAB_147fe4fb1:
    (**(code **)(*(longlong *)&pSVar5->field_0x0 + 0x58))(pSVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar6);
  }
  return;
}

// PopLastStart @ 147fe5b30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall UNetConnection::PopLastStart(UNetConnection *this)

{
  if (this->OutTraceCollector != (FNetTraceCollector *)0x0) {
    FNetTrace::PopSendBunch(this->OutTraceCollector);
  }
  this->NumBunchBits =
       this->NumBunchBits + ((int)(this->LastStart).Num - (int)(this->SendBuffer).Num);
  FBitWriterMark::Pop(&this->LastStart,&this->SendBuffer);
  if ((GNetworkProfiler.bIsTrackingEnabled == false) &&
     (GNetworkProfiler.bShouldTrackingBeEnabled == false)) {
    return;
  }
  if (__CsvProfilerStat4381 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
    __CsvProfilerStat4381 = true;
  }
  FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
  FNetworkProfiler::PopSendBunch(&GNetworkProfiler,this);
  FCsvProfiler::EndExclusiveStat("NetworkProfiler");
  return;
}

// PostTickDispatch @ 147fe6290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::PostTickDispatch(UNetConnection *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  UNetDriver *pUVar4;
  FRPCDoSDetection *this_00;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res10;
  
  pUVar4 = (this->Driver).field0_0x0.DebugPtr;
  if ((pUVar4 == (UNetDriver *)0x0) ||
     ((pUVar4->ServerConnection).field0_0x0.DebugPtr != (UNetConnection *)0x0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (this->bInternalAck != 0) goto LAB_147fe6442;
  if (0 < (this->DelayedIncomingPackets).ArrayNum) {
    QueryPerformanceCounter(&local_res10);
    bVar2 = this->bIsReinjectingDelayedPackets;
    uVar10 = 0;
    dVar6 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    this->bIsReinjectingDelayedPackets = true;
    iVar3 = (this->DelayedIncomingPackets).ArrayNum;
    pFVar11 = (this->DelayedIncomingPackets).AllocatorInstance.Data;
    dVar6 = dVar6 + __real_4170000000000000;
    pFVar1 = pFVar11 + (longlong)iVar3 * 0x18;
    do {
      if ((this->DelayedIncomingPackets).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FDelayedIncomingPacket,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar11 == pFVar1) goto LAB_147fe638b;
      uVar9 = *(uint *)(pFVar11 + 0x10);
      if (uVar9 == 0) {
        if (dVar6 < *(double *)(pFVar11 + 8)) goto LAB_147fe638b;
      }
      else if (1 < uVar9) goto code_r0x000147fe6386;
      uVar10 = uVar10 + 1;
      (**(code **)(this->_padding_ + 0x3b8))(this,*(undefined8 *)pFVar11,0,1);
      pFVar11 = pFVar11 + 0x18;
    } while( true );
  }
  goto LAB_147fe6422;
code_r0x000147fe6386:
  *(uint *)(pFVar11 + 0x10) = uVar9 - 1;
LAB_147fe638b:
  uVar9 = 0;
  if ((int)uVar10 <= (this->DelayedIncomingPackets).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (uVar10 != 0) {
    TArray<FDelayedIncomingPacket,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (&this->DelayedIncomingPackets,0,uVar10);
  }
  this->bIsReinjectingDelayedPackets = bVar2;
LAB_147fe6422:
  FlushPacketOrderCache(this,true);
  FNetConnectionPacketAnalytics::Tick(&this->PacketAnalytics);
  this->OutFirstAckPacketId = -1;
LAB_147fe6442:
  this_00 = (this->RPCDoS).Ptr;
  if (((this_00 != (FRPCDoSDetection *)0x0) && (bVar7)) && (this->bReplay == 0)) {
    FRPCDoSDetection::PostTickDispatch(this_00);
  }
  return;
}

// PreTickDispatch @ 147fe64d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::PreTickDispatch(UNetConnection *this)

{
  double dVar1;
  UNetDriver *pUVar2;
  FRPCDoSDetection *this_00;
  FNetConnectionFaultRecovery *this_01;
  bool bVar3;
  
  if (this->bReplay == 0) {
    pUVar2 = (this->Driver).field0_0x0.DebugPtr;
    dVar1 = pUVar2->LastTickDispatchRealtime;
    if (((pUVar2->ServerConnection).field0_0x0.DebugPtr == (UNetConnection *)0x0) &&
       (this_00 = (this->RPCDoS).Ptr, this_00 != (FRPCDoSDetection *)0x0)) {
      FRPCDoSDetection::PreTickDispatch(this_00,dVar1);
    }
    this_01 = (this->FaultRecovery).Ptr;
    if ((this_01 != (FNetConnectionFaultRecovery *)0x0) &&
       (bVar3 = UE::Net::FNetConnectionFaultRecovery::DoesRequireTick(this_01), bVar3)) {
      UE::Net::FNetConnectionFaultRecovery::TickRealtime((this->FaultRecovery).Ptr,dVar1);
    }
  }
  return;
}

// PrepareWriteBitsToSendBuffer @ 147fe68e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

void __thiscall
UNetConnection::PrepareWriteBitsToSendBuffer(UNetConnection *this,int param_1,int param_2)

{
  PacketHandler *pPVar1;
  longlong lVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FNetTraceCollector *pFVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  int iVar10;
  FNetTraceCollector *pFVar11;
  long64 lVar12;
  void *local_18 [2];
  
  (**(code **)(this->_padding_ + 0x2f0))();
  pTVar4 = CVarRandomizeSequence.Ref;
  bVar5 = IsInParallelGameThread();
  pFVar11 = (FNetTraceCollector *)0x0;
  if (!bVar5) {
    bVar5 = IsInGameThread();
    pFVar8 = (FNetTraceCollector *)&DAT_00000004;
    if (!bVar5) goto LAB_147fe692f;
  }
  pFVar8 = pFVar11;
LAB_147fe692f:
  if (((0 < *(int *)((longlong)pTVar4->ShadowedValue + (longlong)pFVar8->NestingStack)) &&
      (pPVar1 = (this->Handler).Ptr, pPVar1 != (PacketHandler *)0x0)) &&
     (pPVar1->State != Initialized)) {
    (**(code **)(this->_padding_ + 0x2e0))(this,local_18);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Handler.IsValid() || Handler->IsFullyInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                       ,0x109c,
                       L"Attempted to write to send buffer before packet handler was fully initialized. Connection: %s"
                      );
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = (this->SendBuffer).Num;
  iVar10 = 0x135;
  if (0 < lVar2) {
    iVar10 = 1;
  }
  iVar10 = ((int)(this->SendBuffer).Max - iVar10) - (int)lVar2;
  if ((iVar10 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumberOfFreeBits >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0x1112,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iVar10 < param_1 + param_2) {
    (**(code **)(this->_padding_ + 0x308))(this,0);
  }
  if ((this->SendBuffer).Num == 0) {
    if ((GNetTraceRuntimeVerbosity == 0) || (GNetTraceRuntimeVerbosity == 0)) {
      lVar12 = 0;
      pFVar8 = pFVar11;
    }
    else {
      pFVar8 = FNetTrace::CreateTraceCollector();
      lVar12 = (this->SendBuffer).Num;
    }
    this->OutTraceCollector = pFVar8;
    if ((lVar12 == 0) && (this->bInternalAck == 0)) {
      uVar6 = 0xffffffff;
      if (GNetTraceRuntimeVerbosity != 0) {
        pFVar11 = pFVar8;
      }
      if (pFVar11 != (FNetTraceCollector *)0x0) {
        uVar6 = FNetTrace::BeginPacketContentEvent(pFVar11,NameId,0);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          PacketHeaderAndInfo = UE::Net::CreatePersistentNetDebugName(L"PacketHeaderAndInfo",0x13);
          _Init_thread_footer(&::_TSS0);
        }
        uVar7 = FNetTrace::TraceName(PacketHeaderAndInfo);
        FVar9 = (pFVar11->Events).AllocatorInstance.SecondaryData;
        if (FVar9 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar9 = (ForElementType<FNetTracePacketContentEvent>)&pFVar11->Events;
        }
        *(uint *)((longlong)FVar9 + (ulonglong)uVar6 * 0x10) = uVar7;
      }
      WritePacketHeader(this,&this->SendBuffer);
      WriteDummyPacketInfo(this,&this->SendBuffer);
      lVar12 = (this->SendBuffer).Num;
      this->NumPacketIdBits = this->NumPacketIdBits + 0xe;
      this->NumAckBits = this->NumAckBits + (int)lVar12 + -0xe;
      this->AllowMerge = false;
      if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
         (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
        if (__CsvProfilerStat4292 == false) {
          FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
          __CsvProfilerStat4292 = true;
        }
        FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
        FNetworkProfiler::TrackSendAck(&GNetworkProfiler,(ushort)this->NumAckBits,this);
        FCsvProfiler::EndExclusiveStat("NetworkProfiler");
      }
      (**(code **)(this->_padding_ + 0x2f0))(this);
      if (uVar6 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar11,uVar6,(uint)(this->SendBuffer).Num);
      }
    }
  }
  return;
}

// ProcessJitter @ 147fe8330

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::ProcessJitter(UNetConnection *this,uint param_1)

{
  int iVar1;
  int iVar2;
  undefined1 in_XMM1 [16];
  undefined1 auVar3 [16];
  
  if (param_1 < 0x3ff) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = this->LastReceiveRealtime;
    auVar3 = roundpd(in_XMM1,auVar3,1);
    iVar1 = (int)(longlong)((this->LastReceiveRealtime - auVar3._0_8_) * __real_408f400000000000) -
            param_1;
    iVar2 = iVar1 + 1000;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    iVar1 = iVar2 - this->PreviousJitterTimeDelta;
    this->PreviousJitterTimeDelta = iVar2;
    iVar2 = -iVar1;
    if (iVar2 < 0) {
      iVar2 = iVar1;
    }
    this->AverageJitterInMS =
         ((float)iVar2 - this->AverageJitterInMS) * __real_3d800000 + this->AverageJitterInMS;
  }
  return;
}

// ReadInput @ 147fe8a90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::ReadInput(UNetConnection *this,float param_1)

{
  return;
}

// ReadPacketInfo @ 147fe8aa0

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
UNetConnection::ReadPacketInfo(UNetConnection *this,FBitReader *param_1,bool param_2,Type param_3)

{
  int iVar1;
  FNetPing *this_00;
  double dVar2;
  TConsoleVariableData<int> *pTVar3;
  uchar uVar4;
  byte bVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_a8 [32];
  byte local_88 [8];
  FAckSample local_80;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (!param_2) {
    return (bool)(~(*(byte *)((longlong)&param_1->_padding_ + 1) >> 1) & 1);
  }
  uVar4 = FBitReader::ReadBit(param_1);
  dVar15 = 0.0;
  bVar5 = (**(code **)(((this->Driver).field0_0x0.DebugPtr)->_padding_ + 0x3f8))();
  if (bVar5 == 0) {
    dVar15 = 0.0;
    if (uVar4 == '\x01') {
      plVar8 = (longlong *)param_1->_padding_;
      if ((byte *)plVar8[1] < (byte *)*plVar8 + 1) {
        local_88[0] = bVar5;
        (**(code **)(param_1->_padding_ + 0x188))(param_1,local_88,1);
      }
      else {
        local_88[0] = *(byte *)*plVar8;
        *plVar8 = *plVar8 + 1;
      }
      dVar15 = (double)local_88[0] * __real_3f50624dd2f1a9fc;
    }
  }
  else {
    this->bLastHasServerFrameTime = uVar4 == '\x01';
  }
  if ((int)param_3 < 0xe) {
    plVar8 = (longlong *)param_1->_padding_;
    local_88[0] = 0;
    if ((byte *)plVar8[1] < (byte *)*plVar8 + 1) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_88,1);
    }
    else {
      local_88[0] = *(byte *)*plVar8;
      *plVar8 = *plVar8 + 1;
    }
  }
  pTVar3 = CVarPingUsePacketRecvTime.Ref;
  if ((param_1->_padding_ & 0x200) != 0) {
    return false;
  }
  if (this->OutFirstAckPacketId == -1) {
    return true;
  }
  lVar10 = 4;
  if (((this->LastOSReceiveTime).Timestamp.Ticks != 0) &&
     ((this->Driver).field0_0x0.DebugPtr != (UNetDriver *)0x0)) {
    bVar6 = IsInParallelGameThread();
    if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
      lVar7 = 0;
    }
    else {
      lVar7 = 4;
    }
    if (*(int *)((longlong)pTVar3->ShadowedValue + lVar7) != 0) {
      if (this->bIsOSReceiveTimeLocal == false) {
        plVar8 = (longlong *)
                 (**(code **)(((this->Driver).field0_0x0.DebugPtr)->_padding_ + 0x408))();
        if (plVar8 == (longlong *)0x0) goto LAB_147fe8c80;
        dVar12 = (double)(**(code **)(*plVar8 + 0x100))(plVar8,&this->LastOSReceiveTime,0);
      }
      else {
        dVar12 = (double)(this->LastOSReceiveTime).Timestamp.Ticks * __real_3e7ad7f29abcaf48;
      }
      if (dVar12 != 0.0) goto LAB_147fe8c8d;
    }
  }
LAB_147fe8c80:
  dVar12 = ((this->Driver).field0_0x0.DebugPtr)->LastTickDispatchRealtime;
LAB_147fe8c8d:
  pTVar3 = CVarPingExcludeFrameTime.Ref;
  bVar6 = IsInParallelGameThread();
  if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
    lVar10 = 0;
  }
  iVar1 = *(int *)((longlong)pTVar3->ShadowedValue + lVar10);
  uVar11 = this->OutFirstAckPacketId;
  if ((int)uVar11 <= this->OutAckPacketId) {
    do {
      uVar9 = uVar11 & 0xff;
      if (this->OutLagPacketId[uVar9] != uVar11) {
        return true;
      }
      this->OutLagPacketId[uVar9] = -1;
      dVar2 = dVar12 - this->OutLagTime[uVar9];
      dVar13 = dVar15;
      if (iVar1 == 0) {
        dVar13 = 0.0;
      }
      this->LagCount = this->LagCount + 1;
      plVar8 = (longlong *)this->_padding_;
      dVar13 = dVar2 - dVar13;
      if (dVar13 <= 0.0) {
        dVar13 = 0.0;
      }
      this->LagAcc = dVar13 + this->LagAcc;
      dVar14 = dVar13;
      if (dVar13 <= this->RawPingInSeconds) {
        dVar14 = this->RawPingInSeconds;
      }
      this->RawPingInSeconds = dVar14;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0xeb0))(plVar8,(float)dVar13);
      }
      this_00 = (this->NetPing).Ptr;
      if (this_00 != (FNetPing *)0x0) {
        UE::Net::FNetPing::UpdatePing(this_00,RoundTrip,dVar12,dVar13);
        if (dVar2 <= 0.0) {
          dVar2 = 0.0;
        }
        UE::Net::FNetPing::UpdatePing((this->NetPing).Ptr,RoundTripExclFrame,dVar12,dVar2);
      }
      if ((this->NetworkCongestionControl).bIsSet != false) {
        local_80.Ack = this->OutAckPacketId;
        local_80.Timestamp = dVar12;
        FNetworkCongestionControl::OnAck(&(this->NetworkCongestionControl).TypedValue,&local_80);
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 <= this->OutAckPacketId);
  }
  this->OutFirstAckPacketId = -1;
  return true;
}

// ReceivedAck @ 147fe8e20

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
UNetConnection::ReceivedAck
          (UNetConnection *this,int param_1,
          TArray<FChannelCloseInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  UPackageMap *pUVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_Stat_NetConnectionReceivedAcks> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FStatMessage local_48;
  
  if (5 < (byte)LogNetTraffic._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
  }
  FVar11.Value = 0;
  FVar7 = StatPtr_Stat_NetConnectionReceivedAcks;
  if (StatPtr_Stat_NetConnectionReceivedAcks ==
      (FThreadSafeStaticStat<FStat_Stat_NetConnectionReceivedAcks>)0x0) {
    pFVar6 = ::FName::FName(&local_res18,"Stat_NetConnectionReceivedAcks");
    FVar7 = (FThreadSafeStaticStat<FStat_Stat_NetConnectionReceivedAcks>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_Stat_NetConnectionReceivedAcks,*pFVar6,
                       L"NetConnection NetConnectionReceivedAcks","STATGROUP_Net","STATCAT_Advanced"
                       ,L"Net",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                   ,0xa7d);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_147fe8fac;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_147fe8fac:
  this->OutAckPacketId = param_1;
  if ((this->OutFirstAckPacketId == -1) &&
     (this->OutFirstAckPacketId = param_1, this->InPacketsThisFrame == 1)) {
    this->RawPingInSeconds = 0.0;
  }
  this->LastRecvAckTimestamp = ((this->Driver).field0_0x0.DebugPtr)->ElapsedTime;
  FNetConnectionPacketAnalytics::TrackAck(&this->PacketAnalytics,param_1);
  pUVar2 = (this->PackageMap).field0_0x0.DebugPtr;
  if (pUVar2 != (UPackageMap *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x2e0))(pUVar2,param_1);
  }
  local_48.StatData.Pad = (uchar  [8])this;
  local_48.NameAndInfo = (FStatNameAndInfo)param_2;
  FChannelRecordImpl::
  ConsumeChannelRecordsForPacket<_UNetConnection::ReceivedAck_::__l2::<lambda_1>_&>
            (&this->ChannelRecord,param_1,(<lambda_1> *)&local_48);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo =
           (FStatNameAndInfo)
           (CONCAT44(FVar10.Number,FVar11.Value) & 0xffff6fffffffffff | 0x600000000000);
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
  return;
}

// ReceivedNak @ 147fe9120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::ReceivedNak(UNetConnection *this,int param_1)

{
  int *piVar1;
  uint *puVar2;
  UPackageMap *pUVar3;
  UNetDriver *pUVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_Stat_NetConnectionReceivedNak> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_38;
  
  if (5 < (byte)LogNetTraffic._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
  }
  if (GNetTraceRuntimeVerbosity != 0) {
    FNetTrace::TracePacketDropped
              (this->NetTraceId,(this->ConnectionHandle).ParentConnectionId,param_1,Outgoing);
  }
  FVar11.Value = 0;
  FVar9 = StatPtr_Stat_NetConnectionReceivedNak;
  if (StatPtr_Stat_NetConnectionReceivedNak ==
      (FThreadSafeStaticStat<FStat_Stat_NetConnectionReceivedNak>)0x0) {
    pFVar8 = ::FName::FName(local_res18,"Stat_NetConnectionReceivedNak");
    FVar9 = (FThreadSafeStaticStat<FStat_Stat_NetConnectionReceivedNak>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_Stat_NetConnectionReceivedNak,*pFVar8,
                       L"NetConnection ReceivedNak","STATGROUP_Net","STATCAT_Advanced",L"Net",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  LVar10 = *(LARGE_INTEGER *)FVar9;
  bVar5 = false;
  bVar7 = false;
  if ((LVar10.s.LowPart != 0) || (LVar10.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                   ,0xac5);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar10;
      FThreadStats::AddMessage((FName)LVar10.s,CycleScopeStart);
      bVar6 = true;
      FVar11.Value = LVar10.s.LowPart;
      goto LAB_147fe92be;
    }
  }
  bVar6 = false;
  LVar10._0_4_ = 0;
  LVar10._4_4_ = 0;
LAB_147fe92be:
  FNetConnectionPacketAnalytics::TrackNak(&this->PacketAnalytics,param_1);
  pUVar3 = (this->PackageMap).field0_0x0.DebugPtr;
  (**(code **)(pUVar3->_padding_ + 0x2d8))(pUVar3,param_1);
  local_res8 = (LARGE_INTEGER)this;
  FChannelRecordImpl::
  ConsumeChannelRecordsForPacket<_UNetConnection::ReceivedNak_::__l2::<lambda_1>_&>
            (&this->ChannelRecord,param_1,(<lambda_1> *)&local_res8.s);
  pUVar4 = (this->Driver).field0_0x0.DebugPtr;
  this->OutPacketsLost = this->OutPacketsLost + 1;
  this->OutTotalPacketsLost = this->OutTotalPacketsLost + 1;
  puVar2 = &pUVar4->OutPacketsLost;
  *puVar2 = *puVar2 + 1;
  puVar2 = &((this->Driver).field0_0x0.DebugPtr)->OutTotalPacketsLost;
  *puVar2 = *puVar2 + 1;
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && ((FName)LVar10.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = LVar10.s.HighPart & 0xffff6fffU | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
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
  return;
}

// ReceivedPacket @ 147fe9410

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

void __thiscall
UNetConnection::ReceivedPacket(UNetConnection *this,FBitReader *param_1,bool param_2,bool param_3)

{
  uint *puVar1;
  ulong64 *puVar2;
  int *piVar3;
  int *piVar4;
  ForElementType<FChannelCloseInfo> FVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  ushort uVar8;
  ushort uVar9;
  long64 lVar10;
  FRPCDoSDetection *pFVar11;
  UNetConnection *pUVar12;
  UChannel *this_00;
  UNetDriver *pUVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  code *pcVar16;
  double dVar17;
  long64 lVar18;
  double dVar19;
  TConsoleVariableData<int> *pTVar20;
  TConsoleVariableData<int> *pTVar21;
  bool bVar22;
  uchar uVar23;
  Type TVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  FNetTraceCollector *pFVar30;
  TCircularBuffer<TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_>_> *pTVar31;
  FBitReader *pFVar32;
  FNetTraceCollector *pFVar33;
  TSequenceNumber<14,unsigned_short> TVar34;
  ForElementType<FChannelCloseInfo> FVar35;
  uint uVar36;
  bool bVar37;
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auStackY_188 [32];
  char local_158;
  char local_157;
  char local_156;
  bool local_155;
  char local_154;
  undefined1 local_153;
  char local_152;
  uint local_150;
  Type local_14c;
  uint local_148 [2];
  FBitReader *local_140;
  undefined8 local_138;
  double local_130;
  TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_> local_128;
  LARGE_INTEGER local_120;
  <lambda_2> local_118;
  double *local_100;
  UNetConnection *local_f8;
  undefined1 *local_f0;
  FNotificationHeader local_e8;
  TArray<FChannelCloseInfo,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_152 = param_3;
  local_140 = param_1;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UNetConnection_ReceivedPacket");
  bVar37 = -1 < CpuChannel->Enabled;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3147,"UNetConnection_ReceivedPacket",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
               ,0xc4b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3147);
  }
  (**(code **)(this->_padding_ + 0x300))(this);
  if ((param_1->_padding_ & 0x200) != 0) {
    `UNetConnection::ReceivedPacket'::__l5::<lambda_1>::operator()(&local_158);
    goto LAB_147fea22a;
  }
  QueryPerformanceCounter(&local_120);
  dVar17 = (double)local_120.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  if (((this->bInternalAck == 0) && (this->bIsReinjectingDelayedPackets == false)) &&
     (bVar22 = CheckIncomingPacketEmulation(this,dVar17,param_1), bVar22)) goto LAB_147fea22a;
  lVar10 = param_1->Pos;
  (**(code **)(this->_padding_ + 0x2f0))(this);
  dVar19 = __real_408f400000000000;
  if (!param_2) {
    dVar39 = (dVar17 - this->LastReceiveRealtime) * __real_408f400000000000;
    FHistogram::AddMeasurement(&this->NetConnectionHistogram,dVar39,dVar39);
    this->LastReceiveTime = ((this->Driver).field0_0x0.DebugPtr)->ElapsedTime;
    this->LastReceiveRealtime = dVar17;
  }
  pFVar33 = (FNetTraceCollector *)0x0;
  local_b8.AllocatorInstance.SecondaryData = (ForElementType<FChannelCloseInfo>)0x0;
  iVar27 = 0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 8;
  TVar24 = (**(code **)(param_1->_padding_ + 0x48))(param_1);
  local_150 = this->InPacketId;
  local_14c = TVar24;
  if (this->bInternalAck == 0) {
    local_e8.Seq.Value = 0;
    local_e8.AckedSeq.Value = 0;
    local_e8.History.Storage[0] = 0;
    local_e8.History.Storage[1] = 0;
    local_e8.History.Storage[2] = 0;
    local_e8.History.Storage[3] = 0;
    local_e8.History.Storage[4] = 0;
    local_e8.History.Storage[5] = 0;
    local_e8.History.Storage[6] = 0;
    local_e8.History.Storage[7] = 0;
    bVar22 = FNetPacketNotify::ReadHeader(&this->PacketNotify,&local_e8,param_1);
    if (bVar22) {
      local_155 = true;
      if (0xd < (int)TVar24) {
        uVar23 = FBitReader::ReadBit(param_1);
        local_155 = uVar23 == '\x01';
        if (local_155) {
          lVar18 = param_1->Pos;
          local_148[0] = 0;
          (**(code **)(param_1->_padding_ + 0x198))(param_1,local_148,0x400);
          dVar39 = LastJitterLogTime;
          if (((param_1->Pos - (longlong)(int)lVar18 != 10) &&
              (__real_4014000000000000 < dVar17 - LastJitterLogTime)) &&
             (dVar39 = dVar17, 2 < (byte)LogNet._0_1_)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          }
          LastJitterLogTime = dVar39;
          if ((!param_2) && (local_148[0] < 0x3ff)) {
            auVar38._8_8_ = 0;
            auVar38._0_8_ = this->LastReceiveRealtime;
            auVar38 = roundpd(auVar38,auVar38,1);
            iVar25 = (int)(longlong)((this->LastReceiveRealtime - auVar38._0_8_) * dVar19) -
                     local_148[0];
            iVar26 = iVar25 + 1000;
            if (-1 < iVar25) {
              iVar26 = iVar25;
            }
            iVar25 = iVar26 - this->PreviousJitterTimeDelta;
            this->PreviousJitterTimeDelta = iVar26;
            iVar26 = -iVar25;
            if (iVar26 < 0) {
              iVar26 = iVar25;
            }
            this->AverageJitterInMS =
                 ((float)iVar26 - this->AverageJitterInMS) * __real_3d800000 +
                 this->AverageJitterInMS;
          }
        }
      }
      pTVar20 = CVarNetPacketOrderMaxMissingPackets.Ref;
      uVar8 = (this->PacketNotify).InSeq.Value;
      if (((((local_e8.Seq.Value == uVar8) ||
            (uVar28 = (local_e8._40_4_ & 0xffff) - (uint)uVar8, 0x1fff < (uVar28 & 0x3fff))) ||
           (0x1fff < (local_e8.AckedSeq.Value - (this->PacketNotify).OutAckSeq.Value & 0x3fff))) ||
          ((uVar8 = (this->PacketNotify).OutSeq.Value, uVar8 == local_e8.AckedSeq.Value ||
           (0x1fff < (uVar8 - local_e8.AckedSeq.Value & 0x3fff))))) ||
         (iVar26 = (int)(uVar28 * 0x40000) >> 0x12, iVar26 < 1)) {
        this->TotalOutOfOrderPacketsLost = this->TotalOutOfOrderPacketsLost + 1;
        puVar2 = &(this->AnalyticsVars).OutOfOrderPacketsLostCount;
        *puVar2 = *puVar2 + 1;
        piVar3 = &((this->Driver).field0_0x0.DebugPtr)->TotalOutOfOrderPacketsLost;
        *piVar3 = *piVar3 + 1;
        pTVar20 = CVarNetDoPacketOrderCorrection.Ref;
        if ((this->PacketOrderCache).bIsSet != false) goto LAB_147fea1f4;
        bVar22 = IsInParallelGameThread();
        if (bVar22) {
LAB_147fea0a6:
          pFVar30 = pFVar33;
        }
        else {
          bVar22 = IsInGameThread();
          pFVar30 = (FNetTraceCollector *)&DAT_00000004;
          if (bVar22) goto LAB_147fea0a6;
        }
        pTVar21 = CVarNetPacketOrderCorrectionEnableThreshold.Ref;
        if (*(int *)((longlong)pFVar30->NestingStack + (longlong)pTVar20->ShadowedValue) == 0)
        goto LAB_147fea1f4;
        bVar22 = IsInParallelGameThread();
        if (bVar22) {
LAB_147fea0cf:
          pFVar30 = pFVar33;
        }
        else {
          bVar22 = IsInGameThread();
          pFVar30 = (FNetTraceCollector *)&DAT_00000004;
          if (bVar22) goto LAB_147fea0cf;
        }
        if (*(int *)((longlong)pFVar30->NestingStack + (longlong)pTVar21->ShadowedValue) <=
            this->TotalOutOfOrderPacketsLost) {
          if (5 < (byte)LogNet._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          }
          pTVar20 = CVarNetPacketOrderMaxCachedPackets.Ref;
          bVar22 = IsInParallelGameThread();
          if ((bVar22) ||
             (bVar22 = IsInGameThread(), pFVar30 = (FNetTraceCollector *)&DAT_00000004, bVar22)) {
            pFVar30 = pFVar33;
          }
          iVar27 = *(int *)((longlong)pTVar20->ShadowedValue + (longlong)pFVar30->NestingStack);
          iVar26 = 1;
          if (iVar27 != 0) {
            iVar26 = iVar27;
          }
          uVar7 = (ulonglong)(iVar26 - 1) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar27 = 1 << ((byte)lVar15 & 0x1f);
          if ((this->PacketOrderCache).bIsSet != false) {
            DestructItems<TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_>,int>
                      ((TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_> *)
                       (this->PacketOrderCache).TypedValue.Elements.AllocatorInstance.Data,
                       (this->PacketOrderCache).TypedValue.Elements.ArrayNum);
            pFVar6 = (this->PacketOrderCache).TypedValue.Elements.AllocatorInstance.Data;
            if (pFVar6 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar6);
            }
          }
          piVar3 = &(this->PacketOrderCache).TypedValue.Elements.ArrayMax;
          (this->PacketOrderCache).TypedValue.Elements.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          piVar4 = &(this->PacketOrderCache).TypedValue.Elements.ArrayNum;
          *piVar3 = 0;
          *piVar4 = 0;
          iVar26 = 1;
          if (iVar27 != 0) {
            iVar26 = iVar27;
          }
          uVar7 = (ulonglong)(iVar26 - 1) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar26 = 1 << ((byte)lVar15 & 0x1f);
          iVar27 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,iVar26,
                              &(this->PacketOrderCache).TypedValue.Elements.AllocatorInstance,piVar4
                              ,piVar3);
          memset((this->PacketOrderCache).TypedValue.Elements.AllocatorInstance.Data +
                 (longlong)iVar27 * 8,0,(longlong)iVar26 << 3);
          (this->PacketOrderCache).TypedValue.IndexMask =
               (this->PacketOrderCache).TypedValue.Elements.ArrayNum - 1;
          (this->PacketOrderCache).bIsSet = true;
        }
      }
      else {
        iVar25 = iVar27;
        if ((this->bFlushingPacketOrderCache == false) && ((this->PacketOrderCache).bIsSet != false)
           ) {
          if (this->PacketOrderCacheCount == 0) {
            local_158 = '\x01';
            goto LAB_147fe982f;
          }
          local_158 = '\0';
          if (this->PacketOrderCacheCount < 1) goto LAB_147fe982f;
          local_156 = '\x01';
        }
        else {
          local_158 = '\0';
LAB_147fe982f:
          local_156 = '\0';
          if (local_158 != '\0') {
            bVar22 = IsInParallelGameThread();
            if (bVar22) {
LAB_147fe9856:
              pFVar30 = pFVar33;
            }
            else {
              bVar22 = IsInGameThread();
              pFVar30 = (FNetTraceCollector *)&DAT_00000004;
              if (bVar22) goto LAB_147fe9856;
            }
            iVar25 = *(int *)((longlong)pFVar30->NestingStack + (longlong)pTVar20->ShadowedValue);
          }
        }
        uVar28 = iVar26 - 1;
        if ((local_156 == '\0') &&
           (((local_158 == '\0' || ((int)uVar28 < 1)) || (iVar25 < (int)uVar28)))) {
          uVar8 = (this->PacketNotify).InSeq.Value;
          local_118.Header = &local_e8;
          local_118.ChannelsToClose = &local_b8;
          local_118.__this = this;
          if ((((local_e8.Seq.Value != uVar8) &&
               (uVar36 = (uint)local_e8.Seq.Value - (uint)uVar8, (uVar36 & 0x3fff) < 0x2000)) &&
              ((local_e8.AckedSeq.Value - (this->PacketNotify).OutAckSeq.Value & 0x3fff) < 0x2000))
             && (((uVar8 = (this->PacketNotify).OutSeq.Value, uVar8 != local_e8.AckedSeq.Value &&
                  ((uVar8 - local_e8.AckedSeq.Value & 0x3fff) < 0x2000)) &&
                 (iVar25 = (int)(uVar36 * 0x40000) >> 0x12, 0 < iVar25)))) {
            if (5 < (byte)LogNetTraffic._0_1_) {
              UE::Logging::Private::BasicLog<6>
                        ((FStaticBasicLogRecord *)&PTR_u_FNetPacketNotif_1519d2fb8,
                         (FLogCategoryBase *)&LogNetTraffic);
            }
            FNetPacketNotify::
            ProcessReceivedAcks<_UNetConnection::ReceivedPacket_::__l73::<lambda_2>_&>
                      (&this->PacketNotify,&local_e8,&local_118);
            iVar27 = FNetPacketNotify::InternalUpdate(&this->PacketNotify,&local_e8,iVar25);
          }
          uVar8 = (this->PacketNotify).OutAckSeq.Value;
          uVar9 = (this->PacketNotify).WaitingForFlushSeqAck.Value;
          if ((uVar9 == uVar8) || (0x1fff < (uVar9 - uVar8 & 0x3fff))) {
            pUVar13 = (this->Driver).field0_0x0.DebugPtr;
            this->InPacketsLost = this->InPacketsLost + uVar28;
            this->InTotalPacketsLost = this->InTotalPacketsLost + uVar28;
            puVar1 = &pUVar13->InPacketsLost;
            *puVar1 = *puVar1 + uVar28;
            puVar1 = &((this->Driver).field0_0x0.DebugPtr)->InTotalPacketsLost;
            *puVar1 = *puVar1 + uVar28;
            iVar26 = this->InPacketId + iVar26;
            this->InPacketId = iVar26;
            if ((((ushort)iVar26 & 0x3fff) != local_e8.Seq.Value) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("FNetPacketNotify::SequenceNumberT(InPacketId).Get() == Header.Seq.Get()"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                                    ,0xd17,L""), bVar22)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            FNetConnectionPacketAnalytics::TrackInPacket
                      (&this->PacketAnalytics,this->InPacketId,uVar28);
            param_1 = local_140;
            bVar22 = ReadPacketInfo(this,local_140,local_155,local_14c);
            if (bVar22) goto LAB_147fe95dc;
            if (2 < (byte)LogNet._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        ((FStaticBasicLogRecord *)&PTR_u_Failed_to_read__1519ce4c0,
                         (FLogCategoryBase *)&LogNet);
            }
            HandleNetResultOrClose(this,ReadHeaderExtraFail);
          }
          else {
            this->HasDirtyAcks = this->HasDirtyAcks + 1;
            this->InPacketId = local_150 + iVar27;
          }
        }
        else {
          pTVar31 = TOptional<TCircularBuffer<TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_>_>_>
                    ::operator->(&this->PacketOrderCache);
          uVar36 = this->PacketOrderCacheStartIdx;
          local_14c = (pTVar31->Elements).ArrayNum;
          uVar29 = local_14c - Initial;
          local_150 = uVar28;
          if ((int)uVar29 <= (int)uVar28) {
            uVar28 = uVar29;
            local_150 = uVar29;
          }
          for (; 0 < (int)uVar28; uVar28 = uVar28 - 1) {
            if (((this->PacketOrderCache).bIsSet == false) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x1bd,
                                    L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                   ), bVar22)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            uVar36 = uVar36 + 1 & (this->PacketOrderCache).TypedValue.IndexMask;
          }
          if (((this->PacketOrderCache).bIsSet == false) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar22)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          uVar36 = uVar36 & (this->PacketOrderCache).TypedValue.IndexMask;
          uVar28 = 0;
          if ((int)uVar36 < (this->PacketOrderCache).TypedValue.Elements.ArrayNum) {
            uVar28 = ~uVar36 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pFVar14 = (this->PacketOrderCache).TypedValue.Elements.AllocatorInstance.Data;
          pFVar6 = pFVar14 + (longlong)(int)uVar36 * 8;
          if (*(longlong *)(pFVar14 + (longlong)(int)uVar36 * 8) == 0) {
            if (6 < (byte)LogNet._0_1_) {
              UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            }
            pFVar32 = ::operator_new(0xb0);
            if (pFVar32 != (FBitReader *)0x0) {
              pFVar33 = (FNetTraceCollector *)FBitReader::FBitReader(pFVar32,local_140);
            }
            local_128.Ptr = (FBitReader *)pFVar33;
            TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_>::operator=
                      ((TUniquePtr<FBitReader,TDefaultDelete<FBitReader>_> *)pFVar6,&local_128);
            if ((FNetTraceCollector *)local_128.Ptr != (FNetTraceCollector *)0x0) {
              (**(code **)(local_128.Ptr)->_padding_)(local_128.Ptr,1);
            }
            puVar2 = &(this->AnalyticsVars).OutOfOrderPacketsRecoveredCount;
            *puVar2 = *puVar2 + 1;
            pUVar13 = (this->Driver).field0_0x0.DebugPtr;
            this->PacketOrderCacheCount = this->PacketOrderCacheCount + 1;
            this->TotalOutOfOrderPacketsRecovered = this->TotalOutOfOrderPacketsRecovered + 1;
            piVar3 = &pUVar13->TotalOutOfOrderPacketsRecovered;
            *piVar3 = *piVar3 + 1;
            (*(FBitReader **)&pFVar6->field_0x0)->Pos = lVar10;
          }
          else {
            puVar2 = &(this->AnalyticsVars).OutOfOrderPacketsDuplicateCount;
            *puVar2 = *puVar2 + 1;
            pUVar13 = (this->Driver).field0_0x0.DebugPtr;
            this->TotalOutOfOrderPacketsDuplicate = this->TotalOutOfOrderPacketsDuplicate + 1;
            piVar3 = &pUVar13->TotalOutOfOrderPacketsDuplicate;
            *piVar3 = *piVar3 + 1;
          }
        }
      }
    }
    else {
      if (2 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      HandleNetResultOrClose(this,ReadHeaderFail);
    }
  }
  else {
    this->InPacketId = local_150 + 1;
LAB_147fe95dc:
    if (GNetTraceRuntimeVerbosity == 0) {
      this->InTraceCollector = (FNetTraceCollector *)0x0;
    }
    else {
      pFVar30 = pFVar33;
      if (GNetTraceRuntimeVerbosity != 0) {
        pFVar30 = FNetTrace::CreateTraceCollector();
      }
      this->InTraceCollector = pFVar30;
      if (GNetTraceRuntimeVerbosity != 0) {
        pFVar33 = pFVar30;
      }
      if (pFVar33 != (FNetTraceCollector *)0x0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          NetTraceNameId_3400 = UE::Net::CreatePersistentNetDebugName(L"PacketHeaderAndInfo",0x13);
          _Init_thread_footer(&::_TSS0);
        }
        lVar18 = param_1->Pos;
        uVar28 = FNetTrace::TraceName(NetTraceNameId_3400);
        FNetTrace::TracePacketContentEvent
                  (this->InTraceCollector,uVar28,(uint)lVar10,(uint)lVar18,1);
      }
    }
    (**(code **)(((this->Driver).field0_0x0.DebugPtr)->_padding_ + 0x440))();
    pFVar11 = (this->RPCDoS).Ptr;
    local_157 = '\0';
    local_154 = '\0';
    pUVar12 = (((this->Driver).field0_0x0.DebugPtr)->ServerConnection).field0_0x0.DebugPtr;
    local_153 = pUVar12 == (UNetConnection *)0x0;
    local_130 = 0.0;
    if (((pFVar11 != (FRPCDoSDetection *)0x0) && (pUVar12 == (UNetConnection *)0x0)) &&
       (this->bReplay == 0)) {
      if (UE::Net::GRPCDoSScopeDebugging != 0) {
        if (((char)(pFVar11->TickScopePrivate)._padding_ == '\0') &&
           (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_1192164650855169546>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                                ,0x1f6,"GRPCDoSScopeDebugging == 0 || TickScopePrivate.IsActive()"),
           bVar22)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        if (UE::Net::GRPCDoSScopeDebugging != 0) {
          if (((pFVar11->SequentialRPCScopePrivate)._padding_ != '\0') &&
             (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_1192164650855169545>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                                  ,0x1f7,
                                  "GRPCDoSScopeDebugging == 0 || !SequentialRPCScopePrivate.IsActive()"
                                 ), bVar22)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          if (((UE::Net::GRPCDoSScopeDebugging != 0) &&
              ((pFVar11->PacketScopePrivate)._padding_ == '\x01')) &&
             (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_1192164650855169127>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                                  ,0x399,"GRPCDoSScopeDebugging == 0 || bScopeActive != bInVal"),
             bVar22)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
        }
      }
      (pFVar11->PacketScopePrivate)._padding_ = '\x01';
      (pFVar11->PacketScopePrivate).bPacketContainsRPC = false;
      (pFVar11->PacketScopePrivate).ReceivedPacketStartTime = dVar17;
      (pFVar11->SequentialRPCScopePrivate).PostReceivedRPCName.ComparisonIndex = 0;
      (pFVar11->SequentialRPCScopePrivate).PostReceivedRPCName.Number = 0;
      (pFVar11->SequentialRPCScopePrivate).PostReceivedRPCTracking = (FRPCTrackingInfo *)0x0;
      (pFVar11->SequentialRPCScopePrivate).PostReceivedRPCCounter = (FRPCDoSCounters *)0x0;
      (pFVar11->SequentialRPCScopePrivate).PostReceivedRPCBlockCount = 0;
      (pFVar11->SequentialRPCScopePrivate).LastReceivedRPCTimeCache = 0.0;
      (pFVar11->SequentialRPCScopePrivate).bReceivedPacketRPCUnique = true;
      (pFVar11->SequentialRPCScopePrivate).ReceivedPacketRPCCount = 0;
      (pFVar11->SequentialRPCScopePrivate).LightweightRPCTracking.Count = '\0';
      local_138 = 0;
    }
    local_100 = &local_130;
    local_f0 = &local_153;
    local_f8 = this;
    if (local_152 != '\0') {
      (**(code **)(this->_padding_ + 0x3c0))(this,param_1,this->InPacketId,&local_157);
    }
    iVar27 = local_b8.ArrayNum;
    FVar35 = (ForElementType<FChannelCloseInfo>)&local_b8;
    if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<FChannelCloseInfo>)0x0) {
      FVar35 = local_b8.AllocatorInstance.SecondaryData;
    }
    FVar5 = (ForElementType<FChannelCloseInfo>)((longlong)FVar35 + (longlong)local_b8.ArrayNum * 8);
    while( true ) {
      if (local_b8.ArrayNum != iVar27) {
        local_156 = '\0';
        `TCheckedPointerIterator<FChannelCloseInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_156);
      }
      if (FVar35 == FVar5) break;
      uVar28 = *(uint *)FVar35;
      uVar36 = 0;
      if ((int)uVar28 < (this->Channels).ArrayNum) {
        uVar36 = ~uVar28 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      this_00 = *(UChannel **)((this->Channels).AllocatorInstance.Data + (longlong)(int)uVar28 * 8);
      if (this_00 != (UChannel *)0x0) {
        UChannel::ConditionalCleanUp(this_00,false,*(uchar *)((longlong)FVar35 + 4));
      }
      FVar35 = (ForElementType<FChannelCloseInfo>)((longlong)FVar35 + 8);
    }
    (**(code **)(this->_padding_ + 0x2f0))(this);
    ScopeExitSupport::TScopeGuard<`UNetConnection::ReceivedPacket'::__l164::<lambda_3>_>::
    ~TScopeGuard<_UNetConnection::ReceivedPacket_::__l164::<lambda_3>_>(&local_100);
    pFVar32 = local_140;
    if (local_157 == '\0') {
      this->LastGoodPacketRealtime = local_130;
    }
    if (this->bInternalAck == 0) {
      TVar34.Value = (ushort)this->InPacketId & 0x3fff;
      if (local_157 == '\0') {
        FNetPacketNotify::AckSeq(&this->PacketNotify,TVar34,true);
        pUVar13 = (this->Driver).field0_0x0.DebugPtr;
        this->OutTotalAcks = this->OutTotalAcks + 1;
        puVar1 = &pUVar13->OutTotalAcks;
        *puVar1 = *puVar1 + 1;
      }
      else {
        FNetPacketNotify::AckSeq(&this->PacketNotify,TVar34,false);
      }
      if (((this->Driver).field0_0x0.DebugPtr)->bSendImmediateAcks != false) {
        this->HasDirtyAcks = this->HasDirtyAcks + 1;
        this->TimeSensitive = true;
      }
    }
    if (this->InTraceCollector != (FNetTraceCollector *)0x0) {
      FNetTrace::TraceCollectedEvents
                (this->InTraceCollector,this->NetTraceId,(this->ConnectionHandle).ParentConnectionId
                 ,Incoming);
      FNetTrace::DestroyTraceCollector(this->InTraceCollector);
      this->InTraceCollector = (FNetTraceCollector *)0x0;
    }
    if (GNetTraceRuntimeVerbosity != 0) {
      FNetTrace::TracePacket
                (this->NetTraceId,(this->ConnectionHandle).ParentConnectionId,this->InPacketId,
                 (uint)pFVar32->Num,Incoming);
    }
    if (((local_154 != '\0') || (local_157 != '\0')) &&
       ((this->bInternalAck == 0 && (GNetTraceRuntimeVerbosity != 0)))) {
      FNetTrace::TracePacketDropped
                (this->NetTraceId,(this->ConnectionHandle).ParentConnectionId,this->InPacketId,
                 Incoming);
    }
  }
LAB_147fea1f4:
  if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<FChannelCloseInfo>)0x0) {
    FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
  }
LAB_147fea22a:
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// ReceivedRawPacket @ 147fea2c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::ReceivedRawPacket(UNetConnection *this,void *param_1,int param_2)

{
  uint *puVar1;
  uchar uVar2;
  longlong *plVar3;
  UNetDriver *pUVar4;
  PacketHandler *this_00;
  UEnum *pUVar5;
  FNetConnectionFaultRecovery *pFVar6;
  code *pcVar7;
  bool bVar8;
  EIncomingResult EVar9;
  EHandleNetResult EVar10;
  UEnum *pUVar11;
  int iVar12;
  TPimplPtr<UE::Net::FNetResult,1> TVar13;
  ENetCloseResult EVar14;
  TObjectPtr<UNetDriver> *pTVar15;
  char local_res8 [8];
  LARGE_INTEGER local_res20;
  FReceivedPacketView local_1c8;
  FNetResult local_178;
  uchar *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  int local_138;
  undefined4 uStack_134;
  FScriptContainerElement *local_130 [2];
  FNetResult local_120;
  FReadAccessScope local_f0;
  FBitReader local_d8;
  
  local_res8[0] = '\0';
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ReceivedRawPacketDel,
             &local_f0);
  if ((*(int *)&(this->ReceivedRawPacketDel).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->ReceivedRawPacketDel).field_0x8, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2,local_res8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_f0);
  if (local_res8[0] != '\0') {
    return;
  }
  pUVar4 = (this->Driver).field0_0x0.DebugPtr;
  if ((pUVar4 != (UNetDriver *)0x0) &&
     (bVar8 = UNetDriver::IsSimulatingPacketLossBurst(pUVar4), bVar8)) {
    return;
  }
  this->InTotalHandlerPackets = this->InTotalHandlerPackets + 1;
  if ((this->Handler).Ptr == (PacketHandler *)0x0) {
LAB_147fea492:
    pTVar15 = &this->Driver;
    if (5 < (byte)LogNetTraffic._0_1_) {
      QueryPerformanceCounter(&local_res20);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    }
    this->InPackets = this->InPackets + 1;
    iVar12 = this->PacketOverhead + param_2;
    this->InBytes = this->InBytes + iVar12;
    this->InTotalBytes = this->InTotalBytes + iVar12;
    this->InPacketsThisFrame = this->InPacketsThisFrame + 1;
    this->InTotalPackets = this->InTotalPackets + 1;
    pUVar4 = (this->Driver).field0_0x0.DebugPtr;
    if (pUVar4 != (UNetDriver *)0x0) {
      puVar1 = &pUVar4->InBytes;
      *puVar1 = *puVar1 + iVar12;
      puVar1 = &((pTVar15->field0_0x0).DebugPtr)->InTotalBytes;
      *puVar1 = *puVar1 + iVar12;
      puVar1 = &((pTVar15->field0_0x0).DebugPtr)->InPackets;
      *puVar1 = *puVar1 + 1;
      puVar1 = &((pTVar15->field0_0x0).DebugPtr)->InTotalPackets;
      *puVar1 = *puVar1 + 1;
    }
    if (param_2 < 1) {
      if (2 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      EVar14 = ZeroSize;
    }
    else {
      uVar2 = *(uchar *)((longlong)param_1 + (longlong)param_2 + -1);
      if (uVar2 != '\0') {
        iVar12 = param_2 * 8;
        for (; iVar12 = iVar12 + -1, -1 < (char)uVar2; uVar2 = uVar2 * '\x02') {
        }
        FBitReader::FBitReader(&local_d8,param_1,(longlong)iVar12);
        SetNetVersionsOnArchive(this,(FArchive *)&local_d8);
        this_00 = (this->Handler).Ptr;
        if (this_00 != (PacketHandler *)0x0) {
          PacketHandler::IncomingHigh(this_00,&local_d8);
        }
        if (local_d8.Num != local_d8.Pos && -1 < local_d8.Num - local_d8.Pos) {
          (**(code **)(this->_padding_ + 0x3b8))(this,&local_d8,0,1);
          FlushPacketOrderCache(this,false);
        }
        FBitReader::~FBitReader(&local_d8);
        return;
      }
      if (2 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      EVar14 = ZeroLastByte;
    }
    HandleNetResultOrClose(this,EVar14);
    return;
  }
  local_1c8.DataView.Data.DataPtr = (uchar *)0x0;
  local_1c8.Data = (TArrayView<unsigned_char_const_,int> *)&local_1c8;
  local_1c8.DataView.Data._8_8_ = local_1c8.DataView.Data._8_8_ & 0xffffffff00000000;
  local_1c8.DataView._16_8_ = local_1c8.DataView._16_8_ & 0xffffffff00000000;
  local_1c8.Address.Object = (FInternetAddr *)0x0;
  local_1c8.Address.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1c8.Traits.bConnectionlessPacket = false;
  local_1c8.Traits.bFromRecentlyDisconnected = false;
  local_1c8.Traits.ExtendedError = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
  local_148 = param_1;
  iStack_140 = param_2;
  if ((param_2 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_1c8.DataView.Data._8_8_ = CONCAT44(uStack_13c,iStack_140);
  local_138 = param_2 * 8;
  local_1c8.DataView._16_8_ = CONCAT44(uStack_134,local_138);
  local_1c8.DataView.Data.DataPtr = local_148;
  EVar9 = PacketHandler::Incoming_Internal((this->Handler).Ptr,&local_1c8);
  param_1 = local_1c8.DataView.Data.DataPtr;
  if (EVar9 == Success) {
    param_2 = local_1c8.DataView.Data.ArrayNum;
    if (local_1c8.DataView.Data.ArrayNum < 1) goto LAB_147fea6f5;
    if (((this->Handler).Ptr)->State == Initialized) {
      if (local_1c8.Traits.ExtendedError != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_1c8.Traits.ExtendedError + -0x10))
                  ((int *)((longlong)local_1c8.Traits.ExtendedError + -0x10));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.Address.SharedReferenceCount.ReferenceController);
      goto LAB_147fea492;
    }
    if ((byte)LogNet._0_1_ < 3) goto LAB_147fea6f5;
    (**(code **)(this->_padding_ + 0x2e0))(this,local_130);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  else {
    if (2 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    TVar13 = local_1c8.Traits.ExtendedError;
    if (local_1c8.Traits.ExtendedError != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      do {
        pUVar5 = *(void **)((longlong)TVar13 + 0x10);
        pUVar11 = StaticEnum<enum_ENetCloseResult>();
        if ((pUVar5 == pUVar11) && (*(int *)TVar13 == 0x70)) goto LAB_147fea637;
        TVar13 = *(TPimplPtr<UE::Net::FNetResult,1> *)((longlong)TVar13 + 0x28);
      } while (TVar13 != (TPimplPtr<UE::Net::FNetResult,1>)0x0);
      pFVar6 = (this->FaultRecovery).Ptr;
      if (pFVar6 == (FNetConnectionFaultRecovery *)0x0) {
        EVar10 = NotHandled;
      }
      else {
        EVar10 = UE::Net::FNetResultManager::HandleNetResult
                           ((FNetResultManager *)&pFVar6->field_0x60,
                            (FNetResult *)local_1c8.Traits.ExtendedError);
      }
      if (EVar10 != NotHandled) goto LAB_147fea6f5;
    }
LAB_147fea637:
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (&local_120,PacketHandlerIncomingError);
    TVar13 = (TPimplPtr<UE::Net::FNetResult,1>)&local_120;
    if (local_1c8.Traits.ExtendedError != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      TVar13 = local_1c8.Traits.ExtendedError;
    }
    local_178.Result = *(ulong64 *)TVar13;
    local_178.ResultEnumObj.WeakPtr = *(FWeakObjectPtr *)((longlong)TVar13 + 8);
    local_178.RawResultEnumObj = *(void **)((longlong)TVar13 + 0x10);
    local_178.ErrorContext.Data.AllocatorInstance.Data =
         (((FString *)((longlong)TVar13 + 0x18))->Data).AllocatorInstance.Data;
    (((FString *)((longlong)TVar13 + 0x18))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_178.ErrorContext.Data.ArrayNum = *(int *)((longlong)TVar13 + 0x20);
    local_178.ErrorContext.Data.ArrayMax = *(int *)((longlong)TVar13 + 0x24);
    *(undefined8 *)((longlong)TVar13 + 0x20) = 0;
    local_178.NextResult = *(TPimplPtr<UE::Net::FNetResult,1> *)((longlong)TVar13 + 0x28);
    *(TPimplPtr<UE::Net::FNetResult,1> *)((longlong)TVar13 + 0x28) =
         (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    if (local_1c8.Traits.ExtendedError != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      UE::Net::FNetResult::AddChainResult(&local_178,&local_120);
    }
    Close(this,&local_178);
    if (local_178.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_178.NextResult + -0x10))((longlong)local_178.NextResult + -0x10);
    }
    if (local_178.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.ErrorContext.Data.AllocatorInstance.Data);
    }
    local_130[0] = local_120.ErrorContext.Data.AllocatorInstance.Data;
    if (local_120.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_120.NextResult + -0x10))((longlong)local_120.NextResult + -0x10);
      local_130[0] = local_120.ErrorContext.Data.AllocatorInstance.Data;
    }
  }
  if (local_130[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130[0]);
  }
LAB_147fea6f5:
  if (local_1c8.Traits.ExtendedError != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    (**(code **)((longlong)local_1c8.Traits.ExtendedError + -0x10))
              ((int *)((longlong)local_1c8.Traits.ExtendedError + -0x10));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.Address.SharedReferenceCount.ReferenceController);
  return;
}

// ReinjectDelayedPackets @ 147fec8f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::ReinjectDelayedPackets(UNetConnection *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res10;
  
  if ((this->DelayedIncomingPackets).ArrayNum < 1) {
    return;
  }
  QueryPerformanceCounter(&local_res10);
  bVar2 = this->bIsReinjectingDelayedPackets;
  uVar9 = 0;
  dVar5 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->bIsReinjectingDelayedPackets = true;
  iVar3 = (this->DelayedIncomingPackets).ArrayNum;
  pFVar8 = (this->DelayedIncomingPackets).AllocatorInstance.Data;
  dVar5 = dVar5 + __real_4170000000000000;
  pFVar1 = pFVar8 + (longlong)iVar3 * 0x18;
  do {
    if ((this->DelayedIncomingPackets).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDelayedIncomingPacket,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) goto LAB_147fec9bb;
    uVar7 = *(uint *)(pFVar8 + 0x10);
    if (uVar7 == 0) {
      if (dVar5 < *(double *)(pFVar8 + 8)) goto LAB_147fec9bb;
    }
    else if (1 < uVar7) {
      *(uint *)(pFVar8 + 0x10) = uVar7 - 1;
LAB_147fec9bb:
      uVar7 = 0;
      if ((int)uVar9 <= (this->DelayedIncomingPackets).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar9 != 0) {
        TArray<FDelayedIncomingPacket,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->DelayedIncomingPackets,0,uVar9);
      }
      this->bIsReinjectingDelayedPackets = bVar2;
      return;
    }
    uVar9 = uVar9 + 1;
    (**(code **)(this->_padding_ + 0x3b8))(this,*(undefined8 *)pFVar8,0,1);
    pFVar8 = pFVar8 + 0x18;
  } while( true );
}

// RemoveChild @ 147fecf00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::RemoveChild(UNetConnection *this,UChildConnection *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TMap<int,TObjectPtr<UChildConnection>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UChildConnection>,0>_>
  *pTVar4;
  bool bVar5;
  int iVar6;
  UChildConnection *pUVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 local_res18 [8];
  uint local_res20 [2];
  UChildConnection *local_108;
  FString local_100;
  int local_f0;
  int local_ec;
  FName local_e8;
  FName local_e0;
  FString local_d8;
  TMap<int,TObjectPtr<UChildConnection>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UChildConnection>,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TMap<int,TObjectPtr<UChildConnection>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UChildConnection>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UChildConnection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  for (pFVar9 = pFVar2; pFVar9 != pFVar2 + (longlong)(this->Children).ArrayNum * 8;
      pFVar9 = pFVar9 + 8) {
    if (*(UChildConnection **)pFVar9 == param_1) {
      if ((int)((longlong)pFVar9 - (longlong)pFVar2 >> 3) != -1) goto LAB_147fecf99;
      break;
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5435733364554339455>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                     ,0x147f,"Children.Find(ChildConnection) != INDEX_NONE");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_147fecf99:
  local_108 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UChildConnection *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_108) &&
      ((FScriptContainerElement *)&local_108 < pFVar2 + (longlong)(this->Children).ArrayMax * 8)) &&
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
  iVar6 = (this->Children).ArrayNum;
  uVar13 = 0;
  if (iVar6 != 0) {
    pFVar2 = (this->Children).AllocatorInstance.Data;
    bVar5 = *(UChildConnection **)pFVar2 != local_108;
    pUVar7 = local_108;
    uVar16 = uVar13;
    uVar19 = uVar13;
    do {
      uVar14 = (uint)uVar16;
      uVar15 = uVar14;
      do {
        uVar13 = uVar13 + 1;
        uVar15 = uVar15 + 1;
        uVar16 = (ulonglong)uVar15;
        if ((longlong)iVar6 <= (longlong)uVar13) break;
      } while (bVar5 == (*(UChildConnection **)(pFVar2 + uVar13 * 8) != pUVar7));
      if (bVar5 != false) {
        uVar20 = (uint)uVar19;
        if (uVar20 != uVar14) {
          memmove(pFVar2 + (longlong)(int)uVar20 * 8,pFVar2 + (longlong)(int)uVar14 * 8,
                  (longlong)(int)(uVar15 - uVar14) << 3);
          pUVar7 = local_108;
        }
        uVar19 = (ulonglong)(uVar20 + (uVar15 - uVar14));
      }
      bVar5 = (bool)(bVar5 ^ 1);
    } while ((longlong)uVar13 < (longlong)iVar6);
    (this->Children).ArrayNum = (int)uVar19;
  }
  uVar15 = 0xffffffff;
  if ((this->_padding_ == 0) || (*(longlong *)&param_1->field_0x30 == 0)) {
    local_b8 = &(this->ChildrenLookup).field_0x10;
    iStack_c0 = 0;
    iVar6 = *(int *)&(this->ChildrenLookup).field_0x28;
    local_c8 = &this->ChildrenLookup;
    uStack_bc = 1;
    local_a8 = 0;
    iStack_ac = iStack_c0;
    if (iVar6 != 0) {
      puVar18 = *(uint **)&(this->ChildrenLookup).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)local_b8;
      }
      uVar14 = *puVar18;
      local_a8 = 0;
      iStack_c0 = 0;
      while (uVar14 == 0) {
        lVar10 = (longlong)iStack_c0;
        local_a8 = local_a8 + 0x20;
        iStack_c0 = iStack_c0 + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_147fed1a6;
        uVar14 = puVar18[lVar10 + 1];
      }
      uStack_bc = -uVar14 & uVar14;
      uVar13 = (ulonglong)uStack_bc * 2 + 1;
      lVar10 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_f0 = (int)lVar10;
      iStack_ac = local_a8 + -1 + local_f0;
      if (iVar6 < iStack_ac) {
LAB_147fed1a6:
        iStack_ac = iVar6;
      }
    }
    puVar11 = &(this->ChildrenLookup).field_0x10;
    uStack_a4 = local_4c;
    iStack_a0 = *(int *)&(this->ChildrenLookup).field_0x8 -
                *(int *)&(this->ChildrenLookup).field_0x34;
    uVar14 = *(uint *)&(this->ChildrenLookup).field_0x28;
    TStack_90._padding_ = CONCAT44(uStack_bc,iStack_c0);
    uStack_b0 = 0xffffffff;
    TStack_90.CurrentBitIndex = iStack_ac;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    uVar20 = uVar14 & 0xffffffe0;
    iVar12 = (int)uVar14 >> 5;
    TStack_90._28_4_ = local_4c;
    TStack_90.BaseBitIndex = local_a8;
    uStack_70 = CONCAT44(uStack_9c,iStack_a0);
    local_98 = local_c8;
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
    if ((((int)uVar14 < 0) || (iVar6 < (int)uVar14)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar1 = *(uint *)&(this->ChildrenLookup).field_0x28;
    if (uVar14 != uVar1) {
      puVar17 = *(undefined1 **)&(this->ChildrenLookup).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = puVar11;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar12 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar12;
        uVar20 = uVar20 + 0x20;
        iVar12 = iVar12 + 1;
        uVar14 = uVar1;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_147fed2c0;
        uVar14 = *(uint *)(puVar17 + lVar10 * 4 + 4);
      }
      uVar13 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_ec = (int)lVar10;
      uVar14 = local_ec + -1 + uVar20;
      if ((int)uVar1 < (int)uVar14) {
        uVar14 = uVar1;
      }
    }
LAB_147fed2c0:
    while( true ) {
      pTVar4 = local_98;
      if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UChildConnection>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_90.CurrentBitIndex == uVar14) &&
          (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar11)) &&
         (pTVar4 == &this->ChildrenLookup)) goto LAB_147fed34b;
      lVar10 = *(longlong *)pTVar4;
      pUVar7 = *(UChildConnection **)(lVar10 + 8 + (longlong)TStack_90.CurrentBitIndex * 0x18);
      if (pUVar7 == (UChildConnection *)0x0) {
        bVar5 = param_1 == (UChildConnection *)0x0;
      }
      else {
        bVar5 = pUVar7 == param_1;
      }
      if (bVar5) break;
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
    uVar15 = *(uint *)(lVar10 + (longlong)TStack_90.CurrentBitIndex * 0x18);
  }
  else {
    uVar15 = (uint)*(byte *)(*(longlong *)&param_1->field_0x30 + 0x4fc);
  }
LAB_147fed34b:
  if (4 < (byte)LogNet._0_1_) {
    local_e8 = (FName)this->_padding_;
    ::FName::ToString(&local_e8,&local_d8);
    if (param_1 == (UChildConnection *)0x0) {
      ::FString::FString(&local_100,L"None");
    }
    else {
      local_e0.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_e0.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_e0,&local_100);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if ((int)uVar15 < 0) {
    return;
  }
  if (((int)uVar15 < 1) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5435733364554339482>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0x149a,"NetPlayerIndexToRemove > 0"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(this->ChildrenLookup).field_0x8 != *(int *)&(this->ChildrenLookup).field_0x34) {
    puVar11 = *(undefined1 **)&(this->ChildrenLookup).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->ChildrenLookup).field_0x38;
    }
    iVar6 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->ChildrenLookup).field_0x48 - 1U & uVar15) * 4);
    if (iVar6 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this->ChildrenLookup + (longlong)iVar6 * 0x18) == uVar15) {
          puVar11 = *(undefined1 **)&(this->ChildrenLookup).field_0x40;
          if (puVar11 == (undefined1 *)0x0) {
            puVar11 = &(this->ChildrenLookup).field_0x38;
          }
          iVar6 = *(int *)(puVar11 +
                          (ulonglong)(*(int *)&(this->ChildrenLookup).field_0x48 - 1U & uVar15) * 4)
          ;
          goto LAB_147fed4e0;
        }
        iVar6 = *(int *)(*(longlong *)&this->ChildrenLookup + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  goto LAB_147fed522;
  while (iVar6 = *(int *)(lVar10 + 0x10), iVar6 != -1) {
LAB_147fed4e0:
    lVar10 = *(longlong *)&this->ChildrenLookup + (longlong)iVar6 * 0x18;
    if (*(uint *)(*(longlong *)&this->ChildrenLookup + (longlong)iVar6 * 0x18) == uVar15)
    goto LAB_147fed500;
  }
  lVar10 = 0;
LAB_147fed500:
  plVar8 = (longlong *)(lVar10 + 8);
  if (lVar10 == 0) {
    plVar8 = (longlong *)0x0;
  }
  if ((UChildConnection *)*plVar8 == (UChildConnection *)0x0) {
    bVar5 = param_1 == (UChildConnection *)0x0;
  }
  else {
    bVar5 = (UChildConnection *)*plVar8 == param_1;
  }
  if (bVar5) goto LAB_147fed54f;
LAB_147fed522:
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5435733364554339484>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                     ,0x149c,
                     "ChildrenLookup.Contains(NetPlayerIndexToRemove) && *ChildrenLookup.Find(NetPlayerIndexToRemove) == ChildConnection"
                    );
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_147fed54f:
  if (*(int *)&(this->ChildrenLookup).field_0x8 != *(int *)&(this->ChildrenLookup).field_0x34) {
    local_res20[0] = uVar15;
    TSet<TTuple<int,TObjectPtr<UChildConnection>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UChildConnection>,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,TObjectPtr<UChildConnection>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UChildConnection>,0>,FDefaultSetAllocator>
                       *)&this->ChildrenLookup,uVar15,(int *)local_res20);
  }
  return;
}

// RemoveDormantReplicator @ 147fed580

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
UNetConnection::RemoveDormantReplicator(UNetConnection *this,AActor *param_1,UObject *param_2)

{
  UNetDriver *this_00;
  bool bVar1;
  FNetworkObjectList *this_01;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_2 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  }
  bVar1 = UE::Net::Private::FDormantReplicatorHolder::RemoveStoredReplicator
                    (&this->DormantReplicatorSet,param_1,(FObjectKey)local_res8);
  if (((bVar1) && ((AActor *)param_2 != param_1)) &&
     (this_00 = (this->Driver).field0_0x0.DebugPtr, this_00 != (UNetDriver *)0x0)) {
    this_01 = UNetDriver::GetNetworkObjectList(this_00);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    FNetworkObjectList::RemoveSubObjectChannelReference
              (this_01,param_1,(TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res8,(UObject *)this
              );
  }
  return;
}

// ResetGameWorldState @ 147fee140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::ResetGameWorldState(UNetConnection *this)

{
  undefined1 *puVar1;
  TMap<FName,FNetLevelVisibilityTransactionId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNetLevelVisibilityTransactionId,0>_>
  *this_00;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar2;
  TMap<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *this_02;
  TMap<FName,FUpdateLevelVisibilityLevelInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FUpdateLevelVisibilityLevelInfo,0>_>
  *this_03;
  ulonglong uVar3;
  int iVar4;
  UNetDriver *pUVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pUVar5 = (this->Driver).field0_0x0.DebugPtr;
  iVar11 = 0;
  if ((pUVar5 == (UNetDriver *)0x0) || (pUVar5->ReplicationSystem == (UReplicationSystem *)0x0)) {
    if (this->ReplicationConnectionDriver == (UReplicationConnectionDriver *)0x0) {
      if (*(int *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0x8 !=
          *(int *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0x34) {
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::UnhashElements
                  (&this->DestroyedStartupOrDormantActorGUIDs);
        iVar4 = *(int *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0xc;
        *(undefined4 *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0x8 = 0;
        if (iVar4 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)&this->DestroyedStartupOrDormantActorGUIDs,0,
                     (int *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0xc);
        }
        *(undefined4 *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0x30 = 0xffffffff
        ;
        *(undefined4 *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0x34 = 0;
        *(undefined4 *)&(this->DestroyedStartupOrDormantActorGUIDs).Elements.field_0x28 = 0;
      }
    }
    else {
      (**(code **)(*(longlong *)this->ReplicationConnectionDriver + 0x2e0))();
    }
  }
  this_00 = &this->ClientPendingStreamingStatusRequest;
  bVar7 = 1 < *(int *)&(this->ClientPendingStreamingStatusRequest).field_0x48;
  if (!bVar7) {
    TSet<TTuple<FName,FNetLevelVisibilityTransactionId>,TDefaultMapHashableKeyFuncs<FName,FNetLevelVisibilityTransactionId,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FNetLevelVisibilityTransactionId>,TDefaultMapHashableKeyFuncs<FName,FNetLevelVisibilityTransactionId,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->ClientPendingStreamingStatusRequest).field_0xc;
  *(undefined4 *)&(this->ClientPendingStreamingStatusRequest).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ClientPendingStreamingStatusRequest).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClientPendingStreamingStatusRequest).field_0x34 = 0;
  iVar4 = *(int *)&(this->ClientPendingStreamingStatusRequest).field_0x2c;
  *(undefined4 *)&(this->ClientPendingStreamingStatusRequest).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ClientPendingStreamingStatusRequest).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ClientPendingStreamingStatusRequest).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->ClientPendingStreamingStatusRequest).field_0x48 = 1;
    TSet<TTuple<FName,FNetLevelVisibilityTransactionId>,TDefaultMapHashableKeyFuncs<FName,FNetLevelVisibilityTransactionId,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FNetLevelVisibilityTransactionId>,TDefaultMapHashableKeyFuncs<FName,FNetLevelVisibilityTransactionId,0>,FDefaultSetAllocator>
              *)this_00);
  }
  pTVar2 = &this->ClientVisibleLevelNames;
  bVar7 = 1 < (this->ClientVisibleLevelNames).HashSize;
  if (!bVar7) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(pTVar2);
  }
  puVar1 = &(this->ClientVisibleLevelNames).Elements.field_0xc;
  *(undefined4 *)&(this->ClientVisibleLevelNames).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ClientVisibleLevelNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClientVisibleLevelNames).Elements.field_0x34 = 0;
  iVar4 = *(int *)&(this->ClientVisibleLevelNames).Elements.field_0x2c;
  *(undefined4 *)&(this->ClientVisibleLevelNames).Elements.field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ClientVisibleLevelNames).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ClientVisibleLevelNames).Elements.field_0x10,0);
  }
  if (bVar7) {
    (this->ClientVisibleLevelNames).HashSize = 1;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(pTVar2);
  }
  pTVar2 = &this->ClientMakingVisibleLevelNames;
  bVar7 = 1 < (this->ClientMakingVisibleLevelNames).HashSize;
  if (!bVar7) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(pTVar2);
  }
  puVar1 = &(this->ClientMakingVisibleLevelNames).Elements.field_0xc;
  *(undefined4 *)&(this->ClientMakingVisibleLevelNames).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)pTVar2,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ClientMakingVisibleLevelNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClientMakingVisibleLevelNames).Elements.field_0x34 = 0;
  iVar4 = *(int *)&(this->ClientMakingVisibleLevelNames).Elements.field_0x2c;
  *(undefined4 *)&(this->ClientMakingVisibleLevelNames).Elements.field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ClientMakingVisibleLevelNames).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->ClientMakingVisibleLevelNames).Elements.field_0x10,0);
  }
  if (bVar7) {
    (this->ClientMakingVisibleLevelNames).HashSize = 1;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(pTVar2);
  }
  this_01 = &this->KeepProcessingActorChannelBunchesMap;
  bVar7 = 1 < *(int *)&(this->KeepProcessingActorChannelBunchesMap).field_0x48;
  if (!bVar7) {
    TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->KeepProcessingActorChannelBunchesMap).field_0x8);
  puVar1 = &(this->KeepProcessingActorChannelBunchesMap).field_0xc;
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->KeepProcessingActorChannelBunchesMap).field_0x2c;
  *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->KeepProcessingActorChannelBunchesMap).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->KeepProcessingActorChannelBunchesMap).field_0x48 = 1;
    TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_01);
  }
  ClearDormantReplicatorsReference(this);
  UE::Net::Private::FDormantReplicatorHolder::EmptySet(&this->DormantReplicatorSet);
  this_02 = &this->ClientVisibleActorOuters;
  bVar7 = 1 < *(int *)&(this->ClientVisibleActorOuters).field_0x48;
  if (!bVar7) {
    TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                    *)this_02);
  }
  puVar1 = &(this->ClientVisibleActorOuters).field_0xc;
  *(undefined4 *)&(this->ClientVisibleActorOuters).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ClientVisibleActorOuters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ClientVisibleActorOuters).field_0x34 = 0;
  iVar4 = *(int *)&(this->ClientVisibleActorOuters).field_0x2c;
  *(undefined4 *)&(this->ClientVisibleActorOuters).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ClientVisibleActorOuters).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ClientVisibleActorOuters).field_0x10,
               0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->ClientVisibleActorOuters).field_0x48 = 1;
    TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                *)this_02);
  }
  puVar1 = &(this->PendingUpdateLevelVisibility).field_0x10;
  (this->ViewTarget).field0_0x0.DebugPtr = (AActor *)0x0;
  iVar4 = *(int *)&(this->PendingUpdateLevelVisibility).field_0x28;
  this_03 = &this->PendingUpdateLevelVisibility;
  uVar8 = 1;
  iVar13 = 0;
  iVar9 = iVar13;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->PendingUpdateLevelVisibility).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar15 = *puVar14;
    iVar13 = 0;
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_147fee54e;
      uVar15 = puVar14[lVar10 + 1];
    }
    uVar8 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = iVar13 + -1 + local_res10;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_147fee54e:
  uVar15 = *(uint *)&(this->PendingUpdateLevelVisibility).field_0x28;
  uVar16 = uVar15 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar11);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar15 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->PendingUpdateLevelVisibility).field_0x8 -
                       *(int *)&(this->PendingUpdateLevelVisibility).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->PendingUpdateLevelVisibility).field_0x28;
  if (uVar15 != uVar8) {
    puVar12 = *(undefined1 **)&(this->PendingUpdateLevelVisibility).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar11;
      uVar16 = uVar16 + 0x20;
      iVar11 = iVar11 + 1;
      uVar15 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_147fee660;
      uVar15 = *(uint *)(puVar12 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar15) {
      uVar15 = uVar8;
    }
  }
LAB_147fee660:
  while( true ) {
    if (*(int *)&(this->PendingUpdateLevelVisibility).field_0x8 -
        *(int *)&(this->PendingUpdateLevelVisibility).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FUpdateLevelVisibilityLevelInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar15) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    UpdateLevelVisibilityInternal
              (this,(FUpdateLevelVisibilityLevelInfo *)
                    (*(longlong *)&this_03->field_0x0 +
                    ((longlong)TStack_60.CurrentBitIndex * 5 + 1) * 8));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar7 = 1 < *(int *)&(this->PendingUpdateLevelVisibility).field_0x48;
  if (!bVar7) {
    TSet<TTuple<FName,FUpdateLevelVisibilityLevelInfo>,TDefaultMapHashableKeyFuncs<FName,FUpdateLevelVisibilityLevelInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FUpdateLevelVisibilityLevelInfo>,TDefaultMapHashableKeyFuncs<FName,FUpdateLevelVisibilityLevelInfo,0>,FDefaultSetAllocator>
                      *)this_03);
  }
  puVar1 = &(this->PendingUpdateLevelVisibility).field_0xc;
  *(undefined4 *)&(this->PendingUpdateLevelVisibility).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)this_03,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PendingUpdateLevelVisibility).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingUpdateLevelVisibility).field_0x34 = 0;
  iVar11 = *(int *)&(this->PendingUpdateLevelVisibility).field_0x2c;
  *(undefined4 *)&(this->PendingUpdateLevelVisibility).field_0x28 = 0;
  if ((iVar11 < 0) || (0x80 < iVar11)) {
    *(undefined4 *)&(this->PendingUpdateLevelVisibility).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->PendingUpdateLevelVisibility).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->PendingUpdateLevelVisibility).field_0x48 = 1;
    TSet<TTuple<FName,FUpdateLevelVisibilityLevelInfo>,TDefaultMapHashableKeyFuncs<FName,FUpdateLevelVisibilityLevelInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FUpdateLevelVisibilityLevelInfo>,TDefaultMapHashableKeyFuncs<FName,FUpdateLevelVisibilityLevelInfo,0>,FDefaultSetAllocator>
              *)this_03);
  }
  return;
}

// ResetPacketAnalytics @ 147fee760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::ResetPacketAnalytics(UNetConnection *this)

{
  FNetConnectionPacketAnalytics::Reset(&this->PacketAnalytics);
  return;
}

// ResetPacketBitCounts @ 147fee780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::ResetPacketBitCounts(UNetConnection *this)

{
  this->NumPacketIdBits = 0;
  this->NumBunchBits = 0;
  this->NumAckBits = 0;
  this->NumPaddingBits = 0;
  return;
}

// ResetQueuedActorDelinquencyAnalytics @ 147fee7a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::ResetQueuedActorDelinquencyAnalytics(UNetConnection *this)

{
  UPackageMapClient *this_00;
  bool bVar1;
  UClass *pUVar2;
  
  if ((this->PackageMap).field0_0x0.DebugPtr != (UPackageMap *)0x0) {
    pUVar2 = Z_Construct_UClass_UPackageMapClient_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->PackageMap,pUVar2);
    if ((bVar1) &&
       (this_00 = (UPackageMapClient *)(this->PackageMap).field0_0x0.DebugPtr,
       this_00 != (UPackageMapClient *)0x0)) {
      UPackageMapClient::ResetQueuedActorDelinquencyAnalytics(this_00);
      return;
    }
  }
  return;
}

// ResetSaturationAnalytics @ 147fee7f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::ResetSaturationAnalytics(UNetConnection *this)

{
  FNetConnectionSaturationAnalytics::Reset(&this->SaturationAnalytics);
  return;
}

// RestoreRemappedChannel @ 147fefe40

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

void __thiscall UNetConnection::RestoreRemappedChannel(UNetConnection *this,int param_1)

{
  ForElementType<int> FVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  ForElementType<int> FVar15;
  undefined1 *puVar16;
  uint uVar17;
  ForElementType<int> FVar18;
  longlong lVar19;
  ForElementType<int> FVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  undefined1 auStack_1b8 [32];
  ForElementType<int> local_198;
  ForElementType<int> local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  undefined1 local_168 [8];
  undefined1 local_160 [32];
  ForElementType<int> local_140;
  longlong local_138;
  int local_130;
  longlong local_128;
  ForElementType<int> local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  longlong *local_c8;
  longlong *local_c0;
  undefined4 local_9c;
  ForElementType<int> local_98;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  this_00 = &this->ChannelIndexMap;
  local_98.SecondaryData = (ForElementType<int>)0x0;
  local_50 = 0;
  local_4c = 0x10;
  local_160._0_4_ = param_1;
  local_160._16_8_ = this;
  if (*(int *)&(this->ChannelIndexMap).field_0x8 != *(int *)&(this->ChannelIndexMap).field_0x34) {
    puVar16 = *(undefined1 **)&(this->ChannelIndexMap).field_0x40;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->ChannelIndexMap).field_0x38;
    }
    iVar9 = *(int *)(puVar16 +
                    (ulonglong)(*(int *)&(this->ChannelIndexMap).field_0x48 - 1U & param_1) * 4);
    if (iVar9 != -1) {
      do {
        if (*(int *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar9 * 0x10) == param_1) {
          if ((&local_98 <= (ForElementType<int> *)local_160) &&
             (local_160 < &local_98.SecondaryData)) {
            local_178 = 4;
            local_190 = (ForElementType<int>)&local_98;
            local_180 = 0;
            local_188 = 0x10;
            local_198 = (ForElementType<int>)local_160;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (local_50 == local_4c) {
              local_50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,&local_98,&local_4c);
            }
          }
          iVar11 = local_50;
          puVar16 = &(this->ChannelIndexMap).field_0x10;
          local_50 = local_50 + 1;
          iVar9 = local_160._0_4_;
          goto LAB_147ff0083;
        }
        iVar9 = *(int *)(*(longlong *)&this_00->field_0x0 + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
LAB_147fefef8:
  uVar21 = local_50 - 1;
  if (-1 < (int)uVar21) {
    local_140 = (ForElementType<int>)(longlong)(int)uVar21;
    lVar19 = (longlong)local_140 * 4;
    do {
      uVar17 = 0;
      if ((int)uVar21 < local_50) {
        uVar17 = ~uVar21 >> 0x1f;
      }
      local_138 = lVar19;
      if ((uVar17 == 0) &&
         (local_198 = local_140, local_190 = (ForElementType<int>)(longlong)local_50,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar18 = (ForElementType<int>)&local_98;
      if (local_98.SecondaryData != (ForElementType<int>)0x0) {
        FVar18 = local_98.SecondaryData;
      }
      uVar17 = *(uint *)(lVar19 + (longlong)FVar18);
      FVar18 = (ForElementType<int>)(longlong)(int)uVar17;
      if (*(int *)&(this->ChannelIndexMap).field_0x8 != *(int *)(&this_00->field_0x0 + 0x34)) {
        puVar16 = &this_00->field_0x38;
        if (*(undefined1 **)(&this_00->field_0x38 + 8) != (undefined1 *)0x0) {
          puVar16 = *(undefined1 **)(&this_00->field_0x38 + 8);
        }
        iVar9 = *(int *)(puVar16 + (ulonglong)(*(int *)&this_00->field_0x48 - 1U & uVar17) * 4);
        if (iVar9 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar9 * 0x10) == uVar17) {
              puVar14 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                               *)this_00,uVar17);
              iVar9 = (this->Channels).ArrayNum;
              uVar13 = *puVar14;
              FVar20 = (ForElementType<int>)(longlong)(int)uVar13;
              uVar23 = ~uVar13 >> 0x1f;
              uVar12 = 0;
              if ((int)uVar13 < iVar9) {
                uVar12 = uVar23;
              }
              if ((uVar12 == 0) &&
                 (local_198 = FVar20, local_190 = (ForElementType<int>)(longlong)iVar9,
                 bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar24 = ~uVar17 >> 0x1f;
              local_160._8_8_ =
                   *(undefined8 *)((this->Channels).AllocatorInstance.Data + (longlong)FVar20 * 8);
              iVar9 = (this->Channels).ArrayNum;
              uVar12 = 0;
              if ((int)uVar17 < iVar9) {
                uVar12 = uVar24;
              }
              if ((uVar12 == 0) &&
                 (local_198 = FVar18, local_190 = (ForElementType<int>)(longlong)iVar9,
                 bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_128 = *(longlong *)
                           ((this->Channels).AllocatorInstance.Data + (longlong)FVar18 * 8);
              if ((local_160._8_8_ == 0) || (local_128 != 0)) {
                local_c8 = (longlong *)(local_160 + 8);
                local_c0 = &local_128;
                bVar8 = `UNetConnection::RestoreRemappedChannel'::__l16::<lambda_2>::operator()
                                  (&local_c8);
                if (!bVar8) {
                  this_00 = &this->ChannelIndexMap;
                  break;
                }
              }
              *(uint *)(local_160._8_8_ + 0x34) = uVar17;
              iVar9 = (this->Channels).ArrayNum;
              uVar12 = 0;
              if ((int)uVar13 < iVar9) {
                uVar12 = uVar23;
              }
              if ((uVar12 == 0) &&
                 (local_198 = FVar20, local_190 = (ForElementType<int>)(longlong)iVar9,
                 bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar2 = (this->Channels).AllocatorInstance.Data + (longlong)FVar20 * 8;
              iVar9 = ((TArray<TObjectPtr<UChannel>,TSizedDefaultAllocator<32>_> *)
                      (local_160._16_8_ + 0x1468))->ArrayNum;
              uVar12 = 0;
              if ((int)uVar17 < iVar9) {
                uVar12 = uVar24;
              }
              if ((uVar12 == 0) &&
                 (local_198 = FVar18, local_190 = (ForElementType<int>)(longlong)iVar9,
                 bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              this = (UNetConnection *)local_160._16_8_;
              pFVar5 = (((TArray<TObjectPtr<UChannel>,TSizedDefaultAllocator<32>_> *)
                        (local_160._16_8_ + 0x1468))->AllocatorInstance).Data;
              uVar6 = *(undefined8 *)(pFVar5 + (longlong)FVar18 * 8);
              *(undefined8 *)(pFVar5 + (longlong)FVar18 * 8) = *(undefined8 *)pFVar2;
              *(undefined8 *)pFVar2 = uVar6;
              iVar9 = ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_160._16_8_ + 0x1488))->
                      ArrayNum;
              uVar12 = 0;
              if ((int)uVar13 < iVar9) {
                uVar12 = uVar23;
              }
              if ((uVar12 == 0) &&
                 (local_198 = FVar20, local_190 = (ForElementType<int>)(longlong)iVar9,
                 bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar9 = ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x1488))->
                      ArrayNum;
              pFVar2 = (((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x1488))->
                       AllocatorInstance).Data + (longlong)FVar20 * 4;
              uVar13 = 0;
              if ((int)uVar17 < iVar9) {
                uVar13 = uVar24;
              }
              if ((uVar13 == 0) &&
                 (local_198 = FVar18, local_190 = (ForElementType<int>)(longlong)iVar9,
                 bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar5 = (((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x1488))->
                       AllocatorInstance).Data;
              this_00 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)((longlong)this + 0x1a30);
              uVar4 = *(undefined4 *)(pFVar5 + (longlong)FVar18 * 4);
              *(undefined4 *)(pFVar5 + (longlong)FVar18 * 4) = *(undefined4 *)pFVar2;
              *(undefined4 *)pFVar2 = uVar4;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Remove((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)this_00,uVar17);
              break;
            }
            iVar9 = *(int *)(*(longlong *)&this_00->field_0x0 + 8 + (longlong)iVar9 * 0x10);
          } while (iVar9 != -1);
        }
      }
      local_140 = (ForElementType<int>)((longlong)local_140 + -1);
      lVar19 = local_138 + -4;
      uVar21 = uVar21 - 1;
      local_138 = lVar19;
    } while (-1 < (int)uVar21);
  }
  if (local_98.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_98.SecondaryData);
  }
  return;
LAB_147ff0083:
  FVar18 = (ForElementType<int>)&local_98;
  if (local_98.SecondaryData != (ForElementType<int>)0x0) {
    FVar18 = local_98.SecondaryData;
  }
  *(int *)((longlong)FVar18 + (longlong)iVar11 * 4) = iVar9;
  uVar17 = local_50 - 1;
  uVar21 = 0;
  if ((int)uVar17 < local_50) {
    uVar21 = ~uVar17 >> 0x1f;
  }
  if (uVar21 == 0) {
    local_198 = (ForElementType<int>)(longlong)(int)uVar17;
    local_190 = (ForElementType<int>)(longlong)local_50;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = *(int *)&(this->ChannelIndexMap).field_0x28;
  uStack_ec = 1;
  FVar18 = (ForElementType<int>)&local_98;
  if (local_98.SecondaryData != (ForElementType<int>)0x0) {
    FVar18 = local_98.SecondaryData;
  }
  iStack_f0 = 0;
  local_d8 = 0;
  iVar11 = *(int *)((longlong)FVar18 + (longlong)(int)uVar17 * 4);
  iVar10 = 0;
  if (iVar9 != 0) {
    puVar14 = *(uint **)&(this->ChannelIndexMap).field_0x20;
    puVar22 = (uint *)puVar16;
    if (puVar14 != (uint *)0x0) {
      puVar22 = puVar14;
    }
    uVar21 = *puVar22;
    while (uVar21 == 0) {
      lVar19 = (longlong)iStack_f0;
      local_d8 = local_d8 + 0x20;
      iStack_f0 = iStack_f0 + 1;
      iVar10 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_147ff016d;
      uVar21 = puVar22[lVar19 + 1];
    }
    uStack_ec = -uVar21 & uVar21;
    uVar3 = (ulonglong)uStack_ec * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_130 = (int)lVar19;
    iVar10 = local_130 + -1 + local_d8;
    if (iVar9 < iVar10) {
      iVar10 = iVar9;
    }
  }
LAB_147ff016d:
  uStack_d4 = local_9c;
  uStack_e0 = 0xffffffff;
  TStack_118._padding_ = CONCAT44(uStack_ec,iStack_f0);
  TStack_118.CurrentBitIndex = iVar10;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  TStack_118._28_4_ = local_9c;
  TStack_118.BaseBitIndex = local_d8;
  local_120 = (ForElementType<int>)this_00;
  TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar16;
  local_f8 = this_00;
  local_e8 = puVar16;
  iStack_dc = iVar10;
  if (iVar9 <= iVar10) goto LAB_147fefef8;
  while (FVar18 = (ForElementType<int>)((longlong)iVar10 * 0x10 + *(longlong *)local_120),
        *(int *)((longlong)FVar18 + 4) != iVar11) {
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
    iVar10 = TStack_118.CurrentBitIndex;
    if ((TStack_118.Array)->NumBits <= TStack_118.CurrentBitIndex) goto LAB_147fefef8;
  }
  if (FVar18 == (ForElementType<int>)0x0) goto LAB_147fefef8;
  FVar20 = (ForElementType<int>)&local_98;
  if (local_98.SecondaryData != (ForElementType<int>)0x0) {
    FVar20 = local_98.SecondaryData;
  }
  FVar1 = (ForElementType<int>)((longlong)FVar20 + (longlong)local_50 * 4);
  if (FVar20 != FVar1) {
    FVar15 = FVar20;
    do {
      if (*(int *)FVar15 == *(int *)FVar18) {
        if ((int)((longlong)FVar15 - (longlong)FVar20 >> 2) != -1) {
          local_168[0] = 0;
          bVar8 = `UNetConnection::RestoreRemappedChannel'::__l8::<lambda_1>::operator()(local_168);
          if (!bVar8) goto LAB_147fefef8;
        }
        break;
      }
      FVar15 = (ForElementType<int>)((longlong)FVar15 + 4);
    } while (FVar15 != FVar1);
  }
  FVar20 = (ForElementType<int>)&local_98;
  if (local_98.SecondaryData != (ForElementType<int>)0x0) {
    FVar20 = local_98.SecondaryData;
  }
  if ((ulonglong)FVar20 <= (ulonglong)FVar18) {
    FVar20 = (ForElementType<int>)&local_98;
    if (local_98.SecondaryData != (ForElementType<int>)0x0) {
      FVar20 = local_98.SecondaryData;
    }
    if ((ulonglong)FVar18 < (ulonglong)((longlong)FVar20 + (longlong)local_4c * 4)) {
      local_178 = 4;
      local_180 = (longlong)local_50;
      local_190 = (ForElementType<int>)&local_98;
      if (local_98.SecondaryData != (ForElementType<int>)0x0) {
        local_190 = local_98.SecondaryData;
      }
      local_198 = FVar18;
      local_188 = (longlong)local_4c;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  iVar11 = local_50;
  if (local_50 == local_4c) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                       (0x404,&local_98,&local_4c);
  }
  local_50 = iVar11 + 1;
  iVar9 = *(int *)FVar18;
  goto LAB_147ff0083;
}

// SendChallengeControlMessage @ 147ff1060

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
UNetConnection::SendChallengeControlMessage(UNetConnection *this,FEncryptionKeyResponse *param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FString local_88;
  FScriptContainerElement *local_78 [2];
  FNetResult local_68;
  FNetResult local_38;
  
  if (((this->State == USOCK_Invalid) || (this->State == USOCK_Closed)) ||
     ((this->Driver).field0_0x0.DebugPtr == (UNetDriver *)0x0)) {
    if ((byte)LogNet._0_1_ < 3) {
      return;
    }
    (**(code **)(this->_padding_ + 0x2e0))(this,local_78);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  else {
    if (param_1->Response == Success) {
      EnableEncryptionServer(this,&param_1->EncryptionData);
      SendChallengeControlMessage(this);
      return;
    }
    switch(param_1->Response) {
    case Failure:
      pwVar3 = L"Failure";
      break;
    case Success:
      pwVar3 = L"Success";
      break;
    case InvalidToken:
      pwVar3 = L"InvalidToken";
      break;
    case NoKey:
      pwVar3 = L"NoKey";
      break;
    case SessionIdMismatch:
      pwVar3 = L"SessionIdMismatch";
      break;
    case InvalidParams:
      pwVar3 = L"InvalidParams";
      break;
    default:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\NetworkDelegates.h"
                         ,0x7d,L"Missing EncryptionResponse Type: %d");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pwVar3 = L"";
    }
    ::FString::FString(&local_88,pwVar3);
    if (2 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (&local_68,EncryptionFailure);
    SendCloseReason(this,&local_68);
    if (local_68.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_68.NextResult + -0x10))((longlong)local_68.NextResult + -0x10);
    }
    if (local_68.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.ErrorContext.Data.AllocatorInstance.Data);
    }
    UE::Net::TNetControlMessageImpl<6,FString>::Send(this,&local_88);
    (**(code **)(this->_padding_ + 0x308))(this,1);
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (&local_38,EncryptionFailure);
    Close(this,&local_38);
    if (local_38.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_38.NextResult + -0x10))((longlong)local_38.NextResult + -0x10);
    }
    local_78[0] = local_88.Data.AllocatorInstance.Data;
    if (local_38.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ErrorContext.Data.AllocatorInstance.Data);
      local_78[0] = local_88.Data.AllocatorInstance.Data;
    }
  }
  if (local_78[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78[0]);
  }
  return;
}

// SendChallengeControlMessage @ 147ff12b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::SendChallengeControlMessage(UNetConnection *this)

{
  FString *pFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  UNetDriver *pUVar4;
  bool bVar5;
  LARGE_INTEGER local_res8;
  FString local_28;
  void *local_18 [2];
  
  if (((this->State != USOCK_Invalid) && (this->State != USOCK_Closed)) &&
     ((this->Driver).field0_0x0.DebugPtr != (UNetDriver *)0x0)) {
    QueryPerformanceCounter(&local_res8);
    ::FString::PrintfImpl(&local_28,L"%08X");
    pFVar1 = &this->Challenge;
    if (pFVar1 != &local_28) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (this->Challenge).Data.ArrayNum = local_28.Data.ArrayNum;
      (this->Challenge).Data.ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pUVar4 = (this->Driver).field0_0x0.DebugPtr;
    if ((pUVar4 == (UNetDriver *)0x0) ||
       (((pUVar4->DDoS).bDDoSLogRestrictions == false &&
        (((pUVar4->DDoS).bDDoSDetection == false ||
         (piVar2 = &(pUVar4->DDoS).LogHitCounter, *piVar2 = *piVar2 + 1,
         (pUVar4->DDoS).LogHitCounter <= (pUVar4->DDoS).DDoSLogSpamLimit)))))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (this->ExpectedClientLoginMsgType == '\x05') {
      if ((5 < (byte)LogNet._0_1_) && (!bVar5)) {
        bVar5 = FNetControlMessageInfo::IsRegistered('\x05');
        if (bVar5) {
          FNetControlMessageInfo::GetName('\x05');
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
    }
    else {
      if ((5 < (byte)LogNet._0_1_) && (!bVar5)) {
        bVar5 = FNetControlMessageInfo::IsRegistered('\x05');
        if (bVar5) {
          FNetControlMessageInfo::GetName('\x05');
        }
        bVar5 = FNetControlMessageInfo::IsRegistered(this->ExpectedClientLoginMsgType);
        if (bVar5) {
          FNetControlMessageInfo::GetName(this->ExpectedClientLoginMsgType);
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      this->ExpectedClientLoginMsgType = '\x05';
    }
    UE::Net::TNetControlMessageImpl<3,FString>::Send(this,pFVar1);
                    /* WARNING: Could not recover jumptable at 0x000147ff1494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x308))(this,0);
    return;
  }
  if (4 < (byte)LogNet._0_1_) {
    (**(code **)(this->_padding_ + 0x2e0))(this,local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return;
}

// SendClientEncryptionAck @ 147ff1500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::SendClientEncryptionAck(UNetConnection *this)

{
  void *local_18 [2];
  
  if (((this->State != USOCK_Invalid) && (this->State != USOCK_Closed)) &&
     ((this->Driver).field0_0x0.DebugPtr != (UNetDriver *)0x0)) {
    UE::Net::TNetControlMessageImpl<21>::Send(this);
                    /* WARNING: Could not recover jumptable at 0x000147ff1531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x308))(this,0);
    return;
  }
  if (4 < (byte)LogNet._0_1_) {
    (**(code **)(this->_padding_ + 0x2e0))(this,local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return;
}

// SendCloseReason @ 147ff1590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::SendCloseReason(UNetConnection *this,FNetResult *param_1)

{
  UEnum *pUVar1;
  PacketHandler *pPVar2;
  void *pvVar3;
  TPimplPtr<UE::Net::FNetResult,1> TVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  UEnum *pUVar8;
  FString *pFVar9;
  FNetResult *pFVar10;
  FNetResult *pFVar11;
  TUniquePtr<UE::Net::FNetResult,TDefaultDelete<UE::Net::FNetResult>_> *pTVar12;
  int iVar13;
  longlong local_48;
  FString local_40;
  FString local_30;
  FString local_20;
  
  pFVar11 = (FNetResult *)0x0;
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  if (((param_1 == (FNetResult *)0x0) ||
      (pUVar1 = param_1->RawResultEnumObj, pUVar8 = StaticEnum<enum_ENetCloseResult>(),
      pUVar1 != pUVar8)) || ((int)param_1->Result != 0xe)) {
    TVar4 = (TPimplPtr<UE::Net::FNetResult,1>)param_1;
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    for (; TVar4 != (TPimplPtr<UE::Net::FNetResult,1>)0x0;
        TVar4 = *(TPimplPtr<UE::Net::FNetResult,1> *)((longlong)TVar4 + 0x28)) {
      iVar7 = local_40.Data.ArrayNum + -1;
      if (local_40.Data.ArrayNum == 0) {
        iVar7 = 0;
      }
      if (0 < iVar7) {
        ::FString::AppendChar(&local_40,L',');
      }
      pFVar9 = UE::Net::FNetResult::DynamicToString((FNetResult *)TVar4,&local_30,ResultEnumOnly);
      iVar7 = (pFVar9->Data).ArrayNum;
      iVar13 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar13 = 0;
      }
      ::FString::AppendChars(&local_40,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar13);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogNet._0_1_) {
        UE::Net::FNetResult::DynamicToString((FNetResult *)TVar4,&local_20,WithoutChain);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.Data.AllocatorInstance.Data);
        }
      }
      if (TVar4 == (TPimplPtr<UE::Net::FNetResult,1>)0x0) break;
    }
  }
  pPVar2 = (this->Handler).Ptr;
  if (((pPVar2 == (PacketHandler *)0x0) || (pPVar2->State == Initialized)) &&
     (bVar6 = HasReceivedClientPacket(this), bVar6)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (((0 < (this->Channels).ArrayNum) &&
      (*(longlong *)(this->Channels).AllocatorInstance.Data != 0)) &&
     ((bVar6 && (1 < local_40.Data.ArrayNum)))) {
    UE::Net::TNetControlMessageImpl<23,FString>::Send(this,&local_40);
  }
  if ((this->NetAnalyticsData).Object == (FNetConnAnalyticsData *)0x0) goto LAB_147ff1875;
  pTVar12 = &(this->AnalyticsVars).CloseReason;
  pFVar10 = pTVar12->Ptr;
  if (pFVar10 == (FNetResult *)0x0) {
    pFVar10 = ::operator_new(0x30);
    if (pFVar10 != (FNetResult *)0x0) {
      pFVar10->Result = param_1->Result;
      (pFVar10->ResultEnumObj).WeakPtr = (param_1->ResultEnumObj).WeakPtr;
      pvVar3 = param_1->RawResultEnumObj;
      (pFVar10->ErrorContext).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar10->RawResultEnumObj = pvVar3;
      (pFVar10->ErrorContext).Data.AllocatorInstance.Data =
           (param_1->ErrorContext).Data.AllocatorInstance.Data;
      (param_1->ErrorContext).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->ErrorContext).Data.ArrayNum = (param_1->ErrorContext).Data.ArrayNum;
      (pFVar10->ErrorContext).Data.ArrayMax = (param_1->ErrorContext).Data.ArrayMax;
      (param_1->ErrorContext).Data.ArrayNum = 0;
      (param_1->ErrorContext).Data.ArrayMax = 0;
      pFVar10->NextResult = param_1->NextResult;
      param_1->NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
      pFVar11 = pFVar10;
    }
    if (pTVar12 == (TUniquePtr<UE::Net::FNetResult,TDefaultDelete<UE::Net::FNetResult>_> *)&local_48
       ) {
      if (pFVar11 != (FNetResult *)0x0) {
        TVar4 = pFVar11->NextResult;
        if (TVar4 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
          (**(code **)((longlong)TVar4 + -0x10))((longlong)TVar4 + -0x10);
        }
        pFVar5 = (pFVar11->ErrorContext).Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        ::operator_delete(pFVar11,0x30);
      }
    }
    else {
      pFVar10 = pTVar12->Ptr;
      pTVar12->Ptr = pFVar11;
      if (pFVar10 != (FNetResult *)0x0) {
        TVar4 = pFVar10->NextResult;
        if (TVar4 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
          (**(code **)((longlong)TVar4 + -0x10))((longlong)TVar4 + -0x10);
        }
        pFVar5 = (pFVar10->ErrorContext).Data.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        ::operator_delete(pFVar10,0x30);
      }
    }
    goto LAB_147ff1875;
  }
  if (pFVar10->Result == param_1->Result) {
    iVar7 = (pFVar10->ErrorContext).Data.ArrayNum;
    iVar13 = (param_1->ErrorContext).Data.ArrayNum;
    if (iVar7 == iVar13) {
      if (1 < iVar7) {
        iVar7 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar10->ErrorContext).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->ErrorContext).Data.AllocatorInstance.Data);
        bVar6 = iVar7 == 0;
        goto LAB_147ff1831;
      }
    }
    else {
      bVar6 = iVar7 + iVar13 == 1;
LAB_147ff1831:
      if (!bVar6) goto LAB_147ff186a;
    }
    if (pFVar10->RawResultEnumObj == param_1->RawResultEnumObj) {
      TVar4 = pFVar10->NextResult;
      if (((TVar4 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) ==
           (param_1->NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0)) &&
         ((TVar4 == (TPimplPtr<UE::Net::FNetResult,1>)0x0 ||
          (bVar6 = UE::Net::FNetResult::operator==
                             ((FNetResult *)TVar4,(FNetResult *)param_1->NextResult), bVar6))))
      goto LAB_147ff1875;
    }
  }
LAB_147ff186a:
  UE::Net::FNetResult::AddChainResult(pTVar12->Ptr,param_1);
LAB_147ff1875:
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return;
}

// SendRawBunch @ 147ff18b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */

int __thiscall
UNetConnection::SendRawBunch
          (UNetConnection *this,FOutBunch *param_1,bool param_2,FNetTraceCollector *param_3)

{
  FBitWriter *this_00;
  uint *puVar1;
  undefined1 *puVar2;
  FWrittenChannelsRecord *this_01;
  uint uVar3;
  UNetDriver *pUVar4;
  uchar *puVar5;
  UPackageMap *pUVar6;
  code *pcVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  EName *pEVar17;
  ulonglong uVar18;
  uint uVar19;
  ulong64 uVar20;
  int local_res8 [2];
  FNetTraceBunchInfo local_res10;
  uint local_res18 [2];
  FString local_68;
  FString local_58;
  FString local_48;
  
  (**(code **)(this->_padding_ + 0x2f0))();
  if ((param_1->ReceivedAck != 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Bunch.ReceivedAck",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                          ,0x112a,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    iVar15 = (*pcVar7)();
    return iVar15;
  }
  if (((param_1->_padding_ & 0x200) != 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Bunch.IsError()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                          ,0x112b,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    iVar15 = (*pcVar7)();
    return iVar15;
  }
  this_00 = &this->SendBunchHeader;
  puVar1 = &((this->Driver).field0_0x0.DebugPtr)->OutBunches;
  *puVar1 = *puVar1 + 1;
  puVar1 = &((this->Driver).field0_0x0.DebugPtr)->OutTotalBunches;
  *puVar1 = *puVar1 + 1;
  puVar1 = &((this->Driver).field0_0x0.DebugPtr)->OutTotalReliableBunches;
  *puVar1 = *puVar1 + param_1->bReliable;
  (**(code **)(this_00->_padding_ + 0xc0))(this_00);
  FBitWriter::WriteBit(this_00,param_1->bOpen != '\0' || param_1->bClose != '\0');
  if (param_1->bOpen != '\0' || param_1->bClose != '\0') {
    FBitWriter::WriteBit(this_00,param_1->bOpen);
    FBitWriter::WriteBit(this_00,param_1->bClose);
    if (param_1->bClose != '\0') {
      local_res18[0] = (uint)param_1->CloseReason;
      (**(code **)(this_00->_padding_ + 0x198))(this_00,local_res18,0xf);
    }
  }
  FBitWriter::WriteBit(this_00,param_1->bIsReplicationPaused);
  FBitWriter::WriteBit(this_00,param_1->bReliable);
  local_res8[0] = param_1->ChIndex;
  (**(code **)(this_00->_padding_ + 0x1a0))(this_00,local_res8);
  FBitWriter::WriteBit(this_00,param_1->bHasPackageMapExports);
  FBitWriter::WriteBit(this_00,param_1->bHasMustBeMappedGUIDs);
  FBitWriter::WriteBit(this_00,param_1->bPartial);
  if ((param_1->bReliable != '\0') && (this->bInternalAck == 0)) {
    FBitWriter::WriteIntWrapped(this_00,param_1->ChSequence,0x400);
  }
  if (param_1->bPartial != '\0') {
    FBitWriter::WriteBit(this_00,param_1->bPartialInitial);
    FBitWriter::WriteBit(this_00,param_1->bPartialCustomExportsFinal);
    FBitWriter::WriteBit(this_00,param_1->bPartialFinal);
  }
  if (param_1->bOpen != '\0' || param_1->bReliable != '\0') {
    UPackageMap::StaticSerializeName((FArchive *)this_00,&param_1->ChName);
  }
  FBitWriter::WriteIntWrapped(this_00,(uint)param_1->_padding_,this->MaxPacket << 3);
  if (((this->SendBunchHeader)._padding_ & 0x200) != 0) {
    pEVar17 = ::FName::ToEName(&param_1->ChName);
    if (pEVar17 != (EName *)0x0) {
      pEVar17 = ::FName::ToEName(&param_1->ChName);
      ShouldReplicateAsInteger(*pEVar17,&param_1->ChName);
    }
    FOutBunch::ToString(param_1,&local_68);
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                        ,0x1167,
                        L"SendBunchHeader Error: Bunch = %s,  Channel Name Serialized As String: %d"
                       );
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      iVar15 = (*pcVar7)();
      return iVar15;
    }
    if ((((this->SendBunchHeader)._padding_ & 0x200) != 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!SendBunchHeader.IsError()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                            ,0x116b,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      iVar15 = (*pcVar7)();
      return iVar15;
    }
  }
  pUVar4 = (this->Driver).field0_0x0.DebugPtr;
  this->AllowMerge = param_2;
  param_1->Time = pUVar4->ElapsedTime;
  if ((param_1->bOpen != '\0' || param_1->bClose != '\0') && (6 < (byte)LogNetDormancy._0_1_)) {
    FOutBunch::ToString(param_1,&local_58);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNetDormancy);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (6 < (byte)LogNetTraffic._0_1_) {
    FOutBunch::ToString(param_1,&local_48);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
     (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
    if (__CsvProfilerStat4475 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
      __CsvProfilerStat4475 = true;
    }
    FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
    FNetworkProfiler::PushSendBunch
              (&GNetworkProfiler,this,param_1,(ushort)(this->SendBunchHeader).Num,
               (ushort)param_1->_padding_);
    FCsvProfiler::EndExclusiveStat("NetworkProfiler");
  }
  uVar3 = (uint)(this->SendBunchHeader).Num;
  uVar16 = (uint)param_1->_padding_;
  PrepareWriteBitsToSendBuffer(this,uVar3,uVar16);
  this->TimeSensitive = true;
  if (this->OutTraceCollector != (FNetTraceCollector *)0x0) {
    uVar19 = (uint)(byte)param_1->field_0xfc;
    local_res10.Value =
         ((((((((ulonglong)((byte)param_1->field_0xfd & 3) << 4 | (ulonglong)(uVar19 & 6)) * 2 |
              (ulonglong)((byte)param_1->field_0xfc & 0x10)) << 2 | (ulonglong)(uVar19 & 8)) * 2 |
            (ulonglong)((byte)param_1->field_0xfd & 4)) << 4 |
            (ulonglong)(param_1->CloseReason & 0xf) | (ulonglong)(uVar19 & 0x80)) * 2 |
          (ulonglong)(uVar19 & 0x60)) << 0xb | (ulonglong)(param_1->ChSequence & 0xfff)) << 0x14 |
         (ulonglong)(param_1->ChIndex & 0xfffff);
    FNetTrace::TraceBunch
              (this->OutTraceCollector,&local_res10,param_1->ChName,0,uVar3,uVar16,param_3);
  }
  if (((param_1->_padding_ & 0x200) != 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsError()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                          ,0x49,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    iVar15 = (*pcVar7)();
    return iVar15;
  }
  puVar5 = (uchar *)param_1->_padding_;
  if ((((this->SendBunchHeader)._padding_ & 0x200) != 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsError()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                          ,0x49,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    iVar15 = (*pcVar7)();
    return iVar15;
  }
  uVar16 = WriteBitsToSendBufferInternal
                     (this,(uchar *)(this->SendBunchHeader).Buffer.AllocatorInstance.Data,uVar3,
                      puVar5,uVar16,Bunch);
  uVar3 = param_1->ChIndex;
  this_01 = &this->ChannelRecord;
  param_1->PacketId = uVar16;
  if (uVar16 != (this->ChannelRecord).LastPacketId) {
    uVar18 = (ulonglong)((this_01->ChannelRecord).Head - (this->ChannelRecord).ChannelRecord.Tail) +
             1;
    if ((ulonglong)(longlong)(this->ChannelRecord).ChannelRecord.Storage.ArrayNum < uVar18) {
      TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>
      ::SetCapacity(&this_01->ChannelRecord,uVar18);
    }
    uVar19 = (this_01->ChannelRecord).Head;
    (this_01->ChannelRecord).Head = uVar19 + 1;
    *(uint *)((this->ChannelRecord).ChannelRecord.Storage.AllocatorInstance.Data +
             (ulonglong)(uVar19 & (this->ChannelRecord).ChannelRecord.IndexMask) * 4) =
         uVar16 | 0x80000000;
    (this->ChannelRecord).LastPacketId = uVar16;
  }
  uVar20 = (ulonglong)((this_01->ChannelRecord).Head - (this->ChannelRecord).ChannelRecord.Tail) + 1
  ;
  if ((ulonglong)(longlong)(this->ChannelRecord).ChannelRecord.Storage.ArrayNum < uVar20) {
    TResizableCircularQueue<FWrittenChannelsRecord::FChannelRecordEntry,TSizedDefaultAllocator<32>_>
    ::SetCapacity(&this_01->ChannelRecord,uVar20);
  }
  uVar16 = (this_01->ChannelRecord).Head;
  (this_01->ChannelRecord).Head = uVar16 + 1;
  *(uint *)((this->ChannelRecord).ChannelRecord.Storage.AllocatorInstance.Data +
           (ulonglong)(uVar16 & (this->ChannelRecord).ChannelRecord.IndexMask) * 4) =
       uVar3 & 0x7fffffff;
  if (5 < (byte)LogNetTraffic._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
  }
  pUVar6 = (this->PackageMap).field0_0x0.DebugPtr;
  if ((pUVar6 != (UPackageMap *)0x0) &&
     (param_1->bHasPackageMapExports != '\0' || param_1->bPartialCustomExportsFinal != '\0')) {
    (**(code **)(pUVar6->_padding_ + 0x2e8))(pUVar6,param_1->PacketId,param_1);
  }
  if (param_1->bHasPackageMapExports != 0) {
    puVar1 = &((this->Driver).field0_0x0.DebugPtr)->NetGUIDOutBytes;
    *puVar1 = *puVar1 + (int)((this->SendBunchHeader).Num + param_1->_padding_ >> 3);
  }
  if (this->bAutoFlush != false) {
    (**(code **)(this->_padding_ + 0x308))(this,0);
  }
  return param_1->PacketId;
}

// Serialize @ 147ff2e40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::Serialize(UNetConnection *this,FArchive *param_1)

{
  TMap<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar1;
  TMap<FString,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  FString *pFVar3;
  ulonglong uVar4;
  PacketHandler *this_00;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_348;
  FScopeMarker local_340;
  undefined1 local_318 [8];
  ulonglong local_310;
  TMap<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>_>
  *local_308;
  int iStack_300;
  uint uStack_2fc;
  undefined1 *local_2f8;
  undefined4 uStack_2f0;
  int iStack_2ec;
  int local_2e8;
  undefined4 uStack_2e4;
  int iStack_2e0;
  undefined4 uStack_2dc;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  undefined8 local_2c8;
  TMap<FString,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *local_2c0;
  int iStack_2b8;
  undefined4 uStack_2b4;
  undefined1 *local_2b0;
  undefined4 uStack_2a8;
  int iStack_2a4;
  int local_2a0;
  int iStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  TMap<FString,TArray<float,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<float,TSizedDefaultAllocator<32>_>,0>_>
  *local_290;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_288;
  undefined8 uStack_268;
  TMap<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>_>
  *local_260;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_258;
  undefined8 uStack_238;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80 [2];
  undefined4 local_54;
  
  ::FString::FString(&local_230,"UNetConnection::Serialize");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker
            (&local_340,param_1,&local_230);
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
  UObject::Serialize((UObject *)this,param_1);
  ::FString::FString(&local_220,"UObject");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_220);
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->PackageMap);
  ::FString::FString(&local_210,"PackageName");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_210);
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
  pFVar18 = (this->Channels).AllocatorInstance.Data;
  iVar10 = (this->Channels).ArrayNum;
  pFVar12 = pFVar18 + (longlong)iVar10 * 8;
  while( true ) {
    if ((this->Channels).ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UChannel>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar18 == pFVar12) break;
    local_2c8 = *(undefined8 *)pFVar18;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_2c8);
    pFVar18 = pFVar18 + 8;
  }
  ::FString::FString(&local_200,"Channels");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_200);
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
  if ((param_1->field_0x2b & 4) != 0) {
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->Channels).ArrayNum << 3,
               (longlong)(this->Channels).ArrayMax << 3);
    ::FString::FString(&local_1f0,"Channels");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_1f0);
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->Challenge).Data.ArrayNum * 2,
               (longlong)(this->Challenge).Data.ArrayMax * 2);
    ::FString::FString(&local_1e0,"Challenge");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_1e0);
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->ClientResponse).Data.ArrayNum * 2,
               (longlong)(this->ClientResponse).Data.ArrayMax * 2);
    ::FString::FString(&local_1d0,"ClientResponse");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_1d0);
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->RequestURL).Data.ArrayNum * 2,
               (longlong)(this->RequestURL).Data.ArrayMax * 2);
    ::FString::FString(&local_1c0,"RequestURL");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_1c0);
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    (**(code **)((this->SendBuffer)._padding_ + 0x270))(&this->SendBuffer,param_1);
    ::FString::FString(&local_1b0,"SendBuffer");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_1b0);
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->Channels).ArrayNum << 3,
               (longlong)(this->Channels).ArrayMax << 3);
    ::FString::FString(&local_1a0,"Channels");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_1a0);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->OutReliable).ArrayNum << 2,
               (longlong)(this->OutReliable).ArrayMax << 2);
    ::FString::FString(&local_a0,"OutReliable");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_a0);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->InReliable).ArrayNum << 2,
               (longlong)(this->InReliable).ArrayMax << 2);
    ::FString::FString(&local_b0,"InReliable");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_b0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->PendingOutRec).ArrayNum << 2,
               (longlong)(this->PendingOutRec).ArrayMax << 2);
    ::FString::FString(&local_c0,"PendingOutRec");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_c0);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
    ::CountBytes((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                  *)&this->ActorChannels,param_1);
    ::FString::FString(local_80,"ActorChannels");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,local_80);
    if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::CountBytes
              (&this->DestroyedStartupOrDormantActorGUIDs,param_1);
    ::FString::FString(&local_90,"DestroyedStartupOrDormantActorGUIDs");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_90);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    pTVar1 = &this->KeepProcessingActorChannelBunchesMap;
    TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::CountBytes((TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)pTVar1,param_1);
    iStack_300 = 0;
    local_2f8 = &(this->KeepProcessingActorChannelBunchesMap).field_0x10;
    iVar10 = *(int *)&(this->KeepProcessingActorChannelBunchesMap).field_0x28;
    local_310 = 1;
    iVar9 = 0;
    uStack_2fc = 1;
    iStack_2ec = iStack_300;
    local_2e8 = iStack_300;
    if (iVar10 != 0) {
      puVar15 = *(uint **)&(this->KeepProcessingActorChannelBunchesMap).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)local_2f8;
      }
      uStack_2fc = *puVar15;
      while (uStack_2fc == 0) {
        lVar8 = (longlong)iStack_300;
        local_2e8 = local_2e8 + 0x20;
        iStack_300 = iStack_300 + 1;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_300) {
          iVar9 = *(int *)&(this->KeepProcessingActorChannelBunchesMap).field_0x28;
          uStack_2fc = 1;
          iStack_2ec = iVar10;
          goto LAB_147ff3435;
        }
        uStack_2fc = puVar15[lVar8 + 1];
      }
      iVar9 = *(int *)&(this->KeepProcessingActorChannelBunchesMap).field_0x28;
      uStack_2fc = -uStack_2fc & uStack_2fc;
      uVar4 = (ulonglong)uStack_2fc * 2 + 1;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_2d8 = (int)lVar8;
      iStack_2ec = local_2e8 + -1 + local_2d8;
      if (iVar9 < iStack_2ec) {
        iStack_2ec = iVar10;
      }
    }
LAB_147ff3435:
    uStack_2e4 = local_54;
    iStack_2e0 = *(int *)&(this->KeepProcessingActorChannelBunchesMap).field_0x8 -
                 *(int *)&(this->KeepProcessingActorChannelBunchesMap).field_0x34;
    local_348 = *(uint *)&(this->KeepProcessingActorChannelBunchesMap).field_0x28;
    TStack_258._padding_ = CONCAT44(uStack_2fc,iStack_300);
    uStack_2f0 = 0xffffffff;
    TStack_258.CurrentBitIndex = iStack_2ec;
    TStack_258.UnvisitedBitMask = 0xffffffff;
    uVar16 = local_348 & 0xffffffe0;
    iVar10 = (int)local_348 >> 5;
    TStack_258._28_4_ = local_54;
    TStack_258.BaseBitIndex = local_2e8;
    uStack_238 = CONCAT44(uStack_2dc,iStack_2e0);
    local_308 = pTVar1;
    local_260 = pTVar1;
    TStack_258.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2f8;
    if ((((int)local_348 < 0) || (iVar9 < (int)local_348)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar17 = *(uint *)&(this->KeepProcessingActorChannelBunchesMap).field_0x28;
    if (local_348 != uVar17) {
      puVar14 = *(undefined1 **)&(this->KeepProcessingActorChannelBunchesMap).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = &(this->KeepProcessingActorChannelBunchesMap).field_0x10;
      }
      uVar19 = -1 << ((byte)local_348 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar10 * 4);
      while (uVar19 == 0) {
        lVar8 = (longlong)iVar10;
        uVar16 = uVar16 + 0x20;
        iVar10 = iVar10 + 1;
        local_348 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_147ff3563;
        uVar19 = *(uint *)(puVar14 + lVar8 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_2d4 = (int)lVar8;
      local_348 = local_2d4 + -1 + uVar16;
      if ((int)uVar17 < (int)local_348) {
        local_348 = uVar17;
      }
    }
LAB_147ff3563:
    while( true ) {
      pTVar1 = local_260;
      if (*(int *)(&local_260->field_0x0 + 8) - *(int *)(&local_260->field_0x0 + 0x34) !=
          (int)uStack_238) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_258.CurrentBitIndex == local_348) &&
          (TStack_258.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)
           &(this->KeepProcessingActorChannelBunchesMap).field_0x10)) &&
         (pTVar1 == &this->KeepProcessingActorChannelBunchesMap)) break;
      lVar8 = *(longlong *)&pTVar1->field_0x0;
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)
                         *(int *)((longlong)TStack_258.CurrentBitIndex * 0x20 + 0x10 + lVar8) << 3,
                 (longlong)*(int *)((longlong)TStack_258.CurrentBitIndex * 0x20 + 0x14 + lVar8) << 3
                );
      TStack_258.UnvisitedBitMask = TStack_258.UnvisitedBitMask & ~TStack_258._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_258);
    }
    ::FString::FString(&local_190,"KeepProcessingActorChannelBunchesMap");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_190);
    iVar10 = 0;
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    UE::Net::Private::FDormantReplicatorHolder::CountBytes(&this->DormantReplicatorSet,param_1);
    ::FString::FString(&local_180,"DormantReplicatorSet");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_180);
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)*(int *)&(this->ClientVisibleLevelNames).Elements.field_0x8 << 4,
               (longlong)*(int *)&(this->ClientVisibleLevelNames).Elements.field_0xc << 4);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(ulonglong)
                       (*(int *)&(this->ClientVisibleLevelNames).Elements.field_0x28 + 0x1fU >> 5)
                       << 2,
               (ulonglong)
               (*(int *)&(this->ClientVisibleLevelNames).Elements.field_0x2c + 0x1fU >> 5) << 2);
    lVar8 = (longlong)(this->ClientVisibleLevelNames).HashSize << 2;
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar8,lVar8);
    ::FString::FString(&local_170,"ClientVisibleLevelNames");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_170);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
    CountBytes((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                *)&this->ClientVisibleActorOuters,param_1);
    ::FString::FString(&local_160,"ClientVisibleActorOuters");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_160);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    pTVar2 = &this->ActorsStarvedByClassTimeMap;
    TSet<TTuple<FString,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::CountBytes((TSet<TTuple<FString,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)pTVar2,param_1);
    puVar14 = &(this->ActorsStarvedByClassTimeMap).field_0x10;
    iVar9 = *(int *)&(this->ActorsStarvedByClassTimeMap).field_0x28;
    local_2a0 = 0;
    iStack_2a4 = 0;
    if (iVar9 != 0) {
      puVar15 = *(uint **)&(this->ActorsStarvedByClassTimeMap).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar14;
      }
      uVar16 = *puVar15;
      while (uVar16 == 0) {
        lVar8 = (longlong)iVar10;
        local_2a0 = local_2a0 + 0x20;
        iVar10 = iVar10 + 1;
        iStack_2a4 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_147ff3812;
        uVar16 = puVar15[lVar8 + 1];
      }
      local_310 = (ulonglong)(-uVar16 & uVar16);
      uVar4 = local_310 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_2d0 = (int)lVar8;
      iStack_2a4 = local_2a0 + -1 + local_2d0;
      if (iVar9 < iStack_2a4) {
        iStack_2a4 = iVar9;
      }
    }
LAB_147ff3812:
    uVar16 = *(uint *)&(this->ActorsStarvedByClassTimeMap).field_0x28;
    uStack_2b4 = (undefined4)local_310;
    iStack_29c = iStack_2ec;
    iStack_298 = *(int *)&(this->ActorsStarvedByClassTimeMap).field_0x8 -
                 *(int *)&(this->ActorsStarvedByClassTimeMap).field_0x34;
    TStack_288._padding_ = CONCAT44(uStack_2b4,iVar10);
    uStack_2a8 = 0xffffffff;
    uVar17 = uVar16 & 0xffffffe0;
    TStack_288.CurrentBitIndex = iStack_2a4;
    TStack_288.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar16 >> 5;
    TStack_288._28_4_ = iStack_2ec;
    TStack_288.BaseBitIndex = local_2a0;
    uStack_268 = CONCAT44(uStack_294,iStack_298);
    local_2c0 = pTVar2;
    iStack_2b8 = iVar10;
    local_2b0 = puVar14;
    local_290 = pTVar2;
    TStack_288.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar14;
    if ((((int)uVar16 < 0) || (iVar9 < (int)uVar16)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar19 = *(uint *)&(this->ActorsStarvedByClassTimeMap).field_0x28;
    if (uVar16 != uVar19) {
      puVar13 = *(undefined1 **)&(this->ActorsStarvedByClassTimeMap).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar14;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
      while (uVar16 == 0) {
        lVar8 = (longlong)iVar11;
        uVar17 = uVar17 + 0x20;
        iVar11 = iVar11 + 1;
        uVar16 = uVar19;
        if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_147ff391f;
        uVar16 = *(uint *)(puVar13 + lVar8 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar16 = (uVar17 - 1) + (int)lVar8;
      if ((int)uVar19 < (int)uVar16) {
        uVar16 = uVar19;
      }
    }
LAB_147ff391f:
    while( true ) {
      pTVar2 = local_290;
      if (*(int *)(&local_290->field_0x0 + 8) - *(int *)(&local_290->field_0x0 + 0x34) !=
          (int)uStack_268) {
        `TSparseArray<TSparseSetElement<TTuple<FString,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_288.CurrentBitIndex == uVar16) &&
          (TStack_288.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar14)) &&
         (pTVar2 == &this->ActorsStarvedByClassTimeMap)) break;
      pFVar3 = (FString *)
               (*(longlong *)&pTVar2->field_0x0 + (longlong)TStack_288.CurrentBitIndex * 0x28);
      ::operator<<(param_1,pFVar3);
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)pFVar3[1].Data.ArrayNum << 2,
                 (longlong)pFVar3[1].Data.ArrayMax << 2);
      TStack_288.UnvisitedBitMask = TStack_288.UnvisitedBitMask & ~TStack_288._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_288);
    }
    ::FString::FString(&local_150,"ActorsStarvedByClassTimeMap");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_150);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    TSet<TTuple<int,FNetworkGUID>,TDefaultMapHashableKeyFuncs<int,FNetworkGUID,0>,FDefaultSetAllocator>
    ::CountBytes((TSet<TTuple<int,FNetworkGUID>,TDefaultMapHashableKeyFuncs<int,FNetworkGUID,0>,FDefaultSetAllocator>
                  *)&this->IgnoringChannels,param_1);
    ::FString::FString(&local_140,"IgnoringChannels");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_140);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->OutgoingBunches).ArrayNum << 3,
               (longlong)(this->OutgoingBunches).ArrayMax << 3);
    ::FString::FString(&local_130,"OutgoingBunches");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_130);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    lVar8 = (longlong)(this->ChannelRecord).ChannelRecord.Storage.ArrayNum << 2;
    (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar8,lVar8);
    ::FString::FString(&local_120,"ChannelRecord");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_120);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    (**(code **)((this->LastOut)._padding_ + 0x270))(&this->LastOut,param_1);
    ::FString::FString(&local_110,"LastOut");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_110);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    (**(code **)((this->SendBunchHeader)._padding_ + 0x270))(&this->SendBunchHeader,param_1);
    ::FString::FString(&local_100,"SendBunchHeader");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_100);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    this_00 = (this->Handler).Ptr;
    if (this_00 != (PacketHandler *)0x0) {
      PacketHandler::CountBytes(this_00,param_1);
    }
    ::FString::FString(&local_f0,"PacketHandler");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_f0);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->Delayed).ArrayNum * 0x38,
               (longlong)(this->Delayed).ArrayMax * 0x38);
    iVar10 = (this->Delayed).ArrayNum;
    pFVar12 = (this->Delayed).AllocatorInstance.Data;
    pFVar18 = pFVar12 + (longlong)iVar10 * 0x38;
    while( true ) {
      if ((this->Delayed).ArrayNum != iVar10) {
        `TCheckedPointerIterator<FDelayedPacket,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar12 == pFVar18) break;
      (**(code **)(*(longlong *)param_1 + 0x10))
                (param_1,(longlong)*(int *)(pFVar12 + 8),(longlong)*(int *)(pFVar12 + 0xc));
      pFVar12 = pFVar12 + 0x38;
    }
    ::FString::FString(&local_e0,"Delayed");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_e0);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_340);
    (**(code **)(*(longlong *)param_1 + 0x10))
              (param_1,(longlong)(this->DelayedIncomingPackets).ArrayNum * 0x18,
               (longlong)(this->DelayedIncomingPackets).ArrayMax * 0x18);
    iVar10 = (this->DelayedIncomingPackets).ArrayNum;
    pFVar18 = (this->DelayedIncomingPackets).AllocatorInstance.Data;
    pFVar12 = pFVar18 + (longlong)iVar10 * 0x18;
    while( true ) {
      if ((this->DelayedIncomingPackets).ArrayNum != iVar10) {
        `TCheckedPointerIterator<FDelayedIncomingPacket,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_318);
      }
      if (pFVar18 == pFVar12) break;
      plVar5 = *(longlong **)pFVar18;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x270))(plVar5,param_1);
      }
      (**(code **)(*(longlong *)param_1 + 0x10))(param_1,8,8);
      pFVar18 = pFVar18 + 0x18;
    }
    ::FString::FString(&local_d0,"DelayedIncoming");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_340,&local_d0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_340);
  return;
}

// Serialize @ 147ff3d60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::Serialize(UNetConnection *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetAllowExistingChannelIndex @ 147ff3fe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::SetAllowExistingChannelIndex(UNetConnection *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  UChannel *this_00;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  UClass *pUVar10;
  ulonglong uVar11;
  UNetConnection *pUVar12;
  ForAnyElementType FVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FScriptContainerElement *local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  void *local_68 [2];
  void *local_58 [3];
  
  if (((this->bInternalAck == 0) || (this->bReplay == 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInternalAck() && IsReplay()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0x103f,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this->bAllowExistingChannelIndex = param_1;
  TSet<TTuple<int,FNetworkGUID>,TDefaultMapHashableKeyFuncs<int,FNetworkGUID,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FNetworkGUID>,TDefaultMapHashableKeyFuncs<int,FNetworkGUID,0>,FDefaultSetAllocator>
           *)&this->IgnoringChannels);
  if (!param_1) {
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
    GenerateKeyArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
               &this->ChannelIndexMap,&local_78);
    iVar7 = local_78.ArrayNum;
    local_res20 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 4;
    FVar13.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      pFVar1 = local_res20;
      if (local_78.ArrayNum != iVar7) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar13.Data == pFVar1) break;
      uVar2 = *(uint *)FVar13.Data;
      uVar9 = 0;
      if ((int)uVar2 < (this->Channels).ArrayNum) {
        uVar9 = ~uVar2 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = *(UChannel **)((this->Channels).AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
      if ((this_00 != (UChannel *)0x0) && (this_00->Broken != 0)) {
        pUVar10 = Z_Construct_UClass_UActorChannel_NoRegister();
        iVar3 = (int)pUVar10->_padding_;
        if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar10->_padding_)) {
          pUVar12 = this_00[2].Connection.field0_0x0.DebugPtr;
          iVar3 = *(int *)&this_00[2].field_0x30;
          plVar6 = &pUVar12->_padding_;
          while( true ) {
            if (*(int *)&this_00[2].field_0x30 != iVar3) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<FInBunch_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res8);
            }
            if (pUVar12 == (UNetConnection *)(plVar6 + iVar3)) goto LAB_147ff420d;
            lVar4 = pUVar12->_padding_;
            if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0xe8) & 2) != 0)) break;
            pUVar12 = (UNetConnection *)&pUVar12->_padding_;
          }
          if (2 < (byte)LogNet._0_1_) {
            (**(code **)(this_00->_padding_ + 0x2d0))(this_00,local_68);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            if (local_68[0] != (void *)0x0) {
              FMemory::Free(local_68[0]);
            }
          }
          UChannel::ConditionalCleanUp(this_00,true,*(EChannelCloseReason *)(lVar4 + 0xea));
LAB_147ff420d:
          if (this_00[1]._padding_ == 0) {
            if (2 < (byte)LogNet._0_1_) {
              (**(code **)(this_00->_padding_ + 0x2d0))(this_00,local_58);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              if (local_58[0] != (void *)0x0) {
                FMemory::Free(local_58[0]);
              }
            }
            UChannel::ConditionalCleanUp(this_00,true,Destroyed);
          }
        }
      }
      FVar13.Data = FVar13.Data + 4;
    }
    TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
    GenerateKeyArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
               &this->ChannelIndexMap,&local_78);
    iVar7 = local_78.ArrayNum;
    uVar11 = (ulonglong)local_78.ArrayNum;
    pFVar1 = local_78.AllocatorInstance.Data + uVar11 * 4;
    FVar13.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar11 != iVar7) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (FVar13.Data == pFVar1) break;
      RestoreRemappedChannel(this,*(uint *)FVar13.Data);
      uVar11 = local_78._8_8_ & 0xffffffff;
      FVar13.Data = FVar13.Data + 4;
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->ChannelIndexMap);
  return;
}

// SetClientHandshakeId @ 147ff4cc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::SetClientHandshakeId(UNetConnection *this,uint param_1)

{
  this->ClientHandshakeId = param_1;
  return;
}

// SetClientLoginState @ 147ff4cd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::SetClientLoginState(UNetConnection *this,Type param_1)

{
  int *piVar1;
  UNetDriver *pUVar2;
  UReplicationSystem *this_00;
  
  if (this->ClientLoginState == param_1) {
    if (5 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      return;
    }
  }
  else {
    if ((5 < (byte)LogNet._0_1_) &&
       ((pUVar2 = (this->Driver).field0_0x0.DebugPtr, pUVar2 == (UNetDriver *)0x0 ||
        (((pUVar2->DDoS).bDDoSLogRestrictions == false &&
         (((pUVar2->DDoS).bDDoSDetection == false ||
          (piVar1 = &(pUVar2->DDoS).LogHitCounter, *piVar1 = *piVar1 + 1,
          (pUVar2->DDoS).LogHitCounter <= (pUVar2->DDoS).DDoSLogSpamLimit)))))))) {
      EClientLoginState::ToString(param_1);
      EClientLoginState::ToString(this->ClientLoginState);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    this_00 = ((this->Driver).field0_0x0.DebugPtr)->ReplicationSystem;
    if ((this_00 != (UReplicationSystem *)0x0) && (param_1 == ReceivedJoin)) {
      UReplicationSystem::SetReplicationEnabledForConnection
                (this_00,(this->ConnectionHandle).ParentConnectionId,true);
    }
    this->ClientLoginState = param_1;
  }
  return;
}

// SetClientWorldPackageName @ 147ff4e10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::SetClientWorldPackageName(UNetConnection *this,FName param_1)

{
  UNetDriver *this_00;
  
  this_00 = (this->Driver).field0_0x0.DebugPtr;
  this->ClientWorldPackageName = param_1;
  if (this_00->bIsUsingIris != false) {
    UNetDriver::UpdateGroupFilterStatusForAllLevelsForConnection(this_00,this->ConnectionHandle);
    return;
  }
  UpdateAllCachedLevelVisibility(this);
  return;
}

// SetConnectionState @ 147ff4ec0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::SetConnectionState(UNetConnection *this,EConnectionState param_1)

{
  this->State = param_1;
  FNetTrace::TraceConnectionStateUpdated
            (this->NetTraceId,(this->ConnectionHandle).ParentConnectionId,(uchar)param_1);
  return;
}

// SetEncryptionData @ 147ff56e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::SetEncryptionData(UNetConnection *this,FEncryptionData *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FEncryptionComponent,1> local_28;
  void *local_18 [2];
  
  if ((this->Handler).Ptr != (PacketHandler *)0x0) {
    if (5 < (byte)LogNet._0_1_) {
      (**(code **)(this->_padding_ + 0x2e0))(this,local_18);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
    }
    PacketHandler::GetEncryptionComponent((this->Handler).Ptr,&local_28);
    if (local_28.Object == (FEncryptionComponent *)0x0) {
      if (2 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
    }
    else {
      if ((local_28.Object == (FEncryptionComponent *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(*(longlong *)local_28.Object + 0xa8))(local_28.Object,param_1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetExpectedClientLoginMsgType @ 147ff57e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::SetExpectedClientLoginMsgType(UNetConnection *this,uchar param_1)

{
  int *piVar1;
  UNetDriver *pUVar2;
  bool bVar3;
  
  pUVar2 = (this->Driver).field0_0x0.DebugPtr;
  if ((pUVar2 == (UNetDriver *)0x0) ||
     (((pUVar2->DDoS).bDDoSLogRestrictions == false &&
      (((pUVar2->DDoS).bDDoSDetection == false ||
       (piVar1 = &(pUVar2->DDoS).LogHitCounter, *piVar1 = *piVar1 + 1,
       (pUVar2->DDoS).LogHitCounter <= (pUVar2->DDoS).DDoSLogSpamLimit)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (this->ExpectedClientLoginMsgType == param_1) {
    if ((5 < (byte)LogNet._0_1_) && (!bVar3)) {
      bVar3 = FNetControlMessageInfo::IsRegistered(param_1);
      if (bVar3) {
        FNetControlMessageInfo::GetName(param_1);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      return;
    }
  }
  else {
    if ((5 < (byte)LogNet._0_1_) && (!bVar3)) {
      bVar3 = FNetControlMessageInfo::IsRegistered(param_1);
      if (bVar3) {
        FNetControlMessageInfo::GetName(param_1);
      }
      bVar3 = FNetControlMessageInfo::IsRegistered(this->ExpectedClientLoginMsgType);
      if (bVar3) {
        FNetControlMessageInfo::GetName(this->ExpectedClientLoginMsgType);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    this->ExpectedClientLoginMsgType = param_1;
  }
  return;
}

// SetIgnoreActorBunches @ 147ff5b90

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
UNetConnection::SetIgnoreActorBunches
          (UNetConnection *this,bool param_1,
          TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *param_2)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->bInternalAck == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInternalAck()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0x1079,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->bIgnoreActorBunches = param_1;
  this_00 = &this->IgnoredBunchChannels;
  bVar4 = 1 < (this->IgnoredBunchChannels).HashSize;
  if (!bVar4) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar1 = &(this->IgnoredBunchChannels).Elements.field_0xc;
  *(undefined4 *)&(this->IgnoredBunchChannels).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->IgnoredBunchChannels).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IgnoredBunchChannels).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->IgnoredBunchChannels).Elements.field_0x2c;
  *(undefined4 *)&(this->IgnoredBunchChannels).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->IgnoredBunchChannels).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->IgnoredBunchChannels).Elements.field_0x10,0);
  }
  if (bVar4) {
    (this->IgnoredBunchChannels).HashSize = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  bVar4 = 1 < param_2->HashSize;
  if (!bVar4) {
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::UnhashElements(param_2)
    ;
  }
  puVar1 = &(param_2->Elements).field_0xc;
  *(undefined4 *)&(param_2->Elements).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)param_2,0,(int *)puVar1);
  }
  *(undefined4 *)&(param_2->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(param_2->Elements).field_0x34 = 0;
  iVar2 = *(int *)&(param_2->Elements).field_0x2c;
  *(undefined4 *)&(param_2->Elements).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(param_2->Elements).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10,0);
  }
  if (bVar4) {
    param_2->HashSize = 1;
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Rehash(param_2);
  }
  if ((this->bIgnoreActorBunches != false) && (&this->IgnoredBunchGuids != param_2)) {
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
    Move<TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>
              (&this->IgnoredBunchGuids,param_2);
  }
  return;
}

// SetIgnoreReservedChannels @ 147ff5d40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::SetIgnoreReservedChannels(UNetConnection *this,bool param_1)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  
  if ((this->bInternalAck == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInternalAck()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0x108d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->bIgnoreReservedChannels = param_1;
  this_00 = &this->ReservedChannels;
  bVar4 = 1 < (this->ReservedChannels).HashSize;
  if (!bVar4) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar1 = &(this->ReservedChannels).Elements.field_0xc;
  *(undefined4 *)&(this->ReservedChannels).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ReservedChannels).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReservedChannels).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->ReservedChannels).Elements.field_0x2c;
  *(undefined4 *)&(this->ReservedChannels).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ReservedChannels).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ReservedChannels).Elements.field_0x10
               ,0);
  }
  if (bVar4) {
    (this->ReservedChannels).HashSize = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  return;
}

// SetLocalPlayerFunction @ 147ff60b0

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

void __thiscall
UNetConnection::SetLocalPlayerFunction
          (UNetConnection *this,
          TFunction<ULocalPlayer_*___cdecl(UNetConnection_*,APlayerController_*)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = *(longlong *)param_1;
  uStack_30 = (longlong *)0x0;
  if (local_58 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,&local_48);
  }
  lVar6 = *(longlong *)&this->PlayerConnectionFunction;
  uVar7 = *(undefined8 *)&(this->PlayerConnectionFunction).field_0x8;
  uVar1 = *(undefined4 *)&(this->PlayerConnectionFunction).field_0x10;
  uVar2 = *(undefined4 *)&(this->PlayerConnectionFunction).field_0x14;
  uVar3 = *(undefined4 *)&(this->PlayerConnectionFunction).field_0x18;
  uVar4 = *(undefined4 *)&(this->PlayerConnectionFunction).field_0x1c;
  uVar5 = *(undefined8 *)&(this->PlayerConnectionFunction).field_0x20;
  plVar10 = *(longlong **)&(this->PlayerConnectionFunction).field_0x28;
  *(longlong *)&this->PlayerConnectionFunction = local_58;
  *(undefined8 *)&(this->PlayerConnectionFunction).field_0x8 = uStack_50;
  *(undefined4 *)&(this->PlayerConnectionFunction).field_0x10 = (undefined4)local_48;
  *(undefined4 *)&(this->PlayerConnectionFunction).field_0x14 = local_48._4_4_;
  *(undefined4 *)&(this->PlayerConnectionFunction).field_0x18 = uStack_40;
  *(undefined4 *)&(this->PlayerConnectionFunction).field_0x1c = uStack_3c;
  *(undefined4 *)&(this->PlayerConnectionFunction).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(this->PlayerConnectionFunction).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(this->PlayerConnectionFunction).field_0x28 = (undefined4)uStack_30;
  *(undefined4 *)&(this->PlayerConnectionFunction).field_0x2c = uStack_30._4_4_;
  local_48._0_4_ = uVar1;
  local_48._4_4_ = uVar2;
  uStack_40 = uVar3;
  uStack_3c = uVar4;
  local_38 = uVar5;
  uStack_30 = plVar10;
  local_58 = lVar6;
  uStack_50 = uVar7;
  if (lVar6 != 0) {
    plVar9 = &local_48;
    if (plVar10 != (longlong *)0x0) {
      plVar9 = plVar10;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (*(longlong *)param_1 != 0) {
    plVar10 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  return;
}

// SetNetVersionsOnArchive @ 147ff6270

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::SetNetVersionsOnArchive(UNetConnection *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_void___cdecl_UNetConnection::SetNetVersionsOnArchive(FArchive_&)const_::_2_::FStat_STAT_NetSetVersionsOnArchive>
  FVar6;
  FCustomVersion *pFVar7;
  FName FVar8;
  uint uVar9;
  int iVar10;
  FNameEntryId FVar11;
  FName FVar12;
  int iVar13;
  FCustomVersion *this_00;
  FName local_res8;
  FName local_res10;
  FGuid local_48;
  
  iVar13 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_NetSetVersionsOnArchive ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UNetConnection::SetNetVersionsOnArchive(FArchive_&)const_::_2_::FStat_STAT_NetSetVersionsOnArchive>
         )0x0) {
      pFVar5 = ::FName::FName(&local_res8,"STAT_NetSetVersionsOnArchive");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetSetVersionsOnArchive,*pFVar5,
                 L"STAT_NetSetVersionsOnArchive","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar6 = StatPtr_STAT_NetSetVersionsOnArchive;
  if (StatPtr_STAT_NetSetVersionsOnArchive ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UNetConnection::SetNetVersionsOnArchive(FArchive_&)const_::_2_::FStat_STAT_NetSetVersionsOnArchive>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_NetSetVersionsOnArchive");
    FVar6 = (FThreadSafeStaticStat<_public:_void___cdecl_UNetConnection::SetNetVersionsOnArchive(FArchive_&)const_::_2_::FStat_STAT_NetSetVersionsOnArchive>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetSetVersionsOnArchive,*pFVar5,
                         L"STAT_NetSetVersionsOnArchive","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar11.Value;
        local_res8.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                   ,0x17e1);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.ComparisonIndex.Value = FVar11.Value;
      local_res8.Number = uVar9;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar3 = true;
      goto LAB_147ff63f2;
    }
  }
  bVar3 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_147ff63f2:
  pcVar1 = *(code **)(*(longlong *)param_1 + 0x128);
  local_48 = FEngineNetworkCustomVersion::Guid;
  pFVar7 = FCustomVersionContainer::GetVersion(&this->NetworkCustomVersions,&local_48);
  iVar10 = iVar13;
  if (pFVar7 != (FCustomVersion *)0x0) {
    iVar10 = pFVar7->Version;
  }
  (*pcVar1)(param_1,iVar10);
  pcVar1 = *(code **)(*(longlong *)param_1 + 0x130);
  local_48 = FGameNetworkCustomVersion::Guid;
  pFVar7 = FCustomVersionContainer::GetVersion(&this->NetworkCustomVersions,&local_48);
  if (pFVar7 != (FCustomVersion *)0x0) {
    iVar13 = pFVar7->Version;
  }
  (*pcVar1)(param_1,iVar13);
  iVar13 = (this->NetworkCustomVersions).Versions.ArrayNum;
  this_00 = (FCustomVersion *)(this->NetworkCustomVersions).Versions.AllocatorInstance.Data;
  pFVar7 = this_00 + iVar13;
  while( true ) {
    if ((this->NetworkCustomVersions).Versions.ArrayNum != iVar13) {
      `TCheckedPointerIterator<FCustomVersion_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (this_00 == pFVar7) break;
    FVar8 = FCustomVersion::GetFriendlyName(this_00);
    FArchiveState::SetCustomVersion
              ((FArchiveState *)param_1,&this_00->Key,this_00->Version,*(FName *)FVar8);
    this_00 = this_00 + 1;
  }
  (**(code **)(*(longlong *)param_1 + 0x110))(param_1,this->PackageVersionUE);
  (**(code **)(*(longlong *)param_1 + 0x118))(param_1,this->PackageVersionLicenseeUE);
  (**(code **)(*(longlong *)param_1 + 0x120))(param_1,&this->EngineVersion);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FThreadStats::AddMessage(FVar12,CycleScopeEnd);
  }
  return;
}

// SetNetworkCustomVersions @ 147ff65e0

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
UNetConnection::SetNetworkCustomVersions(UNetConnection *this,FCustomVersionContainer *param_1)

{
  FCustomVersion *pFVar1;
  int iVar2;
  FName FVar3;
  FCustomVersion *this_00;
  undefined1 local_res10 [16];
  FGuid local_28;
  
  iVar2 = (param_1->Versions).ArrayNum;
  this_00 = (FCustomVersion *)(param_1->Versions).AllocatorInstance.Data;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if ((param_1->Versions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FCustomVersion_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (this_00 == pFVar1) break;
    FVar3 = FCustomVersion::GetFriendlyName(this_00);
    local_28.A = (this_00->Key).A;
    local_28.B = (this_00->Key).B;
    local_28.C = (this_00->Key).C;
    local_28.D = (this_00->Key).D;
    FCustomVersionContainer::SetVersion
              (&this->NetworkCustomVersions,&local_28,this_00->Version,*(FName *)FVar3);
    this_00 = this_00 + 1;
  }
  return;
}

// SetPendingCloseDueToReplicationFailure @ 147ff69c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::SetPendingCloseDueToReplicationFailure(UNetConnection *this)

{
  this->bConnectionPendingCloseDueToReplicationFailure = true;
  return;
}

// SetPendingCloseDueToSocketSendFailure @ 147ff69d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::SetPendingCloseDueToSocketSendFailure(UNetConnection *this)

{
  this->bConnectionPendingCloseDueToSocketSendFailure = true;
  return;
}

// SetPlayerOnlinePlatformName @ 147ff69e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::SetPlayerOnlinePlatformName(UNetConnection *this,FName param_1)

{
  this->PlayerOnlinePlatformName = param_1;
  return;
}

// SetReserveDestroyedChannels @ 147ff69f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::SetReserveDestroyedChannels(UNetConnection *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bInternalAck != 0) {
    this->bReserveDestroyedChannels = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsInternalAck()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                     ,0x1087,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bReserveDestroyedChannels = param_1;
  return;
}

// ShouldDropOutgoingPacketForLossSimulation @ 147ff7c30

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
UNetConnection::ShouldDropOutgoingPacketForLossSimulation(UNetConnection *this,long64 param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = UNetDriver::IsSimulatingPacketLossBurst((this->Driver).field0_0x0.DebugPtr);
  if (bVar2) {
    return true;
  }
  if (0 < (this->PacketSimulationSettings).PktLoss) {
    iVar1 = (this->PacketSimulationSettings).PktLossMaxSize;
    if ((iVar1 == 0) || ((int)param_1 < iVar1 * 8)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((((this->PacketSimulationSettings).PktLossMinSize << 3 < (int)param_1) && (bVar2)) &&
       (uVar3 = rand(),
       (float)(uVar3 & 0x7fff) * __real_3b480190 < (float)(this->PacketSimulationSettings).PktLoss))
    {
      return true;
    }
  }
  return false;
}

// ShouldReplicateVoicePacketFrom @ 147ff7d50

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
UNetConnection::ShouldReplicateVoicePacketFrom(UNetConnection *this,FUniqueNetId *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((((this->_padding_ == 0) || (*(char *)(this->_padding_ + 0x550) == '\0')) ||
      (cVar2 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1), cVar2 == '\0')) ||
     (cVar2 = (**(code **)(*(longlong *)this->_padding_ + 0xd08))
                        ((longlong *)this->_padding_,param_1), cVar2 != '\0')) {
    return false;
  }
  uVar6 = 0;
  if (0 < (this->Children).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Children).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      bVar3 = ShouldReplicateVoicePacketFrom
                        (*(UNetConnection **)((this->Children).AllocatorInstance.Data + lVar7),
                         param_1);
      if (!bVar3) {
        return false;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->Children).ArrayNum);
  }
  return true;
}

// StaticRegisterNativesUNetConnection @ 147ff88a0

void __cdecl UNetConnection::StaticRegisterNativesUNetConnection(void)

{
  return;
}

// StoreDormantReplicator @ 147ff8970

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
UNetConnection::StoreDormantReplicator
          (UNetConnection *this,AActor *param_1,UObject *param_2,
          TSharedRef<FObjectReplicator,1> *param_3)

{
  bool bVar1;
  UObject **local_res10;
  UObject *local_res18;
  
  param_3->Object->ObjectPtr = (UObject *)0x0;
  local_res18 = param_2;
  if (param_1 == (AActor *)0x0) {
    local_res10 = &local_res18;
    bVar1 = `UNetConnection::StoreDormantReplicator'::__l3::<lambda_1>::operator()(&local_res10);
    if (!bVar1) {
      return;
    }
  }
  UE::Net::Private::FDormantReplicatorHolder::StoreReplicator
            (&this->DormantReplicatorSet,param_1,local_res18,param_3);
  return;
}

// Tick @ 147ff8a60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::Tick(UNetConnection *this,float param_1)

{
  undefined1 *puVar1;
  TArray<TObjectPtr<UChannel>,TSizedDefaultAllocator<32>_> *pTVar2;
  TMap<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar3;
  FScriptContainerElement *_Dst;
  void *_Dst_00;
  int *piVar4;
  UNetDriver *pUVar5;
  UChannel *this_00;
  FOutBunch *pFVar6;
  UActorChannel *this_01;
  PacketHandler *pPVar7;
  FNetPing *this_02;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  double dVar15;
  TConsoleVariableData<int> *pTVar16;
  bool bVar17;
  bool bVar18;
  char cVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<FStat_Stat_NetConnectionTick> FVar24;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UNetConnection::Tick(float)_::_61_::FStat_STAT_NetConnection_TickChannels>
  FVar25;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UNetConnection::Tick(float)_::_178_::FStat_STAT_NetConnection_TickPacketHandler>
  FVar26;
  BufferedPacket *pBVar27;
  byte bVar28;
  ulonglong uVar29;
  uint uVar30;
  FName FVar31;
  longlong lVar32;
  FName FVar33;
  longlong lVar34;
  uint uVar35;
  uint uVar36;
  longlong lVar37;
  uint uVar38;
  float fVar39;
  double dVar40;
  float fVar41;
  double dVar42;
  float local_res20 [2];
  float local_2a8;
  FColor_u_0 local_2a4;
  FColor_u_0 local_2a0;
  FColor_u_0 local_29c;
  FName local_298;
  FName local_290;
  FName local_288;
  FName local_280;
  FName local_278;
  longlong local_270;
  FString local_268;
  FName local_258;
  FName local_248;
  FName local_238;
  longlong *local_228;
  undefined1 auStack_220 [16];
  uint uStack_210;
  uint uStack_20c;
  longlong local_208;
  TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_200;
  TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_1f8;
  undefined2 local_1f0;
  undefined4 local_1e8;
  LARGE_INTEGER local_1e0;
  LARGE_INTEGER local_1d8;
  LARGE_INTEGER local_1d0;
  LARGE_INTEGER local_1c8;
  LARGE_INTEGER local_1c0;
  LARGE_INTEGER local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  float *local_1a0;
  float *local_198;
  UNetConnection *local_190;
  longlong *local_188;
  float *local_180;
  float *local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  void *local_148 [2];
  void *local_138 [2];
  FNetResult local_128;
  undefined1 local_f8 [32];
  longlong local_d8;
  TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_d0;
  
  FVar24 = StatPtr_Stat_NetConnectionTick;
  if (StatPtr_Stat_NetConnectionTick == (FThreadSafeStaticStat<FStat_Stat_NetConnectionTick>)0x0) {
    pFVar23 = ::FName::FName(&local_170,"Stat_NetConnectionTick");
    FVar24 = (FThreadSafeStaticStat<FStat_Stat_NetConnectionTick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_Stat_NetConnectionTick,*pFVar23,
                        L"NetConnection Tick","STATGROUP_Net","STATCAT_Advanced",L"Net",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar33 = *(FName *)FVar24;
  bVar12 = false;
  bVar13 = false;
  local_238.ComparisonIndex.Value = 0;
  local_238.Number = 0;
  bVar17 = false;
  bVar20 = false;
  if ((FVar33.ComparisonIndex.Value.Value == 0) && (FVar33.Number == 0)) {
LAB_147ff8bef:
    bVar13 = bVar20;
    bVar12 = bVar17;
    bVar17 = false;
    local_298 = local_238;
    FVar33 = local_238;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2a4._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar12 = false;
      bVar13 = true;
      bVar17 = false;
      bVar20 = true;
      if (-1 < CpuChannel->Enabled) {
        local_290.ComparisonIndex.Value = FVar33.ComparisonIndex.Value.Value;
        local_290.Number = FVar33.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_290,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                   ,0x122c);
        bVar12 = true;
        bVar13 = true;
        bVar17 = true;
        bVar20 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147ff8bef;
    local_298 = FVar33;
    FThreadStats::AddMessage(FVar33,CycleScopeStart);
    bVar17 = true;
  }
  (**(code **)(this->_padding_ + 0x300))(this);
  QueryPerformanceCounter(&local_1e0);
  dVar15 = __real_4170000000000000;
  dVar10 = (double)local_1e0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  UpdateDelayedPackets(this,dVar10);
  dVar42 = this->LastTime;
  if (this->LastTime == 0.0) {
    this->LastTime = dVar10;
    auVar9._8_4_ = SUB84(dVar10,0);
    auVar9._0_8_ = dVar10;
    auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    this->LastReceiveRealtime = dVar10;
    this->LastGoodPacketRealtime = (double)auVar9._8_8_;
    dVar42 = dVar10;
  }
  pUVar5 = (this->Driver).field0_0x0.DebugPtr;
  this->FrameTime = dVar10 - dVar42;
  iVar22 = pUVar5->MaxNetTickRate;
  fVar39 = (float)(**(code **)(GEngine->_padding_ + 0x310))();
  fVar14 = __real_3f800000;
  fVar41 = __real_7f7fffff;
  if (0 < iVar22) {
    if (fVar39 <= 0.0) {
      fVar39 = __real_7f7fffff;
    }
    fVar41 = (float)iVar22;
  }
  local_2a8 = fVar41;
  if (fVar39 <= fVar41) {
    local_2a8 = fVar39;
  }
  if (local_2a8 <= 0.0) {
    local_2a8 = 0.0;
  }
  bVar28 = this->bInternalAck;
  if ((((bVar28 == 0) && (fVar41 < fVar39)) && (0.0 < local_2a8)) &&
     (this->FrameTime <= (double)(__real_3f800000 / local_2a8) &&
      (double)(__real_3f800000 / local_2a8) != this->FrameTime)) goto LAB_147ffa000;
  iVar22 = this->CountedFrames + 1;
  dVar40 = this->FrameTime + this->CumulativeTime;
  this->LastTime = dVar10;
  this->CountedFrames = iVar22;
  dVar42 = __real_3ff0000000000000;
  this->CumulativeTime = dVar40;
  if (dVar42 < dVar40) {
    this->CumulativeTime = 0.0;
    this->CountedFrames = 0;
    this->AverageFrameTime = dVar40 / (double)iVar22;
  }
  if (bVar28 != 0) {
    cVar19 = (**(code **)(((this->Driver).field0_0x0.DebugPtr)->_padding_ + 0x3f8))();
    this->OutAckPacketId = this->OutPacketId;
    this->LastReceiveTime = ((this->Driver).field0_0x0.DebugPtr)->ElapsedTime;
    QueryPerformanceCounter(&local_1d8);
    this->LastReceiveRealtime =
         (double)local_1d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar15;
    QueryPerformanceCounter(&local_1b8);
    uVar35 = 0xffffffff;
    this->LastGoodPacketRealtime =
         (double)local_1b8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar15;
    uVar38 = (this->ChannelRecord).ChannelRecord.Tail;
    if ((this->ChannelRecord).ChannelRecord.Head != uVar38) {
      do {
        uVar36 = *(uint *)((this->ChannelRecord).ChannelRecord.Storage.AllocatorInstance.Data +
                          (ulonglong)((this->ChannelRecord).ChannelRecord.IndexMask & uVar38) * 4);
        uVar30 = uVar36 & 0x7fffffff;
        (this->ChannelRecord).ChannelRecord.Tail = uVar38 + 1;
        if ((-1 < (int)uVar36) && (uVar30 != uVar35)) {
          if (((this->Channels).ArrayNum <= (int)uVar30) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          this_00 = *(UChannel **)((this->Channels).AllocatorInstance.Data + (ulonglong)uVar30 * 8);
          uVar35 = uVar30;
          if (this_00 != (UChannel *)0x0) {
            for (pFVar6 = this_00->OutRec; pFVar6 != (FOutBunch *)0x0; pFVar6 = pFVar6->Next) {
              pFVar6->ReceivedAck = '\x01';
            }
            if ((cVar19 != '\0') || (this_00->OpenedLocally != 0)) {
              this_00->OpenAcked = 1;
            }
            UChannel::ReceivedAcks(this_00);
          }
        }
        uVar38 = (this->ChannelRecord).ChannelRecord.Tail;
      } while ((this->ChannelRecord).ChannelRecord.Head != uVar38);
    }
  }
  dVar42 = dVar10 - this->StatUpdateTime;
  if ((double)this->StatPeriod < dVar42) {
    if (this->LagCount != 0) {
      this->AvgLag = (float)(this->LagAcc / (double)this->LagCount);
    }
    fVar41 = fVar14 / (float)dVar42;
    this->InBytesPerSecond = (int)((float)this->InBytes * fVar41);
    this->OutBytesPerSecond = (int)((float)this->OutBytes * fVar41);
    this->InPacketsPerSecond = (int)((float)this->InPackets * fVar41);
    this->OutPacketsPerSecond = (int)((float)this->OutPackets * fVar41);
    TPacketLossData<3>::UpdateLoss
              (&this->InPacketsLossPercentage,this->InPacketsLost,
               this->InTotalPacketsLost + this->InTotalPackets,this->StatPeriodCount);
    TPacketLossData<3>::UpdateLoss
              (&this->OutPacketsLossPercentage,this->OutPacketsLost,this->OutTotalNotifiedPackets,
               this->StatPeriodCount);
    this->StatPeriodCount = this->StatPeriodCount + 1;
    this->StatUpdateTime = dVar10;
    this->LagAcc = 0.0;
    this->LagCount = 0;
    this->InPacketsLost = 0;
    this->OutPacketsLost = 0;
    this->InBytes = 0;
    this->OutBytes = 0;
    this->InPackets = 0;
    this->OutPackets = 0;
  }
  if (this->bConnectionPendingCloseDueToSocketSendFailure != false) {
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (&local_128,SocketSendFailure);
    Close(this,&local_128);
    if (local_128.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_128.NextResult + -0x10))((longlong)local_128.NextResult + -0x10);
    }
    if (local_128.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.ErrorContext.Data.AllocatorInstance.Data);
    }
    this->bConnectionPendingCloseDueToSocketSendFailure = false;
    goto LAB_147ffa000;
  }
  dVar42 = ((this->Driver).field0_0x0.DebugPtr)->ElapsedTime;
  dVar40 = this->LastTickTime;
  this->LastTickTime = dVar42;
  fVar41 = (float)(**(code **)(this->_padding_ + 0x3d8))(this);
  if ((this->State != USOCK_Closing) ||
     (dVar42 < this->GracefulCloseTimeoutDeadline || dVar42 == this->GracefulCloseTimeoutDeadline))
  {
    bVar20 = false;
  }
  else {
    bVar20 = true;
  }
  if (((double)fVar41 < dVar10 - this->LastReceiveRealtime) || (bVar20)) {
    QueryPerformanceCounter(&local_1c0);
    (**(code **)(this->_padding_ + 0x2e0))(this,local_138);
    ::FString::PrintfImpl
              (&local_268,
               L"%s. Elapsed: %2.2f, Real: %2.2f, Good: %2.2f, DriverTime: %2.2f, Threshold: %2.2f, %s"
              );
    if (local_138[0] != (void *)0x0) {
      FMemory::Free(local_138[0]);
    }
    QueryPerformanceCounter(&local_1c8);
    if ((double)GEngine->NetErrorLogInterval <
        ((double)local_1c8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar15) -
        LastTimePrinted) {
      if (2 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      QueryPerformanceCounter(&local_1d0);
      LastTimePrinted = (double)local_1d0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar15;
    }
    (**(code **)(this->_padding_ + 0x408))(this,&local_268);
    if ((this->Driver).field0_0x0.DebugPtr == (UNetDriver *)0x0) {
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      goto LAB_147ffa000;
    }
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (((this->OpenChannels).ArrayNum < (this->ChannelsToTick).ArrayNum) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("ChannelsToTick.Num() <= OpenChannels.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                            ,0x12e5,
                            L"More ticking channels (%d) than open channels (%d) for net connection!"
                           ), bVar20)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_NetConnection_TickChannels ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UNetConnection::Tick(float)_::_61_::FStat_STAT_NetConnection_TickChannels>
           )0x0) {
        pFVar23 = ::FName::FName(&local_168,"STAT_NetConnection_TickChannels");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetConnection_TickChannels,*pFVar23,
                   L"STAT_NetConnection_TickChannels","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS0);
      }
      else {
        _Init_thread_footer(&::_TSS0);
      }
    }
    FVar25 = StatPtr_STAT_NetConnection_TickChannels;
    if (StatPtr_STAT_NetConnection_TickChannels ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UNetConnection::Tick(float)_::_61_::FStat_STAT_NetConnection_TickChannels>
         )0x0) {
      pFVar23 = ::FName::FName(&local_160,"STAT_NetConnection_TickChannels");
      FVar25 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UNetConnection::Tick(float)_::_61_::FStat_STAT_NetConnection_TickChannels>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetConnection_TickChannels,
                            *pFVar23,L"STAT_NetConnection_TickChannels","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar31 = *(FName *)FVar25;
    bVar11 = false;
    bVar20 = false;
    local_248.ComparisonIndex.Value = 0;
    local_248.Number = 0;
    bVar21 = false;
    bVar18 = false;
    if ((FVar31.ComparisonIndex.Value.Value == 0) && (FVar31.Number == 0)) {
LAB_147ff92d4:
      bVar11 = bVar21;
      bVar20 = bVar18;
      bVar18 = false;
      local_280 = local_248;
      FVar31 = local_248;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_2a0.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_2a0._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
        bVar11 = false;
        bVar20 = true;
        bVar21 = false;
        bVar18 = true;
        if (-1 < CpuChannel->Enabled) {
          local_288.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
          local_288.Number = FVar31.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_288,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                     ,0x12e7);
          bVar11 = true;
          bVar20 = true;
          bVar21 = true;
          bVar18 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_147ff92d4;
      local_280 = FVar31;
      FThreadStats::AddMessage(FVar31,CycleScopeStart);
      bVar18 = true;
    }
    pTVar16 = CVarTickAllOpenChannels.Ref;
    bVar21 = IsInParallelGameThread();
    if (bVar21) {
LAB_147ff92fa:
      lVar32 = 0;
    }
    else {
      bVar21 = IsInGameThread();
      lVar32 = 4;
      if (bVar21) goto LAB_147ff92fa;
    }
    if (*(int *)((longlong)pTVar16->ShadowedValue + lVar32) == 0) {
      uVar38 = (this->ChannelsToTick).ArrayNum - 1;
      if (-1 < (int)uVar38) {
        lVar37 = (longlong)(int)uVar38;
        pTVar2 = &this->ChannelsToTick;
        lVar32 = lVar37 * 8;
        do {
          uVar36 = ~uVar38 >> 0x1f;
          uVar35 = 0;
          if ((int)uVar38 < (this->ChannelsToTick).ArrayNum) {
            uVar35 = uVar36;
          }
          if ((uVar35 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          (**(code **)(**(longlong **)((pTVar2->AllocatorInstance).Data + lVar32) + 0x2f0))();
          uVar35 = 0;
          if ((int)uVar38 < (this->ChannelsToTick).ArrayNum) {
            uVar35 = uVar36;
          }
          if ((uVar35 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          cVar19 = (**(code **)(**(longlong **)((pTVar2->AllocatorInstance).Data + lVar32) + 0x2f8))
                             ();
          if (cVar19 != '\0') {
            uVar35 = 0;
            if ((int)uVar38 < (this->ChannelsToTick).ArrayNum) {
              uVar35 = uVar36;
            }
            if ((uVar35 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            _Dst = (pTVar2->AllocatorInstance).Data + lVar37 * 8;
            iVar22 = (this->ChannelsToTick).ArrayNum + ~uVar38;
            if (iVar22 != 0) {
              memmove(_Dst,_Dst + 8,(longlong)iVar22 << 3);
            }
            iVar22 = (this->ChannelsToTick).ArrayNum + -1;
            (this->ChannelsToTick).ArrayNum = iVar22;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&pTVar2->AllocatorInstance,iVar22,&(this->ChannelsToTick).ArrayMax);
          }
          lVar37 = lVar37 + -1;
          lVar32 = lVar32 + -8;
          uVar38 = uVar38 - 1;
          FVar33 = local_298;
        } while (-1 < (int)uVar38);
      }
    }
    else {
      uVar38 = (this->OpenChannels).ArrayNum - 1;
      if (-1 < (int)uVar38) {
        lVar32 = (longlong)(int)uVar38;
        do {
          uVar35 = 0;
          if ((int)uVar38 < (this->OpenChannels).ArrayNum) {
            uVar35 = ~uVar38 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(longlong *)((this->OpenChannels).AllocatorInstance.Data + lVar32 * 8) == 0) {
            if (2 < (byte)LogNet._0_1_) {
              (**(code **)(this->_padding_ + 0x2e0))(this,local_148);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              if (local_148[0] != (void *)0x0) {
                FMemory::Free(local_148[0]);
              }
            }
          }
          else {
            uVar35 = 0;
            if ((int)uVar38 < (this->OpenChannels).ArrayNum) {
              uVar35 = ~uVar38 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            (**(code **)(**(longlong **)((this->OpenChannels).AllocatorInstance.Data + lVar32 * 8) +
                        0x2f0))();
          }
          lVar32 = lVar32 + -1;
          uVar38 = uVar38 - 1;
        } while (-1 < (int)uVar38);
      }
    }
    pTVar3 = &this->KeepProcessingActorChannelBunchesMap;
    TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_f8,
               (TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)pTVar3);
    local_1f0 = 0;
    stack0xfffffffffffffde8 = local_f8._16_16_;
    local_228 = (longlong *)local_f8._0_8_;
    auStack_220._0_8_ = local_f8._8_8_;
    local_208 = local_d8;
    pTStack_200 = pTStack_d0;
    uVar29 = local_f8._24_8_ >> 0x20;
    local_1f8 = (TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *)pTVar3;
    if (local_f8._28_4_ < *(int *)(local_f8._16_8_ + 0x18)) {
      do {
        uVar38 = 0;
        lVar37 = (longlong)(int)uVar29 * 0x20;
        lVar32 = *local_228;
        iVar22 = *(int *)(lVar37 + 0x10 + lVar32);
        if (0 < iVar22) {
          lVar34 = 0;
          do {
            uVar35 = 0;
            if ((int)uVar38 < iVar22) {
              uVar35 = ~uVar38 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            this_01 = *(UActorChannel **)(lVar34 + *(longlong *)(lVar37 + 8 + lVar32));
            if ((this_01 == (UActorChannel *)0x0) || (((uint)this_01->_padding_ >> 0x1e & 1) != 0))
            {
              if (5 < (byte)LogNet._0_1_) {
                UE::Logging::Private::BasicLog<6>
                          ((FStaticBasicLogRecord *)&PTR_u_UNetConnection__1519d0aa8,
                           (FLogCategoryBase *)&LogNet);
              }
LAB_147ff9745:
              uVar35 = 0;
              if ((int)uVar38 < *(int *)(lVar37 + 0x10 + lVar32)) {
                uVar35 = ~uVar38 >> 0x1f;
              }
              if ((uVar35 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              _Dst_00 = (void *)(*(longlong *)(lVar37 + 8 + lVar32) + (longlong)(int)uVar38 * 8);
              iVar22 = ~uVar38 + *(int *)(lVar37 + 0x10 + lVar32);
              if (iVar22 != 0) {
                memmove(_Dst_00,(void *)((longlong)_Dst_00 + 8),(longlong)iVar22 << 3);
              }
              piVar4 = (int *)(lVar37 + 0x10 + lVar32);
              *piVar4 = *piVar4 + -1;
              uVar38 = uVar38 - 1;
              lVar34 = lVar34 + -8;
            }
            else {
              if ((*(int *)((longlong)&this_01->_padding_ + 4) != -1) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("CurChannel->ChIndex == -1",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                                      ,0x130f,L""), bVar21)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              bVar21 = UActorChannel::ProcessQueuedBunches(this_01);
              if (bVar21) {
                UChannel::ConditionalCleanUp((UChannel *)this_01,false,this_01->QueuedCloseReason);
                if (6 < (byte)LogNet._0_1_) {
                  UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                }
                goto LAB_147ff9745;
              }
            }
            iVar22 = *(int *)(lVar37 + 0x10 + lVar32);
            uVar38 = uVar38 + 1;
            lVar34 = lVar34 + 8;
          } while ((int)uVar38 < iVar22);
        }
        if (iVar22 == 0) {
          TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_200,uStack_20c);
          local_1f0 = CONCAT11(local_1f0._1_1_,1);
        }
        uStack_210 = uStack_210 & ~auStack_220._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_220);
        FVar31 = local_280;
        FVar33 = local_298;
        uVar29 = (ulonglong)uStack_20c;
      } while ((int)uStack_20c < *(int *)(auStack_220._8_8_ + 0x18));
      if (((char)local_1f0 != '\0') && (local_1f0._1_1_ != '\0')) {
        uVar38 = *(int *)&(local_1f8->Elements).field_0x8 -
                 *(int *)&(local_1f8->Elements).field_0x34;
        if (uVar38 < 4) {
          iVar22 = 1;
        }
        else {
          uVar29 = (ulonglong)((uVar38 >> 1) + 7) * 2 + 1;
          lVar32 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar32 == 0; lVar32 = lVar32 + -1) {
            }
          }
          local_1e8 = (undefined4)lVar32;
          iVar22 = 1 << ((byte)lVar32 & 0x1f);
        }
        if (((0 < (int)uVar38) && (local_1f8->HashSize < iVar22)) || (iVar22 < local_1f8->HashSize))
        {
          local_1f8->HashSize = iVar22;
          TSet<TTuple<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TArray<TObjectPtr<UActorChannel>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::Rehash(local_1f8);
        }
      }
    }
    TryClosePendingGracefulClose(this);
    if (((this->Channels).ArrayNum < 1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (*(longlong *)(this->Channels).AllocatorInstance.Data == 0) {
      if (((this->OutReliable).ArrayNum < 1) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(int *)(this->OutReliable).AllocatorInstance.Data == this->InitOutReliable) {
        if (((this->InReliable).ArrayNum < 1) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(int *)(this->InReliable).AllocatorInstance.Data == this->InitInReliable)
        goto LAB_147ff9983;
      }
      uVar38 = (this->ConnectionHandle).ParentConnectionId;
      this->State = USOCK_Closed;
      FNetTrace::TraceConnectionStateUpdated(this->NetTraceId,uVar38,'\x01');
    }
LAB_147ff9983:
    if (bVar20) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar18) {
      FThreadStats::AddMessage(FVar31,CycleScopeEnd);
    }
  }
  iVar22 = 0x7fffffff;
  if ((((this->TimeSensitive != false) ||
       (pUVar5 = (this->Driver).field0_0x0.DebugPtr,
       (double)pUVar5->KeepAliveTime < pUVar5->ElapsedTime - this->LastSendTime)) &&
      ((pPVar7 = (this->Handler).Ptr, pPVar7 == (PacketHandler *)0x0 ||
       (pPVar7->State == Initialized)))) && (bVar20 = HasReceivedClientPacket(this), bVar20)) {
    (**(code **)(this->_padding_ + 0x308))(this,0);
  }
  if ((this->Handler).Ptr != (PacketHandler *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      if (StatPtr_STAT_NetConnection_TickPacketHandler ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UNetConnection::Tick(float)_::_178_::FStat_STAT_NetConnection_TickPacketHandler>
           )0x0) {
        pFVar23 = ::FName::FName(&local_158,"STAT_NetConnection_TickPacketHandler");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NetConnection_TickPacketHandler,
                   *pFVar23,L"STAT_NetConnection_TickPacketHandler","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS1);
      }
      else {
        _Init_thread_footer(&::_TSS1);
      }
    }
    FVar26 = StatPtr_STAT_NetConnection_TickPacketHandler;
    if (StatPtr_STAT_NetConnection_TickPacketHandler ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UNetConnection::Tick(float)_::_178_::FStat_STAT_NetConnection_TickPacketHandler>
         )0x0) {
      pFVar23 = ::FName::FName(&local_150,"STAT_NetConnection_TickPacketHandler");
      FVar26 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UNetConnection::Tick(float)_::_178_::FStat_STAT_NetConnection_TickPacketHandler>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_NetConnection_TickPacketHandler,*pFVar23,
                            L"STAT_NetConnection_TickPacketHandler","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar31 = *(FName *)FVar26;
    bVar20 = false;
    bVar18 = false;
    local_258.ComparisonIndex.Value = 0;
    local_258.Number = 0;
    if ((FVar31.ComparisonIndex.Value.Value == 0) && (FVar31.Number == 0)) {
LAB_147ff9d58:
      bVar11 = false;
      FVar31 = local_258;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_29c.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_29c._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
        bVar20 = false;
        bVar18 = true;
        if (-1 < CpuChannel->Enabled) {
          local_278.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
          local_278.Number = FVar31.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_278,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                     ,0x1347);
          bVar20 = true;
          bVar18 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_147ff9d58;
      FThreadStats::AddMessage(FVar31,CycleScopeStart);
      bVar11 = true;
    }
    PacketHandler::Tick((this->Handler).Ptr,(float)this->FrameTime);
    pBVar27 = PacketHandler::GetQueuedRawPacket((this->Handler).Ptr);
    if ((pBVar27 != (BufferedPacket *)0x0) &&
       (cVar19 = (**(code **)(((this->Driver).field0_0x0.DebugPtr)->_padding_ + 0x420))(),
       cVar19 != '\0')) {
      ((this->Handler).Ptr)->bRawSend = '\x01';
      do {
        (**(code **)(this->_padding_ + 0x2e8))
                  (this,pBVar27->Data,pBVar27->CountBits,&pBVar27->Traits);
        pBVar27 = PacketHandler::GetQueuedRawPacket((this->Handler).Ptr);
      } while (pBVar27 != (BufferedPacket *)0x0);
      ((this->Handler).Ptr)->bRawSend = '\0';
    }
    pBVar27 = PacketHandler::GetQueuedPacket((this->Handler).Ptr);
    while (pBVar27 != (BufferedPacket *)0x0) {
      cVar19 = (**(code **)(((this->Driver).field0_0x0.DebugPtr)->_padding_ + 0x420))();
      if ((cVar19 == '\0') ||
         ((**(code **)(this->_padding_ + 0x2e8))
                    (this,pBVar27->Data,pBVar27->CountBits,&pBVar27->Traits),
         pBVar27 != (BufferedPacket *)0x0)) {
        BufferedPacket::~BufferedPacket(pBVar27);
        ::operator_delete(pBVar27,0x48);
      }
      pBVar27 = PacketHandler::GetQueuedPacket((this->Handler).Ptr);
    }
    if (bVar18) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar20) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar11) {
      FThreadStats::AddMessage(FVar31,CycleScopeEnd);
    }
  }
  cVar19 = (**(code **)(this->_padding_ + 0x318))(this);
  FNetConnectionSaturationAnalytics::TrackFrame(&this->SaturationAnalytics,cVar19 == '\0');
  if (this->bReplay == 0) {
    fVar41 = (float)(dVar42 - dVar40);
    local_res20[0] = fVar41;
    if (local_2a8 != 0.0) {
      local_res20[0] = fVar14 / local_2a8;
      if (fVar41 <= local_res20[0]) {
        local_res20[0] = fVar41;
      }
      if (local_res20[0] <= 0.0) {
        local_res20[0] = 0.0;
      }
    }
    local_270 = (longlong)-(int)((float)(int)this->_padding_ * local_res20[0] * __real_41000000);
    lVar32 = this->QueuedBits + local_270;
    if (lVar32 < 0x80000000) {
      if (lVar32 < -0x80000000) {
        lVar32 = 0x80000000;
        goto LAB_147ff9f28;
      }
    }
    else {
      lVar32 = 0x7fffffff;
LAB_147ff9f28:
      local_188 = &local_270;
      local_180 = local_res20;
      local_178 = &local_2a8;
      local_190 = this;
      `UNetConnection::Tick'::__l191::<lambda_2>::operator()(&local_190);
    }
    local_1b0 = local_270 * 2;
    this->QueuedBits = (int)lVar32;
    if ((int)lVar32 < local_1b0) {
      if (local_1b0 < 0x80000000) {
        if (local_1b0 < -0x80000000) {
          iVar22 = -0x80000000;
          goto LAB_147ff9f88;
        }
        iVar22 = (int)local_1b0;
      }
      else {
LAB_147ff9f88:
        local_1a8 = &local_1b0;
        local_1a0 = local_res20;
        local_198 = &local_2a8;
        `UNetConnection::Tick'::__l197::<lambda_3>::operator()(&local_1a8);
      }
      this->QueuedBits = iVar22;
    }
  }
  this_02 = (this->NetPing).Ptr;
  this->bFlushedNetThisFrame = false;
  if (this_02 != (FNetPing *)0x0) {
    UE::Net::FNetPing::TickRealtime(this_02,dVar10);
  }
LAB_147ffa000:
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(FVar33,CycleScopeEnd);
  }
  return;
}

// TrackLogsPerSecond @ 147ffa770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UNetConnection::TrackLogsPerSecond(UNetConnection *this)

{
  int iVar1;
  ENetCloseResult EVar2;
  double dVar3;
  double dVar4;
  LARGE_INTEGER local_res8;
  void *local_58 [2];
  FNetResult local_48;
  
  QueryPerformanceCounter(&local_res8);
  iVar1 = this->LogCallCount + 1;
  dVar3 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->LogCallCount = iVar1;
  dVar3 = dVar3 + __real_4170000000000000;
  dVar4 = dVar3 - this->LogCallLastTime;
  if (__real_3fe0000000000000 < dVar4) {
    this->LogCallCount = 0;
    this->LogCallLastTime = dVar3;
    dVar4 = (double)iVar1 / dVar4;
    if (__real_404e000000000000 < dVar4) {
      if (2 < (byte)LogNet._0_1_) {
        (**(code **)(this->_padding_ + 0x2d0))(this,local_58,0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_58[0] != (void *)0x0) {
          FMemory::Free(local_58[0]);
        }
      }
      EVar2 = LogLimitInstant;
LAB_147ffa95d:
      UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>(&local_48,EVar2);
      Close(this,&local_48);
      if (local_48.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_48.NextResult + -0x10))((longlong)local_48.NextResult + -0x10);
      }
      if (local_48.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.ErrorContext.Data.AllocatorInstance.Data);
      }
      return false;
    }
    if (dVar4 <= __real_4014000000000000) {
      this->LogSustainedCount = 0;
    }
    else {
      this->LogSustainedCount = this->LogSustainedCount + 1;
      if (2 < (byte)LogNet._0_1_) {
        (**(code **)(this->_padding_ + 0x2d0))(this,local_58,0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        if (local_58[0] != (void *)0x0) {
          FMemory::Free(local_58[0]);
        }
      }
      if (__real_4024000000000000 < (double)this->LogSustainedCount) {
        if (2 < (byte)LogNet._0_1_) {
          (**(code **)(this->_padding_ + 0x2d0))(this,local_58,0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          if (local_58[0] != (void *)0x0) {
            FMemory::Free(local_58[0]);
          }
        }
        EVar2 = LogLimitSustained;
        goto LAB_147ffa95d;
      }
    }
  }
  return true;
}

// TrackReplicationForAnalytics @ 147ffa9c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::TrackReplicationForAnalytics(UNetConnection *this,bool param_1)

{
  this->TickCount = this->TickCount + 1;
  FNetConnectionSaturationAnalytics::TrackReplication(&this->SaturationAnalytics,param_1);
  return;
}

// TryClosePendingGracefulClose @ 147ffaa70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::TryClosePendingGracefulClose(UNetConnection *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  char cVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  void *local_28 [2];
  
  if (this->State == USOCK_Closing) {
    iVar2 = (this->OpenChannels).ArrayNum;
    pFVar5 = (this->OpenChannels).AllocatorInstance.Data;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->OpenChannels).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UChannel>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      pUVar3 = *(UObject **)pFVar5;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar3 != (UObject *)0x0) goto LAB_147ffaada;
      }
      else if (pUVar3 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar3);
LAB_147ffaada:
        cVar4 = (**(code **)(*(longlong *)pUVar3 + 0x338))(pUVar3);
        if (cVar4 == '\0') {
          return;
        }
      }
      pFVar5 = pFVar5 + 8;
    }
    if (4 < (byte)LogNet._0_1_) {
      (**(code **)(this->_padding_ + 0x2e0))(this,local_28);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_28[0] != (void *)0x0) {
        FMemory::Free(local_28[0]);
      }
    }
    Close(this,(FNetResult *)this->PendingGracefulCloseResult);
  }
  return;
}

// UpdateAllCachedLevelVisibility @ 147ffd510

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::UpdateAllCachedLevelVisibility(UNetConnection *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  puVar1 = &(this->ClientVisibleActorOuters).field_0x10;
  iVar3 = *(int *)&(this->ClientVisibleActorOuters).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ClientVisibleActorOuters).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_147ffd5bd;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_147ffd5bd:
  uVar10 = *(uint *)&(this->ClientVisibleActorOuters).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ClientVisibleActorOuters).field_0x8 -
                       *(int *)&(this->ClientVisibleActorOuters).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ClientVisibleActorOuters).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ClientVisibleActorOuters).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_147ffd6c0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_147ffd6c0:
  while( true ) {
    if (*(int *)&(this->ClientVisibleActorOuters).field_0x8 -
        *(int *)&(this->ClientVisibleActorOuters).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    UpdateCachedLevelVisibility
              (this,(FName *)(*(longlong *)&this->ClientVisibleActorOuters +
                             (longlong)TStack_60.CurrentBitIndex * 0x14));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// UpdateCachedLevelVisibility @ 147ffd740

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UNetConnection::UpdateCachedLevelVisibility(UNetConnection *this,FName *param_1)

{
  FName FVar1;
  longlong lVar2;
  uint uVar3;
  bool *pbVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  
  FVar1 = *param_1;
  if ((FVar1 == (FName)0x0) ||
     ((FVar1 == this->ClientWorldPackageName &&
      ((FName)((((this->Driver).field0_0x0.DebugPtr)->WorldPackage).field0_0x0.DebugPtr)->_padding_
       == this->ClientWorldPackageName)))) {
    bVar7 = true;
  }
  else {
    uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    if (*(int *)&(this->ClientVisibleLevelNames).Elements.field_0x8 !=
        *(int *)&(this->ClientVisibleLevelNames).Elements.field_0x34) {
      FVar6 = (this->ClientVisibleLevelNames).Hash.SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&(this->ClientVisibleLevelNames).Hash;
      }
      iVar5 = *(int *)((longlong)FVar6 +
                      (ulonglong)
                      ((this->ClientVisibleLevelNames).HashSize - 1U & uVar3 + FVar1.Number) * 4);
      if (iVar5 != -1) {
        lVar2 = *(longlong *)&(this->ClientVisibleLevelNames).Elements;
        do {
          if (*(FName *)(lVar2 + (longlong)iVar5 * 0x10) == FVar1) goto LAB_147ffd7fa;
          iVar5 = *(int *)(lVar2 + 8 + (longlong)iVar5 * 0x10);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_147ffd7fa:
    bVar7 = iVar5 != -1;
  }
  FVar1 = *param_1;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pbVar4 = TMapBase<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>::
           FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>
                       *)&this->ClientVisibleActorOuters,uVar3 + FVar1.Number,param_1);
  *pbVar4 = bVar7;
  return bVar7;
}

// UpdateDelayedPackets @ 147ffdfb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::UpdateDelayedPackets(UNetConnection *this,double param_1)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar10 = 0;
  if (0 < (this->Delayed).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar10 < (this->Delayed).ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if (uVar5 == 0) {
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
      pFVar2 = (this->Delayed).AllocatorInstance.Data;
      iVar11 = *(int *)(pFVar2 + lVar7 + 0x30);
      if (iVar11 == 0) {
        if (*(double *)(pFVar2 + lVar7 + 0x28) <= param_1 &&
            param_1 != *(double *)(pFVar2 + lVar7 + 0x28)) goto LAB_147ffe12d;
LAB_147ffe050:
        if (this->bSendDelayedPacketsOutofOrder == false) break;
      }
      else {
        if (iVar11 != 1) {
          *(int *)(pFVar2 + lVar7 + 0x30) = iVar11 + -1;
          goto LAB_147ffe050;
        }
LAB_147ffe12d:
        uVar1 = *(undefined4 *)(pFVar2 + lVar7 + 0x10);
        pcVar3 = *(code **)(this->_padding_ + 0x2e8);
        if (*(int *)(pFVar2 + lVar7 + 8) < 1) {
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
        (*pcVar3)(this,*(undefined8 *)(pFVar2 + lVar7),uVar1,pFVar2 + lVar7 + 0x14);
        pFVar2[lVar7 + 0x34] = (FScriptContainerElement)0x1;
      }
      uVar10 = uVar10 + 1;
      lVar7 = lVar7 + 0x38;
    } while ((int)uVar10 < (this->Delayed).ArrayNum);
  }
  iVar11 = (this->Delayed).ArrayNum;
  lVar7 = (longlong)iVar11;
  if (iVar11 != 0) {
    pFVar2 = (this->Delayed).AllocatorInstance.Data;
    iVar13 = 0;
    bVar4 = pFVar2[0x34] == (FScriptContainerElement)0x0;
    lVar8 = 0;
    iVar11 = 0;
    do {
      lVar8 = lVar8 + 1;
      iVar12 = iVar11 + 1;
      if (lVar8 < lVar7) {
        pFVar6 = pFVar2 + lVar8 * 0x38 + 0x34;
        do {
          if (bVar4 != (*pFVar6 == (FScriptContainerElement)0x0)) break;
          iVar12 = iVar12 + 1;
          lVar8 = lVar8 + 1;
          pFVar6 = pFVar6 + 0x38;
        } while (lVar8 < lVar7);
      }
      iVar9 = iVar12 - iVar11;
      if (bVar4 == false) {
        DestructItems<FDelayedPacket,int>
                  ((FDelayedPacket *)(pFVar2 + (longlong)iVar11 * 0x38),iVar9);
      }
      else {
        if (iVar13 != iVar11) {
          memmove(pFVar2 + (longlong)iVar13 * 0x38,pFVar2 + (longlong)iVar11 * 0x38,
                  (longlong)iVar9 * 0x38);
        }
        iVar13 = iVar13 + iVar9;
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar11 = iVar12;
    } while (lVar8 < lVar7);
    (this->Delayed).ArrayNum = iVar13;
  }
  return;
}

// UpdateLevelStreamStatusChangedTransactionId @ 147ffe1e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetLevelVisibilityTransactionId __thiscall
UNetConnection::UpdateLevelStreamStatusChangedTransactionId
          (UNetConnection *this,ULevelStreaming *param_1,FName param_2,bool param_3)

{
  UReplicationSystem *this_00;
  uint uVar1;
  FNetLevelVisibilityTransactionId *pFVar2;
  UObjectReplicationBridge *this_01;
  uint uVar3;
  uint uVar4;
  undefined7 in_register_00000089;
  FNetLevelVisibilityTransactionId local_res8 [2];
  FNetObjectGroupHandle_u_0 local_res10 [2];
  FName local_res20;
  char in_stack_00000028;
  
  local_res20._1_7_ = in_register_00000089;
  local_res20.ComparisonIndex.Value._0_1_ = param_3;
  local_res8[0].Data = 0;
  uVar1 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
  pFVar2 = TMapBase<FName,FNetLevelVisibilityTransactionId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNetLevelVisibilityTransactionId,0>_>
           ::FindOrAddImpl<FName_const_&,FNetLevelVisibilityTransactionId>
                     ((TMapBase<FName,FNetLevelVisibilityTransactionId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNetLevelVisibilityTransactionId,0>_>
                       *)&this->ClientPendingStreamingStatusRequest,
                      uVar1 + (int)((uint7)in_register_00000089 >> 0x18),&local_res20,local_res8);
  uVar1 = pFVar2->Data;
  uVar3 = uVar1 + 1 & 0x7fffffff;
  uVar4 = 1;
  if (uVar3 != 0) {
    uVar4 = uVar3;
  }
  pFVar2->Data = (uVar4 ^ uVar1) & 0x7fffffff ^ uVar1;
  if (in_stack_00000028 == '\0') {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
              (&this->ClientVisibleLevelNames,local_res20);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
              (&this->ClientMakingVisibleLevelNames,local_res20);
    this_00 = ((this->Driver).field0_0x0.DebugPtr)->ReplicationSystem;
    if (this_00 == (UReplicationSystem *)0x0) {
      UpdateCachedLevelVisibility(this,&local_res20);
    }
    else if (*(longlong *)((longlong)param_2 + 0x1b0) != 0) {
      this_01 = UReplicationSystem::GetReplicationBridge(this_00);
      UReplicationBridge::GetLevelGroup
                ((UReplicationBridge *)this_01,(UObject *)&local_res10[0]._s_1);
      if (local_res10[0] != 0) {
        UReplicationSystem::SetGroupFilterStatus
                  (this_00,(FNetObjectGroupHandle)local_res10[0],
                   (this->ConnectionHandle).ParentConnectionId,Disallow);
      }
    }
  }
  *(uint *)&param_1->_padding_ = pFVar2->Data;
  return (FNetLevelVisibilityTransactionId)(uint)param_1;
}

// UpdateLevelVisibility @ 147ffe300

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
UNetConnection::UpdateLevelVisibility(UNetConnection *this,FUpdateLevelVisibilityLevelInfo *param_1)

{
  UNetDriver *pUVar1;
  UWorld *this_00;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FNetLevelVisibilityTransactionId FVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  FUpdateLevelVisibilityLevelInfo *pFVar9;
  
  pUVar1 = (this->Driver).field0_0x0.DebugPtr;
  if ((pUVar1 != (UNetDriver *)0x0) &&
     (this_00 = (pUVar1->World).field0_0x0.DebugPtr, this_00 != (UWorld *)0x0)) {
    bVar7 = UWorld::IsInSeamlessTravel(this_00);
    if (bVar7) {
      FVar3 = param_1->PackageName;
      FVar4 = param_1->FileName;
      FVar2 = param_1->PackageName;
      FVar5.Data = (param_1->VisibilityRequestId).Data;
      uVar6 = *(undefined4 *)&param_1->field_0x14;
      uVar8 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      pFVar9 = TMapBase<FName,FUpdateLevelVisibilityLevelInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FUpdateLevelVisibilityLevelInfo,0>_>
               ::FindOrAddImpl<FName_const_&>
                         ((TMapBase<FName,FUpdateLevelVisibilityLevelInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FUpdateLevelVisibilityLevelInfo,0>_>
                           *)&this->PendingUpdateLevelVisibility,uVar8 + FVar2.Number,
                          &param_1->PackageName);
      pFVar9->PackageName = FVar3;
      pFVar9->FileName = FVar4;
      pFVar9->VisibilityRequestId = (FNetLevelVisibilityTransactionId)FVar5.Data;
      *(undefined4 *)&pFVar9->field_0x14 = uVar6;
    }
  }
  UpdateLevelVisibilityInternal(this,param_1);
  NotifyConnectionUpdated(this);
  return;
}

// UpdateLevelVisibilityInternal @ 147ffe3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147ffe893) */
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
UNetConnection::UpdateLevelVisibilityInternal
          (UNetConnection *this,FUpdateLevelVisibilityLevelInfo *param_1)

{
  TMap<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>_>
  *pTVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  UNetDriver *pUVar4;
  UReplicationConnectionDriver *pUVar5;
  UReplicationSystem *pUVar6;
  AActor *pAVar7;
  longlong *plVar8;
  FName FVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  TConsoleVariableData<bool> *pTVar14;
  ForElementType<unsigned_int> FVar15;
  ForAnyElementType FVar16;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *pTVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  char cVar22;
  ELevelStreamingState EVar23;
  uint uVar24;
  uint uVar25;
  int *piVar26;
  FName *pFVar27;
  FThreadSafeStaticStat<_private:_void___cdecl_UNetConnection::UpdateLevelVisibilityInternal(FUpdateLevelVisibilityLevelInfo_const_&)_::_2_::FStat_STAT_NetConnection_UpdateLevelVisibilityInternal>
  FVar28;
  UWorld *pUVar29;
  FValidateLevelVisibilityResult *pFVar30;
  FThreadSafeStaticStat<_private:_void___cdecl_UNetConnection::UpdateLevelVisibilityInternal(FUpdateLevelVisibilityLevelInfo_const_&)_::_58_::FStat_STAT_NetUpdateLevelVisibility_DestructionInfos>
  FVar31;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *pTVar32;
  TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_> *pTVar33;
  FThreadSafeStaticStat<_private:_void___cdecl_UNetConnection::UpdateLevelVisibilityInternal(FUpdateLevelVisibilityLevelInfo_const_&)_::_17_::FStat_STAT_NetUpdateLevelVisibility_UpdateDormantActors>
  FVar34;
  UObjectReplicationBridge *pUVar35;
  UClass *pUVar36;
  UObjectBase *pUVar37;
  FNetObjectGroupHandle_u_0 this_00;
  UObjectBase *pUVar38;
  void *pvVar39;
  UEnum *pUVar40;
  wchar_t *pwVar41;
  FString *pFVar42;
  ULevelStreaming *pUVar43;
  TStatIdData *pTVar44;
  ULevel *pUVar45;
  UPackage *pUVar46;
  longlong lVar47;
  ulonglong uVar48;
  undefined1 *puVar49;
  ulong64 uVar50;
  FName FVar51;
  FScriptContainerElement *pFVar52;
  FName FVar53;
  int iVar54;
  undefined8 *puVar55;
  uint uVar56;
  int iVar57;
  UObjectBase *pUVar58;
  uint *puVar59;
  ForElementType<unsigned_int> FVar60;
  undefined1 auStackY_ba8 [32];
  byte local_b48;
  FName local_b28;
  undefined1 local_b20;
  undefined1 local_b1f;
  undefined1 local_b1e [2];
  uint local_b1c;
  uint local_b18;
  FColor_u_0 local_b14;
  FName local_b10;
  FName local_b08;
  FNetResult local_b00;
  FColor_u_0 local_ad0;
  FColor_u_0 local_acc;
  uint local_ac8;
  FColor_u_0 local_ac4;
  FName local_ac0;
  ForElementType<unsigned_int> local_ab8;
  FNetObjectGroupHandle_u_0 local_ab0;
  FName local_aa8;
  FName local_aa0;
  FString local_a98;
  FString local_a88;
  FName local_a78;
  FName local_a68;
  FName local_a58;
  FName local_a48;
  longlong *local_a38;
  undefined1 auStack_a30 [16];
  uint uStack_a20;
  uint uStack_a1c;
  longlong local_a18;
  TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
  *pTStack_a10;
  TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
  *local_a08;
  undefined2 local_a00;
  FName local_9f8;
  FNetworkGUID local_9f0;
  UEnum *local_9e8;
  FName local_9e0;
  FNetObjectGroupHandle_u_0 local_9d8;
  FString local_9d0;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *local_9c0;
  undefined1 auStack_9b8 [20];
  uint uStack_9a4;
  int local_9a0;
  int iStack_99c;
  TPimplPtr<UE::Net::FNetResult,1> TStack_998;
  FName local_990;
  FName local_988;
  FName local_980;
  FName local_978;
  FName local_970;
  FString local_968;
  FString local_958;
  char local_948;
  undefined1 uStack_947;
  undefined1 uStack_946;
  undefined1 uStack_945;
  undefined1 uStack_944;
  undefined1 uStack_943;
  undefined1 uStack_942;
  undefined1 uStack_941;
  undefined1 uStack_940;
  undefined1 uStack_93f;
  undefined1 uStack_93e;
  undefined1 uStack_93d;
  undefined1 uStack_93c;
  undefined1 uStack_93b;
  undefined1 uStack_93a;
  undefined1 uStack_939;
  undefined4 local_938;
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  FString local_928;
  FString local_918;
  FString local_908;
  FName local_8f8;
  FName local_8f0;
  FName local_8e8;
  undefined1 local_8e0 [32];
  longlong local_8c0;
  TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
  *pTStack_8b8;
  int local_894;
  FValidateLevelVisibilityResult local_890;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_ba8;
  pUVar37 = (UObjectBase *)0x0;
  uVar56 = 0;
  local_b14.Bits = 0;
  piVar26 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar26 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_NetConnection_UpdateLevelVisibilityInternal =
         (FThreadSafeStaticStat<_private:_void___cdecl_UNetConnection::UpdateLevelVisibilityInternal(FUpdateLevelVisibilityLevelInfo_const_&)_::_2_::FStat_STAT_NetConnection_UpdateLevelVisibilityInternal>
          )0x0;
    pFVar27 = ::FName::FName(&local_8f0,"STAT_NetConnection_UpdateLevelVisibilityInternal");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_NetConnection_UpdateLevelVisibilityInternal,*pFVar27,
               L"STAT_NetConnection_UpdateLevelVisibilityInternal","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar28 = StatPtr_STAT_NetConnection_UpdateLevelVisibilityInternal;
  if (StatPtr_STAT_NetConnection_UpdateLevelVisibilityInternal ==
      (FThreadSafeStaticStat<_private:_void___cdecl_UNetConnection::UpdateLevelVisibilityInternal(FUpdateLevelVisibilityLevelInfo_const_&)_::_2_::FStat_STAT_NetConnection_UpdateLevelVisibilityInternal>
       )0x0) {
    pFVar27 = ::FName::FName(&local_8e8,"STAT_NetConnection_UpdateLevelVisibilityInternal");
    FVar28 = (FThreadSafeStaticStat<_private:_void___cdecl_UNetConnection::UpdateLevelVisibilityInternal(FUpdateLevelVisibilityLevelInfo_const_&)_::_2_::FStat_STAT_NetConnection_UpdateLevelVisibilityInternal>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_NetConnection_UpdateLevelVisibilityInternal,*pFVar27,
                          L"STAT_NetConnection_UpdateLevelVisibilityInternal","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar53 = *(FName *)FVar28;
  bVar11 = false;
  bVar13 = false;
  local_a78.ComparisonIndex.Value = 0;
  local_a78.Number = 0;
  bVar18 = false;
  bVar20 = false;
  if ((FVar53.ComparisonIndex.Value.Value == 0) && (FVar53.Number == 0)) {
LAB_147ffe5e1:
    bVar13 = bVar20;
    bVar11 = bVar18;
    bVar18 = false;
    local_b10 = local_a78;
    FVar53 = local_a78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_ad0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_ad0._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar11 = false;
      bVar13 = true;
      bVar18 = false;
      bVar20 = true;
      if (-1 < CpuChannel->Enabled) {
        local_aa8.ComparisonIndex.Value = FVar53.ComparisonIndex.Value.Value;
        local_aa8.Number = FVar53.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_aa8,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                   ,0x708);
        bVar11 = true;
        bVar13 = true;
        bVar18 = true;
        bVar20 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147ffe5e1;
    local_b10 = FVar53;
    FThreadStats::AddMessage(FVar53,CycleScopeStart);
    bVar18 = true;
  }
  GNumClientUpdateLevelVisibility = GNumClientUpdateLevelVisibility + 1;
  bVar20 = true;
  bVar19 = ULevelStreaming::ShouldServerUseMakingVisibleTransactionRequest();
  if (((bVar19) && (uVar25 = (param_1->VisibilityRequestId).Data, uVar25 != 0)) &&
     (-1 < (int)uVar25)) {
    FVar51 = param_1->PackageName;
    uVar24 = ::GetTypeHash(FVar51.ComparisonIndex.Value);
    if (*(int *)&(this->ClientPendingStreamingStatusRequest).field_0x8 !=
        *(int *)&(this->ClientPendingStreamingStatusRequest).field_0x34) {
      puVar49 = *(undefined1 **)&(this->ClientPendingStreamingStatusRequest).field_0x40;
      if (puVar49 == (undefined1 *)0x0) {
        puVar49 = &(this->ClientPendingStreamingStatusRequest).field_0x38;
      }
      iVar54 = *(int *)(puVar49 +
                       (ulonglong)
                       (*(int *)&(this->ClientPendingStreamingStatusRequest).field_0x48 - 1U &
                       FVar51.Number + uVar24) * 4);
      if (iVar54 != -1) {
        do {
          lVar47 = *(longlong *)&this->ClientPendingStreamingStatusRequest + (longlong)iVar54 * 0x14
          ;
          if (*(FName *)(*(longlong *)&this->ClientPendingStreamingStatusRequest +
                        (longlong)iVar54 * 0x14) == FVar51) {
            pUVar38 = (UObjectBase *)(lVar47 + 8);
            if (lVar47 == 0) {
              pUVar38 = pUVar37;
            }
            if (pUVar38 != (UObjectBase *)0x0) {
              bVar20 = uVar25 == (uint)pUVar38->_padding_;
            }
            break;
          }
          iVar54 = *(int *)(lVar47 + 0xc);
        } while (iVar54 != -1);
      }
    }
  }
  if (param_1->bIsVisible == 0) {
    if (param_1->bTryMakeVisible != 0) {
      pUVar29 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      bVar20 = FLevelUtils::SupportsMakingVisibleTransactionRequests(pUVar29);
      if (bVar20) {
        uVar56 = (param_1->VisibilityRequestId).Data;
        if (((uVar56 == 0) || (-1 < (int)uVar56)) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("VisibilityRequestId.IsValid() && VisibilityRequestId.IsClientTransaction()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                                ,0x789,L""), bVar20)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pUVar29 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
        pUVar43 = FLevelUtils::GetServerVisibleStreamingLevel(pUVar29,&param_1->PackageName);
        if (((pUVar43 != (ULevelStreaming *)0x0) &&
            (cVar22 = (**(code **)(pUVar43->_padding_ + 0x2f0))(pUVar43), cVar22 != '\0')) &&
           (EVar23 = ULevelStreaming::GetLevelStreamingState(pUVar43), EVar23 == LoadedVisible)) {
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                    (&this->ClientMakingVisibleLevelNames,&local_ac0,(bool *)param_1);
          FVar51 = param_1->PackageName;
          local_9e0 = FVar51;
          uVar56 = ::GetTypeHash(FVar51.ComparisonIndex.Value);
          iVar54 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FindIndexByHash<FName>
                             (&this->ClientVisibleLevelNames,FVar51.Number + uVar56,&local_9e0);
          if ((iVar54 != -1) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!ClientVisibleLevelNames.Contains(LevelVisibility.PackageName)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                                  ,0x790,L""), bVar20)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
      }
      goto LAB_147fffa0f;
    }
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
              (&this->ClientMakingVisibleLevelNames,param_1->PackageName);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
              (&this->ClientVisibleLevelNames,param_1->PackageName);
    if (5 < (byte)LogPlayerController._0_1_) {
      ::FName::ToString(&param_1->PackageName,&local_908);
      UE::Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)&PTR_u_ServerUpdateLev_1519cd1e8,
                 (FLogCategoryBase *)&LogPlayerController);
      if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_908.Data.AllocatorInstance.Data);
      }
    }
    pUVar5 = this->ReplicationConnectionDriver;
    if (pUVar5 != (UReplicationConnectionDriver *)0x0) {
      (**(code **)(*(longlong *)pUVar5 + 0x2f0))(pUVar5,param_1->PackageName);
    }
    pUVar6 = ((this->Driver).field0_0x0.DebugPtr)->ReplicationSystem;
    if (pUVar6 != (UReplicationSystem *)0x0) {
      FVar51 = param_1->PackageName;
      pUVar29 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      pUVar43 = FLevelUtils::FindStreamingLevel(pUVar29,FVar51);
      if ((pUVar43 != (ULevelStreaming *)0x0) &&
         ((pUVar43->LoadedLevel).field0_0x0.DebugPtr != (ULevel *)0x0)) {
        pUVar35 = UReplicationSystem::GetReplicationBridge(pUVar6);
        UReplicationBridge::GetLevelGroup((UReplicationBridge *)pUVar35,(UObject *)&local_9d8._s_1);
        if (local_9d8 != 0) {
          UReplicationSystem::SetGroupFilterStatus
                    (pUVar6,(FNetObjectGroupHandle)local_9d8,
                     (this->ConnectionHandle).ParentConnectionId,Disallow);
        }
      }
    }
    if ((*piVar26 < DAT_155227930) && (_Init_thread_header(&DAT_155227930), DAT_155227930 == -1)) {
      DAT_155227928 = (TStatIdData *)0x0;
      pFVar27 = ::FName::FName(&local_970,"STAT_NetUpdateLevelVisibility_LevelUnloadChannelClose");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&DAT_155227928,*pFVar27,
                 L"STAT_NetUpdateLevelVisibility_LevelUnloadChannelClose","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&DAT_155227930);
    }
    pTVar44 = DAT_155227928;
    if (DAT_155227928 == (TStatIdData *)0x0) {
      pFVar27 = ::FName::FName(&local_8f8,"STAT_NetUpdateLevelVisibility_LevelUnloadChannelClose");
      pTVar44 = FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&DAT_155227928,*pFVar27,
                           L"STAT_NetUpdateLevelVisibility_LevelUnloadChannelClose",
                           "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                           false,MCR_Invalid);
    }
    FVar51 = *(FName *)&pTVar44->Name;
    local_a48.ComparisonIndex.Value = 0;
    local_a48.Number = 0;
    local_b48 = 0;
    if ((FVar51.ComparisonIndex.Value.Value == 0) && (FVar51.Number == 0)) {
LAB_147fff7a3:
      bVar20 = false;
      FVar51 = local_a48;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_b14.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_b14._s_0,(pTVar44->StatDescriptionAnsi).Ptr);
        pUVar37 = (UObjectBase *)&DAT_00000001;
        local_b48 = 1;
        if (-1 < CpuChannel->Enabled) {
          local_b08 = FVar51;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_b08,(pTVar44->StatDescriptionWide).Ptr,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                     ,0x7b1);
          pUVar37 = (UObjectBase *)&DAT_00000003;
          local_b48 = 3;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_147fff7a3;
      FThreadStats::AddMessage(FVar51,CycleScopeStart);
      local_b48 = (byte)pUVar37;
      bVar20 = true;
    }
    pTVar1 = &this->ActorChannels;
    TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_8e0,
               (TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_a00 = 0;
    stack0xfffffffffffff5d8 = local_8e0._16_16_;
    local_a38 = (longlong *)local_8e0._0_8_;
    auStack_a30._0_8_ = local_8e0._8_8_;
    local_a18 = local_8c0;
    pTStack_a10 = pTStack_8b8;
    uVar48 = local_8e0._24_8_ >> 0x20;
    local_a08 = (TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
                 *)pTVar1;
    if (local_8e0._28_4_ < *(int *)(local_8e0._16_8_ + 0x18)) {
      do {
        plVar8 = *(longlong **)(*local_a38 + 8 + (longlong)(int)uVar48 * 0x18);
        if (((*(uint *)(plVar8 + 6) & 0x1000) == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Channel->OpenedLocally",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                                ,0x7b8,L""), bVar19)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (((AActor *)plVar8[0xd] != (AActor *)0x0) &&
           (pUVar45 = AActor::GetLevel((AActor *)plVar8[0xd]), pUVar45 != (ULevel *)0x0)) {
          pUVar45 = AActor::GetLevel((AActor *)plVar8[0xd]);
          pUVar46 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar45);
          if ((FName)pUVar46->_padding_ == param_1->PackageName) {
            TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_a10,uStack_a1c);
            local_a00 = CONCAT11(local_a00._1_1_,1);
            (**(code **)(*plVar8 + 0x2c8))(plVar8,2);
          }
        }
        uStack_a20 = uStack_a20 & ~auStack_a30._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a30);
        uVar48 = (ulonglong)uStack_a1c;
      } while ((int)uStack_a1c < *(int *)(auStack_a30._8_8_ + 0x18));
      if (((char)local_a00 != '\0') && (local_a00._1_1_ != '\0')) {
        iVar54 = 1;
        uVar56 = *(int *)&(local_a08->Elements).field_0x8 -
                 *(int *)&(local_a08->Elements).field_0x34;
        if (3 < uVar56) {
          uVar48 = (ulonglong)((uVar56 >> 1) + 7) * 2 + 1;
          lVar47 = 0x3f;
          if (uVar48 != 0) {
            for (; uVar48 >> lVar47 == 0; lVar47 = lVar47 + -1) {
            }
          }
          iVar54 = 1 << ((byte)lVar47 & 0x1f);
        }
        if (((0 < (int)uVar56) && (local_a08->HashSize < iVar54)) || (iVar54 < local_a08->HashSize))
        {
          local_a08->HashSize = iVar54;
          TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
          ::Rehash(local_a08);
        }
      }
    }
    if (UE::Net::Private::SerializeNewActorOverrideLevel == 0) {
      FVar9 = param_1->PackageName;
      pUVar29 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      pUVar43 = FLevelUtils::FindStreamingLevel(pUVar29,FVar9);
      if ((pUVar43 != (ULevelStreaming *)0x0) &&
         (pUVar45 = (pUVar43->LoadedLevel).field0_0x0.DebugPtr, pUVar45 != (ULevel *)0x0)) {
        pFVar52 = (pUVar45->Actors).AllocatorInstance.Data;
        iVar54 = (pUVar45->Actors).ArrayNum;
        pFVar3 = pFVar52 + (longlong)iVar54 * 8;
        while( true ) {
          if ((pUVar45->Actors).ArrayNum != iVar54) {
            `TCheckedPointerIterator<TObjectPtr<AActor>_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_b1f);
          }
          FVar53 = local_b10;
          if (pFVar52 == pFVar3) break;
          pAVar7 = *(AActor **)pFVar52;
          if ((pAVar7 != (AActor *)0x0) && (bVar19 = AActor::IsNetStartupActor(pAVar7), !bVar19)) {
            UNetDriver::SendDestructionInfoForLevelUnloadIfDormant
                      ((this->Driver).field0_0x0.DebugPtr,pAVar7,this);
          }
          pFVar52 = pFVar52 + 8;
        }
      }
    }
    UpdateCachedLevelVisibility(this,&param_1->PackageName);
    if ((local_b48 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_b48 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
joined_r0x000147fffa00:
    if (bVar20) {
      FThreadStats::AddMessage(FVar51,CycleScopeEnd);
    }
    goto LAB_147fffa0f;
  }
  pUVar29 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pFVar30 = UE::Net::Connection::Private::ValidateLevelVisibility(&local_890,pUVar29,param_1);
  local_948 = pFVar30->bLevelExists;
  uStack_947 = pFVar30->field_0x1;
  uStack_946 = pFVar30->field_0x2;
  uStack_945 = pFVar30->field_0x3;
  uStack_944 = pFVar30->field_0x4;
  uStack_943 = pFVar30->field_0x5;
  uStack_942 = pFVar30->field_0x6;
  uStack_941 = pFVar30->field_0x7;
  uStack_940 = *(undefined1 *)&pFVar30->StreamingLevel;
  uStack_93f = *(undefined1 *)((longlong)&pFVar30->StreamingLevel + 1);
  uStack_93e = *(undefined1 *)((longlong)&pFVar30->StreamingLevel + 2);
  uStack_93d = *(undefined1 *)((longlong)&pFVar30->StreamingLevel + 3);
  uStack_93c = *(undefined1 *)((longlong)&pFVar30->StreamingLevel + 4);
  uStack_93b = *(undefined1 *)((longlong)&pFVar30->StreamingLevel + 5);
  uStack_93a = *(undefined1 *)((longlong)&pFVar30->StreamingLevel + 6);
  uStack_939 = *(undefined1 *)((longlong)&pFVar30->StreamingLevel + 7);
  local_938 = *(undefined4 *)&pFVar30->Package;
  uStack_934 = *(undefined4 *)((longlong)&pFVar30->Package + 4);
  uStack_930 = *(undefined4 *)&pFVar30->Linker;
  uStack_92c = *(undefined4 *)((longlong)&pFVar30->Linker + 4);
  if (bVar20) {
    if ((bool)local_948 != false) {
      if (2 < (byte)LogPlayerController._0_1_) {
        pUVar29 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
        bVar20 = FLevelUtils::IsServerStreamingLevelVisible(pUVar29,&param_1->PackageName);
        if (!bVar20) {
          ::FName::ToString(&param_1->PackageName,&local_968);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerController);
          if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_968.Data.AllocatorInstance.Data);
          }
        }
      }
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
                (&this->ClientMakingVisibleLevelNames,param_1->PackageName);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (&this->ClientVisibleLevelNames,&local_9f8,(bool *)param_1);
      if (5 < (byte)LogPlayerController._0_1_) {
        ::FName::ToString(&param_1->PackageName,&local_958);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerController);
        if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_958.Data.AllocatorInstance.Data);
        }
      }
      UpdateCachedLevelVisibility(this,&param_1->PackageName);
      if ((*piVar26 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        StatPtr_STAT_NetUpdateLevelVisibility_DestructionInfos =
             (FThreadSafeStaticStat<_private:_void___cdecl_UNetConnection::UpdateLevelVisibilityInternal(FUpdateLevelVisibilityLevelInfo_const_&)_::_58_::FStat_STAT_NetUpdateLevelVisibility_DestructionInfos>
              )0x0;
        pFVar27 = ::FName::FName(&local_990,"STAT_NetUpdateLevelVisibility_DestructionInfos");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_NetUpdateLevelVisibility_DestructionInfos,*pFVar27,
                   L"STAT_NetUpdateLevelVisibility_DestructionInfos","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS1);
      }
      FVar31 = StatPtr_STAT_NetUpdateLevelVisibility_DestructionInfos;
      if (StatPtr_STAT_NetUpdateLevelVisibility_DestructionInfos ==
          (FThreadSafeStaticStat<_private:_void___cdecl_UNetConnection::UpdateLevelVisibilityInternal(FUpdateLevelVisibilityLevelInfo_const_&)_::_58_::FStat_STAT_NetUpdateLevelVisibility_DestructionInfos>
           )0x0) {
        pFVar27 = ::FName::FName(&local_988,"STAT_NetUpdateLevelVisibility_DestructionInfos");
        FVar31 = (FThreadSafeStaticStat<_private:_void___cdecl_UNetConnection::UpdateLevelVisibilityInternal(FUpdateLevelVisibilityLevelInfo_const_&)_::_58_::FStat_STAT_NetUpdateLevelVisibility_DestructionInfos>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_NetUpdateLevelVisibility_DestructionInfos,*pFVar27,
                              L"STAT_NetUpdateLevelVisibility_DestructionInfos","STATGROUP_Quick",
                              "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      FVar51 = *(FName *)FVar31;
      bVar20 = false;
      bVar12 = false;
      local_a68.ComparisonIndex.Value = 0;
      local_a68.Number = 0;
      bVar19 = false;
      bVar21 = false;
      if ((FVar51.ComparisonIndex.Value.Value == 0) && (FVar51.Number == 0)) {
LAB_147ffe9dd:
        bVar12 = bVar21;
        bVar20 = bVar19;
        bVar19 = false;
        FVar51 = local_a68;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_acc.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_acc._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
          bVar20 = false;
          bVar12 = true;
          bVar19 = false;
          bVar21 = true;
          if (-1 < CpuChannel->Enabled) {
            local_aa0.ComparisonIndex.Value = FVar51.ComparisonIndex.Value.Value;
            local_aa0.Number = FVar51.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_aa0,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                       ,0x72f);
            bVar20 = true;
            bVar12 = true;
            bVar19 = true;
            bVar21 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_147ffe9dd;
        FThreadStats::AddMessage(FVar51,CycleScopeStart);
        bVar19 = true;
      }
      pUVar4 = (this->Driver).field0_0x0.DebugPtr;
      FVar53 = param_1->PackageName;
      uVar25 = ::GetTypeHash(FVar53.ComparisonIndex.Value);
      pTVar32 = TMapBase<FName,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>_>
                ::FindOrAddImpl<FName_const_&>
                          ((TMapBase<FName,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>,0>_>
                            *)&pUVar4->DestroyedStartupOrDormantActorsByLevel,FVar53.Number + uVar25
                           ,&param_1->PackageName);
      uVar25 = *(uint *)&(pTVar32->Elements).field_0x28;
      local_b00.RawResultEnumObj = &(pTVar32->Elements).field_0x10;
      local_ac0.ComparisonIndex.Value = 1;
      local_b00.ErrorContext.Data.AllocatorInstance.Data._4_4_ = uVar56;
      local_b00.ErrorContext.Data.ArrayNum = uVar56;
      if (uVar25 != 0) {
        puVar59 = *(uint **)&(pTVar32->Elements).field_0x20;
        if (puVar59 == (uint *)0x0) {
          puVar59 = local_b00.RawResultEnumObj;
        }
        uVar24 = *puVar59;
        pUVar38 = pUVar37;
        pUVar58 = pUVar37;
        local_b00.ErrorContext.Data.ArrayNum = 0;
        uVar56 = 0;
        while (uVar24 == 0) {
          iVar54 = (int)pUVar38;
          local_b00.ErrorContext.Data.ArrayNum = (int)pUVar58 + 0x20;
          pUVar58 = (UObjectBase *)(ulonglong)(uint)local_b00.ErrorContext.Data.ArrayNum;
          uVar56 = iVar54 + 1;
          pUVar38 = (UObjectBase *)(ulonglong)uVar56;
          local_b00.ErrorContext.Data.AllocatorInstance.Data._4_4_ = uVar25;
          if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar56)
          goto LAB_147ffeaa9;
          uVar24 = puVar59[(longlong)iVar54 + 1];
        }
        local_ac0.ComparisonIndex.Value = ~(uVar24 - 1) & uVar24;
        local_ac0.Number = 0;
        uVar48 = (longlong)local_ac0 * 2 + 1;
        lVar47 = 0x3f;
        if (uVar48 != 0) {
          for (; uVar48 >> lVar47 == 0; lVar47 = lVar47 + -1) {
          }
        }
        local_9f8.Number = (uint)lVar47;
        local_b00.ErrorContext.Data.AllocatorInstance.Data._4_4_ =
             (local_9f8.Number - 1) + local_b00.ErrorContext.Data.ArrayNum;
        if ((int)uVar25 < (int)local_b00.ErrorContext.Data.AllocatorInstance.Data._4_4_) {
          local_b00.ErrorContext.Data.AllocatorInstance.Data._4_4_ = uVar25;
        }
      }
LAB_147ffeaa9:
      local_b00.ResultEnumObj.WeakPtr.ObjectSerialNumber = local_ac0.ComparisonIndex.Value.Value;
      local_b00.ResultEnumObj.WeakPtr.ObjectIndex = uVar56;
      local_b00.ErrorContext.Data.ArrayMax = local_894;
      local_b00.NextResult._0_4_ =
           *(int *)&(pTVar32->Elements).field_0x8 - *(int *)&(pTVar32->Elements).field_0x34;
      local_ac8 = *(uint *)&(pTVar32->Elements).field_0x28;
      local_b00.ErrorContext.Data.AllocatorInstance.Data._0_4_ = 0xffffffff;
      local_b1c = -1 << ((byte)local_ac8 & 0x1f);
      local_b18 = local_ac8 & 0xffffffe0;
      iVar54 = (int)local_ac8 >> 5;
      stack0xfffffffffffff658 = local_b00.ErrorContext.Data.AllocatorInstance.Data;
      local_9a0 = local_b00.ErrorContext.Data.ArrayNum;
      iStack_99c = local_894;
      TStack_998 = local_b00.NextResult;
      local_b00.Result = (ulong64)pTVar32;
      local_ab8 = (ForElementType<unsigned_int>)local_b00.RawResultEnumObj;
      local_9c0 = pTVar32;
      auStack_9b8._0_8_ = local_b00.ResultEnumObj.WeakPtr;
      auStack_9b8._8_8_ = local_b00.RawResultEnumObj;
      if ((((int)local_ac8 < 0) || ((int)uVar25 < (int)local_ac8)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar21)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FVar15 = local_ab8;
      uVar56 = *(int *)((longlong)local_ab8 + 0x18);
      uVar25 = local_ac8;
      if (local_ac8 != uVar56) {
        FVar60 = local_ab8;
        if (*(ForElementType<unsigned_int> *)((longlong)local_ab8 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar60 = *(ForElementType<unsigned_int> *)((longlong)local_ab8 + 0x10);
        }
        uVar25 = local_b1c & *(uint *)((longlong)FVar60 + (longlong)iVar54 * 4);
        uVar24 = local_b18;
        while (uVar25 == 0) {
          lVar47 = (longlong)iVar54;
          uVar24 = uVar24 + 0x20;
          iVar54 = iVar54 + 1;
          uVar25 = uVar56;
          if ((int)((uVar56 - 1) + ((int)(uVar56 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar54)
          goto LAB_147ffebe0;
          uVar25 = *(uint *)((uchar *)((longlong)FVar60 + 4) + lVar47 * 4);
        }
        uVar48 = (ulonglong)(~(uVar25 - 1) & uVar25) * 2 + 1;
        lVar47 = 0x3f;
        if (uVar48 != 0) {
          for (; uVar48 >> lVar47 == 0; lVar47 = lVar47 + -1) {
          }
        }
        uVar25 = (uVar24 - 1) + (int)lVar47;
        if ((int)uVar56 < (int)uVar25) {
          uVar25 = uVar56;
        }
      }
LAB_147ffebe0:
      while( true ) {
        pTVar17 = local_9c0;
        if (*(int *)&(local_9c0->Elements).field_0x8 - *(int *)&(local_9c0->Elements).field_0x34 !=
            TStack_998._0_4_) {
          `TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_b1e);
        }
        FVar53 = local_b10;
        if (((uStack_9a4 == uVar25) && ((ForElementType<unsigned_int>)auStack_9b8._8_8_ == FVar15))
           && (pTVar17 == pTVar32)) break;
        pTVar33 = TMapBase<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>,0>_>
                  ::FindChecked((TMapBase<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TUniquePtr<FActorDestructionInfo,TDefaultDelete<FActorDestructionInfo>_>,0>_>
                                 *)&((this->Driver).field0_0x0.DebugPtr)->
                                    DestroyedStartupOrDormantActors,
                                (FNetworkGUID *)
                                ((longlong)(int)uStack_9a4 * 0x10 + *(longlong *)&pTVar17->Elements)
                               );
        pUVar4 = (this->Driver).field0_0x0.DebugPtr;
        if ((pUVar4 == (UNetDriver *)0x0) ||
           (pUVar4->ReplicationSystem == (UReplicationSystem *)0x0)) {
          pUVar5 = this->ReplicationConnectionDriver;
          if (pUVar5 == (UReplicationConnectionDriver *)0x0) {
            TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
            Emplace<FNetworkGUID_const_&>
                      (&this->DestroyedStartupOrDormantActorGUIDs,&local_9f0,
                       (bool *)&pTVar33->Ptr->NetGUID);
          }
          else {
            (**(code **)(*(longlong *)pUVar5 + 0x2c8))(pUVar5,pTVar33->Ptr);
          }
        }
        stack0xfffffffffffff658 =
             (FScriptContainerElement *)CONCAT44(uStack_9a4,auStack_9b8._16_4_ & ~auStack_9b8._4_4_)
        ;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_9b8);
      }
      if (bVar12) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar20) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar19) {
        FThreadStats::AddMessage(FVar51,CycleScopeEnd);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
        StatPtr_STAT_NetUpdateLevelVisibility_UpdateDormantActors =
             (FThreadSafeStaticStat<_private:_void___cdecl_UNetConnection::UpdateLevelVisibilityInternal(FUpdateLevelVisibilityLevelInfo_const_&)_::_17_::FStat_STAT_NetUpdateLevelVisibility_UpdateDormantActors>
              )0x0;
        pFVar27 = ::FName::FName(&local_980,"STAT_NetUpdateLevelVisibility_UpdateDormantActors");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_NetUpdateLevelVisibility_UpdateDormantActors,*pFVar27,
                   L"STAT_NetUpdateLevelVisibility_UpdateDormantActors","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS3);
      }
      FVar34 = StatPtr_STAT_NetUpdateLevelVisibility_UpdateDormantActors;
      if (StatPtr_STAT_NetUpdateLevelVisibility_UpdateDormantActors ==
          (FThreadSafeStaticStat<_private:_void___cdecl_UNetConnection::UpdateLevelVisibilityInternal(FUpdateLevelVisibilityLevelInfo_const_&)_::_17_::FStat_STAT_NetUpdateLevelVisibility_UpdateDormantActors>
           )0x0) {
        pFVar27 = ::FName::FName(&local_978,"STAT_NetUpdateLevelVisibility_UpdateDormantActors");
        FVar34 = (FThreadSafeStaticStat<_private:_void___cdecl_UNetConnection::UpdateLevelVisibilityInternal(FUpdateLevelVisibilityLevelInfo_const_&)_::_17_::FStat_STAT_NetUpdateLevelVisibility_UpdateDormantActors>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_NetUpdateLevelVisibility_UpdateDormantActors,*pFVar27,
                              L"STAT_NetUpdateLevelVisibility_UpdateDormantActors","STATGROUP_Quick"
                              ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid
                             );
      }
      FVar51 = *(FName *)FVar34;
      bVar19 = false;
      bVar12 = false;
      local_a58.ComparisonIndex.Value = 0;
      local_a58.Number = 0;
      if ((FVar51.ComparisonIndex.Value.Value == 0) && (FVar51.Number == 0)) {
LAB_147ffeeba:
        bVar20 = false;
        local_b28 = local_a58;
        FVar51 = local_a58;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_ac4.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_ac4._s_0,(char *)*(FName *)((longlong)FVar34 + 0x10));
          bVar19 = false;
          bVar12 = true;
          if (-1 < CpuChannel->Enabled) {
            local_b28 = FVar51;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_b28,(wchar_t *)*(FName *)((longlong)FVar34 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                       ,0x73b);
            bVar19 = true;
            bVar12 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_147ffeeba;
        local_b28 = FVar51;
        FThreadStats::AddMessage(FVar51,CycleScopeStart);
        bVar20 = true;
      }
      pUVar6 = ((this->Driver).field0_0x0.DebugPtr)->ReplicationSystem;
      if (pUVar6 == (UReplicationSystem *)0x0) {
        pUVar38 = (UObjectBase *)CONCAT44(uStack_934,local_938);
        if (pUVar38 != (UObjectBase *)0x0) {
          pUVar36 = Z_Construct_UClass_UWorld_NoRegister();
          pUVar37 = FindObjectWithOuter(pUVar38,pUVar36,(FName)0x0);
        }
        this_00 = (FNetObjectGroupHandle_u_0)
                  UNetDriver::GetNetworkObjectList((this->Driver).field0_0x0.DebugPtr);
        local_ab0 = this_00;
        if (UE::Net::Private::bTrackDormantObjectsByLevel == false) {
          if ((pUVar37 != (UObjectBase *)0x0) &&
             (lVar47 = *(longlong *)&pUVar37[1].ObjectFlags, lVar47 != 0)) {
            puVar55 = *(undefined8 **)(lVar47 + 0xa0);
            iVar54 = *(int *)(lVar47 + 0xa8);
            puVar2 = puVar55 + iVar54;
            while( true ) {
              if (*(int *)(lVar47 + 0xa8) != iVar54) {
                `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_b20);
              }
              FVar51 = local_b28;
              FVar53 = local_b10;
              if (puVar55 == puVar2) break;
              pAVar7 = (AActor *)*puVar55;
              if (((pAVar7 != (AActor *)0x0) && (pAVar7->bReplicates != '\0')) &&
                 ((pAVar7->NetDormancy).Value == '\x02')) {
                FNetworkObjectList::MarkActive
                          ((FNetworkObjectList *)this_00,pAVar7,this,
                           (this->Driver).field0_0x0.DebugPtr);
              }
              puVar55 = puVar55 + 1;
            }
          }
        }
        else {
          FNetworkObjectList::FlushDormantActors
                    ((FNetworkObjectList *)this_00,this,&param_1->PackageName);
        }
      }
      else {
        lVar47 = CONCAT17(uStack_939,
                          CONCAT16(uStack_93a,
                                   CONCAT15(uStack_93b,
                                            CONCAT14(uStack_93c,
                                                     CONCAT13(uStack_93d,
                                                              CONCAT12(uStack_93e,
                                                                       CONCAT11(uStack_93f,
                                                                                uStack_940)))))));
        if ((lVar47 != 0) && (local_b08 = *(FName *)(lVar47 + 0x1b0), local_b08 != (FName)0x0)) {
          pUVar35 = UReplicationSystem::GetReplicationBridge(pUVar6);
          UReplicationBridge::GetLevelGroup
                    ((UReplicationBridge *)pUVar35,(UObject *)&local_ab0._s_1);
          if (local_ab0.Value != 0) {
            UReplicationSystem::SetGroupFilterStatus
                      (pUVar6,(FNetObjectGroupHandle)local_ab0._s_1,
                       (this->ConnectionHandle).ParentConnectionId,Allow);
            pUVar37 = (UObjectBase *)0x0;
          }
        }
      }
      pUVar5 = this->ReplicationConnectionDriver;
      if (pUVar5 != (UReplicationConnectionDriver *)0x0) {
        (**(code **)(*(longlong *)pUVar5 + 0x2e8))(pUVar5,param_1->PackageName,pUVar37);
      }
      if (bVar12) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar19) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      goto joined_r0x000147fffa00;
    }
  }
  else if ((bool)local_948 != false) goto LAB_147fffa0f;
  ::FName::ToString(&param_1->PackageName,&local_a88);
  ::FName::ToString(&param_1->FileName,&local_a98);
  if (2 < (byte)LogPlayerController._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerController);
  }
  pTVar14 = CVarSkipMissingLevelDisconnect.Ref;
  bVar20 = IsInParallelGameThread();
  if (bVar20) {
LAB_147fff0db:
    pUVar38 = pUVar37;
  }
  else {
    bVar20 = IsInGameThread();
    pUVar38 = (UObjectBase *)&DAT_00000001;
    if (bVar20) goto LAB_147fff0db;
  }
  FVar16.Data = local_a88.Data.AllocatorInstance.Data;
  if ((pTVar14->ShadowedValue[(longlong)&pUVar38->_padding_] == false) &&
     (param_1->bSkipCloseOnError == 0)) {
    local_868.Base = local_848;
    local_868.End = (wchar_t *)local_48;
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    local_868.CurPos = local_848;
    uVar25 = local_a88.Data.ArrayNum - 1;
    if (local_a88.Data.ArrayNum == 0) {
      uVar25 = uVar56;
    }
    uVar50 = (ulong64)(int)uVar25;
    if (local_48 < local_848 + uVar50) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,uVar50);
    }
    if (uVar25 != 0) {
      pvVar39 = FGenericPlatformString::Memcpy(local_868.CurPos,FVar16.Data,uVar50 * 2);
      local_868.CurPos = (wchar_t *)(uVar50 * 2 + (longlong)pvVar39);
    }
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    FVar16.Data = local_a98.Data.AllocatorInstance.Data;
    *local_868.CurPos = L',';
    local_868.CurPos = local_868.CurPos + 1;
    iVar54 = local_a98.Data.ArrayNum + -1;
    if (local_a98.Data.ArrayNum == 0) {
      iVar54 = 0;
    }
    uVar50 = (ulong64)iVar54;
    if (local_868.End < local_868.CurPos + uVar50) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,uVar50);
    }
    if (iVar54 != 0) {
      pvVar39 = FGenericPlatformString::Memcpy(local_868.CurPos,FVar16.Data,uVar50 * 2);
      local_868.CurPos = (wchar_t *)(uVar50 * 2 + (longlong)pvVar39);
    }
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\0';
    ::FString::FString(&local_9d0,local_868.Base);
    pUVar40 = StaticEnum<enum_ENetCloseResult>();
    local_b00.Result = (ulong64)&DAT_0000001a;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar40 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar40);
    }
    local_b00.ResultEnumObj.WeakPtr.ObjectIndex = 0;
    local_b00.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
    local_9e8 = pUVar40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar40 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar40);
    }
    FWeakObjectPtr::operator=(&local_b00.ResultEnumObj.WeakPtr,(FObjectPtr)&local_9e8);
    local_b00.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b00.ErrorContext.Data.ArrayNum = 0;
    local_b00.ErrorContext.Data.ArrayMax = 0;
    local_b00.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    bVar20 = 1 < local_9d0.Data.ArrayNum;
    local_b00.RawResultEnumObj = pUVar40;
    if (bVar20) {
      pFVar42 = ::FString::FString(&local_928,&local_9d0);
    }
    else {
      pwVar41 = ::LexToString(MissingLevelPackage);
      pFVar42 = ::FString::FString(&local_918,pwVar41);
    }
    iVar54 = (pFVar42->Data).ArrayNum;
    iVar57 = iVar54 + -1;
    if (iVar54 == 0) {
      iVar57 = 0;
    }
    ::FString::AssignRange
              (&local_b00.ErrorContext,(wchar_t *)(pFVar42->Data).AllocatorInstance.Data,iVar57);
    if ((bVar20) && (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_928.Data.AllocatorInstance.Data);
    }
    if ((!bVar20) && (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_918.Data.AllocatorInstance.Data);
    }
    Close(this,&local_b00);
    if (local_b00.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_b00.NextResult + -0x10))((longlong)local_b00.NextResult + -0x10);
    }
    if (local_b00.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b00.ErrorContext.Data.AllocatorInstance.Data);
    }
    if (local_9d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9d0.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  }
  if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a98.Data.AllocatorInstance.Data);
  }
  if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a88.Data.AllocatorInstance.Data);
  }
LAB_147fffa0f:
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar18) {
    FThreadStats::AddMessage(FVar53,CycleScopeEnd);
  }
  return;
}

// UpdatePacketSimulationSettings @ 1480002c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::UpdatePacketSimulationSettings(UNetConnection *this)

{
  UNetDriver *pUVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if ((this->Driver).field0_0x0.DebugPtr == (UNetDriver *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Driver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                       ,0x14f4,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (this->Driver).field0_0x0.DebugPtr;
  iVar3 = (pUVar1->PacketSimulationSettings).PktLossMaxSize;
  iVar4 = (pUVar1->PacketSimulationSettings).PktLossMinSize;
  iVar5 = (pUVar1->PacketSimulationSettings).PktOrder;
  (this->PacketSimulationSettings).PktLoss = (pUVar1->PacketSimulationSettings).PktLoss;
  (this->PacketSimulationSettings).PktLossMaxSize = iVar3;
  (this->PacketSimulationSettings).PktLossMinSize = iVar4;
  (this->PacketSimulationSettings).PktOrder = iVar5;
  iVar3 = (pUVar1->PacketSimulationSettings).PktLag;
  iVar4 = (pUVar1->PacketSimulationSettings).PktLagVariance;
  iVar5 = (pUVar1->PacketSimulationSettings).PktLagMin;
  (this->PacketSimulationSettings).PktDup = (pUVar1->PacketSimulationSettings).PktDup;
  (this->PacketSimulationSettings).PktLag = iVar3;
  (this->PacketSimulationSettings).PktLagVariance = iVar4;
  (this->PacketSimulationSettings).PktLagMin = iVar5;
  iVar3 = (pUVar1->PacketSimulationSettings).PktIncomingLagMin;
  iVar4 = (pUVar1->PacketSimulationSettings).PktIncomingLagMax;
  iVar5 = (pUVar1->PacketSimulationSettings).PktIncomingLoss;
  (this->PacketSimulationSettings).PktLagMax = (pUVar1->PacketSimulationSettings).PktLagMax;
  (this->PacketSimulationSettings).PktIncomingLagMin = iVar3;
  (this->PacketSimulationSettings).PktIncomingLagMax = iVar4;
  (this->PacketSimulationSettings).PktIncomingLoss = iVar5;
  iVar3 = (pUVar1->PacketSimulationSettings).PktFrameDelay;
  iVar4 = (pUVar1->PacketSimulationSettings).PktIncomingFrameDelay;
  iVar5 = (pUVar1->PacketSimulationSettings).PktBufferBloatInMS;
  (this->PacketSimulationSettings).PktJitter = (pUVar1->PacketSimulationSettings).PktJitter;
  (this->PacketSimulationSettings).PktFrameDelay = iVar3;
  (this->PacketSimulationSettings).PktIncomingFrameDelay = iVar4;
  (this->PacketSimulationSettings).PktBufferBloatInMS = iVar5;
  (this->PacketSimulationSettings).PktIncomingBufferBloatInMS =
       (pUVar1->PacketSimulationSettings).PktIncomingBufferBloatInMS;
  return;
}

// ValidateSendBuffer @ 148001030

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::ValidateSendBuffer(UNetConnection *this)

{
  if (((this->SendBuffer)._padding_ & 0x200) != 0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
  }
  return;
}

// WriteBitsToSendBuffer @ 148001080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UNetConnection::WriteBitsToSendBuffer
          (UNetConnection *this,uchar *param_1,int param_2,uchar *param_3,int param_4,
          EWriteBitsDataType param_5)

{
  int iVar1;
  
  PrepareWriteBitsToSendBuffer(this,param_2,param_4);
  iVar1 = WriteBitsToSendBufferInternal(this,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}

// WriteBitsToSendBufferInternal @ 1480010f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UNetConnection::WriteBitsToSendBufferInternal
          (UNetConnection *this,uchar *param_1,int param_2,uchar *param_3,int param_4,
          EWriteBitsDataType param_5)

{
  FBitWriter *pFVar1;
  long64 lVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar2 = (this->SendBuffer).Num;
  pFVar1 = &this->SendBuffer;
  local_18 = CONCAT31(local_18._1_3_,*(byte *)((longlong)&(this->SendBuffer)._padding_ + 1) >> 1) &
             0xffffff01;
  uStack_10 = (undefined4)lVar2;
  uStack_c = (undefined4)((ulonglong)lVar2 >> 0x20);
  *(uint *)&this->LastStart = local_18;
  *(undefined4 *)&(this->LastStart).field_0x4 = uStack_14;
  *(undefined4 *)&(this->LastStart).Num = uStack_10;
  *(undefined4 *)((longlong)&(this->LastStart).Num + 4) = uStack_c;
  if (param_2 != 0) {
    (**(code **)(pFVar1->_padding_ + 400))(pFVar1,param_1,(longlong)param_2);
    (**(code **)(this->_padding_ + 0x2f0))(this);
  }
  if (param_4 != 0) {
    (**(code **)(pFVar1->_padding_ + 400))(pFVar1,param_3,(longlong)param_4);
    (**(code **)(this->_padding_ + 0x2f0))(this);
  }
  iVar6 = this->OutPacketId;
  if (param_5 == Bunch) {
    this->NumBunchBits = this->NumBunchBits + param_2 + param_4;
  }
  lVar7 = (this->SendBuffer).Num;
  iVar9 = 0x135;
  if (0 < lVar7) {
    iVar9 = 1;
  }
  iVar9 = (int)(this->SendBuffer).Max - iVar9;
  iVar8 = (int)lVar7;
  if ((iVar9 - iVar8 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumberOfFreeBits >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0x1112,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  pTVar4 = CVarForceNetFlush.Ref;
  if (iVar9 != iVar8) {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
      lVar7 = 0;
    }
    else {
      lVar7 = 4;
    }
    if (*(int *)((longlong)pTVar4->ShadowedValue + lVar7) == 0) {
      return iVar6;
    }
  }
  (**(code **)(this->_padding_ + 0x308))(this,0);
  return iVar6;
}

// WriteDummyPacketInfo @ 148001250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::WriteDummyPacketInfo(UNetConnection *this,FBitWriter *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  uchar uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  
  bVar6 = this->bFlushedNetThisFrame;
  lVar8 = (longlong)(int)param_1->Num;
  FBitWriter::WriteBit(param_1,bVar6 == false);
  if (bVar6 == false) {
    (this->HeaderMarkForPacketInfo).Num = param_1->Num;
    local_res10[0] = 0;
    (this->HeaderMarkForPacketInfo).Overflowed =
         (bool)(*(byte *)((longlong)&param_1->_padding_ + 1) >> 1 & 1);
    (**(code **)(param_1->_padding_ + 400))(param_1,local_res10,10);
    if (param_1->Num - lVar8 != 0xb) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Writer.GetNumBits() - BitsWrittenPrePacketInfo == (1 + NetConnectionHelper::NumBitsForJitterClockTimeInHeader)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0xb17,
                         L"WriteDummyPacketInfo did not write the expected nb of bits: Wrote %lld, Expected %d"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    cVar5 = (**(code **)(((this->Driver).field0_0x0.DebugPtr)->_padding_ + 0x3f8))();
    pTVar3 = CVarPingExcludeFrameTime.Ref;
    if (cVar5 == '\0') {
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
            (*pcVar2)();
            return;
          }
        }
      }
      uVar7 = 0 < pTVar3->ShadowedValue[0];
    }
    else {
      uVar7 = this->bLastHasServerFrameTime;
    }
    FBitWriter::WriteBit(param_1,uVar7);
    if (uVar7 != '\0') {
      cVar5 = (**(code **)(((this->Driver).field0_0x0.DebugPtr)->_padding_ + 0x3f8))();
      if (cVar5 != '\0') {
        plVar1 = (longlong *)param_1->_padding_;
        local_res8[0] = 0;
        if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,1);
        }
        else {
          local_res8[0] = *(undefined1 *)*plVar1;
          *plVar1 = *plVar1 + 1;
        }
      }
    }
  }
  this->bSendBufferHasDummyPacketInfo = bVar6 == false;
  if (0x14 < param_1->Num - lVar8) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.GetNumBits() - BitsWrittenPrePacketInfo <= MAX_PACKET_INFO_HEADER_BITS"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                       ,0xb27,
                       L"WriteDummyPacketInfo exceeded the max allowed bits. Wrote %lld. Max %d");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// WriteFinalPacketInfo @ 148001430

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
UNetConnection::WriteFinalPacketInfo(UNetConnection *this,FBitWriter *param_1,double param_2)

{
  long64 lVar1;
  long64 lVar2;
  UNetDriver *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  char cVar9;
  longlong lVar10;
  uchar uVar11;
  undefined1 auVar12 [16];
  undefined1 local_res8 [8];
  uint local_res20 [2];
  
  if (this->bSendBufferHasDummyPacketInfo != false) {
    if ((this->HeaderMarkForPacketInfo).Num == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("HeaderMarkForPacketInfo.GetNumBits() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0xb33,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    dVar6 = __real_408f400000000000;
    lVar1 = (this->HeaderMarkForPacketInfo).Num;
    local_res20[0] = 0x3ff;
    lVar2 = param_1->Num;
    param_1->Num = lVar1;
    if ((param_2 - this->PreviousPacketSendTimeInS) * dVar6 < dVar6) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = param_2;
      auVar12 = roundpd(auVar12,auVar12,1);
      local_res20[0] = (uint)(longlong)((param_2 - auVar12._0_8_) * dVar6) & 0x3ff;
    }
    (**(code **)(param_1->_padding_ + 0x198))(param_1,local_res20,0x400);
    if (param_1->Num - (longlong)(int)lVar1 != 10) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Writer.GetNumBits() - BitsWrittenPreJitterClock == NetConnectionHelper::NumBitsForJitterClockTimeInHeader"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                         ,0xb56,
                         L"WriteFinalPacketInfo did not write the expected nb of bits: Wrote %lld, Expected %d"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pUVar3 = (this->Driver).field0_0x0.DebugPtr;
    this->PreviousPacketSendTimeInS = param_2;
    cVar9 = (**(code **)(pUVar3->_padding_ + 0x3f8))();
    pTVar7 = CVarPingExcludeFrameTime.Ref;
    if (cVar9 == '\0') {
      bVar8 = IsInParallelGameThread();
      if (!bVar8) {
        bVar8 = IsInGameThread();
        if (!bVar8) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      uVar11 = 0 < pTVar7->ShadowedValue[0];
    }
    else {
      uVar11 = this->bLastHasServerFrameTime;
    }
    FBitWriter::WriteBit(param_1,uVar11);
    if (uVar11 != '\0') {
      cVar9 = (**(code **)(((this->Driver).field0_0x0.DebugPtr)->_padding_ + 0x3f8))();
      if (cVar9 != '\0') {
        lVar10 = (longlong)
                 ROUND(this->FrameTime * __real_409f400000000000 - __real_3fe0000000000000) >> 1;
        local_res8[0] = 0xff;
        if (lVar10 < 0xff) {
          local_res8[0] = (undefined1)lVar10;
        }
        plVar4 = (longlong *)param_1->_padding_;
        if ((ulonglong)plVar4[1] < *plVar4 + 1U) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,1);
        }
        else {
          *plVar4 = *plVar4 + 1;
        }
      }
    }
    (this->HeaderMarkForPacketInfo).Overflowed = false;
    (this->HeaderMarkForPacketInfo).Num = 0;
    param_1->Num = lVar2;
  }
  return;
}

// WritePacketHeader @ 148001ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNetConnection::WritePacketHeader(UNetConnection *this,FBitWriter *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  
  lVar1 = param_1->Num;
  param_1->Num = 0;
  bVar3 = FNetPacketNotify::WriteHeader(&this->PacketNotify,param_1,0 < lVar1);
  if (0x120 < param_1->Num) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Writer.GetNumBits() <= MAX_PACKET_RELIABLE_SEQUENCE_HEADER_BITS",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetConnection.cpp"
                       ,0xaf4,L"WritePacketHeader exceeded the max allowed bits. Wrote %lld. Max %d"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((0 < lVar1) && (param_1->Num = lVar1, bVar3)) {
    this->HasDirtyAcks = 0;
  }
  return;
}

// operator() @ 15051eb20

bool __thiscall `UNetConnection::InitChannelData'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5435733364554334626>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5435733364554334626>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15051eb60

bool __thiscall `UNetConnection::StoreDormantReplicator'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5435733364554340039>);
  if (bVar2) {
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5435733364554340039>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15051ebf0;
    }
  }
  bVar2 = false;
LAB_15051ebf0:
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

// operator() @ 15051ec20

bool __thiscall `UNetConnection::ReceivedPacket'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5435733364554337361>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5435733364554337361>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15051ed90

bool __thiscall `UNetConnection::RestoreRemappedChannel'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5435733364554338331>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5435733364554338331>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15051ee30

bool __thiscall `UNetConnection::FlushDormancy'::__l29::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5435733364554339736>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5435733364554339736>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15051eea8;
    }
  }
  bVar2 = false;
LAB_15051eea8:
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

// operator() @ 15051eee0

bool __thiscall `UNetConnection::DispatchPacket'::__l908::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5435733364554338303>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5435733364554338303>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15051f000

bool __thiscall `UNetConnection::RestoreRemappedChannel'::__l16::<lambda_2>::operator()(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  bool bVar7;
  void *local_28 [2];
  void *local_18 [2];
  
  bVar3 = false;
  bVar7 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5435733364554338352>);
  if (bVar4) {
    plVar1 = (longlong *)**(longlong **)((longlong)this + 8);
    if (plVar1 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar1 + 0x2d0))(plVar1,local_18);
      if (*(int *)(lVar6 + 8) == 0) {
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
    }
    plVar1 = (longlong *)**(longlong **)this;
    bVar7 = plVar1 != (longlong *)0x0;
    if (bVar7) {
      (**(code **)(*plVar1 + 0x2d0))(plVar1,local_28);
    }
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5435733364554338352>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15051f0d0;
    }
  }
  bVar4 = false;
LAB_15051f0d0:
  if ((bVar7) && (local_28[0] != (void *)0x0)) {
    FMemory::Free(local_28[0]);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (!bVar4) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// operator() @ 15051f180

bool __thiscall `UNetConnection::FlushDormancy'::__l37::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5435733364554339748>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res18,&local_38);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5435733364554339748>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15051f259;
    }
  }
  bVar4 = false;
LAB_15051f259:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 15051f490

bool __thiscall `UNetConnection::Tick'::__l191::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5435733364554339199>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5435733364554339199>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15051f510

bool __thiscall `UNetConnection::Tick'::__l197::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5435733364554339211>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5435733364554339211>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}


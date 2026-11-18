// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 27

// StaticClass @ 1472676e0

UClass * __cdecl UDemoNetConnection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDemoNetConnection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetConnection::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DemoNetConnection",
               &Z_Registration_Info_UClass_UDemoNetConnection.InnerSingleton,
               StaticRegisterNativesUDemoNetConnection,0x1fd0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDemoNetConnection>,
               InternalVTableHelperCtorCaller<UDemoNetConnection>,local_res8,
               UNetConnection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDemoNetConnection.InnerSingleton;
}

// UDemoNetConnection @ 14726cc60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDemoNetConnection * __thiscall
UDemoNetConnection::UDemoNetConnection(UDemoNetConnection *this,FVTableHelper *param_1)

{
  UNetConnection::UNetConnection((UNetConnection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  *(undefined8 *)&this->OpenChannelMap = 0;
  *(undefined8 *)&(this->OpenChannelMap).field_0x8 = 0;
  *(undefined8 *)&(this->OpenChannelMap).field_0x20 = 0;
  *(undefined4 *)&(this->OpenChannelMap).field_0x28 = 0;
  *(undefined4 *)&(this->OpenChannelMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OpenChannelMap).field_0x34 = 0;
  *(undefined4 *)&(this->OpenChannelMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OpenChannelMap).field_0x40 = 0;
  *(undefined4 *)&(this->OpenChannelMap).field_0x48 = 0;
  return this;
}

// ~UDemoNetConnection @ 14726d400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDemoNetConnection::~UDemoNetConnection(UDemoNetConnection *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  *(undefined4 *)&(this->OpenChannelMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OpenChannelMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,UActorChannel_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,UActorChannel_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNetworkGUID,UActorChannel_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OpenChannelMap);
  UNetConnection::~UNetConnection((UNetConnection *)this);
  return;
}

// GetPrivateStaticClass @ 14726f500

UClass * __cdecl UDemoNetConnection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDemoNetConnection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetConnection::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DemoNetConnection",
               &Z_Registration_Info_UClass_UDemoNetConnection.InnerSingleton,
               StaticRegisterNativesUDemoNetConnection,0x1fd0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDemoNetConnection>,
               InternalVTableHelperCtorCaller<UDemoNetConnection>,local_res8,
               UNetConnection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDemoNetConnection.InnerSingleton;
}

// InitLocalConnection @ 147270410

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
UDemoNetConnection::InitLocalConnection
          (UDemoNetConnection *this,UNetDriver *param_1,FSocket *param_2,FURL *param_3,
          EConnectionState param_4,int param_5,int param_6)

{
  return;
}

// InitRemoteConnection @ 147270430

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
UDemoNetConnection::InitRemoteConnection
          (UDemoNetConnection *this,UNetDriver *param_1,FSocket *param_2,FURL *param_3,
          FInternetAddr *param_4,EConnectionState param_5,int param_6,int param_7)

{
  return;
}

// IsNetReady @ 1472704e0

bool __thiscall UDemoNetConnection::IsNetReady(UDemoNetConnection *this)

{
  return true;
}

// RemoteAddressToString @ 1472706c0

FString * __thiscall
UDemoNetConnection::RemoteAddressToString(UDemoNetConnection *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Demo");
  return __return_storage_ptr__;
}

// Serialize @ 147270770

void __thiscall
UDemoNetConnection::Serialize(UDemoNetConnection *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUDemoNetConnection @ 147270a10

void __cdecl UDemoNetConnection::StaticRegisterNativesUDemoNetConnection(void)

{
  return;
}

// UDemoNetConnection @ 147abd3f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDemoNetConnection * __thiscall
UDemoNetConnection::UDemoNetConnection(UDemoNetConnection *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  
  UNetConnection::UNetConnection((UNetConnection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  *(undefined8 *)&this->OpenChannelMap = 0;
  *(undefined8 *)&(this->OpenChannelMap).field_0x8 = 0;
  *(undefined8 *)&(this->OpenChannelMap).field_0x20 = 0;
  *(undefined4 *)&(this->OpenChannelMap).field_0x28 = 0;
  *(undefined4 *)&(this->OpenChannelMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OpenChannelMap).field_0x34 = 0;
  *(undefined4 *)&(this->OpenChannelMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OpenChannelMap).field_0x40 = 0;
  *(undefined4 *)&(this->OpenChannelMap).field_0x48 = 0;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 0xb;
  *(undefined4 *)&this->_padding_ = 0x800;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// ClientHasInitializedLevel @ 147acaef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDemoNetConnection::ClientHasInitializedLevel(UDemoNetConnection *this,ULevel *param_1)

{
  bool bVar1;
  
  if (*(int *)(this->_padding_ + 0xe24) < 3) {
    bVar1 = UNetConnection::ClientHasInitializedLevel((UNetConnection *)this,param_1);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// CreateReplicatorForNewActorChannel @ 147ace980

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
UDemoNetConnection::CreateReplicatorForNewActorChannel
          (UDemoNetConnection *this,TSharedPtr<FObjectReplicator,1> *__return_storage_ptr__,
          UObject *param_1)

{
  int iVar1;
  longlong lVar2;
  FObjectPtr_u_0 FVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FObjectReplicator *pFVar7;
  UClass *pUVar8;
  TSharedPtr<FObjectReplicator,1> *pTVar9;
  FRepLayout *this_00;
  byte bVar10;
  AActor *this_01;
  TRawPtrProxy<FObjectReplicator> local_res8;
  
  pFVar7 = ::operator_new(0xf0);
  this_01 = (AActor *)0x0;
  local_res8.Object = (FObjectReplicator *)this_01;
  if (pFVar7 != (FObjectReplicator *)0x0) {
    local_res8.Object = FObjectReplicator::FObjectReplicator(pFVar7);
  }
  TSharedPtr<FObjectReplicator,1>::TSharedPtr<FObjectReplicator,1><FObjectReplicator>
            (__return_storage_ptr__,&local_res8);
  lVar2 = this->_padding_;
  if (param_1 != (UObject *)0x0) {
    pUVar8 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      this_01 = (AActor *)param_1;
    }
  }
  if ((((lVar2 == 0) || (*(char *)(lVar2 + 0xe3e) == '\0')) || (this_01 == (AActor *)0x0)) ||
     (bVar6 = AActor::IsNetStartupActor(this_01), !bVar6)) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  if ((__return_storage_ptr__->Object == (FObjectReplicator *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedPtr<FObjectReplicator,1> *)(*pcVar5)();
    return pTVar9;
  }
  FObjectReplicator::InitWithObject
            (__return_storage_ptr__->Object,param_1,(UNetConnection *)this,(bool)(bVar10 ^ 1));
  if (bVar10 != 0) {
    if ((__return_storage_ptr__->Object == (FObjectReplicator *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedPtr<FObjectReplicator,1> *)(*pcVar5)();
      return pTVar9;
    }
    if (((__return_storage_ptr__->Object->RepLayout).Object != (FRepLayout *)0x0) &&
       (pUVar8 = *(UClass **)&param_1->field_0x10, pUVar8 != (UClass *)0x0)) {
      if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar8);
      }
      FVar3 = (pUVar8->ClassDefaultObject).field0_0x0.ObjectPtr.field0_0x0;
      pFVar7 = TSharedPtr<FObjectReplicator,1>::operator->(__return_storage_ptr__);
      this_00 = TSharedPtr<FRepLayout,1>::operator->(&pFVar7->RepLayout);
      FRepLayout::DiffProperties<0,0>
                (this_00,(TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)0x0,
                 (TRepDataBufferBase<0,unsigned_char>)param_1,
                 (TRepDataBufferBase<0,unsigned_char_const_>)FVar3,Sync);
      if ((this_01 != (AActor *)0x0) && ((this_01->Role).Value == '\x03')) {
        AActor::SwapRoles(this_01);
      }
    }
  }
  plVar4 = (longlong *)this->_padding_;
  if ((((plVar4 != (longlong *)0x0) && (this_01 != (AActor *)0x0)) &&
      (bVar6 = AActor::IsNetStartupActor(this_01), bVar6)) && (!(bool)this_01->bReplayRewindable)) {
    (**(code **)(*plVar4 + 0x500))(plVar4,this_01);
  }
  return __return_storage_ptr__;
}

// DestroyIgnoredActor @ 147ad0230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDemoNetConnection::DestroyIgnoredActor(UDemoNetConnection *this,AActor *param_1)

{
  longlong *plVar1;
  bool bVar2;
  
  plVar1 = (longlong *)this->_padding_;
  if ((plVar1 != (longlong *)0x0) && (param_1 != (AActor *)0x0)) {
    bVar2 = AActor::IsNetStartupActor(param_1);
    if ((bVar2) && (!(bool)param_1->bReplayRewindable)) {
      (**(code **)(*plVar1 + 0x500))(plVar1,param_1);
    }
  }
  UNetConnection::DestroyIgnoredActor((UNetConnection *)this,param_1);
  return;
}

// FlushNet @ 147adfa70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDemoNetConnection::FlushNet(UDemoNetConnection *this,bool param_1)

{
  if (*(longlong *)(this->_padding_ + 0x100) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147adfa81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2f8))();
    return;
  }
  UNetConnection::FlushNet((UNetConnection *)this,param_1);
  return;
}

// GetRemoteAddr @ 147aeccc0

TSharedPtr<FInternetAddr_const_,1> * __thiscall
UDemoNetConnection::GetRemoteAddr
          (UDemoNetConnection *this,TSharedPtr<FInternetAddr_const_,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  __return_storage_ptr__->Object = FInternetAddrDemo::DemoInternetAddr.Object;
  FVar2 = FInternetAddrDemo::DemoInternetAddr.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       FInternetAddrDemo::DemoInternetAddr.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// HandleClientPlayer @ 147aef470

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
UDemoNetConnection::HandleClientPlayer
          (UDemoNetConnection *this,APlayerController *param_1,UNetConnection *param_2)

{
  longlong lVar1;
  UWorld *pUVar2;
  code *pcVar3;
  ForAnyElementType *pFVar4;
  int iVar5;
  bool bVar6;
  UClass *pUVar7;
  AActor *pAVar8;
  APlayerStart *pAVar9;
  TRotator<double> *pTVar10;
  uint uVar11;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  uchar uVar15;
  LARGE_INTEGER local_res20;
  TIndexedContainerIterator<TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_>_const_,ULocalPlayer_*_const,int>
  local_108;
  LARGE_INTEGER local_f8;
  TObjectPtr<APlayerController>_u_0 local_f0;
  LARGE_INTEGER local_e8;
  LARGE_INTEGER local_e0;
  TObjectPtr<APlayerController>_u_0 local_d8;
  UClass *local_d0;
  TActorIteratorBase<TActorIterator<APlayerStart>_> local_c8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  TRotator<double> local_50;
  
  lVar1 = this->_padding_;
  if (*(APlayerController **)(lVar1 + 0xa58) == param_1) {
    if ((param_2 == (UNetConnection *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NetConnection != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                           ,0x12be,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_1 == (APlayerController *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PC != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                           ,0x12bf,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    AActor::SetRole((AActor *)param_1,ROLE_AutonomousProxy);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNetConnection *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    (param_1->NetConnection).field0_0x0.DebugPtr = param_2;
    param_2->LastReceiveTime = *(double *)(lVar1 + 800);
    QueryPerformanceCounter(&local_res20);
    param_2->LastReceiveRealtime =
         (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    QueryPerformanceCounter(&local_f8);
    param_2->LastGoodPacketRealtime =
         (double)local_f8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
    ;
    UNetConnection::SetConnectionState(param_2,USOCK_Open);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (APlayerController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    param_2->_padding_ = (longlong)param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (param_1 == (APlayerController *)0x0)) {
      (param_2->OwningActor).field0_0x0.DebugPtr = (AActor *)param_1;
      *(APlayerController **)(lVar1 + 0xa58) = param_1;
      if (param_1 == (APlayerController *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)param_1);
      (param_2->OwningActor).field0_0x0.DebugPtr = (AActor *)param_1;
      *(APlayerController **)(lVar1 + 0xa58) = param_1;
    }
    local_f0.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<APlayerController>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<APlayerController>_>
              ((TArray<TObjectPtr<APlayerController>,TSizedDefaultAllocator<32>_> *)(lVar1 + 0xbf8),
               (TObjectPtr<APlayerController> *)&local_f0.ObjectPtr);
    return;
  }
  uVar15 = '\0';
  UEngine::GetLocalPlayerIterator(GEngine,&local_108,*(UWorld **)(lVar1 + 0x1b8));
  pTVar12 = local_108.Container;
  for (; lVar14 = (longlong)local_108.Index, -1 < local_108.Index;
      local_108.Index = local_108.Index + 1) {
    pTVar13 = pTVar12;
    if (pTVar12->ArrayNum <= local_108.Index) goto LAB_147aef6e0;
    if ((local_108.Index < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       pTVar13 = local_108.Container, bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(longlong *)((pTVar12->AllocatorInstance).Data + lVar14 * 8) != 0) goto LAB_147aef6e0;
    pTVar12 = pTVar13;
  }
LAB_147aef7e1:
  if ((param_2 == (UNetConnection *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NetConnection != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                         ,0x12be,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1 == (APlayerController *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PC != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                         ,0x12bf,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AActor::SetRole((AActor *)param_1,ROLE_AutonomousProxy);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UNetConnection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (param_1->NetConnection).field0_0x0.DebugPtr = param_2;
  param_2->LastReceiveTime = *(double *)(lVar1 + 800);
  QueryPerformanceCounter(&local_e8);
  param_2->LastReceiveRealtime =
       (double)local_e8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  QueryPerformanceCounter(&local_e0);
  param_2->LastGoodPacketRealtime =
       (double)local_e0.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
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
LAB_147aef917:
  *(APlayerController **)(lVar1 + 0xa58) = param_1;
  if (param_1 != (APlayerController *)0x0) {
    local_d8.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<APlayerController>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<APlayerController>_>
              ((TArray<TObjectPtr<APlayerController>,TSizedDefaultAllocator<32>_> *)(lVar1 + 0xbf8),
               (TObjectPtr<APlayerController> *)&local_d8.ObjectPtr);
  }
  pUVar7 = Z_Construct_UClass_APlayerStart_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar2 = *(UWorld **)(this->_padding_ + 0x1b8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_c8.Flags = OnlyActiveLevels|SkipPendingKill;
  local_c8.State.bIsSet = false;
  local_d0 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FActorIteratorState::FActorIteratorState
            (&local_c8.State.TypedValue,pUVar2,(TSubclassOf<AActor>)&local_d0);
  local_c8.State.bIsSet = true;
  TActorIteratorBase<TActorIterator<APlayerStart>_>::operator++(&local_c8);
  if ((local_c8.State.bIsSet == false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_c8.State.TypedValue.ReachedEnd == false) {
    pcVar3 = *(code **)(param_1->_padding_ + 0x7b8);
    if ((local_c8.State.bIsSet == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pAVar8 = FActorIteratorState::GetActorChecked(&local_c8.State.TypedValue);
    pAVar9 = CastChecked<APlayerStart,AActor>(pAVar8);
    pTVar10 = AActor::GetActorRotation((AActor *)pAVar9,&local_50);
    if ((local_c8.State.bIsSet == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pAVar8 = FActorIteratorState::GetActorChecked(&local_c8.State.TypedValue);
    pAVar9 = CastChecked<APlayerStart,AActor>(pAVar8);
    lVar1 = pAVar9->_padding_;
    local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_64 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_5c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar1 != 0) {
      local_68 = *(undefined4 *)(lVar1 + 0x210);
      uStack_64 = *(undefined4 *)(lVar1 + 0x214);
      uStack_60 = *(undefined4 *)(lVar1 + 0x218);
      uStack_5c = *(undefined4 *)(lVar1 + 0x21c);
      local_58 = *(double *)(lVar1 + 0x220);
    }
    (*pcVar3)(param_1,&local_68,pTVar10);
  }
  if (local_c8.State.bIsSet != false) {
    UWorld::RemoveOnActorSpawnedHandler
              (local_c8.State.TypedValue.CurrentWorld,
               local_c8.State.TypedValue.ActorSpawnedDelegateHandle);
    if (local_c8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
    }
    if (local_c8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.State.TypedValue.ActorArray.AllocatorInstance.Data);
    }
  }
  return;
LAB_147aef6e0:
  iVar5 = local_108.Index;
  if ((local_108.Index < 0) || (pTVar13->ArrayNum <= local_108.Index)) goto LAB_147aef7e1;
  pTVar12 = pTVar13;
  if (param_1->NetPlayerIndex == uVar15) {
    uVar11 = 0;
    if (local_108.Index < pTVar13->ArrayNum) {
      uVar11 = (uint)~local_108.Index >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(longlong *)((pTVar13->AllocatorInstance).Data + (longlong)iVar5 * 8) != 0) {
      UNetConnection::HandleClientPlayer((UNetConnection *)this,param_1,param_2);
      goto LAB_147aef917;
    }
    goto LAB_147aef7e1;
  }
  do {
    uVar11 = local_108.Index + 1;
    pTVar13 = pTVar12;
    local_108.Index = uVar11;
    if (((int)uVar11 < 0) || (pTVar12->ArrayNum <= (int)uVar11)) break;
    if (((int)uVar11 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       pTVar13 = local_108.Container, bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar4 = &pTVar12->AllocatorInstance;
    pTVar12 = pTVar13;
  } while (*(longlong *)(pFVar4->Data + (longlong)(int)uVar11 * 8) == 0);
  uVar15 = uVar15 + '\x01';
  goto LAB_147aef6e0;
}

// InitConnection @ 147af1ee0

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
UDemoNetConnection::InitConnection
          (UDemoNetConnection *this,UNetDriver *param_1,EConnectionState param_2,FURL *param_3,
          int param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  
  UNetConnection::InitConnection((UNetConnection *)this,param_1,param_2,param_3,param_4,0);
  if ((param_5 == 0) || (0x800 < param_5)) {
    param_5 = 0x800;
  }
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 0xb;
  *(int *)&this->_padding_ = param_5;
  *(undefined1 *)&this->_padding_ = 1;
  (**(code **)(this->_padding_ + 0x2f8))(this);
  pUVar5 = UDemoNetDriver::StaticClass();
  iVar2 = (int)pUVar5->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
      != &pUVar5->_padding_)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDriver->IsA( UDemoNetDriver::StaticClass() )",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DemoNetDriver.cpp"
                       ,0x12f1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// IsNetReady @ 147af49d0

int __thiscall UDemoNetConnection::IsNetReady(UDemoNetConnection *this,bool param_1)

{
  return 1;
}

// LowLevelDescribe @ 147af91a0

FString * __thiscall
UDemoNetConnection::LowLevelDescribe(UDemoNetConnection *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Demo recording/playback driver connection");
  return __return_storage_ptr__;
}

// LowLevelGetRemoteAddress @ 147af9200

FString * __thiscall
UDemoNetConnection::LowLevelGetRemoteAddress
          (UDemoNetConnection *this,FString *__return_storage_ptr__,bool param_1)

{
  ::FString::FString(__return_storage_ptr__,L"UDemoNetConnection");
  return __return_storage_ptr__;
}

// LowLevelSend @ 147af9230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDemoNetConnection::LowLevelSend
          (UDemoNetConnection *this,void *param_1,int param_2,FOutPacketTraits *param_3)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FLevelStatus *pFVar11;
  longlong lVar12;
  ForAnyElementType *pFVar13;
  FString local_48;
  
  uVar9 = (int)(param_2 + 7 + (param_2 + 7 >> 0x1f & 7U)) >> 3;
  if (uVar9 == 0) {
    if (2 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      return;
    }
  }
  else {
    lVar5 = this->_padding_;
    if (lVar5 == 0) {
      if (2 < (byte)LogDemo._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
        return;
      }
    }
    else {
      if (0x800 < uVar9) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      }
      if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
         (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
        if (__CsvProfilerStat4897 == false) {
          FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
          __CsvProfilerStat4897 = true;
        }
        FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
        FNetworkProfiler::FlushOutgoingBunches(&GNetworkProfiler,(UNetConnection *)this);
        FCsvProfiler::EndExclusiveStat("NetworkProfiler");
        if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
           (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
          if (__CsvProfilerStat4900 == false) {
            FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
            __CsvProfilerStat4900 = true;
          }
          FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
          uVar2 = *(ushort *)((longlong)&this->_padding_ + 4);
          lVar12 = this->_padding_;
          uVar3 = *(ushort *)((longlong)&this->_padding_ + 4);
          lVar7 = this->_padding_;
          ::FString::FString(&local_48,L"Unreal");
          FNetworkProfiler::TrackSocketSendToCore
                    (&GNetworkProfiler,&local_48,param_1,(ushort)uVar9,(ushort)lVar7,uVar3,
                     (ushort)lVar12,uVar2,(UNetConnection *)this);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          FCsvProfiler::EndExclusiveStat("NetworkProfiler");
        }
      }
      lVar12 = 0x13d8;
      if ((char)this->_padding_ == '\0') {
        lVar12 = 0x13c8;
      }
      pFVar13 = (ForAnyElementType *)(lVar12 + lVar5);
      uVar9 = *(uint *)&pFVar13[1].Data;
      puVar1 = (uint *)((longlong)&pFVar13[1].Data + 4);
      if (uVar9 == *puVar1) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,pFVar13,(int *)puVar1);
      }
      *(uint *)&pFVar13[1].Data = uVar9 + 1;
      FQueuedDemoPacket::FQueuedDemoPacket
                ((FQueuedDemoPacket *)(pFVar13->Data + (longlong)(int)uVar9 * 0x28),param_1,param_2,
                 param_3);
      if ((ULevel *)this->_padding_ == (ULevel *)0x0) {
        if (2 < (byte)LogDemo._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
        }
      }
      else {
        pFVar11 = FReplayHelper::FindOrAddLevelStatus
                            ((FReplayHelper *)(lVar5 + 0xcb0),(ULevel *)this->_padding_);
        iVar4 = pFVar11->LevelIndex;
        uVar10 = 0;
        if ((int)uVar9 < *(int *)&pFVar13[1].Data) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(int *)(pFVar13->Data + (longlong)(int)uVar9 * 0x28 + 0x24) = iVar4 + 1;
      }
    }
  }
  return;
}

// NotifyActorChannelCleanedUp @ 147afa3f0

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
UDemoNetConnection::NotifyActorChannelCleanedUp
          (UDemoNetConnection *this,UActorChannel *param_1,EChannelCloseReason param_2)

{
  ulong64 uVar1;
  
  if (((param_1 != (UActorChannel *)0x0) && (this->_padding_ != 0)) &&
     (*(char *)(this->_padding_ + 0xe40) != '\0')) {
    if (*(int *)&(this->OpenChannelMap).field_0x8 != *(int *)&(this->OpenChannelMap).field_0x34) {
      uVar1 = (param_1->ActorNetGUID).field0_0x0.ObjectId;
      TSet<TTuple<FNetworkGUID,UActorChannel_*>,TDefaultMapHashableKeyFuncs<FNetworkGUID,UActorChannel_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FNetworkGUID>
                ((TSet<TTuple<FNetworkGUID,UActorChannel_*>,TDefaultMapHashableKeyFuncs<FNetworkGUID,UActorChannel_*,0>,FDefaultSetAllocator>
                  *)&this->OpenChannelMap,(int)(uVar1 >> 0x20) * 0x17 + (int)uVar1,
                 &param_1->ActorNetGUID);
      return;
    }
  }
  return;
}

// NotifyActorNetGUID @ 147afad90

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
UDemoNetConnection::NotifyActorNetGUID(UDemoNetConnection *this,UActorChannel *param_1)

{
  TPairInitializer<FNetworkGUID_const_&,UActorChannel_*_const_&> local_res8 [2];
  FNetworkGUID *local_18;
  UActorChannel ***local_10;
  
  if (((param_1 != (UActorChannel *)0x0) && (this->_padding_ != 0)) &&
     (*(char *)(this->_padding_ + 0xe40) != '\0')) {
    local_18 = &param_1->ActorNetGUID;
    local_10 = &local_res8[0].Value;
    local_res8[0].Value = (UActorChannel **)param_1;
    TSet<TTuple<FNetworkGUID,UActorChannel_*>,TDefaultMapHashableKeyFuncs<FNetworkGUID,UActorChannel_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FNetworkGUID_const_&,UActorChannel_*_const_&>_>
              ((TSet<TTuple<FNetworkGUID,UActorChannel_*>,TDefaultMapHashableKeyFuncs<FNetworkGUID,UActorChannel_*,0>,FDefaultSetAllocator>
                *)&this->OpenChannelMap,local_res8,(bool *)&local_18);
  }
  return;
}

// QueueNetStartupActorForRewind @ 147b012d0

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
UDemoNetConnection::QueueNetStartupActorForRewind(UDemoNetConnection *this,AActor *param_1)

{
  longlong *plVar1;
  bool bVar2;
  
  plVar1 = (longlong *)this->_padding_;
  if ((plVar1 != (longlong *)0x0) && (param_1 != (AActor *)0x0)) {
    bVar2 = AActor::IsNetStartupActor(param_1);
    if ((bVar2) && (!(bool)param_1->bReplayRewindable)) {
      (**(code **)(*plVar1 + 0x500))(plVar1,param_1);
    }
  }
  return;
}

// Serialize @ 147b10eb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDemoNetConnection::Serialize(UDemoNetConnection *this,FArchive *param_1)

{
  FString local_48;
  FScopeMarker local_38;
  
  ::FString::FString(&local_48,"UDemoNetConnection::Serialize");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker(&local_38,param_1,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  UNetConnection::Serialize((UNetConnection *)this,param_1);
  ::FString::FString(&local_48,"Super");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_38);
  return;
}

// TrackSendForProfiler @ 147b1d4f0

/* WARNING: Enum "ENetworkProfilerVersionHistory": Some values do not have unique names */
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
UDemoNetConnection::TrackSendForProfiler(UDemoNetConnection *this,void *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  FString local_28;
  
  if ((GNetworkProfiler.bIsTrackingEnabled) || (GNetworkProfiler.bShouldTrackingBeEnabled)) {
    if (!__CsvProfilerStat4897) {
      FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
      __CsvProfilerStat4897 = true;
    }
    FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
    FNetworkProfiler::FlushOutgoingBunches(&GNetworkProfiler,(UNetConnection *)this);
    FCsvProfiler::EndExclusiveStat("NetworkProfiler");
    if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
       (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
      if (__CsvProfilerStat4900 == false) {
        FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
        __CsvProfilerStat4900 = true;
      }
      FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
      uVar1 = *(ushort *)((longlong)&this->_padding_ + 4);
      lVar3 = this->_padding_;
      uVar2 = *(ushort *)((longlong)&this->_padding_ + 4);
      lVar4 = this->_padding_;
      ::FString::FString(&local_28,L"Unreal");
      FNetworkProfiler::TrackSocketSendToCore
                (&GNetworkProfiler,&local_28,param_1,(ushort)param_2,(ushort)lVar4,uVar2,
                 (ushort)lVar3,uVar1,(UNetConnection *)this);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      FCsvProfiler::EndExclusiveStat("NetworkProfiler");
    }
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 39

// StaticClass @ 148431880

UClass * __cdecl UReplayNetConnection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplayNetConnection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetConnection::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReplayNetConnection",
               &Z_Registration_Info_UClass_UReplayNetConnection.InnerSingleton,
               StaticRegisterNativesUReplayNetConnection,0x2a00,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplayNetConnection>,
               InternalVTableHelperCtorCaller<UReplayNetConnection>,local_res8,
               UNetConnection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplayNetConnection.InnerSingleton;
}

// UReplayNetConnection @ 148444670

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UReplayNetConnection * __thiscall
UReplayNetConnection::UReplayNetConnection(UReplayNetConnection *this,FVTableHelper *param_1)

{
  UNetConnection::UNetConnection((UNetConnection *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  FReplayHelper::FReplayHelper(&this->ReplayHelper);
  (this->OnLevelRemovedFromWorldHandle).ID = 0;
  (this->OnLevelAddedToWorldHandle).ID = 0;
  return this;
}

// UReplayNetConnection @ 1484446c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UReplayNetConnection * __thiscall
UReplayNetConnection::UReplayNetConnection(UReplayNetConnection *this,FObjectInitializer *param_1)

{
  UNetConnection::UNetConnection((UNetConnection *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  FReplayHelper::FReplayHelper(&this->ReplayHelper);
  *(uint *)&this->field_0xa4 = *(uint *)&this->field_0xa4 | 1;
  *(uint *)&this->field_0xfc = *(uint *)&this->field_0xfc | 0xb;
  (this->OnLevelRemovedFromWorldHandle).ID = 0;
  (this->OnLevelAddedToWorldHandle).ID = 0;
  *(undefined4 *)&this->field_0xa0 = 0x800;
  this->field_0x1ee8 = 1;
  return this;
}

// ~UReplayNetConnection @ 148446e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReplayNetConnection::~UReplayNetConnection(UReplayNetConnection *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FExec__;
  FReplayHelper::~FReplayHelper(&this->ReplayHelper);
  UNetConnection::~UNetConnection((UNetConnection *)this);
  return;
}

// AddEvent @ 14844e140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UReplayNetConnection::AddEvent
          (UReplayNetConnection *this,FString *param_1,FString *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  INetworkReplayStreamer *pIVar1;
  void *local_18;
  undefined8 local_10;
  
  pIVar1 = (this->ReplayHelper).ReplayStreamer.Object;
  local_18 = (void *)0x0;
  local_10 = 0;
  if (pIVar1 != (INetworkReplayStreamer *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x90))
              (pIVar1,&local_18,
               (longlong)((this->ReplayHelper).DemoCurrentTime * __real_447a0000) & 0xffffffff,
               param_1,param_2,param_3);
  }
  if (5 < (byte)LogDemo._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// AddOrUpdateEvent @ 14844e470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UReplayNetConnection::AddOrUpdateEvent
          (UReplayNetConnection *this,FString *param_1,FString *param_2,FString *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  INetworkReplayStreamer *pIVar1;
  
  pIVar1 = (this->ReplayHelper).ReplayStreamer.Object;
  if (pIVar1 != (INetworkReplayStreamer *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x90))
              (pIVar1,param_1,
               (longlong)((this->ReplayHelper).DemoCurrentTime * __real_447a0000) & 0xffffffff,
               param_2,param_3,param_4);
  }
  if (5 < (byte)LogDemo._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
  }
  return;
}

// AddUserToReplay @ 148451e70

void __thiscall UReplayNetConnection::AddUserToReplay(UReplayNetConnection *this,FString *param_1)

{
  INetworkReplayStreamer *pIVar1;
  
  pIVar1 = (this->ReplayHelper).ReplayStreamer.Object;
  if (pIVar1 != (INetworkReplayStreamer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148451e7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar1->_padding_ + 0x180))();
    return;
  }
  return;
}

// CleanUp @ 14845c450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReplayNetConnection::CleanUp(UReplayNetConnection *this)

{
  INetworkReplayStreamer *pIVar1;
  UWorld *pUVar2;
  
  UNetConnection::CleanUp((UNetConnection *)this);
  pUVar2 = (UWorld *)FWeakObjectPtr::Get(&(this->ReplayHelper).World.WeakPtr);
  TMulticastDelegate<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::Broadcast
            (&FNetworkReplayDelegates::OnReplayRecordingComplete,pUVar2);
  pIVar1 = (this->ReplayHelper).ReplayStreamer.Object;
  if (pIVar1 != (INetworkReplayStreamer *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x10))();
  }
  ::FString::Empty(&(this->ReplayHelper).ActiveReplayName);
  TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
              *)&FWorldDelegates::LevelRemovedFromWorld,
             (FDelegateHandle)(this->OnLevelRemovedFromWorldHandle).ID);
  TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
              *)&FWorldDelegates::LevelAddedToWorld,
             (FDelegateHandle)(this->OnLevelAddedToWorldHandle).ID);
  return;
}

// ClientHasInitializedLevel @ 14845c570

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
UReplayNetConnection::ClientHasInitializedLevel(UReplayNetConnection *this,ULevel *param_1)

{
  bool bVar1;
  
  if (this->DemoFrameNum < 3) {
    bVar1 = UNetConnection::ClientHasInitializedLevel((UNetConnection *)this,param_1);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// GetPrivateStaticClass @ 14846d8d0

UClass * __cdecl UReplayNetConnection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplayNetConnection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetConnection::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReplayNetConnection",
               &Z_Registration_Info_UClass_UReplayNetConnection.InnerSingleton,
               StaticRegisterNativesUReplayNetConnection,0x2a00,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UReplayNetConnection>,
               InternalVTableHelperCtorCaller<UReplayNetConnection>,local_res8,
               UNetConnection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplayNetConnection.InnerSingleton;
}

// GetRemoteAddr @ 14846dc80

TSharedPtr<FInternetAddr_const_,1> * __thiscall
UReplayNetConnection::GetRemoteAddr
          (UReplayNetConnection *this,TSharedPtr<FInternetAddr_const_,1> *__return_storage_ptr__)

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

// HandleClientPlayer @ 1484742e0

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
UReplayNetConnection::HandleClientPlayer
          (UReplayNetConnection *this,APlayerController *param_1,UNetConnection *param_2)

{
  return;
}

// InitConnection @ 148475610

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
UReplayNetConnection::InitConnection
          (UReplayNetConnection *this,UNetDriver *param_1,EConnectionState param_2,FURL *param_3,
          int param_4,int param_5)

{
  TSharedPtr<INetworkReplayStreamer,1> local_18;
  
  UNetConnection::InitConnection((UNetConnection *)this,param_1,param_2,param_3,param_4,0);
  if ((param_5 == 0) || (0x800 < param_5)) {
    param_5 = 0x800;
  }
  *(uint *)&this->field_0xa4 = *(uint *)&this->field_0xa4 | 1;
  *(uint *)&this->field_0xfc = *(uint *)&this->field_0xfc | 0xb;
  *(int *)&this->field_0xa0 = param_5;
  this->field_0x1ee8 = 1;
  (**(code **)(*(longlong *)this + 0x2f8))(this);
  FReplayHelper::Init(&this->ReplayHelper,&local_18,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  (this->ReplayHelper).bRecording = true;
  return;
}

// InitLocalConnection @ 1484756b0

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
UReplayNetConnection::InitLocalConnection
          (UReplayNetConnection *this,UNetDriver *param_1,FSocket *param_2,FURL *param_3,
          EConnectionState param_4,int param_5,int param_6)

{
  return;
}

// InitRemoteConnection @ 148476a10

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
UReplayNetConnection::InitRemoteConnection
          (UReplayNetConnection *this,UNetDriver *param_1,FSocket *param_2,FURL *param_3,
          FInternetAddr *param_4,EConnectionState param_5,int param_6,int param_7)

{
  return;
}

// IsNetReady @ 148478690

int __thiscall UReplayNetConnection::IsNetReady(UReplayNetConnection *this,bool param_1)

{
  return 1;
}

// IsNetReady @ 1484786a0

bool __thiscall UReplayNetConnection::IsNetReady(UReplayNetConnection *this)

{
  return true;
}

// IsReplayReady @ 148478730

bool __thiscall UReplayNetConnection::IsReplayReady(UReplayNetConnection *this)

{
  return this->field_0x17c8 == '\0';
}

// IsSavingCheckpoint @ 1484787c0

bool __thiscall UReplayNetConnection::IsSavingCheckpoint(UReplayNetConnection *this)

{
  return this->field_0x17c8 != '\0';
}

// LowLevelDescribe @ 148479270

FString * __thiscall
UReplayNetConnection::LowLevelDescribe(UReplayNetConnection *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Replay recording connection");
  return __return_storage_ptr__;
}

// LowLevelGetRemoteAddress @ 1484792a0

FString * __thiscall
UReplayNetConnection::LowLevelGetRemoteAddress
          (UReplayNetConnection *this,FString *__return_storage_ptr__,bool param_1)

{
  ::FString::FString(__return_storage_ptr__,L"UReplayNetConnection");
  return __return_storage_ptr__;
}

// LowLevelSend @ 1484792d0

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
UReplayNetConnection::LowLevelSend
          (UReplayNetConnection *this,void *param_1,int param_2,FOutPacketTraits *param_3)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  AActor *pAVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  FLevelStatus *pFVar13;
  FNetworkObjectList *this_00;
  longlong lVar14;
  ForAnyElementType *pFVar15;
  FString local_48;
  
  uVar11 = (int)(param_2 + 7 + (param_2 + 7 >> 0x1f & 7U)) >> 3;
  if (uVar11 == 0) {
    if (2 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      return;
    }
  }
  else {
    if (0x800 < uVar11) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
       (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
      if (__CsvProfilerStat151 == false) {
        FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
        __CsvProfilerStat151 = true;
      }
      FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
      FNetworkProfiler::FlushOutgoingBunches(&GNetworkProfiler,(UNetConnection *)this);
      FCsvProfiler::EndExclusiveStat("NetworkProfiler");
      if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
         (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
        if (__CsvProfilerStat154 == false) {
          FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
          __CsvProfilerStat154 = true;
        }
        FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
        uVar3 = *(ushort *)&this->field_0x184;
        uVar4 = *(ushort *)&this->field_0x180;
        uVar5 = *(ushort *)&this->field_0x17c;
        uVar6 = *(ushort *)&this->field_0x178;
        ::FString::FString(&local_48,L"Unreal");
        FNetworkProfiler::TrackSocketSendToCore
                  (&GNetworkProfiler,&local_48,param_1,(ushort)uVar11,uVar6,uVar5,uVar4,uVar3,
                   (UNetConnection *)this);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        FCsvProfiler::EndExclusiveStat("NetworkProfiler");
      }
    }
    cVar2 = this->field_0x17c8;
    lVar14 = 0x26a8;
    if (cVar2 == '\0') {
      lVar14 = 0x2698;
    }
    pFVar15 = (ForAnyElementType *)(&this->field_0x0 + lVar14);
    uVar11 = *(uint *)&pFVar15[1].Data;
    puVar1 = (uint *)((longlong)&pFVar15[1].Data + 4);
    if (uVar11 == *puVar1) {
      uVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,pFVar15,(int *)puVar1);
    }
    *(uint *)&pFVar15[1].Data = uVar11 + 1;
    FQueuedDemoPacket::FQueuedDemoPacket
              ((FQueuedDemoPacket *)(pFVar15->Data + (longlong)(int)uVar11 * 0x28),param_1,param_2,
               param_3);
    if (*(ULevel **)&this->field_0x1ee0 == (ULevel *)0x0) {
      if (2 < (byte)LogDemo._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      }
    }
    else {
      pFVar13 = FReplayHelper::FindOrAddLevelStatus
                          (&this->ReplayHelper,*(ULevel **)&this->field_0x1ee0);
      iVar7 = pFVar13->LevelIndex;
      uVar12 = 0;
      if ((int)uVar11 < *(int *)&pFVar15[1].Data) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(int *)(pFVar15->Data + (longlong)(int)uVar11 * 0x28 + 0x24) = iVar7 + 1;
      pAVar8 = *(AActor **)&this->field_0x1ed8;
      if ((((pAVar8 != (AActor *)0x0) && (cVar2 == '\0')) &&
          ((this->ReplayHelper).bHasDeltaCheckpoints != false)) &&
         (*(UNetDriver **)&this->field_0x58 != (UNetDriver *)0x0)) {
        this_00 = UNetDriver::GetNetworkObjectList(*(UNetDriver **)&this->field_0x58);
        FNetworkObjectList::MarkDirtyForReplay(this_00,pAVar8);
      }
    }
  }
  return;
}

// NetworkRemapPath @ 148479de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
UReplayNetConnection::NetworkRemapPath(UReplayNetConnection *this,FName param_1,bool param_2)

{
  ForAnyElementType FVar1;
  undefined7 in_register_00000081;
  undefined1 in_R9B;
  FName local_res18 [2];
  FString local_18;
  
  local_res18[0]._1_7_ = in_register_00000081;
  local_res18[0].ComparisonIndex.Value._0_1_ = param_2;
  ::FName::ToString(local_res18,&local_18);
  (**(code **)(GEngine->_padding_ + 0x498))(GEngine,this,&local_18,in_R9B);
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)param_1,(wchar_t *)FVar1.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return param_1;
}

// NotifyActorChannelCleanedUp @ 148479e70

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
UReplayNetConnection::NotifyActorChannelCleanedUp
          (UReplayNetConnection *this,UActorChannel *param_1,EChannelCloseReason param_2)

{
  EChannelCloseReason local_res18 [16];
  FNetworkGUID *local_18;
  EChannelCloseReason *local_10;
  
  local_res18[0] = param_2;
  UNetConnection::NotifyActorChannelCleanedUp((UNetConnection *)this,param_1,param_2);
  if (((((this->ReplayHelper).bHasDeltaCheckpoints != false) &&
       ((this->ReplayHelper).CheckpointSaveContext.CheckpointSaveState == Idle)) &&
      (param_1 != (UActorChannel *)0x0)) && ((param_1->_padding_ & 0x2000) != 0)) {
    local_18 = &param_1->ActorNetGUID;
    local_10 = local_res18;
    TSet<TTuple<FNetworkGUID,enum_EChannelCloseReason>,TDefaultMapHashableKeyFuncs<FNetworkGUID,enum_EChannelCloseReason,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FNetworkGUID_const_&,enum_EChannelCloseReason_const_&>_>
              (&(this->ReplayHelper).RecordingDeltaCheckpointData.ChannelsToClose,
               (TPairInitializer<FNetworkGUID_const_&,EChannelCloseReason_const_&> *)
               &stack0x00000008,(bool *)&local_18);
  }
  return;
}

// NotifyActorDestroyed @ 14847a2c0

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
UReplayNetConnection::NotifyActorDestroyed(UReplayNetConnection *this,AActor *param_1,bool param_2)

{
  if (!param_2) {
    FReplayHelper::NotifyActorDestroyed(&this->ReplayHelper,(UNetConnection *)this,param_1);
  }
  UNetConnection::NotifyActorDestroyed((UNetConnection *)this,param_1,param_2);
  return;
}

// OnLevelAddedToWorld @ 14847a670

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
UReplayNetConnection::OnLevelAddedToWorld
          (UReplayNetConnection *this,ULevel *param_1,UWorld *param_2)

{
  UWorld *pUVar1;
  ForAnyElementType FVar2;
  FName local_res8;
  FName local_res18;
  FString local_38;
  FUpdateLevelVisibilityLevelInfo local_28;
  
  pUVar1 = (UWorld *)(**(code **)(*(longlong *)this + 0x180))();
  if (((pUVar1 == param_2) && (param_1 != (ULevel *)0x0)) && (param_1->bClientOnlyVisible == '\0'))
  {
    FUpdateLevelVisibilityLevelInfo::FUpdateLevelVisibilityLevelInfo(&local_28,param_1,true,false);
    local_res8 = local_28.PackageName;
    ::FName::ToString(&local_res8,&local_38);
    (**(code **)(GEngine->_padding_ + 0x498))(GEngine,this,&local_38,0);
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar2.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar2.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    local_28.PackageName = local_res18;
    UNetConnection::UpdateLevelVisibility((UNetConnection *)this,&local_28);
  }
  return;
}

// OnLevelRemovedFromWorld @ 14847aa40

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
UReplayNetConnection::OnLevelRemovedFromWorld
          (UReplayNetConnection *this,ULevel *param_1,UWorld *param_2)

{
  UWorld *pUVar1;
  ForAnyElementType FVar2;
  FName local_res8;
  FName local_res18;
  FString local_38;
  FUpdateLevelVisibilityLevelInfo local_28;
  
  pUVar1 = (UWorld *)(**(code **)(*(longlong *)this + 0x180))();
  if (((pUVar1 == param_2) && (param_1 != (ULevel *)0x0)) && (param_1->bClientOnlyVisible == '\0'))
  {
    FUpdateLevelVisibilityLevelInfo::FUpdateLevelVisibilityLevelInfo(&local_28,param_1,false,false);
    local_res8 = local_28.PackageName;
    ::FName::ToString(&local_res8,&local_38);
    (**(code **)(GEngine->_padding_ + 0x498))(GEngine,this,&local_38,0);
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar2.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar2.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    local_28.PackageName = local_res18;
    UNetConnection::UpdateLevelVisibility((UNetConnection *)this,&local_28);
  }
  return;
}

// OnSeamlessTravelStart @ 14847aba0

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
UReplayNetConnection::OnSeamlessTravelStart
          (UReplayNetConnection *this,UWorld *param_1,FString *param_2)

{
  INetworkReplayStreamer *pIVar1;
  UWorld *pUVar2;
  
  pUVar2 = (UWorld *)FWeakObjectPtr::Get(&(this->ReplayHelper).World.WeakPtr);
  if (pUVar2 == param_1) {
    (this->ReplayHelper).bPauseRecording = true;
    FReplayHelper::AddNewLevel(&this->ReplayHelper,param_2);
    FReplayHelper::WriteNetworkDemoHeader(&this->ReplayHelper,(UNetConnection *)this);
    pIVar1 = (this->ReplayHelper).ReplayStreamer.Object;
    if (pIVar1 != (INetworkReplayStreamer *)0x0) {
      (**(code **)(pIVar1->_padding_ + 0xe8))();
    }
  }
  return;
}

// RemoteAddressToString @ 148484390

FString * __thiscall
UReplayNetConnection::RemoteAddressToString
          (UReplayNetConnection *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Replay");
  return __return_storage_ptr__;
}

// RequestCheckpoint @ 148487d80

void __thiscall UReplayNetConnection::RequestCheckpoint(UReplayNetConnection *this)

{
  (this->ReplayHelper).bPendingCheckpointRequest = true;
  return;
}

// Serialize @ 1484917f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReplayNetConnection::Serialize(UReplayNetConnection *this,FArchive *param_1)

{
  FString local_48;
  FScopeMarker local_38;
  
  ::FString::FString(&local_48,"UReplayNetConnection::Serialize");
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
  if ((param_1->field_0x2b & 4) != 0) {
    FReplayHelper::Serialize(&this->ReplayHelper,param_1);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_38);
  return;
}

// Serialize @ 1484918b0

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
UReplayNetConnection::Serialize(UReplayNetConnection *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  FString local_48;
  FScopeMarker local_38;
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  ::FString::FString(&local_48,"UReplayNetConnection::Serialize");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker(&local_38,pFVar1,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::BeginWork(&local_38);
  UNetConnection::Serialize((UNetConnection *)this,pFVar1);
  ::FString::FString(&local_48,"Super");
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::EndWork(&local_38,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((pFVar1->field_0x2b & 4) != 0) {
    FReplayHelper::Serialize(&this->ReplayHelper,pFVar1);
  }
  UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_38);
  return;
}

// SetAnalyticsProvider @ 148493100

void __thiscall
UReplayNetConnection::SetAnalyticsProvider
          (UReplayNetConnection *this,TSharedPtr<IAnalyticsProvider,1> *param_1)

{
  INetworkReplayStreamer *pIVar1;
  IAnalyticsProvider *local_28;
  TReferenceControllerBase<1> *local_20;
  IAnalyticsProvider *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
    if (local_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  local_18 = (this->ReplayHelper).AnalyticsProvider.Object;
  pTStack_10 = (this->ReplayHelper).AnalyticsProvider.SharedReferenceCount.ReferenceController;
  (this->ReplayHelper).AnalyticsProvider.Object = local_28;
  (this->ReplayHelper).AnalyticsProvider.SharedReferenceCount.ReferenceController = local_20;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  pIVar1 = (this->ReplayHelper).ReplayStreamer.Object;
  if (pIVar1 != (INetworkReplayStreamer *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x1a8))(pIVar1,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetCheckpointSaveMaxMSPerFrame @ 148493450

void __thiscall
UReplayNetConnection::SetCheckpointSaveMaxMSPerFrame(UReplayNetConnection *this,float param_1)

{
  (this->ReplayHelper).CheckpointSaveMaxMSPerFrame = param_1;
  return;
}

// SetExternalDataForObject @ 1484939f0

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
UReplayNetConnection::SetExternalDataForObject
          (UReplayNetConnection *this,UObject *param_1,uchar *param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = FReplayHelper::SetExternalDataForObject
                    (&this->ReplayHelper,(UNetConnection *)this,param_1,param_2,param_3);
  return bVar1;
}

// StartRecording @ 148495950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReplayNetConnection::StartRecording(UReplayNetConnection *this)

{
  longlong *plVar1;
  int iVar2;
  ULevel *pUVar3;
  longlong lVar4;
  FDelegateHandle FVar5;
  wchar_t *pwVar6;
  longlong *plVar7;
  FName local_res8;
  FName local_res10;
  FString local_48;
  FUpdateLevelVisibilityLevelInfo local_38;
  
  lVar4 = (**(code **)(*(longlong *)this + 0x180))();
  if (lVar4 != 0) {
    plVar7 = *(longlong **)(lVar4 + 0x90);
    iVar2 = *(int *)(lVar4 + 0x98);
    plVar1 = plVar7 + iVar2;
    while( true ) {
      if (*(int *)(lVar4 + 0x98) != iVar2) {
        `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (plVar7 == plVar1) break;
      if ((((*plVar7 != 0) && (pUVar3 = *(ULevel **)(*plVar7 + 0x1b0), pUVar3 != (ULevel *)0x0)) &&
          (pUVar3->bIsVisible != '\0')) && (pUVar3->bClientOnlyVisible == '\0')) {
        FUpdateLevelVisibilityLevelInfo::FUpdateLevelVisibilityLevelInfo
                  (&local_38,pUVar3,true,false);
        local_res8 = local_38.PackageName;
        ::FName::ToString(&local_res8,&local_48);
        (**(code **)(GEngine->_padding_ + 0x498))(GEngine,this,&local_48);
        pwVar6 = L"";
        if (local_48.Data.ArrayNum != 0) {
          pwVar6 = (wchar_t *)local_48.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_res10,pwVar6);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        local_38.PackageName = local_res10;
        UNetConnection::UpdateLevelVisibility((UNetConnection *)this,&local_38);
      }
      plVar7 = plVar7 + 1;
    }
  }
  local_48.Data._8_8_ = local_48.Data._8_8_ & 0xffffffff00000000;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnLevelRemovedFromWorld;
  FVar5 = TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
          ::AddUObject<UReplayNetConnection>
                    ((TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
                      *)&FWorldDelegates::LevelRemovedFromWorld,(UReplayNetConnection *)&local_res8,
                     (pmf_11082f81 *)this);
  local_48.Data._8_8_ = local_48.Data._8_8_ & 0xffffffff00000000;
                    /* WARNING: Load size is inaccurate */
  (this->OnLevelRemovedFromWorldHandle).ID = *FVar5.ID;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnLevelAddedToWorld;
  FVar5 = TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
          ::AddUObject<UReplayNetConnection>
                    ((TMulticastDelegateRegistration<void___cdecl(ULevel_*,UWorld_*),FDefaultDelegateUserPolicy>
                      *)&FWorldDelegates::LevelAddedToWorld,(UReplayNetConnection *)&local_res8,
                     (pmf_11082f81 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnLevelAddedToWorldHandle).ID = *FVar5.ID;
  FReplayHelper::StartRecording(&this->ReplayHelper,(UNetConnection *)this);
  FReplayHelper::CreateSpectatorController(&this->ReplayHelper,(UNetConnection *)this);
  return;
}

// StaticRegisterNativesUReplayNetConnection @ 148496080

void __cdecl UReplayNetConnection::StaticRegisterNativesUReplayNetConnection(void)

{
  return;
}

// Tick @ 148497720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UReplayNetConnection::Tick(UReplayNetConnection *this,float param_1)

{
  UNetConnection::Tick((UNetConnection *)this,param_1);
  this->DemoFrameNum = this->DemoFrameNum + 1;
  FReplayHelper::TickRecording(&this->ReplayHelper,param_1,(UNetConnection *)this);
  return;
}

// TrackSendForProfiler @ 148499110

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
UReplayNetConnection::TrackSendForProfiler(UReplayNetConnection *this,void *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  FString local_28;
  
  if ((GNetworkProfiler.bIsTrackingEnabled) || (GNetworkProfiler.bShouldTrackingBeEnabled)) {
    if (!__CsvProfilerStat151) {
      FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
      __CsvProfilerStat151 = true;
    }
    FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
    FNetworkProfiler::FlushOutgoingBunches(&GNetworkProfiler,(UNetConnection *)this);
    FCsvProfiler::EndExclusiveStat("NetworkProfiler");
    if ((GNetworkProfiler.bIsTrackingEnabled != false) ||
       (GNetworkProfiler.bShouldTrackingBeEnabled != false)) {
      if (__CsvProfilerStat154 == false) {
        FCsvProfilerTrace::OutputInlineStatExclusive("NetworkProfiler");
        __CsvProfilerStat154 = true;
      }
      FCsvProfiler::BeginExclusiveStat("NetworkProfiler","CSV_NetworkProfiler");
      uVar1 = *(ushort *)&this->field_0x184;
      uVar2 = *(ushort *)&this->field_0x180;
      uVar3 = *(ushort *)&this->field_0x17c;
      uVar4 = *(ushort *)&this->field_0x178;
      ::FString::FString(&local_28,L"Unreal");
      FNetworkProfiler::TrackSocketSendToCore
                (&GNetworkProfiler,&local_28,param_1,(ushort)param_2,uVar4,uVar3,uVar2,uVar1,
                 (UNetConnection *)this);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      FCsvProfiler::EndExclusiveStat("NetworkProfiler");
    }
  }
  return;
}


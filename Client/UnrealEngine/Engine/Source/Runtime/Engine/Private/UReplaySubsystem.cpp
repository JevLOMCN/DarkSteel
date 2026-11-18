// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 34

// StaticClass @ 1484a2b10

UClass * __cdecl UReplaySubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplaySubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReplaySubsystem",
               &Z_Registration_Info_UClass_UReplaySubsystem.InnerSingleton,
               StaticRegisterNativesUReplaySubsystem,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UReplaySubsystem>,
               InternalVTableHelperCtorCaller<UReplaySubsystem>,local_res8,
               UGameInstanceSubsystem::StaticClass,UGameInstance::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplaySubsystem.InnerSingleton;
}

// UReplaySubsystem @ 1484bcd20

UReplaySubsystem * __thiscall
UReplaySubsystem::UReplaySubsystem(UReplaySubsystem *this,FVTableHelper *param_1)

{
  UGameInstanceSubsystem::UGameInstanceSubsystem((UGameInstanceSubsystem *)this,param_1);
  this->bLoadDefaultMapOnStop = true;
  this->_padding_ = (longlong)&___7UReplaySubsystem__6B_;
  (this->ReplayConnection).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UReplaySubsystem @ 1484bcd60

UReplaySubsystem * __thiscall UReplaySubsystem::UReplaySubsystem(UReplaySubsystem *this)

{
  UGameInstanceSubsystem::UGameInstanceSubsystem((UGameInstanceSubsystem *)this);
  this->bLoadDefaultMapOnStop = true;
  this->_padding_ = (longlong)&___7UReplaySubsystem__6B_;
  (this->ReplayConnection).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UReplaySubsystem @ 1484be1e0

void __thiscall UReplaySubsystem::~UReplaySubsystem(UReplaySubsystem *this)

{
  this->_padding_ = (longlong)&___7UReplaySubsystem__6B_;
  UGameInstanceSubsystem::~UGameInstanceSubsystem((UGameInstanceSubsystem *)this);
  return;
}

// AddEvent @ 1484c1010

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
UReplaySubsystem::AddEvent
          (UReplaySubsystem *this,FString *param_1,FString *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong lVar1;
  UReplayNetConnection *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope(local_res8,Replays,false,None,Default,true);
  FMemScope::FMemScope(local_18,Replays,true);
  lVar1 = (**(code **)(this->_padding_ + 0x180))(this);
  if ((lVar1 != 0) && (*(UDemoNetDriver **)(lVar1 + 0x140) != (UDemoNetDriver *)0x0)) {
    UDemoNetDriver::AddEvent(*(UDemoNetDriver **)(lVar1 + 0x140),param_1,param_2,param_3);
  }
  this_00 = (UReplayNetConnection *)FWeakObjectPtr::Get(&(this->ReplayConnection).WeakPtr);
  if (this_00 != (UReplayNetConnection *)0x0) {
    UReplayNetConnection::AddEvent(this_00,param_1,param_2,param_3);
  }
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// AddOrUpdateEvent @ 1484c16f0

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
UReplaySubsystem::AddOrUpdateEvent
          (UReplaySubsystem *this,FString *param_1,FString *param_2,FString *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  longlong lVar1;
  UReplayNetConnection *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_28 [2];
  
  FLLMScope::FLLMScope(local_res8,Replays,false,None,Default,true);
  FMemScope::FMemScope(local_28,Replays,true);
  lVar1 = (**(code **)(this->_padding_ + 0x180))(this);
  if ((lVar1 != 0) && (*(UDemoNetDriver **)(lVar1 + 0x140) != (UDemoNetDriver *)0x0)) {
    UDemoNetDriver::AddOrUpdateEvent
              (*(UDemoNetDriver **)(lVar1 + 0x140),param_1,param_2,param_3,param_4);
  }
  this_00 = (UReplayNetConnection *)FWeakObjectPtr::Get(&(this->ReplayConnection).WeakPtr);
  if (this_00 != (UReplayNetConnection *)0x0) {
    UReplayNetConnection::AddOrUpdateEvent(this_00,param_1,param_2,param_3,param_4);
  }
  FMemScope::~FMemScope(local_28);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// AddUserToReplay @ 1484c2750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UReplaySubsystem::AddUserToReplay(UReplaySubsystem *this,FString *param_1)

{
  longlong lVar1;
  UReplayNetConnection *this_00;
  
  lVar1 = (**(code **)(this->_padding_ + 0x180))();
  if ((lVar1 != 0) && (*(UDemoNetDriver **)(lVar1 + 0x140) != (UDemoNetDriver *)0x0)) {
    UDemoNetDriver::AddUserToReplay(*(UDemoNetDriver **)(lVar1 + 0x140),param_1);
  }
  this_00 = (UReplayNetConnection *)FWeakObjectPtr::Get(&(this->ReplayConnection).WeakPtr);
  if (this_00 != (UReplayNetConnection *)0x0) {
    UReplayNetConnection::AddUserToReplay(this_00,param_1);
  }
  return;
}

// Deinitialize @ 1484cfa60

void __thiscall UReplaySubsystem::Deinitialize(UReplaySubsystem *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FWorldDelegates::OnCopyWorldData
             ,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::OnSeamlessTravelTransition,this);
  return;
}

// GetActiveReplayName @ 1484d81b0

FString * __thiscall
UReplaySubsystem::GetActiveReplayName(UReplaySubsystem *this,FString *__return_storage_ptr__)

{
  longlong lVar1;
  UObject *pUVar2;
  
  lVar1 = (**(code **)(this->_padding_ + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x140) != 0)) {
    ::FString::FString(__return_storage_ptr__,(FString *)(*(longlong *)(lVar1 + 0x140) + 0xde8));
    return __return_storage_ptr__;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->ReplayConnection).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    ::FString::FString(__return_storage_ptr__,(FString *)&pUVar2[0xd1].field_0x10);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1484d94e0

UClass * __cdecl UReplaySubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReplaySubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReplaySubsystem",
               &Z_Registration_Info_UClass_UReplaySubsystem.InnerSingleton,
               StaticRegisterNativesUReplaySubsystem,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UReplaySubsystem>,
               InternalVTableHelperCtorCaller<UReplaySubsystem>,local_res8,
               UGameInstanceSubsystem::StaticClass,UGameInstance::StaticClass);
  }
  return Z_Registration_Info_UClass_UReplaySubsystem.InnerSingleton;
}

// GetReplayCurrentTime @ 1484da2d0

float __thiscall UReplaySubsystem::GetReplayCurrentTime(UReplaySubsystem *this)

{
  longlong lVar1;
  UObject *pUVar2;
  
  lVar1 = (**(code **)(this->_padding_ + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x140) != 0)) {
    return *(float *)(*(longlong *)(lVar1 + 0x140) + 0xe28);
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->ReplayConnection).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    return *(float *)(pUVar2 + 0xd3);
  }
  return 0.0;
}

// GetReplayTotalTime @ 1484da330

float __thiscall UReplaySubsystem::GetReplayTotalTime(UReplaySubsystem *this)

{
  longlong lVar1;
  UObject *pUVar2;
  
  lVar1 = (**(code **)(this->_padding_ + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x140) != 0)) {
    return *(float *)(*(longlong *)(lVar1 + 0x140) + 0xe2c);
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->ReplayConnection).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    return *(float *)&pUVar2[0xd3].field_0x4;
  }
  return 0.0;
}

// Initialize @ 1484e02d0

void __thiscall
UReplaySubsystem::Initialize(UReplaySubsystem *this,FSubsystemCollectionBase *param_1)

{
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,FString_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UReplaySubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FString_const_&),FDefaultDelegateUserPolicy>
              *)&FWorldDelegates::OnSeamlessTravelStart,(UReplaySubsystem *)&stack0x00000018,
             (pmf_c16712ee)this);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
  AddUObject<UReplaySubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *)
             &FWorldDelegates::OnSeamlessTravelTransition,(UReplaySubsystem *)&stack0x00000018,
             (pmf_3fa9e2b6)this);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,UWorld_*),FDefaultDelegateUserPolicy>::
  AddUObject<UReplaySubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,UWorld_*),FDefaultDelegateUserPolicy>
              *)&FWorldDelegates::OnCopyWorldData,(UReplaySubsystem *)&stack0x00000018,
             (pmf_391a67a5)this);
  return;
}

// IsPlaying @ 1484e0960

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UReplaySubsystem::IsPlaying(UReplaySubsystem *this)

{
  bool bVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(this->_padding_ + 0x180))();
  if ((lVar2 != 0) && (*(UDemoNetDriver **)(lVar2 + 0x140) != (UDemoNetDriver *)0x0)) {
    bVar1 = UDemoNetDriver::IsPlaying(*(UDemoNetDriver **)(lVar2 + 0x140));
    return bVar1;
  }
  return false;
}

// IsRecording @ 1484e09a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UReplaySubsystem::IsRecording(UReplaySubsystem *this)

{
  bool bVar1;
  longlong lVar2;
  UObject *pUVar3;
  
  lVar2 = (**(code **)(this->_padding_ + 0x180))();
  if ((lVar2 != 0) && (*(UDemoNetDriver **)(lVar2 + 0x140) != (UDemoNetDriver *)0x0)) {
    bVar1 = UDemoNetDriver::IsRecording(*(UDemoNetDriver **)(lVar2 + 0x140));
    return bVar1;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->ReplayConnection).WeakPtr);
  return pUVar3 != (UObject *)0x0;
}

// IsReplayDeferred @ 1484e0b30

bool __thiscall UReplaySubsystem::IsReplayDeferred(UReplaySubsystem *this,FString *param_1)

{
  return false;
}

// IsSavingCheckpoint @ 1484e0bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UReplaySubsystem::IsSavingCheckpoint(UReplaySubsystem *this)

{
  bool bVar1;
  longlong lVar2;
  UReplayNetConnection *this_00;
  
  lVar2 = (**(code **)(this->_padding_ + 0x180))();
  if ((lVar2 != 0) && (*(UDemoNetDriver **)(lVar2 + 0x140) != (UDemoNetDriver *)0x0)) {
    bVar1 = UDemoNetDriver::IsSavingCheckpoint(*(UDemoNetDriver **)(lVar2 + 0x140));
    return bVar1;
  }
  this_00 = (UReplayNetConnection *)FWeakObjectPtr::Get(&(this->ReplayConnection).WeakPtr);
  if (this_00 != (UReplayNetConnection *)0x0) {
    bVar1 = UReplayNetConnection::IsSavingCheckpoint(this_00);
    return bVar1;
  }
  return false;
}

// OnCopyWorldData @ 1484e49c0

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
UReplaySubsystem::OnCopyWorldData(UReplaySubsystem *this,UWorld *param_1,UWorld *param_2)

{
  UDemoNetDriver *this_00;
  bool bVar1;
  UWorld *pUVar2;
  FLevelCollection *pFVar3;
  FLevelCollection *pFVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  pUVar2 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (param_1 == pUVar2) {
    this_00 = (param_1->DemoNetDriver).field0_0x0.DebugPtr;
    pFVar3 = UWorld::FindCollectionByType(param_1,DynamicSourceLevels);
    pFVar4 = UWorld::FindCollectionByType(param_2,DynamicSourceLevels);
    if ((this_00 == (UDemoNetDriver *)0x0) ||
       ((bVar1 = UDemoNetDriver::IsPlaying(this_00), !bVar1 &&
        ((this_00->ReplayHelper).bRecordMapChanges == false)))) {
      UWorld::DestroyDemoNetDriver(param_1);
      pUVar5 = FWeakObjectPtr::Get(&(this->ReplayConnection).WeakPtr);
      if (pUVar5 != (UObject *)0x0) {
        (**(code **)(*(longlong *)pUVar5 + 0x348))(pUVar5);
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res10 = 0;
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
        (this->ReplayConnection).WeakPtr = local_res8;
      }
      if (pFVar3 != (FLevelCollection *)0x0) {
        (pFVar3->NetDriver).field0_0x0.DebugPtr = (UNetDriver *)0x0;
      }
    }
    else {
      (param_1->DemoNetDriver).field0_0x0.DebugPtr = (UDemoNetDriver *)0x0;
      (**(code **)(*(longlong *)this_00 + 0x410))(this_00,param_2);
      (param_2->DemoNetDriver).field0_0x0.DebugPtr = this_00;
      if ((pFVar3 != (FLevelCollection *)0x0) && (pFVar4 != (FLevelCollection *)0x0)) {
        (pFVar4->DemoNetDriver).field0_0x0.DebugPtr = this_00;
        (pFVar3->DemoNetDriver).field0_0x0.DebugPtr = (UDemoNetDriver *)0x0;
      }
    }
  }
  return;
}

// OnSeamlessLevelTransition @ 1484e4ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UReplaySubsystem::OnSeamlessLevelTransition(UReplaySubsystem *this,UWorld *param_1)

{
  UDemoNetDriver *this_00;
  bool bVar1;
  UWorld *pUVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  pUVar2 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if ((param_1 == pUVar2) &&
     ((this_00 = (param_1->DemoNetDriver).field0_0x0.DebugPtr, this_00 == (UDemoNetDriver *)0x0 ||
      ((bVar1 = UDemoNetDriver::IsPlaying(this_00), !bVar1 &&
       ((this_00->ReplayHelper).bRecordMapChanges == false)))))) {
    UWorld::DestroyDemoNetDriver(param_1);
    pUVar3 = FWeakObjectPtr::Get(&(this->ReplayConnection).WeakPtr);
    if (pUVar3 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar3 + 0x348))(pUVar3);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = 0;
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      (this->ReplayConnection).WeakPtr = local_res8;
    }
  }
  return;
}

// OnSeamlessTravelStart @ 1484e4b90

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
UReplaySubsystem::OnSeamlessTravelStart(UReplaySubsystem *this,UWorld *param_1,FString *param_2)

{
  UDemoNetDriver *this_00;
  UWorld *pUVar1;
  UReplayNetConnection *this_01;
  
  pUVar1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (param_1 == pUVar1) {
    this_00 = (param_1->DemoNetDriver).field0_0x0.DebugPtr;
    if (this_00 != (UDemoNetDriver *)0x0) {
      UDemoNetDriver::OnSeamlessTravelStartDuringRecording(this_00,param_2);
    }
    this_01 = (UReplayNetConnection *)FWeakObjectPtr::Get(&(this->ReplayConnection).WeakPtr);
    if (this_01 != (UReplayNetConnection *)0x0) {
      UReplayNetConnection::OnSeamlessTravelStart(this_01,param_1,param_2);
    }
  }
  return;
}

// PlayReplay @ 1484e4c80

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
UReplaySubsystem::PlayReplay
          (UReplaySubsystem *this,FString *param_1,UWorld *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  FName FVar1;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  FNameEntryId FVar9;
  UObject *pUVar10;
  FName *pFVar11;
  FModuleManager *this_00;
  FNetworkReplayStreaming *this_01;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UDemoNetDriver *pUVar12;
  UClass *pUVar13;
  int iVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  UDemoNetDriver *pUVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res18 [16];
  FLLMScope local_128;
  FWeakObjectPtr local_124;
  UWorld *local_118;
  void *local_110;
  undefined8 local_108;
  FNameEntryId local_100;
  uint uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  uint local_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  undefined1 local_e0 [8];
  undefined8 local_d8;
  FMemScope local_d0;
  FURL local_c8;
  FDestructionSentinel local_58;
  FName local_40;
  
  FLLMScope::FLLMScope(&local_128,Replays,false,None,Default,true);
  FMemScope::FMemScope(&local_d0,Replays,true);
  if ((param_2 == (UWorld *)0x0) &&
     (param_2 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this), param_2 == (UWorld *)0x0)) {
    local_118 = param_2;
    if (2 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    bVar5 = false;
    goto LAB_1484e51c0;
  }
  local_118 = param_2;
  FURL::FURL(&local_c8,(wchar_t *)0x0);
  if (&local_c8.Map != param_1) {
    local_c8.Map.Data.ArrayNum = (param_1->Data).ArrayNum;
    lVar15 = (longlong)local_c8.Map.Data.ArrayNum;
    pFVar16 = (param_1->Data).AllocatorInstance.Data;
    if (local_c8.Map.Data.ArrayNum == 0) {
      if (local_c8.Map.Data.ArrayMax != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,0,local_c8.Map.Data.ArrayMax,(ForAnyElementType *)&local_c8.Map,0,
                   &local_c8.Map.Data.ArrayMax);
      }
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_c8.Map.Data.ArrayNum,local_c8.Map.Data.ArrayMax,
                 (ForAnyElementType *)&local_c8.Map,local_c8.Map.Data.ArrayNum,
                 &local_c8.Map.Data.ArrayMax);
      memcpy(local_c8.Map.Data.AllocatorInstance.Data,pFVar16,lVar15 * 2);
    }
  }
  iVar14 = param_3->ArrayNum;
  pFVar16 = (param_3->AllocatorInstance).Data;
  pFVar18 = pFVar16 + (longlong)iVar14 * 0x10;
  while( true ) {
    if (param_3->ArrayNum != iVar14) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar16 == pFVar18) break;
    if (*(int *)(pFVar16 + 8) == 0) {
      FURL::AddOption(&local_c8,L"");
      pFVar16 = pFVar16 + 0x10;
    }
    else {
      FURL::AddOption(&local_c8,*(wchar_t **)pFVar16);
      pFVar16 = pFVar16 + 0x10;
    }
  }
  bVar5 = FURL::HasOption(&local_c8,L"flush");
  UWorld::DestroyDemoNetDriver(param_2);
  pUVar10 = FWeakObjectPtr::Get(&(this->ReplayConnection).WeakPtr);
  if (pUVar10 != (UObject *)0x0) {
    (**(code **)(*(longlong *)pUVar10 + 0x348))(pUVar10);
    local_124.ObjectIndex = 0;
    local_124.ObjectSerialNumber = 0;
    local_d8 = 0;
    FWeakObjectPtr::operator=(&local_124,(FObjectPtr)&local_d8);
    (this->ReplayConnection).WeakPtr = local_124;
  }
  pUVar17 = (UDemoNetDriver *)0x0;
  if (bVar5) {
    pFVar11 = ::FName::FName(&local_40,"NetworkReplayStreaming");
    FVar1 = *pFVar11;
    this_00 = FModuleManager::Get();
    this_01 = (FNetworkReplayStreaming *)FModuleManager::LoadModuleChecked(this_00,FVar1);
    FNetworkReplayStreaming::Flush(this_01);
  }
  if (4 < (byte)LogDemo._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
  }
  FVar9 = FNameEntryId::FromValidEName((EName)local_e8);
  uStack_fc = 0;
  local_100.Value = *(uint *)CONCAT44(extraout_var,FVar9.Value);
  FVar9 = FNameEntryId::FromValidEName((EName)local_e4);
  FVar1.Number = uStack_fc;
  FVar1.ComparisonIndex.Value = local_100.Value;
  uStack_f4 = 0;
  local_f8 = *(uint *)CONCAT44(extraout_var_00,FVar9.Value);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = local_f8;
  bVar5 = UEngine::CreateNamedNetDriver(GEngine,param_2,FVar3,FVar1);
  if (bVar5) {
    FVar9 = FNameEntryId::FromValidEName((EName)local_e0);
    uStack_ec = 0;
    local_f0 = *(uint *)CONCAT44(extraout_var_01,FVar9.Value);
    FVar4.Number = 0;
    FVar4.ComparisonIndex.Value = local_f0;
    pUVar12 = (UDemoNetDriver *)UEngine::FindNamedNetDriver(GEngine,param_2,FVar4);
    if (pUVar12 == (UDemoNetDriver *)0x0) {
LAB_1484e4fc6:
      (local_118->DemoNetDriver).field0_0x0.DebugPtr = (UDemoNetDriver *)0x0;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DemoNetDriver != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplaySubsystem.cpp"
                         ,0x102,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return (bool)uVar8;
      }
    }
    else {
      pUVar13 = Z_Construct_UClass_UDemoNetDriver_NoRegister();
      iVar14 = (int)pUVar13->_padding_;
      if ((*(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38) < iVar14) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
          &pUVar13->_padding_)) goto LAB_1484e4fc6;
      (local_118->DemoNetDriver).field0_0x0.DebugPtr = pUVar12;
      pUVar17 = pUVar12;
    }
    (**(code **)(*(longlong *)pUVar17 + 0x410))(pUVar17,param_2);
    local_110 = (void *)0x0;
    local_108 = 0;
    cVar6 = (**(code **)(*(longlong *)pUVar17 + 0x2e0))
                      (pUVar17,&param_2->_padding_,&local_c8,&local_110);
    if (cVar6 == '\0') {
      if (2 < (byte)LogDemo._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      }
      UWorld::DestroyDemoNetDriver(param_2);
      bVar5 = false;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FCoreUObjectDelegates::PostDemoPlay,(FWriteAccessScope *)&local_58);
      bVar5 = false;
      FCoreUObjectDelegates::PostDemoPlay._28_4_ = FCoreUObjectDelegates::PostDemoPlay._28_4_ + 1;
      iVar14 = FCoreUObjectDelegates::PostDemoPlay._16_4_ + -1;
      if (-1 < iVar14) {
        lVar15 = (longlong)iVar14 << 4;
        do {
          if (((int)FCoreUObjectDelegates::PostDemoPlay._16_4_ <= iVar14) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
          if (((*(int *)(lVar15 + 8 + FCoreUObjectDelegates::PostDemoPlay._8_8_) == 0) ||
              (*(longlong **)(lVar15 + FCoreUObjectDelegates::PostDemoPlay._8_8_) == (longlong *)0x0
              )) || (cVar6 = (**(code **)(**(longlong **)
                                            (lVar15 + FCoreUObjectDelegates::PostDemoPlay._8_8_) +
                                         0x68))(), cVar6 == '\0')) {
            bVar5 = true;
          }
          lVar15 = lVar15 + -0x10;
          iVar14 = iVar14 + -1;
        } while (-1 < iVar14);
      }
      FCoreUObjectDelegates::PostDemoPlay._28_4_ = FCoreUObjectDelegates::PostDemoPlay._28_4_ + -1;
      if (bVar5) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FCoreUObjectDelegates::PostDemoPlay,false);
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      bVar5 = true;
    }
    if (local_110 != (void *)0x0) {
      FMemory::Free(local_110);
    }
  }
  else {
    if (2 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    bVar5 = false;
  }
  if (local_c8.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Portal.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_c8.Op.AllocatorInstance.Data,local_c8.Op.ArrayNum);
  if (local_c8.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Op.AllocatorInstance.Data);
  }
  if (local_c8.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.RedirectURL.Data.AllocatorInstance.Data);
  }
  if (local_c8.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Map.Data.AllocatorInstance.Data);
  }
  if (local_c8.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Host.Data.AllocatorInstance.Data);
  }
  if (local_c8.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Protocol.Data.AllocatorInstance.Data);
  }
LAB_1484e51c0:
  FMemScope::~FMemScope(&local_d0);
  FLLMScope::~FLLMScope(&local_128);
  return bVar5;
}

// RecordReplay @ 1484eee20

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

void __thiscall
UReplaySubsystem::RecordReplay
          (UReplaySubsystem *this,FString *param_1,FString *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TSharedPtr<IAnalyticsProvider,1> *param_4)

{
  int iVar1;
  UNetDriver *this_00;
  FName FVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  TConsoleVariableData<bool> *pTVar6;
  FWeakObjectPtr FVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  FNameEntryId FVar12;
  wchar_t *pwVar13;
  UWorld *this_01;
  FString *pFVar14;
  longlong lVar15;
  UObject *pUVar16;
  UClass *pUVar17;
  UReplayNetConnection *this_02;
  FName *pFVar18;
  FModuleManager *this_03;
  FNetworkReplayStreaming *this_04;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UDemoNetDriver *this_05;
  FLevelCollection *pFVar19;
  FStaticBasicLogRecord *pFVar20;
  longlong *plVar21;
  ForAnyElementType FVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  undefined1 auStackY_238 [32];
  FLLMScope local_208;
  undefined1 local_204 [4];
  FMemScope local_200;
  FWeakObjectPtr local_1f8;
  void *local_1f0;
  undefined8 local_1e8;
  FString local_1e0;
  FNameEntryId local_1d0;
  uint uStack_1cc;
  uint local_1c8;
  undefined4 uStack_1c4;
  uint local_1c0;
  undefined4 uStack_1bc;
  FString *local_1b8;
  FString *local_1b0;
  FURL local_1a8;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [8];
  UReplayNetConnection *local_128;
  undefined8 local_120;
  FString local_118;
  TSharedPtr<IAnalyticsProvider,1> local_108;
  IAnalyticsProvider *local_f8;
  TReferenceControllerBase<1> *local_f0;
  FName local_e8;
  FString local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1f8 = (FWeakObjectPtr)this;
  local_1b8 = param_2;
  local_1b0 = param_1;
  FLLMScope::FLLMScope(&local_208,Replays,false,None,Default,true);
  FMemScope::FMemScope(&local_200,Replays,true);
  pwVar13 = FCommandLine::Get();
  bVar8 = FParse::Param(pwVar13,L"NOREPLAYS");
  if (bVar8) {
    if (2 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
    }
    goto LAB_1484ef6b9;
  }
  this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if (this_01 == (UWorld *)0x0) {
    if ((byte)LogDemo._0_1_ < 3) goto LAB_1484ef6b9;
    pFVar20 = &::LOG_Static;
  }
  else {
    bVar8 = UWorld::IsPlayingReplay(this_01);
    if (!bVar8) {
      FURL::FURL(&local_1a8,(wchar_t *)0x0);
      ::FString::FString(&local_1e0,param_1);
      pFVar14 = UWorld::GetMapName(this_01,&local_e0);
      if ((pFVar14->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
      ::FString::ReplaceInline(&local_1e0,L"%m",pwVar13,IgnoreCase);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if (local_1e0.Data.ArrayNum == 0) {
        local_1e0.Data.ArrayNum = 0;
      }
      else {
        local_1e0.Data.ArrayNum = local_1e0.Data.ArrayNum + -1;
      }
      ::FString::AssignRange
                (&local_1a8.Map,(wchar_t *)local_1e0.Data.AllocatorInstance.Data,
                 local_1e0.Data.ArrayNum);
      ::FString::PrintfImpl(&local_118,L"DemoFriendlyName=%s");
      FVar22.Data = (FScriptContainerElement *)L"";
      if (local_118.Data.ArrayNum != 0) {
        FVar22.Data = local_118.Data.AllocatorInstance.Data;
      }
      FURL::AddOption(&local_1a8,(wchar_t *)FVar22.Data);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      iVar1 = param_3->ArrayNum;
      pFVar23 = (param_3->AllocatorInstance).Data;
      pFVar24 = pFVar23 + (longlong)iVar1 * 0x10;
      while( true ) {
        if (param_3->ArrayNum != iVar1) {
          local_204[0] = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_204);
        }
        if (pFVar23 == pFVar24) break;
        if (*(int *)(pFVar23 + 8) == 0) {
          FURL::AddOption(&local_1a8,L"");
          pFVar23 = pFVar23 + 0x10;
        }
        else {
          FURL::AddOption(&local_1a8,*(wchar_t **)pFVar23);
          pFVar23 = pFVar23 + 0x10;
        }
      }
      bVar8 = FURL::HasOption(&local_1a8,L"flush");
      this_00 = (this_01->NetDriver).field0_0x0.DebugPtr;
      if (((this_00 != (UNetDriver *)0x0) &&
          (cVar9 = (**(code **)(this_00->_padding_ + 0x3f8))(this_00),
          pTVar6 = ReplaySubsystem::CVarUseReplayConnection.Ref, cVar9 != '\0')) &&
         ((this_00->ReplicationDriver).field0_0x0.DebugPtr != (UReplicationDriver *)0x0)) {
        bVar10 = IsInParallelGameThread();
        if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
          lVar15 = 0;
        }
        else {
          lVar15 = 1;
        }
        FVar7 = local_1f8;
        if (pTVar6->ShadowedValue[lVar15] != false) {
          StopExistingReplays((UReplaySubsystem *)local_1f8,this_01,(uint)bVar8);
          pUVar16 = GetTransientPackageAsObject();
          FObjectInitializer::AssertIfInConstructor
                    (pUVar16,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar17 = Z_Construct_UClass_UReplayNetConnection_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_c8,pUVar17);
          local_c8._8_8_ = pUVar16;
          this_02 = (UReplayNetConnection *)
                    StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
          if (local_c8._64_8_ != 0) {
            plVar21 = (longlong *)(local_c8 + 0x50);
            if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
              plVar21 = (longlong *)local_c8._104_8_;
            }
            (**(code **)(*plVar21 + 0x10))();
          }
          local_128 = this_02;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_02 != (UReplayNetConnection *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_02);
          }
          FWeakObjectPtr::operator=
                    ((FWeakObjectPtr *)((longlong)FVar7 + 0x34),(FObjectPtr)&local_128);
          (**(code **)(*(longlong *)this_02 + 0x368))(this_02,this_00,3,&local_1a8);
          local_108.Object = param_4->Object;
          local_108.SharedReferenceCount.ReferenceController =
               (param_4->SharedReferenceCount).ReferenceController;
          if (local_108.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          UReplayNetConnection::SetAnalyticsProvider(this_02,&local_108);
          UNetDriver::AddClientConnection(this_00,(UNetConnection *)this_02);
          if (4 < (byte)LogDemo._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
          }
          UReplayNetConnection::StartRecording(this_02);
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          FURL::~FURL(&local_1a8);
          goto LAB_1484ef6b9;
        }
      }
      this_05 = (this_01->DemoNetDriver).field0_0x0.DebugPtr;
      bVar10 = false;
      if (((this_05 == (UDemoNetDriver *)0x0) ||
          ((this_05->ReplayHelper).bRecordMapChanges == false)) ||
         (bVar11 = UDemoNetDriver::IsRecordingPaused(this_05), !bVar11)) {
        UWorld::DestroyDemoNetDriver(this_01);
        FVar7 = local_1f8;
        pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)local_1f8 + 0x34));
        if (pUVar16 != (UObject *)0x0) {
          (**(code **)(*(longlong *)pUVar16 + 0x348))(pUVar16);
          local_1f8.ObjectIndex = 0;
          local_1f8.ObjectSerialNumber = 0;
          local_120 = 0;
          FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_120);
          *(FWeakObjectPtr *)((longlong)FVar7 + 0x34) = local_1f8;
        }
        if (bVar8) {
          pFVar18 = ::FName::FName(&local_e8,"NetworkReplayStreaming");
          FVar2 = *pFVar18;
          this_03 = FModuleManager::Get();
          this_04 = (FNetworkReplayStreaming *)FModuleManager::LoadModuleChecked(this_03,FVar2);
          FNetworkReplayStreaming::Flush(this_04);
        }
        FVar12 = FNameEntryId::FromValidEName((EName)local_138);
        uStack_1cc = 0;
        local_1d0.Value = *(uint *)CONCAT44(extraout_var,FVar12.Value);
        FVar12 = FNameEntryId::FromValidEName((EName)local_134);
        FVar2.Number = uStack_1cc;
        FVar2.ComparisonIndex.Value = local_1d0.Value;
        uStack_1c4 = 0;
        local_1c8 = *(uint *)CONCAT44(extraout_var_00,FVar12.Value);
        FVar4.Number = 0;
        FVar4.ComparisonIndex.Value = local_1c8;
        bVar8 = UEngine::CreateNamedNetDriver(GEngine,this_01,FVar4,FVar2);
        if (!bVar8) {
          if (2 < (byte)LogDemo._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
          }
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          if (local_1a8.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Portal.Data.AllocatorInstance.Data);
          }
          DestructItems<FString,int>
                    ((FString *)local_1a8.Op.AllocatorInstance.Data,local_1a8.Op.ArrayNum);
          if (local_1a8.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Op.AllocatorInstance.Data);
          }
          if (local_1a8.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.RedirectURL.Data.AllocatorInstance.Data);
          }
          if (local_1a8.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Map.Data.AllocatorInstance.Data);
          }
          if (local_1a8.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Host.Data.AllocatorInstance.Data);
          }
          if (local_1a8.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Protocol.Data.AllocatorInstance.Data);
          }
          goto LAB_1484ef6b9;
        }
        FVar12 = FNameEntryId::FromValidEName((EName)local_130);
        uStack_1bc = 0;
        local_1c0 = *(uint *)CONCAT44(extraout_var_01,FVar12.Value);
        FVar5.Number = 0;
        FVar5.ComparisonIndex.Value = local_1c0;
        this_05 = (UDemoNetDriver *)UEngine::FindNamedNetDriver(GEngine,this_01,FVar5);
        if (this_05 == (UDemoNetDriver *)0x0) {
LAB_1484ef405:
          this_05 = (UDemoNetDriver *)0x0;
        }
        else {
          pUVar17 = Z_Construct_UClass_UDemoNetDriver_NoRegister();
          iVar1 = (int)pUVar17->_padding_;
          if ((*(int *)(*(longlong *)&this_05->field_0x10 + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&this_05->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar17->_padding_)) goto LAB_1484ef405;
        }
        (this_01->DemoNetDriver).field0_0x0.DebugPtr = this_05;
        bVar10 = true;
        if ((this_05 == (UDemoNetDriver *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("DemoNetDriver != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ReplaySubsystem.cpp"
                               ,0xbd,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pcVar3 = *(code **)(*(longlong *)this_05 + 0x2c0);
      local_f8 = param_4->Object;
      local_f0 = (param_4->SharedReferenceCount).ReferenceController;
      if (local_f0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_f0->SharedReferenceCount = (atomic<int>)((int)local_f0->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar3)(this_05,&local_f8);
      (**(code **)(*(longlong *)this_05 + 0x410))(this_05);
      pFVar19 = UWorld::FindCollectionByType(this_01,DynamicSourceLevels);
      if (pFVar19 != (FLevelCollection *)0x0) {
        (pFVar19->DemoNetDriver).field0_0x0.DebugPtr = this_05;
      }
      if (4 < (byte)LogDemo._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      }
      local_1f0 = (void *)0x0;
      local_1e8 = 0;
      if (bVar10) {
        cVar9 = (**(code **)(*(longlong *)this_05 + 0x2e8))
                          (this_05,&this_01->_padding_,&local_1a8,0);
        if (cVar9 == '\0') {
          if (2 < (byte)LogDemo._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
          }
          (this_01->DemoNetDriver).field0_0x0.DebugPtr = (UDemoNetDriver *)0x0;
          if (local_1f0 != (void *)0x0) {
            FMemory::Free(local_1f0);
          }
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          FURL::~FURL(&local_1a8);
          goto LAB_1484ef6b9;
        }
      }
      else {
        bVar8 = UDemoNetDriver::ContinueListen(this_05,&local_1a8);
        if (!bVar8) {
          if (2 < (byte)LogDemo._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
          }
          (this_01->DemoNetDriver).field0_0x0.DebugPtr = (UDemoNetDriver *)0x0;
          if (local_1f0 != (void *)0x0) {
            FMemory::Free(local_1f0);
          }
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          FURL::~FURL(&local_1a8);
          goto LAB_1484ef6b9;
        }
      }
      if (5 < (byte)LogDemo._0_1_) {
        if ((*(longlong *)&this_05->field_0x9c8 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      }
      if (local_1f0 != (void *)0x0) {
        FMemory::Free(local_1f0);
      }
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
      if (local_1a8.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Portal.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_1a8.Op.AllocatorInstance.Data,local_1a8.Op.ArrayNum);
      if (local_1a8.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Op.AllocatorInstance.Data);
      }
      if (local_1a8.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.RedirectURL.Data.AllocatorInstance.Data);
      }
      if (local_1a8.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Map.Data.AllocatorInstance.Data);
      }
      if (local_1a8.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Host.Data.AllocatorInstance.Data);
      }
      if (local_1a8.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Protocol.Data.AllocatorInstance.Data);
      }
      goto LAB_1484ef6b9;
    }
    if ((byte)LogDemo._0_1_ < 3) goto LAB_1484ef6b9;
    pFVar20 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar20,(FLogCategoryBase *)&LogDemo);
LAB_1484ef6b9:
  FMemScope::~FMemScope(&local_200);
  FLLMScope::~FLLMScope(&local_208);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return;
}

// RequestCheckpoint @ 1484f17b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UReplaySubsystem::RequestCheckpoint(UReplaySubsystem *this)

{
  longlong lVar1;
  UReplayNetConnection *this_00;
  
  lVar1 = (**(code **)(this->_padding_ + 0x180))();
  if ((lVar1 != 0) && (*(UDemoNetDriver **)(lVar1 + 0x140) != (UDemoNetDriver *)0x0)) {
    UDemoNetDriver::RequestCheckpoint(*(UDemoNetDriver **)(lVar1 + 0x140));
    return;
  }
  this_00 = (UReplayNetConnection *)FWeakObjectPtr::Get(&(this->ReplayConnection).WeakPtr);
  if (this_00 != (UReplayNetConnection *)0x0) {
    UReplayNetConnection::RequestCheckpoint(this_00);
    return;
  }
  return;
}

// SetCheckpointSaveMaxMSPerFrame @ 1484fb640

void __thiscall
UReplaySubsystem::SetCheckpointSaveMaxMSPerFrame(UReplaySubsystem *this,float param_1)

{
  longlong lVar1;
  UReplayNetConnection *this_00;
  
  lVar1 = (**(code **)(this->_padding_ + 0x180))();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x140), lVar1 != 0)) {
    *(float *)(lVar1 + 0xbcc) = param_1;
    *(float *)(lVar1 + 0xe44) = param_1;
    return;
  }
  this_00 = (UReplayNetConnection *)FWeakObjectPtr::Get(&(this->ReplayConnection).WeakPtr);
  if (this_00 != (UReplayNetConnection *)0x0) {
    UReplayNetConnection::SetCheckpointSaveMaxMSPerFrame(this_00,param_1);
  }
  return;
}

// SetExternalDataForObject @ 1484fb950

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
UReplaySubsystem::SetExternalDataForObject
          (UReplaySubsystem *this,UObject *param_1,uchar *param_2,int param_3)

{
  longlong lVar1;
  UReplayNetConnection *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope(local_res8,Replays,false,None,Default,true);
  FMemScope::FMemScope(local_18,Replays,true);
  lVar1 = (**(code **)(this->_padding_ + 0x180))(this);
  if ((lVar1 != 0) && (*(UDemoNetDriver **)(lVar1 + 0x140) != (UDemoNetDriver *)0x0)) {
    UDemoNetDriver::SetExternalDataForObject
              (*(UDemoNetDriver **)(lVar1 + 0x140),param_1,param_2,param_3);
  }
  this_00 = (UReplayNetConnection *)FWeakObjectPtr::Get(&(this->ReplayConnection).WeakPtr);
  if (this_00 != (UReplayNetConnection *)0x0) {
    UReplayNetConnection::SetExternalDataForObject(this_00,param_1,param_2,param_3);
  }
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// StaticRegisterNativesUReplaySubsystem @ 1484fcf90

void __cdecl UReplaySubsystem::StaticRegisterNativesUReplaySubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UReplaySubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopExistingReplays @ 1484fd000

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
UReplaySubsystem::StopExistingReplays
          (UReplaySubsystem *this,UWorld *param_1,EStopReplayFlags param_2)

{
  FName FVar1;
  UObject *pUVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  FNetworkReplayStreaming *this_01;
  FName local_res8;
  undefined8 local_res10;
  
  if (param_1 == (UWorld *)0x0) {
    param_1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    if (param_1 == (UWorld *)0x0) goto LAB_1484fd02e;
  }
  UWorld::DestroyDemoNetDriver(param_1);
LAB_1484fd02e:
  pUVar2 = FWeakObjectPtr::Get(&(this->ReplayConnection).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    (**(code **)(*(longlong *)pUVar2 + 0x348))(pUVar2);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res10);
    (this->ReplayConnection).WeakPtr = (FWeakObjectPtr)local_res8;
  }
  if ((param_2 & Flush) != None) {
    pFVar3 = ::FName::FName(&local_res8,"NetworkReplayStreaming");
    FVar1 = *pFVar3;
    this_00 = FModuleManager::Get();
    this_01 = (FNetworkReplayStreaming *)FModuleManager::LoadModuleChecked(this_00,FVar1);
    FNetworkReplayStreaming::Flush(this_01);
  }
  return;
}

// StopReplay @ 1484fd0c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UReplaySubsystem::StopReplay(UReplaySubsystem *this)

{
  bool bVar1;
  UWorld *this_00;
  UObject *pUVar2;
  UGameInstance *pUVar3;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_00 == (UWorld *)0x0) {
    if (2 < (byte)LogDemo._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogDemo);
      return;
    }
  }
  else {
    bVar1 = UWorld::IsPlayingReplay(this_00);
    UWorld::DestroyDemoNetDriver(this_00);
    pUVar2 = FWeakObjectPtr::Get(&(this->ReplayConnection).WeakPtr);
    if (pUVar2 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar2 + 0x348))(pUVar2);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = 0;
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      (this->ReplayConnection).WeakPtr = local_res8;
    }
    pUVar3 = UGameInstanceSubsystem::GetGameInstance((UGameInstanceSubsystem *)this);
    if (((pUVar3 != (UGameInstance *)0x0) && (bVar1)) && (this->bLoadDefaultMapOnStop != false)) {
      UEngine::BrowseToDefaultMap(GEngine,pUVar3->WorldContext);
    }
  }
  return;
}

// execGetActiveReplayName @ 1485023e0

void __cdecl
UReplaySubsystem::execGetActiveReplayName(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  UObject *pUVar3;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (**(code **)(*(longlong *)param_1 + 0x180))();
  if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x140), lVar2 == 0)) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[1].field_0xc);
    local_18.Data = (FScriptContainerElement *)0x0;
    if (pUVar3 == (UObject *)0x0) {
      local_10 = 0;
      goto LAB_1485024c5;
    }
    iVar1 = *(int *)&pUVar3[0xd1].field_0x18;
    _Src = *(void **)&pUVar3[0xd1].field_0x10;
    local_10 = CONCAT44(local_10._4_4_,iVar1);
  }
  else {
    iVar1 = *(int *)(lVar2 + 0xdf0);
    _Src = *(void **)(lVar2 + 0xde8);
    local_10 = CONCAT44(local_10._4_4_,iVar1);
  }
  if (iVar1 == 0) {
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = local_10 & 0xffffffff;
  }
  else {
    local_18.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 * 2);
  }
LAB_1485024c5:
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetReplayCurrentTime @ 148502530

void __cdecl
UReplaySubsystem::execGetReplayCurrentTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = (**(code **)(*(longlong *)param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x140) != 0)) {
    *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)(lVar1 + 0x140) + 0xe28);
    return;
  }
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[1].field_0xc);
  if (pUVar2 != (UObject *)0x0) {
    *(undefined4 *)param_3 = *(undefined4 *)(pUVar2 + 0xd3);
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetReplayTotalTime @ 1485025d0

void __cdecl
UReplaySubsystem::execGetReplayTotalTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = (**(code **)(*(longlong *)param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x140) != 0)) {
    *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)(lVar1 + 0x140) + 0xe2c);
    return;
  }
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[1].field_0xc);
  if (pUVar2 != (UObject *)0x0) {
    *(undefined4 *)param_3 = *(undefined4 *)&pUVar2[0xd3].field_0x4;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execIsPlaying @ 148502670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UReplaySubsystem::execIsPlaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  longlong lVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (**(code **)(*(longlong *)param_1 + 0x180))();
  if ((lVar2 != 0) && (*(UDemoNetDriver **)(lVar2 + 0x140) != (UDemoNetDriver *)0x0)) {
    bVar1 = UDemoNetDriver::IsPlaying(*(UDemoNetDriver **)(lVar2 + 0x140));
    *(bool *)param_3 = bVar1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsRecording @ 1485026d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UReplaySubsystem::execIsRecording(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  longlong lVar2;
  UObject *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (**(code **)(*(longlong *)param_1 + 0x180))();
  if ((lVar2 != 0) && (*(UDemoNetDriver **)(lVar2 + 0x140) != (UDemoNetDriver *)0x0)) {
    bVar1 = UDemoNetDriver::IsRecording(*(UDemoNetDriver **)(lVar2 + 0x140));
    *(bool *)param_3 = bVar1;
    return;
  }
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[1].field_0xc);
  *(bool *)param_3 = pUVar3 != (UObject *)0x0;
  return;
}

// execRequestCheckpoint @ 148502750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UReplaySubsystem::execRequestCheckpoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  UReplayNetConnection *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = (**(code **)(*(longlong *)param_1 + 0x180))();
  if ((lVar1 != 0) && (*(UDemoNetDriver **)(lVar1 + 0x140) != (UDemoNetDriver *)0x0)) {
    UDemoNetDriver::RequestCheckpoint(*(UDemoNetDriver **)(lVar1 + 0x140));
    return;
  }
  this = (UReplayNetConnection *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[1].field_0xc);
  if (this != (UReplayNetConnection *)0x0) {
    UReplayNetConnection::RequestCheckpoint(this);
    return;
  }
  return;
}


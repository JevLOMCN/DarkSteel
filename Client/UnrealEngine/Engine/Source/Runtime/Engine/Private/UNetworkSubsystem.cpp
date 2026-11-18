// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 148073610

UClass * __cdecl UNetworkSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkSubsystem",
               &Z_Registration_Info_UClass_UNetworkSubsystem.InnerSingleton,
               StaticRegisterNativesUNetworkSubsystem,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNetworkSubsystem>,
               InternalVTableHelperCtorCaller<UNetworkSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkSubsystem.InnerSingleton;
}

// UNetworkSubsystem @ 14808bfb0

UNetworkSubsystem * __thiscall
UNetworkSubsystem::UNetworkSubsystem(UNetworkSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UNetworkSubsystem__6B_;
  *(undefined8 *)&(this->GroupsManager).SubObjectGroupMap = 0;
  *(undefined8 *)&(this->GroupsManager).SubObjectGroupMap.field_0x8 = 0;
  *(undefined8 *)&(this->GroupsManager).SubObjectGroupMap.field_0x20 = 0;
  *(undefined4 *)&(this->GroupsManager).SubObjectGroupMap.field_0x28 = 0;
  *(undefined4 *)&(this->GroupsManager).SubObjectGroupMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->GroupsManager).SubObjectGroupMap.field_0x34 = 0;
  *(undefined4 *)&(this->GroupsManager).SubObjectGroupMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GroupsManager).SubObjectGroupMap.field_0x40 = 0;
  *(undefined4 *)&(this->GroupsManager).SubObjectGroupMap.field_0x48 = 0;
  return this;
}

// UNetworkSubsystem @ 14808c010

UNetworkSubsystem * __thiscall UNetworkSubsystem::UNetworkSubsystem(UNetworkSubsystem *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  this->_padding_ = (longlong)&___7UNetworkSubsystem__6B_;
  *(undefined8 *)&(this->GroupsManager).SubObjectGroupMap = 0;
  *(undefined8 *)&(this->GroupsManager).SubObjectGroupMap.field_0x8 = 0;
  *(undefined8 *)&(this->GroupsManager).SubObjectGroupMap.field_0x20 = 0;
  *(undefined4 *)&(this->GroupsManager).SubObjectGroupMap.field_0x28 = 0;
  *(undefined4 *)&(this->GroupsManager).SubObjectGroupMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->GroupsManager).SubObjectGroupMap.field_0x34 = 0;
  *(undefined4 *)&(this->GroupsManager).SubObjectGroupMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GroupsManager).SubObjectGroupMap.field_0x40 = 0;
  *(undefined4 *)&(this->GroupsManager).SubObjectGroupMap.field_0x48 = 0;
  return this;
}

// ~UNetworkSubsystem @ 14808f490

void __thiscall UNetworkSubsystem::~UNetworkSubsystem(UNetworkSubsystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UNetworkSubsystem__6B_;
  *(undefined4 *)&(this->GroupsManager).SubObjectGroupMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->GroupsManager).SubObjectGroupMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GroupsManager);
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// DoesSupportWorldType @ 14809f2e0

bool __thiscall UNetworkSubsystem::DoesSupportWorldType(UNetworkSubsystem *this,Type param_1)

{
  return true;
}

// GetPrivateStaticClass @ 1480a9bf0

UClass * __cdecl UNetworkSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkSubsystem",
               &Z_Registration_Info_UClass_UNetworkSubsystem.InnerSingleton,
               StaticRegisterNativesUNetworkSubsystem,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNetworkSubsystem>,
               InternalVTableHelperCtorCaller<UNetworkSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkSubsystem.InnerSingleton;
}

// Serialize @ 1480cea20

void __thiscall UNetworkSubsystem::Serialize(UNetworkSubsystem *this,FArchive *param_1)

{
  FString local_48;
  FScopeMarker local_38;
  
  if ((param_1->field_0x2b & 4) != 0) {
    ::FString::FString(&local_48,"UNetworkSubsystem::Serialize");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker
              (&local_38,param_1,&local_48);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      local_38.PreWorkPos = *(ulong64 *)&local_38.Ar[1].field_0x8;
    }
    UE::Net::FNetConditionGroupManager::CountBytes(&this->GroupsManager,param_1);
    ::FString::FString(&local_48,"GroupsManager");
    if (local_38.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
                (local_38.ScopeStack,&local_48,
                 *(longlong *)&local_38.Ar[1].field_0x8 - local_38.PreWorkPos);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_38);
  }
  return;
}

// Serialize @ 1480ceb00

void __thiscall
UNetworkSubsystem::Serialize(UNetworkSubsystem *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  FString local_48;
  FScopeMarker local_38;
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  if ((pFVar1->field_0x2b & 4) != 0) {
    ::FString::FString(&local_48,"UNetworkSubsystem::Serialize");
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::FScopeMarker(&local_38,pFVar1,&local_48)
    ;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      local_38.PreWorkPos = *(ulong64 *)&local_38.Ar[1].field_0x8;
    }
    UE::Net::FNetConditionGroupManager::CountBytes(&this->GroupsManager,pFVar1);
    ::FString::FString(&local_48,"GroupsManager");
    if (local_38.ScopeStack != (FNetworkMemoryTrackingScopeStack *)0x0) {
      UE::Net::Private::GranularMemoryTracking::FNetworkMemoryTrackingScopeStack::TrackWork
                (local_38.ScopeStack,&local_48,
                 *(longlong *)&local_38.Ar[1].field_0x8 - local_38.PreWorkPos);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    UE::Net::Private::GranularMemoryTracking::FScopeMarker::~FScopeMarker(&local_38);
  }
  return;
}

// StaticRegisterNativesUNetworkSubsystem @ 1480d5750

void __cdecl UNetworkSubsystem::StaticRegisterNativesUNetworkSubsystem(void)

{
  return;
}


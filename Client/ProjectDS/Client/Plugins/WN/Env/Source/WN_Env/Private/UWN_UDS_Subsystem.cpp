// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 52

// StaticClass @ 14a0435b0

UClass * __cdecl UWN_UDS_Subsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_UDS_Subsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_UDS_Subsystem",
               &Z_Registration_Info_UClass_UWN_UDS_Subsystem.InnerSingleton,
               StaticRegisterNativesUWN_UDS_Subsystem,0x2778,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_UDS_Subsystem>,
               InternalVTableHelperCtorCaller<UWN_UDS_Subsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_UDS_Subsystem.InnerSingleton;
}

// UWN_UDS_Subsystem @ 14a047630

UWN_UDS_Subsystem * __thiscall
UWN_UDS_Subsystem::UWN_UDS_Subsystem(UWN_UDS_Subsystem *this,FVTableHelper *param_1)

{
  FWN_UniqueIndexAllocator *this_00;
  undefined8 local_res8;
  
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  (this->UDS_GlobalVolume).field0_0x0.DebugPtr = (AWN_UDS_GlobalVolume *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->PreviousPhysicalVolume).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->PreviousPhysicalVolume).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->CurrentPhysicalVolume).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CurrentPhysicalVolume).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->PreviousLogicalVolume).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->PreviousLogicalVolume).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->CurrentLogicalVolume).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CurrentLogicalVolume).WeakPtr,(FObjectPtr)&local_res8);
  FWN_Ultra_Dynamic_Sky::FWN_Ultra_Dynamic_Sky(&(this->PreviousState).UDS_Setting);
  FWN_Ultra_Dynamic_Sky::FWN_Ultra_Dynamic_Sky(&(this->CurrentState).UDS_Setting);
  this_00 = &this->ReactComponentIndexAllocator;
  this->UDS_BPClass = (UClass *)0x0;
  (this->UDS).field0_0x0.DebugPtr = (AWN_Ultra_Sky *)0x0;
  this->DelayTime = -2.0;
  this->CurrentBlendingTime = -1.0;
  this->GlobalTOD = -1.0;
  this->OverridenTOD = -1.0;
  this->bCanBlending = true;
  this->ObserverMode = View;
  this->bTODValueChange = false;
  this->PrevTimeBand = None;
  this->CurrentTimeBand = None;
  this->DirtyMode = None;
  this_00->Granularity = 0x400;
  this_00->BaseIndex = 0;
  (this->ReactComponentIndexAllocator).NumIndices = 0;
  (this->ReactComponentIndexAllocator).FreedIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReactComponentIndexAllocator).FreedIndices.ArrayNum = 0;
  (this->ReactComponentIndexAllocator).FreedIndices.ArrayMax = 0;
  FWN_UniqueIndexAllocator::TryResize(this_00);
  *(undefined8 *)&this->AllReactComponentsPerType = 0;
  *(undefined8 *)&(this->AllReactComponentsPerType).field_0x8 = 0;
  *(undefined8 *)&(this->AllReactComponentsPerType).field_0x20 = 0;
  *(undefined4 *)&(this->AllReactComponentsPerType).field_0x28 = 0;
  *(undefined4 *)&(this->AllReactComponentsPerType).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllReactComponentsPerType).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllReactComponentsPerType).field_0x34 = 0;
  *(undefined8 *)&(this->AllReactComponentsPerType).field_0x40 = 0;
  *(undefined4 *)&(this->AllReactComponentsPerType).field_0x48 = 0;
  *(undefined8 *)&(this->UpdatableReactComponents).Elements = 0;
  *(undefined8 *)&(this->UpdatableReactComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UpdatableReactComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UpdatableReactComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UpdatableReactComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UpdatableReactComponents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UpdatableReactComponents).Elements.field_0x34 = 0;
  (this->UpdatableReactComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UpdatableReactComponents).HashSize = 0;
  this->bHasToUpdateTransitionRatio = false;
  *(undefined8 *)&(this->UDS_PropsMap).field_0x10 = 0;
  *(undefined8 *)&(this->UDS_PropsMap).field_0x18 = 0;
  *(undefined8 *)&(this->UDS_PropsMap).field_0x38 = 0;
  *(undefined8 *)&(this->UDS_PropsMap).field_0x48 = 0;
  *(undefined8 *)&this->UDS_PropsMap = 0;
  *(undefined8 *)&(this->UDS_PropsMap).field_0x8 = 0;
  *(undefined8 *)&(this->UDS_PropsMap).field_0x20 = 0;
  *(undefined4 *)&(this->UDS_PropsMap).field_0x28 = 0;
  *(undefined4 *)&(this->UDS_PropsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UDS_PropsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UDS_PropsMap).field_0x34 = 0;
  *(undefined8 *)&(this->UDS_PropsMap).field_0x40 = 0;
  *(undefined8 *)&(this->UDS_PropsOfTODMap).field_0x10 = 0;
  *(undefined8 *)&(this->UDS_PropsOfTODMap).field_0x18 = 0;
  *(undefined8 *)&(this->UDS_PropsOfTODMap).field_0x38 = 0;
  *(undefined8 *)&(this->UDS_PropsOfTODMap).field_0x48 = 0;
  *(undefined8 *)&this->UDS_PropsOfTODMap = 0;
  *(undefined8 *)&(this->UDS_PropsOfTODMap).field_0x8 = 0;
  *(undefined8 *)&(this->UDS_PropsOfTODMap).field_0x20 = 0;
  *(undefined4 *)&(this->UDS_PropsOfTODMap).field_0x28 = 0;
  *(undefined4 *)&(this->UDS_PropsOfTODMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UDS_PropsOfTODMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UDS_PropsOfTODMap).field_0x34 = 0;
  *(undefined8 *)&(this->UDS_PropsOfTODMap).field_0x40 = 0;
  *(undefined8 *)&(this->UDS_PropsExceptTODMap).field_0x10 = 0;
  *(undefined8 *)&(this->UDS_PropsExceptTODMap).field_0x18 = 0;
  *(undefined8 *)&(this->UDS_PropsExceptTODMap).field_0x38 = 0;
  *(undefined8 *)&(this->UDS_PropsExceptTODMap).field_0x48 = 0;
  *(undefined8 *)&this->UDS_PropsExceptTODMap = 0;
  *(undefined8 *)&(this->UDS_PropsExceptTODMap).field_0x8 = 0;
  *(undefined8 *)&(this->UDS_PropsExceptTODMap).field_0x20 = 0;
  *(undefined4 *)&(this->UDS_PropsExceptTODMap).field_0x28 = 0;
  *(undefined4 *)&(this->UDS_PropsExceptTODMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UDS_PropsExceptTODMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UDS_PropsExceptTODMap).field_0x34 = 0;
  *(undefined8 *)&(this->UDS_PropsExceptTODMap).field_0x40 = 0;
  *(undefined8 *)&this->OnDayTimeStarted = 0;
  *(undefined8 *)&(this->OnDayTimeStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnDayTimeStarted).field_0x10 = 0;
  *(undefined8 *)&this->OnNightTimeStarted = 0;
  *(undefined8 *)&(this->OnNightTimeStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnNightTimeStarted).field_0x10 = 0;
  return this;
}

// UWN_UDS_Subsystem @ 14a047920

UWN_UDS_Subsystem * __thiscall UWN_UDS_Subsystem::UWN_UDS_Subsystem(UWN_UDS_Subsystem *this)

{
  FWN_UniqueIndexAllocator *this_00;
  undefined8 local_res8;
  
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  (this->UDS_GlobalVolume).field0_0x0.DebugPtr = (AWN_UDS_GlobalVolume *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->PreviousPhysicalVolume).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->PreviousPhysicalVolume).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->CurrentPhysicalVolume).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CurrentPhysicalVolume).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->PreviousLogicalVolume).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->PreviousLogicalVolume).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->CurrentLogicalVolume).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CurrentLogicalVolume).WeakPtr,(FObjectPtr)&local_res8);
  FWN_Ultra_Dynamic_Sky::FWN_Ultra_Dynamic_Sky(&(this->PreviousState).UDS_Setting);
  FWN_Ultra_Dynamic_Sky::FWN_Ultra_Dynamic_Sky(&(this->CurrentState).UDS_Setting);
  this_00 = &this->ReactComponentIndexAllocator;
  this->UDS_BPClass = (UClass *)0x0;
  (this->UDS).field0_0x0.DebugPtr = (AWN_Ultra_Sky *)0x0;
  this->DelayTime = -2.0;
  this->CurrentBlendingTime = -1.0;
  this->GlobalTOD = -1.0;
  this->OverridenTOD = -1.0;
  this->bCanBlending = true;
  this->ObserverMode = View;
  this->bTODValueChange = false;
  this->PrevTimeBand = None;
  this->CurrentTimeBand = None;
  this->DirtyMode = None;
  this_00->Granularity = 0x400;
  this_00->BaseIndex = 0;
  (this->ReactComponentIndexAllocator).NumIndices = 0;
  (this->ReactComponentIndexAllocator).FreedIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ReactComponentIndexAllocator).FreedIndices.ArrayNum = 0;
  (this->ReactComponentIndexAllocator).FreedIndices.ArrayMax = 0;
  FWN_UniqueIndexAllocator::TryResize(this_00);
  *(undefined8 *)&this->AllReactComponentsPerType = 0;
  *(undefined8 *)&(this->AllReactComponentsPerType).field_0x8 = 0;
  *(undefined8 *)&(this->AllReactComponentsPerType).field_0x20 = 0;
  *(undefined4 *)&(this->AllReactComponentsPerType).field_0x28 = 0;
  *(undefined4 *)&(this->AllReactComponentsPerType).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllReactComponentsPerType).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllReactComponentsPerType).field_0x34 = 0;
  *(undefined8 *)&(this->AllReactComponentsPerType).field_0x40 = 0;
  *(undefined4 *)&(this->AllReactComponentsPerType).field_0x48 = 0;
  *(undefined8 *)&(this->UpdatableReactComponents).Elements = 0;
  *(undefined8 *)&(this->UpdatableReactComponents).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->UpdatableReactComponents).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->UpdatableReactComponents).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->UpdatableReactComponents).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->UpdatableReactComponents).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UpdatableReactComponents).Elements.field_0x34 = 0;
  (this->UpdatableReactComponents).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->UpdatableReactComponents).HashSize = 0;
  this->bHasToUpdateTransitionRatio = false;
  *(undefined8 *)&(this->UDS_PropsMap).field_0x10 = 0;
  *(undefined8 *)&(this->UDS_PropsMap).field_0x18 = 0;
  *(undefined8 *)&(this->UDS_PropsMap).field_0x38 = 0;
  *(undefined8 *)&(this->UDS_PropsMap).field_0x48 = 0;
  *(undefined8 *)&this->UDS_PropsMap = 0;
  *(undefined8 *)&(this->UDS_PropsMap).field_0x8 = 0;
  *(undefined8 *)&(this->UDS_PropsMap).field_0x20 = 0;
  *(undefined4 *)&(this->UDS_PropsMap).field_0x28 = 0;
  *(undefined4 *)&(this->UDS_PropsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UDS_PropsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UDS_PropsMap).field_0x34 = 0;
  *(undefined8 *)&(this->UDS_PropsMap).field_0x40 = 0;
  *(undefined8 *)&(this->UDS_PropsOfTODMap).field_0x10 = 0;
  *(undefined8 *)&(this->UDS_PropsOfTODMap).field_0x18 = 0;
  *(undefined8 *)&(this->UDS_PropsOfTODMap).field_0x38 = 0;
  *(undefined8 *)&(this->UDS_PropsOfTODMap).field_0x48 = 0;
  *(undefined8 *)&this->UDS_PropsOfTODMap = 0;
  *(undefined8 *)&(this->UDS_PropsOfTODMap).field_0x8 = 0;
  *(undefined8 *)&(this->UDS_PropsOfTODMap).field_0x20 = 0;
  *(undefined4 *)&(this->UDS_PropsOfTODMap).field_0x28 = 0;
  *(undefined4 *)&(this->UDS_PropsOfTODMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UDS_PropsOfTODMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UDS_PropsOfTODMap).field_0x34 = 0;
  *(undefined8 *)&(this->UDS_PropsOfTODMap).field_0x40 = 0;
  *(undefined8 *)&(this->UDS_PropsExceptTODMap).field_0x10 = 0;
  *(undefined8 *)&(this->UDS_PropsExceptTODMap).field_0x18 = 0;
  *(undefined8 *)&(this->UDS_PropsExceptTODMap).field_0x38 = 0;
  *(undefined8 *)&(this->UDS_PropsExceptTODMap).field_0x48 = 0;
  *(undefined8 *)&this->UDS_PropsExceptTODMap = 0;
  *(undefined8 *)&(this->UDS_PropsExceptTODMap).field_0x8 = 0;
  *(undefined8 *)&(this->UDS_PropsExceptTODMap).field_0x20 = 0;
  *(undefined4 *)&(this->UDS_PropsExceptTODMap).field_0x28 = 0;
  *(undefined4 *)&(this->UDS_PropsExceptTODMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->UDS_PropsExceptTODMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UDS_PropsExceptTODMap).field_0x34 = 0;
  *(undefined8 *)&(this->UDS_PropsExceptTODMap).field_0x40 = 0;
  *(undefined8 *)&this->OnDayTimeStarted = 0;
  *(undefined8 *)&(this->OnDayTimeStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnDayTimeStarted).field_0x10 = 0;
  *(undefined8 *)&this->OnNightTimeStarted = 0;
  *(undefined8 *)&(this->OnNightTimeStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnNightTimeStarted).field_0x10 = 0;
  return this;
}

// ~UWN_UDS_Subsystem @ 14a048570

void __thiscall UWN_UDS_Subsystem::~UWN_UDS_Subsystem(UWN_UDS_Subsystem *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pvVar1 = *(void **)&(this->OnNightTimeStarted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNightTimeStarted);
  pvVar1 = *(void **)&(this->OnDayTimeStarted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDayTimeStarted);
  *(undefined4 *)&(this->UDS_PropsExceptTODMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UDS_PropsExceptTODMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FWN_UDS_PropertyGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FWN_UDS_PropertyGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FWN_UDS_PropertyGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UDS_PropsExceptTODMap);
  *(undefined4 *)&(this->UDS_PropsOfTODMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UDS_PropsOfTODMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FWN_UDS_PropertyGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FWN_UDS_PropertyGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FWN_UDS_PropertyGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UDS_PropsOfTODMap);
  *(undefined4 *)&(this->UDS_PropsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UDS_PropsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FWN_UDS_PropertyGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FWN_UDS_PropertyGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FWN_UDS_PropertyGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UDS_PropsMap);
  (this->UpdatableReactComponents).HashSize = 0;
  FVar2 = (this->UpdatableReactComponents).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UWN_TODReactComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UWN_TODReactComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->UpdatableReactComponents).Elements);
  *(undefined4 *)&(this->AllReactComponentsPerType).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AllReactComponentsPerType).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,TObjectPtr<UWN_ReactComponentContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,TObjectPtr<UWN_ReactComponentContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_*,TObjectPtr<UWN_ReactComponentContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllReactComponentsPerType);
  pFVar3 = (this->ReactComponentIndexAllocator).FreedIndices.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FWN_Ultra_Dynamic_Sky::~FWN_Ultra_Dynamic_Sky(&(this->CurrentState).UDS_Setting);
  FWN_Ultra_Dynamic_Sky::~FWN_Ultra_Dynamic_Sky(&(this->PreviousState).UDS_Setting);
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  return;
}

// GetPrivateStaticClass @ 14a04b8a0

UClass * __cdecl UWN_UDS_Subsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_UDS_Subsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_UDS_Subsystem",
               &Z_Registration_Info_UClass_UWN_UDS_Subsystem.InnerSingleton,
               StaticRegisterNativesUWN_UDS_Subsystem,0x2778,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_UDS_Subsystem>,
               InternalVTableHelperCtorCaller<UWN_UDS_Subsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_UDS_Subsystem.InnerSingleton;
}

// IsTickableWhenPaused @ 14a04ba20

bool __thiscall UWN_UDS_Subsystem::IsTickableWhenPaused(UWN_UDS_Subsystem *this)

{
  return (bool)(~(byte)(*(uint *)&this[-1].OnDayTimeStarted >> 4) & 1);
}

// ShouldCreateSubsystem @ 14a04ba40

bool __thiscall UWN_UDS_Subsystem::ShouldCreateSubsystem(UWN_UDS_Subsystem *this,UObject *param_1)

{
  return true;
}

// StaticRegisterNativesUWN_UDS_Subsystem @ 14a04bae0

void __cdecl UWN_UDS_Subsystem::StaticRegisterNativesUWN_UDS_Subsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UWN_UDS_Subsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnVolumeEnter @ 14a04c0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UWN_UDS_Subsystem::execOnVolumeEnter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar3;
  undefined1 auStackY_e8 [32];
  EWN_VolumeObserverMode local_b8 [8];
  double local_b0;
  double dStack_a8;
  double local_a0;
  TVector<double>_u_0 local_98;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_b8[0] = Player;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pTVar3 = (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            *)local_78;
  if ((TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
       *)param_2->MostRecentPropertyAddress !=
      (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar3 = (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  local_98._s_0.X = local_b0;
  local_98._s_0.Y = dStack_a8;
  local_98._s_0.Z = local_a0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnVolumeEnter((UWN_UDS_Subsystem *)param_1,local_b8[0],(TVector<double> *)&local_98._s_0,pTVar3);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// execOnVolumeLeave @ 14a04c2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UWN_UDS_Subsystem::execOnVolumeLeave(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar3;
  undefined1 auStackY_b8 [32];
  EWN_VolumeObserverMode local_88 [16];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_88[0] = Player;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pTVar3 = (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            *)local_78;
  if ((TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
       *)param_2->MostRecentPropertyAddress !=
      (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar3 = (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnVolumeLeave((UWN_UDS_Subsystem *)param_1,local_88[0],pTVar3);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// AddTODReactComponentToTickable @ 14a04ff00

void __thiscall
UWN_UDS_Subsystem::AddTODReactComponentToTickable
          (UWN_UDS_Subsystem *this,UWN_TODReactComponent *param_1)

{
  TObjectPtr<UWN_TODReactComponent> local_res10;
  UWN_TODReactComponent *local_res18 [2];
  
  if (param_1 != (UWN_TODReactComponent *)0x0) {
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
    ::Emplace<TObjectPtr<UWN_TODReactComponent>_>
              (&this->UpdatableReactComponents,&local_res10,(bool *)local_res18);
  }
  return;
}

// BeginDestroy @ 14a050410

void __thiscall UWN_UDS_Subsystem::BeginDestroy(UWN_UDS_Subsystem *this)

{
  UWN_UDS_Subsystem *apUStackX_8 [4];
  
  UObject::BeginDestroy((UObject *)this);
  if ((char)this->_padding_ != '\0') {
    apUStackX_8[0] = this;
    `UTickableWorldSubsystem::BeginDestroy'::__l2::<lambda_1>::operator()(apUStackX_8);
  }
  return;
}

// BlendingPropByType @ 14a051160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UWN_UDS_Subsystem::BlendingPropByType
          (UWN_UDS_Subsystem *this,FProperty *param_1,FProperty *param_2,void *param_3,void *param_4
          ,void *param_5,void *param_6,void *param_7,void *param_8,float param_9)

{
  float fVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FString *pFVar14;
  TTuple<FString,FString> *pTVar15;
  longlong lVar16;
  uint uVar17;
  wchar_t *pwVar18;
  undefined1 *puVar19;
  UStruct *pUVar20;
  float fVar21;
  FString local_38;
  FString local_28;
  
  if ((param_1 == (FProperty *)0x0) ||
     (uVar5 = *(ulonglong *)(param_1->_padding_ + 0x18), (uVar5 >> 0x18 & 1) == 0)) {
    if (param_1 != (FProperty *)0x0) {
      uVar13 = *(uint *)(param_1->_padding_ + 0x18);
      if ((uVar13 >> 0x14 & 1) == 0) {
        if ((uVar13 >> 10 & 1) == 0) goto LAB_14a051f14;
        pUVar20 = (UStruct *)param_1[1]._padding_;
      }
      else {
        pUVar20 = (UStruct *)param_1[1]._padding_;
      }
      if (pUVar20 == (UStruct *)0x0) {
        return;
      }
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)pUVar20);
      }
      BlendingSturctProps(this,pUVar20,param_1,param_6,param_7,param_8,param_9);
      return;
    }
LAB_14a051f14:
    FProperty::SetValue_InContainer(param_2,param_5,param_7);
    return;
  }
  if ((uVar5 >> 0x20 & 1) == 0) {
    if ((uVar5 >> 8 & 1) != 0) {
      if ((param_1->ArrayDim < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((param_3 == (void *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = param_1->Offset_Internal;
      if ((param_1->ArrayDim < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((param_4 == (void *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar21 = *(float *)((longlong)iVar12 + (longlong)param_3);
      fVar1 = *(float *)((longlong)param_1->Offset_Internal + (longlong)param_4);
      if (fVar21 == fVar1) {
        return;
      }
      *(float *)param_8 = (__real_3f800000 - param_9) * fVar21 + fVar1 * param_9;
      return;
    }
    if ((uVar5 >> 9 & 1) != 0) {
      if ((param_1->ArrayDim < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((param_3 == (void *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = param_1->Offset_Internal;
      if ((param_1->ArrayDim < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((param_4 == (void *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar5 = *(ulonglong *)((longlong)iVar12 + (longlong)param_3);
      uVar6 = *(ulonglong *)((longlong)param_1->Offset_Internal + (longlong)param_4);
      if (uVar5 == uVar6) {
        return;
      }
      lVar16 = 0;
      fVar21 = (__real_3f800000 - param_9) * (float)uVar5 + (float)uVar6 * param_9;
      if ((__real_5f000000 <= fVar21) &&
         (fVar21 = fVar21 - __real_5f000000, fVar21 < __real_5f000000)) {
        lVar16 = -0x8000000000000000;
      }
      *(longlong *)param_8 = (longlong)fVar21 + lVar16;
      return;
    }
    if ((uVar5 >> 0xb & 1) != 0) {
      if ((param_1->ArrayDim < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((param_3 == (void *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = param_1->Offset_Internal;
      if ((param_1->ArrayDim < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((param_4 == (void *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar13 = *(uint *)((longlong)param_1->Offset_Internal + (longlong)param_4);
      uVar17 = *(uint *)((longlong)iVar12 + (longlong)param_3);
      if (uVar17 == uVar13) {
        return;
      }
      *(int *)param_8 =
           (int)(longlong)((__real_3f800000 - param_9) * (float)uVar17 + (float)uVar13 * param_9);
      return;
    }
    if ((uVar5 >> 0x12 & 1) != 0) {
      if ((_DAT_00000030 < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((param_3 == (void *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar16 = (longlong)_DAT_00000044;
      if ((_DAT_00000030 < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((param_4 == (void *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar17 = (uint)*(ushort *)((longlong)_DAT_00000044 + (longlong)param_4);
      uVar13 = (uint)*(ushort *)(lVar16 + (longlong)param_3);
LAB_14a051d1c:
      if ((short)uVar13 == (short)uVar17) {
        return;
      }
      *(short *)param_8 =
           (short)(int)((__real_3f800000 - param_9) * (float)(int)uVar13 +
                       (float)(int)uVar17 * param_9);
      return;
    }
    if ((uVar5 & 0x40) == 0) {
      if ((uVar5 >> 0x16 & 1) != 0) {
        if ((param_1->ArrayDim < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((param_3 == (void *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = param_1->Offset_Internal;
        if ((param_1->ArrayDim < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((param_4 == (void *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar16 = *(longlong *)((longlong)param_1->Offset_Internal + (longlong)param_4);
        lVar7 = *(longlong *)((longlong)iVar12 + (longlong)param_3);
        if (lVar7 == lVar16) {
          return;
        }
        *(longlong *)param_8 =
             (longlong)((__real_3f800000 - param_9) * (float)lVar7 + (float)lVar16 * param_9);
        return;
      }
      if ((char)uVar5 < '\0') {
        if ((param_1->ArrayDim < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((param_3 == (void *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = param_1->Offset_Internal;
        if ((param_1->ArrayDim < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((param_4 == (void *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar4 = *(int *)((longlong)param_1->Offset_Internal + (longlong)param_4);
        iVar12 = *(int *)((longlong)iVar12 + (longlong)param_3);
        if (iVar12 == iVar4) {
          return;
        }
        *(int *)param_8 =
             (int)((__real_3f800000 - param_9) * (float)iVar12 + (float)iVar4 * param_9);
        return;
      }
      if ((uVar5 >> 0x1f & 1) != 0) {
        if ((param_1->ArrayDim < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((param_3 == (void *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = param_1->Offset_Internal;
        if ((param_1->ArrayDim < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((param_4 == (void *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar17 = (uint)*(short *)((longlong)param_1->Offset_Internal + (longlong)param_4);
        uVar13 = (uint)*(short *)((longlong)iVar12 + (longlong)param_3);
        goto LAB_14a051d1c;
      }
      if ((uVar5 & 2) == 0) {
        return;
      }
      if ((param_1->ArrayDim < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((param_3 == (void *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = param_1->Offset_Internal;
      if ((param_1->ArrayDim < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((param_4 == (void *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar17 = (uint)*(char *)((longlong)param_1->Offset_Internal + (longlong)param_4);
      uVar13 = (uint)*(char *)((longlong)iVar12 + (longlong)param_3);
    }
    else {
      lVar16 = (**(code **)(param_1->_padding_ + 0x1e0))(param_1);
      if (lVar16 != 0) goto LAB_14a051f14;
      if ((param_1->ArrayDim < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((param_3 == (void *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = param_1->Offset_Internal;
      if ((param_1->ArrayDim < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((param_4 == (void *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar17 = (uint)*(byte *)((longlong)param_1->Offset_Internal + (longlong)param_4);
      uVar13 = (uint)*(byte *)((longlong)iVar12 + (longlong)param_3);
    }
    if ((char)uVar13 == (char)uVar17) {
      return;
    }
    *(char *)param_8 =
         (char)(int)((__real_3f800000 - param_9) * (float)(int)uVar13 + (float)(int)uVar17 * param_9
                    );
    return;
  }
  pFVar14 = FProperty::GetNameCPP(param_1,&local_28);
  pTVar15 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)&FWN_Ultra_Dynamic_Sky::PropsDisplayNameMap,pFVar14);
  bVar11 = false;
  puVar19 = &pTVar15->field_0x10;
  if (pTVar15 == (TTuple<FString,FString> *)0x0) {
    puVar19 = (undefined1 *)0x0;
  }
  if (puVar19 == (undefined1 *)0x0) {
LAB_14a05125d:
    bVar9 = false;
    bVar10 = false;
    if (!bVar11) goto LAB_14a051275;
  }
  else {
    pFVar14 = FProperty::GetNameCPP(param_1,&local_38);
    pTVar15 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&FWN_Ultra_Dynamic_Sky::PropsDisplayNameMap,pFVar14);
    if ((pTVar15 == (TTuple<FString,FString> *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (*(int *)&pTVar15->field_0x18 == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = *(wchar_t **)&pTVar15->field_0x10;
    }
    bVar11 = true;
    iVar12 = FGenericPlatformStricmp::Stricmp(pwVar18,L"Time of Day");
    if (iVar12 != 0) goto LAB_14a05125d;
    bVar10 = true;
  }
  bVar9 = bVar10;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14a051275:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar9) {
    BlendingTOD(this,param_1,param_3,param_4,param_9,param_8);
  }
  else {
    if ((param_1->ArrayDim < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((param_3 == (void *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ContainerPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2de,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar12 = param_1->Offset_Internal;
    if ((param_1->ArrayDim < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((param_4 == (void *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ContainerPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2de,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    dVar2 = *(double *)((longlong)iVar12 + (longlong)param_3);
    dVar3 = *(double *)((longlong)param_1->Offset_Internal + (longlong)param_4);
    if (dVar2 != dVar3) {
      *(double *)param_8 = (double)(__real_3f800000 - param_9) * dVar2 + (double)param_9 * dVar3;
    }
  }
  return;
}

// BlendingSturctProps @ 14a051f50

void __thiscall
UWN_UDS_Subsystem::BlendingSturctProps
          (UWN_UDS_Subsystem *this,UStruct *param_1,FProperty *param_2,void *param_3,void *param_4,
          void *param_5,float param_6)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  FProperty *pFVar4;
  bool bVar5;
  TFieldIterator<FProperty> local_58 [2];
  
  if (param_1 == (UStruct *)0x0) {
    local_58[0].Field = (FField *)0x0;
  }
  else {
    local_58[0].Field = param_1->ChildProperties;
  }
  local_58[0].InterfaceIndex = -1;
  local_58[0].bIncludeSuper = false;
  local_58[0].bIncludeDeprecated = true;
  local_58[0].bIncludeInterface = false;
  local_58[0].Struct = param_1;
  TFieldIterator<FProperty>::IterateToNext(local_58);
  pFVar4 = (FProperty *)local_58[0].Field;
  do {
    if (pFVar4 == (FProperty *)0x0) {
      return;
    }
    local_58[0].Field = (FField *)pFVar4;
    if (pFVar4 != (FProperty *)0x0) {
      if ((pFVar4->ArrayDim < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((param_3 == (void *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = pFVar4->Offset_Internal;
      if ((pFVar4->ArrayDim < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((param_4 == (void *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = pFVar4->Offset_Internal;
      if ((pFVar4->ArrayDim < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((param_5 == (void *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      BlendingPropByType(this,pFVar4,pFVar4,param_3,param_4,param_5,
                         (void *)((longlong)iVar1 + (longlong)param_3),
                         (void *)((longlong)iVar2 + (longlong)param_4),
                         (void *)((longlong)pFVar4->Offset_Internal + (longlong)param_5),param_6);
    }
    local_58[0].Field = (local_58[0].Field)->Next;
    TFieldIterator<FProperty>::IterateToNext(local_58);
    pFVar4 = (FProperty *)local_58[0].Field;
  } while( true );
}

// BlendingTOD @ 14a0521d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UWN_UDS_Subsystem::BlendingTOD
          (UWN_UDS_Subsystem *this,FProperty *param_1,void *param_2,void *param_3,float param_4,
          void *param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  
  if (param_1->ArrayDim < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2 == (void *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->Offset_Internal;
  if (param_1->ArrayDim < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_3 == (void *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContainerPtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2de,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  dVar4 = *(double *)((longlong)iVar1 + (longlong)param_2);
  dVar5 = *(double *)((longlong)param_1->Offset_Internal + (longlong)param_3);
  if (dVar4 != dVar5) {
    if (__real_4092c00000000000 <
        (double)CONCAT44((uint)((ulonglong)(dVar4 - dVar5) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar4 - dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      if (dVar4 <= dVar5) {
        dVar4 = dVar4 + __real_40a2c00000000000;
      }
      else {
        dVar5 = dVar5 + __real_40a2c00000000000;
      }
    }
    dVar4 = (double)(__real_3f800000 - param_4) * dVar4 + (double)param_4 * dVar5;
    if (__real_40a2c00000000000 < dVar4) {
      dVar4 = dVar4 + ___real_c0a2c00000000000;
    }
    *(double *)param_5 = dVar4;
  }
  return;
}

// CheckDawnDuskChanged @ 14a0526f0

void __thiscall UWN_UDS_Subsystem::CheckDawnDuskChanged(UWN_UDS_Subsystem *this)

{
  UObject *pUVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
  *pTVar6;
  EWN_UDS_TimeBand EVar7;
  bool bVar8;
  uint uVar9;
  FProperty *this_00;
  FProperty *this_01;
  FProperty *this_02;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  UObject *pUVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  ForAnyElementType FVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  uint *puVar23;
  TMap<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
  *pTVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_238 [8];
  UObject *local_230;
  int iStack_228;
  uint uStack_224;
  undefined1 *local_220;
  undefined4 uStack_218;
  int iStack_214;
  int local_210;
  int iStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  FWeakObjectPtr local_200;
  FWeakObjectPtr local_1f8;
  TBitArray<FDefaultBitArrayAllocator> *local_1f0;
  TMap<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
  *local_1e8;
  TMap<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
  *local_1e0;
  int iStack_1d8;
  uint uStack_1d4;
  undefined1 *local_1d0;
  undefined4 uStack_1c8;
  int iStack_1c4;
  int local_1c0;
  undefined4 uStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  FString local_190;
  FString local_180;
  UObject *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  TMap<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  UObject *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  TMap<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined4 local_94;
  int local_74;
  int local_54;
  
  ::FString::FString(&local_180,L"Dawn Time");
  ::FString::FString(&local_190,L"Dusk Time");
  pwVar15 = L"";
  if (sPropNameTOD.Data.ArrayNum != 0) {
    pwVar15 = (wchar_t *)sPropNameTOD.Data.AllocatorInstance;
  }
  this_00 = FindFProperty<FProperty>
                      ((UStruct *)((this->UDS).field0_0x0.DebugPtr)->_padding_,pwVar15,Default);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_180.Data.ArrayNum != 0) {
    FVar16.Data = local_180.Data.AllocatorInstance.Data;
  }
  this_01 = FindFProperty<FProperty>
                      ((UStruct *)((this->UDS).field0_0x0.DebugPtr)->_padding_,
                       (wchar_t *)FVar16.Data,Default);
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_190.Data.ArrayNum != 0) {
    FVar16.Data = local_190.Data.AllocatorInstance.Data;
  }
  this_02 = FindFProperty<FProperty>
                      ((UStruct *)((this->UDS).field0_0x0.DebugPtr)->_padding_,
                       (wchar_t *)FVar16.Data,Default);
  if (((this_00 != (FProperty *)0x0) && (this_01 != (FProperty *)0x0)) &&
     (this_02 != (FProperty *)0x0)) {
    pdVar10 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        (this_00,(UObject *)(this->UDS).field0_0x0.DebugPtr,0);
    pdVar11 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        (this_01,(UObject *)(this->UDS).field0_0x0.DebugPtr,0);
    pdVar12 = FProperty::ContainerUObjectPtrToValuePtrInternal
                        (this_02,(UObject *)(this->UDS).field0_0x0.DebugPtr,0);
    if (((pdVar10 != (double *)0x0) && (pdVar11 != (double *)0x0)) && (pdVar12 != (double *)0x0)) {
      if ((*pdVar10 < *pdVar11) || (EVar7 = DayTime, *pdVar12 <= *pdVar10)) {
        EVar7 = NightTime;
      }
      this->CurrentTimeBand = EVar7;
      if (EVar7 != this->PrevTimeBand) {
        iVar17 = 0;
        pTVar24 = &this->AllReactComponentsPerType;
        pTVar25 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &(this->AllReactComponentsPerType).field_0x10;
        this->bHasToUpdateTransitionRatio = true;
        iVar3 = *(int *)&(this->AllReactComponentsPerType).field_0x28;
        iVar22 = 0;
        uVar9 = 1;
        local_1f0 = pTVar25;
        local_1e8 = pTVar24;
        if (EVar7 != DayTime) {
          iStack_214 = 0;
          iStack_228 = iVar17;
          if (iVar3 != 0) {
            puVar23 = *(uint **)&(this->AllReactComponentsPerType).field_0x20;
            if (puVar23 == (uint *)0x0) {
              puVar23 = (uint *)pTVar25;
            }
            uVar19 = *puVar23;
            while (uVar19 == 0) {
              lVar14 = (longlong)iStack_228;
              iVar22 = iVar22 + 0x20;
              iStack_228 = iStack_228 + 1;
              iStack_214 = iVar3;
              if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_228)
              goto LAB_14a052d5d;
              uVar19 = puVar23[lVar14 + 1];
            }
            uVar9 = -uVar19 & uVar19;
            uVar2 = (ulonglong)uVar9 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            local_1a0 = (int)lVar14;
            iStack_214 = local_1a0 + -1 + iVar22;
            if (iVar3 < iStack_214) {
              iStack_214 = iVar3;
            }
          }
LAB_14a052d5d:
          uVar19 = *(uint *)&(this->AllReactComponentsPerType).field_0x28;
          iStack_20c = local_54;
          uVar18 = uVar19 & 0xffffffe0;
          iStack_208 = *(int *)&(this->AllReactComponentsPerType).field_0x8 -
                       *(int *)&(this->AllReactComponentsPerType).field_0x34;
          TStack_d8._padding_ = CONCAT44(uVar9,iStack_228);
          uStack_218 = 0xffffffff;
          TStack_d8.CurrentBitIndex = iStack_214;
          TStack_d8.UnvisitedBitMask = 0xffffffff;
          iVar17 = (int)uVar19 >> 5;
          TStack_d8._28_4_ = local_54;
          TStack_d8.BaseBitIndex = iVar22;
          uStack_b8 = CONCAT44(uStack_204,iStack_208);
          local_230 = (UObject *)pTVar24;
          uStack_224 = uVar9;
          local_220 = (undefined1 *)pTVar25;
          local_210 = iVar22;
          local_e0 = pTVar24;
          TStack_d8.Array = pTVar25;
          if ((((int)uVar19 < 0) || (iVar3 < (int)uVar19)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar9 = *(uint *)&(this->AllReactComponentsPerType).field_0x28;
          if (uVar19 != uVar9) {
            puVar20 = *(undefined1 **)&(this->AllReactComponentsPerType).field_0x20;
            if (puVar20 == (undefined1 *)0x0) {
              puVar20 = (undefined1 *)pTVar25;
            }
            uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar17 * 4);
            while (uVar19 == 0) {
              lVar14 = (longlong)iVar17;
              uVar18 = uVar18 + 0x20;
              iVar17 = iVar17 + 1;
              uVar19 = uVar9;
              if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
              goto LAB_14a052e80;
              uVar19 = *(uint *)(puVar20 + lVar14 * 4 + 4);
            }
            uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
            lVar14 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            local_19c = (int)lVar14;
            uVar19 = local_19c + -1 + uVar18;
            if ((int)uVar9 < (int)uVar19) {
              uVar19 = uVar9;
            }
          }
LAB_14a052e80:
          do {
            pTVar6 = local_e0;
            if (*(int *)&local_e0->field_0x8 - *(int *)&local_e0->field_0x34 != (int)uStack_b8) {
              local_res20[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<UClass_*,TObjectPtr<UWN_ReactComponentContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
            }
            if (((TStack_d8.CurrentBitIndex == uVar19) && (TStack_d8.Array == pTVar25)) &&
               (pTVar6 == pTVar24)) goto LAB_14a053149;
            pUVar13 = *(UObject **)
                       (*(longlong *)pTVar6 + 8 + (longlong)TStack_d8.CurrentBitIndex * 0x18);
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pUVar13 != (UObject *)0x0) goto LAB_14a052ef4;
            }
            else if (pUVar13 != (UObject *)0x0) {
              UE::GC::MarkAsReachable(pUVar13);
LAB_14a052ef4:
              iVar3 = *(int *)(pUVar13 + 2);
              puVar20 = &pUVar13[1].field_0x10;
              iStack_228 = 0;
              pUVar1 = pUVar13 + 1;
              local_210 = 0;
              uStack_224 = 1;
              iStack_214 = 0;
              if (iVar3 != 0) {
                puVar23 = (uint *)puVar20;
                if (*(uint **)&pUVar13[1].field_0x20 != (uint *)0x0) {
                  puVar23 = *(uint **)&pUVar13[1].field_0x20;
                }
                uVar9 = *puVar23;
                while (uVar9 == 0) {
                  lVar14 = (longlong)iStack_228;
                  local_210 = local_210 + 0x20;
                  iStack_228 = iStack_228 + 1;
                  iStack_214 = iVar3;
                  if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_228)
                  goto LAB_14a052f7e;
                  uVar9 = puVar23[lVar14 + 1];
                }
                uStack_224 = -uVar9 & uVar9;
                uVar2 = (ulonglong)uStack_224 * 2 + 1;
                lVar14 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                  }
                }
                local_198 = (int)lVar14;
                iStack_214 = local_210 + -1 + local_198;
                if (iVar3 < iStack_214) {
                  iStack_214 = iVar3;
                }
              }
LAB_14a052f7e:
              uVar9 = *(uint *)(pUVar13 + 2);
              iStack_20c = iStack_1c4;
              iStack_208 = *(int *)&pUVar13[1].field_0x8 - *(int *)&pUVar13[2].field_0xc;
              uVar18 = uVar9 & 0xffffffe0;
              TStack_108._padding_ = CONCAT44(uStack_224,iStack_228);
              uStack_218 = 0xffffffff;
              TStack_108.CurrentBitIndex = iStack_214;
              TStack_108.UnvisitedBitMask = 0xffffffff;
              iVar22 = (int)uVar9 >> 5;
              TStack_108._28_4_ = iStack_1c4;
              TStack_108.BaseBitIndex = local_210;
              uStack_e8 = CONCAT44(uStack_204,iStack_208);
              local_230 = pUVar1;
              local_220 = puVar20;
              local_110 = pUVar1;
              TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar20;
              if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x7af,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar4 = *(uint *)(pUVar13 + 2);
              if (uVar9 != uVar4) {
                puVar21 = puVar20;
                if (*(undefined1 **)&pUVar13[1].field_0x20 != (undefined1 *)0x0) {
                  puVar21 = *(undefined1 **)&pUVar13[1].field_0x20;
                }
                uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar22 * 4);
                while (uVar9 == 0) {
                  lVar14 = (longlong)iVar22;
                  uVar18 = uVar18 + 0x20;
                  iVar22 = iVar22 + 1;
                  uVar9 = uVar4;
                  if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
                  goto LAB_14a053090;
                  uVar9 = *(uint *)(puVar21 + lVar14 * 4 + 4);
                }
                uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
                lVar14 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                  }
                }
                local_194 = (int)lVar14;
                uVar9 = (uVar18 - 1) + local_194;
                if ((int)uVar4 < (int)uVar9) {
                  uVar9 = uVar4;
                }
              }
LAB_14a053090:
              while( true ) {
                pUVar13 = local_110;
                if (*(int *)&local_110->field_0x8 - *(int *)&local_110[1].field_0xc !=
                    (int)uStack_e8) {
                  local_238[0] = 0;
                  `TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_TODReactComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_238);
                }
                if (((TStack_108.CurrentBitIndex == uVar9) &&
                    (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar20)) &&
                   (pTVar24 = local_1e8, pTVar25 = local_1f0, pUVar13 == pUVar1)) break;
                local_1f8 = *(FWeakObjectPtr *)
                             (*(longlong *)pUVar13 + (longlong)TStack_108.CurrentBitIndex * 0x10);
                bVar8 = FWeakObjectPtr::IsValid(&local_1f8);
                if (bVar8) {
                  pUVar13 = FWeakObjectPtr::Get(&local_1f8);
                  (**(code **)(*(longlong *)pUVar13 + 0x500))(pUVar13);
                  FWN_NightTimeStartDelegate_DelegateWrapper
                            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                             &pUVar13[4].field_0x20);
                }
                TStack_108.UnvisitedBitMask =
                     TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
              }
            }
            TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
          } while( true );
        }
        iStack_1c4 = 0;
        iStack_1d8 = iVar17;
        if (iVar3 != 0) {
          puVar23 = *(uint **)&(this->AllReactComponentsPerType).field_0x20;
          if (puVar23 == (uint *)0x0) {
            puVar23 = (uint *)pTVar25;
          }
          uVar19 = *puVar23;
          while (uVar19 == 0) {
            lVar14 = (longlong)iStack_1d8;
            iVar22 = iVar22 + 0x20;
            iStack_1d8 = iStack_1d8 + 1;
            iStack_1c4 = iVar3;
            if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1d8)
            goto LAB_14a05290d;
            uVar19 = puVar23[lVar14 + 1];
          }
          uVar9 = -uVar19 & uVar19;
          uVar2 = (ulonglong)uVar9 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_1b0 = (int)lVar14;
          iStack_1c4 = iVar22 + -1 + local_1b0;
          if (iVar3 < iStack_1c4) {
            iStack_1c4 = iVar3;
          }
        }
LAB_14a05290d:
        uVar19 = *(uint *)&(this->AllReactComponentsPerType).field_0x28;
        uStack_1bc = local_94;
        uVar18 = uVar19 & 0xffffffe0;
        iStack_1b8 = *(int *)&(this->AllReactComponentsPerType).field_0x8 -
                     *(int *)&(this->AllReactComponentsPerType).field_0x34;
        TStack_138._padding_ = CONCAT44(uVar9,iStack_1d8);
        uStack_1c8 = 0xffffffff;
        TStack_138.CurrentBitIndex = iStack_1c4;
        TStack_138.UnvisitedBitMask = 0xffffffff;
        iVar17 = (int)uVar19 >> 5;
        TStack_138._28_4_ = local_94;
        TStack_138.BaseBitIndex = iVar22;
        uStack_118 = CONCAT44(uStack_1b4,iStack_1b8);
        local_1e0 = pTVar24;
        uStack_1d4 = uVar9;
        local_1d0 = (undefined1 *)pTVar25;
        local_1c0 = iVar22;
        local_140 = pTVar24;
        TStack_138.Array = pTVar25;
        if ((((int)uVar19 < 0) || (iVar3 < (int)uVar19)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar9 = *(uint *)&(this->AllReactComponentsPerType).field_0x28;
        if (uVar19 != uVar9) {
          puVar20 = *(undefined1 **)&(this->AllReactComponentsPerType).field_0x20;
          if (puVar20 == (undefined1 *)0x0) {
            puVar20 = (undefined1 *)pTVar25;
          }
          uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar17 * 4);
          while (uVar19 == 0) {
            lVar14 = (longlong)iVar17;
            uVar18 = uVar18 + 0x20;
            iVar17 = iVar17 + 1;
            uVar19 = uVar9;
            if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_14a052a20;
            uVar19 = *(uint *)(puVar20 + lVar14 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_1ac = (int)lVar14;
          uVar19 = local_1ac + -1 + uVar18;
          if ((int)uVar9 < (int)uVar19) {
            uVar19 = uVar9;
          }
        }
LAB_14a052a20:
        do {
          pTVar6 = local_140;
          if (*(int *)&local_140->field_0x8 - *(int *)&local_140->field_0x34 != (int)uStack_118) {
            local_res10[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<UClass_*,TObjectPtr<UWN_ReactComponentContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (((TStack_138.CurrentBitIndex == uVar19) && (TStack_138.Array == pTVar25)) &&
             (pTVar6 == pTVar24)) goto LAB_14a052cd4;
          pUVar13 = *(UObject **)
                     (*(longlong *)pTVar6 + 8 + (longlong)TStack_138.CurrentBitIndex * 0x18);
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar13 != (UObject *)0x0) goto LAB_14a052a8b;
          }
          else if (pUVar13 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar13);
LAB_14a052a8b:
            iVar3 = *(int *)(pUVar13 + 2);
            puVar20 = &pUVar13[1].field_0x10;
            iStack_228 = 0;
            pUVar1 = pUVar13 + 1;
            local_210 = 0;
            uStack_224 = 1;
            iStack_214 = 0;
            if (iVar3 != 0) {
              puVar23 = (uint *)puVar20;
              if (*(uint **)&pUVar13[1].field_0x20 != (uint *)0x0) {
                puVar23 = *(uint **)&pUVar13[1].field_0x20;
              }
              uVar9 = *puVar23;
              while (uVar9 == 0) {
                lVar14 = (longlong)iStack_228;
                local_210 = local_210 + 0x20;
                iStack_228 = iStack_228 + 1;
                iStack_214 = iVar3;
                if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_228)
                goto LAB_14a052b0e;
                uVar9 = puVar23[lVar14 + 1];
              }
              uStack_224 = -uVar9 & uVar9;
              uVar2 = (ulonglong)uStack_224 * 2 + 1;
              lVar14 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              local_1a8 = (int)lVar14;
              iStack_214 = local_210 + -1 + local_1a8;
              if (iVar3 < iStack_214) {
                iStack_214 = iVar3;
              }
            }
LAB_14a052b0e:
            uVar9 = *(uint *)(pUVar13 + 2);
            iStack_20c = local_74;
            iStack_208 = *(int *)&pUVar13[1].field_0x8 - *(int *)&pUVar13[2].field_0xc;
            uVar18 = uVar9 & 0xffffffe0;
            TStack_168._padding_ = CONCAT44(uStack_224,iStack_228);
            uStack_218 = 0xffffffff;
            TStack_168.CurrentBitIndex = iStack_214;
            TStack_168.UnvisitedBitMask = 0xffffffff;
            iVar22 = (int)uVar9 >> 5;
            TStack_168._28_4_ = local_74;
            TStack_168.BaseBitIndex = local_210;
            uStack_148 = CONCAT44(uStack_204,iStack_208);
            local_230 = pUVar1;
            local_220 = puVar20;
            local_170 = pUVar1;
            TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar20;
            if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar4 = *(uint *)(pUVar13 + 2);
            if (uVar9 != uVar4) {
              puVar21 = puVar20;
              if (*(undefined1 **)&pUVar13[1].field_0x20 != (undefined1 *)0x0) {
                puVar21 = *(undefined1 **)&pUVar13[1].field_0x20;
              }
              uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar22 * 4);
              while (uVar9 == 0) {
                lVar14 = (longlong)iVar22;
                uVar18 = uVar18 + 0x20;
                iVar22 = iVar22 + 1;
                uVar9 = uVar4;
                if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
                goto LAB_14a052c20;
                uVar9 = *(uint *)(puVar21 + lVar14 * 4 + 4);
              }
              uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
              lVar14 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              local_1a4 = (int)lVar14;
              uVar9 = (uVar18 - 1) + local_1a4;
              if ((int)uVar4 < (int)uVar9) {
                uVar9 = uVar4;
              }
            }
LAB_14a052c20:
            while( true ) {
              pUVar13 = local_170;
              if (*(int *)&local_170->field_0x8 - *(int *)&local_170[1].field_0xc != (int)uStack_148
                 ) {
                local_res18[0] = 0;
                `TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_TODReactComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
              }
              if (((TStack_168.CurrentBitIndex == uVar9) &&
                  (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar20)) &&
                 (pTVar24 = local_1e8, pTVar25 = local_1f0, pUVar13 == pUVar1)) break;
              local_200 = *(FWeakObjectPtr *)
                           (*(longlong *)pUVar13 + (longlong)TStack_168.CurrentBitIndex * 0x10);
              bVar8 = FWeakObjectPtr::IsValid(&local_200);
              if (bVar8) {
                pUVar13 = FWeakObjectPtr::Get(&local_200);
                (**(code **)(*(longlong *)pUVar13 + 0x508))(pUVar13);
                FWN_DayTimeStartDelegate_DelegateWrapper
                          ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                           &pUVar13[5].field_0x10);
              }
              TStack_168.UnvisitedBitMask =
                   TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
            }
          }
          TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
        } while( true );
      }
    }
  }
  goto LAB_14a053183;
LAB_14a053149:
  FWN_UDS_OnNightTimeStarted_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnNightTimeStarted);
  goto LAB_14a05315c;
LAB_14a052cd4:
  FWN_UDS_OnDayTimeStarted_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnDayTimeStarted);
LAB_14a05315c:
  this->PrevTimeBand = this->CurrentTimeBand;
LAB_14a053183:
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  return;
}

// Deinitialize @ 14a053b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWN_UDS_Subsystem::Deinitialize(UWN_UDS_Subsystem *this)

{
  undefined1 *puVar1;
  TMap<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
  *this_00;
  int iVar2;
  AWN_Ultra_Sky *pAVar3;
  AWN_UDS_GlobalVolume *pAVar4;
  code *pcVar5;
  bool bVar6;
  UWorld *this_01;
  UWN_CommonSubsystem *pUVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  FName local_res8;
  FName local_res10;
  
  this->OverridenTOD = -1.0;
  this_01 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((this_01 == (UWorld *)0x0) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7962263059135725672>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                         ,0x68,"world != nullptr"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar7 = UWorld::GetSubsystem<UWN_CommonSubsystem>(this_01);
  if (pUVar7 == (UWN_CommonSubsystem *)0x0) goto LAB_14a053d56;
  pcVar8 = strstr("&UWN_UDS_Subsystem::OnVolumeEnter","::");
  pcVar10 = &DAT_00000002;
  if (pcVar8 == (char *)0x0) {
LAB_14a053c6a:
    pcVar9 = &DAT_00000002;
LAB_14a053c6d:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    do {
      pcVar9 = pcVar8;
      pcVar8 = strstr(pcVar9 + 1,"::");
    } while (pcVar8 != (char *)0x0);
    if (pcVar9 == (char *)0x0) goto LAB_14a053c6a;
    pcVar9 = pcVar9 + 2;
    if (*pcVar9 == '0') goto LAB_14a053c6d;
  }
  ::FName::FName(&local_res8,pcVar9);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar7->OnEnter,
             (UObject *)this,local_res8);
  pcVar8 = strstr("&UWN_UDS_Subsystem::OnVolumeLeave","::");
  if (pcVar8 == (char *)0x0) {
LAB_14a053d0a:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    do {
      pcVar9 = pcVar8;
      pcVar8 = strstr(pcVar9 + 1,"::");
    } while (pcVar8 != (char *)0x0);
    if ((pcVar9 == (char *)0x0) || (pcVar10 = pcVar9 + 2, pcVar9[2] == '0')) goto LAB_14a053d0a;
  }
  ::FName::FName(&local_res10,pcVar10);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar7->OnLeave,
             (UObject *)this,local_res10);
LAB_14a053d56:
  pAVar3 = (this->UDS).field0_0x0.DebugPtr;
  if (pAVar3 != (AWN_Ultra_Sky *)0x0) {
    (pAVar3->UDS_Subsystem).WeakPtr = (FWeakObjectPtr)0x0;
  }
  pAVar4 = (this->UDS_GlobalVolume).field0_0x0.DebugPtr;
  if (pAVar4 != (AWN_UDS_GlobalVolume *)0x0) {
    (pAVar4->UDS_Subsystem).WeakPtr = (FWeakObjectPtr)0x0;
  }
  this_00 = &this->AllReactComponentsPerType;
  bVar6 = 1 < *(int *)&(this->AllReactComponentsPerType).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UClass_*,TObjectPtr<UWN_ReactComponentContext>_>,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UClass_*,TObjectPtr<UWN_ReactComponentContext>_>,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->AllReactComponentsPerType).field_0xc;
  *(undefined4 *)&(this->AllReactComponentsPerType).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AllReactComponentsPerType).field_0x34 = 0;
  *(undefined4 *)&(this->AllReactComponentsPerType).field_0x30 = 0xffffffff;
  iVar2 = *(int *)&(this->AllReactComponentsPerType).field_0x2c;
  *(undefined4 *)&(this->AllReactComponentsPerType).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->AllReactComponentsPerType).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AllReactComponentsPerType).field_0x10
               ,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AllReactComponentsPerType).field_0x48 = 1;
    TSet<TTuple<UClass_*,TObjectPtr<UWN_ReactComponentContext>_>,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UClass_*,TObjectPtr<UWN_ReactComponentContext>_>,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  UTickableWorldSubsystem::Deinitialize((UTickableWorldSubsystem *)this);
  if ((byte)Env._0_1_ < 5) {
    return;
  }
  UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&Env);
  return;
}

// EnableUpdatedTOD @ 14a053f70

void __thiscall UWN_UDS_Subsystem::EnableUpdatedTOD(UWN_UDS_Subsystem *this)

{
  code *pcVar1;
  bool bVar2;
  double local_res8 [4];
  
  if ((this->UDS).field0_0x0.DebugPtr != (AWN_Ultra_Sky *)0x0) {
    local_res8[0] = this->OverridenTOD;
    if (0.0 <= local_res8[0]) {
      SetTODCurrentSetting(this,local_res8);
      return;
    }
    if ((this->CurrentState).VolumeSetting == (FWN_UDS_VolumeSetting *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7962263059135726493>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                         ,0x39d,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (((this->CurrentState).VolumeSetting)->TODFlowMode != Local) {
      local_res8[0] = this->GlobalTOD;
      SetTODCurrentSetting(this,local_res8);
    }
  }
  return;
}

// GetStatId @ 14a054870

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UWN_UDS_Subsystem::GetStatId(UWN_UDS_Subsystem *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_UDS_Subsystem::GetStatId(void)const_::_2_::FStat_UWN_UDS_Subsystem>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UWN_UDS_Subsystem ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_UDS_Subsystem::GetStatId(void)const_::_2_::FStat_UWN_UDS_Subsystem>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"UWN_UDS_Subsystem");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UWN_UDS_Subsystem,*pFVar1,
                   L"UWN_UDS_Subsystem","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_UWN_UDS_Subsystem;
  if (StatPtr_UWN_UDS_Subsystem ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_UDS_Subsystem::GetStatId(void)const_::_2_::FStat_UWN_UDS_Subsystem>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UWN_UDS_Subsystem");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_UDS_Subsystem::GetStatId(void)const_::_2_::FStat_UWN_UDS_Subsystem>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UWN_UDS_Subsystem,*pFVar1,
                         L"UWN_UDS_Subsystem","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetTickableGameObjectWorld @ 14a0549d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UWN_UDS_Subsystem::GetTickableGameObjectWorld(UWN_UDS_Subsystem *this)

{
  UWorld *pUVar1;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)&this[-1].UDS_PropsExceptTODMap.field_0x48);
  return pUVar1;
}

// GetUDSTOD @ 14a0549e0

double __thiscall UWN_UDS_Subsystem::GetUDSTOD(UWN_UDS_Subsystem *this)

{
  AWN_Ultra_Sky *pAVar1;
  code *pcVar2;
  bool bVar3;
  FProperty *this_00;
  undefined8 *puVar4;
  atomic<unsigned_char> *paVar5;
  wchar_t *pwVar6;
  int iVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  pAVar1 = (this->UDS).field0_0x0.DebugPtr;
  if (pAVar1 == (AWN_Ultra_Sky *)0x0) {
    iVar7 = 0x25f;
    paVar5 = &bGEnsureHasExecuted<7962263059135726175>;
  }
  else {
    pwVar6 = L"";
    if (sPropNameTOD.Data.ArrayNum != 0) {
      pwVar6 = (wchar_t *)sPropNameTOD.Data.AllocatorInstance.Data;
    }
    this_00 = FindFProperty<FProperty>((UStruct *)pAVar1->_padding_,pwVar6,Default);
    if (this_00 != (FProperty *)0x0) {
      uVar9 = SUB84(__real_bff0000000000000,0);
      uVar10 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
      puVar4 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         (this_00,(UObject *)(this->UDS).field0_0x0.DebugPtr,0);
      if (puVar4 != (undefined8 *)0x0) {
        uVar9 = (undefined4)*puVar4;
        uVar10 = (undefined4)((ulonglong)*puVar4 >> 0x20);
      }
      return (double)CONCAT44(uVar10,uVar9);
    }
    iVar7 = 0x265;
    paVar5 = &bGEnsureHasExecuted<7962263059135726181>;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar5,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                     ,iVar7,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    dVar8 = (double)(*pcVar2)();
    return dVar8;
  }
  return __real_bff0000000000000;
}

// InitTODs @ 14a054ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UWN_UDS_Subsystem::InitTODs(UWN_UDS_Subsystem *this,double param_1,double param_2,double param_3)

{
  ulonglong *puVar1;
  FScriptContainerElement *pFVar2;
  AWN_Ultra_Sky *pAVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  FProperty *pFVar8;
  FScriptContainerElement *_Dst;
  wchar_t *pwVar9;
  longlong lVar10;
  ulonglong *puVar11;
  FScriptContainerElement *_Src;
  undefined1 auStackY_118 [32];
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  int local_c8;
  int local_c4 [3];
  undefined1 local_b8 [24];
  FString local_a0;
  double local_90;
  FString local_88;
  double local_78;
  FString local_70;
  double local_60;
  ulonglong local_58 [6];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_118;
  pAVar3 = (this->UDS).field0_0x0.DebugPtr;
  this->OverridenTOD = -1.0;
  this->GlobalTOD = param_1;
  if (pAVar3 != (AWN_Ultra_Sky *)0x0) {
    ::FString::FString((FString *)local_b8,L"Dawn Time");
    local_b8._16_8_ = param_2;
    ::FString::FString(&local_a0,L"Dusk Time");
    local_90 = param_3;
    ::FString::FString(&local_88,L"Day Length");
    local_78 = param_3 - param_2;
    ::FString::FString(&local_70,L"Night Length");
    lVar10 = 4;
    local_d0.Data = (FScriptContainerElement *)0x0;
    local_c8 = 4;
    local_60 = (__real_40a2c00000000000 - param_3) + param_2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,4,0,&local_d0,4,local_c4);
    ConstructItems<TTuple<FString_const_,double>,TTuple<FString_const_,double>,int>
              (local_d0.Data,(TTuple<FString_const_,double> *)local_b8,4);
    puVar11 = local_58;
    do {
      puVar1 = puVar11 + -3;
      puVar11 = puVar11 + -3;
      lVar10 = lVar10 + -1;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      iVar5 = local_c8;
    } while (lVar10 != 0);
    _Src = local_d0.Data + 0x10;
    pFVar2 = local_d0.Data + (longlong)local_c8 * 0x18;
    while( true ) {
      if (local_c8 != iVar5) {
        local_d8[0] = 0;
        `TCheckedPointerIterator<TTuple<FString_const_,double>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_d8);
      }
      if (_Src + -0x10 == pFVar2) break;
      if (*(int *)(_Src + -8) == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)(_Src + -0x10);
      }
      pFVar8 = FindFProperty<FProperty>
                         ((UStruct *)((this->UDS).field0_0x0.DebugPtr)->_padding_,pwVar9,Default);
      if (pFVar8 == (FProperty *)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7962263059135726155>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                           ,0x24b,"false");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_14a054d9d:
        _Src = _Src + 0x18;
      }
      else {
        pAVar3 = (this->UDS).field0_0x0.DebugPtr;
        cVar7 = (**(code **)(pFVar8->_padding_ + 0x70))(pFVar8);
        if (cVar7 != '\0') {
          (**(code **)(pFVar8->_padding_ + 0x88))(pFVar8,pAVar3,_Src);
          goto LAB_14a054d9d;
        }
        if (pFVar8->ArrayDim < 1) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (pAVar3 == (AWN_Ultra_Sky *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        _Dst = (FScriptContainerElement *)
               ((longlong)&pAVar3->_padding_ + (longlong)pFVar8->Offset_Internal);
        if (_Dst == _Src) goto LAB_14a054d9d;
        if (((uint)(int)pFVar8->PropertyFlags >> 0x1e & 1) == 0) {
          (**(code **)(pFVar8->_padding_ + 0xf0))(pFVar8,_Dst,_Src,pFVar8->ArrayDim);
          _Src = _Src + 0x18;
        }
        else {
          memcpy(_Dst,_Src,(longlong)pFVar8->ElementSize * (longlong)pFVar8->ArrayDim);
          _Src = _Src + 0x18;
        }
      }
    }
    this->bTODValueChange = true;
    DestructItems<TTuple<FString_const_,double>,int>
              ((TTuple<FString_const_,double> *)local_d0.Data,local_c8);
    if ((TTuple<FString_const_,double> *)local_d0.Data != (TTuple<FString_const_,double> *)0x0) {
      FMemory::Free(local_d0.Data);
    }
  }
  return;
}

// Initialize @ 14a054e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWN_UDS_Subsystem::Initialize(UWN_UDS_Subsystem *this,FSubsystemCollectionBase *param_1)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  undefined1 *puVar2;
  code *pcVar3;
  FProperty *this_00;
  bool bVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  UClass *pUVar8;
  FString *pFVar9;
  TTuple<FString,FString> *pTVar10;
  TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
  *this_01;
  TPairInitializer<FString_const_&,FWN_UDS_PropertyGroup_&&> *pTVar11;
  undefined1 *puVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  int iVar15;
  ForAnyElementType **ppFVar16;
  undefined1 local_res8 [16];
  TPairInitializer<FString_const_&,FWN_UDS_PropertyGroup_&&> local_res18;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  TFieldIterator<FProperty> local_108;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_f0;
  UClass *local_e0;
  undefined8 local_d8;
  FProperty *local_d0;
  TPairInitializer<FString_const_&,FWN_UDS_PropertyGroup_&&> local_c8;
  wchar_t *local_b8;
  undefined8 uStack_b0;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  ForAnyElementType *local_98;
  undefined8 *local_90;
  ForAnyElementType *local_88;
  undefined8 *local_80;
  ForAnyElementType *local_78;
  undefined8 *local_70;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  
  UTickableWorldSubsystem::Initialize((UTickableWorldSubsystem *)this,param_1);
  iStack_a0 = 0;
  uStack_b0._0_4_ = 0;
  uStack_b0._4_4_ = 0;
  local_b8 = (wchar_t *)0x0;
  if (sUDSPath.Data.ArrayNum == 0) {
    local_a8 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_a8 = sUDSPath.Data.AllocatorInstance.Data;
    if (sUDSPath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14a054e93;
  }
  sVar7 = wcslen((wchar_t *)local_a8);
  iStack_a0 = (int)sVar7;
LAB_14a054e93:
  pUVar8 = Z_Construct_UClass_UClass_NoRegister();
  local_58._12_4_ = uStack_9c;
  local_58.Size = iStack_a0;
  local_68.DataPtr = local_b8;
  local_68.Size = (int)uStack_b0;
  local_68._12_4_ = uStack_b0._4_4_;
  local_58.DataPtr = (wchar_t *)local_a8;
  pUVar8 = (UClass *)
           StaticLoadObject(pUVar8,(UObject *)0x0,&local_58,&local_68,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  this->UDS_BPClass = pUVar8;
  if (pUVar8 == (UClass *)0x0) {
    if (4 < (byte)Env._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&Env);
      return;
    }
  }
  else {
    FWN_Ultra_Dynamic_Sky::InitializePropsDisplayName();
    local_108.Struct = (UStruct *)FWN_Ultra_Dynamic_Sky::StaticStruct();
    if ((UScriptStruct *)local_108.Struct == (UScriptStruct *)0x0) {
      local_108.Field = (FField *)0x0;
    }
    else {
      local_108.Field = (FField *)((UScriptStruct *)local_108.Struct)->_padding_;
    }
    local_108.InterfaceIndex = -1;
    local_108.bIncludeSuper = true;
    local_108.bIncludeDeprecated = true;
    local_108.bIncludeInterface = false;
    TFieldIterator<FProperty>::IterateToNext(&local_108);
    this_00 = (FProperty *)local_108.Field;
    while (local_108.Field = (FField *)this_00, this_00 != (FProperty *)0x0) {
      if (this_00 != (FProperty *)0x0) {
        pFVar9 = FProperty::GetNameCPP(this_00,&local_48);
        pTVar10 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                          *)&FWN_Ultra_Dynamic_Sky::PropsDisplayNameMap,pFVar9);
        if ((pTVar10 == (TTuple<FString,FString> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_118.Data = (FScriptContainerElement *)0x0;
        local_110 = *(int *)&pTVar10->field_0x18;
        lVar13 = (longlong)local_110;
        _Src = *(void **)&pTVar10->field_0x10;
        if (local_110 == 0) {
          local_10c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_110,0,&local_118,local_110,&local_10c);
          memcpy(local_118.Data,_Src,lVar13 * 2);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        local_d8 = 0;
        local_d0 = this_00;
        if (local_110 == sPropNameTOD.Data.ArrayNum) {
          if (1 < local_110) {
            iVar5 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_118.Data,
                               (wchar_t *)sPropNameTOD.Data.AllocatorInstance.Data);
            bVar4 = iVar5 == 0;
            goto LAB_14a05507a;
          }
LAB_14a0550a3:
          local_88 = &local_118;
          this_01 = (TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                     *)&this->UDS_PropsOfTODMap;
          local_80 = &local_d8;
          ppFVar16 = &local_88;
          pTVar11 = (TPairInitializer<FString_const_&,FWN_UDS_PropertyGroup_&&> *)&local_res18.Value
          ;
        }
        else {
          bVar4 = sPropNameTOD.Data.ArrayNum + local_110 == 1;
LAB_14a05507a:
          if (bVar4) goto LAB_14a0550a3;
          local_98 = &local_118;
          this_01 = (TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                     *)&this->UDS_PropsExceptTODMap;
          local_90 = &local_d8;
          ppFVar16 = &local_98;
          pTVar11 = &local_res18;
        }
        TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FWN_UDS_PropertyGroup_&&>_>
                  (this_01,pTVar11,(bool *)ppFVar16);
        local_78 = &local_118;
        local_70 = &local_d8;
        TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FWN_UDS_PropertyGroup_&&>_>
                  ((TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                    *)&this->UDS_PropsMap,&local_c8,(bool *)&local_78);
        if (local_118.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data);
        }
      }
      local_108.Field = (FField *)this_00->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_108);
      this_00 = (FProperty *)local_108.Field;
    }
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this->OverridenTOD = -1.0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    pUVar8 = Z_Construct_UClass_UWN_TODReactComponent_NoRegister();
    GetDerivedClasses(pUVar8,&local_f0,true);
    iVar5 = local_f0.ArrayNum;
    pFVar1 = local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayNum * 8;
    FVar14.Data = local_f0.AllocatorInstance.Data;
    while( true ) {
      if (local_f0.ArrayNum != iVar5) {
        `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar14.Data == pFVar1) break;
      local_e0 = *(UClass **)FVar14.Data;
      if ((local_e0 != (UClass *)0x0) &&
         (pUVar8 = Z_Construct_UClass_UWN_TODReactComponent_NoRegister(), pUVar8 != (UClass *)0x0))
      {
        iVar15 = (int)pUVar8->_padding_;
        if (((int)local_e0->_padding_ < iVar15) ||
           ((longlong *)*(undefined1 **)(local_e0->_padding_ + (longlong)iVar15 * 8) !=
            &pUVar8->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          uVar6 = ((uint)((ulonglong)local_e0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_e0 >> 4))
                  * -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          if (*(int *)&(this->AllReactComponentsPerType).field_0x8 !=
              *(int *)&(this->AllReactComponentsPerType).field_0x34) {
            puVar2 = *(undefined1 **)&(this->AllReactComponentsPerType).field_0x40;
            puVar12 = &(this->AllReactComponentsPerType).field_0x38;
            if (puVar2 != (undefined1 *)0x0) {
              puVar12 = puVar2;
            }
            iVar15 = *(int *)(puVar12 +
                             (ulonglong)
                             (*(int *)&(this->AllReactComponentsPerType).field_0x48 - 1U &
                             (uVar6 >> 0x10 ^ uVar6)) * 4);
            if (iVar15 != -1) {
              lVar13 = *(longlong *)&this->AllReactComponentsPerType;
              do {
                if (*(UClass **)(lVar13 + (longlong)iVar15 * 0x18) == local_e0) {
                  if (((iVar15 != -1) && (lVar13 = lVar13 + (longlong)iVar15 * 0x18, lVar13 != 0))
                     && (lVar13 != -8)) goto LAB_14a055299;
                  break;
                }
                iVar15 = *(int *)(lVar13 + 0x10 + (longlong)iVar15 * 0x18);
              } while (iVar15 != -1);
            }
          }
          local_c8.Value =
               (FWN_UDS_PropertyGroup *)NewObject<UWN_ReactComponentContext>((UObject *)this);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UWN_ReactComponentContext *)local_c8.Value != (UWN_ReactComponentContext *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_c8.Value);
          }
          TMapBase<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
          ::Emplace<UClass_*_const_&,TObjectPtr<UWN_ReactComponentContext>_>
                    ((TMapBase<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
                      *)&this->AllReactComponentsPerType,&local_e0,
                     (TObjectPtr<UWN_ReactComponentContext> *)&local_c8.Value);
        }
      }
LAB_14a055299:
      FVar14.Data = FVar14.Data + 8;
    }
    if (4 < (byte)Env._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&Env);
    }
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
  }
  return;
}

// IsTickableInEditor @ 14a061a40

bool __thiscall UWN_UDS_Subsystem::IsTickableInEditor(UWN_UDS_Subsystem *this)

{
  return (bool)(~(byte)(*(uint *)&this[-1].OnDayTimeStarted >> 4) & 1);
}

// LogicallyEnterAfterDelay @ 14a061b50

bool __thiscall UWN_UDS_Subsystem::LogicallyEnterAfterDelay(UWN_UDS_Subsystem *this)

{
  double dVar1;
  FWN_UDS_VolumeSetting *pFVar2;
  bool bVar3;
  UObject *pUVar4;
  FString local_18;
  
  ::FString::FString(&local_18,L"Before Logical Entered");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  (this->PreviousLogicalVolume).WeakPtr = (this->CurrentLogicalVolume).WeakPtr;
  (this->CurrentLogicalVolume).WeakPtr = (this->CurrentPhysicalVolume).WeakPtr;
  bVar3 = TWeakObjectPtr<AWN_UDS_Volume,FWeakObjectPtr>::UEOpEquals
                    (&this->CurrentLogicalVolume,(void *)0x0);
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get(&(this->CurrentLogicalVolume).WeakPtr);
    bVar3 = StoreStates(this,(FWN_Ultra_Dynamic_Sky *)&pUVar4[0x11].field_0x18,
                        &(this->CurrentState).UDS_Setting);
    if ((bVar3) &&
       (pFVar2 = (this->CurrentState).VolumeSetting, pFVar2 != (FWN_UDS_VolumeSetting *)0x0)) {
      dVar1 = pFVar2->BlendingTime;
      this->CurrentBlendingTime = dVar1;
      if ((dVar1 == 0.0) || (pFVar2->BlendMode == None)) {
        this->CurrentBlendingTime = -1.0;
      }
      this->DirtyMode = this->DirtyMode | All;
      return true;
    }
  }
  return false;
}

// OnChangedUDS_Setting @ 14a061c20

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
UWN_UDS_Subsystem::OnChangedUDS_Setting
          (UWN_UDS_Subsystem *this,AWN_UDS_Volume *param_1,FProperty *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EWN_UDS_DirtyMode EVar4;
  uint uVar5;
  int iVar6;
  AWN_UDS_Volume *pAVar7;
  FString *pFVar8;
  TTuple<FString,FString> *pTVar9;
  UObject *pUVar10;
  longlong lVar11;
  FProperty *this_00;
  UWorld *pUVar12;
  ForAnyElementType FVar13;
  void *pvVar14;
  double local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->CurrentLogicalVolume).WeakPtr);
  if (!bVar3) {
    return;
  }
  pAVar7 = (AWN_UDS_Volume *)FWeakObjectPtr::Get(&(this->CurrentLogicalVolume).WeakPtr);
  if (param_1 != pAVar7) {
    return;
  }
  FProperty::GetNameCPP(param_2,&local_48);
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar13.Data = local_48.Data.AllocatorInstance.Data;
  }
  iVar6 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar13.Data);
  iVar6 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&FWN_Ultra_Dynamic_Sky::PropsDisplayNameMap,uVar5,&local_48);
  if (iVar6 != -1) {
    pFVar8 = FProperty::GetNameCPP(param_2,&local_28);
    pTVar9 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)&FWN_Ultra_Dynamic_Sky::PropsDisplayNameMap,pFVar8);
    if ((pTVar9 == (TTuple<FString,FString> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = *(int *)&pTVar9->field_0x18 + -1;
    if (*(int *)&pTVar9->field_0x18 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange(&local_48,*(wchar_t **)&pTVar9->field_0x10,iVar6);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pUVar10 = FWeakObjectPtr::Get(&(this->CurrentLogicalVolume).WeakPtr);
  if ((param_2->ArrayDim < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3))
  {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((&pUVar10[0x11].field_0x18 == (undefined1 *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar14 = &pUVar10[0x11].field_0x18 + param_2->Offset_Internal;
  if (pvVar14 == (void *)0x0) goto LAB_14a061e60;
  iVar6 = local_48.Data.ArrayNum + -1;
  FVar13.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar13.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar13.Data);
  iVar6 = TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                      *)&this->UDS_PropsMap,uVar5,&local_48);
  if (iVar6 == -1) goto LAB_14a061e60;
  lVar1 = *(longlong *)&this->UDS_PropsMap + (longlong)iVar6 * 0x28;
  lVar11 = lVar1 + 0x10;
  if (lVar1 == 0) {
    lVar11 = 0;
  }
  if ((lVar11 == 0) || (*(FProperty **)(lVar11 + 8) == (FProperty *)0x0)) goto LAB_14a061e60;
  FProperty::SetValue_InContainer
            (*(FProperty **)(lVar11 + 8),&(this->CurrentState).UDS_Setting,pvVar14);
  if (local_48.Data.ArrayNum == sPropNameTOD.Data.ArrayNum) {
    if (1 < local_48.Data.ArrayNum) {
      iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_48.Data.AllocatorInstance.Data,
                         (wchar_t *)sPropNameTOD.Data.AllocatorInstance.Data);
      bVar3 = iVar6 == 0;
      goto LAB_14a061e3f;
    }
    EVar4 = this->DirtyMode;
LAB_14a061e58:
    EVar4 = EVar4 | TOD;
  }
  else {
    bVar3 = local_48.Data.ArrayNum + sPropNameTOD.Data.ArrayNum == 1;
LAB_14a061e3f:
    EVar4 = this->DirtyMode;
    if (bVar3) goto LAB_14a061e58;
    EVar4 = EVar4 | AllExceptTOD;
  }
  this->DirtyMode = EVar4;
LAB_14a061e60:
  ::FString::FString(&local_38,"Last Editor Tick Time");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar13.Data = local_38.Data.AllocatorInstance.Data;
  }
  this_00 = FindFProperty<FProperty>
                      ((UStruct *)((this->UDS).field0_0x0.DebugPtr)->_padding_,
                       (wchar_t *)FVar13.Data,Default);
  if (this_00 != (FProperty *)0x0) {
    pUVar12 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    local_res8 = UKismetSystemLibrary::GetGameTimeInSeconds((UObject *)pUVar12);
    local_res8 = local_res8 - __real_3ff0000000000000;
    FProperty::SetValue_InContainer(this_00,(this->UDS).field0_0x0.DebugPtr,&local_res8);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// OnVolumeEnter @ 14a0626a0

void __thiscall
UWN_UDS_Subsystem::OnVolumeEnter
          (UWN_UDS_Subsystem *this,EWN_VolumeObserverMode param_1,TVector<double> *param_2,
          TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *param_3)

{
  OnVolumeEnterLeaveChange(this,param_1,param_3,true,__real_bff0000000000000);
  return;
}

// OnVolumeEnterLeaveChange @ 14a0626d0

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
UWN_UDS_Subsystem::OnVolumeEnterLeaveChange
          (UWN_UDS_Subsystem *this,EWN_VolumeObserverMode param_1,
          TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *param_2,bool param_3,double param_4)

{
  ulonglong uVar1;
  double dVar2;
  uchar uVar3;
  int iVar4;
  uint uVar5;
  AWN_UDS_GlobalVolume *pAVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  ForElementType<unsigned_int> FVar10;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  bool bVar13;
  UWorld *pUVar14;
  UObject *pUVar15;
  UClass *pUVar16;
  AWN_UDS_GlobalVolume *pAVar17;
  UObject *pUVar18;
  int iVar19;
  ForElementType<unsigned_int> FVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 local_148 [4];
  FWeakObjectPtr local_144;
  FWeakObjectPtr local_13c;
  ForElementType<unsigned_int> local_130;
  FWeakObjectPtr local_128;
  int local_120;
  int local_11c;
  UObject *local_118;
  AWN_UDS_GlobalVolume *local_110;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_108;
  int iStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [2];
  undefined4 local_4c;
  
  if (param_1 == this->ObserverMode) {
    pUVar14 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    if ((pUVar14 == (UWorld *)0x0) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7962263059135725802>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                            ,0xea,"world != nullptr"), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    dVar9 = __real_bff0000000000000;
    uVar3 = (pUVar14->WorldType).Value;
    if ((uVar3 == '\x03') || (uVar3 == '\x01')) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    if (((this->UDS).field0_0x0.DebugPtr != (AWN_Ultra_Sky *)0x0) &&
       ((__real_bff0000000000000 == this->OverridenTOD || (!bVar12)))) {
      iVar4 = *(int *)&(param_2->Elements).field_0x28;
      pUVar18 = (UObject *)0x0;
      iStack_100 = 0;
      local_e8 = 0;
      bVar12 = false;
      local_130 = (ForElementType<unsigned_int>)&(param_2->Elements).field_0x10;
      iVar22 = -0x80000000;
      uStack_fc = 1;
      iStack_ec = 0;
      if (iVar4 != 0) {
        puVar21 = *(uint **)&(param_2->Elements).field_0x20;
        if (puVar21 == (uint *)0x0) {
          puVar21 = (uint *)local_130;
        }
        uVar23 = *puVar21;
        while (uVar23 == 0) {
          iStack_100 = iStack_100 + 1;
          local_e8 = local_e8 + 0x20;
          iStack_ec = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_100)
          goto LAB_14a062833;
          uVar23 = puVar21[iStack_100];
        }
        uStack_fc = ~(uVar23 - 1) & uVar23;
        uVar1 = (ulonglong)uStack_fc * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_120 = (int)lVar7;
        iStack_ec = local_e8 + -1 + local_120;
        if (iVar4 < iStack_ec) {
          iStack_ec = iVar4;
        }
      }
LAB_14a062833:
      uStack_e4 = local_4c;
      iStack_e0 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
      uVar23 = *(uint *)&(param_2->Elements).field_0x28;
      uStack_f0 = 0xffffffff;
      TStack_d0.CurrentBitIndex = iStack_ec;
      TStack_d0.UnvisitedBitMask = 0xffffffff;
      TStack_d0._padding_ = CONCAT44(uStack_fc,iStack_100);
      uVar24 = uVar23 & 0xffffffe0;
      iVar19 = (int)uVar23 >> 5;
      TStack_d0._28_4_ = local_4c;
      TStack_d0.BaseBitIndex = local_e8;
      uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
      local_108 = param_2;
      local_f8 = (undefined1 *)local_130;
      local_d8 = param_2;
      TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_130;
      if ((((int)uVar23 < 0) || (iVar4 < (int)uVar23)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar10 = local_130;
      uVar5 = *(int *)((longlong)local_130 + 0x18);
      if (uVar23 != uVar5) {
        FVar20 = *(ForElementType<unsigned_int> *)((longlong)local_130 + 0x10);
        if (*(ForElementType<unsigned_int> *)((longlong)local_130 + 0x10) ==
            (ForElementType<unsigned_int>)0x0) {
          FVar20 = local_130;
        }
        uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)((longlong)FVar20 + (longlong)iVar19 * 4);
        while (uVar23 == 0) {
          iVar19 = iVar19 + 1;
          uVar24 = uVar24 + 0x20;
          uVar23 = uVar5;
          if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar19)
          goto LAB_14a062960;
          uVar23 = *(uint *)((longlong)FVar20 + (longlong)iVar19 * 4);
        }
        uVar1 = (ulonglong)(~(uVar23 - 1) & uVar23) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_11c = (int)lVar7;
        uVar23 = (uVar24 - 1) + local_11c;
        if ((int)uVar5 < (int)uVar23) {
          uVar23 = uVar5;
        }
      }
LAB_14a062960:
      while( true ) {
        pTVar11 = local_d8;
        if (*(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34 !=
            (int)uStack_b0) {
          local_148[0] = 0;
          `TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_148);
        }
        if (((TStack_d0.CurrentBitIndex == uVar23) &&
            ((ForElementType<unsigned_int>)TStack_d0.Array == FVar10)) && (pTVar11 == param_2))
        break;
        local_128 = *(FWeakObjectPtr *)
                     (*(longlong *)&pTVar11->Elements + (longlong)TStack_d0.CurrentBitIndex * 0x10);
        bVar13 = FWeakObjectPtr::IsValid(&local_128);
        if ((!bVar13) &&
           (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<7962263059135725814>,false,
                                "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                                ,0xf6,"volumeComp.IsValid()"), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pUVar15 = FWeakObjectPtr::Get(&local_128);
        pUVar15 = *(UObject **)&pUVar15[4].field_0x8;
        if (pUVar15 != (UObject *)0x0) {
          pUVar16 = Z_Construct_UClass_AWN_UDS_LocalVolume_NoRegister();
          iVar4 = (int)pUVar16->_padding_;
          if ((iVar4 <= *(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
              &pUVar16->_padding_)) {
            if (iVar22 < *(int *)&pUVar15[0x88].field_0x10) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar15);
              }
              iVar22 = *(int *)&pUVar15[0x88].field_0x10;
              pUVar18 = pUVar15;
            }
            bVar12 = true;
          }
        }
        TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
      }
      if (bVar12) {
        pUVar15 = FWeakObjectPtr::Get(&(this->CurrentPhysicalVolume).WeakPtr);
        if (pUVar18 == (UObject *)0x0) {
          bVar12 = pUVar15 == (UObject *)0x0;
        }
        else {
          bVar12 = pUVar18 == pUVar15;
        }
        if (bVar12) {
          return;
        }
        ::FString::FString(&local_a8,L"Before Physical Entered");
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        dVar2 = *(double *)&pUVar18[0x87].field_0x18;
        uVar25 = SUB84(dVar2,0);
        uVar26 = (undefined4)((ulonglong)dVar2 >> 0x20);
        this->DelayTime = dVar2;
        if (param_4 != dVar9) {
          uVar25 = (undefined4)*(undefined8 *)&pUVar18[0x87].field_0x18;
          uVar26 = (undefined4)((ulonglong)*(undefined8 *)&pUVar18[0x87].field_0x18 >> 0x20);
        }
        (this->PreviousPhysicalVolume).WeakPtr = (this->CurrentPhysicalVolume).WeakPtr;
        this->DelayTime = (double)CONCAT44(uVar26,uVar25);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (UE::GC::MarkAsReachable(pUVar18), UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable(pUVar18);
        }
        local_144.ObjectIndex = 0;
        local_144.ObjectSerialNumber = 0;
        local_118 = pUVar18;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar18);
        }
        FWeakObjectPtr::operator=(&local_144,(FObjectPtr)&local_118);
        (this->CurrentPhysicalVolume).WeakPtr = local_144;
        ::FString::FString(&local_98,L"Physical Entered");
      }
      else {
        if ((this->UDS_GlobalVolume).field0_0x0.DebugPtr == (AWN_UDS_GlobalVolume *)0x0) {
          return;
        }
        pAVar17 = (AWN_UDS_GlobalVolume *)
                  FWeakObjectPtr::Get(&(this->CurrentPhysicalVolume).WeakPtr);
        pAVar6 = (this->UDS_GlobalVolume).field0_0x0.DebugPtr;
        if (pAVar6 == (AWN_UDS_GlobalVolume *)0x0) {
          bVar12 = pAVar17 == (AWN_UDS_GlobalVolume *)0x0;
        }
        else {
          bVar12 = pAVar6 == pAVar17;
        }
        if (bVar12) {
          return;
        }
        ::FString::FString(&local_88,L"Before Physical Entered");
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        pAVar6 = (this->UDS_GlobalVolume).field0_0x0.DebugPtr;
        dVar2 = (double)pAVar6->_padding_;
        uVar25 = SUB84(dVar2,0);
        uVar26 = (undefined4)((ulonglong)dVar2 >> 0x20);
        this->DelayTime = dVar2;
        if (param_4 != dVar9) {
          uVar25 = (undefined4)pAVar6->_padding_;
          uVar26 = (undefined4)((ulonglong)pAVar6->_padding_ >> 0x20);
        }
        (this->PreviousPhysicalVolume).WeakPtr = (this->CurrentPhysicalVolume).WeakPtr;
        this->DelayTime = (double)CONCAT44(uVar26,uVar25);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pAVar6 != (AWN_UDS_GlobalVolume *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pAVar6);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pAVar6 != (AWN_UDS_GlobalVolume *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pAVar6);
          }
        }
        local_13c.ObjectIndex = 0;
        local_13c.ObjectSerialNumber = 0;
        local_110 = pAVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pAVar6 != (AWN_UDS_GlobalVolume *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pAVar6);
        }
        FWeakObjectPtr::operator=(&local_13c,(FObjectPtr)&local_110);
        (this->CurrentPhysicalVolume).WeakPtr = local_13c;
        ::FString::FString(local_78,L"Physical Entered");
        local_98.Data.AllocatorInstance.Data = local_78[0].Data.AllocatorInstance.Data;
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OnVolumeLeave @ 14a062cc0

void __thiscall
UWN_UDS_Subsystem::OnVolumeLeave
          (UWN_UDS_Subsystem *this,EWN_VolumeObserverMode param_1,
          TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *param_2)

{
  OnVolumeEnterLeaveChange(this,param_1,param_2,false,__real_bff0000000000000);
  return;
}

// PostInitialize @ 14a062cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UWN_UDS_Subsystem::PostInitialize(UWN_UDS_Subsystem *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  UWN_CommonSubsystem *pUVar3;
  char *pcVar4;
  UObject *pUVar5;
  UFunction *pUVar6;
  char *pcVar7;
  char *pcVar8;
  <lambda_1> local_res10 [8];
  <lambda_1> local_res18 [8];
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_158;
  FWeakObjectPtr local_150;
  FName local_148;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_140;
  FWeakObjectPtr local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  UWN_UDS_Subsystem *local_118;
  FName *local_110;
  FName local_108;
  UWN_UDS_Subsystem *local_100;
  FName *local_f8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_f0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_e0;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  UWorldSubsystem::PostInitialize((UWorldSubsystem *)this);
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((this_00 == (UWorld *)0x0) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7962263059135725660>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                         ,0x5c,"world != nullptr"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar3 = UWorld::GetSubsystem<UWN_CommonSubsystem>(this_00);
  if (pUVar3 == (UWN_CommonSubsystem *)0x0) {
    return;
  }
  pcVar4 = strstr("&UWN_UDS_Subsystem::OnVolumeEnter","::");
  pcVar8 = &DAT_00000002;
  if (pcVar4 == (char *)0x0) {
LAB_14a062dca:
    pcVar7 = &DAT_00000002;
LAB_14a062dcd:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar4;
      pcVar4 = strstr(pcVar7 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14a062dca;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14a062dcd;
  }
  ::FName::FName(&local_120,pcVar7);
  if ((this == (UWN_UDS_Subsystem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res20 = local_120;
  local_158.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_150.ObjectIndex = 0;
  local_150.ObjectSerialNumber = 0;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  if ((this == (UWN_UDS_Subsystem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_118 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UWN_UDS_Subsystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_150,(FObjectPtr)&local_118);
  local_148 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_158,&local_a0);
  if ((local_148 == (FName)0x0) ||
     (pUVar5 = FWeakObjectPtr::Get(&local_150), pUVar5 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a0);
LAB_14a062eff:
    local_110 = &local_res20;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,enum_EWN_VolumeObserverMode,UE::Math::TVector<double>,TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>_const_&>
    ::__Internal_BindDynamic<UWN_UDS_Subsystem>'::__l2::<lambda_1>::operator()(&local_110);
  }
  else {
    pUVar6 = UObject::FindFunction(pUVar5,local_148);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a0);
    if (pUVar6 == (UFunction *)0x0) goto LAB_14a062eff;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_158,&local_70);
  local_f0.Object = local_150;
  local_f0.FunctionName = local_148;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3->OnEnter,
             (FWriteAccessScope *)&local_d0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar3->OnEnter).field_0x8,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3->OnEnter,&local_f0);
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_158.AccessDetector);
  pcVar4 = strstr("&UWN_UDS_Subsystem::OnVolumeLeave","::");
  if (pcVar4 == (char *)0x0) {
LAB_14a062fda:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar4;
      pcVar4 = strstr(pcVar7 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if ((pcVar7 == (char *)0x0) || (pcVar8 = pcVar7 + 2, pcVar7[2] == '0')) goto LAB_14a062fda;
  }
  ::FName::FName(&local_108,pcVar8);
  if ((this == (UWN_UDS_Subsystem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_140.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_138.ObjectIndex = 0;
  local_138.ObjectSerialNumber = 0;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  local_128 = local_108;
  if ((this == (UWN_UDS_Subsystem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_100 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UWN_UDS_Subsystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_100);
  local_130 = local_128;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_140,&local_88);
  if ((local_130 == (FName)0x0) ||
     (pUVar5 = FWeakObjectPtr::Get(&local_138), pUVar5 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
  }
  else {
    pUVar6 = UObject::FindFunction(pUVar5,local_130);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (pUVar6 != (UFunction *)0x0) goto LAB_14a063124;
  }
  local_f8 = &local_128;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,enum_EWN_VolumeObserverMode,TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>_const_&>
  ::__Internal_BindDynamic<UWN_UDS_Subsystem>'::__l2::<lambda_1>::operator()(&local_f8);
LAB_14a063124:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_140,&local_58);
  local_e0.Object = local_138;
  local_e0.FunctionName = local_130;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3->OnLeave,
             (FWriteAccessScope *)&local_b8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar3->OnLeave).field_0x8,local_res18,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3->OnLeave,&local_e0);
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_140.AccessDetector);
  return;
}

// PrintLogOfBlending @ 14a0633f0

void __thiscall UWN_UDS_Subsystem::PrintLogOfBlending(UWN_UDS_Subsystem *this,FString *param_1)

{
  return;
}

// RegisterReactComponent @ 14a0634c0

void __thiscall
UWN_UDS_Subsystem::RegisterReactComponent(UWN_UDS_Subsystem *this,UWN_TODReactComponent *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UWN_ReactComponentContext>_u_0 *pTVar6;
  TObjectPtr<UWN_ReactComponentContext>_u_0 TVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  TWeakObjectPtr<UWN_TODReactComponent,FWeakObjectPtr> local_res10;
  FWeakObjectPtr local_res18;
  UWN_UDS_Subsystem *local_res20;
  UClass *local_38;
  UWN_TODReactComponent *local_30;
  
  if ((param_1 != (UWN_TODReactComponent *)0x0) && (param_1->IndexInSubsystem == -1)) {
    FWN_UniqueIndexAllocator::TryResize(&this->ReactComponentIndexAllocator);
    if (((this->ReactComponentIndexAllocator).FreedIndices.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->ReactComponentIndexAllocator).FreedIndices.ArrayNum;
    iVar10 = iVar5 + -1;
    iVar5 = *(int *)((this->ReactComponentIndexAllocator).FreedIndices.AllocatorInstance.Data +
                    (longlong)iVar5 * 4 + -4);
    (this->ReactComponentIndexAllocator).FreedIndices.ArrayNum = iVar10;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->ReactComponentIndexAllocator).FreedIndices.AllocatorInstance,iVar10,
               &(this->ReactComponentIndexAllocator).FreedIndices.ArrayMax);
    local_res20 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UWN_UDS_Subsystem *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&(param_1->UDS_Subsystem).WeakPtr,(FObjectPtr)&local_res20);
    local_38 = (UClass *)param_1->_padding_;
    param_1->IndexInSubsystem = iVar5;
    uVar8 = ((uint)((ulonglong)local_38 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_38 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    uVar8 = uVar8 >> 0x10 ^ uVar8;
    if (*(int *)&(this->AllReactComponentsPerType).field_0x8 !=
        *(int *)&(this->AllReactComponentsPerType).field_0x34) {
      puVar9 = *(undefined1 **)&(this->AllReactComponentsPerType).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->AllReactComponentsPerType).field_0x38;
      }
      iVar5 = *(int *)(puVar9 + (ulonglong)
                                (*(int *)&(this->AllReactComponentsPerType).field_0x48 - 1U & uVar8)
                                * 4);
      if (iVar5 != -1) {
        lVar2 = *(longlong *)&this->AllReactComponentsPerType;
        do {
          lVar1 = lVar2 + (longlong)iVar5 * 0x18;
          if (*(UClass **)(lVar2 + (longlong)iVar5 * 0x18) == local_38) {
            if (lVar1 != 0) {
              pTVar6 = (TObjectPtr<UWN_ReactComponentContext>_u_0 *)(lVar1 + 8);
              goto LAB_14a063640;
            }
            break;
          }
          iVar5 = *(int *)(lVar1 + 0x10);
        } while (iVar5 != -1);
      }
    }
    pTVar6 = &TMapBase<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
              ::EmplaceByHash<UClass_*_const_&>
                        ((TMapBase<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
                          *)&this->AllReactComponentsPerType,uVar8,&local_38)->field0_0x0;
LAB_14a063640:
    TVar7.DebugPtr = pTVar6->DebugPtr;
    if (TVar7 == (UWN_ReactComponentContext *)0x0) {
      TVar7.DebugPtr = NewObject<UWN_ReactComponentContext>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar7.DebugPtr != (UWN_ReactComponentContext *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
      }
      pTVar6->DebugPtr = (UWN_ReactComponentContext *)TVar7;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_30 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_30);
    TSet<TWeakObjectPtr<UWN_TODReactComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_TODReactComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Emplace<TWeakObjectPtr<UWN_TODReactComponent,FWeakObjectPtr>_>
              (&(TVar7.DebugPtr)->ReactComponents,&local_res10,(bool *)&local_res18);
  }
  return;
}

// RegisterUDS @ 14a063700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_UDS_Subsystem::RegisterUDS(UWN_UDS_Subsystem *this,AWN_Ultra_Sky *param_1)

{
  undefined1 *puVar1;
  TMap<FString,FWN_UDS_PropertyGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>_>
  *pTVar2;
  FString *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  AWN_UDS_GlobalVolume *pAVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  TMap<FString,FWN_UDS_PropertyGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  FProperty *pFVar12;
  TTuple<FString,FWN_UDS_PropertyGroup> *pTVar13;
  UObject *pUVar14;
  double *pdVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
  *this_00;
  wchar_t *pwVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  FWeakObjectPtr local_b8;
  undefined8 local_b0;
  TMap<FString,FWN_UDS_PropertyGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  AWN_UDS_GlobalVolume *local_78;
  TMap<FString,FWN_UDS_PropertyGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if (param_1 == (AWN_Ultra_Sky *)0x0) {
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->UDS).field0_0x0.DebugPtr = param_1;
  puVar1 = &(this->UDS_PropsMap).field_0x10;
  iStack_a0 = 0;
  iVar11 = *(int *)&(this->UDS_PropsMap).field_0x28;
  pTVar2 = &this->UDS_PropsMap;
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = 0;
  if (iVar11 != 0) {
    puVar23 = *(uint **)&(this->UDS_PropsMap).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar21 = *puVar23;
    local_88 = 0;
    while (uVar21 == 0) {
      lVar16 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14a0637dd;
      uVar21 = puVar23[lVar16 + 1];
    }
    uStack_9c = -uVar21 & uVar21;
    uVar4 = (ulonglong)uStack_9c * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_res18 = (int)lVar16;
    iStack_8c = local_88 + -1 + local_res18;
    if (iVar11 < iStack_8c) {
      iStack_8c = iVar11;
    }
  }
LAB_14a0637dd:
  uVar21 = *(uint *)&(this->UDS_PropsMap).field_0x28;
  uVar20 = uVar21 & 0xffffffe0;
  iStack_80 = *(int *)&(this->UDS_PropsMap).field_0x8 - *(int *)&(this->UDS_PropsMap).field_0x34;
  uStack_90 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_68.CurrentBitIndex = iStack_8c;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar21 >> 5;
  TStack_68._28_4_ = iStack_8c;
  TStack_68.BaseBitIndex = local_88;
  uStack_48 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = pTVar2;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_70 = pTVar2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar11 < (int)uVar21)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->UDS_PropsMap).field_0x28;
  if (uVar21 != uVar5) {
    puVar22 = *(undefined1 **)&(this->UDS_PropsMap).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar19 * 4);
    while (uVar21 == 0) {
      lVar16 = (longlong)iVar19;
      uVar20 = uVar20 + 0x20;
      iVar19 = iVar19 + 1;
      uVar21 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14a0638dd;
      uVar21 = *(uint *)(puVar22 + lVar16 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_res20 = (int)lVar16;
    uVar21 = local_res20 + -1 + uVar20;
    if ((int)uVar5 < (int)uVar21) {
      uVar21 = uVar5;
    }
  }
LAB_14a0638dd:
  do {
    pTVar9 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FWN_UDS_PropertyGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_68.CurrentBitIndex == uVar21) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    {
      pAVar6 = (this->UDS_GlobalVolume).field0_0x0.DebugPtr;
      if (pAVar6 == (AWN_UDS_GlobalVolume *)0x0) {
        return;
      }
      lVar16 = 0;
      local_b0 = 0;
      AActor::AttachToActor
                ((AActor *)(this->UDS).field0_0x0.DebugPtr,(AActor *)pAVar6,
                 &FAttachmentTransformRules::KeepWorldTransform,(FName)0x0);
      pAVar6 = (this->UDS_GlobalVolume).field0_0x0.DebugPtr;
      (this->PreviousPhysicalVolume).WeakPtr = (this->CurrentPhysicalVolume).WeakPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pAVar6 != (AWN_UDS_GlobalVolume *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pAVar6);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pAVar6 != (AWN_UDS_GlobalVolume *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pAVar6);
        }
      }
      local_b8.ObjectIndex = 0;
      local_b8.ObjectSerialNumber = 0;
      local_78 = pAVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pAVar6 != (AWN_UDS_GlobalVolume *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar6);
      }
      FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_78);
      (this->CurrentPhysicalVolume).WeakPtr = local_b8;
      pUVar14 = FWeakObjectPtr::Get(&(this->CurrentPhysicalVolume).WeakPtr);
      this->DelayTime = *(double *)&pUVar14[0x87].field_0x18;
      LogicallyEnterAfterDelay(this);
      iVar11 = sPropNameTOD.Data.ArrayNum + -1;
      FVar8 = sPropNameTOD.Data.AllocatorInstance;
      if (sPropNameTOD.Data.ArrayNum == 0) {
        iVar11 = 0;
        FVar8.Data = (FScriptContainerElement *)L"";
      }
      uVar21 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar8.Data);
      iVar11 = TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                           *)&this->UDS_PropsOfTODMap,uVar21,&sPropNameTOD);
      if (iVar11 == -1) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7962263059135726022>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                            ,0x1c6,"false");
      }
      else {
        iVar11 = sPropNameTOD.Data.ArrayNum + -1;
        FVar8 = sPropNameTOD.Data.AllocatorInstance;
        if (sPropNameTOD.Data.ArrayNum == 0) {
          iVar11 = 0;
          FVar8.Data = (FScriptContainerElement *)L"";
        }
        uVar21 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar8.Data);
        iVar11 = TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                             *)&this->UDS_PropsOfTODMap,uVar21,&sPropNameTOD);
        if (((iVar11 == -1) ||
            (lVar16 = *(longlong *)&this->UDS_PropsOfTODMap + (longlong)iVar11 * 0x28, lVar16 == 0))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar16 = *(longlong *)(lVar16 + 0x18);
        pUVar14 = FWeakObjectPtr::Get(&(this->CurrentPhysicalVolume).WeakPtr);
        if ((*(int *)(lVar16 + 0x30) < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((&pUVar14[0x11].field_0x18 == (undefined1 *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pdVar15 = (double *)(&pUVar14[0x11].field_0x18 + *(int *)(lVar16 + 0x44));
        if (pdVar15 != (double *)0x0) {
          this->GlobalTOD = *pdVar15;
          return;
        }
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7962263059135726017>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                            ,0x1c1,"false");
      }
      if (!bVar10) {
        return;
      }
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar16 = *(longlong *)pTVar9;
    pFVar3 = (FString *)(lVar16 + (longlong)TStack_68.CurrentBitIndex * 0x28);
    if (*(int *)(lVar16 + 8 + (longlong)TStack_68.CurrentBitIndex * 0x28) == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    pFVar12 = FindFProperty<FProperty>
                        ((UStruct *)((this->UDS).field0_0x0.DebugPtr)->_padding_,pwVar18,Default);
    if (pFVar12 == (FProperty *)0x0) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7962263059135725967>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                          ,399,"false");
      if (bVar10) {
code_r0x00014a063ad8:
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      pFVar3[1].Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar12;
      pwVar18 = L"";
      if (sPropNameTOD.Data.ArrayNum != 0) {
        pwVar18 = (wchar_t *)sPropNameTOD.Data.AllocatorInstance;
      }
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      iVar19 = FGenericPlatformStricmp::Stricmp(pwVar17,pwVar18);
      iVar11 = (pFVar3->Data).ArrayNum;
      if (iVar19 == 0) {
        iVar19 = iVar11 + -1;
        if (iVar11 == 0) {
          pwVar18 = L"";
          iVar19 = 0;
        }
        else {
          pwVar18 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
        }
        uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar19,pwVar18);
        iVar11 = TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                             *)&this->UDS_PropsOfTODMap,uVar20,pFVar3);
        if (iVar11 == -1) {
          bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7962263059135725981>,false,
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                              ,0x19d,"false");
          if (bVar10) goto code_r0x00014a063ad8;
        }
        else {
          this_00 = (TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                     *)&this->UDS_PropsOfTODMap;
LAB_14a063a70:
          pTVar13 = TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                    ::Find(this_00,pFVar3);
          if ((pTVar13 == (TTuple<FString,FWN_UDS_PropertyGroup> *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x288,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(FProperty **)&pTVar13->field_0x10 = pFVar12;
        }
      }
      else {
        iVar19 = iVar11 + -1;
        if (iVar11 == 0) {
          pwVar18 = L"";
          iVar19 = 0;
        }
        else {
          pwVar18 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
        }
        uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar19,pwVar18);
        iVar11 = TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                             *)&this->UDS_PropsExceptTODMap,uVar20,pFVar3);
        if (iVar11 != -1) {
          this_00 = (TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                     *)&this->UDS_PropsExceptTODMap;
          goto LAB_14a063a70;
        }
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7962263059135725994>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                            ,0x1aa,"false");
        if (bVar10) goto code_r0x00014a063ad8;
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// RegisterUDSGlobalVolume @ 14a063d90

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
UWN_UDS_Subsystem::RegisterUDSGlobalVolume(UWN_UDS_Subsystem *this,AWN_UDS_GlobalVolume *param_1)

{
  AWN_UDS_GlobalVolume *pAVar1;
  AWN_Ultra_Sky *this_00;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UObject *pUVar7;
  double *pdVar8;
  AWN_UDS_GlobalVolume *pAVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  FWeakObjectPtr local_res10;
  undefined8 local_res18;
  UWN_UDS_Subsystem *local_res20;
  AWN_UDS_GlobalVolume *local_38 [2];
  
  if ((param_1 != (AWN_UDS_GlobalVolume *)0x0) &&
     (bVar4 = FWeakObjectPtr::IsValid(&(param_1->UDS_Subsystem).WeakPtr), !bVar4)) {
    local_res20 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UWN_UDS_Subsystem *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&(param_1->UDS_Subsystem).WeakPtr,(FObjectPtr)&local_res20);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->UDS_GlobalVolume).field0_0x0.DebugPtr = param_1;
    bVar4 = TWeakObjectPtr<AWN_UDS_Volume,FWeakObjectPtr>::UEOpEquals
                      (&this->CurrentPhysicalVolume,(void *)0x0);
    lVar11 = 0;
    if (bVar4) {
      pAVar1 = (this->UDS_GlobalVolume).field0_0x0.DebugPtr;
      (this->PreviousPhysicalVolume).WeakPtr = (this->CurrentPhysicalVolume).WeakPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pAVar1 != (AWN_UDS_GlobalVolume *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pAVar1);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pAVar1 != (AWN_UDS_GlobalVolume *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pAVar1);
        }
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_38[0] = pAVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pAVar1 != (AWN_UDS_GlobalVolume *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar1);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_38);
      (this->CurrentPhysicalVolume).WeakPtr = local_res10;
      pUVar7 = FWeakObjectPtr::Get(&(this->CurrentPhysicalVolume).WeakPtr);
      pwVar10 = L"";
      this->DelayTime = *(double *)&pUVar7[0x87].field_0x18;
      if (sPropNameTOD.Data.ArrayNum != 0) {
        pwVar10 = (wchar_t *)sPropNameTOD.Data.AllocatorInstance;
      }
      iVar6 = sPropNameTOD.Data.ArrayNum + -1;
      if (sPropNameTOD.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar10);
      iVar6 = TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                          *)&this->UDS_PropsOfTODMap,uVar5,&sPropNameTOD);
      if (iVar6 == -1) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7962263059135725888>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                           ,0x140,"false");
        if (bVar4) {
code_r0x00014a064058:
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        iVar6 = sPropNameTOD.Data.ArrayNum + -1;
        FVar3 = sPropNameTOD.Data.AllocatorInstance;
        if (sPropNameTOD.Data.ArrayNum == 0) {
          iVar6 = 0;
          FVar3.Data = (FScriptContainerElement *)L"";
        }
        uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar3.Data);
        iVar6 = TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                            *)&this->UDS_PropsOfTODMap,uVar5,&sPropNameTOD);
        if (((iVar6 == -1) ||
            (lVar11 = *(longlong *)&this->UDS_PropsOfTODMap + (longlong)iVar6 * 0x28, lVar11 == 0))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x288,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar11 = *(longlong *)(lVar11 + 0x18);
        pUVar7 = FWeakObjectPtr::Get(&(this->CurrentPhysicalVolume).WeakPtr);
        if ((*(int *)(lVar11 + 0x30) < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((&pUVar7[0x11].field_0x18 == (undefined1 *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pdVar8 = (double *)(&pUVar7[0x11].field_0x18 + *(int *)(lVar11 + 0x44));
        if (pdVar8 == (double *)0x0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7962263059135725883>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                             ,0x13b,"false");
          if (bVar4) goto code_r0x00014a064058;
        }
        else {
          this->GlobalTOD = *pdVar8;
        }
      }
    }
    this_00 = (this->UDS).field0_0x0.DebugPtr;
    if (this_00 != (AWN_Ultra_Sky *)0x0) {
      pAVar9 = (AWN_UDS_GlobalVolume *)AActor::GetAttachParentActor((AActor *)this_00);
      pAVar1 = (this->UDS_GlobalVolume).field0_0x0.DebugPtr;
      if (pAVar1 == (AWN_UDS_GlobalVolume *)0x0) {
        bVar4 = pAVar9 == (AWN_UDS_GlobalVolume *)0x0;
      }
      else {
        bVar4 = pAVar1 == pAVar9;
      }
      if (!bVar4) {
        local_res18 = 0;
        AActor::AttachToActor
                  ((AActor *)(this->UDS).field0_0x0.DebugPtr,(AActor *)pAVar1,
                   &FAttachmentTransformRules::KeepWorldTransform,(FName)0x0);
      }
    }
  }
  return;
}

// RemoveTODReactComponentFromTickable @ 14a0649d0

void __thiscall
UWN_UDS_Subsystem::RemoveTODReactComponentFromTickable
          (UWN_UDS_Subsystem *this,UWN_TODReactComponent *param_1)

{
  uint uVar1;
  TObjectPtr<UWN_TODReactComponent_const_>_u_0 local_res10 [3];
  
  if (param_1 != (UWN_TODReactComponent *)0x0) {
    local_res10[0].DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (*(int *)&(this->UpdatableReactComponents).Elements.field_0x8 !=
        *(int *)&(this->UpdatableReactComponents).Elements.field_0x34) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectPtr<UWN_TODReactComponent_const_>_>
                (&this->UpdatableReactComponents,uVar1 >> 0x10 ^ uVar1,
                 (TObjectPtr<UWN_TODReactComponent_const_> *)&local_res10[0].ObjectPtr);
    }
  }
  return;
}

// SetCustomObserverPos @ 14a064a70

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
UWN_UDS_Subsystem::SetCustomObserverPos(UWN_UDS_Subsystem *this,TVector<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  UWN_CommonSubsystem *this_01;
  UClass *pUVar3;
  
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (this_00 == (UWorld *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7962263059135726106>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                       ,0x21a,"world != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_01 = UWorld::GetSubsystem<UWN_CommonSubsystem>(this_00);
  if (this_01 != (UWN_CommonSubsystem *)0x0) {
    pUVar3 = Z_Construct_UClass_UWN_UDSVolumeComponent_NoRegister();
    UWN_CommonSubsystem::SetCustomPositionForClass(this_01,pUVar3,param_1);
  }
  return;
}

// SetDayNightUDS @ 14a064af0

void __thiscall UWN_UDS_Subsystem::SetDayNightUDS(UWN_UDS_Subsystem *this)

{
  TMap<FString,FWN_UDS_PropertyGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  FProperty *pFVar9;
  int iVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  longlong lVar13;
  double local_res10;
  double local_res18 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  lVar12 = 0;
  if ((this->CurrentState).VolumeSetting == (FWN_UDS_VolumeSetting *)0x0) {
    return;
  }
  local_res10 = __real_bff0000000000000;
  local_res18[0] = __real_bff0000000000000;
  ::FString::FString(&local_88,L"Dusk Time");
  this_00 = &this->UDS_PropsMap;
  iVar6 = local_88.Data.ArrayNum + -1;
  FVar11.Data = local_88.Data.AllocatorInstance.Data;
  if (local_88.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar11.Data);
  bVar4 = false;
  iVar6 = TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                      *)this_00,uVar5,&local_88);
  iVar10 = 0;
  if (iVar6 == -1) {
LAB_14a064bcf:
    bVar2 = false;
    bVar3 = false;
    if (!bVar4) goto LAB_14a064be6;
  }
  else {
    ::FString::FString(&local_98,L"Dawn Time");
    iVar6 = local_98.Data.ArrayNum + -1;
    FVar11.Data = local_98.Data.AllocatorInstance.Data;
    if (local_98.Data.ArrayNum == 0) {
      iVar6 = iVar10;
      FVar11.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar11.Data);
    bVar4 = true;
    iVar6 = TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                        *)this_00,uVar5,&local_98);
    if (iVar6 == -1) goto LAB_14a064bcf;
    bVar3 = true;
  }
  bVar2 = bVar3;
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
LAB_14a064be6:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    ::FString::FString(&local_78,L"Dawn Time");
    iVar6 = local_78.Data.ArrayNum + -1;
    FVar11.Data = local_78.Data.AllocatorInstance.Data;
    if (local_78.Data.ArrayNum == 0) {
      iVar6 = iVar10;
      FVar11.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar11.Data);
    iVar6 = TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                        *)this_00,uVar5,&local_78);
    lVar13 = lVar12;
    if (((iVar6 == -1) ||
        (lVar13 = *(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x28, lVar13 == 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_68,L"Dusk Time");
    iVar6 = local_68.Data.ArrayNum + -1;
    FVar11.Data = local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.ArrayNum == 0) {
      iVar6 = iVar10;
      FVar11.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar11.Data);
    iVar6 = TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                        *)this_00,uVar5,&local_68);
    if (((iVar6 == -1) ||
        (lVar12 = *(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x28, lVar12 == 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((*(FProperty **)(lVar13 + 0x10) != (FProperty *)0x0) &&
       (pFVar9 = *(FProperty **)(lVar12 + 0x10), pFVar9 != (FProperty *)0x0)) {
      pdVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         (*(FProperty **)(lVar13 + 0x10),(UObject *)(this->UDS).field0_0x0.DebugPtr,
                          0);
      pdVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         (pFVar9,(UObject *)(this->UDS).field0_0x0.DebugPtr,0);
      local_res10 = *pdVar8 - *pdVar7;
      local_res18[0] = (__real_40a2c00000000000 - *pdVar8) + *pdVar7;
    }
  }
  ::FString::FString(&local_58,L"Day Length");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar11.Data = local_58.Data.AllocatorInstance.Data;
  }
  pFVar9 = FindFProperty<FProperty>
                     ((UStruct *)((this->UDS).field0_0x0.DebugPtr)->_padding_,(wchar_t *)FVar11.Data
                      ,Default);
  if (pFVar9 != (FProperty *)0x0) {
    FProperty::SetValue_InContainer(pFVar9,(this->UDS).field0_0x0.DebugPtr,&local_res10);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_48,L"Night Length");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar11.Data = local_48.Data.AllocatorInstance.Data;
  }
  pFVar9 = FindFProperty<FProperty>
                     ((UStruct *)((this->UDS).field0_0x0.DebugPtr)->_padding_,(wchar_t *)FVar11.Data
                      ,Default);
  if (pFVar9 != (FProperty *)0x0) {
    FProperty::SetValue_InContainer(pFVar9,(this->UDS).field0_0x0.DebugPtr,local_res18);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// SetForceTimeOfDay @ 14a064e40

void __thiscall UWN_UDS_Subsystem::SetForceTimeOfDay(UWN_UDS_Subsystem *this,double *param_1)

{
  this->OverridenTOD = *param_1;
  this->DelayTime = -1.0;
  this->CurrentBlendingTime = -1.0;
  LogicallyEnterAfterDelay(this);
  if (0.0 < this->OverridenTOD || this->OverridenTOD == 0.0) {
    SetTODCurrentSetting(this,&this->OverridenTOD);
  }
  return;
}

// SetObserverMode @ 14a064eb0

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

void __thiscall
UWN_UDS_Subsystem::SetObserverMode(UWN_UDS_Subsystem *this,EWN_VolumeObserverMode param_1)

{
  AWN_UDS_GlobalVolume *pAVar1;
  code *pcVar2;
  FWeakObjectPtr FVar3;
  bool bVar4;
  UWorld *pUVar5;
  UWN_CommonSubsystem *this_00;
  AWN_UDS_GlobalVolume *pAVar6;
  UObject *pUVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  undefined1 auStackY_c8 [32];
  FWeakObjectPtr local_98;
  UObject *local_90;
  FWeakObjectPtr local_88;
  FWeakObjectPtr local_80;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (this->ObserverMode != param_1) {
    this->ObserverMode = param_1;
    pUVar5 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    if ((pUVar5 == (UWorld *)0x0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7962263059135726093>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                           ,0x20d,"world != nullptr"), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = UWorld::GetSubsystem<UWN_CommonSubsystem>(pUVar5);
    if (this_00 != (UWN_CommonSubsystem *)0x0) {
      UWN_CommonSubsystem::GetVolumesEntered(this_00,&local_78,param_1);
      pAVar6 = (AWN_UDS_GlobalVolume *)FWeakObjectPtr::Get(&(this->CurrentPhysicalVolume).WeakPtr);
      pAVar1 = (this->UDS_GlobalVolume).field0_0x0.DebugPtr;
      if (pAVar1 == (AWN_UDS_GlobalVolume *)0x0) {
        bVar4 = pAVar6 == (AWN_UDS_GlobalVolume *)0x0;
      }
      else {
        bVar4 = pAVar1 == pAVar6;
      }
      if (bVar4) {
        bVar4 = true;
      }
      else {
        pUVar7 = FWeakObjectPtr::Get(&(this->CurrentPhysicalVolume).WeakPtr);
        local_90 = *(UObject **)&pUVar7[0x88].field_0x8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_90);
        }
        local_98.ObjectIndex = 0;
        local_98.ObjectSerialNumber = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_90);
        }
        FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_90);
        FVar3 = local_98;
        if (local_78.Elements._8_4_ == local_78.Elements._52_4_) {
          iVar9 = -1;
        }
        else {
          FVar8 = (ForElementType<FSetElementId>)&local_78.Hash;
          if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar8 = local_78.Hash.SecondaryData;
          }
          for (iVar9 = *(int *)((longlong)FVar8 +
                               (ulonglong)
                               (local_78.HashSize - 1U &
                               (local_98.ObjectSerialNumber ^ local_98.ObjectIndex)) * 4);
              iVar9 != -1; iVar9 = *(int *)(local_78.Elements._0_8_ + 8 + (longlong)iVar9 * 0x10)) {
            local_88 = FVar3;
            local_80 = *(FWeakObjectPtr *)(local_78.Elements._0_8_ + (longlong)iVar9 * 0x10);
            bVar4 = TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr>::
                    UEOpEquals<UWN_VolumeComponent_const_,bool>
                              ((TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr> *)
                               &local_80,
                               (TWeakObjectPtr<UWN_VolumeComponent_const_,FWeakObjectPtr> *)
                               &local_88);
            if (bVar4) goto LAB_14a065082;
          }
          iVar9 = -1;
        }
LAB_14a065082:
        bVar4 = iVar9 != -1;
      }
      pUVar5 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
      OnVolumeEnterLeaveChange(this,param_1,&local_78,bVar4,pUVar5->TimeSeconds);
      local_78.HashSize = 0;
      if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_78.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_78.Elements);
    }
  }
  return;
}

// SetTODCurrentSetting @ 14a065110

bool __thiscall UWN_UDS_Subsystem::SetTODCurrentSetting(UWN_UDS_Subsystem *this,double *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  atomic<unsigned_char> *paVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  
  pwVar8 = L"";
  if (sPropNameTOD.Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)sPropNameTOD.Data.AllocatorInstance.Data;
  }
  lVar9 = 0;
  iVar6 = sPropNameTOD.Data.ArrayNum + -1;
  if (sPropNameTOD.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
  iVar6 = TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                      *)&this->UDS_PropsOfTODMap,uVar5,&sPropNameTOD);
  if (iVar6 == -1) {
    iVar6 = 0x3c0;
    paVar7 = &bGEnsureHasExecuted<7962263059135726528>;
  }
  else {
    iVar6 = sPropNameTOD.Data.ArrayNum + -1;
    FVar2 = sPropNameTOD.Data.AllocatorInstance;
    if (sPropNameTOD.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
    iVar6 = TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                        *)&this->UDS_PropsOfTODMap,uVar5,&sPropNameTOD);
    if (((iVar6 == -1) ||
        (lVar9 = *(longlong *)&this->UDS_PropsOfTODMap + (longlong)iVar6 * 0x28, lVar9 == 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if (*(FProperty **)(lVar9 + 0x18) != (FProperty *)0x0) {
      FProperty::SetValue_InContainer
                (*(FProperty **)(lVar9 + 0x18),&(this->CurrentState).UDS_Setting,param_1);
      this->DirtyMode = this->DirtyMode | TOD;
      return true;
    }
    iVar6 = 0x3ba;
    paVar7 = &bGEnsureHasExecuted<7962263059135726522>;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar7,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                     ,iVar6,"false");
  if (!bVar3) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// StoreStates @ 14a065410

bool __thiscall
UWN_UDS_Subsystem::StoreStates
          (UWN_UDS_Subsystem *this,FWN_Ultra_Dynamic_Sky *param_1,FWN_Ultra_Dynamic_Sky *param_2)

{
  ulonglong uVar1;
  FWN_Ultra_Dynamic_Sky *pFVar2;
  TMap<FString,FWN_UDS_PropertyGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>_>
  *pTVar3;
  uint uVar4;
  longlong *plVar5;
  FProperty *pFVar6;
  longlong lVar7;
  code *pcVar8;
  TMap<FString,FWN_UDS_PropertyGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>_>
  *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  UObject *pUVar15;
  undefined1 *puVar16;
  FString *pFVar17;
  TTuple<FString,FString> *pTVar18;
  void *pvVar19;
  wchar_t *pwVar20;
  void *_Dst;
  atomic<unsigned_char> *paVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  undefined1 *puVar25;
  uint *puVar26;
  uint local_res8 [2];
  TFieldIterator<FProperty> local_f8;
  int local_e0;
  TMap<FString,FWN_UDS_PropertyGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>_>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  TMap<FString,FWN_UDS_PropertyGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FString local_78;
  FString local_68 [2];
  undefined4 local_3c;
  
  bVar12 = false;
  local_res8[0] = 0;
  pUVar15 = FWeakObjectPtr::Get(&(this->CurrentLogicalVolume).WeakPtr);
  puVar16 = &pUVar15[0x87].field_0x10;
  (this->CurrentState).VolumeSetting = (FWN_UDS_VolumeSetting *)puVar16;
  if (puVar16 != (undefined1 *)0x0) {
    if (*puVar16 == '\x01') {
      SetTODCurrentSetting(this,&this->GlobalTOD);
    }
    local_f8.Struct = (UStruct *)FWN_Ultra_Dynamic_Sky::StaticStruct();
    if ((UScriptStruct *)local_f8.Struct == (UScriptStruct *)0x0) {
      local_f8.Field = (FField *)0x0;
    }
    else {
      local_f8.Field = (FField *)((UScriptStruct *)local_f8.Struct)->_padding_;
    }
    local_f8.InterfaceIndex = -1;
    local_f8.bIncludeSuper = false;
    local_f8.bIncludeDeprecated = true;
    local_f8.bIncludeInterface = false;
    TFieldIterator<FProperty>::IterateToNext(&local_f8);
    pFVar6 = (FProperty *)local_f8.Field;
    while (local_f8.Field = (FField *)pFVar6, pFVar6 != (FProperty *)0x0) {
      pFVar17 = FProperty::GetNameCPP(pFVar6,local_68);
      pTVar18 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)&FWN_Ultra_Dynamic_Sky::PropsDisplayNameMap,pFVar17);
      if ((pTVar18 == (TTuple<FString,FString> *)0x0) ||
         (pTVar18 == (TTuple<FString,FString> *)0xfffffffffffffff0)) {
LAB_14a06557a:
        bVar10 = false;
      }
      else {
        bVar12 = true;
        pFVar17 = FProperty::GetNameCPP(pFVar6,&local_78);
        pTVar18 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                          *)&FWN_Ultra_Dynamic_Sky::PropsDisplayNameMap,pFVar17);
        if ((pTVar18 == (TTuple<FString,FString> *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        if (*(int *)&pTVar18->field_0x18 == 0) {
          pwVar20 = L"";
        }
        else {
          pwVar20 = *(wchar_t **)&pTVar18->field_0x10;
        }
        iVar14 = FGenericPlatformStricmp::Stricmp(pwVar20,L"Time of Day");
        if ((iVar14 != 0) || (((this->CurrentState).VolumeSetting)->TODFlowMode != Global))
        goto LAB_14a06557a;
        bVar10 = true;
      }
      if ((bVar12) &&
         (bVar12 = false, local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
      }
      if (!bVar10) {
        if ((pFVar6->ArrayDim < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        if ((param_1 == (FWN_Ultra_Dynamic_Sky *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        pvVar19 = (void *)((longlong)&param_1->Property1 + (longlong)pFVar6->Offset_Internal);
        if (pvVar19 == (void *)0x0) {
          iVar14 = 0x3e6;
          paVar21 = &bGEnsureHasExecuted<7962263059135726566>;
          goto LAB_14a06597b;
        }
        FProperty::SetValue_InContainer(pFVar6,param_2,pvVar19);
      }
      local_f8.Field = (FField *)pFVar6->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_f8);
      pFVar6 = (FProperty *)local_f8.Field;
    }
    bVar12 = TWeakObjectPtr<AWN_UDS_Volume,FWeakObjectPtr>::UEOpEquals
                       (&this->PreviousLogicalVolume,(void *)0x0);
    if (!bVar12) {
      pUVar15 = FWeakObjectPtr::Get(&(this->PreviousLogicalVolume).WeakPtr);
      (this->PreviousState).VolumeSetting = (FWN_UDS_VolumeSetting *)&pUVar15[0x87].field_0x10;
    }
    pTVar3 = &this->UDS_PropsMap;
    iStack_d0 = 0;
    iVar14 = *(int *)&(this->UDS_PropsMap).field_0x28;
    puVar16 = &(this->UDS_PropsMap).field_0x10;
    local_b8 = 0;
    uStack_cc = 1;
    iStack_bc = 0;
    if (iVar14 != 0) {
      puVar26 = *(uint **)&(this->UDS_PropsMap).field_0x20;
      if (puVar26 == (uint *)0x0) {
        puVar26 = (uint *)puVar16;
      }
      uVar24 = *puVar26;
      while (uVar24 == 0) {
        iStack_d0 = iStack_d0 + 1;
        local_b8 = local_b8 + 0x20;
        iStack_bc = iVar14;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0) goto LAB_14a0656fb;
        uVar24 = puVar26[iStack_d0];
      }
      uStack_cc = -uVar24 & uVar24;
      uVar1 = (ulonglong)uStack_cc * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_bc = (int)lVar7 + -1 + local_b8;
      if (iVar14 < iStack_bc) {
        iStack_bc = iVar14;
      }
    }
LAB_14a0656fb:
    uVar24 = *(uint *)&(this->UDS_PropsMap).field_0x28;
    uStack_b4 = local_3c;
    uVar23 = uVar24 & 0xffffffe0;
    iStack_b0 = *(int *)&(this->UDS_PropsMap).field_0x8 - *(int *)&(this->UDS_PropsMap).field_0x34;
    uStack_c0 = 0xffffffff;
    TStack_a0._padding_ = CONCAT44(uStack_cc,iStack_d0);
    TStack_a0.CurrentBitIndex = iStack_bc;
    TStack_a0.UnvisitedBitMask = 0xffffffff;
    iVar22 = (int)uVar24 >> 5;
    TStack_a0._28_4_ = local_3c;
    TStack_a0.BaseBitIndex = local_b8;
    uStack_80 = CONCAT44(uStack_ac,iStack_b0);
    local_d8 = pTVar3;
    local_c8 = puVar16;
    local_a8 = pTVar3;
    TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar16;
    if ((((int)uVar24 < 0) || (iVar14 < (int)uVar24)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
    uVar4 = *(uint *)&(this->UDS_PropsMap).field_0x28;
    if (uVar24 != uVar4) {
      puVar25 = *(undefined1 **)&(this->UDS_PropsMap).field_0x20;
      if (puVar25 == (undefined1 *)0x0) {
        puVar25 = puVar16;
      }
      uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar22 * 4);
      while (uVar24 == 0) {
        iVar22 = iVar22 + 1;
        uVar23 = uVar23 + 0x20;
        uVar24 = uVar4;
        if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar22)
        goto LAB_14a0657f0;
        uVar24 = *(uint *)(puVar25 + (longlong)iVar22 * 4);
      }
      uVar1 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_e0 = (int)lVar7;
      uVar24 = local_e0 + -1 + uVar23;
      if ((int)uVar4 < (int)uVar24) {
        uVar24 = uVar4;
      }
    }
LAB_14a0657f0:
    pTVar9 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TSparseArray<TSparseSetElement<TTuple<FString,FWN_UDS_PropertyGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_a0.CurrentBitIndex == uVar24) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar16)) && (pTVar9 == pTVar3))
    {
      return true;
    }
    lVar7 = *(longlong *)pTVar9;
    plVar5 = *(longlong **)(lVar7 + 0x18 + (longlong)TStack_a0.CurrentBitIndex * 0x28);
    pFVar6 = *(FProperty **)(lVar7 + 0x10 + (longlong)TStack_a0.CurrentBitIndex * 0x28);
    if ((plVar5 != (longlong *)0x0) && (pFVar6 != (FProperty *)0x0)) {
      pvVar19 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          (pFVar6,(UObject *)(this->UDS).field0_0x0.DebugPtr,0);
      if (pvVar19 == (void *)0x0) {
        iVar14 = 0x406;
        paVar21 = &bGEnsureHasExecuted<7962263059135726598>;
        goto LAB_14a06597b;
      }
      pFVar2 = &(this->PreviousState).UDS_Setting;
      cVar13 = (**(code **)(*plVar5 + 0x70))(plVar5);
      if (cVar13 == '\0') {
        if (((int)plVar5[6] < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        if ((pFVar2 == (FWN_Ultra_Dynamic_Sky *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        _Dst = (void *)((longlong)&pFVar2->Property1 + (longlong)*(int *)((longlong)plVar5 + 0x44));
        if (_Dst != pvVar19) {
          if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) == 0) {
            (**(code **)(*plVar5 + 0xf0))(plVar5,_Dst,pvVar19,(int)plVar5[6]);
          }
          else {
            memcpy(_Dst,pvVar19,
                   (longlong)*(int *)((longlong)plVar5 + 0x34) * (longlong)(int)plVar5[6]);
          }
        }
      }
      else {
        (**(code **)(*plVar5 + 0x88))(plVar5);
      }
      TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
      goto LAB_14a0657f0;
    }
    iVar14 = 0x40c;
    paVar21 = &bGEnsureHasExecuted<7962263059135726604>;
LAB_14a06597b:
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (paVar21,false,
                        "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                        ,iVar14,"false");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      uVar11 = (*pcVar8)();
      return (bool)uVar11;
    }
  }
  return false;
}

// Tick @ 14a0659f0

void __thiscall UWN_UDS_Subsystem::Tick(UWN_UDS_Subsystem *this,float param_1)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  double dVar10;
  undefined4 in_XMM1_Db;
  double dVar11;
  double local_res8;
  TArray<TObjectPtr<UWN_TODReactComponent>,TSizedDefaultAllocator<32>_> local_58;
  FString local_48 [4];
  
  UTickableWorldSubsystem::Tick((UTickableWorldSubsystem *)this,param_1);
  if (*(longlong *)&(this->CurrentState).UDS_Setting.Property485 == 0) {
    return;
  }
  bVar6 = TWeakObjectPtr<AWN_UDS_Volume,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AWN_UDS_Volume,FWeakObjectPtr> *)&this->_padding_,(void *)0x0);
  if (bVar6) {
    return;
  }
  dVar11 = (this->CurrentState).UDS_Setting.Property486;
  if (((0.0 <= dVar11) &&
      (dVar11 = dVar11 - (double)param_1, (this->CurrentState).UDS_Setting.Property486 = dVar11,
      dVar11 <= 0.0)) &&
     (bVar6 = LogicallyEnterAfterDelay
                        ((UWN_UDS_Subsystem *)&this[-1].UDS_PropsExceptTODMap.field_0x48), bVar6)) {
    (this->CurrentState).UDS_Setting.Property486 = -1.0;
    ::FString::FString(local_48,L"Logical Entered");
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
  }
  dVar11 = __real_bff0000000000000;
  pFVar2 = (this->CurrentState).UDS_Setting.Property487.Data.AllocatorInstance.Data;
  if ((double)pFVar2 != __real_bff0000000000000) {
    if (((0.0 <= (double)pFVar2) &&
        (dVar10 = (this->PreviousState).UDS_Setting.Property484,
        pdVar1 = (double *)((longlong)dVar10 + 0x18),
        (double)pFVar2 < *pdVar1 || (double)pFVar2 == *pdVar1)) &&
       (((this->CurrentState).UDS_Setting.Property487.Data.AllocatorInstance.Data =
              (FScriptContainerElement *)((double)pFVar2 - (double)param_1), dVar10 == 0.0 &&
        (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7962263059135726309>,false,
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                            ,0x2e5,"false"), bVar6)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (dVar11 == (double)(this->CurrentState).UDS_Setting.Property487.Data.AllocatorInstance.Data)
    {
      (this->CurrentState).UDS_Setting.Property486 = -1.0;
    }
  }
  if (*(char *)((longlong)&(this->CurrentState).UDS_Setting.Property487.Data.ArrayNum + 2) != '\0')
  {
    if (*(longlong *)&(this->CurrentState).UDS_Setting.Property485 != 0) {
      dVar10 = (this->CurrentState).UDS_Setting.Property489;
      local_res8 = 0.0;
      if (dVar10 < 0.0) {
        if (((this->PreviousState).UDS_Setting.Property484 == 0.0) &&
           (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<7962263059135726493>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                               ,0x39d,"false"), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(char *)(this->PreviousState).UDS_Setting.Property484 == '\0') goto LAB_14a065bc2;
        dVar10 = *(double *)&(this->CurrentState).UDS_Setting.Property488;
      }
      local_res8 = dVar10;
      SetTODCurrentSetting
                ((UWN_UDS_Subsystem *)&this[-1].UDS_PropsExceptTODMap.field_0x48,&local_res8);
    }
LAB_14a065bc2:
    *(undefined1 *)((longlong)&(this->CurrentState).UDS_Setting.Property487.Data.ArrayNum + 2) = 0;
  }
  bVar6 = UpdateUDS_Setting((UWN_UDS_Subsystem *)&this[-1].UDS_PropsExceptTODMap.field_0x48);
  if ((!bVar6) &&
     (pFVar2 = (this->CurrentState).UDS_Setting.Property487.Data.AllocatorInstance.Data,
     (double)pFVar2 != dVar11)) {
    (this->CurrentState).UDS_Setting.Property487.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)((double)param_1 + (double)pFVar2);
  }
  CheckDawnDuskChanged((UWN_UDS_Subsystem *)&this[-1].UDS_PropsExceptTODMap.field_0x48);
  cVar3 = (this->UpdatableReactComponents).Elements.field_0x18;
  *(undefined1 *)((longlong)&this->UDS_BPClass + 2) = 0;
  if (cVar3 != '\0') {
    if (*(char *)((longlong)&this->UDS_BPClass + 1) == '\x02') {
      WN_gTODDayNightTransitionRatio = WN_gTODDayNightTransitionRatio - param_1;
      if (0.0 <= WN_gTODDayNightTransitionRatio) goto LAB_14a065c7b;
      WN_gTODDayNightTransitionRatio = 0.0;
    }
    else {
      WN_gTODDayNightTransitionRatio = WN_gTODDayNightTransitionRatio + param_1;
      if (WN_gTODDayNightTransitionRatio <= __real_3f800000) goto LAB_14a065c7b;
      WN_gTODDayNightTransitionRatio = 1.0;
    }
    (this->UpdatableReactComponents).Elements.field_0x18 = 0;
  }
LAB_14a065c7b:
  TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
  ::Array((TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
           *)&(this->AllReactComponentsPerType).field_0x18,&local_58);
  uVar9 = local_58.ArrayNum - 1;
  if (-1 < (int)uVar9) {
    lVar8 = (longlong)(int)uVar9 * 8;
    do {
      uVar7 = 0;
      if ((int)uVar9 < local_58.ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar4 = *(UObject **)(local_58.AllocatorInstance.Data + lVar8);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar4 != (UObject *)0x0) goto LAB_14a065d20;
      }
      else if (pUVar4 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar4);
LAB_14a065d20:
        if ((*(uint *)&pUVar4->field_0x8 >> 0x1e & 1) == 0) {
          (**(code **)(*(longlong *)pUVar4 + 0x4f8))(pUVar4,CONCAT44(in_XMM1_Db,param_1));
        }
      }
      lVar8 = lVar8 + -8;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// UnRegisterReactComponent @ 14a066240

void __thiscall
UWN_UDS_Subsystem::UnRegisterReactComponent(UWN_UDS_Subsystem *this,UWN_TODReactComponent *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TObjectPtr<UWN_ReactComponentContext> TVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TObjectPtr<UWN_ReactComponentContext>_u_0 *pTVar8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  int local_38 [2];
  UWN_TODReactComponent *local_30;
  FWeakObjectPtr local_28 [2];
  
  if ((param_1 != (UWN_TODReactComponent *)0x0) && (iVar7 = param_1->IndexInSubsystem, iVar7 != -1))
  {
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = 0;
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    (param_1->UDS_Subsystem).WeakPtr = local_res18;
    param_1->IndexInSubsystem = -1;
    local_38[0] = iVar7;
    if ((iVar7 < (this->ReactComponentIndexAllocator).BaseIndex) ||
       ((this->ReactComponentIndexAllocator).NumIndices <= iVar7)) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<668991184131063845>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Common\\Source\\WN_Common\\Public\\WN_UniqueIndexAllocator.h"
                         ,0x25,"false");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      pTVar2 = &(this->ReactComponentIndexAllocator).FreedIndices;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 <
           pFVar3 + (longlong)(this->ReactComponentIndexAllocator).FreedIndices.ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (this->ReactComponentIndexAllocator).FreedIndices.ArrayNum;
      piVar1 = &(this->ReactComponentIndexAllocator).FreedIndices.ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ReactComponentIndexAllocator).FreedIndices.ArrayNum = iVar7 + 1;
      *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_38[0];
    }
    pTVar8 = &TMapBase<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
              ::Find((TMapBase<UClass_*,TObjectPtr<UWN_ReactComponentContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TObjectPtr<UWN_ReactComponentContext>,0>_>
                      *)&this->AllReactComponentsPerType,(UClass *)param_1->_padding_)->field0_0x0;
    TVar4.field0_0x0 = (TObjectPtr<UWN_ReactComponentContext>_u_0)pTVar8->DebugPtr;
    if (TVar4.field0_0x0 != (UWN_ReactComponentContext *)0x0) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable((UObject *)TVar4.field0_0x0),
         UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_30 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_30);
      local_28[0] = local_res10;
      if (*(int *)((longlong)TVar4.field0_0x0 + 0x30) != *(int *)((longlong)TVar4.field0_0x0 + 0x5c)
         ) {
        TSet<TWeakObjectPtr<UWN_TODReactComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_TODReactComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::RemoveImpl<TWeakObjectPtr<UWN_TODReactComponent_const_,FWeakObjectPtr>_>
                  ((TSet<TWeakObjectPtr<UWN_TODReactComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_TODReactComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)((longlong)TVar4.field0_0x0 + 0x28),
                   local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                   (TWeakObjectPtr<UWN_TODReactComponent_const_,FWeakObjectPtr> *)local_28);
      }
    }
  }
  return;
}

// UnRegisterUDS @ 14a066450

void __thiscall UWN_UDS_Subsystem::UnRegisterUDS(UWN_UDS_Subsystem *this,AWN_Ultra_Sky *param_1)

{
  AWN_Ultra_Sky *pAVar1;
  
  if (((param_1 != (AWN_Ultra_Sky *)0x0) &&
      (pAVar1 = (this->UDS).field0_0x0.DebugPtr, pAVar1 != (AWN_Ultra_Sky *)0x0)) &&
     (pAVar1 == param_1)) {
    (this->UDS).field0_0x0.DebugPtr = (AWN_Ultra_Sky *)0x0;
    WN_gTOD = -1.0;
    WN_gDawnTOD = -1.0;
    WN_gDuskTOD = -1.0;
    WN_gTODDayNightTransitionRatio = -1.0;
  }
  return;
}

// UnRegisterUDSGlobalVolume @ 14a0664b0

void __thiscall
UWN_UDS_Subsystem::UnRegisterUDSGlobalVolume(UWN_UDS_Subsystem *this,AWN_UDS_GlobalVolume *param_1)

{
  bool bVar1;
  
  if (param_1 != (AWN_UDS_GlobalVolume *)0x0) {
    bVar1 = FWeakObjectPtr::IsValid(&(param_1->UDS_Subsystem).WeakPtr);
    if (bVar1) {
      (param_1->UDS_Subsystem).WeakPtr = (FWeakObjectPtr)0x0;
      (this->UDS_GlobalVolume).field0_0x0.DebugPtr = (AWN_UDS_GlobalVolume *)0x0;
    }
  }
  return;
}

// UpdateBlendTime @ 14a066780

void __thiscall UWN_UDS_Subsystem::UpdateBlendTime(UWN_UDS_Subsystem *this,double param_1)

{
  double *pdVar1;
  double dVar2;
  FWN_UDS_VolumeSetting *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  dVar2 = this->CurrentBlendingTime;
  if (((0.0 <= dVar2) &&
      (pFVar3 = (this->CurrentState).VolumeSetting, pdVar1 = &pFVar3->BlendingTime,
      dVar2 < *pdVar1 || dVar2 == *pdVar1)) &&
     (this->CurrentBlendingTime = dVar2 - param_1, pFVar3 == (FWN_UDS_VolumeSetting *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7962263059135726309>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Env\\Source\\WN_Env\\Private\\WN_UDS_Subsystem.cpp"
                       ,0x2e5,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (__real_bff0000000000000 == this->CurrentBlendingTime) {
    this->DelayTime = -1.0;
  }
  return;
}

// UpdateDelayTime @ 14a066930

void __thiscall UWN_UDS_Subsystem::UpdateDelayTime(UWN_UDS_Subsystem *this,double param_1)

{
  bool bVar1;
  double dVar2;
  FString local_18;
  
  dVar2 = this->DelayTime - param_1;
  this->DelayTime = dVar2;
  if (dVar2 <= 0.0) {
    bVar1 = LogicallyEnterAfterDelay(this);
    if (bVar1) {
      this->DelayTime = -1.0;
      ::FString::FString(&local_18,L"Logical Entered");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// UpdateTOD @ 14a066d90

void __thiscall UWN_UDS_Subsystem::UpdateTOD(UWN_UDS_Subsystem *this,double param_1)

{
  this->GlobalTOD = param_1;
  this->bTODValueChange = true;
  return;
}

// UpdateTODReactComponents @ 14a066db0

void __thiscall UWN_UDS_Subsystem::UpdateTODReactComponents(UWN_UDS_Subsystem *this,float param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  TArray<TObjectPtr<UWN_TODReactComponent>,TSizedDefaultAllocator<32>_> local_28 [2];
  
  TSet<TObjectPtr<UWN_TODReactComponent>,DefaultKeyFuncs<TObjectPtr<UWN_TODReactComponent>,0>,FDefaultSetAllocator>
  ::Array(&this->UpdatableReactComponents,local_28);
  uVar6 = local_28[0].ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar5 = (longlong)(int)uVar6 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar6 < local_28[0].ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar1 = *(UObject **)(local_28[0].AllocatorInstance.Data + lVar5);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar1 != (UObject *)0x0) goto LAB_14a066e70;
      }
      else if (pUVar1 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar1);
LAB_14a066e70:
        if ((*(uint *)&pUVar1->field_0x8 >> 0x1e & 1) == 0) {
          (**(code **)(*(longlong *)pUVar1 + 0x4f8))(pUVar1,param_1);
        }
      }
      lVar5 = lVar5 + -8;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  if (local_28[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].AllocatorInstance.Data);
  }
  return;
}

// UpdateUDSImmediately @ 14a066f10

void __thiscall
UWN_UDS_Subsystem::UpdateUDSImmediately
          (UWN_UDS_Subsystem *this,FString *param_1,void *param_2,double *param_3)

{
  FProperty *this_00;
  double *pdVar1;
  wchar_t *pwVar2;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  this_00 = FindFProperty<FProperty>
                      ((UStruct *)((this->UDS).field0_0x0.DebugPtr)->_padding_,pwVar2,Default);
  if (this_00 != (FProperty *)0x0) {
    if (param_3 != (double *)0x0) {
      pdVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         (this_00,(UObject *)(this->UDS).field0_0x0.DebugPtr,0);
      if (pdVar1 != (double *)0x0) {
        *param_3 = *pdVar1;
      }
    }
    FProperty::SetValue_InContainer(this_00,(this->UDS).field0_0x0.DebugPtr,param_2);
  }
  return;
}

// UpdateUDSProcess @ 14a066fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWN_UDS_Subsystem::UpdateUDSProcess(UWN_UDS_Subsystem *this)

{
  UClass *this_00;
  AWN_Ultra_Sky *pAVar1;
  bool bVar2;
  UWorld *this_01;
  FName *pFVar3;
  UFunction *pUVar4;
  FName local_res10 [3];
  
  this_01 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  bVar2 = UWorld::IsPlayInEditor(this_01);
  if ((!bVar2) && (bVar2 = UWorld::IsGameWorld(this_01), !bVar2)) {
    return;
  }
  this_00 = this->UDS_BPClass;
  if (this_00 != (UClass *)0x0) {
    pFVar3 = ::FName::FName(local_res10,"Update Static Variables");
    pUVar4 = UClass::FindFunctionByName(this_00,*pFVar3,IncludeSuper);
    if (pUVar4 != (UFunction *)0x0) {
      pAVar1 = (this->UDS).field0_0x0.DebugPtr;
      (**(code **)(pAVar1->_padding_ + 0x260))(pAVar1,pUVar4,0);
    }
  }
  return;
}

// UpdateUDS_Setting @ 14a067040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWN_UDS_Subsystem::UpdateUDS_Setting(UWN_UDS_Subsystem *this)

{
  FWN_Ultra_Dynamic_Sky *pFVar1;
  undefined1 *puVar2;
  FWN_Ultra_Dynamic_Sky *pFVar3;
  EWN_UDS_DirtyMode EVar4;
  FWN_UDS_VolumeSetting *pFVar5;
  FProperty *pFVar6;
  longlong lVar7;
  FProperty *this_00;
  longlong lVar8;
  UClass *this_01;
  AWN_Ultra_Sky *pAVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  double dVar15;
  TMap<FString,FWN_UDS_PropertyGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>_>
  *pTVar16;
  bool bVar17;
  undefined1 uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  double *pdVar23;
  UWorld *this_02;
  FName *pFVar24;
  UFunction *pUVar25;
  longlong lVar26;
  void *pvVar27;
  wchar_t *pwVar28;
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 *puVar34;
  uint uVar35;
  uint *puVar36;
  void *pvVar37;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  TMap<FString,FWN_UDS_PropertyGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>_>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  FName local_c8 [4];
  undefined4 local_a4;
  undefined4 local_84;
  ulonglong uVar33;
  
  dVar15 = __real_3ff0000000000000;
  if (((this->UDS).field0_0x0.DebugPtr == (AWN_Ultra_Sky *)0x0) ||
     (EVar4 = this->DirtyMode, EVar4 == None)) {
    return false;
  }
  if (((EVar4 & All) == None) && ((EVar4 & TOD) == None)) {
    bVar17 = false;
LAB_14a067091:
    if ((EVar4 & AllExceptTOD) != None) goto LAB_14a06709a;
    bVar14 = false;
  }
  else {
    bVar17 = true;
    if ((EVar4 & All) == None) goto LAB_14a067091;
LAB_14a06709a:
    bVar14 = true;
  }
  pFVar5 = (this->CurrentState).VolumeSetting;
  if (((pFVar5 == (FWN_UDS_VolumeSetting *)0x0) ||
      (this->CurrentBlendingTime == __real_bff0000000000000)) || (this->bCanBlending != true)) {
    uVar33 = 0;
    uVar35 = 0;
    if (bVar17) {
      iVar20 = sPropNameTOD.Data.ArrayNum + -1;
      FVar13.Data = sPropNameTOD.Data.AllocatorInstance.Data;
      if (sPropNameTOD.Data.ArrayNum == 0) {
        iVar20 = 0;
        FVar13.Data = (FScriptContainerElement *)L"";
      }
      uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar20,(wchar_t *)FVar13.Data);
      iVar20 = TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                           *)&this->UDS_PropsOfTODMap,uVar19,&sPropNameTOD);
      if (iVar20 != -1) {
        uVar19 = sPropNameTOD.Data.ArrayNum - 1;
        FVar13 = sPropNameTOD.Data.AllocatorInstance;
        if (sPropNameTOD.Data.ArrayNum == 0) {
          uVar19 = uVar35;
          FVar13.Data = (FScriptContainerElement *)L"";
        }
        uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar19,(wchar_t *)FVar13.Data);
        iVar20 = TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                             *)&this->UDS_PropsOfTODMap,uVar19,&sPropNameTOD);
        uVar29 = uVar33;
        if (((iVar20 == -1) ||
            (uVar29 = *(longlong *)&this->UDS_PropsOfTODMap + (longlong)iVar20 * 0x28, uVar29 == 0))
           && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar17)) {
          pcVar10 = (code *)swi(3);
          uVar18 = (*pcVar10)();
          return (bool)uVar18;
        }
        pFVar6 = *(FProperty **)(uVar29 + 0x10);
        if ((pFVar6 != (FProperty *)0x0) && (lVar26 = *(longlong *)(uVar29 + 0x18), lVar26 != 0)) {
          pFVar1 = &(this->CurrentState).UDS_Setting;
          if ((*(int *)(lVar26 + 0x30) < 1) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          if ((pFVar1 == (FWN_Ultra_Dynamic_Sky *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          pdVar23 = (double *)((longlong)&pFVar1->Property1 + (longlong)*(int *)(lVar26 + 0x44));
          if (pdVar23 != (double *)0x0) {
            FProperty::SetValue_InContainer(pFVar6,(this->UDS).field0_0x0.DebugPtr,pdVar23);
            WN_gTOD = (float)*pdVar23;
          }
        }
      }
    }
    if (bVar14) {
      puVar2 = &(this->UDS_PropsExceptTODMap).field_0x10;
      uVar19 = *(uint *)&(this->UDS_PropsExceptTODMap).field_0x28;
      local_f8 = &this->UDS_PropsExceptTODMap;
      uVar32 = 1;
      uVar21 = uVar35;
      uVar22 = uVar35;
      if (uVar19 != 0) {
        puVar36 = *(uint **)&(this->UDS_PropsExceptTODMap).field_0x20;
        if (puVar36 == (uint *)0x0) {
          puVar36 = (uint *)puVar2;
        }
        uVar21 = *puVar36;
        uVar29 = uVar33;
        uVar22 = 0;
        uVar35 = 0;
        while (uVar21 == 0) {
          iVar20 = (int)uVar33;
          uVar22 = (int)uVar29 + 0x20;
          uVar29 = (ulonglong)uVar22;
          uVar35 = iVar20 + 1;
          uVar33 = (ulonglong)uVar35;
          uVar21 = uVar19;
          if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar35)
          goto LAB_14a0678cf;
          uVar21 = puVar36[(longlong)iVar20 + 1];
        }
        uVar32 = -uVar21 & uVar21;
        uVar33 = (ulonglong)uVar32 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar33 != 0) {
          for (; uVar33 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        uVar21 = (uVar22 - 1) + (int)lVar26;
        if ((int)uVar19 < (int)uVar21) {
          uVar21 = uVar19;
        }
      }
LAB_14a0678cf:
      uVar30 = *(uint *)&(this->UDS_PropsExceptTODMap).field_0x28;
      uVar31 = uVar30 & 0xffffffe0;
      TStack_f0._padding_ = CONCAT44(uVar32,uVar35);
      TStack_f0.CurrentBitIndex = uVar21;
      TStack_f0.UnvisitedBitMask = 0xffffffff;
      iVar20 = (int)uVar30 >> 5;
      TStack_f0._28_4_ = local_84;
      TStack_f0.BaseBitIndex = uVar22;
      uStack_d0 = CONCAT44(uStack_14c,
                           *(int *)&(this->UDS_PropsExceptTODMap).field_0x8 -
                           *(int *)&(this->UDS_PropsExceptTODMap).field_0x34);
      TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar30 < 0) || ((int)uVar19 < (int)uVar30)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar17)) {
        pcVar10 = (code *)swi(3);
        uVar18 = (*pcVar10)();
        return (bool)uVar18;
      }
      uVar35 = *(uint *)&(this->UDS_PropsExceptTODMap).field_0x28;
      if (uVar30 != uVar35) {
        puVar34 = *(undefined1 **)&(this->UDS_PropsExceptTODMap).field_0x20;
        if (puVar34 == (undefined1 *)0x0) {
          puVar34 = puVar2;
        }
        uVar19 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar34 + (longlong)iVar20 * 4);
        while (uVar19 == 0) {
          lVar26 = (longlong)iVar20;
          uVar31 = uVar31 + 0x20;
          iVar20 = iVar20 + 1;
          uVar30 = uVar35;
          if ((int)((uVar35 - 1) + ((int)(uVar35 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_14a0679e0;
          uVar19 = *(uint *)(puVar34 + lVar26 * 4 + 4);
        }
        uVar33 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar26 = 0x3f;
        if (uVar33 != 0) {
          for (; uVar33 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        uVar30 = (uVar31 - 1) + (int)lVar26;
        if ((int)uVar35 < (int)uVar30) {
          uVar30 = uVar35;
        }
      }
LAB_14a0679e0:
      do {
        pTVar16 = local_f8;
        if (*(int *)&local_f8->field_0x8 - *(int *)&local_f8->field_0x34 != (int)uStack_d0) {
          local_res10[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,FWN_UDS_PropertyGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        lVar26 = (longlong)TStack_f0.CurrentBitIndex;
        if (((TStack_f0.CurrentBitIndex == uVar30) &&
            (TStack_f0.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)&(this->UDS_PropsExceptTODMap).field_0x10)) &&
           (pTVar16 == &this->UDS_PropsExceptTODMap)) {
          SetDayNightUDS(this);
          break;
        }
        lVar7 = *(longlong *)pTVar16;
        iVar20 = *(int *)(lVar7 + 8 + lVar26 * 0x28);
        if (iVar20 == sPropNameTOD.Data.ArrayNum) {
          if (1 < iVar20) {
            iVar20 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)(lVar7 + lVar26 * 0x28),
                                (wchar_t *)sPropNameTOD.Data.AllocatorInstance.Data);
            bVar17 = iVar20 == 0;
            goto LAB_14a067a51;
          }
        }
        else {
          bVar17 = iVar20 + sPropNameTOD.Data.ArrayNum == 1;
LAB_14a067a51:
          if (((!bVar17) && (lVar8 = *(longlong *)(lVar7 + 0x18 + lVar26 * 0x28), lVar8 != 0)) &&
             (pFVar6 = *(FProperty **)(lVar7 + 0x10 + lVar26 * 0x28), pFVar6 != (FProperty *)0x0)) {
            pFVar1 = &(this->CurrentState).UDS_Setting;
            if ((*(int *)(lVar8 + 0x30) < 1) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2dd,L"Array index out of bounds: %i from an array of size %i"
                                   ), bVar17)) {
              pcVar10 = (code *)swi(3);
              uVar18 = (*pcVar10)();
              return (bool)uVar18;
            }
            if ((pFVar1 == (FWN_Ultra_Dynamic_Sky *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ContainerPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2de,L""), bVar17)) {
              pcVar10 = (code *)swi(3);
              uVar18 = (*pcVar10)();
              return (bool)uVar18;
            }
            pdVar23 = (double *)((longlong)&pFVar1->Property1 + (longlong)*(int *)(lVar8 + 0x44));
            if (pdVar23 != (double *)0x0) {
              FProperty::SetValue_InContainer(pFVar6,(this->UDS).field0_0x0.DebugPtr,pdVar23);
              if (*(int *)(lVar7 + 8 + lVar26 * 0x28) == 0) {
                pwVar28 = L"";
              }
              else {
                pwVar28 = *(wchar_t **)(lVar7 + lVar26 * 0x28);
              }
              iVar20 = FGenericPlatformStricmp::Stricmp(pwVar28,L"Dawn Time");
              if (iVar20 == 0) {
                WN_gDawnTOD = (float)*pdVar23;
              }
              else {
                if (*(int *)(lVar7 + 8 + lVar26 * 0x28) == 0) {
                  pwVar28 = L"";
                }
                else {
                  pwVar28 = *(wchar_t **)(lVar7 + lVar26 * 0x28);
                }
                iVar20 = FGenericPlatformStricmp::Stricmp(pwVar28,L"Dusk Time");
                if (iVar20 == 0) {
                  WN_gDuskTOD = (float)*pdVar23;
                }
              }
            }
          }
        }
        TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
      } while( true );
    }
  }
  else {
    dVar11 = (pFVar5->BlendingTime - this->CurrentBlendingTime) / pFVar5->BlendingTime;
    if (__real_3ff0000000000000 < dVar11) {
      dVar11 = __real_3ff0000000000000;
    }
    dVar12 = dVar11;
    if (pFVar5->BlendMode == AllExceptTOD) {
      dVar12 = __real_3ff0000000000000;
    }
    uVar33 = 0;
    uVar35 = 0;
    if (bVar17) {
      uVar19 = sPropNameTOD.Data.ArrayNum - 1;
      FVar13.Data = sPropNameTOD.Data.AllocatorInstance.Data;
      if (sPropNameTOD.Data.ArrayNum == 0) {
        uVar19 = uVar35;
        FVar13.Data = (FScriptContainerElement *)L"";
      }
      uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar19,(wchar_t *)FVar13.Data);
      iVar20 = TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                           *)&this->UDS_PropsOfTODMap,uVar19,&sPropNameTOD);
      if (iVar20 != -1) {
        uVar19 = sPropNameTOD.Data.ArrayNum - 1;
        FVar13 = sPropNameTOD.Data.AllocatorInstance;
        if (sPropNameTOD.Data.ArrayNum == 0) {
          uVar19 = uVar35;
          FVar13.Data = (FScriptContainerElement *)L"";
        }
        uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar19,(wchar_t *)FVar13.Data);
        iVar20 = TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,FWN_UDS_PropertyGroup>,TDefaultMapHashableKeyFuncs<FString,FWN_UDS_PropertyGroup,0>,FDefaultSetAllocator>
                             *)&this->UDS_PropsOfTODMap,uVar19,&sPropNameTOD);
        uVar29 = uVar33;
        if (((iVar20 == -1) ||
            (uVar29 = *(longlong *)&this->UDS_PropsOfTODMap + (longlong)iVar20 * 0x28, uVar29 == 0))
           && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar17)) {
          pcVar10 = (code *)swi(3);
          uVar18 = (*pcVar10)();
          return (bool)uVar18;
        }
        if (((*(FProperty **)(uVar29 + 0x10) != (FProperty *)0x0) &&
            (pFVar6 = *(FProperty **)(uVar29 + 0x18), pFVar6 != (FProperty *)0x0)) &&
           (pdVar23 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                (*(FProperty **)(uVar29 + 0x10),
                                 (UObject *)(this->UDS).field0_0x0.DebugPtr,0),
           pdVar23 != (double *)0x0)) {
          BlendingTOD(this,pFVar6,&(this->PreviousState).UDS_Setting,
                      &(this->CurrentState).UDS_Setting,(float)dVar12,pdVar23);
          WN_gTOD = (float)*pdVar23;
        }
      }
    }
    dVar12 = dVar11;
    if (((this->CurrentState).VolumeSetting)->BlendMode == TODOnly) {
      dVar12 = dVar15;
    }
    if (bVar14) {
      puVar2 = &(this->UDS_PropsExceptTODMap).field_0x10;
      uVar19 = *(uint *)&(this->UDS_PropsExceptTODMap).field_0x28;
      uVar21 = 1;
      uVar22 = uVar35;
      if (uVar19 != 0) {
        puVar36 = *(uint **)&(this->UDS_PropsExceptTODMap).field_0x20;
        if (puVar36 == (uint *)0x0) {
          puVar36 = (uint *)puVar2;
        }
        uVar22 = *puVar36;
        uVar29 = uVar33;
        while (uVar22 == 0) {
          iVar20 = (int)uVar33;
          uVar35 = (int)uVar29 + 0x20;
          uVar29 = (ulonglong)uVar35;
          uVar32 = iVar20 + 1;
          uVar33 = (ulonglong)uVar32;
          uVar22 = uVar19;
          if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar32)
          goto LAB_14a067311;
          uVar22 = puVar36[(longlong)iVar20 + 1];
        }
        uVar21 = -uVar22 & uVar22;
        uVar29 = (ulonglong)uVar21 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        local_res20 = (int)lVar26;
        uVar22 = (uVar35 - 1) + local_res20;
        if ((int)uVar19 < (int)uVar22) {
          uVar22 = uVar19;
        }
      }
LAB_14a067311:
      uVar32 = *(uint *)&(this->UDS_PropsExceptTODMap).field_0x28;
      uVar30 = uVar32 & 0xffffffe0;
      TStack_120._padding_ = CONCAT44(uVar21,(int)uVar33);
      TStack_120.CurrentBitIndex = uVar22;
      TStack_120.UnvisitedBitMask = 0xffffffff;
      iVar20 = (int)uVar32 >> 5;
      TStack_120._28_4_ = local_a4;
      TStack_120.BaseBitIndex = uVar35;
      uStack_100 = CONCAT44(uStack_14c,
                            *(int *)&(this->UDS_PropsExceptTODMap).field_0x8 -
                            *(int *)&(this->UDS_PropsExceptTODMap).field_0x34);
      local_res18 = uVar32;
      TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar32 < 0) || ((int)uVar19 < (int)uVar32)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar17)) {
        pcVar10 = (code *)swi(3);
        uVar18 = (*pcVar10)();
        return (bool)uVar18;
      }
      uVar35 = *(uint *)&(this->UDS_PropsExceptTODMap).field_0x28;
      if (uVar32 != uVar35) {
        puVar34 = *(undefined1 **)&(this->UDS_PropsExceptTODMap).field_0x20;
        if (puVar34 == (undefined1 *)0x0) {
          puVar34 = puVar2;
        }
        uVar19 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar34 + (longlong)iVar20 * 4);
        while (uVar19 == 0) {
          lVar26 = (longlong)iVar20;
          uVar30 = uVar30 + 0x20;
          iVar20 = iVar20 + 1;
          uVar32 = uVar35;
          local_res18 = uVar35;
          if ((int)((uVar35 - 1) + ((int)(uVar35 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_14a067440;
          uVar19 = *(uint *)(puVar34 + lVar26 * 4 + 4);
        }
        uVar33 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar26 = 0x3f;
        if (uVar33 != 0) {
          for (; uVar33 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        uVar32 = (uVar30 - 1) + (int)lVar26;
        local_res18 = uVar32;
        if ((int)uVar35 < (int)uVar32) {
          uVar32 = uVar35;
          local_res18 = uVar35;
        }
      }
LAB_14a067440:
      while( true ) {
        if (*(int *)&(this->UDS_PropsExceptTODMap).field_0x8 -
            *(int *)&(this->UDS_PropsExceptTODMap).field_0x34 != (int)uStack_100) {
          local_res8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,FWN_UDS_PropertyGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        lVar26 = (longlong)TStack_120.CurrentBitIndex;
        if ((TStack_120.CurrentBitIndex == uVar32) &&
           (TStack_120.Array ==
            (TBitArray<FDefaultBitArrayAllocator> *)&(this->UDS_PropsExceptTODMap).field_0x10))
        break;
        lVar7 = *(longlong *)&this->UDS_PropsExceptTODMap;
        pFVar6 = *(FProperty **)(lVar7 + 0x18 + lVar26 * 0x28);
        if ((pFVar6 != (FProperty *)0x0) &&
           (this_00 = *(FProperty **)(lVar7 + 0x10 + lVar26 * 0x28), this_00 != (FProperty *)0x0)) {
          pFVar1 = &(this->PreviousState).UDS_Setting;
          if ((pFVar6->ArrayDim < 1) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          if ((pFVar1 == (FWN_Ultra_Dynamic_Sky *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          pFVar3 = &(this->CurrentState).UDS_Setting;
          pvVar37 = (void *)((longlong)&pFVar1->Property1 + (longlong)pFVar6->Offset_Internal);
          if ((pFVar6->ArrayDim < 1) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          if ((pFVar3 == (FWN_Ultra_Dynamic_Sky *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          pvVar27 = (void *)((longlong)&pFVar3->Property1 + (longlong)pFVar6->Offset_Internal);
          pdVar23 = FProperty::ContainerUObjectPtrToValuePtrInternal
                              (this_00,(UObject *)(this->UDS).field0_0x0.DebugPtr,0);
          if (((pvVar27 != (void *)0x0) && (pvVar37 != (void *)0x0)) && (pdVar23 != (double *)0x0))
          {
            BlendingPropByType(this,pFVar6,this_00,&(this->PreviousState).UDS_Setting,pFVar3,
                               (this->UDS).field0_0x0.DebugPtr,pvVar37,pvVar27,pdVar23,(float)dVar12
                              );
            if (*(int *)(lVar7 + 8 + lVar26 * 0x28) == 0) {
              pwVar28 = L"";
            }
            else {
              pwVar28 = *(wchar_t **)(lVar7 + lVar26 * 0x28);
            }
            iVar20 = FGenericPlatformStricmp::Stricmp(pwVar28,L"Dawn Time");
            if (iVar20 == 0) {
              WN_gDawnTOD = (float)*pdVar23;
            }
            else {
              if (*(int *)(lVar7 + 8 + lVar26 * 0x28) == 0) {
                pwVar28 = L"";
              }
              else {
                pwVar28 = *(wchar_t **)(lVar7 + lVar26 * 0x28);
              }
              iVar20 = FGenericPlatformStricmp::Stricmp(pwVar28,L"Dusk Time");
              if (iVar20 == 0) {
                WN_gDuskTOD = (float)*pdVar23;
              }
            }
          }
        }
        TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
        uVar32 = local_res18;
      }
      if (dVar12 == dVar15) {
        SetDayNightUDS(this);
      }
    }
    if (dVar11 != dVar15) goto LAB_14a067bb3;
  }
  this->CurrentBlendingTime = -1.0;
LAB_14a067bb3:
  this_02 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  bVar17 = UWorld::IsPlayInEditor(this_02);
  if (((bVar17) || (bVar17 = UWorld::IsGameWorld(this_02), bVar17)) &&
     (this_01 = this->UDS_BPClass, this_01 != (UClass *)0x0)) {
    pFVar24 = ::FName::FName(local_c8,"Update Static Variables");
    pUVar25 = UClass::FindFunctionByName(this_01,*pFVar24,IncludeSuper);
    if (pUVar25 != (UFunction *)0x0) {
      pAVar9 = (this->UDS).field0_0x0.DebugPtr;
      (**(code **)(pAVar9->_padding_ + 0x260))(pAVar9,pUVar25,0);
    }
  }
  return true;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 56

// StaticClass @ 148ae4870

UClass * __cdecl UWorldPartitionSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionSubsystem",
               &Z_Registration_Info_UClass_UWorldPartitionSubsystem.InnerSingleton,
               StaticRegisterNativesUWorldPartitionSubsystem,0x310,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWorldPartitionSubsystem>,
               InternalVTableHelperCtorCaller<UWorldPartitionSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionSubsystem.InnerSingleton;
}

// UWorldPartitionSubsystem @ 148ae9f40

UWorldPartitionSubsystem * __thiscall
UWorldPartitionSubsystem::UWorldPartitionSubsystem
          (UWorldPartitionSubsystem *this,FVTableHelper *param_1)

{
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = (longlong)&___7UWorldPartitionSubsystem__6B_;
  (this->RegisteredWorldPartitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredWorldPartitions).ArrayNum = 0;
  (this->RegisteredWorldPartitions).ArrayMax = 0;
  *(undefined8 *)&(this->IncrementalUpdateWorldPartitions).Elements = 0;
  *(undefined8 *)&(this->IncrementalUpdateWorldPartitions).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->IncrementalUpdateWorldPartitions).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->IncrementalUpdateWorldPartitions).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->IncrementalUpdateWorldPartitions).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->IncrementalUpdateWorldPartitions).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IncrementalUpdateWorldPartitions).Elements.field_0x34 = 0;
  (this->IncrementalUpdateWorldPartitions).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->IncrementalUpdateWorldPartitions).HashSize = 0;
  *(undefined8 *)&(this->IncrementalUpdateWorldPartitionsPendingAdd).Elements = 0;
  *(undefined8 *)&(this->IncrementalUpdateWorldPartitionsPendingAdd).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->IncrementalUpdateWorldPartitionsPendingAdd).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->IncrementalUpdateWorldPartitionsPendingAdd).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->IncrementalUpdateWorldPartitionsPendingAdd).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->IncrementalUpdateWorldPartitionsPendingAdd).Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->IncrementalUpdateWorldPartitionsPendingAdd).Elements.field_0x34 = 0;
  (this->IncrementalUpdateWorldPartitionsPendingAdd).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->IncrementalUpdateWorldPartitionsPendingAdd).HashSize = 0;
  *(undefined8 *)&(this->StreamingSourceProviders).Elements = 0;
  *(undefined8 *)&(this->StreamingSourceProviders).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StreamingSourceProviders).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StreamingSourceProviders).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StreamingSourceProviders).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StreamingSourceProviders).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StreamingSourceProviders).Elements.field_0x34 = 0;
  (this->StreamingSourceProviders).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StreamingSourceProviders).HashSize = 0;
  *(undefined8 *)&this->IsStreamingSourceProviderFiltered = 0;
  *(undefined8 *)&(this->IsStreamingSourceProviderFiltered).field_0x8 = 0;
  *(undefined4 *)&(this->IsStreamingSourceProviderFiltered).field_0x10 = 0;
  *(undefined8 *)&this->StreamingStateUpdated = 0;
  *(undefined8 *)&(this->StreamingStateUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->StreamingStateUpdated).field_0x10 = 0;
  *(undefined8 *)&(this->StreamingStateUpdated).field_0x18 = 2;
  (this->StreamingSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingSources).ArrayNum = 0;
  (this->StreamingSources).ArrayMax = 0;
  *(undefined8 *)&this->StreamingSourcesVelocity = 0;
  *(undefined8 *)&(this->StreamingSourcesVelocity).field_0x8 = 0;
  *(undefined8 *)&(this->StreamingSourcesVelocity).field_0x20 = 0;
  *(undefined4 *)&(this->StreamingSourcesVelocity).field_0x28 = 0;
  *(undefined4 *)&(this->StreamingSourcesVelocity).field_0x2c = 0x80;
  *(undefined4 *)&(this->StreamingSourcesVelocity).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StreamingSourcesVelocity).field_0x34 = 0;
  *(undefined8 *)&(this->StreamingSourcesVelocity).field_0x40 = 0;
  *(undefined4 *)&(this->StreamingSourcesVelocity).field_0x48 = 0;
  *(undefined8 *)&(this->ServerClientsVisibleLevelNames).Elements = 0;
  *(undefined8 *)&(this->ServerClientsVisibleLevelNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ServerClientsVisibleLevelNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ServerClientsVisibleLevelNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ServerClientsVisibleLevelNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ServerClientsVisibleLevelNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ServerClientsVisibleLevelNames).Elements.field_0x34 = 0;
  (this->ServerClientsVisibleLevelNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ServerClientsVisibleLevelNames).HashSize = 0;
  (this->WorldPartitionsDraw2DContext).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldPartitionsDraw2DContext).ArrayNum = 0;
  (this->WorldPartitionsDraw2DContext).ArrayMax = 0;
  (this->DrawHandle).ID = 0;
  *(undefined8 *)&this->WorldPartitionUninitializationPendingStreamingLevels = 0;
  *(undefined8 *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x8 = 0;
  *(undefined8 *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x20 = 0;
  *(undefined4 *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x28 = 0;
  *(undefined4 *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x34 = 0;
  *(undefined8 *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x40 = 0;
  *(undefined4 *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x48 = 0;
  *(undefined8 *)&(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Elements = 0;
  *(undefined8 *)&(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Elements.field_0x20 = 0
  ;
  *(undefined4 *)&(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Elements.field_0x28 = 0
  ;
  *(undefined4 *)&(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Elements.field_0x2c =
       0x80;
  *(undefined4 *)&(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Elements.field_0x34 = 0
  ;
  *(undefined4 *)&(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Elements.field_0x30 =
       0xffffffff;
  (this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->WorldPartitionLoadingAndPendingLoadStreamingLevels).HashSize = 0;
  this->bHasBegunPlay = false;
  return this;
}

// UWorldPartitionSubsystem @ 148aea1b0

UWorldPartitionSubsystem * __thiscall
UWorldPartitionSubsystem::UWorldPartitionSubsystem(UWorldPartitionSubsystem *this)

{
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = (longlong)&___7UWorldPartitionSubsystem__6B_;
  (this->RegisteredWorldPartitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredWorldPartitions).ArrayNum = 0;
  (this->RegisteredWorldPartitions).ArrayMax = 0;
  *(undefined8 *)&(this->IncrementalUpdateWorldPartitions).Elements = 0;
  *(undefined8 *)&(this->IncrementalUpdateWorldPartitions).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->IncrementalUpdateWorldPartitions).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->IncrementalUpdateWorldPartitions).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->IncrementalUpdateWorldPartitions).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->IncrementalUpdateWorldPartitions).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IncrementalUpdateWorldPartitions).Elements.field_0x34 = 0;
  (this->IncrementalUpdateWorldPartitions).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->IncrementalUpdateWorldPartitions).HashSize = 0;
  *(undefined8 *)&(this->IncrementalUpdateWorldPartitionsPendingAdd).Elements = 0;
  *(undefined8 *)&(this->IncrementalUpdateWorldPartitionsPendingAdd).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->IncrementalUpdateWorldPartitionsPendingAdd).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->IncrementalUpdateWorldPartitionsPendingAdd).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->IncrementalUpdateWorldPartitionsPendingAdd).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->IncrementalUpdateWorldPartitionsPendingAdd).Elements.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->IncrementalUpdateWorldPartitionsPendingAdd).Elements.field_0x34 = 0;
  (this->IncrementalUpdateWorldPartitionsPendingAdd).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->IncrementalUpdateWorldPartitionsPendingAdd).HashSize = 0;
  *(undefined8 *)&(this->StreamingSourceProviders).Elements = 0;
  *(undefined8 *)&(this->StreamingSourceProviders).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StreamingSourceProviders).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StreamingSourceProviders).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StreamingSourceProviders).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StreamingSourceProviders).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StreamingSourceProviders).Elements.field_0x34 = 0;
  (this->StreamingSourceProviders).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StreamingSourceProviders).HashSize = 0;
  *(undefined8 *)&this->IsStreamingSourceProviderFiltered = 0;
  *(undefined8 *)&(this->IsStreamingSourceProviderFiltered).field_0x8 = 0;
  *(undefined4 *)&(this->IsStreamingSourceProviderFiltered).field_0x10 = 0;
  *(undefined8 *)&this->StreamingStateUpdated = 0;
  *(undefined8 *)&(this->StreamingStateUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->StreamingStateUpdated).field_0x10 = 0;
  *(undefined8 *)&(this->StreamingStateUpdated).field_0x18 = 2;
  (this->StreamingSources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingSources).ArrayNum = 0;
  (this->StreamingSources).ArrayMax = 0;
  *(undefined8 *)&this->StreamingSourcesVelocity = 0;
  *(undefined8 *)&(this->StreamingSourcesVelocity).field_0x8 = 0;
  *(undefined8 *)&(this->StreamingSourcesVelocity).field_0x20 = 0;
  *(undefined4 *)&(this->StreamingSourcesVelocity).field_0x28 = 0;
  *(undefined4 *)&(this->StreamingSourcesVelocity).field_0x2c = 0x80;
  *(undefined4 *)&(this->StreamingSourcesVelocity).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StreamingSourcesVelocity).field_0x34 = 0;
  *(undefined8 *)&(this->StreamingSourcesVelocity).field_0x40 = 0;
  *(undefined4 *)&(this->StreamingSourcesVelocity).field_0x48 = 0;
  *(undefined8 *)&(this->ServerClientsVisibleLevelNames).Elements = 0;
  *(undefined8 *)&(this->ServerClientsVisibleLevelNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ServerClientsVisibleLevelNames).Elements.field_0x20 = 0;
  this->NumWorldPartitionServerStreamingEnabled = 0;
  *(undefined4 *)&(this->ServerClientsVisibleLevelNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ServerClientsVisibleLevelNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ServerClientsVisibleLevelNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ServerClientsVisibleLevelNames).Elements.field_0x34 = 0;
  (this->ServerClientsVisibleLevelNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ServerClientsVisibleLevelNames).HashSize = 0;
  this->ServerClientsVisibleLevelsHash = 0;
  (this->WorldPartitionsDraw2DContext).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldPartitionsDraw2DContext).ArrayNum = 0;
  (this->WorldPartitionsDraw2DContext).ArrayMax = 0;
  (this->DrawHandle).ID = 0;
  *(undefined8 *)&this->WorldPartitionUninitializationPendingStreamingLevels = 0;
  *(undefined8 *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x8 = 0;
  *(undefined8 *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x20 = 0;
  *(undefined4 *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x28 = 0;
  *(undefined4 *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x34 = 0;
  *(undefined8 *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x40 = 0;
  *(undefined4 *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x48 = 0;
  *(undefined8 *)&(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Elements = 0;
  *(undefined8 *)&(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Elements.field_0x20 = 0
  ;
  *(undefined4 *)&(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Elements.field_0x28 = 0
  ;
  *(undefined4 *)&(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Elements.field_0x2c =
       0x80;
  *(undefined4 *)&(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Elements.field_0x34 = 0
  ;
  *(undefined4 *)&(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Elements.field_0x30 =
       0xffffffff;
  (this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->WorldPartitionLoadingAndPendingLoadStreamingLevels).HashSize = 0;
  this->bHasBegunPlay = false;
  return this;
}

// ~UWorldPartitionSubsystem @ 148aea8b0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartitionSubsystem::~UWorldPartitionSubsystem(UWorldPartitionSubsystem *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  (this->WorldPartitionLoadingAndPendingLoadStreamingLevels).HashSize = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = (longlong)&___7UWorldPartitionSubsystem__6B_;
  FVar1 = (this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Elements);
  *(undefined4 *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WorldPartitionUninitializationPendingStreamingLevels);
  DestructItems<FWorldPartitionDraw2DContext,int>
            ((FWorldPartitionDraw2DContext *)
             (this->WorldPartitionsDraw2DContext).AllocatorInstance.Data,
             (this->WorldPartitionsDraw2DContext).ArrayNum);
  pFVar3 = (this->WorldPartitionsDraw2DContext).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  (this->ServerClientsVisibleLevelNames).HashSize = 0;
  FVar1 = (this->ServerClientsVisibleLevelNames).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ServerClientsVisibleLevelNames).Elements);
  *(undefined4 *)&(this->StreamingSourcesVelocity).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StreamingSourcesVelocity).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FStreamingSourceVelocity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FStreamingSourceVelocity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FStreamingSourceVelocity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StreamingSourcesVelocity);
  DestructItems<FWorldPartitionStreamingSource,int>
            ((FWorldPartitionStreamingSource *)(this->StreamingSources).AllocatorInstance.Data,
             (this->StreamingSources).ArrayNum);
  pFVar3 = (this->StreamingSources).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->StreamingStateUpdated).field_0x8,
             *(int *)&(this->StreamingStateUpdated).field_0x10);
  pvVar2 = *(void **)&(this->StreamingStateUpdated).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->StreamingStateUpdated);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->IsStreamingSourceProviderFiltered);
  (this->StreamingSourceProviders).HashSize = 0;
  FVar1 = (this->StreamingSourceProviders).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<IWorldPartitionStreamingSourceProvider_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IWorldPartitionStreamingSourceProvider_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->StreamingSourceProviders).Elements);
  (this->IncrementalUpdateWorldPartitionsPendingAdd).HashSize = 0;
  FVar1 = (this->IncrementalUpdateWorldPartitionsPendingAdd).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UWorldPartition>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UWorldPartition>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->IncrementalUpdateWorldPartitionsPendingAdd).Elements);
  (this->IncrementalUpdateWorldPartitions).HashSize = 0;
  FVar1 = (this->IncrementalUpdateWorldPartitions).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UWorldPartition>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UWorldPartition>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->IncrementalUpdateWorldPartitions).Elements);
  pFVar3 = (this->RegisteredWorldPartitions).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IStreamingWorldSubsystemInterface__6B_;
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  return;
}

// operator() @ 148aeab60

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
`UWorldPartitionSubsystem::DumpWorldPartitions'::__l5::<lambda_1>::operator()
          (void *this,UWorldPartition *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FString local_18;
  
  pFVar2 = *(ForAnyElementType **)this;
  pFVar6 = (FScriptContainerElement *)
           UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
  if ((pFVar2->Data <= pFVar6) &&
     (pFVar6 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  pFVar7 = pFVar2->Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(undefined8 *)pFVar7 = *(undefined8 *)pFVar6;
  *(undefined8 *)pFVar6 = 0;
  *(undefined4 *)(pFVar7 + 8) = *(undefined4 *)(pFVar6 + 8);
  *(undefined4 *)(pFVar7 + 0xc) = *(undefined4 *)(pFVar6 + 0xc);
  *(undefined8 *)(pFVar6 + 8) = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 148aeaed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TObjectPtr<UWorldPartition>,TSizedDefaultAllocator<32>_> * __thiscall
`UWorldPartitionSubsystem::UpdateStreamingStateInternal'::__l2::<lambda_2>::operator()
          (void *this,
          TArray<TObjectPtr<UWorldPartition>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  TObjectPtr<UWorldPartition>_u_0 TVar2;
  ForAnyElementType *pFVar3;
  undefined8 *puVar4;
  TObjectPtr<UWorldPartition> *pTVar5;
  bool bVar6;
  bool bVar7;
  ForAnyElementType *pFVar8;
  TObjectPtr<UWorldPartition>_u_0 local_res8;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  ForAnyElementType local_28;
  undefined4 local_20;
  int iStack_1c;
  
  local_res8.DebugPtr = local_res8.DebugPtr & 0xffffffff00000000;
  if (*(int *)(*(longlong *)this + 8) == 0) {
    TVar2 = (TObjectPtr<UWorldPartition>_u_0)
            ((TObjectPtr<UWorldPartition>_u_0 *)((longlong)this + 8))->DebugPtr;
    if (TVar2.DebugPtr == (UWorldPartition *)0x0) {
      local_38.Data = (FScriptContainerElement *)0x0;
      iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 0x58);
      pTVar5 = *(TObjectPtr<UWorldPartition> **)(*(longlong *)((longlong)this + 0x10) + 0x50);
      local_30 = iVar1;
      if (iVar1 == 0) {
        local_2c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar1,0,&local_38,iVar1,&local_2c);
        ConstructItems<TObjectPtr<UWorldPartition>,TObjectPtr<UWorldPartition>,int>
                  (local_38.Data,pTVar5,iVar1);
      }
      pFVar8 = &local_38;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      local_res8 = TVar2;
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      bVar7 = true;
      bVar6 = false;
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20 = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,1,0,&local_28,1,&iStack_1c);
      ConstructItems<TObjectPtr<UWorldPartition>,TObjectPtr<UWorldPartition>,int>
                (local_28.Data,(TObjectPtr<UWorldPartition> *)&local_res8.ObjectPtr,1);
      pFVar8 = &local_28;
    }
    pFVar3 = *(ForAnyElementType **)this;
    if (pFVar3 != pFVar8) {
      if (pFVar3->Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3->Data);
      }
      pFVar3->Data = pFVar8->Data;
      pFVar8->Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)&pFVar3[1].Data = *(undefined4 *)&pFVar8[1].Data;
      *(undefined4 *)((longlong)&pFVar3[1].Data + 4) =
           *(undefined4 *)((longlong)&pFVar8[1].Data + 4);
      pFVar8[1].Data = (FScriptContainerElement *)0x0;
    }
    if (bVar6) {
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
    }
    if ((bVar7) && (local_28.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data);
    }
  }
  puVar4 = *(undefined8 **)this;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)(puVar4 + 1);
  pTVar5 = (TObjectPtr<UWorldPartition> *)*puVar4;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
               &__return_storage_ptr__->ArrayMax);
    ConstructItems<TObjectPtr<UWorldPartition>,TObjectPtr<UWorldPartition>,int>
              ((__return_storage_ptr__->AllocatorInstance).Data,pTVar5,iVar1);
  }
  return __return_storage_ptr__;
}

// operator() @ 148aeb570

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
UWorldPartitionSubsystem::<lambda_36>::operator()
          (<lambda_36> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FName FVar2;
  int iVar3;
  UWorld *this_00;
  bool bVar4;
  uint uVar5;
  FDelegateHandle FVar6;
  UWorldPartitionSubsystem *pUVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  FName FVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  FName local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  FString local_68;
  FName local_58;
  int *piStack_50;
  int local_48;
  undefined4 uStack_44;
  
  iVar3 = param_1->ArrayNum;
  pFVar9 = (param_1->AllocatorInstance).Data;
  pFVar11 = pFVar9 + (longlong)iVar3 * 0x10;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  bVar4 = true;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar9 == pFVar11) break;
    if (bVar4) {
      bVar4 = false;
    }
    else {
      ::FString::AppendChars(&local_68,L" ",1);
    }
    iVar12 = *(int *)(pFVar9 + 8) + -1;
    if (*(int *)(pFVar9 + 8) == 0) {
      iVar12 = 0;
    }
    ::FString::AppendChars(&local_68,*(wchar_t **)pFVar9,iVar12);
    pFVar9 = pFVar9 + 0x10;
  }
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar8.Data = local_68.Data.AllocatorInstance.Data;
  }
  local_res18[0] = -1;
  FParse::Value((wchar_t *)FVar8.Data,L"grid=",&local_88);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar8.Data = local_68.Data.AllocatorInstance.Data;
  }
  FParse::Value((wchar_t *)FVar8.Data,L"range=",local_res18);
  if (OnWorldPartitionSubsystemDeinitializedFDelegateHandle.ID == 0) {
    FVar6 = TMulticastDelegateRegistration<void___cdecl(UWorldPartitionSubsystem_*,UWorld_*),FDefaultDelegateUserPolicy>
            ::AddLambda<_UWorldPartitionSubsystem::<lambda_36>::operator()_::__l5::<lambda_1>_>
                      ((TMulticastDelegateRegistration<void___cdecl(UWorldPartitionSubsystem_*,UWorld_*),FDefaultDelegateUserPolicy>
                        *)&OnWorldPartitionSubsystemDeinitialized,(<lambda_1> *)local_res10);
                    /* WARNING: Load size is inaccurate */
    OnWorldPartitionSubsystemDeinitializedFDelegateHandle.ID = *FVar6.ID;
  }
  FVar10 = (FName)(GEngine->WorldList).Array.AllocatorInstance.Data;
  piVar1 = &(GEngine->WorldList).Array.ArrayNum;
  iVar3 = *piVar1;
  FVar2 = (FName)((longlong)FVar10 + (longlong)iVar3 * 8);
  local_70 = CONCAT44(uStack_44,iVar3);
  local_80._0_8_ = FVar10;
  local_80._8_8_ = piVar1;
  local_58 = FVar10;
  piStack_50 = piVar1;
  local_48 = iVar3;
  do {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar10 == FVar2) goto LAB_148aeb7a4;
    this_00 = *(UWorld **)(*(longlong *)FVar10 + 0x2c0);
    if (this_00 != (UWorld *)0x0) {
      bVar4 = UWorld::IsGameWorld(this_00);
      if (bVar4) {
        pUVar7 = UWorld::GetSubsystem<UWorldPartitionSubsystem>(this_00);
        if (pUVar7 != (UWorldPartitionSubsystem *)0x0) {
          ::FString::FString((FString *)local_80,GOverrideLoadingRangeCommandName);
          FWorldPartitionHelpers::ServerExecConsoleCommand(this_00,(FString *)local_80,param_1);
          if ((FName)local_80._0_8_ != (FName)0x0) {
            FMemory::Free((void *)local_80._0_8_);
          }
          FVar2 = local_88;
          local_80._0_4_ = local_88.ComparisonIndex.Value;
          local_80._4_4_ = local_88.Number;
          local_res10[0] = local_res18[0];
          if (local_res18[0] < 0) {
            local_res20 = local_88;
            if (OverriddenLoadingRanges._8_4_ != OverriddenLoadingRanges._52_4_) {
              uVar5 = ::GetTypeHash(local_88.ComparisonIndex);
              TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              ::RemoveImpl<FName>((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                                   *)&OverriddenLoadingRanges,FVar2.Number + uVar5,&local_res20);
            }
          }
          else {
            local_58 = (FName)local_80;
            piStack_50 = local_res10;
            TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                      ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                        *)&OverriddenLoadingRanges,
                       (TPairInitializer<FName_const_&,int_const_&> *)&local_res20,(bool *)&local_58
                      );
          }
          OverriddenLoadingRangesEpoch = OverriddenLoadingRangesEpoch + 1;
LAB_148aeb7a4:
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          return;
        }
      }
    }
    FVar10 = (FName)((longlong)FVar10 + 8);
  } while( true );
}

// operator() @ 148aebba0

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
`UWorldPartitionSubsystem::Draw'::__l17::<lambda_3>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FWorldPartitionDraw2DContext *pFVar5;
  UWorldPartition *this_00;
  
  this_00 = (UWorldPartition *)**(longlong **)this;
  if (this_00 == (UWorldPartition *)0x0) {
    lVar1 = *(longlong *)((longlong)this + 8);
    uVar4 = 0;
    if (param_1 < *(int *)(lVar1 + 0x58)) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = *(UWorldPartition **)(*(longlong *)(lVar1 + 0x50) + (longlong)param_1 * 8);
  }
  lVar1 = *(longlong *)((longlong)this + 8);
  uVar4 = 0;
  if (param_1 < *(int *)(lVar1 + 0x250)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = (FWorldPartitionDraw2DContext *)((longlong)param_1 * 0xd8 + *(longlong *)(lVar1 + 0x248))
  ;
  pFVar5->bIsDetailedMode = **(int **)((longlong)this + 0x10) == 1;
  pFVar5->bDrawGridBounds = param_1 == **(int **)((longlong)this + 0x10) + -1;
  pFVar5->bDrawGridAxis = param_1 == **(int **)((longlong)this + 0x10) + -1;
  bVar3 = UWorldPartition::DrawRuntimeHash2D(this_00,pFVar5);
  if (bVar3) {
    LOCK();
    **(int **)((longlong)this + 0x18) =
         **(int **)((longlong)this + 0x18) + (pFVar5->CanvasItems).Lines.ArrayNum;
    UNLOCK();
    LOCK();
    **(int **)((longlong)this + 0x20) =
         **(int **)((longlong)this + 0x20) + (pFVar5->CanvasItems).Boxes.ArrayNum;
    UNLOCK();
  }
  return;
}

// CanDebugDraw @ 148aec8c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWorldPartitionSubsystem::CanDebugDraw(UWorldPartitionSubsystem *this)

{
  bool bVar1;
  UWorld *this_00;
  
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  bVar1 = UWorld::IsGameWorld(this_00);
  return bVar1;
}

// Deinitialize @ 148aedb70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartitionSubsystem::Deinitialize(UWorldPartitionSubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  UWorldPartition *pUVar4;
  
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  TMulticastDelegate<void___cdecl(UWorldPartitionSubsystem_*,UWorld_*),FDefaultDelegateUserPolicy>::
  Broadcast(&OnWorldPartitionSubsystemDeinitialized,this,pUVar3);
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pUVar3->OnWorldPartitionInitializedEvent,this);
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pUVar3->OnWorldPartitionUninitializedEvent,this);
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  bVar2 = UWorld::IsGameWorld(pUVar3);
  if (bVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FLevelStreamingDelegates::OnLevelBeginMakingVisible,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FLevelStreamingDelegates::OnLevelBeginMakingInvisible,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FLevelStreamingDelegates::OnLevelStreamingStateChanged,this);
  }
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  pUVar4 = UWorld::GetWorldPartition(pUVar3);
  if (pUVar4 != (UWorldPartition *)0x0) {
    pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    pUVar4 = UWorld::GetWorldPartition(pUVar3);
    bVar2 = UWorldPartition::IsInitialized(pUVar4);
    if (bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GetWorldPartition() || !GetWorldPartition()->IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                         ,0x1fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  UTickableWorldSubsystem::Deinitialize((UTickableWorldSubsystem *)this);
  return;
}

// DoesSupportWorldType @ 148aeddc0

bool __thiscall
UWorldPartitionSubsystem::DoesSupportWorldType(UWorldPartitionSubsystem *this,Type param_1)

{
  bool bVar1;
  
  bVar1 = UWorldSubsystem::DoesSupportWorldType((UWorldSubsystem *)this,param_1);
  if (((!bVar1) && (param_1 != Inactive)) && (param_1 != EditorPreview)) {
    return false;
  }
  return true;
}

// Draw @ 148aeddf0

/* WARNING: Removing unreachable block (ram,0x000148aee43e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UWorldPartitionSubsystem::Draw
          (UWorldPartitionSubsystem *this,UCanvas *param_1,APlayerController *param_2)

{
  int *piVar1;
  TArray<FWorldPartitionDraw2DContext,TSizedDefaultAllocator<32>_> *this_00;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  UContentBundleManager *this_01;
  code *pcVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  char cVar14;
  bool bVar15;
  EWorldPartitionStreamingPerformance EVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  UWorld *pUVar20;
  UWorld *pUVar21;
  AWorldSettings *pAVar22;
  UFont *pUVar23;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *pTVar24;
  FString *pFVar25;
  UDataLayerManager *this_02;
  longlong lVar26;
  longlong lVar27;
  wchar_t *pwVar28;
  uint uVar29;
  UWorldPartition *pUVar30;
  FScriptContainerElement *pFVar31;
  FWorldPartitionDraw2DContext *this_03;
  FWorldPartitionDraw2DContext *pFVar32;
  FName *this_04;
  FWorldPartitionStreamingSource *this_05;
  FScriptContainerElement *pFVar33;
  FWorldPartitionStreamingSource *pFVar34;
  EWorldPartitionStreamingPerformance EVar35;
  FScriptContainerElement *pFVar36;
  FName *pFVar37;
  bool bVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  <lambda_1> local_res10;
  char local_2f8 [4];
  int local_2f4;
  FColor_u_0 local_2f0 [2];
  UWorldPartition *local_2e8;
  undefined1 local_2e0;
  undefined1 local_2df;
  undefined1 local_2de [6];
  TVector2<double>_u_0 local_2d8;
  ForAnyElementType local_2c8;
  undefined8 local_2c0;
  int local_2b8;
  float local_2b4;
  FString local_2b0;
  FName *local_2a0;
  double local_298;
  double dStack_290;
  ForAnyElementType local_288;
  undefined8 local_280;
  FString local_278;
  FString local_268;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  TVector2<double>_u_0 local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  LARGE_INTEGER local_1e8;
  FName local_1e0;
  TVector2<double>_u_0 local_1d8;
  double local_1c8;
  double dStack_1c0;
  undefined8 local_1b8;
  TVector2<double>_u_0 local_1b0;
  double local_1a0;
  double local_198;
  undefined1 local_190;
  TArrayView<std::nullptr_t,int> local_188;
  code *local_178;
  UWorldPartition ***local_170;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  UWorldPartition **local_128;
  UWorldPartitionSubsystem *local_120;
  int *local_118;
  int *local_110;
  FName **local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FWorldPartitionDraw2DCanvas local_d0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  
  bVar38 = -1 < CpuChannel->Enabled;
  if (bVar38) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1400,"UWorldPartitionSubsystem::Draw",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
               ,0x578);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1400);
  }
  if ((param_1 == (UCanvas *)0x0) || (param_1->SceneView == (FSceneView *)0x0)) goto LAB_148aef00e;
  pUVar20 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  bVar13 = UWorld::IsGameWorld(pUVar20);
  if ((!bVar13) ||
     ((piVar1 = &(this->RegisteredWorldPartitions).ArrayNum, -1 < GDrawWorldPartitionIndex &&
      (*piVar1 <= GDrawWorldPartitionIndex)))) goto LAB_148aef00e;
  UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  bVar13 = UWorldPartition::IsSimulating(false);
  if (!bVar13) {
    if ((param_1->SceneView->ViewActor).Actor == (AActor *)0x0) goto LAB_148aef00e;
    pUVar20 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    pUVar21 = AActor::GetWorld((param_1->SceneView->ViewActor).Actor);
    if (pUVar21 != pUVar20) goto LAB_148aef00e;
  }
  if (GDrawWorldPartitionIndex < 0) {
    local_2f4 = *piVar1;
    if (local_2f4 == 1) goto LAB_148aedf66;
    pUVar30 = (UWorldPartition *)0x0;
  }
  else {
    local_2f4 = 1;
LAB_148aedf66:
    uVar19 = 0;
    if (0 < GDrawWorldPartitionIndex) {
      uVar19 = GDrawWorldPartitionIndex;
    }
    uVar29 = 0;
    if ((int)uVar19 < (this->RegisteredWorldPartitions).ArrayNum) {
      uVar29 = ~uVar19 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar30 = *(UWorldPartition **)
               ((this->RegisteredWorldPartitions).AllocatorInstance.Data + (longlong)(int)uVar19 * 8
               );
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UWorldPartition *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar30);
    }
  }
  dVar11 = __real_3ff0000000000000;
  local_2d8._s_0.X = ___xmm_40240000000000004024000000000000;
  local_2d8._s_0.Y = _UNK_15104e4d8;
  local_2e8 = pUVar30;
  if (GDrawRuntimeHash2D != 0) {
    this_00 = &this->WorldPartitionsDraw2DContext;
    piVar1 = &(this->WorldPartitionsDraw2DContext).ArrayNum;
    uVar19 = (this->RegisteredWorldPartitions).ArrayNum;
    iVar18 = *piVar1;
    local_1b8 = 0;
    dVar42 = (double)GDrawRuntimeHash2DScaleFactor;
    if (__real_3ff0000000000000 <= (double)GDrawRuntimeHash2DScaleFactor) {
      dVar42 = __real_3ff0000000000000;
    }
    if (dVar42 <= __real_3fb999999999999a) {
      dVar42 = __real_3fb999999999999a;
    }
    dVar9 = (double)param_1->ClipX * __real_3fe8000000000000 - __real_4034000000000000;
    dVar10 = (double)param_1->ClipY * __real_3fe8000000000000 - __real_4034000000000000;
    if (dVar9 <= __real_4059000000000000) {
      dVar9 = __real_4059000000000000;
    }
    if (dVar10 <= __real_4059000000000000) {
      dVar10 = __real_4059000000000000;
    }
    local_1d8._s_0.X = 0.0;
    local_1d8._s_0.Y = 0.0;
    local_1c8 = 0.0;
    dStack_1c0 = 0.0;
    if (iVar18 < (int)uVar19) {
      iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0xd8,8,uVar19 - iVar18,&this_00->AllocatorInstance,piVar1,
                          &(this->WorldPartitionsDraw2DContext).ArrayMax);
      DefaultConstructItems<FWorldPartitionDraw2DContext,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar17 * 0xd8,uVar19 - iVar18);
    }
    else {
      if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
      }
      if ((int)uVar19 < iVar18) {
        uVar29 = iVar18 - uVar19;
        if (((int)(uVar19 | uVar29) < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar29 != 0) {
          TArray<FWorldPartitionDraw2DContext,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (this_00,uVar19,uVar29);
        }
      }
    }
    iVar18 = (this->WorldPartitionsDraw2DContext).ArrayNum;
    pFVar31 = (this_00->AllocatorInstance).Data;
    pFVar36 = pFVar31 + (longlong)iVar18 * 0xd8;
    while( true ) {
      if ((this->WorldPartitionsDraw2DContext).ArrayNum != iVar18) {
        local_2f8[0] = '\0';
        `TCheckedPointerIterator<FWorldPartitionDraw2DContext,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_2f8);
      }
      if (pFVar31 == pFVar36) break;
      if (pFVar31[0xa0] != (FScriptContainerElement)0x0) {
        UE::Math::TBox2<double>::operator+=
                  ((TBox2<double> *)&local_1d8._s_0,(TBox2<double> *)(pFVar31 + 0x80));
      }
      pFVar31 = pFVar31 + 0xd8;
    }
    if ((char)local_1b8 == '\0') {
      iVar18 = (this->StreamingSources).ArrayNum;
      pFVar31 = (this->StreamingSources).AllocatorInstance.Data;
      pFVar36 = pFVar31 + (longlong)iVar18 * 0x160;
      uVar6 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
      uVar8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
      while( true ) {
        if ((this->StreamingSources).ArrayNum != iVar18) {
          local_2f8[1] = 0;
          `TCheckedPointerIterator<FWorldPartitionStreamingSource,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_2f8 + 1);
        }
        if (pFVar31 == pFVar36) break;
        uVar6 = (double)uVar6 + *(double *)(pFVar31 + 8);
        uVar8 = (double)uVar8 + *(double *)(pFVar31 + 0x10);
        pFVar31 = pFVar31 + 0x160;
      }
      local_98 = 1;
      dVar11 = dVar11 / (double)(this->StreamingSources).ArrayNum;
      dVar7 = (double)uVar6 * dVar11;
      dVar11 = (double)uVar8 * dVar11;
      local_1c8 = dVar7 + __real_40d9000000000000;
      local_1d8._s_0.X = dVar7 - __real_40d9000000000000;
      dStack_1c0 = dVar11 + __real_40d9000000000000;
      local_1d8._s_0.Y = dVar11 - __real_40d9000000000000;
      local_1b8 = CONCAT71(uStack_97,1);
      local_b8 = local_1d8._s_0.X;
      dStack_b0 = local_1d8._s_0.Y;
      local_a8 = local_1c8;
      dStack_a0 = dStack_1c0;
    }
    iVar18 = (this->WorldPartitionsDraw2DContext).ArrayNum;
    local_1a0 = dVar9 * (double)(float)dVar42 + local_2d8._s_0.X;
    this_03 = (FWorldPartitionDraw2DContext *)
              (this->WorldPartitionsDraw2DContext).AllocatorInstance.Data;
    local_1b0._s_0.X = local_2d8._s_0.X;
    local_1b0._s_0.Y = local_2d8._s_0.Y;
    local_198 = dVar10 * (double)(float)dVar42 + local_2d8._s_0.Y;
    local_190 = 1;
    pFVar32 = this_03 + iVar18;
    while( true ) {
      if ((this->WorldPartitionsDraw2DContext).ArrayNum != iVar18) {
        local_2f8[2] = 0;
        `TCheckedPointerIterator<FWorldPartitionDraw2DContext,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_2f8 + 2);
      }
      if (this_03 == pFVar32) break;
      FWorldPartitionDraw2DContext::Initialize
                (this_03,(TBox2<double> *)&local_1b0._s_0,(TBox2<double> *)&local_1d8._s_0);
      this_03 = this_03 + 1;
    }
    local_128 = &local_2e8;
    local_118 = &local_2f4;
    local_2b8 = 0;
    local_110 = &local_2b8;
    local_2a0 = (FName *)((ulonglong)local_2a0 & 0xffffffff00000000);
    local_108 = &local_2a0;
    local_178 = UE::Core::Private::Function::
                TFunctionRefCaller<`UWorldPartitionSubsystem::Draw'::__l17::<lambda_3>,void,int>::
                Call;
    local_170 = &local_128;
    local_res10 = SUB81(param_1,0);
    local_188.DataPtr = (void **)0x0;
    local_188.ArrayNum = 0;
    local_120 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_2f4,1,(TFunctionRef<void___cdecl(int)> *)&local_178,
               local_res10,None,&local_188);
    if (1 < local_2f4) {
      local_2c8.Data = (FScriptContainerElement *)0x0;
      local_2c0 = 0;
      ::FString::PrintfImpl(&local_278,L"Showing %d world partitions");
      iVar18 = (int)local_2c0;
      if ((int)local_2c0 == local_2c0._4_4_) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&local_2c8,(int *)((longlong)&local_2c0 + 4));
      }
      FVar12.Data = local_2c8.Data;
      iVar17 = iVar18 + 1;
      local_2c0 = CONCAT44(local_2c0._4_4_,iVar17);
      lVar26 = (longlong)iVar18 * 0x20;
      *(undefined8 *)(local_2c8.Data + lVar26) = 0;
      *(FScriptContainerElement **)(local_2c8.Data + lVar26) = local_278.Data.AllocatorInstance.Data
      ;
      *(int *)(local_2c8.Data + lVar26 + 8) = local_278.Data.ArrayNum;
      *(int *)(local_2c8.Data + lVar26 + 0xc) = local_278.Data.ArrayMax;
      ((FLinearColor_u_0 *)(local_2c8.Data + lVar26 + 0x10))->_s_0 =
           (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
      local_278.Data.ArrayNum = 0;
      local_278.Data.ArrayMax = 0;
      local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_288.Data = (FScriptContainerElement *)0x0;
      local_280 = CONCAT44(local_280._4_4_,iVar17);
      local_298 = local_1b0._s_0.X;
      dStack_290 = local_1b0._s_0.Y;
      if (iVar17 == 0) {
        local_280 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar17,0,&local_288,iVar17,(int *)((longlong)&local_280 + 4));
        ConstructItems<TTuple<FString,FLinearColor>,TTuple<FString,FLinearColor>,int>
                  (local_288.Data,(TTuple<FString,FLinearColor> *)FVar12.Data,iVar17);
      }
      uVar29 = local_2f4 - 1;
      uVar19 = 0;
      if ((int)uVar29 < (this->WorldPartitionsDraw2DContext).ArrayNum) {
        uVar19 = ~uVar29 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar31 = (this->WorldPartitionsDraw2DContext).AllocatorInstance.Data +
                (longlong)(int)uVar29 * 0xd8 + 200;
      if (((*(double **)&pFVar31->field_0x0 <= &local_298) &&
          (&local_298 < *(double **)&pFVar31->field_0x0 + (longlong)*(int *)(pFVar31 + 0xc) * 4)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar18 = *(int *)&pFVar31[8].field_0x0;
      if (iVar18 == *(int *)(pFVar31 + 0xc)) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 0xc));
      }
      *(int *)&pFVar31[8].field_0x0 = iVar18 + 1;
      lVar26 = *(longlong *)&pFVar31->field_0x0;
      lVar27 = (longlong)iVar18 * 0x20;
      *(double *)(lVar26 + lVar27) = local_298;
      ((double *)(lVar26 + lVar27))[1] = dStack_290;
      *(undefined8 *)(lVar26 + lVar27 + 0x10) = 0;
      *(FScriptContainerElement **)(lVar26 + lVar27 + 0x10) = local_288.Data;
      local_288.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(lVar26 + lVar27 + 0x18) = (undefined4)local_280;
      *(undefined4 *)(lVar26 + lVar27 + 0x1c) = local_280._4_4_;
      local_280 = 0;
      DestructItems<TTuple<FString,FLinearColor>,int>((TTuple<FString,FLinearColor> *)0x0,0);
      if (local_288.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data);
      }
      DestructItems<TTuple<FString,FLinearColor>,int>
                ((TTuple<FString,FLinearColor> *)local_2c8.Data,(int)local_2c0);
      if ((TTuple<FString,FLinearColor> *)local_2c8.Data != (TTuple<FString,FLinearColor> *)0x0) {
        FMemory::Free(local_2c8.Data);
      }
    }
    iVar18 = local_2b8;
    iVar17 = (int)local_2a0;
    if (0 < (int)local_2a0 + local_2b8) {
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1493,"UWorldPartitionSubsystem::DrawAllCanvasItems",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                   ,0x5d5);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1493);
      }
      FWorldPartitionDraw2DCanvas::FWorldPartitionDraw2DCanvas(&local_d0,param_1);
      FWorldPartitionDraw2DCanvas::PrepareDraw(&local_d0,iVar18,iVar17);
      pFVar36 = (this->WorldPartitionsDraw2DContext).AllocatorInstance.Data;
      iVar18 = (this->WorldPartitionsDraw2DContext).ArrayNum;
      local_258 = 0.0;
      dStack_250 = 0.0;
      cVar14 = '\0';
      local_238 = 0.0;
      uVar45 = 0;
      uVar47 = 0;
      pFVar31 = pFVar36 + 0x58;
      uVar39 = 0;
      uVar43 = 0;
      local_248 = 0.0;
      dStack_240 = 0.0;
      uVar46 = 0;
      uVar48 = 0;
      uVar40 = 0;
      uVar44 = 0;
      pFVar33 = pFVar36 + (longlong)iVar18 * 0xd8;
      while( true ) {
        dVar11 = (double)CONCAT44(uVar48,uVar46);
        if ((this->WorldPartitionsDraw2DContext).ArrayNum != iVar18) {
          local_2f8[3] = 0;
          `TCheckedPointerIterator<FWorldPartitionDraw2DContext,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_2f8 + 3);
        }
        if (pFVar36 == pFVar33) break;
        FWorldPartitionDraw2DCanvas::Draw(&local_d0,(FWorldPartitionCanvasItems *)(pFVar31 + 0x50));
        if (pFVar31[0x20] == (FScriptContainerElement)0x0) {
LAB_148aee79a:
          pFVar36 = pFVar36 + 0xd8;
          pFVar31 = pFVar31 + 0xd8;
        }
        else {
          if (cVar14 == '\0') {
            uVar39 = *(undefined4 *)pFVar31;
            uVar43 = *(undefined4 *)(pFVar31 + 4);
            local_258 = *(double *)pFVar31;
            uVar45 = *(undefined4 *)(pFVar31 + 8);
            uVar47 = *(undefined4 *)(pFVar31 + 0xc);
            dStack_250 = *(double *)(pFVar31 + 8);
            uVar40 = *(undefined4 *)(pFVar31 + 0x10);
            uVar44 = *(undefined4 *)(pFVar31 + 0x14);
            local_248 = *(double *)(pFVar31 + 0x10);
            uVar46 = *(undefined4 *)(pFVar31 + 0x18);
            uVar48 = *(undefined4 *)(pFVar31 + 0x1c);
            dStack_240 = *(double *)(pFVar31 + 0x18);
            local_238 = *(double *)(pFVar31 + 0x20);
            cVar14 = local_238._0_1_;
            goto LAB_148aee79a;
          }
          local_258 = *(double *)pFVar31;
          pFVar36 = pFVar36 + 0xd8;
          dStack_250 = *(double *)(pFVar31 + 8);
          if ((double)CONCAT44(uVar43,uVar39) <= local_258) {
            local_258 = (double)CONCAT44(uVar43,uVar39);
          }
          if ((double)CONCAT44(uVar47,uVar45) <= dStack_250) {
            dStack_250 = (double)CONCAT44(uVar47,uVar45);
          }
          uVar39 = SUB84(local_258,0);
          uVar43 = (undefined4)((ulonglong)local_258 >> 0x20);
          local_248 = *(double *)(pFVar31 + 0x10);
          uVar45 = SUB84(dStack_250,0);
          uVar47 = (undefined4)((ulonglong)dStack_250 >> 0x20);
          if (local_248 <= (double)CONCAT44(uVar44,uVar40)) {
            local_248 = (double)CONCAT44(uVar44,uVar40);
          }
          dStack_240 = *(double *)(pFVar31 + 0x18);
          pFVar31 = pFVar31 + 0xd8;
          if (dStack_240 <= (double)CONCAT44(uVar48,uVar46)) {
            dStack_240 = (double)CONCAT44(uVar48,uVar46);
          }
          uVar40 = SUB84(local_248,0);
          uVar44 = (undefined4)((ulonglong)local_248 >> 0x20);
          uVar46 = SUB84(dStack_240,0);
          uVar48 = (undefined4)((ulonglong)dStack_240 >> 0x20);
        }
      }
      if (cVar14 == '\0') {
        dVar11 = local_198 - local_1b0._s_0.Y;
      }
      local_2d8._s_0.Y = local_2d8._s_0.Y + dVar11;
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  if ((GDrawStreamingPerfs != 0) || (GDrawRuntimeHash2D != 0)) {
    bVar13 = -1 < CpuChannel->Enabled;
    if (bVar13) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1515,"UWorldPartitionSubsystem::DrawStreamingStatus",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                 ,0x5eb);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1515);
    }
    local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b0.Data.ArrayNum = 0;
    local_2b0.Data.ArrayMax = 0;
    bVar15 = IsIncrementalPurgePending();
    if (bVar15) {
      ::FString::AppendChars(&local_2b0,L"(Purging) ",10);
    }
    bVar15 = IsIncrementalUnhashPending();
    if (bVar15) {
      ::FString::AppendChars(&local_2b0,L"(Unhashing) ",0xc);
    }
    bVar15 = (*IsAsyncLoading)();
    if (bVar15) {
      ::FString::AppendChars(&local_2b0,L"(AsyncLoading) ",0xf);
    }
    if (local_2b0.Data.ArrayNum < 2) {
      ::FString::operator=(&local_2b0,L"(Idle) ");
    }
    pUVar20 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    if ((pUVar20 == (UWorld *)0x0) ||
       (pAVar22 = UWorld::GetWorldSettings(pUVar20,false,false), pAVar22 == (AWorldSettings *)0x0))
    {
      bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_5736735822393113443>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                          ,0x49d,"WorldSettings");
      if (bVar15) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else if (pAVar22->bHighPriorityLoading != '\0' || pAVar22->bHighPriorityLoadingLocal != '\0') {
      ::FString::AppendChars(&local_2b0,L"(HighPriorityLoading) ",0x16);
    }
    pUVar20 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    GetDebugStringForWorld(&local_100,pUVar20);
    ::FString::PrintfImpl(&local_218,L"(%s)");
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if ((local_2e8 != (UWorldPartition *)0x0) &&
       (bVar15 = UWorldPartition::IsServer(local_2e8), bVar15)) {
      UWorldPartition::IsServerStreamingEnabled(local_2e8);
      ::FString::PrintfImpl(&local_208,L" (Server Streaming %s)");
      iVar18 = local_208.Data.ArrayNum + -1;
      if (local_208.Data.ArrayNum == 0) {
        iVar18 = 0;
      }
      ::FString::AppendChars(&local_218,(wchar_t *)local_208.Data.AllocatorInstance.Data,iVar18);
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
    }
    ::FString::PrintfImpl(&local_168,L"Streaming Status for %s: %s");
    pUVar23 = UEngine::GetSmallFont();
    FWorldPartitionDebugHelper::DrawText
              (param_1,&local_168,pUVar23,&FColor::White,(TVector2<double> *)&local_2d8._s_0,
               (float *)0x0);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
    local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.Data.ArrayNum = 0;
    local_268.Data.ArrayMax = 0;
    if (local_2e8 == (UWorldPartition *)0x0) {
      EVar16 = Good;
    }
    else {
      EVar16 = UWorldPartition::GetStreamingPerformance(local_2e8);
    }
    if (local_2e8 == (UWorldPartition *)0x0) {
      pFVar36 = (this->RegisteredWorldPartitions).AllocatorInstance.Data;
      iVar18 = (this->RegisteredWorldPartitions).ArrayNum;
      pFVar31 = pFVar36 + (longlong)iVar18 * 8;
      EVar35 = EVar16;
      while( true ) {
        if ((this->RegisteredWorldPartitions).ArrayNum != iVar18) {
          `TCheckedPointerIterator<TObjectPtr<UWorldPartition>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_2e0);
        }
        EVar16 = EVar35;
        if (pFVar36 == pFVar31) break;
        EVar16 = UWorldPartition::GetStreamingPerformance(*(UWorldPartition **)pFVar36);
        if (EVar16 < EVar35) {
          EVar16 = EVar35;
        }
        if (EVar16 == Critical) break;
        pFVar36 = pFVar36 + 8;
        EVar35 = EVar16;
      }
    }
    if (EVar16 == Good) {
      pwVar28 = L"Good";
    }
    else if (EVar16 == Slow) {
      pwVar28 = L"Slow";
    }
    else if (EVar16 == Critical) {
      pwVar28 = L"Critical";
    }
    else {
      pwVar28 = L"Unknown";
    }
    ::FString::operator=(&local_268,pwVar28);
    ::FString::PrintfImpl(&local_158,L"Streaming Performance: %s (Blocking %s)");
    pUVar23 = UEngine::GetSmallFont();
    FWorldPartitionDebugHelper::DrawText
              (param_1,&local_158,pUVar23,&FColor::White,(TVector2<double> *)&local_2d8._s_0,
               (float *)0x0);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if ((GDrawStreamingSources != 0) || (GDrawRuntimeHash2D != 0)) {
    bVar13 = CpuChannel->Enabled < 0;
    if (bVar13) {
      local_2f8[0] = '\0';
    }
    else {
      local_2f8[0] = '\x01';
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1576,"UWorldPartitionSubsystem::DrawStreamingSources",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                 ,0x628);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1576);
    }
    cVar14 = !bVar13;
    if (local_2e8 == (UWorldPartition *)0x0) {
      pTVar24 = &this->StreamingSources;
    }
    else {
      pTVar24 = UWorldPartition::GetStreamingSources(local_2e8);
    }
    if (0 < pTVar24->ArrayNum) {
      ::FString::FString(&local_138,L"Streaming Sources");
      pUVar23 = UEngine::GetSmallFont();
      FWorldPartitionDebugHelper::DrawText
                (param_1,&local_138,pUVar23,&FColor::Yellow,(TVector2<double> *)&local_2d8._s_0,
                 (float *)0x0);
      iVar18 = pTVar24->ArrayNum;
      this_04 = (FName *)(pTVar24->AllocatorInstance).Data;
      local_228._s_0.X = local_2d8._s_0.X;
      local_228._s_0.Y = local_2d8._s_0.Y;
      local_2b4 = 0.0;
      pFVar37 = this_04 + (longlong)iVar18 * 0x2c;
      local_2a0 = pFVar37;
      while( true ) {
        if (pTVar24->ArrayNum != iVar18) {
          `TCheckedPointerIterator<FWorldPartitionStreamingSource_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_2df);
        }
        cVar14 = local_2f8[0];
        if (this_04 == pFVar37) break;
        ::FName::ToString(this_04,&local_1f8);
        if ((char)this_04[0x23].ComparisonIndex.Value != '\0') {
          ::FString::AppendChars(&local_1f8,L" (Replay)",9);
        }
        uVar2 = (uchar)this_04[0xb].Number;
        uVar3 = *(uchar *)((longlong)&this_04[0xb].Number + 1);
        uVar4 = *(uchar *)((longlong)&this_04[0xb].Number + 2);
        if (CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),
                     *(undefined1 *)((longlong)&this_04[0xb].Number + 3)) == 0) {
          local_1e0 = *this_04;
          if (local_1e0 == (FName)0x0) {
            QueryPerformanceCounter(&local_1e8);
            fVar41 = extraout_XMM0_Da_01;
          }
          else {
            pFVar25 = ::FName::ToString(&local_1e0,&local_f0);
            iVar17 = (pFVar25->Data).ArrayNum;
            if (iVar17 == 0) {
              pwVar28 = L"";
              iVar17 = 0;
            }
            else {
              pwVar28 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
              iVar17 = iVar17 + -1;
            }
            FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,pwVar28);
            fVar41 = extraout_XMM0_Da;
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
              fVar41 = extraout_XMM0_Da_00;
            }
          }
          FColor::MakeRedToGreenColorFromScalar(fVar41);
          pFVar37 = local_2a0;
        }
        else {
          local_2f0[0]._s_0.A = 0xff;
          local_2f0[0]._0_1_ = uVar2;
          local_2f0[0]._1_1_ = uVar3;
          local_2f0[0]._2_1_ = uVar4;
        }
        pUVar23 = UEngine::GetSmallFont();
        FWorldPartitionDebugHelper::DrawText
                  (param_1,&local_1f8,pUVar23,(FColor *)&local_2f0[0]._s_0,
                   (TVector2<double> *)&local_228._s_0,&local_2b4);
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
        this_04 = this_04 + 0x2c;
      }
      iVar18 = pTVar24->ArrayNum;
      this_05 = (FWorldPartitionStreamingSource *)(pTVar24->AllocatorInstance).Data;
      local_228._s_0.X = (double)(local_2b4 + __real_41200000) + local_2d8._s_0.X;
      pFVar34 = this_05 + iVar18;
      local_228._s_0.Y = local_2d8._s_0.Y;
      while( true ) {
        if (pTVar24->ArrayNum != iVar18) {
          `TCheckedPointerIterator<FWorldPartitionStreamingSource_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_2de);
        }
        if (this_05 == pFVar34) break;
        pUVar23 = UEngine::GetSmallFont();
        pFVar25 = FWorldPartitionStreamingSource::ToString(this_05,&local_e0);
        if ((pFVar25->Data).ArrayNum == 0) {
          pwVar28 = L"";
        }
        else {
          pwVar28 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
        }
        ::FString::FString(&local_148,pwVar28);
        FWorldPartitionDebugHelper::DrawText
                  (param_1,&local_148,pUVar23,&FColor::White,(TVector2<double> *)&local_228._s_0,
                   (float *)0x0);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        this_05 = this_05 + 1;
      }
      local_2d8._s_0.Y = local_228._s_0.Y;
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
    if (cVar14 != '\0') {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if ((GDrawLegends != 0) || (GDrawRuntimeHash2D != 0)) {
    DrawStreamingStatusLegend(this,param_1,(TVector2<double> *)&local_2d8._s_0,local_2e8);
  }
  if (local_2e8 != (UWorldPartition *)0x0) {
    if ((((GDrawDataLayers != 0) || (GDrawDataLayersLoadTime != 0)) || (GDrawRuntimeHash2D != 0)) &&
       (this_02 = UWorldPartition::GetDataLayerManager(local_2e8),
       this_02 != (UDataLayerManager *)0x0)) {
      UDataLayerManager::DrawDataLayersStatus(this_02,param_1,(TVector2<double> *)&local_2d8._s_0);
    }
    pUVar20 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    this_01 = (pUVar20->ContentBundleManager).field0_0x0.DebugPtr;
    if (((this_01 != (UContentBundleManager *)0x0) &&
        (FWorldPartitionDebugHelper::bCanDrawContentBundles != false)) && (GDrawRuntimeHash2D != 0))
    {
      pUVar20 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
      UContentBundleManager::DrawContentBundlesStatus
                (this_01,pUVar20,param_1,(TVector2<double> *)&local_2d8._s_0);
    }
    if (GDrawRuntimeCellsDetails != 0) {
      UWorldPartition::DrawRuntimeCellsDetails
                (local_2e8,param_1,(TVector2<double> *)&local_2d8._s_0);
    }
  }
LAB_148aef00e:
  if (bVar38) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DrawStreamingStatusLegend @ 148aef080

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
UWorldPartitionSubsystem::DrawStreamingStatusLegend
          (UWorldPartitionSubsystem *this,UCanvas *param_1,TVector2<double> *param_2,
          UWorldPartition *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UWorld *pUVar9;
  UObject *pUVar10;
  longlong *plVar11;
  UFont *pUVar12;
  size_t sVar13;
  uint uVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  EStreamingStatus EVar17;
  UObject *pUVar18;
  FScriptContainerElement *pFVar19;
  bool bVar20;
  undefined1 local_b8 [4];
  float local_b4;
  ForAnyElementType local_b0;
  int local_a8 [2];
  FColor local_a0 [2];
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  TVector2<double>_u_0 local_58;
  FString local_48;
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1635,"UWorldPartitionSubsystem::DrawStreamingStatusLegend",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
               ,0x663);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1635);
  }
  if ((param_1 == (UCanvas *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Canvas",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                         ,0x665,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar18 = (UObject *)0x0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,9,&local_b0,local_a8,local_a8 + 1);
  lVar15 = (longlong)iVar5;
  *(undefined8 *)(local_b0.Data + lVar15 * 4) = 0;
  *(undefined8 *)(local_b0.Data + lVar15 * 4 + 8) = 0;
  *(undefined8 *)(local_b0.Data + lVar15 * 4 + 0x10) = 0;
  *(undefined8 *)(local_b0.Data + lVar15 * 4 + 0x10 + 8) = 0;
  *(undefined4 *)(local_b0.Data + lVar15 * 4 + 0x20) = 0;
  pUVar8 = pUVar18;
  if (param_3 != (UWorldPartition *)0x0) {
    pUVar7 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_3,pUVar7);
  }
  pUVar9 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  pFVar19 = (pUVar9->StreamingLevels).AllocatorInstance.Data;
  iVar5 = (pUVar9->StreamingLevels).ArrayNum;
  pFVar1 = pFVar19 + (longlong)iVar5 * 8;
  do {
    if ((pUVar9->StreamingLevels).ArrayNum != iVar5) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_b8);
    }
    if (pFVar19 == pFVar1) {
      iVar5 = FLevelStreamingGCHelper::GetNumLevelsPendingPurge();
      if ((local_a8[0] < 2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(int *)(local_b0.Data + 4) = iVar5;
      local_58._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_58._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_b4 = 0.0;
      pUVar12 = UEngine::GetSmallFont();
      ::FString::FString(&local_68,L"Streaming Status Legend");
      FWorldPartitionDebugHelper::DrawText
                (param_1,&local_68,pUVar12,&FColor::Yellow,(TVector2<double> *)&local_58._s_0,
                 &local_b4);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      do {
        ULevelStreaming::GetLevelStreamingStatusColor((EStreamingStatus)local_a0);
        EVar17 = (EStreamingStatus)pUVar18;
        ULevelStreaming::GetLevelStreamingStatusDisplayName(EVar17);
        ::FString::PrintfImpl(&local_88,L"%d) %s");
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_88.Data.ArrayNum != 0) {
          FVar16.Data = local_88.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_98,(wchar_t *)FVar16.Data);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (EVar17 != LEVEL_Unloaded) {
          if ((local_a8[0] <= (int)EVar17) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          ::FString::PrintfImpl(&local_78,L" (%d)");
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_78.Data.ArrayNum != 0) {
            FVar16.Data = local_78.Data.AllocatorInstance.Data;
          }
          sVar13 = wcslen((wchar_t *)FVar16.Data);
          ::FString::AppendChars(&local_98,(wchar_t *)FVar16.Data,(int)sVar13);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        pUVar12 = UEngine::GetSmallFont();
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_98.Data.ArrayNum != 0) {
          FVar16.Data = local_98.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_48,(wchar_t *)FVar16.Data);
        FWorldPartitionDebugHelper::DrawLegendItem
                  (param_1,&local_48,pUVar12,local_a0,&FColor::White,
                   (TVector2<double> *)&local_58._s_0,&local_b4);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        pUVar18 = (UObject *)(ulonglong)(EVar17 + LEVEL_UnloadedButStillAround);
      } while ((int)(EVar17 + LEVEL_UnloadedButStillAround) < 9);
      (param_2->field0_0x0)._s_0.X =
           (double)(local_b4 + __real_41200000) + (param_2->field0_0x0)._s_0.X;
      if (local_b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data);
      }
      if (bVar20) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    plVar11 = *(longlong **)pFVar19;
    if ((((pUVar8 == (UObject *)0x0) ||
         (pUVar10 = (UObject *)(**(code **)(*plVar11 + 0x308))(plVar11), pUVar8 == pUVar10)) &&
        (plVar11 = (longlong *)(**(code **)(*plVar11 + 0x2b0))(plVar11), plVar11 != (longlong *)0x0)
        ) && (plVar11 = (longlong *)(**(code **)(*plVar11 + 8))(plVar11), plVar11 != (longlong *)0x0
             )) {
      pUVar7 = Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
      iVar2 = (int)pUVar7->_padding_;
      if ((iVar2 <= *(int *)(plVar11[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar11[2] + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar7->_padding_)) {
        uVar6 = (**(code **)(*plVar11 + 0x318))(plVar11);
        uVar14 = 0;
        if ((int)uVar6 < local_a8[0]) {
          uVar14 = ~uVar6 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(int *)(local_b0.Data + (longlong)(int)uVar6 * 4) =
             *(int *)(local_b0.Data + (longlong)(int)uVar6 * 4) + 1;
      }
    }
    pFVar19 = pFVar19 + 8;
  } while( true );
}

// DumpStreamingSources @ 148aef500

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
UWorldPartitionSubsystem::DumpStreamingSources
          (UWorldPartitionSubsystem *this,FOutputDevice *param_1)

{
  int iVar1;
  UWorld *this_00;
  FWorldPartitionStreamingSource *this_01;
  FWorldPartitionStreamingSource *pFVar2;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  if (0 < (this->StreamingSources).ArrayNum) {
    this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_38,(UObject *)0x0);
    FOutputDevice::LogfImpl(param_1,L"Streaming Sources for %s:");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    iVar1 = (this->StreamingSources).ArrayNum;
    this_01 = (FWorldPartitionStreamingSource *)(this->StreamingSources).AllocatorInstance.Data;
    pFVar2 = this_01 + iVar1;
    while( true ) {
      if ((this->StreamingSources).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FWorldPartitionStreamingSource_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (this_01 == pFVar2) break;
      FWorldPartitionStreamingSource::ToString(this_01,&local_28);
      ::FName::ToString(&this_01->Name,&local_38);
      FOutputDevice::LogfImpl(param_1,L"  - %s: %s");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      this_01 = this_01 + 1;
    }
  }
  return;
}

// DumpWorldPartitions @ 148aef650

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
UWorldPartitionSubsystem::DumpWorldPartitions(UWorldPartitionSubsystem *this,FOutputDevice *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UWorld *this_00;
  FScriptContainerElement *pFVar3;
  FString *pFVar4;
  FString *pFVar5;
  FIdentityFunctor local_res8 [8];
  FString **local_res18;
  FString *local_38;
  undefined8 local_30;
  FString local_28;
  
  if (0 < (this->RegisteredWorldPartitions).ArrayNum) {
    this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
    FOutputDevice::LogfImpl(param_1,L"Registered World Partitions for %s:");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar3 = (this->RegisteredWorldPartitions).AllocatorInstance.Data;
    iVar2 = (this->RegisteredWorldPartitions).ArrayNum;
    local_38 = (FString *)0x0;
    local_30 = 0;
    local_res18 = &local_38;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->RegisteredWorldPartitions).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UWorldPartition>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) break;
      `UWorldPartitionSubsystem::DumpWorldPartitions'::__l5::<lambda_1>::operator()
                (&local_res18,*(UWorldPartition **)pFVar3);
      pFVar3 = pFVar3 + 8;
    }
    AlgoImpl::
    IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
              (local_38,(int)local_30,local_res8[0],(TLess<void> *)local_res8);
    iVar2 = (int)local_30;
    pFVar5 = local_38 + (int)local_30;
    pFVar4 = local_38;
    while( true ) {
      if ((int)local_30 != iVar2) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar4 == pFVar5) break;
      FOutputDevice::LogfImpl(param_1,L"  - %s");
      pFVar4 = pFVar4 + 1;
    }
    DestructItems<FString,int>(local_38,(int)local_30);
    if (local_38 != (FString *)0x0) {
      FMemory::Free(local_38);
    }
  }
  return;
}

// ForEachWorldPartition @ 148af00c0

void __thiscall
UWorldPartitionSubsystem::ForEachWorldPartition
          (UWorldPartitionSubsystem *this,TFunctionRef<bool___cdecl(UWorldPartition_*)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_res8;
  
  pFVar4 = (this->RegisteredWorldPartitions).AllocatorInstance.Data;
  iVar2 = (this->RegisteredWorldPartitions).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredWorldPartitions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UWorldPartition>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar4 == pFVar1) break;
    local_res8 = *(undefined8 *)pFVar4;
    cVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8);
    if (cVar3 == '\0') {
      return;
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// GetOverriddenLoadingRangesEpoch @ 148af0fc0

uint __cdecl UWorldPartitionSubsystem::GetOverriddenLoadingRangesEpoch(void)

{
  return OverriddenLoadingRangesEpoch;
}

// GetOverrideLoadingRange @ 148af0fd0

bool __cdecl UWorldPartitionSubsystem::GetOverrideLoadingRange(FName param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (OverriddenLoadingRanges._8_4_ != OverriddenLoadingRanges._52_4_) {
    lVar4 = 0x154c711c8;
    if (OverriddenLoadingRanges._64_8_ != 0) {
      lVar4 = OverriddenLoadingRanges._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)
                             (OverriddenLoadingRanges._72_4_ - 1 & param_1.Number + uVar2) * 4);
    while (iVar1 != -1) {
      lVar4 = OverriddenLoadingRanges._0_8_ + (longlong)iVar1 * 0x14;
      if (*(FName *)(OverriddenLoadingRanges._0_8_ + (longlong)iVar1 * 0x14) == param_1) {
        piVar3 = (int *)(lVar4 + 8);
        if (lVar4 == 0) {
          piVar3 = (int *)0x0;
        }
        if (piVar3 == (int *)0x0) {
          return false;
        }
        *param_2 = *piVar3;
        return true;
      }
      iVar1 = *(int *)(lVar4 + 0xc);
    }
  }
  return false;
}

// GetPrivateStaticClass @ 148af1240

UClass * __cdecl UWorldPartitionSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionSubsystem",
               &Z_Registration_Info_UClass_UWorldPartitionSubsystem.InnerSingleton,
               StaticRegisterNativesUWorldPartitionSubsystem,0x310,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWorldPartitionSubsystem>,
               InternalVTableHelperCtorCaller<UWorldPartitionSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionSubsystem.InnerSingleton;
}

// GetStatId @ 148af1330

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UWorldPartitionSubsystem::GetStatId(UWorldPartitionSubsystem *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWorldPartitionSubsystem::GetStatId(void)const_::_2_::FStat_UWorldPartitionSubsystem>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UWorldPartitionSubsystem ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWorldPartitionSubsystem::GetStatId(void)const_::_2_::FStat_UWorldPartitionSubsystem>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"UWorldPartitionSubsystem");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UWorldPartitionSubsystem,*pFVar1,
                   L"UWorldPartitionSubsystem","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables"
                   ,true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_UWorldPartitionSubsystem;
  if (StatPtr_UWorldPartitionSubsystem ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWorldPartitionSubsystem::GetStatId(void)const_::_2_::FStat_UWorldPartitionSubsystem>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UWorldPartitionSubsystem");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWorldPartitionSubsystem::GetStatId(void)const_::_2_::FStat_UWorldPartitionSubsystem>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UWorldPartitionSubsystem,*pFVar1,
                         L"UWorldPartitionSubsystem","STATGROUP_Tickables","STATCAT_Advanced",
                         L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetStreamingSourceProviders @ 148af1490

TSet<IWorldPartitionStreamingSourceProvider_*,DefaultKeyFuncs<IWorldPartitionStreamingSourceProvider_*,0>,FDefaultSetAllocator>
* __thiscall
UWorldPartitionSubsystem::GetStreamingSourceProviders
          (UWorldPartitionSubsystem *this,
          TSet<IWorldPartitionStreamingSourceProvider_*,DefaultKeyFuncs<IWorldPartitionStreamingSourceProvider_*,0>,FDefaultSetAllocator>
          *__return_storage_ptr__)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  FReadAccessScope local_58;
  undefined1 local_40 [12];
  uint local_34;
  longlong local_30;
  uint local_28;
  int local_24;
  TSet<IWorldPartitionStreamingSourceProvider_*,DefaultKeyFuncs<IWorldPartitionStreamingSourceProvider_*,0>,FDefaultSetAllocator>
  *local_18;
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  TSet<IWorldPartitionStreamingSourceProvider_*,DefaultKeyFuncs<IWorldPartitionStreamingSourceProvider_*,0>,FDefaultSetAllocator>
  ::operator=(__return_storage_ptr__,&this->StreamingSourceProviders);
  if (*(int *)&(__return_storage_ptr__->Elements).field_0x8 !=
      *(int *)&(__return_storage_ptr__->Elements).field_0x34) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->IsStreamingSourceProviderFiltered,&local_58);
    if (((*(int *)&(this->IsStreamingSourceProviderFiltered).field_0x10 == 0) ||
        (plVar5 = *(longlong **)&(this->IsStreamingSourceProviderFiltered).field_0x8,
        plVar5 == (longlong *)0x0)) || (cVar4 = (**(code **)(*plVar5 + 0x38))(), cVar4 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    if ((bVar2) &&
       (TSet<IWorldPartitionStreamingSourceProvider_*,DefaultKeyFuncs<IWorldPartitionStreamingSourceProvider_*,0>,FDefaultSetAllocator>
        ::TIterator::TIterator((TIterator *)local_40,__return_storage_ptr__),
       local_24 < *(int *)(local_30 + 0x18))) {
      do {
        iVar3 = local_24;
        uVar1 = *(undefined8 *)(*(longlong *)local_40._0_8_ + (longlong)local_24 * 0x10);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->IsStreamingSourceProviderFiltered,&local_58);
        plVar5 = (longlong *)0x0;
        if (*(int *)&(this->IsStreamingSourceProviderFiltered).field_0x10 != 0) {
          plVar5 = *(longlong **)&(this->IsStreamingSourceProviderFiltered).field_0x8;
        }
        cVar4 = (**(code **)(*plVar5 + 0x60))(plVar5,uVar1);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_58);
        if (cVar4 != '\0') {
          TSet<IWorldPartitionStreamingSourceProvider_*,DefaultKeyFuncs<IWorldPartitionStreamingSourceProvider_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex(local_18,iVar3);
        }
        local_28 = local_28 & ~local_34;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_40 + 8));
      } while (local_24 < *(int *)(local_30 + 0x18));
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// GetStreamingSources @ 148af1620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UWorldPartitionSubsystem::GetStreamingSources
          (UWorldPartitionSubsystem *this,UWorldPartition *param_1,
          TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  UWorld *pUVar20;
  TTransform<double> *this_00;
  TQuat<double> *pTVar21;
  TRotator<double> *pTVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  undefined1 auVar47 [16];
  double dVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined1 local_res18 [8];
  undefined1 local_178 [32];
  TTransform<double> local_158;
  TRotator<double> local_f8;
  TQuat<double> local_d8 [6];
  
  bVar16 = UWorldPartition::IsServer(param_1);
  bVar17 = UWorldPartition::IsServerStreamingEnabled(param_1);
  if ((bVar16) && (!bVar17)) {
    pUVar20 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    bVar16 = AWorldPartitionReplay::IsRecordingEnabled(pUVar20);
    if (!bVar16) goto LAB_148af16e0;
  }
  if ((param_2 == &this->StreamingSources) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L""), bVar16)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar19 = (this->StreamingSources).ArrayNum;
  if (iVar19 != 0) {
    iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x160,8,iVar19,&param_2->AllocatorInstance,&param_2->ArrayNum,
                        &param_2->ArrayMax);
    ConstructItems<FWorldPartitionStreamingSource,FWorldPartitionStreamingSource,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar18 * 0x160,
               (FWorldPartitionStreamingSource *)(this->StreamingSources).AllocatorInstance.Data,
               iVar19);
  }
LAB_148af16e0:
  if ((param_2->ArrayNum != 0) && ((param_1->InstanceTransform).bIsSet != false)) {
    this_00 = UWorldPartition::GetInstanceTransform(param_1);
    auVar41._0_8_ =
         (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 4) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          *(uint *)(this_00->Scale3D).ZW.m128d_f64 &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar41._8_4_ = *(uint *)((this_00->Scale3D).ZW.m128d_f64 + 1) & _UNK_15061cc88;
    auVar41._12_4_ = *(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 0xc) & _UNK_15061cc8c;
    auVar53._0_8_ =
         (double)CONCAT44(*(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 4) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          *(uint *)(this_00->Scale3D).XY.m128d_f64 &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar53._8_4_ = *(uint *)((this_00->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88;
    auVar53._12_4_ = *(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 0xc) & _UNK_15061cc8c;
    auVar29._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar41._8_8_);
    auVar29._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar41._0_8_);
    uVar23 = movmskpd((int)param_1,auVar29);
    lVar27 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar53._8_8_);
    auVar68._8_4_ = (int)lVar27;
    auVar68._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar53._0_8_);
    auVar68._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
    iVar19 = movmskpd((int)this_00,auVar68);
    if ((uVar23 & 0x3fffffff) == 0 && iVar19 == 0) {
      uVar73 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      uVar74 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      uVar75 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      uVar76 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      uVar69 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar70 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar71 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar72 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      uVar63 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
      uVar64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      uVar65 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      uVar66 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
      uVar61 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      uVar62 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      uVar57 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar58 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar59 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar60 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar77 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar78 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar79 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar80 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(this_00,&local_158);
      uVar57 = local_158.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar58 = local_158.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar59 = local_158.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar60 = local_158.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar61 = local_158.Translation.ZW.m128d_f64[0]._0_4_;
      uVar62 = local_158.Translation.ZW.m128d_f64[0]._4_4_;
      uVar63 = local_158.Translation.XY.m128d_f64[0]._0_4_;
      uVar64 = local_158.Translation.XY.m128d_f64[0]._4_4_;
      uVar65 = local_158.Translation.XY.m128d_f64[1]._0_4_;
      uVar66 = local_158.Translation.XY.m128d_f64[1]._4_4_;
      uVar69 = local_158.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar70 = local_158.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar71 = local_158.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar72 = local_158.Rotation.ZW.m128d_f64[1]._4_4_;
      uVar73 = local_158.Rotation.XY.m128d_f64[0]._0_4_;
      uVar74 = local_158.Rotation.XY.m128d_f64[0]._4_4_;
      uVar75 = local_158.Rotation.XY.m128d_f64[1]._0_4_;
      uVar76 = local_158.Rotation.XY.m128d_f64[1]._4_4_;
      uVar77 = local_158.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar78 = local_158.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar79 = local_158.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar80 = local_158.Scale3D.ZW.m128d_f64[1]._4_4_;
    }
    pFVar25 = (param_2->AllocatorInstance).Data;
    iVar19 = param_2->ArrayNum;
    pFVar26 = pFVar25 + 8;
    pFVar24 = pFVar25 + (longlong)iVar19 * 0x160;
    while( true ) {
      if (param_2->ArrayNum != iVar19) {
        `TCheckedPointerIterator<FWorldPartitionStreamingSource,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar25 == pFVar24) break;
      dVar7 = *(double *)pFVar26 * (double)CONCAT44(uVar58,uVar57);
      dVar8 = *(double *)(pFVar26 + 8) * (double)CONCAT44(uVar60,uVar59);
      uVar28 = (undefined4)((ulonglong)dVar8 >> 0x20);
      auVar67._4_4_ = uVar74;
      auVar67._0_4_ = uVar73;
      auVar67._8_4_ = uVar75;
      auVar67._12_4_ = uVar76;
      dVar10 = *(double *)(pFVar26 + 0x10) * (double)CONCAT44(uVar78,uVar77);
      dVar11 = (double)CONCAT44(uVar80,uVar79) * 0.0;
      dVar13 = (double)CONCAT44(uVar70,uVar69);
      dVar12 = (double)CONCAT44(uVar76,uVar75);
      auVar54._8_4_ = SUB84(dVar8,0);
      auVar54._0_8_ = dVar7;
      auVar54._12_4_ = uVar28;
      auVar14._4_4_ = uVar70;
      auVar14._0_4_ = uVar69;
      auVar14._8_4_ = uVar71;
      auVar14._12_4_ = uVar72;
      auVar68 = blendpd(auVar67,auVar14,2);
      auVar55._0_8_ = auVar54._8_8_ * (double)CONCAT44(uVar74,uVar73) - dVar12 * dVar7;
      auVar55._8_8_ = dVar10 * (double)CONCAT44(uVar76,uVar75) - dVar13 * dVar8;
      auVar30._8_4_ = SUB84(dVar8,0);
      auVar30._0_8_ = dVar7;
      auVar30._12_4_ = uVar28;
      dVar4 = auVar68._0_8_;
      dVar5 = auVar68._8_8_;
      auVar9._8_4_ = SUB84(dVar11,0);
      auVar9._0_8_ = dVar10;
      auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      auVar68 = blendpd(auVar30,auVar9,2);
      auVar47._8_4_ = SUB84(auVar55._8_8_,0);
      auVar47._0_8_ = auVar55._0_8_;
      auVar47._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
      auVar31._0_8_ = auVar68._0_8_ * (double)CONCAT44(uVar70,uVar69) - dVar4 * dVar10;
      auVar31._8_8_ = auVar68._8_8_ * (double)CONCAT44(uVar72,uVar71) - dVar5 * dVar11;
      dVar11 = (double)CONCAT44(uVar72,uVar71);
      auVar68 = blendpd(auVar55,auVar31,2);
      dVar46 = auVar47._8_8_ + auVar47._8_8_;
      dVar52 = auVar31._0_8_ + auVar31._0_8_;
      auVar56._0_8_ = auVar68._0_8_ + auVar68._0_8_;
      auVar56._8_8_ = auVar68._8_8_ + auVar68._8_8_;
      auVar42._8_4_ = SUB84(dVar52,0);
      auVar42._0_8_ = dVar46;
      uVar28 = (undefined4)((ulonglong)dVar52 >> 0x20);
      auVar42._12_4_ = uVar28;
      auVar36._8_4_ = SUB84(dVar52,0);
      auVar36._0_8_ = dVar46;
      auVar36._12_4_ = uVar28;
      auVar32._8_4_ = uVar71;
      auVar32._0_8_ = dVar11;
      auVar32._12_4_ = uVar72;
      auVar68 = blendpd(auVar36,auVar56,2);
      auVar43._0_8_ = auVar42._8_8_ * (double)CONCAT44(uVar74,uVar73) - dVar12 * dVar46;
      auVar43._8_8_ = auVar56._0_8_ * (double)CONCAT44(uVar76,uVar75) - dVar13 * dVar52;
      auVar37._0_8_ = auVar68._0_8_ * (double)CONCAT44(uVar70,uVar69) - dVar4 * auVar56._0_8_;
      auVar37._8_8_ = auVar68._8_8_ * (double)CONCAT44(uVar72,uVar71) - dVar5 * auVar56._8_8_;
      auVar68 = blendpd(auVar43,auVar37,2);
      *(double *)pFVar26 = dVar11 * dVar46 + dVar7 + auVar43._8_8_ + (double)CONCAT44(uVar64,uVar63)
      ;
      *(double *)(pFVar26 + 8) =
           auVar32._8_8_ * dVar52 + dVar8 + auVar37._0_8_ + (double)CONCAT44(uVar66,uVar65);
      *(double *)(pFVar26 + 0x10) =
           dVar11 * auVar56._0_8_ + dVar10 + auVar68._0_8_ + (double)CONCAT44(uVar62,uVar61);
      pTVar21 = UE::Math::TRotator<double>::Quaternion
                          ((TRotator<double> *)(pFVar26 + 0x18),local_d8);
      auVar48._4_4_ = uVar74;
      auVar48._0_4_ = uVar73;
      auVar48._8_4_ = uVar75;
      auVar48._12_4_ = uVar76;
      uVar1 = pTVar21->Z;
      uVar2 = pTVar21->W;
      dVar8 = pTVar21->X;
      dVar10 = pTVar21->Y;
      auVar38._8_4_ = (int)uVar1;
      auVar38._0_8_ = uVar2;
      auVar38._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
      local_178._0_8_ =
           (double)uVar2 * (double)CONCAT44(uVar74,uVar73) *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar11 * dVar8 +
           (double)uVar1 * auVar48._8_8_ *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar10 * (double)CONCAT44(uVar70,uVar69) *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_178._8_8_ =
           auVar38._8_8_ * (double)CONCAT44(uVar74,uVar73) *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           (double)CONCAT44(uVar72,uVar71) * dVar10 +
           (double)uVar2 * (double)CONCAT44(uVar76,uVar75) *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar8 * (double)CONCAT44(uVar70,uVar69) *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar7 = dVar8 * (double)CONCAT44(uVar74,uVar73) *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              (double)CONCAT44(uVar72,uVar71) * (double)uVar2 +
              dVar10 * (double)CONCAT44(uVar76,uVar75) *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              (double)uVar1 * (double)CONCAT44(uVar70,uVar69) *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_178._24_4_ = SUB84(dVar7,0);
      local_178._16_8_ =
           dVar10 * (double)CONCAT44(uVar74,uVar73) *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar11 * (double)uVar1
           + dVar8 * auVar48._8_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
           + (double)uVar2 * (double)CONCAT44(uVar70,uVar69) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_178._28_4_ = (int)((ulonglong)dVar7 >> 0x20);
      pTVar22 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_178,&local_f8);
      auVar15._8_4_ = uVar59;
      auVar15._0_8_ = CONCAT44(uVar58,uVar57);
      auVar15._12_4_ = uVar60;
      pFVar25 = pFVar25 + 0x160;
      dVar7 = pTVar22->Yaw;
      *(double *)(pFVar26 + 0x18) = pTVar22->Pitch;
      *(double *)(pFVar26 + 0x20) = dVar7;
      *(double *)(pFVar26 + 0x28) = pTVar22->Roll;
      dVar46 = *(double *)(pFVar26 + 0x38) * (double)CONCAT44(uVar58,uVar57);
      dVar52 = *(double *)(pFVar26 + 0x40) * auVar15._8_8_;
      dVar10 = *(double *)(pFVar26 + 0x48) * (double)CONCAT44(uVar78,uVar77);
      dVar7 = (double)CONCAT44(uVar80,uVar79) * 0.0;
      auVar49._8_4_ = SUB84(dVar52,0);
      auVar49._0_8_ = dVar46;
      uVar28 = (undefined4)((ulonglong)dVar52 >> 0x20);
      auVar49._12_4_ = uVar28;
      auVar33._8_4_ = SUB84(dVar52,0);
      auVar33._0_8_ = dVar46;
      auVar33._12_4_ = uVar28;
      auVar6._8_4_ = SUB84(dVar7,0);
      auVar6._0_8_ = dVar10;
      auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar68 = blendpd(auVar33,auVar6,2);
      auVar50._0_8_ = auVar49._8_8_ * (double)CONCAT44(uVar74,uVar73) - dVar12 * dVar46;
      auVar50._8_8_ = dVar10 * (double)CONCAT44(uVar76,uVar75) - dVar13 * dVar52;
      auVar34._0_8_ = auVar68._0_8_ * (double)CONCAT44(uVar70,uVar69) - dVar4 * dVar10;
      auVar34._8_8_ = auVar68._8_8_ * (double)CONCAT44(uVar72,uVar71) - dVar5 * dVar7;
      dVar7 = auVar50._8_8_ + auVar50._8_8_;
      dVar8 = auVar34._0_8_ + auVar34._0_8_;
      uVar28 = (undefined4)((ulonglong)dVar8 >> 0x20);
      auVar68 = blendpd(auVar50,auVar34,2);
      auVar51._0_8_ = auVar68._0_8_ + auVar68._0_8_;
      auVar51._8_8_ = auVar68._8_8_ + auVar68._8_8_;
      auVar35._8_4_ = uVar71;
      auVar35._0_8_ = dVar11;
      auVar35._12_4_ = uVar72;
      auVar44._8_4_ = SUB84(dVar8,0);
      auVar44._0_8_ = dVar7;
      auVar44._12_4_ = uVar28;
      auVar39._8_4_ = SUB84(dVar8,0);
      auVar39._0_8_ = dVar7;
      auVar39._12_4_ = uVar28;
      auVar68 = blendpd(auVar39,auVar51,2);
      auVar45._0_8_ = auVar44._8_8_ * (double)CONCAT44(uVar74,uVar73) - dVar12 * dVar7;
      auVar45._8_8_ = auVar51._0_8_ * (double)CONCAT44(uVar76,uVar75) - dVar13 * dVar8;
      auVar40._0_8_ = auVar68._0_8_ * (double)CONCAT44(uVar70,uVar69) - dVar4 * auVar51._0_8_;
      auVar40._8_8_ = auVar68._8_8_ * (double)CONCAT44(uVar72,uVar71) - dVar5 * auVar51._8_8_;
      auVar68 = blendpd(auVar45,auVar40,2);
      *(double *)(pFVar26 + 0x38) = dVar11 * dVar7 + dVar46 + auVar45._8_8_;
      *(double *)(pFVar26 + 0x40) = auVar35._8_8_ * dVar8 + dVar52 + auVar40._0_8_;
      *(double *)(pFVar26 + 0x48) = dVar11 * auVar51._0_8_ + dVar10 + auVar68._0_8_;
      pFVar26 = pFVar26 + 0x160;
    }
  }
  return;
}

// GetTickableTickType @ 148af1c00

ETickableTickType __thiscall
UWorldPartitionSubsystem::GetTickableTickType(UWorldPartitionSubsystem *this)

{
  bool bVar1;
  
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)
                     &this[-1].WorldPartitionLoadingAndPendingLoadStreamingLevels.Elements.
                      field_0x20,RF_ArchetypeObject|RF_ClassDefaultObject);
  return bVar1 + Always;
}

// GetWorldPartition @ 148af1e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorldPartition * __thiscall
UWorldPartitionSubsystem::GetWorldPartition(UWorldPartitionSubsystem *this)

{
  UWorld *this_00;
  UWorldPartition *pUVar1;
  
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  pUVar1 = UWorld::GetWorldPartition(this_00);
  return pUVar1;
}

// GetWorldPartition @ 148af1e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorldPartition * __thiscall
UWorldPartitionSubsystem::GetWorldPartition(UWorldPartitionSubsystem *this)

{
  UWorld *this_00;
  UWorldPartition *pUVar1;
  
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  pUVar1 = UWorld::GetWorldPartition(this_00);
  return pUVar1;
}

// HasAnyWorldPartitionServerStreamingEnabled @ 148af1e60

bool __thiscall
UWorldPartitionSubsystem::HasAnyWorldPartitionServerStreamingEnabled(UWorldPartitionSubsystem *this)

{
  return 0 < this->NumWorldPartitionServerStreamingEnabled;
}

// HasUninitializationPendingStreamingLevels @ 148af1f70

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
UWorldPartitionSubsystem::HasUninitializationPendingStreamingLevels
          (UWorldPartitionSubsystem *this,UWorldPartition *param_1)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  FSoftObjectPath local_28;
  
  lVar11 = 0;
  lVar9 = lVar11;
  if (param_1 != (UWorldPartition *)0x0) {
    local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_28.AssetPath.PackageName.Number = 0;
    local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetPath.AssetName.Number = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_28,(UObject *)param_1);
    FVar3 = local_28.AssetPath.AssetName;
    uVar6 = ::GetTypeHash(local_28.AssetPath.AssetName.ComparisonIndex.Value);
    FVar2 = local_28.AssetPath.PackageName;
    uVar7 = ::GetTypeHash(local_28.AssetPath.PackageName.ComparisonIndex.Value);
    uVar7 = uVar7 + FVar2.Number;
    uVar7 = uVar7 * 0x40 + uVar6 + FVar3.Number + (uVar7 >> 2) + 0x9e3779b9 ^ uVar7;
    if (1 < local_28.SubPathString.Data.ArrayNum) {
      iVar8 = local_28.SubPathString.Data.ArrayNum + -1;
      if (local_28.SubPathString.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<char8_t>
                        (iVar8,(uchar *)local_28.SubPathString.Data.AllocatorInstance.Data);
      uVar7 = uVar7 ^ uVar6 + 0x9e3779b9 + uVar7 * 0x40 + (uVar7 >> 2);
    }
    iVar8 = TSet<TTuple<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FSoftObjectPath>
                      ((TSet<TTuple<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                        *)&this->WorldPartitionUninitializationPendingStreamingLevels,uVar7,
                       &local_28);
    if (iVar8 != -1) {
      lVar9 = (longlong)iVar8 * 0x78 +
              *(longlong *)&this->WorldPartitionUninitializationPendingStreamingLevels;
    }
    lVar10 = lVar9 + 0x20;
    if (lVar9 == 0) {
      lVar10 = lVar11;
    }
    lVar11 = lVar10;
    lVar9 = 1;
  }
  if ((lVar9 != 0) &&
     (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  if (lVar11 != 0) {
    if (*(int *)(lVar11 + 8) != *(int *)(lVar11 + 0x34)) {
      return true;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5736735822393113979>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                       ,0x285,"!PendingStreamingLevels->IsEmpty()");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  return false;
}

// IncrementalUpdateStreamingState @ 148af20e0

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
UWorldPartitionSubsystem::IncrementalUpdateStreamingState(UWorldPartitionSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  TObjectPtr<UWorldPartition> local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  undefined1 local_78 [12];
  uint local_6c;
  longlong local_68;
  uint local_60;
  int local_5c;
  TSet<TObjectPtr<UWorldPartition>,DefaultKeyFuncs<TObjectPtr<UWorldPartition>,0>,FDefaultSetAllocator>
  *local_50;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1143,
               "UWorldPartitionSubsystem::IncrementalUpdateStreamingState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
               ,0x477);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1143);
  }
  if ((GUpdateStreamingStateTimeLimit <= 0.0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("GUpdateStreamingStateTimeLimit > 0.f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                          ,0x478,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return (bool)uVar11;
  }
  if (*(int *)&(this->IncrementalUpdateWorldPartitions).Elements.field_0x8 ==
      *(int *)&(this->IncrementalUpdateWorldPartitions).Elements.field_0x34) {
    iVar3 = (this->RegisteredWorldPartitions).ArrayNum;
    pFVar15 = (this->RegisteredWorldPartitions).AllocatorInstance.Data;
    if ((iVar3 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    uVar12 = *(int *)&(this->IncrementalUpdateWorldPartitions).Elements.field_0x8 -
             *(int *)&(this->IncrementalUpdateWorldPartitions).Elements.field_0x34;
    uVar14 = uVar12 + iVar3;
    if (uVar12 < uVar14) {
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
      }
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->IncrementalUpdateWorldPartitions,uVar14);
      if (uVar14 < 4) {
        iVar13 = 1;
      }
      else {
        uVar2 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar6 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar13 = 1 << ((byte)lVar6 & 0x1f);
      }
      iVar4 = (this->IncrementalUpdateWorldPartitions).HashSize;
      if ((iVar4 == 0) || (iVar4 < iVar13)) {
        (this->IncrementalUpdateWorldPartitions).HashSize = iVar13;
        TSet<TObjectPtr<UWorldPartition>,DefaultKeyFuncs<TObjectPtr<UWorldPartition>,0>,FDefaultSetAllocator>
        ::Rehash(&this->IncrementalUpdateWorldPartitions);
      }
    }
    pFVar1 = pFVar15 + (longlong)iVar3 * 8;
    for (; pFVar15 != pFVar1; pFVar15 = pFVar15 + 8) {
      TSet<TObjectPtr<UWorldPartition>,DefaultKeyFuncs<TObjectPtr<UWorldPartition>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectPtr<UWorldPartition>_const_&>
                (&this->IncrementalUpdateWorldPartitions,&local_res8,(bool *)pFVar15);
    }
  }
  else {
    if (*(int *)&(this->IncrementalUpdateWorldPartitionsPendingAdd).Elements.field_0x8 ==
        *(int *)&(this->IncrementalUpdateWorldPartitionsPendingAdd).Elements.field_0x34)
    goto LAB_148af227e;
    TSet<TObjectPtr<UWorldPartition>,DefaultKeyFuncs<TObjectPtr<UWorldPartition>,0>,FDefaultSetAllocator>
    ::Append<FDefaultSetAllocator>
              (&this->IncrementalUpdateWorldPartitions,
               &this->IncrementalUpdateWorldPartitionsPendingAdd);
  }
  TSet<TObjectPtr<UWorldPartition>,DefaultKeyFuncs<TObjectPtr<UWorldPartition>,0>,FDefaultSetAllocator>
  ::Reset(&this->IncrementalUpdateWorldPartitionsPendingAdd);
LAB_148af227e:
  QueryPerformanceCounter(&local_res10);
  dVar8 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  TSet<TObjectPtr<UWorldPartition>,DefaultKeyFuncs<TObjectPtr<UWorldPartition>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_78,&this->IncrementalUpdateWorldPartitions);
  dVar9 = __real_408f400000000000;
  if (local_5c < *(int *)(local_68 + 0x18)) {
    do {
      iVar3 = local_5c;
      plVar5 = *(longlong **)
                (*(longlong *)(*(longlong *)local_78._0_8_ + (longlong)local_5c * 0x10) + 0x130);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x2b8))();
      }
      TSet<TObjectPtr<UWorldPartition>,DefaultKeyFuncs<TObjectPtr<UWorldPartition>,0>,FDefaultSetAllocator>
      ::RemoveByIndex(local_50,iVar3);
      QueryPerformanceCounter(&local_res18);
      if ((double)GUpdateStreamingStateTimeLimit <
          ((double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar8) * dVar9)
      break;
      local_60 = local_60 & ~local_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_78 + 8));
    } while (local_5c < *(int *)(local_68 + 0x18));
  }
  iVar3 = *(int *)&(this->IncrementalUpdateWorldPartitions).Elements.field_0x34;
  iVar13 = *(int *)&(this->IncrementalUpdateWorldPartitions).Elements.field_0x8;
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return iVar13 == iVar3;
}

// Initialize @ 148af2530

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
UWorldPartitionSubsystem::Initialize
          (UWorldPartitionSubsystem *this,FSubsystemCollectionBase *param_1)

{
  bool bVar1;
  UWorld *pUVar2;
  
  UTickableWorldSubsystem::Initialize((UTickableWorldSubsystem *)this,param_1);
  pUVar2 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  TMulticastDelegateRegistration<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>::
  AddUObject<UWorldPartitionSubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>
              *)&pUVar2->OnWorldPartitionInitializedEvent,
             (UWorldPartitionSubsystem *)&stack0x00000018,(pmf_f6f53dfd *)this);
  pUVar2 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  TMulticastDelegateRegistration<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>::
  AddUObject<UWorldPartitionSubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>
              *)&pUVar2->OnWorldPartitionUninitializedEvent,
             (UWorldPartitionSubsystem *)&stack0x00000018,(pmf_f6f53dfd *)this);
  pUVar2 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  bVar1 = UWorld::IsGameWorld(pUVar2);
  if (bVar1) {
    TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
    ::AddUObject<UWorldPartitionSubsystem>
              ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
                *)&FLevelStreamingDelegates::OnLevelBeginMakingVisible,
               (UWorldPartitionSubsystem *)&stack0x00000018,(pmf_ebd7fab8 *)this);
    TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
    ::AddUObject<UWorldPartitionSubsystem>
              ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*),FDefaultDelegateUserPolicy>
                *)&FLevelStreamingDelegates::OnLevelBeginMakingInvisible,
               (UWorldPartitionSubsystem *)&stack0x00000018,(pmf_ebd7fab8 *)this);
    TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingTargetState,enum_ELevelStreamingTargetState),FDefaultDelegateUserPolicy>
    ::AddUObject<UWorldPartitionSubsystem>
              (&FLevelStreamingDelegates::OnLevelStreamingTargetStateChanged,
               (UWorldPartitionSubsystem *)&stack0x00000018,(pmf_b25e8b13 *)this);
    TMulticastDelegateRegistration<void___cdecl(UWorld_*,ULevelStreaming_const_*,ULevel_*,enum_ELevelStreamingState,enum_ELevelStreamingState),FDefaultDelegateUserPolicy>
    ::AddUObject<UWorldPartitionSubsystem>
              (&FLevelStreamingDelegates::OnLevelStreamingStateChanged,
               (UWorldPartitionSubsystem *)&stack0x00000018,(pmf_746fd536 *)this);
  }
  pUVar2 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  TMulticastDelegate<void___cdecl(UWorldPartitionSubsystem_*,UWorld_*),FDefaultDelegateUserPolicy>::
  Broadcast(&OnWorldPartitionSubsystemInitialized,this,pUVar2);
  return;
}

// IsAllStreamingCompleted @ 148af2710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWorldPartitionSubsystem::IsAllStreamingCompleted(UWorldPartitionSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->RegisteredWorldPartitions).AllocatorInstance.Data;
  iVar2 = (this->RegisteredWorldPartitions).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredWorldPartitions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UWorldPartition>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    bVar3 = UWorldPartition::IsStreamingCompleted
                      (*(UWorldPartition **)pFVar4,
                       (TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *)0x0);
    if (!bVar3) {
      DestructItems<FWorldPartitionStreamingSource,int>((FWorldPartitionStreamingSource *)0x0,0);
      DestructItems<FWorldPartitionStreamingSource,int>((FWorldPartitionStreamingSource *)0x0,0);
      return false;
    }
    DestructItems<FWorldPartitionStreamingSource,int>((FWorldPartitionStreamingSource *)0x0,0);
    pFVar4 = pFVar4 + 8;
  }
  DestructItems<FWorldPartitionStreamingSource,int>((FWorldPartitionStreamingSource *)0x0,0);
  return true;
}

// IsServer @ 148af2920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UWorldPartitionSubsystem::IsServer(UWorld *param_1)

{
  ENetMode EVar1;
  
  EVar1 = UWorld::InternalGetNetMode(param_1);
  return EVar1 - NM_DedicatedServer < 2;
}

// IsStreamingCompleted @ 148af2940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UWorldPartitionSubsystem::IsStreamingCompleted
          (UWorldPartitionSubsystem *this,IWorldPartitionStreamingSourceProvider *param_1)

{
  UWorldPartition *this_00;
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  bool bVar14;
  int iVar15;
  TTransform<double> *this_01;
  TQuat<double> *pTVar16;
  TRotator<double> *pTVar17;
  uint uVar18;
  ulonglong uVar19;
  UWorldPartition *pUVar20;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *pTVar21;
  FWorldPartitionStreamingSource *pFVar22;
  FScriptContainerElement *pFVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> local_1d8;
  FWorldPartitionStreamingSource *local_1c8;
  ulonglong local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8 [32];
  TTransform<double> local_188;
  TRotator<double> local_128;
  TQuat<double> local_108 [6];
  
  local_1c8 = (FWorldPartitionStreamingSource *)0x0;
  local_1c0 = 0;
  if ((param_1 == (IWorldPartitionStreamingSourceProvider *)0x0) ||
     (cVar13 = (**(code **)((longlong)*param_1 + 8))(param_1,&local_1c8), cVar13 != '\0')) {
    local_res18 = (this->RegisteredWorldPartitions).ArrayNum;
    uVar19 = (ulonglong)(int)local_res18;
    pFVar26 = (this->RegisteredWorldPartitions).AllocatorInstance.Data;
    pFVar25 = pFVar26 + uVar19 * 8;
    local_res20 = pFVar25;
    while( true ) {
      if ((this->RegisteredWorldPartitions).ArrayNum != (int)uVar19) {
        `TCheckedPointerIterator<TObjectPtr<UWorldPartition>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar26 == pFVar25) {
        bVar14 = true;
        goto LAB_148af2e77;
      }
      this_00 = *(UWorldPartition **)pFVar26;
      local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.ArrayNum = 0;
      local_1d8.ArrayMax = 0;
      if (param_1 != (IWorldPartitionStreamingSourceProvider *)0x0) {
        pUVar20 = this_00;
        this_01 = UWorldPartition::GetInstanceTransform(this_00);
        auVar34._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              *(uint *)((longlong)(this_01->Scale3D).ZW.m128d_f64 + 4),
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              *(uint *)(this_01->Scale3D).ZW.m128d_f64);
        auVar34._8_4_ = _UNK_15061cc88 & *(uint *)((this_01->Scale3D).ZW.m128d_f64 + 1);
        auVar34._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(this_01->Scale3D).ZW.m128d_f64 + 0xc)
        ;
        auVar41._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar34._8_8_);
        auVar41._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar34._0_8_);
        auVar35._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              *(uint *)((longlong)(this_01->Scale3D).XY.m128d_f64 + 4),
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              *(uint *)(this_01->Scale3D).XY.m128d_f64);
        auVar35._8_4_ = _UNK_15061cc88 & *(uint *)((this_01->Scale3D).XY.m128d_f64 + 1);
        auVar35._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(this_01->Scale3D).XY.m128d_f64 + 0xc)
        ;
        lVar27 = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar35._8_8_);
        uVar18 = movmskpd((int)pUVar20,auVar41);
        auVar29._8_4_ = (int)lVar27;
        auVar29._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar35._0_8_);
        auVar29._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
        iVar15 = movmskpd((int)this_01,auVar29);
        if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
          uVar53 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar54 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar55 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar56 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          uVar49 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar50 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar51 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar52 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar45 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          uVar46 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          uVar47 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          uVar48 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          uVar65 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
          uVar66 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
          uVar61 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar62 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar63 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar57 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar58 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar59 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar60 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
        }
        else {
          UE::Math::TTransform<double>::InverseFast(this_01,&local_188);
          uVar45 = local_188.Translation.XY.m128d_f64[0]._0_4_;
          uVar46 = local_188.Translation.XY.m128d_f64[0]._4_4_;
          uVar47 = local_188.Translation.XY.m128d_f64[1]._0_4_;
          uVar48 = local_188.Translation.XY.m128d_f64[1]._4_4_;
          uVar49 = local_188.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar50 = local_188.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar51 = local_188.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar52 = local_188.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar53 = local_188.Rotation.XY.m128d_f64[0]._0_4_;
          uVar54 = local_188.Rotation.XY.m128d_f64[0]._4_4_;
          uVar55 = local_188.Rotation.XY.m128d_f64[1]._0_4_;
          uVar56 = local_188.Rotation.XY.m128d_f64[1]._4_4_;
          uVar57 = local_188.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar58 = local_188.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar59 = local_188.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar60 = local_188.Scale3D.ZW.m128d_f64[1]._4_4_;
          uVar61 = local_188.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar62 = local_188.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar63 = local_188.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar64 = local_188.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar65 = local_188.Translation.ZW.m128d_f64[0]._0_4_;
          uVar66 = local_188.Translation.ZW.m128d_f64[0]._4_4_;
        }
        local_1b8 = uVar45;
        uStack_1b4 = uVar46;
        uStack_1b0 = uVar47;
        uStack_1ac = uVar48;
        DestructItems<FWorldPartitionStreamingSource,int>
                  ((FWorldPartitionStreamingSource *)local_1d8.AllocatorInstance.Data,
                   local_1d8.ArrayNum);
        pFVar22 = local_1c8;
        iVar15 = (int)local_1c0;
        local_1d8.ArrayNum = (int)local_1c0;
        if (((int)local_1c0 == 0) && (local_1d8.ArrayMax == 0)) {
          local_1d8._8_8_ = local_1c0 & 0xffffffff;
          iVar15 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x160,8,(int)local_1c0,local_1d8.ArrayMax,&local_1d8.AllocatorInstance,
                     (int)local_1c0,&local_1d8.ArrayMax);
          ConstructItems<FWorldPartitionStreamingSource,FWorldPartitionStreamingSource,int>
                    (local_1d8.AllocatorInstance.Data,pFVar22,iVar15);
          iVar15 = local_1d8.ArrayNum;
        }
        pFVar23 = local_1d8.AllocatorInstance.Data + 8;
        pFVar22 = (FWorldPartitionStreamingSource *)
                  (local_1d8.AllocatorInstance.Data + (longlong)iVar15 * 0x160);
        iVar24 = iVar15;
        while( true ) {
          if (iVar24 != iVar15) {
            `TCheckedPointerIterator<FWorldPartitionStreamingSource,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          pFVar25 = local_res20;
          if ((FWorldPartitionStreamingSource *)(pFVar23 + -8) == pFVar22) break;
          dVar6 = *(double *)(pFVar23 + 0x10) * (double)CONCAT44(uVar58,uVar57);
          dVar7 = (double)CONCAT44(uVar60,uVar59) * 0.0;
          dVar3 = (double)CONCAT44(uVar62,uVar61) * *(double *)pFVar23;
          dVar4 = (double)CONCAT44(uVar64,uVar63) * *(double *)(pFVar23 + 8);
          uVar39 = (undefined4)((ulonglong)dVar4 >> 0x20);
          auVar40._4_4_ = uVar54;
          auVar40._0_4_ = uVar53;
          auVar40._8_4_ = uVar55;
          auVar40._12_4_ = uVar56;
          auVar9._4_4_ = uVar50;
          auVar9._0_4_ = uVar49;
          auVar9._8_4_ = uVar51;
          auVar9._12_4_ = uVar52;
          auVar41 = blendpd(auVar40,auVar9,2);
          auVar42._8_4_ = SUB84(dVar4,0);
          auVar42._0_8_ = dVar3;
          auVar42._12_4_ = uVar39;
          auVar28._8_4_ = SUB84(dVar4,0);
          auVar28._0_8_ = dVar3;
          auVar28._12_4_ = uVar39;
          auVar5._8_4_ = SUB84(dVar7,0);
          auVar5._0_8_ = dVar6;
          auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          auVar29 = blendpd(auVar28,auVar5,2);
          auVar43._0_8_ =
               auVar42._8_8_ * (double)CONCAT44(uVar54,uVar53) -
               dVar3 * (double)CONCAT44(uVar56,uVar55);
          auVar43._8_8_ =
               dVar6 * (double)CONCAT44(uVar56,uVar55) - dVar4 * (double)CONCAT44(uVar50,uVar49);
          auVar30._0_8_ = auVar29._0_8_ * (double)CONCAT44(uVar50,uVar49) - dVar6 * auVar41._0_8_;
          auVar30._8_8_ = auVar29._8_8_ * (double)CONCAT44(uVar52,uVar51) - dVar7 * auVar41._8_8_;
          dVar10 = (double)CONCAT44(uVar52,uVar51);
          dVar8 = (double)CONCAT44(uVar52,uVar51);
          auVar29 = blendpd(auVar43,auVar30,2);
          dVar7 = auVar43._8_8_ + auVar43._8_8_;
          dVar2 = auVar30._0_8_ + auVar30._0_8_;
          uVar39 = (undefined4)((ulonglong)dVar2 >> 0x20);
          auVar44._0_8_ = auVar29._0_8_ + auVar29._0_8_;
          auVar44._8_8_ = auVar29._8_8_ + auVar29._8_8_;
          auVar36._8_4_ = SUB84(dVar2,0);
          auVar36._0_8_ = dVar7;
          auVar36._12_4_ = uVar39;
          auVar31._8_4_ = SUB84(dVar2,0);
          auVar31._0_8_ = dVar7;
          auVar31._12_4_ = uVar39;
          auVar29 = blendpd(auVar31,auVar44,2);
          auVar37._0_8_ =
               auVar36._8_8_ * (double)CONCAT44(uVar54,uVar53) -
               dVar7 * (double)CONCAT44(uVar56,uVar55);
          auVar37._8_8_ =
               auVar44._0_8_ * (double)CONCAT44(uVar56,uVar55) -
               dVar2 * (double)CONCAT44(uVar50,uVar49);
          auVar32._0_8_ =
               auVar29._0_8_ * (double)CONCAT44(uVar50,uVar49) - auVar44._0_8_ * auVar41._0_8_;
          auVar32._8_8_ =
               auVar29._8_8_ * (double)CONCAT44(uVar52,uVar51) - auVar44._8_8_ * auVar41._8_8_;
          auVar29 = blendpd(auVar37,auVar32,2);
          dVar2 = dVar2 * dVar10 + dVar4 + auVar32._0_8_ + (double)CONCAT44(uVar48,uVar47);
          auVar1._8_4_ = SUB84(dVar2,0);
          auVar1._0_8_ = dVar7 * dVar8 + dVar3 + auVar37._8_8_ + (double)CONCAT44(uVar46,uVar45);
          auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
          *(undefined1 (*) [16])pFVar23 = auVar1;
          *(double *)(pFVar23 + 0x10) =
               auVar44._0_8_ * dVar8 + dVar6 + auVar29._0_8_ + (double)CONCAT44(uVar66,uVar65);
          pTVar16 = UE::Math::TRotator<double>::Quaternion
                              ((TRotator<double> *)(pFVar23 + 0x18),local_108);
          dVar2 = (double)CONCAT44(uVar54,uVar53);
          auVar38._8_4_ = uVar53;
          auVar38._0_8_ = dVar2;
          auVar38._12_4_ = uVar54;
          dVar7 = (double)CONCAT44(uVar56,uVar55);
          dVar4 = pTVar16->Z;
          dVar6 = pTVar16->W;
          auVar33._8_4_ = uVar55;
          auVar33._0_8_ = dVar7;
          auVar33._12_4_ = uVar56;
          dVar11 = pTVar16->X;
          dVar12 = pTVar16->Y;
          local_1a8._0_8_ =
               dVar2 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar8 * dVar11 +
               dVar7 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               (double)CONCAT44(uVar50,uVar49) * dVar12 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_1a8._8_8_ =
               auVar38._8_8_ * dVar4 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar10 * dVar12 +
               auVar33._8_8_ * dVar6 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               (double)CONCAT44(uVar50,uVar49) * dVar11 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar3 = (double)CONCAT44(uVar54,uVar53) * dVar11 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar10 * dVar6 +
                  (double)CONCAT44(uVar56,uVar55) * dVar12 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                  (double)CONCAT44(uVar50,uVar49) * dVar4 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_1a8._24_4_ = SUB84(dVar3,0);
          local_1a8._16_8_ =
               dVar2 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar8 * dVar4 +
               dVar7 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               (double)CONCAT44(uVar50,uVar49) * dVar6 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_1a8._28_4_ = (int)((ulonglong)dVar3 >> 0x20);
          pTVar17 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_1a8,&local_128);
          dVar7 = pTVar17->Yaw;
          *(double *)(pFVar23 + 0x18) = pTVar17->Pitch;
          *(double *)(pFVar23 + 0x20) = dVar7;
          *(double *)(pFVar23 + 0x28) = pTVar17->Roll;
          pFVar23 = pFVar23 + 0x160;
          uVar45 = local_1b8;
          uVar46 = uStack_1b4;
          uVar47 = uStack_1b0;
          uVar48 = uStack_1ac;
          iVar24 = local_1d8.ArrayNum;
        }
      }
      pTVar21 = &local_1d8;
      if (param_1 == (IWorldPartitionStreamingSourceProvider *)0x0) {
        pTVar21 = (TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *)0x0;
      }
      bVar14 = UWorldPartition::IsStreamingCompleted(this_00,pTVar21);
      if (!bVar14) break;
      DestructItems<FWorldPartitionStreamingSource,int>
                ((FWorldPartitionStreamingSource *)local_1d8.AllocatorInstance.Data,
                 local_1d8.ArrayNum);
      if ((FWorldPartitionStreamingSource *)local_1d8.AllocatorInstance.Data !=
          (FWorldPartitionStreamingSource *)0x0) {
        FMemory::Free(local_1d8.AllocatorInstance.Data);
      }
      uVar19 = (ulonglong)local_res18;
      pFVar26 = pFVar26 + 8;
    }
    DestructItems<FWorldPartitionStreamingSource,int>
              ((FWorldPartitionStreamingSource *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum
              );
    if ((FWorldPartitionStreamingSource *)local_1d8.AllocatorInstance.Data !=
        (FWorldPartitionStreamingSource *)0x0) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
    }
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
LAB_148af2e77:
  DestructItems<FWorldPartitionStreamingSource,int>(local_1c8,(int)local_1c0);
  if (local_1c8 != (FWorldPartitionStreamingSource *)0x0) {
    FMemory::Free(local_1c8);
  }
  return bVar14;
}

// IsStreamingCompleted @ 148af2ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UWorldPartitionSubsystem::IsStreamingCompleted
          (UWorldPartitionSubsystem *this,EWorldPartitionRuntimeCellState param_1,
          TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  UWorldPartition *this_00;
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  int iVar14;
  TTransform<double> *this_01;
  TQuat<double> *pTVar15;
  TRotator<double> *pTVar16;
  uint uVar17;
  UWorldPartition *pUVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  FWorldPartitionStreamingQuerySource *pFVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined1 local_1d8 [8];
  TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>_> local_1d0;
  uint local_1c0;
  FScriptContainerElement *local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [32];
  TTransform<double> local_178;
  TRotator<double> local_118;
  TQuat<double> local_f8 [6];
  
  local_1c0 = (this->RegisteredWorldPartitions).ArrayNum;
  uVar19 = (ulonglong)(int)local_1c0;
  pFVar22 = (this->RegisteredWorldPartitions).AllocatorInstance.Data;
  local_1b8 = pFVar22 + uVar19 * 8;
  while( true ) {
    pFVar12 = local_1b8;
    if ((this->RegisteredWorldPartitions).ArrayNum != (int)uVar19) {
      `TCheckedPointerIterator<TObjectPtr<UWorldPartition>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_1d8);
    }
    if (pFVar22 == pFVar12) {
      return true;
    }
    this_00 = *(UWorldPartition **)pFVar22;
    pUVar18 = this_00;
    this_01 = UWorldPartition::GetInstanceTransform(this_00);
    auVar29._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)(this_01->Scale3D).ZW.m128d_f64 + 4),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                          *(uint *)(this_01->Scale3D).ZW.m128d_f64);
    auVar29._8_4_ = _UNK_15061cc88 & *(uint *)((this_01->Scale3D).ZW.m128d_f64 + 1);
    auVar29._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(this_01->Scale3D).ZW.m128d_f64 + 0xc);
    auVar36._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar29._8_8_);
    auVar36._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar29._0_8_);
    auVar30._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)(this_01->Scale3D).XY.m128d_f64 + 4),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                          *(uint *)(this_01->Scale3D).XY.m128d_f64);
    auVar30._8_4_ = _UNK_15061cc88 & *(uint *)((this_01->Scale3D).XY.m128d_f64 + 1);
    auVar30._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(this_01->Scale3D).XY.m128d_f64 + 0xc);
    lVar23 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar30._8_8_);
    uVar17 = movmskpd((int)pUVar18,auVar36);
    auVar25._8_4_ = (int)lVar23;
    auVar25._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar30._0_8_);
    auVar25._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    iVar14 = movmskpd((int)this_01,auVar25);
    if ((uVar17 & 0x3fffffff) == 0 && iVar14 == 0) {
      uVar48 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      uVar49 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      uVar50 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      uVar51 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      uVar44 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar45 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar46 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar47 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      uVar40 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
      uVar41 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      uVar42 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      uVar43 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
      uVar60 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      uVar61 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      uVar56 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar57 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar58 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar59 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar52 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar53 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar54 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar55 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(this_01,&local_178);
      uVar40 = local_178.Translation.XY.m128d_f64[0]._0_4_;
      uVar41 = local_178.Translation.XY.m128d_f64[0]._4_4_;
      uVar42 = local_178.Translation.XY.m128d_f64[1]._0_4_;
      uVar43 = local_178.Translation.XY.m128d_f64[1]._4_4_;
      uVar44 = local_178.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar45 = local_178.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar46 = local_178.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar47 = local_178.Rotation.ZW.m128d_f64[1]._4_4_;
      uVar48 = local_178.Rotation.XY.m128d_f64[0]._0_4_;
      uVar49 = local_178.Rotation.XY.m128d_f64[0]._4_4_;
      uVar50 = local_178.Rotation.XY.m128d_f64[1]._0_4_;
      uVar51 = local_178.Rotation.XY.m128d_f64[1]._4_4_;
      uVar52 = local_178.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar53 = local_178.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar54 = local_178.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar55 = local_178.Scale3D.ZW.m128d_f64[1]._4_4_;
      uVar56 = local_178.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar57 = local_178.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar58 = local_178.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar59 = local_178.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar60 = local_178.Translation.ZW.m128d_f64[0]._0_4_;
      uVar61 = local_178.Translation.ZW.m128d_f64[0]._4_4_;
    }
    iVar14 = param_2->ArrayNum;
    pFVar21 = (FWorldPartitionStreamingQuerySource *)(param_2->AllocatorInstance).Data;
    local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.ArrayNum = iVar14;
    local_1a8 = uVar40;
    uStack_1a4 = uVar41;
    uStack_1a0 = uVar42;
    uStack_19c = uVar43;
    if (iVar14 == 0) {
      local_1d0.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x108,8,iVar14,0,&local_1d0.AllocatorInstance,iVar14,&local_1d0.ArrayMax);
      ConstructItems<FWorldPartitionStreamingQuerySource,FWorldPartitionStreamingQuerySource,int>
                (local_1d0.AllocatorInstance.Data,pFVar21,iVar14);
    }
    iVar14 = local_1d0.ArrayNum;
    pFVar21 = (FWorldPartitionStreamingQuerySource *)
              (local_1d0.AllocatorInstance.Data + (longlong)local_1d0.ArrayNum * 0x108);
    FVar20.Data = local_1d0.AllocatorInstance.Data;
    while( true ) {
      if (local_1d0.ArrayNum != iVar14) {
        `TCheckedPointerIterator<FWorldPartitionStreamingQuerySource,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1d8);
      }
      if ((FWorldPartitionStreamingQuerySource *)FVar20.Data == pFVar21) break;
      dVar6 = (((FWorldPartitionStreamingQuerySource *)FVar20.Data)->Location).field0_0x0._s_0.Z *
              (double)CONCAT44(uVar53,uVar52);
      dVar7 = (double)CONCAT44(uVar55,uVar54) * 0.0;
      dVar3 = (double)CONCAT44(uVar57,uVar56) *
              (((FWorldPartitionStreamingQuerySource *)FVar20.Data)->Location).field0_0x0._s_0.X;
      dVar4 = (double)CONCAT44(uVar59,uVar58) *
              (((FWorldPartitionStreamingQuerySource *)FVar20.Data)->Location).field0_0x0._s_0.Y;
      uVar34 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar35._4_4_ = uVar49;
      auVar35._0_4_ = uVar48;
      auVar35._8_4_ = uVar50;
      auVar35._12_4_ = uVar51;
      auVar9._4_4_ = uVar45;
      auVar9._0_4_ = uVar44;
      auVar9._8_4_ = uVar46;
      auVar9._12_4_ = uVar47;
      auVar36 = blendpd(auVar35,auVar9,2);
      auVar37._8_4_ = SUB84(dVar4,0);
      auVar37._0_8_ = dVar3;
      auVar37._12_4_ = uVar34;
      auVar24._8_4_ = SUB84(dVar4,0);
      auVar24._0_8_ = dVar3;
      auVar24._12_4_ = uVar34;
      auVar5._8_4_ = SUB84(dVar7,0);
      auVar5._0_8_ = dVar6;
      auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar25 = blendpd(auVar24,auVar5,2);
      auVar38._0_8_ =
           auVar37._8_8_ * (double)CONCAT44(uVar49,uVar48) - (double)CONCAT44(uVar51,uVar50) * dVar3
      ;
      auVar38._8_8_ =
           dVar6 * (double)CONCAT44(uVar51,uVar50) - (double)CONCAT44(uVar45,uVar44) * dVar4;
      auVar26._0_8_ = auVar25._0_8_ * (double)CONCAT44(uVar45,uVar44) - dVar6 * auVar36._0_8_;
      auVar26._8_8_ = auVar25._8_8_ * (double)CONCAT44(uVar47,uVar46) - dVar7 * auVar36._8_8_;
      dVar10 = (double)CONCAT44(uVar47,uVar46);
      dVar8 = (double)CONCAT44(uVar47,uVar46);
      auVar25 = blendpd(auVar38,auVar26,2);
      dVar7 = auVar38._8_8_ + auVar38._8_8_;
      dVar2 = auVar26._0_8_ + auVar26._0_8_;
      uVar34 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar39._0_8_ = auVar25._0_8_ + auVar25._0_8_;
      auVar39._8_8_ = auVar25._8_8_ + auVar25._8_8_;
      auVar31._8_4_ = SUB84(dVar2,0);
      auVar31._0_8_ = dVar7;
      auVar31._12_4_ = uVar34;
      auVar27._8_4_ = SUB84(dVar2,0);
      auVar27._0_8_ = dVar7;
      auVar27._12_4_ = uVar34;
      auVar25 = blendpd(auVar27,auVar39,2);
      auVar32._0_8_ =
           auVar31._8_8_ * (double)CONCAT44(uVar49,uVar48) - dVar7 * (double)CONCAT44(uVar51,uVar50)
      ;
      auVar32._8_8_ =
           auVar39._0_8_ * (double)CONCAT44(uVar51,uVar50) - dVar2 * (double)CONCAT44(uVar45,uVar44)
      ;
      auVar28._0_8_ =
           auVar25._0_8_ * (double)CONCAT44(uVar45,uVar44) - auVar39._0_8_ * auVar36._0_8_;
      auVar28._8_8_ =
           auVar25._8_8_ * (double)CONCAT44(uVar47,uVar46) - auVar39._8_8_ * auVar36._8_8_;
      auVar25 = blendpd(auVar32,auVar28,2);
      dVar2 = dVar2 * dVar10 + dVar4 + auVar28._0_8_ + (double)CONCAT44(uVar43,uVar42);
      auVar1._8_4_ = SUB84(dVar2,0);
      auVar1._0_8_ = dVar7 * dVar8 + dVar3 + auVar32._8_8_ + (double)CONCAT44(uVar41,uVar40);
      auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      *(undefined1 (*) [16])
       &(((FWorldPartitionStreamingQuerySource *)FVar20.Data)->Location).field0_0x0 = auVar1;
      (((FWorldPartitionStreamingQuerySource *)FVar20.Data)->Location).field0_0x0._s_0.Z =
           auVar39._0_8_ * dVar8 + dVar6 + auVar25._0_8_ + (double)CONCAT44(uVar61,uVar60);
      pTVar15 = UE::Math::TRotator<double>::Quaternion
                          (&((FWorldPartitionStreamingQuerySource *)FVar20.Data)->Rotation,local_f8)
      ;
      dVar7 = (double)CONCAT44(uVar49,uVar48);
      auVar33._8_4_ = uVar48;
      auVar33._0_8_ = dVar7;
      auVar33._12_4_ = uVar49;
      dVar3 = pTVar15->Z;
      dVar4 = pTVar15->W;
      dVar6 = pTVar15->X;
      dVar11 = pTVar15->Y;
      local_198._0_8_ =
           dVar7 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar6 * dVar8 +
           dVar3 * (double)CONCAT44(uVar51,uVar50) *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           (double)CONCAT44(uVar45,uVar44) * dVar11 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_198._8_8_ =
           auVar33._8_8_ * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar11 * dVar10 +
           dVar4 * (double)CONCAT44(uVar51,uVar50) *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           (double)CONCAT44(uVar45,uVar44) * dVar6 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar2 = (double)CONCAT44(uVar49,uVar48) * dVar6 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar4 * dVar10 +
              dVar11 * (double)CONCAT44(uVar51,uVar50) *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              (double)CONCAT44(uVar45,uVar44) * dVar3 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_198._24_4_ = SUB84(dVar2,0);
      local_198._16_8_ =
           dVar7 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar3 * dVar8 +
           dVar6 * (double)CONCAT44(uVar51,uVar50) *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           (double)CONCAT44(uVar45,uVar44) * dVar4 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_198._28_4_ = (int)((ulonglong)dVar2 >> 0x20);
      pTVar16 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_198,&local_118);
      dVar7 = pTVar16->Yaw;
      (((FWorldPartitionStreamingQuerySource *)FVar20.Data)->Rotation).Pitch = pTVar16->Pitch;
      (((FWorldPartitionStreamingQuerySource *)FVar20.Data)->Rotation).Yaw = dVar7;
      (((FWorldPartitionStreamingQuerySource *)FVar20.Data)->Rotation).Roll = pTVar16->Roll;
      FVar20.Data = FVar20.Data + 0x108;
      uVar40 = local_1a8;
      uVar41 = uStack_1a4;
      uVar42 = uStack_1a0;
      uVar43 = uStack_19c;
    }
    bVar13 = UWorldPartition::IsStreamingCompleted(this_00,param_1,&local_1d0,param_3);
    if (!bVar13) break;
    DestructItems<FWorldPartitionStreamingQuerySource,int>
              ((FWorldPartitionStreamingQuerySource *)local_1d0.AllocatorInstance.Data,
               local_1d0.ArrayNum);
    if ((FWorldPartitionStreamingQuerySource *)local_1d0.AllocatorInstance.Data !=
        (FWorldPartitionStreamingQuerySource *)0x0) {
      FMemory::Free(local_1d0.AllocatorInstance.Data);
    }
    pFVar22 = pFVar22 + 8;
    uVar19 = (ulonglong)local_1c0;
  }
  DestructItems<FWorldPartitionStreamingQuerySource,int>
            ((FWorldPartitionStreamingQuerySource *)local_1d0.AllocatorInstance.Data,
             local_1d0.ArrayNum);
  if ((FWorldPartitionStreamingQuerySource *)local_1d0.AllocatorInstance.Data !=
      (FWorldPartitionStreamingQuerySource *)0x0) {
    FMemory::Free(local_1d0.AllocatorInstance.Data);
  }
  return false;
}

// IsStreamingSourceProviderRegistered @ 148af3350

bool __thiscall
UWorldPartitionSubsystem::IsStreamingSourceProviderRegistered
          (UWorldPartitionSubsystem *this,IWorldPartitionStreamingSourceProvider *param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  
  uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->StreamingSourceProviders).Elements.field_0x8 !=
      *(int *)&(this->StreamingSourceProviders).Elements.field_0x34) {
    FVar3 = (this->StreamingSourceProviders).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->StreamingSourceProviders).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)
                    ((this->StreamingSourceProviders).HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->StreamingSourceProviders).Elements;
      do {
        if (*(IWorldPartitionStreamingSourceProvider **)(lVar1 + (longlong)iVar2 * 0x10) == param_1)
        goto LAB_148af33ea;
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_148af33ea:
  return iVar2 != -1;
}

// IsTickableInEditor @ 148af3400

bool __thiscall UWorldPartitionSubsystem::IsTickableInEditor(UWorldPartitionSubsystem *this)

{
  return true;
}

// OnLevelBeginMakingInvisible @ 148af3810

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
UWorldPartitionSubsystem::OnLevelBeginMakingInvisible
          (UWorldPartitionSubsystem *this,UWorld *param_1,ULevelStreaming *param_2,ULevel *param_3)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  UWorldPartition *this_00;
  UWorldPartition *pUVar4;
  UWorld *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (param_1 == pUVar3) {
    pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    bVar2 = UWorld::IsGameWorld(pUVar3);
    if ((bVar2) && (this_00 = ULevel::GetWorldPartition(param_3), this_00 != (UWorldPartition *)0x0)
       ) {
      pUVar4 = UWorld::GetWorldPartition(param_1);
      if ((this_00 == pUVar4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("WorldPartition != InWorld->GetWorldPartition()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                             ,0x2d8,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar3 = UWorldPartition::GetWorld(this_00);
      pUVar5 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
      if ((pUVar3 != pUVar5) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("WorldPartition->GetWorld() == GetWorld()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                             ,0x2d9,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar6 = Z_Construct_UClass_UWorld_NoRegister();
      pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar6);
      if (*(ULevel **)&pUVar7[1].field_0x8 == (ULevel *)0x0) {
        bVar2 = param_3 == (ULevel *)0x0;
      }
      else {
        bVar2 = *(ULevel **)&pUVar7[1].field_0x8 == param_3;
      }
      if ((!bVar2) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InLoadedLevel == WorldPartition->GetTypedOuter<UWorld>()->PersistentLevel"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                             ,0x2da,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UWorldPartition::Uninitialize(this_00);
    }
  }
  return;
}

// OnLevelBeginMakingVisible @ 148af3950

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
UWorldPartitionSubsystem::OnLevelBeginMakingVisible
          (UWorldPartitionSubsystem *this,UWorld *param_1,ULevelStreaming *param_2,ULevel *param_3)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  UWorldPartition *this_00;
  UWorldPartition *pUVar4;
  
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (param_1 == pUVar3) {
    pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    bVar2 = UWorld::IsGameWorld(pUVar3);
    if (bVar2) {
      this_00 = ULevel::GetWorldPartition(param_3);
      if (this_00 != (UWorldPartition *)0x0) {
        pUVar4 = UWorld::GetWorldPartition(param_1);
        if (this_00 == pUVar4) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("WorldPartition != InWorld->GetWorldPartition()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                             ,0x2ca,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        UWorldPartition::Initialize(this_00,param_1,&param_2->LevelTransform);
      }
    }
  }
  return;
}

// OnLevelStreamingStateChanged @ 148af3a00

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
UWorldPartitionSubsystem::OnLevelStreamingStateChanged
          (UWorldPartitionSubsystem *this,UWorld *param_1,ULevelStreaming *param_2,ULevel *param_3,
          ELevelStreamingState param_4,ELevelStreamingState param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  UWorld *pUVar5;
  UClass *pUVar6;
  TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *this_00;
  FWeakObjectPtr local_res10;
  ULevelStreaming *local_18;
  FWeakObjectPtr local_10;
  
  pUVar5 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (((param_1 == pUVar5) &&
      (UpdateLoadingAndPendingLoadStreamingLevels(this,param_2),
      (param_5 & ~FailedToLoad) == Removed)) && (param_2 != (ULevelStreaming *)0x0)) {
    pUVar6 = Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_NoRegister();
    iVar3 = (int)pUVar6->_padding_;
    if ((iVar3 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar6->_padding_)) {
      bVar2 = UWorld::IsGameWorld(param_1);
      if ((!bVar2) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InWorld->IsGameWorld()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                             ,0x2b1,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = TMapBase<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>_>
                ::Find((TMapBase<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>_>
                        *)&this->WorldPartitionUninitializationPendingStreamingLevels,
                       (FSoftObjectPath *)&param_2[1]._padding_);
      if (this_00 !=
          (TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        local_res10.ObjectIndex = 0;
        local_res10.ObjectSerialNumber = 0;
        local_18 = param_2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_18);
        local_10 = local_res10;
        if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
          iVar3 = TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  ::
                  RemoveImpl<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic_const_,FWeakObjectPtr>_>
                            (this_00,local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                             (TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic_const_,FWeakObjectPtr>
                              *)&local_10);
          if (((iVar3 != 0) &&
              (*(int *)&(this_00->Elements).field_0x8 == *(int *)&(this_00->Elements).field_0x34))
             && (*(int *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x8 !=
                 *(int *)&(this->WorldPartitionUninitializationPendingStreamingLevels).field_0x34))
          {
            uVar4 = ::GetTypeHash((FSoftObjectPath *)&param_2[1]._padding_);
            TSet<TTuple<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FSoftObjectPath>
                      ((TSet<TTuple<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                        *)&this->WorldPartitionUninitializationPendingStreamingLevels,uVar4,
                       (FSoftObjectPath *)&param_2[1]._padding_);
          }
        }
      }
    }
  }
  return;
}

// OnLevelStreamingTargetStateChanged @ 148af3b90

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
UWorldPartitionSubsystem::OnLevelStreamingTargetStateChanged
          (UWorldPartitionSubsystem *this,UWorld *param_1,ULevelStreaming *param_2,ULevel *param_3,
          ELevelStreamingState param_4,ELevelStreamingTargetState param_5,
          ELevelStreamingTargetState param_6)

{
  bool bVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  UWorldPartition *this_00;
  
  pUVar2 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (param_1 == pUVar2) {
    UpdateLoadingAndPendingLoadStreamingLevels(this,param_2);
    if ((param_3 != (ULevel *)0x0) && (param_6 != LoadedVisible)) {
      pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
      pUVar2 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_3,pUVar3);
      this_00 = UWorld::GetWorldPartition(pUVar2);
      if (this_00 != (UWorldPartition *)0x0) {
        bVar1 = UWorldPartition::IsInitialized(this_00);
        if (bVar1) {
          bVar1 = UWorldPartition::CanStream(this_00);
          if (!bVar1) {
            if (CpuChannel->Enabled < 0) {
              UpdateStreamingStateInternal(param_1,this_00);
            }
            else {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&__CpuProfilerEventSpecId750,
                         "UWorldPartitionSubsystem::OnLevelStreamingTargetStateChanged",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                         ,0x2ee);
              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId750);
              UpdateStreamingStateInternal(param_1,this_00);
              FCpuProfilerTrace::OutputEndEvent();
            }
          }
        }
      }
    }
  }
  return;
}

// OnUpdateStreamingState @ 148af3e30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartitionSubsystem::OnUpdateStreamingState(UWorldPartitionSubsystem *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_WorldPartitionUpdateStreamingState> FVar5;
  UWorld *pUVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  bool bVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar10.Value = 0;
  FVar5 = StatPtr_STAT_WorldPartitionUpdateStreamingState;
  if (StatPtr_STAT_WorldPartitionUpdateStreamingState ==
      (FThreadSafeStaticStat<FStat_STAT_WorldPartitionUpdateStreamingState>)0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_WorldPartitionUpdateStreamingState");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_WorldPartitionUpdateStreamingState>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WorldPartitionUpdateStreamingState
                       ,*pFVar4,L"Update Streaming State","STATGROUP_WorldPartition",
                       "STATCAT_Advanced",L"World Partition",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar9 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value == 0) && (uVar7 == 0)) {
    pUVar6 = UWorldSubsystem::GetWorld
                       ((UWorldSubsystem *)
                        &this[-1].WorldPartitionLoadingAndPendingLoadStreamingLevels.Elements.
                         field_0x10);
    UpdateStreamingStateInternal(pUVar6,(UWorldPartition *)0x0);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                   ,0x45d);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar11 = FThreadStats::bPrimaryEnable == false;
    if (bVar11) {
      FVar9.ComparisonIndex.Value = 0;
      FVar9.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      FVar10.Value = FVar8.Value;
    }
    pUVar6 = UWorldSubsystem::GetWorld
                       ((UWorldSubsystem *)
                        &this[-1].WorldPartitionLoadingAndPendingLoadStreamingLevels.Elements.
                         field_0x10);
    UpdateStreamingStateInternal(pUVar6,(UWorldPartition *)0x0);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar11) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar10.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  }
  return;
}

// OnWorldBeginPlay @ 148af40b0

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
UWorldPartitionSubsystem::OnWorldBeginPlay(UWorldPartitionSubsystem *this,UWorld *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  UWorldSubsystem::OnWorldBeginPlay((UWorldSubsystem *)this,param_1);
  this->bHasBegunPlay = true;
  pFVar3 = (this->RegisteredWorldPartitions).AllocatorInstance.Data;
  iVar2 = (this->RegisteredWorldPartitions).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RegisteredWorldPartitions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UWorldPartition>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UWorldPartition::OnBeginPlay(*(UWorldPartition **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// OnWorldComponentsUpdated @ 148af4120

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
UWorldPartitionSubsystem::OnWorldComponentsUpdated(UWorldPartitionSubsystem *this,UWorld *param_1)

{
  return;
}

// OnWorldPartitionInitialized @ 148af4130

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
UWorldPartitionSubsystem::OnWorldPartitionInitialized
          (UWorldPartitionSubsystem *this,UWorldPartition *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FDelegateHandle FVar8;
  UWorld *this_00;
  FScriptContainerElement *pFVar9;
  TObjectPtr<UWorldPartition> local_res8 [2];
  UWorldPartitionSubsystem *local_res18;
  UWorldPartition *local_res20;
  UWorldPartition *local_a8;
  wchar_t local_a0 [4];
  code *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  bool local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  if ((this->RegisteredWorldPartitions).ArrayNum == 0) {
    local_98 = Draw;
    uStack_90 = 0;
    local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_70.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_60);
    local_48 = &local_70;
    puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_70);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUWorldPartitionSubsystem____A6AXPEAVUCanvas__PEAVAPlayerController___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_res18 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res18);
      puVar6[4] = local_98;
      puVar6[5] = CONCAT44(uStack_8c,uStack_90);
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    FVar8 = UDebugDrawService::Register
                      (local_a0,(TDelegate<void___cdecl(UCanvas_*,APlayerController_*),FDefaultDelegateUserPolicy>
                                 *)L"Game");
                    /* WARNING: Load size is inaccurate */
    (this->DrawHandle).ID = *FVar8.ID;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_78,(FWriteAccessScope *)&local_98);
    if ((local_70.DelegateSize != 0) &&
       (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_70,0,0,0x10);
      local_70.DelegateSize = 0;
    }
    if (local_88 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_8c,uStack_90),
                 (FDestructionSentinel *)&local_98);
    }
    if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_70.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
    this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    bVar4 = UWorld::IsGameWorld(this_00);
    if (bVar4) {
      this->LevelStreamingContinuouslyIncrementalGCWhileLevelsPendingPurge =
           GLevelStreamingContinuouslyIncrementalGCWhileLevelsPendingPurge;
      this->LevelStreamingForceGCAfterLevelStreamedOut = GLevelStreamingForceGCAfterLevelStreamedOut
      ;
      GLevelStreamingContinuouslyIncrementalGCWhileLevelsPendingPurge =
           GLevelStreamingContinuouslyIncrementalGCWhileLevelsPendingPurgeForWP;
      GLevelStreamingForceGCAfterLevelStreamedOut = 0;
    }
  }
  if (this->bHasBegunPlay != false) {
    UWorldPartition::OnBeginPlay(param_1);
  }
  pFVar9 = (this->RegisteredWorldPartitions).AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)(this->RegisteredWorldPartitions).ArrayNum * 8;
  do {
    if (pFVar9 == pFVar2) {
LAB_148af4368:
      local_a8 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UWorldPartition *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      pFVar2 = (this->RegisteredWorldPartitions).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 <
           pFVar2 + (longlong)(this->RegisteredWorldPartitions).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (this->RegisteredWorldPartitions).ArrayNum;
      piVar1 = &(this->RegisteredWorldPartitions).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->RegisteredWorldPartitions).AllocatorInstance,piVar1);
      }
      (this->RegisteredWorldPartitions).ArrayNum = iVar5 + 1;
      *(UWorldPartition **)
       ((this->RegisteredWorldPartitions).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_a8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_a8 != (UWorldPartition *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_a8);
      }
      local_res20 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UWorldPartition *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      TSet<TObjectPtr<UWorldPartition>,DefaultKeyFuncs<TObjectPtr<UWorldPartition>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectPtr<UWorldPartition>_>
                (&this->IncrementalUpdateWorldPartitionsPendingAdd,local_res8,(bool *)&local_res20);
      bVar4 = UWorldPartition::IsServerStreamingEnabled(param_1);
      piVar1 = &this->NumWorldPartitionServerStreamingEnabled;
      *piVar1 = *piVar1 + (uint)bVar4;
      if ((*piVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumWorldPartitionServerStreamingEnabled >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                             ,0x249,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      return;
    }
    if (*(UWorldPartition **)pFVar9 == (UWorldPartition *)0x0) {
      bVar4 = param_1 == (UWorldPartition *)0x0;
    }
    else {
      bVar4 = *(UWorldPartition **)pFVar9 == param_1;
    }
    if (bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!RegisteredWorldPartitions.Contains(InWorldPartition)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                         ,0x245,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_148af4368;
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// OnWorldPartitionUninitialized @ 148af44d0

/* WARNING: Removing unreachable block (ram,0x000148af48cc) */
/* WARNING: Removing unreachable block (ram,0x000148af48f1) */
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
UWorldPartitionSubsystem::OnWorldPartitionUninitialized
          (UWorldPartitionSubsystem *this,UWorldPartition *param_1)

{
  int *piVar1;
  uint uVar2;
  ULevelStreaming *this_00;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  ELevelStreamingState EVar7;
  uint uVar8;
  uint uVar9;
  UWorldPartition *pUVar10;
  UWorld *pUVar11;
  UClass *pUVar12;
  UWorld *pUVar13;
  TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *this_01;
  int iVar14;
  ulonglong uVar15;
  char *pcVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  bool bVar23;
  undefined1 local_res18 [8];
  UWorldPartition *local_res20;
  UWorldPartition *local_c8;
  FWeakObjectPtr local_c0;
  FSoftObjectPath local_b8;
  FSoftObjectPath local_98;
  TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr> local_78;
  UWorldPartition *local_70;
  ULevelStreaming *local_68;
  FScriptContainerElement *local_60;
  TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_58;
  
  pFVar20 = (this->RegisteredWorldPartitions).AllocatorInstance.Data;
  pFVar22 = pFVar20 + (longlong)(this->RegisteredWorldPartitions).ArrayNum * 8;
  for (; pFVar20 != pFVar22; pFVar20 = pFVar20 + 8) {
    if (*(UWorldPartition **)pFVar20 == (UWorldPartition *)0x0) {
      bVar23 = param_1 == (UWorldPartition *)0x0;
    }
    else {
      bVar23 = *(UWorldPartition **)pFVar20 == param_1;
    }
    if (bVar23) goto LAB_148af4556;
  }
  bVar23 = ::FDebug::CheckVerifyFailedImpl2
                     ("RegisteredWorldPartitions.Contains(InWorldPartition)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                      ,0x24e,L"");
  if (bVar23) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_148af4556:
  local_c8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorldPartition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar22 = (this->RegisteredWorldPartitions).AllocatorInstance.Data;
  if (((pFVar22 <= (FScriptContainerElement *)&local_c8) &&
      ((FScriptContainerElement *)&local_c8 <
       pFVar22 + (longlong)(this->RegisteredWorldPartitions).ArrayMax * 8)) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar23)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar14 = (this->RegisteredWorldPartitions).ArrayNum;
  if (iVar14 != 0) {
    pFVar22 = (this->RegisteredWorldPartitions).AllocatorInstance.Data;
    iVar21 = 0;
    bVar23 = *(UWorldPartition **)pFVar22 != local_c8;
    lVar17 = 0;
    pUVar10 = local_c8;
    iVar18 = 0;
    do {
      iVar19 = iVar18;
      do {
        lVar17 = lVar17 + 1;
        iVar19 = iVar19 + 1;
        if (iVar14 <= lVar17) break;
      } while (bVar23 == (*(UWorldPartition **)(pFVar22 + lVar17 * 8) != pUVar10));
      if (bVar23 != false) {
        if (iVar21 != iVar18) {
          memmove(pFVar22 + (longlong)iVar21 * 8,pFVar22 + (longlong)iVar18 * 8,
                  (longlong)(iVar19 - iVar18) << 3);
          pUVar10 = local_c8;
        }
        iVar21 = iVar21 + (iVar19 - iVar18);
      }
      bVar23 = (bool)(bVar23 ^ 1);
      iVar18 = iVar19;
    } while (lVar17 < iVar14);
    (this->RegisteredWorldPartitions).ArrayNum = iVar21;
  }
  local_res20 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorldPartition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TSet<TObjectPtr<UWorldPartition>,DefaultKeyFuncs<TObjectPtr<UWorldPartition>,0>,FDefaultSetAllocator>
  ::Remove(&this->IncrementalUpdateWorldPartitionsPendingAdd,
           (TObjectPtr<UWorldPartition_const_>)&local_res20);
  local_70 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorldPartition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TSet<TObjectPtr<UWorldPartition>,DefaultKeyFuncs<TObjectPtr<UWorldPartition>,0>,FDefaultSetAllocator>
  ::Remove(&this->IncrementalUpdateWorldPartitions,(TObjectPtr<UWorldPartition_const_>)&local_70);
  pUVar11 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  bVar23 = UWorld::IsGameWorld(pUVar11);
  if (bVar23) {
    bVar23 = false;
    pUVar12 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar13 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar12);
    if (pUVar13 != pUVar11) {
      local_98.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_98.AssetPath.PackageName.Number = 0;
      local_98.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_98.AssetPath.AssetName.Number = 0;
      local_98.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.SubPathString.Data.ArrayNum = 0;
      local_98.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_98,(UObject *)param_1);
      uVar2 = (pUVar11->StreamingLevels).ArrayNum;
      uVar15 = (ulonglong)(int)uVar2;
      pFVar22 = (pUVar11->StreamingLevels).AllocatorInstance.Data;
      local_60 = pFVar22 + uVar15 * 8;
      this_01 = local_58;
      while( true ) {
        pFVar20 = local_60;
        if ((pUVar11->StreamingLevels).ArrayNum != (int)uVar15) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pFVar22 == pFVar20) break;
        this_00 = *(ULevelStreaming **)pFVar22;
        if (this_00 != (ULevelStreaming *)0x0) {
          pUVar12 = Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_NoRegister();
          iVar14 = (int)pUVar12->_padding_;
          if ((((iVar14 <= *(int *)(this_00->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
                &pUVar12->_padding_)) &&
              (bVar6 = FSoftObjectPath::operator==
                                 ((FSoftObjectPath *)&this_00[1]._padding_,&local_98), bVar6)) &&
             (EVar7 = ULevelStreaming::GetLevelStreamingState(this_00), EVar7 != FailedToLoad)) {
            if (!bVar23) {
              local_b8.AssetPath.PackageName.ComparisonIndex.Value = 0;
              local_b8.AssetPath.PackageName.Number = 0;
              local_b8.AssetPath.AssetName.ComparisonIndex.Value = 0;
              local_b8.AssetPath.AssetName.Number = 0;
              local_b8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_b8.SubPathString.Data.ArrayNum = 0;
              local_b8.SubPathString.Data.ArrayMax = 0;
              FSoftObjectPath::SetPath(&local_b8,(UObject *)param_1);
              FVar5 = local_b8.AssetPath.AssetName;
              uVar8 = ::GetTypeHash(local_b8.AssetPath.AssetName.ComparisonIndex.Value);
              FVar4 = local_b8.AssetPath.PackageName;
              uVar9 = ::GetTypeHash(local_b8.AssetPath.PackageName.ComparisonIndex.Value);
              uVar9 = uVar9 + FVar4.Number;
              uVar9 = uVar9 * 0x40 + FVar5.Number + uVar8 + -0x61c88647 + (uVar9 >> 2) ^ uVar9;
              if (1 < local_b8.SubPathString.Data.ArrayNum) {
                pcVar16 = "";
                if (local_b8.SubPathString.Data.ArrayNum == 0) {
                  iVar14 = 0;
                }
                else {
                  iVar14 = local_b8.SubPathString.Data.ArrayNum + -1;
                  pcVar16 = (char *)local_b8.SubPathString.Data.AllocatorInstance.Data;
                }
                uVar8 = FCrc::Strihash_DEPRECATED<char8_t>(iVar14,(uchar *)pcVar16);
                uVar9 = uVar9 ^ uVar8 + uVar9 * 0x40 + -0x61c88647 + (uVar9 >> 2);
              }
              this_01 = TMapBase<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>_>
                        ::FindOrAddImpl<FSoftObjectPath>
                                  ((TMapBase<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>,0>_>
                                    *)&this->WorldPartitionUninitializationPendingStreamingLevels,
                                   uVar9,&local_b8);
              bVar23 = true;
              if (local_b8.SubPathString.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.SubPathString.Data.AllocatorInstance.Data);
              }
            }
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_00);
            }
            local_c0.ObjectIndex = 0;
            local_c0.ObjectSerialNumber = 0;
            local_68 = this_00;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_00);
            }
            FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_68);
            TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::Emplace<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>_>
                      (this_01,&local_78,(bool *)&local_c0);
          }
        }
        uVar15 = (ulonglong)uVar2;
        pFVar22 = pFVar22 + 8;
      }
      if (local_98.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.SubPathString.Data.AllocatorInstance.Data);
      }
    }
  }
  bVar23 = UWorldPartition::IsServerStreamingEnabled(param_1);
  piVar1 = &this->NumWorldPartitionServerStreamingEnabled;
  *piVar1 = *piVar1 - (uint)bVar23;
  if ((*piVar1 < 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumWorldPartitionServerStreamingEnabled >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                          ,0x26f,L""), bVar23)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->RegisteredWorldPartitions).ArrayNum == 0) {
    pUVar11 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    bVar23 = UWorld::IsGameWorld(pUVar11);
    if (bVar23) {
      GLevelStreamingContinuouslyIncrementalGCWhileLevelsPendingPurge =
           this->LevelStreamingContinuouslyIncrementalGCWhileLevelsPendingPurge;
      GLevelStreamingForceGCAfterLevelStreamedOut = this->LevelStreamingForceGCAfterLevelStreamedOut
      ;
    }
    if ((this->DrawHandle).ID != 0) {
      UDebugDrawService::Unregister((FDelegateHandle)(this->DrawHandle).ID);
      (this->DrawHandle).ID = 0;
    }
  }
  return;
}

// RegisterStreamingSourceProvider @ 148af51d0

/* WARNING: Removing unreachable block (ram,0x000148af5209) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWorldPartitionSubsystem::RegisterStreamingSourceProvider
          (UWorldPartitionSubsystem *this,IWorldPartitionStreamingSourceProvider *param_1)

{
  IWorldPartitionStreamingSourceProvider *local_res10;
  IWorldPartitionStreamingSourceProvider *local_res18 [2];
  
  local_res10 = param_1;
  TSet<IWorldPartitionStreamingSourceProvider_*,DefaultKeyFuncs<IWorldPartitionStreamingSourceProvider_*,0>,FDefaultSetAllocator>
  ::Emplace<IWorldPartitionStreamingSourceProvider_*_const_&>
            (&this->StreamingSourceProviders,local_res18,(bool *)&local_res10);
  return;
}

// SetOverrideLoadingRange @ 148af6970

void __cdecl UWorldPartitionSubsystem::SetOverrideLoadingRange(FName param_1,int param_2)

{
  uint uVar1;
  FName local_res8;
  int local_res10 [2];
  TPairInitializer<FName_const_&,int_const_&> local_res18;
  FName *local_18;
  int *local_10;
  
  local_res8 = param_1;
  local_res10[0] = param_2;
  if (-1 < param_2) {
    local_18 = &local_res8;
    local_10 = local_res10;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,int_const_&>_>
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)&OverriddenLoadingRanges,&local_res18,(bool *)&local_18);
    OverriddenLoadingRangesEpoch = OverriddenLoadingRangesEpoch + 1;
    return;
  }
  if (OverriddenLoadingRanges._8_4_ != OverriddenLoadingRanges._52_4_) {
    local_res18.Key = (FName *)param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    RemoveImpl<FName>((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                       *)&OverriddenLoadingRanges,param_1.Number + uVar1,(FName *)&local_res18);
  }
  OverriddenLoadingRangesEpoch = OverriddenLoadingRangesEpoch + 1;
  return;
}

// StaticRegisterNativesUWorldPartitionSubsystem @ 148af70b0

void __cdecl UWorldPartitionSubsystem::StaticRegisterNativesUWorldPartitionSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UWorldPartitionSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 148af7120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWorldPartitionSubsystem::Tick(UWorldPartitionSubsystem *this,float param_1)

{
  undefined8 *puVar1;
  int iVar2;
  UWorldPartition *this_00;
  bool bVar3;
  UWorld *this_01;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  UTickableWorldSubsystem::Tick((UTickableWorldSubsystem *)this,param_1);
  puVar4 = (undefined8 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  puVar1 = puVar4 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UWorldPartition>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar4 == puVar1) break;
    this_00 = (UWorldPartition *)*puVar4;
    UWorldPartition::Tick(this_00,param_1);
    if (GDrawRuntimeHash3D != 0) {
      this_01 = UWorldSubsystem::GetWorld
                          ((UWorldSubsystem *)
                           &this[-1].WorldPartitionLoadingAndPendingLoadStreamingLevels.Elements.
                            field_0x20);
      bVar3 = UWorld::IsGameWorld(this_01);
      if (bVar3) {
        UWorldPartition::DrawRuntimeHash3D(this_00);
      }
    }
    puVar4 = puVar4 + 1;
  }
  return;
}

// UnregisterStreamingSourceProvider @ 148af7680

bool __thiscall
UWorldPartitionSubsystem::UnregisterStreamingSourceProvider
          (UWorldPartitionSubsystem *this,IWorldPartitionStreamingSourceProvider *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  bool bVar5;
  
  bVar5 = false;
  if (*(int *)&(this->StreamingSourceProviders).Elements.field_0x8 !=
      *(int *)&(this->StreamingSourceProviders).Elements.field_0x34) {
    FVar4 = (this->StreamingSourceProviders).Hash.SecondaryData;
    uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->StreamingSourceProviders).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (((ulonglong)(uVar2 >> 0x10) ^ (longlong)(int)uVar2) &
                    (longlong)(this->StreamingSourceProviders).HashSize - 1U) * 4);
    bVar5 = false;
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->StreamingSourceProviders).Elements;
      while (*(IWorldPartitionStreamingSourceProvider **)(lVar1 + (longlong)iVar3 * 0x10) != param_1
            ) {
        iVar3 = *(int *)(lVar1 + 8 + (longlong)iVar3 * 0x10);
        if (iVar3 == -1) {
          return false;
        }
      }
      TSet<IWorldPartitionStreamingSourceProvider_*,DefaultKeyFuncs<IWorldPartitionStreamingSourceProvider_*,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->StreamingSourceProviders,iVar3);
      bVar5 = true;
    }
  }
  return bVar5;
}

// UpdateLoadingAndPendingLoadStreamingLevels @ 148af7820

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWorldPartitionSubsystem::UpdateLoadingAndPendingLoadStreamingLevels
          (UWorldPartitionSubsystem *this,ULevelStreaming *param_1)

{
  FWeakObjectPtr FVar1;
  ELevelStreamingState EVar2;
  char cVar3;
  bool bVar4;
  UClass *pUVar5;
  ForElementType<FSetElementId> FVar6;
  FWeakObjectPtr *pFVar7;
  int iVar8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  if (param_1 != (ULevelStreaming *)0x0) {
    pUVar5 = Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_NoRegister();
    iVar8 = (int)pUVar5->_padding_;
    if (((iVar8 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
         &pUVar5->_padding_)) &&
       ((EVar2 = ULevelStreaming::GetLevelStreamingState(param_1), EVar2 == Loading ||
        ((EVar2 < FailedToLoad &&
         (cVar3 = (**(code **)(param_1->_padding_ + 0x2e8))(param_1), cVar3 != '\0')))))) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_res10 = (FWeakObjectPtr)param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res10);
      TSet<TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Emplace<TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr>_>
                (&this->WorldPartitionLoadingAndPendingLoadStreamingLevels,
                 (TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr> *)&local_res10,
                 (bool *)&local_res18);
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ULevelStreaming *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = (FWeakObjectPtr)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ULevelStreaming *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  FVar1 = local_res10;
  if (*(int *)&(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Elements.field_0x8 !=
      *(int *)&(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Elements.field_0x34) {
    FVar6 = (this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)
              &(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Hash;
    }
    iVar8 = *(int *)((longlong)FVar6 +
                    ((longlong)(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).HashSize -
                     1U & (longlong)(local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex)) * 4)
    ;
    if (iVar8 != -1) {
      while( true ) {
        pFVar7 = (FWeakObjectPtr *)
                 ((longlong)iVar8 * 0x10 +
                 *(longlong *)&(this->WorldPartitionLoadingAndPendingLoadStreamingLevels).Elements);
        local_res18 = FVar1;
        local_res20 = *pFVar7;
        bVar4 = TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr>::
                UEOpEquals<ULevelStreaming_const_,bool>
                          ((TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr> *)&local_res20,
                           (TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr> *)&local_res18);
        if (bVar4) break;
        iVar8 = pFVar7[1].ObjectIndex;
        if (iVar8 == -1) {
          return;
        }
      }
      TSet<TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->WorldPartitionLoadingAndPendingLoadStreamingLevels,iVar8);
    }
  }
  return;
}

// UpdateServerClientsVisibleLevelNames @ 148af7a10

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
UWorldPartitionSubsystem::UpdateServerClientsVisibleLevelNames(UWorldPartitionSubsystem *this)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  int iVar3;
  UNetDriver *pUVar4;
  longlong lVar5;
  FName FVar6;
  ENetMode EVar7;
  uint uVar8;
  UWorld *this_01;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  undefined8 local_res10;
  FName local_res18 [2];
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId934,
               "UWorldPartitionSubsystem::UpdateServerClientsVisibleLevelNames",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
               ,0x3a6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId934);
  }
  this_01 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  EVar7 = UWorld::InternalGetNetMode(this_01);
  if (EVar7 - NM_DedicatedServer < 2) {
    this_00 = &this->ServerClientsVisibleLevelNames;
    if (*(int *)&(this->ServerClientsVisibleLevelNames).Elements.field_0x8 !=
        *(int *)&(this->ServerClientsVisibleLevelNames).Elements.field_0x34) {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements(this_00);
      iVar3 = *(int *)&(this->ServerClientsVisibleLevelNames).Elements.field_0xc;
      *(undefined4 *)&(this->ServerClientsVisibleLevelNames).Elements.field_0x8 = 0;
      if (iVar3 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)this_00,0,
                   (int *)&(this->ServerClientsVisibleLevelNames).Elements.field_0xc);
      }
      *(undefined4 *)&(this->ServerClientsVisibleLevelNames).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ServerClientsVisibleLevelNames).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->ServerClientsVisibleLevelNames).Elements.field_0x28 = 0;
    }
    pUVar4 = (this_01->NetDriver).field0_0x0.DebugPtr;
    if (pUVar4 != (UNetDriver *)0x0) {
      pFVar10 = (pUVar4->ClientConnections).AllocatorInstance.Data;
      iVar3 = (pUVar4->ClientConnections).ArrayNum;
      pFVar1 = pFVar10 + (longlong)iVar3 * 8;
      while( true ) {
        if ((pUVar4->ClientConnections).ArrayNum != iVar3) {
          `TCheckedPointerIterator<TObjectPtr<UNetConnection>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res10);
        }
        if (pFVar10 == pFVar1) break;
        lVar5 = *(longlong *)pFVar10;
        local_res10 = *(undefined8 *)(lVar5 + 0x1988);
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                  (this_00,local_res18,(bool *)&local_res10);
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                  (this_00,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                           (lVar5 + 0x16e8));
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                  (this_00,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                           (lVar5 + 0x15a8));
        pFVar10 = pFVar10 + 8;
      }
    }
    uVar9 = 0xffffffff;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array(this_00,&local_48);
    AlgoImpl::
    IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameFastLess>_>
              ((FName *)local_48.AllocatorInstance.Data,local_48.ArrayNum,local_res10._0_1_,
               (FNameFastLess *)&local_res10);
    iVar3 = local_48.ArrayNum;
    pFVar2 = (FName *)(local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8);
    FVar11.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if (local_48.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
      }
      if ((FName *)FVar11.Data == pFVar2) break;
      FVar6 = *(FName *)FVar11.Data;
      uVar8 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
      uVar9 = uVar9 ^ uVar8 + 0x9e3779b9 + FVar6.Number + uVar9 * 0x40 + (uVar9 >> 2);
      FVar11.Data = FVar11.Data + 8;
    }
    this->ServerClientsVisibleLevelsHash = ~uVar9;
    if ((FName *)local_48.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  if (!bVar12) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// UpdateStreamingSources @ 148af7c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UWorldPartitionSubsystem::UpdateStreamingSources(UWorldPartitionSubsystem *this)

{
  int *piVar1;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *pTVar2;
  TMap<FName,FStreamingSourceVelocity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStreamingSourceVelocity,0>_>
  *pTVar3;
  undefined1 *puVar4;
  double dVar5;
  FName FVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 *puVar9;
  longlong lVar10;
  code *pcVar11;
  double dVar12;
  bool bVar13;
  double dVar14;
  UWorldPartitionSubsystem *pUVar15;
  TMap<FName,FStreamingSourceVelocity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStreamingSourceVelocity,0>_>
  *pTVar16;
  bool bVar17;
  char cVar18;
  bool bVar19;
  ENetMode EVar20;
  int iVar21;
  UWorld *this_00;
  UWorldPartition *pUVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_WorldPartitionUpdateStreamingStateExternal> FVar24;
  FStreamingSourceVelocity *this_01;
  TVector<double> *pTVar25;
  byte bVar26;
  longlong *plVar27;
  ulonglong uVar28;
  int iVar29;
  ForAnyElementType FVar30;
  FScriptContainerElement *pFVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint *puVar36;
  undefined1 *puVar38;
  longlong *plVar39;
  FWorldPartitionStreamingSource *pFVar40;
  FNameEntryId FVar41;
  FWorldPartitionStreamingSource *pFVar42;
  bool bVar43;
  float fVar44;
  undefined1 auStackY_3a8 [32];
  uint local_344;
  undefined1 local_340;
  undefined1 local_33f;
  undefined1 local_33e [6];
  FName local_338;
  byte local_330;
  ForAnyElementType local_328;
  undefined8 local_320;
  undefined1 local_318;
  undefined1 local_317 [7];
  UWorldPartitionSubsystem *local_310;
  FColor_u_0 local_308;
  uint local_304;
  uint local_300;
  uint uStack_2fc;
  FName local_2f8 [2];
  longlong *local_2e8;
  undefined1 auStack_2e0 [16];
  uint uStack_2d0;
  int iStack_2cc;
  longlong local_2c8;
  TSet<TTuple<FName,FStreamingSourceVelocity>,TDefaultMapHashableKeyFuncs<FName,FStreamingSourceVelocity,0>,FDefaultSetAllocator>
  *pTStack_2c0;
  TSet<TTuple<FName,FStreamingSourceVelocity>,TDefaultMapHashableKeyFuncs<FName,FStreamingSourceVelocity,0>,FDefaultSetAllocator>
  *local_2b8;
  char local_2b0;
  char cStack_2af;
  longlong *local_2a8;
  undefined4 uStack_2a0;
  uint uStack_29c;
  TBitArray<FDefaultBitArrayAllocator> *local_298;
  undefined4 uStack_290;
  uint uStack_28c;
  uint local_288;
  undefined4 uStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  int local_278;
  UWorld *local_270;
  TMap<FName,FStreamingSourceVelocity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStreamingSourceVelocity,0>_>
  *local_268;
  uint uStack_260;
  uint uStack_25c;
  undefined1 *local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  uint local_248;
  uint uStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  int local_238;
  undefined1 local_230 [12];
  uint local_224;
  longlong local_220;
  uint local_218;
  int local_214;
  TSet<IWorldPartitionStreamingSourceProvider_*,DefaultKeyFuncs<IWorldPartitionStreamingSourceProvider_*,0>,FDefaultSetAllocator>
  *local_208;
  longlong *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  undefined8 uStack_1d8;
  TMap<FName,FStreamingSourceVelocity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStreamingSourceVelocity,0>_>
  *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  undefined8 uStack_1a8;
  FName local_1a0;
  FReadAccessScope local_198;
  undefined1 local_180 [32];
  longlong local_160;
  TSet<TTuple<FName,FStreamingSourceVelocity>,TDefaultMapHashableKeyFuncs<FName,FStreamingSourceVelocity,0>,FDefaultSetAllocator>
  *pTStack_158;
  FReadAccessScope local_150;
  FStreamingSourceVelocity local_138;
  TVector<double> local_f0 [2];
  undefined4 local_bc;
  undefined1 local_b8 [32];
  uint *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  ForElementType<FSetElementId> local_78;
  int local_70;
  ulonglong local_68;
  longlong *plVar37;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  if (GUpdateStreamingSources == 0) {
    return;
  }
  bVar43 = -1 < CpuChannel->Enabled;
  local_310 = this;
  if (bVar43) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId963,"UWorldPartitionSubsystem::UpdateStreamingSources",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
               ,0x3c3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId963);
  }
  pTVar2 = &this->StreamingSources;
  piVar1 = &(this->StreamingSources).ArrayMax;
  pFVar40 = (FWorldPartitionStreamingSource *)(pTVar2->AllocatorInstance).Data;
  iVar29 = (this->StreamingSources).ArrayNum;
  if ((this->StreamingSources).ArrayMax < 0) {
    DestructItems<FWorldPartitionStreamingSource,int>(pFVar40,iVar29);
    (this->StreamingSources).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x160,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FWorldPartitionStreamingSource,int>(pFVar40,iVar29);
    (this->StreamingSources).ArrayNum = 0;
  }
  plVar37 = (longlong *)0x0;
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  local_270 = this_00;
  bVar17 = AWorldPartitionReplay::IsPlaybackEnabled(this_00);
  uVar34 = 0;
  if (((!bVar17) ||
      (pUVar22 = UWorld::GetWorldPartition(this_00), pUVar22 == (UWorldPartition *)0x0)) ||
     (bVar17 = AWorldPartitionReplay::GetReplayStreamingSources(pUVar22->Replay,pTVar2), !bVar17)) {
    EVar20 = UWorld::InternalGetNetMode(this_00);
    if (EVar20 - NM_DedicatedServer < 2) {
      bVar13 = true;
      bVar17 = 0 < this->NumWorldPartitionServerStreamingEnabled;
      if (!bVar17) {
        bVar13 = true;
        bVar19 = AWorldPartitionReplay::IsRecordingEnabled(this_00);
        if (!bVar19) goto LAB_148af8676;
      }
    }
    else {
      bVar13 = false;
      bVar17 = 0 < this->NumWorldPartitionServerStreamingEnabled;
    }
    FVar24 = StatPtr_STAT_WorldPartitionUpdateStreamingStateExternal;
    if (StatPtr_STAT_WorldPartitionUpdateStreamingStateExternal ==
        (FThreadSafeStaticStat<FStat_STAT_WorldPartitionUpdateStreamingStateExternal>)0x0) {
      pFVar23 = ::FName::FName(&local_1a0,"STAT_WorldPartitionUpdateStreamingStateExternal");
      FVar24 = (FThreadSafeStaticStat<FStat_STAT_WorldPartitionUpdateStreamingStateExternal>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_WorldPartitionUpdateStreamingStateExternal,*pFVar23,
                          L"Update Streaming State (External)","STATGROUP_WorldPartition",
                          "STATCAT_Advanced",L"World Partition",true,true,ST_int64,true,false,
                          MCR_Invalid);
    }
    local_338.ComparisonIndex.Value = 0;
    local_338.Number = 0;
    local_330 = 0;
    FVar6 = *(FName *)FVar24;
    FVar41 = FVar6.ComparisonIndex.Value;
    uVar32 = FVar6.Number;
    if ((FVar41.Value != 0) || (uVar32 != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_308.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_308._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
        local_330 = local_330 | 1;
        if (-1 < CpuChannel->Enabled) {
          local_2f8[0].ComparisonIndex.Value = FVar41.Value;
          local_2f8[0].Number = uVar32;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (local_2f8,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                     ,0x3e5);
          local_330 = local_330 | 2;
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        local_338 = FVar6;
        local_300 = FVar41.Value;
        uStack_2fc = uVar32;
        FThreadStats::AddMessage(FVar6,CycleScopeStart);
        local_330 = local_330 | 4;
      }
    }
    if (__CsvProfilerStat998 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("GetStreamingSourceProviders",_GCsvCategory_WorldPartition.Index);
      __CsvProfilerStat998 = true;
    }
    local_304 = _GCsvCategory_WorldPartition.Index;
    FCsvProfiler::BeginStat
              ("GetStreamingSourceProviders",_GCsvCategory_WorldPartition.Index,
               "CSV_GetStreamingSourceProviders");
    local_328.Data = (FScriptContainerElement *)0x0;
    local_320 = 0;
    local_b8._0_8_ = 0;
    local_b8._8_8_ = 0;
    local_98 = (uint *)0x0;
    local_90 = 0;
    local_8c = 0x80;
    local_88 = 0xffffffff;
    local_84 = 0;
    local_78 = (ForElementType<FSetElementId>)0x0;
    local_70 = 0;
    TSet<IWorldPartitionStreamingSourceProvider_*,DefaultKeyFuncs<IWorldPartitionStreamingSourceProvider_*,0>,FDefaultSetAllocator>
    ::operator=((TSet<IWorldPartitionStreamingSourceProvider_*,DefaultKeyFuncs<IWorldPartitionStreamingSourceProvider_*,0>,FDefaultSetAllocator>
                 *)local_b8,&this->StreamingSourceProviders);
    if (local_b8._8_4_ != local_84) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->IsStreamingSourceProviderFiltered,&local_198);
      if (((*(int *)&(this->IsStreamingSourceProviderFiltered).field_0x10 == 0) ||
          (plVar27 = *(longlong **)&(this->IsStreamingSourceProviderFiltered).field_0x8,
          plVar27 == (longlong *)0x0)) ||
         (cVar18 = (**(code **)(*plVar27 + 0x38))(), cVar18 == '\0')) {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_198);
      if ((bVar19) &&
         (TSet<IWorldPartitionStreamingSourceProvider_*,DefaultKeyFuncs<IWorldPartitionStreamingSourceProvider_*,0>,FDefaultSetAllocator>
          ::TIterator::TIterator
                    ((TIterator *)local_230,
                     (TSet<IWorldPartitionStreamingSourceProvider_*,DefaultKeyFuncs<IWorldPartitionStreamingSourceProvider_*,0>,FDefaultSetAllocator>
                      *)local_b8), local_214 < *(int *)(local_220 + 0x18))) {
        do {
          iVar29 = local_214;
          uVar7 = *(undefined8 *)(*(longlong *)local_230._0_8_ + (longlong)local_214 * 0x10);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this->IsStreamingSourceProviderFiltered,&local_150);
          plVar27 = plVar37;
          if (*(int *)&(this->IsStreamingSourceProviderFiltered).field_0x10 != 0) {
            plVar27 = *(longlong **)&(this->IsStreamingSourceProviderFiltered).field_0x8;
          }
          cVar18 = (**(code **)(*plVar27 + 0x60))(plVar27,uVar7);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_150);
          if (cVar18 != '\0') {
            TSet<IWorldPartitionStreamingSourceProvider_*,DefaultKeyFuncs<IWorldPartitionStreamingSourceProvider_*,0>,FDefaultSetAllocator>
            ::RemoveByIndex(local_208,iVar29);
          }
          local_218 = local_218 & ~local_224;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_230 + 8));
        } while (local_214 < *(int *)(local_220 + 0x18));
      }
    }
    uVar32 = local_90;
    uStack_29c = 1;
    plVar27 = plVar37;
    uStack_28c = uVar34;
    local_288 = uVar34;
    if (local_90 != 0) {
      puVar36 = (uint *)(local_b8 + 0x10);
      if (local_98 != (uint *)0x0) {
        puVar36 = local_98;
      }
      plVar39 = plVar37;
      for (uVar33 = *puVar36; local_288 = (uint)plVar39, uVar33 == 0; uVar33 = puVar36[(int)uVar33])
      {
        uVar33 = (int)plVar27 + 1;
        plVar27 = (longlong *)(ulonglong)uVar33;
        local_288 = local_288 + 0x20;
        plVar39 = (longlong *)(ulonglong)local_288;
        uStack_28c = local_90;
        if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar33)
        goto LAB_148af8160;
      }
      uStack_29c = ~(uVar33 - 1) & uVar33;
      uVar28 = (ulonglong)uStack_29c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_238 = (int)lVar10;
      uStack_28c = local_238 + -1 + local_288;
      if ((int)local_90 < (int)uStack_28c) {
        uStack_28c = local_90;
      }
    }
LAB_148af8160:
    local_2a8 = (longlong *)local_b8;
    uStack_284 = local_bc;
    uVar33 = local_90 & 0xffffffe0;
    iStack_280 = local_b8._8_4_ - local_84;
    local_298 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
    uStack_290 = 0xffffffff;
    TStack_1f8.CurrentBitIndex = uStack_28c;
    TStack_1f8.UnvisitedBitMask = 0xffffffff;
    uStack_2a0 = SUB84(plVar27,0);
    TStack_1f8._padding_ = CONCAT44(uStack_29c,uStack_2a0);
    iVar29 = (int)local_90 >> 5;
    bVar26 = (byte)local_90;
    local_344 = local_90;
    TStack_1f8._28_4_ = local_bc;
    TStack_1f8.BaseBitIndex = local_288;
    uStack_1d8 = CONCAT44(uStack_27c,iStack_280);
    local_200 = local_2a8;
    TStack_1f8.Array = local_298;
    if (((int)local_90 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar19)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (uVar32 != local_90) {
      puVar36 = (uint *)(local_b8 + 0x10);
      if (local_98 != (uint *)0x0) {
        puVar36 = local_98;
      }
      uVar32 = -1 << (bVar26 & 0x1f) & puVar36[iVar29];
      while (uVar32 == 0) {
        iVar29 = iVar29 + 1;
        uVar33 = uVar33 + 0x20;
        if ((int)(((int)(local_90 - 1) >> 0x1f & 0x1fU) + (local_90 - 1)) >> 5 < iVar29) {
          local_344 = local_90;
          goto LAB_148af829e;
        }
        uVar32 = puVar36[iVar29];
      }
      uVar28 = (ulonglong)(~(uVar32 - 1) & uVar32) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_278 = (int)lVar10;
      local_344 = (uVar33 - 1) + local_278;
      if ((int)local_90 < (int)local_344) {
        local_344 = local_90;
      }
    }
LAB_148af829e:
    pTVar2 = &this->StreamingSources;
    while( true ) {
      plVar27 = local_200;
      if ((int)local_200[1] - *(int *)((longlong)local_200 + 0x34) != (int)uStack_1d8) {
        local_340 = 0;
        `TSparseArray<TSparseSetElement<IWorldPartitionStreamingSourceProvider_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_340);
      }
      if (((TStack_1f8.CurrentBitIndex == local_344) &&
          (TStack_1f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10))) &&
         (plVar27 == (longlong *)local_b8)) break;
      plVar27 = *(longlong **)(*plVar27 + (longlong)TStack_1f8.CurrentBitIndex * 0x10);
      if ((longlong)local_320 < 0) {
        DestructItems<FWorldPartitionStreamingSource,int>
                  ((FWorldPartitionStreamingSource *)local_328.Data,(int)local_320);
        bVar19 = local_320._4_4_ != 0;
        local_320 = (ulonglong)local_320._4_4_ << 0x20;
        if (bVar19) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x160,8,0,&local_328,0,(int *)((longlong)&local_320 + 4));
        }
      }
      else {
        DestructItems<FWorldPartitionStreamingSource,int>
                  ((FWorldPartitionStreamingSource *)local_328.Data,(int)local_320);
        local_320 = local_320 & 0xffffffff00000000;
      }
      cVar18 = (**(code **)(*plVar27 + 8))(plVar27,&local_328);
      if (cVar18 != '\0') {
        iVar29 = (int)local_320;
        uVar28 = (ulonglong)(int)local_320;
        pFVar40 = (FWorldPartitionStreamingSource *)(local_328.Data + uVar28 * 0x160);
        FVar30.Data = local_328.Data;
        while( true ) {
          if ((int)uVar28 != iVar29) {
            local_33f = 0;
            `TCheckedPointerIterator<FWorldPartitionStreamingSource,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_33f);
          }
          if ((FWorldPartitionStreamingSource *)FVar30.Data == pFVar40) break;
          pFVar42 = (FWorldPartitionStreamingSource *)(pTVar2->AllocatorInstance).Data;
          if (((pFVar42 <= FVar30.Data) &&
              (FVar30.Data < pFVar42 + (this->StreamingSources).ArrayMax)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar21 = (this->StreamingSources).ArrayNum;
          if (iVar21 == (this->StreamingSources).ArrayMax) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x160,8,&pTVar2->AllocatorInstance,
                                &(this->StreamingSources).ArrayMax);
          }
          (this->StreamingSources).ArrayNum = iVar21 + 1;
          FWorldPartitionStreamingSource::FWorldPartitionStreamingSource
                    ((FWorldPartitionStreamingSource *)
                     ((pTVar2->AllocatorInstance).Data + (longlong)iVar21 * 0x160),
                     (FWorldPartitionStreamingSource *)FVar30.Data);
          uVar28 = local_320 & 0xffffffff;
          FVar30.Data = FVar30.Data + 0x160;
        }
      }
      TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
    }
    local_70 = 0;
    if (local_78 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_78);
    }
    TSparseArray<TSparseSetElement<IWorldPartitionStreamingSourceProvider_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<IWorldPartitionStreamingSourceProvider_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<IWorldPartitionStreamingSourceProvider_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_b8);
    DestructItems<FWorldPartitionStreamingSource,int>
              ((FWorldPartitionStreamingSource *)local_328.Data,(int)local_320);
    if ((FWorldPartitionStreamingSource *)local_328.Data != (FWorldPartitionStreamingSource *)0x0) {
      FMemory::Free(local_328.Data);
    }
    FCsvProfiler::EndStat("GetStreamingSourceProviders",local_304);
    if ((local_330 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_330 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_330 & 4) != 0) {
      FThreadStats::AddMessage(local_338,CycleScopeEnd);
    }
    local_330 = 0;
    this = local_310;
    if ((bVar13) && (bVar17)) {
      bVar17 = UWorldPartitionStreamingPolicy::IsUpdateStreamingOptimEnabled();
      if ((!bVar17) ||
         (fVar44 = (float)FWorldPartitionStreamingSource::LocationQuantization, fVar44 <= 0.0)) {
        fVar44 = 0.0;
      }
      uVar32 = (int)fVar44 * 2;
      if ((int)fVar44 * 2 < GServerStreamingSourceMinimumExtraRadius) {
        uVar32 = GServerStreamingSourceMinimumExtraRadius;
      }
      uVar33 = uVar34;
      if (0 < (int)uVar32) {
        uVar33 = uVar32;
      }
      bVar17 = UWorldPartitionStreamingPolicy::IsUpdateStreamingOptimEnabled();
      this = local_310;
      if ((!bVar17) ||
         (fVar44 = (float)FWorldPartitionStreamingSource::RotationQuantization, fVar44 <= 0.0)) {
        fVar44 = 0.0;
      }
      iVar29 = (local_310->StreamingSources).ArrayNum;
      uVar32 = (int)fVar44 * 2;
      if ((int)fVar44 * 2 < GServerStreamingSourceMinimumExtraAngle) {
        uVar32 = GServerStreamingSourceMinimumExtraAngle;
      }
      uVar35 = uVar34;
      if (0 < (int)uVar32) {
        uVar35 = uVar32;
      }
      pFVar8 = (local_310->StreamingSources).AllocatorInstance.Data;
      pFVar31 = pFVar8 + 0x15c;
      while( true ) {
        if ((this->StreamingSources).ArrayNum != iVar29) {
          local_33e[0] = 0;
          `TCheckedPointerIterator<FWorldPartitionStreamingSource,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_33e);
        }
        if (pFVar31 + -0x15c == pFVar8 + (longlong)iVar29 * 0x160) break;
        if (0.0 <= (float)(int)uVar33) {
          *(float *)(pFVar31 + -4) = (float)(int)uVar33;
        }
        else {
          bVar17 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<532570442850894343>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingSource.h"
                              ,0x207,"InExtraRadius >= 0.f");
          if (bVar17) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        if (0.0 <= (float)(int)uVar35) {
          *(float *)pFVar31 = (float)(int)uVar35;
        }
        else {
          bVar17 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<532570442850894357>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingSource.h"
                              ,0x215,"InExtraAngle >= 0.f");
          if (bVar17) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        pFVar31 = pFVar31 + 0x160;
      }
    }
  }
LAB_148af8676:
  pTVar3 = &this->StreamingSourcesVelocity;
  uVar32 = *(uint *)&(this->StreamingSourcesVelocity).field_0x28;
  local_258 = &(this->StreamingSourcesVelocity).field_0x10;
  uStack_25c = 1;
  uStack_24c = uVar34;
  local_248 = uVar34;
  if (uVar32 != 0) {
    puVar36 = *(uint **)&(this->StreamingSourcesVelocity).field_0x20;
    if (puVar36 == (uint *)0x0) {
      puVar36 = (uint *)local_258;
    }
    uVar33 = *puVar36;
    plVar27 = plVar37;
    while( true ) {
      uVar34 = (uint)plVar37;
      local_248 = (uint)plVar27;
      if (uVar33 != 0) break;
      uVar34 = uVar34 + 1;
      plVar37 = (longlong *)(ulonglong)uVar34;
      local_248 = local_248 + 0x20;
      plVar27 = (longlong *)(ulonglong)local_248;
      uStack_24c = uVar32;
      if ((int)((uVar32 - 1) + ((int)(uVar32 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar34)
      goto LAB_148af86fe;
      uVar33 = puVar36[(int)uVar34];
    }
    uStack_25c = -uVar33 & uVar33;
    uVar28 = (ulonglong)uStack_25c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_300 = (uint)lVar10;
    uStack_24c = (local_248 - 1) + local_300;
    if ((int)uVar32 < (int)uStack_24c) {
      uStack_24c = uVar32;
    }
  }
LAB_148af86fe:
  puVar4 = &(this->StreamingSourcesVelocity).field_0x10;
  uStack_244 = uStack_28c;
  iStack_240 = *(int *)&(this->StreamingSourcesVelocity).field_0x8 -
               *(int *)&(this->StreamingSourcesVelocity).field_0x34;
  uVar32 = *(uint *)&(this->StreamingSourcesVelocity).field_0x28;
  uStack_250 = 0xffffffff;
  uVar33 = uVar32 & 0xffffffe0;
  TStack_1c8._padding_ = CONCAT44(uStack_25c,uVar34);
  TStack_1c8.CurrentBitIndex = uStack_24c;
  TStack_1c8.UnvisitedBitMask = 0xffffffff;
  iVar29 = (int)uVar32 >> 5;
  TStack_1c8._28_4_ = uStack_28c;
  TStack_1c8.BaseBitIndex = local_248;
  uStack_1a8 = CONCAT44(uStack_23c,iStack_240);
  local_268 = pTVar3;
  uStack_260 = uVar34;
  local_1d0 = pTVar3;
  TStack_1c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_258;
  if ((((int)uVar32 < 0) || (*(int *)&(this->StreamingSourcesVelocity).field_0x28 < (int)uVar32)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar17)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar34 = *(uint *)&(this->StreamingSourcesVelocity).field_0x28;
  if (uVar32 != uVar34) {
    puVar9 = *(undefined1 **)&(this->StreamingSourcesVelocity).field_0x20;
    puVar38 = puVar4;
    if (puVar9 != (undefined1 *)0x0) {
      puVar38 = puVar9;
    }
    uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar38 + (longlong)iVar29 * 4);
    while (uVar32 == 0) {
      iVar29 = iVar29 + 1;
      uVar33 = uVar33 + 0x20;
      uVar32 = uVar34;
      if ((int)(((int)(uVar34 - 1) >> 0x1f & 0x1fU) + (uVar34 - 1)) >> 5 < iVar29)
      goto LAB_148af8810;
      uVar32 = *(uint *)(puVar38 + (longlong)iVar29 * 4);
    }
    uVar28 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar32 = (uVar33 - 1) + (int)lVar10;
    if ((int)uVar34 < (int)uVar32) {
      uVar32 = uVar34;
    }
  }
LAB_148af8810:
  while( true ) {
    pTVar16 = local_1d0;
    if (*(int *)&local_1d0->field_0x8 - *(int *)&local_1d0->field_0x34 != (int)uStack_1a8) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FStreamingSourceVelocity>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_318);
    }
    pUVar15 = local_310;
    dVar14 = __real_bff0000000000000;
    if (((TStack_1c8.CurrentBitIndex == uVar32) &&
        (TStack_1c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) && (pTVar16 == pTVar3)
       ) break;
    *(undefined1 *)((longlong)TStack_1c8.CurrentBitIndex * 0x58 + 8 + *(longlong *)pTVar16) = 0;
    TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
  }
  local_310->StreamingSourcesHash = 0;
  iVar29 = (local_310->StreamingSources).ArrayNum;
  pFVar40 = (FWorldPartitionStreamingSource *)(local_310->StreamingSources).AllocatorInstance.Data;
  dVar5 = local_270->TimeSeconds;
  pFVar42 = pFVar40 + iVar29;
  while( true ) {
    if ((pUVar15->StreamingSources).ArrayNum != iVar29) {
      `TCheckedPointerIterator<FWorldPartitionStreamingSource,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_317);
    }
    if (pFVar40 == pFVar42) break;
    FVar6 = pFVar40->Name;
    if (FVar6 != (FName)0x0) {
      local_138.bIsValid = false;
      local_138.LastUpdateTime = dVar14;
      local_138.LastPosition.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_138.LastPosition.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_138.LastPosition.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_138.SourceName = FVar6;
      uVar34 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
      this_01 = TMapBase<FName,FStreamingSourceVelocity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStreamingSourceVelocity,0>_>
                ::FindOrAddImpl<FName_const_&,FStreamingSourceVelocity>
                          ((TMapBase<FName,FStreamingSourceVelocity,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStreamingSourceVelocity,0>_>
                            *)&pUVar15->StreamingSourcesVelocity,FVar6.Number + uVar34,
                           &pFVar40->Name,&local_138);
      pTVar25 = FStreamingSourceVelocity::GetAverageVelocity
                          (this_01,local_f0,&pFVar40->Location,dVar5);
      dVar12 = (pTVar25->field0_0x0)._s_0.Y;
      (pFVar40->Velocity).field0_0x0._s_0.X = (pTVar25->field0_0x0)._s_0.X;
      (pFVar40->Velocity).field0_0x0._s_0.Y = dVar12;
      (pFVar40->Velocity).field0_0x0._s_0.Z = (pTVar25->field0_0x0)._s_0.Z;
    }
    FWorldPartitionStreamingSource::UpdateHash(pFVar40);
    uVar34 = pFVar40->Hash3D;
    uVar33 = pUVar15->StreamingSourcesHash - uVar34 ^ uVar34 >> 0xd;
    uVar32 = (-0x61c88647 - uVar34) - uVar33 ^ uVar33 << 8;
    uVar35 = (uVar34 - uVar32) - uVar33 ^ uVar32 >> 0xd;
    uVar33 = (uVar33 - uVar35) - uVar32 ^ uVar35 >> 0xc;
    uVar34 = (uVar32 - uVar35) - uVar33 ^ uVar33 << 0x10;
    uVar35 = (uVar35 - uVar34) - uVar33 ^ uVar34 >> 5;
    uVar32 = (uVar33 - uVar35) - uVar34 ^ uVar35 >> 3;
    uVar34 = (uVar34 - uVar32) - uVar35 ^ uVar32 << 10;
    pUVar15->StreamingSourcesHash = (uVar35 - uVar34) - uVar32 ^ uVar34 >> 0xf;
    pFVar40 = pFVar40 + 1;
  }
  pTVar3 = &pUVar15->StreamingSourcesVelocity;
  TSet<TTuple<FName,FStreamingSourceVelocity>,TDefaultMapHashableKeyFuncs<FName,FStreamingSourceVelocity,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_180,
             (TSet<TTuple<FName,FStreamingSourceVelocity>,TDefaultMapHashableKeyFuncs<FName,FStreamingSourceVelocity,0>,FDefaultSetAllocator>
              *)pTVar3);
  local_2e8 = (longlong *)local_180._0_8_;
  auStack_2e0._0_8_ = local_180._8_8_;
  local_2c8 = local_160;
  pTStack_2c0 = pTStack_158;
  stack0xfffffffffffffd28 = local_180._16_16_;
  local_2b0 = '\0';
  cStack_2af = '\0';
  iVar29 = local_180._28_4_;
  local_2b8 = (TSet<TTuple<FName,FStreamingSourceVelocity>,TDefaultMapHashableKeyFuncs<FName,FStreamingSourceVelocity,0>,FDefaultSetAllocator>
               *)pTVar3;
  if (iVar29 < *(int *)(local_180._16_8_ + 0x18)) {
    do {
      if (*(char *)((longlong)iVar29 * 0x58 + 8 + *local_2e8) == '\0') {
        TSet<TTuple<FName,FStreamingSourceVelocity>,TDefaultMapHashableKeyFuncs<FName,FStreamingSourceVelocity,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_2c0,iVar29);
        local_2b0 = '\x01';
      }
      uStack_2d0 = uStack_2d0 & ~auStack_2e0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2e0);
      iVar29 = iStack_2cc;
    } while (iStack_2cc < *(int *)(auStack_2e0._8_8_ + 0x18));
    if ((local_2b0 != '\0') && (cStack_2af != '\0')) {
      uVar34 = *(int *)&(local_2b8->Elements).field_0x8 - *(int *)&(local_2b8->Elements).field_0x34;
      if (uVar34 < 4) {
        iVar29 = 1;
      }
      else {
        uVar28 = (ulonglong)((uVar34 >> 1) + 7) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar29 = 1 << ((byte)lVar10 & 0x1f);
      }
      if (((0 < (int)uVar34) && (local_2b8->HashSize < iVar29)) || (iVar29 < local_2b8->HashSize)) {
        local_2b8->HashSize = iVar29;
        TSet<TTuple<FName,FStreamingSourceVelocity>,TDefaultMapHashableKeyFuncs<FName,FStreamingSourceVelocity,0>,FDefaultSetAllocator>
        ::Rehash(local_2b8);
      }
    }
  }
  if (bVar43) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateStreamingStateInternal @ 148af8b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UWorldPartitionSubsystem::UpdateStreamingStateInternal(UWorld *param_1,UWorldPartition *param_2)

{
  FScriptContainerElement *pFVar1;
  UWorldPartitionRuntimeCell **ppUVar2;
  uint uVar3;
  longlong *plVar4;
  UWorldPartitionRuntimeCell *pUVar5;
  UWorldPartitionStreamingPolicy *pUVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ELevelStreamingState EVar11;
  char cVar12;
  ELevelPendingVisibilityState EVar13;
  ENetMode EVar14;
  AWorldSettings *pAVar15;
  ULevelStreaming *this;
  UClass *pUVar16;
  UWorld *pUVar17;
  UWorldPartition *pUVar18;
  ULevel *pUVar19;
  ulonglong uVar20;
  int iVar21;
  ForAnyElementType FVar22;
  int iVar23;
  UWorldPartitionRuntimeCell **ppUVar24;
  bool bVar25;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_118 [2];
  ForAnyElementType local_110;
  undefined8 local_108;
  UWorldPartitionSubsystem *local_100;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined1 local_e2 [2];
  UWorldPartitionRuntimeCell **local_e0;
  ulonglong local_d8;
  UWorldPartitionRuntimeCell **local_d0;
  ulonglong local_c8;
  TArray<TObjectPtr<UWorldPartition>,TSizedDefaultAllocator<32>_> local_c0;
  TArray<TObjectPtr<UWorldPartition>,TSizedDefaultAllocator<32>_> local_b0;
  TArray<TObjectPtr<UWorldPartition>,TSizedDefaultAllocator<32>_> local_a0;
  void *local_90;
  undefined8 local_88;
  void **local_80;
  UWorldPartition *local_78;
  UWorldPartitionSubsystem *local_70;
  undefined1 local_68 [12];
  uint local_5c;
  longlong local_58;
  uint local_50;
  int local_4c;
  TSet<TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_40;
  
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1187,"UWorldPartitionSubsystem::UpdateStreamingState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
               ,0x4a3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1187);
  }
  bVar8 = UWorld::IsGameWorld(param_1);
  if (!bVar8) goto LAB_148af94e7;
  local_100 = (UWorldPartitionSubsystem *)0x0;
  if (param_1 != (UWorld *)0x0) {
    local_100 = UWorld::GetSubsystem<UWorldPartitionSubsystem>(param_1);
  }
  if (param_2 == (UWorldPartition *)0x0) {
    if (local_100 == (UWorldPartitionSubsystem *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorldPartitionSubsystem || InWorldPartition",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                         ,0x4ad,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_100 == (UWorldPartitionSubsystem *)0x0) goto LAB_148af94e7;
    }
    if ((local_100->RegisteredWorldPartitions).ArrayNum == 0) goto LAB_148af94e7;
  }
  local_90 = (void *)0x0;
  local_80 = &local_90;
  local_88 = 0;
  local_78 = param_2;
  local_70 = local_100;
  if (local_100 != (UWorldPartitionSubsystem *)0x0) {
    UpdateStreamingSources(local_100);
    UpdateServerClientsVisibleLevelNames(local_100);
  }
  EVar14 = UWorld::InternalGetNetMode(param_1);
  if (EVar14 - NM_DedicatedServer < 2) {
    bVar8 = true;
    if ((local_100 == (UWorldPartitionSubsystem *)0x0) ||
       (local_100->NumWorldPartitionServerStreamingEnabled < 1)) goto LAB_148af8c97;
    bVar10 = true;
  }
  else {
    bVar8 = false;
LAB_148af8c97:
    bVar10 = false;
  }
  iVar21 = 1;
  if (param_2 == (UWorldPartition *)0x0) {
    iVar21 = (local_100->RegisteredWorldPartitions).ArrayNum;
  }
  uVar3 = param_1->IsInBlockTillLevelStreamingCompleted;
  pAVar15 = UWorld::GetWorldSettings(param_1,false,false);
  if (pAVar15 == (AWorldSettings *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5736735822393113443>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                       ,0x49d,"WorldSettings");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_148af8d0f:
    if (((param_1->bMatchStarted == '\0') || (bVar9 = UWorld::IsInSeamlessTravel(param_1), bVar9))
       || (bVar9 = false, uVar3 != 0)) goto LAB_148af8d2a;
  }
  else {
    if (pAVar15->bHighPriorityLoading == '\0' && pAVar15->bHighPriorityLoadingLocal == '\0')
    goto LAB_148af8d0f;
LAB_148af8d2a:
    bVar9 = true;
  }
  if (((GUpdateStreamingStateTimeLimit <= 0.0) || (iVar21 < 2)) ||
     ((bVar9 || ((bVar8 && (!bVar10)))))) {
    `UWorldPartitionSubsystem::UpdateStreamingStateInternal'::__l2::<lambda_2>::operator()
              (&local_80,&local_c0);
    iVar21 = local_c0.ArrayNum;
    pFVar1 = local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 8;
    FVar22.Data = local_c0.AllocatorInstance.Data;
    while( true ) {
      if (local_c0.ArrayNum != iVar21) {
        `TCheckedPointerIterator<TObjectPtr<UWorldPartition>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (FVar22.Data == pFVar1) break;
      if (*(longlong **)(*(longlong *)FVar22.Data + 0x130) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(*(longlong *)FVar22.Data + 0x130) + 0x2b8))();
      }
      FVar22.Data = FVar22.Data + 8;
    }
    if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
LAB_148af8dc2:
    local_d0 = (UWorldPartitionRuntimeCell **)0x0;
    local_c8 = 0;
    local_e0 = (UWorldPartitionRuntimeCell **)0x0;
    local_d8 = 0;
    `UWorldPartitionSubsystem::UpdateStreamingStateInternal'::__l2::<lambda_2>::operator()
              (&local_80,&local_b0);
    iVar21 = local_b0.ArrayNum;
    pFVar1 = local_b0.AllocatorInstance.Data + (longlong)local_b0.ArrayNum * 8;
    FVar22.Data = local_b0.AllocatorInstance.Data;
    while( true ) {
      if (local_b0.ArrayNum != iVar21) {
        `TCheckedPointerIterator<TObjectPtr<UWorldPartition>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (FVar22.Data == pFVar1) break;
      plVar4 = *(longlong **)(*(longlong *)FVar22.Data + 0x130);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x350))(plVar4,&local_d0,&local_e0);
      }
      FVar22.Data = FVar22.Data + 8;
    }
    if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.AllocatorInstance.Data);
    }
    bVar10 = -1 < CpuChannel->Enabled;
    if (bVar10) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1271,"SortStreamingCellsByImportance",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                 ,0x4f7);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1271);
    }
    local_res8 = SUB81(param_1,0);
    AlgoImpl::
    IntroSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionSubsystem::UpdateStreamingStateInternal_::__l41::<lambda_3>_>
              (local_e0,(int)local_d8,local_res8,(<lambda_3>)local_res8);
    AlgoImpl::
    IntroSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionSubsystem::UpdateStreamingStateInternal_::__l41::<lambda_4>_>
              (local_d0,(int)local_c8,local_res8,(<lambda_4>)local_res8);
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    local_118[0] = 0x7fffffff;
    if (local_100 != (UWorldPartitionSubsystem *)0x0) {
      bVar10 = -1 < CpuChannel->Enabled;
      if (bVar10) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1281,"GetMaxCellsToLoad",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                   ,0x501);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1281);
      }
      if (((!bVar8) && (uVar3 == 0)) && (0 < GMaxLoadingStreamingCells)) {
        local_118[0] = GMaxLoadingStreamingCells;
        TSet<TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::TIterator::TIterator
                  ((TIterator *)local_68,
                   &local_100->WorldPartitionLoadingAndPendingLoadStreamingLevels);
        if (local_4c < *(int *)(local_58 + 0x18)) {
          do {
            iVar21 = local_4c;
            this = (ULevelStreaming *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)
                                       ((longlong)local_4c * 0x10 + *(longlong *)local_68._0_8_));
            if (this == (ULevelStreaming *)0x0) {
LAB_148af8fc7:
              TSet<TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<ULevelStreaming_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::RemoveByIndex(local_40,iVar21);
            }
            else {
              pUVar16 = Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_NoRegister();
              iVar23 = (int)pUVar16->_padding_;
              if (((*(int *)(this->_padding_ + 0x38) < iVar23) ||
                  ((longlong *)
                   *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar23 * 8) !=
                   &pUVar16->_padding_)) ||
                 ((EVar11 = ULevelStreaming::GetLevelStreamingState(this), EVar11 != Loading &&
                  ((Unloaded < EVar11 ||
                   (cVar12 = (**(code **)(this->_padding_ + 0x2e8))(this), cVar12 == '\0'))))))
              goto LAB_148af8fc7;
              local_118[0] = local_118[0] + -1;
              if (local_118[0] == 0) break;
            }
            local_50 = local_50 & ~local_5c;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_68 + 8));
          } while (local_4c < *(int *)(local_58 + 0x18));
        }
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1307,"ToActivateCells",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                 ,0x51b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1307);
    }
    iVar21 = (int)local_d8;
    uVar20 = (ulonglong)(int)local_d8;
    ppUVar2 = local_e0 + uVar20;
    ppUVar24 = local_e0;
    while( true ) {
      if ((int)uVar20 != iVar21) {
        `TCheckedPointerIterator<UWorldPartitionRuntimeCell_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_e8);
      }
      if (ppUVar24 == ppUVar2) break;
      pUVar5 = *ppUVar24;
      pUVar17 = (UWorld *)(**(code **)(pUVar5->_padding_ + 0x78))(&pUVar5->_padding_);
      pUVar18 = UWorld::GetWorldPartition(pUVar17);
      pUVar6 = (pUVar18->StreamingPolicy).field0_0x0.DebugPtr;
      (**(code **)(pUVar6->_padding_ + 0x340))(pUVar6,pUVar5,local_118);
      uVar20 = local_d8 & 0xffffffff;
      ppUVar24 = ppUVar24 + 1;
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1316,"ToLoadCells",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                 ,0x524);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1316);
    }
    iVar21 = (int)local_c8;
    uVar20 = (ulonglong)(int)local_c8;
    ppUVar2 = local_d0 + uVar20;
    ppUVar24 = local_d0;
    while( true ) {
      if ((int)uVar20 != iVar21) {
        `TCheckedPointerIterator<UWorldPartitionRuntimeCell_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_e7);
      }
      if (ppUVar24 == ppUVar2) break;
      pUVar5 = *ppUVar24;
      pUVar17 = (UWorld *)(**(code **)(pUVar5->_padding_ + 0x78))(&pUVar5->_padding_);
      pUVar18 = UWorld::GetWorldPartition(pUVar17);
      pUVar6 = (pUVar18->StreamingPolicy).field0_0x0.DebugPtr;
      (**(code **)(pUVar6->_padding_ + 0x338))(pUVar6,pUVar5,local_118);
      uVar20 = local_c8 & 0xffffffff;
      ppUVar24 = ppUVar24 + 1;
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    local_110.Data = (FScriptContainerElement *)0x0;
    local_108 = 0;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1327,"BuildPendingCells",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                 ,0x52f);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1327);
    }
    if ((int)local_c8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_c8 & 0xffffffff);
    }
    if (local_108._4_4_ < (int)local_c8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(int)local_c8,&local_110,(int)local_108,(int *)((longlong)&local_108 + 4));
    }
    if ((int)local_d8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_d8 & 0xffffffff);
    }
    if (local_f0._4_4_ < (int)local_d8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(int)local_d8,&local_f8,(int)local_f0,(int *)((longlong)&local_f0 + 4));
    }
    `UWorldPartitionSubsystem::UpdateStreamingStateInternal'::__l2::<lambda_2>::operator()
              (&local_80,&local_a0);
    iVar21 = local_a0.ArrayNum;
    pFVar1 = local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayNum * 8;
    FVar22.Data = local_a0.AllocatorInstance.Data;
    while( true ) {
      if (local_a0.ArrayNum != iVar21) {
        `TCheckedPointerIterator<TObjectPtr<UWorldPartition>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_e6);
      }
      if (FVar22.Data == pFVar1) break;
      plVar4 = *(longlong **)(*(longlong *)FVar22.Data + 0x130);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x358))(plVar4,&local_110,&local_f8);
      }
      FVar22.Data = FVar22.Data + 8;
    }
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1340,"SortPendingCells",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                 ,0x53c);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1340);
    }
    AlgoImpl::
    IntroSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionSubsystem::UpdateStreamingStateInternal_::__l77::<lambda_5>_>
              ((UWorldPartitionRuntimeCell **)local_110.Data,(int)local_108,local_res8,
               (<lambda_5>)local_res8);
    AlgoImpl::
    IntroSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionSubsystem::UpdateStreamingStateInternal_::__l77::<lambda_6>_>
              ((UWorldPartitionRuntimeCell **)local_f8.Data,(int)local_f0,local_res8,
               (<lambda_6>)local_res8);
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1371,"SetPendingCellsStreamingPriority",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionSubsystem.cpp"
                 ,0x55b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1371);
    }
    iVar21 = (int)local_108;
    bVar10 = UWorld::HasAnyLevelMakingVisible(param_1);
    iVar23 = (int)local_108;
    if (bVar10) {
      pFVar1 = local_110.Data + (longlong)(int)local_108 * 8;
      FVar22.Data = local_110.Data;
      while( true ) {
        if ((int)local_108 != iVar23) {
          `TCheckedPointerIterator<UWorldPartitionRuntimeCell_const_*_const,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_e5);
        }
        if (FVar22.Data == pFVar1) break;
        pUVar5 = *(UWorldPartitionRuntimeCell **)FVar22.Data;
        pUVar19 = (ULevel *)(**(code **)(pUVar5->_padding_ + 0x2d8))(pUVar5);
        if ((pUVar19 != (ULevel *)0x0) &&
           (EVar13 = ULevel::GetPendingVisibilityState(pUVar19), EVar13 != MakingVisible)) {
          (**(code **)(pUVar5->_padding_ + 0x310))(pUVar5,iVar21);
          iVar21 = iVar21 + -1;
        }
        FVar22.Data = FVar22.Data + 8;
      }
    }
    else {
      pFVar1 = local_110.Data + (longlong)(int)local_108 * 8;
      FVar22.Data = local_110.Data;
      while( true ) {
        if ((int)local_108 != iVar23) {
          `TCheckedPointerIterator<UWorldPartitionRuntimeCell_const_*_const,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_e4);
        }
        if (FVar22.Data == pFVar1) break;
        (**(code **)((*(UWorldPartitionRuntimeCell **)FVar22.Data)->_padding_ + 0x310))
                  (*(UWorldPartitionRuntimeCell **)FVar22.Data,iVar21);
        FVar22.Data = FVar22.Data + 8;
        iVar21 = iVar21 + -1;
      }
    }
    iVar23 = (int)local_f0 + (int)local_108;
    bVar10 = UWorld::HasAnyLevelMakingVisible(param_1);
    iVar21 = (int)local_f0;
    uVar20 = (ulonglong)(int)local_f0;
    if (bVar10) {
      pFVar1 = local_f8.Data + uVar20 * 8;
      FVar22.Data = local_f8.Data;
      while( true ) {
        if ((int)uVar20 != iVar21) {
          `TCheckedPointerIterator<UWorldPartitionRuntimeCell_const_*_const,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_e3);
        }
        if (FVar22.Data == pFVar1) break;
        pUVar5 = *(UWorldPartitionRuntimeCell **)FVar22.Data;
        pUVar19 = (ULevel *)(**(code **)(pUVar5->_padding_ + 0x2d8))(pUVar5);
        if ((pUVar19 != (ULevel *)0x0) &&
           (EVar13 = ULevel::GetPendingVisibilityState(pUVar19), EVar13 != MakingVisible)) {
          (**(code **)(pUVar5->_padding_ + 0x310))(pUVar5,iVar23);
          iVar23 = iVar23 + -1;
        }
        uVar20 = local_f0 & 0xffffffff;
        FVar22.Data = FVar22.Data + 8;
      }
    }
    else {
      pFVar1 = local_f8.Data + uVar20 * 8;
      FVar22.Data = local_f8.Data;
      while( true ) {
        if ((int)uVar20 != iVar21) {
          `TCheckedPointerIterator<UWorldPartitionRuntimeCell_const_*_const,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_e2);
        }
        if (FVar22.Data == pFVar1) break;
        (**(code **)((*(UWorldPartitionRuntimeCell **)FVar22.Data)->_padding_ + 0x310))
                  (*(UWorldPartitionRuntimeCell **)FVar22.Data,iVar23);
        uVar20 = local_f0 & 0xffffffff;
        FVar22.Data = FVar22.Data + 8;
        iVar23 = iVar23 + -1;
      }
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
    if (local_110.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data);
    }
    if (local_e0 != (UWorldPartitionRuntimeCell **)0x0) {
      FMemory::Free(local_e0);
    }
    if (local_d0 != (UWorldPartitionRuntimeCell **)0x0) {
      FMemory::Free(local_d0);
    }
  }
  else {
    bVar10 = IncrementalUpdateStreamingState(local_100);
    if (bVar10) goto LAB_148af8dc2;
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&local_100->StreamingStateUpdated);
LAB_148af94e7:
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// _getUObject @ 148afa050

UObject * __thiscall UWorldPartitionSubsystem::_getUObject(UWorldPartitionSubsystem *this)

{
  return (UObject *)&this[-1].WorldPartitionLoadingAndPendingLoadStreamingLevels.Elements.field_0x10
  ;
}

// execIsAllStreamingCompleted @ 148afa060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UWorldPartitionSubsystem::execIsAllStreamingCompleted
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar4 = *(undefined8 **)(param_1 + 2);
  iVar2 = *(int *)&param_1[2].field_0x8;
  puVar1 = puVar4 + iVar2;
  while( true ) {
    if (*(int *)&param_1[2].field_0x8 != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UWorldPartition>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (puVar4 == puVar1) break;
    bVar3 = UWorldPartition::IsStreamingCompleted
                      ((UWorldPartition *)*puVar4,
                       (TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *)0x0);
    if (!bVar3) {
      DestructItems<FWorldPartitionStreamingSource,int>((FWorldPartitionStreamingSource *)0x0,0);
      DestructItems<FWorldPartitionStreamingSource,int>((FWorldPartitionStreamingSource *)0x0,0);
      *(undefined1 *)param_3 = 0;
      return;
    }
    DestructItems<FWorldPartitionStreamingSource,int>((FWorldPartitionStreamingSource *)0x0,0);
    puVar4 = puVar4 + 1;
  }
  DestructItems<FWorldPartitionStreamingSource,int>((FWorldPartitionStreamingSource *)0x0,0);
  *(undefined1 *)param_3 = 1;
  return;
}

// execIsStreamingCompleted @ 148afa110

void __cdecl
UWorldPartitionSubsystem::execIsStreamingCompleted(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>_> *pTVar3;
  EWorldPartitionRuntimeCellState local_res10 [8];
  int local_res18 [2];
  TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>_> local_28;
  
  local_res10[0] = Unloaded;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res18[0] = 0;
  pTVar3 = &local_28;
  if ((TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = IsStreamingCompleted
                    ((UWorldPartitionSubsystem *)param_1,local_res10[0],pTVar3,local_res18[0] != 0);
  *(bool *)param_3 = bVar2;
  DestructItems<FWorldPartitionStreamingQuerySource,int>
            ((FWorldPartitionStreamingQuerySource *)local_28.AllocatorInstance.Data,
             local_28.ArrayNum);
  if ((FWorldPartitionStreamingQuerySource *)local_28.AllocatorInstance.Data !=
      (FWorldPartitionStreamingQuerySource *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}


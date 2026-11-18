// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 40

// StaticClass @ 148a713b0

UClass * __cdecl UWorldPartitionHLODRuntimeSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionHLODRuntimeSubsystem.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODRuntimeSubsystem",
               &Z_Registration_Info_UClass_UWorldPartitionHLODRuntimeSubsystem.InnerSingleton,
               StaticRegisterNativesUWorldPartitionHLODRuntimeSubsystem,0x2d0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionHLODRuntimeSubsystem>,
               InternalVTableHelperCtorCaller<UWorldPartitionHLODRuntimeSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODRuntimeSubsystem.InnerSingleton;
}

// UWorldPartitionHLODRuntimeSubsystem @ 148a80290

UWorldPartitionHLODRuntimeSubsystem * __thiscall
UWorldPartitionHLODRuntimeSubsystem::UWorldPartitionHLODRuntimeSubsystem
          (UWorldPartitionHLODRuntimeSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UWorldPartitionHLODRuntimeSubsystem__6B_;
  *(undefined8 *)&this->ForEachHLODObjectInCellEvent = 0;
  *(undefined8 *)&(this->ForEachHLODObjectInCellEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ForEachHLODObjectInCellEvent).field_0x10 = 0;
  *(undefined8 *)&this->WorldPartitionsHLODRuntimeData = 0;
  *(undefined8 *)&(this->WorldPartitionsHLODRuntimeData).field_0x8 = 0;
  *(undefined8 *)&(this->WorldPartitionsHLODRuntimeData).field_0x20 = 0;
  *(undefined8 *)&(this->ForEachHLODObjectInCellEvent).field_0x18 = 2;
  *(undefined4 *)&(this->WorldPartitionsHLODRuntimeData).field_0x28 = 0;
  *(undefined4 *)&(this->WorldPartitionsHLODRuntimeData).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldPartitionsHLODRuntimeData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WorldPartitionsHLODRuntimeData).field_0x34 = 0;
  *(undefined8 *)&(this->WorldPartitionsHLODRuntimeData).field_0x40 = 0;
  *(undefined4 *)&(this->WorldPartitionsHLODRuntimeData).field_0x48 = 0;
  *(undefined8 *)&this->HLODObjectsToWarmup = 0;
  *(undefined8 *)&(this->HLODObjectsToWarmup).field_0x8 = 0;
  *(undefined8 *)&(this->HLODObjectsToWarmup).field_0x20 = 0;
  *(undefined4 *)&(this->HLODObjectsToWarmup).field_0x28 = 0;
  *(undefined4 *)&(this->HLODObjectsToWarmup).field_0x2c = 0x80;
  *(undefined4 *)&(this->HLODObjectsToWarmup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HLODObjectsToWarmup).field_0x34 = 0;
  *(undefined8 *)&(this->HLODObjectsToWarmup).field_0x40 = 0;
  *(undefined4 *)&(this->HLODObjectsToWarmup).field_0x48 = 0;
  *(undefined8 *)&this->HLODLevelWarmupStates = 0;
  *(undefined8 *)&(this->HLODLevelWarmupStates).field_0x8 = 0;
  *(undefined8 *)&(this->HLODLevelWarmupStates).field_0x20 = 0;
  *(undefined4 *)&(this->HLODLevelWarmupStates).field_0x28 = 0;
  *(undefined4 *)&(this->HLODLevelWarmupStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->HLODLevelWarmupStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HLODLevelWarmupStates).field_0x34 = 0;
  *(undefined8 *)&(this->HLODLevelWarmupStates).field_0x40 = 0;
  *(undefined4 *)&(this->HLODLevelWarmupStates).field_0x48 = 0;
  (this->SceneViewExtension).Object = (FHLODResourcesResidencySceneViewExtension *)0x0;
  (this->SceneViewExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->HLODObjectRegisteredEvent = 0;
  *(undefined8 *)&(this->HLODObjectRegisteredEvent).field_0x8 = 0;
  *(undefined8 *)&(this->HLODObjectRegisteredEvent).field_0x10 = 0;
  *(undefined8 *)&(this->HLODObjectRegisteredEvent).field_0x18 = 2;
  *(undefined8 *)&this->HLODObjectUnregisteredEvent = 0;
  *(undefined8 *)&(this->HLODObjectUnregisteredEvent).field_0x8 = 0;
  *(undefined8 *)&(this->HLODObjectUnregisteredEvent).field_0x10 = 0;
  *(undefined8 *)&(this->HLODObjectUnregisteredEvent).field_0x18 = 2;
  *(undefined8 *)&this->HLODActorRegisteredEvent = 0;
  *(undefined8 *)&(this->HLODActorRegisteredEvent).field_0x8 = 0;
  *(undefined8 *)&(this->HLODActorRegisteredEvent).field_0x10 = 0;
  *(undefined8 *)&(this->HLODActorRegisteredEvent).field_0x18 = 2;
  *(undefined8 *)&this->HLODActorUnregisteredEvent = 0;
  *(undefined8 *)&(this->HLODActorUnregisteredEvent).field_0x8 = 0;
  *(undefined8 *)&(this->HLODActorUnregisteredEvent).field_0x10 = 0;
  *(undefined8 *)&(this->HLODActorUnregisteredEvent).field_0x18 = 2;
  *(undefined8 *)&this->StandaloneHLODObjectsReferencingUnloadedCells = 0;
  *(undefined8 *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x8 = 0;
  *(undefined8 *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x20 = 0;
  *(undefined4 *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x28 = 0;
  *(undefined4 *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x2c = 0x80;
  *(undefined4 *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x34 = 0;
  *(undefined8 *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x40 = 0;
  *(undefined4 *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x48 = 0;
  *(undefined8 *)&this->StandaloneHLODCellToWorldPartitionMap = 0;
  *(undefined8 *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x8 = 0;
  *(undefined8 *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x20 = 0;
  *(undefined4 *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x28 = 0;
  *(undefined4 *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x34 = 0;
  *(undefined8 *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x40 = 0;
  *(undefined4 *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x48 = 0;
  *(undefined8 *)&(this->OutdatedHLODObjects).Elements = 0;
  *(undefined8 *)&(this->OutdatedHLODObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OutdatedHLODObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OutdatedHLODObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OutdatedHLODObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OutdatedHLODObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutdatedHLODObjects).Elements.field_0x34 = 0;
  (this->OutdatedHLODObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OutdatedHLODObjects).HashSize = 0;
  return this;
}

// UWorldPartitionHLODRuntimeSubsystem @ 148a804e0

UWorldPartitionHLODRuntimeSubsystem * __thiscall
UWorldPartitionHLODRuntimeSubsystem::UWorldPartitionHLODRuntimeSubsystem
          (UWorldPartitionHLODRuntimeSubsystem *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  this->_padding_ = (longlong)&___7UWorldPartitionHLODRuntimeSubsystem__6B_;
  *(undefined8 *)&this->ForEachHLODObjectInCellEvent = 0;
  *(undefined8 *)&(this->ForEachHLODObjectInCellEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ForEachHLODObjectInCellEvent).field_0x10 = 0;
  *(undefined8 *)&this->WorldPartitionsHLODRuntimeData = 0;
  *(undefined8 *)&(this->WorldPartitionsHLODRuntimeData).field_0x8 = 0;
  *(undefined8 *)&(this->WorldPartitionsHLODRuntimeData).field_0x20 = 0;
  *(undefined8 *)&(this->ForEachHLODObjectInCellEvent).field_0x18 = 2;
  *(undefined4 *)&(this->WorldPartitionsHLODRuntimeData).field_0x28 = 0;
  *(undefined4 *)&(this->WorldPartitionsHLODRuntimeData).field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldPartitionsHLODRuntimeData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WorldPartitionsHLODRuntimeData).field_0x34 = 0;
  *(undefined8 *)&(this->WorldPartitionsHLODRuntimeData).field_0x40 = 0;
  *(undefined4 *)&(this->WorldPartitionsHLODRuntimeData).field_0x48 = 0;
  *(undefined8 *)&this->HLODObjectsToWarmup = 0;
  *(undefined8 *)&(this->HLODObjectsToWarmup).field_0x8 = 0;
  *(undefined8 *)&(this->HLODObjectsToWarmup).field_0x20 = 0;
  *(undefined4 *)&(this->HLODObjectsToWarmup).field_0x28 = 0;
  *(undefined4 *)&(this->HLODObjectsToWarmup).field_0x2c = 0x80;
  *(undefined4 *)&(this->HLODObjectsToWarmup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HLODObjectsToWarmup).field_0x34 = 0;
  *(undefined8 *)&(this->HLODObjectsToWarmup).field_0x40 = 0;
  *(undefined4 *)&(this->HLODObjectsToWarmup).field_0x48 = 0;
  *(undefined8 *)&this->HLODLevelWarmupStates = 0;
  *(undefined8 *)&(this->HLODLevelWarmupStates).field_0x8 = 0;
  *(undefined8 *)&(this->HLODLevelWarmupStates).field_0x20 = 0;
  *(undefined4 *)&(this->HLODLevelWarmupStates).field_0x28 = 0;
  *(undefined4 *)&(this->HLODLevelWarmupStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->HLODLevelWarmupStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HLODLevelWarmupStates).field_0x34 = 0;
  *(undefined8 *)&(this->HLODLevelWarmupStates).field_0x40 = 0;
  *(undefined4 *)&(this->HLODLevelWarmupStates).field_0x48 = 0;
  this->bCachedShouldPerformWarmup = true;
  (this->SceneViewExtension).Object = (FHLODResourcesResidencySceneViewExtension *)0x0;
  (this->SceneViewExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->HLODObjectRegisteredEvent = 0;
  *(undefined8 *)&(this->HLODObjectRegisteredEvent).field_0x8 = 0;
  *(undefined8 *)&(this->HLODObjectRegisteredEvent).field_0x10 = 0;
  *(undefined8 *)&(this->HLODObjectRegisteredEvent).field_0x18 = 2;
  *(undefined8 *)&this->HLODObjectUnregisteredEvent = 0;
  *(undefined8 *)&(this->HLODObjectUnregisteredEvent).field_0x8 = 0;
  *(undefined8 *)&(this->HLODObjectUnregisteredEvent).field_0x10 = 0;
  *(undefined8 *)&(this->HLODObjectUnregisteredEvent).field_0x18 = 2;
  *(undefined8 *)&this->HLODActorRegisteredEvent = 0;
  *(undefined8 *)&(this->HLODActorRegisteredEvent).field_0x8 = 0;
  *(undefined8 *)&(this->HLODActorRegisteredEvent).field_0x10 = 0;
  *(undefined8 *)&(this->HLODActorRegisteredEvent).field_0x18 = 2;
  *(undefined8 *)&this->HLODActorUnregisteredEvent = 0;
  *(undefined8 *)&(this->HLODActorUnregisteredEvent).field_0x8 = 0;
  *(undefined8 *)&(this->HLODActorUnregisteredEvent).field_0x10 = 0;
  *(undefined8 *)&(this->HLODActorUnregisteredEvent).field_0x18 = 2;
  *(undefined8 *)&this->StandaloneHLODObjectsReferencingUnloadedCells = 0;
  *(undefined8 *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x8 = 0;
  *(undefined8 *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x20 = 0;
  *(undefined4 *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x28 = 0;
  *(undefined4 *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x2c = 0x80;
  *(undefined4 *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x34 = 0;
  *(undefined8 *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x40 = 0;
  *(undefined4 *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x48 = 0;
  *(undefined8 *)&this->StandaloneHLODCellToWorldPartitionMap = 0;
  *(undefined8 *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x8 = 0;
  *(undefined8 *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x20 = 0;
  *(undefined4 *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x28 = 0;
  *(undefined4 *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x34 = 0;
  *(undefined8 *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x40 = 0;
  *(undefined4 *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x48 = 0;
  *(undefined8 *)&(this->OutdatedHLODObjects).Elements = 0;
  *(undefined8 *)&(this->OutdatedHLODObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OutdatedHLODObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OutdatedHLODObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OutdatedHLODObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OutdatedHLODObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OutdatedHLODObjects).Elements.field_0x34 = 0;
  (this->OutdatedHLODObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OutdatedHLODObjects).HashSize = 0;
  return this;
}

// ~UWorldPartitionHLODRuntimeSubsystem @ 148a81ba0

void __thiscall
UWorldPartitionHLODRuntimeSubsystem::~UWorldPartitionHLODRuntimeSubsystem
          (UWorldPartitionHLODRuntimeSubsystem *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UWorldPartitionHLODRuntimeSubsystem__6B_;
  (this->OutdatedHLODObjects).HashSize = 0;
  FVar1 = (this->OutdatedHLODObjects).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<IWorldPartitionHLODObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IWorldPartitionHLODObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OutdatedHLODObjects).Elements);
  *(undefined4 *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<UWorldPartition>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<UWorldPartition>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TObjectPtr<UWorldPartition>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StandaloneHLODCellToWorldPartitionMap);
  *(undefined4 *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x48 = 0;
  pvVar2 = *(void **)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StandaloneHLODObjectsReferencingUnloadedCells);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->HLODActorUnregisteredEvent).field_0x8,
             *(int *)&(this->HLODActorUnregisteredEvent).field_0x10);
  pvVar2 = *(void **)&(this->HLODActorUnregisteredEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HLODActorUnregisteredEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->HLODActorRegisteredEvent).field_0x8,
             *(int *)&(this->HLODActorRegisteredEvent).field_0x10);
  pvVar2 = *(void **)&(this->HLODActorRegisteredEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HLODActorRegisteredEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->HLODObjectUnregisteredEvent).field_0x8,
             *(int *)&(this->HLODObjectUnregisteredEvent).field_0x10);
  pvVar2 = *(void **)&(this->HLODObjectUnregisteredEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HLODObjectUnregisteredEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->HLODObjectRegisteredEvent).field_0x8,
             *(int *)&(this->HLODObjectRegisteredEvent).field_0x10);
  pvVar2 = *(void **)&(this->HLODObjectRegisteredEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HLODObjectRegisteredEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SceneViewExtension).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->HLODLevelWarmupStates).field_0x48 = 0;
  pvVar2 = *(void **)&(this->HLODLevelWarmupStates).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HLODLevelWarmupStates);
  *(undefined4 *)&(this->HLODObjectsToWarmup).field_0x48 = 0;
  pvVar2 = *(void **)&(this->HLODObjectsToWarmup).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->HLODObjectsToWarmup);
  *(undefined4 *)&(this->WorldPartitionsHLODRuntimeData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WorldPartitionsHLODRuntimeData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WorldPartitionsHLODRuntimeData);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ForEachHLODObjectInCellEvent).field_0x8,
             *(int *)&(this->ForEachHLODObjectInCellEvent).field_0x10);
  pvVar2 = *(void **)&(this->ForEachHLODObjectInCellEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ForEachHLODObjectInCellEvent);
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// operator() @ 148a84ff0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UWorldPartitionHLODRuntimeSubsystem::OnExternalStreamingObjectInjected'::__l5::<lambda_1>::
operator()(void *this,UWorldPartitionRuntimeCell *param_1)

{
  TKeyInitializer<FGuid_const_&> local_res8;
  FGuid *local_res10;
  FString local_38;
  void *local_28 [2];
  
  if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
    (**(code **)(param_1->_padding_ + 0x68))(&param_1->_padding_,local_28);
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    FGuid::AppendString(&param_1->CellGuid,&local_38,Digits);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  local_res10 = &param_1->CellGuid;
  TSet<TTuple<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData>,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FGuid_const_&>_>
            (*(TSet<TTuple<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData>,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>,FDefaultSetAllocator>
               **)this,&local_res8,(bool *)&local_res10);
  return true;
}

// operator() @ 148a850e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UWorldPartitionHLODRuntimeSubsystem::OnExternalStreamingObjectRemoved'::__l5::<lambda_1>::
operator()(void *this,UWorldPartitionRuntimeCell *param_1)

{
  TSet<TTuple<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData>,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>,FDefaultSetAllocator>
  *this_00;
  ulong64 uVar1;
  FString local_28;
  void *local_18 [2];
  
  if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
    (**(code **)(param_1->_padding_ + 0x68))(&param_1->_padding_,local_18);
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    FGuid::AppendString(&param_1->CellGuid,&local_28,Digits);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  this_00 = *(TSet<TTuple<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData>,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>,FDefaultSetAllocator>
              **)this;
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    uVar1 = CityHash64((char *)&param_1->CellGuid,0x10);
    TSet<TTuple<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData>,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>(this_00,(uint)uVar1,&param_1->CellGuid);
  }
  return true;
}

// operator() @ 148a851e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UWorldPartitionHLODRuntimeSubsystem::OnWorldPartitionUninitialized'::__l5::<lambda_1>::operator()
          (void *this,UWorldPartitionRuntimeCell *param_1)

{
  FString local_28;
  void *local_18 [2];
  
  if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
    (**(code **)(param_1->_padding_ + 0x68))(&param_1->_padding_,local_18);
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    FGuid::AppendString(&param_1->CellGuid,&local_28,Digits);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return true;
}

// operator() @ 148a857b0

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
`UWorldPartitionHLODRuntimeSubsystem::OnWorldPartitionInitialized'::__l15::<lambda_1>::operator()
          (void *this,UWorldPartitionRuntimeCell *param_1)

{
  FGuid *this_00;
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  TSet<TTuple<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData>,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>,FDefaultSetAllocator>
  *this_01;
  code *pcVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  ulong64 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  longlong *plVar18;
  undefined1 local_res10 [8];
  TKeyInitializer<FGuid_const_&> local_res18 [2];
  longlong *local_128;
  FString local_120;
  FString local_110;
  longlong *local_100;
  uint uStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  int local_cc;
  FGuid *local_c8;
  UObject *local_c0;
  char *local_b8;
  longlong *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  FGuid *local_80;
  UObject **local_78;
  void *local_70 [2];
  void *local_60 [4];
  longlong *plVar16;
  
  plVar16 = (longlong *)0x0;
  uVar15 = 0;
  if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
    (**(code **)(param_1->_padding_ + 0x68))(&param_1->_padding_,local_70);
    local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_120.Data.ArrayNum = 0;
    local_120.Data.ArrayMax = 0;
    FGuid::AppendString(&param_1->CellGuid,&local_120,Digits);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (local_70[0] != (void *)0x0) {
      FMemory::Free(local_70[0]);
    }
  }
  this_01 = *(TSet<TTuple<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData>,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>,FDefaultSetAllocator>
              **)((longlong)this + 8);
  this_00 = &param_1->CellGuid;
  local_c8 = this_00;
  TSet<TTuple<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData>,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FGuid_const_&>_>(this_01,local_res18,(bool *)&local_c8);
  local_b8 = (char *)(*(longlong *)&this_01->Elements +
                     (longlong)(int)local_res18[0].Key * 0x30 + 0x10);
  local_c0 = (UObject *)**(undefined8 **)((longlong)this + 0x10);
  if ((local_c0[1].field_0x14 & 1) == 0) {
    return true;
  }
  lVar11 = *(longlong *)this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_c0);
  }
  local_78 = &local_c0;
  local_80 = this_00;
  TSet<TTuple<FGuid,TObjectPtr<UWorldPartition>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UWorldPartition>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,TObjectPtr<UWorldPartition>_&&>_>
            ((TSet<TTuple<FGuid,TObjectPtr<UWorldPartition>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UWorldPartition>,0>,FDefaultSetAllocator>
              *)(lVar11 + 0x230),
             (TPairInitializer<FGuid_const_&,TObjectPtr<UWorldPartition>_&&> *)(local_res18 + 1),
             (bool *)&local_80);
  lVar11 = *(longlong *)this;
  uVar9 = CityHash64((char *)this_00,0x10);
  iVar7 = TSet<TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)(lVar11 + 0x1e0),(uint)uVar9,this_00);
  plVar10 = plVar16;
  if (iVar7 != -1) {
    plVar10 = (longlong *)((longlong)iVar7 * 0x68 + *(longlong *)(lVar11 + 0x1e0));
  }
  plVar18 = plVar10 + 2;
  if (plVar10 == (longlong *)0x0) {
    plVar18 = plVar16;
  }
  if (plVar18 != (longlong *)0x0) {
    uVar14 = *(uint *)(plVar18 + 5);
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar18 + 2);
    uStack_f4 = 1;
    local_e0 = 0;
    uStack_e4 = local_e0;
    if (uVar14 != 0) {
      pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar18[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar18[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = pTVar1;
      }
      uVar8 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
      plVar10 = plVar16;
      local_e0 = 0;
      uVar15 = 0;
      while (uVar8 == 0) {
        iVar7 = (int)plVar16;
        local_e0 = (int)plVar10 + 0x20;
        plVar10 = (longlong *)(ulonglong)local_e0;
        uVar15 = iVar7 + 1;
        plVar16 = (longlong *)(ulonglong)uVar15;
        uStack_e4 = uVar14;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
        goto LAB_148a859cd;
        uVar8 = *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar7 * 4 + 4);
      }
      uStack_f4 = -uVar8 & uVar8;
      uVar2 = (ulonglong)uStack_f4 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_d0 = (int)lVar11;
      uStack_e4 = (local_e0 - 1) + local_d0;
      if ((int)uVar14 < (int)uStack_e4) {
        uStack_e4 = uVar14;
      }
    }
LAB_148a859cd:
    uVar8 = *(uint *)(plVar18 + 5);
    uVar13 = uVar8 & 0xffffffe0;
    iStack_d8 = (int)plVar18[1] - *(int *)((longlong)plVar18 + 0x34);
    uStack_e8 = 0xffffffff;
    TStack_a8._padding_ = CONCAT44(uStack_f4,uVar15);
    TStack_a8.CurrentBitIndex = uStack_e4;
    TStack_a8.UnvisitedBitMask = 0xffffffff;
    iVar7 = (int)uVar8 >> 5;
    TStack_a8._28_4_ = uStack_e4;
    TStack_a8.BaseBitIndex = local_e0;
    uStack_88 = CONCAT44(uStack_d4,iStack_d8);
    local_100 = plVar18;
    uStack_f8 = uVar15;
    local_f0 = pTVar1;
    uStack_dc = uStack_e4;
    local_b0 = plVar18;
    TStack_a8.Array = pTVar1;
    if ((((int)uVar8 < 0) || ((int)uVar14 < (int)uVar8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pcVar4 = local_b8;
    uVar15 = *(uint *)(plVar18 + 5);
    if (uVar8 != uVar15) {
      pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar18[4];
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar18[4] ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar17 = pTVar1;
      }
      uVar14 = -1 << ((byte)uVar8 & 0x1f) &
               *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar7 * 4);
      while (uVar14 == 0) {
        lVar11 = (longlong)iVar7;
        uVar13 = uVar13 + 0x20;
        iVar7 = iVar7 + 1;
        uVar8 = uVar15;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
        goto LAB_148a85ae0;
        uVar14 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_cc = (int)lVar11;
      uVar8 = local_cc + -1 + uVar13;
      if ((int)uVar15 < (int)uVar8) {
        uVar8 = uVar15;
      }
    }
LAB_148a85ae0:
    while( true ) {
      plVar16 = local_b0;
      if ((int)local_b0[1] - *(int *)((longlong)local_b0 + 0x34) != (int)uStack_88) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<IWorldPartitionHLODObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_a8.CurrentBitIndex == uVar8) && (TStack_a8.Array == pTVar1)) &&
         (plVar16 == plVar18)) break;
      local_128 = *(longlong **)(*plVar16 + (longlong)TStack_a8.CurrentBitIndex * 0x10);
      if (((*(longlong ***)(pcVar4 + 8) <= &local_128) &&
          (&local_128 < *(longlong ***)(pcVar4 + 8) + *(int *)(pcVar4 + 0x14))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar7 = *(int *)(pcVar4 + 0x10);
      if (iVar7 == *(int *)(pcVar4 + 0x14)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(pcVar4 + 8),(int *)(pcVar4 + 0x14));
      }
      *(int *)(pcVar4 + 0x10) = iVar7 + 1;
      *(longlong **)(*(longlong *)(pcVar4 + 8) + (longlong)iVar7 * 8) = local_128;
      if ((UWorldPartitionHLODRuntimeSubsystem::WorldPartitionHLODEnabled == false) ||
         (*pcVar4 != '\0')) {
        uVar12 = 0;
      }
      else {
        uVar12 = CONCAT71((int7)(int3)((uint)iVar7 >> 8),1);
      }
      (**(code **)(*local_128 + 0x28))(local_128,uVar12);
      if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
        local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_110.Data.ArrayNum = 0;
        local_110.Data.ArrayMax = 0;
        FGuid::AppendString(this_00,&local_110,Digits);
        (**(code **)(*local_128 + 0x10))(local_128,local_60);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
        if (local_60[0] != (void *)0x0) {
          FMemory::Free(local_60[0]);
        }
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
      }
      TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
    }
    lVar11 = *(longlong *)this;
    if (*(int *)(lVar11 + 0x1e8) != *(int *)(lVar11 + 0x214)) {
      uVar9 = CityHash64((char *)this_00,0x10);
      TSet<TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                           *)(lVar11 + 0x1e0),(uint)uVar9,this_00);
    }
  }
  return true;
}

// operator() @ 148a85d00

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
UWorldPartitionHLODRuntimeSubsystem::<lambda_25>::operator()
          (<lambda_25> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  UWorld *this_00;
  FSubsystemCollectionBase *pFVar4;
  code *pcVar5;
  FSubsystemCollectionBase **ppFVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  USubsystem *pUVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  longlong *plVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  longlong *plVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  USubsystem *pUVar26;
  FSubsystemCollectionBase **ppFVar27;
  undefined8 uVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  USubsystem *pUVar30;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_228;
  undefined1 local_227;
  undefined1 local_226 [2];
  uint local_224;
  USubsystem *local_220;
  int iStack_218;
  uint uStack_214;
  TBitArray<FDefaultBitArrayAllocator> *local_210;
  undefined4 uStack_208;
  int iStack_204;
  int local_200;
  undefined4 uStack_1fc;
  int iStack_1f8;
  undefined4 uStack_1f4;
  USubsystem *local_1f0;
  USubsystem *local_1e8;
  FScriptContainerElement *local_1e0;
  int *piStack_1d8;
  int local_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c4;
  FScriptContainerElement *local_1c0;
  int *piStack_1b8;
  undefined8 local_1b0;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  FSubsystemCollectionBase **local_188;
  TBitArray<FDefaultBitArrayAllocator> *local_180;
  FSubsystemCollectionBase **local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  FSubsystemCollectionBase **local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  USubsystem *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  USubsystem *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  FScriptContainerElement *local_b8;
  int *piStack_b0;
  undefined8 local_a8;
  undefined4 local_84;
  undefined4 local_64;
  undefined4 local_44;
  
  if (param_1->ArrayNum == 1) {
    pFVar21 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar21 + 8) == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = *(wchar_t **)pFVar21;
    }
    iVar8 = FGenericPlatformStricmp::Stricmp(pwVar12,L"0");
    WorldPartitionHLODEnabled = false;
    if (iVar8 == 0) goto LAB_148a85d4c;
  }
  WorldPartitionHLODEnabled = true;
LAB_148a85d4c:
  pFVar21 = (GEngine->WorldList).Array.AllocatorInstance.Data;
  piStack_1d8 = &(GEngine->WorldList).Array.ArrayNum;
  local_1d0 = *piStack_1d8;
  local_1e0 = pFVar21 + (longlong)local_1d0 * 8;
  local_1b0 = CONCAT44(uStack_1cc,local_1d0);
  local_a8 = CONCAT44(uStack_1cc,local_1d0);
  piStack_1b8 = piStack_1d8;
  local_b8 = local_1e0;
  piStack_b0 = piStack_1d8;
  do {
    local_1c0 = pFVar21;
    if (*piStack_1b8 != (int)local_1b0) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar21 == local_b8) {
      return;
    }
    this_00 = *(UWorld **)(*(longlong *)pFVar21 + 0x2c0);
    if ((this_00 != (UWorld *)0x0) && (bVar7 = UWorld::IsGameWorld(this_00), bVar7)) {
      pUVar9 = UWorldPartitionHLODRuntimeSubsystem::StaticClass();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar9 != (UClass *)0x0) goto LAB_148a85e36;
LAB_148a85e64:
        pUVar9 = (UClass *)0x0;
      }
      else {
        if (pUVar9 == (UClass *)0x0) goto LAB_148a85e64;
        UE::GC::MarkAsReachable((UObject *)pUVar9);
LAB_148a85e36:
        pUVar10 = UWorldPartitionHLODRuntimeSubsystem::StaticClass();
        if (pUVar10 == (UClass *)0x0) goto LAB_148a85e64;
        iVar8 = (int)pUVar10->_padding_;
        if (((int)pUVar9->_padding_ < iVar8) ||
           ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar8 * 8) !=
            &pUVar10->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (!bVar7) goto LAB_148a85e64;
      }
      pUVar11 = FSubsystemCollectionBase::GetSubsystemInternal
                          ((FSubsystemCollectionBase *)&this_00->SubsystemCollection,pUVar9);
      local_1e8 = pUVar11;
      if (pUVar11 != (USubsystem *)0x0) {
        pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)&pUVar11[2]._padding_;
        iStack_218 = 0;
        iVar8 = (int)pUVar11[2]._padding_;
        pUVar26 = (USubsystem *)&pUVar11[1].InternalOwningSubsystem;
        local_200 = 0;
        uStack_214 = 1;
        iStack_204 = 0;
        if (iVar8 != 0) {
          plVar22 = (longlong *)pTVar29;
          if ((longlong *)pUVar11[2]._padding_ != (longlong *)0x0) {
            plVar22 = (longlong *)pUVar11[2]._padding_;
          }
          uVar20 = (uint)*plVar22;
          while (uVar20 == 0) {
            lVar13 = (longlong)iStack_218;
            local_200 = local_200 + 0x20;
            iStack_218 = iStack_218 + 1;
            iStack_204 = iVar8;
            if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_218)
            goto LAB_148a85f1d;
            uVar20 = *(uint *)((longlong)plVar22 + lVar13 * 4 + 4);
          }
          uStack_214 = -uVar20 & uVar20;
          uVar2 = (ulonglong)uStack_214 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_1a8 = (int)lVar13;
          iStack_204 = local_1a8 + -1 + local_200;
          if (iVar8 < iStack_204) {
            iStack_204 = iVar8;
          }
        }
LAB_148a85f1d:
        uVar20 = (uint)pUVar11[2]._padding_;
        uStack_1fc = local_1c4;
        uVar18 = uVar20 & 0xffffffe0;
        iStack_1f8 = (int)pUVar11[2]._padding_ -
                     *(int *)((longlong)&pUVar11[2].InternalOwningSubsystem + 4);
        TStack_140._padding_ = CONCAT44(uStack_214,iStack_218);
        uStack_208 = 0xffffffff;
        TStack_140.CurrentBitIndex = iStack_204;
        TStack_140.UnvisitedBitMask = 0xffffffff;
        iVar15 = (int)uVar20 >> 5;
        TStack_140._28_4_ = local_1c4;
        TStack_140.BaseBitIndex = local_200;
        uStack_120 = CONCAT44(uStack_1f4,iStack_1f8);
        local_224 = uVar20;
        local_220 = pUVar26;
        local_210 = pTVar29;
        local_1f0 = pUVar26;
        local_180 = pTVar29;
        local_148 = (FSubsystemCollectionBase **)pUVar26;
        TStack_140.Array = pTVar29;
        if ((((int)uVar20 < 0) || (iVar8 < (int)uVar20)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar19 = (uint)pUVar11[2]._padding_;
        if (uVar20 != uVar19) {
          plVar22 = (longlong *)pTVar29;
          if ((longlong *)pUVar11[2]._padding_ != (longlong *)0x0) {
            plVar22 = (longlong *)pUVar11[2]._padding_;
          }
          uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)((longlong)plVar22 + (longlong)iVar15 * 4)
          ;
          while (uVar20 == 0) {
            lVar13 = (longlong)iVar15;
            uVar18 = uVar18 + 0x20;
            iVar15 = iVar15 + 1;
            uVar20 = uVar19;
            local_224 = uVar19;
            if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
            goto LAB_148a86041;
            uVar20 = *(uint *)((longlong)plVar22 + lVar13 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_1a4 = (int)lVar13;
          uVar20 = local_1a4 + -1 + uVar18;
          local_224 = uVar20;
          if ((int)uVar19 < (int)uVar20) {
            uVar20 = uVar19;
            local_224 = uVar19;
          }
        }
LAB_148a86041:
        while( true ) {
          ppFVar27 = local_148;
          if ((int)local_148[1] - *(int *)((longlong)local_148 + 0x34) != (int)uStack_120) {
            local_res18[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          pUVar11 = local_1e8;
          iVar8 = TStack_140.CurrentBitIndex;
          if (((TStack_140.CurrentBitIndex == uVar20) && (TStack_140.Array == pTVar29)) &&
             ((USubsystem *)ppFVar27 == pUVar26)) break;
          iStack_218 = 0;
          local_200 = 0;
          pFVar4 = *ppFVar27;
          uStack_214 = 1;
          iVar15 = *(int *)((longlong)&pFVar4->SubsystemMap +
                           (longlong)TStack_140.CurrentBitIndex * 0x60 + 0x28);
          pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)
                    ((longlong)&pFVar4->SubsystemMap +
                    (longlong)TStack_140.CurrentBitIndex * 0x60 + 0x10);
          ppFVar27 = (FSubsystemCollectionBase **)
                     ((longlong)&pFVar4->SubsystemMap + (longlong)TStack_140.CurrentBitIndex * 0x60)
          ;
          iStack_204 = 0;
          if (iVar15 != 0) {
            pTVar25 = *(TBitArray<FDefaultBitArrayAllocator> **)
                       ((longlong)&pFVar4->SubsystemMap +
                       (longlong)TStack_140.CurrentBitIndex * 0x60 + 0x20);
            pTVar23 = pTVar29;
            if (pTVar25 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar23 = pTVar25;
            }
            uVar20 = (uint)*(longlong *)(pTVar23->AllocatorInstance).InlineData;
            while (uVar20 == 0) {
              lVar13 = (longlong)iStack_218;
              local_200 = local_200 + 0x20;
              iStack_218 = iStack_218 + 1;
              iStack_204 = iVar15;
              if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_218)
              goto LAB_148a8610d;
              uVar20 = *(uint *)((longlong)(pTVar23->AllocatorInstance).InlineData + lVar13 * 4 + 4)
              ;
            }
            uStack_214 = -uVar20 & uVar20;
            uVar2 = (ulonglong)uStack_214 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            local_1a0 = (int)lVar13;
            iStack_204 = local_200 + -1 + local_1a0;
            if (iVar15 < iStack_204) {
              iStack_204 = iVar15;
            }
          }
LAB_148a8610d:
          uVar20 = *(uint *)((longlong)&pFVar4->SubsystemMap +
                            (longlong)TStack_140.CurrentBitIndex * 0x60 + 0x28);
          uStack_1fc = local_84;
          iStack_1f8 = *(int *)((longlong)&pFVar4->SubsystemMap +
                               (longlong)TStack_140.CurrentBitIndex * 0x60 + 8) -
                       *(int *)((longlong)&pFVar4->SubsystemMap +
                               (longlong)TStack_140.CurrentBitIndex * 0x60 + 0x34);
          uVar18 = uVar20 & 0xffffffe0;
          TStack_170._padding_ = CONCAT44(uStack_214,iStack_218);
          uStack_208 = 0xffffffff;
          TStack_170.CurrentBitIndex = iStack_204;
          TStack_170.UnvisitedBitMask = 0xffffffff;
          iVar16 = (int)uVar20 >> 5;
          TStack_170._28_4_ = local_84;
          TStack_170.BaseBitIndex = local_200;
          uStack_150 = CONCAT44(uStack_1f4,iStack_1f8);
          local_220 = (USubsystem *)ppFVar27;
          local_210 = pTVar29;
          local_188 = ppFVar27;
          local_178 = ppFVar27;
          TStack_170.Array = pTVar29;
          if ((((int)uVar20 < 0) || (iVar15 < (int)uVar20)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar19 = *(uint *)((longlong)&pFVar4->SubsystemMap + (longlong)iVar8 * 0x60 + 0x28);
          if (uVar20 != uVar19) {
            pTVar25 = *(TBitArray<FDefaultBitArrayAllocator> **)
                       ((longlong)&pFVar4->SubsystemMap + (longlong)iVar8 * 0x60 + 0x20);
            pTVar23 = pTVar29;
            if (pTVar25 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar23 = pTVar25;
            }
            uVar20 = -1 << ((byte)uVar20 & 0x1f) &
                     *(uint *)((longlong)(pTVar23->AllocatorInstance).InlineData +
                              (longlong)iVar16 * 4);
            while (uVar20 == 0) {
              lVar13 = (longlong)iVar16;
              uVar18 = uVar18 + 0x20;
              iVar16 = iVar16 + 1;
              uVar20 = uVar19;
              if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
              goto LAB_148a86220;
              uVar20 = *(uint *)((longlong)(pTVar23->AllocatorInstance).InlineData + lVar13 * 4 + 4)
              ;
            }
            uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
            lVar13 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            local_19c = (int)lVar13;
            uVar20 = (uVar18 - 1) + local_19c;
            if ((int)uVar19 < (int)uVar20) {
              uVar20 = uVar19;
            }
          }
LAB_148a86220:
          while( true ) {
            ppFVar6 = local_178;
            if ((int)local_178[1] - *(int *)((longlong)local_178 + 0x34) != (int)uStack_150) {
              local_res20[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
            }
            iVar8 = TStack_170.CurrentBitIndex;
            if (((TStack_170.CurrentBitIndex == uVar20) && (TStack_170.Array == pTVar29)) &&
               (ppFVar6 == ppFVar27)) break;
            pFVar4 = *ppFVar6;
            if ((WorldPartitionHLODEnabled == false) ||
               ((&(pFVar4->SubsystemMap).field_0x8)[(longlong)TStack_170.CurrentBitIndex * 0x30] !=
                '\0')) {
              uVar28 = 0;
            }
            else {
              uVar28 = 1;
            }
            puVar17 = *(undefined8 **)
                       (&(pFVar4->SubsystemMap).field_0x10 +
                       (longlong)TStack_170.CurrentBitIndex * 0x30);
            iVar15 = *(int *)(&(pFVar4->SubsystemMap).field_0x18 +
                             (longlong)TStack_170.CurrentBitIndex * 0x30);
            puVar1 = puVar17 + iVar15;
            while( true ) {
              if (*(int *)(&(pFVar4->SubsystemMap).field_0x18 + (longlong)iVar8 * 0x30) != iVar15) {
                local_228 = 0;
                `TCheckedPointerIterator<IWorldPartitionHLODObject_*_const,int,0>::operator!='::__l2
                ::<lambda_1>::operator()(&local_228);
              }
              if (puVar17 == puVar1) break;
              (**(code **)(*(longlong *)*puVar17 + 0x28))((longlong *)*puVar17,uVar28);
              puVar17 = puVar17 + 1;
            }
            TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
            ppFVar27 = local_188;
          }
          TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
          pUVar26 = local_1f0;
          pTVar29 = local_180;
          uVar20 = local_224;
        }
        iStack_218 = 0;
        local_200 = 0;
        uStack_214 = 1;
        pUVar26 = (USubsystem *)&local_1e8[10]._padding_;
        iVar8 = *(int *)&local_1e8[10].InternalOwningSubsystem;
        pUVar30 = local_1e8 + 10;
        iStack_204 = 0;
        if (iVar8 != 0) {
          plVar22 = (longlong *)pUVar26;
          if ((longlong *)local_1e8[10]._padding_ != (longlong *)0x0) {
            plVar22 = (longlong *)local_1e8[10]._padding_;
          }
          uVar20 = (uint)*plVar22;
          while (uVar20 == 0) {
            lVar13 = (longlong)iStack_218;
            local_200 = local_200 + 0x20;
            iStack_218 = iStack_218 + 1;
            iStack_204 = iVar8;
            if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_218)
            goto LAB_148a8638d;
            uVar20 = *(uint *)((longlong)plVar22 + lVar13 * 4 + 4);
          }
          uStack_214 = -uVar20 & uVar20;
          uVar2 = (ulonglong)uStack_214 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_198 = (int)lVar13;
          iStack_204 = local_200 + -1 + local_198;
          if (iVar8 < iStack_204) {
            iStack_204 = iVar8;
          }
        }
LAB_148a8638d:
        uStack_1fc = local_64;
        iStack_1f8 = (int)local_1e8[10]._padding_ -
                     *(int *)((longlong)&local_1e8[0xb]._padding_ + 4);
        uVar20 = *(uint *)&local_1e8[10].InternalOwningSubsystem;
        uVar18 = uVar20 & 0xffffffe0;
        TStack_e0._padding_ = CONCAT44(uStack_214,iStack_218);
        uStack_208 = 0xffffffff;
        TStack_e0.CurrentBitIndex = iStack_204;
        TStack_e0.UnvisitedBitMask = 0xffffffff;
        iVar15 = (int)uVar20 >> 5;
        TStack_e0._28_4_ = local_64;
        TStack_e0.BaseBitIndex = local_200;
        uStack_c0 = CONCAT44(uStack_1f4,iStack_1f8);
        local_220 = pUVar30;
        local_210 = (TBitArray<FDefaultBitArrayAllocator> *)pUVar26;
        local_1f0 = pUVar30;
        local_1e8 = pUVar26;
        local_e8 = pUVar30;
        TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)pUVar26;
        if ((((int)uVar20 < 0) || (iVar8 < (int)uVar20)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar19 = *(uint *)&pUVar11[10].InternalOwningSubsystem;
        if (uVar20 != uVar19) {
          plVar22 = (longlong *)pUVar11[10]._padding_;
          plVar24 = (longlong *)pUVar26;
          if (plVar22 != (longlong *)0x0) {
            plVar24 = plVar22;
          }
          uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)((longlong)plVar24 + (longlong)iVar15 * 4)
          ;
          while (uVar20 == 0) {
            lVar13 = (longlong)iVar15;
            uVar18 = uVar18 + 0x20;
            iVar15 = iVar15 + 1;
            uVar20 = uVar19;
            if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
            goto LAB_148a864b0;
            uVar20 = *(uint *)((longlong)plVar24 + lVar13 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_194 = (int)lVar13;
          uVar20 = (uVar18 - 1) + local_194;
          if ((int)uVar19 < (int)uVar20) {
            uVar20 = uVar19;
          }
        }
LAB_148a864b0:
        while( true ) {
          pUVar11 = local_e8;
          if ((int)local_e8->_padding_ - *(int *)((longlong)&local_e8[1]._padding_ + 4) !=
              (int)uStack_c0) {
            local_227 = 0;
            `TSparseArray<TSparseSetElement<TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_227);
          }
          if (((TStack_e0.CurrentBitIndex == uVar20) && ((USubsystem *)TStack_e0.Array == pUVar26))
             && (pFVar21 = local_1c0, pUVar11 == pUVar30)) break;
          iStack_218 = 0;
          local_200 = 0;
          lVar13 = (longlong)TStack_e0.CurrentBitIndex * 0x68 + pUVar11->_padding_;
          uStack_214 = 1;
          iVar8 = *(int *)(lVar13 + 0x38);
          pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar13 + 0x20);
          pUVar11 = (USubsystem *)(lVar13 + 0x10);
          iStack_204 = 0;
          if (iVar8 != 0) {
            pTVar25 = pTVar29;
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x30) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar25 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x30);
            }
            uVar18 = (uint)*(longlong *)(pTVar25->AllocatorInstance).InlineData;
            while (uVar18 == 0) {
              lVar14 = (longlong)iStack_218;
              local_200 = local_200 + 0x20;
              iStack_218 = iStack_218 + 1;
              iStack_204 = iVar8;
              if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_218)
              goto LAB_148a8657d;
              uVar18 = *(uint *)((longlong)(pTVar25->AllocatorInstance).InlineData + lVar14 * 4 + 4)
              ;
            }
            uStack_214 = -uVar18 & uVar18;
            uVar2 = (ulonglong)uStack_214 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            local_190 = (int)lVar14;
            iStack_204 = local_200 + -1 + local_190;
            if (iVar8 < iStack_204) {
              iStack_204 = iVar8;
            }
          }
LAB_148a8657d:
          uStack_1fc = local_44;
          iStack_1f8 = *(int *)(lVar13 + 0x18) - *(int *)(lVar13 + 0x44);
          uVar18 = *(uint *)(lVar13 + 0x38);
          uVar19 = uVar18 & 0xffffffe0;
          TStack_110._padding_ = CONCAT44(uStack_214,iStack_218);
          uStack_208 = 0xffffffff;
          TStack_110.CurrentBitIndex = iStack_204;
          TStack_110.UnvisitedBitMask = 0xffffffff;
          iVar15 = (int)uVar18 >> 5;
          TStack_110._28_4_ = local_44;
          TStack_110.BaseBitIndex = local_200;
          uStack_f0 = CONCAT44(uStack_1f4,iStack_1f8);
          local_220 = pUVar11;
          local_210 = pTVar29;
          local_118 = pUVar11;
          TStack_110.Array = pTVar29;
          if ((((int)uVar18 < 0) || (iVar8 < (int)uVar18)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar3 = *(uint *)(lVar13 + 0x38);
          if (uVar18 != uVar3) {
            pTVar25 = pTVar29;
            if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x30) !=
                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
              pTVar25 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar13 + 0x30);
            }
            uVar18 = -1 << ((byte)uVar18 & 0x1f) &
                     *(uint *)((longlong)(pTVar25->AllocatorInstance).InlineData +
                              (longlong)iVar15 * 4);
            while (uVar18 == 0) {
              lVar13 = (longlong)iVar15;
              uVar19 = uVar19 + 0x20;
              iVar15 = iVar15 + 1;
              uVar18 = uVar3;
              if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
              goto LAB_148a86690;
              uVar18 = *(uint *)((longlong)(pTVar25->AllocatorInstance).InlineData + lVar13 * 4 + 4)
              ;
            }
            uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
            lVar13 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            local_18c = (int)lVar13;
            uVar18 = (uVar19 - 1) + local_18c;
            if ((int)uVar3 < (int)uVar18) {
              uVar18 = uVar3;
            }
          }
LAB_148a86690:
          while( true ) {
            pUVar26 = local_118;
            if ((int)local_118->_padding_ - *(int *)((longlong)&local_118[1]._padding_ + 4) !=
                (int)uStack_f0) {
              local_226[0] = 0;
              `TSparseArray<TSparseSetElement<IWorldPartitionHLODObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_226);
            }
            if (((TStack_110.CurrentBitIndex == uVar18) && (TStack_110.Array == pTVar29)) &&
               (pUVar26 == pUVar11)) break;
            plVar22 = *(longlong **)
                       (pUVar26->_padding_ + (longlong)TStack_110.CurrentBitIndex * 0x10);
            (**(code **)(*plVar22 + 0x28))(plVar22,WorldPartitionHLODEnabled);
            TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
          }
          TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
          pUVar26 = local_1e8;
          pUVar30 = local_1f0;
        }
      }
    }
    pFVar21 = pFVar21 + 8;
  } while( true );
}

// AddHLODObjectToWarmup @ 148a8aac0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FWorldPartitionHLODWarmupState * __thiscall
UWorldPartitionHLODRuntimeSubsystem::AddHLODObjectToWarmup
          (UWorldPartitionHLODRuntimeSubsystem *this,IWorldPartitionHLODObject *param_1)

{
  TMap<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FWorldPartitionHLODWarmupState *pFVar4;
  FDelegateHandle FVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong *puVar8;
  int local_res8;
  IWorldPartitionHLODObject *local_res10;
  IWorldPartitionHLODObject *local_res18;
  ulonglong local_res20;
  ulonglong *local_28;
  undefined1 local_20 [8];
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  local_res10 = param_1;
  pFVar4 = TMapBase<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,0>_>
           ::FindOrAddImpl<IWorldPartitionHLODObject_*_const_&>
                     ((TMapBase<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,0>_>
                       *)&this->HLODObjectsToWarmup,uVar6 >> 0x10 ^ uVar6,&local_res10);
  local_res20 = (**(code **)((longlong)*local_res10 + 8))();
  if ((local_res20 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("HLODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
                         ,0x28e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FWorldPartitionHLODWarmupState *)(*pcVar1)();
    return pFVar4;
  }
  this_00 = &this->HLODLevelWarmupStates;
  uVar6 = ((uint)(local_res20 >> 0x14) & 0xffff ^ (uint)(local_res20 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if (*(int *)&(this->HLODLevelWarmupStates).field_0x8 !=
      *(int *)&(this->HLODLevelWarmupStates).field_0x34) {
    puVar7 = *(undefined1 **)&(this->HLODLevelWarmupStates).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->HLODLevelWarmupStates).field_0x38;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->HLODLevelWarmupStates).field_0x48 - 1U & uVar6) * 4);
    if (iVar3 != -1) {
      do {
        puVar8 = (ulonglong *)((longlong)iVar3 * 0x68 + *(longlong *)&this_00->field_0x0);
        if (*puVar8 == local_res20) {
          if (puVar8 != (ulonglong *)0x0) goto LAB_148a8ac06;
          break;
        }
        iVar3 = (int)puVar8[0xc];
      } while (iVar3 != -1);
    }
  }
  local_28 = &local_res20;
  TSet<TTuple<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState>,TDefaultMapHashableKeyFuncs<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<ULevel_*_const_&>_>
            ((TSet<TTuple<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState>,TDefaultMapHashableKeyFuncs<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState,0>,FDefaultSetAllocator>
              *)this_00,(uint)&stack0x00000008,(TKeyInitializer<ULevel_*_const_&> *)(ulonglong)uVar6
             ,(bool *)&local_28);
  puVar8 = (ulonglong *)((longlong)local_res8 * 0x68 + *(longlong *)&this_00->field_0x0);
LAB_148a8ac06:
  if (puVar8[0xb] == 0) {
    if (((int)puVar8[2] != *(int *)((longlong)puVar8 + 0x3c)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("LevelState.HLODObjectsWarmingUp.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
                           ,0x292,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWorldPartitionHLODWarmupState *)(*pcVar1)();
      return pFVar4;
    }
    FVar5 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddUObject<UWorldPartitionHLODRuntimeSubsystem,ULevel_*_&>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)(local_res20 + 0x270),(UWorldPartitionHLODRuntimeSubsystem *)local_20,
                       (pmf_a930db38)this,(ULevel **)OnCleanupLevel);
    puVar8[0xb] = *(ulonglong *)FVar5.ID;
  }
  TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
  ::Emplace<IWorldPartitionHLODObject_*_const_&>
            ((TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
              *)(puVar8 + 1),&local_res18,(bool *)&local_res10);
  return pFVar4;
}

// CanMakeInvisible @ 148a8bae0

bool __thiscall
UWorldPartitionHLODRuntimeSubsystem::CanMakeInvisible
          (UWorldPartitionHLODRuntimeSubsystem *this,UWorldPartitionRuntimeCell *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FCellData *pFVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res18 [8];
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId841,"UWorldPartitionHLODRuntimeSubsystem::CanMakeInvisible",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
               ,0x349);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId841);
  }
  bVar3 = ShouldPerformWarmupForCell(this,param_1);
  bVar5 = true;
  if ((bVar3) && (pFVar4 = GetCellData(this,param_1), pFVar4 != (FCellData *)0x0)) {
    pFVar6 = (pFVar4->LoadedHLODs).AllocatorInstance.Data;
    iVar2 = (pFVar4->LoadedHLODs).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pFVar4->LoadedHLODs).ArrayNum != iVar2) {
        `TCheckedPointerIterator<IWorldPartitionHLODObject_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar6 == pFVar1) break;
      bVar3 = PrepareToWarmup(this,param_1,*(IWorldPartitionHLODObject **)pFVar6);
      bVar5 = (bool)(bVar5 & !bVar3);
      pFVar6 = pFVar6 + 8;
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

// CanMakeVisible @ 148a8bc00

bool __thiscall
UWorldPartitionHLODRuntimeSubsystem::CanMakeVisible
          (UWorldPartitionHLODRuntimeSubsystem *this,UWorldPartitionRuntimeCell *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 local_res18 [16];
  code *local_38 [5];
  undefined8 *local_10;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId817,"UWorldPartitionHLODRuntimeSubsystem::CanMakeVisible",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
               ,0x331);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId817);
  }
  bVar1 = ShouldPerformWarmupForCell(this,param_1);
  if (bVar1) {
    local_res18[0] = 1;
    uVar3 = local_res18[0];
    if ((param_1->bIsHLOD != false) &&
       (lVar2 = (**(code **)(param_1->_padding_ + 0x2d8))(param_1), uVar3 = local_res18[0],
       lVar2 != 0)) {
      local_38[0] = (code *)0x0;
      local_10 = FMemory::Malloc(0x20,8);
      *local_10 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UWorldPartitionHLODRuntimeSubsystem::CanMakeVisible'::`8'::<lambda_1>,0,1>
                   ::_vftable_;
      local_10[1] = local_res18;
      local_10[2] = param_1;
      local_10[3] = this;
      if (local_10 + 1 != (longlong *)0x0) {
        local_38[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UWorldPartitionHLODRuntimeSubsystem::CanMakeVisible'::__l8::<lambda_1>,void,IWorldPartitionHLODObject_*>
                      ::Call;
      }
      ForEachHLODObjectInCell
                (this,param_1,(TFunction<void___cdecl(IWorldPartitionHLODObject_*)> *)local_38);
      uVar3 = local_res18[0];
    }
  }
  else {
    uVar3 = 1;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)uVar3;
}

// Deinitialize @ 148a8ced0

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
UWorldPartitionHLODRuntimeSubsystem::Deinitialize(UWorldPartitionHLODRuntimeSubsystem *this)

{
  UWorld *pUVar1;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pUVar1->OnWorldPartitionInitializedEvent,this);
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pUVar1->OnWorldPartitionUninitializedEvent,this);
  return;
}

// DoesSupportWorldType @ 148a8d900

bool __thiscall
UWorldPartitionHLODRuntimeSubsystem::DoesSupportWorldType
          (UWorldPartitionHLODRuntimeSubsystem *this,Type param_1)

{
  return (param_1 - Game & 0xfffffffd) == 0;
}

// ForEachHLODObjectInCell @ 148a90430

void __thiscall
UWorldPartitionHLODRuntimeSubsystem::ForEachHLODObjectInCell
          (UWorldPartitionHLODRuntimeSubsystem *this,UWorldPartitionRuntimeCell *param_1,
          TFunction<void___cdecl(IWorldPartitionHLODObject_*)> *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  UClass *pUVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 local_a8 [8];
  longlong local_a0;
  longlong local_98;
  longlong local_88 [3];
  longlong *local_70;
  TFunction<void___cdecl(IWorldPartitionHLODObject_*)> local_68;
  
  if (param_1->bIsHLOD != false) {
    lVar5 = (**(code **)(param_1->_padding_ + 0x2d8))(param_1);
    if (lVar5 != 0) {
      lVar5 = (**(code **)(param_1->_padding_ + 0x2d8))(param_1);
      plVar11 = *(longlong **)(lVar5 + 0xa0);
      iVar1 = *(int *)(lVar5 + 0xa8);
      plVar10 = plVar11 + iVar1;
      while( true ) {
        if (*(int *)(lVar5 + 0xa8) != iVar1) {
          `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_a8);
        }
        if (plVar11 == plVar10) break;
        lVar3 = *plVar11;
        if (lVar3 != 0) {
          pUVar6 = Z_Construct_UClass_AWorldPartitionHLOD_NoRegister();
          iVar2 = (int)pUVar6->_padding_;
          if ((iVar2 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar6->_padding_)) {
            local_a0 = lVar3 + 0x2c0;
            UE::Core::Private::Function::CheckCallable(*(void **)param_2);
            pcVar4 = *(code **)param_2;
            plVar8 = *(longlong **)&param_2->field_0x28;
            if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
              plVar8 = (longlong *)&param_2->field_0x10;
            }
            uVar7 = (**(code **)(*plVar8 + 8))();
            (*pcVar4)(uVar7);
          }
        }
        plVar11 = plVar11 + 1;
      }
      local_98 = *(longlong *)param_2;
      local_70 = (longlong *)0x0;
      if (local_98 != 0) {
        puVar9 = (undefined8 *)&param_2->field_0x10;
        if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
          puVar9 = *(undefined8 **)&param_2->field_0x28;
        }
        (**(code **)*puVar9)(puVar9,local_88);
      }
      local_68._0_8_ = local_98;
      local_68._40_8_ = 0;
      if (local_98 != 0) {
        plVar10 = local_88;
        if (local_70 != (longlong *)0x0) {
          plVar10 = local_70;
        }
        (**(code **)*plVar10)(plVar10,&local_68.field_0x10);
      }
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      Broadcast<IBaseDelegateInstance<void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>,UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->ForEachHLODObjectInCellEvent,param_1,&local_68);
      if (local_98 != 0) {
        plVar10 = local_88;
        if (local_70 != (longlong *)0x0) {
          plVar10 = local_70;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
    }
  }
  if (*(longlong *)param_2 != 0) {
    plVar10 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// GetCellData @ 148a94b50

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCellData * __thiscall
UWorldPartitionHLODRuntimeSubsystem::GetCellData
          (UWorldPartitionHLODRuntimeSubsystem *this,IWorldPartitionHLODObject *param_1)

{
  UWorld *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  UWorldPartition *pUVar5;
  TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>
  *pTVar6;
  AWorldSettings *pAVar7;
  FCellData *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  UWorldPartition *local_res18;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pUVar5 = FHLODRuntimeSubsystem::GetWorldPartition(param_1);
  if (pUVar5 == (UWorldPartition *)0x0) {
    return (FCellData *)0x0;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  local_res18 = pUVar5;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pTVar6 = TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
                   *)&this->WorldPartitionsHLODRuntimeData,
                  (TObjectPtr<UWorldPartition_const_>)&local_res18);
  plVar12 = (longlong *)0x0;
  plVar13 = (longlong *)&pTVar6->field_0x8;
  if (pTVar6 == (TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>
                 *)0x0) {
    plVar13 = plVar12;
  }
  if (plVar13 == (longlong *)0x0) {
    return (FCellData *)0x0;
  }
  if ((pUVar5->bEnableStreaming != false) &&
     (this_00 = (pUVar5->World).field0_0x0.DebugPtr, this_00 != (UWorld *)0x0)) {
    pAVar7 = UWorld::GetWorldSettings(this_00,false,true);
    cVar2 = (**(code **)(pAVar7->_padding_ + 0x780))(pAVar7);
    if (cVar2 != '\0') goto LAB_148a94c1f;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("WorldPartition->IsStreamingEnabled()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
                     ,0x15d,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FCellData *)(*pcVar1)();
    return pFVar8;
  }
LAB_148a94c1f:
  puVar9 = (undefined8 *)(**(code **)((longlong)*param_1 + 0x30))(param_1);
  local_18 = *puVar9;
  uStack_10 = puVar9[1];
  uVar10 = CityHash64((char *)&local_18,0x10);
  plVar11 = plVar12;
  if ((int)plVar13[1] != *(int *)((longlong)plVar13 + 0x34)) {
    plVar14 = (longlong *)plVar13[8];
    if ((longlong *)plVar13[8] == (longlong *)0x0) {
      plVar14 = plVar13 + 7;
    }
    iVar4 = *(int *)((longlong)plVar14 +
                    ((ulonglong)((int)plVar13[9] - 1) & uVar10 & 0xffffffff) * 4);
    if (iVar4 != -1) {
      do {
        plVar11 = (longlong *)((longlong)iVar4 * 0x30 + *plVar13);
        if (((uStack_10._4_4_ == *(int *)((longlong)plVar11 + 0xc) &&
             (int)uStack_10 == (int)plVar11[1]) && local_18._4_4_ == *(int *)((longlong)plVar11 + 4)
            ) && (int)local_18 == (int)*plVar11) break;
        iVar4 = (int)plVar11[5];
        plVar11 = plVar12;
      } while (iVar4 != -1);
    }
  }
  if (plVar11 == (longlong *)0x0) {
    return (FCellData *)0x0;
  }
  return (FCellData *)(plVar11 + 2);
}

// GetCellData @ 148a94ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCellData * __thiscall
UWorldPartitionHLODRuntimeSubsystem::GetCellData
          (UWorldPartitionHLODRuntimeSubsystem *this,UWorldPartition *param_1,FGuid *param_2)

{
  UWorld *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>
  *pTVar4;
  AWorldSettings *pAVar5;
  FCellData *pFVar6;
  TMapBase<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>_>
  *this_01;
  UWorldPartition *local_res10;
  
  if (param_1 == (UWorldPartition *)0x0) {
    return (FCellData *)0x0;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar4 = TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
                   *)&this->WorldPartitionsHLODRuntimeData,
                  (TObjectPtr<UWorldPartition_const_>)&local_res10);
  this_01 = (TMapBase<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>_>
             *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>
                 *)0x0) {
    this_01 = (TMapBase<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>_>
               *)0x0;
  }
  if (this_01 ==
      (TMapBase<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>_>
       *)0x0) {
    return (FCellData *)0x0;
  }
  if ((param_1->bEnableStreaming != false) &&
     (this_00 = (param_1->World).field0_0x0.DebugPtr, this_00 != (UWorld *)0x0)) {
    pAVar5 = UWorld::GetWorldSettings(this_00,false,true);
    cVar2 = (**(code **)(pAVar5->_padding_ + 0x780))(pAVar5);
    if (cVar2 != '\0') goto LAB_148a94d9d;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InWorldPartition->IsStreamingEnabled()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
                     ,0x16d,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FCellData *)(*pcVar1)();
    return pFVar6;
  }
LAB_148a94d9d:
  pFVar6 = TMapBase<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>_>
           ::Find(this_01,param_2);
  return pFVar6;
}

// GetCellData @ 148a94dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCellData * __thiscall
UWorldPartitionHLODRuntimeSubsystem::GetCellData
          (UWorldPartitionHLODRuntimeSubsystem *this,UWorldPartitionRuntimeCell *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  UWorld *pUVar4;
  UWorldPartition *pUVar5;
  TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>
  *pTVar6;
  AWorldSettings *pAVar7;
  FCellData *pFVar8;
  TMapBase<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>_>
  *this_00;
  UWorldPartition *local_res10;
  
  pUVar4 = (UWorld *)(**(code **)(param_1->_padding_ + 0x78))(&param_1->_padding_);
  pUVar5 = UWorld::GetWorldPartition(pUVar4);
  if (pUVar5 == (UWorldPartition *)0x0) {
    return (FCellData *)0x0;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  local_res10 = pUVar5;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pTVar6 = TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
                   *)&this->WorldPartitionsHLODRuntimeData,
                  (TObjectPtr<UWorldPartition_const_>)&local_res10);
  this_00 = (TMapBase<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>_>
             *)&pTVar6->field_0x8;
  if (pTVar6 == (TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>
                 *)0x0) {
    this_00 = (TMapBase<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>_>
               *)0x0;
  }
  if (this_00 ==
      (TMapBase<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>_>
       *)0x0) {
    return (FCellData *)0x0;
  }
  if ((pUVar5->bEnableStreaming != false) &&
     (pUVar4 = (pUVar5->World).field0_0x0.DebugPtr, pUVar4 != (UWorld *)0x0)) {
    pAVar7 = UWorld::GetWorldSettings(pUVar4,false,true);
    cVar2 = (**(code **)(pAVar7->_padding_ + 0x780))(pAVar7);
    if (cVar2 != '\0') goto LAB_148a94ea0;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("WorldPartition->IsStreamingEnabled()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
                     ,0x14d,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FCellData *)(*pcVar1)();
    return pFVar8;
  }
LAB_148a94ea0:
  pFVar8 = TMapBase<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>_>
           ::Find(this_00,&param_1->CellGuid);
  return pFVar8;
}

// GetCellData @ 148a94ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCellData * __thiscall
UWorldPartitionHLODRuntimeSubsystem::GetCellData
          (UWorldPartitionHLODRuntimeSubsystem *this,UWorldPartitionRuntimeCell *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  UWorld *pUVar4;
  UWorldPartition *pUVar5;
  TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>
  *pTVar6;
  AWorldSettings *pAVar7;
  FCellData *pFVar8;
  TMapBase<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>_>
  *this_00;
  UWorldPartition *pUStackX_10;
  
  pUVar4 = (UWorld *)(**(code **)(param_1->_padding_ + 0x78))(&param_1->_padding_);
  pUVar5 = UWorld::GetWorldPartition(pUVar4);
  if (pUVar5 == (UWorldPartition *)0x0) {
    return (FCellData *)0x0;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUStackX_10 = pUVar5;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pTVar6 = TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
                   *)&this->WorldPartitionsHLODRuntimeData,
                  (TObjectPtr<UWorldPartition_const_>)&pUStackX_10);
  this_00 = (TMapBase<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>_>
             *)&pTVar6->field_0x8;
  if (pTVar6 == (TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>
                 *)0x0) {
    this_00 = (TMapBase<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>_>
               *)0x0;
  }
  if (this_00 ==
      (TMapBase<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>_>
       *)0x0) {
    return (FCellData *)0x0;
  }
  if ((pUVar5->bEnableStreaming != false) &&
     (pUVar4 = (pUVar5->World).field0_0x0.DebugPtr, pUVar4 != (UWorld *)0x0)) {
    pAVar7 = UWorld::GetWorldSettings(pUVar4,false,true);
    cVar2 = (**(code **)(pAVar7->_padding_ + 0x780))(pAVar7);
    if (cVar2 != '\0') goto LAB_148a94ea0;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("WorldPartition->IsStreamingEnabled()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
                     ,0x14d,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FCellData *)(*pcVar1)();
    return pFVar8;
  }
LAB_148a94ea0:
  pFVar8 = TMapBase<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData,0>_>
           ::Find(this_00,&param_1->CellGuid);
  return pFVar8;
}

// GetForEachHLODObjectInCellEvent @ 148a953b0

TMulticastDelegate<void___cdecl(UWorldPartitionRuntimeCell_const_*,TFunction<void___cdecl(IWorldPartitionHLODObject_*)>),FDefaultDelegateUserPolicy>
* __thiscall
UWorldPartitionHLODRuntimeSubsystem::GetForEachHLODObjectInCellEvent
          (UWorldPartitionHLODRuntimeSubsystem *this)

{
  return &this->ForEachHLODObjectInCellEvent;
}

// GetHLODObjectsForCell @ 148a95410

TArray<IWorldPartitionHLODObject_*,TSizedDefaultAllocator<32>_> * __thiscall
UWorldPartitionHLODRuntimeSubsystem::GetHLODObjectsForCell
          (UWorldPartitionHLODRuntimeSubsystem *this,UWorldPartitionRuntimeCell *param_1)

{
  FCellData *pFVar1;
  
  pFVar1 = GetCellData(this,param_1);
  if (pFVar1 != (FCellData *)0x0) {
    return &pFVar1->LoadedHLODs;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UWorldPartitionHLODRuntimeSubsystem::GetHLODObjectsForCell'::__l2::
             _dynamic_atexit_destructor_for__DummyArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &DummyArray;
}

// GetPrivateStaticClass @ 148a969a0

UClass * __cdecl UWorldPartitionHLODRuntimeSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionHLODRuntimeSubsystem.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionHLODRuntimeSubsystem",
               &Z_Registration_Info_UClass_UWorldPartitionHLODRuntimeSubsystem.InnerSingleton,
               StaticRegisterNativesUWorldPartitionHLODRuntimeSubsystem,0x2d0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionHLODRuntimeSubsystem>,
               InternalVTableHelperCtorCaller<UWorldPartitionHLODRuntimeSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionHLODRuntimeSubsystem.InnerSingleton;
}

// Initialize @ 148a99a00

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
UWorldPartitionHLODRuntimeSubsystem::Initialize
          (UWorldPartitionHLODRuntimeSubsystem *this,FSubsystemCollectionBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  USubsystem *pUVar3;
  UWorld *this_00;
  UWorld *pUVar4;
  FWorldSceneViewExtension *this_01;
  FAutoRegister local_res8 [16];
  UClass *local_res18;
  TRawPtrProxy<FHLODResourcesResidencySceneViewExtension> local_res20;
  undefined1 local_58 [16];
  FHLODResourcesResidencySceneViewExtension *local_48;
  FSharedReferencer<1> FStack_40;
  TSharedRef<FHLODResourcesResidencySceneViewExtension,1> local_38;
  TSharedRef<ISceneViewExtension,1> local_28;
  
  local_res18 = Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  pUVar3 = FSubsystemCollectionBase::InitializeDependency
                     (param_1,(TSubclassOf<USubsystem>)&local_res18);
  if (pUVar3 != (USubsystem *)0x0) {
    Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();
  }
  UWorldSubsystem::Initialize((UWorldSubsystem *)this,param_1);
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  bVar2 = UWorld::IsGameWorld(this_00);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("World->IsGameWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
                       ,0xc0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  TMulticastDelegateRegistration<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>::
  AddUObject<UWorldPartitionHLODRuntimeSubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>
              *)&pUVar4->OnWorldPartitionInitializedEvent,
             (UWorldPartitionHLODRuntimeSubsystem *)local_58,(pmf_abd9f46e)this);
  pUVar4 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  TMulticastDelegateRegistration<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>::
  AddUObject<UWorldPartitionHLODRuntimeSubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(UWorldPartition_*),FDefaultDelegateUserPolicy>
              *)&pUVar4->OnWorldPartitionUninitializedEvent,
             (UWorldPartitionHLODRuntimeSubsystem *)(local_58 + 8),(pmf_abd9f46e)this);
  bVar2 = ShouldPerformWarmup(this);
  this->bCachedShouldPerformWarmup = bVar2;
  this_01 = ::operator_new(0x30);
  if (this_01 == (FWorldSceneViewExtension *)0x0) {
    this_01 = (FWorldSceneViewExtension *)0x0;
  }
  else {
    FWorldSceneViewExtension::FWorldSceneViewExtension(this_01,local_res8,this_00);
    this_01->_padding_ = (longlong)&___7FHLODResourcesResidencySceneViewExtension__6B_;
    if (((this_01->_padding_ != 0) && (this_01->_padding_ != 0)) &&
       (0 < *(int *)(this_01->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_res20.Object = (FHLODResourcesResidencySceneViewExtension *)this_01;
  TSharedRef<FHLODResourcesResidencySceneViewExtension,1>::
  TSharedRef<FHLODResourcesResidencySceneViewExtension,1><FHLODResourcesResidencySceneViewExtension>
            (&local_38,&local_res20);
  local_28.Object = (ISceneViewExtension *)local_38.Object;
  local_28.SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSceneViewExtensions::RegisterExtension(&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  local_48 = local_38.Object;
  FStack_40.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->SceneViewExtension !=
      (TSharedPtr<FHLODResourcesResidencySceneViewExtension,1> *)&local_48) {
    (this->SceneViewExtension).Object = local_38.Object;
    local_48 = (FHLODResourcesResidencySceneViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SceneViewExtension).SharedReferenceCount,&FStack_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// IsHLODEnabled @ 148a9a130

bool __cdecl UWorldPartitionHLODRuntimeSubsystem::IsHLODEnabled(void)

{
  return WorldPartitionHLODEnabled;
}

// OnBeginRenderViews @ 148a9acf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UWorldPartitionHLODRuntimeSubsystem::OnBeginRenderViews
          (UWorldPartitionHLODRuntimeSubsystem *this,FSceneViewFamily *param_1)

{
  TMap<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,0>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  FSceneView *pFVar6;
  UStaticMesh *this_00;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  TConsoleVariableData<int> *pTVar12;
  TConsoleVariableData<int> *pTVar13;
  TConsoleVariableData<float> *pTVar14;
  longlong lVar15;
  bool bVar16;
  UClass *pUVar17;
  longlong lVar18;
  FStaticMeshRenderData *pFVar19;
  ULevel *this_01;
  UWorld *pUVar20;
  byte bVar21;
  ForElementType<FSetElementId> FVar22;
  uint uVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  FColor *pFVar26;
  uint *puVar27;
  int iVar28;
  uint uVar29;
  bool bVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  float fVar35;
  float fVar36;
  undefined1 auStackY_388 [32];
  undefined1 local_347;
  undefined1 local_346 [6];
  FSceneViewFamily *local_340;
  int local_338;
  int local_334;
  int local_330 [2];
  UStaticMesh *local_328;
  longlong local_320;
  TVector<double>_u_0 local_318;
  TVector<double>_u_0 local_300;
  longlong *local_2e8;
  undefined1 auStack_2e0 [16];
  uint uStack_2d0;
  int iStack_2cc;
  longlong local_2c8;
  TSet<TTuple<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState>,TDefaultMapHashableKeyFuncs<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,0>,FDefaultSetAllocator>
  *pTStack_2c0;
  TSet<TTuple<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState>,TDefaultMapHashableKeyFuncs<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,0>,FDefaultSetAllocator>
  *local_2b8;
  undefined2 local_2b0;
  int local_2a8;
  int local_2a4;
  longlong local_2a0;
  UStaticMesh **local_298;
  FResources *local_290;
  FResources **local_288;
  longlong *local_280;
  longlong *local_278;
  int iStack_270;
  uint uStack_26c;
  TBitArray<FDefaultBitArrayAllocator> *local_268;
  undefined4 uStack_260;
  uint uStack_25c;
  int local_258;
  undefined4 uStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  longlong *local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_240;
  undefined8 uStack_220;
  TVector4<double>_u_0 local_218;
  double local_1e8;
  undefined4 local_1dc;
  undefined1 local_1d8 [32];
  longlong local_1b8;
  TSet<TTuple<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState>,TDefaultMapHashableKeyFuncs<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,0>,FDefaultSetAllocator>
  *pTStack_1b0;
  TSet<TTuple<Nanite::FResources_*,int>,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>,FDefaultSetAllocator>
  local_1a8;
  undefined1 local_158 [32];
  uint *local_138;
  uint local_130;
  int local_124;
  void *local_118;
  undefined4 local_110;
  TSet<TTuple<UMaterialInterface_*,float>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>,FDefaultSetAllocator>
  local_108;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_388;
  bVar30 = -1 < CpuChannel->Enabled;
  local_340 = param_1;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId939,
               "UWorldPartitionHLODRuntimeSubsystem::OnBeginRenderViews",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
               ,0x3ab);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId939);
  }
  pTVar13 = CVarHLODWarmupNanite.Ref;
  local_108.Elements._0_8_ = 0;
  local_108.Elements._8_8_ = 0;
  local_108.Elements._32_8_ = 0;
  local_108.Elements._40_4_ = 0;
  local_108.Elements._44_4_ = 0x80;
  local_108.Elements._48_4_ = 0xffffffff;
  local_108.Elements._52_4_ = 0;
  local_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_108.HashSize = 0;
  local_1a8.Elements._0_8_ = 0;
  local_1a8.Elements._8_8_ = 0;
  local_1a8.Elements._32_8_ = 0;
  local_1a8.Elements._40_4_ = 0;
  local_1a8.Elements._44_4_ = 0x80;
  local_1a8.Elements._48_4_ = 0xffffffff;
  local_1a8.Elements._52_4_ = 0;
  local_1a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1a8.HashSize = 0;
  bVar16 = IsInParallelGameThread();
  if (((!bVar16) && (bVar16 = IsInGameThread(), !bVar16)) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar12 = CVarHLODWarmupVT.Ref;
  local_334 = pTVar13->ShadowedValue[0];
  bVar16 = IsInParallelGameThread();
  if (((!bVar16) && (bVar16 = IsInGameThread(), !bVar16)) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar4 = pTVar12->ShadowedValue[0];
  pTVar1 = &this->HLODObjectsToWarmup;
  TSet<TTuple<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState>,TDefaultMapHashableKeyFuncs<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_1d8,
             (TSet<TTuple<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState>,TDefaultMapHashableKeyFuncs<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,0>,FDefaultSetAllocator>
              *)pTVar1);
  fVar11 = __real_3f000000;
  dVar10 = __real_3fe0000000000000;
  dVar9 = __real_3ff0000000000000;
  local_2b0 = 0;
  stack0xfffffffffffffd28 = local_1d8._16_16_;
  local_2e8 = (longlong *)local_1d8._0_8_;
  auStack_2e0._0_8_ = local_1d8._8_8_;
  local_2c8 = local_1b8;
  pTStack_2c0 = pTStack_1b0;
  iVar24 = local_1d8._28_4_;
  local_2b8 = (TSet<TTuple<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState>,TDefaultMapHashableKeyFuncs<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,0>,FDefaultSetAllocator>
               *)pTVar1;
  if (iVar24 < *(int *)(local_1d8._16_8_ + 0x18)) {
    do {
      local_2a0 = (longlong)iVar24 * 0x50;
      local_320 = *local_2e8;
      plVar5 = *(longlong **)(local_2a0 + local_320);
      local_318._s_0.X =
           (*(double *)(local_2a0 + 0x28 + local_320) - *(double *)(local_2a0 + 0x10 + local_320)) *
           dVar10;
      local_318._s_0.Y =
           (*(double *)(local_2a0 + 0x30 + local_320) - *(double *)(local_2a0 + 0x18 + local_320)) *
           dVar10;
      local_318._s_0.Z =
           (*(double *)(local_2a0 + 0x38 + local_320) - *(double *)(local_2a0 + 0x20 + local_320)) *
           dVar10;
      dVar34 = local_318._s_0.Y + *(double *)(local_2a0 + 0x18 + local_320);
      local_300._s_0.Z = local_318._s_0.Z + *(double *)(local_2a0 + 0x20 + local_320);
      local_300._8_4_ = SUB84(dVar34,0);
      local_300._s_0.X = local_318._s_0.X + *(double *)(local_2a0 + 0x10 + local_320);
      local_300._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      pFVar25 = (local_340->Views).AllocatorInstance.Data;
      iVar24 = (local_340->Views).ArrayNum;
      pFVar2 = pFVar25 + (longlong)iVar24 * 8;
      fVar36 = 0.0;
      local_280 = plVar5;
      local_1e8 = local_300._s_0.Z;
      while( true ) {
        if ((local_340->Views).ArrayNum != iVar24) {
          local_347 = 0;
          `TCheckedPointerIterator<FSceneView_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_347);
        }
        if (pFVar25 == pFVar2) break;
        pFVar6 = *(FSceneView **)pFVar25;
        bVar16 = FConvexVolume::IntersectBox
                           (&pFVar6->ViewFrustum,(TVector<double> *)&local_300._s_0,
                            (TVector<double> *)&local_318._s_0);
        fVar31 = fVar36;
        if (bVar16) {
          if (iVar4 == 0) goto LAB_148a9b127;
          local_218._s_0.X = local_300._s_0.X;
          local_218._s_0.Y = local_300._s_0.Y;
          local_218._s_0.Z = local_300._s_0.Z;
          auVar32._0_8_ = local_318._s_0.Y * local_318._s_0.Y;
          auVar32._8_8_ = 0;
          local_218._s_0.W = dVar9;
          auVar33._8_8_ = 0;
          auVar33._0_8_ =
               local_318._s_0.X * local_318._s_0.X + auVar32._0_8_ +
               local_318._s_0.Z * local_318._s_0.Z;
          auVar33 = sqrtpd(auVar32,auVar33);
          fVar31 = ComputeBoundsScreenSize
                             ((TVector4<double> *)&local_218._s_0,(float)auVar33._0_8_,pFVar6);
          fVar31 = (fVar31 + fVar31) * (pFVar6->ViewMatrices).ScreenScale;
          if (fVar31 <= fVar36) {
            fVar31 = fVar36;
          }
        }
        pFVar25 = pFVar25 + 8;
        fVar36 = fVar31;
      }
      if ((float)(0.0 < fVar36) != 0.0) {
LAB_148a9b127:
        (**(code **)(*plVar5 + 0x20))(plVar5,local_158);
        uVar23 = local_130;
        iStack_270 = 0;
        local_258 = 0;
        uStack_26c = 1;
        uStack_25c = 0;
        if (local_130 != 0) {
          puVar27 = (uint *)(local_158 + 0x10);
          if (local_138 != (uint *)0x0) {
            puVar27 = local_138;
          }
          uStack_26c = *puVar27;
          while (uStack_26c == 0) {
            iStack_270 = iStack_270 + 1;
            local_258 = local_258 + 0x20;
            uStack_26c = 1;
            uStack_25c = local_130;
            if ((int)((local_130 - 1) + ((int)(local_130 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_270)
            goto LAB_148a9b1c0;
            uStack_26c = puVar27[iStack_270];
          }
          uStack_26c = ~(uStack_26c - 1) & uStack_26c;
          uVar3 = (ulonglong)uStack_26c * 2 + 1;
          lVar7 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          local_2a8 = (int)lVar7;
          uStack_25c = local_2a8 + -1 + local_258;
          if ((int)local_130 < (int)uStack_25c) {
            uStack_25c = local_130;
          }
        }
LAB_148a9b1c0:
        local_278 = (longlong *)local_158;
        uStack_254 = local_1dc;
        local_268 = (TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10);
        uVar29 = local_130 & 0xffffffe0;
        iStack_250 = local_158._8_4_ - local_124;
        TStack_240._padding_ = CONCAT44(uStack_26c,iStack_270);
        uStack_260 = 0xffffffff;
        TStack_240.CurrentBitIndex = uStack_25c;
        TStack_240.UnvisitedBitMask = 0xffffffff;
        iVar24 = (int)local_130 >> 5;
        TStack_240._28_4_ = local_1dc;
        TStack_240.BaseBitIndex = local_258;
        uStack_220 = CONCAT44(uStack_24c,iStack_250);
        bVar21 = (byte)local_130;
        local_248 = local_278;
        TStack_240.Array = local_268;
        if (((int)local_130 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar15 = local_2a0;
        lVar7 = local_320;
        if (uVar23 != local_130) {
          puVar27 = (uint *)(local_158 + 0x10);
          if (local_138 != (uint *)0x0) {
            puVar27 = local_138;
          }
          uVar23 = -1 << (bVar21 & 0x1f) & puVar27[iVar24];
          while (uVar23 == 0) {
            iVar24 = iVar24 + 1;
            uVar29 = uVar29 + 0x20;
            uVar23 = local_130;
            if ((int)(((int)(local_130 - 1) >> 0x1f & 0x1fU) + (local_130 - 1)) >> 5 < iVar24)
            goto LAB_148a9b2e9;
            uVar23 = puVar27[iVar24];
          }
          uVar3 = (ulonglong)(~(uVar23 - 1) & uVar23) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_2a4 = (int)lVar18;
          uVar23 = local_2a4 + -1 + uVar29;
          if ((int)local_130 < (int)uVar23) {
            uVar23 = local_130;
          }
        }
LAB_148a9b2e9:
        while( true ) {
          plVar5 = local_248;
          if ((int)local_248[1] - *(int *)((longlong)local_248 + 0x34) != (int)uStack_220) {
            local_346[0] = 0;
            `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_346);
          }
          if (((TStack_240.CurrentBitIndex == uVar23) &&
              (TStack_240.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10))) &&
             (plVar5 == (longlong *)local_158)) break;
          this_00 = *(UStaticMesh **)(*plVar5 + (longlong)TStack_240.CurrentBitIndex * 0x10);
          if (this_00 != (UStaticMesh *)0x0) {
            pUVar17 = Z_Construct_UClass_UMaterialInterface_NoRegister();
            pTVar14 = CVarHLODWarmupVTScaleFactor.Ref;
            iVar24 = (int)pUVar17->_padding_;
            if (((iVar24 <= *(int *)(this_00->_padding_ + 0x38)) &&
                ((longlong *)
                 *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar24 * 8)
                 == &pUVar17->_padding_)) && (iVar4 != 0)) {
              local_328 = this_00;
              bVar16 = IsInParallelGameThread();
              if ((bVar16) || (bVar16 = IsInGameThread(), bVar16)) {
                lVar18 = 0;
              }
              else {
                lVar18 = 4;
              }
              pTVar13 = CVarHLODWarmupVTSizeClamp.Ref;
              fVar31 = fVar36 * *(float *)((longlong)pTVar14->ShadowedValue + lVar18);
              bVar16 = IsInParallelGameThread();
              if ((bVar16) || (bVar16 = IsInGameThread(), bVar16)) {
                lVar18 = 0;
              }
              else {
                lVar18 = 4;
              }
              uVar29 = ((uint)((ulonglong)local_328 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_328 >> 4)) * -0x7a143595;
              fVar35 = (float)*(int *)((longlong)pTVar13->ShadowedValue + lVar18);
              if (fVar31 <= fVar35) {
                fVar35 = fVar31;
              }
              uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
              uVar29 = uVar29 >> 0x10 ^ uVar29;
              if (local_108.Elements._8_4_ != local_108.Elements._52_4_) {
                FVar22 = (ForElementType<FSetElementId>)&local_108.Hash;
                if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar22 = local_108.Hash.SecondaryData;
                }
                for (iVar24 = *(int *)((longlong)FVar22 +
                                      (ulonglong)(local_108.HashSize - 1U & uVar29) * 4);
                    iVar24 != -1;
                    iVar24 = *(int *)(local_108.Elements._0_8_ + 0x10 + (longlong)iVar24 * 0x18)) {
                  if (*(UStaticMesh **)(local_108.Elements._0_8_ + (longlong)iVar24 * 0x18) ==
                      local_328) {
                    if ((iVar24 != -1) &&
                       (lVar18 = local_108.Elements._0_8_ + (longlong)iVar24 * 0x18, lVar18 != 0))
                    goto LAB_148a9b4de;
                    break;
                  }
                }
              }
              local_298 = &local_328;
              TSet<TTuple<UMaterialInterface_*,float>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<UMaterialInterface_*_const_&>_>
                        (&local_108,(uint)&local_338,
                         (TKeyInitializer<UMaterialInterface_*_const_&> *)(ulonglong)uVar29,
                         (bool *)&local_298);
              lVar18 = local_108.Elements._0_8_ + (longlong)local_338 * 0x18;
LAB_148a9b4de:
              if (fVar35 <= *(float *)(lVar18 + 8)) {
                fVar35 = *(float *)(lVar18 + 8);
              }
              *(float *)(lVar18 + 8) = fVar35;
            }
            pUVar17 = Z_Construct_UClass_UStaticMesh_NoRegister();
            pTVar13 = CVarHLODWarmupNumFrames.Ref;
            iVar24 = (int)pUVar17->_padding_;
            if (((iVar24 <= *(int *)(this_00->_padding_ + 0x38)) &&
                ((longlong *)
                 *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar24 * 8)
                 == &pUVar17->_padding_)) && (local_334 != 0)) {
              bVar16 = IsInParallelGameThread();
              if (((!bVar16) && (bVar16 = IsInGameThread(), !bVar16)) &&
                 (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<6409875433831007945>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                      ,0x6c9,"GetShadowIndex() == 0"), bVar16)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pTVar12 = CVarHLODWarmupNumFrames.Ref;
              iVar24 = *(int *)(lVar15 + 0xc + lVar7);
              if (iVar24 == pTVar13->ShadowedValue[0]) {
                bVar16 = IsInParallelGameThread();
                if (((!bVar16) && (bVar16 = IsInGameThread(), !bVar16)) &&
                   (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<6409875433831007945>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                        ,0x6c9,"GetShadowIndex() == 0"), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                PrepareNaniteRequests
                          ((TMap<Nanite::FResources_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>_>
                            *)&local_1a8,this_00,pTVar12->ShadowedValue[0]);
              }
              else if ((iVar24 == 0) && (bVar16 = UStaticMesh::HasValidNaniteData(this_00), bVar16))
              {
                pFVar19 = UStaticMesh::GetRenderData(this_00);
                local_290 = (pFVar19->NaniteResourcesPtr).Ptr;
                uVar29 = ((uint)((ulonglong)local_290 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)local_290 >> 4)) * -0x7a143595;
                uVar29 = (uVar29 >> 0xd ^ uVar29) * -0x3d4d51cb;
                uVar29 = uVar29 >> 0x10 ^ uVar29;
                if (local_1a8.Elements._8_4_ != local_1a8.Elements._52_4_) {
                  FVar22 = (ForElementType<FSetElementId>)&local_1a8.Hash;
                  if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                    FVar22 = local_1a8.Hash.SecondaryData;
                  }
                  for (iVar24 = *(int *)((longlong)FVar22 +
                                        (ulonglong)(local_1a8.HashSize - 1U & uVar29) * 4);
                      iVar24 != -1;
                      iVar24 = *(int *)(local_1a8.Elements._0_8_ + 0x10 + (longlong)iVar24 * 0x18))
                  {
                    if (*(FResources **)(local_1a8.Elements._0_8_ + (longlong)iVar24 * 0x18) ==
                        local_290) {
                      if ((iVar24 != -1) &&
                         (lVar18 = local_1a8.Elements._0_8_ + (longlong)iVar24 * 0x18, lVar18 != 0))
                      goto LAB_148a9b6cd;
                      break;
                    }
                  }
                }
                local_288 = &local_290;
                TSet<TTuple<Nanite::FResources_*,int>,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>,FDefaultSetAllocator>
                ::EmplaceByHash<TKeyInitializer<Nanite::FResources_*_&&>_>
                          (&local_1a8,(uint)local_330,
                           (TKeyInitializer<Nanite::FResources_*_&&> *)(ulonglong)uVar29,
                           (bool *)&local_288);
                lVar18 = local_1a8.Elements._0_8_ + (longlong)local_330[0] * 0x18;
LAB_148a9b6cd:
                *(undefined4 *)(lVar18 + 8) = 1;
              }
            }
          }
          TStack_240.UnvisitedBitMask = TStack_240.UnvisitedBitMask & ~TStack_240._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_240);
        }
        local_110 = 0;
        if (local_118 != (void *)0x0) {
          FMemory::Free(local_118);
        }
        TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_158);
        pTVar13 = CVarHLODWarmupDebugDraw.Ref;
        bVar16 = IsInParallelGameThread();
        if ((bVar16) || (bVar16 = IsInGameThread(), bVar16)) {
          lVar18 = 0;
        }
        else {
          lVar18 = 4;
        }
        if (*(int *)((longlong)pTVar13->ShadowedValue + lVar18) != 0) {
          pFVar26 = &FColor::Green;
          if (*(int *)(lVar15 + 0xc + lVar7) != 0) {
            pFVar26 = &FColor::Yellow;
          }
          this_01 = (ULevel *)(**(code **)(*local_280 + 8))();
          pUVar20 = ULevel::GetWorld(this_01);
          DrawDebugBox(pUVar20,(TVector<double> *)&local_300._s_0,(TVector<double> *)&local_318._s_0
                       ,pFVar26,false,fVar11,'\0',0.0);
        }
      }
      iVar28 = 1;
      uStack_2d0 = uStack_2d0 & ~auStack_2e0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2e0);
      iVar24 = iStack_2cc;
    } while (iStack_2cc < *(int *)(auStack_2e0._8_8_ + 0x18));
    param_1 = local_340;
    if (((char)local_2b0 != '\0') && (local_2b0._1_1_ != '\0')) {
      uVar23 = *(int *)&(local_2b8->Elements).field_0x8 - *(int *)&(local_2b8->Elements).field_0x34;
      if (3 < uVar23) {
        uVar3 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar28 = 1 << ((byte)lVar7 & 0x1f);
      }
      if (((0 < (int)uVar23) && (local_2b8->HashSize < iVar28)) || (iVar28 < local_2b8->HashSize)) {
        local_2b8->HashSize = iVar28;
        TSet<TTuple<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState>,TDefaultMapHashableKeyFuncs<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,0>,FDefaultSetAllocator>
        ::Rehash(local_2b8);
        param_1 = local_340;
      }
    }
  }
  MakeHLODRenderResourcesResident
            ((TMap<UMaterialInterface_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,float,0>_>
              *)&local_108,
             (TMap<Nanite::FResources_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Nanite::FResources_*,int,0>_>
              *)&local_1a8,param_1);
  local_1a8.HashSize = 0;
  if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<Nanite::FResources_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Nanite::FResources_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1a8.Elements);
  local_108.HashSize = 0;
  if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_108.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_108.Elements);
  if (bVar30) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnCVarsChanged @ 148a9b920

void __thiscall
UWorldPartitionHLODRuntimeSubsystem::OnCVarsChanged(UWorldPartitionHLODRuntimeSubsystem *this)

{
  bool bVar1;
  
  bVar1 = ShouldPerformWarmup(this);
  this->bCachedShouldPerformWarmup = bVar1;
  return;
}

// OnCellHidden @ 148a9bb70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWorldPartitionHLODRuntimeSubsystem::OnCellHidden
          (UWorldPartitionHLODRuntimeSubsystem *this,UWorldPartitionRuntimeCell *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IWorldPartitionHLODObject *pIVar3;
  FCellData *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res18 [8];
  FString local_28;
  
  pFVar4 = GetCellData(this,param_1);
  if ((pFVar4 != (FCellData *)0x0) &&
     (iVar2 = (pFVar4->LoadedHLODs).ArrayNum, pFVar4->bIsCellVisible = false, iVar2 != 0)) {
    if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      FGuid::AppendString(&param_1->CellGuid,&local_28,Digits);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = (pFVar4->LoadedHLODs).AllocatorInstance.Data;
    iVar2 = (pFVar4->LoadedHLODs).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pFVar4->LoadedHLODs).ArrayNum != iVar2) {
        `TCheckedPointerIterator<IWorldPartitionHLODObject_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar5 == pFVar1) break;
      pIVar3 = *(IWorldPartitionHLODObject **)pFVar5;
      if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,&local_28);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,WorldPartitionHLODEnabled);
      RemoveHLODObjectFromWarmup(this,pIVar3);
      pFVar5 = pFVar5 + 8;
    }
  }
  return;
}

// OnCellShown @ 148a9bee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWorldPartitionHLODRuntimeSubsystem::OnCellShown
          (UWorldPartitionHLODRuntimeSubsystem *this,UWorldPartitionRuntimeCell *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FCellData *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res18 [16];
  FString local_28;
  
  pFVar4 = GetCellData(this,param_1);
  if ((pFVar4 != (FCellData *)0x0) &&
     (iVar2 = (pFVar4->LoadedHLODs).ArrayNum, pFVar4->bIsCellVisible = true, iVar2 != 0)) {
    if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      FGuid::AppendString(&param_1->CellGuid,&local_28,Digits);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = (pFVar4->LoadedHLODs).AllocatorInstance.Data;
    iVar2 = (pFVar4->LoadedHLODs).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pFVar4->LoadedHLODs).ArrayNum != iVar2) {
        `TCheckedPointerIterator<IWorldPartitionHLODObject_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar5 == pFVar1) break;
      plVar3 = *(longlong **)pFVar5;
      if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_28);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      pFVar5 = pFVar5 + 8;
    }
  }
  return;
}

// OnCleanupLevel @ 148a9c020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UWorldPartitionHLODRuntimeSubsystem::OnCleanupLevel
          (UWorldPartitionHLODRuntimeSubsystem *this,ULevel *param_1)

{
  TMap<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState,0>_>
  *this_00;
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  FSetElementId FVar12;
  uint *puVar13;
  undefined1 auStack_158 [32];
  undefined1 local_138 [4];
  int local_134;
  int local_130;
  longlong *local_128;
  int iStack_120;
  uint uStack_11c;
  TBitArray<FDefaultBitArrayAllocator> *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  int local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  int local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  FDelegateHandle local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  this_00 = &this->HLODLevelWarmupStates;
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->HLODLevelWarmupStates).field_0x8 !=
      *(int *)&(this->HLODLevelWarmupStates).field_0x34) {
    puVar8 = *(undefined1 **)&(this->HLODLevelWarmupStates).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->HLODLevelWarmupStates).field_0x38;
    }
    FVar12.Index = *(int *)(puVar8 + (ulonglong)
                                     (*(int *)&(this->HLODLevelWarmupStates).field_0x48 - 1U &
                                     (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (FVar12.Index != -1) {
      do {
        if (*(ULevel **)((longlong)FVar12.Index * 0x68 + *(longlong *)&this_00->field_0x0) ==
            param_1) {
          if (FVar12.Index != -1) goto LAB_148a9c0f6;
          goto LAB_148a9c0d0;
        }
        FVar12.Index = *(int *)((longlong)FVar12.Index * 0x68 + 0x60 +
                               *(longlong *)&this_00->field_0x0);
      } while (FVar12.Index != -1);
    }
  }
  FVar12.Index = -1;
LAB_148a9c0d0:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("PairId.IsValidId()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x556,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_148a9c0f6:
  lVar10 = (longlong)FVar12.Index * 0x68 + *(longlong *)&this_00->field_0x0;
  TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
  ::
  TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
            ((TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
              *)local_a8,
             (TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
              *)(lVar10 + 8));
  local_58.ID = *(ulong64 *)(lVar10 + 0x58);
  TSet<TTuple<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState>,TDefaultMapHashableKeyFuncs<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState>,TDefaultMapHashableKeyFuncs<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState,0>,FDefaultSetAllocator>
            *)this_00,FVar12);
  uVar6 = local_80;
  iStack_120 = 0;
  local_108 = 0;
  uStack_11c = 1;
  uStack_10c = 0;
  if (local_80 != 0) {
    puVar13 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar13 = local_88;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar10 = (longlong)iStack_120;
      local_108 = local_108 + 0x20;
      iStack_120 = iStack_120 + 1;
      uStack_10c = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_120)
      goto LAB_148a9c1a1;
      uVar11 = puVar13[lVar10 + 1];
    }
    uStack_11c = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_11c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_134 = (int)lVar10;
    uStack_10c = local_134 + -1 + local_108;
    if ((int)local_80 < (int)uStack_10c) {
      uStack_10c = local_80;
    }
  }
LAB_148a9c1a1:
  local_128 = (longlong *)local_a8;
  uStack_104 = local_ac;
  local_118 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  uVar11 = local_80 & 0xffffffe0;
  iStack_100 = local_a8._8_4_ - local_74;
  uStack_110 = 0xffffffff;
  TStack_f0.CurrentBitIndex = uStack_10c;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  TStack_f0._padding_ = CONCAT44(uStack_11c,iStack_120);
  iVar9 = (int)local_80 >> 5;
  TStack_f0._28_4_ = local_ac;
  TStack_f0.BaseBitIndex = local_108;
  uStack_d0 = CONCAT44(uStack_fc,iStack_100);
  bVar5 = (byte)local_80;
  local_f8 = local_128;
  TStack_f0.Array = local_118;
  if (((int)local_80 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar6 != local_80) {
    puVar13 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar13 = local_88;
    }
    uVar6 = -1 << (bVar5 & 0x1f) & puVar13[iVar9];
    while (uVar6 == 0) {
      lVar10 = (longlong)iVar9;
      uVar11 = uVar11 + 0x20;
      iVar9 = iVar9 + 1;
      uVar6 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_148a9c2b1;
      uVar6 = puVar13[lVar10 + 1];
    }
    uVar1 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_130 = (int)lVar10;
    uVar6 = local_130 + -1 + uVar11;
    if ((int)local_80 < (int)uVar6) {
      uVar6 = local_80;
    }
  }
LAB_148a9c2b1:
  do {
    plVar3 = local_f8;
    if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
      local_138[0] = 0;
      `TSparseArray<TSparseSetElement<IWorldPartitionHLODObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_138);
    }
    if (((TStack_f0.CurrentBitIndex == uVar6) &&
        (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (plVar3 == (longlong *)local_a8)) {
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &param_1->OnCleanupLevel,local_58);
      local_60 = 0;
      if (local_68 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_68);
      }
      TSparseArray<TSparseSetElement<IWorldPartitionHLODObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<IWorldPartitionHLODObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<IWorldPartitionHLODObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      return;
    }
    uVar1 = *(ulonglong *)(*plVar3 + (longlong)TStack_f0.CurrentBitIndex * 0x10);
    uVar11 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    if (*(int *)&(this->HLODObjectsToWarmup).field_0x8 !=
        *(int *)&(this->HLODObjectsToWarmup).field_0x34) {
      puVar8 = *(undefined1 **)&(this->HLODObjectsToWarmup).field_0x40;
      puVar7 = &(this->HLODObjectsToWarmup).field_0x38;
      if (puVar8 != (undefined1 *)0x0) {
        puVar7 = puVar8;
      }
      FVar12.Index = *(int *)(puVar7 + (ulonglong)
                                       (*(int *)&(this->HLODObjectsToWarmup).field_0x48 - 1U &
                                       (uVar11 >> 0x10 ^ uVar11)) * 4);
      if (FVar12.Index != -1) {
        do {
          if (*(ulonglong *)
               (*(longlong *)&this->HLODObjectsToWarmup + (longlong)FVar12.Index * 0x50) == uVar1) {
            if (FVar12.Index != -1) goto LAB_148a9c3c4;
            goto LAB_148a9c39e;
          }
          FVar12.Index = *(int *)(*(longlong *)&this->HLODObjectsToWarmup + 0x48 +
                                 (longlong)FVar12.Index * 0x50);
        } while (FVar12.Index != -1);
      }
    }
    FVar12.Index = -1;
LAB_148a9c39e:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PairId.IsValidId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x556,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_148a9c3c4:
    TSet<TTuple<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState>,TDefaultMapHashableKeyFuncs<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,0>,FDefaultSetAllocator>
    ::Remove((TSet<TTuple<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState>,TDefaultMapHashableKeyFuncs<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,0>,FDefaultSetAllocator>
              *)&this->HLODObjectsToWarmup,FVar12);
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
  } while( true );
}

// OnExternalStreamingObjectInjected @ 148a9c470

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
UWorldPartitionHLODRuntimeSubsystem::OnExternalStreamingObjectInjected
          (UWorldPartitionHLODRuntimeSubsystem *this,
          URuntimeHashExternalStreamingObjectBase *param_1)

{
  int iVar1;
  UWorld *this_00;
  UClass *pUVar2;
  TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>
  *pTVar3;
  UWorldPartition *local_res8;
  code *local_18;
  UWorldPartition **local_10;
  
  this_00 = (UWorld *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1->OuterWorld);
  if (this_00 != (UWorld *)0x0) {
    pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_148a9c4be;
  }
  this_00 = (UWorld *)0x0;
LAB_148a9c4be:
  local_res8 = UWorld::GetWorldPartition(this_00);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UWorldPartition *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UWorldPartition *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pTVar3 = TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
                   *)&this->WorldPartitionsHLODRuntimeData,
                  (TObjectPtr<UWorldPartition_const_>)&local_res8);
  if ((pTVar3 != (TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>
                  *)0x0) &&
     (local_res8 = (UWorldPartition *)&pTVar3->field_0x8, local_res8 != (UWorldPartition *)0x0)) {
    local_10 = &local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UWorldPartitionHLODRuntimeSubsystem::OnExternalStreamingObjectInjected'::__l5::<lambda_1>,void,UWorldPartitionRuntimeCell_&>
               ::Call;
    URuntimeHashExternalStreamingObjectBase::ForEachStreamingCells
              (param_1,(TFunctionRef<void___cdecl(UWorldPartitionRuntimeCell_&)> *)&local_18);
  }
  return;
}

// OnExternalStreamingObjectRemoved @ 148a9c560

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
UWorldPartitionHLODRuntimeSubsystem::OnExternalStreamingObjectRemoved
          (UWorldPartitionHLODRuntimeSubsystem *this,
          URuntimeHashExternalStreamingObjectBase *param_1)

{
  int iVar1;
  UWorld *this_00;
  UClass *pUVar2;
  TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>
  *pTVar3;
  UWorldPartition *local_res8;
  code *local_18;
  UWorldPartition **local_10;
  
  this_00 = (UWorld *)
            TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1->OuterWorld);
  if (this_00 != (UWorld *)0x0) {
    pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_148a9c5ae;
  }
  this_00 = (UWorld *)0x0;
LAB_148a9c5ae:
  local_res8 = UWorld::GetWorldPartition(this_00);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UWorldPartition *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UWorldPartition *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pTVar3 = TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
                   *)&this->WorldPartitionsHLODRuntimeData,
                  (TObjectPtr<UWorldPartition_const_>)&local_res8);
  if ((pTVar3 != (TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>
                  *)0x0) &&
     (local_res8 = (UWorldPartition *)&pTVar3->field_0x8, local_res8 != (UWorldPartition *)0x0)) {
    local_10 = &local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UWorldPartitionHLODRuntimeSubsystem::OnExternalStreamingObjectRemoved'::__l5::<lambda_1>,void,UWorldPartitionRuntimeCell_&>
               ::Call;
    URuntimeHashExternalStreamingObjectBase::ForEachStreamingCells
              (param_1,(TFunctionRef<void___cdecl(UWorldPartitionRuntimeCell_&)> *)&local_18);
  }
  return;
}

// OnWorldPartitionInitialized @ 148a9c750

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
UWorldPartitionHLODRuntimeSubsystem::OnWorldPartitionInitialized
          (UWorldPartitionHLODRuntimeSubsystem *this,UWorldPartition *param_1)

{
  UWorld *this_00;
  longlong lVar1;
  UWorldPartitionRuntimeHash *pUVar2;
  code *pcVar3;
  UWorldPartition *pUVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  AWorldSettings *pAVar8;
  uint uVar9;
  undefined1 auStackY_108 [32];
  UWorldPartition *local_d8;
  TPairInitializer<TObjectPtr<UWorldPartition>_&&,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData_&&>
  local_d0;
  UWorldPartition *local_c0;
  UWorldPartition **local_b8;
  undefined1 *local_b0;
  code *local_a8;
  UWorldPartitionHLODRuntimeSubsystem **local_a0;
  UWorldPartitionHLODRuntimeSubsystem *local_98;
  longlong local_90;
  UWorldPartition **local_88;
  undefined1 local_78 [24];
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  void *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  if (((param_1 != (UWorldPartition *)0x0) &&
      (local_28 = __security_cookie.value ^ (ulonglong)auStackY_108,
      param_1->bEnableStreaming != false)) &&
     (this_00 = (param_1->World).field0_0x0.DebugPtr, this_00 != (UWorld *)0x0)) {
    local_d8 = param_1;
    pAVar8 = UWorld::GetWorldSettings(this_00,false,true);
    cVar5 = (**(code **)(pAVar8->_padding_ + 0x780))(pAVar8);
    pUVar4 = local_d8;
    if (cVar5 != '\0') {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_d8 != (UWorldPartition *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_d8);
      }
      local_d0.Value = (FWorldPartitionHLODRuntimeData *)pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar4 != (UWorldPartition *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 != (UWorldPartition *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
      }
      uVar9 = ((uint)((ulonglong)pUVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar4 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      iVar7 = TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TObjectPtr<UWorldPartition_const_>_>
                        ((TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
                          *)&this->WorldPartitionsHLODRuntimeData,uVar9 >> 0x10 ^ uVar9,
                         (TObjectPtr<UWorldPartition_const_> *)&local_d0.Value);
      if ((iVar7 != -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!WorldPartitionsHLODRuntimeData.Contains(InWorldPartition)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
                             ,0xd6,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_78._16_8_ = 0;
      uStack_60 = 0;
      local_40 = 0;
      local_30 = 0;
      local_78._0_8_ = (FScriptContainerElement *)0x0;
      local_78._8_8_ = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      local_4c = 0x80;
      local_48 = 0xffffffff;
      local_44 = 0;
      local_38 = (void *)0x0;
      local_c0 = local_d8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_d8 != (UWorldPartition *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_d8);
      }
      local_b8 = &local_c0;
      local_b0 = local_78;
      TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TObjectPtr<UWorldPartition>_&&,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData_&&>_>
                ((TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
                  *)&this->WorldPartitionsHLODRuntimeData,&local_d0,(bool *)&local_b8);
      lVar1 = *(longlong *)&this->WorldPartitionsHLODRuntimeData;
      local_30 = local_30 & 0xffffffff00000000;
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_78,0,local_78._8_4_);
      iVar7 = SUB84(local_78._8_8_,4);
      local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
      if (iVar7 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
      }
      local_44 = 0;
      local_50 = 0;
      local_48 = 0xffffffff;
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
      if ((local_d8 != (UWorldPartition *)0x0) &&
         (pUVar2 = (local_d8->RuntimeHash).field0_0x0.DebugPtr,
         pUVar2 != (UWorldPartitionRuntimeHash *)0x0)) {
        local_88 = &local_d8;
        local_a0 = &local_98;
        local_a8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UWorldPartitionHLODRuntimeSubsystem::OnWorldPartitionInitialized'::__l15::<lambda_1>,bool,UWorldPartitionRuntimeCell_const_*>
                   ::Call;
        local_98 = this;
        local_90 = lVar1 + (longlong)(int)local_d0.Key * 0x60 + 8;
        (**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2,&local_a8);
      }
    }
  }
  return;
}

// OnWorldPartitionUninitialized @ 148a9ca00

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
UWorldPartitionHLODRuntimeSubsystem::OnWorldPartitionUninitialized
          (UWorldPartitionHLODRuntimeSubsystem *this,UWorldPartition *param_1)

{
  TMap<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>_>
  *this_00;
  uint uVar1;
  UWorld *this_01;
  UWorldPartitionRuntimeHash *pUVar2;
  code *pcVar3;
  UWorldPartition *pUVar4;
  longlong *plVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  AWorldSettings *pAVar9;
  TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>
  *pTVar10;
  ulong64 uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar15;
  undefined1 *puVar16;
  int iVar17;
  TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
  *this_02;
  uint uVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  UWorldPartition *pUVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  uint local_res18 [2];
  undefined1 local_res20 [8];
  uint local_158;
  FGuid local_150;
  int local_140;
  uint local_13c;
  UWorldPartition *local_138;
  FString local_130;
  int local_120;
  undefined1 local_11c [4];
  TObjectPtr<UWorldPartition_const_>_u_0 local_118;
  FGuid *local_110;
  longlong *local_108;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  longlong *local_f8;
  TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
  *local_f0;
  longlong *local_e8;
  TObjectPtr<UWorldPartition_const_>_u_0 local_e0;
  undefined1 *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  code *local_78;
  longlong **local_70;
  void *local_68 [5];
  undefined4 local_3c;
  
  if (((param_1 != (UWorldPartition *)0x0) && (param_1->bEnableStreaming != false)) &&
     (this_01 = (param_1->World).field0_0x0.DebugPtr, this_01 != (UWorld *)0x0)) {
    pAVar9 = UWorld::GetWorldSettings(this_01,false,true);
    cVar6 = (**(code **)(pAVar9->_padding_ + 0x780))(pAVar9);
    if (cVar6 != '\0') {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_118.DebugPtr = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable((UObject *)param_1),
         UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      this_02 = (TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
                 *)&this->WorldPartitionsHLODRuntimeData;
      uVar12 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595;
      uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      uVar12 = uVar12 >> 0x10 ^ uVar12;
      local_13c = uVar12;
      local_f0 = this_02;
      iVar8 = TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TObjectPtr<UWorldPartition_const_>_>
                        (this_02,uVar12,(TObjectPtr<UWorldPartition_const_> *)&local_118.ObjectPtr);
      if ((iVar8 == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("WorldPartitionsHLODRuntimeData.Contains(InWorldPartition)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
                             ,0xfd,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_138 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      pTVar10 = TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
                ::Find(this_02,(TObjectPtr<UWorldPartition_const_>)&local_138);
      if ((pTVar10 ==
           (TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>
            *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar20 = (longlong *)&pTVar10->field_0x8;
      local_f8 = plVar20;
      if (param_1->bHasStandaloneHLOD != 0) {
        iVar8 = *(int *)&pTVar10->field_0x30;
        local_c8 = &pTVar10->field_0x18;
        iStack_d0 = 0;
        local_b8 = 0;
        uStack_cc = 1;
        iStack_bc = 0;
        if (iVar8 != 0) {
          puVar15 = *(uint **)&pTVar10->field_0x28;
          if (*(uint **)&pTVar10->field_0x28 == (uint *)0x0) {
            puVar15 = (uint *)local_c8;
          }
          uVar12 = *puVar15;
          while (uVar12 == 0) {
            lVar13 = (longlong)iStack_d0;
            local_b8 = local_b8 + 0x20;
            iStack_d0 = iStack_d0 + 1;
            iStack_bc = iVar8;
            if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0)
            goto LAB_148a9cc30;
            uVar12 = puVar15[lVar13 + 1];
          }
          uStack_cc = -uVar12 & uVar12;
          uVar14 = (ulonglong)uStack_cc * 2 + 1;
          lVar13 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_120 = (int)lVar13;
          iStack_bc = local_b8 + -1 + local_120;
          if (iVar8 < iStack_bc) {
            iStack_bc = iVar8;
          }
        }
LAB_148a9cc30:
        pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar10->field_0x18;
        uStack_b4 = local_3c;
        iStack_b0 = *(int *)&pTVar10->field_0x10 - *(int *)&pTVar10->field_0x3c;
        local_158 = *(uint *)&pTVar10->field_0x30;
        uStack_c0 = 0xffffffff;
        TStack_a0.CurrentBitIndex = iStack_bc;
        TStack_a0.UnvisitedBitMask = 0xffffffff;
        uVar12 = local_158 & 0xffffffe0;
        TStack_a0._padding_ = CONCAT44(uStack_cc,iStack_d0);
        iVar17 = (int)local_158 >> 5;
        TStack_a0._28_4_ = local_3c;
        TStack_a0.BaseBitIndex = local_b8;
        uStack_80 = CONCAT44(uStack_ac,iStack_b0);
        local_100 = pTVar23;
        local_d8 = (undefined1 *)plVar20;
        local_a8 = plVar20;
        TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c8;
        if ((((int)local_158 < 0) || (iVar8 < (int)local_158)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar1 = *(uint *)&pTVar10->field_0x30;
        if (local_158 != uVar1) {
          puVar19 = *(undefined1 **)&pTVar10->field_0x28;
          if (*(undefined1 **)&pTVar10->field_0x28 == (undefined1 *)0x0) {
            puVar19 = (undefined1 *)pTVar23;
          }
          uVar18 = -1 << ((byte)local_158 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
          while (uVar18 == 0) {
            lVar13 = (longlong)iVar17;
            uVar12 = uVar12 + 0x20;
            iVar17 = iVar17 + 1;
            local_158 = uVar1;
            if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_148a9cd40;
            uVar18 = *(uint *)(puVar19 + lVar13 * 4 + 4);
          }
          uVar14 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_158 = (int)lVar13 + -1 + uVar12;
          if ((int)uVar1 < (int)local_158) {
            local_158 = uVar1;
          }
        }
LAB_148a9cd40:
        while( true ) {
          plVar5 = local_a8;
          if ((int)local_a8[1] - *(int *)((longlong)local_a8 + 0x34) != (int)uStack_80) {
            `TSparseArray<TSparseSetElement<TTuple<FGuid,UWorldPartitionHLODRuntimeSubsystem::FCellData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if (((TStack_a0.CurrentBitIndex == local_158) && (TStack_a0.Array == pTVar23)) &&
             (this_02 = local_f0, uVar12 = local_13c, plVar5 == plVar20)) break;
          puVar21 = (undefined8 *)((longlong)TStack_a0.CurrentBitIndex * 0x30 + *plVar5);
          local_150._0_8_ = *puVar21;
          local_150._8_8_ = puVar21[1];
          if (*(int *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x8 !=
              *(int *)&(this->StandaloneHLODCellToWorldPartitionMap).field_0x34) {
            uVar11 = CityHash64((char *)&local_150,0x10);
            TSet<TTuple<FGuid,TObjectPtr<UWorldPartition>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UWorldPartition>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TObjectPtr<UWorldPartition>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UWorldPartition>,0>,FDefaultSetAllocator>
                                 *)&this->StandaloneHLODCellToWorldPartitionMap,(uint)uVar11,
                                &local_150);
          }
          local_res18[0] = *(uint *)(puVar21 + 4);
          uVar14 = (ulonglong)(int)local_res18[0];
          pUVar22 = (UWorldPartition *)puVar21[3];
          local_138 = (UWorldPartition *)
                      ((longlong)(&(pUVar22->ReferencedObjects).Hash + -8) + uVar14 * 8);
          while( true ) {
            pUVar4 = local_138;
            if (*(int *)(puVar21 + 4) != (int)uVar14) {
              `TCheckedPointerIterator<IWorldPartitionHLODObject_*_const,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res20);
            }
            if (pUVar22 == pUVar4) break;
            plVar20 = *(longlong **)pUVar22;
            local_108 = plVar20;
            cVar6 = (**(code **)(*plVar20 + 0x38))(plVar20);
            if (cVar6 != '\0') {
              this_00 = &this->StandaloneHLODObjectsReferencingUnloadedCells;
              uVar11 = CityHash64((char *)&local_150,0x10);
              if (*(int *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x8 !=
                  *(int *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x34) {
                puVar19 = *(undefined1 **)
                           &(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x40;
                puVar16 = &(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x38;
                if (puVar19 != (undefined1 *)0x0) {
                  puVar16 = puVar19;
                }
                uVar12 = *(uint *)(puVar16 +
                                  ((ulonglong)
                                   (*(int *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).
                                             field_0x48 - 1) & uVar11 & 0xffffffff) * 4);
                if (uVar12 != 0xffffffff) {
                  do {
                    puVar15 = (uint *)((longlong)(int)uVar12 * 0x68 +
                                      *(longlong *)&this_00->field_0x0);
                    if (((local_150.D == puVar15[3] && local_150.C == puVar15[2]) &&
                        local_150.B == puVar15[1]) && local_150.A == *puVar15) {
                      if (puVar15 != (uint *)0x0) goto LAB_148a9ced5;
                      break;
                    }
                    uVar12 = puVar15[0x18];
                  } while (uVar12 != 0xffffffff);
                }
              }
              local_110 = &local_150;
              TSet<TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
                        ((TSet<TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                          *)this_00,(uint)&local_140,
                         (TKeyInitializer<FGuid_const_&> *)(uVar11 & 0xffffffff),(bool *)&local_110)
              ;
              puVar15 = (uint *)((longlong)local_140 * 0x68 + *(longlong *)&this_00->field_0x0);
LAB_148a9ced5:
              TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
              ::Emplace<IWorldPartitionHLODObject_*_const_&>
                        ((TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
                          *)(puVar15 + 4),(IWorldPartitionHLODObject **)local_11c,(bool *)&local_108
                        );
              (**(code **)(*plVar20 + 0x28))(plVar20,WorldPartitionHLODEnabled);
              if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
                local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_130.Data.ArrayNum = 0;
                local_130.Data.ArrayMax = 0;
                FGuid::AppendString(&local_150,&local_130,Digits);
                (**(code **)(*plVar20 + 0x10))(plVar20,local_68);
                UE::Logging::Private::BasicLog<6>
                          (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
                if (local_68[0] != (void *)0x0) {
                  FMemory::Free(local_68[0]);
                }
                if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_130.Data.AllocatorInstance.Data);
                }
              }
            }
            uVar14 = (ulonglong)local_res18[0];
            pUVar22 = (UWorldPartition *)&pUVar22->field_0x8;
          }
          TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
          plVar20 = local_f8;
          pTVar23 = local_100;
        }
      }
      pUVar2 = (param_1->RuntimeHash).field0_0x0.DebugPtr;
      local_70 = &local_e8;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UWorldPartitionHLODRuntimeSubsystem::OnWorldPartitionUninitialized'::__l5::<lambda_1>,bool,UWorldPartitionRuntimeCell_const_*>
                 ::Call;
      local_e8 = plVar20;
      (**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2,&local_78);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_e0.DebugPtr = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      if (*(int *)&(this_02->Elements).field_0x8 != *(int *)&(this_02->Elements).field_0x34) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        TSet<TTuple<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorldPartition>,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODRuntimeData,0>,FDefaultSetAllocator>
        ::RemoveImpl<TObjectPtr<UWorldPartition_const_>_>
                  (this_02,uVar12,(TObjectPtr<UWorldPartition_const_> *)&local_e0.ObjectPtr);
      }
    }
  }
  return;
}

// PrepareToWarmup @ 148a9d940

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

bool __thiscall
UWorldPartitionHLODRuntimeSubsystem::PrepareToWarmup
          (UWorldPartitionHLODRuntimeSubsystem *this,UWorldPartitionRuntimeCell *param_1,
          IWorldPartitionHLODObject *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  TConsoleVariableData<int> *pTVar6;
  char cVar7;
  undefined1 uVar8;
  FWorldPartitionHLODWarmupState *pFVar9;
  double *pdVar10;
  UWorld *this_00;
  UWorldPartition *this_01;
  TMatrix<double> *pTVar11;
  TTransform<double> *this_02;
  bool bVar12;
  bool bVar13;
  undefined1 auStackY_128 [32];
  TVector<double>_u_0 local_f8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined8 local_c8;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId709,"UWorldPartitionHLODRuntimeSubsystem::PrepareToWarmup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
               ,0x2c5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId709);
  }
  bVar13 = false;
  cVar7 = (**(code **)((longlong)*param_2 + 0x18))(param_2);
  if (cVar7 != '\0') {
    pFVar9 = AddHLODObjectToWarmup(this,param_2);
    pTVar6 = CVarHLODWarmupNumFrames.Ref;
    if ((pFVar9->WarmupLastRequestedFrame == 0xffffffff) ||
       (pFVar9->WarmupLastRequestedFrame + 1 < GFrameNumber)) {
      bVar13 = IsInParallelGameThread();
      if ((!bVar13) &&
         ((bVar13 = IsInGameThread(), !bVar13 &&
          (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar13)))) {
        pcVar1 = (code *)swi(3);
        uVar8 = (*pcVar1)();
        return (bool)uVar8;
      }
      pFVar9->WarmupCallsUntilReady = pTVar6->ShadowedValue[0];
      pdVar10 = (double *)(**(code **)(param_1->_padding_ + 0x50))(&param_1->_padding_);
      dVar5 = pdVar10[1];
      (pFVar9->WarmupBounds).Min.field0_0x0._s_0.X = *pdVar10;
      (pFVar9->WarmupBounds).Min.field0_0x0._s_0.Y = dVar5;
      dVar5 = pdVar10[3];
      (pFVar9->WarmupBounds).Min.field0_0x0._s_0.Z = pdVar10[2];
      (pFVar9->WarmupBounds).Max.field0_0x0._s_0.X = dVar5;
      uVar2 = *(undefined4 *)((longlong)pdVar10 + 0x24);
      uVar3 = *(undefined4 *)(pdVar10 + 5);
      uVar4 = *(undefined4 *)((longlong)pdVar10 + 0x2c);
      *(undefined4 *)((longlong)&(pFVar9->WarmupBounds).Max.field0_0x0 + 8) =
           *(undefined4 *)(pdVar10 + 4);
      *(undefined4 *)((longlong)&(pFVar9->WarmupBounds).Max.field0_0x0 + 0xc) = uVar2;
      *(undefined4 *)((longlong)&(pFVar9->WarmupBounds).Max.field0_0x0 + 0x10) = uVar3;
      *(undefined4 *)((longlong)&(pFVar9->WarmupBounds).Max.field0_0x0 + 0x14) = uVar4;
      *(double *)&(pFVar9->WarmupBounds).IsValid = pdVar10[6];
      this_00 = (UWorld *)(**(code **)(param_1->_padding_ + 0x78))(&param_1->_padding_);
      this_01 = UWorld::GetWorldPartition(this_00);
      if (this_01 == (UWorldPartition *)0x0) {
        bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3257106152776793384>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
                            ,0x2d8,"WorldPartition");
        if (bVar13) {
          pcVar1 = (code *)swi(3);
          uVar8 = (*pcVar1)();
          return (bool)uVar8;
        }
      }
      else {
        bVar13 = UWorldPartition::IsMainWorldPartition(this_01);
        if (!bVar13) {
          this_02 = &(this_01->InstanceTransform).TypedValue;
          if ((this_01->InstanceTransform).bIsSet == false) {
            this_02 = &UE::Math::TTransform<double>::Identity;
          }
          pTVar11 = UE::Math::TTransform<double>::ToMatrixWithScale(this_02,&local_b8);
          UE::Math::TBox<double>::TransformBy
                    (&pFVar9->WarmupBounds,(TBox<double> *)&local_f8._s_0,pTVar11);
          (pFVar9->WarmupBounds).Min.field0_0x0._s_0.X = local_f8._s_0.X;
          (pFVar9->WarmupBounds).Min.field0_0x0._s_0.Y = local_f8._s_0.Y;
          (pFVar9->WarmupBounds).Min.field0_0x0._s_0.Z = local_f8._s_0.Z;
          (pFVar9->WarmupBounds).Max.field0_0x0._s_0.X = dStack_e0;
          (pFVar9->WarmupBounds).Max.field0_0x0._s_0.Y = local_d8;
          (pFVar9->WarmupBounds).Max.field0_0x0._s_0.Z = dStack_d0;
          (pFVar9->WarmupBounds).IsValid = (undefined1)local_c8;
          (pFVar9->WarmupBounds).Pad[0] = local_c8._1_1_;
          (pFVar9->WarmupBounds).Pad[1] = local_c8._2_1_;
          (pFVar9->WarmupBounds).Pad[2] = local_c8._3_1_;
          (pFVar9->WarmupBounds).Pad[3] = local_c8._4_1_;
          (pFVar9->WarmupBounds).Pad[4] = local_c8._5_1_;
          (pFVar9->WarmupBounds).Pad[5] = local_c8._6_1_;
          (pFVar9->WarmupBounds).Pad[6] = local_c8._7_1_;
        }
      }
    }
    else if (pFVar9->WarmupCallsUntilReady != 0) {
      pFVar9->WarmupCallsUntilReady = pFVar9->WarmupCallsUntilReady - 1;
    }
    bVar13 = pFVar9->WarmupCallsUntilReady != 0;
    pFVar9->WarmupLastRequestedFrame = GFrameNumber;
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar13;
}

// RegisterHLODObject @ 148a9e420

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
UWorldPartitionHLODRuntimeSubsystem::RegisterHLODObject
          (UWorldPartitionHLODRuntimeSubsystem *this,IWorldPartitionHLODObject *param_1)

{
  int *piVar1;
  TMap<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>_>
  *this_00;
  UWorldPartitionRuntimeHash *pUVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  TObjectPtr<UWorldPartition> TVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UWorldPartition *pUVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  FCellData *pFVar13;
  FGuid *pFVar14;
  ulong64 uVar15;
  TObjectPtr<UWorldPartition>_u_0 *pTVar16;
  TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
  *this_01;
  ForAnyElementType FVar17;
  uint *puVar18;
  undefined1 *puVar19;
  bool bVar20;
  int local_res8 [2];
  IWorldPartitionHLODObject *local_res10;
  IWorldPartitionHLODObject *local_res18;
  IWorldPartitionHLODObject *local_res20;
  FGuid local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  IWorldPartitionHLODObject *local_e8;
  FGuid *local_e0;
  FGuid local_d8;
  void *local_c8 [2];
  void *local_b8 [2];
  void *local_a8 [2];
  void *local_98 [2];
  void *local_88 [2];
  void *local_78 [2];
  void *local_68 [2];
  void *local_58 [2];
  void *local_48 [2];
  
  bVar20 = -1 < CpuChannel->Enabled;
  local_res10 = param_1;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId387,
               "UWorldPartitionHLODRuntimeSubsystem::RegisterHLODObject",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
               ,0x183);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId387);
  }
  cVar6 = (**(code **)((longlong)*local_res10 + 0x48))();
  if (cVar6 == '\0') {
    pFVar13 = GetCellData(this,local_res10);
    if (pFVar13 == (FCellData *)0x0) {
      cVar6 = (**(code **)((longlong)*local_res10 + 0x38))();
      if (cVar6 == '\0') {
        if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
          pFVar14 = (FGuid *)(**(code **)((longlong)*local_res10 + 0x30))();
          local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f8.Data.ArrayNum = 0;
          local_f8.Data.ArrayMax = 0;
          FGuid::AppendString(pFVar14,&local_f8,Digits);
          (**(code **)((longlong)*local_res10 + 0x10))(local_res10,local_48);
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
          if (local_48[0] != (void *)0x0) {
            FMemory::Free(local_48[0]);
          }
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
        }
        (**(code **)((longlong)*local_res10 + 0x28))(local_res10,0);
        TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
        ::Emplace<IWorldPartitionHLODObject_*_const_&>
                  (&this->OutdatedHLODObjects,&local_e8,(bool *)&local_res10);
        goto LAB_148a9ed3c;
      }
      pUVar10 = FHLODRuntimeSubsystem::GetWorldPartition(local_res10);
      pUVar2 = (pUVar10->RuntimeHash).field0_0x0.DebugPtr;
      pcVar3 = *(code **)(pUVar2->_padding_ + 0x318);
      uVar11 = (**(code **)((longlong)*local_res10 + 0x40))();
      puVar12 = (undefined8 *)(*pcVar3)(pUVar2,uVar11);
      if (puVar12 == (undefined8 *)0x0) {
        pFVar14 = (FGuid *)(**(code **)((longlong)*local_res10 + 0x30))();
        pTVar16 = &TMapBase<FGuid,TObjectPtr<UWorldPartition>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UWorldPartition>,0>_>
                   ::Find((TMapBase<FGuid,TObjectPtr<UWorldPartition>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UWorldPartition>,0>_>
                           *)&this->StandaloneHLODCellToWorldPartitionMap,pFVar14)->field0_0x0;
        if (pTVar16 == (TObjectPtr<UWorldPartition>_u_0 *)0x0) {
          if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
            pFVar14 = (FGuid *)(**(code **)((longlong)*local_res10 + 0x30))();
            local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_108.Data.ArrayNum = 0;
            local_108.Data.ArrayMax = 0;
            FGuid::AppendString(pFVar14,&local_108,Digits);
            (**(code **)((longlong)*local_res10 + 0x10))(local_res10,local_58);
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
            if (local_58[0] != (void *)0x0) {
              FMemory::Free(local_58[0]);
            }
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
          }
          pFVar14 = (FGuid *)(**(code **)((longlong)*local_res10 + 0x30))();
          uVar15 = CityHash64((char *)pFVar14,0x10);
          this_01 = TMapBase<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>_>
                    ::FindOrAddImpl<FGuid_const_&>
                              ((TMapBase<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>_>
                                *)&this->StandaloneHLODObjectsReferencingUnloadedCells,(uint)uVar15,
                               pFVar14);
          TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
          ::Emplace<IWorldPartitionHLODObject_*_const_&>(this_01,&local_res20,(bool *)&local_res10);
          (**(code **)((longlong)*local_res10 + 0x28))(local_res10,WorldPartitionHLODEnabled);
          goto LAB_148a9ed3c;
        }
        TVar5.field0_0x0 = (TObjectPtr<UWorldPartition>_u_0)pTVar16->DebugPtr;
        pFVar14 = (FGuid *)(**(code **)((longlong)*local_res10 + 0x30))();
        pFVar13 = GetCellData(this,(UWorldPartition *)TVar5.field0_0x0,pFVar14);
        if (pFVar13 == (FCellData *)0x0) goto LAB_148a9ed3c;
        if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
          pFVar14 = (FGuid *)(**(code **)((longlong)*local_res10 + 0x30))();
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_118.Data.ArrayNum = 0;
          local_118.Data.ArrayMax = 0;
          FGuid::AppendString(pFVar14,&local_118,Digits);
          (**(code **)((longlong)*local_res10 + 0x10))(local_res10,local_68);
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
          FVar17.Data = local_118.Data.AllocatorInstance.Data;
          if (local_68[0] != (void *)0x0) {
            FMemory::Free(local_68[0]);
            FVar17.Data = local_118.Data.AllocatorInstance.Data;
          }
          goto LAB_148a9e73c;
        }
      }
      else {
        local_178._0_8_ = *puVar12;
        local_178._8_8_ = puVar12[1];
        pFVar13 = GetCellData(this,pUVar10,&local_178);
        if (pFVar13 == (FCellData *)0x0) {
          if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
            local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_128.Data.ArrayNum = 0;
            local_128.Data.ArrayMax = 0;
            FGuid::AppendString(&local_178,&local_128,Digits);
            (**(code **)((longlong)*local_res10 + 0x10))(local_res10,local_78);
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
            if (local_78[0] != (void *)0x0) {
              FMemory::Free(local_78[0]);
            }
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
          }
          this_00 = &this->StandaloneHLODObjectsReferencingUnloadedCells;
          uVar15 = CityHash64((char *)&local_178,0x10);
          if (*(int *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x8 !=
              *(int *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x34) {
            puVar19 = *(undefined1 **)
                       &(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x40;
            if (puVar19 == (undefined1 *)0x0) {
              puVar19 = &(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x38;
            }
            uVar9 = *(uint *)(puVar19 +
                             ((ulonglong)
                              (*(int *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).
                                        field_0x48 - 1) & uVar15 & 0xffffffff) * 4);
            if (uVar9 != 0xffffffff) {
              do {
                puVar18 = (uint *)((longlong)(int)uVar9 * 0x68 + *(longlong *)&this_00->field_0x0);
                if (((local_178.D == puVar18[3] && local_178.C == puVar18[2]) &&
                    local_178.B == puVar18[1]) && local_178.A == *puVar18) {
                  if (puVar18 != (uint *)0x0) goto LAB_148a9ea69;
                  break;
                }
                uVar9 = puVar18[0x18];
              } while (uVar9 != 0xffffffff);
            }
          }
          local_e0 = &local_178;
          TSet<TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
                    ((TSet<TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)this_00,(uint)local_res8,
                     (TKeyInitializer<FGuid_const_&> *)(uVar15 & 0xffffffff),(bool *)&local_e0);
          puVar18 = (uint *)((longlong)local_res8[0] * 0x68 + *(longlong *)&this_00->field_0x0);
LAB_148a9ea69:
          TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
          ::Emplace<IWorldPartitionHLODObject_*_const_&>
                    ((TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
                      *)(puVar18 + 4),&local_res18,(bool *)&local_res10);
          (**(code **)((longlong)*local_res10 + 0x28))(local_res10,WorldPartitionHLODEnabled);
          goto LAB_148a9ed3c;
        }
        if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
          local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_138.Data.ArrayNum = 0;
          local_138.Data.ArrayMax = 0;
          FGuid::AppendString(&local_178,&local_138,Digits);
          (**(code **)((longlong)*local_res10 + 0x10))(local_res10,local_88);
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
          FVar17.Data = local_138.Data.AllocatorInstance.Data;
          if (local_88[0] != (void *)0x0) {
            FMemory::Free(local_88[0]);
            FVar17.Data = local_138.Data.AllocatorInstance.Data;
          }
          goto LAB_148a9e73c;
        }
      }
    }
    else if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
      pFVar14 = (FGuid *)(**(code **)((longlong)*local_res10 + 0x30))();
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
      FGuid::AppendString(pFVar14,&local_148,Digits);
      (**(code **)((longlong)*local_res10 + 0x10))(local_res10,local_98);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
      FVar17.Data = local_148.Data.AllocatorInstance.Data;
      if (local_98[0] != (void *)0x0) {
        FMemory::Free(local_98[0]);
        FVar17.Data = local_148.Data.AllocatorInstance.Data;
      }
LAB_148a9e73c:
      if (FVar17.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar17.Data);
      }
    }
  }
  else {
    pUVar10 = FHLODRuntimeSubsystem::GetWorldPartition(local_res10);
    if (pUVar10 == (UWorldPartition *)0x0) goto LAB_148a9ed3c;
    pUVar2 = (pUVar10->RuntimeHash).field0_0x0.DebugPtr;
    pcVar3 = *(code **)(pUVar2->_padding_ + 800);
    uVar11 = (**(code **)((longlong)*local_res10 + 0x50))();
    puVar12 = (undefined8 *)(*pcVar3)(pUVar2,uVar11);
    if (puVar12 == (undefined8 *)0x0) {
      if (4 < (byte)LogHLODRuntimeSubsystem._0_1_) {
        (**(code **)((longlong)*local_res10 + 0x10))(local_res10,local_a8);
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
        if (local_a8[0] != (void *)0x0) {
          FMemory::Free(local_a8[0]);
        }
      }
      goto LAB_148a9ed3c;
    }
    local_d8._0_8_ = *puVar12;
    local_d8._8_8_ = puVar12[1];
    pFVar13 = GetCellData(this,pUVar10,&local_d8);
    if (pFVar13 == (FCellData *)0x0) {
      if (4 < (byte)LogHLODRuntimeSubsystem._0_1_) {
        (**(code **)((longlong)*local_res10 + 0x10))(local_res10,local_b8);
        local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_158.Data.ArrayNum = 0;
        local_158.Data.ArrayMax = 0;
        FGuid::AppendString(&local_d8,&local_158,Digits);
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        if (local_b8[0] != (void *)0x0) {
          FMemory::Free(local_b8[0]);
        }
      }
      goto LAB_148a9ed3c;
    }
    if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
      local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.Data.ArrayNum = 0;
      local_168.Data.ArrayMax = 0;
      FGuid::AppendString(&local_d8,&local_168,Digits);
      (**(code **)((longlong)*local_res10 + 0x10))(local_res10,local_c8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
      FVar17.Data = local_168.Data.AllocatorInstance.Data;
      if (local_c8[0] != (void *)0x0) {
        FMemory::Free(local_c8[0]);
        FVar17.Data = local_168.Data.AllocatorInstance.Data;
      }
      goto LAB_148a9e73c;
    }
  }
  pFVar4 = (pFVar13->LoadedHLODs).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar4 + (longlong)(pFVar13->LoadedHLODs).ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = (pFVar13->LoadedHLODs).ArrayNum;
  piVar1 = &(pFVar13->LoadedHLODs).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pFVar13->LoadedHLODs).AllocatorInstance,piVar1);
  }
  (pFVar13->LoadedHLODs).ArrayNum = iVar8 + 1;
  *(IWorldPartitionHLODObject **)
   ((pFVar13->LoadedHLODs).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_res10;
  if ((WorldPartitionHLODEnabled == false) || (pFVar13->bIsCellVisible != false)) {
    (**(code **)((longlong)*local_res10 + 0x28))(local_res10,0);
  }
  else {
    (**(code **)((longlong)*local_res10 + 0x28))
              (local_res10,CONCAT71((int7)(int3)((uint)iVar8 >> 8),1));
  }
LAB_148a9ed3c:
  RemoveHLODObjectFromWarmup(this,local_res10);
  TMulticastDelegate<void___cdecl(IWorldPartitionHLODObject_*),FDefaultDelegateUserPolicy>::
  Broadcast(&this->HLODObjectRegisteredEvent,local_res10);
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RemoveHLODObjectFromWarmup @ 148aa1290

void __thiscall
UWorldPartitionHLODRuntimeSubsystem::RemoveHLODObjectFromWarmup
          (UWorldPartitionHLODRuntimeSubsystem *this,IWorldPartitionHLODObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  FSetElementId FVar6;
  TMap<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState,0>_>
  *this_00;
  longlong lVar7;
  FSetElementId FVar8;
  uint uVar9;
  
  uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  if (*(int *)&(this->HLODObjectsToWarmup).field_0x8 !=
      *(int *)&(this->HLODObjectsToWarmup).field_0x34) {
    puVar5 = *(undefined1 **)&(this->HLODObjectsToWarmup).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->HLODObjectsToWarmup).field_0x38;
    }
    FVar6.Index = *(int *)(puVar5 + (ulonglong)
                                    (*(int *)&(this->HLODObjectsToWarmup).field_0x48 - 1U &
                                    (uVar9 >> 0x10 ^ uVar9)) * 4);
    if (FVar6.Index != -1) {
      lVar7 = *(longlong *)&(this->HLODObjectsToWarmup).field_0x0;
      while (*(IWorldPartitionHLODObject **)(lVar7 + (longlong)FVar6.Index * 0x50) != param_1) {
        FVar6.Index = *(int *)(lVar7 + 0x48 + (longlong)FVar6.Index * 0x50);
        if (FVar6.Index == -1) {
          return;
        }
      }
      if (FVar6.Index != -1) {
        uVar4 = (**(code **)((longlong)*param_1 + 8))(param_1);
        this_00 = &this->HLODLevelWarmupStates;
        uVar9 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        if (*(int *)&(this->HLODLevelWarmupStates).field_0x8 !=
            *(int *)&(this->HLODLevelWarmupStates).field_0x34) {
          puVar5 = *(undefined1 **)&(this->HLODLevelWarmupStates).field_0x40;
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &(this->HLODLevelWarmupStates).field_0x38;
          }
          FVar8.Index = *(int *)(puVar5 + (ulonglong)
                                          (*(int *)&(this->HLODLevelWarmupStates).field_0x48 - 1U &
                                          (uVar9 >> 0x10 ^ uVar9)) * 4);
          if (FVar8.Index != -1) {
            do {
              if (*(ulonglong *)((longlong)FVar8.Index * 0x68 + *(longlong *)&this_00->field_0x0) ==
                  uVar4) {
                if (FVar8.Index == -1) goto LAB_148aa13ef;
                goto LAB_148aa1415;
              }
              FVar8.Index = *(int *)((longlong)FVar8.Index * 0x68 + 0x60 +
                                    *(longlong *)&this_00->field_0x0);
            } while (FVar8.Index != -1);
          }
        }
        FVar8.Index = -1;
LAB_148aa13ef:
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("LevelElementId.IsValidId()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
                           ,0x2a4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
LAB_148aa1415:
        lVar7 = (longlong)FVar8.Index * 0x68 + *(longlong *)&this_00->field_0x0;
        iVar3 = TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
                ::Remove((TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
                          *)(lVar7 + 8),param_1);
        if ((iVar3 != 1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumRemoved == 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
                               ,0x2aa,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(lVar7 + 0x10) == *(int *)(lVar7 + 0x3c)) {
          if ((*(longlong *)(lVar7 + 0x58) == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("LevelState.OnCleanupLevelDelegateHandle.IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
                                 ,0x2ae,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)(uVar4 + 0x270),(FDelegateHandle)*(ulong64 *)(lVar7 + 0x58));
          TSet<TTuple<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState>,TDefaultMapHashableKeyFuncs<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState,0>,FDefaultSetAllocator>
          ::Remove((TSet<TTuple<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState>,TDefaultMapHashableKeyFuncs<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState,0>,FDefaultSetAllocator>
                    *)this_00,FVar8);
        }
        TSet<TTuple<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState>,TDefaultMapHashableKeyFuncs<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,0>,FDefaultSetAllocator>
        ::Remove((TSet<TTuple<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState>,TDefaultMapHashableKeyFuncs<IWorldPartitionHLODObject_*,UWorldPartitionHLODRuntimeSubsystem::FWorldPartitionHLODWarmupState,0>,FDefaultSetAllocator>
                  *)&this->HLODObjectsToWarmup,FVar6);
      }
    }
  }
  return;
}

// ShouldPerformWarmup @ 148aa2620

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
UWorldPartitionHLODRuntimeSubsystem::ShouldPerformWarmup(UWorldPartitionHLODRuntimeSubsystem *this)

{
  FStaticShaderPlatform FVar1;
  int iVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  bool bVar9;
  ENetMode EVar10;
  UWorld *this_00;
  
  pTVar4 = CVarHLODWarmupEnabled.Ref;
  bVar6 = IsInParallelGameThread();
  if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  pTVar5 = CVarHLODWarmupNumFrames.Ref;
  if (pTVar4->ShadowedValue[0] != 0) {
    bVar6 = IsInParallelGameThread();
    if (((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    if (0 < pTVar5->ShadowedValue[0]) {
      FVar1.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel];
      bVar6 = UseNanite(FVar1.Platform,true,true);
      bVar8 = UseVirtualTexturing(FVar1);
      pTVar4 = CVarHLODWarmupNanite.Ref;
      bVar9 = IsInParallelGameThread();
      if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pTVar5 = CVarHLODWarmupVT.Ref;
      iVar2 = pTVar4->ShadowedValue[0];
      bVar9 = IsInParallelGameThread();
      if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      if (((bVar6) && (iVar2 != 0)) || ((bVar8 && (pTVar5->ShadowedValue[0] != 0)))) {
        this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
        EVar10 = UWorld::InternalGetNetMode(this_00);
        return EVar10 != NM_DedicatedServer;
      }
    }
  }
  return false;
}

// ShouldPerformWarmupForCell @ 148aa27d0

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
UWorldPartitionHLODRuntimeSubsystem::ShouldPerformWarmupForCell
          (UWorldPartitionHLODRuntimeSubsystem *this,UWorldPartitionRuntimeCell *param_1)

{
  bool bVar1;
  UWorld *this_00;
  ULevel *pUVar2;
  
  if (this->bCachedShouldPerformWarmup != false) {
    this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    if (this_00->IsInBlockTillLevelStreamingCompleted == 0) {
      pUVar2 = (ULevel *)(**(code **)(param_1->_padding_ + 0x2d8))(param_1);
      bVar1 = UWorld::IsLevelMakingVisible(this_00,pUVar2);
      if (!bVar1) {
        bVar1 = UWorld::IsLevelMakingInvisible(this_00,pUVar2);
        if (!bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

// StaticRegisterNativesUWorldPartitionHLODRuntimeSubsystem @ 148aa2aa0

void __cdecl
UWorldPartitionHLODRuntimeSubsystem::StaticRegisterNativesUWorldPartitionHLODRuntimeSubsystem(void)

{
  return;
}

// UnregisterHLODObject @ 148aa3720

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
UWorldPartitionHLODRuntimeSubsystem::UnregisterHLODObject
          (UWorldPartitionHLODRuntimeSubsystem *this,IWorldPartitionHLODObject *param_1)

{
  UWorldPartitionRuntimeHash *pUVar1;
  code *pcVar2;
  TObjectPtr<UWorldPartition> TVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  UWorldPartition *pUVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  FCellData *pFVar11;
  FGuid *pFVar12;
  ulong64 uVar13;
  TObjectPtr<UWorldPartition>_u_0 *pTVar14;
  TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
  *pTVar15;
  char *pcVar16;
  uint *puVar17;
  undefined1 *puVar18;
  bool bVar19;
  IWorldPartitionHLODObject *local_res10;
  FGuid local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FGuid local_88;
  void *local_78 [2];
  void *local_68 [2];
  void *local_58 [2];
  void *local_48 [2];
  void *local_38 [2];
  void *local_28 [2];
  
  bVar19 = -1 < CpuChannel->Enabled;
  local_res10 = param_1;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId492,
               "UWorldPartitionHLODRuntimeSubsystem::UnregisterHLODObject",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
               ,0x1ec);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId492);
  }
  cVar4 = (**(code **)((longlong)*local_res10 + 0x48))();
  if (cVar4 == '\0') {
    pFVar11 = GetCellData(this,local_res10);
    if (pFVar11 == (FCellData *)0x0) {
      cVar4 = (**(code **)((longlong)*local_res10 + 0x38))();
      if (cVar4 == '\0') {
        TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
        ::Remove(&this->OutdatedHLODObjects,local_res10);
        goto LAB_148aa3e51;
      }
      pUVar8 = FHLODRuntimeSubsystem::GetWorldPartition(local_res10);
      pUVar1 = (pUVar8->RuntimeHash).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(pUVar1->_padding_ + 0x318);
      uVar9 = (**(code **)((longlong)*local_res10 + 0x40))();
      puVar10 = (undefined8 *)(*pcVar2)(pUVar1,uVar9);
      if (puVar10 == (undefined8 *)0x0) {
        pFVar12 = (FGuid *)(**(code **)((longlong)*local_res10 + 0x30))();
        pTVar14 = &TMapBase<FGuid,TObjectPtr<UWorldPartition>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UWorldPartition>,0>_>
                   ::Find((TMapBase<FGuid,TObjectPtr<UWorldPartition>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UWorldPartition>,0>_>
                           *)&this->StandaloneHLODCellToWorldPartitionMap,pFVar12)->field0_0x0;
        if (pTVar14 == (TObjectPtr<UWorldPartition>_u_0 *)0x0) {
          if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
            pFVar12 = (FGuid *)(**(code **)((longlong)*local_res10 + 0x30))();
            local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_98.Data.ArrayNum = 0;
            local_98.Data.ArrayMax = 0;
            FGuid::AppendString(pFVar12,&local_98,Digits);
            (**(code **)((longlong)*local_res10 + 0x10))(local_res10,local_28);
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
            if (local_28[0] != (void *)0x0) {
              FMemory::Free(local_28[0]);
            }
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
          }
          pFVar12 = (FGuid *)(**(code **)((longlong)*local_res10 + 0x30))();
          pTVar15 = TMapBase<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>_>
                    ::Find((TMapBase<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>,0>_>
                            *)&this->StandaloneHLODObjectsReferencingUnloadedCells,pFVar12);
          if (((pTVar15 ==
                (TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
                 *)0x0) ||
              (iVar6 = TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
                       ::Remove(pTVar15,local_res10), iVar6 != 0)) ||
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("StandaloneHLODActorsPtr->Remove(InWorldPartitionHLOD)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
                                 ,0x232,L""), !bVar5)) goto LAB_148aa3e51;
          goto code_r0x000148aa3e3e;
        }
        TVar3.field0_0x0 = (TObjectPtr<UWorldPartition>_u_0)pTVar14->DebugPtr;
        pFVar12 = (FGuid *)(**(code **)((longlong)*local_res10 + 0x30))();
        pFVar11 = GetCellData(this,(UWorldPartition *)TVar3.field0_0x0,pFVar12);
        if (pFVar11 == (FCellData *)0x0) goto LAB_148aa3e51;
        if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
          pFVar12 = (FGuid *)(**(code **)((longlong)*local_res10 + 0x30))();
          local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.Data.ArrayNum = 0;
          local_a8.Data.ArrayMax = 0;
          FGuid::AppendString(pFVar12,&local_a8,Digits);
          (**(code **)((longlong)*local_res10 + 0x10))(local_res10,local_38);
          UE::Logging::Private::BasicLog<6>
                    ((FStaticBasicLogRecord *)&PTR_u_Unregistering_S_151c304f8,
                     (FLogCategoryBase *)&LogHLODRuntimeSubsystem);
          if (local_38[0] != (void *)0x0) {
            FMemory::Free(local_38[0]);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
        }
        iVar6 = TArray<IWorldPartitionHLODObject_*,TSizedDefaultAllocator<32>_>::Remove
                          (&pFVar11->LoadedHLODs,&local_res10);
        if (iVar6 != 0) goto LAB_148aa3e51;
        iVar6 = 0x228;
      }
      else {
        local_f8._0_8_ = *puVar10;
        local_f8._8_8_ = puVar10[1];
        pFVar11 = GetCellData(this,pUVar8,&local_f8);
        if (pFVar11 == (FCellData *)0x0) {
          if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
            local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_b8.Data.ArrayNum = 0;
            local_b8.Data.ArrayMax = 0;
            FGuid::AppendString(&local_f8,&local_b8,Digits);
            (**(code **)((longlong)*local_res10 + 0x10))(local_res10,local_48);
            UE::Logging::Private::BasicLog<6>
                      (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
            if (local_48[0] != (void *)0x0) {
              FMemory::Free(local_48[0]);
            }
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
          }
          uVar13 = CityHash64((char *)&local_f8,0x10);
          if (*(int *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x8 !=
              *(int *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x34) {
            puVar18 = *(undefined1 **)
                       &(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x40;
            if (puVar18 == (undefined1 *)0x0) {
              puVar18 = &(this->StandaloneHLODObjectsReferencingUnloadedCells).field_0x38;
            }
            uVar7 = *(uint *)(puVar18 +
                             ((ulonglong)
                              (*(int *)&(this->StandaloneHLODObjectsReferencingUnloadedCells).
                                        field_0x48 - 1) & uVar13 & 0xffffffff) * 4);
            if (uVar7 != 0xffffffff) {
              do {
                puVar17 = (uint *)((longlong)(int)uVar7 * 0x68 +
                                  *(longlong *)&this->StandaloneHLODObjectsReferencingUnloadedCells)
                ;
                if (((local_f8.D == puVar17[3] && local_f8.C == puVar17[2]) &&
                    local_f8.B == puVar17[1]) && local_f8.A == *puVar17) {
                  pTVar15 = (TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
                             *)(puVar17 + 4);
                  if (puVar17 == (uint *)0x0) {
                    pTVar15 = (TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
                               *)0x0;
                  }
                  if (((pTVar15 !=
                        (TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
                         *)0x0) &&
                      (iVar6 = TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
                               ::Remove(pTVar15,local_res10), iVar6 == 0)) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("StandaloneHLODActorsPtr->Remove(InWorldPartitionHLOD)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
                                         ,0x21c,L""), bVar5)) goto code_r0x000148aa3e3e;
                  break;
                }
                uVar7 = puVar17[0x18];
              } while (uVar7 != 0xffffffff);
            }
          }
          goto LAB_148aa3e51;
        }
        if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
          local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.Data.ArrayNum = 0;
          local_c8.Data.ArrayMax = 0;
          FGuid::AppendString(&local_f8,&local_c8,Digits);
          (**(code **)((longlong)*local_res10 + 0x10))(local_res10,local_58);
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
          if (local_58[0] != (void *)0x0) {
            FMemory::Free(local_58[0]);
          }
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
        }
        iVar6 = TArray<IWorldPartitionHLODObject_*,TSizedDefaultAllocator<32>_>::Remove
                          (&pFVar11->LoadedHLODs,&local_res10);
        if (iVar6 != 0) goto LAB_148aa3e51;
        iVar6 = 0x213;
      }
      pcVar16 = "SourceCellData->LoadedHLODs.Remove(InWorldPartitionHLOD)";
    }
    else {
      if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
        pFVar12 = (FGuid *)(**(code **)((longlong)*local_res10 + 0x30))();
        local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.Data.ArrayNum = 0;
        local_d8.Data.ArrayMax = 0;
        FGuid::AppendString(pFVar12,&local_d8,Digits);
        (**(code **)((longlong)*local_res10 + 0x10))(local_res10,local_68);
        UE::Logging::Private::BasicLog<6>
                  (&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
        if (local_68[0] != (void *)0x0) {
          FMemory::Free(local_68[0]);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      iVar6 = TArray<IWorldPartitionHLODObject_*,TSizedDefaultAllocator<32>_>::Remove
                        (&pFVar11->LoadedHLODs,&local_res10);
      if (iVar6 != 0) goto LAB_148aa3e51;
      iVar6 = 0x203;
      pcVar16 = "CellData->LoadedHLODs.Remove(InWorldPartitionHLOD)";
    }
  }
  else {
    pUVar8 = FHLODRuntimeSubsystem::GetWorldPartition(local_res10);
    if (pUVar8 == (UWorldPartition *)0x0) goto LAB_148aa3e51;
    pUVar1 = (pUVar8->RuntimeHash).field0_0x0.DebugPtr;
    pcVar2 = *(code **)(pUVar1->_padding_ + 800);
    uVar9 = (**(code **)((longlong)*local_res10 + 0x50))();
    puVar10 = (undefined8 *)(*pcVar2)(pUVar1,uVar9);
    if (puVar10 == (undefined8 *)0x0) goto LAB_148aa3e51;
    local_88._0_8_ = *puVar10;
    local_88._8_8_ = puVar10[1];
    pFVar11 = GetCellData(this,pUVar8,&local_88);
    if (pFVar11 == (FCellData *)0x0) goto LAB_148aa3e51;
    if (5 < (byte)LogHLODRuntimeSubsystem._0_1_) {
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
      FGuid::AppendString(&local_88,&local_e8,Digits);
      (**(code **)((longlong)*local_res10 + 0x10))(local_res10,local_78);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogHLODRuntimeSubsystem);
      if (local_78[0] != (void *)0x0) {
        FMemory::Free(local_78[0]);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
    iVar6 = TArray<IWorldPartitionHLODObject_*,TSizedDefaultAllocator<32>_>::Remove
                      (&pFVar11->LoadedHLODs,&local_res10);
    if (iVar6 != 0) goto LAB_148aa3e51;
    iVar6 = 0x1fa;
    pcVar16 = "CustomHLODSourceCellData->LoadedHLODs.Remove(InWorldPartitionHLOD)";
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar16,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\HLODRuntimeSubsystem.cpp"
                     ,iVar6,L"");
  if (bVar5) {
code_r0x000148aa3e3e:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_148aa3e51:
  RemoveHLODObjectFromWarmup(this,local_res10);
  TMulticastDelegate<void___cdecl(IWorldPartitionHLODObject_*),FDefaultDelegateUserPolicy>::
  Broadcast(&this->HLODObjectUnregisteredEvent,local_res10);
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}


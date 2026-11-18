// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 48

// StaticClass @ 148aa9080

UClass * __cdecl UWorldPartitionStreamingPolicy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionStreamingPolicy",
               &Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy.InnerSingleton,
               StaticRegisterNativesUWorldPartitionStreamingPolicy,0x450,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionStreamingPolicy>,
               InternalVTableHelperCtorCaller<UWorldPartitionStreamingPolicy>,local_res8,
               UObject::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy.InnerSingleton;
}

// UWorldPartitionStreamingPolicy @ 148ab6080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorldPartitionStreamingPolicy * __thiscall
UWorldPartitionStreamingPolicy::UWorldPartitionStreamingPolicy
          (UWorldPartitionStreamingPolicy *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWorldPartitionStreamingPolicy__6B_;
  FWorldPartitionUpdateStreamingCurrentState::FWorldPartitionUpdateStreamingCurrentState
            (&this->CurrentState);
  (this->TargetState).ToLoadCells.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetState).ToLoadCells.ArrayNum = 0;
  (this->TargetState).ToLoadCells.ArrayMax = 0;
  (this->TargetState).ToActivateCells.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetState).ToActivateCells.ArrayNum = 0;
  (this->TargetState).ToActivateCells.ArrayMax = 0;
  (this->TargetState).ToDeactivateCells.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetState).ToDeactivateCells.ArrayNum = 0;
  (this->TargetState).ToDeactivateCells.ArrayMax = 0;
  (this->TargetState).ToUnloadCells.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetState).ToUnloadCells.ArrayNum = 0;
  (this->TargetState).ToUnloadCells.ArrayMax = 0;
  (this->TargetState).StreamingPerformance = Good;
  (this->TargetState).bBlockOnSlowStreaming = false;
  (this->TargetState).bUpdateServerEpoch = false;
  FWorldPartitionUpdateStreamingCurrentState::FWorldPartitionUpdateStreamingCurrentState
            (&this->AsyncTaskCurrentState);
  (this->AsyncTaskTargetState).ToLoadCells.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncTaskTargetState).ToLoadCells.ArrayNum = 0;
  (this->AsyncTaskTargetState).ToLoadCells.ArrayMax = 0;
  (this->AsyncTaskTargetState).ToActivateCells.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AsyncTaskTargetState).ToActivateCells.ArrayNum = 0;
  (this->AsyncTaskTargetState).ToActivateCells.ArrayMax = 0;
  (this->AsyncTaskTargetState).ToDeactivateCells.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AsyncTaskTargetState).ToDeactivateCells.ArrayNum = 0;
  (this->AsyncTaskTargetState).ToDeactivateCells.ArrayMax = 0;
  (this->AsyncTaskTargetState).ToUnloadCells.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AsyncTaskTargetState).ToUnloadCells.ArrayNum = 0;
  (this->AsyncTaskTargetState).ToUnloadCells.ArrayMax = 0;
  (this->AsyncTaskTargetState).StreamingPerformance = Good;
  (this->AsyncTaskTargetState).bBlockOnSlowStreaming = false;
  (this->AsyncTaskTargetState).bUpdateServerEpoch = false;
  this->AsyncUpdateStreamingStateTask = (TTask<void>)0x0;
  *(undefined8 *)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0xc) =
       0xffffffff;
  *(undefined8 *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0x20) =
       0;
  *(undefined4 *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0x28) =
       0;
  *(undefined4 *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0x2c) =
       0x80;
  *(undefined4 *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0x30) =
       0xffffffff;
  *(undefined4 *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0x34) =
       0;
  *(undefined8 *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0x40) =
       0;
  (this->CachedServerDisallowStreamingOutDataLayers).field0_0x0.TypedValue.HashSize = 0;
  *(undefined8 *)&(this->FrameActivateCells).Elements = 0;
  *(undefined8 *)&(this->FrameActivateCells).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FrameActivateCells).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FrameActivateCells).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FrameActivateCells).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FrameActivateCells).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FrameActivateCells).Elements.field_0x34 = 0;
  (this->FrameActivateCells).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FrameActivateCells).HashSize = 0;
  *(undefined8 *)&(this->FrameLoadCells).Elements = 0;
  *(undefined8 *)&(this->FrameLoadCells).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FrameLoadCells).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FrameLoadCells).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FrameLoadCells).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FrameLoadCells).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FrameLoadCells).Elements.field_0x34 = 0;
  (this->FrameLoadCells).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FrameLoadCells).HashSize = 0;
  *(undefined8 *)&(this->FrameAnalysePerformanceCells).Elements = 0;
  *(undefined8 *)&(this->FrameAnalysePerformanceCells).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FrameAnalysePerformanceCells).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FrameAnalysePerformanceCells).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FrameAnalysePerformanceCells).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FrameAnalysePerformanceCells).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FrameAnalysePerformanceCells).Elements.field_0x34 = 0;
  (this->FrameAnalysePerformanceCells).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FrameAnalysePerformanceCells).HashSize = 0;
  return this;
}

// UWorldPartitionStreamingPolicy @ 148ab6270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorldPartitionStreamingPolicy * __thiscall
UWorldPartitionStreamingPolicy::UWorldPartitionStreamingPolicy
          (UWorldPartitionStreamingPolicy *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorldPartitionStreamingPolicy *pUVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWorldPartitionStreamingPolicy__6B_;
  this->WorldPartition = (UWorldPartition *)0x0;
  FWorldPartitionUpdateStreamingCurrentState::FWorldPartitionUpdateStreamingCurrentState
            (&this->CurrentState);
  this->CurrentStreamingPerformance = Good;
  this->bCurrentBlockOnSlowStreaming = false;
  (this->TargetState).ToLoadCells.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetState).ToLoadCells.ArrayNum = 0;
  (this->TargetState).ToLoadCells.ArrayMax = 0;
  (this->TargetState).ToActivateCells.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetState).ToActivateCells.ArrayNum = 0;
  (this->TargetState).ToActivateCells.ArrayMax = 0;
  (this->TargetState).ToDeactivateCells.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetState).ToDeactivateCells.ArrayNum = 0;
  (this->TargetState).ToDeactivateCells.ArrayMax = 0;
  (this->TargetState).ToUnloadCells.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetState).ToUnloadCells.ArrayNum = 0;
  (this->TargetState).ToUnloadCells.ArrayMax = 0;
  (this->TargetState).StreamingPerformance = Good;
  (this->TargetState).bBlockOnSlowStreaming = false;
  (this->TargetState).bUpdateServerEpoch = false;
  FWorldPartitionUpdateStreamingCurrentState::FWorldPartitionUpdateStreamingCurrentState
            (&this->AsyncTaskCurrentState);
  (this->AsyncTaskTargetState).ToLoadCells.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncTaskTargetState).ToLoadCells.ArrayNum = 0;
  (this->AsyncTaskTargetState).ToLoadCells.ArrayMax = 0;
  (this->AsyncTaskTargetState).ToActivateCells.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AsyncTaskTargetState).ToActivateCells.ArrayNum = 0;
  (this->AsyncTaskTargetState).ToActivateCells.ArrayMax = 0;
  (this->AsyncTaskTargetState).ToDeactivateCells.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AsyncTaskTargetState).ToDeactivateCells.ArrayNum = 0;
  (this->AsyncTaskTargetState).ToDeactivateCells.ArrayMax = 0;
  (this->AsyncTaskTargetState).ToUnloadCells.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->AsyncTaskTargetState).ToUnloadCells.ArrayNum = 0;
  (this->AsyncTaskTargetState).ToUnloadCells.ArrayMax = 0;
  (this->AsyncTaskTargetState).StreamingPerformance = Good;
  (this->AsyncTaskTargetState).bBlockOnSlowStreaming = false;
  (this->AsyncTaskTargetState).bUpdateServerEpoch = false;
  this->AsyncUpdateStreamingStateTask = (TTask<void>)0x0;
  *(undefined8 *)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0xc) =
       0xffffffff;
  *(undefined8 *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0x20) =
       0;
  this->bShouldMergeStreamingSourceInfo = false;
  this->bCriticalPerformanceRequestedBlockTillOnWorld = false;
  this->CriticalPerformanceBlockTillLevelStreamingCompletedEpoch = 0;
  this->ProcessedToLoadCells = 0;
  this->ProcessedToActivateCells = 0;
  this->ServerStreamingStateEpoch = -0x80000000;
  this->ServerStreamingEnabledEpoch = -0x80000000;
  this->UpdateStreamingHash = 0;
  this->UpdateStreamingSourcesHash = 0;
  this->UpdateStreamingStateCounter = 0;
  this->AsyncUpdateTaskState = None;
  this->AsyncShouldSkipUpdateCounter = 0;
  *(undefined4 *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0x28) =
       0;
  *(undefined4 *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0x2c) =
       0x80;
  *(undefined4 *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0x30) =
       0xffffffff;
  *(undefined4 *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0x34) =
       0;
  *(undefined8 *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0x40) =
       0;
  (this->CachedServerDisallowStreamingOutDataLayers).field0_0x0.TypedValue.HashSize = 0;
  *(undefined8 *)&(this->FrameActivateCells).Elements = 0;
  *(undefined8 *)&(this->FrameActivateCells).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FrameActivateCells).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FrameActivateCells).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FrameActivateCells).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FrameActivateCells).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FrameActivateCells).Elements.field_0x34 = 0;
  (this->FrameActivateCells).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FrameActivateCells).HashSize = 0;
  *(undefined8 *)&(this->FrameLoadCells).Elements = 0;
  *(undefined8 *)&(this->FrameLoadCells).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FrameLoadCells).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FrameLoadCells).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FrameLoadCells).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FrameLoadCells).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FrameLoadCells).Elements.field_0x34 = 0;
  (this->FrameLoadCells).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FrameLoadCells).HashSize = 0;
  *(undefined8 *)&(this->FrameAnalysePerformanceCells).Elements = 0;
  *(undefined8 *)&(this->FrameAnalysePerformanceCells).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FrameAnalysePerformanceCells).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FrameAnalysePerformanceCells).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FrameAnalysePerformanceCells).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FrameAnalysePerformanceCells).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FrameAnalysePerformanceCells).Elements.field_0x34 = 0;
  (this->FrameAnalysePerformanceCells).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FrameAnalysePerformanceCells).HashSize = 0;
  this->OnScreenMessageStartTime = 0.0;
  this->OnScreenMessageStreamingPerformance = Good;
  this->bOnScreenMessageShouldBlock = false;
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar2) {
    if ((this->_padding_ & 0x10) == 0) {
      this->WorldPartition = (UWorldPartition *)this->_padding_;
      if ((UWorldPartition *)this->_padding_ != (UWorldPartition *)0x0) {
        return this;
      }
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3241921295901786207>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\WorldPartitionStreamingPolicy.h"
                         ,0x5f,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UWorldPartitionStreamingPolicy *)(*pcVar1)();
        return pUVar3;
      }
      this->WorldPartition = (UWorldPartition *)0x0;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldPartition",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                       ,100,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UWorldPartitionStreamingPolicy *)(*pcVar1)();
      return pUVar3;
    }
  }
  return this;
}

// ~UWorldPartitionStreamingPolicy @ 148ab7860

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
UWorldPartitionStreamingPolicy::~UWorldPartitionStreamingPolicy
          (UWorldPartitionStreamingPolicy *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  void *pvVar4;
  TTask<void> TVar5;
  FScriptContainerElement *pFVar6;
  
  this->_padding_ = (longlong)&___7UWorldPartitionStreamingPolicy__6B_;
  (this->FrameAnalysePerformanceCells).HashSize = 0;
  FVar3 = (this->FrameAnalysePerformanceCells).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FrameAnalysePerformanceCells).Elements);
  (this->FrameLoadCells).HashSize = 0;
  FVar3 = (this->FrameLoadCells).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FrameLoadCells).Elements);
  (this->FrameActivateCells).HashSize = 0;
  FVar3 = (this->FrameActivateCells).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FrameActivateCells).Elements);
  if (*(int *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0xc) != -1
     ) {
    (this->CachedServerDisallowStreamingOutDataLayers).field0_0x0.TypedValue.HashSize = 0;
    pvVar4 = *(void **)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 +
                       0x40);
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->CachedServerDisallowStreamingOutDataLayers);
  }
  TVar5 = this->AsyncUpdateStreamingStateTask;
  if (TVar5 != (TTask<void>)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)TVar5 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)TVar5)(TVar5,1);
    }
  }
  pFVar6 = (this->AsyncTaskTargetState).ToUnloadCells.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->AsyncTaskTargetState).ToDeactivateCells.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->AsyncTaskTargetState).ToActivateCells.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->AsyncTaskTargetState).ToLoadCells.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  FWorldPartitionUpdateStreamingCurrentState::~FWorldPartitionUpdateStreamingCurrentState
            (&this->AsyncTaskCurrentState);
  pFVar6 = (this->TargetState).ToUnloadCells.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->TargetState).ToDeactivateCells.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->TargetState).ToActivateCells.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->TargetState).ToLoadCells.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  FWorldPartitionUpdateStreamingCurrentState::~FWorldPartitionUpdateStreamingCurrentState
            (&this->CurrentState);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 148abaa50

bool __thiscall
`UWorldPartitionStreamingPolicy::IsStreamingCompleted'::__l6::<lambda_1>::operator()
          (void *this,UWorldPartitionRuntimeCell *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  UDataLayerManager *this_00;
  longlong lVar3;
  byte bVar4;
  EDataLayerRuntimeState EVar5;
  longlong *plVar6;
  FName *pFVar7;
  UDataLayerInstance *pUVar8;
  FName *pFVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  
  bVar4 = (**(code **)(param_1->_padding_ + 0x2e0))(param_1);
  if (bVar4 == *(byte *)((longlong)this + 0x108)) {
    return true;
  }
  if ((*(char *)((longlong)this + 0x10a) == '\0') && (param_1->bIsHLOD != false)) {
    return true;
  }
  if ((param_1->DataLayers).DataLayers.ArrayNum != 0) {
    EVar5 = UWorldPartitionRuntimeCell::GetCellEffectiveWantedState
                      (param_1,*(FWorldPartitionStreamingContext **)((longlong)this + 0x118));
    if (bVar4 == 0) {
      bVar10 = EVar5 == Unloaded;
    }
    else if (bVar4 == 1) {
      bVar10 = EVar5 == Loaded;
    }
    else {
      if (bVar4 != 2) goto LAB_148abaad2;
      bVar10 = EVar5 == Activated;
    }
    if (bVar10) {
      return true;
    }
  }
LAB_148abaad2:
  if (*(byte *)((longlong)this + 0x108) < bVar4) {
    plVar6 = (longlong *)(**(code **)(param_1->_padding_ + 0x38))(&param_1->_padding_);
    pFVar9 = (FName *)*plVar6;
    lVar3 = plVar6[1];
    pFVar1 = pFVar9 + (int)lVar3;
    while( true ) {
      if ((int)plVar6[1] != (int)lVar3) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar9 == pFVar1) goto LAB_148abab55;
      pFVar7 = *(FName **)((longlong)this + 0x20);
      pFVar2 = pFVar7 + *(int *)((longlong)this + 0x28);
      if (pFVar7 != pFVar2) {
        do {
          if (*pFVar7 == *pFVar9) goto LAB_148abab4f;
          pFVar7 = pFVar7 + 1;
        } while (pFVar7 != pFVar2);
      }
      this_00 = *(UDataLayerManager **)((longlong)this + 0x110);
      pUVar8 = UDataLayerManager::GetDataLayerInstanceFromName(this_00,pFVar9);
      EVar5 = UDataLayerManager::GetDataLayerInstanceEffectiveRuntimeState(this_00,pUVar8);
      if (EVar5 != Unloaded) break;
LAB_148abab4f:
      pFVar9 = pFVar9 + 1;
    }
  }
  else {
LAB_148abab55:
    if ((*(char *)((longlong)this + 0x109) != '\0') || (bVar4 < *(byte *)((longlong)this + 0x108)))
    {
      **(undefined1 **)((longlong)this + 0x120) = 0;
      return false;
    }
  }
  return true;
}

// operator() @ 148abb970

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
`UWorldPartitionStreamingPolicy::OnStreamingStateUpdated'::__l14::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_UWorldPartitionStreamingPolicy::OnStreamingStateUpdated(void)_::_14_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_WorldPartitionStreamingPolicy_AsyncUpdateStreamingState>
  FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_WorldPartitionStreamingPolicy_AsyncUpdateStreamingState ==
          (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_UWorldPartitionStreamingPolicy::OnStreamingStateUpdated(void)_::_14_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_WorldPartitionStreamingPolicy_AsyncUpdateStreamingState>
           )0x0) {
        pFVar4 = ::FName::FName((FName *)&local_res8.s,
                                "STAT_WorldPartitionStreamingPolicy_AsyncUpdateStreamingState");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_WorldPartitionStreamingPolicy_AsyncUpdateStreamingState,*pFVar4,
                   L"STAT_WorldPartitionStreamingPolicy_AsyncUpdateStreamingState","STATGROUP_Quick"
                   ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar5 = StatPtr_STAT_WorldPartitionStreamingPolicy_AsyncUpdateStreamingState;
  if (StatPtr_STAT_WorldPartitionStreamingPolicy_AsyncUpdateStreamingState ==
      (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_UWorldPartitionStreamingPolicy::OnStreamingStateUpdated(void)_::_14_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_WorldPartitionStreamingPolicy_AsyncUpdateStreamingState>
       )0x0) {
    pFVar4 = ::FName::FName(&local_res10,
                            "STAT_WorldPartitionStreamingPolicy_AsyncUpdateStreamingState");
    FVar5 = (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_UWorldPartitionStreamingPolicy::OnStreamingStateUpdated(void)_::_14_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_WorldPartitionStreamingPolicy_AsyncUpdateStreamingState>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_WorldPartitionStreamingPolicy_AsyncUpdateStreamingState,
                         *pFVar4,L"STAT_WorldPartitionStreamingPolicy_AsyncUpdateStreamingState",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    UWorldPartitionStreamingPolicy::UpdateStreamingStateInternal
              (this,(FWorldPartitionUpdateStreamingTargetState *)
                    (*(longlong *)((longlong)this + 0x2c0) + 0x280));
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                   ,0x31a);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    UWorldPartitionStreamingPolicy::UpdateStreamingStateInternal
              (this,(FWorldPartitionUpdateStreamingTargetState *)
                    (*(longlong *)((longlong)this + 0x2c0) + 0x280));
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
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

// operator() @ 148abc650

bool __thiscall
`UWorldPartitionStreamingPolicy::GetIntersectingCells'::__l2::<lambda_2>::operator()
          (void *this,UWorldPartitionRuntimeCell *param_1,UWorldPartitionRuntimeCell *param_2)

{
  UWorldPartitionRuntimeCellData *pUVar1;
  TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
  *this_00;
  double dVar2;
  bool bVar3;
  int iVar4;
  double *pdVar5;
  FName *this_01;
  FName *pFVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  pUVar1 = (param_1->RuntimeCellData).field0_0x0.DebugPtr;
  iVar4 = (**(code **)(pUVar1->_padding_ + 0x2e0))
                    (pUVar1,(param_2->RuntimeCellData).field0_0x0.DebugPtr);
  if (iVar4 != 0) {
    return SUB41((uint)iVar4 >> 0x1f,0);
  }
  this_00 = *(TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
              **)this;
  pdVar5 = TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
           ::Find(this_00,param_2);
  uVar9 = (undefined4)__real_7fefffffffffffff;
  uVar10 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar11 = uVar9;
  uVar12 = uVar10;
  if (pdVar5 != (double *)0x0) {
    uVar11 = SUB84(*pdVar5,0);
    uVar12 = (int)((ulonglong)*pdVar5 >> 0x20);
  }
  pdVar5 = TMapBase<UWorldPartitionRuntimeCell_const_*,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UWorldPartitionRuntimeCell_const_*,double,0>_>
           ::Find(this_00,param_1);
  if (pdVar5 != (double *)0x0) {
    uVar9 = SUB84(*pdVar5,0);
    uVar10 = (undefined4)((ulonglong)*pdVar5 >> 0x20);
  }
  dVar2 = (double)CONCAT44(uVar10,uVar9) - (double)CONCAT44(uVar12,uVar11);
  uVar7 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar8,uVar7) &&
      (double)CONCAT44(uVar8,uVar7) != __real_3e45798ee2308c3a) {
    bVar3 = dVar2 < 0.0;
  }
  else {
    this_01 = (FName *)(**(code **)(param_1->_padding_ + 0x60))(&param_1->_padding_,local_res10);
    pFVar6 = (FName *)(**(code **)(param_2->_padding_ + 0x60))(&param_2->_padding_,local_res18);
    iVar4 = ::FName::Compare(this_01,pFVar6);
    bVar3 = SUB41((uint)iVar4 >> 0x1f,0);
  }
  return bVar3;
}

// operator() @ 148abd3f0

bool __thiscall
`UWorldPartitionStreamingPolicy::UpdateStreamingStateInternal'::__l39::<lambda_2>::operator()
          (void *this,UWorldPartitionRuntimeCell *param_1,EStreamingSourceTargetState param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UWorldPartitionRuntimeCell *local_res10;
  UWorldPartitionRuntimeCell *local_res18;
  UWorldPartitionRuntimeCell *local_res20;
  
  local_res10 = param_1;
  if (param_2 == Loaded) {
    TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
    ::Emplace<UWorldPartitionRuntimeCell_const_*_const_&>
              (*(TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
                 **)(*(longlong *)this + 0xa8),&local_res20,(bool *)&local_res10);
  }
  else {
    if (param_2 == Activated) {
      TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
      ::Emplace<UWorldPartitionRuntimeCell_const_*_const_&>
                (*(TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
                   **)(*(longlong *)this + 0xa0),&local_res18,(bool *)&local_res10);
      return true;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                       ,0x1b1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return true;
}

// operator() @ 148abda80

void __thiscall
`UWorldPartitionStreamingPolicy::UpdateStreamingStateInternal'::__l42::<lambda_4>::operator()
          (void *this,UWorldPartitionRuntimeCell *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  EDataLayerRuntimeState EVar4;
  bool bVar5;
  int iVar6;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar7;
  UWorldPartitionRuntimeCell **ppUVar8;
  UWorldPartitionRuntimeCell *local_res8;
  UWorldPartitionRuntimeCell *local_res10;
  UWorldPartitionRuntimeCell *local_res18;
  UWorldPartitionRuntimeCell *local_res20;
  UWorldPartitionRuntimeCell *local_58;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_50;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_48 [3];
  
  local_res10 = param_1;
  if (((param_1->DataLayers).DataLayers.ArrayNum == 0) ||
     (cVar3 = (**(code **)(param_1->_padding_ + 0x48))
                        (&param_1->_padding_,
                         *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x98)),
     cVar3 == '\0')) {
LAB_148abdbd4:
    EVar4 = UWorldPartitionRuntimeCell::GetCellEffectiveWantedState
                      (param_1,*(FWorldPartitionStreamingContext **)((longlong)this + 8));
    if (EVar4 == Unloaded) {
      return;
    }
    if (EVar4 != Loaded) {
      if (EVar4 != Activated) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                           ,0x1e9,L"");
        if (!bVar5) {
          return;
        }
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ppUVar8 = &local_res20;
      this_00 = *(TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
                  **)(*(longlong *)this + 0xa0);
      goto LAB_148abdc45;
    }
    ppUVar8 = &local_58;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)this + 0x90);
    local_50.DebugPtr = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (UE::GC::MarkAsReachable((UObject *)param_1),
       UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    uVar7 = uVar7 >> 0x10 ^ uVar7;
    iVar6 = TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>
                      ((TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
                        *)(lVar1 + 0x60),uVar7,
                       (TObjectPtr<UWorldPartitionRuntimeCell_const_> *)&local_50.ObjectPtr);
    if (iVar6 != -1) {
      ppUVar8 = &local_res8;
      this_00 = *(TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
                  **)(*(longlong *)this + 0xa0);
      goto LAB_148abdc45;
    }
    if (((param_1->DataLayers).DataLayers.ArrayNum == 0) ||
       (EVar4 = UWorldPartitionRuntimeCell::GetCellEffectiveWantedState
                          (param_1,*(FWorldPartitionStreamingContext **)((longlong)this + 8)),
       EVar4 != Activated)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    lVar1 = *(longlong *)(*(longlong *)this + 0x90);
    local_48[0].DebugPtr = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (UE::GC::MarkAsReachable((UObject *)param_1),
       UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    iVar6 = TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>
                      ((TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
                        *)(lVar1 + 0x10),uVar7,
                       (TObjectPtr<UWorldPartitionRuntimeCell_const_> *)&local_48[0].ObjectPtr);
    if ((iVar6 == -1) || (bVar5)) goto LAB_148abdbd4;
    ppUVar8 = &local_res18;
  }
  this_00 = *(TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
              **)(*(longlong *)this + 0xa8);
LAB_148abdc45:
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  ::Emplace<UWorldPartitionRuntimeCell_const_*_const_&>(this_00,ppUVar8,(bool *)&local_res10);
  return;
}

// operator() @ 148abdc70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UWorldPartitionStreamingPolicy::UpdateStreamingStateInternal'::__l2::<lambda_6>::operator()
          (void *this,UWorldPartitionRuntimeCell *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  UObjectBaseUtility *this_00;
  UPackage *pUVar9;
  longlong *plVar10;
  
  if (*(char *)(*(longlong *)this + 0x11) == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InParams.bIsServer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                       ,0x20a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  cVar6 = (**(code **)(param_1->_padding_ + 0x348))(param_1);
  if (cVar6 != '\0') {
    this_00 = (UObjectBaseUtility *)(**(code **)(param_1->_padding_ + 0x2d8))(param_1);
    if (this_00 != (UObjectBaseUtility *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x10);
      pUVar9 = UObjectBaseUtility::GetPackage(this_00);
      lVar2 = pUVar9->_padding_;
      uVar7 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
      if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
        plVar10 = (longlong *)plVar1[8];
        if ((longlong *)plVar1[8] == (longlong *)0x0) {
          plVar10 = plVar1 + 7;
        }
        iVar8 = *(int *)((longlong)plVar10 +
                        (ulonglong)((int)plVar1[9] - 1U & (int)((ulonglong)lVar2 >> 0x20) + uVar7) *
                        4);
        if (iVar8 != -1) {
          do {
            if (*(longlong *)(*plVar1 + (longlong)iVar8 * 0x10) == lVar2) {
              if ((5 < (byte)LogWorldPartition._0_1_) &&
                 (*(char *)(*(longlong *)((longlong)this + 8) + 0x42) != '\0')) {
                UE::Logging::Private::BasicLog<6>
                          (&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
              }
              *(undefined1 *)(*(longlong *)((longlong)this + 8) + 0x42) = 0;
              return true;
            }
            iVar8 = *(int *)(*plVar1 + 8 + (longlong)iVar8 * 0x10);
          } while (iVar8 != -1);
        }
      }
    }
  }
  return false;
}

// operator() @ 148abdd90

void __thiscall
`UWorldPartitionStreamingPolicy::UpdateStreamingStateInternal'::__l114::<lambda_9>::operator()
          (void *this,
          TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  UWorldPartitionRuntimeCell *pUVar5;
  code *pcVar6;
  TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  UWorldPartitionRuntimeCell *local_a8;
  TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar9 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar9 != 0) {
    puVar16 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_148abde2d;
      uVar14 = puVar16[lVar10 + 1];
    }
    uStack_94 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_84 = local_res18 + -1 + local_80;
    if (iVar9 < iStack_84) {
      iStack_84 = iVar9;
    }
  }
LAB_148abde2d:
  uVar14 = *(uint *)&(param_1->Elements).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_78 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar9 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar14 != uVar3) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148abdf30;
      uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uVar14 = local_res20 + -1 + uVar13;
    if ((int)uVar3 < (int)uVar14) {
      uVar14 = uVar3;
    }
  }
LAB_148abdf30:
  do {
    pTVar7 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_68.CurrentBitIndex == uVar14) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    {
      return;
    }
    lVar10 = *(longlong *)this;
    plVar4 = *(longlong **)(lVar10 + 0xa0);
    pUVar5 = *(UWorldPartitionRuntimeCell **)
              (*(longlong *)&pTVar7->Elements + (longlong)TStack_68.CurrentBitIndex * 0x10);
    uVar13 = ((uint)((ulonglong)pUVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar5 >> 4)) *
             -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    uVar13 = uVar13 >> 0x10 ^ uVar13;
    if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
      plVar11 = plVar4 + 7;
      if ((longlong *)plVar4[8] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar4[8];
      }
      iVar9 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[9] - 1U & uVar13) * 4);
      if (iVar9 != -1) {
        do {
          if (*(UWorldPartitionRuntimeCell **)(*plVar4 + (longlong)iVar9 * 0x10) == pUVar5)
          goto LAB_148abe138;
          iVar9 = *(int *)(*plVar4 + 8 + (longlong)iVar9 * 0x10);
        } while (iVar9 != -1);
      }
    }
    plVar4 = *(longlong **)(lVar10 + 0xa8);
    if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
      plVar11 = plVar4 + 7;
      if ((longlong *)plVar4[8] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar4[8];
      }
      iVar9 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[9] - 1U & uVar13) * 4);
      if (iVar9 != -1) {
        do {
          if (*(UWorldPartitionRuntimeCell **)(*plVar4 + (longlong)iVar9 * 0x10) == pUVar5)
          goto LAB_148abe138;
          iVar9 = *(int *)(*plVar4 + 8 + (longlong)iVar9 * 0x10);
        } while (iVar9 != -1);
      }
    }
    if (((*(char *)(lVar10 + 0x10) == '\0') || (*(char *)(lVar10 + 0x11) == '\0')) ||
       (bVar8 = UpdateStreamingStateInternal'::__l2::<lambda_6>::operator()
                          ((void *)((longlong)this + 0x10),pUVar5), !bVar8)) {
      lVar10 = *(longlong *)((longlong)this + 8);
      local_a8 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UWorldPartitionRuntimeCell *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      if (((*(UWorldPartitionRuntimeCell ***)(lVar10 + 0x30) <= &local_a8) &&
          (&local_a8 < *(UWorldPartitionRuntimeCell ***)(lVar10 + 0x30) + *(int *)(lVar10 + 0x3c)))
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = *(int *)(lVar10 + 0x38);
      if (iVar9 == *(int *)(lVar10 + 0x3c)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(lVar10 + 0x30),(int *)(lVar10 + 0x3c));
      }
      *(int *)(lVar10 + 0x38) = iVar9 + 1;
      *(UWorldPartitionRuntimeCell **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar9 * 8) =
           local_a8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_a8 != (UWorldPartitionRuntimeCell *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_a8);
      }
    }
LAB_148abe138:
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// CanAddCellToWorld @ 148ac1cc0

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
UWorldPartitionStreamingPolicy::CanAddCellToWorld
          (UWorldPartitionStreamingPolicy *this,UWorldPartitionRuntimeCell *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1032,"UWorldPartitionStreamingPolicy::CanAddCellToWorld",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
               ,0x408);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1032);
  }
  if ((param_1 == (UWorldPartitionRuntimeCell *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCell",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                         ,0x40a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = UWorldPartition::IsInitialized(this->WorldPartition);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorldPartition->IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                         ,0x40b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = UWorldPartition::IsServer(this->WorldPartition);
  if ((bVar2) || (bVar2 = IsInBlockTillLevelStreamingCompleted(this,true), !bVar2)) {
    uVar3 = 1;
  }
  else {
    uVar3 = param_1->bBlockOnSlowLoading;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)uVar3;
}

// CanAddLoadedLevelToWorld @ 148ac1dc0

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
UWorldPartitionStreamingPolicy::CanAddLoadedLevelToWorld
          (UWorldPartitionStreamingPolicy *this,ULevel *param_1)

{
  return true;
}

// ComputeServerStreamingEnabledEpoch @ 148ac1f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UWorldPartitionStreamingPolicy::ComputeServerStreamingEnabledEpoch
          (UWorldPartitionStreamingPolicy *this)

{
  bool bVar1;
  
  bVar1 = UWorldPartition::IsServer(this->WorldPartition);
  if (bVar1) {
    bVar1 = UWorldPartition::IsServerStreamingEnabled(this->WorldPartition);
    return (int)bVar1;
  }
  return -0x80000000;
}

// ComputeUpdateStreamingHash @ 148ac2400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall
UWorldPartitionStreamingPolicy::ComputeUpdateStreamingHash
          (UWorldPartitionStreamingPolicy *this,bool param_1)

{
  UWorldPartition **ppUVar1;
  UWorldPartitionRuntimeHash *pUVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  UWorld *this_00;
  UWorldPartitionSubsystem *pUVar8;
  longlong lVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  undefined1 local_res10 [8];
  UWorldPartition **local_res18;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId167,
               "UWorldPartitionStreamingPolicy::ComputeUpdateStreamingHash",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
               ,0xa7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId167);
  }
  if (param_1) {
    pUVar2 = (this->WorldPartition->RuntimeHash).field0_0x0.DebugPtr;
    if ((pUVar2 == (UWorldPartitionRuntimeHash *)0x0) ||
       (cVar3 = (**(code **)(pUVar2->_padding_ + 0x308))(), cVar3 == '\0')) {
      iVar12 = 0;
      lVar9 = 0x11c;
    }
    else {
      iVar12 = 1;
      lVar9 = 0x120;
    }
    local_res18 = &this->WorldPartition;
    uVar10 = 0xffffffff;
    pUVar2 = (this->WorldPartition->RuntimeHash).field0_0x0.DebugPtr;
    if (pUVar2 != (UWorldPartitionRuntimeHash *)0x0) {
      iVar5 = (**(code **)(pUVar2->_padding_ + 0x2d0))();
      uVar10 = ~(iVar5 + 0xde377978U);
      uVar6 = UWorldPartitionSubsystem::GetOverriddenLoadingRangesEpoch();
      uVar10 = uVar10 * 0x40 + (uVar10 >> 2) + uVar6 + 0x9e3779b9 ^ uVar10;
    }
    ppUVar1 = &this->WorldPartition;
    local_res18 = ppUVar1;
    bVar4 = UWorldPartition::IsServer(*ppUVar1);
    if (bVar4) {
      bVar4 = UWorldPartition::IsServerStreamingEnabled(*ppUVar1);
      uVar6 = (uint)bVar4;
    }
    else {
      uVar6 = 0x80000000;
    }
    uVar10 = uVar10 * 0x40 + uVar6 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10;
    iVar7 = UWorldPartition::GetStreamingStateEpoch(*local_res18);
    iVar5 = (this->CurrentState).StreamingSources.ArrayNum;
    uVar10 = uVar10 * 0x40 + (uVar10 >> 2) + iVar7 + -0x61c88647 ^ uVar10;
    pFVar11 = (this->CurrentState).StreamingSources.AllocatorInstance.Data;
    uVar10 = iVar12 + uVar10 * 0x40 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar10;
    pFVar13 = pFVar11 + (longlong)iVar5 * 0x160;
    while( true ) {
      if ((this->CurrentState).StreamingSources.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FWorldPartitionStreamingSource_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar11 == pFVar13) break;
      uVar10 = uVar10 ^ (uVar10 >> 2) + 0x9e3779b9 + *(int *)(pFVar11 + lVar9) + uVar10 * 0x40;
      pFVar11 = pFVar11 + 0x160;
    }
    bVar4 = UWorldPartition::IsServer(this->WorldPartition);
    if (bVar4) {
      this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      pUVar8 = UWorld::GetSubsystem<UWorldPartitionSubsystem>(this_00);
      uVar10 = uVar10 ^ (uVar10 >> 2) +
                        pUVar8->ServerClientsVisibleLevelsHash + 0x9e3779b9 + uVar10 * 0x40;
    }
    uVar10 = ~uVar10;
  }
  else {
    uVar10 = 0;
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return uVar10;
}

// ConvertEditorPathToRuntimePath @ 148ac2fa0

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
UWorldPartitionStreamingPolicy::ConvertEditorPathToRuntimePath
          (UWorldPartitionStreamingPolicy *this,FSoftObjectPath *param_1,FSoftObjectPath *param_2)

{
  return false;
}

// DrawRuntimeCellsDetails @ 148ac8240

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
UWorldPartitionStreamingPolicy::DrawRuntimeCellsDetails
          (UWorldPartitionStreamingPolicy *this,UCanvas *param_1,TVector2<double> *param_2)

{
  return;
}

// DrawRuntimeHash2D @ 148ac8250

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
UWorldPartitionStreamingPolicy::DrawRuntimeHash2D
          (UWorldPartitionStreamingPolicy *this,FWorldPartitionDraw2DContext *param_1)

{
  UWorldPartitionRuntimeHash *pUVar1;
  undefined1 uVar2;
  
  if ((0 < (this->CurrentState).StreamingSources.ArrayNum) &&
     (pUVar1 = (this->WorldPartition->RuntimeHash).field0_0x0.DebugPtr,
     pUVar1 != (UWorldPartitionRuntimeHash *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148ac8266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x2f0))();
    return (bool)uVar2;
  }
  return false;
}

// DrawRuntimeHash3D @ 148ac8280

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
UWorldPartitionStreamingPolicy::DrawRuntimeHash3D(UWorldPartitionStreamingPolicy *this)

{
  UWorldPartitionRuntimeHash *pUVar1;
  bool bVar2;
  
  bVar2 = UWorldPartition::IsInitialized(this->WorldPartition);
  if ((bVar2) &&
     (pUVar1 = (this->WorldPartition->RuntimeHash).field0_0x0.DebugPtr,
     pUVar1 != (UWorldPartitionRuntimeHash *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148ac82af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2f8))(pUVar1,&this->CurrentState);
    return;
  }
  return;
}

// GetCellsToReprioritize @ 148acc4b0

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

void __thiscall
UWorldPartitionStreamingPolicy::GetCellsToReprioritize
          (UWorldPartitionStreamingPolicy *this,
          TArray<UWorldPartitionRuntimeCell_const_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UWorldPartitionRuntimeCell_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  *pTVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForElementType<unsigned_int> FVar6;
  TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
  *pTVar7;
  TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
  *pTVar8;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  *pTVar9;
  bool bVar10;
  int iVar11;
  byte bVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  ForElementType<unsigned_int> FVar16;
  undefined1 *puVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  undefined1 local_res20 [8];
  undefined1 local_148 [4];
  uint local_144;
  longlong *local_140;
  undefined8 local_138;
  TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
  *local_130;
  int iStack_128;
  uint uStack_124;
  undefined1 *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  ForElementType<unsigned_int> local_100;
  ulonglong local_f8;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
  *local_e0;
  TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  undefined4 local_5c;
  undefined4 local_3c;
  
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                          ,0x3a5,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar11 = *(int *)&(this->CurrentState).LoadedCells.Elements.field_0x28;
  local_120 = &(this->CurrentState).LoadedCells.Elements.field_0x10;
  iVar19 = 0;
  local_130 = &(this->CurrentState).LoadedCells;
  iStack_128 = 0;
  local_f8 = 1;
  local_110 = 0;
  uStack_124 = 1;
  iStack_114 = 0;
  if (iVar11 != 0) {
    puVar18 = *(uint **)&(this->CurrentState).LoadedCells.Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)local_120;
    }
    uStack_124 = *puVar18;
    local_110 = 0;
    while (uStack_124 == 0) {
      lVar13 = (longlong)iStack_128;
      local_110 = local_110 + 0x20;
      iStack_128 = iStack_128 + 1;
      uStack_124 = 1;
      iStack_114 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_128) goto LAB_148acc59f;
      uStack_124 = (puVar18 + 1)[lVar13];
    }
    uStack_124 = -uStack_124 & uStack_124;
    uVar3 = (ulonglong)uStack_124 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_f0 = (int)lVar13;
    iStack_114 = local_110 + -1 + local_f0;
    if (iVar11 < iStack_114) {
      iStack_114 = iVar11;
    }
  }
LAB_148acc59f:
  uStack_10c = local_5c;
  iStack_108 = *(int *)&(this->CurrentState).LoadedCells.Elements.field_0x8 -
               *(int *)&(this->CurrentState).LoadedCells.Elements.field_0x34;
  local_144 = *(uint *)&(this->CurrentState).LoadedCells.Elements.field_0x28;
  uVar21 = local_144 & 0xffffffe0;
  TStack_d0._padding_ = CONCAT44(uStack_124,iStack_128);
  uStack_118 = 0xffffffff;
  TStack_d0.CurrentBitIndex = iStack_114;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)local_144 >> 5;
  TStack_d0._28_4_ = local_5c;
  TStack_d0.BaseBitIndex = local_110;
  uStack_b0 = CONCAT44(uStack_104,iStack_108);
  bVar12 = (byte)local_144;
  local_100 = (ForElementType<unsigned_int>)local_120;
  local_e0 = local_130;
  local_d8 = local_130;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_120;
  if ((((int)local_144 < 0) || (iVar11 < (int)local_144)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar7 = local_e0;
  FVar6 = local_100;
  uVar15 = *(int *)((longlong)local_100 + 0x18);
  uVar20 = local_144;
  if (local_144 != uVar15) {
    FVar16 = *(ForElementType<unsigned_int> *)((longlong)local_100 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_100 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_100;
    }
    uVar20 = -1 << (bVar12 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar14 * 4);
    while (uVar20 == 0) {
      lVar13 = (longlong)iVar14;
      uVar21 = uVar21 + 0x20;
      iVar14 = iVar14 + 1;
      local_144 = uVar15;
      uVar20 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_148acc6d0;
      uVar20 = *(uint *)((undefined1 *)((longlong)FVar16 + 4) + lVar13 * 4);
    }
    uVar3 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_ec = (int)lVar13;
    local_144 = local_ec + -1 + uVar21;
    uVar20 = local_144;
    if ((int)uVar15 < (int)local_144) {
      local_144 = uVar15;
      uVar20 = uVar15;
    }
  }
LAB_148acc6d0:
  while( true ) {
    pTVar8 = local_d8;
    if (*(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34 !=
        (int)uStack_b0) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_d0.CurrentBitIndex == uVar20) &&
        ((ForElementType<unsigned_int>)TStack_d0.Array == FVar6)) && (pTVar8 == pTVar7)) break;
    local_140 = *(longlong **)
                 (*(longlong *)&pTVar8->Elements + (longlong)TStack_d0.CurrentBitIndex * 0x10);
    lVar13 = (**(code **)(*local_140 + 0x2d8))();
    if (lVar13 == 0) {
      pFVar4 = (param_1->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_140) &&
          ((FScriptContainerElement *)&local_140 < pFVar4 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == param_1->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar11 + 1;
      *(longlong **)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_140;
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  local_110 = 0;
  puVar1 = &(this->CurrentState).ActivatedCells.PendingAddToWorldCells.Elements.field_0x10;
  iVar11 = *(int *)&(this->CurrentState).ActivatedCells.PendingAddToWorldCells.Elements.field_0x28;
  pTVar2 = &(this->CurrentState).ActivatedCells.PendingAddToWorldCells;
  iStack_114 = 0;
  if (iVar11 != 0) {
    puVar18 = *(uint **)&(this->CurrentState).ActivatedCells.PendingAddToWorldCells.Elements.
                         field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar21 = *puVar18;
    local_110 = 0;
    while (uVar21 == 0) {
      lVar13 = (longlong)iVar19;
      local_110 = local_110 + 0x20;
      iVar19 = iVar19 + 1;
      iStack_114 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_148acc872;
      uVar21 = puVar18[lVar13 + 1];
    }
    local_f8 = (ulonglong)(-uVar21 & uVar21);
    uVar3 = local_f8 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_e8 = (int)lVar13;
    iStack_114 = local_110 + -1 + local_e8;
    if (iVar11 < iStack_114) {
      iStack_114 = iVar11;
    }
  }
LAB_148acc872:
  uVar21 = *(uint *)&(this->CurrentState).ActivatedCells.PendingAddToWorldCells.Elements.field_0x28;
  uStack_124 = (uint)local_f8;
  uStack_10c = local_3c;
  iStack_108 = *(int *)&(this->CurrentState).ActivatedCells.PendingAddToWorldCells.Elements.
                        field_0x8 -
               *(int *)&(this->CurrentState).ActivatedCells.PendingAddToWorldCells.Elements.
                        field_0x34;
  uVar15 = uVar21 & 0xffffffe0;
  uStack_118 = 0xffffffff;
  TStack_a0._padding_ = CONCAT44(uStack_124,iVar19);
  TStack_a0.CurrentBitIndex = iStack_114;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar21 >> 5;
  TStack_a0._28_4_ = local_3c;
  TStack_a0.BaseBitIndex = local_110;
  uStack_80 = CONCAT44(uStack_104,iStack_108);
  local_130 = (TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
               *)pTVar2;
  iStack_128 = iVar19;
  local_120 = puVar1;
  local_a8 = pTVar2;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar11 < (int)uVar21)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar20 = *(uint *)&(this->CurrentState).ActivatedCells.PendingAddToWorldCells.Elements.field_0x28;
  if (uVar21 != uVar20) {
    puVar17 = *(undefined1 **)
               &(this->CurrentState).ActivatedCells.PendingAddToWorldCells.Elements.field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
    while (uVar21 == 0) {
      lVar13 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar21 = uVar20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_148acc990;
      uVar21 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_e4 = (int)lVar13;
    uVar21 = local_e4 + -1 + uVar15;
    if ((int)uVar20 < (int)uVar21) {
      uVar21 = uVar20;
    }
  }
LAB_148acc990:
  while( true ) {
    pTVar9 = local_a8;
    if (*(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34 !=
        (int)uStack_80) {
      local_148[0] = 0;
      `TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_148);
    }
    if (((TStack_a0.CurrentBitIndex == uVar21) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    break;
    local_138 = *(undefined8 *)
                 (*(longlong *)&pTVar9->Elements + (longlong)TStack_a0.CurrentBitIndex * 0x10);
    pFVar4 = (param_2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_138) &&
        ((FScriptContainerElement *)&local_138 < pFVar4 + (longlong)param_2->ArrayMax * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar11 = param_2->ArrayNum;
    if (iVar11 == param_2->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar11 + 1;
    *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_138;
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  return;
}

// GetCellsToUpdate @ 148accab0

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
UWorldPartitionStreamingPolicy::GetCellsToUpdate
          (UWorldPartitionStreamingPolicy *this,
          TArray<UWorldPartitionRuntimeCell_const_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UWorldPartitionRuntimeCell_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                       ,0x39d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<UWorldPartitionRuntimeCell_const_*,TSizedDefaultAllocator<32>_>::
  Append<TObjectPtr<UWorldPartitionRuntimeCell_const_>,TSizedDefaultAllocator<32>_>
            (param_1,&(this->TargetState).ToLoadCells);
  TArray<UWorldPartitionRuntimeCell_const_*,TSizedDefaultAllocator<32>_>::
  Append<TObjectPtr<UWorldPartitionRuntimeCell_const_>,TSizedDefaultAllocator<32>_>
            (param_2,&(this->TargetState).ToActivateCells);
  return;
}

// GetIntersectingCells @ 148acd9c0

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
UWorldPartitionStreamingPolicy::GetIntersectingCells
          (UWorldPartitionStreamingPolicy *this,
          TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>_> *param_1,
          TArray<IWorldPartitionCell_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  UWorldPartitionRuntimeHash *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStackY_178 [32];
  FIdentityFunctor local_128;
  undefined1 local_127 [7];
  longlong *local_120;
  TArray<UWorldPartitionRuntimeCell_const_*,TSizedDefaultAllocator<32>_> local_118;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  *local_108;
  code *local_100;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  **local_f8;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  local_e8;
  TSparseArray<TSparseSetElement<TTuple<UWorldPartitionRuntimeCell_const_*,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((this->WorldPartition == (UWorldPartition *)0x0) ||
     ((this->WorldPartition->RuntimeHash).field0_0x0.DebugPtr == (UWorldPartitionRuntimeHash *)0x0))
  {
    bVar5 = false;
  }
  else {
    pFVar8 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    pFVar10 = pFVar8 + (longlong)iVar2 * 0x108;
    local_98._32_8_ = 0;
    local_98._40_4_ = 0;
    local_98._52_4_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_e8.Elements._0_8_ = 0;
    local_e8.Elements._8_8_ = 0;
    local_e8.Elements._32_8_ = 0;
    local_e8.Elements._40_4_ = 0;
    local_e8.Elements._52_4_ = 0;
    local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_e8.HashSize = 0;
    local_98._44_4_ = 0x80;
    local_98._48_4_ = 0xffffffff;
    local_e8.Elements._44_4_ = 0x80;
    local_e8.Elements._48_4_ = 0xffffffff;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_127[0] = 0;
        `TCheckedPointerIterator<FWorldPartitionStreamingQuerySource_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_127);
      }
      if (pFVar8 == pFVar10) break;
      local_108 = &local_e8;
      pUVar3 = (this->WorldPartition->RuntimeHash).field0_0x0.DebugPtr;
      local_f8 = &local_108;
      local_100 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UWorldPartitionStreamingPolicy::GetIntersectingCells'::__l9::<lambda_1>,bool,UWorldPartitionRuntimeCell_const_*>
                  ::Call;
      (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,pFVar8,&local_100,&local_98);
      pFVar8 = pFVar8 + 0x108;
    }
    TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
    ::Array(&local_e8,&local_118);
    AlgoImpl::
    IntroSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionStreamingPolicy::GetIntersectingCells_::__l2::<lambda_2>_>
              ((UWorldPartitionRuntimeCell **)local_118.AllocatorInstance.Data,local_118.ArrayNum,
               local_128,(FWorldPartitionQueryCache *)&local_98);
    if (local_118.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_118.ArrayNum);
    }
    piVar1 = &param_2->ArrayMax;
    if (param_2->ArrayMax < local_118.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_118.ArrayNum,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
    }
    iVar2 = local_118.ArrayNum;
    pFVar8 = local_118.AllocatorInstance.Data + (longlong)local_118.ArrayNum * 8;
    FVar9.Data = local_118.AllocatorInstance.Data;
    while( true ) {
      if (local_118.ArrayNum != iVar2) {
        local_128 = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<UWorldPartitionRuntimeCell_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_128);
      }
      if (FVar9.Data == pFVar8) break;
      local_120 = &(*(UWorldPartitionRuntimeCell **)FVar9.Data)->_padding_;
      if (*(UWorldPartitionRuntimeCell **)FVar9.Data == (UWorldPartitionRuntimeCell *)0x0) {
        local_120 = (longlong *)0x0;
      }
      pFVar10 = (param_2->AllocatorInstance).Data;
      if ((pFVar10 <= (FScriptContainerElement *)&local_120) &&
         ((FScriptContainerElement *)&local_120 < pFVar10 + (longlong)*piVar1 * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,piVar1);
      }
      FVar9.Data = FVar9.Data + 8;
      param_2->ArrayNum = iVar7 + 1;
      *(longlong **)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_120;
    }
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
    local_e8.HashSize = 0;
    if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_e8.Elements);
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<UWorldPartitionRuntimeCell_const_*,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UWorldPartitionRuntimeCell_const_*,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98);
    bVar5 = true;
  }
  return bVar5;
}

// GetOnScreenMessages @ 148ace130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UWorldPartitionStreamingPolicy::GetOnScreenMessages
          (UWorldPartitionStreamingPolicy *this,
          TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
          *param_1)

{
  EWorldPartitionStreamingPerformance EVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  int iVar5;
  wchar_t *pwVar6;
  bool bVar7;
  LARGE_INTEGER local_res8;
  TPairInitializer<FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&> local_res18;
  LARGE_INTEGER *local_88;
  FText *local_80;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_res8.s.LowPart = 0;
  QueryPerformanceCounter(&local_res8);
  if (__real_4000000000000000 <=
      ((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) *
       FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000) -
      this->OnScreenMessageStartTime) {
    this->OnScreenMessageStreamingPerformance = Good;
    return;
  }
  EVar1 = this->OnScreenMessageStreamingPerformance;
  if (EVar1 == Slow) {
    pFVar2 = &local_78;
    bVar7 = this->bOnScreenMessageShouldBlock == false;
    pwVar6 = L"True";
    iVar5 = 0x10;
    if (bVar7) {
      pwVar6 = L"False";
      pFVar2 = &local_68;
      iVar5 = 0;
    }
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (pFVar2,L"WorldPartitionStreamingPolicy",pwVar6,pwVar6);
    pFVar2 = FText::FText(&local_28,pFVar2);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"WorldPartitionStreamingPolicy",L"WPStreamingWarning",
                        L"[Slow] WorldPartition Streaming Performance [Blocking:{0}]");
    pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_38,pFVar3,Default);
    local_80 = FText::Format<FText>(&local_48,pFVar4,pFVar2);
    local_88 = &local_res8;
    local_res8.s.LowPart._0_1_ = 1;
    TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>_>
              (param_1,&local_res18,(bool *)&local_88);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    if ((bVar7) && (local_68.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
  }
  else {
    if (EVar1 != Critical) {
      if (EVar1 != Immediate) {
        return;
      }
      bVar7 = this->bOnScreenMessageShouldBlock;
      pwVar6 = L"True";
      pFVar2 = &local_48;
      if (bVar7 == false) {
        pwVar6 = L"False";
        pFVar2 = &local_58;
      }
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (pFVar2,L"WorldPartitionStreamingPolicy",pwVar6,pwVar6);
      pFVar2 = FText::FText(&local_38,pFVar2);
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"WorldPartitionStreamingPolicy",L"WPStreamingImmediate",
                          L"[Immediate] WorldPartition Streaming Performance [Blocking:{0}]");
      pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar3,Default);
      local_80 = FText::Format<FText>(&local_78,pFVar4,pFVar2);
      local_88 = &local_res8;
      local_res8.s.LowPart._0_1_ = 2;
      TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>_>
                (param_1,&local_res18,(bool *)&local_88);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (((2U - (bVar7 != false) & 2) != 0) && (local_58.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      local_78.TextData.Reference = local_48.TextData.Reference;
      if (bVar7 == false) {
        return;
      }
      goto LAB_148ace488;
    }
    pFVar2 = &local_78;
    bVar7 = this->bOnScreenMessageShouldBlock == false;
    pwVar6 = L"True";
    iVar5 = 4;
    if (bVar7) {
      pwVar6 = L"False";
      pFVar2 = &local_68;
      iVar5 = 0;
    }
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (pFVar2,L"WorldPartitionStreamingPolicy",pwVar6,pwVar6);
    pFVar2 = FText::FText(&local_28,pFVar2);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"WorldPartitionStreamingPolicy",L"WPStreamingCritical",
                        L"[Critical] WorldPartition Streaming Performance [Blocking:{0}]");
    pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_38,pFVar3,Default);
    local_80 = FText::Format<FText>(&local_48,pFVar4,pFVar2);
    local_88 = &local_res8;
    local_res8.s.LowPart._0_1_ = 2;
    TSet<TTuple<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_FCoreDelegates::EOnScreenMessageSeverity_&&,FText_&&>_>
              (param_1,&local_res18,(bool *)&local_88);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    if ((bVar7) && (local_68.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
  }
  if (iVar5 == 0) {
    return;
  }
LAB_148ace488:
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return;
}

// GetPrivateStaticClass @ 148acfe50

UClass * __cdecl UWorldPartitionStreamingPolicy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionStreamingPolicy",
               &Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy.InnerSingleton,
               StaticRegisterNativesUWorldPartitionStreamingPolicy,0x450,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionStreamingPolicy>,
               InternalVTableHelperCtorCaller<UWorldPartitionStreamingPolicy>,local_res8,
               UObject::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy.InnerSingleton;
}

// GetServerDisallowedStreamingOutDataLayers @ 148ad1010

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

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
UWorldPartitionStreamingPolicy::GetServerDisallowedStreamingOutDataLayers
          (UWorldPartitionStreamingPolicy *this)

{
  TOptional<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> *this_00;
  void *pvVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  UDataLayerManager *this_01;
  FName *pFVar5;
  UDataLayerInstance *pUVar6;
  bool *pbVar7;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar8;
  int iVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_c0;
  undefined1 local_b0 [4];
  FName local_ac;
  FName local_a4;
  undefined1 local_9c [20];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (*(int *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0xc) == -1
     ) {
    local_88.Elements._0_8_ = 0;
    local_88.Elements._8_8_ = 0;
    local_88.Elements._32_8_ = 0;
    local_88.Elements._40_4_ = 0;
    local_88.Elements._44_4_ = 0x80;
    local_88.Elements._48_4_ = 0xffffffff;
    local_88.Elements._52_4_ = 0;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.HashSize = 0;
    if (1 < GServerDisallowStreamingOutDataLayersString.Data.ArrayNum) {
      local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.ArrayNum = 0;
      local_c0.ArrayMax = 0;
      ::FString::ParseIntoArray(&GServerDisallowStreamingOutDataLayersString,&local_c0,L",",true);
      this_01 = UWorldPartition::GetDataLayerManager(this->WorldPartition);
      if (this_01 != (UDataLayerManager *)0x0) {
        iVar3 = local_c0.ArrayNum;
        pFVar11 = local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 0x10;
        FVar10.Data = local_c0.AllocatorInstance.Data;
        while( true ) {
          if (local_c0.ArrayNum != iVar3) {
            local_c8[0] = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_c8);
          }
          if (FVar10.Data == pFVar11) break;
          iVar9 = *(int *)(FVar10.Data + 8) + -1;
          if (*(int *)(FVar10.Data + 8) == 0) {
            iVar9 = 0;
          }
          pFVar5 = ::FName::FName(&local_a4,iVar9,*(wchar_t **)FVar10.Data,FNAME_Add);
          local_ac = *pFVar5;
          pUVar6 = UDataLayerManager::GetDataLayerInstanceFromAssetName(this_01,&local_ac);
          if (pUVar6 != (UDataLayerInstance *)0x0) {
            pbVar7 = (bool *)(**(code **)(pUVar6->_padding_ + 800))(pUVar6,local_9c);
            TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                      (&local_88,(FName *)local_b0,pbVar7);
          }
          FVar10.Data = FVar10.Data + 0x10;
        }
      }
      DestructItems<FString,int>((FString *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
      if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
      }
    }
    this_00 = &this->CachedServerDisallowStreamingOutDataLayers;
    if (&local_88 != (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00) {
      (this->CachedServerDisallowStreamingOutDataLayers).field0_0x0.TypedValue.HashSize = 0;
      pvVar1 = *(void **)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 +
                         0x40);
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_00);
      *(undefined8 *)&this_00->field0_0x0 = 0;
      *(undefined8 *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 8)
           = 0;
      *(undefined8 *)
       ((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0x20) = 0;
      *(undefined4 *)
       ((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0x28) = 0;
      *(undefined4 *)
       ((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0x2c) = 0x80;
      *(undefined4 *)
       ((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0x30) =
           0xffffffff;
      *(undefined4 *)
       ((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0x34) = 0;
      *(undefined8 *)
       ((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0x40) = 0;
      (this->CachedServerDisallowStreamingOutDataLayers).field0_0x0.TypedValue.HashSize = 0;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)this_00,&local_88);
      if ((*(int *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0xc)
           == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar2)();
        return pTVar8;
      }
    }
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
  }
  if ((*(int *)((longlong)&(this->CachedServerDisallowStreamingOutDataLayers).field0_0x0 + 0xc) ==
       -1) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(*pcVar2)();
    return pTVar8;
  }
  return (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
         &this->CachedServerDisallowStreamingOutDataLayers;
}

// GetSubObject @ 148ad1c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __thiscall
UWorldPartitionStreamingPolicy::GetSubObject(UWorldPartitionStreamingPolicy *this,wchar_t *param_1)

{
  return (UObject *)0x0;
}

// InjectExternalStreamingObject @ 148ad2c10

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
UWorldPartitionStreamingPolicy::InjectExternalStreamingObject
          (UWorldPartitionStreamingPolicy *this,URuntimeHashExternalStreamingObjectBase *param_1)

{
  return true;
}

// IsInBlockTillLevelStreamingCompleted @ 148ad4520

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
UWorldPartitionStreamingPolicy::IsInBlockTillLevelStreamingCompleted
          (UWorldPartitionStreamingPolicy *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                       ,0x8c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  lVar4 = (**(code **)(this->_padding_ + 0x180))(this);
  if (param_1) {
    if (((*(int *)(lVar4 + 0x194) != 0) && (this->CurrentStreamingPerformance != Good)) &&
       (this->CriticalPerformanceBlockTillLevelStreamingCompletedEpoch == *(int *)(lVar4 + 0x198)))
    {
      return true;
    }
    return false;
  }
  return *(int *)(lVar4 + 0x194) != 0;
}

// IsStreamingCompleted @ 148ad47d0

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
UWorldPartitionStreamingPolicy::IsStreamingCompleted
          (UWorldPartitionStreamingPolicy *this,
          TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *this_00;
  int *piVar1;
  TArray<FStreamingSourceShape,TSizedDefaultAllocator<32>_> *pTVar2;
  ForElementType<FSetElementId> FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  UWorld *this_01;
  UDataLayerManager *this_02;
  FWorldPartitionStreamingQuerySource *pFVar13;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar14;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar15;
  FScriptContainerElement *pFVar16;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar17;
  ForAnyElementType FVar18;
  ForElementType<FSetElementId> *pFVar19;
  FScriptContainerElement *pFVar20;
  ForAnyElementType local_98;
  undefined8 local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TArray<FName,TSizedDefaultAllocator<32>_> local_78;
  TArray<FName,TSizedDefaultAllocator<32>_> local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  bVar7 = false;
  bVar11 = false;
  this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if ((this_01 == (UWorld *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                         ,0x420,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  bVar8 = UWorld::IsGameWorld(this_01);
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("World->IsGameWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                         ,0x421,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  this_02 = UWorldPartition::GetDataLayerManager(this->WorldPartition);
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  iVar12 = UE::Core::Private::
           ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x108,8,&local_98,(int *)((longlong)&local_90 + 4));
  local_90 = CONCAT44(local_90._4_4_,iVar12 + 1);
  pFVar13 = FWorldPartitionStreamingQuerySource::FWorldPartitionStreamingQuerySource
                      ((FWorldPartitionStreamingQuerySource *)
                       (local_98.Data + (longlong)iVar12 * 0x108));
  pFVar13->bDataLayersOnly = false;
  pFVar13->bSpatialQuery = false;
  pTVar14 = UDataLayerManager::GetEffectiveActiveDataLayerNames(this_02);
  pTVar15 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array(pTVar14,&local_78);
  pTVar17 = &pFVar13->DataLayers;
  if (pTVar17 != pTVar15) {
    pFVar20 = (pTVar17->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar17->AllocatorInstance).Data = (pTVar15->AllocatorInstance).Data;
    (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar13->DataLayers).ArrayNum = pTVar15->ArrayNum;
    (pFVar13->DataLayers).ArrayMax = pTVar15->ArrayMax;
    pTVar15->ArrayNum = 0;
    pTVar15->ArrayMax = 0;
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  cVar10 = (**(code **)(this->_padding_ + 0x2e0))(this,2,&local_98,0);
  if (cVar10 == '\0') {
LAB_148ad4ca9:
    DestructItems<FWorldPartitionStreamingQuerySource,int>
              ((FWorldPartitionStreamingQuerySource *)local_98.Data,(int)local_90);
    FVar18.Data = local_98.Data;
LAB_148ad4cb9:
    if ((FWorldPartitionStreamingQuerySource *)FVar18.Data !=
        (FWorldPartitionStreamingQuerySource *)0x0) {
      FMemory::Free(FVar18.Data);
    }
    bVar11 = false;
  }
  else {
    pTVar14 = UDataLayerManager::GetEffectiveLoadedDataLayerNames(this_02);
    if (*(int *)&(pTVar14->Elements).field_0x8 != *(int *)&(pTVar14->Elements).field_0x34) {
      pFVar13->bDataLayersOnly = true;
      pTVar14 = UDataLayerManager::GetEffectiveLoadedDataLayerNames(this_02);
      pTVar15 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array(pTVar14,&local_68);
      if (pTVar17 != pTVar15) {
        pFVar20 = (pTVar17->AllocatorInstance).Data;
        if (pFVar20 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar20);
        }
        (pTVar17->AllocatorInstance).Data = (pTVar15->AllocatorInstance).Data;
        (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (pFVar13->DataLayers).ArrayNum = pTVar15->ArrayNum;
        (pFVar13->DataLayers).ArrayMax = pTVar15->ArrayMax;
        pTVar15->ArrayNum = 0;
        pTVar15->ArrayMax = 0;
      }
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      cVar10 = (**(code **)(this->_padding_ + 0x2e0))(this,1,&local_98,0);
      if (cVar10 == '\0') goto LAB_148ad4ca9;
    }
    DestructItems<FWorldPartitionStreamingQuerySource,int>
              ((FWorldPartitionStreamingQuerySource *)local_98.Data,(int)local_90);
    if ((FWorldPartitionStreamingQuerySource *)local_98.Data !=
        (FWorldPartitionStreamingQuerySource *)0x0) {
      FMemory::Free(local_98.Data);
    }
    if (param_1 == (TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *)0x0) {
      param_1 = &(this->CurrentState).StreamingSources;
    }
    iVar12 = param_1->ArrayNum;
    pFVar20 = (((TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> *)
               &param_1->AllocatorInstance)->AllocatorInstance).Data;
    if ((iVar12 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    pFVar16 = pFVar20 + (longlong)iVar12 * 0x160;
    if (pFVar20 != pFVar16) {
      pFVar19 = (ForElementType<FSetElementId> *)(pFVar20 + 0xa0);
      do {
        local_88.Data = (FScriptContainerElement *)0x0;
        local_80 = 0;
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x108,8,&local_88,(int *)((longlong)&local_80 + 4));
        local_80 = CONCAT44(local_80._4_4_,iVar12 + 1);
        pFVar13 = FWorldPartitionStreamingQuerySource::FWorldPartitionStreamingQuerySource
                            ((FWorldPartitionStreamingQuerySource *)
                             (local_88.Data + (longlong)iVar12 * 0x108));
        pFVar13->bSpatialQuery = true;
        pTVar14 = &pFVar13->TargetGrids;
        dVar6 = *(double *)(pFVar19 + -9);
        (pFVar13->Location).field0_0x0._s_0.X = (double)pFVar19[-10].SecondaryData;
        (pFVar13->Location).field0_0x0._s_0.Y = dVar6;
        (pFVar13->Location).field0_0x0._s_0.Z = (double)pFVar19[-9].SecondaryData;
        FVar3 = pFVar19[-8].SecondaryData;
        (pFVar13->Rotation).Pitch = *(double *)(pFVar19 + -8);
        (pFVar13->Rotation).Yaw = (double)FVar3;
        (pFVar13->Rotation).Roll = *(double *)(pFVar19 + -7);
        pFVar13->TargetBehavior = pFVar19[-4].InlineData[0];
        if (pTVar14 !=
            (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&pFVar19[-4].SecondaryData)
        {
          UE::Core::Private::
          CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                    (&(pFVar13->TargetGrids).Hash,&(pFVar13->TargetGrids).HashSize,pFVar19,
                     *(int *)pFVar19[1].InlineData);
          iVar12 = *(int *)pFVar19[-3].InlineData;
          TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Empty(&pTVar14->Elements,iVar12);
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar12,(ForAnyElementType *)pTVar14,
                     (int *)&(pFVar13->TargetGrids).Elements.field_0x8,
                     (int *)&(pFVar13->TargetGrids).Elements.field_0xc);
          this_00 = &(pFVar13->TargetGrids).Elements.field_0x10;
          *(undefined4 *)&(pFVar13->TargetGrids).Elements.field_0x30 =
               *(undefined4 *)&pFVar19[-1].SecondaryData;
          *(undefined4 *)&(pFVar13->TargetGrids).Elements.field_0x34 =
               *(undefined4 *)&pFVar19[-1].SecondaryData.field_0x4;
          if ((ForElementType<FSetElementId> *)this_00 != &pFVar19[-3].SecondaryData) {
            TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                      ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                       (TBitArray<FDefaultBitArrayAllocator> *)&pFVar19[-3].SecondaryData);
          }
          if (iVar12 != 0) {
            memcpy(*(void **)&pTVar14->Elements,(void *)pFVar19[-4].SecondaryData,
                   (longlong)iVar12 << 4);
          }
        }
        pTVar2 = &pFVar13->Shapes;
        if (pTVar2 != (TArray<FStreamingSourceShape,TSizedDefaultAllocator<32>_> *)
                      &pFVar19[6].SecondaryData) {
          iVar12 = *(int *)pFVar19[7].InlineData;
          piVar1 = &(pFVar13->Shapes).ArrayMax;
          FVar3 = pFVar19[6].SecondaryData;
          (pFVar13->Shapes).ArrayNum = iVar12;
          if ((iVar12 == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,iVar12,*piVar1,&pTVar2->AllocatorInstance,iVar12,piVar1);
            if (iVar12 != 0) {
              memcpy((pTVar2->AllocatorInstance).Data,(void *)FVar3,(longlong)iVar12 * 0x48);
            }
          }
        }
        pFVar13->bUseGridLoadingRange = true;
        pFVar13->Radius = 0.0;
        pFVar13->bDataLayersOnly = false;
        if (*(char *)&pFVar19[-7].SecondaryData == '\0') {
          bVar7 = true;
          pTVar14 = UDataLayerManager::GetEffectiveLoadedDataLayerNames(this_02);
          pTVar17 = &local_48;
        }
        else {
          bVar11 = true;
          pTVar14 = UDataLayerManager::GetEffectiveActiveDataLayerNames(this_02);
          pTVar17 = &local_58;
        }
        pTVar17 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array(pTVar14,pTVar17);
        pTVar15 = &pFVar13->DataLayers;
        if (pTVar15 != pTVar17) {
          pFVar4 = (pTVar15->AllocatorInstance).Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          (pTVar15->AllocatorInstance).Data = (pTVar17->AllocatorInstance).Data;
          (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (pFVar13->DataLayers).ArrayNum = pTVar17->ArrayNum;
          (pFVar13->DataLayers).ArrayMax = pTVar17->ArrayMax;
          pTVar17->ArrayNum = 0;
          pTVar17->ArrayMax = 0;
        }
        if ((bVar11) &&
           (bVar11 = false, local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
        if ((bVar7) &&
           (bVar7 = false, local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        cVar10 = (**(code **)(this->_padding_ + 0x2e0))
                           (this,(*(char *)&pFVar19[-7].SecondaryData != '\0') + '\x01',&local_88,0)
        ;
        if (cVar10 == '\0') {
          DestructItems<FWorldPartitionStreamingQuerySource,int>
                    ((FWorldPartitionStreamingQuerySource *)local_88.Data,(int)local_80);
          FVar18.Data = local_88.Data;
          goto LAB_148ad4cb9;
        }
        DestructItems<FWorldPartitionStreamingQuerySource,int>
                  ((FWorldPartitionStreamingQuerySource *)local_88.Data,(int)local_80);
        if ((FWorldPartitionStreamingQuerySource *)local_88.Data !=
            (FWorldPartitionStreamingQuerySource *)0x0) {
          FMemory::Free(local_88.Data);
        }
        pFVar20 = pFVar20 + 0x160;
        pFVar19 = pFVar19 + 0x16;
      } while (pFVar20 != pFVar16);
    }
    bVar11 = true;
  }
  return bVar11;
}

// IsStreamingCompleted @ 148ad4cf0

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
UWorldPartitionStreamingPolicy::IsStreamingCompleted
          (UWorldPartitionStreamingPolicy *this,EWorldPartitionRuntimeCellState param_1,
          TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  int iVar1;
  UWorldPartitionRuntimeHash *pUVar2;
  code *pcVar3;
  UClass *pUVar4;
  UWorld *pUVar5;
  FWorldPartitionStreamingQuerySource *pFVar6;
  FWorldPartitionStreamingQuerySource *pFVar7;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  EWorldPartitionRuntimeCellState local_1a7;
  undefined1 local_1a6;
  undefined1 local_1a5 [5];
  UDataLayerManager *local_1a0;
  code *local_198;
  FWorldPartitionStreamingQuerySource *local_190;
  FWorldPartitionStreamingContext local_188;
  FWorldPartitionStreamingQuerySource local_168;
  EWorldPartitionRuntimeCellState local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  UDataLayerManager *local_58;
  FWorldPartitionStreamingContext *local_50;
  undefined1 *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_1a7 = param_1;
  pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar5 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  FWorldPartitionStreamingContext::Create(&local_188,pUVar5);
  local_1a0 = UWorldPartition::GetDataLayerManager(this->WorldPartition);
  local_1a6 = UWorldPartitionHLODRuntimeSubsystem::IsHLODEnabled();
  iVar1 = param_2->ArrayNum;
  pFVar6 = (FWorldPartitionStreamingQuerySource *)(param_2->AllocatorInstance).Data;
  pFVar7 = pFVar6 + iVar1;
  local_1a8 = 1;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FWorldPartitionStreamingQuerySource_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_1a5);
    }
    if (pFVar6 == pFVar7) break;
    pUVar2 = (this->WorldPartition->RuntimeHash).field0_0x0.DebugPtr;
    pcVar3 = *(code **)(pUVar2->_padding_ + 0x2c0);
    FWorldPartitionStreamingQuerySource::FWorldPartitionStreamingQuerySource(&local_168,pFVar6);
    local_60 = local_1a7;
    local_5e = local_1a6;
    local_58 = local_1a0;
    local_50 = &local_188;
    local_48 = &local_1a8;
    local_190 = &local_168;
    local_198 = UE::Core::Private::Function::
                TFunctionRefCaller<`UWorldPartitionStreamingPolicy::IsStreamingCompleted'::__l6::<lambda_1>,bool,UWorldPartitionRuntimeCell_const_*>
                ::Call;
    local_5f = param_3;
    (*pcVar3)(pUVar2,pFVar6,&local_198,0);
    FWorldPartitionStreamingQuerySource::~FWorldPartitionStreamingQuerySource(&local_168);
    pFVar6 = pFVar6 + 1;
  }
  return (bool)local_1a8;
}

// IsUpdateStreamingOptimEnabled @ 148ad4e80

bool __cdecl UWorldPartitionStreamingPolicy::IsUpdateStreamingOptimEnabled(void)

{
  if ((IsUpdateOptimEnabled) &&
     ((0 < FWorldPartitionStreamingSource::LocationQuantization ||
      (0 < FWorldPartitionStreamingSource::RotationQuantization)))) {
    return true;
  }
  return false;
}

// OnCellHidden @ 148ad54e0

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
UWorldPartitionStreamingPolicy::OnCellHidden
          (UWorldPartitionStreamingPolicy *this,UWorldPartitionRuntimeCell *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_res8;
  UWorldPartitionRuntimeCell *local_res10;
  
  local_res8.DebugPtr = param_1;
  local_res10 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (param_1 != (UWorldPartitionRuntimeCell *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UWorldPartitionRuntimeCell *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  iVar2 = TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>
                    (&(this->CurrentState).ActivatedCells.Cells,uVar3 >> 0x10 ^ uVar3,
                     (TObjectPtr<UWorldPartitionRuntimeCell_const_> *)&local_res8.ObjectPtr);
  if (iVar2 != -1) {
    cVar1 = (**(code **)(param_1->_padding_ + 0x2f0))(param_1);
    if (cVar1 == '\0') {
      TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
      ::Emplace<UWorldPartitionRuntimeCell_const_*_const_&>
                (&(this->CurrentState).ActivatedCells.PendingAddToWorldCells,&local_res8.DebugPtr,
                 (bool *)&local_res10);
    }
  }
  return;
}

// OnCellShown @ 148ad5600

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
UWorldPartitionStreamingPolicy::OnCellShown
          (UWorldPartitionStreamingPolicy *this,UWorldPartitionRuntimeCell *param_1)

{
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  ::Remove(&(this->CurrentState).ActivatedCells.PendingAddToWorldCells,param_1);
  return;
}

// OnPreChangeStreamingContent @ 148ad5640

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
UWorldPartitionStreamingPolicy::OnPreChangeStreamingContent(UWorldPartitionStreamingPolicy *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_private:_bool___cdecl_UWorldPartitionStreamingPolicy::WaitForAsyncUpdateStreamingState(void)_::_15_::FStat_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState>
  FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 aFStackX_8 [2];
  FName FStackX_10;
  uint uStackX_18;
  uint uStackX_1c;
  LARGE_INTEGER LStackX_20;
  FName FStack_58;
  FName FStack_50;
  FName FStack_48;
  FStatMessage FStack_38;
  
  if (this->AsyncUpdateStreamingStateTask == (TTask<void>)0x0) {
    return;
  }
  if ((this->AsyncUpdateTaskState != Started) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncUpdateTaskState == EAsyncUpdateTaskState::Started",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                         ,0x2e8,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->AsyncUpdateStreamingStateTask == (TTask<void>)0x0) {
    return;
  }
  if (*(char *)((longlong)this->AsyncUpdateStreamingStateTask + 0xd0) != '\0') {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState ==
        (FThreadSafeStaticStat<_private:_bool___cdecl_UWorldPartitionStreamingPolicy::WaitForAsyncUpdateStreamingState(void)_::_15_::FStat_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState>
         )0x0) {
      pFVar7 = ::FName::FName(&FStack_58,
                              "STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState")
      ;
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState,
                 *pFVar7,L"STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState",
                 "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                 MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState;
  if (StatPtr_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_UWorldPartitionStreamingPolicy::WaitForAsyncUpdateStreamingState(void)_::_15_::FStat_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState>
       )0x0) {
    pFVar7 = ::FName::FName(&FStack_50,
                            "STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState");
    FVar8 = (FThreadSafeStaticStat<_private:_bool___cdecl_UWorldPartitionStreamingPolicy::WaitForAsyncUpdateStreamingState(void)_::_15_::FStat_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &
                         StatPtr_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState
                         ,*pFVar7,
                         L"STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar5 = false;
  bVar4 = false;
  FStack_48.ComparisonIndex.Value = 0;
  FStack_48.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar5 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        FStackX_10.ComparisonIndex.Value = FVar10.Value;
        FStackX_10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStackX_10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                   ,0x2ec);
        bVar5 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      uStackX_18 = FVar10.Value;
      uStackX_1c = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      goto LAB_148ae0b8a;
    }
  }
  bVar3 = false;
  FVar11 = FStack_48;
LAB_148ae0b8a:
  if (this->AsyncUpdateStreamingStateTask != (TTask<void>)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)this->AsyncUpdateStreamingStateTask);
  }
  if (((this->AsyncUpdateStreamingStateTask != (TTask<void>)0x0) &&
      (*(char *)((longlong)this->AsyncUpdateStreamingStateTask + 0xd0) == '\0')) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncUpdateStreamingStateTask.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                         ,0x2ee,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar11 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_38.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      FStack_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStackX_20);
      FStack_38.StatData.Pad[4] = '\0';
      FStack_38.StatData.Pad[5] = '\0';
      FStack_38.StatData.Pad[6] = '\0';
      FStack_38.StatData.Pad[7] = '\0';
      FStack_38.StatData.Pad[0] = LStackX_20.s.LowPart._0_1_;
      FStack_38.StatData.Pad[1] = LStackX_20.s.LowPart._1_1_;
      FStack_38.StatData.Pad[2] = LStackX_20.s.LowPart._2_1_;
      FStack_38.StatData.Pad[3] = LStackX_20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_38);
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

// OnStreamingStateUpdated @ 148ad5960

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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UWorldPartitionStreamingPolicy::OnStreamingStateUpdated(UWorldPartitionStreamingPolicy *this)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  TOptional<FWorldDataLayersEffectiveStates> *this_00;
  TTask<void> *pTVar3;
  int iVar4;
  atomic<unsigned_int> aVar5;
  FWorldDataLayersEffectiveStates *pFVar6;
  TTask<void> TVar7;
  code *pcVar8;
  bool bVar9;
  FUpdateStreamingStateParams *pFVar10;
  TTask<void> TVar11;
  FTaskHandle FVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStackY_8c8 [32];
  FTaskHandle local_898 [2];
  FUpdateStreamingStateParams local_888;
  <lambda_1> local_5c8;
  FUpdateStreamingStateParams local_2f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  if (this->AsyncUpdateTaskState == Pending) {
    bVar13 = -1 < CpuChannel->Enabled;
    if (bVar13) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId781,
                 "UWorldPartitionStreamingPolicy::OnStreamingStateUpdated",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                 ,0x30d);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId781);
    }
    bVar14 = -1 < CpuChannel->Enabled;
    if (bVar14) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId784,
                 "UWorldPartitionStreamingPolicy::PrepareAsyncTaskPayloads",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                 ,0x310);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId784);
    }
    TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_>::operator=
              (&(this->AsyncTaskCurrentState).StreamingSources,
               &(this->CurrentState).StreamingSources);
    TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
    ::operator=(&(this->AsyncTaskCurrentState).LoadedCells,&(this->CurrentState).LoadedCells);
    FActivatedCells::operator=
              (&(this->AsyncTaskCurrentState).ActivatedCells,&(this->CurrentState).ActivatedCells);
    if ((((((this->AsyncTaskTargetState).ToLoadCells.ArrayNum != 0) ||
          ((this->AsyncTaskTargetState).ToActivateCells.ArrayNum != 0)) ||
         ((this->AsyncTaskTargetState).ToUnloadCells.ArrayNum != 0)) ||
        ((this->AsyncTaskTargetState).ToDeactivateCells.ArrayNum != 0)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("AsyncTaskTargetState.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                           ,0x312,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar14 = -1 < CpuChannel->Enabled;
    if (bVar14) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId790,
                 "UWorldPartitionStreamingPolicy::CreateAndDispatchAsyncTasks",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                 ,0x316);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId790);
    }
    pFVar10 = FUpdateStreamingStateParams::FUpdateStreamingStateParams
                        (&local_2f8,this,&this->AsyncTaskCurrentState);
    bVar9 = IsInGameThread();
    if ((!bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                           ,0x513,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar6 = pFVar10->WorldDataLayersEffectiveStatesRef;
    this_00 = &pFVar10->WorldDataLayersEffectiveStatesCopy;
    if ((TOptional<FWorldDataLayersEffectiveStates> *)pFVar6 != this_00) {
      if ((pFVar10->WorldDataLayersEffectiveStatesCopy).bIsSet != false) {
        FWorldDataLayersEffectiveStates::~FWorldDataLayersEffectiveStates(&this_00->TypedValue);
      }
      FWorldDataLayersEffectiveStates::FWorldDataLayersEffectiveStates(&this_00->TypedValue,pFVar6);
      (pFVar10->WorldDataLayersEffectiveStatesCopy).bIsSet = true;
    }
    local_888.World = pFVar10->World;
    local_888.RuntimeHash = pFVar10->RuntimeHash;
    local_888.bCanStream = pFVar10->bCanStream;
    local_888.bIsServer = pFVar10->bIsServer;
    local_888.bIsStreamingInEnabled = pFVar10->bIsStreamingInEnabled;
    local_888.bIsServerStreamingEnabled = pFVar10->bIsServerStreamingEnabled;
    local_888.bIsServerStreamingOutEnabled = pFVar10->bIsServerStreamingOutEnabled;
    local_888.bIsBlockingCausedByBadStreamingPerformance =
         pFVar10->bIsBlockingCausedByBadStreamingPerformance;
    local_888.bIsPlaybackEnabled = pFVar10->bIsPlaybackEnabled;
    local_888.bMatchStarted = pFVar10->bMatchStarted;
    local_888.bShouldMergeStreamingSourceInfo = pFVar10->bShouldMergeStreamingSourceInfo;
    local_888.PolicyUpdateStreamingStateEpoch = pFVar10->PolicyUpdateStreamingStateEpoch;
    local_888.DataLayersLogicOperator = pFVar10->DataLayersLogicOperator;
    local_888.WorldPartitionInstanceTransform.Rotation.XY.m128d_f64[0] =
         (pFVar10->WorldPartitionInstanceTransform).Rotation.XY.m128d_f64[0];
    local_888.WorldPartitionInstanceTransform.Rotation.XY.m128d_f64[1] =
         (pFVar10->WorldPartitionInstanceTransform).Rotation.XY.m128d_f64[1];
    local_888.WorldPartitionInstanceTransform.Rotation.ZW.m128d_f64[0] =
         (pFVar10->WorldPartitionInstanceTransform).Rotation.ZW.m128d_f64[0];
    local_888.WorldPartitionInstanceTransform.Rotation.ZW.m128d_f64[1] =
         (pFVar10->WorldPartitionInstanceTransform).Rotation.ZW.m128d_f64[1];
    local_888.WorldPartitionInstanceTransform.Translation.XY.m128d_f64[0] =
         (pFVar10->WorldPartitionInstanceTransform).Translation.XY.m128d_f64[0];
    local_888.WorldPartitionInstanceTransform.Translation.XY.m128d_f64[1] =
         (pFVar10->WorldPartitionInstanceTransform).Translation.XY.m128d_f64[1];
    local_888.WorldPartitionInstanceTransform.Translation.ZW.m128d_f64[0] =
         (pFVar10->WorldPartitionInstanceTransform).Translation.ZW.m128d_f64[0];
    local_888.WorldPartitionInstanceTransform.Translation.ZW.m128d_f64[1] =
         (pFVar10->WorldPartitionInstanceTransform).Translation.ZW.m128d_f64[1];
    local_888.WorldPartitionInstanceTransform.Scale3D.XY.m128d_f64[0] =
         (pFVar10->WorldPartitionInstanceTransform).Scale3D.XY.m128d_f64[0];
    local_888.WorldPartitionInstanceTransform.Scale3D.XY.m128d_f64[1] =
         (pFVar10->WorldPartitionInstanceTransform).Scale3D.XY.m128d_f64[1];
    local_888.WorldPartitionInstanceTransform.Scale3D.ZW.m128d_f64[0] =
         (pFVar10->WorldPartitionInstanceTransform).Scale3D.ZW.m128d_f64[0];
    local_888.WorldPartitionInstanceTransform.Scale3D.ZW.m128d_f64[1] =
         (pFVar10->WorldPartitionInstanceTransform).Scale3D.ZW.m128d_f64[1];
    local_888.CurrentState = pFVar10->CurrentState;
    local_888.ServerDisallowedStreamingOutDataLayers =
         pFVar10->ServerDisallowedStreamingOutDataLayers;
    local_888.FrameActivateCells = pFVar10->FrameActivateCells;
    local_888.FrameLoadCells = pFVar10->FrameLoadCells;
    local_888.FrameAnalysePerformanceCells = pFVar10->FrameAnalysePerformanceCells;
    local_888.WorldDataLayersEffectiveStatesRef = pFVar10->WorldDataLayersEffectiveStatesRef;
    local_888.WorldDataLayersEffectiveStatesCopy.bIsSet =
         (pFVar10->WorldDataLayersEffectiveStatesCopy).bIsSet;
    if (local_888.WorldDataLayersEffectiveStatesCopy.bIsSet != false) {
      FWorldDataLayersEffectiveStates::FWorldDataLayersEffectiveStates
                (&local_888.WorldDataLayersEffectiveStatesCopy.TypedValue,&this_00->TypedValue);
    }
    if (local_2f8.WorldDataLayersEffectiveStatesCopy.bIsSet != false) {
      FWorldDataLayersEffectiveStates::~FWorldDataLayersEffectiveStates
                (&local_2f8.WorldDataLayersEffectiveStatesCopy.TypedValue);
    }
    FUpdateStreamingStateParams::FUpdateStreamingStateParams(&local_5c8.InputParams,&local_888);
    TVar11 = (TTask<void>)0x0;
    local_898[0].Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
    local_5c8.__this = this;
    UE::Tasks::Private::FTaskHandle::
    Launch<_UWorldPartitionStreamingPolicy::OnStreamingStateUpdated_::__l14::<lambda_1>_>
              (local_898,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp(792)"
               ,&local_5c8,Default,None,None);
    pTVar3 = &this->AsyncUpdateStreamingStateTask;
    FVar12.Pimpl.Reference = local_898[0].Pimpl.Reference;
    if (pTVar3 != (TTask<void> *)local_898) {
      TVar7 = *pTVar3;
      *pTVar3 = (TTask<void>)local_898[0].Pimpl.Reference;
      FVar12.Pimpl.Reference =
           (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
           (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar11;
      if (TVar7 != (TTask<void>)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)TVar7 + 0x30);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (*(code *)**(undefined8 **)TVar7)(TVar7,1);
        }
      }
    }
    if (FVar12.Pimpl.Reference != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &((FTaskBase *)FVar12.Pimpl.Reference)->RefCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<unsigned_int>)0x1) {
        (**(code **)((FTaskBase *)FVar12.Pimpl.Reference)->_padding_)(FVar12.Pimpl.Reference,1);
      }
    }
    if (local_5c8.InputParams.WorldDataLayersEffectiveStatesCopy.bIsSet != false) {
      FWorldDataLayersEffectiveStates::~FWorldDataLayersEffectiveStates
                (&local_5c8.InputParams.WorldDataLayersEffectiveStatesCopy.TypedValue);
    }
    this->AsyncUpdateTaskState = Started;
    if (local_888.WorldDataLayersEffectiveStatesCopy.bIsSet != false) {
      FWorldDataLayersEffectiveStates::~FWorldDataLayersEffectiveStates
                (&local_888.WorldDataLayersEffectiveStatesCopy.TypedValue);
    }
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// PostUpdateStreamingStateInternal_GameThread @ 148ad6160

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
UWorldPartitionStreamingPolicy::PostUpdateStreamingStateInternal_GameThread
          (UWorldPartitionStreamingPolicy *this,FWorldPartitionUpdateStreamingTargetState *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId685,
               "UWorldPartitionStreamingPolicy::PostUpdateStreamingStateInternal_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
               ,0x2ad);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId685);
  }
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                         ,0x2af,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1->ToUnloadCells).ArrayNum != 0) {
    (**(code **)(this->_padding_ + 0x348))(this,&param_1->ToUnloadCells);
    (param_1->ToUnloadCells).ArrayNum = 0;
    if ((param_1->ToUnloadCells).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(param_1->ToUnloadCells).AllocatorInstance,0,
                 &(param_1->ToUnloadCells).ArrayMax);
    }
  }
  bVar3 = UWorldPartition::IsServer(this->WorldPartition);
  iVar4 = (param_1->ToDeactivateCells).ArrayNum;
  if (bVar3) {
    if (iVar4 != 0) {
      pFVar6 = (param_1->ToDeactivateCells).AllocatorInstance.Data;
      pFVar1 = pFVar6 + (longlong)iVar4 * 8;
      while( true ) {
        if ((param_1->ToDeactivateCells).ArrayNum != iVar4) {
          `TCheckedPointerIterator<TObjectPtr<UWorldPartitionRuntimeCell_const_>,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar6 == pFVar1) break;
        local_res10 = 0;
        (**(code **)(this->_padding_ + 0x338))(this,*(undefined8 *)pFVar6);
        pFVar6 = pFVar6 + 8;
      }
      (param_1->ToDeactivateCells).ArrayNum = 0;
      if ((param_1->ToDeactivateCells).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(param_1->ToDeactivateCells).AllocatorInstance,0,
                   &(param_1->ToDeactivateCells).ArrayMax);
      }
    }
    if (param_1->bUpdateServerEpoch == false) {
      this->UpdateStreamingHash = 0;
    }
    else {
      iVar4 = UWorldPartition::GetStreamingStateEpoch(this->WorldPartition);
      this->ServerStreamingStateEpoch = iVar4;
      bVar3 = UWorldPartition::IsServer(this->WorldPartition);
      if (bVar3) {
        bVar3 = UWorldPartition::IsServerStreamingEnabled(this->WorldPartition);
        uVar5 = (uint)bVar3;
      }
      else {
        uVar5 = 0x80000000;
      }
      this->ServerStreamingEnabledEpoch = uVar5;
      if (5 < (byte)LogWorldPartition._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      }
    }
  }
  else if ((iVar4 != 0) &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("bIsServer || InOutTargetState.ToDeactivateCells.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                              ,0x2b9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UpdateStreamingPerformance(this,param_1->StreamingPerformance,param_1->bBlockOnSlowStreaming);
  if (!bVar7) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// RemoveExternalStreamingObject @ 148ad8d20

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
UWorldPartitionStreamingPolicy::RemoveExternalStreamingObject
          (UWorldPartitionStreamingPolicy *this,URuntimeHashExternalStreamingObjectBase *param_1)

{
  return true;
}

// SetCellStateToActivated @ 148adaca0

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
UWorldPartitionStreamingPolicy::SetCellStateToActivated
          (UWorldPartitionStreamingPolicy *this,UWorldPartitionRuntimeCell *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  TObjectPtr<UWorldPartitionRuntimeCell_const_> local_res8;
  UWorldPartitionRuntimeCell *local_res20;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_58;
  UWorldPartitionRuntimeCell *local_50;
  FName local_48;
  UWorldPartitionRuntimeCell *local_40;
  UWorldPartitionRuntimeCell *local_38;
  FString local_30;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                         ,0x3d7,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = UWorldPartition::IsStreamingInEnabled(this->WorldPartition);
  if (bVar2) {
    local_58.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (param_1 != (UWorldPartitionRuntimeCell *)0x0) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UWorldPartitionRuntimeCell *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
    }
    uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    iVar4 = TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>
                      (&(this->CurrentState).LoadedCells,uVar5 >> 0x10 ^ uVar5,
                       (TObjectPtr<UWorldPartitionRuntimeCell_const_> *)&local_58.ObjectPtr);
    if (iVar4 == -1) {
      if (*param_2 < 1) {
        return;
      }
      cVar3 = (**(code **)(param_1->_padding_ + 0x2f0))(param_1);
      if (cVar3 == '\0') {
        *param_2 = *param_2 + -1;
      }
    }
    else {
      local_50 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (UWorldPartitionRuntimeCell *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
      ::Remove(&(this->CurrentState).LoadedCells,
               (TObjectPtr<UWorldPartitionRuntimeCell_const_>)&local_50);
    }
    if (5 < (byte)LogWorldPartition._0_1_) {
      local_48 = (FName)param_1->_padding_;
      ::FName::ToString(&local_48,&local_30);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
    local_40 = param_1;
    local_38 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UWorldPartitionRuntimeCell *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
    ::Emplace<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>
              (&(this->CurrentState).ActivatedCells.Cells,&local_res8,(bool *)&local_40);
    cVar3 = (**(code **)(param_1->_padding_ + 0x2f0))(param_1);
    if (cVar3 == '\0') {
      TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
      ::Emplace<UWorldPartitionRuntimeCell_const_*_const_&>
                (&(this->CurrentState).ActivatedCells.PendingAddToWorldCells,&local_res20,
                 (bool *)&local_38);
    }
    (**(code **)(param_1->_padding_ + 0x2c8))(param_1);
    this->ProcessedToActivateCells = this->ProcessedToActivateCells + 1;
  }
  return;
}

// SetCellStateToLoaded @ 148adaea0

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
UWorldPartitionStreamingPolicy::SetCellStateToLoaded
          (UWorldPartitionStreamingPolicy *this,UWorldPartitionRuntimeCell *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  TObjectPtr<UWorldPartitionRuntimeCell_const_> local_res8;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_res10 [2];
  UWorldPartitionRuntimeCell *local_res20;
  FName local_48;
  UWorldPartitionRuntimeCell *local_40;
  FString local_38;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                         ,0x3b7,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res10[0].DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_1 != (UWorldPartitionRuntimeCell *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UWorldPartitionRuntimeCell *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar4 = TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>
                    (&(this->CurrentState).ActivatedCells.Cells,uVar5 >> 0x10 ^ uVar5,
                     (TObjectPtr<UWorldPartitionRuntimeCell_const_> *)&local_res10[0].ObjectPtr);
  if (iVar4 == -1) {
    bVar2 = UWorldPartition::IsStreamingInEnabled(this->WorldPartition);
    if (!bVar2) {
      return;
    }
    if (*param_2 < 1) {
      return;
    }
    (**(code **)(param_1->_padding_ + 0x2b0))(param_1);
    cVar3 = (**(code **)(param_1->_padding_ + 0x2f0))(param_1);
    if (cVar3 == '\0') {
      *param_2 = *param_2 + -1;
    }
  }
  else {
    (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
    ::Remove(&(this->CurrentState).ActivatedCells.Cells,
             (TObjectPtr<UWorldPartitionRuntimeCell_const_>)&local_res20);
    TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
    ::Remove(&(this->CurrentState).ActivatedCells.PendingAddToWorldCells,param_1);
  }
  if (5 < (byte)LogWorldPartition._0_1_) {
    local_48 = (FName)param_1->_padding_;
    ::FName::ToString(&local_48,&local_38);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  local_40 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
  ::Emplace<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>
            (&(this->CurrentState).LoadedCells,&local_res8,(bool *)&local_40);
  this->ProcessedToLoadCells = this->ProcessedToLoadCells + 1;
  return;
}

// SetCellsStateToUnloaded @ 148adb070

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
UWorldPartitionStreamingPolicy::SetCellsStateToUnloaded
          (UWorldPartitionStreamingPolicy *this,
          TArray<TObjectPtr<UWorldPartitionRuntimeCell_const_>,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FName *pFVar1;
  int iVar2;
  FName FVar3;
  char cVar4;
  uint uVar5;
  FName *pFVar6;
  bool bVar7;
  FName local_res10;
  FString local_38;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1016,
               "UWorldPartitionStreamingPolicy::SetCellsStateToUnloaded",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
               ,0x3f8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1016);
  }
  pFVar6 = (FName *)(param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar6 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UWorldPartitionRuntimeCell_const_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res10);
    }
    if (pFVar6 == pFVar1) break;
    FVar3 = *pFVar6;
    cVar4 = (**(code **)(*(longlong *)FVar3 + 0x2c0))(FVar3);
    if (cVar4 != '\0') {
      if (5 < (byte)LogWorldPartition._0_1_) {
        local_res10 = *(FName *)((longlong)FVar3 + 0x18);
        ::FName::ToString(&local_res10,&local_38);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)(*(longlong *)FVar3 + 0x2b8))(FVar3);
      local_res10 = FVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar3);
      }
      TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
      ::Remove(&(this->CurrentState).ActivatedCells.Cells,
               (TObjectPtr<UWorldPartitionRuntimeCell_const_>)&local_res10);
      TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
      ::Remove(&(this->CurrentState).ActivatedCells.PendingAddToWorldCells,
               (UWorldPartitionRuntimeCell *)FVar3);
      local_res10 = FVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar3);
      }
      if (*(int *)&(this->CurrentState).LoadedCells.Elements.field_0x8 !=
          *(int *)&(this->CurrentState).LoadedCells.Elements.field_0x34) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)FVar3);
        }
        uVar5 = ((uint)((ulonglong)FVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)FVar3 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>
                  (&(this->CurrentState).LoadedCells,uVar5 >> 0x10 ^ uVar5,
                   (TObjectPtr<UWorldPartitionRuntimeCell_const_> *)&local_res10);
      }
    }
    pFVar6 = pFVar6 + 1;
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// SetShouldMergeStreamingSourceInfo @ 148adb3e0

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
UWorldPartitionStreamingPolicy::SetShouldMergeStreamingSourceInfo
          (UWorldPartitionStreamingPolicy *this,bool param_1)

{
  this->bShouldMergeStreamingSourceInfo = param_1;
  return;
}

// StaticRegisterNativesUWorldPartitionStreamingPolicy @ 148adb980

void __cdecl
UWorldPartitionStreamingPolicy::StaticRegisterNativesUWorldPartitionStreamingPolicy(void)

{
  return;
}

// UpdateDebugCellsStreamingPriority @ 148add390

void __cdecl
UWorldPartitionStreamingPolicy::UpdateDebugCellsStreamingPriority
          (TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
           *param_1,
          TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
          *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UWorldPartitionRuntimeCell *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<UWorldPartitionRuntimeCell_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  ForAnyElementType FVar8;
  FIdentityFunctor local_res20 [8];
  undefined1 local_38 [8];
  TArray<UWorldPartitionRuntimeCell_const_*,TSizedDefaultAllocator<32>_> local_30;
  TArray<UWorldPartitionRuntimeCell_const_*,TSizedDefaultAllocator<32>_> local_20;
  
  if (FWorldPartitionDebugHelper::ShowRuntimeSpatialHashCellStreamingPriorityMode != 0) {
    TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
    ::Array(param_1,&local_30);
    pTVar7 = TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
             ::Array(param_2,&local_20);
    if ((&local_30 == pTVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = pTVar7->ArrayNum;
    if (iVar2 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar2,&local_30.AllocatorInstance,&local_30.ArrayNum,&local_30.ArrayMax
                        );
      memmove(local_30.AllocatorInstance.Data + (longlong)iVar6 * 8,(pTVar7->AllocatorInstance).Data
              ,(longlong)iVar2 << 3);
      pTVar7->ArrayNum = 0;
    }
    if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.AllocatorInstance.Data);
    }
    iVar2 = local_30.ArrayNum;
    if (param_3) {
      pFVar1 = local_30.AllocatorInstance.Data + (longlong)local_30.ArrayNum * 8;
      FVar8.Data = local_30.AllocatorInstance.Data;
      while( true ) {
        if (local_30.ArrayNum != iVar2) {
          `TCheckedPointerIterator<UWorldPartitionRuntimeCell_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (FVar8.Data == pFVar1) break;
        (**(code **)((((*(UWorldPartitionRuntimeCell **)FVar8.Data)->RuntimeCellData).field0_0x0.
                     DebugPtr)->_padding_ + 0x2d8))();
        FVar8.Data = FVar8.Data + 8;
      }
    }
    if (1 < local_30.ArrayNum) {
      bVar5 = -1 < CpuChannel->Enabled;
      if (bVar5) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId822,"SortStreamingCellsByImportance",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                   ,0x336);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId822);
      }
      AlgoImpl::
      IntroSortInternal<UWorldPartitionRuntimeCell_const_*,int,FIdentityFunctor,_UWorldPartitionStreamingPolicy::UpdateDebugCellsStreamingPriority_::__l15::<lambda_1>_>
                ((UWorldPartitionRuntimeCell **)local_30.AllocatorInstance.Data,local_30.ArrayNum,
                 local_res20[0],(<lambda_1>)local_res20[0]);
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    iVar2 = local_30.ArrayNum;
    pFVar1 = local_30.AllocatorInstance.Data + (longlong)local_30.ArrayNum * 8;
    FVar8.Data = local_30.AllocatorInstance.Data;
    iVar6 = 0;
    while( true ) {
      if (local_30.ArrayNum != iVar2) {
        `TCheckedPointerIterator<UWorldPartitionRuntimeCell_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_38);
      }
      if (FVar8.Data == pFVar1) break;
      pUVar3 = *(UWorldPartitionRuntimeCell **)FVar8.Data;
      FVar8.Data = FVar8.Data + 8;
      pUVar3->DebugStreamingPriority = (float)iVar6 / (float)iVar2;
      iVar6 = iVar6 + 1;
    }
    if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateStreamingPerformance @ 148addc40

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
UWorldPartitionStreamingPolicy::UpdateStreamingPerformance
          (UWorldPartitionStreamingPolicy *this,EWorldPartitionStreamingPerformance param_1,
          bool param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  EWorldPartitionStreamingPerformance EVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  UPackage *pUVar9;
  FText *pFVar10;
  double dVar11;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  FText local_58;
  FText local_48 [2];
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                         ,0x346,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId840,
               "UWorldPartitionStreamingPolicy::UpdateStreamingPerformance",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
               ,0x348);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId840);
  }
  lVar7 = (**(code **)(this->_padding_ + 0x180))(this);
  dVar2 = __real_4170000000000000;
  if (Slow < this->CurrentStreamingPerformance) {
    bVar4 = IsInGameThread();
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                           ,0x8c,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar8 = (**(code **)(this->_padding_ + 0x180))(this);
    if (*(int *)(lVar8 + 0x194) != 0) {
      QueryPerformanceCounter(&local_res8);
      this->OnScreenMessageStartTime =
           (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar2;
    }
  }
  if ((this->WorldPartition->RuntimeHash).field0_0x0.DebugPtr != (UWorldPartitionRuntimeHash *)0x0)
  {
    if (this->CurrentStreamingPerformance != param_1) {
      if (4 < (byte)LogWorldPartition._0_1_) {
        if (Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton ==
            (UEnum *)0x0) {
          pUVar9 = Z_Construct_UPackage__Script_Engine();
          Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton =
               GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance,
                             (UObject *)pUVar9,L"EWorldPartitionStreamingPerformance");
        }
        pFVar10 = UEnum::GetDisplayNameTextByValue
                            (Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.
                             OuterSingleton,local_48,(ulonglong)param_1);
        FText::ToString(pFVar10);
        if (Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton ==
            (UEnum *)0x0) {
          pUVar9 = Z_Construct_UPackage__Script_Engine();
          Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton =
               GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance,
                             (UObject *)pUVar9,L"EWorldPartitionStreamingPerformance");
        }
        pFVar10 = UEnum::GetDisplayNameTextByValue
                            (Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.
                             OuterSingleton,&local_58,(ulonglong)this->CurrentStreamingPerformance);
        FText::ToString(pFVar10);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
        if (local_48[0].TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48[0].TextData.Reference + 0x10))();
        }
      }
      this->CurrentStreamingPerformance = param_1;
    }
    if (this->bCurrentBlockOnSlowStreaming != param_2) {
      this->bCurrentBlockOnSlowStreaming = param_2;
    }
  }
  EVar5 = this->CurrentStreamingPerformance;
  if ((EVar5 != Good) &&
     ((this->bOnScreenMessageShouldBlock != false ||
      (GDisplayStreamingPerformanceForNonBlockingStreaming != false)))) {
    QueryPerformanceCounter(&local_res20);
    EVar5 = this->CurrentStreamingPerformance;
    dVar11 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    this->OnScreenMessageStreamingPerformance = EVar5;
    this->bOnScreenMessageShouldBlock = param_2;
    this->OnScreenMessageStartTime = dVar11 + dVar2;
  }
  if ((Slow < EVar5) && (this->bCurrentBlockOnSlowStreaming != false)) {
    bVar4 = UWorldPartition::IsServer(this->WorldPartition);
    bVar6 = UWorldPartition::IsServerStreamingEnabled(this->WorldPartition);
    if ((GBlockOnSlowStreaming != 0) && ((!bVar4 || (bVar6)))) {
      bVar4 = IsInGameThread();
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                             ,0x8c,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar8 = (**(code **)(this->_padding_ + 0x180))(this);
      if (*(int *)(lVar8 + 0x194) == 0) {
        *(byte *)(lVar7 + 0x18c) = *(byte *)(lVar7 + 0x18c) | 0x80;
        this->bCriticalPerformanceRequestedBlockTillOnWorld = true;
      }
    }
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// UpdateStreamingSources @ 148addfd0

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
UWorldPartitionStreamingPolicy::UpdateStreamingSources
          (UWorldPartitionStreamingPolicy *this,bool param_1)

{
  int *piVar1;
  FWorldPartitionStreamingSource *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  UWorld *this_00;
  UWorldPartitionSubsystem *this_01;
  TTransform<double> *this_02;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  UWorldPartition *this_03;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  TArray<FWorldPartitionStreamingSource,TSizedDefaultAllocator<32>_> local_118;
  TTransform<double> local_108;
  undefined1 local_a8 [16];
  double local_98;
  
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                          ,0x6a,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId108,"UWorldPartitionStreamingPolicy::UpdateStreamingSources"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
               ,0x6c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId108);
  }
  bVar12 = UWorldPartition::CanStream(this->WorldPartition);
  if (bVar12) {
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    this_01 = UWorld::GetSubsystem<UWorldPartitionSubsystem>(this_00);
    uVar16 = this_01->StreamingSourcesHash;
    if ((param_1) && (this->UpdateStreamingSourcesHash == uVar16)) {
      uVar19 = 0;
      local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.ArrayNum = 0;
      local_118.ArrayMax = 0;
      UWorldPartitionSubsystem::GetStreamingSources(this_01,this->WorldPartition,&local_118);
      if ((local_118.ArrayNum != (this->CurrentState).StreamingSources.ArrayNum) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("LocalStreamingSources.Num() == CurrentState.StreamingSources.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                              ,0x7b,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_03 = this->WorldPartition;
      this_02 = UWorldPartition::GetInstanceTransform(this_03);
      auVar30._0_8_ =
           (double)CONCAT44(*(uint *)((longlong)(this_02->Scale3D).XY.m128d_f64 + 4) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            *(uint *)(this_02->Scale3D).XY.m128d_f64 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar30._8_4_ = *(uint *)((this_02->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88;
      auVar30._12_4_ = *(uint *)((longlong)(this_02->Scale3D).XY.m128d_f64 + 0xc) & _UNK_15061cc8c;
      auVar31._8_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
            (double)CONCAT44(*(uint *)((longlong)(this_02->Scale3D).ZW.m128d_f64 + 0xc) &
                             _UNK_15061cc8c,
                             *(uint *)((this_02->Scale3D).ZW.m128d_f64 + 1) & _UNK_15061cc88));
      auVar31._0_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
            (double)CONCAT44(*(uint *)((longlong)(this_02->Scale3D).ZW.m128d_f64 + 4) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             *(uint *)(this_02->Scale3D).ZW.m128d_f64 &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      uVar16 = movmskpd((int)this_03,auVar31);
      lVar21 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar30._8_8_);
      auVar23._8_4_ = (int)lVar21;
      auVar23._0_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar30._0_8_);
      auVar23._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
      iVar13 = movmskpd((int)this_02,auVar23);
      if ((uVar16 & 0x3fffffff) == 0 && iVar13 == 0) {
        uVar37 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar38 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar39 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar40 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
        local_108.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_108.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_108.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_108.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_108.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_108.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
      }
      else {
        UE::Math::TTransform<double>::InverseFast(this_02,&local_108);
        uVar37 = local_108.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar38 = local_108.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar39 = local_108.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar40 = local_108.Rotation.ZW.m128d_f64[1]._4_4_;
      }
      uVar20 = uVar19;
      if (0 < local_118.ArrayNum) {
        do {
          uVar18 = (uint)uVar19;
          uVar17 = ~uVar18 >> 0x1f;
          uVar16 = 0;
          if ((int)uVar18 < local_118.ArrayNum) {
            uVar16 = uVar17;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar15 = local_118.AllocatorInstance.Data + uVar20;
          uVar14 = 0;
          uVar16 = uVar14;
          if ((int)uVar18 < (this->CurrentState).StreamingSources.ArrayNum) {
            uVar16 = uVar17;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((*(longlong *)((this->CurrentState).StreamingSources.AllocatorInstance.Data + uVar20)
               != *(longlong *)pFVar15) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentState.StreamingSources[i].Name == LocalStreamingSources[i].Name"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                                  ,0x7f,L""), bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar16 = uVar14;
          if ((int)uVar18 < local_118.ArrayNum) {
            uVar16 = uVar17;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          dVar29 = local_108.Rotation.XY.m128d_f64[1];
          dVar32 = *(double *)(local_118.AllocatorInstance.Data + uVar20 + 0x50) *
                   local_108.Scale3D.ZW.m128d_f64[0];
          dVar7 = local_108.Scale3D.ZW.m128d_f64[1] * 0.0;
          if ((int)uVar18 < (this->CurrentState).StreamingSources.ArrayNum) {
            uVar14 = uVar17;
          }
          dVar4 = local_108.Scale3D.XY.m128d_f64[0] *
                  *(double *)(local_118.AllocatorInstance.Data + uVar20 + 0x40);
          dVar5 = local_108.Scale3D.XY.m128d_f64[1] *
                  *(double *)(local_118.AllocatorInstance.Data + uVar20 + 0x40 + 8);
          uVar36 = (undefined4)((ulonglong)dVar5 >> 0x20);
          auVar33._8_4_ = SUB84(dVar5,0);
          auVar33._0_8_ = dVar4;
          auVar33._12_4_ = uVar36;
          auVar22._8_4_ = SUB84(dVar5,0);
          auVar22._0_8_ = dVar4;
          auVar22._12_4_ = uVar36;
          auVar6._8_4_ = SUB84(dVar7,0);
          auVar6._0_8_ = dVar32;
          auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          auVar23 = blendpd(auVar22,auVar6,2);
          auVar34._0_8_ = auVar33._8_8_ * local_108.Rotation.XY.m128d_f64[0] - dVar29 * dVar4;
          auVar34._8_8_ = dVar32 * dVar29 - (double)CONCAT44(uVar38,uVar37) * dVar5;
          auVar8._4_4_ = uVar38;
          auVar8._0_4_ = uVar37;
          auVar8._8_4_ = uVar39;
          auVar8._12_4_ = uVar40;
          auVar31 = blendpd((undefined1  [16])local_108.Rotation.XY.m128d_f64,auVar8,2);
          auVar24._0_8_ = auVar23._0_8_ * (double)CONCAT44(uVar38,uVar37) - auVar31._0_8_ * dVar32;
          auVar24._8_8_ = auVar23._8_8_ * (double)CONCAT44(uVar40,uVar39) - auVar31._8_8_ * dVar7;
          auVar23 = blendpd(auVar34,auVar24,2);
          dVar7 = auVar34._8_8_ + auVar34._8_8_;
          dVar10 = auVar24._0_8_ + auVar24._0_8_;
          uVar36 = (undefined4)((ulonglong)dVar10 >> 0x20);
          auVar35._0_8_ = auVar23._0_8_ + auVar23._0_8_;
          auVar35._8_8_ = auVar23._8_8_ + auVar23._8_8_;
          auVar27._8_4_ = SUB84(dVar10,0);
          auVar27._0_8_ = dVar7;
          auVar27._12_4_ = uVar36;
          auVar25._8_4_ = SUB84(dVar10,0);
          auVar25._0_8_ = dVar7;
          auVar25._12_4_ = uVar36;
          auVar23 = blendpd(auVar25,auVar35,2);
          auVar28._0_8_ = auVar27._8_8_ * local_108.Rotation.XY.m128d_f64[0] - dVar7 * dVar29;
          auVar28._8_8_ = auVar35._0_8_ * dVar29 - dVar10 * (double)CONCAT44(uVar38,uVar37);
          auVar26._0_8_ =
               auVar23._0_8_ * (double)CONCAT44(uVar38,uVar37) - auVar35._0_8_ * auVar31._0_8_;
          auVar26._8_8_ =
               auVar23._8_8_ * (double)CONCAT44(uVar40,uVar39) - auVar35._8_8_ * auVar31._8_8_;
          auVar23 = blendpd(auVar28,auVar26,2);
          dVar7 = dVar7 * (double)CONCAT44(uVar40,uVar39) + dVar4 + auVar28._8_8_;
          dVar29 = dVar10 * (double)CONCAT44(uVar40,uVar39) + dVar5 + auVar26._0_8_;
          uVar36 = SUB84(dVar29,0);
          uVar41 = (undefined4)((ulonglong)dVar29 >> 0x20);
          dVar32 = auVar35._0_8_ * (double)CONCAT44(uVar40,uVar39) + dVar32 + auVar23._0_8_;
          local_a8._8_4_ = uVar36;
          local_a8._0_8_ = dVar7;
          local_a8._12_4_ = uVar41;
          local_98 = dVar32;
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar15 = (this->CurrentState).StreamingSources.AllocatorInstance.Data;
          uVar19 = (ulonglong)(uVar18 + 1);
          auVar9._8_4_ = uVar36;
          auVar9._0_8_ = dVar7;
          auVar9._12_4_ = uVar41;
          *(undefined1 (*) [16])(pFVar15 + uVar20 + 0x40) = auVar9;
          *(double *)(pFVar15 + uVar20 + 0x50) = dVar32;
          uVar20 = uVar20 + 0x160;
        } while ((int)(uVar18 + 1) < local_118.ArrayNum);
      }
      DestructItems<FWorldPartitionStreamingSource,int>
                ((FWorldPartitionStreamingSource *)local_118.AllocatorInstance.Data,
                 local_118.ArrayNum);
      if ((FWorldPartitionStreamingSource *)local_118.AllocatorInstance.Data !=
          (FWorldPartitionStreamingSource *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
    }
    else {
      piVar1 = &(this->CurrentState).StreamingSources.ArrayMax;
      pFVar2 = (FWorldPartitionStreamingSource *)
               (this->CurrentState).StreamingSources.AllocatorInstance.Data;
      iVar13 = (this->CurrentState).StreamingSources.ArrayNum;
      if ((this->CurrentState).StreamingSources.ArrayMax < 0) {
        DestructItems<FWorldPartitionStreamingSource,int>(pFVar2,iVar13);
        (this->CurrentState).StreamingSources.ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x160,8,0,(ForAnyElementType *)&this->CurrentState,0,piVar1);
        }
      }
      else {
        DestructItems<FWorldPartitionStreamingSource,int>(pFVar2,iVar13);
        (this->CurrentState).StreamingSources.ArrayNum = 0;
      }
      UWorldPartitionSubsystem::GetStreamingSources
                (this_01,this->WorldPartition,&(this->CurrentState).StreamingSources);
      this->UpdateStreamingSourcesHash = uVar16;
    }
  }
  else {
    piVar1 = &(this->CurrentState).StreamingSources.ArrayMax;
    pFVar2 = (FWorldPartitionStreamingSource *)
             (this->CurrentState).StreamingSources.AllocatorInstance.Data;
    iVar13 = (this->CurrentState).StreamingSources.ArrayNum;
    if ((this->CurrentState).StreamingSources.ArrayMax < 0) {
      DestructItems<FWorldPartitionStreamingSource,int>(pFVar2,iVar13);
      (this->CurrentState).StreamingSources.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x160,8,0,(ForAnyElementType *)&this->CurrentState,0,piVar1);
      }
      this->UpdateStreamingSourcesHash = 0;
    }
    else {
      DestructItems<FWorldPartitionStreamingSource,int>(pFVar2,iVar13);
      (this->CurrentState).StreamingSources.ArrayNum = 0;
      this->UpdateStreamingSourcesHash = 0;
    }
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateStreamingState @ 148ade620

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
UWorldPartitionStreamingPolicy::UpdateStreamingState(UWorldPartitionStreamingPolicy *this)

{
  int *piVar1;
  TArray<TObjectPtr<UWorldPartitionRuntimeCell_const_>,TSizedDefaultAllocator<32>_> *pTVar2;
  TTask<void> *pTVar3;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *pTVar4;
  int iVar5;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 TVar6;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *pTVar7;
  TTask<void> TVar8;
  FWorldPartitionStreamingSource *pFVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  ENetMode EVar15;
  UWorld *this_00;
  longlong lVar16;
  FUpdateStreamingStateParams *pFVar17;
  uint uVar18;
  int iVar19;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *pTVar20;
  FWorldPartitionUpdateStreamingTargetState *pFVar21;
  bool bVar22;
  undefined1 auStackY_388 [32];
  undefined1 local_336;
  undefined1 local_335;
  int local_334;
  int local_330;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_328;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_320;
  UWorld *local_318;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_310;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_308;
  longlong local_300;
  FUpdateStreamingStateParams local_2f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_388;
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId275,"UWorldPartitionStreamingPolicy::UpdateStreamingState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
               ,0x113);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId275);
  }
  this->UpdateStreamingStateCounter = this->UpdateStreamingStateCounter + 1;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  local_318 = this_00;
  if ((this_00 == (UWorld *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("World",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                          ,0x118,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  bVar11 = UWorld::IsGameWorld(this_00);
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("World->IsGameWorld()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                          ,0x119,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar19 = this->ProcessedToLoadCells + this->ProcessedToActivateCells;
  local_334 = (this->TargetState).ToActivateCells.ArrayNum +
              (this->TargetState).ToLoadCells.ArrayNum;
  this->ProcessedToLoadCells = 0;
  this->ProcessedToActivateCells = 0;
  local_330 = iVar19;
  FWorldPartitionUpdateStreamingTargetState::Reset(&this->TargetState);
  bVar11 = WaitForAsyncUpdateStreamingState(this);
  if (bVar11) {
    bVar11 = -1 < CpuChannel->Enabled;
    if (bVar11) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId292,
                 "UWorldPartitionStreamingPolicy::UpdateTargetStateFromAsyncTask",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                 ,0x124);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId292);
    }
    if (((this->AsyncUpdateStreamingStateTask != (TTask<void>)0x0) &&
        (*(char *)((longlong)this->AsyncUpdateStreamingStateTask + 0xd0) == '\0')) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("AsyncUpdateStreamingStateTask.IsCompleted()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                            ,0x126,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    PostUpdateStreamingStateInternal_GameThread(this,&this->AsyncTaskTargetState);
    pTVar20 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)
              (this->AsyncTaskTargetState).ToActivateCells.AllocatorInstance.Data;
    iVar19 = (this->AsyncTaskTargetState).ToActivateCells.ArrayNum;
    pTVar4 = pTVar20 + iVar19;
    while( true ) {
      if ((this->AsyncTaskTargetState).ToActivateCells.ArrayNum != iVar19) {
        local_336 = 0;
        `TCheckedPointerIterator<TObjectPtr<UWorldPartitionRuntimeCell_const_>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_336);
      }
      if (pTVar20 == pTVar4) break;
      TVar6 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0)pTVar20->DebugPtr;
      local_310 = TVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar6.DebugPtr != (UWorldPartitionRuntimeCell *)0x0) {
          UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar6.DebugPtr != (UWorldPartitionRuntimeCell *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
        }
      }
      uVar18 = ((uint)((ulonglong)TVar6.DebugPtr >> 0x14) & 0xffff ^
               (uint)((ulonglong)TVar6.DebugPtr >> 4)) * -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      iVar13 = TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>
                         (&(this->CurrentState).ActivatedCells.Cells,uVar18 >> 0x10 ^ uVar18,
                          (TObjectPtr<UWorldPartitionRuntimeCell_const_> *)&local_310.ObjectPtr);
      if (iVar13 == -1) {
        pTVar2 = &(this->TargetState).ToActivateCells;
        local_328 = TVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar6.DebugPtr != (UWorldPartitionRuntimeCell *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
        }
        pTVar7 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)
                 (pTVar2->AllocatorInstance).Data;
        if (((pTVar7 <= &local_328) &&
            (&local_328 < pTVar7 + (this->TargetState).ToActivateCells.ArrayMax)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar13 = (this->TargetState).ToActivateCells.ArrayNum;
        piVar1 = &(this->TargetState).ToActivateCells.ArrayMax;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->TargetState).ToActivateCells.ArrayNum = iVar13 + 1;
        ((TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)
        ((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 8))->DebugPtr =
             (UWorldPartitionRuntimeCell *)local_328;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_328.DebugPtr != (UWorldPartitionRuntimeCell *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_328.DebugPtr);
        }
      }
      pTVar20 = pTVar20 + 1;
    }
    pTVar20 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)
              (this->AsyncTaskTargetState).ToLoadCells.AllocatorInstance.Data;
    pFVar21 = &this->TargetState;
    iVar19 = (this->AsyncTaskTargetState).ToLoadCells.ArrayNum;
    pTVar4 = pTVar20 + iVar19;
    while( true ) {
      if ((this->AsyncTaskTargetState).ToLoadCells.ArrayNum != iVar19) {
        local_335 = 0;
        `TCheckedPointerIterator<TObjectPtr<UWorldPartitionRuntimeCell_const_>,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_335);
      }
      if (pTVar20 == pTVar4) break;
      TVar6 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0)pTVar20->DebugPtr;
      local_308 = TVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (TVar6.DebugPtr != (UWorldPartitionRuntimeCell *)0x0) {
          UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar6.DebugPtr != (UWorldPartitionRuntimeCell *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
        }
      }
      uVar18 = ((uint)((ulonglong)TVar6.DebugPtr >> 0x14) & 0xffff ^
               (uint)((ulonglong)TVar6.DebugPtr >> 4)) * -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      iVar13 = TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>
                         (&(this->CurrentState).LoadedCells,uVar18 >> 0x10 ^ uVar18,
                          (TObjectPtr<UWorldPartitionRuntimeCell_const_> *)&local_308.ObjectPtr);
      if (iVar13 == -1) {
        local_320 = TVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar6.DebugPtr != (UWorldPartitionRuntimeCell *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
        }
        pTVar7 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)
                 (pFVar21->ToLoadCells).AllocatorInstance.Data;
        if (((pTVar7 <= &local_320) &&
            (&local_320 < pTVar7 + (this->TargetState).ToLoadCells.ArrayMax)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar13 = (this->TargetState).ToLoadCells.ArrayNum;
        piVar1 = &(this->TargetState).ToLoadCells.ArrayMax;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pFVar21,piVar1);
        }
        (this->TargetState).ToLoadCells.ArrayNum = iVar13 + 1;
        ((TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)
        ((pFVar21->ToLoadCells).AllocatorInstance.Data + (longlong)iVar13 * 8))->DebugPtr =
             (UWorldPartitionRuntimeCell *)local_320;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_320.DebugPtr != (UWorldPartitionRuntimeCell *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_320.DebugPtr);
        }
      }
      pTVar20 = pTVar20 + 1;
    }
    if ((this->AsyncUpdateTaskState != Started) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("AsyncUpdateTaskState == EAsyncUpdateTaskState::Started",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                            ,0x13b,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar3 = &this->AsyncUpdateStreamingStateTask;
    this->AsyncUpdateTaskState = None;
    if (pTVar3 != (TTask<void> *)&local_300) {
      TVar8 = *pTVar3;
      *pTVar3 = (TTask<void>)0x0;
      if (TVar8 != (TTask<void>)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)TVar8 + 0x30);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (*(code *)**(undefined8 **)TVar8)(TVar8,1);
        }
      }
    }
    piVar1 = &(this->AsyncTaskCurrentState).StreamingSources.ArrayMax;
    pFVar9 = (FWorldPartitionStreamingSource *)
             (this->AsyncTaskCurrentState).StreamingSources.AllocatorInstance.Data;
    iVar19 = (this->AsyncTaskCurrentState).StreamingSources.ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FWorldPartitionStreamingSource,int>(pFVar9,iVar19);
      (this->AsyncTaskCurrentState).StreamingSources.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x160,8,0,(ForAnyElementType *)&this->AsyncTaskCurrentState,0,piVar1);
      }
    }
    else {
      DestructItems<FWorldPartitionStreamingSource,int>(pFVar9,iVar19);
      (this->AsyncTaskCurrentState).StreamingSources.ArrayNum = 0;
    }
    TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
    ::Reset(&(this->AsyncTaskCurrentState).LoadedCells);
    TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
    ::Reset(&(this->AsyncTaskCurrentState).ActivatedCells.Cells);
    TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
    ::Reset(&(this->AsyncTaskCurrentState).ActivatedCells.PendingAddToWorldCells);
    FWorldPartitionUpdateStreamingTargetState::Reset(&this->AsyncTaskTargetState);
    this_00 = local_318;
    iVar19 = local_330;
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
      this_00 = local_318;
      iVar19 = local_330;
    }
  }
  pFVar21 = &this->TargetState;
  iVar13 = 0;
  if ((this->AsyncUpdateTaskState != None) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("AsyncUpdateTaskState == EAsyncUpdateTaskState::None",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                          ,0x142,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (this->bCriticalPerformanceRequestedBlockTillOnWorld != false) {
    bVar11 = IsInGameThread();
    if ((!bVar11) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                            ,0x8c,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar16 = (**(code **)(this->_padding_ + 0x180))(this);
    if (*(int *)(lVar16 + 0x194) != 0) {
      this->bCriticalPerformanceRequestedBlockTillOnWorld = false;
      this->CriticalPerformanceBlockTillLevelStreamingCompletedEpoch =
           this_00->BlockTillLevelStreamingCompletedEpoch;
    }
  }
  bVar11 = UWorldPartition::IsServer(this->WorldPartition);
  bVar12 = UWorldPartition::CanStream(this->WorldPartition);
  if ((((bVar11) && (bVar12)) && (iVar19 == local_334)) &&
     (bVar11 = UWorldPartition::IsServerStreamingEnabled(this->WorldPartition), !bVar11)) {
    bVar11 = UWorldPartition::IsServer(this->WorldPartition);
    if (bVar11) {
      bVar11 = UWorldPartition::IsServerStreamingEnabled(this->WorldPartition);
      uVar18 = (uint)bVar11;
    }
    else {
      uVar18 = 0x80000000;
    }
    if ((this->ServerStreamingEnabledEpoch == uVar18) &&
       (iVar5 = this->ServerStreamingStateEpoch,
       iVar14 = UWorldPartition::GetStreamingStateEpoch(this->WorldPartition), iVar5 == iVar14))
    goto LAB_148adef13;
  }
  if (ForceUpdateFrameCount < 1) {
    bVar11 = false;
  }
  else {
    bVar11 = this->UpdateStreamingStateCounter % (uint)ForceUpdateFrameCount == 0;
  }
  if (((((this->WorldPartition->RuntimeHash).field0_0x0.DebugPtr ==
         (UWorldPartitionRuntimeHash *)0x0) || (!bVar12)) ||
      ((bVar11 || (IsUpdateOptimEnabled == false)))) ||
     (((FWorldPartitionStreamingSource::LocationQuantization < 1 &&
       (FWorldPartitionStreamingSource::RotationQuantization < 1)) || (iVar19 != local_334)))) {
LAB_148adede4:
    bVar11 = false;
  }
  else {
    bVar11 = IsInGameThread();
    if ((!bVar11) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                            ,0x8c,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar16 = (**(code **)(this->_padding_ + 0x180))(this);
    if ((*(int *)(lVar16 + 0x194) != 0) ||
       (*(int *)&(this->CurrentState).ActivatedCells.PendingAddToWorldCells.Elements.field_0x8 !=
        *(int *)&(this->CurrentState).ActivatedCells.PendingAddToWorldCells.Elements.field_0x34))
    goto LAB_148adede4;
    bVar11 = true;
  }
  (**(code **)(this->_padding_ + 0x360))(this,bVar11);
  EVar15 = UWorld::InternalGetNetMode(this_00);
  if ((((IsAsyncUpdateStreamingStateEnabled == false) || (EVar15 == NM_DedicatedServer)) ||
      (!bVar12)) || (bVar12 = UWorldPartition::IsInitialized(this->WorldPartition), !bVar12)) {
LAB_148adee67:
    bVar12 = false;
  }
  else {
    bVar12 = IsInGameThread();
    if ((!bVar12) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                            ,0x8c,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar16 = (**(code **)(this->_padding_ + 0x180))(this);
    if (*(int *)(lVar16 + 0x194) != 0) goto LAB_148adee67;
    bVar12 = true;
  }
  uVar18 = ComputeUpdateStreamingHash(this,bVar11);
  if ((uVar18 == 0) || (this->UpdateStreamingHash != uVar18)) {
    bVar11 = false;
LAB_148adee9d:
    this->AsyncShouldSkipUpdateCounter = 0;
    if (bVar11) {
      if (!bVar12) goto LAB_148adef13;
      goto LAB_148adeeac;
    }
  }
  else {
    bVar11 = true;
    if (!bVar12) goto LAB_148adee9d;
    iVar13 = this->AsyncShouldSkipUpdateCounter + 1;
    this->AsyncShouldSkipUpdateCounter = iVar13;
LAB_148adeeac:
    if (1 < iVar13) goto LAB_148adef13;
  }
  this->UpdateStreamingHash = uVar18;
  if (bVar12) {
    this->AsyncUpdateTaskState = Pending;
  }
  else {
    FWorldPartitionUpdateStreamingTargetState::Reset(pFVar21);
    pFVar17 = FUpdateStreamingStateParams::FUpdateStreamingStateParams
                        (&local_2f8,this,&this->CurrentState);
    UpdateStreamingStateInternal(pFVar17,pFVar21);
    if (local_2f8.WorldDataLayersEffectiveStatesCopy.bIsSet != false) {
      FWorldDataLayersEffectiveStates::~FWorldDataLayersEffectiveStates
                (&local_2f8.WorldDataLayersEffectiveStatesCopy.TypedValue);
    }
    PostUpdateStreamingStateInternal_GameThread(this,pFVar21);
  }
LAB_148adef13:
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateStreamingStateInternal @ 148adef60

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

void __cdecl
UWorldPartitionStreamingPolicy::UpdateStreamingStateInternal
          (FUpdateStreamingStateParams *param_1,FWorldPartitionUpdateStreamingTargetState *param_2)

{
  ulonglong uVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  UWorldPartitionRuntimeHash *pUVar5;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  *pTVar6;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 TVar7;
  FName FVar8;
  FScriptContainerElement *pFVar9;
  ForElementType<FSetElementId> FVar10;
  FWorldPartitionUpdateStreamingCurrentState *pFVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ForElementType<unsigned_int> FVar22;
  FWorldPartitionUpdateStreamingTargetState *pFVar23;
  bool bVar24;
  char cVar25;
  EWorldPartitionStreamingPerformance EVar26;
  int iVar27;
  int iVar28;
  UWorldPartitionSubsystem *pUVar29;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  *pTVar30;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar31;
  longlong lVar32;
  UObjectBaseUtility *this;
  UPackage *pUVar33;
  TQuat<double> *pTVar34;
  uint uVar35;
  longlong lVar36;
  ForElementType<FSetElementId> FVar37;
  ForAnyElementType FVar38;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *pTVar39;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *pTVar40;
  uint uVar41;
  ForElementType<unsigned_int> FVar42;
  ForElementType<unsigned_int> FVar43;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *pTVar44;
  uint uVar45;
  FWorldPartitionUpdateStreamingCurrentState *pFVar47;
  bool bVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auStack_5c8 [32];
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *local_5a8;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *local_5a0;
  longlong local_598;
  longlong local_590;
  undefined8 local_588;
  char local_578;
  char local_577;
  undefined1 local_576 [6];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_570;
  ulonglong local_568;
  ForElementType<unsigned_int> local_560;
  undefined8 uStack_558;
  ForElementType<unsigned_int> FStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  int local_538;
  undefined4 uStack_534;
  undefined1 local_530 [8];
  ForElementType<unsigned_int> local_528;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_520;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_518;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_510;
  undefined1 local_508 [12];
  uint uStack_4fc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4f8;
  undefined8 uStack_4f0;
  longlong lStack_4e8;
  int local_4e0;
  undefined4 uStack_4dc;
  FWorldPartitionUpdateStreamingTargetState *local_4d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_490;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_470;
  FUpdateStreamingStateParams **local_450;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_448;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_440;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_438;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_430;
  FName local_428;
  ForElementType<unsigned_int> local_420;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_418;
  FString local_410;
  FString local_400;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 local_3f0;
  undefined1 local_3e8;
  EWorldPartitionDataLayersLogicOperator local_3e7;
  FWorldDataLayersEffectiveStates *local_3e0;
  int local_3d8;
  FUpdateStreamingStateParams *local_3d0;
  undefined1 *local_3c8;
  FUpdateStreamingStateParams *local_3c0;
  undefined8 local_3b8;
  FUpdateStreamingStateParams *local_3b0;
  undefined1 local_3a8 [12];
  uint uStack_39c;
  TBitArray<FDefaultBitArrayAllocator> *local_398;
  undefined8 uStack_390;
  longlong local_388;
  undefined8 uStack_380;
  undefined1 local_378 [12];
  uint uStack_36c;
  TBitArray<FDefaultBitArrayAllocator> *local_368;
  undefined8 uStack_360;
  longlong local_358;
  int iStack_350;
  undefined4 uStack_34c;
  ForElementType<unsigned_int> local_348;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_340;
  undefined8 uStack_320;
  ForElementType<unsigned_int> local_318;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_310;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  code *local_2d0;
  FUpdateStreamingStateParams ***local_2c8;
  code *local_2c0;
  FUpdateStreamingStateParams **local_2b8;
  FUpdateStreamingStateParams *local_2b0;
  FWorldPartitionUpdateStreamingTargetState *local_2a8;
  FUpdateStreamingStateParams *local_2a0;
  FWorldPartitionUpdateStreamingTargetState *local_298;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_290;
  FLogScopedCategoryAndVerbosityOverride local_288;
  TRotator<double> local_278;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  TRangedForConstIterator local_238;
  TRangedForConstIterator local_208;
  TRangedForIterator local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_148;
  undefined4 local_10c;
  TQuat<double> local_108;
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  local_e8;
  ulonglong local_98;
  TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *pTVar46;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_5c8;
  bVar48 = CpuChannel->Enabled < 0;
  local_4d8 = param_2;
  if (bVar48) {
    local_577 = '\0';
  }
  else {
    local_577 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId394,
               "UWorldPartitionStreamingPolicy::UpdateStreamingStateInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
               ,0x18a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId394);
  }
  cVar25 = !bVar48;
  param_2->bUpdateServerEpoch = false;
  if ((*(int *)&(param_1->FrameActivateCells->Elements).field_0x8 !=
       *(int *)&(param_1->FrameActivateCells->Elements).field_0x34) &&
     (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                         ("InParams.FrameActivateCells.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                          ,0x18e,L""), bVar48)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((*(int *)&(param_1->FrameLoadCells->Elements).field_0x8 !=
       *(int *)&(param_1->FrameLoadCells->Elements).field_0x34) &&
     (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                         ("InParams.FrameLoadCells.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                          ,399,L""), bVar48)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((*(int *)&(param_1->FrameAnalysePerformanceCells->Elements).field_0x8 !=
       *(int *)&(param_1->FrameAnalysePerformanceCells->Elements).field_0x34) &&
     (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                         ("InParams.FrameAnalysePerformanceCells.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                          ,400,L""), bVar48)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((((((param_2->ToLoadCells).ArrayNum != 0) || ((param_2->ToActivateCells).ArrayNum != 0)) ||
       ((param_2->ToUnloadCells).ArrayNum != 0)) || ((param_2->ToDeactivateCells).ArrayNum != 0)) &&
     (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutTargetState.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                          ,0x191,L""), bVar48)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_3e0 = &(param_1->WorldDataLayersEffectiveStatesCopy).TypedValue;
  local_3d8 = param_1->PolicyUpdateStreamingStateEpoch;
  if ((param_1->WorldDataLayersEffectiveStatesCopy).bIsSet == false) {
    local_3e0 = param_1->WorldDataLayersEffectiveStatesRef;
  }
  local_3e7 = param_1->DataLayersLogicOperator;
  local_3e8 = 1;
  local_568 = CONCAT44(local_568._4_4_,1);
  if (param_1->bCanStream != false) {
    if ((((param_1->bIsServer == false) || (param_1->bIsServerStreamingEnabled != false)) ||
        (param_1->bIsPlaybackEnabled != false)) &&
       (param_1->RuntimeHash != (UWorldPartitionRuntimeHash *)0x0)) {
      bVar48 = -1 < CpuChannel->Enabled;
      if (bVar48) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId420,
                   "UWorldPartitionStreamingPolicy::UpdateStreamingState_ForEachStreamingCellsSources"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                   ,0x1a4);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId420);
      }
      local_2b8 = &local_3b0;
      local_2c0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UWorldPartitionStreamingPolicy::UpdateStreamingStateInternal'::__l39::<lambda_2>,bool,UWorldPartitionRuntimeCell_const_*,enum_EStreamingSourceTargetState>
                  ::Call;
      local_3b0 = param_1;
      (**(code **)(param_1->RuntimeHash->_padding_ + 0x2c8))
                (param_1->RuntimeHash,param_1->CurrentState,&local_2c0,&local_3e8);
      if (bVar48) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if (param_1->bIsServer != false) {
      bVar48 = -1 < CpuChannel->Enabled;
      if (bVar48) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId442,
                   "UWorldPartitionStreamingPolicy::UpdateStreamingState_ServerUpdate",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                   ,0x1ba);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId442);
      }
      bVar24 = param_1->bIsServerStreamingOutEnabled;
      local_3c8 = &local_3e8;
      param_2->bUpdateServerEpoch = true;
      local_3d0 = param_1;
      local_3c0 = param_1;
      if (param_1->bIsServerStreamingEnabled == false) {
        pUVar5 = param_1->RuntimeHash;
        if (pUVar5 != (UWorldPartitionRuntimeHash *)0x0) {
          local_450 = &local_3d0;
          local_2c8 = &local_450;
          local_2d0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UWorldPartitionStreamingPolicy::UpdateStreamingStateInternal'::__l48::<lambda_5>,bool,UWorldPartitionRuntimeCell_const_*>
                      ::Call;
          (**(code **)(pUVar5->_padding_ + 0x2b8))(pUVar5,&local_2d0);
        }
      }
      else if (bVar24 == false) {
        pFVar47 = param_1->CurrentState;
        local_490._padding_._4_4_ = (undefined4)local_568;
        local_490._padding_._0_4_ = 0;
        local_490.Array =
             (TBitArray<FDefaultBitArrayAllocator> *)
             &(pFVar47->ActivatedCells).Cells.Elements.field_0x10;
        local_490.UnvisitedBitMask = 0xffffffff;
        local_490.CurrentBitIndex = 0;
        local_490.BaseBitIndex = 0;
        if (*(int *)&(pFVar47->ActivatedCells).Cells.Elements.field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_490);
        }
        unique0x10001a15 = CONCAT44(local_490._padding_._4_4_,(undefined4)local_490._padding_);
        local_508._0_8_ = &pFVar47->ActivatedCells;
        uStack_4f0 = CONCAT44(local_490.CurrentBitIndex,local_490.UnvisitedBitMask);
        lStack_4e8 = CONCAT44(local_490._28_4_,local_490.BaseBitIndex);
        iStack_350 = *(int *)&(pFVar47->ActivatedCells).Cells.Elements.field_0x8 -
                     *(int *)&(pFVar47->ActivatedCells).Cells.Elements.field_0x34;
        pTStack_4f8 = local_490.Array;
        local_4e0 = iStack_350;
        local_368 = local_490.Array;
        uStack_34c = uStack_4dc;
        local_378._0_8_ = local_508._0_8_;
        unique0x10003668 = unique0x10001a15;
        uStack_360 = uStack_4f0;
        local_358 = lStack_4e8;
        pTVar31 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_1a8,
                             (TBitArray<FDefaultBitArrayAllocator> *)
                             &(pFVar47->ActivatedCells).Cells.Elements.field_0x10,
                             *(int *)&(pFVar47->ActivatedCells).Cells.Elements.field_0x28);
        local_508._0_8_ = &pFVar47->ActivatedCells;
        unique0x1000153d = pTVar31->_padding_;
        pTStack_4f8 = pTVar31->Array;
        uStack_4f0._0_4_ = pTVar31->UnvisitedBitMask;
        uStack_4f0._4_4_ = pTVar31->CurrentBitIndex;
        lStack_4e8 = *(longlong *)&pTVar31->BaseBitIndex;
        local_238.InitialNum =
             *(int *)&(pFVar47->ActivatedCells).Cells.Elements.field_0x8 -
             *(int *)&(pFVar47->ActivatedCells).Cells.Elements.field_0x34;
        local_4e0 = local_238.InitialNum;
        local_238._44_4_ = uStack_4dc;
        local_238._padding_ = local_508._0_8_;
        local_238._padding_ = unique0x1000153d;
        local_238._padding_ = (longlong)pTStack_4f8;
        local_238._padding_ = uStack_4f0;
        local_238._padding_ = lStack_4e8;
        bVar24 = TSparseArray<TSparseSetElement<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)local_378,&local_238);
        if (bVar24) {
          do {
            `UWorldPartitionStreamingPolicy::UpdateStreamingStateInternal'::__l42::<lambda_4>::
            operator()(&local_3d0,
                       *(UWorldPartitionRuntimeCell **)
                        (*(longlong *)
                          &((TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
                             *)local_378._0_8_)->Elements + (longlong)uStack_360._4_4_ * 0x10));
            uStack_360 = CONCAT44(uStack_360._4_4_,(uint)uStack_360 & ~uStack_36c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_378 + 8));
            bVar24 = TSparseArray<TSparseSetElement<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForConstIterator::operator!=
                               ((TRangedForConstIterator *)local_378,&local_238);
          } while (bVar24);
        }
        pFVar47 = param_1->CurrentState;
        local_4b0._padding_._4_4_ = (undefined4)local_568;
        local_4b0._padding_._0_4_ = 0;
        local_4b0.Array =
             (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar47->LoadedCells).Elements.field_0x10;
        local_4b0.UnvisitedBitMask = 0xffffffff;
        local_4b0.CurrentBitIndex = 0;
        local_4b0.BaseBitIndex = 0;
        if (*(int *)&(pFVar47->LoadedCells).Elements.field_0x28 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4b0);
        }
        uStack_558 = CONCAT44(local_4b0._padding_._4_4_,(undefined4)local_4b0._padding_);
        local_560 = (ForElementType<unsigned_int>)&pFVar47->LoadedCells;
        uStack_548 = CONCAT44(local_4b0.CurrentBitIndex,local_4b0.UnvisitedBitMask);
        uStack_540 = CONCAT44(local_4b0._28_4_,local_4b0.BaseBitIndex);
        local_538 = *(int *)&(pFVar47->LoadedCells).Elements.field_0x8 -
                    *(int *)&(pFVar47->LoadedCells).Elements.field_0x34;
        FStack_550 = (ForElementType<unsigned_int>)local_4b0.Array;
        uStack_4dc = uStack_534;
        local_4e0 = local_538;
        pTStack_4f8 = local_4b0.Array;
        local_508._0_8_ = local_560;
        unique0x10003518 = uStack_558;
        uStack_4f0 = uStack_548;
        lStack_4e8 = uStack_540;
        pTVar31 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_188,
                             (TBitArray<FDefaultBitArrayAllocator> *)
                             &(pFVar47->LoadedCells).Elements.field_0x10,
                             *(int *)&(pFVar47->LoadedCells).Elements.field_0x28);
        local_560 = (ForElementType<unsigned_int>)&pFVar47->LoadedCells;
        uStack_558 = pTVar31->_padding_;
        FStack_550 = (ForElementType<unsigned_int>)pTVar31->Array;
        uStack_548._0_4_ = pTVar31->UnvisitedBitMask;
        uStack_548._4_4_ = pTVar31->CurrentBitIndex;
        uStack_540 = *(longlong *)&pTVar31->BaseBitIndex;
        local_538 = *(int *)&(pFVar47->LoadedCells).Elements.field_0x8 -
                    *(int *)&(pFVar47->LoadedCells).Elements.field_0x34;
        local_208._44_4_ = uStack_534;
        local_208.InitialNum = local_538;
        local_208._padding_ = (longlong)local_560;
        local_208._padding_ = uStack_558;
        local_208._padding_ = (longlong)FStack_550;
        local_208._padding_ = uStack_548;
        local_208._padding_ = uStack_540;
        bVar24 = TSparseArray<TSparseSetElement<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForConstIterator::operator!=
                           ((TRangedForConstIterator *)local_508,&local_208);
        if (bVar24) {
          do {
            `UWorldPartitionStreamingPolicy::UpdateStreamingStateInternal'::__l42::<lambda_4>::
            operator()(&local_3d0,
                       *(UWorldPartitionRuntimeCell **)
                        (*(longlong *)
                          (TSparseArray<TSparseSetElement<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_508._0_8_ + (longlong)uStack_4f0._4_4_ * 0x10));
            uStack_4f0 = CONCAT44(uStack_4f0._4_4_,(uint)uStack_4f0 & ~uStack_4fc);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_508 + 8));
            bVar24 = TSparseArray<TSparseSetElement<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForConstIterator::operator!=
                               ((TRangedForConstIterator *)local_508,&local_208);
          } while (bVar24);
        }
      }
      if (bVar48) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  pUVar29 = UWorld::GetSubsystem<UWorldPartitionSubsystem>(param_1->World);
  local_570 = &pUVar29->ServerClientsVisibleLevelNames;
  bVar48 = -1 < CpuChannel->Enabled;
  if (bVar48) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId551,
               "UWorldPartitionStreamingPolicy::UpdateStreamingState_FrameLoadCells",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
               ,0x227);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId551);
  }
  pTVar30 = param_1->FrameLoadCells;
  if ((*(int *)&(pTVar30->Elements).field_0x8 != *(int *)&(pTVar30->Elements).field_0x34) &&
     (pTVar6 = param_1->FrameActivateCells,
     *(int *)&(pTVar6->Elements).field_0x8 != *(int *)&(pTVar6->Elements).field_0x34)) {
    pTVar30 = TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
              ::Difference(pTVar30,&local_e8,pTVar6);
    if (param_1->FrameLoadCells != pTVar30) {
      TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
      ::
      Move<TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>_>
                (param_1->FrameLoadCells,pTVar30);
    }
    local_e8.HashSize = 0;
    if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_e8.Elements);
  }
  if (bVar48) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (param_1->bCanStream != false) {
    bVar48 = -1 < CpuChannel->Enabled;
    if (bVar48) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId561,
                 "UWorldPartitionStreamingPolicy::UpdateStreamingState_ToActivateCells",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                 ,0x231);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId561);
    }
    FVar43 = (ForElementType<unsigned_int>)param_1->FrameActivateCells;
    local_4d0._padding_._4_4_ = (undefined4)local_568;
    local_4d0._padding_._0_4_ = 0;
    local_4d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)FVar43 + 0x10);
    local_4d0.UnvisitedBitMask = 0xffffffff;
    local_4d0.CurrentBitIndex = 0;
    local_4d0.BaseBitIndex = 0;
    if (*(int *)((longlong)FVar43 + 0x28) != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4d0);
    }
    uStack_558 = CONCAT44(local_4d0._padding_._4_4_,(undefined4)local_4d0._padding_);
    uStack_548 = CONCAT44(local_4d0.CurrentBitIndex,local_4d0.UnvisitedBitMask);
    uStack_540 = CONCAT44(local_4d0._28_4_,local_4d0.BaseBitIndex);
    local_538 = *(int *)((longlong)FVar43 + 8) - *(int *)((longlong)FVar43 + 0x34);
    FStack_550 = (ForElementType<unsigned_int>)local_4d0.Array;
    uStack_380._4_4_ = uStack_534;
    uStack_380._0_4_ = local_538;
    local_398 = local_4d0.Array;
    local_560 = FVar43;
    local_3a8._0_8_ = FVar43;
    unique0x10003648 = uStack_558;
    uStack_390 = uStack_548;
    local_388 = uStack_540;
    pTVar31 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_168,
                         (TBitArray<FDefaultBitArrayAllocator> *)((longlong)FVar43 + 0x10),
                         *(int *)((longlong)FVar43 + 0x28));
    uStack_558 = pTVar31->_padding_;
    FStack_550 = (ForElementType<unsigned_int>)pTVar31->Array;
    uStack_548._0_4_ = pTVar31->UnvisitedBitMask;
    uStack_548._4_4_ = pTVar31->CurrentBitIndex;
    uStack_540 = *(longlong *)&pTVar31->BaseBitIndex;
    local_538 = *(int *)((longlong)FVar43 + 8) - *(int *)((longlong)FVar43 + 0x34);
    local_1d8._44_4_ = uStack_534;
    local_1d8.InitialNum = local_538;
    local_560 = FVar43;
    local_1d8._padding_ = (longlong)FVar43;
    local_1d8._padding_ = uStack_558;
    local_1d8._padding_ = (longlong)FStack_550;
    local_1d8._padding_ = uStack_548;
    local_1d8._padding_ = uStack_540;
    bVar24 = TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForIterator::operator!=((TRangedForIterator *)local_3a8,&local_1d8);
    if (bVar24) {
      do {
        local_528 = (ForElementType<unsigned_int>)&param_1->CurrentState->ActivatedCells;
        TVar7 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0)
                ((TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)
                (*(longlong *)local_3a8._0_8_ + (longlong)uStack_390._4_4_ * 0x10))->DebugPtr;
        local_448 = TVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (TVar7.DebugPtr != (UWorldPartitionRuntimeCell *)0x0) {
            UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar7.DebugPtr != (UWorldPartitionRuntimeCell *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
          }
        }
        uVar35 = ((uint)((ulonglong)TVar7.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)TVar7.DebugPtr >> 4)) * -0x7a143595;
        uVar35 = (uVar35 >> 0xd ^ uVar35) * -0x3d4d51cb;
        uVar35 = uVar35 >> 0x10 ^ uVar35;
        iVar27 = TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>
                           ((TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
                             *)local_528,uVar35,
                            (TObjectPtr<UWorldPartitionRuntimeCell_const_> *)&local_448.ObjectPtr);
        if (iVar27 == -1) {
          if ((((param_1->bIsServer != false) ||
               (param_1->bIsBlockingCausedByBadStreamingPerformance == false)) ||
              ((TVar7.DebugPtr)->bBlockOnSlowLoading != false)) &&
             (((TVar7.DebugPtr)->bIsHLOD == false ||
              (bVar24 = UWorldPartitionHLODRuntimeSubsystem::IsHLODEnabled(), bVar24)))) {
            if (param_1->bShouldMergeStreamingSourceInfo != false) {
              (**(code **)((((TVar7.DebugPtr)->RuntimeCellData).field0_0x0.DebugPtr)->_padding_ +
                          0x2d8))();
            }
            local_520 = TVar7;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
            }
            pTVar46 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)
                      (param_2->ToActivateCells).AllocatorInstance.Data;
            if ((pTVar46 <= &local_520) &&
               (lVar36 = (longlong)(param_2->ToActivateCells).ArrayMax,
               &local_520 < pTVar46 + lVar36)) {
              local_590 = (longlong)(param_2->ToActivateCells).ArrayNum;
              local_588 = 8;
              local_5a8 = &local_520;
              local_5a0 = pTVar46;
              local_598 = lVar36;
              bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar24) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
            }
            iVar27 = (param_2->ToActivateCells).ArrayNum;
            piVar2 = &(param_2->ToActivateCells).ArrayMax;
            if (iVar27 == *piVar2) {
              iVar27 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&(param_2->ToActivateCells).AllocatorInstance,piVar2);
            }
            (param_2->ToActivateCells).ArrayNum = iVar27 + 1;
            ((TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)
            ((param_2->ToActivateCells).AllocatorInstance.Data + (longlong)iVar27 * 8))->DebugPtr =
                 (UWorldPartitionRuntimeCell *)local_520;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_520.DebugPtr != (UWorldPartitionRuntimeCell *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_520.DebugPtr);
            }
          }
        }
        else if ((param_1->bShouldMergeStreamingSourceInfo != false) &&
                (local_440 = TVar7,
                iVar27 = TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
                         ::FindIndexByHash<UWorldPartitionRuntimeCell_const_*>
                                   (&(param_1->CurrentState->ActivatedCells).PendingAddToWorldCells,
                                    uVar35,&local_440.DebugPtr), iVar27 != -1)) {
          (**(code **)((((TVar7.DebugPtr)->RuntimeCellData).field0_0x0.DebugPtr)->_padding_ + 0x2d8)
          )();
        }
        uStack_390 = CONCAT44(uStack_390._4_4_,(uint)uStack_390 & ~uStack_39c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_3a8 + 8));
        bVar24 = TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_3a8,&local_1d8);
      } while (bVar24);
    }
    if (bVar48) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (param_1->bCanStream != false) {
      if (CpuChannel->Enabled < 0) {
        local_578 = '\0';
      }
      else {
        local_578 = '\x01';
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId586,
                   "UWorldPartitionStreamingPolicy::UpdateStreamingState_ToLoadCells",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                   ,0x24a);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId586);
      }
      local_528 = (ForElementType<unsigned_int>)param_1->FrameLoadCells;
      local_470._padding_._0_4_ = 0;
      FVar43 = (ForElementType<unsigned_int>)((longlong)local_528 + 0x10);
      local_470._padding_._4_4_ = (undefined4)local_568;
      local_470.UnvisitedBitMask = 0xffffffff;
      local_470.CurrentBitIndex = 0;
      local_470.BaseBitIndex = 0;
      local_470.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar43;
      if (*(int *)((longlong)local_528 + 0x28) != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_470);
      }
      FVar22 = local_528;
      uStack_558 = CONCAT44(local_470._padding_._4_4_,(undefined4)local_470._padding_);
      local_560 = local_528;
      uStack_548._4_4_ = local_470.CurrentBitIndex;
      uStack_548._0_4_ = local_470.UnvisitedBitMask;
      uStack_540._4_4_ = local_470._28_4_;
      uStack_540._0_4_ = local_470.BaseBitIndex;
      local_538 = *(int *)((longlong)local_528 + 8) - *(int *)((longlong)local_528 + 0x34);
      FStack_550 = (ForElementType<unsigned_int>)local_470.Array;
      local_348 = local_528;
      uStack_320 = CONCAT44(uStack_534,local_538);
      TStack_340.Array = local_470.Array;
      TStack_340._padding_ = uStack_558;
      TStack_340._16_8_ = uStack_548;
      TStack_340._24_8_ = uStack_540;
      pTVar31 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_148,(TBitArray<FDefaultBitArrayAllocator> *)FVar43,
                           *(int *)((longlong)local_528 + 0x28));
      uStack_558 = pTVar31->_padding_;
      FVar43 = (ForElementType<unsigned_int>)pTVar31->Array;
      lVar36._0_4_ = pTVar31->UnvisitedBitMask;
      lVar36._4_4_ = pTVar31->CurrentBitIndex;
      uStack_540 = *(longlong *)&pTVar31->BaseBitIndex;
      FStack_550 = FVar43;
      uStack_548 = lVar36;
      while( true ) {
        FVar42 = local_348;
        if (*(int *)((longlong)local_348 + 8) - *(int *)((longlong)local_348 + 0x34) !=
            (int)uStack_320) {
          local_576[0] = 0;
          `TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_576);
        }
        cVar25 = local_577;
        if (((TStack_340.CurrentBitIndex == lVar36._4_4_) &&
            ((ForElementType<unsigned_int>)TStack_340.Array == FVar43)) && (FVar42 == FVar22))
        break;
        pFVar47 = param_1->CurrentState;
        TVar7 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0)
                ((TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)
                (*(longlong *)FVar42 + (longlong)TStack_340.CurrentBitIndex * 0x10))->DebugPtr;
        local_438 = TVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (TVar7.DebugPtr != (UWorldPartitionRuntimeCell *)0x0) {
            UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar7.DebugPtr != (UWorldPartitionRuntimeCell *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
          }
        }
        uVar35 = ((uint)((ulonglong)TVar7.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)TVar7.DebugPtr >> 4)) * -0x7a143595;
        uVar35 = (uVar35 >> 0xd ^ uVar35) * -0x3d4d51cb;
        iVar27 = TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>
                           (&pFVar47->LoadedCells,uVar35 >> 0x10 ^ uVar35,
                            (TObjectPtr<UWorldPartitionRuntimeCell_const_> *)&local_438.ObjectPtr);
        if (iVar27 == -1) {
          if ((((param_1->bIsServer != false) ||
               (param_1->bIsBlockingCausedByBadStreamingPerformance == false)) ||
              ((TVar7.DebugPtr)->bBlockOnSlowLoading != false)) &&
             (((TVar7.DebugPtr)->bIsHLOD == false ||
              (bVar48 = UWorldPartitionHLODRuntimeSubsystem::IsHLODEnabled(), bVar48)))) {
            if (param_1->bIsServer == false) {
LAB_148adfd7d:
              if (param_1->bShouldMergeStreamingSourceInfo != false) {
                (**(code **)((((TVar7.DebugPtr)->RuntimeCellData).field0_0x0.DebugPtr)->_padding_ +
                            0x2d8))();
              }
              local_510 = TVar7;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
              }
              pTVar46 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)
                        (param_2->ToLoadCells).AllocatorInstance.Data;
              if ((pTVar46 <= &local_510) &&
                 (lVar32 = (longlong)(param_2->ToLoadCells).ArrayMax, &local_510 < pTVar46 + lVar32)
                 ) {
                local_590 = (longlong)(param_2->ToLoadCells).ArrayNum;
                local_588 = 8;
                local_5a8 = &local_510;
                local_5a0 = pTVar46;
                local_598 = lVar32;
                bVar48 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar48) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
              }
              iVar27 = (param_2->ToLoadCells).ArrayNum;
              piVar2 = &(param_2->ToLoadCells).ArrayMax;
              if (iVar27 == *piVar2) {
                iVar27 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,(ForAnyElementType *)param_2,piVar2);
              }
              (param_2->ToLoadCells).ArrayNum = iVar27 + 1;
              ((TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)
              ((param_2->ToLoadCells).AllocatorInstance.Data + (longlong)iVar27 * 8))->DebugPtr =
                   (UWorldPartitionRuntimeCell *)local_510;
              TVar7 = local_510;
            }
            else {
              pFVar47 = param_1->CurrentState;
              local_430 = TVar7;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr),
                 UE::GC::GIsIncrementalReachabilityPending != false)) {
                UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
              }
              uVar35 = ((uint)((ulonglong)TVar7.DebugPtr >> 0x14) & 0xffff ^
                       (uint)((ulonglong)TVar7.DebugPtr >> 4)) * -0x7a143595;
              uVar35 = (uVar35 >> 0xd ^ uVar35) * -0x3d4d51cb;
              iVar27 = TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>
                                 (&(pFVar47->ActivatedCells).Cells,uVar35 >> 0x10 ^ uVar35,
                                  (TObjectPtr<UWorldPartitionRuntimeCell_const_> *)
                                  &local_430.ObjectPtr);
              if (iVar27 == -1) goto LAB_148adfd7d;
              if ((param_1->bIsServer == false) &&
                 (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InParams.bIsServer",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                                      ,0x20a,L""), bVar48)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              cVar25 = (**(code **)((TVar7.DebugPtr)->_padding_ + 0x348))(TVar7.DebugPtr);
              if ((cVar25 != '\0') &&
                 (this = (UObjectBaseUtility *)
                         (**(code **)((TVar7.DebugPtr)->_padding_ + 0x2d8))(TVar7.DebugPtr),
                 this != (UObjectBaseUtility *)0x0)) {
                pUVar33 = UObjectBaseUtility::GetPackage(this);
                FVar8 = (FName)pUVar33->_padding_;
                local_428 = FVar8;
                uVar35 = ::GetTypeHash(FVar8.ComparisonIndex.Value);
                iVar27 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
                         FindIndexByHash<FName>(local_570,FVar8.Number + uVar35,&local_428);
                if (iVar27 != -1) {
                  if ((5 < (byte)LogWorldPartition._0_1_) && (param_2->bUpdateServerEpoch != false))
                  {
                    UE::Logging::Private::BasicLog<6>
                              (&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
                  }
                  param_2->bUpdateServerEpoch = false;
                  goto LAB_148adfe5e;
                }
              }
              local_518 = TVar7;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
              }
              pTVar46 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)
                        (param_2->ToDeactivateCells).AllocatorInstance.Data;
              if ((pTVar46 <= &local_518) &&
                 (lVar32 = (longlong)(param_2->ToDeactivateCells).ArrayMax,
                 &local_518 < pTVar46 + lVar32)) {
                local_590 = (longlong)(param_2->ToDeactivateCells).ArrayNum;
                local_588 = 8;
                local_5a8 = &local_518;
                local_5a0 = pTVar46;
                local_598 = lVar32;
                bVar48 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar48) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
              }
              iVar27 = (param_2->ToDeactivateCells).ArrayNum;
              piVar2 = &(param_2->ToDeactivateCells).ArrayMax;
              if (iVar27 == *piVar2) {
                iVar27 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&(param_2->ToDeactivateCells).AllocatorInstance,piVar2);
              }
              (param_2->ToDeactivateCells).ArrayNum = iVar27 + 1;
              ((TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)
              ((param_2->ToDeactivateCells).AllocatorInstance.Data + (longlong)iVar27 * 8))->
              DebugPtr = (UWorldPartitionRuntimeCell *)local_518;
              TVar7 = local_518;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar7.DebugPtr != (UWorldPartitionRuntimeCell *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
            }
          }
        }
        else if ((param_1->bShouldMergeStreamingSourceInfo != false) &&
                (lVar32 = (**(code **)((TVar7.DebugPtr)->_padding_ + 0x2d8))(TVar7.DebugPtr),
                lVar32 == 0)) {
          (**(code **)((((TVar7.DebugPtr)->RuntimeCellData).field0_0x0.DebugPtr)->_padding_ + 0x2d8)
          )();
        }
LAB_148adfe5e:
        TStack_340.UnvisitedBitMask = TStack_340.UnvisitedBitMask & ~TStack_340._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_340);
      }
      if (local_578 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  pTVar46 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)0x0;
  bVar48 = -1 < CpuChannel->Enabled;
  if (bVar48) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId625,
               "UWorldPartitionStreamingPolicy::UpdateStreamingState_ToUnloadCells",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
               ,0x271);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId625);
  }
  local_290 = local_570;
  local_2b0 = param_1;
  local_2a8 = param_2;
  local_2a0 = param_1;
  local_298 = param_2;
  `UWorldPartitionStreamingPolicy::UpdateStreamingStateInternal'::__l114::<lambda_9>::operator()
            (&local_2b0,&(param_1->CurrentState->ActivatedCells).Cells);
  `UWorldPartitionStreamingPolicy::UpdateStreamingStateInternal'::__l114::<lambda_9>::operator()
            (&local_2b0,&param_1->CurrentState->LoadedCells);
  if (bVar48) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (5 < (byte)LogWorldPartition._0_1_) {
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              (&local_288,(FName)LogWorldPartition._4_8_,Verbose);
    if (((param_1->bIsStreamingInEnabled != false) &&
        ((0 < (param_2->ToActivateCells).ArrayNum || (0 < (param_2->ToLoadCells).ArrayNum)))) ||
       (0 < (param_2->ToUnloadCells).ArrayNum)) {
      if (5 < (byte)LogWorldPartition._0_1_) {
        local_5a8 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)
                    CONCAT44(local_5a8._4_4_,(param_2->ToUnloadCells).ArrayNum);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      }
      pFVar47 = param_1->CurrentState;
      pTVar39 = pTVar46;
      pTVar40 = pTVar46;
      pTVar44 = pTVar46;
      if (0 < (pFVar47->StreamingSources).ArrayNum) {
        do {
          iVar27 = (pFVar47->StreamingSources).ArrayNum;
          uVar41 = (uint)pTVar40;
          uVar35 = 0;
          if ((int)uVar41 < iVar27) {
            uVar35 = ~uVar41 >> 0x1f;
          }
          if (uVar35 == 0) {
            local_5a8 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)(longlong)(int)uVar41;
            local_5a0 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)(longlong)iVar27;
            bVar48 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar48) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
          auVar60 = *(undefined1 (*) [16])
                     (param_1->WorldPartitionInstanceTransform).Rotation.ZW.m128d_f64;
          pFVar9 = (pFVar47->StreamingSources).AllocatorInstance.Data;
          auVar55 = *(undefined1 (*) [16])
                     (param_1->WorldPartitionInstanceTransform).Rotation.XY.m128d_f64;
          dVar19 = (param_1->WorldPartitionInstanceTransform).Rotation.ZW.m128d_f64[1];
          pFVar3 = (FScriptContainerElement *)((longlong)pTVar39 + (longlong)(pFVar9 + 8));
          pFVar47 = param_1->CurrentState;
          dVar17 = *(double *)((longlong)pTVar39 + (longlong)(pFVar9 + 0x18)) *
                   (param_1->WorldPartitionInstanceTransform).Scale3D.ZW.m128d_f64[0];
          dVar18 = (param_1->WorldPartitionInstanceTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
          dVar15 = (param_1->WorldPartitionInstanceTransform).Scale3D.XY.m128d_f64[0] *
                   *(double *)pFVar3;
          dVar16 = (param_1->WorldPartitionInstanceTransform).Scale3D.XY.m128d_f64[1] *
                   *(double *)(pFVar3 + 8);
          uVar61 = (undefined4)((ulonglong)dVar16 >> 0x20);
          local_258 = *(undefined1 (*) [16])
                       (param_1->WorldPartitionInstanceTransform).Rotation.XY.m128d_f64;
          iVar27 = (pFVar47->StreamingSources).ArrayNum;
          auVar50._8_4_ = SUB84(dVar16,0);
          auVar50._0_8_ = dVar15;
          auVar50._12_4_ = uVar61;
          uVar35 = 0;
          if ((int)uVar41 < iVar27) {
            uVar35 = ~uVar41 >> 0x1f;
          }
          dVar13 = auVar60._0_8_;
          auVar53 = blendpd(local_258,auVar60,2);
          auVar62._0_8_ = auVar50._8_8_ * local_258._0_8_ - local_258._8_8_ * dVar15;
          auVar62._8_8_ = dVar17 * local_258._8_8_ - dVar13 * dVar16;
          auVar49._8_4_ = SUB84(dVar16,0);
          auVar49._0_8_ = dVar15;
          auVar49._12_4_ = uVar61;
          auVar57._8_4_ = SUB84(dVar18,0);
          auVar57._0_8_ = dVar17;
          auVar57._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
          auVar50 = blendpd(auVar49,auVar57,2);
          auVar51._0_8_ = auVar50._0_8_ * dVar13 - auVar53._0_8_ * dVar17;
          auVar51._8_8_ = auVar50._8_8_ * auVar60._8_8_ - auVar53._8_8_ * dVar18;
          auVar50 = blendpd(auVar62,auVar51,2);
          dVar18 = auVar62._8_8_ + auVar62._8_8_;
          dVar14 = auVar51._0_8_ + auVar51._0_8_;
          uVar61 = (undefined4)((ulonglong)dVar14 >> 0x20);
          auVar63._0_8_ = auVar50._0_8_ + auVar50._0_8_;
          auVar63._8_8_ = auVar50._8_8_ + auVar50._8_8_;
          auVar58._8_4_ = SUB84(dVar14,0);
          auVar58._0_8_ = dVar18;
          auVar58._12_4_ = uVar61;
          auVar54._8_4_ = SUB84(dVar14,0);
          auVar54._0_8_ = dVar18;
          auVar54._12_4_ = uVar61;
          auVar50 = blendpd(auVar54,auVar63,2);
          auVar59._0_8_ = auVar58._8_8_ * auVar55._0_8_ - auVar55._8_8_ * dVar18;
          auVar59._8_8_ = auVar63._0_8_ * auVar55._8_8_ - dVar13 * dVar14;
          auVar53._8_4_ = SUB84(auVar59._8_8_,0);
          auVar53._0_8_ = auVar59._0_8_;
          auVar53._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
          auVar57 = blendpd(auVar55,auVar60,2);
          auVar55._0_8_ = auVar50._0_8_ * dVar13 - auVar57._0_8_ * auVar63._0_8_;
          auVar55._8_8_ = auVar50._8_8_ * auVar60._8_8_ - auVar57._8_8_ * auVar63._8_8_;
          auVar60 = blendpd(auVar59,auVar55,2);
          dVar16 = dVar14 * dVar19 + dVar16 + auVar55._0_8_ +
                   (param_1->WorldPartitionInstanceTransform).Translation.XY.m128d_f64[1];
          local_2d8 = auVar63._0_8_ * dVar19 + dVar17 + auVar60._0_8_ +
                      (param_1->WorldPartitionInstanceTransform).Translation.ZW.m128d_f64[0];
          local_2e8._8_4_ = SUB84(dVar16,0);
          local_2e8._0_8_ =
               dVar18 * dVar19 + dVar15 + auVar53._8_8_ +
               (param_1->WorldPartitionInstanceTransform).Translation.XY.m128d_f64[0];
          local_2e8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          if ((uVar35 == 0) &&
             (local_5a8 = pTVar44,
             local_5a0 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)(longlong)iVar27,
             bVar48 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar48)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar34 = UE::Math::TRotator<double>::Quaternion
                              ((TRotator<double> *)
                               ((longlong)pTVar39 +
                               (longlong)((pFVar47->StreamingSources).AllocatorInstance.Data + 0x20)
                               ),&local_108);
          auVar60 = *(undefined1 (*) [16])
                     (param_1->WorldPartitionInstanceTransform).Rotation.XY.m128d_f64;
          auVar55 = *(undefined1 (*) [16])
                     (param_1->WorldPartitionInstanceTransform).Rotation.ZW.m128d_f64;
          dVar13 = pTVar34->Z;
          dVar14 = pTVar34->W;
          dVar20 = pTVar34->X;
          dVar21 = pTVar34->Y;
          dVar16 = auVar60._0_8_;
          auVar56._8_4_ = auVar60._0_4_;
          auVar56._0_8_ = dVar16;
          auVar56._12_4_ = auVar60._4_4_;
          dVar19 = auVar55._8_8_;
          dVar17 = auVar60._8_8_;
          auVar60._8_4_ = auVar55._8_4_;
          auVar60._0_8_ = dVar19;
          auVar60._12_4_ = auVar55._12_4_;
          dVar18 = auVar55._0_8_;
          auVar52._8_4_ = auVar55._0_4_;
          auVar52._0_8_ = dVar18;
          auVar52._12_4_ = auVar55._4_4_;
          dVar15 = dVar16 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                   + dVar19 * dVar14 +
                   dVar17 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                   + dVar18 * dVar13 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_258._8_8_ =
               auVar56._8_8_ * dVar13 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar60._8_8_ * dVar21 +
               dVar17 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar52._8_8_ * dVar20 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          local_258._0_8_ =
               dVar16 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar19 * dVar20 +
               dVar17 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar18 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_248._8_4_ = SUB84(dVar15,0);
          local_248._0_8_ =
               dVar16 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar19 * dVar13 +
               dVar17 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar18 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_248._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
          UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_258,&local_278);
          if (5 < (byte)LogWorldPartition._0_1_) {
            local_5a8 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)local_278.Roll;
            ::FString::PrintfImpl(&local_400,L"P=%f Y=%f R=%f");
            FVar38.Data = (FScriptContainerElement *)L"";
            if (local_400.Data.ArrayNum != 0) {
              FVar38.Data = local_400.Data.AllocatorInstance.Data;
            }
            local_5a8 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)local_2d8;
            ::FString::PrintfImpl(&local_410,L"X=%3.3f Y=%3.3f Z=%3.3f");
            local_5a8 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)FVar38.Data;
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
            if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_410.Data.AllocatorInstance.Data);
            }
            if ((TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)
                local_400.Data.AllocatorInstance.Data !=
                (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)0x0) {
              FMemory::Free(local_400.Data.AllocatorInstance.Data);
            }
          }
          pFVar47 = param_1->CurrentState;
          pTVar39 = pTVar39 + 0x2c;
          pTVar40 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)(ulonglong)(uVar41 + 1);
          param_2 = local_4d8;
          pTVar44 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)((longlong)pTVar44 + 1);
          cVar25 = local_577;
        } while ((int)(uVar41 + 1) < (pFVar47->StreamingSources).ArrayNum);
      }
    }
    FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogWorldPartition,Verbose);
    FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_288);
  }
  UpdateDebugCellsStreamingPriority
            (param_1->FrameActivateCells,param_1->FrameLoadCells,
             param_1->bShouldMergeStreamingSourceInfo);
  if (param_1->RuntimeHash != (UWorldPartitionRuntimeHash *)0x0) {
    if (param_1->bMatchStarted == false) {
      param_2->StreamingPerformance = Good;
      param_2->bBlockOnSlowStreaming = false;
    }
    else {
      if (CpuChannel->Enabled < 0) {
        local_578 = '\0';
      }
      else {
        local_578 = '\x01';
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId669,
                   "UWorldPartitionStreamingPolicy::GetStreamingPerformance",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                   ,0x29d);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId669);
      }
      local_560 = (ForElementType<unsigned_int>)param_1->FrameActivateCells;
      uVar41 = 0;
      uVar35 = *(uint *)((longlong)local_560 + 0x28);
      FStack_550 = (ForElementType<unsigned_int>)((longlong)local_560 + 0x10);
      pFVar47 = param_1->CurrentState;
      TStack_310.CurrentBitIndex = uVar41;
      if (uVar35 != 0) {
        FVar43 = *(ForElementType<unsigned_int> *)
                  (((TBitArray<FDefaultBitArrayAllocator> *)((longlong)local_560 + 0x20))->
                  AllocatorInstance).InlineData;
        if (FVar43 == (ForElementType<unsigned_int>)0x0) {
          FVar43 = FStack_550;
        }
        uVar45 = *(uint *)FVar43;
        pTVar39 = pTVar46;
        while (uVar41 = (uint)pTVar39, uVar45 == 0) {
          iVar27 = (int)pTVar46;
          uVar41 = uVar41 + 0x20;
          pTVar39 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)(ulonglong)uVar41;
          uVar45 = iVar27 + 1;
          pTVar46 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)(ulonglong)uVar45;
          TStack_310.CurrentBitIndex = uVar35;
          if ((int)((uVar35 - 1) + ((int)(uVar35 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar45)
          goto LAB_148ae04f6;
          uVar45 = *(uint *)((uchar *)((longlong)FVar43 + 4) + (longlong)iVar27 * 4);
        }
        local_568 = (ulonglong)(-uVar45 & uVar45);
        uVar1 = local_568 * 2 + 1;
        lVar36 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        local_3b8._4_4_ = (int)lVar36;
        TStack_310.CurrentBitIndex = local_3b8._4_4_ + -1 + uVar41;
        if ((int)uVar35 < TStack_310.CurrentBitIndex) {
          TStack_310.CurrentBitIndex = uVar35;
        }
      }
LAB_148ae04f6:
      local_538 = *(int *)((longlong)local_560 + 8) - *(int *)((longlong)local_560 + 0x34);
      uStack_558 = CONCAT44((int)local_568,(int)pTVar46);
      uStack_540 = CONCAT44(local_10c,uVar41);
      uVar35 = *(uint *)((longlong)local_560 + 0x28);
      uStack_548 = CONCAT44(TStack_310.CurrentBitIndex,0xffffffff);
      local_528 = (ForElementType<unsigned_int>)((longlong)local_560 + 0x10);
      uVar41 = -1 << ((byte)uVar35 & 0x1f);
      TStack_310._padding_ = uStack_558;
      iVar27 = (int)uVar35 >> 5;
      uVar45 = uVar35 & 0xffffffe0;
      local_570 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                  CONCAT44(local_570._4_4_,uVar35);
      local_568 = CONCAT44(local_568._4_4_,uVar41);
      uStack_2f0 = CONCAT44(uStack_534,local_538);
      TStack_310.UnvisitedBitMask = 0xffffffff;
      TStack_310._24_8_ = uStack_540;
      local_420 = local_560;
      local_318 = local_560;
      TStack_310.Array = (TBitArray<FDefaultBitArrayAllocator> *)FStack_550;
      if ((int)uVar35 < 0) {
        bVar48 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L"");
        if (bVar48) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar35 = (uint)local_570;
        uVar41 = (uint)local_568;
      }
      FVar22 = local_420;
      FVar43 = local_528;
      uVar4 = *(int *)((longlong)local_528 + 0x18);
      if (uVar35 != uVar4) {
        local_570 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                    CONCAT44(local_570._4_4_,uVar4);
        FVar42 = local_528;
        if (*(ForElementType<unsigned_int> *)((longlong)local_528 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar42 = *(ForElementType<unsigned_int> *)((longlong)local_528 + 0x10);
        }
        uVar41 = uVar41 & *(uint *)((longlong)FVar42 + (longlong)iVar27 * 4);
        while (uVar41 == 0) {
          lVar36 = (longlong)iVar27;
          uVar45 = uVar45 + 0x20;
          iVar27 = iVar27 + 1;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
          goto LAB_148ae062f;
          uVar41 = *(uint *)((longlong)FVar42 + 4 + lVar36 * 4);
        }
        uVar1 = (ulonglong)(-uVar41 & uVar41) * 2 + 1;
        lVar36 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar36 == 0; lVar36 = lVar36 + -1) {
          }
        }
        uVar45 = (int)lVar36 + -1 + uVar45;
        if ((int)uVar4 < (int)uVar45) {
          uVar45 = uVar4;
        }
        local_570 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                    CONCAT44(local_570._4_4_,uVar45);
      }
LAB_148ae062f:
      iVar27 = (uint)local_570;
      while( true ) {
        FVar42 = local_318;
        if (*(int *)((longlong)local_318 + 8) - *(int *)((longlong)local_318 + 0x34) !=
            (int)uStack_2f0) {
          `TSparseArray<TSparseSetElement<UWorldPartitionRuntimeCell_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_530);
        }
        pFVar23 = local_4d8;
        if (((TStack_310.CurrentBitIndex == iVar27) &&
            ((ForElementType<unsigned_int>)TStack_310.Array == FVar43)) && (FVar42 == FVar22))
        break;
        TVar7 = (TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0)
                ((TObjectPtr<UWorldPartitionRuntimeCell_const_>_u_0 *)
                (*(longlong *)FVar42 + (longlong)TStack_310.CurrentBitIndex * 0x10))->DebugPtr;
        uVar35 = ((uint)((ulonglong)TVar7.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)TVar7.DebugPtr >> 4)) * -0x7a143595;
        uVar35 = (uVar35 >> 0xd ^ uVar35) * -0x3d4d51cb;
        local_418 = TVar7;
        if (*(int *)&(pFVar47->ActivatedCells).PendingAddToWorldCells.Elements.field_0x8 !=
            *(int *)&(pFVar47->ActivatedCells).PendingAddToWorldCells.Elements.field_0x34) {
          FVar10 = (pFVar47->ActivatedCells).PendingAddToWorldCells.Hash.SecondaryData;
          FVar37 = (ForElementType<FSetElementId>)
                   &(pFVar47->ActivatedCells).PendingAddToWorldCells.Hash;
          if (FVar10 != (ForElementType<FSetElementId>)0x0) {
            FVar37 = FVar10;
          }
          iVar28 = *(int *)((longlong)FVar37 +
                           (ulonglong)
                           ((pFVar47->ActivatedCells).PendingAddToWorldCells.HashSize - 1U &
                           (uVar35 >> 0x10 ^ uVar35)) * 4);
          if (iVar28 != -1) {
            lVar36 = *(longlong *)&(pFVar47->ActivatedCells).PendingAddToWorldCells.Elements;
            do {
              if (*(UWorldPartitionRuntimeCell **)(lVar36 + (longlong)iVar28 * 0x10) ==
                  TVar7.DebugPtr) goto LAB_148ae0793;
              iVar28 = *(int *)(lVar36 + 8 + (longlong)iVar28 * 0x10);
            } while (iVar28 != -1);
          }
        }
        pFVar11 = param_1->CurrentState;
        local_3f0 = TVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (TVar7.DebugPtr != (UWorldPartitionRuntimeCell *)0x0) {
            UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar7.DebugPtr != (UWorldPartitionRuntimeCell *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
          }
        }
        uVar35 = ((uint)((ulonglong)TVar7.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)TVar7.DebugPtr >> 4)) * -0x7a143595;
        uVar35 = (uVar35 >> 0xd ^ uVar35) * -0x3d4d51cb;
        iVar28 = TSet<TObjectPtr<UWorldPartitionRuntimeCell_const_>,DefaultKeyFuncs<TObjectPtr<UWorldPartitionRuntimeCell_const_>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TObjectPtr<UWorldPartitionRuntimeCell_const_>_>
                           (&(pFVar11->ActivatedCells).Cells,uVar35 >> 0x10 ^ uVar35,
                            (TObjectPtr<UWorldPartitionRuntimeCell_const_> *)&local_3f0.ObjectPtr);
        if (iVar28 == -1) {
LAB_148ae0793:
          TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
          ::Emplace<UWorldPartitionRuntimeCell_const_*_const_&>
                    (param_1->FrameAnalysePerformanceCells,(UWorldPartitionRuntimeCell **)&local_3b8
                     ,(bool *)&local_418);
        }
        TStack_310.UnvisitedBitMask = TStack_310.UnvisitedBitMask & ~TStack_310._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_310);
      }
      EVar26 = UWorldPartitionRuntimeHash::GetStreamingPerformance
                         (param_1->RuntimeHash,param_1->FrameAnalysePerformanceCells,
                          &local_4d8->bBlockOnSlowStreaming);
      cVar25 = local_577;
      pFVar23->StreamingPerformance = EVar26;
      if (local_578 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  ::Reset(param_1->FrameActivateCells);
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  ::Reset(param_1->FrameLoadCells);
  TSet<UWorldPartitionRuntimeCell_const_*,DefaultKeyFuncs<UWorldPartitionRuntimeCell_const_*,0>,FDefaultSetAllocator>
  ::Reset(param_1->FrameAnalysePerformanceCells);
  if (cVar25 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// WaitForAsyncUpdateStreamingState @ 148ae09a0

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
UWorldPartitionStreamingPolicy::WaitForAsyncUpdateStreamingState
          (UWorldPartitionStreamingPolicy *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_bool___cdecl_UWorldPartitionStreamingPolicy::WaitForAsyncUpdateStreamingState(void)_::_15_::FStat_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  uint local_res18;
  uint uStackX_1c;
  LARGE_INTEGER local_res20;
  FName local_58;
  FName local_50;
  FName local_48;
  FStatMessage local_38;
  
  if (this->AsyncUpdateStreamingStateTask == (TTask<void>)0x0) {
    return false;
  }
  if ((this->AsyncUpdateTaskState != Started) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncUpdateTaskState == EAsyncUpdateTaskState::Started",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                         ,0x2e8,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if (this->AsyncUpdateStreamingStateTask == (TTask<void>)0x0) {
    return true;
  }
  if (*(char *)((longlong)this->AsyncUpdateStreamingStateTask + 0xd0) != '\0') {
    return true;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState ==
        (FThreadSafeStaticStat<_private:_bool___cdecl_UWorldPartitionStreamingPolicy::WaitForAsyncUpdateStreamingState(void)_::_15_::FStat_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState>
         )0x0) {
      pFVar8 = ::FName::FName(&local_58,
                              "STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState")
      ;
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState,
                 *pFVar8,L"STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState",
                 "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                 MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState;
  if (StatPtr_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_UWorldPartitionStreamingPolicy::WaitForAsyncUpdateStreamingState(void)_::_15_::FStat_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState>
       )0x0) {
    pFVar8 = ::FName::FName(&local_50,
                            "STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState");
    FVar9 = (FThreadSafeStaticStat<_private:_bool___cdecl_UWorldPartitionStreamingPolicy::WaitForAsyncUpdateStreamingState(void)_::_15_::FStat_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &
                         StatPtr_STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState
                         ,*pFVar8,
                         L"STAT_WorldPartitionStreamingPolicy_WaitForAsyncUpdateStreamingState",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar5 = false;
  bVar4 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar5 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar11.Value;
        local_res10.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                   ,0x2ec);
        bVar5 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar11.Value;
      uStackX_1c = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar3 = true;
      goto LAB_148ae0b8a;
    }
  }
  bVar3 = false;
  FVar12 = local_48;
LAB_148ae0b8a:
  if (this->AsyncUpdateStreamingStateTask != (TTask<void>)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)this->AsyncUpdateStreamingStateTask);
  }
  if (((this->AsyncUpdateStreamingStateTask != (TTask<void>)0x0) &&
      (*(char *)((longlong)this->AsyncUpdateStreamingStateTask + 0xd0) == '\0')) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncUpdateStreamingStateTask.IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\WorldPartitionStreamingPolicy.cpp"
                         ,0x2ee,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar12 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
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
  return true;
}


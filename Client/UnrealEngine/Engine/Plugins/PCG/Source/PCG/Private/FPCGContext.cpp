// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 99

// NewObject_AnyThread<UPCGPointData> @ 149736330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __cdecl FPCGContext::NewObject_AnyThread<UPCGPointData>(FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGPointData *pUVar3;
  UObject *pUVar4;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGPointData *local_res18;
  
  if (param_1 != (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar4 = GetTransientPackageAsObject();
      pUVar3 = NewObject<UPCGPointData>(pUVar4);
      return pUVar3;
    }
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGPointData *)(*pcVar1)();
        return pUVar3;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar4 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UPCGPointData>(pUVar4);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar3 == (UPCGPointData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGPointData *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_res18 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGPointData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
    return pUVar3;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGPointData *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UPCGPointData>(pUVar4);
  return pUVar3;
}

// FPCGContext @ 1497373b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall FPCGContext::FPCGContext(FPCGContext *this)

{
  undefined8 local_res8;
  
  this->_padding_ = (longlong)&___7FPCGContext__6B_;
  (this->InputData).TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputData).TaggedData.ArrayNum = 0;
  (this->InputData).TaggedData.ArrayMax = 0;
  (this->InputData).bCancelExecutionOnEmpty = false;
  (this->InputData).bCancelExecution = false;
  (this->InputData).DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputData).DataCrcs.ArrayNum = 0;
  (this->InputData).DataCrcs.ArrayMax = 0;
  (this->InputData).InactiveOutputPinBitmask = 0;
  (this->OutputData).TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputData).TaggedData.ArrayNum = 0;
  (this->OutputData).TaggedData.ArrayMax = 0;
  (this->OutputData).bCancelExecutionOnEmpty = false;
  (this->OutputData).bCancelExecution = false;
  (this->OutputData).DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputData).DataCrcs.ArrayNum = 0;
  (this->OutputData).DataCrcs.ArrayMax = 0;
  (this->OutputData).InactiveOutputPinBitmask = 0;
  (this->ExecutionSource).ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->ExecutionSource,(FObjectPtr)&local_res8);
  (this->ExecutionSource).InterfaceInstance = (IPCGGraphExecutionSource *)0x0;
  (this->SourceComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->SourceComponent).WeakPtr,(FObjectPtr)&local_res8);
  (this->AsyncState).TasksChunksStartEnd.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncState).TasksChunksStartEnd.ArrayNum = 0;
  (this->AsyncState).TasksChunksStartEnd.ArrayMax = 0;
  *(undefined8 *)&(this->AsyncState).ChunkToNumElementsWrittenMap = 0;
  *(undefined8 *)&(this->AsyncState).ChunkToNumElementsWrittenMap.field_0x8 = 0;
  *(undefined8 *)&(this->AsyncState).ChunkToNumElementsWrittenMap.field_0x20 = 0;
  (this->AsyncState).EndTime = 0.0;
  (this->AsyncState).NumAvailableTasks = 0;
  (this->AsyncState).AsyncCurrentReadIndex = 0;
  (this->AsyncState).AsyncCurrentWriteIndex = 0;
  (this->AsyncState).bStarted = false;
  (this->AsyncState).InitialNumIterations = 0;
  (this->AsyncState).CurrentChunkToCollapse = 0;
  this->bInputDataModified = false;
  *(undefined4 *)&(this->AsyncState).ChunkToNumElementsWrittenMap.field_0x28 = 0;
  *(undefined4 *)&(this->AsyncState).ChunkToNumElementsWrittenMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->AsyncState).ChunkToNumElementsWrittenMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AsyncState).ChunkToNumElementsWrittenMap.field_0x34 = 0;
  *(undefined8 *)&(this->AsyncState).ChunkToNumElementsWrittenMap.field_0x40 = 0;
  *(undefined4 *)&(this->AsyncState).ChunkToNumElementsWrittenMap.field_0x48 = 0;
  (this->AsyncState).bIsRunningOnMainThread = true;
  (this->AsyncState).bIsRunningAsyncCall = false;
  (this->AsyncState).bIsCallingBlueprint = false;
  (this->AsyncState).bIsRunningOutOfTick = false;
  (this->AsyncState).bIsOutOfTickBudgetSet = false;
  (this->DependenciesCrc).Value = 0;
  (this->DependenciesCrc).bValid = false;
  *(undefined8 *)&(this->DynamicDependencies).Elements = 0;
  *(undefined8 *)&(this->DynamicDependencies).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicDependencies).Elements.field_0x20 = 0;
  this->Node = (UPCGNode *)0x0;
  this->TaskId = 0xffffffffffffffff;
  this->CompiledTaskId = 0xffffffffffffffff;
  this->bIsPaused = false;
  *(undefined4 *)&(this->DynamicDependencies).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DynamicDependencies).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicDependencies).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicDependencies).Elements.field_0x34 = 0;
  (this->DynamicDependencies).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DynamicDependencies).HashSize = 0;
  this->CurrentPhase = NotExecuted;
  (this->CachedInputToOutputInternalResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->CachedInputToOutputInternalResults).ArrayNum = 0;
  (this->CachedInputToOutputInternalResults).ArrayMax = 0;
  this->Stack = (FPCGStack *)0x0;
  (this->SettingsWithOverride).field0_0x0.DebugPtr = (UPCGSettings *)0x0;
  (this->OverriddenParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverriddenParams).ArrayNum = 0;
  (this->OverriddenParams).ArrayMax = 0;
  this->bOverrideSettingsOnMainThread = false;
  *(undefined8 *)&(this->AsyncObjects).Elements = 0;
  *(undefined8 *)&(this->AsyncObjects).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AsyncObjects).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AsyncObjects).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AsyncObjects).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AsyncObjects).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AsyncObjects).Elements.field_0x34 = 0;
  (this->AsyncObjects).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AsyncObjects).HashSize = 0;
  (this->Handle).Object = (FPCGContextHandle *)0x0;
  (this->Handle).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->GraphExecutor).Object = (FPCGGraphExecutor *)0x0;
  (this->GraphExecutor).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->StackHandle).StackContext.Object = (FPCGStackContext *)0x0;
  (this->StackHandle).StackContext.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->StackHandle).StackIndex = -1;
  return this;
}

// operator= @ 14973efa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall FPCGContext::operator=(FPCGContext *this,FPCGContext *param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  int *piVar2;
  atomic<int> *paVar3;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this_01;
  TArray<TTuple<FPCGDataCollection,FPCGDataCollection>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FPCGSettingsOverridableParam_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  atomic<int> aVar6;
  int iVar7;
  TTuple<FPCGDataCollection,FPCGDataCollection> *pTVar8;
  UPCGSettings *pUVar9;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar10;
  FPCGContextHandle *pFVar11;
  FPCGGraphExecutor *pFVar12;
  FPCGStackContext *pFVar13;
  IPCGGraphExecutionSource *pIVar14;
  TReferenceControllerBase<1> *pTVar15;
  
  FPCGDataCollection::operator=(&this->InputData,&param_1->InputData);
  FPCGDataCollection::operator=(&this->OutputData,&param_1->OutputData);
  pIVar14 = (param_1->ExecutionSource).InterfaceInstance;
  (this->ExecutionSource).ObjectInstance.WeakPtr = (param_1->ExecutionSource).ObjectInstance.WeakPtr
  ;
  (this->ExecutionSource).InterfaceInstance = pIVar14;
  (this->SourceComponent).WeakPtr = (param_1->SourceComponent).WeakPtr;
  this->bInputDataModified = param_1->bInputDataModified;
  FPCGAsyncState::operator=(&this->AsyncState,&param_1->AsyncState);
  this->DependenciesCrc = param_1->DependenciesCrc;
  this_01 = &this->DynamicDependencies;
  this->Node = param_1->Node;
  this->TaskId = param_1->TaskId;
  this->CompiledTaskId = param_1->CompiledTaskId;
  this->bIsPaused = param_1->bIsPaused;
  if (this_01 != &param_1->DynamicDependencies) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&(this->DynamicDependencies).Hash,&(this->DynamicDependencies).HashSize,
               &(param_1->DynamicDependencies).Hash,(param_1->DynamicDependencies).HashSize);
    iVar7 = *(int *)&(param_1->DynamicDependencies).Elements.field_0x8;
    TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this_01->Elements,iVar7);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,(ForAnyElementType *)this_01,
               (int *)&(this->DynamicDependencies).Elements.field_0x8,
               (int *)&(this->DynamicDependencies).Elements.field_0xc);
    puVar1 = &(param_1->DynamicDependencies).Elements.field_0x10;
    this_00 = &(this->DynamicDependencies).Elements.field_0x10;
    *(undefined4 *)&(this->DynamicDependencies).Elements.field_0x30 =
         *(undefined4 *)&(param_1->DynamicDependencies).Elements.field_0x30;
    *(undefined4 *)&(this->DynamicDependencies).Elements.field_0x34 =
         *(undefined4 *)&(param_1->DynamicDependencies).Elements.field_0x34;
    if (this_00 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar7 != 0) {
      memcpy(*(void **)&this_01->Elements,*(void **)&(param_1->DynamicDependencies).Elements,
             (longlong)iVar7 << 4);
    }
  }
  pTVar4 = &this->CachedInputToOutputInternalResults;
  this->CurrentPhase = param_1->CurrentPhase;
  if (pTVar4 != &param_1->CachedInputToOutputInternalResults) {
    DestructItems<TTuple<FPCGDataCollection,FPCGDataCollection>,int>
              ((TTuple<FPCGDataCollection,FPCGDataCollection> *)(pTVar4->AllocatorInstance).Data,
               (this->CachedInputToOutputInternalResults).ArrayNum);
    iVar7 = (param_1->CachedInputToOutputInternalResults).ArrayNum;
    piVar2 = &(this->CachedInputToOutputInternalResults).ArrayMax;
    pTVar8 = (TTuple<FPCGDataCollection,FPCGDataCollection> *)
             (param_1->CachedInputToOutputInternalResults).AllocatorInstance.Data;
    (this->CachedInputToOutputInternalResults).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,iVar7,*piVar2,&pTVar4->AllocatorInstance,iVar7,piVar2);
      ConstructItems<TTuple<FPCGDataCollection,FPCGDataCollection>,TTuple<FPCGDataCollection,FPCGDataCollection>,int>
                ((pTVar4->AllocatorInstance).Data,pTVar8,iVar7);
    }
  }
  this->Stack = param_1->Stack;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 = (param_1->SettingsWithOverride).field0_0x0.DebugPtr, pUVar9 != (UPCGSettings *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  pTVar5 = &this->OverriddenParams;
  (this->SettingsWithOverride).field0_0x0 = (param_1->SettingsWithOverride).field0_0x0;
  if (pTVar5 != &param_1->OverriddenParams) {
    iVar7 = (param_1->OverriddenParams).ArrayNum;
    piVar2 = &(this->OverriddenParams).ArrayMax;
    _Src = (param_1->OverriddenParams).AllocatorInstance.Data;
    (this->OverriddenParams).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar7,*piVar2,&pTVar5->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,_Src,(longlong)iVar7 << 3);
      }
    }
  }
  this->bOverrideSettingsOnMainThread = param_1->bOverrideSettingsOnMainThread;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::operator=
            (&this->AsyncObjects,&param_1->AsyncObjects);
  pTVar10 = (param_1->Handle).SharedReferenceCount.ReferenceController;
  pFVar11 = (param_1->Handle).Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar15 = (this->Handle).SharedReferenceCount.ReferenceController;
  (this->Handle).Object = pFVar11;
  (this->Handle).SharedReferenceCount.ReferenceController = pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  pTVar10 = (param_1->GraphExecutor).WeakReferenceCount.ReferenceController;
  pFVar12 = (param_1->GraphExecutor).Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar15 = (this->GraphExecutor).WeakReferenceCount.ReferenceController;
  (this->GraphExecutor).Object = pFVar12;
  (this->GraphExecutor).WeakReferenceCount.ReferenceController = pTVar10;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &pTVar15->WeakReferenceCount;
    aVar6 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar6 == (atomic<int>)0x1) {
      (**(code **)(pTVar15->_padding_ + 8))(pTVar15,1);
    }
  }
  pTVar10 = (param_1->StackHandle).StackContext.SharedReferenceCount.ReferenceController;
  pFVar13 = (param_1->StackHandle).StackContext.Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar15 = (this->StackHandle).StackContext.SharedReferenceCount.ReferenceController;
  (this->StackHandle).StackContext.Object = pFVar13;
  (this->StackHandle).StackContext.SharedReferenceCount.ReferenceController = pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  (this->StackHandle).StackIndex = (param_1->StackHandle).StackIndex;
  return this;
}

// AddExtraStructReferencedObjects @ 149745dc0

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
FPCGContext::AddExtraStructReferencedObjects(FPCGContext *this,FReferenceCollector *param_1)

{
  return;
}

// GetExternalContainerForOverridableParam @ 149757bb0

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
FPCGContext::GetExternalContainerForOverridableParam
          (FPCGContext *this,FPCGSettingsOverridableParam *param_1)

{
  return (UObject *)0x0;
}

// GetOrCreateHandle @ 149759f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TWeakPtr<FPCGContextHandle,1> * __thiscall
FPCGContext::GetOrCreateHandle
          (FPCGContext *this,TWeakPtr<FPCGContextHandle,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TWeakPtr<FPCGContextHandle,1> *pTVar7;
  FPCGContextHandle *pFVar8;
  FPCGContextHandle *local_28;
  FSharedReferencer<1> local_20;
  
  if ((this->Handle).Object != (FPCGContextHandle *)0x0) goto LAB_14975a116;
  pTVar6 = ::operator_new(0x28);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pFVar8 = (FPCGContextHandle *)&DAT_00000010;
LAB_14975a04c:
    if (((pFVar8->_padding_ == 0) || (pFVar8->_padding_ == 0)) ||
       (*(int *)(pFVar8->_padding_ + 8) < 1)) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar8->_padding_ = (longlong)pFVar8;
      if (pTVar6 != (TReferenceControllerBase<1> *)pFVar8->_padding_) {
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = (longlong *)pFVar8->_padding_;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        pFVar8->_padding_ = (longlong)pTVar6;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    }
  }
  else {
    pFVar8 = (FPCGContextHandle *)(pTVar6 + 1);
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFPCGContextHandle___00_SharedPointerInternals__6B_;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = (longlong)this;
    if (pFVar8 != (FPCGContextHandle *)0x0) goto LAB_14975a04c;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TWeakPtr<FPCGContextHandle,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pFVar8;
  local_20.ReferenceController = pTVar6;
  if (&this->Handle != (TSharedPtr<FPCGContextHandle,1> *)&local_28) {
    (this->Handle).Object = pFVar8;
    local_28 = (FPCGContextHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Handle).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_14975a116:
  __return_storage_ptr__->Object = (this->Handle).Object;
  pTVar6 = (this->Handle).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetUnsafeExternalContainerForOverridableParam @ 149768400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FPCGContext::GetUnsafeExternalContainerForOverridableParam
          (FPCGContext *this,FPCGSettingsOverridableParam *param_1)

{
  return (void *)0x0;
}

// IsComputeContext @ 14976b8a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGContext::IsComputeContext(FPCGContext *this)

{
  return false;
}

// TimeSliceIsEnabled @ 149778960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGContext::TimeSliceIsEnabled(FPCGContext *this)

{
  return false;
}

// NewObject_AnyThread<UPCGDifferenceData> @ 149888ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGDifferenceData * __cdecl
FPCGContext::NewObject_AnyThread<UPCGDifferenceData>(FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGDifferenceData *pUVar3;
  UObject *pUVar4;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGDifferenceData *local_res18;
  
  if (param_1 != (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar4 = GetTransientPackageAsObject();
      pUVar3 = NewObject<UPCGDifferenceData>(pUVar4);
      return pUVar3;
    }
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGDifferenceData *)(*pcVar1)();
        return pUVar3;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar4 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UPCGDifferenceData>(pUVar4);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar3 == (UPCGDifferenceData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGDifferenceData *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_res18 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UPCGDifferenceData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
    return pUVar3;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGDifferenceData *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UPCGDifferenceData>(pUVar4);
  return pUVar3;
}

// NewObject_AnyThread<UPCGIntersectionData> @ 149889010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGIntersectionData * __cdecl
FPCGContext::NewObject_AnyThread<UPCGIntersectionData>(FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGIntersectionData *pUVar3;
  UObject *pUVar4;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGIntersectionData *local_res18;
  
  if (param_1 != (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar4 = GetTransientPackageAsObject();
      pUVar3 = NewObject<UPCGIntersectionData>(pUVar4);
      return pUVar3;
    }
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGIntersectionData *)(*pcVar1)();
        return pUVar3;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar4 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UPCGIntersectionData>(pUVar4);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar3 == (UPCGIntersectionData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGIntersectionData *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_res18 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UPCGIntersectionData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
    return pUVar3;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGIntersectionData *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UPCGIntersectionData>(pUVar4);
  return pUVar3;
}

// NewObject_AnyThread<UPCGMetadata> @ 149889160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGMetadata * __cdecl FPCGContext::NewObject_AnyThread<UPCGMetadata>(FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGMetadata *pUVar3;
  UObject *pUVar4;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGMetadata *local_res18;
  
  if (param_1 != (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar4 = GetTransientPackageAsObject();
      pUVar3 = NewObject<UPCGMetadata>(pUVar4);
      return pUVar3;
    }
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGMetadata *)(*pcVar1)();
        return pUVar3;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar4 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UPCGMetadata>(pUVar4);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar3 == (UPCGMetadata *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGMetadata *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_res18 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGMetadata *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
    return pUVar3;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGMetadata *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UPCGMetadata>(pUVar4);
  return pUVar3;
}

// NewObject_AnyThread<UPCGPointArrayData> @ 1498892b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointArrayData * __cdecl
FPCGContext::NewObject_AnyThread<UPCGPointArrayData>(FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGPointArrayData *pUVar3;
  UObject *pUVar4;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGPointArrayData *local_res18;
  
  if (param_1 != (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar4 = GetTransientPackageAsObject();
      pUVar3 = NewObject<UPCGPointArrayData>(pUVar4);
      return pUVar3;
    }
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGPointArrayData *)(*pcVar1)();
        return pUVar3;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar4 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UPCGPointArrayData>(pUVar4);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar3 == (UPCGPointArrayData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGPointArrayData *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_res18 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UPCGPointArrayData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
    return pUVar3;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGPointArrayData *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UPCGPointArrayData>(pUVar4);
  return pUVar3;
}

// NewObject_AnyThread<UPCGProjectionData> @ 149889400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGProjectionData * __cdecl
FPCGContext::NewObject_AnyThread<UPCGProjectionData>(FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGProjectionData *pUVar3;
  UObject *pUVar4;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGProjectionData *local_res18;
  
  if (param_1 != (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar4 = GetTransientPackageAsObject();
      pUVar3 = NewObject<UPCGProjectionData>(pUVar4);
      return pUVar3;
    }
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGProjectionData *)(*pcVar1)();
        return pUVar3;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar4 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UPCGProjectionData>(pUVar4);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar3 == (UPCGProjectionData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGProjectionData *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_res18 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UPCGProjectionData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
    return pUVar3;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGProjectionData *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UPCGProjectionData>(pUVar4);
  return pUVar3;
}

// NewObject_AnyThread<UPCGSplineData> @ 149889550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSplineData * __cdecl FPCGContext::NewObject_AnyThread<UPCGSplineData>(FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGSplineData *pUVar3;
  UObject *pUVar4;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGSplineData *local_res18;
  
  if (param_1 != (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar4 = GetTransientPackageAsObject();
      pUVar3 = NewObject<UPCGSplineData>(pUVar4);
      return pUVar3;
    }
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGSplineData *)(*pcVar1)();
        return pUVar3;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar4 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UPCGSplineData>(pUVar4);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar3 == (UPCGSplineData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGSplineData *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_res18 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGSplineData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
    return pUVar3;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGSplineData *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UPCGSplineData>(pUVar4);
  return pUVar3;
}

// NewObject_AnyThread<UPCGSplineProjectionData> @ 1498896a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSplineProjectionData * __cdecl
FPCGContext::NewObject_AnyThread<UPCGSplineProjectionData>(FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGSplineProjectionData *pUVar3;
  UObject *pUVar4;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGSplineProjectionData *local_res18;
  
  if (param_1 != (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar4 = GetTransientPackageAsObject();
      pUVar3 = NewObject<UPCGSplineProjectionData>(pUVar4);
      return pUVar3;
    }
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGSplineProjectionData *)(*pcVar1)();
        return pUVar3;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar4 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UPCGSplineProjectionData>(pUVar4);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar3 == (UPCGSplineProjectionData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGSplineProjectionData *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_res18 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UPCGSplineProjectionData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
    return pUVar3;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGSplineProjectionData *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UPCGSplineProjectionData>(pUVar4);
  return pUVar3;
}

// NewObject_AnyThread<UPCGUnionData> @ 1498897f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGUnionData * __cdecl FPCGContext::NewObject_AnyThread<UPCGUnionData>(FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGUnionData *pUVar3;
  UObject *pUVar4;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGUnionData *local_res18;
  
  if (param_1 != (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar4 = GetTransientPackageAsObject();
      pUVar3 = NewObject<UPCGUnionData>(pUVar4);
      return pUVar3;
    }
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGUnionData *)(*pcVar1)();
        return pUVar3;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar4 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UPCGUnionData>(pUVar4);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar3 == (UPCGUnionData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGUnionData *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_res18 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGUnionData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
    return pUVar3;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGUnionData *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UPCGUnionData>(pUVar4);
  return pUVar3;
}

// NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&> @ 149889940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBasePointData * __thiscall
FPCGContext::NewObject_AnyThread_Impl<UPCGBasePointData,UPackage_*,TSubclassOf<UPCGBasePointData>_&>
          (FPCGContext *this,UPackage **param_1,TSubclassOf<UPCGBasePointData> *param_2)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  UPCGBasePointData *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  FGCScopeGuard local_res20 [8];
  TObjectPtr<UObject> local_38;
  FName local_30;
  FName local_28;
  UPCGBasePointData *local_20;
  
  bVar4 = IsInGameThread();
  if (bVar4) {
    pUVar2 = (param_2->Class).field0_0x0.DebugPtr;
    pUVar7 = (UClass *)0x0;
    local_28.ComparisonIndex.Value = 0;
    local_28.Number = 0;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar6 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar6 != (UClass *)0x0)) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar7 = (param_2->Class).field0_0x0.DebugPtr;
      }
    }
    pUVar5 = NewObject<UPCGBasePointData>
                       ((UObject *)*param_1,pUVar7,local_28,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  }
  else {
    if (((this->AsyncState).bIsRunningOnMainThread != false) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749348>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UPCGBasePointData *)(*pcVar3)();
      return pUVar5;
    }
    FGCScopeGuard::FGCScopeGuard(local_res20);
    pUVar2 = (param_2->Class).field0_0x0.DebugPtr;
    pUVar7 = (UClass *)0x0;
    local_30.ComparisonIndex.Value = 0;
    local_30.Number = 0;
    if ((pUVar2 != (UClass *)0x0) &&
       (pUVar6 = Z_Construct_UClass_UPCGBasePointData_NoRegister(), pUVar6 != (UClass *)0x0)) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar7 = (param_2->Class).field0_0x0.DebugPtr;
      }
    }
    pUVar5 = NewObject<UPCGBasePointData>
                       ((UObject *)*param_1,pUVar7,local_30,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    FGCScopeGuard::~FGCScopeGuard(local_res20);
    if ((pUVar5 == (UPCGBasePointData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x12a,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UPCGBasePointData *)(*pcVar3)();
      return pUVar5;
    }
    local_20 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UPCGBasePointData *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&this->AsyncObjects,&local_38,(bool *)&local_20);
  }
  return pUVar5;
}

// GetInputSettings<UPCGBlueprintSettings> @ 1499a7460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBlueprintSettings * __thiscall
FPCGContext::GetInputSettings<UPCGBlueprintSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGBlueprintSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGBlueprintSettings_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGBlueprintSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGBlueprintSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBlueprintSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGBlueprintSettings *)local_res8.Handle == (UPCGBlueprintSettings *)0x0) {
          return (UPCGBlueprintSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGBlueprintSettings *)local_res8.Handle != (UPCGBlueprintSettings *)0x0) {
        pUVar3 = Z_Construct_UClass_UPCGBlueprintSettings_NoRegister();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGBlueprintSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGBlueprintSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGBlueprintSettings *)0x0) {
      pUVar3 = Z_Construct_UClass_UPCGBlueprintSettings_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGBlueprintSettings *)0x0;
}

// GetInputSettings<UPCGLoadDataAssetSettings> @ 1499a7c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGLoadDataAssetSettings * __thiscall
FPCGContext::GetInputSettings<UPCGLoadDataAssetSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGLoadDataAssetSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGLoadDataAssetSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGLoadDataAssetSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGLoadDataAssetSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGLoadDataAssetSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGLoadDataAssetSettings *)local_res8.Handle == (UPCGLoadDataAssetSettings *)0x0) {
          return (UPCGLoadDataAssetSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGLoadDataAssetSettings *)local_res8.Handle != (UPCGLoadDataAssetSettings *)0x0) {
        pUVar3 = UPCGLoadDataAssetSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGLoadDataAssetSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGLoadDataAssetSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGLoadDataAssetSettings *)0x0) {
      pUVar3 = UPCGLoadDataAssetSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGLoadDataAssetSettings *)0x0;
}

// GetInputSettings<UPCGLoadDataTableSettings> @ 1499a7e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGLoadDataTableSettings * __thiscall
FPCGContext::GetInputSettings<UPCGLoadDataTableSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGLoadDataTableSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGLoadDataTableSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGLoadDataTableSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGLoadDataTableSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGLoadDataTableSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGLoadDataTableSettings *)local_res8.Handle == (UPCGLoadDataTableSettings *)0x0) {
          return (UPCGLoadDataTableSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGLoadDataTableSettings *)local_res8.Handle != (UPCGLoadDataTableSettings *)0x0) {
        pUVar3 = UPCGLoadDataTableSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGLoadDataTableSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGLoadDataTableSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGLoadDataTableSettings *)0x0) {
      pUVar3 = UPCGLoadDataTableSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGLoadDataTableSettings *)0x0;
}

// GetInputSettings<UPCGMetadataSettingsBase> @ 1499a8080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGMetadataSettingsBase * __thiscall
FPCGContext::GetInputSettings<UPCGMetadataSettingsBase>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGMetadataSettingsBase *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGMetadataSettingsBase::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGMetadataSettingsBase *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGMetadataSettingsBase *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMetadataSettingsBase>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGMetadataSettingsBase *)local_res8.Handle == (UPCGMetadataSettingsBase *)0x0) {
          return (UPCGMetadataSettingsBase *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGMetadataSettingsBase *)local_res8.Handle != (UPCGMetadataSettingsBase *)0x0) {
        pUVar3 = UPCGMetadataSettingsBase::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGMetadataSettingsBase *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGMetadataSettingsBase *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGMetadataSettingsBase *)0x0) {
      pUVar3 = UPCGMetadataSettingsBase::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGMetadataSettingsBase *)0x0;
}

// NewObject_AnyThread<UPCGCollisionShapeData> @ 1499b5d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGCollisionShapeData * __cdecl
FPCGContext::NewObject_AnyThread<UPCGCollisionShapeData>(FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGCollisionShapeData *pUVar3;
  UObject *pUVar4;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGCollisionShapeData *local_res18;
  
  if (param_1 != (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar4 = GetTransientPackageAsObject();
      pUVar3 = NewObject<UPCGCollisionShapeData>(pUVar4);
      return pUVar3;
    }
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGCollisionShapeData *)(*pcVar1)();
        return pUVar3;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar4 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UPCGCollisionShapeData>(pUVar4);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar3 == (UPCGCollisionShapeData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGCollisionShapeData *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_res18 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UPCGCollisionShapeData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
    return pUVar3;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGCollisionShapeData *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UPCGCollisionShapeData>(pUVar4);
  return pUVar3;
}

// NewObject_AnyThread<UPCGParamData> @ 1499b5ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGParamData * __cdecl FPCGContext::NewObject_AnyThread<UPCGParamData>(FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGParamData *pUVar3;
  UObject *pUVar4;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGParamData *local_res18;
  
  if (param_1 != (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar4 = GetTransientPackageAsObject();
      pUVar3 = NewObject<UPCGParamData>(pUVar4);
      return pUVar3;
    }
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGParamData *)(*pcVar1)();
        return pUVar3;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar4 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UPCGParamData>(pUVar4);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar3 == (UPCGParamData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGParamData *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_res18 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGParamData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
    return pUVar3;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGParamData *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UPCGParamData>(pUVar4);
  return pUVar3;
}

// NewObject_AnyThread<UPCGVolumeData> @ 1499b5ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGVolumeData * __cdecl FPCGContext::NewObject_AnyThread<UPCGVolumeData>(FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGVolumeData *pUVar3;
  UObject *pUVar4;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGVolumeData *local_res18;
  
  if (param_1 != (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar4 = GetTransientPackageAsObject();
      pUVar3 = NewObject<UPCGVolumeData>(pUVar4);
      return pUVar3;
    }
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGVolumeData *)(*pcVar1)();
        return pUVar3;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar4 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UPCGVolumeData>(pUVar4);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar3 == (UPCGVolumeData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGVolumeData *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_res18 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGVolumeData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
    return pUVar3;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGVolumeData *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UPCGVolumeData>(pUVar4);
  return pUVar3;
}

// GetInputSettings<UPCGApplyHierarchySettings> @ 149a9d300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGApplyHierarchySettings * __thiscall
FPCGContext::GetInputSettings<UPCGApplyHierarchySettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGApplyHierarchySettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGApplyHierarchySettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGApplyHierarchySettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGApplyHierarchySettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGApplyHierarchySettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGApplyHierarchySettings *)local_res8.Handle == (UPCGApplyHierarchySettings *)0x0) {
          return (UPCGApplyHierarchySettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGApplyHierarchySettings *)local_res8.Handle != (UPCGApplyHierarchySettings *)0x0) {
        pUVar3 = UPCGApplyHierarchySettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGApplyHierarchySettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGApplyHierarchySettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGApplyHierarchySettings *)0x0) {
      pUVar3 = UPCGApplyHierarchySettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGApplyHierarchySettings *)0x0;
}

// GetInputSettings<UPCGApplyOnActorSettings> @ 149a9d500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGApplyOnActorSettings * __thiscall
FPCGContext::GetInputSettings<UPCGApplyOnActorSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGApplyOnActorSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGApplyOnActorSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGApplyOnActorSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGApplyOnActorSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGApplyOnActorSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGApplyOnActorSettings *)local_res8.Handle == (UPCGApplyOnActorSettings *)0x0) {
          return (UPCGApplyOnActorSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGApplyOnActorSettings *)local_res8.Handle != (UPCGApplyOnActorSettings *)0x0) {
        pUVar3 = UPCGApplyOnActorSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGApplyOnActorSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGApplyOnActorSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGApplyOnActorSettings *)0x0) {
      pUVar3 = UPCGApplyOnActorSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGApplyOnActorSettings *)0x0;
}

// GetInputSettings<UPCGAttractSettings> @ 149a9d700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGAttractSettings * __thiscall
FPCGContext::GetInputSettings<UPCGAttractSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGAttractSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGAttractSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGAttractSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGAttractSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttractSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGAttractSettings *)local_res8.Handle == (UPCGAttractSettings *)0x0) {
          return (UPCGAttractSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGAttractSettings *)local_res8.Handle != (UPCGAttractSettings *)0x0) {
        pUVar3 = UPCGAttractSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGAttractSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGAttractSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGAttractSettings *)0x0) {
      pUVar3 = UPCGAttractSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGAttractSettings *)0x0;
}

// GetInputSettings<UPCGBlurSettings> @ 149a9e000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBlurSettings * __thiscall FPCGContext::GetInputSettings<UPCGBlurSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGBlurSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGBlurSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGBlurSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGBlurSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBlurSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGBlurSettings *)local_res8.Handle == (UPCGBlurSettings *)0x0) {
          return (UPCGBlurSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGBlurSettings *)local_res8.Handle != (UPCGBlurSettings *)0x0) {
        pUVar3 = UPCGBlurSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGBlurSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGBlurSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGBlurSettings *)0x0) {
      pUVar3 = UPCGBlurSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGBlurSettings *)0x0;
}

// GetInputSettings<UPCGBoundsFromMeshSettings> @ 149a9e200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBoundsFromMeshSettings * __thiscall
FPCGContext::GetInputSettings<UPCGBoundsFromMeshSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGBoundsFromMeshSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGBoundsFromMeshSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGBoundsFromMeshSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGBoundsFromMeshSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBoundsFromMeshSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGBoundsFromMeshSettings *)local_res8.Handle == (UPCGBoundsFromMeshSettings *)0x0) {
          return (UPCGBoundsFromMeshSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGBoundsFromMeshSettings *)local_res8.Handle != (UPCGBoundsFromMeshSettings *)0x0) {
        pUVar3 = UPCGBoundsFromMeshSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGBoundsFromMeshSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGBoundsFromMeshSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGBoundsFromMeshSettings *)0x0) {
      pUVar3 = UPCGBoundsFromMeshSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGBoundsFromMeshSettings *)0x0;
}

// GetInputSettings<UPCGClusterSettings> @ 149a9e5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGClusterSettings * __thiscall
FPCGContext::GetInputSettings<UPCGClusterSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGClusterSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGClusterSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGClusterSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGClusterSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGClusterSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGClusterSettings *)local_res8.Handle == (UPCGClusterSettings *)0x0) {
          return (UPCGClusterSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGClusterSettings *)local_res8.Handle != (UPCGClusterSettings *)0x0) {
        pUVar3 = UPCGClusterSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGClusterSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGClusterSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGClusterSettings *)0x0) {
      pUVar3 = UPCGClusterSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGClusterSettings *)0x0;
}

// GetInputSettings<UPCGCollapsePointsSettings> @ 149a9e7c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGCollapsePointsSettings * __thiscall
FPCGContext::GetInputSettings<UPCGCollapsePointsSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGCollapsePointsSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGCollapsePointsSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGCollapsePointsSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGCollapsePointsSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCollapsePointsSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGCollapsePointsSettings *)local_res8.Handle == (UPCGCollapsePointsSettings *)0x0) {
          return (UPCGCollapsePointsSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGCollapsePointsSettings *)local_res8.Handle != (UPCGCollapsePointsSettings *)0x0) {
        pUVar3 = UPCGCollapsePointsSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGCollapsePointsSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGCollapsePointsSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGCollapsePointsSettings *)0x0) {
      pUVar3 = UPCGCollapsePointsSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGCollapsePointsSettings *)0x0;
}

// GetInputSettings<UPCGCreateCollisionDataSettings> @ 149b4b940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGCreateCollisionDataSettings * __thiscall
FPCGContext::GetInputSettings<UPCGCreateCollisionDataSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGCreateCollisionDataSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGCreateCollisionDataSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGCreateCollisionDataSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGCreateCollisionDataSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreateCollisionDataSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGCreateCollisionDataSettings *)local_res8.Handle ==
            (UPCGCreateCollisionDataSettings *)0x0) {
          return (UPCGCreateCollisionDataSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGCreateCollisionDataSettings *)local_res8.Handle !=
          (UPCGCreateCollisionDataSettings *)0x0) {
        pUVar3 = UPCGCreateCollisionDataSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGCreateCollisionDataSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGCreateCollisionDataSettings *)
             FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGCreateCollisionDataSettings *)0x0) {
      pUVar3 = UPCGCreateCollisionDataSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGCreateCollisionDataSettings *)0x0;
}

// GetInputSettings<UPCGCreateSplineSettings> @ 149b4bde0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGCreateSplineSettings * __thiscall
FPCGContext::GetInputSettings<UPCGCreateSplineSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGCreateSplineSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGCreateSplineSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGCreateSplineSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGCreateSplineSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreateSplineSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGCreateSplineSettings *)local_res8.Handle == (UPCGCreateSplineSettings *)0x0) {
          return (UPCGCreateSplineSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGCreateSplineSettings *)local_res8.Handle != (UPCGCreateSplineSettings *)0x0) {
        pUVar3 = UPCGCreateSplineSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGCreateSplineSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGCreateSplineSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGCreateSplineSettings *)0x0) {
      pUVar3 = UPCGCreateSplineSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGCreateSplineSettings *)0x0;
}

// GetInputSettings<UPCGDataFromActorSettings> @ 149b4c280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGDataFromActorSettings * __thiscall
FPCGContext::GetInputSettings<UPCGDataFromActorSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGDataFromActorSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGDataFromActorSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGDataFromActorSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGDataFromActorSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDataFromActorSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGDataFromActorSettings *)local_res8.Handle == (UPCGDataFromActorSettings *)0x0) {
          return (UPCGDataFromActorSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGDataFromActorSettings *)local_res8.Handle != (UPCGDataFromActorSettings *)0x0) {
        pUVar3 = UPCGDataFromActorSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGDataFromActorSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGDataFromActorSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGDataFromActorSettings *)0x0) {
      pUVar3 = UPCGDataFromActorSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGDataFromActorSettings *)0x0;
}

// GetInputSettings<UPCGDataTableRowToParamDataSettings> @ 149b4c640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGDataTableRowToParamDataSettings * __thiscall
FPCGContext::GetInputSettings<UPCGDataTableRowToParamDataSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGDataTableRowToParamDataSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGDataTableRowToParamDataSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGDataTableRowToParamDataSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGDataTableRowToParamDataSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDataTableRowToParamDataSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGDataTableRowToParamDataSettings *)local_res8.Handle ==
            (UPCGDataTableRowToParamDataSettings *)0x0) {
          return (UPCGDataTableRowToParamDataSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGDataTableRowToParamDataSettings *)local_res8.Handle !=
          (UPCGDataTableRowToParamDataSettings *)0x0) {
        pUVar3 = UPCGDataTableRowToParamDataSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGDataTableRowToParamDataSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGDataTableRowToParamDataSettings *)
             FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGDataTableRowToParamDataSettings *)0x0) {
      pUVar3 = UPCGDataTableRowToParamDataSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGDataTableRowToParamDataSettings *)0x0;
}

// GetInputSettings<UPCGGetActorPropertySettings> @ 149b4d720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGGetActorPropertySettings * __thiscall
FPCGContext::GetInputSettings<UPCGGetActorPropertySettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGGetActorPropertySettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGGetActorPropertySettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGGetActorPropertySettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGGetActorPropertySettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetActorPropertySettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGGetActorPropertySettings *)local_res8.Handle == (UPCGGetActorPropertySettings *)0x0
           ) {
          return (UPCGGetActorPropertySettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGGetActorPropertySettings *)local_res8.Handle != (UPCGGetActorPropertySettings *)0x0)
      {
        pUVar3 = UPCGGetActorPropertySettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGGetActorPropertySettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGGetActorPropertySettings *)
             FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGGetActorPropertySettings *)0x0) {
      pUVar3 = UPCGGetActorPropertySettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGGetActorPropertySettings *)0x0;
}

// NewObject_AnyThread<UPCGTextureData> @ 149b531c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGTextureData * __cdecl FPCGContext::NewObject_AnyThread<UPCGTextureData>(FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGTextureData *pUVar3;
  UObject *pUVar4;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGTextureData *local_res18;
  
  if (param_1 != (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar4 = GetTransientPackageAsObject();
      pUVar3 = NewObject<UPCGTextureData>(pUVar4);
      return pUVar3;
    }
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGTextureData *)(*pcVar1)();
        return pUVar3;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar4 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UPCGTextureData>(pUVar4);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar3 == (UPCGTextureData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGTextureData *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_res18 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGTextureData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
    return pUVar3;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGTextureData *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UPCGTextureData>(pUVar4);
  return pUVar3;
}

// GetInputSettings<UPCGGetPropertyFromObjectPathSettings> @ 149bc2d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGGetPropertyFromObjectPathSettings * __thiscall
FPCGContext::GetInputSettings<UPCGGetPropertyFromObjectPathSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGGetPropertyFromObjectPathSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGGetPropertyFromObjectPathSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGGetPropertyFromObjectPathSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGGetPropertyFromObjectPathSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetPropertyFromObjectPathSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGGetPropertyFromObjectPathSettings *)local_res8.Handle ==
            (UPCGGetPropertyFromObjectPathSettings *)0x0) {
          return (UPCGGetPropertyFromObjectPathSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGGetPropertyFromObjectPathSettings *)local_res8.Handle !=
          (UPCGGetPropertyFromObjectPathSettings *)0x0) {
        pUVar3 = UPCGGetPropertyFromObjectPathSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGGetPropertyFromObjectPathSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGGetPropertyFromObjectPathSettings *)
             FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGGetPropertyFromObjectPathSettings *)0x0) {
      pUVar3 = UPCGGetPropertyFromObjectPathSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGGetPropertyFromObjectPathSettings *)0x0;
}

// GetInputSettings<UPCGIndirectionSettings> @ 149bc33d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGIndirectionSettings * __thiscall
FPCGContext::GetInputSettings<UPCGIndirectionSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGIndirectionSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGIndirectionSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGIndirectionSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGIndirectionSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGIndirectionSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGIndirectionSettings *)local_res8.Handle == (UPCGIndirectionSettings *)0x0) {
          return (UPCGIndirectionSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGIndirectionSettings *)local_res8.Handle != (UPCGIndirectionSettings *)0x0) {
        pUVar3 = UPCGIndirectionSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGIndirectionSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGIndirectionSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGIndirectionSettings *)0x0) {
      pUVar3 = UPCGIndirectionSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGIndirectionSettings *)0x0;
}

// GetInputSettings<UPCGPathfindingSettings> @ 149bc3db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPathfindingSettings * __thiscall
FPCGContext::GetInputSettings<UPCGPathfindingSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGPathfindingSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGPathfindingSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGPathfindingSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGPathfindingSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPathfindingSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGPathfindingSettings *)local_res8.Handle == (UPCGPathfindingSettings *)0x0) {
          return (UPCGPathfindingSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGPathfindingSettings *)local_res8.Handle != (UPCGPathfindingSettings *)0x0) {
        pUVar3 = UPCGPathfindingSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGPathfindingSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGPathfindingSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGPathfindingSettings *)0x0) {
      pUVar3 = UPCGPathfindingSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGPathfindingSettings *)0x0;
}

// GetInputSettings<UPCGPointFromMeshSettings> @ 149bc4090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointFromMeshSettings * __thiscall
FPCGContext::GetInputSettings<UPCGPointFromMeshSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGPointFromMeshSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGPointFromMeshSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGPointFromMeshSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGPointFromMeshSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPointFromMeshSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGPointFromMeshSettings *)local_res8.Handle == (UPCGPointFromMeshSettings *)0x0) {
          return (UPCGPointFromMeshSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGPointFromMeshSettings *)local_res8.Handle != (UPCGPointFromMeshSettings *)0x0) {
        pUVar3 = UPCGPointFromMeshSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGPointFromMeshSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGPointFromMeshSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGPointFromMeshSettings *)0x0) {
      pUVar3 = UPCGPointFromMeshSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGPointFromMeshSettings *)0x0;
}

// GetInputSettings<UPCGSelfPruningSettings> @ 149bc4d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSelfPruningSettings * __thiscall
FPCGContext::GetInputSettings<UPCGSelfPruningSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGSelfPruningSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGSelfPruningSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGSelfPruningSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGSelfPruningSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSelfPruningSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSelfPruningSettings *)local_res8.Handle == (UPCGSelfPruningSettings *)0x0) {
          return (UPCGSelfPruningSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGSelfPruningSettings *)local_res8.Handle != (UPCGSelfPruningSettings *)0x0) {
        pUVar3 = UPCGSelfPruningSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGSelfPruningSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGSelfPruningSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGSelfPruningSettings *)0x0) {
      pUVar3 = UPCGSelfPruningSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGSelfPruningSettings *)0x0;
}

// GetInputSettings<UPCGSkinnedMeshSpawnerSettings> @ 149bc4f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSkinnedMeshSpawnerSettings * __thiscall
FPCGContext::GetInputSettings<UPCGSkinnedMeshSpawnerSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGSkinnedMeshSpawnerSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGSkinnedMeshSpawnerSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGSkinnedMeshSpawnerSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGSkinnedMeshSpawnerSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSkinnedMeshSpawnerSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSkinnedMeshSpawnerSettings *)local_res8.Handle ==
            (UPCGSkinnedMeshSpawnerSettings *)0x0) {
          return (UPCGSkinnedMeshSpawnerSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGSkinnedMeshSpawnerSettings *)local_res8.Handle !=
          (UPCGSkinnedMeshSpawnerSettings *)0x0) {
        pUVar3 = UPCGSkinnedMeshSpawnerSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGSkinnedMeshSpawnerSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGSkinnedMeshSpawnerSettings *)
             FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGSkinnedMeshSpawnerSettings *)0x0) {
      pUVar3 = UPCGSkinnedMeshSpawnerSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGSkinnedMeshSpawnerSettings *)0x0;
}

// GetInputSettings<UPCGSpawnActorSettings> @ 149c41b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpawnActorSettings * __thiscall
FPCGContext::GetInputSettings<UPCGSpawnActorSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGSpawnActorSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGSpawnActorSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGSpawnActorSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGSpawnActorSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSpawnActorSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSpawnActorSettings *)local_res8.Handle == (UPCGSpawnActorSettings *)0x0) {
          return (UPCGSpawnActorSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGSpawnActorSettings *)local_res8.Handle != (UPCGSpawnActorSettings *)0x0) {
        pUVar3 = UPCGSpawnActorSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGSpawnActorSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGSpawnActorSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGSpawnActorSettings *)0x0) {
      pUVar3 = UPCGSpawnActorSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGSpawnActorSettings *)0x0;
}

// GetInputSettings<UPCGSpawnSplineMeshSettings> @ 149c41d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpawnSplineMeshSettings * __thiscall
FPCGContext::GetInputSettings<UPCGSpawnSplineMeshSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGSpawnSplineMeshSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGSpawnSplineMeshSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGSpawnSplineMeshSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGSpawnSplineMeshSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSpawnSplineMeshSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSpawnSplineMeshSettings *)local_res8.Handle == (UPCGSpawnSplineMeshSettings *)0x0)
        {
          return (UPCGSpawnSplineMeshSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGSpawnSplineMeshSettings *)local_res8.Handle != (UPCGSpawnSplineMeshSettings *)0x0) {
        pUVar3 = UPCGSpawnSplineMeshSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGSpawnSplineMeshSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGSpawnSplineMeshSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4)
    ;
    if (pUVar5 != (UPCGSpawnSplineMeshSettings *)0x0) {
      pUVar3 = UPCGSpawnSplineMeshSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGSpawnSplineMeshSettings *)0x0;
}

// GetInputSettings<UPCGStaticMeshSpawnerSettings> @ 149c423e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGStaticMeshSpawnerSettings * __thiscall
FPCGContext::GetInputSettings<UPCGStaticMeshSpawnerSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGStaticMeshSpawnerSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGStaticMeshSpawnerSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGStaticMeshSpawnerSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGStaticMeshSpawnerSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGStaticMeshSpawnerSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGStaticMeshSpawnerSettings *)local_res8.Handle ==
            (UPCGStaticMeshSpawnerSettings *)0x0) {
          return (UPCGStaticMeshSpawnerSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGStaticMeshSpawnerSettings *)local_res8.Handle != (UPCGStaticMeshSpawnerSettings *)0x0
         ) {
        pUVar3 = UPCGStaticMeshSpawnerSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGStaticMeshSpawnerSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGStaticMeshSpawnerSettings *)
             FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGStaticMeshSpawnerSettings *)0x0) {
      pUVar3 = UPCGStaticMeshSpawnerSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGStaticMeshSpawnerSettings *)0x0;
}

// GetInputSettings<UPCGSurfaceSamplerSettings> @ 149c425e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSurfaceSamplerSettings * __thiscall
FPCGContext::GetInputSettings<UPCGSurfaceSamplerSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGSurfaceSamplerSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGSurfaceSamplerSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGSurfaceSamplerSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGSurfaceSamplerSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSurfaceSamplerSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSurfaceSamplerSettings *)local_res8.Handle == (UPCGSurfaceSamplerSettings *)0x0) {
          return (UPCGSurfaceSamplerSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGSurfaceSamplerSettings *)local_res8.Handle != (UPCGSurfaceSamplerSettings *)0x0) {
        pUVar3 = UPCGSurfaceSamplerSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGSurfaceSamplerSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGSurfaceSamplerSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGSurfaceSamplerSettings *)0x0) {
      pUVar3 = UPCGSurfaceSamplerSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGSurfaceSamplerSettings *)0x0;
}

// GetInputSettings<UPCGTextureSamplerSettings> @ 149c427e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGTextureSamplerSettings * __thiscall
FPCGContext::GetInputSettings<UPCGTextureSamplerSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGTextureSamplerSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGTextureSamplerSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGTextureSamplerSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGTextureSamplerSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGTextureSamplerSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGTextureSamplerSettings *)local_res8.Handle == (UPCGTextureSamplerSettings *)0x0) {
          return (UPCGTextureSamplerSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGTextureSamplerSettings *)local_res8.Handle != (UPCGTextureSamplerSettings *)0x0) {
        pUVar3 = UPCGTextureSamplerSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGTextureSamplerSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGTextureSamplerSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGTextureSamplerSettings *)0x0) {
      pUVar3 = UPCGTextureSamplerSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGTextureSamplerSettings *)0x0;
}

// GetInputSettings<UPCGVolumeSamplerSettings> @ 149c42d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGVolumeSamplerSettings * __thiscall
FPCGContext::GetInputSettings<UPCGVolumeSamplerSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGVolumeSamplerSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGVolumeSamplerSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGVolumeSamplerSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGVolumeSamplerSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGVolumeSamplerSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGVolumeSamplerSettings *)local_res8.Handle == (UPCGVolumeSamplerSettings *)0x0) {
          return (UPCGVolumeSamplerSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGVolumeSamplerSettings *)local_res8.Handle != (UPCGVolumeSamplerSettings *)0x0) {
        pUVar3 = UPCGVolumeSamplerSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGVolumeSamplerSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGVolumeSamplerSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGVolumeSamplerSettings *)0x0) {
      pUVar3 = UPCGVolumeSamplerSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGVolumeSamplerSettings *)0x0;
}

// GetInputSettings<UPCGWorldRayHitSettings> @ 149c43040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGWorldRayHitSettings * __thiscall
FPCGContext::GetInputSettings<UPCGWorldRayHitSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGWorldRayHitSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGWorldRayHitSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGWorldRayHitSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGWorldRayHitSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGWorldRayHitSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGWorldRayHitSettings *)local_res8.Handle == (UPCGWorldRayHitSettings *)0x0) {
          return (UPCGWorldRayHitSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGWorldRayHitSettings *)local_res8.Handle != (UPCGWorldRayHitSettings *)0x0) {
        pUVar3 = UPCGWorldRayHitSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGWorldRayHitSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGWorldRayHitSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGWorldRayHitSettings *)0x0) {
      pUVar3 = UPCGWorldRayHitSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGWorldRayHitSettings *)0x0;
}

// GetInputSettings<UPCGWorldRaycastElementSettings> @ 149c43240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGWorldRaycastElementSettings * __thiscall
FPCGContext::GetInputSettings<UPCGWorldRaycastElementSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGWorldRaycastElementSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGWorldRaycastElementSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGWorldRaycastElementSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGWorldRaycastElementSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGWorldRaycastElementSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGWorldRaycastElementSettings *)local_res8.Handle ==
            (UPCGWorldRaycastElementSettings *)0x0) {
          return (UPCGWorldRaycastElementSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGWorldRaycastElementSettings *)local_res8.Handle !=
          (UPCGWorldRaycastElementSettings *)0x0) {
        pUVar3 = UPCGWorldRaycastElementSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGWorldRaycastElementSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGWorldRaycastElementSettings *)
             FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGWorldRaycastElementSettings *)0x0) {
      pUVar3 = UPCGWorldRaycastElementSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGWorldRaycastElementSettings *)0x0;
}

// GetOriginalSettings<UPCGSettings> @ 149c9ebe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSettings * __thiscall FPCGContext::GetOriginalSettings<UPCGSettings>(FPCGContext *this)

{
  UPCGNode *this_00;
  bool bVar1;
  UPCGSettings *pUVar2;
  FObjectPtr_u_0 *pFVar3;
  UClass *pUVar4;
  FObjectPtr_u_0 local_res8;
  
  this_00 = this->Node;
  if ((this_00 != (UPCGNode *)0x0) &&
     (pUVar2 = UPCGNode::GetSettings(this_00), pUVar2 != (UPCGSettings *)0x0)) {
    pUVar2 = UPCGNode::GetSettings(this_00);
    pUVar2 = FPCGDataCollection::GetSettings(&this->InputData,pUVar2);
    return pUVar2;
  }
  pFVar3 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSettings>_::__l2::<lambda_1>_>
                     (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
  if (pFVar3 != (FObjectPtr_u_0 *)0x0) {
    local_res8 = (FObjectPtr_u_0)pFVar3->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSettings *)local_res8.Handle == (UPCGSettings *)0x0) {
        return (UPCGSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8.Handle);
    }
    if ((UPCGSettings *)local_res8.Handle != (UPCGSettings *)0x0) {
      pUVar4 = Z_Construct_UClass_UPCGSettings_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar4);
      if (bVar1) {
        return (UPCGSettings *)local_res8.Handle;
      }
    }
  }
  return (UPCGSettings *)0x0;
}

// NewObject_AnyThread<UPCGSpatialData,UPackage_*,UClass_*> @ 149e28d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpatialData * __cdecl
FPCGContext::NewObject_AnyThread<UPCGSpatialData,UPackage_*,UClass_*>
          (FPCGContext *param_1,UPackage **param_2,UClass **param_3)

{
  code *pcVar1;
  bool bVar2;
  UPCGSpatialData *pUVar3;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res20;
  UPCGSpatialData *local_10;
  
  if (param_1 != (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar3 = NewObject<UPCGSpatialData>
                         ((UObject *)*param_2,*param_3,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    }
    else {
      if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749348>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x124,"!AsyncState.bIsRunningOnMainThread");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar3 = (UPCGSpatialData *)(*pcVar1)();
          return pUVar3;
        }
      }
      FGCScopeGuard::FGCScopeGuard(local_res8);
      pUVar3 = NewObject<UPCGSpatialData>
                         ((UObject *)*param_2,*param_3,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      FGCScopeGuard::~FGCScopeGuard(local_res8);
      if (pUVar3 == (UPCGSpatialData *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x12a,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pUVar3 = (UPCGSpatialData *)(*pcVar1)();
          return pUVar3;
        }
      }
      local_10 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGSpatialData *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res20,(bool *)&local_10);
    }
    return pUVar3;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGSpatialData *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = NewObject<UPCGSpatialData>
                     ((UObject *)*param_2,*param_3,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  return pUVar3;
}

// StaticStruct @ 149edcbc0

UScriptStruct * __cdecl FPCGContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGContext.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGContext,(UObject *)pUVar1,L"PCGContext");
  }
  return Z_Registration_Info_UScriptStruct_FPCGContext.OuterSingleton;
}

// operator()<int> @ 149ee12f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
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
`FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<int>(void *this,int param_1)

{
  IPCGAttributeAccessor *this_00;
  longlong lVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FString *pFVar9;
  IPCGGraphExecutionSource *pIVar10;
  IPCGGraphExecutionSource *pIVar11;
  undefined4 local_res8 [2];
  ITextData local_res18 [2];
  TArrayView<int,int> local_158;
  TArrayView<int_const_,int> local_148;
  IPCGAttributeAccessorKeys local_138;
  undefined8 local_128;
  FString local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FTextFormat local_c0;
  FString local_b0;
  FPCGAttributeAccessorKeysEntries local_a0;
  FPCGAttributeAccessorKeysEntries local_70;
  
  pIVar10 = (IPCGGraphExecutionSource *)0x0;
  local_res8[0] = 0;
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_70,0);
  local_res18[0]._0_4_ = 0;
  this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8);
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_a0,0);
  local_158.ArrayNum = 1;
  local_158.DataPtr = (int *)local_res18;
  bVar2 = IPCGAttributeAccessor::GetRange<int>
                    (this_00,&local_158,0,(IPCGAttributeAccessorKeys *)&local_a0,
                     AllowBroadcastAndConstructible);
  if (local_a0.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.ExtractedEntries.AllocatorInstance.Data);
  }
  if (bVar2) {
    FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_res8);
    local_138._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
    local_128 = *(undefined8 *)((longlong)this + 0x28);
    local_158.DataPtr = (int *)local_res18;
    local_138.bIsReadOnly = false;
    local_158.ArrayNum = 1;
    local_148.ArrayNum = 1;
    local_148._12_4_ = local_158._12_4_;
    local_148.DataPtr = local_158.DataPtr;
    IPCGAttributeAccessor::SetRange<int>
              ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),&local_148,0,
               &local_138,StrictType);
    bVar2 = true;
    FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_res8);
  }
  else {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar3 = PCG::Private::GetTypeNameText
                         (&local_100,*(ushort *)(**(longlong **)((longlong)this + 8) + 10));
      pFVar4 = FText::FromName(&local_f0,*(FName **)((longlong)this + 0x20));
      pFVar5 = PCG::Private::GetTypeNameText(&local_e0,2);
      pFVar6 = FText::FromName(&local_d0,*(FName **)((longlong)this + 0x18));
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_148,L"PCGContext",L"ConversionFailed",
                          L"Parameter \'{0}\' ({1}) cannot be converted from attribute \'{2}\' ({3})"
                         );
      pFVar8 = FTextFormat::FTextFormat(&local_c0,pFVar7,Default);
      pFVar3 = FText::Format<FText,FText,FText,FText>(&local_110,pFVar8,pFVar6,pFVar5,pFVar4,pFVar3)
      ;
      FText::ToString(pFVar3);
      pIVar11 = pIVar10;
      if (*(FPCGContext **)this != (FPCGContext *)0x0) {
        pFVar9 = FPCGContext::GetTaskName(*(FPCGContext **)this,&local_120);
        if ((pFVar9->Data).ArrayNum == 0) {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
        else {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
      }
      lVar1 = *(longlong *)this;
      if (lVar1 != 0) {
        pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 | 2);
        pFVar9 = ::FString::FString(&local_b0,L"Non-PCG Component");
        if ((*(longlong *)(lVar1 + 0x70) != 0) &&
           (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x68)), bVar2)) {
          pIVar10 = *(IPCGGraphExecutionSource **)(lVar1 + 0x70);
        }
        PCGLog::GetExecutionSourceName((FString *)&local_158,pIVar10,false,pFVar9);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pIVar11 & 2) != 0) &&
         (pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 & 0xfffffffd),
         (ITextData *)local_158.DataPtr != (ITextData *)0x0)) {
        FMemory::Free(local_158.DataPtr);
      }
      if ((((ulonglong)pIVar11 & 1) != 0) &&
         (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (local_110.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
      if ((ITextData *)local_148.DataPtr != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_148.DataPtr + 0x10))();
      }
    }
    bVar2 = false;
  }
  if (local_70.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar2;
}

// operator()<float> @ 149ee1640

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
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
`FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<float>(void *this,float param_1)

{
  IPCGAttributeAccessor *this_00;
  longlong lVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FString *pFVar9;
  IPCGGraphExecutionSource *pIVar10;
  IPCGGraphExecutionSource *pIVar11;
  undefined4 local_res8 [2];
  ITextData local_res18 [2];
  TArrayView<float,int> local_158;
  TArrayView<float_const_,int> local_148;
  IPCGAttributeAccessorKeys local_138;
  undefined8 local_128;
  FString local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FTextFormat local_c0;
  FString local_b0;
  FPCGAttributeAccessorKeysEntries local_a0;
  FPCGAttributeAccessorKeysEntries local_70;
  
  pIVar10 = (IPCGGraphExecutionSource *)0x0;
  local_res8[0] = 0;
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_70,0);
  local_res18[0]._0_4_ = 0;
  this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8);
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_a0,0);
  local_158.ArrayNum = 1;
  local_158.DataPtr = (float *)local_res18;
  bVar2 = IPCGAttributeAccessor::GetRange<float>
                    (this_00,&local_158,0,(IPCGAttributeAccessorKeys *)&local_a0,
                     AllowBroadcastAndConstructible);
  if (local_a0.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.ExtractedEntries.AllocatorInstance.Data);
  }
  if (bVar2) {
    FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_res8);
    local_138._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
    local_128 = *(undefined8 *)((longlong)this + 0x28);
    local_158.DataPtr = (float *)local_res18;
    local_138.bIsReadOnly = false;
    local_158.ArrayNum = 1;
    local_148.ArrayNum = 1;
    local_148._12_4_ = local_158._12_4_;
    local_148.DataPtr = local_158.DataPtr;
    IPCGAttributeAccessor::SetRange<float>
              ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),&local_148,0,
               &local_138,StrictType);
    bVar2 = true;
    FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_res8);
  }
  else {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar3 = PCG::Private::GetTypeNameText
                         (&local_100,*(ushort *)(**(longlong **)((longlong)this + 8) + 10));
      pFVar4 = FText::FromName(&local_f0,*(FName **)((longlong)this + 0x20));
      pFVar5 = PCG::Private::GetTypeNameText(&local_e0,0);
      pFVar6 = FText::FromName(&local_d0,*(FName **)((longlong)this + 0x18));
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_148,L"PCGContext",L"ConversionFailed",
                          L"Parameter \'{0}\' ({1}) cannot be converted from attribute \'{2}\' ({3})"
                         );
      pFVar8 = FTextFormat::FTextFormat(&local_c0,pFVar7,Default);
      pFVar3 = FText::Format<FText,FText,FText,FText>(&local_110,pFVar8,pFVar6,pFVar5,pFVar4,pFVar3)
      ;
      FText::ToString(pFVar3);
      pIVar11 = pIVar10;
      if (*(FPCGContext **)this != (FPCGContext *)0x0) {
        pFVar9 = FPCGContext::GetTaskName(*(FPCGContext **)this,&local_120);
        if ((pFVar9->Data).ArrayNum == 0) {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
        else {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
      }
      lVar1 = *(longlong *)this;
      if (lVar1 != 0) {
        pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 | 2);
        pFVar9 = ::FString::FString(&local_b0,L"Non-PCG Component");
        if ((*(longlong *)(lVar1 + 0x70) != 0) &&
           (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x68)), bVar2)) {
          pIVar10 = *(IPCGGraphExecutionSource **)(lVar1 + 0x70);
        }
        PCGLog::GetExecutionSourceName((FString *)&local_158,pIVar10,false,pFVar9);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pIVar11 & 2) != 0) &&
         (pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 & 0xfffffffd),
         (ITextData *)local_158.DataPtr != (ITextData *)0x0)) {
        FMemory::Free(local_158.DataPtr);
      }
      if ((((ulonglong)pIVar11 & 1) != 0) &&
         (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (local_110.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
      if ((ITextData *)local_148.DataPtr != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_148.DataPtr + 0x10))();
      }
    }
    bVar2 = false;
  }
  if (local_70.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar2;
}

// operator()<double> @ 149ee1990

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
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
`FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<double>(void *this,double param_1)

{
  IPCGAttributeAccessor *this_00;
  longlong lVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FString *pFVar9;
  IPCGGraphExecutionSource *pIVar10;
  IPCGGraphExecutionSource *pIVar11;
  undefined4 local_res8 [2];
  ITextData local_res18 [2];
  TArrayView<double,int> local_158;
  TArrayView<double_const_,int> local_148;
  IPCGAttributeAccessorKeys local_138;
  undefined8 local_128;
  FString local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FTextFormat local_c0;
  FString local_b0;
  FPCGAttributeAccessorKeysEntries local_a0;
  FPCGAttributeAccessorKeysEntries local_70;
  
  pIVar10 = (IPCGGraphExecutionSource *)0x0;
  local_res8[0] = 0;
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_70,0);
  local_res18[0] = (ITextData)0x0;
  this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8);
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_a0,0);
  local_158.ArrayNum = 1;
  local_158.DataPtr = (double *)local_res18;
  bVar2 = IPCGAttributeAccessor::GetRange<double>
                    (this_00,&local_158,0,(IPCGAttributeAccessorKeys *)&local_a0,
                     AllowBroadcastAndConstructible);
  if (local_a0.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.ExtractedEntries.AllocatorInstance.Data);
  }
  if (bVar2) {
    FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_res8);
    local_138._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
    local_128 = *(undefined8 *)((longlong)this + 0x28);
    local_158.DataPtr = (double *)local_res18;
    local_138.bIsReadOnly = false;
    local_158.ArrayNum = 1;
    local_148.ArrayNum = 1;
    local_148._12_4_ = local_158._12_4_;
    local_148.DataPtr = local_158.DataPtr;
    IPCGAttributeAccessor::SetRange<double>
              ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),&local_148,0,
               &local_138,StrictType);
    bVar2 = true;
    FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_res8);
  }
  else {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar3 = PCG::Private::GetTypeNameText
                         (&local_100,*(ushort *)(**(longlong **)((longlong)this + 8) + 10));
      pFVar4 = FText::FromName(&local_f0,*(FName **)((longlong)this + 0x20));
      pFVar5 = PCG::Private::GetTypeNameText(&local_e0,1);
      pFVar6 = FText::FromName(&local_d0,*(FName **)((longlong)this + 0x18));
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_148,L"PCGContext",L"ConversionFailed",
                          L"Parameter \'{0}\' ({1}) cannot be converted from attribute \'{2}\' ({3})"
                         );
      pFVar8 = FTextFormat::FTextFormat(&local_c0,pFVar7,Default);
      pFVar3 = FText::Format<FText,FText,FText,FText>(&local_110,pFVar8,pFVar6,pFVar5,pFVar4,pFVar3)
      ;
      FText::ToString(pFVar3);
      pIVar11 = pIVar10;
      if (*(FPCGContext **)this != (FPCGContext *)0x0) {
        pFVar9 = FPCGContext::GetTaskName(*(FPCGContext **)this,&local_120);
        if ((pFVar9->Data).ArrayNum == 0) {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
        else {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
      }
      lVar1 = *(longlong *)this;
      if (lVar1 != 0) {
        pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 | 2);
        pFVar9 = ::FString::FString(&local_b0,L"Non-PCG Component");
        if ((*(longlong *)(lVar1 + 0x70) != 0) &&
           (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x68)), bVar2)) {
          pIVar10 = *(IPCGGraphExecutionSource **)(lVar1 + 0x70);
        }
        PCGLog::GetExecutionSourceName((FString *)&local_158,pIVar10,false,pFVar9);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pIVar11 & 2) != 0) &&
         (pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 & 0xfffffffd),
         (ITextData *)local_158.DataPtr != (ITextData *)0x0)) {
        FMemory::Free(local_158.DataPtr);
      }
      if ((((ulonglong)pIVar11 & 1) != 0) &&
         (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (local_110.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
      if ((ITextData *)local_148.DataPtr != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.DataPtr + 0x10))();
      }
    }
    bVar2 = false;
  }
  if (local_70.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar2;
}

// operator()<UE::Math::TQuat<double>_> @ 149ee1ce0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
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
`FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<UE::Math::TQuat<double>_>
          (void *this,TQuat<double> *param_1)

{
  IPCGAttributeAccessor *this_00;
  longlong lVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FString *pFVar9;
  IPCGGraphExecutionSource *pIVar10;
  IPCGGraphExecutionSource *pIVar11;
  undefined4 local_res8 [2];
  TArrayView<UE::Math::TQuat<double>,int> local_168;
  TArrayView<UE::Math::TQuat<double>_const_,int> local_158;
  IPCGAttributeAccessorKeys local_148;
  undefined8 local_138;
  FString local_130;
  FText local_120;
  TQuat<double> local_108;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FTextFormat local_a8;
  FString local_98;
  FPCGAttributeAccessorKeysEntries local_88;
  FPCGAttributeAccessorKeysEntries local_58;
  
  pIVar10 = (IPCGGraphExecutionSource *)0x0;
  local_res8[0] = 0;
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_58,0);
  local_108.X = 0.0;
  local_108.Y = 0.0;
  local_108.Z = 0.0;
  local_108.W = 0.0;
  this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8);
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_88,0);
  local_168.ArrayNum = 1;
  local_168.DataPtr = &local_108;
  bVar2 = IPCGAttributeAccessor::GetRange<UE::Math::TQuat<double>_>
                    (this_00,&local_168,0,(IPCGAttributeAccessorKeys *)&local_88,
                     AllowBroadcastAndConstructible);
  if (local_88.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ExtractedEntries.AllocatorInstance.Data);
  }
  if (bVar2) {
    FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_res8);
    local_148._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
    local_138 = *(undefined8 *)((longlong)this + 0x28);
    local_168.DataPtr = &local_108;
    local_148.bIsReadOnly = false;
    local_168.ArrayNum = 1;
    local_158.ArrayNum = 1;
    local_158._12_4_ = local_168._12_4_;
    local_158.DataPtr = local_168.DataPtr;
    IPCGAttributeAccessor::SetRange<UE::Math::TQuat<double>_>
              ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),&local_158,0,
               &local_148,StrictType);
    bVar2 = true;
    FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_res8);
  }
  else {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar3 = PCG::Private::GetTypeNameText
                         (&local_e8,*(ushort *)(**(longlong **)((longlong)this + 8) + 10));
      pFVar4 = FText::FromName(&local_d8,*(FName **)((longlong)this + 0x20));
      pFVar5 = PCG::Private::GetTypeNameText(&local_c8,7);
      pFVar6 = FText::FromName(&local_b8,*(FName **)((longlong)this + 0x18));
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_158,L"PCGContext",L"ConversionFailed",
                          L"Parameter \'{0}\' ({1}) cannot be converted from attribute \'{2}\' ({3})"
                         );
      pFVar8 = FTextFormat::FTextFormat(&local_a8,pFVar7,Default);
      pFVar3 = FText::Format<FText,FText,FText,FText>(&local_120,pFVar8,pFVar6,pFVar5,pFVar4,pFVar3)
      ;
      FText::ToString(pFVar3);
      pIVar11 = pIVar10;
      if (*(FPCGContext **)this != (FPCGContext *)0x0) {
        pFVar9 = FPCGContext::GetTaskName(*(FPCGContext **)this,&local_130);
        if ((pFVar9->Data).ArrayNum == 0) {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
        else {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
      }
      lVar1 = *(longlong *)this;
      if (lVar1 != 0) {
        pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 | 2);
        pFVar9 = ::FString::FString(&local_98,L"Non-PCG Component");
        if ((*(longlong *)(lVar1 + 0x70) != 0) &&
           (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x68)), bVar2)) {
          pIVar10 = *(IPCGGraphExecutionSource **)(lVar1 + 0x70);
        }
        PCGLog::GetExecutionSourceName((FString *)&local_168,pIVar10,false,pFVar9);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pIVar11 & 2) != 0) &&
         (pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 & 0xfffffffd),
         local_168.DataPtr != (TQuat<double> *)0x0)) {
        FMemory::Free(local_168.DataPtr);
      }
      if ((((ulonglong)pIVar11 & 1) != 0) &&
         (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (local_120.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
      }
      if (local_158.DataPtr != (TQuat<double> *)0x0) {
        (**(code **)((longlong)(local_158.DataPtr)->X + 0x10))();
      }
    }
    bVar2 = false;
  }
  if (local_58.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar2;
}

// operator()<UE::Math::TRotator<double>_> @ 149ee2030

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
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
`FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<UE::Math::TRotator<double>_>
          (void *this,TRotator<double> *param_1)

{
  IPCGAttributeAccessor *this_00;
  longlong lVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FString *pFVar9;
  IPCGGraphExecutionSource *pIVar10;
  IPCGGraphExecutionSource *pIVar11;
  undefined4 local_res8 [2];
  TArrayView<UE::Math::TRotator<double>,int> local_158;
  TArrayView<UE::Math::TRotator<double>_const_,int> local_148;
  TRotator<double> local_138;
  IPCGAttributeAccessorKeys local_120;
  undefined8 local_110;
  FString local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FTextFormat local_a8;
  FString local_98;
  FPCGAttributeAccessorKeysEntries local_88;
  FPCGAttributeAccessorKeysEntries local_58;
  
  pIVar10 = (IPCGGraphExecutionSource *)0x0;
  local_res8[0] = 0;
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_58,0);
  local_138.Roll = 0.0;
  local_138.Pitch = 0.0;
  local_138.Yaw = 0.0;
  this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8);
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_88,0);
  local_158.ArrayNum = 1;
  local_158.DataPtr = &local_138;
  bVar2 = IPCGAttributeAccessor::GetRange<UE::Math::TRotator<double>_>
                    (this_00,&local_158,0,(IPCGAttributeAccessorKeys *)&local_88,
                     AllowBroadcastAndConstructible);
  if (local_88.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ExtractedEntries.AllocatorInstance.Data);
  }
  if (bVar2) {
    FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_res8);
    local_120._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
    local_110 = *(undefined8 *)((longlong)this + 0x28);
    local_158.DataPtr = &local_138;
    local_120.bIsReadOnly = false;
    local_158.ArrayNum = 1;
    local_148.ArrayNum = 1;
    local_148._12_4_ = local_158._12_4_;
    local_148.DataPtr = local_158.DataPtr;
    IPCGAttributeAccessor::SetRange<UE::Math::TRotator<double>_>
              ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),&local_148,0,
               &local_120,StrictType);
    bVar2 = true;
    FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_res8);
  }
  else {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar3 = PCG::Private::GetTypeNameText
                         (&local_e8,*(ushort *)(**(longlong **)((longlong)this + 8) + 10));
      pFVar4 = FText::FromName(&local_d8,*(FName **)((longlong)this + 0x20));
      pFVar5 = PCG::Private::GetTypeNameText(&local_c8,0xb);
      pFVar6 = FText::FromName(&local_b8,*(FName **)((longlong)this + 0x18));
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_148,L"PCGContext",L"ConversionFailed",
                          L"Parameter \'{0}\' ({1}) cannot be converted from attribute \'{2}\' ({3})"
                         );
      pFVar8 = FTextFormat::FTextFormat(&local_a8,pFVar7,Default);
      pFVar3 = FText::Format<FText,FText,FText,FText>(&local_f8,pFVar8,pFVar6,pFVar5,pFVar4,pFVar3);
      FText::ToString(pFVar3);
      pIVar11 = pIVar10;
      if (*(FPCGContext **)this != (FPCGContext *)0x0) {
        pFVar9 = FPCGContext::GetTaskName(*(FPCGContext **)this,&local_108);
        if ((pFVar9->Data).ArrayNum == 0) {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
        else {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
      }
      lVar1 = *(longlong *)this;
      if (lVar1 != 0) {
        pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 | 2);
        pFVar9 = ::FString::FString(&local_98,L"Non-PCG Component");
        if ((*(longlong *)(lVar1 + 0x70) != 0) &&
           (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x68)), bVar2)) {
          pIVar10 = *(IPCGGraphExecutionSource **)(lVar1 + 0x70);
        }
        PCGLog::GetExecutionSourceName((FString *)&local_158,pIVar10,false,pFVar9);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pIVar11 & 2) != 0) &&
         (pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 & 0xfffffffd),
         local_158.DataPtr != (TRotator<double> *)0x0)) {
        FMemory::Free(local_158.DataPtr);
      }
      if ((((ulonglong)pIVar11 & 1) != 0) &&
         (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      if (local_148.DataPtr != (TRotator<double> *)0x0) {
        (**(code **)((longlong)(local_148.DataPtr)->Pitch + 0x10))();
      }
    }
    bVar2 = false;
  }
  if (local_58.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar2;
}

// operator()<UE::Math::TTransform<double>_> @ 149ee2380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
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
`FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<UE::Math::TTransform<double>_>
          (void *this,TTransform<double> *param_1)

{
  IPCGAttributeAccessor *this_00;
  longlong lVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FString *pFVar9;
  IPCGGraphExecutionSource *pIVar10;
  IPCGGraphExecutionSource *pIVar11;
  undefined1 auStackY_208 [32];
  FGCScopeGuard local_1d8 [16];
  TArrayView<UE::Math::TTransform<double>,int> local_1c8;
  undefined4 local_1b8;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_1a8;
  IPCGAttributeAccessorKeys local_198;
  undefined8 local_188;
  FString local_180;
  FText local_170;
  FText local_160;
  FText local_150;
  FText local_140;
  FText local_130;
  FTextFormat local_120;
  FString local_110;
  FPCGAttributeAccessorKeysEntries local_100;
  FPCGAttributeAccessorKeysEntries local_d0;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pIVar10 = (IPCGGraphExecutionSource *)0x0;
  local_1b8 = 0;
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_d0,0);
  local_98.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_98.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_98.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_98.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_98.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_98.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_98.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_98.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8);
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_100,0);
  local_1c8.ArrayNum = 1;
  local_1c8.DataPtr = &local_98;
  bVar2 = IPCGAttributeAccessor::GetRange<UE::Math::TTransform<double>_>
                    (this_00,&local_1c8,0,(IPCGAttributeAccessorKeys *)&local_100,
                     AllowBroadcastAndConstructible);
  if (local_100.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.ExtractedEntries.AllocatorInstance.Data);
  }
  if (bVar2) {
    FGCScopeGuard::FGCScopeGuard(local_1d8);
    local_198._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
    local_188 = *(undefined8 *)((longlong)this + 0x28);
    local_1c8.DataPtr = &local_98;
    local_198.bIsReadOnly = false;
    local_1c8.ArrayNum = 1;
    local_1a8.ArrayNum = 1;
    local_1a8._12_4_ = local_1c8._12_4_;
    local_1a8.DataPtr = local_1c8.DataPtr;
    IPCGAttributeAccessor::SetRange<UE::Math::TTransform<double>_>
              ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),&local_1a8,0,
               &local_198,StrictType);
    bVar2 = true;
    FGCScopeGuard::~FGCScopeGuard(local_1d8);
  }
  else {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar3 = PCG::Private::GetTypeNameText
                         (&local_160,*(ushort *)(**(longlong **)((longlong)this + 8) + 10));
      pFVar4 = FText::FromName(&local_150,*(FName **)((longlong)this + 0x20));
      pFVar5 = PCG::Private::GetTypeNameText(&local_140,8);
      pFVar6 = FText::FromName(&local_130,*(FName **)((longlong)this + 0x18));
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_1a8,L"PCGContext",L"ConversionFailed",
                          L"Parameter \'{0}\' ({1}) cannot be converted from attribute \'{2}\' ({3})"
                         );
      pFVar8 = FTextFormat::FTextFormat(&local_120,pFVar7,Default);
      pFVar3 = FText::Format<FText,FText,FText,FText>(&local_170,pFVar8,pFVar6,pFVar5,pFVar4,pFVar3)
      ;
      FText::ToString(pFVar3);
      pIVar11 = pIVar10;
      if (*(FPCGContext **)this != (FPCGContext *)0x0) {
        pFVar9 = FPCGContext::GetTaskName(*(FPCGContext **)this,&local_180);
        if ((pFVar9->Data).ArrayNum == 0) {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
        else {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
      }
      lVar1 = *(longlong *)this;
      if (lVar1 != 0) {
        pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 | 2);
        pFVar9 = ::FString::FString(&local_110,L"Non-PCG Component");
        if ((*(longlong *)(lVar1 + 0x70) != 0) &&
           (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x68)), bVar2)) {
          pIVar10 = *(IPCGGraphExecutionSource **)(lVar1 + 0x70);
        }
        PCGLog::GetExecutionSourceName((FString *)&local_1c8,pIVar10,false,pFVar9);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pIVar11 & 2) != 0) &&
         (pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 & 0xfffffffd),
         local_1c8.DataPtr != (TTransform<double> *)0x0)) {
        FMemory::Free(local_1c8.DataPtr);
      }
      if ((((ulonglong)pIVar11 & 1) != 0) &&
         (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      if (local_170.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
      }
      if (local_1a8.DataPtr != (TTransform<double> *)0x0) {
        (**(code **)((longlong)((local_1a8.DataPtr)->Rotation).XY.m128d_f64[0] + 0x10))();
      }
    }
    bVar2 = false;
  }
  if (local_d0.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar2;
}

// operator()<UE::Math::TVector2<double>_> @ 149ee2730

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
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
`FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<UE::Math::TVector2<double>_>
          (void *this,TVector2<double> *param_1)

{
  IPCGAttributeAccessor *this_00;
  longlong lVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FString *pFVar9;
  IPCGGraphExecutionSource *pIVar10;
  IPCGGraphExecutionSource *pIVar11;
  undefined4 local_res8 [2];
  TArrayView<UE::Math::TVector2<double>,int> local_158;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_148;
  ITextData local_138;
  undefined8 uStack_130;
  IPCGAttributeAccessorKeys local_128;
  undefined8 local_118;
  FString local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FTextFormat local_b0;
  FString local_a0;
  FPCGAttributeAccessorKeysEntries local_90;
  FPCGAttributeAccessorKeysEntries local_60;
  
  pIVar10 = (IPCGGraphExecutionSource *)0x0;
  local_res8[0] = 0;
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_60,0);
  local_138 = (ITextData)0x0;
  uStack_130 = 0;
  this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8);
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_90,0);
  local_158.ArrayNum = 1;
  local_158.DataPtr = (TVector2<double> *)&local_138;
  bVar2 = IPCGAttributeAccessor::GetRange<UE::Math::TVector2<double>_>
                    (this_00,&local_158,0,(IPCGAttributeAccessorKeys *)&local_90,
                     AllowBroadcastAndConstructible);
  if (local_90.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.ExtractedEntries.AllocatorInstance.Data);
  }
  if (bVar2) {
    FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_res8);
    local_128._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
    local_118 = *(undefined8 *)((longlong)this + 0x28);
    local_158.DataPtr = (TVector2<double> *)&local_138;
    local_128.bIsReadOnly = false;
    local_158.ArrayNum = 1;
    local_148.ArrayNum = 1;
    local_148._12_4_ = local_158._12_4_;
    local_148.DataPtr = local_158.DataPtr;
    IPCGAttributeAccessor::SetRange<UE::Math::TVector2<double>_>
              ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),&local_148,0,
               &local_128,StrictType);
    bVar2 = true;
    FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_res8);
  }
  else {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar3 = PCG::Private::GetTypeNameText
                         (&local_f0,*(ushort *)(**(longlong **)((longlong)this + 8) + 10));
      pFVar4 = FText::FromName(&local_e0,*(FName **)((longlong)this + 0x20));
      pFVar5 = PCG::Private::GetTypeNameText(&local_d0,4);
      pFVar6 = FText::FromName(&local_c0,*(FName **)((longlong)this + 0x18));
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_148,L"PCGContext",L"ConversionFailed",
                          L"Parameter \'{0}\' ({1}) cannot be converted from attribute \'{2}\' ({3})"
                         );
      pFVar8 = FTextFormat::FTextFormat(&local_b0,pFVar7,Default);
      pFVar3 = FText::Format<FText,FText,FText,FText>(&local_100,pFVar8,pFVar6,pFVar5,pFVar4,pFVar3)
      ;
      FText::ToString(pFVar3);
      pIVar11 = pIVar10;
      if (*(FPCGContext **)this != (FPCGContext *)0x0) {
        pFVar9 = FPCGContext::GetTaskName(*(FPCGContext **)this,&local_110);
        if ((pFVar9->Data).ArrayNum == 0) {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
        else {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
      }
      lVar1 = *(longlong *)this;
      if (lVar1 != 0) {
        pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 | 2);
        pFVar9 = ::FString::FString(&local_a0,L"Non-PCG Component");
        if ((*(longlong *)(lVar1 + 0x70) != 0) &&
           (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x68)), bVar2)) {
          pIVar10 = *(IPCGGraphExecutionSource **)(lVar1 + 0x70);
        }
        PCGLog::GetExecutionSourceName((FString *)&local_158,pIVar10,false,pFVar9);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pIVar11 & 2) != 0) &&
         (pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 & 0xfffffffd),
         (ITextData *)local_158.DataPtr != (ITextData *)0x0)) {
        FMemory::Free(local_158.DataPtr);
      }
      if ((((ulonglong)pIVar11 & 1) != 0) &&
         (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if (local_100.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
      }
      if ((ITextData *)local_148.DataPtr != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_148.DataPtr + 0x10))();
      }
    }
    bVar2 = false;
  }
  if (local_60.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar2;
}

// operator()<UE::Math::TVector4<double>_> @ 149ee2a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
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
`FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<UE::Math::TVector4<double>_>
          (void *this,TVector4<double> *param_1)

{
  IPCGAttributeAccessor *this_00;
  longlong lVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FString *pFVar9;
  IPCGGraphExecutionSource *pIVar10;
  IPCGGraphExecutionSource *pIVar11;
  undefined4 local_res8 [2];
  TArrayView<UE::Math::TVector4<double>,int> local_168;
  TArrayView<UE::Math::TVector4<double>_const_,int> local_158;
  IPCGAttributeAccessorKeys local_148;
  undefined8 local_138;
  FString local_130;
  FText local_120;
  ITextData local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FTextFormat local_a8;
  FString local_98;
  FPCGAttributeAccessorKeysEntries local_88;
  FPCGAttributeAccessorKeysEntries local_58;
  
  pIVar10 = (IPCGGraphExecutionSource *)0x0;
  local_res8[0] = 0;
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_58,0);
  local_108 = (ITextData)0x0;
  uStack_100 = 0;
  local_f8 = ___xmm_3ff00000000000000000000000000000;
  uStack_f0 = _UNK_15061cbc8;
  this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8);
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_88,0);
  local_168.ArrayNum = 1;
  local_168.DataPtr = (TVector4<double> *)&local_108;
  bVar2 = IPCGAttributeAccessor::GetRange<UE::Math::TVector4<double>_>
                    (this_00,&local_168,0,(IPCGAttributeAccessorKeys *)&local_88,
                     AllowBroadcastAndConstructible);
  if (local_88.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ExtractedEntries.AllocatorInstance.Data);
  }
  if (bVar2) {
    FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_res8);
    local_148._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
    local_138 = *(undefined8 *)((longlong)this + 0x28);
    local_168.DataPtr = (TVector4<double> *)&local_108;
    local_148.bIsReadOnly = false;
    local_168.ArrayNum = 1;
    local_158.ArrayNum = 1;
    local_158._12_4_ = local_168._12_4_;
    local_158.DataPtr = local_168.DataPtr;
    IPCGAttributeAccessor::SetRange<UE::Math::TVector4<double>_>
              ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),&local_158,0,
               &local_148,StrictType);
    bVar2 = true;
    FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_res8);
  }
  else {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar3 = PCG::Private::GetTypeNameText
                         (&local_e8,*(ushort *)(**(longlong **)((longlong)this + 8) + 10));
      pFVar4 = FText::FromName(&local_d8,*(FName **)((longlong)this + 0x20));
      pFVar5 = PCG::Private::GetTypeNameText(&local_c8,6);
      pFVar6 = FText::FromName(&local_b8,*(FName **)((longlong)this + 0x18));
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_158,L"PCGContext",L"ConversionFailed",
                          L"Parameter \'{0}\' ({1}) cannot be converted from attribute \'{2}\' ({3})"
                         );
      pFVar8 = FTextFormat::FTextFormat(&local_a8,pFVar7,Default);
      pFVar3 = FText::Format<FText,FText,FText,FText>(&local_120,pFVar8,pFVar6,pFVar5,pFVar4,pFVar3)
      ;
      FText::ToString(pFVar3);
      pIVar11 = pIVar10;
      if (*(FPCGContext **)this != (FPCGContext *)0x0) {
        pFVar9 = FPCGContext::GetTaskName(*(FPCGContext **)this,&local_130);
        if ((pFVar9->Data).ArrayNum == 0) {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
        else {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
      }
      lVar1 = *(longlong *)this;
      if (lVar1 != 0) {
        pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 | 2);
        pFVar9 = ::FString::FString(&local_98,L"Non-PCG Component");
        if ((*(longlong *)(lVar1 + 0x70) != 0) &&
           (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x68)), bVar2)) {
          pIVar10 = *(IPCGGraphExecutionSource **)(lVar1 + 0x70);
        }
        PCGLog::GetExecutionSourceName((FString *)&local_168,pIVar10,false,pFVar9);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pIVar11 & 2) != 0) &&
         (pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 & 0xfffffffd),
         (ITextData *)local_168.DataPtr != (ITextData *)0x0)) {
        FMemory::Free(local_168.DataPtr);
      }
      if ((((ulonglong)pIVar11 & 1) != 0) &&
         (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (local_120.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
      }
      if ((ITextData *)local_158.DataPtr != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_158.DataPtr + 0x10))();
      }
    }
    bVar2 = false;
  }
  if (local_58.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar2;
}

// operator()<UE::Math::TVector<double>_> @ 149ee2de0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
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
`FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<UE::Math::TVector<double>_>
          (void *this,TVector<double> *param_1)

{
  IPCGAttributeAccessor *this_00;
  longlong lVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FString *pFVar9;
  IPCGGraphExecutionSource *pIVar10;
  IPCGGraphExecutionSource *pIVar11;
  undefined4 local_res8 [2];
  TArrayView<UE::Math::TVector<double>,int> local_158;
  TArrayView<UE::Math::TVector<double>_const_,int> local_148;
  ITextData local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  IPCGAttributeAccessorKeys local_120;
  undefined8 local_110;
  FString local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FTextFormat local_a8;
  FString local_98;
  FPCGAttributeAccessorKeysEntries local_88;
  FPCGAttributeAccessorKeysEntries local_58;
  
  pIVar10 = (IPCGGraphExecutionSource *)0x0;
  local_res8[0] = 0;
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_58,0);
  local_128 = 0;
  local_138 = (ITextData)0x0;
  uStack_130 = 0;
  this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8);
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_88,0);
  local_158.ArrayNum = 1;
  local_158.DataPtr = (TVector<double> *)&local_138;
  bVar2 = IPCGAttributeAccessor::GetRange<UE::Math::TVector<double>_>
                    (this_00,&local_158,0,(IPCGAttributeAccessorKeys *)&local_88,
                     AllowBroadcastAndConstructible);
  if (local_88.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ExtractedEntries.AllocatorInstance.Data);
  }
  if (bVar2) {
    FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_res8);
    local_120._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
    local_110 = *(undefined8 *)((longlong)this + 0x28);
    local_158.DataPtr = (TVector<double> *)&local_138;
    local_120.bIsReadOnly = false;
    local_158.ArrayNum = 1;
    local_148.ArrayNum = 1;
    local_148._12_4_ = local_158._12_4_;
    local_148.DataPtr = local_158.DataPtr;
    IPCGAttributeAccessor::SetRange<UE::Math::TVector<double>_>
              ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),&local_148,0,
               &local_120,StrictType);
    bVar2 = true;
    FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_res8);
  }
  else {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar3 = PCG::Private::GetTypeNameText
                         (&local_e8,*(ushort *)(**(longlong **)((longlong)this + 8) + 10));
      pFVar4 = FText::FromName(&local_d8,*(FName **)((longlong)this + 0x20));
      pFVar5 = PCG::Private::GetTypeNameText(&local_c8,5);
      pFVar6 = FText::FromName(&local_b8,*(FName **)((longlong)this + 0x18));
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_148,L"PCGContext",L"ConversionFailed",
                          L"Parameter \'{0}\' ({1}) cannot be converted from attribute \'{2}\' ({3})"
                         );
      pFVar8 = FTextFormat::FTextFormat(&local_a8,pFVar7,Default);
      pFVar3 = FText::Format<FText,FText,FText,FText>(&local_f8,pFVar8,pFVar6,pFVar5,pFVar4,pFVar3);
      FText::ToString(pFVar3);
      pIVar11 = pIVar10;
      if (*(FPCGContext **)this != (FPCGContext *)0x0) {
        pFVar9 = FPCGContext::GetTaskName(*(FPCGContext **)this,&local_108);
        if ((pFVar9->Data).ArrayNum == 0) {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
        else {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
      }
      lVar1 = *(longlong *)this;
      if (lVar1 != 0) {
        pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 | 2);
        pFVar9 = ::FString::FString(&local_98,L"Non-PCG Component");
        if ((*(longlong *)(lVar1 + 0x70) != 0) &&
           (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x68)), bVar2)) {
          pIVar10 = *(IPCGGraphExecutionSource **)(lVar1 + 0x70);
        }
        PCGLog::GetExecutionSourceName((FString *)&local_158,pIVar10,false,pFVar9);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pIVar11 & 2) != 0) &&
         (pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 & 0xfffffffd),
         (ITextData *)local_158.DataPtr != (ITextData *)0x0)) {
        FMemory::Free(local_158.DataPtr);
      }
      if ((((ulonglong)pIVar11 & 1) != 0) &&
         (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      if ((ITextData *)local_148.DataPtr != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_148.DataPtr + 0x10))();
      }
    }
    bVar2 = false;
  }
  if (local_58.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar2;
}

// operator()<FSoftClassPath> @ 149ee3130

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
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
`FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<FSoftClassPath>
          (void *this,FSoftClassPath *param_1)

{
  int iVar1;
  IPCGAttributeAccessor *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FString *pFVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  uint uVar14;
  uint uVar15;
  IPCGGraphExecutionSource *pIVar16;
  longlong lVar17;
  uint uVar18;
  IPCGGraphExecutionSource *pIVar19;
  undefined4 local_res8 [2];
  FSoftClassPath *local_res10;
  FString *local_res18;
  FSoftObjectPath local_288;
  undefined1 local_268 [16];
  void *local_258;
  undefined8 local_250;
  FString local_248;
  FString local_238;
  IPCGAttributeAccessorKeys local_228;
  undefined8 local_218;
  FSoftObjectPath *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  FSoftObjectPath *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  FSoftObjectPath *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  FSoftClassPath *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  TArrayView<FSoftClassPath,int> local_1c8;
  FString local_1b8;
  FText local_1a8;
  FText local_198;
  TArrayView<FSoftClassPath_const_,int> local_188;
  TArrayView<FSoftClassPath,int> local_178;
  FString local_168;
  FText local_158;
  FText local_148;
  TArrayView<FSoftClassPath_const_,int> local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FTextFormat local_e8;
  FString local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FString local_a8;
  FPCGAttributeAccessorKeysEntries local_98;
  FPCGAttributeAccessorKeysEntries local_68;
  
  pIVar16 = (IPCGGraphExecutionSource *)0x0;
  local_res8[0] = 0;
  local_res10 = param_1;
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_68,0);
  local_288.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_288.AssetPath.PackageName.Number = 0;
  local_288.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_288.AssetPath.AssetName.Number = 0;
  local_288.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.SubPathString.Data.ArrayNum = 0;
  local_288.SubPathString.Data.ArrayMax = 0;
  this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8);
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_98,0);
  local_208 = &local_288;
  uStack_200 = 1;
  local_1c8._12_4_ = uStack_1fc;
  local_1c8.ArrayNum = 1;
  local_1c8.DataPtr = (FSoftClassPath *)local_208;
  bVar3 = IPCGAttributeAccessor::GetRange<FSoftClassPath>
                    (this_00,&local_1c8,0,(IPCGAttributeAccessorKeys *)&local_98,
                     AllowBroadcastAndConstructible);
  if (local_98.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ExtractedEntries.AllocatorInstance.Data);
  }
  if (!bVar3) {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar5 = PCG::Private::GetTypeNameText
                         (&local_128,*(ushort *)(**(longlong **)((longlong)this + 8) + 10));
      pFVar6 = FText::FromName(&local_118,*(FName **)((longlong)this + 0x20));
      pFVar7 = PCG::Private::GetTypeNameText(&local_108,0xe);
      pFVar8 = FText::FromName(&local_f8,*(FName **)((longlong)this + 0x18));
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_198,L"PCGContext",L"ConversionFailed",
                          L"Parameter \'{0}\' ({1}) cannot be converted from attribute \'{2}\' ({3})"
                         );
      pFVar10 = FTextFormat::FTextFormat(&local_e8,pFVar9,Default);
      pFVar5 = FText::Format<FText,FText,FText,FText>
                         (&local_1a8,pFVar10,pFVar8,pFVar7,pFVar6,pFVar5);
      FText::ToString(pFVar5);
      pIVar19 = pIVar16;
      if (*(FPCGContext **)this != (FPCGContext *)0x0) {
        pIVar19 = (IPCGGraphExecutionSource *)&DAT_00000001;
        FPCGContext::GetTaskName(*(FPCGContext **)this,&local_1b8);
      }
      lVar17 = *(longlong *)this;
      if (lVar17 != 0) {
        pIVar19 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar19 | 2);
        pFVar11 = ::FString::FString(&local_d8,L"Non-PCG Component");
        if ((*(longlong *)(lVar17 + 0x70) != 0) &&
           (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar17 + 0x68)), bVar3)) {
          pIVar16 = *(IPCGGraphExecutionSource **)(lVar17 + 0x70);
        }
        PCGLog::GetExecutionSourceName(&local_248,pIVar16,false,pFVar11);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pIVar19 & 2) != 0) &&
         (pIVar19 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar19 & 0xfffffffd),
         local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pIVar19 & 1) != 0) &&
         (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      if (local_1a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
      }
      param_1 = local_res10;
      if (local_198.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
        param_1 = local_res10;
      }
    }
    if (local_288.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_68.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.ExtractedEntries.AllocatorInstance.Data);
    }
    if (*(void **)&param_1->field_0x10 != (void *)0x0) {
      FMemory::Free(*(void **)&param_1->field_0x10);
    }
    return false;
  }
  FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_res8);
  local_228._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
  local_218 = *(undefined8 *)((longlong)this + 0x28);
  local_1f8 = &local_288;
  local_228.bIsReadOnly = false;
  uStack_1f0 = 1;
  local_188._12_4_ = uStack_1ec;
  local_188.ArrayNum = 1;
  local_188.DataPtr = (FSoftClassPath *)local_1f8;
  IPCGAttributeAccessor::SetRange<FSoftClassPath>
            ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),&local_188,0,
             &local_228,StrictType);
  lVar17 = *(longlong *)((longlong)this + 0x18);
  uVar15 = *(int *)(lVar17 + 0x80) - 1;
  uVar14 = 0;
  uVar18 = uVar14;
  if ((int)uVar15 < *(int *)(lVar17 + 0x80)) {
    uVar18 = ~uVar15 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x78) + -8 + (longlong)*(int *)(lVar17 + 0x80) * 8);
  if ((lVar17 == 0) || ((*(uint *)(*(longlong *)(lVar17 + 8) + 0x18) >> 0x1a & 1) == 0))
  goto LAB_149ee3866;
  local_1e8 = &local_288;
  uStack_1e0 = 1;
  local_178._12_4_ = uStack_1dc;
  local_178.ArrayNum = 1;
  local_178.DataPtr = (FSoftClassPath *)local_1e8;
  bVar3 = IPCGAttributeAccessor::GetRange<FSoftClassPath>
                    ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),&local_178,0,
                     &local_228,StrictType);
  if (!bVar3) goto LAB_149ee3866;
  lVar17 = *(longlong *)((longlong)this + 0x18);
  uVar15 = *(int *)(lVar17 + 0x80) - 1;
  uVar18 = uVar14;
  if ((int)uVar15 < *(int *)(lVar17 + 0x80)) {
    uVar18 = ~uVar15 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x78) + -8 + (longlong)*(int *)(lVar17 + 0x80) * 8);
  if ((lVar17 == 0) || ((*(uint *)(*(longlong *)(lVar17 + 8) + 0x18) >> 10 & 1) == 0)) {
    lVar17 = *(longlong *)((longlong)this + 0x18);
    uVar18 = *(int *)(lVar17 + 0x80) - 1;
    if ((int)uVar18 < *(int *)(lVar17 + 0x80)) {
      uVar14 = ~uVar18 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    lVar17 = *(longlong *)
              (*(longlong *)(lVar17 + 0x78) + -8 + (longlong)*(int *)(lVar17 + 0x80) * 8);
    if ((lVar17 != 0) && ((*(ulonglong *)(*(longlong *)(lVar17 + 8) + 0x18) >> 0x21 & 1) != 0)) {
      lVar17 = *(longlong *)(lVar17 + 0x78);
      goto LAB_149ee361f;
    }
  }
  else {
    lVar17 = *(longlong *)(lVar17 + 0x78);
LAB_149ee361f:
    pUVar12 = FSoftObjectPath::ResolveObject(&local_288);
    param_1 = local_res10;
    if (pUVar12 == (UObject *)0x0) goto LAB_149ee3866;
    pUVar13 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar13->_padding_;
    param_1 = local_res10;
    if ((*(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar13->_padding_)) goto LAB_149ee3866;
    if (lVar17 != 0) {
      if ((*(int *)(lVar17 + 0x38) <= *(int *)&pUVar12[1].field_0x10) &&
         (*(longlong *)(*(longlong *)&pUVar12[1].field_0x8 + (longlong)*(int *)(lVar17 + 0x38) * 8)
          == lVar17 + 0x30)) goto LAB_149ee3866;
    }
  }
  if (1 < (byte)LogPCG._0_1_) {
    pFVar5 = FText::FromName(&local_c8,*(FName **)((longlong)this + 0x18));
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_148,L"PCGContext",L"WrongObjectClass",
                        L"Parameter \'{0}\' was set with an attribute that is not a child class. It will be nulled out."
                       );
    pFVar10 = FTextFormat::FTextFormat(&local_b8,pFVar6,Default);
    pFVar5 = FText::Format<FText>(&local_158,pFVar10,pFVar5);
    FText::ToString(pFVar5);
    pIVar19 = pIVar16;
    if (*(FPCGContext **)this != (FPCGContext *)0x0) {
      pIVar19 = (IPCGGraphExecutionSource *)&DAT_00000004;
      FPCGContext::GetTaskName(*(FPCGContext **)this,&local_168);
    }
    lVar17 = *(longlong *)this;
    if (lVar17 != 0) {
      pIVar19 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar19 | 8);
      local_res18 = ::FString::FString(&local_a8,L"Non-PCG Component");
      if ((*(longlong *)(lVar17 + 0x70) != 0) &&
         (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar17 + 0x68)), bVar3)) {
        pIVar16 = *(IPCGGraphExecutionSource **)(lVar17 + 0x70);
      }
      PCGLog::GetExecutionSourceName(&local_238,pIVar16,false,local_res18);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((((ulonglong)pIVar19 & 8) != 0) &&
       (pIVar19 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar19 & 0xfffffff7),
       local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    if ((((ulonglong)pIVar19 & 4) != 0) &&
       (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
    }
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
  }
  uStack_1d0 = 1;
  local_1d8 = (FSoftClassPath *)local_268;
  local_138._12_4_ = uStack_1cc;
  local_138.ArrayNum = 1;
  local_268._0_8_ = 0;
  local_268._8_8_ = 0;
  local_258 = (void *)0x0;
  local_250 = 0;
  local_138.DataPtr = local_1d8;
  IPCGAttributeAccessor::SetRange<FSoftClassPath>
            ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),&local_138,0,
             &local_228,StrictType);
  param_1 = local_res10;
  if (local_258 != (void *)0x0) {
    FMemory::Free(local_258);
    param_1 = local_res10;
  }
LAB_149ee3866:
  FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_res8);
  if (local_288.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_68.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ExtractedEntries.AllocatorInstance.Data);
  }
  if (*(void **)&param_1->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x10);
  }
  return true;
}

// operator()<FSoftObjectPath> @ 149ee38d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
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
`FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<FSoftObjectPath>
          (void *this,FSoftObjectPath *param_1)

{
  IPCGAttributeAccessor *this_00;
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FText *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  FString *pFVar14;
  UObject *pUVar15;
  uint uVar16;
  IPCGGraphExecutionSource *pIVar17;
  IPCGGraphExecutionSource *pIVar18;
  undefined4 local_res8 [2];
  FSoftObjectPath *local_res10;
  FString *local_res18;
  FSoftObjectPath local_288;
  FSoftObjectPath local_268;
  FString local_248;
  FString local_238;
  IPCGAttributeAccessorKeys local_228;
  undefined8 local_218;
  FSoftObjectPath *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  FSoftObjectPath *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  FSoftObjectPath *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  FSoftObjectPath *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  TArrayView<FSoftObjectPath,int> local_1c8;
  FString local_1b8;
  FText local_1a8;
  FText local_198;
  TArrayView<FSoftObjectPath_const_,int> local_188;
  TArrayView<FSoftObjectPath,int> local_178;
  FString local_168;
  FText local_158;
  FText local_148;
  TArrayView<FSoftObjectPath_const_,int> local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FTextFormat local_e8;
  FString local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FString local_a8;
  FPCGAttributeAccessorKeysEntries local_98;
  FPCGAttributeAccessorKeysEntries local_68;
  
  pIVar17 = (IPCGGraphExecutionSource *)0x0;
  local_res8[0] = 0;
  local_res10 = param_1;
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_68,0);
  local_288.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_288.AssetPath.PackageName.Number = 0;
  local_288.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_288.AssetPath.AssetName.Number = 0;
  local_288.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.SubPathString.Data.ArrayNum = 0;
  local_288.SubPathString.Data.ArrayMax = 0;
  this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8);
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_98,0);
  local_208 = &local_288;
  uStack_200 = 1;
  local_1c8._12_4_ = uStack_1fc;
  local_1c8.ArrayNum = 1;
  local_1c8.DataPtr = local_208;
  bVar5 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                    (this_00,&local_1c8,0,(IPCGAttributeAccessorKeys *)&local_98,
                     AllowBroadcastAndConstructible);
  if (local_98.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ExtractedEntries.AllocatorInstance.Data);
  }
  if (bVar5) {
    FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_res8);
    local_228._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
    local_218 = *(undefined8 *)((longlong)this + 0x28);
    local_1f8 = &local_288;
    local_228.bIsReadOnly = false;
    uStack_1f0 = 1;
    local_188._12_4_ = uStack_1ec;
    local_188.ArrayNum = 1;
    local_188.DataPtr = local_1f8;
    IPCGAttributeAccessor::SetRange<FSoftObjectPath>
              ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),&local_188,0,
               &local_228,StrictType);
    lVar1 = *(longlong *)((longlong)this + 0x18);
    uVar16 = *(int *)(lVar1 + 0x80) - 1;
    uVar7 = 0;
    if ((int)uVar16 < *(int *)(lVar1 + 0x80)) {
      uVar7 = ~uVar16 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x78) + -8 + (longlong)*(int *)(lVar1 + 0x80) * 8);
    if ((lVar1 != 0) && ((*(uint *)(*(longlong *)(lVar1 + 8) + 0x18) >> 0x1a & 1) != 0)) {
      local_1e8 = &local_288;
      uStack_1e0 = 1;
      local_178._12_4_ = uStack_1dc;
      local_178.ArrayNum = 1;
      local_178.DataPtr = local_1e8;
      bVar5 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                        ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),
                         &local_178,0,&local_228,StrictType);
      if ((bVar5) &&
         (((pUVar15 = FSoftObjectPath::ResolveObject(&local_288), pUVar15 != (UObject *)0x0 &&
           (lVar1 = *(longlong *)(lVar1 + 0x70), lVar1 != 0)) &&
          (lVar3 = *(longlong *)&pUVar15->field_0x10, lVar3 != 0)))) {
        if ((*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38)) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
            lVar1 + 0x30)) {
          if (1 < (byte)LogPCG._0_1_) {
            pFVar8 = FText::FromName(&local_c8,*(FName **)((longlong)this + 0x18));
            pFVar9 = FText::AsLocalizable_Advanced_LocText
                               (&local_148,L"PCGContext",L"WrongObjectClass",
                                L"Parameter \'{0}\' was set with an attribute that is not a child class. It will be nulled out."
                               );
            pFVar13 = FTextFormat::FTextFormat(&local_b8,pFVar9,Default);
            pFVar8 = FText::Format<FText>(&local_158,pFVar13,pFVar8);
            FText::ToString(pFVar8);
            pIVar18 = pIVar17;
            if (*(FPCGContext **)this != (FPCGContext *)0x0) {
              pFVar14 = FPCGContext::GetTaskName(*(FPCGContext **)this,&local_168);
              if ((pFVar14->Data).ArrayNum == 0) {
                pIVar18 = (IPCGGraphExecutionSource *)&DAT_00000004;
              }
              else {
                pIVar18 = (IPCGGraphExecutionSource *)&DAT_00000004;
              }
            }
            lVar1 = *(longlong *)this;
            if (lVar1 != 0) {
              pIVar18 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar18 | 8);
              local_res18 = ::FString::FString(&local_a8,L"Non-PCG Component");
              if ((*(longlong *)(lVar1 + 0x70) != 0) &&
                 (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x68)), bVar5)) {
                pIVar17 = *(IPCGGraphExecutionSource **)(lVar1 + 0x70);
              }
              PCGLog::GetExecutionSourceName(&local_238,pIVar17,false,local_res18);
            }
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if ((((ulonglong)pIVar18 & 8) != 0) &&
               (pIVar18 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar18 & 0xfffffff7),
               local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_238.Data.AllocatorInstance.Data);
            }
            if ((((ulonglong)pIVar18 & 4) != 0) &&
               (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_168.Data.AllocatorInstance.Data);
            }
            if (local_158.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
            }
            param_1 = local_res10;
            if (local_148.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
              param_1 = local_res10;
            }
          }
          uStack_1d0 = 1;
          local_1d8 = &local_268;
          local_138._12_4_ = uStack_1cc;
          local_138.ArrayNum = 1;
          local_268.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_268.AssetPath.PackageName.Number = 0;
          local_268.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_268.AssetPath.AssetName.Number = 0;
          local_268.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_268.SubPathString.Data.ArrayNum = 0;
          local_268.SubPathString.Data.ArrayMax = 0;
          local_138.DataPtr = local_1d8;
          IPCGAttributeAccessor::SetRange<FSoftObjectPath>
                    ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),&local_138,0,
                     &local_228,StrictType);
          if (local_268.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_268.SubPathString.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_res8);
    if (local_288.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_68.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.ExtractedEntries.AllocatorInstance.Data);
    }
    pFVar2 = (param_1->SubPathString).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    bVar5 = true;
  }
  else {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar8 = PCG::Private::GetTypeNameText
                         (&local_128,*(ushort *)(**(longlong **)((longlong)this + 8) + 10));
      pFVar9 = FText::FromName(&local_118,*(FName **)((longlong)this + 0x20));
      pFVar10 = PCG::Private::GetTypeNameText(&local_108,0xd);
      pFVar11 = FText::FromName(&local_f8,*(FName **)((longlong)this + 0x18));
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_198,L"PCGContext",L"ConversionFailed",
                           L"Parameter \'{0}\' ({1}) cannot be converted from attribute \'{2}\' ({3})"
                          );
      pFVar13 = FTextFormat::FTextFormat(&local_e8,pFVar12,Default);
      pFVar8 = FText::Format<FText,FText,FText,FText>
                         (&local_1a8,pFVar13,pFVar11,pFVar10,pFVar9,pFVar8);
      FText::ToString(pFVar8);
      pIVar18 = pIVar17;
      if (*(FPCGContext **)this != (FPCGContext *)0x0) {
        pFVar14 = FPCGContext::GetTaskName(*(FPCGContext **)this,&local_1b8);
        if ((pFVar14->Data).ArrayNum == 0) {
          pIVar18 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
        else {
          pIVar18 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
      }
      lVar1 = *(longlong *)this;
      if (lVar1 != 0) {
        pIVar18 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar18 | 2);
        pFVar14 = ::FString::FString(&local_d8,L"Non-PCG Component");
        if ((*(longlong *)(lVar1 + 0x70) != 0) &&
           (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x68)), bVar5)) {
          pIVar17 = *(IPCGGraphExecutionSource **)(lVar1 + 0x70);
        }
        PCGLog::GetExecutionSourceName(&local_248,pIVar17,false,pFVar14);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pIVar18 & 2) != 0) &&
         (pIVar18 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar18 & 0xfffffffd),
         local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pIVar18 & 1) != 0) &&
         (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      if (local_1a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
      }
      param_1 = local_res10;
      if (local_198.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
        param_1 = local_res10;
      }
    }
    if (local_288.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_68.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.ExtractedEntries.AllocatorInstance.Data);
    }
    pFVar2 = (param_1->SubPathString).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    bVar5 = false;
  }
  return bVar5;
}

// operator()<FName> @ 149ee3f50

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
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
`FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<FName>(void *this,FName param_1)

{
  IPCGAttributeAccessor *this_00;
  longlong lVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FString *pFVar9;
  IPCGGraphExecutionSource *pIVar10;
  IPCGGraphExecutionSource *pIVar11;
  undefined4 local_res8 [2];
  FName local_res18 [2];
  TArrayView<FName,int> local_158;
  TArrayView<FName_const_,int> local_148;
  IPCGAttributeAccessorKeys local_138;
  undefined8 local_128;
  FString local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FTextFormat local_c0;
  FString local_b0;
  FPCGAttributeAccessorKeysEntries local_a0;
  FPCGAttributeAccessorKeysEntries local_70;
  
  pIVar10 = (IPCGGraphExecutionSource *)0x0;
  local_res8[0] = 0;
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_70,0);
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8);
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_a0,0);
  local_158.ArrayNum = 1;
  local_158.DataPtr = local_res18;
  bVar2 = IPCGAttributeAccessor::GetRange<FName>
                    (this_00,&local_158,0,(IPCGAttributeAccessorKeys *)&local_a0,
                     AllowBroadcastAndConstructible);
  if (local_a0.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.ExtractedEntries.AllocatorInstance.Data);
  }
  if (bVar2) {
    FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_res8);
    local_138._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
    local_128 = *(undefined8 *)((longlong)this + 0x28);
    local_158.DataPtr = local_res18;
    local_138.bIsReadOnly = false;
    local_158.ArrayNum = 1;
    local_148.ArrayNum = 1;
    local_148._12_4_ = local_158._12_4_;
    local_148.DataPtr = local_158.DataPtr;
    IPCGAttributeAccessor::SetRange<FName>
              ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),&local_148,0,
               &local_138,StrictType);
    bVar2 = true;
    FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_res8);
  }
  else {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar3 = PCG::Private::GetTypeNameText
                         (&local_100,*(ushort *)(**(longlong **)((longlong)this + 8) + 10));
      pFVar4 = FText::FromName(&local_f0,*(FName **)((longlong)this + 0x20));
      pFVar5 = PCG::Private::GetTypeNameText(&local_e0,0xc);
      pFVar6 = FText::FromName(&local_d0,*(FName **)((longlong)this + 0x18));
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_148,L"PCGContext",L"ConversionFailed",
                          L"Parameter \'{0}\' ({1}) cannot be converted from attribute \'{2}\' ({3})"
                         );
      pFVar8 = FTextFormat::FTextFormat(&local_c0,pFVar7,Default);
      pFVar3 = FText::Format<FText,FText,FText,FText>(&local_110,pFVar8,pFVar6,pFVar5,pFVar4,pFVar3)
      ;
      FText::ToString(pFVar3);
      pIVar11 = pIVar10;
      if (*(FPCGContext **)this != (FPCGContext *)0x0) {
        pFVar9 = FPCGContext::GetTaskName(*(FPCGContext **)this,&local_120);
        if ((pFVar9->Data).ArrayNum == 0) {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
        else {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
      }
      lVar1 = *(longlong *)this;
      if (lVar1 != 0) {
        pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 | 2);
        pFVar9 = ::FString::FString(&local_b0,L"Non-PCG Component");
        if ((*(longlong *)(lVar1 + 0x70) != 0) &&
           (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x68)), bVar2)) {
          pIVar10 = *(IPCGGraphExecutionSource **)(lVar1 + 0x70);
        }
        PCGLog::GetExecutionSourceName((FString *)&local_158,pIVar10,false,pFVar9);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pIVar11 & 2) != 0) &&
         (pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 & 0xfffffffd),
         local_158.DataPtr != (FName *)0x0)) {
        FMemory::Free(local_158.DataPtr);
      }
      if ((((ulonglong)pIVar11 & 1) != 0) &&
         (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (local_110.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
      if (local_148.DataPtr != (FName *)0x0) {
        (**(code **)((longlong)*local_148.DataPtr + 0x10))();
      }
    }
    bVar2 = false;
  }
  if (local_70.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar2;
}

// operator()<FString> @ 149ee42a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
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
`FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<FString>(void *this,FString *param_1)

{
  IPCGAttributeAccessor *this_00;
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FString *pFVar10;
  IPCGGraphExecutionSource *pIVar11;
  IPCGGraphExecutionSource *pIVar12;
  undefined4 local_res8 [2];
  FString *local_res10;
  TArrayView<FString,int> local_168;
  ITextData local_158;
  undefined8 local_150;
  TArrayView<FString_const_,int> local_148;
  IPCGAttributeAccessorKeys local_138;
  undefined8 local_128;
  FString local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FTextFormat local_c0;
  FString local_b0;
  FPCGAttributeAccessorKeysEntries local_a0;
  FPCGAttributeAccessorKeysEntries local_70;
  
  pIVar11 = (IPCGGraphExecutionSource *)0x0;
  local_res8[0] = 0;
  local_res10 = param_1;
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_70,0);
  local_158 = (ITextData)0x0;
  local_150 = 0;
  this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8);
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_a0,0);
  local_168.ArrayNum = 1;
  local_168.DataPtr = (FString *)&local_158;
  bVar3 = IPCGAttributeAccessor::GetRange<FString>
                    (this_00,&local_168,0,(IPCGAttributeAccessorKeys *)&local_a0,
                     AllowBroadcastAndConstructible);
  if (local_a0.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.ExtractedEntries.AllocatorInstance.Data);
  }
  if (!bVar3) {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar4 = PCG::Private::GetTypeNameText
                         (&local_100,*(ushort *)(**(longlong **)((longlong)this + 8) + 10));
      pFVar5 = FText::FromName(&local_f0,*(FName **)((longlong)this + 0x20));
      pFVar6 = PCG::Private::GetTypeNameText(&local_e0,9);
      pFVar7 = FText::FromName(&local_d0,*(FName **)((longlong)this + 0x18));
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_148,L"PCGContext",L"ConversionFailed",
                          L"Parameter \'{0}\' ({1}) cannot be converted from attribute \'{2}\' ({3})"
                         );
      pFVar9 = FTextFormat::FTextFormat(&local_c0,pFVar8,Default);
      pFVar4 = FText::Format<FText,FText,FText,FText>(&local_110,pFVar9,pFVar7,pFVar6,pFVar5,pFVar4)
      ;
      FText::ToString(pFVar4);
      pIVar12 = pIVar11;
      if (*(FPCGContext **)this != (FPCGContext *)0x0) {
        pFVar10 = FPCGContext::GetTaskName(*(FPCGContext **)this,&local_120);
        if ((pFVar10->Data).ArrayNum == 0) {
          pIVar12 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
        else {
          pIVar12 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
      }
      lVar1 = *(longlong *)this;
      if (lVar1 != 0) {
        pIVar12 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar12 | 2);
        pFVar10 = ::FString::FString(&local_b0,L"Non-PCG Component");
        if ((*(longlong *)(lVar1 + 0x70) != 0) &&
           (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x68)), bVar3)) {
          pIVar11 = *(IPCGGraphExecutionSource **)(lVar1 + 0x70);
        }
        PCGLog::GetExecutionSourceName((FString *)&local_168,pIVar11,false,pFVar10);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pIVar12 & 2) != 0) &&
         (pIVar12 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar12 & 0xfffffffd),
         (ITextData *)local_168.DataPtr != (ITextData *)0x0)) {
        FMemory::Free(local_168.DataPtr);
      }
      if ((((ulonglong)pIVar12 & 1) != 0) &&
         (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (local_110.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
      param_1 = local_res10;
      if (local_148.DataPtr != (FString *)0x0) {
        (**(code **)(((local_148.DataPtr)->Data).AllocatorInstance.Data + 0x10))();
        param_1 = local_res10;
      }
    }
    if (local_158 != (ITextData)0x0) {
      FMemory::Free((void *)local_158);
    }
    if (local_70.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.ExtractedEntries.AllocatorInstance.Data);
    }
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    return false;
  }
  FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_res8);
  local_138._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
  local_128 = *(undefined8 *)((longlong)this + 0x28);
  local_168.DataPtr = (FString *)&local_158;
  local_138.bIsReadOnly = false;
  local_168.ArrayNum = 1;
  local_148.ArrayNum = 1;
  local_148._12_4_ = local_168._12_4_;
  local_148.DataPtr = local_168.DataPtr;
  IPCGAttributeAccessor::SetRange<FString>
            ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),&local_148,0,
             &local_138,StrictType);
  FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_res8);
  if (local_158 != (ITextData)0x0) {
    FMemory::Free((void *)local_158);
  }
  if (local_70.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.ExtractedEntries.AllocatorInstance.Data);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return true;
}

// operator()<__int64> @ 149ee4620

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
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
`FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<__int64>(void *this,long64 param_1)

{
  IPCGAttributeAccessor *this_00;
  longlong lVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FString *pFVar9;
  IPCGGraphExecutionSource *pIVar10;
  IPCGGraphExecutionSource *pIVar11;
  undefined4 local_res8 [2];
  ITextData local_res18 [2];
  TArrayView<__int64,int> local_158;
  TArrayView<__int64_const_,int> local_148;
  IPCGAttributeAccessorKeys local_138;
  undefined8 local_128;
  FString local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FTextFormat local_c0;
  FString local_b0;
  FPCGAttributeAccessorKeysEntries local_a0;
  FPCGAttributeAccessorKeysEntries local_70;
  
  pIVar10 = (IPCGGraphExecutionSource *)0x0;
  local_res8[0] = 0;
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_70,0);
  local_res18[0] = (ITextData)0x0;
  this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8);
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_a0,0);
  local_158.ArrayNum = 1;
  local_158.DataPtr = (long64 *)local_res18;
  bVar2 = IPCGAttributeAccessor::GetRange<__int64>
                    (this_00,&local_158,0,(IPCGAttributeAccessorKeys *)&local_a0,
                     AllowBroadcastAndConstructible);
  if (local_a0.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.ExtractedEntries.AllocatorInstance.Data);
  }
  if (bVar2) {
    FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_res8);
    local_138._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
    local_128 = *(undefined8 *)((longlong)this + 0x28);
    local_158.DataPtr = (long64 *)local_res18;
    local_138.bIsReadOnly = false;
    local_158.ArrayNum = 1;
    local_148.ArrayNum = 1;
    local_148._12_4_ = local_158._12_4_;
    local_148.DataPtr = local_158.DataPtr;
    IPCGAttributeAccessor::SetRange<__int64>
              ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),&local_148,0,
               &local_138,StrictType);
    bVar2 = true;
    FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_res8);
  }
  else {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar3 = PCG::Private::GetTypeNameText
                         (&local_100,*(ushort *)(**(longlong **)((longlong)this + 8) + 10));
      pFVar4 = FText::FromName(&local_f0,*(FName **)((longlong)this + 0x20));
      pFVar5 = PCG::Private::GetTypeNameText(&local_e0,3);
      pFVar6 = FText::FromName(&local_d0,*(FName **)((longlong)this + 0x18));
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_148,L"PCGContext",L"ConversionFailed",
                          L"Parameter \'{0}\' ({1}) cannot be converted from attribute \'{2}\' ({3})"
                         );
      pFVar8 = FTextFormat::FTextFormat(&local_c0,pFVar7,Default);
      pFVar3 = FText::Format<FText,FText,FText,FText>(&local_110,pFVar8,pFVar6,pFVar5,pFVar4,pFVar3)
      ;
      FText::ToString(pFVar3);
      pIVar11 = pIVar10;
      if (*(FPCGContext **)this != (FPCGContext *)0x0) {
        pFVar9 = FPCGContext::GetTaskName(*(FPCGContext **)this,&local_120);
        if ((pFVar9->Data).ArrayNum == 0) {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
        else {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
      }
      lVar1 = *(longlong *)this;
      if (lVar1 != 0) {
        pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 | 2);
        pFVar9 = ::FString::FString(&local_b0,L"Non-PCG Component");
        if ((*(longlong *)(lVar1 + 0x70) != 0) &&
           (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x68)), bVar2)) {
          pIVar10 = *(IPCGGraphExecutionSource **)(lVar1 + 0x70);
        }
        PCGLog::GetExecutionSourceName((FString *)&local_158,pIVar10,false,pFVar9);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pIVar11 & 2) != 0) &&
         (pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 & 0xfffffffd),
         (ITextData *)local_158.DataPtr != (ITextData *)0x0)) {
        FMemory::Free(local_158.DataPtr);
      }
      if ((((ulonglong)pIVar11 & 1) != 0) &&
         (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (local_110.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
      if ((ITextData *)local_148.DataPtr != (ITextData *)0x0) {
        (**(code **)(*local_148.DataPtr + 0x10))();
      }
    }
    bVar2 = false;
  }
  if (local_70.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar2;
}

// operator()<bool> @ 149ee4970

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
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
`FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<bool>(void *this,bool param_1)

{
  IPCGAttributeAccessor *this_00;
  longlong lVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FString *pFVar9;
  IPCGGraphExecutionSource *pIVar10;
  IPCGGraphExecutionSource *pIVar11;
  ITextData local_res8;
  FGCScopeGuard local_res18 [16];
  TArrayView<bool,int> local_158;
  TArrayView<bool_const_,int> local_148;
  IPCGAttributeAccessorKeys local_138;
  undefined8 local_128;
  FString local_120;
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FTextFormat local_c0;
  FString local_b0;
  FPCGAttributeAccessorKeysEntries local_a0;
  FPCGAttributeAccessorKeysEntries local_70;
  
  pIVar10 = (IPCGGraphExecutionSource *)0x0;
  local_res8._0_4_ = 0;
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_70,0);
  local_res8._0_4_ = local_res8._0_4_ & 0xffffff00;
  this_00 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8);
  FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_a0,0);
  local_158.ArrayNum = 1;
  local_158.DataPtr = (bool *)&local_res8;
  bVar2 = IPCGAttributeAccessor::GetRange<bool>
                    (this_00,&local_158,0,(IPCGAttributeAccessorKeys *)&local_a0,
                     AllowBroadcastAndConstructible);
  if (local_a0.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.ExtractedEntries.AllocatorInstance.Data);
  }
  if (bVar2) {
    FGCScopeGuard::FGCScopeGuard(local_res18);
    local_138._padding_ = (longlong)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
    local_128 = *(undefined8 *)((longlong)this + 0x28);
    local_158.DataPtr = (bool *)&local_res8;
    local_138.bIsReadOnly = false;
    local_158.ArrayNum = 1;
    local_148.ArrayNum = 1;
    local_148._12_4_ = local_158._12_4_;
    local_148.DataPtr = local_158.DataPtr;
    IPCGAttributeAccessor::SetRange<bool>
              ((IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x10),&local_148,0,
               &local_138,StrictType);
    bVar2 = true;
    FGCScopeGuard::~FGCScopeGuard(local_res18);
  }
  else {
    if (2 < (byte)LogPCG._0_1_) {
      pFVar3 = PCG::Private::GetTypeNameText
                         (&local_100,*(ushort *)(**(longlong **)((longlong)this + 8) + 10));
      pFVar4 = FText::FromName(&local_f0,*(FName **)((longlong)this + 0x20));
      pFVar5 = PCG::Private::GetTypeNameText(&local_e0,10);
      pFVar6 = FText::FromName(&local_d0,*(FName **)((longlong)this + 0x18));
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_148,L"PCGContext",L"ConversionFailed",
                          L"Parameter \'{0}\' ({1}) cannot be converted from attribute \'{2}\' ({3})"
                         );
      pFVar8 = FTextFormat::FTextFormat(&local_c0,pFVar7,Default);
      pFVar3 = FText::Format<FText,FText,FText,FText>(&local_110,pFVar8,pFVar6,pFVar5,pFVar4,pFVar3)
      ;
      FText::ToString(pFVar3);
      pIVar11 = pIVar10;
      if (*(FPCGContext **)this != (FPCGContext *)0x0) {
        pFVar9 = FPCGContext::GetTaskName(*(FPCGContext **)this,&local_120);
        if ((pFVar9->Data).ArrayNum == 0) {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
        else {
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000001;
        }
      }
      lVar1 = *(longlong *)this;
      if (lVar1 != 0) {
        pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 | 2);
        pFVar9 = ::FString::FString(&local_b0,L"Non-PCG Component");
        if ((*(longlong *)(lVar1 + 0x70) != 0) &&
           (bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar1 + 0x68)), bVar2)) {
          pIVar10 = *(IPCGGraphExecutionSource **)(lVar1 + 0x70);
        }
        PCGLog::GetExecutionSourceName((FString *)&local_158,pIVar10,false,pFVar9);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pIVar11 & 2) != 0) &&
         (pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 & 0xfffffffd),
         (ITextData *)local_158.DataPtr != (ITextData *)0x0)) {
        FMemory::Free(local_158.DataPtr);
      }
      if ((((ulonglong)pIVar11 & 1) != 0) &&
         (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (local_110.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
      if ((ITextData *)local_148.DataPtr != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_148.DataPtr + 0x10))();
      }
    }
    bVar2 = false;
  }
  if (local_70.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.ExtractedEntries.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetInputSettings<UPCGSettings> @ 149ee8440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSettings * __thiscall FPCGContext::GetInputSettings<UPCGSettings>(FPCGContext *this)

{
  UPCGNode *this_00;
  UPCGSettings *pUVar1;
  
  pUVar1 = (this->SettingsWithOverride).field0_0x0.DebugPtr;
  if (pUVar1 == (UPCGSettings *)0x0) {
    this_00 = this->Node;
    if (this_00 != (UPCGNode *)0x0) {
      pUVar1 = UPCGNode::GetSettings(this_00);
      if (pUVar1 != (UPCGSettings *)0x0) {
        pUVar1 = UPCGNode::GetSettings(this_00);
        pUVar1 = FPCGDataCollection::GetSettings(&this->InputData,pUVar1);
        return pUVar1;
      }
    }
    pUVar1 = FPCGDataCollection::GetSettings<UPCGSettings>(&this->InputData);
  }
  return pUVar1;
}

// ~FPCGContext @ 149eef700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGContext::~FPCGContext(FPCGContext *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FPCGContextHandle *pFVar4;
  ForElementType<FSetElementId> FVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  FPCGGraphExecutor *this_00;
  atomic<int> aVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FPCGContext__6B_;
  FPCGDataCollection::Reset(&this->InputData);
  FPCGDataCollection::Reset(&this->OutputData);
  pTVar3 = (this->GraphExecutor).WeakReferenceCount.ReferenceController;
  pTVar9 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar3->SharedReferenceCount;
    do {
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_149eef765;
      LOCK();
      aVar8 = pTVar3->SharedReferenceCount;
      bVar10 = aVar2 == aVar8;
      if (bVar10) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar8 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar8;
    } while (!bVar10);
    this_00 = (this->GraphExecutor).Object;
    pTVar9 = pTVar3;
    if (this_00 != (FPCGGraphExecutor *)0x0) {
      FPCGGraphExecutor::RemoveReleasedContextForGC(this_00,this);
    }
  }
LAB_149eef765:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if ((this->Handle).Object != (FPCGContextHandle *)0x0) {
    `FPCGContext::~FPCGContext'::__l2::<lambda_1>::operator()(local_res8);
  }
  pFVar4 = (this->Handle).Object;
  if (pFVar4 != (FPCGContextHandle *)0x0) {
    pFVar4->Context = (FPCGContext *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StackHandle).StackContext.SharedReferenceCount.ReferenceController);
  pTVar3 = (this->GraphExecutor).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Handle).SharedReferenceCount.ReferenceController);
  (this->AsyncObjects).HashSize = 0;
  FVar5 = (this->AsyncObjects).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AsyncObjects).Elements);
  pFVar6 = (this->OverriddenParams).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  DestructItems<TTuple<FPCGDataCollection,FPCGDataCollection>,int>
            ((TTuple<FPCGDataCollection,FPCGDataCollection> *)
             (this->CachedInputToOutputInternalResults).AllocatorInstance.Data,
             (this->CachedInputToOutputInternalResults).ArrayNum);
  pFVar6 = (this->CachedInputToOutputInternalResults).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  (this->DynamicDependencies).HashSize = 0;
  FVar5 = (this->DynamicDependencies).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DynamicDependencies).Elements);
  *(undefined4 *)&(this->AsyncState).ChunkToNumElementsWrittenMap.field_0x48 = 0;
  pvVar7 = *(void **)&(this->AsyncState).ChunkToNumElementsWrittenMap.field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->AsyncState).ChunkToNumElementsWrittenMap);
  pFVar6 = (this->AsyncState).TasksChunksStartEnd.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->OutputData).DataCrcs.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(this->OutputData).TaggedData.AllocatorInstance.Data,
             (this->OutputData).TaggedData.ArrayNum);
  pFVar6 = (this->OutputData).TaggedData.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->InputData).DataCrcs.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(this->InputData).TaggedData.AllocatorInstance.Data,
             (this->InputData).TaggedData.ArrayNum);
  pFVar6 = (this->InputData).TaggedData.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return;
}

// AddStructReferencedObjects @ 149ef4840

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
FPCGContext::AddStructReferencedObjects(FPCGContext *this,FReferenceCollector *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  FPCGDataCollection::AddReferences(&this->InputData,param_1);
  FPCGDataCollection::AddReferences(&this->OutputData,param_1);
  iVar1 = (this->CachedInputToOutputInternalResults).ArrayNum;
  pFVar5 = (this->CachedInputToOutputInternalResults).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x60;
  while( true ) {
    if ((this->CachedInputToOutputInternalResults).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<FPCGDataCollection,FPCGDataCollection>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    iVar2 = *(int *)(pFVar5 + 8);
    plVar3 = *(longlong **)pFVar5;
    plVar4 = plVar3 + (longlong)iVar2 * 0xf;
    while( true ) {
      if (*(int *)(pFVar5 + 8) != iVar2) {
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (plVar3 == plVar4) break;
      if (*plVar3 != 0) {
        (**(code **)(param_1->_padding_ + 0x88))(param_1,plVar3);
      }
      plVar3 = plVar3 + 0xf;
    }
    iVar2 = *(int *)(pFVar5 + 0x38);
    plVar3 = *(longlong **)(pFVar5 + 0x30);
    plVar4 = plVar3 + (longlong)iVar2 * 0xf;
    while( true ) {
      if (*(int *)(pFVar5 + 0x38) != iVar2) {
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (plVar3 == plVar4) break;
      if (*plVar3 != 0) {
        (**(code **)(param_1->_padding_ + 0x88))(param_1,plVar3);
      }
      plVar3 = plVar3 + 0xf;
    }
    pFVar5 = pFVar5 + 0x60;
  }
  if ((this->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) {
    (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->SettingsWithOverride,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000149ef4989. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,param_1);
  return;
}

// ClearOutputData @ 149ef8140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGContext::ClearOutputData(FPCGContext *this,ulong64 param_1)

{
  FPCGGraphExecutor *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = (this->GraphExecutor).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_149ef8170;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->GraphExecutor).Object;
    if (this_00 != (FPCGGraphExecutor *)0x0) {
      FPCGGraphExecutor::ClearOutputData(this_00,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_149ef8170:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GetComponentName @ 149eff430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
FPCGContext::GetComponentName(FPCGContext *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString *pFVar2;
  IPCGGraphExecutionSource *pIVar3;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,L"Non-PCG Component");
  if ((this->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ExecutionSource);
    if (bVar1) {
      pIVar3 = (this->ExecutionSource).InterfaceInstance;
      goto LAB_149eff475;
    }
  }
  pIVar3 = (IPCGGraphExecutionSource *)0x0;
LAB_149eff475:
  PCGLog::GetExecutionSourceName(__return_storage_ptr__,pIVar3,false,pFVar2);
  return __return_storage_ptr__;
}

// GetDefaultPointDataClass @ 149eff730

TSubclassOf<UPCGBasePointData> __cdecl FPCGContext::GetDefaultPointDataClass(void)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  longlong lVar3;
  UClass *pUVar4;
  TObjectPtr<UClass> in_RCX;
  
  pTVar1 = CVarPCGEnablePointArrayData.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 1;
      goto LAB_149eff75f;
    }
  }
  lVar3 = 0;
LAB_149eff75f:
  if (pTVar1->ShadowedValue[lVar3] == false) {
    pUVar4 = Z_Construct_UClass_UPCGPointData_NoRegister();
  }
  else {
    pUVar4 = Z_Construct_UClass_UPCGPointArrayData_NoRegister();
  }
  *(UClass **)in_RCX.field0_0x0 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  return (TSubclassOf<UPCGBasePointData>)in_RCX.field0_0x0;
}

// GetExecutionSourceName @ 149effb50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
FPCGContext::GetExecutionSourceName(FPCGContext *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  FString *pFVar2;
  IPCGGraphExecutionSource *pIVar3;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,L"Non-PCG Component");
  if ((this->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ExecutionSource);
    if (bVar1) {
      pIVar3 = (this->ExecutionSource).InterfaceInstance;
      goto LAB_149effb95;
    }
  }
  pIVar3 = (IPCGGraphExecutionSource *)0x0;
LAB_149effb95:
  PCGLog::GetExecutionSourceName(__return_storage_ptr__,pIVar3,false,pFVar2);
  return __return_storage_ptr__;
}

// GetFromCache @ 149effe60

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
FPCGContext::GetFromCache
          (FPCGContext *this,FPCGGetFromCacheParams *param_1,FPCGDataCollection *param_2)

{
  FPCGGraphExecutor *pFVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->GraphExecutor).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_149effe90;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    pFVar1 = (this->GraphExecutor).Object;
    if (pFVar1 != (FPCGGraphExecutor *)0x0) {
      uVar3 = (**(code **)(pFVar1->GraphCache)._padding_)();
      goto LAB_149effe93;
    }
  }
LAB_149effe90:
  uVar3 = 0;
LAB_149effe93:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (bool)uVar3;
}

// GetGraphExecutionTaskId @ 149f006e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall FPCGContext::GetGraphExecutionTaskId(FPCGContext *this)

{
  int iVar1;
  FPCGStackContext *pFVar2;
  code *pcVar3;
  bool bVar4;
  FPCGStack *pFVar5;
  ulong64 uVar6;
  
  pFVar2 = (this->StackHandle).StackContext.Object;
  if (((pFVar2 != (FPCGStackContext *)0x0) && (iVar1 = (this->StackHandle).StackIndex, -1 < iVar1))
     && (iVar1 < (pFVar2->Stacks).ArrayNum)) {
    pFVar5 = FPCGStackContext::GetStack((this->StackHandle).StackContext.Object,iVar1);
    if (pFVar5 != (FPCGStack *)0x0) {
      return pFVar5->GraphExecutionTaskId;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1244032200635056229>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGContext.cpp"
                     ,0x65,"StackPtr");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  return 0xffffffffffffffff;
}

// GetInputSettingsInterface @ 149f014f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSettingsInterface * __thiscall FPCGContext::GetInputSettingsInterface(FPCGContext *this)

{
  UPCGSettingsInterface *pUVar1;
  
  if (this->Node != (UPCGNode *)0x0) {
    pUVar1 = FPCGDataCollection::GetSettingsInterface
                       (&this->InputData,(this->Node->SettingsInterface).field0_0x0.DebugPtr);
    return pUVar1;
  }
  pUVar1 = FPCGDataCollection::GetSettingsInterface(&this->InputData);
  return pUVar1;
}

// GetOutputData @ 149f030d0

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
FPCGContext::GetOutputData(FPCGContext *this,ulong64 param_1,FPCGDataCollection *param_2)

{
  FPCGGraphExecutor *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = (this->GraphExecutor).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_149f03100;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->GraphExecutor).Object;
    if (this_00 != (FPCGGraphExecutor *)0x0) {
      bVar4 = FPCGGraphExecutor::GetOutputData(this_00,param_1,param_2);
      goto LAB_149f03103;
    }
  }
LAB_149f03100:
  bVar4 = false;
LAB_149f03103:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return bVar4;
}

// GetSeed @ 149f04aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FPCGContext::GetSeed(FPCGContext *this)

{
  IPCGGraphExecutionSource *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UPCGSettings *this_00;
  longlong *plVar5;
  TWeakInterfacePtr<IPCGGraphExecutionSource> *this_01;
  
  this_00 = GetInputSettings<UPCGSettings>(this);
  pIVar1 = (this->ExecutionSource).InterfaceInstance;
  this_01 = &this->ExecutionSource;
  if (this_00 != (UPCGSettings *)0x0) {
    if ((pIVar1 != (IPCGGraphExecutionSource *)0x0) &&
       (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01), bVar3)) {
      iVar4 = UPCGSettings::GetSeed(this_00,(this->ExecutionSource).InterfaceInstance);
      return iVar4;
    }
    iVar4 = UPCGSettings::GetSeed(this_00,(IPCGGraphExecutionSource *)0x0);
    return iVar4;
  }
  if (pIVar1 == (IPCGGraphExecutionSource *)0x0) {
    return 0x2a;
  }
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
  if (bVar3) {
    if ((((this->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
        (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01), !bVar3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                           ,0x8d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    plVar5 = (longlong *)
             (**(code **)((longlong)*(this->ExecutionSource).InterfaceInstance + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x000149f04b65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,*(code **)(*plVar5 + 0x10));
    return iVar4;
  }
  return 0x2a;
}

// GetTargetActor @ 149f059a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AActor * __thiscall FPCGContext::GetTargetActor(FPCGContext *this,UPCGSpatialData *param_1)

{
  int iVar1;
  IPCGGraphExecutionSource *pIVar2;
  bool bVar3;
  UObject *pUVar4;
  AActor *pAVar5;
  longlong lVar6;
  UClass *pUVar7;
  
  if (param_1 != (UPCGSpatialData *)0x0) {
    pUVar4 = FWeakObjectPtr::Get(&(param_1->TargetActor).WeakPtr);
    if (pUVar4 != (UObject *)0x0) {
      pAVar5 = (AActor *)FWeakObjectPtr::Get(&(param_1->TargetActor).WeakPtr);
      return pAVar5;
    }
  }
  if ((this->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ExecutionSource);
    if ((bVar3) &&
       (pIVar2 = (this->ExecutionSource).InterfaceInstance,
       pIVar2 != (IPCGGraphExecutionSource *)0x0)) {
      lVar6 = (**(code **)((longlong)*pIVar2 + 8))();
      if (lVar6 != 0) {
        pUVar7 = UPCGComponent::StaticClass();
        iVar1 = (int)pUVar7->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar7->_padding_)) {
          return *(AActor **)(lVar6 + 0xa8);
        }
      }
    }
  }
  return (AActor *)0x0;
}

// GetTaskName @ 149f05a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall FPCGContext::GetTaskName(FPCGContext *this,FString *__return_storage_ptr__)

{
  UPCGNode *pUVar1;
  bool bVar2;
  longlong lVar3;
  UPCGSettings *pUVar4;
  undefined8 *puVar5;
  int iVar6;
  void *_Src;
  FName local_res8;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  TStringView<wchar_t> local_28;
  
  pUVar1 = this->Node;
  if (pUVar1 == (UPCGNode *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"Anonymous task");
    return __return_storage_ptr__;
  }
  lVar3 = 0x28;
  if (pUVar1->NodeTitle == (FName)0x0) {
    lVar3 = 0x18;
  }
  local_res8 = *(FName *)((longlong)&pUVar1->_padding_ + lVar3);
  pUVar4 = GetInputSettings<UPCGSettings>(this);
  if (pUVar4 == (UPCGSettings *)0x0) {
    _Src = (void *)0x0;
    iVar6 = 0;
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(pUVar4->_padding_ + 0x3d0))(pUVar4,&local_28);
    _Src = (void *)*puVar5;
    *puVar5 = 0;
    iVar6 = *(int *)(puVar5 + 1);
    puVar5[1] = 0;
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
  if (1 < iVar6) {
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = iVar6;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar6,0,&local_38,iVar6,&local_2c);
    memcpy(local_38.Data,_Src,(longlong)iVar6 * 2);
    local_28.Size = local_30 + -1;
    if (local_30 == 0) {
      local_28.Size = 0;
    }
    local_28.DataPtr = (wchar_t *)local_38.Data;
    bVar2 = ::FName::Equals(local_res8,&local_28);
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    if (!bVar2) {
      ::FName::ToString(&local_res8,(FString *)&local_28);
      ::FString::PrintfImpl(__return_storage_ptr__,L"%s (%s)");
      if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
      goto LAB_149f05be8;
    }
  }
  ::FName::ToString(&local_res8,__return_storage_ptr__);
LAB_149f05be8:
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return __return_storage_ptr__;
}

// InitFromParams @ 149f06930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGContext::InitFromParams(FPCGContext *this,FPCGInitializeElementParams *param_1)

{
  int iVar1;
  IPCGGraphExecutionSource *pIVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *local_res8;
  
  pIVar2 = (param_1->ExecutionSource).InterfaceInstance;
  (this->ExecutionSource).ObjectInstance.WeakPtr = (param_1->ExecutionSource).ObjectInstance.WeakPtr
  ;
  (this->ExecutionSource).InterfaceInstance = pIVar2;
  FPCGDataCollection::operator=(&this->InputData,param_1->InputData);
  this->Node = param_1->Node;
  if ((this->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ExecutionSource);
    if ((bVar3) &&
       (pIVar2 = (this->ExecutionSource).InterfaceInstance,
       pIVar2 != (IPCGGraphExecutionSource *)0x0)) {
      local_res8 = (UObject *)(**(code **)((longlong)*pIVar2 + 8))();
      if (local_res8 != (UObject *)0x0) {
        pUVar4 = UPCGComponent::StaticClass();
        iVar1 = (int)pUVar4->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&local_res8->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&local_res8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar4->_padding_)) goto LAB_149f069b4;
      }
    }
  }
  local_res8 = (UObject *)0x0;
LAB_149f069b4:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->SourceComponent).WeakPtr,(FObjectPtr)&local_res8);
  return;
}

// InitializeGraphExecutor @ 149f06d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FPCGContext::InitializeGraphExecutor(FPCGContext *this,FPCGContext *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FPCGGraphExecutor *pFVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  if (param_1 == (FPCGContext *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGContext.cpp"
                       ,0x284,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar3 = (this->GraphExecutor).WeakReferenceCount.ReferenceController;
  pFVar4 = (this->GraphExecutor).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (param_1->GraphExecutor).WeakReferenceCount.ReferenceController;
  (param_1->GraphExecutor).Object = pFVar4;
  (param_1->GraphExecutor).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  return;
}

// InitializeSettings @ 149f06dd0

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

void __thiscall FPCGContext::InitializeSettings(FPCGContext *this,bool param_1)

{
  ulonglong uVar1;
  UPCGNode *this_00;
  longlong lVar2;
  code *pcVar3;
  FPCGContext *pFVar4;
  undefined8 this_01;
  bool bVar5;
  uint uVar6;
  UPCGSettings *pUVar7;
  longlong *plVar8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  UObject *pUVar11;
  UPackage *pUVar12;
  UPCGSettings *pUVar13;
  UClass *pUVar14;
  byte bVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  FPCGSettingsOverridableParam *this_02;
  uint uVar19;
  uint *puVar20;
  FPCGSettingsOverridableParam *pFVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  undefined1 auStackY_2c8 [32];
  FGCScopeGuard local_297;
  char local_296;
  undefined1 local_295;
  FGCScopeGuard local_294;
  undefined1 local_293 [3];
  FPCGContext *local_290;
  UPCGSettings *local_288;
  undefined1 local_280 [32];
  FSoftObjectPath local_260;
  int local_240;
  undefined1 local_23c [12];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_230;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_220;
  longlong *local_210;
  uint uStack_208;
  uint uStack_204;
  TBitArray<FDefaultBitArrayAllocator> *local_200;
  undefined4 uStack_1f8;
  uint uStack_1f4;
  uint local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  FSoftObjectPath *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  TArrayView<FSoftObjectPath,int> local_198;
  FPCGAttributeAccessorKeysEntries local_188;
  undefined4 local_13c;
  undefined1 local_138 [128];
  void *local_b8;
  undefined4 local_b0;
  TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
  *local_a8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  bVar24 = CpuChannel->Enabled < 0;
  local_290 = this;
  if (bVar24) {
    local_296 = '\0';
  }
  else {
    local_296 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId189,"FPCGContext::InitializeSettings",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGContext.cpp"
               ,0xbd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId189);
  }
  cVar16 = !bVar24;
  if ((this->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) goto LAB_149f0758e;
  *(undefined1 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9638) = 1;
  this_00 = this->Node;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar7 = UPCGNode::GetSettings(this_00), pUVar7 == (UPCGSettings *)0x0)) {
    local_288 = FPCGDataCollection::GetSettings<UPCGSettings>(&this->InputData);
  }
  else {
    pUVar7 = UPCGNode::GetSettings(this_00);
    local_288 = FPCGDataCollection::GetSettings(&this->InputData,pUVar7);
  }
  if (((local_288 != (UPCGSettings *)0x0) && ((char)local_288->_padding_ != '\0')) &&
     (plVar8 = (longlong *)(**(code **)(local_288->_padding_ + 0x480))(local_288),
     (int)plVar8[1] != 0)) {
    pTVar9 = FPCGDataCollection::GetParamsByPin
                       (&this->InputData,&local_230,&PCGPinConstants::DefaultParamsLabel);
    iVar18 = pTVar9->ArrayNum;
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_230.AllocatorInstance.Data,local_230.ArrayNum);
    if ((FPCGTaggedData *)local_230.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_230.AllocatorInstance.Data);
    }
    iVar17 = 0;
    while (iVar18 == 0) {
      if ((int)plVar8[1] <= iVar17) goto LAB_149f07562;
      if ((iVar17 < 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar10 = (longlong)iVar17;
      iVar17 = iVar17 + 1;
      pTVar9 = FPCGDataCollection::GetParamsByPin
                         (&this->InputData,&local_220,(FName *)(lVar10 * 0x88 + *plVar8));
      iVar18 = pTVar9->ArrayNum;
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_220.AllocatorInstance.Data,local_220.ArrayNum);
      if ((FPCGTaggedData *)local_220.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_220.AllocatorInstance.Data);
      }
    }
    uVar6 = 1;
    if (local_288->bHasAnyOverridableHardReferences != false) {
      lVar10 = plVar8[1];
      this_02 = (FPCGSettingsOverridableParam *)*plVar8;
      pFVar21 = this_02 + (int)lVar10;
      do {
        if ((int)plVar8[1] != (int)lVar10) {
          local_295 = 0;
          `TCheckedPointerIterator<FPCGSettingsOverridableParam_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_295);
        }
        this = local_290;
        if (this_02 == pFVar21) break;
        bVar24 = FPCGSettingsOverridableParam::IsHardReferenceOverride(this_02);
        if (bVar24) {
          local_280._8_4_ = 0;
          local_280._12_4_ = 0;
          local_280[0x10] = false;
          local_280[0x11] = false;
          local_280._18_6_ = 0;
          local_280._24_4_ = 0;
          PCGAttributeAccessorHelpers::CreateConstAccessorForOverrideParamWithResult
                    ((FPCGDataCollection *)local_280,
                     (FPCGSettingsOverridableParam *)&local_290->InputData,
                     (AccessorParamResult *)this_02);
          this_01 = local_280._0_8_;
          if ((IPCGAttributeAccessor *)local_280._0_8_ != (IPCGAttributeAccessor *)0x0) {
            local_260.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_260.AssetPath.PackageName.Number = 0;
            local_260.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_260.AssetPath.AssetName.Number = 0;
            local_260.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_260.SubPathString.Data.ArrayNum = 0;
            local_260.SubPathString.Data.ArrayMax = 0;
            FPCGAttributeAccessorKeysEntries::FPCGAttributeAccessorKeysEntries(&local_188,0);
            local_1a8 = &local_260;
            uStack_1a0 = 1;
            local_198._12_4_ = uStack_19c;
            local_198.ArrayNum = 1;
            local_198.DataPtr = local_1a8;
            bVar24 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                               ((IPCGAttributeAccessor *)this_01,&local_198,0,
                                (IPCGAttributeAccessorKeys *)&local_188,
                                AllowBroadcastAndConstructible);
            if (local_188.ExtractedEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_188.ExtractedEntries.AllocatorInstance.Data);
            }
            if (bVar24) {
              FGCScopeGuard::FGCScopeGuard(&local_297);
              pUVar11 = FSoftObjectPath::ResolveObject(&local_260);
              this = local_290;
              if (pUVar11 == (UObject *)0x0) {
                local_290->bOverrideSettingsOnMainThread = true;
                FGCScopeGuard::~FGCScopeGuard(&local_297);
                if (local_260.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_260.SubPathString.Data.AllocatorInstance.Data);
                }
                if ((IPCGAttributeAccessor *)local_280._0_8_ != (IPCGAttributeAccessor *)0x0) {
                  (*(code *)**(undefined8 **)local_280._0_8_)(local_280._0_8_,1);
                }
                break;
              }
              FGCScopeGuard::~FGCScopeGuard(&local_297);
            }
            if (local_260.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_260.SubPathString.Data.AllocatorInstance.Data);
            }
            if ((IPCGAttributeAccessor *)local_280._0_8_ != (IPCGAttributeAccessor *)0x0) {
              (*(code *)**(undefined8 **)local_280._0_8_)(local_280._0_8_,1);
            }
          }
        }
        this_02 = this_02 + 1;
      } while( true );
    }
    pUVar12 = GetTransientPackage();
    FObjectDuplicationParameters::FObjectDuplicationParameters
              ((FObjectDuplicationParameters *)local_138,(UObject *)local_288,(UObject *)pUVar12);
    local_138._24_4_ =
         local_138._24_4_ &
         (RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|RF_HasExternalPackage|
          RF_WillBeLoaded|RF_ImmutableDefaultObject|RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|
          RF_DuplicateTransient|RF_InheritableComponentTemplate|RF_TextExportTransient|
          RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|
          RF_NewerVersionExists|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_KeepForCooker|
          RF_NeedLoad|RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|
          RF_ArchetypeObject|RF_ClassDefaultObject|RF_MarkAsNative|RF_Standalone|RF_Public);
    pUVar7 = (UPCGSettings *)0x0;
    local_a8 = (TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
                *)local_98;
    local_138._32_4_ = RF_Transient;
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    uVar19 = 0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_138[0x31] = param_1;
    FGCScopeGuard::FGCScopeGuard(&local_294);
    pUVar13 = (UPCGSettings *)StaticDuplicateObjectEx((FObjectDuplicationParameters *)local_138);
    if (pUVar13 == (UPCGSettings *)0x0) {
LAB_149f07232:
      pUVar13 = pUVar7;
    }
    else {
      pUVar14 = Z_Construct_UClass_UPCGSettings_NoRegister();
      iVar18 = (int)pUVar14->_padding_;
      if ((*(int *)(pUVar13->_padding_ + 0x38) < iVar18) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
          &pUVar14->_padding_)) goto LAB_149f07232;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UPCGSettings *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (this->SettingsWithOverride).field0_0x0.DebugPtr = pUVar13;
    FGCScopeGuard::~FGCScopeGuard(&local_294);
    bVar24 = IsInGameThread();
    uVar23 = local_70;
    local_1f0 = 0;
    uStack_1f4 = local_1f0;
    if (local_70 != 0) {
      puVar20 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar20 = local_78;
      }
      uVar22 = *puVar20;
      pUVar13 = pUVar7;
      uVar19 = 0;
      local_1f0 = 0;
      while (uVar22 == 0) {
        uVar19 = (int)pUVar7 + 1;
        pUVar7 = (UPCGSettings *)(ulonglong)uVar19;
        local_1f0 = (int)pUVar13 + 0x20;
        pUVar13 = (UPCGSettings *)(ulonglong)local_1f0;
        uStack_1f4 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
        goto LAB_149f072ef;
        uVar22 = puVar20[(int)uVar19];
      }
      uVar6 = -uVar22 & uVar22;
      uVar1 = (ulonglong)uVar6 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_240 = (int)lVar10;
      uStack_1f4 = local_240 + -1 + local_1f0;
      if ((int)local_70 < (int)uStack_1f4) {
        uStack_1f4 = local_70;
      }
    }
LAB_149f072ef:
    local_210 = (longlong *)local_98;
    local_200 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uStack_1ec = local_13c;
    uVar22 = local_70 & 0xffffffe0;
    iStack_1e8 = local_98._8_4_ - local_64;
    uStack_1f8 = 0xffffffff;
    TStack_1d8.CurrentBitIndex = uStack_1f4;
    TStack_1d8.UnvisitedBitMask = 0xffffffff;
    TStack_1d8._padding_ = CONCAT44(uVar6,uVar19);
    iVar18 = (int)local_70 >> 5;
    TStack_1d8._28_4_ = local_13c;
    TStack_1d8.BaseBitIndex = local_1f0;
    uStack_1b8 = CONCAT44(uStack_1e4,iStack_1e8);
    bVar15 = (byte)local_70;
    uStack_208 = uVar19;
    uStack_204 = uVar6;
    local_1e0 = local_210;
    TStack_1d8.Array = local_200;
    if (((int)local_70 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar4 = local_290;
    if (uVar23 != local_70) {
      puVar20 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar20 = local_78;
      }
      uVar6 = -1 << (bVar15 & 0x1f) & puVar20[iVar18];
      while (uVar6 == 0) {
        iVar18 = iVar18 + 1;
        uVar22 = uVar22 + 0x20;
        uVar23 = local_70;
        if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar18)
        goto LAB_149f07410;
        uVar6 = puVar20[iVar18];
      }
      uVar1 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar23 = (int)lVar10 + -1 + uVar22;
      if ((int)local_70 < (int)uVar23) {
        uVar23 = local_70;
      }
    }
LAB_149f07410:
    while( true ) {
      plVar8 = local_1e0;
      if ((int)local_1e0[1] - *(int *)((longlong)local_1e0 + 0x34) != (int)uStack_1b8) {
        `TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_293);
      }
      lVar10 = (longlong)TStack_1d8.CurrentBitIndex;
      if (((TStack_1d8.CurrentBitIndex == uVar23) &&
          (TStack_1d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar8 == (longlong *)local_98)) break;
      lVar2 = *plVar8;
      pUVar11 = *(UObject **)(lVar2 + 8 + lVar10 * 0x18);
      if (pUVar11 != (UObject *)0x0) {
        if (!bVar24) {
          local_23c._4_8_ = pUVar11;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar11);
          }
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
          Emplace<TObjectPtr<UObject>_>
                    (&pFVar4->AsyncObjects,(TObjectPtr<UObject> *)local_23c,(bool *)(local_23c + 4))
          ;
        }
        if (param_1) {
          UObjectBase::AtomicallyClearFlags
                    (*(UObjectBase **)(lVar2 + lVar10 * 0x18 + 8),
                     RF_NeedPostLoadSubobjects|RF_NeedPostLoad);
        }
      }
      TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
    }
    ((pFVar4->SettingsWithOverride).field0_0x0.DebugPtr)->Seed = local_288->Seed;
    ((pFVar4->SettingsWithOverride).field0_0x0.DebugPtr)->OriginalSettings = local_288;
    UPCGSettings::OnOverrideSettingsDuplicated
              ((pFVar4->SettingsWithOverride).field0_0x0.DebugPtr,param_1);
    cVar16 = local_296;
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    local_b0 = 0;
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_138 + 0x40));
  }
LAB_149f07562:
  *(undefined1 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9638) = 0;
LAB_149f0758e:
  if (cVar16 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsInitializingSettings @ 149f07f90

bool __cdecl FPCGContext::IsInitializingSettings(void)

{
  return (bool)*(undefined1 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9638);
}

// IsValueOverriden @ 149f08630

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
FPCGContext::IsValueOverriden(FPCGContext *this,TArrayView<FName_const_,int> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == 0) {
    return false;
  }
  pFVar5 = (this->OverriddenParams).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)(this->OverriddenParams).ArrayNum * 8;
  for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 8) {
    lVar3 = *(longlong *)pFVar5;
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == iVar2)) &&
       (bVar4 = CompareItems<FName,int>
                          (param_1->DataPtr,*(FName **)(lVar3 + 8),*(int *)(lVar3 + 0x10)), bVar4))
    goto LAB_149f086a0;
  }
  pFVar5 = (FScriptContainerElement *)0x0;
LAB_149f086a0:
  return pFVar5 != (FScriptContainerElement *)0x0;
}

// IsValueOverriden @ 149f086d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGContext::IsValueOverriden(FPCGContext *this,FName param_1)

{
  FPCGSettingsOverridableParam **ppFVar1;
  
  ppFVar1 = TArray<FPCGSettingsOverridableParam_const_*,TSizedDefaultAllocator<32>_>::
            FindByPredicate<_FPCGContext::IsValueOverriden_::__l2::<lambda_1>_>
                      (&this->OverriddenParams,(<lambda_1>)param_1);
  return ppFVar1 != (FPCGSettingsOverridableParam **)0x0;
}

// NewPointData_AnyThread @ 149f08f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBasePointData * __cdecl FPCGContext::NewPointData_AnyThread(FPCGContext *param_1)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  longlong lVar4;
  UPCGBasePointData *pUVar5;
  UObject *pUVar6;
  UPCGPointArrayData *pUVar7;
  UPCGPointData *pUVar8;
  FGCScopeGuard local_res10 [8];
  FGCScopeGuard local_res18 [8];
  TObjectPtr<UObject> local_res20;
  TObjectPtr<UObject> local_28;
  UPCGPointArrayData *local_20;
  UPCGPointData *local_18 [2];
  
  pTVar2 = CVarPCGEnablePointArrayData.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      lVar4 = 1;
      goto LAB_149f08faf;
    }
  }
  lVar4 = 0;
LAB_149f08faf:
  if (pTVar2->ShadowedValue[lVar4] == false) {
    bVar3 = IsInGameThread();
    if (param_1 == (FPCGContext *)0x0) {
      if (!bVar3) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749225>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0xa9,"Context != nullptr || IsInGameThread()");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pUVar5 = (UPCGBasePointData *)(*pcVar1)();
          return pUVar5;
        }
      }
    }
    else if (!bVar3) {
      if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749348>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x124,"!AsyncState.bIsRunningOnMainThread");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pUVar5 = (UPCGBasePointData *)(*pcVar1)();
          return pUVar5;
        }
      }
      FGCScopeGuard::FGCScopeGuard(local_res18);
      pUVar6 = GetTransientPackageAsObject();
      pUVar8 = NewObject<UPCGPointData>(pUVar6);
      FGCScopeGuard::~FGCScopeGuard(local_res18);
      if (pUVar8 == (UPCGPointData *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x12a,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pUVar5 = (UPCGBasePointData *)(*pcVar1)();
          return pUVar5;
        }
      }
      local_18[0] = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UPCGPointData *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_28,(bool *)local_18);
      return (UPCGBasePointData *)pUVar8;
    }
    pUVar6 = GetTransientPackageAsObject();
    pUVar8 = NewObject<UPCGPointData>(pUVar6);
    return (UPCGBasePointData *)pUVar8;
  }
  bVar3 = IsInGameThread();
  if (param_1 == (FPCGContext *)0x0) {
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749225>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0xa9,"Context != nullptr || IsInGameThread()");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UPCGBasePointData *)(*pcVar1)();
        return pUVar5;
      }
    }
  }
  else if (!bVar3) {
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UPCGBasePointData *)(*pcVar1)();
        return pUVar5;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res10);
    pUVar6 = GetTransientPackageAsObject();
    pUVar7 = NewObject<UPCGPointArrayData>(pUVar6);
    FGCScopeGuard::~FGCScopeGuard(local_res10);
    if (pUVar7 == (UPCGPointArrayData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UPCGBasePointData *)(*pcVar1)();
        return pUVar5;
      }
    }
    local_20 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UPCGPointArrayData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res20,(bool *)&local_20);
    return (UPCGBasePointData *)pUVar7;
  }
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = NewObject<UPCGPointArrayData>(pUVar6);
  return (UPCGBasePointData *)pUVar7;
}

// OverrideSettings @ 149f09e50

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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FPCGContext::OverrideSettings(FPCGContext *this)

{
  int *piVar1;
  TArray<FPCGSettingsOverridableParam_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  UPCGNode *this_00;
  longlong lVar3;
  FName _Src;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  UPCGSettings *pUVar11;
  FText *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  FString *pFVar15;
  UClass *pUVar16;
  FText *pFVar17;
  ulonglong uVar18;
  IPCGGraphExecutionSource *pIVar19;
  AccessorParamResult *pAVar20;
  AccessorParamResult *pAVar21;
  longlong lVar22;
  byte bVar23;
  AccessorParamResult *pAVar24;
  bool bVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 local_res18 [8];
  uint local_res20;
  FName local_628;
  undefined4 local_620;
  undefined1 local_618 [8];
  undefined1 local_610 [8];
  AccessorParamResult *local_608;
  FName local_600;
  ForAnyElementType local_5f8;
  uint local_5f0;
  int local_5ec [3];
  FText local_5e0;
  FPCGContext *local_5c8;
  undefined1 *puStack_5c0;
  undefined1 *local_5b8;
  AccessorParamResult *pAStack_5b0;
  undefined8 local_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined1 local_598 [4];
  undefined1 local_594 [4];
  longlong *local_590;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FSoftObjectPath local_528;
  FSoftClassPath local_508;
  FText local_4e8;
  FText local_4d8;
  FPCGContext *local_4c8;
  undefined1 *puStack_4c0;
  undefined1 *local_4b8;
  AccessorParamResult *pAStack_4b0;
  FName *local_4a8;
  undefined8 uStack_4a0;
  FText local_498;
  FString local_488;
  FText local_478;
  FText local_468;
  FText local_458;
  FText local_448;
  FText local_438;
  FString local_428;
  FText local_418;
  FText local_408;
  FString local_3f8;
  FText local_3e8;
  FText local_3d8;
  TVector2<double>_u_0 local_3c8;
  FString local_3b8;
  FText local_3a8;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  TVector<double>_u_0 local_378;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  TRotator<double> local_338;
  FText local_318;
  FString local_308;
  FText local_2f8;
  TVector4<double>_u_0 local_2e8;
  TQuat<double> local_2c8;
  TTransform<double> local_2a8;
  FTextFormat local_248;
  FString local_238;
  FText local_228;
  FTextFormat local_218;
  FTextFormat local_208;
  FText local_1f8;
  FTextFormat local_1e8;
  FString local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  FTextFormat local_1b8;
  FString local_1a8;
  FText local_198;
  FText local_188;
  FTextFormat local_178;
  FString local_168;
  FString local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  FText local_108;
  FText local_f8;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  undefined1 local_98 [16];
  
  bVar23 = 0;
  bVar6 = false;
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId309,"FPCGContext::OverrideSettings",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGContext.cpp"
               ,0x135);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId309);
  }
  if (((this->bOverrideSettingsOnMainThread != false) && (bVar9 = IsInGameThread(), !bVar9)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bOverrideSettingsOnMainThread || IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGContext.cpp"
                         ,0x138,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = this->Node;
  this->bOverrideSettingsOnMainThread = false;
  if ((this_00 == (UPCGNode *)0x0) ||
     (pUVar11 = UPCGNode::GetSettings(this_00), pUVar11 == (UPCGSettings *)0x0)) {
    pUVar11 = FPCGDataCollection::GetSettings<UPCGSettings>(&this->InputData);
  }
  else {
    pUVar11 = UPCGNode::GetSettings(this_00);
    pUVar11 = FPCGDataCollection::GetSettings(&this->InputData,pUVar11);
  }
  local_5a8 = (FName *)CONCAT44(local_5a8._4_4_,(undefined4)local_5a8);
  if (((this->SettingsWithOverride).field0_0x0.DebugPtr != (UPCGSettings *)0x0) &&
     (local_5a8 = (FName *)CONCAT44(local_5a8._4_4_,(undefined4)local_5a8),
     pUVar11 != (UPCGSettings *)0x0)) {
    local_590 = (longlong *)(**(code **)(pUVar11->_padding_ + 0x480))(pUVar11);
    dVar8 = _UNK_15061cbc8;
    dVar7 = ___xmm_3ff00000000000000000000000000000;
    local_res20 = *(uint *)(local_590 + 1);
    uVar18 = (ulonglong)(int)local_res20;
    pAVar24 = (AccessorParamResult *)*local_590;
    pAVar20 = pAVar24 + 6;
    pAVar21 = (AccessorParamResult *)(uVar18 * 0x88 + (longlong)pAVar24);
    while( true ) {
      if ((int)local_590[1] != (int)uVar18) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FPCGSettingsOverridableParam_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pAVar24 == pAVar21) break;
      if (pAVar24[6].AliasUsed.ComparisonIndex.Value == 0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<1244032200635056453>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGContext.cpp"
                           ,0x145,"!Param.Properties.IsEmpty()");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((byte)LogPCG._0_1_ < 2) goto LAB_149f0af5b;
        pFVar12 = FText::FromName(&local_1f8,&pAVar24->AttributeName);
        pFVar13 = FText::AsLocalizable_Advanced_LocText
                            (&local_318,L"PCGContext",L"ParamPropertyIsEmpty",
                             L"Override pin \'{0}\' has no property set, we can\'t override it.");
        pFVar14 = FTextFormat::FTextFormat(&local_1b8,pFVar13,Default);
        pFVar12 = FText::Format<FText>(&local_3a8,pFVar14,pFVar12);
        FText::ToString(pFVar12);
        GetTaskName(this,&local_3b8);
        pFVar15 = ::FString::FString(&local_1a8,L"Non-PCG Component");
        if ((this->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) {
LAB_149f0a12a:
          pIVar19 = (IPCGGraphExecutionSource *)0x0;
        }
        else {
          bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ExecutionSource);
          if (!bVar9) goto LAB_149f0a12a;
          pIVar19 = (this->ExecutionSource).InterfaceInstance;
        }
        PCGLog::GetExecutionSourceName(&local_588,pIVar19,false,pFVar15);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_588.Data.AllocatorInstance.Data);
        }
        if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
        }
        if (local_3a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_3a8.TextData.Reference + 0x10))();
        }
        if (local_318.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
        }
      }
      else {
        lVar22 = *(longlong *)&pAVar24[1].AttributeName.Number;
        if (lVar22 == 0) goto LAB_149f0af5b;
        pUVar11 = (this->SettingsWithOverride).field0_0x0.DebugPtr;
        lVar3 = pUVar11->_padding_;
        if ((*(int *)(lVar3 + 0x38) < *(int *)(lVar22 + 0x38)) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar22 + 0x38) * 8) !=
            lVar22 + 0x30)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          if ((int)pAVar24[6].AliasUsed.ComparisonIndex.Value < 1) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pUVar16 = FField::GetOwnerClass(*(FField **)pAVar24[6].AttributeName);
          lVar22 = pUVar11->_padding_;
          iVar10 = (int)pUVar16->_padding_;
          if ((iVar10 <= *(int *)(lVar22 + 0x38)) &&
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar22 + 0x30) + (longlong)iVar10 * 8) ==
              &pUVar16->_padding_)) {
            pUVar11 = (this->SettingsWithOverride).field0_0x0.DebugPtr;
            goto LAB_149f0a315;
          }
          goto LAB_149f0af5b;
        }
        pUVar11 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x20))(this,pAVar24);
        if (pUVar11 == (UPCGSettings *)0x0) {
          pUVar11 = (UPCGSettings *)(**(code **)(this->_padding_ + 0x28))(this,pAVar24);
LAB_149f0a315:
          if (pUVar11 == (UPCGSettings *)0x0) goto LAB_149f0af5b;
        }
        else {
          if ((int)(pAVar20->AliasUsed).ComparisonIndex.Value < 1) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pUVar16 = FField::GetOwnerClass(*(FField **)pAVar20->AttributeName);
          iVar10 = (int)pUVar16->_padding_;
          if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar10) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
              &pUVar16->_padding_)) goto LAB_149f0af5b;
        }
        local_628.ComparisonIndex.Value = 0;
        local_628.Number = 0;
        local_620 = 0;
        PCGAttributeAccessorHelpers::CreateConstAccessorForOverrideParamWithResult
                  ((FPCGDataCollection *)local_610,(FPCGSettingsOverridableParam *)&this->InputData,
                   pAVar24);
        local_600.ComparisonIndex.Value = 0;
        local_600.Number = 0;
        if (local_610 == (undefined1  [8])0x0) {
          if ((local_620._1_1_ != '\0') && (2 < (byte)LogPCG._0_1_)) {
            pFVar12 = FText::FromName(&local_198,&local_600);
            pFVar13 = FText::FromName(&local_188,&pAVar24->AttributeName);
            pFVar17 = FText::AsLocalizable_Advanced_LocText
                                (&local_498,L"PCGContext",L"AttributeNotFoundOnConnectedPin",
                                 L"Override pin \'{0}\' is connected, but attribute \'{1}\' was not found."
                                );
            pFVar14 = FTextFormat::FTextFormat(&local_178,pFVar17,Default);
            pFVar12 = FText::Format<FText,FText>(&local_2f8,pFVar14,pFVar13,pFVar12);
            FText::ToString(pFVar12);
            GetTaskName(this,&local_308);
            pFVar15 = ::FString::FString(&local_158,L"Non-PCG Component");
            if ((this->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) {
LAB_149f0a456:
              pIVar19 = (IPCGGraphExecutionSource *)0x0;
            }
            else {
              bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ExecutionSource);
              if (!bVar9) goto LAB_149f0a456;
              pIVar19 = (this->ExecutionSource).InterfaceInstance;
            }
            PCGLog::GetExecutionSourceName(&local_578,pIVar19,false,pFVar15);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_578.Data.AllocatorInstance.Data);
            }
            if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_308.Data.AllocatorInstance.Data);
            }
            if (local_2f8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
            }
            if (local_498.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_498.TextData.Reference + 0x10))();
            }
          }
          if (local_610 != (undefined1  [8])0x0) {
            (*(code *)**(undefined8 **)local_610)(local_610,1);
          }
          goto LAB_149f0af5b;
        }
        if (((char)local_620 != '\0') && (2 < (byte)LogPCG._0_1_)) {
          pFVar12 = FText::FromName(&local_108,&local_628);
          pFVar13 = FText::FromName(&local_f8,&local_600);
          pFVar17 = FText::AsLocalizable_Advanced_LocText
                              (&local_468,L"PCGContext",L"OverrideWithAlias",
                               L"Attribute \'{0}\' was not found, but one of its deprecated aliases (\'{1}\') was. Please update the name to the new value."
                              );
          pFVar14 = FTextFormat::FTextFormat(&local_248,pFVar17,Default);
          pFVar12 = FText::Format<FText,FText>(&local_478,pFVar14,pFVar13,pFVar12);
          FText::ToString(pFVar12);
          GetTaskName(this,&local_488);
          pFVar15 = ::FString::FString(&local_238,L"Non-PCG Component");
          if ((this->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) {
LAB_149f0a60b:
            pIVar19 = (IPCGGraphExecutionSource *)0x0;
          }
          else {
            bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ExecutionSource);
            if (!bVar9) goto LAB_149f0a60b;
            pIVar19 = (this->ExecutionSource).InterfaceInstance;
          }
          PCGLog::GetExecutionSourceName(&local_568,pIVar19,false,pFVar15);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_568.Data.AllocatorInstance.Data);
          }
          if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_488.Data.AllocatorInstance.Data);
          }
          if (local_478.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_478.TextData.Reference + 0x10))();
          }
          if (local_468.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_468.TextData.Reference + 0x10))();
          }
        }
        if ((local_620._2_1_ != '\0') || (local_620._3_1_ != '\0')) {
          if (local_620._1_1_ == '\0') {
            bVar6 = true;
            pFVar12 = FText::AsLocalizable_Advanced_LocText
                                (&local_458,L"PCGContext",L"GlobalOverridePinText",
                                 L"global override pin");
          }
          else {
            pFVar12 = FText::FromName(&local_228,&pAVar24->AttributeName);
            pFVar13 = FText::AsLocalizable_Advanced_LocText
                                (&local_438,L"PCGContext",L"OverridePinText",L"override pin \'{0}\'"
                                );
            pFVar14 = FTextFormat::FTextFormat(&local_218,pFVar13,Default);
            bVar23 = 0xc0;
            pFVar12 = FText::Format<FText>(&local_448,pFVar14,pFVar12);
          }
          FText::FText(&local_5e0,pFVar12);
          if ((bVar6) && (bVar6 = false, local_458.TextData.Reference != (ITextData *)0x0)) {
            (**(code **)((longlong)*local_458.TextData.Reference + 0x10))();
          }
          if (((char)bVar23 < '\0') &&
             (bVar23 = bVar23 & 0x7f, local_448.TextData.Reference != (ITextData *)0x0)) {
            (**(code **)((longlong)*local_448.TextData.Reference + 0x10))();
          }
          if (((bVar23 & 0x40) != 0) &&
             (bVar23 = bVar23 & 0xbf, local_438.TextData.Reference != (ITextData *)0x0)) {
            (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
          }
          if ((local_620._2_1_ != '\0') && (2 < (byte)LogPCG._0_1_)) {
            local_4e8.TextData.Reference = local_5e0.TextData.Reference;
            if (local_5e0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_5e0.TextData.Reference + 8))
                        (local_5e0.TextData.Reference,local_594);
            }
            local_4e8.Flags = local_5e0.Flags;
            pFVar12 = FText::AsLocalizable_Advanced_LocText
                                (&local_408,L"PCGContext",L"HasMultipleAttributeSetsOnOverridePin",
                                 L"Multiple attribute sets were found on the {0}. We will use the first one."
                                );
            pFVar14 = FTextFormat::FTextFormat(&local_208,pFVar12,Default);
            pFVar12 = FText::Format<FText>(&local_418,pFVar14,&local_4e8);
            FText::ToString(pFVar12);
            GetTaskName(this,&local_428);
            pFVar15 = ::FString::FString(&local_168,L"Non-PCG Component");
            if ((this->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) {
LAB_149f0a89c:
              pIVar19 = (IPCGGraphExecutionSource *)0x0;
            }
            else {
              bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ExecutionSource);
              if (!bVar9) goto LAB_149f0a89c;
              pIVar19 = (this->ExecutionSource).InterfaceInstance;
            }
            PCGLog::GetExecutionSourceName(&local_558,pIVar19,false,pFVar15);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_558.Data.AllocatorInstance.Data);
            }
            if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_428.Data.AllocatorInstance.Data);
            }
            if (local_418.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_418.TextData.Reference + 0x10))();
            }
            if (local_408.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_408.TextData.Reference + 0x10))();
            }
          }
          if ((local_620._3_1_ != '\0') && (2 < (byte)LogPCG._0_1_)) {
            local_4d8.TextData.Reference = local_5e0.TextData.Reference;
            if (local_5e0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_5e0.TextData.Reference + 8))
                        (local_5e0.TextData.Reference,local_598);
            }
            local_4d8.Flags = local_5e0.Flags;
            pFVar12 = FText::AsLocalizable_Advanced_LocText
                                (&local_3d8,L"PCGContext",L"HasMultipleDataInAttributeSet",
                                 L"Multi entry attribute set was found on the {0}. We will only use the first entry to override."
                                );
            pFVar14 = FTextFormat::FTextFormat(&local_1e8,pFVar12,Default);
            pFVar12 = FText::Format<FText>(&local_3e8,pFVar14,&local_4d8);
            FText::ToString(pFVar12);
            GetTaskName(this,&local_3f8);
            pFVar15 = ::FString::FString(&local_1d8,L"Non-PCG Component");
            if ((this->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) {
LAB_149f0aa22:
              pIVar19 = (IPCGGraphExecutionSource *)0x0;
            }
            else {
              bVar9 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->ExecutionSource);
              if (!bVar9) goto LAB_149f0aa22;
              pIVar19 = (this->ExecutionSource).InterfaceInstance;
            }
            PCGLog::GetExecutionSourceName(&local_548,pIVar19,false,pFVar15);
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)&PTR_u___s____s____s_151ffca48,
                       (FLogCategoryBase *)&LogPCG);
            if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_548.Data.AllocatorInstance.Data);
            }
            if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
            }
            if (local_3e8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_3e8.TextData.Reference + 0x10))();
            }
            if (local_3d8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_3d8.TextData.Reference + 0x10))();
            }
          }
          if (local_5e0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_5e0.TextData.Reference + 0x10))();
          }
        }
        local_5f0 = pAVar24[6].AliasUsed.ComparisonIndex.Value;
        lVar22 = (longlong)(int)local_5f0;
        _Src = pAVar24[6].AttributeName;
        local_5f8.Data = (FScriptContainerElement *)0x0;
        if (local_5f0 == 0) {
          local_5ec[0] = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_5f0,0,&local_5f8,local_5f0,local_5ec);
          memcpy(local_5f8.Data,(void *)_Src,lVar22 << 3);
        }
        PCGAttributeAccessorHelpers::CreatePropertyChainAccessor
                  ((TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)local_618);
        if (local_5f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5f8.Data);
        }
        if (local_618 == (undefined1  [8])0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("PropertyAccessor.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGContext.cpp"
                             ,0x197,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        puStack_5c0 = local_610;
        local_5b8 = local_618;
        local_4a8 = &local_600;
        uStack_4a0._0_4_ = SUB84(pUVar11,0);
        uStack_4a0._4_4_ = (undefined4)((ulonglong)pUVar11 >> 0x20);
        uStack_5a0 = (undefined4)uStack_4a0;
        uStack_59c = uStack_4a0._4_4_;
        local_5c8 = this;
        pAStack_5b0 = pAVar24;
        local_4c8 = this;
        puStack_4c0 = puStack_5c0;
        local_4b8 = local_5b8;
        pAStack_4b0 = pAVar24;
        uStack_4a0 = pUVar11;
        local_5a8 = local_4a8;
        switch(*(undefined2 *)((longlong)local_618 + 10)) {
        case 0:
          bVar9 = `FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<float>
                            (&local_5c8,0.0);
          break;
        case 1:
          bVar9 = `FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<double>
                            (&local_5c8,0.0);
          break;
        case 2:
          bVar9 = `FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<int>(&local_5c8,0);
          break;
        case 3:
          bVar9 = `FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<__int64>
                            (&local_5c8,0);
          break;
        case 4:
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_3c8._s_0.X = 0.0;
          local_3c8._s_0.Y = 0.0;
          bVar9 = `FPCGContext::OverrideSettings'::__l16::<lambda_1>::
                  operator()<UE::Math::TVector2<double>_>
                            (&local_5c8,(TVector2<double> *)&local_3c8._s_0);
          break;
        case 5:
          local_378._s_0.X = 0.0;
          local_378._s_0.Y = 0.0;
          local_398 = 0;
          uStack_390 = 0;
          local_388 = 0;
          local_378._s_0.Z = 0.0;
          bVar9 = `FPCGContext::OverrideSettings'::__l16::<lambda_1>::
                  operator()<UE::Math::TVector<double>_>
                            (&local_5c8,(TVector<double> *)&local_378._s_0);
          break;
        case 6:
          local_138 = dVar7;
          dStack_130 = dVar8;
          local_148 = 0;
          uStack_140 = 0;
          local_2e8._s_0.X = 0.0;
          local_2e8._s_0.Y = 0.0;
          local_2e8._s_0.Z = dVar7;
          local_2e8._s_0.W = dVar8;
          bVar9 = `FPCGContext::OverrideSettings'::__l16::<lambda_1>::
                  operator()<UE::Math::TVector4<double>_>
                            (&local_5c8,(TVector4<double> *)&local_2e8._s_0);
          break;
        case 7:
          local_128 = 0;
          uStack_120 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_2c8.X = 0.0;
          local_2c8.Y = 0.0;
          local_2c8.Z = 0.0;
          local_2c8.W = 0.0;
          bVar9 = `FPCGContext::OverrideSettings'::__l16::<lambda_1>::
                  operator()<UE::Math::TQuat<double>_>(&local_5c8,&local_2c8);
          break;
        case 8:
          uVar28 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          uVar29 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_2a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_2a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_2a8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_2a8.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_2a8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_2a8.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_2a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_2a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          uVar26 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          uVar27 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          local_e8._8_4_ = uVar28;
          local_e8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_e8._12_4_ = uVar29;
          local_98._8_4_ = uVar26;
          local_98._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_98._12_4_ = uVar27;
          local_2a8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar26;
          local_2a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_2a8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar27;
          local_2a8.Rotation.XY.m128d_f64[1]._0_4_ = uVar28;
          local_2a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_2a8.Rotation.XY.m128d_f64[1]._4_4_ = uVar29;
          local_d8 = local_2a8.Rotation.ZW.m128d_f64[0];
          dStack_d0 = local_2a8.Rotation.ZW.m128d_f64[1];
          local_c8 = local_2a8.Translation.XY.m128d_f64[0];
          dStack_c0 = local_2a8.Translation.XY.m128d_f64[1];
          local_b8 = local_2a8.Translation.ZW.m128d_f64[0];
          dStack_b0 = local_2a8.Translation.ZW.m128d_f64[1];
          local_a8 = local_2a8.Scale3D.XY.m128d_f64[0];
          dStack_a0 = local_2a8.Scale3D.XY.m128d_f64[1];
          bVar9 = `FPCGContext::OverrideSettings'::__l16::<lambda_1>::
                  operator()<UE::Math::TTransform<double>_>(&local_5c8,&local_2a8);
          break;
        case 9:
          local_538.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_538.Data.ArrayNum = 0;
          local_538.Data.ArrayMax = 0;
          bVar9 = `FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<FString>
                            (&local_5c8,&local_538);
          break;
        case 10:
          bVar9 = `FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<bool>
                            (&local_5c8,false);
          break;
        case 0xb:
          local_338.Pitch = 0.0;
          local_338.Yaw = 0.0;
          local_358 = 0;
          uStack_350 = 0;
          local_348 = 0;
          local_338.Roll = 0.0;
          bVar9 = `FPCGContext::OverrideSettings'::__l16::<lambda_1>::
                  operator()<UE::Math::TRotator<double>_>(&local_5c8,&local_338);
          break;
        case 0xc:
          local_5ec[1] = 0;
          local_5ec[2] = 0;
          bVar9 = `FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<FName>
                            (&local_5c8,(FName)0x0);
          break;
        case 0xd:
          local_528.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_528.AssetPath.PackageName.Number = 0;
          local_528.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_528.AssetPath.AssetName.Number = 0;
          local_528.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_528.SubPathString.Data.ArrayNum = 0;
          local_528.SubPathString.Data.ArrayMax = 0;
          bVar9 = `FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<FSoftObjectPath>
                            (&local_5c8,&local_528);
          break;
        case 0xe:
          local_508._0_8_ = 0;
          local_508._8_8_ = 0;
          local_508._16_8_ = 0;
          local_508._24_8_ = 0;
          bVar9 = `FPCGContext::OverrideSettings'::__l16::<lambda_1>::operator()<FSoftClassPath>
                            (&local_5c8,&local_508);
          break;
        default:
          goto switchD_149f0abe8_default;
        }
        if (bVar9 != false) {
          pTVar2 = &this->OverriddenParams;
          pFVar4 = (pTVar2->AllocatorInstance).Data;
          local_608 = pAVar24;
          if ((pFVar4 <= (FScriptContainerElement *)&local_608) &&
             ((FScriptContainerElement *)&local_608 <
              pFVar4 + (longlong)(this->OverriddenParams).ArrayMax * 8)) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar10 = (this->OverriddenParams).ArrayNum;
          piVar1 = &(this->OverriddenParams).ArrayMax;
          if (iVar10 == *piVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->OverriddenParams).ArrayNum = iVar10 + 1;
          *(AccessorParamResult **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) =
               local_608;
        }
switchD_149f0abe8_default:
        if (local_618 != (undefined1  [8])0x0) {
          (*(code *)**(undefined8 **)local_618)(local_618,1);
        }
        if (local_610 != (undefined1  [8])0x0) {
          (*(code *)**(undefined8 **)local_610)(local_610,1);
        }
      }
LAB_149f0af5b:
      pAVar24 = (AccessorParamResult *)&pAVar24[6].bUsedAliases;
      uVar18 = (ulonglong)local_res20;
      pAVar20 = (AccessorParamResult *)&pAVar20[6].bUsedAliases;
    }
    UPCGSettings::CacheCrc((this->SettingsWithOverride).field0_0x0.DebugPtr);
  }
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Release @ 149f0ffa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FPCGContext::Release(FPCGContext *param_1)

{
  TSharedPtr<FPCGContextHandle,1> *pTVar1;
  FPCGGraphExecutor *this;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  if (param_1 != (FPCGContext *)0x0) {
    pTVar4 = (param_1->GraphExecutor).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar4->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar4 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_149f0ffe0;
        }
        LOCK();
        aVar3 = pTVar4->SharedReferenceCount;
        bVar5 = aVar2 == aVar3;
        if (bVar5) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar5);
      this = (param_1->GraphExecutor).Object;
      if (this != (FPCGGraphExecutor *)0x0) {
        FPCGGraphExecutor::AddReleasedContextForGC(this,param_1);
      }
    }
LAB_149f0ffe0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar1 = &param_1->Handle;
    if (pTVar1->Object == (FPCGContextHandle *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149f1000a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)param_1->_padding_)(param_1,1);
      return;
    }
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FPCGContextHandle,1> *)&local_18) {
      pTVar1->Object = (FPCGContextHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->Handle).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  return;
}

// ScheduleGeneric @ 149f11ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
FPCGContext::ScheduleGeneric(FPCGContext *this,FPCGScheduleGenericParams *param_1)

{
  FPCGGraphExecutor *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  ulong64 uVar4;
  bool bVar5;
  
  pTVar3 = (this->GraphExecutor).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_149f11ae0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    this_00 = (this->GraphExecutor).Object;
    if (this_00 != (FPCGGraphExecutor *)0x0) {
      uVar4 = FPCGGraphExecutor::ScheduleGeneric(this_00,param_1);
      goto LAB_149f11ae7;
    }
  }
LAB_149f11ae0:
  uVar4 = 0xffffffffffffffff;
LAB_149f11ae7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return uVar4;
}

// ScheduleGraph @ 149f11b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

ulong64 __thiscall FPCGContext::ScheduleGraph(FPCGContext *this,FPCGScheduleGraphParams *param_1)

{
  FPCGGraphExecutor *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  ulong64 uVar4;
  bool bVar5;
  
  pTVar3 = (this->GraphExecutor).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_149f11b50;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    this_00 = (this->GraphExecutor).Object;
    if ((this_00 != (FPCGGraphExecutor *)0x0) &&
       (param_1->ExecutionSource != (IPCGGraphExecutionSource *)0x0)) {
      uVar4 = FPCGGraphExecutor::ScheduleGraph(this_00,param_1);
      goto LAB_149f11b57;
    }
  }
LAB_149f11b50:
  uVar4 = 0xffffffffffffffff;
LAB_149f11b57:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return uVar4;
}

// StoreInCache @ 149f14100

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
FPCGContext::StoreInCache
          (FPCGContext *this,FPCGStoreInCacheParams *param_1,FPCGDataCollection *param_2)

{
  FPCGGraphExecutor *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->GraphExecutor).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_149f14130;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar1 = (this->GraphExecutor).Object;
    if (pFVar1 != (FPCGGraphExecutor *)0x0) {
      (**(code **)((pFVar1->GraphCache)._padding_ + 8))();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_149f14130:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// GetInputSettings<UPCGBaseSubgraphSettings> @ 149f28850

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

UPCGBaseSubgraphSettings * __thiscall
FPCGContext::GetInputSettings<UPCGBaseSubgraphSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *pUVar2;
  UPCGSettingsInterface *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong lVar6;
  UPCGSettings *pUVar7;
  FObjectPtr_u_0 *pFVar8;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar5 = UPCGBaseSubgraphSettings::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
    if (!bVar4) {
      return (UPCGBaseSubgraphSettings *)0x0;
    }
    return (UPCGBaseSubgraphSettings *)(this_00->field0_0x0).DebugPtr;
  }
  pUVar2 = this->Node;
  if (((pUVar2 == (UPCGNode *)0x0) ||
      (pUVar3 = (pUVar2->SettingsInterface).field0_0x0.DebugPtr,
      pUVar3 == (UPCGSettingsInterface *)0x0)) ||
     (lVar6 = (**(code **)(pUVar3->_padding_ + 0x388))(), lVar6 == 0)) {
    pFVar8 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBaseSubgraphSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar8 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar8->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGBaseSubgraphSettings *)local_res8.Handle == (UPCGBaseSubgraphSettings *)0x0) {
          return (UPCGBaseSubgraphSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGBaseSubgraphSettings *)local_res8.Handle != (UPCGBaseSubgraphSettings *)0x0) {
        pUVar5 = UPCGBaseSubgraphSettings::StaticClass();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar4) {
          return (UPCGBaseSubgraphSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = (pUVar2->SettingsInterface).field0_0x0.DebugPtr;
    pUVar7 = (UPCGSettings *)0x0;
    if (pUVar3 != (UPCGSettingsInterface *)0x0) {
      pUVar7 = (UPCGSettings *)(**(code **)(pUVar3->_padding_ + 0x388))();
    }
    pUVar7 = FPCGDataCollection::GetSettings(&this->InputData,pUVar7);
    if (pUVar7 != (UPCGSettings *)0x0) {
      pUVar5 = UPCGBaseSubgraphSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if (iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) {
        if ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_) {
          return (UPCGBaseSubgraphSettings *)0x0;
        }
        return (UPCGBaseSubgraphSettings *)pUVar7;
      }
    }
  }
  return (UPCGBaseSubgraphSettings *)0x0;
}

// GetInputSettings<UPCGSubgraphSettings> @ 149f28ab0

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

UPCGSubgraphSettings * __thiscall
FPCGContext::GetInputSettings<UPCGSubgraphSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *pUVar2;
  UPCGSettingsInterface *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  longlong lVar6;
  UPCGSettings *pUVar7;
  UPCGSubgraphSettings *pUVar8;
  FObjectPtr_u_0 *pFVar9;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar5 = UPCGSubgraphSettings::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
    if (!bVar4) {
      return (UPCGSubgraphSettings *)0x0;
    }
    return (UPCGSubgraphSettings *)(this_00->field0_0x0).DebugPtr;
  }
  pUVar2 = this->Node;
  if (((pUVar2 == (UPCGNode *)0x0) ||
      (pUVar3 = (pUVar2->SettingsInterface).field0_0x0.DebugPtr,
      pUVar3 == (UPCGSettingsInterface *)0x0)) ||
     (lVar6 = (**(code **)(pUVar3->_padding_ + 0x388))(), lVar6 == 0)) {
    pFVar9 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSubgraphSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar9 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar9->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGSubgraphSettings *)local_res8.Handle == (UPCGSubgraphSettings *)0x0) {
          return (UPCGSubgraphSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGSubgraphSettings *)local_res8.Handle != (UPCGSubgraphSettings *)0x0) {
        pUVar5 = UPCGSubgraphSettings::StaticClass();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if (bVar4) {
          return (UPCGSubgraphSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar3 = (pUVar2->SettingsInterface).field0_0x0.DebugPtr;
    pUVar7 = (UPCGSettings *)0x0;
    if (pUVar3 != (UPCGSettingsInterface *)0x0) {
      pUVar7 = (UPCGSettings *)(**(code **)(pUVar3->_padding_ + 0x388))();
    }
    pUVar8 = (UPCGSubgraphSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar7);
    if (pUVar8 != (UPCGSubgraphSettings *)0x0) {
      pUVar5 = UPCGSubgraphSettings::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if (iVar1 <= *(int *)(pUVar8->_padding_ + 0x38)) {
        if ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_) {
          return (UPCGSubgraphSettings *)0x0;
        }
        return pUVar8;
      }
    }
  }
  return (UPCGSubgraphSettings *)0x0;
}

// operator() @ 150549610

bool __thiscall `FPCGContext::~FPCGContext'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1244032200635056182>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1244032200635056182>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


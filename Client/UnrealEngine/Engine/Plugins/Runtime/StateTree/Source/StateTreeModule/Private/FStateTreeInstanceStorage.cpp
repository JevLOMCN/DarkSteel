// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 31

// StaticStruct @ 14d4d99e0

UScriptStruct * __cdecl FStateTreeInstanceStorage::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceStorage,(UObject *)pUVar1,
                         L"StateTreeInstanceStorage");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton;
}

// FStateTreeInstanceStorage @ 14d4eb250

FStateTreeInstanceStorage * __thiscall
FStateTreeInstanceStorage::FStateTreeInstanceStorage
          (FStateTreeInstanceStorage *this,FStateTreeInstanceStorage *param_1)

{
  TPimplPtr<UE::StateTree::Debug::FRuntimeValidationInstanceData,0> *pTVar1;
  UScriptStruct *pUVar2;
  uchar *puVar3;
  ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo> FVar4;
  FRuntimeValidationInstanceData *pFVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  FStateTreeInstanceStorage *pFVar10;
  FWeakObjectPtr *pFVar11;
  FWeakObjectPtr *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  DWORD local_res8 [2];
  atomic<unsigned___int64> local_res10;
  longlong local_48;
  DWORD *local_40;
  atomic<unsigned___int64> *local_38;
  
  FInstancedStructContainer::FInstancedStructContainer
            (&this->InstanceStructs,&param_1->InstanceStructs);
  pFVar12 = (FWeakObjectPtr *)0x0;
  (this->ExecutionState).ActiveFrames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionState).ActiveFrames.AllocatorInstance.Data =
       (param_1->ExecutionState).ActiveFrames.AllocatorInstance.Data;
  (param_1->ExecutionState).ActiveFrames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionState).ActiveFrames.ArrayNum = (param_1->ExecutionState).ActiveFrames.ArrayNum;
  (this->ExecutionState).ActiveFrames.ArrayMax = (param_1->ExecutionState).ActiveFrames.ArrayMax;
  (param_1->ExecutionState).ActiveFrames.ArrayNum = 0;
  (param_1->ExecutionState).ActiveFrames.ArrayMax = 0;
  (this->ExecutionState).DelayedTransitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionState).DelayedTransitions.AllocatorInstance.Data =
       (param_1->ExecutionState).DelayedTransitions.AllocatorInstance.Data;
  (param_1->ExecutionState).DelayedTransitions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExecutionState).DelayedTransitions.ArrayNum =
       (param_1->ExecutionState).DelayedTransitions.ArrayNum;
  (this->ExecutionState).DelayedTransitions.ArrayMax =
       (param_1->ExecutionState).DelayedTransitions.ArrayMax;
  (param_1->ExecutionState).DelayedTransitions.ArrayNum = 0;
  (param_1->ExecutionState).DelayedTransitions.ArrayMax = 0;
  (this->ExecutionState).RandomStream = (param_1->ExecutionState).RandomStream;
  FStateTreeDelegateActiveListeners::FStateTreeDelegateActiveListeners
            (&(this->ExecutionState).DelegateActiveListeners,
             &(param_1->ExecutionState).DelegateActiveListeners);
  (this->ExecutionState).ScheduledTickRequests.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExecutionState).ScheduledTickRequests.AllocatorInstance.Data =
       (param_1->ExecutionState).ScheduledTickRequests.AllocatorInstance.Data;
  (param_1->ExecutionState).ScheduledTickRequests.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExecutionState).ScheduledTickRequests.ArrayNum =
       (param_1->ExecutionState).ScheduledTickRequests.ArrayNum;
  (this->ExecutionState).ScheduledTickRequests.ArrayMax =
       (param_1->ExecutionState).ScheduledTickRequests.ArrayMax;
  (param_1->ExecutionState).ScheduledTickRequests.ArrayNum = 0;
  (param_1->ExecutionState).ScheduledTickRequests.ArrayMax = 0;
  (this->ExecutionState).CachedScheduledTickRequest =
       (param_1->ExecutionState).CachedScheduledTickRequest;
  (this->ExecutionState).InstanceDebugId = (param_1->ExecutionState).InstanceDebugId;
  pUVar2 = (param_1->ExecutionState).ExecutionExtension.InstancedStruct.ScriptStruct.field0_0x0.
           DebugPtr;
  puVar3 = (param_1->ExecutionState).ExecutionExtension.InstancedStruct.StructMemory;
  (this->ExecutionState).ExecutionExtension.InstancedStruct.ScriptStruct.field0_0x0.DebugPtr =
       pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->ExecutionState).ExecutionExtension.InstancedStruct.StructMemory = puVar3;
  (param_1->ExecutionState).ExecutionExtension.InstancedStruct.ScriptStruct.field0_0x0.DebugPtr =
       (UScriptStruct *)0x0;
  (param_1->ExecutionState).ExecutionExtension.InstancedStruct.StructMemory = (uchar *)0x0;
  (this->ExecutionState).LastTickStatus = (param_1->ExecutionState).LastTickStatus;
  (this->ExecutionState).TreeRunStatus = (param_1->ExecutionState).TreeRunStatus;
  (this->ExecutionState).RequestedStop = (param_1->ExecutionState).RequestedStop;
  (this->ExecutionState).CurrentPhase = (param_1->ExecutionState).CurrentPhase;
  (this->ExecutionState).StateChangeCount = (param_1->ExecutionState).StateChangeCount;
  (this->ExecutionState).bHasPendingCompletedState =
       (param_1->ExecutionState).bHasPendingCompletedState;
  FInstancedStructContainer::FInstancedStructContainer
            (&(this->ExecutionRuntimeData).InstanceStructs,
             &(param_1->ExecutionRuntimeData).InstanceStructs);
  (this->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData =
       (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)0x0;
  if ((param_1->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData ==
      (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)0x0) {
    memmove(&this->ExecutionRuntimeDataInfos,&param_1->ExecutionRuntimeDataInfos,0xc);
  }
  FVar4 = (this->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  (this->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData =
       (param_1->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData;
  (param_1->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData =
       (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)0x0;
  (this->ExecutionRuntimeDataInfos).ArrayNum = (param_1->ExecutionRuntimeDataInfos).ArrayNum;
  (this->ExecutionRuntimeDataInfos).ArrayMax = (param_1->ExecutionRuntimeDataInfos).ArrayMax;
  (param_1->ExecutionRuntimeDataInfos).ArrayNum = 0;
  (param_1->ExecutionRuntimeDataInfos).ArrayMax = 1;
  (this->TemporaryInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TemporaryInstances).AllocatorInstance.Data =
       (param_1->TemporaryInstances).AllocatorInstance.Data;
  (param_1->TemporaryInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TemporaryInstances).ArrayNum = (param_1->TemporaryInstances).ArrayNum;
  (this->TemporaryInstances).ArrayMax = (param_1->TemporaryInstances).ArrayMax;
  (param_1->TemporaryInstances).ArrayNum = 0;
  (param_1->TemporaryInstances).ArrayMax = 0;
  (this->EventQueue).Object = (param_1->EventQueue).Object;
  pTVar9 = (param_1->EventQueue).SharedReferenceCount.ReferenceController;
  (this->EventQueue).SharedReferenceCount.ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->TransitionRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BroadcastedDelegates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BroadcastedDelegates).ArrayNum = 0;
  (this->BroadcastedDelegates).ArrayMax = 0;
  (this->TransitionRequests).AllocatorInstance.Data =
       (param_1->TransitionRequests).AllocatorInstance.Data;
  (param_1->TransitionRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransitionRequests).ArrayNum = (param_1->TransitionRequests).ArrayNum;
  (this->TransitionRequests).ArrayMax = (param_1->TransitionRequests).ArrayMax;
  (param_1->TransitionRequests).ArrayNum = 0;
  (param_1->TransitionRequests).ArrayMax = 0;
  pUVar2 = (param_1->GlobalParameters).Value.ScriptStruct.field0_0x0.DebugPtr;
  puVar3 = (param_1->GlobalParameters).Value.StructMemory;
  (this->GlobalParameters).Value.ScriptStruct.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->GlobalParameters).Value.StructMemory = puVar3;
  (param_1->GlobalParameters).Value.ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (param_1->GlobalParameters).Value.StructMemory = (uchar *)0x0;
  this->UniqueIdGenerator = 0;
  (this->AccessDetector).State = (atomic<unsigned___int64>)0x0;
  local_res10 = (param_1->AccessDetector).State;
  if (0xfffff < local_res10._0_4_) {
    local_res8[0] = GetCurrentThreadId();
    if ((local_res10._4_4_ - 1 != local_res8[0]) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      local_40 = local_res8;
      local_38 = &local_res10;
      `FMRSWRecursiveAccessDetector::CheckOtherThreadWriters'::__l8::<lambda_1>::operator()
                (&local_40);
    }
  }
  pTVar1 = &param_1->RuntimeValidationData;
  this->bIsOwningEventQueue = param_1->bIsOwningEventQueue;
  (this->RuntimeValidationData).Ptr = pTVar1->Ptr;
  pTVar1->Ptr = (FRuntimeValidationInstanceData *)0x0;
  pTVar9 = ::operator_new(0x20);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar13 = pTVar9 + 1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFStateTreeEventQueue___00_SharedPointerInternals__6B_
    ;
    pTVar9[1]._padding_ = 0;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    if ((pTVar13 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FStateTreeInstanceStorage *)(*pcVar6)();
      return pFVar10;
    }
  }
  pTVar7 = (param_1->EventQueue).SharedReferenceCount.ReferenceController;
  (param_1->EventQueue).Object = (FStateTreeEventQueue *)pTVar13;
  (param_1->EventQueue).SharedReferenceCount.ReferenceController = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pFVar11 = ::operator_new(0x40);
  if (pFVar11 != (FWeakObjectPtr *)0x0) {
    pFVar11[1].ObjectIndex = 0;
    pFVar11[1].ObjectSerialNumber = 0;
    *pFVar11 = (FWeakObjectPtr)
               UE::Core::Private::PimplPtr::
               DeleterFunc<UE::StateTree::Debug::FRuntimeValidationInstanceData>;
    *(undefined4 *)((longlong)&pFVar11[6].ObjectIndex + 1) = 0;
    *(undefined2 *)((longlong)&pFVar11[6].ObjectSerialNumber + 1) = 0;
    *(undefined1 *)((longlong)&pFVar11[6].ObjectSerialNumber + 3) = 0;
    pFVar11[2].ObjectIndex = 0;
    pFVar11[2].ObjectSerialNumber = 0;
    pFVar11[3].ObjectIndex = 0;
    pFVar11[3].ObjectSerialNumber = 0;
    pFVar11[4].ObjectIndex = 0;
    pFVar11[4].ObjectSerialNumber = 0;
    pFVar11[5].ObjectIndex = 0;
    pFVar11[5].ObjectSerialNumber = 0;
    *(undefined1 *)&pFVar11[6].ObjectIndex = 0;
    pFVar12 = pFVar11;
  }
  if ((TPimplPtr<UE::StateTree::Debug::FRuntimeValidationInstanceData,0> *)&local_48 == pTVar1) {
    if ((FRuntimeValidationInstanceData *)(pFVar12 + 2) == (FRuntimeValidationInstanceData *)0x0) {
      return this;
    }
  }
  else {
    pFVar5 = pTVar1->Ptr;
    pTVar1->Ptr = (FRuntimeValidationInstanceData *)(pFVar12 + 2);
    if (pFVar5 == (FRuntimeValidationInstanceData *)0x0) {
      return this;
    }
    pFVar12 = &pFVar5[-1].Owner.WeakPtr;
  }
  (*(code *)*pFVar12)();
  return this;
}

// FStateTreeInstanceStorage @ 14d4eb680

FStateTreeInstanceStorage * __thiscall
FStateTreeInstanceStorage::FStateTreeInstanceStorage
          (FStateTreeInstanceStorage *this,FStateTreeInstanceStorage *param_1)

{
  int *piVar1;
  TArray<FStateTreeTemporaryInstanceData,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FStateTreeTransitionRequest,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FStateTreeTemporaryInstanceData *pFVar5;
  FScriptContainerElement *_Src;
  ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo> _Dst;
  ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo> _Src_00;
  DWORD local_res8 [2];
  atomic<unsigned___int64> local_res10;
  DWORD *local_38;
  atomic<unsigned___int64> *local_30;
  
  FInstancedStructContainer::FInstancedStructContainer
            (&this->InstanceStructs,&param_1->InstanceStructs);
  FStateTreeExecutionState::FStateTreeExecutionState(&this->ExecutionState,&param_1->ExecutionState)
  ;
  FInstancedStructContainer::FInstancedStructContainer
            (&(this->ExecutionRuntimeData).InstanceStructs,
             &(param_1->ExecutionRuntimeData).InstanceStructs);
  (this->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData =
       (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)0x0;
  _Src_00 = (param_1->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData;
  iVar4 = (param_1->ExecutionRuntimeDataInfos).ArrayNum;
  (this->ExecutionRuntimeDataInfos).ArrayNum = iVar4;
  if (_Src_00 == (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)0x0) {
    _Src_00 = (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)
              &param_1->ExecutionRuntimeDataInfos;
  }
  piVar1 = &(this->ExecutionRuntimeDataInfos).ArrayMax;
  if (iVar4 == 0) {
    *piVar1 = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>_>
              (0xc,4,iVar4,0,&(this->ExecutionRuntimeDataInfos).AllocatorInstance,iVar4,piVar1);
    _Dst = (this->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)0x0) {
      _Dst = (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)
             &this->ExecutionRuntimeDataInfos;
    }
    memcpy((void *)_Dst,(void *)_Src_00,(longlong)iVar4 * 0xc);
  }
  pTVar2 = &this->TemporaryInstances;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->TemporaryInstances).ArrayMax;
  iVar4 = (param_1->TemporaryInstances).ArrayNum;
  pFVar5 = (FStateTreeTemporaryInstanceData *)(param_1->TemporaryInstances).AllocatorInstance.Data;
  (this->TemporaryInstances).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    ConstructItems<FStateTreeTemporaryInstanceData,FStateTreeTemporaryInstanceData,int>
              ((pTVar2->AllocatorInstance).Data,pFVar5,iVar4);
  }
  MakeShared<FStateTreeEventQueue,1,FStateTreeEventQueue_&>
            (&this->EventQueue,(param_1->EventQueue).Object);
  pTVar3 = &this->TransitionRequests;
  (this->BroadcastedDelegates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->TransitionRequests).ArrayMax;
  (this->BroadcastedDelegates).ArrayNum = 0;
  (this->BroadcastedDelegates).ArrayMax = 0;
  iVar4 = (param_1->TransitionRequests).ArrayNum;
  _Src = (param_1->TransitionRequests).AllocatorInstance.Data;
  (this->TransitionRequests).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0xc);
  }
  (this->GlobalParameters).Value.ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->GlobalParameters).Value.StructMemory = (uchar *)0x0;
  FInstancedStruct::InitializeAs
            (&(this->GlobalParameters).Value,
             (param_1->GlobalParameters).Value.ScriptStruct.field0_0x0.DebugPtr,
             (param_1->GlobalParameters).Value.StructMemory);
  this->UniqueIdGenerator = 0;
  (this->AccessDetector).State = (atomic<unsigned___int64>)0x0;
  local_res10 = (param_1->AccessDetector).State;
  if (0xfffff < local_res10._0_4_) {
    local_res8[0] = GetCurrentThreadId();
    if ((local_res10._4_4_ - 1 != local_res8[0]) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      local_38 = local_res8;
      local_30 = &local_res10;
      `FMRSWRecursiveAccessDetector::CheckOtherThreadWriters'::__l8::<lambda_1>::operator()
                (&local_38);
    }
  }
  this->bIsOwningEventQueue = true;
  MakePimpl<UE::StateTree::Debug::FRuntimeValidationInstanceData,0,UE::StateTree::Debug::FRuntimeValidationInstanceData_&>
            ((FRuntimeValidationInstanceData *)&this->RuntimeValidationData);
  return this;
}

// FStateTreeInstanceStorage @ 14d4eb8f0

FStateTreeInstanceStorage * __thiscall
FStateTreeInstanceStorage::FStateTreeInstanceStorage(FStateTreeInstanceStorage *this)

{
  FInstancedStructContainer::FInstancedStructContainer(&this->InstanceStructs);
  FStateTreeExecutionState::FStateTreeExecutionState(&this->ExecutionState);
  FInstancedStructContainer::FInstancedStructContainer
            (&(this->ExecutionRuntimeData).InstanceStructs);
  (this->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData =
       (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)0x0;
  (this->ExecutionRuntimeDataInfos).ArrayNum = 0;
  (this->ExecutionRuntimeDataInfos).ArrayMax = 1;
  (this->TemporaryInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TemporaryInstances).ArrayNum = 0;
  (this->TemporaryInstances).ArrayMax = 0;
  MakeShared<FStateTreeEventQueue,1>(&this->EventQueue);
  (this->BroadcastedDelegates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BroadcastedDelegates).ArrayNum = 0;
  (this->BroadcastedDelegates).ArrayMax = 0;
  (this->TransitionRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransitionRequests).ArrayNum = 0;
  (this->TransitionRequests).ArrayMax = 0;
  FInstancedStruct::FInstancedStruct(&(this->GlobalParameters).Value);
  this->UniqueIdGenerator = 0;
  (this->AccessDetector).State = (atomic<unsigned___int64>)0x0;
  this->bIsOwningEventQueue = true;
  MakePimpl<UE::StateTree::Debug::FRuntimeValidationInstanceData,0>();
  return this;
}

// ~FStateTreeInstanceStorage @ 14d4ec890

void __thiscall
FStateTreeInstanceStorage::~FStateTreeInstanceStorage(FStateTreeInstanceStorage *this)

{
  FRuntimeValidationInstanceData *pFVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo> FVar3;
  
  pFVar1 = (this->RuntimeValidationData).Ptr;
  if (pFVar1 != (FRuntimeValidationInstanceData *)0x0) {
    (*(code *)pFVar1[-1].Owner.WeakPtr)(&pFVar1[-1].Owner);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&this->AccessDetector);
  FInstancedStruct::Reset(&(this->GlobalParameters).Value);
  pFVar2 = (this->TransitionRequests).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BroadcastedDelegates).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EventQueue).SharedReferenceCount.ReferenceController);
  DestructItems<FStateTreeTemporaryInstanceData,int>
            ((FStateTreeTemporaryInstanceData *)(this->TemporaryInstances).AllocatorInstance.Data,
             (this->TemporaryInstances).ArrayNum);
  pFVar2 = (this->TemporaryInstances).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar3 = (this->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FInstancedStructContainer::Empty(&(this->ExecutionRuntimeData).InstanceStructs);
  FStateTreeExecutionState::~FStateTreeExecutionState(&this->ExecutionState);
  FInstancedStructContainer::Empty(&this->InstanceStructs);
  return;
}

// operator= @ 14d4ed260

FStateTreeInstanceStorage * __thiscall
FStateTreeInstanceStorage::operator=
          (FStateTreeInstanceStorage *this,FStateTreeInstanceStorage *param_1)

{
  TArray<FStateTreeTemporaryInstanceData,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FStateTreeTemporaryInstanceData,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FStateTreeTransitionRequest,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FStateTreeTransitionRequest,TSizedDefaultAllocator<32>_> *pTVar4;
  TPimplPtr<UE::StateTree::Debug::FRuntimeValidationInstanceData,0> *pTVar5;
  ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo> FVar6;
  FScriptContainerElement *pFVar7;
  FStateTreeEventQueue *pFVar8;
  FRuntimeValidationInstanceData *pFVar9;
  code *pcVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  TReferenceControllerBase<1> *pTVar13;
  FStateTreeInstanceStorage *pFVar14;
  FWeakObjectPtr *pFVar15;
  FWeakObjectPtr *pFVar16;
  TPimplPtr<UE::StateTree::Debug::FRuntimeValidationInstanceData,0> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  DWORD local_res8 [2];
  atomic<unsigned___int64> local_res10;
  longlong local_58;
  DWORD *local_50;
  atomic<unsigned___int64> *local_48;
  FStateTreeEventQueue *local_40;
  TReferenceControllerBase<1> *pTStack_38;
  
  FInstancedStructContainer::operator=(&this->InstanceStructs,&param_1->InstanceStructs);
  FStateTreeExecutionState::operator=(&this->ExecutionState,&param_1->ExecutionState);
  FInstancedStructContainer::operator=
            (&(this->ExecutionRuntimeData).InstanceStructs,
             &(param_1->ExecutionRuntimeData).InstanceStructs);
  pFVar16 = (FWeakObjectPtr *)0x0;
  if (&this->ExecutionRuntimeDataInfos != &param_1->ExecutionRuntimeDataInfos) {
    if ((param_1->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData ==
        (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)0x0) {
      memmove(&this->ExecutionRuntimeDataInfos,&param_1->ExecutionRuntimeDataInfos,0xc);
    }
    FVar6 = (this->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData;
    if (FVar6 != (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)0x0) {
      FMemory::Free((void *)FVar6);
    }
    (this->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData =
         (param_1->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData;
    (param_1->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData =
         (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)0x0;
    (this->ExecutionRuntimeDataInfos).ArrayNum = (param_1->ExecutionRuntimeDataInfos).ArrayNum;
    (this->ExecutionRuntimeDataInfos).ArrayMax = (param_1->ExecutionRuntimeDataInfos).ArrayMax;
    (param_1->ExecutionRuntimeDataInfos).ArrayNum = 0;
    (param_1->ExecutionRuntimeDataInfos).ArrayMax = 1;
  }
  pTVar1 = &param_1->TemporaryInstances;
  pTVar2 = &this->TemporaryInstances;
  if (pTVar2 != pTVar1) {
    DestructItems<FStateTreeTemporaryInstanceData,int>
              ((FStateTreeTemporaryInstanceData *)(pTVar2->AllocatorInstance).Data,
               (this->TemporaryInstances).ArrayNum);
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TemporaryInstances).ArrayNum = (param_1->TemporaryInstances).ArrayNum;
    (this->TemporaryInstances).ArrayMax = (param_1->TemporaryInstances).ArrayMax;
    (param_1->TemporaryInstances).ArrayNum = 0;
    (param_1->TemporaryInstances).ArrayMax = 0;
  }
  pTVar13 = (param_1->EventQueue).SharedReferenceCount.ReferenceController;
  pFVar8 = (param_1->EventQueue).Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_40 = (this->EventQueue).Object;
  pTStack_38 = (this->EventQueue).SharedReferenceCount.ReferenceController;
  (this->EventQueue).Object = pFVar8;
  (this->EventQueue).SharedReferenceCount.ReferenceController = pTVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  pTVar13 = ::operator_new(0x20);
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)0x0;
    pTVar18 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar13->SharedReferenceCount = (atomic<int>)0x1;
    pTVar18 = pTVar13 + 1;
    pTVar13->WeakReferenceCount = (atomic<int>)0x1;
    pTVar13->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFStateTreeEventQueue___00_SharedPointerInternals__6B_
    ;
    pTVar13[1]._padding_ = 0;
    pTVar13[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[1].WeakReferenceCount = (atomic<int>)0x0;
    if ((pTVar18 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      pFVar14 = (FStateTreeInstanceStorage *)(*pcVar10)();
      return pFVar14;
    }
  }
  pTVar11 = (param_1->EventQueue).SharedReferenceCount.ReferenceController;
  (param_1->EventQueue).Object = (FStateTreeEventQueue *)pTVar18;
  (param_1->EventQueue).SharedReferenceCount.ReferenceController = pTVar13;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  pTVar3 = &param_1->TransitionRequests;
  pTVar4 = &this->TransitionRequests;
  if (pTVar4 != pTVar3) {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TransitionRequests).ArrayNum = (param_1->TransitionRequests).ArrayNum;
    (this->TransitionRequests).ArrayMax = (param_1->TransitionRequests).ArrayMax;
    (param_1->TransitionRequests).ArrayNum = 0;
    (param_1->TransitionRequests).ArrayMax = 0;
  }
  FInstancedStruct::operator=(&(this->GlobalParameters).Value,&(param_1->GlobalParameters).Value);
  local_res10 = (param_1->AccessDetector).State;
  if (0xfffff < local_res10._0_4_) {
    local_res8[0] = GetCurrentThreadId();
    if ((local_res10._4_4_ - 1 != local_res8[0]) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      local_50 = local_res8;
      local_48 = &local_res10;
      `FMRSWRecursiveAccessDetector::CheckOtherThreadWriters'::__l8::<lambda_1>::operator()
                (&local_50);
    }
  }
  pTVar5 = &this->RuntimeValidationData;
  this->bIsOwningEventQueue = param_1->bIsOwningEventQueue;
  param_1->bIsOwningEventQueue = true;
  pTVar17 = &param_1->RuntimeValidationData;
  if (pTVar17 != pTVar5) {
    pFVar9 = pTVar5->Ptr;
    pTVar5->Ptr = pTVar17->Ptr;
    pTVar17->Ptr = (FRuntimeValidationInstanceData *)0x0;
    if (pFVar9 != (FRuntimeValidationInstanceData *)0x0) {
      (*(code *)pFVar9[-1].Owner.WeakPtr)(&pFVar9[-1].Owner);
    }
  }
  pFVar15 = ::operator_new(0x40);
  if (pFVar15 != (FWeakObjectPtr *)0x0) {
    pFVar15[1].ObjectIndex = 0;
    pFVar15[1].ObjectSerialNumber = 0;
    *pFVar15 = (FWeakObjectPtr)
               UE::Core::Private::PimplPtr::
               DeleterFunc<UE::StateTree::Debug::FRuntimeValidationInstanceData>;
    *(undefined4 *)((longlong)&pFVar15[6].ObjectIndex + 1) = 0;
    *(undefined2 *)((longlong)&pFVar15[6].ObjectSerialNumber + 1) = 0;
    *(undefined1 *)((longlong)&pFVar15[6].ObjectSerialNumber + 3) = 0;
    pFVar15[2].ObjectIndex = 0;
    pFVar15[2].ObjectSerialNumber = 0;
    pFVar15[3].ObjectIndex = 0;
    pFVar15[3].ObjectSerialNumber = 0;
    pFVar15[4].ObjectIndex = 0;
    pFVar15[4].ObjectSerialNumber = 0;
    pFVar15[5].ObjectIndex = 0;
    pFVar15[5].ObjectSerialNumber = 0;
    *(undefined1 *)&pFVar15[6].ObjectIndex = 0;
    pFVar16 = pFVar15;
  }
  if ((TPimplPtr<UE::StateTree::Debug::FRuntimeValidationInstanceData,0> *)&local_58 == pTVar17) {
    if ((FRuntimeValidationInstanceData *)(pFVar16 + 2) == (FRuntimeValidationInstanceData *)0x0) {
      return this;
    }
  }
  else {
    pFVar9 = pTVar17->Ptr;
    pTVar17->Ptr = (FRuntimeValidationInstanceData *)(pFVar16 + 2);
    if (pFVar9 == (FRuntimeValidationInstanceData *)0x0) {
      return this;
    }
    pFVar16 = &pFVar9[-1].Owner.WeakPtr;
  }
  (*(code *)*pFVar16)();
  return this;
}

// operator= @ 14d4ed5a0

FStateTreeInstanceStorage * __thiscall
FStateTreeInstanceStorage::operator=
          (FStateTreeInstanceStorage *this,FStateTreeInstanceStorage *param_1)

{
  int *piVar1;
  TArray<FStateTreeTemporaryInstanceData,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FStateTreeTransitionRequest,TSizedDefaultAllocator<32>_> *pTVar3;
  TPimplPtr<UE::StateTree::Debug::FRuntimeValidationInstanceData,0> *pTVar4;
  int iVar5;
  FStateTreeTemporaryInstanceData *pFVar6;
  FScriptContainerElement *_Src;
  FRuntimeValidationInstanceData *pFVar7;
  FStateTreeEventQueue *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong lVar11;
  TSharedRef<FStateTreeEventQueue,1> *pTVar12;
  TPimplPtr<UE::StateTree::Debug::FRuntimeValidationInstanceData,0> TVar13;
  ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo> _Dst;
  ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo> _Src_00;
  undefined1 local_res8 [12];
  int iStackX_14;
  TSharedRef<FStateTreeEventQueue,1> local_28;
  
  FInstancedStructContainer::operator=(&this->InstanceStructs,&param_1->InstanceStructs);
  FStateTreeExecutionState::operator=(&this->ExecutionState,&param_1->ExecutionState);
  FInstancedStructContainer::operator=
            (&(this->ExecutionRuntimeData).InstanceStructs,
             &(param_1->ExecutionRuntimeData).InstanceStructs);
  if (this != param_1) {
    _Src_00 = (param_1->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData;
    piVar1 = &(this->ExecutionRuntimeDataInfos).ArrayMax;
    iVar5 = (param_1->ExecutionRuntimeDataInfos).ArrayNum;
    if (_Src_00 == (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)0x0) {
      _Src_00 = (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)
                &param_1->ExecutionRuntimeDataInfos;
    }
    (this->ExecutionRuntimeDataInfos).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>_>
                (0xc,4,iVar5,*piVar1,&(this->ExecutionRuntimeDataInfos).AllocatorInstance,iVar5,
                 piVar1);
      _Dst = (this->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData;
      if (iVar5 != 0) {
        if (_Dst == (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)0x0) {
          _Dst = (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)
                 &this->ExecutionRuntimeDataInfos;
        }
        memcpy((void *)_Dst,(void *)_Src_00,(longlong)iVar5 * 0xc);
      }
    }
  }
  pTVar2 = &this->TemporaryInstances;
  if (pTVar2 != &param_1->TemporaryInstances) {
    DestructItems<FStateTreeTemporaryInstanceData,int>
              ((FStateTreeTemporaryInstanceData *)(pTVar2->AllocatorInstance).Data,
               (this->TemporaryInstances).ArrayNum);
    iVar5 = (param_1->TemporaryInstances).ArrayNum;
    piVar1 = &(this->TemporaryInstances).ArrayMax;
    pFVar6 = (FStateTreeTemporaryInstanceData *)(param_1->TemporaryInstances).AllocatorInstance.Data
    ;
    (this->TemporaryInstances).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar5,*piVar1,&pTVar2->AllocatorInstance,iVar5,piVar1);
      ConstructItems<FStateTreeTemporaryInstanceData,FStateTreeTemporaryInstanceData,int>
                ((pTVar2->AllocatorInstance).Data,pFVar6,iVar5);
    }
  }
  pTVar12 = MakeShared<FStateTreeEventQueue,1,FStateTreeEventQueue_&>
                      (&local_28,(param_1->EventQueue).Object);
  pFVar8 = (this->EventQueue).Object;
  pTVar9 = (this->EventQueue).SharedReferenceCount.ReferenceController;
  pTVar10 = (pTVar12->SharedReferenceCount).ReferenceController;
  (this->EventQueue).Object = pTVar12->Object;
  (this->EventQueue).SharedReferenceCount.ReferenceController = pTVar10;
  pTVar12->Object = pFVar8;
  (pTVar12->SharedReferenceCount).ReferenceController = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pTVar3 = &this->TransitionRequests;
  if (pTVar3 != &param_1->TransitionRequests) {
    iVar5 = (param_1->TransitionRequests).ArrayNum;
    piVar1 = &(this->TransitionRequests).ArrayMax;
    _Src = (param_1->TransitionRequests).AllocatorInstance.Data;
    (this->TransitionRequests).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar5,*piVar1,&pTVar3->AllocatorInstance,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar5 * 0xc);
      }
    }
  }
  if (&this->GlobalParameters != &param_1->GlobalParameters) {
    FInstancedStruct::InitializeAs
              (&(this->GlobalParameters).Value,
               (param_1->GlobalParameters).Value.ScriptStruct.field0_0x0.DebugPtr,
               (param_1->GlobalParameters).Value.StructMemory);
  }
  unique0x00023d00 = (param_1->AccessDetector).State;
  if (0xfffff < local_res8._8_4_) {
    local_res8._0_4_ = GetCurrentThreadId();
    if ((iStackX_14 - 1U != local_res8._0_4_) &&
       (UE::Private::FMTAccessDetectorOptions::bSuppressCheckFailure == false)) {
      local_28.Object = (FStateTreeEventQueue *)local_res8;
      local_28.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)(local_res8 + 8);
      `FMRSWRecursiveAccessDetector::CheckOtherThreadWriters'::__l8::<lambda_1>::operator()
                (&local_28);
    }
  }
  this->bIsOwningEventQueue = true;
  TVar13 = MakePimpl<UE::StateTree::Debug::FRuntimeValidationInstanceData,0,UE::StateTree::Debug::FRuntimeValidationInstanceData_&>
                     ((FRuntimeValidationInstanceData *)local_res8);
  pTVar4 = &this->RuntimeValidationData;
  if (TVar13.Ptr != (FRuntimeValidationInstanceData *)pTVar4) {
    pFVar7 = pTVar4->Ptr;
    pTVar4->Ptr = (FRuntimeValidationInstanceData *)
                  ((TVar13.Ptr)->NodeStates).AllocatorInstance.Data;
    ((TVar13.Ptr)->NodeStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (pFVar7 != (FRuntimeValidationInstanceData *)0x0) {
      (*(code *)pFVar7[-1].Owner.WeakPtr)(&pFVar7[-1].Owner);
    }
  }
  lVar11 = CONCAT44(local_res8._4_4_,local_res8._0_4_);
  if (lVar11 != 0) {
    (**(code **)(lVar11 + -0x10))(lVar11 + -0x10);
  }
  return this;
}

// AcquireReadAccess @ 14d4ee900

void __thiscall FStateTreeInstanceStorage::AcquireReadAccess(FStateTreeInstanceStorage *this)

{
  FMRSWRecursiveAccessDetector::AcquireReadAccess(&this->AccessDetector);
  return;
}

// AcquireWriteAccess @ 14d4ee920

void __thiscall FStateTreeInstanceStorage::AcquireWriteAccess(FStateTreeInstanceStorage *this)

{
  FMRSWRecursiveAccessDetector::AcquireWriteAccess(&this->AccessDetector);
  return;
}

// AddExecutionRuntimeData @ 14d4eefc0

int __thiscall
FStateTreeInstanceStorage::AddExecutionRuntimeData
          (FStateTreeInstanceStorage *this,TNotNull<UObject_*> param_1,
          FExecutionFrameHandle *param_2)

{
  int *piVar1;
  ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo> FVar2;
  FWeakObjectPtr *pFVar3;
  UStateTree *pUVar4;
  code *pcVar5;
  FWeakObjectPtr FVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo> FVar10;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  
  if ((((param_2->RootState).Index == 0xffff) ||
      ((param_2->StateTree).field0_0x0.DebugPtr == (UStateTree *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeInstanceData.cpp"
                         ,0x207,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
  pUVar4 = (param_2->StateTree).field0_0x0.DebugPtr;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  iVar8 = 0;
  iVar9 = iVar8;
  if (pUVar4 != (UStateTree *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res8 = (FWeakObjectPtr)pUVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
    local_res8 = local_res18;
    FVar6 = local_res8;
    local_res8.ObjectSerialNumber = local_res18.ObjectSerialNumber;
    local_res8.ObjectIndex = local_res18.ObjectIndex;
    iVar8 = local_res8.ObjectSerialNumber;
    iVar9 = local_res8.ObjectIndex;
    local_res8 = FVar6;
  }
  FVar6 = local_res8;
  FVar10 = (this->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)0x0) {
    FVar10 = (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)
             &this->ExecutionRuntimeDataInfos;
  }
  FVar2 = (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)
          ((longlong)FVar10 + (longlong)(this->ExecutionRuntimeDataInfos).ArrayNum * 0xc);
  while( true ) {
    if (FVar10 == FVar2) {
      iVar9 = UE::StateTree::InstanceData::FInstanceContainer::Append
                        (&this->ExecutionRuntimeData,param_1,
                         &((param_2->StateTree).field0_0x0.DebugPtr)->DefaultExecutionRuntimeData,
                         (FAddArgs)0x1);
      piVar1 = &(this->ExecutionRuntimeDataInfos).ArrayMax;
      iVar8 = (this->ExecutionRuntimeDataInfos).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>_>
                          (0x40c,&(this->ExecutionRuntimeDataInfos).AllocatorInstance,piVar1);
      }
      (this->ExecutionRuntimeDataInfos).ArrayNum = iVar8 + 1;
      FVar10 = (this->ExecutionRuntimeDataInfos).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)0x0) {
        FVar10 = (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)
                 &this->ExecutionRuntimeDataInfos;
      }
      pFVar3 = (FWeakObjectPtr *)((longlong)FVar10 + (longlong)iVar8 * 0xc);
      DefaultConstructItems<FStateTreeInstanceStorage::FExecutionRuntimeInfo,int>(pFVar3,1);
      *pFVar3 = FVar6;
      pFVar3[1].ObjectIndex = iVar9;
      return iVar9;
    }
    if ((*(int *)FVar10 == iVar9) && (*(int *)((longlong)FVar10 + 4) == iVar8)) break;
    FVar10 = (ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>)
             ((longlong)FVar10 + 0xc);
  }
  return *(int *)((longlong)FVar10 + 8);
}

// AddStructReferencedObjects @ 14d4ef6e0

void __thiscall
FStateTreeInstanceStorage::AddStructReferencedObjects
          (FStateTreeInstanceStorage *this,FReferenceCollector *param_1)

{
  FStateTreeEventQueue *pFVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceStorage,(UObject *)pUVar2,
                         L"StateTreeInstanceStorage");
  }
  FReferenceCollector::AddPropertyReferencesWithStructARO
            (param_1,Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton,this
             ,(UObject *)0x0);
  pFVar1 = (this->EventQueue).Object;
  if (Z_Registration_Info_UScriptStruct_FStateTreeEventQueue.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar2 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeEventQueue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEventQueue,(UObject *)pUVar2,
                         L"StateTreeEventQueue");
  }
  FReferenceCollector::AddPropertyReferencesWithStructARO
            (param_1,Z_Registration_Info_UScriptStruct_FStateTreeEventQueue.OuterSingleton,pFVar1,
             (UObject *)0x0);
  return;
}

// AddTemporaryInstance @ 14d4ef910

FStructView * __thiscall
FStateTreeInstanceStorage::AddTemporaryInstance
          (FStateTreeInstanceStorage *this,FStructView *__return_storage_ptr__,UObject *param_1,
          FStateTreeExecutionFrame *param_2,FStateTreeIndex16 param_3,FStateTreeDataHandle param_4,
          FConstStructView *param_5)

{
  TArray<FStateTreeTemporaryInstanceData,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  longlong lVar3;
  UObject *pUVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  int iVar8;
  FStructView *pFVar9;
  UPackage *pUVar10;
  TNotNull<UObject_*> TVar11;
  FScriptContainerElement *pFVar12;
  FInstancedStruct *this_00;
  FConstStructView *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined2 in_stack_00000036;
  FConstStructView local_38;
  FConstStructView local_28;
  
  pFVar6 = (FScriptContainerElement *)CONCAT26(in_stack_00000036,param_4);
  pTVar1 = &this->TemporaryInstances;
  pFVar14 = (pTVar1->AllocatorInstance).Data;
  iVar8 = (this->TemporaryInstances).ArrayNum;
  pFVar12 = pFVar14 + (longlong)iVar8 * 0x20;
  if (pFVar14 != pFVar12) {
    do {
      if ((((*(uint *)pFVar14 == (param_2->FrameID).Value) &&
           (*(ushort *)(pFVar14 + 10) == param_3.Value)) && (pFVar14[4] == *pFVar6)) &&
         ((*(short *)(pFVar14 + 6) == *(short *)(pFVar6 + 2) &&
          (*(short *)(pFVar14 + 8) == *(short *)(pFVar6 + 4))))) {
        if (pFVar14 != (FScriptContainerElement *)0x0) {
          this_00 = (FInstancedStruct *)(pFVar14 + 0x10);
          if ((this_00->ScriptStruct).field0_0x0.DebugPtr == param_5->ScriptStruct)
          goto LAB_14d4efa37;
          local_38.ScriptStruct = param_5->ScriptStruct;
          local_38.StructMemory = param_5->StructMemory;
          pFVar13 = &local_38;
          goto LAB_14d4efa32;
        }
        break;
      }
      pFVar14 = pFVar14 + 0x20;
    } while (pFVar14 != pFVar12);
  }
  if (iVar8 == (this->TemporaryInstances).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar1->AllocatorInstance,&(this->TemporaryInstances).ArrayMax);
    (this->TemporaryInstances).ArrayNum = iVar8;
  }
  iVar8 = (this->TemporaryInstances).ArrayNum;
  pFVar14 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
  (this->TemporaryInstances).ArrayNum = iVar8 + 1;
  DefaultConstructItems<FStateTreeTemporaryInstanceData,int>(pFVar14,1);
  if (pFVar14 == (FScriptContainerElement *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TempInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeInstanceData.cpp"
                       ,0x22f,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FStructView *)(*pcVar5)();
      return pFVar9;
    }
  }
  this_00 = (FInstancedStruct *)(pFVar14 + 0x10);
  *(uint *)pFVar14 = (param_2->FrameID).Value;
  pFVar13 = &local_28;
  *(ushort *)(pFVar14 + 10) = param_3.Value;
  *(int *)(pFVar14 + 4) = *(int *)pFVar6;
  *(undefined2 *)(pFVar14 + 8) = *(undefined2 *)(pFVar6 + 4);
  local_28.ScriptStruct = param_5->ScriptStruct;
  local_28.StructMemory = param_5->StructMemory;
LAB_14d4efa32:
  FInstancedStruct::operator=(this_00,pFVar13);
LAB_14d4efa37:
  puVar2 = *(undefined8 **)(pFVar14 + 0x18);
  lVar3 = *(longlong *)(pFVar14 + 0x10);
  if ((puVar2 != (undefined8 *)0x0) && (lVar3 != 0)) {
    if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar10 = Z_Construct_UPackage__Script_StateTreeModule();
      Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,
                           (UObject *)pUVar10,L"StateTreeInstanceObjectWrapper");
      if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_14d4efb1b;
    }
    iVar8 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton)
                 ->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar8 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton)->
         _padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((bVar7) && ((UObject *)*puVar2 != (UObject *)0x0)) {
      if (param_1 == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      TVar11 = UE::StateTree::InstanceData::Private::CopyNodeInstance
                         ((UObject *)&param_4,(UObject *)*puVar2,SUB81(param_1,0));
                    /* WARNING: Load size is inaccurate */
      pUVar4 = *TVar11.Val;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      *puVar2 = pUVar4;
    }
  }
LAB_14d4efb1b:
  __return_storage_ptr__->ScriptStruct = *(UScriptStruct **)(pFVar14 + 0x10);
  __return_storage_ptr__->StructMemory = *(uchar **)(pFVar14 + 0x18);
  return __return_storage_ptr__;
}

// AddTransitionRequest @ 14d4efb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStateTreeInstanceStorage::AddTransitionRequest
          (FStateTreeInstanceStorage *this,UObject *param_1,FStateTreeTransitionRequest *param_2)

{
  int *piVar1;
  TArray<FStateTreeTransitionRequest,TSizedDefaultAllocator<32>_> *pTVar2;
  FStateTreeTransitionRequest *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  undefined1 auStack_2f8 [32];
  FStateTreeTransitionRequest *local_2d8;
  FStateTreeTransitionRequest *local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  FString local_2a8;
  FString local_298;
  FName local_288;
  FName local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  iVar7 = (this->TransitionRequests).ArrayNum;
  if (iVar7 < 0x20) {
    pTVar2 = &this->TransitionRequests;
    pFVar3 = (FStateTreeTransitionRequest *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= param_2) &&
       (lVar9 = (longlong)(this->TransitionRequests).ArrayMax, param_2 < pFVar3 + lVar9)) {
      local_2b8 = 0xc;
      local_2d8 = param_2;
      local_2d0 = pFVar3;
      local_2c8 = lVar9;
      local_2c0 = (longlong)iVar7;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->TransitionRequests).ArrayNum;
    piVar1 = &(this->TransitionRequests).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->TransitionRequests).ArrayNum = iVar7 + 1;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0xc) = *(undefined8 *)param_2;
    *(uint *)(pFVar4 + (longlong)iVar7 * 0xc + 8) = (param_2->SourceStateID).Value;
  }
  else {
    if (FVisualLogger::bIsRecording != 0) {
      if (param_1 == (UObject *)0x0) {
        ::FString::FString(&local_2a8,L"None");
      }
      else {
        local_288.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_288.Number = *(uint *)&param_1->field_0x1c;
        ::FName::ToString(&local_288,&local_2a8);
      }
      local_278._padding_ = 0;
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_2a8.Data.ArrayNum != 0) {
        FVar8.Data = local_2a8.Data.AllocatorInstance.Data;
      }
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"FStateTreeInstanceStorage::AddTransitionRequest",0x2f,Yes);
      local_2c8 = CONCAT44(local_2c8._4_4_,iVar7);
      local_2d8 = (FStateTreeTransitionRequest *)local_278.Ptr;
      local_2d0 = (FStateTreeTransitionRequest *)FVar8.Data;
      FVisualLogger::CategorizedLogfImpl
                (param_1,(FName *)&LogStateTree.field_0x4,Error,
                 L"%s: Too many transition requests sent to \'%s\' (%d pending). Dropping request.")
      ;
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
      if ((FStateTreeTransitionRequest *)local_2a8.Data.AllocatorInstance.Data !=
          (FStateTreeTransitionRequest *)0x0) {
        FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
      }
    }
    if (1 < (byte)LogStateTree._0_1_) {
      iVar7 = (this->TransitionRequests).ArrayNum;
      if (param_1 == (UObject *)0x0) {
        ::FString::FString(&local_298,L"None");
      }
      else {
        local_280.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_280.Number = *(uint *)&param_1->field_0x1c;
        ::FName::ToString(&local_280,&local_298);
      }
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FStateTreeInstanceStorage::AddTransitionRequest",0x2f,Yes);
      local_2d8 = (FStateTreeTransitionRequest *)CONCAT44(local_2d8._4_4_,iVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// AreAllInstancesValid @ 14d4f06e0

bool __thiscall FStateTreeInstanceStorage::AreAllInstancesValid(FStateTreeInstanceStorage *this)

{
  bool bVar1;
  
  bVar1 = UE::StateTree::InstanceData::Private::AreAllInstancesValid(&this->InstanceStructs);
  if (bVar1) {
    bVar1 = UE::StateTree::InstanceData::Private::AreAllInstancesValid
                      (&(this->ExecutionRuntimeData).InstanceStructs);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// GenerateUniqueId @ 14d4facc0

uint __thiscall FStateTreeInstanceStorage::GenerateUniqueId(FStateTreeInstanceStorage *this)

{
  uint *puVar1;
  FStateTreeInstanceStorage *local_res8 [4];
  
  puVar1 = &this->UniqueIdGenerator;
  *puVar1 = *puVar1 + 1;
  if (*puVar1 == 0) {
    local_res8[0] = this;
    `FStateTreeInstanceStorage::GenerateUniqueId'::__l5::<lambda_1>::operator()(local_res8);
    this->UniqueIdGenerator = this->UniqueIdGenerator + 1;
    return this->UniqueIdGenerator;
  }
  return this->UniqueIdGenerator;
}

// GetMutableTemporaryObject @ 14d4fe610

UObject * __thiscall
FStateTreeInstanceStorage::GetMutableTemporaryObject
          (FStateTreeInstanceStorage *this,FStateTreeExecutionFrame *param_1,
          FStateTreeDataHandle param_2)

{
  FStateTreeInstanceObjectWrapper *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined2 in_register_00000086;
  FScriptContainerElement *pFVar3;
  
  pFVar2 = (this->TemporaryInstances).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)(this->TemporaryInstances).ArrayNum * 0x20;
  if (pFVar2 != pFVar3) {
    do {
      if ((((*(uint *)pFVar2 == (param_1->FrameID).Value) &&
           (pFVar2[4] == *(FScriptContainerElement *)CONCAT26(in_register_00000086,param_2))) &&
          (*(short *)(pFVar2 + 6) == *(short *)(CONCAT26(in_register_00000086,param_2) + 2))) &&
         (*(short *)(pFVar2 + 8) == *(short *)(CONCAT26(in_register_00000086,param_2) + 4))) {
        pFVar1 = UE::StructUtils::GetStructRef<FStateTreeInstanceObjectWrapper>
                           (*(UScriptStruct **)(pFVar2 + 0x10),*(void **)(pFVar2 + 0x18));
        return (pFVar1->InstanceObject).field0_0x0.DebugPtr;
      }
      pFVar2 = pFVar2 + 0x20;
    } while (pFVar2 != pFVar3);
  }
  return (UObject *)0x0;
}

// GetMutableTemporaryStruct @ 14d4fe680

FStructView * __thiscall
FStateTreeInstanceStorage::GetMutableTemporaryStruct
          (FStateTreeInstanceStorage *this,FStructView *__return_storage_ptr__,
          FStateTreeExecutionFrame *param_1,FStateTreeDataHandle param_2)

{
  uchar *puVar1;
  FScriptContainerElement *pFVar2;
  undefined2 in_register_0000008e;
  FScriptContainerElement *pFVar3;
  
  pFVar2 = (this->TemporaryInstances).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)(this->TemporaryInstances).ArrayNum * 0x20;
  if (pFVar2 != pFVar3) {
    do {
      if ((((*(uint *)pFVar2 == (param_1->FrameID).Value) &&
           (pFVar2[4] == *(FScriptContainerElement *)CONCAT26(in_register_0000008e,param_2))) &&
          (*(short *)(pFVar2 + 6) == *(short *)(CONCAT26(in_register_0000008e,param_2) + 2))) &&
         (*(short *)(pFVar2 + 8) == *(short *)(CONCAT26(in_register_0000008e,param_2) + 4))) {
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          puVar1 = *(uchar **)(pFVar2 + 0x18);
          __return_storage_ptr__->ScriptStruct = *(UScriptStruct **)(pFVar2 + 0x10);
          __return_storage_ptr__->StructMemory = puVar1;
          return __return_storage_ptr__;
        }
        break;
      }
      pFVar2 = pFVar2 + 0x20;
    } while (pFVar2 != pFVar3);
  }
  __return_storage_ptr__->StructMemory = (uchar *)0x0;
  __return_storage_ptr__->ScriptStruct = (UScriptStruct *)0x0;
  __return_storage_ptr__->StructMemory = (uchar *)0x0;
  return __return_storage_ptr__;
}

// GetRuntimeValidation @ 14d4ff410

FRuntimeValidation __thiscall
FStateTreeInstanceStorage::GetRuntimeValidation(FStateTreeInstanceStorage *this)

{
  TNotNull<UE::StateTree::Debug::FRuntimeValidationInstanceData_*> TVar1;
  FRuntimeValidationInstanceData *in_RDX;
  
  TVar1.Val = (this->RuntimeValidationData).Ptr;
  if (TVar1.Val != (FRuntimeValidationInstanceData *)0x0) {
    UE::StateTree::Debug::FRuntimeValidation::FRuntimeValidation((FRuntimeValidation *)in_RDX,TVar1)
    ;
    return (FRuntimeValidation)in_RDX;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetTransitionRequests @ 14d500680

TArrayView<FStateTreeTransitionRequest_const_,int> * __thiscall
FStateTreeInstanceStorage::GetTransitionRequests
          (FStateTreeInstanceStorage *this,
          TArrayView<FStateTreeTransitionRequest_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FStateTreeTransitionRequest_const_,int> *pTVar4;
  
  iVar1 = (this->TransitionRequests).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FStateTreeTransitionRequest *)(this->TransitionRequests).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FStateTreeTransitionRequest_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// HasBroadcastedDelegates @ 14d500b30

bool __thiscall FStateTreeInstanceStorage::HasBroadcastedDelegates(FStateTreeInstanceStorage *this)

{
  return (this->BroadcastedDelegates).ArrayNum != 0;
}

// IsDelegateBroadcasted @ 14d5013f0

bool __thiscall
FStateTreeInstanceStorage::IsDelegateBroadcasted
          (FStateTreeInstanceStorage *this,FStateTreeDelegateDispatcher *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->BroadcastedDelegates).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->BroadcastedDelegates).ArrayNum * 0x10;
  if (pFVar1 != pFVar2) {
    do {
      if ((((param_1->ID).D == *(uint *)(pFVar1 + 0xc) && (param_1->ID).C == *(uint *)(pFVar1 + 8))
          && (param_1->ID).B == *(uint *)(pFVar1 + 4)) && (param_1->ID).A == *(uint *)pFVar1) {
        return true;
      }
      pFVar1 = pFVar1 + 0x10;
    } while (pFVar1 != pFVar2);
  }
  return false;
}

// MarkDelegateAsBroadcasted @ 14d502b90

void __thiscall
FStateTreeInstanceStorage::MarkDelegateAsBroadcasted
          (FStateTreeInstanceStorage *this,FStateTreeDelegateDispatcher *param_1)

{
  TArray<FStateTreeDelegateDispatcher,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FStateTreeDelegateDispatcher_const_&>(&this->BroadcastedDelegates,param_1);
  return;
}

// ReleaseReadAccess @ 14d503380

void __thiscall FStateTreeInstanceStorage::ReleaseReadAccess(FStateTreeInstanceStorage *this)

{
  FMRSWRecursiveAccessDetector *this_00;
  
  this_00 = &this->AccessDetector;
  FMRSWRecursiveAccessDetector::RemoveReaderFromTls(this_00);
  LOCK();
  this_00->State = (atomic<unsigned___int64>)((longlong)this_00->State + -1);
  UNLOCK();
  return;
}

// ReleaseWriteAccess @ 14d5033b0

void __thiscall FStateTreeInstanceStorage::ReleaseWriteAccess(FStateTreeInstanceStorage *this)

{
  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(&this->AccessDetector);
  return;
}

// Reset @ 14d5066a0

void __thiscall FStateTreeInstanceStorage::Reset(FStateTreeInstanceStorage *this)

{
  int *piVar1;
  int iVar2;
  FStateTreeTemporaryInstanceData *pFVar3;
  FRuntimeValidationInstanceData *pFVar4;
  code *pcVar5;
  bool bVar6;
  FWeakObjectPtr *pFVar7;
  FWeakObjectPtr *pFVar8;
  TPimplPtr<UE::StateTree::Debug::FRuntimeValidationInstanceData,0> *pTVar9;
  FStateTreeExecutionState local_88;
  longlong local_10;
  
  FInstancedStructContainer::Reset(&this->InstanceStructs);
  pFVar8 = (FWeakObjectPtr *)0x0;
  local_88.InstanceDebugId.Id = 0xffffffff;
  local_88.InstanceDebugId.SerialNumber = 0xffffffff;
  local_88.ActiveFrames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.DelegateActiveListeners._16_8_ = 0;
  local_88.CachedScheduledTickRequest._5_2_ = 0;
  local_88.CachedScheduledTickRequest._7_1_ = 0;
  local_88.ExecutionExtension.InstancedStruct.ScriptStruct.field0_0x0.DebugPtr =
       (TObjectPtr<UScriptStruct_const_>_u_0)0x0;
  local_88.ExecutionExtension.InstancedStruct.StructMemory = (uchar *)0x0;
  local_88.LastTickStatus = Running;
  local_88.TreeRunStatus = Running;
  local_88.RequestedStop = Running;
  local_88.CurrentPhase = Unset;
  local_88.StateChangeCount = 0;
  local_88.bHasPendingCompletedState = false;
  local_88._119_1_ = 0;
  local_88.CachedScheduledTickRequest.NextDeltaTime = 0.0;
  local_88.CachedScheduledTickRequest.Reason = None;
  local_88.ActiveFrames.ArrayNum = 0;
  local_88.ActiveFrames.ArrayMax = 0;
  local_88.DelayedTransitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.DelayedTransitions.ArrayNum = 0;
  local_88.DelayedTransitions.ArrayMax = 0;
  local_88.RandomStream.InitialSeed = 0;
  local_88.RandomStream.Seed = 0;
  local_88.DelegateActiveListeners.Listeners.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  local_88.DelegateActiveListeners.Listeners.ArrayNum = 0;
  local_88.DelegateActiveListeners.Listeners.ArrayMax = 0;
  local_88.ScheduledTickRequests.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ScheduledTickRequests.ArrayNum = 0;
  local_88.ScheduledTickRequests.ArrayMax = 0;
  FInstancedStruct::FInstancedStruct(&local_88.ExecutionExtension.InstancedStruct);
  local_88.LastTickStatus = Failed;
  local_88.TreeRunStatus = Unset;
  local_88.RequestedStop = Unset;
  local_88.CurrentPhase = Unset;
  local_88.StateChangeCount = 0;
  local_88.bHasPendingCompletedState = false;
  FStateTreeExecutionState::operator=(&this->ExecutionState,&local_88);
  FInstancedStruct::Reset(&local_88.ExecutionExtension.InstancedStruct);
  if (local_88.ScheduledTickRequests.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ScheduledTickRequests.AllocatorInstance.Data);
  }
  if ((local_88.DelegateActiveListeners.BroadcastingLockCount != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BroadcastingLockCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeExecutionTypes.cpp"
                         ,300,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  DestructItems<FStateTreeDelegateActiveListeners::FActiveListener,int>
            ((FActiveListener *)local_88.DelegateActiveListeners.Listeners.AllocatorInstance.Data,
             local_88.DelegateActiveListeners.Listeners.ArrayNum);
  if ((FActiveListener *)local_88.DelegateActiveListeners.Listeners.AllocatorInstance.Data !=
      (FActiveListener *)0x0) {
    FMemory::Free(local_88.DelegateActiveListeners.Listeners.AllocatorInstance.Data);
  }
  DestructItems<FStateTreeTransitionDelayedState,int>
            ((FStateTreeTransitionDelayedState *)local_88.DelayedTransitions.AllocatorInstance.Data,
             local_88.DelayedTransitions.ArrayNum);
  if ((FStateTreeTransitionDelayedState *)local_88.DelayedTransitions.AllocatorInstance.Data !=
      (FStateTreeTransitionDelayedState *)0x0) {
    FMemory::Free(local_88.DelayedTransitions.AllocatorInstance.Data);
  }
  DestructItems<FStateTreeExecutionFrame,int>
            ((FStateTreeExecutionFrame *)local_88.ActiveFrames.AllocatorInstance.Data,
             local_88.ActiveFrames.ArrayNum);
  if ((FStateTreeExecutionFrame *)local_88.ActiveFrames.AllocatorInstance.Data !=
      (FStateTreeExecutionFrame *)0x0) {
    FMemory::Free(local_88.ActiveFrames.AllocatorInstance.Data);
  }
  FInstancedStructContainer::Reset(&(this->ExecutionRuntimeData).InstanceStructs);
  (this->ExecutionRuntimeDataInfos).ArrayNum = 0;
  if ((this->ExecutionRuntimeDataInfos).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStateTreeInstanceStorage::FExecutionRuntimeInfo>_>
              (0xc,4,0,&(this->ExecutionRuntimeDataInfos).AllocatorInstance,0,
               &(this->ExecutionRuntimeDataInfos).ArrayMax);
  }
  piVar1 = &(this->TemporaryInstances).ArrayMax;
  pFVar3 = (FStateTreeTemporaryInstanceData *)(this->TemporaryInstances).AllocatorInstance.Data;
  iVar2 = (this->TemporaryInstances).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FStateTreeTemporaryInstanceData,int>(pFVar3,iVar2);
    (this->TemporaryInstances).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->TemporaryInstances).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FStateTreeTemporaryInstanceData,int>(pFVar3,iVar2);
    (this->TemporaryInstances).ArrayNum = 0;
  }
  if (this->bIsOwningEventQueue != false) {
    FStateTreeEventQueue::Reset((this->EventQueue).Object);
  }
  (this->TransitionRequests).ArrayNum = 0;
  if ((this->TransitionRequests).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->TransitionRequests).AllocatorInstance,0,
               &(this->TransitionRequests).ArrayMax);
  }
  FInstancedStruct::Reset(&(this->GlobalParameters).Value);
  pFVar7 = ::operator_new(0x40);
  if (pFVar7 != (FWeakObjectPtr *)0x0) {
    pFVar7[1].ObjectIndex = 0;
    pFVar7[1].ObjectSerialNumber = 0;
    *pFVar7 = (FWeakObjectPtr)
              UE::Core::Private::PimplPtr::
              DeleterFunc<UE::StateTree::Debug::FRuntimeValidationInstanceData>;
    *(undefined4 *)((longlong)&pFVar7[6].ObjectIndex + 1) = 0;
    *(undefined2 *)((longlong)&pFVar7[6].ObjectSerialNumber + 1) = 0;
    *(undefined1 *)((longlong)&pFVar7[6].ObjectSerialNumber + 3) = 0;
    pFVar7[2].ObjectIndex = 0;
    pFVar7[2].ObjectSerialNumber = 0;
    pFVar7[3].ObjectIndex = 0;
    pFVar7[3].ObjectSerialNumber = 0;
    pFVar7[4].ObjectIndex = 0;
    pFVar7[4].ObjectSerialNumber = 0;
    pFVar7[5].ObjectIndex = 0;
    pFVar7[5].ObjectSerialNumber = 0;
    *(undefined1 *)&pFVar7[6].ObjectIndex = 0;
    pFVar8 = pFVar7;
  }
  pTVar9 = &this->RuntimeValidationData;
  if ((TPimplPtr<UE::StateTree::Debug::FRuntimeValidationInstanceData,0> *)&local_10 == pTVar9) {
    if ((FRuntimeValidationInstanceData *)(pFVar8 + 2) == (FRuntimeValidationInstanceData *)0x0) {
      return;
    }
  }
  else {
    pFVar4 = pTVar9->Ptr;
    pTVar9->Ptr = (FRuntimeValidationInstanceData *)(pFVar8 + 2);
    if (pFVar4 == (FRuntimeValidationInstanceData *)0x0) {
      return;
    }
    pFVar8 = &pFVar4[-1].Owner.WeakPtr;
  }
  (*(code *)*pFVar8)();
  return;
}

// ResetBroadcastedDelegates @ 14d506950

void __thiscall
FStateTreeInstanceStorage::ResetBroadcastedDelegates(FStateTreeInstanceStorage *this)

{
  int *piVar1;
  
  piVar1 = &(this->BroadcastedDelegates).ArrayMax;
  (this->BroadcastedDelegates).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->BroadcastedDelegates).AllocatorInstance,0,piVar1);
  }
  return;
}

// ResetTemporaryInstances @ 14d506a10

void __thiscall FStateTreeInstanceStorage::ResetTemporaryInstances(FStateTreeInstanceStorage *this)

{
  int *piVar1;
  int iVar2;
  FStateTreeTemporaryInstanceData *pFVar3;
  
  piVar1 = &(this->TemporaryInstances).ArrayMax;
  pFVar3 = (FStateTreeTemporaryInstanceData *)(this->TemporaryInstances).AllocatorInstance.Data;
  iVar2 = (this->TemporaryInstances).ArrayNum;
  if (-1 < (this->TemporaryInstances).ArrayMax) {
    DestructItems<FStateTreeTemporaryInstanceData,int>(pFVar3,iVar2);
    (this->TemporaryInstances).ArrayNum = 0;
    return;
  }
  DestructItems<FStateTreeTemporaryInstanceData,int>(pFVar3,iVar2);
  (this->TemporaryInstances).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->TemporaryInstances).AllocatorInstance,0,piVar1);
  }
  return;
}

// ResetTransitionRequests @ 14d506ae0

void __thiscall FStateTreeInstanceStorage::ResetTransitionRequests(FStateTreeInstanceStorage *this)

{
  (this->TransitionRequests).ArrayNum = 0;
  if ((this->TransitionRequests).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->TransitionRequests).AllocatorInstance,0,
               &(this->TransitionRequests).ArrayMax);
  }
  return;
}

// SetGlobalParameters @ 14d513da0

void __thiscall
FStateTreeInstanceStorage::SetGlobalParameters
          (FStateTreeInstanceStorage *this,FInstancedPropertyBag *param_1)

{
  if (&this->GlobalParameters != param_1) {
    FInstancedStruct::InitializeAs
              (&(this->GlobalParameters).Value,(param_1->Value).ScriptStruct.field0_0x0.DebugPtr,
               (param_1->Value).StructMemory);
    return;
  }
  return;
}

// SetSharedEventQueue @ 14d515060

void __thiscall
FStateTreeInstanceStorage::SetSharedEventQueue
          (FStateTreeInstanceStorage *this,TSharedRef<FStateTreeEventQueue,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FStateTreeEventQueue *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->EventQueue).SharedReferenceCount.ReferenceController;
  (this->EventQueue).Object = pFVar2;
  (this->EventQueue).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->bIsOwningEventQueue = false;
  return;
}

// operator() @ 15057f0e0

bool __thiscall
`FStateTreeInstanceStorage::GenerateUniqueId'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_8229051893393915284>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8229051893393915284>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


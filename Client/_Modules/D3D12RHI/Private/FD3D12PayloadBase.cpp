// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 9

// HasPreExecuteWork @ 1459c3850

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall FD3D12PayloadBase::HasPreExecuteWork(FD3D12PayloadBase *this)

{
  return *(longlong *)&this->PreExecuteCallback != 0;
}

// HasSignalWork @ 1459c3870

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall FD3D12PayloadBase::HasSignalWork(FD3D12PayloadBase *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x18))();
  if ((((cVar1 == '\0') && ((this->ManualFencesToSignal).ArrayNum < 1)) &&
      ((this->SubmissionEvent).Reference == (FBaseGraphTask *)0x0)) &&
     ((this->EndFrameEvent).bIsSet == false)) {
    return false;
  }
  return true;
}

// HasUpdateReservedResourcesWork @ 1459c38c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall FD3D12PayloadBase::HasUpdateReservedResourcesWork(FD3D12PayloadBase *this)

{
  return 0 < (this->ReservedResourcesToCommit).ArrayNum;
}

// HasWaitWork @ 1459c38e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall FD3D12PayloadBase::HasWaitWork(FD3D12PayloadBase *this)

{
  if (((this->ManualFencesToWait).ArrayNum < 1) && ((this->QueueFencesToWait).ArrayNum < 1)) {
    return false;
  }
  return true;
}

// RequiresQueueFenceSignal @ 1459d62e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall FD3D12PayloadBase::RequiresQueueFenceSignal(FD3D12PayloadBase *this)

{
  char cVar1;
  
  if ((this->bAlwaysSignal == false) && ((this->SyncPointsToSignal).ArrayNum < 1)) {
    cVar1 = (**(code **)(this->_padding_ + 0x10))();
    if (cVar1 == '\0') {
      return false;
    }
  }
  return true;
}

// FD3D12PayloadBase @ 145a44220

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12PayloadBase * __thiscall
FD3D12PayloadBase::FD3D12PayloadBase(FD3D12PayloadBase *this,FD3D12Queue *param_1)

{
  FQueue_u_0 FVar1;
  FQueue FVar2;
  undefined4 extraout_var;
  
  (this->SyncPointsToWait)._padding_ = 0;
  (this->SyncPointsToWait)._padding_ = 0;
  (this->SyncPointsToWait).Index = 0;
  (this->QueueFencesToWait).AllocatorInstance.SecondaryData =
       (ForElementType<FD3D12PayloadBase::FQueueFence>)0x0;
  this->_padding_ = (longlong)&___7FD3D12PayloadBase__6B_;
  this->Queue = param_1;
  (this->QueueFencesToWait).ArrayNum = 0;
  (this->QueueFencesToWait).ArrayMax = 0x18;
  (this->ManualFencesToWait).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManualFencesToWait).ArrayNum = 0;
  (this->ManualFencesToWait).ArrayMax = 0;
  (this->ReservedResourcesToCommit).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReservedResourcesToCommit).ArrayNum = 0;
  (this->ReservedResourcesToCommit).ArrayMax = 0;
  this->bAlwaysSignal = false;
  this->bSubmitted = (atomic<bool>)0x0;
  *(undefined8 *)&this->PreExecuteCallback = 0;
  *(undefined8 *)&(this->PreExecuteCallback).field_0x28 = 0;
  (this->CommandListsToExecute).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandListsToExecute).ArrayNum = 0;
  (this->CommandListsToExecute).ArrayMax = 0;
  (this->ManualFencesToSignal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManualFencesToSignal).ArrayNum = 0;
  (this->ManualFencesToSignal).ArrayMax = 0;
  (this->SyncPointsToSignal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SyncPointsToSignal).ArrayNum = 0;
  (this->SyncPointsToSignal).ArrayMax = 0;
  this->CompletionFenceValue = 0;
  (this->SubmissionEvent).Reference = (FBaseGraphTask *)0x0;
  (this->SubmissionTime).bIsSet = false;
  (this->Timing).bIsSet = false;
  (this->AllocatorsToRelease).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllocatorsToRelease).ArrayNum = 0;
  (this->AllocatorsToRelease).ArrayMax = 0;
  (this->BatchedObjects).TimestampQueries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchedObjects).TimestampQueries.ArrayNum = 0;
  (this->BatchedObjects).TimestampQueries.ArrayMax = 0;
  (this->BatchedObjects).OcclusionQueries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchedObjects).OcclusionQueries.ArrayNum = 0;
  (this->BatchedObjects).OcclusionQueries.ArrayMax = 0;
  (this->BatchedObjects).PipelineStatsQueries.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BatchedObjects).PipelineStatsQueries.ArrayNum = 0;
  (this->BatchedObjects).PipelineStatsQueries.ArrayMax = 0;
  *(undefined8 *)&(this->BatchedObjects).QueryRanges = 0;
  *(undefined8 *)&(this->BatchedObjects).QueryRanges.field_0x8 = 0;
  *(undefined8 *)&(this->BatchedObjects).QueryRanges.field_0x20 = 0;
  *(undefined4 *)&(this->BatchedObjects).QueryRanges.field_0x28 = 0;
  *(undefined4 *)&(this->BatchedObjects).QueryRanges.field_0x2c = 0x80;
  *(undefined4 *)&(this->BatchedObjects).QueryRanges.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BatchedObjects).QueryRanges.field_0x34 = 0;
  *(undefined8 *)&(this->BatchedObjects).QueryRanges.field_0x40 = 0;
  *(undefined4 *)&(this->BatchedObjects).QueryRanges.field_0x48 = 0;
  (this->BreadcrumbRange).First = (FRHIBreadcrumbNode *)0x0;
  (this->BreadcrumbRange).Last = (FRHIBreadcrumbNode *)0x0;
  (this->BreadcrumbAllocators).Object = (FRHIBreadcrumbAllocatorArray *)0x0;
  (this->BreadcrumbAllocators).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FVar2 = FD3D12Queue::GetProfilerQueue(param_1);
  FVar1 = *(FQueue_u_0 *)CONCAT44(extraout_var,FVar2.field0_0x0);
  (this->EventStream).First = (FChunk *)0x0;
  (this->EventStream).Current = (FChunk *)0x0;
  (this->EventStream).Queue.field0_0x0 = FVar1;
  (this->EndFrameEvent).bIsSet = false;
  return this;
}

// ~FD3D12PayloadBase @ 145a480d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12PayloadBase::~FD3D12PayloadBase(FD3D12PayloadBase *this)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  FBaseGraphTask *pFVar5;
  longlong *plVar6;
  ForElementType<FD3D12PayloadBase::FQueueFence> FVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FD3D12PayloadBase__6B_;
  pFVar9 = (this->AllocatorsToRelease).AllocatorInstance.Data;
  iVar2 = (this->AllocatorsToRelease).ArrayNum;
  pFVar4 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AllocatorsToRelease).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FD3D12CommandAllocator_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar4) break;
    FD3D12Device::ReleaseCommandAllocator(this->Queue->Device,*(FD3D12CommandAllocator **)pFVar9);
    pFVar9 = pFVar9 + 8;
  }
  UE::RHI::GPUProfiler::FEventStream::~FEventStream(&this->EventStream);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BreadcrumbAllocators).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->BatchedObjects).QueryRanges.field_0x48 = 0;
  pvVar3 = *(void **)&(this->BatchedObjects).QueryRanges.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->BatchedObjects).QueryRanges);
  pFVar4 = (this->BatchedObjects).PipelineStatsQueries.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->BatchedObjects).OcclusionQueries.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->BatchedObjects).TimestampQueries.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->AllocatorsToRelease).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar5 = (this->SubmissionEvent).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar5->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>
            ((TRefCountPtr<FD3D12SyncPoint> *)(this->SyncPointsToSignal).AllocatorInstance.Data,
             (this->SyncPointsToSignal).ArrayNum);
  pFVar4 = (this->SyncPointsToSignal).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FD3D12PayloadBase::FManualFence,int>
            ((FManualFence *)(this->ManualFencesToSignal).AllocatorInstance.Data,
             (this->ManualFencesToSignal).ArrayNum);
  pFVar4 = (this->ManualFencesToSignal).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->CommandListsToExecute).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  if (*(longlong *)&this->PreExecuteCallback != 0) {
    plVar6 = *(longlong **)&(this->PreExecuteCallback).field_0x28;
    plVar8 = (longlong *)&(this->PreExecuteCallback).field_0x10;
    if (plVar6 != (longlong *)0x0) {
      plVar8 = plVar6;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  pFVar4 = (this->ReservedResourcesToCommit).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FD3D12PayloadBase::FManualFence,int>
            ((FManualFence *)(this->ManualFencesToWait).AllocatorInstance.Data,
             (this->ManualFencesToWait).ArrayNum);
  pFVar4 = (this->ManualFencesToWait).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FVar7 = (this->QueueFencesToWait).AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<FD3D12PayloadBase::FQueueFence>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>
            ((TRefCountPtr<FD3D12SyncPoint> *)(this->SyncPointsToWait)._padding_,
             (int)(this->SyncPointsToWait)._padding_);
  pvVar3 = (void *)(this->SyncPointsToWait)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  return;
}

// AddQueueFenceWait @ 145a511f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12PayloadBase::AddQueueFenceWait(FD3D12PayloadBase *this,FD3D12Fence *param_1,ulong64 param_2)

{
  TArray<FD3D12PayloadBase::FQueueFence,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FD3D12PayloadBase::FQueueFence> FVar7;
  ForElementType<FD3D12PayloadBase::FQueueFence> FVar8;
  undefined1 local_res8 [8];
  FD3D12Fence *local_28;
  ulong64 uStack_20;
  
  pTVar1 = &this->QueueFencesToWait;
  FVar7 = (this->QueueFencesToWait).AllocatorInstance.SecondaryData;
  iVar6 = (this->QueueFencesToWait).ArrayNum;
  if (FVar7 == (ForElementType<FD3D12PayloadBase::FQueueFence>)0x0) {
    FVar7 = (ForElementType<FD3D12PayloadBase::FQueueFence>)pTVar1;
  }
  FVar8 = (ForElementType<FD3D12PayloadBase::FQueueFence>)((longlong)iVar6 * 0x10 + (longlong)FVar7)
  ;
  while( true ) {
    if ((this->QueueFencesToWait).ArrayNum != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FD3D12PayloadBase::FQueueFence,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (FVar7 == FVar8) break;
    if (*(FD3D12Fence **)FVar7 == param_1) {
      if (param_2 < *(ulonglong *)((longlong)FVar7 + 8)) {
        param_2 = *(ulong64 *)((longlong)FVar7 + 8);
      }
      *(ulong64 *)((longlong)FVar7 + 8) = param_2;
      return;
    }
    FVar7 = (ForElementType<FD3D12PayloadBase::FQueueFence>)((longlong)FVar7 + 0x10);
  }
  FVar7 = (this->QueueFencesToWait).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<FD3D12PayloadBase::FQueueFence>)0x0) {
    FVar7 = (ForElementType<FD3D12PayloadBase::FQueueFence>)pTVar1;
  }
  local_28 = param_1;
  uStack_20 = param_2;
  if ((((ulonglong)FVar7 <= &local_28) &&
      (&local_28 <
       (FD3D12Fence **)((longlong)(this->QueueFencesToWait).ArrayMax * 0x10 + (longlong)FVar7))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->QueueFencesToWait).ArrayNum;
  piVar2 = &(this->QueueFencesToWait).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12PayloadBase::FQueueFence>_>
                      (0x810,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->QueueFencesToWait).ArrayNum = iVar6 + 1;
  FVar7 = (this->QueueFencesToWait).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<FD3D12PayloadBase::FQueueFence>)0x0) {
    FVar7 = (ForElementType<FD3D12PayloadBase::FQueueFence>)pTVar1;
  }
  puVar3 = (undefined8 *)((longlong)FVar7 + (longlong)iVar6 * 0x10);
  *puVar3 = local_28;
  puVar3[1] = uStack_20;
  return;
}

// PreExecute @ 145a6ea80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12PayloadBase::PreExecute(FD3D12PayloadBase *this)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ID3D12CommandQueue *local_res8;
  
  if (*(void **)&this->PreExecuteCallback != (void *)0x0) {
    local_res8 = (this->Queue->D3DCommandQueue).Reference;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->PreExecuteCallback);
    pcVar1 = *(code **)&this->PreExecuteCallback;
    plVar2 = *(longlong **)&(this->PreExecuteCallback).field_0x28;
    plVar4 = (longlong *)&(this->PreExecuteCallback).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3,&local_res8);
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 6

// FD3D12Queue @ 1459ef810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12Queue * __thiscall
FD3D12Queue::FD3D12Queue
          (FD3D12Queue *this,FD3D12Device *param_1,ED3D12QueueType param_2,int param_3)

{
  TRefCountPtr<ID3D12Fence> *pTVar1;
  ID3D12CommandQueue *pIVar2;
  ID3D12Fence *pIVar3;
  longlong *plVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  int iVar8;
  atomic<TMpscQueue<FD3D12Payload_*,FMemory>::FNode_*> aVar9;
  atomic<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*> aVar10;
  FD3D12Queue *pFVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  undefined4 uVar14;
  undefined1 auStackY_d8 [32];
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  this->Device = param_1;
  (this->D3DCommandQueue).Reference = (ID3D12CommandQueue *)0x0;
  this->QueueType = param_2;
  (this->Fence).D3DFence.Reference = (ID3D12Fence *)0x0;
  (this->Fence).LastSignaledValue = (atomic<unsigned___int64>)0x0;
  (this->Fence).bInterruptAwaited = false;
  (this->Fence).NextCompletionValue = 1;
  this->QueueIndex = param_3;
  (this->Fence).OwnerQueue = this;
  (this->PendingSubmission).Head = (atomic<TMpscQueue<FD3D12Payload_*,FMemory>::FNode_*>)0x0;
  aVar9 = (atomic<TMpscQueue<FD3D12Payload_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
  *(undefined8 *)aVar9 = 0;
  (this->PendingSubmission).Head = aVar9;
  (this->PendingSubmission).Tail = (FNode *)aVar9;
  (this->PendingInterrupt).Tail = (atomic<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*>)0x0;
  (this->PendingInterrupt).NumElems = (atomic<int>)0x0;
  aVar10 = (atomic<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
  uVar14 = 2;
  *(undefined8 *)aVar10 = 0;
  (this->PendingInterrupt).Tail = aVar10;
  (this->PendingInterrupt).TailCopy = (FNode *)aVar10;
  (this->PendingInterrupt).First = (FNode *)aVar10;
  (this->PendingInterrupt).Head = (FNode *)aVar10;
  LOCK();
  (this->PendingInterrupt).NumElems = (atomic<int>)0x0;
  UNLOCK();
  *(undefined8 *)&(this->BarrierTimestamps).Heaps = 0;
  *(undefined8 *)&(this->BarrierTimestamps).Heaps.field_0x8 = 0;
  *(undefined8 *)&(this->BarrierTimestamps).Heaps.field_0x20 = 0;
  (this->BarrierTimestamps).Device = param_1;
  (this->BarrierTimestamps).QueueType = param_2;
  (this->BarrierTimestamps).QueryType = D3D12_QUERY_TYPE_TIMESTAMP;
  this->PayloadToSubmit = (FD3D12Payload *)0x0;
  this->BarrierAllocator = (FD3D12CommandAllocator *)0x0;
  *(undefined4 *)&(this->BarrierTimestamps).Heaps.field_0x28 = 0;
  *(undefined4 *)&(this->BarrierTimestamps).Heaps.field_0x2c = 0x80;
  *(undefined4 *)&(this->BarrierTimestamps).Heaps.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BarrierTimestamps).Heaps.field_0x34 = 0;
  *(undefined8 *)&(this->BarrierTimestamps).Heaps.field_0x40 = 0;
  *(undefined4 *)&(this->BarrierTimestamps).Heaps.field_0x48 = 0;
  (this->BarrierTimestamps).CurrentHeap = (FD3D12QueryHeap *)0x0;
  (this->BarrierTimestamps).CurrentRange = (FD3D12QueryRange *)0x0;
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
  this->NumCommandListsInBatch = 0;
  *(undefined4 *)&(this->BatchedObjects).QueryRanges.field_0x28 = 0;
  *(undefined4 *)&(this->BatchedObjects).QueryRanges.field_0x2c = 0x80;
  *(undefined4 *)&(this->BatchedObjects).QueryRanges.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BatchedObjects).QueryRanges.field_0x34 = 0;
  *(undefined8 *)&(this->BatchedObjects).QueryRanges.field_0x40 = 0;
  *(undefined4 *)&(this->BatchedObjects).QueryRanges.field_0x48 = 0;
  *(undefined8 *)&(this->ObjectPool).Contexts = 0;
  *(undefined8 *)&(this->ObjectPool).Contexts = 0;
  *(undefined8 *)&(this->ObjectPool).Allocators = 0;
  *(undefined8 *)&(this->ObjectPool).Allocators = 0;
  *(undefined8 *)&(this->ObjectPool).Lists = 0;
  *(undefined8 *)&(this->ObjectPool).Lists = 0;
  this->Timing = (FD3D12Timing *)0x0;
  (this->DiagnosticBuffer).Ptr = (FD3D12DiagnosticBuffer *)0x0;
  this->RayTracingDispatchRaysDescBuffer = (FD3D12Buffer *)0x0;
  bVar7 = (bool)(**(code **)(FD3D12DynamicRHI::SingleD3DRHI->_padding_ + 0x5a8))
                          (FD3D12DynamicRHI::SingleD3DRHI,param_2);
  (this->ExecuteCommandListsFence).D3DFence.Reference = (ID3D12Fence *)0x0;
  (this->ExecuteCommandListsFence).LastSignaledValue = (atomic<unsigned___int64>)0x0;
  (this->ExecuteCommandListsFence).bInterruptAwaited = false;
  this->bSupportsTileMapping = bVar7;
  (this->ExecuteCommandListsFence).OwnerQueue = this;
  (this->ExecuteCommandListsFence).NextCompletionValue = 1;
  if ((*(longlong *)&param_1->field_0x10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FD3D12Queue *)(*pcVar5)();
    return pFVar11;
  }
  if (param_2 != Direct) {
    if (param_2 == Copy) {
      uVar14 = 3;
      goto LAB_1459efa85;
    }
    if (param_2 == Async) goto LAB_1459efa85;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Queue.h"
                       ,0x2e,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FD3D12Queue *)(*pcVar5)();
      return pFVar11;
    }
  }
  uVar14 = 0;
LAB_1459efa85:
  pTVar6 = CVarD3D12GPUTimeout.Ref;
  local_4c = 0;
  local_44 = 1;
  if (GVirtualMGPU == 0) {
    local_44 = *(undefined4 *)param_1;
  }
  local_50 = uVar14;
  bVar7 = IsInParallelGameThread();
  if ((bVar7) || (bVar7 = IsInGameThread(), bVar7)) {
    lVar12 = 0;
  }
  else {
    lVar12 = 4;
  }
  local_48 = (uint)(*(int *)((longlong)pTVar6->ShadowedValue + lVar12) == 0);
  (**(code **)(FD3D12DynamicRHI::SingleD3DRHI->_padding_ + 0x5b8))
            (FD3D12DynamicRHI::SingleD3DRHI,param_1,&local_50,&this->D3DCommandQueue);
  pIVar2 = (this->D3DCommandQueue).Reference;
  pcVar5 = *(code **)((longlong)*pIVar2 + 0x30);
  if ((((param_2 != Direct) && (param_2 != Copy)) && (param_2 != Async)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Queue.h"
                         ,0x23,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FD3D12Queue *)(*pcVar5)();
    return pFVar11;
  }
  ::FString::PrintfImpl(&local_a0,L"%s Queue (GPU %d)");
  (*pcVar5)(pIVar2);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if ((*(longlong *)&param_1->field_0x10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FD3D12Queue *)(*pcVar5)();
    return pFVar11;
  }
  pTVar1 = &(this->Fence).D3DFence;
  pIVar3 = pTVar1->Reference;
  plVar4 = *(longlong **)(*(longlong *)&param_1->field_0x10 + 8);
  pcVar5 = *(code **)(*plVar4 + 0x120);
  if (pIVar3 != (ID3D12Fence *)0x0) {
    pTVar1->Reference = (ID3D12Fence *)0x0;
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  iVar8 = (*pcVar5)(plVar4,0,0,&_GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76);
  if (iVar8 < 0) {
    local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.Data.ArrayNum = 0;
    local_90.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar8,
               "Device->GetDevice()->CreateFence( 0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(Fence.D3DFence.GetInitReference()) )"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
               ,0x45,(ID3D12Device *)0x0,&local_90);
  }
  pIVar3 = pTVar1->Reference;
  pcVar5 = *(code **)((longlong)*pIVar3 + 0x30);
  if (((param_2 != Direct) && (param_2 != Copy)) &&
     ((param_2 != Async &&
      (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Queue.h"
                          ,0x23,L""), bVar7)))) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FD3D12Queue *)(*pcVar5)();
    return pFVar11;
  }
  ::FString::PrintfImpl(&local_80,L"%s Queue Fence (GPU %d)");
  (*pcVar5)(pIVar3);
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if ((*(longlong *)&param_1->field_0x10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FD3D12Queue *)(*pcVar5)();
    return pFVar11;
  }
  pTVar1 = &(this->ExecuteCommandListsFence).D3DFence;
  pIVar3 = pTVar1->Reference;
  plVar4 = *(longlong **)(*(longlong *)&param_1->field_0x10 + 8);
  pcVar5 = *(code **)(*plVar4 + 0x120);
  if (pIVar3 != (ID3D12Fence *)0x0) {
    pTVar1->Reference = (ID3D12Fence *)0x0;
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  iVar8 = (*pcVar5)(plVar4,0,0,&_GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76);
  if (iVar8 < 0) {
    local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.Data.ArrayNum = 0;
    local_70.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar8,
               "Device->GetDevice()->CreateFence( 0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(ExecuteCommandListsFence.D3DFence.GetInitReference()) )"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
               ,0x4d,(ID3D12Device *)0x0,&local_70);
  }
  pIVar3 = pTVar1->Reference;
  pcVar5 = *(code **)((longlong)*pIVar3 + 0x30);
  if ((((param_2 != Direct) && (param_2 != Copy)) && (param_2 != Async)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Queue.h"
                         ,0x23,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FD3D12Queue *)(*pcVar5)();
    return pFVar11;
  }
  ::FString::PrintfImpl(&local_60,L"%s ExecuteCommandListsFence (GPU %d)");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_60.Data.ArrayNum != 0) {
    FVar13.Data = local_60.Data.AllocatorInstance.Data;
  }
  (*pcVar5)(pIVar3,FVar13.Data);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FD3D12Queue @ 1459f8df0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Queue::~FD3D12Queue(FD3D12Queue *this)

{
  ID3D12Fence *pIVar1;
  FD3D12DiagnosticBuffer *this_00;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  atomic<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*> aVar4;
  atomic<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*> aVar5;
  atomic<TMpscQueue<FD3D12Payload_*,FMemory>::FNode_*> aVar6;
  ID3D12CommandQueue *pIVar7;
  code *pcVar8;
  bool bVar9;
  atomic<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*> aVar10;
  
  if ((((this->PendingSubmission).Tail)->Next !=
       (atomic<TMpscQueue<FD3D12Payload_*,FMemory>::FNode_*>)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingSubmission.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                         ,0x53,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((this->PendingInterrupt).NumElems != (atomic<int>)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingInterrupt.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                         ,0x54,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pIVar1 = (this->ExecuteCommandListsFence).D3DFence.Reference;
  if (pIVar1 != (ID3D12Fence *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  this_00 = (this->DiagnosticBuffer).Ptr;
  if (this_00 != (FD3D12DiagnosticBuffer *)0x0) {
    FD3D12DiagnosticBuffer::~FD3D12DiagnosticBuffer(this_00);
    ::operator_delete(this_00,0x20);
  }
  TD3D12ObjectPool<FD3D12CommandList>::CleanupResources(&(this->ObjectPool).Lists);
  FLockFreePointerListLIFOBase<FD3D12CommandList,64,1>::
  ~FLockFreePointerListLIFOBase<FD3D12CommandList,64,1>
            ((FLockFreePointerListLIFOBase<FD3D12CommandList,64,1> *)&(this->ObjectPool).Lists);
  TD3D12ObjectPool<FD3D12CommandAllocator>::CleanupResources(&(this->ObjectPool).Allocators);
  FLockFreePointerListLIFOBase<FD3D12CommandAllocator,64,1>::
  ~FLockFreePointerListLIFOBase<FD3D12CommandAllocator,64,1>
            ((FLockFreePointerListLIFOBase<FD3D12CommandAllocator,64,1> *)
             &(this->ObjectPool).Allocators);
  TD3D12ObjectPool<FD3D12ContextCommon>::CleanupResources(&(this->ObjectPool).Contexts);
  FLockFreePointerListLIFOBase<FD3D12ContextCommon,64,1>::
  ~FLockFreePointerListLIFOBase<FD3D12ContextCommon,64,1>
            ((FLockFreePointerListLIFOBase<FD3D12ContextCommon,64,1> *)&this->ObjectPool);
  *(undefined4 *)&(this->BatchedObjects).QueryRanges.field_0x48 = 0;
  pvVar2 = *(void **)&(this->BatchedObjects).QueryRanges.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->BatchedObjects).QueryRanges);
  pFVar3 = (this->BatchedObjects).PipelineStatsQueries.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->BatchedObjects).OcclusionQueries.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->BatchedObjects).TimestampQueries.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->BarrierTimestamps).Heaps.field_0x48 = 0;
  pvVar2 = *(void **)&(this->BarrierTimestamps).Heaps.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->BarrierTimestamps).Heaps);
  aVar4 = (this->PendingInterrupt).Tail;
  aVar10 = (atomic<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*>)(this->PendingInterrupt).First;
  do {
    aVar5 = *(atomic<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*> *)aVar10;
    FMemory::Free((void *)aVar10);
    bVar9 = aVar10 != aVar4;
    aVar10 = aVar5;
  } while (bVar9);
  while (aVar5 != (atomic<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*>)0x0) {
    aVar4 = *(atomic<TSpscQueue<FD3D12Payload_*,FMemory>::FNode_*> *)aVar5;
    FMemory::Free((void *)aVar5);
    aVar5 = aVar4;
  }
  aVar6 = ((this->PendingSubmission).Tail)->Next;
  FMemory::Free((this->PendingSubmission).Tail);
  while (aVar6 != (atomic<TMpscQueue<FD3D12Payload_*,FMemory>::FNode_*>)0x0) {
    (this->PendingSubmission).Tail = (FNode *)aVar6;
    aVar6 = *(atomic<TMpscQueue<FD3D12Payload_*,FMemory>::FNode_*> *)aVar6;
    FMemory::Free((this->PendingSubmission).Tail);
  }
  pIVar1 = (this->Fence).D3DFence.Reference;
  if (pIVar1 != (ID3D12Fence *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar7 = (this->D3DCommandQueue).Reference;
  if (pIVar7 != (ID3D12CommandQueue *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  return;
}

// CleanupResources @ 145a06ec0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Queue::CleanupResources(FD3D12Queue *this)

{
  TD3D12ObjectPool<FD3D12ContextCommon>::CleanupResources(&(this->ObjectPool).Contexts);
  TD3D12ObjectPool<FD3D12CommandAllocator>::CleanupResources(&(this->ObjectPool).Allocators);
  TD3D12ObjectPool<FD3D12CommandList>::CleanupResources(&(this->ObjectPool).Lists);
  return;
}

// GetProfilerQueue @ 145a1a8c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FQueue __thiscall FD3D12Queue::GetProfilerQueue(FD3D12Queue *this)

{
  ED3D12QueueType EVar1;
  FD3D12Device *pFVar2;
  code *pcVar3;
  bool bVar4;
  FQueue FVar5;
  FQueue_u_0 FVar6;
  undefined4 *in_RDX;
  
  pFVar2 = this->Device;
  *in_RDX = 0;
  *(undefined1 *)((longlong)in_RDX + 1) = pFVar2->field_0x8;
  EVar1 = this->QueueType;
  FVar5.field0_0x0 = SUB84(in_RDX,0);
  if (EVar1 != Direct) {
    if (EVar1 == Copy) {
      *(undefined1 *)in_RDX = 2;
      return (FQueue)FVar5.field0_0x0;
    }
    if (EVar1 == Async) {
      *(undefined1 *)in_RDX = 1;
      return (FQueue)FVar5.field0_0x0;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                       ,0x60,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar6.Value = (*pcVar3)();
      return (FQueue_u_0)(FQueue_u_0)FVar6._s_0;
    }
  }
  *(undefined1 *)in_RDX = 0;
  return (FQueue)FVar5.field0_0x0;
}

// FinalizePayload @ 145a66780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

ulong64 __thiscall
FD3D12Queue::FinalizePayload
          (FD3D12Queue *this,bool param_1,
          TArray<FD3D12Payload_*,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  ulong64 *puVar1;
  TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  FD3D12BatchedPayloadObjects *pFVar3;
  FD3D12CommandAllocator **ppFVar4;
  uint uVar5;
  FD3D12Payload *pFVar6;
  longlong lVar7;
  ID3D12GraphicsCommandList *pIVar8;
  ForElementType<FD3D12Payload_*> FVar9;
  code *pcVar10;
  uint uVar11;
  FD3D12CommandList *this_00;
  FD3D12Queue *pFVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  ulong64 uVar16;
  TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_> *pTVar17;
  FD3D12CommandAllocator *pFVar18;
  ForElementType<FD3D12Payload_*> FVar19;
  longlong lVar20;
  ForElementType<FD3D12ResidencyHandle_*> FVar21;
  ulonglong uVar22;
  FIdentityFunctor FVar23;
  int iVar24;
  FD3D12Payload **ppFVar25;
  TArray<FD3D12QueryLocation,TSizedDefaultAllocator<32>_> *pTVar26;
  longlong *plVar27;
  uint uVar28;
  undefined1 *puVar29;
  TRefCountPtr<FD3D12QueryHeap> *pTVar30;
  undefined1 *puVar31;
  wchar_t *pwVar32;
  uint *puVar33;
  TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar34;
  TBitArray<FDefaultBitArrayAllocator> *pTVar35;
  longlong *plVar36;
  uint uVar37;
  void *_Src;
  FD3D12Queue *pFVar38;
  ForElementType<FD3D12Payload_*> FVar39;
  bool bVar40;
  undefined1 auStackY_218 [32];
  FIdentityFunctor local_1c7;
  undefined1 local_1c6;
  undefined1 local_1c5;
  undefined1 local_1c4;
  byte local_1c3;
  uint local_1c0;
  FD3D12CommandList *local_1b8;
  undefined1 local_1b0 [8];
  FD3D12Queue *local_1a8;
  TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
  *local_1a0;
  undefined8 local_198;
  FLLMScope local_190 [2];
  undefined1 local_188 [16];
  ForElementType<FD3D12ResidencyHandle_*> local_178;
  int iStack_170;
  uint uStack_16c;
  undefined1 *local_168;
  undefined4 uStack_160;
  int iStack_15c;
  int local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  ForElementType<FD3D12Payload_*> local_138;
  FMemScope local_130;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
  *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  ForElementType<FD3D12ResidencyHandle_*> local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_b8 [2];
  undefined4 local_8c;
  undefined4 local_6c;
  ForElementType<FD3D12ResidencyHandle_*> local_68;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  bVar40 = -1 < CpuChannel->Enabled;
  local_1c3 = param_1;
  local_1a8 = this;
  local_138 = (ForElementType<FD3D12Payload_*>)param_2;
  if (bVar40) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId552,"ExecuteCommandList",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.cpp"
               ,0x228);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId552);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name553,L"RHIMisc/ExecuteCommandLists");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_190,LLMScope_Name553,false,None,Default,true);
  FMemScope::FMemScope(&local_130,&LLMScope_Name553,true);
  ppFVar25 = &this->PayloadToSubmit;
  local_188._8_8_ = ppFVar25;
  if (((this->PayloadToSubmit == (FD3D12Payload *)0x0) ||
      (this != *(FD3D12Queue **)&this->PayloadToSubmit->field_0x8)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("PayloadToSubmit && this == &PayloadToSubmit->Queue",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.cpp"
                          ,0x22b,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    uVar16 = (*pcVar10)();
    return uVar16;
  }
  if ((*(int *)&(*ppFVar25)->field_0x18 != 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("PayloadToSubmit->SyncPointsToWait.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.cpp"
                          ,0x22c,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    uVar16 = (*pcVar10)();
    return uVar16;
  }
  this->NumCommandListsInBatch = 0;
  FD3D12QueryAllocator::CloseAndReset
            (&this->BarrierTimestamps,
             (TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
              *)&(*ppFVar25)->field_0x2b0);
  pFVar6 = *ppFVar25;
  local_1a0 = &(this->BatchedObjects).QueryRanges;
  local_198 = (longlong *)&pFVar6->field_0x2b0;
  if (*(int *)&(this->BatchedObjects).QueryRanges.field_0x8 ==
      *(int *)&(this->BatchedObjects).QueryRanges.field_0x34) {
    TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
    ::operator=(local_1a0,
                (TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
                 *)local_198);
  }
  else {
    puVar31 = &pFVar6->field_0x2c0;
    iStack_170 = 0;
    iVar15 = *(int *)&pFVar6->field_0x2d8;
    local_158 = 0;
    uStack_16c = 1;
    iStack_15c = 0;
    if (iVar15 != 0) {
      puVar33 = *(uint **)&pFVar6->field_0x2d0;
      if (*(uint **)&pFVar6->field_0x2d0 == (uint *)0x0) {
        puVar33 = (uint *)puVar31;
      }
      uVar28 = *puVar33;
      while (uVar28 == 0) {
        lVar20 = (longlong)iStack_170;
        local_158 = local_158 + 0x20;
        iStack_170 = iStack_170 + 1;
        iStack_15c = iVar15;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_170)
        goto LAB_145a669ad;
        uVar28 = puVar33[lVar20 + 1];
      }
      uStack_16c = -uVar28 & uVar28;
      uVar22 = (ulonglong)uStack_16c * 2 + 1;
      lVar20 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_148 = (int)lVar20;
      iStack_15c = local_148 + -1 + local_158;
      if (iVar15 < iStack_15c) {
        iStack_15c = iVar15;
      }
    }
LAB_145a669ad:
    uStack_154 = local_8c;
    iStack_150 = *(int *)&pFVar6->field_0x2b8 - *(int *)&pFVar6->field_0x2e4;
    uVar28 = *(uint *)&pFVar6->field_0x2d8;
    uVar37 = uVar28 & 0xffffffe0;
    TStack_120._padding_ = CONCAT44(uStack_16c,iStack_170);
    uStack_160 = 0xffffffff;
    TStack_120.CurrentBitIndex = iStack_15c;
    TStack_120.UnvisitedBitMask = 0xffffffff;
    iVar24 = (int)uVar28 >> 5;
    TStack_120._28_4_ = local_8c;
    TStack_120.BaseBitIndex = local_158;
    uStack_100 = CONCAT44(uStack_14c,iStack_150);
    local_178 = (ForElementType<FD3D12ResidencyHandle_*>)local_198;
    local_168 = puVar31;
    local_128 = local_198;
    TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar31;
    if ((((int)uVar28 < 0) || (iVar15 < (int)uVar28)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      uVar16 = (*pcVar10)();
      return uVar16;
    }
    plVar36 = local_198;
    pTVar34 = local_1a0;
    uVar5 = *(uint *)&pFVar6->field_0x2d8;
    if (uVar28 != uVar5) {
      puVar29 = *(undefined1 **)&pFVar6->field_0x2d0;
      if (*(undefined1 **)&pFVar6->field_0x2d0 == (undefined1 *)0x0) {
        puVar29 = puVar31;
      }
      uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar24 * 4);
      while (uVar28 == 0) {
        lVar20 = (longlong)iVar24;
        uVar37 = uVar37 + 0x20;
        iVar24 = iVar24 + 1;
        uVar28 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
        goto LAB_145a66ac0;
        uVar28 = *(uint *)(puVar29 + lVar20 * 4 + 4);
      }
      uVar22 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_144 = (int)lVar20;
      uVar28 = local_144 + -1 + uVar37;
      if ((int)uVar5 < (int)uVar28) {
        uVar28 = uVar5;
      }
    }
LAB_145a66ac0:
    while( true ) {
      plVar27 = local_128;
      if ((int)local_128[1] - *(int *)((longlong)local_128 + 0x34) != (int)uStack_100) {
        local_1c6 = 0;
        `TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1c6);
      }
      ppFVar25 = (FD3D12Payload **)local_188._8_8_;
      if (((TStack_120.CurrentBitIndex == uVar28) &&
          (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar31)) &&
         (plVar27 == plVar36)) break;
      pTVar30 = (TRefCountPtr<FD3D12QueryHeap> *)
                ((longlong)TStack_120.CurrentBitIndex * 0x20 + *plVar27);
      uVar37 = ((uint)((ulonglong)pTVar30->Reference >> 0x14) & 0xffff ^
               (uint)((ulonglong)pTVar30->Reference >> 4)) * -0x7a143595;
      uVar37 = (uVar37 >> 0xd ^ uVar37) * -0x3d4d51cb;
      pTVar17 = TMapBase<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<TRefCountPtr<FD3D12QueryHeap>_const_&>
                          ((TMapBase<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
                            *)pTVar34,uVar37 >> 0x10 ^ uVar37,pTVar30);
      if ((pTVar17 == (TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_> *)(pTVar30 + 1)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x986,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        uVar16 = (*pcVar10)();
        return uVar16;
      }
      iVar15 = *(int *)&pTVar30[2].Reference;
      if (iVar15 != 0) {
        iVar24 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,4,iVar15,&pTVar17->AllocatorInstance,&pTVar17->ArrayNum,
                            &pTVar17->ArrayMax);
        memmove((pTVar17->AllocatorInstance).Data + (longlong)iVar24 * 8,
                (((TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_> *)(pTVar30 + 1))->
                AllocatorInstance).Data,(longlong)iVar15 << 3);
        *(undefined4 *)&pTVar30[2].Reference = 0;
      }
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
    }
    TSet<TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)&(*(FD3D12Payload **)local_188._8_8_)->field_0x2b0);
  }
  pFVar6 = *ppFVar25;
  if ((((*(int *)&pFVar6->field_0x288 != 0) || (*(int *)&pFVar6->field_0x298 != 0)) ||
      ((*(int *)&pFVar6->field_0x2a8 != 0 ||
       (*(int *)&pFVar6->field_0x2b8 != *(int *)&pFVar6->field_0x2e4)))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("PayloadToSubmit->BatchedObjects.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.cpp"
                          ,0x240,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    uVar16 = (*pcVar10)();
    return uVar16;
  }
  if ((((local_1a8->BatchedObjects).TimestampQueries.ArrayNum == 0) &&
      ((local_1a8->BatchedObjects).OcclusionQueries.ArrayNum == 0)) &&
     (((local_1a8->BatchedObjects).PipelineStatsQueries.ArrayNum == 0 &&
      (*(int *)&(local_1a8->BatchedObjects).QueryRanges.field_0x8 ==
       *(int *)&(local_1a8->BatchedObjects).QueryRanges.field_0x34)))) {
LAB_145a675ea:
    pFVar38 = local_1a8;
    ppFVar4 = &local_1a8->BarrierAllocator;
    if (*ppFVar4 != (FD3D12CommandAllocator *)0x0) {
      pFVar6 = *ppFVar25;
      puVar31 = &pFVar6->field_0x270;
      if (((*(undefined1 **)puVar31 <= ppFVar4) &&
          (ppFVar4 < *(undefined1 **)puVar31 + (longlong)*(int *)&pFVar6->field_0x27c * 8)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar10 = (code *)swi(3);
        uVar16 = (*pcVar10)();
        return uVar16;
      }
      iVar15 = *(int *)&pFVar6->field_0x278;
      if (iVar15 == *(int *)&pFVar6->field_0x27c) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)puVar31,(int *)&pFVar6->field_0x27c);
      }
      *(int *)&pFVar6->field_0x278 = iVar15 + 1;
      *(FD3D12CommandAllocator **)(*(longlong *)puVar31 + (longlong)iVar15 * 8) = *ppFVar4;
      *ppFVar4 = (FD3D12CommandAllocator *)0x0;
    }
    pFVar12 = local_1a8;
    pFVar6 = pFVar38->PayloadToSubmit;
    uVar16 = (pFVar38->Fence).NextCompletionValue;
    plVar27 = *(longlong **)&pFVar6->field_0x230;
    iVar15 = *(int *)&pFVar6->field_0x238;
    plVar36 = plVar27 + iVar15;
    while( true ) {
      if (*(int *)&pFVar6->field_0x238 != iVar15) {
        local_1c4 = 0;
        `TCheckedPointerIterator<TRefCountPtr<FD3D12SyncPoint>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_1c4);
      }
      if (plVar27 == plVar36) break;
      if ((*(char *)(*plVar27 + 0x20) != '\0') &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("!SyncPoint->ResolvedFence.IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Submission.cpp"
                              ,0x2a8,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        uVar16 = (*pcVar10)();
        return uVar16;
      }
      lVar20 = *plVar27;
      plVar27 = plVar27 + 1;
      *(FD3D12Fence **)(lVar20 + 0x10) = &pFVar12->Fence;
      *(ulong64 *)(lVar20 + 0x18) = uVar16;
      *(undefined1 *)(lVar20 + 0x20) = 1;
    }
    ppFVar25 = &pFVar12->PayloadToSubmit;
    *(ulong64 *)&pFVar12->PayloadToSubmit->field_0x240 = uVar16;
    (*ppFVar25)->field_0x1d8 = (*ppFVar25)->field_0x1d8 | local_1c3;
    pFVar6 = *ppFVar25;
    if (((pFVar6->field_0x1d8 != '\0') || (0 < *(int *)&pFVar6->field_0x238)) ||
       (cVar14 = (**(code **)(*(longlong *)pFVar6 + 0x10))(), cVar14 != '\0')) {
      puVar1 = &(pFVar12->Fence).NextCompletionValue;
      *puVar1 = *puVar1 + 1;
    }
    FVar39 = local_138;
    FVar9 = *(ForElementType<FD3D12Payload_*> *)((longlong)local_138 + 0x400);
    FVar19 = local_138;
    if (FVar9 != (ForElementType<FD3D12Payload_*>)0x0) {
      FVar19 = FVar9;
    }
    if ((ulonglong)FVar19 <= ppFVar25) {
      FVar19 = local_138;
      if (FVar9 != (ForElementType<FD3D12Payload_*>)0x0) {
        FVar19 = FVar9;
      }
      if ((ppFVar25 <
           (undefined1 *)((longlong)FVar19 + (longlong)*(int *)((longlong)local_138 + 0x40c) * 8))
         && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar13)) {
        pcVar10 = (code *)swi(3);
        uVar16 = (*pcVar10)();
        return uVar16;
      }
    }
    iVar15 = *(int *)((longlong)FVar39 + 0x408);
    if (iVar15 == *(int *)((longlong)FVar39 + 0x40c)) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12Payload_*>_>
                         (0x808,(ForElementType<FD3D12Payload_*> *)FVar39,
                          (int *)((longlong)FVar39 + 0x40c));
    }
    *(int *)((longlong)FVar39 + 0x408) = iVar15 + 1;
    if (*(ForElementType<FD3D12Payload_*> *)((longlong)FVar39 + 0x400) !=
        (ForElementType<FD3D12Payload_*>)0x0) {
      FVar39 = *(ForElementType<FD3D12Payload_*> *)((longlong)FVar39 + 0x400);
    }
    *(FD3D12Payload **)((longlong)FVar39 + (longlong)iVar15 * 8) = *ppFVar25;
    *ppFVar25 = (FD3D12Payload *)0x0;
    FMemScope::~FMemScope(&local_130);
    FLLMScope::~FLLMScope(local_190);
    if (bVar40) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return uVar16;
  }
  pFVar6 = *ppFVar25;
  if (pFVar6->field_0x268 == '\0') {
    plVar27 = *(longlong **)&pFVar6->field_0x230;
    iVar15 = *(int *)&pFVar6->field_0x238;
    plVar36 = plVar27 + iVar15;
    while( true ) {
      if (*(int *)&pFVar6->field_0x238 != iVar15) {
        local_1c5 = 0;
        `TCheckedPointerIterator<TRefCountPtr<FD3D12SyncPoint>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_1c5);
      }
      ppFVar25 = (FD3D12Payload **)local_188._8_8_;
      if (plVar27 == plVar36) goto LAB_145a675ea;
      if (*(longlong *)(*plVar27 + 0x28) != 0) break;
      plVar27 = plVar27 + 1;
    }
  }
  pFVar38 = local_1a8;
  pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)
            &(local_1a8->BatchedObjects).QueryRanges.field_0x10;
  local_1b8 = (FD3D12CommandList *)0x0;
  iVar15 = *(int *)&(local_1a8->BatchedObjects).QueryRanges.field_0x28;
  iStack_170 = 0;
  local_158 = 0;
  uStack_16c = 1;
  iStack_15c = 0;
  if (iVar15 != 0) {
    puVar33 = *(uint **)&(local_1a8->BatchedObjects).QueryRanges.field_0x20;
    if (puVar33 == (uint *)0x0) {
      puVar33 = (uint *)pTVar35;
    }
    uVar28 = *puVar33;
    while (uVar28 == 0) {
      lVar20 = (longlong)iStack_170;
      local_158 = local_158 + 0x20;
      iStack_170 = iStack_170 + 1;
      iStack_15c = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_170) goto LAB_145a66d5d;
      uVar28 = puVar33[lVar20 + 1];
    }
    uStack_16c = -uVar28 & uVar28;
    uVar22 = (ulonglong)uStack_16c * 2 + 1;
    lVar20 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_140 = (int)lVar20;
    iStack_15c = local_140 + -1 + local_158;
    if (iVar15 < iStack_15c) {
      iStack_15c = iVar15;
    }
  }
LAB_145a66d5d:
  uVar28 = *(uint *)&(local_1a8->BatchedObjects).QueryRanges.field_0x28;
  local_178 = (ForElementType<FD3D12ResidencyHandle_*>)&(local_1a8->BatchedObjects).QueryRanges;
  uStack_154 = local_6c;
  iStack_150 = *(int *)&(local_1a8->BatchedObjects).QueryRanges.field_0x8 -
               *(int *)&(local_1a8->BatchedObjects).QueryRanges.field_0x34;
  uVar37 = uVar28 & 0xffffffe0;
  uStack_160 = 0xffffffff;
  TStack_f0._padding_ = CONCAT44(uStack_16c,iStack_170);
  TStack_f0.CurrentBitIndex = iStack_15c;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  iVar24 = (int)uVar28 >> 5;
  TStack_f0._28_4_ = local_6c;
  TStack_f0.BaseBitIndex = local_158;
  uStack_d0 = CONCAT44(uStack_14c,iStack_150);
  local_1c0 = uVar28;
  local_168 = (undefined1 *)pTVar35;
  local_f8 = (TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
              *)local_178;
  TStack_f0.Array = pTVar35;
  if ((((int)uVar28 < 0) || (iVar15 < (int)uVar28)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    uVar16 = (*pcVar10)();
    return uVar16;
  }
  uVar5 = *(uint *)&(pFVar38->BatchedObjects).QueryRanges.field_0x28;
  FVar23 = local_1c7;
  uVar11 = local_1c0;
  if (uVar28 != uVar5) {
    puVar31 = *(undefined1 **)&(pFVar38->BatchedObjects).QueryRanges.field_0x20;
    if (puVar31 == (undefined1 *)0x0) {
      puVar31 = (undefined1 *)pTVar35;
    }
    uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar24 * 4);
    while (uVar28 == 0) {
      lVar20 = (longlong)iVar24;
      uVar37 = uVar37 + 0x20;
      iVar24 = iVar24 + 1;
      local_1c0 = uVar5;
      uVar11 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_145a66e80;
      uVar28 = *(uint *)(puVar31 + lVar20 * 4 + 4);
    }
    uVar22 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_13c = (int)lVar20;
    local_1c0 = (uVar37 - 1) + local_13c;
    uVar11 = local_1c0;
    if ((int)uVar5 < (int)local_1c0) {
      local_1c0 = uVar5;
      uVar11 = uVar5;
    }
  }
LAB_145a66e80:
  do {
    pTVar34 = local_f8;
    if (*(int *)&local_f8->field_0x8 - *(int *)&local_f8->field_0x34 != (int)uStack_d0) {
      local_1c7 = (FIdentityFunctor)0x0;
      `TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1c7);
    }
    if (((TStack_f0.CurrentBitIndex == uVar11) && (TStack_f0.Array == pTVar35)) &&
       (pTVar2 = &(pFVar38->BatchedObjects).QueryRanges, pTVar34 == pTVar2)) {
      if (local_1b8 != (FD3D12CommandList *)0x0) {
        FD3D12CommandList::Close(local_1b8);
        pFVar6 = pFVar38->PayloadToSubmit;
        puVar31 = &pFVar6->field_0x210;
        if (((*(FD3D12CommandList ***)puVar31 <= &local_1b8) &&
            (&local_1b8 < *(FD3D12CommandList ***)puVar31 + *(int *)&pFVar6->field_0x21c)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          uVar16 = (*pcVar10)();
          return uVar16;
        }
        iVar15 = *(int *)&pFVar6->field_0x218;
        if (iVar15 == *(int *)&pFVar6->field_0x21c) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)puVar31,(int *)&pFVar6->field_0x21c);
        }
        *(int *)&pFVar6->field_0x218 = iVar15 + 1;
        *(FD3D12CommandList **)(*(longlong *)puVar31 + (longlong)iVar15 * 8) = local_1b8;
      }
      pFVar6 = pFVar38->PayloadToSubmit;
      pFVar3 = &pFVar38->BatchedObjects;
      puVar31 = &pFVar6->field_0x280;
      if ((FD3D12BatchedPayloadObjects *)puVar31 != pFVar3) {
        if (*(void **)puVar31 != (void *)0x0) {
          FMemory::Free(*(void **)puVar31);
        }
        *(FScriptContainerElement **)puVar31 = (pFVar3->TimestampQueries).AllocatorInstance.Data;
        (pFVar3->TimestampQueries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)&pFVar6->field_0x288 = (pFVar38->BatchedObjects).TimestampQueries.ArrayNum;
        *(int *)&pFVar6->field_0x28c = (pFVar38->BatchedObjects).TimestampQueries.ArrayMax;
        (pFVar38->BatchedObjects).TimestampQueries.ArrayNum = 0;
        (pFVar38->BatchedObjects).TimestampQueries.ArrayMax = 0;
      }
      pTVar26 = &(pFVar38->BatchedObjects).OcclusionQueries;
      puVar31 = &pFVar6->field_0x290;
      if ((TArray<FD3D12QueryLocation,TSizedDefaultAllocator<32>_> *)puVar31 != pTVar26) {
        if (*(void **)puVar31 != (void *)0x0) {
          FMemory::Free(*(void **)puVar31);
        }
        *(FScriptContainerElement **)puVar31 = (pTVar26->AllocatorInstance).Data;
        (pTVar26->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        *(int *)&pFVar6->field_0x298 = (pFVar38->BatchedObjects).OcclusionQueries.ArrayNum;
        *(int *)&pFVar6->field_0x29c = (pFVar38->BatchedObjects).OcclusionQueries.ArrayMax;
        (pFVar38->BatchedObjects).OcclusionQueries.ArrayNum = 0;
        (pFVar38->BatchedObjects).OcclusionQueries.ArrayMax = 0;
      }
      pTVar26 = &(pFVar38->BatchedObjects).PipelineStatsQueries;
      puVar31 = &pFVar6->field_0x2a0;
      if ((TArray<FD3D12QueryLocation,TSizedDefaultAllocator<32>_> *)puVar31 != pTVar26) {
        if (*(void **)puVar31 != (void *)0x0) {
          FMemory::Free(*(void **)puVar31);
        }
        *(FScriptContainerElement **)puVar31 = (pTVar26->AllocatorInstance).Data;
        (pTVar26->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        *(int *)&pFVar6->field_0x2a8 = (pFVar38->BatchedObjects).PipelineStatsQueries.ArrayNum;
        *(int *)&pFVar6->field_0x2ac = (pFVar38->BatchedObjects).PipelineStatsQueries.ArrayMax;
        (pFVar38->BatchedObjects).PipelineStatsQueries.ArrayNum = 0;
        (pFVar38->BatchedObjects).PipelineStatsQueries.ArrayMax = 0;
      }
      TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
      ::operator=((TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
                   *)&pFVar6->field_0x2b0,pTVar2);
      ppFVar25 = (FD3D12Payload **)local_188._8_8_;
      goto LAB_145a675ea;
    }
    local_4c = 2;
    plVar36 = (longlong *)((longlong)TStack_f0.CurrentBitIndex * 0x20 + *(longlong *)pTVar34);
    local_68.SecondaryData = (ForElementType<FD3D12ResidencyHandle_*>)0x0;
    local_50 = 0;
    local_188._0_8_ = *plVar36 + 0x40;
    iVar15 = 0;
    if ((&local_68 <= (ForElementType<FD3D12ResidencyHandle_*> *)local_188) &&
       (local_188 < &local_68.SecondaryData)) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar13) {
        pcVar10 = (code *)swi(3);
        uVar16 = (*pcVar10)();
        return uVar16;
      }
      iVar15 = local_50;
      if (local_50 == local_4c) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12ResidencyHandle_*>_>
                           (0x808,&local_68,&local_4c);
      }
    }
    local_50 = iVar15 + 1;
    FVar21 = (ForElementType<FD3D12ResidencyHandle_*>)&local_68;
    if (local_68.SecondaryData != (ForElementType<FD3D12ResidencyHandle_*>)0x0) {
      FVar21 = local_68.SecondaryData;
    }
    *(undefined8 *)((longlong)FVar21 + (longlong)iVar15 * 8) = local_188._0_8_;
    lVar20 = *(longlong *)(*plVar36 + 0x28);
    if ((*(byte *)(lVar20 + 0xab) & 2) == 0) {
LAB_145a66fca:
      _Src = (void *)0x0;
      iVar15 = 0;
LAB_145a6707d:
      bVar13 = iVar15 == 0;
      if (iVar15 < 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x9a9,L"Invalid range size: %lld");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          uVar16 = (*pcVar10)();
          return uVar16;
        }
        bVar13 = iVar15 == 0;
      }
    }
    else {
      lVar7 = *(longlong *)(lVar20 + 0x28);
      if (lVar7 != 0) {
        if (*(char *)(lVar7 + 0x81) != '\0') {
          _Src = (void *)(lVar7 + 0x70);
          if (*(longlong *)(lVar7 + 0x70) == 0) {
            pwVar32 = 
            L"Resource requires residency tracking, but BeginTrackingResidency() was not called.";
            iVar15 = 0x5d;
            goto LAB_145a6705f;
          }
          goto LAB_145a67078;
        }
        goto LAB_145a66fca;
      }
      lVar7 = *(longlong *)(lVar20 + 0xb0);
      if (lVar7 == 0) {
        _Src = (void *)(lVar20 + 0x30);
        if (*(longlong *)(lVar20 + 0x30) == 0) {
          pwVar32 = 
          L"Resource requires residency tracking, but StartTrackingForResidency() was not called.";
          iVar15 = 0x1a2;
LAB_145a6705f:
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("ResidencyHandle",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                              ,iVar15,pwVar32);
          if (bVar13) {
            pcVar10 = (code *)swi(3);
            uVar16 = (*pcVar10)();
            return uVar16;
          }
        }
LAB_145a67078:
        iVar15 = 1;
        goto LAB_145a6707d;
      }
      _Src = *(void **)(lVar7 + 0x10);
      iVar15 = *(int *)(lVar7 + 0x18);
      bVar13 = iVar15 == 0;
      if (iVar15 < 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          uVar16 = (*pcVar10)();
          return uVar16;
        }
        goto LAB_145a6707d;
      }
    }
    if (!bVar13) {
      iVar24 = UE::Core::Private::
               ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12ResidencyHandle_*>_>
                         (8,8,iVar15,&local_68,&local_50,&local_4c);
      FVar21 = (ForElementType<FD3D12ResidencyHandle_*>)&local_68;
      if (local_68.SecondaryData != (ForElementType<FD3D12ResidencyHandle_*>)0x0) {
        FVar21 = local_68.SecondaryData;
      }
      memcpy((void *)((longlong)FVar21 + (longlong)iVar24 * 8),_Src,(longlong)iVar15 << 3);
    }
    if (local_1b8 == (FD3D12CommandList *)0x0) {
      pFVar18 = pFVar38->BarrierAllocator;
      if (pFVar18 == (FD3D12CommandAllocator *)0x0) {
        pFVar18 = FD3D12Device::ObtainCommandAllocator(pFVar38->Device,pFVar38->QueueType);
        pFVar38->BarrierAllocator = pFVar18;
      }
      local_1b8 = FD3D12Device::ObtainCommandList
                            (pFVar38->Device,pFVar18,(FD3D12QueryAllocator *)0x0,
                             (FD3D12QueryAllocator *)0x0);
    }
    iVar15 = local_50;
    this_00 = local_1b8;
    local_c8 = (ForElementType<FD3D12ResidencyHandle_*>)&local_68;
    if (local_68.SecondaryData != (ForElementType<FD3D12ResidencyHandle_*>)0x0) {
      local_c8 = local_68.SecondaryData;
    }
    if ((local_50 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      uVar16 = (*pcVar10)();
      return uVar16;
    }
    iStack_c0 = iVar15;
    local_b8[0]._12_4_ = uStack_bc;
    local_b8[0].ArrayNum = iVar15;
    local_b8[0].DataPtr = (FD3D12ResidencyHandle **)local_c8;
    FD3D12CommandList::AddToResidencySet(this_00,local_b8);
    if (local_68.SecondaryData != (ForElementType<FD3D12ResidencyHandle_*>)0x0) {
      FMemory::Free((void *)local_68.SecondaryData);
    }
    if (*(longlong *)(*plVar36 + 0x38) != 0) {
      AlgoImpl::
      IntroSortInternal<FD3D12QueryRange,int,FIdentityFunctor,TDereferenceWrapper<FD3D12QueryRange,TLess<void>_>_>
                ((FD3D12QueryRange *)plVar36[1],(int)plVar36[2],FVar23,(TLess<void> *)local_1b0);
      pFVar12 = local_1a8;
      iVar15 = (int)plVar36[2];
      uVar28 = 0;
      pTVar34 = (TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
                 *)0x0;
      if (0 < iVar15) {
        do {
          uVar37 = 0;
          if ((int)uVar28 < iVar15) {
            uVar37 = ~uVar28 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar10 = (code *)swi(3);
            uVar16 = (*pcVar10)();
            return uVar16;
          }
          local_1a0 = (TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
                       *)&pTVar34->field_0x1;
          iVar15 = (int)plVar36[2];
          uVar28 = uVar28 + 1;
          plVar27 = *(longlong **)(plVar36[1] + (longlong)pTVar34 * 8);
          local_198._4_4_ = (uint)((ulonglong)plVar27 >> 0x20);
          uVar22 = (ulonglong)plVar27 >> 0x20;
          local_1c0 = local_198._4_4_;
          local_198 = plVar27;
          if ((int)uVar28 < iVar15) {
            do {
              uVar37 = 0;
              if ((int)uVar28 < iVar15) {
                uVar37 = ~uVar28 >> 0x1f;
              }
              if ((uVar37 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar10 = (code *)swi(3);
                uVar16 = (*pcVar10)();
                return uVar16;
              }
              pTVar34 = local_1a0;
              if (*(int *)(plVar36[1] + (longlong)local_1a0 * 8) != (int)uVar22) break;
              uVar37 = 0;
              if ((int)uVar28 < (int)plVar36[2]) {
                uVar37 = ~uVar28 >> 0x1f;
              }
              if ((uVar37 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar10 = (code *)swi(3);
                uVar16 = (*pcVar10)();
                return uVar16;
              }
              uVar28 = uVar28 + 1;
              iVar15 = (int)plVar36[2];
              local_1c0 = *(uint *)(plVar36[1] + 4 + (longlong)pTVar34 * 8);
              uVar22 = (ulonglong)local_1c0;
              local_1a0 = (TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
                           *)&pTVar34->field_0x1;
            } while ((int)uVar28 < iVar15);
          }
          pTVar34 = local_1a0;
          if (local_1b8 == (FD3D12CommandList *)0x0) {
            pFVar18 = pFVar12->BarrierAllocator;
            if (pFVar18 == (FD3D12CommandAllocator *)0x0) {
              pFVar18 = FD3D12Device::ObtainCommandAllocator(pFVar12->Device,pFVar12->QueueType);
              pFVar12->BarrierAllocator = pFVar18;
            }
            local_1b8 = FD3D12Device::ObtainCommandList
                                  (pFVar12->Device,pFVar18,(FD3D12QueryAllocator *)0x0,
                                   (FD3D12QueryAllocator *)0x0);
          }
          pIVar8 = (local_1b8->Interfaces).GraphicsCommandList.Reference;
          puVar33 = &(local_1b8->State).NumCommands;
          *puVar33 = *puVar33 + 1;
          iVar15 = *(int *)(*plVar36 + 0x18);
          pcVar10 = *(code **)((longlong)*pIVar8 + 0x1b0);
          if ((((iVar15 != 0) && (iVar15 != 2)) && (iVar15 != 3)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!\"Enclosing block should never be called\"",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.h"
                                  ,0x4b,L""), bVar13)) {
            pcVar10 = (code *)swi(3);
            uVar16 = (*pcVar10)();
            return uVar16;
          }
          (*pcVar10)(pIVar8,*(undefined8 *)(*plVar36 + 0x38));
          iVar15 = (int)plVar36[2];
          pFVar38 = local_1a8;
          FVar23 = local_1c7;
        } while ((int)uVar28 < iVar15);
      }
    }
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)
              &(pFVar38->BatchedObjects).QueryRanges.field_0x10;
  } while( true );
}

// ExecuteCommandLists @ 145aa6fc0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Queue::ExecuteCommandLists
          (FD3D12Queue *this,TArrayView<ID3D12CommandList_*,int> *param_1,
          TArrayView<D3DX12Residency::ResidencySet_*,int> *param_2)

{
  ID3D12CommandQueue *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  FString local_18;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2309,"FD3D12Queue::ExecuteCommandLists",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
               ,0x905);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2309);
  }
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("D3DCommandLists.Num() == ResidencySets.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                         ,0x908,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->D3DCommandQueue).Reference;
  if (GEnableResidencyManagement == false) {
    (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1,param_1->ArrayNum);
  }
  else {
    iVar4 = D3DX12Residency::Internal::ResidencyManagerInternal::ExecuteSubset
                      ((ResidencyManagerInternal *)&this->Device->ResidencyManager,pIVar1,
                       param_1->DataPtr,param_2->DataPtr,param_1->ArrayNum);
    if (iVar4 < 0) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar4,
                 "Device->GetResidencyManager().ExecuteCommandLists( D3DCommandQueue, D3DCommandLists.GetData(), ResidencySets.GetData(), D3DCommandLists.Num() )"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                 ,0x911,(ID3D12Device *)0x0,&local_18);
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}


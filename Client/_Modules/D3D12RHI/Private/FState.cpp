// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FState @ 1459aaa60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FState * __thiscall
FD3D12CommandList::FState::FState
          (FState *this,FD3D12CommandAllocator *param_1,FD3D12QueryAllocator *param_2,
          FD3D12QueryAllocator *param_3)

{
  FQueue_u_0 FVar1;
  uint uVar2;
  ED3D12QueryType EVar3;
  FQueue FVar4;
  FD3D12Queue *this_00;
  undefined4 extraout_var;
  FD3D12QueryLocation *pFVar5;
  FD3D12QueryLocation local_28;
  
  this->CommandAllocator = param_1;
  (this->BeginTimestamp).Heap = (FD3D12QueryHeap *)0x0;
  (this->BeginTimestamp).Index = 0;
  (this->BeginTimestamp).Type = None;
  (this->BeginTimestamp).Target = (void *)0x0;
  (this->EndTimestamp).Heap = (FD3D12QueryHeap *)0x0;
  (this->EndTimestamp).Index = 0;
  (this->EndTimestamp).Type = None;
  (this->EndTimestamp).Target = (void *)0x0;
  (this->PipelineStats).Heap = (FD3D12QueryHeap *)0x0;
  (this->PipelineStats).Index = 0;
  (this->PipelineStats).Type = None;
  (this->PipelineStats).Target = (void *)0x0;
  (this->TimestampQueries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimestampQueries).ArrayNum = 0;
  (this->TimestampQueries).ArrayMax = 0;
  (this->OcclusionQueries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OcclusionQueries).ArrayNum = 0;
  (this->OcclusionQueries).ArrayMax = 0;
  (this->PipelineStatsQueries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipelineStatsQueries).ArrayNum = 0;
  (this->PipelineStatsQueries).ArrayMax = 0;
  *(undefined8 *)&(this->DeferredResidencyUpdateSet).Elements = 0;
  *(undefined8 *)&(this->DeferredResidencyUpdateSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DeferredResidencyUpdateSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DeferredResidencyUpdateSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DeferredResidencyUpdateSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DeferredResidencyUpdateSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeferredResidencyUpdateSet).Elements.field_0x34 = 0;
  (this->DeferredResidencyUpdateSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DeferredResidencyUpdateSet).HashSize = 0;
  this->NumCommands = 0;
  this->IsClosed = false;
  this->bLocalQueriesBegun = false;
  this->bLocalQueriesEnded = false;
  this_00 = FD3D12Device::GetQueue(param_1->Device,param_1->QueueType);
  FVar4 = FD3D12Queue::GetProfilerQueue(this_00);
  FVar1 = *(FQueue_u_0 *)CONCAT44(extraout_var,FVar4.field0_0x0);
  (this->EventStream).First = (FChunk *)0x0;
  (this->EventStream).Current = (FChunk *)0x0;
  (this->EventStream).Queue.field0_0x0 = FVar1;
  (this->BeginEvents).AllocatorInstance.SecondaryData =
       (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0;
  (this->BeginEvents).ArrayNum = 0;
  (this->BeginEvents).ArrayMax = 8;
  if (param_2 != (FD3D12QueryAllocator *)0x0) {
    pFVar5 = FD3D12QueryAllocator::Allocate(param_2,&local_28,ProfilerTimestampTOP,(void *)0x0);
    uVar2 = pFVar5->Index;
    EVar3 = pFVar5->Type;
    (this->BeginTimestamp).Heap = pFVar5->Heap;
    (this->BeginTimestamp).Index = uVar2;
    (this->BeginTimestamp).Type = EVar3;
    (this->BeginTimestamp).Target = pFVar5->Target;
    pFVar5 = FD3D12QueryAllocator::Allocate(param_2,&local_28,ProfilerTimestampBOP,(void *)0x0);
    uVar2 = pFVar5->Index;
    EVar3 = pFVar5->Type;
    (this->EndTimestamp).Heap = pFVar5->Heap;
    (this->EndTimestamp).Index = uVar2;
    (this->EndTimestamp).Type = EVar3;
    (this->EndTimestamp).Target = pFVar5->Target;
  }
  if (param_3 != (FD3D12QueryAllocator *)0x0) {
    pFVar5 = FD3D12QueryAllocator::Allocate(param_3,&local_28,PipelineStats,(void *)0x0);
    uVar2 = pFVar5->Index;
    EVar3 = pFVar5->Type;
    (this->PipelineStats).Heap = pFVar5->Heap;
    (this->PipelineStats).Index = uVar2;
    (this->PipelineStats).Type = EVar3;
    (this->PipelineStats).Target = pFVar5->Target;
  }
  return this;
}

// ~FState @ 1459acf80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandList::FState::~FState(FState *this)

{
  ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*> FVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  FVar1 = (this->BeginEvents).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::RHI::GPUProfiler::FEvent::FBeginWork_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  UE::RHI::GPUProfiler::FEventStream::~FEventStream(&this->EventStream);
  (this->DeferredResidencyUpdateSet).HashSize = 0;
  FVar2 = (this->DeferredResidencyUpdateSet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FD3D12Resource_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FD3D12Resource_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DeferredResidencyUpdateSet).Elements);
  pFVar3 = (this->PipelineStatsQueries).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->OcclusionQueries).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->TimestampQueries).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}


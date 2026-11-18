// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 26

// FD3D12ContextCommon @ 1459a9010

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12ContextCommon * __thiscall
FD3D12ContextCommon::FD3D12ContextCommon
          (FD3D12ContextCommon *this,FD3D12Device *param_1,ED3D12QueueType param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  FD3D12ContextCommon *pFVar3;
  FD3D12EnhancedBarriersForContext *pFVar4;
  FD3D12LegacyBarriersForContext *this_00;
  FD3D12LegacyBarriersForContext *pFVar5;
  
  (this->TimestampQueries).Device = param_1;
  (this->TimestampQueries).QueueType = param_2;
  pFVar5 = (FD3D12LegacyBarriersForContext *)0x0;
  (this->BatchedSyncPoints).ToWait.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchedSyncPoints).ToWait.ArrayNum = 0;
  (this->BatchedSyncPoints).ToWait.ArrayMax = 0;
  (this->BatchedSyncPoints).ToSignal.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BatchedSyncPoints).ToSignal.ArrayNum = 0;
  (this->BatchedSyncPoints).ToSignal.ArrayMax = 0;
  *(undefined8 *)&(this->TimestampQueries).Heaps = 0;
  *(undefined8 *)&(this->TimestampQueries).Heaps.field_0x8 = 0;
  *(undefined8 *)&(this->TimestampQueries).Heaps.field_0x20 = 0;
  (this->TimestampQueries).QueryType = D3D12_QUERY_TYPE_TIMESTAMP;
  this->_padding_ = (longlong)&___7FD3D12ContextCommon__6B_;
  this->Device = param_1;
  this->QueueType = param_2;
  this->bIsDefaultContext = param_3;
  *(undefined4 *)&(this->TimestampQueries).Heaps.field_0x28 = 0;
  *(undefined4 *)&(this->TimestampQueries).Heaps.field_0x2c = 0x80;
  *(undefined4 *)&(this->TimestampQueries).Heaps.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TimestampQueries).Heaps.field_0x34 = 0;
  *(undefined8 *)&(this->TimestampQueries).Heaps.field_0x40 = 0;
  *(undefined4 *)&(this->TimestampQueries).Heaps.field_0x48 = 0;
  (this->TimestampQueries).CurrentHeap = (FD3D12QueryHeap *)0x0;
  (this->TimestampQueries).CurrentRange = (FD3D12QueryRange *)0x0;
  *(undefined8 *)&(this->OcclusionQueries).Heaps = 0;
  *(undefined8 *)&(this->OcclusionQueries).Heaps.field_0x8 = 0;
  *(undefined8 *)&(this->OcclusionQueries).Heaps.field_0x20 = 0;
  (this->OcclusionQueries).Device = param_1;
  (this->OcclusionQueries).QueueType = param_2;
  (this->OcclusionQueries).QueryType = D3D12_QUERY_TYPE_OCCLUSION;
  *(undefined4 *)&(this->OcclusionQueries).Heaps.field_0x28 = 0;
  *(undefined4 *)&(this->OcclusionQueries).Heaps.field_0x2c = 0x80;
  *(undefined4 *)&(this->OcclusionQueries).Heaps.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OcclusionQueries).Heaps.field_0x34 = 0;
  *(undefined8 *)&(this->OcclusionQueries).Heaps.field_0x40 = 0;
  *(undefined4 *)&(this->OcclusionQueries).Heaps.field_0x48 = 0;
  (this->OcclusionQueries).CurrentHeap = (FD3D12QueryHeap *)0x0;
  (this->OcclusionQueries).CurrentRange = (FD3D12QueryRange *)0x0;
  *(undefined8 *)&(this->PipelineStatsQueries).Heaps = 0;
  *(undefined8 *)&(this->PipelineStatsQueries).Heaps.field_0x8 = 0;
  *(undefined8 *)&(this->PipelineStatsQueries).Heaps.field_0x20 = 0;
  (this->PipelineStatsQueries).Device = param_1;
  (this->PipelineStatsQueries).QueueType = param_2;
  (this->PipelineStatsQueries).QueryType = D3D12_QUERY_TYPE_PIPELINE_STATISTICS;
  *(undefined4 *)&(this->PipelineStatsQueries).Heaps.field_0x28 = 0;
  *(undefined4 *)&(this->PipelineStatsQueries).Heaps.field_0x2c = 0x80;
  *(undefined4 *)&(this->PipelineStatsQueries).Heaps.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PipelineStatsQueries).Heaps.field_0x34 = 0;
  *(undefined8 *)&(this->PipelineStatsQueries).Heaps.field_0x40 = 0;
  *(undefined4 *)&(this->PipelineStatsQueries).Heaps.field_0x48 = 0;
  (this->PipelineStatsQueries).CurrentHeap = (FD3D12QueryHeap *)0x0;
  (this->PipelineStatsQueries).CurrentRange = (FD3D12QueryRange *)0x0;
  this->CommandList = (FD3D12CommandList *)0x0;
  this->CommandAllocator = (FD3D12CommandAllocator *)0x0;
  (this->Payloads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Payloads).ArrayNum = 0;
  (this->Payloads).ArrayMax = 0;
  (this->ContextSyncPoint).Reference = (FD3D12SyncPoint *)0x0;
  this->CurrentPhase = Wait;
  this->ActiveQueries = 0;
  if (*(longlong *)&param_1->field_0x10 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12ContextCommon *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (FD3D12Adapter::PreferredBarrierImplType == Enhanced) {
    pFVar4 = ::operator_new(0x10);
    if (pFVar4 != (FD3D12EnhancedBarriersForContext *)0x0) {
      pFVar4 = FD3D12EnhancedBarriersForContext::FD3D12EnhancedBarriersForContext(pFVar4);
      (this->Barriers).Ptr = (ID3D12BarriersForContext *)pFVar4;
      return this;
    }
  }
  else {
    this_00 = ::operator_new(0x10);
    if (this_00 != (FD3D12LegacyBarriersForContext *)0x0) {
      pFVar5 = FD3D12LegacyBarriersForContext::FD3D12LegacyBarriersForContext(this_00);
    }
  }
  (this->Barriers).Ptr = (ID3D12BarriersForContext *)pFVar5;
  return this;
}

// ~FD3D12ContextCommon @ 1459ac5c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12ContextCommon::~FD3D12ContextCommon(FD3D12ContextCommon *this)

{
  longlong *plVar1;
  ID3D12BarriersForContext *pIVar2;
  FD3D12SyncPoint *pFVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  longlong lVar6;
  
  pIVar2 = (this->Barriers).Ptr;
  if (pIVar2 != (ID3D12BarriersForContext *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pFVar3 = (this->ContextSyncPoint).Reference;
  if (pFVar3 != (FD3D12SyncPoint *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar4 = (this->Payloads).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->PipelineStatsQueries).Heaps.field_0x48 = 0;
  pvVar5 = *(void **)&(this->PipelineStatsQueries).Heaps.field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->PipelineStatsQueries).Heaps);
  *(undefined4 *)&(this->OcclusionQueries).Heaps.field_0x48 = 0;
  pvVar5 = *(void **)&(this->OcclusionQueries).Heaps.field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->OcclusionQueries).Heaps);
  *(undefined4 *)&(this->TimestampQueries).Heaps.field_0x48 = 0;
  pvVar5 = *(void **)&(this->TimestampQueries).Heaps.field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FD3D12QueryHeap>,FD3D12QueryRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->TimestampQueries).Heaps);
  DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>
            ((TRefCountPtr<FD3D12SyncPoint> *)
             (this->BatchedSyncPoints).ToSignal.AllocatorInstance.Data,
             (this->BatchedSyncPoints).ToSignal.ArrayNum);
  pFVar4 = (this->BatchedSyncPoints).ToSignal.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>
            ((TRefCountPtr<FD3D12SyncPoint> *)
             (this->BatchedSyncPoints).ToWait.AllocatorInstance.Data,
             (this->BatchedSyncPoints).ToWait.ArrayNum);
  pFVar4 = (this->BatchedSyncPoints).ToWait.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// AddBarrier @ 1459af990

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12ContextCommon::AddBarrier
          (FD3D12ContextCommon *this,FD3D12Resource *param_1,ED3D12Access param_2,
          ED3D12Access param_3,uint param_4)

{
  ID3D12BarriersForContext *pIVar1;
  FD3D12CommandList *this_00;
  code *pcVar2;
  bool bVar3;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar4;
  FD3D12Resource *local_res8;
  FD3D12Resource *local_res10;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_38;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_28;
  
  if (param_1 == (FD3D12Resource *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("pResource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                       ,0x41,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->Barriers).Ptr;
  (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,this,param_1,param_2,param_3,param_4);
  if (param_1 == (FD3D12Resource *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                       ,0x1a5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->CommandList == (FD3D12CommandList *)0x0) {
    (**(code **)(this->_padding_ + 8))(this);
  }
  this_00 = this->CommandList;
  local_res10 = param_1;
  if ((param_1->ReservedResourceData).Ptr != (FD3D12ReservedResourceData *)0x0) {
    TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>::
    Emplace<FD3D12Resource_const_*_const_&>
              (&(this_00->State).DeferredResidencyUpdateSet,&local_res8,(bool *)&local_res10);
    return;
  }
  pTVar4 = FD3D12Resource::GetResidencyHandles(param_1,&local_28);
  local_38.DataPtr = pTVar4->DataPtr;
  local_38.ArrayNum = pTVar4->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
  FD3D12CommandList::AddToResidencySet(this_00,&local_38);
  return;
}

// AddGlobalBarrier @ 1459afac0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12ContextCommon::AddGlobalBarrier
          (FD3D12ContextCommon *this,ED3D12Access param_1,ED3D12Access param_2)

{
  ID3D12BarriersForContext *pIVar1;
  
  pIVar1 = (this->Barriers).Ptr;
                    /* WARNING: Could not recover jumptable at 0x0001459afad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,this,param_1,param_2);
  return;
}

// AllocateQuery @ 1459b21a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12QueryLocation * __thiscall
FD3D12ContextCommon::AllocateQuery
          (FD3D12ContextCommon *this,FD3D12QueryLocation *__return_storage_ptr__,
          ED3D12QueryType param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  FD3D12QueryLocation *pFVar3;
  FD3D12QueryAllocator *this_00;
  
  switch(param_1) {
  case PipelineStats:
    this_00 = &this->PipelineStatsQueries;
    break;
  case Occlusion:
    this_00 = &this->OcclusionQueries;
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                       ,0x129,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12QueryLocation *)(*pcVar1)();
      return pFVar3;
    }
  case TimestampMicroseconds:
  case TimestampRaw:
  case ProfilerTimestampTOP:
  case ProfilerTimestampBOP:
    this_00 = &this->TimestampQueries;
  }
  FD3D12QueryAllocator::Allocate(this_00,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// BindDiagnosticBuffer @ 1459b3070

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12ContextCommon::BindDiagnosticBuffer
          (FD3D12ContextCommon *this,FD3D12RootSignature *param_1,ED3D12PipelineType param_2)

{
  uint *puVar1;
  char cVar2;
  FD3D12DiagnosticBuffer *pFVar3;
  ulong64 uVar4;
  ID3D12GraphicsCommandList *pIVar5;
  code *pcVar6;
  bool bVar7;
  FD3D12Queue *pFVar8;
  
  cVar2 = param_1->DiagnosticBufferSlot;
  if (-1 < cVar2) {
    pFVar8 = FD3D12Device::GetQueue(this->Device,this->QueueType);
    pFVar3 = (pFVar8->DiagnosticBuffer).Ptr;
    if ((pFVar3 != (FD3D12DiagnosticBuffer *)0x0) &&
       ((pFVar3->Resource).Reference != (FD3D12Resource *)0x0)) {
      uVar4 = pFVar3->GpuAddress;
      if (param_2 != Graphics) {
        if (param_2 == Compute) {
          if (this->CommandList == (FD3D12CommandList *)0x0) {
            (**(code **)(this->_padding_ + 8))(this);
          }
          pIVar5 = (this->CommandList->Interfaces).GraphicsCommandList.Reference;
          puVar1 = &(this->CommandList->State).NumCommands;
          *puVar1 = *puVar1 + 1;
          (**(code **)((longlong)*pIVar5 + 0x148))(pIVar5,(int)cVar2,uVar4);
          return;
        }
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                           ,0x6b,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (this->CommandList == (FD3D12CommandList *)0x0) {
        (**(code **)(this->_padding_ + 8))(this);
      }
      pIVar5 = (this->CommandList->Interfaces).GraphicsCommandList.Reference;
      puVar1 = &(this->CommandList->State).NumCommands;
      *puVar1 = *puVar1 + 1;
      (**(code **)((longlong)*pIVar5 + 0x150))(pIVar5,(int)cVar2,uVar4);
    }
  }
  return;
}

// ClearState @ 1459b65e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12ContextCommon::ClearState(FD3D12ContextCommon *this,EClearStateMode param_1)

{
  return;
}

// CloseCommandList @ 1459b7050

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12ContextCommon::CloseCommandList(FD3D12ContextCommon *this)

{
  FD3D12CommandList **ppFVar1;
  FD3D12QueryLocation *pFVar2;
  ID3D12BarriersForContext *pIVar3;
  FD3D12CommandList *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FD3D12Payload *pFVar7;
  FEndWork *pFVar8;
  ID3D12GraphicsCommandList *pIVar9;
  FString local_28;
  FString local_18;
  
  ppFVar1 = &this->CommandList;
  if (((*ppFVar1 == (FD3D12CommandList *)0x0) &&
      (iVar6 = (**(code **)((longlong)*(this->Barriers).Ptr + 0x30))(), iVar6 == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsPendingCommands()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                         ,0x17c,L"The command list is empty."), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar3 = (this->Barriers).Ptr;
  pcVar4 = *(code **)((longlong)*pIVar3 + 0x28);
  if (*ppFVar1 == (FD3D12CommandList *)0x0) {
    (**(code **)(this->_padding_ + 8))(this);
  }
  (*pcVar4)(pIVar3,*ppFVar1,&this->TimestampQueries);
  if ((*ppFVar1 == (FD3D12CommandList *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsOpen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                         ,0x181,L"Command list is not open."), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((((this->Payloads).ArrayNum == 0) || (this->CurrentPhase != Execute)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Payloads.Num() && CurrentPhase == EPhase::Execute",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                         ,0x182,L"Expected the current payload to be in the execute phase."), bVar5)
     ) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->ActiveQueries != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveQueries == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                         ,0x184,L"All queries must be completed before the command list is closed.")
     , bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar7 = GetPayload(this,Execute);
  this_00 = *ppFVar1;
  if (((this_00->State).IsClosed != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsOpen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                         ,0xdd,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this_00->State).bLocalQueriesEnded != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!State.bLocalQueriesEnded",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
                         ,0x114,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = &(this_00->State).PipelineStats;
  (this_00->State).bLocalQueriesEnded = true;
  if (pFVar2->Heap != (FD3D12QueryHeap *)0x0) {
    FD3D12CommandList::EndQuery(this_00,pFVar2);
  }
  if ((this_00->State).EndTimestamp.Heap != (FD3D12QueryHeap *)0x0) {
    pFVar8 = UE::RHI::GPUProfiler::FEventStream::Emplace<UE::RHI::GPUProfiler::FEvent::FEndWork>
                       (&(this_00->State).EventStream);
    (this_00->State).EndTimestamp.Target = pFVar8;
    FD3D12CommandList::EndQuery(this_00,&(this_00->State).EndTimestamp);
  }
  pIVar9 = (this_00->Interfaces).CopyCommandList.Reference;
  if (pIVar9 == (ID3D12GraphicsCommandList *)0x0) {
    pIVar9 = (this_00->Interfaces).GraphicsCommandList.Reference;
  }
  iVar6 = (**(code **)((longlong)*pIVar9 + 0x48))();
  if (iVar6 < 0) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar6,"hr",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandList.cpp"
               ,0xef,(ID3D12Device *)0x0,&local_28);
  }
  if ((((*(int *)&(this_00->State).DeferredResidencyUpdateSet.Elements.field_0x8 ==
         *(int *)&(this_00->State).DeferredResidencyUpdateSet.Elements.field_0x34) &&
       (GEnableResidencyManagement != false)) && (this_00->ResidencySet != (ResidencySet *)0x0)) &&
     (iVar6 = D3DX12Residency::ResidencySet::Close(this_00->ResidencySet), iVar6 < 0)) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar6,"pSet->Close()",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Residency.h"
               ,0x9f,(ID3D12Device *)0x0,&local_18);
  }
  (this_00->State).IsClosed = true;
  this->CommandList = (FD3D12CommandList *)0x0;
  FD3D12QueryAllocator::CloseAndReset
            (&this->TimestampQueries,
             (TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
              *)&pFVar7->field_0x2b0);
  FD3D12QueryAllocator::CloseAndReset
            (&this->OcclusionQueries,
             (TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
              *)&pFVar7->field_0x2b0);
  FD3D12QueryAllocator::CloseAndReset
            (&this->PipelineStatsQueries,
             (TMap<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FD3D12QueryHeap>,TArray<FD3D12QueryRange,TSizedDefaultAllocator<32>_>,0>_>
              *)&pFVar7->field_0x2b0);
  return;
}

// ConditionalClearShaderResource @ 1459b8300

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12ContextCommon::ConditionalClearShaderResource
          (FD3D12ContextCommon *this,FD3D12ResourceLocation *param_1,
          EShaderParameterTypeMask param_2)

{
  return;
}

// ConditionalSplitCommandList @ 1459b8310

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12ContextCommon::ConditionalSplitCommandList(FD3D12ContextCommon *this)

{
  if ((((this->CommandList != (FD3D12CommandList *)0x0) && (this->ActiveQueries == 0)) &&
      (0 < GD3D12MaxCommandsPerCommandList)) &&
     ((uint)GD3D12MaxCommandsPerCommandList < (this->CommandList->State).NumCommands)) {
    if (5 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
                    /* WARNING: Could not recover jumptable at 0x0001459b836b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x10))(this);
    return;
  }
  return;
}

// Finalize @ 1459bf9d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12ContextCommon::Finalize
          (FD3D12ContextCommon *this,TArray<FD3D12Payload_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<TRefCountPtr<FD3D12SyncPoint>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  FD3D12CommandAllocator **ppFVar5;
  FScriptContainerElement *pFVar6;
  FD3D12QueryRange *pFVar7;
  FD3D12SyncPoint *pFVar8;
  code *pcVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FD3D12Payload *pFVar14;
  
  if (this->CommandList == (FD3D12CommandList *)0x0) {
    iVar12 = (**(code **)((longlong)*(this->Barriers).Ptr + 0x30))();
    if (iVar12 == 0) goto LAB_1459bfa0d;
  }
  (**(code **)(this->_padding_ + 0x10))(this);
LAB_1459bfa0d:
  if ((this->BatchedSyncPoints).ToWait.ArrayNum != 0) {
    iVar12 = (this->Payloads).ArrayNum;
    if (iVar12 == 0) {
      pFVar14 = GetPayload(this,Wait);
    }
    else {
      if (iVar12 < 1) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pFVar14 = *(FD3D12Payload **)(this->Payloads).AllocatorInstance.Data;
    }
    TArray<TRefCountPtr<FD3D12SyncPoint>,TSizedDefaultAllocator<32>_>::
    Append<TRefCountPtr<FD3D12SyncPoint>,TSizedDefaultAllocator<32>_>
              ((TArray<TRefCountPtr<FD3D12SyncPoint>,TSizedDefaultAllocator<32>_> *)
               &pFVar14->field_0x10,&(this->BatchedSyncPoints).ToWait);
    piVar1 = &(this->BatchedSyncPoints).ToWait.ArrayMax;
    pFVar6 = (this->BatchedSyncPoints).ToWait.AllocatorInstance.Data;
    iVar12 = (this->BatchedSyncPoints).ToWait.ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>
                ((TRefCountPtr<FD3D12SyncPoint> *)pFVar6,iVar12);
      (this->BatchedSyncPoints).ToWait.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)&this->BatchedSyncPoints,0,piVar1);
      }
    }
    else {
      DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>
                ((TRefCountPtr<FD3D12SyncPoint> *)pFVar6,iVar12);
      (this->BatchedSyncPoints).ToWait.ArrayNum = 0;
    }
  }
  if ((this->BatchedSyncPoints).ToSignal.ArrayNum != 0) {
    pFVar14 = GetPayload(this,Signal);
    pTVar2 = &(this->BatchedSyncPoints).ToSignal;
    puVar4 = &pFVar14->field_0x230;
    if ((TArray<TRefCountPtr<FD3D12SyncPoint>,TSizedDefaultAllocator<32>_> *)puVar4 == pTVar2) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar12 = (this->BatchedSyncPoints).ToSignal.ArrayNum;
    if (iVar12 != 0) {
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,iVar12,(ForAnyElementType *)puVar4,(int *)&pFVar14->field_0x238,
                          (int *)&pFVar14->field_0x23c);
      ConstructItems<TRefCountPtr<FD3D12SyncPoint>,TRefCountPtr<FD3D12SyncPoint>,int>
                ((void *)(*(longlong *)puVar4 + (longlong)iVar13 * 8),
                 (TRefCountPtr<FD3D12SyncPoint> *)(pTVar2->AllocatorInstance).Data,iVar12);
    }
    piVar1 = &(this->BatchedSyncPoints).ToSignal.ArrayMax;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    iVar12 = (this->BatchedSyncPoints).ToSignal.ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>
                ((TRefCountPtr<FD3D12SyncPoint> *)pFVar6,iVar12);
      (this->BatchedSyncPoints).ToSignal.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TRefCountPtr<FD3D12SyncPoint>,int>
                ((TRefCountPtr<FD3D12SyncPoint> *)pFVar6,iVar12);
      (this->BatchedSyncPoints).ToSignal.ArrayNum = 0;
    }
  }
  ppFVar5 = &this->CommandAllocator;
  if (*ppFVar5 != (FD3D12CommandAllocator *)0x0) {
    pFVar14 = GetPayload(this,Signal);
    puVar4 = &pFVar14->field_0x270;
    if ((*(undefined1 **)puVar4 <= ppFVar5) &&
       (ppFVar5 < *(undefined1 **)puVar4 + (longlong)*(int *)&pFVar14->field_0x27c * 8)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    iVar12 = *(int *)&pFVar14->field_0x278;
    if (iVar12 == *(int *)&pFVar14->field_0x27c) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)puVar4,(int *)&pFVar14->field_0x27c);
    }
    *(int *)&pFVar14->field_0x278 = iVar12 + 1;
    *(FD3D12CommandAllocator **)(*(longlong *)puVar4 + (longlong)iVar12 * 8) = *ppFVar5;
    *ppFVar5 = (FD3D12CommandAllocator *)0x0;
  }
  pFVar7 = (this->TimestampQueries).CurrentRange;
  if ((pFVar7 != (FD3D12QueryRange *)0x0) && (pFVar7->Start != pFVar7->End)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!TimestampQueries.HasQueries()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                        ,0x1c3,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar7 = (this->OcclusionQueries).CurrentRange;
  if ((pFVar7 != (FD3D12QueryRange *)0x0) && (pFVar7->Start != pFVar7->End)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!OcclusionQueries.HasQueries()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                        ,0x1c4,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar7 = (this->PipelineStatsQueries).CurrentRange;
  if ((pFVar7 != (FD3D12QueryRange *)0x0) && (pFVar7->Start != pFVar7->End)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!PipelineStatsQueries.HasQueries()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                        ,0x1c5,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar8 = (this->ContextSyncPoint).Reference;
  if (pFVar8 != (FD3D12SyncPoint *)0x0) {
    (this->ContextSyncPoint).Reference = (FD3D12SyncPoint *)0x0;
    plVar3 = &pFVar8->_padding_;
    LOCK();
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if (((int)lVar10 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
  }
  if (param_1 == &this->Payloads) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x986,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar12 = (this->Payloads).ArrayNum;
  if (iVar12 != 0) {
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar12,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax
                       );
    memmove((param_1->AllocatorInstance).Data + (longlong)iVar13 * 8,
            (this->Payloads).AllocatorInstance.Data,(longlong)iVar12 << 3);
    (this->Payloads).ArrayNum = 0;
  }
  return;
}

// FlushCommands @ 1459c0540

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12ContextCommon::FlushCommands(FD3D12ContextCommon *this,ED3D12FlushFlags param_1)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  longlong *plVar3;
  atomic<unsigned_int> aVar4;
  FTaskBase *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  TRefCountPtr<FD3D12SyncPoint> TVar10;
  TRefCountPtr<FBaseGraphTask> TVar11;
  FD3D12Payload *pFVar12;
  FTaskBase *this_00;
  FTaskBase *this_01;
  TArray<FD3D12Payload_*,TSizedDefaultAllocator<32>_> local_48;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 local_28 [16];
  
  if (this->bIsDefaultContext == false) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsDefaultContext()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                       ,0x265,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (this->CommandList == (FD3D12CommandList *)0x0) {
    iVar9 = (**(code **)((longlong)*(this->Barriers).Ptr + 0x30))();
    if (iVar9 == 0) goto LAB_1459c05ae;
  }
  (**(code **)(this->_padding_ + 0x10))(this);
LAB_1459c05ae:
  this_00 = (FTaskBase *)0x0;
  this_01 = this_00;
  if ((param_1 & WaitForCompletion) != None) {
    TVar10 = FD3D12SyncPoint::Create((ED3D12SyncPointType)&local_38,(wchar_t *)&DAT_00000001);
    if ((FD3D12SyncPoint *)local_28 != TVar10.Reference) {
      this_01 = (FTaskBase *)(TVar10.Reference)->_padding_;
      (TVar10.Reference)->_padding_ = 0;
    }
    if (local_38 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_38 + 1);
      LOCK();
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (((iVar9 == 1) && (piVar1 != (int *)0x0)) && (local_38 != (undefined8 *)0x0)) {
        (**(code **)*local_38)(local_38,1);
      }
    }
    SignalSyncPoint(this,(FD3D12SyncPoint *)this_01);
  }
  if ((param_1 & WaitForSubmission) != None) {
    TVar11 = FBaseGraphTask::CreateGraphEvent();
    if ((FBaseGraphTask *)(local_28 + 8) != TVar11.Reference) {
      this_00 = *(FTaskBase **)TVar11.Reference;
      *(undefined8 *)TVar11.Reference = 0;
    }
    if (local_30 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_30 + 6);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar9 == 1) && (local_30 != (undefined8 *)0x0)) {
        (**(code **)*local_30)(local_30,1);
      }
    }
    pFVar12 = GetPayload(this,Signal);
    pFVar5 = *(FTaskBase **)&pFVar12->field_0x248;
    if (pFVar5 != this_00) {
      *(FTaskBase **)&pFVar12->field_0x248 = this_00;
      if (this_00 != (FTaskBase *)0x0) {
        LOCK();
        this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
        UNLOCK();
      }
      if (pFVar5 != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &pFVar5->RefCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar5->_padding_)(pFVar5,1);
        }
      }
    }
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  (**(code **)(this->_padding_ + 0x28))(this,&local_48);
  FD3D12DynamicRHI::SubmitPayloads(FD3D12DynamicRHI::SingleD3DRHI,&local_48);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (this_01 != (FTaskBase *)0x0) {
    FD3D12SyncPoint::Wait((FD3D12SyncPoint *)this_01);
  }
  if (this_00 != (FTaskBase *)0x0) {
    if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Turquoise,"Submission_Wait");
      if (CpuChannel->Enabled < 0) {
        UE::Tasks::Private::FTaskBase::WaitWithNamedThreadsSupport(this_00);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId648,"Submission_Wait",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                   ,0x288);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId648);
        UE::Tasks::Private::FTaskBase::WaitWithNamedThreadsSupport(this_00);
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
    }
    LOCK();
    paVar2 = &this_00->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  if (this_01 != (FTaskBase *)0x0) {
    plVar3 = &this_01->_padding_;
    LOCK();
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  return;
}

// FlushResourceBarriers @ 1459c0b70

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12ContextCommon::FlushResourceBarriers(FD3D12ContextCommon *this)

{
  ID3D12BarriersForContext *pIVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  pIVar1 = (this->Barriers).Ptr;
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*pIVar1 + 0x28);
  if (this->CommandList == (FD3D12CommandList *)0x0) {
    (**(code **)(this->_padding_ + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001459c0bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,this->CommandList,&this->TimestampQueries);
  return;
}

// GetContextSyncPoint @ 1459c1d90

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12SyncPoint * __thiscall FD3D12ContextCommon::GetContextSyncPoint(FD3D12ContextCommon *this)

{
  longlong *plVar1;
  TRefCountPtr<FD3D12SyncPoint> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  TRefCountPtr<FD3D12SyncPoint> TVar8;
  int *piVar9;
  FD3D12SyncPoint *pFVar10;
  undefined8 *local_res8;
  
  pTVar2 = &this->ContextSyncPoint;
  if (pTVar2->Reference == (FD3D12SyncPoint *)0x0) {
    TVar8 = FD3D12SyncPoint::Create((ED3D12SyncPointType)&local_res8,(wchar_t *)&DAT_00000001);
    if ((FD3D12SyncPoint *)pTVar2 != TVar8.Reference) {
      pFVar10 = pTVar2->Reference;
      pTVar2->Reference = (FD3D12SyncPoint *)(TVar8.Reference)->_padding_;
      (TVar8.Reference)->_padding_ = 0;
      if (pFVar10 != (FD3D12SyncPoint *)0x0) {
        plVar1 = &pFVar10->_padding_;
        LOCK();
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          if (plVar1 == (longlong *)0x0) {
            pFVar10 = (FD3D12SyncPoint *)0x0;
          }
          if (pFVar10 != (FD3D12SyncPoint *)0x0) {
            (**(code **)pFVar10->_padding_)(pFVar10,1);
          }
        }
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      piVar9 = (int *)(local_res8 + 1);
      LOCK();
      iVar7 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        if (piVar9 == (int *)0x0) {
          local_res8 = (undefined8 *)0x0;
        }
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
    }
    pFVar3 = (this->BatchedSyncPoints).ToSignal.AllocatorInstance.Data;
    if ((pFVar3 <= pTVar2) &&
       (pTVar2 < pFVar3 + (longlong)(this->BatchedSyncPoints).ToSignal.ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FD3D12SyncPoint *)(*pcVar4)();
        return pFVar10;
      }
    }
    iVar7 = (this->BatchedSyncPoints).ToSignal.ArrayNum;
    piVar9 = &(this->BatchedSyncPoints).ToSignal.ArrayMax;
    if (iVar7 == *piVar9) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->BatchedSyncPoints).ToSignal.AllocatorInstance,piVar9);
    }
    (this->BatchedSyncPoints).ToSignal.ArrayNum = iVar7 + 1;
    pFVar3 = (this->BatchedSyncPoints).ToSignal.AllocatorInstance.Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar7 * 8) = 0;
    pFVar10 = pTVar2->Reference;
    *(FD3D12SyncPoint **)(pFVar3 + (longlong)iVar7 * 8) = pFVar10;
    if (pFVar10 != (FD3D12SyncPoint *)0x0) {
      LOCK();
      *(int *)&pFVar10->_padding_ = (int)pFVar10->_padding_ + 1;
      UNLOCK();
    }
  }
  return pTVar2->Reference;
}

// GetPayload @ 1459c26a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12Payload * __thiscall FD3D12ContextCommon::GetPayload(FD3D12ContextCommon *this,EPhase param_1)

{
  int *piVar1;
  TArray<FD3D12Payload_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FD3D12PayloadBase *this_00;
  FD3D12Queue *pFVar7;
  FD3D12Payload *pFVar8;
  uint uVar9;
  uint uVar10;
  FD3D12PayloadBase *pFVar11;
  FD3D12PayloadBase *local_18 [2];
  
  pFVar11 = (FD3D12PayloadBase *)0x0;
  if (((this->Payloads).ArrayNum == 0) || ((int)param_1 < (int)this->CurrentPhase)) {
    pTVar2 = &this->Payloads;
    this_00 = ::operator_new(0x360);
    if (this_00 != (FD3D12PayloadBase *)0x0) {
      pFVar7 = FD3D12Device::GetQueue(this->Device,this->QueueType);
      FD3D12PayloadBase::FD3D12PayloadBase(this_00,pFVar7);
      this_00->_padding_ = (longlong)&___7FD3D12Payload__6B_;
      pFVar11 = this_00;
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    local_18[0] = pFVar11;
    if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Payloads).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FD3D12Payload *)(*pcVar4)();
      return pFVar8;
    }
    iVar6 = (this->Payloads).ArrayNum;
    piVar1 = &(this->Payloads).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Payloads).ArrayNum = iVar6 + 1;
    *(FD3D12PayloadBase **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  }
  this->CurrentPhase = param_1;
  iVar6 = (this->Payloads).ArrayNum;
  uVar9 = iVar6 - 1;
  uVar10 = 0;
  if ((int)uVar9 < iVar6) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FD3D12Payload *)(*pcVar4)();
    return pFVar8;
  }
  return *(FD3D12Payload **)
          ((this->Payloads).AllocatorInstance.Data + (longlong)(this->Payloads).ArrayNum * 8 + -8);
}

// GetRHIPipeline @ 1459c28e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ERHIPipeline __thiscall FD3D12ContextCommon::GetRHIPipeline(FD3D12ContextCommon *this)

{
  code *pcVar1;
  bool bVar2;
  ERHIPipeline EVar3;
  
  if (this->QueueType == Direct) {
    return Graphics;
  }
  if (this->QueueType != Async) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                       ,0x1d6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return None;
  }
  return AsyncCompute;
}

// InsertTimestamp @ 1459c7330

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12QueryLocation * __thiscall
FD3D12ContextCommon::InsertTimestamp
          (FD3D12ContextCommon *this,FD3D12QueryLocation *__return_storage_ptr__,ED3D12Units param_1
          ,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  FD3D12QueryLocation *pFVar3;
  ED3D12QueryType EVar4;
  
  if (param_1 == Raw) {
    EVar4 = TimestampRaw;
  }
  else {
    if (param_1 != Microseconds) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                         ,0x142,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FD3D12QueryLocation *)(*pcVar1)();
        return pFVar3;
      }
    }
    EVar4 = TimestampMicroseconds;
  }
  AllocateQuery(this,__return_storage_ptr__,EVar4,param_2);
  if (this->CommandList == (FD3D12CommandList *)0x0) {
    (**(code **)(this->_padding_ + 8))(this);
  }
  FD3D12CommandList::EndQuery(this->CommandList,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// NewPayload @ 1459c81a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12ContextCommon::NewPayload(FD3D12ContextCommon *this)

{
  int *piVar1;
  TArray<FD3D12Payload_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FD3D12Queue *pFVar7;
  FD3D12PayloadBase *local_18 [2];
  
  pTVar2 = &this->Payloads;
  local_18[0] = ::operator_new(0x360);
  if (local_18[0] == (FD3D12PayloadBase *)0x0) {
    local_18[0] = (FD3D12PayloadBase *)0x0;
  }
  else {
    pFVar7 = FD3D12Device::GetQueue(this->Device,this->QueueType);
    FD3D12PayloadBase::FD3D12PayloadBase(local_18[0],pFVar7);
    local_18[0]->_padding_ = (longlong)&___7FD3D12Payload__6B_;
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Payloads).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Payloads).ArrayNum;
  piVar1 = &(this->Payloads).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Payloads).ArrayNum = iVar6 + 1;
  *(FD3D12PayloadBase **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// OpenCommandList @ 1459c89a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12ContextCommon::OpenCommandList(FD3D12ContextCommon *this)

{
  FD3D12CommandList **ppFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FD3D12CommandAllocator *pFVar6;
  FD3D12CommandList *pFVar7;
  FD3D12Payload *pFVar8;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name353,L"RHIMisc/OpenCommandList");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name353,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name353,true);
  ppFVar1 = &this->CommandList;
  if (*ppFVar1 != (FD3D12CommandList *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsOpen()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                       ,0x162,L"Command list is already open.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = this->CommandAllocator;
  if (pFVar6 == (FD3D12CommandAllocator *)0x0) {
    pFVar6 = FD3D12Device::ObtainCommandAllocator(this->Device,this->QueueType);
    this->CommandAllocator = pFVar6;
  }
  pFVar7 = FD3D12Device::ObtainCommandList
                     (this->Device,pFVar6,&this->TimestampQueries,&this->PipelineStatsQueries);
  *ppFVar1 = pFVar7;
  pFVar8 = GetPayload(this,Execute);
  puVar2 = &pFVar8->field_0x210;
  if ((*(undefined1 **)puVar2 <= ppFVar1) &&
     (ppFVar1 < *(undefined1 **)puVar2 + (longlong)*(int *)&pFVar8->field_0x21c * 8)) {
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
  iVar5 = *(int *)&pFVar8->field_0x218;
  if (iVar5 == *(int *)&pFVar8->field_0x21c) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)puVar2,(int *)&pFVar8->field_0x21c);
  }
  *(int *)&pFVar8->field_0x218 = iVar5 + 1;
  *(FD3D12CommandList **)(*(longlong *)puVar2 + (longlong)iVar5 * 8) = *ppFVar1;
  if (this->ActiveQueries != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveQueries == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                       ,0x16e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetReservedBufferCommitSize @ 1459d8fd0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12ContextCommon::SetReservedBufferCommitSize
          (FD3D12ContextCommon *this,FD3D12Buffer *param_1,ulong64 param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FD3D12Payload *pFVar6;
  longlong local_18;
  ulong64 uStack_10;
  
  if (this->CommandList == (FD3D12CommandList *)0x0) {
    iVar5 = (**(code **)((longlong)*(this->Barriers).Ptr + 0x30))();
    if (iVar5 == 0) goto LAB_1459d900c;
  }
  (**(code **)(this->_padding_ + 0x10))(this);
LAB_1459d900c:
  local_18 = param_1->_padding_;
  uStack_10 = param_2;
  if (local_18 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CommitDesc.Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                       ,0x15a,L"FD3D12CommitReservedResourceDesc::Resource must be set");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = GetPayload(this,UpdateReservedResources);
  puVar1 = &pFVar6->field_0x1c8;
  if ((*(longlong **)puVar1 <= &local_18) &&
     (&local_18 < *(longlong **)puVar1 + (longlong)*(int *)&pFVar6->field_0x1d4 * 2)) {
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
  iVar5 = *(int *)&pFVar6->field_0x1d0;
  if (iVar5 == *(int *)&pFVar6->field_0x1d4) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)puVar1,(int *)&pFVar6->field_0x1d4);
  }
  *(int *)&pFVar6->field_0x1d0 = iVar5 + 1;
  plVar2 = (longlong *)(*(longlong *)puVar1 + (longlong)iVar5 * 0x10);
  *plVar2 = local_18;
  plVar2[1] = uStack_10;
  return;
}

// SignalManualFence @ 1459db6f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12ContextCommon::SignalManualFence
          (FD3D12ContextCommon *this,ID3D12Fence *param_1,ulong64 param_2)

{
  int iVar1;
  FD3D12Payload *pFVar2;
  undefined8 *puVar3;
  
  if (this->CommandList == (FD3D12CommandList *)0x0) {
    iVar1 = (**(code **)((longlong)*(this->Barriers).Ptr + 0x30))();
    if (iVar1 == 0) goto LAB_1459db731;
  }
  (**(code **)(this->_padding_ + 0x10))(this);
LAB_1459db731:
  pFVar2 = GetPayload(this,Signal);
  iVar1 = *(int *)&pFVar2->field_0x228;
  if (iVar1 == *(int *)&pFVar2->field_0x22c) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&pFVar2->field_0x220,(int *)&pFVar2->field_0x22c);
  }
  puVar3 = (undefined8 *)(*(longlong *)&pFVar2->field_0x220 + (longlong)iVar1 * 0x10);
  *(int *)&pFVar2->field_0x228 = iVar1 + 1;
  if (param_1 != (ID3D12Fence *)0x0) {
    (**(code **)((longlong)*param_1 + 8))(param_1);
  }
  puVar3[1] = param_2;
  *puVar3 = param_1;
  return;
}

// SignalSyncPoint @ 1459db7a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12ContextCommon::SignalSyncPoint(FD3D12ContextCommon *this,FD3D12SyncPoint *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FD3D12Payload *pFVar6;
  FD3D12SyncPoint *local_18 [2];
  
  if (this->CommandList == (FD3D12CommandList *)0x0) {
    iVar5 = (**(code **)((longlong)*(this->Barriers).Ptr + 0x30))();
    if (iVar5 == 0) goto LAB_1459db7d4;
  }
  (**(code **)(this->_padding_ + 0x10))(this);
LAB_1459db7d4:
  pFVar6 = GetPayload(this,Signal);
  puVar1 = &pFVar6->field_0x230;
  if (param_1 != (FD3D12SyncPoint *)0x0) {
    LOCK();
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    UNLOCK();
  }
  local_18[0] = param_1;
  if ((*(FD3D12SyncPoint ***)puVar1 <= local_18) &&
     (local_18 < *(FD3D12SyncPoint ***)puVar1 + *(int *)&pFVar6->field_0x23c)) {
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
  iVar5 = *(int *)&pFVar6->field_0x238;
  if (iVar5 == *(int *)&pFVar6->field_0x23c) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)puVar1,(int *)&pFVar6->field_0x23c);
  }
  *(int *)&pFVar6->field_0x238 = iVar5 + 1;
  lVar2 = *(longlong *)puVar1;
  *(undefined8 *)(lVar2 + (longlong)iVar5 * 8) = 0;
  *(FD3D12SyncPoint **)(lVar2 + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// UpdateResidency @ 1459e0080

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12ContextCommon::UpdateResidency(FD3D12ContextCommon *this,FD3D12Resource *param_1)

{
  FD3D12CommandList *this_00;
  code *pcVar1;
  bool bVar2;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar3;
  FD3D12Resource *local_res8;
  FD3D12Resource *local_res10;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_28;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_18;
  
  if (param_1 == (FD3D12Resource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                       ,0x1a5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->CommandList == (FD3D12CommandList *)0x0) {
    (**(code **)(this->_padding_ + 8))(this);
  }
  this_00 = this->CommandList;
  local_res10 = param_1;
  if ((param_1->ReservedResourceData).Ptr != (FD3D12ReservedResourceData *)0x0) {
    TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>::
    Emplace<FD3D12Resource_const_*_const_&>
              (&(this_00->State).DeferredResidencyUpdateSet,&local_res8,(bool *)&local_res10);
    return;
  }
  pTVar3 = FD3D12Resource::GetResidencyHandles(param_1,&local_18);
  local_28.DataPtr = pTVar3->DataPtr;
  local_28.ArrayNum = pTVar3->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&pTVar3->field_0xc;
  FD3D12CommandList::AddToResidencySet(this_00,&local_28);
  return;
}

// WaitManualFence @ 1459e0f60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12ContextCommon::WaitManualFence(FD3D12ContextCommon *this,ID3D12Fence *param_1,ulong64 param_2)

{
  int iVar1;
  FD3D12Payload *pFVar2;
  undefined8 *puVar3;
  
  if (this->CommandList == (FD3D12CommandList *)0x0) {
    iVar1 = (**(code **)((longlong)*(this->Barriers).Ptr + 0x30))();
    if (iVar1 == 0) goto LAB_1459e0fa1;
  }
  (**(code **)(this->_padding_ + 0x10))(this);
LAB_1459e0fa1:
  pFVar2 = GetPayload(this,Wait);
  iVar1 = *(int *)&pFVar2->field_0x1c0;
  if (iVar1 == *(int *)&pFVar2->field_0x1c4) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&pFVar2->field_0x1b8,(int *)&pFVar2->field_0x1c4);
  }
  puVar3 = (undefined8 *)(*(longlong *)&pFVar2->field_0x1b8 + (longlong)iVar1 * 0x10);
  *(int *)&pFVar2->field_0x1c0 = iVar1 + 1;
  if (param_1 != (ID3D12Fence *)0x0) {
    (**(code **)((longlong)*param_1 + 8))(param_1);
  }
  puVar3[1] = param_2;
  *puVar3 = param_1;
  return;
}

// WaitSyncPoint @ 1459e1010

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12ContextCommon::WaitSyncPoint(FD3D12ContextCommon *this,FD3D12SyncPoint *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FD3D12Payload *pFVar5;
  FD3D12SyncPoint *local_18 [2];
  
  if (this->CommandList == (FD3D12CommandList *)0x0) {
    iVar4 = (**(code **)((longlong)*(this->Barriers).Ptr + 0x30))();
    if (iVar4 == 0) goto LAB_1459e1044;
  }
  (**(code **)(this->_padding_ + 0x10))(this);
LAB_1459e1044:
  pFVar5 = GetPayload(this,Wait);
  if (param_1 != (FD3D12SyncPoint *)0x0) {
    LOCK();
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    UNLOCK();
  }
  local_18[0] = param_1;
  if ((*(FD3D12SyncPoint ***)&pFVar5->field_0x10 <= local_18) &&
     (local_18 < *(FD3D12SyncPoint ***)&pFVar5->field_0x10 + *(int *)&pFVar5->field_0x1c)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)&pFVar5->field_0x18;
  if (iVar4 == *(int *)&pFVar5->field_0x1c) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pFVar5->field_0x10,(int *)&pFVar5->field_0x1c);
  }
  *(int *)&pFVar5->field_0x18 = iVar4 + 1;
  lVar1 = *(longlong *)&pFVar5->field_0x10;
  *(undefined8 *)(lVar1 + (longlong)iVar4 * 8) = 0;
  *(FD3D12SyncPoint **)(lVar1 + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// WriteMarker @ 1459e1120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12ContextCommon::WriteMarker
          (FD3D12ContextCommon *this,ulong64 param_1,uint param_2,EMarkerType param_3)

{
  uint *puVar1;
  ID3D12GraphicsCommandList2 *pIVar2;
  undefined1 auStack_68 [32];
  int local_48 [2];
  ulong64 local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (this->CommandList == (FD3D12CommandList *)0x0) {
    (**(code **)(this->_padding_ + 8))();
  }
  if ((this->CommandList->Interfaces).GraphicsCommandList2.Reference !=
      (ID3D12GraphicsCommandList2 *)0x0) {
    local_48[0] = (param_3 != In) + 1;
    local_40 = param_1;
    local_38 = param_2;
    if (this->CommandList == (FD3D12CommandList *)0x0) {
      (**(code **)(this->_padding_ + 8))(this);
    }
    pIVar2 = (this->CommandList->Interfaces).GraphicsCommandList2.Reference;
    puVar1 = &(this->CommandList->State).NumCommands;
    *puVar1 = *puVar1 + 1;
    (**(code **)((longlong)*pIVar2 + 0x210))(pIVar2,1,&local_40,local_48);
  }
  return;
}


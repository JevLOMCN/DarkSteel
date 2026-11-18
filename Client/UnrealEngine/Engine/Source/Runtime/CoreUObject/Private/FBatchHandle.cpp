// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// ~FBatchHandle @ 141f23470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FBulkDataBatchRequest::FBatchHandle::~FBatchHandle(FBatchHandle *this)

{
  longlong lVar1;
  EIoErrorCode EVar2;
  longlong *plVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  ushort uVar7;
  FIoStatus *pFVar8;
  FMonotonicTimePoint FVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  FIoStatus local_28;
  
  this->_padding_ = (longlong)&___7FBatchHandle_FBulkDataBatchRequest__6B_;
  if (*(int *)((longlong)&this->_padding_ + 4) == 0) {
    CompleteBatch(this,Cancelled);
  }
  else if (*(int *)((longlong)&this->_padding_ + 4) == 1) {
    uVar10 = (this->Requests).NumElements;
    uVar12 = 0;
    pFVar13 = (this->Requests).Chunks.Array.AllocatorInstance.Data;
    if (uVar10 != 0) {
      uVar14 = (ulonglong)uVar10;
      do {
        lVar1 = *(longlong *)pFVar13 + uVar12 * 0x18;
        pFVar8 = FIoRequest::Status((FIoRequest *)(lVar1 + 0x10),&local_28);
        EVar2 = pFVar8->ErrorCode;
        FIoStatus::~FIoStatus(&local_28);
        if (EVar2 == Unknown) {
          FIoRequest::Cancel((FIoRequest *)(lVar1 + 0x10));
        }
        uVar10 = (int)uVar12 + 1;
        uVar12 = 0;
        pFVar5 = pFVar13 + 8;
        if (uVar10 < 8) {
          uVar12 = (ulonglong)uVar10;
          pFVar5 = pFVar13;
        }
        pFVar13 = pFVar5;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if ((*(int *)((longlong)&this->_padding_ + 4) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetStatus() != FBulkDataRequest::EStatus::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                         ,0x290,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar9 = UE::FMonotonicTimePoint::Now();
                    /* WARNING: Load size is inaccurate */
  UE::FManualResetEvent::WaitUntil
            (&this->DoneEvent,(FMonotonicTimePoint)(*FVar9.Time + ___real_4150624dd2e147ae));
  LOCK();
  __GTraceCounterBulkDataBatchRequest_Count.Value =
       (atomic<__int64>)((longlong)__GTraceCounterBulkDataBatchRequest_Count.Value + -1);
  UNLOCK();
  if (-1 < CountersChannel->Enabled) {
    if (__GTraceCounterBulkDataBatchRequest_Count.CounterId == (atomic<unsigned_int>)0x0) {
      uVar7 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterBulkDataBatchRequest_Count.CounterName,TraceCounterType_Int,
                         __GTraceCounterBulkDataBatchRequest_Count.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterBulkDataBatchRequest_Count.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterBulkDataBatchRequest_Count.CounterId._2_2_ = 0;
        __GTraceCounterBulkDataBatchRequest_Count.CounterId._0_2_ = uVar7;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterBulkDataBatchRequest_Count.CounterId._0_2_,
               (long64)__GTraceCounterBulkDataBatchRequest_Count.Value);
  }
  if (*(longlong *)&this->CompletionCallback != 0) {
    plVar3 = *(longlong **)&(this->CompletionCallback).field_0x28;
    plVar11 = (longlong *)&(this->CompletionCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar11 = plVar3;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  TIndirectArray<TChunkedArray<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty(&(this->Requests).Chunks,0);
  pFVar13 = (this->Requests).Chunks.Array.AllocatorInstance.Data;
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  FIoBatch::~FIoBatch(&this->IoBatch);
  this->_padding_ = (longlong)&___7IHandle_FBulkDataRequest__6B_;
  return;
}

// operator() @ 141f26ae0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`FBulkDataBatchRequest::FBatchHandle::Issue'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  EIoErrorCode EVar2;
  longlong *plVar3;
  ushort uVar4;
  FIoStatus *pFVar5;
  uint uVar6;
  ulonglong uVar7;
  EStatus EVar8;
  uint uVar9;
  longlong *plVar10;
  FIoStatus local_28;
  
  uVar7 = 0;
  EVar8 = Ok;
  uVar9 = 0;
  plVar10 = *(longlong **)(*(longlong *)this + 0x28);
  uVar1 = *(uint *)(*(longlong *)this + 0x38);
  if (uVar1 != 0) {
    do {
      pFVar5 = FIoRequest::Status((FIoRequest *)(*plVar10 + uVar7 * 0x18 + 0x10),&local_28);
      EVar2 = pFVar5->ErrorCode;
      FIoStatus::~FIoStatus(&local_28);
      if (EVar2 != Ok) {
        EVar8 = (EVar2 != Cancelled) + Cancelled;
        break;
      }
      uVar6 = (int)uVar7 + 1;
      uVar9 = uVar9 + 1;
      uVar7 = 0;
      plVar3 = plVar10 + 1;
      if (uVar6 < 8) {
        uVar7 = (ulonglong)uVar6;
        plVar3 = plVar10;
      }
      plVar10 = plVar3;
    } while (uVar9 < uVar1);
  }
  FBulkDataBatchRequest::FBatchHandle::CompleteBatch(*(FBatchHandle **)this,EVar8);
  LOCK();
  __GTraceCounterBulkDataBatchRequest_PendingCount.Value =
       (atomic<__int64>)((longlong)__GTraceCounterBulkDataBatchRequest_PendingCount.Value + -1);
  UNLOCK();
  if (-1 < CountersChannel->Enabled) {
    if (__GTraceCounterBulkDataBatchRequest_PendingCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar4 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterBulkDataBatchRequest_PendingCount.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterBulkDataBatchRequest_PendingCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterBulkDataBatchRequest_PendingCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterBulkDataBatchRequest_PendingCount.CounterId._2_2_ = 0;
        __GTraceCounterBulkDataBatchRequest_PendingCount.CounterId._0_2_ = uVar4;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterBulkDataBatchRequest_PendingCount.CounterId._0_2_,
               (long64)__GTraceCounterBulkDataBatchRequest_PendingCount.Value);
    return;
  }
  return;
}

// Cancel @ 141f2a8d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FBulkDataBatchRequest::FBatchHandle::Cancel(FBatchHandle *this)

{
  longlong lVar1;
  EIoErrorCode EVar2;
  FScriptContainerElement *pFVar3;
  FIoStatus *pFVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  FIoStatus local_18;
  
  if (*(int *)((longlong)&this->_padding_ + 4) == 0) {
    CompleteBatch(this,Cancelled);
    return true;
  }
  if (*(int *)((longlong)&this->_padding_ + 4) == 1) {
    uVar5 = (this->Requests).NumElements;
    pFVar6 = (this->Requests).Chunks.Array.AllocatorInstance.Data;
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar8 = (ulonglong)uVar5;
      do {
        lVar1 = *(longlong *)pFVar6 + uVar7 * 0x18;
        pFVar4 = FIoRequest::Status((FIoRequest *)(lVar1 + 0x10),&local_18);
        EVar2 = pFVar4->ErrorCode;
        FIoStatus::~FIoStatus(&local_18);
        if (EVar2 == Unknown) {
          FIoRequest::Cancel((FIoRequest *)(lVar1 + 0x10));
        }
        uVar5 = (int)uVar7 + 1;
        uVar7 = 0;
        pFVar3 = pFVar6 + 8;
        if (uVar5 < 8) {
          uVar7 = (ulonglong)uVar5;
          pFVar3 = pFVar6;
        }
        pFVar6 = pFVar3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    return true;
  }
  return false;
}

// CompleteBatch @ 141f2b590

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FBulkDataBatchRequest::FBatchHandle::CompleteBatch(FBatchHandle *this,EStatus param_1)

{
  FManualResetEvent *pFVar1;
  atomic<unsigned_char> aVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  EStatus local_res10 [2];
  
  if (*(void **)&this->CompletionCallback != (void *)0x0) {
    local_res10[0] = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->CompletionCallback);
    plVar3 = *(longlong **)&(this->CompletionCallback).field_0x28;
    pcVar4 = *(code **)&this->CompletionCallback;
    plVar6 = (longlong *)&(this->CompletionCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar6 = plVar3;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar4)(uVar5,local_res10);
  }
  pFVar1 = &this->DoneEvent;
  *(EStatus *)((longlong)&this->_padding_ + 4) = param_1;
  LOCK();
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)0x1;
  UNLOCK();
  if (((byte)aVar2 & 3) == 2) {
    UE::ParkingLot::WakeAll(pFVar1);
    return;
  }
  return;
}

// Read @ 141f414f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FBulkDataBatchRequest::FBatchHandle::Read
          (FBatchHandle *this,FIoChunkId *param_1,FIoReadOptions *param_2,
          EAsyncIOPriorityAndFlags param_3,TFunction<void___cdecl(TIoStatusOr<FIoBuffer>)> *param_4,
          FBulkDataRequest *param_5)

{
  undefined4 uVar1;
  IHandle *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FIoRequest FVar7;
  IHandle IVar8;
  uint uVar9;
  IHandle *pIVar10;
  uint uVar11;
  uint uVar12;
  FIoRequest local_res8;
  undefined8 in_stack_ffffffffffffffa8;
  int iVar13;
  FBulkDataRequest local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar13 = (int)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  local_40 = ___xmm_00000000ffffffffc000000080000000;
  uStack_38 = _UNK_1507f9e48;
  local_30 = 0x3fffffff;
  local_2c = 0x7fffffff;
  uVar1 = *(undefined4 *)((longlong)&local_40 + (ulonglong)(byte)param_3 * 4);
  iVar5 = TChunkedArray<FChunkBatchReadRequest,192,TSizedDefaultAllocator<32>_>::Add
                    (&this->Requests,1);
  uVar11 = iVar5 >> 0x1f & 7;
  uVar6 = iVar5 + uVar11;
  uVar12 = (int)uVar6 >> 3;
  uVar9 = 0;
  if ((int)uVar12 < (this->Requests).Chunks.Array.ArrayNum) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  if (uVar9 == 0) {
    iVar13 = (int)uVar6 >> 0x1f;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pIVar10 = (IHandle *)
            (*(longlong *)
              ((this->Requests).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar12 * 8) +
            (ulonglong)((uVar6 & 7) - uVar11) * 0x18);
  if (pIVar10 != (IHandle *)0x0) {
    pIVar10[1] = (IHandle)this;
    *pIVar10 = (IHandle)&___7FChunkBatchReadRequest__6B_;
    pIVar10[2] = (IHandle)0x0;
  }
  FVar7 = FIoBatch::ReadWithCallback
                    (&this->IoBatch,(FIoChunkId *)&local_res8,(FIoReadOptions *)param_1,(int)param_2
                     ,(TFunction<void___cdecl(TIoStatusOr<FIoBuffer>)> *)CONCAT44(iVar13,uVar1));
  FIoRequest::operator=((FIoRequest *)(pIVar10 + 2),(FIoRequest *)FVar7.Impl);
  FIoRequest::~FIoRequest(&local_res8);
  if (param_5 != (FBulkDataRequest *)0x0) {
    if (pIVar10 == (IHandle *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandle != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\BulkData.h"
                         ,0x4fd,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      (**(code **)((longlong)*pIVar10 + 8))(pIVar10);
    }
    if (param_5 == &local_48) {
      if (pIVar10 == (IHandle *)0x0) {
        return;
      }
      IVar8 = *pIVar10;
    }
    else {
      pIVar2 = (param_5->Handle).Reference;
      (param_5->Handle).Reference = pIVar10;
      if (pIVar2 == (IHandle *)0x0) {
        return;
      }
      IVar8 = *pIVar2;
      pIVar10 = pIVar2;
    }
    (**(code **)((longlong)IVar8 + 0x10))(pIVar10);
  }
  return;
}

// UpdatePriority @ 141f4fe60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FBulkDataBatchRequest::FBatchHandle::UpdatePriority
          (FBatchHandle *this,EAsyncIOPriorityAndFlags param_1)

{
  longlong lVar1;
  EIoErrorCode EVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  FIoStatus *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FIoStatus local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar4 = _UNK_1507f9e48;
  uVar3 = ___xmm_00000000ffffffffc000000080000000;
  uVar7 = (this->Requests).NumElements;
  uVar9 = 0;
  pFVar8 = (this->Requests).Chunks.Array.AllocatorInstance.Data;
  if (uVar7 != 0) {
    uVar10 = (ulonglong)uVar7;
    do {
      lVar1 = *(longlong *)pFVar8 + uVar9 * 0x18;
      pFVar6 = FIoRequest::Status((FIoRequest *)(lVar1 + 0x10),&local_58);
      EVar2 = pFVar6->ErrorCode;
      FIoStatus::~FIoStatus(&local_58);
      if ((int)EVar2 < 2) {
        local_48 = uVar3;
        uStack_40 = uVar4;
        local_38 = 0x3fffffff;
        local_34 = 0x7fffffff;
        FIoRequest::UpdatePriority
                  ((FIoRequest *)(lVar1 + 0x10),
                   *(int *)((longlong)&local_48 + (ulonglong)(param_1 & AIOP_PRIORITY_MASK) * 4));
      }
      uVar7 = (int)uVar9 + 1;
      uVar9 = 0;
      pFVar5 = pFVar8 + 8;
      if (uVar7 < 8) {
        uVar9 = (ulonglong)uVar7;
        pFVar5 = pFVar8;
      }
      pFVar8 = pFVar5;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}

// Wait @ 141f50450

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FBulkDataBatchRequest::FBatchHandle::Wait(FBatchHandle *this,uint param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  FMonotonicTimePoint FVar5;
  
  if (*(int *)((longlong)&this->_padding_ + 4) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetStatus() != FBulkDataRequest::EStatus::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                       ,0x290,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  dVar2 = (double)param_1 * __real_3f50624dd2f1a9fc;
  if (dVar2 == 0.0) {
    return (bool)((byte)(this->DoneEvent).State & 1);
  }
  FVar5 = UE::FMonotonicTimePoint::Now();
                    /* WARNING: Load size is inaccurate */
  bVar3 = UE::FManualResetEvent::WaitUntil
                    (&this->DoneEvent,(FMonotonicTimePoint)(dVar2 + *FVar5.Time));
  return bVar3;
}


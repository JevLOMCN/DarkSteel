// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 19

// FStorageServerIoDispatcherBackend @ 148cb4950

FStorageServerIoDispatcherBackend * __thiscall
FStorageServerIoDispatcherBackend::FStorageServerIoDispatcherBackend
          (FStorageServerIoDispatcherBackend *this,FStorageServerConnection *param_1)

{
  FEvent *pFVar1;
  
  this->Connection = param_1;
  (this->BackendContext).Object = (FIoDispatcherBackendContext *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  (this->BackendContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IIoDispatcherBackend__;
  this->Thread = (FRunnableThread *)0x0;
  pFVar1 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->NewRequestEvent = pFVar1;
  (this->RequestQueue).Heap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestQueue).Heap.ArrayNum = 0;
  (this->RequestQueue).Heap.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->RequestQueue).CriticalSection,4000);
  this->FirstAvailableBatch = (FBatch *)0x0;
  this->SubmittedBatchesCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CompletedBatchesCritical,4000);
  this->FirstCompletedBatch = (FBatch *)0x0;
  pFVar1 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->BatchCompletedEvent = pFVar1;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CompletedRequestsCritical,4000);
  this->CompletedRequestsHead = (FIoRequestImpl *)0x0;
  this->CompletedRequestsTail = (FIoRequestImpl *)0x0;
  this->bStopRequested = (TAtomic<bool>)0x0;
  return this;
}

// ~FStorageServerIoDispatcherBackend @ 148cb6800

void __thiscall
FStorageServerIoDispatcherBackend::~FStorageServerIoDispatcherBackend
          (FStorageServerIoDispatcherBackend *this)

{
  FRunnableThread *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__IIoDispatcherBackend__;
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    this->Thread = (FRunnableThread *)0x0;
  }
  FGenericPlatformProcess::ReturnSynchEventToPool(this->NewRequestEvent);
  FGenericPlatformProcess::ReturnSynchEventToPool(this->BatchCompletedEvent);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CompletedRequestsCritical);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CompletedBatchesCritical);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->RequestQueue).CriticalSection);
  pFVar2 = (this->RequestQueue).Heap.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackendContext).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// CancelIoRequest @ 148cbd870

void __thiscall
FStorageServerIoDispatcherBackend::CancelIoRequest
          (FStorageServerIoDispatcherBackend *this,FIoRequestImpl *param_1)

{
  return;
}

// DoesChunkExist @ 148cc22c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FStorageServerIoDispatcherBackend::DoesChunkExist
          (FStorageServerIoDispatcherBackend *this,FIoChunkId *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  long64 lVar4;
  FIoStatus *this_00;
  bool bVar5;
  undefined1 auStack_58 [32];
  FIoStatus local_38;
  FIoStatus local_28;
  long64 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId197,"StorageServerIoDispatcherGetSizeForChunk",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerIoDispatcherBackend.cpp"
               ,0xc5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId197);
  }
  lVar4 = FStorageServerConnection::ChunkSizeRequest
                    ((FStorageServerConnection *)this->_padding_,param_1);
  if (lVar4 < 0) {
    this_00 = FIoStatus::FIoStatus(&local_38,NotFound);
    FIoStatus::FIoStatus(&local_28);
    if ((this_00->ErrorCode == Ok) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InStatus.IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                           ,0x102,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FIoStatus::operator=(&local_28,this_00);
    FIoStatus::~FIoStatus(this_00);
  }
  else {
    FIoStatus::FIoStatus(&local_28);
    FIoStatus::operator=(&local_28,&FIoStatus::Ok);
    local_18 = lVar4;
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FIoStatus::operator=(&local_28,Unknown);
  FIoStatus::~FIoStatus(&local_28);
  return local_28.ErrorCode == Ok;
}

// GetCompletedIoRequests @ 148cc6d50

FIoRequestImpl * __thiscall
FStorageServerIoDispatcherBackend::GetCompletedIoRequests(FStorageServerIoDispatcherBackend *this)

{
  FEvent **lpCriticalSection;
  FIoRequestImpl *pFVar1;
  
  lpCriticalSection = &this->BatchCompletedEvent;
  if (lpCriticalSection != (FEvent **)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (this->CompletedRequestsCritical).CriticalSection.Opaque3[2];
    this->CompletedRequestsHead = (FIoRequestImpl *)0x0;
    (this->CompletedRequestsCritical).CriticalSection.Opaque3[2] = (void *)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return pFVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetName @ 148cc7870

wchar_t * __thiscall
FStorageServerIoDispatcherBackend::GetName(FStorageServerIoDispatcherBackend *this)

{
  return L"StorageServer";
}

// GetSizeForChunk @ 148cc7fb0

TIoStatusOr<unsigned___int64> * __thiscall
FStorageServerIoDispatcherBackend::GetSizeForChunk
          (FStorageServerIoDispatcherBackend *this,
          TIoStatusOr<unsigned___int64> *__return_storage_ptr__,FIoChunkId *param_1)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  FIoStatus *this_00;
  TIoStatusOr<unsigned___int64> *pTVar4;
  bool bVar5;
  FIoStatus local_18;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId197,"StorageServerIoDispatcherGetSizeForChunk",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerIoDispatcherBackend.cpp"
               ,0xc5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId197);
  }
  lVar3 = FStorageServerConnection::ChunkSizeRequest
                    ((FStorageServerConnection *)this->_padding_,param_1);
  if (lVar3 < 0) {
    this_00 = FIoStatus::FIoStatus(&local_18,NotFound);
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    if ((this_00->ErrorCode == Ok) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InStatus.IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                           ,0x102,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TIoStatusOr<unsigned___int64> *)(*pcVar1)();
      return pTVar4;
    }
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,this_00);
    FIoStatus::~FIoStatus(this_00);
  }
  else {
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    *(long64 *)(__return_storage_ptr__->Value).Pad = lVar3;
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// Init @ 148cc9b20

bool __thiscall FStorageServerIoDispatcherBackend::Init(FStorageServerIoDispatcherBackend *this)

{
  return true;
}

// Initialize @ 148cc9dc0

void __thiscall
FStorageServerIoDispatcherBackend::Initialize
          (FStorageServerIoDispatcherBackend *this,
          TSharedRef<FIoDispatcherBackendContext_const_,1> *param_1)

{
  FRunnableThread *pFVar1;
  FStorageServerConnection *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = (FStorageServerConnection *)param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->Connection != &local_18) {
    this->Connection = local_18;
    local_18 = (FStorageServerConnection *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->BackendContext,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  pFVar1 = FRunnableThread::Create
                     ((FRunnable *)&this[-1].bStopRequested,L"IoService",0,TPri_AboveNormal,
                      0xffffffffffffffff,None);
  (this->BackendContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnBatchCompleted @ 148cd0e90

void __thiscall
FStorageServerIoDispatcherBackend::OnBatchCompleted
          (FStorageServerIoDispatcherBackend *this,FBatch *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  FIoDispatcherBackendContext *this_00;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  pFVar1 = &this->CompletedRequestsCritical;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    if (this->CompletedRequestsTail == (FIoRequestImpl *)0x0) {
      this->CompletedRequestsHead = param_1->RequestsHead;
    }
    else {
      this->CompletedRequestsTail->NextRequest = param_1->RequestsHead;
    }
    this->CompletedRequestsTail = param_1->RequestsTail;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    if ((this->BackendContext).Object == (FIoDispatcherBackendContext *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = (this->BackendContext).Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
    if (*(int *)&(this_00->WakeUpDispatcherThreadDelegate).field_0x10 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)&(this_00->WakeUpDispatcherThreadDelegate).field_0x8;
    }
    (**(code **)(*plVar4 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    pFVar1 = &this->CompletedBatchesCritical;
    param_1->RequestsTail = (FIoRequestImpl *)0x0;
    param_1->RequestsHead = (FIoRequestImpl *)0x0;
    param_1->RequestsCount = 0;
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      param_1->Next = this->FirstCompletedBatch;
      this->FirstCompletedBatch = param_1;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
                    /* WARNING: Could not recover jumptable at 0x000148cd0fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->BatchCompletedEvent->_padding_ + 0x10))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OpenMapped @ 148cd1530

TIoStatusOr<FIoMappedRegion> * __thiscall
FStorageServerIoDispatcherBackend::OpenMapped
          (FStorageServerIoDispatcherBackend *this,
          TIoStatusOr<FIoMappedRegion> *__return_storage_ptr__,FIoChunkId *param_1,
          FIoReadOptions *param_2)

{
  code *pcVar1;
  bool bVar2;
  FIoStatus *this_00;
  TIoStatusOr<FIoMappedRegion> *pTVar3;
  FIoStatus local_18;
  
  this_00 = FIoStatus::FIoStatus(&local_18,NotFound);
  FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
  if (this_00->ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<FIoMappedRegion> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&__return_storage_ptr__->StatusValue,this_00);
  FIoStatus::~FIoStatus(this_00);
  return __return_storage_ptr__;
}

// Resolve @ 148cdb300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148cdb6c9) */

bool __thiscall
FStorageServerIoDispatcherBackend::Resolve
          (FStorageServerIoDispatcherBackend *this,FIoRequestImpl *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  int *piVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  longlong lVar6;
  void *pvVar7;
  FStorageServerConnection *this_00;
  code *pcVar8;
  EIoReadOptionsFlags EVar9;
  FStorageServerIoDispatcherBackend *pFVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  FIoBuffer *pFVar14;
  TRefCountPtr<FIoBuffer::BufCore> *pTVar15;
  longlong lVar16;
  IIoDispatcherBackend *pIVar17;
  TRefCountPtr<FIoBuffer::BufCore> this_01;
  TRefCountPtr<FIoBuffer::BufCore> TVar18;
  TRefCountPtr<FIoBuffer::BufCore> this_02;
  bool bVar19;
  undefined1 auStackY_108 [32];
  uchar local_b0 [8];
  FIoRequestImpl *local_a8;
  FStorageServerIoDispatcherBackend *local_a0;
  TRefCountPtr<FIoBuffer::BufCore> local_98;
  char local_90;
  TRefCountPtr<FIoBuffer::BufCore> local_88;
  char local_80;
  FIoBuffer local_78;
  TOptional<FIoBuffer> local_70;
  TIoStatusOr<FIoBuffer> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_b0 = (uchar  [8])((ulonglong)local_b0 & 0xffffffff00000000);
  local_a0 = this;
  if ((param_1 == (FIoRequestImpl *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Request",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerIoDispatcherBackend.cpp"
                          ,0x8f,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  if (((this->BackendContext).Object == (FIoDispatcherBackendContext *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  if (((this->BackendContext).Object)->bIsMultiThreaded == false) {
    pIVar17 = (IIoDispatcherBackend *)&this->_padding_;
    if (this == (FStorageServerIoDispatcherBackend *)0x0) {
      pIVar17 = (IIoDispatcherBackend *)0x0;
    }
    FIoStoreTrace::RequestStarted(param_1,pIVar17);
    bVar11 = -1 < CpuChannel->Enabled;
    if (bVar11) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId152,"StorageServerIoDispatcherReadChunk",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerIoDispatcherBackend.cpp"
                 ,0x98);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId152);
    }
    this_01.Reference = local_88.Reference;
    pvVar7 = (param_1->Options).TargetVa;
    bVar19 = pvVar7 == (void *)0x0;
    if (bVar19) {
      pTVar15 = &local_88;
      local_80 = '\0';
      TVar18.Reference = local_88.Reference;
    }
    else {
      pFVar14 = FIoBuffer::FIoBuffer(&local_78,Wrap,pvVar7,(param_1->Options).RequestedSize);
      local_90 = '\x01';
      local_98.Reference = (pFVar14->CorePtr).Reference;
      (pFVar14->CorePtr).Reference = (BufCore *)0x0;
      pTVar15 = &local_98;
      TVar18.Reference = local_98.Reference;
    }
    cVar3 = *(char *)&pTVar15[1].Reference;
    this_02.Reference = (BufCore *)local_a0;
    if (cVar3 != '\0') {
      pTVar15->Reference = (BufCore *)0x0;
      this_01.Reference = local_88.Reference;
      this_02.Reference = TVar18.Reference;
    }
    TVar18.Reference = local_98.Reference;
    if (((bVar19) && (local_80 != '\0')) &&
       ((FStorageServerIoDispatcherBackend *)this_01.Reference !=
        (FStorageServerIoDispatcherBackend *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount(this_01.Reference);
      LOCK();
      puVar1 = (undefined1 *)
               ((longlong)&((FStorageServerIoDispatcherBackend *)this_01.Reference)->_padding_ + 4);
      iVar13 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        FIoBuffer::BufCore::~BufCore(this_01.Reference);
        ::operator_delete(this_01.Reference,0x20);
      }
    }
    if (((!bVar19) && (local_90 != '\0')) &&
       ((FStorageServerIoDispatcherBackend *)TVar18.Reference !=
        (FStorageServerIoDispatcherBackend *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount(TVar18.Reference);
      LOCK();
      piVar2 = &(TVar18.Reference)->NumRefs;
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        FIoBuffer::BufCore::~BufCore(TVar18.Reference);
        ::operator_delete(TVar18.Reference,0x20);
      }
    }
    if ((!bVar19) && (local_78.CorePtr.Reference != (BufCore *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_78.CorePtr.Reference);
      LOCK();
      piVar2 = (int *)((longlong)local_78.CorePtr.Reference + 0xc);
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_78.CorePtr.Reference);
        ::operator_delete((void *)local_78.CorePtr.Reference,0x20);
      }
    }
    pFVar10 = local_a0;
    EVar9 = (param_1->Options).Flags;
    this_00 = local_a0->Connection;
    if ((cVar3 != '\0') &&
       (local_70.TypedValue.CorePtr.Reference =
             (TRefCountPtr<FIoBuffer::BufCore>)(TRefCountPtr<FIoBuffer::BufCore>)this_02.Reference,
       (FStorageServerIoDispatcherBackend *)this_02.Reference !=
       (FStorageServerIoDispatcherBackend *)0x0)) {
      LOCK();
      (this_02.Reference)->NumRefs = (this_02.Reference)->NumRefs + 1;
      UNLOCK();
    }
    local_70.bIsSet = (bool)cVar3;
    FStorageServerConnection::ReadChunkRequest
              (this_00,&local_60,&param_1->ChunkId,(param_1->Options).RequestedOffset,
               (param_1->Options).RequestedSize,&local_70,(bool)((char)EVar9 & HardwareTargetBuffer)
              );
    if (local_60.StatusValue.ErrorCode == Ok) {
      local_b0[0] = local_60.Value.Pad[0];
      local_b0[1] = local_60.Value.Pad[1];
      local_b0[2] = local_60.Value.Pad[2];
      local_b0[3] = local_60.Value.Pad[3];
      local_b0[4] = local_60.Value.Pad[4];
      local_b0[5] = local_60.Value.Pad[5];
      local_b0[6] = local_60.Value.Pad[6];
      local_b0[7] = local_60.Value.Pad[7];
      if (local_60.Value.Pad != (uchar  [8])0x0) {
        LOCK();
        *(int *)((longlong)local_60.Value.Pad + 0xcU) =
             *(int *)((longlong)local_60.Value.Pad + 0xcU) + 1;
        UNLOCK();
      }
      FIoRequestImpl::SetResult(param_1,(FIoBuffer)local_b0);
      if (local_60.StatusValue.ErrorCode != Ok) {
        StatusOrCrash(&local_60.StatusValue);
      }
      FIoStoreTrace::RequestCompleted
                (param_1,(ulonglong)
                         CONCAT14(*(uchar *)((longlong)local_60.Value.Pad + 0x18),
                                  *(uint *)((longlong)local_60.Value.Pad + 8)));
    }
    else {
      if (param_1->LastBackendError != Cancelled) {
        param_1->LastBackendError = ReadError;
      }
      FIoStoreTrace::RequestFailed(param_1);
    }
    if (pFVar10->CompletedRequestsTail == (FIoRequestImpl *)0x0) {
      pFVar10->CompletedRequestsHead = param_1;
    }
    else {
      pFVar10->CompletedRequestsTail->NextRequest = param_1;
    }
    pFVar10->CompletedRequestsTail = param_1;
    FIoStatus::operator=(&local_60.StatusValue,Unknown);
    if ((local_60.StatusValue.ErrorCode == Ok) && (local_60.Value.Pad != (uchar  [8])0x0)) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_60.Value.Pad);
      LOCK();
      piVar2 = (int *)((longlong)local_60.Value.Pad + 0xc);
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_60.Value.Pad);
        ::operator_delete((void *)local_60.Value.Pad,0x20);
      }
    }
    FIoStatus::~FIoStatus(&local_60.StatusValue);
    if ((cVar3 != '\0') &&
       ((FStorageServerIoDispatcherBackend *)this_02.Reference !=
        (FStorageServerIoDispatcherBackend *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount(this_02.Reference);
      LOCK();
      piVar2 = &(this_02.Reference)->NumRefs;
      iVar13 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        FIoBuffer::BufCore::~BufCore(this_02.Reference);
        ::operator_delete(this_02.Reference,0x20);
      }
    }
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    lpCriticalSection = &(this->RequestQueue).CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (this->RequestQueue).Heap.AllocatorInstance.Data;
    local_a8 = param_1;
    if (((pFVar4 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 <
         pFVar4 + (longlong)(this->RequestQueue).Heap.ArrayMax * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    iVar13 = (this->RequestQueue).Heap.ArrayNum;
    piVar2 = &(this->RequestQueue).Heap.ArrayMax;
    if (iVar13 == *piVar2) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&this->RequestQueue,piVar2);
    }
    (this->RequestQueue).Heap.ArrayNum = iVar13 + 1;
    *(FIoRequestImpl **)((this->RequestQueue).Heap.AllocatorInstance.Data + (longlong)iVar13 * 8) =
         local_a8;
    pFVar4 = (this->RequestQueue).Heap.AllocatorInstance.Data;
    iVar13 = (this->RequestQueue).Heap.ArrayNum + -1;
    while (0 < iVar13) {
      lVar16 = (longlong)iVar13;
      iVar13 = (iVar13 + -1) / 2;
      lVar5 = *(longlong *)(pFVar4 + (longlong)iVar13 * 8);
      lVar6 = *(longlong *)(pFVar4 + lVar16 * 8);
      if (*(int *)(lVar6 + 0x68) == *(int *)(lVar5 + 0x68)) {
        bVar11 = *(ulonglong *)(lVar6 + 0x30) < *(ulonglong *)(lVar5 + 0x30);
      }
      else {
        bVar11 = *(int *)(lVar5 + 0x68) < *(int *)(lVar6 + 0x68);
      }
      if (!bVar11) break;
      *(longlong *)(pFVar4 + lVar16 * 8) = lVar5;
      *(longlong *)(pFVar4 + (longlong)iVar13 * 8) = lVar6;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)(this->NewRequestEvent->_padding_ + 0x10))();
  }
  return true;
}

// ResolveIoRequests @ 148cdb830

void __thiscall
FStorageServerIoDispatcherBackend::ResolveIoRequests
          (FStorageServerIoDispatcherBackend *this,
          TIntrusiveList<UE::Private::FIoRequestListTraits> *param_1,
          TIntrusiveList<UE::Private::FIoRequestListTraits> *param_2)

{
  FIoRequestImpl *pFVar1;
  FIoRequestImpl *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  do {
    while( true ) {
      do {
        pFVar1 = param_1->Head;
        if (pFVar1 == (FIoRequestImpl *)0x0) {
          return;
        }
        pFVar2 = pFVar1->NextRequest;
        param_1->Head = pFVar2;
        if (pFVar2 == (FIoRequestImpl *)0x0) {
          param_1->Tail = (FIoRequestImpl *)0x0;
        }
        pFVar1->NextRequest = (FIoRequestImpl *)0x0;
        bVar4 = Resolve((FStorageServerIoDispatcherBackend *)&this[-1].bStopRequested,pFVar1);
      } while (bVar4);
      if (pFVar1->NextRequest != (FIoRequestImpl *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                           ,0x72,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (param_2->Tail != (FIoRequestImpl *)0x0) break;
      if (param_2->Head != (FIoRequestImpl *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Head == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                           ,0x7c,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      param_2->Tail = pFVar1;
      param_2->Head = pFVar1;
    }
    if (param_2->Head == (FIoRequestImpl *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Head != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                         ,0x76,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    param_2->Tail->NextRequest = pFVar1;
    param_2->Tail = pFVar1;
  } while( true );
}

// Run @ 148cdc130

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FStorageServerIoDispatcherBackend::Run(FStorageServerIoDispatcherBackend *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  int iVar2;
  FIoRequestImpl *pFVar3;
  bool bVar4;
  uint uVar5;
  FBatch *pFVar6;
  FBatch *pFVar7;
  ulonglong uVar8;
  FBatch *pFVar9;
  FBatch *pFVar10;
  FLLMScope local_res8 [2];
  FIoRequestImpl *local_res10;
  FMemScope local_res18 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name64,L"FileSystem/StorageServer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name64,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name64,true);
  iVar2 = GStorageServerIoDispatcherMaxActiveBatchCount;
  pFVar10 = (FBatch *)0x0;
  pFVar9 = pFVar10;
  if (0 < GStorageServerIoDispatcherMaxActiveBatchCount) {
    uVar8 = (ulonglong)(uint)GStorageServerIoDispatcherMaxActiveBatchCount;
    do {
      pFVar6 = ::operator_new(0x38);
      pFVar7 = pFVar10;
      if (pFVar6 != (FBatch *)0x0) {
        pFVar6->_padding_ = 0;
        pFVar6->_padding_ = (longlong)&___7FBatch_FStorageServerIoDispatcherBackend__6B_;
        pFVar6->Owner = this;
        pFVar6->Next = (FBatch *)0x0;
        pFVar6->RequestsHead = (FIoRequestImpl *)0x0;
        pFVar6->RequestsTail = (FIoRequestImpl *)0x0;
        pFVar6->RequestsCount = 0;
        pFVar7 = pFVar6;
      }
      pFVar7->Next = this->FirstAvailableBatch;
      this->FirstAvailableBatch = pFVar7;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  while (this->bStopRequested == (TAtomic<bool>)0x0) {
    lpCriticalSection = &(this->RequestQueue).CriticalSection;
    while( true ) {
      if (pFVar9 == (FBatch *)0x0) {
        pFVar9 = this->FirstAvailableBatch;
        if (pFVar9 == (FBatch *)0x0) {
          WaitForBatchToComplete(this,0xffffffff);
          pFVar9 = this->FirstAvailableBatch;
          if ((pFVar9 == (FBatch *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentBatch",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerIoDispatcherBackend.cpp"
                                 ,0x55,L""), bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return uVar5;
          }
        }
        this->FirstAvailableBatch = pFVar9->Next;
        pFVar9->Next = (FBatch *)0x0;
      }
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if ((this->RequestQueue).Heap.ArrayNum == 0) break;
      TArray<FIoRequestImpl_*,TSizedDefaultAllocator<32>_>::
      HeapPop<bool___cdecl(FIoRequestImpl_const_&,FIoRequestImpl_const_&)>
                (&(this->RequestQueue).Heap,&local_res10,FRequestQueue::QueueSortFunc,No);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pFVar3 = local_res10;
      if (local_res10 == (FIoRequestImpl *)0x0) goto LAB_148cdc33f;
      if ((local_res10->NextRequest != (FIoRequestImpl *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Request->NextRequest",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerIoDispatcherBackend.cpp"
                             ,0x61,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      if (pFVar9->RequestsTail == (FIoRequestImpl *)0x0) {
        pFVar9->RequestsHead = pFVar3;
      }
      else {
        pFVar9->RequestsTail->NextRequest = pFVar3;
      }
      pFVar9->RequestsCount = pFVar9->RequestsCount + 1;
      pFVar9->RequestsTail = pFVar3;
      if (pFVar9->RequestsCount == (longlong)GStorageServerIoDispatcherBatchSize) {
        (**(code **)((longlong)*GIOThreadPool + 0x18))(GIOThreadPool,pFVar9);
        this->SubmittedBatchesCount = this->SubmittedBatchesCount + 1;
        pFVar9 = pFVar10;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
LAB_148cdc33f:
    if ((pFVar9 != (FBatch *)0x0) && (pFVar9->RequestsCount != 0)) {
      (**(code **)((longlong)*GIOThreadPool + 0x18))(GIOThreadPool,pFVar9,3);
      this->SubmittedBatchesCount = this->SubmittedBatchesCount + 1;
      pFVar9 = pFVar10;
    }
    (**(code **)(this->NewRequestEvent->_padding_ + 0x20))(this->NewRequestEvent,0xffffffff,0);
  }
  if (0 < iVar2) {
    do {
      if (this->FirstAvailableBatch == (FBatch *)0x0) {
        bVar4 = WaitForBatchToComplete(this,10000);
        if (!bVar4) {
          if (2 < (byte)LogIoDispatcher._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
          }
          break;
        }
        if ((this->FirstAvailableBatch == (FBatch *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("FirstAvailableBatch",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerIoDispatcherBackend.cpp"
                               ,0x85,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return uVar5;
        }
      }
      pFVar9 = this->FirstAvailableBatch;
      this->FirstAvailableBatch = pFVar9->Next;
      if (pFVar9 != (FBatch *)0x0) {
        (**(code **)(pFVar9->_padding_ + 0x28))(pFVar9,1);
      }
      uVar5 = (int)pFVar10 + 1;
      pFVar10 = (FBatch *)(ulonglong)uVar5;
    } while ((int)uVar5 < iVar2);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return 0;
}

// Shutdown @ 148cdf9d0

void __thiscall FStorageServerIoDispatcherBackend::Shutdown(FStorageServerIoDispatcherBackend *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (this->BackendContext).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    (**(code **)(pTVar1->_padding_ + 0x30))(pTVar1,1);
    (this->BackendContext).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return;
}

// Stop @ 148ce0860

void __thiscall FStorageServerIoDispatcherBackend::Stop(FStorageServerIoDispatcherBackend *this)

{
  LOCK();
  this->bStopRequested = (TAtomic<bool>)0x1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000148ce0872. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->NewRequestEvent->_padding_ + 0x10))();
  return;
}

// SubmitBatch @ 148ce0be0

void __thiscall
FStorageServerIoDispatcherBackend::SubmitBatch
          (FStorageServerIoDispatcherBackend *this,FBatch *param_1)

{
  (**(code **)((longlong)*GIOThreadPool + 0x18))(GIOThreadPool,param_1,3);
  this->SubmittedBatchesCount = this->SubmittedBatchesCount + 1;
  return;
}

// UpdatePriorityForIoRequest @ 148ce3380

void __thiscall
FStorageServerIoDispatcherBackend::UpdatePriorityForIoRequest
          (FStorageServerIoDispatcherBackend *this,FIoRequestImpl *param_1)

{
  return;
}

// WaitForBatchToComplete @ 148ce38b0

bool __thiscall
FStorageServerIoDispatcherBackend::WaitForBatchToComplete
          (FStorageServerIoDispatcherBackend *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FBatch *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  FBatch *pFVar6;
  
  while( true ) {
    cVar3 = (**(code **)(this->BatchCompletedEvent->_padding_ + 0x20))
                      (this->BatchCompletedEvent,param_1,0);
    if (cVar3 == '\0') {
      return false;
    }
    lpCriticalSection = &this->CompletedBatchesCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) break;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar6 = this->FirstCompletedBatch;
    this->FirstCompletedBatch = (FBatch *)0x0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (pFVar6 != (FBatch *)0x0) {
      while ((0 < this->SubmittedBatchesCount ||
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("SubmittedBatchesCount > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerIoDispatcherBackend.cpp"
                                 ,0xf6,L""), !bVar4))) {
        this->SubmittedBatchesCount = this->SubmittedBatchesCount + -1;
        pFVar1 = pFVar6->Next;
        pFVar6->Next = this->FirstAvailableBatch;
        this->FirstAvailableBatch = pFVar6;
        pFVar6 = pFVar1;
        if (pFVar1 == (FBatch *)0x0) {
          return true;
        }
      }
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}


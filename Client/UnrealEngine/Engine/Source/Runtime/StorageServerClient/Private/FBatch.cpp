// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 3

// FBatch @ 148cb2e40

FBatch * __thiscall
FStorageServerIoDispatcherBackend::FBatch::FBatch
          (FBatch *this,FStorageServerIoDispatcherBackend *param_1)

{
  this->Owner = param_1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FBatch_FStorageServerIoDispatcherBackend__6B_;
  this->Next = (FBatch *)0x0;
  this->RequestsHead = (FIoRequestImpl *)0x0;
  this->RequestsTail = (FIoRequestImpl *)0x0;
  this->RequestsCount = 0;
  return this;
}

// Abandon @ 148cba600

void __thiscall FStorageServerIoDispatcherBackend::FBatch::Abandon(FBatch *this)

{
  return;
}

// DoThreadedWork @ 148cc1c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148cc1f79) */

void __thiscall FStorageServerIoDispatcherBackend::FBatch::DoThreadedWork(FBatch *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *pFVar2;
  int iVar3;
  bool bVar4;
  EIoReadOptionsFlags EVar5;
  FIoRequestImpl *pFVar6;
  void *pvVar7;
  FStorageServerConnection *this_00;
  BufCore *this_01;
  FStorageServerIoDispatcherBackend *pFVar8;
  FIoDispatcherBackendContext *this_02;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  FIoBuffer this_03;
  EIoErrorCode EVar12;
  TTypeCompatibleBytes<FIoBuffer> TVar13;
  bool bVar14;
  FMemScope *pFVar15;
  FMemScope FVar16;
  longlong *plVar17;
  IIoDispatcherBackend *pIVar18;
  FMemScope this_04;
  FMemScope this_05;
  bool bVar19;
  bool bVar20;
  undefined1 auStackY_108 [32];
  undefined4 local_c0 [2];
  FBatch *local_b8;
  FIoRequestImpl *local_b0;
  FMemScope local_a8;
  FMemScope local_a0;
  char local_98;
  FMemScope local_90;
  char local_88;
  FIoBuffer local_80;
  TOptional<FIoBuffer> local_78;
  FReadAccessScope local_68;
  TIoStatusOr<FIoBuffer> local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  bVar11 = false;
  bVar10 = false;
  bVar14 = false;
  local_c0[0] = 0;
  local_b8 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name292,L"FileSystem/StorageServer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope((FLLMScope *)local_c0,LLMScope_Name292,false,None,Default,true);
  FMemScope::FMemScope(&local_a8,&LLMScope_Name292,true);
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId293,"StorageServerIoDispatcherProcessBatch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerIoDispatcherBackend.cpp"
               ,0x125);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId293);
  }
  pFVar6 = this->RequestsHead;
  this_05 = local_a8;
  this_04 = local_a0;
  while (pFVar6 != (FIoRequestImpl *)0x0) {
    local_b0 = pFVar6->NextRequest;
    pIVar18 = (IIoDispatcherBackend *)&this->Owner->_padding_;
    if (this->Owner == (FStorageServerIoDispatcherBackend *)0x0) {
      pIVar18 = (IIoDispatcherBackend *)0x0;
    }
    FIoStoreTrace::RequestStarted(pFVar6,pIVar18);
    bVar20 = -1 < CpuChannel->Enabled;
    if (bVar20) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId348,"StorageServerIoDispatcherReadChunk",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerIoDispatcherBackend.cpp"
                 ,0x15c);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId348);
    }
    pvVar7 = (pFVar6->Options).TargetVa;
    if (pvVar7 == (void *)0x0) {
      pFVar15 = &local_90;
      bVar14 = true;
      local_88 = '\0';
      FVar16 = local_90;
    }
    else {
      bVar11 = true;
      bVar10 = true;
      pFVar15 = (FMemScope *)
                FIoBuffer::FIoBuffer(&local_80,Wrap,pvVar7,(pFVar6->Options).RequestedSize);
      local_98 = '\x01';
      this_04 = *pFVar15;
      pFVar15->Inner = false;
      *(undefined3 *)&pFVar15->field_0x1 = 0;
      pFVar15->PrevTag = 0;
      pFVar15 = &local_a0;
      FVar16 = this_04;
      local_a0 = this_04;
    }
    bVar4 = pFVar15[1].Inner.bActive;
    if (bVar4 != false) {
      pFVar15->Inner = false;
      *(undefined3 *)&pFVar15->field_0x1 = 0;
      pFVar15->PrevTag = 0;
      this_04 = local_a0;
      this_05 = FVar16;
    }
    FVar16 = local_90;
    if (((bVar14) && (bVar14 = false, local_88 != '\0')) && (local_90 != (FMemScope)0x0)) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_90);
      LOCK();
      piVar1 = (int *)((longlong)FVar16 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)FVar16);
        ::operator_delete((void *)FVar16,0x20);
      }
    }
    if (((bVar10) && (bVar10 = false, local_98 != '\0')) && (this_04 != (FMemScope)0x0)) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)this_04);
      LOCK();
      piVar1 = (int *)((longlong)this_04 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)this_04);
        ::operator_delete((void *)this_04,0x20);
      }
    }
    this_03.CorePtr.Reference = local_80.CorePtr.Reference;
    if ((bVar11) && (bVar11 = false, local_80.CorePtr.Reference != (BufCore *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_80.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)this_03.CorePtr.Reference + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)this_03.CorePtr.Reference);
        ::operator_delete((void *)this_03.CorePtr.Reference,0x20);
      }
    }
    EVar5 = (pFVar6->Options).Flags;
    this_00 = local_b8->Owner->Connection;
    if ((bVar4 != false) &&
       (local_78.TypedValue.CorePtr.Reference =
             (TRefCountPtr<FIoBuffer::BufCore>)(TRefCountPtr<FIoBuffer::BufCore>)this_05,
       this_05 != (FMemScope)0x0)) {
      LOCK();
      *(int *)((longlong)this_05 + 0xc) = *(int *)((longlong)this_05 + 0xc) + 1;
      UNLOCK();
    }
    local_78.bIsSet = bVar4;
    FStorageServerConnection::ReadChunkRequest
              (this_00,&local_50,&pFVar6->ChunkId,(pFVar6->Options).RequestedOffset,
               (pFVar6->Options).RequestedSize,&local_78,(bool)((byte)EVar5 & 1));
    TVar13.Pad = local_50.Value.Pad;
    if (local_50.StatusValue.ErrorCode == Ok) {
      if (local_50.Value.Pad != (uchar  [8])0x0) {
        LOCK();
        *(int *)((longlong)local_50.Value.Pad + 0xc) =
             *(int *)((longlong)local_50.Value.Pad + 0xc) + 1;
        UNLOCK();
      }
      if (((pFVar6->Buffer).bIsSet != false) &&
         (this_01 = (pFVar6->Buffer).TypedValue.CorePtr.Reference, this_01 != (BufCore *)0x0)) {
        FIoBuffer::BufCore::CheckRefCount(this_01);
        LOCK();
        piVar1 = &this_01->NumRefs;
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FIoBuffer::BufCore::~BufCore(this_01);
          ::operator_delete(this_01,0x20);
        }
      }
      (pFVar6->Buffer).TypedValue.CorePtr.Reference = (BufCore *)TVar13.Pad;
      if (TVar13.Pad == (uchar  [8])0x0) {
        (pFVar6->Buffer).bIsSet = true;
      }
      else {
        LOCK();
        *(int *)((longlong)TVar13.Pad + 0xc) = *(int *)((longlong)TVar13.Pad + 0xc) + 1;
        UNLOCK();
        (pFVar6->Buffer).bIsSet = true;
        FIoBuffer::BufCore::CheckRefCount((BufCore *)TVar13.Pad);
        LOCK();
        piVar1 = (int *)((longlong)TVar13.Pad + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)TVar13.Pad);
          ::operator_delete((void *)TVar13.Pad,0x20);
        }
      }
      if (local_50.StatusValue.ErrorCode != Ok) {
        StatusOrCrash(&local_50.StatusValue);
      }
      FIoStoreTrace::RequestCompleted
                (pFVar6,(ulonglong)
                        CONCAT14(*(uchar *)((longlong)local_50.Value.Pad + 0x18),
                                 *(uint *)((longlong)local_50.Value.Pad + 8)));
    }
    else {
      if (pFVar6->LastBackendError != Cancelled) {
        pFVar6->LastBackendError = ReadError;
      }
      FIoStoreTrace::RequestFailed(pFVar6);
    }
    EVar12 = local_50.StatusValue.ErrorCode;
    pFVar6 = local_b0;
    FIoStatus::operator=(&local_50.StatusValue,Unknown);
    TVar13.Pad = local_50.Value.Pad;
    if ((EVar12 == Ok) && (local_50.Value.Pad != (uchar  [8])0x0)) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_50.Value.Pad);
      LOCK();
      piVar1 = (int *)((longlong)TVar13.Pad + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)TVar13.Pad);
        ::operator_delete((void *)TVar13.Pad,0x20);
      }
    }
    FIoStatus::~FIoStatus(&local_50.StatusValue);
    if ((bVar4 != false) && (this_05 != (FMemScope)0x0)) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)this_05);
      LOCK();
      piVar1 = (int *)((longlong)this_05 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)this_05);
        ::operator_delete((void *)this_05,0x20);
      }
    }
    this = local_b8;
    if (bVar20) {
      FCpuProfilerTrace::OutputEndEvent();
      this = local_b8;
    }
  }
  pFVar8 = this->Owner;
  pFVar2 = &pFVar8->CompletedRequestsCritical;
  if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
    if (pFVar8->CompletedRequestsTail == (FIoRequestImpl *)0x0) {
      pFVar8->CompletedRequestsHead = this->RequestsHead;
    }
    else {
      pFVar8->CompletedRequestsTail->NextRequest = this->RequestsHead;
    }
    pFVar8->CompletedRequestsTail = this->RequestsTail;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
    if (((pFVar8->BackendContext).Object == (FIoDispatcherBackendContext *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    this_02 = (pFVar8->BackendContext).Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,&local_68);
    if (*(int *)&(this_02->WakeUpDispatcherThreadDelegate).field_0x10 == 0) {
      plVar17 = (longlong *)0x0;
    }
    else {
      plVar17 = *(longlong **)&(this_02->WakeUpDispatcherThreadDelegate).field_0x8;
    }
    (**(code **)(*plVar17 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    this->RequestsTail = (FIoRequestImpl *)0x0;
    this->RequestsHead = (FIoRequestImpl *)0x0;
    this->RequestsCount = 0;
    pFVar2 = &pFVar8->CompletedBatchesCritical;
    if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
      this->Next = pFVar8->FirstCompletedBatch;
      pFVar8->FirstCompletedBatch = this;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
      (**(code **)(pFVar8->BatchCompletedEvent->_padding_ + 0x10))();
      if (bVar19) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FMemScope::~FMemScope(&local_a8);
      FLLMScope::~FLLMScope((FLLMScope *)local_c0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}


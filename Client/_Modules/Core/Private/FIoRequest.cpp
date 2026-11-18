// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// FIoRequest @ 1417a1c80

FIoRequest * __thiscall FIoRequest::FIoRequest(FIoRequest *this,FIoRequestImpl *param_1)

{
  this->Impl = param_1;
  if (param_1 != (FIoRequestImpl *)0x0) {
    LOCK();
    param_1->RefCount = (TAtomic<unsigned_int>)((int)param_1->RefCount + 1);
    UNLOCK();
  }
  return this;
}

// FIoRequest @ 1417a1ca0

FIoRequest * __thiscall FIoRequest::FIoRequest(FIoRequest *this,FIoRequest *param_1)

{
  this->Impl = (FIoRequestImpl *)0x0;
  this->Impl = param_1->Impl;
  param_1->Impl = (FIoRequestImpl *)0x0;
  return this;
}

// FIoRequest @ 1417a1cc0

FIoRequest * __thiscall FIoRequest::FIoRequest(FIoRequest *this,FIoRequest *param_1)

{
  FIoRequestImpl *pFVar1;
  
  this->Impl = (FIoRequestImpl *)0x0;
  pFVar1 = param_1->Impl;
  if (pFVar1 != (FIoRequestImpl *)0x0) {
    this->Impl = pFVar1;
    LOCK();
    pFVar1->RefCount = (TAtomic<unsigned_int>)((int)pFVar1->RefCount + 1);
    UNLOCK();
  }
  return this;
}

// ~FIoRequest @ 1417a7280

void __thiscall FIoRequest::~FIoRequest(FIoRequest *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TAtomic<unsigned_int> *pTVar2;
  TAtomic<unsigned_int> TVar3;
  int iVar4;
  TAtomic<int> TVar5;
  FElement *pFVar6;
  FIoRequestAllocator *pFVar7;
  uchar *puVar8;
  BufCore *this_00;
  FBlock *pFVar9;
  FBlock *pFVar10;
  uchar *puVar11;
  
  pFVar6 = (FElement *)this->Impl;
  if (pFVar6 == (FElement *)0x0) {
    return;
  }
  LOCK();
  pTVar2 = (TAtomic<unsigned_int> *)((longlong)&pFVar6->Buffer + 0xd0);
  TVar3 = *pTVar2;
  *pTVar2 = (TAtomic<unsigned_int>)((int)*pTVar2 + -1);
  UNLOCK();
  if (TVar3 == (TAtomic<unsigned_int>)0x1) {
    pFVar7 = *(FIoRequestAllocator **)((longlong)&pFVar6->Buffer + 0x70);
    if (*(longlong *)((longlong)&pFVar6->Buffer + 0xa0) != 0) {
      puVar8 = *(uchar **)((pFVar6->Buffer).Pad + 200);
      puVar11 = (pFVar6->Buffer).Pad + 0xb0;
      if (puVar8 != (uchar *)0x0) {
        puVar11 = puVar8;
      }
      (**(code **)(*(longlong *)puVar11 + 0x10))();
    }
    if (((pFVar6->Buffer).Pad[0x98] != '\0') &&
       (this_00 = *(BufCore **)((pFVar6->Buffer).Pad + 0x90), this_00 != (BufCore *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount(this_00);
      LOCK();
      piVar1 = &this_00->NumRefs;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        FIoBuffer::BufCore::~BufCore(this_00);
        ::operator_delete(this_00,0x20);
      }
    }
    lpCriticalSection = &(pFVar7->BlockAllocator).CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar6->Next = (pFVar7->BlockAllocator).NextFree;
    piVar1 = &(pFVar7->BlockAllocator).NumElements;
    *piVar1 = *piVar1 + -1;
    (pFVar7->BlockAllocator).NextFree = pFVar6;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    TVar5 = pFVar7->RefCount;
    pFVar7->RefCount = (TAtomic<int>)((int)pFVar7->RefCount + -1);
    UNLOCK();
    if (TVar5 == (TAtomic<int>)0x1) {
      pFVar10 = (pFVar7->BlockAllocator).Blocks;
      while (pFVar10 != (FBlock *)0x0) {
        pFVar9 = pFVar10->Next;
        ::operator_delete(pFVar10,0xf0010);
        pFVar10 = pFVar9;
      }
      (pFVar7->BlockAllocator).Blocks = (FBlock *)0x0;
      (pFVar7->BlockAllocator).NextFree = (FElement *)0x0;
      (pFVar7->BlockAllocator).NumElements = 0;
      DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      ::operator_delete(pFVar7,0x48);
    }
  }
  return;
}

// operator= @ 1417a7fa0

FIoRequest * __thiscall FIoRequest::operator=(FIoRequest *this,FIoRequest *param_1)

{
  if (this->Impl != (FIoRequestImpl *)0x0) {
    FIoRequestImpl::ReleaseRef(this->Impl);
  }
  this->Impl = param_1->Impl;
  param_1->Impl = (FIoRequestImpl *)0x0;
  return this;
}

// operator= @ 1417a7fe0

FIoRequest * __thiscall FIoRequest::operator=(FIoRequest *this,FIoRequest *param_1)

{
  TAtomic<unsigned_int> *pTVar1;
  
  if (param_1->Impl != (FIoRequestImpl *)0x0) {
    LOCK();
    pTVar1 = &param_1->Impl->RefCount;
    *pTVar1 = (TAtomic<unsigned_int>)((int)*pTVar1 + 1);
    UNLOCK();
  }
  if (this->Impl != (FIoRequestImpl *)0x0) {
    FIoRequestImpl::ReleaseRef(this->Impl);
  }
  this->Impl = param_1->Impl;
  return this;
}

// Cancel @ 1417b7b10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FIoRequest::Cancel(FIoRequest *this)

{
  int *piVar1;
  FMutex *this_00;
  TArray<FIoRequestImpl_*,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<unsigned_char> aVar3;
  FIoDispatcherImpl *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  FIoRequestImpl *local_18 [2];
  
  if (((GIoDispatcher.Ptr != (FIoDispatcher *)0x0) &&
      (local_18[0] = this->Impl, local_18[0] != (FIoRequestImpl *)0x0)) &&
     (pFVar4 = (GIoDispatcher.Ptr)->Impl,
     ((pFVar4->BackendContext).Object)->bIsMultiThreaded != false)) {
    LOCK();
    local_18[0]->RefCount = (TAtomic<unsigned_int>)((int)local_18[0]->RefCount + 1);
    UNLOCK();
    this_00 = &pFVar4->UpdateMutex;
    LOCK();
    bVar8 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar8) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar8) {
      UE::FMutex::LockSlow(this_00);
    }
    pTVar2 = &pFVar4->RequestsToCancel;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 <
         pFVar5 + (longlong)(pFVar4->RequestsToCancel).ArrayMax * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar7 = (pFVar4->RequestsToCancel).ArrayNum;
    piVar1 = &(pFVar4->RequestsToCancel).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (pFVar4->RequestsToCancel).ArrayNum = iVar7 + 1;
    *(FIoRequestImpl **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_18[0];
    LOCK();
    aVar3 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
    (**(code **)(((pFVar4->DispatcherEvent).Event)->_padding_ + 0x10))();
  }
  return;
}

// GetResult @ 1417d64f0

FIoBuffer * __thiscall FIoRequest::GetResult(FIoRequest *this)

{
  wchar_t *pwVar1;
  int *piVar2;
  int iVar3;
  TAtomic<EIoErrorCode> TVar4;
  code *pcVar5;
  TSharedString<wchar_t> TVar6;
  EIoErrorCode EVar7;
  bool bVar8;
  FIoBuffer *pFVar9;
  TOptional<FIoBuffer> *pTVar10;
  BufCore *local_18;
  
  if (this->Impl == (FIoRequestImpl *)0x0) {
    return (FIoBuffer *)0x0;
  }
  TVar4 = this->Impl->ErrorCode;
  if (TVar4 == (TAtomic<EIoErrorCode>)0x1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Status.IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                       ,0x50b,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FIoBuffer *)(*pcVar5)();
      return pFVar9;
    }
  }
  TVar6.Chars = FIoStatus::Unknown.ErrorMessage.Chars;
  if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  EVar7 = FIoStatus::Unknown.ErrorCode;
  if (TVar4 == (TAtomic<EIoErrorCode>)0x0) {
    pTVar10 = &this->Impl->Buffer;
    if ((this->Impl->Buffer).bIsSet == false) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FIoBuffer *)(*pcVar5)();
        return pFVar9;
      }
    }
  }
  else {
    pTVar10 = (TOptional<FIoBuffer> *)0x0;
  }
  if (TVar6.Chars != (wchar_t *)0x0) {
    pwVar1 = TVar6.Chars + -4;
    LOCK();
    iVar3 = *(int *)pwVar1;
    *(int *)pwVar1 = *(int *)pwVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FMemory::Free(pwVar1);
    }
  }
  if ((EVar7 == Ok) && (local_18 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(local_18);
    LOCK();
    piVar2 = &local_18->NumRefs;
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FIoBuffer::BufCore::~BufCore(local_18);
      ::operator_delete(local_18,0x20);
    }
  }
  return &pTVar10->TypedValue;
}

// GetResultOrDie @ 1417d6610

/* WARNING: Enum "Type": Some values do not have unique names */

FIoBuffer * __thiscall FIoRequest::GetResultOrDie(FIoRequest *this)

{
  int *piVar1;
  int iVar2;
  TAtomic<EIoErrorCode> TVar3;
  FIoRequestImpl *pFVar4;
  code *pcVar5;
  TSharedString<wchar_t> TVar6;
  EIoErrorCode EVar7;
  bool bVar8;
  FIoBuffer *pFVar9;
  wchar_t *pwVar10;
  FIoStatus local_58;
  FString local_48 [2];
  BufCore *local_28;
  
  if (this->Impl != (FIoRequestImpl *)0x0) {
    TVar3 = this->Impl->ErrorCode;
    if ((TVar3 == (TAtomic<EIoErrorCode>)0x1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Status.IsCompleted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                           ,0x50b,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FIoBuffer *)(*pcVar5)();
      return pFVar9;
    }
    TVar6.Chars = FIoStatus::Unknown.ErrorMessage.Chars;
    if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
           *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    EVar7 = FIoStatus::Unknown.ErrorCode;
    if (TVar3 == (TAtomic<EIoErrorCode>)0x0) {
      pFVar4 = this->Impl;
      if (((pFVar4->Buffer).bIsSet == false) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FIoBuffer *)(*pcVar5)();
        return pFVar9;
      }
      if (TVar6.Chars != (wchar_t *)0x0) {
        pwVar10 = TVar6.Chars + -4;
        LOCK();
        iVar2 = *(int *)pwVar10;
        *(int *)pwVar10 = *(int *)pwVar10 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FMemory::Free(pwVar10);
        }
      }
      if ((EVar7 == Ok) && (local_28 != (BufCore *)0x0)) {
        FIoBuffer::BufCore::CheckRefCount(local_28);
        LOCK();
        piVar1 = &local_28->NumRefs;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FIoBuffer::BufCore::~BufCore(local_28);
          ::operator_delete(local_28,0x20);
        }
      }
      return &(pFVar4->Buffer).TypedValue;
    }
    if (TVar6.Chars != (wchar_t *)0x0) {
      pwVar10 = TVar6.Chars + -4;
      LOCK();
      iVar2 = *(int *)pwVar10;
      *(int *)pwVar10 = *(int *)pwVar10 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FMemory::Free(pwVar10);
      }
    }
    if ((EVar7 == Ok) && (local_28 != (BufCore *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount(local_28);
      LOCK();
      piVar1 = &local_28->NumRefs;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore(local_28);
        ::operator_delete(local_28,0x20);
      }
    }
  }
  if (this->Impl == (FIoRequestImpl *)0x0) {
    local_58.ErrorMessage.Chars = FIoStatus::Invalid.ErrorMessage.Chars;
    if (FIoStatus::Invalid.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(FIoStatus::Invalid.ErrorMessage.Chars + -4) =
           *(int *)(FIoStatus::Invalid.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    local_58.ErrorCode = FIoStatus::Invalid.ErrorCode;
    local_58.SystemErrorCode = FIoStatus::Invalid.SystemErrorCode;
  }
  else {
    local_58.ErrorCode = *(EIoErrorCode *)&this->Impl->ErrorCode;
    local_58.ErrorMessage.Chars = (wchar_t *)0x0;
    local_58.SystemErrorCode = 0;
  }
  FIoStatus::ToString(&local_58,local_48);
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  if (local_58.ErrorMessage.Chars != (wchar_t *)0x0) {
    pwVar10 = local_58.ErrorMessage.Chars + -4;
    LOCK();
    iVar2 = *(int *)pwVar10;
    *(int *)pwVar10 = *(int *)pwVar10 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FMemory::Free(pwVar10);
    }
  }
  return (FIoBuffer *)0x0;
}

// Release @ 1417f4ae0

void __thiscall FIoRequest::Release(FIoRequest *this)

{
  if (this->Impl != (FIoRequestImpl *)0x0) {
    FIoRequestImpl::ReleaseRef(this->Impl);
    this->Impl = (FIoRequestImpl *)0x0;
  }
  return;
}

// Status @ 141801050

FIoStatus * __thiscall FIoRequest::Status(FIoRequest *this,FIoStatus *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  TAtomic<EIoErrorCode> TVar2;
  TSharedString<wchar_t> TVar3;
  
  TVar3.Chars = FIoStatus::Invalid.ErrorMessage.Chars;
  if (this->Impl != (FIoRequestImpl *)0x0) {
    TVar2 = this->Impl->ErrorCode;
    (__return_storage_ptr__->ErrorMessage).Chars = (wchar_t *)0x0;
    __return_storage_ptr__->ErrorCode = (EIoErrorCode)TVar2;
    __return_storage_ptr__->SystemErrorCode = 0;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Invalid.ErrorMessage.Chars;
  if (TVar3.Chars != (wchar_t *)0x0) {
    LOCK();
    pwVar1 = TVar3.Chars + -4;
    *(int *)pwVar1 = *(int *)pwVar1 + 1;
    UNLOCK();
  }
  __return_storage_ptr__->ErrorCode = FIoStatus::Invalid.ErrorCode;
  __return_storage_ptr__->SystemErrorCode = FIoStatus::Invalid.SystemErrorCode;
  return __return_storage_ptr__;
}

// UpdatePriority @ 14180bd30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FIoRequest::UpdatePriority(FIoRequest *this,int param_1)

{
  int *piVar1;
  FMutex *this_00;
  TArray<FIoRequestImpl_*,TSizedDefaultAllocator<32>_> *pTVar2;
  atomic<unsigned_char> aVar3;
  FIoRequestImpl *pFVar4;
  FIoDispatcherImpl *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  FIoRequestImpl *local_18 [2];
  
  if (((GIoDispatcher.Ptr != (FIoDispatcher *)0x0) &&
      (pFVar4 = this->Impl, pFVar4 != (FIoRequestImpl *)0x0)) && (pFVar4->Priority != param_1)) {
    pFVar4->Priority = param_1;
    local_18[0] = this->Impl;
    pFVar5 = (GIoDispatcher.Ptr)->Impl;
    if (((pFVar5->BackendContext).Object)->bIsMultiThreaded != false) {
      LOCK();
      local_18[0]->RefCount = (TAtomic<unsigned_int>)((int)local_18[0]->RefCount + 1);
      UNLOCK();
      this_00 = &pFVar5->UpdateMutex;
      LOCK();
      bVar9 = this_00->State == (atomic<unsigned_char>)0x0;
      if (bVar9) {
        this_00->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar9) {
        UE::FMutex::LockSlow(this_00);
      }
      pTVar2 = &pFVar5->RequestsToReprioritize;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar6 + (longlong)(pFVar5->RequestsToReprioritize).ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar8 = (pFVar5->RequestsToReprioritize).ArrayNum;
      piVar1 = &(pFVar5->RequestsToReprioritize).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (pFVar5->RequestsToReprioritize).ArrayNum = iVar8 + 1;
      *(FIoRequestImpl **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_18[0];
      LOCK();
      aVar3 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(this_00);
      }
      (**(code **)(((pFVar5->DispatcherEvent).Event)->_padding_ + 0x10))();
    }
  }
  return;
}


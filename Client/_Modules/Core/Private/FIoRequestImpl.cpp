// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// CreateBuffer @ 1417bedc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FIoRequestImpl::CreateBuffer(FIoRequestImpl *this,ulong64 param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  BufCore *pBVar4;
  bool bVar5;
  undefined1 auStack_68 [40];
  FInheritedContextScope local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  pvVar3 = (this->Options).TargetVa;
  if (pvVar3 == (void *)0x0) {
    UE::FInheritedContextBase::RestoreInheritedContext((FInheritedContextBase *)this,&local_40);
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1203,"AllocMemoryForRequest",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                 ,0x4b3);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1203);
    }
    if (((this->Buffer).bIsSet != false) &&
       (pBVar4 = (this->Buffer).TypedValue.CorePtr.Reference, pBVar4 != (BufCore *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount(pBVar4);
      LOCK();
      piVar1 = &pBVar4->NumRefs;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore(pBVar4);
        ::operator_delete(pBVar4,0x20);
      }
    }
    FIoBuffer::FIoBuffer(&(this->Buffer).TypedValue,param_1);
    (this->Buffer).bIsSet = true;
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FMetadataRestoreScope::~FMetadataRestoreScope(&local_40.MetaScope);
    FMemScope::~FMemScope(&local_40.MemScope);
    DestructItems<FLLMScope,int>((FLLMScope *)&local_40,local_40.LLMScopes.LLMScopes.ArrayNum);
  }
  else {
    if (((this->Buffer).bIsSet != false) &&
       (pBVar4 = (this->Buffer).TypedValue.CorePtr.Reference, pBVar4 != (BufCore *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount(pBVar4);
      LOCK();
      piVar1 = &pBVar4->NumRefs;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FIoBuffer::BufCore::~BufCore(pBVar4);
        ::operator_delete(pBVar4,0x20);
      }
    }
    FIoBuffer::FIoBuffer(&(this->Buffer).TypedValue,Wrap,pvVar3,param_1);
    (this->Buffer).bIsSet = true;
  }
  return;
}

// FreeRequest @ 1417cf850

void __thiscall FIoRequestImpl::FreeRequest(FIoRequestImpl *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  TAtomic<int> TVar3;
  FIoRequestAllocator *pFVar4;
  longlong *plVar5;
  BufCore *this_00;
  FBlock *pFVar6;
  FBlock *pFVar7;
  longlong *plVar8;
  
  pFVar4 = this->Allocator;
  if (*(longlong *)&this->Callback != 0) {
    plVar5 = *(longlong **)&(this->Callback).field_0x28;
    plVar8 = (longlong *)&(this->Callback).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar8 = plVar5;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (((this->Buffer).bIsSet != false) &&
     (this_00 = (this->Buffer).TypedValue.CorePtr.Reference, this_00 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  lpCriticalSection = &(pFVar4->BlockAllocator).CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this[1]._padding_ = (longlong)(pFVar4->BlockAllocator).NextFree;
    piVar1 = &(pFVar4->BlockAllocator).NumElements;
    *piVar1 = *piVar1 + -1;
    (pFVar4->BlockAllocator).NextFree = (FElement *)this;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    TVar3 = pFVar4->RefCount;
    pFVar4->RefCount = (TAtomic<int>)((int)pFVar4->RefCount + -1);
    UNLOCK();
    if (TVar3 == (TAtomic<int>)0x1) {
      pFVar7 = (pFVar4->BlockAllocator).Blocks;
      while (pFVar7 != (FBlock *)0x0) {
        pFVar6 = pFVar7->Next;
        ::operator_delete(pFVar7,0xf0010);
        pFVar7 = pFVar6;
      }
      (pFVar4->BlockAllocator).Blocks = (FBlock *)0x0;
      (pFVar4->BlockAllocator).NextFree = (FElement *)0x0;
      (pFVar4->BlockAllocator).NumElements = 0;
      DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      ::operator_delete(pFVar4,0x48);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetBuffer @ 1417d1bd0

FIoBuffer * __thiscall FIoRequestImpl::GetBuffer(FIoRequestImpl *this)

{
  code *pcVar1;
  bool bVar2;
  FIoBuffer *pFVar3;
  
  if ((this->Buffer).bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIoBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &(this->Buffer).TypedValue;
}

// ReleaseRef @ 1417f4bc0

void __thiscall FIoRequestImpl::ReleaseRef(FIoRequestImpl *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TAtomic<unsigned_int> *pTVar2;
  TAtomic<unsigned_int> TVar3;
  int iVar4;
  TAtomic<int> TVar5;
  FIoRequestAllocator *pFVar6;
  longlong *plVar7;
  BufCore *this_00;
  FBlock *pFVar8;
  FBlock *pFVar9;
  longlong *plVar10;
  
  LOCK();
  pTVar2 = &this->RefCount;
  TVar3 = *pTVar2;
  *pTVar2 = (TAtomic<unsigned_int>)((int)*pTVar2 + -1);
  UNLOCK();
  if (TVar3 == (TAtomic<unsigned_int>)0x1) {
    pFVar6 = this->Allocator;
    if (*(longlong *)&this->Callback != 0) {
      plVar7 = *(longlong **)&(this->Callback).field_0x28;
      plVar10 = (longlong *)&(this->Callback).field_0x10;
      if (plVar7 != (longlong *)0x0) {
        plVar10 = plVar7;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (((this->Buffer).bIsSet != false) &&
       (this_00 = (this->Buffer).TypedValue.CorePtr.Reference, this_00 != (BufCore *)0x0)) {
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
    lpCriticalSection = &(pFVar6->BlockAllocator).CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this[1]._padding_ = (longlong)(pFVar6->BlockAllocator).NextFree;
    piVar1 = &(pFVar6->BlockAllocator).NumElements;
    *piVar1 = *piVar1 + -1;
    (pFVar6->BlockAllocator).NextFree = (FElement *)this;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    TVar5 = pFVar6->RefCount;
    pFVar6->RefCount = (TAtomic<int>)((int)pFVar6->RefCount + -1);
    UNLOCK();
    if (TVar5 == (TAtomic<int>)0x1) {
      pFVar9 = (pFVar6->BlockAllocator).Blocks;
      while (pFVar9 != (FBlock *)0x0) {
        pFVar8 = pFVar9->Next;
        ::operator_delete(pFVar9,0xf0010);
        pFVar9 = pFVar8;
      }
      (pFVar6->BlockAllocator).Blocks = (FBlock *)0x0;
      (pFVar6->BlockAllocator).NextFree = (FElement *)0x0;
      (pFVar6->BlockAllocator).NumElements = 0;
      DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      ::operator_delete(pFVar6,0x48);
    }
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 16

// FIoDispatcher @ 1417a18b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FIoDispatcher * __thiscall FIoDispatcher::FIoDispatcher(FIoDispatcher *this)

{
  bool bVar1;
  FIoDispatcherImpl *pFVar2;
  
  pFVar2 = ::operator_new(0x208);
  if (pFVar2 != (FIoDispatcherImpl *)0x0) {
    bVar1 = FGenericPlatformProcess::SupportsMultithreading();
    pFVar2 = FIoDispatcherImpl::FIoDispatcherImpl(pFVar2,bVar1);
    this->Impl = pFVar2;
    return this;
  }
  this->Impl = (FIoDispatcherImpl *)0x0;
  return this;
}

// ~FIoDispatcher @ 1417a6e90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FIoDispatcher::~FIoDispatcher(FIoDispatcher *this)

{
  FIoDispatcherImpl *pFVar1;
  
  pFVar1 = this->Impl;
  if (pFVar1 != (FIoDispatcherImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417a6ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    return;
  }
  return;
}

// DoesChunkExist @ 1417c4bd0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FIoDispatcher::DoesChunkExist(FIoDispatcher *this,FIoChunkId *param_1,FIoOffsetAndLength *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FIoDispatcherImpl *pFVar3;
  char cVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar3 = this->Impl;
  AcquireSRWLockShared((PSRWLOCK)&pFVar3->BackendsLock);
  iVar2 = (pFVar3->Backends).ArrayNum;
  pFVar5 = (pFVar3->Backends).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((pFVar3->Backends).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<int,TSharedRef<IIoDispatcherBackend,1>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    cVar4 = (**(code **)(**(longlong **)(pFVar5 + 8) + 0x30))
                      (*(longlong **)(pFVar5 + 8),param_1,param_2);
    if (cVar4 != '\0') {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar3->BackendsLock);
      return true;
    }
    pFVar5 = pFVar5 + 0x18;
  }
  ReleaseSRWLockShared((PSRWLOCK)&pFVar3->BackendsLock);
  return false;
}

// DoesChunkExist @ 1417c4c80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FIoDispatcher::DoesChunkExist(FIoDispatcher *this,FIoChunkId *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FIoDispatcherImpl *pFVar3;
  char cVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar3 = this->Impl;
  AcquireSRWLockShared((PSRWLOCK)&pFVar3->BackendsLock);
  iVar2 = (pFVar3->Backends).ArrayNum;
  pFVar5 = (pFVar3->Backends).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((pFVar3->Backends).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<int,TSharedRef<IIoDispatcherBackend,1>_>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    cVar4 = (**(code **)(**(longlong **)(pFVar5 + 8) + 0x38))(*(longlong **)(pFVar5 + 8),param_1);
    if (cVar4 != '\0') {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar3->BackendsLock);
      return true;
    }
    pFVar5 = pFVar5 + 0x18;
  }
  ReleaseSRWLockShared((PSRWLOCK)&pFVar3->BackendsLock);
  return false;
}

// Get @ 1417d10a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FIoDispatcher * __cdecl FIoDispatcher::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FIoDispatcher *pFVar3;
  
  if ((GIoDispatcher.Ptr == (FIoDispatcher *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GIoDispatcher",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                         ,0x432,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIoDispatcher *)(*pcVar1)();
    return pFVar3;
  }
  return GIoDispatcher.Ptr;
}

// GetSizeForChunk @ 1417d7c60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TIoStatusOr<unsigned___int64> * __thiscall
FIoDispatcher::GetSizeForChunk
          (FIoDispatcher *this,TIoStatusOr<unsigned___int64> *__return_storage_ptr__,
          FIoChunkId *param_1,FIoOffsetAndLength *param_2,ulong64 *param_3)

{
  FIoDispatcherImpl::GetSizeForChunk(this->Impl,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetSizeForChunk @ 1417d7c90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TIoStatusOr<unsigned___int64> * __thiscall
FIoDispatcher::GetSizeForChunk
          (FIoDispatcher *this,TIoStatusOr<unsigned___int64> *__return_storage_ptr__,
          FIoChunkId *param_1)

{
  FIoDispatcherImpl::GetSizeForChunk(this->Impl,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetTotalLoaded @ 1417d8440

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

long64 __thiscall FIoDispatcher::GetTotalLoaded(FIoDispatcher *this)

{
  return this->Impl->TotalLoaded;
}

// Initialize @ 1417db260

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FIoStatus * __cdecl FIoDispatcher::Initialize(FIoStatus *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  code *pcVar2;
  TSharedString<wchar_t> TVar3;
  TUniquePtr<FIoDispatcher,TDefaultDelete<FIoDispatcher>_> TVar4;
  bool bVar5;
  FIoStatus *pFVar6;
  TUniquePtr<FIoDispatcher,TDefaultDelete<FIoDispatcher>_> TVar7;
  FIoDispatcherImpl *pFVar8;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1051,L"FileSystem/IODispatcher");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name1051,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name1051,true);
  if ((GIoDispatcher.Ptr != (FIoDispatcher *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GIoDispatcher",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                         ,0x41c,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FIoStatus *)(*pcVar2)();
    return pFVar6;
  }
  TVar7.Ptr = ::operator_new(8);
  if (TVar7.Ptr != (FIoDispatcher *)0x0) {
    pFVar8 = ::operator_new(0x208);
    if (pFVar8 == (FIoDispatcherImpl *)0x0) {
      (TVar7.Ptr)->Impl = (FIoDispatcherImpl *)0x0;
    }
    else {
      bVar5 = FGenericPlatformProcess::SupportsMultithreading();
      pFVar8 = FIoDispatcherImpl::FIoDispatcherImpl(pFVar8,bVar5);
      (TVar7.Ptr)->Impl = pFVar8;
    }
  }
  TVar4.Ptr = GIoDispatcher.Ptr;
  if (GIoDispatcher.Ptr != (FIoDispatcher *)0x0) {
    pFVar8 = (GIoDispatcher.Ptr)->Impl;
    GIoDispatcher.Ptr = TVar7.Ptr;
    if (pFVar8 != (FIoDispatcherImpl *)0x0) {
      (**(code **)(pFVar8->_padding_ + 0x28))(pFVar8,1);
    }
    ::operator_delete(TVar4.Ptr,8);
    TVar7 = GIoDispatcher;
  }
  GIoDispatcher.Ptr = TVar7.Ptr;
  TVar3.Chars = FIoStatus::Ok.ErrorMessage.Chars;
  (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
  if (TVar3.Chars != (wchar_t *)0x0) {
    LOCK();
    pwVar1 = TVar3.Chars + -4;
    *(int *)pwVar1 = *(int *)pwVar1 + 1;
    UNLOCK();
  }
  __return_storage_ptr__->ErrorCode = FIoStatus::Ok.ErrorCode;
  __return_storage_ptr__->SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// InitializePostSettings @ 1417dc3e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl FIoDispatcher::InitializePostSettings(void)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FIoDispatcherImpl *this;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  FIoDispatcherImpl *local_res18;
  FMemScope local_res20;
  <lambda_1> local_48 [8];
  FIoDispatcherBackendContext *local_40;
  TReferenceControllerBase<1> *local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name1060,L"FileSystem/IODispatcher");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name1060,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name1060,true);
  if (GIoDispatcher.Ptr == (FIoDispatcher *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GIoDispatcher",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                       ,0x425,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this = (GIoDispatcher.Ptr)->Impl;
  if (this->bIsInitialized == false) {
    this->bIsInitialized = true;
    UE::FPlatformIoDispatcher::Initialize();
    iVar2 = (this->Backends).ArrayNum;
    if (iVar2 != 0) {
      pFVar7 = (this->Backends).AllocatorInstance.Data;
      pFVar1 = pFVar7 + (longlong)iVar2 * 0x18;
      while( true ) {
        if ((this->Backends).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TTuple<int,TSharedRef<IIoDispatcherBackend,1>_>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar7 == pFVar1) break;
        puVar3 = *(undefined8 **)(pFVar7 + 8);
        pcVar4 = *(code **)*puVar3;
        local_40 = (this->BackendContext).Object;
        local_38 = (this->BackendContext).SharedReferenceCount.ReferenceController;
        if (local_38 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_38->SharedReferenceCount = (atomic<int>)((int)local_38->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar4)(puVar3,&local_40);
        pwVar6 = (wchar_t *)(**(code **)(**(longlong **)(pFVar7 + 8) + 0x58))();
        FIoStoreTrace::BackendName(*(IIoDispatcherBackend **)(pFVar7 + 8),pwVar6);
        pFVar7 = pFVar7 + 0x18;
      }
      FIoDispatcherImpl::StartThread(this);
    }
    local_res18 = this;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
    AddLambda<_FIoDispatcherImpl::Initialize_::__l2::<lambda_1>_>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
               &FTraceAuxiliary::OnConnection,local_48);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// IsInitialized @ 1417ddfe0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __cdecl FIoDispatcher::IsInitialized(void)

{
  return GIoDispatcher.Ptr != (FIoDispatcher *)0x0;
}

// Mount @ 1417e4ee0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FIoDispatcher::Mount(FIoDispatcher *this,TSharedRef<IIoDispatcherBackend,1> *param_1,int param_2)

{
  FIoDispatcherImpl *this_00;
  TSharedRef<IIoDispatcherBackend,1> local_18;
  
  local_18.Object = param_1->Object;
  this_00 = this->Impl;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FIoDispatcherImpl::Mount(this_00,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// NewBatch @ 1417e6d10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FIoBatch * __thiscall FIoDispatcher::NewBatch(FIoDispatcher *this,FIoBatch *__return_storage_ptr__)

{
  __return_storage_ptr__->Dispatcher = this->Impl;
  __return_storage_ptr__->HeadRequest = (FIoRequestImpl *)0x0;
  __return_storage_ptr__->TailRequest = (FIoRequestImpl *)0x0;
  return __return_storage_ptr__;
}

// OnSignatureError @ 1417e8070

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TMulticastDelegate<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy> * __thiscall
FIoDispatcher::OnSignatureError(FIoDispatcher *this)

{
  return &((this->Impl->BackendContext).Object)->SignatureErrorDelegate;
}

// OpenMapped @ 1417e8320

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TIoStatusOr<FIoMappedRegion> * __thiscall
FIoDispatcher::OpenMapped
          (FIoDispatcher *this,TIoStatusOr<FIoMappedRegion> *__return_storage_ptr__,
          FIoChunkId *param_1,FIoReadOptions *param_2)

{
  FIoDispatcherImpl::OpenMapped(this->Impl,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Shutdown @ 1417fe9f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl FIoDispatcher::Shutdown(void)

{
  FIoDispatcherImpl *pFVar1;
  TUniquePtr<FIoDispatcher,TDefaultDelete<FIoDispatcher>_> TVar2;
  
  TVar2.Ptr = GIoDispatcher.Ptr;
  GIoDispatcher.Ptr = (FIoDispatcher *)0x0;
  if (TVar2.Ptr != (FIoDispatcher *)0x0) {
    pFVar1 = (TVar2.Ptr)->Impl;
    if (pFVar1 != (FIoDispatcherImpl *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    }
    ::operator_delete(TVar2.Ptr,8);
    return;
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 18

// FFileIoDispatcherBackend @ 142a51660

FFileIoDispatcherBackend * __thiscall
UE::IoStore::FFileIoDispatcherBackend::FFileIoDispatcherBackend(FFileIoDispatcherBackend *this)

{
  FSlab *pFVar1;
  FSlab *pFVar2;
  longlong lVar3;
  FSlab *pFVar4;
  
  this->_padding_ = (longlong)&___7FFileIoDispatcherBackend_IoStore_UE__6B_;
  (this->BackendContext).Object = (FIoDispatcherBackendContext *)0x0;
  (this->BackendContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->IoStore).MountedContainers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IoStore).MountedContainers.ArrayNum = 0;
  (this->IoStore).MountedContainers.ArrayMax = 0;
  (this->IoStore).RwLock.Mutex.Mutex.Ptr = (void *)0x0;
  (this->IoStore).ContainerInstanceId = (atomic<unsigned_int>)0x1;
  (this->RequestAllocator).CurrentSlab = (FSlab *)0x0;
  pFVar1 = ::operator_new(0x48008);
  pFVar4 = (FSlab *)0x0;
  if (pFVar1 != (FSlab *)0x0) {
    memset(&pFVar1->field_0x4,0,0x48004);
    lVar3 = 0x1000;
    pFVar1->Allocated = 0;
    pFVar1->Freed = 0;
    pFVar2 = pFVar1;
    do {
      pFVar2 = (FSlab *)&pFVar2->Elements[0].Slab;
      *(FSlab **)pFVar2 = (FSlab *)0x0;
      lVar3 = lVar3 + -1;
      pFVar4 = pFVar1;
    } while (lVar3 != 0);
  }
  (this->RequestAllocator).CurrentSlab = pFVar4;
  (this->CompletedDispatcherRequests).Head = (FIoRequestImpl *)0x0;
  (this->CompletedDispatcherRequests).Tail = (FIoRequestImpl *)0x0;
  (this->Mutex).State = (atomic<unsigned_char>)0x0;
  return this;
}

// ~FFileIoDispatcherBackend @ 142a55db0

void __thiscall
UE::IoStore::FFileIoDispatcherBackend::~FFileIoDispatcherBackend(FFileIoDispatcherBackend *this)

{
  FSlab *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FFileIoDispatcherBackend_IoStore_UE__6B_;
  pFVar1 = (this->RequestAllocator).CurrentSlab;
  if (pFVar1->Allocated != pFVar1->Freed) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSlab->Allocated == CurrentSlab->Freed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                       ,0x23,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ::operator_delete((this->RequestAllocator).CurrentSlab,0x48008);
  FFileIoStore::~FFileIoStore(&this->IoStore);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackendContext).SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 142a59330

void __thiscall
`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::__l31::<lambda_1>::operator()
          (void *this,FIoFileReadResult *param_1)

{
  byte *pbVar1;
  byte bVar2;
  FIoRequestImpl *pFVar3;
  longlong lVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  code *pcVar5;
  atomic<unsigned___int64> aVar6;
  bool bVar7;
  FReadAccessScope local_28;
  
  pFVar3 = param_1->UserData;
  if ((param_1->ErrorCode != Ok) && (pFVar3->LastBackendError != Cancelled)) {
    pFVar3->LastBackendError = ReadError;
  }
  lVar4 = *(longlong *)this;
  LOCK();
  bVar7 = *(char *)(lVar4 + 0x50) == '\0';
  if (bVar7) {
    *(char *)(lVar4 + 0x50) = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow((FMutex *)(lVar4 + 0x50));
  }
  TIntrusiveList<UE::Private::FIoRequestListTraits>::AddTail
            ((TIntrusiveList<UE::Private::FIoRequestListTraits> *)(*(longlong *)this + 0x40),pFVar3)
  ;
  LOCK();
  pbVar1 = (byte *)(lVar4 + 0x50);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 - 1;
  UNLOCK();
  if ((bVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)(lVar4 + 0x50));
  }
  lVar4 = *(longlong *)this;
  if ((*(longlong *)(lVar4 + 8) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)(lVar4 + 8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_28);
  if (*(int *)&this_00[2].AccessDetector.State == 0) {
    aVar6 = (atomic<unsigned___int64>)0x0;
  }
  else {
    aVar6 = this_00[1].AccessDetector.State;
  }
  (**(code **)(*(longlong *)aVar6 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// operator() @ 142a5a650

void __thiscall
`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::__l30::<lambda_2>::operator()
          (void *this,FIoFileReadResult *param_1)

{
  byte *pbVar1;
  byte bVar2;
  FIoRequestImpl *pFVar3;
  longlong lVar4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  code *pcVar5;
  atomic<unsigned___int64> aVar6;
  bool bVar7;
  FReadAccessScope local_28;
  
  pFVar3 = param_1->UserData;
  if (((pFVar3->LastBackendError != Cancelled) && (param_1->ErrorCode != Ok)) &&
     (pFVar3->LastBackendError = ReadError, param_1->ErrorCode == SignatureError)) {
    UE::IoStore::FFileIoDispatcherBackend::HandleSignatureError
              (*(FFileIoDispatcherBackend **)this,pFVar3,param_1->FailedBlockId);
  }
  lVar4 = *(longlong *)this;
  LOCK();
  bVar7 = *(char *)(lVar4 + 0x50) == '\0';
  if (bVar7) {
    *(char *)(lVar4 + 0x50) = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow((FMutex *)(lVar4 + 0x50));
  }
  TIntrusiveList<UE::Private::FIoRequestListTraits>::AddTail
            ((TIntrusiveList<UE::Private::FIoRequestListTraits> *)(*(longlong *)this + 0x40),pFVar3)
  ;
  LOCK();
  pbVar1 = (byte *)(lVar4 + 0x50);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 - 1;
  UNLOCK();
  if ((bVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)(lVar4 + 0x50));
  }
  lVar4 = *(longlong *)this;
  if ((*(longlong *)(lVar4 + 8) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)(lVar4 + 8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_28);
  if (*(int *)&this_00[2].AccessDetector.State == 0) {
    aVar6 = (atomic<unsigned___int64>)0x0;
  }
  else {
    aVar6 = this_00[1].AccessDetector.State;
  }
  (**(code **)(*(longlong *)aVar6 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// CancelIoRequest @ 142a60be0

void __thiscall
UE::IoStore::FFileIoDispatcherBackend::CancelIoRequest
          (FFileIoDispatcherBackend *this,FIoRequestImpl *param_1)

{
  void *pvVar1;
  IPlatformIoDispatcher *pIVar2;
  
  if ((param_1 != (FIoRequestImpl *)0x0) && (pvVar1 = param_1->BackendData, pvVar1 != (void *)0x0))
  {
    pIVar2 = FPlatformIoDispatcher::Get();
                    /* WARNING: Could not recover jumptable at 0x000142a60c13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar2 + 0x40))
              (pIVar2,*(undefined8 *)((longlong)pvVar1 + 0x20),*(code **)((longlong)*pIVar2 + 0x40))
    ;
    return;
  }
  return;
}

// DoesChunkExist @ 142a6a660

bool __thiscall
UE::IoStore::FFileIoDispatcherBackend::DoesChunkExist
          (FFileIoDispatcherBackend *this,FIoChunkId *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FIoOffsetAndLength *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  AcquireSRWLockShared((PSRWLOCK)&(this->IoStore).RwLock);
  pFVar4 = (this->IoStore).MountedContainers.AllocatorInstance.Data;
  iVar2 = (this->IoStore).MountedContainers.ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->IoStore).MountedContainers.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pFVar3 = FChunkLookup::Find((FChunkLookup *)(*(longlong *)pFVar4 + 0x148),param_1);
    if (pFVar3 != (FIoOffsetAndLength *)0x0) {
      lVar5 = *(longlong *)pFVar4;
LAB_142a6a6cc:
      ReleaseSRWLockShared((PSRWLOCK)&(this->IoStore).RwLock);
      return lVar5 != 0;
    }
    pFVar4 = pFVar4 + 8;
  }
  lVar5 = 0;
  goto LAB_142a6a6cc;
}

// GetCompletedIoRequests @ 142a727b0

FIoRequestImpl * __thiscall
UE::IoStore::FFileIoDispatcherBackend::GetCompletedIoRequests(FFileIoDispatcherBackend *this)

{
  FMutex *pFVar1;
  int *piVar2;
  atomic<unsigned_char> aVar3;
  int iVar4;
  void *pvVar5;
  BufCore *pBVar6;
  BufCore *this_00;
  short *psVar7;
  code *pcVar8;
  FIoRequestImpl *pFVar9;
  IPlatformIoDispatcher *pIVar10;
  FIoRequestImpl *pFVar11;
  bool bVar12;
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name904,L"FileSystem/FileIoStore");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name904,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,&LLMScope_Name904,true);
  LOCK();
  bVar12 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar12) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar12) {
    FMutex::LockSlow(&this->Mutex);
  }
  pFVar11 = (this->CompletedDispatcherRequests).Head;
  (this->CompletedDispatcherRequests).Head = (FIoRequestImpl *)0x0;
  (this->CompletedDispatcherRequests).Tail = (FIoRequestImpl *)0x0;
  LOCK();
  pFVar1 = &this->Mutex;
  aVar3 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  pFVar9 = pFVar11;
  if (((byte)aVar3 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  do {
    if (pFVar9 == (FIoRequestImpl *)0x0) {
      FMemScope::~FMemScope(&local_res18);
      FLLMScope::~FLLMScope(local_res10);
      return pFVar11;
    }
    pvVar5 = pFVar9->BackendData;
    pIVar10 = FPlatformIoDispatcher::Get();
    (**(code **)((longlong)*pIVar10 + 0x50))(pIVar10,*(undefined8 *)((longlong)pvVar5 + 0x20));
    if ((*(int *)(*(longlong *)((longlong)pvVar5 + 0x10) + 0x244) < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ResolvedRequest.ChunkInfo.GetContainer().ActiveReadCount > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FileIoDispatcherBackend.cpp"
                            ,0x395,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FIoRequestImpl *)(*pcVar8)();
      return pFVar11;
    }
    LOCK();
    piVar2 = (int *)(*(longlong *)((longlong)pvVar5 + 0x10) + 0x244);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (pFVar9->LastBackendError == Ok) {
      if (*(char *)(*(longlong *)((longlong)pvVar5 + 8) + 0x18) == '\0' &&
          *(int *)(*(longlong *)((longlong)pvVar5 + 8) + 8) == 0) {
        if (((pFVar9->Buffer).bIsSet == false) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          pFVar11 = (FIoRequestImpl *)(*pcVar8)();
          return pFVar11;
        }
        pBVar6 = (pFVar9->Buffer).TypedValue.CorePtr.Reference;
        if ((pBVar6->DataSizeHigh == '\0' && pBVar6->DataSizeLow == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("!bSucceeded || ResolvedRequest.Buffer.GetSize() > 0 || DispatcherRequest.GetBuffer().GetSize() > 0"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FileIoDispatcherBackend.cpp"
                                ,0x399,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          pFVar11 = (FIoRequestImpl *)(*pcVar8)();
          return pFVar11;
        }
      }
      if ((pFVar9->Buffer).bIsSet == false) {
        pBVar6 = *(BufCore **)((longlong)pvVar5 + 8);
        *(undefined8 *)((longlong)pvVar5 + 8) = 0;
        if (((pFVar9->Buffer).bIsSet != false) &&
           (this_00 = (pFVar9->Buffer).TypedValue.CorePtr.Reference, this_00 != (BufCore *)0x0)) {
          FIoBuffer::BufCore::CheckRefCount(this_00);
          LOCK();
          piVar2 = &this_00->NumRefs;
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            FIoBuffer::BufCore::~BufCore(this_00);
            ::operator_delete(this_00,0x20);
          }
        }
        (pFVar9->Buffer).TypedValue.CorePtr.Reference = pBVar6;
        if (pBVar6 == (BufCore *)0x0) {
          (pFVar9->Buffer).bIsSet = true;
        }
        else {
          LOCK();
          pBVar6->NumRefs = pBVar6->NumRefs + 1;
          UNLOCK();
          (pFVar9->Buffer).bIsSet = true;
          FIoBuffer::BufCore::CheckRefCount(pBVar6);
          LOCK();
          piVar2 = &pBVar6->NumRefs;
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            FIoBuffer::BufCore::~BufCore(pBVar6);
            ::operator_delete(pBVar6,0x20);
          }
        }
      }
    }
    pBVar6 = *(BufCore **)((longlong)pvVar5 + 8);
    if (pBVar6 != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount(pBVar6);
      LOCK();
      piVar2 = &pBVar6->NumRefs;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        FIoBuffer::BufCore::~BufCore(pBVar6);
        ::operator_delete(pBVar6,0x20);
      }
    }
    psVar7 = *(short **)((longlong)pvVar5 + 0x40);
    psVar7[1] = psVar7[1] + 1;
    if (psVar7[1] == 0x1000) {
      if ((*psVar7 != 0x1000) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Slab->Freed == Slab->Allocated",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                              ,0x48,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        pFVar11 = (FIoRequestImpl *)(*pcVar8)();
        return pFVar11;
      }
      ::operator_delete(psVar7,0x48008);
    }
    pFVar9->BackendData = (void *)0x0;
    pFVar9 = pFVar9->NextRequest;
  } while( true );
}

// GetName @ 142a75940

wchar_t * __thiscall UE::IoStore::FFileIoDispatcherBackend::GetName(FFileIoDispatcherBackend *this)

{
  return L"File";
}

// GetSizeForChunk @ 142a79040

TIoStatusOr<unsigned___int64> * __thiscall
UE::IoStore::FFileIoDispatcherBackend::GetSizeForChunk
          (FFileIoDispatcherBackend *this,TIoStatusOr<unsigned___int64> *__return_storage_ptr__,
          FIoChunkId *param_1)

{
  FScriptContainerElement *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  int iVar7;
  FIoOffsetAndLength *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FIoStatus local_38;
  
  AcquireSRWLockShared((PSRWLOCK)&(this->IoStore).RwLock);
  pFVar9 = (this->IoStore).MountedContainers.AllocatorInstance.Data;
  iVar7 = (this->IoStore).MountedContainers.ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar7 * 8;
  while( true ) {
    if ((this->IoStore).MountedContainers.ArrayNum != iVar7) {
      `TCheckedPointerIterator<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) goto LAB_142a790fc;
    pFVar8 = FChunkLookup::Find((FChunkLookup *)(*(longlong *)pFVar9 + 0x148),param_1);
    if (pFVar8 != (FIoOffsetAndLength *)0x0) break;
    pFVar9 = pFVar9 + 8;
  }
  if (*(longlong *)pFVar9 == 0) {
LAB_142a790fc:
    local_38.ErrorMessage.Chars = FIoStatus::Unknown.ErrorMessage.Chars;
    if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
           *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    local_38.ErrorCode = FIoStatus::Unknown.ErrorCode;
    local_38.SystemErrorCode = FIoStatus::Unknown.SystemErrorCode;
    TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>(__return_storage_ptr__,&local_38);
  }
  else {
    uVar2 = pFVar8->OffsetAndLength[5];
    uVar3 = pFVar8->OffsetAndLength[6];
    uVar4 = pFVar8->OffsetAndLength[7];
    uVar5 = pFVar8->OffsetAndLength[8];
    uVar6 = pFVar8->OffsetAndLength[9];
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    *(ulonglong *)(__return_storage_ptr__->Value).Pad =
         (ulonglong)CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5),uVar6);
  }
  ReleaseSRWLockShared((PSRWLOCK)&(this->IoStore).RwLock);
  return __return_storage_ptr__;
}

// HandleSignatureError @ 142a7ba30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::FFileIoDispatcherBackend::HandleSignatureError
          (FFileIoDispatcherBackend *this,FIoRequestImpl *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  uint uVar6;
  FSHAHash *pFVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStackY_f8 [32];
  undefined1 local_b8 [4];
  uint local_b4;
  void *local_b0;
  FString local_a8;
  FIoRequestImpl *local_98;
  FIoSignatureError local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_88.ExpectedHash.Hash[0x10] = '\0';
  local_88.ExpectedHash.Hash[0x11] = '\0';
  local_88.ExpectedHash.Hash[0x12] = '\0';
  local_88.ExpectedHash.Hash[0x13] = '\0';
  uVar8 = 0;
  local_88.ActualHash.Hash[0x10] = '\0';
  local_88.ActualHash.Hash[0x11] = '\0';
  local_88.ActualHash.Hash[0x12] = '\0';
  local_88.ActualHash.Hash[0x13] = '\0';
  local_88.ContainerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ContainerName.Data.ArrayNum = 0;
  local_88.ContainerName.Data.ArrayMax = 0;
  local_88.ExpectedHash.Hash[0] = '\0';
  local_88.ExpectedHash.Hash[1] = '\0';
  local_88.ExpectedHash.Hash[2] = '\0';
  local_88.ExpectedHash.Hash[3] = '\0';
  local_88.ExpectedHash.Hash[4] = '\0';
  local_88.ExpectedHash.Hash[5] = '\0';
  local_88.ExpectedHash.Hash[6] = '\0';
  local_88.ExpectedHash.Hash[7] = '\0';
  local_88.ExpectedHash.Hash[8] = '\0';
  local_88.ExpectedHash.Hash[9] = '\0';
  local_88.ExpectedHash.Hash[10] = '\0';
  local_88.ExpectedHash.Hash[0xb] = '\0';
  local_88.ExpectedHash.Hash[0xc] = '\0';
  local_88.ExpectedHash.Hash[0xd] = '\0';
  local_88.ExpectedHash.Hash[0xe] = '\0';
  local_88.ExpectedHash.Hash[0xf] = '\0';
  local_88.ActualHash.Hash[0] = '\0';
  local_88.ActualHash.Hash[1] = '\0';
  local_88.ActualHash.Hash[2] = '\0';
  local_88.ActualHash.Hash[3] = '\0';
  local_88.ActualHash.Hash[4] = '\0';
  local_88.ActualHash.Hash[5] = '\0';
  local_88.ActualHash.Hash[6] = '\0';
  local_88.ActualHash.Hash[7] = '\0';
  local_88.ActualHash.Hash[8] = '\0';
  local_88.ActualHash.Hash[9] = '\0';
  local_88.ActualHash.Hash[10] = '\0';
  local_88.ActualHash.Hash[0xb] = '\0';
  local_88.ActualHash.Hash[0xc] = '\0';
  local_88.ActualHash.Hash[0xd] = '\0';
  local_88.ActualHash.Hash[0xe] = '\0';
  local_88.ActualHash.Hash[0xf] = '\0';
  local_88.BlockIndex = -1;
  local_b4 = param_2;
  local_98 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)&(this->IoStore).RwLock);
  local_b0 = param_1->BackendData;
  lVar2 = *(longlong *)((longlong)local_b0 + 0x10);
  local_a8.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       TArrayView<FIoStoreTocCompressedBlockEntry_const_,int>::operator[]
                 ((TArrayView<FIoStoreTocCompressedBlockEntry_const_,int> *)(lVar2 + 0x1f0),param_2)
  ;
  pvVar4 = local_b0;
  iVar1 = *(int *)(lVar2 + 0x1d8);
  lVar9 = *(longlong *)(lVar2 + 0x1d0);
  lVar10 = (longlong)iVar1 * 0x30 + lVar9;
  while( true ) {
    if (*(int *)(lVar2 + 0x1d8) != iVar1) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<UE::IoStore::FContainerPartition_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_b8);
    }
    if ((lVar9 == lVar10) || (*(longlong *)(lVar9 + 0x18) == *(longlong *)((longlong)pvVar4 + 0x28))
       ) break;
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 0x30;
  }
  if (2 < (byte)LogIoStore._0_1_) {
    uVar6 = 0;
    if ((int)uVar8 < *(int *)(lVar2 + 0x1d8)) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::LexToString(&local_a8,&local_98->ChunkId);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStore);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if (&local_88 != (FIoSignatureError *)(lVar2 + 0x210)) {
    iVar1 = *(int *)(lVar2 + 0x218);
    _Src = (((FIoSignatureError *)(lVar2 + 0x210))->ContainerName).Data.AllocatorInstance.Data;
    local_88.ContainerName.Data.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_88.ContainerName.Data.ArrayMax == 0)) {
      local_88.ContainerName.Data.ArrayNum = 0;
      local_88.ContainerName.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,local_88.ContainerName.Data.ArrayMax,(ForAnyElementType *)&local_88,iVar1
                 ,&local_88.ContainerName.Data.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_88.ContainerName.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      }
    }
  }
  local_88.BlockIndex = local_b4;
  pFVar7 = TArrayView<FSHAHash_const_,int>::operator[]
                     ((TArrayView<FSHAHash_const_,int> *)(lVar2 + 0x200),local_b4);
  local_88.ExpectedHash.Hash._0_8_ = *(undefined8 *)pFVar7->Hash;
  local_88.ExpectedHash.Hash._8_8_ = *(undefined8 *)(pFVar7->Hash + 8);
  local_88.ExpectedHash.Hash._16_4_ = *(undefined4 *)(pFVar7->Hash + 0x10);
  ReleaseSRWLockExclusive((PSRWLOCK)&(this->IoStore).RwLock);
  if ((this->BackendContext).Object == (FIoDispatcherBackendContext *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("BackendContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FileIoDispatcherBackend.cpp"
                       ,0x423,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this->BackendContext).Object == (FIoDispatcherBackendContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &((this->BackendContext).Object)->SignatureErrorDelegate);
  if (bVar5) {
    if (((this->BackendContext).Object == (FIoDispatcherBackendContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TMulticastDelegate<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy>::
    Broadcast(&((this->BackendContext).Object)->SignatureErrorDelegate,&local_88);
  }
  if (local_88.ContainerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ContainerName.Data.AllocatorInstance.Data);
  }
  return;
}

// Initialize @ 142a7c300

void __thiscall
UE::IoStore::FFileIoDispatcherBackend::Initialize
          (FFileIoDispatcherBackend *this,TSharedRef<FIoDispatcherBackendContext_const_,1> *param_1)

{
  FIoDispatcherBackendContext *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->BackendContext != (TSharedPtr<FIoDispatcherBackendContext_const_,1> *)&local_18) {
    (this->BackendContext).Object = local_18;
    local_18 = (FIoDispatcherBackendContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BackendContext).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Mount @ 142a84060

TIoStatusOr<FIoContainerHeader> * __thiscall
UE::IoStore::FFileIoDispatcherBackend::Mount
          (FFileIoDispatcherBackend *this,TIoStatusOr<FIoContainerHeader> *__return_storage_ptr__,
          wchar_t *param_1,int param_2,FGuid *param_3,FAESKey *param_4,ETocMountOptions param_5)

{
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name690,L"FileSystem/FileIoStore");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name690,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name690,true);
  FFileIoStore::Mount(&this->IoStore,__return_storage_ptr__,param_1,param_2);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// OpenMapped @ 142a89190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TIoStatusOr<FIoMappedRegion> * __thiscall
UE::IoStore::FFileIoDispatcherBackend::OpenMapped
          (FFileIoDispatcherBackend *this,TIoStatusOr<FIoMappedRegion> *__return_storage_ptr__,
          FIoChunkId *param_1,FIoReadOptions *param_2)

{
  FPlatformRWLock *SRWLock;
  TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_> *pTVar1;
  IMappedFileHandle *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FIoStatus *pFVar6;
  FIoStoreTocCompressedBlockEntry *pFVar7;
  FContainerPartition *pFVar8;
  TIoStatusOr<FIoMappedRegion> *pTVar9;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar10;
  undefined8 *puVar11;
  longlong lVar12;
  TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_> TVar13;
  ulonglong uVar14;
  wchar_t *pwVar15;
  ulonglong uVar16;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  ulong64 local_e8;
  TStringView<wchar_t> local_e0;
  FChunkInfo local_d0;
  longlong local_c0;
  FIoStatus local_b8;
  FIoStatus local_a8;
  FIoStatus local_98;
  FIoStatus local_88;
  TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_> local_78 [3];
  byte local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (param_2->TargetVa != (void *)0x0) {
    local_e0.Size = 0x14;
    local_e0.DataPtr = L"Invalid read options";
    pFVar6 = FIoStatus::FIoStatus(&local_b8,InvalidParameter,&local_e0);
    TIoStatusOr<FIoMappedRegion>::TIoStatusOr<FIoMappedRegion>(__return_storage_ptr__,pFVar6);
    return __return_storage_ptr__;
  }
  SRWLock = &(this->IoStore).RwLock;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  FFileIoStore::GetChunkInfo(&this->IoStore,&local_d0,param_1);
  if (local_d0.Container == (FContainer *)0x0) {
    pFVar6 = FIoStatus::FIoStatus(&local_a8,NotFound);
    TIoStatusOr<FIoMappedRegion>::TIoStatusOr<FIoMappedRegion>(__return_storage_ptr__,pFVar6);
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    return __return_storage_ptr__;
  }
  uVar16 = (ulonglong)
           CONCAT41(CONCAT31(CONCAT21(CONCAT11((local_d0.OffsetLength)->OffsetAndLength[5],
                                               (local_d0.OffsetLength)->OffsetAndLength[6]),
                                      (local_d0.OffsetLength)->OffsetAndLength[7]),
                             (local_d0.OffsetLength)->OffsetAndLength[8]),
                    (local_d0.OffsetLength)->OffsetAndLength[9]) - param_2->RequestedOffset;
  if (param_2->RequestedSize < uVar16) {
    uVar16 = param_2->RequestedSize;
  }
  iVar5 = IntCastChecked<int,unsigned___int64>
                    (((ulonglong)
                      CONCAT41(CONCAT31(CONCAT21(CONCAT11((local_d0.OffsetLength)->OffsetAndLength
                                                          [0],(local_d0.OffsetLength)->
                                                              OffsetAndLength[1]),
                                                 (local_d0.OffsetLength)->OffsetAndLength[2]),
                                        (local_d0.OffsetLength)->OffsetAndLength[3]),
                               (local_d0.OffsetLength)->OffsetAndLength[4]) +
                     param_2->RequestedOffset) / (local_d0.Container)->CompressionBlockSize);
  local_e8 = 0xffffffffffffffff;
  pFVar7 = TArrayView<FIoStoreTocCompressedBlockEntry_const_,int>::operator[]
                     (&(local_d0.Container)->CompressionBlocks,iVar5);
  pFVar8 = FContainer::GetPartition
                     (local_d0.Container,*(ulonglong *)pFVar7->Data & 0xffffffffff,&local_e8,
                      (int *)0x0);
  if (((local_e8 & 0xfff) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAligned(BlockOffsetInPartition, FPlatformProperties::GetMemoryMappingAlignment())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FileIoDispatcherBackend.cpp"
                         ,0x3e9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar9 = (TIoStatusOr<FIoMappedRegion> *)(*pcVar3)();
    return pTVar9;
  }
  pTVar1 = &pFVar8->MappedFileHandle;
  if ((pFVar8->MappedFileHandle).Ptr == (IMappedFileHandle *)0x0) {
    this_00 = FPlatformFileManager::Get();
    pIVar10 = FPlatformFileManager::GetPlatformFile(this_00);
    if ((pFVar8->Filename).Data.ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar8->Filename).Data.AllocatorInstance.Data;
    }
    local_f8 = 0;
    (**(code **)((longlong)*pIVar10 + 0x1b0))(pIVar10,local_78,pwVar15,0);
    uVar14 = (ulonglong)local_60;
    if ((2 < uVar14) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TIoStatusOr<FIoMappedRegion> *)(*pcVar3)();
      return pTVar9;
    }
    if ((&`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
          ::__l2::bIsSameType)[uVar14] == '\0') {
      if ((local_60 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TIoStatusOr<FIoMappedRegion> *)(*pcVar3)();
        return pTVar9;
      }
      TVar13.Ptr = local_78[0].Ptr;
      local_78[0].Ptr = (IMappedFileHandle *)0x0;
      if ((2 < local_60) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TIoStatusOr<FIoMappedRegion> *)(*pcVar3)();
        return pTVar9;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_60])(local_78);
      local_60 = 2;
      if (pTVar1 == (TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_> *)&local_c0) {
        if (TVar13.Ptr != (IMappedFileHandle *)0x0) {
          puVar11 = (undefined8 *)(TVar13.Ptr)->_padding_;
          goto LAB_142a89498;
        }
      }
      else {
        pIVar2 = pTVar1->Ptr;
        pTVar1->Ptr = TVar13.Ptr;
        if (pIVar2 != (IMappedFileHandle *)0x0) {
          puVar11 = (undefined8 *)pIVar2->_padding_;
          TVar13.Ptr = pIVar2;
LAB_142a89498:
          (*(code *)*puVar11)(TVar13.Ptr,1);
        }
      }
    }
    uVar14 = (ulonglong)local_60;
    if ((2 < local_60) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TIoStatusOr<FIoMappedRegion> *)(*pcVar3)();
      return pTVar9;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar14])(local_78);
  }
  pIVar2 = pTVar1->Ptr;
  if (pIVar2 == (IMappedFileHandle *)0x0) {
    pFVar6 = &local_98;
  }
  else {
    lVar12 = (**(code **)(pIVar2->_padding_ + 8))
                       (pIVar2,param_2->RequestedOffset + local_e8,uVar16,0);
    if (lVar12 != 0) {
      pIVar2 = pTVar1->Ptr;
      FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
      *(IMappedFileHandle **)(__return_storage_ptr__->Value).Pad = pIVar2;
      *(longlong *)((__return_storage_ptr__->Value).Pad + 8) = lVar12;
      goto LAB_142a89544;
    }
    pFVar6 = &local_88;
  }
  pFVar6 = FIoStatus::FIoStatus(pFVar6,FileOpenFailed);
  TIoStatusOr<FIoMappedRegion>::TIoStatusOr<FIoMappedRegion>(__return_storage_ptr__,pFVar6);
LAB_142a89544:
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return __return_storage_ptr__;
}

// ReopenAllFileHandles @ 142a98920

void __thiscall
UE::IoStore::FFileIoDispatcherBackend::ReopenAllFileHandles(FFileIoDispatcherBackend *this)

{
  FFileIoStore::ReopenAllFileHandles(&this->IoStore);
  return;
}

// ResolveIoRequests @ 142a9aec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests
          (FFileIoDispatcherBackend *this,TIntrusiveList<UE::Private::FIoRequestListTraits> *param_1
          ,TIntrusiveList<UE::Private::FIoRequestListTraits> *param_2)

{
  FScriptContainerElement *pFVar1;
  FElement *pFVar2;
  FMutex *pFVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  atomic<unsigned_char> aVar6;
  EIoContainerFlags EVar7;
  ushort uVar8;
  int iVar9;
  FIoRequestImpl *pFVar10;
  FIoRequestImpl *pFVar11;
  FContainer *this_00;
  FIoStoreTocCompressedBlockEntry *pFVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  code *pcVar17;
  TIntrusiveList<UE::Private::FIoRequestListTraits> *pTVar18;
  undefined8 uVar19;
  bool bVar20;
  int iVar21;
  FIoOffsetAndLength *pFVar22;
  FSlab *pFVar23;
  ulong64 *puVar24;
  ulong64 *puVar25;
  FContainerPartition *pFVar26;
  IPlatformIoDispatcher *pIVar27;
  longlong *plVar28;
  FSHAHash *pFVar29;
  ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams> FVar30;
  longlong lVar31;
  longlong lVar32;
  undefined ***pppuVar33;
  FSlab *pFVar34;
  FSHAHash *pFVar35;
  uint uVar36;
  FScriptContainerElement *pFVar37;
  ulonglong uVar38;
  uint uVar39;
  FIoRequestImpl *pFVar40;
  FAESKey *pFVar41;
  FPlatformRWLock *pFVar42;
  FFileIoDispatcherBackend *pFVar43;
  TOptional<FIoBuffer> *pTVar44;
  ulonglong uVar45;
  uint uVar46;
  undefined1 auStack_3b8 [32];
  ulong64 *local_398;
  ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams> local_390;
  longlong local_388;
  longlong local_380;
  undefined8 local_378;
  undefined1 local_368 [8];
  TIntrusiveList<UE::Private::FIoRequestListTraits> *local_360;
  FFileIoDispatcherBackend *local_358;
  FIoRequestImpl *local_350;
  longlong local_348;
  FPlatformRWLock *local_340;
  longlong local_338;
  uint local_330;
  undefined8 local_328;
  ulong64 local_320;
  FIoRequestImpl *local_318;
  ulong64 local_310;
  ulonglong local_308;
  longlong local_300;
  longlong local_2f8;
  FIoOffsetAndLength *pFStack_2f0;
  ulonglong local_2e8;
  ulong64 local_2e0;
  uint uStack_2d8;
  undefined4 uStack_2d4;
  FPlatformRWLock *local_2d0;
  ulonglong uStack_2c8;
  longlong local_2c0;
  uint uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  FAESKey *pFStack_2a8;
  ulonglong local_2a0;
  FSHAHash *pFStack_298;
  FSHAHash *local_290;
  ulong64 local_288;
  TOptional<FIoBuffer> *local_280;
  longlong local_278;
  longlong local_270;
  FIoRequestImpl *local_268;
  undefined1 local_260 [8];
  undefined1 local_258 [8];
  FString local_250;
  code *local_238;
  undefined **local_228;
  FFileIoDispatcherBackend *local_220;
  undefined ***local_210;
  code *local_208;
  undefined **local_1f8;
  FFileIoDispatcherBackend *local_1f0;
  undefined ***local_1e0;
  ulong64 local_1d8;
  TOptional<FIoBuffer> *local_1d0;
  longlong local_1c8;
  FIoRequestImpl *local_1c0;
  int local_1b8;
  ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams> local_1b0;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  local_340 = &(this->IoStore).RwLock;
  local_350 = (FIoRequestImpl *)0x0;
  local_360 = param_1;
  local_358 = this;
  AcquireSRWLockShared((PSRWLOCK)local_340);
  pFVar40 = (FIoRequestImpl *)0x0;
  do {
    pFVar10 = param_1->Head;
    if (pFVar10 == (FIoRequestImpl *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)local_340);
      pFVar43 = local_358;
      while( true ) {
        local_318 = local_350;
        if (local_350 == (FIoRequestImpl *)0x0) {
          return;
        }
        pFVar40 = local_350->NextRequest;
        local_350->NextRequest = (FIoRequestImpl *)0x0;
        pTVar44 = &local_350->Buffer;
        plVar28 = local_350->BackendData;
        if ((local_350->Buffer).bIsSet == false) {
          pTVar44 = (TOptional<FIoBuffer> *)(plVar28 + 1);
        }
        this_00 = (FContainer *)plVar28[2];
        auVar13._8_8_ = 0;
        auVar13._0_8_ = this_00->CompressionBlockSize;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = plVar28[6];
        puVar24 = SUB168(auVar15 / auVar13,0);
        uVar36 = SUB164(auVar15 / auVar13,0);
        local_360 = (TIntrusiveList<UE::Private::FIoRequestListTraits> *)plVar28;
        local_350 = pFVar40;
        if (((puVar24 != (ulong64 *)(longlong)(int)uVar36) || ((int)uVar36 < 0)) &&
           (local_398 = puVar24,
           bVar20 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
           bVar20)) break;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = this_00->CompressionBlockSize;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = plVar28[6] + plVar28[7] + -1;
        puVar25 = SUB168(auVar16 / auVar14,0);
        iVar21 = SUB164(auVar16 / auVar14,0);
        if (((puVar25 != (ulong64 *)(longlong)iVar21) || (iVar21 < 0)) &&
           (local_398 = puVar25,
           bVar20 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
           bVar20)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        iVar9 = (this_00->CompressionBlocks).ArrayNum;
        pFVar42 = (FPlatformRWLock *)
                  (plVar28[6] - (longlong)(int)uVar36 * this_00->CompressionBlockSize);
        uVar39 = 0;
        if ((int)uVar36 < iVar9) {
          uVar39 = ~uVar36 >> 0x1f;
        }
        local_340 = pFVar42;
        if (uVar39 == 0) {
          local_398 = (ulong64 *)(longlong)(int)uVar36;
          local_390 = (ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>)
                      (longlong)iVar9;
          bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar20) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
        }
        local_310 = 0xffffffffffffffff;
        local_348 = (longlong)(int)uVar36 * 0xc;
        pFVar26 = FContainer::GetPartition
                            (this_00,*(ulonglong *)
                                      (this_00->CompressionBlocks).DataPtr[(int)uVar36].Data &
                                     0xffffffffff,&local_310,(int *)0x0);
        *(ulong64 *)((longlong)local_360 + 0x28) = (pFVar26->FileHandle).Handle;
        LOCK();
        this_00->ActiveReadCount = (atomic<int>)((int)this_00->ActiveReadCount + 1);
        UNLOCK();
        pIVar27 = FPlatformIoDispatcher::Get();
        local_210 = (undefined ***)0x0;
        local_228 = &Core::Private::Function::
                     TFunction_OwnedObject<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::`31'::<lambda_1>,1,0>
                     ::_vftable_;
        local_238 = Core::Private::Function::
                    TFunctionRefCaller<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::__l31::<lambda_1>,void,UE::FIoFileReadResult_&&>
                    ::Call;
        local_288 = (pFVar26->FileHandle).Handle;
        local_320 = local_310;
        local_278 = (longlong)&(pFVar42->Mutex).Mutex.Ptr + local_310;
        local_270 = *(longlong *)((longlong)local_360 + 0x38);
        local_268 = local_318;
        local_280 = pTVar44;
        local_220 = pFVar43;
        plVar28 = (longlong *)(**(code **)((longlong)*pIVar27 + 0x28))(pIVar27,local_260,&local_288)
        ;
        *(longlong *)((longlong)local_360 + 0x20) = *plVar28;
        if (local_238 != (code *)0x0) {
          pppuVar33 = &local_228;
          if (local_210 != (undefined ***)0x0) {
            pppuVar33 = local_210;
          }
          (*(code *)(*pppuVar33)[2])();
        }
        if (*(longlong *)((longlong)local_360 + 0x20) == 0) {
          LOCK();
          this_00->ActiveReadCount = (atomic<int>)((int)this_00->ActiveReadCount + -1);
          UNLOCK();
          local_1c8 = *(longlong *)((longlong)local_360 + 0x38);
          local_1d8 = (pFVar26->FileHandle).Handle;
          local_1b8 = local_318->Priority;
          local_1c0 = local_318;
          local_1b0.SecondaryData =
               (ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>)0x0;
          local_48 = 0;
          local_44 = 4;
          local_308 = *(ulonglong *)((longlong)local_360 + 0x38);
          local_300 = 0;
          local_1d0 = pTVar44;
          if ((longlong)(int)uVar36 <= (longlong)iVar21) {
            local_338 = ((longlong)iVar21 - (longlong)(int)uVar36) + 1;
            do {
              uVar38 = local_308;
              iVar21 = (this_00->CompressionBlocks).ArrayNum;
              uVar39 = (uint)puVar24;
              uVar36 = 0;
              if ((int)uVar39 < iVar21) {
                uVar36 = ~uVar39 >> 0x1f;
              }
              if (uVar36 == 0) {
                local_398 = (ulong64 *)(longlong)(int)uVar39;
                local_390 = (ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>)
                            (longlong)iVar21;
                bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar20) {
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
              }
              pFVar41 = (FAESKey *)0x0;
              pFVar12 = (this_00->CompressionBlocks).DataPtr;
              uVar36 = *(uint *)(pFVar12->Data + local_348 + 8);
              local_2e8 = (ulonglong)(uVar36 & 0xffffff);
              uVar46 = *(uint *)(pFVar12->Data + local_348 + 4) >> 8;
              local_330 = uVar46 + 0xf & 0xfffffff0;
              EVar7 = this_00->ContainerFlags;
              if (local_2e8 - (longlong)pFVar42 < uVar38) {
                uVar38 = local_2e8 - (longlong)pFVar42;
              }
              if ((EVar7 & Encrypted) != None) {
                pFVar41 = &this_00->EncryptionKey;
              }
              local_328 = 0;
              uVar45 = (ulonglong)(-(uint)((EVar7 & Encrypted) != None) & 0x20);
              if ((EVar7 & Compressed) != None) {
                iVar21 = (this_00->CompressionMethods).ArrayNum;
                uVar36 = uVar36 >> 0x18;
                if (iVar21 <= (int)uVar36) {
                  local_398 = (ulong64 *)(ulonglong)uVar36;
                  local_390 = (ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>)
                              (longlong)iVar21;
                  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar20) {
                    pcVar17 = (code *)swi(3);
                    (*pcVar17)();
                    return;
                  }
                }
                local_328 = *(undefined8 *)
                             ((this_00->CompressionMethods).AllocatorInstance.Data +
                             (ulonglong)uVar36 * 8);
              }
              uVar19 = local_328;
              pFVar29 = (FSHAHash *)0x0;
              pFVar35 = pFVar29;
              if ((this_00->ContainerFlags & Signed) != None) {
                iVar21 = (this_00->CompressionBlockHashes).ArrayNum;
                uVar36 = 0;
                if ((int)uVar39 < iVar21) {
                  uVar36 = ~uVar39 >> 0x1f;
                }
                if (uVar36 == 0) {
                  local_398 = (ulong64 *)(longlong)(int)uVar39;
                  local_390 = (ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>)
                              (longlong)iVar21;
                  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                  ;
                  if (bVar20) {
                    pcVar17 = (code *)swi(3);
                    (*pcVar17)();
                    return;
                  }
                }
                pFVar35 = (FSHAHash *)0x14;
                pFVar29 = (this_00->CompressionBlockHashes).DataPtr + (int)uVar39;
              }
              lVar31 = local_300;
              local_2e0 = local_320;
              uStack_2d4 = (undefined4)local_2e8;
              local_2d0 = local_340;
              FVar30 = (ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>)&local_1b0
              ;
              if (local_1b0.SecondaryData !=
                  (ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>)0x0) {
                FVar30 = local_1b0.SecondaryData;
              }
              local_2c0 = local_300;
              uStack_2b4 = (undefined4)uVar19;
              uStack_2b0 = (undefined4)((ulonglong)uVar19 >> 0x20);
              uStack_2d8 = uVar46;
              uStack_2c8 = uVar38;
              uStack_2b8 = uVar39;
              pFStack_2a8 = pFVar41;
              local_2a0 = uVar45;
              pFStack_298 = pFVar29;
              local_290 = pFVar35;
              if ((ulonglong)FVar30 <= &local_2e0) {
                FVar30 = (ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>)
                         &local_1b0;
                if (local_1b0.SecondaryData !=
                    (ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>)0x0) {
                  FVar30 = local_1b0.SecondaryData;
                }
                if (&local_2e0 < (ulong64 *)((longlong)local_44 * 0x58 + (longlong)FVar30)) {
                  local_380 = (longlong)local_48;
                  local_378 = 0x58;
                  local_398 = &local_2e0;
                  local_390 = (ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>)
                              &local_1b0;
                  if (local_1b0.SecondaryData !=
                      (ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>)0x0) {
                    local_390 = local_1b0.SecondaryData;
                  }
                  local_388 = (longlong)local_44;
                  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar20) {
                    pcVar17 = (code *)swi(3);
                    (*pcVar17)();
                    return;
                  }
                }
              }
              if (local_48 == local_44) {
                local_48 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>_>
                                     (0x858,&local_1b0,&local_44);
              }
              FVar30 = (ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>)&local_1b0
              ;
              if (local_1b0.SecondaryData !=
                  (ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>)0x0) {
                FVar30 = local_1b0.SecondaryData;
              }
              lVar32 = (longlong)local_48 * 0x58;
              pFVar42 = (FPlatformRWLock *)0x0;
              local_320 = local_320 + local_330;
              local_308 = local_308 - uVar38;
              local_300 = lVar31 + uVar38;
              local_348 = local_348 + 0xc;
              local_48 = local_48 + 1;
              *(ulong64 *)(lVar32 + (longlong)FVar30) = local_2e0;
              ((ulong64 *)(lVar32 + (longlong)FVar30))[1] = CONCAT44(uStack_2d4,uStack_2d8);
              puVar24 = (ulong64 *)(ulonglong)(uVar39 + 1);
              local_338 = local_338 + -1;
              local_340 = (FPlatformRWLock *)0x0;
              puVar4 = (undefined8 *)(lVar32 + 0x10 + (longlong)FVar30);
              *puVar4 = local_2d0;
              puVar4[1] = uStack_2c8;
              plVar28 = (longlong *)(lVar32 + 0x20 + (longlong)FVar30);
              *plVar28 = local_2c0;
              plVar28[1] = CONCAT44(uStack_2b4,uStack_2b8);
              puVar4 = (undefined8 *)(lVar32 + 0x30 + (longlong)FVar30);
              *puVar4 = CONCAT44(uStack_2ac,uStack_2b0);
              puVar4[1] = pFStack_2a8;
              puVar5 = (ulonglong *)(lVar32 + 0x40 + (longlong)FVar30);
              *puVar5 = local_2a0;
              puVar5[1] = (ulonglong)pFStack_298;
              *(FSHAHash **)(lVar32 + 0x50 + (longlong)FVar30) = local_290;
            } while (local_338 != 0);
            local_338 = 0;
          }
          pFVar40 = local_318;
          pTVar18 = local_360;
          LOCK();
          this_00->ActiveReadCount = (atomic<int>)((int)this_00->ActiveReadCount + 1);
          UNLOCK();
          pIVar27 = FPlatformIoDispatcher::Get();
          pFVar43 = local_358;
          local_1e0 = (undefined ***)0x0;
          local_1f0 = local_358;
          local_1f8 = &Core::Private::Function::
                       TFunction_OwnedObject<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::`30'::<lambda_2>,1,0>
                       ::_vftable_;
          local_208 = Core::Private::Function::
                      TFunctionRefCaller<`UE::IoStore::FFileIoDispatcherBackend::ResolveIoRequests'::__l30::<lambda_2>,void,UE::FIoFileReadResult_&&>
                      ::Call;
          plVar28 = (longlong *)
                    (**(code **)((longlong)*pIVar27 + 0x20))(pIVar27,local_258,&local_1d8);
          *(longlong *)((longlong)pTVar18 + 0x20) = *plVar28;
          if (local_208 != (code *)0x0) {
            pppuVar33 = &local_1f8;
            if (local_1e0 != (undefined ***)0x0) {
              pppuVar33 = local_1e0;
            }
            (*(code *)(*pppuVar33)[2])();
          }
          if (*(longlong *)((longlong)pTVar18 + 0x20) == 0) {
            if (2 < (byte)LogIoStore._0_1_) {
              ::LexToString(&local_250,(FIoChunkId *)(*(longlong *)pTVar18 + 0x38));
              Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStore);
              if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_250.Data.AllocatorInstance.Data);
              }
            }
            if (*(int *)(*(longlong *)pTVar18 + 0xd8) != 3) {
              *(undefined4 *)(*(longlong *)pTVar18 + 0xd8) = 6;
            }
            LOCK();
            bVar20 = (pFVar43->Mutex).State == (atomic<unsigned_char>)0x0;
            if (bVar20) {
              (pFVar43->Mutex).State = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            if (!bVar20) {
              FMutex::LockSlow(&pFVar43->Mutex);
            }
            if ((pFVar40->NextRequest != (FIoRequestImpl *)0x0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                    ,0x72,L""), bVar20)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pFVar10 = (pFVar43->CompletedDispatcherRequests).Head;
            if ((pFVar43->CompletedDispatcherRequests).Tail == (FIoRequestImpl *)0x0) {
              if ((pFVar10 != (FIoRequestImpl *)0x0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Head == nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                      ,0x7c,L""), bVar20)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              (pFVar43->CompletedDispatcherRequests).Head = pFVar40;
            }
            else {
              if ((pFVar10 == (FIoRequestImpl *)0x0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Head != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                      ,0x76,L""), bVar20)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              ((pFVar43->CompletedDispatcherRequests).Tail)->NextRequest = pFVar40;
            }
            (pFVar43->CompletedDispatcherRequests).Tail = pFVar40;
            LOCK();
            pFVar3 = &pFVar43->Mutex;
            aVar6 = pFVar3->State;
            pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
            UNLOCK();
            if (((byte)aVar6 & 2) != 0) {
              FMutex::WakeWaitingThread(&pFVar43->Mutex);
            }
          }
          if (local_1b0.SecondaryData !=
              (ForElementType<UE::FIoScatterGatherRequestParams::FScatterParams>)0x0) {
            FMemory::Free((void *)local_1b0.SecondaryData);
          }
        }
      }
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pFVar11 = pFVar10->NextRequest;
    param_1->Head = pFVar11;
    if (pFVar11 == (FIoRequestImpl *)0x0) {
      param_1->Tail = (FIoRequestImpl *)0x0;
    }
    pFVar10->NextRequest = (FIoRequestImpl *)0x0;
    pFVar37 = (this->IoStore).MountedContainers.AllocatorInstance.Data;
    iVar21 = (this->IoStore).MountedContainers.ArrayNum;
    pFVar1 = pFVar37 + (longlong)iVar21 * 8;
    while( true ) {
      if ((local_358->IoStore).MountedContainers.ArrayNum != iVar21) {
        local_368[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_368);
      }
      if (pFVar37 == pFVar1) {
        local_2f8 = 0;
        pFStack_2f0 = (FIoOffsetAndLength *)0x0;
        goto LAB_142a9b374;
      }
      pFVar22 = FChunkLookup::Find((FChunkLookup *)(*(longlong *)pFVar37 + 0x148),&pFVar10->ChunkId)
      ;
      this = local_358;
      if (pFVar22 != (FIoOffsetAndLength *)0x0) break;
      pFVar37 = pFVar37 + 8;
    }
    local_2f8 = *(longlong *)pFVar37;
    pFStack_2f0 = pFVar22;
    if (local_2f8 == 0) {
LAB_142a9b374:
      if ((pFVar10->NextRequest != (FIoRequestImpl *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                              ,0x72,L""), bVar20)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      if (param_2->Tail == (FIoRequestImpl *)0x0) {
        if ((param_2->Head != (FIoRequestImpl *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Head == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                ,0x7c,L""), bVar20)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        param_2->Head = pFVar10;
        param_2->Tail = pFVar10;
        this = local_358;
        param_1 = local_360;
      }
      else {
        if ((param_2->Head == (FIoRequestImpl *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Head != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                ,0x76,L""), bVar20)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        param_2->Tail->NextRequest = pFVar10;
        param_2->Tail = pFVar10;
        this = local_358;
        param_1 = local_360;
      }
    }
    else {
      uVar38 = (ulonglong)
               CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar22->OffsetAndLength[5],
                                                   pFVar22->OffsetAndLength[6]),
                                          pFVar22->OffsetAndLength[7]),pFVar22->OffsetAndLength[8]),
                        pFVar22->OffsetAndLength[9]) - (pFVar10->Options).RequestedOffset;
      if ((pFVar10->Options).RequestedSize < uVar38) {
        uVar38 = (pFVar10->Options).RequestedSize;
      }
      if ((longlong)uVar38 < 1) {
        if ((longlong)uVar38 < 0) {
          if (pFVar10->LastBackendError != Cancelled) {
            pFVar10->LastBackendError = ReadError;
          }
        }
        else {
          FIoRequestImpl::CreateBuffer(pFVar10,0);
        }
        this = local_358;
        LOCK();
        bVar20 = (local_358->Mutex).State == (atomic<unsigned_char>)0x0;
        if (bVar20) {
          (local_358->Mutex).State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar20) {
          FMutex::LockSlow(&local_358->Mutex);
        }
        if ((pFVar10->NextRequest != (FIoRequestImpl *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                ,0x72,L""), bVar20)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        pFVar11 = (this->CompletedDispatcherRequests).Head;
        if ((this->CompletedDispatcherRequests).Tail == (FIoRequestImpl *)0x0) {
          if ((pFVar11 != (FIoRequestImpl *)0x0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Head == nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                  ,0x7c,L""), bVar20)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          (this->CompletedDispatcherRequests).Head = pFVar10;
        }
        else {
          if ((pFVar11 == (FIoRequestImpl *)0x0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Head != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                  ,0x76,L""), bVar20)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          ((this->CompletedDispatcherRequests).Tail)->NextRequest = pFVar10;
        }
        param_1 = local_360;
        (this->CompletedDispatcherRequests).Tail = pFVar10;
        LOCK();
        pFVar3 = &this->Mutex;
        aVar6 = pFVar3->State;
        pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
        UNLOCK();
        if (((byte)aVar6 & 2) != 0) {
          FMutex::WakeWaitingThread(&this->Mutex);
        }
      }
      else {
        pFVar23 = (local_358->RequestAllocator).CurrentSlab;
        uVar8 = pFVar23->Allocated;
        pFVar23->Allocated = uVar8 + 1;
        if ((0xfff < uVar8) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("ElementIndex < SlabSize",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                                ,0x36,L""), bVar20)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        pFVar23 = (this->RequestAllocator).CurrentSlab;
        pFVar23->Elements[uVar8].Slab = pFVar23;
        pFVar2 = pFVar23->Elements + uVar8;
        if (((this->RequestAllocator).CurrentSlab)->Allocated == 0x1000) {
          pFVar23 = ::operator_new(0x48008);
          if (pFVar23 == (FSlab *)0x0) {
            pFVar23 = (FSlab *)0x0;
          }
          else {
            memset(&pFVar23->field_0x4,0,0x48004);
            pFVar23->Allocated = 0;
            pFVar23->Freed = 0;
            lVar31 = 0x1000;
            pFVar34 = pFVar23;
            do {
              pFVar34 = (FSlab *)&pFVar34->Elements[0].Slab;
              *(FSlab **)pFVar34 = (FSlab *)0x0;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
          }
          (local_358->RequestAllocator).CurrentSlab = pFVar23;
          this = local_358;
        }
        *(FIoRequestImpl **)(pFVar2->Data).Pad = pFVar10;
        FIoBuffer::FIoBuffer((FIoBuffer *)((pFVar2->Data).Pad + 8));
        (pFVar2->Data).Pad[0x30] = 0xff;
        (pFVar2->Data).Pad[0x31] = 0xff;
        (pFVar2->Data).Pad[0x32] = 0xff;
        (pFVar2->Data).Pad[0x33] = 0xff;
        (pFVar2->Data).Pad[0x34] = 0xff;
        (pFVar2->Data).Pad[0x35] = 0xff;
        (pFVar2->Data).Pad[0x36] = 0xff;
        (pFVar2->Data).Pad[0x37] = 0xff;
        (pFVar2->Data).Pad[0x10] = '\0';
        (pFVar2->Data).Pad[0x11] = '\0';
        (pFVar2->Data).Pad[0x12] = '\0';
        (pFVar2->Data).Pad[0x13] = '\0';
        (pFVar2->Data).Pad[0x14] = '\0';
        (pFVar2->Data).Pad[0x15] = '\0';
        (pFVar2->Data).Pad[0x16] = '\0';
        (pFVar2->Data).Pad[0x17] = '\0';
        (pFVar2->Data).Pad[0x18] = '\0';
        (pFVar2->Data).Pad[0x19] = '\0';
        (pFVar2->Data).Pad[0x1a] = '\0';
        (pFVar2->Data).Pad[0x1b] = '\0';
        (pFVar2->Data).Pad[0x1c] = '\0';
        (pFVar2->Data).Pad[0x1d] = '\0';
        (pFVar2->Data).Pad[0x1e] = '\0';
        (pFVar2->Data).Pad[0x1f] = '\0';
        (pFVar2->Data).Pad[0x20] = '\0';
        (pFVar2->Data).Pad[0x21] = '\0';
        (pFVar2->Data).Pad[0x22] = '\0';
        (pFVar2->Data).Pad[0x23] = '\0';
        (pFVar2->Data).Pad[0x24] = '\0';
        (pFVar2->Data).Pad[0x25] = '\0';
        (pFVar2->Data).Pad[0x26] = '\0';
        (pFVar2->Data).Pad[0x27] = '\0';
        (pFVar2->Data).Pad[0x28] = '\0';
        (pFVar2->Data).Pad[0x29] = '\0';
        (pFVar2->Data).Pad[0x2a] = '\0';
        (pFVar2->Data).Pad[0x2b] = '\0';
        (pFVar2->Data).Pad[0x2c] = '\0';
        (pFVar2->Data).Pad[0x2d] = '\0';
        (pFVar2->Data).Pad[0x2e] = '\0';
        (pFVar2->Data).Pad[0x2f] = '\0';
        lVar31 = *(longlong *)(pFVar2->Data).Pad;
        (pFVar2->Data).Pad[0x38] = 0xff;
        (pFVar2->Data).Pad[0x39] = 0xff;
        (pFVar2->Data).Pad[0x3a] = 0xff;
        (pFVar2->Data).Pad[0x3b] = 0xff;
        (pFVar2->Data).Pad[0x3c] = 0xff;
        (pFVar2->Data).Pad[0x3d] = 0xff;
        (pFVar2->Data).Pad[0x3e] = 0xff;
        (pFVar2->Data).Pad[0x3f] = 0xff;
        if ((*(longlong *)(lVar31 + 0x30) != 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("DispatcherRequest.BackendData == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FileIoDispatcherBackend.cpp"
                                ,0x25c,L""), bVar20)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        *(FElement **)(*(longlong *)(pFVar2->Data).Pad + 0x30) = pFVar2;
        *(longlong *)((pFVar2->Data).Pad + 0x10) = local_2f8;
        *(FIoOffsetAndLength **)((pFVar2->Data).Pad + 0x18) = pFStack_2f0;
        *(ulonglong *)((pFVar2->Data).Pad + 0x30) =
             (ulonglong)
             CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar22->OffsetAndLength[0],
                                                 pFVar22->OffsetAndLength[1]),
                                        pFVar22->OffsetAndLength[2]),pFVar22->OffsetAndLength[3]),
                      pFVar22->OffsetAndLength[4]) + (pFVar10->Options).RequestedOffset;
        *(ulonglong *)((pFVar2->Data).Pad + 0x38) = uVar38;
        if ((pFVar10->BackendData == (void *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("DispatcherRequest->BackendData != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FileIoDispatcherBackend.cpp"
                                ,0x2df,L""), bVar20)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        if ((pFVar10->NextRequest != (FIoRequestImpl *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                ,0x72,L""), bVar20)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        if (pFVar40 == (FIoRequestImpl *)0x0) {
          pFVar40 = pFVar10;
          if ((local_350 != (FIoRequestImpl *)0x0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Head == nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                  ,0x7c,L""), bVar20)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
        }
        else {
          if ((local_350 == (FIoRequestImpl *)0x0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Head != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                  ,0x76,L""), bVar20)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          pFVar40->NextRequest = pFVar10;
          pFVar40 = local_350;
        }
        local_350 = pFVar40;
        param_1 = local_360;
        pFVar40 = pFVar10;
        if ((pFVar10->Options).TargetVa != (void *)0x0) {
          FIoRequestImpl::CreateBuffer(pFVar10,*(ulong64 *)((pFVar2->Data).Pad + 0x38));
        }
      }
    }
  } while( true );
}

// Shutdown @ 142aa0560

void __thiscall UE::IoStore::FFileIoDispatcherBackend::Shutdown(FFileIoDispatcherBackend *this)

{
  return;
}

// Unmount @ 142aa8350

bool __thiscall
UE::IoStore::FFileIoDispatcherBackend::Unmount(FFileIoDispatcherBackend *this,wchar_t *param_1)

{
  bool bVar1;
  
  bVar1 = FFileIoStore::Unmount(&this->IoStore,param_1);
  return bVar1;
}

// UpdatePriorityForIoRequest @ 142aab320

void __thiscall
UE::IoStore::FFileIoDispatcherBackend::UpdatePriorityForIoRequest
          (FFileIoDispatcherBackend *this,FIoRequestImpl *param_1)

{
  void *pvVar1;
  IPlatformIoDispatcher *pIVar2;
  
  if ((param_1 != (FIoRequestImpl *)0x0) && (pvVar1 = param_1->BackendData, pvVar1 != (void *)0x0))
  {
    pIVar2 = FPlatformIoDispatcher::Get();
    (**(code **)((longlong)*pIVar2 + 0x38))
              (pIVar2,*(undefined8 *)((longlong)pvVar1 + 0x20),param_1->Priority);
  }
  return;
}


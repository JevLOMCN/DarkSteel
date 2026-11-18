// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 16

// FHttpIoDispatcherBackend @ 1445a32a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FHttpIoDispatcherBackend * __thiscall
UE::IoStore::FHttpIoDispatcherBackend::FHttpIoDispatcherBackend
          (FHttpIoDispatcherBackend *this,FOnDemandIoStore *param_1)

{
  FString local_28;
  FString local_18;
  
  (this->BackendStatus).Flags = (atomic<unsigned_char>)0x0;
  this->_padding_ = (longlong)&___7FHttpIoDispatcherBackend_IoStore_UE__6B_;
  FOnDemandIoBackendStats::FOnDemandIoBackendStats(&this->Stats,&this->BackendStatus);
  this->IoStore = param_1;
  (this->CompletedRequests).Head = (FIoRequestImpl *)0x0;
  (this->CompletedRequests).Tail = (FIoRequestImpl *)0x0;
  (this->Mutex).State = (atomic<unsigned_char>)0x0;
  (this->BackendContext).Object = (FIoDispatcherBackendContext *)0x0;
  (this->BackendContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FBackendStatus::AddOrRemoveFlags(&this->BackendStatus,HttpEnabled,true,L"HTTP streaming enabled");
  ::FString::FString(&local_18,L"true");
  ::FString::FString(&local_28,L"IAS.Enabled");
  FGenericCrashContext::SetEngineData(&local_28,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FBackendStatus::AddOrRemoveFlags(&this->BackendStatus,CacheEnabled,true,L"Cache enabled");
  return this;
}

// CancelIoRequest @ 1445b6780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FHttpIoDispatcherBackend::CancelIoRequest
          (FHttpIoDispatcherBackend *this,FIoRequestImpl *param_1)

{
  if (param_1->BackendData != (void *)0x0) {
    FIoHttpRequest::Cancel((FIoHttpRequest *)((longlong)param_1->BackendData + 0x30));
    return;
  }
  return;
}

// CompleteRequest @ 1445bb700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FHttpIoDispatcherBackend::CompleteRequest
          (FHttpIoDispatcherBackend *this,FResolvedRequest *param_1,FIoHttpResponse *param_2)

{
  FMutex *pFVar1;
  int *piVar2;
  atomic<unsigned_char> aVar3;
  int iVar4;
  EIoErrorCode EVar5;
  BufCore *this_00;
  FIoRequestImpl *this_01;
  BufCore *pBVar6;
  FIoDispatcherBackendContext *this_02;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  ushort uVar10;
  FName FVar11;
  TArrayView<unsigned_int_const_,int> *pTVar12;
  FIoBuffer *pFVar13;
  longlong lVar14;
  longlong *plVar15;
  EIoDecodeFlags EVar16;
  longlong *plVar17;
  bool local_res8;
  LARGE_INTEGER local_res20;
  TMemoryView<void_const_> local_148;
  FIoStatus local_138;
  FIoStatus local_128;
  FIoChunkDecodingParams local_118;
  TMemoryView<void> local_b8;
  FString local_a0;
  FString local_90;
  FReadAccessScope local_80;
  TArrayView<unsigned_int_const_,int> local_68;
  TArrayView<unsigned_int_const_,int> local_58;
  
  this_00 = (param_2->Body).CorePtr.Reference;
  if (this_00 != (BufCore *)0x0) {
    LOCK();
    this_00->NumRefs = this_00->NumRefs + 1;
    UNLOCK();
  }
  this_01 = param_1->DispatcherRequest;
  local_res8 = false;
  EVar5 = this_01->LastBackendError;
  plVar15 = (longlong *)0x0;
  if ((((EVar5 != Cancelled) && (param_2->ErrorCode == Ok)) && (param_2->StatusCode - 200 < 100)) &&
     (this_00->DataSizeHigh != '\0' || this_00->DataSizeLow != 0)) {
    ::FName::FName((FName *)&local_118,L"Oodle");
    local_118._padding_ = 0;
    local_118._padding_ = 0;
    local_118._padding_._0_4_ = 0x10000;
    local_118.TotalRawSize = 0;
    local_118.RawOffset = 0;
    local_118.EncodedOffset = 0;
    local_118.EncodedBlockSize.DataPtr = (uint *)0x0;
    local_118.EncodedBlockSize._8_8_ = local_118.EncodedBlockSize._8_8_ & 0xffffffff00000000;
    local_118.BlockHash.DataPtr = (uint *)0x0;
    local_118.BlockHash._8_8_ = local_118.BlockHash._8_8_ & 0xffffffff00000000;
    if (((param_1->ChunkInfo).SharedContainer.Object == (FOnDemandContainer *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_118._padding_ = (longlong)(param_1->ChunkInfo).SharedContainer.Object;
    local_118._padding_ = 0x20;
    FVar11 = FOnDemandChunkInfo::CompressionFormat(&param_1->ChunkInfo);
    local_118._padding_ = *(longlong *)FVar11;
    local_118._padding_._0_4_ = FOnDemandChunkInfo::BlockSize(&param_1->ChunkInfo);
    local_118.TotalRawSize = (ulong64)((param_1->ChunkInfo).Entry)->RawSize;
    pTVar12 = FOnDemandChunkInfo::Blocks(&param_1->ChunkInfo,&local_68);
    local_118.EncodedBlockSize.DataPtr = pTVar12->DataPtr;
    local_118.EncodedBlockSize._8_8_ = *(undefined8 *)&pTVar12->ArrayNum;
    pTVar12 = FOnDemandChunkInfo::BlockHashes(&param_1->ChunkInfo,&local_58);
    local_118.BlockHash.DataPtr = pTVar12->DataPtr;
    local_118.BlockHash._8_8_ = *(undefined8 *)&pTVar12->ArrayNum;
    local_118.EncodedOffset =
         (ulong64)CONCAT41(CONCAT31(CONCAT21(CONCAT11((param_1->ChunkRange).OffsetAndLength[0],
                                                      (param_1->ChunkRange).OffsetAndLength[1]),
                                             (param_1->ChunkRange).OffsetAndLength[2]),
                                    (param_1->ChunkRange).OffsetAndLength[3]),
                           (param_1->ChunkRange).OffsetAndLength[4]);
    local_118.RawOffset = (this_01->Options).RequestedOffset;
    FIoRequestImpl::CreateBuffer(this_01,(this_01->Options).RequestedSize);
    if ((GIasEnableWriteOnlyDecoding == false) ||
       (((this_01->Options).Flags & HardwareTargetBuffer) == None)) {
      EVar16 = None;
    }
    else {
      EVar16 = WriteOnly;
    }
    pFVar13 = FIoRequestImpl::GetBuffer(this_01);
    pBVar6 = (pFVar13->CorePtr).Reference;
    local_148.Data = this_00->DataPtr;
    local_148.Size = (ulong64)CONCAT14(this_00->DataSizeHigh,this_00->DataSizeLow);
    local_b8.Data = pBVar6->DataPtr;
    local_b8.Size = (ulong64)CONCAT14(pBVar6->DataSizeHigh,pBVar6->DataSizeLow);
    local_res8 = FIoChunkEncoding::Decode(&local_118,&local_148,&local_b8,EVar16);
    if (!local_res8) {
      if ((param_2->Flags & Cached) == None) {
        FOnDemandIoBackendStats::OnHttpDecodeError(&this->Stats,Streaming);
      }
      else {
        FOnDemandIoBackendStats::OnCacheDecodeError(&this->Stats);
        FHttpIoDispatcher::EvictFromCache(&local_138,param_2);
        if ((local_138.ErrorCode != Ok) && (1 < (byte)LogHttpIoDispatcher._0_1_)) {
          FIoStatus::ToString(&local_138,&local_a0);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHttpIoDispatcher);
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
        }
        FIoStatus::~FIoStatus(&local_138);
      }
    }
  }
  plVar17 = plVar15;
  if (param_1->StartTimeCycles != 0) {
    QueryPerformanceCounter(&local_res20);
    lVar14 = 0;
    dVar8 = (double)(local_res20.QuadPart - param_1->StartTimeCycles) *
            FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000;
    if ((__real_43e0000000000000 <= dVar8) &&
       (dVar8 = dVar8 - __real_43e0000000000000, dVar8 < __real_43e0000000000000)) {
      lVar14 = -0x8000000000000000;
    }
    plVar17 = (longlong *)((longlong)dVar8 + lVar14);
  }
  if (local_res8 == false) {
    if (EVar5 == Cancelled) {
      GIoRequestCancelCount.Value = GIoRequestCancelCount.Value + 1;
      if (-1 < CountersChannel->Enabled) {
        if (GIoRequestCancelCount.CounterId == (atomic<unsigned_int>)0x0) {
          uVar10 = FCountersTrace::OutputInitCounter
                             (GIoRequestCancelCount.CounterName,TraceCounterType_Int,
                              GIoRequestCancelCount.CounterFlags & 0xf);
          LOCK();
          if (GIoRequestCancelCount.CounterId == (atomic<unsigned_int>)0x0) {
            GIoRequestCancelCount.CounterId._2_2_ = 0;
            GIoRequestCancelCount.CounterId._0_2_ = uVar10;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (GIoRequestCancelCount.CounterId._0_2_,GIoRequestCancelCount.Value);
      }
      FCsvProfiler::RecordCustomStat
                (&_GCsvStat_FrameIoRequestCancelCount.Name,
                 _GCsvStat_FrameIoRequestCancelCount.CategoryIndex,(int)GIoRequestCancelCount.Value,
                 Set);
    }
    else {
      if (this_01->LastBackendError != Cancelled) {
        this_01->LastBackendError = ReadError;
      }
      FOnDemandIoBackendStats::OnIoRequestError(&this->Stats);
    }
  }
  else {
    if ((param_2->Flags & Cached) == None) {
      FHttpIoDispatcher::CacheResponse(&local_128,param_2);
      if ((1 < (byte)LogHttpIoDispatcher._0_1_) && (local_128.ErrorCode != Ok)) {
        FIoStatus::ToString(&local_128,&local_90);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHttpIoDispatcher);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
      }
      FIoStatus::~FIoStatus(&local_128);
    }
    if (((this_01->Buffer).bIsSet == false) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pBVar6 = (this_01->Buffer).TypedValue.CorePtr.Reference;
    FOnDemandIoBackendStats::OnIoRequestComplete
              (&this->Stats,(ulonglong)CONCAT14(pBVar6->DataSizeHigh,pBVar6->DataSizeLow),
               (ulong64)plVar17);
  }
  LogRequest(param_1,this_01,local_res8,(bool)(param_2->Flags & Cached),EVar5 == Cancelled,
             (ulong64)plVar17);
  LOCK();
  bVar9 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar9) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar9) {
    FMutex::LockSlow(&this->Mutex);
  }
  TIntrusiveList<UE::Private::FIoRequestListTraits>::AddTail(&this->CompletedRequests,this_01);
  LOCK();
  pFVar1 = &this->Mutex;
  aVar3 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  if (((this->BackendContext).Object == (FIoDispatcherBackendContext *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_02 = (this->BackendContext).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,&local_80);
  if (*(int *)&(this_02->WakeUpDispatcherThreadDelegate).field_0x10 != 0) {
    plVar15 = *(longlong **)&(this_02->WakeUpDispatcherThreadDelegate).field_0x8;
  }
  (**(code **)(*plVar15 + 0x60))(plVar15);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  if (this_00 != (BufCore *)0x0) {
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
  return;
}

// DoesChunkExist @ 1445c8960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall
UE::IoStore::FHttpIoDispatcherBackend::DoesChunkExist
          (FHttpIoDispatcherBackend *this,FIoChunkId *param_1)

{
  undefined1 auStack_48 [32];
  FIoStatus local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  (**(code **)(this->_padding_ + 0x48))(this,&local_28,param_1);
  FIoStatus::operator=(&local_28,Unknown);
  FIoStatus::~FIoStatus(&local_28);
  return local_28.ErrorCode == Ok;
}

// DoesChunkExist @ 1445c89c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall
UE::IoStore::FHttpIoDispatcherBackend::DoesChunkExist
          (FHttpIoDispatcherBackend *this,FIoChunkId *param_1,FIoOffsetAndLength *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001445c89c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x38))();
  return (bool)uVar1;
}

// GetCompletedIoRequests @ 1445d3070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FIoRequestImpl * __thiscall
UE::IoStore::FHttpIoDispatcherBackend::GetCompletedIoRequests(FHttpIoDispatcherBackend *this)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  longlong *plVar3;
  short *psVar4;
  code *pcVar5;
  FIoRequestImpl *pFVar6;
  FIoRequestImpl *pFVar7;
  bool bVar8;
  
  LOCK();
  bVar8 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar8) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar8) {
    FMutex::LockSlow(&this->Mutex);
  }
  pFVar7 = (this->CompletedRequests).Head;
  (this->CompletedRequests).Head = (FIoRequestImpl *)0x0;
  (this->CompletedRequests).Tail = (FIoRequestImpl *)0x0;
  LOCK();
  pFVar1 = &this->Mutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  pFVar6 = pFVar7;
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  while( true ) {
    if (pFVar6 == (FIoRequestImpl *)0x0) {
      return pFVar7;
    }
    plVar3 = pFVar6->BackendData;
    if ((*(longlong **)(*plVar3 + 0x30) != plVar3) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ResolvedRequest->DispatcherRequest.BackendData == ResolvedRequest",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispatcherBackend.cpp"
                           ,0x36,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FIoRequestImpl *)(*pcVar5)();
      return pFVar7;
    }
    *(undefined8 *)(*plVar3 + 0x30) = 0;
    FIoHttpRequest::~FIoHttpRequest((FIoHttpRequest *)(plVar3 + 6));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)plVar3[2]);
    psVar4 = (short *)plVar3[8];
    psVar4[1] = psVar4[1] + 1;
    if (psVar4[1] == 0x40) {
      if ((*psVar4 != 0x40) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Slab->Freed == Slab->Allocated",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                             ,0x48,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FIoRequestImpl *)(*pcVar5)();
        return pFVar7;
      }
      ::operator_delete(psVar4,0x1208);
    }
    if ((pFVar6->BackendData != (void *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("R.BackendData == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispatcherBackend.cpp"
                           ,0xce,L""), bVar8)) break;
    pFVar6 = pFVar6->NextRequest;
  }
  pcVar5 = (code *)swi(3);
  pFVar7 = (FIoRequestImpl *)(*pcVar5)();
  return pFVar7;
}

// GetName @ 1445d6660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

wchar_t * __thiscall UE::IoStore::FHttpIoDispatcherBackend::GetName(FHttpIoDispatcherBackend *this)

{
  return L"HttpIoDispatcherBackend";
}

// GetSizeForChunk @ 1445d78b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TIoStatusOr<unsigned___int64> * __thiscall
UE::IoStore::FHttpIoDispatcherBackend::GetSizeForChunk
          (FHttpIoDispatcherBackend *this,TIoStatusOr<unsigned___int64> *__return_storage_ptr__,
          FIoChunkId *param_1)

{
  atomic<unsigned_char> aVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FIoStatus *this_00;
  TIoStatusOr<unsigned___int64> *pTVar5;
  FIoStatus local_38;
  FOnDemandChunkInfo local_28;
  
  FOnDemandIoStore::GetStreamingChunkInfo(this->IoStore,&local_28,param_1);
  if (local_28.SharedContainer.Object != (FOnDemandContainer *)0x0) {
    aVar1 = (this->BackendStatus).Flags;
    if (((((byte)aVar1 & 2) != 0) && (GIasHttpEnabled != false)) &&
       ((param_1->Id[0xb] != '\x03' ||
        ((((byte)aVar1 & 4) == 0 && (GIasHttpOptionalBulkDataEnabled != false)))))) {
      uVar2 = (local_28.Entry)->RawSize;
      FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
      *(ulonglong *)(__return_storage_ptr__->Value).Pad = (ulonglong)uVar2;
      goto LAB_1445d7983;
    }
  }
  this_00 = FIoStatus::FIoStatus(&local_38,UnknownChunkID);
  FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
  if (this_00->ErrorCode == Ok) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TIoStatusOr<unsigned___int64> *)(*pcVar3)();
      return pTVar5;
    }
  }
  FIoStatus::operator=(&__return_storage_ptr__->StatusValue,this_00);
  FIoStatus::~FIoStatus(this_00);
LAB_1445d7983:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedContainer.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Initialize @ 1445da2a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FHttpIoDispatcherBackend::Initialize
          (FHttpIoDispatcherBackend *this,TSharedRef<FIoDispatcherBackendContext_const_,1> *param_1)

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

// LogRequest @ 1445e0e80

/* WARNING: Removing unreachable block (ram,0x0001445e0fed) */
/* WARNING: Removing unreachable block (ram,0x0001445e1014) */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::IoStore::FHttpIoDispatcherBackend::LogRequest
          (FResolvedRequest *param_1,FIoRequestImpl *param_2,bool param_3,bool param_4,bool param_5,
          ulong64 param_6)

{
  code *pcVar1;
  bool bVar2;
  FString local_60;
  FString local_50 [2];
  
  if (!param_5) {
    if (((param_3) && ((param_2->Buffer).bIsSet == false)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (6 < (byte)LogIas._0_1_) {
      ::LexToString(local_50,&((param_1->ChunkInfo).Entry)->Hash);
      ::LexToString(&local_60,&param_2->ChunkId);
      Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OpenMapped @ 1445e8370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TIoStatusOr<FIoMappedRegion> * __thiscall
UE::IoStore::FHttpIoDispatcherBackend::OpenMapped
          (FHttpIoDispatcherBackend *this,TIoStatusOr<FIoMappedRegion> *__return_storage_ptr__,
          FIoChunkId *param_1,FIoReadOptions *param_2)

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

// ReportAnalytics @ 1445f71a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FHttpIoDispatcherBackend::ReportAnalytics
          (FHttpIoDispatcherBackend *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  FOnDemandIoBackendStats::ReportGeneralAnalytics(&this->Stats,param_1);
  FOnDemandIoBackendStats::ReportEndPointAnalytics(&this->Stats,param_1);
  return;
}

// ResolveIoRequests @ 1445fbd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FHttpIoDispatcherBackend::ResolveIoRequests
          (FHttpIoDispatcherBackend *this,TIntrusiveList<UE::Private::FIoRequestListTraits> *param_1
          ,TIntrusiveList<UE::Private::FIoRequestListTraits> *param_2)

{
  FScriptContainerElement *pFVar1;
  FElement *pFVar2;
  int iVar3;
  atomic<unsigned_char> aVar4;
  undefined2 uVar5;
  ushort uVar6;
  FIoRequestImpl *pFVar7;
  FIoRequestImpl *pFVar8;
  FIoRequestImpl *pFVar9;
  TUniqueFunction<void___cdecl(UE::FIoHttpResponse_&&)> *pTVar10;
  code *pcVar11;
  FOnDemandContainer *pFVar12;
  FOnDemandChunkEntry *pFVar13;
  undefined4 uVar14;
  TSingleThreadedSlabAllocator<UE::IoStore::FHttpIoDispatcherBackend::FResolvedRequest,64> TVar15;
  bool bVar16;
  byte bVar17;
  TIoStatusOr<FIoOffsetAndLength> *this_00;
  FSlab *pFVar18;
  FSlab *pFVar19;
  FIoHttpRequest FVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined ***pppuVar24;
  byte bVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  byte bVar33;
  undefined1 auStackY_1a8 [32];
  undefined8 local_168;
  undefined2 local_160;
  FOnDemandChunkInfo local_158;
  undefined4 local_140;
  undefined4 uStack_13c;
  TIntrusiveList<UE::Private::FIoRequestListTraits> *local_138;
  undefined1 local_130 [16];
  undefined1 local_120 [8];
  FName local_118;
  ulong64 local_110;
  LARGE_INTEGER local_108;
  FHttpIoDispatcherBackend *local_100;
  TSharedString<char> local_f8;
  FName local_f0;
  TIntrusiveList<UE::Private::FIoRequestListTraits> *local_e8;
  FScriptContainerElement *local_e0;
  uint uStack_d8;
  undefined4 uStack_d4;
  FIoHttpBatch local_d0;
  FIoHash local_c0;
  undefined1 local_ac;
  TArrayView<unsigned_int_const_,int> local_a8;
  code *local_98;
  undefined **local_88;
  FHttpIoDispatcherBackend *local_80;
  FElement *local_78;
  undefined ***local_70;
  TIoStatusOr<FIoOffsetAndLength> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_138 = param_1;
  local_100 = this;
  local_e8 = param_2;
  FHttpIoDispatcher::NewBatch(&local_d0);
  uVar14 = local_a8._12_4_;
  while (pFVar7 = param_1->Head, pFVar7 != (FIoRequestImpl *)0x0) {
    pFVar8 = pFVar7->NextRequest;
    param_1->Head = pFVar8;
    if (pFVar8 == (FIoRequestImpl *)0x0) {
      param_1->Tail = (FIoRequestImpl *)0x0;
    }
    pFVar7->NextRequest = (FIoRequestImpl *)0x0;
    if (pFVar7 == (FIoRequestImpl *)0x0) break;
    FOnDemandIoStore::GetStreamingChunkInfo(this->IoStore,&local_158,&pFVar7->ChunkId);
    pFVar12 = local_158.SharedContainer.Object;
    if (local_158.SharedContainer.Object == (FOnDemandContainer *)0x0) {
LAB_1445fbe09:
      if ((pFVar7->NextRequest != (FIoRequestImpl *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                              ,0x72,L""), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar9 = param_2->Tail;
      pFVar8 = param_2->Head;
joined_r0x0001445fc4e1:
      if (pFVar9 == (FIoRequestImpl *)0x0) {
        if ((pFVar8 != (FIoRequestImpl *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Head == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                ,0x7c,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        param_2->Head = pFVar7;
      }
      else {
        if ((pFVar8 == (FIoRequestImpl *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Head != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                ,0x76,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        param_2->Tail->NextRequest = pFVar7;
      }
      param_2->Tail = pFVar7;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.SharedContainer.SharedReferenceCount.ReferenceController);
      param_1 = local_138;
    }
    else {
      local_118 = (local_158.SharedContainer.Object)->HostGroupName;
      bVar16 = FHttpIoDispatcher::IsHostGroupOk(&local_118);
      pFVar13 = local_158.Entry;
      if (!bVar16) goto LAB_1445fbe09;
      aVar4 = (this->BackendStatus).Flags;
      if (((((byte)aVar4 & 2) == 0) || (GIasHttpEnabled == false)) ||
         (((pFVar7->ChunkId).Id[0xb] == '\x03' &&
          ((((byte)aVar4 & 4) != 0 || (GIasHttpOptionalBulkDataEnabled == false)))))) {
        if ((pFVar7->NextRequest != (FIoRequestImpl *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                ,0x72,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar9 = param_2->Tail;
        pFVar8 = param_2->Head;
        goto joined_r0x0001445fc4e1;
      }
      local_110 = (pFVar7->Options).RequestedOffset;
      uVar26 = (local_158.Entry)->RawSize - local_110;
      if ((pFVar7->Options).RequestedSize < uVar26) {
        uVar26 = (pFVar7->Options).RequestedSize;
      }
      (pFVar7->Options).RequestedSize = uVar26;
      uVar21 = (local_158.Entry)->EncodedSize + 0xf;
      uVar22 = (ulonglong)uVar21 & 0xfffffff0;
      if ((ulonglong)((longlong)GIasHttpRangeRequestMinSizeKiB * 0x400) < uVar22) {
        uVar21 = (local_158.Entry)->BlockCount;
        pFVar1 = (pFVar12->BlockSizes).AllocatorInstance.Data +
                 (ulonglong)(local_158.Entry)->BlockOffset * 4;
        if (((int)uVar21 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uStack_d4 = uVar14;
        local_e0 = pFVar1;
        uStack_d8 = uVar21;
        if ((pFVar12 == (FOnDemandContainer *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_a8._12_4_ = uStack_d4;
        local_a8.ArrayNum = uStack_d8;
        local_a8.DataPtr = (uint *)local_e0;
        this_00 = FIoChunkEncoding::GetChunkRange
                            (&local_68,(ulonglong)pFVar13->RawSize,pFVar12->BlockSize,&local_a8,
                             local_110,uVar26);
        if ((this_00->StatusValue).ErrorCode != Ok) {
          StatusOrCrash(&this_00->StatusValue);
        }
        FIoStatus::operator=(&this_00->StatusValue,&FIoStatus::Unknown);
        uVar26 = *(ulonglong *)(this_00->Value).Pad;
        uVar5 = *(undefined2 *)((this_00->Value).Pad + 8);
        FIoStatus::operator=(&local_68.StatusValue,Unknown);
        FIoStatus::~FIoStatus(&local_68.StatusValue);
        local_160._1_1_ = (byte)((ushort)uVar5 >> 8);
        uVar22 = (ulonglong)local_160._1_1_;
        uVar30 = (ulonglong)(byte)uVar5;
        uVar29 = uVar26 >> 0x38;
        uVar28 = uVar26 >> 0x30 & 0xff;
        local_168._5_1_ = (byte)(uVar26 >> 0x28);
        uVar31 = uVar26 >> 8 & 0xff;
        local_168._0_1_ = (byte)uVar26;
        uVar32 = uVar26 >> 0x18 & 0xff;
        local_168._2_1_ = (byte)(uVar26 >> 0x10);
        bVar17 = (byte)local_168;
        bVar33 = local_168._2_1_;
        bVar25 = local_168._5_1_;
        local_168 = uVar26;
        local_160 = uVar5;
      }
      else {
        uVar28 = (ulonglong)(uVar21 >> 0x18);
        uVar29 = (ulonglong)(uVar21 >> 0x10);
        uVar31 = 0;
        uVar32 = 0;
        local_168 = (ulonglong)CONCAT11((char)(uVar21 >> 0x10),(char)(uVar21 >> 0x18)) << 0x30;
        uVar30 = (ulonglong)(uVar21 >> 8);
        local_160 = CONCAT11((char)uVar22,(char)(uVar21 >> 8));
        bVar17 = 0;
        bVar33 = 0;
        bVar25 = 0;
      }
      uVar26 = local_168 >> 0x20 & 0xff;
      uVar27 = ((((ulonglong)bVar17 << 8 | uVar31) << 8 | (ulonglong)bVar33) << 8 | uVar32) << 8 |
               uVar26;
      uVar22 = (((((ulonglong)bVar25 << 8 | uVar28) << 8 | uVar29 & 0xff) << 8 | uVar30 & 0xff) << 8
               | uVar22 & 0xff) + uVar27;
      if ((uVar27 < 0x100000000) && (uVar22 < 0x100000000)) {
        if ((uVar22 != (uVar22 & 0xffffffff)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IntFitsIn<OutType>(In)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
           bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar26 = ((uVar31 << 8 | (ulonglong)bVar33) << 8 | uVar32) << 8 | uVar26;
        if ((uVar27 != uVar26) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IntFitsIn<OutType>(In)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
           bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uStack_13c = (undefined4)uVar22;
        local_140 = (undefined4)uVar26;
      }
      else {
        local_140 = 0xffffffff;
        uStack_13c = 0;
      }
      uVar6 = (FResolvedRequest::Allocator.CurrentSlab)->Allocated;
      (FResolvedRequest::Allocator.CurrentSlab)->Allocated = uVar6 + 1;
      if ((0x3f < uVar6) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("ElementIndex < SlabSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                              ,0x36,L""), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      TVar15.CurrentSlab = FResolvedRequest::Allocator.CurrentSlab;
      (FResolvedRequest::Allocator.CurrentSlab)->Elements[uVar6].Slab =
           FResolvedRequest::Allocator.CurrentSlab;
      pFVar2 = (TVar15.CurrentSlab)->Elements + uVar6;
      TVar15 = FResolvedRequest::Allocator;
      if (((FResolvedRequest::Allocator.CurrentSlab)->Allocated == 0x40) &&
         (pFVar18 = ::operator_new(0x1208), TVar15.CurrentSlab = (FSlab *)0x0,
         pFVar18 != (FSlab *)0x0)) {
        memset(&pFVar18->field_0x4,0,0x1204);
        lVar23 = 0x40;
        pFVar18->Allocated = 0;
        pFVar18->Freed = 0;
        pFVar19 = pFVar18;
        do {
          pFVar19 = (FSlab *)&pFVar19->Elements[0].Slab;
          *(FSlab **)pFVar19 = (FSlab *)0x0;
          lVar23 = lVar23 + -1;
          TVar15.CurrentSlab = pFVar18;
        } while (lVar23 != 0);
      }
      FResolvedRequest::Allocator.CurrentSlab = TVar15.CurrentSlab;
      *(FIoRequestImpl **)(pFVar2->Data).Pad = pFVar7;
      *(TReferenceControllerBase<1> **)((pFVar2->Data).Pad + 0x10) =
           local_158.SharedContainer.SharedReferenceCount.ReferenceController;
      *(FOnDemandContainer **)((pFVar2->Data).Pad + 8) = pFVar12;
      *(FOnDemandChunkEntry **)((pFVar2->Data).Pad + 0x18) = pFVar13;
      *(ulonglong *)((pFVar2->Data).Pad + 0x20) = local_168;
      *(undefined2 *)((pFVar2->Data).Pad + 0x28) = local_160;
      (pFVar2->Data).Pad[0x30] = '\0';
      (pFVar2->Data).Pad[0x31] = '\0';
      (pFVar2->Data).Pad[0x32] = '\0';
      (pFVar2->Data).Pad[0x33] = '\0';
      (pFVar2->Data).Pad[0x34] = '\0';
      (pFVar2->Data).Pad[0x35] = '\0';
      (pFVar2->Data).Pad[0x36] = '\0';
      (pFVar2->Data).Pad[0x37] = '\0';
      local_158.SharedContainer.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_158.SharedContainer.Object = (FOnDemandContainer *)0x0;
      QueryPerformanceCounter(&local_108);
      *(LARGE_INTEGER *)((pFVar2->Data).Pad + 0x38) = local_108;
      if ((*(longlong *)(*(longlong *)(pFVar2->Data).Pad + 0x30) != 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("DispatcherRequest.BackendData == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpIoDispatcherBackend.cpp"
                              ,0x26,L""), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      this = local_100;
      local_70 = (undefined ***)0x0;
      local_80 = local_100;
      *(FElement **)(*(longlong *)(pFVar2->Data).Pad + 0x30) = pFVar2;
      pTVar10 = *(TUniqueFunction<void___cdecl(UE::FIoHttpResponse_&&)> **)
                 ((pFVar2->Data).Pad + 0x18);
      local_88 = &Core::Private::Function::
                  TFunction_OwnedObject<`UE::IoStore::FHttpIoDispatcherBackend::ResolveIoRequests'::`4'::<lambda_1>,1,0>
                  ::_vftable_;
      local_98 = Core::Private::Function::
                 TFunctionRefCaller<`UE::IoStore::FHttpIoDispatcherBackend::ResolveIoRequests'::__l4::<lambda_1>,void,UE::FIoHttpResponse_&&>
                 ::Call;
      local_c0.Hash[4] = (undefined1)uStack_13c;
      local_c0.Hash[5] = uStack_13c._1_1_;
      local_c0.Hash[6] = uStack_13c._2_1_;
      local_c0.Hash[7] = uStack_13c._3_1_;
      local_c0.Hash[0] = (undefined1)local_140;
      local_c0.Hash[1] = local_140._1_1_;
      local_c0.Hash[2] = local_140._2_1_;
      local_c0.Hash[3] = local_140._3_1_;
      local_c0.Hash._8_4_ = pFVar7->Priority;
      local_c0.Hash[0xc] = '\x02';
      local_c0.Hash[0xd] = '\0';
      local_c0.Hash[0xe] = '\0';
      local_c0.Hash[0xf] = '\0';
      local_c0.Hash[0x10] = '\x01';
      local_c0.Hash[0x11] = '\0';
      local_c0.Hash[0x12] = '\0';
      local_c0.Hash[0x13] = '\0';
      local_ac = 0;
      local_130._0_4_ = 0;
      local_130._4_4_ = 0;
      local_130._8_4_ = 0;
      local_130._12_4_ = 0;
      local_78 = pFVar2;
      if ((*(longlong *)((pFVar2->Data).Pad + 8) == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_120 = *(undefined1 (*) [8])(*(longlong *)((pFVar2->Data).Pad + 8) + 0xf8);
      if (local_120 != (undefined1  [8])0x0) {
        LOCK();
        *(int *)((longlong)local_120 + -8) = *(int *)((longlong)local_120 + -8) + 1;
        UNLOCK();
      }
      if ((*(longlong *)((pFVar2->Data).Pad + 8) == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_f8.Chars = *(char **)(*(longlong *)((pFVar2->Data).Pad + 8) + 0x10c);
      FVar20 = FIoHttpBatch::Get(&local_d0,&local_f0,(FIoRelativeUrl *)&local_f8,
                                 (FIoHttpHeaders *)local_120,(FIoHttpOptions *)local_130,&local_c0,
                                 pTVar10);
      FIoHttpRequest::operator=
                ((FIoHttpRequest *)((pFVar2->Data).Pad + 0x30),(FIoHttpRequest *)FVar20.Handle);
      FIoHttpRequest::~FIoHttpRequest((FIoHttpRequest *)&local_f0);
      if (local_120 != (undefined1  [8])0x0) {
        pFVar1 = (FScriptContainerElement *)((longlong)local_120 + -8);
        LOCK();
        iVar3 = *(int *)pFVar1;
        *(int *)pFVar1 = *(int *)pFVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FMemory::Free(pFVar1);
        }
      }
      DestructItems<FAnsiString,int>((FAnsiString *)local_130._0_8_,local_130._8_4_);
      if ((FIoHttpRange)local_130._0_8_ != (FIoHttpRange)0x0) {
        FMemory::Free((void *)local_130._0_8_);
      }
      if (local_98 != (code *)0x0) {
        pppuVar24 = &local_88;
        if (local_70 != (undefined ***)0x0) {
          pppuVar24 = local_70;
        }
        (*(code *)(*pppuVar24)[2])();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.SharedContainer.SharedReferenceCount.ReferenceController);
      param_2 = local_e8;
      param_1 = local_138;
    }
  }
  FIoHttpBatch::Issue(&local_d0);
  FIoHttpBatch::~FIoHttpBatch(&local_d0);
  return;
}

// SetOptionalBulkDataEnabled @ 1445ff3f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FHttpIoDispatcherBackend::SetOptionalBulkDataEnabled
          (FHttpIoDispatcherBackend *this,bool param_1)

{
  FBackendStatus::AddOrRemoveFlags
            (&this->BackendStatus,HttpBulkOptionalDisabled,!param_1,
             L"HTTP streaming of optional bulk data disabled");
  return;
}

// Shutdown @ 1446002c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall UE::IoStore::FHttpIoDispatcherBackend::Shutdown(FHttpIoDispatcherBackend *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->BackendContext != (TSharedPtr<FIoDispatcherBackendContext_const_,1> *)&local_18) {
    (this->BackendContext).Object = (FIoDispatcherBackendContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BackendContext).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// UpdatePriorityForIoRequest @ 14460c870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FHttpIoDispatcherBackend::UpdatePriorityForIoRequest
          (FHttpIoDispatcherBackend *this,FIoRequestImpl *param_1)

{
  if (param_1->BackendData != (void *)0x0) {
    FIoHttpRequest::UpdatePriorty
              ((FIoHttpRequest *)((longlong)param_1->BackendData + 0x30),param_1->Priority);
    return;
  }
  return;
}


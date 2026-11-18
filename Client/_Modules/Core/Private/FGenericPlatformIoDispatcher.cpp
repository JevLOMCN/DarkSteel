// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// FGenericPlatformIoDispatcher @ 14147d290

FGenericPlatformIoDispatcher * __thiscall
UE::FGenericPlatformIoDispatcher::FGenericPlatformIoDispatcher
          (FGenericPlatformIoDispatcher *this,FPlatformIoDispatcherCreateParams *param_1)

{
  longlong *this_00;
  
  this->_padding_ = (longlong)&FPlatformIoDispatcherBase::_vftable__for__FRunnable__;
  this_00 = &this->_padding_;
  this->_padding_ = (longlong)&FPlatformIoDispatcherBase::_vftable__for__UE__IPlatformIoDispatcher__
  ;
  FIoDispatcherFilesystemStats::FIoDispatcherFilesystemStats
            ((FIoDispatcherFilesystemStats *)this_00);
  this->_padding_ = 0;
  this->_padding_ = 0;
  FPlatformIoDispatcherRequestMgr::FPlatformIoDispatcherRequestMgr
            ((FPlatformIoDispatcherRequestMgr *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)this_00;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)this_00;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = -1;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)this_00;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x40000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  *(bool *)&this->_padding_ = param_1->bMultithreaded;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__UE__IPlatformIoDispatcher__;
  FEventRef::FEventRef(&this->WakeUpEvent,AutoReset);
  return this;
}

// ~FGenericPlatformIoDispatcher @ 141480cd0

void __thiscall
UE::FGenericPlatformIoDispatcher::~FGenericPlatformIoDispatcher(FGenericPlatformIoDispatcher *this)

{
  longlong *plVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__UE__IPlatformIoDispatcher__;
  LOCK();
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  UNLOCK();
  if (this->_padding_ != 0) {
    (**(code **)(((this->WakeUpEvent).Event)->_padding_ + 0x10))();
    plVar1 = (longlong *)this->_padding_;
    if (plVar1 != (longlong *)0x0) {
      this->_padding_ = 0;
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
  }
  FEventRef::~FEventRef(&this->WakeUpEvent);
  FPlatformIoDispatcherBase::~FPlatformIoDispatcherBase((FPlatformIoDispatcherBase *)this);
  return;
}

// CloseFile @ 14148c570

FIoStatus * __thiscall
UE::FGenericPlatformIoDispatcher::CloseFile
          (FGenericPlatformIoDispatcher *this,FIoStatus *__return_storage_ptr__,
          FIoFileHandle param_1)

{
  wchar_t *pwVar1;
  undefined8 *puVar2;
  TSharedString<wchar_t> TVar3;
  
  if (param_1.Handle != 0) {
    puVar2 = *(undefined8 **)param_1.Handle;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    ::operator_delete((void *)param_1.Handle,0x18);
  }
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
  return __return_storage_ptr__;
}

// GetPlatformFileInfo @ 141499bb0

FIoPlatformFileInfo * __thiscall
UE::FGenericPlatformIoDispatcher::GetPlatformFileInfo
          (FGenericPlatformIoDispatcher *this,FIoPlatformFileInfo *__return_storage_ptr__,
          FIoFileHandle param_1)

{
  if (param_1.Handle != 0) {
    __return_storage_ptr__->FileSize = *(long64 *)(param_1.Handle + 8);
    __return_storage_ptr__->FileId = *(uint *)(param_1.Handle + 0x14);
    __return_storage_ptr__->CompressionBlockSize = *(uint *)(param_1.Handle + 0x10);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->FileSize = -1;
  __return_storage_ptr__->FileId = 0;
  __return_storage_ptr__->CompressionBlockSize = 0;
  return __return_storage_ptr__;
}

// OnInitialize @ 1414a7490

/* WARNING: Enum "Type": Some values do not have unique names */

FIoStatus * __thiscall
UE::FGenericPlatformIoDispatcher::OnInitialize
          (FGenericPlatformIoDispatcher *this,FIoStatus *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  longlong *plVar2;
  void *pvVar3;
  bool bVar4;
  TSharedString<wchar_t> TVar5;
  int iVar6;
  ulonglong uVar7;
  void *_Dst;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong local_38 [2];
  
  if (GIoDispatcherBufferSizeKB < 1) {
    iVar6 = 0x40000;
  }
  else {
    iVar6 = GIoDispatcherBufferSizeKB << 10;
  }
  *(int *)((longlong)&this->_padding_ + 4) = iVar6;
  bVar4 = 0 < GIoDispatcherSortRequestsByOffset;
  if (4 < (byte)LogPlatformIoDispatcher._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformIoDispatcher);
  }
  FIoChunkBlockMemoryPool::Initialize
            ((FIoChunkBlockMemoryPool *)&this->_padding_,GIoDispatcherDecompressionWorkerCount + 1,
             0x10000);
  FIoFileBlockMemoryPool::Initialize
            ((FIoFileBlockMemoryPool *)&this->_padding_,*(uint *)((longlong)&this->_padding_ + 4),
             GIoDispatcherBufferMemoryMB << 0x14,GIoDispatcherBufferAlignment);
  uVar12 = (ulonglong)*(uint *)((longlong)&this->_padding_ + 4);
  uVar7 = (ulonglong)((longlong)GIoDispatcherCacheSizeMB << 0x14) / uVar12;
  this->_padding_ = uVar12;
  if (uVar7 != 0) {
    _Dst = operator_new__(uVar7 * uVar12);
    if (_Dst == (void *)0x0) {
      _Dst = (void *)0x0;
    }
    else {
      memset(_Dst,0,uVar7 * uVar12);
    }
    plVar2 = &this->_padding_;
    if (plVar2 != local_38) {
      pvVar3 = (void *)*plVar2;
      *plVar2 = (longlong)_Dst;
      operator_delete__(pvVar3);
      _Dst = (void *)0x0;
    }
    operator_delete__(_Dst);
    lVar11 = 0;
    plVar10 = &this->_padding_;
    do {
      plVar8 = ::operator_new(0x20);
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = 0;
        plVar8[1] = 0;
        plVar8[3] = 0;
      }
      plVar8[2] = -1;
      lVar9 = *plVar2 + lVar11;
      lVar11 = lVar11 + uVar12;
      plVar8[3] = lVar9;
      plVar10[1] = (longlong)plVar8;
      *plVar8 = (longlong)plVar10;
      uVar7 = uVar7 - 1;
      plVar10 = plVar8;
    } while (uVar7 != 0);
    plVar8[1] = (longlong)&this->_padding_;
    this->_padding_ = (longlong)plVar8;
  }
  *(bool *)((longlong)&this->_padding_ + 1) = bVar4;
  TVar5 = FIoStatus::Ok.ErrorMessage;
  (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
  if (TVar5.Chars != (wchar_t *)0x0) {
    LOCK();
    pwVar1 = TVar5.Chars + -4;
    *(int *)pwVar1 = *(int *)pwVar1 + 1;
    UNLOCK();
  }
  __return_storage_ptr__->ErrorCode = FIoStatus::Ok.ErrorCode;
  __return_storage_ptr__->SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
  return __return_storage_ptr__;
}

// OnIoThreadEntry @ 1414a7700

uint __thiscall
UE::FGenericPlatformIoDispatcher::OnIoThreadEntry(FGenericPlatformIoDispatcher *this)

{
  FEvent *pFVar1;
  bool bVar2;
  bool local_res8 [8];
  
  while( true ) {
    do {
      local_res8[0] = false;
      bVar2 = ProcessFileIo(this,local_res8);
    } while (bVar2);
    if (*(char *)((longlong)&this->_padding_ + 1) != '\0') break;
    if (local_res8[0] == false) {
      pFVar1 = (this->WakeUpEvent).Event;
      (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0xffffffff,0);
    }
    else {
      bVar2 = -1 < CpuChannel->Enabled;
      if (bVar2) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId155,"WaitingForMemory",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\GenericPlatformIoDispatcher.cpp"
                   ,0x9b);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId155);
      }
      pFVar1 = (this->WakeUpEvent).Event;
      (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0xffffffff);
      if (bVar2) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  return 0;
}

// OnWakeUp @ 1414a7d50

void __thiscall UE::FGenericPlatformIoDispatcher::OnWakeUp(FGenericPlatformIoDispatcher *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001414a7d5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->WakeUpEvent).Event)->_padding_ + 0x10))();
  return;
}

// OpenFile @ 1414a7d70

TIoStatusOr<UE::FIoFileHandle> * __thiscall
UE::FGenericPlatformIoDispatcher::OpenFile
          (FGenericPlatformIoDispatcher *this,TIoStatusOr<UE::FIoFileHandle> *__return_storage_ptr__
          ,wchar_t *param_1,FIoFileProperties *param_2,FIoFileStat *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  IPlatformFile *pIVar6;
  longlong *plVar7;
  longlong lVar8;
  TIoStatusOr<UE::FIoFileHandle> *pTVar9;
  FIoStatus *pFVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  FIoStatus local_28;
  
  pIVar6 = IPlatformFile::GetPlatformPhysical();
  plVar7 = ::operator_new(0x18);
  plVar12 = (longlong *)0x0;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = 0;
    plVar7[1] = -1;
    plVar7[2] = 0;
    plVar12 = plVar7;
  }
  lVar8 = (**(code **)((longlong)*pIVar6 + 0x80))(pIVar6,param_1);
  plVar12[1] = lVar8;
  *(uint *)(plVar12 + 2) = param_2->CompressionBlockSize;
  LOCK();
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar2 == 0) {
    LOCK();
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(int *)((longlong)plVar12 + 0x14) = iVar2;
    if ((iVar2 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FileHandle->FileId > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\GenericPlatformIoDispatcher.cpp"
                           ,0x4a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TIoStatusOr<UE::FIoFileHandle> *)(*pcVar4)();
      return pTVar9;
    }
  }
  else {
    *(int *)((longlong)plVar12 + 0x14) = iVar2;
  }
  if (plVar12[1] < 0) {
    pFVar10 = FIoStatus::FIoStatus(&local_28,NotFound);
    TIoStatusOr<UE::FIoFileHandle>::TIoStatusOr<UE::FIoFileHandle>(__return_storage_ptr__,pFVar10);
    puVar3 = (undefined8 *)*plVar12;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    ::operator_delete(plVar12,0x18);
  }
  else {
    puVar11 = (undefined8 *)(**(code **)((longlong)*pIVar6 + 0xf8))(pIVar6,param_1,0);
    puVar3 = (undefined8 *)*plVar12;
    if ((puVar3 != puVar11) && (*plVar12 = (longlong)puVar11, puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
    if (param_3 != (FIoFileStat *)0x0) {
      param_3->FileSize = plVar12[1];
    }
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    *(longlong **)(__return_storage_ptr__->Value).Pad = plVar12;
  }
  return __return_storage_ptr__;
}

// ProcessFileIo @ 1414a9810

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::FGenericPlatformIoDispatcher::ProcessFileIo(FGenericPlatformIoDispatcher *this,bool *param_1)

{
  longlong *plVar1;
  atomic<unsigned_char> *this_00;
  FMutex FVar2;
  atomic<unsigned_char> aVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  code *pcVar8;
  longlong lVar9;
  undefined1 uVar10;
  char cVar11;
  ushort uVar12;
  FIoFileBlockRequest *pFVar13;
  FIoFileBlockRequest **ppFVar14;
  FIoFileBlockRequest *pFVar15;
  int iVar16;
  void *pvVar17;
  bool bVar18;
  
  pFVar15 = (FIoFileBlockRequest *)0x0;
  *param_1 = false;
  plVar1 = &this->_padding_;
  LOCK();
  bVar18 = (char)this->_padding_ == '\0';
  if (bVar18) {
    *(undefined1 *)&this->_padding_ = 1;
  }
  UNLOCK();
  if (!bVar18) {
    FMutex::LockSlow((FMutex *)&this->_padding_);
  }
  pFVar13 = FIoQueue::GetCancelled((FIoQueue *)plVar1,false);
  if (pFVar13 == (FIoFileBlockRequest *)0x0) {
    if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
      if ((int)this->_padding_ == 0) goto LAB_1414a9a28;
      ppFVar14 = TArray<UE::FIoFileBlockRequest_*,TSizedDefaultAllocator<32>_>::HeapTop
                           ((TArray<UE::FIoFileBlockRequest_*,TSizedDefaultAllocator<32>_> *)
                            &this->_padding_);
      pFVar13 = *ppFVar14;
    }
    else {
      pFVar13 = FIoQueue::GetByOffset((FIoQueue *)plVar1,false);
    }
    if (pFVar13 == (FIoFileBlockRequest *)0x0) goto LAB_1414a9a28;
  }
  if (pFVar13->ErrorCode == Cancelled) {
    pFVar15 = FIoQueue::Dequeue((FIoQueue *)plVar1);
  }
  else {
    this_00 = (atomic<unsigned_char> *)((longlong)&this->_padding_ + 4);
    LOCK();
    FVar2.State = *this_00;
    if (FVar2.State == (atomic<unsigned_char>)0x0) {
      *this_00 = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (FVar2.State != (atomic<unsigned_char>)0x0) {
      FMutex::LockSlow((FMutex *)this_00);
    }
    plVar4 = (longlong *)this->_padding_;
    if (plVar4 == (longlong *)0x0) {
      (pFVar13->BufferHandle).Handle = -1;
      LOCK();
      aVar3 = *this_00;
      *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        FMutex::WakeWaitingThread((FMutex *)this_00);
      }
      pvVar17 = (void *)0x0;
    }
    else {
      if ((*(int *)((longlong)plVar4 + 0x14) != 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Block->RefCount == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                              ,0x148,L""), bVar18)) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
      this->_padding_ = *plVar4;
      lVar9 = plVar4[2];
      *plVar4 = 0;
      *(undefined4 *)((longlong)plVar4 + 0x14) = 1;
      if (((int)lVar9 == -1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InHandle != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.h"
                              ,0x26,L""), bVar18)) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
      (pFVar13->BufferHandle).Handle = (int)lVar9;
      lVar9 = this->_padding_;
      LOCK();
      *(longlong *)(lVar9 + 0x180) = *(longlong *)(lVar9 + 0x180) + -1;
      UNLOCK();
      if (-1 < CountersChannel->Enabled) {
        if (*(int *)(lVar9 + 400) == 0) {
          uVar12 = FCountersTrace::OutputInitCounter
                             (*(wchar_t **)(lVar9 + 0x188),TraceCounterType_Int,
                              *(ETraceCounterDisplayHint *)(lVar9 + 0x194) & 0xf);
          LOCK();
          if (*(uint *)(lVar9 + 400) == 0) {
            *(uint *)(lVar9 + 400) = (uint)uVar12;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  ((ushort)*(undefined4 *)(lVar9 + 400),*(long64 *)(lVar9 + 0x180));
      }
      pvVar17 = (void *)plVar4[1];
      LOCK();
      aVar3 = *this_00;
      *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        FMutex::WakeWaitingThread((FMutex *)this_00);
      }
    }
    iVar16 = (pFVar13->BufferHandle).Handle;
    pFVar13->Buffer = pvVar17;
    if (iVar16 == -1) {
      *param_1 = true;
    }
    else {
      pFVar15 = FIoQueue::Dequeue((FIoQueue *)plVar1);
    }
  }
LAB_1414a9a28:
  LOCK();
  plVar1 = &this->_padding_;
  lVar9 = *plVar1;
  *(char *)plVar1 = (char)*plVar1 + -1;
  UNLOCK();
  if ((lVar9 & 2) != 0) {
    FMutex::WakeWaitingThread((FMutex *)&this->_padding_);
  }
  if (pFVar15 == (FIoFileBlockRequest *)0x0) {
    bVar18 = false;
  }
  else {
    if ((pFVar15->Size == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("FileBlockRequest->Size > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\GenericPlatformIoDispatcher.cpp"
                            ,0xcd,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    if (((pFVar15->EncodedBlockRequests).ArrayNum == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("FileBlockRequest->EncodedBlockRequests.IsEmpty() == false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\GenericPlatformIoDispatcher.cpp"
                            ,0xce,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    if ((pFVar15->QueueStatus != Dequeued) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("FileBlockRequest->QueueStatus == FIoFileBlockRequest::EQueueStatus::Dequeued"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\GenericPlatformIoDispatcher.cpp"
                            ,0xcf,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      uVar10 = (*pcVar8)();
      return (bool)uVar10;
    }
    if (pFVar15->ErrorCode != Cancelled) {
      pFVar15->ErrorCode = Ok;
      bVar18 = FIoFileBlockCache::Get((FIoFileBlockCache *)&this->_padding_,pFVar15);
      if (!bVar18) {
        bVar18 = -1 < CpuChannel->Enabled;
        if (bVar18) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId214,"ReadBlockFromFile",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\GenericPlatformIoDispatcher.cpp"
                     ,0xd6);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId214);
        }
        puVar5 = (undefined8 *)(pFVar15->FileHandle).Handle;
        uVar6 = pFVar15->Size;
        uVar7 = pFVar15->FileOffset;
        iVar16 = 0;
        FCsvProfiler::RecordCustomStat
                  (&_GCsvStat_FrameFilesystemReads.Name,_GCsvStat_FrameFilesystemReads.CategoryIndex
                   ,1,Accumulate);
        if ((undefined8 *)this->_padding_ == puVar5) {
          if (this->_padding_ == uVar7) {
            FCsvProfiler::RecordCustomStat
                      (&_GCsvStat_FrameSequentialReads.Name,
                       _GCsvStat_FrameSequentialReads.CategoryIndex,1,Accumulate);
          }
          else {
            FIoDispatcherFilesystemStats::OnSeek
                      ((FIoDispatcherFilesystemStats *)&this->_padding_,this->_padding_,uVar7);
          }
        }
        else {
          FCsvProfiler::RecordCustomStat
                    (&_GCsvStat_FrameHandleChangeSeeks.Name,
                     _GCsvStat_FrameHandleChangeSeeks.CategoryIndex,1,Accumulate);
          FCsvProfiler::RecordCustomStat
                    (&_GCsvStat_FrameSeeks.Name,_GCsvStat_FrameSeeks.CategoryIndex,1,Accumulate);
          this->_padding_ = this->_padding_ + 1;
          if (-1 < CountersChannel->Enabled) {
            if ((int)this->_padding_ == 0) {
              uVar12 = FCountersTrace::OutputInitCounter
                                 ((wchar_t *)this->_padding_,TraceCounterType_Int,
                                  *(ETraceCounterDisplayHint *)((longlong)&this->_padding_ + 4) &
                                  0xf);
              LOCK();
              if ((int)this->_padding_ == 0) {
                *(uint *)&this->_padding_ = (uint)uVar12;
              }
              UNLOCK();
            }
            FCountersTrace::OutputSetValue((ushort)(int)this->_padding_,this->_padding_);
          }
        }
        this->_padding_ = (longlong)puVar5;
        this->_padding_ = uVar7 + uVar6;
        pFVar15->ErrorCode = ReadError;
        do {
          iVar16 = iVar16 + 1;
          cVar11 = (**(code **)(*(longlong *)*puVar5 + 0x10))
                             ((longlong *)*puVar5,pFVar15->FileOffset);
          if (cVar11 == '\0') {
            if (2 < (byte)LogPlatformIoDispatcher._0_1_) {
              Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogPlatformIoDispatcher);
            }
          }
          else {
            cVar11 = (**(code **)(*(longlong *)*puVar5 + 0x20))
                               ((longlong *)*puVar5,pFVar15->Buffer,pFVar15->Size);
            if (cVar11 != '\0') {
              pFVar15->ErrorCode = Ok;
              FIoFileBlockCache::Put((FIoFileBlockCache *)&this->_padding_,pFVar15);
              break;
            }
            if (2 < (byte)LogPlatformIoDispatcher._0_1_) {
              Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogPlatformIoDispatcher);
            }
          }
        } while (iVar16 < 10);
        FPlatformIoDispatcherStats::OnFileBlockReadCompleted
                  ((FPlatformIoDispatcherStats *)&this->_padding_,pFVar15);
        if (bVar18) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
    }
    if ((char)this->_padding_ == '\0') {
      TIntrusiveList<UE::FIoFileBlockRequest>::AddTail
                ((TIntrusiveList<UE::FIoFileBlockRequest> *)&this->_padding_,pFVar15);
      do {
        bVar18 = FPlatformIoDispatcherBase::ProcessBlocks((FPlatformIoDispatcherBase *)this);
      } while (bVar18);
    }
    else {
      plVar1 = &this->_padding_;
      LOCK();
      bVar18 = (char)*plVar1 == '\0';
      if (bVar18) {
        *(undefined1 *)plVar1 = 1;
      }
      UNLOCK();
      if (!bVar18) {
        FMutex::LockSlow((FMutex *)plVar1);
      }
      TIntrusiveList<UE::FIoFileBlockRequest>::AddTail
                ((TIntrusiveList<UE::FIoFileBlockRequest> *)&this->_padding_,pFVar15);
      LOCK();
      lVar9 = *plVar1;
      *(char *)plVar1 = (char)*plVar1 + -1;
      UNLOCK();
      if ((lVar9 & 2) != 0) {
        FMutex::WakeWaitingThread((FMutex *)plVar1);
      }
      (**(code **)(**(longlong **)(this->_padding_ + 0x20) + 0x10))();
    }
    bVar18 = true;
  }
  return bVar18;
}

// Tick @ 1414b4a10

bool __thiscall UE::FGenericPlatformIoDispatcher::Tick(FGenericPlatformIoDispatcher *this)

{
  bool bVar1;
  bool local_res8 [32];
  
  bVar1 = ProcessFileIo((FGenericPlatformIoDispatcher *)&this[-1].WakeUpEvent,local_res8);
  if (!bVar1) {
    return false;
  }
  do {
    bVar1 = ProcessFileIo((FGenericPlatformIoDispatcher *)&this[-1].WakeUpEvent,local_res8);
  } while (bVar1);
  return true;
}


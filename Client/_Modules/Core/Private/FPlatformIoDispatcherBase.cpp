// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 26

// FPlatformIoDispatcherBase @ 14147e340

FPlatformIoDispatcherBase * __thiscall
UE::FPlatformIoDispatcherBase::FPlatformIoDispatcherBase
          (FPlatformIoDispatcherBase *this,FPlatformIoDispatcherCreateParams *param_1)

{
  FPlatformIoDispatcherStats *this_00;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this_00 = &this->Stats;
  this->_padding_ = (longlong)&_vftable__for__UE__IPlatformIoDispatcher__;
  FIoDispatcherFilesystemStats::FIoDispatcherFilesystemStats(&this_00->Stats);
  (this->Thread).Ptr = (FRunnableThread *)0x0;
  (this->SupportThread).Ptr = (FIoServiceThread *)0x0;
  FPlatformIoDispatcherRequestMgr::FPlatformIoDispatcherRequestMgr(&this->RequestMgr);
  (this->ChunkBlockMemoryPool).MemoryBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkBlockMemoryPool).MemoryBlocks.ArrayNum = 0;
  (this->ChunkBlockMemoryPool).MemoryBlocks.ArrayMax = 0;
  (this->ChunkBlockMemoryPool).FreeBlock = (FMemoryBlock *)0x0;
  (this->FileBlockMemoryPool).Stats = this_00;
  (this->FileBlockMemoryPool).BlockMemory.Ptr = (void *)0x0;
  (this->FileBlockMemoryPool).MemoryBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileBlockMemoryPool).MemoryBlocks.ArrayNum = 0;
  (this->FileBlockMemoryPool).MemoryBlocks.ArrayMax = 0;
  (this->FileBlockMemoryPool).FreeBlock = (FMemoryBlock *)0x0;
  (this->FileBlockMemoryPool).Mutex.State = (atomic<unsigned_char>)0x0;
  (this->IoQueue).Stats = this_00;
  (this->IoQueue).Heap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IoQueue).Heap.ArrayNum = 0;
  (this->IoQueue).Heap.ArrayMax = 0;
  (this->IoQueue).CancelledHeap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IoQueue).CancelledHeap.ArrayNum = 0;
  (this->IoQueue).CancelledHeap.ArrayMax = 0;
  (this->IoQueue).PrioQueues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IoQueue).PrioQueues.ArrayNum = 0;
  (this->IoQueue).PrioQueues.ArrayMax = 0;
  (this->IoQueue).LastFileOffset.FileHandle.Handle = 0;
  (this->IoQueue).LastFileOffset.Priority = 0;
  (this->IoQueue).Mutex = (atomic<unsigned_char>)0x0;
  (this->IoQueue).bSortByOffset = false;
  (this->IoQueue).bReprioritizeCancelled = false;
  (this->FileBlockCache).CacheMemory.Ptr = (uchar *)0x0;
  *(undefined8 *)&(this->FileBlockCache).CachedBlocks = 0;
  *(undefined8 *)&(this->FileBlockCache).CachedBlocks.field_0x8 = 0;
  *(undefined8 *)&(this->FileBlockCache).CachedBlocks.field_0x20 = 0;
  (this->IoQueue).LastFileOffset.FileOffset = 0xffffffffffffffff;
  (this->FileBlockCache).Stats = this_00;
  *(undefined4 *)&(this->FileBlockCache).CachedBlocks.field_0x28 = 0;
  *(undefined4 *)&(this->FileBlockCache).CachedBlocks.field_0x2c = 0x80;
  *(undefined4 *)&(this->FileBlockCache).CachedBlocks.field_0x34 = 0;
  *(undefined4 *)&(this->FileBlockCache).CachedBlocks.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FileBlockCache).CachedBlocks.field_0x40 = 0;
  *(undefined4 *)&(this->FileBlockCache).CachedBlocks.field_0x48 = 0;
  (this->FileBlockCache).CacheLruHead.LruPrev = (FCachedBlock *)0x0;
  (this->FileBlockCache).CacheLruHead.LruNext = (FCachedBlock *)0x0;
  (this->FileBlockCache).CacheLruHead.Key = 0;
  (this->FileBlockCache).CacheLruHead.Buffer = (uchar *)0x0;
  (this->FileBlockCache).CacheLruTail.LruPrev = (FCachedBlock *)0x0;
  (this->FileBlockCache).CacheLruTail.LruNext = (FCachedBlock *)0x0;
  (this->FileBlockCache).CacheLruTail.Key = 0;
  (this->FileBlockCache).CacheLruTail.Buffer = (uchar *)0x0;
  (this->FileBlockCache).CacheBlockSize = 0;
  this->bMultithreaded = false;
  this->bStopRequested = (atomic<bool>)0x0;
  (this->FileBlocksToComplete).Head = (FIoFileBlockRequest *)0x0;
  (this->FileBlocksToComplete).Tail = (FIoFileBlockRequest *)0x0;
  (this->BlocksToDecode).Head = (FIoEncodedBlockRequest *)0x0;
  (this->BlocksToDecode).Tail = (FIoEncodedBlockRequest *)0x0;
  (this->BlocksToComplete).Head = (FIoEncodedBlockRequest *)0x0;
  (this->BlocksToComplete).Tail = (FIoEncodedBlockRequest *)0x0;
  this->FileBlockMutex = (atomic<unsigned_char>)0x0;
  this->EncodedBlockMutex = (atomic<unsigned_char>)0x0;
  this->FileBlockSize = 0x40000;
  this->NextFileId = (atomic<unsigned_int>)0x1;
  this->bMultithreaded = param_1->bMultithreaded;
  return this;
}

// ~FPlatformIoDispatcherBase @ 141481390

void __thiscall
UE::FPlatformIoDispatcherBase::~FPlatformIoDispatcherBase(FPlatformIoDispatcherBase *this)

{
  FIoServiceThread *pFVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  FRunnableThread *pFVar4;
  code *pcVar5;
  bool bVar6;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__UE__IPlatformIoDispatcher__;
  if (this->bStopRequested == (atomic<bool>)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bStopRequested",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                       ,0x385,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->Thread).Ptr != (FRunnableThread *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Thread.IsValid() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                       ,0x386,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar1 = (this->SupportThread).Ptr;
  if (pFVar1 != (FIoServiceThread *)0x0) {
    LOCK();
    pFVar1->bStopRequested = (atomic<bool>)0x1;
    UNLOCK();
    (**(code **)(((pFVar1->WakeUpEvent).Event)->_padding_ + 0x10))();
    (**(code **)(((((this->SupportThread).Ptr)->Thread).Ptr)->_padding_ + 0x20))();
  }
  *(undefined4 *)&(this->FileBlockCache).CachedBlocks.field_0x48 = 0;
  pvVar2 = *(void **)&(this->FileBlockCache).CachedBlocks.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::FIoFileBlockCache::FCachedBlock_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::FIoFileBlockCache::FCachedBlock_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,UE::FIoFileBlockCache::FCachedBlock_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->FileBlockCache).CachedBlocks);
  operator_delete__((this->FileBlockCache).CacheMemory.Ptr);
  DestructItems<UE::FIoQueue::FPrioQueue,int>
            ((FPrioQueue *)(this->IoQueue).PrioQueues.AllocatorInstance.Data,
             (this->IoQueue).PrioQueues.ArrayNum);
  pFVar3 = (this->IoQueue).PrioQueues.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->IoQueue).CancelledHeap.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->IoQueue).Heap.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FileBlockMemoryPool).MemoryBlocks.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FMemory::Free((this->FileBlockMemoryPool).BlockMemory.Ptr);
  pFVar3 = (this->ChunkBlockMemoryPool).MemoryBlocks.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FPlatformIoDispatcherRequestMgr::~FPlatformIoDispatcherRequestMgr(&this->RequestMgr);
  pFVar1 = (this->SupportThread).Ptr;
  if (pFVar1 != (FIoServiceThread *)0x0) {
    pFVar4 = (pFVar1->Thread).Ptr;
    if (pFVar4 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,1);
    }
    FEventRef::~FEventRef(&pFVar1->WakeUpEvent);
    pFVar1->_padding_ = (longlong)&___7FRunnable__6B_;
    ::operator_delete(pFVar1,0x38);
  }
  pFVar4 = (this->Thread).Ptr;
  if (pFVar4 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,1);
  }
  FIoDispatcherFilesystemStats::~FIoDispatcherFilesystemStats(&(this->Stats).Stats);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// operator() @ 141482740

void __thiscall
`UE::FPlatformIoDispatcherBase::EnqueueBlockToDecode'::__l2::<lambda_1>::operator()
          (void *this,FIoChunkBlockDecodeResult *param_1,FIoChunkBlockDecodeRequest *param_2)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  EIoErrorCode EVar2;
  FPlatformIoDispatcherBase *this_01;
  FIoEncodedBlockRequest *pFVar3;
  FIoServiceThread *pFVar4;
  code *pcVar5;
  bool bVar6;
  
  this_01 = *(FPlatformIoDispatcherBase **)this;
  pFVar3 = *(FIoEncodedBlockRequest **)((longlong)this + 8);
  if (((param_1->ErrorCode != Ok) && ((param_1->ErrorCode - SignatureError & 0xfffffffd) != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.ErrorCode == EIoErrorCode::Ok || Result.ErrorCode == EIoErrorCode::SignatureError || Result.ErrorCode == EIoErrorCode::CompressionError"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                         ,0x54a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3->DecodedData = (param_1->DecodedBlock).Data;
  EVar2 = param_1->ErrorCode;
  pFVar3->ErrorCode = EVar2;
  if ((EVar2 == Unknown) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("EncodedBlockRequest.ErrorCode != EIoErrorCode::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                         ,0x54d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  UE::FPlatformIoDispatcherBase::ScatterDecodedBlock(this_01,pFVar3);
  bVar6 = UE::FIoFileBlockMemoryPool::Free(&this_01->FileBlockMemoryPool,&pFVar3->FileBufferHandle);
  if (bVar6) {
    (**(code **)(this_01->_padding_ + 0x40))(this_01);
  }
  this_00 = &this_01->EncodedBlockMutex;
  LOCK();
  bVar6 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    UE::FMutex::LockSlow(this_00);
  }
  TIntrusiveList<UE::FIoEncodedBlockRequest>::AddTail(&this_01->BlocksToComplete,pFVar3);
  UE::FIoDispatcherFilesystemStats::OnDecompressComplete
            (&(this_01->Stats).Stats,(ulonglong)pFVar3->BlockCompressedSize,
             (ulonglong)pFVar3->BlockUncompressedSize);
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(this_00);
  }
  pFVar4 = (this_01->SupportThread).Ptr;
  if (pFVar4 != (FIoServiceThread *)0x0) {
    (**(code **)(((pFVar4->WakeUpEvent).Event)->_padding_ + 0x10))();
  }
  return;
}

// CancelAllRequests @ 14148b7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::FPlatformIoDispatcherBase::CancelAllRequests
          (FPlatformIoDispatcherBase *this,FIoFileHandle param_1)

{
  undefined1 *this_00;
  int *this_01;
  char cVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  
  if (param_1.Handle == 0) {
    if (2 < (byte)LogPlatformIoDispatcher._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformIoDispatcher);
      return;
    }
  }
  else {
    this_00 = &(this->RequestMgr).EncodedBlockLookup.field_0x48;
    LOCK();
    cVar1 = *this_00;
    if (cVar1 == '\0') {
      *this_00 = 1;
    }
    UNLOCK();
    if (cVar1 != '\0') {
      FMutex::LockSlow((FMutex *)this_00);
    }
    this_01 = &(this->IoQueue).LastFileOffset.Priority;
    LOCK();
    bVar4 = (char)*this_01 == '\0';
    if (bVar4) {
      *(undefined1 *)this_01 = 1;
    }
    UNLOCK();
    if (!bVar4) {
      FMutex::LockSlow((FMutex *)this_01);
    }
    bVar4 = FPlatformIoDispatcherRequestMgr::TryCancelAllReadRequests
                      ((FPlatformIoDispatcherRequestMgr *)&this->SupportThread,param_1);
    if (bVar4) {
      *(undefined1 *)((longlong)&(this->IoQueue).LastFileOffset.Priority + 2) = 1;
    }
    LOCK();
    iVar3 = *this_01;
    *(char *)this_01 = (char)*this_01 + -1;
    UNLOCK();
    if ((iVar3 & 2) != 0) {
      FMutex::WakeWaitingThread((FMutex *)this_01);
    }
    LOCK();
    bVar2 = *this_00;
    *this_00 = *this_00 + -1;
    UNLOCK();
    if ((bVar2 & 2) != 0) {
      FMutex::WakeWaitingThread((FMutex *)this_00);
    }
  }
  return;
}

// CancelRequest @ 14148b8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::FPlatformIoDispatcherBase::CancelRequest
          (FPlatformIoDispatcherBase *this,FIoFileReadRequest param_1)

{
  undefined1 *this_00;
  int *this_01;
  char cVar1;
  byte bVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  bool local_88 [8];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_1.Handle == 0) {
    if (2 < (byte)LogPlatformIoDispatcher._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformIoDispatcher);
    }
  }
  else if (*(short *)(param_1.Handle + 0x84) != 0) {
    LOCK();
    bVar10 = *(int *)(param_1.Handle + 0xb0) == 0;
    if (bVar10) {
      *(int *)(param_1.Handle + 0xb0) = 3;
    }
    UNLOCK();
    if (bVar10) {
      this_00 = &(this->RequestMgr).EncodedBlockLookup.field_0x48;
      local_68 = (code *)0x0;
      plStack_40 = (longlong *)0x0;
      LOCK();
      cVar1 = *this_00;
      if (cVar1 == '\0') {
        *this_00 = 1;
      }
      UNLOCK();
      if (cVar1 != '\0') {
        FMutex::LockSlow((FMutex *)this_00);
      }
      this_01 = &(this->IoQueue).LastFileOffset.Priority;
      LOCK();
      bVar10 = (char)*this_01 == '\0';
      if (bVar10) {
        *(undefined1 *)this_01 = 1;
      }
      UNLOCK();
      if (!bVar10) {
        FMutex::LockSlow((FMutex *)this_01);
      }
      local_88[0] = false;
      bVar10 = FPlatformIoDispatcherRequestMgr::TryCancelReadRequest
                         ((FPlatformIoDispatcherRequestMgr *)&this->SupportThread,
                          (FIoPlatformReadRequest *)param_1.Handle,local_88);
      if (bVar10) {
        pcVar3 = *(code **)(param_1.Handle + 0x30);
        uVar8 = *(undefined8 *)(param_1.Handle + 0x38);
        lVar4 = *(longlong *)(param_1.Handle + 0x40);
        uVar5 = *(undefined8 *)(param_1.Handle + 0x48);
        uVar6 = *(undefined8 *)(param_1.Handle + 0x50);
        plVar9 = *(longlong **)(param_1.Handle + 0x58);
        *(code **)(param_1.Handle + 0x30) = local_68;
        *(undefined8 *)(param_1.Handle + 0x38) = uStack_60;
        *(longlong *)(param_1.Handle + 0x40) = local_58;
        *(undefined8 *)(param_1.Handle + 0x48) = uStack_50;
        *(undefined8 *)(param_1.Handle + 0x50) = local_48;
        *(longlong **)(param_1.Handle + 0x58) = plStack_40;
        local_68 = pcVar3;
        uStack_60 = uVar8;
        local_58 = lVar4;
        uStack_50 = uVar5;
        local_48 = uVar6;
        plStack_40 = plVar9;
      }
      if (local_88[0] != false) {
        *(undefined1 *)((longlong)&(this->IoQueue).LastFileOffset.Priority + 2) = 1;
      }
      LOCK();
      iVar7 = *this_01;
      *(char *)this_01 = (char)*this_01 + -1;
      UNLOCK();
      if ((iVar7 & 2) != 0) {
        FMutex::WakeWaitingThread((FMutex *)this_01);
      }
      LOCK();
      bVar2 = *this_00;
      *this_00 = *this_00 + -1;
      UNLOCK();
      if ((bVar2 & 2) != 0) {
        FMutex::WakeWaitingThread((FMutex *)this_00);
      }
      if (local_68 != (code *)0x0) {
        local_80 = *(undefined8 *)(param_1.Handle + 0xa0);
        local_78 = 0xffffffff;
        local_74 = 3;
        Core::Private::Function::CheckCallable(local_68);
        pcVar3 = local_68;
        plVar9 = &local_58;
        if (plStack_40 != (longlong *)0x0) {
          plVar9 = plStack_40;
        }
        uVar8 = (**(code **)(*plVar9 + 8))();
        (*pcVar3)(uVar8,&local_80);
        if (local_68 != (code *)0x0) {
          plVar9 = &local_58;
          if (plStack_40 != (longlong *)0x0) {
            plVar9 = plStack_40;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
      }
    }
  }
  return;
}

// CompleteDecodedBlock @ 14148cb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::FPlatformIoDispatcherBase::CompleteDecodedBlock
          (FPlatformIoDispatcherBase *this,FIoEncodedBlockRequest *param_1,
          TIntrusiveList<UE::FIoPlatformReadRequest> *param_2)

{
  int *piVar1;
  atomic<unsigned_short> *paVar2;
  atomic<unsigned_short> aVar3;
  int iVar4;
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> FVar5;
  FIoPlatformReadRequest *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> FVar11;
  undefined1 auStack_b8 [32];
  char local_98;
  undefined1 local_97 [7];
  void *local_90;
  uint local_88;
  atomic<EIoErrorCode> local_84;
  code *local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (CpuChannel->Enabled < 0) {
    local_98 = '\0';
  }
  else {
    local_98 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1406,"CompleteDecodedBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
               ,0x57e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1406);
  }
  FVar5 = (param_1->ScatterTargets).AllocatorInstance.SecondaryData;
  piVar1 = &(param_1->ScatterTargets).ArrayNum;
  iVar4 = *piVar1;
  FVar11 = (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)param_1;
  if (FVar5 != (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) {
    FVar11 = FVar5;
  }
  FVar5 = (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)
          ((longlong)FVar11 + (longlong)iVar4 * 0x18);
  while( true ) {
    if (*piVar1 != iVar4) {
      local_97[0] = 0;
      `TCheckedPointerIterator<UE::FIoEncodedBlockRequest::FScatterTarget,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_97);
    }
    if (FVar11 == FVar5) {
      if (local_98 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    pFVar6 = *(FIoPlatformReadRequest **)FVar11;
    if ((pFVar6->Type != ScatterGather) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Request.IsScatterGather()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                           ,0x582,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((pFVar6->field49_0x60).ScatterGather.RemainingBlocks == (atomic<unsigned_short>)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Request.ScatterGather.RemainingBlocks > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                           ,0x583,L""), bVar8)) break;
    if (param_1->ErrorCode == Ok) {
      LOCK();
      if (pFVar6->ErrorCode == (atomic<EIoErrorCode>)0x0) {
        pFVar6->ErrorCode = (atomic<EIoErrorCode>)0x0;
      }
      UNLOCK();
    }
    else {
      pFVar6->ErrorCode = (atomic<EIoErrorCode>)param_1->ErrorCode;
      pFVar6->FailedBlockId = (param_1->BlockKey).field0_0x0._s_0.BlockId;
    }
    LOCK();
    paVar2 = &(pFVar6->field49_0x60).ScatterGather.RemainingBlocks;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_short>)((short)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_short>)0x1) {
      local_78 = *(code **)&pFVar6->OnCompleted;
      local_50 = *(longlong **)&(pFVar6->OnCompleted).field_0x28;
      *(undefined8 *)&(pFVar6->OnCompleted).field_0x28 = 0;
      local_58 = *(undefined8 *)&(pFVar6->OnCompleted).field_0x20;
      local_68 = *(longlong *)&(pFVar6->OnCompleted).field_0x10;
      uStack_60 = *(undefined8 *)&(pFVar6->OnCompleted).field_0x18;
      if (local_78 != (code *)0x0) {
        *(undefined8 *)&pFVar6->OnCompleted = 0;
        local_90 = pFVar6->UserData;
        local_88 = pFVar6->FailedBlockId;
        local_84 = pFVar6->ErrorCode;
        Core::Private::Function::CheckCallable(local_78);
        pcVar7 = local_78;
        plVar10 = &local_68;
        if (local_50 != (longlong *)0x0) {
          plVar10 = local_50;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        (*pcVar7)(uVar9,&local_90);
      }
      if (((pFVar6 == (FIoPlatformReadRequest *)0x0) ||
          (pFVar6->Next != (FIoPlatformReadRequest *)0x0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                             ,0x72,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (param_2->Tail == (FIoPlatformReadRequest *)0x0) {
        if ((param_2->Head != (FIoPlatformReadRequest *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Head == nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                               ,0x7c,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        param_2->Head = pFVar6;
      }
      else {
        if ((param_2->Head == (FIoPlatformReadRequest *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Head != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                               ,0x76,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        param_2->Tail->Next = pFVar6;
      }
      param_2->Tail = pFVar6;
      if (local_78 != (code *)0x0) {
        plVar10 = &local_68;
        if (local_50 != (longlong *)0x0) {
          plVar10 = local_50;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    FVar11 = (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)((longlong)FVar11 + 0x18);
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// CompleteFileBlock @ 14148cec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::FPlatformIoDispatcherBase::CompleteFileBlock
          (FPlatformIoDispatcherBase *this,FIoFileBlockRequest *param_1)

{
  atomic<unsigned_int> *paVar1;
  TCounter<__int64,0,__int64,0> *pTVar2;
  undefined1 *puVar3;
  atomic<unsigned___int64> *paVar4;
  uchar *puVar5;
  TMap<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>_>
  *this_00;
  ulong64 *puVar6;
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> FVar7;
  FScriptContainerElement *pFVar8;
  atomic<unsigned_char> aVar9;
  EIoErrorCode EVar10;
  int iVar11;
  FIoBlockKey FVar12;
  FIoEncodedBlockRequest *pFVar13;
  FIoPlatformReadRequest *pFVar14;
  short *psVar15;
  code *pcVar16;
  FIoBufferHandle FVar17;
  FPlatformIoDispatcherRequestMgr *this_01;
  bool bVar18;
  ushort uVar19;
  uint uVar20;
  void *_Dst;
  ulonglong uVar21;
  atomic<unsigned_int> aVar22;
  atomic<unsigned_int> aVar23;
  atomic<unsigned_int> aVar24;
  atomic<unsigned_int> aVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ForElementType<UE::FIoEncodedBlockRequest_*> FVar29;
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> FVar30;
  FIoPlatformReadRequest *pFVar31;
  int iVar32;
  ForElementType<UE::FIoEncodedBlockRequest_*> FVar33;
  void *_Src;
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> FVar34;
  FIoPlatformReadRequest *pFVar35;
  ulonglong _Size;
  FMutex *pFVar36;
  bool bVar37;
  undefined1 auStackY_128 [32];
  undefined1 local_f6;
  undefined1 local_f5 [5];
  ForElementType<UE::FIoEncodedBlockRequest_*> local_f0;
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> local_e8;
  FIoBufferHandle local_e0;
  EIoErrorCode local_dc;
  uint local_d8;
  void *local_d0;
  ulonglong local_c8;
  FPlatformIoDispatcherRequestMgr *local_c0;
  TIntrusiveList<UE::FIoPlatformReadRequest> local_b8;
  undefined4 local_a8;
  ulong64 local_a0;
  ForElementType<UE::FIoEncodedBlockRequest_*> local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ForElementType<UE::FIoEncodedBlockRequest_*> local_50;
  uint local_48;
  int local_44;
  FIoFileBlockRequest *local_40;
  
  local_40 = (FIoFileBlockRequest *)(__security_cookie.value ^ (ulonglong)auStackY_128);
  bVar37 = -1 < CpuChannel->Enabled;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1210,"CompleteeFileBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
               ,0x4ba);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1210);
  }
  EVar10 = param_1->ErrorCode;
  if ((((EVar10 != Ok) && (EVar10 != Cancelled)) && (EVar10 != ReadError)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsIoErrorAnyOf(FileBlockRequest.ErrorCode, EIoErrorCode::Ok, EIoErrorCode::Cancelled, EIoErrorCode::ReadError)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                          ,0x4bb,L""), bVar18)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  local_dc = param_1->ErrorCode;
  FVar33 = (ForElementType<UE::FIoEncodedBlockRequest_*>)0x0;
  uVar21 = param_1->Size;
  local_a0 = param_1->FileOffset;
  local_e0.Handle = (param_1->BufferHandle).Handle;
  local_d0 = param_1->Buffer;
  local_50 = (ForElementType<UE::FIoEncodedBlockRequest_*>)0x0;
  local_48 = 0;
  local_44 = 8;
  LOCK();
  paVar4 = &(this->Stats).Stats.QueuedFilesystemReadBytes;
  *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -uVar21);
  UNLOCK();
  LOCK();
  paVar4 = &(this->Stats).Stats.QueuedFilesystemReads;
  *paVar4 = (atomic<unsigned___int64>)((longlong)*paVar4 + -1);
  UNLOCK();
  local_c8 = uVar21;
  FCsvProfiler::RecordCustomStat
            (&_GCsvStat_FrameBytesReadKB.Name,_GCsvStat_FrameBytesReadKB.CategoryIndex,
             (float)((double)uVar21 * __real_3f50000000000000),Accumulate);
  if (uVar21 != 0) {
    LOCK();
    (this->Stats).Stats.QueuedReadRequestsSizeCounter.Value =
         (atomic<__int64>)
         ((longlong)(this->Stats).Stats.QueuedReadRequestsSizeCounter.Value + -uVar21);
    UNLOCK();
    if (CountersChannel->Enabled < 0) {
      if (uVar21 == 0) goto LAB_14148d0c1;
    }
    else {
      if ((this->Stats).Stats.QueuedReadRequestsSizeCounter.CounterId == (atomic<unsigned_int>)0x0)
      {
        uVar19 = FCountersTrace::OutputInitCounter
                           ((this->Stats).Stats.QueuedReadRequestsSizeCounter.CounterName,
                            TraceCounterType_Int,
                            (this->Stats).Stats.QueuedReadRequestsSizeCounter.CounterFlags & 0xf);
        paVar1 = &(this->Stats).Stats.QueuedReadRequestsSizeCounter.CounterId;
        LOCK();
        if (*paVar1 == (atomic<unsigned_int>)0x0) {
          aVar22._2_2_ = 0;
          aVar22._0_2_ = uVar19;
          *paVar1 = aVar22;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (SUB42((this->Stats).Stats.QueuedReadRequestsSizeCounter.CounterId,0),
                 (long64)(this->Stats).Stats.QueuedReadRequestsSizeCounter.Value);
    }
    pTVar2 = &(this->Stats).Stats.CompletedReadRequestsSizeCounter;
    pTVar2->Value = pTVar2->Value + uVar21;
    if (-1 < CountersChannel->Enabled) {
      if ((this->Stats).Stats.CompletedReadRequestsSizeCounter.CounterId ==
          (atomic<unsigned_int>)0x0) {
        uVar19 = FCountersTrace::OutputInitCounter
                           ((this->Stats).Stats.CompletedReadRequestsSizeCounter.CounterName,
                            TraceCounterType_Int,
                            (this->Stats).Stats.CompletedReadRequestsSizeCounter.CounterFlags & 0xf)
        ;
        paVar1 = &(this->Stats).Stats.CompletedReadRequestsSizeCounter.CounterId;
        LOCK();
        if (*paVar1 == (atomic<unsigned_int>)0x0) {
          aVar23._2_2_ = 0;
          aVar23._0_2_ = uVar19;
          *paVar1 = aVar23;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (SUB42((this->Stats).Stats.CompletedReadRequestsSizeCounter.CounterId,0),
                 (this->Stats).Stats.CompletedReadRequestsSizeCounter.Value);
    }
  }
LAB_14148d0c1:
  local_c0 = &this->RequestMgr;
  pFVar36 = &(this->RequestMgr).Mutex;
  LOCK();
  bVar18 = pFVar36->State == (atomic<unsigned_char>)0x0;
  if (bVar18) {
    pFVar36->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar18) {
    FMutex::LockSlow(pFVar36);
  }
  if ((FIoFileBlockRequest *)&stack0xffffffffffffff70 != param_1) {
    FVar33 = (param_1->EncodedBlockRequests).AllocatorInstance.SecondaryData;
    if (FVar33 == (ForElementType<UE::FIoEncodedBlockRequest_*>)0x0) {
      local_90 = *(undefined8 *)(param_1->EncodedBlockRequests).AllocatorInstance.InlineData;
      uStack_88 = *(undefined8 *)((param_1->EncodedBlockRequests).AllocatorInstance.InlineData + 8);
      local_80 = *(undefined8 *)
                  ((param_1->EncodedBlockRequests).AllocatorInstance.InlineData + 0x10);
      uStack_78 = *(undefined8 *)
                   ((param_1->EncodedBlockRequests).AllocatorInstance.InlineData + 0x18);
      local_70 = *(undefined8 *)
                  ((param_1->EncodedBlockRequests).AllocatorInstance.InlineData + 0x20);
      uStack_68 = *(undefined8 *)
                   ((param_1->EncodedBlockRequests).AllocatorInstance.InlineData + 0x28);
      local_60 = *(undefined8 *)
                  ((param_1->EncodedBlockRequests).AllocatorInstance.InlineData + 0x30);
      uStack_58 = *(undefined8 *)
                   ((param_1->EncodedBlockRequests).AllocatorInstance.InlineData + 0x38);
    }
    (param_1->EncodedBlockRequests).AllocatorInstance.SecondaryData =
         (ForElementType<UE::FIoEncodedBlockRequest_*>)0x0;
    local_48 = (param_1->EncodedBlockRequests).ArrayNum;
    local_44 = (param_1->EncodedBlockRequests).ArrayMax;
    (param_1->EncodedBlockRequests).ArrayMax = 8;
    (param_1->EncodedBlockRequests).ArrayNum = 0;
    local_50 = FVar33;
  }
  FPlatformIoDispatcherRequestMgr::Destroy(&this->RequestMgr,param_1);
  LOCK();
  aVar9 = pFVar36->State;
  pFVar36->State = (atomic<unsigned_char>)((char)pFVar36->State + -1);
  UNLOCK();
  if (((byte)aVar9 & 2) != 0) {
    FMutex::WakeWaitingThread(pFVar36);
  }
  uVar26 = (ulonglong)(int)local_48;
  FVar30 = (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0;
  local_d8 = local_48;
  local_e8 = (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0;
  FVar29 = (ForElementType<UE::FIoEncodedBlockRequest_*>)&stack0xffffffffffffff70;
  if (FVar33 != (ForElementType<UE::FIoEncodedBlockRequest_*>)0x0) {
    FVar29 = FVar33;
  }
  local_98 = (ForElementType<UE::FIoEncodedBlockRequest_*>)((longlong)FVar29 + uVar26 * 8);
  do {
    FVar33 = local_98;
    local_f0 = FVar29;
    if (local_48 != (uint)uVar26) {
      local_f6 = 0;
      `TCheckedPointerIterator<UE::FIoEncodedBlockRequest_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_f6);
    }
    if (FVar29 == FVar33) {
      local_e8 = FVar30;
      bVar18 = FIoFileBlockMemoryPool::Free(&this->FileBlockMemoryPool,&local_e0);
      if (bVar18) {
        (**(code **)(this->_padding_ + 0x40))(this);
      }
      if (local_e8 != (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) {
        local_b8.Head = (FIoPlatformReadRequest *)0x0;
        local_b8.Tail = (FIoPlatformReadRequest *)0x0;
        FVar30 = local_e8;
        do {
          iVar11 = *(int *)((longlong)FVar30 + 0x38);
          FVar34 = FVar30;
          if (*(ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)
               ((longlong)FVar30 + 0x30) !=
              (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) {
            FVar34 = *(ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)
                      ((longlong)FVar30 + 0x30);
          }
          FVar7 = (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)
                  ((longlong)FVar34 + (longlong)iVar11 * 0x18);
          while( true ) {
            if (*(int *)((longlong)FVar30 + 0x38) != iVar11) {
              local_f5[0] = 0;
              `TCheckedPointerIterator<UE::FIoEncodedBlockRequest::FScatterTarget,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_f5);
            }
            if (FVar34 == FVar7) break;
            lVar28 = *(longlong *)FVar34;
            FVar34 = (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)
                     ((longlong)FVar34 + 0x18);
            LOCK();
            *(undefined4 *)(lVar28 + 0xb0) = *(undefined4 *)((longlong)FVar30 + 0xa0);
            UNLOCK();
          }
          CompleteDecodedBlock(this,(FIoEncodedBlockRequest *)FVar30,&local_b8);
          FVar30 = *(ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)
                    ((longlong)FVar30 + 0x68);
        } while (FVar30 != (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0);
        pFVar36 = &local_c0->Mutex;
        LOCK();
        bVar18 = pFVar36->State == (atomic<unsigned_char>)0x0;
        if (bVar18) {
          pFVar36->State = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (!bVar18) {
          FMutex::LockSlow(pFVar36);
        }
        this_01 = local_c0;
        pFVar31 = local_b8.Tail;
        pFVar35 = local_b8.Head;
        while (FVar30 = local_e8, pFVar35 != (FIoPlatformReadRequest *)0x0) {
          pFVar14 = pFVar35->Next;
          pFVar35->Next = (FIoPlatformReadRequest *)0x0;
          if (pFVar14 == (FIoPlatformReadRequest *)0x0) {
            pFVar31 = (FIoPlatformReadRequest *)0x0;
          }
          local_b8.Head = pFVar14;
          local_b8.Tail = pFVar31;
          FPlatformIoDispatcherRequestMgr::Destroy(this_01,pFVar35);
          pFVar35 = pFVar14;
        }
        while (FVar30 != (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) {
          FVar34 = *(ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)
                    ((longlong)FVar30 + 0x68);
          *(FIoEncodedBlockRequest **)((longlong)FVar30 + 0x68) = (FIoEncodedBlockRequest *)0x0;
          if ((1 < *(uchar *)((longlong)FVar30 + 0xa5)) &&
             (*(void **)((longlong)FVar30 + 0x70) != (void *)0x0)) {
            FMemory::Free(*(void **)((longlong)FVar30 + 0x70));
          }
          if (*(ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)
               ((longlong)FVar30 + 0x30) !=
              (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) {
            FMemory::Free((void *)*(ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)
                                   ((longlong)FVar30 + 0x30));
          }
          psVar15 = *(short **)
                     (((FIoEncodedBlockRequest *)((longlong)FVar30 + 0xa8))->ScatterTargets).
                     AllocatorInstance.InlineData;
          psVar15[1] = psVar15[1] + 1;
          FVar30 = FVar34;
          if (psVar15[1] == 0x400) {
            if ((*psVar15 != 0x400) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Slab->Freed == Slab->Allocated",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                                    ,0x48,L""), bVar18)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            ::operator_delete(psVar15,0x2c008);
          }
        }
        LOCK();
        aVar9 = pFVar36->State;
        pFVar36->State = (atomic<unsigned_char>)((char)pFVar36->State + -1);
        UNLOCK();
        if (((byte)aVar9 & 2) != 0) {
          FMutex::WakeWaitingThread(pFVar36);
        }
      }
      if (local_50 != (ForElementType<UE::FIoEncodedBlockRequest_*>)0x0) {
        FMemory::Free((void *)local_50);
      }
      if (bVar37) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    FVar34 = *(ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)FVar29;
    EVar10 = *(EIoErrorCode *)((longlong)FVar34 + 0xa0);
    if ((((EVar10 != Unknown) && (EVar10 != Cancelled)) && (EVar10 != ReadError)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsIoErrorAnyOf(EncodedBlockRequest->ErrorCode, EIoErrorCode::Unknown, EIoErrorCode::Cancelled, EIoErrorCode::ReadError)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                            ,0x4cd,L""), bVar18)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    if ((*(uchar *)((longlong)FVar34 + 0xa4) == '\0') &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("EncodedBlockRequest->RemainingFileBlocks > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                            ,0x4ce,L""), bVar18)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    if (local_dc == Ok) {
LAB_14148d238:
      if (*(EIoErrorCode *)((longlong)FVar34 + 0xa0) == Unknown) {
        uVar26 = *(ulong64 *)((longlong)FVar34 + 0x80) - local_a0;
        uVar27 = (ulonglong)(*(uint *)((longlong)FVar34 + 0x98) + 0xf) & 0xfffffff0;
        if (*(uchar *)((longlong)FVar34 + 0xa5) < 2) {
          if (((longlong)uVar26 < 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("OffsetInFileBlock >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                                  ,0x4f6,L""), bVar18)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          FVar17.Handle = local_e0.Handle;
          lVar28 = (longlong)local_e0.Handle;
          ((FIoBufferHandle *)((longlong)FVar34 + 0x88))->Handle = local_e0.Handle;
          if (uVar21 < uVar26) {
            uVar26 = uVar21;
          }
          *(void **)((longlong)FVar34 + 0x70) = (void *)(uVar26 + (longlong)local_d0);
          pFVar36 = &(this->FileBlockMemoryPool).Mutex;
          LOCK();
          bVar18 = pFVar36->State == (atomic<unsigned_char>)0x0;
          if (bVar18) {
            pFVar36->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar18) {
            FMutex::LockSlow(pFVar36);
          }
          if ((FVar17.Handle == 0xffffffff) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Handle.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                                  ,0x175,L""), bVar18)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          uVar20 = 0;
          if (FVar17.Handle < (this->FileBlockMemoryPool).MemoryBlocks.ArrayNum) {
            uVar20 = (uint)~FVar17.Handle >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pFVar8 = (this->FileBlockMemoryPool).MemoryBlocks.AllocatorInstance.Data +
                   lVar28 * 0x18 + 0x14;
          *(int *)pFVar8 = *(int *)pFVar8 + 1;
          LOCK();
          aVar9 = pFVar36->State;
          pFVar36->State = (atomic<unsigned_char>)((char)pFVar36->State + -1);
          UNLOCK();
          FVar29 = local_f0;
          if (((byte)aVar9 & 2) != 0) {
            FMutex::WakeWaitingThread(pFVar36);
            FVar29 = local_f0;
          }
        }
        else {
          _Dst = *(void **)((longlong)FVar34 + 0x70);
          if (_Dst == (void *)0x0) {
            _Dst = FMemory::Malloc(uVar27,0);
            *(void **)((longlong)FVar34 + 0x70) = _Dst;
          }
          if ((longlong)uVar26 < 0) {
            uVar21 = -uVar26;
            if ((longlong)-uVar26 < 0) {
              uVar21 = uVar26;
            }
            if (uVar27 < uVar21) {
              uVar21 = uVar27;
            }
            uVar27 = uVar27 - uVar21;
            _Dst = (void *)((longlong)_Dst + uVar21);
            _Src = local_d0;
            _Size = uVar27;
            if (local_c8 < uVar27) {
              _Size = local_c8;
            }
          }
          else {
            if (uVar21 < uVar26) {
              uVar26 = uVar21;
            }
            _Size = uVar27;
            if (uVar21 - uVar26 < uVar27) {
              _Size = uVar21 - uVar26;
            }
            _Src = (void *)(uVar26 + (longlong)local_d0);
          }
          if ((uVar27 < _Size) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InView.Size <= Size",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                                  ,0xdb,
                                  L"Failed to copy from a view of %llu bytes to a view of %llu bytes."
                                 ), bVar18)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          FVar29 = local_f0;
          if (_Size != 0) {
            memcpy(_Dst,_Src,_Size);
            FVar29 = local_f0;
          }
        }
      }
    }
    else if (*(EIoErrorCode *)((longlong)FVar34 + 0xa0) == Unknown) {
      *(EIoErrorCode *)((longlong)FVar34 + 0xa0) = local_dc;
      goto LAB_14148d238;
    }
    puVar5 = (uchar *)((longlong)FVar34 + 0xa4);
    *puVar5 = *puVar5 + 0xff;
    if (*puVar5 == '\0') {
      pFVar36 = &(this->RequestMgr).Mutex;
      LOCK();
      bVar18 = pFVar36->State == (atomic<unsigned_char>)0x0;
      if (bVar18) {
        pFVar36->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar18) {
        FMutex::LockSlow(pFVar36);
      }
      if (*(EIoErrorCode *)((longlong)FVar34 + 0xa0) != Cancelled) {
        if (*(int *)&(this->RequestMgr).EncodedBlockLookup.field_0x8 !=
            *(int *)&(this->RequestMgr).EncodedBlockLookup.field_0x34) {
          FVar12.field0_0x0 =
               (FIoBlockKey_u_0)
               *(FIoBlockKey_u_0 *)&((FIoBlockKey_u_0 *)((longlong)FVar34 + 0x60))->_s_0;
          TSet<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>,FDefaultSetAllocator>
          ::RemoveImpl<UE::FIoBlockKey>
                    ((TSet<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>,FDefaultSetAllocator>
                      *)&(this->RequestMgr).EncodedBlockLookup,
                     FVar12.field0_0x0._4_4_ * 0x17 + FVar12.field0_0x0._0_4_,
                     (FIoBlockKey *)&((FIoBlockKey_u_0 *)((longlong)FVar34 + 0x60))->_s_0);
        }
        if (*(int *)&(this->RequestMgr).EncodedBlockLookup.field_0x8 ==
            *(int *)&(this->RequestMgr).EncodedBlockLookup.field_0x34) {
          this_00 = &(this->RequestMgr).EncodedBlockLookup;
          for (lVar28 = 0x3f; 0x8fUL >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
          iVar32 = 1 << ((byte)lVar28 & 0x1f);
          local_a8 = (undefined4)lVar28;
          iVar11 = *(int *)&(this->RequestMgr).EncodedBlockLookup.field_0x48;
          if ((iVar11 < iVar32) || (iVar32 < iVar11)) {
            bVar18 = true;
          }
          else {
            bVar18 = false;
            TSet<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>,FDefaultSetAllocator>
            ::UnhashElements((TSet<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>,FDefaultSetAllocator>
                              *)this_00);
          }
          puVar3 = &(this->RequestMgr).EncodedBlockLookup.field_0xc;
          iVar11 = *(int *)puVar3;
          *(undefined4 *)&(this->RequestMgr).EncodedBlockLookup.field_0x8 = 0;
          if (iVar11 != 0x80) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0x80,(ForAnyElementType *)this_00,0,(int *)puVar3);
          }
          *(undefined4 *)&(this->RequestMgr).EncodedBlockLookup.field_0x30 = 0xffffffff;
          *(undefined4 *)&(this->RequestMgr).EncodedBlockLookup.field_0x34 = 0;
          iVar11 = *(int *)&(this->RequestMgr).EncodedBlockLookup.field_0x2c;
          *(undefined4 *)&(this->RequestMgr).EncodedBlockLookup.field_0x28 = 0;
          if ((iVar11 < 0x80) || (0x80 < iVar11)) {
            *(undefined4 *)&(this->RequestMgr).EncodedBlockLookup.field_0x2c = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)
                       &(this->RequestMgr).EncodedBlockLookup.field_0x10,0);
          }
          if (bVar18) {
            *(int *)&(this->RequestMgr).EncodedBlockLookup.field_0x48 = iVar32;
            TSet<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>,FDefaultSetAllocator>
            ::Rehash((TSet<TTuple<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoEncodedBlockRequest_*,0>,FDefaultSetAllocator>
                      *)this_00);
          }
        }
      }
      EVar10 = *(EIoErrorCode *)((longlong)FVar34 + 0xa0);
      if (EVar10 == Unknown) {
        if (((FVar34 == (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) ||
            (*(FIoEncodedBlockRequest **)((longlong)FVar34 + 0x68) != (FIoEncodedBlockRequest *)0x0)
            ) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                      ,0x72,L""), bVar18)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pFVar13 = (this->BlocksToDecode).Head;
        if ((this->BlocksToDecode).Tail == (FIoEncodedBlockRequest *)0x0) {
          if ((pFVar13 != (FIoEncodedBlockRequest *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Head == nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                  ,0x7c,L""), bVar18)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          (this->BlocksToDecode).Head = (FIoEncodedBlockRequest *)FVar34;
        }
        else {
          if ((pFVar13 == (FIoEncodedBlockRequest *)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Head != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                  ,0x76,L""), bVar18)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          ((this->BlocksToDecode).Tail)->Next = (FIoEncodedBlockRequest *)FVar34;
        }
        (this->BlocksToDecode).Tail = (FIoEncodedBlockRequest *)FVar34;
        uVar21 = (ulonglong)*(uint *)((longlong)FVar34 + 0x98);
        uVar26 = (ulonglong)*(uint *)((longlong)FVar34 + 0x9c);
        puVar6 = &(this->Stats).Stats.QueuedUncompressBytesIn;
        *puVar6 = *puVar6 + uVar21;
        puVar6 = &(this->Stats).Stats.QueuedUncompressBytesOut;
        *puVar6 = *puVar6 + uVar26;
        puVar6 = &(this->Stats).Stats.QueuedUncompressBlocks;
        *puVar6 = *puVar6 + 1;
        if ((uVar21 != 0) &&
           (pTVar2 = &(this->Stats).Stats.QueuedCompressedSizeCounter,
           pTVar2->Value = pTVar2->Value + uVar21, -1 < CountersChannel->Enabled)) {
          if ((this->Stats).Stats.QueuedCompressedSizeCounter.CounterId == (atomic<unsigned_int>)0x0
             ) {
            uVar19 = FCountersTrace::OutputInitCounter
                               ((this->Stats).Stats.QueuedCompressedSizeCounter.CounterName,
                                TraceCounterType_Int,
                                (this->Stats).Stats.QueuedCompressedSizeCounter.CounterFlags & 0xf);
            paVar1 = &(this->Stats).Stats.QueuedCompressedSizeCounter.CounterId;
            LOCK();
            if (*paVar1 == (atomic<unsigned_int>)0x0) {
              aVar24._2_2_ = 0;
              aVar24._0_2_ = uVar19;
              *paVar1 = aVar24;
            }
            UNLOCK();
          }
          FCountersTrace::OutputSetValue
                    (SUB42((this->Stats).Stats.QueuedCompressedSizeCounter.CounterId,0),
                     (this->Stats).Stats.QueuedCompressedSizeCounter.Value);
        }
        FVar34 = local_e8;
        if ((uVar26 != 0) &&
           (pTVar2 = &(this->Stats).Stats.QueuedUncompressedSizeCounter,
           pTVar2->Value = pTVar2->Value + uVar26, -1 < CountersChannel->Enabled)) {
          if ((this->Stats).Stats.QueuedUncompressedSizeCounter.CounterId ==
              (atomic<unsigned_int>)0x0) {
            uVar19 = FCountersTrace::OutputInitCounter
                               ((this->Stats).Stats.QueuedUncompressedSizeCounter.CounterName,
                                TraceCounterType_Int,
                                (this->Stats).Stats.QueuedUncompressedSizeCounter.CounterFlags & 0xf
                               );
            paVar1 = &(this->Stats).Stats.QueuedUncompressedSizeCounter.CounterId;
            LOCK();
            if (*paVar1 == (atomic<unsigned_int>)0x0) {
              aVar25._2_2_ = 0;
              aVar25._0_2_ = uVar19;
              *paVar1 = aVar25;
            }
            UNLOCK();
          }
          FCountersTrace::OutputSetValue
                    (SUB42((this->Stats).Stats.QueuedUncompressedSizeCounter.CounterId,0),
                     (this->Stats).Stats.QueuedUncompressedSizeCounter.Value);
          FVar34 = local_e8;
        }
      }
      else {
        if (((EVar10 != Cancelled) && (EVar10 != ReadError)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsIoErrorAnyOf(EncodedBlockRequest->ErrorCode, EIoErrorCode::Cancelled, EIoErrorCode::ReadError)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                                ,0x508,L""), bVar18)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        if (((FVar34 == (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) ||
            (*(FIoEncodedBlockRequest **)((longlong)FVar34 + 0x68) != (FIoEncodedBlockRequest *)0x0)
            ) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                      ,0x72,L""), bVar18)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        FVar7 = local_e8;
        if (local_e8 == (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) {
          bVar18 = FVar30 != (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0;
          FVar30 = FVar34;
          if ((bVar18) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Head == nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                  ,0x7c,L""), bVar18)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
        }
        else {
          if ((FVar30 == (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Head != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                  ,0x76,L""), bVar18)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          *(ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)((longlong)FVar7 + 0x68) =
               FVar34;
        }
      }
      local_e8 = FVar34;
      LOCK();
      aVar9 = pFVar36->State;
      pFVar36->State = (atomic<unsigned_char>)((char)pFVar36->State + -1);
      UNLOCK();
      FVar29 = local_f0;
      if (((byte)aVar9 & 2) != 0) {
        FMutex::WakeWaitingThread(pFVar36);
        FVar29 = local_f0;
      }
    }
    FVar29 = (ForElementType<UE::FIoEncodedBlockRequest_*>)((longlong)FVar29 + 8);
    uVar26 = (ulonglong)local_d8;
    uVar21 = local_c8;
  } while( true );
}

// DeleteRequest @ 141490f30

void __thiscall
UE::FPlatformIoDispatcherBase::DeleteRequest
          (FPlatformIoDispatcherBase *this,FIoFileReadRequest param_1)

{
  undefined1 *this_00;
  char cVar1;
  byte bVar2;
  
  if (param_1.Handle != 0) {
    this_00 = &(this->RequestMgr).EncodedBlockLookup.field_0x48;
    LOCK();
    cVar1 = *this_00;
    if (cVar1 == '\0') {
      *this_00 = 1;
    }
    UNLOCK();
    if (cVar1 != '\0') {
      FMutex::LockSlow((FMutex *)this_00);
    }
    FPlatformIoDispatcherRequestMgr::Destroy
              ((FPlatformIoDispatcherRequestMgr *)&this->SupportThread,
               (FIoPlatformReadRequest *)param_1.Handle);
    LOCK();
    bVar2 = *this_00;
    *this_00 = *this_00 + -1;
    UNLOCK();
    if ((bVar2 & 2) != 0) {
      FMutex::WakeWaitingThread((FMutex *)this_00);
    }
  }
  return;
}

// EnqueueBlockToDecode @ 141493460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::FPlatformIoDispatcherBase::EnqueueBlockToDecode
          (FPlatformIoDispatcherBase *this,FIoEncodedBlockRequest *param_1)

{
  code *pcVar1;
  bool bVar2;
  IIoChunkBlockDecoder *pIVar3;
  undefined ***pppuVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FName local_78;
  undefined1 local_70;
  void *local_68;
  ulonglong local_60;
  void *local_58;
  ulonglong local_50;
  code *local_48;
  undefined **local_38;
  FPlatformIoDispatcherBase *local_30;
  FIoEncodedBlockRequest *local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_1->ErrorCode != Unknown) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EncodedBlockRequest.ErrorCode == EIoErrorCode::Unknown",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                       ,0x531,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->EncodedData == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EncodedBlockRequest.EncodedData != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                       ,0x532,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->DecodedData == (void *)0x0) || ((param_1->BufferHandle).Handle == -1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EncodedBlockRequest.DecodedData != nullptr && EncodedBlockRequest.BufferHandle.IsValid()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                       ,0x533,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pIVar3 = FIoChunkBlockDecoder::Get();
  local_98 = *(undefined4 *)&(param_1->EncryptionKey).Data;
  uStack_94 = *(undefined4 *)((longlong)&(param_1->EncryptionKey).Data + 4);
  uStack_90 = (undefined4)(param_1->EncryptionKey).Size;
  uStack_8c = *(undefined4 *)((longlong)&(param_1->EncryptionKey).Size + 4);
  local_88 = *(undefined4 *)&(param_1->BlockHash).Data;
  uStack_84 = *(undefined4 *)((longlong)&(param_1->BlockHash).Data + 4);
  uStack_80 = (undefined4)(param_1->BlockHash).Size;
  uStack_7c = *(undefined4 *)((longlong)&(param_1->BlockHash).Size + 4);
  local_58 = param_1->DecodedData;
  local_50 = (ulonglong)param_1->BlockUncompressedSize;
  local_78 = param_1->CompressionMethod;
  local_68 = param_1->EncodedData;
  local_60 = (ulonglong)param_1->BlockCompressedSize;
  local_38 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::FPlatformIoDispatcherBase::EnqueueBlockToDecode'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_70 = 0;
  local_20 = (undefined ***)0x0;
  local_48 = Core::Private::Function::
             TFunctionRefCaller<`UE::FPlatformIoDispatcherBase::EnqueueBlockToDecode'::__l2::<lambda_1>,void,FIoChunkBlockDecodeResult_&&,FIoChunkBlockDecodeRequest_&>
             ::Call;
  local_30 = this;
  local_28 = param_1;
  (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_98);
  if (local_48 != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// EnqueueCompletedFileBlock @ 141493600

void __thiscall
UE::FPlatformIoDispatcherBase::EnqueueCompletedFileBlock
          (FPlatformIoDispatcherBase *this,FIoFileBlockRequest *param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  bool bVar2;
  
  if (this->bMultithreaded == false) {
    TIntrusiveList<UE::FIoFileBlockRequest>::AddTail(&this->FileBlocksToComplete,param_1);
    do {
      bVar2 = ProcessBlocks(this);
    } while (bVar2);
    return;
  }
  this_00 = &this->FileBlockMutex;
  LOCK();
  bVar2 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar2) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar2) {
    FMutex::LockSlow(this_00);
  }
  TIntrusiveList<UE::FIoFileBlockRequest>::AddTail(&this->FileBlocksToComplete,param_1);
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
                    /* WARNING: Could not recover jumptable at 0x00014149367b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((((this->SupportThread).Ptr)->WakeUpEvent).Event)->_padding_ + 0x10))();
  return;
}

// GetNextFileId @ 1414995e0

uint __thiscall UE::FPlatformIoDispatcherBase::GetNextFileId(FPlatformIoDispatcherBase *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  
  LOCK();
  paVar1 = &this->NextFileId;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 != (atomic<unsigned_int>)0x0) {
    return (uint)aVar2;
  }
  LOCK();
  paVar1 = &this->NextFileId;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
  UNLOCK();
  return (uint)aVar2;
}

// Init @ 14149b7c0

bool __thiscall UE::FPlatformIoDispatcherBase::Init(FPlatformIoDispatcherBase *this)

{
  return true;
}

// Initialize @ 14149c300

FIoStatus * __thiscall
UE::FPlatformIoDispatcherBase::Initialize
          (FPlatformIoDispatcherBase *this,FIoStatus *__return_storage_ptr__)

{
  bool *pbVar1;
  TUniquePtr<FRunnableThread,TDefaultDelete<FRunnableThread>_> *pTVar2;
  longlong *plVar3;
  FRunnableThread *pFVar4;
  FRunnableThread *pFVar5;
  undefined8 local_28;
  code *local_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pbVar1 = &this[-1].bMultithreaded;
  (**(code **)(*(longlong *)&this[-1].bMultithreaded + 0x30))(pbVar1);
  if ((__return_storage_ptr__->ErrorCode == Ok) &&
     ((this->FileBlockMutex).State != (atomic<unsigned_char>)0x0)) {
    pFVar4 = FRunnableThread::Create
                       ((FRunnable *)pbVar1,L"IoService #1",0,TPri_AboveNormal,0xffffffffffffffff,
                        None);
    pFVar5 = (FRunnableThread *)(this->Stats).Stats.LastFileReadInfo.Offset;
    if ((pFVar5 != pFVar4) &&
       ((this->Stats).Stats.LastFileReadInfo.Offset = (ulong64)pFVar4,
       pFVar5 != (FRunnableThread *)0x0)) {
      (**(code **)(pFVar5->_padding_ + 0x30))();
    }
    uStack_18 = 0;
    local_20 = ProcessBlocks;
    pFVar5 = ::operator_new(0x38);
    if (pFVar5 == (FRunnableThread *)0x0) {
      pFVar5 = (FRunnableThread *)0x0;
    }
    else {
      (pFVar5->ThreadName).Data.AllocatorInstance.Data = (FScriptContainerElement *)pbVar1;
      pFVar5->_padding_ = (longlong)&___7FIoServiceThread_UE__6B_;
      *(code **)&(pFVar5->ThreadName).Data.ArrayNum = local_20;
      pFVar5->Runnable = (FRunnable *)CONCAT44(uStack_14,uStack_18);
      FEventRef::FEventRef((FEventRef *)&pFVar5->ThreadInitSyncEvent,AutoReset);
      *(undefined1 *)&pFVar5->ThreadAffinityMask = 0;
      pFVar4 = FRunnableThread::Create
                         ((FRunnable *)pFVar5,L"IoService #2",0,TPri_BelowNormal,0xffffffffffffffff,
                          None);
      *(FRunnableThread **)&pFVar5->ThreadPriority = pFVar4;
    }
    pTVar2 = &this->Thread;
    if (pTVar2 == (TUniquePtr<FRunnableThread,TDefaultDelete<FRunnableThread>_> *)&local_28) {
      if (pFVar5 == (FRunnableThread *)0x0) {
        return __return_storage_ptr__;
      }
      plVar3 = *(longlong **)&pFVar5->ThreadPriority;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,1);
      }
      FEventRef::~FEventRef((FEventRef *)&pFVar5->ThreadInitSyncEvent);
      pFVar5->_padding_ = (longlong)&___7FRunnable__6B_;
    }
    else {
      pFVar4 = pTVar2->Ptr;
      pTVar2->Ptr = pFVar5;
      if (pFVar4 == (FRunnableThread *)0x0) {
        return __return_storage_ptr__;
      }
      plVar3 = *(longlong **)&pFVar4->ThreadPriority;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,1);
      }
      FEventRef::~FEventRef((FEventRef *)&pFVar4->ThreadInitSyncEvent);
      pFVar4->_padding_ = (longlong)&___7FRunnable__6B_;
      pFVar5 = pFVar4;
    }
    ::operator_delete(pFVar5,0x38);
  }
  return __return_storage_ptr__;
}

// OnInitialize @ 1414a76d0

FIoStatus * __thiscall
UE::FPlatformIoDispatcherBase::OnInitialize
          (FPlatformIoDispatcherBase *this,FIoStatus *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  TSharedString<wchar_t> TVar2;
  
  TVar2.Chars = FIoStatus::Ok.ErrorMessage.Chars;
  (__return_storage_ptr__->ErrorMessage).Chars = FIoStatus::Ok.ErrorMessage.Chars;
  if (TVar2.Chars != (wchar_t *)0x0) {
    LOCK();
    pwVar1 = TVar2.Chars + -4;
    *(int *)pwVar1 = *(int *)pwVar1 + 1;
    UNLOCK();
  }
  __return_storage_ptr__->ErrorCode = FIoStatus::Ok.ErrorCode;
  __return_storage_ptr__->SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
  return __return_storage_ptr__;
}

// ProcessBlocks @ 1414a8a60

bool __thiscall UE::FPlatformIoDispatcherBase::ProcessBlocks(FPlatformIoDispatcherBase *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  FIoFileBlockRequest *pFVar2;
  bool bVar3;
  byte bVar4;
  FIoFileBlockRequest *pFVar5;
  bool bVar6;
  bool bVar7;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1604,"ProcessIO",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
               ,0x644);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1604);
  }
  this_00 = &this->FileBlockMutex;
  LOCK();
  bVar7 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(this_00);
  }
  pFVar5 = (this->FileBlocksToComplete).Head;
  (this->FileBlocksToComplete).Head = (FIoFileBlockRequest *)0x0;
  (this->FileBlocksToComplete).Tail = (FIoFileBlockRequest *)0x0;
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  bVar4 = 0;
  if (pFVar5 != (FIoFileBlockRequest *)0x0) {
    while (pFVar5 != (FIoFileBlockRequest *)0x0) {
      pFVar2 = pFVar5->Next;
      pFVar5->Next = (FIoFileBlockRequest *)0x0;
      CompleteFileBlock(this,pFVar5);
      pFVar5 = pFVar2;
    }
    bVar4 = 1;
  }
  bVar7 = ProcessBlocksToComplete(this);
  bVar3 = ProcessBlocksToDecode(this);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)(bVar3 | bVar7 | bVar4);
}

// ProcessBlocksToComplete @ 1414a8b70

bool __thiscall
UE::FPlatformIoDispatcherBase::ProcessBlocksToComplete(FPlatformIoDispatcherBase *this)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  FIoPlatformReadRequest *pFVar3;
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> FVar4;
  short *psVar5;
  code *pcVar6;
  undefined1 uVar7;
  FIoEncodedBlockRequest *pFVar8;
  FIoPlatformReadRequest *pFVar9;
  FIoEncodedBlockRequest *pFVar10;
  FIoPlatformReadRequest *pFVar11;
  bool bVar12;
  TIntrusiveList<UE::FIoPlatformReadRequest> local_38;
  
  pFVar1 = &this->EncodedBlockMutex;
  LOCK();
  bVar12 = pFVar1->State == (atomic<unsigned_char>)0x0;
  if (bVar12) {
    pFVar1->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar12) {
    FMutex::LockSlow(pFVar1);
  }
  pFVar10 = (this->BlocksToComplete).Head;
  (this->BlocksToComplete).Head = (FIoEncodedBlockRequest *)0x0;
  (this->BlocksToComplete).Tail = (FIoEncodedBlockRequest *)0x0;
  LOCK();
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(pFVar1);
  }
  if (pFVar10 != (FIoEncodedBlockRequest *)0x0) {
    local_38.Head = (FIoPlatformReadRequest *)0x0;
    local_38.Tail = (FIoPlatformReadRequest *)0x0;
    pFVar8 = pFVar10;
    do {
      FIoChunkBlockMemoryPool::Free(&this->ChunkBlockMemoryPool,&pFVar8->BufferHandle);
      pFVar8->DecodedData = (void *)0x0;
      CompleteDecodedBlock(this,pFVar8,&local_38);
      pFVar8 = pFVar8->Next;
    } while (pFVar8 != (FIoEncodedBlockRequest *)0x0);
    pFVar1 = &(this->RequestMgr).Mutex;
    LOCK();
    bVar12 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar12) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    pFVar9 = local_38.Head;
    pFVar11 = local_38.Tail;
    if (!bVar12) {
      FMutex::LockSlow(pFVar1);
      pFVar9 = local_38.Head;
      pFVar11 = local_38.Tail;
    }
    while (pFVar9 != (FIoPlatformReadRequest *)0x0) {
      pFVar3 = pFVar9->Next;
      pFVar9->Next = (FIoPlatformReadRequest *)0x0;
      if (pFVar3 == (FIoPlatformReadRequest *)0x0) {
        pFVar11 = (FIoPlatformReadRequest *)0x0;
      }
      local_38.Head = pFVar3;
      local_38.Tail = pFVar11;
      FPlatformIoDispatcherRequestMgr::Destroy(&this->RequestMgr,pFVar9);
      pFVar9 = pFVar3;
    }
    while( true ) {
      do {
        if (pFVar10 == (FIoEncodedBlockRequest *)0x0) {
          LOCK();
          aVar2 = pFVar1->State;
          pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
          UNLOCK();
          if (((byte)aVar2 & 2) != 0) {
            FMutex::WakeWaitingThread(pFVar1);
          }
          return true;
        }
        pFVar8 = pFVar10->Next;
        pFVar10->Next = (FIoEncodedBlockRequest *)0x0;
        if ((1 < pFVar10->FileBlockCount) && (pFVar10->EncodedData != (void *)0x0)) {
          FMemory::Free(pFVar10->EncodedData);
        }
        FVar4 = (pFVar10->ScatterTargets).AllocatorInstance.SecondaryData;
        if (FVar4 != (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) {
          FMemory::Free((void *)FVar4);
        }
        psVar5 = *(short **)pFVar10[1].ScatterTargets.AllocatorInstance.InlineData;
        psVar5[1] = psVar5[1] + 1;
        pFVar10 = pFVar8;
      } while (psVar5[1] != 0x400);
      if ((*psVar5 != 0x400) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Slab->Freed == Slab->Allocated",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                              ,0x48,L""), bVar12)) break;
      ::operator_delete(psVar5,0x2c008);
    }
    pcVar6 = (code *)swi(3);
    uVar7 = (*pcVar6)();
    return (bool)uVar7;
  }
  return false;
}

// ProcessBlocksToDecode @ 1414a8d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::FPlatformIoDispatcherBase::ProcessBlocksToDecode(FPlatformIoDispatcherBase *this)

{
  longlong lVar1;
  int *piVar2;
  FMutex *pFVar3;
  atomic<unsigned_char> aVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FIoEncodedBlockRequest *pFVar9;
  FMemoryBlock *pFVar10;
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> FVar11;
  FLLMActiveTagsCapture *pFVar12;
  FName FVar13;
  FTagData *pFVar14;
  FIoPlatformReadRequest *pFVar15;
  short *psVar16;
  code *pcVar17;
  FIoBuffer this_00;
  bool bVar18;
  undefined1 uVar19;
  void *pvVar20;
  FTagData *pFVar21;
  IIoChunkBlockDecoder *pIVar22;
  FIoChunkBlockDecodeResult *pFVar23;
  undefined ***pppuVar24;
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> FVar25;
  FIoPlatformReadRequest *pFVar26;
  FIoPlatformReadRequest *pFVar27;
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> FVar28;
  undefined1 auStackY_218 [32];
  bool local_1e8;
  undefined1 local_1e7 [7];
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> local_1e0;
  FLLMScope local_1d8 [2];
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> local_1d0;
  TIntrusiveList<UE::FIoPlatformReadRequest> local_1c8;
  FIoBuffer local_1b8;
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> local_1b0;
  FMemScope local_1a8;
  FPlatformIoDispatcherBase *local_1a0;
  TMemoryView<void> local_198;
  TMemoryView<void> local_188 [2];
  undefined8 local_168;
  FIoChunkBlockDecodingParams local_158;
  FName local_108;
  undefined1 uStack_100;
  uint7 uStack_ff;
  FIoChunkBlockDecodeResult local_f8;
  FLLMActiveTagsScope local_e0;
  FMemScope local_cc;
  FMetadataRestoreScope local_c4 [12];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 local_78;
  ulonglong local_70;
  code *local_68;
  undefined **local_58;
  FPlatformIoDispatcherBase *local_50;
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> local_48;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pFVar9 = (this->BlocksToDecode).Head;
  FVar28 = (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0;
  local_1e8 = false;
  local_1e0 = (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0;
  local_1d0 = (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0;
  local_1c8.Head = (FIoPlatformReadRequest *)0x0;
  local_1c8.Tail = (FIoPlatformReadRequest *)0x0;
  local_1a0 = this;
  do {
    if (pFVar9 == (FIoEncodedBlockRequest *)0x0) {
LAB_1414a9499:
      pFVar3 = &(this->RequestMgr).Mutex;
      LOCK();
      bVar18 = pFVar3->State == (atomic<unsigned_char>)0x0;
      if (bVar18) {
        pFVar3->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      pFVar26 = local_1c8.Tail;
      pFVar27 = local_1c8.Head;
      if (!bVar18) {
        FMutex::LockSlow(pFVar3);
        pFVar26 = local_1c8.Tail;
        pFVar27 = local_1c8.Head;
      }
      while (pFVar27 != (FIoPlatformReadRequest *)0x0) {
        pFVar15 = pFVar27->Next;
        pFVar27->Next = (FIoPlatformReadRequest *)0x0;
        if (pFVar15 == (FIoPlatformReadRequest *)0x0) {
          pFVar26 = (FIoPlatformReadRequest *)0x0;
        }
        local_1c8.Head = pFVar15;
        local_1c8.Tail = pFVar26;
        FPlatformIoDispatcherRequestMgr::Destroy(&this->RequestMgr,pFVar27);
        pFVar27 = pFVar15;
      }
      while( true ) {
        do {
          if (FVar28 == (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) {
            pFVar3 = &(this->RequestMgr).Mutex;
            LOCK();
            aVar4 = pFVar3->State;
            pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
            UNLOCK();
            if (((byte)aVar4 & 2) != 0) {
              FMutex::WakeWaitingThread(pFVar3);
            }
            return local_1e8;
          }
          FVar11 = *(ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)
                    ((longlong)FVar28 + 0x68);
          *(undefined8 *)((longlong)FVar28 + 0x68) = 0;
          if ((1 < *(byte *)((longlong)FVar28 + 0xa5)) &&
             (*(void **)((longlong)FVar28 + 0x70) != (void *)0x0)) {
            FMemory::Free(*(void **)((longlong)FVar28 + 0x70));
          }
          if (*(void **)((longlong)FVar28 + 0x30) != (void *)0x0) {
            FMemory::Free(*(void **)((longlong)FVar28 + 0x30));
          }
          psVar16 = *(short **)((longlong)FVar28 + 0xa8);
          psVar16[1] = psVar16[1] + 1;
          FVar28 = FVar11;
        } while (psVar16[1] != 0x400);
        if ((*psVar16 != 0x400) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Slab->Freed == Slab->Allocated",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                                ,0x48,L""), bVar18)) break;
        ::operator_delete(psVar16,0x2c008);
      }
      pcVar17 = (code *)swi(3);
      uVar19 = (*pcVar17)();
      return (bool)uVar19;
    }
    if ((pFVar9->ErrorCode != Unknown) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextEncodedBlockRequest->ErrorCode == EIoErrorCode::Unknown",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                            ,0x5bf,L""), bVar18)) {
      pcVar17 = (code *)swi(3);
      uVar19 = (*pcVar17)();
      return (bool)uVar19;
    }
    if (((pFVar9->BufferHandle).Handle != -1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextEncodedBlockRequest->BufferHandle.IsValid() == false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                            ,0x5c0,L""), bVar18)) {
      pcVar17 = (code *)swi(3);
      uVar19 = (*pcVar17)();
      return (bool)uVar19;
    }
    pFVar10 = (this->ChunkBlockMemoryPool).FreeBlock;
    uVar5 = pFVar9->BlockUncompressedSize;
    if (pFVar10 == (FMemoryBlock *)0x0) {
      (pFVar9->BufferHandle).Handle = -1;
      pFVar9->DecodedData = (void *)0x0;
      goto LAB_1414a9499;
    }
    (this->ChunkBlockMemoryPool).FreeBlock = pFVar10->Next;
    pFVar10->Next = (FMemoryBlock *)0x0;
    if (pFVar10->Size < uVar5) {
      pvVar20 = FMemory::Realloc(pFVar10->Memory,(ulonglong)uVar5,0);
      pFVar10->Memory = pvVar20;
      pFVar10->Size = uVar5;
    }
    iVar6 = pFVar10->Index;
    if ((iVar6 == -1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("InHandle != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.h"
                            ,0x26,L""), bVar18)) {
      pcVar17 = (code *)swi(3);
      uVar19 = (*pcVar17)();
      return (bool)uVar19;
    }
    (pFVar9->BufferHandle).Handle = iVar6;
    pFVar9->DecodedData = pFVar10->Memory;
    if (iVar6 == -1) goto LAB_1414a9499;
    FVar11 = (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)(this->BlocksToDecode).Head
    ;
    if (FVar11 != (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) {
      pFVar9 = *(FIoEncodedBlockRequest **)((longlong)FVar11 + 0x68);
      (this->BlocksToDecode).Head = pFVar9;
      if (pFVar9 == (FIoEncodedBlockRequest *)0x0) {
        (this->BlocksToDecode).Tail = (FIoEncodedBlockRequest *)0x0;
      }
      *(FIoEncodedBlockRequest **)((longlong)FVar11 + 0x68) = (FIoEncodedBlockRequest *)0x0;
    }
    local_1e8 = true;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name1486,L"FileSystem/FileIoStore");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope(local_1d8,LLMScope_Name1486,false,None,Default,true);
    FMemScope::FMemScope(&local_1a8,&LLMScope_Name1486,true);
    iVar6 = *(int *)((longlong)FVar11 + 0x38);
    FVar28 = FVar11;
    if (*(ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)((longlong)FVar11 + 0x30) !=
        (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) {
      FVar28 = *(ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)
                ((longlong)FVar11 + 0x30);
    }
    FVar25 = (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)
             ((longlong)FVar28 + (longlong)iVar6 * 0x18);
    local_1b0 = FVar25;
    while( true ) {
      if (*(int *)((longlong)FVar11 + 0x38) != iVar6) {
        local_1e7[0] = 0;
        `TCheckedPointerIterator<UE::FIoEncodedBlockRequest::FScatterTarget,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_1e7);
      }
      if (FVar28 == FVar25) break;
      pFVar12 = *(FLLMActiveTagsCapture **)FVar28;
      if (*(int *)((longlong)FVar28 + 0x14) != 0) {
        if ((*(char *)((longlong)pFVar12[5].LLMTags + 0x14) != '\0') &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Request.IsScatterGather()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                                ,0x5d6,L""), bVar18)) {
          pcVar17 = (code *)swi(3);
          uVar19 = (*pcVar17)();
          return (bool)uVar19;
        }
        FVar13 = pFVar12[4].LLMTags[2]->Name;
        iVar7 = *(int *)((longlong)FVar13 + 8);
        if (CONCAT14(*(undefined1 *)((longlong)FVar13 + 0x18),iVar7) == 0) {
          uVar5 = *(uint *)((longlong)pFVar12[1].LLMTags + 4);
          iVar8 = *(int *)pFVar12[1].LLMTags;
          local_e0.LLMScopes.ArrayMax = 4;
          local_e0.LLMScopes.ArrayNum = iVar7;
          FLLMActiveTagsScope::CaptureLLMScopes(&local_e0,pFVar12);
          FMemScope::FMemScope(&local_cc,iVar8,true);
          FMetadataRestoreScope::FMetadataRestoreScope(local_c4,uVar5);
          pFVar21 = (FTagData *)
                    FIoBuffer::FIoBuffer(&local_1b8,*(ulong64 *)(*(longlong *)FVar28 + 0x98));
          pFVar14 = pFVar12[4].LLMTags[2];
          if (pFVar14 != pFVar21) {
            FVar13 = pFVar14->Name;
            pFVar14->Name = pFVar21->Name;
            (pFVar21->Name).ComparisonIndex = 0;
            (pFVar21->Name).Number = 0;
            if (FVar13 != (FName)0x0) {
              FIoBuffer::BufCore::CheckRefCount((BufCore *)FVar13);
              LOCK();
              lVar1 = (longlong)FVar13 + 0xc;
              iVar7 = *(int *)lVar1;
              *(int *)lVar1 = *(int *)lVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                FIoBuffer::BufCore::~BufCore((BufCore *)FVar13);
                ::operator_delete((void *)FVar13,0x20);
              }
            }
          }
          this_00.CorePtr.Reference = local_1b8.CorePtr.Reference;
          if (local_1b8.CorePtr.Reference != (BufCore *)0x0) {
            FIoBuffer::BufCore::CheckRefCount((BufCore *)local_1b8.CorePtr.Reference);
            LOCK();
            piVar2 = (int *)((longlong)this_00.CorePtr.Reference + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              FIoBuffer::BufCore::~BufCore((BufCore *)this_00.CorePtr.Reference);
              ::operator_delete((void *)this_00.CorePtr.Reference,0x20);
            }
          }
          FMetadataRestoreScope::~FMetadataRestoreScope(local_c4);
          FMemScope::~FMemScope(&local_cc);
          DestructItems<FLLMScope,int>((FLLMScope *)&local_e0,local_e0.LLMScopes.ArrayNum);
          FVar25 = local_1b0;
        }
      }
      FVar28 = (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)((longlong)FVar28 + 0x18)
      ;
    }
    FMemScope::~FMemScope(&local_1a8);
    FLLMScope::~FLLMScope(local_1d8);
    this = local_1a0;
    if ((local_1a0->bMultithreaded == false) ||
       (((*(longlong *)((longlong)FVar11 + 0x90) == 0 &&
         (*(longlong *)((longlong)FVar11 + 0x48) == 0)) &&
        (*(longlong *)((longlong)FVar11 + 0x58) == 0)))) {
      bVar18 = -1 < CpuChannel->Enabled;
      if (bVar18) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1516,"IoDispatcherDecodeBlock",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                   ,0x5ec);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1516);
      }
      local_158.CompressionFormat = *(FName *)((longlong)FVar11 + 0x90);
      local_158.BlockHash.Data = *(void **)((longlong)FVar11 + 0x50);
      local_158.BlockHash.Size = *(ulong64 *)((longlong)FVar11 + 0x58);
      local_198.Data = *(void **)((longlong)FVar11 + 0x78);
      local_158.EncryptionKey.Data = *(void **)((longlong)FVar11 + 0x40);
      local_158.EncryptionKey.Size = *(ulong64 *)((longlong)FVar11 + 0x48);
      local_198.Size = (ulong64)*(uint *)((longlong)FVar11 + 0x9c);
      local_188[0].Data = *(void **)((longlong)FVar11 + 0x70);
      local_188[0].Size = (ulong64)*(uint *)((longlong)FVar11 + 0x98);
      uStack_100 = 0;
      local_158._40_8_ = (ulonglong)uStack_ff << 8;
      local_108 = local_158.CompressionFormat;
      pFVar23 = FIoChunkEncoding::DecodeBlock(&local_f8,&local_158,local_188,&local_198);
      local_168 = *(undefined8 *)&pFVar23->ErrorCode;
      pvVar20 = (pFVar23->DecodedBlock).Data;
      *(undefined4 *)((longlong)FVar11 + 0xa0) = (undefined4)local_168;
      *(void **)((longlong)FVar11 + 0x78) = pvVar20;
      if (bVar18) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      ScatterDecodedBlock(this,(FIoEncodedBlockRequest *)FVar11);
      CompleteDecodedBlock(this,(FIoEncodedBlockRequest *)FVar11,&local_1c8);
      if ((*(longlong *)((longlong)FVar11 + 0x68) != 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                              ,0x72,L""), bVar18)) {
        pcVar17 = (code *)swi(3);
        uVar19 = (*pcVar17)();
        return (bool)uVar19;
      }
      FVar25 = local_1d0;
      FVar28 = local_1e0;
      if (local_1d0 == (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) {
        FVar28 = FVar11;
        FVar25 = FVar11;
        if ((local_1e0 != (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Head == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                ,0x7c,L""), bVar18)) {
          pcVar17 = (code *)swi(3);
          uVar19 = (*pcVar17)();
          return (bool)uVar19;
        }
      }
      else {
        if ((local_1e0 == (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Head != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                ,0x76,L""), bVar18)) {
          pcVar17 = (code *)swi(3);
          uVar19 = (*pcVar17)();
          return (bool)uVar19;
        }
        *(ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)((longlong)FVar25 + 0x68) =
             FVar11;
        FVar25 = local_1e0;
      }
      local_1e0 = FVar25;
      local_1d0 = FVar11;
      bVar18 = FIoFileBlockMemoryPool::Free
                         (&this->FileBlockMemoryPool,(FIoBufferHandle *)((longlong)FVar11 + 0x88));
      if (bVar18) {
        (**(code **)(this->_padding_ + 0x40))(this);
      }
      FIoChunkBlockMemoryPool::Free
                (&this->ChunkBlockMemoryPool,(FIoBufferHandle *)((longlong)FVar11 + 0x8c));
      *(undefined8 *)((longlong)FVar11 + 0x78) = 0;
      FIoDispatcherFilesystemStats::OnDecompressComplete
                (&(this->Stats).Stats,(ulonglong)*(uint *)((longlong)FVar11 + 0x98),
                 (ulonglong)*(uint *)((longlong)FVar11 + 0x9c));
    }
    else {
      if ((*(int *)((longlong)FVar11 + 0xa0) != 1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("EncodedBlockRequest.ErrorCode == EIoErrorCode::Unknown",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                              ,0x531,L""), bVar18)) {
        pcVar17 = (code *)swi(3);
        uVar19 = (*pcVar17)();
        return (bool)uVar19;
      }
      if ((*(longlong *)((longlong)FVar11 + 0x70) == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("EncodedBlockRequest.EncodedData != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                              ,0x532,L""), bVar18)) {
        pcVar17 = (code *)swi(3);
        uVar19 = (*pcVar17)();
        return (bool)uVar19;
      }
      if (((*(longlong *)((longlong)FVar11 + 0x78) == 0) ||
          (*(int *)((longlong)FVar11 + 0x8c) == -1)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("EncodedBlockRequest.DecodedData != nullptr && EncodedBlockRequest.BufferHandle.IsValid()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                              ,0x533,L""), bVar18)) {
        pcVar17 = (code *)swi(3);
        uVar19 = (*pcVar17)();
        return (bool)uVar19;
      }
      pIVar22 = FIoChunkBlockDecoder::Get();
      local_b8 = *(undefined4 *)((longlong)FVar11 + 0x40);
      uStack_b4 = *(undefined4 *)((longlong)FVar11 + 0x44);
      uStack_b0 = *(undefined4 *)((longlong)FVar11 + 0x48);
      uStack_ac = *(undefined4 *)((longlong)FVar11 + 0x4c);
      local_a8 = *(undefined4 *)((longlong)FVar11 + 0x50);
      uStack_a4 = *(undefined4 *)((longlong)FVar11 + 0x54);
      uStack_a0 = *(undefined4 *)((longlong)FVar11 + 0x58);
      uStack_9c = *(undefined4 *)((longlong)FVar11 + 0x5c);
      local_78 = *(undefined8 *)((longlong)FVar11 + 0x78);
      local_70 = (ulonglong)*(uint *)((longlong)FVar11 + 0x9c);
      local_98 = *(undefined8 *)((longlong)FVar11 + 0x90);
      local_88 = *(undefined8 *)((longlong)FVar11 + 0x70);
      local_80 = (ulonglong)*(uint *)((longlong)FVar11 + 0x98);
      local_58 = &Core::Private::Function::
                  TFunction_OwnedObject<`UE::FPlatformIoDispatcherBase::EnqueueBlockToDecode'::`2'::<lambda_1>,1,0>
                  ::_vftable_;
      local_90 = 0;
      local_40 = (undefined ***)0x0;
      local_50 = this;
      local_68 = Core::Private::Function::
                 TFunctionRefCaller<`UE::FPlatformIoDispatcherBase::EnqueueBlockToDecode'::__l2::<lambda_1>,void,FIoChunkBlockDecodeResult_&&,FIoChunkBlockDecodeRequest_&>
                 ::Call;
      local_48 = FVar11;
      (**(code **)((longlong)*pIVar22 + 8))(pIVar22,&local_b8);
      FVar28 = local_1e0;
      if (local_68 != (code *)0x0) {
        pppuVar24 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar24 = local_40;
        }
        (*(code *)(*pppuVar24)[2])();
        FVar28 = local_1e0;
      }
    }
    pFVar9 = (this->BlocksToDecode).Head;
  } while( true );
}

// ProcessCompletedFileBlocks @ 1414a9620

bool __thiscall
UE::FPlatformIoDispatcherBase::ProcessCompletedFileBlocks(FPlatformIoDispatcherBase *this)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  FIoFileBlockRequest *pFVar2;
  FIoFileBlockRequest *pFVar3;
  bool bVar4;
  
  this_00 = &this->FileBlockMutex;
  LOCK();
  bVar4 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    FMutex::LockSlow(this_00);
  }
  pFVar3 = (this->FileBlocksToComplete).Head;
  (this->FileBlocksToComplete).Head = (FIoFileBlockRequest *)0x0;
  (this->FileBlocksToComplete).Tail = (FIoFileBlockRequest *)0x0;
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  if (pFVar3 == (FIoFileBlockRequest *)0x0) {
    bVar4 = false;
  }
  else {
    while (pFVar3 != (FIoFileBlockRequest *)0x0) {
      pFVar2 = pFVar3->Next;
      pFVar3->Next = (FIoFileBlockRequest *)0x0;
      CompleteFileBlock(this,pFVar3);
      pFVar3 = pFVar2;
    }
    bVar4 = true;
  }
  return bVar4;
}

// ProcessDecodedBlock @ 1414a96d0

void __thiscall
UE::FPlatformIoDispatcherBase::ProcessDecodedBlock
          (FPlatformIoDispatcherBase *this,FIoEncodedBlockRequest *param_1,
          FIoChunkBlockDecodeResult *param_2,FIoChunkBlockDecodeRequest *param_3)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  EIoErrorCode EVar2;
  FIoServiceThread *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  if (((param_2->ErrorCode != Ok) && ((param_2->ErrorCode - SignatureError & 0xfffffffd) != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.ErrorCode == EIoErrorCode::Ok || Result.ErrorCode == EIoErrorCode::SignatureError || Result.ErrorCode == EIoErrorCode::CompressionError"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                         ,0x54a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  param_1->DecodedData = (param_2->DecodedBlock).Data;
  EVar2 = param_2->ErrorCode;
  param_1->ErrorCode = EVar2;
  if ((EVar2 == Unknown) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("EncodedBlockRequest.ErrorCode != EIoErrorCode::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                         ,0x54d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ScatterDecodedBlock(this,param_1);
  bVar5 = FIoFileBlockMemoryPool::Free(&this->FileBlockMemoryPool,&param_1->FileBufferHandle);
  if (bVar5) {
    (**(code **)(this->_padding_ + 0x40))(this);
  }
  this_00 = &this->EncodedBlockMutex;
  LOCK();
  bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    FMutex::LockSlow(this_00);
  }
  TIntrusiveList<UE::FIoEncodedBlockRequest>::AddTail(&this->BlocksToComplete,param_1);
  FIoDispatcherFilesystemStats::OnDecompressComplete
            (&(this->Stats).Stats,(ulonglong)param_1->BlockCompressedSize,
             (ulonglong)param_1->BlockUncompressedSize);
  LOCK();
  aVar1 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  pFVar3 = (this->SupportThread).Ptr;
  if (pFVar3 != (FIoServiceThread *)0x0) {
    (**(code **)(((pFVar3->WakeUpEvent).Event)->_padding_ + 0x10))();
  }
  return;
}

// ReadDirect @ 1414ac340

FIoFileReadRequest __thiscall
UE::FPlatformIoDispatcherBase::ReadDirect
          (FPlatformIoDispatcherBase *this,FIoDirectReadRequestParams *param_1,
          TUniqueFunction<void___cdecl(UE::FIoFileReadResult_&&)> *param_2)

{
  (param_1->FileHandle).Handle = 0;
  return (FIoFileReadRequest)(ulong64)param_1;
}

// Run @ 1414af450

uint __thiscall UE::FPlatformIoDispatcherBase::Run(FPlatformIoDispatcherBase *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001414af453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x38))();
  return uVar1;
}

// ScatterDecodedBlock @ 1414af610

/* WARNING: Removing unreachable block (ram,0x0001414af898) */

void __thiscall
UE::FPlatformIoDispatcherBase::ScatterDecodedBlock
          (FPlatformIoDispatcherBase *this,FIoEncodedBlockRequest *param_1)

{
  int *piVar1;
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *pFVar2;
  EIoErrorCode *pEVar3;
  TCounter<__int64,0,__int64,0> *pTVar4;
  atomic<unsigned_int> *paVar5;
  int iVar6;
  void *pvVar7;
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> FVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  code *pcVar12;
  double dVar13;
  bool bVar14;
  ushort uVar15;
  atomic<unsigned_int> aVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uchar *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 local_res18 [8];
  ulonglong local_res20;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1382,"IoDispatcherScatter",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
               ,0x566);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1382);
  }
  pEVar3 = &param_1->ErrorCode;
  if ((*pEVar3 == Unknown) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("EncodedBlockRequest.ErrorCode != EIoErrorCode::Unknown",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                          ,0x567,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  dVar13 = __real_3f50000000000000;
  pvVar7 = param_1->DecodedData;
  piVar1 = &(param_1->ScatterTargets).ArrayNum;
  FVar8 = (param_1->ScatterTargets).AllocatorInstance.SecondaryData;
  uVar20 = (ulonglong)param_1->BlockUncompressedSize;
  iVar6 = *piVar1;
  if (FVar8 != (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) {
    param_1 = (FIoEncodedBlockRequest *)FVar8;
  }
  puVar19 = (uchar *)((longlong)param_1 + 0x14);
  local_res20 = uVar20;
  while( true ) {
    if (*piVar1 != iVar6) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::FIoEncodedBlockRequest::FScatterTarget,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res18);
    }
    pFVar2 = (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)(puVar19 + -0x14);
    if (pFVar2 == (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)
                  ((longlong)param_1 + (longlong)iVar6 * 0x18)) {
      if (bVar22) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    lVar9 = *(longlong *)pFVar2->InlineData;
    if ((*(char *)(lVar9 + 0xb4) != '\0') &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Request.IsScatterGather()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                            ,0x56d,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if ((*(short *)(lVar9 + 0x84) == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Request.ScatterGather.RemainingBlocks > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                            ,0x56e,L""), bVar14)) break;
    if ((*(uint *)puVar19 != 0) && (*pEVar3 == Ok)) {
      lVar10 = **(longlong **)(*(longlong *)pFVar2->InlineData + 0x90);
      if ((*(char *)(lVar10 + 0x18) == '\0' && *(int *)(lVar10 + 8) == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ScatterTarget.Request->Dst.GetSize() > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                              ,0x573,L""), bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      plVar11 = (longlong *)**(longlong **)(lVar9 + 0x90);
      lVar9 = *plVar11;
      uVar21 = (ulonglong)CONCAT14((char)plVar11[3],(int)plVar11[1]);
      uVar17 = *(ulonglong *)(puVar19 + -0xc);
      if (uVar21 < *(ulonglong *)(puVar19 + -0xc)) {
        uVar17 = uVar21;
      }
      uVar18 = (ulonglong)*(uint *)(puVar19 + -4);
      if (uVar20 < *(uint *)(puVar19 + -4)) {
        uVar18 = uVar20;
      }
      uVar20 = (ulonglong)*(uint *)puVar19;
      if (local_res20 - uVar18 < (ulonglong)*(uint *)puVar19) {
        uVar20 = local_res20 - uVar18;
      }
      if ((uVar21 - uVar17 < uVar20) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InView.Size <= Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                              ,0xdb,
                              L"Failed to copy from a view of %llu bytes to a view of %llu bytes."),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (uVar20 != 0) {
        memcpy((void *)(lVar9 + uVar17),(void *)((longlong)pvVar7 + uVar18),uVar20);
      }
      uVar17 = (ulonglong)*(uint *)puVar19;
      FCsvProfiler::RecordCustomStat
                (&_GCsvStat_FrameBytesScatteredKB.Name,_GCsvStat_FrameBytesScatteredKB.CategoryIndex
                 ,(float)((double)uVar17 * dVar13),Accumulate);
      uVar20 = local_res20;
      if ((uVar17 != 0) &&
         (pTVar4 = &(this->Stats).Stats.ScatteredSizeCounter, pTVar4->Value = pTVar4->Value + uVar17
         , -1 < CountersChannel->Enabled)) {
        if ((this->Stats).Stats.ScatteredSizeCounter.CounterId == (atomic<unsigned_int>)0x0) {
          uVar15 = FCountersTrace::OutputInitCounter
                             ((this->Stats).Stats.ScatteredSizeCounter.CounterName,
                              TraceCounterType_Int,
                              (this->Stats).Stats.ScatteredSizeCounter.CounterFlags & 0xf);
          paVar5 = &(this->Stats).Stats.ScatteredSizeCounter.CounterId;
          LOCK();
          if (*paVar5 == (atomic<unsigned_int>)0x0) {
            aVar16._2_2_ = 0;
            aVar16._0_2_ = uVar15;
            *paVar5 = aVar16;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (SUB42((this->Stats).Stats.ScatteredSizeCounter.CounterId,0),
                   (this->Stats).Stats.ScatteredSizeCounter.Value);
        uVar20 = local_res20;
      }
    }
    puVar19 = puVar19 + 0x18;
  }
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

// ScatterGather @ 1414af980

FIoFileReadRequest __thiscall
UE::FPlatformIoDispatcherBase::ScatterGather
          (FPlatformIoDispatcherBase *this,FIoScatterGatherRequestParams *param_1,
          TUniqueFunction<void___cdecl(UE::FIoFileReadResult_&&)> *param_2)

{
  int *piVar1;
  atomic<unsigned_short> *paVar2;
  uint *this_00;
  undefined8 *puVar3;
  uchar *puVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  void *pvVar8;
  ulong64 uVar9;
  FIoBuffer *pFVar10;
  FSlab *pFVar11;
  code *pcVar12;
  undefined8 uVar13;
  FIoBlockKey FVar14;
  FIoBlockKey FVar15;
  bool bVar16;
  FIoFileBlockLink *pFVar17;
  ulonglong *puVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  FIoFileReadRequest FVar22;
  FIoPlatformReadRequest *pFVar23;
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> FVar24;
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> FVar25;
  FIoFileBlockRequest **ppFVar26;
  FIoFileBlockRequest **ppFVar27;
  ForElementType<UE::FIoEncodedBlockRequest_*> FVar28;
  undefined1 *puVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> FVar32;
  undefined1 *puVar33;
  ForElementType<UE::FIoEncodedBlockRequest_*> FVar34;
  ulonglong uVar35;
  ForElementType<UE::FIoEncodedBlockRequest_*> FVar36;
  longlong lVar37;
  ulonglong uVar38;
  undefined8 *in_R9;
  ulonglong *puVar39;
  bool local_108;
  undefined1 local_107 [7];
  FIoBlockKey_u_0 local_100;
  ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> local_f8;
  FIoPlatformReadRequest *local_f0;
  ulonglong local_e8;
  uint local_e0;
  TIntrusiveList<UE::FIoFileBlockRequest> local_d8;
  uint local_c8;
  FIoFileBlockLink *local_c0;
  ulonglong *local_b8;
  uint local_b0;
  undefined4 uStack_ac;
  uint local_a8;
  int iStack_a4;
  uint local_a0;
  undefined4 uStack_9c;
  ForElementType<UE::FIoEncodedBlockRequest_*> local_98;
  FIoPlatformReadRequest *local_90;
  ulonglong uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  TPairInitializer<UE::FIoBlockKey_const_&,UE::FIoFileBlockRequest_*_const_&> local_78;
  ulonglong *local_68;
  FIoBlockKey_u_0 *local_60;
  ForElementType<UE::FIoEncodedBlockRequest_*> *local_58;
  
  (param_1->FileHandle).Handle = 0;
  bVar16 = false;
  puVar29 = &(this->RequestMgr).EncodedBlockLookup.field_0x48;
  local_d8.Head = (FIoFileBlockRequest *)0x0;
  local_d8.Tail = (FIoFileBlockRequest *)0x0;
  LOCK();
  cVar5 = *puVar29;
  if (cVar5 == '\0') {
    *puVar29 = 1;
  }
  UNLOCK();
  if (cVar5 != '\0') {
    FMutex::LockSlow((FMutex *)puVar29);
  }
  (**(code **)(*(longlong *)&this[-1].bMultithreaded + 0x48))
            (&this[-1].bMultithreaded,&local_e8,*(undefined8 *)param_2);
  if ((local_e0 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("FileInfo.FileId > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                          ,0x3b6,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    FVar22.Handle = (*pcVar12)();
    return (FIoFileReadRequest)FVar22.Handle;
  }
  uVar7 = local_e0;
  pvVar8 = *(void **)&param_2->field_0x18;
  uVar9 = *(ulong64 *)&param_2->field_0x10;
  pFVar10 = *(FIoBuffer **)&param_2->field_0x8;
  pFVar23 = TSingleThreadedSlabAllocator<UE::FIoPlatformReadRequest,1024>::Alloc
                      ((TSingleThreadedSlabAllocator<UE::FIoPlatformReadRequest,1024> *)
                       &this->SupportThread);
  *(undefined8 *)&pFVar23->OnCompleted = *in_R9;
  *(undefined8 *)&(pFVar23->OnCompleted).field_0x28 = in_R9[5];
  in_R9[5] = 0;
  uVar13 = in_R9[3];
  *(undefined8 *)&(pFVar23->OnCompleted).field_0x10 = in_R9[2];
  *(undefined8 *)&(pFVar23->OnCompleted).field_0x18 = uVar13;
  *(undefined8 *)&(pFVar23->OnCompleted).field_0x20 = in_R9[4];
  if (*(longlong *)&pFVar23->OnCompleted != 0) {
    *in_R9 = 0;
  }
  local_c0 = (FIoFileBlockLink *)&pFVar23->field49_0x60;
  *(undefined2 *)((longlong)&pFVar23->field49_0x60 + 0x26) = 0;
  ((FDirectRead *)local_c0)->FileOffset = 0;
  *(undefined8 *)((longlong)&pFVar23->field49_0x60 + 8) = 0;
  *(undefined8 *)((longlong)&pFVar23->field49_0x60 + 0x10) = 0;
  *(undefined8 *)((longlong)&pFVar23->field49_0x60 + 0x18) = 0;
  (pFVar23->field49_0x60).ScatterGather.RemainingBlocks = (atomic<unsigned_short>)0x0;
  (pFVar23->field49_0x60).ScatterGather.FileId = uVar7;
  pFVar23->Dst = pFVar10;
  pFVar23->DstSize = uVar9;
  pFVar23->Type = ScatterGather;
  pFVar23->Next = (FIoPlatformReadRequest *)0x0;
  pFVar23->UserData = pvVar8;
  pFVar23->FailedBlockId = 0xffffffff;
  pFVar23->ErrorCode = (atomic<EIoErrorCode>)0x0;
  pFVar23->RefCount = 2;
  puVar39 = *(ulonglong **)&param_2[8].field_0x8;
  local_c8 = *(uint *)&param_2[8].field_0x10;
  uVar31 = (ulonglong)(int)local_c8;
  (param_1->FileHandle).Handle = (ulong64)pFVar23;
  if (puVar39 == (ulonglong *)0x0) {
    puVar39 = (ulonglong *)&param_2->field_0x28;
  }
  local_68 = puVar39 + uVar31 * 0xb;
  local_f0 = pFVar23;
  do {
    puVar18 = local_68;
    local_b8 = puVar39;
    if (*(int *)&param_2[8].field_0x10 != (int)uVar31) {
      local_107[0] = 0;
      `TCheckedPointerIterator<UE::FIoScatterGatherRequestParams::FScatterParams,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_107);
    }
    if (puVar39 == puVar18) {
      puVar29 = &(this->RequestMgr).EncodedBlockLookup.field_0x48;
      LOCK();
      bVar6 = *puVar29;
      *puVar29 = *puVar29 + -1;
      UNLOCK();
      if ((bVar6 & 2) != 0) {
        FMutex::WakeWaitingThread((FMutex *)puVar29);
      }
      this_00 = &(this->FileBlockMemoryPool).BlockSize;
      piVar1 = &(this->IoQueue).LastFileOffset.Priority;
      LOCK();
      bVar19 = (char)*piVar1 == '\0';
      if (bVar19) {
        *(undefined1 *)piVar1 = 1;
      }
      UNLOCK();
      if (!bVar19) {
        FMutex::LockSlow((FMutex *)&(this->IoQueue).LastFileOffset.Priority);
      }
      if (bVar16) {
        FIoQueue::Reprioritize((FIoQueue *)this_00);
      }
      FIoQueue::Enqueue((FIoQueue *)this_00,&local_d8);
      LOCK();
      piVar1 = &(this->IoQueue).LastFileOffset.Priority;
      iVar21 = *piVar1;
      *(char *)piVar1 = (char)*piVar1 + -1;
      UNLOCK();
      if ((iVar21 & 2) != 0) {
        FMutex::WakeWaitingThread((FMutex *)&(this->IoQueue).LastFileOffset.Priority);
      }
      (**(code **)(*(longlong *)&this[-1].bMultithreaded + 0x40))(&this[-1].bMultithreaded);
      return (FIoFileReadRequest)(ulong64)param_1;
    }
    local_b0 = local_e0;
    uStack_ac = (undefined4)puVar39[5];
    FVar14.field0_0x0._s_0.BlockId = uStack_ac;
    FVar14.field0_0x0._s_0.FileId = local_e0;
    local_108 = false;
    FVar24 = (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)
             FPlatformIoDispatcherRequestMgr::GetOrCreateEncodedBlockRequest
                       ((FPlatformIoDispatcherRequestMgr *)&this->SupportThread,FVar14,&local_108);
    uStack_88 = puVar39[4];
    uVar31 = puVar39[2];
    local_90 = pFVar23;
    if ((uVar31 != (uVar31 & 0xffffffff)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar19
       )) {
      pcVar12 = (code *)swi(3);
      FVar22.Handle = (*pcVar12)();
      return (FIoFileReadRequest)FVar22.Handle;
    }
    uVar35 = puVar39[3];
    local_80 = (undefined4)uVar31;
    if ((uVar35 != (uVar35 & 0xffffffff)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar19
       )) {
      pcVar12 = (code *)swi(3);
      FVar22.Handle = (*pcVar12)();
      return (FIoFileReadRequest)FVar22.Handle;
    }
    FVar32 = *(ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)
              ((longlong)FVar24 + 0x30);
    uStack_7c = (undefined4)uVar35;
    FVar25 = FVar24;
    if (FVar32 != (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) {
      FVar25 = FVar32;
    }
    if ((ulonglong)FVar25 <= &local_90) {
      FVar25 = FVar24;
      if (FVar32 != (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) {
        FVar25 = FVar32;
      }
      if ((&local_90 <
           (FIoPlatformReadRequest **)
           ((longlong)FVar25 + (longlong)*(int *)((longlong)FVar24 + 0x3c) * 0x18)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar12 = (code *)swi(3);
        FVar22.Handle = (*pcVar12)();
        return (FIoFileReadRequest)FVar22.Handle;
      }
    }
    iVar21 = *(int *)((longlong)FVar24 + 0x38);
    if (iVar21 == *(int *)((longlong)FVar24 + 0x3c)) {
      iVar21 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>_>
                         (0x818,(ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)FVar24
                          ,(int *)((longlong)FVar24 + 0x3c));
    }
    pFVar23 = local_f0;
    *(int *)((longlong)FVar24 + 0x38) = iVar21 + 1;
    FVar32 = FVar24;
    if (*(ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)((longlong)FVar24 + 0x30) !=
        (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget>)0x0) {
      FVar32 = *(ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)
                ((longlong)FVar24 + 0x30);
    }
    puVar3 = (undefined8 *)((longlong)FVar32 + (longlong)iVar21 * 0x18);
    *puVar3 = local_90;
    puVar3[1] = uStack_88;
    *(ulonglong *)((longlong)FVar32 + 0x10 + (longlong)iVar21 * 0x18) = CONCAT44(uStack_7c,local_80)
    ;
    LOCK();
    paVar2 = &(local_f0->field49_0x60).ScatterGather.RemainingBlocks;
    *paVar2 = (atomic<unsigned_short>)((short)*paVar2 + 1);
    UNLOCK();
    uVar31 = (ulonglong)*(uint *)((longlong)&(this->BlocksToComplete).Tail + 4);
    ppFVar26 = (FIoFileBlockRequest **)(*puVar39 / uVar31);
    ppFVar27 = (FIoFileBlockRequest **)
               (((*puVar39 - 1) + ((ulonglong)((int)puVar39[1] + 0xf) & 0xfffffff0)) / uVar31);
    local_78.Value = ppFVar27;
    if (((FIoFileBlockRequest **)0xfffffffe < ppFVar26) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("FirstFileBlockIndex < ((uint32) 0xffffffff)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                            ,0x3d7,L""), bVar19)) {
      pcVar12 = (code *)swi(3);
      FVar22.Handle = (*pcVar12)();
      return (FIoFileReadRequest)FVar22.Handle;
    }
    if (((FIoFileBlockRequest **)0xfffffffe < ppFVar27) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("LastFileBlockIndex < ((uint32) 0xffffffff)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                            ,0x3d8,L""), bVar19)) {
      pcVar12 = (code *)swi(3);
      FVar22.Handle = (*pcVar12)();
      return (FIoFileReadRequest)FVar22.Handle;
    }
    pFVar17 = local_c0;
    if (local_108 == false) {
      for (; ppFVar26 <= ppFVar27; ppFVar26 = (FIoFileBlockRequest **)((longlong)ppFVar26 + 1)) {
        if ((ppFVar26 != (FIoFileBlockRequest **)((ulonglong)ppFVar26 & 0xffffffff)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("IntFitsIn<OutType>(In)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
           bVar19)) {
          pcVar12 = (code *)swi(3);
          FVar22.Handle = (*pcVar12)();
          return (FIoFileReadRequest)FVar22.Handle;
        }
        local_a8 = local_e0;
        iStack_a4 = (int)ppFVar26;
        if (*(int *)&(this->RequestMgr).FileBlockLookup !=
            *(int *)&(this->RequestMgr).FileBlockLookup.field_0x2c) {
          puVar29 = *(undefined1 **)&(this->RequestMgr).FileBlockLookup.field_0x38;
          puVar33 = &(this->RequestMgr).FileBlockLookup.field_0x30;
          if (puVar29 != (undefined1 *)0x0) {
            puVar33 = puVar29;
          }
          iVar21 = *(int *)(puVar33 +
                           (ulonglong)
                           (iStack_a4 * 0x17 + local_e0 &
                           *(int *)&(this->RequestMgr).FileBlockLookup.field_0x40 - 1U) * 4);
          if (iVar21 != -1) {
            pFVar11 = (this->RequestMgr).FileBlockAllocator.CurrentSlab;
            do {
              puVar4 = pFVar11->Elements[0].Data.Pad + (longlong)iVar21 * 0x18 + -8;
              if (*(ulonglong *)(pFVar11->Elements[0].Data.Pad + (longlong)iVar21 * 0x18 + -8) ==
                  ((longlong)ppFVar26 << 0x20 | (ulonglong)local_e0)) {
                if (((puVar4 != (uchar *)0x0) && (lVar37 = *(longlong *)(puVar4 + 8), lVar37 != 0))
                   && (*(int *)(lVar37 + 0xb4) < *(int *)&param_2->field_0x20)) {
                  *(int *)(lVar37 + 0xb4) = *(int *)&param_2->field_0x20;
                  bVar16 = true;
                }
                break;
              }
              iVar21 = *(int *)(puVar4 + 0x10);
            } while (iVar21 != -1);
          }
        }
        FVar15.field0_0x0._s_0.BlockId = iStack_a4;
        FVar15.field0_0x0._s_0.FileId = local_e0;
        FPlatformIoDispatcherRequestMgr::AddToLink
                  ((FPlatformIoDispatcherRequestMgr *)&this->SupportThread,pFVar17,FVar15);
        puVar39 = local_b8;
        pFVar23 = local_f0;
      }
    }
    else {
      *(ulonglong *)((longlong)FVar24 + 0x80) = *puVar39;
      uVar31 = puVar39[8];
      *(ulonglong *)((longlong)FVar24 + 0x40) = puVar39[7];
      *(ulonglong *)((longlong)FVar24 + 0x48) = uVar31;
      uVar31 = puVar39[10];
      *(ulonglong *)((longlong)FVar24 + 0x50) = puVar39[9];
      *(ulonglong *)((longlong)FVar24 + 0x58) = uVar31;
      *(int *)((longlong)FVar24 + 0x98) = (int)puVar39[1];
      *(undefined4 *)((longlong)FVar24 + 0x9c) = *(undefined4 *)((longlong)puVar39 + 0xc);
      *(undefined8 *)((longlong)FVar24 + 0x90) = *(undefined8 *)((longlong)puVar39 + 0x2c);
      if (ppFVar26 <= ppFVar27) {
        do {
          if (((longlong)local_e8 < 1) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("FileInfo.FileSize > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                                  ,0x3f5,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            FVar22.Handle = (*pcVar12)();
            return (FIoFileReadRequest)FVar22.Handle;
          }
          if ((ppFVar26 != (FIoFileBlockRequest **)((ulonglong)ppFVar26 & 0xffffffff)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IntFitsIn<OutType>(In)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                  ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
             bVar19)) {
            pcVar12 = (code *)swi(3);
            FVar22.Handle = (*pcVar12)();
            return (FIoFileReadRequest)FVar22.Handle;
          }
          uStack_9c = SUB84(ppFVar26,0);
          local_a0 = local_e0;
          local_100._s_0.BlockId = uStack_9c;
          local_100._s_0.FileId = local_e0;
          if ((((ulonglong)ppFVar26 & 0xffffffff) == 0 && local_e0 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("BlockKey.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                                  ,0x2ba,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            FVar22.Handle = (*pcVar12)();
            return (FIoFileReadRequest)FVar22.Handle;
          }
          if (*(int *)&(this->RequestMgr).FileBlockLookup !=
              *(int *)&(this->RequestMgr).FileBlockLookup.field_0x2c) {
            puVar29 = *(undefined1 **)&(this->RequestMgr).FileBlockLookup.field_0x38;
            puVar33 = &(this->RequestMgr).FileBlockLookup.field_0x30;
            if (puVar29 != (undefined1 *)0x0) {
              puVar33 = puVar29;
            }
            iVar21 = *(int *)(puVar33 +
                             ((local_100.Hash >> 0x20) * 0x17 + local_100.Hash &
                             (ulonglong)(*(int *)&(this->RequestMgr).FileBlockLookup.field_0x40 - 1)
                             ) * 4);
            if (iVar21 != -1) {
              pFVar11 = (this->RequestMgr).FileBlockAllocator.CurrentSlab;
              do {
                puVar4 = pFVar11->Elements[0].Data.Pad + (longlong)iVar21 * 0x18 + -8;
                if (*(ulong64 *)(pFVar11->Elements[0].Data.Pad + (longlong)iVar21 * 0x18 + -8) ==
                    local_100.Hash) {
                  if ((puVar4 != (uchar *)0x0) &&
                     (FVar36 = *(ForElementType<UE::FIoEncodedBlockRequest_*> *)(puVar4 + 8),
                     FVar36 != (ForElementType<UE::FIoEncodedBlockRequest_*>)0x0)) {
                    FPlatformIoDispatcherRequestMgr::AddToLink
                              ((FPlatformIoDispatcherRequestMgr *)&this->SupportThread,local_c0,
                               (FIoBlockKey)local_100._s_0);
                    bVar19 = false;
                    goto LAB_1414b0011;
                  }
                  break;
                }
                iVar21 = *(int *)(puVar4 + 0x10);
              } while (iVar21 != -1);
            }
          }
          local_98 = (ForElementType<UE::FIoEncodedBlockRequest_*>)
                     TSingleThreadedSlabAllocator<UE::FIoFileBlockRequest,1024>::Construct<>
                               ((TSingleThreadedSlabAllocator<UE::FIoFileBlockRequest,1024> *)
                                &this->RequestMgr);
          bVar19 = true;
          ((FIoBlockKey_u_0 *)((longlong)local_98 + 0x78))->_s_0 = (FIoBlockKey_u_0_s_0)local_100;
          FPlatformIoDispatcherRequestMgr::AddToLink
                    ((FPlatformIoDispatcherRequestMgr *)&this->SupportThread,local_c0,
                     (FIoBlockKey)local_100._s_0);
          local_60 = &local_100;
          local_58 = &local_98;
          TSet<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UE::FIoBlockKey_const_&,UE::FIoFileBlockRequest_*_const_&>_>
                    ((TSet<TTuple<UE::FIoBlockKey,UE::FIoFileBlockRequest_*>,TDefaultMapHashableKeyFuncs<UE::FIoBlockKey,UE::FIoFileBlockRequest_*,0>,FDefaultSetAllocator>
                      *)&(this->RequestMgr).FileBlockAllocator,&local_78,(bool *)&local_60);
          FVar36 = local_98;
LAB_1414b0011:
          FVar34 = *(ForElementType<UE::FIoEncodedBlockRequest_*> *)((longlong)FVar36 + 0x40);
          FVar28 = FVar36;
          if (FVar34 != (ForElementType<UE::FIoEncodedBlockRequest_*>)0x0) {
            FVar28 = FVar34;
          }
          local_f8 = FVar24;
          if ((ulonglong)FVar28 <= &local_f8) {
            FVar28 = FVar36;
            if (FVar34 != (ForElementType<UE::FIoEncodedBlockRequest_*>)0x0) {
              FVar28 = FVar34;
            }
            if ((&local_f8 <
                 (ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)
                 ((longlong)FVar28 + (longlong)*(int *)((longlong)FVar36 + 0x4c) * 8)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar12 = (code *)swi(3);
              FVar22.Handle = (*pcVar12)();
              return (FIoFileReadRequest)FVar22.Handle;
            }
          }
          iVar21 = *(int *)((longlong)FVar36 + 0x48);
          if (iVar21 == *(int *)((longlong)FVar36 + 0x4c)) {
            iVar21 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::FIoEncodedBlockRequest_*>_>
                               (0x808,(ForElementType<UE::FIoEncodedBlockRequest_*> *)FVar36,
                                (int *)((longlong)FVar36 + 0x4c));
          }
          *(int *)((longlong)FVar36 + 0x48) = iVar21 + 1;
          FVar34 = FVar36;
          if (*(ForElementType<UE::FIoEncodedBlockRequest_*> *)((longlong)FVar36 + 0x40) !=
              (ForElementType<UE::FIoEncodedBlockRequest_*>)0x0) {
            FVar34 = *(ForElementType<UE::FIoEncodedBlockRequest_*> *)((longlong)FVar36 + 0x40);
          }
          *(ForElementType<UE::FIoEncodedBlockRequest::FScatterTarget> *)
           ((longlong)FVar34 + (longlong)iVar21 * 8) = local_f8;
          if (bVar19) {
            uVar7 = *(uint *)((longlong)&(this->BlocksToComplete).Tail + 4);
            lVar37 = (ulonglong)uVar7 * (longlong)ppFVar26;
            uVar31 = lVar37 + (ulonglong)uVar7;
            uVar35 = local_e8;
            if (uVar31 < local_e8) {
              uVar35 = uVar31;
            }
            *(undefined8 *)((longlong)FVar36 + 0x70) = *(undefined8 *)param_2;
            *(longlong *)((longlong)FVar36 + 0x80) = lVar37;
            *(ulonglong *)((longlong)FVar36 + 0x88) = local_e8;
            *(ulonglong *)((longlong)FVar36 + 0x90) = uVar35 - lVar37;
            *(undefined4 *)((longlong)FVar36 + 0xb4) = *(undefined4 *)&param_2->field_0x20;
            if ((*(longlong *)((longlong)FVar36 + 0x50) != 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                    ,0x72,L""), bVar19)) {
              pcVar12 = (code *)swi(3);
              FVar22.Handle = (*pcVar12)();
              return (FIoFileReadRequest)FVar22.Handle;
            }
            FVar28 = FVar36;
            if ((ForElementType<UE::FIoEncodedBlockRequest_*>)local_d8.Tail ==
                (ForElementType<UE::FIoEncodedBlockRequest_*>)0x0) {
              FVar34 = FVar36;
              if (((ForElementType<UE::FIoEncodedBlockRequest_*>)local_d8.Head !=
                   (ForElementType<UE::FIoEncodedBlockRequest_*>)0x0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Head == nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                      ,0x7c,L""), bVar19)) {
                pcVar12 = (code *)swi(3);
                FVar22.Handle = (*pcVar12)();
                return (FIoFileReadRequest)FVar22.Handle;
              }
            }
            else {
              if (((ForElementType<UE::FIoEncodedBlockRequest_*>)local_d8.Head ==
                   (ForElementType<UE::FIoEncodedBlockRequest_*>)0x0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Head != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                      ,0x76,L""), bVar19)) {
                pcVar12 = (code *)swi(3);
                FVar22.Handle = (*pcVar12)();
                return (FIoFileReadRequest)FVar22.Handle;
              }
              *(ForElementType<UE::FIoEncodedBlockRequest_*> *)((longlong)local_d8.Tail + 0x50) =
                   FVar36;
              FVar34 = (ForElementType<UE::FIoEncodedBlockRequest_*>)local_d8.Head;
            }
          }
          else {
            FVar34 = (ForElementType<UE::FIoEncodedBlockRequest_*>)local_d8.Head;
            FVar28 = (ForElementType<UE::FIoEncodedBlockRequest_*>)local_d8.Tail;
            if (*(int *)((longlong)FVar36 + 0xb4) < *(int *)&param_2->field_0x20) {
              *(int *)((longlong)FVar36 + 0xb4) = *(int *)&param_2->field_0x20;
              bVar16 = true;
            }
          }
          local_d8.Tail = (FIoFileBlockRequest *)FVar28;
          local_d8.Head = (FIoFileBlockRequest *)FVar34;
          uVar31 = *(ulonglong *)((longlong)FVar24 + 0x80);
          uVar35 = *(ulonglong *)((longlong)FVar36 + 0x80);
          uVar30 = ((ulonglong)(*(int *)((longlong)FVar24 + 0x98) + 0xf) & 0xfffffff0) + uVar31;
          uVar38 = *(longlong *)((longlong)FVar36 + 0x88) + uVar35;
          if (uVar35 < uVar31) {
            uVar35 = uVar31;
          }
          if (uVar30 < uVar38) {
            uVar38 = uVar30;
          }
          *(longlong *)((longlong)FVar36 + 0x98) =
               *(longlong *)((longlong)FVar36 + 0x98) + (uVar38 - uVar35 & 0xffffffff);
          if ((*(char *)((longlong)FVar24 + 0xa4) == -1) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("BlockRequest.RemainingFileBlocks < ((uint8) 0xff)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                                  ,0x414,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            FVar22.Handle = (*pcVar12)();
            return (FIoFileReadRequest)FVar22.Handle;
          }
          if ((*(char *)((longlong)FVar24 + 0xa5) == -1) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("BlockRequest.FileBlockCount < ((uint8) 0xff)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                                  ,0x415,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            FVar22.Handle = (*pcVar12)();
            return (FIoFileReadRequest)FVar22.Handle;
          }
          *(char *)((longlong)FVar24 + 0xa4) = *(char *)((longlong)FVar24 + 0xa4) + '\x01';
          ppFVar26 = (FIoFileBlockRequest **)((longlong)ppFVar26 + 1);
          *(char *)((longlong)FVar24 + 0xa5) = *(char *)((longlong)FVar24 + 0xa5) + '\x01';
          pFVar23 = local_f0;
          puVar39 = local_b8;
        } while (ppFVar26 <= local_78.Value);
      }
    }
    uVar31 = (ulonglong)local_c8;
    puVar39 = puVar39 + 0xb;
  } while( true );
}

// Stop @ 1414b1a60

void __thiscall UE::FPlatformIoDispatcherBase::Stop(FPlatformIoDispatcherBase *this)

{
  atomic<bool> aVar1;
  FIoServiceThread *pFVar2;
  FEvent *pFVar3;
  
  LOCK();
  this->bStopRequested = (atomic<bool>)0x1;
  UNLOCK();
  pFVar2 = (this->SupportThread).Ptr;
  if (pFVar2 != (FIoServiceThread *)0x0) {
    LOCK();
    aVar1 = pFVar2->bStopRequested;
    pFVar2->bStopRequested = (atomic<bool>)0x1;
    UNLOCK();
    pFVar3 = (pFVar2->WakeUpEvent).Event;
                    /* WARNING: Could not recover jumptable at 0x0001414b1a83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,aVar1);
    return;
  }
  return;
}

// Tick @ 1414b4a60

bool __thiscall UE::FPlatformIoDispatcherBase::Tick(FPlatformIoDispatcherBase *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->FileBlockMutex).State != (atomic<unsigned_char>)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8683676170245373442>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.h"
                       ,0x1fe,"!bMultithreaded");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// UpdatePriority @ 1414b89d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::FPlatformIoDispatcherBase::UpdatePriority
          (FPlatformIoDispatcherBase *this,FIoFileReadRequest param_1,int param_2)

{
  int *this_00;
  undefined1 *this_01;
  ForElementType<UE::FIoFileBlockRequest_*> FVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ForElementType<UE::FIoFileBlockRequest_*> FVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  TArray<UE::FIoFileBlockRequest_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  local_80;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_1.Handle == 0) {
    if (2 < (byte)LogPlatformIoDispatcher._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlatformIoDispatcher);
    }
  }
  else {
    bVar4 = false;
    this_01 = &(this->RequestMgr).EncodedBlockLookup.field_0x48;
    LOCK();
    cVar2 = *this_01;
    if (cVar2 == '\0') {
      *this_01 = 1;
    }
    UNLOCK();
    if (cVar2 != '\0') {
      FMutex::LockSlow((FMutex *)this_01);
    }
    this_00 = &(this->IoQueue).LastFileOffset.Priority;
    LOCK();
    bVar7 = (char)*this_00 == '\0';
    if (bVar7) {
      *(undefined1 *)this_00 = 1;
    }
    UNLOCK();
    if (!bVar7) {
      FMutex::LockSlow((FMutex *)this_00);
    }
    local_80.ArrayMax = 8;
    local_80.AllocatorInstance.SecondaryData = (ForElementType<UE::FIoFileBlockRequest_*>)0x0;
    local_80.ArrayNum = 0;
    FPlatformIoDispatcherRequestMgr::GetFileBlockRequests
              ((FPlatformIoDispatcherRequestMgr *)&this->SupportThread,
               (FIoPlatformReadRequest *)param_1.Handle,&local_80);
    iVar5 = local_80.ArrayNum;
    FVar6 = (ForElementType<UE::FIoFileBlockRequest_*>)&local_80;
    if (local_80.AllocatorInstance.SecondaryData != (ForElementType<UE::FIoFileBlockRequest_*>)0x0)
    {
      FVar6 = local_80.AllocatorInstance.SecondaryData;
    }
    FVar1 = (ForElementType<UE::FIoFileBlockRequest_*>)
            ((longlong)FVar6 + (longlong)local_80.ArrayNum * 8);
    while( true ) {
      if (local_80.ArrayNum != iVar5) {
        `TCheckedPointerIterator<UE::FIoFileBlockRequest_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_88);
      }
      if (FVar6 == FVar1) break;
      if (*(int *)(*(longlong *)FVar6 + 0xb4) < param_2) {
        *(int *)(*(longlong *)FVar6 + 0xb4) = param_2;
        bVar4 = true;
      }
      FVar6 = (ForElementType<UE::FIoFileBlockRequest_*>)((longlong)FVar6 + 8);
    }
    if (bVar4) {
      FIoQueue::Reprioritize((FIoQueue *)&(this->FileBlockMemoryPool).BlockSize);
    }
    if (local_80.AllocatorInstance.SecondaryData != (ForElementType<UE::FIoFileBlockRequest_*>)0x0)
    {
      FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
    }
    LOCK();
    iVar5 = *this_00;
    *(char *)this_00 = (char)*this_00 + -1;
    UNLOCK();
    if ((iVar5 & 2) != 0) {
      FMutex::WakeWaitingThread((FMutex *)this_00);
    }
    LOCK();
    bVar3 = *this_01;
    *this_01 = *this_01 + -1;
    UNLOCK();
    if ((bVar3 & 2) != 0) {
      FMutex::WakeWaitingThread((FMutex *)this_01);
    }
  }
  return;
}


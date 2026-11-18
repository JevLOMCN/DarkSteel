// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 35

// FFileIoStore @ 142a51710

FFileIoStore * __thiscall
FFileIoStore::FFileIoStore
          (FFileIoStore *this,
          TUniquePtr<IPlatformFileIoStore,TDefaultDelete<IPlatformFileIoStore>_> *param_1)

{
  FFileIoStoreStats *this_00;
  FCachedBlock *pFVar1;
  FCachedBlock *pFVar2;
  atomic<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*> aVar3;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this_00 = &this->Stats;
  this->ReadBufferSize = 0;
  this->_padding_ = (longlong)&_vftable__for__UE__IoStore__IFileIoDispatcherBackend__;
  (this->BackendContext).Object = (FIoDispatcherBackendContext *)0x0;
  (this->BackendContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  UE::FIoDispatcherFilesystemStats::FIoDispatcherFilesystemStats(&this_00->Stats);
  *(undefined8 *)&(this->BlockCache).CachedBlocks = 0;
  pFVar1 = &(this->BlockCache).CacheLruTail;
  *(undefined8 *)&(this->BlockCache).CachedBlocks.field_0x8 = 0;
  pFVar2 = &(this->BlockCache).CacheLruHead;
  *(undefined8 *)&(this->BlockCache).CachedBlocks.field_0x20 = 0;
  (this->BlockCache).Stats = this_00;
  (this->BlockCache).CacheMemory = (uchar *)0x0;
  *(undefined4 *)&(this->BlockCache).CachedBlocks.field_0x28 = 0;
  *(undefined4 *)&(this->BlockCache).CachedBlocks.field_0x2c = 0x80;
  *(undefined4 *)&(this->BlockCache).CachedBlocks.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BlockCache).CachedBlocks.field_0x34 = 0;
  *(undefined8 *)&(this->BlockCache).CachedBlocks.field_0x40 = 0;
  *(undefined4 *)&(this->BlockCache).CachedBlocks.field_0x48 = 0;
  pFVar2->LruPrev = (FCachedBlock *)0x0;
  (this->BlockCache).CacheLruHead.Key = 0;
  (this->BlockCache).CacheLruHead.Buffer = (uchar *)0x0;
  pFVar1->LruPrev = pFVar2;
  (this->BlockCache).CacheLruTail.LruNext = (FCachedBlock *)0x0;
  (this->BlockCache).CacheLruTail.Key = 0;
  (this->BlockCache).CacheLruTail.Buffer = (uchar *)0x0;
  (this->BlockCache).ReadBufferSize = 0;
  (this->BlockCache).CacheLruHead.LruNext = pFVar1;
  (this->BufferAllocator).Stats = this_00;
  (this->BufferAllocator).BufferSize = 0;
  (this->BufferAllocator).BufferMemory = (uchar *)0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->BufferAllocator).BuffersCritical,4000);
  (this->BufferAllocator).FirstFreeBuffer = (FFileIoStoreBuffer *)0x0;
  FFileIoStoreRequestAllocator::FFileIoStoreRequestAllocator(&this->RequestAllocator);
  (this->RequestQueue).bSortRequestsByOffset = false;
  (this->RequestQueue).Heap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestQueue).Heap.ArrayNum = 0;
  (this->RequestQueue).Heap.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->RequestQueue).CriticalSection,4000);
  (this->RequestQueue).SortedPriorityQueues.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestQueue).SortedPriorityQueues.ArrayNum = 0;
  (this->RequestQueue).SortedPriorityQueues.ArrayMax = 0;
  (this->RequestQueue).LastSortKey.Offset = 0;
  (this->RequestQueue).LastSortKey.Handle = 0;
  (this->RequestQueue).LastSortKey.Priority = 0;
  *(undefined8 *)&(this->RequestQueue).RequestPriorityCounts = 0;
  *(undefined8 *)&(this->RequestQueue).RequestPriorityCounts.field_0x8 = 0;
  *(undefined8 *)&(this->RequestQueue).RequestPriorityCounts.field_0x20 = 0;
  *(undefined4 *)&(this->RequestQueue).RequestPriorityCounts.field_0x28 = 0;
  *(undefined4 *)&(this->RequestQueue).RequestPriorityCounts.field_0x2c = 0x80;
  *(undefined4 *)&(this->RequestQueue).RequestPriorityCounts.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RequestQueue).RequestPriorityCounts.field_0x34 = 0;
  *(undefined8 *)&(this->RequestQueue).RequestPriorityCounts.field_0x40 = 0;
  *(undefined4 *)&(this->RequestQueue).RequestPriorityCounts.field_0x48 = 0;
  (this->RequestTracker).RequestAllocator = &this->RequestAllocator;
  (this->RequestTracker).RequestQueue = &this->RequestQueue;
  *(undefined8 *)&(this->RequestTracker).CompressedBlocksMap = 0;
  *(undefined8 *)&(this->RequestTracker).CompressedBlocksMap.field_0x8 = 0;
  *(undefined8 *)&(this->RequestTracker).CompressedBlocksMap.field_0x20 = 0;
  *(undefined4 *)&(this->RequestTracker).CompressedBlocksMap.field_0x28 = 0;
  *(undefined4 *)&(this->RequestTracker).CompressedBlocksMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->RequestTracker).CompressedBlocksMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RequestTracker).CompressedBlocksMap.field_0x34 = 0;
  *(undefined8 *)&(this->RequestTracker).CompressedBlocksMap.field_0x40 = 0;
  *(undefined4 *)&(this->RequestTracker).CompressedBlocksMap.field_0x48 = 0;
  *(undefined8 *)&(this->RequestTracker).RawBlocksMap = 0;
  *(undefined8 *)&(this->RequestTracker).RawBlocksMap.field_0x8 = 0;
  *(undefined8 *)&(this->RequestTracker).RawBlocksMap.field_0x20 = 0;
  *(undefined4 *)&(this->RequestTracker).RawBlocksMap.field_0x28 = 0;
  *(undefined4 *)&(this->RequestTracker).RawBlocksMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->RequestTracker).RawBlocksMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RequestTracker).RawBlocksMap.field_0x34 = 0;
  *(undefined8 *)&(this->RequestTracker).RawBlocksMap.field_0x40 = 0;
  *(undefined4 *)&(this->RequestTracker).RawBlocksMap.field_0x48 = 0;
  (this->PlatformImpl).Ptr = param_1->Ptr;
  param_1->Ptr = (IPlatformFileIoStore *)0x0;
  this->Thread = (FRunnableThread *)0x0;
  this->bStopRequested = (TAtomic<bool>)0x0;
  (this->IoStoreReadersLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->IoStoreReaders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IoStoreReaders).ArrayNum = 0;
  (this->IoStoreReaders).ArrayMax = 0;
  (this->CompressionContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompressionContexts).ArrayNum = 0;
  (this->CompressionContexts).ArrayMax = 0;
  (this->DecompressionTasks).Tail =
       (atomic<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*>)0x0;
  (this->DecompressionTasks).NumElems = (atomic<int>)0x0;
  aVar3 = (atomic<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*>)
          FMemory::Malloc(0x10,8);
  *(undefined8 *)aVar3 = 0;
  (this->DecompressionTasks).Tail = aVar3;
  (this->DecompressionTasks).TailCopy = (FNode *)aVar3;
  (this->DecompressionTasks).First = (FNode *)aVar3;
  (this->DecompressionTasks).Head = (FNode *)aVar3;
  LOCK();
  (this->DecompressionTasks).NumElems = (atomic<int>)0x0;
  UNLOCK();
  this->FirstFreeCompressionContext = (FFileIoStoreCompressionContext *)0x0;
  this->ReadyForDecompressionHead = (FFileIoStoreCompressedBlock *)0x0;
  this->ReadyForDecompressionTail = (FFileIoStoreCompressedBlock *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DecompressedBlocksCritical,4000);
  this->FirstDecompressedBlock = (FFileIoStoreCompressedBlock *)0x0;
  this->CompletedRequestsHead = (FIoRequestImpl *)0x0;
  this->CompletedRequestsTail = (FIoRequestImpl *)0x0;
  (this->OversubscriptionLimitReached).ID = 0;
  return this;
}

// ~FFileIoStore @ 142a55e30

void __thiscall FFileIoStore::~FFileIoStore(FFileIoStore *this)

{
  FRunnableThread *pFVar1;
  FScriptContainerElement *pFVar2;
  IPlatformFileIoStore *pIVar3;
  void *pvVar4;
  code *pcVar5;
  BOOLEAN BVar6;
  bool bVar7;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__UE__IoStore__IFileIoDispatcherBackend__;
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    this->Thread = (FRunnableThread *)0x0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DecompressedBlocksCritical);
  TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::
  ~TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>(&this->DecompressionTasks);
  DestructItems<TUniquePtr<FFileIoStoreCompressionContext,TDefaultDelete<FFileIoStoreCompressionContext>_>,int>
            ((TUniquePtr<FFileIoStoreCompressionContext,TDefaultDelete<FFileIoStoreCompressionContext>_>
              *)(this->CompressionContexts).AllocatorInstance.Data,
             (this->CompressionContexts).ArrayNum);
  pFVar2 = (this->CompressionContexts).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TUniquePtr<FFileIoStoreReader,TDefaultDelete<FFileIoStoreReader>_>,int>
            ((TUniquePtr<FFileIoStoreReader,TDefaultDelete<FFileIoStoreReader>_> *)
             (this->IoStoreReaders).AllocatorInstance.Data,(this->IoStoreReaders).ArrayNum);
  pFVar2 = (this->IoStoreReaders).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  BVar6 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->IoStoreReadersLock);
  if (BVar6 == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->IoStoreReadersLock);
  }
  pIVar3 = (this->PlatformImpl).Ptr;
  if (pIVar3 != (IPlatformFileIoStore *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  *(undefined4 *)&(this->RequestTracker).RawBlocksMap.field_0x48 = 0;
  pvVar4 = *(void **)&(this->RequestTracker).RawBlocksMap.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FFileIoStoreBlockKey,FFileIoStoreReadRequest_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->RequestTracker).RawBlocksMap);
  *(undefined4 *)&(this->RequestTracker).CompressedBlocksMap.field_0x48 = 0;
  pvVar4 = *(void **)&(this->RequestTracker).CompressedBlocksMap.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->RequestTracker).CompressedBlocksMap);
  FFileIoStoreRequestQueue::~FFileIoStoreRequestQueue(&this->RequestQueue);
  FFileIoStoreRequestAllocator::~FFileIoStoreRequestAllocator(&this->RequestAllocator);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->BufferAllocator).BuffersCritical);
  FFileIoStoreBlockCache::~FFileIoStoreBlockCache(&this->BlockCache);
  UE::FIoDispatcherFilesystemStats::~FIoDispatcherFilesystemStats(&(this->Stats).Stats);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackendContext).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// ~FFileIoStore @ 142a55fe0

void __thiscall UE::IoStore::FFileIoStore::~FFileIoStore(FFileIoStore *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->RwLock);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->RwLock);
  }
  DestructItems<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>,int>
            ((TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_> *)
             (this->MountedContainers).AllocatorInstance.Data,(this->MountedContainers).ArrayNum);
  pFVar1 = (this->MountedContainers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 142a59890

void __thiscall `FFileIoStore::GetCompletedIoRequests'::__l156::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  code *pcVar2;
  bool bVar3;
  atomic<unsigned___int64> aVar4;
  FReadAccessScope local_28;
  
  LOCK();
  FileIoStoreImpl::ActiveScatterTasks = (atomic<int>)((int)FileIoStoreImpl::ActiveScatterTasks + 1);
  UNLOCK();
  FFileIoStore::ScatterBlock
            (*(FFileIoStore **)this,*(FFileIoStoreCompressedBlock **)((longlong)this + 8),true);
  LOCK();
  FileIoStoreImpl::ActiveScatterTasks = (atomic<int>)((int)FileIoStoreImpl::ActiveScatterTasks + -1)
  ;
  UNLOCK();
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x18) == 0) {
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
  this_00 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)(lVar1 + 0x18);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_00,&local_28);
  if (*(int *)&this_00[2].AccessDetector.State == 0) {
    aVar4 = (atomic<unsigned___int64>)0x0;
  }
  else {
    aVar4 = this_00[1].AccessDetector.State;
  }
  (**(code **)(*(longlong *)aVar4 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// AllocCompressionContext @ 142a5fae0

FFileIoStoreCompressionContext * __thiscall
FFileIoStore::AllocCompressionContext(FFileIoStore *this)

{
  FFileIoStoreCompressionContext *pFVar1;
  
  pFVar1 = this->FirstFreeCompressionContext;
  if (pFVar1 != (FFileIoStoreCompressionContext *)0x0) {
    this->FirstFreeCompressionContext = pFVar1->Next;
  }
  return pFVar1;
}

// CancelIoRequest @ 142a60c30

void __thiscall FFileIoStore::CancelIoRequest(FFileIoStore *this,FIoRequestImpl *param_1)

{
  FFileIoStoreResolvedRequest *pFVar1;
  bool bVar2;
  
  pFVar1 = param_1->BackendData;
  if (pFVar1 != (FFileIoStoreResolvedRequest *)0x0) {
    bVar2 = FFileIoStoreRequestTracker::CancelIoRequest
                      ((FFileIoStoreRequestTracker *)
                       &(this->RequestQueue).RequestPriorityCounts.field_0x48,pFVar1);
    if (bVar2) {
      pFVar1->bCancelled = true;
      CompleteDispatcherRequest((FFileIoStore *)&this[-1].OversubscriptionLimitReached,pFVar1);
      return;
    }
    (**(code **)(**(longlong **)&(this->RequestTracker).RawBlocksMap.field_0x48 + 0x38))();
  }
  return;
}

// CompleteDispatcherRequest @ 142a64530

void __thiscall
FFileIoStore::CompleteDispatcherRequest(FFileIoStore *this,FFileIoStoreResolvedRequest *param_1)

{
  FIoRequestImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (FFileIoStoreResolvedRequest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResolvedRequest",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                       ,0x66d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1->DispatcherRequest == (FIoRequestImpl *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResolvedRequest->DispatcherRequest",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                       ,0x66e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = param_1->DispatcherRequest;
  param_1->DispatcherRequest = (FIoRequestImpl *)0x0;
  if (param_1->bFailed == false) {
    FIoStoreTrace::RequestCompleted(pFVar1,param_1->ResolvedSize);
  }
  else {
    if (pFVar1->LastBackendError != Cancelled) {
      pFVar1->LastBackendError = ReadError;
    }
    FIoStoreTrace::RequestFailed(pFVar1);
  }
  pFVar1->BackendData = (void *)0x0;
  if (this->CompletedRequestsTail == (FIoRequestImpl *)0x0) {
    this->CompletedRequestsHead = pFVar1;
  }
  else {
    this->CompletedRequestsTail->NextRequest = pFVar1;
  }
  this->CompletedRequestsTail = pFVar1;
  pFVar1->NextRequest = (FIoRequestImpl *)0x0;
  return;
}

// DoesChunkExist @ 142a6a700

bool __thiscall FFileIoStore::DoesChunkExist(FFileIoStore *this,FIoChunkId *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  FFileIoStoreReader *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FIoOffsetAndLength *pFVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  
  AcquireSRWLockShared((PSRWLOCK)&this->bIsMultithreaded);
  puVar7 = (this->IoStoreReadersLock).Mutex.Mutex.Ptr;
  iVar2 = *(int *)&(this->IoStoreReaders).AllocatorInstance.Data;
  puVar1 = puVar7 + iVar2;
  while( true ) {
    if (*(int *)&(this->IoStoreReaders).AllocatorInstance.Data != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FFileIoStoreReader,TDefaultDelete<FFileIoStoreReader>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar7 == puVar1) {
      bVar4 = false;
      goto LAB_142a6a7ad;
    }
    this_00 = (FFileIoStoreReader *)*puVar7;
    if (this_00->bClosed != false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bClosed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                         ,0x328,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pFVar6 = FFileIoStoreReader::FindChunkInternal(this_00,param_1);
    if (pFVar6 != (FIoOffsetAndLength *)0x0) break;
    puVar7 = puVar7 + 1;
  }
  bVar4 = true;
LAB_142a6a7ad:
  ReleaseSRWLockShared((PSRWLOCK)&this->bIsMultithreaded);
  return bVar4;
}

// FinalizeCompressedBlock @ 142a6d440

void __thiscall
FFileIoStore::FinalizeCompressedBlock(FFileIoStore *this,FFileIoStoreCompressedBlock *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  FFileIoStoreBuffer *pFVar3;
  FFileIoStoreCompressionContext *pFVar4;
  ForElementType<FFileIoStoreBlockScatter> FVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ForElementType<FFileIoStoreReadRequest_*> FVar9;
  longlong *plVar10;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ForElementType<FFileIoStoreBlockScatter> FVar11;
  
  UE::FIoDispatcherFilesystemStats::OnDecompressComplete
            (&(this->Stats).Stats,(ulonglong)param_1->CompressedSize,
             (ulonglong)param_1->UncompressedSize);
  iVar2 = (param_1->RawBlocks).ArrayNum;
  if (iVar2 < 2) {
    if ((iVar2 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar9 = (param_1->RawBlocks).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<FFileIoStoreReadRequest_*>)0x0) {
      FVar9 = (ForElementType<FFileIoStoreReadRequest_*>)&param_1->RawBlocks;
    }
    lVar12 = *(longlong *)FVar9;
    if ((*(int *)(lVar12 + 0x3c) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawBlock->BufferRefCount > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                           ,0x696,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    piVar1 = (int *)(lVar12 + 0x3c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if ((((*(longlong *)(lVar12 + 0x30) == 0) && (*(char *)(lVar12 + 0xc6) == '\0')) &&
          (*(char *)(lVar12 + 0xc5) == '\0')) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawBlock->Buffer || RawBlock->bCancelled || RawBlock->bFailed",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                             ,0x699,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = *(FFileIoStoreBuffer **)(lVar12 + 0x30);
      if (pFVar3 != (FFileIoStoreBuffer *)0x0) {
        lpCriticalSection = &(this->BufferAllocator).BuffersCritical;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        pFVar3->Next = (this->BufferAllocator).FirstFreeBuffer;
        (this->BufferAllocator).FirstFreeBuffer = pFVar3;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        UE::FIoDispatcherFilesystemStats::OnBufferReleased(&((this->BufferAllocator).Stats)->Stats);
        (**(code **)((longlong)*(this->PlatformImpl).Ptr + 0x38))();
        *(undefined8 *)(lVar12 + 0x30) = 0;
      }
    }
  }
  else {
    if (((param_1->CompressedDataBuffer == (uchar *)0x0) && (param_1->bCancelled == false)) &&
       ((param_1->bFailed == false &&
        (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("CompressedBlock->CompressedDataBuffer || CompressedBlock->bCancelled || CompressedBlock->bFailed"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                            ,0x68d,L""), bVar7)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (param_1->CompressedDataBuffer != (uchar *)0x0) {
      FMemory::Free(param_1->CompressedDataBuffer);
    }
  }
  if (((param_1->CompressionContext == (FFileIoStoreCompressionContext *)0x0) &&
      (param_1->bCancelled == false)) &&
     ((param_1->bFailed == false &&
      (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("CompressedBlock->CompressionContext || CompressedBlock->bCancelled || CompressedBlock->bFailed"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                          ,0x6a1,L""), bVar7)))) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = param_1->CompressionContext;
  if (pFVar4 != (FFileIoStoreCompressionContext *)0x0) {
    pFVar4->Next = this->FirstFreeCompressionContext;
    this->FirstFreeCompressionContext = pFVar4;
  }
  lVar12 = (longlong)(param_1->ScatterList).ArrayNum;
  uVar13 = 0;
  if (0 < lVar12) {
    lVar14 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar13 < (param_1->ScatterList).ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar5 = (param_1->ScatterList).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<FFileIoStoreBlockScatter>)&param_1->ScatterList;
      if (FVar5 != (ForElementType<FFileIoStoreBlockScatter>)0x0) {
        FVar11 = FVar5;
      }
      plVar10 = (longlong *)((longlong)FVar11 + lVar14);
      UE::FIoDispatcherFilesystemStats::OnBytesScattered(&(this->Stats).Stats,plVar10[3]);
      *(byte *)(*plVar10 + 0x38) = *(byte *)(*plVar10 + 0x38) | param_1->bFailed;
      if ((((param_1->bCancelled != false) && (*(longlong *)*plVar10 != 0)) &&
          (*(int *)(*(longlong *)*plVar10 + 0xd8) != 3)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!CompressedBlock->bCancelled || !Scatter.Request->DispatcherRequest || Scatter.Request->DispatcherRequest->IsCancelled()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                             ,0x6ab,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((*(int *)(*plVar10 + 0x34) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Scatter.Request->UnfinishedReadsCount > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                             ,0x6ac,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      piVar1 = (int *)(*plVar10 + 0x34);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        if (((FFileIoStoreResolvedRequest *)*plVar10)->bCancelled == false) {
          CompleteDispatcherRequest(this,(FFileIoStoreResolvedRequest *)*plVar10);
        }
        FFileIoStoreRequestTracker::ReleaseIoRequestReferences
                  (&this->RequestTracker,(FFileIoStoreResolvedRequest *)*plVar10);
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0x20;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}

// FreeBuffer @ 142a719a0

void __thiscall FFileIoStore::FreeBuffer(FFileIoStore *this,FFileIoStoreBuffer *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FFileIoStoreBuffer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                       ,0x5e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lpCriticalSection = &(this->BufferAllocator).BuffersCritical;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    param_1->Next = (this->BufferAllocator).FirstFreeBuffer;
    (this->BufferAllocator).FirstFreeBuffer = param_1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    UE::FIoDispatcherFilesystemStats::OnBufferReleased(&((this->BufferAllocator).Stats)->Stats);
                    /* WARNING: Could not recover jumptable at 0x000142a71a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*(this->PlatformImpl).Ptr + 0x38))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FreeCompressionContext @ 142a71ae0

void __thiscall
FFileIoStore::FreeCompressionContext(FFileIoStore *this,FFileIoStoreCompressionContext *param_1)

{
  param_1->Next = this->FirstFreeCompressionContext;
  this->FirstFreeCompressionContext = param_1;
  return;
}

// GetChunkInfo @ 142a72710

FChunkInfo * __thiscall
UE::IoStore::FFileIoStore::GetChunkInfo
          (FFileIoStore *this,FChunkInfo *__return_storage_ptr__,FIoChunkId *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FIoOffsetAndLength *pFVar3;
  FContainer *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->MountedContainers).AllocatorInstance.Data;
  iVar2 = (this->MountedContainers).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MountedContainers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    pFVar3 = FChunkLookup::Find((FChunkLookup *)(*(longlong *)pFVar5 + 0x148),param_1);
    if (pFVar3 != (FIoOffsetAndLength *)0x0) {
      pFVar4 = *(FContainer **)pFVar5;
      __return_storage_ptr__->OffsetLength = pFVar3;
LAB_142a72783:
      __return_storage_ptr__->Container = pFVar4;
      return __return_storage_ptr__;
    }
    pFVar5 = pFVar5 + 8;
  }
  pFVar4 = (FContainer *)0x0;
  __return_storage_ptr__->OffsetLength = (FIoOffsetAndLength *)0x0;
  goto LAB_142a72783;
}

// GetCompletedIoRequests @ 142a72b20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FIoRequestImpl * __thiscall FFileIoStore::GetCompletedIoRequests(FFileIoStore *this)

{
  atomic<int> *paVar1;
  uint *puVar2;
  int *piVar3;
  FDelegateHandle *this_00;
  undefined1 *puVar4;
  uchar **lpCriticalSection;
  FFileIoStoreCompressedBlock **lpCriticalSection_00;
  FNode **ppFVar5;
  atomic<int> aVar6;
  int iVar7;
  int iVar8;
  ForElementType<FFileIoStoreCompressedBlock_*> FVar9;
  ulong64 uVar10;
  uchar *puVar11;
  FFileIoStoreBuffer *pFVar12;
  FFileIoStoreResolvedRequest *pFVar13;
  FFileIoStoreReadRequest *pFVar14;
  undefined8 *puVar15;
  FTaskBase *this_01;
  FFileIoStoreCompressionContext *pFVar16;
  atomic<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*> aVar17;
  code *pcVar18;
  Type TVar19;
  Type TVar20;
  char cVar21;
  bool bVar22;
  FFileIoStoreReadRequest *pFVar23;
  FIoRequestImpl *pFVar24;
  uchar *_Dst;
  TExecutableTask<_public:_virtual_class_FIoRequestImpl_*___cdecl_FFileIoStore::GetCompletedIoRequests(void)_::_156_::<lambda_1>_>
  *this_02;
  atomic<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*> aVar25;
  longlong lVar26;
  ulonglong uVar27;
  bool bVar28;
  longlong *plVar29;
  ETaskPriority EVar30;
  Type TVar31;
  FFileIoStoreReadRequest *pFVar32;
  ForElementType<FFileIoStoreBlockScatter> FVar33;
  uint uVar34;
  uchar *_Src;
  ulonglong uVar35;
  FFileIoStoreCompressedBlock *pFVar36;
  FFileIoStoreCompressedBlock *pFVar37;
  ulong64 _Size;
  ForElementType<FFileIoStoreCompressedBlock_*> FVar38;
  ForElementType<FFileIoStoreBlockScatter> FVar39;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FLLMScope local_res18 [5];
  LARGE_INTEGER local_90;
  FMemScope local_88;
  FFileIoStoreReadRequest *local_80;
  undefined8 uStack_78;
  LARGE_INTEGER local_68;
  undefined8 local_60;
  <lambda_1> local_58;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1737,L"FileSystem/FileIoStore");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name1737,false,None,Default,true);
  FMemScope::FMemScope(&local_88,&LLMScope_Name1737,true);
  puVar4 = &(this->RequestTracker).RawBlocksMap.field_0x48;
  if (*(char *)&this->Thread == '\0') {
    do {
      plVar29 = *(longlong **)puVar4;
      cVar21 = (**(code **)(*plVar29 + 0x28))
                         (plVar29,&(this->RequestAllocator).LiveReadRequestsCount);
    } while (cVar21 != '\0');
  }
  plVar29 = *(longlong **)puVar4;
  local_80 = (FFileIoStoreReadRequest *)0x0;
  uStack_78 = 0;
  (**(code **)(*plVar29 + 0x30))(plVar29,&local_80);
  uVar27 = 0;
  uVar34 = 0;
  uVar35 = uVar27;
  if (local_80 != (FFileIoStoreReadRequest *)0x0) {
    pFVar23 = local_80;
    pFVar32 = local_80->Next;
    while( true ) {
      uVar35 = uVar35 + pFVar23->Size;
      uVar34 = (int)uVar27 + 1;
      uVar27 = (ulonglong)uVar34;
      if ((pFVar23->Next != pFVar32) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Current->Next == Next",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                              ,0x107,
                              L"FFileIoStoreReadRequestListIterator cached Next pointer != Current->Next - was list modified during iteration?"
                             ), bVar22)) {
        pcVar18 = (code *)swi(3);
        pFVar24 = (FIoRequestImpl *)(*pcVar18)();
        return pFVar24;
      }
      if (pFVar32 == (FFileIoStoreReadRequest *)0x0) break;
      pFVar23 = pFVar32;
      pFVar32 = pFVar32->Next;
    }
  }
  UE::FIoDispatcherFilesystemStats::OnReadRequestsCompleted
            ((FIoDispatcherFilesystemStats *)&(this->BackendContext).SharedReferenceCount,uVar35,
             (longlong)(int)uVar34);
  pFVar23 = local_80;
  uStack_78 = 0;
  local_80 = (FFileIoStoreReadRequest *)0x0;
  if (pFVar23 != (FFileIoStoreReadRequest *)0x0) {
    pFVar32 = pFVar23->Next;
    pFVar23->Next = (FFileIoStoreReadRequest *)0x0;
    while( true ) {
      if ((pFVar23->QueueStatus != QueueStatus_Started) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("CompletedRequest->QueueStatus == FFileIoStoreReadRequest::QueueStatus_Started"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                              ,0x6d8,L""), bVar22)) {
        pcVar18 = (code *)swi(3);
        pFVar24 = (FIoRequestImpl *)(*pcVar18)();
        return pFVar24;
      }
      pFVar23->QueueStatus = QueueStatus_Completed;
      LOCK();
      paVar1 = &pFVar23->ContainerFilePartition->StartedReadRequestsCount;
      aVar6 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (((int)aVar6 < 1) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("PreviousStartedReadRequestsCount >= 1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                              ,0x6db,L""), bVar22)) {
        pcVar18 = (code *)swi(3);
        pFVar24 = (FIoRequestImpl *)(*pcVar18)();
        return pFVar24;
      }
      if ((pFVar23->ImmediateScatter).Request == (FFileIoStoreResolvedRequest *)0x0) {
        if (((pFVar23->Buffer == (FFileIoStoreBuffer *)0x0) && (pFVar23->bCancelled == false)) &&
           ((pFVar23->bFailed == false &&
            (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                ("CompletedRequest->Buffer || CompletedRequest->bCancelled || CompletedRequest->bFailed"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                 ,0x6df,L""), bVar22)))) {
          pcVar18 = (code *)swi(3);
          pFVar24 = (FIoRequestImpl *)(*pcVar18)();
          return pFVar24;
        }
        FFileIoStoreRequestTracker::RemoveRawBlock
                  ((FFileIoStoreRequestTracker *)
                   &(this->RequestQueue).RequestPriorityCounts.field_0x48,pFVar23,false);
        FVar38 = (ForElementType<FFileIoStoreCompressedBlock_*>)&pFVar23->CompressedBlocks;
        FVar9 = (pFVar23->CompressedBlocks).AllocatorInstance.SecondaryData;
        piVar3 = &(pFVar23->CompressedBlocks).ArrayNum;
        iVar7 = *piVar3;
        if (FVar9 != (ForElementType<FFileIoStoreCompressedBlock_*>)0x0) {
          FVar38 = FVar9;
        }
        FVar9 = (ForElementType<FFileIoStoreCompressedBlock_*>)
                ((longlong)FVar38 + (longlong)iVar7 * 8);
        while( true ) {
          if (*piVar3 != iVar7) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FFileIoStoreCompressedBlock_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (FVar38 == FVar9) break;
          pFVar37 = *(FFileIoStoreCompressedBlock **)FVar38;
          bVar28 = (bool)(pFVar23->bFailed | pFVar37->bFailed);
          pFVar37->bFailed = bVar28;
          bVar22 = (bool)(pFVar23->bCancelled | pFVar37->bCancelled);
          iVar8 = (pFVar37->RawBlocks).ArrayNum;
          pFVar37->bCancelled = bVar22;
          if (1 < iVar8) {
            if (bVar22 == false && bVar28 == false) {
              if ((pFVar23->Buffer == (FFileIoStoreBuffer *)0x0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("CompletedRequest->Buffer",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                      ,0x6ec,L""), bVar22)) {
                pcVar18 = (code *)swi(3);
                pFVar24 = (FIoRequestImpl *)(*pcVar18)();
                return pFVar24;
              }
              _Dst = pFVar37->CompressedDataBuffer;
              if (_Dst == (uchar *)0x0) {
                _Dst = FMemory::Malloc((ulonglong)pFVar37->RawSize,0);
                pFVar37->CompressedDataBuffer = _Dst;
              }
              uVar10 = pFVar23->Size;
              puVar11 = pFVar23->Buffer->Memory;
              lVar26 = pFVar23->Offset - pFVar37->RawOffset;
              _Size = lVar26 + uVar10;
              if (-1 < lVar26) {
                _Dst = _Dst + lVar26;
                _Size = uVar10;
              }
              uVar35 = pFVar23->Offset + uVar10;
              _Src = puVar11 + -lVar26;
              if (-1 < lVar26) {
                _Src = puVar11;
              }
              uVar27 = (ulonglong)pFVar37->RawSize + pFVar37->RawOffset;
              if (uVar27 < uVar35) {
                _Size = (_Size - uVar35) + uVar27;
              }
              memcpy(_Dst,_Src,_Size);
            }
            if ((pFVar23->BufferRefCount == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("CompletedRequest->BufferRefCount > 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                    ,0x707,L""), bVar22)) {
              pcVar18 = (code *)swi(3);
              pFVar24 = (FIoRequestImpl *)(*pcVar18)();
              return pFVar24;
            }
            puVar2 = &pFVar23->BufferRefCount;
            *puVar2 = *puVar2 - 1;
            if ((*puVar2 == 0) && (pFVar12 = pFVar23->Buffer, pFVar12 != (FFileIoStoreBuffer *)0x0))
            {
              lpCriticalSection = &(this->BufferAllocator).BufferMemory;
              if (lpCriticalSection == (uchar **)0x0) goto LAB_142a735d0;
              EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
              pFVar12->Next = (this->BufferAllocator).BuffersCritical.CriticalSection.Opaque3[2];
              (this->BufferAllocator).BuffersCritical.CriticalSection.Opaque3[2] = pFVar12;
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
              UE::FIoDispatcherFilesystemStats::OnBufferReleased
                        ((FIoDispatcherFilesystemStats *)(this->BlockCache).ReadBufferSize);
              (**(code **)(**(longlong **)&(this->RequestTracker).RawBlocksMap.field_0x48 + 0x38))()
              ;
              pFVar23->Buffer = (FFileIoStoreBuffer *)0x0;
            }
          }
          if ((pFVar37->UnfinishedRawBlocksCount == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CompressedBlock->UnfinishedRawBlocksCount > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                  ,0x712,L""), bVar22)) {
            pcVar18 = (code *)swi(3);
            pFVar24 = (FIoRequestImpl *)(*pcVar18)();
            return pFVar24;
          }
          puVar2 = &pFVar37->UnfinishedRawBlocksCount;
          *puVar2 = *puVar2 - 1;
          if (*puVar2 == 0) {
            UE::FIoDispatcherFilesystemStats::OnDecompressQueued
                      ((FIoDispatcherFilesystemStats *)&(this->BackendContext).SharedReferenceCount,
                       (ulonglong)pFVar37->CompressedSize,(ulonglong)pFVar37->UncompressedSize);
            FFileIoStoreRequestTracker::RemoveCompressedBlock
                      ((FFileIoStoreRequestTracker *)
                       &(this->RequestQueue).RequestPriorityCounts.field_0x48,pFVar37,false);
            if (this->ReadyForDecompressionHead == (FFileIoStoreCompressedBlock *)0x0) {
              this->FirstFreeCompressionContext = (FFileIoStoreCompressionContext *)pFVar37;
            }
            else {
              this->ReadyForDecompressionHead->Next = pFVar37;
            }
            this->ReadyForDecompressionHead = pFVar37;
            pFVar37->Next = (FFileIoStoreCompressedBlock *)0x0;
          }
          FVar38 = (ForElementType<FFileIoStoreCompressedBlock_*>)((longlong)FVar38 + 8);
        }
      }
      else {
        if ((pFVar23->Buffer != (FFileIoStoreBuffer *)0x0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("!CompletedRequest->Buffer",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                ,0x726,L""), bVar22)) {
          pcVar18 = (code *)swi(3);
          pFVar24 = (FIoRequestImpl *)(*pcVar18)();
          return pFVar24;
        }
        UE::FIoDispatcherFilesystemStats::OnBytesScattered
                  ((FIoDispatcherFilesystemStats *)&(this->BackendContext).SharedReferenceCount,
                   (pFVar23->ImmediateScatter).Size);
        pFVar13 = (pFVar23->ImmediateScatter).Request;
        pFVar13->bFailed = (bool)(pFVar13->bFailed | pFVar23->bFailed);
        if ((((pFVar23->bCancelled != false) &&
             (pFVar13->DispatcherRequest != (FIoRequestImpl *)0x0)) &&
            (pFVar13->DispatcherRequest->LastBackendError != Cancelled)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("!CompletedRequest->bCancelled || !CompletedResolvedRequest->DispatcherRequest || CompletedResolvedRequest->DispatcherRequest->IsCancelled()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                ,0x72a,L""), bVar22)) {
          pcVar18 = (code *)swi(3);
          pFVar24 = (FIoRequestImpl *)(*pcVar18)();
          return pFVar24;
        }
        if ((pFVar13->UnfinishedReadsCount == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("CompletedResolvedRequest->UnfinishedReadsCount > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                ,0x72b,L""), bVar22)) {
          pcVar18 = (code *)swi(3);
          pFVar24 = (FIoRequestImpl *)(*pcVar18)();
          return pFVar24;
        }
        puVar2 = &pFVar13->UnfinishedReadsCount;
        *puVar2 = *puVar2 - 1;
        if (*puVar2 == 0) {
          if (pFVar13->bCancelled == false) {
            CompleteDispatcherRequest
                      ((FFileIoStore *)&this[-1].OversubscriptionLimitReached,pFVar13);
          }
          FFileIoStoreRequestTracker::ReleaseIoRequestReferences
                    ((FFileIoStoreRequestTracker *)
                     &(this->RequestQueue).RequestPriorityCounts.field_0x48,pFVar13);
        }
      }
      if (pFVar32 == (FFileIoStoreReadRequest *)0x0) break;
      pFVar14 = pFVar32->Next;
      pFVar32->Next = (FFileIoStoreReadRequest *)0x0;
      pFVar23 = pFVar32;
      pFVar32 = pFVar14;
    }
  }
  lpCriticalSection_00 = &this->ReadyForDecompressionTail;
  if (lpCriticalSection_00 == (FFileIoStoreCompressedBlock **)0x0) {
LAB_142a735d0:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  pFVar37 = (this->DecompressedBlocksCritical).CriticalSection.Opaque3[2];
  (this->DecompressedBlocksCritical).CriticalSection.Opaque3[2] = (void *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  while (pFVar37 != (FFileIoStoreCompressedBlock *)0x0) {
    pFVar36 = pFVar37->Next;
    FinalizeCompressedBlock((FFileIoStore *)&this[-1].OversubscriptionLimitReached,pFVar37);
    pFVar37 = pFVar36;
  }
  while( true ) {
    lVar26 = **(longlong **)&(this->CompressionContexts).ArrayNum;
    plVar29 = (longlong *)0x0;
    if (lVar26 != 0) {
      plVar29 = (longlong *)(lVar26 + 8);
    }
    if ((plVar29 == (longlong *)0x0) || ((*plVar29 != 0 && (*(char *)(*plVar29 + 0xd0) == '\0'))))
    break;
    lVar26 = **(longlong **)&(this->CompressionContexts).ArrayNum;
    if (lVar26 != 0) {
      puVar15 = *(undefined8 **)(lVar26 + 8);
      *(undefined8 *)(lVar26 + 8) = 0;
      (this->CompressionContexts).ArrayNum = (int)lVar26;
      (this->CompressionContexts).ArrayMax = (int)((ulonglong)lVar26 >> 0x20);
      LOCK();
      ppFVar5 = &(this->DecompressionTasks).TailCopy;
      *(int *)ppFVar5 = *(int *)ppFVar5 + -1;
      UNLOCK();
      if (puVar15 != (undefined8 *)0x0) {
        LOCK();
        piVar3 = (int *)(puVar15 + 6);
        iVar7 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)*puVar15)(puVar15,1);
        }
      }
    }
  }
  if ((GIoDispatcherCanDecompressOnStarvation != 0) &&
     ((int)FileIoStoreImpl::ActiveScatterTasks < 1)) {
    lVar26 = **(longlong **)&(this->CompressionContexts).ArrayNum;
    plVar29 = (longlong *)0x0;
    if (lVar26 != 0) {
      plVar29 = (longlong *)(lVar26 + 8);
    }
    if ((plVar29 != (longlong *)0x0) &&
       (bVar22 = LowLevelTasks::FScheduler::IsOversubscriptionLimitReached
                           (&LowLevelTasks::FScheduler::Singleton,
                            (ETaskPriority)((ulonglong)*(undefined8 *)(*plVar29 + 0xb0) >> 0x3b) &
                            (Inherit|Default)), bVar22)) {
      this_01 = (FTaskBase *)*plVar29;
      QueryPerformanceCounter(&local_90);
      local_68 = local_90;
      local_60 = 0xffffffffffffffff;
      UE::Tasks::Private::FTaskBase::TryRetractAndExecute(this_01,(FTimeout *)&local_68.s,0);
      lVar26 = **(longlong **)&(this->CompressionContexts).ArrayNum;
      if (lVar26 != 0) {
        puVar15 = *(undefined8 **)(lVar26 + 8);
        *(undefined8 *)(lVar26 + 8) = 0;
        (this->CompressionContexts).ArrayNum = (int)lVar26;
        (this->CompressionContexts).ArrayMax = (int)((ulonglong)lVar26 >> 0x20);
        LOCK();
        ppFVar5 = &(this->DecompressionTasks).TailCopy;
        *(int *)ppFVar5 = *(int *)ppFVar5 + -1;
        UNLOCK();
        if (puVar15 != (undefined8 *)0x0) {
          LOCK();
          piVar3 = (int *)(puVar15 + 6);
          iVar7 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
    }
  }
  pFVar37 = (FFileIoStoreCompressedBlock *)this->FirstFreeCompressionContext;
  if (pFVar37 != (FFileIoStoreCompressedBlock *)0x0) {
    this_00 = &this[-1].OversubscriptionLimitReached;
    pFVar36 = pFVar37;
    do {
      pFVar37 = pFVar36->Next;
      if (pFVar36->bCancelled == false && pFVar36->bFailed == false) {
        pFVar16 = *(FFileIoStoreCompressionContext **)&(this->DecompressionTasks).NumElems;
        if (pFVar16 == (FFileIoStoreCompressionContext *)0x0) {
          pFVar36->CompressionContext = (FFileIoStoreCompressionContext *)0x0;
          pFVar37 = pFVar36;
          break;
        }
        FVar33 = (ForElementType<FFileIoStoreBlockScatter>)&pFVar36->ScatterList;
        *(FFileIoStoreCompressionContext **)&(this->DecompressionTasks).NumElems = pFVar16->Next;
        pFVar36->CompressionContext = pFVar16;
        FVar39 = (pFVar36->ScatterList).AllocatorInstance.SecondaryData;
        iVar7 = (pFVar36->ScatterList).ArrayNum;
        if (FVar39 != (ForElementType<FFileIoStoreBlockScatter>)0x0) {
          FVar33 = FVar39;
        }
        FVar39 = (ForElementType<FFileIoStoreBlockScatter>)
                 ((longlong)iVar7 * 0x20 + (longlong)FVar33);
        while( true ) {
          if ((pFVar36->ScatterList).ArrayNum != iVar7) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FFileIoStoreBlockScatter,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res10);
          }
          TVar31 = CPrio_IoDispatcherTaskPriority.TaskPriorityIfForcedToNormalThreadPriority;
          TVar20 = CPrio_IoDispatcherTaskPriority.TaskPriority;
          TVar19 = CPrio_IoDispatcherTaskPriority.ThreadPriority;
          if (FVar33 == FVar39) break;
          if (*(longlong *)((longlong)FVar33 + 0x18) != 0) {
            pFVar24 = (FIoRequestImpl *)**(undefined8 **)FVar33;
            if ((pFVar24 == (FIoRequestImpl *)0x0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("DispatcherRequest",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                    ,0x76e,L""), bVar22)) {
              pcVar18 = (code *)swi(3);
              pFVar24 = (FIoRequestImpl *)(*pcVar18)();
              return pFVar24;
            }
            if ((pFVar24->Buffer).bIsSet == false) {
              FIoRequestImpl::CreateBuffer(pFVar24,*(ulong64 *)(*(longlong *)FVar33 + 0x28));
            }
          }
          FVar33 = (ForElementType<FFileIoStoreBlockScatter>)((longlong)FVar33 + 0x20);
        }
        iVar7 = ENamedThreads::bHasHighPriorityThreads;
        if (((CPrio_IoDispatcherTaskPriority.ThreadPriority == HighThreadPriority) ||
            (iVar7 = ENamedThreads::bHasBackgroundThreads,
            CPrio_IoDispatcherTaskPriority.ThreadPriority == BackgroundThreadPriority)) &&
           (iVar7 == 0)) {
          if (((CPrio_IoDispatcherTaskPriority.TaskPriorityIfForcedToNormalThreadPriority &
               ~HighTaskPriority) != MainQueue) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                                  ,0xcd,L""), bVar22)) {
            pcVar18 = (code *)swi(3);
            pFVar24 = (FIoRequestImpl *)(*pcVar18)();
            return pFVar24;
          }
        }
        else {
          if ((((CPrio_IoDispatcherTaskPriority.ThreadPriority & ~ThreadPriorityMask) != MainQueue
                || (CPrio_IoDispatcherTaskPriority.ThreadPriority & ThreadPriorityMask) ==
                   ThreadPriorityMask) ||
              ((CPrio_IoDispatcherTaskPriority.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                                  ,0xb1,L""), bVar22)) {
            pcVar18 = (code *)swi(3);
            pFVar24 = (FIoRequestImpl *)(*pcVar18)();
            return pFVar24;
          }
          TVar31 = TVar20 | TVar19;
        }
        EVar30 = (ETaskPriority)(TVar31 >> 10) & BackgroundHigh | Default;
        if ((*(char *)&this->Thread != '\0') && (GIoDispatcherForceSynchronousScatter == 0)) {
          lVar26 = 0;
          if (pFVar36->CompressionMethod == (FName)0x0) {
            do {
              if (*(int *)((pFVar36->EncryptionKey).Key + lVar26 * 4) != 0) goto LAB_142a73460;
              lVar26 = lVar26 + 1;
            } while (lVar26 < 8);
            if (pFVar36->SignatureHash == (FSHAHash *)0x0) goto LAB_142a73536;
          }
LAB_142a73460:
          bVar22 = LowLevelTasks::FScheduler::IsOversubscriptionLimitReached
                             (&LowLevelTasks::FScheduler::Singleton,EVar30);
          if (!bVar22) {
            local_58.__this = (FFileIoStore *)this_00;
            local_58.BlockToDecompress = pFVar36;
            this_02 = UE::Tasks::Private::
                      TExecutableTask<`FFileIoStore::GetCompletedIoRequests'::__l156::<lambda_1>_>::
                      Create(L"ScatterBlockDecompressionTask",&local_58,EVar30,None,None);
            UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_02,0x100);
            aVar25 = (atomic<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*>)
                     (this->DecompressionTasks).Head;
            if (aVar25 == (atomic<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*>)
                          (this->DecompressionTasks).First) {
              aVar17 = *(atomic<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*> *)
                        &(this->CompressionContexts).ArrayNum;
              aVar25 = (atomic<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*>)
                       (this->DecompressionTasks).Head;
              (this->DecompressionTasks).First = (FNode *)aVar17;
              if (aVar25 == aVar17) {
                aVar25 = (atomic<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*>)
                         FMemory::Malloc(0x10,8);
                *(undefined8 *)aVar25 = 0;
              }
              else {
                (this->DecompressionTasks).Head = *(FNode **)aVar25;
                *(undefined8 *)aVar25 = 0;
              }
            }
            else {
              (this->DecompressionTasks).Head = *(FNode **)aVar25;
              *(undefined8 *)aVar25 = 0;
            }
            *(TExecutableTask<_public:_virtual_class_FIoRequestImpl_*___cdecl_FFileIoStore::GetCompletedIoRequests(void)_::_156_::<lambda_1>_>
              **)((TTypeCompatibleBytes<UE::Tasks::Private::FTaskHandle> *)((longlong)aVar25 + 8))->
                 Pad = this_02;
            *(atomic<TSpscQueue<UE::Tasks::Private::FTaskHandle,FMemory>::FNode_*> *)
             (this->DecompressionTasks).Tail = aVar25;
            (this->DecompressionTasks).Tail = aVar25;
            LOCK();
            ppFVar5 = &(this->DecompressionTasks).TailCopy;
            *(int *)ppFVar5 = *(int *)ppFVar5 + 1;
            UNLOCK();
            goto LAB_142a73552;
          }
        }
LAB_142a73536:
        ScatterBlock((FFileIoStore *)this_00,pFVar36,false);
        FinalizeCompressedBlock((FFileIoStore *)this_00,pFVar36);
      }
      else {
        FinalizeCompressedBlock((FFileIoStore *)this_00,pFVar36);
      }
LAB_142a73552:
      pFVar36 = pFVar37;
    } while (pFVar37 != (FFileIoStoreCompressedBlock *)0x0);
  }
  this->FirstFreeCompressionContext = (FFileIoStoreCompressionContext *)pFVar37;
  if (pFVar37 == (FFileIoStoreCompressedBlock *)0x0) {
    this->ReadyForDecompressionHead = (FFileIoStoreCompressedBlock *)0x0;
  }
  pFVar37 = this->FirstDecompressedBlock;
  this->FirstDecompressedBlock = (FFileIoStoreCompressedBlock *)0x0;
  this->CompletedRequestsHead = (FIoRequestImpl *)0x0;
  FMemScope::~FMemScope(&local_88);
  FLLMScope::~FLLMScope(local_res18);
  return (FIoRequestImpl *)pFVar37;
}

// GetName @ 142a75950

wchar_t * __thiscall FFileIoStore::GetName(FFileIoStore *this)

{
  return L"PakFile";
}

// GetSizeForChunk @ 142a79160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TIoStatusOr<unsigned___int64> * __thiscall
FFileIoStore::GetSizeForChunk
          (FFileIoStore *this,TIoStatusOr<unsigned___int64> *__return_storage_ptr__,
          FIoChunkId *param_1)

{
  undefined8 *puVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  int iVar7;
  FFileIoStoreReader *this_00;
  code *pcVar8;
  bool bVar9;
  TIoStatusOr<unsigned___int64> *pTVar10;
  FIoOffsetAndLength *pFVar11;
  FIoStatus *pFVar12;
  undefined8 *puVar13;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  FIoStatus local_80;
  FIoStatus local_70;
  FIoStatus local_60;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  AcquireSRWLockShared((PSRWLOCK)&this->bIsMultithreaded);
  puVar13 = (this->IoStoreReadersLock).Mutex.Mutex.Ptr;
  iVar7 = *(int *)&(this->IoStoreReaders).AllocatorInstance.Data;
  puVar1 = puVar13 + iVar7;
  while( true ) {
    if (*(int *)&(this->IoStoreReaders).AllocatorInstance.Data != iVar7) {
      local_88[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FFileIoStoreReader,TDefaultDelete<FFileIoStoreReader>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_88);
    }
    if (puVar13 == puVar1) {
      pFVar12 = FIoStatus::FIoStatus(&local_70,NotFound);
      FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
      if (pFVar12->ErrorCode == Ok) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InStatus.IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                           ,0x102,L"");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          pTVar10 = (TIoStatusOr<unsigned___int64> *)(*pcVar8)();
          return pTVar10;
        }
      }
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,pFVar12);
      goto LAB_142a7938b;
    }
    this_00 = (FFileIoStoreReader *)*puVar13;
    if (this_00->bClosed != false) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bClosed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                         ,0x32e,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pTVar10 = (TIoStatusOr<unsigned___int64> *)(*pcVar8)();
        return pTVar10;
      }
    }
    pFVar11 = FFileIoStoreReader::FindChunkInternal(this_00,param_1);
    if (pFVar11 == (FIoOffsetAndLength *)0x0) {
      pFVar12 = FIoStatus::FIoStatus(&local_80,NotFound);
      FIoStatus::FIoStatus(&local_60);
      if (pFVar12->ErrorCode == Ok) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InStatus.IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                           ,0x102,L"");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          pTVar10 = (TIoStatusOr<unsigned___int64> *)(*pcVar8)();
          return pTVar10;
        }
      }
      FIoStatus::operator=(&local_60,pFVar12);
      FIoStatus::~FIoStatus(pFVar12);
    }
    else {
      uVar2 = pFVar11->OffsetAndLength[6];
      uVar3 = pFVar11->OffsetAndLength[5];
      uVar4 = pFVar11->OffsetAndLength[7];
      uVar5 = pFVar11->OffsetAndLength[8];
      uVar6 = pFVar11->OffsetAndLength[9];
      FIoStatus::FIoStatus(&local_60);
      FIoStatus::operator=(&local_60,&FIoStatus::Ok);
      local_50 = (ulonglong)CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar3,uVar2),uVar4),uVar5),uVar6);
    }
    if (local_60.ErrorCode == Ok) break;
    FIoStatus::operator=(&local_60,Unknown);
    FIoStatus::~FIoStatus(&local_60);
    puVar13 = puVar13 + 1;
  }
  FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
  FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&local_60);
  if ((__return_storage_ptr__->StatusValue).ErrorCode == Ok) {
    *(ulonglong *)(__return_storage_ptr__->Value).Pad = local_50;
    FIoStatus::operator=(&local_60,Unknown);
  }
  FIoStatus::operator=(&local_60,Unknown);
  pFVar12 = &local_60;
LAB_142a7938b:
  FIoStatus::~FIoStatus(pFVar12);
  ReleaseSRWLockShared((PSRWLOCK)&this->bIsMultithreaded);
  return __return_storage_ptr__;
}

// GetThreadId @ 142a79b00

uint __thiscall FFileIoStore::GetThreadId(FFileIoStore *this)

{
  if (this->Thread != (FRunnableThread *)0x0) {
    return this->Thread->ThreadID;
  }
  return 0;
}

// Init @ 142a7c2f0

bool __thiscall FFileIoStore::Init(FFileIoStore *this)

{
  return true;
}

// Initialize @ 142a7c370

void __thiscall
FFileIoStore::Initialize
          (FFileIoStore *this,TSharedRef<FIoDispatcherBackendContext_const_,1> *param_1)

{
  ulong64 *puVar1;
  uchar **ppuVar2;
  TArray<TUniquePtr<FFileIoStoreCompressionContext,TDefaultDelete<FFileIoStoreCompressionContext>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  uchar *puVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  uchar *puVar16;
  undefined8 *puVar17;
  FRunnableThread *pFVar18;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this_00;
  FDelegateHandle FVar19;
  longlong lVar20;
  uint uVar21;
  undefined8 *puVar22;
  uint uVar23;
  undefined8 *puVar24;
  FFileIoStoreStats *pFVar25;
  undefined1 local_res8 [8];
  FDelegateHandle *local_res10;
  <lambda_1> local_res18;
  undefined8 local_78;
  FIoDispatcherBackendContext *local_70;
  FSharedReferencer<1> local_68;
  ulong64 local_60;
  FFileIoStoreBuffer **local_58;
  ulong64 *local_50;
  ulong64 *local_48;
  FSharedReferencer<1> *local_40;
  
  if (((this->PlatformImpl).Ptr != (IPlatformFileIoStore *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Thread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                         ,0x4d7,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_68.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_70 = param_1->Object;
  if (local_68.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_68.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar24 = (undefined8 *)0x0;
  if ((FIoDispatcherBackendContext **)&this->ReadBufferSize != &local_70) {
    this->ReadBufferSize = (ulong64)local_70;
    local_70 = (FIoDispatcherBackendContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->BackendContext,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.ReferenceController);
  *(bool *)&this->Thread = param_1->Object->bIsMultiThreaded;
  if (GIoDispatcherBufferSizeKB < 1) {
    lVar11 = 0x40000;
  }
  else {
    lVar11 = (longlong)GIoDispatcherBufferSizeKB << 10;
  }
  this->_padding_ = lVar11;
  puVar1 = &(this->BlockCache).ReadBufferSize;
  lVar11 = (longlong)GIoDispatcherBufferSizeKB;
  pFVar25 = (FFileIoStoreStats *)(lVar11 * 0x400);
  puVar12 = (undefined8 *)
            ((ulonglong)((longlong)GIoDispatcherBufferMemoryMB << 0x14) / (ulonglong)pFVar25);
  pvVar13 = FMemory::Malloc((longlong)pFVar25 * (longlong)puVar12,GIoDispatcherBufferAlignment);
  (this->BufferAllocator).BufferSize = (ulong64)pvVar13;
  (this->BufferAllocator).Stats = pFVar25;
  puVar22 = puVar24;
  if (puVar12 != (undefined8 *)0x0) {
    do {
      puVar14 = ::operator_new(0x10);
      puVar17 = puVar24;
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar17 = puVar14;
      }
      puVar17[1] = (longlong)puVar22 * (longlong)(this->BufferAllocator).Stats +
                   (this->BufferAllocator).BufferSize;
      *puVar17 = (this->BufferAllocator).BuffersCritical.CriticalSection.Opaque3[2];
      (this->BufferAllocator).BuffersCritical.CriticalSection.Opaque3[2] = puVar17;
      UE::FIoDispatcherFilesystemStats::OnBufferReleased((FIoDispatcherFilesystemStats *)*puVar1);
      puVar22 = (undefined8 *)((longlong)puVar22 + 1);
    } while (puVar22 < puVar12);
  }
  uVar15 = (ulonglong)((longlong)GIoDispatcherCacheSizeMB << 0x14) / (ulonglong)pFVar25;
  (this->BlockCache).CacheLruTail.Buffer = (uchar *)pFVar25;
  if (uVar15 != 0) {
    pFVar25 = FMemory::Malloc(uVar15 * (longlong)pFVar25,0);
    (this->BlockCache).Stats = pFVar25;
    puVar8 = &(this->BlockCache).CachedBlocks.field_0x48;
    for (; uVar15 != 0; uVar15 = uVar15 - 1) {
      puVar16 = ::operator_new(0x20);
      if (puVar16 == (uchar *)0x0) {
        puVar16 = (uchar *)0x0;
      }
      else {
        puVar16[0] = '\0';
        puVar16[1] = '\0';
        puVar16[2] = '\0';
        puVar16[3] = '\0';
        puVar16[4] = '\0';
        puVar16[5] = '\0';
        puVar16[6] = '\0';
        puVar16[7] = '\0';
        puVar16[8] = '\0';
        puVar16[9] = '\0';
        puVar16[10] = '\0';
        puVar16[0xb] = '\0';
        puVar16[0xc] = '\0';
        puVar16[0xd] = '\0';
        puVar16[0xe] = '\0';
        puVar16[0xf] = '\0';
        puVar16[0x18] = '\0';
        puVar16[0x19] = '\0';
        puVar16[0x1a] = '\0';
        puVar16[0x1b] = '\0';
        puVar16[0x1c] = '\0';
        puVar16[0x1d] = '\0';
        puVar16[0x1e] = '\0';
        puVar16[0x1f] = '\0';
      }
      puVar16[0x10] = 0xff;
      puVar16[0x11] = 0xff;
      puVar16[0x12] = 0xff;
      puVar16[0x13] = 0xff;
      puVar16[0x14] = 0xff;
      puVar16[0x15] = 0xff;
      puVar16[0x16] = 0xff;
      puVar16[0x17] = 0xff;
      lVar20 = (longlong)puVar24 + (longlong)(this->BlockCache).Stats;
      puVar24 = puVar24 + lVar11 * 0x80;
      *(longlong *)(puVar16 + 0x18) = lVar20;
      *(uchar **)(puVar8 + 8) = puVar16;
      *(uchar **)puVar16 = puVar8;
      puVar8 = puVar16;
    }
    ppuVar2 = &(this->BlockCache).CacheLruHead.Buffer;
    *(uchar ***)(puVar8 + 8) = ppuVar2;
    *ppuVar2 = puVar8;
  }
  plVar5 = *(longlong **)&(this->RequestTracker).RawBlocksMap.field_0x48;
  pcVar7 = *(code **)(*plVar5 + 8);
  if ((this->ReadBufferSize == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_60 = this->ReadBufferSize;
  local_58 = &(this->BufferAllocator).FirstFreeBuffer;
  local_40 = &(this->BackendContext).SharedReferenceCount;
  local_50 = puVar1;
  local_48 = &(this->Stats).Stats.LastFileReadInfo.Offset;
  (*pcVar7)(plVar5);
  pTVar3 = &this->CompressionContexts;
  iVar4 = *(int *)&(pTVar3->AllocatorInstance).Data;
  uVar21 = 4;
  if (0 < GIoDispatcherDecompressionWorkerCount) {
    uVar21 = GIoDispatcherDecompressionWorkerCount;
  }
  if (iVar4 < (int)uVar21) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,uVar21 - iVar4,(ForAnyElementType *)&(this->IoStoreReaders).ArrayNum,
                        (int *)pTVar3,
                        (int *)((longlong)&(this->CompressionContexts).AllocatorInstance.Data + 4));
    memset((void *)(*(longlong *)&(this->IoStoreReaders).ArrayNum + (longlong)iVar10 * 8),0,
           (longlong)(int)(uVar21 - iVar4) << 3);
  }
  else {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    if ((int)uVar21 < iVar4) {
      uVar23 = iVar4 - uVar21;
      if (((int)(uVar23 | uVar21) < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar23 != 0) {
        TArray<TUniquePtr<FFileIoStoreCompressionContext,TDefaultDelete<FFileIoStoreCompressionContext>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl((TArray<TUniquePtr<FFileIoStoreCompressionContext,TDefaultDelete<FFileIoStoreCompressionContext>_>,TSizedDefaultAllocator<32>_>
                        *)&(this->IoStoreReaders).ArrayNum,uVar21,uVar23);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)&(this->IoStoreReaders).ArrayNum,
                   *(int *)&(pTVar3->AllocatorInstance).Data,
                   (int *)((longlong)&(this->CompressionContexts).AllocatorInstance.Data + 4));
      }
    }
  }
  puVar22 = *(undefined8 **)&(this->IoStoreReaders).ArrayNum;
  iVar4 = *(int *)&(this->CompressionContexts).AllocatorInstance.Data;
  puVar24 = puVar22 + iVar4;
  while( true ) {
    if (*(int *)&(this->CompressionContexts).AllocatorInstance.Data != iVar4) {
      `TCheckedPointerIterator<TUniquePtr<FFileIoStoreCompressionContext,TDefaultDelete<FFileIoStoreCompressionContext>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar22 == puVar24) break;
    puVar17 = ::operator_new(0x18);
    puVar12 = (undefined8 *)0x0;
    if (puVar17 != (undefined8 *)0x0) {
      *puVar17 = 0;
      puVar17[1] = 0;
      puVar17[2] = 0;
      puVar12 = puVar17;
    }
    if (puVar22 != &local_78) {
      pvVar13 = (void *)*puVar22;
      *puVar22 = puVar12;
      ::operator_delete(pvVar13,0x18);
      puVar12 = (undefined8 *)0x0;
    }
    ::operator_delete(puVar12,0x18);
    *(undefined8 *)*puVar22 = *(undefined8 *)&(this->DecompressionTasks).NumElems;
    uVar6 = *puVar22;
    puVar22 = puVar22 + 1;
    *(undefined8 *)&(this->DecompressionTasks).NumElems = uVar6;
  }
  pFVar18 = FRunnableThread::Create
                      ((FRunnable *)&this[-1].OversubscriptionLimitReached,L"IoService",0,
                       TPri_AboveNormal,0xffffffffffffffff,None);
  (this->PlatformImpl).Ptr = (IPlatformFileIoStore *)pFVar18;
  this_00 = LowLevelTasks::FScheduler::GetOversubscriptionLimitReachedEvent
                      (&LowLevelTasks::FScheduler::Singleton);
  local_res10 = &this[-1].OversubscriptionLimitReached;
  FVar19 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
           AddLambda<_FFileIoStore::Initialize_::__l2::<lambda_1>_>
                     ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>
                       *)this_00,&local_res18);
  this->CompletedRequestsTail = *(FIoRequestImpl **)FVar19.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Mount @ 142a84150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142a8452f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TIoStatusOr<FIoContainerHeader> * __thiscall
FFileIoStore::Mount(FFileIoStore *this,TIoStatusOr<FIoContainerHeader> *__return_storage_ptr__,
                   wchar_t *param_1,int param_2,FGuid *param_3,FAESKey *param_4,
                   ETocMountOptions param_5)

{
  int *piVar1;
  FFileIoStoreReader **ppFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  FFileIoStoreContainerFile *pFVar6;
  bool bVar7;
  FFileIoStoreReader *pFVar8;
  size_t sVar9;
  FIoStatus *pFVar10;
  TIoStatusOr<FIoContainerHeader> *pTVar11;
  void *pvVar12;
  int iVar13;
  FFileIoStoreReader *pFVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  FPlatformRWLock *pFVar18;
  ulonglong uVar19;
  undefined1 auStackY_388 [32];
  FFileIoStoreReader *local_338;
  FLLMScope local_330 [2];
  FIoStatus local_328;
  FMemScope local_318;
  FString local_310;
  FString local_300;
  wchar_t *local_2f0;
  FIoStatus local_2e8;
  TStringView<wchar_t> local_2d8;
  FString local_2c8;
  FIoContainerHeader local_2b8;
  FIoStatus local_208;
  FIoStatus local_1f8;
  FIoStatus local_1e8;
  FIoStatus local_1d8;
  FIoContainerHeader local_1c8;
  TIoStatusOr<FIoContainerHeader> local_118;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_2f0 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1307,L"FileSystem/FileIoStore");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_330,LLMScope_Name1307,false,None,Default,true);
  FMemScope::FMemScope(&local_318,&LLMScope_Name1307,true);
  pFVar8 = ::operator_new(0x268);
  pFVar14 = (FFileIoStoreReader *)0x0;
  iVar13 = 0;
  local_338 = pFVar14;
  if (pFVar8 != (FFileIoStoreReader *)0x0) {
    pFVar8->PlatformImpl = *(IPlatformFileIoStore **)&(this->RequestTracker).RawBlocksMap.field_0x48
    ;
    (pFVar8->PerfectHashMap).TocChunkHashSeeds.DataPtr = (int *)0x0;
    (pFVar8->PerfectHashMap).TocChunkHashSeeds.ArrayNum = 0;
    (pFVar8->PerfectHashMap).TocChunkIds.DataPtr = (FIoChunkId *)0x0;
    (pFVar8->PerfectHashMap).TocChunkIds.ArrayNum = 0;
    (pFVar8->PerfectHashMap).TocOffsetAndLengths.DataPtr = (FIoOffsetAndLength *)0x0;
    (pFVar8->PerfectHashMap).TocOffsetAndLengths.ArrayNum = 0;
    *(undefined8 *)&pFVar8->TocImperfectHashMapFallback = 0;
    *(undefined8 *)&(pFVar8->TocImperfectHashMapFallback).field_0x8 = 0;
    *(undefined8 *)&(pFVar8->TocImperfectHashMapFallback).field_0x20 = 0;
    pFVar8->Stats = (FFileIoStoreStats *)&(this->BackendContext).SharedReferenceCount;
    *(undefined4 *)&(pFVar8->TocImperfectHashMapFallback).field_0x28 = 0;
    *(undefined4 *)&(pFVar8->TocImperfectHashMapFallback).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar8->TocImperfectHashMapFallback).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar8->TocImperfectHashMapFallback).field_0x34 = 0;
    *(undefined8 *)&(pFVar8->TocImperfectHashMapFallback).field_0x40 = 0;
    *(undefined4 *)&(pFVar8->TocImperfectHashMapFallback).field_0x48 = 0;
    (pFVar8->ContainerFile).CompressionMethods.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar8->ContainerFile).CompressionMethods.ArrayNum = 0;
    (pFVar8->ContainerFile).CompressionMethods.ArrayMax = 0;
    (pFVar8->ContainerFile).CompressionBlocks.DataPtr = (FIoStoreTocCompressedBlockEntry *)0x0;
    (pFVar8->ContainerFile).CompressionBlocks.ArrayNum = 0;
    (pFVar8->ContainerFile).FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->ContainerFile).FilePath.Data.ArrayNum = 0;
    (pFVar8->ContainerFile).FilePath.Data.ArrayMax = 0;
    (pFVar8->ContainerFile).EncryptionKeyGuid.A = 0;
    (pFVar8->ContainerFile).EncryptionKeyGuid.B = 0;
    (pFVar8->ContainerFile).EncryptionKeyGuid.C = 0;
    (pFVar8->ContainerFile).EncryptionKeyGuid.D = 0;
    (pFVar8->ContainerFile).PartitionSize = 0;
    (pFVar8->ContainerFile).CompressionBlockSize = 0;
    (pFVar8->ContainerFile).EncryptionKey.Key[0] = '\0';
    (pFVar8->ContainerFile).EncryptionKey.Key[1] = '\0';
    (pFVar8->ContainerFile).EncryptionKey.Key[2] = '\0';
    (pFVar8->ContainerFile).EncryptionKey.Key[3] = '\0';
    (pFVar8->ContainerFile).EncryptionKey.Key[4] = '\0';
    (pFVar8->ContainerFile).EncryptionKey.Key[5] = '\0';
    (pFVar8->ContainerFile).EncryptionKey.Key[6] = '\0';
    (pFVar8->ContainerFile).EncryptionKey.Key[7] = '\0';
    pFVar6 = &pFVar8->ContainerFile;
    (pFVar6->EncryptionKey).Key[8] = '\0';
    (pFVar6->EncryptionKey).Key[9] = '\0';
    (pFVar6->EncryptionKey).Key[10] = '\0';
    (pFVar6->EncryptionKey).Key[0xb] = '\0';
    (pFVar6->EncryptionKey).Key[0xc] = '\0';
    (pFVar6->EncryptionKey).Key[0xd] = '\0';
    (pFVar6->EncryptionKey).Key[0xe] = '\0';
    (pFVar6->EncryptionKey).Key[0xf] = '\0';
    pFVar6 = &pFVar8->ContainerFile;
    (pFVar6->EncryptionKey).Key[0x10] = '\0';
    (pFVar6->EncryptionKey).Key[0x11] = '\0';
    (pFVar6->EncryptionKey).Key[0x12] = '\0';
    (pFVar6->EncryptionKey).Key[0x13] = '\0';
    (pFVar6->EncryptionKey).Key[0x14] = '\0';
    (pFVar6->EncryptionKey).Key[0x15] = '\0';
    (pFVar6->EncryptionKey).Key[0x16] = '\0';
    (pFVar6->EncryptionKey).Key[0x17] = '\0';
    pFVar6 = &pFVar8->ContainerFile;
    (pFVar6->EncryptionKey).Key[0x18] = '\0';
    (pFVar6->EncryptionKey).Key[0x19] = '\0';
    (pFVar6->EncryptionKey).Key[0x1a] = '\0';
    (pFVar6->EncryptionKey).Key[0x1b] = '\0';
    (pFVar6->EncryptionKey).Key[0x1c] = '\0';
    (pFVar6->EncryptionKey).Key[0x1d] = '\0';
    (pFVar6->EncryptionKey).Key[0x1e] = '\0';
    (pFVar6->EncryptionKey).Key[0x1f] = '\0';
    (pFVar8->ContainerFile).BlockSignatureTable.DataPtr = (FSHAHash *)0x0;
    (pFVar8->ContainerFile).BlockSignatureTable.ArrayNum = 0;
    (pFVar8->ContainerFile).Partitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->ContainerFile).Partitions.ArrayNum = 0;
    (pFVar8->ContainerFile).Partitions.ArrayMax = 0;
    (pFVar8->ContainerFile).ContainerInstanceId = 0;
    (pFVar8->ContainerId).Id = 0xffffffffffffffff;
    (pFVar8->DataContainer).Data.TypeIndex = '\0';
    pFVar8->bClosed = false;
    pFVar8->bHasPerfectHashMap = false;
    local_338 = pFVar8;
  }
  FFileIoStoreReader::Initialize(local_338,&local_328,param_1,param_2);
  if (local_328.ErrorCode != Ok) {
    local_2e8.ErrorMessage.Chars = local_328.ErrorMessage.Chars;
    if (local_328.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_328.ErrorMessage.Chars + -4) = *(int *)(local_328.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    local_2e8.SystemErrorCode = local_328.SystemErrorCode;
    TIoStatusOr<FIoContainerHeader>::TIoStatusOr<FIoContainerHeader>
              (__return_storage_ptr__,&local_2e8);
    FIoStatus::~FIoStatus(&local_328);
    TDefaultDelete<FFileIoStoreReader>::operator()
              ((TDefaultDelete<FFileIoStoreReader> *)&local_338,local_338);
    goto LAB_142a84a0c;
  }
  if (((local_338->ContainerFile).ContainerFlags & Encrypted) == None) {
LAB_142a84474:
    FFileIoStoreReader::ReadContainerHeader
              (local_338,&local_118,(bool)((undefined1)param_5 & WithSoftReferences));
    local_2b8.ContainerId.Id = 0xffffffffffffffff;
    local_2b8.PackageIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.PackageIds.ArrayNum = 0;
    local_2b8.PackageIds.ArrayMax = 0;
    local_2b8.StoreEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.StoreEntries.ArrayNum = 0;
    local_2b8.StoreEntries.ArrayMax = 0;
    local_2b8.OptionalSegmentPackageIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.OptionalSegmentPackageIds.ArrayNum = 0;
    local_2b8.OptionalSegmentPackageIds.ArrayMax = 0;
    local_2b8.OptionalSegmentStoreEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.OptionalSegmentStoreEntries.ArrayNum = 0;
    local_2b8.OptionalSegmentStoreEntries.ArrayMax = 0;
    local_2b8.RedirectsNameMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.RedirectsNameMap.ArrayNum = 0;
    local_2b8.RedirectsNameMap.ArrayMax = 0;
    local_2b8.LocalizedPackages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.LocalizedPackages.ArrayNum = 0;
    local_2b8.LocalizedPackages.ArrayMax = 0;
    local_2b8.PackageRedirects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.PackageRedirects.ArrayNum = 0;
    local_2b8.PackageRedirects.ArrayMax = 0;
    local_2b8.SoftPackageReferencesSerialInfo.Offset = -1;
    local_2b8.SoftPackageReferencesSerialInfo.Size = ___xmm_0000000000000000ffffffffffffffff;
    local_2b8.SoftPackageReferences.PackageIds.AllocatorInstance.Data = _UNK_15076adc8;
    local_2b8.SoftPackageReferences.PackageIds.ArrayNum = 0;
    local_2b8.SoftPackageReferences.PackageIds.ArrayMax = 0;
    local_2b8.SoftPackageReferences.PackageIndices.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_2b8.SoftPackageReferences.PackageIndices.ArrayNum = 0;
    local_2b8.SoftPackageReferences.PackageIndices.ArrayMax = 0;
    local_2b8.SoftPackageReferences.bContainsSoftPackageReferences = false;
    local_2b8.SoftPackageReferences.bLoadedSoftPackageReferences = false;
    if (local_118.StatusValue.ErrorCode == Ok) {
      local_2b8.SoftPackageReferences.bContainsSoftPackageReferences = false;
      local_2b8.SoftPackageReferences.bLoadedSoftPackageReferences = false;
      local_2b8.SoftPackageReferences.PackageIndices.ArrayNum = 0;
      local_2b8.SoftPackageReferences.PackageIndices.ArrayMax = 0;
      local_2b8.SoftPackageReferences.PackageIndices.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_2b8.SoftPackageReferences.PackageIds.ArrayNum = 0;
      local_2b8.SoftPackageReferences.PackageIds.ArrayMax = 0;
      local_2b8.SoftPackageReferencesSerialInfo.Offset = -1;
      local_2b8.PackageRedirects.ArrayNum = 0;
      local_2b8.PackageRedirects.ArrayMax = 0;
      local_2b8.PackageRedirects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.LocalizedPackages.ArrayNum = 0;
      local_2b8.LocalizedPackages.ArrayMax = 0;
      local_2b8.LocalizedPackages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.RedirectsNameMap.ArrayNum = 0;
      local_2b8.RedirectsNameMap.ArrayMax = 0;
      local_2b8.RedirectsNameMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.OptionalSegmentStoreEntries.ArrayNum = 0;
      local_2b8.OptionalSegmentStoreEntries.ArrayMax = 0;
      local_2b8.OptionalSegmentStoreEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.OptionalSegmentPackageIds.ArrayNum = 0;
      local_2b8.OptionalSegmentPackageIds.ArrayMax = 0;
      local_2b8.OptionalSegmentPackageIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.StoreEntries.ArrayNum = 0;
      local_2b8.StoreEntries.ArrayMax = 0;
      local_2b8.StoreEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.PackageIds.ArrayNum = 0;
      local_2b8.PackageIds.ArrayMax = 0;
      local_2b8.PackageIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2b8.ContainerId.Id = 0xffffffffffffffff;
      FIoStatus::operator=(&local_118.StatusValue,&FIoStatus::Unknown);
      FIoContainerHeader::FIoContainerHeader(&local_1c8,(FIoContainerHeader *)&local_118.Value);
      FIoContainerHeader::operator=(&local_2b8,&local_1c8);
      FIoContainerHeader::~FIoContainerHeader(&local_1c8);
LAB_142a8457d:
      AcquireSRWLockExclusive((PSRWLOCK)&this->bIsMultithreaded);
      pFVar18 = &this->IoStoreReadersLock;
      iVar13 = 0;
      uVar16 = *(uint *)&(this->IoStoreReaders).AllocatorInstance.Data;
      ppFVar2 = (pFVar18->Mutex).Mutex.Ptr;
      if (0 < (int)uVar16) {
        do {
          uVar17 = uVar16 >> 1;
          iVar15 = uVar17 + (int)pFVar14;
          iVar13 = ppFVar2[iVar15]->Order;
          if (local_338->Order == iVar13) {
            bVar7 = (ppFVar2[iVar15]->ContainerFile).ContainerInstanceId <
                    (local_338->ContainerFile).ContainerInstanceId;
          }
          else {
            bVar7 = iVar13 <= local_338->Order;
          }
          if (!bVar7) {
            pFVar14 = (FFileIoStoreReader *)(ulonglong)(iVar15 + (uVar16 & 1));
          }
          iVar13 = (int)pFVar14;
          uVar16 = uVar17;
        } while (uVar17 != 0);
      }
      if (((ppFVar2 <= &local_338) &&
          (&local_338 <
           ppFVar2 + *(int *)((longlong)&(this->IoStoreReaders).AllocatorInstance.Data + 4))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TIoStatusOr<FIoContainerHeader> *)(*pcVar4)();
        return pTVar11;
      }
      iVar15 = *(int *)&(this->IoStoreReaders).AllocatorInstance.Data;
      piVar1 = (int *)((longlong)&(this->IoStoreReaders).AllocatorInstance.Data + 4);
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)pFVar18,piVar1);
      }
      pvVar12 = (pFVar18->Mutex).Mutex.Ptr;
      *(int *)&(this->IoStoreReaders).AllocatorInstance.Data = iVar15 + 1;
      pvVar12 = (void *)((longlong)pvVar12 + (longlong)iVar13 * 8);
      memmove((void *)((longlong)pvVar12 + 8),pvVar12,(longlong)(iVar15 - iVar13) << 3);
      *(FFileIoStoreReader **)((longlong)iVar13 * 8 + (longlong)(pFVar18->Mutex).Mutex.Ptr) =
           local_338;
      local_338 = (FFileIoStoreReader *)0x0;
      if (3 < (byte)LogIoDispatcher._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->bIsMultithreaded);
      FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
      FIoContainerHeader::FIoContainerHeader
                ((FIoContainerHeader *)&__return_storage_ptr__->Value,&local_2b8);
      if (local_2b8.SoftPackageReferences.PackageIndices.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.SoftPackageReferences.PackageIndices.AllocatorInstance.Data);
      }
      if (local_2b8.SoftPackageReferences.PackageIds.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.SoftPackageReferences.PackageIds.AllocatorInstance.Data);
      }
      if (local_2b8.PackageRedirects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.PackageRedirects.AllocatorInstance.Data);
      }
      if (local_2b8.LocalizedPackages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.LocalizedPackages.AllocatorInstance.Data);
      }
      if (local_2b8.RedirectsNameMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.RedirectsNameMap.AllocatorInstance.Data);
      }
      if (local_2b8.OptionalSegmentStoreEntries.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.OptionalSegmentStoreEntries.AllocatorInstance.Data);
      }
      if (local_2b8.OptionalSegmentPackageIds.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.OptionalSegmentPackageIds.AllocatorInstance.Data);
      }
      if (local_2b8.StoreEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.StoreEntries.AllocatorInstance.Data);
      }
      if (local_2b8.PackageIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.PackageIds.AllocatorInstance.Data);
      }
      FIoStatus::operator=(&local_118.StatusValue,Unknown);
      if (local_118.StatusValue.ErrorCode == Ok) {
        FIoContainerHeader::~FIoContainerHeader((FIoContainerHeader *)&local_118.Value);
      }
      FIoStatus::~FIoStatus(&local_118.StatusValue);
      FIoStatus::~FIoStatus(&local_328);
      pFVar8 = local_338;
      if (local_338 == (FFileIoStoreReader *)0x0) goto LAB_142a84a0c;
      FFileIoStoreReader::Close(local_338,&local_1e8);
      pFVar10 = &local_1e8;
    }
    else {
      if (local_118.StatusValue.ErrorCode == NotFound) goto LAB_142a8457d;
      FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&local_118.StatusValue);
      if ((__return_storage_ptr__->StatusValue).ErrorCode == Ok) {
        FIoContainerHeader::FIoContainerHeader
                  ((FIoContainerHeader *)&__return_storage_ptr__->Value,
                   (FIoContainerHeader *)&local_118.Value);
        FIoStatus::operator=(&local_118.StatusValue,Unknown);
      }
      FIoStatus::operator=(&local_118.StatusValue,Unknown);
      if (local_118.StatusValue.ErrorCode == Ok) {
        FIoContainerHeader::~FIoContainerHeader((FIoContainerHeader *)&local_118.Value);
      }
      FIoStatus::~FIoStatus(&local_118.StatusValue);
      FIoStatus::~FIoStatus(&local_328);
      pFVar8 = local_338;
      if (local_338 == (FFileIoStoreReader *)0x0) goto LAB_142a84a0c;
      FFileIoStoreReader::Close(local_338,&local_1f8);
      pFVar10 = &local_1f8;
    }
  }
  else {
    pFVar8 = pFVar14;
    if (((param_3->D == (local_338->ContainerFile).EncryptionKeyGuid.D &&
         param_3->C == (local_338->ContainerFile).EncryptionKeyGuid.C) &&
        param_3->B == (local_338->ContainerFile).EncryptionKeyGuid.B) &&
        (local_338->ContainerFile).EncryptionKeyGuid.A == param_3->A) {
      do {
        if (*(int *)(param_4->Key + (longlong)pFVar8 * 4) != 0) {
          uVar5 = *(undefined8 *)(param_4->Key + 8);
          *(undefined8 *)(local_338->ContainerFile).EncryptionKey.Key = *(undefined8 *)param_4->Key;
          *(undefined8 *)((local_338->ContainerFile).EncryptionKey.Key + 8) = uVar5;
          uVar5 = *(undefined8 *)(param_4->Key + 0x18);
          *(undefined8 *)((local_338->ContainerFile).EncryptionKey.Key + 0x10) =
               *(undefined8 *)(param_4->Key + 0x10);
          *(undefined8 *)((local_338->ContainerFile).EncryptionKey.Key + 0x18) = uVar5;
          goto LAB_142a84474;
        }
        pFVar8 = (FFileIoStoreReader *)((longlong)&pFVar8->PlatformImpl + 1);
      } while ((longlong)pFVar8 < 8);
    }
    local_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_300.Data.ArrayNum = 0;
    local_300.Data.ArrayMax = 0;
    FGuid::AppendString(&(local_338->ContainerFile).EncryptionKeyGuid,&local_300,Digits);
    local_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_310.Data.ArrayNum = 0;
    local_310.Data.ArrayMax = 0;
    FGuid::AppendString(param_3,&local_310,Digits);
    ::FString::PrintfImpl
              (&local_2c8,L"Invalid encryption key \'%s\' (container \'%s\', encryption key \'%s\')"
              );
    if (local_2c8.Data.ArrayNum == 0) {
      local_2d8.DataPtr = L"";
LAB_142a845f8:
      sVar9 = wcslen(local_2d8.DataPtr);
      iVar13 = (int)sVar9;
    }
    else {
      local_2d8.DataPtr = (wchar_t *)local_2c8.Data.AllocatorInstance.Data;
      if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_142a845f8;
    }
    local_2d8.Size = iVar13;
    pFVar10 = FIoStatus::FIoStatus(&local_1d8,InvalidEncryptionKey,&local_2d8);
    TIoStatusOr<FIoContainerHeader>::TIoStatusOr<FIoContainerHeader>(__return_storage_ptr__,pFVar10)
    ;
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
    if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
    FIoStatus::~FIoStatus(&local_328);
    pFVar8 = local_338;
    if (local_338 == (FFileIoStoreReader *)0x0) goto LAB_142a84a0c;
    FFileIoStoreReader::Close(local_338,&local_208);
    pFVar10 = &local_208;
  }
  FIoStatus::~FIoStatus(pFVar10);
  uVar19 = (ulonglong)(pFVar8->DataContainer).Data.TypeIndex;
  if ((2 < uVar19) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TIoStatusOr<FIoContainerHeader> *)(*pcVar4)();
    return pTVar11;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar19])(&pFVar8->DataContainer);
  DestructItems<FFileIoStoreContainerFilePartition,int>
            ((FFileIoStoreContainerFilePartition *)
             (pFVar8->ContainerFile).Partitions.AllocatorInstance.Data,
             (pFVar8->ContainerFile).Partitions.ArrayNum);
  pFVar3 = (pFVar8->ContainerFile).Partitions.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (pFVar8->ContainerFile).FilePath.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (pFVar8->ContainerFile).CompressionMethods.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(pFVar8->TocImperfectHashMapFallback).field_0x48 = 0;
  pvVar12 = *(void **)&(pFVar8->TocImperfectHashMapFallback).field_0x40;
  if (pvVar12 != (void *)0x0) {
    FMemory::Free(pvVar12);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&pFVar8->TocImperfectHashMapFallback);
  ::operator_delete(pFVar8,0x268);
LAB_142a84a0c:
  FMemScope::~FMemScope(&local_318);
  FLLMScope::~FLLMScope(local_330);
  return __return_storage_ptr__;
}

// Mount @ 142a84a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142a84ba2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TIoStatusOr<FIoContainerHeader> * __thiscall
UE::IoStore::FFileIoStore::Mount
          (FFileIoStore *this,TIoStatusOr<FIoContainerHeader> *__return_storage_ptr__,
          wchar_t *param_1,int param_2)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  byte bVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  void *pvVar8;
  bool bVar9;
  int iVar10;
  TIoStatusOr<FIoContainerHeader> *pTVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStackY_188 [32];
  void *local_138 [2];
  FIoContainerHeader local_128;
  wchar_t *local_78;
  FIoStatus local_70;
  TIoStatusOr<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>_>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  LOCK();
  paVar1 = &this->ContainerInstanceId;
  aVar3 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
  UNLOCK();
  local_128.ContainerId.Id = 0xffffffffffffffff;
  local_128.PackageIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.PackageIds.ArrayNum = 0;
  local_128.PackageIds.ArrayMax = 0;
  local_128.StoreEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.StoreEntries.ArrayNum = 0;
  local_128.StoreEntries.ArrayMax = 0;
  local_128.OptionalSegmentPackageIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.OptionalSegmentPackageIds.ArrayNum = 0;
  local_128.OptionalSegmentPackageIds.ArrayMax = 0;
  local_128.OptionalSegmentStoreEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.OptionalSegmentStoreEntries.ArrayNum = 0;
  local_128.OptionalSegmentStoreEntries.ArrayMax = 0;
  local_128.RedirectsNameMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.RedirectsNameMap.ArrayNum = 0;
  local_128.RedirectsNameMap.ArrayMax = 0;
  local_128.LocalizedPackages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.LocalizedPackages.ArrayNum = 0;
  local_128.LocalizedPackages.ArrayMax = 0;
  local_128.PackageRedirects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.PackageRedirects.ArrayNum = 0;
  local_128.PackageRedirects.ArrayMax = 0;
  local_128.SoftPackageReferencesSerialInfo.Offset = -1;
  local_128.SoftPackageReferencesSerialInfo.Size = ___xmm_0000000000000000ffffffffffffffff;
  local_128.SoftPackageReferences.PackageIds.AllocatorInstance.Data = _UNK_15076adc8;
  local_128.SoftPackageReferences.PackageIds.ArrayNum = 0;
  local_128.SoftPackageReferences.PackageIds.ArrayMax = 0;
  local_128.SoftPackageReferences.PackageIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_128.SoftPackageReferences.PackageIndices.ArrayNum = 0;
  local_128.SoftPackageReferences.PackageIndices.ArrayMax = 0;
  local_128.SoftPackageReferences.bContainsSoftPackageReferences = false;
  local_128.SoftPackageReferences.bLoadedSoftPackageReferences = false;
  local_78 = param_1;
  FContainer::Open(&local_60,param_1,param_2,(uint)aVar3,&local_128);
  if (local_60.StatusValue.ErrorCode == Ok) {
    FIoStatus::operator=(&local_60.StatusValue,&FIoStatus::Unknown);
    local_138[0] = (void *)local_60.Value.Pad;
    local_60.Value.Pad[0] = '\0';
    local_60.Value.Pad[1] = '\0';
    local_60.Value.Pad[2] = '\0';
    local_60.Value.Pad[3] = '\0';
    local_60.Value.Pad[4] = '\0';
    local_60.Value.Pad[5] = '\0';
    local_60.Value.Pad[6] = '\0';
    local_60.Value.Pad[7] = '\0';
    AcquireSRWLockExclusive((PSRWLOCK)&this->RwLock);
    uVar14 = (this->MountedContainers).ArrayNum;
    iVar13 = 0;
    pFVar12 = (this->MountedContainers).AllocatorInstance.Data;
    if (0 < (int)uVar14) {
      do {
        iVar10 = (uVar14 >> 1) + iVar13;
        iVar5 = *(int *)(*(longlong *)(pFVar12 + (longlong)iVar10 * 8) + 0x23c);
        if (*(int *)((longlong)local_138[0] + 0x23c) == iVar5) {
          bVar9 = *(uint *)(*(longlong *)(pFVar12 + (longlong)iVar10 * 8) + 0x240) <
                  *(uint *)((longlong)local_138[0] + 0x240);
        }
        else {
          bVar9 = iVar5 <= *(int *)((longlong)local_138[0] + 0x23c);
        }
        if (!bVar9) {
          iVar13 = iVar10 + (uVar14 & 1);
        }
        uVar7 = uVar14 >> 1;
        uVar14 = uVar14 >> 1;
      } while (uVar7 != 0);
    }
    if (((pFVar12 <= (FScriptContainerElement *)local_138) &&
        ((FScriptContainerElement *)local_138 <
         pFVar12 + (longlong)(this->MountedContainers).ArrayMax * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TIoStatusOr<FIoContainerHeader> *)(*pcVar6)();
      return pTVar11;
    }
    iVar10 = (this->MountedContainers).ArrayNum;
    piVar2 = &(this->MountedContainers).ArrayMax;
    if (iVar10 == *piVar2) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)this,piVar2);
    }
    pFVar12 = (this->MountedContainers).AllocatorInstance.Data;
    (this->MountedContainers).ArrayNum = iVar10 + 1;
    pFVar12 = pFVar12 + (longlong)iVar13 * 8;
    memmove(pFVar12 + 8,pFVar12,(longlong)(iVar10 - iVar13) << 3);
    *(void **)((this->MountedContainers).AllocatorInstance.Data + (longlong)iVar13 * 8) =
         local_138[0];
    local_138[0] = (void *)0x0;
    ReleaseSRWLockExclusive((PSRWLOCK)&this->RwLock);
    if (4 < (byte)LogIoStore._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStore);
    }
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    FIoContainerHeader::FIoContainerHeader
              ((FIoContainerHeader *)&__return_storage_ptr__->Value,&local_128);
    pvVar8 = local_138[0];
    if (local_138[0] != (void *)0x0) {
      if (*(void **)((longlong)local_138[0] + 0x210) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)local_138[0] + 0x210));
      }
      if (*(void **)((longlong)pvVar8 + 0x1e0) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar8 + 0x1e0));
      }
      DestructItems<UE::IoStore::FContainerPartition,int>
                (*(FContainerPartition **)((longlong)pvVar8 + 0x1d0),
                 *(int *)((longlong)pvVar8 + 0x1d8));
      if (*(void **)((longlong)pvVar8 + 0x1d0) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar8 + 0x1d0));
      }
      *(undefined4 *)((longlong)pvVar8 + 0x1c0) = 0;
      if (*(void **)((longlong)pvVar8 + 0x1b8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar8 + 0x1b8));
      }
      TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,FIoOffsetAndLength>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)((longlong)pvVar8 + 0x178));
      bVar4 = *(byte *)((longlong)pvVar8 + 0x120);
      if ((2 < (ulonglong)bVar4) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TIoStatusOr<FIoContainerHeader> *)(*pcVar6)();
        return pTVar11;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FIoStoreTocResourceStorage::FMappedFile,FIoStoreTocResourceStorage::FReadBlocks>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[bVar4])(pvVar8);
      ::operator_delete(pvVar8,0x248);
    }
  }
  else {
    local_70.ErrorMessage.Chars = local_60.StatusValue.ErrorMessage.Chars;
    if (local_60.StatusValue.ErrorMessage.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_60.StatusValue.ErrorMessage.Chars + -4) =
           *(int *)(local_60.StatusValue.ErrorMessage.Chars + -4) + 1;
      UNLOCK();
    }
    local_70.ErrorCode = local_60.StatusValue.ErrorCode;
    local_70.SystemErrorCode = local_60.StatusValue.SystemErrorCode;
    TIoStatusOr<FIoContainerHeader>::TIoStatusOr<FIoContainerHeader>
              (__return_storage_ptr__,&local_70);
  }
  FIoStatus::operator=(&local_60.StatusValue,Unknown);
  if (local_60.StatusValue.ErrorCode == Ok) {
    TDefaultDelete<UE::IoStore::FContainer>::operator()
              ((TDefaultDelete<UE::IoStore::FContainer> *)&local_60.Value,
               (FContainer *)local_60.Value.Pad);
  }
  FIoStatus::~FIoStatus(&local_60.StatusValue);
  if (local_128.SoftPackageReferences.PackageIndices.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.SoftPackageReferences.PackageIndices.AllocatorInstance.Data);
  }
  if (local_128.SoftPackageReferences.PackageIds.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.SoftPackageReferences.PackageIds.AllocatorInstance.Data);
  }
  if (local_128.PackageRedirects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.PackageRedirects.AllocatorInstance.Data);
  }
  if (local_128.LocalizedPackages.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.LocalizedPackages.AllocatorInstance.Data);
  }
  if (local_128.RedirectsNameMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.RedirectsNameMap.AllocatorInstance.Data);
  }
  if (local_128.OptionalSegmentStoreEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_128.OptionalSegmentStoreEntries.AllocatorInstance.Data);
  }
  if (local_128.OptionalSegmentPackageIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_128.OptionalSegmentPackageIds.AllocatorInstance.Data);
  }
  if (local_128.StoreEntries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.StoreEntries.AllocatorInstance.Data);
  }
  if (local_128.PackageIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.PackageIds.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OnNewPendingRequestsAdded @ 142a87250

void __thiscall FFileIoStore::OnNewPendingRequestsAdded(FFileIoStore *this)

{
  if (this->bIsMultithreaded != false) {
                    /* WARNING: Could not recover jumptable at 0x000142a87263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*(this->PlatformImpl).Ptr + 0x38))();
    return;
  }
  return;
}

// OpenMapped @ 142a89590

TIoStatusOr<FIoMappedRegion> * __thiscall
FFileIoStore::OpenMapped
          (FFileIoStore *this,TIoStatusOr<FIoMappedRegion> *__return_storage_ptr__,
          FIoChunkId *param_1,FIoReadOptions *param_2)

{
  longlong *plVar1;
  int iVar2;
  FFileIoStoreReader *this_00;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  FIoStatus *pFVar6;
  TIoStatusOr<FIoMappedRegion> *pTVar7;
  FIoOffsetAndLength *pFVar8;
  FIoStoreTocCompressedBlockEntry *pFVar9;
  IMappedFileHandle *pIVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 local_78 [8];
  TStringView<wchar_t> local_70;
  FIoStatus local_60;
  FIoStatus local_50;
  FIoStatus local_40;
  
  if (param_2->TargetVa != (void *)0x0) {
    local_70.Size = 0x14;
    local_70.DataPtr = L"Invalid read options";
    pFVar6 = FIoStatus::FIoStatus(&local_60,InvalidParameter,&local_70);
    TIoStatusOr<FIoMappedRegion>::TIoStatusOr<FIoMappedRegion>(__return_storage_ptr__,pFVar6);
    return __return_storage_ptr__;
  }
  AcquireSRWLockShared((PSRWLOCK)&this->bIsMultithreaded);
  plVar13 = (this->IoStoreReadersLock).Mutex.Mutex.Ptr;
  iVar2 = *(int *)&(this->IoStoreReaders).AllocatorInstance.Data;
  plVar1 = plVar13 + iVar2;
  while( true ) {
    if (*(int *)&(this->IoStoreReaders).AllocatorInstance.Data != iVar2) {
      local_78[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FFileIoStoreReader,TDefaultDelete<FFileIoStoreReader>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_78);
    }
    if (plVar13 == plVar1) {
      pFVar6 = FIoStatus::FIoStatus(&local_40,NotFound);
      FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
      if (pFVar6->ErrorCode == Ok) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InStatus.IsOk()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                           ,0x102,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TIoStatusOr<FIoMappedRegion> *)(*pcVar4)();
          return pTVar7;
        }
      }
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,pFVar6);
      FIoStatus::~FIoStatus(pFVar6);
      goto LAB_142a89812;
    }
    this_00 = (FFileIoStoreReader *)*plVar13;
    if (this_00->bClosed != false) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bClosed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                         ,0x33c,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TIoStatusOr<FIoMappedRegion> *)(*pcVar4)();
        return pTVar7;
      }
    }
    pFVar8 = FFileIoStoreReader::FindChunkInternal(this_00,param_1);
    if (pFVar8 != (FIoOffsetAndLength *)0x0) break;
    plVar13 = plVar13 + 1;
  }
  uVar3 = param_2->RequestedSize;
  uVar14 = (ulonglong)
           CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar8->OffsetAndLength[5],pFVar8->OffsetAndLength[6]
                                              ),pFVar8->OffsetAndLength[7]),
                             pFVar8->OffsetAndLength[8]),pFVar8->OffsetAndLength[9]);
  pFVar9 = TArrayView<FIoStoreTocCompressedBlockEntry_const_,int>::operator[]
                     ((TArrayView<FIoStoreTocCompressedBlockEntry_const_,int> *)(*plVar13 + 0xb0),
                      (int)((ulonglong)
                            CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar8->OffsetAndLength[0],
                                                                pFVar8->OffsetAndLength[1]),
                                                       pFVar8->OffsetAndLength[2]),
                                              pFVar8->OffsetAndLength[3]),pFVar8->OffsetAndLength[4]
                                    ) / *(ulonglong *)(*plVar13 + 0x98)));
  uVar12 = *(ulonglong *)pFVar9->Data & 0xffffffffff;
  pIVar10 = FFileIoStoreReader::GetMappedContainerFileHandle((FFileIoStoreReader *)*plVar13,uVar12);
  if (uVar3 < uVar14) {
    uVar14 = uVar3;
  }
  lVar11 = (**(code **)(pIVar10->_padding_ + 8))(pIVar10,param_2->RequestedOffset + uVar12,uVar14,0)
  ;
  if (lVar11 == 0) {
    pFVar6 = FIoStatus::FIoStatus(&local_50,ReadError);
    TIoStatusOr<FIoMappedRegion>::TIoStatusOr<FIoMappedRegion>(__return_storage_ptr__,pFVar6);
  }
  else {
    FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
    FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
    *(IMappedFileHandle **)(__return_storage_ptr__->Value).Pad = pIVar10;
    *(longlong *)((__return_storage_ptr__->Value).Pad + 8) = lVar11;
  }
LAB_142a89812:
  ReleaseSRWLockShared((PSRWLOCK)&this->bIsMultithreaded);
  return __return_storage_ptr__;
}

// ReadBlocks @ 142a8fad0

void __thiscall FFileIoStore::ReadBlocks(FFileIoStore *this,FFileIoStoreResolvedRequest *param_1)

{
  int *piVar1;
  FIoStoreTocCompressedBlockEntry *pFVar2;
  byte bVar3;
  ushort uVar4;
  FFileIoStoreRequestAllocator *pFVar5;
  ForElementType<FFileIoStoreReadRequest_*> FVar6;
  ForElementType<FFileIoStoreCompressedBlock_*> FVar7;
  ForElementType<FFileIoStoreBlockScatter> FVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  undefined8 uVar14;
  FFileIoStoreBlockKey FVar15;
  FElement *pFVar16;
  undefined4 uVar17;
  FFileIoStoreCompressedBlock *pFVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  FFileIoStoreCompressedBlock **ppFVar23;
  FSlab *pFVar24;
  ulonglong uVar25;
  ForElementType<FFileIoStoreReadRequest_*> FVar26;
  ForElementType<FFileIoStoreCompressedBlock_*> FVar27;
  FFileIoStoreReadRequest *pFVar28;
  ulonglong uVar29;
  FSlab *pFVar30;
  ulonglong uVar31;
  ulong64 uVar32;
  FSlab *pFVar33;
  ForElementType<FFileIoStoreReadRequest_*> FVar34;
  ForElementType<FFileIoStoreCompressedBlock_*> FVar35;
  ForElementType<FFileIoStoreBlockScatter> FVar36;
  undefined8 *puVar37;
  FFileIoStoreReadRequest *pFVar38;
  uint uVar39;
  uint uVar40;
  longlong lVar41;
  ulonglong uVar43;
  FSlab *pFVar44;
  FFileIoStoreContainerFile *pFVar45;
  FFileIoStoreContainerFilePartition *pFVar46;
  bool local_res18 [8];
  longlong local_res20;
  FFileIoStoreCompressedBlock *local_b8;
  FFileIoStoreReadRequest *local_b0;
  ulong64 local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  uint local_88;
  uint uStack_84;
  FFileIoStoreBlockKey_u_0 local_80;
  uint local_78;
  int iStack_74;
  FFileIoStoreReadRequestList local_70;
  FFileIoStoreContainerFile *local_60;
  longlong local_58;
  FSlab *pFVar42;
  
  uVar25 = param_1->ResolvedOffset;
  pFVar45 = param_1->ContainerFile;
  pFVar42 = (FSlab *)0x0;
  local_a0 = 0;
  uVar31 = pFVar45->CompressionBlockSize;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar31;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar25;
  local_90 = SUB168(auVar11 / auVar9,0);
  local_a8 = param_1->ResolvedSize;
  lVar41 = (longlong)SUB164(auVar11 / auVar9,0);
  local_70.Head = (FFileIoStoreReadRequest *)0x0;
  local_70.Tail = (FFileIoStoreReadRequest *)0x0;
  local_98 = uVar25 - lVar41 * uVar31;
  local_58 = (longlong)(int)(((local_a8 - 1) + uVar25) / uVar31);
  local_60 = pFVar45;
  if (lVar41 <= local_58) {
    do {
      local_88 = pFVar45->ContainerInstanceId;
      bVar19 = false;
      uVar40 = (uint)local_90;
      local_80._s_0.BlockIndex = uVar40;
      local_80._s_0.FileIndex = local_88;
      local_res20 = lVar41;
      uStack_84 = uVar40;
      ppFVar23 = TMapBase<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,0>_>
                 ::FindOrAddImpl<FFileIoStoreBlockKey_const_&>
                           ((TMapBase<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFileIoStoreBlockKey,FFileIoStoreCompressedBlock_*,0>_>
                             *)&(this->RequestTracker).CompressedBlocksMap,uVar40 * 0x17 + local_88,
                            (FFileIoStoreBlockKey *)&local_80._s_0);
      if (*ppFVar23 == (FFileIoStoreCompressedBlock *)0x0) {
        pFVar5 = (this->RequestTracker).RequestAllocator;
        pFVar44 = (pFVar5->CompressedBlockAllocator).CurrentSlab;
        uVar4 = pFVar44->Allocated;
        pFVar44->Allocated = uVar4 + 1;
        if ((0xfff < uVar4) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("ElementIndex < SlabSize",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                                ,0x36,L""), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar44 = (pFVar5->CompressedBlockAllocator).CurrentSlab;
        pFVar44->Elements[uVar4].Slab = pFVar44;
        if (((pFVar5->CompressedBlockAllocator).CurrentSlab)->Allocated == 0x1000) {
          pFVar24 = ::operator_new(0x100008);
          pFVar33 = pFVar42;
          if (pFVar24 != (FSlab *)0x0) {
            memset(&pFVar24->field_0x4,0,0x100004);
            lVar41 = 0x1000;
            pFVar24->Allocated = 0;
            pFVar24->Freed = 0;
            pFVar30 = pFVar24;
            do {
              pFVar30 = (FSlab *)&pFVar30->Elements[0].Slab;
              *(FSlab **)pFVar30 = (FSlab *)0x0;
              lVar41 = lVar41 + -1;
              pFVar33 = pFVar24;
            } while (lVar41 != 0);
          }
          (pFVar5->CompressedBlockAllocator).CurrentSlab = pFVar33;
        }
        memset((FFileIoStoreCompressedBlock *)(pFVar44->Elements + uVar4),0,0xf8);
        uVar40 = (uint)local_90;
        bVar19 = true;
        pFVar16 = pFVar44->Elements + uVar4;
        (pFVar16->Data).Pad[0x18] = 0xff;
        (pFVar16->Data).Pad[0x19] = 0xff;
        (pFVar16->Data).Pad[0x1a] = 0xff;
        (pFVar16->Data).Pad[0x1b] = 0xff;
        (pFVar16->Data).Pad[0x1c] = 0xff;
        (pFVar16->Data).Pad[0x1d] = 0xff;
        (pFVar16->Data).Pad[0x1e] = 0xff;
        (pFVar16->Data).Pad[0x1f] = 0xff;
        pFVar16 = pFVar44->Elements + uVar4;
        (pFVar16->Data).Pad[0x20] = 0xff;
        (pFVar16->Data).Pad[0x21] = 0xff;
        (pFVar16->Data).Pad[0x22] = 0xff;
        (pFVar16->Data).Pad[0x23] = 0xff;
        (pFVar16->Data).Pad[0x24] = 0xff;
        (pFVar16->Data).Pad[0x25] = 0xff;
        (pFVar16->Data).Pad[0x26] = 0xff;
        (pFVar16->Data).Pad[0x27] = 0xff;
        pFVar16 = pFVar44->Elements + uVar4;
        (pFVar16->Data).Pad[0x28] = 0xff;
        (pFVar16->Data).Pad[0x29] = 0xff;
        (pFVar16->Data).Pad[0x2a] = 0xff;
        (pFVar16->Data).Pad[0x2b] = 0xff;
        pFVar16 = pFVar44->Elements + uVar4;
        (pFVar16->Data).Pad[0x54] = '\x02';
        (pFVar16->Data).Pad[0x55] = '\0';
        (pFVar16->Data).Pad[0x56] = '\0';
        (pFVar16->Data).Pad[0x57] = '\0';
        pFVar16 = pFVar44->Elements + uVar4;
        (pFVar16->Data).Pad[0xa4] = '\x02';
        (pFVar16->Data).Pad[0xa5] = '\0';
        (pFVar16->Data).Pad[0xa6] = '\0';
        (pFVar16->Data).Pad[0xa7] = '\0';
        *ppFVar23 = (FFileIoStoreCompressedBlock *)(pFVar44->Elements + uVar4);
        *(FFileIoStoreBlockKey_u_0 *)(pFVar44->Elements[uVar4].Data.Pad + 8) = local_80;
        lVar41 = local_res20;
      }
      local_b8 = *ppFVar23;
      if ((local_b8 == (FFileIoStoreCompressedBlock *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("CompressedBlock",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                              ,0x809,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if ((local_b8->bCancelled != false) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("!CompressedBlock->bCancelled",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                              ,0x80a,L""), bVar20)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if (bVar19) {
        uVar14 = *(undefined8 *)((pFVar45->EncryptionKey).Key + 8);
        *(undefined8 *)(local_b8->EncryptionKey).Key = *(undefined8 *)(pFVar45->EncryptionKey).Key;
        *(undefined8 *)((local_b8->EncryptionKey).Key + 8) = uVar14;
        uVar14 = *(undefined8 *)((pFVar45->EncryptionKey).Key + 0x18);
        *(undefined8 *)((local_b8->EncryptionKey).Key + 0x10) =
             *(undefined8 *)((pFVar45->EncryptionKey).Key + 0x10);
        *(undefined8 *)((local_b8->EncryptionKey).Key + 0x18) = uVar14;
        uVar39 = 0;
        if ((int)uVar40 < (pFVar45->CompressionBlocks).ArrayNum) {
          uVar39 = ~uVar40 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar2 = (pFVar45->CompressionBlocks).DataPtr + lVar41;
        local_b8->UncompressedSize = *(uint *)(pFVar2->Data + 8) & 0xffffff;
        local_b8->CompressedSize = *(uint *)(pFVar2->Data + 4) >> 8;
        bVar3 = pFVar2->Data[0xb];
        if (((pFVar45->CompressionMethods).ArrayNum <= (int)(uint)bVar3) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_b8->CompressionMethod =
             *(FName *)((pFVar45->CompressionMethods).AllocatorInstance.Data + (ulonglong)bVar3 * 8)
        ;
        if ((pFVar45->ContainerFlags & Signed) != None) {
          if (((pFVar45->BlockSignatureTable).ArrayNum == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!ContainerFile->BlockSignatureTable.IsEmpty()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                  ,0x814,L""), bVar19)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          lVar41 = local_res20;
          iVar22 = (pFVar45->BlockSignatureTable).ArrayNum;
          uVar17 = *(undefined4 *)&(pFVar45->BlockSignatureTable).field_0xc;
          (local_b8->BlockSignatureTable).DataPtr = (pFVar45->BlockSignatureTable).DataPtr;
          (local_b8->BlockSignatureTable).ArrayNum = iVar22;
          *(undefined4 *)&(local_b8->BlockSignatureTable).field_0xc = uVar17;
          uVar39 = 0;
          if ((int)uVar40 < (pFVar45->BlockSignatureTable).ArrayNum) {
            uVar39 = ~uVar40 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar19)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          local_b8->SignatureHash = (pFVar45->BlockSignatureTable).DataPtr + lVar41;
        }
        local_b8->RawSize = (*(uint *)(pFVar2->Data + 4) >> 8) + 0xf & 0xfffffff0;
        uVar39 = (uint)((*(ulonglong *)pFVar2->Data & 0xffffffffff) / pFVar45->PartitionSize);
        uVar40 = 0;
        if ((int)uVar39 < (pFVar45->Partitions).ArrayNum) {
          uVar40 = ~uVar39 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar46 = (FFileIoStoreContainerFilePartition *)
                  ((pFVar45->Partitions).AllocatorInstance.Data + (longlong)(int)uVar39 * 0x38);
        uVar31 = (*(ulonglong *)pFVar2->Data & 0xffffffffff) % pFVar45->PartitionSize;
        local_b8->RawOffset = uVar31;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = this->ReadBufferSize;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar31;
        uVar25 = SUB168(auVar12 / auVar10,0);
        uVar40 = (uint)((((ulonglong)local_b8->RawSize - 1) + uVar31) / this->ReadBufferSize);
        uVar39 = SUB164(auVar12 / auVar10,0);
        if ((uVar40 - uVar39 == -1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("RawBlockCount > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                ,0x821,L""), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        while (uVar39 <= uVar40) {
          local_78 = pFVar46->ContainerFileIndex;
          iVar22 = (int)uVar25;
          FVar15.field0_0x0._s_0.BlockIndex = iVar22;
          FVar15.field0_0x0._s_0.FileIndex = local_78;
          iStack_74 = iVar22;
          local_b0 = FFileIoStoreRequestTracker::FindOrAddRawBlock
                               (&this->RequestTracker,FVar15,local_res18);
          if ((local_b0 == (FFileIoStoreReadRequest *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RawBlock",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                  ,0x82a,L""), bVar19)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if ((local_b0->bCancelled != false) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!RawBlock->bCancelled",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                  ,0x82b,L""), bVar19)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar18 = local_b8;
          if (local_res18[0] != false) {
            local_b0->Priority = param_1->Priority;
            local_b0->ContainerFilePartition = pFVar46;
            uVar32 = (uVar25 & 0xffffffff) * this->ReadBufferSize;
            local_b0->Offset = uVar32;
            uVar25 = this->ReadBufferSize + uVar32;
            if (pFVar46->FileSize < uVar25) {
              uVar25 = pFVar46->FileSize;
            }
            local_b0->Size = uVar25 - uVar32;
            if (local_70.Tail == (FFileIoStoreReadRequest *)0x0) {
              local_70.Head = local_b0;
              local_b0->Previous = (FFileIoStoreReadRequest *)0x0;
            }
            else {
              (local_70.Tail)->Next = local_b0;
              local_b0->Previous = local_70.Tail;
            }
            local_b0->Next = (FFileIoStoreReadRequest *)0x0;
            local_70.Tail = local_b0;
          }
          uVar25 = local_b0->Offset;
          uVar43 = local_b0->Size + uVar25;
          uVar31 = local_b8->RawOffset;
          uVar29 = local_b8->RawSize + uVar31;
          if (uVar29 < uVar43) {
            uVar43 = uVar29;
          }
          iVar21 = (int)uVar25;
          if (uVar25 < uVar31) {
            iVar21 = (int)uVar31;
          }
          local_b0->BytesUsed = local_b0->BytesUsed + ((int)uVar43 - iVar21);
          FVar34 = (ForElementType<FFileIoStoreReadRequest_*>)&local_b8->RawBlocks;
          FVar6 = (local_b8->RawBlocks).AllocatorInstance.SecondaryData;
          FVar26 = FVar34;
          if (FVar6 != (ForElementType<FFileIoStoreReadRequest_*>)0x0) {
            FVar26 = FVar6;
          }
          if ((ulonglong)FVar26 <= &local_b0) {
            FVar26 = FVar34;
            if (FVar6 != (ForElementType<FFileIoStoreReadRequest_*>)0x0) {
              FVar26 = FVar6;
            }
            if ((&local_b0 <
                 (FFileIoStoreReadRequest **)
                 ((longlong)FVar26 + (longlong)(local_b8->RawBlocks).ArrayMax * 8)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar19)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          iVar21 = (pFVar18->RawBlocks).ArrayNum;
          piVar1 = &(pFVar18->RawBlocks).ArrayMax;
          if (iVar21 == *piVar1) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FFileIoStoreReadRequest_*>_>
                               (0x808,(ForElementType<FFileIoStoreReadRequest_*> *)FVar34,piVar1);
          }
          pFVar28 = local_b0;
          (pFVar18->RawBlocks).ArrayNum = iVar21 + 1;
          FVar6 = (pFVar18->RawBlocks).AllocatorInstance.SecondaryData;
          if (FVar6 != (ForElementType<FFileIoStoreReadRequest_*>)0x0) {
            FVar34 = FVar6;
          }
          *(FFileIoStoreReadRequest **)((longlong)FVar34 + (longlong)iVar21 * 8) = local_b0;
          local_b8->UnfinishedRawBlocksCount = local_b8->UnfinishedRawBlocksCount + 1;
          local_b8->RefCount = local_b8->RefCount + 1;
          FVar35 = (ForElementType<FFileIoStoreCompressedBlock_*>)&local_b0->CompressedBlocks;
          FVar7 = (local_b0->CompressedBlocks).AllocatorInstance.SecondaryData;
          FVar27 = FVar35;
          if (FVar7 != (ForElementType<FFileIoStoreCompressedBlock_*>)0x0) {
            FVar27 = FVar7;
          }
          if ((ulonglong)FVar27 <= &local_b8) {
            FVar27 = FVar35;
            if (FVar7 != (ForElementType<FFileIoStoreCompressedBlock_*>)0x0) {
              FVar27 = FVar7;
            }
            if ((&local_b8 <
                 (FFileIoStoreCompressedBlock **)
                 ((longlong)FVar27 + (longlong)(local_b0->CompressedBlocks).ArrayMax * 8)) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar19)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          iVar21 = (pFVar28->CompressedBlocks).ArrayNum;
          piVar1 = &(pFVar28->CompressedBlocks).ArrayMax;
          if (iVar21 == *piVar1) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FFileIoStoreCompressedBlock_*>_>
                               (0x808,(ForElementType<FFileIoStoreCompressedBlock_*> *)FVar35,piVar1
                               );
          }
          (pFVar28->CompressedBlocks).ArrayNum = iVar21 + 1;
          FVar7 = (pFVar28->CompressedBlocks).AllocatorInstance.SecondaryData;
          if (FVar7 != (ForElementType<FFileIoStoreCompressedBlock_*>)0x0) {
            FVar35 = FVar7;
          }
          uVar39 = iVar22 + 1;
          uVar25 = (ulonglong)uVar39;
          *(FFileIoStoreCompressedBlock **)((longlong)FVar35 + (longlong)iVar21 * 8) = local_b8;
          local_b0->BufferRefCount = local_b0->BufferRefCount + 1;
          pFVar45 = local_60;
        }
      }
      uVar25 = local_98;
      if ((local_b8->UncompressedSize <= local_98) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("CompressedBlock->UncompressedSize > RequestStartOffsetInBlock",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                              ,0x83f,L""), bVar19)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar31 = local_b8->UncompressedSize - uVar25;
      uVar32 = local_a8;
      if (uVar31 < local_a8) {
        uVar32 = uVar31;
      }
      uVar31 = local_a0 + uVar32;
      if ((param_1->ResolvedSize < uVar31) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("OffsetInRequest + RequestSizeInBlock <= ResolvedRequest.ResolvedSize"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                              ,0x841,L""), bVar19)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if (((ulonglong)local_b8->UncompressedSize < uVar32 + uVar25) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("RequestStartOffsetInBlock + RequestSizeInBlock <= CompressedBlock->UncompressedSize"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                              ,0x842,L""), bVar19)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar18 = local_b8;
      FVar36 = (ForElementType<FFileIoStoreBlockScatter>)&local_b8->ScatterList;
      iVar22 = (local_b8->ScatterList).ArrayNum;
      piVar1 = &(local_b8->ScatterList).ArrayMax;
      if (iVar22 == *piVar1) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FFileIoStoreBlockScatter>_>
                           (0x820,(ForElementType<FFileIoStoreBlockScatter> *)FVar36,piVar1);
      }
      (pFVar18->ScatterList).ArrayNum = iVar22 + 1;
      FVar8 = (pFVar18->ScatterList).AllocatorInstance.SecondaryData;
      if (FVar8 != (ForElementType<FFileIoStoreBlockScatter>)0x0) {
        FVar36 = FVar8;
      }
      puVar37 = (undefined8 *)((longlong)FVar36 + (longlong)iVar22 * 0x20);
      DefaultConstructItems<FFileIoStoreBlockScatter,int>(puVar37,1);
      local_a8 = local_a8 - uVar32;
      puVar37[1] = local_a0;
      puVar37[2] = local_98;
      *puVar37 = param_1;
      puVar37[3] = uVar32;
      local_98 = 0;
      local_a0 = uVar31;
      FFileIoStoreRequestTracker::AddReadRequestsToResolvedRequest
                (&this->RequestTracker,local_b8,param_1);
      local_90 = (ulonglong)((int)local_90 + 1);
      lVar41 = local_res20 + 1;
    } while (lVar41 <= local_58);
    if (local_70.Head != (FFileIoStoreReadRequest *)0x0) {
      pFVar28 = local_70.Head;
      pFVar38 = (local_70.Head)->Next;
      pFVar44 = pFVar42;
      local_res20 = lVar41;
      while( true ) {
        pFVar44 = (FSlab *)(pFVar44->Elements[0].Data.Pad + (pFVar28->Size - 8));
        uVar40 = (int)pFVar42 + 1;
        pFVar42 = (FSlab *)(ulonglong)uVar40;
        if ((pFVar28->Next != pFVar38) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Current->Next == Next",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                                ,0x107,
                                L"FFileIoStoreReadRequestListIterator cached Next pointer != Current->Next - was list modified during iteration?"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if (pFVar38 == (FFileIoStoreReadRequest *)0x0) break;
        pFVar28 = pFVar38;
        pFVar38 = pFVar38->Next;
      }
      UE::FIoDispatcherFilesystemStats::OnReadRequestsQueued
                (&(this->Stats).Stats,(ulong64)pFVar44,(longlong)(int)uVar40);
      FFileIoStoreRequestQueue::Push(&this->RequestQueue,&local_70);
      if (this->bIsMultithreaded != false) {
        (**(code **)((longlong)*(this->PlatformImpl).Ptr + 0x38))();
      }
    }
  }
  return;
}

// ReopenAllFileHandles @ 142a98930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFileIoStore::ReopenAllFileHandles(FFileIoStore *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  bool *local_res10;
  
  if ((2 < (byte)LogIoDispatcher._0_1_) &&
     (*(longlong *)(*(longlong *)&(this->RequestQueue).RequestPriorityCounts.field_0x48 + 0x20) != 0
     )) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
  }
  local_res10 = &this->bIsMultithreaded;
  AcquireSRWLockExclusive((PSRWLOCK)local_res10);
  plVar8 = (this->IoStoreReadersLock).Mutex.Mutex.Ptr;
  iVar2 = *(int *)&(this->IoStoreReaders).AllocatorInstance.Data;
  plVar1 = plVar8 + iVar2;
  while( true ) {
    if (*(int *)&(this->IoStoreReaders).AllocatorInstance.Data != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FFileIoStoreReader,TDefaultDelete<FFileIoStoreReader>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar8 == plVar1) break;
    puVar4 = (undefined8 *)*plVar8;
    iVar3 = *(int *)(puVar4 + 0x24);
    puVar7 = (undefined8 *)puVar4[0x23];
    puVar6 = puVar7 + (longlong)iVar3 * 7;
    while( true ) {
      if (*(int *)(puVar4 + 0x24) != iVar3) {
        `TCheckedPointerIterator<FFileIoStoreContainerFilePartition,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar7 == puVar6) break;
      (**(code **)(*(longlong *)*puVar4 + 0x18))((longlong *)*puVar4,*puVar7);
      plVar5 = (longlong *)*puVar4;
      if (*(int *)(puVar7 + 4) == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,L"",puVar7,puVar7 + 1);
        puVar7 = puVar7 + 7;
      }
      else {
        (**(code **)(*plVar5 + 0x10))(plVar5,puVar7[3],puVar7,puVar7 + 1);
        puVar7 = puVar7 + 7;
      }
    }
    plVar8 = plVar8 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000142a98a4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)local_res10);
  return;
}

// ReopenAllFileHandles @ 142a98a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::IoStore::FFileIoStore::ReopenAllFileHandles(FFileIoStore *this)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  FFileIoStore *pFVar6;
  FScriptContainerElement *pFVar7;
  byte bVar8;
  bool bVar9;
  IPlatformIoDispatcher *pIVar10;
  ulonglong uVar11;
  byte bVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined1 local_98;
  undefined1 local_97 [7];
  FFileIoStore *local_90;
  FScriptContainerElement *local_88;
  FPlatformRWLock *local_80;
  undefined8 local_78;
  int local_70;
  undefined4 local_68;
  byte local_64;
  FIoStatus local_60;
  FIoStatus local_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_80 = &this->RwLock;
  local_90 = this;
  AcquireSRWLockExclusive((PSRWLOCK)local_80);
  pFVar6 = local_90;
  iVar1 = (local_90->MountedContainers).ArrayNum;
  uVar11 = (ulonglong)iVar1;
  pFVar15 = (local_90->MountedContainers).AllocatorInstance.Data;
  local_90 = (FFileIoStore *)CONCAT44(local_90._4_4_,iVar1);
  local_88 = pFVar15 + uVar11 * 8;
  do {
    pFVar7 = local_88;
    if ((pFVar6->MountedContainers).ArrayNum != (int)uVar11) {
      local_98 = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_98);
    }
    if (pFVar15 == pFVar7) {
      ReleaseSRWLockExclusive((PSRWLOCK)local_80);
      return;
    }
    if ((2 < (byte)LogIoStore._0_1_) && (0 < *(int *)(*(longlong *)pFVar15 + 0x244))) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStore);
    }
    lVar3 = *(longlong *)pFVar15;
    iVar1 = *(int *)(lVar3 + 0x1d8);
    lVar13 = *(longlong *)(lVar3 + 0x1d0);
    lVar16 = (longlong)iVar1 * 0x30 + lVar13;
    while( true ) {
      if (*(int *)(lVar3 + 0x1d8) != iVar1) {
        local_97[0] = 0;
        `TCheckedPointerIterator<UE::IoStore::FContainerPartition,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_97);
      }
      if (lVar13 == lVar16) break;
      if (4 < (byte)LogIoStore._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStore);
      }
      pIVar10 = FPlatformIoDispatcher::Get();
      (**(code **)((longlong)*pIVar10 + 0x18))(pIVar10,&local_60,*(undefined8 *)(lVar13 + 0x18));
      FIoStatus::~FIoStatus(&local_60);
      lVar4 = *(longlong *)pFVar15;
      bVar8 = *(byte *)(lVar4 + 0x238) >> 1 & 1;
      local_78 = *(undefined8 *)(lVar4 + 0x1e0);
      bVar12 = bVar8 | 2;
      if ((*(byte *)(lVar4 + 0x238) & 4) == 0) {
        bVar12 = bVar8;
      }
      iVar2 = *(int *)(lVar4 + 0x1e8);
      if ((iVar2 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar11 = *(ulonglong *)(*(longlong *)pFVar15 + 0x230);
      local_70 = iVar2;
      if ((uVar11 != (uVar11 & 0xffffffff)) &&
         (local_a8 = uVar11,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar9)
         ) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_68 = (undefined4)uVar11;
      local_64 = bVar12;
      pIVar10 = FPlatformIoDispatcher::Get();
      if (*(int *)(lVar13 + 0x10) == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = *(wchar_t **)(lVar13 + 8);
      }
      local_a8 = 0;
      (**(code **)((longlong)*pIVar10 + 0x10))(pIVar10,&local_50,pwVar14,&local_78);
      if (local_50.ErrorCode != Ok) {
        StatusOrCrash(&local_50);
      }
      FIoStatus::operator=(&local_50,&FIoStatus::Unknown);
      *(undefined8 *)(lVar13 + 0x18) = local_40;
      FIoStatus::operator=(&local_50,Unknown);
      FIoStatus::~FIoStatus(&local_50);
      lVar13 = lVar13 + 0x30;
    }
    uVar11 = (ulonglong)local_90 & 0xffffffff;
    pFVar15 = pFVar15 + 8;
  } while( true );
}

// Resolve @ 142a9a3c0

bool __thiscall FFileIoStore::Resolve(FFileIoStore *this,FIoRequestImpl *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint *puVar1;
  int *piVar2;
  long64 *plVar3;
  FFileIoStoreRequestQueue *this_00;
  int *piVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  ushort uVar10;
  FFileIoStoreReader *this_01;
  ulonglong uVar11;
  IPlatformFileIoStore *pIVar12;
  FFileIoStoreRequestAllocator *pFVar13;
  FScriptContainerElement *pFVar14;
  FFileIoStoreReadRequest *pFVar15;
  FIoRequestImpl *pFVar16;
  FFileIoStoreReadRequestLink *pFVar17;
  ForElementType<FFileIoStoreCompressedBlock_*> FVar18;
  short *psVar19;
  FFileIoStoreReadRequestLink *pFVar20;
  code *pcVar21;
  FFileIoStoreReadRequestLink *pFVar22;
  FFileIoStoreResolvedRequest *pFVar23;
  bool bVar24;
  undefined1 uVar25;
  char cVar26;
  bool bVar27;
  int iVar28;
  FIoOffsetAndLength *pFVar29;
  FSlab *pFVar30;
  FFileIoStoreReadRequest *pFVar31;
  FSlab *pFVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  FSlab *pFVar37;
  IIoDispatcherBackend *pIVar38;
  FSlab *pFVar39;
  FScriptContainerElement *pFVar40;
  FFileIoStoreReadRequest *pFVar41;
  uint uVar42;
  ulong64 uVar43;
  ForElementType<FFileIoStoreCompressedBlock_*> FVar45;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FFileIoStoreReadRequest *local_60;
  FFileIoStoreResolvedRequest *local_58;
  FFileIoStoreReadRequest *local_50;
  undefined8 uStack_48;
  IIoDispatcherBackend *pIVar44;
  
  pFVar40 = (this->IoStoreReaders).AllocatorInstance.Data;
  iVar28 = (this->IoStoreReaders).ArrayNum;
  pFVar14 = pFVar40 + (longlong)iVar28 * 8;
  while( true ) {
    if ((this->IoStoreReaders).ArrayNum != iVar28) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FFileIoStoreReader,TDefaultDelete<FFileIoStoreReader>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar40 == pFVar14) {
      return false;
    }
    this_01 = *(FFileIoStoreReader **)pFVar40;
    if ((this_01->bClosed != false) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bClosed",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                            ,0x33c,L""), bVar24)) {
      pcVar21 = (code *)swi(3);
      uVar25 = (*pcVar21)();
      return (bool)uVar25;
    }
    pFVar29 = FFileIoStoreReader::FindChunkInternal(this_01,&param_1->ChunkId);
    if (pFVar29 != (FIoOffsetAndLength *)0x0) break;
    pFVar40 = pFVar40 + 8;
  }
  uVar5 = pFVar29->OffsetAndLength[0];
  uVar6 = pFVar29->OffsetAndLength[1];
  uVar7 = pFVar29->OffsetAndLength[2];
  uVar8 = pFVar29->OffsetAndLength[3];
  uVar11 = (param_1->Options).RequestedOffset;
  uVar9 = pFVar29->OffsetAndLength[4];
  uVar33 = (ulonglong)
           CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar29->OffsetAndLength[5],
                                               pFVar29->OffsetAndLength[6]),
                                      pFVar29->OffsetAndLength[7]),pFVar29->OffsetAndLength[8]),
                    pFVar29->OffsetAndLength[9]);
  uVar43 = 0;
  if (uVar11 <= uVar33) {
    uVar43 = uVar33 - uVar11;
    if ((param_1->Options).RequestedSize < uVar43) {
      uVar43 = (param_1->Options).RequestedSize;
    }
  }
  lVar35 = *(longlong *)pFVar40;
  iVar28 = param_1->Priority;
  pFVar30 = (this->RequestAllocator).ResolvedRequestAllocator.CurrentSlab;
  uVar10 = pFVar30->Allocated;
  pFVar30->Allocated = uVar10 + 1;
  if ((0xfff < uVar10) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementIndex < SlabSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                          ,0x36,L""), bVar24)) {
    pcVar21 = (code *)swi(3);
    uVar25 = (*pcVar21)();
    return (bool)uVar25;
  }
  pFVar30 = (this->RequestAllocator).ResolvedRequestAllocator.CurrentSlab;
  pFVar30->Elements[uVar10].Slab = pFVar30;
  local_58 = (FFileIoStoreResolvedRequest *)(pFVar30->Elements + uVar10);
  if (((this->RequestAllocator).ResolvedRequestAllocator.CurrentSlab)->Allocated == 0x1000) {
    pFVar30 = ::operator_new(0x48008);
    if (pFVar30 != (FSlab *)0x0) {
      memset(&pFVar30->field_0x4,0,0x48004);
      pFVar30->Allocated = 0;
      pFVar30->Freed = 0;
      lVar34 = 0x1000;
      pFVar37 = pFVar30;
      do {
        pFVar37 = (FSlab *)&pFVar37->Elements[0].Slab;
        *(FSlab **)pFVar37 = (FSlab *)0x0;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
    }
    (this->RequestAllocator).ResolvedRequestAllocator.CurrentSlab = pFVar30;
  }
  pFVar23 = local_58;
  local_58->ContainerFile = (FFileIoStoreContainerFile *)(lVar35 + 0x90);
  local_58->DispatcherRequest = param_1;
  local_58->Priority = iVar28;
  local_58->ResolvedOffset =
       CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar5,uVar6),uVar7),uVar8),uVar9) + uVar11;
  pIVar44 = (IIoDispatcherBackend *)0x0;
  local_58->ReadRequestsHead = (FFileIoStoreReadRequestLink *)0x0;
  local_58->ReadRequestsTail = (FFileIoStoreReadRequestLink *)0x0;
  local_58->ResolvedSize = uVar43;
  uVar42 = 0;
  local_58->UnfinishedReadsCount = 0;
  pIVar38 = (IIoDispatcherBackend *)&this->_padding_;
  if (this == (FFileIoStore *)0x0) {
    pIVar38 = pIVar44;
  }
  local_58->bFailed = false;
  local_58->bCancelled = false;
  param_1->BackendData = local_58;
  FIoStoreTrace::RequestStarted(param_1,pIVar38);
  if (uVar43 == 0) {
    if (CONCAT41(CONCAT31(CONCAT21(CONCAT11(pFVar29->OffsetAndLength[5],pFVar29->OffsetAndLength[6])
                                   ,pFVar29->OffsetAndLength[7]),pFVar29->OffsetAndLength[8]),
                 pFVar29->OffsetAndLength[9]) < uVar11) {
      pFVar23->bFailed = true;
    }
    else {
      if ((pFVar23->DispatcherRequest == (FIoRequestImpl *)0x0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("DispatcherRequest",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                              ,0x32e,L""), bVar24)) {
        pcVar21 = (code *)swi(3);
        uVar25 = (*pcVar21)();
        return (bool)uVar25;
      }
      FIoRequestImpl::CreateBuffer(pFVar23->DispatcherRequest,0);
    }
    if ((pFVar23->DispatcherRequest == (FIoRequestImpl *)0x0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("ResolvedRequest->DispatcherRequest",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                            ,0x66e,L""), bVar24)) {
      pcVar21 = (code *)swi(3);
      uVar25 = (*pcVar21)();
      return (bool)uVar25;
    }
    pFVar16 = pFVar23->DispatcherRequest;
    pFVar23->DispatcherRequest = (FIoRequestImpl *)0x0;
    if (pFVar23->bFailed == false) {
      FIoStoreTrace::RequestCompleted(pFVar16,pFVar23->ResolvedSize);
    }
    else {
      if (pFVar16->LastBackendError != Cancelled) {
        pFVar16->LastBackendError = ReadError;
      }
      FIoStoreTrace::RequestFailed(pFVar16);
    }
    pFVar16->BackendData = (void *)0x0;
    if (this->CompletedRequestsTail == (FIoRequestImpl *)0x0) {
      this->CompletedRequestsHead = pFVar16;
    }
    else {
      this->CompletedRequestsTail->NextRequest = pFVar16;
    }
    this->CompletedRequestsTail = pFVar16;
    pFVar16->NextRequest = (FIoRequestImpl *)0x0;
    pFVar22 = pFVar23->ReadRequestsHead;
    while (pFVar22 != (FFileIoStoreReadRequestLink *)0x0) {
      pFVar17 = pFVar22->Next;
      if ((pFVar22->ReadRequest->RefCount == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("Link->ReadRequest.RefCount > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                              ,0x4ae,L""), bVar24)) {
        pcVar21 = (code *)swi(3);
        uVar25 = (*pcVar21)();
        return (bool)uVar25;
      }
      puVar1 = &pFVar22->ReadRequest->RefCount;
      *puVar1 = *puVar1 - 1;
      if (*puVar1 == 0) {
        pFVar31 = pFVar22->ReadRequest;
        FVar45 = (ForElementType<FFileIoStoreCompressedBlock_*>)&pFVar31->CompressedBlocks;
        FVar18 = (pFVar31->CompressedBlocks).AllocatorInstance.SecondaryData;
        piVar4 = &(pFVar31->CompressedBlocks).ArrayNum;
        iVar28 = *piVar4;
        if (FVar18 != (ForElementType<FFileIoStoreCompressedBlock_*>)0x0) {
          FVar45 = FVar18;
        }
        FVar18 = (ForElementType<FFileIoStoreCompressedBlock_*>)
                 ((longlong)FVar45 + (longlong)iVar28 * 8);
        while( true ) {
          if (*piVar4 != iVar28) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FFileIoStoreCompressedBlock_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res20);
          }
          if (FVar45 == FVar18) break;
          lVar35 = *(longlong *)FVar45;
          if ((*(int *)(lVar35 + 0x2c) == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CompressedBlock->RefCount > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                  ,0x4b3,L""), bVar24)) {
            pcVar21 = (code *)swi(3);
            uVar25 = (*pcVar21)();
            return (bool)uVar25;
          }
          piVar2 = (int *)(lVar35 + 0x2c);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            if (*(void **)(lVar35 + 0x98) != (void *)0x0) {
              FMemory::Free(*(void **)(lVar35 + 0x98));
            }
            if (*(void **)(lVar35 + 0x48) != (void *)0x0) {
              FMemory::Free(*(void **)(lVar35 + 0x48));
            }
            psVar19 = *(short **)(lVar35 + 0xf8);
            psVar19[1] = psVar19[1] + 1;
            if (psVar19[1] == 0x1000) {
              if ((*psVar19 != 0x1000) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Slab->Freed == Slab->Allocated",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                                      ,0x48,L""), bVar24)) {
                pcVar21 = (code *)swi(3);
                uVar25 = (*pcVar21)();
                return (bool)uVar25;
              }
              ::operator_delete(psVar19,0x100008);
            }
          }
          FVar45 = (ForElementType<FFileIoStoreCompressedBlock_*>)((longlong)FVar45 + 8);
        }
        pFVar31 = pFVar22->ReadRequest;
        FVar45 = (pFVar31->CompressedBlocks).AllocatorInstance.SecondaryData;
        pFVar13 = (this->RequestTracker).RequestAllocator;
        if (FVar45 != (ForElementType<FFileIoStoreCompressedBlock_*>)0x0) {
          FMemory::Free((void *)FVar45);
        }
        pFVar31 = pFVar31[1].Next;
        psVar19 = (short *)((longlong)&pFVar31->Next + 2);
        *psVar19 = *psVar19 + 1;
        if (*(short *)((longlong)&pFVar31->Next + 2) == 0x1000) {
          if ((*(short *)&pFVar31->Next != 0x1000) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Slab->Freed == Slab->Allocated",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                                  ,0x48,L""), bVar24)) {
            pcVar21 = (code *)swi(3);
            uVar25 = (*pcVar21)();
            return (bool)uVar25;
          }
          ::operator_delete(pFVar31,0xd8008);
        }
        plVar3 = &pFVar13->LiveReadRequestsCount;
        *plVar3 = *plVar3 + -1;
      }
      pFVar20 = pFVar22[1].Next;
      psVar19 = (short *)((longlong)&pFVar20->Next + 2);
      *psVar19 = *psVar19 + 1;
      pFVar22 = pFVar17;
      if (*(short *)((longlong)&pFVar20->Next + 2) == 0x1000) {
        if ((*(short *)&pFVar20->Next != 0x1000) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Slab->Freed == Slab->Allocated",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                                ,0x48,L""), bVar24)) {
          pcVar21 = (code *)swi(3);
          uVar25 = (*pcVar21)();
          return (bool)uVar25;
        }
        ::operator_delete(pFVar20,0x18008);
      }
    }
    local_58->ReadRequestsHead = (FFileIoStoreReadRequestLink *)0x0;
    local_58->ReadRequestsTail = (FFileIoStoreReadRequestLink *)0x0;
    pFVar16 = local_58[1].DispatcherRequest;
    psVar19 = (short *)((longlong)&pFVar16->_padding_ + 2);
    *psVar19 = *psVar19 + 1;
    if (*(short *)((longlong)&pFVar16->_padding_ + 2) == 0x1000) {
      if (((short)pFVar16->_padding_ != 0x1000) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("Slab->Freed == Slab->Allocated",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                              ,0x48,L""), bVar24)) {
        pcVar21 = (code *)swi(3);
        uVar25 = (*pcVar21)();
        return (bool)uVar25;
      }
      ::operator_delete(pFVar16,0x48008);
    }
  }
  else {
    pIVar12 = (this->PlatformImpl).Ptr;
    local_50 = (FFileIoStoreReadRequest *)0x0;
    uStack_48 = 0;
    cVar26 = (**(code **)((longlong)*pIVar12 + 0x20))(pIVar12,pFVar23,&local_50);
    if (cVar26 == '\0') {
      ReadBlocks(this,pFVar23);
    }
    else {
      pIVar38 = pIVar44;
      if (local_50 != (FFileIoStoreReadRequest *)0x0) {
        pFVar31 = local_50;
        pFVar41 = local_50->Next;
        while( true ) {
          pIVar38 = (IIoDispatcherBackend *)(&pIVar38->field_0x0 + pFVar31->Size);
          uVar42 = (int)pIVar44 + 1;
          pIVar44 = (IIoDispatcherBackend *)(ulonglong)uVar42;
          if ((pFVar31->Next != pFVar41) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Current->Next == Next",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                                  ,0x107,
                                  L"FFileIoStoreReadRequestListIterator cached Next pointer != Current->Next - was list modified during iteration?"
                                 ), bVar24)) {
            pcVar21 = (code *)swi(3);
            uVar25 = (*pcVar21)();
            return (bool)uVar25;
          }
          if (pFVar41 == (FFileIoStoreReadRequest *)0x0) break;
          pFVar31 = pFVar41;
          pFVar41 = pFVar41->Next;
        }
      }
      UE::FIoDispatcherFilesystemStats::OnReadRequestsQueued
                (&(this->Stats).Stats,(ulong64)pIVar38,(longlong)(int)uVar42);
      if (local_50 != (FFileIoStoreReadRequest *)0x0) {
        pFVar31 = local_50;
        pFVar41 = local_50->Next;
        while( true ) {
          pFVar23->UnfinishedReadsCount = pFVar23->UnfinishedReadsCount + 1;
          pFVar13 = (this->RequestTracker).RequestAllocator;
          pFVar32 = (pFVar13->RequestLinkAllocator).CurrentSlab;
          uVar10 = pFVar32->Allocated;
          pFVar32->Allocated = uVar10 + 1;
          if ((0xfff < uVar10) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ElementIndex < SlabSize",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                                  ,0x36,L""), bVar24)) {
            pcVar21 = (code *)swi(3);
            uVar25 = (*pcVar21)();
            return (bool)uVar25;
          }
          pFVar32 = (pFVar13->RequestLinkAllocator).CurrentSlab;
          pFVar32->Elements[uVar10].Slab = pFVar32;
          pFVar22 = (FFileIoStoreReadRequestLink *)(pFVar32->Elements + uVar10);
          if (((pFVar13->RequestLinkAllocator).CurrentSlab)->Allocated == 0x1000) {
            pFVar32 = ::operator_new(0x18008);
            if (pFVar32 != (FSlab *)0x0) {
              memset(&pFVar32->field_0x4,0,0x18004);
              pFVar32->Allocated = 0;
              pFVar32->Freed = 0;
              lVar35 = 0x1000;
              pFVar39 = pFVar32;
              do {
                pFVar39 = (FSlab *)&pFVar39->Elements[0].Slab;
                *(FSlab **)pFVar39 = (FSlab *)0x0;
                lVar35 = lVar35 + -1;
              } while (lVar35 != 0);
            }
            (pFVar13->RequestLinkAllocator).CurrentSlab = pFVar32;
          }
          pFVar22->ReadRequest = pFVar31;
          *(uchar *)&pFVar22->Next = '\0';
          *(uchar *)((longlong)&pFVar22->Next + 1) = '\0';
          *(uchar *)((longlong)&pFVar22->Next + 2) = '\0';
          *(uchar *)((longlong)&pFVar22->Next + 3) = '\0';
          *(uchar *)((longlong)&pFVar22->Next + 4) = '\0';
          *(uchar *)((longlong)&pFVar22->Next + 5) = '\0';
          *(uchar *)((longlong)&pFVar22->Next + 6) = '\0';
          *(uchar *)((longlong)&pFVar22->Next + 7) = '\0';
          pFVar31->RefCount = pFVar31->RefCount + 1;
          if ((*(longlong *)
                ((TTypeCompatibleBytes<FFileIoStoreReadRequestLink> *)&pFVar22->Next)->Pad != 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!ReadRequestLink->Next",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                  ,0x3dc,L""), bVar24)) {
            pcVar21 = (code *)swi(3);
            uVar25 = (*pcVar21)();
            return (bool)uVar25;
          }
          if (pFVar23->ReadRequestsTail == (FFileIoStoreReadRequestLink *)0x0) {
            pFVar23->ReadRequestsHead = pFVar22;
          }
          else {
            pFVar23->ReadRequestsTail->Next = pFVar22;
          }
          pFVar23->ReadRequestsTail = pFVar22;
          if ((pFVar23->Priority != pFVar31->Priority) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ResolvedRequest.GetPriority() == Request->Priority",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                  ,0x43a,L""), bVar24)) {
            pcVar21 = (code *)swi(3);
            uVar25 = (*pcVar21)();
            return (bool)uVar25;
          }
          if ((pFVar31->Next != pFVar41) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Current->Next == Next",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                                  ,0x107,
                                  L"FFileIoStoreReadRequestListIterator cached Next pointer != Current->Next - was list modified during iteration?"
                                 ), bVar24)) {
            pcVar21 = (code *)swi(3);
            uVar25 = (*pcVar21)();
            return (bool)uVar25;
          }
          if (pFVar41 == (FFileIoStoreReadRequest *)0x0) break;
          pFVar31 = pFVar41;
          pFVar41 = pFVar41->Next;
        }
      }
      this_00 = &this->RequestQueue;
      bVar24 = -1 < CpuChannel->Enabled;
      if (bVar24) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId552,"RequestQueuePush",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                   ,0x228);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId552);
      }
      lpCriticalSection = &(this->RequestQueue).CriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      FFileIoStoreRequestQueue::UpdateSortRequestsByOffset(this_00);
      pFVar31 = local_50;
      uStack_48 = 0;
      local_50 = (FFileIoStoreReadRequest *)0x0;
      if (pFVar31 != (FFileIoStoreReadRequest *)0x0) {
        pFVar41 = pFVar31->Next;
        pFVar31->Next = (FFileIoStoreReadRequest *)0x0;
        do {
          if ((pFVar31->QueueStatus != QueueStatus_NotInQueue) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("It->QueueStatus == FFileIoStoreReadRequest::QueueStatus_NotInQueue"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                  ,0x22e,L""), bVar27)) {
            pcVar21 = (code *)swi(3);
            uVar25 = (*pcVar21)();
            return (bool)uVar25;
          }
          pFVar31->QueueStatus = QueueStatus_InQueue;
          if (this_00->bSortRequestsByOffset == false) {
            pFVar14 = (this->RequestQueue).Heap.AllocatorInstance.Data;
            local_60 = pFVar31;
            if (((pFVar14 <= (FScriptContainerElement *)&local_60) &&
                ((FScriptContainerElement *)&local_60 <
                 pFVar14 + (longlong)(this->RequestQueue).Heap.ArrayMax * 8)) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar27)) {
              pcVar21 = (code *)swi(3);
              uVar25 = (*pcVar21)();
              return (bool)uVar25;
            }
            iVar28 = (this->RequestQueue).Heap.ArrayNum;
            piVar4 = &(this->RequestQueue).Heap.ArrayMax;
            if (iVar28 == *piVar4) {
              iVar28 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&(this->RequestQueue).Heap.AllocatorInstance,piVar4);
            }
            (this->RequestQueue).Heap.ArrayNum = iVar28 + 1;
            *(FFileIoStoreReadRequest **)
             ((this->RequestQueue).Heap.AllocatorInstance.Data + (longlong)iVar28 * 8) = local_60;
            pFVar14 = (this->RequestQueue).Heap.AllocatorInstance.Data;
            iVar28 = (this->RequestQueue).Heap.ArrayNum + -1;
            while (0 < iVar28) {
              lVar36 = (longlong)iVar28;
              iVar28 = (iVar28 + -1) / 2;
              lVar35 = *(longlong *)(pFVar14 + (longlong)iVar28 * 8);
              lVar34 = *(longlong *)(pFVar14 + lVar36 * 8);
              if (*(int *)(lVar34 + 0x94) == *(int *)(lVar35 + 0x94)) {
                bVar27 = *(uint *)(lVar34 + 0x90) < *(uint *)(lVar35 + 0x90);
              }
              else {
                bVar27 = *(int *)(lVar35 + 0x94) < *(int *)(lVar34 + 0x94);
              }
              if (!bVar27) break;
              *(longlong *)(pFVar14 + lVar36 * 8) = lVar35;
              *(longlong *)(pFVar14 + (longlong)iVar28 * 8) = lVar34;
            }
          }
          else {
            FFileIoStoreRequestQueue::PushToPriorityQueues(this_00,pFVar31);
          }
          if (pFVar41 == (FFileIoStoreReadRequest *)0x0) break;
          pFVar15 = pFVar41->Next;
          pFVar41->Next = (FFileIoStoreReadRequest *)0x0;
          pFVar31 = pFVar41;
          pFVar41 = pFVar15;
        } while( true );
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (bVar24) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (this->bIsMultithreaded != false) {
        (**(code **)((longlong)*(this->PlatformImpl).Ptr + 0x38))();
      }
    }
  }
  return true;
}

// ResolveIoRequests @ 142a9bcb0

void __thiscall
FFileIoStore::ResolveIoRequests
          (FFileIoStore *this,TIntrusiveList<UE::Private::FIoRequestListTraits> *param_1,
          TIntrusiveList<UE::Private::FIoRequestListTraits> *param_2)

{
  FIoRequestImpl *pFVar1;
  FIoRequestImpl *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  AcquireSRWLockShared((PSRWLOCK)&this->bIsMultithreaded);
  do {
    while( true ) {
      do {
        pFVar1 = param_1->Head;
        if (pFVar1 == (FIoRequestImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a9bdd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ReleaseSRWLockShared((PSRWLOCK)&this->bIsMultithreaded);
          return;
        }
        pFVar2 = pFVar1->NextRequest;
        param_1->Head = pFVar2;
        if (pFVar2 == (FIoRequestImpl *)0x0) {
          param_1->Tail = (FIoRequestImpl *)0x0;
        }
        pFVar1->NextRequest = (FIoRequestImpl *)0x0;
        bVar4 = Resolve((FFileIoStore *)&this[-1].OversubscriptionLimitReached,pFVar1);
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

// Run @ 142a9bfe0

uint __thiscall FFileIoStore::Run(FFileIoStore *this)

{
  IPlatformFileIoStore *pIVar1;
  char cVar2;
  
  while (this->bStopRequested == (TAtomic<bool>)0x0) {
    pIVar1 = (this->PlatformImpl).Ptr;
    cVar2 = (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,&this->RequestQueue);
    if (cVar2 == '\0') {
      (**(code **)((longlong)*(this->PlatformImpl).Ptr + 0x40))();
    }
  }
  return 0;
}

// ScatterBlock @ 142a9c590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
FFileIoStore::ScatterBlock(FFileIoStore *this,FFileIoStoreCompressedBlock *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  ForElementType<FFileIoStoreReadRequest_*> FVar2;
  FSHAHash *pFVar3;
  longlong *plVar4;
  size_t _Size;
  longlong lVar5;
  code *pcVar6;
  FFileIoStore *pFVar7;
  bool bVar8;
  FIoSignatureError *pFVar9;
  longlong lVar10;
  uchar *puVar11;
  ulonglong uVar12;
  ForElementType<FFileIoStoreReadRequest_*> FVar13;
  ForElementType<FFileIoStoreBlockScatter> FVar14;
  FScriptContainerElement *pFVar15;
  FFileIoStoreCompressionContext *pFVar16;
  ForElementType<FFileIoStoreBlockScatter> FVar17;
  FFileIoStoreCompressionContext *pFVar18;
  FScriptContainerElement *pFVar19;
  bool bVar20;
  undefined1 auStackY_128 [32];
  undefined1 local_e7;
  undefined1 local_e6;
  char local_e5;
  FFileIoStoreCompressionContext *local_e0;
  FLLMScope local_d8 [2];
  FScriptContainerElement *local_d0;
  FFileIoStore *local_c8;
  ForElementType<FFileIoStoreBlockScatter> local_c0;
  FMemScope local_b8;
  FString local_b0;
  longlong local_a0;
  longlong lStack_98;
  int local_90;
  FIoSignatureError local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_e5 = param_2;
  local_c8 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1544,L"FileSystem/FileIoStore");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_d8,LLMScope_Name1544,false,None,Default,true);
  FMemScope::FMemScope(&local_b8,&LLMScope_Name1544,true);
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1545,"IoDispatcherScatter",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
               ,0x609);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1545);
  }
  if ((param_1->bFailed != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CompressedBlock->bFailed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                         ,0x60b,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar16 = param_1->CompressionContext;
  local_e0 = pFVar16;
  if ((pFVar16 == (FFileIoStoreCompressionContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompressionContext",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                         ,0x60e,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar1 = (param_1->RawBlocks).ArrayNum;
  if (iVar1 < 2) {
    if ((iVar1 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar2 = (param_1->RawBlocks).AllocatorInstance.SecondaryData;
    FVar13 = (ForElementType<FFileIoStoreReadRequest_*>)&param_1->RawBlocks;
    if (FVar2 != (ForElementType<FFileIoStoreReadRequest_*>)0x0) {
      FVar13 = FVar2;
    }
    lVar10 = *(longlong *)FVar13;
    if ((param_1->RawOffset < *(ulonglong *)(lVar10 + 0x18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompressedBlock->RawOffset >= RawBlock->Offset",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                           ,0x618,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar18 = (FFileIoStoreCompressionContext *)
              ((*(longlong *)(*(longlong *)(lVar10 + 0x30) + 8) - *(longlong *)(lVar10 + 0x18)) +
              param_1->RawOffset);
  }
  else {
    if ((param_1->CompressedDataBuffer == (uchar *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompressedBlock->CompressedDataBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                           ,0x612,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar18 = (FFileIoStoreCompressionContext *)param_1->CompressedDataBuffer;
  }
  if (param_1->bFailed == false) {
    if (param_1->SignatureHash != (FSHAHash *)0x0) {
      local_90 = 0;
      local_a0 = 0;
      lStack_98 = 0;
      FSHA1::HashBuffer(pFVar18,(ulonglong)param_1->RawSize,(uchar *)&local_a0);
      pFVar3 = param_1->SignatureHash;
      if (((*(longlong *)pFVar3->Hash != local_a0) || (*(longlong *)(pFVar3->Hash + 8) != lStack_98)
          ) || (*(int *)(pFVar3->Hash + 0x10) != local_90)) {
        local_88.ContainerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c0 = (ForElementType<FFileIoStoreBlockScatter>)&this->IoStoreReadersLock;
        local_88.ContainerName.Data.ArrayNum = 0;
        local_88.ContainerName.Data.ArrayMax = 0;
        local_88.BlockIndex = -1;
        local_88.ExpectedHash.Hash[0x10] = '\0';
        local_88.ExpectedHash.Hash[0x11] = '\0';
        local_88.ExpectedHash.Hash[0x12] = '\0';
        local_88.ExpectedHash.Hash[0x13] = '\0';
        local_88.ActualHash.Hash[0x10] = '\0';
        local_88.ActualHash.Hash[0x11] = '\0';
        local_88.ActualHash.Hash[0x12] = '\0';
        local_88.ActualHash.Hash[0x13] = '\0';
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
        AcquireSRWLockShared((PSRWLOCK)local_c0);
        pFVar7 = local_c8;
        pFVar19 = (this->IoStoreReaders).AllocatorInstance.Data;
        iVar1 = (this->IoStoreReaders).ArrayNum;
        pFVar15 = pFVar19 + (longlong)iVar1 * 8;
        local_d0 = pFVar15;
        while( true ) {
          if ((pFVar7->IoStoreReaders).ArrayNum != iVar1) {
            local_e7 = 0;
            `TCheckedPointerIterator<TUniquePtr<FFileIoStoreReader,TDefaultDelete<FFileIoStoreReader>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_e7);
          }
          if (pFVar19 == pFVar15) break;
          if ((param_1->Key).field0_0x0._s_0.FileIndex == *(uint *)(*(longlong *)pFVar19 + 0x128)) {
            pFVar9 = (FIoSignatureError *)
                     FPaths::GetBaseFilename
                               (&local_b0,(FString *)(*(longlong *)pFVar19 + 0xc0),true);
            if (&local_88 != pFVar9) {
              if (local_88.ContainerName.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.ContainerName.Data.AllocatorInstance.Data);
              }
              local_88.ContainerName.Data.AllocatorInstance.Data =
                   (pFVar9->ContainerName).Data.AllocatorInstance.Data;
              (pFVar9->ContainerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_88.ContainerName.Data.ArrayNum = (pFVar9->ContainerName).Data.ArrayNum;
              local_88.ContainerName.Data.ArrayMax = (pFVar9->ContainerName).Data.ArrayMax;
              (pFVar9->ContainerName).Data.ArrayNum = 0;
              (pFVar9->ContainerName).Data.ArrayMax = 0;
            }
            pFVar15 = local_d0;
            if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0.Data.AllocatorInstance.Data);
              pFVar15 = local_d0;
            }
          }
          pFVar19 = pFVar19 + 8;
        }
        local_88.BlockIndex = (param_1->Key).field0_0x0._s_0.BlockIndex;
        pFVar3 = param_1->SignatureHash;
        local_88.ExpectedHash.Hash._0_8_ = *(undefined8 *)pFVar3->Hash;
        local_88.ExpectedHash.Hash._8_8_ = *(undefined8 *)(pFVar3->Hash + 8);
        local_88.ExpectedHash.Hash._16_4_ = *(undefined4 *)(pFVar3->Hash + 0x10);
        local_88.ActualHash.Hash._0_8_ = local_a0;
        local_88.ActualHash.Hash._8_8_ = lStack_98;
        local_88.ActualHash.Hash[0x10] = (undefined1)local_90;
        local_88.ActualHash.Hash[0x11] = local_90._1_1_;
        local_88.ActualHash.Hash[0x12] = local_90._2_1_;
        local_88.ActualHash.Hash[0x13] = local_90._3_1_;
        ReleaseSRWLockShared((PSRWLOCK)local_c0);
        if (2 < (byte)LogIoDispatcher._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
        }
        if ((pFVar7->BackendContext).Object == (FIoDispatcherBackendContext *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("BackendContext",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                             ,0x635,L"");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (((pFVar7->BackendContext).Object == (FIoDispatcherBackendContext *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &((pFVar7->BackendContext).Object)->SignatureErrorDelegate);
        if (bVar8) {
          if (((pFVar7->BackendContext).Object == (FIoDispatcherBackendContext *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          TMulticastDelegate<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy>::
          Broadcast(&((pFVar7->BackendContext).Object)->SignatureErrorDelegate,&local_88);
        }
        pFVar16 = local_e0;
        if (local_88.ContainerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.ContainerName.Data.AllocatorInstance.Data);
          pFVar16 = local_e0;
        }
      }
    }
    lVar10 = 0;
    do {
      if (*(int *)((param_1->EncryptionKey).Key + lVar10 * 4) != 0) {
        FAES::DecryptData((uchar *)pFVar18,(ulonglong)param_1->RawSize,&param_1->EncryptionKey);
        break;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < 8);
    if (param_1->CompressionMethod != (FName)0x0) {
      if (pFVar16->UncompressedBufferSize < (ulonglong)param_1->UncompressedSize) {
        FMemory::Free(pFVar16->UncompressedBuffer);
        puVar11 = FMemory::Malloc((ulonglong)param_1->UncompressedSize,0);
        pFVar16->UncompressedBuffer = puVar11;
        pFVar16->UncompressedBufferSize = (ulonglong)param_1->UncompressedSize;
      }
      local_e0 = (FFileIoStoreCompressionContext *)pFVar16->UncompressedBuffer;
      bVar8 = FCompression::UncompressMemory
                        (param_1->CompressionMethod,local_e0,
                         (longlong)(int)param_1->UncompressedSize,pFVar18,
                         (longlong)(int)param_1->CompressedSize,COMPRESS_NoFlags,0);
      pFVar18 = local_e0;
      if (!bVar8) {
        if (2 < (byte)LogIoDispatcher._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
        }
        param_1->bFailed = true;
        pFVar18 = local_e0;
      }
    }
    local_e0 = pFVar18;
    pFVar16 = local_e0;
    FVar14 = (param_1->ScatterList).AllocatorInstance.SecondaryData;
    iVar1 = (param_1->ScatterList).ArrayNum;
    uVar12 = (ulonglong)iVar1;
    local_d0 = (FScriptContainerElement *)CONCAT44(local_d0._4_4_,iVar1);
    if (FVar14 == (ForElementType<FFileIoStoreBlockScatter>)0x0) {
      FVar14 = (ForElementType<FFileIoStoreBlockScatter>)&param_1->ScatterList;
    }
    FVar17 = (ForElementType<FFileIoStoreBlockScatter>)(uVar12 * 0x20 + (longlong)FVar14);
    local_c0 = FVar17;
    while( true ) {
      if ((param_1->ScatterList).ArrayNum != (int)uVar12) {
        local_e6 = 0;
        `TCheckedPointerIterator<FFileIoStoreBlockScatter,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_e6);
      }
      this = local_c8;
      param_2 = (bool)local_e5;
      if (FVar14 == FVar17) break;
      if (*(longlong *)((longlong)FVar14 + 0x18) != 0) {
        plVar4 = *(longlong **)FVar14;
        if ((*plVar4 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("DispatcherRequest",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                               ,0x334,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar10 = *plVar4;
        if ((*(char *)(lVar10 + 0x98) == '\0') &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar10 = *(longlong *)(lVar10 + 0x90);
        if (((ulonglong)CONCAT14(*(undefined1 *)(lVar10 + 0x18),*(undefined4 *)(lVar10 + 8)) <
             (ulonglong)
             (*(longlong *)((longlong)FVar14 + 0x18) + *(longlong *)((longlong)FVar14 + 8))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Scatter.DstOffset + Scatter.Size <= Scatter.Request->GetBuffer().DataSize()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                               ,0x65c,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (((ulonglong)param_1->UncompressedSize <
             (ulonglong)
             (*(longlong *)((longlong)FVar14 + 0x18) + *(longlong *)((longlong)FVar14 + 0x10))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Scatter.SrcOffset + Scatter.Size <= CompressedBlock->UncompressedSize"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                               ,0x65d,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar4 = *(longlong **)FVar14;
        lVar10 = *(longlong *)((longlong)FVar14 + 0x10);
        _Size = *(size_t *)((longlong)FVar14 + 0x18);
        if ((*plVar4 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("DispatcherRequest",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                               ,0x334,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar5 = *plVar4;
        if ((*(char *)(lVar5 + 0x98) == '\0') &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        memcpy((void *)(*(longlong *)((longlong)FVar14 + 8) + **(longlong **)(lVar5 + 0x90)),
               (uchar *)((longlong)&pFVar16->Next + lVar10),_Size);
        FVar17 = local_c0;
      }
      uVar12 = (ulonglong)local_d0 & 0xffffffff;
      FVar14 = (ForElementType<FFileIoStoreBlockScatter>)((longlong)FVar14 + 0x20);
    }
  }
  if (param_2 != false) {
    lpCriticalSection = &this->DecompressedBlocksCritical;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    param_1->Next = this->FirstDecompressedBlock;
    this->FirstDecompressedBlock = param_1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_b8);
  FLLMScope::~FLLMScope(local_d8);
  return;
}

// Shutdown @ 142aa0570

void __thiscall FFileIoStore::Shutdown(FFileIoStore *this)

{
  IPlatformFileIoStore *pIVar1;
  FIoRequestImpl *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  longlong *plVar6;
  FScriptContainerElement *this_01;
  uint uVar7;
  longlong lVar8;
  
  pIVar1 = (this->PlatformImpl).Ptr;
  if (pIVar1 != (IPlatformFileIoStore *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,1);
    (this->PlatformImpl).Ptr = (IPlatformFileIoStore *)0x0;
  }
  this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
            LowLevelTasks::FScheduler::GetOversubscriptionLimitReachedEvent
                      (&LowLevelTasks::FScheduler::Singleton);
  pFVar2 = this->CompletedRequestsTail;
  if (pFVar2 != (FIoRequestImpl *)0x0) {
    if ((this_00 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this_00);
    uVar7 = 0;
    if (0 < (this_00->InvocationList).ArrayNum) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < (this_00->InvocationList).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_01 = (this_00->InvocationList).AllocatorInstance.Data + lVar8;
        if (((*(int *)&this_01[8].field_0x0 != 0) &&
            (*(longlong **)&this_01->field_0x0 != (longlong *)0x0)) &&
           (plVar6 = (longlong *)(**(code **)(**(longlong **)&this_01->field_0x0 + 0x40))(),
           (FIoRequestImpl *)*plVar6 == pFVar2)) {
          if ((*(int *)&this_01[8].field_0x0 != 0) &&
             (*(undefined8 **)&this_01->field_0x0 != (undefined8 *)0x0)) {
            (**(code **)**(undefined8 **)&this_01->field_0x0)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)this_01,0,0,0x10);
            *(undefined4 *)&this_01[8].field_0x0 = 0;
          }
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
          break;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x10;
      } while ((int)uVar7 < (this_00->InvocationList).ArrayNum);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  }
  return;
}

// Stop @ 142aa1b80

void __thiscall FFileIoStore::Stop(FFileIoStore *this)

{
  LOCK();
  this->bStopRequested = (TAtomic<bool>)0x1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000142aa1b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*(this->PlatformImpl).Ptr + 0x38))();
  return;
}

// StopThread @ 142aa1ba0

void __thiscall FFileIoStore::StopThread(FFileIoStore *this)

{
  FRunnableThread *pFVar1;
  
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    this->Thread = (FRunnableThread *)0x0;
  }
  return;
}

// Unmount @ 142aa8360

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FFileIoStore::Unmount(FFileIoStore *this,wchar_t *param_1)

{
  FPlatformRWLock *pFVar1;
  int *lpCriticalSection;
  FFileIoStoreReader **ppFVar2;
  TDefaultDelete<FFileIoStoreReader> *this_00;
  void *pvVar3;
  int iVar4;
  code *pcVar5;
  FFileIoStoreReader *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  void *pvVar21;
  uint uVar22;
  undefined1 local_res8 [8];
  wchar_t *local_res10;
  undefined1 local_res18 [8];
  FFileIoStoreReader *local_88 [2];
  FFileIoStoreReadRequest **local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FFileIoStoreReadRequest **local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<FFileIoStoreReadRequest_*,int> local_58;
  TArrayView<FFileIoStoreReadRequest_*,int> local_48;
  
  uVar18 = 0;
  local_88[0] = (FFileIoStoreReader *)0x0;
  local_res10 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)&this->bIsMultithreaded);
  iVar10 = *(int *)&(this->IoStoreReaders).AllocatorInstance.Data;
  uVar17 = 0;
  if (0 < iVar10) {
    pFVar1 = &this->IoStoreReadersLock;
    uVar14 = uVar18;
    uVar20 = uVar18;
    do {
      uVar19 = (uint)uVar20;
      uVar22 = ~uVar19 >> 0x1f;
      uVar9 = uVar17;
      if ((int)uVar19 < iVar10) {
        uVar9 = uVar22;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      lVar15 = *(longlong *)((longlong)(pFVar1->Mutex).Mutex.Ptr + uVar14);
      if (*(int *)(lVar15 + 200) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)(lVar15 + 0xc0);
      }
      iVar10 = FGenericPlatformStricmp::Stricmp(pwVar12,local_res10);
      if (iVar10 == 0) {
        uVar9 = uVar17;
        if ((int)uVar19 < *(int *)&(this->IoStoreReaders).AllocatorInstance.Data) {
          uVar9 = uVar22;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pFVar6 = local_88[0];
        lVar15 = (longlong)(int)uVar19;
        ppFVar2 = (FFileIoStoreReader **)((longlong)(pFVar1->Mutex).Mutex.Ptr + lVar15 * 8);
        if (local_88 != ppFVar2) {
          local_88[0] = *ppFVar2;
          *ppFVar2 = (FFileIoStoreReader *)0x0;
          TDefaultDelete<FFileIoStoreReader>::operator()
                    ((TDefaultDelete<FFileIoStoreReader> *)local_88,pFVar6);
        }
        if ((int)uVar19 < *(int *)&(this->IoStoreReaders).AllocatorInstance.Data) {
          uVar17 = uVar22;
        }
        if ((uVar17 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pvVar3 = (pFVar1->Mutex).Mutex.Ptr;
        this_00 = (TDefaultDelete<FFileIoStoreReader> *)((longlong)pvVar3 + lVar15 * 8);
        TDefaultDelete<FFileIoStoreReader>::operator()
                  (this_00,*(FFileIoStoreReader **)((longlong)pvVar3 + lVar15 * 8));
        iVar10 = *(int *)&(this->IoStoreReaders).AllocatorInstance.Data + ~uVar19;
        if (iVar10 != 0) {
          memmove(this_00,this_00 + 8,(longlong)iVar10 << 3);
        }
        *(int *)&(this->IoStoreReaders).AllocatorInstance.Data =
             *(int *)&(this->IoStoreReaders).AllocatorInstance.Data + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)pFVar1,
                   *(int *)&(this->IoStoreReaders).AllocatorInstance.Data,
                   (int *)((longlong)&(this->IoStoreReaders).AllocatorInstance.Data + 4));
        break;
      }
      iVar10 = *(int *)&(this->IoStoreReaders).AllocatorInstance.Data;
      uVar20 = (ulonglong)(uVar19 + 1);
      uVar14 = uVar14 + 8;
    } while ((int)(uVar19 + 1) < iVar10);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->bIsMultithreaded);
  if (local_88[0] == (FFileIoStoreReader *)0x0) {
    if (3 < (byte)LogIoDispatcher._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
    }
  }
  else {
    if (3 < (byte)LogIoDispatcher._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
    }
    pFVar6 = local_88[0];
    lpCriticalSection = &(this->RequestQueue).Heap.ArrayNum;
    if (lpCriticalSection == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((char)(this->RequestAllocator).LiveReadRequestsCount == '\0') {
      local_68 = *(FFileIoStoreReadRequest ***)&this->RequestQueue;
      iVar10 = *(int *)&(this->RequestQueue).Heap.AllocatorInstance.Data;
      if ((iVar10 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      local_48._12_4_ = uStack_5c;
      local_48.ArrayNum = iVar10;
      local_48.DataPtr = local_68;
      iStack_60 = iVar10;
      iVar10 = HandleContainerUnmounted(&local_48,&pFVar6->ContainerFile);
    }
    else {
      iVar4 = *(int *)&(this->RequestQueue).SortedPriorityQueues.AllocatorInstance.Data;
      pvVar21 = (this->RequestQueue).CriticalSection.CriticalSection.Opaque3[2];
      pvVar3 = (void *)((longlong)pvVar21 + (longlong)iVar4 * 0x28);
      while( true ) {
        iVar10 = (int)uVar18;
        if (*(int *)&(this->RequestQueue).SortedPriorityQueues.AllocatorInstance.Data != iVar4) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FFileIoStoreOffsetSortedRequestQueue,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pvVar21 == pvVar3) break;
        local_78 = *(FFileIoStoreReadRequest ***)((longlong)pvVar21 + 8);
        iVar11 = *(int *)((longlong)pvVar21 + 0x10);
        if ((iVar11 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        local_58._12_4_ = uStack_6c;
        local_58.ArrayNum = iVar11;
        local_58.DataPtr = local_78;
        iStack_70 = iVar11;
        iVar11 = HandleContainerUnmounted(&local_58,&pFVar6->ContainerFile);
        uVar18 = (ulonglong)(uint)(iVar10 + iVar11);
        pvVar21 = (void *)((longlong)pvVar21 + 0x28);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((2 < (byte)LogIoDispatcher._0_1_) && (0 < iVar10)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
    }
    pFVar6 = local_88[0];
    bVar7 = false;
    iVar10 = (local_88[0]->ContainerFile).Partitions.ArrayNum;
    pFVar13 = (local_88[0]->ContainerFile).Partitions.AllocatorInstance.Data;
    pFVar16 = pFVar13 + (longlong)iVar10 * 0x38;
    while( true ) {
      if ((pFVar6->ContainerFile).Partitions.ArrayNum != iVar10) {
        `TCheckedPointerIterator<FFileIoStoreContainerFilePartition,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar13 == pFVar16) break;
      if (*(int *)(pFVar13 + 0x30) != 0) {
        if ((2 < (byte)LogIoDispatcher._0_1_) && (!bVar7)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
        }
        bVar7 = true;
        iVar4 = *(int *)(pFVar13 + 0x30);
        while (iVar4 != 0) {
          FWindowsPlatformProcess::Sleep(0.0);
          iVar4 = *(int *)(pFVar13 + 0x30);
        }
      }
      pFVar13 = pFVar13 + 0x38;
    }
  }
  TDefaultDelete<FFileIoStoreReader>::operator()
            ((TDefaultDelete<FFileIoStoreReader> *)local_88,local_88[0]);
  return false;
}

// Unmount @ 142aa87c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UE::IoStore::FFileIoStore::Unmount(FFileIoStore *this,wchar_t *param_1)

{
  int *piVar1;
  TDefaultDelete<UE::IoStore::FContainer> *this_00;
  atomic<int> aVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  size_t sVar10;
  TStringView<wchar_t> *pTVar11;
  FString *pFVar12;
  IPlatformIoDispatcher *pIVar13;
  int iVar14;
  ulonglong uVar15;
  FContainer *pFVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint uVar21;
  FContainer *pFVar22;
  bool bVar23;
  undefined1 local_res8 [8];
  wchar_t *local_res10;
  uint local_res18 [2];
  FScriptContainerElement *local_res20;
  FContainer *local_108;
  uint local_100;
  FScriptContainerElement *local_f8;
  LARGE_INTEGER local_f0;
  LARGE_INTEGER local_e8;
  TStringView<wchar_t> local_e0;
  FString local_d0;
  FIoStatus local_c0;
  TStringView<wchar_t> local_b0;
  wchar_t *local_98;
  undefined8 uStack_90;
  FString local_88 [4];
  
  pFVar16 = (FContainer *)0x0;
  iVar14 = 0;
  local_e0.Size = iVar14;
  local_res10 = param_1;
  local_e0.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar10 = wcslen(param_1);
    local_e0.Size = (int)sVar10;
  }
  pTVar11 = FPathViews::GetBaseFilenameWithPath(&local_b0,&local_e0);
  local_f8 = (FScriptContainerElement *)0x0;
  local_98 = pTVar11->DataPtr;
  uStack_90 = *(undefined8 *)&pTVar11->Size;
  pFVar12 = ::FString::ConstructFromPtrSize
                      (&local_d0,pTVar11->DataPtr,(int)*(undefined8 *)&pTVar11->Size);
  if (local_88 != pFVar12) {
    local_f8 = (pFVar12->Data).AllocatorInstance.Data;
    (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar14 = (pFVar12->Data).ArrayNum;
    (pFVar12->Data).ArrayNum = 0;
    (pFVar12->Data).ArrayMax = 0;
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  local_108 = (FContainer *)0x0;
  AcquireSRWLockExclusive((PSRWLOCK)&this->RwLock);
  local_res18[0] = (this->MountedContainers).ArrayNum;
  uVar15 = (ulonglong)(int)local_res18[0];
  pFVar19 = (this->MountedContainers).AllocatorInstance.Data;
  local_res20 = pFVar19 + uVar15 * 8;
  pFVar22 = pFVar16;
  do {
    if ((this->MountedContainers).ArrayNum != (int)uVar15) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::IoStore::FContainer,TDefaultDelete<UE::IoStore::FContainer>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar19 == local_res20) goto LAB_142aa8a1c;
    iVar8 = *(int *)(*(longlong *)pFVar19 + 0x218);
    uVar21 = (uint)pFVar22;
    if (iVar8 == iVar14) {
      if (iVar8 < 2) break;
      iVar8 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)(*(longlong *)pFVar19 + 0x210),(wchar_t *)local_f8);
      bVar23 = iVar8 == 0;
    }
    else {
      bVar23 = iVar8 + iVar14 == 1;
    }
    if (bVar23) break;
    uVar15 = (ulonglong)local_res18[0];
    pFVar22 = (FContainer *)(ulonglong)(uVar21 + 1);
    pFVar19 = pFVar19 + 8;
  } while( true );
  if (uVar21 != 0xffffffff) {
    local_100 = ~uVar21;
    uVar20 = local_100 >> 0x1f;
    uVar9 = 0;
    if ((int)uVar21 < (this->MountedContainers).ArrayNum) {
      uVar9 = uVar20;
    }
    if ((uVar9 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    lVar17 = (longlong)(int)uVar21;
    pFVar19 = (this->MountedContainers).AllocatorInstance.Data + lVar17 * 8;
    if ((FScriptContainerElement *)&local_108 != pFVar19) {
      pFVar16 = *(FContainer **)pFVar19;
      *(undefined8 *)pFVar19 = 0;
      local_108 = pFVar16;
      TDefaultDelete<UE::IoStore::FContainer>::operator()
                ((TDefaultDelete<UE::IoStore::FContainer> *)&local_108,(FContainer *)0x0);
    }
    uVar9 = 0;
    if ((int)uVar21 < (this->MountedContainers).ArrayNum) {
      uVar9 = uVar20;
    }
    if ((uVar9 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    pFVar19 = (this->MountedContainers).AllocatorInstance.Data;
    this_00 = (TDefaultDelete<UE::IoStore::FContainer> *)(pFVar19 + lVar17 * 8);
    TDefaultDelete<UE::IoStore::FContainer>::operator()
              (this_00,*(FContainer **)(pFVar19 + lVar17 * 8));
    iVar14 = local_100 + (this->MountedContainers).ArrayNum;
    if (iVar14 != 0) {
      memmove(this_00,this_00 + 8,(longlong)iVar14 << 3);
    }
    piVar1 = &(this->MountedContainers).ArrayNum;
    *piVar1 = *piVar1 + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(ForAnyElementType *)this,(this->MountedContainers).ArrayNum,
               &(this->MountedContainers).ArrayMax);
  }
LAB_142aa8a1c:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->RwLock);
  if (pFVar16 == (FContainer *)0x0) {
    if (2 < (byte)LogIoStore._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStore);
    }
    bVar23 = false;
  }
  else {
    if (0 < (int)pFVar16->ActiveReadCount) {
      iVar14 = (pFVar16->Partitions).ArrayNum;
      pFVar19 = (pFVar16->Partitions).AllocatorInstance.Data;
      pFVar18 = pFVar19 + (longlong)iVar14 * 0x30;
      while( true ) {
        if ((pFVar16->Partitions).ArrayNum != iVar14) {
          `TCheckedPointerIterator<UE::IoStore::FContainerPartition,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar19 == pFVar18) break;
        if (4 < (byte)LogIoStore._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStore);
        }
        pIVar13 = FPlatformIoDispatcher::Get();
        (**(code **)((longlong)*pIVar13 + 0x48))(pIVar13,*(undefined8 *)(pFVar19 + 0x18));
        pFVar19 = pFVar19 + 0x30;
      }
      if (4 < (byte)LogIoStore._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStore);
      }
      dVar5 = (double)GFileIoStoreUnmountTimeOutSeconds;
      QueryPerformanceCounter(&local_f0);
      dVar6 = __real_4170000000000000;
      aVar2 = pFVar16->ActiveReadCount;
      dVar4 = (double)local_f0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
      if (__real_403e000000000000 <= dVar4) {
        dVar4 = __real_403e000000000000;
      }
      if (dVar4 <= __real_4014000000000000) {
        dVar4 = __real_4014000000000000;
      }
      while (0 < (int)aVar2) {
        FWindowsPlatformProcess::Sleep(0.0);
        QueryPerformanceCounter(&local_e8);
        if (dVar5 < ((double)local_e8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6) -
                    dVar4) {
          if (2 < (byte)LogIoStore._0_1_) {
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStore);
          }
          break;
        }
        aVar2 = pFVar16->ActiveReadCount;
      }
    }
    iVar14 = (pFVar16->Partitions).ArrayNum;
    pFVar19 = (pFVar16->Partitions).AllocatorInstance.Data;
    pFVar18 = pFVar19 + (longlong)iVar14 * 0x30;
    while( true ) {
      if ((pFVar16->Partitions).ArrayNum != iVar14) {
        `TCheckedPointerIterator<UE::IoStore::FContainerPartition,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res20);
      }
      if (pFVar19 == pFVar18) break;
      pIVar13 = FPlatformIoDispatcher::Get();
      (**(code **)((longlong)*pIVar13 + 0x18))(pIVar13,&local_c0,*(undefined8 *)(pFVar19 + 0x18));
      FIoStatus::~FIoStatus(&local_c0);
      pFVar19 = pFVar19 + 0x30;
    }
    if (4 < (byte)LogIoStore._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStore);
    }
    bVar23 = true;
  }
  TDefaultDelete<UE::IoStore::FContainer>::operator()
            ((TDefaultDelete<UE::IoStore::FContainer> *)&local_108,pFVar16);
  if (local_f8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8);
  }
  return bVar23;
}

// UpdatePriorityForIoRequest @ 142aab370

void __thiscall FFileIoStore::UpdatePriorityForIoRequest(FFileIoStore *this,FIoRequestImpl *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  bool bVar3;
  longlong *plVar4;
  bool bVar5;
  
  pvVar2 = param_1->BackendData;
  if (pvVar2 != (void *)0x0) {
    *(int *)((longlong)pvVar2 + 0x30) = param_1->Priority;
    bVar5 = -1 < CpuChannel->Enabled;
    if (bVar5) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1173,"RequestTrackerUpdatePriorityForIoRequest",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                 ,0x495);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1173);
    }
    plVar4 = *(longlong **)((longlong)pvVar2 + 0x10);
    bVar3 = false;
    if (plVar4 != (longlong *)0x0) {
      do {
        plVar1 = plVar4 + 1;
        plVar4 = (longlong *)*plVar4;
        if (*(int *)(*plVar1 + 0x94) < *(int *)((longlong)pvVar2 + 0x30)) {
          *(int *)(*plVar1 + 0x94) = *(int *)((longlong)pvVar2 + 0x30);
          bVar3 = true;
        }
      } while (plVar4 != (longlong *)0x0);
      if (bVar3) {
        FFileIoStoreRequestQueue::UpdateOrder
                  ((FFileIoStoreRequestQueue *)(this->RequestTracker).RequestAllocator);
      }
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}


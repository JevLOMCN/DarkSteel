// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 8

// FStorageServerEngineStartupPrecache @ 148cb47f0

FStorageServerEngineStartupPrecache * __thiscall
FStorageServerEngineStartupPrecache::FStorageServerEngineStartupPrecache
          (FStorageServerEngineStartupPrecache *this,FStorageServerConnection *param_1)

{
  atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> aVar1;
  FEvent *pFVar2;
  FRunnableThread *pFVar3;
  
  this->Connection = param_1;
  this->_padding_ = (longlong)&___7FStorageServerEngineStartupPrecache__6B_;
  (this->CacheLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->Cache = 0;
  *(undefined8 *)&(this->Cache).field_0x8 = 0;
  *(undefined8 *)&(this->Cache).field_0x20 = 0;
  *(undefined4 *)&(this->Cache).field_0x28 = 0;
  *(undefined4 *)&(this->Cache).field_0x2c = 0x80;
  *(undefined4 *)&(this->Cache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Cache).field_0x34 = 0;
  *(undefined8 *)&(this->Cache).field_0x40 = 0;
  *(undefined4 *)&(this->Cache).field_0x48 = 0;
  this->CacheSize = (atomic<unsigned___int64>)0x0;
  (this->PrecacheFileRequests).Tail =
       (atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>)0x0;
  (this->PrecacheFileRequests).NumElems = (atomic<int>)0x0;
  aVar1 = (atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>)FMemory::Malloc(0x18,8);
  *(undefined8 *)aVar1 = 0;
  (this->PrecacheFileRequests).Tail = aVar1;
  (this->PrecacheFileRequests).TailCopy = (FNode *)aVar1;
  (this->PrecacheFileRequests).First = (FNode *)aVar1;
  (this->PrecacheFileRequests).Head = (FNode *)aVar1;
  LOCK();
  (this->PrecacheFileRequests).NumElems = (atomic<int>)0x0;
  UNLOCK();
  (this->HighPriorityPrecacheFileRequests).Tail =
       (atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>)0x0;
  (this->HighPriorityPrecacheFileRequests).NumElems = (atomic<int>)0x0;
  aVar1 = (atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>)FMemory::Malloc(0x18,8);
  *(undefined8 *)aVar1 = 0;
  (this->HighPriorityPrecacheFileRequests).Tail = aVar1;
  (this->HighPriorityPrecacheFileRequests).TailCopy = (FNode *)aVar1;
  (this->HighPriorityPrecacheFileRequests).First = (FNode *)aVar1;
  (this->HighPriorityPrecacheFileRequests).Head = (FNode *)aVar1;
  LOCK();
  (this->HighPriorityPrecacheFileRequests).NumElems = (atomic<int>)0x0;
  UNLOCK();
  pFVar2 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->HasWork = pFVar2;
  pFVar2 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->IsCompleted = pFVar2;
  this->bExitWhenComplete = (atomic<bool>)0x0;
  this->bExitImmediately = (atomic<bool>)0x0;
  this->bUseBatchedRequests = (atomic<bool>)0x1;
  pFVar3 = FRunnableThread::Create
                     ((FRunnable *)this,L"StorageServerPrecache",0,TPri_Normal,0xffffffffffffffff,
                      None);
  if (pFVar3 == (FRunnableThread *)0x0) {
    (**(code **)(this->IsCompleted->_padding_ + 0x10))();
  }
  if (this->Connection->bIsUsingZenWorkspace != false) {
    LOCK();
    this->bUseBatchedRequests = (atomic<bool>)0x0;
    UNLOCK();
  }
  return this;
}

// ~FStorageServerEngineStartupPrecache @ 148cb6390

void __thiscall
FStorageServerEngineStartupPrecache::~FStorageServerEngineStartupPrecache
          (FStorageServerEngineStartupPrecache *this)

{
  atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> aVar1;
  atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> aVar2;
  void *pvVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> aVar6;
  bool bVar7;
  
  this->_padding_ = (longlong)&___7FStorageServerEngineStartupPrecache__6B_;
  aVar1 = (this->HighPriorityPrecacheFileRequests).Tail;
  aVar6 = (atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>)
          (this->HighPriorityPrecacheFileRequests).First;
  do {
    aVar2 = *(atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> *)aVar6;
    FMemory::Free((void *)aVar6);
    bVar7 = aVar6 != aVar1;
    aVar6 = aVar2;
  } while (bVar7);
  while (aVar2 != (atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>)0x0) {
    aVar1 = *(atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> *)aVar2;
    FMemory::Free((void *)aVar2);
    aVar2 = aVar1;
  }
  aVar1 = (this->PrecacheFileRequests).Tail;
  aVar6 = (atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>)
          (this->PrecacheFileRequests).First;
  do {
    aVar2 = *(atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> *)aVar6;
    FMemory::Free((void *)aVar6);
    bVar7 = aVar6 != aVar1;
    aVar6 = aVar2;
  } while (bVar7);
  while (aVar2 != (atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>)0x0) {
    aVar1 = *(atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> *)aVar2;
    FMemory::Free((void *)aVar2);
    aVar2 = aVar1;
  }
  *(undefined4 *)&(this->Cache).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Cache).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Cache);
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->CacheLock);
  if (BVar5 == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheLock);
  }
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// GetPrecachedFile @ 148cc7cd0

bool __thiscall
FStorageServerEngineStartupPrecache::GetPrecachedFile
          (FStorageServerEngineStartupPrecache *this,FIoChunkId *param_1,long64 param_2,
          long64 param_3,uchar *param_4,long64 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  size_t sVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  bool bVar12;
  
  bVar12 = false;
  AcquireSRWLockShared((PSRWLOCK)&this->CacheLock);
  uVar3 = *(uint *)(param_1->Id + 8);
  uVar2 = *(undefined8 *)param_1->Id;
  uVar5 = (uint)((ulonglong)uVar2 >> 0x20);
  if (*(int *)&(this->Cache).field_0x8 != *(int *)&(this->Cache).field_0x34) {
    puVar11 = *(undefined1 **)&(this->Cache).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->Cache).field_0x38;
    }
    iVar8 = *(int *)(puVar11 +
                    (ulonglong)
                    (*(int *)&(this->Cache).field_0x48 - 1U &
                    (uVar3 >> 0x18) + 0x58a2c485 +
                    ((((((uVar5 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar2 >> 0x30) & 0xff)) *
                        0x21 + (uint)(byte)((ulonglong)uVar2 >> 0x38)) * 0x21 + (uVar3 & 0xff)) *
                      0x21 + (uVar3 >> 8 & 0xff)) * 0x21 + (uVar3 >> 0x10 & 0xff)) * 0x21 +
                    (((uint)((ulonglong)uVar2 >> 8) & 0xff) * 0x21 +
                    ((uint)((ulonglong)uVar2 >> 0x10) & 0xff)) * 0x40a9121 +
                    (uVar5 & 0xff) * -0x13be2b1f +
                    ((uint)((ulonglong)uVar2 >> 0x18) & 0xff) * 0x747c7101 +
                    ((uint)uVar2 & 0xff) * 0x30f35d61) * 4);
    if (iVar8 != -1) {
      do {
        lVar1 = *(longlong *)&this->Cache + (longlong)iVar8 * 0x28;
        if ((*(longlong *)(*(longlong *)&this->Cache + (longlong)iVar8 * 0x28) ==
             *(longlong *)param_1->Id) && (*(int *)(lVar1 + 8) == *(int *)(param_1->Id + 8))) {
          plVar10 = (longlong *)(lVar1 + 0x10);
          if (lVar1 == 0) {
            plVar10 = (longlong *)0x0;
          }
          if (plVar10 != (longlong *)0x0) {
            if (param_2 < (int)plVar10[1]) {
              sVar9 = (int)plVar10[1] - param_2;
              if ((longlong)sVar9 < param_3) {
                param_3 = sVar9;
              }
              *param_5 = param_3;
              memcpy(param_4,(void *)(*plVar10 + param_2),param_3);
              bVar12 = true;
            }
            else {
              bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<3746635491403891024>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPlatformFile.cpp"
                                 ,0x150,"Offset < BufferPtr->Num()");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
            }
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x20);
      } while (iVar8 != -1);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->CacheLock);
  return bVar12;
}

// HandleChunkBatchResponse @ 148cc9520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStorageServerEngineStartupPrecache::HandleChunkBatchResponse
          (FStorageServerEngineStartupPrecache *this,FIoChunkId *param_1,
          EStorageServerContentType param_2,FIoBuffer param_3,TOptional<unsigned___int64> *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  void *_Src;
  BufCore *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSharedBuffer FVar7;
  ulong64 uVar8;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_e8;
  int local_e0 [2];
  undefined1 local_d8 [4];
  undefined1 local_d4 [12];
  TMemoryView<void_const_> local_c8;
  TMemoryView<void> local_b8;
  FIoChunkId *local_a8;
  ForAnyElementType *local_a0;
  FCompressedBufferReader local_98;
  void *local_58;
  ulonglong uStack_50;
  FCompressedBuffer local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_118;
  puVar3 = *(undefined8 **)param_3.CorePtr.Reference;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  if (param_2 == CompressedBinary) {
    local_c8.Data = (void *)*puVar3;
    local_c8.Size = (ulong64)CONCAT14(*(undefined1 *)(puVar3 + 3),*(undefined4 *)(puVar3 + 1));
    local_58 = local_c8.Data;
    uStack_50 = local_c8.Size;
    FVar7 = FSharedBuffer::MakeView(&local_c8);
    FCompressedBuffer::FromCompressed(&local_48,(FSharedBuffer *)FVar7.Owner.Owner);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_c8);
    FCompressedBufferReader::FCompressedBufferReader(&local_98,&local_48);
    uVar8 = FCompressedBufferReader::GetRawSize(&local_98);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)uVar8,&local_e8,local_e0,local_e0 + 1);
    local_b8.Data = local_e8.Data;
    local_b8.Size = (ulong64)local_e0[0];
    bVar5 = FCompressedBufferReader::TryDecompressTo(&local_98,&local_b8,0,None);
    if ((!bVar5) &&
       (bVar5 = `FStorageServerEngineStartupPrecache::HandleChunkBatchResponse'::__l6::<lambda_1>::
                operator()(local_d8), !bVar5)) {
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                (&local_98.Context.CompressedBlock.Owner);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_98.Context.RawBlock.Owner);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_98.Context.Header.Owner);
      FCompositeBuffer::~FCompositeBuffer(&local_48.CompressedData);
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      FIoBuffer::~FIoBuffer((FIoBuffer *)param_3.CorePtr.Reference);
      return;
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_98.Context.CompressedBlock.Owner)
    ;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_98.Context.RawBlock.Owner);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_98.Context.Header.Owner);
    FCompositeBuffer::~FCompositeBuffer(&local_48.CompressedData);
  }
  else {
    iVar2 = *(int *)(puVar3 + 1);
    _Src = (void *)*puVar3;
    if (((_Src == (void *)0x0) && (iVar2 != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar2,&local_e8,local_e0,local_e0 + 1);
    if (iVar2 != 0) {
      memcpy(local_e8.Data + iVar6,_Src,(longlong)iVar2);
    }
  }
  if ((ulonglong)((longlong)local_e0[0] + (longlong)this->CacheSize) < 0xa00001) {
    AcquireSRWLockExclusive((PSRWLOCK)&this->CacheLock);
    LOCK();
    this->CacheSize = (atomic<unsigned___int64>)((longlong)this->CacheSize + (longlong)local_e0[0]);
    UNLOCK();
    local_a0 = &local_e8;
    local_a8 = param_1;
    TSet<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FIoChunkId_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&this->Cache,
               (TPairInitializer<FIoChunkId_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&>
                *)local_d4,(bool *)&local_a8);
    ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheLock);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  this_00 = *(BufCore **)param_3.CorePtr.Reference;
  if (this_00 != (BufCore *)0x0) {
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
  return;
}

// PrecacheItems @ 148cd28e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148cd2be6) */

void __thiscall
FStorageServerEngineStartupPrecache::PrecacheItems(FStorageServerEngineStartupPrecache *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  uint uVar3;
  atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> aVar4;
  FStorageServerConnection *this_00;
  code *pcVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_01;
  TTypeCompatibleBytes<FIoBuffer> this_02;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FIoBuffer *pFVar9;
  EIoErrorCode EVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStackY_178 [32];
  ForAnyElementType local_128;
  int local_120 [2];
  TArray<FStorageServerConnection::FChunkBatchRequestEntry,TSizedDefaultAllocator<32>_> local_118;
  undefined1 local_108 [8];
  TPairInitializer<FIoChunkId_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&&>
  local_100;
  FStorageServerEngineStartupPrecache *local_f0;
  TOptional<FIoBuffer> local_e8;
  FIoChunkId *local_d8;
  ForAnyElementType *local_d0;
  code *local_c8;
  FStorageServerEngineStartupPrecache **local_c0;
  FIoStatus local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uchar auStack_a0 [4];
  int iStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  uchar auStack_88 [4];
  int iStack_84;
  FIoChunkId local_78;
  int iStack_6c;
  TIoStatusOr<FIoBuffer> local_68;
  FScriptContainerElement local_50 [8];
  uchar local_48 [8];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  FScriptContainerElement local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_FStorageServerEngineStartupPrecache::PrecacheItems(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId424,
               "FStorageServerEngineStartupPrecache::PrecacheItems",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPlatformFile.cpp"
               ,0x1a8);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_FStorageServerEngineStartupPrecache::PrecacheItems(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId424);
  }
  local_78.Id[0] = '\0';
  local_78.Id[1] = '\0';
  local_78.Id[2] = '\0';
  local_78.Id[3] = '\0';
  local_78.Id[4] = '\0';
  local_78.Id[5] = '\0';
  local_78.Id[6] = '\0';
  local_78.Id[7] = '\0';
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  local_78.Id[8] = '\0';
  local_78.Id[9] = '\0';
  local_78.Id[10] = '\0';
  local_78.Id[0xb] = '\0';
  iStack_6c = 0;
LAB_148cd2980:
  do {
    aVar4 = *(atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> *)
             (this->HighPriorityPrecacheFileRequests).Tail;
    if (aVar4 == (atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>)0x0) {
      aVar4 = *(atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*> *)
               (this->PrecacheFileRequests).Tail;
      if (aVar4 == (atomic<TSpscQueue<TTuple<FIoChunkId,int>,FMemory>::FNode_*>)0x0)
      goto LAB_148cd2da5;
      uVar14 = *(undefined4 *)((longlong)aVar4 + 8);
      uVar15 = *(undefined4 *)((longlong)aVar4 + 0xc);
      local_78.Id._8_4_ = *(undefined4 *)((longlong)aVar4 + 0x10);
      iStack_6c = *(int *)((longlong)aVar4 + 0x14);
      (this->PrecacheFileRequests).Tail = aVar4;
      LOCK();
      paVar2 = &(this->PrecacheFileRequests).NumElems;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      local_a8 = uVar14;
      uStack_a4 = uVar15;
      auStack_a0 = (uchar  [4])local_78.Id._8_4_;
      iStack_9c = iStack_6c;
    }
    else {
      uVar14 = *(undefined4 *)((longlong)aVar4 + 8);
      uVar15 = *(undefined4 *)((longlong)aVar4 + 0xc);
      local_78.Id._8_4_ = *(undefined4 *)((longlong)aVar4 + 0x10);
      iStack_6c = *(int *)((longlong)aVar4 + 0x14);
      (this->HighPriorityPrecacheFileRequests).Tail = aVar4;
      LOCK();
      paVar2 = &(this->HighPriorityPrecacheFileRequests).NumElems;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      local_90 = uVar14;
      uStack_8c = uVar15;
      auStack_88 = (uchar  [4])local_78.Id._8_4_;
      iStack_84 = iStack_6c;
    }
    local_78.Id[5] = (uchar)((uint)uVar15 >> 8);
    local_78.Id[6] = (uchar)((uint)uVar15 >> 0x10);
    local_78.Id[7] = (uchar)((uint)uVar15 >> 0x18);
    local_78.Id[4] = (char)uVar15;
    local_78.Id[1] = (uchar)((uint)uVar14 >> 8);
    local_78.Id[2] = (uchar)((uint)uVar14 >> 0x10);
    local_78.Id[3] = (uchar)((uint)uVar14 >> 0x18);
    local_78.Id[0] = (char)uVar14;
    if (0xa00000 < (ulonglong)((longlong)iStack_6c + (longlong)this->CacheSize)) {
LAB_148cd2da5:
      if (local_118.ArrayNum != 0) {
        local_c0 = &local_f0;
        local_c8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FStorageServerEngineStartupPrecache::PrecacheItems'::__l2::<lambda_1>,void,FIoChunkId,enum_EStorageServerContentType,FIoBuffer,TOptional<unsigned___int64>_const_&>
                   ::Call;
        local_f0 = this;
        FStorageServerConnection::ReadChunkBatchRequest
                  (this->Connection,&local_b8,&local_118,
                   (TFunctionRef<void___cdecl(FIoChunkId,EStorageServerContentType,FIoBuffer,TOptional<unsigned___int64>_const_&)>
                    *)&local_c8,false);
        if (local_b8.ErrorCode != Ok) {
          `FStorageServerEngineStartupPrecache::PrecacheItems'::__l20::<lambda_2>::operator()
                    (local_108);
        }
        FIoStatus::~FIoStatus(&local_b8);
      }
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    if (this->bUseBatchedRequests != (atomic<bool>)0x0) {
      local_38 = (longlong)iStack_6c;
      local_50[0] = (FScriptContainerElement)(char)uVar14;
      local_50[1] = (FScriptContainerElement)local_78.Id[1];
      local_50[2] = (FScriptContainerElement)local_78.Id[2];
      local_50[3] = (FScriptContainerElement)local_78.Id[3];
      local_50[4] = (FScriptContainerElement)(char)uVar15;
      local_50[5] = (FScriptContainerElement)local_78.Id[5];
      local_50[6] = (FScriptContainerElement)local_78.Id[6];
      local_50[7] = (FScriptContainerElement)local_78.Id[7];
      local_40 = 0;
      local_28 = (FScriptContainerElement)0x0;
      local_48._0_4_ = local_78.Id._8_4_;
      if (((local_118.AllocatorInstance.Data <= local_50) &&
          (local_50 < local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 0x30)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_118.ArrayNum == local_118.ArrayMax) {
        local_118.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_118.AllocatorInstance,&local_118.ArrayMax);
      }
      iVar7 = local_118.ArrayNum + 1;
      lVar8 = (longlong)local_118.ArrayNum;
      *(FScriptContainerElement (*) [8])(local_118.AllocatorInstance.Data + lVar8 * 0x30) = local_50
      ;
      *(undefined4 *)(local_118.AllocatorInstance.Data + lVar8 * 0x30 + 8) = local_48._0_4_;
      *(undefined8 *)(local_118.AllocatorInstance.Data + lVar8 * 0x30 + 0x10) = local_40;
      local_118.AllocatorInstance.Data[lVar8 * 0x30 + 0x28] = (FScriptContainerElement)0x0;
      *(longlong *)(local_118.AllocatorInstance.Data + lVar8 * 0x30 + 0x18) = local_38;
      local_118.AllocatorInstance.Data[lVar8 * 0x30 + 0x28] = local_28;
      local_118.ArrayNum = iVar7;
      if (local_28 != (FScriptContainerElement)0x0) {
        *(undefined8 *)(local_118.AllocatorInstance.Data + lVar8 * 0x30 + 0x20) = local_30;
      }
      goto LAB_148cd2980;
    }
    local_128.Data = (FScriptContainerElement *)0x0;
    local_120[0] = 0;
    local_120[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iStack_6c,&local_128,local_120,local_120 + 1);
    this_00 = this->Connection;
    pFVar9 = FIoBuffer::FIoBuffer
                       ((FIoBuffer *)&local_100.Value,Wrap,local_128.Data,(longlong)iStack_6c);
    local_e8.bIsSet = true;
    local_e8.TypedValue.CorePtr.Reference =
         (TRefCountPtr<FIoBuffer::BufCore>)(pFVar9->CorePtr).Reference;
    (pFVar9->CorePtr).Reference = (BufCore *)0x0;
    FStorageServerConnection::ReadChunkRequest
              (this_00,&local_68,&local_78,0,(longlong)iStack_6c,&local_e8,false);
    this_01 = local_100.Value;
    if ((BufCore *)local_100.Value != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_100.Value);
      LOCK();
      piVar1 = &this_01->ArrayMax;
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)this_01);
        ::operator_delete(this_01,0x20);
      }
    }
    EVar10 = local_68.StatusValue.ErrorCode;
    if (EVar10 == Ok) {
      uVar3 = *(uint *)((longlong)local_68.Value.Pad + 8);
      if (local_120[0] < (int)uVar3) {
        iVar11 = uVar3 - local_120[0];
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar11,&local_128,local_120,local_120 + 1);
        memset(local_128.Data + iVar7,0,(longlong)iVar11);
LAB_148cd2cf3:
        iVar7 = local_120[0];
      }
      else {
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
        }
        iVar7 = local_120[0];
        if ((int)uVar3 < local_120[0]) {
          uVar12 = local_120[0] - uVar3;
          if ((int)(uVar12 | uVar3) < 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar7 = local_120[0];
          }
          if (uVar12 != 0) {
            iVar11 = (iVar7 - uVar12) - uVar3;
            if (iVar11 != 0) {
              memmove(local_128.Data + (int)uVar3,local_128.Data + (int)uVar3 + (int)uVar12,
                      (longlong)iVar11);
              iVar7 = local_120[0];
            }
            local_120[0] = iVar7 - uVar12;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,&local_128,iVar7 - uVar12,local_120 + 1);
            goto LAB_148cd2cf3;
          }
        }
      }
      LOCK();
      this->CacheSize = (atomic<unsigned___int64>)((longlong)this->CacheSize + (longlong)iVar7);
      UNLOCK();
      AcquireSRWLockExclusive((PSRWLOCK)&this->CacheLock);
      local_d0 = &local_128;
      local_d8 = &local_78;
      TSet<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FIoChunkId_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&&>_>
                ((TSet<TTuple<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FIoChunkId,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)&this->Cache,&local_100,(bool *)&local_d8);
      ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheLock);
      EVar10 = local_68.StatusValue.ErrorCode;
    }
    FIoStatus::operator=(&local_68.StatusValue,Unknown);
    this_02.Pad = local_68.Value.Pad;
    if ((EVar10 == Ok) && (local_68.Value.Pad != (uchar  [8])0x0)) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_68.Value.Pad);
      LOCK();
      piVar1 = (int *)((longlong)this_02.Pad + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)this_02.Pad);
        ::operator_delete((void *)this_02.Pad,0x20);
      }
    }
    FIoStatus::~FIoStatus(&local_68.StatusValue);
    if (local_128.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data);
    }
  } while( true );
}

// Run @ 148cdc050

uint __thiscall FStorageServerEngineStartupPrecache::Run(FStorageServerEngineStartupPrecache *this)

{
  atomic<bool> aVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_virtual_unsigned_int___cdecl_FStorageServerEngineStartupPrecache::Run(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId364,"StorageServerPlatformEngineStartupPrecache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerPlatformFile.cpp"
               ,0x16c);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_virtual_unsigned_int___cdecl_FStorageServerEngineStartupPrecache::Run(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId364);
  }
  aVar1 = this->bExitImmediately;
  while( true ) {
    if ((aVar1 != (atomic<bool>)0x0) ||
       ((**(code **)(this->HasWork->_padding_ + 0x20))(this->HasWork,0xffffffff,0),
       this->bExitImmediately != (atomic<bool>)0x0)) goto LAB_148cdc0fb;
    PrecacheItems(this);
    if (this->bExitWhenComplete != (atomic<bool>)0x0) break;
    aVar1 = this->bExitImmediately;
  }
  PrecacheItems(this);
LAB_148cdc0fb:
  (**(code **)(this->IsCompleted->_padding_ + 0x10))();
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return 0;
}

// operator() @ 1505398a0

bool __thiscall
`FStorageServerEngineStartupPrecache::HandleChunkBatchResponse'::__l6::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3746635491403891091>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3746635491403891091>,
                       &`public:___cdecl_`private:_void___cdecl_FStorageServerEngineStartupPrecache::HandleChunkBatchResponse(FIoChunkId,EStorageServerContentType,FIoBuffer,TOptional<unsigned___int64>_const&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150539980

bool __thiscall
`FStorageServerEngineStartupPrecache::PrecacheItems'::__l20::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3746635491403891161>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3746635491403891161>,
                       &`public:___cdecl_`private:_void___cdecl_FStorageServerEngineStartupPrecache::PrecacheItems(void)___ptr64'::`20'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


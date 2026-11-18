// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FIoFileBlockMemoryPool @ 14147e2d0

FIoFileBlockMemoryPool * __thiscall
UE::FIoFileBlockMemoryPool::FIoFileBlockMemoryPool
          (FIoFileBlockMemoryPool *this,FPlatformIoDispatcherStats *param_1)

{
  this->Stats = param_1;
  (this->BlockMemory).Ptr = (void *)0x0;
  (this->MemoryBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MemoryBlocks).ArrayNum = 0;
  (this->MemoryBlocks).ArrayMax = 0;
  this->FreeBlock = (FMemoryBlock *)0x0;
  (this->Mutex).State = (atomic<unsigned_char>)0x0;
  return this;
}

// AddRef @ 141485520

void __thiscall
UE::FIoFileBlockMemoryPool::AddRef(FIoFileBlockMemoryPool *this,FIoBufferHandle param_1)

{
  FMutex *pFVar1;
  FScriptContainerElement *pFVar2;
  atomic<unsigned_char> aVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  
  LOCK();
  bVar6 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    FMutex::LockSlow(&this->Mutex);
  }
  if ((param_1.Handle == -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                         ,0x175,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = 0;
  if (param_1.Handle < (this->MemoryBlocks).ArrayNum) {
    uVar5 = (uint)~param_1.Handle >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (this->MemoryBlocks).AllocatorInstance.Data + (longlong)param_1.Handle * 0x18 + 0x14;
  *(int *)pFVar2 = *(int *)pFVar2 + 1;
  LOCK();
  pFVar1 = &this->Mutex;
  aVar3 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  return;
}

// Alloc @ 1414865a0

void * __thiscall
UE::FIoFileBlockMemoryPool::Alloc(FIoFileBlockMemoryPool *this,FIoBufferHandle *param_1)

{
  FMutex *this_00;
  TCounter<std::atomic<__int64>,0,std::atomic<__int64>,0> *pTVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_char> aVar3;
  int iVar4;
  FMemoryBlock *pFVar5;
  FPlatformIoDispatcherStats *pFVar6;
  code *pcVar7;
  ushort uVar8;
  void *pvVar9;
  atomic<unsigned_int> aVar10;
  bool bVar11;
  
  this_00 = &this->Mutex;
  LOCK();
  bVar11 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar11) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar11) {
    FMutex::LockSlow(this_00);
  }
  pFVar5 = this->FreeBlock;
  if (pFVar5 == (FMemoryBlock *)0x0) {
    param_1->Handle = -1;
    pvVar9 = (void *)0x0;
  }
  else {
    if ((pFVar5->RefCount != 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Block->RefCount == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                            ,0x148,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar7)();
      return pvVar9;
    }
    this->FreeBlock = pFVar5->Next;
    pFVar5->Next = (FMemoryBlock *)0x0;
    iVar4 = pFVar5->Index;
    pFVar5->RefCount = 1;
    if ((iVar4 == -1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InHandle != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.h"
                            ,0x26,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar7)();
      return pvVar9;
    }
    param_1->Handle = iVar4;
    pFVar6 = this->Stats;
    LOCK();
    pTVar1 = &(pFVar6->Stats).AvailableBuffersCounter;
    pTVar1->Value = (atomic<__int64>)((longlong)pTVar1->Value + -1);
    UNLOCK();
    if (-1 < CountersChannel->Enabled) {
      if ((pFVar6->Stats).AvailableBuffersCounter.CounterId == (atomic<unsigned_int>)0x0) {
        uVar8 = FCountersTrace::OutputInitCounter
                          ((pFVar6->Stats).AvailableBuffersCounter.CounterName,TraceCounterType_Int,
                           (pFVar6->Stats).AvailableBuffersCounter.CounterFlags & 0xf);
        paVar2 = &(pFVar6->Stats).AvailableBuffersCounter.CounterId;
        LOCK();
        if (*paVar2 == (atomic<unsigned_int>)0x0) {
          aVar10._2_2_ = 0;
          aVar10._0_2_ = uVar8;
          *paVar2 = aVar10;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (SUB42((pFVar6->Stats).AvailableBuffersCounter.CounterId,0),
                 (long64)(pFVar6->Stats).AvailableBuffersCounter.Value);
    }
    pvVar9 = pFVar5->Memory;
  }
  LOCK();
  aVar3 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    FMutex::WakeWaitingThread(this_00);
  }
  return pvVar9;
}

// Free @ 1414967c0

bool __thiscall
UE::FIoFileBlockMemoryPool::Free(FIoFileBlockMemoryPool *this,FIoBufferHandle *param_1)

{
  int *piVar1;
  FMutex *pFVar2;
  FMemoryBlock *pFVar3;
  atomic<unsigned_char> aVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  bool bVar11;
  
  bVar8 = false;
  LOCK();
  bVar11 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar11) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar11) {
    FMutex::LockSlow(&this->Mutex);
  }
  uVar5 = param_1->Handle;
  if (uVar5 != 0xffffffff) {
    uVar10 = 0;
    if ((int)uVar5 < (this->MemoryBlocks).ArrayNum) {
      uVar10 = ~uVar5 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    pFVar6 = (this->MemoryBlocks).AllocatorInstance.Data;
    pFVar3 = (FMemoryBlock *)(pFVar6 + (longlong)(int)uVar5 * 0x18);
    if ((*(longlong *)(pFVar6 + (longlong)(int)uVar5 * 0x18) != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Block.Next == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                           ,0x162,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    if ((pFVar3->RefCount < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Block.RefCount > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                           ,0x163,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    piVar1 = &pFVar3->RefCount;
    *piVar1 = *piVar1 + -1;
    bVar8 = *piVar1 == 0;
    if (bVar8) {
      pFVar3->Next = this->FreeBlock;
      this->FreeBlock = pFVar3;
      FPlatformIoDispatcherStats::OnFileBlockMemoryFreed(this->Stats,this->BlockSize);
    }
    param_1->Handle = -1;
  }
  LOCK();
  pFVar2 = &this->Mutex;
  aVar4 = pFVar2->State;
  pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
  UNLOCK();
  if (((byte)aVar4 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  return bVar8;
}

// Initialize @ 14149c030

void __thiscall
UE::FIoFileBlockMemoryPool::Initialize
          (FIoFileBlockMemoryPool *this,uint param_1,uint param_2,uint param_3)

{
  int *piVar1;
  TCounter<std::atomic<__int64>,0,std::atomic<__int64>,0> *pTVar2;
  atomic<unsigned_int> *paVar3;
  FScriptContainerElement *_Dst;
  FMemoryBlock *pFVar4;
  FPlatformIoDispatcherStats *pFVar5;
  code *pcVar6;
  bool bVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  atomic<unsigned_int> aVar12;
  FMemoryBlock *pFVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  void *pvVar17;
  
  if (((param_1 == 0) || (param_2 == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("FileBlockSize > 0 && FilePoolSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\PlatformIoDispatcherBase.cpp"
                         ,0x129,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->BlockSize = param_1;
  uVar16 = (uint)((ulonglong)param_2 / (ulonglong)param_1);
  pvVar11 = FMemory::Malloc((ulonglong)(uVar16 * param_1),param_3);
  pvVar17 = (this->BlockMemory).Ptr;
  if (pvVar17 != pvVar11) {
    (this->BlockMemory).Ptr = pvVar11;
    FMemory::Free(pvVar17);
  }
  iVar10 = (this->MemoryBlocks).ArrayNum;
  piVar1 = &(this->MemoryBlocks).ArrayNum;
  if (iVar10 < (int)uVar16) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,uVar16 - iVar10,&(this->MemoryBlocks).AllocatorInstance,piVar1,
                       &(this->MemoryBlocks).ArrayMax);
    DefaultConstructItems<UE::FIoFileBlockMemoryPool::FMemoryBlock,int>
              ((this->MemoryBlocks).AllocatorInstance.Data + (longlong)iVar9 * 0x18,uVar16 - iVar10)
    ;
  }
  else {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)param_2 / (ulonglong)param_1);
    }
    if ((int)uVar16 < iVar10) {
      uVar15 = iVar10 - uVar16;
      if (((int)(uVar15 | uVar16) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar15 != 0) {
        _Dst = (this->MemoryBlocks).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x18;
        iVar10 = (*piVar1 - uVar15) - uVar16;
        if (iVar10 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar15 * 0x18,(longlong)iVar10 * 0x18);
        }
        *piVar1 = *piVar1 - uVar15;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&(this->MemoryBlocks).AllocatorInstance,*piVar1,
                   &(this->MemoryBlocks).ArrayMax);
      }
    }
  }
  uVar16 = 0;
  pvVar17 = (this->BlockMemory).Ptr;
  if (0 < (this->MemoryBlocks).ArrayNum) {
    lVar14 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar16 < *piVar1) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = this->FreeBlock;
      pFVar13 = (FMemoryBlock *)((this->MemoryBlocks).AllocatorInstance.Data + lVar14);
      pFVar13->Memory = pvVar17;
      pvVar17 = (void *)((longlong)pvVar17 + (ulonglong)param_1);
      pFVar13->Next = pFVar4;
      pFVar13->Index = uVar16;
      pFVar5 = this->Stats;
      this->FreeBlock = pFVar13;
      LOCK();
      pTVar2 = &(pFVar5->Stats).AvailableBuffersCounter;
      pTVar2->Value = (atomic<__int64>)((longlong)pTVar2->Value + 1);
      UNLOCK();
      if (-1 < CountersChannel->Enabled) {
        if ((pFVar5->Stats).AvailableBuffersCounter.CounterId == (atomic<unsigned_int>)0x0) {
          uVar8 = FCountersTrace::OutputInitCounter
                            ((pFVar5->Stats).AvailableBuffersCounter.CounterName,
                             TraceCounterType_Int,
                             (pFVar5->Stats).AvailableBuffersCounter.CounterFlags & 0xf);
          paVar3 = &(pFVar5->Stats).AvailableBuffersCounter.CounterId;
          LOCK();
          if (*paVar3 == (atomic<unsigned_int>)0x0) {
            aVar12._2_2_ = 0;
            aVar12._0_2_ = uVar8;
            *paVar3 = aVar12;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (SUB42((pFVar5->Stats).AvailableBuffersCounter.CounterId,0),
                   (long64)(pFVar5->Stats).AvailableBuffersCounter.Value);
      }
      uVar16 = uVar16 + 1;
      lVar14 = lVar14 + 0x18;
    } while ((int)uVar16 < (this->MemoryBlocks).ArrayNum);
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 19

// FIoDispatcherImpl @ 1417a1910

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FIoDispatcherImpl * __thiscall
FIoDispatcherImpl::FIoDispatcherImpl(FIoDispatcherImpl *this,bool param_1)

{
  FIoDispatcherChunkBlockDecoder *this_00;
  code *pcVar1;
  FElement *pFVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FIoDispatcherImpl *pFVar5;
  FSlab *pFVar6;
  FSlab *pFVar7;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  FDelegateHandle FVar8;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this_02;
  wchar_t *pwVar9;
  longlong lVar10;
  FSlab *pFVar11;
  FSlab *pFVar12;
  FPlatformIoDispatcherCreateParams local_res10 [4];
  FIoDispatcherImpl *local_res18;
  <lambda_1> local_res20;
  <lambda_2> local_48 [3];
  
  this->_padding_ = (longlong)&___7FIoDispatcherImpl__6B_;
  pTVar4 = ::operator_new(0x50);
  pFVar12 = (FSlab *)0x0;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    (this->BackendContext).Object = (FIoDispatcherBackendContext *)0x10;
    (this->BackendContext).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFIoDispatcherBackendContext___00_SharedPointerInternals__6B_
    ;
    pTVar4[2]._padding_ = 0;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[3]._padding_ = 0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[4]._padding_ = 2;
    (this->BackendContext).Object = (FIoDispatcherBackendContext *)(pTVar4 + 1);
    (this->BackendContext).SharedReferenceCount.ReferenceController = pTVar4;
    if (((FIoDispatcherBackendContext *)(pTVar4 + 1) == (FIoDispatcherBackendContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FIoDispatcherImpl *)(*pcVar1)();
      return pFVar5;
    }
  }
  (this->MemoryTrimDelegateHandle).ID = 0;
  (this->BackendsLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->Backends).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Backends).ArrayNum = 0;
  (this->Backends).ArrayMax = 0;
  this->RequestAllocator = (FIoRequestAllocator *)0x0;
  (this->BatchAllocator).Blocks = (FBlock *)0x0;
  (this->BatchAllocator).NextFree = (FElement *)0x0;
  (this->BatchAllocator).NumElements = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->BatchAllocator).CriticalSection,4000);
  this->Thread = (FRunnableThread *)0x0;
  FEventRef::FEventRef(&this->DispatcherEvent,AutoReset);
  (this->WaitingRequests).Head = (FIoRequestImpl *)0x0;
  (this->WaitingRequests).Tail = (FIoRequestImpl *)0x0;
  (this->RequestsToCancel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestsToCancel).ArrayNum = 0;
  (this->RequestsToCancel).ArrayMax = 0;
  (this->RequestsToReprioritize).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestsToReprioritize).ArrayNum = 0;
  (this->RequestsToReprioritize).ArrayMax = 0;
  this->bStopRequested = (TAtomic<bool>)0x0;
  *(undefined8 *)&this->ContainerUnmountedEvent = 0;
  *(undefined8 *)&(this->ContainerUnmountedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ContainerUnmountedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->ContainerUnmountedEvent).field_0x18 = 2;
  this->PendingIoRequestsCount = 0;
  this->TotalLoaded = 0;
  FIoRequestStats::FIoRequestStats(&this->RequestStats);
  this_00 = &this->ChunkBlockDecoder;
  (this->ChunkBlockDecoder).DecodeContexts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_00->_padding_ = (longlong)&___7FIoDispatcherChunkBlockDecoder_UE__6B_;
  (this->ChunkBlockDecoder).DecodeContexts.ArrayNum = 0;
  (this->ChunkBlockDecoder).DecodeContexts.ArrayMax = 0;
  (this->ChunkBlockDecoder).NextFreeContext = (FDecodeContext *)0x0;
  (this->ChunkBlockDecoder).QueueEntryAllocator.CurrentSlab = (FSlab *)0x0;
  pFVar6 = ::operator_new(0x14010);
  pFVar7 = pFVar12;
  if (pFVar6 != (FSlab *)0x0) {
    memset(&pFVar6->field_0x4,0,0x1400c);
    lVar10 = 0x200;
    pFVar6->Allocated = 0;
    pFVar6->Freed = 0;
    pFVar11 = pFVar6;
    do {
      pFVar11 = (FSlab *)&pFVar11->Elements[0].Slab;
      *(FSlab **)pFVar11 = (FSlab *)0x0;
      lVar10 = lVar10 + -1;
      pFVar7 = pFVar6;
    } while (lVar10 != 0);
  }
  (this->ChunkBlockDecoder).QueueEntryAllocator.CurrentSlab = pFVar7;
  (this->ChunkBlockDecoder).QueueEntries.Head = (FQueueEntry *)0x0;
  (this->ChunkBlockDecoder).QueueEntries.Tail = (FQueueEntry *)0x0;
  (this->ChunkBlockDecoder).MaxWorkerCount = 0;
  (this->ChunkBlockDecoder).MaxConsecutiveDecodeJobs = 0;
  (this->ChunkBlockDecoder).Mutex = (atomic<unsigned_char>)0x0;
  (this->ChunkBlockDecoder).TaskPriority = BackgroundNormal;
  this->bIsInitialized = false;
  this->WaitingMutex = (atomic<unsigned_char>)0x0;
  (this->UpdateMutex).State = (atomic<unsigned_char>)0x0;
  (this->OversubscriptionLimitReached).ID = 0;
  this->bTaskSchedulerOversubscribed = (atomic<bool>)0x0;
  pFVar7 = ::operator_new(0x48);
  if (pFVar7 != (FSlab *)0x0) {
    *(undefined4 *)&pFVar7->field_0x4 = 0;
    pFVar2 = pFVar7->Elements;
    (pFVar2->Data).Pad[0xc] = '\0';
    (pFVar2->Data).Pad[0xd] = '\0';
    (pFVar2->Data).Pad[0xe] = '\0';
    (pFVar2->Data).Pad[0xf] = '\0';
    (pFVar2->Data).Pad[0x10] = '\0';
    (pFVar2->Data).Pad[0x11] = '\0';
    (pFVar2->Data).Pad[0x12] = '\0';
    (pFVar2->Data).Pad[0x13] = '\0';
    pFVar2 = pFVar7->Elements;
    (pFVar2->Data).Pad[0x14] = '\0';
    (pFVar2->Data).Pad[0x15] = '\0';
    (pFVar2->Data).Pad[0x16] = '\0';
    (pFVar2->Data).Pad[0x17] = '\0';
    (pFVar2->Data).Pad[0x18] = '\0';
    (pFVar2->Data).Pad[0x19] = '\0';
    (pFVar2->Data).Pad[0x1a] = '\0';
    (pFVar2->Data).Pad[0x1b] = '\0';
    pFVar2 = pFVar7->Elements;
    (pFVar2->Data).Pad[0x1c] = '\0';
    (pFVar2->Data).Pad[0x1d] = '\0';
    (pFVar2->Data).Pad[0x1e] = '\0';
    (pFVar2->Data).Pad[0x1f] = '\0';
    (pFVar2->Data).Pad[0x20] = '\0';
    (pFVar2->Data).Pad[0x21] = '\0';
    (pFVar2->Data).Pad[0x22] = '\0';
    (pFVar2->Data).Pad[0x23] = '\0';
    pFVar2 = pFVar7->Elements;
    (pFVar2->Data).Pad[0x24] = '\0';
    (pFVar2->Data).Pad[0x25] = '\0';
    (pFVar2->Data).Pad[0x26] = '\0';
    (pFVar2->Data).Pad[0x27] = '\0';
    (pFVar2->Data).Pad[0x28] = '\0';
    (pFVar2->Data).Pad[0x29] = '\0';
    (pFVar2->Data).Pad[0x2a] = '\0';
    (pFVar2->Data).Pad[0x2b] = '\0';
    pFVar2 = pFVar7->Elements;
    (pFVar2->Data).Pad[0x2c] = '\0';
    (pFVar2->Data).Pad[0x2d] = '\0';
    (pFVar2->Data).Pad[0x2e] = '\0';
    (pFVar2->Data).Pad[0x2f] = '\0';
    (pFVar2->Data).Pad[0x30] = '\0';
    (pFVar2->Data).Pad[0x31] = '\0';
    (pFVar2->Data).Pad[0x32] = '\0';
    (pFVar2->Data).Pad[0x33] = '\0';
    pFVar2 = pFVar7->Elements;
    (pFVar2->Data).Pad[0x34] = '\0';
    (pFVar2->Data).Pad[0x35] = '\0';
    (pFVar2->Data).Pad[0x36] = '\0';
    (pFVar2->Data).Pad[0x37] = '\0';
    pFVar7->Allocated = 0;
    pFVar7->Freed = 0;
    pFVar7->_padding_ = 0;
    pFVar7->Elements[0].Data.Pad[0] = '\0';
    pFVar7->Elements[0].Data.Pad[1] = '\0';
    pFVar7->Elements[0].Data.Pad[2] = '\0';
    pFVar7->Elements[0].Data.Pad[3] = '\0';
    pFVar7->Elements[0].Data.Pad[4] = '\0';
    pFVar7->Elements[0].Data.Pad[5] = '\0';
    pFVar7->Elements[0].Data.Pad[6] = '\0';
    pFVar7->Elements[0].Data.Pad[7] = '\0';
    pFVar2 = pFVar7->Elements;
    (pFVar2->Data).Pad[8] = '\0';
    (pFVar2->Data).Pad[9] = '\0';
    (pFVar2->Data).Pad[10] = '\0';
    (pFVar2->Data).Pad[0xb] = '\0';
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)(pFVar7->Elements[0].Data.Pad + 0x10),4000);
    pFVar12 = pFVar7;
  }
  this->RequestAllocator = (FIoRequestAllocator *)pFVar12;
  LOCK();
  *(int *)pFVar12 = *(int *)pFVar12 + 1;
  UNLOCK();
  TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::BindRaw<FIoDispatcherImpl>
            ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             (this->BackendContext).Object,this,(pmf_66b5d7c5)0x14180d0f0);
  ((this->BackendContext).Object)->bIsMultiThreaded = param_1;
  this_01 = FCoreDelegates::GetMemoryTrimDelegate();
  FVar8 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddLambda<_FIoDispatcherImpl::FIoDispatcherImpl_::__l2::<lambda_1>_>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)this_01,&local_res20);
                    /* WARNING: Load size is inaccurate */
  (this->MemoryTrimDelegateHandle).ID = *FVar8.ID;
  UE::FIoDispatcherChunkBlockDecoder::Initialize
            (this_00,GIoDispatcherDecompressionWorkerCount,
             GIoDispatcherMaxConsecutiveDecompressionJobs,BackgroundNormal);
  FIoChunkBlockDecoder::Set((IIoChunkBlockDecoder *)this_00);
  this_02 = LowLevelTasks::FScheduler::GetOversubscriptionLimitReachedEvent
                      (&LowLevelTasks::FScheduler::Singleton);
  local_res18 = this;
  FVar8 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
          AddLambda<_FIoDispatcherImpl::FIoDispatcherImpl_::__l2::<lambda_2>_>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>
                      *)this_02,local_48);
                    /* WARNING: Load size is inaccurate */
  (this->OversubscriptionLimitReached).ID = *FVar8.ID;
  bVar3 = IsPlatformIoDispatcherEnabled();
  if (bVar3) {
    local_res10[0].bForceGeneric = !param_1;
    local_res10[0].bMultithreaded = param_1;
    pwVar9 = FCommandLine::Get();
    bVar3 = FParse::Param(pwVar9,L"forcegenericio");
    if (bVar3) {
      local_res10[0].bForceGeneric = true;
    }
    UE::FPlatformIoDispatcher::Create(local_res10);
  }
  return this;
}

// ~FIoDispatcherImpl @ 1417a6f30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FIoDispatcherImpl::~FIoDispatcherImpl(FIoDispatcherImpl *this)

{
  TAtomic<int> TVar1;
  int iVar2;
  FRunnableThread *pFVar3;
  ulong64 uVar4;
  FIoRequestAllocator *pFVar5;
  FBlock *pFVar6;
  void *pvVar7;
  FBlock *pFVar8;
  code *pcVar9;
  FBlock *pFVar10;
  FBlock *pFVar11;
  bool bVar12;
  BOOLEAN BVar13;
  uint uVar14;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  ulong64 *puVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  FDestructionSentinel local_58;
  
  this->_padding_ = (longlong)&___7FIoDispatcherImpl__6B_;
  pFVar3 = this->Thread;
  if (pFVar3 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
  }
  iVar2 = (this->Backends).ArrayNum;
  pFVar18 = (this->Backends).AllocatorInstance.Data;
  pFVar16 = pFVar18 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->Backends).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<int,TSharedRef<IIoDispatcherBackend,1>_>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar18 == pFVar16) break;
    (**(code **)(**(longlong **)(pFVar18 + 8) + 8))();
    pFVar18 = pFVar18 + 0x18;
  }
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            FCoreDelegates::GetMemoryTrimDelegate();
  uVar4 = (this->MemoryTrimDelegateHandle).ID;
  uVar19 = 0;
  if (uVar4 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_58);
    uVar20 = uVar19;
    if (0 < (this_00->InvocationList).ArrayNum) {
      do {
        uVar17 = (uint)uVar19;
        uVar14 = 0;
        if ((int)uVar17 < (this_00->InvocationList).ArrayNum) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar16 = (this_00->InvocationList).AllocatorInstance.Data + uVar20;
        if (((*(int *)&pFVar16[8].field_0x0 != 0) &&
            (*(longlong **)&pFVar16->field_0x0 != (longlong *)0x0)) &&
           (puVar15 = (ulong64 *)(**(code **)(**(longlong **)&pFVar16->field_0x0 + 0x40))(),
           *puVar15 == uVar4)) {
          local_res10 = 0;
          if ((*(int *)&pFVar16[8].field_0x0 != 0) &&
             (*(undefined8 **)&pFVar16->field_0x0 != (undefined8 *)0x0)) {
            (**(code **)**(undefined8 **)&pFVar16->field_0x0)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)pFVar16,0,0,0x10);
            *(undefined4 *)&pFVar16[8].field_0x0 = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
          break;
        }
        uVar19 = (ulonglong)(uVar17 + 1);
        uVar20 = uVar20 + 0x10;
      } while ((int)(uVar17 + 1) < (this_00->InvocationList).ArrayNum);
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this->BackendContext).Object);
  pFVar5 = this->RequestAllocator;
  LOCK();
  TVar1 = pFVar5->RefCount;
  pFVar5->RefCount = (TAtomic<int>)((int)pFVar5->RefCount + -1);
  UNLOCK();
  if ((TVar1 == (TAtomic<int>)0x1) && (pFVar5 != (FIoRequestAllocator *)0x0)) {
    pFVar11 = (pFVar5->BlockAllocator).Blocks;
    while (pFVar11 != (FBlock *)0x0) {
      pFVar6 = pFVar11->Next;
      ::operator_delete(pFVar11,0xf0010);
      pFVar11 = pFVar6;
    }
    (pFVar5->BlockAllocator).Blocks = (FBlock *)0x0;
    (pFVar5->BlockAllocator).NextFree = (FElement *)0x0;
    (pFVar5->BlockAllocator).NumElements = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)&(pFVar5->BlockAllocator).CriticalSection);
    ::operator_delete(pFVar5,0x48);
  }
  FIoChunkBlockDecoder::Release();
  UE::FPlatformIoDispatcher::Shutdown();
  UE::FIoDispatcherChunkBlockDecoder::~FIoDispatcherChunkBlockDecoder(&this->ChunkBlockDecoder);
  FIoRequestStats::~FIoRequestStats(&this->RequestStats);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ContainerUnmountedEvent).field_0x8,
             *(int *)&(this->ContainerUnmountedEvent).field_0x10);
  pvVar7 = *(void **)&(this->ContainerUnmountedEvent).field_0x8;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ContainerUnmountedEvent);
  pFVar16 = (this->RequestsToReprioritize).AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  pFVar16 = (this->RequestsToCancel).AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  FEventRef::~FEventRef(&this->DispatcherEvent);
  pFVar10 = (this->BatchAllocator).Blocks;
  while (pFVar10 != (FBlock *)0x0) {
    pFVar8 = pFVar10->Next;
    ::operator_delete(pFVar10,0x60010);
    pFVar10 = pFVar8;
  }
  (this->BatchAllocator).Blocks = (FBlock *)0x0;
  (this->BatchAllocator).NextFree = (FElement *)0x0;
  (this->BatchAllocator).NumElements = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->BatchAllocator).CriticalSection);
  DestructItems<TTuple<int,TSharedRef<IIoDispatcherBackend,1>_>,int>
            ((TTuple<int,TSharedRef<IIoDispatcherBackend,1>_> *)
             (this->Backends).AllocatorInstance.Data,(this->Backends).ArrayNum);
  pFVar16 = (this->Backends).AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  BVar13 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->BackendsLock);
  if (BVar13 == '\0') {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->BackendsLock);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BackendContext).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// operator() @ 1417ac160

void __thiscall `FIoDispatcherImpl::FIoDispatcherImpl'::__l2::<lambda_1>::operator()(void *this)

{
  LPCRITICAL_SECTION p_Var1;
  longlong lVar2;
  void *pvVar3;
  void *pvVar4;
  
  lVar2 = *(longlong *)(*(longlong *)this + 0x38);
  p_Var1 = (LPCRITICAL_SECTION)(lVar2 + 0x20);
  if (p_Var1 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(p_Var1);
    if (*(int *)(lVar2 + 0x18) == 0) {
      pvVar4 = *(void **)(lVar2 + 8);
      while (pvVar4 != (void *)0x0) {
        pvVar3 = *(void **)((longlong)pvVar4 + 0xf0000);
        ::operator_delete(pvVar4,0xf0010);
        pvVar4 = pvVar3;
      }
      *(undefined8 *)(lVar2 + 8) = 0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined4 *)(lVar2 + 0x18) = 0;
    }
    LeaveCriticalSection(p_Var1);
    lVar2 = *(longlong *)this;
    p_Var1 = (LPCRITICAL_SECTION)(lVar2 + 0x58);
    if (p_Var1 != (LPCRITICAL_SECTION)0x0) {
      EnterCriticalSection(p_Var1);
      if (*(int *)(lVar2 + 0x50) == 0) {
        pvVar4 = *(void **)(lVar2 + 0x40);
        while (pvVar4 != (void *)0x0) {
          pvVar3 = *(void **)((longlong)pvVar4 + 0x60000);
          ::operator_delete(pvVar4,0x60010);
          pvVar4 = pvVar3;
        }
        *(undefined8 *)(lVar2 + 0x40) = 0;
        *(undefined8 *)(lVar2 + 0x48) = 0;
        *(undefined4 *)(lVar2 + 0x50) = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x0001417ac241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(p_Var1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator() @ 1417ac430

void __thiscall `FIoDispatcherImpl::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)this;
  iVar2 = *(int *)(lVar3 + 0x30);
  lVar5 = *(longlong *)(lVar3 + 0x28);
  lVar1 = lVar5 + (longlong)iVar2 * 0x18;
  while( true ) {
    if (*(int *)(lVar3 + 0x30) != iVar2) {
      `TCheckedPointerIterator<TTuple<int,TSharedRef<IIoDispatcherBackend,1>_>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (lVar5 == lVar1) break;
    pwVar4 = (wchar_t *)(**(code **)(**(longlong **)(lVar5 + 8) + 0x58))();
    FIoStoreTrace::BackendName(*(IIoDispatcherBackend **)(lVar5 + 8),pwVar4);
    lVar5 = lVar5 + 0x18;
  }
  return;
}

// AllocBatch @ 1417b3980

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FIoBatchImpl * __thiscall FIoDispatcherImpl::AllocBatch(FIoDispatcherImpl *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FElement *pFVar1;
  FElement *pFVar2;
  FBlock *pFVar3;
  FElement **ppFVar4;
  FBlock *pFVar5;
  int *piVar6;
  longlong lVar7;
  FLLMScope local_res8 [2];
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  FMemScope local_res20;
  
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar6 < `public:_class_FIoBatchImpl*___ptr64___cdecl_FIoDispatcherImpl::AllocBatch(void)___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_FIoBatchImpl*___ptr64___cdecl_FIoDispatcherImpl::AllocBatch(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_FIoBatchImpl*___ptr64___cdecl_FIoDispatcherImpl::AllocBatch(void)___ptr64'::__l2
     ::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_class_FIoBatchImpl*___ptr64___cdecl_FIoDispatcherImpl::AllocBatch(void)___ptr64'
                    ::__l2::LLMScope_Name439,L"FileSystem/IODispatcher");
    _Init_thread_footer(&`public:_class_FIoBatchImpl*___ptr64___cdecl_FIoDispatcherImpl::AllocBatch(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res10,
             `public:_class_FIoBatchImpl*___ptr64___cdecl_FIoDispatcherImpl::AllocBatch(void)___ptr64'
             ::__l2::LLMScope_Name439,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res20,
             &`public:_class_FIoBatchImpl*___ptr64___cdecl_FIoDispatcherImpl::AllocBatch(void)___ptr64'
              ::__l2::LLMScope_Name439,true);
  lpCriticalSection = &(this->BatchAllocator).CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar5 = (FBlock *)0x0;
  if ((this->BatchAllocator).NextFree == (FElement *)0x0) {
    if ((*piVar6 < `public:_class_FIoBatchImpl*___ptr64___cdecl_TBlockAllocator<FIoBatchImpl,4096>::Alloc(void)___ptr64'
                   ::__l5::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_FIoBatchImpl*___ptr64___cdecl_TBlockAllocator<FIoBatchImpl,4096>::Alloc(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_class_FIoBatchImpl*___ptr64___cdecl_TBlockAllocator<FIoBatchImpl,4096>::Alloc(void)___ptr64'
       ::__l5::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_class_FIoBatchImpl*___ptr64___cdecl_TBlockAllocator<FIoBatchImpl,4096>::Alloc(void)___ptr64'
                      ::__l5::LLMScope_Name214,L"FileSystem/IODispatcher");
      _Init_thread_footer(&`public:_class_FIoBatchImpl*___ptr64___cdecl_TBlockAllocator<FIoBatchImpl,4096>::Alloc(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (local_res8,
               `public:_class_FIoBatchImpl*___ptr64___cdecl_TBlockAllocator<FIoBatchImpl,4096>::Alloc(void)___ptr64'
               ::__l5::LLMScope_Name214,false,None,Default,true);
    FMemScope::FMemScope
              (&local_res18,
               &`public:_class_FIoBatchImpl*___ptr64___cdecl_TBlockAllocator<FIoBatchImpl,4096>::Alloc(void)___ptr64'
                ::__l5::LLMScope_Name214,true);
    pFVar3 = ::operator_new(0x60010);
    if (pFVar3 != (FBlock *)0x0) {
      pFVar3->Next = (FBlock *)0x0;
      pFVar5 = pFVar3;
    }
    ppFVar4 = &pFVar5->Elements[2].Next;
    lVar7 = 0x400;
    do {
      ppFVar4[-0x18] = (this->BatchAllocator).NextFree;
      ppFVar4[-0xc] = (FElement *)(ppFVar4 + -0x22);
      *ppFVar4 = (FElement *)(ppFVar4 + -0x16);
      ppFVar4[0xc] = (FElement *)(ppFVar4 + -10);
      (this->BatchAllocator).NextFree = (FElement *)(ppFVar4 + 2);
      ppFVar4 = ppFVar4 + 0x30;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    pFVar5->Next = (this->BatchAllocator).Blocks;
    (this->BatchAllocator).Blocks = pFVar5;
    FMemScope::~FMemScope(&local_res18);
    FLLMScope::~FLLMScope(local_res8);
  }
  pFVar1 = (this->BatchAllocator).NextFree;
  pFVar2 = pFVar1->Next;
  piVar6 = &(this->BatchAllocator).NumElements;
  *piVar6 = *piVar6 + 1;
  (this->BatchAllocator).NextFree = pFVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  (pFVar1->Buffer).Pad[8] = '\0';
  (pFVar1->Buffer).Pad[9] = '\0';
  (pFVar1->Buffer).Pad[10] = '\0';
  (pFVar1->Buffer).Pad[0xb] = '\0';
  (pFVar1->Buffer).Pad[0xc] = '\0';
  (pFVar1->Buffer).Pad[0xd] = '\0';
  (pFVar1->Buffer).Pad[0xe] = '\0';
  (pFVar1->Buffer).Pad[0xf] = '\0';
  (pFVar1->Buffer).Pad[0x10] = '\0';
  (pFVar1->Buffer).Pad[0x11] = '\0';
  (pFVar1->Buffer).Pad[0x12] = '\0';
  (pFVar1->Buffer).Pad[0x13] = '\0';
  (pFVar1->Buffer).Pad[0x14] = '\0';
  (pFVar1->Buffer).Pad[0x15] = '\0';
  (pFVar1->Buffer).Pad[0x16] = '\0';
  (pFVar1->Buffer).Pad[0x17] = '\0';
  (pFVar1->Buffer).Pad[0x18] = '\0';
  (pFVar1->Buffer).Pad[0x19] = '\0';
  (pFVar1->Buffer).Pad[0x1a] = '\0';
  (pFVar1->Buffer).Pad[0x1b] = '\0';
  (pFVar1->Buffer).Pad[0x1c] = '\0';
  (pFVar1->Buffer).Pad[0x1d] = '\0';
  (pFVar1->Buffer).Pad[0x1e] = '\0';
  (pFVar1->Buffer).Pad[0x1f] = '\0';
  (pFVar1->Buffer).Pad[0x20] = '\0';
  (pFVar1->Buffer).Pad[0x21] = '\0';
  (pFVar1->Buffer).Pad[0x22] = '\0';
  (pFVar1->Buffer).Pad[0x23] = '\0';
  (pFVar1->Buffer).Pad[0x24] = '\0';
  (pFVar1->Buffer).Pad[0x25] = '\0';
  (pFVar1->Buffer).Pad[0x26] = '\0';
  (pFVar1->Buffer).Pad[0x27] = '\0';
  (pFVar1->Buffer).Pad[0x44] = '\0';
  (pFVar1->Buffer).Pad[0x45] = '\0';
  (pFVar1->Buffer).Pad[0x46] = '\0';
  (pFVar1->Buffer).Pad[0x47] = '\0';
  (pFVar1->Buffer).Pad[0x48] = '\0';
  (pFVar1->Buffer).Pad[0x49] = '\0';
  (pFVar1->Buffer).Pad[0x4a] = '\0';
  (pFVar1->Buffer).Pad[0x4b] = '\0';
  (pFVar1->Buffer).Pad[0x4c] = '\0';
  (pFVar1->Buffer).Pad[0x4d] = '\0';
  (pFVar1->Buffer).Pad[0x4e] = '\0';
  (pFVar1->Buffer).Pad[0x4f] = '\0';
  (pFVar1->Buffer).Pad[0] = '\0';
  (pFVar1->Buffer).Pad[1] = '\0';
  (pFVar1->Buffer).Pad[2] = '\0';
  (pFVar1->Buffer).Pad[3] = '\0';
  (pFVar1->Buffer).Pad[4] = '\0';
  (pFVar1->Buffer).Pad[5] = '\0';
  (pFVar1->Buffer).Pad[6] = '\0';
  (pFVar1->Buffer).Pad[7] = '\0';
  (pFVar1->Buffer).Pad[0x28] = '\0';
  (pFVar1->Buffer).Pad[0x29] = '\0';
  (pFVar1->Buffer).Pad[0x2a] = '\0';
  (pFVar1->Buffer).Pad[0x2b] = '\0';
  (pFVar1->Buffer).Pad[0x2c] = '\0';
  (pFVar1->Buffer).Pad[0x2d] = '\0';
  (pFVar1->Buffer).Pad[0x2e] = '\0';
  (pFVar1->Buffer).Pad[0x2f] = '\0';
  (pFVar1->Buffer).Pad[0x30] = '\0';
  (pFVar1->Buffer).Pad[0x31] = '\0';
  (pFVar1->Buffer).Pad[0x32] = '\0';
  (pFVar1->Buffer).Pad[0x33] = '\0';
  (pFVar1->Buffer).Pad[0x34] = '\0';
  (pFVar1->Buffer).Pad[0x35] = '\0';
  (pFVar1->Buffer).Pad[0x36] = '\0';
  (pFVar1->Buffer).Pad[0x37] = '\0';
  (pFVar1->Buffer).Pad[0x38] = '\0';
  (pFVar1->Buffer).Pad[0x39] = '\0';
  (pFVar1->Buffer).Pad[0x3a] = '\0';
  (pFVar1->Buffer).Pad[0x3b] = '\0';
  (pFVar1->Buffer).Pad[0x3c] = '\0';
  (pFVar1->Buffer).Pad[0x3d] = '\0';
  (pFVar1->Buffer).Pad[0x3e] = '\0';
  (pFVar1->Buffer).Pad[0x3f] = '\0';
  (pFVar1->Buffer).Pad[0x40] = '\0';
  (pFVar1->Buffer).Pad[0x41] = '\0';
  (pFVar1->Buffer).Pad[0x42] = '\0';
  (pFVar1->Buffer).Pad[0x43] = '\0';
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return (FIoBatchImpl *)pFVar1;
}

// CompleteBatch @ 1417ba0b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FIoDispatcherImpl::CompleteBatch(FIoDispatcherImpl *this,FIoBatchImpl *param_1)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  FTaskBase *this_00;
  FBaseGraphTask *pFVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  if (*(void **)&param_1->Callback != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&param_1->Callback);
    plVar4 = *(longlong **)&(param_1->Callback).field_0x28;
    pcVar5 = *(code **)&param_1->Callback;
    plVar8 = (longlong *)&(param_1->Callback).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = plVar4;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar5)(uVar7);
  }
  if (param_1->Event != (FEvent *)0x0) {
    (**(code **)(param_1->Event->_padding_ + 0x10))();
  }
  this_00 = (FTaskBase *)(param_1->GraphEvent).Reference;
  if (this_00 != (FTaskBase *)0x0) {
    if (this_00->ExtendedPriority == TaskEvent) {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
  }
  pFVar6 = (param_1->GraphEvent).Reference;
  if (pFVar6 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar6->field_0x30;
    iVar3 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
    }
  }
  if (*(longlong *)&param_1->Callback != 0) {
    plVar4 = *(longlong **)&(param_1->Callback).field_0x28;
    plVar8 = (longlong *)&(param_1->Callback).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = plVar4;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  lpCriticalSection = &(this->BatchAllocator).CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    *(FElement **)&param_1[1].Callback = (this->BatchAllocator).NextFree;
    piVar2 = &(this->BatchAllocator).NumElements;
    *piVar2 = *piVar2 + -1;
    (this->BatchAllocator).NextFree = (FElement *)param_1;
                    /* WARNING: Could not recover jumptable at 0x0001417ba188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CompleteRequest @ 1417ba1a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FIoDispatcherImpl::CompleteRequest
          (FIoDispatcherImpl *this,FIoRequestImpl *param_1,EIoErrorCode param_2)

{
  int *piVar1;
  TAtomic<unsigned_int> *pTVar2;
  int iVar3;
  int iVar4;
  TAtomic<unsigned_int> TVar5;
  FIoBatchImpl *pFVar6;
  code *pcVar7;
  longlong *plVar8;
  BufCore *this_00;
  undefined1 uVar9;
  FIoBuffer *pFVar10;
  undefined8 uVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  uint uVar14;
  TSharedString<wchar_t> TVar15;
  FIoBuffer this_01;
  longlong *plVar16;
  EIoErrorCode EVar17;
  bool bVar18;
  wchar_t *local_68;
  undefined8 local_60;
  BufCore *local_58;
  FIoBuffer local_40;
  
  LOCK();
  bVar18 = param_1->ErrorCode == (TAtomic<EIoErrorCode>)0x1;
  if (bVar18) {
    param_1->ErrorCode = (TAtomic<EIoErrorCode>)param_2;
  }
  UNLOCK();
  if (!bVar18) {
    return false;
  }
  FIoRequestStats::OnRequestCompleted(&this->RequestStats,param_1);
  TVar15 = FIoStatus::Unknown.ErrorMessage;
  pFVar6 = param_1->Batch;
  if (*(longlong *)&param_1->Callback == 0) goto LAB_1417ba48a;
  if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  uVar14 = FIoStatus::Unknown.SystemErrorCode;
  EVar17 = FIoStatus::Unknown.ErrorCode;
  if (param_2 == Ok) {
    pFVar10 = FIoRequestImpl::GetBuffer(param_1);
    this_01.CorePtr.Reference = local_40.CorePtr.Reference;
    if (pFVar10 != &local_40) {
      if (TVar15.Chars != (wchar_t *)0x0) {
        LOCK();
        pwVar13 = TVar15.Chars + -4;
        iVar3 = *(int *)pwVar13;
        *(int *)pwVar13 = *(int *)pwVar13 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FMemory::Free(TVar15.Chars + -4);
        }
      }
      if ((EVar17 == Ok) && (local_40.CorePtr.Reference != (BufCore *)0x0)) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_40.CorePtr.Reference);
        LOCK();
        piVar1 = (int *)((longlong)local_40.CorePtr.Reference + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)local_40.CorePtr.Reference);
          ::operator_delete((void *)local_40.CorePtr.Reference,0x20);
        }
      }
      local_40.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(pFVar10->CorePtr).Reference;
      if (local_40.CorePtr.Reference != (BufCore *)0x0) {
        LOCK();
        ((BufCore *)local_40.CorePtr.Reference)->NumRefs =
             ((BufCore *)local_40.CorePtr.Reference)->NumRefs + 1;
        UNLOCK();
      }
      EVar17 = Ok;
      goto LAB_1417ba311;
    }
  }
  else {
    if (TVar15.Chars != (wchar_t *)0x0) {
      pwVar13 = TVar15.Chars + -4;
      LOCK();
      iVar3 = *(int *)pwVar13;
      *(int *)pwVar13 = *(int *)pwVar13 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FMemory::Free(pwVar13);
      }
    }
    bVar18 = EVar17 == Ok;
    EVar17 = param_2;
    if ((bVar18) && (local_40.CorePtr.Reference != (BufCore *)0x0)) {
      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_40.CorePtr.Reference);
      LOCK();
      piVar1 = (int *)((longlong)local_40.CorePtr.Reference + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FIoBuffer::BufCore::~BufCore((BufCore *)local_40.CorePtr.Reference);
        ::operator_delete((void *)local_40.CorePtr.Reference,0x20);
      }
    }
LAB_1417ba311:
    TVar15.Chars = (wchar_t *)0x0;
    uVar14 = 0;
    this_01.CorePtr.Reference = local_40.CorePtr.Reference;
  }
  if (TVar15.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(TVar15.Chars + -4) = *(int *)(TVar15.Chars + -4) + 1;
    UNLOCK();
  }
  local_60 = CONCAT44(uVar14,EVar17);
  if ((EVar17 == Ok) &&
     (local_58 = (BufCore *)this_01.CorePtr.Reference, this_01.CorePtr.Reference != (BufCore *)0x0))
  {
    LOCK();
    ((BufCore *)this_01.CorePtr.Reference)->NumRefs =
         ((BufCore *)this_01.CorePtr.Reference)->NumRefs + 1;
    UNLOCK();
  }
  local_68 = TVar15.Chars;
  UE::Core::Private::Function::CheckCallable(*(void **)&param_1->Callback);
  pcVar7 = *(code **)&param_1->Callback;
  plVar16 = (longlong *)&(param_1->Callback).field_0x10;
  plVar8 = *(longlong **)&(param_1->Callback).field_0x28;
  plVar12 = plVar16;
  if (plVar8 != (longlong *)0x0) {
    plVar12 = plVar8;
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar7)(uVar11,&local_68);
  iVar3 = (int)local_60;
  if (local_68 != (wchar_t *)0x0) {
    pwVar13 = local_68 + -4;
    LOCK();
    iVar4 = *(int *)pwVar13;
    *(int *)pwVar13 = *(int *)pwVar13 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      FMemory::Free(pwVar13);
    }
  }
  this_00 = local_58;
  local_60 = 1;
  local_68 = (wchar_t *)0x0;
  if ((iVar3 == 0) && (local_58 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(local_58);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  if (local_68 != (wchar_t *)0x0) {
    pwVar13 = local_68 + -4;
    LOCK();
    iVar3 = *(int *)pwVar13;
    *(int *)pwVar13 = *(int *)pwVar13 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FMemory::Free(pwVar13);
    }
  }
  if (*(longlong *)&param_1->Callback != 0) {
    plVar8 = *(longlong **)&(param_1->Callback).field_0x28;
    if (plVar8 != (longlong *)0x0) {
      plVar16 = plVar8;
    }
    (**(code **)(*plVar16 + 0x10))(plVar16);
    *(undefined8 *)&param_1->Callback = 0;
  }
  if (TVar15.Chars != (wchar_t *)0x0) {
    pwVar13 = TVar15.Chars + -4;
    LOCK();
    iVar3 = *(int *)pwVar13;
    *(int *)pwVar13 = *(int *)pwVar13 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FMemory::Free(pwVar13);
    }
  }
  if ((EVar17 == Ok) && (this_01.CorePtr.Reference != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)this_01.CorePtr.Reference);
    LOCK();
    piVar1 = &((BufCore *)this_01.CorePtr.Reference)->NumRefs;
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)this_01.CorePtr.Reference);
      ::operator_delete((void *)this_01.CorePtr.Reference,0x20);
    }
  }
LAB_1417ba48a:
  if (pFVar6 != (FIoBatchImpl *)0x0) {
    if ((pFVar6->UnfinishedRequestsCount == (TAtomic<unsigned_int>)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Batch->UnfinishedRequestsCount",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                            ,0x318,L""), bVar18)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    LOCK();
    pTVar2 = &pFVar6->UnfinishedRequestsCount;
    TVar5 = *pTVar2;
    *pTVar2 = (TAtomic<unsigned_int>)((int)*pTVar2 + -1);
    UNLOCK();
    if (TVar5 == (TAtomic<unsigned_int>)0x1) {
      CompleteBatch(this,pFVar6);
    }
  }
  return true;
}

// GetSizeForChunk @ 1417d7cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001417d7e85) */
/* WARNING: Removing unreachable block (ram,0x0001417d7e92) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TIoStatusOr<unsigned___int64> * __thiscall
FIoDispatcherImpl::GetSizeForChunk
          (FIoDispatcherImpl *this,TIoStatusOr<unsigned___int64> *__return_storage_ptr__,
          FIoChunkId *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  TSharedString<wchar_t> local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((*(longlong *)param_1->Id == FIoChunkId::InvalidChunkId.Id._0_8_) &&
     (*(int *)(param_1->Id + 8) == FIoChunkId::InvalidChunkId.Id._8_4_)) {
    piVar5 = FMemory::Malloc(0x38,0);
    *piVar5 = 1;
    pwVar6 = (wchar_t *)(piVar5 + 2);
    piVar5[1] = 0x17;
    uVar4 = u_FIoChunkId_is_n._8_8_;
    *(undefined8 *)pwVar6 = u_FIoChunkId_is_n._0_8_;
    *(undefined8 *)(piVar5 + 4) = uVar4;
    uVar4 = u_FIoChunkId_is_n._24_8_;
    *(undefined8 *)(piVar5 + 6) = u_FIoChunkId_is_n._16_8_;
    *(undefined8 *)(piVar5 + 8) = uVar4;
    *(undefined8 *)(piVar5 + 10) = u_FIoChunkId_is_n._32_8_;
    piVar5[0xc] = u_FIoChunkId_is_n._40_4_;
    *(wchar_t *)(piVar5 + 0xd) = u_FIoChunkId_is_n[0x16];
    *(undefined2 *)((longlong)piVar5 + 0x36) = 0;
    (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
    (__return_storage_ptr__->StatusValue).ErrorCode = Ok;
    (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
    if (pwVar6 == (wchar_t *)0x0) {
      (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
      (__return_storage_ptr__->StatusValue).ErrorCode = InvalidParameter;
      (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
    }
    else {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = pwVar6;
      (__return_storage_ptr__->StatusValue).ErrorCode = InvalidParameter;
      (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FMemory::Free(piVar5);
      }
    }
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)&this->BackendsLock);
    iVar2 = (this->Backends).ArrayNum;
    pFVar7 = (this->Backends).AllocatorInstance.Data;
    pFVar1 = pFVar7 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((this->Backends).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TTuple<int,TSharedRef<IIoDispatcherBackend,1>_>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_68);
      }
      if (pFVar7 == pFVar1) {
        (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
        (__return_storage_ptr__->StatusValue).ErrorCode = NotFound;
        (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
        goto LAB_1417d7eb4;
      }
      (**(code **)(**(longlong **)(pFVar7 + 8) + 0x48))
                (*(longlong **)(pFVar7 + 8),&local_60,param_1);
      if ((int)local_58 == 0) break;
      if (local_60.Chars != (wchar_t *)0x0) {
        pwVar6 = local_60.Chars + -4;
        LOCK();
        iVar3 = *(int *)pwVar6;
        *(int *)pwVar6 = *(int *)pwVar6 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FMemory::Free(pwVar6);
        }
      }
      pFVar7 = pFVar7 + 0x18;
    }
    (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
    (__return_storage_ptr__->StatusValue).ErrorCode = Ok;
    (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
    if (local_60.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_60.Chars + -4) = *(int *)(local_60.Chars + -4) + 1;
      UNLOCK();
    }
    (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = local_60.Chars;
    (__return_storage_ptr__->StatusValue).SystemErrorCode = local_58._4_4_;
    (__return_storage_ptr__->StatusValue).ErrorCode = Ok;
    *(undefined8 *)(__return_storage_ptr__->Value).Pad = local_50;
    if (local_60.Chars != (wchar_t *)0x0) {
      pwVar6 = local_60.Chars + -4;
      LOCK();
      iVar2 = *(int *)pwVar6;
      *(int *)pwVar6 = *(int *)pwVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FMemory::Free(pwVar6);
      }
    }
    local_60.Chars = (wchar_t *)0x0;
    local_58 = 1;
LAB_1417d7eb4:
    ReleaseSRWLockShared((PSRWLOCK)&this->BackendsLock);
  }
  return __return_storage_ptr__;
}

// GetSizeForChunk @ 1417d7f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001417d80fd) */
/* WARNING: Removing unreachable block (ram,0x0001417d810a) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TIoStatusOr<unsigned___int64> * __thiscall
FIoDispatcherImpl::GetSizeForChunk
          (FIoDispatcherImpl *this,TIoStatusOr<unsigned___int64> *__return_storage_ptr__,
          FIoChunkId *param_1,FIoOffsetAndLength *param_2,ulong64 *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_a8 [32];
  ulong64 *local_88;
  undefined1 local_78 [8];
  ulong64 *local_70;
  FIoOffsetAndLength *local_68;
  TSharedString<wchar_t> local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_70 = param_3;
  local_68 = param_2;
  if ((*(longlong *)param_1->Id == FIoChunkId::InvalidChunkId.Id._0_8_) &&
     (*(int *)(param_1->Id + 8) == FIoChunkId::InvalidChunkId.Id._8_4_)) {
    piVar5 = FMemory::Malloc(0x38,0);
    *piVar5 = 1;
    pwVar6 = (wchar_t *)(piVar5 + 2);
    piVar5[1] = 0x17;
    uVar4 = u_FIoChunkId_is_n._8_8_;
    *(undefined8 *)pwVar6 = u_FIoChunkId_is_n._0_8_;
    *(undefined8 *)(piVar5 + 4) = uVar4;
    uVar4 = u_FIoChunkId_is_n._24_8_;
    *(undefined8 *)(piVar5 + 6) = u_FIoChunkId_is_n._16_8_;
    *(undefined8 *)(piVar5 + 8) = uVar4;
    *(undefined8 *)(piVar5 + 10) = u_FIoChunkId_is_n._32_8_;
    piVar5[0xc] = u_FIoChunkId_is_n._40_4_;
    *(wchar_t *)(piVar5 + 0xd) = u_FIoChunkId_is_n[0x16];
    *(undefined2 *)((longlong)piVar5 + 0x36) = 0;
    (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
    (__return_storage_ptr__->StatusValue).ErrorCode = Ok;
    (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
    if (pwVar6 == (wchar_t *)0x0) {
      (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
      (__return_storage_ptr__->StatusValue).ErrorCode = InvalidParameter;
      (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
    }
    else {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = pwVar6;
      (__return_storage_ptr__->StatusValue).ErrorCode = InvalidParameter;
      (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FMemory::Free(piVar5);
      }
    }
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)&this->BackendsLock);
    iVar2 = (this->Backends).ArrayNum;
    pFVar7 = (this->Backends).AllocatorInstance.Data;
    pFVar1 = pFVar7 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((this->Backends).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TTuple<int,TSharedRef<IIoDispatcherBackend,1>_>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_78);
      }
      if (pFVar7 == pFVar1) {
        (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
        (__return_storage_ptr__->StatusValue).ErrorCode = NotFound;
        (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
        goto LAB_1417d812c;
      }
      local_88 = local_70;
      (**(code **)(**(longlong **)(pFVar7 + 8) + 0x40))
                (*(longlong **)(pFVar7 + 8),&local_60,param_1,local_68);
      if ((int)local_58 == 0) break;
      if (local_60.Chars != (wchar_t *)0x0) {
        pwVar6 = local_60.Chars + -4;
        LOCK();
        iVar3 = *(int *)pwVar6;
        *(int *)pwVar6 = *(int *)pwVar6 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FMemory::Free(pwVar6);
        }
      }
      pFVar7 = pFVar7 + 0x18;
    }
    (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
    (__return_storage_ptr__->StatusValue).ErrorCode = Ok;
    (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
    if (local_60.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_60.Chars + -4) = *(int *)(local_60.Chars + -4) + 1;
      UNLOCK();
    }
    (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = local_60.Chars;
    (__return_storage_ptr__->StatusValue).SystemErrorCode = local_58._4_4_;
    (__return_storage_ptr__->StatusValue).ErrorCode = Ok;
    *(undefined8 *)(__return_storage_ptr__->Value).Pad = local_50;
    if (local_60.Chars != (wchar_t *)0x0) {
      pwVar6 = local_60.Chars + -4;
      LOCK();
      iVar2 = *(int *)pwVar6;
      *(int *)pwVar6 = *(int *)pwVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FMemory::Free(pwVar6);
      }
    }
    local_60.Chars = (wchar_t *)0x0;
    local_58 = 1;
LAB_1417d812c:
    ReleaseSRWLockShared((PSRWLOCK)&this->BackendsLock);
  }
  return __return_storage_ptr__;
}

// Init @ 1417d9f90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall FIoDispatcherImpl::Init(FIoDispatcherImpl *this)

{
  return true;
}

// IssueBatchInternal @ 1417dee50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FIoDispatcherImpl::IssueBatchInternal
          (FIoDispatcherImpl *this,FIoBatch *param_1,FIoBatchImpl *param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TAtomic<unsigned_int> *pTVar2;
  FMutex *this_00;
  atomic<unsigned_char> aVar3;
  TAtomic<unsigned_int> TVar4;
  TAtomic<int> TVar5;
  int iVar6;
  FElement *pFVar7;
  FIoRequestAllocator *pFVar8;
  uchar *puVar9;
  BufCore *this_01;
  FBlock *pFVar10;
  FIoRequestImpl *pFVar11;
  ulong64 uVar12;
  code *pcVar13;
  FBlock *pFVar14;
  FElement *pFVar15;
  bool bVar16;
  char cVar17;
  int iVar18;
  IPlatformIoDispatcher *pIVar19;
  uchar *puVar20;
  LARGE_INTEGER local_res10 [2];
  FElement *local_res20;
  FMemScope local_48 [2];
  
  if (param_1->HeadRequest != (FIoRequestImpl *)0x0) {
    if ((param_1->TailRequest == (FIoRequestImpl *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Batch.TailRequest",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                            ,0x25e,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    AcquireSRWLockShared((PSRWLOCK)&this->BackendsLock);
    iVar6 = (this->Backends).ArrayNum;
    ReleaseSRWLockShared((PSRWLOCK)&this->BackendsLock);
    pFVar7 = (FElement *)param_1->HeadRequest;
    iVar18 = 0;
    if (0 < iVar6) {
      for (; pFVar7 != (FElement *)0x0; pFVar7 = *(FElement **)((pFVar7->Buffer).Pad + 0x28)) {
        *(FIoBatchImpl **)((pFVar7->Buffer).Pad + 0x80) = param_2;
        iVar18 = iVar18 + 1;
      }
      if (param_2 != (FIoBatchImpl *)0x0) {
        LOCK();
        param_2->UnfinishedRequestsCount =
             (TAtomic<unsigned_int>)((int)param_2->UnfinishedRequestsCount + iVar18);
        UNLOCK();
      }
      QueryPerformanceCounter(local_res10);
      for (pFVar11 = param_1->HeadRequest; pFVar11 != (FIoRequestImpl *)0x0;
          pFVar11 = pFVar11->NextRequest) {
        pFVar11->StartTime = (ulong64)local_res10[0];
      }
      this_00 = &this->WaitingMutex;
      LOCK();
      bVar16 = this_00->State == (atomic<unsigned_char>)0x0;
      if (bVar16) {
        this_00->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar16) {
        UE::FMutex::LockSlow(this_00);
      }
      TIntrusiveList<UE::Private::FIoRequestListTraits>::AddTail
                (&this->WaitingRequests,param_1->HeadRequest,param_1->TailRequest);
      LOCK();
      aVar3 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(this_00);
      }
      param_1->TailRequest = (FIoRequestImpl *)0x0;
      param_1->HeadRequest = (FIoRequestImpl *)0x0;
      if (((this->BackendContext).Object)->bIsMultiThreaded != false) {
        (**(code **)(((this->DispatcherEvent).Event)->_padding_ + 0x10))();
        return;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_void___cdecl_FIoDispatcherImpl::IssueBatchInternal(FIoBatch&___ptr64,FIoBatchImpl*___ptr64)___ptr64'
           ::__l34::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_void___cdecl_FIoDispatcherImpl::IssueBatchInternal(FIoBatch&___ptr64,FIoBatchImpl*___ptr64)___ptr64'
                               ::__l34::_thread_safe_static_guard_0__),
         `public:_void___cdecl_FIoDispatcherImpl::IssueBatchInternal(FIoBatch&___ptr64,FIoBatchImpl*___ptr64)___ptr64'
         ::__l34::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_void___cdecl_FIoDispatcherImpl::IssueBatchInternal(FIoBatch&___ptr64,FIoBatchImpl*___ptr64)___ptr64'
                        ::__l34::LLMScope_Name652,L"FileSystem/IODispatcher");
        _Init_thread_footer(&`public:_void___cdecl_FIoDispatcherImpl::IssueBatchInternal(FIoBatch&___ptr64,FIoBatchImpl*___ptr64)___ptr64'
                             ::__l34::_thread_safe_static_guard_0__);
      }
      FLLMScope::FLLMScope
                ((FLLMScope *)&local_res20,
                 `public:_void___cdecl_FIoDispatcherImpl::IssueBatchInternal(FIoBatch&___ptr64,FIoBatchImpl*___ptr64)___ptr64'
                 ::__l34::LLMScope_Name652,false,None,Default,true);
      FMemScope::FMemScope
                (local_48,&`public:_void___cdecl_FIoDispatcherImpl::IssueBatchInternal(FIoBatch&___ptr64,FIoBatchImpl*___ptr64)___ptr64'
                           ::__l34::LLMScope_Name652,true);
      ProcessIncomingRequests(this);
      pIVar19 = UE::FPlatformIoDispatcher::TryGet();
      if (pIVar19 != (IPlatformIoDispatcher *)0x0) {
        cVar17 = (**(code **)((longlong)*pIVar19 + 0x30))(pIVar19);
        while (cVar17 != '\0') {
          cVar17 = (**(code **)((longlong)*pIVar19 + 0x30))(pIVar19);
        }
      }
      uVar12 = this->PendingIoRequestsCount;
      while (uVar12 != 0) {
        ProcessCompletedRequests(this);
        uVar12 = this->PendingIoRequestsCount;
      }
      FMemScope::~FMemScope(local_48);
      FLLMScope::~FLLMScope((FLLMScope *)&local_res20);
      return;
    }
    while (pFVar15 = pFVar7, pFVar15 != (FElement *)0x0) {
      local_res20 = *(FElement **)((longlong)&pFVar15->Buffer + 0x28);
      CompleteRequest(this,(FIoRequestImpl *)pFVar15,NotFound);
      LOCK();
      pTVar2 = (TAtomic<unsigned_int> *)((longlong)&pFVar15->Buffer + 0xd0);
      TVar4 = *pTVar2;
      *pTVar2 = (TAtomic<unsigned_int>)((int)*pTVar2 + -1);
      UNLOCK();
      pFVar7 = local_res20;
      if (TVar4 == (TAtomic<unsigned_int>)0x1) {
        pFVar8 = *(FIoRequestAllocator **)((longlong)&pFVar15->Buffer + 0x70);
        if (*(longlong *)((pFVar15->Buffer).Pad + 0xa0) != 0) {
          puVar9 = *(uchar **)((pFVar15->Buffer).Pad + 200);
          puVar20 = (pFVar15->Buffer).Pad + 0xb0;
          if (puVar9 != (uchar *)0x0) {
            puVar20 = puVar9;
          }
          (**(code **)(*(longlong *)puVar20 + 0x10))();
        }
        if (((pFVar15->Buffer).Pad[0x98] != '\0') &&
           (this_01 = *(BufCore **)((pFVar15->Buffer).Pad + 0x90), this_01 != (BufCore *)0x0)) {
          FIoBuffer::BufCore::CheckRefCount(this_01);
          LOCK();
          piVar1 = &this_01->NumRefs;
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            FIoBuffer::BufCore::~BufCore(this_01);
            ::operator_delete(this_01,0x20);
          }
        }
        lpCriticalSection = &(pFVar8->BlockAllocator).CriticalSection;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        pFVar15->Next = (pFVar8->BlockAllocator).NextFree;
        piVar1 = &(pFVar8->BlockAllocator).NumElements;
        *piVar1 = *piVar1 + -1;
        (pFVar8->BlockAllocator).NextFree = pFVar15;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        LOCK();
        TVar5 = pFVar8->RefCount;
        pFVar8->RefCount = (TAtomic<int>)((int)pFVar8->RefCount + -1);
        UNLOCK();
        pFVar7 = local_res20;
        if (TVar5 == (TAtomic<int>)0x1) {
          pFVar14 = (pFVar8->BlockAllocator).Blocks;
          while (pFVar14 != (FBlock *)0x0) {
            pFVar10 = pFVar14->Next;
            ::operator_delete(pFVar14,0xf0010);
            pFVar14 = pFVar10;
          }
          (pFVar8->BlockAllocator).Blocks = (FBlock *)0x0;
          (pFVar8->BlockAllocator).NextFree = (FElement *)0x0;
          (pFVar8->BlockAllocator).NumElements = 0;
          DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          ::operator_delete(pFVar8,0x48);
          pFVar7 = local_res20;
        }
      }
    }
    param_1->TailRequest = (FIoRequestImpl *)0x0;
    param_1->HeadRequest = (FIoRequestImpl *)0x0;
  }
  if (param_2 != (FIoBatchImpl *)0x0) {
    CompleteBatch(this,param_2);
  }
  return;
}

// Mount @ 1417e4f30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FIoDispatcherImpl::Mount
          (FIoDispatcherImpl *this,TSharedRef<IIoDispatcherBackend,1> *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  IIoDispatcherBackend *pIVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  FIoDispatcherBackendContext *local_48;
  TReferenceControllerBase<1> *local_40;
  int local_38 [2];
  IIoDispatcherBackend *local_30;
  TReferenceControllerBase<1> *local_28;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                         ,0x1f8,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->bIsInitialized != false) {
    pIVar3 = param_1->Object;
    pcVar4 = *(code **)*pIVar3;
    local_48 = (this->BackendContext).Object;
    local_40 = (this->BackendContext).SharedReferenceCount.ReferenceController;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar4)(pIVar3,&local_48);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->BackendsLock);
  uVar10 = (this->Backends).ArrayNum;
  iVar9 = 0;
  if (0 < (int)uVar10) {
    do {
      iVar7 = (uVar10 >> 1) + iVar9;
      if (param_2 < *(int *)((this->Backends).AllocatorInstance.Data + (longlong)iVar7 * 0x18)) {
        iVar9 = iVar7 + (uVar10 & 1);
      }
      uVar5 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar5 != 0);
  }
  local_30 = param_1->Object;
  local_28 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_28->SharedReferenceCount = (atomic<int>)((int)local_28->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar8 = (this->Backends).AllocatorInstance.Data;
  local_38[0] = param_2;
  if (((pFVar8 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar8 + (longlong)(this->Backends).ArrayMax * 0x18))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->Backends).ArrayNum;
  piVar1 = &(this->Backends).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Backends).AllocatorInstance,piVar1);
  }
  (this->Backends).ArrayNum = iVar7 + 1;
  lVar2 = (longlong)iVar9 * 0x18;
  pFVar8 = (this->Backends).AllocatorInstance.Data + lVar2;
  memmove(pFVar8 + 0x18,pFVar8,(longlong)(iVar7 - iVar9) * 0x18);
  pFVar8 = (this->Backends).AllocatorInstance.Data;
  *(int *)(pFVar8 + lVar2) = local_38[0];
  *(IIoDispatcherBackend **)(pFVar8 + lVar2 + 8) = local_30;
  *(TReferenceControllerBase<1> **)(pFVar8 + lVar2 + 0x10) = local_28;
  if (local_28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_28->SharedReferenceCount = (atomic<int>)((int)local_28->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  ReleaseSRWLockExclusive((PSRWLOCK)&this->BackendsLock);
  if ((this->bIsInitialized != false) && (this->Thread == (FRunnableThread *)0x0)) {
    StartThread(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OpenMapped @ 1417e8340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001417e8523) */
/* WARNING: Removing unreachable block (ram,0x0001417e8530) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TIoStatusOr<FIoMappedRegion> * __thiscall
FIoDispatcherImpl::OpenMapped
          (FIoDispatcherImpl *this,TIoStatusOr<FIoMappedRegion> *__return_storage_ptr__,
          FIoChunkId *param_1,FIoReadOptions *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  FIoReadOptions *local_70;
  TSharedString<wchar_t> local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_70 = param_2;
  if ((*(longlong *)param_1->Id == FIoChunkId::InvalidChunkId.Id._0_8_) &&
     (*(int *)(param_1->Id + 8) == FIoChunkId::InvalidChunkId.Id._8_4_)) {
    piVar5 = FMemory::Malloc(0x38,0);
    *piVar5 = 1;
    pwVar6 = (wchar_t *)(piVar5 + 2);
    piVar5[1] = 0x17;
    uVar4 = u_FIoChunkId_is_n._8_8_;
    *(undefined8 *)pwVar6 = u_FIoChunkId_is_n._0_8_;
    *(undefined8 *)(piVar5 + 4) = uVar4;
    uVar4 = u_FIoChunkId_is_n._24_8_;
    *(undefined8 *)(piVar5 + 6) = u_FIoChunkId_is_n._16_8_;
    *(undefined8 *)(piVar5 + 8) = uVar4;
    *(undefined8 *)(piVar5 + 10) = u_FIoChunkId_is_n._32_8_;
    piVar5[0xc] = u_FIoChunkId_is_n._40_4_;
    *(wchar_t *)(piVar5 + 0xd) = u_FIoChunkId_is_n[0x16];
    *(undefined2 *)((longlong)piVar5 + 0x36) = 0;
    (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
    (__return_storage_ptr__->StatusValue).ErrorCode = Ok;
    (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
    if (pwVar6 == (wchar_t *)0x0) {
      (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
      (__return_storage_ptr__->StatusValue).ErrorCode = InvalidParameter;
      (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
    }
    else {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = pwVar6;
      (__return_storage_ptr__->StatusValue).ErrorCode = InvalidParameter;
      (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FMemory::Free(piVar5);
      }
    }
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)&this->BackendsLock);
    iVar2 = (this->Backends).ArrayNum;
    pFVar7 = (this->Backends).AllocatorInstance.Data;
    pFVar1 = pFVar7 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((this->Backends).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TTuple<int,TSharedRef<IIoDispatcherBackend,1>_>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_78);
      }
      if (pFVar7 == pFVar1) {
        (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
        (__return_storage_ptr__->StatusValue).ErrorCode = NotFound;
        (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
        goto LAB_1417e8552;
      }
      (**(code **)(**(longlong **)(pFVar7 + 8) + 0x50))
                (*(longlong **)(pFVar7 + 8),&local_68,param_1,local_70);
      if ((int)local_60 == 0) break;
      if (local_68.Chars != (wchar_t *)0x0) {
        pwVar6 = local_68.Chars + -4;
        LOCK();
        iVar3 = *(int *)pwVar6;
        *(int *)pwVar6 = *(int *)pwVar6 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FMemory::Free(pwVar6);
        }
      }
      pFVar7 = pFVar7 + 0x18;
    }
    (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
    (__return_storage_ptr__->StatusValue).ErrorCode = Ok;
    (__return_storage_ptr__->StatusValue).SystemErrorCode = 0;
    if (local_68.Chars != (wchar_t *)0x0) {
      LOCK();
      *(int *)(local_68.Chars + -4) = *(int *)(local_68.Chars + -4) + 1;
      UNLOCK();
    }
    (__return_storage_ptr__->StatusValue).ErrorMessage.Chars = local_68.Chars;
    (__return_storage_ptr__->StatusValue).SystemErrorCode = local_60._4_4_;
    (__return_storage_ptr__->StatusValue).ErrorCode = Ok;
    *(undefined8 *)(__return_storage_ptr__->Value).Pad = local_58;
    *(undefined8 *)((__return_storage_ptr__->Value).Pad + 8) = uStack_50;
    if (local_68.Chars != (wchar_t *)0x0) {
      pwVar6 = local_68.Chars + -4;
      LOCK();
      iVar2 = *(int *)pwVar6;
      *(int *)pwVar6 = *(int *)pwVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FMemory::Free(pwVar6);
      }
    }
    local_68.Chars = (wchar_t *)0x0;
    local_60 = 1;
LAB_1417e8552:
    ReleaseSRWLockShared((PSRWLOCK)&this->BackendsLock);
  }
  return __return_storage_ptr__;
}

// ProcessCompletedRequests @ 1417ec5b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FIoDispatcherImpl::ProcessCompletedRequests(FIoDispatcherImpl *this)

{
  FPlatformRWLock *SRWLock;
  TAtomic<unsigned_int> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TAtomic<EIoErrorCode> *pTVar2;
  int iVar3;
  int iVar4;
  TAtomic<unsigned_int> TVar5;
  TAtomic<int> TVar6;
  TAtomic<EIoErrorCode> TVar7;
  FIoBatchImpl *pFVar8;
  code *pcVar9;
  FIoRequestAllocator *pFVar10;
  BufCore *pBVar11;
  FBlock *pFVar12;
  FBlock *pFVar13;
  BufCore *this_00;
  FElement *this_01;
  undefined8 uVar14;
  FIoBuffer *pFVar15;
  int *piVar16;
  wchar_t *pwVar17;
  longlong *plVar18;
  uchar *puVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  FIoBuffer FVar22;
  FScriptContainerElement *pFVar23;
  EIoErrorCode EVar24;
  TSharedString<wchar_t> TVar25;
  EIoErrorCode EVar26;
  bool bVar27;
  undefined1 local_c4 [4];
  wchar_t *local_c0;
  undefined8 local_b8;
  BufCore *local_b0;
  FIoBatchImpl *local_a8;
  FIoDispatcherImpl *local_a0;
  uint local_98;
  longlong local_90;
  ulonglong local_88;
  BufCore *local_80;
  FScriptContainerElement *local_78;
  FElement *local_70;
  FScriptContainerElement *local_68;
  FIoBuffer local_50 [3];
  BufCore *local_38;
  
  SRWLock = &this->BackendsLock;
  local_a0 = this;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  local_98 = (this->Backends).ArrayNum;
  uVar20 = (ulonglong)(int)local_98;
  pFVar23 = (this->Backends).AllocatorInstance.Data;
  pFVar21 = pFVar23 + uVar20 * 0x18;
  local_68 = pFVar21;
  do {
    local_78 = pFVar23;
    if ((this->Backends).ArrayNum != (int)uVar20) {
      local_c4[0] = 0;
      `TCheckedPointerIterator<TTuple<int,TSharedRef<IIoDispatcherBackend,1>_>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_c4);
    }
    if (pFVar23 == pFVar21) {
                    /* WARNING: Could not recover jumptable at 0x0001417ecd13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      return;
    }
    this_01 = (FElement *)(**(code **)(**(longlong **)(pFVar23 + 8) + 0x18))();
    while (this_01 != (FElement *)0x0) {
      local_70 = *(FElement **)((longlong)&this_01->Buffer + 0x28);
      TVar7 = *(TAtomic<EIoErrorCode> *)((longlong)&this_01->Buffer + 0xd8);
      if (TVar7 == (TAtomic<EIoErrorCode>)0x0) {
        if (((*(bool *)((longlong)&this_01->Buffer + 0x98) == false) &&
            (UE::Logging::Private::BasicFatalLog
                       (&`private:_void___cdecl_FIoDispatcherImpl::ProcessCompletedRequests(void)___ptr64'
                         ::__l14::LOG_Static,(FLogCategoryBase *)&LogStreaming),
            *(bool *)((longlong)&this_01->Buffer + 0x98) == false)) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar27)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pBVar11 = (((TOptional<FIoBuffer> *)((longlong)&this_01->Buffer + 0x90))->TypedValue).
                  CorePtr.Reference;
        LOCK();
        this->TotalLoaded =
             this->TotalLoaded + (ulonglong)CONCAT14(pBVar11->DataSizeHigh,pBVar11->DataSizeLow);
        UNLOCK();
        pTVar2 = (TAtomic<EIoErrorCode> *)((longlong)&this_01->Buffer + 0xd4);
        LOCK();
        bVar27 = *pTVar2 == (TAtomic<EIoErrorCode>)0x1;
        if (bVar27) {
          *pTVar2 = (TAtomic<EIoErrorCode>)0x0;
        }
        UNLOCK();
        if (bVar27) {
          FIoRequestStats::OnRequestCompleted(&this->RequestStats,(FIoRequestImpl *)this_01);
          TVar25 = FIoStatus::Unknown.ErrorMessage;
          local_a8 = *(FIoBatchImpl **)((longlong)&this_01->Buffer + 0x80);
          if (*(longlong *)((longlong)&this_01->Buffer + 0xa0) != 0) {
            if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
              LOCK();
              *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
                   *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
              UNLOCK();
            }
            EVar26 = FIoStatus::Unknown.SystemErrorCode;
            EVar24 = FIoStatus::Unknown.ErrorCode;
            pFVar15 = FIoRequestImpl::GetBuffer((FIoRequestImpl *)this_01);
            FVar22.CorePtr.Reference = local_50[0].CorePtr.Reference;
            if (pFVar15 != local_50) {
              if (TVar25.Chars != (wchar_t *)0x0) {
                pwVar17 = TVar25.Chars + -4;
                LOCK();
                iVar3 = *(int *)pwVar17;
                *(int *)pwVar17 = *(int *)pwVar17 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  FMemory::Free(pwVar17);
                }
              }
              FVar22.CorePtr.Reference = local_50[0].CorePtr.Reference;
              if ((EVar24 == Ok) && (local_50[0].CorePtr.Reference != (BufCore *)0x0)) {
                FIoBuffer::BufCore::CheckRefCount((BufCore *)local_50[0].CorePtr.Reference);
                LOCK();
                piVar16 = (int *)((longlong)FVar22.CorePtr.Reference + 0xc);
                iVar3 = *piVar16;
                *piVar16 = *piVar16 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  FIoBuffer::BufCore::~BufCore((BufCore *)FVar22.CorePtr.Reference);
                  ::operator_delete((void *)FVar22.CorePtr.Reference,0x20);
                }
              }
              FVar22.CorePtr.Reference =
                   (TRefCountPtr<FIoBuffer::BufCore>)(pFVar15->CorePtr).Reference;
              if (FVar22.CorePtr.Reference != (BufCore *)0x0) {
                LOCK();
                ((BufCore *)FVar22.CorePtr.Reference)->NumRefs =
                     ((BufCore *)FVar22.CorePtr.Reference)->NumRefs + 1;
                UNLOCK();
              }
              TVar25.Chars = (wchar_t *)0x0;
              EVar24 = Ok;
              EVar26 = EVar24;
            }
            if (TVar25.Chars != (wchar_t *)0x0) {
              LOCK();
              *(int *)(TVar25.Chars + -4) = *(int *)(TVar25.Chars + -4) + 1;
              UNLOCK();
            }
            local_b8 = CONCAT44(EVar26,EVar24);
            if ((EVar24 == Ok) &&
               (local_b0 = (BufCore *)FVar22.CorePtr.Reference,
               FVar22.CorePtr.Reference != (BufCore *)0x0)) {
              LOCK();
              ((BufCore *)FVar22.CorePtr.Reference)->NumRefs =
                   ((BufCore *)FVar22.CorePtr.Reference)->NumRefs + 1;
              UNLOCK();
            }
            local_c0 = TVar25.Chars;
            UE::Core::Private::Function::CheckCallable
                      (*(void **)((longlong)&this_01->Buffer + 0xa0));
            plVar18 = *(longlong **)((longlong)&this_01->Buffer + 200);
            pcVar9 = *(code **)((longlong)&this_01->Buffer + 0xa0);
            if (plVar18 == (longlong *)0x0) {
              plVar18 = (longlong *)((longlong)&this_01->Buffer + 0xb0);
            }
            uVar14 = (**(code **)(*plVar18 + 8))();
            (*pcVar9)(uVar14,&local_c0);
            iVar3 = (int)local_b8;
            if (local_c0 != (wchar_t *)0x0) {
              pwVar17 = local_c0 + -4;
              LOCK();
              iVar4 = *(int *)pwVar17;
              *(int *)pwVar17 = *(int *)pwVar17 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                FMemory::Free(pwVar17);
              }
            }
            pBVar11 = local_b0;
            local_b8 = 1;
            local_c0 = (wchar_t *)0x0;
            if ((iVar3 == 0) && (local_b0 != (BufCore *)0x0)) {
              FIoBuffer::BufCore::CheckRefCount(local_b0);
              LOCK();
              piVar16 = &pBVar11->NumRefs;
              iVar3 = *piVar16;
              *piVar16 = *piVar16 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                FIoBuffer::BufCore::~BufCore(pBVar11);
                ::operator_delete(pBVar11,0x20);
              }
            }
            if (local_c0 != (wchar_t *)0x0) {
              pwVar17 = local_c0 + -4;
              LOCK();
              iVar3 = *(int *)pwVar17;
              *(int *)pwVar17 = *(int *)pwVar17 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                FMemory::Free(pwVar17);
              }
            }
            if (*(longlong *)((longlong)&this_01->Buffer + 0xa0) != 0) {
              plVar18 = *(longlong **)((longlong)&this_01->Buffer + 200);
              if (plVar18 == (longlong *)0x0) {
                plVar18 = (longlong *)((longlong)&this_01->Buffer + 0xb0);
              }
              (**(code **)(*plVar18 + 0x10))();
              *(undefined8 *)((longlong)&this_01->Buffer + 0xa0) = 0;
            }
            if (TVar25.Chars != (wchar_t *)0x0) {
              pwVar17 = TVar25.Chars + -4;
              LOCK();
              iVar3 = *(int *)pwVar17;
              *(int *)pwVar17 = *(int *)pwVar17 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                FMemory::Free(pwVar17);
              }
            }
            this = local_a0;
            if ((EVar24 == Ok) && (FVar22.CorePtr.Reference != (BufCore *)0x0)) {
              FIoBuffer::BufCore::CheckRefCount((BufCore *)FVar22.CorePtr.Reference);
              LOCK();
              piVar16 = &((BufCore *)FVar22.CorePtr.Reference)->NumRefs;
              iVar3 = *piVar16;
              *piVar16 = *piVar16 + -1;
              UNLOCK();
              this = local_a0;
              if (iVar3 == 1) {
                FIoBuffer::BufCore::~BufCore((BufCore *)FVar22.CorePtr.Reference);
                ::operator_delete((void *)FVar22.CorePtr.Reference,0x20);
                this = local_a0;
              }
            }
          }
          pFVar8 = local_a8;
          if (local_a8 != (FIoBatchImpl *)0x0) {
            if ((local_a8->UnfinishedRequestsCount == (TAtomic<unsigned_int>)0x0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Batch->UnfinishedRequestsCount",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                                    ,0x318,L""), bVar27)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            LOCK();
            pTVar1 = &pFVar8->UnfinishedRequestsCount;
            TVar5 = *pTVar1;
            *pTVar1 = (TAtomic<unsigned_int>)((int)*pTVar1 + -1);
            UNLOCK();
            goto joined_r0x0001417ecb9e;
          }
        }
      }
      else {
        pTVar2 = (TAtomic<EIoErrorCode> *)((longlong)&this_01->Buffer + 0xd4);
        LOCK();
        bVar27 = *pTVar2 == (TAtomic<EIoErrorCode>)0x1;
        if (bVar27) {
          *pTVar2 = TVar7;
        }
        UNLOCK();
        if (bVar27) {
          FIoRequestStats::OnRequestCompleted(&this->RequestStats,(FIoRequestImpl *)this_01);
          TVar25 = FIoStatus::Unknown.ErrorMessage;
          pFVar8 = *(FIoBatchImpl **)((longlong)&this_01->Buffer + 0x80);
          if (*(longlong *)((longlong)&this_01->Buffer + 0xa0) != 0) {
            EVar24 = FIoStatus::Unknown.ErrorCode;
            if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
              LOCK();
              *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
                   *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
              EVar24 = FIoStatus::Unknown.ErrorCode;
              UNLOCK();
              pwVar17 = TVar25.Chars + -4;
              LOCK();
              iVar3 = *(int *)pwVar17;
              *(int *)pwVar17 = *(int *)pwVar17 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                FMemory::Free(pwVar17);
              }
            }
            pBVar11 = local_38;
            if ((EVar24 == Ok) && (local_38 != (BufCore *)0x0)) {
              FIoBuffer::BufCore::CheckRefCount(local_38);
              LOCK();
              piVar16 = &pBVar11->NumRefs;
              iVar3 = *piVar16;
              *piVar16 = *piVar16 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                FIoBuffer::BufCore::~BufCore(pBVar11);
                ::operator_delete(pBVar11,0x20);
              }
            }
            local_90 = 0;
            local_88 = (ulonglong)(uint)TVar7;
            UE::Core::Private::Function::CheckCallable
                      (*(void **)((longlong)&this_01->Buffer + 0xa0));
            plVar18 = *(longlong **)((longlong)&this_01->Buffer + 200);
            pcVar9 = *(code **)((longlong)&this_01->Buffer + 0xa0);
            if (plVar18 == (longlong *)0x0) {
              plVar18 = (longlong *)((longlong)&this_01->Buffer + 0xb0);
            }
            uVar14 = (**(code **)(*plVar18 + 8))();
            (*pcVar9)(uVar14,&local_90);
            iVar3 = (int)local_88;
            if (local_90 != 0) {
              piVar16 = (int *)(local_90 + -8);
              LOCK();
              iVar4 = *piVar16;
              *piVar16 = *piVar16 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                FMemory::Free(piVar16);
              }
            }
            this_00 = local_80;
            local_88 = 1;
            local_90 = 0;
            if ((iVar3 == 0) && (local_80 != (BufCore *)0x0)) {
              FIoBuffer::BufCore::CheckRefCount(local_80);
              LOCK();
              piVar16 = &this_00->NumRefs;
              iVar3 = *piVar16;
              *piVar16 = *piVar16 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                FIoBuffer::BufCore::~BufCore(this_00);
                ::operator_delete(this_00,0x20);
              }
            }
            if (local_90 != 0) {
              piVar16 = (int *)(local_90 + -8);
              LOCK();
              iVar3 = *piVar16;
              *piVar16 = *piVar16 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                FMemory::Free(piVar16);
              }
            }
            if (*(longlong *)((longlong)&this_01->Buffer + 0xa0) != 0) {
              plVar18 = *(longlong **)((longlong)&this_01->Buffer + 200);
              if (plVar18 == (longlong *)0x0) {
                plVar18 = (longlong *)((longlong)&this_01->Buffer + 0xb0);
              }
              (**(code **)(*plVar18 + 0x10))();
              *(undefined8 *)((longlong)&this_01->Buffer + 0xa0) = 0;
            }
            if ((TVar7 == (TAtomic<EIoErrorCode>)0x0) && (pBVar11 != (BufCore *)0x0)) {
              FIoBuffer::BufCore::CheckRefCount(pBVar11);
              LOCK();
              piVar16 = &pBVar11->NumRefs;
              iVar3 = *piVar16;
              *piVar16 = *piVar16 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                FIoBuffer::BufCore::~BufCore(pBVar11);
                ::operator_delete(pBVar11,0x20);
              }
            }
          }
          if (pFVar8 != (FIoBatchImpl *)0x0) {
            if ((pFVar8->UnfinishedRequestsCount == (TAtomic<unsigned_int>)0x0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Batch->UnfinishedRequestsCount",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                                    ,0x318,L""), bVar27)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            LOCK();
            pTVar1 = &pFVar8->UnfinishedRequestsCount;
            TVar5 = *pTVar1;
            *pTVar1 = (TAtomic<unsigned_int>)((int)*pTVar1 + -1);
            UNLOCK();
joined_r0x0001417ecb9e:
            if (TVar5 == (TAtomic<unsigned_int>)0x1) {
              CompleteBatch(this,pFVar8);
            }
          }
        }
      }
      LOCK();
      pTVar1 = (TAtomic<unsigned_int> *)((longlong)&this_01->Buffer + 0xd0);
      TVar5 = *pTVar1;
      *pTVar1 = (TAtomic<unsigned_int>)((int)*pTVar1 + -1);
      UNLOCK();
      if (TVar5 == (TAtomic<unsigned_int>)0x1) {
        pFVar10 = *(FIoRequestAllocator **)((longlong)&this_01->Buffer + 0x70);
        if (*(longlong *)((longlong)&this_01->Buffer + 0xa0) != 0) {
          puVar19 = *(uchar **)((this_01->Buffer).Pad + 200);
          if (puVar19 == (uchar *)0x0) {
            puVar19 = (this_01->Buffer).Pad + 0xb0;
          }
          (**(code **)(*(longlong *)puVar19 + 0x10))();
        }
        if (((this_01->Buffer).Pad[0x98] != '\0') &&
           (pBVar11 = *(BufCore **)((this_01->Buffer).Pad + 0x90), pBVar11 != (BufCore *)0x0)) {
          FIoBuffer::BufCore::CheckRefCount(pBVar11);
          LOCK();
          piVar16 = &pBVar11->NumRefs;
          iVar3 = *piVar16;
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FIoBuffer::BufCore::~BufCore(pBVar11);
            ::operator_delete(pBVar11,0x20);
          }
        }
        lpCriticalSection = &(pFVar10->BlockAllocator).CriticalSection;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        this_01->Next = (pFVar10->BlockAllocator).NextFree;
        piVar16 = &(pFVar10->BlockAllocator).NumElements;
        *piVar16 = *piVar16 + -1;
        (pFVar10->BlockAllocator).NextFree = this_01;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        LOCK();
        TVar6 = pFVar10->RefCount;
        pFVar10->RefCount = (TAtomic<int>)((int)pFVar10->RefCount + -1);
        UNLOCK();
        if (TVar6 == (TAtomic<int>)0x1) {
          pFVar13 = (pFVar10->BlockAllocator).Blocks;
          while (pFVar13 != (FBlock *)0x0) {
            pFVar12 = pFVar13->Next;
            ::operator_delete(pFVar13,0xf0010);
            pFVar13 = pFVar12;
          }
          (pFVar10->BlockAllocator).Blocks = (FBlock *)0x0;
          (pFVar10->BlockAllocator).NextFree = (FElement *)0x0;
          (pFVar10->BlockAllocator).NumElements = 0;
          DeleteCriticalSection((LPCRITICAL_SECTION)&(pFVar10->BlockAllocator).CriticalSection);
          ::operator_delete(pFVar10,0x48);
        }
      }
      this->PendingIoRequestsCount = this->PendingIoRequestsCount - 1;
      this_01 = local_70;
      pFVar21 = local_68;
    }
    uVar20 = (ulonglong)local_98;
    pFVar23 = local_78 + 0x18;
  } while( true );
}

// ProcessIncomingRequests @ 1417ed780

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FIoDispatcherImpl::ProcessIncomingRequests(FIoDispatcherImpl *this)

{
  FWindowsRecursiveMutex *pFVar1;
  wchar_t *pwVar2;
  TAtomic<unsigned_int> *pTVar3;
  FPlatformRWLock *SRWLock;
  int *piVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  FMutex *this_00;
  FIoRequestStats *this_01;
  atomic<unsigned_int> *paVar5;
  FScriptContainerElement *pFVar6;
  FMutex FVar7;
  atomic<unsigned_char> aVar8;
  int iVar9;
  TAtomic<unsigned_int> TVar10;
  int iVar11;
  FElement *pFVar12;
  longlong *plVar13;
  FIoRequestAllocator *pFVar14;
  FIoBatchImpl *pFVar15;
  BufCore *pBVar16;
  void *pvVar17;
  code *pcVar18;
  void *pvVar19;
  TSharedString<wchar_t> TVar20;
  uint uVar21;
  FIoDispatcherImpl *pFVar22;
  bool bVar23;
  bool bVar24;
  ushort uVar25;
  FElement *pFVar26;
  FElement *pFVar27;
  longlong lVar28;
  undefined8 uVar29;
  FElement *pFVar30;
  atomic<unsigned_int> aVar31;
  int *piVar32;
  uchar *puVar33;
  uchar *puVar34;
  EIoErrorCode EVar35;
  int iVar36;
  FScriptContainerElement *pFVar37;
  atomic<unsigned_char> *this_02;
  undefined1 local_104 [4];
  uint local_100;
  FIoDispatcherImpl *local_f8;
  FElement *local_f0;
  FElement *local_e8;
  FElement *local_e0;
  FElement *local_d8;
  FElement *pFStack_d0;
  FElement *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  BufCore *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  BufCore *local_98;
  FScriptContainerElement *local_90;
  undefined8 uStack_88;
  FScriptContainerElement *local_80;
  undefined8 uStack_78;
  atomic<unsigned_char> *local_70;
  FElement *local_68;
  FElement *local_60;
  BufCore *local_48;
  BufCore *local_30;
  
  pFVar26 = (FElement *)0x0;
  this_02 = &(this->WaitingMutex).State;
  local_f0 = (FElement *)0x0;
  local_e0 = (FElement *)0x0;
  this_00 = &this->UpdateMutex;
  pFVar30 = pFVar26;
  local_f8 = this;
  local_70 = this_02;
LAB_1417ed7d4:
  LOCK();
  FVar7.State = *this_02;
  if (FVar7.State == (atomic<unsigned_char>)0x0) {
    *this_02 = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (FVar7.State != (atomic<unsigned_char>)0x0) {
    UE::FMutex::LockSlow((FMutex *)this_02);
  }
  pFVar12 = (FElement *)(this->WaitingRequests).Head;
  if (pFVar12 != (FElement *)0x0) {
    pFVar27 = (FElement *)(this->WaitingRequests).Tail;
    if ((pFVar27 == (FElement *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("First && Last",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                            ,0x83,L""), bVar23)) {
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    if (((*(longlong *)((pFVar12->Buffer).Pad + 0x28) == 0) && (pFVar12 != pFVar27)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeTraits::GetNext(First) != nullptr || First == Last",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                            ,0x84,L""), bVar23)) {
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    if (pFVar30 == (FElement *)0x0) {
      if ((pFVar26 != (FElement *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Head == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                              ,0x8e,L""), bVar23)) {
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
    }
    else {
      if ((pFVar26 == (FElement *)0x0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Head != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                              ,0x88,L""), bVar23)) {
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      *(FElement **)((pFVar30->Buffer).Pad + 0x28) = pFVar12;
      pFVar12 = local_f0;
    }
    local_f0 = pFVar12;
    (this->WaitingRequests).Tail = (FIoRequestImpl *)0x0;
    (this->WaitingRequests).Head = (FIoRequestImpl *)0x0;
    local_e0 = pFVar27;
  }
  LOCK();
  aVar8 = *this_02;
  *this_02 = (atomic<unsigned_char>)((char)*this_02 + -1);
  UNLOCK();
  if (((byte)aVar8 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)this_02);
  }
  LOCK();
  bVar23 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar23) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar23) {
    UE::FMutex::LockSlow(this_00);
  }
  local_80 = (local_f8->RequestsToCancel).AllocatorInstance.Data;
  uStack_78._0_4_ = (local_f8->RequestsToCancel).ArrayNum;
  uStack_78._4_4_ = (local_f8->RequestsToCancel).ArrayMax;
  (local_f8->RequestsToCancel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (local_f8->RequestsToCancel).ArrayNum = 0;
  (local_f8->RequestsToCancel).ArrayMax = 0;
  local_90 = (local_f8->RequestsToReprioritize).AllocatorInstance.Data;
  uStack_88._0_4_ = (local_f8->RequestsToReprioritize).ArrayNum;
  uStack_88._4_4_ = (local_f8->RequestsToReprioritize).ArrayMax;
  (local_f8->RequestsToReprioritize).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (local_f8->RequestsToReprioritize).ArrayNum = 0;
  (local_f8->RequestsToReprioritize).ArrayMax = 0;
  LOCK();
  aVar8 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar8 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(this_00);
  }
  pFVar6 = local_80 + (longlong)(int)uStack_78 * 8;
  for (pFVar37 = local_80; pFVar37 != pFVar6; pFVar37 = pFVar37 + 8) {
    pFVar26 = *(FElement **)pFVar37;
    if (*(int *)((pFVar26->Buffer).Pad + 0xd8) != 3) {
      plVar13 = *(longlong **)((pFVar26->Buffer).Pad + 0x78);
      (pFVar26->Buffer).Pad[0xd8] = '\x03';
      (pFVar26->Buffer).Pad[0xd9] = '\0';
      (pFVar26->Buffer).Pad[0xda] = '\0';
      (pFVar26->Buffer).Pad[0xdb] = '\0';
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x20))();
      }
    }
    LOCK();
    puVar34 = (pFVar26->Buffer).Pad + 0xd0;
    iVar36 = *(int *)puVar34;
    *(int *)puVar34 = *(int *)puVar34 + -1;
    UNLOCK();
    if (iVar36 == 1) {
      pFVar14 = *(FIoRequestAllocator **)((pFVar26->Buffer).Pad + 0x70);
      if (*(longlong *)((pFVar26->Buffer).Pad + 0xa0) != 0) {
        puVar34 = *(uchar **)((pFVar26->Buffer).Pad + 200);
        if (puVar34 == (uchar *)0x0) {
          puVar34 = (pFVar26->Buffer).Pad + 0xb0;
        }
        (**(code **)(*(longlong *)puVar34 + 0x10))();
      }
      TOptional<FIoBuffer>::~TOptional<FIoBuffer>
                ((TOptional<FIoBuffer> *)((pFVar26->Buffer).Pad + 0x90));
      pFVar1 = &(pFVar14->BlockAllocator).CriticalSection;
      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_1417ee539;
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      pFVar26->Next = (pFVar14->BlockAllocator).NextFree;
      piVar32 = &(pFVar14->BlockAllocator).NumElements;
      *piVar32 = *piVar32 + -1;
      (pFVar14->BlockAllocator).NextFree = pFVar26;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      FIoRequestAllocator::ReleaseRef(pFVar14);
    }
  }
  pFVar6 = local_90 + (longlong)(int)uStack_88 * 8;
  pFVar37 = local_90;
  do {
    if (pFVar37 == pFVar6) {
      if (local_f0 == (FElement *)0x0) {
        if (local_90 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90);
        }
        if (local_80 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80);
        }
        return;
      }
      pFVar30 = (FElement *)0x0;
      local_c8 = (FElement *)0x0;
      local_e8 = (FElement *)0x0;
      pFVar26 = pFVar30;
      do {
        local_100 = (uint)pFVar30;
        while( true ) {
          while( true ) {
            pFVar12 = local_f0;
            if (local_f0 == (FElement *)0x0) {
              this = local_f8;
              if ((int)pFVar30 < 1) goto LAB_1417ee4bd;
              bVar23 = -1 < CpuChannel->Enabled;
              if (bVar23) {
                FCpuProfilerTrace::GetOrCreateSpecId
                          (&`private:_void___cdecl_FIoDispatcherImpl::ProcessIncomingRequests(void)___ptr64'
                            ::__l44::__CpuProfilerEventSpecId870,"ResolveRequest",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                           ,0x366);
                FCpuProfilerTrace::OutputBeginEvent
                          (`private:_void___cdecl_FIoDispatcherImpl::ProcessIncomingRequests(void)___ptr64'
                           ::__l44::__CpuProfilerEventSpecId870);
              }
              pFVar22 = local_f8;
              SRWLock = &local_f8->BackendsLock;
              AcquireSRWLockShared((PSRWLOCK)SRWLock);
              iVar36 = (pFVar22->Backends).ArrayNum;
              pFVar37 = (pFVar22->Backends).AllocatorInstance.Data;
              pFVar6 = pFVar37 + (longlong)iVar36 * 0x18;
              goto LAB_1417ee050;
            }
            pFVar30 = *(FElement **)((local_f0->Buffer).Pad + 0x28);
            (pFVar12->Buffer).Pad[0x28] = '\0';
            (pFVar12->Buffer).Pad[0x29] = '\0';
            (pFVar12->Buffer).Pad[0x2a] = '\0';
            (pFVar12->Buffer).Pad[0x2b] = '\0';
            (pFVar12->Buffer).Pad[0x2c] = '\0';
            (pFVar12->Buffer).Pad[0x2d] = '\0';
            (pFVar12->Buffer).Pad[0x2e] = '\0';
            (pFVar12->Buffer).Pad[0x2f] = '\0';
            pFVar27 = (FElement *)0x0;
            if (pFVar30 != (FElement *)0x0) {
              pFVar27 = local_e0;
            }
            this_01 = &local_f8->RequestStats;
            lVar28 = this_01->PendingIoRequests + 1;
            this_01->PendingIoRequests = lVar28;
            local_f0 = pFVar30;
            local_e0 = pFVar27;
            if (((local_f8->RequestStats).PendingIoRequestsCounter.Value != lVar28) &&
               ((local_f8->RequestStats).PendingIoRequestsCounter.Value = lVar28,
               -1 < CountersChannel->Enabled)) {
              if ((local_f8->RequestStats).PendingIoRequestsCounter.CounterId ==
                  (atomic<unsigned_int>)0x0) {
                uVar25 = FCountersTrace::OutputInitCounter
                                   ((local_f8->RequestStats).PendingIoRequestsCounter.CounterName,
                                    TraceCounterType_Int,
                                    (local_f8->RequestStats).PendingIoRequestsCounter.CounterFlags &
                                    0xf);
                paVar5 = &(local_f8->RequestStats).PendingIoRequestsCounter.CounterId;
                LOCK();
                if (*paVar5 == (atomic<unsigned_int>)0x0) {
                  aVar31._2_2_ = 0;
                  aVar31._0_2_ = uVar25;
                  *paVar5 = aVar31;
                }
                UNLOCK();
              }
              FCountersTrace::OutputSetValue
                        (SUB42((local_f8->RequestStats).PendingIoRequestsCounter.CounterId,0),
                         (local_f8->RequestStats).PendingIoRequestsCounter.Value);
            }
            if (*(int *)((pFVar12->Buffer).Pad + 0xd8) != 3) break;
            puVar34 = (pFVar12->Buffer).Pad + 0xd4;
            LOCK();
            if (*(int *)puVar34 == 1) {
              puVar34[0] = '\x03';
              puVar34[1] = '\0';
              puVar34[2] = '\0';
              puVar34[3] = '\0';
            }
            UNLOCK();
            if (*(int *)puVar34 == 1) {
              FIoRequestStats::OnRequestCompleted(this_01,(FIoRequestImpl *)pFVar12);
              TVar20 = FIoStatus::Unknown.ErrorMessage;
              pFVar15 = *(FIoBatchImpl **)((pFVar12->Buffer).Pad + 0x80);
              if (*(longlong *)((pFVar12->Buffer).Pad + 0xa0) != 0) {
                EVar35 = FIoStatus::Unknown.ErrorCode;
                if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
                  LOCK();
                  *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
                       *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
                  EVar35 = FIoStatus::Unknown.ErrorCode;
                  UNLOCK();
                  pwVar2 = TVar20.Chars + -4;
                  LOCK();
                  iVar36 = *(int *)pwVar2;
                  *(int *)pwVar2 = *(int *)pwVar2 + -1;
                  UNLOCK();
                  if (iVar36 == 1) {
                    FMemory::Free(pwVar2);
                  }
                }
                pBVar16 = local_48;
                if ((EVar35 == Ok) && (local_48 != (BufCore *)0x0)) {
                  FIoBuffer::BufCore::CheckRefCount(local_48);
                  LOCK();
                  piVar32 = &pBVar16->NumRefs;
                  iVar36 = *piVar32;
                  *piVar32 = *piVar32 + -1;
                  UNLOCK();
                  if (iVar36 == 1) {
                    FIoBuffer::BufCore::~BufCore(pBVar16);
                    ::operator_delete(pBVar16,0x20);
                  }
                }
                local_c0 = 0;
                local_b8 = 3;
                UE::Core::Private::Function::CheckCallable(*(void **)((pFVar12->Buffer).Pad + 0xa0))
                ;
                puVar34 = *(uchar **)((pFVar12->Buffer).Pad + 200);
                pcVar18 = *(code **)((pFVar12->Buffer).Pad + 0xa0);
                puVar33 = (pFVar12->Buffer).Pad + 0xb0;
                if (puVar34 != (uchar *)0x0) {
                  puVar33 = puVar34;
                }
                uVar29 = (**(code **)(*(longlong *)puVar33 + 8))();
                (*pcVar18)(uVar29);
                iVar36 = (int)local_b8;
                if (local_c0 != 0) {
                  piVar32 = (int *)(local_c0 + -8);
                  LOCK();
                  iVar9 = *piVar32;
                  *piVar32 = *piVar32 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    FMemory::Free(piVar32);
                  }
                }
                pBVar16 = local_b0;
                local_b8 = 1;
                local_c0 = 0;
                if ((iVar36 == 0) && (local_b0 != (BufCore *)0x0)) {
                  FIoBuffer::BufCore::CheckRefCount(local_b0);
                  LOCK();
                  piVar32 = &pBVar16->NumRefs;
                  iVar36 = *piVar32;
                  *piVar32 = *piVar32 + -1;
                  UNLOCK();
                  if (iVar36 == 1) {
                    FIoBuffer::BufCore::~BufCore(pBVar16);
                    ::operator_delete(pBVar16,0x20);
                  }
                }
                if (local_c0 != 0) {
                  piVar32 = (int *)(local_c0 + -8);
                  LOCK();
                  iVar36 = *piVar32;
                  *piVar32 = *piVar32 + -1;
                  UNLOCK();
                  if (iVar36 == 1) {
                    FMemory::Free(piVar32);
                  }
                }
                if (*(longlong *)((pFVar12->Buffer).Pad + 0xa0) != 0) {
                  puVar34 = *(uchar **)((pFVar12->Buffer).Pad + 200);
                  if (puVar34 == (uchar *)0x0) {
                    puVar34 = (pFVar12->Buffer).Pad + 0xb0;
                  }
                  (**(code **)(*(longlong *)puVar34 + 0x10))();
                  (pFVar12->Buffer).Pad[0xa0] = '\0';
                  (pFVar12->Buffer).Pad[0xa1] = '\0';
                  (pFVar12->Buffer).Pad[0xa2] = '\0';
                  (pFVar12->Buffer).Pad[0xa3] = '\0';
                  (pFVar12->Buffer).Pad[0xa4] = '\0';
                  (pFVar12->Buffer).Pad[0xa5] = '\0';
                  (pFVar12->Buffer).Pad[0xa6] = '\0';
                  (pFVar12->Buffer).Pad[0xa7] = '\0';
                }
              }
              if (pFVar15 != (FIoBatchImpl *)0x0) {
                if ((pFVar15->UnfinishedRequestsCount == (TAtomic<unsigned_int>)0x0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Batch->UnfinishedRequestsCount",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                                        ,0x318,L""), bVar23)) {
                  pcVar18 = (code *)swi(3);
                  (*pcVar18)();
                  return;
                }
                LOCK();
                pTVar3 = &pFVar15->UnfinishedRequestsCount;
                TVar10 = *pTVar3;
                *pTVar3 = (TAtomic<unsigned_int>)((int)*pTVar3 + -1);
                UNLOCK();
                if (TVar10 == (TAtomic<unsigned_int>)0x1) {
                  CompleteBatch(local_f8,pFVar15);
                }
              }
            }
            LOCK();
            puVar34 = (pFVar12->Buffer).Pad + 0xd0;
            iVar36 = *(int *)puVar34;
            *(int *)puVar34 = *(int *)puVar34 + -1;
            UNLOCK();
            pFVar30 = (FElement *)(ulonglong)local_100;
            if (iVar36 == 1) {
              pFVar14 = *(FIoRequestAllocator **)((pFVar12->Buffer).Pad + 0x70);
              if (*(longlong *)((pFVar12->Buffer).Pad + 0xa0) != 0) {
                puVar34 = *(uchar **)((pFVar12->Buffer).Pad + 200);
                if (puVar34 == (uchar *)0x0) {
                  puVar34 = (pFVar12->Buffer).Pad + 0xb0;
                }
                (**(code **)(*(longlong *)puVar34 + 0x10))();
              }
              TOptional<FIoBuffer>::~TOptional<FIoBuffer>
                        ((TOptional<FIoBuffer> *)((pFVar12->Buffer).Pad + 0x90));
              pFVar1 = &(pFVar14->BlockAllocator).CriticalSection;
              if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_1417ee539;
              EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
              pFVar12->Next = (pFVar14->BlockAllocator).NextFree;
              piVar32 = &(pFVar14->BlockAllocator).NumElements;
              *piVar32 = *piVar32 + -1;
              (pFVar14->BlockAllocator).NextFree = pFVar12;
              LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
              FIoRequestAllocator::ReleaseRef(pFVar14);
              pFVar30 = (FElement *)(ulonglong)local_100;
            }
          }
          if ((*(longlong *)((pFVar12->Buffer).Pad + 0x38) != FIoChunkId::InvalidChunkId.Id._0_8_)
             || (*(int *)((pFVar12->Buffer).Pad + 0x40) != FIoChunkId::InvalidChunkId.Id._8_4_))
          break;
          CompleteRequest(local_f8,(FIoRequestImpl *)pFVar12,NotFound);
          LOCK();
          puVar34 = (pFVar12->Buffer).Pad + 0xd0;
          iVar36 = *(int *)puVar34;
          *(int *)puVar34 = *(int *)puVar34 + -1;
          UNLOCK();
          pFVar30 = (FElement *)(ulonglong)local_100;
          if (iVar36 == 1) {
            pFVar14 = *(FIoRequestAllocator **)((pFVar12->Buffer).Pad + 0x70);
            if (*(longlong *)((pFVar12->Buffer).Pad + 0xa0) != 0) {
              puVar34 = *(uchar **)((pFVar12->Buffer).Pad + 200);
              if (puVar34 == (uchar *)0x0) {
                puVar34 = (pFVar12->Buffer).Pad + 0xb0;
              }
              (**(code **)(*(longlong *)puVar34 + 0x10))();
            }
            TOptional<FIoBuffer>::~TOptional<FIoBuffer>
                      ((TOptional<FIoBuffer> *)((pFVar12->Buffer).Pad + 0x90));
            pFVar1 = &(pFVar14->BlockAllocator).CriticalSection;
            if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_1417ee539;
            EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
            pFVar12->Next = (pFVar14->BlockAllocator).NextFree;
            piVar32 = &(pFVar14->BlockAllocator).NumElements;
            *piVar32 = *piVar32 + -1;
            (pFVar14->BlockAllocator).NextFree = pFVar12;
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
            FIoRequestAllocator::ReleaseRef(pFVar14);
            pFVar30 = (FElement *)(ulonglong)local_100;
          }
        }
        if ((*(longlong *)((pFVar12->Buffer).Pad + 0x28) != 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                ,0x72,L""), bVar23)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pFVar30 = local_e8;
        if (local_e8 == (FElement *)0x0) {
          bVar23 = pFVar26 != (FElement *)0x0;
          pFVar26 = pFVar12;
          pFVar30 = pFVar12;
          if ((bVar23) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Head == nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                  ,0x7c,L""), bVar23)) {
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
        }
        else {
          if ((pFVar26 == (FElement *)0x0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Head != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                  ,0x76,L""), bVar23)) {
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          *(FElement **)((pFVar30->Buffer).Pad + 0x28) = pFVar12;
          pFVar30 = local_c8;
        }
        local_c8 = pFVar30;
        pFVar30 = (FElement *)(ulonglong)(local_100 + 1);
        local_e8 = pFVar12;
      } while( true );
    }
    pFVar26 = *(FElement **)pFVar37;
    plVar13 = *(longlong **)((pFVar26->Buffer).Pad + 0x78);
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x28))();
    }
    LOCK();
    puVar34 = (pFVar26->Buffer).Pad + 0xd0;
    iVar36 = *(int *)puVar34;
    *(int *)puVar34 = *(int *)puVar34 + -1;
    UNLOCK();
    if (iVar36 == 1) {
      pFVar14 = *(FIoRequestAllocator **)((pFVar26->Buffer).Pad + 0x70);
      if (*(longlong *)((pFVar26->Buffer).Pad + 0xa0) != 0) {
        puVar34 = *(uchar **)((pFVar26->Buffer).Pad + 200);
        if (puVar34 == (uchar *)0x0) {
          puVar34 = (pFVar26->Buffer).Pad + 0xb0;
        }
        (**(code **)(*(longlong *)puVar34 + 0x10))();
      }
      TOptional<FIoBuffer>::~TOptional<FIoBuffer>
                ((TOptional<FIoBuffer> *)((pFVar26->Buffer).Pad + 0x90));
      pFVar1 = &(pFVar14->BlockAllocator).CriticalSection;
      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_1417ee539:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      pFVar26->Next = (pFVar14->BlockAllocator).NextFree;
      piVar32 = &(pFVar14->BlockAllocator).NumElements;
      *piVar32 = *piVar32 + -1;
      (pFVar14->BlockAllocator).NextFree = pFVar26;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      FIoRequestAllocator::ReleaseRef(pFVar14);
    }
    pFVar37 = pFVar37 + 8;
  } while( true );
LAB_1417ee050:
  pFStack_d0 = (FElement *)0x0;
  local_d8 = (FElement *)0x0;
  if ((pFVar22->Backends).ArrayNum != iVar36) {
    local_104[0] = 0;
    `TCheckedPointerIterator<TTuple<int,TSharedRef<IIoDispatcherBackend,1>_>,int,0>::operator!='::
    __l2::<lambda_1>::operator()(local_104);
  }
  pFVar26 = local_c8;
  if (pFVar37 == pFVar6) goto LAB_1417ee0e0;
  for (; pFVar26 != (FElement *)0x0; pFVar26 = *(FElement **)((pFVar26->Buffer).Pad + 0x28)) {
    *(undefined8 *)((pFVar26->Buffer).Pad + 0x78) = *(undefined8 *)(pFVar37 + 8);
  }
  local_68 = local_c8;
  local_60 = local_e8;
  (**(code **)(**(longlong **)(pFVar37 + 8) + 0x10))();
  local_c8 = local_d8;
  local_e8 = pFStack_d0;
  if (local_d8 == (FElement *)0x0) goto LAB_1417ee0e0;
  pFVar37 = pFVar37 + 0x18;
  goto LAB_1417ee050;
LAB_1417ee0e0:
  this_02 = local_70;
  iVar36 = 0;
  local_d8 = local_c8;
  pFStack_d0 = local_e8;
  while (pFVar26 = local_d8, uVar21 = local_100, local_d8 != (FElement *)0x0) {
    pFVar30 = *(FElement **)((local_d8->Buffer).Pad + 0x28);
    if (pFVar30 == (FElement *)0x0) {
      pFStack_d0 = (FElement *)0x0;
    }
    (pFVar26->Buffer).Pad[0x28] = '\0';
    (pFVar26->Buffer).Pad[0x29] = '\0';
    (pFVar26->Buffer).Pad[0x2a] = '\0';
    (pFVar26->Buffer).Pad[0x2b] = '\0';
    (pFVar26->Buffer).Pad[0x2c] = '\0';
    (pFVar26->Buffer).Pad[0x2d] = '\0';
    (pFVar26->Buffer).Pad[0x2e] = '\0';
    (pFVar26->Buffer).Pad[0x2f] = '\0';
    (pFVar26->Buffer).Pad[0x78] = '\0';
    (pFVar26->Buffer).Pad[0x79] = '\0';
    (pFVar26->Buffer).Pad[0x7a] = '\0';
    (pFVar26->Buffer).Pad[0x7b] = '\0';
    (pFVar26->Buffer).Pad[0x7c] = '\0';
    (pFVar26->Buffer).Pad[0x7d] = '\0';
    (pFVar26->Buffer).Pad[0x7e] = '\0';
    (pFVar26->Buffer).Pad[0x7f] = '\0';
    local_d8 = pFVar30;
    FIoStoreTrace::RequestUnresolved((FIoRequestImpl *)pFVar26);
    puVar34 = (pFVar26->Buffer).Pad + 0xd4;
    LOCK();
    if (*(int *)puVar34 == 1) {
      puVar34[0] = '\b';
      puVar34[1] = '\0';
      puVar34[2] = '\0';
      puVar34[3] = '\0';
    }
    UNLOCK();
    if (*(int *)puVar34 == 1) {
      FIoRequestStats::OnRequestCompleted(&local_f8->RequestStats,(FIoRequestImpl *)pFVar26);
      TVar20 = FIoStatus::Unknown.ErrorMessage;
      pFVar15 = *(FIoBatchImpl **)((pFVar26->Buffer).Pad + 0x80);
      if (*(longlong *)((pFVar26->Buffer).Pad + 0xa0) != 0) {
        EVar35 = FIoStatus::Unknown.ErrorCode;
        if (FIoStatus::Unknown.ErrorMessage.Chars != (wchar_t *)0x0) {
          LOCK();
          *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) =
               *(int *)(FIoStatus::Unknown.ErrorMessage.Chars + -4) + 1;
          EVar35 = FIoStatus::Unknown.ErrorCode;
          UNLOCK();
          pwVar2 = TVar20.Chars + -4;
          LOCK();
          iVar9 = *(int *)pwVar2;
          *(int *)pwVar2 = *(int *)pwVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            FMemory::Free(pwVar2);
          }
        }
        pBVar16 = local_30;
        if ((EVar35 == Ok) && (local_30 != (BufCore *)0x0)) {
          FIoBuffer::BufCore::CheckRefCount(local_30);
          LOCK();
          piVar32 = &pBVar16->NumRefs;
          iVar9 = *piVar32;
          *piVar32 = *piVar32 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            FIoBuffer::BufCore::~BufCore(pBVar16);
            ::operator_delete(pBVar16,0x20);
          }
        }
        local_a8 = 0;
        local_a0 = 8;
        UE::Core::Private::Function::CheckCallable(*(void **)((pFVar26->Buffer).Pad + 0xa0));
        puVar34 = *(uchar **)((pFVar26->Buffer).Pad + 200);
        pcVar18 = *(code **)((pFVar26->Buffer).Pad + 0xa0);
        puVar33 = (pFVar26->Buffer).Pad + 0xb0;
        if (puVar34 != (uchar *)0x0) {
          puVar33 = puVar34;
        }
        uVar29 = (**(code **)(*(longlong *)puVar33 + 8))();
        (*pcVar18)(uVar29);
        iVar9 = (int)local_a0;
        if (local_a8 != 0) {
          piVar32 = (int *)(local_a8 + -8);
          LOCK();
          iVar11 = *piVar32;
          *piVar32 = *piVar32 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            FMemory::Free(piVar32);
          }
        }
        pBVar16 = local_98;
        local_a0 = 1;
        local_a8 = 0;
        if ((iVar9 == 0) && (local_98 != (BufCore *)0x0)) {
          FIoBuffer::BufCore::CheckRefCount(local_98);
          LOCK();
          piVar32 = &pBVar16->NumRefs;
          iVar9 = *piVar32;
          *piVar32 = *piVar32 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            FIoBuffer::BufCore::~BufCore(pBVar16);
            ::operator_delete(pBVar16,0x20);
          }
        }
        if (local_a8 != 0) {
          piVar32 = (int *)(local_a8 + -8);
          LOCK();
          iVar9 = *piVar32;
          *piVar32 = *piVar32 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            FMemory::Free(piVar32);
          }
        }
        if (*(longlong *)((pFVar26->Buffer).Pad + 0xa0) != 0) {
          puVar34 = *(uchar **)((pFVar26->Buffer).Pad + 200);
          if (puVar34 == (uchar *)0x0) {
            puVar34 = (pFVar26->Buffer).Pad + 0xb0;
          }
          (**(code **)(*(longlong *)puVar34 + 0x10))();
          (pFVar26->Buffer).Pad[0xa0] = '\0';
          (pFVar26->Buffer).Pad[0xa1] = '\0';
          (pFVar26->Buffer).Pad[0xa2] = '\0';
          (pFVar26->Buffer).Pad[0xa3] = '\0';
          (pFVar26->Buffer).Pad[0xa4] = '\0';
          (pFVar26->Buffer).Pad[0xa5] = '\0';
          (pFVar26->Buffer).Pad[0xa6] = '\0';
          (pFVar26->Buffer).Pad[0xa7] = '\0';
        }
      }
      if (pFVar15 != (FIoBatchImpl *)0x0) {
        if ((pFVar15->UnfinishedRequestsCount == (TAtomic<unsigned_int>)0x0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Batch->UnfinishedRequestsCount",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                                ,0x318,L""), bVar24)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        LOCK();
        pTVar3 = &pFVar15->UnfinishedRequestsCount;
        TVar10 = *pTVar3;
        *pTVar3 = (TAtomic<unsigned_int>)((int)*pTVar3 + -1);
        UNLOCK();
        if (TVar10 == (TAtomic<unsigned_int>)0x1) {
          CompleteBatch(local_f8,pFVar15);
        }
      }
    }
    LOCK();
    puVar34 = (pFVar26->Buffer).Pad + 0xd0;
    iVar9 = *(int *)puVar34;
    *(int *)puVar34 = *(int *)puVar34 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      piVar32 = *(int **)((pFVar26->Buffer).Pad + 0x70);
      if (*(longlong *)((pFVar26->Buffer).Pad + 0xa0) != 0) {
        puVar34 = *(uchar **)((pFVar26->Buffer).Pad + 200);
        if (puVar34 == (uchar *)0x0) {
          puVar34 = (pFVar26->Buffer).Pad + 0xb0;
        }
        (**(code **)(*(longlong *)puVar34 + 0x10))();
      }
      if (((pFVar26->Buffer).Pad[0x98] != '\0') &&
         (pBVar16 = *(BufCore **)((pFVar26->Buffer).Pad + 0x90), pBVar16 != (BufCore *)0x0)) {
        FIoBuffer::BufCore::CheckRefCount(pBVar16);
        LOCK();
        piVar4 = &pBVar16->NumRefs;
        iVar9 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          FIoBuffer::BufCore::~BufCore(pBVar16);
          ::operator_delete(pBVar16,0x20);
        }
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(piVar32 + 8);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      pFVar26->Next = *(FElement **)(piVar32 + 4);
      piVar32[6] = piVar32[6] + -1;
      *(FElement **)(piVar32 + 4) = pFVar26;
      LeaveCriticalSection(lpCriticalSection);
      LOCK();
      iVar9 = *piVar32;
      *piVar32 = *piVar32 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        pvVar19 = *(void **)(piVar32 + 2);
        while (pvVar19 != (void *)0x0) {
          pvVar17 = *(void **)((longlong)pvVar19 + 0xf0000);
          ::operator_delete(pvVar19,0xf0010);
          pvVar19 = pvVar17;
        }
        piVar32[2] = 0;
        piVar32[3] = 0;
        piVar32[4] = 0;
        piVar32[5] = 0;
        piVar32[6] = 0;
        DeleteCriticalSection((LPCRITICAL_SECTION)(piVar32 + 8));
        ::operator_delete(piVar32,0x48);
      }
    }
    iVar36 = iVar36 + 1;
  }
  if (((int)local_100 < iVar36) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("UnresolvedCount <= BatchCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                          ,0x385,L""), bVar24)) {
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  this = local_f8;
  local_f8->PendingIoRequestsCount =
       local_f8->PendingIoRequestsCount + (longlong)(int)(uVar21 - iVar36);
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_1417ee4bd:
  pFVar26 = local_f0;
  if (local_90 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90);
  }
  pFVar30 = local_e0;
  if (local_80 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80);
  }
  goto LAB_1417ed7d4;
}

// Run @ 1417f7fe0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

uint __thiscall FIoDispatcherImpl::Run(FIoDispatcherImpl *this)

{
  FEvent *pFVar1;
  ulong64 uVar2;
  atomic<bool> aVar3;
  bool bVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  FMemory::SetupTLSCachesOnCurrentThread();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_unsigned_int___cdecl_FIoDispatcherImpl::Run(void)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_unsigned_int___cdecl_FIoDispatcherImpl::Run(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_unsigned_int___cdecl_FIoDispatcherImpl::Run(void)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`private:_virtual_unsigned_int___cdecl_FIoDispatcherImpl::Run(void)___ptr64'::
                    __l2::LLMScope_Name916,L"FileSystem/IODispatcher");
    _Init_thread_footer(&`private:_virtual_unsigned_int___cdecl_FIoDispatcherImpl::Run(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `private:_virtual_unsigned_int___cdecl_FIoDispatcherImpl::Run(void)___ptr64'::__l2::
             LLMScope_Name916,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`private:_virtual_unsigned_int___cdecl_FIoDispatcherImpl::Run(void)___ptr64'::__l2::
              LLMScope_Name916,true);
  while (this->bStopRequested == (TAtomic<bool>)0x0) {
    if (this->PendingIoRequestsCount == 0) {
      pFVar1 = (this->DispatcherEvent).Event;
      (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0xffffffff,0);
    }
    else {
      bVar4 = -1 < CpuChannel->Enabled;
      if (bVar4) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`private:_virtual_unsigned_int___cdecl_FIoDispatcherImpl::Run(void)___ptr64'::
                    __l7::__CpuProfilerEventSpecId921,"IoDispatcherWaitForIo",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                   ,0x399);
        FCpuProfilerTrace::OutputBeginEvent
                  (`private:_virtual_unsigned_int___cdecl_FIoDispatcherImpl::Run(void)___ptr64'::
                   __l7::__CpuProfilerEventSpecId921);
      }
      pFVar1 = (this->DispatcherEvent).Event;
      (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0xffffffff);
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    ProcessIncomingRequests(this);
    ProcessCompletedRequests(this);
    aVar3 = this->bTaskSchedulerOversubscribed;
    while (aVar3 != (atomic<bool>)0x0) {
      aVar3 = (atomic<bool>)
              UE::FIoDispatcherChunkBlockDecoder::TryRetractAndExecuteDecodeTasks
                        (&this->ChunkBlockDecoder);
      LOCK();
      this->bTaskSchedulerOversubscribed = aVar3;
      UNLOCK();
      aVar3 = this->bTaskSchedulerOversubscribed;
    }
  }
  ProcessIncomingRequests(this);
  uVar2 = this->PendingIoRequestsCount;
  while (uVar2 != 0) {
    ProcessCompletedRequests(this);
    uVar2 = this->PendingIoRequestsCount;
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return 0;
}

// StartThread @ 141800fd0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FIoDispatcherImpl::StartThread(FIoDispatcherImpl *this)

{
  code *pcVar1;
  bool bVar2;
  FRunnableThread *pFVar3;
  
  if (this->Thread != (FRunnableThread *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Thread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\IO\\IoDispatcher.cpp"
                       ,0x2ca,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FRunnableThread::Create
                     ((FRunnable *)this,L"IoDispatcher",0,TPri_AboveNormal,0xffffffffffffffff,None);
  this->Thread = pFVar3;
  return;
}

// Stop @ 1418010f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FIoDispatcherImpl::Stop(FIoDispatcherImpl *this)

{
  LOCK();
  this->bStopRequested = (TAtomic<bool>)0x1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000141801105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->DispatcherEvent).Event)->_padding_ + 0x10))();
  return;
}

// WakeUpDispatcherThread @ 14180d0f0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FIoDispatcherImpl::WakeUpDispatcherThread(FIoDispatcherImpl *this)

{
  if (((this->BackendContext).Object)->bIsMultiThreaded != false) {
                    /* WARNING: Could not recover jumptable at 0x00014180d104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(((this->DispatcherEvent).Event)->_padding_ + 0x10))();
    return;
  }
  return;
}


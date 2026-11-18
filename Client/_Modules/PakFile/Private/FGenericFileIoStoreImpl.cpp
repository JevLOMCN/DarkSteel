// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 10

// FGenericFileIoStoreImpl @ 142a51e40

FGenericFileIoStoreImpl * __thiscall
FGenericFileIoStoreImpl::FGenericFileIoStoreImpl(FGenericFileIoStoreImpl *this)

{
  FEvent *pFVar1;
  
  this->_padding_ = (longlong)&___7FGenericFileIoStoreImpl__6B_;
  this->WakeUpDispatcherThreadDelegate =
       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
  pFVar1 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  (this->EventQueue).ServiceEvent = pFVar1;
  this->BufferAllocator = (FFileIoStoreBufferAllocator *)0x0;
  this->BlockCache = (FFileIoStoreBlockCache *)0x0;
  this->Stats = (FFileIoStoreStats *)0x0;
  this->AcquiredBuffer = (FFileIoStoreBuffer *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CompletedRequestsCritical,4000);
  (this->CompletedRequests).Head = (FFileIoStoreReadRequest *)0x0;
  (this->CompletedRequests).Tail = (FFileIoStoreReadRequest *)0x0;
  this->PreviousFileHandle = 0;
  return this;
}

// ~FGenericFileIoStoreImpl @ 142a56500

void __thiscall FGenericFileIoStoreImpl::~FGenericFileIoStoreImpl(FGenericFileIoStoreImpl *this)

{
  this->_padding_ = (longlong)&___7FGenericFileIoStoreImpl__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CompletedRequestsCritical);
  FGenericPlatformProcess::ReturnSynchEventToPool((this->EventQueue).ServiceEvent);
  return;
}

// CloseContainer @ 142a644d0

void __thiscall
FGenericFileIoStoreImpl::CloseContainer(FGenericFileIoStoreImpl *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142a64516. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)param_1)(param_1,1);
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ContainerFileHandle",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\GenericPlatformIoDispatcher.cpp"
                     ,0x57,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// CreateCustomRequests @ 142a666a0

bool __thiscall
FGenericFileIoStoreImpl::CreateCustomRequests
          (FGenericFileIoStoreImpl *this,FFileIoStoreResolvedRequest *param_1,
          FFileIoStoreReadRequestList *param_2)

{
  return false;
}

// GetCompletedRequests @ 142a73a60

void __thiscall
FGenericFileIoStoreImpl::GetCompletedRequests
          (FGenericFileIoStoreImpl *this,FFileIoStoreReadRequestList *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FFileIoStoreReadRequest *pFVar1;
  FFileIoStoreReadRequest *pFVar2;
  code *pcVar3;
  bool bVar4;
  FFileIoStoreReadRequest *pFVar5;
  
  lpCriticalSection = &this->CompletedRequestsCritical;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->CompletedRequests).Head;
  if (pFVar1 != (FFileIoStoreReadRequest *)0x0) {
    pFVar2 = (this->CompletedRequests).Tail;
    pFVar5 = (FFileIoStoreReadRequest *)0x0;
    (this->CompletedRequests).Tail = (FFileIoStoreReadRequest *)0x0;
    (this->CompletedRequests).Head = (FFileIoStoreReadRequest *)0x0;
    if (pFVar2 == (FFileIoStoreReadRequest *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ListTail",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                         ,0x1ff,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (pFVar2->Next != (FFileIoStoreReadRequest *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ListTail->Next",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                         ,0x200,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (pFVar1->Previous != (FFileIoStoreReadRequest *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ListHead->Previous",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                         ,0x201,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (pFVar2 != pFVar1) {
      if (pFVar2->Previous == (FFileIoStoreReadRequest *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ListTail == ListHead || ListTail->Previous != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                           ,0x202,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (pFVar1->Next == (FFileIoStoreReadRequest *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ListTail == ListHead || ListHead->Next != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Internal\\IoDispatcherFileBackendTypes.h"
                           ,0x203,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    if (param_1->Tail == (FFileIoStoreReadRequest *)0x0) {
      param_1->Head = pFVar1;
    }
    else {
      param_1->Tail->Next = pFVar1;
      pFVar5 = param_1->Tail;
    }
    pFVar1->Previous = pFVar5;
    param_1->Tail = pFVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000142a73bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Initialize @ 142a7d7f0

void __thiscall
FGenericFileIoStoreImpl::Initialize
          (FGenericFileIoStoreImpl *this,FInitializePlatformFileIoStoreParams *param_1)

{
  this->WakeUpDispatcherThreadDelegate = param_1->WakeUpDispatcherThreadDelegate;
  this->BufferAllocator = param_1->BufferAllocator;
  this->BlockCache = param_1->BlockCache;
  this->Stats = param_1->Stats;
  return;
}

// OpenContainer @ 142a890e0

bool __thiscall
FGenericFileIoStoreImpl::OpenContainer
          (FGenericFileIoStoreImpl *this,wchar_t *param_1,ulong64 *param_2,ulong64 *param_3)

{
  bool bVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  
  bVar1 = UE::IsUsingZenPakFileStreaming();
  if (bVar1) {
    this_00 = FPlatformFileManager::Get();
    pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
  }
  else {
    pIVar2 = IPlatformFile::GetPlatformPhysical();
  }
  uVar3 = (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,param_1);
  if ((-1 < (longlong)uVar3) &&
     (uVar4 = (**(code **)((longlong)*pIVar2 + 0xf8))(pIVar2,param_1,0), uVar4 != 0)) {
    *param_2 = uVar4;
    *param_3 = uVar3;
    return true;
  }
  return false;
}

// ServiceNotify @ 142a9fc40

void __thiscall FGenericFileIoStoreImpl::ServiceNotify(FGenericFileIoStoreImpl *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142a9fc47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->EventQueue).ServiceEvent)->_padding_ + 0x10))();
  return;
}

// ServiceWait @ 142a9fc80

void __thiscall FGenericFileIoStoreImpl::ServiceWait(FGenericFileIoStoreImpl *this)

{
  FEvent *pFVar1;
  
  pFVar1 = (this->EventQueue).ServiceEvent;
                    /* WARNING: Could not recover jumptable at 0x000142a9fc8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,0xffffffff,0);
  return;
}

// StartRequests @ 142aa1510

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGenericFileIoStoreImpl::StartRequests
          (FGenericFileIoStoreImpl *this,FFileIoStoreRequestQueue *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar4;
  FFileIoStoreBufferAllocator *pFVar5;
  FFileIoStoreBuffer *pFVar6;
  FFileIoStoreBlockCache *pFVar7;
  uchar *puVar8;
  longlong *plVar9;
  FCachedBlock *pFVar10;
  code *pcVar11;
  bool bVar12;
  undefined1 uVar13;
  char cVar14;
  int iVar15;
  FFileIoStoreReadRequest *pFVar16;
  FFileIoStoreReadRequest *pFVar17;
  ulonglong uVar18;
  FReadAccessScope *this_00;
  uint uVar19;
  ForAnyElementType FVar20;
  undefined1 *puVar21;
  FFileIoStoreReadRequest *pFVar22;
  undefined1 local_res18 [8];
  TArray<FFileIoStoreReadRequest_*,TSizedDefaultAllocator<32>_> local_88;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  pFVar22 = (FFileIoStoreReadRequest *)0x0;
  if (GIoDispatcherCullCancelledReadRequests) {
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    FFileIoStoreRequestQueue::PopCancelled(param_1,&local_88);
    if (local_88.ArrayNum != 0) {
      pFVar1 = &this->CompletedRequestsCritical;
      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      iVar15 = local_88.ArrayNum;
      uVar18 = (ulonglong)local_88.ArrayNum;
      pFVar2 = local_88.AllocatorInstance.Data + uVar18 * 8;
      FVar20.Data = local_88.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar18 != iVar15) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FFileIoStoreReadRequest_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (FVar20.Data == pFVar2) break;
        pFVar16 = (this->CompletedRequests).Tail;
        pFVar17 = *(FFileIoStoreReadRequest **)FVar20.Data;
        if (pFVar16 == (FFileIoStoreReadRequest *)0x0) {
          (this->CompletedRequests).Head = pFVar17;
          pFVar16 = pFVar22;
        }
        else {
          pFVar16->Next = pFVar17;
          pFVar16 = (this->CompletedRequests).Tail;
        }
        pFVar17->Previous = pFVar16;
        FVar20.Data = FVar20.Data + 8;
        (this->CompletedRequests).Tail = pFVar17;
        pFVar17->Next = (FFileIoStoreReadRequest *)0x0;
        uVar18 = local_88._8_8_ & 0xffffffff;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      pTVar4 = this->WakeUpDispatcherThreadDelegate;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar4,&local_78);
      pFVar16 = pFVar22;
      if (*(int *)&pTVar4->field_0x10 != 0) {
        pFVar16 = *(FFileIoStoreReadRequest **)&pTVar4->field_0x8;
      }
      (**(code **)((pFVar16->Next->CompressedBlocks).AllocatorInstance.InlineData + 0x20))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_78);
    }
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
  }
  if (this->AcquiredBuffer == (FFileIoStoreBuffer *)0x0) {
    pFVar5 = this->BufferAllocator;
    pFVar1 = &pFVar5->BuffersCritical;
    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_142aa1a57;
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar6 = pFVar5->FirstFreeBuffer;
    if (pFVar6 == (FFileIoStoreBuffer *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      this->AcquiredBuffer = (FFileIoStoreBuffer *)0x0;
      return false;
    }
    pFVar5->FirstFreeBuffer = pFVar6->Next;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    UE::FIoDispatcherFilesystemStats::OnBufferAllocated(&pFVar5->Stats->Stats);
    this->AcquiredBuffer = pFVar6;
  }
  pFVar16 = FFileIoStoreRequestQueue::Pop(param_1);
  bVar12 = false;
  if (pFVar16 != (FFileIoStoreReadRequest *)0x0) {
    if (pFVar16->bCancelled == false && pFVar16->bFailed == false) {
      if (((pFVar16->ImmediateScatter).Request != (FFileIoStoreResolvedRequest *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!NextRequest->ImmediateScatter.Request",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\GenericPlatformIoDispatcher.cpp"
                              ,0x89,L""), bVar12)) {
        pcVar11 = (code *)swi(3);
        uVar13 = (*pcVar11)();
        return (bool)uVar13;
      }
      pFVar16->Buffer = this->AcquiredBuffer;
      this->AcquiredBuffer = (FFileIoStoreBuffer *)0x0;
      pFVar7 = this->BlockCache;
      puVar8 = pFVar16->Buffer->Memory;
      if (pFVar7->CacheMemory != (uchar *)0x0) {
        if ((pFVar16->Buffer == (FFileIoStoreBuffer *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Block->Buffer",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                ,0x97,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          uVar13 = (*pcVar11)();
          return (bool)uVar13;
        }
        uVar18 = (pFVar16->Key).field0_0x0.Hash;
        if (*(int *)&(pFVar7->CachedBlocks).field_0x8 != *(int *)&(pFVar7->CachedBlocks).field_0x34)
        {
          puVar21 = *(undefined1 **)&(pFVar7->CachedBlocks).field_0x40;
          if (puVar21 == (undefined1 *)0x0) {
            puVar21 = &(pFVar7->CachedBlocks).field_0x38;
          }
          iVar15 = *(int *)(puVar21 +
                           ((uVar18 >> 0x20) * 0x17 + uVar18 &
                           (ulonglong)(*(int *)&(pFVar7->CachedBlocks).field_0x48 - 1)) * 4);
          if (iVar15 != -1) {
            do {
              lVar3 = *(longlong *)&pFVar7->CachedBlocks + (longlong)iVar15 * 0x18;
              if (*(ulonglong *)(*(longlong *)&pFVar7->CachedBlocks + (longlong)iVar15 * 0x18) ==
                  uVar18) {
                if ((lVar3 != 0) &&
                   (pFVar10 = *(FCachedBlock **)(lVar3 + 8), pFVar10 != (FCachedBlock *)0x0)) {
                  pFVar10->LruPrev->LruNext = pFVar10->LruNext;
                  pFVar10->LruNext->LruPrev = pFVar10->LruPrev;
                  pFVar10->LruPrev = &pFVar7->CacheLruHead;
                  pFVar10->LruNext = (pFVar7->CacheLruHead).LruNext;
                  (pFVar7->CacheLruHead).LruNext = pFVar10;
                  pFVar10->LruNext->LruPrev = pFVar10;
                  if ((pFVar10->Buffer == (uchar *)0x0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("CachedBlock->Buffer",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                          ,0xa8,L""), bVar12)) {
                    pcVar11 = (code *)swi(3);
                    uVar13 = (*pcVar11)();
                    return (bool)uVar13;
                  }
                  UE::FIoDispatcherFilesystemStats::OnBlockCacheHit
                            (&pFVar7->Stats->Stats,pFVar7->ReadBufferSize);
                  memcpy(pFVar16->Buffer->Memory,pFVar10->Buffer,pFVar7->ReadBufferSize);
                  goto LAB_142aa19c0;
                }
                break;
              }
              iVar15 = *(int *)(lVar3 + 0x10);
            } while (iVar15 != -1);
          }
        }
        UE::FIoDispatcherFilesystemStats::OnBlockCacheMiss
                  (&pFVar7->Stats->Stats,pFVar7->ReadBufferSize);
      }
      plVar9 = (longlong *)pFVar16->ContainerFilePartition->FileHandle;
      UE::FIoDispatcherFilesystemStats::OnFilesystemReadStarted
                (&this->Stats->Stats,(ulong64)pFVar16->ContainerFilePartition,pFVar16->Offset,
                 pFVar16->Size);
      bVar12 = -1 < CpuChannel->Enabled;
      if (bVar12) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId149,"ReadBlockFromFile",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\GenericPlatformIoDispatcher.cpp"
                   ,0x95);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId149);
      }
      pFVar16->bFailed = true;
      pFVar17 = pFVar22;
      do {
        uVar19 = (int)pFVar17 + 1;
        pFVar17 = (FFileIoStoreReadRequest *)(ulonglong)uVar19;
        cVar14 = (**(code **)(*plVar9 + 0x10))(plVar9,pFVar16->Offset);
        if (cVar14 == '\0') {
          if (2 < (byte)LogIoDispatcher._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
          }
        }
        else {
          cVar14 = (**(code **)(*plVar9 + 0x20))(plVar9,puVar8,pFVar16->Size);
          if (cVar14 != '\0') {
            pFVar16->bFailed = false;
            UE::FIoDispatcherFilesystemStats::OnFilesystemReadCompleted
                      (&this->Stats->Stats,(ulong64)pFVar16->ContainerFilePartition,pFVar16->Offset,
                       pFVar16->Size);
            FFileIoStoreBlockCache::Store(this->BlockCache,pFVar16);
            break;
          }
          if (2 < (byte)LogIoDispatcher._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoDispatcher);
          }
        }
      } while ((int)uVar19 < 10);
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
LAB_142aa19c0:
      pFVar1 = &this->CompletedRequestsCritical;
      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_142aa1a57;
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      pFVar17 = (this->CompletedRequests).Tail;
      if (pFVar17 == (FFileIoStoreReadRequest *)0x0) {
        (this->CompletedRequests).Head = pFVar16;
        pFVar17 = pFVar22;
      }
      else {
        pFVar17->Next = pFVar16;
        pFVar17 = (this->CompletedRequests).Tail;
      }
      pFVar16->Previous = pFVar17;
      (this->CompletedRequests).Tail = pFVar16;
      pFVar16->Next = (FFileIoStoreReadRequest *)0x0;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      pTVar4 = this->WakeUpDispatcherThreadDelegate;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar4,&local_48);
      if (*(int *)&pTVar4->field_0x10 != 0) {
        pFVar22 = *(FFileIoStoreReadRequest **)&pTVar4->field_0x8;
      }
      (**(code **)((pFVar22->Next->CompressedBlocks).AllocatorInstance.InlineData + 0x20))(pFVar22);
      this_00 = &local_48;
    }
    else {
      pFVar1 = &this->CompletedRequestsCritical;
      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_142aa1a57:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      pFVar17 = (this->CompletedRequests).Tail;
      if (pFVar17 == (FFileIoStoreReadRequest *)0x0) {
        (this->CompletedRequests).Head = pFVar16;
        pFVar17 = pFVar22;
      }
      else {
        pFVar17->Next = pFVar16;
        pFVar17 = (this->CompletedRequests).Tail;
      }
      pFVar16->Previous = pFVar17;
      (this->CompletedRequests).Tail = pFVar16;
      pFVar16->Next = (FFileIoStoreReadRequest *)0x0;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      pTVar4 = this->WakeUpDispatcherThreadDelegate;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar4,&local_60);
      if (*(int *)&pTVar4->field_0x10 != 0) {
        pFVar22 = *(FFileIoStoreReadRequest **)&pTVar4->field_0x8;
      }
      (**(code **)((pFVar22->Next->CompressedBlocks).AllocatorInstance.InlineData + 0x20))(pFVar22);
      this_00 = &local_60;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (this_00);
    bVar12 = true;
  }
  return bVar12;
}


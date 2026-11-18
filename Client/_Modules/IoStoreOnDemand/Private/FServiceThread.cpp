// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 17

// ~FServiceThread @ 1445a9870

void __thiscall UE::IoStore::JournaledCache::FServiceThread::~FServiceThread(FServiceThread *this)

{
  FRunnableThread *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FServiceThread_JournaledCache_IoStore_UE__6B_;
  pFVar1 = (this->Thread).Ptr;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (this->Thread).Ptr = (FRunnableThread *)0x0;
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  pFVar2 = (this->PendingWork).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ActiveReads).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->Lock);
  DestructItems<TUniquePtr<UE::IoStore::JournaledCache::FCache,TDefaultDelete<UE::IoStore::JournaledCache::FCache>_>,int>
            ((TUniquePtr<UE::IoStore::JournaledCache::FCache,TDefaultDelete<UE::IoStore::JournaledCache::FCache>_>
              *)(this->Caches).AllocatorInstance.Data,(this->Caches).ArrayNum);
  pFVar2 = (this->Caches).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FEventRef::~FEventRef(&this->WakeEvent);
  pFVar1 = (this->Thread).Ptr;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// BeginRead @ 1445b4c00

void __thiscall
UE::IoStore::JournaledCache::FServiceThread::BeginRead
          (FServiceThread *this,FCache *param_1,FReadRequest *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  ulong64 uVar2;
  FReadSink *pFVar3;
  FIoBuffer *pFVar4;
  uint uVar5;
  int iVar6;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_36 = SUB82(param_1,0);
  uStack_34 = (undefined4)((ulonglong)param_1 >> 0x10);
  uStack_30 = (undefined2)((ulonglong)param_1 >> 0x30);
  lpCriticalSection = &this->Lock;
  uVar2 = param_2->Key;
  uStack_2e = (undefined2)uVar2;
  uStack_2c = (undefined4)(uVar2 >> 0x10);
  uStack_28 = (undefined2)(uVar2 >> 0x30);
  uVar5 = param_2->ReadId;
  pFVar3 = param_2->Sink;
  pFVar4 = param_2->Dest;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x12,2,2,&(this->PendingWork).AllocatorInstance,&(this->PendingWork).ArrayNum
                       ,&(this->PendingWork).ArrayMax);
    uStack_24 = SUB84(pFVar3,0);
    uStack_20 = (undefined4)((ulonglong)pFVar3 >> 0x20);
    uStack_1c = SUB84(pFVar4,0);
    pFVar1 = (this->PendingWork).AllocatorInstance.Data + (longlong)iVar6 * 0x12;
    uStack_18 = (undefined4)((ulonglong)pFVar4 >> 0x20);
    *(uint *)pFVar1 = CONCAT22(uStack_36,3);
    *(undefined4 *)(pFVar1 + 4) = uStack_34;
    *(uint *)(pFVar1 + 8) = CONCAT22(uStack_2e,uStack_30);
    *(undefined4 *)(pFVar1 + 0xc) = uStack_2c;
    *(uint *)(pFVar1 + 0x10) = CONCAT22((short)uVar5,uStack_28);
    *(undefined4 *)(pFVar1 + 0x14) = uStack_24;
    *(undefined4 *)(pFVar1 + 0x18) = uStack_20;
    *(undefined4 *)(pFVar1 + 0x1c) = uStack_1c;
    *(undefined4 *)(pFVar1 + 0x20) = uStack_18;
    LOCK();
    this->PendingCount = (atomic<int>)((int)this->PendingCount + 1);
    UNLOCK();
    (**(code **)(((this->WakeEvent).Event)->_padding_ + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001445b4cd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// CancelRead @ 1445b6900

void __thiscall
UE::IoStore::JournaledCache::FServiceThread::CancelRead(FServiceThread *this,FIoBuffer *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  
  lpCriticalSection = &this->Lock;
  uStack_1e = SUB82(param_1,0);
  uStack_1c = (undefined4)((ulonglong)param_1 >> 0x10);
  uStack_18 = (undefined2)((ulonglong)param_1 >> 0x30);
  local_28 = CONCAT22(local_28._2_2_,4);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x12,2,1,&(this->PendingWork).AllocatorInstance,&(this->PendingWork).ArrayNum
                       ,&(this->PendingWork).ArrayMax);
    pFVar1 = (this->PendingWork).AllocatorInstance.Data + (longlong)iVar2 * 0x12;
    *(undefined4 *)pFVar1 = local_28;
    *(undefined4 *)(pFVar1 + 4) = uStack_24;
    *(uint *)(pFVar1 + 8) = CONCAT22(uStack_1e,uStack_20);
    *(undefined4 *)(pFVar1 + 0xc) = uStack_1c;
    *(undefined2 *)(pFVar1 + 0x10) = uStack_18;
    LOCK();
    this->PendingCount = (atomic<int>)((int)this->PendingCount + 1);
    UNLOCK();
    (**(code **)(((this->WakeEvent).Event)->_padding_ + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001445b69a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// ClaimReadId @ 1445b6d80

uint __thiscall UE::IoStore::JournaledCache::FServiceThread::ClaimReadId(FServiceThread *this)

{
  this->ReadIdCounter = this->ReadIdCounter + 1;
  return (uint)(ushort)this->ReadIdCounter;
}

// Drop @ 1445c94a0

void __thiscall UE::IoStore::JournaledCache::FServiceThread::Drop(FServiceThread *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 local_18;
  
  lpCriticalSection = &this->Lock;
  local_28 = CONCAT22(local_28._2_2_,5);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x12,2,1,&(this->PendingWork).AllocatorInstance,&(this->PendingWork).ArrayNum
                       ,&(this->PendingWork).ArrayMax);
    pFVar1 = (this->PendingWork).AllocatorInstance.Data + (longlong)iVar2 * 0x12;
    *(undefined4 *)pFVar1 = local_28;
    *(undefined4 *)(pFVar1 + 4) = uStack_24;
    *(undefined4 *)(pFVar1 + 8) = uStack_20;
    *(undefined4 *)(pFVar1 + 0xc) = uStack_1c;
    *(undefined2 *)(pFVar1 + 0x10) = local_18;
    LOCK();
    this->PendingCount = (atomic<int>)((int)this->PendingCount + 1);
    UNLOCK();
    (**(code **)(((this->WakeEvent).Event)->_padding_ + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001445c9540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// Get @ 1445d10b0

FServiceThread * __cdecl UE::IoStore::JournaledCache::FServiceThread::Get(void)

{
  if (Ptr == (FServiceThread *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FEventRef::FEventRef(&::Instance.WakeEvent,AutoReset);
        ::Instance.Governor = (FDiskCacheGovernor *)0x0;
        ::Instance.Caches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        ::Instance.Caches.ArrayNum = 0;
        ::Instance.Caches.ArrayMax = 0;
        ::Instance.RunCount = (atomic<int>)0x0;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Instance.Lock,4000);
        ::Instance.ActiveReads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        ::Instance.ActiveReads.ArrayNum = 0;
        ::Instance.ActiveReads.ArrayMax = 0;
        ::Instance.PendingWork.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        ::Instance.PendingWork.ArrayNum = 0;
        ::Instance.PendingWork.ArrayMax = 0;
        ::Instance.PendingCount = (atomic<int>)0x0;
        ::Instance.PendingPrev = -1;
        ::Instance.ReadIdCounter = 0;
        atexit(`UE::IoStore::JournaledCache::FServiceThread::Get'::__l2::
               _dynamic_atexit_destructor_for__Instance__);
        _Init_thread_footer(&::_TSS0);
        Ptr = &::Instance;
        return &::Instance;
      }
    }
    Ptr = &::Instance;
  }
  return Ptr;
}

// ReceiveWork @ 1445f0710

void __thiscall UE::IoStore::JournaledCache::FServiceThread::ReceiveWork(FServiceThread *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  short sVar3;
  atomic<int> aVar4;
  FCache *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  FCache *local_68 [2];
  int *local_58;
  int *local_50;
  
  aVar4 = this->PendingCount;
  if (aVar4 != (atomic<int>)this->PendingPrev) {
    EnterCriticalSection((LPCRITICAL_SECTION)&this->Lock);
    pFVar21 = (this->PendingWork).AllocatorInstance.Data;
    local_50 = &(this->PendingWork).ArrayNum;
    (this->PendingWork).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar18 = *local_50;
    uVar23 = (ulonglong)uVar18;
    local_58 = &(this->PendingWork).ArrayMax;
    *local_50 = 0;
    *local_58 = 0;
    local_res18 = uVar18;
    local_res20 = pFVar21;
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->Lock);
    uVar20 = 0;
    this->PendingPrev = (int)aVar4;
    bVar12 = false;
    if (uVar18 != 0) {
      do {
        uVar18 = 0;
        if ((int)uVar20 < (int)uVar23) {
          uVar18 = ~uVar20 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar21 = pFVar21 + (longlong)(int)uVar20 * 0x12;
        sVar3 = *(short *)pFVar21;
        if (sVar3 == 5) {
          bVar12 = true;
LAB_1445f082f:
          uVar20 = uVar20 + (sVar3 == 3);
        }
        else {
          if (sVar3 != 1) goto LAB_1445f082f;
          lVar22 = (longlong)(this->Caches).ArrayNum;
          uVar18 = 0;
          lVar15 = *(longlong *)(pFVar21 + 2);
          lVar19 = 0;
          if (0 < lVar22) {
            do {
              uVar16 = 0;
              if ((int)uVar18 < (this->Caches).ArrayNum) {
                uVar16 = ~uVar18 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (*(longlong *)((this->Caches).AllocatorInstance.Data + lVar19 * 8) == lVar15) {
                uVar16 = 0;
                if ((int)uVar18 < (this->Caches).ArrayNum) {
                  uVar16 = ~uVar18 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                TArray<TUniquePtr<UE::IoStore::JournaledCache::FCache,TDefaultDelete<UE::IoStore::JournaledCache::FCache>_>,TSizedDefaultAllocator<32>_>
                ::RemoveAtSwapImpl(&this->Caches,uVar18);
                Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,&(this->Caches).AllocatorInstance,(this->Caches).ArrayNum,
                           &(this->Caches).ArrayMax);
                uVar23 = (ulonglong)local_res18;
                goto LAB_1445f083b;
              }
              uVar18 = uVar18 + 1;
              lVar19 = lVar19 + 1;
            } while (lVar19 < lVar22);
          }
          lpCriticalSection = &this->Lock;
          uVar23 = (ulonglong)(int)local_res18;
          pFVar5 = local_res20 + uVar23 * 0x12;
          for (pFVar17 = local_res20; pFVar17 != pFVar5; pFVar17 = pFVar17 + 0x12) {
            if ((*(short *)pFVar17 == 0) && (*(longlong *)(pFVar17 + 2) == lVar15)) {
              if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                Core::Private::ReportNotNullPtr();
              }
              EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
              iVar13 = Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x12,2,1,&(this->PendingWork).AllocatorInstance,local_50,local_58)
              ;
              uVar7 = *(undefined4 *)(pFVar21 + 4);
              uVar8 = *(undefined4 *)(pFVar21 + 8);
              uVar9 = *(undefined4 *)(pFVar21 + 0xc);
              pFVar2 = (this->PendingWork).AllocatorInstance.Data + (longlong)iVar13 * 0x12;
              *(undefined4 *)pFVar2 = *(undefined4 *)pFVar21;
              *(undefined4 *)(pFVar2 + 4) = uVar7;
              *(undefined4 *)(pFVar2 + 8) = uVar8;
              *(undefined4 *)(pFVar2 + 0xc) = uVar9;
              *(short *)(pFVar2 + 0x10) = *(short *)(pFVar21 + 0x10);
              LOCK();
              this->PendingCount = (atomic<int>)((int)this->PendingCount + 1);
              UNLOCK();
              (**(code **)(((this->WakeEvent).Event)->_padding_ + 0x10))();
              LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            }
          }
        }
LAB_1445f083b:
        uVar20 = uVar20 + 1;
        pFVar21 = local_res20;
      } while (uVar20 < (uint)uVar23);
    }
    uVar18 = 0;
    uVar20 = (uint)uVar23;
    if (uVar20 != 0) {
      do {
        uVar16 = 0;
        if ((int)uVar18 < (int)uVar20) {
          uVar16 = ~uVar18 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = pFVar21 + (longlong)(int)uVar18 * 0x12;
        sVar3 = *(short *)(pFVar21 + (longlong)(int)uVar18 * 0x12);
        if ((sVar3 != 1) && (1 < (ushort)(sVar3 - 4U))) {
          if (sVar3 == 0) {
            this_00 = *(FCache **)(pFVar5 + 2);
            iVar13 = LoadCache(&this_00->DiskCache);
            if (iVar13 < 0) {
              FCache::Drop(this_00);
            }
            pFVar5 = (this->Caches).AllocatorInstance.Data;
            local_68[0] = this_00;
            if (((pFVar5 <= (FScriptContainerElement *)local_68) &&
                ((FScriptContainerElement *)local_68 <
                 pFVar5 + (longlong)(this->Caches).ArrayMax * 8)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar13 = (this->Caches).ArrayNum;
            piVar1 = &(this->Caches).ArrayMax;
            if (iVar13 == *piVar1) {
              iVar13 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&(this->Caches).AllocatorInstance,piVar1);
            }
            (this->Caches).ArrayNum = iVar13 + 1;
            *(FCache **)((this->Caches).AllocatorInstance.Data + (longlong)iVar13 * 8) = local_68[0]
            ;
            local_68[0] = (FCache *)0x0;
            TDefaultDelete<UE::IoStore::JournaledCache::FCache>::operator()
                      ((TDefaultDelete<UE::IoStore::JournaledCache::FCache> *)local_68,(FCache *)0x0
                      );
          }
          else if (sVar3 == 2) {
            this->Governor = *(FDiskCacheGovernor **)(pFVar5 + 2);
          }
          else {
            if ((sVar3 != 3) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Work.What == FWork::Work_Read",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                                    ,0x7f8,L""), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar21 = (this->ActiveReads).AllocatorInstance.Data;
            if (((pFVar21 <= pFVar5) &&
                (pFVar5 < pFVar21 + (longlong)(this->ActiveReads).ArrayMax * 0x12)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar13 = (this->ActiveReads).ArrayNum;
            if (iVar13 == (this->ActiveReads).ArrayMax) {
              iVar13 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x212,&(this->ActiveReads).AllocatorInstance,
                                  &(this->ActiveReads).ArrayMax);
            }
            uVar18 = uVar18 + 1;
            (this->ActiveReads).ArrayNum = iVar13 + 1;
            uVar10 = *(undefined8 *)(pFVar5 + 8);
            pFVar17 = (this->ActiveReads).AllocatorInstance.Data;
            pFVar21 = pFVar17 + (longlong)iVar13 * 0x12;
            *(undefined8 *)pFVar21 = *(undefined8 *)pFVar5;
            *(undefined8 *)(pFVar21 + 8) = uVar10;
            *(undefined2 *)(pFVar17 + (longlong)iVar13 * 0x12 + 0x10) =
                 *(undefined2 *)(pFVar5 + 0x10);
            uVar16 = 0;
            if ((int)uVar18 < (int)uVar20) {
              uVar16 = ~uVar18 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar21 = local_res20 + (longlong)(int)uVar18 * 0x12;
            pFVar5 = (this->ActiveReads).AllocatorInstance.Data;
            if (((pFVar5 <= pFVar21) &&
                (pFVar21 < pFVar5 + (longlong)(this->ActiveReads).ArrayMax * 0x12)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar13 = (this->ActiveReads).ArrayNum;
            if (iVar13 == (this->ActiveReads).ArrayMax) {
              iVar13 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x212,&(this->ActiveReads).AllocatorInstance,
                                  &(this->ActiveReads).ArrayMax);
            }
            (this->ActiveReads).ArrayNum = iVar13 + 1;
            uVar10 = *(undefined8 *)(pFVar21 + 8);
            pFVar17 = (this->ActiveReads).AllocatorInstance.Data;
            pFVar5 = pFVar17 + (longlong)iVar13 * 0x12;
            *(undefined8 *)pFVar5 = *(undefined8 *)pFVar21;
            *(undefined8 *)(pFVar5 + 8) = uVar10;
            *(undefined2 *)(pFVar17 + (longlong)iVar13 * 0x12 + 0x10) =
                 *(undefined2 *)(pFVar21 + 0x10);
            pFVar21 = local_res20;
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar20);
      uVar18 = 0;
      do {
        uVar20 = 0;
        if ((int)uVar18 < (int)uVar23) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(short *)(pFVar21 + (longlong)(int)uVar18 * 0x12) == 4) {
          lVar15 = *(longlong *)(pFVar21 + ((longlong)(int)uVar18 * 9 + 5) * 2);
          uVar16 = 1;
          uVar20 = (this->ActiveReads).ArrayNum;
          if (1 < uVar20) {
            do {
              uVar14 = 0;
              if ((int)uVar16 < (this->ActiveReads).ArrayNum) {
                uVar14 = ~uVar16 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (*(longlong *)
                   ((this->ActiveReads).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x12 + 10)
                  == lVar15) {
                uVar20 = 0;
                if ((int)uVar16 < (this->ActiveReads).ArrayNum) {
                  uVar20 = ~uVar16 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                *(undefined8 *)
                 ((this->ActiveReads).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x12 + 10) =
                     0;
                pFVar21 = local_res20;
                break;
              }
              uVar16 = uVar16 + 2;
              pFVar21 = local_res20;
            } while (uVar16 < uVar20);
          }
        }
        else {
          uVar18 = uVar18 + (*(short *)(pFVar21 + (longlong)(int)uVar18 * 0x12) == 3);
        }
        uVar18 = uVar18 + 1;
        if (local_res18 <= uVar18) break;
        uVar23 = (ulonglong)local_res18;
      } while( true );
    }
    if (bVar12) {
      pFVar17 = (this->Caches).AllocatorInstance.Data;
      iVar13 = (this->Caches).ArrayNum;
      pFVar5 = pFVar17 + (longlong)iVar13 * 8;
      while( true ) {
        if ((this->Caches).ArrayNum != iVar13) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TUniquePtr<UE::IoStore::JournaledCache::FCache,TDefaultDelete<UE::IoStore::JournaledCache::FCache>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar17 == pFVar5) break;
        FCache::Drop(*(FCache **)pFVar17);
        pFVar17 = pFVar17 + 8;
      }
      uVar18 = (this->ActiveReads).ArrayNum;
      if (1 < uVar18) {
        uVar20 = 1;
        do {
          uVar16 = 0;
          if ((int)uVar20 < (this->ActiveReads).ArrayNum) {
            uVar16 = ~uVar20 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar15 = (longlong)(int)uVar20;
          uVar20 = uVar20 + 2;
          *(undefined8 *)((this->ActiveReads).AllocatorInstance.Data + lVar15 * 0x12 + 10) = 0;
        } while (uVar20 < uVar18);
      }
    }
    if ((((this->ActiveReads).ArrayNum & 1) != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ActiveReads.Num() & 1) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                            ,0x822,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pFVar21 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar21);
    }
  }
  return;
}

// RegisterCache @ 1445f18c0

void __thiscall
UE::IoStore::JournaledCache::FServiceThread::RegisterCache
          (FServiceThread *this,
          TUniquePtr<UE::IoStore::JournaledCache::FCache,TDefaultDelete<UE::IoStore::JournaledCache::FCache>_>
          param_1)

{
  atomic<int> *paVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  atomic<int> aVar4;
  void *pvVar5;
  FRunnableThread *pFVar6;
  PSRWLOCK SRWLock;
  BufCore *this_00;
  code *pcVar7;
  BOOLEAN BVar8;
  bool bVar9;
  int iVar10;
  FRunnableThread *pFVar11;
  ushort uStack_2e;
  int iStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  int iStack_24;
  undefined2 local_20;
  
  LOCK();
  paVar1 = &this->RunCount;
  aVar4 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  pvVar5 = ((param_1.Ptr)->MemLock).Mutex.Mutex.Ptr;
  lpCriticalSection = &this->Lock;
  uStack_2e = (ushort)pvVar5;
  iStack_2c = (int)((ulonglong)pvVar5 >> 0x10);
  uStack_28 = (undefined2)((ulonglong)pvVar5 >> 0x30);
  ((param_1.Ptr)->MemLock).Mutex.Mutex.Ptr = (void *)0x0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar10 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x12,2,1,&(this->PendingWork).AllocatorInstance,&(this->PendingWork).ArrayNum,
                      &(this->PendingWork).ArrayMax);
  pFVar3 = (this->PendingWork).AllocatorInstance.Data + (longlong)iVar10 * 0x12;
  *(uint *)pFVar3 = (uint)uStack_2e << 0x10;
  *(int *)(pFVar3 + 4) = iStack_2c;
  *(int *)(pFVar3 + 8) = CONCAT22(uStack_26,uStack_28);
  *(int *)(pFVar3 + 0xc) = iStack_24;
  *(undefined2 *)(pFVar3 + 0x10) = local_20;
  LOCK();
  this->PendingCount = (atomic<int>)((int)this->PendingCount + 1);
  UNLOCK();
  (**(code **)(((this->WakeEvent).Event)->_padding_ + 0x10))();
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (aVar4 == (atomic<int>)0x0) {
    LOCK();
    this->RunCount = (atomic<int>)((int)this->RunCount + 1);
    UNLOCK();
    pFVar11 = FRunnableThread::Create
                        ((FRunnable *)this,L"Ias.CacheIo",0,TPri_BelowNormal,0xffffffffffffffff,None
                        );
    pFVar6 = (this->Thread).Ptr;
    if ((pFVar6 != pFVar11) && ((this->Thread).Ptr = pFVar11, pFVar6 != (FRunnableThread *)0x0)) {
      (**(code **)(pFVar6->_padding_ + 0x30))(pFVar6,1);
    }
  }
  SRWLock = ((param_1.Ptr)->MemLock).Mutex.Mutex.Ptr;
  if (SRWLock != (PSRWLOCK)0x0) {
    this_00 = SRWLock[0x1f].Ptr;
    if (this_00 != (BufCore *)0x0) {
      FIoBuffer::BufCore::CheckRefCount(this_00);
      LOCK();
      piVar2 = &this_00->NumRefs;
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FIoBuffer::BufCore::~BufCore(this_00);
        ::operator_delete(this_00,0x20);
      }
    }
    FDiskCache::~FDiskCache((FDiskCache *)(SRWLock + 4));
    DestructItems<UE::IoStore::JournaledCache::FMemCache::FItem,int>
              (SRWLock[2].Ptr,*(int *)&SRWLock[3].Ptr);
    if (SRWLock[2].Ptr != (void *)0x0) {
      FMemory::Free(SRWLock[2].Ptr);
    }
    BVar8 = TryAcquireSRWLockExclusive(SRWLock);
    if (BVar8 == '\0') {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive(SRWLock);
    }
    ::operator_delete(SRWLock,0x108);
  }
  return;
}

// Run @ 1445fd920

uint __thiscall UE::IoStore::JournaledCache::FServiceThread::Run(FServiceThread *this)

{
  atomic<int> aVar1;
  FEvent *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  double dVar8;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Ias.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Ias.UniqueName;
  FMemScope::FMemScope(&local_res18,&local_res10,true);
  dVar8 = __real_3ff0000000000000 / FGenericPlatformTime::SecondsPerCycle64;
  aVar1 = this->RunCount;
  while (aVar1 != (atomic<int>)0x0) {
    ReceiveWork(this);
    iVar5 = Update(this);
    if (-1 < iVar5) {
      uVar7 = 0xffffffff;
      if (iVar5 != 0x7fffffff) {
        uVar7 = ((longlong)iVar5 * 1000) / (longlong)dVar8;
      }
      pFVar2 = (this->WakeEvent).Event;
      (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,uVar7 & 0xffffffff,0);
    }
    aVar1 = this->RunCount;
  }
  ReceiveWork(this);
  if (((this->Caches).ArrayNum != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Caches.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                         ,0x753,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return 0;
}

// SetGovernor @ 1445ff1c0

void __thiscall
UE::IoStore::JournaledCache::FServiceThread::SetGovernor
          (FServiceThread *this,FDiskCacheGovernor *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined2 local_28;
  
  lpCriticalSection = &this->Lock;
  uStack_36 = SUB82(param_1,0);
  uStack_34 = (undefined4)((ulonglong)param_1 >> 0x10);
  uStack_30 = (undefined2)((ulonglong)param_1 >> 0x30);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x12,2,1,&(this->PendingWork).AllocatorInstance,&(this->PendingWork).ArrayNum
                       ,&(this->PendingWork).ArrayMax);
    pFVar1 = (this->PendingWork).AllocatorInstance.Data + (longlong)iVar2 * 0x12;
    *(uint *)pFVar1 = CONCAT22(uStack_36,2);
    *(undefined4 *)(pFVar1 + 4) = uStack_34;
    *(uint *)(pFVar1 + 8) = CONCAT22(uStack_2e,uStack_30);
    *(undefined4 *)(pFVar1 + 0xc) = uStack_2c;
    *(undefined2 *)(pFVar1 + 0x10) = local_28;
    LOCK();
    this->PendingCount = (atomic<int>)((int)this->PendingCount + 1);
    UNLOCK();
    (**(code **)(((this->WakeEvent).Event)->_padding_ + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001445ff263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// StartThread @ 144601230

void __thiscall UE::IoStore::JournaledCache::FServiceThread::StartThread(FServiceThread *this)

{
  FRunnableThread *pFVar1;
  FRunnableThread *pFVar2;
  
  LOCK();
  this->RunCount = (atomic<int>)((int)this->RunCount + 1);
  UNLOCK();
  pFVar2 = FRunnableThread::Create
                     ((FRunnable *)this,L"Ias.CacheIo",0,TPri_BelowNormal,0xffffffffffffffff,None);
  pFVar1 = (this->Thread).Ptr;
  if ((pFVar1 != pFVar2) && ((this->Thread).Ptr = pFVar2, pFVar1 != (FRunnableThread *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014460127f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    return;
  }
  return;
}

// Stop @ 144601440

void __thiscall UE::IoStore::JournaledCache::FServiceThread::Stop(FServiceThread *this)

{
  LOCK();
  this->RunCount = (atomic<int>)((int)this->RunCount + -1);
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00014460144b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->WakeEvent).Event)->_padding_ + 0x10))();
  return;
}

// SubmitWork @ 144601460

void __thiscall
UE::IoStore::JournaledCache::FServiceThread::SubmitWork
          (FServiceThread *this,FWork *param_1,uint param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  lpCriticalSection = &this->Lock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((param_1 == (FWork *)0x0) && (param_2 != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x12,2,param_2,&(this->PendingWork).AllocatorInstance,
                     &(this->PendingWork).ArrayNum,&(this->PendingWork).ArrayMax);
  if (param_2 != 0) {
    memcpy((this->PendingWork).AllocatorInstance.Data + (longlong)iVar3 * 0x12,param_1,
           (longlong)(int)param_2 * 0x12);
  }
  LOCK();
  this->PendingCount = (atomic<int>)((int)this->PendingCount + 1);
  UNLOCK();
  (**(code **)(((this->WakeEvent).Event)->_padding_ + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00014460153d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// UnregisterCache @ 14460af00

void __thiscall
UE::IoStore::JournaledCache::FServiceThread::UnregisterCache(FServiceThread *this,FCache *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined2 local_28;
  
  lpCriticalSection = &this->Lock;
  uStack_36 = SUB82(param_1,0);
  uStack_34 = (undefined4)((ulonglong)param_1 >> 0x10);
  uStack_30 = (undefined2)((ulonglong)param_1 >> 0x30);
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x12,2,1,&(this->PendingWork).AllocatorInstance,&(this->PendingWork).ArrayNum
                       ,&(this->PendingWork).ArrayMax);
    pFVar1 = (this->PendingWork).AllocatorInstance.Data + (longlong)iVar2 * 0x12;
    *(uint *)pFVar1 = CONCAT22(uStack_36,1);
    *(undefined4 *)(pFVar1 + 4) = uStack_34;
    *(uint *)(pFVar1 + 8) = CONCAT22(uStack_2e,uStack_30);
    *(undefined4 *)(pFVar1 + 0xc) = uStack_2c;
    *(undefined2 *)(pFVar1 + 0x10) = local_28;
    LOCK();
    this->PendingCount = (atomic<int>)((int)this->PendingCount + 1);
    UNLOCK();
    (**(code **)(((this->WakeEvent).Event)->_padding_ + 0x10))();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    this->RunCount = (atomic<int>)((int)this->RunCount + -1);
    UNLOCK();
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// Update @ 14460afc0

int __thiscall UE::IoStore::JournaledCache::FServiceThread::Update(FServiceThread *this)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FIoBuffer *pFVar4;
  BufCore *pBVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  EIoErrorCode EVar12;
  ulonglong uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  LARGE_INTEGER LVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined2 local_res18;
  undefined2 local_res1a;
  uint local_res20;
  LARGE_INTEGER local_68;
  LARGE_INTEGER local_60;
  longlong local_58;
  
  if ((this->Caches).ArrayNum == 0) {
    return 0x7fffffff;
  }
  uVar13 = 0xffffffff;
  if (this->Governor == (FDiskCacheGovernor *)0x0) {
    local_res8[0] = 0;
    bVar8 = `UE::IoStore::JournaledCache::FServiceThread::Update'::__l6::<lambda_1>::operator()
                      (local_res8);
    if (bVar8) goto LAB_14460b022;
  }
  else {
LAB_14460b022:
    pFVar15 = (this->Caches).AllocatorInstance.Data;
    iVar11 = (this->Caches).ArrayNum;
    pFVar3 = pFVar15 + (longlong)iVar11 * 8;
    while( true ) {
      if ((this->Caches).ArrayNum != iVar11) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<UE::IoStore::JournaledCache::FCache,TDefaultDelete<UE::IoStore::JournaledCache::FCache>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar15 == pFVar3) break;
      uVar10 = UpdateCache(this,*(FCache **)pFVar15);
      if (uVar10 < (uint)uVar13) {
        uVar13 = (ulonglong)uVar10;
      }
      pFVar15 = pFVar15 + 8;
    }
  }
  if ((this->ActiveReads).ArrayNum == 0) {
    return (int)uVar13;
  }
  QueryPerformanceCounter(&local_68);
  lVar17 = uVar13 + local_68.QuadPart;
  bVar8 = -1 < CpuChannel->Enabled;
  local_58 = lVar17;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1917,"IasCache::ProcessReads",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
               ,0x77d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1917);
  }
  local_res20 = (this->ActiveReads).ArrayNum;
  uVar10 = 0;
  LVar16 = local_68;
  uVar14 = uVar10;
  if (local_res20 != 0) {
    do {
      bVar18 = -1 < CpuChannel->Enabled;
      if (bVar18) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1922,"IasCache::ActiveRead",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                   ,0x782);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1922);
      }
      uVar14 = 0;
      if ((int)uVar10 < (this->ActiveReads).ArrayNum) {
        uVar14 = ~uVar10 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar11 = (*pcVar7)();
        return iVar11;
      }
      uVar1 = uVar10 + 1;
      pFVar3 = (this->ActiveReads).AllocatorInstance.Data;
      uVar14 = 0;
      if ((int)uVar1 < (this->ActiveReads).ArrayNum) {
        uVar14 = ~uVar1 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        iVar11 = (*pcVar7)();
        return iVar11;
      }
      uVar14 = uVar10 + 2;
      EVar12 = Cancelled;
      pFVar15 = (this->ActiveReads).AllocatorInstance.Data;
      pFVar4 = *(FIoBuffer **)(pFVar15 + (longlong)(int)uVar1 * 0x12 + 10);
      pFVar15 = pFVar15 + (longlong)(int)uVar1 * 0x12;
      if ((pFVar4 != (FIoBuffer *)0x0) &&
         (EVar12 = FDiskCache::Materialize
                             ((FDiskCache *)
                              (*(longlong *)(pFVar3 + (longlong)(int)uVar10 * 0x12 + 2) + 0x20),
                              *(ulong64 *)(pFVar3 + (longlong)(int)uVar10 * 0x12 + 10),pFVar4,0),
         EVar12 == Ok)) {
        pBVar5 = (pFVar4->CorePtr).Reference;
        FOnDemandIoBackendStats::OnCacheGet
                  (GStatistics,(ulonglong)CONCAT14(pBVar5->DataSizeHigh,pBVar5->DataSizeLow));
      }
      puVar6 = *(undefined8 **)(pFVar15 + 2);
      local_res18 = *(undefined2 *)pFVar15;
      local_res1a = (undefined2)EVar12;
      (**(code **)*puVar6)(puVar6,&local_res18,1);
      QueryPerformanceCounter(&local_60);
      lVar17 = local_58;
      LVar16 = local_60;
      if (local_58 <= local_60.QuadPart) {
        if (bVar18) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        break;
      }
      if (bVar18) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      uVar10 = uVar14;
    } while (uVar14 < local_res20);
    if (uVar14 != 0) goto LAB_14460b2e6;
  }
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("Index > 0",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                      ,0x79c,L"");
  if (bVar18) {
    pcVar7 = (code *)swi(3);
    iVar11 = (*pcVar7)();
    return iVar11;
  }
LAB_14460b2e6:
  uVar10 = 0;
  if ((int)uVar14 <= (this->ActiveReads).ArrayNum) {
    uVar10 = ~uVar14 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         ), bVar18)) {
    pcVar7 = (code *)swi(3);
    iVar11 = (*pcVar7)();
    return iVar11;
  }
  if (uVar14 != 0) {
    pFVar3 = (this->ActiveReads).AllocatorInstance.Data;
    iVar11 = (this->ActiveReads).ArrayNum - uVar14;
    if (iVar11 != 0) {
      memmove(pFVar3,pFVar3 + (longlong)(int)uVar14 * 0x12,(longlong)iVar11 * 0x12);
    }
    piVar2 = &(this->ActiveReads).ArrayNum;
    *piVar2 = *piVar2 - uVar14;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x12,2,&(this->ActiveReads).AllocatorInstance,(this->ActiveReads).ArrayNum,
               &(this->ActiveReads).ArrayMax);
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (int)lVar17 - LVar16.s.LowPart;
}

// UpdateCache @ 14460b580

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
UE::IoStore::JournaledCache::FServiceThread::UpdateCache(FServiceThread *this,FCache *param_1)

{
  FDiskCacheGovernor *pFVar1;
  IFileHandle *pIVar2;
  ushort uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  uVar5 = (ulonglong)(uint)param_1->Demand;
  iVar4 = FDiskCacheGovernor::TryBeginWrite
                    (&this->Governor->StreamingCacheState,(uint)param_1->Demand);
  lVar7 = (longlong)iVar4;
  if (iVar4 < 1) {
    uVar6 = -iVar4;
  }
  else {
    if ((__GTraceCounterIasMemDemand.Value != uVar5) &&
       (__GTraceCounterIasMemDemand.Value = uVar5, -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterIasMemDemand.CounterId == (atomic<unsigned_int>)0x0) {
        uVar3 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterIasMemDemand.CounterName,TraceCounterType_Int,
                           __GTraceCounterIasMemDemand.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterIasMemDemand.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterIasMemDemand.CounterId._2_2_ = 0;
          __GTraceCounterIasMemDemand.CounterId._0_2_ = uVar3;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterIasMemDemand.CounterId._0_2_,__GTraceCounterIasMemDemand.Value);
    }
    if ((__GTraceCounterIasAllowance.Value != 0) &&
       (__GTraceCounterIasAllowance.Value = 0, -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterIasAllowance.CounterId == (atomic<unsigned_int>)0x0) {
        uVar3 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterIasAllowance.CounterName,TraceCounterType_Int,
                           __GTraceCounterIasAllowance.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterIasAllowance.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterIasAllowance.CounterId._2_2_ = 0;
          __GTraceCounterIasAllowance.CounterId._0_2_ = uVar3;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterIasAllowance.CounterId._0_2_,__GTraceCounterIasAllowance.Value);
    }
    if ((__GTraceCounterIasAllowance.Value != lVar7) &&
       (__GTraceCounterIasAllowance.Value = lVar7, -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterIasAllowance.CounterId == (atomic<unsigned_int>)0x0) {
        uVar3 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterIasAllowance.CounterName,TraceCounterType_Int,
                           __GTraceCounterIasAllowance.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterIasAllowance.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterIasAllowance.CounterId._2_2_ = 0;
          __GTraceCounterIasAllowance.CounterId._0_2_ = uVar3;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterIasAllowance.CounterId._0_2_,__GTraceCounterIasAllowance.Value);
    }
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2099,"IasCache::Update",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\JournaledCache.cpp"
                 ,0x833);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2099);
    }
    uVar6 = FCache::WriteMemToDisk(param_1,iVar4);
    uVar5 = (ulonglong)(iVar4 - uVar6);
    if ((__GTraceCounterIasAllowance.Value != uVar5) &&
       (__GTraceCounterIasAllowance.Value = uVar5, -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterIasAllowance.CounterId == (atomic<unsigned_int>)0x0) {
        uVar3 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterIasAllowance.CounterName,TraceCounterType_Int,
                           __GTraceCounterIasAllowance.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterIasAllowance.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterIasAllowance.CounterId._2_2_ = 0;
          __GTraceCounterIasAllowance.CounterId._0_2_ = uVar3;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterIasAllowance.CounterId._0_2_,__GTraceCounterIasAllowance.Value);
    }
    __GTraceCounterIasOpCount.Value = __GTraceCounterIasOpCount.Value + 1;
    if (-1 < CountersChannel->Enabled) {
      if (__GTraceCounterIasOpCount.CounterId == (atomic<unsigned_int>)0x0) {
        uVar3 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterIasOpCount.CounterName,TraceCounterType_Int,
                           __GTraceCounterIasOpCount.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterIasOpCount.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterIasOpCount.CounterId._2_2_ = 0;
          __GTraceCounterIasOpCount.CounterId._0_2_ = uVar3;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterIasOpCount.CounterId._0_2_,__GTraceCounterIasOpCount.Value);
    }
    pFVar1 = this->Governor;
    (pFVar1->StreamingCacheState).RunOff = iVar4 - uVar6;
    if (((pFVar1->StreamingCacheState).OpCount < (pFVar1->StreamingCacheState).MaxOpCount) &&
       ((longlong)(pFVar1->StreamingCacheState).CyclesSuspended < 1)) {
      uVar6 = (uint)((pFVar1->StreamingCacheState).OpInterval >> 2);
    }
    else {
      uVar6 = -(int)((pFVar1->StreamingCacheState).OpInterval >> 2);
      (pFVar1->StreamingCacheState).State = Waiting;
    }
    if ((int)uVar6 < 0) {
      __GTraceCounterIasOpCount.Value = __GTraceCounterIasOpCount.Value + 1;
      uVar6 = -uVar6;
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterIasOpCount.CounterId == (atomic<unsigned_int>)0x0) {
          uVar3 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterIasOpCount.CounterName,TraceCounterType_Int,
                             __GTraceCounterIasOpCount.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterIasOpCount.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterIasOpCount.CounterId._2_2_ = 0;
            __GTraceCounterIasOpCount.CounterId._0_2_ = uVar3;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterIasOpCount.CounterId._0_2_,__GTraceCounterIasOpCount.Value);
      }
      __GTraceCounterIasOpCount.Value = __GTraceCounterIasOpCount.Value + 3;
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterIasOpCount.CounterId == (atomic<unsigned_int>)0x0) {
          uVar3 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterIasOpCount.CounterName,TraceCounterType_Int,
                             __GTraceCounterIasOpCount.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterIasOpCount.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterIasOpCount.CounterId._2_2_ = 0;
            __GTraceCounterIasOpCount.CounterId._0_2_ = uVar3;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterIasOpCount.CounterId._0_2_,__GTraceCounterIasOpCount.Value);
      }
      pIVar2 = (param_1->DiskCache).DataHandle.Ptr;
      if (pIVar2 != (IFileHandle *)0x0) {
        (param_1->DiskCache).DataHandle.Ptr = (IFileHandle *)0x0;
        (**(code **)*pIVar2)();
      }
      FDiskJournal::Flush(&(param_1->DiskCache).Journal);
      AcquireSRWLockShared((PSRWLOCK)&param_1->DiskCache);
      if (6 < (byte)LogIas._0_1_) {
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
      }
      ReleaseSRWLockShared((PSRWLOCK)&param_1->DiskCache);
      FDiskCache::OpenDataFile(&param_1->DiskCache);
    }
    if ((__GTraceCounterIasAllowance.Value != 0) &&
       (__GTraceCounterIasAllowance.Value = 0, -1 < CountersChannel->Enabled)) {
      if (__GTraceCounterIasAllowance.CounterId == (atomic<unsigned_int>)0x0) {
        uVar3 = FCountersTrace::OutputInitCounter
                          (__GTraceCounterIasAllowance.CounterName,TraceCounterType_Int,
                           __GTraceCounterIasAllowance.CounterFlags & 0xf);
        LOCK();
        if (__GTraceCounterIasAllowance.CounterId == (atomic<unsigned_int>)0x0) {
          __GTraceCounterIasAllowance.CounterId._2_2_ = 0;
          __GTraceCounterIasAllowance.CounterId._0_2_ = uVar3;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue
                (__GTraceCounterIasAllowance.CounterId._0_2_,__GTraceCounterIasAllowance.Value);
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return uVar6;
}

// operator() @ 1504c1b30

bool __thiscall
`UE::IoStore::JournaledCache::FServiceThread::Update'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8233052281767987049>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8233052281767987049>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


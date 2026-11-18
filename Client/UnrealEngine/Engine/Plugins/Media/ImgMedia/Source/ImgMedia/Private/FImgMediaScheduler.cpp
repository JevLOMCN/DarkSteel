// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 11

// FImgMediaScheduler @ 14ea38be0

FImgMediaScheduler * __thiscall FImgMediaScheduler::FImgMediaScheduler(FImgMediaScheduler *this)

{
  this->_padding_ = (longlong)&_vftable__for__IMediaClockSink__;
  (this->AllThreads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IImgMediaScheduler__;
  (this->AllThreads).ArrayNum = 0;
  (this->AllThreads).ArrayMax = 0;
  (this->AvailableThreads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvailableThreads).ArrayNum = 0;
  (this->AvailableThreads).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->Loaders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Loaders).ArrayNum = 0;
  (this->Loaders).ArrayMax = 0;
  this->LoaderRoundRobin = -1;
  return this;
}

// ~FImgMediaScheduler @ 14ea3b120

void __thiscall FImgMediaScheduler::~FImgMediaScheduler(FImgMediaScheduler *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&_vftable__for__IMediaClockSink__;
  lpCriticalSection = &this->CriticalSection;
  this->_padding_ = (longlong)&_vftable__for__IImgMediaScheduler__;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar5 = (this->AllThreads).AllocatorInstance.Data;
    iVar2 = (this->AllThreads).ArrayNum;
    pFVar4 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->AllThreads).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FImgMediaSchedulerThread_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar4) break;
      plVar3 = *(longlong **)pFVar5;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,1);
      }
      pFVar5 = pFVar5 + 8;
    }
    piVar1 = &(this->AllThreads).ArrayMax;
    (this->AllThreads).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->AllThreads).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->AvailableThreads).ArrayMax;
    (this->AvailableThreads).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->AvailableThreads).AllocatorInstance,0,piVar1);
    }
    this->LoaderRoundRobin = -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<TWeakPtr<FImgMediaLoader,1>,int>
              ((TWeakPtr<FImgMediaLoader,1> *)(this->Loaders).AllocatorInstance.Data,
               (this->Loaders).ArrayNum);
    pFVar4 = (this->Loaders).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (this->AvailableThreads).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (this->AllThreads).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    this->_padding_ = (longlong)&___7IImgMediaScheduler__6B_;
    this->_padding_ = (longlong)&___7IMediaClockSink__6B_;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CreateWorker @ 14ea467e0

void __thiscall FImgMediaScheduler::CreateWorker(FImgMediaScheduler *this,uint param_1)

{
  int *piVar1;
  TArray<FImgMediaSchedulerThread_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FRunnable *pFVar7;
  FRunnable FVar8;
  ForAnyElementType FVar9;
  FRunnable *local_28;
  FString local_20;
  
  pFVar7 = ::operator_new(0x38);
  if (pFVar7 == (FRunnable *)0x0) {
    pFVar7 = (FRunnable *)0x0;
  }
  else {
    pFVar7[3] = (FRunnable)0x0;
    *pFVar7 = (FRunnable)&FImgMediaSchedulerThread::_vftable__for__FRunnable__;
    *(undefined1 *)(pFVar7 + 4) = 0;
    pFVar7[1] = (FRunnable)&FImgMediaSchedulerThread::_vftable__for__FSingleThreadRunnable__;
    pFVar7[2] = (FRunnable)&this->_padding_;
    FVar8 = (FRunnable)FGenericPlatformProcess::GetSynchEventFromPool(false);
    pFVar7[6] = FVar8;
    if (FVar8 == (FRunnable)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorkEvent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Scheduler\\ImgMediaSchedulerThread.cpp"
                         ,0x17,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    ThreadIndex = ThreadIndex + 1;
    ::FString::PrintfImpl(&local_20,L"FImgMediaSchedulerThread %d");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_20.Data.ArrayNum != 0) {
      FVar9.Data = local_20.Data.AllocatorInstance.Data;
    }
    FVar8 = (FRunnable)
            FRunnableThread::Create
                      (pFVar7,(wchar_t *)FVar9.Data,param_1,TPri_Normal,0xffffffffffffffff,None);
    pFVar7[5] = FVar8;
    if (FVar8 == (FRunnable)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Thread != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Scheduler\\ImgMediaSchedulerThread.cpp"
                         ,0x1d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = (this->AvailableThreads).AllocatorInstance.Data;
  local_28 = pFVar7;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(this->AvailableThreads).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->AvailableThreads).ArrayNum;
  piVar1 = &(this->AvailableThreads).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->AvailableThreads).AllocatorInstance,piVar1);
  }
  pTVar2 = &this->AllThreads;
  (this->AvailableThreads).ArrayNum = iVar6 + 1;
  *(FRunnable **)((this->AvailableThreads).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_28;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar3 + (longlong)(this->AllThreads).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->AllThreads).ArrayNum;
  piVar1 = &(this->AllThreads).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->AllThreads).ArrayNum = iVar6 + 1;
  *(FRunnable **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28;
  return;
}

// GetWorkOrReturnToPool @ 14ea50550

/* WARNING: Type propagation algorithm not settling */

IQueuedWork * __thiscall
FImgMediaScheduler::GetWorkOrReturnToPool
          (FImgMediaScheduler *this,FImgMediaSchedulerThread *param_1)

{
  int *lpCriticalSection;
  int *piVar1;
  int iVar2;
  FImgMediaSchedulerThread **ppFVar3;
  FImgMediaLoader *this_00;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  uint uVar7;
  atomic<int> aVar8;
  int iVar9;
  IQueuedWork *pIVar10;
  uint uVar11;
  undefined8 *puVar12;
  TReferenceControllerBase<1> *pTVar13;
  int iVar14;
  FImgMediaSchedulerThread *local_res10;
  
  lpCriticalSection = &(this->AvailableThreads).ArrayNum;
  local_res10 = param_1;
  if (lpCriticalSection == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((local_res10 == (FImgMediaSchedulerThread *)0x0) ||
      (bVar6 = FGenericPlatformProcess::SupportsMultithreading(), bVar6)) &&
     (iVar9 = *(int *)&(this->Loaders).AllocatorInstance.Data, 0 < iVar9)) {
    iVar14 = 0;
    do {
      iVar14 = iVar14 + 1;
      iVar2 = *(int *)&(this->Loaders).AllocatorInstance.Data;
      uVar11 = ((this->Loaders).ArrayNum + 1) % iVar2;
      (this->Loaders).ArrayNum = uVar11;
      uVar7 = 0;
      if ((int)uVar11 < iVar2) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pIVar10 = (IQueuedWork *)(*pcVar4)();
        return pIVar10;
      }
      puVar12 = (undefined8 *)
                ((longlong)(int)uVar11 * 0x10 +
                (longlong)(this->CriticalSection).CriticalSection.Opaque3[2]);
      pTVar13 = (TReferenceControllerBase<1> *)puVar12[1];
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_14ea50644:
        RemoveLoader((FImgMediaScheduler *)&this[-1].LoaderRoundRobin,(this->Loaders).ArrayNum);
      }
      else {
        aVar5 = pTVar13->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            pTVar13 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14ea50644;
          }
          LOCK();
          aVar8 = pTVar13->SharedReferenceCount;
          bVar6 = aVar5 == aVar8;
          if (bVar6) {
            pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar8 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar8;
        } while (!bVar6);
        this_00 = (FImgMediaLoader *)*puVar12;
        if (this_00 == (FImgMediaLoader *)0x0) goto LAB_14ea50644;
        pIVar10 = FImgMediaLoader::GetWork(this_00);
        if (pIVar10 != (IQueuedWork *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar13);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          return pIVar10;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    } while (iVar14 < iVar9);
  }
  if (local_res10 != (FImgMediaSchedulerThread *)0x0) {
    ppFVar3 = *(FImgMediaSchedulerThread ***)&(this->AllThreads).ArrayNum;
    if (((ppFVar3 <= &local_res10) &&
        (&local_res10 <
         ppFVar3 + *(int *)((longlong)&(this->AvailableThreads).AllocatorInstance.Data + 4))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pIVar10 = (IQueuedWork *)(*pcVar4)();
      return pIVar10;
    }
    iVar9 = *(int *)&(this->AvailableThreads).AllocatorInstance.Data;
    piVar1 = (int *)((longlong)&(this->AvailableThreads).AllocatorInstance.Data + 4);
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&(this->AllThreads).ArrayNum,piVar1);
    }
    *(int *)&(this->AvailableThreads).AllocatorInstance.Data = iVar9 + 1;
    *(FImgMediaSchedulerThread **)(*(longlong *)&(this->AllThreads).ArrayNum + (longlong)iVar9 * 8)
         = local_res10;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (IQueuedWork *)0x0;
}

// GetWorkerStackSize @ 14ea50780

uint __thiscall FImgMediaScheduler::GetWorkerStackSize(FImgMediaScheduler *this)

{
  uint uVar1;
  UClass *this_00;
  
  this_00 = Z_Construct_UClass_UImgMediaSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  uVar1 = *(uint *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x18;
  if (uVar1 < 0x20000) {
    uVar1 = 0x20000;
  }
  return uVar1;
}

// Initialize @ 14ea51570

void __thiscall FImgMediaScheduler::Initialize(FImgMediaScheduler *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  int iVar2;
  UClass *pUVar3;
  
  if ((this->AllThreads).ArrayNum < 1) {
    pUVar3 = Z_Construct_UClass_UImgMediaSettings_NoRegister();
    if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar3);
    }
    iVar2 = *(int *)&(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x14;
    if (iVar2 < 1) {
      iVar2 = FWindowsPlatformMisc::NumberOfWorkerThreadsToSpawn();
    }
    pUVar3 = Z_Construct_UClass_UImgMediaSettings_NoRegister();
    if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar3);
    }
    lpCriticalSection = &this->CriticalSection;
    uVar1 = *(uint *)&(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x18;
    if (uVar1 < 0x20000) {
      uVar1 = 0x20000;
    }
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      CreateWorker(this,uVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// RegisterLoader @ 14ea59210

void __thiscall
FImgMediaScheduler::RegisterLoader(FImgMediaScheduler *this,TSharedRef<FImgMediaLoader,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FImgMediaLoader *local_18;
  TReferenceControllerBase<1> *local_10;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->WeakReferenceCount = (atomic<int>)((int)local_10->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar5 = (this->Loaders).AllocatorInstance.Data;
  if ((pFVar5 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)(this->Loaders).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->Loaders).ArrayNum;
  piVar1 = &(this->Loaders).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Loaders).AllocatorInstance,piVar1);
  }
  (this->Loaders).ArrayNum = iVar4 + 1;
  pFVar5 = (this->Loaders).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(FImgMediaLoader **)pFVar5 = local_18;
  *(TReferenceControllerBase<1> **)(pFVar5 + 8) = local_10;
                    /* WARNING: Could not recover jumptable at 0x00014ea59315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RemoveLoader @ 14ea5a770

void __thiscall FImgMediaScheduler::RemoveLoader(FImgMediaScheduler *this,int param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  
  if ((-1 < param_1) && (param_1 < (this->Loaders).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (this->Loaders).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    _Dst = (this->Loaders).AllocatorInstance.Data + (longlong)param_1 * 0x10;
    plVar2 = *(longlong **)(_Dst + 8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
    iVar6 = (this->Loaders).ArrayNum + ~param_1;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 0x10,(longlong)iVar6 << 4);
    }
    piVar1 = &(this->Loaders).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->Loaders).AllocatorInstance,(this->Loaders).ArrayNum,
               &(this->Loaders).ArrayMax);
    if (((param_1 <= this->LoaderRoundRobin) &&
        (iVar6 = this->LoaderRoundRobin + -1, this->LoaderRoundRobin = iVar6, iVar6 < -1)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("LoaderRoundRobin >= INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Scheduler\\ImgMediaScheduler.cpp"
                           ,0x86,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Shutdown @ 14ea5c0b0

void __thiscall FImgMediaScheduler::Shutdown(FImgMediaScheduler *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar5 = (this->AllThreads).AllocatorInstance.Data;
    iVar3 = (this->AllThreads).ArrayNum;
    pFVar2 = pFVar5 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->AllThreads).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FImgMediaSchedulerThread_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar2) break;
      plVar4 = *(longlong **)pFVar5;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,1);
      }
      pFVar5 = pFVar5 + 8;
    }
    piVar1 = &(this->AllThreads).ArrayMax;
    (this->AllThreads).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->AllThreads).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->AvailableThreads).ArrayMax;
    (this->AvailableThreads).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->AvailableThreads).AllocatorInstance,0,piVar1);
    }
    this->LoaderRoundRobin = -1;
                    /* WARNING: Could not recover jumptable at 0x00014ea5c193. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TickInput @ 14ea5cf00

void __thiscall
FImgMediaScheduler::TickInput(FImgMediaScheduler *this,FTimespan param_1,FTimespan param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar5 = (this->AvailableThreads).ArrayNum;
  while( true ) {
    if ((iVar5 < 1) || (lVar4 = (**(code **)this->_padding_)(&this->_padding_,0), lVar4 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014ea5d061. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    if (((this->AvailableThreads).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (this->AvailableThreads).ArrayNum;
    lVar1 = *(longlong *)
             ((this->AvailableThreads).AllocatorInstance.Data + (longlong)iVar5 * 8 + -8);
    iVar5 = iVar5 + -1;
    (this->AvailableThreads).ArrayNum = iVar5;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->AvailableThreads).AllocatorInstance,iVar5,
               &(this->AvailableThreads).ArrayMax);
    if ((lVar1 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Thread != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Scheduler\\ImgMediaScheduler.cpp"
                           ,0xa1,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(longlong *)(lVar1 + 0x18) != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("QueuedWork == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Scheduler\\ImgMediaSchedulerThread.cpp"
                           ,0x35,L""), bVar3)) break;
    *(longlong *)(lVar1 + 0x18) = lVar4;
    (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x10))();
    iVar5 = (this->AvailableThreads).ArrayNum;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// UnregisterLoader @ 14ea5ea40

void __thiscall
FImgMediaScheduler::UnregisterLoader
          (FImgMediaScheduler *this,TSharedRef<FImgMediaLoader,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FImgMediaLoader *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  atomic<int> aVar8;
  FImgMediaLoader *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  FImgMediaLoader *pFVar11;
  FImgMediaLoader *pFVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar3 = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar5 = (this->Loaders).AllocatorInstance.Data;
  iVar13 = (this->Loaders).ArrayNum;
  pFVar14 = pFVar5;
  do {
    if (pFVar14 == pFVar5 + (longlong)iVar13 * 0x10) {
      iVar13 = -1;
LAB_14ea5eb4c:
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      RemoveLoader(this,iVar13);
                    /* WARNING: Could not recover jumptable at 0x00014ea5eb99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    pFVar12 = (FImgMediaLoader *)0x0;
    pFVar9 = *(FImgMediaLoader **)(pFVar14 + 8);
    pFVar11 = pFVar9;
    if (pFVar9 != (FImgMediaLoader *)0x0) {
      iVar6 = (int)pFVar9->_padding_;
      do {
        pFVar11 = pFVar12;
        if (iVar6 == 0) goto LAB_14ea5eaf5;
        LOCK();
        iVar7 = (int)pFVar9->_padding_;
        bVar15 = iVar6 == iVar7;
        if (bVar15) {
          *(int *)&pFVar9->_padding_ = iVar6 + 1;
          iVar7 = iVar6;
        }
        UNLOCK();
        iVar6 = iVar7;
      } while (!bVar15);
      pFVar12 = *(FImgMediaLoader **)pFVar14;
      pFVar11 = pFVar9;
    }
LAB_14ea5eaf5:
    pTVar10 = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar4->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar10 = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar8 = pTVar4->SharedReferenceCount;
        bVar15 = aVar2 == aVar8;
        if (bVar15) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar8 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar8;
      } while (!bVar15);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar11);
    pFVar9 = pFVar3;
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      pFVar9 = (FImgMediaLoader *)0x0;
    }
    if (pFVar12 == pFVar9) {
      iVar13 = (int)((longlong)pFVar14 - (longlong)pFVar5 >> 4);
      goto LAB_14ea5eb4c;
    }
    pFVar14 = pFVar14 + 0x10;
  } while( true );
}


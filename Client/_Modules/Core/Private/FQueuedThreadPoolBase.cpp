// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// ~FQueuedThreadPoolBase @ 1416d8fd0

void __thiscall FQueuedThreadPoolBase::~FQueuedThreadPoolBase(FQueuedThreadPoolBase *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_> FVar2;
  
  this->_padding_ = (longlong)&___7FQueuedThreadPoolBase__6B_;
  Destroy(this);
  pFVar1 = (this->AllThreads).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->QueuedThreads).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->QueuedWork).PriorityQueuedWork.AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)0x0) {
    FVar2 = (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)
            &(this->QueuedWork).PriorityQueuedWork;
  }
  DestructItems<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_> *)FVar2,
             (this->QueuedWork).PriorityQueuedWork.ArrayNum);
  FVar2 = (this->QueuedWork).PriorityQueuedWork.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  this->_padding_ = (longlong)&___7FQueuedThreadPool__6B_;
  return;
}

// AddQueuedWork @ 1416df480

void __thiscall
FQueuedThreadPoolBase::AddQueuedWork
          (FQueuedThreadPoolBase *this,IQueuedWork *param_1,EQueuedWorkPriority param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  LPCRITICAL_SECTION lpCriticalSection;
  FQueuedThread *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_1 == (IQueuedWork *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InQueuedWork != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                         ,0x539,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->TimeToDie != false) {
                    /* WARNING: Could not recover jumptable at 0x0001416df4d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 8))(param_1);
    return;
  }
  if ((this->SynchQueue == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchQueue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                         ,0x54a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)this->SynchQueue;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  iVar5 = (this->QueuedThreads).ArrayNum;
  if (iVar5 == 0) {
    FThreadPoolPriorityQueue::Enqueue(&this->QueuedWork,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001416df54f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
  uVar6 = iVar5 - 1;
  uVar7 = ~uVar6 >> 0x1f;
  uVar4 = 0;
  if ((int)uVar6 < iVar5) {
    uVar4 = uVar7;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = *(FQueuedThread **)
             ((this->QueuedThreads).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
  uVar4 = 0;
  if ((int)uVar6 < (this->QueuedThreads).ArrayNum) {
    uVar4 = uVar7;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = (this->QueuedThreads).ArrayNum + ~uVar6;
  _Dst = (this->QueuedThreads).AllocatorInstance.Data + (longlong)(int)uVar6 * 8;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar5 << 3);
  }
  piVar1 = &(this->QueuedThreads).ArrayNum;
  *piVar1 = *piVar1 + -1;
  LeaveCriticalSection(lpCriticalSection);
  FQueuedThread::DoWork(this_00,param_1);
  return;
}

// Create @ 1416e6ef0

bool __thiscall
FQueuedThreadPoolBase::Create
          (FQueuedThreadPoolBase *this,uint param_1,uint param_2,EThreadPriority param_3,
          wchar_t *param_4)

{
  bool bVar1;
  
  bVar1 = CreateInternal(this,false,param_1,param_2,param_3,param_4);
  return bVar1;
}

// CreateForkable @ 1416e81b0

bool __thiscall
FQueuedThreadPoolBase::CreateForkable
          (FQueuedThreadPoolBase *this,uint param_1,uint param_2,EThreadPriority param_3,
          wchar_t *param_4)

{
  bool bVar1;
  
  bVar1 = CreateInternal(this,true,param_1,param_2,param_3,param_4);
  return bVar1;
}

// CreateInternal @ 1416e8500

bool __thiscall
FQueuedThreadPoolBase::CreateInternal
          (FQueuedThreadPoolBase *this,bool param_1,uint param_2,uint param_3,
          EThreadPriority param_4,wchar_t *param_5)

{
  int *piVar1;
  int *piVar2;
  TArray<FQueuedThread_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FQueuedThread_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar11;
  ForAnyElementType FVar12;
  code *pcVar13;
  uint uVar14;
  longlong *plVar15;
  longlong *local_68;
  FString local_60 [2];
  
  UE::Trace::ThreadGroupBegin(param_5);
  bVar6 = true;
  if ((this->SynchQueue != (FWindowsRecursiveMutex *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchQueue == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                         ,0x4c7,L""), bVar7)) {
    pcVar13 = (code *)swi(3);
    uVar8 = (*pcVar13)();
    return (bool)uVar8;
  }
  lpCriticalSection = ::operator_new(0x28);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    this->SynchQueue = (FWindowsRecursiveMutex *)0x0;
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
  this->SynchQueue = (FWindowsRecursiveMutex *)lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  if (((this->QueuedThreads).ArrayNum != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("QueuedThreads.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                         ,0x4cb,L""), bVar7)) {
    pcVar13 = (code *)swi(3);
    uVar8 = (*pcVar13)();
    return (bool)uVar8;
  }
  pTVar3 = &this->QueuedThreads;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)param_2);
  }
  piVar1 = &(this->QueuedThreads).ArrayMax;
  (this->QueuedThreads).ArrayNum = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_2,&pTVar3->AllocatorInstance,0,piVar1);
  }
  FThreadPoolPriorityQueue::Reset(&this->QueuedWork);
  if (param_3 < FQueuedThreadPool::OverrideStackSize) {
    param_3 = FQueuedThreadPool::OverrideStackSize;
  }
  plVar15 = (longlong *)0x0;
  if (param_2 != 0) {
    do {
      if (!bVar6) break;
      plVar11 = ::operator_new(0x30);
      local_68 = (longlong *)0x0;
      if (plVar11 != (longlong *)0x0) {
        *plVar11 = 0;
        plVar11[1] = 0;
        plVar11[2] = 0;
        plVar11[3] = 0;
        plVar11[4] = 0;
        plVar11[5] = 0;
        *plVar11 = (longlong)&___7FQueuedThread__6B_;
        plVar11[3] = 0;
        plVar11[4] = 0;
        plVar11[5] = 0;
        local_68 = plVar11;
      }
      ::FString::PrintfImpl(local_60,L"%s #%d");
      if (param_1) {
        pcVar13 = *(code **)(*local_68 + 0x38);
      }
      else {
        pcVar13 = *(code **)(*local_68 + 0x30);
      }
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_60[0].Data.ArrayNum != 0) {
        FVar12.Data = local_60[0].Data.AllocatorInstance.Data;
      }
      cVar9 = (*pcVar13)(local_68,this,param_3,param_4,FVar12.Data);
      if (cVar9 == '\0') {
        bVar6 = false;
        if (local_68 != (longlong *)0x0) {
          (**(code **)(*local_68 + 0x28))(local_68,1);
        }
      }
      else {
        pFVar5 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < pFVar5 + (longlong)*piVar1 * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar13 = (code *)swi(3);
          uVar8 = (*pcVar13)();
          return (bool)uVar8;
        }
        iVar10 = (this->QueuedThreads).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar3->AllocatorInstance,piVar1);
        }
        pTVar4 = &this->AllThreads;
        (this->QueuedThreads).ArrayNum = iVar10 + 1;
        *(longlong **)((pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_68;
        pFVar5 = (pTVar4->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 <
             pFVar5 + (longlong)(this->AllThreads).ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar13 = (code *)swi(3);
          uVar8 = (*pcVar13)();
          return (bool)uVar8;
        }
        iVar10 = (this->AllThreads).ArrayNum;
        piVar2 = &(this->AllThreads).ArrayMax;
        if (iVar10 == *piVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar4->AllocatorInstance,piVar2);
        }
        (this->AllThreads).ArrayNum = iVar10 + 1;
        *(longlong **)((pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_68;
      }
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
      uVar14 = (int)plVar15 + 1;
      plVar15 = (longlong *)(ulonglong)uVar14;
    } while (uVar14 < param_2);
    if (bVar6 == false) {
      Destroy(this);
    }
  }
  UE::Trace::ThreadGroupEnd();
  LeaveCriticalSection(lpCriticalSection);
  return bVar6;
}

// Destroy @ 1416ea440

void __thiscall FQueuedThreadPoolBase::Destroy(FQueuedThreadPoolBase *this)

{
  int *piVar1;
  TArray<FQueuedThread_*,TSizedDefaultAllocator<32>_> *pTVar2;
  LPCRITICAL_SECTION p_Var3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  IQueuedWork *pIVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  p_Var3 = (LPCRITICAL_SECTION)this->SynchQueue;
  if (p_Var3 == (LPCRITICAL_SECTION)0x0) {
    return;
  }
  EnterCriticalSection(p_Var3);
  this->TimeToDie = true;
  pIVar9 = FThreadPoolPriorityQueue::Dequeue(&this->QueuedWork,(EQueuedWorkPriority *)0x0);
  while (pIVar9 != (IQueuedWork *)0x0) {
    (**(code **)(pIVar9->_padding_ + 8))(pIVar9);
    pIVar9 = FThreadPoolPriorityQueue::Dequeue(&this->QueuedWork,(EQueuedWorkPriority *)0x0);
  }
  FThreadPoolPriorityQueue::Reset(&this->QueuedWork);
  LeaveCriticalSection(p_Var3);
  p_Var3 = (LPCRITICAL_SECTION)this->SynchQueue;
  do {
    if (p_Var3 == (LPCRITICAL_SECTION)0x0) {
LAB_1416ea712:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(p_Var3);
    if ((this->AllThreads).ArrayNum == (this->QueuedThreads).ArrayNum) {
      if (p_Var3 != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(p_Var3);
      }
      p_Var3 = (LPCRITICAL_SECTION)this->SynchQueue;
      if (p_Var3 != (LPCRITICAL_SECTION)0x0) {
        EnterCriticalSection(p_Var3);
        uVar11 = 0;
        pTVar2 = &this->AllThreads;
        uVar12 = uVar11;
        if (0 < (this->AllThreads).ArrayNum) {
          do {
            uVar10 = (uint)uVar11;
            uVar8 = 0;
            if ((int)uVar10 < (this->AllThreads).ArrayNum) {
              uVar8 = ~uVar10 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar4 = *(longlong *)((pTVar2->AllocatorInstance).Data + uVar12);
            LOCK();
            *(undefined1 *)(lVar4 + 0x10) = 1;
            UNLOCK();
            (**(code **)(**(longlong **)(lVar4 + 8) + 0x10))();
            (**(code **)(**(longlong **)(lVar4 + 0x28) + 0x20))();
            FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)(lVar4 + 8));
            plVar5 = *(longlong **)(lVar4 + 0x28);
            *(undefined8 *)(lVar4 + 8) = 0;
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x30))(plVar5,1);
            }
            uVar8 = 0;
            if ((int)uVar10 < (this->AllThreads).ArrayNum) {
              uVar8 = ~uVar10 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar5 = *(longlong **)((pTVar2->AllocatorInstance).Data + uVar12);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x28))(plVar5,1);
            }
            uVar11 = (ulonglong)(uVar10 + 1);
            uVar12 = uVar12 + 8;
          } while ((int)(uVar10 + 1) < (this->AllThreads).ArrayNum);
        }
        piVar1 = &(this->QueuedThreads).ArrayMax;
        (this->QueuedThreads).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->QueuedThreads).AllocatorInstance,0,piVar1);
        }
        piVar1 = &(this->AllThreads).ArrayMax;
        (this->AllThreads).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
        }
        LeaveCriticalSection(p_Var3);
        p_Var3 = (LPCRITICAL_SECTION)this->SynchQueue;
        if (p_Var3 != (LPCRITICAL_SECTION)0x0) {
          DeleteCriticalSection(p_Var3);
          ::operator_delete(p_Var3,0x28);
        }
        this->SynchQueue = (FWindowsRecursiveMutex *)0x0;
        return;
      }
      goto LAB_1416ea712;
    }
    if (p_Var3 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(p_Var3);
    }
    FWindowsPlatformProcess::Sleep(0.0);
    p_Var3 = (LPCRITICAL_SECTION)this->SynchQueue;
  } while( true );
}

// GetNumThreads @ 1416f9690

int __thiscall FQueuedThreadPoolBase::GetNumThreads(FQueuedThreadPoolBase *this)

{
  return (this->AllThreads).ArrayNum;
}

// RetractQueuedWork @ 14170ef50

bool __thiscall
FQueuedThreadPoolBase::RetractQueuedWork(FQueuedThreadPoolBase *this,IQueuedWork *param_1)

{
  TAtomic<int> *pTVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_> FVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar15;
  longlong lVar16;
  ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_> FVar14;
  
  if (this->TimeToDie != false) {
    return false;
  }
  if ((param_1 == (IQueuedWork *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InQueuedWork != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                         ,0x56a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if ((this->SynchQueue == (FWindowsRecursiveMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SynchQueue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                         ,0x56b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)this->SynchQueue;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  uVar11 = (ulonglong)(this->QueuedWork).FirstNonEmptyQueueIndex;
  lVar15 = (longlong)(this->QueuedWork).PriorityQueuedWork.ArrayNum;
  if ((longlong)uVar11 < lVar15) {
    lVar16 = uVar11 << 4;
    uVar12 = uVar11;
    do {
      uVar10 = (uint)uVar12;
      uVar7 = 0;
      if ((int)uVar10 < (this->QueuedWork).PriorityQueuedWork.ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      FVar2 = (this->QueuedWork).PriorityQueuedWork.AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)
               &(this->QueuedWork).PriorityQueuedWork;
      if (FVar2 != (ForElementType<TArray<IQueuedWork_*,TSizedDefaultAllocator<32>_>_>)0x0) {
        FVar14 = FVar2;
      }
      plVar13 = (longlong *)((longlong)FVar14 + lVar16);
      plVar3 = (longlong *)*plVar13;
      for (plVar9 = plVar3; plVar9 != plVar3 + (int)plVar13[1]; plVar9 = plVar9 + 1) {
        if ((IQueuedWork *)*plVar9 == param_1) {
          iVar8 = (int)((longlong)plVar9 - (longlong)plVar3 >> 3);
          if (iVar8 != -1) {
            memmove(plVar3 + iVar8,plVar3 + iVar8 + 1,
                    (longlong)(((int)plVar13[1] - iVar8) + -1) << 3);
            *(int *)(plVar13 + 1) = (int)plVar13[1] + -1;
            bVar5 = true;
            LOCK();
            pTVar1 = &(this->QueuedWork).NumQueuedWork;
            *pTVar1 = (TAtomic<int>)((int)*pTVar1 + -1);
            UNLOCK();
            goto LAB_14170f0c1;
          }
          break;
        }
      }
      uVar12 = (ulonglong)(uVar10 + 1);
      uVar11 = uVar11 + 1;
      lVar16 = lVar16 + 0x10;
    } while ((longlong)uVar11 < lVar15);
  }
  bVar5 = false;
LAB_14170f0c1:
  LeaveCriticalSection(lpCriticalSection);
  return bVar5;
}


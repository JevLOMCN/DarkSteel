// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// Execute @ 141493e20

void __thiscall
AwaitableTask_Detail::
TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>
::Execute(void *this)

{
  byte *pbVar1;
  byte bVar2;
  long64 lVar3;
  long64 lVar4;
  longlong lVar5;
  
  lVar5 = **(longlong **)this;
  if (lVar5 < 3) {
    lVar5 = 1;
  }
  else {
    lVar3 = `Tasks2Tests::BasicPerfTest<10000>'::__l2::Test::Fibonacci(lVar5 + -2);
    lVar4 = `Tasks2Tests::BasicPerfTest<10000>'::__l2::Test::Fibonacci(lVar5 + -1);
    lVar5 = lVar3 + lVar4;
  }
  pbVar1 = (byte *)((longlong)this + 0x54);
  *(longlong *)((longlong)this + 0x48) = lVar5;
  LOCK();
  bVar2 = *pbVar1;
  *pbVar1 = 1;
  UNLOCK();
  if ((bVar2 & 3) == 2) {
    UE::ParkingLot::WakeAll(pbVar1);
  }
  return;
}

// Finish @ 1414957b0

void __thiscall
AwaitableTask_Detail::
TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>
::Finish(void *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  LOCK();
  piVar1 = (int *)((longlong)this + 0x48);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 2) {
    if ((*(ulonglong *)((longlong)this + 0x40) & 0x3e) == 0) {
      bVar4 = LowLevelTasks::FTask::TryCancel((FTask *)((longlong)this + 8),DefaultFlags);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Task.TryCancel()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\Async\\AwaitableTask.h"
                           ,0x157,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  else if ((iVar2 == 1) && (this != (void *)0x0)) {
    if ((*(ulonglong *)((longlong)this + 0x40) & 0x20) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x204,L"State: %d");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(*(longlong *)((longlong)this + 0x30) + 0x18))
              ((longlong)this + 0x30,(longlong)this + 8);
    ::operator_delete(this,0x50);
  }
  return;
}

// Finish @ 141495890

void __thiscall
AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>::Finish
          (void *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  LOCK();
  piVar1 = (int *)((longlong)this + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 2) {
    if ((*(ulonglong *)((longlong)this + 0x48) & 0x3e) == 0) {
      bVar4 = LowLevelTasks::FTask::TryCancel((FTask *)((longlong)this + 0x10),DefaultFlags);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Task.TryCancel()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\Async\\AwaitableTask.h"
                           ,0x157,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  else if ((iVar2 == 1) && (this != (void *)0x0)) {
    if ((*(ulonglong *)((longlong)this + 0x48) & 0x20) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x204,L"State: %d");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(*(longlong *)((longlong)this + 0x38) + 0x18))
              ((longlong)this + 0x38,(longlong)this + 0x10);
    ::operator_delete(this,0x58);
  }
  return;
}

// Finish @ 141495970

void __thiscall
AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>::
Finish(void *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  LOCK();
  piVar1 = (int *)((longlong)this + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 2) {
    if ((*(ulonglong *)((longlong)this + 0x48) & 0x3e) == 0) {
      bVar4 = LowLevelTasks::FTask::TryCancel((FTask *)((longlong)this + 0x10),DefaultFlags);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Task.TryCancel()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\Async\\AwaitableTask.h"
                           ,0x157,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  else if ((iVar2 == 1) && (this != (void *)0x0)) {
    if ((*(ulonglong *)((longlong)this + 0x48) & 0x20) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x204,L"State: %d");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(*(longlong *)((longlong)this + 0x38) + 0x18))
              ((longlong)this + 0x38,(longlong)this + 0x10);
    ::operator_delete(this,0x58);
  }
  return;
}

// Finish @ 141495a50

void __thiscall
AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>::Finish
          (void *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  LOCK();
  piVar1 = (int *)((longlong)this + 0x48);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 2) {
    if ((*(ulonglong *)((longlong)this + 0x40) & 0x3e) == 0) {
      bVar4 = LowLevelTasks::FTask::TryCancel((FTask *)((longlong)this + 8),DefaultFlags);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Task.TryCancel()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\Async\\AwaitableTask.h"
                           ,0x157,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  else if ((iVar2 == 1) && (this != (void *)0x0)) {
    if ((*(ulonglong *)((longlong)this + 0x40) & 0x20) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x204,L"State: %d");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(*(longlong *)((longlong)this + 0x30) + 0x18))
              ((longlong)this + 0x30,(longlong)this + 8);
    ::operator_delete(this,0x50);
  }
  return;
}

// Finish @ 141495b30

void __thiscall
AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>::
Finish(void *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  LOCK();
  piVar1 = (int *)((longlong)this + 0x48);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 2) {
    if ((*(ulonglong *)((longlong)this + 0x40) & 0x3e) == 0) {
      bVar4 = LowLevelTasks::FTask::TryCancel((FTask *)((longlong)this + 8),DefaultFlags);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Task.TryCancel()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\Async\\AwaitableTask.h"
                           ,0x157,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  else if ((iVar2 == 1) && (this != (void *)0x0)) {
    if ((*(ulonglong *)((longlong)this + 0x40) & 0x20) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x204,L"State: %d");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(*(longlong *)((longlong)this + 0x30) + 0x18))
              ((longlong)this + 0x30,(longlong)this + 8);
    ::operator_delete(this,0x50);
  }
  return;
}

// Finish @ 141495c10

void __thiscall
AwaitableTask_Detail::
TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>
::Finish(void *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  LOCK();
  piVar1 = (int *)((longlong)this + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 == 1) && (this != (void *)0x0)) {
    if ((*(ulonglong *)((longlong)this + 0x40) & 0x20) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x204,L"State: %d");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(*(longlong *)((longlong)this + 0x30) + 0x18))
              ((longlong)this + 0x30,(longlong)this + 8);
    ::operator_delete(this,0x58);
  }
  return;
}

// Finish @ 141495ca0

void __thiscall
AwaitableTask_Detail::
TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>
::Finish(void *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  LOCK();
  piVar1 = (int *)((longlong)this + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 == 1) && (this != (void *)0x0)) {
    if ((*(ulonglong *)((longlong)this + 0x40) & 0x20) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x204,L"State: %d");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(*(longlong *)((longlong)this + 0x30) + 0x18))
              ((longlong)this + 0x30,(longlong)this + 8);
    ::operator_delete(this,0x58);
  }
  return;
}

// Finish @ 141495d30

void __thiscall
AwaitableTask_Detail::
TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>
::Finish(void *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  LOCK();
  piVar1 = (int *)((longlong)this + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 == 1) && (this != (void *)0x0)) {
    if ((*(ulonglong *)((longlong)this + 0x40) & 0x20) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x204,L"State: %d");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(*(longlong *)((longlong)this + 0x30) + 0x18))
              ((longlong)this + 0x30,(longlong)this + 8);
    ::operator_delete(this,0x58);
  }
  return;
}

// Finish @ 141495dc0

void __thiscall
AwaitableTask_Detail::
TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>
::Finish(void *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  LOCK();
  piVar1 = (int *)((longlong)this + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 == 1) && (this != (void *)0x0)) {
    if ((*(ulonglong *)((longlong)this + 0x40) & 0x20) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x204,L"State: %d");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(*(longlong *)((longlong)this + 0x30) + 0x18))
              ((longlong)this + 0x30,(longlong)this + 8);
    ::operator_delete(this,0x58);
  }
  return;
}

// TPromise<FRunnableThread_*> @ 141914280

TPromise<FRunnableThread_*> * __thiscall
TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(TPromise<FRunnableThread_*> *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEvent *pFVar4;
  TPromise<FRunnableThread_*> *pTVar5;
  
  pTVar3 = ::operator_new(0x90);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->State).Object = (TFutureState<FRunnableThread_*> *)0x10;
    (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_PEAVFRunnableThread_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 1),4000);
    pTVar3[4]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pFVar4 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    pTVar3[7]._padding_ = (longlong)pFVar4;
    *(undefined1 *)&pTVar3[7].SharedReferenceCount = 0;
    if ((TFutureState<FRunnableThread_*> *)(pTVar3 + 1) == (TFutureState<FRunnableThread_*> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TPromise<FRunnableThread_*> *)(*pcVar1)();
        return pTVar5;
      }
    }
    (this->State).Object = (TFutureState<FRunnableThread_*> *)(pTVar3 + 1);
    (this->State).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->bFutureRetrieved = false;
  return this;
}

// TPromise<void> @ 141914390

TPromise<void> * __thiscall
TPromise<void>::TPromise<void>(TPromise<void> *this,TUniqueFunction<void___cdecl(void)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TPromise<void> *pTVar4;
  
  pTVar3 = ::operator_new(0x90);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->State).Object = (TFutureState<void> *)0x10;
    (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__TFutureState_X___00_SharedPointerInternals__6B_;
    FFutureState::FFutureState((FFutureState *)(pTVar3 + 1),param_1);
    if ((TFutureState<void> *)(pTVar3 + 1) == (TFutureState<void> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TPromise<void> *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->State).Object = (TFutureState<void> *)(pTVar3 + 1);
    (this->State).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->bFutureRetrieved = false;
  return this;
}

// SetValue @ 14196ceb0

void __thiscall
TPromise<FRunnableThread_*>::SetValue(TPromise<FRunnableThread_*> *this,FRunnableThread **param_1)

{
  TFutureState<FRunnableThread_*> *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((this->State).Object == (TFutureState<FRunnableThread_*> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->State).Object == (TFutureState<FRunnableThread_*> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this_00 = (this->State).Object;
  if (*(TAtomic<bool> *)&this_00->field_0x68 != (TAtomic<bool>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(FRunnableThread **)(this_00->Result).Pad = *param_1;
  FFutureState::MarkComplete((FFutureState *)this_00);
  return;
}


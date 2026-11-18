// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 63

// Finish @ 141495e50

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>_>
::Finish(void *this)

{
  void *this_00;
  
  this_00 = *(void **)((longlong)this + 8);
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined ***)this = &___7__TPromiseVTableDummy_X_AwaitableTask_Detail__6B_;
  TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>
  ::Finish(this_00);
  return;
}

// Finish @ 141495e80

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>_>
::Finish(void *this)

{
  void *this_00;
  
  this_00 = *(void **)((longlong)this + 8);
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined ***)this = &___7__TPromiseVTableDummy_X_AwaitableTask_Detail__6B_;
  TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>::Finish(this_00);
  return;
}

// Finish @ 141495eb0

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>_>
::Finish(void *this)

{
  void *this_00;
  
  this_00 = *(void **)((longlong)this + 8);
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined ***)this = &___7__TPromiseVTableDummy_X_AwaitableTask_Detail__6B_;
  TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>::Finish(this_00);
  return;
}

// Finish @ 141495ee0

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>_>
::Finish(void *this)

{
  void *this_00;
  
  this_00 = *(void **)((longlong)this + 8);
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined ***)this = &___7__TPromiseVTableDummy_X_AwaitableTask_Detail__6B_;
  TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>::Finish(this_00);
  return;
}

// Finish @ 141495f10

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>_>
::Finish(void *this)

{
  void *this_00;
  
  this_00 = *(void **)((longlong)this + 8);
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined ***)this = &___7__TPromiseVTableDummy_X_AwaitableTask_Detail__6B_;
  TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>::Finish(this_00);
  return;
}

// Finish @ 141495f40

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>_>
::Finish(void *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  
  pvVar3 = *(void **)((longlong)this + 8);
  *(undefined ***)this = &___7__TPromiseVTableDummy__J_AwaitableTask_Detail__6B_;
  *(undefined8 *)((longlong)this + 8) = 0;
  LOCK();
  piVar1 = (int *)((longlong)pvVar3 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 == 1) && (pvVar3 != (void *)0x0)) {
    if ((*(ulonglong *)((longlong)pvVar3 + 0x40) & 0x20) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x204,L"State: %d");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (**(code **)(*(longlong *)((longlong)pvVar3 + 0x30) + 0x18))
              ((longlong)pvVar3 + 0x30,(longlong)pvVar3 + 8);
    ::operator_delete(pvVar3,0x58);
  }
  return;
}

// Finish @ 141495fe0

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>_>
::Finish(void *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  
  pvVar3 = *(void **)((longlong)this + 8);
  *(undefined ***)this = &___7__TPromiseVTableDummy__J_AwaitableTask_Detail__6B_;
  *(undefined8 *)((longlong)this + 8) = 0;
  LOCK();
  piVar1 = (int *)((longlong)pvVar3 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 == 1) && (pvVar3 != (void *)0x0)) {
    if ((*(ulonglong *)((longlong)pvVar3 + 0x40) & 0x20) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x204,L"State: %d");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (**(code **)(*(longlong *)((longlong)pvVar3 + 0x30) + 0x18))
              ((longlong)pvVar3 + 0x30,(longlong)pvVar3 + 8);
    ::operator_delete(pvVar3,0x58);
  }
  return;
}

// Finish @ 141496080

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>_>
::Finish(void *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  
  pvVar3 = *(void **)((longlong)this + 8);
  *(undefined ***)this = &___7__TPromiseVTableDummy__J_AwaitableTask_Detail__6B_;
  *(undefined8 *)((longlong)this + 8) = 0;
  LOCK();
  piVar1 = (int *)((longlong)pvVar3 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 == 1) && (pvVar3 != (void *)0x0)) {
    if ((*(ulonglong *)((longlong)pvVar3 + 0x40) & 0x20) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x204,L"State: %d");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (**(code **)(*(longlong *)((longlong)pvVar3 + 0x30) + 0x18))
              ((longlong)pvVar3 + 0x30,(longlong)pvVar3 + 8);
    ::operator_delete(pvVar3,0x58);
  }
  return;
}

// Finish @ 141496120

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>_>
::Finish(void *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  
  pvVar3 = *(void **)((longlong)this + 8);
  *(undefined ***)this = &___7__TPromiseVTableDummy__J_AwaitableTask_Detail__6B_;
  *(undefined8 *)((longlong)this + 8) = 0;
  LOCK();
  piVar1 = (int *)((longlong)pvVar3 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 == 1) && (pvVar3 != (void *)0x0)) {
    if ((*(ulonglong *)((longlong)pvVar3 + 0x40) & 0x20) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x204,L"State: %d");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (**(code **)(*(longlong *)((longlong)pvVar3 + 0x30) + 0x18))
              ((longlong)pvVar3 + 0x30,(longlong)pvVar3 + 8);
    ::operator_delete(pvVar3,0x58);
  }
  return;
}

// GetResult @ 141499ec0

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>_>
::GetResult(void *this)

{
  atomic<unsigned_char> *this_00;
  FManualResetEvent FVar1;
  bool bVar2;
  
  this_00 = (atomic<unsigned_char> *)(*(longlong *)((longlong)this + 8) + 0x4c);
  bVar2 = LowLevelTasks::FTask::TryCancel
                    ((FTask *)(*(longlong *)((longlong)this + 8) + 8),DefaultFlags);
  if (!bVar2) {
    UE::FManualResetEvent::WaitUntil((FManualResetEvent *)this_00,__real_7ff0000000000000);
    return;
  }
  LOCK();
  FVar1.State = *this_00;
  *this_00 = (atomic<unsigned_char>)0x1;
  UNLOCK();
  if (((byte)FVar1.State & 3) == 2) {
    UE::ParkingLot::WakeAll(this_00);
    return;
  }
  return;
}

// GetResult @ 141499f20

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>_>
::GetResult(void *this)

{
  byte bVar1;
  void *this_00;
  bool bVar2;
  
  this_00 = *(void **)((longlong)this + 8);
  bVar2 = LowLevelTasks::FTask::TryCancel((FTask *)((longlong)this_00 + 0x10),DefaultFlags);
  if (bVar2) {
    `Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()(this_00);
    LOCK();
    bVar1 = *(byte *)((longlong)this_00 + 0x54);
    *(byte *)((longlong)this_00 + 0x54) = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      UE::ParkingLot::WakeAll((void *)((longlong)this_00 + 0x54));
      return;
    }
  }
  else {
    UE::FManualResetEvent::WaitUntil
              ((FManualResetEvent *)((longlong)this_00 + 0x54),__real_7ff0000000000000);
  }
  return;
}

// GetResult @ 141499f90

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>_>
::GetResult(void *this)

{
  byte bVar1;
  void *this_00;
  bool bVar2;
  
  this_00 = *(void **)((longlong)this + 8);
  bVar2 = LowLevelTasks::FTask::TryCancel((FTask *)((longlong)this_00 + 0x10),DefaultFlags);
  if (bVar2) {
    `Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()(this_00);
    LOCK();
    bVar1 = *(byte *)((longlong)this_00 + 0x54);
    *(byte *)((longlong)this_00 + 0x54) = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      UE::ParkingLot::WakeAll((void *)((longlong)this_00 + 0x54));
      return;
    }
  }
  else {
    UE::FManualResetEvent::WaitUntil
              ((FManualResetEvent *)((longlong)this_00 + 0x54),__real_7ff0000000000000);
  }
  return;
}

// GetResult @ 14149a000

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>_>
::GetResult(void *this)

{
  byte bVar1;
  void *this_00;
  bool bVar2;
  
  this_00 = *(void **)((longlong)this + 8);
  bVar2 = LowLevelTasks::FTask::TryCancel((FTask *)((longlong)this_00 + 8),DefaultFlags);
  if (bVar2) {
    `Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()(this_00);
    LOCK();
    bVar1 = *(byte *)((longlong)this_00 + 0x4c);
    *(byte *)((longlong)this_00 + 0x4c) = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      UE::ParkingLot::WakeAll((void *)((longlong)this_00 + 0x4c));
      return;
    }
  }
  else {
    UE::FManualResetEvent::WaitUntil
              ((FManualResetEvent *)((longlong)this_00 + 0x4c),__real_7ff0000000000000);
  }
  return;
}

// GetResult @ 14149a070

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>_>
::GetResult(void *this)

{
  byte bVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  puVar2 = *(undefined8 **)((longlong)this + 8);
  bVar3 = LowLevelTasks::FTask::TryCancel((FTask *)(puVar2 + 1),DefaultFlags);
  if (bVar3) {
    *(undefined4 *)*puVar2 = 0x2a;
    LOCK();
    bVar1 = *(byte *)((longlong)puVar2 + 0x4c);
    *(byte *)((longlong)puVar2 + 0x4c) = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      UE::ParkingLot::WakeAll((void *)((longlong)puVar2 + 0x4c));
      return;
    }
  }
  else {
    UE::FManualResetEvent::WaitUntil
              ((FManualResetEvent *)((longlong)puVar2 + 0x4c),__real_7ff0000000000000);
  }
  return;
}

// GetResult @ 14149a0e0

long64 __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>_>
::GetResult(void *this)

{
  void *this_00;
  bool bVar1;
  
  this_00 = *(void **)((longlong)this + 8);
  bVar1 = LowLevelTasks::FTask::TryCancel((FTask *)((longlong)this_00 + 8),DefaultFlags);
  if (bVar1) {
    TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>
    ::Execute(this_00);
    return *(long64 *)((longlong)this_00 + 0x48);
  }
  UE::FManualResetEvent::WaitUntil
            ((FManualResetEvent *)((longlong)this_00 + 0x54),__real_7ff0000000000000);
  return *(long64 *)((longlong)this_00 + 0x48);
}

// GetResult @ 14149a130

long64 __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>_>
::GetResult(void *this)

{
  byte bVar1;
  void *this_00;
  bool bVar2;
  long64 lVar3;
  
  this_00 = *(void **)((longlong)this + 8);
  bVar2 = LowLevelTasks::FTask::TryCancel((FTask *)((longlong)this_00 + 8),DefaultFlags);
  if (bVar2) {
    lVar3 = ``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::
            <lambda_1>::operator()(this_00);
    *(long64 *)((longlong)this_00 + 0x48) = lVar3;
    LOCK();
    bVar1 = *(byte *)((longlong)this_00 + 0x54);
    *(byte *)((longlong)this_00 + 0x54) = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      UE::ParkingLot::WakeAll((void *)((longlong)this_00 + 0x54));
      return *(long64 *)((longlong)this_00 + 0x48);
    }
  }
  else {
    UE::FManualResetEvent::WaitUntil
              ((FManualResetEvent *)((longlong)this_00 + 0x54),__real_7ff0000000000000);
  }
  return *(long64 *)((longlong)this_00 + 0x48);
}

// GetResult @ 14149a1b0

long64 __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>_>
::GetResult(void *this)

{
  byte bVar1;
  longlong *plVar2;
  bool bVar3;
  long64 lVar4;
  
  plVar2 = *(longlong **)((longlong)this + 8);
  bVar3 = LowLevelTasks::FTask::TryCancel((FTask *)(plVar2 + 1),DefaultFlags);
  if (bVar3) {
    lVar4 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic(*plVar2 + -1);
    plVar2[9] = lVar4;
    LOCK();
    bVar1 = *(byte *)((longlong)plVar2 + 0x54);
    *(byte *)((longlong)plVar2 + 0x54) = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      UE::ParkingLot::WakeAll((void *)((longlong)plVar2 + 0x54));
      return plVar2[9];
    }
  }
  else {
    UE::FManualResetEvent::WaitUntil
              ((FManualResetEvent *)((longlong)plVar2 + 0x54),__real_7ff0000000000000);
  }
  return plVar2[9];
}

// GetResult @ 14149a230

long64 __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>_>
::GetResult(void *this)

{
  byte bVar1;
  longlong *plVar2;
  bool bVar3;
  long64 lVar4;
  
  plVar2 = *(longlong **)((longlong)this + 8);
  bVar3 = LowLevelTasks::FTask::TryCancel((FTask *)(plVar2 + 1),DefaultFlags);
  if (bVar3) {
    lVar4 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic(*plVar2 + -2);
    plVar2[9] = lVar4;
    LOCK();
    bVar1 = *(byte *)((longlong)plVar2 + 0x54);
    *(byte *)((longlong)plVar2 + 0x54) = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      UE::ParkingLot::WakeAll((void *)((longlong)plVar2 + 0x54));
      return plVar2[9];
    }
  }
  else {
    UE::FManualResetEvent::WaitUntil
              ((FManualResetEvent *)((longlong)plVar2 + 0x54),__real_7ff0000000000000);
  }
  return plVar2[9];
}

// IncrementRefCount @ 14149b490

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>_>
::IncrementRefCount(void *this)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 0x48);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return;
}

// IncrementRefCount @ 14149b4a0

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>_>
::IncrementRefCount(void *this)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 0x50);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return;
}

// IncrementRefCount @ 14149b4b0

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>_>
::IncrementRefCount(void *this)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 0x50);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return;
}

// IncrementRefCount @ 14149b4c0

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>_>
::IncrementRefCount(void *this)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 0x48);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return;
}

// IncrementRefCount @ 14149b4d0

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>_>
::IncrementRefCount(void *this)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 0x48);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return;
}

// IncrementRefCount @ 14149b4e0

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>_>
::IncrementRefCount(void *this)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 0x50);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return;
}

// IncrementRefCount @ 14149b4f0

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>_>
::IncrementRefCount(void *this)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 0x50);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return;
}

// IncrementRefCount @ 14149b500

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>_>
::IncrementRefCount(void *this)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 0x50);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return;
}

// IncrementRefCount @ 14149b510

void __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>_>
::IncrementRefCount(void *this)

{
  int *piVar1;
  
  LOCK();
  piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 0x50);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return;
}

// IsCompleted @ 14149d940

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>_>
::IsCompleted(void *this)

{
  return (bool)(*(byte *)(*(longlong *)((longlong)this + 8) + 0x4c) & 1);
}

// IsCompleted @ 14149d960

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>_>
::IsCompleted(void *this)

{
  return (bool)(*(byte *)(*(longlong *)((longlong)this + 8) + 0x54) & 1);
}

// IsCompleted @ 14149d980

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>_>
::IsCompleted(void *this)

{
  return (bool)(*(byte *)(*(longlong *)((longlong)this + 8) + 0x54) & 1);
}

// IsCompleted @ 14149d9a0

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>_>
::IsCompleted(void *this)

{
  return (bool)(*(byte *)(*(longlong *)((longlong)this + 8) + 0x4c) & 1);
}

// IsCompleted @ 14149d9c0

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>_>
::IsCompleted(void *this)

{
  return (bool)(*(byte *)(*(longlong *)((longlong)this + 8) + 0x4c) & 1);
}

// IsCompleted @ 14149d9e0

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>_>
::IsCompleted(void *this)

{
  return (bool)(*(byte *)(*(longlong *)((longlong)this + 8) + 0x54) & 1);
}

// IsCompleted @ 14149da00

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>_>
::IsCompleted(void *this)

{
  return (bool)(*(byte *)(*(longlong *)((longlong)this + 8) + 0x54) & 1);
}

// IsCompleted @ 14149da20

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>_>
::IsCompleted(void *this)

{
  return (bool)(*(byte *)(*(longlong *)((longlong)this + 8) + 0x54) & 1);
}

// IsCompleted @ 14149da40

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>_>
::IsCompleted(void *this)

{
  return (bool)(*(byte *)(*(longlong *)((longlong)this + 8) + 0x54) & 1);
}

// IsLaunched @ 14149df50

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>_>
::IsLaunched(void *this)

{
  return (*(ulonglong *)(*(longlong *)((longlong)this + 8) + 0x40) & 0x3e) != 0;
}

// IsLaunched @ 14149df70

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>_>
::IsLaunched(void *this)

{
  return (*(ulonglong *)(*(longlong *)((longlong)this + 8) + 0x48) & 0x3e) != 0;
}

// IsLaunched @ 14149df90

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>_>
::IsLaunched(void *this)

{
  return (*(ulonglong *)(*(longlong *)((longlong)this + 8) + 0x48) & 0x3e) != 0;
}

// IsLaunched @ 14149dfb0

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>_>
::IsLaunched(void *this)

{
  return (*(ulonglong *)(*(longlong *)((longlong)this + 8) + 0x40) & 0x3e) != 0;
}

// IsLaunched @ 14149dfd0

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>_>
::IsLaunched(void *this)

{
  return (*(ulonglong *)(*(longlong *)((longlong)this + 8) + 0x40) & 0x3e) != 0;
}

// IsLaunched @ 14149dff0

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>_>
::IsLaunched(void *this)

{
  return (*(ulonglong *)(*(longlong *)((longlong)this + 8) + 0x40) & 0x3e) != 0;
}

// IsLaunched @ 14149e010

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>_>
::IsLaunched(void *this)

{
  return (*(ulonglong *)(*(longlong *)((longlong)this + 8) + 0x40) & 0x3e) != 0;
}

// IsLaunched @ 14149e030

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>_>
::IsLaunched(void *this)

{
  return (*(ulonglong *)(*(longlong *)((longlong)this + 8) + 0x40) & 0x3e) != 0;
}

// IsLaunched @ 14149e050

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>_>
::IsLaunched(void *this)

{
  return (*(ulonglong *)(*(longlong *)((longlong)this + 8) + 0x40) & 0x3e) != 0;
}

// IsValid @ 14149e820

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>_>
::IsValid(void *this)

{
  return true;
}

// IsValid @ 14149e830

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>_>
::IsValid(void *this)

{
  return true;
}

// IsValid @ 14149e840

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>_>
::IsValid(void *this)

{
  return true;
}

// IsValid @ 14149e850

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>_>
::IsValid(void *this)

{
  return true;
}

// IsValid @ 14149e860

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>_>
::IsValid(void *this)

{
  return true;
}

// IsValid @ 14149e870

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>_>
::IsValid(void *this)

{
  return true;
}

// IsValid @ 14149e880

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>_>
::IsValid(void *this)

{
  return true;
}

// IsValid @ 14149e890

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>_>
::IsValid(void *this)

{
  return true;
}

// IsValid @ 14149e8a0

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>_>
::IsValid(void *this)

{
  return true;
}

// TryLaunch @ 1414b6a80

/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>_>
::TryLaunch(void *this)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  uVar2 = *(ulonglong *)(lVar1 + 0x40);
  do {
    LOCK();
    uVar3 = *(ulonglong *)(lVar1 + 0x40);
    bVar4 = uVar2 == uVar3;
    if (bVar4) {
      *(ulonglong *)(lVar1 + 0x40) = uVar2 | 2;
      uVar3 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar3;
  } while (!bVar4);
  if ((uVar3 & 2) != 0) {
    return false;
  }
  LowLevelTasks::FScheduler::LaunchInternal
            (&LowLevelTasks::FScheduler::Singleton,(FTask *)(lVar1 + 8),DefaultPreference,true);
  return true;
}

// TryLaunch @ 1414b6ae0

/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>_>
::TryLaunch(void *this)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  uVar2 = *(ulonglong *)(lVar1 + 0x48);
  do {
    LOCK();
    uVar3 = *(ulonglong *)(lVar1 + 0x48);
    bVar4 = uVar2 == uVar3;
    if (bVar4) {
      *(ulonglong *)(lVar1 + 0x48) = uVar2 | 2;
      uVar3 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar3;
  } while (!bVar4);
  if ((uVar3 & 2) != 0) {
    return false;
  }
  LowLevelTasks::FScheduler::LaunchInternal
            (&LowLevelTasks::FScheduler::Singleton,(FTask *)(lVar1 + 0x10),DefaultPreference,true);
  return true;
}

// TryLaunch @ 1414b6b40

/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>_>
::TryLaunch(void *this)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  uVar2 = *(ulonglong *)(lVar1 + 0x48);
  do {
    LOCK();
    uVar3 = *(ulonglong *)(lVar1 + 0x48);
    bVar4 = uVar2 == uVar3;
    if (bVar4) {
      *(ulonglong *)(lVar1 + 0x48) = uVar2 | 2;
      uVar3 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar3;
  } while (!bVar4);
  if ((uVar3 & 2) != 0) {
    return false;
  }
  LowLevelTasks::FScheduler::LaunchInternal
            (&LowLevelTasks::FScheduler::Singleton,(FTask *)(lVar1 + 0x10),DefaultPreference,true);
  return true;
}

// TryLaunch @ 1414b6ba0

/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>_>
::TryLaunch(void *this)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  uVar2 = *(ulonglong *)(lVar1 + 0x40);
  do {
    LOCK();
    uVar3 = *(ulonglong *)(lVar1 + 0x40);
    bVar4 = uVar2 == uVar3;
    if (bVar4) {
      *(ulonglong *)(lVar1 + 0x40) = uVar2 | 2;
      uVar3 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar3;
  } while (!bVar4);
  if ((uVar3 & 2) != 0) {
    return false;
  }
  LowLevelTasks::FScheduler::LaunchInternal
            (&LowLevelTasks::FScheduler::Singleton,(FTask *)(lVar1 + 8),DefaultPreference,true);
  return true;
}

// TryLaunch @ 1414b6c00

/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>_>
::TryLaunch(void *this)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  uVar2 = *(ulonglong *)(lVar1 + 0x40);
  do {
    LOCK();
    uVar3 = *(ulonglong *)(lVar1 + 0x40);
    bVar4 = uVar2 == uVar3;
    if (bVar4) {
      *(ulonglong *)(lVar1 + 0x40) = uVar2 | 2;
      uVar3 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar3;
  } while (!bVar4);
  if ((uVar3 & 2) != 0) {
    return false;
  }
  LowLevelTasks::FScheduler::LaunchInternal
            (&LowLevelTasks::FScheduler::Singleton,(FTask *)(lVar1 + 8),DefaultPreference,true);
  return true;
}

// TryLaunch @ 1414b6c60

/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>_>
::TryLaunch(void *this)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  uVar2 = *(ulonglong *)(lVar1 + 0x40);
  do {
    LOCK();
    uVar3 = *(ulonglong *)(lVar1 + 0x40);
    bVar4 = uVar2 == uVar3;
    if (bVar4) {
      *(ulonglong *)(lVar1 + 0x40) = uVar2 | 2;
      uVar3 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar3;
  } while (!bVar4);
  if ((uVar3 & 2) != 0) {
    return false;
  }
  LowLevelTasks::FScheduler::LaunchInternal
            (&LowLevelTasks::FScheduler::Singleton,(FTask *)(lVar1 + 8),DefaultPreference,true);
  return true;
}

// TryLaunch @ 1414b6cc0

/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>_>
::TryLaunch(void *this)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  uVar2 = *(ulonglong *)(lVar1 + 0x40);
  do {
    LOCK();
    uVar3 = *(ulonglong *)(lVar1 + 0x40);
    bVar4 = uVar2 == uVar3;
    if (bVar4) {
      *(ulonglong *)(lVar1 + 0x40) = uVar2 | 2;
      uVar3 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar3;
  } while (!bVar4);
  if ((uVar3 & 2) != 0) {
    return false;
  }
  LowLevelTasks::FScheduler::LaunchInternal
            (&LowLevelTasks::FScheduler::Singleton,(FTask *)(lVar1 + 8),DefaultPreference,true);
  return true;
}

// TryLaunch @ 1414b6d20

/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>_>
::TryLaunch(void *this)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  uVar2 = *(ulonglong *)(lVar1 + 0x40);
  do {
    LOCK();
    uVar3 = *(ulonglong *)(lVar1 + 0x40);
    bVar4 = uVar2 == uVar3;
    if (bVar4) {
      *(ulonglong *)(lVar1 + 0x40) = uVar2 | 2;
      uVar3 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar3;
  } while (!bVar4);
  if ((uVar3 & 2) != 0) {
    return false;
  }
  LowLevelTasks::FScheduler::LaunchInternal
            (&LowLevelTasks::FScheduler::Singleton,(FTask *)(lVar1 + 8),DefaultPreference,true);
  return true;
}

// TryLaunch @ 1414b6d80

/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

bool __thiscall
AwaitableTask_Detail::
TPromiseVTable<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>_>
::TryLaunch(void *this)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  uVar2 = *(ulonglong *)(lVar1 + 0x40);
  do {
    LOCK();
    uVar3 = *(ulonglong *)(lVar1 + 0x40);
    bVar4 = uVar2 == uVar3;
    if (bVar4) {
      *(ulonglong *)(lVar1 + 0x40) = uVar2 | 2;
      uVar3 = uVar2;
    }
    UNLOCK();
    uVar2 = uVar3;
  } while (!bVar4);
  if ((uVar3 & 2) != 0) {
    return false;
  }
  LowLevelTasks::FScheduler::LaunchInternal
            (&LowLevelTasks::FScheduler::Singleton,(FTask *)(lVar1 + 8),DefaultPreference,true);
  return true;
}


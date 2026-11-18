// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 476

// Call @ 141488ae0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::Private::FTaskBase::Init'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    UE::Tasks::Private::FTaskBase::TryExecuteTask((FTaskBase *)**(undefined8 **)param_1);
  }
  return (FTask *)0x0;
}

// Call @ 141488b10

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::Private::FTaskBase::Init'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    UE::Tasks::Private::FTaskBase::TryExecuteTask(*(FTaskBase **)param_1);
  }
  return (FTask *)0x0;
}

// Call @ 141488b30

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    AwaitableTask_Detail::
    TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>
    ::Execute((void *)**(undefined8 **)param_1);
  }
  return (FTask *)0x0;
}

// Call @ 141488b60

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    AwaitableTask_Detail::
    TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>
    ::Execute(*(void **)param_1);
  }
  return (FTask *)0x0;
}

// Call @ 141488b80

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  byte *pbVar1;
  byte bVar2;
  void *this_00;
  long64 lVar3;
  
  if (param_2) {
    this_00 = (void *)**(undefined8 **)param_1;
    lVar3 = ``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::
            <lambda_1>::operator()(this_00);
    *(long64 *)((longlong)this_00 + 0x48) = lVar3;
    pbVar1 = (byte *)((longlong)this_00 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  return (FTask *)0x0;
}

// Call @ 141488bd0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  byte *pbVar1;
  byte bVar2;
  void *this_00;
  long64 lVar3;
  
  if (param_2) {
    this_00 = *(void **)param_1;
    lVar3 = ``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::
            <lambda_1>::operator()(this_00);
    *(long64 *)((longlong)this_00 + 0x48) = lVar3;
    pbVar1 = (byte *)((longlong)this_00 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  return (FTask *)0x0;
}

// Call @ 141488c20

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_2) {
    lVar3 = **(longlong **)param_1;
    LOCK();
    pbVar1 = (byte *)(lVar3 + 0x4c);
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll((void *)(lVar3 + 0x4c));
    }
  }
  return (FTask *)0x0;
}

// Call @ 141488c60

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_2) {
    lVar3 = *(longlong *)param_1;
    LOCK();
    pbVar1 = (byte *)(lVar3 + 0x4c);
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll((void *)(lVar3 + 0x4c));
    }
  }
  return (FTask *)0x0;
}

// Call @ 141488c90

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  long64 lVar4;
  
  if (param_2) {
    plVar3 = (longlong *)**(longlong **)param_1;
    lVar4 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic(*plVar3 + -1);
    plVar3[9] = lVar4;
    pbVar1 = (byte *)((longlong)plVar3 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  return (FTask *)0x0;
}

// Call @ 141488ce0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  long64 lVar4;
  
  if (param_2) {
    plVar3 = *(longlong **)param_1;
    lVar4 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic(*plVar3 + -1);
    plVar3[9] = lVar4;
    pbVar1 = (byte *)((longlong)plVar3 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  return (FTask *)0x0;
}

// Call @ 141488d30

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  long64 lVar4;
  
  if (param_2) {
    plVar3 = (longlong *)**(longlong **)param_1;
    lVar4 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic(*plVar3 + -2);
    plVar3[9] = lVar4;
    pbVar1 = (byte *)((longlong)plVar3 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  return (FTask *)0x0;
}

// Call @ 141488d80

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  long64 lVar4;
  
  if (param_2) {
    plVar3 = *(longlong **)param_1;
    lVar4 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic(*plVar3 + -2);
    plVar3[9] = lVar4;
    pbVar1 = (byte *)((longlong)plVar3 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  return (FTask *)0x0;
}

// Call @ 141488dd0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  byte *pbVar1;
  byte bVar2;
  void *this_00;
  
  if (param_2) {
    this_00 = (void *)**(undefined8 **)param_1;
    `Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()(this_00);
    pbVar1 = (byte *)((longlong)this_00 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  return (FTask *)0x0;
}

// Call @ 141488e20

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  byte *pbVar1;
  byte bVar2;
  void *this_00;
  
  if (param_2) {
    this_00 = *(void **)param_1;
    `Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()(this_00);
    pbVar1 = (byte *)((longlong)this_00 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  return (FTask *)0x0;
}

// Call @ 141488e70

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  byte *pbVar1;
  byte bVar2;
  void *this_00;
  
  if (param_2) {
    this_00 = (void *)**(undefined8 **)param_1;
    `Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()(this_00);
    pbVar1 = (byte *)((longlong)this_00 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  return (FTask *)0x0;
}

// Call @ 141488ec0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  byte *pbVar1;
  byte bVar2;
  void *this_00;
  
  if (param_2) {
    this_00 = *(void **)param_1;
    `Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()(this_00);
    pbVar1 = (byte *)((longlong)this_00 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  return (FTask *)0x0;
}

// Call @ 141488f10

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_><`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  byte *pbVar1;
  byte bVar2;
  void *this_00;
  
  if (param_2) {
    this_00 = (void *)**(undefined8 **)param_1;
    `Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()(this_00);
    pbVar1 = (byte *)((longlong)this_00 + 0x4c);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  return (FTask *)0x0;
}

// Call @ 141488f60

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_><`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  byte *pbVar1;
  byte bVar2;
  void *this_00;
  
  if (param_2) {
    this_00 = *(void **)param_1;
    `Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()(this_00);
    pbVar1 = (byte *)((longlong)this_00 + 0x4c);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  return (FTask *)0x0;
}

// Call @ 141488fb0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  if (param_2) {
    pbVar2 = (byte *)((longlong)**(undefined8 **)param_1 + 0x4c);
    **(undefined4 **)**(undefined8 **)param_1 = 0x2a;
    LOCK();
    bVar1 = *pbVar2;
    *pbVar2 = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar2);
    }
  }
  return (FTask *)0x0;
}

// Call @ 141488ff0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  if (param_2) {
    pbVar2 = (byte *)((longlong)*(undefined8 **)param_1 + 0x4c);
    *(undefined4 *)**(undefined8 **)param_1 = 0x2a;
    LOCK();
    bVar1 = *pbVar2;
    *pbVar2 = 1;
    UNLOCK();
    if ((bVar1 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar2);
    }
  }
  return (FTask *)0x0;
}

// Call @ 141489030

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  FTask *pFVar4;
  
  if (param_2) {
    puVar1 = *(undefined8 **)param_1;
    LOCK();
    *(undefined1 *)*puVar1 = 1;
    UNLOCK();
    if (*(char *)puVar1[1] != '\x01') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GlobalRun == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                         ,0x228,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FTask *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  return (FTask *)0x0;
}

// Call @ 141489090

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FTask *pFVar3;
  
  if (param_2) {
    LOCK();
    **(undefined1 **)param_1 = 1;
    UNLOCK();
    if (**(char **)((longlong)param_1 + 8) != '\x01') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GlobalRun == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                         ,0x228,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FTask *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  return (FTask *)0x0;
}

// Call @ 1414890f0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  undefined8 *puVar1;
  long64 lVar2;
  
  if (param_2) {
    puVar1 = *(undefined8 **)param_1;
    lVar2 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic(puVar1[3] + -1);
    *(long64 *)*puVar1 = lVar2;
  }
  return (FTask *)0x0;
}

// Call @ 141489130

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_1>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  long64 *plVar1;
  long64 lVar2;
  
  if (param_2) {
    plVar1 = *(long64 **)param_1;
    lVar2 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic
                      (*(longlong *)((longlong)param_1 + 0x18) + -1);
    *plVar1 = lVar2;
  }
  return (FTask *)0x0;
}

// Call @ 141489170

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l5::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    *(undefined4 *)**(undefined8 **)param_1 = 0x2a;
  }
  return (FTask *)0x0;
}

// Call @ 141489190

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l5::<lambda_1>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    **(undefined4 **)param_1 = 0x2a;
  }
  return (FTask *)0x0;
}

// Call @ 1414891b0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l17::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  return (FTask *)0x0;
}

// Call @ 1414891c0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l17::<lambda_1>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  return (FTask *)0x0;
}

// Call @ 1414891d0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  undefined8 *puVar1;
  long64 lVar2;
  long64 lVar3;
  longlong lVar4;
  
  if (param_2) {
    puVar1 = *(undefined8 **)param_1;
    lVar4 = *(longlong *)puVar1[1];
    if (lVar4 < 3) {
      lVar4 = 1;
    }
    else {
      lVar2 = `Tasks2Tests::BasicPerfTest<10000>'::__l2::Test::Fibonacci(lVar4 + -2);
      lVar3 = `Tasks2Tests::BasicPerfTest<10000>'::__l2::Test::Fibonacci(lVar4 + -1);
      lVar4 = lVar2 + lVar3;
    }
    *(longlong *)*puVar1 = lVar4;
  }
  return (FTask *)0x0;
}

// Call @ 141489240

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  long64 lVar1;
  long64 lVar2;
  longlong lVar3;
  
  if (param_2) {
    lVar3 = **(longlong **)((longlong)param_1 + 8);
    if (lVar3 < 3) {
      lVar3 = 1;
    }
    else {
      lVar1 = `Tasks2Tests::BasicPerfTest<10000>'::__l2::Test::Fibonacci(lVar3 + -2);
      lVar2 = `Tasks2Tests::BasicPerfTest<10000>'::__l2::Test::Fibonacci(lVar3 + -1);
      lVar3 = lVar1 + lVar2;
    }
    **(longlong **)param_1 = lVar3;
  }
  return (FTask *)0x0;
}

// Call @ 1414892b0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  long64 *plVar1;
  long64 lVar2;
  
  if (param_2) {
    plVar1 = (long64 *)**(undefined8 **)param_1;
    lVar2 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic
                      (*(long64 *)(*(undefined8 **)param_1)[1]);
    *plVar1 = lVar2;
  }
  return (FTask *)0x0;
}

// Call @ 1414892f0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  long64 *plVar1;
  long64 lVar2;
  
  if (param_2) {
    plVar1 = *(long64 **)param_1;
    lVar2 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic
                      (**(long64 **)((longlong)param_1 + 8));
    *plVar1 = lVar2;
  }
  return (FTask *)0x0;
}

// Call @ 141489330

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_2>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  FTask *pFVar4;
  
  if (param_2) {
    puVar1 = *(undefined8 **)param_1;
    LOCK();
    *(undefined1 *)*puVar1 = 1;
    UNLOCK();
    if (*(char *)puVar1[1] != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalRun == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                         ,0x230,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FTask *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  return (FTask *)0x0;
}

// Call @ 141489390

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_2>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FTask *pFVar3;
  
  if (param_2) {
    LOCK();
    **(undefined1 **)param_1 = 1;
    UNLOCK();
    if (**(char **)((longlong)param_1 + 8) != '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalRun == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                         ,0x230,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FTask *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  return (FTask *)0x0;
}

// Call @ 1414893f0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_2>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  undefined8 *puVar1;
  long64 lVar2;
  
  if (param_2) {
    puVar1 = *(undefined8 **)param_1;
    lVar2 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic(puVar1[3] + -2);
    *(long64 *)*puVar1 = lVar2;
  }
  return (FTask *)0x0;
}

// Call @ 141489430

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_2>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  long64 *plVar1;
  long64 lVar2;
  
  if (param_2) {
    plVar1 = *(long64 **)param_1;
    lVar2 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic
                      (*(longlong *)((longlong)param_1 + 0x18) + -2);
    *plVar1 = lVar2;
  }
  return (FTask *)0x0;
}

// Call @ 141489470

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l34::<lambda_2>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  return (FTask *)0x0;
}

// Call @ 141489480

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l34::<lambda_2>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  return (FTask *)0x0;
}

// Call @ 141489490

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l42::<lambda_2>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    *(undefined4 *)**(undefined8 **)param_1 = 0x2a;
  }
  return (FTask *)0x0;
}

// Call @ 1414894b0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l42::<lambda_2>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    **(undefined4 **)param_1 = 0x2a;
  }
  return (FTask *)0x0;
}

// Call @ 1414894d0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::
           __l13::<lambda_1>::operator()(*(void **)param_1,param_2);
  return pFVar1;
}

// Call @ 1414894f0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::
           __l13::<lambda_1>::operator()(param_1,param_2);
  return pFVar1;
}

// Call @ 141489510

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'
           ::__l13::<lambda_1>::operator()(*(void **)param_1,param_2);
  return pFVar1;
}

// Call @ 141489530

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'
           ::__l13::<lambda_1>::operator()(param_1,param_2);
  return pFVar1;
}

// Call @ 141489550

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::
           Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'::__l13::
           <lambda_1>::operator()(*(void **)param_1,param_2);
  return pFVar1;
}

// Call @ 141489570

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::
           Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'::__l13::
           <lambda_1>::operator()(param_1,param_2);
  return pFVar1;
}

// Call @ 141489590

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::
           __l13::<lambda_1>::operator()(*(void **)param_1,param_2);
  return pFVar1;
}

// Call @ 1414895b0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::
           __l13::<lambda_1>::operator()(param_1,param_2);
  return pFVar1;
}

// Call @ 1414895d0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l62::<lambda_3>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    *(undefined4 *)**(undefined8 **)param_1 = 0x2a;
  }
  return (FTask *)0x0;
}

// Call @ 1414895f0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l62::<lambda_3>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    **(undefined4 **)param_1 = 0x2a;
  }
  return (FTask *)0x0;
}

// Call @ 141489610

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l92::<lambda_5>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  undefined8 *puVar1;
  
  if (param_2) {
    puVar1 = *(undefined8 **)param_1;
    *(undefined4 *)*puVar1 = 0x2a;
    ::operator_delete((void *)*puVar1,4);
  }
  return (FTask *)0x0;
}

// Call @ 141489640

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l92::<lambda_5>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    **(undefined4 **)param_1 = 0x2a;
    ::operator_delete(*(void **)param_1,4);
  }
  return (FTask *)0x0;
}

// Call @ 141489670

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_6>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    *(undefined4 *)**(undefined8 **)param_1 = 0x2a;
  }
  return (FTask *)0x0;
}

// Call @ 141489690

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_6>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    **(undefined4 **)param_1 = 0x2a;
  }
  return (FTask *)0x0;
}

// Call @ 1414896b0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_7>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    return (FTask *)**(undefined8 **)param_1;
  }
  return (FTask *)0x0;
}

// Call @ 1414896d0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_7>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    return *(FTask **)param_1;
  }
  return (FTask *)0x0;
}

// Call @ 1414896f0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_1,false);
  }
  return (FTask *)0x0;
}

// Call @ 141489720

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'
    ::__l2::FParallelExecutor::operator()(param_1,false);
  }
  return (FTask *)0x0;
}

// CallAndMove @ 1414897d0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::Private::FTaskBase::Init'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  if (param_4) {
    UE::Tasks::Private::FTaskBase::TryExecuteTask((FTaskBase *)**(undefined8 **)param_2);
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 141489830

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::Private::FTaskBase::Init'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  undefined8 *puVar1;
  
  if (param_4) {
    UE::Tasks::Private::FTaskBase::TryExecuteTask(*(FTaskBase **)param_2);
  }
  if ((param_3 < 0x10) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_1->InlineStorage = puVar1;
    *puVar1 = *(undefined8 *)param_2;
    puVar1[1] = *(undefined8 *)((longlong)param_2 + 8);
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
    *(undefined8 *)(param_1->InlineStorage + 8) = *(undefined8 *)((longlong)param_2 + 8);
  }
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 1414898f0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  if (param_4) {
    AwaitableTask_Detail::
    TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>
    ::Execute((void *)**(undefined8 **)param_2);
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 141489950

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  undefined8 *puVar1;
  
  if (param_4) {
    AwaitableTask_Detail::
    TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>
    ::Execute(*(void **)param_2);
  }
  if ((param_3 < 0x10) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_1->InlineStorage = puVar1;
    *puVar1 = *(undefined8 *)param_2;
    puVar1[1] = *(undefined8 *)((longlong)param_2 + 8);
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
    *(undefined8 *)(param_1->InlineStorage + 8) = *(undefined8 *)((longlong)param_2 + 8);
  }
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 141489a10

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  byte *pbVar1;
  byte bVar2;
  void *this_00;
  long64 lVar3;
  
  if (param_4) {
    this_00 = (void *)**(undefined8 **)param_2;
    lVar3 = ``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::
            <lambda_1>::operator()(this_00);
    *(long64 *)((longlong)this_00 + 0x48) = lVar3;
    pbVar1 = (byte *)((longlong)this_00 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 141489aa0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  byte *pbVar1;
  byte bVar2;
  void *this_00;
  long64 lVar3;
  undefined8 *puVar4;
  
  if (param_4) {
    this_00 = *(void **)param_2;
    lVar3 = ``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::
            <lambda_1>::operator()(this_00);
    *(long64 *)((longlong)this_00 + 0x48) = lVar3;
    pbVar1 = (byte *)((longlong)this_00 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  if ((param_3 < 0x10) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar4 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_1->InlineStorage = puVar4;
    *puVar4 = *(undefined8 *)param_2;
    puVar4[1] = *(undefined8 *)((longlong)param_2 + 8);
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
    *(undefined8 *)(param_1->InlineStorage + 8) = *(undefined8 *)((longlong)param_2 + 8);
  }
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 141489b80

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_4) {
    lVar3 = **(longlong **)param_2;
    LOCK();
    pbVar1 = (byte *)(lVar3 + 0x4c);
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll((void *)(lVar3 + 0x4c));
    }
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise_XV<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise_XV<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 141489bf0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (param_4) {
    lVar3 = *(longlong *)param_2;
    LOCK();
    pbVar1 = (byte *)(lVar3 + 0x4c);
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll((void *)(lVar3 + 0x4c));
    }
  }
  if ((param_3 < 0x10) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise_XV<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise_XV<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar4 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_1->InlineStorage = puVar4;
    *puVar4 = *(undefined8 *)param_2;
    puVar4[1] = *(undefined8 *)((longlong)param_2 + 8);
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise_XV<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise_XV<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
    *(undefined8 *)(param_1->InlineStorage + 8) = *(undefined8 *)((longlong)param_2 + 8);
  }
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 141489cc0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  long64 lVar4;
  
  if (param_4) {
    plVar3 = (longlong *)**(longlong **)param_2;
    lVar4 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic(*plVar3 + -1);
    plVar3[9] = lVar4;
    pbVar1 = (byte *)((longlong)plVar3 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_01__QEAV1_4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 141489d50

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  long64 lVar4;
  undefined8 *puVar5;
  
  if (param_4) {
    plVar3 = *(longlong **)param_2;
    lVar4 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic(*plVar3 + -1);
    plVar3[9] = lVar4;
    pbVar1 = (byte *)((longlong)plVar3 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  if ((param_3 < 0x10) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_01__QEAV1_4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar5 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_1->InlineStorage = puVar5;
    *puVar5 = *(undefined8 *)param_2;
    puVar5[1] = *(undefined8 *)((longlong)param_2 + 8);
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_01__QEAV1_4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
    *(undefined8 *)(param_1->InlineStorage + 8) = *(undefined8 *)((longlong)param_2 + 8);
  }
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 141489e30

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  long64 lVar4;
  
  if (param_4) {
    plVar3 = (longlong *)**(longlong **)param_2;
    lVar4 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic(*plVar3 + -2);
    plVar3[9] = lVar4;
    pbVar1 = (byte *)((longlong)plVar3 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 141489ec0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  long64 lVar4;
  undefined8 *puVar5;
  
  if (param_4) {
    plVar3 = *(longlong **)param_2;
    lVar4 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic(*plVar3 + -2);
    plVar3[9] = lVar4;
    pbVar1 = (byte *)((longlong)plVar3 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  if ((param_3 < 0x10) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar5 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_1->InlineStorage = puVar5;
    *puVar5 = *(undefined8 *)param_2;
    puVar5[1] = *(undefined8 *)((longlong)param_2 + 8);
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
    *(undefined8 *)(param_1->InlineStorage + 8) = *(undefined8 *)((longlong)param_2 + 8);
  }
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 141489fa0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  byte *pbVar1;
  byte bVar2;
  void *this_00;
  
  if (param_4) {
    this_00 = (void *)**(undefined8 **)param_2;
    `Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()(this_00);
    pbVar1 = (byte *)((longlong)this_00 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148a030

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  byte *pbVar1;
  byte bVar2;
  void *this_00;
  undefined8 *puVar3;
  
  if (param_4) {
    this_00 = *(void **)param_2;
    `Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()(this_00);
    pbVar1 = (byte *)((longlong)this_00 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  if ((param_3 < 0x10) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar3 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_1->InlineStorage = puVar3;
    *puVar3 = *(undefined8 *)param_2;
    puVar3[1] = *(undefined8 *)((longlong)param_2 + 8);
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
    *(undefined8 *)(param_1->InlineStorage + 8) = *(undefined8 *)((longlong)param_2 + 8);
  }
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148a110

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  byte *pbVar1;
  byte bVar2;
  void *this_00;
  
  if (param_4) {
    this_00 = (void *)**(undefined8 **)param_2;
    `Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()(this_00);
    pbVar1 = (byte *)((longlong)this_00 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148a1a0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  byte *pbVar1;
  byte bVar2;
  void *this_00;
  undefined8 *puVar3;
  
  if (param_4) {
    this_00 = *(void **)param_2;
    `Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()(this_00);
    pbVar1 = (byte *)((longlong)this_00 + 0x54);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  if ((param_3 < 0x10) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar3 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_1->InlineStorage = puVar3;
    *puVar3 = *(undefined8 *)param_2;
    puVar3[1] = *(undefined8 *)((longlong)param_2 + 8);
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
    *(undefined8 *)(param_1->InlineStorage + 8) = *(undefined8 *)((longlong)param_2 + 8);
  }
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148a280

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_><`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  byte *pbVar1;
  byte bVar2;
  void *this_00;
  
  if (param_4) {
    this_00 = (void *)**(undefined8 **)param_2;
    `Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()(this_00);
    pbVar1 = (byte *)((longlong)this_00 + 0x4c);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148a310

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_><`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  byte *pbVar1;
  byte bVar2;
  void *this_00;
  undefined8 *puVar3;
  
  if (param_4) {
    this_00 = *(void **)param_2;
    `Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()(this_00);
    pbVar1 = (byte *)((longlong)this_00 + 0x4c);
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  if ((param_3 < 0x10) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar3 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_1->InlineStorage = puVar3;
    *puVar3 = *(undefined8 *)param_2;
    puVar3[1] = *(undefined8 *)((longlong)param_2 + 8);
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
    *(undefined8 *)(param_1->InlineStorage + 8) = *(undefined8 *)((longlong)param_2 + 8);
  }
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148a3f0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  byte *pbVar1;
  byte bVar2;
  
  if (param_4) {
    pbVar1 = (byte *)((longlong)**(undefined8 **)param_2 + 0x4c);
    **(undefined4 **)**(undefined8 **)param_2 = 0x2a;
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_>'::`2'::<lambda_1>_>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148a470

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  
  if (param_4) {
    pbVar1 = (byte *)((longlong)*(undefined8 **)param_2 + 0x4c);
    *(undefined4 *)**(undefined8 **)param_2 = 0x2a;
    LOCK();
    bVar2 = *pbVar1;
    *pbVar1 = 1;
    UNLOCK();
    if ((bVar2 & 3) == 2) {
      UE::ParkingLot::WakeAll(pbVar1);
    }
  }
  if ((param_3 < 0x10) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_>'::`2'::<lambda_1>_>'::`13'::<lambda_1>,1>
          ::_vftable_;
    puVar3 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_1->InlineStorage = puVar3;
    *puVar3 = *(undefined8 *)param_2;
    puVar3[1] = *(undefined8 *)((longlong)param_2 + 8);
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_>'::`2'::<lambda_1>_>'::`13'::<lambda_1>,0>
          ::_vftable_;
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
    *(undefined8 *)(param_1->InlineStorage + 8) = *(undefined8 *)((longlong)param_2 + 8);
  }
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148a540

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  FTask *pFVar4;
  
  if (param_4) {
    puVar1 = *(undefined8 **)param_2;
    LOCK();
    *(undefined1 *)*puVar1 = 1;
    UNLOCK();
    if (*(char *)puVar1[1] != '\x01') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GlobalRun == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                         ,0x228,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FTask *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_1>_>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148a5e0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  FTask *pFVar4;
  undefined8 *puVar5;
  
  if (param_4) {
    LOCK();
    **(undefined1 **)param_2 = 1;
    UNLOCK();
    if (**(char **)((longlong)param_2 + 8) != '\x01') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GlobalRun == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                         ,0x228,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FTask *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  if ((param_3 < 0x10) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_1>_>'::`13'::<lambda_1>,1>
          ::_vftable_;
    puVar5 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_1->InlineStorage = puVar5;
    uVar2 = *(undefined8 *)((longlong)param_2 + 8);
    *puVar5 = *(undefined8 *)param_2;
    puVar5[1] = uVar2;
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_1>_>'::`13'::<lambda_1>,0>
          ::_vftable_;
    uVar2 = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
    *(undefined8 *)(param_1->InlineStorage + 8) = uVar2;
  }
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148a6b0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  undefined8 *puVar1;
  long64 lVar2;
  
  if (param_4) {
    puVar1 = *(undefined8 **)param_2;
    lVar2 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic(puVar1[3] + -1);
    *(long64 *)*puVar1 = lVar2;
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148a730

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_1>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  long64 lVar1;
  void *local_res18;
  uint local_res20 [2];
  void *local_28;
  TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *local_20;
  void **local_18;
  uint *local_10;
  
  local_18 = &local_res18;
  local_10 = local_res20;
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_28 = this;
  local_20 = param_1;
  if (param_4) {
    lVar1 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic
                      (*(longlong *)((longlong)param_2 + 0x18) + -1);
    **(long64 **)param_2 = lVar1;
  }
  ScopeExitSupport::
  TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_1>_>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksBasic_::__l5::<lambda_1>_>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
            (&local_28);
  return (FTask *)0x0;
}

// CallAndMove @ 14148a790

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l5::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  if (param_4) {
    *(undefined4 *)**(undefined8 **)param_2 = 0x2a;
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`5'::<lambda_1>_>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148a7d0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l5::<lambda_1>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  undefined8 *puVar1;
  
  if (param_4) {
    **(undefined4 **)param_2 = 0x2a;
  }
  if ((param_3 < 8) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`5'::<lambda_1>_>'::`13'::<lambda_1>,1>
          ::_vftable_;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(8,8);
    *(undefined8 **)param_1->InlineStorage = puVar1;
    *puVar1 = *(undefined8 *)param_2;
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`5'::<lambda_1>_>'::`13'::<lambda_1>,0>
          ::_vftable_;
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  }
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148a860

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l17::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BB_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BB_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148a890

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l17::<lambda_1>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  undefined1 *puVar1;
  
  if (param_3 == 0) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BB_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BB_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(1,1);
    *(undefined1 **)param_1->InlineStorage = puVar1;
    *puVar1 = *(undefined1 *)param_2;
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BB_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BB_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    param_1->InlineStorage[0] = *(char *)param_2;
  }
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148a910

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  undefined8 *puVar1;
  long64 lVar2;
  long64 lVar3;
  longlong lVar4;
  
  if (param_4) {
    puVar1 = *(undefined8 **)param_2;
    lVar4 = *(longlong *)puVar1[1];
    if (lVar4 < 3) {
      lVar4 = 1;
    }
    else {
      lVar2 = `Tasks2Tests::BasicPerfTest<10000>'::__l2::Test::Fibonacci(lVar4 + -2);
      lVar3 = `Tasks2Tests::BasicPerfTest<10000>'::__l2::Test::Fibonacci(lVar4 + -1);
      lVar4 = lVar2 + lVar3;
    }
    *(longlong *)*puVar1 = lVar4;
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BD_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BD_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148a9b0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  long64 lVar1;
  long64 lVar2;
  longlong lVar3;
  undefined8 *local_res18;
  uint local_res20 [2];
  void *local_28;
  TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *local_20;
  undefined8 **local_18;
  uint *local_10;
  
  local_18 = &local_res18;
  local_10 = local_res20;
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_28 = this;
  local_20 = param_1;
  if (param_4) {
    lVar3 = **(longlong **)((longlong)param_2 + 8);
    if (lVar3 < 3) {
      lVar3 = 1;
    }
    else {
      lVar1 = `Tasks2Tests::BasicPerfTest<10000>'::__l2::Test::Fibonacci(lVar3 + -2);
      lVar2 = `Tasks2Tests::BasicPerfTest<10000>'::__l2::Test::Fibonacci(lVar3 + -1);
      lVar3 = lVar1 + lVar2;
    }
    *(longlong *)*local_res18 = lVar3;
  }
  ScopeExitSupport::
  TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_Tasks2Tests::BasicPerfTest<10000>_::__l19::<lambda_1>_>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
            (&local_28);
  return (FTask *)0x0;
}

// CallAndMove @ 14148aa40

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  long64 *plVar1;
  long64 lVar2;
  
  if (param_4) {
    plVar1 = (long64 *)**(undefined8 **)param_2;
    lVar2 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic
                      (*(long64 *)(*(undefined8 **)param_2)[1]);
    *plVar1 = lVar2;
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BD_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BD_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148aac0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  long64 *plVar1;
  long64 lVar2;
  void *local_res18;
  uint local_res20 [2];
  void *local_28;
  TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *local_20;
  void **local_18;
  uint *local_10;
  
  local_18 = &local_res18;
  local_10 = local_res20;
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_28 = this;
  local_20 = param_1;
  if (param_4) {
    plVar1 = *(long64 **)param_2;
    lVar2 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic
                      (**(long64 **)((longlong)param_2 + 8));
    *plVar1 = lVar2;
  }
  ScopeExitSupport::
  TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_Tasks2Tests::StealingPerfTest<10000>_::__l19::<lambda_1>_>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
            (&local_28);
  return (FTask *)0x0;
}

// CallAndMove @ 14148ab20

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_2>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  FTask *pFVar4;
  
  if (param_4) {
    puVar1 = *(undefined8 **)param_2;
    LOCK();
    *(undefined1 *)*puVar1 = 1;
    UNLOCK();
    if (*(char *)puVar1[1] != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalRun == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                         ,0x230,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FTask *)(*pcVar2)();
        return pFVar4;
      }
    }
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_2>_>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148abc0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_2>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  FTask *pFVar4;
  undefined8 *puVar5;
  
  if (param_4) {
    LOCK();
    **(undefined1 **)param_2 = 1;
    UNLOCK();
    if (**(char **)((longlong)param_2 + 8) != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalRun == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\Fundamental\\UnitTests.cpp"
                         ,0x230,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FTask *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  if ((param_3 < 0x10) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_2>_>'::`13'::<lambda_1>,1>
          ::_vftable_;
    puVar5 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_1->InlineStorage = puVar5;
    uVar2 = *(undefined8 *)((longlong)param_2 + 8);
    *puVar5 = *(undefined8 *)param_2;
    puVar5[1] = uVar2;
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_2>_>'::`13'::<lambda_1>,0>
          ::_vftable_;
    uVar2 = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
    *(undefined8 *)(param_1->InlineStorage + 8) = uVar2;
  }
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148ac90

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_2>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  undefined8 *puVar1;
  long64 lVar2;
  
  if (param_4) {
    puVar1 = *(undefined8 **)param_2;
    lVar2 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic(puVar1[3] + -2);
    *(long64 *)*puVar1 = lVar2;
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148ad10

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_2>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  long64 lVar1;
  void *local_res18;
  uint local_res20 [2];
  void *local_28;
  TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *local_20;
  void **local_18;
  uint *local_10;
  
  local_18 = &local_res18;
  local_10 = local_res20;
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_28 = this;
  local_20 = param_1;
  if (param_4) {
    lVar1 = `Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic
                      (*(longlong *)((longlong)param_2 + 0x18) + -2);
    **(long64 **)param_2 = lVar1;
  }
  ScopeExitSupport::
  TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_2>_>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksBasic_::__l5::<lambda_2>_>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
            (&local_28);
  return (FTask *)0x0;
}

// CallAndMove @ 14148ad70

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l34::<lambda_2>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__CC_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__CC_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148ada0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l34::<lambda_2>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  undefined1 *puVar1;
  
  if (param_3 == 0) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__CC_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__CC_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(1,1);
    *(undefined1 **)param_1->InlineStorage = puVar1;
    *puVar1 = *(undefined1 *)param_2;
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__CC_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__CC_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    param_1->InlineStorage[0] = *(char *)param_2;
  }
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148ae20

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l42::<lambda_2>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  if (param_4) {
    *(undefined4 *)**(undefined8 **)param_2 = 0x2a;
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`42'::<lambda_2>_>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148ae60

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l42::<lambda_2>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  void *local_res18;
  uint local_res20 [2];
  void *local_28;
  TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *local_20;
  void **local_18;
  uint *local_10;
  
  local_18 = &local_res18;
  local_10 = local_res20;
  if (param_4) {
    **(undefined4 **)param_2 = 0x2a;
  }
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_28 = this;
  local_20 = param_1;
  ScopeExitSupport::
  TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l42::<lambda_2>_>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_Tasks2Tests::FTasksUnitTests2::RunTest_::__l42::<lambda_2>_>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
            (&local_28);
  return (FTask *)0x0;
}

// CallAndMove @ 14148aeb0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::
           __l13::<lambda_1>::operator()(*(void **)param_2,param_4);
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__P_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__P_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return pFVar1;
}

// CallAndMove @ 14148af10

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  FTask *pFVar1;
  undefined8 *puVar2;
  
  pFVar1 = `LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::
           __l13::<lambda_1>::operator()(param_2,param_4);
  if ((param_3 < 8) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__P_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__P_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar2 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(8,8);
    *(undefined8 **)param_1->InlineStorage = puVar2;
    *puVar2 = *(undefined8 *)param_2;
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__P_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__P_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  }
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return pFVar1;
}

// CallAndMove @ 14148afc0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'
           ::__l13::<lambda_1>::operator()(*(void **)param_2,param_4);
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__P_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__P_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return pFVar1;
}

// CallAndMove @ 14148b020

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  FTask *pFVar1;
  undefined8 *puVar2;
  
  pFVar1 = `LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'
           ::__l13::<lambda_1>::operator()(param_2,param_4);
  if ((param_3 < 8) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__P_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__P_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar2 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(8,8);
    *(undefined8 **)param_1->InlineStorage = puVar2;
    *puVar2 = *(undefined8 *)param_2;
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__P_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__P_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  }
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return pFVar1;
}

// CallAndMove @ 14148b0d0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::
           Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'::__l13::
           <lambda_1>::operator()(*(void **)param_2,param_4);
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_3>_>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return pFVar1;
}

// CallAndMove @ 14148b130

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  undefined8 uVar1;
  FTask *pFVar2;
  undefined8 *puVar3;
  
  pFVar2 = `LowLevelTasks::FTask::
           Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'::__l13::
           <lambda_1>::operator()(param_2,param_4);
  if ((param_3 < 0x10) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_3>_>'::`13'::<lambda_1>,1>
          ::_vftable_;
    puVar3 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_1->InlineStorage = puVar3;
    uVar1 = *(undefined8 *)((longlong)param_2 + 8);
    *puVar3 = *(undefined8 *)param_2;
    puVar3[1] = uVar1;
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_3>_>'::`13'::<lambda_1>,0>
          ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
    *(undefined8 *)(param_1->InlineStorage + 8) = uVar1;
  }
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return pFVar2;
}

// CallAndMove @ 14148b1e0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::
           __l13::<lambda_1>::operator()(*(void **)param_2,param_4);
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_3>__CA_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_3>__CA_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return pFVar1;
}

// CallAndMove @ 14148b240

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  FTask *pFVar1;
  undefined8 *puVar2;
  
  pFVar1 = `LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::
           __l13::<lambda_1>::operator()(param_2,param_4);
  if ((param_3 < 8) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_3>__CA_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_3>__CA_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar2 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(8,8);
    *(undefined8 **)param_1->InlineStorage = puVar2;
    *puVar2 = *(undefined8 *)param_2;
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_3>__CA_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_3>__CA_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  }
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return pFVar1;
}

// CallAndMove @ 14148b2f0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l62::<lambda_3>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  if (param_4) {
    *(undefined4 *)**(undefined8 **)param_2 = 0x2a;
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`62'::<lambda_3>_>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148b330

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l62::<lambda_3>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  undefined8 *puVar1;
  
  if (param_4) {
    **(undefined4 **)param_2 = 0x2a;
  }
  if ((param_3 < 8) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`62'::<lambda_3>_>'::`13'::<lambda_1>,1>
          ::_vftable_;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(8,8);
    *(undefined8 **)param_1->InlineStorage = puVar1;
    *puVar1 = *(undefined8 *)param_2;
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`62'::<lambda_3>_>'::`13'::<lambda_1>,0>
          ::_vftable_;
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  }
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148b3c0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l92::<lambda_5>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  undefined8 *puVar1;
  
  if (param_4) {
    puVar1 = *(undefined8 **)param_2;
    *(undefined4 *)*puVar1 = 0x2a;
    ::operator_delete((void *)*puVar1,4);
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`92'::<lambda_5>_>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148b430

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l92::<lambda_5>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  undefined8 *puVar1;
  
  if (param_4) {
    **(undefined4 **)param_2 = 0x2a;
    ::operator_delete(*(void **)param_2,4);
  }
  if ((param_3 < 0x10) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`92'::<lambda_5>_>'::`13'::<lambda_1>,1>
          ::_vftable_;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_1->InlineStorage = puVar1;
    *puVar1 = *(undefined8 *)param_2;
    puVar1[1] = *(undefined8 *)((longlong)param_2 + 8);
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`92'::<lambda_5>_>'::`13'::<lambda_1>,0>
          ::_vftable_;
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
    *(undefined8 *)(param_1->InlineStorage + 8) = *(undefined8 *)((longlong)param_2 + 8);
  }
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148b4f0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_6>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  if (param_4) {
    *(undefined4 *)**(undefined8 **)param_2 = 0x2a;
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`93'::<lambda_6>_>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148b530

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_6>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  undefined8 *puVar1;
  
  if (param_4) {
    **(undefined4 **)param_2 = 0x2a;
  }
  if ((param_3 < 8) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`93'::<lambda_6>_>'::`13'::<lambda_1>,1>
          ::_vftable_;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(8,8);
    *(undefined8 **)param_1->InlineStorage = puVar1;
    *puVar1 = *(undefined8 *)param_2;
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`93'::<lambda_6>_>'::`13'::<lambda_1>,0>
          ::_vftable_;
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  }
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148b5c0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_7>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  FTask *pFVar1;
  
  if (param_4) {
    pFVar1 = (FTask *)**(undefined8 **)param_2;
  }
  else {
    pFVar1 = (FTask *)0x0;
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`93'::<lambda_7>_>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return pFVar1;
}

// CallAndMove @ 14148b600

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_7>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  undefined8 *puVar1;
  FTask *pFVar2;
  
  if (param_4) {
    pFVar2 = *(FTask **)param_2;
  }
  else {
    pFVar2 = (FTask *)0x0;
  }
  if ((param_3 < 8) || (((ulonglong)param_1 & 7) != 0)) {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`93'::<lambda_7>_>'::`13'::<lambda_1>,1>
          ::_vftable_;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(8,8);
    *(undefined8 **)param_1->InlineStorage = puVar1;
    *puVar1 = *(undefined8 *)param_2;
  }
  else {
    param_1->CallableWrapper =
         (TTaskDelegateBase)
         &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`93'::<lambda_7>_>'::`13'::<lambda_1>,0>
          ::_vftable_;
    *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  }
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return pFVar2;
}

// CallAndMove @ 14148b6a0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_2,false);
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::FBlockContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14148b700

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  void *local_res18;
  uint local_res20 [2];
  void *local_28;
  TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *local_20;
  void **local_18;
  uint *local_10;
  
  local_18 = &local_res18;
  local_10 = local_res20;
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_28 = this;
  local_20 = param_1;
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'
    ::__l2::FParallelExecutor::operator()(param_2,false);
  }
  ScopeExitSupport::
  TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_2>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_3>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::FBlockContext>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
            (&local_28);
  return (FTask *)0x0;
}

// DelegateSize @ 141490ae0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::Private::FTaskBase::Init'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490af0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::Private::FTaskBase::Init'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490b00

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490b10

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490b20

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490b30

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490b40

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490b50

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490b60

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490b70

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490b80

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490b90

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490ba0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490bb0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490bc0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490bd0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490be0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_><`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490bf0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_><`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490c00

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490c10

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490c20

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490c30

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490c40

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x20;
}

// DelegateSize @ 141490c50

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_1>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x20;
}

// DelegateSize @ 141490c60

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l5::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 8;
}

// DelegateSize @ 141490c70

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l5::<lambda_1>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 8;
}

// DelegateSize @ 141490c80

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l17::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 1;
}

// DelegateSize @ 141490c90

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l17::<lambda_1>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 1;
}

// DelegateSize @ 141490ca0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x20;
}

// DelegateSize @ 141490cb0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x20;
}

// DelegateSize @ 141490cc0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x20;
}

// DelegateSize @ 141490cd0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x20;
}

// DelegateSize @ 141490ce0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_2>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490cf0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_2>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490d00

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_2>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x20;
}

// DelegateSize @ 141490d10

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_2>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x20;
}

// DelegateSize @ 141490d20

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l34::<lambda_2>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 1;
}

// DelegateSize @ 141490d30

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l34::<lambda_2>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 1;
}

// DelegateSize @ 141490d40

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l42::<lambda_2>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x18;
}

// DelegateSize @ 141490d50

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l42::<lambda_2>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x18;
}

// DelegateSize @ 141490d60

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 8;
}

// DelegateSize @ 141490d70

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 8;
}

// DelegateSize @ 141490d80

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 8;
}

// DelegateSize @ 141490d90

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 8;
}

// DelegateSize @ 141490da0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490db0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490dc0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 8;
}

// DelegateSize @ 141490dd0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 8;
}

// DelegateSize @ 141490de0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l62::<lambda_3>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 8;
}

// DelegateSize @ 141490df0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l62::<lambda_3>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 8;
}

// DelegateSize @ 141490e00

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l92::<lambda_5>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490e10

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l92::<lambda_5>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490e20

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_6>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 8;
}

// DelegateSize @ 141490e30

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_6>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 8;
}

// DelegateSize @ 141490e40

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_7>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 8;
}

// DelegateSize @ 141490e50

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_7>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 8;
}

// DelegateSize @ 141490e60

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141490e70

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// Destroy @ 1414916d0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::Private::FTaskBase::Init'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = *(void **)param_1;
  puVar4 = *(undefined8 **)((longlong)pvVar3 + 8);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar3);
  return;
}

// Destroy @ 141491710

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::Private::FTaskBase::Init'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)((longlong)param_1 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141491730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// Destroy @ 141491740

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)param_1;
  TDeleter<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::Finish>
  ::
  ~TDeleter<AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::BasicPerfTest<10000>_::__l32::<lambda_3>::operator()_::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::BasicPerfTest<10000>_::__l32::<lambda_3>::operator()_::__l5::<lambda_1>_>::Finish>
            ((void *)((longlong)pvVar1 + 8));
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar1);
  return;
}

// Destroy @ 141491770

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  TDeleter<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::Finish>
  ::
  ~TDeleter<AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::BasicPerfTest<10000>_::__l32::<lambda_3>::operator()_::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::BasicPerfTest<10000>_::__l32::<lambda_3>::operator()_::__l5::<lambda_1>_>::Finish>
            ((void *)((longlong)param_1 + 8));
  return;
}

// Destroy @ 141491780

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)param_1;
  TDeleter<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::Finish>
  ::
  ~TDeleter<AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::StealingPerfTest<10000>_::__l32::<lambda_3>::operator()_::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::StealingPerfTest<10000>_::__l32::<lambda_3>::operator()_::__l5::<lambda_1>_>::Finish>
            ((void *)((longlong)pvVar1 + 8));
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar1);
  return;
}

// Destroy @ 1414917b0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  TDeleter<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::Finish>
  ::
  ~TDeleter<AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::StealingPerfTest<10000>_::__l32::<lambda_3>::operator()_::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::StealingPerfTest<10000>_::__l32::<lambda_3>::operator()_::__l5::<lambda_1>_>::Finish>
            ((void *)((longlong)param_1 + 8));
  return;
}

// Destroy @ 1414917c0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *pvVar1;
  void *this_00;
  
  pvVar1 = *(void **)param_1;
  this_00 = *(void **)((longlong)pvVar1 + 8);
  if (this_00 != (void *)0x0) {
    AwaitableTask_Detail::
    TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>
    ::Finish(this_00);
  }
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar1);
  return;
}

// Destroy @ 1414917f0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  
  pvVar3 = *(void **)((longlong)param_1 + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)((longlong)pvVar3 + 0x48);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 2) {
    if ((*(ulonglong *)((longlong)pvVar3 + 0x40) & 0x3e) == 0) {
      bVar5 = FTask::TryCancel((FTask *)((longlong)pvVar3 + 8),DefaultFlags);
      if (!bVar5) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Task.TryCancel()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\Async\\AwaitableTask.h"
                           ,0x157,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
  }
  else if ((iVar2 == 1) && (pvVar3 != (void *)0x0)) {
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
    ::operator_delete(pvVar3,0x50);
  }
  return;
}

// Destroy @ 141491810

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)param_1;
  TDeleter<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>::Finish>
  ::
  ~TDeleter<AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksAwaitable_::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksAwaitable_::__l5::<lambda_1>_>::Finish>
            ((void *)((longlong)pvVar1 + 8));
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar1);
  return;
}

// Destroy @ 141491840

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  TDeleter<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>::Finish>
  ::
  ~TDeleter<AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksAwaitable_::__l5::<lambda_1>_>,&AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksAwaitable_::__l5::<lambda_1>_>::Finish>
            ((void *)((longlong)param_1 + 8));
  return;
}

// Destroy @ 141491850

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)param_1;
  TDeleter<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>,&AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>::Finish>
  ::
  ~TDeleter<AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksAwaitable_::__l5::<lambda_2>_>,&AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksAwaitable_::__l5::<lambda_2>_>::Finish>
            ((void *)((longlong)pvVar1 + 8));
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar1);
  return;
}

// Destroy @ 141491880

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  TDeleter<AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>,&AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>::Finish>
  ::
  ~TDeleter<AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksAwaitable_::__l5::<lambda_2>_>,&AwaitableTask_Detail::TPromise<__int64,__Tasks2Tests::StealingPerfTest<10000>_::__l2::Test::FibonacciTasksAwaitable_::__l5::<lambda_2>_>::Finish>
            ((void *)((longlong)param_1 + 8));
  return;
}

// Destroy @ 141491890

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *pvVar1;
  void *this_00;
  
  pvVar1 = *(void **)param_1;
  this_00 = *(void **)((longlong)pvVar1 + 8);
  if (this_00 != (void *)0x0) {
    AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>::
    Finish(this_00);
  }
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar1);
  return;
}

// Destroy @ 1414918c0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  
  pvVar3 = *(void **)((longlong)param_1 + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)((longlong)pvVar3 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 2) {
    if ((*(ulonglong *)((longlong)pvVar3 + 0x48) & 0x3e) == 0) {
      bVar5 = FTask::TryCancel((FTask *)((longlong)pvVar3 + 0x10),DefaultFlags);
      if (!bVar5) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Task.TryCancel()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\Async\\AwaitableTask.h"
                           ,0x157,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
  }
  else if ((iVar2 == 1) && (pvVar3 != (void *)0x0)) {
    if ((*(ulonglong *)((longlong)pvVar3 + 0x48) & 0x20) == 0) {
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
    (**(code **)(*(longlong *)((longlong)pvVar3 + 0x38) + 0x18))
              ((longlong)pvVar3 + 0x38,(longlong)pvVar3 + 0x10);
    ::operator_delete(pvVar3,0x58);
  }
  return;
}

// Destroy @ 1414918e0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *pvVar1;
  void *this_00;
  
  pvVar1 = *(void **)param_1;
  this_00 = *(void **)((longlong)pvVar1 + 8);
  if (this_00 != (void *)0x0) {
    AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>
    ::Finish(this_00);
  }
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar1);
  return;
}

// Destroy @ 141491910

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  
  pvVar3 = *(void **)((longlong)param_1 + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)((longlong)pvVar3 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 2) {
    if ((*(ulonglong *)((longlong)pvVar3 + 0x48) & 0x3e) == 0) {
      bVar5 = FTask::TryCancel((FTask *)((longlong)pvVar3 + 0x10),DefaultFlags);
      if (!bVar5) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Task.TryCancel()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\Async\\AwaitableTask.h"
                           ,0x157,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
  }
  else if ((iVar2 == 1) && (pvVar3 != (void *)0x0)) {
    if ((*(ulonglong *)((longlong)pvVar3 + 0x48) & 0x20) == 0) {
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
    (**(code **)(*(longlong *)((longlong)pvVar3 + 0x38) + 0x18))
              ((longlong)pvVar3 + 0x38,(longlong)pvVar3 + 0x10);
    ::operator_delete(pvVar3,0x58);
  }
  return;
}

// Destroy @ 141491930

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_><`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *pvVar1;
  void *this_00;
  
  pvVar1 = *(void **)param_1;
  this_00 = *(void **)((longlong)pvVar1 + 8);
  if (this_00 != (void *)0x0) {
    AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>::
    Finish(this_00);
  }
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar1);
  return;
}

// Destroy @ 141491960

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_><`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  
  pvVar3 = *(void **)((longlong)param_1 + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)((longlong)pvVar3 + 0x48);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 2) {
    if ((*(ulonglong *)((longlong)pvVar3 + 0x40) & 0x3e) == 0) {
      bVar5 = FTask::TryCancel((FTask *)((longlong)pvVar3 + 8),DefaultFlags);
      if (!bVar5) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Task.TryCancel()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\Async\\AwaitableTask.h"
                           ,0x157,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
  }
  else if ((iVar2 == 1) && (pvVar3 != (void *)0x0)) {
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
    ::operator_delete(pvVar3,0x50);
  }
  return;
}

// Destroy @ 141491980

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *pvVar1;
  void *this_00;
  
  pvVar1 = *(void **)param_1;
  this_00 = *(void **)((longlong)pvVar1 + 8);
  if (this_00 != (void *)0x0) {
    AwaitableTask_Detail::
    TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>::Finish(this_00);
  }
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar1);
  return;
}

// Destroy @ 1414919b0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  
  pvVar3 = *(void **)((longlong)param_1 + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)((longlong)pvVar3 + 0x48);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 2) {
    if ((*(ulonglong *)((longlong)pvVar3 + 0x40) & 0x3e) == 0) {
      bVar5 = FTask::TryCancel((FTask *)((longlong)pvVar3 + 8),DefaultFlags);
      if (!bVar5) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Task.TryCancel()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\Async\\AwaitableTask.h"
                           ,0x157,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
  }
  else if ((iVar2 == 1) && (pvVar3 != (void *)0x0)) {
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
    ::operator_delete(pvVar3,0x50);
  }
  return;
}

// Destroy @ 1414919d0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(*(void **)param_1);
  return;
}

// Destroy @ 1414919e0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  return;
}

// Destroy @ 1414919f0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)pvVar1 + 0x10));
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar1);
  return;
}

// Destroy @ 141491a20

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_1>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Destroy @ 141491a30

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l5::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(*(void **)param_1);
  return;
}

// Destroy @ 141491a40

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l5::<lambda_1>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  return;
}

// Destroy @ 141491a50

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l17::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(*(void **)param_1);
  return;
}

// Destroy @ 141491a60

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l17::<lambda_1>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  return;
}

// Destroy @ 141491a70

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)pvVar1 + 0x18));
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar1);
  return;
}

// Destroy @ 141491aa0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18));
  return;
}

// Destroy @ 141491ab0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)pvVar1 + 0x18));
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar1);
  return;
}

// Destroy @ 141491ae0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x18));
  return;
}

// Destroy @ 141491af0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_2>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(*(void **)param_1);
  return;
}

// Destroy @ 141491b00

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_2>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  return;
}

// Destroy @ 141491b10

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_2>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)pvVar1 + 0x10));
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar1);
  return;
}

// Destroy @ 141491b40

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_2>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Destroy @ 141491b50

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l34::<lambda_2>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(*(void **)param_1);
  return;
}

// Destroy @ 141491b60

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l34::<lambda_2>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  return;
}

// Destroy @ 141491b70

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l42::<lambda_2>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)pvVar1 + 0x10));
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar1);
  return;
}

// Destroy @ 141491ba0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l42::<lambda_2>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Destroy @ 141491bb0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(*(void **)param_1);
  return;
}

// Destroy @ 141491bc0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  return;
}

// Destroy @ 141491bd0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(*(void **)param_1);
  return;
}

// Destroy @ 141491be0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  return;
}

// Destroy @ 141491bf0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(*(void **)param_1);
  return;
}

// Destroy @ 141491c00

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  return;
}

// Destroy @ 141491c10

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(*(void **)param_1);
  return;
}

// Destroy @ 141491c20

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  return;
}

// Destroy @ 141491c30

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l62::<lambda_3>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(*(void **)param_1);
  return;
}

// Destroy @ 141491c40

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l62::<lambda_3>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  return;
}

// Destroy @ 141491c50

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l92::<lambda_5>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *this_00;
  
  this_00 = *(void **)param_1;
  `Tasks2Tests::FTasksUnitTests2::RunTest'::__l92::<lambda_5>::~<lambda_5>(this_00);
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(this_00);
  return;
}

// Destroy @ 141491c80

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l92::<lambda_5>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  `Tasks2Tests::FTasksUnitTests2::RunTest'::__l92::<lambda_5>::~<lambda_5>(param_1);
  return;
}

// Destroy @ 141491c90

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_6>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(*(void **)param_1);
  return;
}

// Destroy @ 141491ca0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_6>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  return;
}

// Destroy @ 141491cb0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_7>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(*(void **)param_1);
  return;
}

// Destroy @ 141491cc0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_7>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  return;
}

// Destroy @ 141491cd0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_2>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_3>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext>(wchar_t_const_*,int,int,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_2>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_3>,EParallelForFlags,TArrayView<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext,int>_const_&)_::_2_::FParallelForData>
  *pTVar3;
  FParallelForData *pFVar4;
  
  pTVar3 = *(TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_2>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_3>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext>(wchar_t_const_*,int,int,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_2>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_3>,EParallelForFlags,TArrayView<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext,int>_const_&)_::_2_::FParallelForData>
             **)param_1;
  if ((pTVar3->Reference != (FParallelForData *)0x0) &&
     (*(char *)((longlong)&pTVar3[1].Reference + 4) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'
    ::__l2::FParallelExecutor::LaunchTask(pTVar3,*(int *)&pTVar3[1].Reference,true);
  }
  pFVar4 = pTVar3->Reference;
  if (pFVar4 != (FParallelForData *)0x0) {
    puVar1 = &pFVar4->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pTVar3);
  return;
}

// Destroy @ 141491d30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'
    ::__l2::FParallelExecutor::LaunchTask(param_1,*(int *)((longlong)param_1 + 8),true);
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141491d7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// IsHeapAllocated @ 14149db60

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::Private::FTaskBase::Init'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149db70

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::Private::FTaskBase::Init'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149db80

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149db90

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dba0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149dbb0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dbc0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149dbd0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dbe0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149dbf0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dc00

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149dc10

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dc20

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149dc30

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dc40

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149dc50

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dc60

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_><`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149dc70

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_><`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dc80

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149dc90

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dca0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149dcb0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dcc0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149dcd0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dce0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l5::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149dcf0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l5::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dd00

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l17::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149dd10

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l17::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dd20

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149dd30

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dd40

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149dd50

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dd60

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_2>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149dd70

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_2>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dd80

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_2>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149dd90

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_2>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dda0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l34::<lambda_2>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149ddb0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l34::<lambda_2>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149ddc0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l42::<lambda_2>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149ddd0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l42::<lambda_2>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dde0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149ddf0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149de00

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149de10

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149de20

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149de30

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149de40

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149de50

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149de60

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l62::<lambda_3>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149de70

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l62::<lambda_3>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149de80

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l92::<lambda_5>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149de90

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l92::<lambda_5>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dea0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_6>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149deb0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_6>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dec0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_7>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149ded0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_7>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 14149dee0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 14149def0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsSet @ 14149e3b0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::Private::FTaskBase::Init'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e3c0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::Private::FTaskBase::Init'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e3d0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e3e0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e3f0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e400

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e410

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e420

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e430

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e440

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e450

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e460

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e470

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e480

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e490

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e4a0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e4b0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_><`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e4c0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_><`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e4d0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e4e0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e4f0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e500

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e510

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e520

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e530

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l5::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e540

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l5::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e550

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l17::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e560

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l17::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e570

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e580

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e590

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e5a0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e5b0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_2>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e5c0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_2>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e5d0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_2>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e5e0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_2>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e5f0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l34::<lambda_2>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e600

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l34::<lambda_2>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e610

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l42::<lambda_2>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e620

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l42::<lambda_2>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e630

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e640

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e650

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e660

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e670

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e680

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e690

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e6a0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e6b0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l62::<lambda_3>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e6c0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l62::<lambda_3>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e6d0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l92::<lambda_5>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e6e0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l92::<lambda_5>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e6f0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_6>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e700

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_6>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e710

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_7>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e720

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_7>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e730

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14149e740

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// Move @ 1414a4590

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::Private::FTaskBase::Init'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a45c0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::Private::FTaskBase::Init'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((param_4 < 0x10) || (((ulonglong)param_2 & 7) != 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_2 = puVar1;
    *puVar1 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)((longlong)param_3 + 8);
  }
  else {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = *(undefined8 *)((longlong)param_3 + 8);
  }
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4660

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4690

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((param_4 < 0x10) || (((ulonglong)param_2 & 7) != 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_2 = puVar1;
    *puVar1 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)((longlong)param_3 + 8);
  }
  else {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = *(undefined8 *)((longlong)param_3 + 8);
  }
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4730

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4760

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((param_4 < 0x10) || (((ulonglong)param_2 & 7) != 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_2 = puVar1;
    *puVar1 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)((longlong)param_3 + 8);
  }
  else {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise__JV<lambda_1>__4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = *(undefined8 *)((longlong)param_3 + 8);
  }
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4800

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise_XV<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise_XV<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4830

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>::TPromise<void,``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_><``Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((param_4 < 0x10) || (((ulonglong)param_2 & 7) != 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise_XV<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise_XV<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_2 = puVar1;
    *puVar1 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)((longlong)param_3 + 8);
  }
  else {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise_XV<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ____TPromise_XV<lambda_1>__4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__AwaitableTask_Detail__QEAA_01__QEAV1_4___R<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_QEBA_XZ__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = *(undefined8 *)((longlong)param_3 + 8);
  }
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a48d0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_01__QEAV1_4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4900

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((param_4 < 0x10) || (((ulonglong)param_2 & 7) != 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_01__QEAV1_4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_2 = puVar1;
    *puVar1 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)((longlong)param_3 + 8);
  }
  else {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV1_4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_1>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_01__QEAV1_4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = *(undefined8 *)((longlong)param_3 + 8);
  }
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a49a0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a49d0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>::TPromise<__int64,``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_><``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksAwaitable'::__l5::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((param_4 < 0x10) || (((ulonglong)param_2 & 7) != 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_2 = puVar1;
    *puVar1 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)((longlong)param_3 + 8);
  }
  else {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z____TPromise__JV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_2>__4__FibonacciTasksAwaitable_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = *(undefined8 *)((longlong)param_3 + 8);
  }
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4a70

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4aa0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::BasicPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((param_4 < 0x10) || (((ulonglong)param_2 & 7) != 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_2 = puVar1;
    *puVar1 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)((longlong)param_3 + 8);
  }
  else {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_3>__CA_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = *(undefined8 *)((longlong)param_3 + 8);
  }
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4b40

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4b70

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>::TPromise<void,`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_><`Tasks2Tests::StealingPerfTest<10000>'::__l32::<lambda_3>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((param_4 < 0x10) || (((ulonglong)param_2 & 7) != 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_2 = puVar1;
    *puVar1 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)((longlong)param_3 + 8);
  }
  else {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_3>__CA_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = *(undefined8 *)((longlong)param_3 + 8);
  }
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4c10

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_><`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4c40

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>::TPromise<void,`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_><`Tasks2Tests::EmptyPerfTest<10000>'::__l47::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((param_4 < 0x10) || (((ulonglong)param_2 & 7) != 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_2 = puVar1;
    *puVar1 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)((longlong)param_3 + 8);
  }
  else {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1_____0V<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_PEB_WW4ETaskPriority_LowLevelTasks____QEAV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1_____0V<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z____TPromise_XV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__AwaitableTask_Detail__QEAA_01__QEAV<lambda_4>__CP_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = *(undefined8 *)((longlong)param_3 + 8);
  }
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4ce0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_>'::`2'::<lambda_1>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4d10

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::__l84::<lambda_4>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((param_4 < 0x10) || (((ulonglong)param_2 & 7) != 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_>'::`2'::<lambda_1>_>'::`13'::<lambda_1>,1>
                ::_vftable_;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_2 = puVar1;
    *puVar1 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)((longlong)param_3 + 8);
  }
  else {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`AwaitableTask_Detail::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_>::TPromise<void,`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_><`Tasks2Tests::FTasksUnitTests2::RunTest'::`84'::<lambda_4>_>'::`2'::<lambda_1>_>'::`13'::<lambda_1>,0>
                ::_vftable_;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = *(undefined8 *)((longlong)param_3 + 8);
  }
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4db0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_1>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4de0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_1>_>'::`13'::<lambda_1>,0>
                ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)param_3 + 8);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = uVar1;
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_1>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  puVar2 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8);
  *(undefined8 **)param_2 = puVar2;
  uVar1 = *(undefined8 *)((longlong)param_3 + 8);
  *puVar2 = *(undefined8 *)param_3;
  puVar2[1] = uVar1;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4e80

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4eb0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_1>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((param_4 < 0x20) || (((ulonglong)param_2 & 7) != 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x20,8)
    ;
    *(undefined8 **)param_2 = puVar1;
    *puVar1 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)((longlong)param_3 + 8);
    puVar1[2] = *(undefined8 *)((longlong)param_3 + 0x10);
    *(undefined8 *)((longlong)param_3 + 0x10) = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    puVar1[3] = *(undefined8 *)((longlong)param_3 + 0x18);
  }
  else {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = *(undefined8 *)((longlong)param_3 + 8);
    *(undefined8 *)((longlong)param_2 + 0x10) = *(undefined8 *)((longlong)param_3 + 0x10);
    *(undefined8 *)((longlong)param_3 + 0x10) = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    *(undefined8 *)((longlong)param_2 + 0x18) = *(undefined8 *)((longlong)param_3 + 0x18);
  }
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4f70

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l5::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`5'::<lambda_1>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a4fa0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l5::<lambda_1>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((7 < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`5'::<lambda_1>_>'::`13'::<lambda_1>,0>
                ::_vftable_;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`5'::<lambda_1>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(8,8);
  *(undefined8 **)param_2 = puVar1;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5030

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l17::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BB_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BB_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5060

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l17::<lambda_1>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BB_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BB_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined1 *)param_2 = *(undefined1 *)param_3;
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BB_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BB_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(1,1);
  *(undefined1 **)param_2 = puVar1;
  *puVar1 = *(undefined1 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a50f0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BD_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BD_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5120

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((param_4 < 0x20) || (((ulonglong)param_2 & 7) != 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BD_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BD_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x20,8)
    ;
    *(undefined8 **)param_2 = puVar1;
    *puVar1 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)((longlong)param_3 + 8);
    puVar1[2] = *(undefined8 *)((longlong)param_3 + 0x10);
    puVar1[3] = *(undefined8 *)((longlong)param_3 + 0x18);
  }
  else {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BD_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BD_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = *(undefined8 *)((longlong)param_3 + 8);
    *(undefined8 *)((longlong)param_2 + 0x10) = *(undefined8 *)((longlong)param_3 + 0x10);
    *(undefined8 *)((longlong)param_2 + 0x18) = *(undefined8 *)((longlong)param_3 + 0x18);
  }
  *(undefined8 *)((longlong)param_3 + 0x18) = 0;
  *(undefined8 *)((longlong)param_3 + 0x10) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a51e0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BD_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BD_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5210

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l19::<lambda_1>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((param_4 < 0x20) || (((ulonglong)param_2 & 7) != 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BD_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BD_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x20,8)
    ;
    *(undefined8 **)param_2 = puVar1;
    *puVar1 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)((longlong)param_3 + 8);
    puVar1[2] = *(undefined8 *)((longlong)param_3 + 0x10);
    puVar1[3] = *(undefined8 *)((longlong)param_3 + 0x18);
  }
  else {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__BD_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_BD_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = *(undefined8 *)((longlong)param_3 + 8);
    *(undefined8 *)((longlong)param_2 + 0x10) = *(undefined8 *)((longlong)param_3 + 0x10);
    *(undefined8 *)((longlong)param_2 + 0x18) = *(undefined8 *)((longlong)param_3 + 0x18);
  }
  *(undefined8 *)((longlong)param_3 + 0x18) = 0;
  *(undefined8 *)((longlong)param_3 + 0x10) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a52d0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_2>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_2>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5300

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_2>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_2>_>'::`13'::<lambda_1>,0>
                ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)param_3 + 8);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = uVar1;
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_2>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  puVar2 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8);
  *(undefined8 **)param_2 = puVar2;
  uVar1 = *(undefined8 *)((longlong)param_3 + 8);
  *puVar2 = *(undefined8 *)param_3;
  puVar2[1] = uVar1;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a53a0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_2>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a53d0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<``Tasks2Tests::StealingPerfTest<10000>'::__l2::Test::FibonacciTasksBasic'::__l5::<lambda_2>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((param_4 < 0x20) || (((ulonglong)param_2 & 7) != 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x20,8)
    ;
    *(undefined8 **)param_2 = puVar1;
    *puVar1 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)((longlong)param_3 + 8);
    puVar1[2] = *(undefined8 *)((longlong)param_3 + 0x10);
    *(undefined8 *)((longlong)param_3 + 0x10) = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    puVar1[3] = *(undefined8 *)((longlong)param_3 + 0x18);
  }
  else {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__4__FibonacciTasksBasic_Test__1____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_SA_J_J_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = *(undefined8 *)((longlong)param_3 + 8);
    *(undefined8 *)((longlong)param_2 + 0x10) = *(undefined8 *)((longlong)param_3 + 0x10);
    *(undefined8 *)((longlong)param_3 + 0x10) = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    *(undefined8 *)((longlong)param_2 + 0x18) = *(undefined8 *)((longlong)param_3 + 0x18);
  }
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5490

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l34::<lambda_2>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__CC_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__CC_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a54c0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l34::<lambda_2>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__CC_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__CC_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined1 *)param_2 = *(undefined1 *)param_3;
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__CC_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__CC_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(1,1);
  *(undefined1 **)param_2 = puVar1;
  *puVar1 = *(undefined1 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5550

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l42::<lambda_2>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`42'::<lambda_2>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5580

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l42::<lambda_2>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((param_4 < 0x18) || (((ulonglong)param_2 & 7) != 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`42'::<lambda_2>_>'::`13'::<lambda_1>,1>
                ::_vftable_;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x18,8)
    ;
    *(undefined8 **)param_2 = puVar1;
    *puVar1 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)((longlong)param_3 + 8);
    puVar1[2] = *(undefined8 *)((longlong)param_3 + 0x10);
  }
  else {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`42'::<lambda_2>_>'::`13'::<lambda_1>,0>
                ::_vftable_;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = *(undefined8 *)((longlong)param_3 + 8);
    *(undefined8 *)((longlong)param_2 + 0x10) = *(undefined8 *)((longlong)param_3 + 0x10);
  }
  *(undefined8 *)((longlong)param_3 + 0x10) = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5630

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__P_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__P_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5660

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::BasicPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((7 < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__P_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__P_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__P_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__P_____BasicPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(8,8);
  *(undefined8 **)param_2 = puVar1;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a56f0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__P_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__P_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5720

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::StealingPerfTest<10000>'::__l15::<lambda_2>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((7 < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__P_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__P_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_2>__P_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_2>__P_____StealingPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(8,8);
  *(undefined8 **)param_2 = puVar1;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a57b0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_3>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a57e0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::__l2::<lambda_3>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_3>_>'::`13'::<lambda_1>,0>
                ::_vftable_;
    uVar1 = *(undefined8 *)((longlong)param_3 + 8);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = uVar1;
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksLocalGlobalPriorities::RunTest'::`2'::<lambda_3>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  puVar2 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8);
  *(undefined8 **)param_2 = puVar2;
  uVar1 = *(undefined8 *)((longlong)param_3 + 8);
  *puVar2 = *(undefined8 *)param_3;
  puVar2[1] = uVar1;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5880

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_3>__CA_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_3>__CA_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a58b0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::EmptyPerfTest<10000>'::__l32::<lambda_3>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((7 < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_3>__CA_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_3>__CA_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_3>__CA_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV<lambda_3>__CA_____EmptyPerfTest__0CHBA__Tasks2Tests__YAX_N_Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(8,8);
  *(undefined8 **)param_2 = puVar1;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5940

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l62::<lambda_3>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`62'::<lambda_3>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5970

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l62::<lambda_3>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((7 < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`62'::<lambda_3>_>'::`13'::<lambda_1>,0>
                ::_vftable_;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`62'::<lambda_3>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(8,8);
  *(undefined8 **)param_2 = puVar1;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5a00

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l92::<lambda_5>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`92'::<lambda_5>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5a30

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l92::<lambda_5>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((param_4 < 0x10) || (((ulonglong)param_2 & 7) != 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`92'::<lambda_5>_>'::`13'::<lambda_1>,1>
                ::_vftable_;
    puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *(undefined8 **)param_2 = puVar1;
    *puVar1 = *(undefined8 *)param_3;
    puVar1[1] = *(undefined8 *)((longlong)param_3 + 8);
  }
  else {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`92'::<lambda_5>_>'::`13'::<lambda_1>,0>
                ::_vftable_;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = *(undefined8 *)((longlong)param_3 + 8);
  }
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5ad0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_6>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`93'::<lambda_6>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5b00

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_6>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((7 < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`93'::<lambda_6>_>'::`13'::<lambda_1>,0>
                ::_vftable_;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`93'::<lambda_6>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(8,8);
  *(undefined8 **)param_2 = puVar1;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5b90

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_7>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`93'::<lambda_7>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5bc0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::__l93::<lambda_7>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((7 < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`93'::<lambda_7>_>'::`13'::<lambda_1>,0>
                ::_vftable_;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`Tasks2Tests::FTasksUnitTests2::RunTest'::`93'::<lambda_7>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(8,8);
  *(undefined8 **)param_2 = puVar1;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5c50

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::FBlockContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1414a5c80

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::FBlockContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
                ::_vftable_;
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = 0;
    *(undefined4 *)((longlong)param_2 + 8) = *(undefined4 *)((longlong)param_3 + 8);
    *(undefined1 *)((longlong)param_2 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::FBlockContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
              ::_vftable_;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8);
  *(undefined8 **)param_2 = puVar1;
  *puVar1 = 0;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = 0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((longlong)param_3 + 8);
  *(undefined1 *)((longlong)puVar1 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Call @ 1415af4d0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_1,false);
  }
  return (FTask *)0x0;
}

// Call @ 1415af500

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::operator()(param_1,false);
  }
  return (FTask *)0x0;
}

// CallAndMove @ 1415af530

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_2,false);
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_VFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXPEB_WHHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAX0HH1W4EParallelForFlags___Z_2AEBV__TArrayView___TH___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAVFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXPEB_WHHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAX0HHV__TFunctionRef___A6AXH_Z__V1_1__ParallelFor__YAX0HH2W4EParallelForFlags___Z_3AEBV__TArrayView___TH___Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 1415af590

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  void *local_res18;
  uint local_res20 [2];
  void *local_28;
  TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *local_20;
  void **local_18;
  uint *local_10;
  
  local_18 = &local_res18;
  local_10 = local_res20;
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_28 = this;
  local_20 = param_1;
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::operator()(param_2,false);
  }
  ScopeExitSupport::
  TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
            (&local_28);
  return (FTask *)0x0;
}

// DelegateSize @ 1415bcc30

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 1415bcc40

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// Destroy @ 1415bcf90

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  *pTVar3;
  FParallelForData *pFVar4;
  
  pTVar3 = *(TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
             **)param_1;
  if ((pTVar3->Reference != (FParallelForData *)0x0) &&
     (*(char *)((longlong)&pTVar3[1].Reference + 4) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::LaunchTask(pTVar3,*(int *)&pTVar3[1].Reference,true);
  }
  pFVar4 = pTVar3->Reference;
  if (pFVar4 != (FParallelForData *)0x0) {
    puVar1 = &pFVar4->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pTVar3);
  return;
}

// Destroy @ 1415bcff0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::LaunchTask(param_1,*(int *)((longlong)param_1 + 8),true);
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001415bd03f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// IsHeapAllocated @ 1415c9950

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 1415c9960

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsSet @ 1415c9b80

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 1415c9b90

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// Move @ 1415d5ba0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_VFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXPEB_WHHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAX0HH1W4EParallelForFlags___Z_2AEBV__TArrayView___TH___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAVFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXPEB_WHHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAX0HHV__TFunctionRef___A6AXH_Z__V1_1__ParallelFor__YAX0HH2W4EParallelForFlags___Z_3AEBV__TArrayView___TH___Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1415d5bd0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_VFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXPEB_WHHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAX0HH1W4EParallelForFlags___Z_2AEBV__TArrayView___TH___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAVFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXPEB_WHHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAX0HHV__TFunctionRef___A6AXH_Z__V1_1__ParallelFor__YAX0HH2W4EParallelForFlags___Z_3AEBV__TArrayView___TH___Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = 0;
    *(undefined4 *)((longlong)param_2 + 8) = *(undefined4 *)((longlong)param_3 + 8);
    *(undefined1 *)((longlong)param_2 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_VFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXPEB_WHHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAX0HH1W4EParallelForFlags___Z_2AEBV__TArrayView___TH___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAVFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXPEB_WHHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAX0HHV__TFunctionRef___A6AXH_Z__V1_1__ParallelFor__YAX0HH2W4EParallelForFlags___Z_3AEBV__TArrayView___TH___Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8);
  *(undefined8 **)param_2 = puVar1;
  *puVar1 = 0;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = 0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((longlong)param_3 + 8);
  *(undefined1 *)((longlong)puVar1 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Call @ 14162d350

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_1,false);
  }
  return (FTask *)0x0;
}

// Call @ 14162d380

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
    ::__l2::FParallelExecutor::operator()(param_1,false);
  }
  return (FTask *)0x0;
}

// CallAndMove @ 14162d800

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_2,false);
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::`4'::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::`4'::<lambda_1>_>'::`5'::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14162d860

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  void *local_res18;
  uint local_res20 [2];
  void *local_28;
  TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *local_20;
  void **local_18;
  uint *local_10;
  
  local_18 = &local_res18;
  local_10 = local_res20;
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_28 = this;
  local_20 = param_1;
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
    ::__l2::FParallelExecutor::operator()(param_2,false);
  }
  ScopeExitSupport::
  TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>,_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_IPlatformFile::IterateDirectoryRecursively_::__l4::<lambda_1>_>_::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
            (&local_28);
  return (FTask *)0x0;
}

// DelegateSize @ 1416336b0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 1416336c0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// Destroy @ 141633d80

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>(wchar_t_const_*,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int>_const_&)_::_2_::FParallelForData>
  *pTVar3;
  FParallelForData *pFVar4;
  longlong lVar5;
  FLowLevelMemTracker *this_00;
  int *piVar6;
  
  pTVar3 = *(TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>(wchar_t_const_*,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int>_const_&)_::_2_::FParallelForData>
             **)param_1;
  if ((pTVar3->Reference != (FParallelForData *)0x0) &&
     (*(char *)((longlong)&pTVar3[1].Reference + 4) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
    ::__l2::FParallelExecutor::LaunchTask(pTVar3,*(int *)&pTVar3[1].Reference,true);
  }
  pFVar4 = pTVar3->Reference;
  if (pFVar4 != (FParallelForData *)0x0) {
    puVar1 = &pFVar4->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (*(code *)**(undefined8 **)pFVar4)();
    }
  }
  if (pTVar3 != (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>(wchar_t_const_*,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int>_const_&)_::_2_::FParallelForData>
                 *)0x0) {
    MemoryTrace_Free((ulong64)pTVar3,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pTVar3,FMalloc,true);
    }
    piVar6 = (int *)((ulonglong)pTVar3 & 0xffffffffffff0000);
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      lVar5 = *(longlong *)(piVar6 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar6,0,0);
      TBlockAllocationCache<65536,FAlignedAllocator>::Free(piVar6,lVar5 - (longlong)piVar6);
    }
  }
  return;
}

// Destroy @ 141633e60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
    ::__l2::FParallelExecutor::LaunchTask(param_1,*(int *)((longlong)param_1 + 8),true);
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141633eaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// IsHeapAllocated @ 141649f70

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 141649f80

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsSet @ 14164a370

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 14164a380

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// Move @ 14164df00

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::`4'::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::`4'::<lambda_1>_>'::`5'::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 14164df30

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::`4'::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::`4'::<lambda_1>_>'::`5'::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
                ::_vftable_;
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = 0;
    *(undefined4 *)((longlong)param_2 + 8) = *(undefined4 *)((longlong)param_3 + 8);
    *(undefined1 *)((longlong)param_2 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::`4'::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::`4'::<lambda_1>_>'::`5'::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
              ::_vftable_;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8);
  *(undefined8 **)param_2 = puVar1;
  *puVar1 = 0;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = 0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((longlong)param_3 + 8);
  *(undefined1 *)((longlong)puVar1 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Call @ 14174b5b0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_1,false);
  }
  return (FTask *)0x0;
}

// Call @ 14174b5e0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::operator()(param_1,false);
  }
  return (FTask *)0x0;
}

// CallAndMove @ 14174b610

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_2,false);
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_VFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXH1W4EParallelForFlags___Z_2AEBV__TArrayView___TH___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAVFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAX0HHV__TFunctionRef___A6AXH_Z__V1_1__ParallelFor__YAXH2W4EParallelForFlags___Z_3AEBV__TArrayView___TH___Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14174b670

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  void *local_res18;
  uint local_res20 [2];
  void *local_28;
  TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *local_20;
  void **local_18;
  uint *local_10;
  
  local_18 = &local_res18;
  local_10 = local_res20;
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_28 = this;
  local_20 = param_1;
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::operator()(param_2,false);
  }
  ScopeExitSupport::
  TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
            (&local_28);
  return (FTask *)0x0;
}

// DelegateSize @ 1417502f0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141750300

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// Destroy @ 141750500

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  *pTVar3;
  FParallelForData *pFVar4;
  
  pTVar3 = *(TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
             **)param_1;
  if ((pTVar3->Reference != (FParallelForData *)0x0) &&
     (*(char *)((longlong)&pTVar3[1].Reference + 4) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::LaunchTask(pTVar3,*(int *)&pTVar3[1].Reference,true);
  }
  pFVar4 = pTVar3->Reference;
  if (pFVar4 != (FParallelForData *)0x0) {
    puVar1 = &pFVar4->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pTVar3);
  return;
}

// Destroy @ 141750560

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::LaunchTask(param_1,*(int *)((longlong)param_1 + 8),true);
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001417505af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// IsHeapAllocated @ 141766d40

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 141766d50

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsSet @ 141767090

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 1417670a0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// Move @ 14176d260

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_VFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXH1W4EParallelForFlags___Z_2AEBV__TArrayView___TH___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAVFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAX0HHV__TFunctionRef___A6AXH_Z__V1_1__ParallelFor__YAXH2W4EParallelForFlags___Z_3AEBV__TArrayView___TH___Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 14176d290

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_VFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXH1W4EParallelForFlags___Z_2AEBV__TArrayView___TH___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAVFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAX0HHV__TFunctionRef___A6AXH_Z__V1_1__ParallelFor__YAXH2W4EParallelForFlags___Z_3AEBV__TArrayView___TH___Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = 0;
    *(undefined4 *)((longlong)param_2 + 8) = *(undefined4 *)((longlong)param_3 + 8);
    *(undefined1 *)((longlong)param_2 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_VFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXH1W4EParallelForFlags___Z_2AEBV__TArrayView___TH___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAVFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAX0HHV__TFunctionRef___A6AXH_Z__V1_1__ParallelFor__YAXH2W4EParallelForFlags___Z_3AEBV__TArrayView___TH___Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8);
  *(undefined8 **)param_2 = puVar1;
  *puVar1 = 0;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = 0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((longlong)param_3 + 8);
  *(undefined1 *)((longlong)puVar1 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Call @ 141b39af0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_1,false);
  }
  return (FTask *)0x0;
}

// Call @ 141b39b20

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::operator()(param_1,false);
  }
  return (FTask *)0x0;
}

// CallAndMove @ 141b39b50

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_2,false);
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_VFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1__N1_Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXH1_N2_Z_W4EParallelForFlags__AEBV__TArrayView___TH___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAVFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1__N1_Z___T_ParallelForImpl__YAX0HHV__TFunctionRef___A6AXH_Z__V1_1__ParallelFor__YAXH2_N3_Z_W4EParallelForFlags__AEBV__TArrayView___TH___Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 141b39bb0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  void *local_res18;
  uint local_res20 [2];
  void *local_28;
  TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *local_20;
  void **local_18;
  uint *local_10;
  
  local_18 = &local_res18;
  local_10 = local_res20;
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_28 = this;
  local_20 = param_1;
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::operator()(param_2,false);
  }
  ScopeExitSupport::
  TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
            (&local_28);
  return (FTask *)0x0;
}

// DelegateSize @ 141b3ccf0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 141b3cd00

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// Destroy @ 141b3d540

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,bool,bool)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,bool,bool)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  *pTVar3;
  FParallelForData *pFVar4;
  
  pTVar3 = *(TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,bool,bool)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,bool,bool)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
             **)param_1;
  if ((pTVar3->Reference != (FParallelForData *)0x0) &&
     (*(char *)((longlong)&pTVar3[1].Reference + 4) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::LaunchTask(pTVar3,*(int *)&pTVar3[1].Reference,true);
  }
  pFVar4 = pTVar3->Reference;
  if (pFVar4 != (FParallelForData *)0x0) {
    puVar1 = &pFVar4->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pTVar3);
  return;
}

// Destroy @ 141b3d5a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::LaunchTask(param_1,*(int *)((longlong)param_1 + 8),true);
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141b3d5ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// IsHeapAllocated @ 141b46630

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 141b46640

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsSet @ 141b467a0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 141b467b0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// Move @ 141b46aa0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_VFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1__N1_Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXH1_N2_Z_W4EParallelForFlags__AEBV__TArrayView___TH___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAVFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1__N1_Z___T_ParallelForImpl__YAX0HHV__TFunctionRef___A6AXH_Z__V1_1__ParallelFor__YAXH2_N3_Z_W4EParallelForFlags__AEBV__TArrayView___TH___Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 141b46ad0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_VFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1__N1_Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXH1_N2_Z_W4EParallelForFlags__AEBV__TArrayView___TH___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAVFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1__N1_Z___T_ParallelForImpl__YAX0HHV__TFunctionRef___A6AXH_Z__V1_1__ParallelFor__YAXH2_N3_Z_W4EParallelForFlags__AEBV__TArrayView___TH___Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = 0;
    *(undefined4 *)((longlong)param_2 + 8) = *(undefined4 *)((longlong)param_3 + 8);
    *(undefined1 *)((longlong)param_2 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_VFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1__N1_Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXH1_N2_Z_W4EParallelForFlags__AEBV__TArrayView___TH___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAVFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1__N1_Z___T_ParallelForImpl__YAX0HHV__TFunctionRef___A6AXH_Z__V1_1__ParallelFor__YAXH2_N3_Z_W4EParallelForFlags__AEBV__TArrayView___TH___Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8);
  *(undefined8 **)param_2 = puVar1;
  *puVar1 = 0;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = 0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((longlong)param_3 + 8);
  *(undefined1 *)((longlong)puVar1 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Call @ 141d771b0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>'::__l4::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::
           Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>'::__l4::<lambda_1>_>'::__l2::<lambda_1>_>'
           ::__l13::<lambda_1>::operator()(*(void **)param_1,param_2);
  return pFVar1;
}

// Call @ 141d771d0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<``UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::
           Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<``UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
           ::__l13::<lambda_1>::operator()(*(void **)param_1,param_2);
  return pFVar1;
}

// CallAndMove @ 141d771f0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>'::__l4::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::
           Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>'::__l4::<lambda_1>_>'::__l2::<lambda_1>_>'
           ::__l13::<lambda_1>::operator()(*(void **)param_2,param_4);
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1____Push_V<lambda_1>__3____TaskConcurrencyLimiter_WaitingStressTest__0CHBA__TasksTests_UE__YAXXZ__FPimpl_TaskConcurrencyLimiter_Private_Tasks_UE__QEAAXPEB_W__QEAV1_3____TaskConcurrencyLimiter_WaitingStressTest__0CHBA__TasksTests_5_YAXXZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1____Push_V<lambda_1>__3____TaskConcurrencyLimiter_WaitingStressTest__0CHBA__TasksTests_UE__YAXXZ__FPimpl_TaskConcurrencyLimiter_Private_Tasks_UE__QEAAX0__QEAV1_3____TaskConcurrencyLimiter_WaitingStressTest__0CHBA__TasksTests_8_YAXXZ__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return pFVar1;
}

// CallAndMove @ 141d77250

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<``UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::
           Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<``UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
           ::__l13::<lambda_1>::operator()(*(void **)param_2,param_4);
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1____Push_V<lambda_1>__4___R1_3____TaskConcurrencyLimiterStressTest__07_0PECEA__09_TasksTests_UE__YAXXZ_QEBA_XZ__FPimpl_TaskConcurrencyLimiter_Private_Tasks_UE__QEAAXPEB_W__QEAV1_4___R1_3____TaskConcurrencyLimiterStressTest__07_0PECEA__09_TasksTests_5_YAXXZ_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1____Push_V<lambda_1>__4___R1_3____TaskConcurrencyLimiterStressTest__07_0PECEA__09_TasksTests_UE__YAXXZ_QEBA_XZ__FPimpl_TaskConcurrencyLimiter_Private_Tasks_UE__QEAAX0__QEAV1_4___R1_3____TaskConcurrencyLimiterStressTest__07_0PECEA__09_TasksTests_8_YAXXZ_QEBA_XZ__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return pFVar1;
}

// DelegateSize @ 141d78ce0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>'::__l4::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x38;
}

// DelegateSize @ 141d78cf0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<``UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x48;
}

// Destroy @ 141d78d40

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>'::__l4::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)pvVar1 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)pvVar1 + 0x20));
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar1);
  return;
}

// Destroy @ 141d78d70

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<``UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)pvVar1 + 0x40));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)pvVar1 + 0x30));
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar1);
  return;
}

// IsHeapAllocated @ 141d7a1f0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>'::__l4::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 141d7a200

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<``UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsSet @ 141d7a210

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>'::__l4::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 141d7a220

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<``UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// Move @ 141d7a230

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::TasksTests::TaskConcurrencyLimiter_WaitingStressTest<10000>'::__l4::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1____Push_V<lambda_1>__3____TaskConcurrencyLimiter_WaitingStressTest__0CHBA__TasksTests_UE__YAXXZ__FPimpl_TaskConcurrencyLimiter_Private_Tasks_UE__QEAAXPEB_W__QEAV1_3____TaskConcurrencyLimiter_WaitingStressTest__0CHBA__TasksTests_5_YAXXZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1____Push_V<lambda_1>__3____TaskConcurrencyLimiter_WaitingStressTest__0CHBA__TasksTests_UE__YAXXZ__FPimpl_TaskConcurrencyLimiter_Private_Tasks_UE__QEAAX0__QEAV1_3____TaskConcurrencyLimiter_WaitingStressTest__0CHBA__TasksTests_8_YAXXZ__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 141d7a260

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<``UE::TasksTests::TaskConcurrencyLimiterStressTest<8,1000000,10>'::__l4::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1____Push_V<lambda_1>__4___R1_3____TaskConcurrencyLimiterStressTest__07_0PECEA__09_TasksTests_UE__YAXXZ_QEBA_XZ__FPimpl_TaskConcurrencyLimiter_Private_Tasks_UE__QEAAXPEB_W__QEAV1_4___R1_3____TaskConcurrencyLimiterStressTest__07_0PECEA__09_TasksTests_5_YAXXZ_QEBA_XZ__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1____Push_V<lambda_1>__4___R1_3____TaskConcurrencyLimiterStressTest__07_0PECEA__09_TasksTests_UE__YAXXZ_QEBA_XZ__FPimpl_TaskConcurrencyLimiter_Private_Tasks_UE__QEAAX0__QEAV1_4___R1_3____TaskConcurrencyLimiterStressTest__07_0PECEA__09_TasksTests_8_YAXXZ_QEBA_XZ__Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}


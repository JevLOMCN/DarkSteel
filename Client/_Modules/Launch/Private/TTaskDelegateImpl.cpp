// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 14

// Call @ 148da03b0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::
           Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>::
           operator()(*(void **)param_1,param_2);
  return pFVar1;
}

// Call @ 148da03d0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::
           Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>::
           operator()(param_1,param_2);
  return pFVar1;
}

// CallAndMove @ 148da03f0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::
           Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>::
           operator()(*(void **)param_2,param_4);
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__AddQueuedWork_FQueuedLowLevelThreadPool__EEAAXPEAVIQueuedWork__W4EQueuedWorkPriority___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__AddQueuedWork_FQueuedLowLevelThreadPool__EEAAXPEAVIQueuedWork__W4EQueuedWorkPriority___Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return pFVar1;
}

// CallAndMove @ 148da0450

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  FTask *pFVar1;
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
  pFVar1 = `LowLevelTasks::FTask::
           Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>::
           operator()(param_2,param_4);
  ScopeExitSupport::
  TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_FQueuedLowLevelThreadPool::AddQueuedWork_::__l2::<lambda_1>_>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
            (&local_28);
  return pFVar1;
}

// DelegateSize @ 148da0f90

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x18;
}

// DelegateSize @ 148da0fa0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x18;
}

// Destroy @ 148da10d0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  void *this_00;
  
  this_00 = *(void **)param_1;
  `FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>::~<lambda_1>(this_00);
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(this_00);
  return;
}

// Destroy @ 148da1100

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  `FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>::~<lambda_1>(param_1);
  return;
}

// IsHeapAllocated @ 148da4bc0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 148da4bd0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsSet @ 148da4ca0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 148da4cb0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// Move @ 148da8280

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &
             ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__AddQueuedWork_FQueuedLowLevelThreadPool__EEAAXPEAVIQueuedWork__W4EQueuedWorkPriority___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__AddQueuedWork_FQueuedLowLevelThreadPool__EEAAXPEAVIQueuedWork__W4EQueuedWorkPriority___Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 148da82b0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((param_4 < 0x18) || (((ulonglong)param_2 & 7) != 0)) {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__AddQueuedWork_FQueuedLowLevelThreadPool__EEAAXPEAVIQueuedWork__W4EQueuedWorkPriority___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__AddQueuedWork_FQueuedLowLevelThreadPool__EEAAXPEAVIQueuedWork__W4EQueuedWorkPriority___Z_W4ETaskFlags_3__Z__00___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    puVar2 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x18,8)
    ;
    *(undefined8 **)param_2 = puVar2;
    uVar1 = *(undefined8 *)param_3;
    puVar2[1] = 0;
    *puVar2 = uVar1;
    puVar2[1] = *(undefined8 *)((longlong)param_3 + 8);
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    puVar2[2] = *(undefined8 *)((longlong)param_3 + 0x10);
  }
  else {
    *param_1 = (TTaskDelegateBase)
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__AddQueuedWork_FQueuedLowLevelThreadPool__EEAAXPEAVIQueuedWork__W4EQueuedWorkPriority___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__AddQueuedWork_FQueuedLowLevelThreadPool__EEAAXPEAVIQueuedWork__W4EQueuedWorkPriority___Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    uVar1 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)param_2 + 8) = 0;
    *(undefined8 *)param_2 = uVar1;
    *(undefined8 *)((longlong)param_2 + 8) = *(undefined8 *)((longlong)param_3 + 8);
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    *(undefined8 *)((longlong)param_2 + 0x10) = *(undefined8 *)((longlong)param_3 + 0x10);
  }
  *(undefined8 *)((longlong)param_3 + 0x10) = 0;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}


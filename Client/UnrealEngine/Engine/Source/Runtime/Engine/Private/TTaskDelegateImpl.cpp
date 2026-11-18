// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 56

// Call @ 147eb3330

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_1,false);
  }
  return (FTask *)0x0;
}

// Call @ 147eb3360

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'
    ::__l2::FParallelExecutor::operator()(param_1,false);
  }
  return (FTask *)0x0;
}

// Call @ 147eb3390

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_1,false);
  }
  return (FTask *)0x0;
}

// Call @ 147eb33c0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'
    ::__l2::FParallelExecutor::operator()(param_1,false);
  }
  return (FTask *)0x0;
}

// CallAndMove @ 147eb33f0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_2,false);
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>_>'::`2'::<lambda_1>,FRenderCommandList_*>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 147eb3450

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
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
    ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'
    ::__l2::FParallelExecutor::operator()(param_2,false);
  }
  ScopeExitSupport::
  TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>,_ParallelForWithExistingTaskContext<FRenderCommandList_*,_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>_>_::__l2::<lambda_1>,FRenderCommandList_*>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
            (&local_28);
  return (FTask *)0x0;
}

// CallAndMove @ 147eb34a0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_2,false);
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::`67'::<lambda_6>,FRenderCommandList_*>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 147eb3500

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
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
    ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'
    ::__l2::FParallelExecutor::operator()(param_2,false);
  }
  ScopeExitSupport::
  TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<_UWorld::SendAllEndOfFrameUpdatesInternal_::__l2::<lambda_3>,_UWorld::SendAllEndOfFrameUpdatesInternal_::__l67::<lambda_6>,FRenderCommandList_*>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
            (&local_28);
  return (FTask *)0x0;
}

// DelegateSize @ 147eb7220

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 147eb7230

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 147eb7240

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 147eb7250

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// Destroy @ 147eb74b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithExistingTaskContext<FRenderCommandList_*,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_>(wchar_t_const_*,TArrayView<FRenderCommandList_*,int>,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_2_::<lambda_1>,FRenderCommandList_*>(wchar_t_const_*,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithExistingTaskContext<FRenderCommandList_*,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_>(wchar_t_const_*,TArrayView<FRenderCommandList_*,int>,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<FRenderCommandList_*,int>_const_&)_::_2_::FParallelForData>
  *pTVar3;
  FParallelForData *pFVar4;
  
  pTVar3 = *(TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithExistingTaskContext<FRenderCommandList_*,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_>(wchar_t_const_*,TArrayView<FRenderCommandList_*,int>,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_2_::<lambda_1>,FRenderCommandList_*>(wchar_t_const_*,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithExistingTaskContext<FRenderCommandList_*,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_>(wchar_t_const_*,TArrayView<FRenderCommandList_*,int>,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<FRenderCommandList_*,int>_const_&)_::_2_::FParallelForData>
             **)param_1;
  if ((pTVar3->Reference != (FParallelForData *)0x0) &&
     (*(char *)((longlong)&pTVar3[1].Reference + 4) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'
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

// Destroy @ 147eb7510

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'
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
                    /* WARNING: Could not recover jumptable at 0x000147eb755f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// Destroy @ 147eb7570

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_67_::<lambda_6>,FRenderCommandList_*>(wchar_t_const_*,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_67_::<lambda_6>,EParallelForFlags,TArrayView<FRenderCommandList_*,int>_const_&)_::_2_::FParallelForData>
  *pTVar3;
  FParallelForData *pFVar4;
  
  pTVar3 = *(TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_67_::<lambda_6>,FRenderCommandList_*>(wchar_t_const_*,int,int,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_2_::<lambda_3>,_private:_void___cdecl_UWorld::SendAllEndOfFrameUpdatesInternal(UWorld::EEndOfFrameUpdateLocation)_::_67_::<lambda_6>,EParallelForFlags,TArrayView<FRenderCommandList_*,int>_const_&)_::_2_::FParallelForData>
             **)param_1;
  if ((pTVar3->Reference != (FParallelForData *)0x0) &&
     (*(char *)((longlong)&pTVar3[1].Reference + 4) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'
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

// Destroy @ 147eb75d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'
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
                    /* WARNING: Could not recover jumptable at 0x000147eb761f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// IsHeapAllocated @ 147ecd670

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 147ecd680

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 147ecd690

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 147ecd6a0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsSet @ 147ecdef0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 147ecdf00

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 147ecdf10

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 147ecdf20

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// Move @ 147ecfb30

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>_>'::`2'::<lambda_1>,FRenderCommandList_*>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 147ecfb60

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>_>'::__l2::<lambda_1>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>_>'::`2'::<lambda_1>,FRenderCommandList_*>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>,`ParallelForWithExistingTaskContext<FRenderCommandList_*,`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>_>'::`2'::<lambda_1>,FRenderCommandList_*>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
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

// Move @ 147ecfc20

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::`67'::<lambda_6>,FRenderCommandList_*>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 147ecfc50

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::__l2::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::__l67::<lambda_6>,FRenderCommandList_*>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::`67'::<lambda_6>,FRenderCommandList_*>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UWorld::SendAllEndOfFrameUpdatesInternal'::`2'::<lambda_3>,`UWorld::SendAllEndOfFrameUpdatesInternal'::`67'::<lambda_6>,FRenderCommandList_*>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
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

// Call @ 14878ab40

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_1,false);
  }
  return (FTask *)0x0;
}

// Call @ 14878ab70

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'
    ::__l2::FParallelExecutor::operator()(param_1,false);
  }
  return (FTask *)0x0;
}

// CallAndMove @ 14878aba0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_2,false);
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::`15'::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::`15'::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::`15'::<lambda_1>_>'::`5'::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::`15'::FProcessActorContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 14878ac00

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
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
    ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'
    ::__l2::FParallelExecutor::operator()(param_2,false);
  }
  ScopeExitSupport::
  TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>,_ParallelForWithTaskContext<_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::<lambda_1>_>_::__l5::<lambda_1>,_FLevelRenderAssetManager::IncrementalBuild_::__l15::FProcessActorContext>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
            (&local_28);
  return (FTask *)0x0;
}

// DelegateSize @ 148791be0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 148791bf0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// Destroy @ 148792240

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>_>_&,int,int,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>_>_&,int,int,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,int>_const_&)_::_2_::FParallelForData>
  *pTVar3;
  FParallelForData *pFVar4;
  
  pTVar3 = *(TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>_>_&,int,int,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,TSizedDefaultAllocator<32>_>_&,int,int,_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FLevelRenderAssetManager::IncrementalBuild(FDynamicRenderAssetInstanceManager_&,FStreamingTextureLevelContext_&,bool,__int64_&)_::_15_::FProcessActorContext,int>_const_&)_::_2_::FParallelForData>
             **)param_1;
  if ((pTVar3->Reference != (FParallelForData *)0x0) &&
     (*(char *)((longlong)&pTVar3[1].Reference + 4) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'
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

// Destroy @ 1487922a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'
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
                    /* WARNING: Could not recover jumptable at 0x0001487922ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// IsHeapAllocated @ 1487af0b0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 1487af0c0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsSet @ 1487af510

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 1487af520

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// Move @ 1487b0130

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::`15'::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::`15'::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::`15'::<lambda_1>_>'::`5'::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::`15'::FProcessActorContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 1487b0160

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::<lambda_1>_>'::__l5::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::__l15::FProcessActorContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::`15'::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::`15'::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::`15'::<lambda_1>_>'::`5'::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::`15'::FProcessActorContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FLevelRenderAssetManager::IncrementalBuild'::`15'::<lambda_1>,`ParallelForWithTaskContext<`FLevelRenderAssetManager::IncrementalBuild'::`15'::FProcessActorContext,TSizedDefaultAllocator<32>,`FLevelRenderAssetManager::IncrementalBuild'::`15'::<lambda_1>_>'::`5'::<lambda_1>,`FLevelRenderAssetManager::IncrementalBuild'::`15'::FProcessActorContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
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

// Call @ 148824ae0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_1,false);
  }
  return (FTask *)0x0;
}

// Call @ 148824b10

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'
    ::__l2::FParallelExecutor::operator()(param_1,false);
  }
  return (FTask *)0x0;
}

// CallAndMove @ 148824b40

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_2,false);
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::`2'::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::`2'::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::`2'::<lambda_1>_>'::`5'::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::`2'::FCompileElementsContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 148824ba0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
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
    ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'
    ::__l2::FParallelExecutor::operator()(param_2,false);
  }
  ScopeExitSupport::
  TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<_FRenderAssetInstanceState::CompileElements_::__l2::<lambda_1>,_ParallelForWithTaskContext<_FRenderAssetInstanceState::CompileElements_::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,_FRenderAssetInstanceState::CompileElements_::__l2::<lambda_1>_>_::__l5::<lambda_1>,_FRenderAssetInstanceState::CompileElements_::__l2::FCompileElementsContext>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
            (&local_28);
  return (FTask *)0x0;
}

// DelegateSize @ 14882e620

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 14882e630

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// Destroy @ 14882ee80

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  FParallelForData_conflict *pFVar1;
  int iVar2;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::FCompileElementsContext,TSizedDefaultAllocator<32>,_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::<lambda_1>_>(wchar_t_const_*,TArray<_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::FCompileElementsContext,TSizedDefaultAllocator<32>_>_&,int,int,_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::FCompileElementsContext>(wchar_t_const_*,int,int,_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::FCompileElementsContext,TSizedDefaultAllocator<32>,_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::<lambda_1>_>(wchar_t_const_*,TArray<_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::FCompileElementsContext,TSizedDefaultAllocator<32>_>_&,int,int,_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::FCompileElementsContext,int>_const_&)_::_2_::FParallelForData>
  *pTVar3;
  FParallelForData_conflict *pFVar4;
  
  pTVar3 = *(TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::FCompileElementsContext,TSizedDefaultAllocator<32>,_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::<lambda_1>_>(wchar_t_const_*,TArray<_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::FCompileElementsContext,TSizedDefaultAllocator<32>_>_&,int,int,_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::FCompileElementsContext>(wchar_t_const_*,int,int,_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::FCompileElementsContext,TSizedDefaultAllocator<32>,_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::<lambda_1>_>(wchar_t_const_*,TArray<_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::FCompileElementsContext,TSizedDefaultAllocator<32>_>_&,int,int,_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::FCompileElementsContext,int>_const_&)_::_2_::FParallelForData>
             **)param_1;
  if ((pTVar3->Reference != (FParallelForData_conflict *)0x0) &&
     (*(char *)((longlong)&pTVar3[1].Reference + 4) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'
    ::__l2::FParallelExecutor::LaunchTask(pTVar3,*(int *)&pTVar3[1].Reference,true);
  }
  pFVar4 = pTVar3->Reference;
  if (pFVar4 != (FParallelForData_conflict *)0x0) {
    pFVar1 = pFVar4 + 8;
    LOCK();
    iVar2 = *(int *)pFVar1;
    *(int *)pFVar1 = *(int *)pFVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (pFVar1 != (FParallelForData_conflict *)0x0)) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pTVar3);
  return;
}

// Destroy @ 14882eee0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'
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
                    /* WARNING: Could not recover jumptable at 0x00014882ef2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// IsHeapAllocated @ 148847f10

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 148847f20

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsSet @ 148848120

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 148848130

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// Move @ 14884b110

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::`2'::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::`2'::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::`2'::<lambda_1>_>'::`5'::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::`2'::FCompileElementsContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 14884b140

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>_>'::__l5::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::`2'::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::`2'::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::`2'::<lambda_1>_>'::`5'::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::`2'::FCompileElementsContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRenderAssetInstanceState::CompileElements'::`2'::<lambda_1>,`ParallelForWithTaskContext<`FRenderAssetInstanceState::CompileElements'::`2'::FCompileElementsContext,TSizedDefaultAllocator<32>,`FRenderAssetInstanceState::CompileElements'::`2'::<lambda_1>_>'::`5'::<lambda_1>,`FRenderAssetInstanceState::CompileElements'::`2'::FCompileElementsContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
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


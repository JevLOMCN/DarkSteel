// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 14

// Call @ 145da3770

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_1,false);
  }
  return (FTask *)0x0;
}

// Call @ 145da37a0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'
    ::__l2::FParallelExecutor::operator()(param_1,false);
  }
  return (FTask *)0x0;
}

// CallAndMove @ 145da37d0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_2,false);
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::`2'::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::`2'::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::`2'::<lambda_2>_>'::`5'::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::`2'::FTaskContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 145da3830

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
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
    ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'
    ::__l2::FParallelExecutor::operator()(param_2,false);
  }
  ScopeExitSupport::
  TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<_FRDGBuilder::CreatePassBarriers_::__l2::<lambda_2>,_ParallelForWithTaskContext<_FRDGBuilder::CreatePassBarriers_::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,_FRDGBuilder::CreatePassBarriers_::__l2::<lambda_2>_>_::__l5::<lambda_1>,_FRDGBuilder::CreatePassBarriers_::__l2::FTaskContext>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
            (&local_28);
  return (FTask *)0x0;
}

// DelegateSize @ 145dab220

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 145dab230

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// Destroy @ 145dab2e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>_&,int,int,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>_&,int,int,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
  *pTVar3;
  FParallelForData *pFVar4;
  
  pTVar3 = *(TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>_&,int,int,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>_&,int,int,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
             **)param_1;
  if ((pTVar3->Reference != (FParallelForData *)0x0) &&
     (*(char *)((longlong)&pTVar3[1].Reference + 4) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'
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

// Destroy @ 145dab340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'
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
                    /* WARNING: Could not recover jumptable at 0x000145dab38f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// IsHeapAllocated @ 145dc11d0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 145dc11e0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsSet @ 145dc14a0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 145dc14b0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// Move @ 145dc2510

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::`2'::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::`2'::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::`2'::<lambda_2>_>'::`5'::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::`2'::FTaskContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 145dc2540

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::`2'::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::`2'::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::`2'::<lambda_2>_>'::`5'::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::`2'::FTaskContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::`2'::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::`2'::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::`2'::<lambda_2>_>'::`5'::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::`2'::FTaskContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
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


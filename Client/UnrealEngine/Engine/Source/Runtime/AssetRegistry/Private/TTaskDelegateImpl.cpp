// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 42

// Call @ 142aec710

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::WaitOnDirectoriesAndUpdateWaitList'::__l30::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::
           Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::WaitOnDirectoriesAndUpdateWaitList'::__l30::<lambda_1>_>'::__l2::<lambda_1>_>'
           ::__l13::<lambda_1>::operator()(*(void **)param_1,param_2);
  return pFVar1;
}

// Call @ 142aec730

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::ScheduleDirectory'::__l22::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::
           Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::ScheduleDirectory'::__l22::<lambda_2>_>'::__l2::<lambda_1>_>'
           ::__l13::<lambda_1>::operator()(*(void **)param_1,param_2);
  return pFVar1;
}

// Call @ 142aec750

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_1,false);
  }
  return (FTask *)0x0;
}

// Call @ 142aec780

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'
    ::__l2::FParallelExecutor::operator()(param_1,false);
  }
  return (FTask *)0x0;
}

// Call @ 142aec7b0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_1,false);
  }
  return (FTask *)0x0;
}

// Call @ 142aec7e0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Call(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'
    ::__l2::FParallelExecutor::operator()(param_1,false);
  }
  return (FTask *)0x0;
}

// CallAndMove @ 142aec810

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::WaitOnDirectoriesAndUpdateWaitList'::__l30::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::
           Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::WaitOnDirectoriesAndUpdateWaitList'::__l30::<lambda_1>_>'::__l2::<lambda_1>_>'
           ::__l13::<lambda_1>::operator()(*(void **)param_2,param_4);
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::WaitOnDirectoriesAndUpdateWaitList'::`30'::<lambda_1>_>'::`2'::<lambda_1>_>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return pFVar1;
}

// CallAndMove @ 142aec870

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::ScheduleDirectory'::__l22::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  FTask *pFVar1;
  
  pFVar1 = `LowLevelTasks::FTask::
           Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::ScheduleDirectory'::__l22::<lambda_2>_>'::__l2::<lambda_1>_>'
           ::__l13::<lambda_1>::operator()(*(void **)param_2,param_4);
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::ScheduleDirectory'::`22'::<lambda_2>_>'::`2'::<lambda_1>_>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return pFVar1;
}

// CallAndMove @ 142aec8d0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_2,false);
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::`2'::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::`2'::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::`2'::<lambda_3>_>'::`5'::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 142aec930

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
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
    ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'
    ::__l2::FParallelExecutor::operator()(param_2,false);
  }
  ScopeExitSupport::
  TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<_FAssetRegistryState::GetMutableAssetsSortedByObjectPath_::__l2::<lambda_3>,_ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,_FAssetRegistryState::GetMutableAssetsSortedByObjectPath_::__l2::<lambda_2>,_FAssetRegistryState::GetMutableAssetsSortedByObjectPath_::__l2::<lambda_3>_>_::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
            (&local_28);
  return (FTask *)0x0;
}

// CallAndMove @ 142aec980

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::CallAndMove(void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
             void *param_2,uint param_3,bool param_4)

{
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_2,false);
  }
  param_1->CallableWrapper =
       (TTaskDelegateBase)
       &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::`21'::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::`21'::<lambda_7>_>'::`2'::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
        ::_vftable_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// CallAndMove @ 142aec9e0

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
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
    ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'
    ::__l2::FParallelExecutor::operator()(param_2,false);
  }
  ScopeExitSupport::
  TScopeGuard<`LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>::CallAndMove'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateImpl<_LowLevelTasks::FTask::Init<_ParallelForImpl::ParallelForInternal<_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal_::__l21::<lambda_7>,_ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal_::__l21::<lambda_7>_>_::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>_::__l2::FParallelExecutor>_::__l13::<lambda_1>,0>::CallAndMove_::__l2::<lambda_1>_>
            (&local_28);
  return (FTask *)0x0;
}

// DelegateSize @ 142aee3e0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::WaitOnDirectoriesAndUpdateWaitList'::__l30::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x40;
}

// DelegateSize @ 142aee3f0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::ScheduleDirectory'::__l22::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x40;
}

// DelegateSize @ 142aee400

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 142aee410

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 142aee420

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::DelegateSize(void *this)

{
  return 0x10;
}

// DelegateSize @ 142aee430

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::DelegateSize(void *this)

{
  return 0x10;
}

// Destroy @ 142aee5f0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::WaitOnDirectoriesAndUpdateWaitList'::__l30::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = *(void **)param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)pvVar3 + 0x38));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)pvVar3 + 0x28));
  puVar4 = *(undefined8 **)((longlong)pvVar3 + 0x10);
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)pvVar3 + 8));
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar3);
  return;
}

// Destroy @ 142aee650

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::ScheduleDirectory'::__l22::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = *(void **)param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)pvVar3 + 0x38));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)pvVar3 + 0x28));
  puVar4 = *(undefined8 **)((longlong)pvVar3 + 0x10);
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)pvVar3 + 8));
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pvVar3);
  return;
}

// Destroy @ 142aee6b0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_2>,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>_>(wchar_t_const_*,TArray<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>_>_&,int,int,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_2>_const_&,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>(wchar_t_const_*,int,int,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_2>,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>_>(wchar_t_const_*,TArray<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>_>_&,int,int,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_2>_const_&,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<UE::FLinearBlockAllocatorThreadAccessor,int>_const_&)_::_2_::FParallelForData>
  *pTVar3;
  FParallelForData *pFVar4;
  
  pTVar3 = *(TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_2>,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>_>(wchar_t_const_*,TArray<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>_>_&,int,int,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_2>_const_&,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>(wchar_t_const_*,int,int,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_2>,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>_>(wchar_t_const_*,TArray<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>_>_&,int,int,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_2>_const_&,_private:_class_TArray<FAssetData_*,TSizedDefaultAllocator<32>_>___cdecl_FAssetRegistryState::GetMutableAssetsSortedByObjectPath(void)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<UE::FLinearBlockAllocatorThreadAccessor,int>_const_&)_::_2_::FParallelForData>
             **)param_1;
  if ((pTVar3->Reference != (FParallelForData *)0x0) &&
     (*(char *)((longlong)&pTVar3[1].Reference + 4) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'
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

// Destroy @ 142aee710

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'
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
                    /* WARNING: Could not recover jumptable at 0x000142aee75f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// Destroy @ 142aee770

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Destroy(void *this,void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>,_void___cdecl_ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>_>(TArrayView<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,int>,int,int,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>_const_&,EParallelForFlags)_::_2_::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>(wchar_t_const_*,int,int,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>,_void___cdecl_ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>_>(TArrayView<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,int>,int,int,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,int>_const_&)_::_2_::FParallelForData>
  *pTVar3;
  FParallelForData *pFVar4;
  
  pTVar3 = *(TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>,_void___cdecl_ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>_>(TArrayView<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,int>,int,int,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>_const_&,EParallelForFlags)_::_2_::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>(wchar_t_const_*,int,int,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>,_void___cdecl_ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>_>(TArrayView<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,int>,int,int,_private:_void___cdecl_UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal(bool)_::_21_::<lambda_7>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,int>_const_&)_::_2_::FParallelForData>
             **)param_1;
  if ((pTVar3->Reference != (FParallelForData *)0x0) &&
     (*(char *)((longlong)&pTVar3[1].Reference + 4) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'
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

// Destroy @ 142aee7d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Destroy(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'
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
                    /* WARNING: Could not recover jumptable at 0x000142aee81f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// IsHeapAllocated @ 142b04920

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::WaitOnDirectoriesAndUpdateWaitList'::__l30::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 142b04930

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::ScheduleDirectory'::__l22::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 142b04940

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 142b04950

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsHeapAllocated @ 142b04960

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsHeapAllocated(void *this)

{
  return true;
}

// IsHeapAllocated @ 142b04970

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsHeapAllocated(void *this)

{
  return false;
}

// IsSet @ 142b056d0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::WaitOnDirectoriesAndUpdateWaitList'::__l30::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 142b056e0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::ScheduleDirectory'::__l22::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 142b056f0

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 142b05700

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 142b05710

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::IsSet(void *this)

{
  return true;
}

// IsSet @ 142b05720

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::IsSet(void *this)

{
  return true;
}

// Move @ 142b09a50

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::WaitOnDirectoriesAndUpdateWaitList'::__l30::<lambda_1>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::WaitOnDirectoriesAndUpdateWaitList'::`30'::<lambda_1>_>'::`2'::<lambda_1>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 142b09a80

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::ScheduleDirectory'::__l22::<lambda_2>_>'::__l2::<lambda_1>_>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`UE::Tasks::TaskConcurrencyLimiter_Private::FPimpl::Push<`UE::AssetDataGather::Private::FFileReadScheduler::ScheduleDirectory'::`22'::<lambda_2>_>'::`2'::<lambda_1>_>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 142b09ab0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::`2'::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::`2'::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::`2'::<lambda_3>_>'::`5'::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 142b09ae0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_3>_>'::__l5::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::`2'::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::`2'::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::`2'::<lambda_3>_>'::`5'::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::`2'::<lambda_3>,`ParallelForWithTaskContext<UE::FLinearBlockAllocatorThreadAccessor,TSizedDefaultAllocator<32>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::`2'::<lambda_2>,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::`2'::<lambda_3>_>'::`5'::<lambda_1>,UE::FLinearBlockAllocatorThreadAccessor>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
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

// Move @ 142b09ba0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,1>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::`21'::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::`21'::<lambda_7>_>'::`2'::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
              ::_vftable_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// Move @ 142b09bd0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::__l21::<lambda_7>_>'::__l2::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::__l2::FParallelExecutor>'::__l13::<lambda_1>,0>
::Move(void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)
               &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::`21'::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::`21'::<lambda_7>_>'::`2'::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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
             &TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::`21'::<lambda_7>,`ParallelForWithExistingTaskContext<UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer,`UE::AssetDataGather::Private::FAssetDataDiscovery::TickInternal'::`21'::<lambda_7>_>'::`2'::<lambda_1>,UE::AssetDataGather::Private::FAssetDataDiscovery::FDirToScanBuffer>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,1>
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


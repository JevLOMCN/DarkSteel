// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 8

// FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_><TraceServices::FAsyncEnumerateTaskData<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_&> @ 14d406d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
* __thiscall
FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
::
FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_><TraceServices::FAsyncEnumerateTaskData<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_&>
          (FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
           *this,FAsyncEnumerateTaskData<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FName *pFVar3;
  TStatIdData *pTVar4;
  undefined8 *puVar5;
  FName local_res8;
  
  *(undefined2 *)&this->_padding_ = 3;
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__FAsyncTask_V__FEnumerateAsyncTask_UFLoadTimeProfilerCpuEvent_TraceServices__UFMonotonicTimelineDefaultSettings_2__TraceServices____6B_
  ;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = -1;
  this->_padding_ = 0;
  (this->Task).Data.TaskIndex = param_1->TaskIndex;
  (this->Task).Data.NumTasks = param_1->NumTasks;
  (this->Task).Data.StartPageIndex = param_1->StartPageIndex;
  (this->Task).Data.EndPageIndex = param_1->EndPageIndex;
  (this->Task).Data.StartTime = param_1->StartTime;
  (this->Task).Data.EndTime = param_1->EndTime;
  (this->Task).Data.SortOrder = param_1->SortOrder;
  (this->Task).Data.DetailLevel = param_1->DetailLevel;
  lVar1 = *(longlong *)&param_1->EventRangeCallback;
  *(undefined8 *)&(this->Task).Data.EventRangeCallback.field_0x28 = 0;
  *(longlong *)&(this->Task).Data.EventRangeCallback = lVar1;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->EventRangeCallback).field_0x28;
    puVar5 = (undefined8 *)&(param_1->EventRangeCallback).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar5 = puVar2;
    }
    (**(code **)*puVar5)();
  }
  lVar1 = *(longlong *)&param_1->EventCallback;
  *(longlong *)&(this->Task).Data.EventCallback = lVar1;
  *(undefined8 *)&(this->Task).Data.EventCallback.field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->EventCallback).field_0x28;
    puVar5 = (undefined8 *)&(param_1->EventCallback).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar5 = puVar2;
    }
    (**(code **)*puVar5)();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId'::__l2::FStat_EnumerateAsyncTask>
      ::
      FThreadSafeStaticStat<_TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId_::__l2::FStat_EnumerateAsyncTask>
                (&`public:_struct_TStatId___cdecl_TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_EnumerateAsyncTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar4 = _StatPtr_EnumerateAsyncTask;
  if (_StatPtr_EnumerateAsyncTask == (TStatIdData *)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"EnumerateAsyncTask");
    pTVar4 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_EnumerateAsyncTask,*pFVar3,L"EnumerateAsyncTask",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  this->_padding_ = (longlong)pTVar4;
  return this;
}

// FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_><TraceServices::FAsyncEnumerateTaskData<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_&> @ 14d406f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
* __thiscall
FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
::
FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_><TraceServices::FAsyncEnumerateTaskData<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_&>
          (FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
           *this,FAsyncEnumerateTaskData<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  FName *pFVar3;
  TStatIdData *pTVar4;
  undefined8 *puVar5;
  FName local_res8;
  
  *(undefined2 *)&this->_padding_ = 3;
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__FAsyncTask_V__FEnumerateAsyncTask_UFTimingProfilerEvent_TraceServices__UFMonotonicTimelineDefaultSettings_2__TraceServices____6B_
  ;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = -1;
  this->_padding_ = 0;
  (this->Task).Data.TaskIndex = param_1->TaskIndex;
  (this->Task).Data.NumTasks = param_1->NumTasks;
  (this->Task).Data.StartPageIndex = param_1->StartPageIndex;
  (this->Task).Data.EndPageIndex = param_1->EndPageIndex;
  (this->Task).Data.StartTime = param_1->StartTime;
  (this->Task).Data.EndTime = param_1->EndTime;
  (this->Task).Data.SortOrder = param_1->SortOrder;
  (this->Task).Data.DetailLevel = param_1->DetailLevel;
  lVar1 = *(longlong *)&param_1->EventRangeCallback;
  *(undefined8 *)&(this->Task).Data.EventRangeCallback.field_0x28 = 0;
  *(longlong *)&(this->Task).Data.EventRangeCallback = lVar1;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->EventRangeCallback).field_0x28;
    puVar5 = (undefined8 *)&(param_1->EventRangeCallback).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar5 = puVar2;
    }
    (**(code **)*puVar5)();
  }
  lVar1 = *(longlong *)&param_1->EventCallback;
  *(longlong *)&(this->Task).Data.EventCallback = lVar1;
  *(undefined8 *)&(this->Task).Data.EventCallback.field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->EventCallback).field_0x28;
    puVar5 = (undefined8 *)&(param_1->EventCallback).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar5 = puVar2;
    }
    (**(code **)*puVar5)();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId'::__l2::FStat_EnumerateAsyncTask>
      ::
      FThreadSafeStaticStat<_TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId_::__l2::FStat_EnumerateAsyncTask>
                (&`public:_struct_TStatId___cdecl_TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_EnumerateAsyncTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar4 = _StatPtr_EnumerateAsyncTask;
  if (_StatPtr_EnumerateAsyncTask == (TStatIdData *)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"EnumerateAsyncTask");
    pTVar4 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_EnumerateAsyncTask,*pFVar3,L"EnumerateAsyncTask",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  this->_padding_ = (longlong)pTVar4;
  return this;
}

// DoTaskWork @ 14d44fe20

void __thiscall
FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
::DoTaskWork(FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
             *this)

{
  EEventSortOrder EVar1;
  undefined1 local_res8 [8];
  FAsyncEnumerateTaskData<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *local_res10 [3];
  code *local_28;
  FAsyncEnumerateTaskData<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  **local_20;
  code *local_18;
  undefined1 *local_10;
  
  local_res10[0] = &(this->Task).Data;
  if (*(longlong *)&(this->Task).Data.EventRangeCallback == 0) {
    local_20 = local_res10;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::DoWork'::__l14::<lambda_2>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
               ::Call;
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::DoWork'::__l14::<lambda_1>,void,int>
               ::Call;
    TraceServices::
    EnumerateAsyncAlgoritm<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
    ::EnumerateEventsDownSampled
              (local_res10[0],(TFunctionRef<void___cdecl(int)> *)&local_18,
               (TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&)>
                *)&local_28);
  }
  else {
    EVar1 = (this->Task).Data.SortOrder;
    if (EVar1 == ByEndTime) {
      TraceServices::
      FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
      ::EnumerateOrderedByEndTime
                ((FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                  *)local_res10[0]);
      return;
    }
    if (EVar1 == ByStartTime) {
      TraceServices::
      FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
      ::EnumerateOrderedByStartTime
                ((FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                  *)local_res10[0]);
      return;
    }
  }
  return;
}

// DoTaskWork @ 14d44fea0

void __thiscall
FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
::DoTaskWork(FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
             *this)

{
  EEventSortOrder EVar1;
  undefined1 local_res8 [8];
  FAsyncEnumerateTaskData<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *local_res10 [3];
  code *local_28;
  FAsyncEnumerateTaskData<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  **local_20;
  code *local_18;
  undefined1 *local_10;
  
  local_res10[0] = &(this->Task).Data;
  if (*(longlong *)&(this->Task).Data.EventRangeCallback == 0) {
    local_20 = local_res10;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::DoWork'::__l14::<lambda_2>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
               ::Call;
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::DoWork'::__l14::<lambda_1>,void,int>
               ::Call;
    TraceServices::
    EnumerateAsyncAlgoritm<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
    ::EnumerateEventsDownSampled
              (local_res10[0],(TFunctionRef<void___cdecl(int)> *)&local_18,
               (TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FTimingProfilerEvent_const_&)>
                *)&local_28);
  }
  else {
    EVar1 = (this->Task).Data.SortOrder;
    if (EVar1 == ByEndTime) {
      TraceServices::
      FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
      ::EnumerateOrderedByEndTime
                ((FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                  *)local_res10[0]);
      return;
    }
    if (EVar1 == ByStartTime) {
      TraceServices::
      FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
      ::EnumerateOrderedByStartTime
                ((FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                  *)local_res10[0]);
      return;
    }
  }
  return;
}

// MarkAsCanceled @ 14d479170

void __thiscall
FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
::MarkAsCanceled(FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
                 *this)

{
  return;
}

// MarkAsCanceled @ 14d479180

void __thiscall
FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
::MarkAsCanceled(FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
                 *this)

{
  return;
}

// TryAbandonTask @ 14d48d630

bool __thiscall
FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
::TryAbandonTask(FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
                 *this)

{
  return false;
}

// TryAbandonTask @ 14d48d640

bool __thiscall
FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
::TryAbandonTask(FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
                 *this)

{
  return false;
}


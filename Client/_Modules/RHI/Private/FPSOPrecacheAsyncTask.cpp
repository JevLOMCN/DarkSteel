// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 4

// FPSOPrecacheAsyncTask @ 145c86250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FPSOPrecacheAsyncTask * __thiscall
FPSOPrecacheAsyncTask::FPSOPrecacheAsyncTask
          (FPSOPrecacheAsyncTask *this,
          TUniqueFunction<void___cdecl(FPSOPrecacheAsyncTask_const_*)> *param_1)

{
  undefined8 uVar1;
  FName *pFVar2;
  TStatIdData *pTVar3;
  longlong *plVar4;
  undefined1 auStackY_78 [32];
  FName local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  *(undefined2 *)&this->_padding_ = 3;
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPSOPrecacheAsyncTask__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = -1;
  this->_padding_ = 0;
  *(undefined8 *)&this->AsyncTaskFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->AsyncTaskFunc).field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->AsyncTaskFunc).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->AsyncTaskFunc).field_0x18 = uVar1;
  *(undefined8 *)&(this->AsyncTaskFunc).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)&this->AsyncTaskFunc != 0) {
    *(undefined8 *)param_1 = 0;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_TStatId___cdecl_FPSOPrecacheAsyncTask::GetStatId(void)const___ptr64'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_FPSOPrecacheAsyncTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_FPSOPrecacheAsyncTask::GetStatId(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`FPSOPrecacheAsyncTask::GetStatId'::__l2::FStat_FPSOPrecacheAsyncTask>::
      FThreadSafeStaticStat<_FPSOPrecacheAsyncTask::GetStatId_::__l2::FStat_FPSOPrecacheAsyncTask>
                (&`public:_struct_TStatId___cdecl_FPSOPrecacheAsyncTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FPSOPrecacheAsyncTask);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_FPSOPrecacheAsyncTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar3 = _StatPtr_FPSOPrecacheAsyncTask;
  if (_StatPtr_FPSOPrecacheAsyncTask == (TStatIdData *)0x0) {
    pFVar2 = ::FName::FName(&local_18,"FPSOPrecacheAsyncTask");
    pTVar3 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FPSOPrecacheAsyncTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FPSOPrecacheAsyncTask,*pFVar2,L"FPSOPrecacheAsyncTask",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  this->_padding_ = (longlong)pTVar3;
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return this;
}

// DoTaskWork @ 145c9b540

void __thiscall FPSOPrecacheAsyncTask::DoTaskWork(FPSOPrecacheAsyncTask *this)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  FPSOPrecacheAsyncTask *local_res8;
  
  local_res8 = this;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->AsyncTaskFunc);
  pcVar1 = *(code **)&this->AsyncTaskFunc;
  plVar2 = *(longlong **)&(this->AsyncTaskFunc).field_0x28;
  plVar4 = (longlong *)&(this->AsyncTaskFunc).field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar4 = plVar2;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,&local_res8);
  return;
}

// Reschedule @ 145cbda00

bool __thiscall
FPSOPrecacheAsyncTask::Reschedule
          (FPSOPrecacheAsyncTask *this,FQueuedThreadPool *param_1,EQueuedWorkPriority param_2)

{
  longlong *plVar1;
  char cVar2;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,this);
    if (cVar2 != '\0') {
      this->_padding_ = (longlong)param_1;
      *(EQueuedWorkPriority *)&this->_padding_ = param_2;
      (**(code **)((longlong)*param_1 + 0x18))(param_1,this,param_2);
      return true;
    }
  }
  return false;
}

// TryAbandonTask @ 145cc6010

bool __thiscall FPSOPrecacheAsyncTask::TryAbandonTask(FPSOPrecacheAsyncTask *this)

{
  return false;
}


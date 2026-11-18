// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 22

// _Destroy_range<std::allocator<vraudio::TaskThreadPool::WorkerThread>_> @ 14f099a00

void __cdecl
std::_Destroy_range<std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
          (WorkerThread *param_1,WorkerThread *param_2,
          allocator<vraudio::TaskThreadPool::WorkerThread> *param_3)

{
  WorkerThread *pWVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    plVar3 = (longlong *)&(param_1->task_closure_).field_0x38;
    do {
      iVar2 = _Mtx_lock(plVar3 + -0x11);
      if (iVar2 != 0) {
LAB_14f099af6:
        _Throw_Cpp_error(5);
        return;
      }
      if (*(int *)((longlong)plVar3 + -0x3c) == 0x7fffffff) {
        *(undefined4 *)((longlong)plVar3 + -0x3c) = 0x7ffffffe;
        _Throw_Cpp_error(6);
        return;
      }
      _Mtx_unlock(plVar3 + -0x11);
      _Cnd_signal(plVar3 + -0x1a);
      if ((int)plVar3[3] != 0) {
        iVar2 = _Thrd_id();
        if ((int)plVar3[3] == iVar2) goto LAB_14f099af6;
        local_18 = (undefined4)plVar3[2];
        uStack_14 = *(undefined4 *)((longlong)plVar3 + 0x14);
        uStack_10 = (undefined4)plVar3[3];
        uStack_c = *(undefined4 *)((longlong)plVar3 + 0x1c);
        iVar2 = _Thrd_join(&local_18,0);
        if (iVar2 != 0) {
          _Throw_Cpp_error(2);
          return;
        }
        plVar3[2] = 0;
        plVar3[3] = 0;
        if ((int)plVar3[3] != 0) {
                    /* WARNING: Subroutine does not return */
          terminate();
        }
      }
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x20))();
        *plVar3 = 0;
      }
      pWVar1 = (WorkerThread *)(plVar3 + 4);
      plVar3 = plVar3 + 0x1f;
    } while (pWVar1 != param_2);
  }
  return;
}

// _Invoke<std::tuple<std::_Binder<std::_Unforced,void_(__cdecl_vraudio::TaskThreadPool::WorkerThread::*)(void),vraudio::TaskThreadPool::WorkerThread_*>_>,0> @ 14f099b20

uint __cdecl
std::thread::
_Invoke<std::tuple<std::_Binder<std::_Unforced,void_(__cdecl_vraudio::TaskThreadPool::WorkerThread::*)(void),vraudio::TaskThreadPool::WorkerThread_*>_>,0>
          (void *param_1)

{
  (**(code **)param_1)(*(undefined8 *)((longlong)param_1 + 8));
  _Cnd_do_broadcast_at_thread_exit();
  ::operator_delete(param_1,0x10);
  return 0;
}

// _Resize_reallocate<std::_Value_init_tag> @ 14f099b60

void __thiscall
std::
vector<vraudio::TaskThreadPool::WorkerThread,std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
::_Resize_reallocate<std::_Value_init_tag>
          (vector<vraudio::TaskThreadPool::WorkerThread,std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
           *this,ulong64 param_1,_Value_init_tag *param_2)

{
  WorkerThread *pWVar1;
  ulonglong uVar2;
  WorkerThread *pWVar3;
  longlong lVar4;
  longlong lVar5;
  WorkerThread *pWVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  WorkerThread *pWVar9;
  
  if (0x108421084210842 < param_1) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  lVar4 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)(this->_Mypair)._Myval2._Myfirst;
  lVar4 = lVar4 + SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816(lVar4),8);
  lVar5 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)(this->_Mypair)._Myval2._Myfirst;
  lVar4 = (lVar4 >> 7) - (lVar4 >> 0x3f);
  lVar5 = SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816(lVar5),8) + lVar5;
  uVar7 = (lVar5 >> 7) - (lVar5 >> 0x3f);
  if (0x108421084210842 - (uVar7 >> 1) < uVar7) {
    uVar2 = 0x108421084210842;
  }
  else {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar2 = param_1;
    if ((param_1 <= uVar7) && (uVar2 = uVar7, 0x108421084210842 < uVar7)) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  pWVar3 = _Allocate<16,std::_Default_allocate_traits>(uVar2 * 0xf8);
  _Uninitialized_value_construct_n<std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
            (pWVar3 + lVar4,param_1 - lVar4,(allocator<vraudio::TaskThreadPool::WorkerThread> *)this
            );
  pWVar1 = (this->_Mypair)._Myval2._Mylast;
  pWVar6 = pWVar3;
  for (pWVar9 = (this->_Mypair)._Myval2._Myfirst; pWVar9 != pWVar1; pWVar9 = pWVar9 + 1) {
    pWVar6->parent_pool_ = (TaskThreadPool *)0x0;
    (pWVar6->execute_task_condition_)._Cnd_storage.field0_0x0._Stl_cv._Unused = (void *)0x0;
    (pWVar6->execute_task_condition_)._Cnd_storage.field0_0x0._Stl_cv._Win_cv = (void *)0x0;
    *(undefined8 *)((longlong)&(pWVar6->execute_task_condition_)._Cnd_storage.field0_0x0 + 0x10) = 0
    ;
    *(undefined8 *)((longlong)&(pWVar6->execute_task_condition_)._Cnd_storage.field0_0x0 + 0x18) = 0
    ;
    *(undefined8 *)((longlong)&(pWVar6->execute_task_condition_)._Cnd_storage.field0_0x0 + 0x20) = 0
    ;
    *(undefined8 *)((longlong)&(pWVar6->execute_task_condition_)._Cnd_storage.field0_0x0 + 0x28) = 0
    ;
    *(undefined8 *)((longlong)&(pWVar6->execute_task_condition_)._Cnd_storage.field0_0x0 + 0x30) = 0
    ;
    *(undefined8 *)((longlong)&(pWVar6->execute_task_condition_)._Cnd_storage.field0_0x0 + 0x38) = 0
    ;
    *(undefined8 *)((longlong)&(pWVar6->execute_task_condition_)._Cnd_storage.field0_0x0 + 0x40) = 0
    ;
    *(undefined8 *)&(pWVar6->execute_task_mutex_).field_0x18 = 0;
    *(undefined8 *)&(pWVar6->execute_task_mutex_).field_0x20 = 0;
    *(undefined8 *)&(pWVar6->execute_task_mutex_).field_0x28 = 0;
    *(undefined8 *)&(pWVar6->execute_task_mutex_).field_0x30 = 0;
    *(undefined8 *)&(pWVar6->execute_task_mutex_).field_0x38 = 0;
    *(undefined8 *)&(pWVar6->execute_task_mutex_).field_0x40 = 0;
    *(undefined8 *)&(pWVar6->execute_task_mutex_).field_0x8 = 0;
    *(undefined8 *)&(pWVar6->execute_task_mutex_).field_0x10 = 0;
    *(undefined4 *)&(pWVar6->execute_task_mutex_).field_0x48 = 0xffffffff;
    *(undefined4 *)&pWVar6->execute_task_mutex_ = 2;
    *(undefined4 *)&(pWVar6->execute_task_mutex_).field_0x4c = 0;
    *(undefined8 *)&(pWVar6->task_closure_).field_0x38 = 0;
    pWVar6->task_loop_triggered_ = (atomic<bool>)0x0;
    (pWVar6->task_thread_)._Thr._Hnd = (void *)0x0;
    *(undefined8 *)&(pWVar6->task_thread_)._Thr._Id = 0;
    pWVar6 = pWVar6 + 1;
  }
  _Destroy_range<std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
            (pWVar6,pWVar6,(allocator<vraudio::TaskThreadPool::WorkerThread> *)this);
  pWVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pWVar1 != (WorkerThread *)0x0) {
    _Destroy_range<std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
              (pWVar1,(this->_Mypair)._Myval2._Mylast,
               (allocator<vraudio::TaskThreadPool::WorkerThread> *)this);
    pWVar1 = (this->_Mypair)._Myval2._Myfirst;
    lVar4 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pWVar1;
    lVar4 = SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816(lVar4),8) + lVar4;
    uVar8 = ((lVar4 >> 7) - (lVar4 >> 0x3f)) * 0xf8;
    pWVar9 = pWVar1;
    if (0xfff < uVar8) {
      pWVar9 = *(WorkerThread **)&pWVar1[-1].task_thread_._Thr._Id;
      uVar8 = uVar8 + 0x27;
      if (0x1f < (ulonglong)((longlong)pWVar1 + (-8 - (longlong)pWVar9))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pWVar9,uVar8);
  }
  (this->_Mypair)._Myval2._Myfirst = pWVar3;
  (this->_Mypair)._Myval2._Mylast = pWVar3 + param_1;
  (this->_Mypair)._Myval2._Myend = pWVar3 + uVar2;
  return;
}

// _Uninitialized_value_construct_n<std::allocator<vraudio::TaskThreadPool::WorkerThread>_> @ 14f099d90

WorkerThread * __cdecl
std::_Uninitialized_value_construct_n<std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
          (WorkerThread *param_1,ulong64 param_2,
          allocator<vraudio::TaskThreadPool::WorkerThread> *param_3)

{
  for (; param_2 != 0; param_2 = param_2 - 1) {
    param_1->parent_pool_ = (TaskThreadPool *)0x0;
    (param_1->execute_task_condition_)._Cnd_storage.field0_0x0._Stl_cv._Unused = (void *)0x0;
    (param_1->execute_task_condition_)._Cnd_storage.field0_0x0._Stl_cv._Win_cv = (void *)0x0;
    *(undefined8 *)((longlong)&(param_1->execute_task_condition_)._Cnd_storage.field0_0x0 + 0x10) =
         0;
    *(undefined8 *)((longlong)&(param_1->execute_task_condition_)._Cnd_storage.field0_0x0 + 0x18) =
         0;
    *(undefined8 *)((longlong)&(param_1->execute_task_condition_)._Cnd_storage.field0_0x0 + 0x20) =
         0;
    *(undefined8 *)((longlong)&(param_1->execute_task_condition_)._Cnd_storage.field0_0x0 + 0x28) =
         0;
    *(undefined8 *)((longlong)&(param_1->execute_task_condition_)._Cnd_storage.field0_0x0 + 0x30) =
         0;
    *(undefined8 *)((longlong)&(param_1->execute_task_condition_)._Cnd_storage.field0_0x0 + 0x38) =
         0;
    *(undefined8 *)((longlong)&(param_1->execute_task_condition_)._Cnd_storage.field0_0x0 + 0x40) =
         0;
    *(undefined8 *)&(param_1->execute_task_mutex_).field_0x18 = 0;
    *(undefined8 *)&(param_1->execute_task_mutex_).field_0x20 = 0;
    *(undefined8 *)&(param_1->execute_task_mutex_).field_0x28 = 0;
    *(undefined8 *)&(param_1->execute_task_mutex_).field_0x30 = 0;
    *(undefined8 *)&(param_1->execute_task_mutex_).field_0x38 = 0;
    *(undefined8 *)&(param_1->execute_task_mutex_).field_0x40 = 0;
    *(undefined8 *)&(param_1->execute_task_mutex_).field_0x8 = 0;
    *(undefined8 *)&(param_1->execute_task_mutex_).field_0x10 = 0;
    *(undefined4 *)&(param_1->execute_task_mutex_).field_0x48 = 0xffffffff;
    *(undefined4 *)&param_1->execute_task_mutex_ = 2;
    *(undefined4 *)&(param_1->execute_task_mutex_).field_0x4c = 0;
    *(undefined8 *)&(param_1->task_closure_).field_0x38 = 0;
    param_1->task_loop_triggered_ = (atomic<bool>)0x0;
    (param_1->task_thread_)._Thr._Hnd = (void *)0x0;
    *(undefined8 *)&(param_1->task_thread_)._Thr._Id = 0;
    param_1 = param_1 + 1;
  }
  _Destroy_range<std::allocator<vraudio::TaskThreadPool::WorkerThread>_>(param_1,param_1,param_3);
  return param_1;
}

// TaskThreadPool @ 14f099e30

TaskThreadPool * __thiscall vraudio::TaskThreadPool::TaskThreadPool(TaskThreadPool *this)

{
  this->num_worker_threads_available_ = (atomic<int>)0x0;
  this->is_pool_running_ = (atomic<bool>)0x0;
  (this->worker_threads_)._Mypair._Myval2._Myfirst = (WorkerThread *)0x0;
  (this->worker_threads_)._Mypair._Myval2._Mylast = (WorkerThread *)0x0;
  (this->worker_threads_)._Mypair._Myval2._Myend = (WorkerThread *)0x0;
  (this->worker_available_condition_)._Cnd_storage.field0_0x0._Stl_cv._Unused = (void *)0x0;
  (this->worker_available_condition_)._Cnd_storage.field0_0x0._Stl_cv._Win_cv = (void *)0x0;
  *(undefined8 *)((longlong)&(this->worker_available_condition_)._Cnd_storage.field0_0x0 + 0x10) = 0
  ;
  *(undefined8 *)((longlong)&(this->worker_available_condition_)._Cnd_storage.field0_0x0 + 0x18) = 0
  ;
  *(undefined8 *)((longlong)&(this->worker_available_condition_)._Cnd_storage.field0_0x0 + 0x20) = 0
  ;
  *(undefined8 *)((longlong)&(this->worker_available_condition_)._Cnd_storage.field0_0x0 + 0x28) = 0
  ;
  *(undefined8 *)((longlong)&(this->worker_available_condition_)._Cnd_storage.field0_0x0 + 0x30) = 0
  ;
  *(undefined8 *)((longlong)&(this->worker_available_condition_)._Cnd_storage.field0_0x0 + 0x38) = 0
  ;
  *(undefined8 *)((longlong)&(this->worker_available_condition_)._Cnd_storage.field0_0x0 + 0x40) = 0
  ;
  *(undefined8 *)&(this->worker_available_mutex_).field_0x18 = 0;
  *(undefined8 *)&(this->worker_available_mutex_).field_0x20 = 0;
  *(undefined8 *)&(this->worker_available_mutex_).field_0x28 = 0;
  *(undefined8 *)&(this->worker_available_mutex_).field_0x30 = 0;
  *(undefined8 *)&(this->worker_available_mutex_).field_0x38 = 0;
  *(undefined8 *)&(this->worker_available_mutex_).field_0x40 = 0;
  *(undefined8 *)&(this->worker_available_mutex_).field_0x8 = 0;
  *(undefined8 *)&(this->worker_available_mutex_).field_0x10 = 0;
  *(undefined4 *)&(this->worker_available_mutex_).field_0x48 = 0xffffffff;
  *(undefined4 *)&this->worker_available_mutex_ = 2;
  *(undefined4 *)&(this->worker_available_mutex_).field_0x4c = 0;
  return this;
}

// ~vector<vraudio::TaskThreadPool::WorkerThread,std::allocator<vraudio::TaskThreadPool::WorkerThread>_> @ 14f099ea0

void __thiscall
std::
vector<vraudio::TaskThreadPool::WorkerThread,std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
::
~vector<vraudio::TaskThreadPool::WorkerThread,std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
          (vector<vraudio::TaskThreadPool::WorkerThread,std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
           *this)

{
  WorkerThread *pWVar1;
  longlong lVar2;
  ulong64 uVar3;
  WorkerThread *pWVar4;
  
  pWVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pWVar1 != (WorkerThread *)0x0) {
    _Destroy_range<std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
              (pWVar1,(this->_Mypair)._Myval2._Mylast,
               (allocator<vraudio::TaskThreadPool::WorkerThread> *)this);
    pWVar1 = (this->_Mypair)._Myval2._Myfirst;
    lVar2 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pWVar1;
    lVar2 = SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816(lVar2),8) + lVar2;
    uVar3 = ((lVar2 >> 7) - (lVar2 >> 0x3f)) * 0xf8;
    pWVar4 = pWVar1;
    if (0xfff < uVar3) {
      pWVar4 = *(WorkerThread **)&pWVar1[-1].task_thread_._Thr._Id;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pWVar1 + (-8 - (longlong)pWVar4))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pWVar4,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (WorkerThread *)0x0;
    (this->_Mypair)._Myval2._Mylast = (WorkerThread *)0x0;
    (this->_Mypair)._Myval2._Myend = (WorkerThread *)0x0;
  }
  return;
}

// ~TaskThreadPool @ 14f099f50

void __thiscall vraudio::TaskThreadPool::~TaskThreadPool(TaskThreadPool *this)

{
  StopThreadPool(this);
  std::
  vector<vraudio::TaskThreadPool::WorkerThread,std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
  ::
  ~vector<vraudio::TaskThreadPool::WorkerThread,std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
            (&this->worker_threads_);
  return;
}

// ~WorkerThread @ 14f099f80

void __thiscall vraudio::TaskThreadPool::WorkerThread::~WorkerThread(WorkerThread *this)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  iVar2 = _Mtx_lock(&this->execute_task_mutex_);
  if (iVar2 == 0) {
    if (*(int *)&(this->execute_task_mutex_).field_0x4c == 0x7fffffff) {
      *(undefined4 *)&(this->execute_task_mutex_).field_0x4c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      return;
    }
    _Mtx_unlock(&this->execute_task_mutex_);
    _Cnd_signal(&this->execute_task_condition_);
    if ((this->task_thread_)._Thr._Id != 0) {
      uVar3 = _Thrd_id();
      if ((this->task_thread_)._Thr._Id == uVar3) goto LAB_14f09a039;
      local_18 = *(undefined4 *)&(this->task_thread_)._Thr._Hnd;
      uStack_14 = *(undefined4 *)((longlong)&(this->task_thread_)._Thr._Hnd + 4);
      uStack_10 = (this->task_thread_)._Thr._Id;
      uStack_c = *(undefined4 *)&(this->task_thread_)._Thr.field_0xc;
      iVar2 = _Thrd_join(&local_18,0);
      if (iVar2 != 0) {
        std::_Throw_Cpp_error(2);
        return;
      }
      (this->task_thread_)._Thr._Hnd = (void *)0x0;
      *(undefined8 *)&(this->task_thread_)._Thr._Id = 0;
      if ((this->task_thread_)._Thr._Id != 0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
    }
    plVar1 = *(longlong **)&(this->task_closure_).field_0x38;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))
                (plVar1,(function<void___cdecl(void)> *)plVar1 != &this->task_closure_);
      *(undefined8 *)&(this->task_closure_).field_0x38 = 0;
    }
    return;
  }
LAB_14f09a039:
  std::_Throw_Cpp_error(5);
  return;
}

// GetAvailableTaskThreadCount @ 14f09a070

ulong64 __thiscall vraudio::TaskThreadPool::GetAvailableTaskThreadCount(TaskThreadPool *this)

{
  return (longlong)(int)this->num_worker_threads_available_;
}

// IsAvailable @ 14f09a080

bool __thiscall vraudio::TaskThreadPool::WorkerThread::IsAvailable(WorkerThread *this)

{
  return this->task_loop_triggered_ == (atomic<bool>)0x0;
}

// IsPoolRunning @ 14f09a0a0

bool __thiscall vraudio::TaskThreadPool::IsPoolRunning(TaskThreadPool *this)

{
  return (bool)this->is_pool_running_;
}

// Join @ 14f09a0b0

void __thiscall vraudio::TaskThreadPool::WorkerThread::Join(WorkerThread *this)

{
  int iVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  iVar1 = _Mtx_lock(&this->execute_task_mutex_);
  if (iVar1 == 0) {
    if (*(int *)&(this->execute_task_mutex_).field_0x4c == 0x7fffffff) {
      *(undefined4 *)&(this->execute_task_mutex_).field_0x4c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      return;
    }
    _Mtx_unlock(&this->execute_task_mutex_);
    _Cnd_signal(&this->execute_task_condition_);
    if ((this->task_thread_)._Thr._Id != 0) {
      uVar2 = _Thrd_id();
      if ((this->task_thread_)._Thr._Id == uVar2) goto LAB_14f09a13a;
      local_18 = *(undefined4 *)&(this->task_thread_)._Thr._Hnd;
      uStack_14 = *(undefined4 *)((longlong)&(this->task_thread_)._Thr._Hnd + 4);
      uStack_10 = (this->task_thread_)._Thr._Id;
      uStack_c = *(undefined4 *)&(this->task_thread_)._Thr.field_0xc;
      iVar1 = _Thrd_join(&local_18,0);
      if (iVar1 != 0) {
        std::_Throw_Cpp_error(2);
        return;
      }
      (this->task_thread_)._Thr._Hnd = (void *)0x0;
      *(undefined8 *)&(this->task_thread_)._Thr._Id = 0;
    }
    return;
  }
LAB_14f09a13a:
  std::_Throw_Cpp_error(5);
  return;
}

// Run @ 14f09a160

void __thiscall
vraudio::TaskThreadPool::WorkerThread::Run(WorkerThread *this,function<void___cdecl(void)> *param_1)

{
  longlong *plVar1;
  function<void___cdecl(void)> *pfVar2;
  int iVar3;
  
  if (*(longlong *)&param_1->field_0x38 != 0) {
    pfVar2 = &this->task_closure_;
    if (pfVar2 != param_1) {
      plVar1 = *(longlong **)&(this->task_closure_).field_0x38;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,(function<void___cdecl(void)> *)plVar1 != pfVar2);
        *(undefined8 *)&(this->task_closure_).field_0x38 = 0;
      }
      std::_Func_class<void>::_Reset_move((_Func_class<void> *)pfVar2,(_Func_class<void> *)param_1);
    }
    iVar3 = _Mtx_lock(&this->execute_task_mutex_);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      return;
    }
    if (*(int *)&(this->execute_task_mutex_).field_0x4c == 0x7fffffff) {
      *(undefined4 *)&(this->execute_task_mutex_).field_0x4c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      return;
    }
    LOCK();
    this->task_loop_triggered_ = (atomic<bool>)0x1;
    UNLOCK();
    _Mtx_unlock(&this->execute_task_mutex_);
    _Cnd_signal(&this->execute_task_condition_);
  }
  pfVar2 = *(function<void___cdecl(void)> **)&param_1->field_0x38;
  if (pfVar2 != (function<void___cdecl(void)> *)0x0) {
    (**(code **)(*(longlong *)pfVar2 + 0x20))(pfVar2,pfVar2 != param_1);
    *(undefined8 *)&param_1->field_0x38 = 0;
  }
  return;
}

// RunOnWorkerThread @ 14f09a240

bool __thiscall
vraudio::TaskThreadPool::RunOnWorkerThread
          (TaskThreadPool *this,function<void___cdecl(void)> *param_1)

{
  undefined8 uVar1;
  function<void___cdecl(void)> *pfVar2;
  longlong *plVar3;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  undefined1 extraout_AL_01;
  undefined1 extraout_AL_02;
  int iVar4;
  WorkerThread *pWVar5;
  WorkerThread *pWVar6;
  _Func_class<void> local_58;
  
  if ((this->is_pool_running_ == (atomic<bool>)0x0) ||
     (this->num_worker_threads_available_ == (atomic<int>)0x0)) {
    pfVar2 = *(function<void___cdecl(void)> **)&param_1->field_0x38;
    if (pfVar2 != (function<void___cdecl(void)> *)0x0) {
      (**(code **)(*(longlong *)pfVar2 + 0x20))(pfVar2,pfVar2 != param_1);
      *(undefined8 *)&param_1->field_0x38 = 0;
    }
    return false;
  }
  for (pWVar5 = (this->worker_threads_)._Mypair._Myval2._Myfirst;
      (pWVar6 = (WorkerThread *)0x0, pWVar5 != (this->worker_threads_)._Mypair._Myval2._Mylast &&
      (pWVar6 = pWVar5, pWVar5->task_loop_triggered_ != (atomic<bool>)0x0)); pWVar5 = pWVar5 + 1) {
  }
  iVar4 = _Mtx_lock(&this->worker_available_mutex_);
  if (iVar4 != 0) {
    std::_Throw_Cpp_error(5);
    return (bool)extraout_AL_00;
  }
  if (*(int *)&(this->worker_available_mutex_).field_0x4c == 0x7fffffff) {
    *(undefined4 *)&(this->worker_available_mutex_).field_0x4c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
    return (bool)extraout_AL_01;
  }
  LOCK();
  this->num_worker_threads_available_ = (atomic<int>)((int)this->num_worker_threads_available_ + -1)
  ;
  UNLOCK();
  _Mtx_unlock(&this->worker_available_mutex_);
  if (pWVar6 == (WorkerThread *)0x0) goto LAB_14f09a3c1;
  uVar1 = *(undefined8 *)&param_1->field_0x38;
  local_58._Mystorage._Ptrs[7] = (_Func_base<void> *)0x0;
  if ((function<void___cdecl(void)> *)uVar1 != (function<void___cdecl(void)> *)0x0) {
    if ((function<void___cdecl(void)> *)uVar1 == param_1) {
      local_58._Mystorage._Ptrs[7] =
           (_Func_base<void> *)(**(code **)(*(longlong *)uVar1 + 8))(uVar1,&local_58);
      pfVar2 = *(function<void___cdecl(void)> **)&param_1->field_0x38;
      if (pfVar2 == (function<void___cdecl(void)> *)0x0) goto LAB_14f09a328;
      (**(code **)(*(longlong *)pfVar2 + 0x20))(pfVar2,pfVar2 != param_1);
      uVar1 = local_58._Mystorage._Ptrs[7];
    }
    local_58._Mystorage._Ptrs[7] = (_Func_base<void> *)uVar1;
    *(undefined8 *)&param_1->field_0x38 = 0;
  }
LAB_14f09a328:
  if ((function<void___cdecl(void)> *)local_58._Mystorage._Ptrs[7] !=
      (function<void___cdecl(void)> *)0x0) {
    pfVar2 = &pWVar6->task_closure_;
    if (pfVar2 != (function<void___cdecl(void)> *)&local_58) {
      plVar3 = *(longlong **)&(pWVar6->task_closure_).field_0x38;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,(function<void___cdecl(void)> *)plVar3 != pfVar2);
        *(undefined8 *)&(pWVar6->task_closure_).field_0x38 = 0;
      }
      std::_Func_class<void>::_Reset_move((_Func_class<void> *)pfVar2,&local_58);
    }
    iVar4 = _Mtx_lock(&pWVar6->execute_task_mutex_);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      return (bool)extraout_AL_02;
    }
    if (*(int *)&(pWVar6->execute_task_mutex_).field_0x4c == 0x7fffffff) {
      *(undefined4 *)&(pWVar6->execute_task_mutex_).field_0x4c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      return (bool)extraout_AL;
    }
    LOCK();
    pWVar6->task_loop_triggered_ = (atomic<bool>)0x1;
    UNLOCK();
    _Mtx_unlock(&pWVar6->execute_task_mutex_);
    _Cnd_signal(&pWVar6->execute_task_condition_);
    if ((function<void___cdecl(void)> *)local_58._Mystorage._Ptrs[7] !=
        (function<void___cdecl(void)> *)0x0) {
      (**(code **)((longlong)*local_58._Mystorage._Ptrs[7] + 0x20))
                (local_58._Mystorage._Ptrs[7],
                 (function<void___cdecl(void)> *)local_58._Mystorage._Ptrs[7] !=
                 (function<void___cdecl(void)> *)&local_58);
    }
  }
LAB_14f09a3c1:
  pfVar2 = *(function<void___cdecl(void)> **)&param_1->field_0x38;
  if (pfVar2 != (function<void___cdecl(void)> *)0x0) {
    (**(code **)(*(longlong *)pfVar2 + 0x20))(pfVar2,pfVar2 != param_1);
    *(undefined8 *)&param_1->field_0x38 = 0;
  }
  return true;
}

// SetParentAndStart @ 14f09a460

bool __thiscall
vraudio::TaskThreadPool::WorkerThread::SetParentAndStart(WorkerThread *this,TaskThreadPool *param_1)

{
  undefined1 extraout_AL;
  undefined8 *_ArgList;
  void *pvVar1;
  uint uStack_10;
  undefined4 uStack_c;
  
  this->parent_pool_ = param_1;
  _ArgList = ::operator_new(0x10);
  if (_ArgList != (undefined8 *)0x0) {
    *_ArgList = TaskLoop;
    _ArgList[1] = this;
  }
  pvVar1 = (void *)_beginthreadex((void *)0x0,0,
                                  std::thread::
                                  _Invoke<std::tuple<std::_Binder<std::_Unforced,void_(__cdecl_vraudio::TaskThreadPool::WorkerThread::*)(void),vraudio::TaskThreadPool::WorkerThread_*>_>,0>
                                  ,_ArgList,0,&uStack_10);
  if (pvVar1 != (void *)0x0) {
    if ((this->task_thread_)._Thr._Id == 0) {
      (this->task_thread_)._Thr._Hnd = pvVar1;
      *(ulonglong *)&(this->task_thread_)._Thr._Id = CONCAT44(uStack_c,uStack_10);
      return true;
    }
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
  uStack_10 = 0;
  std::_Throw_Cpp_error(6);
  return (bool)extraout_AL;
}

// SignalWorkerAvailable @ 14f09a500

void __thiscall vraudio::TaskThreadPool::SignalWorkerAvailable(TaskThreadPool *this)

{
  int iVar1;
  
  iVar1 = _Mtx_lock(&this->worker_available_mutex_);
  if (iVar1 != 0) {
    std::_Throw_Cpp_error(5);
    return;
  }
  if (*(int *)&(this->worker_available_mutex_).field_0x4c != 0x7fffffff) {
    LOCK();
    this->num_worker_threads_available_ =
         (atomic<int>)((int)this->num_worker_threads_available_ + 1);
    UNLOCK();
    _Mtx_unlock(&this->worker_available_mutex_);
    _Cnd_signal(&this->worker_available_condition_);
    return;
  }
  *(undefined4 *)&(this->worker_available_mutex_).field_0x4c = 0x7ffffffe;
  std::_Throw_Cpp_error(6);
  return;
}

// StartThreadPool @ 14f09a570

bool __thiscall vraudio::TaskThreadPool::StartThreadPool(TaskThreadPool *this,ulong64 param_1)

{
  WorkerThread *pWVar1;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  undefined1 extraout_AL_01;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *_ArgList;
  void *pvVar4;
  thread *ptVar5;
  WorkerThread *pWVar6;
  ulonglong uStack_20;
  
  if (this->is_pool_running_ == (atomic<bool>)0x0) {
    LOCK();
    this->is_pool_running_ = (atomic<bool>)0x1;
    UNLOCK();
    std::
    vector<vraudio::TaskThreadPool::WorkerThread,std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
    ::resize(&this->worker_threads_,param_1);
    pWVar6 = (this->worker_threads_)._Mypair._Myval2._Myfirst;
    pWVar1 = (this->worker_threads_)._Mypair._Myval2._Mylast;
    if (pWVar6 != pWVar1) {
      ptVar5 = &pWVar6->task_thread_;
      do {
        pWVar6->parent_pool_ = this;
        puVar3 = ::operator_new(0x10);
        _ArgList = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = WorkerThread::TaskLoop;
          puVar3[1] = pWVar6;
          _ArgList = puVar3;
        }
        pvVar4 = (void *)_beginthreadex((void *)0x0,0,
                                        std::thread::
                                        _Invoke<std::tuple<std::_Binder<std::_Unforced,void_(__cdecl_vraudio::TaskThreadPool::WorkerThread::*)(void),vraudio::TaskThreadPool::WorkerThread_*>_>,0>
                                        ,_ArgList,0,(uint *)&uStack_20);
        if (pvVar4 == (void *)0x0) {
          uStack_20 = uStack_20 & 0xffffffff00000000;
          std::_Throw_Cpp_error(6);
          return (bool)extraout_AL_01;
        }
        if ((ptVar5->_Thr)._Id != 0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        pWVar6 = pWVar6 + 1;
        (ptVar5->_Thr)._Hnd = pvVar4;
        *(ulonglong *)&(ptVar5->_Thr)._Id = uStack_20;
        ptVar5 = (thread *)((longlong)(ptVar5 + 0xf) + 8);
        uStack_20 = 0;
      } while (pWVar6 != pWVar1);
    }
    iVar2 = _Mtx_lock(&this->worker_available_mutex_);
    if (iVar2 != 0) {
      std::_Throw_Cpp_error(5);
      return (bool)extraout_AL_00;
    }
    if (*(int *)&(this->worker_available_mutex_).field_0x4c == 0x7fffffff) {
      *(undefined4 *)&(this->worker_available_mutex_).field_0x4c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      return (bool)extraout_AL;
    }
    while ((this->is_pool_running_ != (atomic<bool>)0x0 &&
           (this->num_worker_threads_available_ != SUB84(param_1,0)))) {
      _Cnd_wait(&this->worker_available_condition_,&this->worker_available_mutex_);
    }
    _Mtx_unlock(&this->worker_available_mutex_);
  }
  return true;
}

// StopThreadPool @ 14f09a700

void __thiscall vraudio::TaskThreadPool::StopThreadPool(TaskThreadPool *this)

{
  int iVar1;
  
  if (this->is_pool_running_ != (atomic<bool>)0x0) {
    iVar1 = _Mtx_lock(&this->worker_available_mutex_);
    if (iVar1 != 0) {
      std::_Throw_Cpp_error(5);
      return;
    }
    if (*(int *)&(this->worker_available_mutex_).field_0x4c == 0x7fffffff) {
      *(undefined4 *)&(this->worker_available_mutex_).field_0x4c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      return;
    }
    LOCK();
    this->is_pool_running_ = (atomic<bool>)0x0;
    UNLOCK();
    _Mtx_unlock(&this->worker_available_mutex_);
    _Cnd_signal(&this->worker_available_condition_);
    std::
    vector<vraudio::TaskThreadPool::WorkerThread,std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
    ::resize(&this->worker_threads_,0);
  }
  return;
}

// TaskLoop @ 14f09a790

void __thiscall vraudio::TaskThreadPool::WorkerThread::TaskLoop(WorkerThread *this)

{
  TaskThreadPool *pTVar1;
  longlong *plVar2;
  int iVar3;
  
  LOCK();
  this->task_loop_triggered_ = (atomic<bool>)0x0;
  UNLOCK();
  while( true ) {
    if ((this->parent_pool_->is_pool_running_ == (atomic<bool>)0x0) &&
       (*(longlong *)&(this->task_closure_).field_0x38 == 0)) {
      return;
    }
    pTVar1 = this->parent_pool_;
    iVar3 = _Mtx_lock(&pTVar1->worker_available_mutex_);
    if (iVar3 != 0) break;
    if (*(int *)&(pTVar1->worker_available_mutex_).field_0x4c == 0x7fffffff) {
      *(undefined4 *)&(pTVar1->worker_available_mutex_).field_0x4c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      return;
    }
    LOCK();
    pTVar1->num_worker_threads_available_ =
         (atomic<int>)((int)pTVar1->num_worker_threads_available_ + 1);
    UNLOCK();
    _Mtx_unlock(&pTVar1->worker_available_mutex_);
    _Cnd_signal(&pTVar1->worker_available_condition_);
    iVar3 = _Mtx_lock(&this->execute_task_mutex_);
    if (iVar3 != 0) break;
    if (*(int *)&(this->execute_task_mutex_).field_0x4c == 0x7fffffff) {
      *(undefined4 *)&(this->execute_task_mutex_).field_0x4c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      return;
    }
    while ((this->task_loop_triggered_ == (atomic<bool>)0x0 &&
           (this->parent_pool_->is_pool_running_ != (atomic<bool>)0x0))) {
      _Cnd_wait(&this->execute_task_condition_,&this->execute_task_mutex_);
    }
    plVar2 = *(longlong **)&(this->task_closure_).field_0x38;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
      plVar2 = *(longlong **)&(this->task_closure_).field_0x38;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))
                  (plVar2,(function<void___cdecl(void)> *)plVar2 != &this->task_closure_);
        *(undefined8 *)&(this->task_closure_).field_0x38 = 0;
      }
    }
    LOCK();
    this->task_loop_triggered_ = (atomic<bool>)0x0;
    UNLOCK();
    _Mtx_unlock(&this->execute_task_mutex_);
  }
  std::_Throw_Cpp_error(5);
  return;
}

// WaitUntilWorkerBecomesAvailable @ 14f09a900

bool __thiscall vraudio::TaskThreadPool::WaitUntilWorkerBecomesAvailable(TaskThreadPool *this)

{
  mutex *pmVar1;
  undefined1 extraout_AL;
  undefined1 extraout_AL_00;
  int iVar2;
  bool bVar3;
  
  if (this->is_pool_running_ == (atomic<bool>)0x0) {
    return false;
  }
  if (0 < (int)this->num_worker_threads_available_) {
    return true;
  }
  pmVar1 = &this->worker_available_mutex_;
  iVar2 = _Mtx_lock(pmVar1);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    return (bool)extraout_AL_00;
  }
  if (*(int *)&(this->worker_available_mutex_).field_0x4c == 0x7fffffff) {
    *(undefined4 *)&(this->worker_available_mutex_).field_0x4c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
    return (bool)extraout_AL;
  }
  while (((int)this->num_worker_threads_available_ < 1 &&
         (this->is_pool_running_ != (atomic<bool>)0x0))) {
    _Cnd_wait(&this->worker_available_condition_,pmVar1);
  }
  if (((int)this->num_worker_threads_available_ < 1) ||
     (this->is_pool_running_ == (atomic<bool>)0x0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  _Mtx_unlock(pmVar1);
  return bVar3;
}

// _Xlength @ 14f09a9d0

void __cdecl
std::
vector<vraudio::TaskThreadPool::WorkerThread,std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// resize @ 14f09a9f0

void __thiscall
std::
vector<vraudio::TaskThreadPool::WorkerThread,std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
::resize(vector<vraudio::TaskThreadPool::WorkerThread,std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
         *this,ulong64 param_1)

{
  WorkerThread *pWVar1;
  WorkerThread *pWVar2;
  longlong lVar3;
  ulonglong uVar4;
  _Value_init_tag local_res8 [8];
  
  pWVar2 = (this->_Mypair)._Myval2._Mylast;
  pWVar1 = (this->_Mypair)._Myval2._Myfirst;
  lVar3 = ((longlong)pWVar2 - (longlong)pWVar1) +
          SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816((longlong)pWVar2 - (longlong)pWVar1),8);
  uVar4 = (lVar3 >> 7) - (lVar3 >> 0x3f);
  if (param_1 < uVar4) {
    _Destroy_range<std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
              (pWVar1 + param_1,pWVar2,(allocator<vraudio::TaskThreadPool::WorkerThread> *)this);
    (this->_Mypair)._Myval2._Mylast = pWVar1 + param_1;
    return;
  }
  if (uVar4 < param_1) {
    lVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pWVar1;
    lVar3 = SUB168(SEXT816(-0x7bdef7bdef7bdef7) * SEXT816(lVar3),8) + lVar3;
    if ((ulonglong)((lVar3 >> 7) - (lVar3 >> 0x3f)) < param_1) {
      _Resize_reallocate<std::_Value_init_tag>(this,param_1,local_res8);
      return;
    }
    pWVar2 = _Uninitialized_value_construct_n<std::allocator<vraudio::TaskThreadPool::WorkerThread>_>
                       (pWVar2,param_1 - uVar4,
                        (allocator<vraudio::TaskThreadPool::WorkerThread> *)this);
    (this->_Mypair)._Myval2._Mylast = pWVar2;
  }
  return;
}


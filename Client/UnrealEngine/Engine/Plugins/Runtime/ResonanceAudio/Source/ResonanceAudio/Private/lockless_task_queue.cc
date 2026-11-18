// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 23

// operator==<void___cdecl(void)> @ 14f0961a0

bool __cdecl
std::operator==<void___cdecl(void)>(function<void___cdecl(void)> *param_1,void *param_2)

{
  return *(longlong *)&param_1->field_0x38 == 0;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<vraudio::LocklessTaskQueue::Node_*>_> @ 14f0961b0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<vraudio::LocklessTaskQueue::Node_*>_>
          (_Atomic_padded<vraudio::LocklessTaskQueue::Node_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<vraudio::LocklessTaskQueue::Node_*>_> @ 14f0961c0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<vraudio::LocklessTaskQueue::Node_*>_>
          (_Atomic_padded<vraudio::LocklessTaskQueue::Node_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,vraudio::LocklessTaskQueue::Node_*> @ 14f0961d0

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,vraudio::LocklessTaskQueue::Node_*>(Node **param_1)

{
  return (long64)*param_1;
}

// _Resize_reallocate<std::_Value_init_tag> @ 14f0961e0

void __thiscall
std::vector<vraudio::LocklessTaskQueue::Node,std::allocator<vraudio::LocklessTaskQueue::Node>_>::
_Resize_reallocate<std::_Value_init_tag>
          (vector<vraudio::LocklessTaskQueue::Node,std::allocator<vraudio::LocklessTaskQueue::Node>_>
           *this,ulong64 param_1,_Value_init_tag *param_2)

{
  ulonglong uVar1;
  Node *pNVar2;
  atomic<vraudio::LocklessTaskQueue::Node_*> aVar3;
  ulonglong uVar4;
  Node *pNVar5;
  atomic<vraudio::LocklessTaskQueue::Node_*> *paVar6;
  longlong lVar7;
  longlong lVar8;
  Node *pNVar9;
  ulong64 uVar10;
  Node *pNVar11;
  atomic<vraudio::LocklessTaskQueue::Node_*> aVar12;
  
  if (0x38e38e38e38e38e < param_1) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  lVar7 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)(this->_Mypair)._Myval2._Myfirst;
  lVar7 = lVar7 / 0x12 + (lVar7 >> 0x3f);
  lVar7 = (lVar7 >> 2) - (lVar7 >> 0x3f);
  uVar1 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)(this->_Mypair)._Myval2._Myfirst) /
          0x48;
  if (0x38e38e38e38e38e - (uVar1 >> 1) < uVar1) {
    uVar4 = 0x38e38e38e38e38e;
  }
  else {
    uVar1 = (uVar1 >> 1) + uVar1;
    uVar4 = param_1;
    if ((param_1 <= uVar1) && (uVar4 = uVar1, 0x38e38e38e38e38e < uVar1)) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  pNVar5 = _Allocate<16,std::_Default_allocate_traits>(uVar4 * 0x48);
  lVar8 = param_1 - lVar7;
  if (lVar8 != 0) {
    paVar6 = &pNVar5[lVar7].next;
    do {
      paVar6[-8] = (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
      paVar6[-7] = (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
      paVar6[-6] = (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
      paVar6[-5] = (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
      paVar6[-4] = (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
      paVar6[-3] = (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
      paVar6[-2] = (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
      paVar6[-1] = (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
      *paVar6 = (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
      paVar6 = paVar6 + 9;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  pNVar11 = (this->_Mypair)._Myval2._Mylast;
  pNVar9 = (this->_Mypair)._Myval2._Myfirst;
  if (pNVar9 != pNVar11) {
    paVar6 = &pNVar5->next;
    do {
      paVar6[-1] = (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
      pNVar9 = pNVar9 + 1;
      *paVar6 = (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
      paVar6 = paVar6 + 9;
    } while (pNVar9 != pNVar11);
  }
  pNVar11 = (this->_Mypair)._Myval2._Myfirst;
  if (pNVar11 != (Node *)0x0) {
    pNVar9 = (this->_Mypair)._Myval2._Mylast;
    for (; pNVar11 != pNVar9; pNVar11 = pNVar11 + 1) {
      pNVar2 = *(Node **)&(pNVar11->task).field_0x38;
      if (pNVar2 != (Node *)0x0) {
        (**(code **)(*(longlong *)&pNVar2->task + 0x20))(pNVar2,pNVar2 != pNVar11);
        *(undefined8 *)&(pNVar11->task).field_0x38 = 0;
      }
    }
    aVar3 = (atomic<vraudio::LocklessTaskQueue::Node_*>)(this->_Mypair)._Myval2._Myfirst;
    uVar10 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)aVar3) / 0x48) * 0x48;
    aVar12 = aVar3;
    if (0xfff < uVar10) {
      aVar12 = *(atomic<vraudio::LocklessTaskQueue::Node_*> *)((longlong)aVar3 + -8);
      uVar10 = uVar10 + 0x27;
      if (0x1f < (ulonglong)((longlong)aVar3 + (-8 - (longlong)aVar12))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)aVar12,uVar10);
  }
  (this->_Mypair)._Myval2._Myfirst = pNVar5;
  (this->_Mypair)._Myval2._Mylast = pNVar5 + param_1;
  (this->_Mypair)._Myval2._Myend = pNVar5 + uVar4;
  return;
}

// _Uninitialized_move<std::function<void___cdecl(void)>_*,std::allocator<std::function<void___cdecl(void)>_>_> @ 14f096410

function<void___cdecl(void)> * __cdecl
std::
_Uninitialized_move<std::function<void___cdecl(void)>_*,std::allocator<std::function<void___cdecl(void)>_>_>
          (function<void___cdecl(void)> *param_1,function<void___cdecl(void)> *param_2,
          function<void___cdecl(void)> *param_3,
          allocator<std::function<void___cdecl(void)>_> *param_4)

{
  function<void___cdecl(void)> *pfVar1;
  function<void___cdecl(void)> *this;
  
  this = param_3;
  if (param_1 != param_2) {
    pfVar1 = param_1;
    do {
      *(undefined8 *)((longlong)param_3 + (0x38 - (longlong)param_1) + (longlong)pfVar1) = 0;
      _Func_class<void>::_Reset_move((_Func_class<void> *)this,(_Func_class<void> *)pfVar1);
      this = this + 1;
      pfVar1 = pfVar1 + 1;
    } while (pfVar1 != param_2);
  }
  return this;
}

// _Uninitialized_value_construct_n<std::allocator<vraudio::LocklessTaskQueue::Node>_> @ 14f096480

Node * __cdecl
std::_Uninitialized_value_construct_n<std::allocator<vraudio::LocklessTaskQueue::Node>_>
          (Node *param_1,ulong64 param_2,allocator<vraudio::LocklessTaskQueue::Node> *param_3)

{
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *(undefined8 *)&param_1->task = 0;
    *(undefined8 *)&(param_1->task).field_0x8 = 0;
    *(undefined8 *)&(param_1->task).field_0x10 = 0;
    *(undefined8 *)&(param_1->task).field_0x18 = 0;
    *(undefined8 *)&(param_1->task).field_0x20 = 0;
    *(undefined8 *)&(param_1->task).field_0x28 = 0;
    *(undefined8 *)&(param_1->task).field_0x30 = 0;
    *(undefined8 *)&(param_1->task).field_0x38 = 0;
    param_1->next = (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
    param_1 = param_1 + 1;
  }
  return param_1;
}

// atomic_compare_exchange_strong_explicit<vraudio::LocklessTaskQueue::Node_*> @ 14f0964d0

/* WARNING: Enum "memory_order": Some values do not have unique names */

bool __cdecl
std::atomic_compare_exchange_strong_explicit<vraudio::LocklessTaskQueue::Node_*>
          (atomic<vraudio::LocklessTaskQueue::Node_*> *param_1,Node **param_2,Node *param_3,
          memory_order param_4,memory_order param_5)

{
  atomic<vraudio::LocklessTaskQueue::Node_*> aVar1;
  atomic<vraudio::LocklessTaskQueue::Node_*> aVar2;
  bool bVar3;
  
  aVar1 = (atomic<vraudio::LocklessTaskQueue::Node_*>)*param_2;
  LOCK();
  aVar2 = *param_1;
  bVar3 = aVar1 == aVar2;
  if (bVar3) {
    *param_1 = (atomic<vraudio::LocklessTaskQueue::Node_*>)param_3;
    aVar2 = aVar1;
  }
  UNLOCK();
  if (!bVar3) {
    *param_2 = (Node *)aVar2;
    return false;
  }
  return true;
}

// LocklessTaskQueue @ 14f0964f0

LocklessTaskQueue * __thiscall
vraudio::LocklessTaskQueue::LocklessTaskQueue(LocklessTaskQueue *this,ulong64 param_1)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  bool bVar2;
  int iStack_fc;
  undefined1 local_f8 [112];
  char *local_88;
  int local_80;
  basic_ios<char,std::char_traits<char>_> local_70;
  
  bVar2 = false;
  this->free_list_head_ = (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
  this->task_list_head_ = (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
  (this->nodes_)._Mypair._Myval2._Myfirst = (Node *)0x0;
  (this->nodes_)._Mypair._Myval2._Mylast = (Node *)0x0;
  (this->nodes_)._Mypair._Myval2._Myend = (Node *)0x0;
  (this->temp_tasks_)._Mypair._Myval2._Myfirst = (function<void___cdecl(void)> *)0x0;
  (this->temp_tasks_)._Mypair._Myval2._Mylast = (function<void___cdecl(void)> *)0x0;
  (this->temp_tasks_)._Mypair._Myval2._Myend = (function<void___cdecl(void)> *)0x0;
  *(undefined8 *)&(this->tasks_mutex_).field_0x18 = 0;
  *(undefined8 *)&(this->tasks_mutex_).field_0x20 = 0;
  *(undefined8 *)&(this->tasks_mutex_).field_0x28 = 0;
  *(undefined8 *)&(this->tasks_mutex_).field_0x30 = 0;
  *(undefined8 *)&(this->tasks_mutex_).field_0x38 = 0;
  *(undefined8 *)&(this->tasks_mutex_).field_0x40 = 0;
  *(undefined8 *)&(this->tasks_mutex_).field_0x8 = 0;
  *(undefined8 *)&(this->tasks_mutex_).field_0x10 = 0;
  *(undefined4 *)&(this->tasks_mutex_).field_0x48 = 0xffffffff;
  *(undefined4 *)&this->tasks_mutex_ = 2;
  *(undefined4 *)&(this->tasks_mutex_).field_0x4c = 0;
  this->max_tasks_ = param_1;
  if (param_1 == 0) {
    local_f8._0_8_ =
         &std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::_vbtable_;
    std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(&local_70)
    ;
    std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)local_f8,
               (basic_streambuf<char,std::char_traits<char>_> *)(local_f8 + 8),false);
    *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
         std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8._0_8_ + 4)) =
         *(int *)(local_f8._0_8_ + 4) + -0x88;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)(local_f8 + 8));
    local_88 = (char *)0x0;
    local_f8._8_8_ =
         std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_80 = 4;
    pbVar1 = std::operator<<<std::char_traits<char>_>
                       ((basic_ostream<char,std::char_traits<char>_> *)local_f8,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ResonanceAudio\\Source\\ResonanceAudio\\Private\\ResonanceAudioLibrary\\resonance_audio\\utils\\lockless_task_queue.cc"
                       );
    pbVar1 = std::operator<<<std::char_traits<char>_>(pbVar1,":");
    pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
             std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,0x2b);
    std::operator<<<std::char_traits<char>_>(pbVar1,": ");
    bVar2 = true;
  }
  else if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)
                 &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                  ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
      atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
      _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (bVar2) {
    FatalLogger::~FatalLogger((FatalLogger *)local_f8);
  }
  Init(this,param_1);
  return this;
}

// ~vector<vraudio::LocklessTaskQueue::Node,std::allocator<vraudio::LocklessTaskQueue::Node>_> @ 14f0966e0

void __thiscall
std::vector<vraudio::LocklessTaskQueue::Node,std::allocator<vraudio::LocklessTaskQueue::Node>_>::
~vector<vraudio::LocklessTaskQueue::Node,std::allocator<vraudio::LocklessTaskQueue::Node>_>
          (vector<vraudio::LocklessTaskQueue::Node,std::allocator<vraudio::LocklessTaskQueue::Node>_>
           *this)

{
  Node *pNVar1;
  Node *pNVar2;
  atomic<vraudio::LocklessTaskQueue::Node_*> aVar3;
  ulong64 uVar4;
  Node *pNVar5;
  atomic<vraudio::LocklessTaskQueue::Node_*> aVar6;
  
  pNVar5 = (this->_Mypair)._Myval2._Myfirst;
  if (pNVar5 != (Node *)0x0) {
    pNVar1 = (this->_Mypair)._Myval2._Mylast;
    for (; pNVar5 != pNVar1; pNVar5 = pNVar5 + 1) {
      pNVar2 = *(Node **)&(pNVar5->task).field_0x38;
      if (pNVar2 != (Node *)0x0) {
        (**(code **)(*(longlong *)&pNVar2->task + 0x20))(pNVar2,pNVar2 != pNVar5);
        *(undefined8 *)&(pNVar5->task).field_0x38 = 0;
      }
    }
    aVar3 = (atomic<vraudio::LocklessTaskQueue::Node_*>)(this->_Mypair)._Myval2._Myfirst;
    uVar4 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)aVar3) / 0x48) * 0x48;
    aVar6 = aVar3;
    if (0xfff < uVar4) {
      aVar6 = *(atomic<vraudio::LocklessTaskQueue::Node_*> *)((longlong)aVar3 + -8);
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)aVar3 + (-8 - (longlong)aVar6))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)aVar6,uVar4);
    (this->_Mypair)._Myval2._Myfirst = (Node *)0x0;
    (this->_Mypair)._Myval2._Mylast = (Node *)0x0;
    (this->_Mypair)._Myval2._Myend = (Node *)0x0;
  }
  return;
}

// ~vector<std::function<void___cdecl(void)>,std::allocator<std::function<void___cdecl(void)>_>_> @ 14f0967d0

void __thiscall
std::vector<std::function<void___cdecl(void)>,std::allocator<std::function<void___cdecl(void)>_>_>::
~vector<std::function<void___cdecl(void)>,std::allocator<std::function<void___cdecl(void)>_>_>
          (vector<std::function<void___cdecl(void)>,std::allocator<std::function<void___cdecl(void)>_>_>
           *this)

{
  function<void___cdecl(void)> *pfVar1;
  function<void___cdecl(void)> *pfVar2;
  ulong64 uVar3;
  function<void___cdecl(void)> *pfVar4;
  
  pfVar4 = (this->_Mypair)._Myval2._Myfirst;
  if (pfVar4 != (function<void___cdecl(void)> *)0x0) {
    pfVar2 = (this->_Mypair)._Myval2._Mylast;
    for (; pfVar4 != pfVar2; pfVar4 = pfVar4 + 1) {
      pfVar1 = *(function<void___cdecl(void)> **)&pfVar4->field_0x38;
      if (pfVar1 != (function<void___cdecl(void)> *)0x0) {
        (**(code **)(*(longlong *)pfVar1 + 0x20))(pfVar1,pfVar1 != pfVar4);
        *(undefined8 *)&pfVar4->field_0x38 = 0;
      }
    }
    pfVar4 = (this->_Mypair)._Myval2._Myfirst;
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pfVar4 & 0xffffffffffffffc0;
    pfVar2 = pfVar4;
    if (0xfff < uVar3) {
      pfVar2 = *(function<void___cdecl(void)> **)&pfVar4[-1].field_0x38;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pfVar4 + (-8 - (longlong)pfVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pfVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (function<void___cdecl(void)> *)0x0;
    (this->_Mypair)._Myval2._Mylast = (function<void___cdecl(void)> *)0x0;
    (this->_Mypair)._Myval2._Myend = (function<void___cdecl(void)> *)0x0;
  }
  return;
}

// ~LocklessTaskQueue @ 14f0968a0

void __thiscall vraudio::LocklessTaskQueue::~LocklessTaskQueue(LocklessTaskQueue *this)

{
  atomic<vraudio::LocklessTaskQueue::Node_*> aVar1;
  
  LOCK();
  aVar1 = this->task_list_head_;
  this->task_list_head_ = (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
  UNLOCK();
  ProcessTaskList(this,(Node *)aVar1,false);
  std::vector<std::function<void___cdecl(void)>,std::allocator<std::function<void___cdecl(void)>_>_>
  ::~vector<std::function<void___cdecl(void)>,std::allocator<std::function<void___cdecl(void)>_>_>
            (&this->temp_tasks_);
  std::vector<vraudio::LocklessTaskQueue::Node,std::allocator<vraudio::LocklessTaskQueue::Node>_>::
  ~vector<vraudio::LocklessTaskQueue::Node,std::allocator<vraudio::LocklessTaskQueue::Node>_>
            (&this->nodes_);
  return;
}

// Clear @ 14f0968e0

void __thiscall vraudio::LocklessTaskQueue::Clear(LocklessTaskQueue *this)

{
  atomic<vraudio::LocklessTaskQueue::Node_*> aVar1;
  
  LOCK();
  aVar1 = this->task_list_head_;
  this->task_list_head_ = (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
  UNLOCK();
  ProcessTaskList(this,(Node *)aVar1,false);
  return;
}

// Execute @ 14f096900

void __thiscall vraudio::LocklessTaskQueue::Execute(LocklessTaskQueue *this)

{
  atomic<vraudio::LocklessTaskQueue::Node_*> aVar1;
  
  LOCK();
  aVar1 = this->task_list_head_;
  this->task_list_head_ = (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
  UNLOCK();
  ProcessTaskList(this,(Node *)aVar1,true);
  return;
}

// Init @ 14f096920

/* WARNING: Type propagation algorithm not settling */

void __thiscall vraudio::LocklessTaskQueue::Init(LocklessTaskQueue *this,ulong64 param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  function<void___cdecl(void)> *pfVar3;
  function<void___cdecl(void)> *pfVar4;
  function<void___cdecl(void)> *pfVar5;
  ulong64 uVar6;
  int iVar7;
  Node *pNVar8;
  function<void___cdecl(void)> *pfVar9;
  longlong lVar10;
  longlong lVar11;
  function<void___cdecl(void)> *this_00;
  Node *pNVar12;
  function<void___cdecl(void)> *pfVar13;
  ulonglong uVar14;
  _Value_init_tag local_res8 [8];
  
  iVar7 = _Mtx_lock(&this->tasks_mutex_);
  if (iVar7 != 0) {
    std::_Throw_Cpp_error(5);
    return;
  }
  if (*(int *)&(this->tasks_mutex_).field_0x4c == 0x7fffffff) {
    *(undefined4 *)&(this->tasks_mutex_).field_0x4c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
    return;
  }
  pNVar8 = (this->nodes_)._Mypair._Myval2._Myfirst;
  lVar11 = 0;
  pNVar1 = (this->nodes_)._Mypair._Myval2._Mylast;
  lVar10 = ((longlong)pNVar1 - (longlong)pNVar8) / 0x12 +
           ((longlong)pNVar1 - (longlong)pNVar8 >> 0x3f);
  uVar14 = (lVar10 >> 2) - (lVar10 >> 0x3f);
  if (param_1 < uVar14) {
    for (pNVar12 = pNVar8 + param_1; pNVar12 != pNVar1; pNVar12 = pNVar12 + 1) {
      pNVar2 = *(Node **)&(pNVar12->task).field_0x38;
      if (pNVar2 != (Node *)0x0) {
        (**(code **)(*(longlong *)&pNVar2->task + 0x20))(pNVar2,pNVar2 != pNVar12);
        *(undefined8 *)&(pNVar12->task).field_0x38 = 0;
      }
    }
    (this->nodes_)._Mypair._Myval2._Mylast = pNVar8 + param_1;
  }
  else if (uVar14 < param_1) {
    if ((ulonglong)(((longlong)(this->nodes_)._Mypair._Myval2._Myend - (longlong)pNVar8) / 0x48) <
        param_1) {
      std::
      vector<vraudio::LocklessTaskQueue::Node,std::allocator<vraudio::LocklessTaskQueue::Node>_>::
      _Resize_reallocate<std::_Value_init_tag>(&this->nodes_,param_1,local_res8);
    }
    else {
      pNVar8 = std::
               _Uninitialized_value_construct_n<std::allocator<vraudio::LocklessTaskQueue::Node>_>
                         (pNVar1,param_1 - uVar14,
                          (allocator<vraudio::LocklessTaskQueue::Node> *)&this->nodes_);
      (this->nodes_)._Mypair._Myval2._Mylast = pNVar8;
    }
  }
  pfVar3 = (this->temp_tasks_)._Mypair._Myval2._Myfirst;
  if ((ulonglong)((longlong)(this->temp_tasks_)._Mypair._Myval2._Myend - (longlong)pfVar3 >> 6) <
      param_1) {
    if (0x3ffffffffffffff < param_1) {
                    /* WARNING: Subroutine does not return */
      std::
      vector<std::function<void___cdecl(void)>,std::allocator<std::function<void___cdecl(void)>_>_>
      ::_Xlength();
    }
    pfVar4 = (this->temp_tasks_)._Mypair._Myval2._Mylast;
    pfVar9 = std::_Allocate<16,std::_Default_allocate_traits>(param_1 << 6);
    pfVar5 = (this->temp_tasks_)._Mypair._Myval2._Mylast;
    this_00 = pfVar9;
    for (pfVar13 = (this->temp_tasks_)._Mypair._Myval2._Myfirst; pfVar13 != pfVar5;
        pfVar13 = pfVar13 + 1) {
      *(undefined8 *)&this_00->field_0x38 = 0;
      std::_Func_class<void>::_Reset_move((_Func_class<void> *)this_00,(_Func_class<void> *)pfVar13)
      ;
      this_00 = this_00 + 1;
    }
    std::
    vector<std::function<void___cdecl(void)>,std::allocator<std::function<void___cdecl(void)>_>_>::
    _Change_array(&this->temp_tasks_,pfVar9,(longlong)pfVar4 - (longlong)pfVar3 >> 6,param_1);
  }
  LOCK();
  this->free_list_head_ =
       (atomic<vraudio::LocklessTaskQueue::Node_*>)(this->nodes_)._Mypair._Myval2._Myfirst;
  UNLOCK();
  uVar6 = param_1;
  while (uVar6 = uVar6 - 1, uVar6 != 0) {
    pNVar8 = (this->nodes_)._Mypair._Myval2._Myfirst;
    LOCK();
    *(undefined1 **)(&(pNVar8->next).field_0x0 + lVar11) = &pNVar8[1].task.field_0x0 + lVar11;
    UNLOCK();
    lVar11 = lVar11 + 0x48;
  }
  LOCK();
  (this->nodes_)._Mypair._Myval2._Myfirst[param_1 - 1].next =
       (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
  UNLOCK();
  LOCK();
  this->task_list_head_ = (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0;
  UNLOCK();
  _Mtx_unlock(&this->tasks_mutex_);
  return;
}

// PopNodeFromList @ 14f096b70

Node * __thiscall
vraudio::LocklessTaskQueue::PopNodeFromList
          (LocklessTaskQueue *this,atomic<vraudio::LocklessTaskQueue::Node_*> *param_1)

{
  atomic<vraudio::LocklessTaskQueue::Node_*> aVar1;
  atomic<vraudio::LocklessTaskQueue::Node_*> aVar2;
  
  do {
    aVar2 = *param_1;
    if (aVar2 == (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0) {
      return (Node *)0x0;
    }
    LOCK();
    aVar1 = *param_1;
    if (aVar2 == aVar1) {
      *param_1 = *(atomic<vraudio::LocklessTaskQueue::Node_*> *)((longlong)aVar2 + 0x40);
    }
    UNLOCK();
  } while (aVar2 != aVar1);
  return (Node *)aVar2;
}

// Post @ 14f096ba0

void __thiscall
vraudio::LocklessTaskQueue::Post(LocklessTaskQueue *this,function<void___cdecl(void)> *param_1)

{
  atomic<vraudio::LocklessTaskQueue::Node_*> this_00;
  atomic<vraudio::LocklessTaskQueue::Node_*> aVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = _Mtx_lock(&this->tasks_mutex_);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    return;
  }
  if (*(int *)&(this->tasks_mutex_).field_0x4c == 0x7fffffff) {
    *(undefined4 *)&(this->tasks_mutex_).field_0x4c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
    return;
  }
  do {
    this_00 = this->free_list_head_;
    if (this_00 == (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        std::basic_ostream<char,std::char_traits<char>_>::
        basic_ostream<char,std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                    ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
        atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
        _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      std::operator<<<std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)
                 &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                  ::__l2::kNullStream,"Queue capacity reached - dropping task");
      goto LAB_14f096c7c;
    }
    LOCK();
    bVar3 = this_00 == this->free_list_head_;
    if (bVar3) {
      this->free_list_head_ =
           (atomic<vraudio::LocklessTaskQueue::Node_*>)
           (((_Func_class<void> *)((longlong)this_00 + 0x40))->_Mystorage)._Dummy1;
    }
    UNLOCK();
  } while (!bVar3);
  if (this_00 != (atomic<vraudio::LocklessTaskQueue::Node_*>)param_1) {
    aVar1 = *(atomic<vraudio::LocklessTaskQueue::Node_*> *)((longlong)this_00 + 0x38);
    if (aVar1 != (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0) {
      (**(code **)(*(longlong *)aVar1 + 0x20))(aVar1,aVar1 != this_00);
      *(undefined8 *)((longlong)this_00 + 0x38) = 0;
    }
    std::_Func_class<void>::_Reset_move((_Func_class<void> *)this_00,(_Func_class<void> *)param_1);
  }
  do {
    aVar1 = this->task_list_head_;
    LOCK();
    *(atomic<vraudio::LocklessTaskQueue::Node_*> *)((longlong)this_00 + 0x40) = aVar1;
    UNLOCK();
    LOCK();
    bVar3 = aVar1 == this->task_list_head_;
    if (bVar3) {
      this->task_list_head_ = this_00;
    }
    UNLOCK();
  } while (!bVar3);
LAB_14f096c7c:
  _Mtx_unlock(&this->tasks_mutex_);
  return;
}

// ProcessTaskList @ 14f096d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
vraudio::LocklessTaskQueue::ProcessTaskList(LocklessTaskQueue *this,Node *param_1,bool param_2)

{
  function<void___cdecl(void)> **ppfVar1;
  atomic<vraudio::LocklessTaskQueue::Node_*> aVar2;
  int iVar3;
  undefined8 uVar4;
  function<void___cdecl(void)> *pfVar5;
  function<void___cdecl(void)> *pfVar6;
  ulonglong uVar7;
  function<void___cdecl(void)> *pfVar8;
  function<void___cdecl(void)> *pfVar9;
  function<void___cdecl(void)> *pfVar10;
  ulonglong uVar11;
  atomic<vraudio::LocklessTaskQueue::Node_*> aVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_d8 [32];
  char local_b8;
  atomic<vraudio::LocklessTaskQueue::Node_*> local_b0;
  function<void___cdecl(void)> *local_a8;
  ulonglong local_a0;
  longlong *local_98;
  _Func_class<void> local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8 = param_2;
  iVar3 = _Mtx_lock(&this->tasks_mutex_);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    return;
  }
  if (*(int *)&(this->tasks_mutex_).field_0x4c == 0x7fffffff) {
    *(undefined4 *)&(this->tasks_mutex_).field_0x4c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
    return;
  }
  uVar13 = (ulonglong)_tls_index;
  if (param_1 != (Node *)0x0) {
    local_98 = (longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8);
    do {
      aVar12 = *(atomic<vraudio::LocklessTaskQueue::Node_*> *)((longlong)param_1 + 0x40);
      pfVar10 = (this->temp_tasks_)._Mypair._Myval2._Mylast;
      pfVar5 = (this->temp_tasks_)._Mypair._Myval2._Myfirst;
      uVar13 = (longlong)pfVar10 - (longlong)pfVar5 >> 6;
      local_b0 = aVar12;
      if (uVar13 < this->max_tasks_) {
        pfVar8 = (this->temp_tasks_)._Mypair._Myval2._Myend;
        if (pfVar10 == pfVar8) {
          if (uVar13 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::
            vector<std::function<void___cdecl(void)>,std::allocator<std::function<void___cdecl(void)>_>_>
            ::_Xlength();
          }
          local_a0 = uVar13 + 1;
          uVar7 = (longlong)pfVar8 - (longlong)pfVar5 >> 6;
          if (0x3ffffffffffffff - (uVar7 >> 1) < uVar7) {
            uVar11 = 0x3ffffffffffffff;
          }
          else {
            uVar7 = (uVar7 >> 1) + uVar7;
            uVar11 = local_a0;
            if (local_a0 <= uVar7) {
              uVar11 = uVar7;
            }
            if (0x3ffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
              std::_Throw_bad_array_new_length();
            }
          }
          pfVar5 = std::_Allocate<16,std::_Default_allocate_traits>(uVar11 << 6);
          pfVar8 = pfVar5 + uVar13;
          local_a8 = pfVar8 + 1;
          *(undefined8 *)&pfVar8->field_0x38 = 0;
          aVar12 = *(atomic<vraudio::LocklessTaskQueue::Node_*> *)((longlong)param_1 + 0x38);
          if (aVar12 != (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0) {
            if (aVar12 == (atomic<vraudio::LocklessTaskQueue::Node_*>)param_1) {
              uVar4 = (**(code **)(*(longlong *)aVar12 + 8))(aVar12,pfVar8);
              *(undefined8 *)&pfVar8->field_0x38 = uVar4;
              aVar12 = *(atomic<vraudio::LocklessTaskQueue::Node_*> *)((longlong)param_1 + 0x38);
              if (aVar12 != (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0) {
                (**(code **)(*(longlong *)aVar12 + 0x20))
                          (aVar12,aVar12 != (atomic<vraudio::LocklessTaskQueue::Node_*>)param_1);
                *(undefined8 *)((longlong)param_1 + 0x38) = 0;
              }
            }
            else {
              *(atomic<vraudio::LocklessTaskQueue::Node_*> *)&pfVar8->field_0x38 = aVar12;
              *(undefined8 *)((longlong)param_1 + 0x38) = 0;
            }
          }
          pfVar9 = (this->temp_tasks_)._Mypair._Myval2._Mylast;
          pfVar8 = (this->temp_tasks_)._Mypair._Myval2._Myfirst;
          pfVar6 = pfVar5;
          if (pfVar10 != pfVar9) {
            std::
            _Uninitialized_move<std::function<void___cdecl(void)>_*,std::allocator<std::function<void___cdecl(void)>_>_>
                      (pfVar8,pfVar10,pfVar5,
                       (allocator<std::function<void___cdecl(void)>_> *)&this->temp_tasks_);
            pfVar9 = (this->temp_tasks_)._Mypair._Myval2._Mylast;
            pfVar6 = local_a8;
            pfVar8 = pfVar10;
          }
          std::
          _Uninitialized_move<std::function<void___cdecl(void)>_*,std::allocator<std::function<void___cdecl(void)>_>_>
                    (pfVar8,pfVar9,pfVar6,
                     (allocator<std::function<void___cdecl(void)>_> *)&this->temp_tasks_);
          std::
          vector<std::function<void___cdecl(void)>,std::allocator<std::function<void___cdecl(void)>_>_>
          ::_Change_array(&this->temp_tasks_,pfVar5,local_a0,uVar11);
          aVar12 = local_b0;
        }
        else {
          *(undefined8 *)&pfVar10->field_0x38 = 0;
          aVar2 = *(atomic<vraudio::LocklessTaskQueue::Node_*> *)((longlong)param_1 + 0x38);
          if (aVar2 != (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0) {
            if (aVar2 == (atomic<vraudio::LocklessTaskQueue::Node_*>)param_1) {
              uVar4 = (**(code **)(*(longlong *)aVar2 + 8))(aVar2,pfVar10);
              *(undefined8 *)&pfVar10->field_0x38 = uVar4;
              aVar2 = *(atomic<vraudio::LocklessTaskQueue::Node_*> *)((longlong)param_1 + 0x38);
              if (aVar2 != (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0) {
                (**(code **)(*(longlong *)aVar2 + 0x20))
                          (aVar2,aVar2 != (atomic<vraudio::LocklessTaskQueue::Node_*>)param_1);
                *(undefined8 *)((longlong)param_1 + 0x38) = 0;
                ppfVar1 = &(this->temp_tasks_)._Mypair._Myval2._Mylast;
                *ppfVar1 = *ppfVar1 + 1;
                goto LAB_14f096f68;
              }
            }
            else {
              *(atomic<vraudio::LocklessTaskQueue::Node_*> *)&pfVar10->field_0x38 = aVar2;
              *(undefined8 *)((longlong)param_1 + 0x38) = 0;
            }
          }
          ppfVar1 = &(this->temp_tasks_)._Mypair._Myval2._Mylast;
          *ppfVar1 = *ppfVar1 + 1;
        }
      }
      else {
        if ((*(int *)(*local_98 + 0x9d4c) <
             `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          std::basic_ostream<char,std::char_traits<char>_>::
          basic_ostream<char,std::char_traits<char>_>
                    ((basic_ostream<char,std::char_traits<char>_> *)
                     &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                      ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false
                    );
          atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
          _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        std::operator<<<std::char_traits<char>_>
                  ((basic_ostream<char,std::char_traits<char>_> *)
                   &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                    ::__l2::kNullStream,
                   "temp_tasks_ vector size is larger than max_tasks_, dropping all remaining tasks"
                  );
      }
LAB_14f096f68:
      local_88._Mystorage._Ptrs[7] = (_Func_base<void> *)0x0;
      if (param_1 != (Node *)&local_88) {
        aVar2 = *(atomic<vraudio::LocklessTaskQueue::Node_*> *)((longlong)param_1 + 0x38);
        if (aVar2 != (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0) {
          (**(code **)(*(longlong *)aVar2 + 0x20))
                    (aVar2,aVar2 != (atomic<vraudio::LocklessTaskQueue::Node_*>)param_1);
          *(undefined8 *)((longlong)param_1 + 0x38) = 0;
        }
        std::_Func_class<void>::_Reset_move((_Func_class<void> *)param_1,&local_88);
      }
      if (local_88._Mystorage._Ptrs[7] != (_Func_base<void> *)0x0) {
        (**(code **)((longlong)*local_88._Mystorage._Ptrs[7] + 0x20))
                  (local_88._Mystorage._Ptrs[7],
                   local_88._Mystorage._Ptrs[7] != (_Func_base<void> *)&local_88);
      }
      do {
        aVar2 = this->free_list_head_;
        LOCK();
        *(atomic<vraudio::LocklessTaskQueue::Node_*> *)((longlong)param_1 + 0x40) = aVar2;
        UNLOCK();
        LOCK();
        bVar14 = aVar2 == this->free_list_head_;
        if (bVar14) {
          this->free_list_head_ = (atomic<vraudio::LocklessTaskQueue::Node_*>)param_1;
        }
        UNLOCK();
      } while (!bVar14);
      param_1 = (Node *)aVar12;
    } while (aVar12 != (atomic<vraudio::LocklessTaskQueue::Node_*>)0x0);
    uVar13 = (ulonglong)_tls_index;
  }
  if ((local_b8 != '\0') &&
     (pfVar10 = (this->temp_tasks_)._Mypair._Myval2._Mylast,
     pfVar10 != (this->temp_tasks_)._Mypair._Myval2._Myfirst)) {
    do {
      if (*(longlong **)&pfVar10[-1].field_0x38 != (longlong *)0x0) {
        (**(code **)(**(longlong **)&pfVar10[-1].field_0x38 + 0x10))();
      }
      pfVar10 = pfVar10 + -1;
    } while (pfVar10 != (this->temp_tasks_)._Mypair._Myval2._Myfirst);
  }
  pfVar10 = (this->temp_tasks_)._Mypair._Myval2._Mylast;
  pfVar5 = (this->temp_tasks_)._Mypair._Myval2._Myfirst;
  if (pfVar5 != pfVar10) {
    do {
      pfVar8 = *(function<void___cdecl(void)> **)&pfVar5->field_0x38;
      if (pfVar8 != (function<void___cdecl(void)> *)0x0) {
        (**(code **)(*(longlong *)pfVar8 + 0x20))(pfVar8,pfVar8 != pfVar5);
        *(undefined8 *)&pfVar5->field_0x38 = 0;
      }
      pfVar5 = pfVar5 + 1;
    } while (pfVar5 != pfVar10);
    (this->temp_tasks_)._Mypair._Myval2._Mylast = (this->temp_tasks_)._Mypair._Myval2._Myfirst;
  }
  if (((bHasWarned != false) && (this->max_tasks_ != 0)) &&
     ((ulonglong)
      ((longlong)(this->temp_tasks_)._Mypair._Myval2._Myend -
      (longlong)(this->temp_tasks_)._Mypair._Myval2._Myfirst) < 0x40)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar13 * 8) + 0x9d4c) <
         `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
                ((basic_ostream<char,std::char_traits<char>_> *)
                 &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                  ::__l2::kNullStream,(basic_streambuf<char,std::char_traits<char>_> *)0x0,false);
      atexit(`NullLogger::GetStream'::__l2::_dynamic_atexit_destructor_for__kNullStream__);
      _Init_thread_footer(&`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    std::operator<<<std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)
               &`public:_class_std::basic_ostream<char,std::char_traits<char>_>&___ptr64___cdecl_NullLogger::GetStream(void)___ptr64'
                ::__l2::kNullStream,
               "std::vector::clear() on this platform has zero\'d out the temp_tasks_ capacity, (this will cause re-allocation in every ProcessTaskList call)"
              );
    bHasWarned = false;
  }
  _Mtx_unlock(&this->tasks_mutex_);
  return;
}

// PushNodeToList @ 14f0971e0

void __thiscall
vraudio::LocklessTaskQueue::PushNodeToList
          (LocklessTaskQueue *this,atomic<vraudio::LocklessTaskQueue::Node_*> *param_1,Node *param_2
          )

{
  atomic<vraudio::LocklessTaskQueue::Node_*> aVar1;
  atomic<vraudio::LocklessTaskQueue::Node_*> aVar2;
  
  do {
    aVar2 = *param_1;
    LOCK();
    param_2->next = aVar2;
    UNLOCK();
    LOCK();
    aVar1 = *param_1;
    if (aVar2 == aVar1) {
      *param_1 = (atomic<vraudio::LocklessTaskQueue::Node_*>)param_2;
    }
    UNLOCK();
  } while (aVar2 != aVar1);
  return;
}

// _Change_array @ 14f097210

void __thiscall
std::vector<std::function<void___cdecl(void)>,std::allocator<std::function<void___cdecl(void)>_>_>::
_Change_array(vector<std::function<void___cdecl(void)>,std::allocator<std::function<void___cdecl(void)>_>_>
              *this,function<void___cdecl(void)> *param_1,ulong64 param_2,ulong64 param_3)

{
  function<void___cdecl(void)> *pfVar1;
  function<void___cdecl(void)> *pfVar2;
  ulong64 uVar3;
  function<void___cdecl(void)> *pfVar4;
  
  pfVar4 = (this->_Mypair)._Myval2._Myfirst;
  if (pfVar4 != (function<void___cdecl(void)> *)0x0) {
    pfVar2 = (this->_Mypair)._Myval2._Mylast;
    for (; pfVar4 != pfVar2; pfVar4 = pfVar4 + 1) {
      pfVar1 = *(function<void___cdecl(void)> **)&pfVar4->field_0x38;
      if (pfVar1 != (function<void___cdecl(void)> *)0x0) {
        (**(code **)(*(longlong *)pfVar1 + 0x20))(pfVar1,pfVar1 != pfVar4);
        *(undefined8 *)&pfVar4->field_0x38 = 0;
      }
    }
    pfVar4 = (this->_Mypair)._Myval2._Myfirst;
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)pfVar4 & 0xffffffffffffffc0;
    pfVar2 = pfVar4;
    if (0xfff < uVar3) {
      pfVar2 = *(function<void___cdecl(void)> **)&pfVar4[-1].field_0x38;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pfVar4 + (-8 - (longlong)pfVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pfVar2,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Reset_move @ 14f097300

void __thiscall
std::_Func_class<void>::_Reset_move(_Func_class<void> *this,_Func_class<void> *param_1)

{
  _Func_base<void> *p_Var1;
  
  p_Var1 = (param_1->_Mystorage)._Ptrs[7];
  if (p_Var1 != (_Func_base<void> *)0x0) {
    if (p_Var1 == (_Func_base<void> *)param_1) {
      p_Var1 = (_Func_base<void> *)(**(code **)(*(longlong *)&p_Var1->field_0x0 + 8))(p_Var1,this);
      (this->_Mystorage)._Ptrs[7] = p_Var1;
      p_Var1 = (param_1->_Mystorage)._Ptrs[7];
      if (p_Var1 != (_Func_base<void> *)0x0) {
        (*(code *)((_Storage *)&p_Var1->field_0x0)->_Ptrs[0][4])
                  (p_Var1,p_Var1 != (_Func_base<void> *)param_1);
        (param_1->_Mystorage)._Ptrs[7] = (_Func_base<void> *)0x0;
        return;
      }
    }
    else {
      (this->_Mystorage)._Ptrs[7] = p_Var1;
      (param_1->_Mystorage)._Ptrs[7] = (_Func_base<void> *)0x0;
    }
  }
  return;
}

// _Xlength @ 14f097370

void __cdecl
std::vector<vraudio::LocklessTaskQueue::Node,std::allocator<vraudio::LocklessTaskQueue::Node>_>::
_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 14f097390

void __cdecl
std::vector<std::function<void___cdecl(void)>,std::allocator<std::function<void___cdecl(void)>_>_>::
_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}


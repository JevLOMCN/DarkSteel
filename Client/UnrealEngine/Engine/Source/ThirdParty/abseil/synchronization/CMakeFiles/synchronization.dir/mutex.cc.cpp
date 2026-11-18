// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 144

// AlwaysTrue @ 1501ee230

/* private: static bool __cdecl absl::lts_20240722::Condition::AlwaysTrue(class
   absl::lts_20240722::Condition const * __ptr64) */

bool __cdecl absl::lts_20240722::Condition::AlwaysTrue(Condition *param_1)

{
  return true;
}

// DummyFunction @ 1501ee240

/* private: static void __cdecl absl::lts_20240722::base_internal::AtomicHook<void
   (__cdecl*)(__int64)>::DummyFunction(__int64) */

void __cdecl
absl::lts_20240722::base_internal::AtomicHook<void_(__cdecl*)(__int64)>::DummyFunction
          (__int64 param_1)

{
  return;
}

// DummyFunction @ 1501ee250

/* private: static void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(char
   const * __ptr64,void const * __ptr64,__int64)>::DummyFunction(char const * __ptr64,void const *
   __ptr64,__int64) */

void __cdecl
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64,__int64)>::DummyFunction
          (char *param_1,void *param_2,__int64 param_3)

{
  return;
}

// DummyFunction @ 1501ee260

/* private: static void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(char
   const * __ptr64,void const * __ptr64)>::DummyFunction(char const * __ptr64,void const * __ptr64)
    */

void __cdecl
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64)>::DummyFunction
          (char *param_1,void *param_2)

{
  return;
}

// Condition<absl::lts_20240722::SynchEvent> @ 1501ee270

/* public: __cdecl absl::lts_20240722::Condition::Condition<struct
   absl::lts_20240722::SynchEvent>(bool (__cdecl*)(struct absl::lts_20240722::SynchEvent *
   __ptr64),struct absl::lts_20240722::SynchEvent * __ptr64) __ptr64 */

Condition * __thiscall
absl::lts_20240722::Condition::Condition<absl::lts_20240722::SynchEvent>
          (Condition *this,_func_bool_SynchEvent_ptr *param_1,SynchEvent *param_2)

{
  this->callback_[8] = '\0';
  this->callback_[9] = '\0';
  this->callback_[10] = '\0';
  this->callback_[0xb] = '\0';
  this->callback_[0xc] = '\0';
  this->callback_[0xd] = '\0';
  this->callback_[0xe] = '\0';
  this->callback_[0xf] = '\0';
  this->callback_[0x10] = '\0';
  this->callback_[0x11] = '\0';
  this->callback_[0x12] = '\0';
  this->callback_[0x13] = '\0';
  this->callback_[0x14] = '\0';
  this->callback_[0x15] = '\0';
  this->callback_[0x16] = '\0';
  this->callback_[0x17] = '\0';
  this->eval_ = CastAndCallFunction<absl::lts_20240722::SynchEvent>;
  this->arg_ = param_2;
  *(_func_bool_SynchEvent_ptr **)this->callback_ = param_1;
  return this;
}

// operator*<int> @ 1501ee2a0

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::operator*<int>(class
   absl::lts_20240722::Duration,int) */

Duration * __cdecl
absl::lts_20240722::operator*<int>(Duration *__return_storage_ptr__,Duration *param_1,int param_2)

{
  uint uVar1;
  Duration *pDVar2;
  
  pDVar2 = Duration::operator*=(param_1,(longlong)param_2);
  uVar1 = pDVar2->rep_lo_;
  __return_storage_ptr__->rep_hi_ = pDVar2->rep_hi_;
  __return_storage_ptr__->rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// operator()<char_const_(&___ptr64)[5],absl::lts_20240722::CondVar*___ptr64> @ 1501ee2e0

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(char const *
   __ptr64,void const * __ptr64)>::operator()<char const (& __ptr64)[5],class
   absl::lts_20240722::CondVar * __ptr64>(char const (& __ptr64)[5],class
   absl::lts_20240722::CondVar * __ptr64 && __ptr64)const __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64)>::
operator()<char_const_(&___ptr64)[5],absl::lts_20240722::CondVar*___ptr64>
          (AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64)> *this,char *param_1,
          CondVar **param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)this;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001501ee2f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,*param_2);
  return;
}

// operator()<char_const_(&___ptr64)[7],absl::lts_20240722::CondVar*___ptr64> @ 1501ee300

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(char const *
   __ptr64,void const * __ptr64)>::operator()<char const (& __ptr64)[7],class
   absl::lts_20240722::CondVar * __ptr64>(char const (& __ptr64)[7],class
   absl::lts_20240722::CondVar * __ptr64 && __ptr64)const __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64)>::
operator()<char_const_(&___ptr64)[7],absl::lts_20240722::CondVar*___ptr64>
          (AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64)> *this,char *param_1,
          CondVar **param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)this;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001501ee316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,*param_2);
  return;
}

// operator()<char_const_(&___ptr64)[17],absl::lts_20240722::CondVar*___ptr64> @ 1501ee320

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(char const *
   __ptr64,void const * __ptr64)>::operator()<char const (& __ptr64)[17],class
   absl::lts_20240722::CondVar * __ptr64>(char const (& __ptr64)[17],class
   absl::lts_20240722::CondVar * __ptr64 && __ptr64)const __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64)>::
operator()<char_const_(&___ptr64)[17],absl::lts_20240722::CondVar*___ptr64>
          (AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64)> *this,char *param_1,
          CondVar **param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)this;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001501ee336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,*param_2);
  return;
}

// operator()<char_const_(&___ptr64)[13],absl::lts_20240722::Mutex*___ptr64,__int64&___ptr64> @ 1501ee340

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(char const *
   __ptr64,void const * __ptr64,__int64)>::operator()<char const (& __ptr64)[13],class
   absl::lts_20240722::Mutex * __ptr64,__int64 & __ptr64>(char const (& __ptr64)[13],class
   absl::lts_20240722::Mutex * __ptr64 && __ptr64,__int64 & __ptr64)const __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64,__int64)>::
operator()<char_const_(&___ptr64)[13],absl::lts_20240722::Mutex*___ptr64,__int64&___ptr64>
          (AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64,__int64)> *this,
          char *param_1,Mutex **param_2,__int64 *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)this;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001501ee35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,*param_2,*param_3);
  return;
}

// operator()<char_const_(&___ptr64)[14],absl::lts_20240722::CondVar*___ptr64> @ 1501ee370

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(char const *
   __ptr64,void const * __ptr64)>::operator()<char const (& __ptr64)[14],class
   absl::lts_20240722::CondVar * __ptr64>(char const (& __ptr64)[14],class
   absl::lts_20240722::CondVar * __ptr64 && __ptr64)const __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64)>::
operator()<char_const_(&___ptr64)[14],absl::lts_20240722::CondVar*___ptr64>
          (AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64)> *this,char *param_1,
          CondVar **param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)this;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001501ee386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,*param_2);
  return;
}

// operator()<__int64&___ptr64> @ 1501ee390

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void
   (__cdecl*)(__int64)>::operator()<__int64 & __ptr64>(__int64 & __ptr64)const __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::AtomicHook<void_(__cdecl*)(__int64)>::
operator()<__int64&___ptr64>(AtomicHook<void_(__cdecl*)(__int64)> *this,__int64 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)this;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001501ee3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_1);
  return;
}

// FUN_1501ee3b0 @ 1501ee3b0

void FUN_1501ee3b0(atomic<unsigned_int> *param_1,SchedulingMode param_2,undefined8 param_3)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  
  LOCK();
  aVar1 = *param_1;
  if (aVar1 == (atomic<unsigned_int>)0x0) {
    *param_1 = (atomic<unsigned_int>)0x65c2937b;
  }
  UNLOCK();
  if ((aVar1 != (atomic<unsigned_int>)0x0) &&
     (uVar2 = absl::lts_20240722::base_internal::SpinLockWait
                        (param_1,3,(SpinLockWaitTransition *)&DAT_1536f5db8,param_2), uVar2 != 0)) {
    return;
  }
  FUN_1501ee8e0(param_3);
  LOCK();
  aVar1 = *param_1;
  *param_1 = (atomic<unsigned_int>)0xdd;
  UNLOCK();
  if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
    AbslInternalSpinLockWake_lts_20240722(param_1,1);
  }
  return;
}

// CastAndCallFunction<absl::lts_20240722::SynchEvent> @ 1501ee420

/* private: static bool __cdecl absl::lts_20240722::Condition::CastAndCallFunction<struct
   absl::lts_20240722::SynchEvent>(class absl::lts_20240722::Condition const * __ptr64) */

bool __cdecl
absl::lts_20240722::Condition::CastAndCallFunction<absl::lts_20240722::SynchEvent>
          (Condition *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501ee427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1->callback_)(param_1->arg_);
  return (bool)uVar1;
}

// HidePtr<void_const_> @ 1501ee430

/* unsigned __int64 __cdecl absl::lts_20240722::base_internal::HidePtr<void const >(void const *
   __ptr64) */

__uint64 __cdecl absl::lts_20240722::base_internal::HidePtr<void_const_>(void *param_1)

{
  return (ulonglong)param_1 ^ 0xf03a5f7bf03a5f7b;
}

// HidePtr<std::atomic<__int64>_> @ 1501ee450

/* unsigned __int64 __cdecl absl::lts_20240722::base_internal::HidePtr<struct std::atomic<__int64>
   >(struct std::atomic<__int64> * __ptr64) */

__uint64 __cdecl
absl::lts_20240722::base_internal::HidePtr<std::atomic<__int64>_>(atomic<__int64> *param_1)

{
  return (ulonglong)param_1 ^ 0xf03a5f7bf03a5f7b;
}

// FUN_1501ee470 @ 1501ee470

void FUN_1501ee470(atomic<unsigned_int> *param_1,undefined8 param_2)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  
  if (*param_1 != (atomic<unsigned_int>)0xdd) {
    LOCK();
    aVar1 = *param_1;
    if (aVar1 == (atomic<unsigned_int>)0x0) {
      *param_1 = (atomic<unsigned_int>)0x65c2937b;
    }
    UNLOCK();
    if ((aVar1 != (atomic<unsigned_int>)0x0) &&
       (uVar2 = absl::lts_20240722::base_internal::SpinLockWait
                          (param_1,3,(SpinLockWaitTransition *)&DAT_1536f5db8,SCHEDULE_KERNEL_ONLY),
       uVar2 != 0)) {
      return;
    }
    FUN_1501ee8e0(param_2);
    LOCK();
    aVar1 = *param_1;
    *param_1 = (atomic<unsigned_int>)0xdd;
    UNLOCK();
    if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
      AbslInternalSpinLockWake_lts_20240722(param_1,1);
    }
  }
  return;
}

// ReadCallback<bool_(__cdecl*)(absl::lts_20240722::SynchEvent*___ptr64)> @ 1501ee4f0

/* private: void __cdecl absl::lts_20240722::Condition::ReadCallback<bool (__cdecl*)(struct
   absl::lts_20240722::SynchEvent * __ptr64)>(bool (__cdecl** __ptr64)(struct
   absl::lts_20240722::SynchEvent * __ptr64))const __ptr64 */

void __thiscall
absl::lts_20240722::Condition::
ReadCallback<bool_(__cdecl*)(absl::lts_20240722::SynchEvent*___ptr64)>
          (Condition *this,_func_bool_SynchEvent_ptr **param_1)

{
  *param_1 = *(_func_bool_SynchEvent_ptr **)this->callback_;
  return;
}

// StoreCallback<bool_(__cdecl*)(absl::lts_20240722::SynchEvent*___ptr64)> @ 1501ee500

/* private: void __cdecl absl::lts_20240722::Condition::StoreCallback<bool (__cdecl*)(struct
   absl::lts_20240722::SynchEvent * __ptr64)>(bool (__cdecl*)(struct absl::lts_20240722::SynchEvent
   * __ptr64)) __ptr64 */

void __thiscall
absl::lts_20240722::Condition::
StoreCallback<bool_(__cdecl*)(absl::lts_20240722::SynchEvent*___ptr64)>
          (Condition *this,_func_bool_SynchEvent_ptr *param_1)

{
  *(_func_bool_SynchEvent_ptr **)this->callback_ = param_1;
  return;
}

// StoreCallback<bool_(__cdecl*)(void*___ptr64)> @ 1501ee510

/* private: void __cdecl absl::lts_20240722::Condition::StoreCallback<bool (__cdecl*)(void *
   __ptr64)>(bool (__cdecl*)(void * __ptr64)) __ptr64 */

void __thiscall
absl::lts_20240722::Condition::StoreCallback<bool_(__cdecl*)(void*___ptr64)>
          (Condition *this,_func_bool_void_ptr *param_1)

{
  *(_func_bool_void_ptr **)this->callback_ = param_1;
  return;
}

// _Atomic_address_as<int,std::_Atomic_padded<absl::lts_20240722::OnDeadlockCycle>_> @ 1501ee520

/* int volatile * __ptr64 __cdecl std::_Atomic_address_as<int,struct std::_Atomic_padded<enum
   absl::lts_20240722::OnDeadlockCycle> >(struct std::_Atomic_padded<enum
   absl::lts_20240722::OnDeadlockCycle> & __ptr64) */

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<absl::lts_20240722::OnDeadlockCycle>_>
          (_Atomic_padded<absl::lts_20240722::OnDeadlockCycle> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<absl::lts_20240722::OnDeadlockCycle>_> @ 1501ee530

/* int const volatile * __ptr64 __cdecl std::_Atomic_address_as<int,struct std::_Atomic_padded<enum
   absl::lts_20240722::OnDeadlockCycle> >(struct std::_Atomic_padded<enum
   absl::lts_20240722::OnDeadlockCycle> const & __ptr64) */

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<absl::lts_20240722::OnDeadlockCycle>_>
          (_Atomic_padded<absl::lts_20240722::OnDeadlockCycle> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<absl::lts_20240722::base_internal::PerThreadSynch::State>_> @ 1501ee540

/* int volatile * __ptr64 __cdecl std::_Atomic_address_as<int,struct std::_Atomic_padded<enum
   absl::lts_20240722::base_internal::PerThreadSynch::State> >(struct std::_Atomic_padded<enum
   absl::lts_20240722::base_internal::PerThreadSynch::State> & __ptr64) */

int * __cdecl
std::
_Atomic_address_as<int,std::_Atomic_padded<absl::lts_20240722::base_internal::PerThreadSynch::State>_>
          (_Atomic_padded<absl::lts_20240722::base_internal::PerThreadSynch::State> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<absl::lts_20240722::base_internal::PerThreadSynch::State>_> @ 1501ee550

/* int const volatile * __ptr64 __cdecl std::_Atomic_address_as<int,struct std::_Atomic_padded<enum
   absl::lts_20240722::base_internal::PerThreadSynch::State> >(struct std::_Atomic_padded<enum
   absl::lts_20240722::base_internal::PerThreadSynch::State> const & __ptr64) */

int * __cdecl
std::
_Atomic_address_as<int,std::_Atomic_padded<absl::lts_20240722::base_internal::PerThreadSynch::State>_>
          (_Atomic_padded<absl::lts_20240722::base_internal::PerThreadSynch::State> *param_1)

{
  return (int *)param_1;
}

// _Atomic_reinterpret_as<int,absl::lts_20240722::OnDeadlockCycle> @ 1501ee560

/* int __cdecl std::_Atomic_reinterpret_as<int,enum absl::lts_20240722::OnDeadlockCycle>(enum
   absl::lts_20240722::OnDeadlockCycle const & __ptr64) */

int __cdecl
std::_Atomic_reinterpret_as<int,absl::lts_20240722::OnDeadlockCycle>(OnDeadlockCycle *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<int,absl::lts_20240722::base_internal::PerThreadSynch::State> @ 1501ee570

/* int __cdecl std::_Atomic_reinterpret_as<int,enum
   absl::lts_20240722::base_internal::PerThreadSynch::State>(enum
   absl::lts_20240722::base_internal::PerThreadSynch::State const & __ptr64) */

int __cdecl
std::_Atomic_reinterpret_as<int,absl::lts_20240722::base_internal::PerThreadSynch::State>
          (State *param_1)

{
  return *param_1;
}

// addressof<absl::lts_20240722::OnDeadlockCycle_const_> @ 1501ee580

/* enum absl::lts_20240722::OnDeadlockCycle const * __ptr64 __cdecl std::addressof<enum
   absl::lts_20240722::OnDeadlockCycle const >(enum absl::lts_20240722::OnDeadlockCycle const &
   __ptr64) */

OnDeadlockCycle * __cdecl
std::addressof<absl::lts_20240722::OnDeadlockCycle_const_>(OnDeadlockCycle *param_1)

{
  return param_1;
}

// addressof<absl::lts_20240722::base_internal::PerThreadSynch::State_const_> @ 1501ee590

/* enum absl::lts_20240722::base_internal::PerThreadSynch::State const * __ptr64 __cdecl
   std::addressof<enum absl::lts_20240722::base_internal::PerThreadSynch::State const >(enum
   absl::lts_20240722::base_internal::PerThreadSynch::State const & __ptr64) */

State * __cdecl
std::addressof<absl::lts_20240722::base_internal::PerThreadSynch::State_const_>(State *param_1)

{
  return param_1;
}

// forward<char_const_(&___ptr64)[5]> @ 1501ee5a0

/* char const (& __ptr64 __cdecl std::forward<char const (& __ptr64)[5]>(char const (&
   __ptr64)[5]))[5] */

char * __cdecl std::forward<char_const_(&___ptr64)[5]>(char *param_1)

{
  return param_1;
}

// forward<char_const_(&___ptr64)[7]> @ 1501ee5b0

/* char const (& __ptr64 __cdecl std::forward<char const (& __ptr64)[7]>(char const (&
   __ptr64)[7]))[7] */

char * __cdecl std::forward<char_const_(&___ptr64)[7]>(char *param_1)

{
  return param_1;
}

// forward<char_const_(&___ptr64)[17]> @ 1501ee5c0

/* char const (& __ptr64 __cdecl std::forward<char const (& __ptr64)[17]>(char const (&
   __ptr64)[17]))[17] */

char * __cdecl std::forward<char_const_(&___ptr64)[17]>(char *param_1)

{
  return param_1;
}

// forward<char_const_(&___ptr64)[13]> @ 1501ee5d0

/* char const (& __ptr64 __cdecl std::forward<char const (& __ptr64)[13]>(char const (&
   __ptr64)[13]))[13] */

char * __cdecl std::forward<char_const_(&___ptr64)[13]>(char *param_1)

{
  return param_1;
}

// forward<char_const_(&___ptr64)[14]> @ 1501ee5e0

/* char const (& __ptr64 __cdecl std::forward<char const (& __ptr64)[14]>(char const (&
   __ptr64)[14]))[14] */

char * __cdecl std::forward<char_const_(&___ptr64)[14]>(char *param_1)

{
  return param_1;
}

// forward<absl::lts_20240722::CondVar*___ptr64> @ 1501ee5f0

/* class absl::lts_20240722::CondVar * __ptr64 && __ptr64 __cdecl std::forward<class
   absl::lts_20240722::CondVar * __ptr64>(class absl::lts_20240722::CondVar * __ptr64 & __ptr64) */

CondVar ** __cdecl std::forward<absl::lts_20240722::CondVar*___ptr64>(CondVar **param_1)

{
  return param_1;
}

// forward<absl::lts_20240722::Mutex*___ptr64> @ 1501ee600

/* class absl::lts_20240722::Mutex * __ptr64 && __ptr64 __cdecl std::forward<class
   absl::lts_20240722::Mutex * __ptr64>(class absl::lts_20240722::Mutex * __ptr64 & __ptr64) */

Mutex ** __cdecl std::forward<absl::lts_20240722::Mutex*___ptr64>(Mutex **param_1)

{
  return param_1;
}

// max<absl::lts_20240722::Duration> @ 1501ee630

/* class absl::lts_20240722::Duration const & __ptr64 __cdecl std::max<class
   absl::lts_20240722::Duration>(class absl::lts_20240722::Duration const & __ptr64,class
   absl::lts_20240722::Duration const & __ptr64) */

Duration * __cdecl std::max<absl::lts_20240722::Duration>(Duration *param_1,Duration *param_2)

{
  if (param_1->rep_hi_ != param_2->rep_hi_) {
    if ((longlong)param_1->rep_hi_ < (longlong)param_2->rep_hi_) {
      param_1 = param_2;
    }
    return param_1;
  }
  if (param_1->rep_hi_ == (HiRep)0x8000000000000000) {
    if (param_1->rep_lo_ + 1 < param_2->rep_lo_ + 1) {
      param_1 = param_2;
    }
    return param_1;
  }
  if (param_1->rep_lo_ < param_2->rep_lo_) {
    param_1 = param_2;
  }
  return param_1;
}

// Condition @ 1501ee720

/* public: __cdecl absl::lts_20240722::Condition::Condition(bool (__cdecl*)(void * __ptr64),void *
   __ptr64) __ptr64 */

Condition * __thiscall
absl::lts_20240722::Condition::Condition(Condition *this,_func_bool_void_ptr *param_1,void *param_2)

{
  this->callback_[8] = '\0';
  this->callback_[9] = '\0';
  this->callback_[10] = '\0';
  this->callback_[0xb] = '\0';
  this->callback_[0xc] = '\0';
  this->callback_[0xd] = '\0';
  this->callback_[0xe] = '\0';
  this->callback_[0xf] = '\0';
  this->callback_[0x10] = '\0';
  this->callback_[0x11] = '\0';
  this->callback_[0x12] = '\0';
  this->callback_[0x13] = '\0';
  this->callback_[0x14] = '\0';
  this->callback_[0x15] = '\0';
  this->callback_[0x16] = '\0';
  this->callback_[0x17] = '\0';
  this->eval_ = CallVoidPtrFunction;
  this->arg_ = param_2;
  *(_func_bool_void_ptr **)this->callback_ = param_1;
  return this;
}

// Condition @ 1501ee750

/* public: __cdecl absl::lts_20240722::Condition::Condition(bool const * __ptr64) __ptr64 */

Condition * __thiscall absl::lts_20240722::Condition::Condition(Condition *this,bool *param_1)

{
  this->callback_[8] = '\0';
  this->callback_[9] = '\0';
  this->callback_[10] = '\0';
  this->callback_[0xb] = '\0';
  this->callback_[0xc] = '\0';
  this->callback_[0xd] = '\0';
  this->callback_[0xe] = '\0';
  this->callback_[0xf] = '\0';
  this->callback_[0x10] = '\0';
  this->callback_[0x11] = '\0';
  this->callback_[0x12] = '\0';
  this->callback_[0x13] = '\0';
  this->callback_[0x14] = '\0';
  this->callback_[0x15] = '\0';
  this->callback_[0x16] = '\0';
  this->callback_[0x17] = '\0';
  this->eval_ = CallVoidPtrFunction;
  *(undefined1 **)this->callback_ = &LAB_1501ef810;
  this->arg_ = param_1;
  return this;
}

// KernelTimeout @ 1501ee780

/* public: __cdecl absl::lts_20240722::synchronization_internal::KernelTimeout::KernelTimeout(void)
   __ptr64 */

KernelTimeout * __thiscall
absl::lts_20240722::synchronization_internal::KernelTimeout::KernelTimeout(KernelTimeout *this)

{
  this->rep_ = 0xffffffffffffffff;
  return this;
}

// FUN_1501ee7a0 @ 1501ee7a0

undefined8 * FUN_1501ee7a0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = absl::lts_20240722::base_internal::LowLevelAlloc::Alloc(0x1828);
  *param_1 = pvVar1;
  return param_1;
}

// ScopedDisable @ 1501ee7d0

/* public: __cdecl
   absl::lts_20240722::base_internal::SchedulingGuard::ScopedDisable::ScopedDisable(void) __ptr64 */

ScopedDisable * __thiscall
absl::lts_20240722::base_internal::SchedulingGuard::ScopedDisable::ScopedDisable
          (ScopedDisable *this)

{
  *this = (ScopedDisable)0x0;
  return this;
}

// ScopedEnable @ 1501ee7e0

/* public: __cdecl
   absl::lts_20240722::base_internal::SchedulingGuard::ScopedEnable::ScopedEnable(void) __ptr64 */

ScopedEnable * __thiscall
absl::lts_20240722::base_internal::SchedulingGuard::ScopedEnable::ScopedEnable(ScopedEnable *this)

{
  *(undefined4 *)this = 0;
  return this;
}

// SynchWaitParams @ 1501ee7f0

/* public: __cdecl absl::lts_20240722::SynchWaitParams::SynchWaitParams(struct
   absl::lts_20240722::MuHowS const * __ptr64,class absl::lts_20240722::Condition const *
   __ptr64,class absl::lts_20240722::synchronization_internal::KernelTimeout,class
   absl::lts_20240722::Mutex * __ptr64,struct absl::lts_20240722::base_internal::PerThreadSynch *
   __ptr64,struct std::atomic<__int64> * __ptr64) __ptr64 */

SynchWaitParams * __thiscall
absl::lts_20240722::SynchWaitParams::SynchWaitParams
          (SynchWaitParams *this,MuHowS *param_1,Condition *param_2,KernelTimeout param_3,
          Mutex *param_4,PerThreadSynch *param_5,atomic<__int64> *param_6)

{
  __int64 _Var1;
  
  *(Mutex **)(this + 0x18) = param_4;
  *(PerThreadSynch **)(this + 0x20) = param_5;
  *(atomic<__int64> **)(this + 0x28) = param_6;
  *(MuHowS **)this = param_1;
  *(Condition **)(this + 8) = param_2;
  *(ulong64 *)(this + 0x10) = param_3.rep_;
  _Var1 = base_internal::CycleClock::Now();
  *(__int64 *)(this + 0x30) = _Var1;
  this[0x38] = (SynchWaitParams)0x0;
  return this;
}

// FUN_1501ee840 @ 1501ee840

void FUN_1501ee840(undefined8 *param_1)

{
  absl::lts_20240722::base_internal::LowLevelAlloc::Free((void *)*param_1);
  return;
}

// ~ScopedDisable @ 1501ee860

/* public: __cdecl
   absl::lts_20240722::base_internal::SchedulingGuard::ScopedDisable::~ScopedDisable(void) __ptr64
    */

void __thiscall
absl::lts_20240722::base_internal::SchedulingGuard::ScopedDisable::~ScopedDisable
          (ScopedDisable *this)

{
  return;
}

// ~ScopedEnable @ 1501ee870

/* public: __cdecl
   absl::lts_20240722::base_internal::SchedulingGuard::ScopedEnable::~ScopedEnable(void) __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::SchedulingGuard::ScopedEnable::~ScopedEnable(ScopedEnable *this)

{
  if (*(int *)this != 0) {
                    /* WARNING: Subroutine does not return */
    raw_log_internal::RawLog
              (kFatal,"low_level_scheduling.h",0x7f,"Check %s failed: %s",
               "scheduling_disabled_depth_ == 0","disable unused warning");
  }
  return;
}

// operator== @ 1501ee8c0

/* public: bool __cdecl absl::lts_20240722::synchronization_internal::GraphId::operator==(struct
   absl::lts_20240722::synchronization_internal::GraphId const & __ptr64)const __ptr64 */

bool __thiscall
absl::lts_20240722::synchronization_internal::GraphId::operator==(GraphId *this,GraphId *param_1)

{
  return *(longlong *)this == *(longlong *)param_1;
}

// operator!= @ 1501ee8d0

/* public: bool __cdecl absl::lts_20240722::synchronization_internal::GraphId::operator!=(struct
   absl::lts_20240722::synchronization_internal::GraphId const & __ptr64)const __ptr64 */

bool __thiscall
absl::lts_20240722::synchronization_internal::GraphId::operator!=(GraphId *this,GraphId *param_1)

{
  return *(longlong *)this != *(longlong *)param_1;
}

// FUN_1501ee8e0 @ 1501ee8e0

/* WARNING: Removing unreachable block (ram,0x0001501eea49) */
/* WARNING: Removing unreachable block (ram,0x0001501eeae7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1501ee8e0(void)

{
  int iVar1;
  HiRep *pHVar2;
  Duration *pDVar3;
  bool bVar4;
  Time local_58;
  Duration local_48;
  Duration local_38;
  Duration local_28;
  Time local_18;
  
  iVar1 = absl::lts_20240722::base_internal::NumCPUs();
  if (1 < iVar1) {
    DAT_1554077d0 = (HiRep)0x0;
    _DAT_1554077c8 = 0xfa00001388;
    DAT_1554077d8 = 40000;
    return;
  }
  _DAT_1554077c8 = 0;
  absl::lts_20240722::Now(&local_58);
  _Thrd_yield();
  pHVar2 = (HiRep *)absl::lts_20240722::Now(&local_18);
  local_48.rep_lo_ = local_58.rep_.rep_lo_;
  local_38.rep_hi_ = *pHVar2;
  local_38.rep_lo_ = pHVar2[1].lo_;
  local_48.rep_hi_ = local_58.rep_.rep_hi_;
  pDVar3 = absl::lts_20240722::Duration::operator-=(&local_38,&local_48);
  local_28.rep_hi_ = pDVar3->rep_hi_;
  local_28.rep_lo_ = pDVar3->rep_lo_;
  pDVar3 = absl::lts_20240722::Duration::operator*=(&local_28,5);
  local_48.rep_lo_ = 4000000;
  local_48.rep_hi_.lo_ = 0;
  local_48.rep_hi_.hi_ = 0;
  local_38.rep_hi_ = pDVar3->rep_hi_;
  if (local_38.rep_hi_ == (HiRep)0x0) {
    bVar4 = 4000000 < pDVar3->rep_lo_;
  }
  else {
    bVar4 = 0 < (longlong)local_38.rep_hi_;
  }
  local_38.rep_lo_ = 40000;
  pDVar3 = &local_48;
  if (!bVar4) {
    pDVar3 = (Duration *)&DAT_1554077d0;
  }
  local_38.rep_hi_.lo_ = 0;
  local_38.rep_hi_.hi_ = 0;
  local_28.rep_hi_ = pDVar3->rep_hi_;
  if (local_28.rep_hi_ == (HiRep)0x0) {
    bVar4 = pDVar3->rep_lo_ < 40000;
  }
  else {
    bVar4 = (longlong)local_28.rep_hi_ < 0;
  }
  pDVar3 = &local_38;
  if (!bVar4) {
    pDVar3 = (Duration *)&DAT_1554077d0;
  }
  DAT_1554077d0 = pDVar3->rep_hi_;
  DAT_1554077d8 = pDVar3->rep_lo_;
  return;
}

// AbslInternalAnnotateIgnoreReadsBegin_lts_20240722 @ 1501eeb40

/* void __cdecl AbslInternalAnnotateIgnoreReadsBegin_lts_20240722(void) */

void __cdecl AbslInternalAnnotateIgnoreReadsBegin_lts_20240722(void)

{
  return;
}

// AbslInternalAnnotateIgnoreReadsEnd_lts_20240722 @ 1501eeb50

/* void __cdecl AbslInternalAnnotateIgnoreReadsEnd_lts_20240722(void) */

void __cdecl AbslInternalAnnotateIgnoreReadsEnd_lts_20240722(void)

{
  return;
}

// AssertHeld @ 1501eeb60

/* public: void __cdecl absl::lts_20240722::Mutex::AssertHeld(void)const __ptr64 */

void __thiscall absl::lts_20240722::Mutex::AssertHeld(Mutex *this)

{
  longlong lVar1;
  char *pcVar2;
  
  if (((ulonglong)this->mu_ & 8) == 0) {
    lVar1 = FUN_1501f0520();
    if (lVar1 == 0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)(lVar1 + 0x29);
    }
                    /* WARNING: Subroutine does not return */
    raw_log_internal::RawLog
              (kFatal,"mutex.cc",0x9aa,"thread should hold write lock on Mutex %p %s",this,pcVar2);
  }
  return;
}

// AssertNotHeld @ 1501eebc0

/* public: void __cdecl absl::lts_20240722::Mutex::AssertNotHeld(void)const __ptr64 */

void __thiscall absl::lts_20240722::Mutex::AssertNotHeld(Mutex *this)

{
  return;
}

// AssertReaderHeld @ 1501eebd0

/* public: void __cdecl absl::lts_20240722::Mutex::AssertReaderHeld(void)const __ptr64 */

void __thiscall absl::lts_20240722::Mutex::AssertReaderHeld(Mutex *this)

{
  longlong lVar1;
  char *pcVar2;
  
  if (((ulonglong)this->mu_ & 9) == 0) {
    lVar1 = FUN_1501f0520();
    if (lVar1 == 0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)(lVar1 + 0x29);
    }
                    /* WARNING: Subroutine does not return */
    raw_log_internal::RawLog
              (kFatal,"mutex.cc",0x9b3,"thread should hold at least a read lock on Mutex %p %s",this
               ,pcVar2);
  }
  return;
}

// AwaitCommon @ 1501eec70

/* private: bool __cdecl absl::lts_20240722::Mutex::AwaitCommon(class absl::lts_20240722::Condition
   const & __ptr64,class absl::lts_20240722::synchronization_internal::KernelTimeout) __ptr64 */

bool __thiscall
absl::lts_20240722::Mutex::AwaitCommon(Mutex *this,Condition *param_1,KernelTimeout param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *local_48;
  Condition *local_40;
  ulong64 local_38;
  undefined8 local_30;
  ThreadIdentity *local_28;
  undefined8 local_20;
  __int64 local_18;
  undefined1 local_10;
  
  bVar2 = (*param_1->eval_)(param_1);
  if (!bVar2) {
    puVar3 = &DAT_1536f5210;
    if (((ulonglong)this->mu_ & 8) != 0) {
      puVar3 = &DAT_1536f5238;
    }
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    local_28 = *(ThreadIdentity **)(lVar1 + 0x9e78);
    if (local_28 == (ThreadIdentity *)0x0) {
      local_28 = synchronization_internal::CreateThreadIdentity();
    }
    local_30 = 0;
    local_20 = 0;
    local_48 = puVar3;
    local_40 = param_1;
    local_38 = param_2.rep_;
    local_18 = base_internal::CycleClock::Now();
    local_10 = 0;
    UnlockSlow(this,(SynchWaitParams *)&local_48);
    Block(this,&local_28->per_thread_synch);
    LockSlowLoop(this,(SynchWaitParams *)&local_48,3);
    if ((local_40 == (Condition *)0x0) && (bVar2 = (*param_1->eval_)(param_1), !bVar2)) {
      if (param_2.rep_ != 0xffffffffffffffff) {
        return false;
      }
                    /* WARNING: Subroutine does not return */
      raw_log_internal::RawLog
                (kFatal,"mutex.cc",0x63e,"Check %s failed: %s","res || t.has_timeout()",
                 "condition untrue on return from Await");
    }
  }
  return true;
}

// Block @ 1501eedd0

/* private: void __cdecl absl::lts_20240722::Mutex::Block(struct
   absl::lts_20240722::base_internal::PerThreadSynch * __ptr64) __ptr64 */

void __thiscall absl::lts_20240722::Mutex::Block(Mutex *this,PerThreadSynch *param_1)

{
  atomic<absl::lts_20240722::base_internal::PerThreadSynch::State> aVar1;
  int iVar2;
  PerThreadSynch *pPVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_28;
  undefined4 local_20;
  
  aVar1 = param_1->state;
  while (aVar1 == (atomic<absl::lts_20240722::base_internal::PerThreadSynch::State>)0x1) {
    cVar4 = AbslInternalPerThreadSemWait_lts_20240722(*(undefined8 *)(param_1->waitp + 0x10));
    if (cVar4 == '\0') {
      TryRemove(this,param_1);
      pPVar3 = param_1->next;
      iVar6 = 0;
      while (pPVar3 != (PerThreadSynch *)0x0) {
        lVar5 = FUN_1501f03f0();
        iVar2 = *(int *)(lVar5 + 0xc);
        lVar5 = FUN_1501f03f0();
        if (iVar6 < iVar2) {
          iVar6 = iVar6 + 1;
        }
        else if (iVar6 == iVar2) {
          _Thrd_yield();
          iVar6 = iVar6 + 1;
        }
        else {
          local_28 = *(undefined8 *)(lVar5 + 0x10);
          local_20 = *(undefined4 *)(lVar5 + 0x18);
          AbslInternalSleepFor_lts_20240722(&local_28);
          iVar6 = 0;
        }
        TryRemove(this,param_1);
        pPVar3 = param_1->next;
      }
      *(undefined8 *)(param_1->waitp + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(param_1->waitp + 8) = 0;
    }
    aVar1 = param_1->state;
  }
  if ((param_1->waitp == (SynchWaitParams *)0x0) && (param_1->suppress_fatal_errors == false)) {
                    /* WARNING: Subroutine does not return */
    raw_log_internal::RawLog
              (kFatal,"mutex.cc",0x4aa,"Check %s failed: %s",
               "s->waitp != nullptr || s->suppress_fatal_errors",
               "detected illegal recursion in Mutex code");
  }
  param_1->waitp = (SynchWaitParams *)0x0;
  return;
}

// CallVoidPtrFunction @ 1501eef00

/* private: static bool __cdecl absl::lts_20240722::Condition::CallVoidPtrFunction(class
   absl::lts_20240722::Condition const * __ptr64) */

bool __cdecl absl::lts_20240722::Condition::CallVoidPtrFunction(Condition *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501eef07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1->callback_)(param_1->arg_);
  return (bool)uVar1;
}

// FUN_1501eef10 @ 1501eef10

void FUN_1501eef10(ulonglong param_1,undefined8 param_2)

{
  if (((param_1 ^ 4) & (ulonglong)((uint)(param_1 ^ 4) & 5) << 3) != 0) {
    if (((byte)param_1 & 9) == 9) {
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::raw_log_internal::RawLog
                (kFatal,"mutex.cc",0x7ab,
                 "Check (v & (kMuWriter | kMuReader)) != (kMuWriter | kMuReader) failed: %s: Mutex corrupt: both reader and writer lock held: %p"
                 ,param_2,param_1);
    }
    if (((byte)param_1 & 0x24) == 0x20) {
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::raw_log_internal::RawLog
                (kFatal,"mutex.cc",0x7ae,
                 "Check (v & (kMuWait | kMuWrWait)) != kMuWrWait failed: %s: Mutex corrupt: waiting writer with no waiters: %p"
                 ,param_2,param_1);
    }
  }
  return;
}

// FUN_1501eefc0 @ 1501eefc0

void FUN_1501eefc0(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 local_18;
  undefined4 local_10;
  
  puVar3 = *(ulonglong **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  iVar6 = 0;
  do {
    uVar4 = *puVar3;
    if ((uVar4 & 1) == 0) {
      LOCK();
      uVar1 = *puVar3;
      if (uVar4 == uVar1) {
        *puVar3 = uVar4 | 1;
      }
      UNLOCK();
      if (uVar4 == uVar1) {
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) == 0) {
          *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) = param_1;
          puVar7 = (undefined8 *)(uVar4 & 0xfffffffffffffffc);
          if (puVar7 == (undefined8 *)0x0) {
            *(undefined8 *)*(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
          }
          else {
            **(undefined8 **)(param_1 + 0x20) = *puVar7;
            *puVar7 = *(undefined8 *)(param_1 + 0x20);
          }
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x1c) = 1;
          *puVar3 = (ulonglong)((uint)uVar4 & 2) | *(ulonglong *)(param_1 + 0x20);
          return;
        }
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::raw_log_internal::RawLog
                  (kFatal,"mutex.cc",0xa10,"Check %s failed: %s","waitp->thread->waitp == nullptr",
                   "waiting when shouldn\'t be");
      }
    }
    lVar5 = FUN_1501f03f0();
    iVar2 = *(int *)(lVar5 + 0xc);
    lVar5 = FUN_1501f03f0();
    if (iVar6 < iVar2) {
      iVar6 = iVar6 + 1;
    }
    else if (iVar6 == iVar2) {
      _Thrd_yield();
      iVar6 = iVar6 + 1;
    }
    else {
      local_18 = *(undefined8 *)(lVar5 + 0x10);
      local_10 = *(undefined4 *)(lVar5 + 0x18);
      AbslInternalSleepFor_lts_20240722(&local_18);
      iVar6 = 0;
    }
  } while( true );
}

// FUN_1501ef0e0 @ 1501ef0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501ef0e0(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  void *local_158 [40];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  iVar1 = absl::lts_20240722::GetStackTrace(local_158,0x28,2);
  local_168 = param_3;
  FUN_1501f1bf0(local_158,iVar1,param_1,param_2);
  return;
}

// CurrentThreadIdentityIfPresent @ 1501ef170

/* struct absl::lts_20240722::base_internal::ThreadIdentity * __ptr64 __cdecl
   absl::lts_20240722::base_internal::CurrentThreadIdentityIfPresent(void) */

ThreadIdentity * __cdecl absl::lts_20240722::base_internal::CurrentThreadIdentityIfPresent(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  return *(ThreadIdentity **)(lVar1 + 0x9e78);
}

// FUN_1501ef1b0 @ 1501ef1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001501ef225) */
/* WARNING: Removing unreachable block (ram,0x0001501ef22d) */

undefined8 FUN_1501ef1b0(undefined8 param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  int *piVar6;
  GraphCycles *this;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  void *local_198;
  undefined4 *local_190;
  undefined1 local_188 [16];
  void *local_178 [40];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (DAT_154e47290 == 0) {
    uVar9 = 0;
  }
  else {
    local_1b0 = param_1;
    piVar6 = (int *)FUN_1501f1d80();
    uVar2 = DAT_155407800;
    local_190 = &DAT_155407800;
    if ((DAT_155407800 & 1) == 0) {
      DAT_155407800 = DAT_155407800 | 1;
      LOCK();
      UNLOCK();
    }
    if ((~(byte)uVar2 & 1) == 0) {
      absl::lts_20240722::base_internal::SpinLock::SlowLock((SpinLock *)&DAT_155407800);
    }
    if (DAT_155407808 == (GraphCycles *)0x0) {
      this = absl::lts_20240722::base_internal::LowLevelAlloc::Alloc(8);
      DAT_155407808 =
           (GraphCycles *)
           absl::lts_20240722::synchronization_internal::GraphCycles::GraphCycles(this);
    }
    puVar7 = (undefined8 *)
             absl::lts_20240722::synchronization_internal::GraphCycles::GetId
                       (DAT_155407808,local_188);
    uVar9 = *puVar7;
    local_1a0 = uVar9;
    if (*piVar6 != 0) {
      absl::lts_20240722::synchronization_internal::GraphCycles::UpdateStackTrace
                (DAT_155407808,uVar9,*piVar6 + 1,&LAB_1501f0500);
      iVar11 = 0;
      piVar3 = piVar6;
      if (*piVar6 != 0) {
        do {
          uVar1 = *(undefined8 *)(piVar3 + 6);
          pvVar8 = absl::lts_20240722::synchronization_internal::GraphCycles::Ptr
                             (DAT_155407808,uVar1);
          if ((pvVar8 != (void *)0x0) &&
             (bVar5 = absl::lts_20240722::synchronization_internal::GraphCycles::InsertEdge
                                (DAT_155407808,uVar1,uVar9), !bVar5)) {
            pvVar8 = absl::lts_20240722::base_internal::LowLevelAlloc::Alloc(0x1828);
            DAT_155409860 = DAT_155409860 + 1;
            bVar5 = DAT_155409860 < 3;
            local_1b8 = bVar5;
            local_198 = pvVar8;
            iVar11 = absl::lts_20240722::GetStackTrace(local_178,0x28,2);
            local_1c8 = CONCAT71(local_1c8._1_7_,bVar5);
            local_1c8 = FUN_1501f1bf0(local_178,iVar11,pvVar8,0x17d4);
                    /* WARNING: Subroutine does not return */
            absl::lts_20240722::raw_log_internal::RawLog
                      (kError,"mutex.cc",0x58b,"Potential Mutex deadlock: %s");
          }
          iVar11 = iVar11 + 1;
          piVar3 = piVar3 + 6;
        } while (iVar11 != *piVar6);
      }
    }
    uVar4 = DAT_155407800;
    uVar10 = DAT_155407800 & 2;
    LOCK();
    UNLOCK();
    uVar2 = DAT_155407800 & 0xfffffff8;
    DAT_155407800 = uVar10;
    if (uVar2 != 0) {
      absl::lts_20240722::base_internal::SpinLock::SlowUnlock((SpinLock *)&DAT_155407800,uVar4);
    }
  }
  return uVar9;
}

// DecrementSynchSem @ 1501ef640

/* private: static bool __cdecl absl::lts_20240722::Mutex::DecrementSynchSem(class
   absl::lts_20240722::Mutex * __ptr64,struct absl::lts_20240722::base_internal::PerThreadSynch *
   __ptr64,class absl::lts_20240722::synchronization_internal::KernelTimeout) */

bool __cdecl
absl::lts_20240722::Mutex::DecrementSynchSem
          (Mutex *param_1,PerThreadSynch *param_2,KernelTimeout param_3)

{
  bool bVar1;
  
  bVar1 = (bool)AbslInternalPerThreadSemWait_lts_20240722(param_3.rep_);
  return bVar1;
}

// FUN_1501ef650 @ 1501ef650

longlong * FUN_1501ef650(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)*param_2;
  lVar3 = *plVar1;
  *param_2 = lVar3;
  if (param_1 == plVar1) {
    if (param_2 == plVar1) {
      param_2 = (longlong *)0x0;
    }
    return param_2;
  }
  if (param_2 != param_1) {
    cVar2 = FUN_1501f11a0(param_2,lVar3);
    if (cVar2 != '\0') {
      if (*(longlong *)(lVar3 + 8) != 0) {
        lVar3 = *(longlong *)(lVar3 + 8);
      }
      param_2[1] = lVar3;
    }
  }
  return param_1;
}

// FUN_1501ef6b0 @ 1501ef6b0

longlong * FUN_1501ef6b0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)*param_2;
  bVar2 = false;
  plVar6 = param_1;
  do {
    if (*(char *)((longlong)plVar8 + 0x11) == '\0') {
      plVar1 = (longlong *)plVar8[1];
      param_2 = plVar8;
      if (plVar1 != (longlong *)0x0) {
        plVar4 = plVar8;
        for (plVar3 = (longlong *)plVar1[1]; param_2 = plVar1, plVar3 != (longlong *)0x0;
            plVar3 = (longlong *)plVar3[1]) {
          plVar4[1] = (longlong)plVar3;
          plVar1 = plVar3;
          plVar4 = param_2;
        }
        plVar8[1] = (longlong)param_2;
      }
      bVar2 = true;
    }
    else {
      if (param_2[1] != 0) {
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::raw_log_internal::RawLog
                  (kFatal,"mutex.cc",0x43c,"Check %s failed: %s","pw->skip == nullptr",
                   "bad skip in DequeueAllWakeable");
      }
      plVar1 = (longlong *)*param_2;
      lVar7 = *plVar1;
      *param_2 = lVar7;
      if (plVar6 == plVar1) {
        plVar6 = param_2;
        if (param_2 == plVar1) {
          plVar6 = (longlong *)0x0;
        }
      }
      else if ((param_2 != plVar6) && (cVar5 = FUN_1501f11a0(param_2,lVar7), cVar5 != '\0')) {
        if (*(longlong *)(lVar7 + 8) != 0) {
          lVar7 = *(longlong *)(lVar7 + 8);
        }
        param_2[1] = lVar7;
      }
      *plVar8 = *param_3;
      *param_3 = (longlong)plVar8;
      param_3 = plVar8;
      if (*(undefined **)plVar8[4] == &DAT_1536f5238) {
        return plVar6;
      }
    }
    plVar8 = (longlong *)*param_2;
    if (param_1 != plVar6) {
      return plVar6;
    }
  } while ((param_2 != plVar6) || (!bVar2));
  return plVar6;
}

// DoLoad @ 1501ef820

/* private: void (__cdecl*__cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(char
   const * __ptr64,void const * __ptr64)>::DoLoad(void)const __ptr64)(char const * __ptr64,void
   const * __ptr64) */

_func_void_char_ptr_void_ptr * __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64)>::DoLoad
          (AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64)> *this)

{
  _func_void_char_ptr_void_ptr *p_Var1;
  
  p_Var1 = *(_func_void_char_ptr_void_ptr **)this;
  if (p_Var1 == (_func_void_char_ptr_void_ptr *)0x0) {
    p_Var1 = *(_func_void_char_ptr_void_ptr **)(this + 8);
  }
  return p_Var1;
}

// DoLoad @ 1501ef840

/* private: void (__cdecl*__cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(char
   const * __ptr64,void const * __ptr64,__int64)>::DoLoad(void)const __ptr64)(char const *
   __ptr64,void const * __ptr64,__int64) */

_func_void_char_ptr_void_ptr___int64 * __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64,__int64)>::DoLoad
          (AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64,__int64)> *this)

{
  _func_void_char_ptr_void_ptr___int64 *p_Var1;
  
  p_Var1 = *(_func_void_char_ptr_void_ptr___int64 **)this;
  if (p_Var1 == (_func_void_char_ptr_void_ptr___int64 *)0x0) {
    p_Var1 = *(_func_void_char_ptr_void_ptr___int64 **)(this + 8);
  }
  return p_Var1;
}

// DoLoad @ 1501ef860

/* private: void (__cdecl*__cdecl absl::lts_20240722::base_internal::AtomicHook<void
   (__cdecl*)(__int64)>::DoLoad(void)const __ptr64)(__int64) */

_func_void___int64 * __thiscall
absl::lts_20240722::base_internal::AtomicHook<void_(__cdecl*)(__int64)>::DoLoad
          (AtomicHook<void_(__cdecl*)(__int64)> *this)

{
  _func_void___int64 *p_Var1;
  
  p_Var1 = *(_func_void___int64 **)this;
  if (p_Var1 == (_func_void___int64 *)0x0) {
    p_Var1 = *(_func_void___int64 **)(this + 8);
  }
  return p_Var1;
}

// DoStore @ 1501ef880

/* private: bool __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(char const *
   __ptr64,void const * __ptr64)>::DoStore(void (__cdecl*)(char const * __ptr64,void const *
   __ptr64)) __ptr64 */

bool __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64)>::DoStore
          (AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64)> *this,
          _func_void_char_ptr_void_ptr *param_1)

{
  _func_void_char_ptr_void_ptr *p_Var1;
  bool bVar2;
  
  LOCK();
  p_Var1 = *(_func_void_char_ptr_void_ptr **)this;
  bVar2 = p_Var1 == (_func_void_char_ptr_void_ptr *)0x0;
  if (bVar2) {
    *(_func_void_char_ptr_void_ptr **)this = param_1;
    p_Var1 = (_func_void_char_ptr_void_ptr *)0x0;
  }
  UNLOCK();
  if ((!bVar2) && (p_Var1 != param_1)) {
    return false;
  }
  return true;
}

// DoStore @ 1501ef8a0

/* private: bool __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(char const *
   __ptr64,void const * __ptr64,__int64)>::DoStore(void (__cdecl*)(char const * __ptr64,void const *
   __ptr64,__int64)) __ptr64 */

bool __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64,__int64)>::DoStore
          (AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64,__int64)> *this,
          _func_void_char_ptr_void_ptr___int64 *param_1)

{
  _func_void_char_ptr_void_ptr___int64 *p_Var1;
  bool bVar2;
  
  LOCK();
  p_Var1 = *(_func_void_char_ptr_void_ptr___int64 **)this;
  bVar2 = p_Var1 == (_func_void_char_ptr_void_ptr___int64 *)0x0;
  if (bVar2) {
    *(_func_void_char_ptr_void_ptr___int64 **)this = param_1;
    p_Var1 = (_func_void_char_ptr_void_ptr___int64 *)0x0;
  }
  UNLOCK();
  if ((!bVar2) && (p_Var1 != param_1)) {
    return false;
  }
  return true;
}

// DoStore @ 1501ef8c0

/* private: bool __cdecl absl::lts_20240722::base_internal::AtomicHook<void
   (__cdecl*)(__int64)>::DoStore(void (__cdecl*)(__int64)) __ptr64 */

bool __thiscall
absl::lts_20240722::base_internal::AtomicHook<void_(__cdecl*)(__int64)>::DoStore
          (AtomicHook<void_(__cdecl*)(__int64)> *this,_func_void___int64 *param_1)

{
  _func_void___int64 *p_Var1;
  bool bVar2;
  
  LOCK();
  p_Var1 = *(_func_void___int64 **)this;
  bVar2 = p_Var1 == (_func_void___int64 *)0x0;
  if (bVar2) {
    *(_func_void___int64 **)this = param_1;
    p_Var1 = (_func_void___int64 *)0x0;
  }
  UNLOCK();
  if ((!bVar2) && (p_Var1 != param_1)) {
    return false;
  }
  return true;
}

// EnableDebugLog @ 1501ef8e0

/* WARNING: Removing unreachable block (ram,0x0001501ef912) */
/* WARNING: Removing unreachable block (ram,0x0001501ef91a) */
/* public: void __cdecl absl::lts_20240722::CondVar::EnableDebugLog(char const * __ptr64) __ptr64 */

void __thiscall absl::lts_20240722::CondVar::EnableDebugLog(CondVar *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  piVar4 = (int *)FUN_1501efda0(this,param_1,2);
  *(undefined1 *)(piVar4 + 10) = 1;
  uVar2 = DAT_155407810;
  if ((DAT_155407810 & 1) == 0) {
    DAT_155407810 = DAT_155407810 | 1;
    LOCK();
    UNLOCK();
  }
  if ((~(byte)uVar2 & 1) == 0) {
    base_internal::SpinLock::SlowLock((SpinLock *)&DAT_155407810);
  }
  iVar1 = *piVar4;
  *piVar4 = iVar1 + -1;
  uVar3 = DAT_155407810;
  uVar5 = DAT_155407810 & 2;
  LOCK();
  UNLOCK();
  uVar2 = DAT_155407810 & 0xfffffff8;
  DAT_155407810 = uVar5;
  if (uVar2 != 0) {
    base_internal::SpinLock::SlowUnlock((SpinLock *)&DAT_155407810,uVar3);
  }
  if (iVar1 + -1 == 0) {
    base_internal::LowLevelAlloc::Free(piVar4);
  }
  return;
}

// EnableDebugLog @ 1501ef980

/* WARNING: Removing unreachable block (ram,0x0001501ef9b2) */
/* WARNING: Removing unreachable block (ram,0x0001501ef9ba) */
/* public: void __cdecl absl::lts_20240722::Mutex::EnableDebugLog(char const * __ptr64) __ptr64 */

void __thiscall absl::lts_20240722::Mutex::EnableDebugLog(Mutex *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  piVar4 = (int *)FUN_1501efda0(this,param_1,0x10);
  *(undefined1 *)(piVar4 + 10) = 1;
  uVar2 = DAT_155407810;
  if ((DAT_155407810 & 1) == 0) {
    DAT_155407810 = DAT_155407810 | 1;
    LOCK();
    UNLOCK();
  }
  if ((~(byte)uVar2 & 1) == 0) {
    base_internal::SpinLock::SlowLock((SpinLock *)&DAT_155407810);
  }
  iVar1 = *piVar4;
  *piVar4 = iVar1 + -1;
  uVar3 = DAT_155407810;
  uVar5 = DAT_155407810 & 2;
  LOCK();
  UNLOCK();
  uVar2 = DAT_155407810 & 0xfffffff8;
  DAT_155407810 = uVar5;
  if (uVar2 != 0) {
    base_internal::SpinLock::SlowUnlock((SpinLock *)&DAT_155407810,uVar3);
  }
  if (iVar1 + -1 == 0) {
    base_internal::LowLevelAlloc::Free(piVar4);
  }
  return;
}

// EnableInvariantDebugging @ 1501efa30

/* public: void __cdecl absl::lts_20240722::Mutex::EnableInvariantDebugging(void (__cdecl*)(void *
   __ptr64),void * __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::Mutex::EnableInvariantDebugging
          (Mutex *this,_func_void_void_ptr *param_1,void *param_2)

{
  longlong lVar1;
  
  if ((DAT_155407780 != '\0') && (param_1 != (_func_void_void_ptr *)0x0)) {
    lVar1 = FUN_1501efda0(this,0,0x10,0x40);
    *(_func_void_void_ptr **)(lVar1 + 0x18) = param_1;
    *(void **)(lVar1 + 0x20) = param_2;
    FUN_1501f2b30(lVar1);
  }
  return;
}

// EnableMutexInvariantDebugging @ 1501efa90

/* void __cdecl absl::lts_20240722::EnableMutexInvariantDebugging(bool) */

void __cdecl absl::lts_20240722::EnableMutexInvariantDebugging(bool param_1)

{
  DAT_155407780 = param_1;
  return;
}

// FUN_1501efaa0 @ 1501efaa0

longlong * FUN_1501efaa0(longlong *param_1,undefined8 *param_2,longlong param_3,uint param_4)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  bool bVar13;
  undefined8 local_28;
  undefined4 local_20;
  
  puVar3 = (ulonglong *)param_2[5];
  if (puVar3 != (ulonglong *)0x0) {
    param_2[5] = 0;
    iVar11 = 0;
    do {
      uVar4 = *puVar3;
      if ((uVar4 & 1) == 0) {
        LOCK();
        uVar1 = *puVar3;
        if (uVar4 == uVar1) {
          *puVar3 = uVar4 | 1;
        }
        UNLOCK();
        if (uVar4 == uVar1) {
          if (*(longlong *)(param_2[4] + 0x20) == 0) {
            *(undefined8 **)(param_2[4] + 0x20) = param_2;
            puVar10 = (undefined8 *)(uVar4 & 0xfffffffffffffffc);
            puVar5 = (undefined8 *)param_2[4];
            if (puVar10 == (undefined8 *)0x0) {
              *puVar5 = puVar5;
            }
            else {
              *puVar5 = *puVar10;
              *puVar10 = param_2[4];
            }
            *(undefined4 *)(param_2[4] + 0x1c) = 1;
            *puVar3 = (ulonglong)((uint)uVar4 & 2) | param_2[4];
            return param_1;
          }
                    /* WARNING: Subroutine does not return */
          absl::lts_20240722::raw_log_internal::RawLog
                    (kFatal,"mutex.cc",0xa10,"Check %s failed: %s","waitp->thread->waitp == nullptr"
                     ,"waiting when shouldn\'t be");
        }
      }
      lVar9 = FUN_1501f03f0();
      iVar2 = *(int *)(lVar9 + 0xc);
      lVar9 = FUN_1501f03f0();
      if (iVar11 < iVar2) {
        iVar11 = iVar11 + 1;
      }
      else if (iVar11 == iVar2) {
        _Thrd_yield();
        iVar11 = iVar11 + 1;
      }
      else {
        local_28 = *(undefined8 *)(lVar9 + 0x10);
        local_20 = *(undefined4 *)(lVar9 + 0x18);
        AbslInternalSleepFor_lts_20240722(&local_28);
        iVar11 = 0;
      }
    } while( true );
  }
  plVar6 = (longlong *)param_2[4];
  if ((((undefined8 *)plVar6[4] != (undefined8 *)0x0) && ((undefined8 *)plVar6[4] != param_2)) &&
     (*(char *)((longlong)plVar6 + 0x14) == '\0')) {
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::raw_log_internal::RawLog
              (kFatal,"mutex.cc",0x3a2,"Check %s failed: %s",
               "s->waitp == nullptr || s->waitp == waitp || s->suppress_fatal_errors",
               "detected illegal recursion into Mutex code");
  }
  plVar6[4] = (longlong)param_2;
  plVar6[1] = 0;
  *(undefined2 *)(plVar6 + 2) = 1;
  *(byte *)((longlong)plVar6 + 0x12) = (byte)(param_4 >> 1) & 1;
  plVar12 = plVar6;
  if (param_1 == (longlong *)0x0) {
    *plVar6 = (longlong)plVar6;
    plVar6[5] = param_3;
    *(undefined1 *)((longlong)plVar6 + 0x13) = 0;
  }
  else if ((((param_4 & 1) == 0) || ((int)plVar6[3] < *(int *)(*param_1 + 0x18))) ||
          ((*(char *)((longlong)param_1 + 0x13) != '\0' &&
           (((undefined *)*param_2 != &DAT_1536f5238 || (param_2[1] != 0)))))) {
    *plVar6 = *param_1;
    *param_1 = (longlong)plVar6;
    plVar6[5] = param_1[5];
    *(undefined1 *)((longlong)plVar6 + 0x13) = *(undefined1 *)((longlong)param_1 + 0x13);
    if ((char)param_1[2] != '\0') {
      if ((*(longlong *)param_1[4] == *(longlong *)plVar6[4]) && ((int)param_1[3] == (int)plVar6[3])
         ) {
        plVar7 = (longlong *)((longlong *)plVar6[4])[1];
        plVar8 = (longlong *)((longlong *)param_1[4])[1];
        if (plVar8 == (longlong *)0x0) {
          bVar13 = plVar7 == (longlong *)0x0;
        }
        else {
          if ((((plVar7 == (longlong *)0x0) || (plVar8[3] != plVar7[3])) || (plVar8[4] != plVar7[4])
              ) || ((*plVar8 != *plVar7 || (plVar8[1] != plVar7[1])))) goto LAB_1501efd7b;
          bVar13 = plVar8[2] == plVar7[2];
        }
        if (bVar13) {
          param_1[1] = (longlong)plVar6;
        }
      }
    }
  }
  else {
    *plVar6 = *param_1;
    *param_1 = (longlong)plVar6;
    lVar9 = *plVar6;
    plVar12 = param_1;
    if ((*(longlong *)plVar6[4] == **(longlong **)(lVar9 + 0x20)) &&
       ((int)plVar6[3] == *(int *)(lVar9 + 0x18))) {
      plVar7 = (longlong *)(*(longlong **)(lVar9 + 0x20))[1];
      plVar8 = (longlong *)((longlong *)plVar6[4])[1];
      if (plVar8 == (longlong *)0x0) {
        bVar13 = plVar7 == (longlong *)0x0;
      }
      else {
        if ((((plVar7 == (longlong *)0x0) || (plVar8[3] != plVar7[3])) || (plVar8[4] != plVar7[4]))
           || ((*plVar8 != *plVar7 || (plVar8[1] != plVar7[1])))) goto LAB_1501efd7b;
        bVar13 = plVar8[2] == plVar7[2];
      }
      if (bVar13) {
        plVar6[1] = lVar9;
      }
    }
  }
LAB_1501efd7b:
  *(undefined4 *)((longlong)plVar6 + 0x1c) = 1;
  return plVar12;
}

// FUN_1501efda0 @ 1501efda0

/* WARNING: Removing unreachable block (ram,0x0001501efe03) */
/* WARNING: Removing unreachable block (ram,0x0001501efe0b) */

int * FUN_1501efda0(ulonglong *param_1,char *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  ulonglong uVar12;
  longlong lVar8;
  
  uVar4 = DAT_155407810;
  uVar12 = (ulonglong)(uint)((int)param_1 + (int)((ulonglong)param_1 / 0x407) * -0x407);
  if ((DAT_155407810 & 1) == 0) {
    DAT_155407810 = DAT_155407810 | 1;
    LOCK();
    UNLOCK();
  }
  if ((~(byte)uVar4 & 1) == 0) {
    absl::lts_20240722::base_internal::SpinLock::SlowLock((SpinLock *)&DAT_155407810);
  }
  DAT_155409858 = DAT_155409858 + 1;
  if (0x19000 < DAT_155409858) {
    DAT_155409858 = 0;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::raw_log_internal::RawLog
              (kError,"mutex.cc",0x166,
               "Accumulated %zu Mutex debug objects. If you see this in production, it may mean that the production code accidentally calls Mutex/CondVar::EnableDebugLog/EnableInvariantDebugging."
               ,0x19000);
  }
  do {
    do {
      uVar3 = *param_1;
      if ((uVar3 & param_3) == param_3) {
        piVar6 = *(int **)(&DAT_155407820 + uVar12 * 8);
        if (piVar6 != (int *)0x0) {
          goto LAB_1501effc7;
        }
        goto LAB_1501efeee;
      }
    } while ((param_4 & uVar3) != 0);
    LOCK();
    uVar1 = *param_1;
    if (uVar3 == uVar1) {
      *param_1 = uVar3 | param_3;
    }
    UNLOCK();
  } while (uVar3 != uVar1);
  goto LAB_1501efeee;
  while (piVar6 = *(int **)(piVar6 + 2), piVar6 != (int *)0x0) {
LAB_1501effc7:
    if (*(ulonglong *)(piVar6 + 4) == ((ulonglong)param_1 ^ 0xf03a5f7bf03a5f7b)) {
      *piVar6 = *piVar6 + 1;
      goto LAB_1501eff65;
    }
  }
LAB_1501efeee:
  lVar7 = -1;
  pcVar10 = "";
  if (param_2 != (char *)0x0) {
    pcVar10 = param_2;
  }
  do {
    lVar8 = lVar7;
    lVar7 = lVar8 + 1;
  } while (pcVar10[lVar7] != '\0');
  piVar6 = absl::lts_20240722::base_internal::LowLevelAlloc::Alloc(lVar8 + 0x31);
  *piVar6 = 2;
  *(ulonglong *)(piVar6 + 4) = (ulonglong)param_1 ^ 0xf03a5f7bf03a5f7b;
  piVar6[6] = 0;
  piVar6[7] = 0;
  piVar6[8] = 0;
  piVar6[9] = 0;
  *(undefined1 *)(piVar6 + 10) = 0;
  pcVar11 = pcVar10;
  do {
    cVar2 = *pcVar11;
    pcVar11[(longlong)piVar6 + (0x29 - (longlong)pcVar10)] = cVar2;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  *(undefined8 *)(piVar6 + 2) = *(undefined8 *)(&DAT_155407820 + uVar12 * 8);
  *(int **)(&DAT_155407820 + uVar12 * 8) = piVar6;
LAB_1501eff65:
  uVar5 = DAT_155407810;
  uVar9 = DAT_155407810 & 2;
  LOCK();
  UNLOCK();
  uVar4 = DAT_155407810 & 0xfffffff8;
  DAT_155407810 = uVar9;
  if (uVar4 != 0) {
    absl::lts_20240722::base_internal::SpinLock::SlowUnlock((SpinLock *)&DAT_155407810,uVar5);
  }
  return piVar6;
}

// Eval @ 1501efff0

/* public: bool __cdecl absl::lts_20240722::Condition::Eval(void)const __ptr64 */

bool __thiscall absl::lts_20240722::Condition::Eval(Condition *this)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501efff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*this->eval_)(this);
  return bVar1;
}

// Fer @ 1501f0040

/* private: void __cdecl absl::lts_20240722::Mutex::Fer(struct
   absl::lts_20240722::base_internal::PerThreadSynch * __ptr64) __ptr64 */

void __thiscall absl::lts_20240722::Mutex::Fer(Mutex *this,PerThreadSynch *param_1)

{
  int iVar1;
  SynchWaitParams *pSVar2;
  atomic<__int64> aVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined8 local_28;
  undefined4 local_20;
  
  iVar6 = 0;
  pSVar2 = param_1->waitp;
  if (*(longlong *)(pSVar2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    raw_log_internal::RawLog
              (kFatal,"mutex.cc",0x972,"Check %s failed: %s","w->waitp->cond == nullptr",
               "Mutex::Fer while waiting on Condition");
  }
  if (*(longlong *)(pSVar2 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    raw_log_internal::RawLog
              (kFatal,"mutex.cc",0x974,"Check %s failed: %s","w->waitp->cv_word == nullptr",
               "Mutex::Fer with pending CondVar queueing");
  }
  *(undefined8 *)(pSVar2 + 0x10) = 0xffffffffffffffff;
  aVar3 = this->mu_;
  pSVar2 = param_1->waitp;
  uVar4 = (ulonglong)aVar3 & (ulonglong)(*(undefined **)pSVar2 != &DAT_1536f5210) + 8;
  do {
    if (uVar4 == 0) {
      param_1->next = (PerThreadSynch *)0x0;
      param_1->state = (atomic<absl::lts_20240722::base_internal::PerThreadSynch::State>)0x0;
      AbslInternalPerThreadSemPost_lts_20240722(param_1);
      return;
    }
    if (((ulonglong)aVar3 & 0x44) == 0) {
      uVar4 = FUN_1501efaa0(0,pSVar2,aVar3,6);
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        raw_log_internal::RawLog
                  (kFatal,"mutex.cc",0x98c,"Check %s failed: %s","new_h != nullptr","Enqueue failed"
                  );
      }
      LOCK();
      bVar7 = aVar3 == this->mu_;
      if (bVar7) {
        this->mu_ = (atomic<__int64>)(aVar3._0_4_ & 0xfb | uVar4 | 4);
      }
      UNLOCK();
      if (bVar7) {
        return;
      }
    }
    else if (((ulonglong)aVar3 & 0x40) == 0) {
      LOCK();
      bVar7 = aVar3 == this->mu_;
      if (bVar7) {
        this->mu_ = (atomic<__int64>)((ulonglong)aVar3 | 0x44);
      }
      UNLOCK();
      if (bVar7) {
        uVar4 = FUN_1501efaa0((ulonglong)aVar3 & 0xffffffffffffff00,param_1->waitp,aVar3,6);
        if (uVar4 != 0) {
          do {
            aVar3 = this->mu_;
            LOCK();
            bVar7 = aVar3 == this->mu_;
            if (bVar7) {
              this->mu_ = (atomic<__int64>)(aVar3._0_4_ & 0xbb | uVar4 | 4);
            }
            UNLOCK();
          } while (!bVar7);
          return;
        }
                    /* WARNING: Subroutine does not return */
        raw_log_internal::RawLog
                  (kFatal,"mutex.cc",0x997,"Check %s failed: %s","new_h != nullptr","Enqueue failed"
                  );
      }
    }
    lVar5 = FUN_1501f03f0();
    iVar1 = *(int *)(lVar5 + 0xc);
    lVar5 = FUN_1501f03f0();
    if (iVar6 < iVar1) {
      iVar6 = iVar6 + 1;
    }
    else if (iVar6 == iVar1) {
      _Thrd_yield();
      iVar6 = iVar6 + 1;
    }
    else {
      local_28 = *(undefined8 *)(lVar5 + 0x10);
      local_20 = *(undefined4 *)(lVar5 + 0x18);
      AbslInternalSleepFor_lts_20240722(&local_28);
      iVar6 = 0;
    }
    aVar3 = this->mu_;
    pSVar2 = param_1->waitp;
    uVar4 = (ulonglong)aVar3 & (ulonglong)(*(undefined **)pSVar2 != &DAT_1536f5210) + 8;
  } while( true );
}

// ForgetDeadlockInfo @ 1501f02e0

/* public: void __cdecl absl::lts_20240722::Mutex::ForgetDeadlockInfo(void) __ptr64 */

void __thiscall absl::lts_20240722::Mutex::ForgetDeadlockInfo(Mutex *this)

{
  return;
}

// FUN_1501f02f0 @ 1501f02f0

/* WARNING: Removing unreachable block (ram,0x0001501f030f) */
/* WARNING: Removing unreachable block (ram,0x0001501f0317) */

undefined8 FUN_1501f02f0(void)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  GraphCycles *this;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 local_res10 [24];
  
  uVar2 = DAT_155407800;
  if ((DAT_155407800 & 1) == 0) {
    DAT_155407800 = DAT_155407800 | 1;
    LOCK();
    UNLOCK();
  }
  if ((~(byte)uVar2 & 1) == 0) {
    absl::lts_20240722::base_internal::SpinLock::SlowLock((SpinLock *)&DAT_155407800);
  }
  if (DAT_155407808 == (GraphCycles *)0x0) {
    this = absl::lts_20240722::base_internal::LowLevelAlloc::Alloc(8);
    DAT_155407808 =
         (GraphCycles *)absl::lts_20240722::synchronization_internal::GraphCycles::GraphCycles(this)
    ;
  }
  puVar4 = (undefined8 *)
           absl::lts_20240722::synchronization_internal::GraphCycles::GetId
                     (DAT_155407808,local_res10);
  uVar3 = DAT_155407800;
  uVar5 = DAT_155407800 & 2;
  uVar1 = *puVar4;
  LOCK();
  UNLOCK();
  uVar2 = DAT_155407800 & 0xfffffff8;
  DAT_155407800 = uVar5;
  if (uVar2 != 0) {
    absl::lts_20240722::base_internal::SpinLock::SlowUnlock((SpinLock *)&DAT_155407800,uVar3);
  }
  return uVar1;
}

// FUN_1501f03a0 @ 1501f03a0

undefined8 FUN_1501f03a0(void)

{
  GraphCycles *this;
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  if (DAT_155407808 == (GraphCycles *)0x0) {
    this = absl::lts_20240722::base_internal::LowLevelAlloc::Alloc(8);
    DAT_155407808 =
         (GraphCycles *)absl::lts_20240722::synchronization_internal::GraphCycles::GraphCycles(this)
    ;
  }
  puVar1 = (undefined8 *)
           absl::lts_20240722::synchronization_internal::GraphCycles::GetId
                     (DAT_155407808,local_res10);
  return *puVar1;
}

// FUN_1501f03f0 @ 1501f03f0

undefined4 * FUN_1501f03f0(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined1 local_res8 [16];
  
  if (DAT_1554077c0 == 0xdd) {
    return &DAT_1554077c0;
  }
  LOCK();
  bVar3 = DAT_1554077c0 == 0;
  if (bVar3) {
    DAT_1554077c0 = 0x65c2937b;
  }
  UNLOCK();
  if (!bVar3) {
    uVar2 = absl::lts_20240722::base_internal::SpinLockWait
                      ((atomic<unsigned_int> *)&DAT_1554077c0,3,
                       (SpinLockWaitTransition *)&DAT_1536f5db8,SCHEDULE_KERNEL_ONLY);
    if (uVar2 != 0) goto LAB_1501f045e;
  }
  FUN_1501ee8e0(local_res8);
  iVar1 = DAT_1554077c0;
  LOCK();
  DAT_1554077c0 = 0xdd;
  UNLOCK();
  if (iVar1 == 0x5a308d2) {
    AbslInternalSpinLockWake_lts_20240722(&DAT_1554077c0,1);
  }
LAB_1501f045e:
  return &DAT_1554077c0;
}

// GetOrCreateCurrentThreadIdentity @ 1501f0490

/* struct absl::lts_20240722::base_internal::ThreadIdentity * __ptr64 __cdecl
   absl::lts_20240722::synchronization_internal::GetOrCreateCurrentThreadIdentity(void) */

ThreadIdentity * __cdecl
absl::lts_20240722::synchronization_internal::GetOrCreateCurrentThreadIdentity(void)

{
  longlong lVar1;
  ThreadIdentity *pTVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pTVar2 = *(ThreadIdentity **)(lVar1 + 0x9e78);
  if (pTVar2 == (ThreadIdentity *)0x0) {
    pTVar2 = CreateThreadIdentity();
    return pTVar2;
  }
  return pTVar2;
}

// FUN_1501f0520 @ 1501f0520

/* WARNING: Removing unreachable block (ram,0x0001501f055a) */
/* WARNING: Removing unreachable block (ram,0x0001501f0562) */

int * FUN_1501f0520(ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = DAT_155407810;
  if ((DAT_155407810 & 1) == 0) {
    DAT_155407810 = DAT_155407810 | 1;
    LOCK();
    UNLOCK();
  }
  if ((~(byte)uVar1 & 1) == 0) {
    absl::lts_20240722::base_internal::SpinLock::SlowLock((SpinLock *)&DAT_155407810);
  }
  piVar4 = *(int **)(&DAT_155407820 +
                    (ulonglong)(uint)((int)param_1 + (int)(param_1 / 0x407) * -0x407) * 8);
  if (piVar4 != (int *)0x0) {
    do {
      if (*(ulonglong *)(piVar4 + 4) == (param_1 ^ 0xf03a5f7bf03a5f7b)) {
        *piVar4 = *piVar4 + 1;
        break;
      }
      piVar4 = *(int **)(piVar4 + 2);
    } while (piVar4 != (int *)0x0);
  }
  uVar2 = DAT_155407810;
  uVar3 = DAT_155407810 & 2;
  LOCK();
  UNLOCK();
  uVar1 = DAT_155407810 & 0xfffffff8;
  DAT_155407810 = uVar3;
  if (uVar1 != 0) {
    absl::lts_20240722::base_internal::SpinLock::SlowUnlock((SpinLock *)&DAT_155407810,uVar2);
  }
  return piVar4;
}

// GuaranteedEqual @ 1501f05e0

/* public: static bool __cdecl absl::lts_20240722::Condition::GuaranteedEqual(class
   absl::lts_20240722::Condition const * __ptr64,class absl::lts_20240722::Condition const *
   __ptr64) */

bool __cdecl absl::lts_20240722::Condition::GuaranteedEqual(Condition *param_1,Condition *param_2)

{
  if ((param_1 == (Condition *)0x0) || (param_2 == (Condition *)0x0)) {
    return param_1 == param_2;
  }
  if ((((param_1->eval_ == param_2->eval_) && (param_1->arg_ == param_2->arg_)) &&
      (*(longlong *)param_1->callback_ == *(longlong *)param_2->callback_)) &&
     ((*(longlong *)(param_1->callback_ + 8) == *(longlong *)(param_2->callback_ + 8) &&
      (*(longlong *)(param_1->callback_ + 0x10) == *(longlong *)(param_2->callback_ + 0x10))))) {
    return true;
  }
  return false;
}

// HideMask @ 1501f0630

/* unsigned __int64 __cdecl absl::lts_20240722::base_internal::HideMask(void) */

__uint64 __cdecl absl::lts_20240722::base_internal::HideMask(void)

{
  return 0xf03a5f7bf03a5f7b;
}

// IncrementSynchSem @ 1501f0670

/* private: static void __cdecl absl::lts_20240722::Mutex::IncrementSynchSem(class
   absl::lts_20240722::Mutex * __ptr64,struct absl::lts_20240722::base_internal::PerThreadSynch *
   __ptr64) */

void __cdecl absl::lts_20240722::Mutex::IncrementSynchSem(Mutex *param_1,PerThreadSynch *param_2)

{
  AbslInternalPerThreadSemPost_lts_20240722(param_2);
  return;
}

// InternalAttemptToUseMutexInFatalSignalHandler @ 1501f0680

/* public: static void __cdecl
   absl::lts_20240722::Mutex::InternalAttemptToUseMutexInFatalSignalHandler(void) */

void __cdecl absl::lts_20240722::Mutex::InternalAttemptToUseMutexInFatalSignalHandler(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0x9e78);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x14) = 1;
  }
  DAT_154e47290 = 0;
  return;
}

// InvalidGraphId @ 1501f06e0

/* struct absl::lts_20240722::synchronization_internal::GraphId __cdecl
   absl::lts_20240722::synchronization_internal::InvalidGraphId(void) */

undefined8 __cdecl absl::lts_20240722::synchronization_internal::InvalidGraphId(void)

{
  return 0;
}

// Lock @ 1501f06f0

/* public: void __cdecl absl::lts_20240722::Mutex::Lock(void) __ptr64 */

void __thiscall absl::lts_20240722::Mutex::Lock(Mutex *this)

{
  atomic<__int64> aVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ThreadIdentity *local_28;
  undefined8 local_20;
  __int64 local_18;
  undefined1 local_10;
  
  aVar1 = this->mu_;
  iVar3 = DAT_1554077c4;
  if (((ulonglong)aVar1 & 0x19) == 0) {
    LOCK();
    bVar4 = aVar1 == this->mu_;
    if (bVar4) {
      this->mu_ = (atomic<__int64>)((ulonglong)aVar1 | 8);
    }
    UNLOCK();
    iVar3 = DAT_1554077c4;
    if (bVar4) {
      return;
    }
  }
  do {
    aVar1 = this->mu_;
    if (((ulonglong)aVar1 & 0x11) != 0) break;
    if (((ulonglong)aVar1 & 8) == 0) {
      LOCK();
      bVar4 = aVar1 == this->mu_;
      if (bVar4) {
        this->mu_ = (atomic<__int64>)((ulonglong)aVar1 | 8);
      }
      UNLOCK();
      if (bVar4) {
        return;
      }
    }
    iVar3 = iVar3 + -1;
  } while (0 < iVar3);
  if (DAT_1554077c4 == 0) {
    iVar3 = base_internal::NumCPUs();
    DAT_1554077c4 = -1;
    if (1 < iVar3) {
      DAT_1554077c4 = 0x5dc;
    }
  }
  aVar1 = this->mu_;
  if (((ulonglong)aVar1 & 0x19) == 0) {
    LOCK();
    bVar4 = aVar1 == this->mu_;
    if (bVar4) {
      this->mu_ = (atomic<__int64>)((ulonglong)aVar1 | 8);
    }
    UNLOCK();
    if (bVar4) {
      return;
    }
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_28 = *(ThreadIdentity **)(lVar2 + 0x9e78);
  if (local_28 == (ThreadIdentity *)0x0) {
    local_28 = synchronization_internal::CreateThreadIdentity();
  }
  local_38 = 0xffffffffffffffff;
  local_48 = &DAT_1536f5238;
  local_40 = 0;
  local_30 = 0;
  local_20 = 0;
  local_18 = base_internal::CycleClock::Now();
  local_10 = 0;
  LockSlowLoop(this,(SynchWaitParams *)&local_48,0);
  return;
}

// FUN_1501f0810 @ 1501f0810

void FUN_1501f0810(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = (int)*param_3;
  iVar3 = 0;
  if (iVar1 != 0) {
    lVar4 = 0;
    plVar2 = param_3;
    do {
      plVar2 = plVar2 + 3;
      if (*plVar2 == param_2) break;
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != iVar1);
  }
  if (iVar3 != iVar1) {
    *(int *)(param_3 + (longlong)iVar3 * 3 + 2) = (int)param_3[(longlong)iVar3 * 3 + 2] + 1;
    return;
  }
  if (iVar1 == 0x28) {
    *(undefined1 *)((longlong)param_3 + 4) = 1;
    return;
  }
  lVar4 = (longlong)iVar3;
  param_3[lVar4 * 3 + 1] = param_1;
  *(int *)(param_3 + lVar4 * 3 + 2) = 1;
  param_3[lVar4 * 3 + 3] = param_2;
  *(int *)param_3 = iVar1 + 1;
  return;
}

// FUN_1501f08b0 @ 1501f08b0

void FUN_1501f08b0(longlong param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar1 = *param_3;
  uVar9 = (ulonglong)(int)uVar1;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = uVar6;
  uVar10 = uVar6;
  puVar2 = param_3;
  if (uVar1 != 0) {
    do {
      uVar7 = (uint)uVar8;
      if (*(longlong *)(puVar2 + 6) == param_2) break;
      uVar7 = uVar7 + 1;
      uVar10 = uVar10 + 1;
      uVar8 = (ulonglong)uVar7;
      puVar2 = puVar2 + 6;
    } while (uVar10 != uVar9);
  }
  if (uVar7 == uVar1) {
    if ((char)param_3[1] == '\0') {
      uVar8 = uVar6;
      if (uVar1 != 0) {
        param_3 = param_3 + 2;
        do {
          if (*(longlong *)param_3 == param_1) break;
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar6 = uVar6 + 1;
          param_3 = param_3 + 6;
        } while (uVar6 != uVar9);
      }
      if ((uint)uVar8 == uVar1) {
        lVar4 = FUN_1501f0520(param_1);
        if (lVar4 == 0) {
          pcVar5 = "";
        }
        else {
          pcVar5 = (char *)(lVar4 + 0x29);
        }
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::raw_log_internal::RawLog
                  (kFatal,"mutex.cc",0x4f8,"thread releasing lock it does not hold: %p %s; ",param_1
                   ,pcVar5);
      }
    }
  }
  else {
    lVar4 = (longlong)(int)uVar7;
    if (param_3[lVar4 * 6 + 4] == 1) {
      *param_3 = uVar1 - 1;
      uVar3 = *(undefined8 *)(param_3 + uVar9 * 6 + -4 + 2);
      *(undefined8 *)(param_3 + lVar4 * 6 + 2) = *(undefined8 *)(param_3 + uVar9 * 6 + -4);
      *(undefined8 *)(param_3 + lVar4 * 6 + 4) = uVar3;
      *(undefined8 *)(param_3 + lVar4 * 6 + 6) = *(undefined8 *)(param_3 + uVar9 * 6);
      (param_3 + uVar9 * 6)[0] = 0;
      (param_3 + uVar9 * 6)[1] = 0;
      (param_3 + uVar9 * 6 + -4)[0] = 0;
      (param_3 + uVar9 * 6 + -4)[1] = 0;
      return;
    }
    param_3[lVar4 * 6 + 4] = param_3[lVar4 * 6 + 4] - 1;
  }
  return;
}

// LockSlow @ 1501f09d0

/* private: void __cdecl absl::lts_20240722::Mutex::LockSlow(struct absl::lts_20240722::MuHowS const
   * __ptr64,class absl::lts_20240722::Condition const * __ptr64,int) __ptr64 */

void __thiscall
absl::lts_20240722::Mutex::LockSlow(Mutex *this,MuHowS *param_1,Condition *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  if (DAT_1554077c4 == 0) {
    iVar2 = base_internal::NumCPUs();
    DAT_1554077c4 = -1;
    if (1 < iVar2) {
      DAT_1554077c4 = 0x5dc;
    }
  }
  bVar1 = LockSlowWithDeadline(this,param_1,param_2,(KernelTimeout)0xffffffffffffffff,param_3);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  raw_log_internal::RawLog
            (kFatal,"mutex.cc",0x720,"Check %s failed: %s",
             "this->LockSlowWithDeadline(how, cond, KernelTimeout::Never(), flags)",
             "condition untrue on return from LockSlow");
}

// LockSlowLoop @ 1501f0a90

/* private: void __cdecl absl::lts_20240722::Mutex::LockSlowLoop(struct
   absl::lts_20240722::SynchWaitParams * __ptr64,int) __ptr64 */

void __thiscall
absl::lts_20240722::Mutex::LockSlowLoop(Mutex *this,SynchWaitParams *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  atomic<__int64> aVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined8 local_38;
  undefined4 local_30;
  
  uVar12 = 0;
  if (((ulonglong)this->mu_ & 0x10) != 0) {
    uVar7 = 6;
    if (*(undefined **)param_1 == &DAT_1536f5238) {
      uVar7 = 4;
    }
    FUN_1501f12b0(this,uVar7);
  }
  uVar5 = uVar12;
  if ((*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) != 0) &&
     (uVar5 = 0, *(char *)(*(longlong *)(param_1 + 0x20) + 0x14) == '\0')) {
                    /* WARNING: Subroutine does not return */
    raw_log_internal::RawLog
              (kFatal,"mutex.cc",0x7bc,"Check %s failed: %s",
               "waitp->thread->waitp == nullptr || waitp->thread->suppress_fatal_errors",
               "detected illegal recursion into Mutex code");
  }
  do {
    iVar10 = (int)uVar5;
    aVar9 = this->mu_;
    if ((((ulonglong)aVar9 ^ 4) & (ulonglong)((uint)((ulonglong)aVar9 ^ 4) & 5) << 3) != 0) {
      if ((aVar9._0_1_ & 9) == 9) {
                    /* WARNING: Subroutine does not return */
        raw_log_internal::RawLog
                  (kFatal,"mutex.cc",0x7ab,
                   "Check (v & (kMuWriter | kMuReader)) != (kMuWriter | kMuReader) failed: %s: Mutex corrupt: both reader and writer lock held: %p"
                   ,"Lock",aVar9);
      }
      if ((aVar9._0_1_ & 0x24) == 0x20) {
                    /* WARNING: Subroutine does not return */
        raw_log_internal::RawLog
                  (kFatal,"mutex.cc",0x7ae,
                   "Check (v & (kMuWait | kMuWrWait)) != kMuWrWait failed: %s: Mutex corrupt: waiting writer with no waiters: %p"
                   ,"Lock",aVar9);
      }
    }
    lVar4 = *(longlong *)param_1;
    uVar11 = param_2 & 1;
    if ((*(ulonglong *)(lVar4 + 0x18) & (ulonglong)aVar9) == 0) {
      uVar5 = 0xfffffffffffffffd;
      if (uVar11 == 0) {
        uVar5 = 0xffffffffffffffff;
      }
      LOCK();
      bVar13 = aVar9 == this->mu_;
      if (bVar13) {
        this->mu_ = (atomic<__int64>)
                    ((uVar5 & (ulonglong)aVar9 | *(ulonglong *)(lVar4 + 8)) +
                    *(longlong *)(lVar4 + 0x10));
      }
      UNLOCK();
      if (bVar13) {
LAB_1501f0b9d:
        if ((*(longlong *)(param_1 + 8) == 0) ||
           (cVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(), cVar3 != '\0')) {
          if ((*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) != 0) &&
             (*(char *)(*(longlong *)(param_1 + 0x20) + 0x14) == '\0')) {
                    /* WARNING: Subroutine does not return */
            raw_log_internal::RawLog
                      (kFatal,"mutex.cc",0x823,"Check %s failed: %s",
                       "waitp->thread->waitp == nullptr || waitp->thread->suppress_fatal_errors",
                       "detected illegal recursion into Mutex code");
          }
          if (((ulonglong)aVar9 & 0x10) != 0) {
            uVar7 = 7;
            if (*(undefined **)param_1 == &DAT_1536f5238) {
              uVar7 = 5;
            }
            FUN_1501f12b0(this,uVar7);
          }
          return;
        }
        UnlockSlow(this,param_1);
LAB_1501f0d2d:
        Block(this,*(PerThreadSynch **)(param_1 + 0x20));
        param_2 = param_2 | 1;
        iVar10 = 0;
      }
    }
    else if (((ulonglong)aVar9 & 0x44) == 0) {
      uVar5 = FUN_1501efaa0(0,param_1,aVar9,param_2);
      uVar8 = 0xf9;
      if (uVar11 == 0) {
        uVar8 = 0xfb;
      }
      uVar6 = (ulonglong)aVar9 & uVar8 | 4;
      if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        raw_log_internal::RawLog
                  (kFatal,"mutex.cc",0x7d9,"Check %s failed: %s","new_h != nullptr",
                   "Enqueue to empty list failed");
      }
      if ((*(undefined **)param_1 == &DAT_1536f5238) && (((ulonglong)aVar9 & 1) != 0)) {
        uVar6 = (ulonglong)aVar9 & uVar8 | 0x24;
      }
      LOCK();
      bVar13 = aVar9 == this->mu_;
      if (bVar13) {
        this->mu_ = (atomic<__int64>)(uVar6 | uVar5);
      }
      UNLOCK();
      if (bVar13) goto LAB_1501f0d2d;
      *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x20) = 0;
    }
    else {
      uVar5 = 0xffffffffffffffdf;
      if (uVar11 == 0) {
        uVar5 = 0xffffffffffffffff;
      }
      if (((ulonglong)aVar9 & *(ulonglong *)(lVar4 + 0x20) & uVar5) == 0) {
        uVar5 = 0xfffffffffffffffd;
        if (uVar11 == 0) {
          uVar5 = 0xffffffffffffffff;
        }
        LOCK();
        bVar13 = aVar9 == this->mu_;
        if (bVar13) {
          this->mu_ = (atomic<__int64>)(uVar5 & (ulonglong)aVar9 | 0x41);
        }
        UNLOCK();
        if (bVar13) {
          plVar1 = (longlong *)(((ulonglong)aVar9 & 0xffffffffffffff00) + 0x28);
          *plVar1 = *plVar1 + 0x100;
          do {
            aVar9 = this->mu_;
            LOCK();
            bVar13 = aVar9 == this->mu_;
            if (bVar13) {
              this->mu_ = (atomic<__int64>)((ulonglong)aVar9 & 0xffffffffffffffbf | 1);
            }
            UNLOCK();
          } while (!bVar13);
          goto LAB_1501f0b9d;
        }
      }
      else if (((ulonglong)aVar9 & 0x40) == 0) {
        uVar5 = 0xfffffffffffffffd;
        if (uVar11 == 0) {
          uVar5 = 0xffffffffffffffff;
        }
        LOCK();
        bVar13 = aVar9 == this->mu_;
        if (bVar13) {
          this->mu_ = (atomic<__int64>)(uVar5 & (ulonglong)aVar9 | 0x44);
        }
        UNLOCK();
        if (bVar13) {
          uVar5 = FUN_1501efaa0((ulonglong)aVar9 & 0xffffffffffffff00,param_1,aVar9,param_2);
          if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            raw_log_internal::RawLog
                      (kFatal,"mutex.cc",0x808,"Check %s failed: %s","new_h != nullptr",
                       "Enqueue to list failed");
          }
          uVar8 = uVar12;
          if ((*(undefined **)param_1 == &DAT_1536f5238) && (((ulonglong)aVar9 & 1) != 0)) {
            uVar8 = 0x20;
          }
          do {
            aVar9 = this->mu_;
            LOCK();
            bVar13 = aVar9 == this->mu_;
            if (bVar13) {
              this->mu_ = (atomic<__int64>)(aVar9._0_4_ & 0xbb | uVar8 | uVar5 | 4);
            }
            UNLOCK();
          } while (!bVar13);
          goto LAB_1501f0d2d;
        }
      }
    }
    if ((*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x20) + 0x14) == '\0')) {
                    /* WARNING: Subroutine does not return */
      raw_log_internal::RawLog
                (kFatal,"mutex.cc",0x81d,"Check %s failed: %s",
                 "waitp->thread->waitp == nullptr || waitp->thread->suppress_fatal_errors",
                 "detected illegal recursion into Mutex code");
    }
    lVar4 = FUN_1501f03f0();
    iVar2 = *(int *)(lVar4 + 0xc);
    lVar4 = FUN_1501f03f0();
    if (iVar10 < iVar2) {
      uVar5 = (ulonglong)(iVar10 + 1);
    }
    else if (iVar10 == iVar2) {
      _Thrd_yield();
      uVar5 = (ulonglong)(iVar10 + 1);
    }
    else {
      local_38 = *(undefined8 *)(lVar4 + 0x10);
      local_30 = *(undefined4 *)(lVar4 + 0x18);
      AbslInternalSleepFor_lts_20240722(&local_38);
      uVar5 = uVar12;
    }
  } while( true );
}

// LockSlowWithDeadline @ 1501f0f30

/* private: bool __cdecl absl::lts_20240722::Mutex::LockSlowWithDeadline(struct
   absl::lts_20240722::MuHowS const * __ptr64,class absl::lts_20240722::Condition const *
   __ptr64,class absl::lts_20240722::synchronization_internal::KernelTimeout,int) __ptr64 */

bool __thiscall
absl::lts_20240722::Mutex::LockSlowWithDeadline
          (Mutex *this,MuHowS *param_1,Condition *param_2,KernelTimeout param_3,int param_4)

{
  atomic<__int64> aVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  MuHowS *local_58;
  Condition *local_50;
  ulong64 local_48;
  undefined8 local_40;
  ThreadIdentity *local_38;
  undefined8 local_30;
  __int64 local_28;
  undefined1 local_20;
  
  bVar3 = false;
  aVar1 = this->mu_;
  if ((*(ulonglong *)param_1 & (ulonglong)aVar1) == 0) {
    uVar4 = 0xfffffffffffffffd;
    if ((param_4 & 1U) == 0) {
      uVar4 = 0xffffffffffffffff;
    }
    LOCK();
    bVar6 = aVar1 == this->mu_;
    if (bVar6) {
      this->mu_ = (atomic<__int64>)
                  ((uVar4 & (ulonglong)aVar1 | *(ulonglong *)(param_1 + 8)) +
                  *(longlong *)(param_1 + 0x10));
    }
    UNLOCK();
    if (bVar6) {
      if (param_2 == (Condition *)0x0) {
        return true;
      }
      bVar3 = (*param_2->eval_)(param_2);
      if (bVar3) {
        return true;
      }
      bVar3 = true;
    }
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_38 = *(ThreadIdentity **)(lVar2 + 0x9e78);
  if (local_38 == (ThreadIdentity *)0x0) {
    local_38 = synchronization_internal::CreateThreadIdentity();
  }
  local_40 = 0;
  local_30 = 0;
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_3.rep_;
  local_28 = base_internal::CycleClock::Now();
  local_20 = 0;
  uVar5 = param_4 | 2;
  if (param_2 == (Condition *)0x0) {
    uVar5 = param_4;
  }
  if (bVar3) {
    UnlockSlow(this,(SynchWaitParams *)&local_58);
    Block(this,&local_38->per_thread_synch);
    uVar5 = uVar5 | 1;
  }
  LockSlowLoop(this,(SynchWaitParams *)&local_58,uVar5);
  if (((local_50 == (Condition *)0x0) && (param_2 != (Condition *)0x0)) &&
     (bVar3 = (*param_2->eval_)(param_2), !bVar3)) {
    return false;
  }
  return true;
}

// LockWhenCommon @ 1501f10a0

/* private: bool __cdecl absl::lts_20240722::Mutex::LockWhenCommon(class
   absl::lts_20240722::Condition const & __ptr64,class
   absl::lts_20240722::synchronization_internal::KernelTimeout,bool) __ptr64 */

bool __thiscall
absl::lts_20240722::Mutex::LockWhenCommon
          (Mutex *this,Condition *param_1,KernelTimeout param_2,bool param_3)

{
  bool bVar1;
  MuHowS *pMVar2;
  
  pMVar2 = (MuHowS *)&DAT_1536f5210;
  if (param_3) {
    pMVar2 = (MuHowS *)&DAT_1536f5238;
  }
  bVar1 = LockSlowWithDeadline(this,pMVar2,param_1,param_2,0);
  return bVar1;
}

// FUN_1501f10e0 @ 1501f10e0

void FUN_1501f10e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = absl::lts_20240722::base_internal::LowLevelAlloc::Alloc(0x3c8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}

// FUN_1501f1110 @ 1501f1110

HiRep * FUN_1501f1110(HiRep *param_1)

{
  uint uVar1;
  HiRep *pHVar2;
  Duration *pDVar3;
  Time local_48;
  Duration local_38;
  Duration local_28;
  Time local_18;
  
  absl::lts_20240722::Now(&local_48);
  _Thrd_yield();
  pHVar2 = (HiRep *)absl::lts_20240722::Now(&local_18);
  local_38.rep_lo_ = local_48.rep_.rep_lo_;
  local_28.rep_hi_ = *pHVar2;
  local_28.rep_lo_ = pHVar2[1].lo_;
  local_38.rep_hi_ = local_48.rep_.rep_hi_;
  pDVar3 = absl::lts_20240722::Duration::operator-=(&local_28,&local_38);
  uVar1 = pDVar3->rep_lo_;
  *param_1 = pDVar3->rep_hi_;
  param_1[1].lo_ = uVar1;
  return param_1;
}

// FUN_1501f11a0 @ 1501f11a0

ulonglong FUN_1501f11a0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar3 = **(ulonglong **)(param_2 + 0x20);
  if ((**(ulonglong **)(param_1 + 0x20) == uVar3) &&
     (uVar3 = (ulonglong)*(uint *)(param_2 + 0x18),
     *(uint *)(param_1 + 0x18) == *(uint *)(param_2 + 0x18))) {
    puVar1 = (ulonglong *)(*(ulonglong **)(param_1 + 0x20))[1];
    puVar2 = (ulonglong *)(*(ulonglong **)(param_2 + 0x20))[1];
    if (puVar1 == (ulonglong *)0x0) {
      bVar4 = puVar2 == (ulonglong *)0x0;
    }
    else {
      if ((((puVar2 == (ulonglong *)0x0) || (uVar3 = puVar2[3], puVar1[3] != uVar3)) ||
          (uVar3 = puVar2[4], puVar1[4] != uVar3)) ||
         ((uVar3 = *puVar1, uVar3 != *puVar2 || (uVar3 = puVar1[1], uVar3 != puVar2[1]))))
      goto LAB_1501f1202;
      uVar3 = puVar1[2];
      bVar4 = uVar3 == puVar2[2];
    }
    if (bVar4) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
LAB_1501f1202:
  return uVar3 & 0xffffffffffffff00;
}

// MutexDelay @ 1501f1210

/* int __cdecl absl::lts_20240722::synchronization_internal::MutexDelay(int,int) */

int __cdecl absl::lts_20240722::synchronization_internal::MutexDelay(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = FUN_1501f03f0();
  iVar2 = *(int *)(lVar1 + 8 + (longlong)param_2 * 4);
  lVar1 = FUN_1501f03f0();
  if (param_1 < iVar2) {
    return param_1 + 1;
  }
  if (param_1 == iVar2) {
    _Thrd_yield();
    iVar2 = param_1 + 1;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x10);
    local_10 = *(undefined4 *)(lVar1 + 0x18);
    AbslInternalSleepFor_lts_20240722(&local_18);
    iVar2 = 0;
  }
  return iVar2;
}

// Never @ 1501f1280

/* public: static class absl::lts_20240722::synchronization_internal::KernelTimeout __cdecl
   absl::lts_20240722::synchronization_internal::KernelTimeout::Never(void) */

KernelTimeout __cdecl absl::lts_20240722::synchronization_internal::KernelTimeout::Never(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0xffffffffffffffff;
  return (KernelTimeout)(ulong64)in_RCX;
}

// Post @ 1501f12a0

/* private: static void __cdecl
   absl::lts_20240722::synchronization_internal::PerThreadSem::Post(struct
   absl::lts_20240722::base_internal::ThreadIdentity * __ptr64) */

void __cdecl
absl::lts_20240722::synchronization_internal::PerThreadSem::Post(ThreadIdentity *param_1)

{
  AbslInternalPerThreadSemPost_lts_20240722();
  return;
}

// FUN_1501f12b0 @ 1501f12b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001501f1460) */
/* WARNING: Removing unreachable block (ram,0x0001501f1468) */

void FUN_1501f12b0(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  ulong64 uVar9;
  undefined1 auStack_5a8 [32];
  undefined *local_588;
  undefined8 local_580;
  char *local_578;
  char *local_570;
  code *local_568;
  undefined8 local_560;
  undefined8 uStack_558;
  code *local_550;
  int *local_548;
  void *local_538 [40];
  char local_3f8 [960];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5a8;
  piVar6 = (int *)FUN_1501f0520();
  if ((piVar6 != (int *)0x0) && ((char)piVar6[10] == '\0')) {
    if (((*(uint *)(&DAT_1536f5130 + (longlong)param_2 * 0x10) & 2) != 0) &&
       (*(longlong *)(piVar6 + 6) != 0)) {
      local_550 = absl::lts_20240722::Condition::CastAndCallFunction<absl::lts_20240722::SynchEvent>
      ;
      local_568 = FUN_1501f2f10;
      local_560 = 0;
      uStack_558 = 0;
      local_548 = piVar6;
      FUN_1501f2f10(piVar6);
    }
    uVar1 = DAT_155407810;
    if ((DAT_155407810 & 1) == 0) {
      DAT_155407810 = DAT_155407810 | 1;
      LOCK();
      UNLOCK();
    }
    if ((~(byte)uVar1 & 1) == 0) {
      absl::lts_20240722::base_internal::SpinLock::SlowLock((SpinLock *)&DAT_155407810);
    }
    iVar3 = *piVar6;
    *piVar6 = iVar3 + -1;
    uVar2 = DAT_155407810;
    uVar7 = DAT_155407810 & 2;
    LOCK();
    UNLOCK();
    uVar1 = DAT_155407810 & 0xfffffff8;
    DAT_155407810 = uVar7;
    if (uVar1 != 0) {
      absl::lts_20240722::base_internal::SpinLock::SlowUnlock((SpinLock *)&DAT_155407810,uVar2);
    }
    if (iVar3 + -1 == 0) {
      absl::lts_20240722::base_internal::LowLevelAlloc::Free(piVar6);
    }
    return;
  }
  iVar3 = absl::lts_20240722::GetStackTrace(local_538,0x28,1);
  iVar4 = snprintf(local_3f8,0x3c0," @");
  if (iVar3 != 0) {
    lVar8 = 0;
    do {
      uVar9 = 0x3c0 - (longlong)iVar4;
      iVar5 = snprintf(local_3f8 + iVar4,uVar9," %p");
      if ((iVar5 < 0) || (uVar9 <= (ulonglong)(longlong)iVar5)) break;
      iVar4 = iVar4 + iVar5;
      lVar8 = lVar8 + 1;
    } while (lVar8 != iVar3);
  }
  local_578 = "";
  if (piVar6 != (int *)0x0) {
    local_578 = (char *)((longlong)piVar6 + 0x29);
  }
  local_570 = local_3f8;
  local_588 = (&PTR_s_TryLock_succeeded__1536f5138)[(longlong)param_2 * 2];
  local_580 = param_1;
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::raw_log_internal::RawLog(kInfo,"mutex.cc",0x1c4,"%s%p %s %s");
}

// ReaderLock @ 1501f14e0

/* public: void __cdecl absl::lts_20240722::Mutex::ReaderLock(void) __ptr64 */

void __thiscall absl::lts_20240722::Mutex::ReaderLock(Mutex *this)

{
  atomic<__int64> aVar1;
  longlong lVar2;
  int iVar3;
  atomic<__int64> aVar4;
  bool bVar5;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ThreadIdentity *local_28;
  undefined8 local_20;
  __int64 local_18;
  undefined1 local_10;
  
  aVar1 = this->mu_;
  do {
    if (((ulonglong)aVar1 & 0x1c) != 0) {
      if (DAT_1554077c4 == 0) {
        iVar3 = base_internal::NumCPUs();
        DAT_1554077c4 = -1;
        if (1 < iVar3) {
          DAT_1554077c4 = 0x5dc;
        }
      }
      aVar1 = this->mu_;
      if (((ulonglong)aVar1 & 0x1c) == 0) {
        LOCK();
        bVar5 = aVar1 == this->mu_;
        if (bVar5) {
          this->mu_ = (atomic<__int64>)(((ulonglong)aVar1 | 1) + 0x100);
        }
        UNLOCK();
        if (bVar5) {
          return;
        }
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar2 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      local_28 = *(ThreadIdentity **)(lVar2 + 0x9e78);
      if (local_28 == (ThreadIdentity *)0x0) {
        local_28 = synchronization_internal::CreateThreadIdentity();
      }
      local_38 = 0xffffffffffffffff;
      local_48 = &DAT_1536f5210;
      local_40 = 0;
      local_30 = 0;
      local_20 = 0;
      local_18 = base_internal::CycleClock::Now();
      local_10 = 0;
      LockSlowLoop(this,(SynchWaitParams *)&local_48,0);
      return;
    }
    LOCK();
    aVar4 = this->mu_;
    bVar5 = aVar1 == aVar4;
    if (bVar5) {
      this->mu_ = (atomic<__int64>)(((ulonglong)aVar1 | 1) + 0x100);
      aVar4 = aVar1;
    }
    UNLOCK();
    aVar1 = aVar4;
  } while (!bVar5);
  return;
}

// ReaderTryLock @ 1501f15f0

/* public: bool __cdecl absl::lts_20240722::Mutex::ReaderTryLock(void) __ptr64 */

bool __thiscall absl::lts_20240722::Mutex::ReaderTryLock(Mutex *this)

{
  atomic<__int64> aVar1;
  atomic<__int64> aVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = 5;
  aVar1 = this->mu_;
  do {
    aVar2 = aVar1;
    if (((ulonglong)aVar1 & 0x1c) != 0) break;
    LOCK();
    aVar2 = this->mu_;
    bVar5 = aVar1 == aVar2;
    if (bVar5) {
      this->mu_ = (atomic<__int64>)(((ulonglong)aVar1 | 1) + 0x100);
      aVar2 = aVar1;
    }
    UNLOCK();
    if (bVar5) {
      return true;
    }
    iVar3 = iVar3 + -1;
    aVar1 = aVar2;
  } while (iVar3 != 0);
  if (((ulonglong)aVar2 & 0x10) == 0) {
    return false;
  }
  aVar1 = this->mu_;
  iVar3 = 5;
  do {
    iVar4 = iVar3;
    aVar2 = aVar1;
    if (((ulonglong)aVar1 & 0xc) == 0) {
      LOCK();
      aVar2 = this->mu_;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        this->mu_ = (atomic<__int64>)(((ulonglong)aVar1 | 1) + 0x100);
        aVar2 = aVar1;
      }
      UNLOCK();
      if (bVar5) {
        FUN_1501f12b0(this,2);
        return true;
      }
    }
    iVar3 = iVar4 + -1;
    aVar1 = aVar2;
    if (iVar3 == 0) {
      FUN_1501f12b0(this,iVar4 + 2);
      return false;
    }
  } while( true );
}

// ReaderTryLockSlow @ 1501f16a0

/* private: bool __cdecl absl::lts_20240722::Mutex::ReaderTryLockSlow(void) __ptr64 */

bool __thiscall absl::lts_20240722::Mutex::ReaderTryLockSlow(Mutex *this)

{
  atomic<__int64> aVar1;
  atomic<__int64> aVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 5;
  aVar1 = this->mu_;
  do {
    aVar2 = aVar1;
    if (((ulonglong)aVar1 & 0xc) == 0) {
      LOCK();
      aVar2 = this->mu_;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        this->mu_ = (atomic<__int64>)(((ulonglong)aVar1 | 1) + 0x100);
        aVar2 = aVar1;
      }
      UNLOCK();
      if (bVar4) {
        FUN_1501f12b0(this,2);
        return true;
      }
    }
    iVar3 = iVar3 + -1;
    aVar1 = aVar2;
    if (iVar3 == 0) {
      FUN_1501f12b0(this,3);
      return false;
    }
  } while( true );
}

// ReaderUnlock @ 1501f1700

/* public: void __cdecl absl::lts_20240722::Mutex::ReaderUnlock(void) __ptr64 */

void __thiscall absl::lts_20240722::Mutex::ReaderUnlock(Mutex *this)

{
  byte bVar1;
  atomic<__int64> aVar2;
  atomic<__int64> aVar3;
  bool bVar4;
  
  bVar1 = SUB81(this->mu_,0);
  aVar2 = this->mu_;
  while( true ) {
    if ((bVar1 & 0x15) != 1) {
      UnlockSlow(this,(SynchWaitParams *)0x0);
      return;
    }
    LOCK();
    aVar3 = this->mu_;
    bVar4 = aVar2 == aVar3;
    if (bVar4) {
      this->mu_ = (atomic<__int64>)
                  ((longlong)aVar2 -
                  (0x101 - (ulonglong)(((ulonglong)aVar2 & 0xfffffffffffffe00) != 0)));
      aVar3 = aVar2;
    }
    UNLOCK();
    if (bVar4) break;
    bVar1 = aVar3._0_1_;
    aVar2 = aVar3;
  }
  return;
}

// RegisterCondVarTracer @ 1501f1760

/* void __cdecl absl::lts_20240722::RegisterCondVarTracer(void (__cdecl*)(char const * __ptr64,void
   const * __ptr64)) */

void __cdecl absl::lts_20240722::RegisterCondVarTracer(_func_void_char_ptr_void_ptr *param_1)

{
  _func_void_char_ptr_void_ptr *p_Var1;
  
  LOCK();
  p_Var1 = param_1;
  if (DAT_154e472b8 != (_func_void_char_ptr_void_ptr *)0x0) {
    p_Var1 = DAT_154e472b8;
  }
  DAT_154e472b8 = p_Var1;
  UNLOCK();
  return;
}

// RegisterMutexProfiler @ 1501f1780

/* void __cdecl absl::lts_20240722::RegisterMutexProfiler(void (__cdecl*)(__int64)) */

void __cdecl absl::lts_20240722::RegisterMutexProfiler(_func_void___int64 *param_1)

{
  _func_void___int64 *p_Var1;
  
  LOCK();
  p_Var1 = param_1;
  if (DAT_154e47298 != (_func_void___int64 *)0x0) {
    p_Var1 = DAT_154e47298;
  }
  DAT_154e47298 = p_Var1;
  UNLOCK();
  return;
}

// RegisterMutexTracer @ 1501f17a0

/* void __cdecl absl::lts_20240722::RegisterMutexTracer(void (__cdecl*)(char const * __ptr64,void
   const * __ptr64,__int64)) */

void __cdecl absl::lts_20240722::RegisterMutexTracer(_func_void_char_ptr_void_ptr___int64 *param_1)

{
  _func_void_char_ptr_void_ptr___int64 *p_Var1;
  
  LOCK();
  p_Var1 = param_1;
  if (DAT_154e472a8 != (_func_void_char_ptr_void_ptr___int64 *)0x0) {
    p_Var1 = DAT_154e472a8;
  }
  DAT_154e472a8 = p_Var1;
  UNLOCK();
  return;
}

// Release @ 1501f17c0

/* public: void __cdecl absl::lts_20240722::ReleasableMutexLock::Release(void) __ptr64 */

void __thiscall absl::lts_20240722::ReleasableMutexLock::Release(ReleasableMutexLock *this)

{
  atomic<__int64> aVar1;
  atomic<__int64> *this_00;
  Mutex MVar2;
  
  this_00 = *(atomic<__int64> **)this;
  if (this_00 == (atomic<__int64> *)0x0) {
                    /* WARNING: Subroutine does not return */
    raw_log_internal::RawLog
              (kFatal,"mutex.cc",0xab2,"Check %s failed: %s","this->mu_ != nullptr",
               "ReleasableMutexLock::Release may only be called once");
  }
  MVar2.mu_ = *this_00;
  if (((MVar2.mu_._0_1_ ^ 8) & 0x18) < ((MVar2.mu_._0_1_ ^ 0xfd) & 6)) {
    LOCK();
    aVar1 = *this_00;
    if (MVar2.mu_ == aVar1) {
      *this_00 = MVar2.mu_ & 0xffffffffffffffd7;
    }
    UNLOCK();
    if (MVar2.mu_ == aVar1) goto LAB_1501f1839;
  }
  Mutex::UnlockSlow((Mutex *)this_00,(SynchWaitParams *)0x0);
LAB_1501f1839:
  *(undefined8 *)this = 0;
  return;
}

// Remove @ 1501f1850

/* private: void __cdecl absl::lts_20240722::CondVar::Remove(struct
   absl::lts_20240722::base_internal::PerThreadSynch * __ptr64) __ptr64 */

void __thiscall absl::lts_20240722::CondVar::Remove(CondVar *this,PerThreadSynch *param_1)

{
  ulonglong uVar1;
  int iVar2;
  PerThreadSynch *pPVar3;
  PerThreadSynch *pPVar4;
  longlong lVar5;
  PerThreadSynch *pPVar6;
  int iVar7;
  PerThreadSynch *pPVar8;
  ulonglong uVar9;
  undefined8 local_28;
  undefined4 local_20;
  
  pPVar8 = (PerThreadSynch *)0x0;
  uVar9 = *(ulonglong *)this;
  pPVar6 = pPVar8;
  do {
    if ((uVar9 & 1) == 0) {
      LOCK();
      uVar1 = *(ulonglong *)this;
      if (uVar9 == uVar1) {
        *(ulonglong *)this = uVar9 | 1;
      }
      UNLOCK();
      if (uVar9 == uVar1) {
        pPVar6 = (PerThreadSynch *)(uVar9 & 0xfffffffffffffffc);
        if (pPVar6 != (PerThreadSynch *)0x0) {
          pPVar3 = pPVar6;
          for (pPVar4 = pPVar6->next; (pPVar4 != param_1 && (pPVar4 != pPVar6));
              pPVar4 = pPVar4->next) {
            pPVar3 = pPVar4;
          }
          if (pPVar3->next == param_1) {
            pPVar3->next = param_1->next;
            if ((pPVar6 == param_1) && (pPVar6 = pPVar3, pPVar3 == param_1)) {
              pPVar6 = pPVar8;
            }
            param_1->next = (PerThreadSynch *)0x0;
            param_1->state = (atomic<absl::lts_20240722::base_internal::PerThreadSynch::State>)0x0;
          }
        }
        *(ulonglong *)this = (ulonglong)((uint)uVar9 & 2) | (ulonglong)pPVar6;
        return;
      }
    }
    lVar5 = FUN_1501f03f0();
    iVar2 = *(int *)(lVar5 + 0xc);
    lVar5 = FUN_1501f03f0();
    iVar7 = (int)pPVar6;
    if (iVar7 < iVar2) {
      pPVar6 = (PerThreadSynch *)(ulonglong)(iVar7 + 1);
      uVar9 = *(ulonglong *)this;
    }
    else {
      if (iVar7 == iVar2) {
        _Thrd_yield();
        pPVar6 = (PerThreadSynch *)(ulonglong)(iVar7 + 1);
      }
      else {
        local_28 = *(undefined8 *)(lVar5 + 0x10);
        local_20 = *(undefined4 *)(lVar5 + 0x18);
        AbslInternalSleepFor_lts_20240722(&local_28);
        pPVar6 = pPVar8;
      }
      uVar9 = *(ulonglong *)this;
    }
  } while( true );
}

// SetMutexDeadlockDetectionMode @ 1501f1940

/* void __cdecl absl::lts_20240722::SetMutexDeadlockDetectionMode(enum
   absl::lts_20240722::OnDeadlockCycle) */

void __cdecl absl::lts_20240722::SetMutexDeadlockDetectionMode(OnDeadlockCycle param_1)

{
  DAT_154e47290 = param_1;
  return;
}

// Signal @ 1501f1950

/* public: void __cdecl absl::lts_20240722::CondVar::Signal(void) __ptr64 */

void __thiscall absl::lts_20240722::CondVar::Signal(CondVar *this)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  PerThreadSynch *pPVar5;
  PerThreadSynch *pPVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 local_18;
  undefined4 local_10;
  
  iVar7 = 0;
  uVar8 = *(ulonglong *)this;
  if (uVar8 == 0) {
    return;
  }
  do {
    if ((uVar8 & 1) == 0) {
      LOCK();
      uVar1 = *(ulonglong *)this;
      if (uVar8 == uVar1) {
        *(ulonglong *)this = uVar8 | 1;
      }
      UNLOCK();
      if (uVar8 == uVar1) {
        pPVar5 = (PerThreadSynch *)(uVar8 & 0xfffffffffffffffc);
        pPVar6 = (PerThreadSynch *)0x0;
        if (pPVar5 != (PerThreadSynch *)0x0) {
          pPVar6 = pPVar5->next;
          if (pPVar6 == pPVar5) {
            pPVar5 = (PerThreadSynch *)0x0;
          }
          else {
            pPVar5->next = pPVar6->next;
          }
        }
        uVar8 = (ulonglong)((uint)uVar8 & 2);
        *(ulonglong *)this = uVar8 | (ulonglong)pPVar5;
        if (pPVar6 != (PerThreadSynch *)0x0) {
          Mutex::Fer(*(Mutex **)(pPVar6->waitp + 0x18),pPVar6);
          pcVar4 = DAT_154e472b8;
          if (DAT_154e472b8 == (code *)0x0) {
            pcVar4 = (code *)PTR_DummyFunction_154e472c0;
          }
          (*pcVar4)("Signal wakeup",this);
        }
        if (uVar8 == 0) {
          return;
        }
        FUN_1501f12b0(this,0xc);
        return;
      }
    }
    lVar3 = FUN_1501f03f0();
    iVar2 = *(int *)(lVar3 + 0xc);
    lVar3 = FUN_1501f03f0();
    if (iVar7 < iVar2) {
      iVar7 = iVar7 + 1;
    }
    else if (iVar7 == iVar2) {
      _Thrd_yield();
      iVar7 = iVar7 + 1;
    }
    else {
      local_18 = *(undefined8 *)(lVar3 + 0x10);
      local_10 = *(undefined4 *)(lVar3 + 0x18);
      AbslInternalSleepFor_lts_20240722(&local_18);
      iVar7 = 0;
    }
    uVar8 = *(ulonglong *)this;
    if (uVar8 == 0) {
      return;
    }
  } while( true );
}

// SignalAll @ 1501f1a70

/* public: void __cdecl absl::lts_20240722::CondVar::SignalAll(void) __ptr64 */

void __thiscall absl::lts_20240722::CondVar::SignalAll(CondVar *this)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  PerThreadSynch *pPVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  ulonglong uVar8;
  PerThreadSynch *pPVar9;
  PerThreadSynch *pPVar10;
  bool bVar11;
  undefined8 local_28;
  undefined4 local_20;
  
  iVar7 = 0;
  uVar3 = *(ulonglong *)this;
  do {
    if (uVar3 == 0) {
      return;
    }
    if ((uVar3 & 1) == 0) {
      uVar8 = (ulonglong)((uint)uVar3 & 2);
      LOCK();
      uVar1 = *(ulonglong *)this;
      if (uVar3 == uVar1) {
        *(ulonglong *)this = uVar8;
      }
      UNLOCK();
      if (uVar3 == uVar1) {
        pPVar10 = (PerThreadSynch *)(uVar3 & 0xfffffffffffffffc);
        if (pPVar10 != (PerThreadSynch *)0x0) {
          pPVar9 = pPVar10->next;
          do {
            pPVar4 = pPVar9->next;
            Mutex::Fer(*(Mutex **)(pPVar9->waitp + 0x18),pPVar9);
            bVar11 = pPVar9 != pPVar10;
            pPVar9 = pPVar4;
          } while (bVar11);
          pcVar6 = DAT_154e472b8;
          if (DAT_154e472b8 == (code *)0x0) {
            pcVar6 = (code *)PTR_DummyFunction_154e472c0;
          }
          (*pcVar6)("SignalAll wakeup",this);
        }
        if (uVar8 != 0) {
          FUN_1501f12b0(this,0xd);
        }
        return;
      }
    }
    lVar5 = FUN_1501f03f0();
    iVar2 = *(int *)(lVar5 + 0xc);
    lVar5 = FUN_1501f03f0();
    if (iVar7 < iVar2) {
      iVar7 = iVar7 + 1;
    }
    else if (iVar7 == iVar2) {
      _Thrd_yield();
      iVar7 = iVar7 + 1;
    }
    else {
      local_28 = *(undefined8 *)(lVar5 + 0x10);
      local_20 = *(undefined4 *)(lVar5 + 0x18);
      AbslInternalSleepFor_lts_20240722(&local_28);
      iVar7 = 0;
    }
    uVar3 = *(ulonglong *)this;
  } while( true );
}

// SleepFor @ 1501f1bc0

/* void __cdecl absl::lts_20240722::SleepFor(class absl::lts_20240722::Duration) */

void __cdecl absl::lts_20240722::SleepFor(Duration *param_1)

{
  HiRep local_18;
  uint local_10;
  
  local_18 = param_1->rep_hi_;
  local_10 = param_1->rep_lo_;
  AbslInternalSleepFor_lts_20240722(&local_18);
  return;
}

// FUN_1501f1bf0 @ 1501f1bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1501f1bf0(longlong param_1,int param_2,longlong param_3,int param_4,char param_5)

{
  bool bVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  char *local_130;
  longlong local_128;
  char local_118 [208];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar5 = 0;
  if (param_2 != 0) {
    lVar4 = 0;
    local_128 = param_1;
    do {
      if (param_4 <= iVar5) {
        return param_3;
      }
      if (param_5 == '\0') {
        pcVar3 = (char *)(iVar5 + param_3);
        snprintf(pcVar3,(longlong)(param_4 - iVar5)," %p");
      }
      else {
        bVar1 = absl::lts_20240722::Symbolize(*(void **)(local_128 + lVar4 * 8),local_118,200);
        if (!bVar1) {
          local_118[0] = bVar1;
        }
        pcVar3 = (char *)(iVar5 + param_3);
        local_130 = local_118;
        local_138 = *(undefined8 *)(local_128 + lVar4 * 8);
        snprintf(pcVar3,(longlong)(param_4 - iVar5),"%s\t@ %p %s\n");
      }
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (pcVar3[lVar2] != '\0');
      iVar5 = iVar5 + (int)lVar2;
      lVar4 = lVar4 + 1;
    } while (lVar4 != param_2);
  }
  return param_3;
}

// Store @ 1501f1d50

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(char const *
   __ptr64,void const * __ptr64)>::Store(void (__cdecl*)(char const * __ptr64,void const * __ptr64))
   __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64)>::Store
          (AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64)> *this,
          _func_void_char_ptr_void_ptr *param_1)

{
  LOCK();
  if (*(longlong *)this == 0) {
    *(_func_void_char_ptr_void_ptr **)this = param_1;
  }
  UNLOCK();
  return;
}

// Store @ 1501f1d60

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(char const *
   __ptr64,void const * __ptr64,__int64)>::Store(void (__cdecl*)(char const * __ptr64,void const *
   __ptr64,__int64)) __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64,__int64)>::Store
          (AtomicHook<void_(__cdecl*)(char_const*___ptr64,void_const*___ptr64,__int64)> *this,
          _func_void_char_ptr_void_ptr___int64 *param_1)

{
  LOCK();
  if (*(longlong *)this == 0) {
    *(_func_void_char_ptr_void_ptr___int64 **)this = param_1;
  }
  UNLOCK();
  return;
}

// Store @ 1501f1d70

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void
   (__cdecl*)(__int64)>::Store(void (__cdecl*)(__int64)) __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::AtomicHook<void_(__cdecl*)(__int64)>::Store
          (AtomicHook<void_(__cdecl*)(__int64)> *this,_func_void___int64 *param_1)

{
  LOCK();
  if (*(longlong *)this == 0) {
    *(_func_void___int64 **)this = param_1;
  }
  UNLOCK();
  return;
}

// FUN_1501f1d80 @ 1501f1d80

void FUN_1501f1d80(void)

{
  longlong lVar1;
  ThreadIdentity *pTVar2;
  SynchLocksHeld *pSVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pTVar2 = *(ThreadIdentity **)(lVar1 + 0x9e78);
  if (pTVar2 == (ThreadIdentity *)0x0) {
    pTVar2 = absl::lts_20240722::synchronization_internal::CreateThreadIdentity();
  }
  if ((pTVar2->per_thread_synch).all_locks == (SynchLocksHeld *)0x0) {
    pSVar3 = absl::lts_20240722::base_internal::LowLevelAlloc::Alloc(0x3c8);
    *(undefined4 *)pSVar3 = 0;
    pSVar3[4] = (SynchLocksHeld)0x0;
    (pTVar2->per_thread_synch).all_locks = pSVar3;
  }
  return;
}

// FUN_1501f1df0 @ 1501f1df0

void FUN_1501f1df0(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)(lVar1 + 0x9e78) == 0) {
    absl::lts_20240722::synchronization_internal::CreateThreadIdentity();
    return;
  }
  return;
}

// FUN_1501f1e40 @ 1501f1e40

void FUN_1501f1e40(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)(lVar1 + 0x9e78) == 0) {
    absl::lts_20240722::synchronization_internal::CreateThreadIdentity();
    return;
  }
  return;
}

// Trans @ 1501f1e90

/* private: void __cdecl absl::lts_20240722::Mutex::Trans(struct absl::lts_20240722::MuHowS const *
   __ptr64) __ptr64 */

void __thiscall absl::lts_20240722::Mutex::Trans(Mutex *this,MuHowS *param_1)

{
  LockSlow(this,param_1,(Condition *)0x0,3);
  return;
}

// TryLock @ 1501f1ef0

/* public: bool __cdecl absl::lts_20240722::Mutex::TryLock(void) __ptr64 */

bool __thiscall absl::lts_20240722::Mutex::TryLock(Mutex *this)

{
  atomic<__int64> aVar1;
  bool bVar2;
  
  aVar1 = this->mu_;
  if (((ulonglong)aVar1 & 0x19) == 0) {
    LOCK();
    bVar2 = aVar1 == this->mu_;
    if (bVar2) {
      this->mu_ = (atomic<__int64>)((ulonglong)aVar1 | 8);
    }
    UNLOCK();
    if (bVar2) {
      return true;
    }
  }
  else if (((ulonglong)aVar1 & 0x10) != 0) {
    aVar1 = this->mu_;
    if (((ulonglong)aVar1 & 9) == 0) {
      LOCK();
      bVar2 = aVar1 == this->mu_;
      if (bVar2) {
        this->mu_ = (atomic<__int64>)((ulonglong)aVar1 | 8);
      }
      UNLOCK();
      if (bVar2) {
        FUN_1501f12b0(this,0);
        return true;
      }
    }
    FUN_1501f12b0(this,1);
    return false;
  }
  return false;
}

// TryLockSlow @ 1501f1f80

/* private: bool __cdecl absl::lts_20240722::Mutex::TryLockSlow(void) __ptr64 */

bool __thiscall absl::lts_20240722::Mutex::TryLockSlow(Mutex *this)

{
  atomic<__int64> aVar1;
  bool bVar2;
  
  aVar1 = this->mu_;
  if (((ulonglong)aVar1 & 9) == 0) {
    LOCK();
    bVar2 = aVar1 == this->mu_;
    if (bVar2) {
      this->mu_ = (atomic<__int64>)((ulonglong)aVar1 | 8);
    }
    UNLOCK();
    if (bVar2) {
      FUN_1501f12b0(this,0);
      return true;
    }
  }
  FUN_1501f12b0(this,1);
  return false;
}

// TryRemove @ 1501f1fc0

/* private: void __cdecl absl::lts_20240722::Mutex::TryRemove(struct
   absl::lts_20240722::base_internal::PerThreadSynch * __ptr64) __ptr64 */

void __thiscall absl::lts_20240722::Mutex::TryRemove(Mutex *this,PerThreadSynch *param_1)

{
  PerThreadSynch **ppPVar1;
  atomic<__int64> aVar2;
  longlong *plVar3;
  longlong *plVar4;
  PerThreadSynch *pPVar5;
  PerThreadSynch *pPVar6;
  PerThreadSynch *pPVar7;
  PerThreadSynch *pPVar8;
  atomic<__int64> aVar9;
  PerThreadSynch *pPVar10;
  bool bVar11;
  
  aVar2 = this->mu_;
  if ((aVar2._0_1_ & 0x4d) == 4) {
    LOCK();
    bVar11 = aVar2 == this->mu_;
    if (bVar11) {
      this->mu_ = (atomic<__int64>)((ulonglong)aVar2 | 0x48);
    }
    UNLOCK();
    if (bVar11) {
      pPVar10 = (PerThreadSynch *)((ulonglong)aVar2 & 0xffffffffffffff00);
      if (pPVar10 != (PerThreadSynch *)0x0) {
        pPVar8 = pPVar10;
        pPVar7 = pPVar10->next;
        if (pPVar10->next == param_1) {
LAB_1501f20e9:
          pPVar10 = (PerThreadSynch *)FUN_1501ef650(pPVar10,pPVar8);
          param_1->next = (PerThreadSynch *)0x0;
          param_1->state = (atomic<absl::lts_20240722::base_internal::PerThreadSynch::State>)0x0;
        }
        else {
          do {
            pPVar8 = pPVar7;
            if ((*(longlong *)param_1->waitp == *(longlong *)pPVar8->waitp) &&
               (param_1->priority == pPVar8->priority)) {
              plVar3 = *(longlong **)(param_1->waitp + 8);
              plVar4 = *(longlong **)(pPVar8->waitp + 8);
              if (plVar3 == (longlong *)0x0) {
                bVar11 = plVar4 == (longlong *)0x0;
              }
              else {
                if ((((plVar4 == (longlong *)0x0) || (plVar3[3] != plVar4[3])) ||
                    (plVar3[4] != plVar4[4])) || ((*plVar3 != *plVar4 || (plVar3[1] != plVar4[1]))))
                goto LAB_1501f20a1;
                bVar11 = plVar3[2] == plVar4[2];
              }
              if (!bVar11) goto LAB_1501f20a1;
              if (pPVar8->skip == param_1) {
                pPVar7 = param_1->skip;
                if ((param_1->skip == (PerThreadSynch *)0x0) &&
                   (pPVar7 = (PerThreadSynch *)0x0, pPVar8->next != param_1)) {
                  pPVar7 = pPVar8->next;
                }
                pPVar8->skip = pPVar7;
              }
            }
            else {
LAB_1501f20a1:
              pPVar7 = pPVar8->skip;
              ppPVar1 = &pPVar8->skip;
              if (pPVar7 != (PerThreadSynch *)0x0) {
                pPVar6 = pPVar8;
                for (pPVar5 = pPVar7->skip; pPVar8 = pPVar7, pPVar5 != (PerThreadSynch *)0x0;
                    pPVar5 = pPVar5->skip) {
                  pPVar6->skip = pPVar5;
                  pPVar7 = pPVar5;
                  pPVar6 = pPVar8;
                }
                *ppPVar1 = pPVar8;
              }
            }
            if (pPVar8->next == param_1) goto LAB_1501f20e9;
            pPVar7 = pPVar8->next;
          } while (pPVar8 != pPVar10);
        }
      }
      do {
        aVar2 = this->mu_;
        aVar9._0_4_ = aVar2._0_4_ & 0x12;
        aVar9._4_4_ = 0;
        if (pPVar10 != (PerThreadSynch *)0x0) {
          pPVar10->readers = 0;
          pPVar10->maybe_unlocking = false;
          aVar9 = (atomic<__int64>)((ulonglong)aVar9 | (ulonglong)pPVar10 | 4);
        }
        LOCK();
        bVar11 = aVar2 == this->mu_;
        if (bVar11) {
          this->mu_ = aVar9;
        }
        UNLOCK();
      } while (!bVar11);
    }
  }
  return;
}

// Unlock @ 1501f2140

/* public: void __cdecl absl::lts_20240722::Mutex::Unlock(void) __ptr64 */

void __thiscall absl::lts_20240722::Mutex::Unlock(Mutex *this)

{
  atomic<__int64> aVar1;
  bool bVar2;
  
  aVar1 = this->mu_;
  if (((aVar1._0_1_ ^ 8) & 0x18) < ((aVar1._0_1_ ^ 0xfd) & 6)) {
    LOCK();
    bVar2 = aVar1 == this->mu_;
    if (bVar2) {
      this->mu_ = (atomic<__int64>)((ulonglong)aVar1 & 0xffffffffffffffd7);
    }
    UNLOCK();
    if (bVar2) {
      return;
    }
  }
  UnlockSlow(this,(SynchWaitParams *)0x0);
  return;
}

// UnlockSlow @ 1501f2180

/* private: void __cdecl absl::lts_20240722::Mutex::UnlockSlow(struct
   absl::lts_20240722::SynchWaitParams * __ptr64) __ptr64 */

void __thiscall absl::lts_20240722::Mutex::UnlockSlow(Mutex *this,SynchWaitParams *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  char cVar8;
  longlong lVar9;
  char *pcVar10;
  undefined8 **ppuVar11;
  __int64 _Var12;
  code *pcVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 **ppuVar16;
  undefined8 *puVar17;
  atomic<__int64> aVar18;
  undefined8 **ppuVar19;
  atomic<__int64> aVar20;
  int iVar21;
  undefined8 **ppuVar22;
  undefined8 **ppuVar23;
  undefined8 **ppuVar24;
  bool bVar25;
  bool bVar26;
  uint local_res8;
  ulonglong local_res18;
  undefined8 *local_res20;
  
  aVar20 = this->mu_;
  if (((ulonglong)this->mu_ & 9) == 0) {
    lVar9 = FUN_1501f0520();
    if (lVar9 == 0) {
      pcVar10 = "";
    }
    else {
      pcVar10 = (char *)(lVar9 + 0x29);
    }
                    /* WARNING: Subroutine does not return */
    raw_log_internal::RawLog
              (kFatal,"mutex.cc",0x9b3,"thread should hold at least a read lock on Mutex %p %s",this
               ,pcVar10);
  }
  if ((((ulonglong)aVar20 ^ 4) & (ulonglong)((uint)((ulonglong)aVar20 ^ 4) & 5) << 3) != 0) {
    if ((aVar20._0_1_ & 9) == 9) {
                    /* WARNING: Subroutine does not return */
      raw_log_internal::RawLog
                (kFatal,"mutex.cc",0x7ab,
                 "Check (v & (kMuWriter | kMuReader)) != (kMuWriter | kMuReader) failed: %s: Mutex corrupt: both reader and writer lock held: %p"
                 ,"Unlock",aVar20);
    }
    if ((aVar20._0_1_ & 0x24) == 0x20) {
                    /* WARNING: Subroutine does not return */
      raw_log_internal::RawLog
                (kFatal,"mutex.cc",0x7ae,
                 "Check (v & (kMuWait | kMuWrWait)) != kMuWrWait failed: %s: Mutex corrupt: waiting writer with no waiters: %p"
                 ,"Unlock",aVar20);
    }
  }
  if (((ulonglong)aVar20 & 0x10) != 0) {
    FUN_1501f12b0();
  }
  ppuVar11 = (undefined8 **)0x0;
  local_res8 = 0;
  local_res20 = (undefined8 *)&DAT_00000001;
  local_res18 = 0;
  ppuVar22 = ppuVar11;
  ppuVar23 = ppuVar11;
  ppuVar24 = ppuVar11;
  if (((param_1 != (SynchWaitParams *)0x0) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x20) + 0x14) == '\0')) {
                    /* WARNING: Subroutine does not return */
    raw_log_internal::RawLog
              (kFatal,"mutex.cc",0x847,"Check %s failed: %s",
               "waitp == nullptr || waitp->thread->waitp == nullptr || waitp->thread->suppress_fatal_errors"
               ,"detected illegal recursion into Mutex code");
  }
  do {
    while( true ) {
      aVar20 = this->mu_;
      if (((((ulonglong)aVar20 & 8) == 0) || ((aVar20._0_1_ & 6) == 4)) ||
         (param_1 != (SynchWaitParams *)0x0)) break;
      LOCK();
      bVar25 = aVar20 == this->mu_;
      if (bVar25) {
        this->mu_ = (atomic<__int64>)((ulonglong)aVar20 & 0xffffffffffffffd7);
      }
      UNLOCK();
LAB_1501f2342:
      if (bVar25) {
        return;
      }
LAB_1501f2348:
      lVar9 = FUN_1501f03f0();
      iVar1 = *(int *)(lVar9 + 8);
      FUN_1501f03f0();
      iVar21 = (int)ppuVar11;
      if (iVar21 < iVar1) {
        local_res8 = iVar21 + 1;
        ppuVar11 = (undefined8 **)(ulonglong)local_res8;
      }
      else {
        if (iVar21 == iVar1) {
          _Thrd_yield();
          ppuVar11 = (undefined8 **)(ulonglong)(iVar21 + 1);
        }
        else {
          AbslInternalSleepFor_lts_20240722();
          ppuVar11 = (undefined8 **)0x0;
        }
        local_res8 = (uint)ppuVar11;
      }
    }
    if (((aVar20._0_1_ & 5) == 1) && (param_1 == (SynchWaitParams *)0x0)) {
      LOCK();
      bVar25 = aVar20 == this->mu_;
      if (bVar25) {
        this->mu_ = (atomic<__int64>)
                    ((longlong)aVar20 -
                    (0x101 - (ulonglong)(((ulonglong)aVar20 & 0xfffffffffffffe00) != 0)));
      }
      UNLOCK();
      goto LAB_1501f2342;
    }
    if (((ulonglong)aVar20 & 0x40) != 0) goto LAB_1501f2348;
    LOCK();
    bVar25 = aVar20 == this->mu_;
    if (bVar25) {
      this->mu_ = (atomic<__int64>)((ulonglong)aVar20 | 0x40);
    }
    UNLOCK();
    if (!bVar25) goto LAB_1501f2348;
    if (((ulonglong)aVar20 & 4) == 0) {
      bVar25 = true;
      if (param_1 != (SynchWaitParams *)0x0) {
        do {
          uVar14 = 0;
          aVar20 = this->mu_;
          aVar18 = (atomic<__int64>)((longlong)aVar20 - 0x100);
          if ((longlong)aVar20 < 0x100) {
            aVar18 = aVar20;
          }
          if (bVar25) {
            bVar25 = *(longlong *)(param_1 + 0x28) == 0;
            uVar14 = FUN_1501efaa0(0,param_1,aVar18,2);
          }
          uVar15 = 0x9e;
          if (((ulonglong)aVar20 & 0xfffffffffffffe08) != 0) {
            uVar15 = 0x97;
          }
          if (uVar14 == 0) {
            uVar14 = (ulonglong)aVar18 & 0xffffffffffffff00;
          }
          else {
            uVar14 = uVar14 | 4;
          }
          LOCK();
          bVar26 = aVar20 == this->mu_;
          if (bVar26) {
            this->mu_ = (atomic<__int64>)(uVar15 & (ulonglong)aVar20 | uVar14);
          }
          UNLOCK();
        } while (!bVar26);
        return;
      }
                    /* WARNING: Subroutine does not return */
      raw_log_internal::RawLog
                (kFatal,"mutex.cc",0x864,"Check %s failed: %s","waitp != nullptr",
                 "UnlockSlow is confused");
    }
    ppuVar19 = (undefined8 **)((ulonglong)aVar20 & 0xffffffffffffff00);
    if ((((ulonglong)aVar20 & 1) != 0) &&
       (0x100 < (longlong)((ulonglong)ppuVar19[5] & 0xffffffffffffff00))) {
      ppuVar19[5] = ppuVar19[5] + -0x20;
      if (param_1 != (SynchWaitParams *)0x0) {
        uVar14 = FUN_1501efaa0(ppuVar19,param_1,aVar20,2);
        if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          raw_log_internal::RawLog
                    (kFatal,"mutex.cc",0x890,"Check %s failed: %s","new_h != nullptr",
                     "waiters disappeared during Enqueue()!");
        }
        aVar20 = (atomic<__int64>)(aVar20._0_4_ & 0xfb | uVar14 | 4);
      }
      this->mu_ = aVar20;
      return;
    }
    if (ppuVar24 != (undefined8 **)0x0) {
      if (*(char *)((longlong)ppuVar19 + 0x13) == '\0') {
                    /* WARNING: Subroutine does not return */
        raw_log_internal::RawLog
                  (kFatal,"mutex.cc",0x89c,"Check %s failed: %s",
                   "old_h == nullptr || h->maybe_unlocking","Mutex queue changed beneath us");
      }
      if (*(char *)(ppuVar24 + 2) == '\0') {
        *(undefined1 *)(ppuVar24 + 2) = 1;
        if (ppuVar24[1] != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          raw_log_internal::RawLog
                    (kFatal,"mutex.cc",0x8a2,"Check %s failed: %s","old_h->skip == nullptr",
                     "illegal skip from head");
        }
        if (ppuVar19 != ppuVar24) {
          puVar17 = *ppuVar24;
          if ((*ppuVar24[4] == *(longlong *)puVar17[4]) &&
             (*(int *)(ppuVar24 + 3) == *(int *)(puVar17 + 3))) {
            plVar2 = (longlong *)((longlong *)puVar17[4])[1];
            plVar3 = (longlong *)ppuVar24[4][1];
            if (plVar3 == (longlong *)0x0) {
              bVar25 = plVar2 == (longlong *)0x0;
            }
            else {
              if ((((plVar2 == (longlong *)0x0) || (plVar3[3] != plVar2[3])) ||
                  (plVar3[4] != plVar2[4])) || ((*plVar3 != *plVar2 || (plVar3[1] != plVar2[1]))))
              goto LAB_1501f2485;
              bVar25 = plVar3[2] == plVar2[2];
            }
            if (bVar25) {
              ppuVar24[1] = puVar17;
            }
          }
        }
      }
    }
LAB_1501f2485:
    ppuVar16 = (undefined8 **)0x0;
    ppuVar11 = (undefined8 **)*ppuVar19;
    if (((undefined *)*ppuVar11[4] == &DAT_1536f5238) && (ppuVar11[4][1] == 0)) {
      *(undefined1 *)((longlong)ppuVar11 + 0x11) = 1;
      local_res18 = 0x20;
      ppuVar23 = ppuVar19;
LAB_1501f24b7:
      ppuVar22 = (undefined8 **)*ppuVar23;
      if (ppuVar22 != ppuVar11) {
                    /* WARNING: Subroutine does not return */
        raw_log_internal::RawLog
                  (kFatal,"mutex.cc",0x91b,"Check %s failed: %s","pw->next == w",
                   "pw not w\'s predecessor");
      }
      ppuVar24 = &local_res20;
      bVar25 = false;
      ppuVar11 = ppuVar19;
      break;
    }
    if (ppuVar22 == (undefined8 **)0x0) {
      if (ppuVar24 == ppuVar19) {
        aVar18 = (atomic<__int64>)((ulonglong)aVar20 & 0xffffffffffffffd6);
        ppuVar19[5] = (undefined8 *)0x0;
        *(undefined1 *)((longlong)ppuVar19 + 0x13) = 0;
        if (param_1 != (SynchWaitParams *)0x0) {
          uVar14 = FUN_1501efaa0(ppuVar19,param_1,aVar20,2);
          aVar18 = (atomic<__int64>)((ulonglong)aVar20 & 0xd6);
          if (uVar14 != 0) {
            aVar18 = (atomic<__int64>)((ulonglong)aVar18 | uVar14 | 4);
          }
        }
        this->mu_ = aVar18;
        return;
      }
    }
    else if (((undefined *)*ppuVar22[4] == &DAT_1536f5238) || (ppuVar19 == ppuVar24)) {
      ppuVar11 = ppuVar22;
      if (ppuVar23 == (undefined8 **)0x0) {
        ppuVar23 = ppuVar19;
      }
      goto LAB_1501f24b7;
    }
    if (ppuVar24 != (undefined8 **)0x0) {
      ppuVar11 = (undefined8 **)*ppuVar24;
      ppuVar16 = ppuVar24;
    }
    *(undefined1 *)(ppuVar19 + 2) = 0;
    if (ppuVar19[1] != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      raw_log_internal::RawLog
                (kFatal,"mutex.cc",0x8e2,"Check %s failed: %s","h->skip == nullptr",
                 "illegal skip from head");
    }
    *(undefined1 *)((longlong)ppuVar19 + 0x13) = 1;
    this->mu_ = aVar20;
    ppuVar24 = ppuVar19;
    if (ppuVar16 == ppuVar19) {
LAB_1501f2310:
      ppuVar11 = (undefined8 **)(ulonglong)local_res8;
    }
    else {
      while( true ) {
        *(undefined1 *)((longlong)ppuVar11 + 0x11) = 0;
        if ((ppuVar11[4][1] == 0) || (cVar8 = (**(code **)(ppuVar11[4][1] + 0x18))(), cVar8 != '\0')
           ) {
          if (ppuVar22 == (undefined8 **)0x0) {
            *(undefined1 *)((longlong)ppuVar11 + 0x11) = 1;
            ppuVar22 = ppuVar11;
            ppuVar23 = ppuVar16;
            if ((undefined *)*ppuVar11[4] == &DAT_1536f5238) {
              local_res18 = 0x20;
              goto LAB_1501f2310;
            }
          }
          else if ((undefined *)*ppuVar11[4] == &DAT_1536f5210) {
            *(undefined1 *)((longlong)ppuVar11 + 0x11) = 1;
          }
          else {
            local_res18 = 0x20;
          }
        }
        ppuVar16 = ppuVar11;
        if ((*(char *)((longlong)ppuVar11 + 0x11) == '\0') &&
           (ppuVar4 = (undefined8 **)ppuVar11[1], ppuVar4 != (undefined8 **)0x0)) {
          ppuVar7 = ppuVar11;
          for (ppuVar6 = (undefined8 **)ppuVar4[1]; ppuVar16 = ppuVar4,
              ppuVar6 != (undefined8 **)0x0; ppuVar6 = (undefined8 **)ppuVar6[1]) {
            ppuVar7[1] = ppuVar6;
            ppuVar4 = ppuVar6;
            ppuVar7 = ppuVar16;
          }
          ppuVar11[1] = ppuVar16;
        }
        ppuVar11 = (undefined8 **)(ulonglong)local_res8;
        if (ppuVar16 == ppuVar19) break;
        ppuVar11 = (undefined8 **)*ppuVar16;
      }
    }
  } while( true );
LAB_1501f27a0:
  if (*(char *)((longlong)ppuVar22 + 0x11) == '\0') {
    ppuVar16 = (undefined8 **)ppuVar22[1];
    ppuVar23 = ppuVar22;
    if (ppuVar16 != (undefined8 **)0x0) {
      ppuVar6 = ppuVar22;
      for (ppuVar4 = (undefined8 **)ppuVar16[1]; ppuVar23 = ppuVar16, ppuVar4 != (undefined8 **)0x0;
          ppuVar4 = (undefined8 **)ppuVar4[1]) {
        ppuVar6[1] = ppuVar4;
        ppuVar16 = ppuVar4;
        ppuVar6 = ppuVar23;
      }
      ppuVar22[1] = ppuVar23;
    }
    bVar25 = true;
  }
  else {
    if (ppuVar23[1] != (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      raw_log_internal::RawLog
                (kFatal,"mutex.cc",0x43c,"Check %s failed: %s","pw->skip == nullptr",
                 "bad skip in DequeueAllWakeable");
    }
    ppuVar16 = (undefined8 **)*ppuVar23;
    puVar17 = *ppuVar16;
    *ppuVar23 = puVar17;
    if (ppuVar11 == ppuVar16) {
      ppuVar11 = ppuVar23;
      if (ppuVar23 == ppuVar16) {
        ppuVar11 = (undefined8 **)0x0;
      }
    }
    else if ((ppuVar23 != ppuVar11) && (cVar8 = FUN_1501f11a0(ppuVar23,puVar17), cVar8 != '\0')) {
      if ((undefined8 *)puVar17[1] != (undefined8 *)0x0) {
        puVar17 = (undefined8 *)puVar17[1];
      }
      ppuVar23[1] = puVar17;
    }
    *ppuVar22 = *ppuVar24;
    *ppuVar24 = ppuVar22;
    ppuVar24 = ppuVar22;
    if ((undefined *)*ppuVar22[4] == &DAT_1536f5238) {
LAB_1501f280c:
      aVar18 = (atomic<__int64>)((ulonglong)(aVar20._0_4_ & 0x10) | 2);
      if (param_1 != (SynchWaitParams *)0x0) {
        ppuVar11 = (undefined8 **)FUN_1501efaa0(ppuVar11,param_1,aVar20,2);
      }
      puVar17 = local_res20;
      if (local_res20 != (undefined8 *)&DAT_00000001) {
        lVar9 = 0;
        if (ppuVar11 != (undefined8 **)0x0) {
          ppuVar11[5] = (undefined8 *)0x0;
          *(undefined1 *)((longlong)ppuVar11 + 0x13) = 0;
          aVar18 = (atomic<__int64>)((ulonglong)aVar18 | (ulonglong)ppuVar11 | local_res18 | 4);
        }
        this->mu_ = aVar18;
        _Var12 = base_internal::CycleClock::Now();
        do {
          if (*(char *)((longlong)puVar17 + 0x12) == '\0') {
            lVar9 = lVar9 + (_Var12 - *(longlong *)(puVar17[4] + 0x30));
            *(__int64 *)(puVar17[4] + 0x30) = _Var12;
            *(undefined1 *)(puVar17[4] + 0x38) = 1;
          }
          puVar5 = (undefined8 *)*puVar17;
          *puVar17 = 0;
          *(undefined4 *)((longlong)puVar17 + 0x1c) = 0;
          AbslInternalPerThreadSemPost_lts_20240722(puVar17);
          puVar17 = puVar5;
          local_res20 = puVar5;
        } while (puVar5 != (undefined8 *)&DAT_00000001);
        if (0 < lVar9) {
          pcVar13 = DAT_154e472a8;
          if (DAT_154e472a8 == (code *)0x0) {
            pcVar13 = (code *)PTR_DummyFunction_154e472b0;
          }
          (*pcVar13)("slow release",this,lVar9);
          pcVar13 = DAT_154e47298;
          if (DAT_154e47298 == (code *)0x0) {
            pcVar13 = (code *)PTR_DummyFunction_154e472a0;
          }
          (*pcVar13)(lVar9);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      raw_log_internal::RawLog
                (kFatal,"mutex.cc",0x932,"Check %s failed: %s","wake_list != kPerThreadSynchNull",
                 "unexpected empty wake list");
    }
  }
  ppuVar22 = (undefined8 **)*ppuVar23;
  if ((ppuVar19 != ppuVar11) || ((ppuVar23 == ppuVar11 && (bVar25)))) goto LAB_1501f280c;
  goto LAB_1501f27a0;
}

// FUN_1501f2b30 @ 1501f2b30

/* WARNING: Removing unreachable block (ram,0x0001501f2b5c) */
/* WARNING: Removing unreachable block (ram,0x0001501f2b64) */

void FUN_1501f2b30(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = DAT_155407810;
  if (param_1 != (int *)0x0) {
    if ((DAT_155407810 & 1) == 0) {
      DAT_155407810 = DAT_155407810 | 1;
      LOCK();
      UNLOCK();
    }
    if ((~(byte)uVar2 & 1) == 0) {
      absl::lts_20240722::base_internal::SpinLock::SlowLock((SpinLock *)&DAT_155407810);
    }
    iVar1 = *param_1;
    *param_1 = iVar1 + -1;
    uVar3 = DAT_155407810;
    uVar4 = DAT_155407810 & 2;
    LOCK();
    UNLOCK();
    uVar2 = DAT_155407810 & 0xfffffff8;
    DAT_155407810 = uVar4;
    if (uVar2 != 0) {
      absl::lts_20240722::base_internal::SpinLock::SlowUnlock((SpinLock *)&DAT_155407810,uVar3);
    }
    if (iVar1 + -1 == 0) {
      absl::lts_20240722::base_internal::LowLevelAlloc::Free(param_1);
    }
  }
  return;
}

// Wait @ 1501f2bd0

/* private: static bool __cdecl
   absl::lts_20240722::synchronization_internal::PerThreadSem::Wait(class
   absl::lts_20240722::synchronization_internal::KernelTimeout) */

bool __cdecl absl::lts_20240722::synchronization_internal::PerThreadSem::Wait(KernelTimeout param_1)

{
  bool bVar1;
  
  bVar1 = (bool)AbslInternalPerThreadSemWait_lts_20240722();
  return bVar1;
}

// WaitCommon @ 1501f2be0

/* private: bool __cdecl absl::lts_20240722::CondVar::WaitCommon(class absl::lts_20240722::Mutex *
   __ptr64,class absl::lts_20240722::synchronization_internal::KernelTimeout) __ptr64 */

bool __thiscall
absl::lts_20240722::CondVar::WaitCommon(CondVar *this,Mutex *param_1,KernelTimeout param_2)

{
  ulonglong uVar1;
  atomic<absl::lts_20240722::base_internal::PerThreadSynch::State> aVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ThreadIdentity *pTVar6;
  ThreadIdentity *pTVar7;
  char cVar8;
  longlong lVar9;
  code *pcVar10;
  ThreadIdentity *pTVar11;
  ThreadIdentity *pTVar12;
  bool bVar13;
  int iVar14;
  MuHowS *pMVar15;
  undefined8 local_78;
  undefined4 local_70;
  MuHowS *local_68;
  undefined8 local_60;
  ulong64 local_58;
  Mutex *local_50;
  ThreadIdentity *local_48;
  CondVar *local_40;
  __int64 local_38;
  undefined1 local_30;
  
  bVar13 = false;
  pMVar15 = (MuHowS *)&DAT_1536f5210;
  if (((ulonglong)param_1->mu_ & 8) != 0) {
    pMVar15 = (MuHowS *)&DAT_1536f5238;
  }
  uVar4 = *(ulonglong *)this;
  pcVar10 = DAT_154e472b8;
  if (DAT_154e472b8 == (code *)0x0) {
    pcVar10 = (code *)PTR_DummyFunction_154e472c0;
  }
  (*pcVar10)("Wait",this);
  if ((uVar4 & 2) != 0) {
    FUN_1501f12b0(this,10);
  }
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar9 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_48 = *(ThreadIdentity **)(lVar9 + 0x9e78);
  if (local_48 == (ThreadIdentity *)0x0) {
    local_48 = synchronization_internal::CreateThreadIdentity();
  }
  local_60 = 0;
  local_68 = pMVar15;
  local_58 = param_2.rep_;
  local_50 = param_1;
  local_40 = this;
  local_38 = base_internal::CycleClock::Now();
  local_30 = 0;
  Mutex::UnlockSlow(param_1,(SynchWaitParams *)&local_68);
  aVar2 = (local_48->per_thread_synch).state;
joined_r0x0001501f2cd5:
  if (aVar2 != (atomic<absl::lts_20240722::base_internal::PerThreadSynch::State>)0x1) {
    if ((local_48->per_thread_synch).waitp == (SynchWaitParams *)0x0) {
                    /* WARNING: Subroutine does not return */
      raw_log_internal::RawLog
                (kFatal,"mutex.cc",0xa4f,"Check %s failed: %s","waitp.thread->waitp != nullptr",
                 "not waiting when should be");
    }
    (local_48->per_thread_synch).waitp = (SynchWaitParams *)0x0;
    pcVar10 = DAT_154e472b8;
    if (DAT_154e472b8 == (code *)0x0) {
      pcVar10 = (code *)PTR_DummyFunction_154e472c0;
    }
    (*pcVar10)("Unwait",this);
    if ((uVar4 & 2) != 0) {
      FUN_1501f12b0(this,0xb);
    }
    Mutex::LockSlow(param_1,pMVar15,(Condition *)0x0,3);
    return bVar13;
  }
  iVar14 = 0;
  cVar8 = AbslInternalPerThreadSemWait_lts_20240722(param_2.rep_);
  pTVar7 = local_48;
  if (cVar8 == '\0') {
    param_2.rep_ = 0xffffffffffffffff;
LAB_1501f2cfe:
    uVar5 = *(ulonglong *)this;
    if ((uVar5 & 1) == 0) {
      LOCK();
      uVar1 = *(ulonglong *)this;
      if (uVar5 == uVar1) {
        *(ulonglong *)this = uVar5 | 1;
      }
      UNLOCK();
      if (uVar5 == uVar1) goto LAB_1501f2d57;
    }
    lVar9 = FUN_1501f03f0();
    iVar3 = *(int *)(lVar9 + 0xc);
    lVar9 = FUN_1501f03f0();
    if (iVar14 < iVar3) {
      iVar14 = iVar14 + 1;
    }
    else if (iVar14 == iVar3) {
      _Thrd_yield();
      iVar14 = iVar14 + 1;
    }
    else {
      local_78 = *(undefined8 *)(lVar9 + 0x10);
      local_70 = *(undefined4 *)(lVar9 + 0x18);
      AbslInternalSleepFor_lts_20240722(&local_78);
      iVar14 = 0;
    }
    goto LAB_1501f2cfe;
  }
  goto LAB_1501f2dc4;
LAB_1501f2d57:
  pTVar11 = (ThreadIdentity *)(uVar5 & 0xfffffffffffffffc);
  if (pTVar11 != (ThreadIdentity *)0x0) {
    pTVar12 = pTVar11;
    for (pTVar6 = (ThreadIdentity *)(pTVar11->per_thread_synch).next;
        (pTVar6 != pTVar7 && (pTVar6 != pTVar11));
        pTVar6 = (ThreadIdentity *)(pTVar6->per_thread_synch).next) {
      pTVar12 = pTVar6;
    }
    if ((ThreadIdentity *)(pTVar12->per_thread_synch).next == pTVar7) {
      (pTVar12->per_thread_synch).next = (pTVar7->per_thread_synch).next;
      if (pTVar11 == pTVar7) {
        if (pTVar12 == pTVar7) {
          pTVar12 = (ThreadIdentity *)0x0;
        }
        (pTVar7->per_thread_synch).next = (PerThreadSynch *)0x0;
        (pTVar7->per_thread_synch).state =
             (atomic<absl::lts_20240722::base_internal::PerThreadSynch::State>)0x0;
        pTVar11 = pTVar12;
      }
      else {
        (pTVar7->per_thread_synch).next = (PerThreadSynch *)0x0;
        (pTVar7->per_thread_synch).state =
             (atomic<absl::lts_20240722::base_internal::PerThreadSynch::State>)0x0;
      }
    }
  }
  *(ulonglong *)this = (ulonglong)((uint)uVar5 & 2) | (ulonglong)pTVar11;
  bVar13 = true;
LAB_1501f2dc4:
  aVar2 = (local_48->per_thread_synch).state;
  goto joined_r0x0001501f2cd5;
}

// Wakeup @ 1501f2e90

/* private: struct absl::lts_20240722::base_internal::PerThreadSynch * __ptr64 __cdecl
   absl::lts_20240722::Mutex::Wakeup(struct absl::lts_20240722::base_internal::PerThreadSynch *
   __ptr64) __ptr64 */

PerThreadSynch * __thiscall absl::lts_20240722::Mutex::Wakeup(Mutex *this,PerThreadSynch *param_1)

{
  PerThreadSynch *pPVar1;
  
  pPVar1 = param_1->next;
  param_1->next = (PerThreadSynch *)0x0;
  param_1->state = (atomic<absl::lts_20240722::base_internal::PerThreadSynch::State>)0x0;
  AbslInternalPerThreadSemPost_lts_20240722(param_1);
  return pPVar1;
}

// has_timeout @ 1501f2ec0

/* public: bool __cdecl
   absl::lts_20240722::synchronization_internal::KernelTimeout::has_timeout(void)const __ptr64 */

bool __thiscall
absl::lts_20240722::synchronization_internal::KernelTimeout::has_timeout(KernelTimeout *this)

{
  return this->rep_ != 0xffffffffffffffff;
}

// load @ 1501f2ed0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: enum absl::lts_20240722::OnDeadlockCycle __cdecl std::_Atomic_storage<enum
   absl::lts_20240722::OnDeadlockCycle,4>::load(enum std::memory_order)const __ptr64 */

OnDeadlockCycle __thiscall
std::_Atomic_storage<absl::lts_20240722::OnDeadlockCycle,4>::load
          (_Atomic_storage<absl::lts_20240722::OnDeadlockCycle,4> *this,memory_order param_1)

{
  return *(OnDeadlockCycle *)this;
}

// load @ 1501f2ef0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: enum absl::lts_20240722::base_internal::PerThreadSynch::State __cdecl
   std::_Atomic_storage<enum absl::lts_20240722::base_internal::PerThreadSynch::State,4>::load(enum
   std::memory_order)const __ptr64 */

State __thiscall
std::_Atomic_storage<absl::lts_20240722::base_internal::PerThreadSynch::State,4>::load
          (_Atomic_storage<absl::lts_20240722::base_internal::PerThreadSynch::State,4> *this,
          memory_order param_1)

{
  return (this->_Storage)._Value;
}

// FUN_1501f2f10 @ 1501f2f10

ulonglong FUN_1501f2f10(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x20));
  return uVar1 & 0xffffffffffffff00;
}

// store @ 1501f2f30

/* public: void __cdecl std::_Atomic_storage<enum absl::lts_20240722::OnDeadlockCycle,4>::store(enum
   absl::lts_20240722::OnDeadlockCycle) __ptr64 */

void __thiscall
std::_Atomic_storage<absl::lts_20240722::OnDeadlockCycle,4>::store
          (_Atomic_storage<absl::lts_20240722::OnDeadlockCycle,4> *this,OnDeadlockCycle param_1)

{
  LOCK();
  *(OnDeadlockCycle *)this = param_1;
  UNLOCK();
  return;
}

// store @ 1501f2f40

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<enum absl::lts_20240722::OnDeadlockCycle,4>::store(enum
   absl::lts_20240722::OnDeadlockCycle,enum std::memory_order) __ptr64 */

void __thiscall
std::_Atomic_storage<absl::lts_20240722::OnDeadlockCycle,4>::store
          (_Atomic_storage<absl::lts_20240722::OnDeadlockCycle,4> *this,OnDeadlockCycle param_1,
          memory_order param_2)

{
  switch(param_2) {
  case memory_order_relaxed:
    *(OnDeadlockCycle *)this = param_1;
    return;
  default:
    LOCK();
    *(OnDeadlockCycle *)this = param_1;
    UNLOCK();
    return;
  case memory_order_release:
    *(OnDeadlockCycle *)this = param_1;
    return;
  }
}

// store @ 1501f2f90

/* public: void __cdecl std::_Atomic_storage<enum
   absl::lts_20240722::base_internal::PerThreadSynch::State,4>::store(enum
   absl::lts_20240722::base_internal::PerThreadSynch::State) __ptr64 */

void __thiscall
std::_Atomic_storage<absl::lts_20240722::base_internal::PerThreadSynch::State,4>::store
          (_Atomic_storage<absl::lts_20240722::base_internal::PerThreadSynch::State,4> *this,
          State param_1)

{
  LOCK();
  (this->_Storage)._Value = param_1;
  UNLOCK();
  return;
}

// store @ 1501f2fa0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<enum
   absl::lts_20240722::base_internal::PerThreadSynch::State,4>::store(enum
   absl::lts_20240722::base_internal::PerThreadSynch::State,enum std::memory_order) __ptr64 */

void __thiscall
std::_Atomic_storage<absl::lts_20240722::base_internal::PerThreadSynch::State,4>::store
          (_Atomic_storage<absl::lts_20240722::base_internal::PerThreadSynch::State,4> *this,
          State param_1,memory_order param_2)

{
  switch(param_2) {
  case memory_order_relaxed:
    (this->_Storage)._Value = param_1;
    return;
  default:
    LOCK();
    (this->_Storage)._Value = param_1;
    UNLOCK();
    return;
  case memory_order_release:
    (this->_Storage)._Value = param_1;
    return;
  }
}

// thread_identity @ 1501f2ff0

/* public: struct absl::lts_20240722::base_internal::ThreadIdentity * __ptr64 __cdecl
   absl::lts_20240722::base_internal::PerThreadSynch::thread_identity(void) __ptr64 */

ThreadIdentity * __thiscall
absl::lts_20240722::base_internal::PerThreadSynch::thread_identity(PerThreadSynch *this)

{
  return (ThreadIdentity *)this;
}

// yield @ 1501f3000

/* void __cdecl std::this_thread::yield(void) */

void __cdecl std::this_thread::yield(void)

{
  _Thrd_yield();
  return;
}


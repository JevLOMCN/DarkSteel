// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 18

// DummyFunction @ 1502445d0

/* private: static void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(void
   const * __ptr64,__int64)>::DummyFunction(void const * __ptr64,__int64) */

void __cdecl
absl::lts_20240722::base_internal::AtomicHook<void_(__cdecl*)(void_const*___ptr64,__int64)>::
DummyFunction(void *param_1,__int64 param_2)

{
  return;
}

// operator()<absl::lts_20240722::base_internal::SpinLock*___ptr64,__int64_const&___ptr64> @ 1502445e0

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(void const *
   __ptr64,__int64)>::operator()<class absl::lts_20240722::base_internal::SpinLock * __ptr64,__int64
   const & __ptr64>(class absl::lts_20240722::base_internal::SpinLock * __ptr64 && __ptr64,__int64
   const & __ptr64)const __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::AtomicHook<void_(__cdecl*)(void_const*___ptr64,__int64)>::
operator()<absl::lts_20240722::base_internal::SpinLock*___ptr64,__int64_const&___ptr64>
          (AtomicHook<void_(__cdecl*)(void_const*___ptr64,__int64)> *this,SpinLock **param_1,
          __int64 *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)this;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001502445f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_1,*param_2);
  return;
}

// FUN_150244600 @ 150244600

void FUN_150244600(atomic<unsigned_int> *param_1,SchedulingMode param_2)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  int iVar3;
  
  LOCK();
  aVar1 = *param_1;
  if (aVar1 == (atomic<unsigned_int>)0x0) {
    *param_1 = (atomic<unsigned_int>)0x65c2937b;
  }
  UNLOCK();
  if ((aVar1 == (atomic<unsigned_int>)0x0) ||
     (uVar2 = absl::lts_20240722::base_internal::SpinLockWait
                        (param_1,3,(SpinLockWaitTransition *)&DAT_1536f9d38,param_2), uVar2 == 0)) {
    iVar3 = absl::lts_20240722::base_internal::NumCPUs();
    DAT_155409ec0 = 1;
    if (1 < iVar3) {
      DAT_155409ec0 = 1000;
    }
    LOCK();
    aVar1 = *param_1;
    *param_1 = (atomic<unsigned_int>)0xdd;
    UNLOCK();
    if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
      AbslInternalSpinLockWake_lts_20240722(param_1,0x301);
      return;
    }
  }
  return;
}

// FUN_150244680 @ 150244680

void FUN_150244680(atomic<unsigned_int> *param_1)

{
  atomic<unsigned_int> aVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_1 != (atomic<unsigned_int>)0xdd) {
    LOCK();
    aVar1 = *param_1;
    if (aVar1 == (atomic<unsigned_int>)0x0) {
      *param_1 = (atomic<unsigned_int>)0x65c2937b;
    }
    UNLOCK();
    if ((aVar1 == (atomic<unsigned_int>)0x0) ||
       (uVar2 = absl::lts_20240722::base_internal::SpinLockWait
                          (param_1,3,(SpinLockWaitTransition *)&DAT_1536f9d38,SCHEDULE_KERNEL_ONLY),
       uVar2 == 0)) {
      iVar3 = absl::lts_20240722::base_internal::NumCPUs();
      DAT_155409ec0 = 1;
      if (1 < iVar3) {
        DAT_155409ec0 = 1000;
      }
      LOCK();
      aVar1 = *param_1;
      *param_1 = (atomic<unsigned_int>)0xdd;
      UNLOCK();
      if (aVar1 == (atomic<unsigned_int>)0x5a308d2) {
        AbslInternalSpinLockWake_lts_20240722(param_1,0x301);
      }
    }
  }
  return;
}

// forward<absl::lts_20240722::base_internal::SpinLock*___ptr64> @ 150244700

/* class absl::lts_20240722::base_internal::SpinLock * __ptr64 && __ptr64 __cdecl std::forward<class
   absl::lts_20240722::base_internal::SpinLock * __ptr64>(class
   absl::lts_20240722::base_internal::SpinLock * __ptr64 & __ptr64) */

SpinLock ** __cdecl
std::forward<absl::lts_20240722::base_internal::SpinLock*___ptr64>(SpinLock **param_1)

{
  return param_1;
}

// FUN_150244720 @ 150244720

void FUN_150244720(void)

{
  int iVar1;
  
  iVar1 = absl::lts_20240722::base_internal::NumCPUs();
  DAT_155409ec0 = 1;
  if (1 < iVar1) {
    DAT_155409ec0 = 1000;
  }
  return;
}

// SpinLock @ 150244750

/* public: __cdecl absl::lts_20240722::base_internal::SpinLock::SpinLock(enum
   absl::lts_20240722::base_internal::SchedulingMode) __ptr64 */

SpinLock * __thiscall
absl::lts_20240722::base_internal::SpinLock::SpinLock(SpinLock *this,SchedulingMode param_1)

{
  atomic<unsigned_int> aVar1;
  
  aVar1 = (atomic<unsigned_int>)0x0;
  if (param_1 == SCHEDULE_COOPERATIVE_AND_KERNEL) {
    aVar1 = (atomic<unsigned_int>)0x2;
  }
  this->lockword_ = aVar1;
  return this;
}

// FUN_150244770 @ 150244770

void FUN_150244770(void)

{
  int iVar1;
  
  iVar1 = absl::lts_20240722::base_internal::NumCPUs();
  DAT_155409ec0 = 1;
  if (1 < iVar1) {
    DAT_155409ec0 = 1000;
  }
  return;
}

// DecodeWaitCycles @ 1502447a0

/* protected: static __int64 __cdecl
   absl::lts_20240722::base_internal::SpinLock::DecodeWaitCycles(unsigned int) */

__int64 __cdecl absl::lts_20240722::base_internal::SpinLock::DecodeWaitCycles(uint param_1)

{
  return ((ulonglong)param_1 & 0xfffffff8) << 4;
}

// DoLoad @ 1502447c0

/* private: void (__cdecl*__cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(void
   const * __ptr64,__int64)>::DoLoad(void)const __ptr64)(void const * __ptr64,__int64) */

_func_void_void_ptr___int64 * __thiscall
absl::lts_20240722::base_internal::AtomicHook<void_(__cdecl*)(void_const*___ptr64,__int64)>::DoLoad
          (AtomicHook<void_(__cdecl*)(void_const*___ptr64,__int64)> *this)

{
  _func_void_void_ptr___int64 *p_Var1;
  
  p_Var1 = *(_func_void_void_ptr___int64 **)this;
  if (p_Var1 == (_func_void_void_ptr___int64 *)0x0) {
    p_Var1 = *(_func_void_void_ptr___int64 **)(this + 8);
  }
  return p_Var1;
}

// DoStore @ 1502447e0

/* private: bool __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(void const *
   __ptr64,__int64)>::DoStore(void (__cdecl*)(void const * __ptr64,__int64)) __ptr64 */

bool __thiscall
absl::lts_20240722::base_internal::AtomicHook<void_(__cdecl*)(void_const*___ptr64,__int64)>::DoStore
          (AtomicHook<void_(__cdecl*)(void_const*___ptr64,__int64)> *this,
          _func_void_void_ptr___int64 *param_1)

{
  _func_void_void_ptr___int64 *p_Var1;
  bool bVar2;
  
  LOCK();
  p_Var1 = *(_func_void_void_ptr___int64 **)this;
  bVar2 = p_Var1 == (_func_void_void_ptr___int64 *)0x0;
  if (bVar2) {
    *(_func_void_void_ptr___int64 **)this = param_1;
    p_Var1 = (_func_void_void_ptr___int64 *)0x0;
  }
  UNLOCK();
  if ((!bVar2) && (p_Var1 != param_1)) {
    return false;
  }
  return true;
}

// EncodeWaitCycles @ 150244800

/* protected: static unsigned int __cdecl
   absl::lts_20240722::base_internal::SpinLock::EncodeWaitCycles(__int64,__int64) */

uint __cdecl
absl::lts_20240722::base_internal::SpinLock::EncodeWaitCycles(__int64 param_1,__int64 param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = param_2 - param_1 >> 7;
  if (0x1fffffff < lVar2) {
    lVar2 = 0x1fffffff;
  }
  uVar1 = (uint)(lVar2 << 3);
  if (uVar1 == 0) {
    return 8;
  }
  if (uVar1 == 8) {
    uVar1 = 0x10;
  }
  return uVar1;
}

// IsCooperative @ 150244840

/* private: static bool __cdecl absl::lts_20240722::base_internal::SpinLock::IsCooperative(enum
   absl::lts_20240722::base_internal::SchedulingMode) */

bool __cdecl absl::lts_20240722::base_internal::SpinLock::IsCooperative(SchedulingMode param_1)

{
  return param_1 == SCHEDULE_COOPERATIVE_AND_KERNEL;
}

// RegisterSpinLockProfiler @ 150244850

/* void __cdecl absl::lts_20240722::base_internal::RegisterSpinLockProfiler(void (__cdecl*)(void
   const * __ptr64,__int64)) */

void __cdecl
absl::lts_20240722::base_internal::RegisterSpinLockProfiler(_func_void_void_ptr___int64 *param_1)

{
  _func_void_void_ptr___int64 *p_Var1;
  
  LOCK();
  p_Var1 = param_1;
  if (DAT_154e48910 != (_func_void_void_ptr___int64 *)0x0) {
    p_Var1 = DAT_154e48910;
  }
  DAT_154e48910 = p_Var1;
  UNLOCK();
  return;
}

// SlowLock @ 150244870

/* private: void __cdecl absl::lts_20240722::base_internal::SpinLock::SlowLock(void) __ptr64 */

void __thiscall absl::lts_20240722::base_internal::SpinLock::SlowLock(SpinLock *this)

{
  atomic<unsigned_int> aVar1;
  atomic<unsigned_int> aVar2;
  __int64 _Var3;
  __int64 _Var4;
  atomic<unsigned_int> aVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  aVar2 = (atomic<unsigned_int>)SpinLoop(this);
  if (((uint)aVar2 & 1) == 0) {
    LOCK();
    aVar5 = this->lockword_;
    bVar11 = aVar2 == aVar5;
    if (bVar11) {
      this->lockword_ = (atomic<unsigned_int>)((uint)aVar2 | 1);
      aVar5 = aVar2;
    }
    UNLOCK();
    if (!bVar11) {
      aVar2 = aVar5;
    }
  }
  if (((uint)aVar2 & 1) != 0) {
    uVar10 = (uint)aVar2 >> 1;
    _Var3 = CycleClock::Now();
    uVar7 = 0;
    iVar9 = 0;
LAB_1502448d0:
    do {
      aVar5 = aVar2;
      if (((uint)aVar2 & 0xfffffff8) == 0) {
        aVar5 = (atomic<unsigned_int>)((uint)aVar2 | 8);
        LOCK();
        aVar1 = this->lockword_;
        bVar11 = aVar2 == aVar1;
        if (bVar11) {
          this->lockword_ = aVar5;
          aVar1 = aVar2;
        }
        aVar2 = aVar1;
        UNLOCK();
        if (bVar11) goto LAB_1502448fe;
        if (((uint)aVar2 & 1) == 0) {
          uVar6 = uVar7 | (uint)aVar2;
          goto LAB_150244951;
        }
        aVar5 = aVar2;
        if (((uint)aVar2 & 0xfffffff8) != 0) goto LAB_1502448fe;
      }
      else {
LAB_1502448fe:
        iVar9 = iVar9 + 1;
        AbslInternalSpinLockDelay_lts_20240722(this,aVar5,iVar9,uVar10 & 1);
        aVar2 = (atomic<unsigned_int>)SpinLoop(this);
        _Var4 = CycleClock::Now();
        lVar8 = _Var4 - _Var3 >> 7;
        if (0x1fffffff < lVar8) {
          lVar8 = 0x1fffffff;
        }
        uVar7 = (uint)(lVar8 << 3);
        if (uVar7 == 0) {
          uVar7 = 8;
        }
        else if (uVar7 == 8) {
          uVar7 = 0x10;
        }
        if (((uint)aVar2 & 1) != 0) goto LAB_1502448d0;
        uVar6 = (uint)aVar2 | uVar7;
LAB_150244951:
        LOCK();
        aVar5 = this->lockword_;
        bVar11 = aVar2 == aVar5;
        if (bVar11) {
          this->lockword_ = (atomic<unsigned_int>)(uVar6 | 1);
          aVar5 = aVar2;
        }
        UNLOCK();
        if (!bVar11) {
          aVar2 = aVar5;
        }
      }
    } while (((uint)aVar2 & 1) != 0);
  }
  return;
}

// SlowUnlock @ 150244990

/* private: void __cdecl absl::lts_20240722::base_internal::SpinLock::SlowUnlock(unsigned int)
   __ptr64 */

void __thiscall absl::lts_20240722::base_internal::SpinLock::SlowUnlock(SpinLock *this,uint param_1)

{
  code *pcVar1;
  
  AbslInternalSpinLockWake_lts_20240722(this,0);
  if ((param_1 & 0xfffffff8) != 8) {
    pcVar1 = DAT_154e48910;
    if (DAT_154e48910 == (code *)0x0) {
      pcVar1 = (code *)PTR_DummyFunction_154e48918;
    }
    (*pcVar1)(this,((ulonglong)param_1 & 0xfffffff8) << 4);
  }
  return;
}

// SpinLoop @ 1502449f0

/* private: unsigned int __cdecl absl::lts_20240722::base_internal::SpinLock::SpinLoop(void) __ptr64
    */

uint __thiscall absl::lts_20240722::base_internal::SpinLock::SpinLoop(SpinLock *this)

{
  atomic<unsigned_int> aVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  
  iVar4 = DAT_155409ec0;
  if (DAT_155409ebc != 0xdd) {
    LOCK();
    bVar6 = DAT_155409ebc == 0;
    if (bVar6) {
      DAT_155409ebc = 0x65c2937b;
    }
    UNLOCK();
    if ((bVar6) ||
       (uVar3 = SpinLockWait((atomic<unsigned_int> *)&DAT_155409ebc,3,
                             (SpinLockWaitTransition *)&DAT_1536f9d38,SCHEDULE_KERNEL_ONLY),
       iVar4 = DAT_155409ec0, uVar3 == 0)) {
      iVar4 = NumCPUs();
      iVar2 = DAT_155409ebc;
      uVar5 = 1;
      if (1 < iVar4) {
        uVar5 = 1000;
      }
      DAT_155409ec0 = (int)uVar5;
      LOCK();
      DAT_155409ebc = 0xdd;
      UNLOCK();
      iVar4 = DAT_155409ec0;
      if (iVar2 == 0x5a308d2) {
        AbslInternalSpinLockWake_lts_20240722
                  (&DAT_155409ebc,CONCAT71((int7)((ulonglong)uVar5 >> 8),1));
        iVar4 = DAT_155409ec0;
      }
    }
  }
  do {
    aVar1 = this->lockword_;
    if (((uint)aVar1 & 1) == 0) {
      return (uint)aVar1;
    }
    iVar4 = iVar4 + -1;
  } while (0 < iVar4);
  return (uint)aVar1;
}

// Store @ 150244aa0

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(void const *
   __ptr64,__int64)>::Store(void (__cdecl*)(void const * __ptr64,__int64)) __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::AtomicHook<void_(__cdecl*)(void_const*___ptr64,__int64)>::Store
          (AtomicHook<void_(__cdecl*)(void_const*___ptr64,__int64)> *this,
          _func_void_void_ptr___int64 *param_1)

{
  LOCK();
  if (*(longlong *)this == 0) {
    *(_func_void_void_ptr___int64 **)this = param_1;
  }
  UNLOCK();
  return;
}


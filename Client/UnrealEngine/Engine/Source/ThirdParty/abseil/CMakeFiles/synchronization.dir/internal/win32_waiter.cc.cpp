// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 9

// LockHolder @ 1501f35b0

/* public: __cdecl absl::lts_20240722::synchronization_internal::LockHolder::LockHolder(struct
   _RTL_SRWLOCK * __ptr64) __ptr64 */

LockHolder * __thiscall
absl::lts_20240722::synchronization_internal::LockHolder::LockHolder
          (LockHolder *this,_RTL_SRWLOCK *param_1)

{
  *(_RTL_SRWLOCK **)this = param_1;
  AcquireSRWLockExclusive(param_1);
  return this;
}

// Win32Waiter @ 1501f35e0

/* public: __cdecl absl::lts_20240722::synchronization_internal::Win32Waiter::Win32Waiter(void)
   __ptr64 */

Win32Waiter * __thiscall
absl::lts_20240722::synchronization_internal::Win32Waiter::Win32Waiter(Win32Waiter *this)

{
  InitializeSRWLock((PSRWLOCK)this);
  InitializeConditionVariable((PCONDITION_VARIABLE)(this + 8));
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// ~LockHolder @ 1501f3610

/* public: __cdecl absl::lts_20240722::synchronization_internal::LockHolder::~LockHolder(void)
   __ptr64 */

void __thiscall
absl::lts_20240722::synchronization_internal::LockHolder::~LockHolder(LockHolder *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001501f3613. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(*(PSRWLOCK *)this);
  return;
}

// GetCond @ 1501f3620

/* public: static struct _RTL_CONDITION_VARIABLE * __ptr64 __cdecl
   absl::lts_20240722::synchronization_internal::Win32Waiter::WinHelper::GetCond(class
   absl::lts_20240722::synchronization_internal::Win32Waiter * __ptr64) */

_RTL_CONDITION_VARIABLE * __cdecl
absl::lts_20240722::synchronization_internal::Win32Waiter::WinHelper::GetCond(Win32Waiter *param_1)

{
  return (_RTL_CONDITION_VARIABLE *)(param_1 + 8);
}

// GetLock @ 1501f3630

/* public: static struct _RTL_SRWLOCK * __ptr64 __cdecl
   absl::lts_20240722::synchronization_internal::Win32Waiter::WinHelper::GetLock(class
   absl::lts_20240722::synchronization_internal::Win32Waiter * __ptr64) */

_RTL_SRWLOCK * __cdecl
absl::lts_20240722::synchronization_internal::Win32Waiter::WinHelper::GetLock(Win32Waiter *param_1)

{
  return (_RTL_SRWLOCK *)param_1;
}

// InternalCondVarPoke @ 1501f3640

/* private: void __cdecl
   absl::lts_20240722::synchronization_internal::Win32Waiter::InternalCondVarPoke(void) __ptr64 */

void __thiscall
absl::lts_20240722::synchronization_internal::Win32Waiter::InternalCondVarPoke(Win32Waiter *this)

{
  if (*(int *)(this + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001501f364a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    WakeConditionVariable((PCONDITION_VARIABLE)(this + 8));
    return;
  }
  return;
}

// Poke @ 1501f3660

/* public: void __cdecl absl::lts_20240722::synchronization_internal::Win32Waiter::Poke(void)
   __ptr64 */

void __thiscall absl::lts_20240722::synchronization_internal::Win32Waiter::Poke(Win32Waiter *this)

{
  AcquireSRWLockExclusive((PSRWLOCK)this);
  if (*(int *)(this + 0x10) != 0) {
    WakeConditionVariable((PCONDITION_VARIABLE)(this + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x0001501f3687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return;
}

// Post @ 1501f36a0

/* public: void __cdecl absl::lts_20240722::synchronization_internal::Win32Waiter::Post(void)
   __ptr64 */

void __thiscall absl::lts_20240722::synchronization_internal::Win32Waiter::Post(Win32Waiter *this)

{
  AcquireSRWLockExclusive((PSRWLOCK)this);
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  if (*(int *)(this + 0x10) != 0) {
    WakeConditionVariable((PCONDITION_VARIABLE)(this + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x0001501f36ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return;
}

// Wait @ 1501f36e0

/* public: bool __cdecl absl::lts_20240722::synchronization_internal::Win32Waiter::Wait(class
   absl::lts_20240722::synchronization_internal::KernelTimeout) __ptr64 */

bool __thiscall
absl::lts_20240722::synchronization_internal::Win32Waiter::Wait
          (Win32Waiter *this,KernelTimeout param_1)

{
  ulong dwMilliseconds;
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  KernelTimeout local_res10;
  
  local_res10.rep_ = param_1.rep_;
  AcquireSRWLockExclusive((PSRWLOCK)this);
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  iVar3 = *(int *)(this + 0x14);
  if (iVar3 == 0) {
    while( true ) {
      dwMilliseconds = KernelTimeout::InMillisecondsFromNow(&local_res10);
      BVar1 = SleepConditionVariableSRW
                        ((PCONDITION_VARIABLE)(this + 8),(PSRWLOCK)this,dwMilliseconds,0);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        if (DVar2 != 0x5b4) {
                    /* WARNING: Subroutine does not return */
          raw_log_internal::RawLog
                    (kFatal,"win32_waiter.cc",0x77,"SleepConditionVariableSRW failed: %lu",DVar2);
        }
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
        ReleaseSRWLockExclusive((PSRWLOCK)this);
        return false;
      }
      iVar3 = *(int *)(this + 0x14);
      if (iVar3 != 0) break;
      WaiterBase::MaybeBecomeIdle();
    }
  }
  *(int *)(this + 0x14) = iVar3 + -1;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return true;
}


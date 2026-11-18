// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 6

// Frequency @ 1501d4ce0

/* public: static double __cdecl absl::lts_20240722::base_internal::CycleClock::Frequency(void) */

double __cdecl absl::lts_20240722::base_internal::CycleClock::Frequency(void)

{
  double dVar1;
  
  dVar1 = UnscaledCycleClock::Frequency();
  return dVar1 * __real_3fe0000000000000;
}

// ShouldLog @ 1501d4d10

/* public: bool __cdecl absl::lts_20240722::log_internal::LogEveryNSecState::ShouldLog(double)
   __ptr64 */

bool __thiscall
absl::lts_20240722::log_internal::LogEveryNSecState::ShouldLog
          (LogEveryNSecState *this,double param_1)

{
  double dVar1;
  __int64 _Var2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  double dVar6;
  
  *(int *)this = *(int *)this + 1;
  _Var2 = base_internal::CycleClock::Now();
  dVar1 = __real_3fe0000000000000;
  lVar4 = *(longlong *)(this + 8);
  do {
    if (_Var2 <= lVar4) {
      return false;
    }
    dVar6 = base_internal::UnscaledCycleClock::Frequency();
    LOCK();
    lVar3 = *(longlong *)(this + 8);
    bVar5 = lVar4 == lVar3;
    if (bVar5) {
      *(longlong *)(this + 8) = (longlong)(dVar6 * dVar1 * param_1 + (double)_Var2);
      lVar3 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar3;
  } while (!bVar5);
  return true;
}

// ShouldLog @ 1501d4db0

/* public: bool __cdecl absl::lts_20240722::log_internal::LogEveryNState::ShouldLog(int) __ptr64 */

bool __thiscall
absl::lts_20240722::log_internal::LogEveryNState::ShouldLog(LogEveryNState *this,int param_1)

{
  uint uVar1;
  
  if ((0 < param_1) &&
     (uVar1 = *(uint *)this, *(uint *)this = uVar1 + 1, uVar1 % (uint)param_1 == 0)) {
    return true;
  }
  return false;
}

// ShouldLog @ 1501d4de0

/* public: bool __cdecl absl::lts_20240722::log_internal::LogEveryPow2State::ShouldLog(void) __ptr64
    */

bool __thiscall
absl::lts_20240722::log_internal::LogEveryPow2State::ShouldLog(LogEveryPow2State *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)this;
  uVar1 = uVar2 + 1;
  *(uint *)this = uVar1;
  return (uVar2 & uVar1) == 0;
}

// ShouldLog @ 1501d4e00

/* public: bool __cdecl absl::lts_20240722::log_internal::LogFirstNState::ShouldLog(int) __ptr64 */

bool __thiscall
absl::lts_20240722::log_internal::LogFirstNState::ShouldLog(LogFirstNState *this,int param_1)

{
  if ((longlong)(ulonglong)*(uint *)this < (longlong)param_1) {
    *(uint *)this = *(uint *)this + 1;
    return true;
  }
  return false;
}

// compare_exchange_weak @ 1501d4e20

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: bool __cdecl std::atomic<__int64>::compare_exchange_weak(__int64 & __ptr64,__int64,enum
   std::memory_order,enum std::memory_order) __ptr64 */

bool __thiscall
std::atomic<__int64>::compare_exchange_weak
          (atomic<__int64> *this,__int64 *param_1,__int64 param_2,memory_order param_3,
          memory_order param_4)

{
  atomic<__int64> aVar1;
  atomic<__int64> aVar2;
  bool bVar3;
  
  aVar1 = (atomic<__int64>)*param_1;
  LOCK();
  aVar2 = *this;
  bVar3 = aVar1 == aVar2;
  if (bVar3) {
    *this = (atomic<__int64>)param_2;
    aVar2 = aVar1;
  }
  UNLOCK();
  if (!bVar3) {
    *param_1 = (__int64)aVar2;
    return false;
  }
  return true;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 9

// _Atomic_address_as<__int64,std::_Atomic_padded<__int64_(__cdecl*)(void)>_> @ 150244ad0

/* __int64 volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<__int64 (__cdecl*)(void)> >(struct std::_Atomic_padded<__int64
   (__cdecl*)(void)> & __ptr64) */

__int64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<__int64_(__cdecl*)(void)>_>
          (_Atomic_padded<__int64_(__cdecl*)(void)> *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<__int64_(__cdecl*)(void)>_> @ 150244ae0

/* __int64 const volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<__int64 (__cdecl*)(void)> >(struct std::_Atomic_padded<__int64
   (__cdecl*)(void)> const & __ptr64) */

__int64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<__int64_(__cdecl*)(void)>_>
          (_Atomic_padded<__int64_(__cdecl*)(void)> *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,__int64_(__cdecl*)(void)> @ 150244af0

/* __int64 __cdecl std::_Atomic_reinterpret_as<__int64,__int64 (__cdecl*)(void)>(__int64
   (__cdecl*const & __ptr64)(void)) */

__int64 __cdecl
std::_Atomic_reinterpret_as<__int64,__int64_(__cdecl*)(void)>(_func___int64 **param_1)

{
  return (__int64)*param_1;
}

// LoadCycleClockSource @ 150244b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static __int64 (__cdecl*__cdecl
   absl::lts_20240722::base_internal::CycleClock::LoadCycleClockSource(void))(void) */

_func___int64 * __cdecl absl::lts_20240722::base_internal::CycleClock::LoadCycleClockSource(void)

{
  if (_cycle_clock_source_ == (_func___int64 *)0x0) {
    return (_func___int64 *)0x0;
  }
  return _cycle_clock_source_;
}

// Now @ 150244b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static __int64 __cdecl absl::lts_20240722::base_internal::CycleClock::Now(void) */

__int64 __cdecl absl::lts_20240722::base_internal::CycleClock::Now(void)

{
  longlong lVar1;
  __int64 _Var2;
  
  if ((_cycle_clock_source_ != (code *)0x0) && (_cycle_clock_source_ != (code *)0x0)) {
    lVar1 = (*_cycle_clock_source_)();
    return lVar1 >> 1;
  }
  _Var2 = UnscaledCycleClock::Now();
  return _Var2 >> 1;
}

// Register @ 150244b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static void __cdecl
   absl::lts_20240722::base_internal::CycleClockSource::Register(__int64 (__cdecl*)(void)) */

void __cdecl absl::lts_20240722::base_internal::CycleClockSource::Register(_func___int64 *param_1)

{
  _cycle_clock_source_ = param_1;
  return;
}

// load @ 150244b80

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: __int64 (__cdecl*__cdecl std::_Atomic_storage<__int64 (__cdecl*)(void),8>::load(enum
   std::memory_order)const __ptr64)(void) */

_func___int64 * __thiscall
std::_Atomic_storage<__int64_(__cdecl*)(void),8>::load
          (_Atomic_storage<__int64_(__cdecl*)(void),8> *this,memory_order param_1)

{
  return *(_func___int64 **)this;
}

// store @ 150244ba0

/* public: void __cdecl std::_Atomic_storage<__int64 (__cdecl*)(void),8>::store(__int64
   (__cdecl*const)(void)) __ptr64 */

void __thiscall
std::_Atomic_storage<__int64_(__cdecl*)(void),8>::store
          (_Atomic_storage<__int64_(__cdecl*)(void),8> *this,_func___int64 *param_1)

{
  LOCK();
  *(_func___int64 **)this = param_1;
  UNLOCK();
  return;
}

// store @ 150244bb0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<__int64 (__cdecl*)(void),8>::store(__int64
   (__cdecl*const)(void),enum std::memory_order) __ptr64 */

void __thiscall
std::_Atomic_storage<__int64_(__cdecl*)(void),8>::store
          (_Atomic_storage<__int64_(__cdecl*)(void),8> *this,_func___int64 *param_1,
          memory_order param_2)

{
  switch(param_2) {
  case memory_order_relaxed:
    *(_func___int64 **)this = param_1;
    return;
  default:
    LOCK();
    *(_func___int64 **)this = param_1;
    UNLOCK();
    return;
  case memory_order_release:
    *(_func___int64 **)this = param_1;
    return;
  }
}


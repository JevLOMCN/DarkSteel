// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 21

// _Atomic_address_as<__int64,std::_Atomic_padded<absl::lts_20240722::TimeZone*___ptr64>_> @ 1501d5a30

/* __int64 volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<class absl::lts_20240722::TimeZone * __ptr64> >(struct
   std::_Atomic_padded<class absl::lts_20240722::TimeZone * __ptr64> & __ptr64) */

__int64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<absl::lts_20240722::TimeZone*___ptr64>_>
          (_Atomic_padded<absl::lts_20240722::TimeZone*___ptr64> *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<absl::lts_20240722::TimeZone*___ptr64>_> @ 1501d5a40

/* __int64 const volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<class absl::lts_20240722::TimeZone * __ptr64> >(struct
   std::_Atomic_padded<class absl::lts_20240722::TimeZone * __ptr64> const & __ptr64) */

__int64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<absl::lts_20240722::TimeZone*___ptr64>_>
          (_Atomic_padded<absl::lts_20240722::TimeZone*___ptr64> *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,absl::lts_20240722::TimeZone*___ptr64> @ 1501d5a50

/* __int64 __cdecl std::_Atomic_reinterpret_as<__int64,class absl::lts_20240722::TimeZone *
   __ptr64>(class absl::lts_20240722::TimeZone * __ptr64 const & __ptr64) */

__int64 __cdecl
std::_Atomic_reinterpret_as<__int64,absl::lts_20240722::TimeZone*___ptr64>(TimeZone **param_1)

{
  return (__int64)*param_1;
}

// addressof<absl::lts_20240722::TimeZone*___ptr64> @ 1501d5a60

/* class absl::lts_20240722::TimeZone * __ptr64 * __ptr64 __cdecl std::addressof<class
   absl::lts_20240722::TimeZone * __ptr64>(class absl::lts_20240722::TimeZone * __ptr64 & __ptr64)
    */

TimeZone ** __cdecl std::addressof<absl::lts_20240722::TimeZone*___ptr64>(TimeZone **param_1)

{
  return param_1;
}

// EnableSymbolizeLogStackTrace @ 1501d5a70

/* void __cdecl absl::lts_20240722::log_internal::EnableSymbolizeLogStackTrace(bool) */

void __cdecl absl::lts_20240722::log_internal::EnableSymbolizeLogStackTrace(bool param_1)

{
  DAT_154e47258 = param_1;
  return;
}

// ExitOnDFatal @ 1501d5a80

/* bool __cdecl absl::lts_20240722::log_internal::ExitOnDFatal(void) */

bool __cdecl absl::lts_20240722::log_internal::ExitOnDFatal(void)

{
  return (bool)DAT_154e47259;
}

// IsInitialized @ 1501d5a90

/* bool __cdecl absl::lts_20240722::log_internal::IsInitialized(void) */

bool __cdecl absl::lts_20240722::log_internal::IsInitialized(void)

{
  return (bool)DAT_155407710;
}

// MaxFramesInLogStackTrace @ 1501d5aa0

/* int __cdecl absl::lts_20240722::log_internal::MaxFramesInLogStackTrace(void) */

int __cdecl absl::lts_20240722::log_internal::MaxFramesInLogStackTrace(void)

{
  return DAT_154e4725c;
}

// SetExitOnDFatal @ 1501d5ab0

/* void __cdecl absl::lts_20240722::log_internal::SetExitOnDFatal(bool) */

void __cdecl absl::lts_20240722::log_internal::SetExitOnDFatal(bool param_1)

{
  DAT_154e47259 = param_1;
  return;
}

// SetInitialized @ 1501d5ac0

/* void __cdecl absl::lts_20240722::log_internal::SetInitialized(void) */

void __cdecl absl::lts_20240722::log_internal::SetInitialized(void)

{
  DAT_155407710 = 1;
  return;
}

// SetMaxFramesInLogStackTrace @ 1501d5ae0

/* void __cdecl absl::lts_20240722::log_internal::SetMaxFramesInLogStackTrace(int) */

void __cdecl absl::lts_20240722::log_internal::SetMaxFramesInLogStackTrace(int param_1)

{
  DAT_154e4725c = param_1;
  return;
}

// SetSuppressSigabortTrace @ 1501d5af0

/* bool __cdecl absl::lts_20240722::log_internal::SetSuppressSigabortTrace(bool) */

bool __cdecl absl::lts_20240722::log_internal::SetSuppressSigabortTrace(bool param_1)

{
  undefined1 uVar1;
  
  uVar1 = DAT_155407711;
  LOCK();
  DAT_155407711 = param_1;
  UNLOCK();
  return (bool)uVar1;
}

// SetTimeZone @ 1501d5b00

/* WARNING: Type propagation algorithm not settling */
/* void __cdecl absl::lts_20240722::log_internal::SetTimeZone(class absl::lts_20240722::TimeZone) */

void __cdecl absl::lts_20240722::log_internal::SetTimeZone(TimeZone param_1)

{
  time_zone *ptVar1;
  bool bVar2;
  
  ptVar1 = ::operator_new(8);
  if (ptVar1 == (time_zone *)0x0) {
    ptVar1 = (time_zone *)0x0;
  }
  else {
    ptVar1->impl_ = (Impl *)param_1.cz_.impl_;
  }
  LOCK();
  bVar2 = DAT_155407718 != (time_zone *)0x0;
  if (bVar2) {
    ptVar1 = DAT_155407718;
  }
  DAT_155407718 = ptVar1;
  UNLOCK();
  if (!bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  raw_log_internal::RawLog
            (kFatal,"globals.cc",0x69,"absl::log_internal::SetTimeZone() has already been called");
}

// ShouldSymbolizeLogStackTrace @ 1501d5b60

/* bool __cdecl absl::lts_20240722::log_internal::ShouldSymbolizeLogStackTrace(void) */

bool __cdecl absl::lts_20240722::log_internal::ShouldSymbolizeLogStackTrace(void)

{
  return (bool)DAT_154e47258;
}

// SuppressSigabortTrace @ 1501d5b70

/* bool __cdecl absl::lts_20240722::log_internal::SuppressSigabortTrace(void) */

bool __cdecl absl::lts_20240722::log_internal::SuppressSigabortTrace(void)

{
  return (bool)DAT_155407711;
}

// TimeZone @ 1501d5b80

/* class absl::lts_20240722::TimeZone const * __ptr64 __cdecl
   absl::lts_20240722::log_internal::TimeZone(void) */

TimeZone * __cdecl absl::lts_20240722::log_internal::TimeZone(void)

{
  return DAT_155407718;
}

// WriteToStderr @ 1501d5b90

/* void __cdecl absl::lts_20240722::log_internal::WriteToStderr(class
   std::basic_string_view<char,struct std::char_traits<char> >,enum absl::lts_20240722::LogSeverity)
    */

void __cdecl
absl::lts_20240722::log_internal::WriteToStderr
          (basic_string_view<char,std::char_traits<char>_> *param_1,LogSeverity param_2)

{
  FILE *pFVar1;
  
  if (param_1->_Mysize != 0) {
    pFVar1 = (FILE *)__acrt_iob_func(2);
    fwrite(param_1->_Mydata,param_1->_Mysize,1,pFVar1);
    if (0 < (int)param_2) {
      pFVar1 = (FILE *)__acrt_iob_func(2);
      fflush(pFVar1);
    }
  }
  return;
}

// compare_exchange_strong @ 1501d5c00

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: bool __cdecl std::_Atomic_storage<class absl::lts_20240722::TimeZone *
   __ptr64,8>::compare_exchange_strong(class absl::lts_20240722::TimeZone * __ptr64 & __ptr64,class
   absl::lts_20240722::TimeZone * __ptr64 const,enum std::memory_order) __ptr64 */

bool __thiscall
std::_Atomic_storage<absl::lts_20240722::TimeZone*___ptr64,8>::compare_exchange_strong
          (_Atomic_storage<absl::lts_20240722::TimeZone*___ptr64,8> *this,TimeZone **param_1,
          TimeZone *param_2,memory_order param_3)

{
  TimeZone *pTVar1;
  TimeZone *pTVar2;
  bool bVar3;
  
  pTVar1 = *param_1;
  LOCK();
  pTVar2 = *(TimeZone **)this;
  bVar3 = pTVar1 == pTVar2;
  if (bVar3) {
    *(TimeZone **)this = param_2;
    pTVar2 = pTVar1;
  }
  UNLOCK();
  if (!bVar3) {
    *param_1 = pTVar2;
    return false;
  }
  return true;
}

// compare_exchange_strong @ 1501d5c20

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: bool __cdecl std::atomic<class absl::lts_20240722::TimeZone *
   __ptr64>::compare_exchange_strong(class absl::lts_20240722::TimeZone * __ptr64 & __ptr64,class
   absl::lts_20240722::TimeZone * __ptr64 const,enum std::memory_order,enum std::memory_order)
   __ptr64 */

bool __thiscall
std::atomic<absl::lts_20240722::TimeZone*___ptr64>::compare_exchange_strong
          (atomic<absl::lts_20240722::TimeZone*___ptr64> *this,TimeZone **param_1,TimeZone *param_2,
          memory_order param_3,memory_order param_4)

{
  TimeZone *pTVar1;
  TimeZone *pTVar2;
  bool bVar3;
  
  pTVar1 = *param_1;
  LOCK();
  pTVar2 = *(TimeZone **)this;
  bVar3 = pTVar1 == pTVar2;
  if (bVar3) {
    *(TimeZone **)this = param_2;
    pTVar2 = pTVar1;
  }
  UNLOCK();
  if (!bVar3) {
    *param_1 = pTVar2;
    return false;
  }
  return true;
}

// exchange @ 1501d5c40

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: bool __cdecl std::_Atomic_storage<bool,1>::exchange(bool,enum std::memory_order) __ptr64
    */

bool __thiscall
std::_Atomic_storage<bool,1>::exchange
          (_Atomic_storage<bool,1> *this,bool param_1,memory_order param_2)

{
  bool bVar1;
  
  LOCK();
  bVar1 = (this->_Storage)._Value;
  (this->_Storage)._Value = param_1;
  UNLOCK();
  return bVar1;
}

// load @ 1501d5c50

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: class absl::lts_20240722::TimeZone * __ptr64 __cdecl std::_Atomic_storage<class
   absl::lts_20240722::TimeZone * __ptr64,8>::load(enum std::memory_order)const __ptr64 */

TimeZone * __thiscall
std::_Atomic_storage<absl::lts_20240722::TimeZone*___ptr64,8>::load
          (_Atomic_storage<absl::lts_20240722::TimeZone*___ptr64,8> *this,memory_order param_1)

{
  return *(TimeZone **)this;
}


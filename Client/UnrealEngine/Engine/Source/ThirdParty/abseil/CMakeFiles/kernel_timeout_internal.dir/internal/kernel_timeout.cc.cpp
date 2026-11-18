// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 25

// duration<__int64,std::ratio<1,10000000>_><__int64,std::ratio<1,1000000>,0> @ 15024c3a0

/* public: __cdecl std::chrono::duration<__int64,struct std::ratio<1,10000000>
   >::duration<__int64,struct std::ratio<1,10000000> ><__int64,struct std::ratio<1,1000000>,0>(class
   std::chrono::duration<__int64,struct std::ratio<1,1000000> > const & __ptr64) __ptr64 */

duration<__int64,std::ratio<1,10000000>_> * __thiscall
std::chrono::duration<__int64,std::ratio<1,10000000>_>::
duration<__int64,std::ratio<1,10000000>_><__int64,std::ratio<1,1000000>,0>
          (duration<__int64,std::ratio<1,10000000>_> *this,
          duration<__int64,std::ratio<1,1000000>_> *param_1)

{
  this->_MyRep = param_1->_MyRep * 10;
  return this;
}

// operator+<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>,__int64,std::ratio<1,1000000>_> @ 15024c3c0

/* class std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > > __cdecl
   std::chrono::operator+<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> >,__int64,struct
   std::ratio<1,1000000> >(class std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > > const & __ptr64,class
   std::chrono::duration<__int64,struct std::ratio<1,1000000> > const & __ptr64) */

time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
__cdecl std::chrono::
        operator+<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>,__int64,std::ratio<1,1000000>_>
                  (time_point<struct_std::chrono::system_clock,class_std::chrono::duration<__int64,struct_std::ratio<1,10000000>_>_>
                   *param_1,duration<__int64,std::ratio<1,1000000>_> *param_2)

{
  longlong *in_R8;
  
  *(long64 *)param_1 = param_2->_MyRep + *in_R8 * 10;
  return (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
          )(duration<__int64,std::ratio<1,10000000>_>)param_1;
}

// operator+<__int64,std::ratio<1,10000000>,__int64,std::ratio<1,1000000>_> @ 15024c3e0

/* class std::chrono::duration<__int64,struct std::ratio<1,10000000> > __cdecl
   std::chrono::operator+<__int64,struct std::ratio<1,10000000>,__int64,struct std::ratio<1,1000000>
   >(class std::chrono::duration<__int64,struct std::ratio<1,10000000> > const & __ptr64,class
   std::chrono::duration<__int64,struct std::ratio<1,1000000> > const & __ptr64) */

duration<__int64,std::ratio<1,10000000>_> __cdecl
std::chrono::operator+<__int64,std::ratio<1,10000000>,__int64,std::ratio<1,1000000>_>
          (duration<__int64,struct_std::ratio<1,10000000>_> *param_1,
          duration<__int64,std::ratio<1,1000000>_> *param_2)

{
  longlong *in_R8;
  
  *(long64 *)param_1 = param_2->_MyRep + *in_R8 * 10;
  return (duration<__int64,std::ratio<1,10000000>_>)(long64)param_1;
}

// duration_cast<std::chrono::duration<__int64,std::ratio<1,1000000000>_>,__int64,std::ratio<1,1000000000>,0> @ 15024c400

/* class std::chrono::duration<__int64,struct std::ratio<1,1000000000> > __cdecl
   std::chrono::duration_cast<class std::chrono::duration<__int64,struct std::ratio<1,1000000000>
   >,__int64,struct std::ratio<1,1000000000>,0>(class std::chrono::duration<__int64,struct
   std::ratio<1,1000000000> > const & __ptr64) */

duration<__int64,std::ratio<1,1000000000>_> __cdecl
std::chrono::
duration_cast<std::chrono::duration<__int64,std::ratio<1,1000000000>_>,__int64,std::ratio<1,1000000000>,0>
          (duration<__int64,struct_std::ratio<1,1000000000>_> *param_1)

{
  undefined8 *in_RDX;
  
  *(undefined8 *)param_1 = *in_RDX;
  return (duration<__int64,std::ratio<1,1000000000>_>)(long64)param_1;
}

// duration_cast<std::chrono::duration<__int64,std::ratio<1,10000000>_>,__int64,std::ratio<1,1000000>,0> @ 15024c410

/* class std::chrono::duration<__int64,struct std::ratio<1,10000000> > __cdecl
   std::chrono::duration_cast<class std::chrono::duration<__int64,struct std::ratio<1,10000000>
   >,__int64,struct std::ratio<1,1000000>,0>(class std::chrono::duration<__int64,struct
   std::ratio<1,1000000> > const & __ptr64) */

duration<__int64,std::ratio<1,10000000>_> __cdecl
std::chrono::
duration_cast<std::chrono::duration<__int64,std::ratio<1,10000000>_>,__int64,std::ratio<1,1000000>,0>
          (duration<__int64,std::ratio<1,1000000>_> *param_1)

{
  longlong *in_RDX;
  
  param_1->_MyRep = *in_RDX * 10;
  return (duration<__int64,std::ratio<1,10000000>_>)(long64)param_1;
}

// duration_cast<std::chrono::duration<__int64,std::ratio<1,1000000>_>,__int64,std::ratio<1,1000000000>,0> @ 15024c430

/* class std::chrono::duration<__int64,struct std::ratio<1,1000000> > __cdecl
   std::chrono::duration_cast<class std::chrono::duration<__int64,struct std::ratio<1,1000000>
   >,__int64,struct std::ratio<1,1000000000>,0>(class std::chrono::duration<__int64,struct
   std::ratio<1,1000000000> > const & __ptr64) */

duration<__int64,std::ratio<1,1000000>_> __cdecl
std::chrono::
duration_cast<std::chrono::duration<__int64,std::ratio<1,1000000>_>,__int64,std::ratio<1,1000000000>,0>
          (duration<__int64,std::ratio<1,1000000000>_> *param_1)

{
  longlong *in_RDX;
  
  param_1->_MyRep = *in_RDX / 1000;
  return (duration<__int64,std::ratio<1,1000000>_>)(long64)param_1;
}

// max<__int64> @ 15024c460

/* __int64 const & __ptr64 __cdecl std::max<__int64>(__int64 const & __ptr64,__int64 const &
   __ptr64) */

__int64 * __cdecl std::max<__int64>(__int64 *param_1,__int64 *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_> @ 15024c480

/* public: __cdecl std::chrono::time_point<struct std::chrono::steady_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1000000000> > >::time_point<struct
   std::chrono::steady_clock,class std::chrono::duration<__int64,struct std::ratio<1,1000000000> >
   >(class std::chrono::duration<__int64,struct std::ratio<1,1000000000> > const & __ptr64) __ptr64
    */

time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_> *
__thiscall
std::chrono::
time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_>::
time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_>
          (time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_>
           *this,duration<__int64,std::ratio<1,1000000000>_> *param_1)

{
  (this->_MyDur)._MyRep = param_1->_MyRep;
  return this;
}

// KernelTimeout @ 15024c490

/* public: __cdecl absl::lts_20240722::synchronization_internal::KernelTimeout::KernelTimeout(class
   absl::lts_20240722::Duration) __ptr64 */

KernelTimeout * __thiscall
absl::lts_20240722::synchronization_internal::KernelTimeout::KernelTimeout
          (KernelTimeout *this,Duration *param_1)

{
  __int64 _Var1;
  longlong lVar2;
  Duration local_18;
  
  if ((param_1->rep_hi_ == (HiRep)0x7fffffffffffffff) && (param_1->rep_lo_ == 0xffffffff)) {
    this->rep_ = 0xffffffffffffffff;
    return this;
  }
  local_18.rep_hi_ = param_1->rep_hi_;
  local_18.rep_lo_ = param_1->rep_lo_;
  _Var1 = ToInt64Nanoseconds(&local_18);
  lVar2 = 0;
  if (-1 < _Var1) {
    lVar2 = _Var1;
  }
  _Var1 = SteadyClockNow();
  if (0x7fffffffffffffff - _Var1 < lVar2) {
    this->rep_ = 0xffffffffffffffff;
    return this;
  }
  this->rep_ = (_Var1 + lVar2) * 2 | 1;
  return this;
}

// KernelTimeout @ 15024c570

/* public: __cdecl absl::lts_20240722::synchronization_internal::KernelTimeout::KernelTimeout(class
   absl::lts_20240722::Time) __ptr64 */

KernelTimeout * __thiscall
absl::lts_20240722::synchronization_internal::KernelTimeout::KernelTimeout
          (KernelTimeout *this,Time *param_1)

{
  __int64 _Var1;
  longlong lVar2;
  Time local_18;
  
  if (((param_1->rep_).rep_hi_ != (HiRep)0x7fffffffffffffff) ||
     ((param_1->rep_).rep_lo_ != 0xffffffff)) {
    local_18.rep_.rep_hi_ = (param_1->rep_).rep_hi_;
    local_18.rep_.rep_lo_ = (param_1->rep_).rep_lo_;
    _Var1 = ToUnixNanos(&local_18);
    lVar2 = 0;
    if (-1 < _Var1) {
      lVar2 = _Var1;
    }
    if (lVar2 < 0x7fffffffffffffff) {
      this->rep_ = lVar2 * 2;
      return this;
    }
  }
  this->rep_ = 0xffffffffffffffff;
  return this;
}

// InMillisecondsFromNow @ 15024c620

/* public: unsigned long __cdecl
   absl::lts_20240722::synchronization_internal::KernelTimeout::InMillisecondsFromNow(void)const
   __ptr64 */

ulong __thiscall
absl::lts_20240722::synchronization_internal::KernelTimeout::InMillisecondsFromNow
          (KernelTimeout *this)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = this->rep_;
  if (uVar2 != 0xffffffffffffffff) {
    if ((~(byte)uVar2 & 1) == 0) {
      lVar1 = SteadyClockNow();
    }
    else {
      lVar1 = GetCurrentTimeNanos();
    }
    uVar2 = (uVar2 >> 1) - lVar1;
    if ((longlong)uVar2 < 0) {
      uVar2 = 0;
    }
    if ((uVar2 < 0x7ffffffffff0bdc0) && (uVar2 + 999999 < 0xf424000000000)) {
      return (ulong)((uVar2 + 999999) / 1000000);
    }
  }
  return 0xffffffff;
}

// InNanosecondsFromNow @ 15024c6b0

/* private: __int64 __cdecl
   absl::lts_20240722::synchronization_internal::KernelTimeout::InNanosecondsFromNow(void)const
   __ptr64 */

__int64 __thiscall
absl::lts_20240722::synchronization_internal::KernelTimeout::InNanosecondsFromNow
          (KernelTimeout *this)

{
  ulonglong uVar1;
  longlong lVar2;
  __int64 _Var3;
  
  uVar1 = this->rep_;
  if (uVar1 == 0xffffffffffffffff) {
    return 0x7fffffffffffffff;
  }
  if ((~(byte)uVar1 & 1) == 0) {
    lVar2 = SteadyClockNow();
  }
  else {
    lVar2 = GetCurrentTimeNanos();
  }
  _Var3 = (uVar1 >> 1) - lVar2;
  if (_Var3 < 0) {
    _Var3 = 0;
  }
  return _Var3;
}

// MakeAbsNanos @ 15024c710

/* public: __int64 __cdecl
   absl::lts_20240722::synchronization_internal::KernelTimeout::MakeAbsNanos(void)const __ptr64 */

__int64 __thiscall
absl::lts_20240722::synchronization_internal::KernelTimeout::MakeAbsNanos(KernelTimeout *this)

{
  ulonglong uVar1;
  __int64 _Var2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = this->rep_;
  if (uVar1 == 0xffffffffffffffff) {
    return 0x7fffffffffffffff;
  }
  uVar3 = uVar1 >> 1;
  if ((uVar1 & 1) != 0) {
    _Var2 = SteadyClockNow();
    lVar4 = uVar3 - _Var2;
    if (lVar4 < 0) {
      lVar4 = 0;
    }
    _Var2 = GetCurrentTimeNanos();
    if (0x7fffffffffffffff - _Var2 < lVar4) {
      return 0x7fffffffffffffff;
    }
    return lVar4 + _Var2;
  }
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  return uVar3;
}

// MakeAbsTimespec @ 15024c7b0

/* public: struct timespec __cdecl
   absl::lts_20240722::synchronization_internal::KernelTimeout::MakeAbsTimespec(void)const __ptr64
    */

timespec * __thiscall
absl::lts_20240722::synchronization_internal::KernelTimeout::MakeAbsTimespec
          (KernelTimeout *this,timespec *__return_storage_ptr__)

{
  long lVar1;
  undefined4 uVar2;
  __int64 _Var3;
  timespec *ptVar4;
  longlong lVar5;
  HiRep local_38;
  uint local_30;
  Duration local_28;
  timespec local_18;
  
  _Var3 = MakeAbsNanos(this);
  local_38 = (HiRep)(_Var3 / 1000000000);
  lVar5 = (_Var3 % 1000000000) * 4;
  local_30 = (uint)lVar5;
  if (lVar5 < 0) {
    local_38 = (HiRep)((longlong)local_38 + -1);
    local_30 = local_30 + 4000000000;
  }
  local_28.rep_hi_ = local_38;
  local_28.rep_lo_ = local_30;
  ptVar4 = ToTimespec(&local_18,&local_28);
  lVar1 = ptVar4->tv_nsec;
  uVar2 = *(undefined4 *)&ptVar4->field_0xc;
  __return_storage_ptr__->tv_sec = ptVar4->tv_sec;
  __return_storage_ptr__->tv_nsec = lVar1;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar2;
  return __return_storage_ptr__;
}

// MakeRelativeTimespec @ 15024c860

/* public: struct timespec __cdecl
   absl::lts_20240722::synchronization_internal::KernelTimeout::MakeRelativeTimespec(void)const
   __ptr64 */

timespec * __thiscall
absl::lts_20240722::synchronization_internal::KernelTimeout::MakeRelativeTimespec
          (KernelTimeout *this,timespec *__return_storage_ptr__)

{
  ulonglong uVar1;
  long lVar2;
  undefined4 uVar3;
  timespec *ptVar4;
  longlong lVar5;
  HiRep local_38;
  uint local_30;
  Duration local_28;
  timespec local_18;
  
  uVar1 = this->rep_;
  if (uVar1 == 0xffffffffffffffff) {
    local_38.lo_ = 0x25c17d04;
    local_38.hi_ = 2;
    lVar5 = 0xcbcb5ffc;
  }
  else {
    if ((~(byte)uVar1 & 1) == 0) {
      lVar5 = SteadyClockNow();
    }
    else {
      lVar5 = GetCurrentTimeNanos();
    }
    lVar5 = (uVar1 >> 1) - lVar5;
    if (lVar5 < 0) {
      lVar5 = 0;
    }
    local_38 = (HiRep)(lVar5 / 1000000000);
    lVar5 = (lVar5 % 1000000000) * 4;
    if (lVar5 < 0) {
      local_38 = (HiRep)((longlong)local_38 + -1);
      local_30 = (int)lVar5 + 4000000000;
      goto LAB_15024c898;
    }
  }
  local_30 = (uint)lVar5;
LAB_15024c898:
  local_28.rep_hi_ = local_38;
  local_28.rep_lo_ = local_30;
  ptVar4 = ToTimespec(&local_18,&local_28);
  lVar2 = ptVar4->tv_nsec;
  uVar3 = *(undefined4 *)&ptVar4->field_0xc;
  __return_storage_ptr__->tv_sec = ptVar4->tv_sec;
  __return_storage_ptr__->tv_nsec = lVar2;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar3;
  return __return_storage_ptr__;
}

// RawAbsNanos @ 15024c950

/* private: __int64 __cdecl
   absl::lts_20240722::synchronization_internal::KernelTimeout::RawAbsNanos(void)const __ptr64 */

__int64 __thiscall
absl::lts_20240722::synchronization_internal::KernelTimeout::RawAbsNanos(KernelTimeout *this)

{
  return this->rep_ >> 1;
}

// SteadyClockNow @ 15024c960

/* private: static __int64 __cdecl
   absl::lts_20240722::synchronization_internal::KernelTimeout::SteadyClockNow(void) */

__int64 __cdecl absl::lts_20240722::synchronization_internal::KernelTimeout::SteadyClockNow(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = _Query_perf_frequency();
  lVar2 = _Query_perf_counter();
  if (lVar1 == 10000000) {
    return lVar2 * 100;
  }
  if (lVar1 == 24000000) {
    lVar1 = lVar2 + SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar2),8);
    lVar3 = (lVar1 >> 0x18) - (lVar1 >> 0x3f);
    lVar1 = (lVar2 + lVar3 * -24000000) * 1000000000;
    lVar1 = SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar1),8) + lVar1;
    return lVar3 * 1000000000 + ((lVar1 >> 0x18) - (lVar1 >> 0x3f));
  }
  return ((lVar2 % lVar1) * 1000000000) / lVar1 + (lVar2 / lVar1) * 1000000000;
}

// SupportsSteadyClock @ 15024ca20

/* public: static bool __cdecl
   absl::lts_20240722::synchronization_internal::KernelTimeout::SupportsSteadyClock(void) */

bool __cdecl absl::lts_20240722::synchronization_internal::KernelTimeout::SupportsSteadyClock(void)

{
  return true;
}

// ToChronoDuration @ 15024ca30

/* public: class std::chrono::duration<__int64,struct std::ratio<1,1000000000> > __cdecl
   absl::lts_20240722::synchronization_internal::KernelTimeout::ToChronoDuration(void)const __ptr64
    */

duration<__int64,std::ratio<1,1000000000>_> __thiscall
absl::lts_20240722::synchronization_internal::KernelTimeout::ToChronoDuration(KernelTimeout *this)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *in_RDX;
  
  uVar1 = this->rep_;
  if (uVar1 == 0xffffffffffffffff) {
    *in_RDX = 0x7fffffffffffffff;
    return (duration<__int64,std::ratio<1,1000000000>_>)(long64)in_RDX;
  }
  if ((~(byte)uVar1 & 1) == 0) {
    lVar2 = SteadyClockNow();
  }
  else {
    lVar2 = GetCurrentTimeNanos();
  }
  lVar2 = (uVar1 >> 1) - lVar2;
  if (lVar2 < 0) {
    lVar2 = 0;
  }
  *in_RDX = lVar2;
  return (duration<__int64,std::ratio<1,1000000000>_>)(long64)in_RDX;
}

// ToChronoTimePoint @ 15024caa0

/* public: class std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > > __cdecl
   absl::lts_20240722::synchronization_internal::KernelTimeout::ToChronoTimePoint(void)const __ptr64
    */

time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
__thiscall
absl::lts_20240722::synchronization_internal::KernelTimeout::ToChronoTimePoint(KernelTimeout *this)

{
  __int64 _Var1;
  duration<__int64,std::ratio<1,10000000>_> in_RDX;
  
  if (this->rep_ == 0xffffffffffffffff) {
    *(longlong *)in_RDX._MyRep = 0x7fffffffffffffff;
    return (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
            )(duration<__int64,std::ratio<1,10000000>_>)in_RDX._MyRep;
  }
  _Var1 = MakeAbsNanos(this);
  *(longlong *)in_RDX._MyRep = (_Var1 / 1000) * 10;
  return (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
          )(duration<__int64,std::ratio<1,10000000>_>)in_RDX._MyRep;
}

// count @ 15024cb10

/* public: __int64 __cdecl std::chrono::duration<__int64,struct std::ratio<1,1000000>
   >::count(void)const __ptr64 */

__int64 __thiscall
std::chrono::duration<__int64,std::ratio<1,1000000>_>::count
          (duration<__int64,std::ratio<1,1000000>_> *this)

{
  return this->_MyRep;
}

// is_absolute_timeout @ 15024cb20

/* public: bool __cdecl
   absl::lts_20240722::synchronization_internal::KernelTimeout::is_absolute_timeout(void)const
   __ptr64 */

bool __thiscall
absl::lts_20240722::synchronization_internal::KernelTimeout::is_absolute_timeout
          (KernelTimeout *this)

{
  return (bool)(~(byte)this->rep_ & 1);
}

// is_relative_timeout @ 15024cb30

/* public: bool __cdecl
   absl::lts_20240722::synchronization_internal::KernelTimeout::is_relative_timeout(void)const
   __ptr64 */

bool __thiscall
absl::lts_20240722::synchronization_internal::KernelTimeout::is_relative_timeout
          (KernelTimeout *this)

{
  return (bool)((byte)this->rep_ & 1);
}

// max @ 15024cb40

/* public: static class std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > > __cdecl
   std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > >::max(void) */

void __cdecl
std::chrono::
time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>::max
          (void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0x7fffffffffffffff;
  return;
}

// time_since_epoch @ 15024cb60

/* public: class std::chrono::duration<__int64,struct std::ratio<1,1000000000> > __cdecl
   std::chrono::time_point<struct std::chrono::steady_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1000000000> > >::time_since_epoch(void)const
   __ptr64 */

duration<__int64,std::ratio<1,1000000000>_> __thiscall
std::chrono::
time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_>::
time_since_epoch(time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_>
                 *this)

{
  long64 *in_RDX;
  
  *in_RDX = (this->_MyDur)._MyRep;
  return (duration<__int64,std::ratio<1,1000000000>_>)(long64)in_RDX;
}


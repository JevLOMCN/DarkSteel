// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 12

// Milliseconds<unsigned_long,0> @ 14f9039d0

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::Milliseconds<unsigned
   long,0>(unsigned long) */

Duration * __cdecl
absl::lts_20240722::Milliseconds<unsigned_long,0>(Duration *__return_storage_ptr__,ulong param_1)

{
  time_internal::FromInt64<1000>(__return_storage_ptr__,(ulonglong)param_1,(ratio<1,1000>)0x0);
  return __return_storage_ptr__;
}

// min<absl::lts_20240722::Duration> @ 14f903a00

/* class absl::lts_20240722::Duration const & __ptr64 __cdecl std::min<class
   absl::lts_20240722::Duration>(class absl::lts_20240722::Duration const & __ptr64,class
   absl::lts_20240722::Duration const & __ptr64) */

Duration * __cdecl std::min<absl::lts_20240722::Duration>(Duration *param_1,Duration *param_2)

{
  if (param_2->rep_hi_ != param_1->rep_hi_) {
    if ((longlong)param_2->rep_hi_ < (longlong)param_1->rep_hi_) {
      param_1 = param_2;
    }
    return param_1;
  }
  if (param_2->rep_hi_ == (HiRep)0x8000000000000000) {
    if (param_2->rep_lo_ + 1 < param_1->rep_lo_ + 1) {
      param_1 = param_2;
    }
    return param_1;
  }
  if (param_2->rep_lo_ < param_1->rep_lo_) {
    param_1 = param_2;
  }
  return param_1;
}

// operator/ @ 14f903af0

/* __int64 __cdecl absl::lts_20240722::operator/(class absl::lts_20240722::Duration,class
   absl::lts_20240722::Duration) */

__int64 __cdecl absl::lts_20240722::operator/(Duration *param_1,Duration *param_2)

{
  __int64 _Var1;
  Duration local_28;
  Duration local_18 [2];
  
  local_28.rep_hi_ = param_2->rep_hi_;
  local_28.rep_lo_ = param_2->rep_lo_;
  local_18[0].rep_hi_ = param_1->rep_hi_;
  local_18[0].rep_lo_ = param_1->rep_lo_;
  _Var1 = IDivDuration(local_18,&local_28,param_1);
  return _Var1;
}

// operator> @ 14f903b40

/* bool __cdecl absl::lts_20240722::operator>(class absl::lts_20240722::Duration,class
   absl::lts_20240722::Duration) */

bool __cdecl absl::lts_20240722::operator>(Duration *param_1,Duration *param_2)

{
  if (param_2->rep_hi_ != param_1->rep_hi_) {
    return (longlong)param_2->rep_hi_ < (longlong)param_1->rep_hi_;
  }
  if (param_2->rep_hi_ == (HiRep)0x8000000000000000) {
    return param_2->rep_lo_ + 1 < param_1->rep_lo_ + 1;
  }
  return param_2->rep_lo_ < param_1->rep_lo_;
}

// GetCurrentTimeNanos @ 14f903c20

/* __int64 __cdecl absl::lts_20240722::GetCurrentTimeNanos(void) */

__int64 __cdecl absl::lts_20240722::GetCurrentTimeNanos(void)

{
  longlong lVar1;
  
  lVar1 = _Xtime_get_ticks();
  return lVar1 * 100;
}

// FUN_14f903c40 @ 14f903c40

longlong FUN_14f903c40(void)

{
  longlong lVar1;
  
  lVar1 = _Xtime_get_ticks();
  return lVar1 * 100;
}

// FUN_14f903c60 @ 14f903c60

Duration * FUN_14f903c60(Duration *param_1)

{
  absl::lts_20240722::time_internal::FromInt64<1000>(param_1,0xffffffff,(ratio<1,1000>)0x0);
  return param_1;
}

// Now @ 14f903c90

/* class absl::lts_20240722::Time __cdecl absl::lts_20240722::Now(void) */

Time * __cdecl absl::lts_20240722::Now(Time *__return_storage_ptr__)

{
  longlong lVar1;
  HiRep local_18;
  uint local_10;
  
  lVar1 = _Xtime_get_ticks();
  lVar1 = lVar1 * 100;
  local_18 = (HiRep)(lVar1 / 1000000000);
  if (lVar1 < 0) {
    lVar1 = (lVar1 % 1000000000) * 4;
    local_10 = (uint)lVar1;
    if (lVar1 < 0) {
      local_18 = (HiRep)((longlong)local_18 + -1);
      local_10 = local_10 + 4000000000;
    }
    (__return_storage_ptr__->rep_).rep_hi_ = local_18;
    (__return_storage_ptr__->rep_).rep_lo_ = local_10;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->rep_).rep_hi_ = local_18;
  (__return_storage_ptr__->rep_).rep_lo_ = ((int)(lVar1 / 1000000000) * 0x4653600 + (int)lVar1) * 4;
  return __return_storage_ptr__;
}

// FUN_14f903d70 @ 14f903d70

void FUN_14f903d70(HiRep *param_1)

{
  __int64 _Var1;
  Duration local_38;
  Duration local_28;
  Duration local_18 [2];
  
  local_28.rep_hi_ = *param_1;
  local_28.rep_lo_ = param_1[1].lo_;
  local_38.rep_hi_.lo_ = 0;
  local_38.rep_hi_.hi_ = 0;
  local_18[0].rep_hi_ = *param_1;
  local_38.rep_lo_ = 4000000;
  local_18[0].rep_lo_ = local_28.rep_lo_;
  _Var1 = absl::lts_20240722::IDivDuration(local_18,&local_38,&local_28);
  Sleep((DWORD)_Var1);
  return;
}

// max @ 14f903de0

/* public: static unsigned long __cdecl std::numeric_limits<unsigned long>::max(void) */

ulong __cdecl std::numeric_limits<unsigned_long>::max(void)

{
  return 0xffffffff;
}

// now @ 14f903df0

/* public: static class std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > > __cdecl
   std::chrono::system_clock::now(void) */

time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
__cdecl std::chrono::system_clock::now(void)

{
  undefined8 uVar1;
  duration<__int64,std::ratio<1,10000000>_> in_RCX;
  
  uVar1 = _Xtime_get_ticks();
  *(undefined8 *)in_RCX._MyRep = uVar1;
  return (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
          )(duration<__int64,std::ratio<1,10000000>_>)in_RCX._MyRep;
}

// AbslInternalSleepFor_lts_20240722 @ 14f903e10

void AbslInternalSleepFor_lts_20240722(Duration *param_1)

{
  HiRep HVar1;
  uint uVar2;
  bool bVar3;
  __int64 _Var4;
  Duration *pDVar5;
  Duration local_88;
  undefined8 local_7c;
  Duration local_68;
  Duration local_58;
  Duration local_48;
  Duration local_38 [2];
  
  while( true ) {
    if (param_1->rep_hi_ == (HiRep)0x0) {
      bVar3 = param_1->rep_lo_ != 0;
    }
    else {
      bVar3 = 0 < (longlong)param_1->rep_hi_;
    }
    if (!bVar3) break;
    local_88.rep_hi_.lo_ = 0x418937;
    local_88.rep_hi_.hi_ = 0;
    local_88.rep_lo_ = 1180000000;
    if (param_1->rep_hi_ == (HiRep)0x418937) {
      bVar3 = 1180000000 < param_1->rep_lo_;
    }
    else {
      bVar3 = 0x418937 < (longlong)param_1->rep_hi_;
    }
    local_7c = 0;
    local_58.rep_lo_ = 4000000;
    pDVar5 = &local_88;
    if (!bVar3) {
      pDVar5 = param_1;
    }
    HVar1 = pDVar5->rep_hi_;
    uVar2 = pDVar5->rep_lo_;
    local_68.rep_hi_ = HVar1;
    local_58.rep_hi_.lo_ = 0;
    local_58.rep_hi_.hi_ = 0;
    local_48.rep_hi_ = pDVar5->rep_hi_;
    local_68.rep_lo_ = uVar2;
    local_48.rep_lo_ = uVar2;
    _Var4 = absl::lts_20240722::IDivDuration(&local_48,&local_58,&local_68);
    Sleep((DWORD)_Var4);
    local_38[0].rep_hi_ = HVar1;
    local_38[0].rep_lo_ = uVar2;
    absl::lts_20240722::Duration::operator-=(param_1,local_38);
  }
  return;
}


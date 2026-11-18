// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 114

// duration<int,std::ratio<60,1>_><int,0> @ 14f903fa0

/* public: __cdecl std::chrono::duration<int,struct std::ratio<60,1> >::duration<int,struct
   std::ratio<60,1> ><int,0>(int const & __ptr64) __ptr64 */

duration<int,std::ratio<60,1>_> * __thiscall
std::chrono::duration<int,std::ratio<60,1>_>::duration<int,std::ratio<60,1>_><int,0>
          (duration<int,std::ratio<60,1>_> *this,int *param_1)

{
  this->_MyRep = *param_1;
  return this;
}

// duration<int,std::ratio<3600,1>_><int,0> @ 14f903fb0

/* public: __cdecl std::chrono::duration<int,struct std::ratio<3600,1> >::duration<int,struct
   std::ratio<3600,1> ><int,0>(int const & __ptr64) __ptr64 */

duration<int,std::ratio<3600,1>_> * __thiscall
std::chrono::duration<int,std::ratio<3600,1>_>::duration<int,std::ratio<3600,1>_><int,0>
          (duration<int,std::ratio<3600,1>_> *this,int *param_1)

{
  this->_MyRep = *param_1;
  return this;
}

// duration<int,std::ratio<60,1>_><__int64,0> @ 14f903fc0

/* public: __cdecl std::chrono::duration<int,struct std::ratio<60,1> >::duration<int,struct
   std::ratio<60,1> ><__int64,0>(__int64 const & __ptr64) __ptr64 */

duration<int,std::ratio<60,1>_> * __thiscall
std::chrono::duration<int,std::ratio<60,1>_>::duration<int,std::ratio<60,1>_><__int64,0>
          (duration<int,std::ratio<60,1>_> *this,__int64 *param_1)

{
  this->_MyRep = (int)*param_1;
  return this;
}

// duration<int,std::ratio<3600,1>_><__int64,0> @ 14f903fd0

/* public: __cdecl std::chrono::duration<int,struct std::ratio<3600,1> >::duration<int,struct
   std::ratio<3600,1> ><__int64,0>(__int64 const & __ptr64) __ptr64 */

duration<int,std::ratio<3600,1>_> * __thiscall
std::chrono::duration<int,std::ratio<3600,1>_>::duration<int,std::ratio<3600,1>_><__int64,0>
          (duration<int,std::ratio<3600,1>_> *this,__int64 *param_1)

{
  this->_MyRep = (int)*param_1;
  return this;
}

// duration<__int64,std::ratio<1,1000>_><__int64,0> @ 14f903fe0

/* public: __cdecl std::chrono::duration<__int64,struct std::ratio<1,1000>
   >::duration<__int64,struct std::ratio<1,1000> ><__int64,0>(__int64 const & __ptr64) __ptr64 */

duration<__int64,std::ratio<1,1000>_> * __thiscall
std::chrono::duration<__int64,std::ratio<1,1000>_>::duration<__int64,std::ratio<1,1000>_><__int64,0>
          (duration<__int64,std::ratio<1,1000>_> *this,__int64 *param_1)

{
  this->_MyRep = *param_1;
  return this;
}

// duration<__int64,std::ratio<1,1000000>_><__int64,0> @ 14f903ff0

/* public: __cdecl std::chrono::duration<__int64,struct std::ratio<1,1000000>
   >::duration<__int64,struct std::ratio<1,1000000> ><__int64,0>(__int64 const & __ptr64) __ptr64 */

duration<__int64,std::ratio<1,1000000>_> * __thiscall
std::chrono::duration<__int64,std::ratio<1,1000000>_>::
duration<__int64,std::ratio<1,1000000>_><__int64,0>
          (duration<__int64,std::ratio<1,1000000>_> *this,__int64 *param_1)

{
  this->_MyRep = *param_1;
  return this;
}

// operator==<char,std::char_traits<char>,std::allocator<char>_> @ 14f904000

/* bool __cdecl std::operator==<char,struct std::char_traits<char>,class std::allocator<char>
   >(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64,char const * __ptr64 const) */

bool __cdecl
std::operator==<char,std::char_traits<char>,std::allocator<char>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,char *param_2)

{
  size_t _Size;
  int iVar1;
  size_t sVar2;
  
  sVar2 = 0xffffffffffffffff;
  do {
    sVar2 = sVar2 + 1;
  } while (param_2[sVar2] != '\0');
  _Size = (param_1->_Mypair)._Myval2._Mysize;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
              (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  if (_Size == sVar2) {
    iVar1 = memcmp(param_1,param_2,_Size);
    if (iVar1 == 0) {
      return true;
    }
  }
  return false;
}

// operator*<__int64> @ 14f904050

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::operator*<__int64>(__int64,class
   absl::lts_20240722::Duration) */

Duration * __cdecl
absl::lts_20240722::operator*<__int64>
          (Duration *__return_storage_ptr__,__int64 param_1,Duration *param_2)

{
  uint uVar1;
  Duration *pDVar2;
  
  pDVar2 = Duration::operator*=(param_2,param_1);
  uVar1 = pDVar2->rep_lo_;
  __return_storage_ptr__->rep_hi_ = pDVar2->rep_hi_;
  __return_storage_ptr__->rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// FromInt64<1> @ 14f904080

/* class absl::lts_20240722::Duration __cdecl
   absl::lts_20240722::time_internal::FromInt64<1>(__int64,struct std::ratio<1,1>) */

Duration * __cdecl
absl::lts_20240722::time_internal::FromInt64<1>
          (Duration *__return_storage_ptr__,__int64 param_1,ratio<1,1> param_2)

{
  (__return_storage_ptr__->rep_hi_).lo_ = (int)param_1;
  (__return_storage_ptr__->rep_hi_).hi_ = (int)((ulonglong)param_1 >> 0x20);
  __return_storage_ptr__->rep_lo_ = 0;
  return __return_storage_ptr__;
}

// Hours<int,0> @ 14f9040b0

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::Hours<int,0>(int) */

Duration * __cdecl absl::lts_20240722::Hours<int,0>(Duration *__return_storage_ptr__,int param_1)

{
  time_internal::FromInt64(__return_storage_ptr__,(longlong)param_1,(ratio<3600,1>)0x0);
  return __return_storage_ptr__;
}

// Microseconds<long,0> @ 14f9040e0

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::Microseconds<long,0>(long) */

Duration * __cdecl
absl::lts_20240722::Microseconds<long,0>(Duration *__return_storage_ptr__,long param_1)

{
  time_internal::FromInt64<1000000>(__return_storage_ptr__,(longlong)param_1,(ratio<1,1000000>)0x0);
  return __return_storage_ptr__;
}

// Minutes<int,0> @ 14f904110

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::Minutes<int,0>(int) */

Duration * __cdecl absl::lts_20240722::Minutes<int,0>(Duration *__return_storage_ptr__,int param_1)

{
  time_internal::FromInt64(__return_storage_ptr__,(longlong)param_1,(ratio<60,1>)0x0);
  return __return_storage_ptr__;
}

// Nanoseconds<long,0> @ 14f904140

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::Nanoseconds<long,0>(long) */

Duration * __cdecl
absl::lts_20240722::Nanoseconds<long,0>(Duration *__return_storage_ptr__,long param_1)

{
  time_internal::FromInt64<1000000000>
            (__return_storage_ptr__,(longlong)param_1,(ratio<1,1000000000>)0x0);
  return __return_storage_ptr__;
}

// FUN_14f904170 @ 14f904170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HiRep * FUN_14f904170(HiRep *param_1,HiRep *param_2,double param_3)

{
  char cVar1;
  Duration *pDVar2;
  ulonglong uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double local_res10;
  double local_res18;
  Duration local_58;
  Duration local_48 [4];
  
  local_58.rep_hi_ = *param_2;
  local_48[0].rep_lo_ = param_2[1].lo_;
  uVar3 = (ulonglong)local_48[0].rep_lo_;
  local_res18 = 0.0;
  local_48[0].rep_hi_ = local_58.rep_hi_;
  dVar5 = modf((double)(longlong)local_58.rep_hi_ / param_3,&local_res18);
  local_res10 = 0.0;
  dVar5 = modf(((double)uVar3 / param_3) / ___real_41edcd6500000000 + dVar5,&local_res10);
  dVar5 = (double)round(dVar5 * ___real_41edcd6500000000);
  dVar6 = local_res10 + local_res18;
  if (dVar6 < __real_43e0000000000000) {
    if (__real_c3e0000000000000 < dVar6) {
      local_58.rep_hi_ = (HiRep)(longlong)dVar6;
      local_58.rep_lo_ = 0;
      local_48[0].rep_hi_ = local_58.rep_hi_;
      cVar1 = FUN_14f9084c0((double)(longlong)local_58.rep_hi_,
                            (double)((longlong)dVar5 / 4000000000),&local_58);
      if (cVar1 == '\0') {
        *param_1 = local_58.rep_hi_;
      }
      else {
        lVar4 = (longlong)dVar5 % 4000000000;
        if (lVar4 < 0) {
          local_58.rep_hi_ = (HiRep)((longlong)local_58.rep_hi_ + -1);
        }
        param_1->lo_ = local_58.rep_hi_.lo_;
        param_1->hi_ = local_58.rep_hi_.hi_;
        local_58.rep_lo_ = (uint)lVar4 + 4000000000;
        if (-1 < lVar4) {
          local_58.rep_lo_ = (uint)lVar4;
        }
      }
    }
    else {
      local_58.rep_hi_.lo_ = 0xffffffff;
      local_58.rep_hi_.hi_ = 0x7fffffff;
      local_58.rep_lo_ = 0xffffffff;
      pDVar2 = absl::lts_20240722::operator-(local_48,&local_58);
      local_58.rep_lo_ = pDVar2->rep_lo_;
      *param_1 = pDVar2->rep_hi_;
    }
  }
  else {
    param_1->lo_ = 0xffffffff;
    param_1->hi_ = 0x7fffffff;
    local_58.rep_lo_ = 0xffffffff;
  }
  param_1[1].lo_ = local_58.rep_lo_;
  return param_1;
}

// FUN_14f904370 @ 14f904370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HiRep * FUN_14f904370(HiRep *param_1,HiRep *param_2,double param_3)

{
  char cVar1;
  Duration *pDVar2;
  ulonglong uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double local_res10;
  double local_res18;
  Duration local_58;
  Duration local_48 [4];
  
  local_58.rep_hi_ = *param_2;
  local_48[0].rep_lo_ = param_2[1].lo_;
  uVar3 = (ulonglong)local_48[0].rep_lo_;
  local_res18 = 0.0;
  local_48[0].rep_hi_ = local_58.rep_hi_;
  dVar5 = modf((double)(longlong)local_58.rep_hi_ * param_3,&local_res18);
  local_res10 = 0.0;
  dVar5 = modf(((double)uVar3 * param_3) / ___real_41edcd6500000000 + dVar5,&local_res10);
  dVar5 = (double)round(dVar5 * ___real_41edcd6500000000);
  dVar6 = local_res10 + local_res18;
  if (dVar6 < __real_43e0000000000000) {
    if (__real_c3e0000000000000 < dVar6) {
      local_58.rep_hi_ = (HiRep)(longlong)dVar6;
      local_58.rep_lo_ = 0;
      local_48[0].rep_hi_ = local_58.rep_hi_;
      cVar1 = FUN_14f9084c0((double)(longlong)local_58.rep_hi_,
                            (double)((longlong)dVar5 / 4000000000),&local_58);
      if (cVar1 == '\0') {
        *param_1 = local_58.rep_hi_;
      }
      else {
        lVar4 = (longlong)dVar5 % 4000000000;
        if (lVar4 < 0) {
          local_58.rep_hi_ = (HiRep)((longlong)local_58.rep_hi_ + -1);
        }
        param_1->lo_ = local_58.rep_hi_.lo_;
        param_1->hi_ = local_58.rep_hi_.hi_;
        local_58.rep_lo_ = (uint)lVar4 + 4000000000;
        if (-1 < lVar4) {
          local_58.rep_lo_ = (uint)lVar4;
        }
      }
    }
    else {
      local_58.rep_hi_.lo_ = 0xffffffff;
      local_58.rep_hi_.hi_ = 0x7fffffff;
      local_58.rep_lo_ = 0xffffffff;
      pDVar2 = absl::lts_20240722::operator-(local_48,&local_58);
      local_58.rep_lo_ = pDVar2->rep_lo_;
      *param_1 = pDVar2->rep_hi_;
    }
  }
  else {
    param_1->lo_ = 0xffffffff;
    param_1->hi_ = 0x7fffffff;
    local_58.rep_lo_ = 0xffffffff;
  }
  param_1[1].lo_ = local_58.rep_lo_;
  return param_1;
}

// FUN_14f904570 @ 14f904570

undefined8 FUN_14f904570(undefined8 param_1,ulonglong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong64 uVar6;
  uint128 *puVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  uint128 local_68;
  uint128 local_58;
  uint128 local_48;
  uint128 local_38;
  
  uVar10 = *param_2;
  uVar11 = uVar10;
  if ((longlong)uVar10 < 0) {
    uVar11 = ~uVar10;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar11;
  local_68.hi_ = SUB168(ZEXT816(4000000000) * auVar3,8);
  uVar11 = SUB168(ZEXT816(4000000000) * auVar3,0);
  uVar8 = 4000000000 - (uint)param_2[1];
  if (-1 < (longlong)uVar10) {
    uVar8 = (uint)param_2[1];
  }
  uVar10 = uVar8 + uVar11;
  if (uVar10 < uVar11) {
    local_68.hi_ = local_68.hi_ + 1;
  }
  uVar6 = local_68.hi_;
  local_58.lo_ = param_3;
  if ((longlong)param_3 < 0) {
    local_58.lo_ = ~param_3;
  }
  uVar11 = (ulonglong)((longlong)param_3 < 0);
  local_58.lo_ = uVar11 + local_58.lo_;
  local_58.hi_ = (ulong64)(local_58.lo_ < uVar11);
  if (local_68.hi_ == 0) {
    if (((uVar10 | local_58.lo_) & 0xffffffff00000000) == 0) {
      local_58.hi_ = 0;
      puVar7 = &local_58;
      local_58.lo_ = uVar10 * local_58.lo_;
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_58.lo_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar10;
      local_58.lo_ = SUB168(auVar1 * auVar4,0);
      puVar7 = &local_58;
      local_58.hi_ = local_58.hi_ * uVar10 + SUB168(auVar1 * auVar4,8);
    }
  }
  else if ((local_58.lo_ == 0) && (local_58.hi_ == 0)) {
    puVar7 = &local_58;
  }
  else {
    local_68.lo_ = 0xffffffffffffffff;
    local_68.hi_ = 0xffffffffffffffff;
    local_48.hi_ = local_58.hi_;
    local_48.lo_ = local_58.lo_;
    puVar7 = absl::lts_20240722::operator/(&local_38,&local_68,&local_48);
    bVar12 = puVar7->hi_ < uVar6;
    if (puVar7->hi_ == uVar6) {
      bVar12 = puVar7->lo_ < uVar10;
    }
    if (bVar12) {
      local_58.lo_ = 0xffffffffffffffff;
      local_58.hi_ = 0xffffffffffffffff;
    }
    else {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_58.lo_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar10;
      lVar9 = local_58.lo_ * uVar6;
      local_58.lo_ = SUB168(auVar2 * auVar5,0);
      local_58.hi_ = lVar9 + local_58.hi_ * uVar10 + SUB168(auVar2 * auVar5,8);
    }
    puVar7 = &local_48;
    local_48.lo_ = local_58.lo_;
    local_48.hi_ = local_58.hi_;
  }
  local_48.lo_ = puVar7->lo_;
  local_48.hi_ = puVar7->hi_;
  local_68.lo_ = *param_2;
  FUN_14f907d00(param_1,&local_48,
                (byte)(local_68.lo_ >> 0x3f) != (byte)-(char)((longlong)param_3 >> 0x3f));
  return param_1;
}

// FUN_14f9047d0 @ 14f9047d0

undefined8 FUN_14f9047d0(undefined8 param_1,ulonglong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint128 local_38;
  uint128 local_28;
  uint128 local_18;
  
  uVar2 = *param_2;
  uVar4 = uVar2;
  if ((longlong)uVar2 < 0) {
    uVar4 = ~uVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar4;
  local_38.hi_ = SUB168(ZEXT816(4000000000) * auVar1,8);
  uVar4 = SUB168(ZEXT816(4000000000) * auVar1,0);
  uVar3 = 4000000000 - (uint)param_2[1];
  if (-1 < (longlong)uVar2) {
    uVar3 = (uint)param_2[1];
  }
  local_38.lo_ = uVar3 + uVar4;
  if (local_38.lo_ < uVar4) {
    local_38.hi_ = local_38.hi_ + 1;
  }
  local_28.lo_ = param_3;
  if ((longlong)param_3 < 0) {
    local_28.lo_ = ~param_3;
  }
  uVar2 = (ulonglong)((longlong)param_3 < 0);
  local_28.lo_ = uVar2 + local_28.lo_;
  local_28.hi_ = (ulong64)(local_28.lo_ < uVar2);
  absl::lts_20240722::operator/(&local_18,&local_38,&local_28);
  local_38.lo_ = *param_2;
  local_28.lo_ = local_18.lo_;
  local_28.hi_ = local_18.hi_;
  FUN_14f907d00(param_1,&local_28,
                (byte)(local_38.lo_ >> 0x3f) != (byte)-(char)((longlong)param_3 >> 0x3f));
  return param_1;
}

// Seconds<int,0> @ 14f904930

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::Seconds<int,0>(int) */

Duration * __cdecl absl::lts_20240722::Seconds<int,0>(Duration *__return_storage_ptr__,int param_1)

{
  __return_storage_ptr__->rep_hi_ = (HiRep)(longlong)param_1;
  __return_storage_ptr__->rep_lo_ = 0;
  return __return_storage_ptr__;
}

// Seconds<long,0> @ 14f904960

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::Seconds<long,0>(long) */

Duration * __cdecl
absl::lts_20240722::Seconds<long,0>(Duration *__return_storage_ptr__,long param_1)

{
  __return_storage_ptr__->rep_hi_ = (HiRep)(longlong)param_1;
  __return_storage_ptr__->rep_lo_ = 0;
  return __return_storage_ptr__;
}

// Seconds<__int64,0> @ 14f904990

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::Seconds<__int64,0>(__int64) */

Duration * __cdecl
absl::lts_20240722::Seconds<__int64,0>(Duration *__return_storage_ptr__,__int64 param_1)

{
  (__return_storage_ptr__->rep_hi_).lo_ = (int)param_1;
  (__return_storage_ptr__->rep_hi_).hi_ = (int)((ulonglong)param_1 >> 0x20);
  __return_storage_ptr__->rep_lo_ = 0;
  return __return_storage_ptr__;
}

// ToChronoDuration<std::chrono::duration<int,std::ratio<60,1>_>_> @ 14f9049c0

/* WARNING: Removing unreachable block (ram,0x00014f904a35) */
/* class std::chrono::duration<int,struct std::ratio<60,1> > __cdecl
   absl::lts_20240722::time_internal::ToChronoDuration<class std::chrono::duration<int,struct
   std::ratio<60,1> > >(class absl::lts_20240722::Duration) */

duration<int,std::ratio<60,1>_> __cdecl
absl::lts_20240722::time_internal::ToChronoDuration<std::chrono::duration<int,std::ratio<60,1>_>_>
          (Duration *param_1)

{
  duration<int,std::ratio<60,1>_> dVar1;
  longlong *in_RDX;
  longlong lVar2;
  
  lVar2 = *in_RDX;
  dVar1._MyRep = (int)param_1;
  if ((int)in_RDX[1] == -1) {
    if (lVar2 == 0) {
      (param_1->rep_hi_).lo_ = 0x7fffffff;
      return (duration<int,std::ratio<60,1>_>)dVar1._MyRep;
    }
    (param_1->rep_hi_).lo_ = (byte)((ulonglong)lVar2 >> 0x3f) + 0x7fffffff;
    return (duration<int,std::ratio<60,1>_>)dVar1._MyRep;
  }
  if ((int)in_RDX[1] != -1) {
    if ((lVar2 < 0) && ((int)in_RDX[1] != 0)) {
      lVar2 = lVar2 + 1;
    }
    lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2),8) + lVar2;
    lVar2 = (lVar2 >> 5) - (lVar2 >> 0x3f);
  }
  if (lVar2 < 0x80000000) {
    if (-0x80000001 < lVar2) {
      (param_1->rep_hi_).lo_ = (uint)lVar2;
      return (duration<int,std::ratio<60,1>_>)dVar1._MyRep;
    }
    (param_1->rep_hi_).lo_ = 0x80000000;
    return (duration<int,std::ratio<60,1>_>)dVar1._MyRep;
  }
  (param_1->rep_hi_).lo_ = 0x7fffffff;
  return (duration<int,std::ratio<60,1>_>)dVar1._MyRep;
}

// ToChronoDuration<std::chrono::duration<int,std::ratio<3600,1>_>_> @ 14f904af0

/* WARNING: Removing unreachable block (ram,0x00014f904b62) */
/* class std::chrono::duration<int,struct std::ratio<3600,1> > __cdecl
   absl::lts_20240722::time_internal::ToChronoDuration<class std::chrono::duration<int,struct
   std::ratio<3600,1> > >(class absl::lts_20240722::Duration) */

duration<int,std::ratio<3600,1>_> __cdecl
absl::lts_20240722::time_internal::ToChronoDuration<std::chrono::duration<int,std::ratio<3600,1>_>_>
          (Duration *param_1)

{
  duration<int,std::ratio<3600,1>_> dVar1;
  longlong lVar2;
  longlong *in_RDX;
  
  lVar2 = *in_RDX;
  dVar1._MyRep = (int)param_1;
  if ((int)in_RDX[1] == -1) {
    if (lVar2 == 0) {
      (param_1->rep_hi_).lo_ = 0x7fffffff;
      return (duration<int,std::ratio<3600,1>_>)dVar1._MyRep;
    }
    (param_1->rep_hi_).lo_ = (byte)((ulonglong)lVar2 >> 0x3f) + 0x7fffffff;
    return (duration<int,std::ratio<3600,1>_>)dVar1._MyRep;
  }
  if ((int)in_RDX[1] != -1) {
    if ((lVar2 < 0) && ((int)in_RDX[1] != 0)) {
      lVar2 = lVar2 + 1;
    }
    lVar2 = lVar2 / 0xe10;
  }
  if (lVar2 < 0x80000000) {
    if (-0x80000001 < lVar2) {
      (param_1->rep_hi_).lo_ = (uint)lVar2;
      return (duration<int,std::ratio<3600,1>_>)dVar1._MyRep;
    }
    (param_1->rep_hi_).lo_ = 0x80000000;
    return (duration<int,std::ratio<3600,1>_>)dVar1._MyRep;
  }
  (param_1->rep_hi_).lo_ = 0x7fffffff;
  return (duration<int,std::ratio<3600,1>_>)dVar1._MyRep;
}

// ToChronoDuration<std::chrono::duration<__int64,std::ratio<1,1>_>_> @ 14f904c10

/* WARNING: Removing unreachable block (ram,0x00014f904c71) */
/* class std::chrono::duration<__int64,struct std::ratio<1,1> > __cdecl
   absl::lts_20240722::time_internal::ToChronoDuration<class std::chrono::duration<__int64,struct
   std::ratio<1,1> > >(class absl::lts_20240722::Duration) */

duration<__int64,std::ratio<1,1>_> __cdecl
absl::lts_20240722::time_internal::
ToChronoDuration<std::chrono::duration<__int64,std::ratio<1,1>_>_>(Duration *param_1)

{
  byte bVar1;
  HiRep HVar2;
  HiRep *in_RDX;
  
  HVar2 = *in_RDX;
  if (in_RDX[1].lo_ != 0xffffffff) {
    if (((in_RDX[1].lo_ != 0xffffffff) && ((longlong)HVar2 < 0)) && (in_RDX[1].lo_ != 0)) {
      HVar2 = (HiRep)((longlong)HVar2 + 1);
    }
    param_1->rep_hi_ = HVar2;
    return (duration<__int64,std::ratio<1,1>_>)(long64)param_1;
  }
  if (HVar2 == (HiRep)0x0) {
    bVar1 = 0;
  }
  else {
    bVar1 = HVar2.hi_._3_1_ >> 7;
  }
  param_1->rep_hi_ = (HiRep)((ulonglong)bVar1 + 0x7fffffffffffffff);
  return (duration<__int64,std::ratio<1,1>_>)(long64)param_1;
}

// ToChronoDuration<std::chrono::duration<__int64,std::ratio<1,1000000000>_>_> @ 14f904cd0

/* WARNING: Removing unreachable block (ram,0x00014f904d3d) */
/* class std::chrono::duration<__int64,struct std::ratio<1,1000000000> > __cdecl
   absl::lts_20240722::time_internal::ToChronoDuration<class std::chrono::duration<__int64,struct
   std::ratio<1,1000000000> > >(class absl::lts_20240722::Duration) */

duration<__int64,std::ratio<1,1000000000>_> __cdecl
absl::lts_20240722::time_internal::
ToChronoDuration<std::chrono::duration<__int64,std::ratio<1,1000000000>_>_>(Duration *param_1)

{
  byte bVar1;
  char cVar2;
  ulonglong *in_RDX;
  ulonglong uVar3;
  HiRep local_res10;
  ulonglong local_38;
  undefined4 local_30;
  ulonglong local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  uVar3 = *in_RDX;
  if ((int)in_RDX[1] == -1) {
    if (uVar3 == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)(uVar3 >> 0x3f);
    }
    param_1->rep_hi_ = (HiRep)((ulonglong)bVar1 + 0x7fffffffffffffff);
    return (duration<__int64,std::ratio<1,1000000000>_>)(long64)param_1;
  }
  if (((longlong)uVar3 < 0) || ((uVar3 & 0xfffffffe00000000) != 0)) {
    local_28 = *in_RDX;
    local_30 = 4;
    uVar3 = 0;
    local_res10.lo_ = 0;
    local_res10.hi_ = 0;
    local_20 = (undefined4)in_RDX[1];
    local_38 = 0;
    cVar2 = FUN_14f907620(&local_28,&local_38,&local_res10,local_18);
    if (cVar2 == '\0') {
      local_38 = *in_RDX;
      local_30 = (undefined4)in_RDX[1];
      local_20 = 4;
      local_28 = uVar3;
      local_res10 = (HiRep)FUN_14f9078d0(1,&local_38,&local_28,local_18);
    }
  }
  else {
    local_res10 = (HiRep)(uVar3 * 1000000000 + (ulonglong)((uint)in_RDX[1] >> 2));
  }
  param_1->rep_hi_ = local_res10;
  return (duration<__int64,std::ratio<1,1000000000>_>)(long64)param_1;
}

// ToChronoDuration<std::chrono::duration<__int64,std::ratio<1,1000>_>_> @ 14f904e70

/* WARNING: Removing unreachable block (ram,0x00014f904edd) */
/* class std::chrono::duration<__int64,struct std::ratio<1,1000> > __cdecl
   absl::lts_20240722::time_internal::ToChronoDuration<class std::chrono::duration<__int64,struct
   std::ratio<1,1000> > >(class absl::lts_20240722::Duration) */

duration<__int64,std::ratio<1,1000>_> __cdecl
absl::lts_20240722::time_internal::
ToChronoDuration<std::chrono::duration<__int64,std::ratio<1,1000>_>_>(Duration *param_1)

{
  byte bVar1;
  char cVar2;
  ulonglong *in_RDX;
  ulonglong uVar3;
  HiRep local_res10;
  ulonglong local_38;
  undefined4 local_30;
  ulonglong local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  uVar3 = *in_RDX;
  if ((int)in_RDX[1] == -1) {
    if (uVar3 == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)(uVar3 >> 0x3f);
    }
    param_1->rep_hi_ = (HiRep)((ulonglong)bVar1 + 0x7fffffffffffffff);
    return (duration<__int64,std::ratio<1,1000>_>)(long64)param_1;
  }
  if (((longlong)uVar3 < 0) || ((uVar3 & 0xffe0000000000000) != 0)) {
    local_28 = *in_RDX;
    local_30 = 4000000;
    uVar3 = 0;
    local_res10.lo_ = 0;
    local_res10.hi_ = 0;
    local_20 = (undefined4)in_RDX[1];
    local_38 = 0;
    cVar2 = FUN_14f907620(&local_28,&local_38,&local_res10,local_18);
    if (cVar2 == '\0') {
      local_38 = *in_RDX;
      local_30 = (undefined4)in_RDX[1];
      local_20 = 4000000;
      local_28 = uVar3;
      local_res10 = (HiRep)FUN_14f9078d0(1,&local_38,&local_28,local_18);
    }
  }
  else {
    local_res10 = (HiRep)(uVar3 * 1000 + (ulonglong)(uint)in_RDX[1] / 4000000);
  }
  param_1->rep_hi_ = local_res10;
  return (duration<__int64,std::ratio<1,1000>_>)(long64)param_1;
}

// ToChronoDuration<std::chrono::duration<__int64,std::ratio<1,1000000>_>_> @ 14f905020

/* WARNING: Removing unreachable block (ram,0x00014f90508d) */
/* class std::chrono::duration<__int64,struct std::ratio<1,1000000> > __cdecl
   absl::lts_20240722::time_internal::ToChronoDuration<class std::chrono::duration<__int64,struct
   std::ratio<1,1000000> > >(class absl::lts_20240722::Duration) */

duration<__int64,std::ratio<1,1000000>_> __cdecl
absl::lts_20240722::time_internal::
ToChronoDuration<std::chrono::duration<__int64,std::ratio<1,1000000>_>_>(Duration *param_1)

{
  undefined1 auVar1 [16];
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong *in_RDX;
  longlong lVar5;
  ulonglong uVar6;
  HiRep local_res10;
  ulonglong local_38;
  undefined4 local_30;
  ulonglong local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  uVar6 = *in_RDX;
  if ((int)in_RDX[1] == -1) {
    if (uVar6 == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)(uVar6 >> 0x3f);
    }
    param_1->rep_hi_ = (HiRep)((ulonglong)bVar2 + 0x7fffffffffffffff);
    return (duration<__int64,std::ratio<1,1000000>_>)(long64)param_1;
  }
  if (((longlong)uVar6 < 0) || ((uVar6 & 0xfffff80000000000) != 0)) {
    local_28 = *in_RDX;
    local_30 = 4000;
    uVar6 = 0;
    local_res10.lo_ = 0;
    local_res10.hi_ = 0;
    local_20 = (undefined4)in_RDX[1];
    local_38 = 0;
    cVar3 = FUN_14f907620(&local_28,&local_38,&local_res10,local_18);
    if (cVar3 == '\0') {
      local_38 = *in_RDX;
      local_30 = (undefined4)in_RDX[1];
      local_20 = 4000;
      local_28 = uVar6;
      local_res10 = (HiRep)FUN_14f9078d0(1,&local_38,&local_28,local_18);
    }
  }
  else {
    uVar4 = CONCAT44(0,(uint)in_RDX[1]);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar4;
    lVar5 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar1,8);
    local_res10 = (HiRep)(uVar6 * 1000000 + ((uVar4 - lVar5 >> 1) + lVar5 >> 0xb));
  }
  param_1->rep_hi_ = local_res10;
  return (duration<__int64,std::ratio<1,1000000>_>)(long64)param_1;
}

// bit_cast<__int64,unsigned___int64,0> @ 14f9051e0

/* __int64 __cdecl std::bit_cast<__int64,unsigned __int64,0>(unsigned __int64 const & __ptr64) */

__int64 __cdecl std::bit_cast<__int64,unsigned___int64,0>(__uint64 *param_1)

{
  return *param_1;
}

// bit_cast<unsigned___int64,__int64,0> @ 14f9051f0

/* unsigned __int64 __cdecl std::bit_cast<unsigned __int64,__int64,0>(__int64 const & __ptr64) */

__uint64 __cdecl std::bit_cast<unsigned___int64,__int64,0>(__int64 *param_1)

{
  return *param_1;
}

// uint128 @ 14f905200

/* public: __cdecl absl::lts_20240722::uint128::uint128(unsigned int) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::uint128(uint128 *this,uint param_1)

{
  this->lo_ = (ulonglong)param_1;
  this->hi_ = 0;
  return this;
}

// operator+ @ 14f905220

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::operator+(class
   absl::lts_20240722::Duration,class absl::lts_20240722::Duration) */

Duration * __cdecl
absl::lts_20240722::operator+(Duration *__return_storage_ptr__,Duration *param_1,Duration *param_2)

{
  uint uVar1;
  Duration *pDVar2;
  Duration local_18;
  
  local_18.rep_hi_ = param_2->rep_hi_;
  local_18.rep_lo_ = param_2->rep_lo_;
  pDVar2 = Duration::operator+=(param_1,&local_18);
  uVar1 = pDVar2->rep_lo_;
  __return_storage_ptr__->rep_hi_ = pDVar2->rep_hi_;
  __return_storage_ptr__->rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// operator% @ 14f905270

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::operator%(class
   absl::lts_20240722::Duration,class absl::lts_20240722::Duration) */

Duration * __cdecl
absl::lts_20240722::operator%(Duration *__return_storage_ptr__,Duration *param_1,Duration *param_2)

{
  uint uVar1;
  char cVar2;
  HiRep HVar3;
  undefined1 local_res8 [8];
  HiRep local_28;
  uint local_20;
  HiRep local_18;
  uint local_10;
  
  HVar3 = param_1->rep_hi_;
  uVar1 = param_1->rep_lo_;
  local_28 = param_2->rep_hi_;
  local_20 = param_2->rep_lo_;
  local_18 = HVar3;
  local_10 = uVar1;
  cVar2 = FUN_14f907620(&local_18,&local_28,local_res8,param_1);
  if (cVar2 == '\0') {
    local_18 = param_2->rep_hi_;
    local_10 = param_2->rep_lo_;
    local_28 = HVar3;
    local_20 = uVar1;
    FUN_14f9078d0(0,&local_28,&local_18,param_1);
  }
  uVar1 = param_1->rep_lo_;
  __return_storage_ptr__->rep_hi_ = param_1->rep_hi_;
  __return_storage_ptr__->rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// operator<= @ 14f905330

/* bool __cdecl absl::lts_20240722::operator<=(class absl::lts_20240722::Duration,class
   absl::lts_20240722::Duration) */

bool __cdecl absl::lts_20240722::operator<=(Duration *param_1,Duration *param_2)

{
  if (param_2->rep_hi_ != param_1->rep_hi_) {
    return (longlong)param_1->rep_hi_ <= (longlong)param_2->rep_hi_;
  }
  if (param_2->rep_hi_ == (HiRep)0x8000000000000000) {
    return param_1->rep_lo_ + 1 <= param_2->rep_lo_ + 1;
  }
  return param_1->rep_lo_ <= param_2->rep_lo_;
}

// FUN_14f905410 @ 14f905410

ulong64 * FUN_14f905410(undefined8 param_1,ulong64 *param_2,ulonglong *param_3,ulonglong *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong64 uVar5;
  uint128 *puVar6;
  bool bVar7;
  uint128 local_38;
  uint128 local_28;
  uint128 local_18;
  
  if (param_3[1] == 0) {
    if (((*param_3 | *param_4) & 0xffffffff00000000) == 0) {
      puVar6 = &local_38;
      local_38.lo_ = *param_3 * *param_4;
      local_38.hi_ = 0;
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *param_4;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = *param_3;
      local_38.lo_ = SUB168(auVar1 * auVar3,0);
      puVar6 = &local_38;
      local_38.hi_ = param_3[1] * *param_4 + param_4[1] * *param_3 + SUB168(auVar1 * auVar3,8);
    }
  }
  else {
    local_28.hi_ = param_4[1];
    if ((*param_4 == 0) && (local_28.lo_ = *param_4, param_4[1] == 0)) {
      puVar6 = &local_38;
      local_38.lo_ = *param_4;
      local_38.hi_ = param_4[1];
    }
    else {
      local_28.lo_ = *param_4;
      local_28.hi_ = param_4[1];
      local_38.lo_ = 0xffffffffffffffff;
      local_38.hi_ = 0xffffffffffffffff;
      puVar6 = absl::lts_20240722::operator/(&local_18,&local_38,&local_28);
      bVar7 = puVar6->hi_ < param_3[1];
      if (puVar6->hi_ == param_3[1]) {
        bVar7 = puVar6->lo_ < *param_3;
      }
      if (bVar7) {
        local_38.lo_ = 0xffffffffffffffff;
        local_38.hi_ = 0xffffffffffffffff;
      }
      else {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *param_4;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = *param_3;
        local_38.lo_ = SUB168(auVar2 * auVar4,0);
        local_38.hi_ = param_3[1] * *param_4 + param_4[1] * *param_3 + SUB168(auVar2 * auVar4,8);
      }
      puVar6 = &local_28;
      local_28.lo_ = local_38.lo_;
      local_28.hi_ = local_38.hi_;
    }
  }
  uVar5 = puVar6->hi_;
  *param_2 = puVar6->lo_;
  param_2[1] = uVar5;
  return param_2;
}

// operator() @ 14f905580

/* public: double __cdecl std::divides<double>::operator()(double const & __ptr64,double const &
   __ptr64)const __ptr64 */

double __thiscall
std::divides<double>::operator()(divides<double> *this,double *param_1,double *param_2)

{
  return *param_1 / *param_2;
}

// operator() @ 14f905590

/* public: class absl::lts_20240722::uint128 __cdecl std::divides<class
   absl::lts_20240722::uint128>::operator()(class absl::lts_20240722::uint128 const & __ptr64,class
   absl::lts_20240722::uint128 const & __ptr64)const __ptr64 */

uint128 * __thiscall
std::divides<absl::lts_20240722::uint128>::operator()
          (divides<absl::lts_20240722::uint128> *this,uint128 *__return_storage_ptr__,
          uint128 *param_1,uint128 *param_2)

{
  uint128 local_28;
  uint128 local_18;
  
  local_18.lo_ = param_1->lo_;
  local_18.hi_ = param_1->hi_;
  local_28.lo_ = param_2->lo_;
  local_28.hi_ = param_2->hi_;
  absl::lts_20240722::operator/(__return_storage_ptr__,&local_18,&local_28);
  return __return_storage_ptr__;
}

// operator() @ 14f9055d0

/* public: double __cdecl std::multiplies<double>::operator()(double const & __ptr64,double const &
   __ptr64)const __ptr64 */

double __thiscall
std::multiplies<double>::operator()(multiplies<double> *this,double *param_1,double *param_2)

{
  return *param_1 * *param_2;
}

// operator*= @ 14f9055e0

/* public: class absl::lts_20240722::Duration & __ptr64 __cdecl
   absl::lts_20240722::Duration::operator*=(double) __ptr64 */

Duration * __thiscall absl::lts_20240722::Duration::operator*=(Duration *this,double param_1)

{
  int iVar1;
  Duration *pDVar2;
  Duration local_28;
  Duration local_18;
  
  local_28.rep_hi_ = this->rep_hi_;
  if (((this->rep_lo_ == 0xffffffff) || (param_1 == __real_7ff0000000000000)) ||
     (param_1 == __real_fff0000000000000)) {
    iVar1 = _dsign(param_1);
    local_28.rep_hi_.lo_ = 0xffffffff;
    local_28.rep_hi_.hi_ = 0x7fffffff;
    local_28.rep_lo_ = 0xffffffff;
    if ((uint)(iVar1 != 0) == (this->rep_hi_).hi_ >> 0x1f) {
      pDVar2 = &local_28;
    }
    else {
      pDVar2 = lts_20240722::operator-(&local_18,&local_28);
    }
  }
  else {
    local_28.rep_lo_ = this->rep_lo_;
    pDVar2 = (Duration *)FUN_14f904370(&local_18,&local_28,SUB84(param_1,0));
  }
  this->rep_hi_ = pDVar2->rep_hi_;
  this->rep_lo_ = pDVar2->rep_lo_;
  return this;
}

// operator*= @ 14f9056b0

/* public: class absl::lts_20240722::Duration & __ptr64 __cdecl
   absl::lts_20240722::Duration::operator*=(__int64) __ptr64 */

Duration * __thiscall absl::lts_20240722::Duration::operator*=(Duration *this,__int64 param_1)

{
  Duration *pDVar1;
  Duration local_28;
  Duration local_18;
  
  local_28.rep_hi_ = this->rep_hi_;
  if (this->rep_lo_ == 0xffffffff) {
    local_28.rep_hi_.lo_ = 0xffffffff;
    local_28.rep_hi_.hi_ = 0x7fffffff;
    local_28.rep_lo_ = 0xffffffff;
    if ((byte)-(char)(param_1 >> 0x3f) == (byte)((this->rep_hi_).hi_ >> 0x1f)) {
      pDVar1 = &local_28;
    }
    else {
      pDVar1 = lts_20240722::operator-(&local_18,&local_28);
    }
  }
  else {
    local_28.rep_lo_ = this->rep_lo_;
    pDVar1 = (Duration *)FUN_14f904570(&local_18,&local_28,param_1);
  }
  this->rep_hi_ = pDVar1->rep_hi_;
  this->rep_lo_ = pDVar1->rep_lo_;
  return this;
}

// operator+= @ 14f905750

/* public: class absl::lts_20240722::Duration & __ptr64 __cdecl
   absl::lts_20240722::Duration::operator+=(class absl::lts_20240722::Duration) __ptr64 */

Duration * __thiscall absl::lts_20240722::Duration::operator+=(Duration *this,Duration *param_1)

{
  uint uVar1;
  bool bVar2;
  HiRep HVar3;
  HiRep HVar4;
  Duration *pDVar5;
  HiRep HVar6;
  uint uVar7;
  ulonglong uVar8;
  HiRep HVar9;
  Duration local_28;
  Duration local_18;
  
  if (this->rep_lo_ != 0xffffffff) {
    if (param_1->rep_lo_ == 0xffffffff) {
      uVar1 = param_1->rep_lo_;
      this->rep_hi_ = param_1->rep_hi_;
      this->rep_lo_ = uVar1;
      return this;
    }
    HVar3 = this->rep_hi_;
    HVar4 = param_1->rep_hi_;
    uVar1 = param_1->rep_lo_;
    HVar9 = (HiRep)((longlong)HVar4 + (longlong)HVar3);
    uVar8 = (ulonglong)HVar9 >> 0x20;
    this->rep_hi_ = HVar9;
    uVar7 = this->rep_lo_;
    if ((longlong)(4000000000 - (ulonglong)uVar1) <= (longlong)(ulonglong)uVar7) {
      HVar6 = (HiRep)((uVar8 << 0x20 | (ulonglong)HVar9 & 0xffffffff) + 1);
      uVar8 = (ulonglong)HVar6 >> 0x20;
      HVar9 = (HiRep)((ulonglong)HVar6 & 0xffffffff);
      this->rep_hi_ = HVar6;
      uVar7 = uVar7 + 0x1194d800;
    }
    this->rep_lo_ = uVar1 + uVar7;
    uVar8 = uVar8 << 0x20 | (ulonglong)HVar9 & 0xffffffff;
    if ((longlong)HVar4 < 0) {
      bVar2 = (longlong)HVar3 < (longlong)uVar8;
    }
    else {
      bVar2 = (longlong)uVar8 < (longlong)HVar3;
    }
    if (bVar2) {
      local_28.rep_hi_.lo_ = 0xffffffff;
      local_28.rep_hi_.hi_ = 0x7fffffff;
      local_28.rep_lo_ = 0xffffffff;
      if ((longlong)HVar4 < 0) {
        pDVar5 = lts_20240722::operator-(&local_18,&local_28);
      }
      else {
        pDVar5 = &local_28;
      }
      this->rep_hi_ = pDVar5->rep_hi_;
      this->rep_lo_ = pDVar5->rep_lo_;
    }
  }
  return this;
}

// operator-= @ 14f905880

/* public: class absl::lts_20240722::Duration & __ptr64 __cdecl
   absl::lts_20240722::Duration::operator-=(class absl::lts_20240722::Duration) __ptr64 */

Duration * __thiscall absl::lts_20240722::Duration::operator-=(Duration *this,Duration *param_1)

{
  uint uVar1;
  bool bVar2;
  HiRep HVar3;
  HiRep HVar4;
  Duration *pDVar5;
  HiRep HVar6;
  uint uVar7;
  ulonglong uVar8;
  Duration local_28;
  Duration local_18;
  
  if (this->rep_lo_ == 0xffffffff) {
    return this;
  }
  HVar4 = param_1->rep_hi_;
  HVar3 = param_1->rep_hi_;
  if (param_1->rep_lo_ == 0xffffffff) {
    local_28.rep_hi_.lo_ = 0xffffffff;
    local_28.rep_hi_.hi_ = 0x7fffffff;
    local_28.rep_lo_ = 0xffffffff;
  }
  else {
    HVar3 = this->rep_hi_;
    uVar1 = param_1->rep_lo_;
    HVar6 = (HiRep)((longlong)HVar3 - (longlong)HVar4);
    uVar8 = (ulonglong)HVar6 >> 0x20;
    this->rep_hi_ = HVar6;
    uVar7 = this->rep_lo_;
    if (uVar7 < uVar1) {
      HVar6 = (HiRep)((uVar8 << 0x20 | (ulonglong)HVar6 & 0xffffffff) - 1);
      uVar8 = (ulonglong)HVar6 >> 0x20;
      this->rep_hi_ = HVar6;
      HVar6 = (HiRep)((ulonglong)HVar6 & 0xffffffff);
      uVar7 = uVar7 + 4000000000;
    }
    uVar8 = uVar8 << 0x20 | (ulonglong)HVar6 & 0xffffffff;
    this->rep_lo_ = uVar7 - uVar1;
    if ((longlong)HVar4 < 0) {
      bVar2 = (longlong)uVar8 < (longlong)HVar3;
    }
    else {
      bVar2 = (longlong)HVar3 < (longlong)uVar8;
    }
    if (!bVar2) {
      return this;
    }
    local_28.rep_hi_.lo_ = 0xffffffff;
    local_28.rep_hi_.hi_ = 0x7fffffff;
    local_28.rep_lo_ = 0xffffffff;
    HVar3 = HVar4;
  }
  if ((longlong)HVar3 < 0) {
    pDVar5 = &local_28;
  }
  else {
    local_28.rep_hi_.lo_ = 0xffffffff;
    local_28.rep_hi_.hi_ = 0x7fffffff;
    local_28.rep_lo_ = 0xffffffff;
    pDVar5 = lts_20240722::operator-(&local_18,&local_28);
  }
  this->rep_hi_ = pDVar5->rep_hi_;
  this->rep_lo_ = pDVar5->rep_lo_;
  return this;
}

// operator/= @ 14f9059c0

/* public: class absl::lts_20240722::Duration & __ptr64 __cdecl
   absl::lts_20240722::Duration::operator/=(double) __ptr64 */

Duration * __thiscall absl::lts_20240722::Duration::operator/=(Duration *this,double param_1)

{
  int iVar1;
  Duration *pDVar2;
  Duration local_28;
  Duration local_18;
  
  local_28.rep_hi_ = this->rep_hi_;
  if ((this->rep_lo_ == 0xffffffff) || (param_1 == 0.0)) {
    iVar1 = _dsign(param_1);
    local_28.rep_hi_.lo_ = 0xffffffff;
    local_28.rep_hi_.hi_ = 0x7fffffff;
    local_28.rep_lo_ = 0xffffffff;
    if ((uint)(iVar1 != 0) == (this->rep_hi_).hi_ >> 0x1f) {
      pDVar2 = &local_28;
    }
    else {
      pDVar2 = lts_20240722::operator-(&local_18,&local_28);
    }
  }
  else {
    local_28.rep_hi_ = this->rep_hi_;
    local_28.rep_lo_ = this->rep_lo_;
    pDVar2 = (Duration *)FUN_14f904170(&local_18,&local_28,SUB84(param_1,0));
  }
  this->rep_hi_ = pDVar2->rep_hi_;
  this->rep_lo_ = pDVar2->rep_lo_;
  return this;
}

// operator/= @ 14f905a80

/* public: class absl::lts_20240722::Duration & __ptr64 __cdecl
   absl::lts_20240722::Duration::operator/=(__int64) __ptr64 */

Duration * __thiscall absl::lts_20240722::Duration::operator/=(Duration *this,__int64 param_1)

{
  undefined1 auVar1 [16];
  byte bVar2;
  ulonglong uVar3;
  uint128 *puVar4;
  uint uVar5;
  HiRep HVar6;
  bool bVar7;
  uint128 local_48;
  Duration local_38;
  uint128 local_28;
  uint128 local_18;
  
  local_38.rep_hi_ = this->rep_hi_;
  bVar2 = (byte)((ulonglong)param_1 >> 0x38);
  if ((this->rep_lo_ == 0xffffffff) || (param_1 == 0)) {
    local_48.lo_ = 0x7fffffffffffffff;
    local_48.hi_ = CONCAT44(local_48.hi_._4_4_,0xffffffff);
    if (bVar2 >> 7 == (byte)((this->rep_hi_).hi_ >> 0x1f)) {
      puVar4 = &local_48;
    }
    else {
      puVar4 = (uint128 *)lts_20240722::operator-(&local_38,(Duration *)&local_48);
    }
    this->rep_hi_ = *(HiRep *)&puVar4->lo_;
    local_38.rep_lo_ = (uint)puVar4->hi_;
  }
  else {
    local_38.rep_lo_ = this->rep_lo_;
    HVar6 = local_38.rep_hi_;
    if ((longlong)local_38.rep_hi_ < 0) {
      HVar6 = (HiRep)~(ulonglong)local_38.rep_hi_;
    }
    auVar1._8_8_ = 0;
    auVar1._0_4_ = HVar6.lo_;
    auVar1._4_4_ = HVar6.hi_;
    local_48.hi_ = SUB168(ZEXT816(4000000000) * auVar1,8);
    uVar3 = SUB168(ZEXT816(4000000000) * auVar1,0);
    uVar5 = 4000000000 - this->rep_lo_;
    if (-1 < (longlong)local_38.rep_hi_) {
      uVar5 = this->rep_lo_;
    }
    local_48.lo_ = uVar5 + uVar3;
    if (local_48.lo_ < uVar3) {
      local_48.hi_ = local_48.hi_ + 1;
    }
    bVar7 = param_1 < 0;
    if (bVar7) {
      param_1 = ~param_1;
    }
    uVar3 = (ulonglong)bVar7;
    local_28.lo_ = uVar3 + param_1;
    local_28.hi_ = (ulong64)(local_28.lo_ < uVar3);
    lts_20240722::operator/(&local_18,&local_48,&local_28);
    local_28.lo_ = local_18.lo_;
    local_28.hi_ = local_18.hi_;
    FUN_14f907d00(&local_38,&local_28,
                  (byte)(local_38.rep_hi_.hi_._3_1_ >> 7) != (byte)-((char)bVar2 >> 7));
    this->rep_hi_ = local_38.rep_hi_;
  }
  this->rep_lo_ = local_38.rep_lo_;
  return this;
}

// operator%= @ 14f905c30

/* public: class absl::lts_20240722::Duration & __ptr64 __cdecl
   absl::lts_20240722::Duration::operator%=(class absl::lts_20240722::Duration) __ptr64 */

Duration * __thiscall absl::lts_20240722::Duration::operator%=(Duration *this,Duration *param_1)

{
  uint uVar1;
  char cVar2;
  HiRep HVar3;
  undefined1 local_res8 [8];
  HiRep local_28;
  uint local_20;
  HiRep local_18;
  uint local_10;
  
  HVar3 = this->rep_hi_;
  uVar1 = this->rep_lo_;
  local_28 = param_1->rep_hi_;
  local_20 = param_1->rep_lo_;
  local_18 = HVar3;
  local_10 = uVar1;
  cVar2 = FUN_14f907620(&local_18,&local_28,local_res8,this);
  if (cVar2 == '\0') {
    local_18 = param_1->rep_hi_;
    local_10 = param_1->rep_lo_;
    local_28 = HVar3;
    local_20 = uVar1;
    FUN_14f9078d0(0,&local_28,&local_18,this);
  }
  return this;
}

// AbsDuration @ 14f905cd0

/* WARNING: Removing unreachable block (ram,0x00014f905d3a) */
/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::AbsDuration(class
   absl::lts_20240722::Duration) */

Duration * __cdecl
absl::lts_20240722::AbsDuration(Duration *__return_storage_ptr__,Duration *param_1)

{
  uint uVar1;
  byte bVar2;
  Duration *pDVar3;
  Duration local_28;
  Duration local_18;
  
  if (param_1->rep_hi_ == (HiRep)0x0) {
    bVar2 = 0;
  }
  else {
    bVar2 = SUB81(param_1->rep_hi_,7) >> 7;
  }
  local_28.rep_hi_ = param_1->rep_hi_;
  local_28.rep_lo_ = param_1->rep_lo_;
  if (bVar2 == 0) {
    pDVar3 = &local_28;
  }
  else {
    pDVar3 = operator-(&local_18,&local_28);
  }
  uVar1 = pDVar3->rep_lo_;
  __return_storage_ptr__->rep_hi_ = pDVar3->rep_hi_;
  __return_storage_ptr__->rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// AbslParseFlag @ 14f905da0

/* bool __cdecl absl::lts_20240722::AbslParseFlag(class std::basic_string_view<char,struct
   std::char_traits<char> >,class absl::lts_20240722::Duration * __ptr64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64) */

bool __cdecl
absl::lts_20240722::AbslParseFlag
          (basic_string_view<char,std::char_traits<char>_> *param_1,Duration *param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  bool bVar1;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = param_1->_Mydata;
  local_18._Mysize = param_1->_Mysize;
  bVar1 = ParseDuration(&local_18,param_2);
  return bVar1;
}

// AbslUnparseFlag @ 14f905dd0

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::AbslUnparseFlag(class absl::lts_20240722::Duration) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::AbslUnparseFlag
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          Duration *param_1)

{
  Duration local_18;
  
  local_18.rep_hi_ = param_1->rep_hi_;
  local_18.rep_lo_ = param_1->rep_lo_;
  FormatDuration(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// FUN_14f905e10 @ 14f905e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f905e10(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
                  double param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulong64 uVar2;
  longlong lVar3;
  int iVar4;
  char *_Src;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar5;
  longlong lVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  int iVar9;
  char *pcVar10;
  longlong lVar11;
  double dVar12;
  undefined1 auStackY_88 [32];
  <lambda_1> local_58;
  double local_50 [2];
  char local_3b [3];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_88;
  uVar7 = 0xf;
  if (*(int *)(param_3 + 2) < 0xf) {
    uVar7 = *(undefined4 *)(param_3 + 2);
  }
  local_50[0] = 0.0;
  dVar12 = modf(param_2,local_50);
  dVar12 = (double)round(dVar12 * (double)param_3[3]);
  lVar6 = (longlong)dVar12;
  if (((longlong)local_50[0] != 0) || (lVar6 != 0)) {
    pcVar10 = local_3b + 2;
    lVar11 = (longlong)local_50[0];
    iVar4 = 0;
    do {
      iVar9 = iVar4;
      pcVar10 = pcVar10 + -1;
      lVar3 = lVar11 / 10;
      *pcVar10 = (char)lVar11 + (char)lVar3 * -10 + '0';
      lVar11 = lVar3;
      iVar4 = iVar9 + -1;
    } while (lVar3 != 0);
    for (iVar9 = iVar9 + -2; -1 < iVar9; iVar9 = iVar9 + -1) {
      pcVar10 = pcVar10 + -1;
      *pcVar10 = '0';
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (param_1,pcVar10,(ulong64)(local_3b + (2 - (longlong)pcVar10)));
    if (lVar6 != 0) {
      uVar1 = (param_1->_Mypair)._Myval2._Mysize;
      uVar8 = (param_1->_Mypair)._Myval2._Myres;
      if (uVar1 < uVar8) {
        (param_1->_Mypair)._Myval2._Mysize = uVar1 + 1;
        pbVar5 = param_1;
        if (0xf < uVar8) {
          pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        *(undefined2 *)((longlong)&(pbVar5->_Mypair)._Myval2._Bx + uVar1) = 0x2e;
      }
      else {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::push_back_::__l2::<lambda_1>,char>
                  (param_1,1,local_58,0x2e);
      }
      _Src = (char *)FUN_14f906ce0(local_3b + 2,uVar7,lVar6);
      pcVar10 = local_3b + 2;
      while (local_3b[1] == '0') {
        local_3b[1] = pcVar10[-2];
        pcVar10 = pcVar10 + -1;
      }
      uVar1 = (param_1->_Mypair)._Myval2._Myres;
      uVar8 = (longlong)pcVar10 - (longlong)_Src;
      uVar2 = (param_1->_Mypair)._Myval2._Mysize;
      if (uVar1 - uVar2 < uVar8) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                  (param_1,uVar8,local_58,_Src,uVar8);
      }
      else {
        (param_1->_Mypair)._Myval2._Mysize = uVar2 + uVar8;
        pbVar5 = param_1;
        if (0xf < uVar1) {
          pbVar5 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        pcVar10 = (pbVar5->_Mypair)._Myval2._Bx._Buf + uVar2;
        memmove(pcVar10,_Src,uVar8);
        pcVar10[uVar8] = '\0';
      }
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (param_1,(char *)*param_3,param_3[1]);
  }
  return;
}

// FUN_14f905ff0 @ 14f905ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f905ff0(basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
                  longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char cVar5;
  undefined1 auStack_58 [56];
  char local_20 [8];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pcVar3 = local_20 + 1;
  iVar2 = 0;
  do {
    iVar4 = iVar2;
    pcVar3 = pcVar3 + -1;
    lVar1 = param_2 / 10;
    cVar5 = (char)param_2 + (char)lVar1 * -10;
    *pcVar3 = cVar5 + '0';
    param_2 = lVar1;
    iVar2 = iVar4 + -1;
  } while (lVar1 != 0);
  iVar4 = iVar4 + -2;
  if (iVar4 < 0) {
    if (cVar5 != '\0') goto LAB_14f9060a0;
  }
  else {
    do {
      pcVar3 = pcVar3 + -1;
      iVar4 = iVar4 + -1;
      *pcVar3 = '0';
    } while (-1 < iVar4);
  }
  if (pcVar3 + 1 == local_20 + 1) {
    return;
  }
LAB_14f9060a0:
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,pcVar3,(ulong64)(local_20 + (1 - (longlong)pcVar3)));
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_1,(char *)*param_3,param_3[1]);
  return;
}

// Ceil @ 14f9060e0

/* WARNING: Removing unreachable block (ram,0x00014f9062e0) */
/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::Ceil(class
   absl::lts_20240722::Duration,class absl::lts_20240722::Duration) */

Duration * __cdecl
absl::lts_20240722::Ceil(Duration *__return_storage_ptr__,Duration *param_1,Duration *param_2)

{
  HiRep HVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  Duration *pDVar5;
  Duration *pDVar6;
  bool bVar7;
  HiRep local_res8;
  HiRep local_58;
  uint local_50;
  Duration local_48;
  Duration local_38;
  Duration local_28;
  
  local_58 = param_1->rep_hi_;
  local_50 = param_1->rep_lo_;
  local_48.rep_hi_ = param_2->rep_hi_;
  local_48.rep_lo_ = param_2->rep_lo_;
  local_38.rep_hi_ = param_1->rep_hi_;
  local_38.rep_lo_ = param_1->rep_lo_;
  cVar3 = FUN_14f907620(&local_38,&local_48,&local_res8,&local_58);
  if (cVar3 == '\0') {
    local_38.rep_hi_ = param_2->rep_hi_;
    local_38.rep_lo_ = param_2->rep_lo_;
    local_48.rep_hi_ = param_1->rep_hi_;
    local_48.rep_lo_ = param_1->rep_lo_;
    FUN_14f9078d0(0,&local_48,&local_38,&local_58);
  }
  local_28.rep_hi_ = param_1->rep_hi_;
  local_28.rep_lo_ = param_1->rep_lo_;
  local_38.rep_hi_ = local_58;
  local_38.rep_lo_ = local_50;
  pDVar5 = Duration::operator-=(&local_28,&local_38);
  local_48.rep_lo_ = param_1->rep_lo_;
  local_res8 = pDVar5->rep_hi_;
  uVar2 = pDVar5->rep_lo_;
  local_48.rep_hi_ = param_1->rep_hi_;
  HVar1 = pDVar5->rep_hi_;
  local_38.rep_lo_ = uVar2;
  local_38.rep_hi_ = HVar1;
  if (local_res8 == local_48.rep_hi_) {
    local_38.rep_hi_ = param_1->rep_hi_;
    if (HVar1 == (HiRep)0x8000000000000000) {
      bVar7 = uVar2 + 1 < param_1->rep_lo_ + 1;
    }
    else {
      bVar7 = uVar2 < param_1->rep_lo_;
    }
  }
  else {
    local_48.rep_lo_ = param_1->rep_lo_;
    local_48.rep_hi_ = param_1->rep_hi_;
    bVar7 = (longlong)HVar1 < (longlong)local_48.rep_hi_;
  }
  if (bVar7) {
    if (param_2->rep_hi_ == (HiRep)0x0) {
      bVar4 = 0;
    }
    else {
      bVar4 = SUB81(param_2->rep_hi_,7) >> 7;
    }
    local_28.rep_hi_ = param_2->rep_hi_;
    local_28.rep_lo_ = param_2->rep_lo_;
    if (bVar4 == 0) {
      pDVar5 = &local_28;
    }
    else {
      pDVar5 = operator-(&local_48,&local_28);
    }
    local_28.rep_hi_ = pDVar5->rep_hi_;
    local_28.rep_lo_ = pDVar5->rep_lo_;
    local_38.rep_hi_ = local_res8;
    local_38.rep_lo_ = uVar2;
    pDVar5 = Duration::operator+=(&local_38,&local_28);
    local_28.rep_lo_ = pDVar5->rep_lo_;
    pDVar6 = &local_28;
    local_28.rep_hi_ = pDVar5->rep_hi_;
  }
  else {
    pDVar6 = &local_38;
    local_38.rep_hi_ = pDVar5->rep_hi_;
  }
  uVar2 = pDVar6->rep_lo_;
  __return_storage_ptr__->rep_hi_ = pDVar6->rep_hi_;
  __return_storage_ptr__->rep_lo_ = uVar2;
  return __return_storage_ptr__;
}

// FUN_14f906390 @ 14f906390

ulonglong FUN_14f906390(longlong *param_1,char *param_2,longlong *param_3,longlong *param_4,
                       longlong *param_5)

{
  char *pcVar1;
  longlong lVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = (char *)0x0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 1;
  pcVar1 = (char *)*param_1;
  pcVar5 = pcVar1;
  if (pcVar1 == param_2) {
LAB_14f906448:
    if ((pcVar5 != param_2) && (*pcVar5 == '.')) {
      pcVar4 = pcVar5 + 1;
      *param_1 = (longlong)pcVar4;
      while ((pcVar4 != param_2 && ((int)*pcVar4 - 0x30U < 10))) {
        if (*param_5 < 0xccccccccccccccd) {
          *param_4 = (longlong)(int)((int)*pcVar4 - 0x30U) + *param_4 * 10;
          *param_5 = *param_5 * 10;
        }
        *param_1 = *param_1 + 1;
        pcVar4 = (char *)*param_1;
      }
      if ((pcVar5 != pcVar1) || (*param_5 != 1)) {
        return CONCAT71((int7)((ulonglong)pcVar4 >> 8),1);
      }
LAB_14f906444:
      return (ulonglong)pcVar4 & 0xffffffffffffff00;
    }
  }
  else {
    do {
      uVar3 = (int)*pcVar5 - 0x30;
      pcVar4 = (char *)(ulonglong)uVar3;
      if (((int)uVar3 < 0) || (9 < (int)uVar3)) goto LAB_14f906448;
      if (0xccccccccccccccc < *param_3) goto LAB_14f906444;
      lVar2 = *param_3 * 10;
      pcVar4 = (char *)(0x7fffffffffffffff - (longlong)(int)uVar3);
      *param_3 = lVar2;
      if ((longlong)pcVar4 < lVar2) goto LAB_14f906444;
      *param_3 = (int)uVar3 + lVar2;
      pcVar4 = (char *)(*param_1 + 1);
      *param_1 = (longlong)pcVar4;
      pcVar5 = pcVar4;
    } while (pcVar4 != param_2);
  }
  return CONCAT71((int7)((ulonglong)pcVar4 >> 8),pcVar5 != pcVar1);
}

// FUN_14f9064b0 @ 14f9064b0

ulonglong FUN_14f9064b0(longlong *param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  char *pcVar2;
  ulonglong in_RAX;
  undefined8 local_18;
  
  pcVar2 = (char *)*param_1;
  if (param_2 != pcVar2) {
    if ((longlong)param_2 - (longlong)pcVar2 != 1) {
      cVar1 = *pcVar2;
      if (cVar1 == 'm') {
        if (pcVar2[1] == 's') {
          *param_1 = (longlong)(pcVar2 + 2);
          *param_3 = 0;
          *(undefined4 *)(param_3 + 1) = 4000000;
          return 1;
        }
      }
      else if (cVar1 == 'n') {
        if (pcVar2[1] == 's') {
          *param_1 = (longlong)(pcVar2 + 2);
          *param_3 = 0;
          *(undefined4 *)(param_3 + 1) = 4;
          return 1;
        }
      }
      else if ((cVar1 == 'u') && (pcVar2[1] == 's')) {
        *param_1 = (longlong)(pcVar2 + 2);
        *param_3 = 0;
        *(undefined4 *)(param_3 + 1) = 4000;
        return 1;
      }
    }
    cVar1 = *pcVar2;
    in_RAX = 0;
    if (cVar1 == 'h') {
      local_18 = 0xe10;
    }
    else if (cVar1 == 'm') {
      local_18 = 0x3c;
    }
    else {
      if (cVar1 != 's') goto LAB_14f9065b2;
      local_18 = 1;
    }
    *param_3 = local_18;
    *(undefined4 *)(param_3 + 1) = 0;
    *param_1 = *param_1 + 1;
    return 1;
  }
LAB_14f9065b2:
  return in_RAX & 0xffffffffffffff00;
}

// ConsumePrefix @ 14f9065c0

/* bool __cdecl absl::lts_20240722::ConsumePrefix(class std::basic_string_view<char,struct
   std::char_traits<char> > * __ptr64,class std::basic_string_view<char,struct
   std::char_traits<char> >) */

bool __cdecl absl::lts_20240722::ConsumePrefix(longlong *param_1,undefined8 *param_2)

{
  ulonglong _Size;
  longlong lVar1;
  int iVar2;
  
  _Size = param_2[1];
  if (_Size != 0) {
    if (_Size <= (ulonglong)param_1[1]) {
      iVar2 = memcmp((void *)*param_1,(void *)*param_2,_Size);
      if (iVar2 == 0) goto LAB_14f906612;
    }
    return false;
  }
LAB_14f906612:
  lVar1 = param_2[1];
  *param_1 = *param_1 + lVar1;
  param_1[1] = param_1[1] - lVar1;
  return true;
}

// DurationFromTimespec @ 14f906640

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::DurationFromTimespec(struct
   timespec) */

Duration * __cdecl
absl::lts_20240722::DurationFromTimespec(Duration *__return_storage_ptr__,timespec *param_1)

{
  uint uVar1;
  long64 lVar2;
  Duration *pDVar3;
  longlong lVar4;
  HiRep local_38;
  uint local_30;
  Duration local_28;
  Duration local_18;
  
  uVar1 = param_1->tv_nsec;
  if (999999999 < uVar1) {
    local_38 = (HiRep)((longlong)(int)uVar1 / 1000000000);
    lVar4 = ((longlong)(int)uVar1 % 1000000000) * 4;
    local_30 = (uint)lVar4;
    if (lVar4 < 0) {
      local_38 = (HiRep)((longlong)local_38 + -1);
      local_30 = local_30 + 4000000000;
    }
    local_18.rep_hi_ = (HiRep)param_1->tv_sec;
    local_28.rep_hi_ = local_38;
    local_18.rep_lo_ = 0;
    local_28.rep_lo_ = local_30;
    pDVar3 = Duration::operator+=(&local_18,&local_28);
    __return_storage_ptr__->rep_hi_ = pDVar3->rep_hi_;
    __return_storage_ptr__->rep_lo_ = pDVar3->rep_lo_;
    return __return_storage_ptr__;
  }
  lVar2 = param_1->tv_sec;
  (__return_storage_ptr__->rep_hi_).lo_ = (uint)lVar2;
  (__return_storage_ptr__->rep_hi_).hi_ = (uint)((ulonglong)lVar2 >> 0x20);
  __return_storage_ptr__->rep_lo_ = uVar1 * 4;
  return __return_storage_ptr__;
}

// DurationFromTimeval @ 14f906750

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::DurationFromTimeval(struct
   timeval) */

Duration * __cdecl
absl::lts_20240722::DurationFromTimeval(Duration *__return_storage_ptr__,timeval param_1)

{
  Duration *pDVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  HiRep local_38;
  uint local_30;
  Duration local_28;
  Duration local_18;
  
  uVar3 = (ulonglong)param_1.tv_usec;
  uVar2 = param_1.tv_sec;
  if (999999 < uVar3) {
    local_38 = (HiRep)((longlong)uVar3 / 1000000);
    lVar4 = ((longlong)uVar3 % 1000000) * 4000;
    local_30 = (uint)lVar4;
    if (lVar4 < 0) {
      local_38 = (HiRep)((longlong)local_38 + -1);
      local_30 = local_30 + 4000000000;
    }
    local_18.rep_hi_ = (HiRep)(longlong)(int)uVar2;
    local_28.rep_hi_ = local_38;
    local_18.rep_lo_ = 0;
    local_28.rep_lo_ = local_30;
    pDVar1 = Duration::operator+=(&local_18,&local_28);
    __return_storage_ptr__->rep_hi_ = pDVar1->rep_hi_;
    __return_storage_ptr__->rep_lo_ = pDVar1->rep_lo_;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->rep_hi_).lo_ = uVar2;
  (__return_storage_ptr__->rep_hi_).hi_ = (int)uVar2 >> 0x1f;
  __return_storage_ptr__->rep_lo_ = param_1.tv_usec * 4000;
  return __return_storage_ptr__;
}

// FDivDuration @ 14f906870

/* WARNING: Removing unreachable block (ram,0x00014f9069a5) */
/* WARNING: Removing unreachable block (ram,0x00014f9069f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* double __cdecl absl::lts_20240722::FDivDuration(class absl::lts_20240722::Duration,class
   absl::lts_20240722::Duration) */

double __cdecl absl::lts_20240722::FDivDuration(Duration *param_1,Duration *param_2)

{
  byte bVar1;
  byte bVar2;
  
  if ((param_1->rep_lo_ != 0xffffffff) &&
     ((param_2->rep_hi_ != (HiRep)0x0 || (param_2->rep_lo_ != 0)))) {
    if (param_2->rep_lo_ != 0xffffffff) {
      return ((double)(longlong)param_1->rep_hi_ * ___real_41edcd6500000000 +
             (double)param_1->rep_lo_) /
             ((double)(longlong)param_2->rep_hi_ * ___real_41edcd6500000000 +
             (double)param_2->rep_lo_);
    }
    return 0.0;
  }
  if (param_2->rep_hi_ == (HiRep)0x0) {
    bVar2 = 0;
  }
  else {
    bVar2 = SUB81(param_2->rep_hi_,7) >> 7;
  }
  if (param_1->rep_hi_ == (HiRep)0x0) {
    bVar1 = 0;
  }
  else {
    bVar1 = SUB81(param_1->rep_hi_,7) >> 7;
  }
  if (bVar1 != bVar2) {
    return __real_fff0000000000000;
  }
  return __real_7ff0000000000000;
}

// Floor @ 14f906a30

/* WARNING: Removing unreachable block (ram,0x00014f906c31) */
/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::Floor(class
   absl::lts_20240722::Duration,class absl::lts_20240722::Duration) */

Duration * __cdecl
absl::lts_20240722::Floor(Duration *__return_storage_ptr__,Duration *param_1,Duration *param_2)

{
  HiRep HVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  Duration *pDVar5;
  Duration *pDVar6;
  bool bVar7;
  HiRep local_res8;
  HiRep local_58;
  uint local_50;
  Duration local_48;
  Duration local_38;
  Duration local_28;
  
  local_58 = param_1->rep_hi_;
  local_50 = param_1->rep_lo_;
  local_48.rep_hi_ = param_2->rep_hi_;
  local_48.rep_lo_ = param_2->rep_lo_;
  local_38.rep_hi_ = param_1->rep_hi_;
  local_38.rep_lo_ = param_1->rep_lo_;
  cVar3 = FUN_14f907620(&local_38,&local_48,&local_res8,&local_58);
  if (cVar3 == '\0') {
    local_38.rep_hi_ = param_2->rep_hi_;
    local_38.rep_lo_ = param_2->rep_lo_;
    local_48.rep_hi_ = param_1->rep_hi_;
    local_48.rep_lo_ = param_1->rep_lo_;
    FUN_14f9078d0(0,&local_48,&local_38,&local_58);
  }
  local_28.rep_hi_ = param_1->rep_hi_;
  local_28.rep_lo_ = param_1->rep_lo_;
  local_38.rep_hi_ = local_58;
  local_38.rep_lo_ = local_50;
  pDVar5 = Duration::operator-=(&local_28,&local_38);
  local_res8 = pDVar5->rep_hi_;
  uVar2 = pDVar5->rep_lo_;
  local_48.rep_hi_ = pDVar5->rep_hi_;
  HVar1 = param_1->rep_hi_;
  local_38.rep_hi_ = HVar1;
  local_38.rep_lo_ = param_1->rep_lo_;
  if (param_1->rep_hi_ == local_48.rep_hi_) {
    local_38.rep_hi_ = pDVar5->rep_hi_;
    if (HVar1 == (HiRep)0x8000000000000000) {
      bVar7 = param_1->rep_lo_ + 1 < uVar2 + 1;
    }
    else {
      bVar7 = param_1->rep_lo_ < uVar2;
    }
  }
  else {
    local_48.rep_hi_ = pDVar5->rep_hi_;
    bVar7 = (longlong)HVar1 < (longlong)local_48.rep_hi_;
  }
  if (bVar7) {
    if (param_2->rep_hi_ == (HiRep)0x0) {
      bVar4 = 0;
    }
    else {
      bVar4 = SUB81(param_2->rep_hi_,7) >> 7;
    }
    local_28.rep_hi_ = param_2->rep_hi_;
    local_28.rep_lo_ = param_2->rep_lo_;
    local_48.rep_lo_ = uVar2;
    if (bVar4 == 0) {
      pDVar5 = &local_28;
    }
    else {
      pDVar5 = operator-(&local_48,&local_28);
    }
    local_28.rep_hi_ = pDVar5->rep_hi_;
    local_28.rep_lo_ = pDVar5->rep_lo_;
    local_38.rep_hi_ = local_res8;
    local_38.rep_lo_ = uVar2;
    pDVar5 = Duration::operator-=(&local_38,&local_28);
    local_28.rep_lo_ = pDVar5->rep_lo_;
    pDVar6 = &local_28;
    local_28.rep_hi_ = pDVar5->rep_hi_;
  }
  else {
    pDVar6 = &local_38;
    local_38.rep_hi_ = pDVar5->rep_hi_;
    local_38.rep_lo_ = uVar2;
  }
  uVar2 = pDVar6->rep_lo_;
  __return_storage_ptr__->rep_hi_ = pDVar6->rep_hi_;
  __return_storage_ptr__->rep_lo_ = uVar2;
  return __return_storage_ptr__;
}

// FUN_14f906ce0 @ 14f906ce0

char * FUN_14f906ce0(char *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  
  do {
    iVar2 = param_2;
    param_1 = param_1 + -1;
    lVar1 = param_3 / 10;
    *param_1 = (char)param_3 + (char)lVar1 * -10 + '0';
    param_3 = lVar1;
    param_2 = iVar2 + -1;
  } while (lVar1 != 0);
  for (iVar2 = iVar2 + -2; -1 < iVar2; iVar2 = iVar2 + -1) {
    param_1 = param_1 + -1;
    *param_1 = '0';
  }
  return param_1;
}

// FormatDuration @ 14f906d50

/* WARNING: Removing unreachable block (ram,0x00014f907281) */
/* WARNING: Removing unreachable block (ram,0x00014f907292) */
/* WARNING: Removing unreachable block (ram,0x00014f90729f) */
/* WARNING: Removing unreachable block (ram,0x00014f9072cb) */
/* WARNING: Removing unreachable block (ram,0x00014f9072ac) */
/* WARNING: Removing unreachable block (ram,0x00014f906fa2) */
/* WARNING: Removing unreachable block (ram,0x00014f906e41) */
/* WARNING: Removing unreachable block (ram,0x00014f9072f2) */
/* WARNING: Removing unreachable block (ram,0x00014f90732d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::FormatDuration(class absl::lts_20240722::Duration) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::FormatDuration
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          Duration *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  double dVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  Duration *pDVar12;
  undefined8 uVar13;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar14;
  char *pcVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  <lambda_1> local_res8;
  undefined8 local_res18 [2];
  Duration local_98;
  Duration local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
  (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[0] = '\0';
  local_98.rep_hi_ = param_1->rep_hi_;
  local_98.rep_lo_ = param_1->rep_lo_;
  if ((local_98.rep_hi_ == (HiRep)0x8000000000000000) &&
     (local_88.rep_hi_.lo_ = 0, local_88.rep_hi_.hi_ = 0x80000000, param_1->rep_lo_ == 0)) {
    local_88.rep_hi_ = local_98.rep_hi_;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (__return_storage_ptr__,"-2562047788015215h30m8s",0x17);
  }
  else {
    if ((param_1->rep_hi_ != (HiRep)0x0) && ((longlong)param_1->rep_hi_ < 0)) {
      (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 1;
      *(undefined2 *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = 0x2d;
      local_98.rep_hi_ = param_1->rep_hi_;
      local_98.rep_lo_ = param_1->rep_lo_;
      pDVar12 = operator-(&local_88,&local_98);
      param_1->rep_hi_ = pDVar12->rep_hi_;
      param_1->rep_lo_ = pDVar12->rep_lo_;
    }
    uVar8 = _UNK_1535373e8;
    uVar7 = _DAT_1535373e0;
    uVar6 = _UNK_1535373d8;
    puVar5 = PTR_s_h_1535373d0;
    local_98.rep_hi_ = param_1->rep_hi_;
    local_98.rep_lo_ = param_1->rep_lo_;
    if ((local_98.rep_hi_ == (HiRep)0x7fffffffffffffff) && (param_1->rep_lo_ == 0xffffffff)) {
      uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
      uVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
      local_88.rep_hi_ = local_98.rep_hi_;
      if (uVar3 - uVar2 < 3) {
        local_res8 = SUB81(__return_storage_ptr__,0);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                  (__return_storage_ptr__,3,local_res8,"inf",3);
      }
      else {
        (__return_storage_ptr__->_Mypair)._Myval2._Mysize = uVar2 + 3;
        pbVar14 = __return_storage_ptr__;
        if (0xf < uVar3) {
          pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
        }
        pcVar15 = (pbVar14->_Mypair)._Myval2._Bx._Buf + uVar2;
        memmove(pcVar15,&s_inf,3);
        pcVar15[3] = '\0';
      }
    }
    else {
      if ((longlong)param_1->rep_hi_ < 1) {
        local_88.rep_hi_.lo_ = 0;
        local_88.rep_hi_.hi_ = 0;
        local_88.rep_lo_ = 4000;
        local_98.rep_hi_ = param_1->rep_hi_;
        local_98.rep_lo_ = param_1->rep_lo_;
        bVar9 = operator<(&local_98,&local_88);
        local_88.rep_hi_.lo_ = 0;
        local_88.rep_hi_.hi_ = 0;
        local_98.rep_hi_ = param_1->rep_hi_;
        local_98.rep_lo_ = param_1->rep_lo_;
        if (bVar9) {
          local_88.rep_lo_ = 4;
          dVar4 = FDivDuration(&local_98,&local_88);
          uVar16 = SUB84(dVar4,0);
          uVar18 = PTR_s_ns_153537330._0_4_;
          uVar20 = PTR_s_ns_153537330._4_4_;
          uVar21 = _UNK_153537338;
          uVar22 = _UNK_15353733c;
          uVar24 = _DAT_153537340;
          uVar26 = _UNK_153537344;
          uVar27 = _UNK_153537348;
          uVar28 = _UNK_15353734c;
        }
        else {
          local_88.rep_lo_ = 4000000;
          bVar9 = operator<(&local_98,&local_88);
          local_88.rep_hi_.lo_ = 0;
          local_88.rep_hi_.hi_ = 0;
          local_98.rep_hi_ = param_1->rep_hi_;
          local_98.rep_lo_ = param_1->rep_lo_;
          if (bVar9) {
            local_88.rep_lo_ = 4000;
            dVar4 = FDivDuration(&local_98,&local_88);
            uVar16 = SUB84(dVar4,0);
            uVar18 = PTR_s_us_153537350._0_4_;
            uVar20 = PTR_s_us_153537350._4_4_;
            uVar21 = _UNK_153537358;
            uVar22 = _UNK_15353735c;
            uVar24 = _DAT_153537360;
            uVar26 = _UNK_153537364;
            uVar27 = _UNK_153537368;
            uVar28 = _UNK_15353736c;
          }
          else {
            local_88.rep_lo_ = 4000000;
            dVar4 = FDivDuration(&local_98,&local_88);
            uVar16 = SUB84(dVar4,0);
            uVar18 = PTR_s_ms_153537370._0_4_;
            uVar20 = PTR_s_ms_153537370._4_4_;
            uVar21 = _UNK_153537378;
            uVar22 = _UNK_15353737c;
            uVar24 = _DAT_153537380;
            uVar26 = _UNK_153537384;
            uVar27 = _UNK_153537388;
            uVar28 = _UNK_15353738c;
          }
        }
      }
      else {
        local_98.rep_hi_ = param_1->rep_hi_;
        uVar23 = local_98.rep_hi_.lo_;
        uVar25 = local_98.rep_hi_.hi_;
        uVar1 = param_1->rep_lo_;
        local_res18[0] = 0;
        uVar17 = 0xe10;
        uVar19 = 0;
        local_88.rep_hi_.lo_ = 0xe10;
        local_88.rep_hi_.hi_ = 0;
        local_88.rep_lo_ = 0;
        local_98.rep_lo_ = uVar1;
        cVar10 = FUN_14f907620(&local_98,&local_88,local_res18,param_1);
        uVar13 = local_res18[0];
        if (cVar10 == '\0') {
          local_88.rep_hi_.hi_ = uVar19;
          local_88.rep_hi_.lo_ = uVar17;
          local_88.rep_lo_ = 0;
          local_98.rep_hi_.hi_ = uVar25;
          local_98.rep_hi_.lo_ = uVar23;
          local_98.rep_lo_ = uVar1;
          uVar13 = FUN_14f9078d0(1,&local_98,&local_88,param_1);
        }
        local_78 = puVar5;
        uStack_70 = uVar6;
        local_68 = uVar7;
        uStack_60 = uVar8;
        FUN_14f905ff0(__return_storage_ptr__,uVar13,&local_78);
        uVar8 = _UNK_1535373c8;
        uVar7 = _DAT_1535373c0;
        uVar6 = _UNK_1535373b8;
        puVar5 = PTR_s_m_1535373b0;
        local_98.rep_hi_ = param_1->rep_hi_;
        uVar23 = local_98.rep_hi_.lo_;
        uVar25 = local_98.rep_hi_.hi_;
        uVar1 = param_1->rep_lo_;
        local_res18[0] = 0;
        uVar17 = 0x3c;
        uVar19 = 0;
        local_88.rep_hi_.lo_ = 0x3c;
        local_88.rep_hi_.hi_ = 0;
        local_88.rep_lo_ = 0;
        local_98.rep_lo_ = uVar1;
        cVar10 = FUN_14f907620(&local_98,&local_88,local_res18,param_1);
        uVar13 = local_res18[0];
        if (cVar10 == '\0') {
          local_88.rep_hi_.hi_ = uVar19;
          local_88.rep_hi_.lo_ = uVar17;
          local_88.rep_lo_ = 0;
          local_98.rep_hi_.hi_ = uVar25;
          local_98.rep_hi_.lo_ = uVar23;
          local_98.rep_lo_ = uVar1;
          uVar13 = FUN_14f9078d0(1,&local_98,&local_88,param_1);
        }
        local_78 = puVar5;
        uStack_70 = uVar6;
        local_68 = uVar7;
        uStack_60 = uVar8;
        FUN_14f905ff0(__return_storage_ptr__,uVar13,&local_78);
        local_88.rep_hi_.lo_ = 1;
        local_88.rep_hi_.hi_ = 0;
        local_88.rep_lo_ = 0;
        local_98.rep_hi_ = param_1->rep_hi_;
        local_98.rep_lo_ = param_1->rep_lo_;
        dVar4 = FDivDuration(&local_98,&local_88);
        uVar16 = SUB84(dVar4,0);
        uVar18 = PTR_s_s_153537390._0_4_;
        uVar20 = PTR_s_s_153537390._4_4_;
        uVar21 = _UNK_153537398;
        uVar22 = _UNK_15353739c;
        uVar24 = _DAT_1535373a0;
        uVar26 = _UNK_1535373a4;
        uVar27 = _UNK_1535373a8;
        uVar28 = _UNK_1535373ac;
      }
      local_78 = (undefined *)CONCAT44(uVar20,uVar18);
      uStack_70 = CONCAT44(uVar22,uVar21);
      local_68 = CONCAT44(uVar26,uVar24);
      uStack_60 = CONCAT44(uVar28,uVar27);
      FUN_14f905e10(__return_storage_ptr__,uVar16,&local_78);
    }
    uVar2 = (__return_storage_ptr__->_Mypair)._Myval2._Mysize;
    if (uVar2 != 0) {
      pbVar14 = __return_storage_ptr__;
      if (0xf < (__return_storage_ptr__->_Mypair)._Myval2._Myres) {
        pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
      }
      if (uVar2 != 1) {
        return __return_storage_ptr__;
      }
      iVar11 = memcmp(pbVar14,&s__,1);
      if (iVar11 != 0) {
        return __return_storage_ptr__;
      }
    }
    uVar3 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
    if (uVar3 == 0) {
      pcVar15 = ::operator_new(0x10);
      (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 1;
      (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
      pcVar15[0] = '0';
      pcVar15[1] = '\0';
      (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = pcVar15;
    }
    else {
      pbVar14 = __return_storage_ptr__;
      if (0xf < uVar3) {
        pbVar14 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
      }
      (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 1;
      *(undefined2 *)&(pbVar14->_Mypair)._Myval2._Bx = 0x30;
    }
  }
  return __return_storage_ptr__;
}

// FromInt64 @ 14f907340

/* class absl::lts_20240722::Duration __cdecl
   absl::lts_20240722::time_internal::FromInt64(__int64,struct std::ratio<60,1>) */

Duration * __cdecl
absl::lts_20240722::time_internal::FromInt64
          (Duration *__return_storage_ptr__,__int64 param_1,ratio<60,1> param_2)

{
  uint uVar1;
  Duration *pDVar2;
  Duration *pDVar3;
  Duration local_38;
  Duration local_28;
  Duration local_1c;
  
  if (param_1 + 0x222222222222222U < 0x444444444444445) {
    local_38.rep_lo_ = 0;
    local_38.rep_hi_ = (HiRep)(param_1 * 0x3c);
    pDVar3 = &local_38;
  }
  else {
    local_38.rep_hi_.lo_ = 0xffffffff;
    local_38.rep_hi_.hi_ = 0x7fffffff;
    local_38.rep_lo_ = 0xffffffff;
    if (param_1 < 1) {
      pDVar2 = lts_20240722::operator-(&local_1c,&local_38);
    }
    else {
      pDVar2 = &local_38;
    }
    local_28.rep_lo_ = pDVar2->rep_lo_;
    pDVar3 = &local_28;
    local_28.rep_hi_ = pDVar2->rep_hi_;
  }
  uVar1 = pDVar3->rep_lo_;
  __return_storage_ptr__->rep_hi_ = pDVar3->rep_hi_;
  __return_storage_ptr__->rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// FromInt64 @ 14f9073f0

/* class absl::lts_20240722::Duration __cdecl
   absl::lts_20240722::time_internal::FromInt64(__int64,struct std::ratio<3600,1>) */

Duration * __cdecl
absl::lts_20240722::time_internal::FromInt64
          (Duration *__return_storage_ptr__,__int64 param_1,ratio<3600,1> param_2)

{
  uint uVar1;
  Duration *pDVar2;
  Duration *pDVar3;
  Duration local_38;
  Duration local_28;
  Duration local_1c;
  
  if (param_1 + 0x91a2b3c4d5e6fU < 0x123456789abcdf) {
    local_38.rep_lo_ = 0;
    local_38.rep_hi_ = (HiRep)(param_1 * 0xe10);
    pDVar3 = &local_38;
  }
  else {
    local_38.rep_hi_.lo_ = 0xffffffff;
    local_38.rep_hi_.hi_ = 0x7fffffff;
    local_38.rep_lo_ = 0xffffffff;
    if (param_1 < 1) {
      pDVar2 = lts_20240722::operator-(&local_1c,&local_38);
    }
    else {
      pDVar2 = &local_38;
    }
    local_28.rep_lo_ = pDVar2->rep_lo_;
    pDVar3 = &local_28;
    local_28.rep_hi_ = pDVar2->rep_hi_;
  }
  uVar1 = pDVar3->rep_lo_;
  __return_storage_ptr__->rep_hi_ = pDVar3->rep_hi_;
  __return_storage_ptr__->rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// IDivDuration @ 14f9074a0

/* __int64 __cdecl absl::lts_20240722::IDivDuration(class absl::lts_20240722::Duration,class
   absl::lts_20240722::Duration,class absl::lts_20240722::Duration * __ptr64) */

__int64 __cdecl
absl::lts_20240722::IDivDuration(Duration *param_1,Duration *param_2,Duration *param_3)

{
  char cVar1;
  __int64 _Var2;
  __int64 local_res8;
  HiRep local_28;
  uint local_20;
  HiRep local_18;
  uint local_10;
  
  local_28 = param_2->rep_hi_;
  local_20 = param_2->rep_lo_;
  local_18 = param_1->rep_hi_;
  local_10 = param_1->rep_lo_;
  local_res8 = 0;
  cVar1 = FUN_14f907620(&local_18,&local_28,&local_res8,param_3);
  if (cVar1 != '\0') {
    return local_res8;
  }
  local_18 = param_2->rep_hi_;
  local_10 = param_2->rep_lo_;
  local_28 = param_1->rep_hi_;
  local_20 = param_1->rep_lo_;
  _Var2 = FUN_14f9078d0(1,&local_28,&local_18,param_3);
  return _Var2;
}

// FUN_14f907560 @ 14f907560

undefined8
FUN_14f907560(undefined1 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  local_res10 = 0;
  cVar1 = FUN_14f907620(&local_18,&local_28,&local_res10);
  if (cVar1 == '\0') {
    local_18 = *param_3;
    local_10 = *(undefined4 *)(param_3 + 1);
    local_28 = *param_2;
    local_20 = *(undefined4 *)(param_2 + 1);
    local_res10 = FUN_14f9078d0(param_1,&local_28,&local_18,param_4);
  }
  return local_res10;
}

// FUN_14f907620 @ 14f907620

ulonglong FUN_14f907620(ulonglong *param_1,longlong *param_2,ulonglong *param_3,longlong *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (((int)param_1[1] != -1) && ((int)param_2[1] != -1)) {
    uVar9 = *param_1;
    uVar1 = (uint)param_1[1];
    uVar6 = CONCAT44(0,uVar1);
    lVar7 = *param_2;
    uVar2 = *(uint *)(param_2 + 1);
    in_RAX = (ulonglong)uVar2;
    if (lVar7 == 0) {
      if (uVar2 == 4) {
        in_RAX = 0x225c17cff;
        if (uVar9 < 0x225c17d00) {
          *param_3 = (ulonglong)(uVar1 >> 2) + uVar9 * 1000000000;
          *param_4 = 0;
          *(uint *)(param_4 + 1) = uVar1 & 3;
          return 1;
        }
      }
      else if (uVar2 == 400) {
        in_RAX = 0xd6bf94d454;
        if (uVar9 < 0xd6bf94d455) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar6;
          lVar7 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar3,8);
          *param_3 = ((uVar6 - lVar7 >> 1) + lVar7 >> 8) + uVar9 * 10000000;
          *param_4 = 0;
          *(uint *)(param_4 + 1) = uVar1 % 400;
          return CONCAT71((uint7)(uint3)((uVar1 / 400) * 400 >> 8),1);
        }
      }
      else if (uVar2 == 4000) {
        in_RAX = 0x8637bd04b55;
        if (uVar9 < 0x8637bd04b56) {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar6;
          lVar7 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar4,8);
          *param_3 = ((uVar6 - lVar7 >> 1) + lVar7 >> 0xb) + uVar9 * 1000000;
          *param_4 = 0;
          *(uint *)(param_4 + 1) = uVar1 % 4000;
          return CONCAT71((uint7)(uint3)((uVar1 / 4000) * 4000 >> 8),1);
        }
      }
      else if ((uVar2 == 4000000) && (in_RAX = 0x20c49ba5a64af6, uVar9 < 0x20c49ba5a64af7)) {
        *param_3 = uVar6 / 4000000 + uVar9 * 1000;
        *param_4 = 0;
        *(uint *)(param_4 + 1) = uVar1 % 4000000;
        return CONCAT71((uint7)(uint3)((uVar1 / 4000000) * 4000000 >> 8),1);
      }
    }
    else if ((0 < lVar7) && (uVar2 == 0)) {
      if ((longlong)uVar9 < 0) {
        if (uVar1 != 0) {
          uVar9 = uVar9 + 1;
        }
        lVar8 = (longlong)uVar9 % lVar7;
        uVar6 = (longlong)uVar9 / lVar7 + 1;
        lVar5 = lVar8 - lVar7;
        if (lVar8 < 1) {
          uVar6 = (longlong)uVar9 / lVar7;
          lVar5 = lVar8;
        }
        *param_3 = uVar6;
        lVar7 = lVar5 + -1;
        if (uVar1 == 0) {
          lVar7 = lVar5;
        }
        *(int *)param_4 = (int)lVar7;
        *(int *)((longlong)param_4 + 4) = (int)((ulonglong)lVar7 >> 0x20);
        *(uint *)(param_4 + 1) = uVar1;
        return CONCAT71((uint7)((ulonglong)lVar7 >> 0x28),1);
      }
      if (lVar7 != 1) {
        *param_3 = (longlong)uVar9 / lVar7;
        *param_4 = (longlong)uVar9 % lVar7;
        *(uint *)(param_4 + 1) = uVar1;
        return CONCAT71((int7)((ulonglong)((longlong)uVar9 / lVar7) >> 8),1);
      }
      *param_3 = uVar9;
      *param_4 = 0;
      *(uint *)(param_4 + 1) = uVar1;
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

// FUN_14f9078d0 @ 14f9078d0

/* WARNING: Removing unreachable block (ram,0x00014f907947) */
/* WARNING: Removing unreachable block (ram,0x00014f9079b2) */

ulonglong FUN_14f9078d0(char param_1,HiRep *param_2,ulong64 *param_3,HiRep *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  HiRep HVar5;
  HiRep *pHVar6;
  uint128 *puVar7;
  uint uVar8;
  longlong lVar9;
  byte bVar10;
  ulonglong uVar11;
  byte bVar12;
  HiRep HVar13;
  uint128 local_78;
  undefined1 local_68 [16];
  uint128 local_58;
  uint128 local_48 [2];
  
  if (*param_2 == (HiRep)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (ulonglong)*param_2 >> 0x3f;
  }
  if (*param_3 == 0) {
    bVar12 = 0;
  }
  else {
    bVar12 = (byte)(*param_3 >> 0x3f);
  }
  bVar10 = (byte)uVar11;
  uVar4 = (undefined4)(local_78.hi_ >> 0x20);
  if ((param_2[1].lo_ == 0xffffffff) || ((*param_3 == 0 && ((int)param_3[1] == 0)))) {
    local_78.lo_ = 0x7fffffffffffffff;
    local_78.hi_ = CONCAT44(uVar4,0xffffffff);
    if (bVar10 == 0) {
      puVar7 = &local_78;
    }
    else {
      puVar7 = (uint128 *)absl::lts_20240722::operator-((Duration *)local_68,(Duration *)&local_78);
    }
    *param_4 = *(HiRep *)&puVar7->lo_;
    param_4[1].lo_ = (uint)puVar7->hi_;
    uVar11 = (ulonglong)(bVar10 != bVar12) + 0x7fffffffffffffff;
  }
  else {
    uVar8 = param_2[1].lo_;
    HVar5 = *param_2;
    if ((int)param_3[1] == -1) {
      *param_4 = HVar5;
      param_4[1].lo_ = uVar8;
      uVar11 = 0;
    }
    else {
      HVar13 = HVar5;
      if ((longlong)HVar5 < 0) {
        HVar13 = (HiRep)~(ulonglong)HVar5;
      }
      auVar2._8_8_ = 0;
      auVar2._0_4_ = HVar13.lo_;
      auVar2._4_4_ = HVar13.hi_;
      local_68._8_8_ = SUB168(ZEXT816(4000000000) * auVar2,8);
      HVar13 = SUB168(ZEXT816(4000000000) * auVar2,0);
      uVar8 = 4000000000 - param_2[1].lo_;
      if (-1 < (longlong)HVar5) {
        uVar8 = param_2[1].lo_;
      }
      local_68._0_8_ = (ulonglong)uVar8 + (longlong)HVar13;
      if ((ulonglong)local_68._0_8_ < (ulonglong)HVar13) {
        local_68._8_8_ = local_68._8_8_ + 1;
      }
      local_78.lo_ = *param_3;
      local_78.hi_ = CONCAT44(uVar4,(int)param_3[1]);
      FUN_14f907f00(local_48,&local_78);
      local_78.lo_ = local_68._0_8_;
      local_78.hi_ = local_68._8_8_;
      absl::lts_20240722::operator/(&local_58,&local_78,local_48);
      if ((param_1 != '\0') && (local_58.hi_ != 0 || 0x7fffffffffffffff < local_58.lo_)) {
        puVar7 = &local_78;
        if (bVar10 == bVar12) {
          local_58.lo_ = 0x7fffffffffffffff;
          local_58.hi_ = 0;
          puVar7 = &local_58;
        }
        else {
          local_78.lo_._0_4_ = 0;
          local_78.lo_._4_4_ = 0x80000000;
          local_78.hi_ = 0;
        }
        local_58.lo_ = puVar7->lo_;
        local_58.hi_ = puVar7->hi_;
      }
      lVar9 = local_48[0].lo_ * local_58.hi_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_48[0].lo_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_58.lo_;
      HVar5 = SUB168(auVar1 * auVar3,0);
      local_48[0].lo_ = local_68._0_8_ - (longlong)HVar5;
      local_68._8_8_ =
           ((local_68._8_8_ - lVar9) - local_48[0].hi_ * local_58.lo_) - SUB168(auVar1 * auVar3,8);
      if ((ulonglong)local_68._0_8_ < (ulonglong)HVar5) {
        local_68._8_8_ = local_68._8_8_ - 1;
      }
      local_48[0].hi_ = local_68._8_8_;
      local_68._0_8_ = local_48[0].lo_;
      pHVar6 = (HiRep *)FUN_14f907d00(&local_78,local_48,uVar11);
      *param_4 = *pHVar6;
      param_4[1].lo_ = pHVar6[1].lo_;
      if ((bVar10 == bVar12) || ((local_58.lo_ == 0 && (local_58.hi_ == 0)))) {
        uVar11 = local_58.lo_ & 0x7fffffffffffffff;
      }
      else if (local_58.lo_ == 0) {
        uVar11 = 0x8000000000000000;
      }
      else {
        uVar11 = ~(local_58.lo_ - 1 & 0x7fffffffffffffff);
      }
    }
  }
  return uVar11;
}

// FUN_14f907d00 @ 14f907d00

HiRep * FUN_14f907d00(HiRep *param_1,ulonglong *param_2,char param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  Duration *pDVar4;
  uint uVar5;
  longlong lVar6;
  uint128 local_38;
  uint128 local_28;
  uint128 local_18;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  if (uVar1 == 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar2;
    lVar6 = SUB168(ZEXT816(0x12e0be826d694b2f) * auVar3,8);
    local_18.lo_ = (uVar2 - lVar6 >> 1) + lVar6 >> 0x1f;
    uVar5 = (int)local_18.lo_ * 0x1194d800 + (int)uVar2;
  }
  else {
    if (1999999999 < uVar1) {
      if (param_3 == '\0') {
        param_1->lo_ = 0xffffffff;
        param_1->hi_ = 0x7fffffff;
        param_1[1].lo_ = 0xffffffff;
        return param_1;
      }
      if ((uVar1 == 2000000000) && (uVar2 == 0)) {
        param_1->hi_ = 0x80000000;
        param_1->lo_ = 0;
        param_1[1].lo_ = 0;
        return param_1;
      }
      local_38.lo_ = 0x7fffffffffffffff;
      local_38.hi_ = CONCAT44(local_38.hi_._4_4_,0xffffffff);
      pDVar4 = absl::lts_20240722::operator-((Duration *)&local_28,(Duration *)&local_38);
      *param_1 = pDVar4->rep_hi_;
      param_1[1].lo_ = pDVar4->rep_lo_;
      return param_1;
    }
    local_38.lo_ = *param_2;
    local_38.hi_ = param_2[1];
    local_28.lo_ = 4000000000;
    local_28.hi_ = 0;
    absl::lts_20240722::operator/(&local_18,&local_38,&local_28);
    uVar5 = (int)*param_2 + (int)local_18.lo_ * 0x1194d800;
  }
  if ((param_3 != '\0') && (local_18.lo_ = -local_18.lo_, uVar5 != 0)) {
    local_18.lo_ = local_18.lo_ - 1;
    uVar5 = 4000000000 - uVar5;
  }
  param_1->lo_ = (uint)local_18.lo_;
  param_1->hi_ = (uint)(local_18.lo_ >> 0x20);
  param_1[1].lo_ = uVar5;
  return param_1;
}

// FUN_14f907e70 @ 14f907e70

ulonglong * FUN_14f907e70(ulonglong *param_1,ulonglong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  if ((longlong)param_2 < 0) {
    param_2 = ~param_2;
    *param_1 = 1;
    param_1[1] = 0;
  }
  param_2 = *param_1 + param_2;
  if (param_2 < *param_1) {
    *param_1 = param_2;
    param_1[1] = param_1[1] + 1;
    return param_1;
  }
  *param_1 = param_2;
  param_1[1] = param_1[1];
  return param_1;
}

// FUN_14f907f00 @ 14f907f00

ulonglong * FUN_14f907f00(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uStack_10;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar5 = uVar1;
  if ((longlong)uVar1 < 0) {
    uVar5 = ~uVar1;
  }
  *param_1 = uVar5;
  param_1[1] = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar5;
  uVar5 = SUB168(ZEXT816(4000000000) * auVar2,0);
  *param_1 = uVar5;
  param_1[1] = param_1[1] * 4000000000 + SUB168(ZEXT816(4000000000) * auVar2,8);
  uStack_10 = param_1[1];
  uVar3 = 4000000000 - (uint)uVar4;
  if (-1 < (longlong)uVar1) {
    uVar3 = (uint)uVar4;
  }
  if (uVar3 + uVar5 < uVar5) {
    uStack_10 = uStack_10 + 1;
  }
  *param_1 = uVar3 + uVar5;
  param_1[1] = uStack_10;
  return param_1;
}

// ParseDuration @ 14f907ff0

/* bool __cdecl absl::lts_20240722::ParseDuration(class std::basic_string_view<char,struct
   std::char_traits<char> >,class absl::lts_20240722::Duration * __ptr64) */

bool __cdecl
absl::lts_20240722::ParseDuration
          (basic_string_view<char,std::char_traits<char>_> *param_1,Duration *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  Duration *pDVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  longlong lVar11;
  ulong64 uVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined8 uVar16;
  int local_res8;
  Duration local_178;
  undefined8 local_168;
  Duration local_158;
  Duration local_148;
  Duration local_138;
  Duration local_128;
  Duration local_118;
  undefined8 local_108;
  undefined8 local_fc;
  undefined8 local_f0;
  undefined8 local_e4;
  undefined8 local_d8;
  undefined8 local_cc;
  undefined8 local_b8;
  uint local_b0;
  Duration local_a8;
  undefined8 local_98;
  uint local_90;
  Duration local_88;
  Duration local_78;
  undefined1 local_6c [12];
  Duration local_60;
  undefined1 local_54 [20];
  
  iVar10 = 1;
  local_res8 = 1;
  if ((param_1->_Mysize == 0) || (*param_1->_Mydata != '-')) {
    uVar12 = param_1->_Mysize;
    if ((uVar12 == 0) || (*param_1->_Mydata != '+')) goto LAB_14f90805d;
    param_1->_Mydata = param_1->_Mydata + 1;
    iVar10 = 1;
  }
  else {
    param_1->_Mydata = param_1->_Mydata + 1;
    uVar12 = param_1->_Mysize;
    local_res8 = -1;
    iVar10 = -1;
  }
  uVar12 = uVar12 - 1;
  param_1->_Mysize = uVar12;
LAB_14f90805d:
  if (uVar12 == 0) {
LAB_14f90844e:
    bVar15 = false;
  }
  else if ((param_1->_Mysize == 1) && (iVar3 = memcmp(param_1->_Mydata,&s_0,1), iVar3 == 0)) {
    bVar15 = true;
    (param_2->rep_hi_).lo_ = 0;
    (param_2->rep_hi_).hi_ = 0;
    param_2->rep_lo_ = 0;
  }
  else if ((param_1->_Mysize == 3) && (iVar3 = memcmp(param_1->_Mydata,&s_inf,3), iVar3 == 0)) {
    local_178.rep_hi_.lo_ = 0xffffffff;
    local_178.rep_hi_.hi_ = 0x7fffffff;
    local_178.rep_lo_ = 0xffffffff;
    if (iVar10 < 0) {
      pDVar5 = operator-(&local_118,&local_178);
    }
    else {
      pDVar5 = &local_178;
    }
    uVar4 = pDVar5->rep_lo_;
    param_2->rep_hi_ = pDVar5->rep_hi_;
    param_2->rep_lo_ = uVar4;
    bVar15 = true;
  }
  else {
    pcVar9 = param_1->_Mydata;
    lVar11 = 0;
    local_178.rep_hi_.lo_ = 0;
    local_178.rep_hi_.hi_ = 0;
    local_178.rep_lo_ = 0;
    pcVar1 = pcVar9 + uVar12;
    local_178.rep_lo_ = 0;
    while (pcVar9 != pcVar1) {
      lVar13 = 1;
      lVar6 = lVar11;
      pcVar7 = pcVar9;
      do {
        uVar4 = (int)*pcVar7 - 0x30;
        if (9 < uVar4) break;
        if (0xccccccccccccccc < lVar6) goto LAB_14f90844e;
        if (0x7fffffffffffffff - (longlong)(int)uVar4 < lVar6 * 10) goto LAB_14f90844e;
        lVar6 = lVar6 * 10 + (longlong)(int)uVar4;
        pcVar7 = pcVar7 + 1;
      } while (pcVar7 != pcVar1);
      pcVar8 = pcVar7;
      lVar14 = lVar11;
      if ((pcVar7 == pcVar1) || (*pcVar7 != '.')) {
        bVar15 = pcVar7 == pcVar9;
LAB_14f9081eb:
        if (bVar15) goto LAB_14f90844e;
      }
      else {
        while ((pcVar8 = pcVar8 + 1, pcVar8 != pcVar1 && ((int)*pcVar8 - 0x30U < 10))) {
          if (lVar13 < 0xccccccccccccccd) {
            lVar13 = lVar13 * 10;
            lVar14 = (longlong)(int)((int)*pcVar8 - 0x30U) + lVar14 * 10;
          }
        }
        if (pcVar7 == pcVar9) {
          bVar15 = lVar13 == 1;
          goto LAB_14f9081eb;
        }
      }
      if (pcVar1 == pcVar8) goto LAB_14f90844e;
      if ((longlong)pcVar1 - (longlong)pcVar8 == 1) {
LAB_14f908266:
        cVar2 = *pcVar8;
        if (cVar2 == 'h') {
          local_cc = 0xe10;
          uVar16 = 0xe10;
        }
        else if (cVar2 == 'm') {
          local_d8 = 0x3c;
          uVar16 = 0x3c;
        }
        else {
          if (cVar2 != 's') goto LAB_14f90844e;
          local_e4 = 1;
          uVar16 = 1;
        }
        pcVar9 = pcVar8 + 1;
        uVar4 = 0;
      }
      else {
        cVar2 = *pcVar8;
        if (cVar2 == 'm') {
          if (pcVar8[1] == 's') {
            local_f0 = 0;
            pcVar9 = pcVar8 + 2;
            uVar16 = 0;
            uVar4 = 4000000;
            goto LAB_14f9082aa;
          }
          goto LAB_14f908266;
        }
        if (cVar2 == 'n') {
          if (pcVar8[1] != 's') goto LAB_14f908266;
          local_fc = 0;
          pcVar9 = pcVar8 + 2;
          uVar16 = 0;
          uVar4 = 4;
        }
        else {
          if ((cVar2 != 'u') || (pcVar8[1] != 's')) goto LAB_14f908266;
          local_108 = 0;
          pcVar9 = pcVar8 + 2;
          uVar16 = 0;
          uVar4 = 4000;
        }
      }
LAB_14f9082aa:
      local_168 = uVar16;
      if (lVar6 != 0) {
        if (uVar4 == 0xffffffff) {
          if (local_res8 * lVar6 < 0) {
            local_158.rep_hi_.hi_ = 0x7fffffff;
            local_158.rep_hi_.lo_ = uVar4;
            local_158.rep_lo_ = uVar4;
            pDVar5 = operator-(&local_78,&local_158);
          }
          else {
            local_148.rep_hi_.hi_ = 0x7fffffff;
            pDVar5 = &local_148;
            local_148.rep_hi_.lo_ = 0xffffffff;
            local_148.rep_lo_ = 0xffffffff;
          }
        }
        else {
          local_b8 = uVar16;
          local_b0 = uVar4;
          pDVar5 = (Duration *)FUN_14f904570(local_6c,&local_b8);
        }
        local_a8.rep_lo_ = pDVar5->rep_lo_;
        local_a8.rep_hi_ = pDVar5->rep_hi_;
        Duration::operator+=(&local_178,&local_a8);
      }
      if (lVar14 != 0) {
        if (uVar4 == 0xffffffff) {
          if (local_res8 * lVar14 < 0) {
            local_138.rep_hi_.hi_ = 0x7fffffff;
            local_138.rep_hi_.lo_ = uVar4;
            local_138.rep_lo_ = uVar4;
            pDVar5 = operator-(&local_60,&local_138);
          }
          else {
            local_128.rep_hi_.hi_ = 0x7fffffff;
            pDVar5 = &local_128;
            local_128.rep_hi_.lo_ = 0xffffffff;
            local_128.rep_lo_ = 0xffffffff;
          }
        }
        else {
          local_98 = uVar16;
          local_90 = uVar4;
          pDVar5 = (Duration *)FUN_14f904570(local_54,&local_98);
        }
        local_88.rep_lo_ = pDVar5->rep_lo_;
        local_88.rep_hi_ = pDVar5->rep_hi_;
        pDVar5 = Duration::operator/=(&local_88,lVar13);
        local_118.rep_hi_ = pDVar5->rep_hi_;
        local_118.rep_lo_ = pDVar5->rep_lo_;
        Duration::operator+=(&local_178,&local_118);
      }
    }
    bVar15 = true;
    param_2->rep_hi_ = local_178.rep_hi_;
    param_2->rep_lo_ = local_178.rep_lo_;
  }
  return bVar15;
}

// ParseFlag @ 14f908480

/* bool __cdecl absl::lts_20240722::ParseFlag(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64,class
   absl::lts_20240722::Duration * __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > * __ptr64) */

bool __cdecl
absl::lts_20240722::ParseFlag
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          Duration *param_2,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  bool bVar1;
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mydata = (char *)param_1;
  if (0xf < (param_1->_Mypair)._Myval2._Myres) {
    local_18._Mydata = (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  local_18._Mysize = (param_1->_Mypair)._Myval2._Mysize;
  bVar1 = ParseDuration(&local_18,param_2);
  return bVar1;
}

// FUN_14f9084c0 @ 14f9084c0

ulonglong FUN_14f9084c0(double param_1,double param_2,HiRep *param_3)

{
  uint uVar1;
  ulonglong in_RAX;
  Duration *pDVar2;
  Duration local_28;
  Duration local_18;
  
  param_1 = param_1 + param_2;
  if (__real_43e0000000000000 <= param_1) {
    param_3->lo_ = 0xffffffff;
    param_3->hi_ = 0x7fffffff;
    param_3[1].lo_ = 0xffffffff;
    return in_RAX & 0xffffffffffffff00;
  }
  if (param_1 <= __real_c3e0000000000000) {
    local_28.rep_hi_.lo_ = 0xffffffff;
    local_28.rep_hi_.hi_ = 0x7fffffff;
    local_28.rep_lo_ = 0xffffffff;
    pDVar2 = absl::lts_20240722::operator-(&local_18,&local_28);
    *param_3 = pDVar2->rep_hi_;
    uVar1 = pDVar2->rep_lo_;
    param_3[1].lo_ = uVar1;
    return (ulonglong)(uint3)(uVar1 >> 8) << 8;
  }
  uVar1 = param_3[1].lo_;
  *param_3 = (HiRep)(longlong)param_1;
  param_3[1].lo_ = uVar1;
  return CONCAT71(SUB87((longlong)param_1,1) >> 0x20,1);
}

// StartsWith @ 14f908570

/* bool __cdecl absl::lts_20240722::StartsWith(class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::basic_string_view<char,struct std::char_traits<char> >) */

bool __cdecl
absl::lts_20240722::StartsWith
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  ulonglong _Size;
  int iVar1;
  
  _Size = param_2->_Mysize;
  if (_Size == 0) {
    return true;
  }
  if ((_Size <= param_1->_Mysize) &&
     (iVar1 = memcmp(param_1->_Mydata,param_2->_Mydata,_Size), iVar1 == 0)) {
    return true;
  }
  return false;
}

// ToChronoHours @ 14f9085b0

/* WARNING: Removing unreachable block (ram,0x00014f908622) */
/* class std::chrono::duration<int,struct std::ratio<3600,1> > __cdecl
   absl::lts_20240722::ToChronoHours(class absl::lts_20240722::Duration) */

duration<int,std::ratio<3600,1>_> __cdecl absl::lts_20240722::ToChronoHours(Duration *param_1)

{
  duration<int,std::ratio<3600,1>_> dVar1;
  uint uVar2;
  longlong lVar3;
  longlong *in_RDX;
  
  lVar3 = *in_RDX;
  dVar1._MyRep = (int)param_1;
  if ((int)in_RDX[1] == -1) {
    if (lVar3 == 0) {
      (param_1->rep_hi_).lo_ = 0x7fffffff;
      return (duration<int,std::ratio<3600,1>_>)dVar1._MyRep;
    }
    (param_1->rep_hi_).lo_ = (byte)((ulonglong)lVar3 >> 0x3f) + 0x7fffffff;
    return (duration<int,std::ratio<3600,1>_>)dVar1._MyRep;
  }
  if ((int)in_RDX[1] != -1) {
    if ((lVar3 < 0) && ((int)in_RDX[1] != 0)) {
      lVar3 = lVar3 + 1;
    }
    lVar3 = lVar3 / 0xe10;
  }
  if (lVar3 < 0x80000000) {
    uVar2 = (uint)lVar3;
    if (lVar3 < -0x80000000) {
      uVar2 = 0x80000000;
    }
    (param_1->rep_hi_).lo_ = uVar2;
    return (duration<int,std::ratio<3600,1>_>)dVar1._MyRep;
  }
  (param_1->rep_hi_).lo_ = 0x7fffffff;
  return (duration<int,std::ratio<3600,1>_>)dVar1._MyRep;
}

// ToChronoMicroseconds @ 14f9086c0

/* WARNING: Removing unreachable block (ram,0x00014f90872d) */
/* class std::chrono::duration<__int64,struct std::ratio<1,1000000> > __cdecl
   absl::lts_20240722::ToChronoMicroseconds(class absl::lts_20240722::Duration) */

duration<__int64,std::ratio<1,1000000>_> __cdecl
absl::lts_20240722::ToChronoMicroseconds(Duration *param_1)

{
  undefined1 auVar1 [16];
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong *in_RDX;
  longlong lVar5;
  ulonglong uVar6;
  HiRep local_res8;
  ulonglong local_38;
  undefined4 local_30;
  ulonglong local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  uVar6 = *in_RDX;
  if ((int)in_RDX[1] == -1) {
    if (uVar6 == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)(uVar6 >> 0x3f);
    }
    param_1->rep_hi_ = (HiRep)((ulonglong)bVar2 + 0x7fffffffffffffff);
    return (duration<__int64,std::ratio<1,1000000>_>)(long64)param_1;
  }
  if (((longlong)uVar6 < 0) || ((uVar6 & 0xfffff80000000000) != 0)) {
    local_28 = *in_RDX;
    local_30 = 4000;
    uVar6 = 0;
    local_res8.lo_ = 0;
    local_res8.hi_ = 0;
    local_20 = (undefined4)in_RDX[1];
    local_38 = 0;
    cVar3 = FUN_14f907620(&local_28,&local_38,&local_res8,local_18);
    if (cVar3 == '\0') {
      local_38 = *in_RDX;
      local_30 = (undefined4)in_RDX[1];
      local_20 = 4000;
      local_28 = uVar6;
      local_res8 = (HiRep)FUN_14f9078d0(1,&local_38,&local_28,local_18);
    }
  }
  else {
    uVar4 = CONCAT44(0,(uint)in_RDX[1]);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar4;
    lVar5 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar1,8);
    local_res8 = (HiRep)(uVar6 * 1000000 + ((uVar4 - lVar5 >> 1) + lVar5 >> 0xb));
  }
  param_1->rep_hi_ = local_res8;
  return (duration<__int64,std::ratio<1,1000000>_>)(long64)param_1;
}

// ToChronoMilliseconds @ 14f908880

/* WARNING: Removing unreachable block (ram,0x00014f9088ed) */
/* class std::chrono::duration<__int64,struct std::ratio<1,1000> > __cdecl
   absl::lts_20240722::ToChronoMilliseconds(class absl::lts_20240722::Duration) */

duration<__int64,std::ratio<1,1000>_> __cdecl
absl::lts_20240722::ToChronoMilliseconds(Duration *param_1)

{
  byte bVar1;
  char cVar2;
  ulonglong *in_RDX;
  ulonglong uVar3;
  HiRep local_res8;
  ulonglong local_38;
  undefined4 local_30;
  ulonglong local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  uVar3 = *in_RDX;
  if ((int)in_RDX[1] == -1) {
    if (uVar3 == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)(uVar3 >> 0x3f);
    }
    param_1->rep_hi_ = (HiRep)((ulonglong)bVar1 + 0x7fffffffffffffff);
    return (duration<__int64,std::ratio<1,1000>_>)(long64)param_1;
  }
  if (((longlong)uVar3 < 0) || ((uVar3 & 0xffe0000000000000) != 0)) {
    local_28 = *in_RDX;
    local_30 = 4000000;
    uVar3 = 0;
    local_res8.lo_ = 0;
    local_res8.hi_ = 0;
    local_20 = (undefined4)in_RDX[1];
    local_38 = 0;
    cVar2 = FUN_14f907620(&local_28,&local_38,&local_res8,local_18);
    if (cVar2 == '\0') {
      local_38 = *in_RDX;
      local_30 = (undefined4)in_RDX[1];
      local_20 = 4000000;
      local_28 = uVar3;
      local_res8 = (HiRep)FUN_14f9078d0(1,&local_38,&local_28,local_18);
    }
  }
  else {
    local_res8 = (HiRep)(uVar3 * 1000 + (ulonglong)(uint)in_RDX[1] / 4000000);
  }
  param_1->rep_hi_ = local_res8;
  return (duration<__int64,std::ratio<1,1000>_>)(long64)param_1;
}

// ToChronoMinutes @ 14f908a30

/* WARNING: Removing unreachable block (ram,0x00014f908aa5) */
/* class std::chrono::duration<int,struct std::ratio<60,1> > __cdecl
   absl::lts_20240722::ToChronoMinutes(class absl::lts_20240722::Duration) */

duration<int,std::ratio<60,1>_> __cdecl absl::lts_20240722::ToChronoMinutes(Duration *param_1)

{
  duration<int,std::ratio<60,1>_> dVar1;
  uint uVar2;
  longlong *in_RDX;
  longlong lVar3;
  
  lVar3 = *in_RDX;
  dVar1._MyRep = (int)param_1;
  if ((int)in_RDX[1] == -1) {
    if (lVar3 == 0) {
      (param_1->rep_hi_).lo_ = 0x7fffffff;
      return (duration<int,std::ratio<60,1>_>)dVar1._MyRep;
    }
    (param_1->rep_hi_).lo_ = (byte)((ulonglong)lVar3 >> 0x3f) + 0x7fffffff;
    return (duration<int,std::ratio<60,1>_>)dVar1._MyRep;
  }
  if ((int)in_RDX[1] != -1) {
    if ((lVar3 < 0) && ((int)in_RDX[1] != 0)) {
      lVar3 = lVar3 + 1;
    }
    lVar3 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar3),8) + lVar3;
    lVar3 = (lVar3 >> 5) - (lVar3 >> 0x3f);
  }
  if (lVar3 < 0x80000000) {
    uVar2 = (uint)lVar3;
    if (lVar3 < -0x80000000) {
      uVar2 = 0x80000000;
    }
    (param_1->rep_hi_).lo_ = uVar2;
    return (duration<int,std::ratio<60,1>_>)dVar1._MyRep;
  }
  (param_1->rep_hi_).lo_ = 0x7fffffff;
  return (duration<int,std::ratio<60,1>_>)dVar1._MyRep;
}

// ToChronoNanoseconds @ 14f908b50

/* WARNING: Removing unreachable block (ram,0x00014f908bbd) */
/* class std::chrono::duration<__int64,struct std::ratio<1,1000000000> > __cdecl
   absl::lts_20240722::ToChronoNanoseconds(class absl::lts_20240722::Duration) */

duration<__int64,std::ratio<1,1000000000>_> __cdecl
absl::lts_20240722::ToChronoNanoseconds(Duration *param_1)

{
  byte bVar1;
  char cVar2;
  ulonglong *in_RDX;
  ulonglong uVar3;
  HiRep local_res8;
  ulonglong local_38;
  undefined4 local_30;
  ulonglong local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  uVar3 = *in_RDX;
  if ((int)in_RDX[1] == -1) {
    if (uVar3 == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)(uVar3 >> 0x3f);
    }
    param_1->rep_hi_ = (HiRep)((ulonglong)bVar1 + 0x7fffffffffffffff);
    return (duration<__int64,std::ratio<1,1000000000>_>)(long64)param_1;
  }
  if (((longlong)uVar3 < 0) || ((uVar3 & 0xfffffffe00000000) != 0)) {
    local_28 = *in_RDX;
    local_30 = 4;
    uVar3 = 0;
    local_res8.lo_ = 0;
    local_res8.hi_ = 0;
    local_20 = (undefined4)in_RDX[1];
    local_38 = 0;
    cVar2 = FUN_14f907620(&local_28,&local_38,&local_res8,local_18);
    if (cVar2 == '\0') {
      local_38 = *in_RDX;
      local_30 = (undefined4)in_RDX[1];
      local_20 = 4;
      local_28 = uVar3;
      local_res8 = (HiRep)FUN_14f9078d0(1,&local_38,&local_28,local_18);
    }
  }
  else {
    local_res8 = (HiRep)(uVar3 * 1000000000 + (ulonglong)((uint)in_RDX[1] >> 2));
  }
  param_1->rep_hi_ = local_res8;
  return (duration<__int64,std::ratio<1,1000000000>_>)(long64)param_1;
}

// ToChronoSeconds @ 14f908cf0

/* WARNING: Removing unreachable block (ram,0x00014f908d51) */
/* class std::chrono::duration<__int64,struct std::ratio<1,1> > __cdecl
   absl::lts_20240722::ToChronoSeconds(class absl::lts_20240722::Duration) */

duration<__int64,std::ratio<1,1>_> __cdecl absl::lts_20240722::ToChronoSeconds(Duration *param_1)

{
  byte bVar1;
  HiRep HVar2;
  HiRep *in_RDX;
  
  HVar2 = *in_RDX;
  if (in_RDX[1].lo_ != 0xffffffff) {
    if (((in_RDX[1].lo_ != 0xffffffff) && ((longlong)HVar2 < 0)) && (in_RDX[1].lo_ != 0)) {
      HVar2 = (HiRep)((longlong)HVar2 + 1);
    }
    param_1->rep_hi_ = HVar2;
    return (duration<__int64,std::ratio<1,1>_>)(long64)param_1;
  }
  if (HVar2 == (HiRep)0x0) {
    bVar1 = 0;
  }
  else {
    bVar1 = HVar2.hi_._3_1_ >> 7;
  }
  param_1->rep_hi_ = (HiRep)((ulonglong)bVar1 + 0x7fffffffffffffff);
  return (duration<__int64,std::ratio<1,1>_>)(long64)param_1;
}

// ToDoubleHours @ 14f908db0

/* double __cdecl absl::lts_20240722::ToDoubleHours(class absl::lts_20240722::Duration) */

double __cdecl absl::lts_20240722::ToDoubleHours(Duration *param_1)

{
  double dVar1;
  Duration local_28;
  Duration local_18 [2];
  
  local_28.rep_hi_.lo_ = 0xe10;
  local_28.rep_hi_.hi_ = 0;
  local_18[0].rep_hi_ = param_1->rep_hi_;
  local_28.rep_lo_ = 0;
  local_18[0].rep_lo_ = param_1->rep_lo_;
  dVar1 = FDivDuration(local_18,&local_28);
  return dVar1;
}

// ToDoubleMicroseconds @ 14f908e00

/* double __cdecl absl::lts_20240722::ToDoubleMicroseconds(class absl::lts_20240722::Duration) */

double __cdecl absl::lts_20240722::ToDoubleMicroseconds(Duration *param_1)

{
  double dVar1;
  Duration local_28;
  Duration local_18 [2];
  
  local_28.rep_lo_ = 4000;
  local_18[0].rep_lo_ = param_1->rep_lo_;
  local_28.rep_hi_.lo_ = 0;
  local_28.rep_hi_.hi_ = 0;
  local_18[0].rep_hi_ = param_1->rep_hi_;
  dVar1 = FDivDuration(local_18,&local_28);
  return dVar1;
}

// ToDoubleMilliseconds @ 14f908e50

/* double __cdecl absl::lts_20240722::ToDoubleMilliseconds(class absl::lts_20240722::Duration) */

double __cdecl absl::lts_20240722::ToDoubleMilliseconds(Duration *param_1)

{
  double dVar1;
  Duration local_28;
  Duration local_18 [2];
  
  local_28.rep_lo_ = 4000000;
  local_18[0].rep_lo_ = param_1->rep_lo_;
  local_28.rep_hi_.lo_ = 0;
  local_28.rep_hi_.hi_ = 0;
  local_18[0].rep_hi_ = param_1->rep_hi_;
  dVar1 = FDivDuration(local_18,&local_28);
  return dVar1;
}

// ToDoubleMinutes @ 14f908ea0

/* double __cdecl absl::lts_20240722::ToDoubleMinutes(class absl::lts_20240722::Duration) */

double __cdecl absl::lts_20240722::ToDoubleMinutes(Duration *param_1)

{
  double dVar1;
  Duration local_28;
  Duration local_18 [2];
  
  local_28.rep_hi_.lo_ = 0x3c;
  local_28.rep_hi_.hi_ = 0;
  local_18[0].rep_hi_ = param_1->rep_hi_;
  local_28.rep_lo_ = 0;
  local_18[0].rep_lo_ = param_1->rep_lo_;
  dVar1 = FDivDuration(local_18,&local_28);
  return dVar1;
}

// ToDoubleNanoseconds @ 14f908ef0

/* double __cdecl absl::lts_20240722::ToDoubleNanoseconds(class absl::lts_20240722::Duration) */

double __cdecl absl::lts_20240722::ToDoubleNanoseconds(Duration *param_1)

{
  double dVar1;
  Duration local_28;
  Duration local_18 [2];
  
  local_28.rep_lo_ = 4;
  local_18[0].rep_lo_ = param_1->rep_lo_;
  local_28.rep_hi_.lo_ = 0;
  local_28.rep_hi_.hi_ = 0;
  local_18[0].rep_hi_ = param_1->rep_hi_;
  dVar1 = FDivDuration(local_18,&local_28);
  return dVar1;
}

// ToDoubleSeconds @ 14f908f40

/* double __cdecl absl::lts_20240722::ToDoubleSeconds(class absl::lts_20240722::Duration) */

double __cdecl absl::lts_20240722::ToDoubleSeconds(Duration *param_1)

{
  double dVar1;
  Duration local_28;
  Duration local_18 [2];
  
  local_28.rep_hi_.lo_ = 1;
  local_28.rep_hi_.hi_ = 0;
  local_18[0].rep_hi_ = param_1->rep_hi_;
  local_28.rep_lo_ = 0;
  local_18[0].rep_lo_ = param_1->rep_lo_;
  dVar1 = FDivDuration(local_18,&local_28);
  return dVar1;
}

// ToInt64 @ 14f908f90

/* __int64 __cdecl absl::lts_20240722::time_internal::ToInt64(class
   absl::lts_20240722::Duration,struct std::ratio<1,1>) */

__int64 __cdecl absl::lts_20240722::time_internal::ToInt64(Duration *param_1,ratio<1,1> param_2)

{
  HiRep HVar1;
  HiRep HVar2;
  
  HVar1 = param_1->rep_hi_;
  if (((param_1->rep_lo_ == 0xffffffff) || (-1 < (longlong)HVar1)) ||
     (HVar2 = (HiRep)((longlong)HVar1 + 1), param_1->rep_lo_ == 0)) {
    HVar2 = HVar1;
  }
  return (__int64)HVar2;
}

// ToInt64 @ 14f908fe0

/* __int64 __cdecl absl::lts_20240722::time_internal::ToInt64(class
   absl::lts_20240722::Duration,struct std::ratio<1,1000000000>) */

__int64 __cdecl
absl::lts_20240722::time_internal::ToInt64(Duration *param_1,ratio<1,1000000000> param_2)

{
  char cVar1;
  __int64 _Var2;
  HiRep HVar3;
  __int64 local_res8;
  HiRep local_38;
  uint local_30;
  HiRep local_28;
  uint local_20;
  undefined1 local_18 [16];
  
  HVar3 = param_1->rep_hi_;
  if (-1 < (longlong)HVar3) {
    if (((ulonglong)HVar3 & 0xfffffffe00000000) == 0) {
      return (longlong)HVar3 * 1000000000 + (ulonglong)(param_1->rep_lo_ >> 2);
    }
  }
  local_28 = param_1->rep_hi_;
  local_30 = 4;
  HVar3.lo_ = 0;
  HVar3.hi_ = 0;
  local_res8 = 0;
  local_20 = param_1->rep_lo_;
  local_38.lo_ = 0;
  local_38.hi_ = 0;
  cVar1 = FUN_14f907620(&local_28,&local_38,&local_res8,local_18);
  if (cVar1 != '\0') {
    return local_res8;
  }
  local_38 = param_1->rep_hi_;
  local_30 = param_1->rep_lo_;
  local_20 = 4;
  local_28 = HVar3;
  _Var2 = FUN_14f9078d0(1,&local_38,&local_28,local_18);
  return _Var2;
}

// ToInt64 @ 14f909100

/* __int64 __cdecl absl::lts_20240722::time_internal::ToInt64(class
   absl::lts_20240722::Duration,struct std::ratio<1,1000>) */

__int64 __cdecl absl::lts_20240722::time_internal::ToInt64(Duration *param_1,ratio<1,1000> param_2)

{
  char cVar1;
  __int64 _Var2;
  HiRep HVar3;
  __int64 local_res8;
  HiRep local_38;
  uint local_30;
  HiRep local_28;
  uint local_20;
  undefined1 local_18 [16];
  
  HVar3 = param_1->rep_hi_;
  if (-1 < (longlong)HVar3) {
    if (((ulonglong)HVar3 & 0xffe0000000000000) == 0) {
      return (ulonglong)param_1->rep_lo_ / 4000000 + (longlong)HVar3 * 1000;
    }
  }
  local_28 = param_1->rep_hi_;
  local_30 = 4000000;
  HVar3.lo_ = 0;
  HVar3.hi_ = 0;
  local_res8 = 0;
  local_20 = param_1->rep_lo_;
  local_38.lo_ = 0;
  local_38.hi_ = 0;
  cVar1 = FUN_14f907620(&local_28,&local_38,&local_res8,local_18);
  if (cVar1 != '\0') {
    return local_res8;
  }
  local_38 = param_1->rep_hi_;
  local_30 = param_1->rep_lo_;
  local_20 = 4000000;
  local_28 = HVar3;
  _Var2 = FUN_14f9078d0(1,&local_38,&local_28,local_18);
  return _Var2;
}

// ToInt64 @ 14f909230

/* __int64 __cdecl absl::lts_20240722::time_internal::ToInt64(class
   absl::lts_20240722::Duration,struct std::ratio<1,1000000>) */

__int64 __cdecl
absl::lts_20240722::time_internal::ToInt64(Duration *param_1,ratio<1,1000000> param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  __int64 _Var3;
  ulonglong uVar4;
  longlong lVar5;
  HiRep HVar6;
  __int64 local_res8;
  HiRep local_38;
  uint local_30;
  HiRep local_28;
  uint local_20;
  undefined1 local_18 [16];
  
  HVar6 = param_1->rep_hi_;
  if (-1 < (longlong)HVar6) {
    if (((ulonglong)HVar6 & 0xfffff80000000000) == 0) {
      uVar4 = CONCAT44(0,param_1->rep_lo_);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      lVar5 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar1,8);
      return (lVar5 + (uVar4 - lVar5 >> 1) >> 0xb) + (longlong)HVar6 * 1000000;
    }
  }
  local_28 = param_1->rep_hi_;
  local_30 = 4000;
  HVar6.lo_ = 0;
  HVar6.hi_ = 0;
  local_res8 = 0;
  local_20 = param_1->rep_lo_;
  local_38.lo_ = 0;
  local_38.hi_ = 0;
  cVar2 = FUN_14f907620(&local_28,&local_38,&local_res8,local_18);
  if (cVar2 != '\0') {
    return local_res8;
  }
  local_38 = param_1->rep_hi_;
  local_30 = param_1->rep_lo_;
  local_20 = 4000;
  local_28 = HVar6;
  _Var3 = FUN_14f9078d0(1,&local_38,&local_28,local_18);
  return _Var3;
}

// ToInt64 @ 14f909360

/* __int64 __cdecl absl::lts_20240722::time_internal::ToInt64(class
   absl::lts_20240722::Duration,struct std::ratio<60,1>) */

__int64 __cdecl absl::lts_20240722::time_internal::ToInt64(Duration *param_1,ratio<60,1> param_2)

{
  longlong lVar1;
  HiRep HVar2;
  
  HVar2 = param_1->rep_hi_;
  if (param_1->rep_lo_ == 0xffffffff) {
    return (__int64)HVar2;
  }
  if (((longlong)HVar2 < 0) && (param_1->rep_lo_ != 0)) {
    HVar2 = (HiRep)((longlong)HVar2 + 1);
  }
  lVar1 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)HVar2),8) + (longlong)HVar2;
  return (lVar1 >> 5) - (lVar1 >> 0x3f);
}

// ToInt64 @ 14f9093d0

/* __int64 __cdecl absl::lts_20240722::time_internal::ToInt64(class
   absl::lts_20240722::Duration,struct std::ratio<3600,1>) */

__int64 __cdecl absl::lts_20240722::time_internal::ToInt64(Duration *param_1,ratio<3600,1> param_2)

{
  HiRep HVar1;
  
  HVar1 = param_1->rep_hi_;
  if (param_1->rep_lo_ == 0xffffffff) {
    return (__int64)HVar1;
  }
  if (((longlong)HVar1 < 0) && (param_1->rep_lo_ != 0)) {
    HVar1 = (HiRep)((longlong)HVar1 + 1);
  }
  return (longlong)HVar1 / 0xe10;
}

// ToInt64Hours @ 14f909440

/* __int64 __cdecl absl::lts_20240722::ToInt64Hours(class absl::lts_20240722::Duration) */

__int64 __cdecl absl::lts_20240722::ToInt64Hours(Duration *param_1)

{
  HiRep HVar1;
  
  HVar1 = param_1->rep_hi_;
  if (param_1->rep_lo_ == 0xffffffff) {
    return (__int64)HVar1;
  }
  if (((longlong)HVar1 < 0) && (param_1->rep_lo_ != 0)) {
    HVar1 = (HiRep)((longlong)HVar1 + 1);
  }
  return (longlong)HVar1 / 0xe10;
}

// ToInt64Microseconds @ 14f9094b0

/* __int64 __cdecl absl::lts_20240722::ToInt64Microseconds(class absl::lts_20240722::Duration) */

__int64 __cdecl absl::lts_20240722::ToInt64Microseconds(Duration *param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  __int64 _Var3;
  ulonglong uVar4;
  longlong lVar5;
  HiRep HVar6;
  __int64 local_res8;
  HiRep local_38;
  uint local_30;
  HiRep local_28;
  uint local_20;
  undefined1 local_18 [16];
  
  HVar6 = param_1->rep_hi_;
  if (-1 < (longlong)HVar6) {
    if (((ulonglong)HVar6 & 0xfffff80000000000) == 0) {
      uVar4 = CONCAT44(0,param_1->rep_lo_);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      lVar5 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar1,8);
      return (lVar5 + (uVar4 - lVar5 >> 1) >> 0xb) + (longlong)HVar6 * 1000000;
    }
  }
  local_28 = param_1->rep_hi_;
  local_30 = 4000;
  HVar6.lo_ = 0;
  HVar6.hi_ = 0;
  local_res8 = 0;
  local_20 = param_1->rep_lo_;
  local_38.lo_ = 0;
  local_38.hi_ = 0;
  cVar2 = FUN_14f907620(&local_28,&local_38,&local_res8,local_18);
  if (cVar2 != '\0') {
    return local_res8;
  }
  local_38 = param_1->rep_hi_;
  local_30 = param_1->rep_lo_;
  local_20 = 4000;
  local_28 = HVar6;
  _Var3 = FUN_14f9078d0(1,&local_38,&local_28,local_18);
  return _Var3;
}

// ToInt64Milliseconds @ 14f9095e0

/* __int64 __cdecl absl::lts_20240722::ToInt64Milliseconds(class absl::lts_20240722::Duration) */

__int64 __cdecl absl::lts_20240722::ToInt64Milliseconds(Duration *param_1)

{
  char cVar1;
  __int64 _Var2;
  HiRep HVar3;
  __int64 local_res8;
  HiRep local_38;
  uint local_30;
  HiRep local_28;
  uint local_20;
  undefined1 local_18 [16];
  
  HVar3 = param_1->rep_hi_;
  if (-1 < (longlong)HVar3) {
    if (((ulonglong)HVar3 & 0xffe0000000000000) == 0) {
      return (ulonglong)param_1->rep_lo_ / 4000000 + (longlong)HVar3 * 1000;
    }
  }
  local_28 = param_1->rep_hi_;
  local_30 = 4000000;
  HVar3.lo_ = 0;
  HVar3.hi_ = 0;
  local_res8 = 0;
  local_20 = param_1->rep_lo_;
  local_38.lo_ = 0;
  local_38.hi_ = 0;
  cVar1 = FUN_14f907620(&local_28,&local_38,&local_res8,local_18);
  if (cVar1 != '\0') {
    return local_res8;
  }
  local_38 = param_1->rep_hi_;
  local_30 = param_1->rep_lo_;
  local_20 = 4000000;
  local_28 = HVar3;
  _Var2 = FUN_14f9078d0(1,&local_38,&local_28,local_18);
  return _Var2;
}

// ToInt64Minutes @ 14f909710

/* __int64 __cdecl absl::lts_20240722::ToInt64Minutes(class absl::lts_20240722::Duration) */

__int64 __cdecl absl::lts_20240722::ToInt64Minutes(Duration *param_1)

{
  longlong lVar1;
  HiRep HVar2;
  
  HVar2 = param_1->rep_hi_;
  if (param_1->rep_lo_ == 0xffffffff) {
    return (__int64)HVar2;
  }
  if (((longlong)HVar2 < 0) && (param_1->rep_lo_ != 0)) {
    HVar2 = (HiRep)((longlong)HVar2 + 1);
  }
  lVar1 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)HVar2),8) + (longlong)HVar2;
  return (lVar1 >> 5) - (lVar1 >> 0x3f);
}

// ToInt64Nanoseconds @ 14f909780

/* __int64 __cdecl absl::lts_20240722::ToInt64Nanoseconds(class absl::lts_20240722::Duration) */

__int64 __cdecl absl::lts_20240722::ToInt64Nanoseconds(Duration *param_1)

{
  char cVar1;
  __int64 _Var2;
  HiRep HVar3;
  __int64 local_res8;
  HiRep local_38;
  uint local_30;
  HiRep local_28;
  uint local_20;
  undefined1 local_18 [16];
  
  HVar3 = param_1->rep_hi_;
  if (-1 < (longlong)HVar3) {
    if (((ulonglong)HVar3 & 0xfffffffe00000000) == 0) {
      return (longlong)HVar3 * 1000000000 + (ulonglong)(param_1->rep_lo_ >> 2);
    }
  }
  local_28 = param_1->rep_hi_;
  local_30 = 4;
  HVar3.lo_ = 0;
  HVar3.hi_ = 0;
  local_res8 = 0;
  local_20 = param_1->rep_lo_;
  local_38.lo_ = 0;
  local_38.hi_ = 0;
  cVar1 = FUN_14f907620(&local_28,&local_38,&local_res8,local_18);
  if (cVar1 != '\0') {
    return local_res8;
  }
  local_38 = param_1->rep_hi_;
  local_30 = param_1->rep_lo_;
  local_20 = 4;
  local_28 = HVar3;
  _Var2 = FUN_14f9078d0(1,&local_38,&local_28,local_18);
  return _Var2;
}

// ToInt64Seconds @ 14f9098a0

/* __int64 __cdecl absl::lts_20240722::ToInt64Seconds(class absl::lts_20240722::Duration) */

__int64 __cdecl absl::lts_20240722::ToInt64Seconds(Duration *param_1)

{
  HiRep HVar1;
  
  HVar1 = param_1->rep_hi_;
  if (((param_1->rep_lo_ != 0xffffffff) && ((longlong)HVar1 < 0)) && (param_1->rep_lo_ != 0)) {
    HVar1 = (HiRep)((longlong)HVar1 + 1);
  }
  return (__int64)HVar1;
}

// ToTimespec @ 14f9098f0

/* WARNING: Removing unreachable block (ram,0x00014f90997d) */
/* struct timespec __cdecl absl::lts_20240722::ToTimespec(class absl::lts_20240722::Duration) */

timespec * __cdecl
absl::lts_20240722::ToTimespec(timespec *__return_storage_ptr__,Duration *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  HiRep HVar4;
  
  HVar4 = param_1->rep_hi_;
  if (param_1->rep_lo_ != 0xffffffff) {
    uVar1 = param_1->rep_lo_;
    uVar3 = uVar1;
    if (((longlong)HVar4 < 0) && (uVar3 = uVar1 + 3, 3999999999 < uVar3)) {
      HVar4 = (HiRep)((longlong)HVar4 + 1);
      uVar3 = uVar1 + 0x1194d803;
    }
    __return_storage_ptr__->tv_nsec = uVar3 >> 2;
    __return_storage_ptr__->tv_sec = (long64)HVar4;
    return __return_storage_ptr__;
  }
  if (HVar4 == (HiRep)0x0) {
    bVar2 = 0;
  }
  else {
    bVar2 = HVar4.hi_._3_1_ >> 7;
  }
  if (bVar2 != 0) {
    __return_storage_ptr__->tv_nsec = 0;
    __return_storage_ptr__->tv_sec = -0x8000000000000000;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->tv_nsec = 999999999;
  __return_storage_ptr__->tv_sec = 0x7fffffffffffffff;
  return __return_storage_ptr__;
}

// ToTimeval @ 14f9099d0

/* WARNING: Removing unreachable block (ram,0x00014f909a69) */
/* struct timeval __cdecl absl::lts_20240722::ToTimeval(class absl::lts_20240722::Duration) */

timeval __cdecl absl::lts_20240722::ToTimeval(Duration *param_1)

{
  uint uVar1;
  timeval tVar2;
  byte bVar3;
  HiRep HVar4;
  uint uVar5;
  
  HVar4 = param_1->rep_hi_;
  if (param_1->rep_lo_ == 0xffffffff) {
    if (HVar4 == (HiRep)0x0) {
      bVar3 = 0;
    }
    else {
      bVar3 = HVar4.hi_._3_1_ >> 7;
    }
    uVar1 = 999999999;
    if (bVar3 != 0) {
      uVar1 = 0;
    }
    HVar4 = (HiRep)((ulonglong)bVar3 + 0x7fffffffffffffff);
  }
  else {
    uVar5 = param_1->rep_lo_;
    uVar1 = uVar5;
    if (((longlong)HVar4 < 0) && (uVar1 = uVar5 + 3, 3999999999 < uVar1)) {
      HVar4 = (HiRep)((longlong)HVar4 + 1);
      uVar1 = uVar5 + 0x1194d803;
    }
    uVar1 = uVar1 >> 2;
  }
  uVar5 = uVar1;
  if (((longlong)HVar4 < 0) && (uVar5 = uVar1 + 999, 999999999 < uVar1 + 999)) {
    HVar4 = (HiRep)((longlong)HVar4 + 1);
    uVar5 = uVar1 + 0xc46539e7;
  }
  if ((HiRep)(longlong)(int)HVar4.lo_ == HVar4) {
    return (timeval)((ulonglong)(uint)((int)uVar5 / 1000) << 0x20 | (ulonglong)HVar4 & 0xffffffff);
  }
  tVar2.tv_sec = 0x7fffffff;
  tVar2.tv_usec = 999999;
  if ((longlong)HVar4 < 0) {
    tVar2.tv_sec = -0x80000000;
    tVar2.tv_usec = 0;
  }
  return tVar2;
}

// Trunc @ 14f909b40

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::Trunc(class
   absl::lts_20240722::Duration,class absl::lts_20240722::Duration) */

Duration * __cdecl
absl::lts_20240722::Trunc(Duration *__return_storage_ptr__,Duration *param_1,Duration *param_2)

{
  uint uVar1;
  char cVar2;
  Duration *pDVar3;
  undefined1 local_res8 [8];
  HiRep local_48;
  uint local_40;
  HiRep local_38;
  uint local_30;
  Duration local_28;
  Duration local_18;
  
  local_48 = param_1->rep_hi_;
  local_40 = param_1->rep_lo_;
  local_38 = param_2->rep_hi_;
  local_30 = param_2->rep_lo_;
  local_28.rep_hi_ = param_1->rep_hi_;
  local_28.rep_lo_ = param_1->rep_lo_;
  cVar2 = FUN_14f907620(&local_28,&local_38,local_res8,&local_48);
  if (cVar2 == '\0') {
    local_28.rep_hi_ = param_2->rep_hi_;
    local_28.rep_lo_ = param_2->rep_lo_;
    local_38 = param_1->rep_hi_;
    local_30 = param_1->rep_lo_;
    FUN_14f9078d0(0,&local_38,&local_28,&local_48);
  }
  local_18.rep_hi_ = param_1->rep_hi_;
  local_18.rep_lo_ = param_1->rep_lo_;
  local_28.rep_hi_ = local_48;
  local_28.rep_lo_ = local_40;
  pDVar3 = Duration::operator-=(&local_18,&local_28);
  uVar1 = pDVar3->rep_lo_;
  __return_storage_ptr__->rep_hi_ = pDVar3->rep_hi_;
  __return_storage_ptr__->rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// UnparseFlag @ 14f909c40

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::UnparseFlag(class absl::lts_20240722::Duration) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::UnparseFlag
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          Duration *param_1)

{
  Duration local_18;
  
  local_18.rep_hi_ = param_1->rep_hi_;
  local_18.rep_lo_ = param_1->rep_lo_;
  FormatDuration(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// _Equal @ 14f909c80

/* public: bool __cdecl std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Equal(char const * __ptr64 const)const __ptr64 */

bool __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Equal
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1)

{
  size_t _Size;
  int iVar1;
  size_t sVar2;
  
  sVar2 = 0xffffffffffffffff;
  do {
    sVar2 = sVar2 + 1;
  } while (param_1[sVar2] != '\0');
  _Size = (this->_Mypair)._Myval2._Mysize;
  if (0xf < (this->_Mypair)._Myval2._Myres) {
    this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
           (this->_Mypair)._Myval2._Bx._Ptr;
  }
  if (_Size == sVar2) {
    iVar1 = memcmp(this,param_1,_Size);
    if (iVar1 == 0) {
      return true;
    }
  }
  return false;
}

// lowest @ 14f909cd0

/* public: static int __cdecl std::numeric_limits<int>::lowest(void) */

int __cdecl std::numeric_limits<int>::lowest(void)

{
  return -0x80000000;
}

// max @ 14f909ce0

/* public: static class std::chrono::duration<int,struct std::ratio<60,1> > __cdecl
   std::chrono::duration<int,struct std::ratio<60,1> >::max(void) */

void __cdecl std::chrono::duration<int,std::ratio<60,1>_>::max(void)

{
  undefined4 *in_RCX;
  
  *in_RCX = 0x7fffffff;
  return;
}

// max @ 14f909cf0

/* public: static class std::chrono::duration<int,struct std::ratio<3600,1> > __cdecl
   std::chrono::duration<int,struct std::ratio<3600,1> >::max(void) */

void __cdecl std::chrono::duration<int,std::ratio<3600,1>_>::max(void)

{
  undefined4 *in_RCX;
  
  *in_RCX = 0x7fffffff;
  return;
}

// max @ 14f909d00

/* public: static class std::chrono::duration<__int64,struct std::ratio<1,1000000000> > __cdecl
   std::chrono::duration<__int64,struct std::ratio<1,1000000000> >::max(void) */

void __cdecl std::chrono::duration<__int64,std::ratio<1,1000000000>_>::max(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0x7fffffffffffffff;
  return;
}

// max @ 14f909d20

/* public: static class std::chrono::duration<__int64,struct std::ratio<1,1000> > __cdecl
   std::chrono::duration<__int64,struct std::ratio<1,1000> >::max(void) */

void __cdecl std::chrono::duration<__int64,std::ratio<1,1000>_>::max(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0x7fffffffffffffff;
  return;
}

// max @ 14f909d40

/* public: static class std::chrono::duration<__int64,struct std::ratio<1,1000000> > __cdecl
   std::chrono::duration<__int64,struct std::ratio<1,1000000> >::max(void) */

void __cdecl std::chrono::duration<__int64,std::ratio<1,1000000>_>::max(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0x7fffffffffffffff;
  return;
}

// max @ 14f909d60

/* public: static int __cdecl std::chrono::duration_values<int>::max(void) */

int __cdecl std::chrono::duration_values<int>::max(void)

{
  return 0x7fffffff;
}

// min @ 14f909d70

/* public: static class std::chrono::duration<int,struct std::ratio<60,1> > __cdecl
   std::chrono::duration<int,struct std::ratio<60,1> >::min(void) */

void __cdecl std::chrono::duration<int,std::ratio<60,1>_>::min(void)

{
  undefined4 *in_RCX;
  
  *in_RCX = 0x80000000;
  return;
}

// min @ 14f909d80

/* public: static class std::chrono::duration<int,struct std::ratio<3600,1> > __cdecl
   std::chrono::duration<int,struct std::ratio<3600,1> >::min(void) */

void __cdecl std::chrono::duration<int,std::ratio<3600,1>_>::min(void)

{
  undefined4 *in_RCX;
  
  *in_RCX = 0x80000000;
  return;
}

// min @ 14f909d90

/* public: static class std::chrono::duration<__int64,struct std::ratio<1,1000000000> > __cdecl
   std::chrono::duration<__int64,struct std::ratio<1,1000000000> >::min(void) */

void __cdecl std::chrono::duration<__int64,std::ratio<1,1000000000>_>::min(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0x8000000000000000;
  return;
}

// min @ 14f909db0

/* public: static class std::chrono::duration<__int64,struct std::ratio<1,1000> > __cdecl
   std::chrono::duration<__int64,struct std::ratio<1,1000> >::min(void) */

void __cdecl std::chrono::duration<__int64,std::ratio<1,1000>_>::min(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0x8000000000000000;
  return;
}

// min @ 14f909dd0

/* public: static class std::chrono::duration<__int64,struct std::ratio<1,1000000> > __cdecl
   std::chrono::duration<__int64,struct std::ratio<1,1000000> >::min(void) */

void __cdecl std::chrono::duration<__int64,std::ratio<1,1000000>_>::min(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0x8000000000000000;
  return;
}

// min @ 14f909df0

/* public: static int __cdecl std::chrono::duration_values<int>::min(void) */

int __cdecl std::chrono::duration_values<int>::min(void)

{
  return -0x80000000;
}

// FUN_1502944f0 @ 1502944f0

void FUN_1502944f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xd8) & 1) != 0) {
    *(uint *)(param_2 + 0xd8) = *(uint *)(param_2 + 0xd8) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0xd0)
              );
  }
  return;
}


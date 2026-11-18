// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 101

// Span<unsigned_int><absl::lts_20240722::Span<unsigned_int>,void,absl::lts_20240722::Span<unsigned_int>,0> @ 1501e46a0

/* public: __cdecl absl::lts_20240722::Span<unsigned int>::Span<unsigned int><class
   absl::lts_20240722::Span<unsigned int>,void,class absl::lts_20240722::Span<unsigned int>,0>(class
   absl::lts_20240722::Span<unsigned int> & __ptr64) __ptr64 */

Span<unsigned_int> * __thiscall
absl::lts_20240722::Span<unsigned_int>::
Span<unsigned_int><absl::lts_20240722::Span<unsigned_int>,void,absl::lts_20240722::Span<unsigned_int>,0>
          (Span<unsigned_int> *this,Span<unsigned_int> *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar1;
  return this;
}

// FUN_1501e4720 @ 1501e4720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1501e4720(char param_1,double param_2,char *param_3,FormatSinkImpl *param_4)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char local_res8;
  char local_res9 [31];
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = (ulong64)&local_res8;
  if (param_1 != '\0') {
    local_18._Mysize = (ulong64)local_res9;
    local_res8 = param_1;
  }
  if (NAN(param_2) || NAN(param_2)) {
    if (((byte)(*param_3 - 7U) < 9) && ((*param_3 - 7U & 1) == 0)) {
      bVar1 = true;
      pcVar3 = "NAN";
      pcVar2 = "nan";
    }
    else {
      bVar1 = false;
      pcVar3 = "NAN";
      pcVar2 = "nan";
    }
  }
  else {
    if ((double)CONCAT44((uint)((ulonglong)param_2 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(param_2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
        ___xmm_7ff00000000000007ff0000000000000) {
      return false;
    }
    if (((byte)(*param_3 - 7U) < 9) && ((*param_3 - 7U & 1) == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    pcVar3 = "INF";
    pcVar2 = "inf";
  }
  if (bVar1) {
    pcVar2 = pcVar3;
  }
  local_18._Mydata = &local_res8;
  *(undefined2 *)local_18._Mysize = *(undefined2 *)pcVar2;
  *(char *)(local_18._Mysize + 2) = pcVar2[2];
  local_18._Mysize = local_18._Mysize + (3 - (longlong)&local_res8);
  bVar1 = absl::lts_20240722::str_format_internal::FormatSinkImpl::PutPaddedString
                    (param_4,&local_18,*(int *)(param_3 + 4),-1,(bool)(param_3[1] & 1));
  return bVar1;
}

// FUN_1501e4820 @ 1501e4820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1501e4820(char param_1,double param_2,char *param_3,FormatSinkImpl *param_4)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char local_res8;
  char local_res9 [31];
  basic_string_view<char,std::char_traits<char>_> local_18;
  
  local_18._Mysize = (ulong64)&local_res8;
  if (param_1 != '\0') {
    local_18._Mysize = (ulong64)local_res9;
    local_res8 = param_1;
  }
  if (NAN(param_2) || NAN(param_2)) {
    if (((byte)(*param_3 - 7U) < 9) && ((*param_3 - 7U & 1) == 0)) {
      bVar1 = true;
      pcVar3 = "NAN";
      pcVar2 = "nan";
    }
    else {
      bVar1 = false;
      pcVar3 = "NAN";
      pcVar2 = "nan";
    }
  }
  else {
    if ((double)CONCAT44((uint)((ulonglong)param_2 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(param_2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
        ___xmm_7ff00000000000007ff0000000000000) {
      return false;
    }
    if (((byte)(*param_3 - 7U) < 9) && ((*param_3 - 7U & 1) == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    pcVar3 = "INF";
    pcVar2 = "inf";
  }
  if (bVar1) {
    pcVar2 = pcVar3;
  }
  local_18._Mydata = &local_res8;
  *(undefined2 *)local_18._Mysize = *(undefined2 *)pcVar2;
  *(char *)(local_18._Mysize + 2) = pcVar2[2];
  local_18._Mysize = local_18._Mysize + (3 - (longlong)&local_res8);
  bVar1 = absl::lts_20240722::str_format_internal::FormatSinkImpl::PutPaddedString
                    (param_4,&local_18,*(int *)(param_3 + 4),-1,(bool)(param_3[1] & 1));
  return bVar1;
}

// FUN_1501e4920 @ 1501e4920

longlong * FUN_1501e4920(longlong *param_1,double param_2)

{
  longlong lVar1;
  double dVar2;
  int local_res8 [8];
  
  dVar2 = frexp(param_2,local_res8);
  dVar2 = ldexp(dVar2,0x35);
  lVar1 = 0;
  if ((__real_43e0000000000000 <= dVar2) &&
     (dVar2 = dVar2 - __real_43e0000000000000, dVar2 < __real_43e0000000000000)) {
    lVar1 = -0x8000000000000000;
  }
  *(int *)(param_1 + 1) = local_res8[0] + -0x35;
  *param_1 = (longlong)dVar2 + lVar1;
  return param_1;
}

// FUN_1501e4990 @ 1501e4990

uint128 * FUN_1501e4990(uint128 *param_1,double param_2)

{
  double dVar1;
  int local_res8 [8];
  
  dVar1 = frexp(param_2,local_res8);
  dVar1 = ldexp(dVar1,0x35);
  local_res8[0] = local_res8[0] + -0x35;
  absl::lts_20240722::uint128::uint128(param_1,(longdouble)dVar1);
  *(int *)&param_1[1].lo_ = local_res8[0];
  return param_1;
}

// FUN_1501e49e0 @ 1501e49e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1501e49e0(undefined8 param_1,FormatConversionChar *param_2,undefined8 *param_3)

{
  void *_Dst;
  char cVar1;
  int iVar2;
  _Bxty *_Dst_00;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  undefined1 uVar7;
  ulonglong _Size;
  char *_Dst_01;
  undefined1 auStack_f8 [32];
  <lambda_1> local_c8;
  _Bxty local_c0;
  ulong64 local_b0;
  ulonglong local_a8;
  _Bxty local_98;
  size_t local_88;
  ulonglong local_80;
  char local_78;
  undefined2 local_77;
  char acStack_75 [29];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_78 = '%';
  absl::lts_20240722::str_format_internal::FlagsToString
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,param_2[1]
            );
  uVar3 = local_98._Ptr;
  uVar4 = &local_98;
  if (0xf < local_80) {
    uVar4 = local_98._Ptr;
  }
  memcpy(&local_77,(void *)uVar4,local_88);
  if (0xf < local_80) {
    uVar5 = local_80 + 1;
    uVar4 = uVar3;
    if (0xfff < uVar5) {
      uVar5 = local_80 + 0x28;
      uVar4 = *(longlong *)(uVar3 + -8);
      if ((char *)0x1f < (char *)(uVar3 + (-8 - uVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar4,uVar5);
  }
  *(short *)((longlong)&local_77 + local_88) = s____._0_2_;
  acStack_75[local_88] = s____[2];
  cVar1 = absl::lts_20240722::str_format_internal::FormatConversionCharToChar(*param_2);
  acStack_75[local_88 + 1] = cVar1;
  acStack_75[local_88 + 2] = '\0';
  local_c0._Ptr = (char *)0x0;
  local_c0._8_8_ = 0;
  local_b0 = 0;
  local_a8 = 0xf;
  _Dst_00 = operator_new(0x210);
  local_b0 = 0x200;
  local_a8 = 0x20f;
  local_c0._Ptr = (char *)_Dst_00;
  memset(_Dst_00,0,0x200);
  _Dst_00->_Buf[0x200] = '\0';
  while( true ) {
    uVar3 = &local_c0;
    if (0xf < local_a8) {
      uVar3 = local_c0._Ptr;
    }
    iVar2 = snprintf((char *)uVar3,local_b0,&local_78);
    if (iVar2 < 0) {
      uVar7 = 0;
      goto LAB_1501e4c67;
    }
    uVar5 = (ulonglong)iVar2;
    if (uVar5 < local_b0) break;
    uVar5 = uVar5 + 1;
    if (local_b0 < uVar5) {
      _Size = uVar5 - local_b0;
      if (local_a8 - local_b0 < _Size) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,unsigned___int64,char>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c0,
                   _Size,local_c8,_Size,'\0');
      }
      else {
        uVar3 = &local_c0;
        if (0xf < local_a8) {
          uVar3 = local_c0._Ptr;
        }
        _Dst_01 = (char *)(uVar3 + local_b0);
        local_b0 = uVar5;
        memset(_Dst_01,0,_Size);
        _Dst_01[_Size] = '\0';
      }
    }
    else {
      uVar3 = &local_c0;
      if (0xf < local_a8) {
        uVar3 = local_c0._Ptr;
      }
      local_b0 = uVar5;
      *(char *)(uVar3 + uVar5) = '\0';
    }
  }
  uVar3 = &local_c0;
  if (0xf < local_a8) {
    uVar3 = local_c0._Ptr;
  }
  if (iVar2 != 0) {
    param_3[2] = param_3[2] + uVar5;
    _Dst = (void *)param_3[3];
    if ((ulonglong)((longlong)param_3 + (0x420 - (longlong)_Dst)) <= uVar5) {
      local_98._8_8_ = (longlong)_Dst + (-0x20 - (longlong)param_3);
      local_98._Ptr = (char *)(param_3 + 4);
      (*(code *)param_3[1])(*param_3,&local_98);
      param_3[3] = param_3 + 4;
      local_98._Ptr = (char *)uVar3;
      local_98._8_8_ = uVar5;
      (*(code *)param_3[1])(*param_3,&local_98);
      uVar7 = 1;
      goto LAB_1501e4c67;
    }
    memcpy(_Dst,(void *)uVar3,uVar5);
    param_3[3] = param_3[3] + uVar5;
  }
  uVar7 = 1;
LAB_1501e4c67:
  if (0xf < local_a8) {
    uVar6 = local_a8 + 1;
    uVar3 = local_c0._Ptr;
    if (0xfff < uVar6) {
      uVar6 = local_a8 + 0x28;
      uVar3 = *(undefined8 *)(local_c0._Ptr + -8);
      if ((char *)0x1f < local_c0._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar3,uVar6);
  }
  return uVar7;
}

// FUN_1501e4ce0 @ 1501e4ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1501e4ce0(undefined8 param_1,FormatConversionChar *param_2,undefined8 *param_3)

{
  void *_Dst;
  char cVar1;
  int iVar2;
  _Bxty *_Dst_00;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  undefined1 uVar7;
  ulonglong _Size;
  char *_Dst_01;
  undefined1 auStack_f8 [32];
  <lambda_1> local_c8;
  _Bxty local_c0;
  ulong64 local_b0;
  ulonglong local_a8;
  _Bxty local_98;
  size_t local_88;
  ulonglong local_80;
  char local_78;
  undefined2 local_77;
  char acStack_75 [29];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_78 = '%';
  absl::lts_20240722::str_format_internal::FlagsToString
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_98,param_2[1]
            );
  uVar3 = local_98._Ptr;
  uVar4 = &local_98;
  if (0xf < local_80) {
    uVar4 = local_98._Ptr;
  }
  memcpy(&local_77,(void *)uVar4,local_88);
  if (0xf < local_80) {
    uVar5 = local_80 + 1;
    uVar4 = uVar3;
    if (0xfff < uVar5) {
      uVar5 = local_80 + 0x28;
      uVar4 = *(longlong *)(uVar3 + -8);
      if ((char *)0x1f < (char *)(uVar3 + (-8 - uVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar4,uVar5);
  }
  *(short *)((longlong)&local_77 + local_88) = s____._0_2_;
  acStack_75[local_88] = s____[2];
  acStack_75[local_88 + 1] = 'L';
  cVar1 = absl::lts_20240722::str_format_internal::FormatConversionCharToChar(*param_2);
  acStack_75[local_88 + 2] = cVar1;
  acStack_75[local_88 + 3] = '\0';
  local_c0._Ptr = (char *)0x0;
  local_c0._8_8_ = 0;
  local_b0 = 0;
  local_a8 = 0xf;
  _Dst_00 = operator_new(0x210);
  local_b0 = 0x200;
  local_a8 = 0x20f;
  local_c0._Ptr = (char *)_Dst_00;
  memset(_Dst_00,0,0x200);
  _Dst_00->_Buf[0x200] = '\0';
  while( true ) {
    uVar3 = &local_c0;
    if (0xf < local_a8) {
      uVar3 = local_c0._Ptr;
    }
    iVar2 = snprintf((char *)uVar3,local_b0,&local_78);
    if (iVar2 < 0) {
      uVar7 = 0;
      goto LAB_1501e4f67;
    }
    uVar5 = (ulonglong)iVar2;
    if (uVar5 < local_b0) break;
    uVar5 = uVar5 + 1;
    if (local_b0 < uVar5) {
      _Size = uVar5 - local_b0;
      if (local_a8 - local_b0 < _Size) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,unsigned___int64,char>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c0,
                   _Size,local_c8,_Size,'\0');
      }
      else {
        uVar3 = &local_c0;
        if (0xf < local_a8) {
          uVar3 = local_c0._Ptr;
        }
        _Dst_01 = (char *)(uVar3 + local_b0);
        local_b0 = uVar5;
        memset(_Dst_01,0,_Size);
        _Dst_01[_Size] = '\0';
      }
    }
    else {
      uVar3 = &local_c0;
      if (0xf < local_a8) {
        uVar3 = local_c0._Ptr;
      }
      local_b0 = uVar5;
      *(char *)(uVar3 + uVar5) = '\0';
    }
  }
  uVar3 = &local_c0;
  if (0xf < local_a8) {
    uVar3 = local_c0._Ptr;
  }
  if (iVar2 != 0) {
    param_3[2] = param_3[2] + uVar5;
    _Dst = (void *)param_3[3];
    if ((ulonglong)((longlong)param_3 + (0x420 - (longlong)_Dst)) <= uVar5) {
      local_98._8_8_ = (longlong)_Dst + (-0x20 - (longlong)param_3);
      local_98._Ptr = (char *)(param_3 + 4);
      (*(code *)param_3[1])(*param_3,&local_98);
      param_3[3] = param_3 + 4;
      local_98._Ptr = (char *)uVar3;
      local_98._8_8_ = uVar5;
      (*(code *)param_3[1])(*param_3,&local_98);
      uVar7 = 1;
      goto LAB_1501e4f67;
    }
    memcpy(_Dst,(void *)uVar3,uVar5);
    param_3[3] = param_3[3] + uVar5;
  }
  uVar7 = 1;
LAB_1501e4f67:
  if (0xf < local_a8) {
    uVar6 = local_a8 + 1;
    uVar3 = local_c0._Ptr;
    if (0xfff < uVar6) {
      uVar6 = local_a8 + 0x28;
      uVar3 = *(undefined8 *)(local_c0._Ptr + -8);
      if ((char *)0x1f < local_c0._Ptr + (-8 - uVar3)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete((void *)uVar3,uVar6);
  }
  return uVar7;
}

// FUN_1501e4fe0 @ 1501e4fe0

bool FUN_1501e4fe0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  if (param_2 < 0x28) {
    cVar1 = FUN_1501e5060(*param_1,*(undefined4 *)(param_1 + 1),param_2,param_3,param_4);
    return cVar1 != '\0';
  }
  return false;
}

// FUN_1501e5020 @ 1501e5020

bool FUN_1501e5020(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  if (param_2 < 0x28) {
    cVar1 = FUN_1501e52b0(*param_1,*(undefined4 *)(param_1 + 2),param_2,param_3,param_4);
    return cVar1 != '\0';
  }
  return false;
}

// FUN_1501e5060 @ 1501e5060

undefined8
FUN_1501e5060(ulonglong param_1,int param_2,ulonglong param_3,longlong param_4,int *param_5)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  char *pcVar6;
  byte bVar7;
  char *pcVar8;
  ulonglong uVar9;
  
  *(longlong *)(param_4 + 0x60) = param_4 + 0x29;
  *(longlong *)(param_4 + 0x58) = param_4 + 0x29;
  if (-1 < param_2) {
    if (0x40 < param_2 + 0x35) {
      return 0;
    }
    lVar5 = FUN_1501e7dd0(param_1 << ((byte)param_2 & 0x3f),param_4);
    *param_5 = (int)lVar5 + -1;
    if (param_3 < lVar5 - 1U) {
      FUN_1501ea080(lVar5 + (-1 - param_3),0,param_4);
      return 1;
    }
    for (lVar5 = param_3 + (1 - lVar5); lVar5 != 0; lVar5 = lVar5 + -1) {
      **(undefined1 **)(param_4 + 0x60) = 0x30;
      *(longlong *)(param_4 + 0x60) = *(longlong *)(param_4 + 0x60) + 1;
    }
    return 1;
  }
  if (0x3c < -param_2) {
    return 0;
  }
  bVar7 = (byte)-param_2;
  uVar9 = (1L << (bVar7 & 0x3f)) - 1;
  lVar5 = FUN_1501e7dd0(param_1 >> (bVar7 & 0x3f),param_4);
  param_1 = uVar9 & param_1;
  if (lVar5 == 0) {
    *param_5 = 0;
    if ((param_1 != 0) && (param_1 <= uVar9)) {
      iVar3 = 0;
      do {
        param_1 = param_1 * 10;
        iVar3 = iVar3 + -1;
        *param_5 = iVar3;
      } while (param_1 <= uVar9);
    }
    *(longlong *)(param_4 + 0x58) = *(longlong *)(param_4 + 0x58) + -1;
    **(char **)(param_4 + 0x58) = (char)(param_1 >> (bVar7 & 0x3f)) + '0';
    **(undefined1 **)(param_4 + 0x60) = 0x2e;
    *(longlong *)(param_4 + 0x60) = *(longlong *)(param_4 + 0x60) + 1;
    param_1 = param_1 & uVar9;
  }
  else {
    *param_5 = (int)lVar5 + -1;
    if (param_3 < lVar5 - 1U) {
      FUN_1501ea080((lVar5 - param_3) + -1,param_1 != 0,param_4,param_5);
      return 1;
    }
    param_3 = param_3 + (1 - lVar5);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar1 = param_1 * 10;
    param_1 = uVar1 & uVar9;
    **(char **)(param_4 + 0x60) = (char)(uVar1 >> (bVar7 & 0x3f)) + '0';
    *(longlong *)(param_4 + 0x60) = *(longlong *)(param_4 + 0x60) + 1;
  }
  cVar2 = (char)(param_1 * 10 >> (bVar7 & 0x3f));
  if (cVar2 < '\x06') {
    if (cVar2 != '\x05') {
      return 1;
    }
    if ((param_1 * 10 & uVar9) == 0) {
      cVar2 = *(char *)(*(longlong *)(param_4 + 0x60) + -1);
      if (cVar2 == '.') {
        cVar2 = *(char *)(*(longlong *)(param_4 + 0x60) + -2);
      }
      uVar4 = (int)cVar2 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      if (uVar4 != 1) {
        return 1;
      }
    }
  }
  pcVar6 = *(char **)(param_4 + 0x58);
  pcVar8 = (char *)(*(longlong *)(param_4 + 0x60) + -1);
  if (pcVar6 <= pcVar8) {
    do {
      if (*pcVar8 == '9') {
        *pcVar8 = '0';
      }
      else if (*pcVar8 != '.') break;
      pcVar6 = *(char **)(param_4 + 0x58);
      pcVar8 = pcVar8 + -1;
    } while (pcVar6 <= pcVar8);
    if (pcVar6 <= pcVar8) {
      *pcVar8 = *pcVar8 + '\x01';
      return 1;
    }
  }
  *pcVar8 = '1';
  *(char **)(param_4 + 0x58) = pcVar8;
  cVar2 = pcVar8[1];
  pcVar8[1] = pcVar8[2];
  pcVar8[2] = cVar2;
  *param_5 = *param_5 + 1;
  *(longlong *)(param_4 + 0x60) = *(longlong *)(param_4 + 0x60) + -1;
  return 1;
}

// FUN_1501e52b0 @ 1501e52b0

undefined8
FUN_1501e52b0(ulonglong param_1,int param_2,ulonglong param_3,longlong param_4,int *param_5)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  char *pcVar6;
  byte bVar7;
  char *pcVar8;
  ulonglong uVar9;
  
  *(longlong *)(param_4 + 0x60) = param_4 + 0x29;
  *(longlong *)(param_4 + 0x58) = param_4 + 0x29;
  if (-1 < param_2) {
    if (0x40 < param_2 + 0x35) {
      return 0;
    }
    lVar5 = FUN_1501e7dd0(param_1 << ((byte)param_2 & 0x3f),param_4);
    *param_5 = (int)lVar5 + -1;
    if (param_3 < lVar5 - 1U) {
      FUN_1501ea080(lVar5 + (-1 - param_3),0,param_4);
      return 1;
    }
    for (lVar5 = param_3 + (1 - lVar5); lVar5 != 0; lVar5 = lVar5 + -1) {
      **(undefined1 **)(param_4 + 0x60) = 0x30;
      *(longlong *)(param_4 + 0x60) = *(longlong *)(param_4 + 0x60) + 1;
    }
    return 1;
  }
  if (0x3c < -param_2) {
    return 0;
  }
  bVar7 = (byte)-param_2;
  uVar9 = (1L << (bVar7 & 0x3f)) - 1;
  lVar5 = FUN_1501e7dd0(param_1 >> (bVar7 & 0x3f),param_4);
  param_1 = uVar9 & param_1;
  if (lVar5 == 0) {
    *param_5 = 0;
    if ((param_1 != 0) && (param_1 <= uVar9)) {
      iVar3 = 0;
      do {
        param_1 = param_1 * 10;
        iVar3 = iVar3 + -1;
        *param_5 = iVar3;
      } while (param_1 <= uVar9);
    }
    *(longlong *)(param_4 + 0x58) = *(longlong *)(param_4 + 0x58) + -1;
    **(char **)(param_4 + 0x58) = (char)(param_1 >> (bVar7 & 0x3f)) + '0';
    **(undefined1 **)(param_4 + 0x60) = 0x2e;
    *(longlong *)(param_4 + 0x60) = *(longlong *)(param_4 + 0x60) + 1;
    param_1 = param_1 & uVar9;
  }
  else {
    *param_5 = (int)lVar5 + -1;
    if (param_3 < lVar5 - 1U) {
      FUN_1501ea080((lVar5 - param_3) + -1,param_1 != 0,param_4,param_5);
      return 1;
    }
    param_3 = param_3 + (1 - lVar5);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar1 = param_1 * 10;
    param_1 = uVar1 & uVar9;
    **(char **)(param_4 + 0x60) = (char)(uVar1 >> (bVar7 & 0x3f)) + '0';
    *(longlong *)(param_4 + 0x60) = *(longlong *)(param_4 + 0x60) + 1;
  }
  cVar2 = (char)(param_1 * 10 >> (bVar7 & 0x3f));
  if (cVar2 < '\x06') {
    if (cVar2 != '\x05') {
      return 1;
    }
    if ((param_1 * 10 & uVar9) == 0) {
      cVar2 = *(char *)(*(longlong *)(param_4 + 0x60) + -1);
      if (cVar2 == '.') {
        cVar2 = *(char *)(*(longlong *)(param_4 + 0x60) + -2);
      }
      uVar4 = (int)cVar2 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      if (uVar4 != 1) {
        return 1;
      }
    }
  }
  pcVar6 = *(char **)(param_4 + 0x58);
  pcVar8 = (char *)(*(longlong *)(param_4 + 0x60) + -1);
  if (pcVar6 <= pcVar8) {
    do {
      if (*pcVar8 == '9') {
        *pcVar8 = '0';
      }
      else if (*pcVar8 != '.') break;
      pcVar6 = *(char **)(param_4 + 0x58);
      pcVar8 = pcVar8 + -1;
    } while (pcVar6 <= pcVar8);
    if (pcVar6 <= pcVar8) {
      *pcVar8 = *pcVar8 + '\x01';
      return 1;
    }
  }
  *pcVar8 = '1';
  *(char **)(param_4 + 0x58) = pcVar8;
  cVar2 = pcVar8[1];
  pcVar8[1] = pcVar8[2];
  pcVar8[2] = cVar2;
  *param_5 = *param_5 + 1;
  *(longlong *)(param_4 + 0x60) = *(longlong *)(param_4 + 0x60) + -1;
  return 1;
}

// FUN_1501e5500 @ 1501e5500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1501e5500(undefined8 param_1,byte *param_2,FormatSinkImpl *param_3)

{
  byte bVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined7 extraout_var;
  longlong lVar6;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  undefined7 uVar7;
  char *pcVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  char cVar12;
  ulonglong uVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_188 [32];
  undefined1 local_158 [16];
  undefined8 local_148;
  code *pcStack_140;
  basic_string_view<char,std::char_traits<char>_> local_138;
  char local_128 [8];
  ulonglong local_120;
  byte *local_118;
  FormatSinkImpl *local_110;
  basic_string_view<char,std::char_traits<char>_> *local_108;
  code *pcStack_100;
  basic_string_view<char,std::char_traits<char>_> *local_f8;
  code *pcStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  undefined1 local_c8 [88];
  char *local_70;
  longlong local_68;
  ulonglong local_58;
  
  uVar17 = (uint)((ulonglong)param_1 >> 0x20);
  uVar15 = (uint)param_1;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_188;
  cVar12 = '\0';
  iVar5 = _dsign();
  if (iVar5 == 0) {
    uVar16 = uVar15;
    if ((param_2[1] & 2) != 0) {
      cVar12 = '+';
      goto LAB_1501e5563;
    }
    if ((param_2[1] & 4) != 0) {
      cVar12 = ' ';
      goto LAB_1501e5563;
    }
  }
  else {
    uVar17 = uVar17 ^ __xmm_80000000000000008000000000000000._4_4_;
    cVar12 = '-';
    uVar16 = uVar15 ^ (uint)__xmm_80000000000000008000000000000000;
LAB_1501e5563:
    local_158[0] = cVar12;
  }
  puVar10 = (undefined4 *)local_158;
  if (cVar12 != '\0') {
    puVar10 = (undefined4 *)((longlong)local_158 + 1);
  }
  if (NAN((double)CONCAT44(uVar17,uVar16)) || NAN((double)CONCAT44(uVar17,uVar16))) {
    if (((byte)(*param_2 - 7) < 9) && ((*param_2 - 7 & 1) == 0)) {
      bVar3 = true;
      pcVar14 = "NAN";
      pcVar8 = "nan";
    }
    else {
      bVar3 = false;
      pcVar14 = "NAN";
      pcVar8 = "nan";
    }
LAB_1501e55f7:
    if (bVar3) {
      pcVar8 = pcVar14;
    }
    local_138._Mydata = local_158;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar8;
    *(char *)((longlong)puVar10 + 2) = pcVar8[2];
    local_138._Mysize = (3 - (longlong)local_158) + (longlong)puVar10;
    bVar3 = absl::lts_20240722::str_format_internal::FormatSinkImpl::PutPaddedString
                      (param_3,&local_138,*(int *)(param_2 + 4),-1,(bool)(param_2[1] & 1));
    uVar7 = extraout_var;
    if (bVar3) goto LAB_1501e59fc;
  }
  else if (___xmm_7ff00000000000007ff0000000000000 <=
           (double)CONCAT44(uVar17 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            uVar16 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    if (((byte)(*param_2 - 7) < 9) && ((*param_2 - 7 & 1) == 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    pcVar14 = "INF";
    pcVar8 = "inf";
    goto LAB_1501e55f7;
  }
  uVar13 = 6;
  if (-1 < *(int *)(param_2 + 8)) {
    uVar13 = (longlong)*(int *)(param_2 + 8);
  }
  local_158._0_4_ = 0;
  dVar2 = frexp((double)CONCAT44(uVar17,uVar16),(int *)&local_138);
  dVar2 = ldexp(dVar2,0x35);
  lVar6 = 0;
  local_d8 = (int)local_138._Mydata + -0x35;
  if ((__real_43e0000000000000 <= dVar2) &&
     (dVar2 = dVar2 - __real_43e0000000000000, dVar2 < __real_43e0000000000000)) {
    lVar6 = -0x8000000000000000;
  }
  bVar1 = *param_2;
  uVar9 = (longlong)dVar2 + lVar6;
  local_128[0] = cVar12;
  local_120 = uVar13;
  local_118 = param_2;
  local_110 = param_3;
  if ((byte)(bVar1 - 8) < 2) {
    local_148._0_4_ = (undefined4)uVar9;
    local_148._4_4_ = (undefined4)(uVar9 >> 0x20);
    if (local_d8 < 0) {
      if (local_d8 < -0x80) {
        pcStack_140 = (code *)0x0;
        local_148 = (basic_string_view<char,std::char_traits<char>_> **)uVar9;
        FUN_1501e9750(&local_148,-local_d8,local_128);
        uVar7 = extraout_var_03;
        goto LAB_1501e59fc;
      }
    }
    else {
      if (__isa_available < 5) {
        lVar6 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        if (uVar9 != 0) {
          iVar5 = 0x3f - (int)lVar6;
        }
        else {
          iVar5 = 0x40;
        }
      }
      else {
        iVar5 = (int)LZCOUNT(uVar9);
      }
      if (0x80 < (local_d8 - iVar5) + 0x40) {
        pcStack_100 = FUN_1501e7930;
        local_108 = &local_138;
        iVar5 = (int)local_138._Mydata + 0x6a;
        pcStack_f0 = FUN_1501e7930;
        local_e8 = (undefined4)local_148;
        uStack_e4 = local_148._4_4_;
        uStack_e0 = 0;
        uStack_dc = 0;
        pcStack_140 = FUN_1501e7970;
        local_148 = &local_f8;
        local_138._Mydata = local_128;
        local_f8 = local_108;
        FUN_1501ea290((longlong)((((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 0xb) / 10),
                      &local_148);
        uVar7 = extraout_var_02;
        goto LAB_1501e59fc;
      }
    }
    FUN_1501e71a0(uVar9,local_d8,local_128);
    uVar7 = extraout_var_04;
    goto LAB_1501e59fc;
  }
  if ((byte)(bVar1 - 10) < 2) {
    if ((0x27 < uVar13) || (cVar4 = FUN_1501e5060(uVar9,local_d8,uVar13,local_c8), cVar4 == '\0')) {
LAB_1501e58c5:
      lVar6 = FUN_1501e49e0(uVar15,param_2,param_3);
      return lVar6;
    }
    if (((param_2[1] & 8) == 0) && (*(char *)(local_68 + -1) == '.')) {
      local_68 = local_68 + -1;
    }
    iVar5 = local_158._0_4_;
    if ((8 < (byte)(*param_2 - 7)) || (uVar11 = 0x45, (*param_2 - 7 & 1) != 0)) {
      uVar11 = 0x65;
    }
LAB_1501e588e:
    FUN_1501e9c30(iVar5,uVar11,local_c8);
  }
  else {
    if (1 < (byte)(bVar1 - 0xc)) {
      if (1 < (byte)(bVar1 - 0xe)) {
        return (ulonglong)(uint3)(bVar1 - 0xe >> 8) << 8;
      }
      local_138._Mydata = (char *)CONCAT44(local_138._Mydata._4_4_,0xfffffc02);
      local_138._Mysize = 1;
      local_148 = (basic_string_view<char,std::char_traits<char>_> **)
                  CONCAT44(local_138._Mydata._4_4_,0xfffffc02);
      pcStack_140 = (code *)0x1;
      FUN_1501e62f0(&local_148,uVar9,local_d8,bVar1 == 0xf);
      uVar7 = extraout_var_00;
      goto LAB_1501e59fc;
    }
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    if ((0x27 < uVar13 - 1) || (cVar4 = FUN_1501e5060(), cVar4 == '\0')) goto LAB_1501e58c5;
    iVar5 = local_158._0_4_;
    if ((((int)local_158._0_4_ < 0) || ((ulonglong)(longlong)(int)local_158._0_4_ < uVar13)) &&
       (-5 < (int)local_158._0_4_)) {
      if ((int)local_158._0_4_ < 0) {
        local_70[1] = *local_70;
        if ((int)local_158._0_4_ < -1) {
          uVar13 = (ulonglong)(-local_158._0_4_ - 1);
          do {
            *local_70 = '0';
            local_70 = local_70 + -1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        *local_70 = '.';
        local_70 = local_70 + -1;
        *local_70 = '0';
      }
      else if (0 < (int)local_158._0_4_) {
        std::rotate<char*___ptr64>
                  (local_70 + 1,local_70 + 2,local_70 + (longlong)(int)local_158._0_4_ + 2);
      }
      iVar5 = 0;
    }
    if ((param_2[1] & 8) == 0) {
      cVar4 = *(char *)(local_68 + -1);
      while (cVar4 == '0') {
        cVar4 = *(char *)(local_68 + -2);
        local_68 = local_68 + -1;
      }
      if (*(char *)(local_68 + -1) == '.') {
        local_68 = local_68 + -1;
      }
    }
    if (iVar5 != 0) {
      if ((8 < (byte)(*param_2 - 7)) || (uVar11 = 0x45, (*param_2 - 7 & 1) != 0)) {
        uVar11 = 0x65;
      }
      goto LAB_1501e588e;
    }
  }
  local_138._Mysize = local_68 - (longlong)local_70;
  local_138._Mydata = local_70;
  FUN_1501ea490(cVar12,&local_138,param_2,param_3);
  uVar7 = extraout_var_01;
LAB_1501e59fc:
  return CONCAT71(uVar7,1);
}

// FUN_1501e5a40 @ 1501e5a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1501e5a40(undefined8 param_1,byte *param_2,FormatSinkImpl *param_3)

{
  byte bVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  longlong lVar6;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  undefined7 uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  char cVar12;
  ulonglong uVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_188 [32];
  undefined1 local_158 [16];
  basic_string_view<char,std::char_traits<char>_> local_148;
  uint128 local_138 [2];
  char local_118 [8];
  ulonglong local_110;
  byte *local_108;
  FormatSinkImpl *local_100;
  basic_string_view<char,std::char_traits<char>_> *local_f8;
  code *pcStack_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  int local_d8;
  undefined1 local_c8 [88];
  char *local_70;
  longlong local_68;
  ulonglong local_58;
  
  uVar17 = (uint)((ulonglong)param_1 >> 0x20);
  uVar15 = (uint)param_1;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_188;
  cVar12 = '\0';
  iVar5 = _ldsign();
  if (iVar5 == 0) {
    uVar16 = uVar15;
    if ((param_2[1] & 2) != 0) {
      cVar12 = '+';
      goto LAB_1501e5aa3;
    }
    if ((param_2[1] & 4) != 0) {
      cVar12 = ' ';
      goto LAB_1501e5aa3;
    }
  }
  else {
    uVar17 = uVar17 ^ __xmm_80000000000000008000000000000000._4_4_;
    cVar12 = '-';
    uVar16 = uVar15 ^ (uint)__xmm_80000000000000008000000000000000;
LAB_1501e5aa3:
    local_158[0] = cVar12;
  }
  puVar9 = (undefined4 *)local_158;
  if (cVar12 != '\0') {
    puVar9 = (undefined4 *)((longlong)local_158 + 1);
  }
  if (NAN((double)CONCAT44(uVar17,uVar16)) || NAN((double)CONCAT44(uVar17,uVar16))) {
    if (((byte)(*param_2 - 7) < 9) && ((*param_2 - 7 & 1) == 0)) {
      bVar3 = true;
      pcVar14 = "NAN";
      pcVar8 = "nan";
    }
    else {
      bVar3 = false;
      pcVar14 = "NAN";
      pcVar8 = "nan";
    }
LAB_1501e5b37:
    if (bVar3) {
      pcVar8 = pcVar14;
    }
    local_148._Mydata = local_158;
    *(undefined2 *)puVar9 = *(undefined2 *)pcVar8;
    *(char *)((longlong)puVar9 + 2) = pcVar8[2];
    local_148._Mysize = (3 - (longlong)local_158) + (longlong)puVar9;
    bVar3 = absl::lts_20240722::str_format_internal::FormatSinkImpl::PutPaddedString
                      (param_3,&local_148,*(int *)(param_2 + 4),-1,(bool)(param_2[1] & 1));
    uVar7 = extraout_var;
    if (bVar3) goto LAB_1501e5f60;
  }
  else if (___xmm_7ff00000000000007ff0000000000000 <=
           (double)CONCAT44(uVar17 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            uVar16 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    if (((byte)(*param_2 - 7) < 9) && ((*param_2 - 7 & 1) == 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    pcVar14 = "INF";
    pcVar8 = "inf";
    goto LAB_1501e5b37;
  }
  uVar13 = 6;
  if (-1 < *(int *)(param_2 + 8)) {
    uVar13 = (longlong)*(int *)(param_2 + 8);
  }
  local_158._0_4_ = 0;
  dVar2 = frexp((double)CONCAT44(uVar17,uVar16),(int *)&local_148);
  dVar2 = ldexp(dVar2,0x35);
  local_148._Mydata = (char *)CONCAT44(local_148._Mydata._4_4_,(int)local_148._Mydata + -0x35);
  absl::lts_20240722::uint128::uint128(local_138,(longdouble)dVar2);
  bVar1 = *param_2;
  uVar10 = (ulonglong)local_148._Mydata & 0xffffffff;
  local_118[0] = cVar12;
  local_110 = uVar13;
  local_108 = param_2;
  local_100 = param_3;
  if ((byte)(bVar1 - 8) < 2) {
    if ((int)local_148._Mydata < 0) {
      if ((int)local_148._Mydata < -0x80) {
        FUN_1501e9750(local_138,-(int)local_148._Mydata,local_118);
        uVar7 = extraout_var_03;
        goto LAB_1501e5f60;
      }
    }
    else {
      if (local_138[0].hi_ == 0) {
        if (__isa_available < 5) {
          lVar6 = 0x3f;
          if (local_138[0].lo_ != 0) {
            for (; local_138[0].lo_ >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          if (local_138[0].lo_ != 0) {
            iVar5 = 0x3f - (int)lVar6;
          }
          else {
            iVar5 = 0x40;
          }
        }
        else {
          iVar5 = (int)LZCOUNT(local_138[0].lo_);
        }
        iVar5 = iVar5 + 0x40;
      }
      else if (__isa_available < 5) {
        lVar6 = 0x3f;
        if (local_138[0].hi_ != 0) {
          for (; local_138[0].hi_ >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        if (local_138[0].hi_ != 0) {
          iVar5 = 0x3f - (int)lVar6;
        }
        else {
          iVar5 = 0x40;
        }
      }
      else {
        iVar5 = (int)LZCOUNT(local_138[0].hi_);
      }
      if (0x80 < ((int)local_148._Mydata - iVar5) + 0x80) {
        local_d8 = (int)local_148._Mydata;
        local_f8 = &local_148;
        iVar5 = (int)local_148._Mydata + 0x9f;
        local_e0 = local_138[0].hi_;
        local_e8 = local_138[0].lo_;
        pcStack_f0 = FUN_1501e7930;
        local_138[0].hi_ = (ulong64)FUN_1501e7970;
        local_148._Mydata = local_118;
        local_138[0].lo_ = (ulong64)&local_f8;
        FUN_1501ea290((longlong)((((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 0xb) / 10),
                      local_138);
        uVar7 = extraout_var_02;
        goto LAB_1501e5f60;
      }
    }
    FUN_1501e6eb0(local_138,uVar10,local_118);
    uVar7 = extraout_var_04;
    goto LAB_1501e5f60;
  }
  if ((byte)(bVar1 - 10) < 2) {
    if ((0x27 < uVar13) ||
       (cVar4 = FUN_1501e52b0(local_138[0].lo_,uVar10,uVar13,local_c8), cVar4 == '\0')) {
LAB_1501e5dfa:
      lVar6 = FUN_1501e4ce0(uVar15,param_2,param_3);
      return lVar6;
    }
    if (((param_2[1] & 8) == 0) && (*(char *)(local_68 + -1) == '.')) {
      local_68 = local_68 + -1;
    }
    iVar5 = local_158._0_4_;
    if ((8 < (byte)(*param_2 - 7)) || (uVar11 = 0x45, (*param_2 - 7 & 1) != 0)) {
      uVar11 = 0x65;
    }
LAB_1501e5dc3:
    FUN_1501e9c30(iVar5,uVar11,local_c8);
  }
  else {
    if (1 < (byte)(bVar1 - 0xc)) {
      if (1 < (byte)(bVar1 - 0xe)) {
        return (ulonglong)(uint3)(bVar1 - 0xe >> 8) << 8;
      }
      uVar13 = (ulonglong)local_148._Mydata & 0xffffffff;
      local_148._Mydata = (char *)CONCAT44(local_148._Mydata._4_4_,0xfffffc02);
      local_148._Mysize = 1;
      FUN_1501e5fa0(&local_148,local_138,uVar13,bVar1 == 0xf);
      uVar7 = extraout_var_00;
      goto LAB_1501e5f60;
    }
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    if ((0x27 < uVar13 - 1) ||
       (cVar4 = FUN_1501e52b0(local_138[0].lo_,uVar10,uVar13 - 1,local_c8), cVar4 == '\0'))
    goto LAB_1501e5dfa;
    iVar5 = local_158._0_4_;
    if ((((int)local_158._0_4_ < 0) || ((ulonglong)(longlong)(int)local_158._0_4_ < uVar13)) &&
       (-5 < (int)local_158._0_4_)) {
      if ((int)local_158._0_4_ < 0) {
        local_70[1] = *local_70;
        if ((int)local_158._0_4_ < -1) {
          uVar13 = (ulonglong)(-local_158._0_4_ - 1);
          do {
            *local_70 = '0';
            local_70 = local_70 + -1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        *local_70 = '.';
        local_70 = local_70 + -1;
        *local_70 = '0';
      }
      else if (0 < (int)local_158._0_4_) {
        std::rotate<char*___ptr64>
                  (local_70 + 1,local_70 + 2,local_70 + (longlong)(int)local_158._0_4_ + 2);
      }
      iVar5 = 0;
    }
    if ((param_2[1] & 8) == 0) {
      cVar4 = *(char *)(local_68 + -1);
      while (cVar4 == '0') {
        cVar4 = *(char *)(local_68 + -2);
        local_68 = local_68 + -1;
      }
      if (*(char *)(local_68 + -1) == '.') {
        local_68 = local_68 + -1;
      }
    }
    if (iVar5 != 0) {
      if ((8 < (byte)(*param_2 - 7)) || (uVar11 = 0x45, (*param_2 - 7 & 1) != 0)) {
        uVar11 = 0x65;
      }
      goto LAB_1501e5dc3;
    }
  }
  local_148._Mysize = local_68 - (longlong)local_70;
  local_148._Mydata = local_70;
  FUN_1501ea490(cVar12,&local_148,param_2,param_3);
  uVar7 = extraout_var_01;
LAB_1501e5f60:
  return CONCAT71(uVar7,1);
}

// FUN_1501e5fa0 @ 1501e5fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501e5fa0(int *param_1,uint128 *param_2,int param_3,byte param_4,longlong param_5)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  char *pcVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_108 [32];
  char **local_e8;
  byte local_d8 [16];
  undefined1 *local_c8;
  ulonglong uStack_c0;
  uint local_b8;
  int local_b0 [2];
  char *local_a8;
  ulong64 uStack_a0;
  undefined1 local_98;
  char local_97;
  char local_96;
  char local_95;
  char local_94 [20];
  char local_80 [40];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_108;
  iVar12 = *param_1;
  iVar1 = param_1[2];
  param_3 = param_3 + 0x80;
  local_d8[0] = 0;
  local_b8 = *(uint *)(*(longlong *)(param_5 + 0x10) + 8) >> 0x1f ^ 1;
  bVar5 = absl::lts_20240722::uint128::operator_bool(param_2);
  uVar4 = DAT_154e47278;
  uVar3 = DAT_154e47270;
  iVar10 = param_3;
  if (bVar5) {
    do {
      iVar10 = param_3;
      if (((param_2->hi_ & uVar4) != 0) || ((param_2->lo_ & uVar3) != 0)) break;
      iVar10 = param_3 + -1;
      if (iVar10 < iVar12) {
        absl::lts_20240722::uint128::operator>>=(param_2,iVar12 - param_3);
        local_b0[0] = iVar12;
        goto LAB_1501e6117;
      }
      local_c8 = (undefined1 *)(param_2->lo_ * 2);
      uStack_c0 = param_2->hi_ * 2 | param_2->lo_ >> 0x3f;
      param_2->lo_ = (ulong64)local_c8;
      param_2->hi_ = uStack_c0;
      bVar5 = absl::lts_20240722::uint128::operator_bool(param_2);
      param_3 = iVar10;
    } while (bVar5);
  }
  iVar12 = 0x80 - iVar1;
  bVar6 = (byte)iVar12;
  if (iVar12 < 0x40) {
    if (iVar12 == 0) {
      local_c8 = (undefined1 *)param_2->lo_;
      uStack_c0 = param_2->hi_;
    }
    else {
      local_c8 = (undefined1 *)
                 (param_2->hi_ << (0x40 - bVar6 & 0x3f) | param_2->lo_ >> (bVar6 & 0x3f));
      uStack_c0 = param_2->hi_ >> (bVar6 & 0x3f);
    }
    local_d8[0] = (byte)local_c8;
  }
  else {
    local_d8[0] = (byte)(param_2->hi_ >> (bVar6 - 0x40 & 0x3f));
  }
  uStack_a0 = param_2->hi_;
  if ((param_2->lo_ != 0) ||
     (local_a8 = (char *)param_2->lo_, local_b0[0] = iVar10, param_2->hi_ != 0)) {
    local_b0[0] = iVar1;
  }
  local_b0[0] = iVar10 - local_b0[0];
  absl::lts_20240722::uint128::operator<<=(param_2,iVar1);
LAB_1501e6117:
  local_e8 = (char **)local_b0;
  FUN_1501e6810((char)local_b8,param_5,local_d8,param_2);
  local_98 = 0x30;
  bVar6 = param_4 ^ 1;
  pcVar9 = &local_95;
  lVar11 = 0;
  local_97 = bVar6 * ' ' + 'X';
  local_96 = "0123456789ABCDEF0123456789abcdef"[(ulonglong)local_d8[0] + (ulonglong)bVar6 * 0x10];
  lVar8 = lVar11;
  if ((char)local_b8 == '\0') {
    if (param_2->hi_ == 0 && param_2->lo_ == 0) goto LAB_1501e6193;
  }
  else if (*(longlong *)(param_5 + 8) == 0) {
LAB_1501e6193:
    if ((*(byte *)(*(longlong *)(param_5 + 0x10) + 1) & 8) == 0) goto LAB_1501e61b0;
  }
  local_95 = '.';
  pcVar9 = local_94;
LAB_1501e61b0:
  while (local_a8 = (char *)param_2->lo_, param_2->hi_ != 0 || local_a8 != (char *)0x0) {
    local_a8 = (char *)param_2->lo_;
    uStack_a0 = param_2->hi_;
    bVar7 = FUN_1501e74a0(&local_a8,0x1f);
    local_c8 = (undefined1 *)(param_2->lo_ << 4);
    *pcVar9 = "0123456789ABCDEF0123456789abcdef"[(ulonglong)bVar7 + (ulonglong)bVar6 * 0x10];
    pcVar9 = pcVar9 + 1;
    uStack_c0 = param_2->hi_ << 4 | param_2->lo_ >> 0x3c;
    param_2->lo_ = (ulong64)local_c8;
    param_2->hi_ = uStack_c0;
    lVar8 = lVar8 + 1;
  }
  if ((char)local_b8 != '\0') {
    lVar11 = *(longlong *)(param_5 + 8) - lVar8;
  }
  local_80[0] = (param_4 ^ 1) * ' ' + 'P';
  local_80[1] = 0x2d;
  if (-1 < local_b0[0]) {
    local_80[1] = 0x2b;
  }
  iVar10 = -local_b0[0];
  if (-local_b0[0] < 0) {
    iVar10 = local_b0[0];
  }
  absl::lts_20240722::numbers_internal::FastIntToBuffer(iVar10,local_80 + 2);
  local_a8 = local_80;
  lVar8 = -1;
  do {
    uStack_a0 = lVar8 + 1;
    lVar2 = lVar8 + 1;
    lVar8 = uStack_a0;
  } while (local_80[lVar2] != '\0');
  local_c8 = &local_98;
  uStack_c0 = (longlong)pcVar9 - (longlong)&local_98;
  local_e8 = &local_a8;
  FUN_1501e9390(param_5,&local_c8,2,lVar11);
  return;
}

// FUN_1501e62f0 @ 1501e62f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501e62f0(int *param_1,ulonglong param_2,int param_3,byte param_4,longlong param_5)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  byte bVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_d8 [32];
  char **local_b8;
  undefined1 *local_a8;
  longlong lStack_a0;
  char *local_98;
  longlong lStack_90;
  undefined1 local_88;
  char local_87;
  char local_86;
  char local_85;
  char local_84 [20];
  char local_70 [40];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  iVar13 = param_3 + 0x40;
  iVar14 = *param_1;
  iVar6 = param_1[2];
  uVar16 = 0;
  lVar12 = *(longlong *)(param_5 + 0x10);
  bVar10 = (byte)((uint)*(undefined4 *)(lVar12 + 8) >> 0x1f) ^ 1;
  bVar5 = (byte)iVar6;
  if (param_2 == 0) {
LAB_1501e638c:
    uVar16 = param_2 >> (0x40 - bVar5 & 0x3f);
    if (param_2 != 0) goto LAB_1501e63af;
  }
  else {
    param_3 = param_3 + 0x3f;
    do {
      if ((longlong)param_2 < 0) goto LAB_1501e638c;
      if (param_3 < iVar14) {
        param_2 = param_2 >> ((char)iVar14 - (char)iVar13 & 0x3fU);
        goto LAB_1501e63b8;
      }
      iVar13 = iVar13 + -1;
      param_3 = param_3 + -1;
      param_2 = param_2 * 2;
    } while (param_2 != 0);
    uVar16 = 0L >> (0x40 - bVar5 & 0x3f);
  }
  iVar6 = iVar13;
LAB_1501e63af:
  iVar14 = iVar13 - iVar6;
  param_2 = param_2 << (bVar5 & 0x3f);
LAB_1501e63b8:
  uVar11 = 0;
  if (bVar10 != 0) {
    uVar7 = *(ulonglong *)(param_5 + 8);
    uVar15 = 0x10;
    if (0x10 < uVar7) {
      uVar15 = uVar7;
    }
    uVar15 = uVar15 - uVar7;
    uVar7 = uVar11;
    if (uVar15 != 0) {
      cVar1 = (char)uVar15;
      uVar7 = 0;
      if (0x10 < uVar15) {
        uVar7 = uVar15;
      }
      uVar8 = 8L << (cVar1 * '\x04' - 4U & 0x3f);
      uVar7 = 0xffffffffffffffffU >> (((char)uVar7 - cVar1 & 0xfU) << 2) & param_2;
      if (uVar7 == uVar8) {
        bVar5 = (byte)uVar16;
        if (uVar15 != 0x10) {
          bVar5 = (byte)((0xfL << (cVar1 * '\x04' & 0x3fU) & param_2) >> (cVar1 * '\x04' & 0x3fU));
        }
        bVar3 = (bool)(bVar5 & 1);
      }
      else {
        bVar3 = uVar8 < uVar7;
      }
      if (bVar3 != false) {
        uVar7 = uVar11;
        if (uVar15 < 0x10) {
          uVar7 = 1L << (cVar1 * '\x04' & 0x3fU);
        }
        if ((((longlong)param_2 < 0) && (-1 < (longlong)(param_2 + uVar7))) || (0xf < uVar15)) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = '\0';
        }
        bVar5 = (byte)uVar16 + cVar4;
        uVar16 = (ulonglong)bVar5;
        param_2 = param_2 + uVar7;
        if (0xf < bVar5) {
          uVar16 = 1;
          iVar14 = iVar14 + 4;
          param_2 = uVar11;
        }
      }
      lVar12 = *(longlong *)(param_5 + 0x10);
      uVar7 = 0x10;
      if (0x10 < uVar15) {
        uVar7 = uVar15;
      }
      uVar7 = 0xffffffffffffffff >> (((char)uVar7 - cVar1) * '\x04' & 0x3fU);
    }
    param_2 = param_2 & ~uVar7;
  }
  local_88 = 0x30;
  bVar5 = param_4 ^ 1;
  pcVar9 = &local_85;
  local_87 = bVar5 * ' ' + 'X';
  local_86 = "0123456789ABCDEF0123456789abcdef"[(uVar16 & 0xff) + (ulonglong)bVar5 * 0x10];
  uVar16 = param_2;
  if (bVar10 != 0) {
    uVar16 = *(ulonglong *)(param_5 + 8);
  }
  uVar7 = uVar11;
  if ((uVar16 != 0) || ((*(byte *)(lVar12 + 1) & 8) != 0)) {
    local_85 = '.';
    pcVar9 = local_84;
  }
  for (; param_2 != 0; param_2 = param_2 << 4) {
    *pcVar9 = "0123456789ABCDEF0123456789abcdef"[(param_2 >> 0x3c) + (ulonglong)bVar5 * 0x10];
    pcVar9 = pcVar9 + 1;
    uVar7 = uVar7 + 1;
  }
  if (bVar10 != 0) {
    uVar11 = *(longlong *)(param_5 + 8) - uVar7;
  }
  local_70[0] = (param_4 ^ 1) * ' ' + 'P';
  local_70[1] = 0x2d;
  if (-1 < iVar14) {
    local_70[1] = 0x2b;
  }
  iVar6 = -iVar14;
  if (-iVar14 < 0) {
    iVar6 = iVar14;
  }
  absl::lts_20240722::numbers_internal::FastIntToBuffer(iVar6,local_70 + 2);
  local_98 = local_70;
  lVar12 = -1;
  do {
    lStack_90 = lVar12 + 1;
    lVar2 = lVar12 + 1;
    lVar12 = lStack_90;
  } while (local_70[lVar2] != '\0');
  local_a8 = &local_88;
  lStack_a0 = (longlong)pcVar9 - (longlong)&local_88;
  local_b8 = &local_98;
  FUN_1501e9390(param_5,&local_a8,2,uVar11);
  return;
}

// FUN_1501e6630 @ 1501e6630

void FUN_1501e6630(int *param_1,byte *param_2,uint128 *param_3,int *param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 2);
  bVar5 = absl::lts_20240722::uint128::operator_bool(param_3);
  uVar4 = DAT_154e47278;
  uVar3 = DAT_154e47270;
  if (bVar5) {
    do {
      if (((param_3->hi_ & uVar4) != 0) || ((uVar3 & param_3->lo_) != 0)) break;
      iVar7 = *param_1;
      if (*param_4 <= iVar7) {
        absl::lts_20240722::uint128::operator>>=(param_3,iVar7 - *param_4);
        *param_4 = iVar7;
        return;
      }
      uVar2 = param_3->lo_;
      param_3->lo_ = param_3->lo_ * 2;
      param_3->hi_ = param_3->hi_ * 2 | uVar2 >> 0x3f;
      *param_4 = *param_4 + -1;
      bVar5 = absl::lts_20240722::uint128::operator_bool(param_3);
    } while (bVar5);
  }
  iVar7 = (int)uVar1;
  iVar8 = 0x80 - iVar7;
  bVar6 = (byte)iVar8;
  if (iVar8 < 0x40) {
    if (iVar8 == 0) {
      bVar6 = (byte)param_3->lo_;
    }
    else {
      bVar6 = (byte)(param_3->hi_ << (0x40 - bVar6 & 0x3f)) | (byte)(param_3->lo_ >> (bVar6 & 0x3f))
      ;
    }
  }
  else {
    bVar6 = (byte)(param_3->hi_ >> (bVar6 - 0x40 & 0x3f));
  }
  *param_2 = bVar6;
  iVar8 = iVar7;
  if ((param_3->lo_ == 0) && (param_3->hi_ == 0)) {
    iVar8 = *param_4;
  }
  *param_4 = *param_4 - iVar8;
  absl::lts_20240722::uint128::operator<<=(param_3,iVar7);
  return;
}

// FUN_1501e6790 @ 1501e6790

void FUN_1501e6790(int *param_1,undefined1 *param_2,ulonglong *param_3,int *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  byte bVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 2);
  uVar1 = *param_3;
  while ((uVar1 != 0 && (-1 < (longlong)uVar1))) {
    iVar3 = *param_1;
    if (*param_4 <= iVar3) {
      *param_3 = uVar1 >> ((char)iVar3 - (char)*param_4 & 0x3fU);
      *param_4 = iVar3;
      return;
    }
    *param_3 = uVar1 * 2;
    *param_4 = *param_4 + -1;
    uVar1 = *param_3;
  }
  bVar4 = (byte)uVar2;
  *param_2 = (char)(uVar1 >> (0x40 - bVar4 & 0x3f));
  iVar3 = (int)uVar2;
  if (*param_3 == 0) {
    iVar3 = *param_4;
  }
  *param_4 = *param_4 - iVar3;
  *param_3 = *param_3 << (bVar4 & 0x3f);
  return;
}

// FUN_1501e6810 @ 1501e6810

void FUN_1501e6810(char param_1,longlong param_2,byte *param_3,ulonglong *param_4,int *param_5)

{
  byte bVar1;
  char cVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  ulonglong local_res18 [2];
  ulonglong local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  ulonglong local_40;
  
  uVar7 = 0;
  local_res18[0] = 0x20;
  if (param_1 == '\0') {
LAB_1501e6aa3:
    lVar9 = uVar7 - 1;
LAB_1501e6aa6:
    if (param_1 == '\0') {
      return;
    }
    if (uVar7 == 0) {
      local_68 = 0;
      puVar3 = &local_68;
      uStack_60 = 0;
      goto LAB_1501e6a58;
    }
  }
  else {
    bVar1 = *param_3;
    puVar4 = (ulonglong *)(param_2 + 8);
    puVar3 = local_res18;
    if (0x20 < *puVar4) {
      puVar3 = puVar4;
    }
    uVar7 = *puVar3 - *puVar4;
    if (uVar7 == 0) goto LAB_1501e6aa3;
    lVar9 = uVar7 - 1;
    uVar8 = uVar7;
    puVar3 = (ulonglong *)FUN_1501e7b90(local_58,lVar9);
    iVar5 = (int)lVar9 * 4;
    uVar6 = param_4[1] & puVar3[1];
    if (iVar5 < 0x40) {
      if (iVar5 == 0) {
        local_68 = 8;
        uStack_60 = 0;
      }
      else {
        local_68 = 8L << ((byte)iVar5 & 0x3f);
        uStack_60 = (ulonglong)(8 >> ((char)lVar9 * -4 & 0x3fU));
      }
    }
    else {
      local_68 = 0;
      uStack_60 = 8L << ((byte)iVar5 - 0x40 & 0x3f);
    }
    local_40 = uStack_60;
    if (((*param_4 & *puVar3) == local_68) && (local_48 = local_68, uVar6 == uStack_60)) {
      if (uVar8 != 0x20) {
        local_68 = *param_4;
        uStack_60 = param_4[1];
        bVar1 = FUN_1501e74a0(&local_68,uVar8);
      }
      bVar10 = (bool)(bVar1 & 1);
    }
    else {
      local_48 = local_68;
      bVar10 = uStack_60 < uVar6;
      if (uStack_60 == uVar6) {
        bVar10 = local_68 < (*param_4 & *puVar3);
      }
      else {
      }
    }
    if (bVar10 == false) goto LAB_1501e6aa6;
    uVar8 = param_4[1];
    if (uVar7 < 0x20) {
      iVar5 = (int)uVar7 * 4;
      if (iVar5 < 0x40) {
        if (iVar5 == 0) {
          local_68 = 1;
          uStack_60 = 0;
        }
        else {
          local_68 = 1L << ((byte)iVar5 & 0x3f);
          uStack_60 = 1L >> ((char)uVar7 * -4 + 0x40U & 0x3f);
        }
      }
      else {
        local_68 = 0;
        uStack_60 = 1L << ((byte)iVar5 - 0x40 & 0x3f);
      }
    }
    else {
      local_68 = 0;
      uStack_60 = 0;
    }
    local_68 = *param_4 + local_68;
    local_40 = param_4[1];
    uStack_60 = uStack_60 + param_4[1];
    if (local_68 < *param_4) {
      uStack_60 = uStack_60 + 1;
    }
    *param_4 = local_68;
    *(undefined4 *)(param_4 + 1) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_4 + 0xc) = uStack_60._4_4_;
    if ((((longlong)uVar8 < 0) && (-1 < (longlong)uStack_60)) || (0x1f < uVar7)) {
      cVar2 = '\x01';
    }
    else {
      cVar2 = '\0';
    }
    *param_3 = *param_3 + cVar2;
    if (*param_3 < 0x10) goto LAB_1501e6aa6;
    *param_3 = 1;
    *param_4 = 0;
    param_4[1] = 0;
    *param_5 = *param_5 + 4;
  }
  puVar3 = (ulonglong *)FUN_1501e7b90(&local_48,lVar9);
LAB_1501e6a58:
  uVar7 = puVar3[1];
  *param_4 = *param_4 & ~*puVar3;
  param_4[1] = ~uVar7 & param_4[1];
  return;
}

// FUN_1501e6ad0 @ 1501e6ad0

void FUN_1501e6ad0(char param_1,longlong param_2,byte *param_3,ulonglong *param_4,int *param_5)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong local_res18 [2];
  
  local_res18[0] = 0x10;
  if (param_1 != '\0') {
    uVar10 = *param_4;
    plVar5 = local_res18;
    if (0x10 < *(ulonglong *)(param_2 + 8)) {
      plVar5 = (longlong *)(param_2 + 8);
    }
    uVar9 = *plVar5 - *(longlong *)(param_2 + 8);
    if (uVar9 != 0) {
      cVar1 = (char)uVar9;
      uVar6 = 0;
      if (0x10 < uVar9) {
        uVar6 = uVar9;
      }
      uVar8 = 8L << (cVar1 * '\x04' - 4U & 0x3f);
      uVar6 = 0xffffffffffffffffU >> (((char)uVar6 - cVar1 & 0xfU) << 2) & uVar10;
      if (uVar6 == uVar8) {
        if (uVar9 == 0x10) {
          bVar2 = *param_3;
        }
        else {
          bVar2 = (byte)((0xfL << (cVar1 * '\x04' & 0x3fU) & uVar10) >> (cVar1 * '\x04' & 0x3fU));
        }
        bVar3 = (bool)(bVar2 & 1);
      }
      else {
        bVar3 = uVar8 < uVar6;
      }
      if (bVar3 != false) {
        if (uVar9 < 0x10) {
          lVar7 = 1L << (cVar1 * '\x04' & 0x3fU);
        }
        else {
          lVar7 = 0;
        }
        *param_4 = uVar10 + lVar7;
        if ((((longlong)uVar10 < 0) && (-1 < (longlong)(uVar10 + lVar7))) || (0xf < uVar9)) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = '\0';
        }
        *param_3 = *param_3 + cVar4;
        if (0xf < *param_3) {
          *param_3 = 1;
          *param_4 = 0;
          *param_5 = *param_5 + 4;
        }
      }
      uVar10 = 0x10;
      if (0x10 < uVar9) {
        uVar10 = uVar9;
      }
      *param_4 = *param_4 & ~(0xffffffffffffffffU >> (((char)uVar10 - cVar1) * '\x04' & 0x3fU));
      return;
    }
    *param_4 = *param_4;
  }
  return;
}

// FUN_1501e6c20 @ 1501e6c20

void FUN_1501e6c20(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 local_res20;
  undefined8 **local_48;
  code *pcStack_40;
  undefined8 *local_38;
  code *pcStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_18;
  
  local_18 = (int)param_2;
  if (local_18 < 0) {
    if (local_18 < -0x80) {
      local_48 = (undefined8 **)*param_1;
      pcStack_40 = (code *)param_1[1];
      FUN_1501e9750(&local_48,-local_18);
      return;
    }
  }
  else {
    uVar3 = *param_1;
    uVar1 = param_1[1];
    if (uVar1 == 0) {
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        if (uVar3 != 0) {
          iVar4 = 0x3f - (int)lVar2;
        }
        else {
          iVar4 = 0x40;
        }
      }
      else {
        iVar4 = (int)LZCOUNT(uVar3);
      }
      iVar4 = iVar4 + 0x40;
    }
    else if (__isa_available < 5) {
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      if (uVar1 != 0) {
        iVar4 = 0x3f - (int)lVar2;
      }
      else {
        iVar4 = 0x40;
      }
    }
    else {
      iVar4 = (int)LZCOUNT(uVar1);
    }
    if (0x80 < (local_18 - iVar4) + 0x80) {
      local_28 = (undefined4)*param_1;
      uStack_24 = *(undefined4 *)((longlong)param_1 + 4);
      uStack_20 = (undefined4)param_1[1];
      uStack_1c = *(undefined4 *)((longlong)param_1 + 0xc);
      local_38 = &local_res20;
      local_48 = &local_38;
      pcStack_30 = FUN_1501e7930;
      pcStack_40 = FUN_1501e7970;
      local_res20 = param_3;
      FUN_1501ea290((longlong)
                    ((((int)(local_18 + 0x9f + (local_18 + 0x9f >> 0x1f & 0x1fU)) >> 5) * 0xb) / 10)
                    ,&local_48);
      return;
    }
  }
  local_48 = (undefined8 **)*param_1;
  pcStack_40 = (code *)param_1[1];
  FUN_1501e6eb0(&local_48,param_2,param_3);
  return;
}

// FUN_1501e6d80 @ 1501e6d80

void FUN_1501e6d80(ulonglong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_res20;
  undefined8 local_48;
  code *pcStack_40;
  undefined8 *local_38;
  code *pcStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_18;
  
  local_48._0_4_ = (undefined4)param_1;
  local_48._4_4_ = (undefined4)(param_1 >> 0x20);
  if (param_2 < 0) {
    if (param_2 < -0x80) {
      pcStack_40 = (code *)0x0;
      local_48 = (undefined8 **)param_1;
      FUN_1501e9750(&local_48,-param_2);
      return;
    }
  }
  else {
    if (__isa_available < 5) {
      lVar1 = 0x3f;
      if (param_1 != 0) {
        for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      if (param_1 != 0) {
        iVar2 = 0x3f - (int)lVar1;
      }
      else {
        iVar2 = 0x40;
      }
    }
    else {
      iVar2 = (int)LZCOUNT(param_1);
    }
    if (0x80 < (param_2 - iVar2) + 0x40) {
      local_38 = &local_res20;
      pcStack_30 = FUN_1501e7930;
      local_28 = (undefined4)local_48;
      uStack_24 = local_48._4_4_;
      uStack_20 = 0;
      uStack_1c = 0;
      pcStack_40 = FUN_1501e7970;
      local_res20 = param_3;
      local_48 = &local_38;
      local_18 = param_2;
      FUN_1501ea290((longlong)
                    ((((int)(param_2 + 0x9f + (param_2 + 0x9f >> 0x1f & 0x1fU)) >> 5) * 0xb) / 10),
                    &local_48);
      return;
    }
  }
  FUN_1501e71a0();
  return;
}

// FUN_1501e6eb0 @ 1501e6eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501e6eb0(ulonglong *param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte bVar8;
  undefined1 auStack_148 [32];
  char **local_128;
  char *local_118;
  ulonglong uStack_110;
  char *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_ce;
  undefined1 local_cd [133];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_ce = 0x2e;
  puVar6 = local_cd;
  bVar7 = (byte)param_2;
  if (param_2 < 0) {
    param_2 = -param_2;
    if (param_2 < 0x80) {
      bVar8 = (byte)param_2;
      if (param_2 < 0x40) {
        local_118 = (char *)(param_1[1] << (bVar7 + 0x40 & 0x3f) | *param_1 >> (bVar8 & 0x3f));
        uStack_110 = param_1[1] >> (bVar8 & 0x3f);
      }
      else {
        local_118 = (char *)(param_1[1] >> (bVar8 - 0x40 & 0x3f));
        uStack_110 = 0;
      }
    }
    else {
      local_118 = (char *)0x0;
      uStack_110 = 0;
    }
    pcVar5 = (char *)FUN_1501e9ed0(&local_118,&local_ce);
    local_118 = (char *)*param_1;
    uStack_110 = param_1[1];
    pcVar5[-1] = '0';
    puVar6 = (undefined1 *)FUN_1501e9d10(&local_118,local_cd,param_2,*(undefined8 *)(param_3 + 8));
    local_118 = pcVar5;
    if (pcVar5[-1] != '0') {
      local_118 = pcVar5 + -1;
    }
  }
  else {
    local_108 = (char *)*param_1;
    local_118 = (char *)*param_1;
    uStack_110 = param_1[1];
    uVar1 = param_1[1];
    if (uVar1 == 0) {
      if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (local_118 != (char *)0x0) {
          for (; (ulonglong)local_118 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        if (local_118 != (char *)0x0) {
          iVar4 = 0x3f - (int)lVar2;
        }
        else {
          iVar4 = 0x40;
        }
      }
      else {
        iVar4 = (int)LZCOUNT(local_118);
      }
      iVar4 = iVar4 + 0x40;
    }
    else if (__isa_available < 5) {
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      if (uVar1 != 0) {
        iVar4 = 0x3f - (int)lVar2;
      }
      else {
        iVar4 = 0x40;
      }
    }
    else {
      iVar4 = (int)LZCOUNT(uVar1);
    }
    if ((param_2 - iVar4) + 0x80 < 0x41) {
      local_118 = (char *)FUN_1501ea020(*param_1 << (bVar7 & 0x3f),&local_ce);
    }
    else {
      if (param_2 < 0x40) {
        if (param_2 != 0) {
          local_118 = (char *)(*param_1 << (bVar7 & 0x3f));
          uStack_110 = *param_1 >> (0x40 - bVar7 & 0x3f) | param_1[1] << (bVar7 & 0x3f);
        }
      }
      else {
        uStack_110 = *param_1 << (bVar7 - 0x40 & 0x3f);
        local_118 = (char *)0x0;
      }
      local_118 = (char *)FUN_1501e9ed0(&local_118,&local_ce);
    }
  }
  if ((*(longlong *)(param_3 + 8) == 0) && ((*(byte *)(*(longlong *)(param_3 + 0x10) + 1) & 8) == 0)
     ) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uStack_110 = ((longlong)puVar6 - (longlong)local_118) + -1;
  if (bVar3) {
    uStack_110 = (longlong)puVar6 - (longlong)local_118;
  }
  local_108 = "";
  uStack_100 = 0;
  uStack_fc = 0;
  local_128 = &local_108;
  FUN_1501e9390(param_3,&local_118,0,local_cd + (*(longlong *)(param_3 + 8) - (longlong)puVar6));
  return;
}

// FUN_1501e71a0 @ 1501e71a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501e71a0(char *param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  int iVar4;
  char *pcVar5;
  byte bVar6;
  char *pcVar7;
  ulonglong uVar8;
  char *pcVar9;
  char *pcVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  char *local_118;
  ulonglong uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  char local_d0 [136];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_d0[2] = 0x2e;
  pcVar9 = local_d0 + 3;
  bVar6 = (byte)param_2;
  local_118 = param_1;
  if (param_2 < 0) {
    param_2 = -param_2;
    pcVar5 = local_d0 + 2;
    uVar12 = (ulonglong)param_1 >> ((byte)param_2 & 0x3f);
    if (0x3f < param_2) {
      uVar12 = 0;
    }
    do {
      pcVar10 = pcVar5;
      pcVar5 = pcVar10 + -1;
      uVar8 = (uVar12 % 10) / 10;
      uVar1 = uVar8 + uVar12 / 10;
      *pcVar5 = (char)(uVar12 % 10) + (char)uVar8 * -10 + '0';
      uVar12 = uVar1;
    } while (uVar1 != 0);
    lVar11 = *(longlong *)(param_3 + 8);
    pcVar10[-2] = '0';
    if (param_2 < 0x41) {
      pcVar9 = local_d0 + 3;
      uVar12 = (longlong)param_1 << (bVar6 + 0x40 & 0x3f);
      for (; lVar11 != 0; lVar11 = lVar11 + -1) {
        if (uVar12 == 0) goto LAB_1501e73d3;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar12;
        uVar12 = SUB168(auVar3 * ZEXT416(10),0);
        *pcVar9 = SUB161(auVar3 * ZEXT416(10),8) + '0';
        pcVar9 = pcVar9 + 1;
      }
      if (0x7fffffffffffffff < uVar12) {
        pcVar7 = pcVar9;
        if (uVar12 < 0x8000000000000001) {
          FUN_1501ea130();
        }
        else {
          do {
            while( true ) {
              pcVar7 = pcVar7 + -1;
              cVar2 = *pcVar7;
              if (cVar2 != '9') break;
              *pcVar7 = '0';
            }
          } while (cVar2 == '.');
          *pcVar7 = cVar2 + '\x01';
        }
      }
    }
    else {
      uStack_110 = 0;
      pcVar9 = (char *)FUN_1501e9d10(&local_118,local_d0 + 3,param_2,lVar11);
    }
LAB_1501e73d3:
    if (pcVar10[-2] != '0') {
      pcVar5 = pcVar10 + -2;
    }
  }
  else {
    if (__isa_available < 5) {
      lVar11 = 0x3f;
      if (param_1 != (char *)0x0) {
        for (; (ulonglong)param_1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      if (param_1 != (char *)0x0) {
        iVar4 = 0x3f - (int)lVar11;
      }
      else {
        iVar4 = 0x40;
      }
    }
    else {
      iVar4 = (int)LZCOUNT(param_1);
    }
    if ((param_2 - iVar4) + 0x40 < 0x41) {
      pcVar5 = (char *)FUN_1501ea020((longlong)param_1 << (bVar6 & 0x3f),local_d0 + 2);
    }
    else {
      if (param_2 < 0x40) {
        if (param_2 == 0) {
          uStack_110 = 0;
        }
        else {
          local_118 = (char *)((longlong)param_1 << (bVar6 & 0x3f));
          uStack_110 = (ulonglong)param_1 >> (0x40 - bVar6 & 0x3f);
        }
      }
      else {
        local_118 = (char *)0x0;
        uStack_110 = (longlong)param_1 << (bVar6 - 0x40 & 0x3f);
      }
      pcVar5 = (char *)FUN_1501e9ed0(&local_118,local_d0 + 2);
    }
  }
  uStack_110 = (longlong)pcVar9 - (longlong)pcVar5;
  if ((*(longlong *)(param_3 + 8) == 0) && ((*(byte *)(*(longlong *)(param_3 + 0x10) + 1) & 8) == 0)
     ) {
    uStack_110 = uStack_110 + -1;
  }
  local_128 = &local_108;
  local_108 = 0x5060d4b2;
  uStack_104 = 1;
  uStack_100 = 0;
  uStack_fc = 0;
  local_118 = pcVar5;
  FUN_1501e9390(param_3,&local_118,0,local_d0 + (*(longlong *)(param_3 + 8) - (longlong)pcVar9) + 3)
  ;
  return;
}

// GetData<absl::lts_20240722::Span<unsigned_int>_> @ 1501e7480

/* unsigned int * __ptr64 __cdecl absl::lts_20240722::span_internal::GetData<class
   absl::lts_20240722::Span<unsigned int> >(class absl::lts_20240722::Span<unsigned int> & __ptr64)
    */

uint * __cdecl
absl::lts_20240722::span_internal::GetData<absl::lts_20240722::Span<unsigned_int>_>
          (Span<unsigned_int> *param_1)

{
  return *(uint **)param_1;
}

// GetDataImpl<absl::lts_20240722::Span<unsigned_int>_> @ 1501e7490

/* unsigned int * __ptr64 __cdecl absl::lts_20240722::span_internal::GetDataImpl<class
   absl::lts_20240722::Span<unsigned int> >(class absl::lts_20240722::Span<unsigned int> &
   __ptr64,char) */

uint * __cdecl
absl::lts_20240722::span_internal::GetDataImpl<absl::lts_20240722::Span<unsigned_int>_>
          (Span<unsigned_int> *param_1,char param_2)

{
  return *(uint **)param_1;
}

// FUN_1501e74a0 @ 1501e74a0

ulonglong FUN_1501e74a0(ulonglong *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulonglong local_18;
  ulonglong uStack_10;
  
  iVar3 = param_2 * 4;
  bVar1 = (char)param_2 * -4 + 0x40;
  bVar2 = (byte)iVar3;
  if (iVar3 < 0x40) {
    if (iVar3 == 0) {
      local_18 = 0xf;
      uStack_10 = 0;
    }
    else {
      local_18 = 0xfL << (bVar2 & 0x3f);
      uStack_10 = (ulonglong)(0xf >> (bVar1 & 0x3f));
    }
  }
  else {
    local_18 = 0;
    uStack_10 = 0xfL << (bVar2 - 0x40 & 0x3f);
  }
  *param_1 = *param_1 & local_18;
  uStack_10 = param_1[1] & uStack_10;
  param_1[1] = uStack_10;
  if (iVar3 < 0x40) {
    if (iVar3 == 0) {
      local_18 = *param_1;
    }
    else {
      local_18 = uStack_10 << (bVar1 & 0x3f) | *param_1 >> (bVar2 & 0x3f);
    }
    return local_18 & 0xffffffffffffff0f;
  }
  return uStack_10 >> (bVar2 - 0x40 & 0x3f) & 0xffffffffffffff0f;
}

// FUN_1501e7610 @ 1501e7610

ulonglong FUN_1501e7610(ulonglong *param_1,longlong param_2,byte param_3)

{
  int iVar1;
  ulonglong in_RAX;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  bool bVar5;
  ulonglong local_28;
  ulonglong uStack_20;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar2 = (ulonglong *)FUN_1501e7b90(&local_28,param_2 + -1);
  iVar1 = (int)param_2 * 4;
  iVar4 = iVar1 + -4;
  uVar3 = param_1[1] & puVar2[1];
  if (iVar4 < 0x40) {
    if (iVar4 == 0) {
      local_28 = 8;
      uStack_20 = 0;
    }
    else {
      local_28 = 8L << ((byte)iVar4 & 0x3f);
      uStack_20 = (ulonglong)(8 >> (0x40 - (byte)iVar4 & 0x3f));
    }
  }
  else {
    local_28 = 0;
    uStack_20 = 8L << ((char)iVar1 + 0xbcU & 0x3f);
  }
  if (((*param_1 & *puVar2) == local_28) && (uVar3 == uStack_20)) {
    if (param_2 != 0x20) {
      local_28 = *param_1;
      uStack_20 = param_1[1];
      param_3 = FUN_1501e74a0(&local_28,param_2);
    }
    return (ulonglong)(param_3 & 1);
  }
  bVar5 = uStack_20 < uVar3;
  if (uStack_20 == uVar3) {
    bVar5 = local_28 < (*param_1 & *puVar2);
  }
  return (ulonglong)bVar5;
}

// FUN_1501e77b0 @ 1501e77b0

undefined8 FUN_1501e77b0(ulonglong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong local_18;
  ulonglong uStack_10;
  
  uVar1 = param_2[1];
  if (param_1 < 0x20) {
    iVar2 = (int)param_1 * 4;
    if (iVar2 < 0x40) {
      if (iVar2 == 0) {
        local_18 = 1;
        uStack_10 = 0;
      }
      else {
        local_18 = 1L << ((byte)iVar2 & 0x3f);
        uStack_10 = 1L >> ((char)param_1 * -4 + 0x40U & 0x3f);
      }
    }
    else {
      uStack_10 = 1L << ((byte)iVar2 - 0x40 & 0x3f);
      local_18 = 0;
    }
  }
  else {
    local_18 = 0;
    uStack_10 = 0;
  }
  uStack_10 = uStack_10 + param_2[1];
  if (*param_2 + local_18 < *param_2) {
    uStack_10 = uStack_10 + 1;
  }
  *param_2 = *param_2 + local_18;
  param_2[1] = uStack_10;
  if (((-1 < (longlong)uVar1) || ((longlong)uStack_10 < 0)) && (param_1 < 0x20)) {
    return 0;
  }
  return 1;
}

// FUN_1501e7900 @ 1501e7900

void FUN_1501e7900(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  FUN_1501e8990(local_28,&local_28);
  return;
}

// FUN_1501e7930 @ 1501e7930

void FUN_1501e7930(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_38 = param_2[2];
  uStack_30 = param_2[3];
  local_28 = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_20 = *(undefined4 *)(param_2 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_18 = param_2[6];
  FUN_1501e8d10(local_28,&local_48);
  return;
}

// FUN_1501e7970 @ 1501e7970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501e7970(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = *(undefined4 *)(param_1 + 2);
  uStack_a4 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_a0 = *(undefined4 *)(param_1 + 3);
  uStack_9c = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  puVar1 = (undefined8 *)FUN_1501e8510(local_48,&local_98,&local_a8,*(undefined4 *)(param_1 + 4));
  local_88 = *puVar1;
  uStack_80 = puVar1[1];
  local_78 = puVar1[2];
  uStack_70 = puVar1[3];
  local_68 = *(undefined4 *)(puVar1 + 4);
  uStack_64 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uStack_60 = *(undefined4 *)(puVar1 + 5);
  uStack_5c = *(undefined4 *)((longlong)puVar1 + 0x2c);
  local_58 = puVar1[6];
  (*(code *)param_1[1])(*param_1,&local_88);
  return;
}

// FUN_1501e7a10 @ 1501e7a10

void FUN_1501e7a10(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  local_68 = *(undefined4 *)(param_1 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_60 = *(undefined4 *)(param_1 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  puVar1 = (undefined4 *)FUN_1501e8730(local_28,&local_58,&local_68,*(undefined4 *)(param_1 + 4));
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  local_38 = puVar1[4];
  uStack_34 = puVar1[5];
  uStack_30 = puVar1[6];
  uStack_2c = puVar1[7];
  (*(code *)param_1[1])(*param_1,&local_48);
  return;
}

// MakeSpan<unsigned_int,256> @ 1501e7a70

/* class absl::lts_20240722::Span<unsigned int> __cdecl absl::lts_20240722::MakeSpan<unsigned
   int,256>(unsigned int (& __ptr64)[256]) */

uint * __cdecl absl::lts_20240722::MakeSpan<unsigned_int,256>(uint *param_1)

{
  undefined8 in_RDX;
  
  *(undefined8 *)param_1 = in_RDX;
  param_1[2] = 0x100;
  param_1[3] = 0;
  return param_1;
}

// MakeSpan<unsigned_int,384> @ 1501e7a90

/* class absl::lts_20240722::Span<unsigned int> __cdecl absl::lts_20240722::MakeSpan<unsigned
   int,384>(unsigned int (& __ptr64)[384]) */

uint * __cdecl absl::lts_20240722::MakeSpan<unsigned_int,384>(uint *param_1)

{
  undefined8 in_RDX;
  
  *(undefined8 *)param_1 = in_RDX;
  param_1[2] = 0x180;
  param_1[3] = 0;
  return param_1;
}

// MakeSpan<unsigned_int,512> @ 1501e7ab0

/* class absl::lts_20240722::Span<unsigned int> __cdecl absl::lts_20240722::MakeSpan<unsigned
   int,512>(unsigned int (& __ptr64)[512]) */

uint * __cdecl absl::lts_20240722::MakeSpan<unsigned_int,512>(uint *param_1)

{
  undefined8 in_RDX;
  
  *(undefined8 *)param_1 = in_RDX;
  param_1[2] = 0x200;
  param_1[3] = 0;
  return param_1;
}

// MakeSpan<unsigned_int,640> @ 1501e7ad0

/* class absl::lts_20240722::Span<unsigned int> __cdecl absl::lts_20240722::MakeSpan<unsigned
   int,640>(unsigned int (& __ptr64)[640]) */

uint * __cdecl absl::lts_20240722::MakeSpan<unsigned_int,640>(uint *param_1)

{
  undefined8 in_RDX;
  
  *(undefined8 *)param_1 = in_RDX;
  param_1[2] = 0x280;
  param_1[3] = 0;
  return param_1;
}

// MakeSpan<unsigned_int,128> @ 1501e7af0

/* class absl::lts_20240722::Span<unsigned int> __cdecl absl::lts_20240722::MakeSpan<unsigned
   int,128>(unsigned int (& __ptr64)[128]) */

uint * __cdecl absl::lts_20240722::MakeSpan<unsigned_int,128>(uint *param_1)

{
  undefined8 in_RDX;
  
  *(undefined8 *)param_1 = in_RDX;
  param_1[2] = 0x80;
  param_1[3] = 0;
  return param_1;
}

// FUN_1501e7b10 @ 1501e7b10

undefined8 * FUN_1501e7b10(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [24];
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  puVar2 = (undefined8 *)FUN_1501e7b90(local_18,param_2 + -1);
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}

// FUN_1501e7b90 @ 1501e7b90

ulonglong * FUN_1501e7b90(ulonglong *param_1,longlong param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  ulonglong local_18;
  ulonglong uStack_10;
  
  iVar3 = (int)(param_2 + 1U);
  iVar1 = 0x20;
  if (0x20 < param_2 + 1U) {
    iVar1 = iVar3;
  }
  iVar1 = iVar1 - iVar3;
  iVar3 = iVar1 * 4;
  bVar2 = (byte)iVar3;
  if (0x3f < iVar3) {
    *param_1 = DAT_154e47288 >> (bVar2 - 0x40 & 0x3f);
    param_1[1] = 0;
    return param_1;
  }
  if (iVar3 == 0) {
    local_18 = DAT_154e47280;
    uStack_10 = DAT_154e47288;
  }
  else {
    local_18 = DAT_154e47288 << ((char)iVar1 * -4 + 0x40U & 0x3f) | DAT_154e47280 >> (bVar2 & 0x3f);
    uStack_10 = DAT_154e47288 >> (bVar2 & 0x3f);
  }
  *param_1 = local_18;
  param_1[1] = uStack_10;
  return param_1;
}

// FUN_1501e7c80 @ 1501e7c80

ulonglong * FUN_1501e7c80(ulonglong *param_1,byte param_2,int param_3)

{
  byte bVar1;
  ulonglong local_18;
  ulonglong uStack_10;
  
  param_3 = param_3 * 4;
  local_18 = (ulonglong)param_2;
  bVar1 = (byte)param_3;
  if (0x3f < param_3) {
    *param_1 = 0;
    param_1[1] = local_18 << (bVar1 - 0x40 & 0x3f);
    return param_1;
  }
  if (param_3 == 0) {
    uStack_10 = 0;
  }
  else {
    local_18 = local_18 << (bVar1 & 0x3f);
    uStack_10 = (ulonglong)(param_2 >> (0x40 - bVar1 & 0x3f));
  }
  *param_1 = local_18;
  param_1[1] = uStack_10;
  return param_1;
}

// FUN_1501e7d60 @ 1501e7d60

longlong FUN_1501e7d60(ulonglong *param_1,char param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_1;
  uVar4 = SUB168(auVar3 * ZEXT816(10),0);
  uVar1 = (longlong)param_2 + uVar4;
  lVar2 = ((longlong)param_2 >> 0x3f) + SUB168(auVar3 * ZEXT816(10),8);
  if (uVar1 < uVar4) {
    *param_1 = uVar1;
    return lVar2 + 1;
  }
  *param_1 = uVar1;
  return lVar2;
}

// FUN_1501e7dd0 @ 1501e7dd0

longlong FUN_1501e7dd0(ulonglong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  do {
    *(longlong *)(param_2 + 0x58) = *(longlong *)(param_2 + 0x58) + -1;
    uVar4 = param_1 / 10;
    **(char **)(param_2 + 0x58) = (char)param_1 + (char)uVar4 * -10 + '0';
    param_1 = uVar4;
  } while (uVar4 != 0);
  puVar2 = *(undefined1 **)(param_2 + 0x58);
  lVar3 = *(longlong *)(param_2 + 0x60);
  uVar1 = *puVar2;
  *(undefined1 **)(param_2 + 0x58) = puVar2 + -1;
  puVar2[-1] = uVar1;
  *(undefined1 *)(*(longlong *)(param_2 + 0x58) + 1) = 0x2e;
  return lVar3 - (longlong)puVar2;
}

// FUN_1501e7ea0 @ 1501e7ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501e7ea0(undefined8 *param_1)

{
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined8 uStack_220;
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_248;
  memset(local_218,0,0x200);
  local_228 = local_218;
  uStack_220 = 0x80;
  (*(code *)param_1[1])(*param_1,&local_228);
  return;
}

// FUN_1501e7f20 @ 1501e7f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501e7f20(undefined8 *param_1)

{
  undefined1 auStack_448 [32];
  undefined1 *local_428;
  undefined8 uStack_420;
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_448;
  memset(local_418,0,0x400);
  local_428 = local_418;
  uStack_420 = 0x100;
  (*(code *)param_1[1])(*param_1,&local_428);
  return;
}

// FUN_1501e7fa0 @ 1501e7fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501e7fa0(undefined8 *param_1)

{
  undefined1 auStack_648 [32];
  undefined1 *local_628;
  undefined8 uStack_620;
  undefined1 local_618 [1536];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_648;
  memset(local_618,0,0x600);
  local_628 = local_618;
  uStack_620 = 0x180;
  (*(code *)param_1[1])(*param_1,&local_628);
  return;
}

// FUN_1501e8020 @ 1501e8020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501e8020(undefined8 *param_1)

{
  undefined1 auStack_848 [32];
  undefined1 *local_828;
  undefined8 uStack_820;
  undefined1 local_818 [2048];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_848;
  memset(local_818,0,0x800);
  local_828 = local_818;
  uStack_820 = 0x200;
  (*(code *)param_1[1])(*param_1,&local_828);
  return;
}

// FUN_1501e80a0 @ 1501e80a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501e80a0(undefined8 *param_1)

{
  undefined1 auStack_a48 [32];
  undefined1 *local_a28;
  undefined8 uStack_a20;
  undefined1 local_a18 [2560];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a48;
  memset(local_a18,0,0xa00);
  local_a28 = local_a18;
  uStack_a20 = 0x280;
  (*(code *)param_1[1])(*param_1,&local_a28);
  return;
}

// _Get_unwrapped<char*___ptr64&___ptr64> @ 1501e8120

/* UNKNOWN __cdecl std::_Get_unwrapped<char * __ptr64 & __ptr64>(char * __ptr64 & __ptr64) */

char * __cdecl std::_Get_unwrapped<char*___ptr64&___ptr64>(char **param_1)

{
  return *param_1;
}

// _Get_unwrapped_n<char*___ptr64&___ptr64,int> @ 1501e8130

/* UNKNOWN __cdecl std::_Get_unwrapped_n<char * __ptr64 & __ptr64,int>(char * __ptr64 & __ptr64,int)
    */

char * __cdecl std::_Get_unwrapped_n<char*___ptr64&___ptr64,int>(char **param_1,int param_2)

{
  return *param_1;
}

// _Get_unwrapped_n<char_const*___ptr64&___ptr64,int> @ 1501e8140

/* UNKNOWN __cdecl std::_Get_unwrapped_n<char const * __ptr64 & __ptr64,int>(char const * __ptr64 &
   __ptr64,int) */

char * __cdecl std::_Get_unwrapped_n<char_const*___ptr64&___ptr64,int>(char **param_1,int param_2)

{
  return *param_1;
}

// copy_n<char_const*___ptr64,int,char*___ptr64> @ 1501e8170

/* char * __ptr64 __cdecl std::copy_n<char const * __ptr64,int,char * __ptr64>(char const *
   __ptr64,int,char * __ptr64) */

char * __cdecl
std::copy_n<char_const*___ptr64,int,char*___ptr64>(char *param_1,int param_2,char *param_3)

{
  if (0 < param_2) {
    memmove(param_3,param_1,(longlong)param_2);
    return param_3 + param_2;
  }
  return param_3;
}

// forward<absl::lts_20240722::Span<unsigned_int>_> @ 1501e81c0

/* class absl::lts_20240722::Span<unsigned int> && __ptr64 __cdecl std::forward<class
   absl::lts_20240722::Span<unsigned int> >(class absl::lts_20240722::Span<unsigned int> & __ptr64)
    */

Span<unsigned_int> * __cdecl
std::forward<absl::lts_20240722::Span<unsigned_int>_>(Span<unsigned_int> *param_1)

{
  return param_1;
}

// FUN_1501e81f0 @ 1501e81f0

void FUN_1501e81f0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  FUN_1501e8990(local_28,&local_28);
  return;
}

// FUN_1501e8220 @ 1501e8220

void FUN_1501e8220(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_38 = param_2[2];
  uStack_30 = param_2[3];
  local_28 = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_20 = *(undefined4 *)(param_2 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_18 = param_2[6];
  FUN_1501e8d10(local_28,&local_48);
  return;
}

// FUN_1501e8260 @ 1501e8260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501e8260(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = *(undefined4 *)(param_1 + 2);
  uStack_a4 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_a0 = *(undefined4 *)(param_1 + 3);
  uStack_9c = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  puVar1 = (undefined8 *)FUN_1501e8510(local_48,&local_98,&local_a8,*(undefined4 *)(param_1 + 4));
  local_88 = *puVar1;
  uStack_80 = puVar1[1];
  local_78 = puVar1[2];
  uStack_70 = puVar1[3];
  local_68 = *(undefined4 *)(puVar1 + 4);
  uStack_64 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uStack_60 = *(undefined4 *)(puVar1 + 5);
  uStack_5c = *(undefined4 *)((longlong)puVar1 + 0x2c);
  local_58 = puVar1[6];
  (*(code *)param_1[1])(*param_1,&local_88);
  return;
}

// FUN_1501e8300 @ 1501e8300

void FUN_1501e8300(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  local_68 = *(undefined4 *)(param_1 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_60 = *(undefined4 *)(param_1 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  puVar1 = (undefined4 *)FUN_1501e8730(local_28,&local_58,&local_68,*(undefined4 *)(param_1 + 4));
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  local_38 = puVar1[4];
  uStack_34 = puVar1[5];
  uStack_30 = puVar1[6];
  uStack_2c = puVar1[7];
  (*(code *)param_1[1])(*param_1,&local_48);
  return;
}

// isinf<double> @ 1501e8360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool __cdecl isinf<double>(double) */

bool __cdecl isinf<double>(double param_1)

{
  return ___xmm_7ff00000000000007ff0000000000000 <=
         (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(param_1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
}

// isinf<long_double> @ 1501e8380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool __cdecl isinf<long double>(long double) */

bool __cdecl isinf<long_double>(longdouble param_1)

{
  return ___xmm_7ff00000000000007ff0000000000000 <=
         (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(param_1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
}

// isnan<long_double> @ 1501e83a0

/* bool __cdecl isnan<long double>(long double) */

bool __cdecl isnan<long_double>(longdouble param_1)

{
  return NAN((double)param_1);
}

// reverse<char*___ptr64> @ 1501e83b0

/* void __cdecl std::reverse<char * __ptr64>(char * __ptr64 const,char * __ptr64 const) */

void __cdecl std::reverse<char*___ptr64>(char *param_1,char *param_2)

{
  __std_reverse_trivially_swappable_1(param_1,param_2);
  return;
}

// rotate<char*___ptr64> @ 1501e83c0

/* char * __ptr64 __cdecl std::rotate<char * __ptr64>(char * __ptr64,char * __ptr64,char * __ptr64)
    */

char * __cdecl std::rotate<char*___ptr64>(char *param_1,char *param_2,char *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  if (param_2 == param_3) {
    return param_1;
  }
  __std_reverse_trivially_swappable_1(param_1,param_2);
  __std_reverse_trivially_swappable_1(param_2,param_3);
  __std_reverse_trivially_swappable_1(param_1,param_3);
  return param_3 + ((longlong)param_1 - (longlong)param_2);
}

// FUN_1501e8510 @ 1501e8510

longlong * FUN_1501e8510(longlong *param_1,longlong *param_2,uint128 *param_3,int param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = param_2[1];
  lVar10 = *param_2;
  param_1[4] = 0;
  param_1[6] = lVar9;
  param_1[5] = lVar10;
  uVar8 = param_4 >> 0x1f & 0x1f;
  uVar3 = param_4 + uVar8;
  iVar4 = (uVar3 & 0x1f) - uVar8;
  lVar9 = (longlong)(((int)uVar3 >> 5) + 1);
  lVar6 = (longlong)((((int)(param_4 + 0x9f + (param_4 + 0x9f >> 0x1f & 0x1fU)) >> 5) * 0xb) / 10);
  param_1[1] = lVar6;
  *param_1 = lVar6;
  if (iVar4 < 0x40) {
    if (iVar4 == 0) {
      uVar5 = (undefined4)param_3->lo_;
    }
    else {
      uVar5 = (undefined4)(param_3->lo_ << ((byte)iVar4 & 0x3f));
    }
  }
  else {
    uVar5 = 0;
  }
  *(undefined4 *)(lVar10 + -4 + lVar9 * 4) = uVar5;
  absl::lts_20240722::uint128::operator>>=(param_3,0x20 - iVar4);
  bVar2 = absl::lts_20240722::uint128::operator_bool(param_3);
  if (bVar2) {
    do {
      lVar9 = lVar9 + 1;
      *(int *)(param_1[5] + -4 + lVar9 * 4) = (int)param_3->lo_;
      param_3->lo_ = param_3->hi_ << 0x20 | param_3->lo_ >> 0x20;
      param_3->hi_ = param_3->hi_ >> 0x20;
      bVar2 = absl::lts_20240722::uint128::operator_bool(param_3);
    } while (bVar2);
  }
  while (lVar9 != 0) {
    uVar7 = 0;
    lVar10 = lVar9;
    do {
      uVar7 = (uVar7 << 0x20) + (ulonglong)*(uint *)(param_1[5] + -4 + lVar10 * 4);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar7;
      lVar6 = SUB168(ZEXT816(0x12e0be826d694b2f) * auVar1,8);
      iVar4 = (int)((uVar7 - lVar6 >> 1) + lVar6 >> 0x1d);
      *(int *)(param_1[5] + lVar10 * 4 + -4) = iVar4;
      uVar3 = (int)uVar7 + iVar4 * -1000000000;
      uVar7 = (ulonglong)uVar3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    lVar10 = lVar9 + -1;
    if (*(int *)(param_1[5] + -4 + lVar9 * 4) != 0) {
      lVar10 = lVar9;
    }
    *param_1 = *param_1 + -1;
    *(uint *)(param_1[5] + *param_1 * 4) = uVar3;
    lVar9 = lVar10;
  }
  lVar9 = *param_1;
  *param_1 = lVar9 + 1;
  for (uVar3 = *(uint *)(param_1[5] + lVar9 * 4); uVar3 != 0; uVar3 = (uint)((ulonglong)uVar3 / 10))
  {
    param_1[4] = param_1[4] + 1;
    *(char *)((longlong)param_1 + (0x19 - param_1[4])) =
         (char)uVar3 + (char)((ulonglong)uVar3 / 10) * -10 + '0';
  }
  return param_1;
}

// FUN_1501e8730 @ 1501e8730

undefined1 * FUN_1501e8730(undefined1 *param_1,longlong *param_2,uint128 *param_3,int param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  uVar8 = param_4 >> 0x1f & 0x1f;
  uVar4 = param_4 + uVar8;
  iVar5 = (uVar4 & 0x1f) - uVar8;
  iVar9 = 0x20 - iVar5;
  lVar10 = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(param_1 + 8) = (longlong)(((int)uVar4 >> 5) + 1);
  *(longlong *)(param_1 + 0x10) = lVar10;
  *(longlong *)(param_1 + 0x18) = lVar2;
  if (iVar9 < 0x40) {
    if (iVar9 == 0) {
      uVar7 = (undefined4)param_3->lo_;
    }
    else {
      uVar7 = (undefined4)(param_3->lo_ << ((byte)iVar9 & 0x3f));
    }
  }
  else {
    uVar7 = 0;
  }
  *(undefined4 *)(lVar10 + -4 + *(longlong *)(param_1 + 8) * 4) = uVar7;
  absl::lts_20240722::uint128::operator>>=(param_3,iVar5);
  lVar10 = *(longlong *)(param_1 + 8);
  bVar3 = absl::lts_20240722::uint128::operator_bool(param_3);
  if (bVar3) {
    lVar10 = lVar10 * 4 + -4;
    do {
      lVar10 = lVar10 + -4;
      *(int *)(lVar10 + *(longlong *)(param_1 + 0x10)) = (int)param_3->lo_;
      param_3->lo_ = param_3->hi_ << 0x20 | param_3->lo_ >> 0x20;
      param_3->hi_ = param_3->hi_ >> 0x20;
      bVar3 = absl::lts_20240722::uint128::operator_bool(param_3);
    } while (bVar3);
  }
  lVar10 = *(longlong *)(param_1 + 8);
  if (lVar10 != 0) {
    uVar6 = 0;
    do {
      uVar1 = (longlong)(char)uVar6 +
              (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x10) + -4 + lVar10 * 4) * 10;
      *(int *)(*(longlong *)(param_1 + 0x10) + lVar10 * 4 + -4) = (int)uVar1;
      uVar6 = uVar1 >> 0x20;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    if (*(int *)(*(longlong *)(param_1 + 0x10) + -4 + *(longlong *)(param_1 + 8) * 4) == 0) {
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -1;
    }
    *param_1 = (char)(uVar1 >> 0x20);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

// operator! @ 1501e88d0

/* bool __cdecl absl::lts_20240722::operator!(class absl::lts_20240722::uint128) */

bool __cdecl absl::lts_20240722::operator!(uint128 *param_1)

{
  if ((param_1->hi_ == 0) && (param_1->lo_ == 0)) {
    return true;
  }
  return false;
}

// operator_unsigned_char @ 1501e88f0

/* public: __cdecl absl::lts_20240722::uint128::operator unsigned char(void)const __ptr64 */

uchar __thiscall absl::lts_20240722::uint128::operator_unsigned_char(uint128 *this)

{
  return (uchar)this->lo_;
}

// FUN_1501e8990 @ 1501e8990

void FUN_1501e8990(longlong *param_1,byte *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  size_t sVar11;
  uint *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *local_48;
  longlong local_40;
  undefined8 *local_38;
  longlong local_30;
  
  if (*(longlong *)(*param_1 + 8) == 0) {
    return;
  }
  lVar7 = *(longlong *)param_1[1];
  do {
    if (lVar7 == 0) {
      return;
    }
    cVar3 = FUN_1501e9b30(param_2);
    if (cVar3 == '\0') {
      return;
    }
    lVar7 = *(longlong *)(param_2 + 8);
    uVar14 = 0;
    bVar2 = *param_2;
    uVar9 = 0;
    bVar4 = 0;
    if (lVar7 == 0) {
      *param_2 = 0;
    }
    else {
      puVar12 = (uint *)(*(longlong *)(param_2 + 0x10) + -4 + lVar7 * 4);
      lVar13 = lVar7;
      do {
        uVar1 = (longlong)(char)uVar9 + (ulonglong)*puVar12 * 10;
        *puVar12 = (uint)uVar1;
        uVar9 = uVar1 >> 0x20;
        bVar4 = (byte)(uVar1 >> 0x20);
        lVar13 = lVar13 + -1;
        puVar12 = puVar12 + -1;
      } while (lVar13 != 0);
      if (*(int *)(*(longlong *)(param_2 + 0x10) + -4 + lVar7 * 4) == 0) {
        lVar7 = lVar7 + -1;
        *(longlong *)(param_2 + 8) = lVar7;
      }
      *param_2 = bVar4;
      while (bVar4 == 9) {
        uVar14 = uVar14 + 1;
        uVar9 = 0;
        bVar4 = 0;
        if (lVar7 == 0) {
          lVar7 = 0;
          *param_2 = 0;
          break;
        }
        puVar12 = (uint *)(*(longlong *)(param_2 + 0x10) + -4 + lVar7 * 4);
        lVar13 = lVar7;
        do {
          uVar1 = (longlong)(char)uVar9 + (ulonglong)*puVar12 * 10;
          *puVar12 = (uint)uVar1;
          uVar9 = uVar1 >> 0x20;
          bVar4 = (byte)(uVar1 >> 0x20);
          lVar13 = lVar13 + -1;
          puVar12 = puVar12 + -1;
        } while (lVar13 != 0);
        if (*(int *)(*(longlong *)(param_2 + 0x10) + -4 + lVar7 * 4) == 0) {
          lVar7 = lVar7 + -1;
          *(longlong *)(param_2 + 8) = lVar7;
        }
        *param_2 = bVar4;
      }
    }
    if (*(ulonglong *)param_1[1] <= uVar14 + 1) {
      if ((uVar14 + 1 <= *(ulonglong *)param_1[1]) && (bVar4 < 6)) {
        if (bVar4 != 5) {
LAB_1501e8c74:
          absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
                    (*(FormatSinkImpl **)(*param_1 + 0x18),1,bVar2 + 0x30);
          absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
                    (*(FormatSinkImpl **)(*param_1 + 0x18),*(longlong *)param_1[1] - 1,'9');
          *(undefined8 *)param_1[1] = 0;
          return;
        }
        if ((lVar7 == 0) && (uVar14 == 0)) {
          uVar5 = (int)(char)bVar2 & 0x80000001;
          if ((int)uVar5 < 0) {
            uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
          }
          if (uVar5 != 1) goto LAB_1501e8c74;
        }
      }
      absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
                (*(FormatSinkImpl **)(*param_1 + 0x18),1,bVar2 + 0x31);
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + -1;
      return;
    }
    uVar9 = 1;
    puVar10 = *(undefined8 **)(*param_1 + 0x18);
    puVar6 = (undefined8 *)puVar10[3];
    puVar10[2] = puVar10[2] + 1;
    puVar8 = puVar6;
    if ((longlong)puVar10 - (longlong)puVar6 == -0x420) {
      puVar8 = puVar10 + 4;
      do {
        uVar9 = (longlong)puVar6 + ((uVar9 - 0x420) - (longlong)puVar10);
        sVar11 = (longlong)puVar10 + (0x420 - (longlong)puVar6);
        if (sVar11 != 0) {
          memset(puVar6,(int)(char)(bVar2 + 0x30),sVar11);
          puVar10[3] = puVar10[3] + sVar11;
          puVar6 = (undefined8 *)puVar10[3];
        }
        local_40 = (longlong)puVar6 + (-0x20 - (longlong)puVar10);
        local_48 = puVar8;
        (*(code *)puVar10[1])(*puVar10,&local_48);
        puVar10[3] = puVar8;
        puVar6 = puVar8;
      } while (0x400 < uVar9);
    }
    memset(puVar8,(int)(char)(bVar2 + 0x30),uVar9);
    puVar10[3] = puVar10[3] + uVar9;
    puVar8 = *(undefined8 **)(*param_1 + 0x18);
    if (uVar14 != 0) {
      puVar6 = (undefined8 *)puVar8[3];
      puVar8[2] = puVar8[2] + uVar14;
      puVar10 = puVar6;
      uVar9 = uVar14;
      if ((ulonglong)((longlong)puVar8 + (0x420 - (longlong)puVar6)) < uVar14) {
        puVar10 = puVar8 + 4;
        do {
          uVar9 = (longlong)puVar6 + ((uVar9 - 0x420) - (longlong)puVar8);
          sVar11 = (longlong)puVar8 + (0x420 - (longlong)puVar6);
          if (sVar11 != 0) {
            memset(puVar6,0x39,sVar11);
            puVar8[3] = puVar8[3] + sVar11;
            puVar6 = (undefined8 *)puVar8[3];
          }
          local_30 = (longlong)puVar6 + (-0x20 - (longlong)puVar8);
          local_38 = puVar10;
          (*(code *)puVar8[1])(*puVar8,&local_38);
          puVar8[3] = puVar10;
          puVar6 = puVar10;
        } while (0x400 < uVar9);
      }
      memset(puVar10,0x39,uVar9);
      puVar8[3] = puVar8[3] + uVar9;
    }
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + (-1 - uVar14);
    lVar7 = *(longlong *)param_1[1];
  } while( true );
}

// FUN_1501e8d10 @ 1501e8d10

void FUN_1501e8d10(longlong *param_1,ulonglong *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined8 *puVar5;
  void *_Dst;
  ulonglong uVar6;
  uint uVar7;
  __uint64 _Var8;
  __uint64 _Var9;
  longlong lVar10;
  void *_Src;
  __uint64 _Var11;
  __uint64 _Var12;
  undefined8 *local_48;
  longlong local_40;
  void *local_38;
  ulonglong local_30;
  
  pcVar4 = (char *)*param_1;
  if ((*(longlong *)(pcVar4 + 8) != 0) ||
     (lVar10 = 0, (*(byte *)(*(longlong *)(pcVar4 + 0x10) + 1) & 8) != 0)) {
    lVar10 = *(longlong *)(pcVar4 + 8) + 1;
  }
  uVar6 = (param_2[1] - *param_2) * 9 + (ulonglong)(*pcVar4 != '\0') + param_2[4] + lVar10;
  iVar3 = *(int *)(*(longlong *)(pcVar4 + 0x10) + 4);
  if ((iVar3 < 0) || ((ulonglong)(longlong)iVar3 <= uVar6)) {
    _Var9 = 0;
LAB_1501e8d9a:
    _Var11 = 0;
  }
  else {
    bVar1 = *(byte *)(*(longlong *)(pcVar4 + 0x10) + 1);
    _Var11 = (longlong)iVar3 - uVar6;
    if ((bVar1 & 1) != 0) {
      _Var9 = 0;
      _Var8 = 0;
      _Var12 = _Var11;
      goto LAB_1501e8d9f;
    }
    _Var9 = _Var11;
    if ((bVar1 & 0x10) != 0) goto LAB_1501e8d9a;
    _Var9 = 0;
  }
  _Var12 = 0;
  _Var8 = _Var11;
LAB_1501e8d9f:
  absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
            (*(FormatSinkImpl **)(pcVar4 + 0x18),_Var8,' ');
  cVar2 = *(char *)*param_1;
  if (cVar2 != '\0') {
    absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
              (*(FormatSinkImpl **)((char *)*param_1 + 0x18),1,cVar2);
  }
  absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
            (*(FormatSinkImpl **)(*param_1 + 0x18),_Var9,'0');
  while( true ) {
    uVar6 = param_2[4];
    _Src = (void *)((longlong)param_2 + (0x19 - uVar6));
    puVar5 = *(undefined8 **)(*param_1 + 0x18);
    if (uVar6 != 0) {
      _Dst = (void *)puVar5[3];
      puVar5[2] = puVar5[2] + uVar6;
      if (uVar6 < (ulonglong)((longlong)puVar5 + (0x420 - (longlong)_Dst))) {
        memcpy(_Dst,_Src,uVar6);
        puVar5[3] = puVar5[3] + uVar6;
      }
      else {
        local_40 = (longlong)_Dst + (-0x20 - (longlong)puVar5);
        local_48 = puVar5 + 4;
        (*(code *)puVar5[1])(*puVar5,&local_48);
        puVar5[3] = puVar5 + 4;
        local_38 = _Src;
        local_30 = uVar6;
        (*(code *)puVar5[1])(*puVar5,&local_38);
      }
    }
    uVar6 = *param_2;
    if (param_2[1] <= uVar6) break;
    *param_2 = uVar6 + 1;
    uVar7 = *(uint *)(param_2[5] + uVar6 * 4);
    uVar6 = 0;
    do {
      param_2[4] = uVar6 + 1;
      *(char *)((longlong)param_2 + (0x19 - (uVar6 + 1))) =
           (char)uVar7 + (char)((ulonglong)uVar7 / 10) * -10 + '0';
      uVar7 = (uint)((ulonglong)uVar7 / 10);
      uVar6 = param_2[4];
    } while (uVar6 < 9);
  }
  lVar10 = *param_1;
  if ((*(longlong *)(lVar10 + 8) != 0) || ((*(byte *)(*(longlong *)(lVar10 + 0x10) + 1) & 8) != 0))
  {
    absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
              (*(FormatSinkImpl **)(lVar10 + 0x18),1,'.');
  }
  absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
            (*(FormatSinkImpl **)(*param_1 + 0x18),*(__uint64 *)(*param_1 + 8),'0');
  absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
            (*(FormatSinkImpl **)(*param_1 + 0x18),_Var12,' ');
  return;
}

// FUN_1501e8fa0 @ 1501e8fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501e8fa0(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_48 [56];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = *(undefined4 *)(param_1 + 2);
  uStack_a4 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_a0 = *(undefined4 *)(param_1 + 3);
  uStack_9c = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  puVar1 = (undefined8 *)FUN_1501e8510(local_48,&local_98,&local_a8,*(undefined4 *)(param_1 + 4));
  local_88 = *puVar1;
  uStack_80 = puVar1[1];
  local_78 = puVar1[2];
  uStack_70 = puVar1[3];
  local_68 = *(undefined4 *)(puVar1 + 4);
  uStack_64 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uStack_60 = *(undefined4 *)(puVar1 + 5);
  uStack_5c = *(undefined4 *)((longlong)puVar1 + 0x2c);
  local_58 = puVar1[6];
  (*(code *)param_1[1])(*param_1,&local_88);
  return;
}

// FUN_1501e9040 @ 1501e9040

void FUN_1501e9040(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  local_68 = *(undefined4 *)(param_1 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_60 = *(undefined4 *)(param_1 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  puVar1 = (undefined4 *)FUN_1501e8730(local_28,&local_58,&local_68,*(undefined4 *)(param_1 + 4));
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  local_38 = puVar1[4];
  uStack_34 = puVar1[5];
  uStack_30 = puVar1[6];
  uStack_2c = puVar1[7];
  (*(code *)param_1[1])(*param_1,&local_48);
  return;
}

// operator() @ 1501e90a0

/* public: void __cdecl absl::lts_20240722::FunctionRef<void __cdecl(class
   absl::lts_20240722::Span<unsigned int>)>::operator()(class absl::lts_20240722::Span<unsigned
   int>)const __ptr64 */

void __thiscall
absl::lts_20240722::FunctionRef<void___cdecl(absl::lts_20240722::Span<unsigned_int>)>::operator()
          (FunctionRef<void___cdecl(absl::lts_20240722::Span<unsigned_int>)> *this,
          undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(this + 8))(*(undefined8 *)this,&local_18);
  return;
}

// FUN_1501e90d0 @ 1501e90d0

void FUN_1501e90d0(undefined8 *param_1)

{
  (*(code *)param_1[1])(*param_1);
  return;
}

// FUN_1501e90f0 @ 1501e90f0

void FUN_1501e90f0(undefined8 *param_1)

{
  (*(code *)param_1[1])(*param_1);
  return;
}

// operator~ @ 1501e9110

/* class absl::lts_20240722::uint128 __cdecl absl::lts_20240722::operator~(class
   absl::lts_20240722::uint128) */

uint128 * __cdecl absl::lts_20240722::operator~(uint128 *__return_storage_ptr__,uint128 *param_1)

{
  __return_storage_ptr__->lo_ = ~param_1->lo_;
  __return_storage_ptr__->hi_ = ~param_1->hi_;
  return __return_storage_ptr__;
}

// operator&= @ 1501e9130

/* public: class absl::lts_20240722::uint128 & __ptr64 __cdecl
   absl::lts_20240722::uint128::operator&=(class absl::lts_20240722::uint128) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::operator&=(uint128 *this,uint128 *param_1)

{
  ulonglong uVar1;
  
  uVar1 = param_1->hi_;
  this->lo_ = this->lo_ & param_1->lo_;
  this->hi_ = this->hi_ & uVar1;
  return this;
}

// ConvertFloatImpl @ 1501e9210

/* bool __cdecl absl::lts_20240722::str_format_internal::ConvertFloatImpl(float,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl const & __ptr64,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::ConvertFloatImpl
          (float param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)FUN_1501e5500((double)param_1);
  return bVar1;
}

// ConvertFloatImpl @ 1501e9220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool __cdecl absl::lts_20240722::str_format_internal::ConvertFloatImpl(double,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl const & __ptr64,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::ConvertFloatImpl
          (double param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionChar FVar1;
  double dVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  char cVar13;
  ulonglong uVar14;
  char *pcVar15;
  uint uVar16;
  undefined1 auStack_188 [32];
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  code *pcStack_140;
  basic_string_view<char,std::char_traits<char>_> bStack_138;
  char acStack_128 [8];
  ulonglong uStack_120;
  FormatConversionSpecImpl *pFStack_118;
  FormatSinkImpl *pFStack_110;
  basic_string_view<char,std::char_traits<char>_> *pbStack_108;
  code *pcStack_100;
  basic_string_view<char,std::char_traits<char>_> *pbStack_f8;
  code *pcStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined1 auStack_c8 [88];
  char *pcStack_70;
  longlong lStack_68;
  ulonglong uStack_58;
  
  uVar16 = SUB84(param_1,0);
  uStack_58 = __security_cookie.value ^ (ulonglong)auStack_188;
  cVar13 = '\0';
  iVar7 = _dsign();
  if (iVar7 == 0) {
    if ((param_2->flags_ & kShowPos) != kBasic) {
      cVar13 = '+';
      goto LAB_1501e5563;
    }
    if ((param_2->flags_ & kSignCol) != kBasic) {
      cVar13 = ' ';
      goto LAB_1501e5563;
    }
  }
  else {
    param_1 = (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               uVar16 ^ (uint)__xmm_80000000000000008000000000000000);
    cVar13 = '-';
LAB_1501e5563:
    auStack_158[0] = cVar13;
  }
  puVar11 = (undefined4 *)auStack_158;
  if (cVar13 != '\0') {
    puVar11 = (undefined4 *)((longlong)auStack_158 + 1);
  }
  if (NAN(param_1)) {
    bVar3 = param_2->conv_ - X;
    if ((bVar3 < 9) && ((bVar3 & 1) == 0)) {
      bVar4 = true;
      pcVar15 = "NAN";
      pcVar9 = "nan";
    }
    else {
      bVar4 = false;
      pcVar15 = "NAN";
      pcVar9 = "nan";
    }
LAB_1501e55f7:
    if (bVar4) {
      pcVar9 = pcVar15;
    }
    bStack_138._Mydata = auStack_158;
    *(undefined2 *)puVar11 = *(undefined2 *)pcVar9;
    *(char *)((longlong)puVar11 + 2) = pcVar9[2];
    bStack_138._Mysize = (3 - (longlong)auStack_158) + (longlong)puVar11;
    bVar4 = FormatSinkImpl::PutPaddedString
                      (param_3,&bStack_138,param_2->width_,-1,(bool)(param_2->flags_ & kLeft));
    if (bVar4) {
      return (bool)1;
    }
  }
  else if (___xmm_7ff00000000000007ff0000000000000 <=
           (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(param_1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    bVar3 = param_2->conv_ - X;
    if ((bVar3 < 9) && ((bVar3 & 1) == 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    pcVar15 = "INF";
    pcVar9 = "inf";
    goto LAB_1501e55f7;
  }
  uVar14 = 6;
  if (-1 < param_2->precision_) {
    uVar14 = (longlong)param_2->precision_;
  }
  auStack_158._0_4_ = 0;
  dVar2 = frexp(param_1,(int *)&bStack_138);
  dVar2 = ldexp(dVar2,0x35);
  lVar8 = 0;
  iStack_d8 = (int)bStack_138._Mydata + -0x35;
  if ((__real_43e0000000000000 <= dVar2) &&
     (dVar2 = dVar2 - __real_43e0000000000000, dVar2 < __real_43e0000000000000)) {
    lVar8 = -0x8000000000000000;
  }
  FVar1 = param_2->conv_;
  uVar10 = (longlong)dVar2 + lVar8;
  acStack_128[0] = cVar13;
  uStack_120 = uVar14;
  pFStack_118 = param_2;
  pFStack_110 = param_3;
  if ((byte)(FVar1 - f) < 2) {
    uStack_148._0_4_ = (undefined4)uVar10;
    uStack_148._4_4_ = (undefined4)(uVar10 >> 0x20);
    if (iStack_d8 < 0) {
      if (iStack_d8 < -0x80) {
        pcStack_140 = (code *)0x0;
        uStack_148 = (basic_string_view<char,std::char_traits<char>_> **)uVar10;
        FUN_1501e9750(&uStack_148,-iStack_d8,acStack_128);
        return (bool)1;
      }
    }
    else {
      if (__isa_available < 5) {
        lVar8 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        if (uVar10 != 0) {
          iVar7 = 0x3f - (int)lVar8;
        }
        else {
          iVar7 = 0x40;
        }
      }
      else {
        iVar7 = (int)LZCOUNT(uVar10);
      }
      if (0x80 < (iStack_d8 - iVar7) + 0x40) {
        pcStack_100 = FUN_1501e7930;
        pbStack_108 = &bStack_138;
        iVar7 = (int)bStack_138._Mydata + 0x6a;
        pcStack_f0 = FUN_1501e7930;
        uStack_e8 = (undefined4)uStack_148;
        uStack_e4 = uStack_148._4_4_;
        uStack_e0 = 0;
        uStack_dc = 0;
        pcStack_140 = FUN_1501e7970;
        uStack_148 = &pbStack_f8;
        bStack_138._Mydata = acStack_128;
        pbStack_f8 = pbStack_108;
        FUN_1501ea290((longlong)((((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 0xb) / 10),
                      &uStack_148);
        return (bool)1;
      }
    }
    FUN_1501e71a0(uVar10,iStack_d8,acStack_128);
    return (bool)1;
  }
  if ((byte)(FVar1 - e) < 2) {
    if ((0x27 < uVar14) ||
       (cVar5 = FUN_1501e5060(uVar10,iStack_d8,uVar14,auStack_c8), cVar5 == '\0'))
    goto LAB_1501e58c5;
    if (((param_2->flags_ & kAlt) == kBasic) && (*(char *)(lStack_68 + -1) == '.')) {
      lStack_68 = lStack_68 + -1;
    }
    bVar3 = param_2->conv_ - X;
    iVar7 = auStack_158._0_4_;
    if ((8 < bVar3) || (uVar12 = 0x45, (bVar3 & 1) != 0)) {
      uVar12 = 0x65;
    }
  }
  else {
    if (1 < (byte)(FVar1 - g)) {
      if ((byte)(FVar1 - a) < 2) {
        bStack_138._Mydata = (char *)CONCAT44(bStack_138._Mydata._4_4_,0xfffffc02);
        bStack_138._Mysize = 1;
        uStack_148 = (basic_string_view<char,std::char_traits<char>_> **)
                     CONCAT44(bStack_138._Mydata._4_4_,0xfffffc02);
        pcStack_140 = (code *)0x1;
        FUN_1501e62f0(&uStack_148,uVar10,iStack_d8,FVar1 == A);
        return (bool)1;
      }
      return (bool)0;
    }
    if (uVar14 == 0) {
      uVar14 = 1;
    }
    if ((0x27 < uVar14 - 1) || (cVar5 = FUN_1501e5060(), cVar5 == '\0')) {
LAB_1501e58c5:
      uVar6 = FUN_1501e49e0(uVar16,param_2,param_3);
      return (bool)uVar6;
    }
    iVar7 = auStack_158._0_4_;
    if ((((int)auStack_158._0_4_ < 0) || ((ulonglong)(longlong)(int)auStack_158._0_4_ < uVar14)) &&
       (-5 < (int)auStack_158._0_4_)) {
      if ((int)auStack_158._0_4_ < 0) {
        pcStack_70[1] = *pcStack_70;
        if ((int)auStack_158._0_4_ < -1) {
          uVar14 = (ulonglong)(-auStack_158._0_4_ - 1);
          do {
            *pcStack_70 = '0';
            pcStack_70 = pcStack_70 + -1;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        *pcStack_70 = '.';
        pcStack_70 = pcStack_70 + -1;
        *pcStack_70 = '0';
      }
      else if (0 < (int)auStack_158._0_4_) {
        std::rotate<char*___ptr64>
                  (pcStack_70 + 1,pcStack_70 + 2,pcStack_70 + (longlong)(int)auStack_158._0_4_ + 2);
      }
      iVar7 = 0;
    }
    if ((param_2->flags_ & kAlt) == kBasic) {
      cVar5 = *(char *)(lStack_68 + -1);
      while (cVar5 == '0') {
        cVar5 = *(char *)(lStack_68 + -2);
        lStack_68 = lStack_68 + -1;
      }
      if (*(char *)(lStack_68 + -1) == '.') {
        lStack_68 = lStack_68 + -1;
      }
    }
    if (iVar7 == 0) goto LAB_1501e5897;
    bVar3 = param_2->conv_ - X;
    if ((8 < bVar3) || (uVar12 = 0x45, (bVar3 & 1) != 0)) {
      uVar12 = 0x65;
    }
  }
  FUN_1501e9c30(iVar7,uVar12,auStack_c8);
LAB_1501e5897:
  bStack_138._Mysize = lStack_68 - (longlong)pcStack_70;
  bStack_138._Mydata = pcStack_70;
  FUN_1501ea490(cVar13,&bStack_138,param_2,param_3);
  return true;
}

// ConvertFloatImpl @ 1501e9230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool __cdecl absl::lts_20240722::str_format_internal::ConvertFloatImpl(long double,class
   absl::lts_20240722::str_format_internal::FormatConversionSpecImpl const & __ptr64,class
   absl::lts_20240722::str_format_internal::FormatSinkImpl * __ptr64) */

bool __cdecl
absl::lts_20240722::str_format_internal::ConvertFloatImpl
          (longdouble param_1,FormatConversionSpecImpl *param_2,FormatSinkImpl *param_3)

{
  FormatConversionChar FVar1;
  longlong lVar2;
  double dVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  char cVar13;
  ulonglong uVar14;
  char *pcVar15;
  uint uVar16;
  undefined1 auStack_188 [32];
  undefined1 auStack_158 [16];
  basic_string_view<char,std::char_traits<char>_> bStack_148;
  uint128 auStack_138 [2];
  char acStack_118 [8];
  ulonglong uStack_110;
  FormatConversionSpecImpl *pFStack_108;
  FormatSinkImpl *pFStack_100;
  basic_string_view<char,std::char_traits<char>_> *pbStack_f8;
  code *pcStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  int iStack_d8;
  undefined1 auStack_c8 [88];
  char *pcStack_70;
  longlong lStack_68;
  ulonglong uStack_58;
  
  uVar16 = SUB84(param_1,0);
  uStack_58 = __security_cookie.value ^ (ulonglong)auStack_188;
  cVar13 = '\0';
  iVar8 = _ldsign();
  if (iVar8 == 0) {
    if ((param_2->flags_ & kShowPos) != kBasic) {
      cVar13 = '+';
      goto LAB_1501e5aa3;
    }
    if ((param_2->flags_ & kSignCol) != kBasic) {
      cVar13 = ' ';
      goto LAB_1501e5aa3;
    }
  }
  else {
    param_1 = (longdouble)
              CONCAT44((uint)((ulonglong)param_1 >> 0x20) ^
                       __xmm_80000000000000008000000000000000._4_4_,
                       uVar16 ^ (uint)__xmm_80000000000000008000000000000000);
    cVar13 = '-';
LAB_1501e5aa3:
    auStack_158[0] = cVar13;
  }
  puVar10 = (undefined4 *)auStack_158;
  if (cVar13 != '\0') {
    puVar10 = (undefined4 *)((longlong)auStack_158 + 1);
  }
  if (NAN((double)param_1)) {
    bVar4 = param_2->conv_ - X;
    if ((bVar4 < 9) && ((bVar4 & 1) == 0)) {
      bVar5 = true;
      pcVar15 = "NAN";
      pcVar9 = "nan";
    }
    else {
      bVar5 = false;
      pcVar15 = "NAN";
      pcVar9 = "nan";
    }
LAB_1501e5b37:
    if (bVar5) {
      pcVar9 = pcVar15;
    }
    bStack_148._Mydata = auStack_158;
    *(undefined2 *)puVar10 = *(undefined2 *)pcVar9;
    *(char *)((longlong)puVar10 + 2) = pcVar9[2];
    bStack_148._Mysize = (3 - (longlong)auStack_158) + (longlong)puVar10;
    bVar5 = FormatSinkImpl::PutPaddedString
                      (param_3,&bStack_148,param_2->width_,-1,(bool)(param_2->flags_ & kLeft));
    if (bVar5) {
      return (bool)1;
    }
  }
  else if (___xmm_7ff00000000000007ff0000000000000 <=
           (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(param_1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    bVar4 = param_2->conv_ - X;
    if ((bVar4 < 9) && ((bVar4 & 1) == 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    pcVar15 = "INF";
    pcVar9 = "inf";
    goto LAB_1501e5b37;
  }
  uVar14 = 6;
  if (-1 < param_2->precision_) {
    uVar14 = (longlong)param_2->precision_;
  }
  auStack_158._0_4_ = 0;
  dVar3 = frexp((double)param_1,(int *)&bStack_148);
  dVar3 = ldexp(dVar3,0x35);
  bStack_148._Mydata = (char *)CONCAT44(bStack_148._Mydata._4_4_,(int)bStack_148._Mydata + -0x35);
  uint128::uint128(auStack_138,(longdouble)dVar3);
  FVar1 = param_2->conv_;
  uVar11 = (ulonglong)bStack_148._Mydata & 0xffffffff;
  acStack_118[0] = cVar13;
  uStack_110 = uVar14;
  pFStack_108 = param_2;
  pFStack_100 = param_3;
  if ((byte)(FVar1 - f) < 2) {
    if ((int)bStack_148._Mydata < 0) {
      if ((int)bStack_148._Mydata < -0x80) {
        FUN_1501e9750(auStack_138,-(int)bStack_148._Mydata,acStack_118);
        return (bool)1;
      }
    }
    else {
      if (auStack_138[0].hi_ == 0) {
        if (__isa_available < 5) {
          lVar2 = 0x3f;
          if (auStack_138[0].lo_ != 0) {
            for (; auStack_138[0].lo_ >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          if (auStack_138[0].lo_ != 0) {
            iVar8 = 0x3f - (int)lVar2;
          }
          else {
            iVar8 = 0x40;
          }
        }
        else {
          iVar8 = (int)LZCOUNT(auStack_138[0].lo_);
        }
        iVar8 = iVar8 + 0x40;
      }
      else if (__isa_available < 5) {
        lVar2 = 0x3f;
        if (auStack_138[0].hi_ != 0) {
          for (; auStack_138[0].hi_ >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        if (auStack_138[0].hi_ != 0) {
          iVar8 = 0x3f - (int)lVar2;
        }
        else {
          iVar8 = 0x40;
        }
      }
      else {
        iVar8 = (int)LZCOUNT(auStack_138[0].hi_);
      }
      if (0x80 < ((int)bStack_148._Mydata - iVar8) + 0x80) {
        iStack_d8 = (int)bStack_148._Mydata;
        pbStack_f8 = &bStack_148;
        iVar8 = (int)bStack_148._Mydata + 0x9f;
        uStack_e0 = auStack_138[0].hi_;
        uStack_e8 = auStack_138[0].lo_;
        pcStack_f0 = FUN_1501e7930;
        auStack_138[0].hi_ = (ulong64)FUN_1501e7970;
        bStack_148._Mydata = acStack_118;
        auStack_138[0].lo_ = (ulong64)&pbStack_f8;
        FUN_1501ea290((longlong)((((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 0xb) / 10),
                      auStack_138);
        return (bool)1;
      }
    }
    FUN_1501e6eb0(auStack_138,uVar11,acStack_118);
    return (bool)1;
  }
  if ((byte)(FVar1 - e) < 2) {
    if ((0x27 < uVar14) ||
       (cVar6 = FUN_1501e52b0(auStack_138[0].lo_,uVar11,uVar14,auStack_c8), cVar6 == '\0'))
    goto LAB_1501e5dfa;
    if (((param_2->flags_ & kAlt) == kBasic) && (*(char *)(lStack_68 + -1) == '.')) {
      lStack_68 = lStack_68 + -1;
    }
    bVar4 = param_2->conv_ - X;
    iVar8 = auStack_158._0_4_;
    if ((8 < bVar4) || (uVar12 = 0x45, (bVar4 & 1) != 0)) {
      uVar12 = 0x65;
    }
  }
  else {
    if (1 < (byte)(FVar1 - g)) {
      if ((byte)(FVar1 - a) < 2) {
        uVar14 = (ulonglong)bStack_148._Mydata & 0xffffffff;
        bStack_148._Mydata = (char *)CONCAT44(bStack_148._Mydata._4_4_,0xfffffc02);
        bStack_148._Mysize = 1;
        FUN_1501e5fa0(&bStack_148,auStack_138,uVar14,FVar1 == A);
        return (bool)1;
      }
      return (bool)0;
    }
    if (uVar14 == 0) {
      uVar14 = 1;
    }
    if ((0x27 < uVar14 - 1) ||
       (cVar6 = FUN_1501e52b0(auStack_138[0].lo_,uVar11,uVar14 - 1,auStack_c8), cVar6 == '\0')) {
LAB_1501e5dfa:
      uVar7 = FUN_1501e4ce0(uVar16,param_2,param_3);
      return (bool)uVar7;
    }
    iVar8 = auStack_158._0_4_;
    if ((((int)auStack_158._0_4_ < 0) || ((ulonglong)(longlong)(int)auStack_158._0_4_ < uVar14)) &&
       (-5 < (int)auStack_158._0_4_)) {
      if ((int)auStack_158._0_4_ < 0) {
        pcStack_70[1] = *pcStack_70;
        if ((int)auStack_158._0_4_ < -1) {
          uVar14 = (ulonglong)(-auStack_158._0_4_ - 1);
          do {
            *pcStack_70 = '0';
            pcStack_70 = pcStack_70 + -1;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        *pcStack_70 = '.';
        pcStack_70 = pcStack_70 + -1;
        *pcStack_70 = '0';
      }
      else if (0 < (int)auStack_158._0_4_) {
        std::rotate<char*___ptr64>
                  (pcStack_70 + 1,pcStack_70 + 2,pcStack_70 + (longlong)(int)auStack_158._0_4_ + 2);
      }
      iVar8 = 0;
    }
    if ((param_2->flags_ & kAlt) == kBasic) {
      cVar6 = *(char *)(lStack_68 + -1);
      while (cVar6 == '0') {
        cVar6 = *(char *)(lStack_68 + -2);
        lStack_68 = lStack_68 + -1;
      }
      if (*(char *)(lStack_68 + -1) == '.') {
        lStack_68 = lStack_68 + -1;
      }
    }
    if (iVar8 == 0) goto LAB_1501e5dcc;
    bVar4 = param_2->conv_ - X;
    if ((8 < bVar4) || (uVar12 = 0x45, (bVar4 & 1) != 0)) {
      uVar12 = 0x65;
    }
  }
  FUN_1501e9c30(iVar8,uVar12,auStack_c8);
LAB_1501e5dcc:
  bStack_148._Mysize = lStack_68 - (longlong)pcStack_70;
  bStack_148._Mydata = pcStack_70;
  FUN_1501ea490(cVar13,&bStack_148,param_2,param_3);
  return true;
}

// FUN_1501e9240 @ 1501e9240

longlong FUN_1501e9240(undefined8 *param_1,void *param_2)

{
  size_t _Size;
  
  _Size = param_1[1];
  memcpy(param_2,(void *)*param_1,_Size);
  return _Size + (longlong)param_2;
}

// FUN_1501e92a0 @ 1501e92a0

char FUN_1501e92a0(ulonglong *param_1,char param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1 + (*param_1 / 10) * -10 + (longlong)param_2 * 6;
  uVar2 = uVar1 / 10;
  *param_1 = (longlong)param_2 * 0x1999999999999999 + uVar2 + *param_1 / 10;
  return (char)uVar1 + (char)uVar2 * -10;
}

// FUN_1501e9390 @ 1501e9390

void FUN_1501e9390(char *param_1,undefined8 *param_2,ulonglong param_3,__uint64 param_4,
                  undefined8 *param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulonglong uVar7;
  __uint64 _Var8;
  __uint64 _Var9;
  __uint64 _Var10;
  __uint64 _Var11;
  undefined8 *local_58;
  ulonglong uStack_50;
  undefined8 *local_48;
  ulonglong uStack_40;
  
  cVar1 = *param_1;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 4);
  if (iVar3 < 0) {
    if (cVar1 != '\0') {
      absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
                (*(FormatSinkImpl **)(param_1 + 0x18),1,cVar1);
    }
    uVar4 = param_2[1];
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    if (uVar4 != 0) {
      pvVar6 = (void *)puVar5[3];
      puVar5[2] = puVar5[2] + uVar4;
      if (uVar4 < (ulonglong)((longlong)puVar5 + (0x420 - (longlong)pvVar6))) {
        memcpy(pvVar6,(void *)*param_2,uVar4);
        puVar5[3] = puVar5[3] + uVar4;
      }
      else {
        uStack_50 = (longlong)pvVar6 + (-0x20 - (longlong)puVar5);
        local_58 = puVar5 + 4;
        (*(code *)puVar5[1])(*puVar5,&local_58);
        local_48 = (undefined8 *)*param_2;
        uStack_40 = param_2[1];
        puVar5[3] = puVar5 + 4;
        (*(code *)puVar5[1])(*puVar5,&local_48);
      }
    }
    absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
              (*(FormatSinkImpl **)(param_1 + 0x18),param_4,'0');
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    uVar4 = param_5[1];
    if (uVar4 == 0) {
      return;
    }
    pvVar6 = (void *)puVar5[3];
    puVar5[2] = puVar5[2] + uVar4;
    if ((ulonglong)((longlong)puVar5 + (0x420 - (longlong)pvVar6)) <= uVar4) {
      uStack_50 = (longlong)pvVar6 + (-0x20 - (longlong)puVar5);
      local_58 = puVar5 + 4;
      (*(code *)puVar5[1])(*puVar5,&local_58);
      local_48 = (undefined8 *)*param_5;
      uStack_40 = param_5[1];
      puVar5[3] = puVar5 + 4;
      (*(code *)puVar5[1])(*puVar5,&local_48);
      return;
    }
    memcpy(pvVar6,(void *)*param_5,uVar4);
    puVar5[3] = puVar5[3] + uVar4;
    return;
  }
  uVar4 = param_2[1];
  uVar7 = (ulonglong)(cVar1 != '\0') + param_5[1] + uVar4 + param_4;
  if (uVar7 < (ulonglong)(longlong)iVar3) {
    _Var10 = (longlong)iVar3 - uVar7;
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x10) + 1);
    if ((bVar2 & 1) != 0) {
      _Var9 = 0;
      _Var8 = 0;
      _Var11 = _Var10;
      goto LAB_1501e9539;
    }
    _Var9 = _Var10;
    if ((bVar2 & 0x10) != 0) goto LAB_1501e9534;
    _Var9 = 0;
  }
  else {
    _Var9 = 0;
LAB_1501e9534:
    _Var10 = 0;
  }
  _Var11 = 0;
  _Var8 = _Var10;
LAB_1501e9539:
  absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
            (*(FormatSinkImpl **)(param_1 + 0x18),_Var8,' ');
  if (*param_1 != '\0') {
    absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
              (*(FormatSinkImpl **)(param_1 + 0x18),1,*param_1);
  }
  param_2 = (undefined8 *)*param_2;
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  uVar7 = param_3;
  if (uVar4 < param_3) {
    uVar7 = uVar4;
  }
  local_48 = param_2;
  uStack_40 = uVar7;
  if (uVar7 != 0) {
    pvVar6 = (void *)puVar5[3];
    puVar5[2] = puVar5[2] + uVar7;
    if (uVar7 < (ulonglong)((longlong)puVar5 + (0x420 - (longlong)pvVar6))) {
      memcpy(pvVar6,param_2,uVar7);
      puVar5[3] = puVar5[3] + uVar7;
    }
    else {
      uStack_50 = (longlong)pvVar6 + (-0x20 - (longlong)puVar5);
      local_58 = puVar5 + 4;
      (*(code *)puVar5[1])(*puVar5,&local_58);
      puVar5[3] = puVar5 + 4;
      (*(code *)puVar5[1])(*puVar5,&local_48);
    }
  }
  absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
            (*(FormatSinkImpl **)(param_1 + 0x18),_Var9,'0');
  puVar5 = *(undefined8 **)(param_1 + 0x18);
  if (param_3 <= uVar4) {
    local_58 = (undefined8 *)((longlong)param_2 + param_3);
    uVar7 = 0xffffffffffffffff;
    if (uVar4 - param_3 != 0xffffffffffffffff) {
      uVar7 = uVar4 - param_3;
    }
    uStack_50 = uVar7;
    if (uVar7 != 0) {
      pvVar6 = (void *)puVar5[3];
      puVar5[2] = puVar5[2] + uVar7;
      if (uVar7 < (ulonglong)((longlong)puVar5 + (0x420 - (longlong)pvVar6))) {
        memcpy(pvVar6,local_58,uVar7);
        puVar5[3] = puVar5[3] + uVar7;
      }
      else {
        uStack_40 = (longlong)pvVar6 + (-0x20 - (longlong)puVar5);
        local_48 = puVar5 + 4;
        (*(code *)puVar5[1])(*puVar5,&local_48);
        puVar5[3] = puVar5 + 4;
        local_48 = local_58;
        uStack_40 = uStack_50;
        (*(code *)puVar5[1])(*puVar5,&local_48);
      }
    }
    absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
              (*(FormatSinkImpl **)(param_1 + 0x18),param_4,'0');
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    uVar4 = param_5[1];
    if (uVar4 != 0) {
      pvVar6 = (void *)puVar5[3];
      puVar5[2] = puVar5[2] + uVar4;
      if (uVar4 < (ulonglong)((longlong)puVar5 + (0x420 - (longlong)pvVar6))) {
        memcpy(pvVar6,(void *)*param_5,uVar4);
        puVar5[3] = puVar5[3] + uVar4;
      }
      else {
        uStack_40 = (longlong)pvVar6 + (-0x20 - (longlong)puVar5);
        local_48 = puVar5 + 4;
        (*(code *)puVar5[1])(*puVar5,&local_48);
        local_48 = (undefined8 *)*param_5;
        uStack_40 = param_5[1];
        puVar5[3] = puVar5 + 4;
        (*(code *)puVar5[1])(*puVar5,&local_48);
      }
    }
    absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
              (*(FormatSinkImpl **)(param_1 + 0x18),_Var11,' ');
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::basic_string_view<char,std::char_traits<char>_>::_Xran();
}

// FormatConversionCharIsUpper @ 1501e9730

/* bool __cdecl absl::lts_20240722::str_format_internal::FormatConversionCharIsUpper(enum
   absl::lts_20240722::FormatConversionChar) */

bool __cdecl
absl::lts_20240722::str_format_internal::FormatConversionCharIsUpper(FormatConversionChar param_1)

{
  if ((param_1 - X & 0xf9) != 0) {
    return param_1 == A;
  }
  return true;
}

// FUN_1501e9750 @ 1501e9750

void FUN_1501e9750(undefined4 *param_1,int param_2,char *param_3)

{
  char *pcVar1;
  __uint64 _Var2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  __uint64 local_res8;
  char *local_88;
  __uint64 *local_80;
  char ***local_78;
  undefined8 **ppuStack_70;
  undefined8 **local_68;
  undefined8 **local_58;
  undefined8 **ppuStack_50;
  undefined8 **local_48;
  char **local_40;
  code *pcStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_20;
  
  if ((*(longlong *)(param_3 + 8) == 0) &&
     (lVar6 = *(longlong *)(param_3 + 0x10), (*(byte *)(lVar6 + 1) & 8) == 0)) {
    lVar5 = 1;
  }
  else {
    lVar6 = *(longlong *)(param_3 + 0x10);
    lVar5 = *(longlong *)(param_3 + 8) + 2;
  }
  uVar4 = (ulonglong)(*param_3 != '\0') + lVar5;
  iVar3 = *(int *)(lVar6 + 4);
  if ((iVar3 < 0) || ((ulonglong)(longlong)iVar3 <= uVar4)) {
    local_68 = (char ***)0x0;
LAB_1501e97e9:
    ppuStack_70 = (char ***)0x0;
  }
  else {
    local_78 = (char ***)((longlong)iVar3 - uVar4);
    local_68 = local_78;
    if ((*(byte *)(lVar6 + 1) & 1) != 0) goto LAB_1501e97e9;
    local_68 = (char ***)0x0;
    ppuStack_70 = local_78;
    if ((*(byte *)(lVar6 + 1) & 0x10) == 0) {
      ppuStack_70 = (char ***)0x0;
      goto LAB_1501e97f4;
    }
  }
  local_78 = (char ***)0x0;
LAB_1501e97f4:
  pcVar1 = param_3 + 0x18;
  _Var2 = (longlong)ppuStack_70 + 1;
  local_58 = local_78;
  ppuStack_50 = ppuStack_70;
  local_48 = local_68;
  absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
            (*(FormatSinkImpl **)pcVar1,(__uint64)local_78,' ');
  if (*param_3 != '\0') {
    absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
              (*(FormatSinkImpl **)pcVar1,1,*param_3);
  }
  absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
            (*(FormatSinkImpl **)pcVar1,_Var2,'0');
  if ((*(longlong *)(param_3 + 8) != 0) || ((*(byte *)(*(longlong *)(param_3 + 0x10) + 1) & 8) != 0)
     ) {
    absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
              (*(FormatSinkImpl **)pcVar1,1,'.');
  }
  local_res8 = *(__uint64 *)(param_3 + 8);
  local_30 = *param_1;
  uStack_2c = param_1[1];
  uStack_28 = param_1[2];
  uStack_24 = param_1[3];
  local_80 = &local_res8;
  local_40 = &local_88;
  local_78 = &local_40;
  pcStack_38 = FUN_1501e7900;
  ppuStack_70 = (undefined8 **)FUN_1501e7a10;
  local_88 = param_3;
  local_20 = param_2;
  FUN_1501ea290((longlong)((int)(param_2 + 0x54 + (param_2 + 0x54 >> 0x1f & 0x1fU)) >> 5),&local_78)
  ;
  absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
            (*(FormatSinkImpl **)(param_3 + 0x18),local_res8,'0');
  absl::lts_20240722::str_format_internal::FormatSinkImpl::Append
            (*(FormatSinkImpl **)(param_3 + 0x18),(__uint64)local_48,' ');
  return;
}

// FUN_1501e9920 @ 1501e9920

void FUN_1501e9920(undefined4 *param_1,int param_2,undefined8 param_3)

{
  undefined8 local_res8 [4];
  undefined8 **local_48;
  code *pcStack_40;
  undefined8 *local_38;
  code *pcStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_18;
  
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  local_38 = local_res8;
  local_48 = &local_38;
  pcStack_30 = FUN_1501e7930;
  pcStack_40 = FUN_1501e7970;
  local_res8[0] = param_3;
  local_18 = param_2;
  FUN_1501ea290((longlong)
                ((((int)(param_2 + 0x9f + (param_2 + 0x9f >> 0x1f & 0x1fU)) >> 5) * 0xb) / 10),
                &local_48);
  return;
}

// FUN_1501e99c0 @ 1501e99c0

char * FUN_1501e99c0(char *param_1,char *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 8);
  lVar2 = 0;
  *param_2 = *param_1;
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  if (lVar5 == 0) {
    *param_1 = '\0';
    return param_2;
  }
  uVar4 = 0;
  do {
    uVar1 = (longlong)(char)uVar4 +
            (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x10) + -4 + lVar5 * 4) * 10;
    *(int *)(*(longlong *)(param_1 + 0x10) + lVar5 * 4 + -4) = (int)uVar1;
    uVar4 = uVar1 >> 0x20;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  lVar5 = *(longlong *)(param_1 + 8);
  if (*(int *)(*(longlong *)(param_1 + 0x10) + -4 + lVar5 * 4) == 0) {
    lVar5 = lVar5 + -1;
    *(longlong *)(param_1 + 8) = lVar5;
  }
  cVar3 = (char)(uVar1 >> 0x20);
  *param_1 = cVar3;
  if (cVar3 == '\t') {
    while (lVar2 = lVar2 + 1, lVar5 != 0) {
      uVar4 = 0;
      do {
        uVar1 = (longlong)(char)uVar4 +
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x10) + -4 + lVar5 * 4) * 10;
        *(int *)(*(longlong *)(param_1 + 0x10) + lVar5 * 4 + -4) = (int)uVar1;
        uVar4 = uVar1 >> 0x20;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      lVar5 = *(longlong *)(param_1 + 8);
      if (*(int *)(*(longlong *)(param_1 + 0x10) + -4 + lVar5 * 4) == 0) {
        lVar5 = lVar5 + -1;
        *(longlong *)(param_1 + 8) = lVar5;
      }
      cVar3 = (char)(uVar1 >> 0x20);
      *param_1 = cVar3;
      if (cVar3 != '\t') {
        *(longlong *)(param_2 + 8) = lVar2;
        return param_2;
      }
    }
    *param_1 = '\0';
    *(longlong *)(param_2 + 8) = lVar2;
  }
  return param_2;
}

// FUN_1501e9b30 @ 1501e9b30

undefined1 FUN_1501e9b30(char *param_1)

{
  if ((*param_1 == '\0') && (*(longlong *)(param_1 + 8) == 0)) {
    return 0;
  }
  return 1;
}

// IsDoubleDouble @ 1501e9b50

/* bool __cdecl absl::lts_20240722::numeric_internal::IsDoubleDouble(void) */

bool __cdecl absl::lts_20240722::numeric_internal::IsDoubleDouble(void)

{
  return false;
}

// FUN_1501e9c30 @ 1501e9c30

void FUN_1501e9c30(int param_1,undefined1 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  char *pcVar4;
  
  **(undefined1 **)(param_3 + 0x60) = param_2;
  puVar2 = (undefined1 *)(*(longlong *)(param_3 + 0x60) + 1);
  *(undefined1 **)(param_3 + 0x60) = puVar2;
  if (param_1 < 0) {
    *puVar2 = 0x2d;
    lVar1 = *(longlong *)(param_3 + 0x60);
    param_1 = -param_1;
  }
  else {
    *puVar2 = 0x2b;
    lVar1 = *(longlong *)(param_3 + 0x60);
  }
  pcVar4 = (char *)(lVar1 + 1);
  *(char **)(param_3 + 0x60) = pcVar4;
  cVar3 = (char)(param_1 / 10);
  if (param_1 < 100) {
    *pcVar4 = cVar3 + '0';
  }
  else {
    *pcVar4 = (((char)(param_1 / 100) + (char)(param_1 >> 0x1f)) -
              (char)((longlong)param_1 * 0x51eb851f >> 0x3f)) + '0';
    pcVar4 = (char *)(*(longlong *)(param_3 + 0x60) + 1);
    *(char **)(param_3 + 0x60) = pcVar4;
    *pcVar4 = cVar3 + (char)((param_1 / 10) / 10) * -10 + '0';
  }
  pcVar4 = (char *)(*(longlong *)(param_3 + 0x60) + 1);
  *(char **)(param_3 + 0x60) = pcVar4;
  *pcVar4 = (char)param_1 + cVar3 * -10 + '0';
  *(longlong *)(param_3 + 0x60) = *(longlong *)(param_3 + 0x60) + 1;
  return;
}

// FUN_1501e9d10 @ 1501e9d10

char * FUN_1501e9d10(uint128 *param_1,char *param_2,int param_3,longlong param_4)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong lVar9;
  ulonglong *puVar10;
  ulonglong local_38;
  longlong local_30;
  ulonglong local_28;
  longlong local_20;
  
  absl::lts_20240722::uint128::operator<<=(param_1,0x80 - param_3);
  uVar5 = param_1->lo_;
  uVar7 = param_1->hi_;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (uVar5 == 0) goto LAB_1501e9db3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5;
    uVar5 = SUB168(auVar2 * ZEXT816(10),0);
    lVar9 = (longlong)SUB161(auVar2 * ZEXT816(10),8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar7;
    uVar6 = SUB168(auVar3 * ZEXT816(10),0);
    uVar7 = uVar6 + lVar9;
    lVar9 = (lVar9 >> 0x3f) + SUB168(auVar3 * ZEXT816(10),8);
    if (uVar7 < uVar6) {
      local_38 = uVar7;
      local_30 = lVar9 + 1;
      puVar10 = &local_38;
    }
    else {
      local_28 = uVar7;
      puVar10 = &local_28;
      local_20 = lVar9;
    }
    uVar7 = *puVar10;
    *param_2 = (char)puVar10[1] + '0';
    param_2 = param_2 + 1;
  }
LAB_1501e9dcf:
  if (0x7fffffffffffffff < uVar7) {
    pcVar8 = param_2;
    if ((uVar7 < 0x8000000000000001) && (uVar5 == 0)) {
      FUN_1501ea130(param_2 + -1);
      return param_2;
    }
    do {
      while( true ) {
        pcVar8 = pcVar8 + -1;
        cVar1 = *pcVar8;
        if (cVar1 != '9') break;
        *pcVar8 = '0';
      }
    } while (cVar1 == '.');
    *pcVar8 = cVar1 + '\x01';
  }
  return param_2;
LAB_1501e9db3:
  do {
    if (uVar7 == 0) {
      return param_2;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar7;
    uVar7 = SUB168(auVar4 * ZEXT816(10),0);
    *param_2 = SUB161(auVar4 * ZEXT816(10),8) + '0';
    param_2 = param_2 + 1;
    param_4 = param_4 + -1;
    uVar5 = 0;
  } while (param_4 != 0);
  goto LAB_1501e9dcf;
}

// FUN_1501e9e40 @ 1501e9e40

char * FUN_1501e9e40(longlong param_1,char *param_2,char param_3,longlong param_4)

{
  char cVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  char *pcVar4;
  
  uVar3 = param_1 << (0x40U - param_3 & 0x3f);
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (uVar3 == 0) {
      return param_2;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    uVar3 = SUB168(auVar2 * ZEXT816(10),0);
    *param_2 = SUB161(auVar2 * ZEXT816(10),8) + '0';
    param_2 = param_2 + 1;
  }
  if (0x7fffffffffffffff < uVar3) {
    pcVar4 = param_2;
    if (0x8000000000000000 < uVar3) {
      do {
        while( true ) {
          pcVar4 = pcVar4 + -1;
          cVar1 = *pcVar4;
          if (cVar1 != '9') break;
          *pcVar4 = '0';
        }
      } while (cVar1 == '.');
      *pcVar4 = cVar1 + '\x01';
      return param_2;
    }
    FUN_1501ea130();
  }
  return param_2;
}

// FUN_1501e9ed0 @ 1501e9ed0

char * FUN_1501e9ed0(ulonglong *param_1,char *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar1 = *param_1;
  for (uVar4 = param_1[1]; uVar4 != 0; uVar4 = uVar2 + uVar4 / 10) {
    param_2 = param_2 + -1;
    uVar2 = (uVar4 % 10) / 10;
    lVar5 = (longlong)(char)((char)(uVar4 % 10) + (char)uVar2 * -10);
    uVar6 = lVar5 * 6 + (uVar1 / 10) * -10 + uVar1;
    uVar3 = uVar6 / 10;
    uVar1 = lVar5 * 0x1999999999999999 + uVar3 + uVar1 / 10;
    *param_2 = (char)uVar6 + (char)uVar3 * -10 + '0';
  }
  do {
    param_2 = param_2 + -1;
    uVar2 = uVar1 % 10;
    uVar4 = uVar2 / 10;
    uVar1 = uVar4 + uVar1 / 10;
    *param_2 = (char)uVar2 + (char)uVar4 * -10 + '0';
  } while (uVar1 != 0);
  return param_2;
}

// FUN_1501ea020 @ 1501ea020

char * FUN_1501ea020(ulonglong param_1,char *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  do {
    param_2 = param_2 + -1;
    uVar2 = param_1 % 10;
    uVar1 = uVar2 / 10;
    param_1 = uVar1 + param_1 / 10;
    *param_2 = (char)uVar2 + (char)uVar1 * -10 + '0';
  } while (param_1 != 0);
  return param_2;
}

// FUN_1501ea080 @ 1501ea080

void FUN_1501ea080(longlong param_1,char param_2,longlong param_3,int *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = *(char **)(param_3 + 0x60);
  pcVar5 = pcVar4 + -param_1;
  *(char **)(param_3 + 0x60) = pcVar5;
  if (*pcVar5 < '6') {
    if (*pcVar5 < '5') {
      return;
    }
    pcVar1 = pcVar5;
    if (param_2 == '\0') {
      do {
        pcVar1 = pcVar1 + 1;
        if (pcVar1 == pcVar4) {
          cVar2 = pcVar5[-1];
          if (cVar2 == '.') {
            cVar2 = pcVar5[-2];
          }
          uVar3 = (int)cVar2 & 0x80000001;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
          }
          if (uVar3 != 1) {
            return;
          }
          break;
        }
      } while (*pcVar1 == '0');
    }
  }
  pcVar4 = *(char **)(param_3 + 0x58);
  pcVar5 = pcVar5 + -1;
  if (pcVar4 <= pcVar5) {
    do {
      if (*pcVar5 == '9') {
        *pcVar5 = '0';
      }
      else if (*pcVar5 != '.') break;
      pcVar4 = *(char **)(param_3 + 0x58);
      pcVar5 = pcVar5 + -1;
    } while (pcVar4 <= pcVar5);
    if (pcVar4 <= pcVar5) {
      *pcVar5 = *pcVar5 + '\x01';
      return;
    }
  }
  *pcVar5 = '1';
  *(char **)(param_3 + 0x58) = pcVar5;
  cVar2 = pcVar5[1];
  pcVar5[1] = pcVar5[2];
  pcVar5[2] = cVar2;
  *param_4 = *param_4 + 1;
  *(longlong *)(param_3 + 0x60) = *(longlong *)(param_3 + 0x60) + -1;
  return;
}

// FUN_1501ea130 @ 1501ea130

void FUN_1501ea130(char *param_1)

{
  uint uVar1;
  char cVar2;
  
  cVar2 = *param_1;
  if (cVar2 == '.') {
    cVar2 = param_1[-1];
    param_1 = param_1 + -1;
  }
  uVar1 = (int)cVar2 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  if (uVar1 != 1) {
    return;
  }
  do {
    if (cVar2 == '9') {
      *param_1 = '0';
    }
    else if (cVar2 != '.') {
      *param_1 = cVar2 + '\x01';
      return;
    }
    cVar2 = param_1[-1];
    param_1 = param_1 + -1;
  } while( true );
}

// FUN_1501ea1b0 @ 1501ea1b0

void FUN_1501ea1b0(undefined4 *param_1,int param_2,undefined8 *param_3)

{
  undefined8 *local_48;
  code *pcStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_18;
  
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = &local_38;
  pcStack_40 = FUN_1501e7970;
  local_18 = param_2;
  FUN_1501ea290((longlong)
                ((((int)(param_2 + 0x9f + (param_2 + 0x9f >> 0x1f & 0x1fU)) >> 5) * 0xb) / 10),
                &local_48);
  return;
}

// FUN_1501ea230 @ 1501ea230

void FUN_1501ea230(undefined4 *param_1,int param_2,undefined8 *param_3)

{
  undefined8 *local_48;
  code *pcStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_18;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  local_48 = &local_38;
  pcStack_40 = FUN_1501e7a10;
  local_18 = param_2;
  FUN_1501ea290((longlong)((int)(param_2 + 0x54 + (param_2 + 0x54 >> 0x1f & 0x1fU)) >> 5),&local_48)
  ;
  return;
}

// FUN_1501ea290 @ 1501ea290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501ea290(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  code *pcVar4;
  undefined1 auStack_a78 [32];
  undefined1 *local_a58;
  code *pcStack_a50;
  undefined1 *local_a48;
  code *pcStack_a40;
  undefined1 *local_a38;
  code *pcStack_a30;
  undefined1 local_a28 [2560];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a78;
  uVar1 = param_1 + 0x7fU >> 7;
  if (uVar1 == 1) {
    local_a48 = (undefined1 *)*param_2;
    pcVar4 = (code *)param_2[1];
    pcStack_a40 = pcVar4;
    memset(local_a28,0,0x200);
    pcStack_a50 = (code *)&DAT_00000080;
  }
  else if (uVar1 == 2) {
    local_a48 = (undefined1 *)*param_2;
    pcVar4 = (code *)param_2[1];
    pcStack_a40 = pcVar4;
    memset(local_a28,0,0x400);
    pcStack_a50 = (code *)&DAT_00000100;
  }
  else {
    if (uVar1 != 3) {
      if (uVar1 == 4) {
        local_a38 = (undefined1 *)*param_2;
        pcVar4 = (code *)param_2[1];
        pcStack_a30 = pcVar4;
        memset(local_a28,0,0x800);
        local_a48 = local_a28;
        ppuVar3 = &local_a48;
        pcStack_a50 = (code *)0x200;
        pcStack_a40 = (code *)0x200;
        puVar2 = local_a38;
      }
      else {
        if (uVar1 != 5) {
          return;
        }
        local_a48 = (undefined1 *)*param_2;
        pcVar4 = (code *)param_2[1];
        pcStack_a40 = pcVar4;
        memset(local_a28,0,0xa00);
        ppuVar3 = &local_a58;
        pcStack_a50 = (code *)0x280;
        puVar2 = local_a48;
      }
      goto LAB_1501ea40f;
    }
    local_a48 = (undefined1 *)*param_2;
    pcVar4 = (code *)param_2[1];
    pcStack_a40 = pcVar4;
    memset(local_a28,0,0x600);
    pcStack_a50 = (code *)0x180;
  }
  local_a38 = local_a28;
  ppuVar3 = &local_a38;
  pcStack_a30 = pcStack_a50;
  puVar2 = local_a48;
LAB_1501ea40f:
  local_a58 = local_a28;
  (*pcVar4)(puVar2,ppuVar3);
  return;
}

// FUN_1501ea490 @ 1501ea490

void FUN_1501ea490(char param_1,undefined8 *param_2,longlong param_3,FormatSinkImpl *param_4)

{
  int iVar1;
  FormatSinkImpl *_Size;
  void *_Dst;
  __uint64 _Var2;
  __uint64 _Var3;
  __uint64 _Var4;
  __uint64 _Var5;
  ulonglong uVar6;
  __uint64 _Var7;
  FormatSinkImpl *local_18;
  longlong lStack_10;
  
  iVar1 = *(int *)(param_3 + 4);
  _Var3 = 0;
  _Var2 = _Var3;
  if ((-1 < iVar1) &&
     (uVar6 = (ulonglong)(param_1 != '\0') + param_2[1], _Var2 = 0,
     uVar6 < (ulonglong)(longlong)iVar1)) {
    _Var2 = (longlong)iVar1 - uVar6;
  }
  _Var4 = _Var3;
  _Var5 = _Var2;
  _Var7 = _Var3;
  if (((*(byte *)(param_3 + 1) & 1) == 0) &&
     (_Var4 = _Var2, _Var5 = 0, _Var7 = 0, (*(byte *)(param_3 + 1) & 0x10) != 0)) {
    _Var4 = _Var3;
    _Var5 = _Var3;
    _Var7 = _Var2;
  }
  absl::lts_20240722::str_format_internal::FormatSinkImpl::Append(param_4,_Var4,' ');
  if (param_1 != '\0') {
    absl::lts_20240722::str_format_internal::FormatSinkImpl::Append(param_4,1,param_1);
  }
  absl::lts_20240722::str_format_internal::FormatSinkImpl::Append(param_4,_Var7,'0');
  _Size = (FormatSinkImpl *)param_2[1];
  if (_Size != (FormatSinkImpl *)0x0) {
    _Dst = *(void **)(param_4 + 0x18);
    *(FormatSinkImpl **)(param_4 + 0x10) = _Size + *(longlong *)(param_4 + 0x10);
    if (_Size < param_4 + (0x420 - (longlong)_Dst)) {
      memcpy(_Dst,(void *)*param_2,(size_t)_Size);
      *(FormatSinkImpl **)(param_4 + 0x18) = _Size + *(longlong *)(param_4 + 0x18);
    }
    else {
      lStack_10 = (longlong)_Dst + (-0x20 - (longlong)param_4);
      local_18 = param_4 + 0x20;
      (**(code **)(param_4 + 8))(*(undefined8 *)param_4,&local_18);
      local_18 = (FormatSinkImpl *)*param_2;
      lStack_10 = param_2[1];
      *(FormatSinkImpl **)(param_4 + 0x18) = param_4 + 0x20;
      (**(code **)(param_4 + 8))(*(undefined8 *)param_4,&local_18);
    }
  }
  absl::lts_20240722::str_format_internal::FormatSinkImpl::Append(param_4,_Var5,' ');
  return;
}

// data @ 1501ea5d0

/* public: unsigned int * __ptr64 __cdecl absl::lts_20240722::Span<unsigned int>::data(void)const
   __ptr64 */

uint * __thiscall absl::lts_20240722::Span<unsigned_int>::data(Span<unsigned_int> *this)

{
  return *(uint **)this;
}

// fpclassify @ 1501ea5e0

/* int __cdecl fpclassify(long double) */

int __cdecl fpclassify(longdouble param_1)

{
  short sVar1;
  
  sVar1 = _ldclass();
  return (int)sVar1;
}

// frexp @ 1501ea600

/* long double __cdecl frexp(long double,int * __ptr64) */

longdouble __cdecl frexp(longdouble param_1,int *param_2)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501ea600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = frexp((double)param_1,param_2);
  return (longdouble)dVar1;
}

// signbit @ 1501ea680

/* bool __cdecl signbit(long double) */

bool __cdecl signbit(longdouble param_1)

{
  int iVar1;
  
  iVar1 = _ldsign();
  return iVar1 != 0;
}


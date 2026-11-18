// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 12

// FormatArgImpl<char_const*___ptr64> @ 1501d4e40

/* public: __cdecl absl::lts_20240722::str_format_internal::FormatArgImpl::FormatArgImpl<char const
   * __ptr64>(char const * __ptr64 const & __ptr64) __ptr64 */

FormatArgImpl * __thiscall
absl::lts_20240722::str_format_internal::FormatArgImpl::FormatArgImpl<char_const*___ptr64>
          (FormatArgImpl *this,char **param_1)

{
  (this->data_).ptr = *param_1;
  this->dispatcher_ = Dispatch<char_const*___ptr64>;
  return this;
}

// Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067,655355,655355,655355,655355,655355,655355,655355,524292,655355,262148,524292>_> @ 1501d4e60

/* public: static class absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl const &
   __ptr64 __cdecl absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::Extract<class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067,655355,655355,655355,655355,655355,655355,655355,524292,655355,262148,524292>
   >(class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067,655355,655355,655355,655355,655355,655355,655355,524292,655355,262148,524292>
   const & __ptr64) */

UntypedFormatSpecImpl * __cdecl
absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::
Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067,655355,655355,655355,655355,655355,655355,655355,524292,655355,262148,524292>_>
          (FormatSpecTemplate<131067,655355,655355,655355,655355,655355,655355,655355,524292,655355,262148,524292>
           *param_1)

{
  return (UntypedFormatSpecImpl *)param_1;
}

// Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067,655355,655355,655355>_> @ 1501d4e70

/* public: static class absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl const &
   __ptr64 __cdecl absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::Extract<class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067,655355,655355,655355> >(class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067,655355,655355,655355> const &
   __ptr64) */

UntypedFormatSpecImpl * __cdecl
absl::lts_20240722::str_format_internal::UntypedFormatSpecImpl::
Extract<absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067,655355,655355,655355>_>
          (FormatSpecTemplate<131067,655355,655355,655355> *param_1)

{
  return (UntypedFormatSpecImpl *)param_1;
}

// SNPrintF<char,int,int,int> @ 1501d4f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* int __cdecl absl::lts_20240722::SNPrintF<char,int,int,int>(char * __ptr64,unsigned __int64,class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067,655355,655355,655355> const &
   __ptr64,char const & __ptr64,int const & __ptr64,int const & __ptr64,int const & __ptr64) */

int __cdecl
absl::lts_20240722::SNPrintF<char,int,int,int>
          (char *param_1,__uint64 param_2,FormatSpecTemplate<131067,655355,655355,655355> *param_3,
          char *param_4,int *param_5,int *param_6,int *param_7)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  code *local_50;
  undefined8 *local_48;
  code *local_40;
  undefined8 *local_38;
  code *local_30;
  undefined8 *local_28;
  code *local_20;
  ulonglong local_18;
  
  puVar1 = local_78;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)(param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 8);
  uStack_5c = *(undefined4 *)(param_3 + 0xc);
  local_78 = (undefined8 *)CONCAT71(local_78._1_7_,*param_4);
  local_58 = local_78;
  local_50 = str_format_internal::FormatArgImpl::Dispatch<char>;
  local_40 = str_format_internal::FormatArgImpl::Dispatch<int>;
  local_30 = str_format_internal::FormatArgImpl::Dispatch<int>;
  local_78._4_4_ = SUB84(puVar1,4);
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,*param_5);
  local_48 = local_78;
  local_20 = str_format_internal::FormatArgImpl::Dispatch<int>;
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,*param_6);
  local_38 = local_78;
  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,*param_7);
  local_28 = local_78;
  local_78 = &local_58;
  uStack_70 = 4;
  iVar2 = str_format_internal::SnprintF(param_1,local_68,&local_68,&local_78);
  return iVar2;
}

// StrFormat<char,int,int,int,int,int,__int64,unsigned_int,std::basic_string_view<char,std::char_traits<char>_>,int,char_const*___ptr64,std::basic_string_view<char,struct_std::char_traits<char>_>_> @ 1501d5070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::StrFormat<char,int,int,int,int,int,__int64,unsigned int,class
   std::basic_string_view<char,struct std::char_traits<char> >,int,char const * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> > >(class
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067,655355,655355,655355,655355,655355,655355,655355,524292,655355,262148,524292>
   const & __ptr64,char const & __ptr64,int const & __ptr64,int const & __ptr64,int const &
   __ptr64,int const & __ptr64,int const & __ptr64,__int64 const & __ptr64,unsigned int const &
   __ptr64,class std::basic_string_view<char,struct std::char_traits<char> > const & __ptr64,int
   const & __ptr64,char const * __ptr64 const & __ptr64,class std::basic_string_view<char,struct
   std::char_traits<char> > const & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::
StrFormat<char,int,int,int,int,int,__int64,unsigned_int,std::basic_string_view<char,std::char_traits<char>_>,int,char_const*___ptr64,std::basic_string_view<char,struct_std::char_traits<char>_>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          FormatSpecTemplate<131067,655355,655355,655355,655355,655355,655355,655355,524292,655355,262148,524292>
          *param_1,char *param_2,int *param_3,int *param_4,int *param_5,int *param_6,int *param_7,
          __int64 *param_8,uint *param_9,basic_string_view<char,std::char_traits<char>_> *param_10,
          int *param_11,char **param_12,basic_string_view<char,std::char_traits<char>_> *param_13)

{
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  code *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined8 local_88;
  code *local_80;
  __int64 local_78;
  code *local_70;
  undefined8 local_68;
  code *local_60;
  basic_string_view<char,std::char_traits<char>_> *local_58;
  code *local_50;
  undefined8 local_48;
  code *local_40;
  char *local_38;
  code *local_30;
  basic_string_view<char,std::char_traits<char>_> *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_e8 = *(undefined4 *)param_1;
  uStack_e4 = *(undefined4 *)(param_1 + 4);
  uStack_e0 = *(undefined4 *)(param_1 + 8);
  uStack_dc = *(undefined4 *)(param_1 + 0xc);
  local_108 = (undefined8 *)CONCAT71((int7)((ulonglong)__return_storage_ptr__ >> 8),*param_2);
  local_d8 = local_108;
  local_d0 = str_format_internal::FormatArgImpl::Dispatch<char>;
  local_108._4_4_ = (undefined4)((ulonglong)__return_storage_ptr__ >> 0x20);
  local_108 = (undefined8 *)CONCAT44(local_108._4_4_,*param_3);
  local_c8 = local_108;
  local_50 = str_format_internal::FormatArgImpl::
             Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
  local_20 = str_format_internal::FormatArgImpl::
             Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
  local_108 = (undefined8 *)CONCAT44(local_108._4_4_,*param_4);
  local_b8 = local_108;
  local_c0 = str_format_internal::FormatArgImpl::Dispatch<int>;
  local_b0 = str_format_internal::FormatArgImpl::Dispatch<int>;
  local_a0 = str_format_internal::FormatArgImpl::Dispatch<int>;
  local_108 = (undefined8 *)CONCAT44(local_108._4_4_,*param_5);
  local_a8 = local_108;
  local_90 = str_format_internal::FormatArgImpl::Dispatch<int>;
  local_80 = str_format_internal::FormatArgImpl::Dispatch<int>;
  local_40 = str_format_internal::FormatArgImpl::Dispatch<int>;
  local_108 = (undefined8 *)CONCAT44(local_108._4_4_,*param_6);
  local_98 = local_108;
  local_108 = (undefined8 *)CONCAT44(local_108._4_4_,*param_7);
  local_88 = local_108;
  local_78 = *param_8;
  local_70 = str_format_internal::FormatArgImpl::Dispatch<__int64>;
  local_108 = (undefined8 *)CONCAT44(local_108._4_4_,*param_9);
  local_68 = local_108;
  local_60 = str_format_internal::FormatArgImpl::Dispatch<unsigned_int>;
  local_58 = param_10;
  local_108 = (undefined8 *)CONCAT44(local_108._4_4_,*param_11);
  local_48 = local_108;
  local_38 = *param_12;
  local_30 = str_format_internal::FormatArgImpl::Dispatch<char_const*___ptr64>;
  local_108 = &local_d8;
  local_28 = param_13;
  uStack_100 = 0xc;
  str_format_internal::FormatPack(__return_storage_ptr__,&local_e8,&local_108);
  return __return_storage_ptr__;
}

// FormatSpecTemplate<131067,655355,655355,655355,655355,655355,655355,655355,524292,655355,262148,524292> @ 1501d5220

/* public: __cdecl
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067,655355,655355,655355,655355,655355,655355,655355,524292,655355,262148,524292>::FormatSpecTemplate<131067,655355,655355,655355,655355,655355,655355,655355,524292,655355,262148,524292>(char
   const * __ptr64) __ptr64 */

FormatSpecTemplate<131067,655355,655355,655355,655355,655355,655355,655355,524292,655355,262148,524292>
* __thiscall
absl::lts_20240722::str_format_internal::
FormatSpecTemplate<131067,655355,655355,655355,655355,655355,655355,655355,524292,655355,262148,524292>
::
FormatSpecTemplate<131067,655355,655355,655355,655355,655355,655355,655355,524292,655355,262148,524292>
          (FormatSpecTemplate<131067,655355,655355,655355,655355,655355,655355,655355,524292,655355,262148,524292>
           *this,char *param_1)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (param_1[lVar1] != '\0');
  *(longlong *)(this + 8) = lVar1;
  *(char **)this = param_1;
  return this;
}

// FormatSpecTemplate<131067,655355,655355,655355> @ 1501d5250

/* public: __cdecl
   absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067,655355,655355,655355>::FormatSpecTemplate<131067,655355,655355,655355>(char
   const * __ptr64) __ptr64 */

FormatSpecTemplate<131067,655355,655355,655355> * __thiscall
absl::lts_20240722::str_format_internal::FormatSpecTemplate<131067,655355,655355,655355>::
FormatSpecTemplate<131067,655355,655355,655355>
          (FormatSpecTemplate<131067,655355,655355,655355> *this,char *param_1)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (param_1[lVar1] != '\0');
  *(longlong *)(this + 8) = lVar1;
  *(char **)this = param_1;
  return this;
}

// FUN_1501d5280 @ 1501d5280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1501d5280(int param_1,HiRep *param_2,uint param_3,longlong *param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  int iVar5;
  TimeZone *this;
  timeval tVar6;
  char *pcVar7;
  __int64 _Var8;
  undefined1 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  CivilInfo local_b8;
  HiRep *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  HiRep local_78;
  code *local_70;
  HiRep local_68;
  code *local_60;
  HiRep local_58;
  code *local_50;
  HiRep local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((ulonglong)param_4[1] < 0x22) {
    param_4[1] = 0;
    return (char *)0x0;
  }
  this = absl::lts_20240722::log_internal::TimeZone();
  if (this == (TimeZone *)0x0) {
    local_c8._0_8_ = *param_2;
    local_c8._8_4_ = param_2[1].lo_;
    tVar6 = absl::lts_20240722::ToTimeval((Time *)local_c8);
    uVar2 = local_c8._0_8_;
    if (param_1 == 0) {
      uVar9 = 0x49;
    }
    else if (param_1 == 1) {
      uVar9 = 0x57;
    }
    else if (param_1 == 2) {
      uVar9 = 0x45;
    }
    else if (param_1 == 3) {
      uVar9 = 0x46;
    }
    else {
      uVar9 = 0x55;
    }
    uVar4 = local_c8._1_7_;
    local_c8[0] = uVar9;
    uVar3 = local_c8._0_8_;
    local_c8._4_4_ = SUB84(uVar2,4);
    local_58.hi_ = local_c8._4_4_;
    local_68.lo_ = tVar6.tv_sec;
    local_68.hi_ = local_c8._4_4_;
    local_c8._0_4_ = (undefined4)uVar3;
    local_c8._4_4_ = SUB74(uVar4,3);
    local_78.lo_ = local_c8._0_4_;
    local_78.hi_ = local_c8._4_4_;
    local_58.lo_ = tVar6.tv_usec;
    local_70 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<char>;
    local_48.lo_ = param_3;
    local_48.hi_ = local_58.hi_;
    local_88 = &local_78;
    local_c8._0_8_ = "%c0000 00:00:%02d.%06d %7d ";
    local_60 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<int>;
    local_50 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<int>;
    local_40 = absl::lts_20240722::str_format_internal::FormatArgImpl::Dispatch<int>;
    uStack_80 = 4;
    uStack_7c = 0;
    local_c8._8_8_ = 0x1b;
    iVar5 = absl::lts_20240722::str_format_internal::SnprintF
                      (*param_4,param_4[1],local_c8,&local_88);
    if (iVar5 < 0) {
      return (char *)0x0;
    }
    pcVar7 = (char *)(longlong)iVar5;
    *param_4 = (longlong)(pcVar7 + *param_4);
    goto LAB_1501d55ba;
  }
  puVar1 = (undefined1 *)*param_4;
  if (param_1 == 0) {
    uVar9 = 0x49;
  }
  else if (param_1 == 1) {
    uVar9 = 0x57;
  }
  else if (param_1 == 2) {
    uVar9 = 0x45;
  }
  else if (param_1 == 3) {
    uVar9 = 0x46;
  }
  else {
    uVar9 = 0x55;
  }
  local_c8._0_8_ = *param_2;
  *puVar1 = uVar9;
  local_c8._8_4_ = param_2[1].lo_;
  absl::lts_20240722::TimeZone::At(this,&local_b8,(Time *)local_c8);
  absl::lts_20240722::numbers_internal::PutTwoDigits((int)local_b8.cs.f_.m,puVar1 + 1);
  absl::lts_20240722::numbers_internal::PutTwoDigits((int)local_b8.cs.f_.d,puVar1 + 3);
  puVar1[5] = 0x20;
  absl::lts_20240722::numbers_internal::PutTwoDigits((int)local_b8.cs.f_.hh,puVar1 + 6);
  puVar1[8] = 0x3a;
  absl::lts_20240722::numbers_internal::PutTwoDigits((int)local_b8.cs.f_.mm,puVar1 + 9);
  puVar1[0xb] = 0x3a;
  absl::lts_20240722::numbers_internal::PutTwoDigits((int)local_b8.cs.f_.ss,puVar1 + 0xc);
  puVar1[0xe] = 0x2e;
  local_c8._0_4_ = local_b8.subsecond.rep_hi_.lo_;
  local_c8._4_4_ = local_b8.subsecond.rep_hi_.hi_;
  local_c8._8_4_ = local_b8.subsecond.rep_lo_;
  _Var8 = absl::lts_20240722::ToInt64Microseconds((Duration *)local_c8);
  absl::lts_20240722::numbers_internal::PutTwoDigits((uint)(_Var8 / 10000),puVar1 + 0xf);
  lVar10 = _Var8 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(_Var8),8);
  lVar11 = (lVar10 >> 6) - (lVar10 >> 0x3f);
  lVar10 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar11),8) + lVar11;
  absl::lts_20240722::numbers_internal::PutTwoDigits
            ((int)lVar11 + ((int)(lVar10 >> 6) - (int)(lVar10 >> 0x3f)) * -100,puVar1 + 0x11);
  absl::lts_20240722::numbers_internal::PutTwoDigits((int)_Var8 + (int)lVar11 * -100,puVar1 + 0x13);
  puVar1[0x15] = 0x20;
  pcVar7 = puVar1 + 0x16;
  if (param_3 < 10) {
    builtin_strncpy(puVar1 + 0x16,"     ",5);
    pcVar7 = puVar1 + 0x1b;
LAB_1501d558f:
    *pcVar7 = ' ';
    pcVar7 = pcVar7 + 1;
  }
  else {
    if (param_3 < 100) {
      builtin_strncpy(puVar1 + 0x16,"    ",4);
      pcVar7 = puVar1 + 0x1a;
      goto LAB_1501d558f;
    }
    if (param_3 < 1000) {
      *pcVar7 = ' ';
      puVar1[0x17] = 0x20;
      puVar1[0x18] = 0x20;
      pcVar7 = puVar1 + 0x19;
      goto LAB_1501d558f;
    }
    if (param_3 < 10000) {
      *pcVar7 = ' ';
      puVar1[0x17] = 0x20;
      pcVar7 = puVar1 + 0x18;
      goto LAB_1501d558f;
    }
    if (param_3 < 100000) {
      *pcVar7 = ' ';
      pcVar7 = puVar1 + 0x17;
      goto LAB_1501d558f;
    }
    if (param_3 < 1000000) goto LAB_1501d558f;
  }
  pcVar7 = absl::lts_20240722::numbers_internal::FastIntToBuffer(param_3,pcVar7);
  *pcVar7 = ' ';
  pcVar7 = pcVar7 + (1 - *param_4);
  *param_4 = (longlong)(pcVar7 + *param_4);
LAB_1501d55ba:
  param_4[1] = param_4[1] - (longlong)pcVar7;
  return pcVar7;
}

// FUN_1501d55e0 @ 1501d55e0

char * FUN_1501d55e0(int param_1,longlong *param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  
  if ((ulonglong)param_2[1] < 0xe) {
    param_2[1] = 0;
    return (char *)0x0;
  }
  puVar1 = (undefined1 *)*param_2;
  *puVar1 = 0x3a;
  pcVar2 = absl::lts_20240722::numbers_internal::FastIntToBuffer(param_1,puVar1 + 1);
  pcVar2[1] = ' ';
  *pcVar2 = ']';
  pcVar2 = pcVar2 + (2 - *param_2);
  param_2[1] = param_2[1] - (longlong)pcVar2;
  *param_2 = (longlong)(pcVar2 + *param_2);
  return pcVar2;
}

// FormatLogMessage @ 1501d5640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::log_internal::FormatLogMessage(enum absl::lts_20240722::LogSeverity,class
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>,class absl::lts_20240722::Duration,unsigned
   int,class std::basic_string_view<char,struct std::char_traits<char> >,int,enum
   absl::lts_20240722::log_internal::PrefixFormat,class std::basic_string_view<char,struct
   std::char_traits<char> >) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::FormatLogMessage
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          LogSeverity param_1,civil_time<absl::lts_20240722::time_internal::second_tag> *param_2,
          Duration *param_3,uint param_4,basic_string_view<char,std::char_traits<char>_> *param_5,
          int param_6,PrefixFormat param_7,basic_string_view<char,std::char_traits<char>_> *param_8)

{
  undefined8 uVar1;
  undefined7 uVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined1 auStack_138 [32];
  undefined1 local_118 [32];
  HiRep *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  HiRep local_e8;
  code *local_e0;
  HiRep local_d8;
  code *local_d0;
  HiRep local_c8;
  code *local_c0;
  HiRep local_b8;
  code *local_b0;
  HiRep local_a8;
  code *local_a0;
  HiRep local_98;
  code *local_90;
  __int64 local_88;
  code *local_80;
  HiRep local_78;
  code *local_70;
  basic_string_view<char,std::char_traits<char>_> *local_68;
  code *local_60;
  HiRep local_58;
  code *local_50;
  char *local_48;
  code *local_40;
  basic_string_view<char,std::char_traits<char>_> *local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  pcVar4 = "";
  local_118._0_8_ = param_3->rep_hi_;
  if (param_7 == 1) {
    pcVar4 = "RAW: ";
  }
  local_118._8_4_ = param_3->rep_lo_;
  local_88 = ToInt64Microseconds((Duration *)local_118);
  uVar1 = local_118._0_8_;
  if (param_1 == kInfo) {
    uVar3 = 0x49;
  }
  else if (param_1 == kWarning) {
    uVar3 = 0x57;
  }
  else if (param_1 == kError) {
    uVar3 = 0x45;
  }
  else if (param_1 == kFatal) {
    uVar3 = 0x46;
  }
  else {
    uVar3 = 0x55;
  }
  uVar2 = local_118._1_7_;
  local_118[0] = uVar3;
  local_118._4_4_ = SUB74(uVar2,3);
  local_e8.lo_ = local_118._0_4_;
  local_e8.hi_ = local_118._4_4_;
  local_e0 = str_format_internal::FormatArgImpl::Dispatch<char>;
  local_118._4_4_ = SUB84(uVar1,4);
  local_d8.lo_ = (int)(param_2->f_).m;
  local_d8.hi_ = local_118._4_4_;
  local_c8.lo_ = (int)(param_2->f_).d;
  local_c8.hi_ = local_118._4_4_;
  local_b8.lo_ = (int)(param_2->f_).hh;
  local_b8.hi_ = local_118._4_4_;
  local_a8.lo_ = (int)(param_2->f_).mm;
  local_a8.hi_ = local_118._4_4_;
  local_98.lo_ = (int)(param_2->f_).ss;
  local_98.hi_ = local_118._4_4_;
  local_80 = str_format_internal::FormatArgImpl::Dispatch<__int64>;
  local_78.lo_ = param_4;
  local_78.hi_ = local_118._4_4_;
  local_70 = str_format_internal::FormatArgImpl::Dispatch<unsigned_int>;
  local_68 = param_5;
  local_58.lo_ = param_6;
  local_58.hi_ = local_118._4_4_;
  local_40 = str_format_internal::FormatArgImpl::Dispatch<char_const*___ptr64>;
  local_f8 = &local_e8;
  local_60 = str_format_internal::FormatArgImpl::
             Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
  local_38 = param_8;
  local_30 = str_format_internal::FormatArgImpl::
             Dispatch<std::basic_string_view<char,std::char_traits<char>_>_>;
  uStack_f0 = 0xc;
  uStack_ec = 0;
  local_d0 = str_format_internal::FormatArgImpl::Dispatch<int>;
  local_c0 = str_format_internal::FormatArgImpl::Dispatch<int>;
  local_b0 = str_format_internal::FormatArgImpl::Dispatch<int>;
  local_a0 = str_format_internal::FormatArgImpl::Dispatch<int>;
  local_90 = str_format_internal::FormatArgImpl::Dispatch<int>;
  local_50 = str_format_internal::FormatArgImpl::Dispatch<int>;
  local_118._0_8_ = "%c%02d%02d %02d:%02d:%02d.%06d %7d %s:%d] %s%s";
  local_118._8_8_ = 0x2e;
  local_48 = pcVar4;
  str_format_internal::FormatPack(__return_storage_ptr__,local_118,&local_f8);
  return __return_storage_ptr__;
}

// FormatLogPrefix @ 1501d5850

/* unsigned __int64 __cdecl absl::lts_20240722::log_internal::FormatLogPrefix(enum
   absl::lts_20240722::LogSeverity,class absl::lts_20240722::Time,unsigned int,class
   std::basic_string_view<char,struct std::char_traits<char> >,int,enum
   absl::lts_20240722::log_internal::PrefixFormat,class absl::lts_20240722::Span<char> & __ptr64) */

__uint64 __cdecl
absl::lts_20240722::log_internal::FormatLogPrefix
          (LogSeverity param_1,Time *param_2,uint param_3,
          basic_string_view<char,std::char_traits<char>_> *param_4,int param_5,PrefixFormat param_6,
          Span<char> *param_7)

{
  HiRep HVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  char *pcVar4;
  undefined4 in_register_0000000c;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong _Size;
  undefined4 in_register_00000084;
  char *pcVar7;
  char *_Size_00;
  uint uVar8;
  undefined4 uVar9;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  HVar1 = (param_2->rep_).rep_hi_;
  uStack_10 = (param_2->rep_).rep_lo_;
  local_18 = HVar1.lo_;
  uStack_14 = HVar1.hi_;
  lVar3 = FUN_1501d5280(CONCAT44(in_register_0000000c,param_1),&local_18,
                        CONCAT44(in_register_00000084,param_3),param_7);
  local_18 = *(uint *)&param_4->_Mydata;
  uStack_14 = *(undefined4 *)((longlong)&param_4->_Mydata + 4);
  pcVar7 = param_4->_Mydata;
  uStack_10 = (uint)param_4->_Mysize;
  uStack_c = *(undefined4 *)((longlong)&param_4->_Mysize + 4);
  _Size = param_4->_Mysize;
  uVar5 = param_7->len_;
  uVar8 = local_18;
  uVar9 = uStack_14;
  if (uVar5 < _Size) {
    if (_Size < uVar5) {
      uVar5 = _Size;
    }
    uStack_10 = (uint)uVar5;
    uStack_c = (undefined4)(uVar5 >> 0x20);
    auVar2._8_4_ = uStack_10;
    auVar2._0_8_ = pcVar7;
    auVar2._12_4_ = uStack_c;
    uVar8 = (uint)pcVar7;
    uVar9 = (undefined4)((ulonglong)pcVar7 >> 0x20);
    _Size = auVar2._8_8_;
  }
  memcpy(param_7->ptr_,(void *)CONCAT44(uVar9,uVar8),_Size);
  param_7->len_ = param_7->len_ - _Size;
  pcVar7 = param_7->ptr_ + _Size;
  param_7->ptr_ = pcVar7;
  if (param_7->len_ < 0xe) {
    pcVar4 = (char *)0x0;
    param_7->len_ = 0;
    pcVar6 = pcVar4;
  }
  else {
    *pcVar7 = ':';
    pcVar4 = numbers_internal::FastIntToBuffer(param_5,pcVar7 + 1);
    pcVar4[1] = ' ';
    *pcVar4 = ']';
    pcVar4 = pcVar4 + (2 - (longlong)param_7->ptr_);
    param_7->len_ = param_7->len_ - (longlong)pcVar4;
    pcVar7 = param_7->ptr_ + (longlong)pcVar4;
    pcVar6 = (char *)param_7->len_;
    param_7->ptr_ = pcVar7;
  }
  if (param_6 == 1) {
    uStack_10 = 5;
    uStack_c = 0;
    _Size_00 = (char *)0x5;
    if (pcVar6 < (char *)0x5) {
      if ((char *)0x5 < pcVar6) {
        pcVar6 = (char *)0x5;
      }
      uStack_10 = (uint)pcVar6;
      uStack_c = (undefined4)((ulonglong)pcVar6 >> 0x20);
      _Size_00 = pcVar6;
    }
    uStack_14 = 1;
    local_18 = 0x536f49dc;
    memcpy(pcVar7,"RAW: ",(size_t)_Size_00);
    param_7->ptr_ = param_7->ptr_ + (longlong)_Size_00;
    param_7->len_ = param_7->len_ - (longlong)_Size_00;
    return (__uint64)(pcVar4 + _Size + lVar3 + (longlong)_Size_00);
  }
  return (__uint64)(pcVar4 + _Size + lVar3);
}

// LogSeverityName @ 1501d59e0

/* char const * __ptr64 __cdecl absl::lts_20240722::LogSeverityName(enum
   absl::lts_20240722::LogSeverity) */

char * __cdecl absl::lts_20240722::LogSeverityName(LogSeverity param_1)

{
  if (param_1 == kInfo) {
    return "INFO";
  }
  if (param_1 == kWarning) {
    return "WARNING";
  }
  if (param_1 == kError) {
    return "ERROR";
  }
  if (param_1 != kFatal) {
    return "UNKNOWN";
  }
  return "FATAL";
}


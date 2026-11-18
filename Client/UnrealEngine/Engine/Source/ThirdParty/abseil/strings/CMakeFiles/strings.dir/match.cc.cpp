// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 20

// _Traits_find_ch<std::char_traits<char>_> @ 14f8faa10

/* unsigned __int64 __cdecl std::_Traits_find_ch<struct std::char_traits<char> >(char const *
   __ptr64 const,unsigned __int64,unsigned __int64,char) */

__uint64 __cdecl
std::_Traits_find_ch<std::char_traits<char>_>
          (char *param_1,__uint64 param_2,__uint64 param_3,char param_4)

{
  void *pvVar1;
  __uint64 _Var2;
  
  if (param_3 < param_2) {
    pvVar1 = memchr(param_1 + param_3,(int)param_4,param_2 - param_3);
    _Var2 = 0xffffffffffffffff;
    if (pvVar1 != (void *)0x0) {
      _Var2 = (longlong)pvVar1 - (longlong)param_1;
    }
    return _Var2;
  }
  return 0xffffffffffffffff;
}

// _Traits_find_first_of<std::char_traits<char>,1> @ 14f8faa70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* unsigned __int64 __cdecl std::_Traits_find_first_of<struct std::char_traits<char>,1>(char const *
   __ptr64 const,unsigned __int64,unsigned __int64,char const * __ptr64 const,unsigned __int64) */

__uint64 __cdecl
std::_Traits_find_first_of<std::char_traits<char>,1>
          (char *param_1,__uint64 param_2,__uint64 param_3,char *param_4,__uint64 param_5)

{
  byte *pbVar1;
  undefined1 auStack_148 [32];
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  if ((param_5 != 0) && (param_3 < param_2)) {
    memset(local_128,0,0x100);
    pbVar1 = (byte *)(param_4 + param_5);
    for (; (byte *)param_4 != pbVar1; param_4 = param_4 + 1) {
      local_128[(byte)*param_4] = '\x01';
    }
    for (pbVar1 = (byte *)(param_1 + param_3); pbVar1 < param_1 + param_2; pbVar1 = pbVar1 + 1) {
      if (local_128[*pbVar1] != '\0') {
        return (longlong)pbVar1 - (longlong)param_1;
      }
    }
  }
  return 0xffffffffffffffff;
}

// _Traits_find_first_of<std::char_traits<char>,0> @ 14f8fab40

/* unsigned __int64 __cdecl std::_Traits_find_first_of<struct std::char_traits<char>,0>(char const *
   __ptr64 const,unsigned __int64,unsigned __int64,char const * __ptr64 const,unsigned __int64) */

__uint64 __cdecl
std::_Traits_find_first_of<std::char_traits<char>,0>
          (char *param_1,__uint64 param_2,__uint64 param_3,char *param_4,__uint64 param_5)

{
  void *pvVar1;
  char *pcVar2;
  
  if ((param_5 != 0) && (param_3 < param_2)) {
    for (pcVar2 = param_1 + param_3; pcVar2 < param_1 + param_2; pcVar2 = pcVar2 + 1) {
      pvVar1 = memchr(param_4,(int)*pcVar2,param_5);
      if (pvVar1 != (void *)0x0) {
        return (longlong)pcVar2 - (longlong)param_1;
      }
    }
  }
  return 0xffffffffffffffff;
}

// EndsWithIgnoreCase @ 14f8fabd0

/* bool __cdecl absl::lts_20240722::EndsWithIgnoreCase(class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::basic_string_view<char,struct std::char_traits<char> >) */

bool __cdecl
absl::lts_20240722::EndsWithIgnoreCase
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  __uint64 _Var5;
  
  uVar1 = param_1->_Mysize;
  uVar2 = param_2->_Mysize;
  if (uVar1 < uVar2) {
    return false;
  }
  if (uVar1 - uVar2 <= uVar1) {
    _Var5 = 0xffffffffffffffff;
    if (uVar2 != 0xffffffffffffffff) {
      _Var5 = uVar2;
    }
    if ((_Var5 == uVar2) &&
       (iVar4 = strings_internal::memcasecmp
                          (param_1->_Mydata + (uVar1 - uVar2),param_2->_Mydata,_Var5), iVar4 == 0))
    {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      return false;
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  std::basic_string_view<char,std::char_traits<char>_>::_Xran();
}

// EqualsIgnoreCase @ 14f8fac40

/* bool __cdecl absl::lts_20240722::EqualsIgnoreCase(class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::basic_string_view<char,struct std::char_traits<char> >) */

bool __cdecl
absl::lts_20240722::EqualsIgnoreCase
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  int iVar1;
  
  if (param_1->_Mysize == param_2->_Mysize) {
    iVar1 = strings_internal::memcasecmp(param_1->_Mydata,param_2->_Mydata,param_1->_Mysize);
    if (iVar1 == 0) {
      return true;
    }
  }
  return false;
}

// FindLongestCommonPrefix @ 14f8fac80

/* class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::FindLongestCommonPrefix(class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::basic_string_view<char,struct std::char_traits<char> >) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::FindLongestCommonPrefix
          (basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,
          undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ushort uVar4;
  int iVar5;
  ulonglong *puVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  puVar2 = (ulonglong *)*param_2;
  uVar10 = param_2[1];
  if ((ulonglong)param_3[1] < (ulonglong)param_2[1]) {
    uVar10 = param_3[1];
  }
  uVar8 = 0;
  lVar3 = *param_3;
  if (uVar10 < 8) {
    if (1 < uVar10) {
      puVar6 = puVar2;
      do {
        uVar4 = *(ushort *)((lVar3 - (longlong)puVar2) + (longlong)puVar6) ^ (ushort)*puVar6;
        if (uVar4 != 0) {
          __return_storage_ptr__->_Mydata = (char *)puVar2;
          uVar7 = uVar8 + 1;
          if ((char)uVar4 != '\0') {
            uVar7 = uVar8;
          }
          __return_storage_ptr__->_Mysize = uVar7;
          return __return_storage_ptr__;
        }
        puVar6 = (ulonglong *)((longlong)puVar6 + 2);
        uVar8 = uVar8 + 2;
      } while ((ulonglong)((2 - (longlong)puVar2) + (longlong)puVar6) <= uVar10);
    }
    if ((uVar8 != uVar10) && (*(char *)(uVar8 + (longlong)puVar2) == *(char *)(uVar8 + lVar3))) {
      uVar8 = uVar8 + 1;
    }
    __return_storage_ptr__->_Mysize = uVar8;
    __return_storage_ptr__->_Mydata = (char *)puVar2;
    return __return_storage_ptr__;
  }
  puVar6 = puVar2;
  do {
    uVar9 = *(ulonglong *)((longlong)puVar6 + (lVar3 - (longlong)puVar2)) ^ *puVar6;
    if (uVar9 != 0) {
      if (__isa_available < 5) {
        lVar3 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
          }
        }
        iVar5 = (int)lVar3;
        if (uVar9 == 0) {
          iVar5 = 0x40;
        }
      }
      else {
        iVar5 = 0;
        for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
          iVar5 = iVar5 + 1;
        }
      }
      uVar8 = (longlong)(iVar5 >> 3) + uVar8;
      goto LAB_14f8fadca;
    }
    uVar8 = uVar8 + 8;
    uVar9 = (longlong)puVar6 + (0x10 - (longlong)puVar2);
    puVar6 = puVar6 + 1;
  } while (uVar9 < uVar10);
  lVar1 = uVar10 - 8;
  uVar9 = *(ulonglong *)((uVar10 - 8) + lVar3) ^ *(ulonglong *)(lVar1 + (longlong)puVar2);
  if (uVar9 == 0) {
    __return_storage_ptr__->_Mysize = uVar10;
    __return_storage_ptr__->_Mydata = (char *)puVar2;
    return __return_storage_ptr__;
  }
  if (__isa_available < 5) {
    lVar3 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
      }
    }
    iVar5 = (int)lVar3;
    if (uVar9 == 0) {
      iVar5 = 0x40;
    }
    uVar8 = (iVar5 >> 3) + lVar1;
  }
  else {
    iVar5 = 0;
    for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
      iVar5 = iVar5 + 1;
    }
    uVar8 = (iVar5 >> 3) + lVar1;
  }
LAB_14f8fadca:
  __return_storage_ptr__->_Mysize = uVar8;
  __return_storage_ptr__->_Mydata = (char *)puVar2;
  return __return_storage_ptr__;
}

// FindLongestCommonSuffix @ 14f8fadf0

/* class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::FindLongestCommonSuffix(class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::basic_string_view<char,struct std::char_traits<char> >) */

basic_string_view<char,std::char_traits<char>_> * __cdecl
absl::lts_20240722::FindLongestCommonSuffix
          (basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,longlong *param_2
          ,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  char *pcVar4;
  ulonglong uVar5;
  
  uVar1 = param_3[1];
  uVar2 = param_2[1];
  uVar5 = uVar2;
  if (uVar1 < uVar2) {
    uVar5 = uVar1;
  }
  uVar3 = 0;
  if (uVar5 == 0) {
    __return_storage_ptr__->_Mydata = (char *)0x0;
    __return_storage_ptr__->_Mysize = 0;
    return __return_storage_ptr__;
  }
  pcVar4 = (char *)(*param_2 + uVar2 + -1);
  if (uVar5 != 0) {
    do {
      if (*pcVar4 != pcVar4[(uVar1 - (*param_2 + uVar2)) + *param_3]) break;
      pcVar4 = pcVar4 + -1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  __return_storage_ptr__->_Mysize = uVar3;
  __return_storage_ptr__->_Mydata = pcVar4 + 1;
  return __return_storage_ptr__;
}

// Load16 @ 14f8fae70

/* unsigned short __cdecl absl::lts_20240722::little_endian::Load16(void const * __ptr64) */

ushort __cdecl absl::lts_20240722::little_endian::Load16(void *param_1)

{
  return *(ushort *)param_1;
}

// Load64 @ 14f8fae80

/* unsigned __int64 __cdecl absl::lts_20240722::little_endian::Load64(void const * __ptr64) */

__uint64 __cdecl absl::lts_20240722::little_endian::Load64(void *param_1)

{
  return *(__uint64 *)param_1;
}

// StartsWithIgnoreCase @ 14f8fae90

/* bool __cdecl absl::lts_20240722::StartsWithIgnoreCase(class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::basic_string_view<char,struct std::char_traits<char> >) */

bool __cdecl
absl::lts_20240722::StartsWithIgnoreCase
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  int iVar1;
  
  if ((param_2->_Mysize <= param_1->_Mysize) &&
     (iVar1 = strings_internal::memcasecmp(param_1->_Mydata,param_2->_Mydata,param_2->_Mysize),
     iVar1 == 0)) {
    return true;
  }
  return false;
}

// StrContains @ 14f8faed0

/* bool __cdecl absl::lts_20240722::StrContains(class std::basic_string_view<char,struct
   std::char_traits<char> >,char) */

bool __cdecl
absl::lts_20240722::StrContains
          (basic_string_view<char,std::char_traits<char>_> *param_1,char param_2)

{
  char *_Buf;
  void *pvVar1;
  
  if (param_1->_Mysize != 0) {
    _Buf = param_1->_Mydata;
    pvVar1 = memchr(_Buf,(int)param_2,param_1->_Mysize);
    if (pvVar1 != (void *)0x0) {
      return (longlong)pvVar1 - (longlong)_Buf != -1;
    }
  }
  return false;
}

// StrContainsIgnoreCase @ 14f8faf20

/* WARNING: Removing unreachable block (ram,0x00014f8faf73) */
/* bool __cdecl absl::lts_20240722::StrContainsIgnoreCase(class std::basic_string_view<char,struct
   std::char_traits<char> >,class std::basic_string_view<char,struct std::char_traits<char> >) */

bool __cdecl
absl::lts_20240722::StrContainsIgnoreCase
          (basic_string_view<char,std::char_traits<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar1 = param_2->_Mysize;
  uVar5 = param_1->_Mysize;
  if (uVar1 <= uVar5) {
    uVar2 = param_2->_Mysize;
    do {
      if (param_1->_Mysize < uVar2) {
LAB_14f8faf9d:
        bVar3 = false;
      }
      else {
        if ((uVar2 == uVar1) &&
           (iVar4 = strings_internal::memcasecmp(param_1->_Mydata,param_2->_Mydata,uVar2),
           iVar4 == 0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (!bVar3) goto LAB_14f8faf9d;
        bVar3 = true;
      }
      if (bVar3) {
        return true;
      }
      param_1->_Mydata = param_1->_Mydata + 1;
      uVar5 = uVar5 - 1;
      param_1->_Mysize = uVar5;
    } while (uVar1 <= uVar5);
  }
  return false;
}

// StrContainsIgnoreCase @ 14f8fafe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl absl::lts_20240722::StrContainsIgnoreCase(class std::basic_string_view<char,struct
   std::char_traits<char> >,char) */

bool __cdecl
absl::lts_20240722::StrContainsIgnoreCase
          (basic_string_view<char,std::char_traits<char>_> *param_1,char param_2)

{
  char *_Buf;
  ulong64 uVar1;
  byte *pbVar2;
  void *pvVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_148 [32];
  byte local_128 [16];
  char local_118 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_128[1] = *(byte *)((longlong)&ascii_internal::kToUpper + (ulonglong)(byte)param_2);
  local_128[0] = *(byte *)((longlong)&ascii_internal::kToLower + (ulonglong)(byte)param_2);
  if (local_128[1] == local_128[0]) {
    _Buf = param_1->_Mydata;
    if ((param_1->_Mysize == 0) ||
       (pvVar3 = memchr(_Buf,(int)param_2,param_1->_Mysize), pvVar3 == (void *)0x0)) {
      bVar7 = true;
    }
    else {
      bVar7 = (longlong)pvVar3 - (longlong)_Buf == -1;
    }
  }
  else {
    local_128[2] = 0;
    lVar4 = -1;
    do {
      lVar6 = lVar4;
      lVar4 = lVar6 + 1;
    } while (local_128[lVar6 + 1] != 0);
    uVar1 = param_1->_Mysize;
    pbVar2 = (byte *)param_1->_Mydata;
    if ((lVar6 + 1 != 0) && (uVar1 != 0)) {
      memset(local_118,0,0x100);
      for (pbVar5 = local_128; pbVar5 != local_128 + lVar6 + 1; pbVar5 = pbVar5 + 1) {
        local_118[*pbVar5] = '\x01';
      }
      for (pbVar5 = pbVar2; pbVar5 < pbVar2 + uVar1; pbVar5 = pbVar5 + 1) {
        if (local_118[*pbVar5] != '\0') {
          lVar4 = (longlong)pbVar5 - (longlong)pbVar2;
          goto LAB_14f8fb115;
        }
      }
    }
    lVar4 = -1;
LAB_14f8fb115:
    bVar7 = lVar4 == -1;
  }
  return !bVar7;
}

// ToHost16 @ 14f8fb160

/* unsigned short __cdecl absl::lts_20240722::little_endian::ToHost16(unsigned short) */

ushort __cdecl absl::lts_20240722::little_endian::ToHost16(ushort param_1)

{
  return param_1;
}

// ToHost64 @ 14f8fb170

/* unsigned __int64 __cdecl absl::lts_20240722::little_endian::ToHost64(unsigned __int64) */

__uint64 __cdecl absl::lts_20240722::little_endian::ToHost64(__uint64 param_1)

{
  return param_1;
}

// UnalignedLoad16 @ 14f8fb180

/* unsigned short __cdecl absl::lts_20240722::base_internal::UnalignedLoad16(void const * __ptr64)
    */

ushort __cdecl absl::lts_20240722::base_internal::UnalignedLoad16(void *param_1)

{
  return *(ushort *)param_1;
}

// ascii_tolower @ 14f8fb190

/* char __cdecl absl::lts_20240722::ascii_tolower(unsigned char) */

char __cdecl absl::lts_20240722::ascii_tolower(uchar param_1)

{
  return *(char *)((longlong)&ascii_internal::kToLower + (ulonglong)param_1);
}

// ascii_toupper @ 14f8fb1b0

/* char __cdecl absl::lts_20240722::ascii_toupper(unsigned char) */

char __cdecl absl::lts_20240722::ascii_toupper(uchar param_1)

{
  return *(char *)((longlong)&ascii_internal::kToUpper + (ulonglong)param_1);
}

// find @ 14f8fb1d0

/* public: unsigned __int64 __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::find(char,unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::basic_string_view<char,std::char_traits<char>_>::find
          (basic_string_view<char,std::char_traits<char>_> *this,char param_1,__uint64 param_2)

{
  char *pcVar1;
  void *pvVar2;
  
  if (param_2 < this->_Mysize) {
    pcVar1 = this->_Mydata;
    pvVar2 = memchr(pcVar1 + param_2,(int)param_1,this->_Mysize - param_2);
    if (pvVar2 != (void *)0x0) {
      return (longlong)pvVar2 - (longlong)pcVar1;
    }
  }
  return 0xffffffffffffffff;
}

// find_first_of @ 14f8fb220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: unsigned __int64 __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::find_first_of(char const * __ptr64 const,unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::basic_string_view<char,std::char_traits<char>_>::find_first_of
          (basic_string_view<char,std::char_traits<char>_> *this,char *param_1,__uint64 param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined1 auStack_148 [32];
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (param_1[lVar4] != '\0');
  uVar1 = this->_Mysize;
  pcVar2 = this->_Mydata;
  if ((lVar4 != 0) && (param_2 < uVar1)) {
    memset(local_128,0,0x100);
    pbVar3 = (byte *)(param_1 + lVar4);
    for (; (byte *)param_1 != pbVar3; param_1 = param_1 + 1) {
      local_128[(byte)*param_1] = '\x01';
    }
    for (pbVar3 = (byte *)(pcVar2 + param_2); pbVar3 < pcVar2 + uVar1; pbVar3 = pbVar3 + 1) {
      if (local_128[*pbVar3] != '\0') {
        return (longlong)pbVar3 - (longlong)pcVar2;
      }
    }
  }
  return 0xffffffffffffffff;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 14

// FUN_1501da390 @ 1501da390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1501da390(longlong *param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte *pbVar4;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong lStack_140;
  char local_138 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  if ((param_3[1] == 0) && (param_2[1] != 0)) {
    lVar2 = *param_2;
    param_1[1] = 0;
    *param_1 = lVar2 + 1 + param_4;
  }
  else {
    local_148 = param_2[1] + *param_2;
    uVar3 = param_2[1];
    pbVar4 = (byte *)*param_3;
    lVar2 = param_3[1];
    lStack_140 = 0;
    if ((lVar2 != 0) && (param_4 < uVar3)) {
      memset(local_138,0,0x100);
      pbVar1 = pbVar4 + lVar2;
      for (; pbVar4 != pbVar1; pbVar4 = pbVar4 + 1) {
        local_138[*pbVar4] = '\x01';
      }
      lVar2 = *param_2;
      for (pbVar4 = (byte *)(lVar2 + param_4); pbVar4 < (byte *)(lVar2 + uVar3); pbVar4 = pbVar4 + 1
          ) {
        if (local_138[*pbVar4] != '\0') {
          if ((longlong)pbVar4 - lVar2 != -1) {
            local_148 = ((longlong)pbVar4 - lVar2) + lVar2;
            lStack_140 = 1;
          }
          break;
        }
      }
    }
    *param_1 = local_148;
    param_1[1] = lStack_140;
  }
  return param_1;
}

// FUN_1501da4f0 @ 1501da4f0

longlong * FUN_1501da4f0(longlong *param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  size_t _Size;
  char *_Buf2;
  int iVar3;
  void *_Buf1;
  longlong lVar4;
  int _Val;
  longlong local_38;
  longlong lStack_30;
  
  if ((param_3[1] == 0) && (param_2[1] != 0)) {
    lVar1 = *param_2;
    param_1[1] = 0;
    *param_1 = lVar1 + 1 + param_4;
    return param_1;
  }
  local_38 = *param_2 + param_2[1];
  uVar2 = param_2[1];
  lVar1 = *param_2;
  _Size = param_3[1];
  _Buf2 = (char *)*param_3;
  lStack_30 = 0;
  if ((_Size <= uVar2) && (param_4 <= uVar2 - _Size)) {
    if (_Size == 0) {
LAB_1501da5f6:
      if (param_4 != 0xffffffffffffffff) {
        lStack_30 = param_3[1];
        local_38 = *param_2 + param_4;
      }
    }
    else {
      _Val = (int)*_Buf2;
      lVar4 = (lVar1 - _Size) + uVar2;
      for (_Buf1 = memchr((void *)(lVar1 + param_4),_Val,(lVar4 + 1) - (longlong)(lVar1 + param_4));
          _Buf1 != (void *)0x0;
          _Buf1 = memchr((void *)((longlong)_Buf1 + 1),_Val,(lVar4 + 1) - ((longlong)_Buf1 + 1))) {
        iVar3 = memcmp(_Buf1,_Buf2,_Size);
        if (iVar3 == 0) {
          param_4 = (longlong)_Buf1 - lVar1;
          goto LAB_1501da5f6;
        }
      }
    }
  }
  *param_1 = local_38;
  param_1[1] = lStack_30;
  return param_1;
}

// ByAnyChar @ 1501da650

/* public: __cdecl absl::lts_20240722::ByAnyChar::ByAnyChar(class std::basic_string_view<char,struct
   std::char_traits<char> >) __ptr64 */

ByAnyChar * __thiscall
absl::lts_20240722::ByAnyChar::ByAnyChar
          (ByAnyChar *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  
  uVar1 = param_1->_Mysize;
  pcVar2 = param_1->_Mydata;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,pcVar2,uVar1);
  return this;
}

// ByLength @ 1501da690

/* public: __cdecl absl::lts_20240722::ByLength::ByLength(__int64) __ptr64 */

ByLength * __thiscall absl::lts_20240722::ByLength::ByLength(ByLength *this,__int64 param_1)

{
  *(__int64 *)this = param_1;
  if (param_1 < 1) {
                    /* WARNING: Subroutine does not return */
    raw_log_internal::RawLog(kFatal,"str_split.cc",0x81,"Check %s failed: %s","length > 0","");
  }
  return this;
}

// ByString @ 1501da6e0

/* public: __cdecl absl::lts_20240722::ByString::ByString(class std::basic_string_view<char,struct
   std::char_traits<char> >) __ptr64 */

ByString * __thiscall
absl::lts_20240722::ByString::ByString
          (ByString *this,basic_string_view<char,std::char_traits<char>_> *param_1)

{
  ulong64 uVar1;
  char *pcVar2;
  
  uVar1 = param_1->_Mysize;
  pcVar2 = param_1->_Mydata;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)this,pcVar2,uVar1);
  return this;
}

// FUN_1501da720 @ 1501da720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1501da720(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 auStack_148 [32];
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  lVar1 = param_2[1];
  uVar2 = param_1[1];
  lVar3 = *param_1;
  if ((lVar1 != 0) && (param_3 < uVar2)) {
    memset(local_128,0,0x100);
    pbVar5 = (byte *)*param_2;
    pbVar4 = pbVar5 + lVar1;
    for (; pbVar5 != pbVar4; pbVar5 = pbVar5 + 1) {
      local_128[*pbVar5] = '\x01';
    }
    for (pbVar4 = (byte *)(lVar3 + param_3); pbVar4 < (byte *)(lVar3 + uVar2); pbVar4 = pbVar4 + 1)
    {
      if (local_128[*pbVar4] != '\0') {
        return (longlong)pbVar4 - lVar3;
      }
    }
  }
  return -1;
}

// Find @ 1501da7f0

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::ByAnyChar::Find(class std::basic_string_view<char,struct
   std::char_traits<char> >,unsigned __int64)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::ByAnyChar::Find
          (ByAnyChar *this,basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,
          undefined4 *param_3)

{
  ByAnyChar *local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = this;
  if (0xf < *(ulonglong *)(this + 0x18)) {
    local_28 = *(ByAnyChar **)this;
  }
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  uStack_20 = *(undefined8 *)(this + 0x10);
  FUN_1501da390(__return_storage_ptr__,&local_18,&local_28);
  return __return_storage_ptr__;
}

// Find @ 1501da860

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::ByAsciiWhitespace::Find(class std::basic_string_view<char,struct
   std::char_traits<char> >,unsigned __int64)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::ByAsciiWhitespace::Find
          (undefined8 param_1,
          basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,
          undefined4 *param_3)

{
  char *local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_28 = " \t\v\f\r\n";
  uStack_20 = 6;
  FUN_1501da390(__return_storage_ptr__,&local_18,&local_28);
  return __return_storage_ptr__;
}

// Find @ 1501da8c0

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::ByChar::Find(class std::basic_string_view<char,struct std::char_traits<char>
   >,unsigned __int64)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::ByChar::Find
          (ByChar *this,basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,
          longlong *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  
  uVar1 = param_3[1];
  lVar2 = *param_3;
  if (((param_4 < uVar1) &&
      (pcVar3 = memchr((void *)(lVar2 + param_4),(int)(char)*this,uVar1 - param_4),
      pcVar3 != (char *)0x0)) && (uVar4 = (longlong)pcVar3 - lVar2, uVar4 != 0xffffffffffffffff)) {
    if (uVar4 <= uVar1) {
      __return_storage_ptr__->_Mydata = pcVar3;
      __return_storage_ptr__->_Mysize = (ulonglong)(uVar1 != uVar4);
      return __return_storage_ptr__;
    }
                    /* WARNING: Subroutine does not return */
    std::basic_string_view<char,std::char_traits<char>_>::_Xran();
  }
  __return_storage_ptr__->_Mysize = 0;
  __return_storage_ptr__->_Mydata = (char *)(lVar2 + uVar1);
  return __return_storage_ptr__;
}

// Find @ 1501da960

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::ByLength::Find(class std::basic_string_view<char,struct
   std::char_traits<char> >,unsigned __int64)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::ByLength::Find
          (ByLength *this,basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,
          longlong *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char *pcVar5;
  
  uVar1 = param_3[1];
  if (uVar1 < param_4) {
    param_4 = uVar1;
  }
  if (param_4 <= uVar1) {
    lVar2 = *param_3;
    uVar3 = *(ulonglong *)this;
    __return_storage_ptr__->_Mysize = 0;
    uVar4 = 0xffffffffffffffff;
    if (uVar1 - param_4 != 0xffffffffffffffff) {
      uVar4 = uVar1 - param_4;
    }
    pcVar5 = (char *)(lVar2 + uVar1);
    if (uVar3 < uVar4) {
      pcVar5 = (char *)(param_4 + lVar2 + uVar3);
    }
    __return_storage_ptr__->_Mydata = pcVar5;
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  std::basic_string_view<char,std::char_traits<char>_>::_Xran();
}

// Find @ 1501da9d0

/* public: class std::basic_string_view<char,struct std::char_traits<char> > __cdecl
   absl::lts_20240722::ByString::Find(class std::basic_string_view<char,struct
   std::char_traits<char> >,unsigned __int64)const __ptr64 */

basic_string_view<char,std::char_traits<char>_> * __thiscall
absl::lts_20240722::ByString::Find
          (ByString *this,basic_string_view<char,std::char_traits<char>_> *__return_storage_ptr__,
          longlong *param_3,ulonglong param_4)

{
  longlong lVar1;
  ByString BVar2;
  size_t _Size;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  char *pcVar7;
  void *_Buf1;
  ulonglong uVar8;
  char *local_38;
  size_t sStack_30;
  
  _Size = *(size_t *)(this + 0x10);
  if (_Size == 1) {
    if (0xf < *(ulonglong *)(this + 0x18)) {
      this = *(ByString **)this;
    }
    uVar3 = param_3[1];
    lVar4 = *param_3;
    if (((param_4 < uVar3) &&
        (pcVar7 = memchr((void *)(lVar4 + param_4),(int)(char)*this,uVar3 - param_4),
        pcVar7 != (char *)0x0)) && (uVar8 = (longlong)pcVar7 - lVar4, uVar8 != 0xffffffffffffffff))
    {
      if (uVar8 <= uVar3) {
        __return_storage_ptr__->_Mydata = pcVar7;
        __return_storage_ptr__->_Mysize = (ulonglong)(uVar3 != uVar8);
        return __return_storage_ptr__;
      }
                    /* WARNING: Subroutine does not return */
      std::basic_string_view<char,std::char_traits<char>_>::_Xran();
    }
    __return_storage_ptr__->_Mysize = 0;
    __return_storage_ptr__->_Mydata = (char *)(lVar4 + uVar3);
    return __return_storage_ptr__;
  }
  if (0xf < *(ulonglong *)(this + 0x18)) {
    this = *(ByString **)this;
  }
  lVar4 = *param_3;
  if ((_Size == 0) && (param_3[1] != 0)) {
    __return_storage_ptr__->_Mysize = 0;
    __return_storage_ptr__->_Mydata = (char *)(lVar4 + 1 + param_4);
    return __return_storage_ptr__;
  }
  uVar3 = param_3[1];
  lVar5 = *param_3;
  local_38 = (char *)(param_3[1] + lVar4);
  sStack_30 = 0;
  if ((_Size <= uVar3) && (param_4 <= uVar3 - _Size)) {
    if (_Size == 0) {
LAB_1501dab56:
      if (param_4 != 0xffffffffffffffff) {
        local_38 = (char *)(param_4 + lVar4);
        sStack_30 = _Size;
      }
    }
    else {
      BVar2 = *this;
      lVar1 = (uVar3 - _Size) + lVar5;
      for (_Buf1 = memchr((void *)(lVar5 + param_4),(int)(char)BVar2,
                          (lVar1 + 1) - (longlong)(lVar5 + param_4)); _Buf1 != (void *)0x0;
          _Buf1 = memchr((void *)((longlong)_Buf1 + 1),(int)(char)BVar2,
                         (lVar1 + 1) - ((longlong)_Buf1 + 1))) {
        iVar6 = memcmp(_Buf1,this,_Size);
        if (iVar6 == 0) {
          param_4 = (longlong)_Buf1 - lVar5;
          goto LAB_1501dab56;
        }
      }
    }
  }
  __return_storage_ptr__->_Mydata = local_38;
  __return_storage_ptr__->_Mysize = sStack_30;
  return __return_storage_ptr__;
}

// FUN_1501daba0 @ 1501daba0

ulonglong FUN_1501daba0(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  size_t _Size;
  longlong lVar2;
  char *_Buf2;
  int iVar3;
  void *_Buf1;
  longlong lVar4;
  int _Val;
  
  uVar1 = param_1[1];
  _Size = param_2[1];
  _Buf2 = (char *)*param_2;
  if ((_Size <= uVar1) && (param_3 <= uVar1 - _Size)) {
    if (_Size == 0) {
      return param_3;
    }
    lVar2 = *param_1;
    _Val = (int)*_Buf2;
    lVar4 = (lVar2 - _Size) + uVar1;
    _Buf1 = memchr((void *)(lVar2 + param_3),_Val,(lVar4 + 1) - (longlong)(lVar2 + param_3));
    while( true ) {
      if (_Buf1 == (void *)0x0) {
        return 0xffffffffffffffff;
      }
      iVar3 = memcmp(_Buf1,_Buf2,_Size);
      if (iVar3 == 0) break;
      _Buf1 = memchr((void *)((longlong)_Buf1 + 1),_Val,(lVar4 + 1) - ((longlong)_Buf1 + 1));
    }
    return (longlong)_Buf1 - lVar2;
  }
  return 0xffffffffffffffff;
}

// find @ 1501dacb0

/* public: unsigned __int64 __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::find(class std::basic_string_view<char,struct std::char_traits<char> >,unsigned __int64)const
   __ptr64 */

__uint64 __thiscall
std::basic_string_view<char,std::char_traits<char>_>::find
          (basic_string_view<char,std::char_traits<char>_> *this,undefined8 *param_2,
          ulonglong param_3)

{
  size_t _Size;
  ulonglong uVar1;
  char *_Buf2;
  char *pcVar2;
  int iVar3;
  void *_Buf1;
  int _Val;
  
  _Size = param_2[1];
  uVar1 = this->_Mysize;
  if ((_Size <= uVar1) && (param_3 <= uVar1 - _Size)) {
    if (_Size == 0) {
      return param_3;
    }
    _Buf2 = (char *)*param_2;
    pcVar2 = this->_Mydata;
    _Val = (int)*_Buf2;
    _Buf1 = memchr(pcVar2 + param_3,_Val,
                   (size_t)(pcVar2 + (((uVar1 - _Size) + 1) - (longlong)(pcVar2 + param_3))));
    while( true ) {
      if (_Buf1 == (void *)0x0) {
        return 0xffffffffffffffff;
      }
      iVar3 = memcmp(_Buf1,_Buf2,_Size);
      if (iVar3 == 0) break;
      _Buf1 = memchr((void *)((longlong)_Buf1 + 1),_Val,
                     (size_t)(pcVar2 + (((uVar1 - _Size) + 1) - ((longlong)_Buf1 + 1))));
    }
    return (longlong)_Buf1 - (longlong)pcVar2;
  }
  return 0xffffffffffffffff;
}

// find_first_of @ 1501dada0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: unsigned __int64 __cdecl std::basic_string_view<char,struct std::char_traits<char>
   >::find_first_of(class std::basic_string_view<char,struct std::char_traits<char> >,unsigned
   __int64)const __ptr64 */

__uint64 __thiscall
std::basic_string_view<char,std::char_traits<char>_>::find_first_of
          (basic_string_view<char,std::char_traits<char>_> *this,undefined8 *param_2,
          ulonglong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined1 auStack_148 [32];
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  lVar2 = param_2[1];
  pbVar5 = (byte *)*param_2;
  uVar3 = this->_Mysize;
  pcVar4 = this->_Mydata;
  if ((lVar2 != 0) && (param_3 < uVar3)) {
    memset(local_128,0,0x100);
    pbVar1 = pbVar5 + lVar2;
    for (; pbVar5 != pbVar1; pbVar5 = pbVar5 + 1) {
      local_128[*pbVar5] = '\x01';
    }
    for (pbVar5 = (byte *)(pcVar4 + param_3); pbVar5 < pcVar4 + uVar3; pbVar5 = pbVar5 + 1) {
      if (local_128[*pbVar5] != '\0') {
        return (longlong)pbVar5 - (longlong)pcVar4;
      }
    }
  }
  return 0xffffffffffffffff;
}


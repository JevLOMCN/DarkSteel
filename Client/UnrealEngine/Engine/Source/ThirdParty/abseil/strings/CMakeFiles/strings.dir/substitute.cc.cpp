// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 6

// copy<std::_String_view_iterator<std::char_traits<char>_>,char*___ptr64> @ 1501dae70

/* char * __ptr64 __cdecl std::copy<class std::_String_view_iterator<struct std::char_traits<char>
   >,char * __ptr64>(class std::_String_view_iterator<struct std::char_traits<char> >,class
   std::_String_view_iterator<struct std::char_traits<char> >,char * __ptr64) */

char * __cdecl
std::copy<std::_String_view_iterator<std::char_traits<char>_>,char*___ptr64>
          (_String_view_iterator<std::char_traits<char>_> param_1,
          _String_view_iterator<std::char_traits<char>_> param_2,char *param_3)

{
  memmove(param_3,param_1._Myptr,(longlong)param_2._Myptr - (longlong)param_1._Myptr);
  return param_3 + ((longlong)param_2._Myptr - (longlong)param_1._Myptr);
}

// fill_n<char*___ptr64,__int64,char> @ 1501daeb0

/* char * __ptr64 __cdecl std::fill_n<char * __ptr64,__int64,char>(char * __ptr64,__int64,char const
   & __ptr64) */

char * __cdecl std::fill_n<char*___ptr64,__int64,char>(char *param_1,__int64 param_2,char *param_3)

{
  if (0 < param_2) {
    memset(param_1,(uint)(byte)*param_3,param_2);
    return param_1 + param_2;
  }
  return param_1;
}

// Arg @ 1501daf00

/* public: __cdecl absl::lts_20240722::substitute_internal::Arg::Arg(void const * __ptr64) __ptr64
    */

Arg * __thiscall absl::lts_20240722::substitute_internal::Arg::Arg(Arg *this,void *param_1)

{
  Arg *pAVar1;
  uint uVar2;
  Arg *pAVar3;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  if (param_1 == (void *)0x0) {
    *(char **)this = "NULL";
    *(undefined8 *)(this + 8) = 4;
    return this;
  }
  pAVar1 = this + 0x30;
  do {
    pAVar3 = pAVar1;
    uVar2 = (uint)param_1;
    param_1 = (void *)((ulonglong)param_1 >> 4);
    pAVar3[-1] = *(Arg *)("0123456789abcdef" + (uVar2 & 0xf));
    pAVar1 = pAVar3 + -1;
  } while (param_1 != (void *)0x0);
  pAVar3[-2] = (Arg)0x78;
  pAVar3 = pAVar3 + -3;
  *pAVar3 = (Arg)0x30;
  *(Arg **)this = pAVar3;
  *(Arg **)(this + 8) = this + (0x30 - (longlong)pAVar3);
  return this;
}

// Arg @ 1501daf80

/* public: __cdecl absl::lts_20240722::substitute_internal::Arg::Arg(struct absl::lts_20240722::Dec)
   __ptr64 */

Arg * __thiscall absl::lts_20240722::substitute_internal::Arg::Arg(Arg *this,ulonglong *param_2)

{
  Arg *pAVar1;
  char cVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  Arg *pAVar6;
  Arg *_Dst;
  char cVar7;
  size_t _Size;
  
  uVar5 = *param_2;
  pAVar1 = this + 0x30;
  cVar2 = *(char *)((longlong)param_2 + 10);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  uVar4 = param_2[1];
  pAVar6 = pAVar1;
  while (cVar7 = (char)uVar5, 9 < uVar5) {
    pAVar6 = pAVar6 + -1;
    uVar5 = uVar5 / 10;
    *pAVar6 = (Arg)(cVar7 + (char)uVar5 * -10 + '0');
  }
  _Dst = pAVar6 + -1;
  *_Dst = (Arg)(cVar7 + '0');
  if (cVar2 != '\0') {
    _Dst = pAVar6 + -2;
    *_Dst = (Arg)0x2d;
  }
  _Size = (longlong)_Dst - ((longlong)pAVar1 - (ulonglong)(byte)uVar4);
  if (0 < (longlong)_Size) {
    bVar3 = false;
    if ((cVar2 != '\0') && (*(char *)((longlong)param_2 + 9) == '0')) {
      _Dst = _Dst + 1;
      bVar3 = true;
    }
    _Dst = _Dst + -_Size;
    memset(_Dst,(uint)*(byte *)((longlong)param_2 + 9),_Size);
    if (bVar3) {
      _Dst = _Dst + -1;
      *_Dst = (Arg)0x2d;
    }
  }
  *(Arg **)this = _Dst;
  *(longlong *)(this + 8) = (longlong)pAVar1 - (longlong)_Dst;
  return this;
}

// Arg @ 1501db080

/* public: __cdecl absl::lts_20240722::substitute_internal::Arg::Arg(struct absl::lts_20240722::Hex)
   __ptr64 */

Arg * __thiscall absl::lts_20240722::substitute_internal::Arg::Arg(Arg *this,ulonglong *param_2)

{
  Arg *pAVar1;
  uint uVar2;
  Arg *_Dst;
  Arg *pAVar3;
  size_t _Size;
  ulonglong uVar4;
  
  uVar4 = *param_2;
  pAVar1 = this + 0x30;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  pAVar3 = pAVar1;
  do {
    pAVar3 = pAVar3 + -1;
    uVar2 = (uint)uVar4;
    uVar4 = uVar4 >> 4;
    *pAVar3 = *(Arg *)("0123456789abcdef" + (uVar2 & 0xf));
  } while (uVar4 != 0);
  if ((longlong)pAVar1 - (longlong)pAVar3 < (longlong)(ulonglong)(byte)param_2[1]) {
    _Dst = pAVar1 + -(ulonglong)(byte)param_2[1];
    _Size = (longlong)pAVar3 - (longlong)_Dst;
    pAVar3 = _Dst;
    if (0 < (longlong)_Size) {
      memset(_Dst,(uint)*(byte *)((longlong)param_2 + 9),_Size);
    }
  }
  *(Arg **)this = pAVar3;
  *(longlong *)(this + 8) = (longlong)pAVar1 - (longlong)pAVar3;
  return this;
}

// SubstituteAndAppendArray @ 1501db120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* void __cdecl absl::lts_20240722::substitute_internal::SubstituteAndAppendArray(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64,class
   std::basic_string_view<char,struct std::char_traits<char> >,class
   std::basic_string_view<char,struct std::char_traits<char> > const * __ptr64,unsigned __int64) */

void __cdecl
absl::lts_20240722::substitute_internal::SubstituteAndAppendArray
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          basic_string_view<char,std::char_traits<char>_> *param_2,
          basic_string_view<char,struct_std::char_traits<char>_> *param_3,__uint64 param_4)

{
  ulonglong uVar1;
  char cVar2;
  LogSeverity *pLVar3;
  ulonglong uVar4;
  char *pcVar5;
  size_t _Size;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar6;
  LogSeverity *pLVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  LogSeverity *pLVar9;
  LogSeverity *pLVar10;
  char *_Dst;
  LogSeverity *pLVar11;
  undefined1 auStackY_b8 [32];
  int local_88 [2];
  char *local_80;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_78;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pLVar10 = (LogSeverity *)0x0;
  pLVar3 = (LogSeverity *)param_2->_Mysize;
  if (pLVar3 != (LogSeverity *)0x0) {
    pLVar7 = (LogSeverity *)&DAT_00000001;
    pLVar9 = pLVar10;
    pLVar11 = pLVar10;
    do {
      if (param_2->_Mydata[(longlong)pLVar11] == '$') {
        if (pLVar3 <= pLVar7) {
          return;
        }
        cVar2 = (param_2->_Mydata + 1)[(longlong)pLVar11];
        if ((byte)(cVar2 - 0x30U) < 10) {
          if (param_4 <= (longlong)cVar2 - 0x30U) {
            return;
          }
          pLVar9 = (LogSeverity *)
                   ((longlong)pLVar9 + *(longlong *)(param_3 + ((longlong)cVar2 - 0x30U) * 0x10 + 8)
                   );
          pLVar7 = (LogSeverity *)((longlong)pLVar7 + 1);
          pLVar11 = (LogSeverity *)((longlong)pLVar11 + 1);
        }
        else {
          if (cVar2 != '$') {
            return;
          }
          pLVar9 = (LogSeverity *)((longlong)pLVar9 + 1);
          pLVar7 = (LogSeverity *)((longlong)pLVar7 + 1);
          pLVar11 = (LogSeverity *)((longlong)pLVar11 + 1);
        }
      }
      else {
        pLVar9 = (LogSeverity *)((longlong)pLVar9 + 1);
      }
      pLVar11 = (LogSeverity *)((longlong)pLVar11 + 1);
      pLVar7 = (LogSeverity *)((longlong)pLVar7 + 1);
    } while (pLVar11 < pLVar3);
    if (pLVar9 != (LogSeverity *)0x0) {
      uVar4 = (param_1->_Mypair)._Myval2._Mysize;
      if ((LogSeverity *)~uVar4 < pLVar9) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (&local_78,
                   "Check size <= std::numeric_limits<size_t>::max() - original_size failed: ");
        pbVar6 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                 basic_string<char,std::char_traits<char>,std::allocator<char>_>
                           (&local_58,"size_t overflow");
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator+=
                  (&local_78,pbVar6);
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_58);
        local_80 = 
        "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\strings\\substitute.cc"
        ;
        local_88[0] = 0x5a;
        local_88[1] = 3;
        pLVar9 = (LogSeverity *)(local_88 + 1);
        base_internal::
        AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
        ::
        operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64>
                  (&raw_log_internal::internal_log_function,pLVar9,&local_80,local_88,&local_78);
      }
      uVar1 = uVar4 + (longlong)pLVar9;
      if (uVar4 < uVar1) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
                  (param_1,(__uint64)pLVar9,'\0');
      }
      else {
        pbVar8 = param_1;
        if (0xf < (param_1->_Mypair)._Myval2._Myres) {
          pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        (param_1->_Mypair)._Myval2._Mysize = uVar1;
        (pbVar8->_Mypair)._Myval2._Bx._Buf[uVar1] = '\0';
      }
      if (0xf < (param_1->_Mypair)._Myval2._Myres) {
        param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (param_1->_Mypair)._Myval2._Bx._Ptr;
      }
      _Dst = (param_1->_Mypair)._Myval2._Bx._Buf + uVar4;
      pLVar3 = (LogSeverity *)param_2->_Mysize;
      if (pLVar3 != (LogSeverity *)0x0) {
        pcVar5 = param_2->_Mydata;
        do {
          cVar2 = pcVar5[(longlong)pLVar10];
          if (cVar2 == '$') {
            cVar2 = (pcVar5 + 1)[(longlong)pLVar10];
            if ((byte)(cVar2 - 0x30U) < 10) {
              _Size = *(size_t *)(param_3 + ((longlong)cVar2 + -0x30) * 0x10 + 8);
              memmove(_Dst,*(void **)(param_3 + ((longlong)cVar2 + -0x30) * 0x10),_Size);
              _Dst = _Dst + _Size;
              pLVar10 = (LogSeverity *)((longlong)pLVar10 + 1);
            }
            else if (cVar2 == '$') {
              *_Dst = '$';
              _Dst = _Dst + 1;
              pLVar10 = (LogSeverity *)((longlong)pLVar10 + 1);
            }
          }
          else {
            *_Dst = cVar2;
            _Dst = _Dst + 1;
          }
          pLVar10 = (LogSeverity *)((longlong)pLVar10 + 1);
        } while (pLVar10 < pLVar3);
      }
    }
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 27

// duration<__int64,std::ratio<1,1>_><int,0> @ 14f90a780

/* public: __cdecl std::chrono::duration<__int64,struct std::ratio<1,1> >::duration<__int64,struct
   std::ratio<1,1> ><int,0>(int const & __ptr64) __ptr64 */

duration<__int64,std::ratio<1,1>_> * __thiscall
std::chrono::duration<__int64,std::ratio<1,1>_>::duration<__int64,std::ratio<1,1>_><int,0>
          (duration<__int64,std::ratio<1,1>_> *this,int *param_1)

{
  this->_MyRep = (longlong)*param_1;
  return this;
}

// duration<__int64,std::ratio<1,1>_><int,std::ratio<3600,1>,0> @ 14f90a790

/* public: __cdecl std::chrono::duration<__int64,struct std::ratio<1,1> >::duration<__int64,struct
   std::ratio<1,1> ><int,struct std::ratio<3600,1>,0>(class std::chrono::duration<int,struct
   std::ratio<3600,1> > const & __ptr64) __ptr64 */

duration<__int64,std::ratio<1,1>_> * __thiscall
std::chrono::duration<__int64,std::ratio<1,1>_>::
duration<__int64,std::ratio<1,1>_><int,std::ratio<3600,1>,0>
          (duration<__int64,std::ratio<1,1>_> *this,duration<int,std::ratio<3600,1>_> *param_1)

{
  this->_MyRep = (longlong)param_1->_MyRep * 0xe10;
  return this;
}

// operator()<char_const&___ptr64,char_const&___ptr64> @ 14f90a7b0

/* public: bool __cdecl std::equal_to<void>::operator()<char const & __ptr64,char const &
   __ptr64>(char const & __ptr64,char const & __ptr64)const __ptr64 */

bool __thiscall
std::equal_to<void>::operator()<char_const&___ptr64,char_const&___ptr64>
          (equal_to<void> *this,char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}

// ERROR_UNKNOWN_OPERATOR_TYPE<__int64,std::ratio<1,1>,int,std::ratio<3600,1>_> @ 14f90a7c0

/* UNKNOWN __cdecl std::chrono::ERROR UNKNOWN OPERATOR TYPE<__int64,struct
   std::ratio<1,1>,int,struct std::ratio<3600,1> >(class std::chrono::duration<__int64,struct
   std::ratio<1,1> > const & __ptr64,class std::chrono::duration<int,struct std::ratio<3600,1> >
   const & __ptr64) */

longlong __cdecl
std::chrono::ERROR_UNKNOWN_OPERATOR_TYPE<__int64,std::ratio<1,1>,int,std::ratio<3600,1>_>
          (duration<__int64,std::ratio<1,1>_> *param_1,duration<int,std::ratio<3600,1>_> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2->_MyRep * 0xe10;
  if (param_1->_MyRep == lVar2) {
    return (ulonglong)(uint7)(int7)(int3)((uint)param_2->_MyRep >> 8) << 8;
  }
  lVar1 = 0xff;
  if (lVar2 <= param_1->_MyRep) {
    lVar1 = 1;
  }
  return lVar1;
}

// _Get_unwrapped_n<char*___ptr64&___ptr64,unsigned___int64> @ 14f90a7f0

/* UNKNOWN __cdecl std::_Get_unwrapped_n<char * __ptr64 & __ptr64,unsigned __int64>(char * __ptr64 &
   __ptr64,unsigned __int64) */

char * __cdecl
std::_Get_unwrapped_n<char*___ptr64&___ptr64,unsigned___int64>(char **param_1,__uint64 param_2)

{
  return *param_1;
}

// _Get_unwrapped_n<char_const*___ptr64&___ptr64,unsigned___int64> @ 14f90a800

/* UNKNOWN __cdecl std::_Get_unwrapped_n<char const * __ptr64 & __ptr64,unsigned __int64>(char const
   * __ptr64 & __ptr64,unsigned __int64) */

char * __cdecl
std::_Get_unwrapped_n<char_const*___ptr64&___ptr64,unsigned___int64>
          (char **param_1,__uint64 param_2)

{
  return *param_1;
}

// _Get_unwrapped_n<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_const&___ptr64,__int64> @ 14f90a810

/* UNKNOWN __cdecl std::_Get_unwrapped_n<class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<char> > > const & __ptr64,__int64>(class
   std::_String_const_iterator<class std::_String_val<struct std::_Simple_types<char> > > const &
   __ptr64,__int64) */

char * __cdecl
std::
_Get_unwrapped_n<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_const&___ptr64,__int64>
          (_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> *param_1,
          __int64 param_2)

{
  return param_1->_Ptr;
}

// _Memcmp_ranges<char_const*___ptr64,char_const*___ptr64> @ 14f90a820

/* int __cdecl std::_Memcmp_ranges<char const * __ptr64,char const * __ptr64>(char const *
   __ptr64,char const * __ptr64,char const * __ptr64) */

int __cdecl
std::_Memcmp_ranges<char_const*___ptr64,char_const*___ptr64>
          (char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = memcmp(param_1,param_3,(longlong)param_2 - (longlong)param_1);
  return iVar1;
}

// _Refancy<char_const*___ptr64,0> @ 14f90a840

/* char const * __ptr64 __cdecl std::_Refancy<char const * __ptr64,0>(char const * __ptr64) */

char * __cdecl std::_Refancy<char_const*___ptr64,0>(char *param_1)

{
  return param_1;
}

// copy_n<char_const*___ptr64,unsigned___int64,char*___ptr64> @ 14f90a850

/* char * __ptr64 __cdecl std::copy_n<char const * __ptr64,unsigned __int64,char * __ptr64>(char
   const * __ptr64,unsigned __int64,char * __ptr64) */

char * __cdecl
std::copy_n<char_const*___ptr64,unsigned___int64,char*___ptr64>
          (char *param_1,__uint64 param_2,char *param_3)

{
  if (param_2 != 0) {
    memmove(param_3,param_1,param_2);
    return param_3 + param_2;
  }
  return param_3;
}

// duration_cast<std::chrono::duration<__int64,std::ratio<1,1>_>,int,std::ratio<3600,1>,0> @ 14f90a8a0

/* class std::chrono::duration<__int64,struct std::ratio<1,1> > __cdecl
   std::chrono::duration_cast<class std::chrono::duration<__int64,struct std::ratio<1,1>
   >,int,struct std::ratio<3600,1>,0>(class std::chrono::duration<int,struct std::ratio<3600,1> >
   const & __ptr64) */

duration<__int64,std::ratio<1,1>_> __cdecl
std::chrono::duration_cast<std::chrono::duration<__int64,std::ratio<1,1>_>,int,std::ratio<3600,1>,0>
          (duration<int,std::ratio<3600,1>_> *param_1)

{
  int *in_RDX;
  
  *(longlong *)param_1 = (longlong)*in_RDX * 0xe10;
  return (duration<__int64,std::ratio<1,1>_>)(long64)param_1;
}

// equal<char_const*___ptr64,std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_> @ 14f90a8c0

/* bool __cdecl std::equal<char const * __ptr64,class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<char> > > >(char const * __ptr64 const,char const *
   __ptr64 const,class std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >) */

bool __cdecl
std::
equal<char_const*___ptr64,std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>
          (char *param_1,char *param_2,
          _String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> param_3)

{
  int iVar1;
  
  iVar1 = memcmp(param_1,param_3._Ptr,(longlong)param_2 - (longlong)param_1);
  return iVar1 == 0;
}

// equal<char_const*___ptr64,std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>,std::equal_to<void>_> @ 14f90a8f0

/* bool __cdecl std::equal<char const * __ptr64,class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<char> > >,struct std::equal_to<void> >(char const *
   __ptr64 const,char const * __ptr64 const,class std::_String_const_iterator<class
   std::_String_val<struct std::_Simple_types<char> > >,struct std::equal_to<void>) */

bool __cdecl
std::
equal<char_const*___ptr64,std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>,std::equal_to<void>_>
          (char *param_1,char *param_2,
          _String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> param_3,
          equal_to<void> param_4)

{
  int iVar1;
  
  iVar1 = memcmp(param_1,param_3._Ptr,(longlong)param_2 - (longlong)param_1);
  return iVar1 == 0;
}

// FixedOffsetFromName @ 14f90a920

/* bool __cdecl absl::lts_20240722::time_internal::cctz::FixedOffsetFromName(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64,class std::chrono::duration<__int64,struct std::ratio<1,1> > * __ptr64) */

bool __cdecl
absl::lts_20240722::time_internal::cctz::FixedOffsetFromName
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          duration<__int64,std::ratio<1,1>_> *param_2)

{
  ulonglong uVar1;
  ulong64 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  longlong lVar8;
  
  uVar1 = (param_1->_Mypair)._Myval2._Myres;
  uVar2 = (param_1->_Mypair)._Myval2._Mysize;
  pbVar7 = param_1;
  if (0xf < uVar1) {
    pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (param_1->_Mypair)._Myval2._Bx._Ptr;
  }
  if ((uVar2 == 3) && (iVar4 = memcmp(pbVar7,"UTC",3), iVar4 == 0)) {
LAB_14f90a98e:
    param_2->_MyRep = 0;
    bVar3 = true;
  }
  else {
    pbVar7 = param_1;
    if (0xf < uVar1) {
      pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (param_1->_Mypair)._Myval2._Bx._Ptr;
    }
    if (uVar2 == 4) {
      iVar4 = memcmp(pbVar7,"UTC0",4);
      if (iVar4 == 0) goto LAB_14f90a98e;
    }
    else if (uVar2 == 0x12) {
      pbVar7 = param_1;
      if (0xf < uVar1) {
        pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (param_1->_Mypair)._Myval2._Bx._Ptr;
      }
      lVar8 = s_Fixed_UTC_1535cea10._0_8_ - (longlong)(pbVar7->_Mypair)._Myval2._Bx._Ptr;
      if (lVar8 == 0) {
        lVar8 = (ulonglong)(byte)s_Fixed_UTC_1535cea10[8] -
                (ulonglong)(byte)(pbVar7->_Mypair)._Myval2._Bx._Buf[8];
      }
      if (lVar8 == 0) {
        if (0xf < uVar1) {
          param_1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                    (param_1->_Mypair)._Myval2._Bx._Ptr;
        }
        if ((((((param_1->_Mypair)._Myval2._Bx._Buf[9] - 0x2bU & 0xfd) == 0) &&
             ((param_1->_Mypair)._Myval2._Bx._Buf[0xc] == ':')) &&
            ((param_1->_Mypair)._Myval2._Bx._Buf[0xf] == ':')) &&
           (((iVar4 = FUN_14f90af00((undefined1 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 10)),
             iVar4 != -1 &&
             (iVar5 = FUN_14f90af00((undefined1 *)((longlong)&(param_1->_Mypair)._Myval2._Bx + 0xd))
             , iVar5 != -1)) &&
            ((iVar6 = FUN_14f90af00(&(param_1->_Mypair)._Myval2._Mysize), iVar6 != -1 &&
             (iVar6 = (iVar4 * 0x3c + iVar5) * 0x3c + iVar6, iVar6 < 0x15181)))))) {
          if ((param_1->_Mypair)._Myval2._Bx._Buf[9] == '-') {
            iVar6 = -iVar6;
          }
          param_2->_MyRep = (longlong)iVar6;
          return true;
        }
      }
    }
    bVar3 = false;
  }
  return bVar3;
}

// FixedOffsetToAbbr @ 14f90aa70

/* WARNING: Removing unreachable block (ram,0x00014f90aafd) */
/* WARNING: Removing unreachable block (ram,0x00014f90ab3a) */
/* WARNING: Removing unreachable block (ram,0x00014f90abec) */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::time_internal::cctz::FixedOffsetToAbbr(class
   std::chrono::duration<__int64,struct std::ratio<1,1> > const & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::time_internal::cctz::FixedOffsetToAbbr
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          duration<__int64,std::ratio<1,1>_> *param_1)

{
  ulonglong uVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  ulong64 *puVar3;
  ulong64 *puVar4;
  
  FixedOffsetToName(__return_storage_ptr__,param_1);
  puVar3 = &(__return_storage_ptr__->_Mypair)._Myval2._Mysize;
  if (*puVar3 == 0x12) {
    puVar4 = &(__return_storage_ptr__->_Mypair)._Myval2._Myres;
    pbVar2 = __return_storage_ptr__;
    if (0xf < *puVar4) {
      pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    memmove(pbVar2,(void *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 9),10);
    *puVar3 = 9;
    pbVar2 = __return_storage_ptr__;
    if (0xf < *puVar4) {
      pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    puVar4 = &(__return_storage_ptr__->_Mypair)._Myval2._Mysize;
    puVar3 = &(__return_storage_ptr__->_Mypair)._Myval2._Myres;
    memmove((void *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 6),
            (void *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 7),3);
    *puVar4 = 8;
    pbVar2 = __return_storage_ptr__;
    if (0xf < *puVar3) {
      pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    memmove((void *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 3),
            (void *)((longlong)&(pbVar2->_Mypair)._Myval2._Bx + 4),5);
    *puVar4 = 7;
    uVar1 = *puVar3;
    pbVar2 = __return_storage_ptr__;
    if (0xf < uVar1) {
      pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
    }
    if ((pbVar2->_Mypair)._Myval2._Bx._Buf[5] == '0') {
      pbVar2 = __return_storage_ptr__;
      if (0xf < uVar1) {
        pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
      }
      if ((pbVar2->_Mypair)._Myval2._Bx._Buf[6] == '0') {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
                  (__return_storage_ptr__,5,2);
        uVar1 = (__return_storage_ptr__->_Mypair)._Myval2._Myres;
        pbVar2 = __return_storage_ptr__;
        if (0xf < uVar1) {
          pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                   (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
        }
        if ((pbVar2->_Mypair)._Myval2._Bx._Buf[3] == '0') {
          pbVar2 = __return_storage_ptr__;
          if (0xf < uVar1) {
            pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                     (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr;
          }
          if ((pbVar2->_Mypair)._Myval2._Bx._Buf[4] == '0') {
            std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
                      (__return_storage_ptr__,3,2);
          }
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// FixedOffsetToName @ 14f90ac00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl
   absl::lts_20240722::time_internal::cctz::FixedOffsetToName(class
   std::chrono::duration<__int64,struct std::ratio<1,1> > const & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::time_internal::cctz::FixedOffsetToName
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          duration<__int64,std::ratio<1,1>_> *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulong64 uVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_58 [40];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_30;
  char local_28 [8];
  char local_20;
  undefined1 local_1f;
  char local_1e;
  char local_1d;
  undefined1 local_1c;
  char local_1b;
  char local_1a;
  undefined1 local_19;
  char local_18;
  char local_17;
  undefined1 local_16;
  ulonglong local_10;
  ulong64 uVar5;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  lVar1 = param_1->_MyRep;
  if (lVar1 == 0) {
LAB_14f90ae38:
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 3;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0xf;
    *(short *)&(__return_storage_ptr__->_Mypair)._Myval2._Bx = s_UTC._0_2_;
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[2] = s_UTC[2];
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Buf[3] = '\0';
  }
  else {
    if (lVar1 == -0x15180) {
LAB_14f90ac4b:
      cVar2 = -1;
LAB_14f90ac4d:
      if ('\0' < cVar2) goto LAB_14f90ae38;
    }
    else {
      if (lVar1 < -0x15180) goto LAB_14f90ae38;
      if (lVar1 != 0x15180) {
        cVar2 = '\x01';
        if (lVar1 < 0x15180) goto LAB_14f90ac4b;
        goto LAB_14f90ac4d;
      }
    }
    iVar3 = (int)lVar1;
    local_1f = 0x2b;
    if (iVar3 < 0) {
      local_1f = 0x2d;
    }
    iVar6 = iVar3 / 0x3c;
    iVar7 = iVar3 % 0x3c;
    iVar8 = iVar7;
    if (iVar3 < 0) {
      iVar8 = iVar7 + -0x3c;
      if (iVar7 < 1) {
        iVar8 = iVar7;
      }
      iVar8 = -iVar8;
      iVar3 = iVar6 + 1;
      if (iVar7 < 1) {
        iVar3 = iVar6;
      }
      iVar6 = -iVar3;
    }
    local_28 = (char  [8])s_Fixed_UTC_1535cea10._0_8_;
    local_1c = 0x3a;
    local_19 = 0x3a;
    local_20 = s_Fixed_UTC_1535cea10[8];
    local_1e = "0123456789"[((iVar6 / 0x3c) / 10) % 10];
    local_1d = "0123456789"[(iVar6 / 0x3c) % 10];
    local_1b = "0123456789"[((iVar6 % 0x3c) / 10) % 10];
    local_1a = "0123456789"[(iVar6 % 0x3c) % 10];
    local_16 = 0;
    local_18 = "0123456789"[(iVar8 / 10) % 10];
    local_17 = "0123456789"[iVar8 % 10];
    (__return_storage_ptr__->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
    *(undefined8 *)((longlong)&(__return_storage_ptr__->_Mypair)._Myval2._Bx + 8) = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Mysize = 0;
    (__return_storage_ptr__->_Mypair)._Myval2._Myres = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar4 = uVar5 + 1;
      lVar1 = uVar5 + 1;
      uVar5 = uVar4;
    } while (local_28[lVar1] != '\0');
    local_30 = __return_storage_ptr__;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              (__return_storage_ptr__,local_28,uVar4);
  }
  return __return_storage_ptr__;
}

// FUN_14f90af00 @ 14f90af00

int FUN_14f90af00(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = strchr("0123456789",(int)*param_1);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = strchr("0123456789",(int)param_1[1]);
    if (pcVar2 != (char *)0x0) {
      return (int)pcVar1 * 10 + 0x6b01f0a0 + (int)pcVar2;
    }
  }
  return -1;
}

// _Clamp_suffix_size @ 14f90af80

/* public: unsigned __int64 __cdecl std::_String_val<struct std::_Simple_types<char>
   >::_Clamp_suffix_size(unsigned __int64,unsigned __int64)const __ptr64 */

__uint64 __thiscall
std::_String_val<std::_Simple_types<char>_>::_Clamp_suffix_size
          (_String_val<std::_Simple_types<char>_> *this,__uint64 param_1,__uint64 param_2)

{
  ulonglong uVar1;
  
  uVar1 = this->_Mysize - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  return param_2;
}

// _Erase_noexcept @ 14f90afa0

/* private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   & __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::_Erase_noexcept(unsigned __int64,unsigned __int64) __ptr64 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Erase_noexcept
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,__uint64 param_1,
          __uint64 param_2)

{
  char *_Dst;
  ulonglong uVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  ulong64 uVar3;
  
  uVar3 = (this->_Mypair)._Myval2._Mysize;
  uVar1 = uVar3 - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  pbVar2 = this;
  if (0xf < (this->_Mypair)._Myval2._Myres) {
    pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (this->_Mypair)._Myval2._Bx._Ptr;
  }
  uVar3 = uVar3 - param_2;
  _Dst = (pbVar2->_Mypair)._Myval2._Bx._Buf + param_1;
  memmove(_Dst,_Dst + param_2,(uVar3 - param_1) + 1);
  (this->_Mypair)._Myval2._Mysize = uVar3;
  return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this;
}

// _Unwrapped @ 14f90b000

/* public: char const * __ptr64 __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::_Unwrapped(void)const __ptr64 */

char * __thiscall
std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>::_Unwrapped
          (_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> *this)

{
  return this->_Ptr;
}

// _Verify_offset @ 14f90b010

/* public: void __cdecl std::_String_const_iterator<class std::_String_val<struct
   std::_Simple_types<char> > >::_Verify_offset(__int64)const __ptr64 */

void __thiscall
std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>::_Verify_offset
          (_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> *this,
          __int64 param_1)

{
  return;
}

// begin @ 14f90b020

/* public: class std::_String_const_iterator<class std::_String_val<struct std::_Simple_types<char>
   > > __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::begin(void)const __ptr64 */

_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_> __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::begin
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this)

{
  char *in_RDX;
  
  if (0xf < (this->_Mypair)._Myval2._Myres) {
    *(char **)in_RDX = (this->_Mypair)._Myval2._Bx._Ptr;
    return (_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>)in_RDX;
  }
  *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)in_RDX = this;
  return (_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>)in_RDX;
}

// count @ 14f90b040

/* public: int __cdecl std::chrono::duration<int,struct std::ratio<3600,1> >::count(void)const
   __ptr64 */

int __thiscall
std::chrono::duration<int,std::ratio<3600,1>_>::count(duration<int,std::ratio<3600,1>_> *this)

{
  return this->_MyRep;
}

// erase @ 14f90b050

/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
   __ptr64 __cdecl std::basic_string<char,struct std::char_traits<char>,class std::allocator<char>
   >::erase(unsigned __int64,unsigned __int64) __ptr64 */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,__uint64 param_1,
          __uint64 param_2)

{
  char *_Dst;
  ulonglong uVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  
  uVar1 = (this->_Mypair)._Myval2._Mysize;
  if (param_1 <= uVar1) {
    if (uVar1 - param_1 < param_2) {
      param_2 = uVar1 - param_1;
    }
    pbVar2 = this;
    if (0xf < (this->_Mypair)._Myval2._Myres) {
      pbVar2 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (this->_Mypair)._Myval2._Bx._Ptr;
    }
    _Dst = (pbVar2->_Mypair)._Myval2._Bx._Buf + param_1;
    memmove(_Dst,_Dst + param_2,((uVar1 - param_2) - param_1) + 1);
    (this->_Mypair)._Myval2._Mysize = uVar1 - param_2;
    return (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)this;
  }
                    /* WARNING: Subroutine does not return */
  _String_val<std::_Simple_types<char>_>::_Xran();
}

// zero @ 14f90b0c0

/* public: static class std::chrono::duration<__int64,struct std::ratio<1,1> > __cdecl
   std::chrono::duration<__int64,struct std::ratio<1,1> >::zero(void) */

void __cdecl std::chrono::duration<__int64,std::ratio<1,1>_>::zero(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0;
  return;
}

// zero @ 14f90b0e0

/* public: static __int64 __cdecl std::chrono::duration_values<__int64>::zero(void) */

__int64 __cdecl std::chrono::duration_values<__int64>::zero(void)

{
  return 0;
}

// FUN_1502945c0 @ 1502945c0

void FUN_1502945c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_2 + 0x60)
              );
  }
  return;
}

